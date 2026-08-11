# _ZN9CPowerWar25ProcessByMinuteStartEventEv

`CPowerWar::ProcessByMinuteStartEvent()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a6e9c` | `0x68` | `0x809cdc2` | `0x70` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,34 +1,37 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x24,%esp
 mov    0x8(%ebp),%eax
-movzbl 0x4(%eax),%eax
+add    $0x4,%eax
+movzbl (%eax),%eax
 test   %al,%al
-je     <T> <_ZN9CPowerWar25ProcessByMinuteStartEventEv+0x19>
-mov    $0x0,%eax
-jmp    <T> <_ZN9CPowerWar25ProcessByMinuteStartEventEv+0x62>
+jne    <T> <_ZN9CPowerWar25ProcessByMinuteStartEventEv+0x65>
 movl   $0x0,(%esp)
 call   <T> <time>
-mov    %eax,-0x10(%ebp)
-lea    -0x10(%ebp),%eax
+mov    %eax,-0x14(%ebp)
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <localtime>
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
 mov    0x4(%eax),%ecx
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    0x8(%eax),%edx
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    0x8(%ebp),%ebx
 add    $0x14,%ebx
 mov    %ecx,0xc(%esp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <_ZN10CScheduler26IsOnTimeSpecialWeekDayHourEiii>
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
+jmp    <T> <_ZN9CPowerWar25ProcessByMinuteStartEventEv+0x6a>
+mov    $0x0,%eax
 add    $0x24,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPowerWar::ProcessByMinuteStartEvent() */

undefined4 __thiscall CPowerWar::_ZN9CPowerWar25ProcessByMinuteStartEventEv(CPowerWar *this)

{
  undefined4 uVar1;
  time_t local_14;
  tm *local_10;
  
  if (this[4] == (CPowerWar)0x0) {
    local_14 = time((time_t *)0x0);
    local_10 = localtime(&local_14);
    uVar1 = CScheduler::_ZN10CScheduler26IsOnTimeSpecialWeekDayHourEiii
                      ((CScheduler *)(this + 0x14),local_10->tm_wday,local_10->tm_hour,
                       local_10->tm_min);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerWar.cpp](source/DNFServer/GameServer/Guild/PowerWar.cpp)（约第 169 行）：

```cpp
int CPowerWar::ProcessByMinuteStartEvent()
{
    if (*(char*)((char*)this + 4) == 0)
    {
        time_t now = time(0);
        tm* pt = localtime(&now);
        int r = ((CScheduler*)((char*)this + 0x14))->IsOnTimeSpecialWeekDayHour(
            pt->tm_wday, pt->tm_hour, pt->tm_min);
        return r;
    }
    return 0;
}
```
