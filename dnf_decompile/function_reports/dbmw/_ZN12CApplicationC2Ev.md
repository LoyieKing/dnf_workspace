# _ZN12CApplicationC2Ev

`CApplication::CApplication()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x806b664` | `0x166` | `0x806c8ba` | `0x18b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,102 +1,113 @@
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
-movl   $0x0,0x10(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0x14(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0x18(%eax)
-mov    0x8(%ebp),%eax
 add    $0x1c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18CFrameCountHandlerC1Ev>
 mov    0x8(%ebp),%eax
-movl   $0x0,0x4c(%eax)
-mov    0x8(%ebp),%eax
 add    $0x50,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CDBManagerC1Ev>
-mov    0x8(%ebp),%eax
-movl   $0x0,0x98(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0x9c(%eax)
 mov    0x8(%ebp),%eax
 add    $0xa0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CSwapQueueISt5queueIP14CUdpRecvBufferSt5dequeIS2_SaIS2_EEELi2EEC1Ev>
 mov    0x8(%ebp),%eax
 add    $0xf8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x110,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x128,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystemC1Ev>
 mov    0x8(%ebp),%eax
+movb   $0x0,0x4(%eax)
+mov    0x8(%ebp),%eax
+movl   $0x0,0x8(%eax)
+mov    0x8(%ebp),%eax
+movl   $0x0,0xc(%eax)
+mov    0x8(%ebp),%eax
+movl   $0x0,0x10(%eax)
+mov    0x8(%ebp),%eax
+movl   $0x0,0x14(%eax)
+mov    0x8(%ebp),%eax
+movl   $0x0,0x18(%eax)
+mov    0x8(%ebp),%eax
+movl   $0x0,0x4c(%eax)
+mov    0x8(%ebp),%eax
+movl   $0x0,0x98(%eax)
+mov    0x8(%ebp),%eax
+movl   $0x0,0x9c(%eax)
+mov    0x8(%ebp),%eax
 movl   $0x0,0x288(%eax)
+mov    0x8(%ebp),%eax
+movl   $0x0,0x28c(%eax)
 add    $0x10,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x110,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0xf8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0xa0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CSwapQueueISt5queueIP14CUdpRecvBufferSt5dequeIS2_SaIS2_EEELi2EED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CApplicationC1Ev+0x133>
+jmp    <T> <_ZN12CApplicationC1Ev+0x140>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x50,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CDBManagerD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CApplicationC1Ev+0x14b>
+jmp    <T> <_ZN12CApplicationC1Ev+0x158>
+mov    %edx,%ebx
+mov    %eax,%esi
+mov    0x8(%ebp),%eax
+add    $0x1c,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN18CFrameCountHandlerD1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN12CApplicationC1Ev+0x170>
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
  *(undefined ***)this = &PTR__CApplication_081ab948;
  this[4] = (CApplication)0x0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
                    /* try { // try from 0806b6c2 to 0806b6de has its CatchHandler @ 0806b7af */
  CFrameCountHandler::CFrameCountHandler((CFrameCountHandler *)(this + 0x1c));
  *(undefined4 *)(this + 0x4c) = 0;
  CDBManager::CDBManager((CDBManager *)(this + 0x50));
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x9c) = 0;
                    /* try { // try from 0806b704 to 0806b708 has its CatchHandler @ 0806b797 */
  CSwapQueue<std::queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>,2>
  ::CSwapQueue((CSwapQueue<std::queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>,2>
                *)(this + 0xa0));
  CMutex::CMutex((CMutex *)(this + 0xf8));
  CMutex::CMutex((CMutex *)(this + 0x110));
                    /* try { // try from 0806b734 to 0806b738 has its CatchHandler @ 0806b74d */
  CTcpNetSystem::CTcpNetSystem((CTcpNetSystem *)(this + 0x128));
  *(undefined4 *)(this + 0x288) = 0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFApplication.cpp](source/DNFServer/GameServer/DBMW/DNFApplication.cpp)（约第 53 行）：

```cpp
CApplication::CApplication()
{
    m_loaded = 0;
    m_field8 = 0;
    m_appInitor = 0;
    m_appConfig = 0;
    m_serverConfig = 0;
    m_serverHandler = 0;
    m_killUsrConfig = 0;
    m_udpHandler = 0;
    m_networkThread = 0;
    m_guildManager = 0;
    m_gmAccounts = 0;
}
```
