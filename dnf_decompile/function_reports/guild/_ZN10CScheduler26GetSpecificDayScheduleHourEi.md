# _ZN10CScheduler26GetSpecificDayScheduleHourEi

`CScheduler::GetSpecificDayScheduleHour(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x805d388` | `0x35` | `0x80a39d8` | `0x41` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,21 +1,27 @@
 push   %ebp
 mov    %esp,%ebp
+mov    0x8(%ebp),%eax
 mov    0xc(%ebp),%edx
+shl    $0x2,%edx
+add    $0xa,%edx
+add    %edx,%eax
+movzbl (%eax),%eax
+movsbl %al,%edx
 mov    0x8(%ebp),%eax
-movzbl 0xa(%eax,%edx,4),%eax
-movsbl %al,%ecx
-mov    0xc(%ebp),%edx
-mov    0x8(%ebp),%eax
-movzbl 0x9(%eax,%edx,4),%eax
+mov    0xc(%ebp),%ecx
+shl    $0x2,%ecx
+add    $0x9,%ecx
+add    %ecx,%eax
+movzbl (%eax),%eax
 movsbl %al,%eax
-mov    %ecx,%edx
-sub    %eax,%edx
-mov    %edx,%eax
+mov    %edx,%ecx
+sub    %eax,%ecx
+mov    %ecx,%eax
 shl    $0x2,%eax
 mov    %eax,%edx
 shl    $0x4,%edx
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CScheduler::GetSpecificDayScheduleHour(int) */

int __thiscall
CScheduler::_ZN10CScheduler26GetSpecificDayScheduleHourEi(CScheduler *this,int param_1)

{
  return ((int)(char)this[param_1 * 4 + 10] - (int)(char)this[param_1 * 4 + 9]) * 0x3c;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/Scheduler.cpp](source/DNFServer/GameServer/Guild/Scheduler.cpp)（约第 145 行）：

```cpp
int CScheduler::GetSpecificDayScheduleHour(int day)
{
    return ((int)(char)*(char*)((char*)this + day * 4 + 10) -
            (int)(char)*(char*)((char*)this + day * 4 + 9)) * 0x3c;
}
```
