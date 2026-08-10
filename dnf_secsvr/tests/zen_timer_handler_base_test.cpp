// 32 位宿主测试：ZEN_Timer_Handler 还原实现 vs gunnersvr oracle 语义
// 覆盖：默认构造不初始化 timer_queue_、queue 构造、getter/setter、timer_close 返回 0、
//       虚函数派发、虚析构链（delete 经基类指针）。
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <new>

// 头文件只前置声明 ZEN_Time_Value；测试侧给最小定义即可
struct ZEN_Time_Value {
	char pad[8];
};

#include "src/commlib/zenlib/zen_timer_handler_base.h"

static int dtor_calls = 0;
static int del_calls = 0;

// 计数 operator delete 调用（D0 链路的 delete 落点）
void *operator new(size_t n) { return malloc(n); }
void operator delete(void *p) { del_calls++; free(p); }

// 基类 ctor 是 protected：用派生类包一层以便在宿主测试里构造
struct BaseMaker : ZEN_Timer_Handler {
	BaseMaker(ZEN_Timer_Queue *q) : ZEN_Timer_Handler(q) {}
	BaseMaker() : ZEN_Timer_Handler() {}
	virtual int handle_timeout(const ZEN_Time_Value &, const void *) { return -1; }
};

struct TestDerived : ZEN_Timer_Handler {
	TestDerived(ZEN_Timer_Queue *q) : ZEN_Timer_Handler(q) {}
	virtual ~TestDerived() { dtor_calls++; }
	virtual int handle_timeout(const ZEN_Time_Value &, const void *) { return 42; }
	// 析构 protected：原版设计不允许从外部 delete 基类指针，由派生类负责销毁
	static void destroy(ZEN_Timer_Handler *h) {
		delete static_cast<TestDerived *>(h);
	}
};

int main() {
	int failures = 0;
	unsigned char raw[8];

	// 1) 默认构造：只写 vptr(offset 0)，不碰 timer_queue_(offset 4)（oracle C1Ev/C2Ev 同）
	memset(raw, 0xAA, 8);
	new (raw) BaseMaker();
	if (*(unsigned int *)(raw + 0) == 0) {
		printf("FAIL: default ctor must set vptr\n");
		failures++;
	}
	if (*(unsigned int *)(raw + 4) != 0xAAAAAAAA) {
		printf("FAIL: default ctor must NOT touch timer_queue_\n");
		failures++;
	}

	// 2) queue 构造 + getter
	unsigned char fq;
	memset(raw, 0xBB, 8);
	BaseMaker *bm = new (raw) BaseMaker((ZEN_Timer_Queue *)&fq);
	if (*(unsigned int *)(raw + 4) != (unsigned int)(unsigned long)&fq) {
		printf("FAIL: queue ctor must store queue ptr\n");
		failures++;
	}
	if (bm->timer_queue() != (ZEN_Timer_Queue *)&fq) {
		printf("FAIL: timer_queue() getter\n");
		failures++;
	}

	// 3) setter / getter 往返
	bm->timer_queue((ZEN_Timer_Queue *)0x1234);
	if (bm->timer_queue() != (ZEN_Timer_Queue *)0x1234) {
		printf("FAIL: setter roundtrip\n");
		failures++;
	}
	bm->timer_queue(0);
	if (bm->timer_queue() != 0) {
		printf("FAIL: setter NULL\n");
		failures++;
	}

	// 4) timer_close 恒返回 0（oracle: xor eax,eax）
	if (bm->timer_close() != 0) {
		printf("FAIL: timer_close must return 0\n");
		failures++;
	}

	// 5) 虚函数派发
	TestDerived d((ZEN_Timer_Queue *)&fq);
	ZEN_Timer_Handler *base = &d;
	ZEN_Time_Value tv;
	if (base->handle_timeout(tv, 0) != 42) {
		printf("FAIL: virtual handle_timeout dispatch\n");
		failures++;
	}

	// 6) 虚析构链：派生类销毁入口 → 派生 dtor → 基类 dtor → operator delete
	ZEN_Timer_Handler *p = new TestDerived((ZEN_Timer_Queue *)&fq);
	TestDerived::destroy(p);
	if (dtor_calls != 1) {
		printf("FAIL: virtual dtor chain via delete\n");
		failures++;
	}
	if (del_calls != 1) {
		printf("FAIL: operator delete must be called once\n");
		failures++;
	}

	if (failures == 0) {
		printf("ALL PASS\n");
		return 0;
	}
	return 1;
}
