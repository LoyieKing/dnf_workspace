# _ZN12CApplicationD1Ev

`CApplication::~CApplication()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x80560a6` | `0x188` | `0x804d1ca` | `0x190` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,127 +1,131 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x10,%esp
 mov    0x8(%ebp),%eax
 movl   $&_ZTV12CApplication+0x8,(%eax)
 movl   $"Application Stop!",(%esp)
 call   <T> <puts>
 jmp    <T> <_ZN12CApplicationD1Ev+0x39>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x32c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManagerD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CApplicationD1Ev+0x4b>
 mov    0x8(%ebp),%eax
 add    $0x32c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManagerD1Ev>
-jmp    <T> <_ZN12CApplicationD1Ev+0x95>
+jmp    <T> <_ZN12CApplicationD1Ev+0x65>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x314,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
+jmp    <T> <_ZN12CApplicationD1Ev+0x77>
+mov    0x8(%ebp),%eax
+add    $0x314,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CMutexD1Ev>
+jmp    <T> <_ZN12CApplicationD1Ev+0x91>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x2fc,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
+jmp    <T> <_ZN12CApplicationD1Ev+0xa3>
+mov    0x8(%ebp),%eax
+add    $0x2fc,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CMutexD1Ev>
+jmp    <T> <_ZN12CApplicationD1Ev+0xbd>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x2d0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5queueIP14CUdpRecvBufferSt5dequeIS1_SaIS1_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CApplicationD1Ev+0xc7>
-mov    0x8(%ebp),%eax
-add    $0x314,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CMutexD1Ev>
-mov    0x8(%ebp),%eax
-add    $0x2fc,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CMutexD1Ev>
+jmp    <T> <_ZN12CApplicationD1Ev+0xcf>
 mov    0x8(%ebp),%eax
 add    $0x2d0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5queueIP14CUdpRecvBufferSt5dequeIS1_SaIS1_EEED1Ev>
-jmp    <T> <_ZN12CApplicationD1Ev+0xe1>
+jmp    <T> <_ZN12CApplicationD1Ev+0xe9>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x26c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17UdpCharacteristicD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CApplicationD1Ev+0xf3>
+jmp    <T> <_ZN12CApplicationD1Ev+0xfb>
 mov    0x8(%ebp),%eax
 add    $0x26c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17UdpCharacteristicD1Ev>
-jmp    <T> <_ZN12CApplicationD1Ev+0x10d>
+jmp    <T> <_ZN12CApplicationD1Ev+0x115>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x84,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17FrameLagCollectorD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CApplicationD1Ev+0x11f>
+jmp    <T> <_ZN12CApplicationD1Ev+0x127>
 mov    0x8(%ebp),%eax
 add    $0x84,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17FrameLagCollectorD1Ev>
-jmp    <T> <_ZN12CApplicationD1Ev+0x137>
+jmp    <T> <_ZN12CApplicationD1Ev+0x13f>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CHWSpecResearcherD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CApplicationD1Ev+0x147>
+jmp    <T> <_ZN12CApplicationD1Ev+0x14f>
 mov    0x8(%ebp),%eax
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CHWSpecResearcherD1Ev>
-jmp    <T> <_ZN12CApplicationD1Ev+0x162>
+jmp    <T> <_ZN12CApplicationD1Ev+0x16a>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8CAppBaseD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8CAppBaseD1Ev>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN12CApplicationD1Ev+0x181>
+je     <T> <_ZN12CApplicationD1Ev+0x189>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZdlPv>
 add    $0x10,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Removing unreachable block (ram,0x0805621c) */
/* CApplication::~CApplication() */

void __thiscall CApplication::_ZN12CApplicationD1Ev(CApplication *this)

{
  *(undefined ***)this = &PTR__ZN12CApplicationD1Ev_080e6568;
                    /* try { // try from 080560be to 080560c2 has its CatchHandler @ 080560c5 */
  puts("Application Stop!");
                    /* try { // try from 080560ea to 080560ee has its CatchHandler @ 080560f1 */
  StatisticManager::~StatisticManager((StatisticManager *)(this + 0x32c));
  CMutex::~CMutex((CMutex *)(this + 0x314));
  CMutex::~CMutex((CMutex *)(this + 0x2fc));
                    /* try { // try from 08056166 to 0805616a has its CatchHandler @ 0805616d */
  std::queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>::~queue
            ((queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>> *)
             (this + 0x2d0));
                    /* try { // try from 08056192 to 08056196 has its CatchHandler @ 08056199 */
  UdpCharacteristic::~UdpCharacteristic((UdpCharacteristic *)(this + 0x26c));
                    /* try { // try from 080561be to 080561c2 has its CatchHandler @ 080561c5 */
  FrameLagCollector::~FrameLagCollector((FrameLagCollector *)(this + 0x84));
                    /* try { // try from 080561e6 to 080561ea has its CatchHandler @ 080561ed */
  CHWSpecResearcher::~CHWSpecResearcher((CHWSpecResearcher *)(this + 0x18));
  CAppBase::~CAppBase((CAppBase *)this);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFApplication.cpp](source/DNFServer/GameServer/COServer/DNFApplication.cpp)（约第 98 行）：

```cpp
CApplication::~CApplication()
{
    puts("Application Stop!");
}
```
