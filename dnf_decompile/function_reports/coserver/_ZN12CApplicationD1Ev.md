# _ZN12CApplicationD1Ev

`CApplication::~CApplication()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| coserver | DIFF | `0x804ef84` | `0x192` | `0x804c6e4` | `0x191` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,133 +1,133 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x1c,%esp
 mov    0x8(%ebp),%eax
 movl   $&_ZTV12CApplication+0x8,(%eax)
 movl   $"Application Stop!",(%esp)
 call   <T> <puts>
 jmp    <T> <_ZN12CApplicationD1Ev+0x3a>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x63c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CUserManagerD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CApplicationD1Ev+0x4c>
 mov    0x8(%ebp),%eax
 add    $0x63c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CUserManagerD1Ev>
 jmp    <T> <_ZN12CApplicationD1Ev+0x76>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x624,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %edx,%esi
 mov    %eax,%edi
 mov    0x8(%ebp),%eax
 add    $0x1e4,%eax
 test   %eax,%eax
-je     <T> <_ZN12CApplicationD1Ev+0xbf>
-jmp    <T> <_ZN12CApplicationD1Ev+0x98>
+je     <T> <_ZN12CApplicationD1Ev+0xbe>
+jmp    <T> <_ZN12CApplicationD1Ev+0x97>
 mov    0x8(%ebp),%eax
 add    $0x624,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexD1Ev>
 mov    0x8(%ebp),%eax
 add    $0x1e4,%eax
 test   %eax,%eax
-je     <T> <_ZN12CApplicationD1Ev+0x123>
-jmp    <T> <_ZN12CApplicationD1Ev+0xd3>
+jne    <T> <_ZN12CApplicationD1Ev+0xd2>
+jmp    <T> <_ZN12CApplicationD1Ev+0x122>
 mov    0x8(%ebp),%eax
 add    $0x1e4,%eax
 lea    0xf0(%eax),%ebx
 mov    0x8(%ebp),%eax
 add    $0x1e4,%eax
 cmp    %eax,%ebx
-je     <T> <_ZN12CApplicationD1Ev+0xbf>
+je     <T> <_ZN12CApplicationD1Ev+0xbe>
 sub    $0x18,%ebx
 mov    %ebx,(%esp)
 call   <T> <_ZN6CMutexD1Ev>
-jmp    <T> <_ZN12CApplicationD1Ev+0xa6>
+jmp    <T> <_ZN12CApplicationD1Ev+0xa5>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%esi
 mov    %eax,%edi
 mov    0x8(%ebp),%eax
 add    $0x54,%eax
 test   %eax,%eax
-je     <T> <_ZN12CApplicationD1Ev+0x11d>
-jmp    <T> <_ZN12CApplicationD1Ev+0xfa>
+je     <T> <_ZN12CApplicationD1Ev+0x11c>
+jmp    <T> <_ZN12CApplicationD1Ev+0xf9>
 mov    0x8(%ebp),%eax
 add    $0x1e4,%eax
 lea    0xf0(%eax),%ebx
 mov    0x8(%ebp),%eax
 add    $0x1e4,%eax
 cmp    %eax,%ebx
-je     <T> <_ZN12CApplicationD1Ev+0x123>
+je     <T> <_ZN12CApplicationD1Ev+0x122>
 sub    $0x18,%ebx
 mov    %ebx,(%esp)
 call   <T> <_ZN6CMutexD1Ev>
-jmp    <T> <_ZN12CApplicationD1Ev+0xe1>
+jmp    <T> <_ZN12CApplicationD1Ev+0xe0>
 mov    0x8(%ebp),%eax
 add    $0x54,%eax
 lea    0x190(%eax),%ebx
 mov    0x8(%ebp),%eax
 add    $0x54,%eax
 cmp    %eax,%ebx
-je     <T> <_ZN12CApplicationD1Ev+0x11d>
+je     <T> <_ZN12CApplicationD1Ev+0x11c>
 sub    $0x28,%ebx
 mov    %ebx,(%esp)
 call   <T> <_ZNSt5queueIP14CUdpRecvBufferSt5dequeIS1_SaIS1_EEED1Ev>
-jmp    <T> <_ZN12CApplicationD1Ev+0x106>
+jmp    <T> <_ZN12CApplicationD1Ev+0x105>
 mov    %edi,%eax
 mov    %esi,%edx
-jmp    <T> <_ZN12CApplicationD1Ev+0x150>
+jmp    <T> <_ZN12CApplicationD1Ev+0x14f>
 mov    0x8(%ebp),%eax
 add    $0x54,%eax
 test   %eax,%eax
-je     <T> <_ZN12CApplicationD1Ev+0x16b>
+je     <T> <_ZN12CApplicationD1Ev+0x16a>
 mov    0x8(%ebp),%eax
 add    $0x54,%eax
 lea    0x190(%eax),%ebx
 mov    0x8(%ebp),%eax
 add    $0x54,%eax
 cmp    %eax,%ebx
-je     <T> <_ZN12CApplicationD1Ev+0x16b>
+je     <T> <_ZN12CApplicationD1Ev+0x16a>
 sub    $0x28,%ebx
 mov    %ebx,(%esp)
 call   <T> <_ZNSt5queueIP14CUdpRecvBufferSt5dequeIS1_SaIS1_EEED1Ev>
-jmp    <T> <_ZN12CApplicationD1Ev+0x139>
+jmp    <T> <_ZN12CApplicationD1Ev+0x138>
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
-je     <T> <_ZN12CApplicationD1Ev+0x18a>
+je     <T> <_ZN12CApplicationD1Ev+0x189>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZdlPv>
 add    $0x1c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Removing unreachable block (ram,0x0804f103) */
/* CApplication::~CApplication() */

void __thiscall CApplication::_ZN12CApplicationD1Ev(CApplication *this)

{
  CMutex *this_00;
  queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>> *this_01;
  
  *(undefined ***)this = &PTR__ZN12CApplicationD1Ev_080b8b28;
                    /* try { // try from 0804ef9d to 0804efa1 has its CatchHandler @ 0804efa4 */
  puts("Application Stop!");
                    /* try { // try from 0804efc9 to 0804efcd has its CatchHandler @ 0804efd0 */
  CUserManager::~CUserManager((CUserManager *)(this + 0x63c));
  CMutex::~CMutex((CMutex *)(this + 0x624));
  if (this != (CApplication *)0xfffffe1c) {
    this_00 = (CMutex *)(this + 0x2d4);
    while (this_00 != (CMutex *)(this + 0x1e4)) {
      this_00 = this_00 + -0x18;
      CMutex::~CMutex(this_00);
    }
  }
  if (this != (CApplication *)0xffffffac) {
    this_01 = (queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>> *)
              (this + 0x1e4);
    while (this_01 !=
           (queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>> *)
           (this + 0x54)) {
      this_01 = this_01 + -0x28;
                    /* try { // try from 0804f0cd to 0804f0d1 has its CatchHandler @ 0804f0d4 */
      std::queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>::
      ~queue(this_01);
    }
  }
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
