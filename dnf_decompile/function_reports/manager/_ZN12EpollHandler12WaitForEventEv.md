# _ZN12EpollHandler12WaitForEventEv

`EpollHandler::WaitForEvent()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | DIFF | `0x805469e` | `0x46` | `0x80611b2` | `0x41` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,20 +1,20 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x28,%esp
+push   %ebx
+sub    $0x14,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12EpollHandler14GetEpollEventsEv>
-mov    %eax,-0x10(%ebp)
+mov    %eax,%ebx
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12EpollHandler10GetEpollFDEv>
-mov    %eax,-0xc(%ebp)
 movl   $0x64,0xc(%esp)
 movl   $0x3e8,0x8(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <epoll_wait>
-leave
+add    $0x14,%esp
+pop    %ebx
+pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* EpollHandler::WaitForEvent() */

void __thiscall EpollHandler::_ZN12EpollHandler12WaitForEventEv(EpollHandler *this)

{
  epoll_event *__events;
  int __epfd;
  
  __events = (epoll_event *)GetEpollEvents(this);
  __epfd = GetEpollFD(this);
  epoll_wait(__epfd,__events,1000,100);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFTcpHandler.cpp](source/DNFServer/GameServer/DBMW/DNFTcpHandler.cpp)（约第 38 行）：

```cpp
int CTcpHandler::WaitForEvent()
{
    return m_epoll ? m_epoll->WaitForEvent() : -1;
}
```
