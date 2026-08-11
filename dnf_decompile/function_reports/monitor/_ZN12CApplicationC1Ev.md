# _ZN12CApplicationC1Ev

`CApplication::CApplication()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8062858` | `0x2e0` | `0x805063a` | `0x2ed` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,192 +1,194 @@
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
+add    $0x10,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CUserManagerC1Ev>
+mov    0x8(%ebp),%eax
+add    $0xa4,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN18CFrameCountHandlerC1Ev>
+mov    0x8(%ebp),%eax
+add    $0xd8,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CSwapQueueISt5queueIP14CUdpRecvBufferSt5dequeIS2_SaIS2_EEELi2EEC1Ev>
+mov    0x8(%ebp),%eax
+add    $0x138,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CMutexC1Ev>
+mov    0x8(%ebp),%eax
+add    $0x150,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CMutexC1Ev>
+mov    0x8(%ebp),%eax
+add    $0x168,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN13CTcpNetSystemC1Ev>
+mov    0x8(%ebp),%eax
+add    $0x2d0,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CMemberManagerC1Ev>
+mov    0x8(%ebp),%eax
+add    $0x300,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN21CBuddyRegisterManagerC1Ev>
+mov    0x8(%ebp),%eax
+add    $0x338,%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt3setISt4pairIKSsiESt4lessIS2_ESaIS2_EEC1Ev>
+mov    0x8(%ebp),%eax
+add    $0x350,%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt3mapIKSsiSt4lessIS0_ESaISt4pairIS0_iEEEC1Ev>
+mov    0x8(%ebp),%eax
+add    $0x368,%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt3mapIjSt4listIjSaIjEESt4lessIjESaISt4pairIKjS2_EEEC1Ev>
+mov    0x8(%ebp),%eax
 movb   $0x0,0x4(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x8(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0xc(%eax)
-mov    0x8(%ebp),%eax
-add    $0x10,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CUserManagerC1Ev>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x8c(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x90(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x94(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x98(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x9c(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0xa0(%eax)
 mov    0x8(%ebp),%eax
-add    $0xa4,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN18CFrameCountHandlerC1Ev>
-mov    0x8(%ebp),%eax
 movl   $0x0,0xd4(%eax)
-mov    0x8(%ebp),%eax
-add    $0xd8,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CSwapQueueISt5queueIP14CUdpRecvBufferSt5dequeIS2_SaIS2_EEELi2EEC1Ev>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x130(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x134(%eax)
 mov    0x8(%ebp),%eax
-add    $0x138,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CMutexC1Ev>
-mov    0x8(%ebp),%eax
-add    $0x150,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CMutexC1Ev>
-mov    0x8(%ebp),%eax
-add    $0x168,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN13CTcpNetSystemC1Ev>
-mov    0x8(%ebp),%eax
 movl   $0x0,0x2c8(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x2cc(%eax)
-mov    0x8(%ebp),%eax
-add    $0x2d0,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CMemberManagerC1Ev>
-mov    0x8(%ebp),%eax
-add    $0x300,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN21CBuddyRegisterManagerC1Ev>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x318(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x324(%eax)
 mov    0x8(%ebp),%eax
+movl   $0x0,0x328(%eax)
+mov    0x8(%ebp),%eax
 movl   $0x0,0x32c(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x330(%eax)
-mov    0x8(%ebp),%eax
-add    $0x338,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt3setISt4pairIKSsiESt4lessIS2_ESaIS2_EEC1Ev>
-mov    0x8(%ebp),%eax
-add    $0x350,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt3mapIKSsiSt4lessIS0_ESaISt4pairIS0_iEEEC1Ev>
-mov    0x8(%ebp),%eax
-add    $0x368,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt3mapIjSt4listIjSaIjEESt4lessIjESaISt4pairIKjS2_EEEC1Ev>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x380(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x384(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x388(%eax)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication22SetMiniCraneRandomSeedEv>
 add    $0x10,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x350,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIKSsiSt4lessIS0_ESaISt4pairIS0_iEEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CApplicationC1Ev+0x1fb>
+jmp    <T> <_ZN12CApplicationC1Ev+0x208>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x338,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3setISt4pairIKSsiESt4lessIS2_ESaIS2_EED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CApplicationC1Ev+0x215>
+jmp    <T> <_ZN12CApplicationC1Ev+0x222>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x300,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN21CBuddyRegisterManagerD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CApplicationC1Ev+0x22f>
+jmp    <T> <_ZN12CApplicationC1Ev+0x23c>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x2d0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMemberManagerD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CApplicationC1Ev+0x249>
+jmp    <T> <_ZN12CApplicationC1Ev+0x256>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x168,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystemD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CApplicationC1Ev+0x263>
+jmp    <T> <_ZN12CApplicationC1Ev+0x270>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x150,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x138,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0xd8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CSwapQueueISt5queueIP14CUdpRecvBufferSt5dequeIS2_SaIS2_EEELi2EED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CApplicationC1Ev+0x2ad>
+jmp    <T> <_ZN12CApplicationC1Ev+0x2ba>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x10,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CUserManagerD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CApplicationC1Ev+0x2c5>
+jmp    <T> <_ZN12CApplicationC1Ev+0x2d2>
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

void __thiscall CApplication::_ZN12CApplicationC1Ev(CApplication *this)

{
  CAppBase::CAppBase((CAppBase *)this);
  *(undefined ***)this = &PTR__CApplication_08121e48;
  this[4] = (CApplication)0x0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
                    /* try { // try from 08062898 to 0806289c has its CatchHandler @ 08062b1d */
  CUserManager::CUserManager((CUserManager *)(this + 0x10));
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined4 *)(this + 0xa0) = 0;
                    /* try { // try from 080628f6 to 08062917 has its CatchHandler @ 08062b05 */
  CFrameCountHandler::CFrameCountHandler((CFrameCountHandler *)(this + 0xa4));
  *(undefined4 *)(this + 0xd4) = 0;
  CSwapQueue<std::queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>,2>
  ::CSwapQueue((CSwapQueue<std::queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>,2>
                *)(this + 0xd8));
  *(undefined4 *)(this + 0x130) = 0;
  *(undefined4 *)(this + 0x134) = 0;
  CMutex::CMutex((CMutex *)(this + 0x138));
  CMutex::CMutex((CMutex *)(this + 0x150));
                    /* try { // try from 0806295d to 08062961 has its CatchHandler @ 08062abb */
  CTcpNetSystem::CTcpNetSystem((CTcpNetSystem *)(this + 0x168));
  *(undefined4 *)(this + 0x2c8) = 0;
  *(undefined4 *)(this + 0x2cc) = 0;
                    /* try { // try from 08062987 to 0806298b has its CatchHandler @ 08062aa1 */
  CMemberManager::CMemberManager((CMemberManager *)(this + 0x2d0));
                    /* try { // try from 08062997 to 0806299b has its CatchHandler @ 08062a87 */
  CBuddyRegisterManager::CBuddyRegisterManager((CBuddyRegisterManager *)(this + 0x300));
  *(undefined4 *)(this + 0x318) = 0;
  *(undefined4 *)(this + 0x324) = 0;
  *(undefined4 *)(this + 0x32c) = 0;
  *(undefined4 *)(this + 0x330) = 0;
                    /* try { // try from 080629db to 080629df has its CatchHandler @ 08062a6d */
  std::
  set<std::pair<std::string_const,int>,std::less<std::pair<std::string_const,int>>,std::allocator<std::pair<std::string_const,int>>>
  ::set((set<std::pair<std::string_const,int>,std::less<std::pair<std::string_const,int>>,std::allocator<std::pair<std::string_const,int>>>
         *)(this + 0x338));
                    /* try { // try from 080629eb to 080629ef has its CatchHandler @ 08062a53 */
  std::
  map<std::string_const,int,std::less<std::string_const>,std::allocator<std::pair<std::string_const,int>>>
  ::map((map<std::string_const,int,std::less<std::string_const>,std::allocator<std::pair<std::string_const,int>>>
         *)(this + 0x350));
                    /* try { // try from 080629fb to 080629ff has its CatchHandler @ 08062a39 */
  std::
  map<unsigned_int,std::list<unsigned_int,std::allocator<unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::list<unsigned_int,std::allocator<unsigned_int>>>>>
  ::map((map<unsigned_int,std::list<unsigned_int,std::allocator<unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::list<unsigned_int,std::allocator<unsigned_int>>>>>
         *)(this + 0x368));
  *(undefined4 *)(this + 0x380) = 0;
  *(undefined4 *)(this + 900) = 0;
  *(undefined4 *)(this + 0x388) = 0;
  _ZN12CApplication22SetMiniCraneRandomSeedEv(this);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFApplication.cpp](source/DNFServer/GameServer/Monitor/DNFApplication.cpp)（约第 248 行）：

```cpp
CApplication::CApplication()
{
    m_loaded = false;
    m_reserved8 = 0;
    m_appInit = 0;
    m_appConfig = 0;
    m_field90 = 0;
    m_memberConfig = 0;
    m_memberExpTbl = 0;
    m_serverHandler = 0;
    m_serverHandler2 = 0;
    m_innerMsgHandler = 0;
    m_udpHandler = 0;
    m_udpThread = 0;
    m_taskScheduler = 0;
    m_field2cc = 0;
    m_memoryCash = 0;
    m_towerRank = 0;
    m_itemLimitMgr = 0;
    m_ipCounter = 0;
    m_field330 = 0;
    m_periodicMsg = 0;
    m_limitNpc = 0;
    m_field388 = 0;
    SetMiniCraneRandomSeed();
}
```
