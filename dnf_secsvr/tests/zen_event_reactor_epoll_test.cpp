// 32 位宿主测试：ZEN_Reactor / ZEN_Epoll_Reactor 还原实现 vs gunnersvr oracle
// 语义（期望值全部来自对 oracle 0x0808da60..0x0808f820 的反汇编转写）。
// 覆盖：构造/字段初值、寄存器表上限与重复注册、真实 epoll 事件分发、
//       handle_input 失败 -> handle_close 链、schedule/cancel_wakeup 掩码映射、
//       remove_handler、close() 桶头语义、默认构造未初始化路径、超时换算。
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <stdint.h>
#include <sys/socket.h>
#include <sys/epoll.h>
#include <sys/time.h>
#include <fcntl.h>


#include "src/commlib/zenlib/zen_event_reactor_epoll.h"
#include "src/commlib/zenlib/zen_event_handle_base.h"
#include "src/commlib/zenlib/zen_time_value.h"

// ---- trace log stubs（真实类由其他任务还原，宿主测试只提供符号） ----
struct ZEN_Trace_LogMsg {
    static void debug_errorex(const char *str_format, ...);
    static void debug_infoex(const char *str_format, ...);
};
void ZEN_Trace_LogMsg::debug_errorex(const char *, ...) {}
void ZEN_Trace_LogMsg::debug_infoex(const char *, ...) {}

// ---- ZEN_Event_Handler 基类虚函数定义（gunnersvr 无独立 TU，测试侧补齐） ----
static int base_close_calls = 0;

ZEN_Event_Handler::~ZEN_Event_Handler() {}

int ZEN_Event_Handler::handle_input() { return 0; }
int ZEN_Event_Handler::handle_output() { return 0; }
int ZEN_Event_Handler::handle_exception() { return 0; }
int ZEN_Event_Handler::handle_close() {
    base_close_calls++;
    this->reactor()->remove_handler(this, false);
    return 0;
}
void ZEN_Event_Handler::reactor(ZEN_Reactor *reactor) { zen_reactor_ = reactor; }
ZEN_Reactor *ZEN_Event_Handler::reactor() const { return zen_reactor_; }

// ---- 测试句柄：统计回调、可配置返回值 ----
struct TestHandler : public ZEN_Event_Handler {
    ZEN_SOCKET fd_;
    int input_calls;
    int output_calls;
    int except_calls;
    int input_ret;
    int output_ret;
    int except_ret;

    TestHandler(ZEN_SOCKET fd)
        : ZEN_Event_Handler(), fd_(fd), input_calls(0), output_calls(0),
          except_calls(0), input_ret(0), output_ret(0), except_ret(0) {}

    virtual ZEN_SOCKET get_handle() const { return fd_; }
    virtual int handle_input() { input_calls++; return input_ret; }
    virtual int handle_output() { output_calls++; return output_ret; }
    virtual int handle_exception() { except_calls++; return except_ret; }
};

static int failures = 0;

#define CHECK(cond, msg)                                                     \
    do {                                                                     \
        if (!(cond)) {                                                       \
            printf("FAIL: %s (line %d)\n", msg, __LINE__);                   \
            failures++;                                                      \
        }                                                                    \
    } while (0)

static int msec_elapsed(struct timeval *start) {
    struct timeval now;
    gettimeofday(&now, 0);
    return (int)((now.tv_sec - start->tv_sec) * 1000 +
                 (now.tv_usec - start->tv_usec) / 1000);
}

int main() {
    // ---- 布局（oracle：ZEN_Reactor=28，ZEN_Epoll_Reactor=44） ----
#if __SIZEOF_POINTER__ == 4
    CHECK(sizeof(ZEN_Reactor) == 28, "sizeof(ZEN_Reactor) == 28");
    CHECK(sizeof(ZEN_Epoll_Reactor) == 44, "sizeof(ZEN_Epoll_Reactor) == 44");
#endif

    // 暴露受保护成员以便确定性驱动 process_ready_event
    struct TestReactor : public ZEN_Epoll_Reactor {
        TestReactor(size_t n, bool e, int m) : ZEN_Epoll_Reactor(n, e, m) {}
        void dispatch(epoll_event *ep_event) { process_ready_event(ep_event); }
        int epoll_fd() const { return epoll_fd_; }
        epoll_event *events_ary() const { return once_events_ary_; }
    };

    // ---- 三参构造：max_event_number、edge_triggered、once_max_events ----
    {
        ZEN_Epoll_Reactor reactor(256, false, 64);
        CHECK(reactor.size() == 0, "fresh reactor size == 0");
        CHECK(reactor.max_size() == 256, "max_size == 256");

        int sv[2];
        CHECK(socketpair(AF_UNIX, SOCK_STREAM, 0, sv) == 0, "socketpair");
        TestHandler h(sv[0]);
        h.reactor(&reactor);

        // register：mask 0x02 -> EPOLLIN
        CHECK(reactor.register_handler(&h, ZEN_EVENT_READ) == 0,
              "register_handler(READ) == 0");
        CHECK(reactor.size() == 1, "size == 1 after register");
        CHECK(h.get_mask() == ZEN_EVENT_READ, "mask == ZEN_EVENT_READ");

        // 重复注册 -> -1
        CHECK(reactor.register_handler(&h, ZEN_EVENT_READ) == -1,
              "duplicate register == -1");
        CHECK(reactor.size() == 1, "size still 1 after dup");

        // 写 fd[1] -> epoll 分发 handle_input
        CHECK(write(sv[1], "x", 1) == 1, "write wakeup");
        size_t n = 0;
        ZEN_Time_Value tv_0(0, 1000);
        int r = reactor.handle_events(&tv_0, &n);
        CHECK(r == 0, "handle_events returns 0 after dispatch");
        CHECK(n == 1, "size_io_event == 1");
        CHECK(h.input_calls == 1, "handle_input called once");
        CHECK(h.output_calls == 0, "handle_output not called");

        // schedule_wakeup(WRITE)：mask -> 0x6，epoll MOD 含 EPOLLIN|EPOLLOUT
        CHECK(reactor.schedule_wakeup(&h, ZEN_EVENT_WRITE) == 0,
              "schedule_wakeup == 0");
        CHECK(h.get_mask() == (ZEN_EVENT_READ | ZEN_EVENT_WRITE),
              "mask == READ|WRITE");
        // 再写一次：EPOLLIN|EPOLLOUT 都置位时只走 handle_input（event_in_happen）
        CHECK(write(sv[1], "y", 1) == 1, "second wakeup");
        n = 0;
        ZEN_Time_Value tv_1(0, 1000);
        r = reactor.handle_events(&tv_1, &n);
        CHECK(r == 0, "handle_events ok");
        CHECK(h.input_calls == 2, "handle_input called twice");

        // cancel_wakeup(WRITE)：mask 回到 READ；EPOLLIN 仍在
        CHECK(reactor.cancel_wakeup(&h, ZEN_EVENT_WRITE) == 0,
              "cancel_wakeup == 0");
        CHECK(h.get_mask() == ZEN_EVENT_READ, "mask back to READ");

        // handle_input == -1 -> handle_close（基类 -> reactor->remove_handler）
        h.input_ret = -1;
        CHECK(write(sv[1], "z", 1) == 1, "third wakeup");
        n = 0;
        ZEN_Time_Value tv_2(0, 1000);
        r = reactor.handle_events(&tv_2, &n);
        CHECK(r == 0, "handle_events ok after close");
        CHECK(h.input_calls == 3, "handle_input called 3rd");
        CHECK(base_close_calls == 1, "handle_close called once");
        CHECK(reactor.size() == 0, "map empty after input close");

        // remove_handler on absent handler -> -1
        CHECK(reactor.remove_handler(&h, false) == -1,
              "remove_handler absent == -1");

        close(sv[0]);
        close(sv[1]);
    }

    // ---- handle_output 真实分发 ----
    {
        ZEN_Epoll_Reactor reactor(16, false, 8);
        int sv[2];
        CHECK(socketpair(AF_UNIX, SOCK_STREAM, 0, sv) == 0, "socketpair2");
        TestHandler h(sv[0]);
        h.reactor(&reactor);
        CHECK(reactor.register_handler(&h, ZEN_EVENT_WRITE) == 0,
              "register WRITE");
        // EPOLLOUT 在可写 socket 上立即就绪
        size_t n = 0;
        ZEN_Time_Value tv_3(0, 1000);
        int r = reactor.handle_events(&tv_3, &n);
        CHECK(r == 0, "handle_events out");
        CHECK(h.output_calls == 1, "handle_output called");
        CHECK(h.input_calls == 0, "handle_input not called");
        close(sv[0]);
        close(sv[1]);
    }

    // ---- process_ready_event 确定性分支（EPOLLERR / 组合事件 / 未找到） ----
    {
        TestReactor reactor(16, false, 8);
        int sv[2];
        CHECK(socketpair(AF_UNIX, SOCK_STREAM, 0, sv) == 0, "socketpair2b");
        TestHandler h(sv[0]);
        h.reactor(&reactor);
        CHECK(reactor.register_handler(&h, ZEN_EVENT_EXCEPT) == 0,
              "register EXCEPT (0x08 -> EPOLLERR)");

        epoll_event ev;
        memset(&ev, 0, sizeof(ev));
        ev.events = EPOLLERR;
        ev.data.fd = sv[0];

        // EPOLLERR 单独：handle_exception
        reactor.dispatch(&ev);
        CHECK(h.except_calls == 1, "handle_exception called on EPOLLERR");
        CHECK(h.input_calls == 0, "handle_input not called on EPOLLERR");

        // EPOLLERR + exception 返回 -1 -> handle_close（基类移除句柄）
        h.except_ret = -1;
        reactor.dispatch(&ev);
        CHECK(h.except_calls == 2, "handle_exception twice");
        CHECK(base_close_calls >= 1, "handle_close after exception -1");
        CHECK(reactor.size() == 0, "handler removed after close");

        // 重新注册后：EPOLLIN|EPOLLOUT 同时置位 -> 先 handle_input，
        // 再 re-find 后仍调 handle_output（oracle 0x0808f335 路径）
        CHECK(reactor.register_handler(&h, ZEN_EVENT_READ) == 0, "reg again");
        ev.events = EPOLLIN | EPOLLOUT;
        reactor.dispatch(&ev);
        CHECK(h.input_calls == 1, "combined: handle_input only");
        CHECK(h.output_calls == 1, "combined: handle_output after refind");

        // 未注册 fd 的事件 -> 直接返回（debug_infoex 桩），无回调
        ev.events = EPOLLIN;
        ev.data.fd = sv[1];
        reactor.dispatch(&ev);
        CHECK(h.input_calls == 1, "unknown fd: no callback");
        CHECK(reactor.size() == 1, "unknown fd: map untouched");

        close(sv[0]);
        close(sv[1]);
    }

    // ---- 边沿触发 + 超时换算 ----
    {
        ZEN_Epoll_Reactor reactor(16, true, 8);
        int sv[2];
        CHECK(socketpair(AF_UNIX, SOCK_STREAM, 0, sv) == 0, "socketpair3");
        TestHandler h(sv[0]);
        h.reactor(&reactor);
        CHECK(reactor.register_handler(&h, ZEN_EVENT_READ) == 0,
              "edge register READ");
        CHECK(write(sv[1], "e", 1) == 1, "edge wakeup");
        size_t n = 0;
        ZEN_Time_Value tv_5(0, 1000);
        CHECK(reactor.handle_events(&tv_5, &n) == 0,
              "edge handle_events");
        CHECK(n == 1, "edge event count");
        CHECK(h.input_calls == 1, "edge handle_input");

        // usec=0 -> total_msec()=0 -> 立即返回（不阻塞）
        struct timeval t0;
        gettimeofday(&t0, 0);
        n = 0;
        ZEN_Time_Value tv_6(0, 0);
        CHECK(reactor.handle_events(&tv_6, &n) == 0,
              "usec=0 returns immediately");
        CHECK(msec_elapsed(&t0) < 100, "usec=0 not blocking");

        // usec=999 -> 强制 1ms 等待；无事件时返回 0
        gettimeofday(&t0, 0);
        ZEN_Time_Value tv_7(0, 999);
        CHECK(reactor.handle_events(&tv_7, &n) == 0,
              "usec=999 ok");
        int el = msec_elapsed(&t0);
        CHECK(el >= 0 && el < 100, "usec=999 waits ~1ms");
        close(sv[0]);
        close(sv[1]);
    }

    // ---- 容量上限 / remove_handler(call_handle_close) ----
    {
        ZEN_Epoll_Reactor reactor(2, false, 8);
        int s1[2], s2[2], s3[2];
        CHECK(socketpair(AF_UNIX, SOCK_STREAM, 0, s1) == 0, "sp4");
        CHECK(socketpair(AF_UNIX, SOCK_STREAM, 0, s2) == 0, "sp5");
        CHECK(socketpair(AF_UNIX, SOCK_STREAM, 0, s3) == 0, "sp6");
        TestHandler h1(s1[0]), h2(s2[0]), h3(s3[0]);
        h1.reactor(&reactor);
        h2.reactor(&reactor);
        h3.reactor(&reactor);
        CHECK(reactor.register_handler(&h1, ZEN_EVENT_READ) == 0, "reg h1");
        CHECK(reactor.register_handler(&h2, ZEN_EVENT_READ) == 0, "reg h2");
        CHECK(reactor.register_handler(&h3, ZEN_EVENT_READ) == -1,
              "capacity limit -> -1");
        CHECK(reactor.size() == 2, "size == 2 at capacity");

        // remove_handler(call_handle_close=false) 不回调
        int before = base_close_calls;
        CHECK(reactor.remove_handler(&h1, false) == 0, "remove h1");
        CHECK(reactor.size() == 1, "size == 1");
        CHECK(base_close_calls == before, "no close callback when false");

        // remove_handler(call_handle_close=true) 回调 handle_close
        CHECK(reactor.remove_handler(&h2, true) == 0, "remove h2");
        CHECK(base_close_calls == before + 1, "close callback when true");
        CHECK(reactor.size() == 0, "size == 0");

        close(s1[0]); close(s1[1]);
        close(s2[0]); close(s2[1]);
        close(s3[0]); close(s3[1]);
    }

    // ---- close()：桶头语义 + 清表 ----
    {
        ZEN_Epoll_Reactor reactor(64, false, 8);
        int s1[2], s2[2], s3[2], s4[2];
        CHECK(socketpair(AF_UNIX, SOCK_STREAM, 0, s1) == 0, "sp7");
        CHECK(socketpair(AF_UNIX, SOCK_STREAM, 0, s2) == 0, "sp8");
        CHECK(socketpair(AF_UNIX, SOCK_STREAM, 0, s3) == 0, "sp9");
        CHECK(socketpair(AF_UNIX, SOCK_STREAM, 0, s4) == 0, "sp10");
        TestHandler h1(s1[0]), h2(s2[0]), h3(s3[0]), h4(s4[0]);
        h1.reactor(&reactor);
        h2.reactor(&reactor);
        h3.reactor(&reactor);
        h4.reactor(&reactor);
        CHECK(reactor.register_handler(&h1, ZEN_EVENT_READ) == 0, "reg c1");
        CHECK(reactor.register_handler(&h2, ZEN_EVENT_READ) == 0, "reg c2");
        CHECK(reactor.register_handler(&h3, ZEN_EVENT_READ) == 0, "reg c3");
        CHECK(reactor.register_handler(&h4, ZEN_EVENT_READ) == 0, "reg c4");
        int before = base_close_calls;
        CHECK(reactor.close() == 0, "close() == 0");
        CHECK(reactor.size() == 0, "close clears map");
        CHECK(base_close_calls == before + 4, "close calls handle_close x4");
        close(s1[0]); close(s1[1]);
        close(s2[0]); close(s2[1]);
        close(s3[0]); close(s3[1]);
        close(s4[0]); close(s4[1]);
    }

    // ---- 默认构造：未初始化（epoll_fd_=-1、ary=0、max=1024） ----
    {
        ZEN_Epoll_Reactor reactor;
        CHECK(reactor.max_size() == 1024, "default max_size == 1024");
        CHECK(reactor.size() == 0, "default size == 0");
        int sv[2];
        CHECK(socketpair(AF_UNIX, SOCK_STREAM, 0, sv) == 0, "sp11");
        TestHandler h(sv[0]);
        h.reactor(&reactor);
        // epoll_fd_ == -1：base 注册成功但 epoll_ctl 失败 -> 回滚 -> -1
        CHECK(reactor.register_handler(&h, ZEN_EVENT_READ) == -1,
              "default ctor register fails (fd -1)");
        CHECK(reactor.size() == 0, "rolled back after epoll_ctl fail");
        close(sv[0]);
        close(sv[1]);
    }

    // ---- instance 单例 ----
    {
        ZEN_Epoll_Reactor *r1 = new ZEN_Epoll_Reactor(16, false, 4);
        ZEN_Reactor::instance(r1);
        CHECK(ZEN_Reactor::instance() == r1, "instance() == set value");
        ZEN_Reactor::clean_instance();
        CHECK(ZEN_Reactor::instance() == 0, "clean_instance nulls");
    }

    // ---- 析构：关闭 epoll fd、释放事件数组 ----
    {
        TestReactor *r = new TestReactor(16, false, 4);
        int fd = r->epoll_fd();
        CHECK(fd >= 0, "epoll fd created");
        CHECK(r->events_ary() != 0, "events array allocated");
        CHECK(fcntl(fd, F_GETFD) != -1, "fd open before dtor");
        delete r;
        errno = 0;
        CHECK(fcntl(fd, F_GETFD) == -1 && errno == EBADF,
              "fd closed by dtor");
    }

    if (failures == 0) {
        printf("ALL TESTS PASSED\n");
        return 0;
    }
    printf("%d FAILURES\n", failures);
    return 1;
}
