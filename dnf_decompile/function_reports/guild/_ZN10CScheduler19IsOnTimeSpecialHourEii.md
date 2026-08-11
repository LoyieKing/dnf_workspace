# _ZN10CScheduler19IsOnTimeSpecialHourEii

`CScheduler::IsOnTimeSpecialHour(int, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x805d2f8` | `0x2f` | `0x80a3936` | `0x36` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,17 +1,20 @@
 push   %ebp
 mov    %esp,%ebp
 mov    0x8(%ebp),%eax
-movzbl 0x2(%eax),%eax
+add    $0x2,%eax
+movzbl (%eax),%eax
 movsbl %al,%eax
 cmp    0xc(%ebp),%eax
-jne    <T> <_ZN10CScheduler19IsOnTimeSpecialHourEii+0x28>
+jne    <T> <_ZN10CScheduler19IsOnTimeSpecialHourEii+0x2c>
 mov    0x8(%ebp),%eax
-movzbl 0x1(%eax),%eax
+add    $0x1,%eax
+movzbl (%eax),%eax
 movsbl %al,%eax
 cmp    0x10(%ebp),%eax
-jne    <T> <_ZN10CScheduler19IsOnTimeSpecialHourEii+0x28>
+jne    <T> <_ZN10CScheduler19IsOnTimeSpecialHourEii+0x2c>
 mov    $0x1,%eax
-jmp    <T> <_ZN10CScheduler19IsOnTimeSpecialHourEii+0x2d>
+jmp    <T> <_ZN10CScheduler19IsOnTimeSpecialHourEii+0x31>
 mov    $0x0,%eax
+movzbl %al,%eax
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CScheduler::IsOnTimeSpecialHour(int, int) */

undefined4 __thiscall
CScheduler::_ZN10CScheduler19IsOnTimeSpecialHourEii(CScheduler *this,int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (((char)this[2] == param_1) && ((char)this[1] == param_2)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/Scheduler.cpp](source/DNFServer/GameServer/Guild/Scheduler.cpp)（约第 125 行）：

```cpp
int CScheduler::IsOnTimeSpecialHour(int hour, int min)
{
    return (char)*(char*)((char*)this + 2) == hour &&
           (char)*(char*)((char*)this + 1) == min;
}
```
