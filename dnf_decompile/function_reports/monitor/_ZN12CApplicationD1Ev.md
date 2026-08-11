# _ZN12CApplicationD1Ev

`CApplication::~CApplication()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8062b38` | `0x20c` | `0x8050900` | `0x214` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,169 +1,173 @@
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
 add    $0x368,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjSt4listIjSaIjEESt4lessIjESaISt4pairIKjS2_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CApplicationD1Ev+0x4b>
 mov    0x8(%ebp),%eax
 add    $0x368,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjSt4listIjSaIjEESt4lessIjESaISt4pairIKjS2_EEED1Ev>
 jmp    <T> <_ZN12CApplicationD1Ev+0x65>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x350,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIKSsiSt4lessIS0_ESaISt4pairIS0_iEEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CApplicationD1Ev+0x77>
 mov    0x8(%ebp),%eax
 add    $0x350,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIKSsiSt4lessIS0_ESaISt4pairIS0_iEEED1Ev>
 jmp    <T> <_ZN12CApplicationD1Ev+0x91>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x338,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3setISt4pairIKSsiESt4lessIS2_ESaIS2_EED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CApplicationD1Ev+0xa3>
 mov    0x8(%ebp),%eax
 add    $0x338,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3setISt4pairIKSsiESt4lessIS2_ESaIS2_EED1Ev>
 jmp    <T> <_ZN12CApplicationD1Ev+0xbd>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x300,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN21CBuddyRegisterManagerD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CApplicationD1Ev+0xcf>
 mov    0x8(%ebp),%eax
 add    $0x300,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN21CBuddyRegisterManagerD1Ev>
 jmp    <T> <_ZN12CApplicationD1Ev+0xe9>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x2d0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMemberManagerD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CApplicationD1Ev+0xfb>
 mov    0x8(%ebp),%eax
 add    $0x2d0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMemberManagerD1Ev>
 jmp    <T> <_ZN12CApplicationD1Ev+0x115>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x168,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystemD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CApplicationD1Ev+0x127>
 mov    0x8(%ebp),%eax
 add    $0x168,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystemD1Ev>
-jmp    <T> <_ZN12CApplicationD1Ev+0x171>
+jmp    <T> <_ZN12CApplicationD1Ev+0x141>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x150,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
+jmp    <T> <_ZN12CApplicationD1Ev+0x153>
+mov    0x8(%ebp),%eax
+add    $0x150,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CMutexD1Ev>
+jmp    <T> <_ZN12CApplicationD1Ev+0x16d>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x138,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMutexD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
+jmp    <T> <_ZN12CApplicationD1Ev+0x17f>
+mov    0x8(%ebp),%eax
+add    $0x138,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CMutexD1Ev>
+jmp    <T> <_ZN12CApplicationD1Ev+0x199>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0xd8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CSwapQueueISt5queueIP14CUdpRecvBufferSt5dequeIS2_SaIS2_EEELi2EED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CApplicationD1Ev+0x1a3>
-mov    0x8(%ebp),%eax
-add    $0x150,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CMutexD1Ev>
-mov    0x8(%ebp),%eax
-add    $0x138,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CMutexD1Ev>
+jmp    <T> <_ZN12CApplicationD1Ev+0x1ab>
 mov    0x8(%ebp),%eax
 add    $0xd8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CSwapQueueISt5queueIP14CUdpRecvBufferSt5dequeIS2_SaIS2_EEELi2EED1Ev>
-jmp    <T> <_ZN12CApplicationD1Ev+0x1bb>
+jmp    <T> <_ZN12CApplicationD1Ev+0x1c3>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x10,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CUserManagerD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CApplicationD1Ev+0x1cb>
+jmp    <T> <_ZN12CApplicationD1Ev+0x1d3>
 mov    0x8(%ebp),%eax
 add    $0x10,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CUserManagerD1Ev>
-jmp    <T> <_ZN12CApplicationD1Ev+0x1e6>
+jmp    <T> <_ZN12CApplicationD1Ev+0x1ee>
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
-je     <T> <_ZN12CApplicationD1Ev+0x205>
+je     <T> <_ZN12CApplicationD1Ev+0x20d>
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

/* WARNING: Removing unreachable block (ram,0x08062d32) */
/* CApplication::~CApplication() */

void __thiscall CApplication::_ZN12CApplicationD1Ev(CApplication *this)

{
  *(undefined ***)this = &PTR__ZN12CApplicationD1Ev_08121e48;
                    /* try { // try from 08062b50 to 08062b54 has its CatchHandler @ 08062b57 */
  puts("Application Stop!");
                    /* try { // try from 08062b7c to 08062b80 has its CatchHandler @ 08062b83 */
  std::
  map<unsigned_int,std::list<unsigned_int,std::allocator<unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::list<unsigned_int,std::allocator<unsigned_int>>>>>
  ::~map((map<unsigned_int,std::list<unsigned_int,std::allocator<unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::list<unsigned_int,std::allocator<unsigned_int>>>>>
          *)(this + 0x368));
                    /* try { // try from 08062ba8 to 08062bac has its CatchHandler @ 08062baf */
  std::
  map<std::string_const,int,std::less<std::string_const>,std::allocator<std::pair<std::string_const,int>>>
  ::~map((map<std::string_const,int,std::less<std::string_const>,std::allocator<std::pair<std::string_const,int>>>
          *)(this + 0x350));
                    /* try { // try from 08062bd4 to 08062bd8 has its CatchHandler @ 08062bdb */
  std::
  set<std::pair<std::string_const,int>,std::less<std::pair<std::string_const,int>>,std::allocator<std::pair<std::string_const,int>>>
  ::~set((set<std::pair<std::string_const,int>,std::less<std::pair<std::string_const,int>>,std::allocator<std::pair<std::string_const,int>>>
          *)(this + 0x338));
                    /* try { // try from 08062c00 to 08062c04 has its CatchHandler @ 08062c07 */
  CBuddyRegisterManager::~CBuddyRegisterManager((CBuddyRegisterManager *)(this + 0x300));
                    /* try { // try from 08062c2c to 08062c30 has its CatchHandler @ 08062c33 */
  CMemberManager::~CMemberManager((CMemberManager *)(this + 0x2d0));
                    /* try { // try from 08062c58 to 08062c5c has its CatchHandler @ 08062c5f */
  CTcpNetSystem::~CTcpNetSystem((CTcpNetSystem *)(this + 0x168));
  CMutex::~CMutex((CMutex *)(this + 0x150));
  CMutex::~CMutex((CMutex *)(this + 0x138));
                    /* try { // try from 08062cd4 to 08062cd8 has its CatchHandler @ 08062cdb */
  CSwapQueue<std::queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>,2>
  ::~CSwapQueue((CSwapQueue<std::queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>,2>
                 *)(this + 0xd8));
                    /* try { // try from 08062cfc to 08062d00 has its CatchHandler @ 08062d03 */
  CUserManager::~CUserManager((CUserManager *)(this + 0x10));
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
