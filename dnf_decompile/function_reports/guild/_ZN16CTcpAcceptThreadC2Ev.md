# _ZN16CTcpAcceptThreadC2Ev

`CTcpAcceptThread::CTcpAcceptThread()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8059bc4` | `0x6c` | `0x80852f8` | `0xbc` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,35 +1,60 @@
 push   %ebp
 mov    %esp,%ebp
+push   %edi
 push   %esi
 push   %ebx
-sub    $0x10,%esp
+sub    $0x1c,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CThreadInterfaceC1Ev>
 mov    0x8(%ebp),%eax
 movl   $&_ZTV16CTcpAcceptThread+0x8,(%eax)
+mov    0x8(%ebp),%eax
+movl   $0x0,0x4(%eax)
+mov    0x8(%ebp),%eax
+movb   $0x0,0x8(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0xc(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x10(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x14(%eax)
 mov    0x8(%ebp),%eax
 add    $0x18,%eax
+mov    %eax,0x4(%esp)
+movl   $0x1c,(%esp)
+call   <T> <_ZnwjPv>
+mov    %eax,%ebx
+mov    %ebx,%eax
+test   %eax,%eax
+je     <T> <_ZN16CTcpAcceptThreadC1Ev+0xab>
+mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9TCPSocketC1Ev>
-jmp    <T> <_ZN16CTcpAcceptThreadC1Ev+0x65>
+jmp    <T> <_ZN16CTcpAcceptThreadC1Ev+0xab>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    0x8(%ebp),%eax
+add    $0x18,%eax
+mov    %eax,0x4(%esp)
+mov    %ebx,(%esp)
+call   <T> <_ZdlPvS_>
+mov    %edi,%eax
+mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CThreadInterfaceD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-add    $0x10,%esp
+mov    0x8(%ebp),%eax
+movw   $0x0,0x34(%eax)
+add    $0x1c,%esp
 pop    %ebx
 pop    %esi
+pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CTcpAcceptThread::CTcpAcceptThread() */

void __thiscall CTcpAcceptThread::_ZN16CTcpAcceptThreadC2Ev(CTcpAcceptThread *this)

{
  CThreadInterface::CThreadInterface((CThreadInterface *)this);
  *(undefined ***)this = &PTR_stop_08119138;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
                    /* try { // try from 08059c07 to 08059c0b has its CatchHandler @ 08059c0e */
  TCPSocket::TCPSocket((TCPSocket *)(this + 0x18));
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFTcpAcceptThread.cpp](source/DNFServer/GameServer/Guild/DNFTcpAcceptThread.cpp)（约第 70 行）：

```cpp
CTcpAcceptThread::CTcpAcceptThread()
{
    m_thread = 0;
    m_running = false;
    m_net = 0;
    m_recvQLock = 0;
    m_recvBLock = 0;
    new (m_sock) TCPSocket;
    m_port = 0;
}
```
