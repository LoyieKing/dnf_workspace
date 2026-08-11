# _ZN12CApplicationD2Ev

`CApplication::~CApplication()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | DIFF | `0x805db9a` | `0x12c` | `0x804dcbc` | `0x134` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,99 +1,103 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x10,%esp
 mov    0x8(%ebp),%eax
 movl   $&_ZTV12CApplication+0x8,(%eax)
 movl   $"Application Stop!",(%esp)
 call   <T> <puts>
-jmp    <T> <_ZN12CApplicationD1Ev+0x69>
+jmp    <T> <_ZN12CApplicationD1Ev+0x39>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x244,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
+jmp    <T> <_ZN12CApplicationD1Ev+0x4b>
+mov    0x8(%ebp),%eax
+add    $0x244,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CMutexD1Ev>
+jmp    <T> <_ZN12CApplicationD1Ev+0x65>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x22c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
+jmp    <T> <_ZN12CApplicationD1Ev+0x77>
+mov    0x8(%ebp),%eax
+add    $0x22c,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CMutexD1Ev>
+jmp    <T> <_ZN12CApplicationD1Ev+0x91>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0xcc,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystemD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CApplicationD1Ev+0x9b>
-mov    0x8(%ebp),%eax
-add    $0x244,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CMutexD1Ev>
-mov    0x8(%ebp),%eax
-add    $0x22c,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CMutexD1Ev>
+jmp    <T> <_ZN12CApplicationD1Ev+0xa3>
 mov    0x8(%ebp),%eax
 add    $0xcc,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystemD1Ev>
-jmp    <T> <_ZN12CApplicationD1Ev+0xb3>
+jmp    <T> <_ZN12CApplicationD1Ev+0xbb>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x6c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CSwapQueueISt5queueIP14CUdpRecvBufferSt5dequeIS2_SaIS2_EEELi2EED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CApplicationD1Ev+0xc3>
+jmp    <T> <_ZN12CApplicationD1Ev+0xcb>
 mov    0x8(%ebp),%eax
 add    $0x6c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CSwapQueueISt5queueIP14CUdpRecvBufferSt5dequeIS2_SaIS2_EEELi2EED1Ev>
-jmp    <T> <_ZN12CApplicationD1Ev+0xdb>
+jmp    <T> <_ZN12CApplicationD1Ev+0xe3>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x4c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CUserManagerD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CApplicationD1Ev+0xeb>
+jmp    <T> <_ZN12CApplicationD1Ev+0xf3>
 mov    0x8(%ebp),%eax
 add    $0x4c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CUserManagerD1Ev>
-jmp    <T> <_ZN12CApplicationD1Ev+0x106>
+jmp    <T> <_ZN12CApplicationD1Ev+0x10e>
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
-je     <T> <_ZN12CApplicationD1Ev+0x125>
+je     <T> <_ZN12CApplicationD1Ev+0x12d>
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

/* WARNING: Removing unreachable block (ram,0x0805dcb4) */
/* CApplication::~CApplication() */

void __thiscall CApplication::_ZN12CApplicationD2Ev(CApplication *this)

{
  *(undefined ***)this = &PTR__ZN12CApplicationD2Ev_08157a08;
                    /* try { // try from 0805dbb2 to 0805dbb6 has its CatchHandler @ 0805dbb9 */
  puts("Application Stop!");
  CMutex::~CMutex((CMutex *)(this + 0x244));
  CMutex::~CMutex((CMutex *)(this + 0x22c));
                    /* try { // try from 0805dc2e to 0805dc32 has its CatchHandler @ 0805dc35 */
  CTcpNetSystem::~CTcpNetSystem((CTcpNetSystem *)(this + 0xcc));
                    /* try { // try from 0805dc56 to 0805dc5a has its CatchHandler @ 0805dc5d */
  CSwapQueue<std::queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>,2>
  ::~CSwapQueue((CSwapQueue<std::queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>,2>
                 *)(this + 0x6c));
                    /* try { // try from 0805dc7e to 0805dc82 has its CatchHandler @ 0805dc85 */
  CUserManager::~CUserManager((CUserManager *)(this + 0x4c));
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
