# _ZN10CScheduler26IsOnTimeSpecialWeekDayHourEiii

`CScheduler::IsOnTimeSpecialWeekDayHour(int, int, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x805d640` | `0x46` | `0x80a410a` | `0x56` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,24 +1,33 @@
 push   %ebp
 mov    %esp,%ebp
+mov    0x8(%ebp),%eax
 mov    0xc(%ebp),%edx
+add    $0x2,%edx
+shl    $0x2,%edx
+add    %edx,%eax
+movzbl (%eax),%eax
+test   %al,%al
+je     <T> <_ZN10CScheduler26IsOnTimeSpecialWeekDayHourEiii+0x4f>
 mov    0x8(%ebp),%eax
-movzbl 0x8(%eax,%edx,4),%eax
-test   %al,%al
-je     <T> <_ZN10CScheduler26IsOnTimeSpecialWeekDayHourEiii+0x3f>
 mov    0xc(%ebp),%edx
+shl    $0x2,%edx
+add    $0x9,%edx
+add    %edx,%eax
+movzbl (%eax),%edx
+mov    0x10(%ebp),%eax
+cmp    %al,%dl
+jne    <T> <_ZN10CScheduler26IsOnTimeSpecialWeekDayHourEiii+0x4f>
 mov    0x8(%ebp),%eax
-movzbl 0x9(%eax,%edx,4),%eax
-movsbl %al,%eax
-cmp    0x10(%ebp),%eax
-jne    <T> <_ZN10CScheduler26IsOnTimeSpecialWeekDayHourEiii+0x3f>
 mov    0xc(%ebp),%edx
-mov    0x8(%ebp),%eax
-movzbl 0xb(%eax,%edx,4),%eax
-movsbl %al,%eax
-cmp    0x14(%ebp),%eax
-jne    <T> <_ZN10CScheduler26IsOnTimeSpecialWeekDayHourEiii+0x3f>
+shl    $0x2,%edx
+add    $0xb,%edx
+add    %edx,%eax
+movzbl (%eax),%edx
+mov    0x14(%ebp),%eax
+cmp    %al,%dl
+jne    <T> <_ZN10CScheduler26IsOnTimeSpecialWeekDayHourEiii+0x4f>
 mov    $0x1,%eax
-jmp    <T> <_ZN10CScheduler26IsOnTimeSpecialWeekDayHourEiii+0x44>
+jmp    <T> <_ZN10CScheduler26IsOnTimeSpecialWeekDayHourEiii+0x54>
 mov    $0x0,%eax
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CScheduler::IsOnTimeSpecialWeekDayHour(int, int, int) */

undefined4 __thiscall
CScheduler::_ZN10CScheduler26IsOnTimeSpecialWeekDayHourEiii
          (CScheduler *this,int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (((this[param_1 * 4 + 8] == (CScheduler)0x0) || ((char)this[param_1 * 4 + 9] != param_2)) ||
     ((char)this[param_1 * 4 + 0xb] != param_3)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/Scheduler.cpp](source/DNFServer/GameServer/Guild/Scheduler.cpp)（约第 230 行）：

```cpp
int CScheduler::IsOnTimeSpecialWeekDayHour(int day, int hour, int min)
{
    if (*(char*)((char*)this + day * 4 + 8) != 0 &&
        *(char*)((char*)this + day * 4 + 9) == (char)hour &&
        *(char*)((char*)this + day * 4 + 0xb) == (char)min)
    {
        return 1;
    }
    return 0;
}
```
