# _ZN12EpollHandlerD1Ev

`EpollHandler::~EpollHandler()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x804ecdc` | `0x49` | `0x80a18e4` | `0x6d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,23 +1,38 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x18,%esp
+push   %esi
+push   %ebx
+sub    $0x10,%esp
 mov    0x8(%ebp),%eax
 movl   $&_ZTV12EpollHandler+0x8,(%eax)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12EpollHandler7DestroyEv>
 mov    0x8(%ebp),%eax
-add    $0x18,%eax
+add    $0x14,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexD1Ev>
+jmp    <T> <_ZN12EpollHandlerD1Ev+0x47>
+mov    %edx,%ebx
+mov    %eax,%esi
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN9CProtocolD1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9CProtocolD1Ev>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN12EpollHandlerD1Ev+0x47>
+je     <T> <_ZN12EpollHandlerD1Ev+0x66>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZdlPv>
-leave
+add    $0x10,%esp
+pop    %ebx
+pop    %esi
+pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Removing unreachable block (ram,0x0804ed18) */
/* EpollHandler::~EpollHandler() */

void __thiscall EpollHandler::_ZN12EpollHandlerD1Ev(EpollHandler *this)

{
  *(undefined ***)this = &PTR__ZN12EpollHandlerD1Ev_08115388;
  _ZN12EpollHandler7DestroyEv(this);
  CMutex::~CMutex((CMutex *)(this + 0x18));
  CProtocol::~CProtocol((CProtocol *)this);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/TcpNetSystem.cpp](source/DNFServer/GameServer/Monitor/TcpNetSystem.cpp)（约第 40 行）：

```cpp
EpollHandler::~EpollHandler()
{
    Destroy();
}
```
