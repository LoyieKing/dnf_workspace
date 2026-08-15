# _ZN16village_attacked23CVillageAttackedManager10OnScheduleEv

`village_attacked::CVillageAttackedManager::OnSchedule()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a8656` | `0x270` | `0x80a7a80` | `0x271` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,181 +1,183 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x64,%esp
 call   <T> <_Z10GetNowTimev>
 mov    %eax,-0x24(%ebp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <localtime>
 mov    %eax,-0x20(%ebp)
 movl   $0x0,-0x1c(%ebp)
-movl   $0x0,-0x18(%ebp)
 mov    &_ZN16village_attacked26village_attacked_schedulerE+0x8,%ecx
 mov    &_ZN16village_attacked26village_attacked_schedulerE+0x4,%edx
 mov    &_ZN16village_attacked26village_attacked_schedulerE,%eax
 mov    %ecx,0x34(%esp)
 mov    %edx,0x30(%esp)
 mov    %eax,0x2c(%esp)
 mov    -0x20(%ebp),%eax
 mov    (%eax),%edx
 mov    %edx,(%esp)
 mov    0x4(%eax),%edx
 mov    %edx,0x4(%esp)
 mov    0x8(%eax),%edx
 mov    %edx,0x8(%esp)
 mov    0xc(%eax),%edx
 mov    %edx,0xc(%esp)
 mov    0x10(%eax),%edx
 mov    %edx,0x10(%esp)
 mov    0x14(%eax),%edx
 mov    %edx,0x14(%esp)
 mov    0x18(%eax),%edx
 mov    %edx,0x18(%esp)
 mov    0x1c(%eax),%edx
 mov    %edx,0x1c(%esp)
 mov    0x20(%eax),%edx
 mov    %edx,0x20(%esp)
 mov    0x24(%eax),%edx
 mov    %edx,0x24(%esp)
 mov    0x28(%eax),%eax
 mov    %eax,0x28(%esp)
 call   <T> <_Z15GetNextSchedule2tmiii>
-mov    %eax,-0x14(%ebp)
-movl   $0x1,-0xc(%ebp)
-jmp    <T> <_ZN16village_attacked23CVillageAttackedManager10OnScheduleEv+0x15e>
-mov    -0xc(%ebp),%edx
+mov    %eax,-0x18(%ebp)
+movl   $0x1,-0x10(%ebp)
+jmp    <T> <_ZN16village_attacked23CVillageAttackedManager10OnScheduleEv+0x159>
+mov    -0x10(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 add    $0x1,%eax
-mov    &_ZN16village_attacked26village_attacked_schedulerE(,%eax,8),%ebx
-mov    -0xc(%ebp),%edx
+add    %eax,%eax
+mov    &_ZN16village_attacked26village_attacked_schedulerE(,%eax,4),%ebx
+mov    -0x10(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 add    %eax,%eax
 add    $0x1,%eax
 mov    &_ZN16village_attacked26village_attacked_schedulerE(,%eax,4),%ecx
-mov    -0xc(%ebp),%edx
+mov    -0x10(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
-shl    $0x3,%eax
-mov    &_ZN16village_attacked26village_attacked_schedulerE(%eax),%eax
+add    %eax,%eax
+mov    &_ZN16village_attacked26village_attacked_schedulerE(,%eax,4),%eax
 mov    %ebx,0x34(%esp)
 mov    %ecx,0x30(%esp)
 mov    %eax,0x2c(%esp)
 mov    -0x20(%ebp),%eax
 mov    (%eax),%edx
 mov    %edx,(%esp)
 mov    0x4(%eax),%edx
 mov    %edx,0x4(%esp)
 mov    0x8(%eax),%edx
 mov    %edx,0x8(%esp)
 mov    0xc(%eax),%edx
 mov    %edx,0xc(%esp)
 mov    0x10(%eax),%edx
 mov    %edx,0x10(%esp)
 mov    0x14(%eax),%edx
 mov    %edx,0x14(%esp)
 mov    0x18(%eax),%edx
 mov    %edx,0x18(%esp)
 mov    0x1c(%eax),%edx
 mov    %edx,0x1c(%esp)
 mov    0x20(%eax),%edx
 mov    %edx,0x20(%esp)
 mov    0x24(%eax),%edx
 mov    %edx,0x24(%esp)
 mov    0x28(%eax),%eax
 mov    %eax,0x28(%esp)
 call   <T> <_Z15GetNextSchedule2tmiii>
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
+cmp    -0x18(%ebp),%eax
+jge    <T> <_ZN16village_attacked23CVillageAttackedManager10OnScheduleEv+0x155>
+mov    -0x10(%ebp),%eax
 mov    %eax,-0x1c(%ebp)
-mov    -0x14(%ebp),%eax
-cmp    -0x1c(%ebp),%eax
-jle    <T> <_ZN16village_attacked23CVillageAttackedManager10OnScheduleEv+0x15a>
-mov    -0x1c(%ebp),%eax
-mov    %eax,-0x14(%ebp)
 mov    -0xc(%ebp),%eax
 mov    %eax,-0x18(%ebp)
-addl   $0x1,-0xc(%ebp)
+addl   $0x1,-0x10(%ebp)
 mov    &_ZN16village_attacked19MAX_SCHEDULER_COUNTE,%eax
-cmp    %eax,-0xc(%ebp)
+cmp    %eax,-0x10(%ebp)
 setl   %al
 test   %al,%al
-jne    <T> <_ZN16village_attacked23CVillageAttackedManager10OnScheduleEv+0xaa>
-mov    -0x18(%ebp),%edx
+jne    <T> <_ZN16village_attacked23CVillageAttackedManager10OnScheduleEv+0xa3>
+mov    -0x1c(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
-shl    $0x3,%eax
-mov    &_ZN16village_attacked26village_attacked_schedulerE+0x14(%eax),%ebx
-mov    -0x18(%ebp),%edx
+add    %eax,%eax
+add    $0x5,%eax
+mov    &_ZN16village_attacked26village_attacked_schedulerE(,%eax,4),%ebx
+mov    -0x1c(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
-shl    $0x3,%eax
-mov    &_ZN16village_attacked26village_attacked_schedulerE+0x10(%eax),%ecx
-mov    -0x18(%ebp),%edx
+add    %eax,%eax
+add    $0x4,%eax
+mov    &_ZN16village_attacked26village_attacked_schedulerE(,%eax,4),%ecx
+mov    -0x1c(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
-shl    $0x3,%eax
-mov    &_ZN16village_attacked26village_attacked_schedulerE+0xc(%eax),%eax
+add    %eax,%eax
+add    $0x3,%eax
+mov    &_ZN16village_attacked26village_attacked_schedulerE(,%eax,4),%eax
 mov    %ebx,0x34(%esp)
 mov    %ecx,0x30(%esp)
 mov    %eax,0x2c(%esp)
 mov    -0x20(%ebp),%eax
 mov    (%eax),%edx
 mov    %edx,(%esp)
 mov    0x4(%eax),%edx
 mov    %edx,0x4(%esp)
 mov    0x8(%eax),%edx
 mov    %edx,0x8(%esp)
 mov    0xc(%eax),%edx
 mov    %edx,0xc(%esp)
 mov    0x10(%eax),%edx
 mov    %edx,0x10(%esp)
 mov    0x14(%eax),%edx
 mov    %edx,0x14(%esp)
 mov    0x18(%eax),%edx
 mov    %edx,0x18(%esp)
 mov    0x1c(%eax),%edx
 mov    %edx,0x1c(%esp)
 mov    0x20(%eax),%edx
 mov    %edx,0x20(%esp)
 mov    0x24(%eax),%edx
 mov    %edx,0x24(%esp)
 mov    0x28(%eax),%eax
 mov    %eax,0x28(%esp)
 call   <T> <_Z15GetNextSchedule2tmiii>
 mov    %eax,-0x28(%ebp)
 mov    -0x28(%ebp),%eax
 mov    %eax,0x8(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16village_attacked23CVillageAttackedManager11InsertTimerEii>
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <localtime>
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x14(%ebp)
+mov    -0x14(%ebp),%eax
 movl   $0x0,(%eax)
-mov    -0x20(%ebp),%eax
+mov    -0x14(%ebp),%eax
 movl   $0x0,0x4(%eax)
-mov    -0x20(%ebp),%eax
+mov    -0x14(%ebp),%eax
 movl   $0x6,0x8(%eax)
-mov    -0x20(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    0xc(%eax),%eax
 lea    0x1(%eax),%edx
-mov    -0x20(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %edx,0xc(%eax)
-mov    -0x20(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <mktime>
-mov    %eax,-0x10(%ebp)
 add    $0x64,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* village_attacked::CVillageAttackedManager::OnSchedule() */

void __thiscall
village_attacked::CVillageAttackedManager::
_ZN16village_attacked23CVillageAttackedManager10OnScheduleEv(CVillageAttackedManager *this)

{
  int local_2c;
  time_t local_28;
  tm *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_10;
  
  local_28 = GetNowTime();
  local_24 = localtime(&local_28);
  local_20 = 0;
  local_1c = 0;
  local_18 = GetNextSchedule(*local_24,village_attacked_scheduler,_DAT_081bae24,_DAT_081bae28);
  for (local_10 = 1; local_10 < MAX_SCHEDULER_COUNT; local_10 = local_10 + 1) {
    local_20 = GetNextSchedule(*local_24,(&village_attacked_scheduler)[local_10 * 6],
                               (&village_attacked_scheduler)[local_10 * 6 + 1],
                               (&village_attacked_scheduler)[(local_10 * 3 + 1) * 2]);
    if (local_20 < local_18) {
      local_1c = local_10;
      local_18 = local_20;
    }
  }
  local_2c = GetNextSchedule(*local_24,*(int *)(&DAT_081bae2c + local_1c * 0x18),
                             *(int *)(&DAT_081bae30 + local_1c * 0x18),
                             *(int *)(&DAT_081bae34 + local_1c * 0x18));
  InsertTimer(this,local_18,local_2c);
  local_24 = localtime(&local_2c);
  local_24->tm_sec = 0;
  local_24->tm_min = 0;
  local_24->tm_hour = 6;
  local_24->tm_mday = local_24->tm_mday + 1;
  mktime(local_24);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/VillageAttackedManager.cpp](source/DNFServer/GameServer/Monitor/VillageAttackedManager.cpp)（约第 195 行）：

```cpp
void CVillageAttackedManager::OnSchedule()
{
    time_t now = GetNowTime();
    tm* t = localtime(&now);
    int bestIdx = 0;
    int bestTime = ::GetNextSchedule(*t, village_attacked_scheduler[0],
                                     village_attacked_scheduler[1],
                                     village_attacked_scheduler[2]);
    for (int i = 1; i < MAX_SCHEDULER_COUNT; i++)
    {
        int s = ::GetNextSchedule(*t, village_attacked_scheduler[i * 6],
                                  village_attacked_scheduler[i * 6 + 1],
                                  village_attacked_scheduler[i * 6 + 2]);
        if (s < bestTime)
        {
            bestIdx = i;
            bestTime = s;
        }
    }
    int end = ::GetNextSchedule(*t, village_attacked_scheduler[bestIdx * 6 + 3],
                                village_attacked_scheduler[bestIdx * 6 + 4],
                                village_attacked_scheduler[bestIdx * 6 + 5]);
    InsertTimer(bestTime, end);
    tm* t2 = localtime((time_t*)&end);
    t2->tm_sec = 0;
    t2->tm_min = 0;
    t2->tm_hour = 6;
    t2->tm_mday = t2->tm_mday + 1;
    mktime(t2);
}
```
