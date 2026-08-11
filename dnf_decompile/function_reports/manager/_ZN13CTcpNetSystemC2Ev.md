# _ZN13CTcpNetSystemC2Ev

`CTcpNetSystem::CTcpNetSystem()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | DIFF | `0x80582b0` | `0x220` | `0x8065f2a` | `0x22c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,168 +1,174 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x60,%esp
-mov    0x8(%ebp),%eax
-movl   $0x0,(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0x4(%eax)
 mov    0x8(%ebp),%eax
 add    $0x8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CSwapQueueISt5queueIP14CTcpRecvBufferSt5dequeIS2_SaIS2_EEELi2EEC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x60,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x78,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x90,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexC1Ev>
 mov    0x8(%ebp),%eax
 add    $0xa8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexC1Ev>
 lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5dequeIP14CTcpSendBufferSaIS1_EEC1Ev>
 mov    0x8(%ebp),%eax
 lea    0xc0(%eax),%edx
 lea    -0x58(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSt5queueIP14CTcpSendBufferSt5dequeIS1_SaIS1_EEEC1EOS4_>
-jmp    <T> <_ZN13CTcpNetSystemC1Ev+0xa2>
+jmp    <T> <_ZN13CTcpNetSystemC1Ev+0x8f>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5dequeIP14CTcpSendBufferSaIS1_EED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN13CTcpNetSystemC1Ev+0x1a6>
+jmp    <T> <_ZN13CTcpNetSystemC1Ev+0x1aa>
 lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5dequeIP14CTcpSendBufferSaIS1_EED1Ev>
 mov    0x8(%ebp),%eax
 add    $0xe8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x100,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexC1Ev>
-mov    0x8(%ebp),%eax
-movl   $0x0,0x118(%eax)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5dequeIP5CPeerSaIS1_EEC1Ev>
 mov    0x8(%ebp),%eax
 lea    0x11c(%eax),%edx
 lea    -0x30(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSt5queueIP5CPeerSt5dequeIS1_SaIS1_EEEC1EOS4_>
-jmp    <T> <_ZN13CTcpNetSystemC1Ev+0x114>
+jmp    <T> <_ZN13CTcpNetSystemC1Ev+0xf4>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5dequeIP5CPeerSaIS1_EED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN13CTcpNetSystemC1Ev+0x15c>
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5dequeIP5CPeerSaIS1_EED1Ev>
 mov    0x8(%ebp),%eax
 add    $0x144,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CPeerSt4lessIjESaISt4pairIKjS1_EEEC1Ev>
+mov    0x8(%ebp),%eax
+movl   $0x0,(%eax)
+mov    0x8(%ebp),%eax
+movl   $0x0,0x4(%eax)
+mov    0x8(%ebp),%eax
+movl   $0x0,0x118(%eax)
 mov    0x8(%ebp),%eax
 movw   $0x0,0x15c(%eax)
 add    $0x60,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x11c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5queueIP5CPeerSt5dequeIS1_SaIS1_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN13CTcpNetSystemC1Ev+0x15c>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x100,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
+jmp    <T> <_ZN13CTcpNetSystemC1Ev+0x176>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0xe8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
+jmp    <T> <_ZN13CTcpNetSystemC1Ev+0x190>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0xc0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5queueIP14CTcpSendBufferSt5dequeIS1_SaIS1_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN13CTcpNetSystemC1Ev+0x1a6>
+jmp    <T> <_ZN13CTcpNetSystemC1Ev+0x1aa>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0xa8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
+jmp    <T> <_ZN13CTcpNetSystemC1Ev+0x1c4>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x90,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
+jmp    <T> <_ZN13CTcpNetSystemC1Ev+0x1de>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x78,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
+jmp    <T> <_ZN13CTcpNetSystemC1Ev+0x1f6>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x60,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
+jmp    <T> <_ZN13CTcpNetSystemC1Ev+0x20e>
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
```
## 2. Ghidra 反编译 C

```c

/* CTcpNetSystem::CTcpNetSystem() */

void __thiscall CTcpNetSystem::_ZN13CTcpNetSystemC2Ev(CTcpNetSystem *this)

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
                    /* try { // try from 0805831b to 0805831f has its CatchHandler @ 08058456 */
  std::deque<CTcpSendBuffer*,std::allocator<CTcpSendBuffer*>>::deque(local_5c);
                    /* try { // try from 08058333 to 08058337 has its CatchHandler @ 0805833a */
  std::queue<CTcpSendBuffer*,std::deque<CTcpSendBuffer*,std::allocator<CTcpSendBuffer*>>>::queue
            ((queue<CTcpSendBuffer*,std::deque<CTcpSendBuffer*,std::allocator<CTcpSendBuffer*>>> *)
             (this + 0xc0),(deque *)local_5c);
                    /* try { // try from 08058358 to 0805835c has its CatchHandler @ 08058456 */
  std::deque<CTcpSendBuffer*,std::allocator<CTcpSendBuffer*>>::~deque(local_5c);
  CMutex::CMutex((CMutex *)(this + 0xe8));
  CMutex::CMutex((CMutex *)(this + 0x100));
  *(undefined4 *)(this + 0x118) = 0;
                    /* try { // try from 08058390 to 08058394 has its CatchHandler @ 0805840c */
  std::deque<CPeer*,std::allocator<CPeer*>>::deque(local_34);
                    /* try { // try from 080583a8 to 080583ac has its CatchHandler @ 080583af */
  std::queue<CPeer*,std::deque<CPeer*,std::allocator<CPeer*>>>::queue
            ((queue<CPeer*,std::deque<CPeer*,std::allocator<CPeer*>>> *)(this + 0x11c),
             (deque *)local_34);
                    /* try { // try from 080583ca to 080583ce has its CatchHandler @ 0805840c */
  std::deque<CPeer*,std::allocator<CPeer*>>::~deque(local_34);
                    /* try { // try from 080583da to 080583de has its CatchHandler @ 080583f2 */
  std::
  map<unsigned_int,CPeer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CPeer*>>>
  ::map((map<unsigned_int,CPeer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CPeer*>>>
         *)(this + 0x144));
  *(undefined2 *)(this + 0x15c) = 0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/TcpNetSystem.cpp](source/DNFServer/GameServer/DBMW/TcpNetSystem.cpp)（约第 26 行）：

```cpp
CTcpNetSystem::CTcpNetSystem()
{
    m_tcpHandler = 0;
    m_field4 = 0;
    m_acceptThread = 0;
    m_serverPort = 0;
}
```
