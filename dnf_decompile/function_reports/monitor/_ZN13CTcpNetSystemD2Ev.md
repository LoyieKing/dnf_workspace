# _ZN13CTcpNetSystemD2Ev

`CTcpNetSystem::~CTcpNetSystem()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | NEAR | `0x8052d38` | `0x28a` | `0x80a2860` | `0x28a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,210 +1,212 @@
+add    $0x78,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CMutexD1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+mov    %edx,%ebx
+mov    %eax,%esi
+mov    0x8(%ebp),%eax
+add    $0x60,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CMutexD1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+mov    %edx,%ebx
+mov    %eax,%esi
+mov    0x8(%ebp),%eax
+add    $0x8,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CSwapQueueISt5queueIP14CTcpRecvBufferSt5dequeIS2_SaIS2_EEELi2EED1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
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
 je     <T> <_ZN13CTcpNetSystemD1Ev+0x3e>
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
 je     <T> <_ZN13CTcpNetSystemD1Ev+0x9e>
 mov    0x8(%ebp),%eax
 mov    0x118(%eax),%eax
 mov    (%eax),%eax
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
 mov    0x118(%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN13CTcpNetSystemD1Ev+0x91>
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
 je     <T> <_ZN13CTcpNetSystemD1Ev+0x105>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    (%eax),%eax
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
 mov    0x4(%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN13CTcpNetSystemD1Ev+0xdf>
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
 jmp    <T> <_ZN13CTcpNetSystemD1Ev+0x105>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x144,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CPeerSt4lessIjESaISt4pairIKjS1_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN13CTcpNetSystemD1Ev+0x117>
 mov    0x8(%ebp),%eax
 add    $0x144,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CPeerSt4lessIjESaISt4pairIKjS1_EEED1Ev>
 jmp    <T> <_ZN13CTcpNetSystemD1Ev+0x131>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x11c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5queueIP5CPeerSt5dequeIS1_SaIS1_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN13CTcpNetSystemD1Ev+0x143>
 mov    0x8(%ebp),%eax
 add    $0x11c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5queueIP5CPeerSt5dequeIS1_SaIS1_EEED1Ev>
 jmp    <T> <_ZN13CTcpNetSystemD1Ev+0x18d>
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
 jmp    <T> <_ZN13CTcpNetSystemD1Ev+0x1bf>
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
 jmp    <T> <_ZN13CTcpNetSystemD1Ev+0x239>
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
-mov    0x8(%ebp),%eax
-add    $0x90,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CMutexD1Ev>
-mov    0x8(%ebp),%eax
-add    $0x78,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CMutexD1Ev>
-mov    0x8(%ebp),%eax
-add    $0x60,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CMutexD1Ev>
-mov    0x8(%ebp),%eax
-add    $0x8,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CSwapQueueISt5queueIP14CTcpRecvBufferSt5dequeIS2_SaIS2_EEELi2EED1Ev>
-add    $0x10,%esp
-pop    %ebx
-pop    %esi
-pop    %ebp
-ret
```
## 2. Ghidra 反编译 C

```c

/* CTcpNetSystem::~CTcpNetSystem() */

void __thiscall CTcpNetSystem::_ZN13CTcpNetSystemD2Ev(CTcpNetSystem *this)

{
  CTcpHandler *this_00;
  
                    /* try { // try from 08052d46 to 08052e16 has its CatchHandler @ 08052e23 */
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
                    /* try { // try from 08052e48 to 08052e4c has its CatchHandler @ 08052e4f */
  std::
  map<unsigned_int,CPeer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CPeer*>>>
  ::~map((map<unsigned_int,CPeer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CPeer*>>>
          *)(this + 0x144));
                    /* try { // try from 08052e74 to 08052e78 has its CatchHandler @ 08052e7b */
  std::queue<CPeer*,std::deque<CPeer*,std::allocator<CPeer*>>>::~queue
            ((queue<CPeer*,std::deque<CPeer*,std::allocator<CPeer*>>> *)(this + 0x11c));
  CMutex::~CMutex((CMutex *)(this + 0x100));
  CMutex::~CMutex((CMutex *)(this + 0xe8));
                    /* try { // try from 08052ef0 to 08052ef4 has its CatchHandler @ 08052ef7 */
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

定义于 [source/DNFServer/GameServer/Monitor/TcpNetSystem.cpp](source/DNFServer/GameServer/Monitor/TcpNetSystem.cpp)（约第 145 行）：

```cpp
CTcpNetSystem::~CTcpNetSystem()
{
    CleanPeers();
    if (m_handler != 0)
    {
        delete m_handler;
        m_handler = 0;
    }
    if (m_acceptThread != 0)
    {
        m_acceptThread->stop();
        delete m_acceptThread;
        m_acceptThread = 0;
    }
    if (m_networkThread != 0)
    {
        m_networkThread->stop();
        delete m_networkThread;
        m_networkThread = 0;
    }
}
```
