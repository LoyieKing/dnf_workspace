# _ZN10CScheduler21SetSpecialWeekDayHourEii

`CScheduler::SetSpecialWeekDayHour(int, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x805d61e` | `0x22` | `0x80a3ee8` | `0x2a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,14 +1,17 @@
 push   %ebp
 mov    %esp,%ebp
+mov    0x8(%ebp),%eax
+mov    0xc(%ebp),%edx
+add    $0x2,%edx
+shl    $0x2,%edx
+add    %edx,%eax
+movb   $0x1,(%eax)
+mov    0x8(%ebp),%eax
+mov    0xc(%ebp),%edx
+shl    $0x2,%edx
+add    $0x9,%edx
+lea    (%eax,%edx,1),%edx
 mov    0x10(%ebp),%eax
-mov    %eax,%edx
-mov    0x8(%ebp),%eax
-mov    %dl,0x2(%eax)
-mov    0xc(%ebp),%eax
-mov    %eax,%edx
-mov    0x8(%ebp),%eax
-mov    %dl,0x6(%eax)
-mov    0x8(%ebp),%eax
-movb   $0x0,0x1(%eax)
+mov    %al,(%edx)
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CScheduler::SetSpecialWeekDayHour(int, int) */

void __thiscall
CScheduler::_ZN10CScheduler21SetSpecialWeekDayHourEii(CScheduler *this,int param_1,int param_2)

{
  this[2] = SUB41(param_2,0);
  this[6] = SUB41(param_1,0);
  this[1] = (CScheduler)0x0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/Scheduler.cpp](source/DNFServer/GameServer/Guild/Scheduler.cpp)（约第 164 行）：

```cpp
void CScheduler::SetSpecialWeekDayHour(int day, int hour)
{
    *(char*)((char*)this + day * 4 + 8) = 1;
    *(char*)((char*)this + day * 4 + 9) = (char)hour;
}
```
