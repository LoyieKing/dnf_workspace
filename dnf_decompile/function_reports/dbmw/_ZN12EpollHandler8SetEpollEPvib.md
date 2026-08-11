# _ZN12EpollHandler8SetEpollEPvib

`EpollHandler::SetEpoll(void*, int, bool)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80579d4` | `0x96` | `0x80e7b82` | `0x98` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,47 +1,49 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x34,%esp
 mov    0x14(%ebp),%eax
 mov    %al,-0x1c(%ebp)
 cmpb   $0x0,-0x1c(%ebp)
-je     <T> <_ZN12EpollHandler8SetEpollEPvib+0x1f>
-mov    0x8(%ebp),%eax
-movl   $0x8000001d,0x4(%eax)
-jmp    <T> <_ZN12EpollHandler8SetEpollEPvib+0x29>
-mov    0x8(%ebp),%eax
-movl   $0x1d,0x4(%eax)
+je     <T> <_ZN12EpollHandler8SetEpollEPvib+0x1a>
+mov    $0x8000001d,%eax
+jmp    <T> <_ZN12EpollHandler8SetEpollEPvib+0x1f>
+mov    $0x1d,%eax
+mov    0x8(%ebp),%edx
+mov    %eax,0x4(%edx)
 mov    0x8(%ebp),%eax
 mov    0xc(%ebp),%edx
 mov    %edx,0x8(%eax)
 mov    0x8(%ebp),%eax
 add    $0x18,%eax
 mov    %eax,0x4(%esp)
-lea    -0xc(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
 mov    0x8(%ebp),%eax
-lea    0x4(%eax),%edx
+add    $0x4,%eax
+mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    0x14(%eax),%eax
 mov    %edx,0xc(%esp)
 mov    0x10(%ebp),%edx
 mov    %edx,0x8(%esp)
 movl   $0x1,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <epoll_ctl>
-shr    $0x1f,%eax
-test   %al,%al
-je     <T> <_ZN12EpollHandler8SetEpollEPvib+0x7e>
+mov    %eax,-0xc(%ebp)
+cmpl   $0x0,-0xc(%ebp)
+jns    <T> <_ZN12EpollHandler8SetEpollEPvib+0x7e>
 call   <T> <__errno_location>
-mov    (%eax),%ebx
+mov    (%eax),%eax
 jmp    <T> <_ZN12EpollHandler8SetEpollEPvib+0x83>
-mov    $0x0,%ebx
-lea    -0xc(%ebp),%eax
+mov    $0x0,%eax
+mov    %eax,%ebx
+lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexED1Ev>
 mov    %ebx,%eax
 add    $0x34,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* EpollHandler::SetEpoll(void*, int, bool) */

int __thiscall
EpollHandler::_ZN12EpollHandler8SetEpollEPvib
          (EpollHandler *this,void *param_1,int param_2,bool param_3)

{
  int iVar1;
  int *piVar2;
  CGuard<CMutex> local_10 [8];
  
  if (param_3) {
    *(undefined4 *)(this + 4) = 0x8000001d;
  }
  else {
    *(undefined4 *)(this + 4) = 0x1d;
  }
  *(void **)(this + 8) = param_1;
  CGuard<CMutex>::CGuard(local_10,(CMutex *)(this + 0x18));
  iVar1 = epoll_ctl(*(int *)(this + 0x14),1,param_2,(epoll_event *)(this + 4));
  if (iVar1 < 0) {
    piVar2 = __errno_location();
    iVar1 = *piVar2;
  }
  else {
    iVar1 = 0;
  }
  CGuard<CMutex>::~CGuard(local_10);
  return iVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/EpollHandler.cpp](source/DNFServer/GameServer/DBMW/EpollHandler.cpp)（约第 78 行）：

```cpp
int EpollHandler::SetEpoll(void* peer, int fd, bool flag)
{
    m_eventType = flag ? 0x8000001d : 0x1d;
    m_peer = peer;
    CGuard<CMutex> guard(&m_mutex);
    int ret = epoll_ctl(m_epollFd, 0x1, fd, (struct epoll_event*)&m_eventType);
    return ret < 0 ? errno : 0;
}
```
