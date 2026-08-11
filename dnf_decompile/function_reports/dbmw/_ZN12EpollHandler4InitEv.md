# _ZN12EpollHandler4InitEv

`EpollHandler::Init()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | NEAR | `0x8057966` | `0x6d` | `0x80943a4` | `0x6d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,31 +1,31 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 movl   $0x3e8,(%esp)
 call   <T> <epoll_create>
 mov    0x8(%ebp),%edx
 mov    %eax,0x14(%edx)
 mov    0x8(%ebp),%eax
 mov    0x14(%eax),%eax
 test   %eax,%eax
 jns    <T> <_ZN12EpollHandler4InitEv+0x35>
-movl   $"[Epoll::init] Can't init epoll create",(%esp)
+movl   $"epoll create error",(%esp)
 call   <T> <puts>
 mov    $0x0,%eax
 jmp    <T> <_ZN12EpollHandler4InitEv+0x6b>
 movl   $0x2ee0,(%esp)
 call   <T> <_Znaj>
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x10(%eax)
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
 test   %eax,%eax
 jne    <T> <_ZN12EpollHandler4InitEv+0x66>
-movl   $"[Epoll::init] Can't alloc event memory",(%esp)
-call   <T> <printf>
+movl   $"epoll events alloc error",(%esp)
+call   <T> <puts>
 mov    $0x0,%eax
 jmp    <T> <_ZN12EpollHandler4InitEv+0x6b>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* EpollHandler::Init() */

undefined4 __thiscall EpollHandler::_ZN12EpollHandler4InitEv(EpollHandler *this)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  
  iVar1 = epoll_create(1000);
  *(int *)(this + 0x14) = iVar1;
  if (*(int *)(this + 0x14) < 0) {
    puts("[Epoll::init] Can\'t init epoll create");
    uVar2 = 0;
  }
  else {
    pvVar3 = operator_new__(12000);
    *(void **)(this + 0x10) = pvVar3;
    if (*(int *)(this + 0x10) == 0) {
      printf("[Epoll::init] Can\'t alloc event memory");
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/EpollHandler.cpp](source/DNFServer/GameServer/DBMW/EpollHandler.cpp)（约第 34 行）：

```cpp
int EpollHandler::Init()
{
    m_epollFd = epoll_create(0x3e8);
    if (m_epollFd < 0)
    {
        puts("epoll create error");
        return 0;
    }
    m_events = (void*)new char[0x2ee0];
    if (!m_events)
    {
        printf("epoll events alloc error\n");
        return 0;
    }
    return 1;
}
```
