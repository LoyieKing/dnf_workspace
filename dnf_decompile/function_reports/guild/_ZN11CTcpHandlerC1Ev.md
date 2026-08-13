# _ZN11CTcpHandlerC1Ev

`CTcpHandler::CTcpHandler()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x804ee26` | `0x4c` | `0x8086cb8` | `0x4a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,31 +1,23 @@
+mov    %eax,(%esp)
+call   <T> <_ZN12EpollHandler10GetEpollFDEv>
+mov    %eax,-0xc(%ebp)
+movl   $0x64,0xc(%esp)
+movl   $0x3e8,0x8(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <epoll_wait>
+leave
+ret
 push   %ebp
 mov    %esp,%ebp
-push   %edi
-push   %esi
-push   %ebx
-sub    $0x1c,%esp
-movl   $0x30,(%esp)
-call   <T> <_Znwj>
-mov    %eax,%ebx
-mov    %ebx,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12EpollHandlerC1Ev>
-jmp    <T> <_ZN11CTcpHandlerC1Ev+0x3b>
-mov    %edx,%esi
-mov    %eax,%edi
-mov    %ebx,(%esp)
-call   <T> <_ZdlPv>
-mov    %edi,%eax
-mov    %esi,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-mov    %ebx,%eax
-mov    %eax,%edx
 mov    0x8(%ebp),%eax
-mov    %edx,(%eax)
-add    $0x1c,%esp
-pop    %ebx
-pop    %esi
-pop    %edi
-pop    %ebp
-ret
+mov    0x10(%eax),%ecx
+mov    0xc(%ebp),%edx
+mov    %edx,%eax
+add    %eax,%eax
+add    %edx,%eax
+shl    $0x2,%eax
+lea    (%ecx,%eax,1),%eax
+mov    (%eax),%eax
```
## 2. Ghidra 反编译 C

```c

/* CTcpHandler::CTcpHandler() */

void __thiscall CTcpHandler::_ZN11CTcpHandlerC1Ev(CTcpHandler *this)

{
  EpollHandler *this_00;
  
  this_00 = operator_new(0x30);
                    /* try { // try from 0804ee42 to 0804ee46 has its CatchHandler @ 0804ee49 */
  EpollHandler::EpollHandler(this_00);
  *(EpollHandler **)this = this_00;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFTcpHandler.cpp](source/DNFServer/GameServer/Guild/DNFTcpHandler.cpp)（约第 172 行）：

```cpp
CTcpHandler::CTcpHandler()
{
    m_epoll = new EpollHandler;
}
```
