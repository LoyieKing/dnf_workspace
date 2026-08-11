# _ZN13CTcpNetSystemC1Ev

`CTcpNetSystem::CTcpNetSystem()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x805296c` | `0x220` | `0x80a6f84` | `0x2aa` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,168 +1,201 @@
 push   %ebp
 mov    %esp,%ebp
+push   %edi
 push   %esi
 push   %ebx
-sub    $0x60,%esp
+sub    $0x7c,%esp
 mov    0x8(%ebp),%eax
 movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0x4(%eax)
-mov    0x8(%ebp),%eax
-add    $0x8,%eax
+add    $0x4,%eax
+movl   $0x0,(%eax)
+mov    0x8(%ebp),%eax
+lea    0x8(%eax),%esi
+mov    %esi,0x4(%esp)
+movl   $0x58,(%esp)
+call   <T> <_ZnwjPv>
+mov    %eax,%ebx
+mov    %ebx,%eax
+test   %eax,%eax
+je     <T> <_ZN13CTcpNetSystemC1Ev+0x66>
+mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CSwapQueueISt5queueIP14CTcpRecvBufferSt5dequeIS2_SaIS2_EEELi2EEC1Ev>
+jmp    <T> <_ZN13CTcpNetSystemC1Ev+0x66>
+mov    %edx,%edi
+mov    %eax,-0x78(%ebp)
+mov    %esi,0x4(%esp)
+mov    %ebx,(%esp)
+call   <T> <_ZdlPvS_>
+mov    -0x78(%ebp),%eax
+mov    %edi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
 mov    0x8(%ebp),%eax
 add    $0x60,%eax
+mov    %eax,0x4(%esp)
+movl   $0x18,(%esp)
+call   <T> <_ZnwjPv>
+mov    %eax,%edx
+test   %edx,%edx
+je     <T> <_ZN13CTcpNetSystemC1Ev+0x8a>
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x78,%eax
+mov    %eax,0x4(%esp)
+movl   $0x18,(%esp)
+call   <T> <_ZnwjPv>
+mov    %eax,%edx
+test   %edx,%edx
+je     <T> <_ZN13CTcpNetSystemC1Ev+0xae>
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x90,%eax
+mov    %eax,0x4(%esp)
+movl   $0x18,(%esp)
+call   <T> <_ZnwjPv>
+mov    %eax,%edx
+test   %edx,%edx
+je     <T> <_ZN13CTcpNetSystemC1Ev+0xd4>
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexC1Ev>
 mov    0x8(%ebp),%eax
 add    $0xa8,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CMutexC1Ev>
-lea    -0x58(%ebp),%eax
+mov    %eax,0x4(%esp)
+movl   $0x18,(%esp)
+call   <T> <_ZnwjPv>
+mov    %eax,%edx
+test   %edx,%edx
+je     <T> <_ZN13CTcpNetSystemC1Ev+0xfa>
+mov    %eax,(%esp)
+call   <T> <_ZN6CMutexC1Ev>
+lea    -0x68(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5dequeIP14CTcpSendBufferSaIS1_EEC1Ev>
-mov    0x8(%ebp),%eax
-lea    0xc0(%eax),%edx
-lea    -0x58(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
+lea    -0x68(%ebp),%edi
+mov    0x8(%ebp),%eax
+lea    0xc0(%eax),%esi
+mov    %esi,0x4(%esp)
+movl   $0x28,(%esp)
+call   <T> <_ZnwjPv>
+mov    %eax,%ebx
+mov    %ebx,%eax
+test   %eax,%eax
+je     <T> <_ZN13CTcpNetSystemC1Ev+0x16a>
+mov    %ebx,%eax
+mov    %edi,0x4(%esp)
+mov    %eax,(%esp)
 call   <T> <_ZNSt5queueIP14CTcpSendBufferSt5dequeIS1_SaIS1_EEEC1EOS4_>
-jmp    <T> <_ZN13CTcpNetSystemC1Ev+0xa2>
+jmp    <T> <_ZN13CTcpNetSystemC1Ev+0x16a>
+mov    %edx,%edi
+mov    %eax,-0x74(%ebp)
+mov    %esi,0x4(%esp)
+mov    %ebx,(%esp)
+call   <T> <_ZdlPvS_>
+mov    -0x74(%ebp),%eax
+mov    %edi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x58(%ebp),%eax
+lea    -0x68(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5dequeIP14CTcpSendBufferSaIS1_EED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN13CTcpNetSystemC1Ev+0x1a6>
-lea    -0x58(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+lea    -0x68(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5dequeIP14CTcpSendBufferSaIS1_EED1Ev>
 mov    0x8(%ebp),%eax
 add    $0xe8,%eax
+mov    %eax,0x4(%esp)
+movl   $0x18,(%esp)
+call   <T> <_ZnwjPv>
+mov    %eax,%edx
+test   %edx,%edx
+je     <T> <_ZN13CTcpNetSystemC1Ev+0x19b>
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x100,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CMutexC1Ev>
-mov    0x8(%ebp),%eax
-movl   $0x0,0x118(%eax)
-lea    -0x30(%ebp),%eax
+mov    %eax,0x4(%esp)
+movl   $0x18,(%esp)
+call   <T> <_ZnwjPv>
+mov    %eax,%edx
+test   %edx,%edx
+je     <T> <_ZN13CTcpNetSystemC1Ev+0x1c1>
+mov    %eax,(%esp)
+call   <T> <_ZN6CMutexC1Ev>
+mov    0x8(%ebp),%eax
+add    $0x118,%eax
+movl   $0x0,(%eax)
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5dequeIP5CPeerSaIS1_EEC1Ev>
-mov    0x8(%ebp),%eax
-lea    0x11c(%eax),%edx
-lea    -0x30(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
+lea    -0x40(%ebp),%edi
+mov    0x8(%ebp),%eax
+lea    0x11c(%eax),%esi
+mov    %esi,0x4(%esp)
+movl   $0x28,(%esp)
+call   <T> <_ZnwjPv>
+mov    %eax,%ebx
+mov    %ebx,%eax
+test   %eax,%eax
+je     <T> <_ZN13CTcpNetSystemC1Ev+0x23f>
+mov    %ebx,%eax
+mov    %edi,0x4(%esp)
+mov    %eax,(%esp)
 call   <T> <_ZNSt5queueIP5CPeerSt5dequeIS1_SaIS1_EEEC1EOS4_>
-jmp    <T> <_ZN13CTcpNetSystemC1Ev+0x114>
+jmp    <T> <_ZN13CTcpNetSystemC1Ev+0x23f>
+mov    %edx,%edi
+mov    %eax,-0x70(%ebp)
+mov    %esi,0x4(%esp)
+mov    %ebx,(%esp)
+call   <T> <_ZdlPvS_>
+mov    -0x70(%ebp),%eax
+mov    %edi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x30(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5dequeIP5CPeerSaIS1_EED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN13CTcpNetSystemC1Ev+0x15c>
-lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5dequeIP5CPeerSaIS1_EED1Ev>
 mov    0x8(%ebp),%eax
-add    $0x144,%eax
+lea    0x144(%eax),%esi
+mov    %esi,0x4(%esp)
+movl   $0x18,(%esp)
+call   <T> <_ZnwjPv>
+mov    %eax,%ebx
+mov    %ebx,%eax
+test   %eax,%eax
+je     <T> <_ZN13CTcpNetSystemC1Ev+0x295>
+mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CPeerSt4lessIjESaISt4pairIKjS1_EEEC1Ev>
-mov    0x8(%ebp),%eax
-movw   $0x0,0x15c(%eax)
-add    $0x60,%esp
+jmp    <T> <_ZN13CTcpNetSystemC1Ev+0x295>
+mov    %edx,%edi
+mov    %eax,-0x6c(%ebp)
+mov    %esi,0x4(%esp)
+mov    %ebx,(%esp)
+call   <T> <_ZdlPvS_>
+mov    -0x6c(%ebp),%eax
+mov    %edi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+mov    0x8(%ebp),%eax
+add    $0x15c,%eax
+movw   $0x0,(%eax)
+add    $0x7c,%esp
 pop    %ebx
 pop    %esi
+pop    %edi
 pop    %ebp
 ret
-mov    %edx,%ebx
-mov    %eax,%esi
-mov    0x8(%ebp),%eax
-add    $0x11c,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt5queueIP5CPeerSt5dequeIS1_SaIS1_EEED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN13CTcpNetSystemC1Ev+0x15c>
-mov    %edx,%ebx
-mov    %eax,%esi
-mov    0x8(%ebp),%eax
-add    $0x100,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CMutexD1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %edx,%ebx
-mov    %eax,%esi
-mov    0x8(%ebp),%eax
-add    $0xe8,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CMutexD1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %edx,%ebx
-mov    %eax,%esi
-mov    0x8(%ebp),%eax
-add    $0xc0,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt5queueIP14CTcpSendBufferSt5dequeIS1_SaIS1_EEED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN13CTcpNetSystemC1Ev+0x1a6>
-mov    %edx,%ebx
-mov    %eax,%esi
-mov    0x8(%ebp),%eax
-add    $0xa8,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CMutexD1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %edx,%ebx
-mov    %eax,%esi
-mov    0x8(%ebp),%eax
-add    $0x90,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CMutexD1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %edx,%ebx
-mov    %eax,%esi
-mov    0x8(%ebp),%eax
-add    $0x78,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CMutexD1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %edx,%ebx
-mov    %eax,%esi
-mov    0x8(%ebp),%eax
-add    $0x60,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CMutexD1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %edx,%ebx
-mov    %eax,%esi
-mov    0x8(%ebp),%eax
-add    $0x8,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CSwapQueueISt5queueIP14CTcpRecvBufferSt5dequeIS2_SaIS2_EEELi2EED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
```
## 2. Ghidra 反编译 C

```c

/* CTcpNetSystem::CTcpNetSystem() */

void __thiscall CTcpNetSystem::_ZN13CTcpNetSystemC1Ev(CTcpNetSystem *this)

{
  deque<CTcpSendBuffer*,std::allocator<CTcpSendBuffer*>> local_5c [40];
  deque<CPeer*,std::allocator<CPeer*>> local_34 [40];
  
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  CSwapQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>,2>
  ::CSwapQueue((CSwapQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>,2>
                *)(this + 8));
  CMutex::CMutex((CMutex *)(this + 0x60));
  CMutex::CMutex((CMutex *)(this + 0x78));
  CMutex::CMutex((CMutex *)(this + 0x90));
  CMutex::CMutex((CMutex *)(this + 0xa8));
                    /* try { // try from 080529d7 to 080529db has its CatchHandler @ 08052b12 */
  std::deque<CTcpSendBuffer*,std::allocator<CTcpSendBuffer*>>::deque(local_5c);
                    /* try { // try from 080529ef to 080529f3 has its CatchHandler @ 080529f6 */
  std::queue<CTcpSendBuffer*,std::deque<CTcpSendBuffer*,std::allocator<CTcpSendBuffer*>>>::queue
            ((queue<CTcpSendBuffer*,std::deque<CTcpSendBuffer*,std::allocator<CTcpSendBuffer*>>> *)
             (this + 0xc0),(deque *)local_5c);
                    /* try { // try from 08052a14 to 08052a18 has its CatchHandler @ 08052b12 */
  std::deque<CTcpSendBuffer*,std::allocator<CTcpSendBuffer*>>::~deque(local_5c);
  CMutex::CMutex((CMutex *)(this + 0xe8));
  CMutex::CMutex((CMutex *)(this + 0x100));
  *(undefined4 *)(this + 0x118) = 0;
                    /* try { // try from 08052a4c to 08052a50 has its CatchHandler @ 08052ac8 */
  std::deque<CPeer*,std::allocator<CPeer*>>::deque(local_34);
                    /* try { // try from 08052a64 to 08052a68 has its CatchHandler @ 08052a6b */
  std::queue<CPeer*,std::deque<CPeer*,std::allocator<CPeer*>>>::queue
            ((queue<CPeer*,std::deque<CPeer*,std::allocator<CPeer*>>> *)(this + 0x11c),
             (deque *)local_34);
                    /* try { // try from 08052a86 to 08052a8a has its CatchHandler @ 08052ac8 */
  std::deque<CPeer*,std::allocator<CPeer*>>::~deque(local_34);
                    /* try { // try from 08052a96 to 08052a9a has its CatchHandler @ 08052aae */
  std::
  map<unsigned_int,CPeer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CPeer*>>>
  ::map((map<unsigned_int,CPeer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CPeer*>>>
         *)(this + 0x144));
  *(undefined2 *)(this + 0x15c) = 0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/TcpNetSystem.cpp](source/DNFServer/GameServer/Guild/TcpNetSystem.cpp)（约第 203 行）：

```cpp
CTcpNetSystem::CTcpNetSystem()
{
    *(unsigned int*)m_data = 0;
    *(unsigned int*)(m_data + 4) = 0;
    typedef std::queue<CTcpRecvBuffer*, std::deque<CTcpRecvBuffer*> > TcpRecvQueue;
    new (m_data + 8) CSwapQueue<TcpRecvQueue, 2>();
    new (m_data + 0x60) CMutex();
    new (m_data + 0x78) CMutex();
    new (m_data + 0x90) CMutex();
    new (m_data + 0xa8) CMutex();
    new (m_data + 0xc0) std::queue<CTcpSendBuffer*, std::deque<CTcpSendBuffer*> >();
    new (m_data + 0xe8) CMutex();
    new (m_data + 0x100) CMutex();
    *(unsigned int*)(m_data + 0x118) = 0;
    new (m_data + 0x11c) std::queue<CPeer*, std::deque<CPeer*> >();
    new (m_data + 0x144) std::map<unsigned int, CPeer*>();
    *(unsigned short*)(m_data + 0x15c) = 0;
}
```
