# _ZN12CApplicationD2Ev

`CApplication::~CApplication()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8061f94` | `0x188` | `0x804da52` | `0x1b0` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,127 +1,141 @@
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
 add    $0x370,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManagerD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CApplicationD1Ev+0x4b>
 mov    0x8(%ebp),%eax
 add    $0x370,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManagerD1Ev>
 jmp    <T> <_ZN12CApplicationD1Ev+0x65>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x290,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManagerD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CApplicationD1Ev+0x77>
 mov    0x8(%ebp),%eax
 add    $0x290,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManagerD1Ev>
 jmp    <T> <_ZN12CApplicationD1Ev+0x91>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x130,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystemD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CApplicationD1Ev+0xa3>
 mov    0x8(%ebp),%eax
 add    $0x130,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystemD1Ev>
 jmp    <T> <_ZN12CApplicationD1Ev+0xed>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x118,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
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
 add    $0xa0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CSwapQueueISt5queueIP14CUdpRecvBufferSt5dequeIS2_SaIS2_EEELi2EED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CApplicationD1Ev+0x11f>
 mov    0x8(%ebp),%eax
 add    $0x118,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexD1Ev>
 mov    0x8(%ebp),%eax
 add    $0x100,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexD1Ev>
 mov    0x8(%ebp),%eax
 add    $0xa0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CSwapQueueISt5queueIP14CUdpRecvBufferSt5dequeIS2_SaIS2_EEELi2EED1Ev>
 jmp    <T> <_ZN12CApplicationD1Ev+0x137>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
+add    $0x6c,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN18CFrameCountHandlerD1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN12CApplicationD1Ev+0x147>
+mov    0x8(%ebp),%eax
+add    $0x6c,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN18CFrameCountHandlerD1Ev>
+jmp    <T> <_ZN12CApplicationD1Ev+0x15f>
+mov    %edx,%ebx
+mov    %eax,%esi
+mov    0x8(%ebp),%eax
 add    $0x10,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CUserManagerD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CApplicationD1Ev+0x147>
+jmp    <T> <_ZN12CApplicationD1Ev+0x16f>
 mov    0x8(%ebp),%eax
 add    $0x10,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CUserManagerD1Ev>
-jmp    <T> <_ZN12CApplicationD1Ev+0x162>
+jmp    <T> <_ZN12CApplicationD1Ev+0x18a>
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
+je     <T> <_ZN12CApplicationD1Ev+0x1a9>
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

/* WARNING: Removing unreachable block (ram,0x0806210a) */
/* CApplication::~CApplication() */

void __thiscall CApplication::_ZN12CApplicationD2Ev(CApplication *this)

{
  *(undefined ***)this = &PTR__ZN12CApplicationD2Ev_0811d4e8;
                    /* try { // try from 08061fac to 08061fb0 has its CatchHandler @ 08061fb3 */
  puts("Application Stop!");
                    /* try { // try from 08061fd8 to 08061fdc has its CatchHandler @ 08061fdf */
  CPowerManager::~CPowerManager((CPowerManager *)(this + 0x370));
                    /* try { // try from 08062004 to 08062008 has its CatchHandler @ 0806200b */
  CGuildManager::~CGuildManager((CGuildManager *)(this + 0x290));
                    /* try { // try from 08062030 to 08062034 has its CatchHandler @ 08062037 */
  CTcpNetSystem::~CTcpNetSystem((CTcpNetSystem *)(this + 0x130));
  CMutex::~CMutex((CMutex *)(this + 0x118));
  CMutex::~CMutex((CMutex *)(this + 0x100));
                    /* try { // try from 080620ac to 080620b0 has its CatchHandler @ 080620b3 */
  CSwapQueue<std::queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>,2>
  ::~CSwapQueue((CSwapQueue<std::queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>,2>
                 *)(this + 0xa0));
                    /* try { // try from 080620d4 to 080620d8 has its CatchHandler @ 080620db */
  CUserManager::~CUserManager((CUserManager *)(this + 0x10));
  CAppBase::~CAppBase((CAppBase *)this);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFApplication.cpp](source/DNFServer/GameServer/Guild/DNFApplication.cpp)（约第 106 行）：

```cpp
CApplication::~CApplication()
{
    puts("Application Stop!");
}
```
