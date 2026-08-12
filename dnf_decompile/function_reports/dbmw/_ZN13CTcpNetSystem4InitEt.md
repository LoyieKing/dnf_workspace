# _ZN13CTcpNetSystem4InitEt

`CTcpNetSystem::Init(unsigned short)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x805bbba` | `0x13e` | `0x80f4fc4` | `0x13a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,101 +1,99 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x2c,%esp
 mov    0xc(%ebp),%eax
 mov    %ax,-0x1c(%ebp)
 mov    0x8(%ebp),%eax
 movzwl -0x1c(%ebp),%edx
 mov    %dx,0x15c(%eax)
 movl   $0x4,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CTcpHandlerC1Ev>
 jmp    <T> <_ZN13CTcpNetSystem4InitEt+0x50>
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
 mov    %edx,(%eax)
 movl   $0x38,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CTcpAcceptThreadC1Ev>
 jmp    <T> <_ZN13CTcpNetSystem4InitEt+0x89>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-mov    %ebx,%eax
-mov    %eax,%edx
+mov    %ebx,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x118(%eax)
 mov    0x8(%ebp),%eax
 mov    0x118(%eax),%eax
 mov    0x8(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN16CTcpAcceptThread6attachEP13CTcpNetSystem>
 mov    0x8(%ebp),%eax
 mov    0x118(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CThreadInterface5beginEv>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN13CTcpNetSystem4InitEt+0xcb>
+je     <T> <_ZN13CTcpNetSystem4InitEt+0xc9>
 call   <T> <__cxa_rethrow>
 movl   $0x30,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CTcpNetworkThreadC1Ev>
-jmp    <T> <_ZN13CTcpNetSystem4InitEt+0xfd>
+jmp    <T> <_ZN13CTcpNetSystem4InitEt+0xfb>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-mov    %ebx,%eax
-mov    %eax,%edx
+mov    %ebx,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x4(%eax)
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    0x8(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN17CTcpNetworkThread6attachEP13CTcpNetSystem>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CThreadInterface5beginEv>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN13CTcpNetSystem4InitEt+0x136>
+je     <T> <_ZN13CTcpNetSystem4InitEt+0x132>
 call   <T> <__cxa_rethrow>
 add    $0x2c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CTcpNetSystem::Init(unsigned short) */

void __thiscall CTcpNetSystem::_ZN13CTcpNetSystem4InitEt(CTcpNetSystem *this,ushort param_1)

{
  char cVar1;
  CTcpHandler *this_00;
  CTcpAcceptThread *this_01;
  CTcpNetworkThread *this_02;
  
  *(ushort *)(this + 0x15c) = param_1;
  this_00 = operator_new(4);
                    /* try { // try from 0805bbeb to 0805bbef has its CatchHandler @ 0805bbf2 */
  CTcpHandler::_ZN11CTcpHandlerC2Ev(this_00);
  *(CTcpHandler **)this = this_00;
  this_01 = operator_new(0x38);
                    /* try { // try from 0805bc24 to 0805bc28 has its CatchHandler @ 0805bc2b */
  CTcpAcceptThread::CTcpAcceptThread(this_01);
  *(CTcpAcceptThread **)(this + 0x118) = this_01;
  CTcpAcceptThread::attach(*(CTcpAcceptThread **)(this + 0x118),this);
  cVar1 = CThreadInterface::begin(*(CThreadInterface **)(this + 0x118));
  if (cVar1 != '\x01') {
                    /* WARNING: Subroutine does not return */
    __cxa_rethrow();
  }
  this_02 = operator_new(0x30);
                    /* try { // try from 0805bc98 to 0805bc9c has its CatchHandler @ 0805bc9f */
  CTcpNetworkThread::CTcpNetworkThread(this_02);
  *(CTcpNetworkThread **)(this + 4) = this_02;
  CTcpNetworkThread::attach(*(CTcpNetworkThread **)(this + 4),this);
  cVar1 = CThreadInterface::begin(*(CThreadInterface **)(this + 4));
  if (cVar1 != '\x01') {
                    /* WARNING: Subroutine does not return */
    __cxa_rethrow();
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/TcpNetSystem.cpp](source/DNFServer/GameServer/DBMW/TcpNetSystem.cpp)（约第 78 行）：

```cpp
void CTcpNetSystem::Init(unsigned short port)
{
    m_serverPort = port;
    m_tcpHandler = new CTcpHandler;
    m_acceptThread = new CTcpAcceptThread;
    m_acceptThread->attach(this);
    if (!m_acceptThread->begin())
        throw;   // ORIG 失败路径 __cxa_rethrow（rethrow 当前异常），非 throw 1
    m_field4 = new CTcpNetworkThread;
    ((CTcpNetworkThread*)m_field4)->attach(this);
    if (!((CTcpNetworkThread*)m_field4)->begin())
        throw;   // ORIG 失败路径 __cxa_rethrow
}
```
