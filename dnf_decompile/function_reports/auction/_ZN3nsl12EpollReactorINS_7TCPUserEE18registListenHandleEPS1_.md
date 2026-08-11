# _ZN3nsl12EpollReactorINS_7TCPUserEE18registListenHandleEPS1_

`nsl::EpollReactor<nsl::TCPUser>::registListenHandle(nsl::TCPUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x80b06da` | `0x94` | `0x80aee9a` | `0x92` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,38 +1,38 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 movl   $0xc,0x8(%esp)
 movl   $0x0,0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
-movl   $0x1,-0x14(%ebp)
+movl   $0x1,-0x18(%ebp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser9getHandleEv>
-mov    %eax,-0x10(%ebp)
+mov    %eax,-0x14(%ebp)
 mov    0x8(%ebp),%eax
 mov    0xc(%ebp),%edx
 mov    %edx,0x30(%eax)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser9getHandleEv>
 mov    0x8(%ebp),%edx
 mov    0x34(%edx),%edx
-lea    -0x14(%ebp),%ecx
+lea    -0x18(%ebp),%ecx
 mov    %ecx,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $0x1,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <epoll_ctl>
-shr    $0x1f,%eax
-test   %al,%al
-je     <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE18registListenHandleEPS1_+0x8d>
+mov    %eax,-0xc(%ebp)
+cmpl   $0x0,-0xc(%ebp)
+jns    <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE18registListenHandleEPS1_+0x88>
 movl   $"registListenHandle",0x4(%esp)
 movl   $"In %s : epoll_ctl error\n",(%esp)
 call   <T> <printf>
-mov    $0x0,%eax
-jmp    <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE18registListenHandleEPS1_+0x92>
-mov    $0x1,%eax
+mov    -0xc(%ebp),%eax
+not    %eax
+shr    $0x1f,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: bool registListenHandle(EpollReactor<nsl::TCPUser> * this, TCPUser *
   ServerSession) */

bool __thiscall
nsl::EpollReactor<nsl::TCPUser>::_ZN3nsl12EpollReactorINS_7TCPUserEE18registListenHandleEPS1_
          (EpollReactor<nsl::TCPUser> *this,TCPUser *ServerSession)

{
  SOCKET __fd;
  int iVar1;
  epoll_event local_18;
  
                    /* Unresolved local var: epoll_event ev@[???] */
  memset(&local_18,0,0xc);
  local_18.events = 1;
  local_18.data.fd = TCPUser::getHandle(ServerSession);
  this->m_ServerSession = ServerSession;
  __fd = TCPUser::getHandle(ServerSession);
  iVar1 = epoll_ctl(this->epoll_fd_,1,__fd,&local_18);
  if (-1 >= iVar1) {
    printf("In %s : epoll_ctl error\n","registListenHandle");
  }
  return -1 < iVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/ServerLib/common_source/TCPThread.cpp](source/DNFServer/GameServer/ServerLab/ServerLib/common_source/TCPThread.cpp)（约第 86 行）：

```cpp
        if (!r->registListenHandle(sUser))
        {
            G_TraceLog()->sysLog(0, "Fail to regist socket");
            goto fail;
        }
```
