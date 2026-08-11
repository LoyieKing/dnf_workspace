# _Z21GetScheduleTimeAsWDayii

`GetScheduleTimeAsWDay(int, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x805d872` | `0xb1` | `0x80a42f9` | `0xd6` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,59 +1,70 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x58,%esp
-lea    -0x10(%ebp),%eax
-mov    %eax,(%esp)
+movl   $0x0,(%esp)
 call   <T> <time>
-lea    -0x10(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <localtime>
-mov    (%eax),%edx
-mov    %edx,-0x40(%ebp)
-mov    0x4(%eax),%edx
-mov    %edx,-0x3c(%ebp)
-mov    0x8(%eax),%edx
-mov    %edx,-0x38(%ebp)
-mov    0xc(%eax),%edx
-mov    %edx,-0x34(%ebp)
-mov    0x10(%eax),%edx
-mov    %edx,-0x30(%ebp)
-mov    0x14(%eax),%edx
-mov    %edx,-0x2c(%ebp)
-mov    0x18(%eax),%edx
-mov    %edx,-0x28(%ebp)
-mov    0x1c(%eax),%edx
-mov    %edx,-0x24(%ebp)
-mov    0x20(%eax),%edx
-mov    %edx,-0x20(%ebp)
-mov    0x24(%eax),%edx
-mov    %edx,-0x1c(%ebp)
+mov    %eax,-0x14(%ebp)
+mov    -0x14(%ebp),%eax
+mov    (%eax),%eax
+mov    %eax,-0x48(%ebp)
+mov    -0x14(%ebp),%eax
+mov    0x4(%eax),%eax
+mov    %eax,-0x44(%ebp)
+mov    -0x14(%ebp),%eax
+mov    0x8(%eax),%eax
+mov    %eax,-0x40(%ebp)
+mov    -0x14(%ebp),%eax
+mov    0xc(%eax),%eax
+mov    %eax,-0x3c(%ebp)
+mov    -0x14(%ebp),%eax
+mov    0x10(%eax),%eax
+mov    %eax,-0x38(%ebp)
+mov    -0x14(%ebp),%eax
+mov    0x14(%eax),%eax
+mov    %eax,-0x34(%ebp)
+mov    -0x14(%ebp),%eax
+mov    0x18(%eax),%eax
+mov    %eax,-0x30(%ebp)
+mov    -0x14(%ebp),%eax
+mov    0x1c(%eax),%eax
+mov    %eax,-0x2c(%ebp)
+mov    -0x14(%ebp),%eax
+mov    0x20(%eax),%eax
+mov    %eax,-0x28(%ebp)
+mov    -0x14(%ebp),%eax
+mov    0x24(%eax),%eax
+mov    %eax,-0x24(%ebp)
+mov    -0x14(%ebp),%eax
 mov    0x28(%eax),%eax
-mov    %eax,-0x18(%ebp)
-mov    -0x28(%ebp),%eax
+mov    %eax,-0x20(%ebp)
+mov    -0x30(%ebp),%eax
 mov    0x8(%ebp),%edx
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
-mov    %eax,-0xc(%ebp)
-cmpl   $0x0,-0xc(%ebp)
-js     <T> <_Z21GetScheduleTimeAsWDayii+0x80>
-cmpl   $0x0,-0xc(%ebp)
-jne    <T> <_Z21GetScheduleTimeAsWDayii+0x84>
-mov    -0x38(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
+js     <T> <_Z21GetScheduleTimeAsWDayii+0xa8>
+cmpl   $0x0,-0x10(%ebp)
+jne    <T> <_Z21GetScheduleTimeAsWDayii+0xac>
+mov    -0x40(%ebp),%eax
 cmp    0xc(%ebp),%eax
-jl     <T> <_Z21GetScheduleTimeAsWDayii+0x84>
-addl   $0x7,-0xc(%ebp)
-lea    -0x40(%ebp),%eax
+jl     <T> <_Z21GetScheduleTimeAsWDayii+0xac>
+addl   $0x7,-0x10(%ebp)
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <mktime>
-mov    %eax,-0x14(%ebp)
-mov    -0xc(%ebp),%eax
-imul   $0x15180,%eax,%edx
-mov    -0x14(%ebp),%eax
-lea    (%edx,%eax,1),%eax
-mov    %eax,-0x14(%ebp)
-lea    -0x14(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+mov    -0x10(%ebp),%eax
+imul   $0x15180,%eax,%eax
+add    -0xc(%ebp),%eax
+mov    %eax,-0x1c(%ebp)
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <localtime>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* GetScheduleTimeAsWDay(int, int) */

void GetScheduleTimeAsWDay(int param_1,int param_2)

{
  tm *ptVar1;
  time_t tVar2;
  tm local_44;
  int local_18;
  time_t local_14;
  int local_10;
  
  time(&local_14);
  ptVar1 = localtime(&local_14);
  local_44.tm_sec = ptVar1->tm_sec;
  local_44.tm_min = ptVar1->tm_min;
  local_44.tm_hour = ptVar1->tm_hour;
  local_44.tm_mday = ptVar1->tm_mday;
  local_44.tm_mon = ptVar1->tm_mon;
  local_44.tm_year = ptVar1->tm_year;
  local_44.tm_wday = ptVar1->tm_wday;
  local_44.tm_yday = ptVar1->tm_yday;
  local_44.tm_isdst = ptVar1->tm_isdst;
  local_44.tm_gmtoff = ptVar1->tm_gmtoff;
  local_44.tm_zone = ptVar1->tm_zone;
  local_10 = param_1 - local_44.tm_wday;
  if ((local_10 < 0) || ((local_10 == 0 && (param_2 <= local_44.tm_hour)))) {
    local_10 = local_10 + 7;
  }
  tVar2 = mktime(&local_44);
  local_18 = local_10 * 0x15180 + tVar2;
  localtime(&local_18);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/Scheduler.cpp](source/DNFServer/GameServer/Guild/Scheduler.cpp)（约第 294 行）：

```cpp
void GetScheduleTimeAsWDay(int day, int hour)
{
    time_t now = time(0);
    tm* pt = localtime(&now);
    tm local;
    local.tm_sec = pt->tm_sec;
    local.tm_min = pt->tm_min;
    local.tm_hour = pt->tm_hour;
    local.tm_mday = pt->tm_mday;
    local.tm_mon = pt->tm_mon;
    local.tm_year = pt->tm_year;
    local.tm_wday = pt->tm_wday;
    local.tm_yday = pt->tm_yday;
    local.tm_isdst = pt->tm_isdst;
    local.tm_gmtoff = pt->tm_gmtoff;
    local.tm_zone = pt->tm_zone;
    int diff = day - local.tm_wday;
    if (diff < 0 || (diff == 0 && hour <= local.tm_hour))
    {
        diff += 7;
    }
    time_t t2 = mktime(&local);
    time_t target = (time_t)(diff * 86400 + t2);
    localtime(&target);
}
```
