# _ZN13CGuildManagerD2Ev

`CGuildManager::~CGuildManager()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8095048` | `0xce` | `0x805b63a` | `0xc5` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,73 +1,71 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x10,%esp
 mov    0x8(%ebp),%eax
-movl   $0x0,(%eax)
-mov    0x8(%ebp),%eax
 add    $0x9c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjSt6vectorIjSaIjEESt4lessIjESaISt4pairIKjS2_EEED1Ev>
-jmp    <T> <_ZN13CGuildManagerD1Ev+0x3b>
+jmp    <T> <_ZN13CGuildManagerD1Ev+0x32>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x58,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIj18STTodayGuildMemberSt4lessIjESaISt4pairIKjS0_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN13CGuildManagerD1Ev+0x4b>
+jmp    <T> <_ZN13CGuildManagerD1Ev+0x42>
 mov    0x8(%ebp),%eax
 add    $0x58,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIj18STTodayGuildMemberSt4lessIjESaISt4pairIKjS0_EEED1Ev>
-jmp    <T> <_ZN13CGuildManagerD1Ev+0x63>
+jmp    <T> <_ZN13CGuildManagerD1Ev+0x5a>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x44,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9CGuildWarD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN13CGuildManagerD1Ev+0x73>
+jmp    <T> <_ZN13CGuildManagerD1Ev+0x6a>
 mov    0x8(%ebp),%eax
 add    $0x44,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9CGuildWarD1Ev>
-jmp    <T> <_ZN13CGuildManagerD1Ev+0x8b>
+jmp    <T> <_ZN13CGuildManagerD1Ev+0x82>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x1c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CSchedulerD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN13CGuildManagerD1Ev+0x9b>
+jmp    <T> <_ZN13CGuildManagerD1Ev+0x92>
 mov    0x8(%ebp),%eax
 add    $0x1c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CSchedulerD1Ev>
-jmp    <T> <_ZN13CGuildManagerD1Ev+0xb9>
+jmp    <T> <_ZN13CGuildManagerD1Ev+0xb0>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP6CGuildSt4lessIjESaISt4pairIKjS1_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP6CGuildSt4lessIjESaISt4pairIKjS1_EEED1Ev>
 add    $0x10,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildManager::~CGuildManager() */

void __thiscall CGuildManager::_ZN13CGuildManagerD2Ev(CGuildManager *this)

{
  *(undefined4 *)this = 0;
                    /* try { // try from 08095064 to 08095068 has its CatchHandler @ 0809506b */
  std::
  map<unsigned_int,std::vector<unsigned_int,std::allocator<unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<unsigned_int,std::allocator<unsigned_int>>>>>
  ::~map((map<unsigned_int,std::vector<unsigned_int,std::allocator<unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<unsigned_int,std::allocator<unsigned_int>>>>>
          *)(this + 0x9c));
                    /* try { // try from 0809508c to 08095090 has its CatchHandler @ 08095093 */
  std::
  map<unsigned_int,STTodayGuildMember,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STTodayGuildMember>>>
  ::~map((map<unsigned_int,STTodayGuildMember,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STTodayGuildMember>>>
          *)(this + 0x58));
                    /* try { // try from 080950b4 to 080950b8 has its CatchHandler @ 080950bb */
  CGuildWar::~CGuildWar((CGuildWar *)(this + 0x44));
                    /* try { // try from 080950dc to 080950e0 has its CatchHandler @ 080950e3 */
  CScheduler::~CScheduler((CScheduler *)(this + 0x1c));
  std::
  map<unsigned_int,CGuild*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGuild*>>>
  ::~map((map<unsigned_int,CGuild*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGuild*>>>
          *)(this + 4));
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuildManager.cpp](source/DNFServer/GameServer/Guild/DNFGuildManager.cpp)（约第 145 行）：

```cpp
CGuildManager::~CGuildManager()
{
}
```
