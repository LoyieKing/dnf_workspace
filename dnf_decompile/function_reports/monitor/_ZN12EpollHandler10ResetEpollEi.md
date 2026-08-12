# _ZN12EpollHandler10ResetEpollEi

`EpollHandler::ResetEpoll(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x804ee72` | `0x93` | `0x80a1e9e` | `0x92` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,43 +1,43 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x24,%esp
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 movl   $0xc,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    0x8(%ebp),%eax
 movl   $0x1,0x4(%eax)
 mov    0x8(%ebp),%eax
 add    $0x18,%eax
 mov    %eax,0x4(%esp)
 lea    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
 mov    0x8(%ebp),%eax
 lea    0x4(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x14(%eax),%eax
 mov    %edx,0xc(%esp)
 mov    0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
 movl   $0x2,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <epoll_ctl>
-shr    $0x1f,%eax
-test   %al,%al
-je     <T> <_ZN12EpollHandler10ResetEpollEi+0x7b>
+mov    %eax,%ebx
+test   %ebx,%ebx
+jns    <T> <_ZN12EpollHandler10ResetEpollEi+0x7a>
 call   <T> <__errno_location>
 mov    (%eax),%ebx
-jmp    <T> <_ZN12EpollHandler10ResetEpollEi+0x80>
+jmp    <T> <_ZN12EpollHandler10ResetEpollEi+0x7f>
 mov    $0x0,%ebx
 lea    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexED1Ev>
 mov    %ebx,%eax
 add    $0x24,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* EpollHandler::ResetEpoll(int) */

int __thiscall EpollHandler::_ZN12EpollHandler10ResetEpollEi(EpollHandler *this,int param_1)

{
  int iVar1;
  int *piVar2;
  CGuard<CMutex> local_10 [8];
  
  memset(this + 4,0,0xc);
  *(undefined4 *)(this + 4) = 1;
  CGuard<CMutex>::CGuard(local_10,(CMutex *)(this + 0x18));
  iVar1 = epoll_ctl(*(int *)(this + 0x14),2,param_1,(epoll_event *)(this + 4));
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

定义于 [source/DNFServer/GameServer/Monitor/TcpNetSystem.cpp](source/DNFServer/GameServer/Monitor/TcpNetSystem.cpp)（约第 96 行）：

```cpp
int EpollHandler::ResetEpoll(int fd)
{
    memset((char*)this + 4, 0, 0xc);
    ((RA_INT<4>*)this)->v = 1;
    CGuard<CMutex> guard(&m_mutex);
    register int r = epoll_ctl(m_epollFd, 2, fd, (epoll_event*)((char*)this + 4));
    if (r < 0)
    {
        r = errno;
    }
    else
    {
        r = 0;
    }
    return r;
}
```
