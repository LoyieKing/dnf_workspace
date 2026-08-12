# _ZN14CMemberManagerC2Ev

`CMemberManager::CMemberManager()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8099a50` | `0xa0` | `0x8061932` | `0xa0` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,51 +1,51 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x10,%esp
 mov    0x8(%ebp),%eax
+add    $0x8,%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt3mapIjP7CMemberSt4lessIjESaISt4pairIKjS1_EEEC1Ev>
+mov    0x8(%ebp),%eax
+add    $0x28,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CSchedulerC1Ev>
+mov    0x8(%ebp),%eax
 movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x4(%eax)
 mov    0x8(%ebp),%eax
-add    $0x8,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt3mapIjP7CMemberSt4lessIjESaISt4pairIKjS1_EEEC1Ev>
-mov    0x8(%ebp),%eax
 movl   $0x0,0x20(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x24(%eax)
-mov    0x8(%ebp),%eax
-add    $0x28,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CSchedulerC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x28,%eax
 movl   $0x6,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN10CScheduler14SetSpecialHourEi>
 jmp    <T> <_ZN14CMemberManagerC1Ev+0x99>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x28,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CSchedulerD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN14CMemberManagerC1Ev+0x7b>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP7CMemberSt4lessIjESaISt4pairIKjS1_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 add    $0x10,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMemberManager::CMemberManager() */

void __thiscall CMemberManager::_ZN14CMemberManagerC2Ev(CMemberManager *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  std::
  map<unsigned_int,CMember*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CMember*>>>
  ::map((map<unsigned_int,CMember*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CMember*>>>
         *)(this + 8));
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
                    /* try { // try from 08099a96 to 08099a9a has its CatchHandler @ 08099acb */
  CScheduler::CScheduler((CScheduler *)(this + 0x28));
                    /* try { // try from 08099aac to 08099ab0 has its CatchHandler @ 08099ab3 */
  CScheduler::SetSpecialHour((CScheduler *)(this + 0x28),6);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFMemberManager.cpp](source/DNFServer/GameServer/Monitor/DNFMemberManager.cpp)（约第 37 行）：

```cpp
CMemberManager::CMemberManager()
{
    m_app = 0;
    m_userMgr = 0;
    m_memberConfig = 0;
    m_memberExpTbl = 0;
    m_scheduler.SetSpecialHour(6);
}
```
