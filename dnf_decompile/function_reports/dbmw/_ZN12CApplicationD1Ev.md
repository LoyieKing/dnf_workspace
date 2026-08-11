# _ZN12CApplicationD1Ev

`CApplication::~CApplication()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x806b7ca` | `0x130` | `0x806ce26` | `0x160` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,99 +1,117 @@
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
 add    $0x128,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystemD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CApplicationD1Ev+0x4b>
 mov    0x8(%ebp),%eax
 add    $0x128,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystemD1Ev>
-jmp    <T> <_ZN12CApplicationD1Ev+0x95>
+jmp    <T> <_ZN12CApplicationD1Ev+0x65>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x110,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
+jmp    <T> <_ZN12CApplicationD1Ev+0x77>
+mov    0x8(%ebp),%eax
+add    $0x110,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CMutexD1Ev>
+jmp    <T> <_ZN12CApplicationD1Ev+0x91>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0xf8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
+jmp    <T> <_ZN12CApplicationD1Ev+0xa3>
+mov    0x8(%ebp),%eax
+add    $0xf8,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CMutexD1Ev>
+jmp    <T> <_ZN12CApplicationD1Ev+0xbd>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0xa0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CSwapQueueISt5queueIP14CUdpRecvBufferSt5dequeIS2_SaIS2_EEELi2EED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CApplicationD1Ev+0xc7>
-mov    0x8(%ebp),%eax
-add    $0x110,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CMutexD1Ev>
-mov    0x8(%ebp),%eax
-add    $0xf8,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CMutexD1Ev>
+jmp    <T> <_ZN12CApplicationD1Ev+0xcf>
 mov    0x8(%ebp),%eax
 add    $0xa0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CSwapQueueISt5queueIP14CUdpRecvBufferSt5dequeIS2_SaIS2_EEELi2EED1Ev>
-jmp    <T> <_ZN12CApplicationD1Ev+0xdf>
+jmp    <T> <_ZN12CApplicationD1Ev+0xe7>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x50,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CDBManagerD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CApplicationD1Ev+0xef>
+jmp    <T> <_ZN12CApplicationD1Ev+0xf7>
 mov    0x8(%ebp),%eax
 add    $0x50,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CDBManagerD1Ev>
-jmp    <T> <_ZN12CApplicationD1Ev+0x10a>
+jmp    <T> <_ZN12CApplicationD1Ev+0x10f>
+mov    %edx,%ebx
+mov    %eax,%esi
+mov    0x8(%ebp),%eax
+add    $0x1c,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN18CFrameCountHandlerD1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN12CApplicationD1Ev+0x11f>
+mov    0x8(%ebp),%eax
+add    $0x1c,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN18CFrameCountHandlerD1Ev>
+jmp    <T> <_ZN12CApplicationD1Ev+0x13a>
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
-je     <T> <_ZN12CApplicationD1Ev+0x129>
+je     <T> <_ZN12CApplicationD1Ev+0x159>
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

/* WARNING: Removing unreachable block (ram,0x0806b8e8) */
/* CApplication::~CApplication() */

void __thiscall CApplication::_ZN12CApplicationD1Ev(CApplication *this)

{
  *(undefined ***)this = &PTR__ZN12CApplicationD1Ev_081ab948;
                    /* try { // try from 0806b7e2 to 0806b7e6 has its CatchHandler @ 0806b7e9 */
  puts("Application Stop!");
                    /* try { // try from 0806b80e to 0806b812 has its CatchHandler @ 0806b815 */
  CTcpNetSystem::~CTcpNetSystem((CTcpNetSystem *)(this + 0x128));
  CMutex::~CMutex((CMutex *)(this + 0x110));
  CMutex::~CMutex((CMutex *)(this + 0xf8));
                    /* try { // try from 0806b88a to 0806b88e has its CatchHandler @ 0806b891 */
  CSwapQueue<std::queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>,2>
  ::~CSwapQueue((CSwapQueue<std::queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>,2>
                 *)(this + 0xa0));
                    /* try { // try from 0806b8b2 to 0806b8b6 has its CatchHandler @ 0806b8b9 */
  CDBManager::_ZN10CDBManagerD2Ev((CDBManager *)(this + 0x50));
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
