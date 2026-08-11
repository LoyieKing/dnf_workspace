# _ZN20CTask_ChristmasEvent18MakeEventStartTickEi

`CTask_ChristmasEvent::MakeEventStartTick(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x809c0b6` | `0x287` | `0x809fdc8` | `0x293` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,184 +1,187 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
-sub    $0xb4,%esp
+sub    $0xc4,%esp
 call   <T> <_ZN20CTask_ChristmasEvent15DecideEventTimeEv>
-mov    %eax,-0x14(%ebp)
+mov    %eax,-0x48(%ebp)
 movl   $0x0,(%esp)
 call   <T> <time>
-mov    %eax,-0x20(%ebp)
-lea    -0x20(%ebp),%eax
+mov    %eax,-0x54(%ebp)
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <localtime>
-mov    (%eax),%edx
-mov    %edx,-0x50(%ebp)
-mov    0x4(%eax),%edx
-mov    %edx,-0x4c(%ebp)
-mov    0x8(%eax),%edx
-mov    %edx,-0x48(%ebp)
-mov    0xc(%eax),%edx
-mov    %edx,-0x44(%ebp)
-mov    0x10(%eax),%edx
-mov    %edx,-0x40(%ebp)
-mov    0x14(%eax),%edx
-mov    %edx,-0x3c(%ebp)
-mov    0x18(%eax),%edx
-mov    %edx,-0x38(%ebp)
-mov    0x1c(%eax),%edx
-mov    %edx,-0x34(%ebp)
-mov    0x20(%eax),%edx
-mov    %edx,-0x30(%ebp)
-mov    0x24(%eax),%edx
-mov    %edx,-0x2c(%ebp)
+mov    %eax,-0x44(%ebp)
+mov    -0x44(%ebp),%eax
+mov    (%eax),%eax
+mov    %eax,-0x40(%ebp)
+mov    -0x44(%ebp),%eax
+mov    0x4(%eax),%eax
+mov    %eax,-0x3c(%ebp)
+mov    -0x44(%ebp),%eax
+mov    0x8(%eax),%eax
+mov    %eax,-0x38(%ebp)
+mov    -0x44(%ebp),%eax
+mov    0xc(%eax),%eax
+mov    %eax,-0x34(%ebp)
+mov    -0x44(%ebp),%eax
+mov    0x10(%eax),%eax
+mov    %eax,-0x30(%ebp)
+mov    -0x44(%ebp),%eax
+mov    0x14(%eax),%eax
+mov    %eax,-0x2c(%ebp)
+mov    -0x44(%ebp),%eax
+mov    0x18(%eax),%eax
+mov    %eax,-0x28(%ebp)
+mov    -0x44(%ebp),%eax
+mov    0x1c(%eax),%eax
+mov    %eax,-0x24(%ebp)
+mov    -0x44(%ebp),%eax
+mov    0x20(%eax),%eax
+mov    %eax,-0x20(%ebp)
+mov    -0x44(%ebp),%eax
+mov    0x24(%eax),%eax
+mov    %eax,-0x1c(%ebp)
+mov    -0x44(%ebp),%eax
 mov    0x28(%eax),%eax
-mov    %eax,-0x28(%ebp)
+mov    %eax,-0x18(%ebp)
 call   <T> <_ZN20CTask_ChristmasEvent17getEventStartTimeEv>
-mov    -0x20(%ebp),%edx
-cmp    %edx,%eax
+mov    %eax,%edx
+mov    -0x54(%ebp),%eax
+cmp    %eax,%edx
 setg   %al
 test   %al,%al
-je     <T> <_ZN20CTask_ChristmasEvent18MakeEventStartTickEi+0x110>
-mov    -0x50(%ebp),%eax
-mov    %eax,-0x7c(%ebp)
-mov    -0x4c(%ebp),%eax
+je     <T> <_ZN20CTask_ChristmasEvent18MakeEventStartTickEi+0x12a>
+mov    -0x34(%ebp),%eax
 mov    %eax,-0x78(%ebp)
-mov    -0x48(%ebp),%eax
+mov    -0x30(%ebp),%eax
 mov    %eax,-0x74(%ebp)
-mov    -0x44(%ebp),%eax
+mov    -0x2c(%ebp),%eax
 mov    %eax,-0x70(%ebp)
-mov    -0x40(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    %eax,-0x6c(%ebp)
-mov    -0x3c(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    %eax,-0x68(%ebp)
-mov    -0x38(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,-0x64(%ebp)
-mov    -0x34(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,-0x60(%ebp)
-mov    -0x30(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    %eax,-0x5c(%ebp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,-0x58(%ebp)
-mov    -0x28(%ebp),%eax
-mov    %eax,-0x54(%ebp)
-movl   $0x0,-0x74(%ebp)
-movl   $0x0,-0x78(%ebp)
 movl   $0x0,-0x7c(%ebp)
-lea    -0x7c(%ebp),%eax
+movl   $0x0,-0x80(%ebp)
+movl   $0x0,-0x84(%ebp)
+lea    -0x84(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <mktime>
 mov    %eax,-0x10(%ebp)
 call   <T> <_ZN20CTask_ChristmasEvent17getEventStartTimeEv>
 mov    %eax,%ecx
 sub    -0x10(%ebp),%ecx
 mov    $0xc22e4507,%edx
 mov    %ecx,%eax
 imul   %edx
 lea    (%edx,%ecx,1),%eax
 mov    %eax,%edx
 sar    $0x10,%edx
 mov    %ecx,%eax
 sar    $0x1f,%eax
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
 mov    %eax,0x8(%ebp)
 cmpl   $0x0,0x8(%ebp)
-jne    <T> <_ZN20CTask_ChristmasEvent18MakeEventStartTickEi+0x194>
-mov    -0x48(%ebp),%eax
+jne    <T> <_ZN20CTask_ChristmasEvent18MakeEventStartTickEi+0x1bd>
+mov    -0x38(%ebp),%eax
 add    $0x1,%eax
-cmp    -0x14(%ebp),%eax
-jle    <T> <_ZN20CTask_ChristmasEvent18MakeEventStartTickEi+0x194>
+cmp    -0x48(%ebp),%eax
+jle    <T> <_ZN20CTask_ChristmasEvent18MakeEventStartTickEi+0x1bd>
 movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN20CTask_ChristmasEvent18MakeEventStartTickEi+0x141>
-call   <T> <_ZN20CTask_ChristmasEvent15DecideEventTimeEv>
-mov    %eax,-0x14(%ebp)
-mov    -0x48(%ebp),%eax
-add    $0x1,%eax
-cmp    -0x14(%ebp),%eax
-jle    <T> <_ZN20CTask_ChristmasEvent18MakeEventStartTickEi+0x14e>
+jmp    <T> <_ZN20CTask_ChristmasEvent18MakeEventStartTickEi+0x14c>
 addl   $0x1,-0xc(%ebp)
 cmpl   $0x2,-0xc(%ebp)
-setle  %al
+jg     <T> <_ZN20CTask_ChristmasEvent18MakeEventStartTickEi+0x16c>
+call   <T> <_ZN20CTask_ChristmasEvent15DecideEventTimeEv>
+mov    %eax,-0x48(%ebp)
+mov    -0x38(%ebp),%eax
+add    $0x1,%eax
+cmp    -0x48(%ebp),%eax
+jle    <T> <_ZN20CTask_ChristmasEvent18MakeEventStartTickEi+0x16c>
+mov    $0x1,%eax
+jmp    <T> <_ZN20CTask_ChristmasEvent18MakeEventStartTickEi+0x171>
+mov    $0x0,%eax
 test   %al,%al
-jne    <T> <_ZN20CTask_ChristmasEvent18MakeEventStartTickEi+0x12a>
-jmp    <T> <_ZN20CTask_ChristmasEvent18MakeEventStartTickEi+0x14f>
-nop
+jne    <T> <_ZN20CTask_ChristmasEvent18MakeEventStartTickEi+0x148>
 cmpl   $0x3,-0xc(%ebp)
-jne    <T> <_ZN20CTask_ChristmasEvent18MakeEventStartTickEi+0x194>
+jne    <T> <_ZN20CTask_ChristmasEvent18MakeEventStartTickEi+0x1bd>
 mov    -0x48(%ebp),%eax
-add    -0x14(%ebp),%eax
+mov    -0x38(%ebp),%edx
+lea    (%edx,%eax,1),%eax
 lea    0x1(%eax),%ecx
 mov    $0x51eb851f,%edx
 mov    %ecx,%eax
 imul   %edx
 sar    $0x3,%edx
 mov    %ecx,%eax
 sar    $0x1f,%eax
 mov    %edx,%ebx
 sub    %eax,%ebx
 mov    %ebx,%eax
-mov    %eax,-0x14(%ebp)
-mov    -0x14(%ebp),%edx
+mov    %eax,-0x48(%ebp)
+mov    -0x48(%ebp),%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 lea    0x0(,%eax,4),%edx
 add    %edx,%eax
 mov    %ecx,%edx
 sub    %eax,%edx
 mov    %edx,%eax
-mov    %eax,-0x14(%ebp)
-mov    -0x50(%ebp),%eax
-mov    %eax,-0xa8(%ebp)
-mov    -0x4c(%ebp),%eax
+mov    %eax,-0x48(%ebp)
+mov    -0x30(%ebp),%eax
+mov    %eax,-0xa0(%ebp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,-0x9c(%ebp)
+mov    -0x28(%ebp),%eax
+mov    %eax,-0x98(%ebp)
+mov    -0x24(%ebp),%eax
+mov    %eax,-0x94(%ebp)
+mov    -0x20(%ebp),%eax
+mov    %eax,-0x90(%ebp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,-0x8c(%ebp)
+mov    -0x18(%ebp),%eax
+mov    %eax,-0x88(%ebp)
+mov    0x8(%ebp),%eax
+mov    -0x34(%ebp),%edx
+lea    (%edx,%eax,1),%eax
 mov    %eax,-0xa4(%ebp)
 mov    -0x48(%ebp),%eax
-mov    %eax,-0xa0(%ebp)
-mov    -0x44(%ebp),%eax
-mov    %eax,-0x9c(%ebp)
-mov    -0x40(%ebp),%eax
-mov    %eax,-0x98(%ebp)
-mov    -0x3c(%ebp),%eax
-mov    %eax,-0x94(%ebp)
-mov    -0x38(%ebp),%eax
-mov    %eax,-0x90(%ebp)
-mov    -0x34(%ebp),%eax
-mov    %eax,-0x8c(%ebp)
-mov    -0x30(%ebp),%eax
-mov    %eax,-0x88(%ebp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,-0x84(%ebp)
-mov    -0x28(%ebp),%eax
-mov    %eax,-0x80(%ebp)
-mov    -0x9c(%ebp),%eax
-add    0x8(%ebp),%eax
-mov    %eax,-0x9c(%ebp)
-mov    -0x14(%ebp),%eax
 sub    $0x1,%eax
-mov    %eax,-0xa0(%ebp)
-movl   $0x0,-0xa4(%ebp)
-movl   $0x0,-0xa8(%ebp)
-lea    -0xa8(%ebp),%eax
+mov    %eax,-0xa8(%ebp)
+movl   $0x0,-0xac(%ebp)
+movl   $0x0,-0xb0(%ebp)
+lea    -0xb0(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <mktime>
-mov    %eax,-0x24(%ebp)
-lea    -0x24(%ebp),%eax
+mov    %eax,-0x58(%ebp)
+lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <ctime>
-mov    %eax,%ebx
+mov    %eax,-0x14(%ebp)
 movl   $0x96,0x8(%esp)
 movl   $&_ZZN20CTask_ChristmasEvent18MakeEventStartTickEiE12__FUNCTION__,0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"Next X_Mas Event Time! (%s)",0x8(%esp)
 movl   $"./log/GameServer",0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x24(%ebp),%eax
-add    $0xb4,%esp
+mov    -0x58(%ebp),%eax
+add    $0xc4,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CTask_ChristmasEvent::MakeEventStartTick(int) */

time_t CTask_ChristmasEvent::_ZN20CTask_ChristmasEvent18MakeEventStartTickEi(int param_1)

{
  tm *ptVar1;
  int iVar2;
  char *pcVar3;
  tm local_ac;
  tm local_80;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  long local_30;
  char *local_2c;
  time_t local_28;
  time_t local_24;
  CMyFileLog local_20 [8];
  int local_18;
  int local_14;
  int local_10;
  
  local_18 = _ZN20CTask_ChristmasEvent15DecideEventTimeEv();
  local_24 = time((time_t *)0x0);
  ptVar1 = localtime(&local_24);
  local_54 = ptVar1->tm_sec;
  local_50 = ptVar1->tm_min;
  local_4c = ptVar1->tm_hour;
  local_48 = ptVar1->tm_mday;
  local_44 = ptVar1->tm_mon;
  local_40 = ptVar1->tm_year;
  local_3c = ptVar1->tm_wday;
  local_38 = ptVar1->tm_yday;
  local_34 = ptVar1->tm_isdst;
  local_30 = ptVar1->tm_gmtoff;
  local_2c = ptVar1->tm_zone;
  iVar2 = getEventStartTime();
  if (local_24 < iVar2) {
    local_80.tm_mday = local_48;
    local_80.tm_mon = local_44;
    local_80.tm_year = local_40;
    local_80.tm_wday = local_3c;
    local_80.tm_yday = local_38;
    local_80.tm_isdst = local_34;
    local_80.tm_gmtoff = local_30;
    local_80.tm_zone = local_2c;
    local_80.tm_hour = 0;
    local_80.tm_min = 0;
    local_80.tm_sec = 0;
    local_14 = mktime(&local_80);
    iVar2 = getEventStartTime();
    param_1 = (iVar2 - local_14) / 0x15180;
  }
  if ((param_1 == 0) && (local_18 < local_4c + 1)) {
    local_10 = 0;
    while ((local_10 < 3 &&
           (local_18 = _ZN20CTask_ChristmasEvent15DecideEventTimeEv(), local_18 < local_4c + 1))) {
      local_10 = local_10 + 1;
    }
    if (local_10 == 3) {
      local_18 = (local_4c + local_18 + 1) % 0x19;
    }
  }
  local_ac.tm_mon = local_44;
  local_ac.tm_year = local_40;
  local_ac.tm_wday = local_3c;
  local_ac.tm_yday = local_38;
  local_ac.tm_isdst = local_34;
  local_ac.tm_gmtoff = local_30;
  local_ac.tm_zone = local_2c;
  local_ac.tm_mday = local_48 + param_1;
  local_ac.tm_hour = local_18 + -1;
  local_ac.tm_min = 0;
  local_ac.tm_sec = 0;
  local_28 = mktime(&local_ac);
  pcVar3 = ctime(&local_28);
  CMyFileLog::CMyFileLog(local_20,"MakeEventStartTick",0x96);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_20,"./log/GameServer","Next X_Mas Event Time! (%s)",pcVar3);
  return local_28;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/TaskImpl.cpp](source/DNFServer/GameServer/Monitor/TaskImpl.cpp)（约第 61 行）：

```cpp
unsigned int CTask_ChristmasEvent::MakeEventStartTick(int param_1)
{
    int eventHour = DecideEventTime();
    time_t now = time(0);
    tm* pt = localtime(&now);
    int sec = pt->tm_sec;
    int min = pt->tm_min;
    int hour = pt->tm_hour;
    int mday = pt->tm_mday;
    int mon = pt->tm_mon;
    int year = pt->tm_year;
    int wday = pt->tm_wday;
    int yday = pt->tm_yday;
    int isdst = pt->tm_isdst;
    long gmtoff = pt->tm_gmtoff;
    char* zone = (char*)pt->tm_zone;

    if (now < (time_t)getEventStartTime())
    {
        tm t;
        t.tm_mday = mday;
        t.tm_mon = mon;
        t.tm_year = year;
        t.tm_wday = wday;
        t.tm_yday = yday;
        t.tm_isdst = isdst;
        t.tm_gmtoff = gmtoff;
        t.tm_zone = zone;
        t.tm_hour = 0;
        t.tm_min = 0;
        t.tm_sec = 0;
        time_t midnight = mktime(&t);
        param_1 = (int)(((time_t)getEventStartTime() - midnight) / 86400);
    }
    if (param_1 == 0 && eventHour < hour + 1)
    {
        int n = 0;
        while (n < 3 && (eventHour = DecideEventTime(), eventHour < hour + 1))
        {
            n++;
        }
        if (n == 3)
        {
            eventHour = (hour + eventHour + 1) % 25;
        }
    }
    tm t2;
    t2.tm_mon = mon;
    t2.tm_year = year;
    t2.tm_wday = wday;
    t2.tm_yday = yday;
    t2.tm_isdst = isdst;
    t2.tm_gmtoff = gmtoff;
    t2.tm_zone = zone;
    t2.tm_mday = mday + param_1;
    t2.tm_hour = eventHour - 1;
    t2.tm_min = 0;
    t2.tm_sec = 0;
    time_t result = mktime(&t2);
    char* s = ctime(&result);
    DNF_LOG_SCOPE_LINE(0x96, "./log/GameServer", "Next X_Mas Event Time! (%s)", s);
    return (unsigned int)result;
}
```
