# _ZN12CApplicationC2Ev

`CApplication::CApplication()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8061dd4` | `0x1bf` | `0x804d80e` | `0x1e3` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,129 +1,141 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x10,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8CAppBaseC1Ev>
 mov    0x8(%ebp),%eax
 movl   $&_ZTV12CApplication+0x8,(%eax)
 mov    0x8(%ebp),%eax
-movb   $0x0,0x4(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0x8(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0xc(%eax)
-mov    0x8(%ebp),%eax
 add    $0x10,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CUserManagerC1Ev>
-mov    0x8(%ebp),%eax
-movl   $0x0,0x5c(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0x60(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0x64(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0x68(%eax)
 mov    0x8(%ebp),%eax
 add    $0x6c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18CFrameCountHandlerC1Ev>
 mov    0x8(%ebp),%eax
-movl   $0x0,0x9c(%eax)
-mov    0x8(%ebp),%eax
 add    $0xa0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CSwapQueueISt5queueIP14CUdpRecvBufferSt5dequeIS2_SaIS2_EEELi2EEC1Ev>
-mov    0x8(%ebp),%eax
-movl   $0x0,0xf8(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0xfc(%eax)
 mov    0x8(%ebp),%eax
 add    $0x100,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x118,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x130,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystemC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x290,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManagerC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x370,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManagerC1Ev>
-jmp    <T> <_ZN12CApplicationC1Ev+0x1b8>
+mov    0x8(%ebp),%eax
+movb   $0x0,0x4(%eax)
+mov    0x8(%ebp),%eax
+movl   $0x0,0x8(%eax)
+mov    0x8(%ebp),%eax
+movl   $0x0,0xc(%eax)
+mov    0x8(%ebp),%eax
+movl   $0x0,0x5c(%eax)
+mov    0x8(%ebp),%eax
+movl   $0x0,0x60(%eax)
+mov    0x8(%ebp),%eax
+movl   $0x0,0x64(%eax)
+mov    0x8(%ebp),%eax
+movl   $0x0,0x68(%eax)
+mov    0x8(%ebp),%eax
+movl   $0x0,0x9c(%eax)
+mov    0x8(%ebp),%eax
+movl   $0x0,0xf8(%eax)
+mov    0x8(%ebp),%eax
+movl   $0x0,0xfc(%eax)
+mov    0x8(%ebp),%eax
+movl   $0x0,0x510(%eax)
+add    $0x10,%esp
+pop    %ebx
+pop    %esi
+pop    %ebp
+ret
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x290,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManagerD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CApplicationC1Ev+0x121>
+jmp    <T> <_ZN12CApplicationC1Ev+0x130>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x130,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystemD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CApplicationC1Ev+0x13b>
+jmp    <T> <_ZN12CApplicationC1Ev+0x14a>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x118,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
+jmp    <T> <_ZN12CApplicationC1Ev+0x164>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x100,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
+jmp    <T> <_ZN12CApplicationC1Ev+0x17e>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0xa0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CSwapQueueISt5queueIP14CUdpRecvBufferSt5dequeIS2_SaIS2_EEELi2EED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CApplicationC1Ev+0x185>
+jmp    <T> <_ZN12CApplicationC1Ev+0x198>
+mov    %edx,%ebx
+mov    %eax,%esi
+mov    0x8(%ebp),%eax
+add    $0x6c,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN18CFrameCountHandlerD1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN12CApplicationC1Ev+0x1b0>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x10,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CUserManagerD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CApplicationC1Ev+0x19d>
+jmp    <T> <_ZN12CApplicationC1Ev+0x1c8>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8CAppBaseD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-add    $0x10,%esp
-pop    %ebx
-pop    %esi
-pop    %ebp
-ret
```
## 2. Ghidra 反编译 C

```c

/* CApplication::CApplication() */

void __thiscall CApplication::_ZN12CApplicationC2Ev(CApplication *this)

{
  CAppBase::CAppBase((CAppBase *)this);
  *(undefined ***)this = &PTR__CApplication_0811d4e8;
  this[4] = (CApplication)0x0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
                    /* try { // try from 08061e14 to 08061e18 has its CatchHandler @ 08061f71 */
  CUserManager::CUserManager((CUserManager *)(this + 0x10));
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
                    /* try { // try from 08061e4a to 08061e6b has its CatchHandler @ 08061f59 */
  CFrameCountHandler::CFrameCountHandler((CFrameCountHandler *)(this + 0x6c));
  *(undefined4 *)(this + 0x9c) = 0;
  CSwapQueue<std::queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>,2>
  ::CSwapQueue((CSwapQueue<std::queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>,2>
                *)(this + 0xa0));
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0xfc) = 0;
  CMutex::CMutex((CMutex *)(this + 0x100));
  CMutex::CMutex((CMutex *)(this + 0x118));
                    /* try { // try from 08061eb1 to 08061eb5 has its CatchHandler @ 08061f0f */
  CTcpNetSystem::CTcpNetSystem((CTcpNetSystem *)(this + 0x130));
                    /* try { // try from 08061ec1 to 08061ec5 has its CatchHandler @ 08061ef5 */
  CGuildManager::CGuildManager((CGuildManager *)(this + 0x290));
                    /* try { // try from 08061ed1 to 08061ed5 has its CatchHandler @ 08061edb */
  CPowerManager::CPowerManager((CPowerManager *)(this + 0x370));
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFApplication.cpp](source/DNFServer/GameServer/COServer/DNFApplication.cpp)（约第 87 行）：

```cpp
CApplication::CApplication()
    : m_loaded(0), m_reserved1(0), m_appInit(0), m_appConfig(0), m_serverConfig(0),
      m_killUsrConfig(0), m_serverHandler(0), m_innerMsg(0)
{
    for (int i = 0; i < 0x65; i++)
    {
        m_udpHandlers[i] = 0;
        m_netThreads[i] = 0;
    }
}
```
