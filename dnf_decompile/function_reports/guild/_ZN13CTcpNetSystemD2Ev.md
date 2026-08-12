# _ZN13CTcpNetSystemD2Ev

`CTcpNetSystem::~CTcpNetSystem()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8052b8c` | `0x28a` | `0x80a743e` | `0x258` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,210 +1,193 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x10,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystem10CleanPeersEv>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN13CTcpNetSystemD1Ev+0x3e>
+je     <T> <_ZN13CTcpNetSystemD1Ev+0x35>
 mov    0x8(%ebp),%eax
 mov    (%eax),%ebx
 test   %ebx,%ebx
 je     <T> <_ZN13CTcpNetSystemD1Ev+0x35>
 mov    %ebx,(%esp)
 call   <T> <_ZN11CTcpHandlerD1Ev>
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    0x8(%ebp),%eax
 movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
 mov    0x118(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN13CTcpNetSystemD1Ev+0x9e>
-mov    0x8(%ebp),%eax
-mov    0x118(%eax),%eax
-mov    (%eax),%eax
-mov    (%eax),%edx
-mov    0x8(%ebp),%eax
-mov    0x118(%eax),%eax
-mov    %eax,(%esp)
-call   *%edx
+je     <T> <_ZN13CTcpNetSystemD1Ev+0x76>
 mov    0x8(%ebp),%eax
 mov    0x118(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN13CTcpNetSystemD1Ev+0x91>
+je     <T> <_ZN13CTcpNetSystemD1Ev+0x76>
 mov    0x8(%ebp),%eax
 mov    0x118(%eax),%eax
 mov    (%eax),%eax
 add    $0xc,%eax
-mov    (%eax),%edx
-mov    0x8(%ebp),%eax
-mov    0x118(%eax),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    0x8(%ebp),%edx
+mov    0x118(%edx),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    0x8(%ebp),%eax
 movl   $0x0,0x118(%eax)
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN13CTcpNetSystemD1Ev+0x105>
-mov    0x8(%ebp),%eax
-mov    0x4(%eax),%eax
-mov    (%eax),%eax
-mov    (%eax),%edx
-mov    0x8(%ebp),%eax
-mov    0x4(%eax),%eax
-mov    %eax,(%esp)
-call   *%edx
+je     <T> <_ZN13CTcpNetSystemD1Ev+0xaf>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN13CTcpNetSystemD1Ev+0xdf>
+je     <T> <_ZN13CTcpNetSystemD1Ev+0xaf>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    (%eax),%eax
 add    $0xc,%eax
-mov    (%eax),%edx
-mov    0x8(%ebp),%eax
-mov    0x4(%eax),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    0x8(%ebp),%edx
+mov    0x4(%edx),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    0x8(%ebp),%eax
 movl   $0x0,0x4(%eax)
-jmp    <T> <_ZN13CTcpNetSystemD1Ev+0x105>
+mov    0x8(%ebp),%eax
+add    $0x144,%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt3mapIjP5CPeerSt4lessIjESaISt4pairIKjS1_EEED1Ev>
+jmp    <T> <_ZN13CTcpNetSystemD1Ev+0xff>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x144,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CPeerSt4lessIjESaISt4pairIKjS1_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN13CTcpNetSystemD1Ev+0x117>
-mov    0x8(%ebp),%eax
-add    $0x144,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt3mapIjP5CPeerSt4lessIjESaISt4pairIKjS1_EEED1Ev>
-jmp    <T> <_ZN13CTcpNetSystemD1Ev+0x131>
+jmp    <T> <_ZN13CTcpNetSystemD1Ev+0xe5>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x11c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5queueIP5CPeerSt5dequeIS1_SaIS1_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN13CTcpNetSystemD1Ev+0x143>
+jmp    <T> <_ZN13CTcpNetSystemD1Ev+0x111>
 mov    0x8(%ebp),%eax
 add    $0x11c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5queueIP5CPeerSt5dequeIS1_SaIS1_EEED1Ev>
-jmp    <T> <_ZN13CTcpNetSystemD1Ev+0x18d>
+jmp    <T> <_ZN13CTcpNetSystemD1Ev+0x15b>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x100,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0xe8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0xc0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5queueIP14CTcpSendBufferSt5dequeIS1_SaIS1_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN13CTcpNetSystemD1Ev+0x1bf>
+jmp    <T> <_ZN13CTcpNetSystemD1Ev+0x18d>
 mov    0x8(%ebp),%eax
 add    $0x100,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexD1Ev>
 mov    0x8(%ebp),%eax
 add    $0xe8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexD1Ev>
 mov    0x8(%ebp),%eax
 add    $0xc0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5queueIP14CTcpSendBufferSt5dequeIS1_SaIS1_EEED1Ev>
-jmp    <T> <_ZN13CTcpNetSystemD1Ev+0x239>
+jmp    <T> <_ZN13CTcpNetSystemD1Ev+0x207>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0xa8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x90,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x78,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x60,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CSwapQueueISt5queueIP14CTcpRecvBufferSt5dequeIS2_SaIS2_EEELi2EED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    0x8(%ebp),%eax
 add    $0xa8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexD1Ev>
 mov    0x8(%ebp),%eax
 add    $0x90,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexD1Ev>
 mov    0x8(%ebp),%eax
 add    $0x78,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexD1Ev>
 mov    0x8(%ebp),%eax
 add    $0x60,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexD1Ev>
 mov    0x8(%ebp),%eax
 add    $0x8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CSwapQueueISt5queueIP14CTcpRecvBufferSt5dequeIS2_SaIS2_EEELi2EED1Ev>
 add    $0x10,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CTcpNetSystem::~CTcpNetSystem() */

void __thiscall CTcpNetSystem::_ZN13CTcpNetSystemD2Ev(CTcpNetSystem *this)

{
  CTcpHandler *this_00;
  
                    /* try { // try from 08052b9a to 08052c6a has its CatchHandler @ 08052c77 */
  _ZN13CTcpNetSystem10CleanPeersEv(this);
  if (*(int *)this != 0) {
    this_00 = *(CTcpHandler **)this;
    if (this_00 != (CTcpHandler *)0x0) {
      CTcpHandler::_ZN11CTcpHandlerD2Ev(this_00);
      ::operator_delete(this_00);
    }
    *(undefined4 *)this = 0;
  }
  if (*(int *)(this + 0x118) != 0) {
    (**(code **)**(undefined4 **)(this + 0x118))(*(undefined4 *)(this + 0x118));
    if (*(int *)(this + 0x118) != 0) {
      (**(code **)(**(int **)(this + 0x118) + 0xc))(*(undefined4 *)(this + 0x118));
    }
    *(undefined4 *)(this + 0x118) = 0;
  }
  if (*(int *)(this + 4) != 0) {
    (**(code **)**(undefined4 **)(this + 4))(*(undefined4 *)(this + 4));
    if (*(int *)(this + 4) != 0) {
      (**(code **)(**(int **)(this + 4) + 0xc))(*(undefined4 *)(this + 4));
    }
    *(undefined4 *)(this + 4) = 0;
  }
                    /* try { // try from 08052c9c to 08052ca0 has its CatchHandler @ 08052ca3 */
  std::
  map<unsigned_int,CPeer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CPeer*>>>
  ::~map((map<unsigned_int,CPeer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CPeer*>>>
          *)(this + 0x144));
                    /* try { // try from 08052cc8 to 08052ccc has its CatchHandler @ 08052ccf */
  std::queue<CPeer*,std::deque<CPeer*,std::allocator<CPeer*>>>::~queue
            ((queue<CPeer*,std::deque<CPeer*,std::allocator<CPeer*>>> *)(this + 0x11c));
  CMutex::~CMutex((CMutex *)(this + 0x100));
  CMutex::~CMutex((CMutex *)(this + 0xe8));
                    /* try { // try from 08052d44 to 08052d48 has its CatchHandler @ 08052d4b */
  std::queue<CTcpSendBuffer*,std::deque<CTcpSendBuffer*,std::allocator<CTcpSendBuffer*>>>::~queue
            ((queue<CTcpSendBuffer*,std::deque<CTcpSendBuffer*,std::allocator<CTcpSendBuffer*>>> *)
             (this + 0xc0));
  CMutex::~CMutex((CMutex *)(this + 0xa8));
  CMutex::~CMutex((CMutex *)(this + 0x90));
  CMutex::~CMutex((CMutex *)(this + 0x78));
  CMutex::~CMutex((CMutex *)(this + 0x60));
  CSwapQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>,2>
  ::~CSwapQueue((CSwapQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>,2>
                 *)(this + 8));
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/TcpNetSystem.cpp](source/DNFServer/GameServer/Guild/TcpNetSystem.cpp)（约第 208 行）：

```cpp
CTcpNetSystem::~CTcpNetSystem()
{
    CleanPeers();
    if (m_tcpHandler != 0)
    {
        delete m_tcpHandler;
    }
    m_tcpHandler = 0;
    if (m_acceptThread != 0)
    {
        delete m_acceptThread;
    }
    m_acceptThread = 0;
    if (m_tcpNetworkThread != 0)
    {
        delete m_tcpNetworkThread;
    }
    m_tcpNetworkThread = 0;
}
```
