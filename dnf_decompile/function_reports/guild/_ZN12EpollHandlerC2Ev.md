# _ZN12EpollHandlerC2Ev

`EpollHandler::EpollHandler()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x804eac0` | `0x6f` | `0x8085be4` | `0x71` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,40 +1,41 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x10,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9CProtocolC1Ev>
 mov    0x8(%ebp),%eax
 movl   $&_ZTV12EpollHandler+0x8,(%eax)
 mov    0x8(%ebp),%eax
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexC1Ev>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12EpollHandler4InitEv>
-jmp    <T> <_ZN12EpollHandlerC1Ev+0x68>
+jmp    <T> <_ZN12EpollHandlerC1Ev+0x6a>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
+jmp    <T> <_ZN12EpollHandlerC1Ev+0x4f>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9CProtocolD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 add    $0x10,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* EpollHandler::EpollHandler() */

void __thiscall EpollHandler::_ZN12EpollHandlerC2Ev(EpollHandler *this)

{
  CProtocol::CProtocol((CProtocol *)this);
  *(undefined ***)this = &PTR__EpollHandler_08115a28;
  CMutex::CMutex((CMutex *)(this + 0x18));
                    /* try { // try from 0804eaf0 to 0804eaf4 has its CatchHandler @ 0804eaf7 */
  _ZN12EpollHandler4InitEv(this);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFTcpHandler.cpp](source/DNFServer/GameServer/Guild/DNFTcpHandler.cpp)（约第 81 行）：

```cpp
EpollHandler::EpollHandler()
{
    Init();
}
```
