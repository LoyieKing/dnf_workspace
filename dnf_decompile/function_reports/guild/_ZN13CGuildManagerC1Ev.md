# _ZN13CGuildManagerC1Ev

`CGuildManager::CGuildManager()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8094f04` | `0x143` | `0x805b4f2` | `0x148` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,98 +1,99 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x10,%esp
-mov    0x8(%ebp),%eax
-movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP6CGuildSt4lessIjESaISt4pairIKjS1_EEEC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x1c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CSchedulerC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x44,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9CGuildWarC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x58,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIj18STTodayGuildMemberSt4lessIjESaISt4pairIKjS0_EEEC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x9c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjSt6vectorIjSaIjEESt4lessIjESaISt4pairIKjS2_EEEC1Ev>
 mov    0x8(%ebp),%eax
-add    $0x1c,%eax
-movl   $0x5,0x8(%esp)
-movl   $0x1,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN10CScheduler17SetSpecialDayHourEii>
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
 movb   $0x1,0x40(%eax)
 mov    0x8(%ebp),%eax
 add    $0x70,%eax
 movl   $0x2c,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    0x8(%ebp),%eax
 add    $0xb4,%eax
 movl   $0x2c,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
-add    $0x10,%esp
-pop    %ebx
-pop    %esi
-pop    %ebp
-ret
+mov    0x8(%ebp),%eax
+add    $0x1c,%eax
+movl   $0x5,0x8(%esp)
+movl   $0x1,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN10CScheduler17SetSpecialDayHourEii>
+jmp    <T> <_ZN13CGuildManagerC1Ev+0x141>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x9c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjSt6vectorIjSaIjEESt4lessIjESaISt4pairIKjS2_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN13CGuildManagerC1Ev+0xdd>
+jmp    <T> <_ZN13CGuildManagerC1Ev+0xdb>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x58,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIj18STTodayGuildMemberSt4lessIjESaISt4pairIKjS0_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN13CGuildManagerC1Ev+0xf5>
+jmp    <T> <_ZN13CGuildManagerC1Ev+0xf3>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x44,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9CGuildWarD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN13CGuildManagerC1Ev+0x10d>
+jmp    <T> <_ZN13CGuildManagerC1Ev+0x10b>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x1c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CSchedulerD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN13CGuildManagerC1Ev+0x125>
+jmp    <T> <_ZN13CGuildManagerC1Ev+0x123>
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
+add    $0x10,%esp
+pop    %ebx
+pop    %esi
+pop    %ebp
+ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildManager::CGuildManager() */

void __thiscall CGuildManager::_ZN13CGuildManagerC1Ev(CGuildManager *this)

{
  *(undefined4 *)this = 0;
  std::
  map<unsigned_int,CGuild*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGuild*>>>
  ::map((map<unsigned_int,CGuild*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGuild*>>>
         *)(this + 4));
                    /* try { // try from 08094f2c to 08094f30 has its CatchHandler @ 08095029 */
  CScheduler::CScheduler((CScheduler *)(this + 0x1c));
                    /* try { // try from 08094f3a to 08094f3e has its CatchHandler @ 08095011 */
  CGuildWar::CGuildWar((CGuildWar *)(this + 0x44));
                    /* try { // try from 08094f48 to 08094f4c has its CatchHandler @ 08094ff9 */
  std::
  map<unsigned_int,STTodayGuildMember,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STTodayGuildMember>>>
  ::map((map<unsigned_int,STTodayGuildMember,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STTodayGuildMember>>>
         *)(this + 0x58));
                    /* try { // try from 08094f58 to 08094f5c has its CatchHandler @ 08094fe1 */
  std::
  map<unsigned_int,std::vector<unsigned_int,std::allocator<unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<unsigned_int,std::allocator<unsigned_int>>>>>
  ::map((map<unsigned_int,std::vector<unsigned_int,std::allocator<unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<unsigned_int,std::allocator<unsigned_int>>>>>
         *)(this + 0x9c));
                    /* try { // try from 08094f76 to 08094f7a has its CatchHandler @ 08094fc7 */
  CScheduler::_ZN10CScheduler17SetSpecialDayHourEii((CScheduler *)(this + 0x1c),1,5);
  this[0x40] = (CGuildManager)0x1;
  memset(this + 0x70,0,0x2c);
  memset(this + 0xb4,0,0x2c);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuildManager.cpp](source/DNFServer/GameServer/Guild/DNFGuildManager.cpp)（约第 136 行）：

```cpp
CGuildManager::CGuildManager()
{
    m_app = 0;
    m_field40 = 1;
    memset(m_time1, 0, sizeof(m_time1));
    memset(m_time2, 0, sizeof(m_time2));
    m_scheduler.SetSpecialDayHour(1, 5);
}
```
