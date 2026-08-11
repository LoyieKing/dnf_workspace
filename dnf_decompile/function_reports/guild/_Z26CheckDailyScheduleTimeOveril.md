# _Z26CheckDailyScheduleTimeOveril

`CheckDailyScheduleTimeOver(int, long)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x805d686` | `0xdb` | `0x80a4160` | `0xb2` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,70 +1,56 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x78,%esp
-lea    -0x10(%ebp),%eax
-mov    %eax,(%esp)
+sub    $0x58,%esp
+movl   $0x0,(%esp)
 call   <T> <time>
-lea    -0x10(%ebp),%eax
+mov    %eax,-0x14(%ebp)
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <localtime>
-mov    (%eax),%edx
-mov    %edx,-0x3c(%ebp)
-mov    0x4(%eax),%edx
-mov    %edx,-0x38(%ebp)
-mov    0x8(%eax),%edx
-mov    %edx,-0x34(%ebp)
-mov    0xc(%eax),%edx
-mov    %edx,-0x30(%ebp)
-mov    0x10(%eax),%edx
-mov    %edx,-0x2c(%ebp)
-mov    0x14(%eax),%edx
-mov    %edx,-0x28(%ebp)
-mov    0x18(%eax),%edx
-mov    %edx,-0x24(%ebp)
-mov    0x1c(%eax),%edx
-mov    %edx,-0x20(%ebp)
-mov    0x20(%eax),%edx
-mov    %edx,-0x1c(%ebp)
-mov    0x24(%eax),%edx
-mov    %edx,-0x18(%ebp)
+mov    %eax,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
+mov    (%eax),%eax
+mov    %eax,-0x40(%ebp)
+mov    -0x10(%ebp),%eax
+mov    0x4(%eax),%eax
+mov    %eax,-0x3c(%ebp)
+mov    -0x10(%ebp),%eax
+mov    0x8(%eax),%eax
+mov    %eax,-0x38(%ebp)
+mov    -0x10(%ebp),%eax
+mov    0xc(%eax),%eax
+mov    %eax,-0x34(%ebp)
+mov    -0x10(%ebp),%eax
+mov    0x10(%eax),%eax
+mov    %eax,-0x30(%ebp)
+mov    -0x10(%ebp),%eax
+mov    0x14(%eax),%eax
+mov    %eax,-0x2c(%ebp)
+mov    -0x10(%ebp),%eax
+mov    0x18(%eax),%eax
+mov    %eax,-0x28(%ebp)
+mov    -0x10(%ebp),%eax
+mov    0x1c(%eax),%eax
+mov    %eax,-0x24(%ebp)
+mov    -0x10(%ebp),%eax
+mov    0x20(%eax),%eax
+mov    %eax,-0x20(%ebp)
+mov    -0x10(%ebp),%eax
+mov    0x24(%eax),%eax
+mov    %eax,-0x1c(%ebp)
+mov    -0x10(%ebp),%eax
 mov    0x28(%eax),%eax
-mov    %eax,-0x14(%ebp)
-mov    -0x3c(%ebp),%eax
-mov    %eax,-0x68(%ebp)
-mov    -0x38(%ebp),%eax
-mov    %eax,-0x64(%ebp)
-mov    -0x34(%ebp),%eax
-mov    %eax,-0x60(%ebp)
-mov    -0x30(%ebp),%eax
-mov    %eax,-0x5c(%ebp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,-0x58(%ebp)
-mov    -0x28(%ebp),%eax
-mov    %eax,-0x54(%ebp)
-mov    -0x24(%ebp),%eax
-mov    %eax,-0x50(%ebp)
-mov    -0x20(%ebp),%eax
-mov    %eax,-0x4c(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,-0x48(%ebp)
-mov    -0x18(%ebp),%eax
-mov    %eax,-0x44(%ebp)
-mov    -0x14(%ebp),%eax
-mov    %eax,-0x40(%ebp)
+mov    %eax,-0x18(%ebp)
 mov    0x8(%ebp),%eax
-mov    %eax,-0x60(%ebp)
-movl   $0x0,-0x64(%ebp)
-movl   $0x0,-0x68(%ebp)
-lea    -0x68(%ebp),%eax
+mov    %eax,-0x38(%ebp)
+movl   $0x0,-0x3c(%ebp)
+movl   $0x0,-0x40(%ebp)
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <mktime>
 mov    %eax,-0xc(%ebp)
-mov    -0x34(%ebp),%eax
-cmp    0x8(%ebp),%eax
-jge    <T> <_Z26CheckDailyScheduleTimeOveril+0xd0>
-subl   $0x15180,-0xc(%ebp)
 mov    0xc(%ebp),%eax
 cmp    -0xc(%ebp),%eax
 setl   %al
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CheckDailyScheduleTimeOver(int, long) */

bool CheckDailyScheduleTimeOver(int param_1,long param_2)

{
  tm *ptVar1;
  tm local_6c;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  long local_1c;
  char *local_18;
  time_t local_14;
  int local_10;
  
  time(&local_14);
  ptVar1 = localtime(&local_14);
  local_40 = ptVar1->tm_sec;
  local_3c = ptVar1->tm_min;
  local_38 = ptVar1->tm_hour;
  local_6c.tm_mday = ptVar1->tm_mday;
  local_6c.tm_mon = ptVar1->tm_mon;
  local_6c.tm_year = ptVar1->tm_year;
  local_6c.tm_wday = ptVar1->tm_wday;
  local_6c.tm_yday = ptVar1->tm_yday;
  local_6c.tm_isdst = ptVar1->tm_isdst;
  local_6c.tm_gmtoff = ptVar1->tm_gmtoff;
  local_6c.tm_zone = ptVar1->tm_zone;
  local_6c.tm_hour = param_1;
  local_6c.tm_min = 0;
  local_6c.tm_sec = 0;
  local_34 = local_6c.tm_mday;
  local_30 = local_6c.tm_mon;
  local_2c = local_6c.tm_year;
  local_28 = local_6c.tm_wday;
  local_24 = local_6c.tm_yday;
  local_20 = local_6c.tm_isdst;
  local_1c = local_6c.tm_gmtoff;
  local_18 = local_6c.tm_zone;
  local_10 = mktime(&local_6c);
  if (local_38 < param_1) {
    local_10 = local_10 + -0x15180;
  }
  return param_2 < local_10;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/Scheduler.cpp](source/DNFServer/GameServer/Guild/Scheduler.cpp)（约第 241 行）：

```cpp
bool CheckDailyScheduleTimeOver(int hour, long t)
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
    local.tm_hour = hour;
    local.tm_min = 0;
    local.tm_sec = 0;
    time_t target = mktime(&local);
    return t < target;
}
```
