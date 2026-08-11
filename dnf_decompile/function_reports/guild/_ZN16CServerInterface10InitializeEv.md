# _ZN16CServerInterface10InitializeEv

`CServerInterface::Initialize()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x806f668` | `0x6f` | `0x8083a82` | `0x6f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,41 +1,41 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x1c,%esp
+sub    $0x2c,%esp
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
-test   %eax,%eax
-jne    <T> <_ZN16CServerInterface10InitializeEv+0x62>
+mov    %eax,-0x1c(%ebp)
+cmpl   $0x0,-0x1c(%ebp)
+jne    <T> <_ZN16CServerInterface10InitializeEv+0x60>
 movl   $0x8,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CUdpHandlerC1Ev>
-jmp    <T> <_ZN16CServerInterface10InitializeEv+0x45>
+jmp    <T> <_ZN16CServerInterface10InitializeEv+0x4a>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    %ebx,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0xc(%eax)
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CUdpHandler16InitClientSocketEv>
-mov    $0x1,%eax
-jmp    <T> <_ZN16CServerInterface10InitializeEv+0x67>
-mov    $0x0,%eax
-add    $0x1c,%esp
+cmpl   $0x0,-0x1c(%ebp)
+sete   %al
+add    $0x2c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CServerInterface::Initialize() */

bool __thiscall CServerInterface::_ZN16CServerInterface10InitializeEv(CServerInterface *this)

{
  int iVar1;
  CUdpHandler *this_00;
  
  iVar1 = *(int *)(this + 0xc);
  if (iVar1 == 0) {
    this_00 = operator_new(8);
                    /* try { // try from 0806f68e to 0806f692 has its CatchHandler @ 0806f695 */
    CUdpHandler::CUdpHandler(this_00);
    *(CUdpHandler **)(this + 0xc) = this_00;
    CUdpHandler::_ZN11CUdpHandler16InitClientSocketEv(*(CUdpHandler **)(this + 0xc));
  }
  return iVar1 == 0;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFServerInterface.cpp](source/DNFServer/GameServer/Guild/DNFServerInterface.cpp)（约第 91 行）：

```cpp
bool CServerInterface::Initialize()
{
    int old = m_sock;
    if (old == 0)
    {
        m_sock = (int)new CUdpHandler;
        ((CUdpHandler*)m_sock)->InitClientSocket();
    }
    return old == 0;
}
```
