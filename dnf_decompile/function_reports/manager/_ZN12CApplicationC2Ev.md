# _ZN12CApplicationC2Ev

`CApplication::CApplication()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | DIFF | `0x805da74` | `0x125` | `0x804db62` | `0x159` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,84 +1,102 @@
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
+mov    0x8(%ebp),%eax
+add    $0x1c,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN18CFrameCountHandlerC1Ev>
+mov    0x8(%ebp),%eax
+add    $0x4c,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CUserManagerC1Ev>
+mov    0x8(%ebp),%eax
+add    $0x6c,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CSwapQueueISt5queueIP14CUdpRecvBufferSt5dequeIS2_SaIS2_EEELi2EEC1Ev>
+mov    0x8(%ebp),%eax
+add    $0xcc,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN13CTcpNetSystemC1Ev>
+mov    0x8(%ebp),%eax
+add    $0x22c,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CMutexC1Ev>
+mov    0x8(%ebp),%eax
+add    $0x244,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CMutexC1Ev>
 mov    0x8(%ebp),%eax
 movb   $0x0,0x4(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x8(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0xc(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x10(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x14(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x18(%eax)
 mov    0x8(%ebp),%eax
-add    $0x1c,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN18CFrameCountHandlerC1Ev>
-mov    0x8(%ebp),%eax
-add    $0x4c,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CUserManagerC1Ev>
-mov    0x8(%ebp),%eax
 movl   $0x0,0x68(%eax)
-mov    0x8(%ebp),%eax
-add    $0x6c,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CSwapQueueISt5queueIP14CUdpRecvBufferSt5dequeIS2_SaIS2_EEELi2EEC1Ev>
 mov    0x8(%ebp),%eax
 movl   $0x0,0xc4(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0xc8(%eax)
-mov    0x8(%ebp),%eax
-add    $0xcc,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN13CTcpNetSystemC1Ev>
-mov    0x8(%ebp),%eax
-add    $0x22c,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CMutexC1Ev>
-mov    0x8(%ebp),%eax
-add    $0x244,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CMutexC1Ev>
 add    $0x10,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
+add    $0x22c,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CMutexD1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN12CApplicationC1Ev+0xf4>
+mov    %edx,%ebx
+mov    %eax,%esi
+mov    0x8(%ebp),%eax
+add    $0xcc,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN13CTcpNetSystemD1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN12CApplicationC1Ev+0x10e>
+mov    %edx,%ebx
+mov    %eax,%esi
+mov    0x8(%ebp),%eax
 add    $0x6c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CSwapQueueISt5queueIP14CUdpRecvBufferSt5dequeIS2_SaIS2_EEELi2EED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CApplicationC1Ev+0xf2>
+jmp    <T> <_ZN12CApplicationC1Ev+0x126>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x4c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CUserManagerD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CApplicationC1Ev+0x10a>
+jmp    <T> <_ZN12CApplicationC1Ev+0x13e>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8CAppBaseD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
```
## 2. Ghidra 反编译 C

```c

/* CApplication::CApplication() */

void __thiscall CApplication::_ZN12CApplicationC2Ev(CApplication *this)

{
  CAppBase::CAppBase((CAppBase *)this);
  *(undefined ***)this = &PTR__CApplication_08157a08;
  this[4] = (CApplication)0x0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
                    /* try { // try from 0805dad2 to 0805dae4 has its CatchHandler @ 0805db7e */
  CFrameCountHandler::CFrameCountHandler((CFrameCountHandler *)(this + 0x1c));
  CUserManager::CUserManager((CUserManager *)(this + 0x4c));
  *(undefined4 *)(this + 0x68) = 0;
                    /* try { // try from 0805daf8 to 0805dafc has its CatchHandler @ 0805db66 */
  CSwapQueue<std::queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>,2>
  ::CSwapQueue((CSwapQueue<std::queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>,2>
                *)(this + 0x6c));
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined4 *)(this + 200) = 0;
                    /* try { // try from 0805db22 to 0805db26 has its CatchHandler @ 0805db4e */
  CTcpNetSystem::CTcpNetSystem((CTcpNetSystem *)(this + 0xcc));
  CMutex::CMutex((CMutex *)(this + 0x22c));
  CMutex::CMutex((CMutex *)(this + 0x244));
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
