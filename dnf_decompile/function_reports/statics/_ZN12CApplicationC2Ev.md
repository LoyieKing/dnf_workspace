# _ZN12CApplicationC2Ev

`CApplication::CApplication()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x8055ec0` | `0x1e5` | `0x804cfe0` | `0x1e9` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,142 +1,144 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x40,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8CAppBaseC1Ev>
 mov    0x8(%ebp),%eax
 movl   $&_ZTV12CApplication+0x8,(%eax)
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
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CHWSpecResearcherC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x84,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17FrameLagCollectorC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x26c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17UdpCharacteristicC1Ev>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x298(%eax)
 mov    0x8(%ebp),%eax
 add    $0x29c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18CFrameCountHandlerC1Ev>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x2cc(%eax)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5dequeIP14CUdpRecvBufferSaIS1_EEC1Ev>
 mov    0x8(%ebp),%eax
 lea    0x2d0(%eax),%edx
 lea    -0x30(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSt5queueIP14CUdpRecvBufferSt5dequeIS1_SaIS1_EEEC1EOS4_>
 jmp    <T> <_ZN12CApplicationC1Ev+0xe0>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5dequeIP14CUdpRecvBufferSaIS1_EED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CApplicationC1Ev+0x177>
+jmp    <T> <_ZN12CApplicationC1Ev+0x17b>
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5dequeIP14CUdpRecvBufferSaIS1_EED1Ev>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x2f8(%eax)
 mov    0x8(%ebp),%eax
 add    $0x2fc,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x314,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x32c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManagerC1Ev>
-jmp    <T> <_ZN12CApplicationC1Ev+0x1de>
+jmp    <T> <_ZN12CApplicationC1Ev+0x1e2>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x314,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
+jmp    <T> <_ZN12CApplicationC1Ev+0x147>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x2fc,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
+jmp    <T> <_ZN12CApplicationC1Ev+0x161>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x2d0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5queueIP14CUdpRecvBufferSt5dequeIS1_SaIS1_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CApplicationC1Ev+0x177>
+jmp    <T> <_ZN12CApplicationC1Ev+0x17b>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x26c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17UdpCharacteristicD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CApplicationC1Ev+0x191>
+jmp    <T> <_ZN12CApplicationC1Ev+0x195>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x84,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17FrameLagCollectorD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CApplicationC1Ev+0x1ab>
+jmp    <T> <_ZN12CApplicationC1Ev+0x1af>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CHWSpecResearcherD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CApplicationC1Ev+0x1c3>
+jmp    <T> <_ZN12CApplicationC1Ev+0x1c7>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8CAppBaseD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 add    $0x40,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CApplication::CApplication() */

void __thiscall CApplication::_ZN12CApplicationC2Ev(CApplication *this)

{
  deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>> local_34 [40];
  
  CAppBase::CAppBase((CAppBase *)this);
  *(undefined ***)this = &PTR__CApplication_080e6568;
  this[4] = (CApplication)0x0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
                    /* try { // try from 08055f14 to 08055f18 has its CatchHandler @ 08056083 */
  CHWSpecResearcher::CHWSpecResearcher((CHWSpecResearcher *)(this + 0x18));
                    /* try { // try from 08055f24 to 08055f28 has its CatchHandler @ 0805606b */
  FrameLagCollector::FrameLagCollector((FrameLagCollector *)(this + 0x84));
                    /* try { // try from 08055f34 to 08055f38 has its CatchHandler @ 08056051 */
  UdpCharacteristic::UdpCharacteristic((UdpCharacteristic *)(this + 0x26c));
  *(undefined4 *)(this + 0x298) = 0;
                    /* try { // try from 08055f51 to 08055f6d has its CatchHandler @ 08056037 */
  CFrameCountHandler::CFrameCountHandler((CFrameCountHandler *)(this + 0x29c));
  *(undefined4 *)(this + 0x2cc) = 0;
  std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>::deque(local_34);
                    /* try { // try from 08055f81 to 08055f85 has its CatchHandler @ 08055f88 */
  std::queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>::queue
            ((queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>> *)
             (this + 0x2d0),(deque *)local_34);
                    /* try { // try from 08055fa6 to 08055faa has its CatchHandler @ 08056037 */
  std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>::~deque(local_34);
  *(undefined4 *)(this + 0x2f8) = 0;
  CMutex::CMutex((CMutex *)(this + 0x2fc));
  CMutex::CMutex((CMutex *)(this + 0x314));
                    /* try { // try from 08055fe3 to 08055fe7 has its CatchHandler @ 08055fed */
  StatisticManager::StatisticManager((StatisticManager *)(this + 0x32c));
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
