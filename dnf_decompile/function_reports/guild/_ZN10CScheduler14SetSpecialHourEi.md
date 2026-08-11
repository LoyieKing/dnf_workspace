# _ZN10CScheduler14SetSpecialHourEi

`CScheduler::SetSpecialHour(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x805d2e0` | `0x17` | `0x80a391c` | `0x19` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,10 +1,11 @@
 push   %ebp
 mov    %esp,%ebp
+mov    0x8(%ebp),%eax
+lea    0x2(%eax),%edx
 mov    0xc(%ebp),%eax
-mov    %eax,%edx
+mov    %al,(%edx)
 mov    0x8(%ebp),%eax
-mov    %dl,0x2(%eax)
-mov    0x8(%ebp),%eax
-movb   $0x0,0x1(%eax)
+add    $0x1,%eax
+movb   $0x0,(%eax)
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CScheduler::SetSpecialHour(int) */

void __thiscall CScheduler::_ZN10CScheduler14SetSpecialHourEi(CScheduler *this,int param_1)

{
  this[2] = SUB41(param_1,0);
  this[1] = (CScheduler)0x0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/Scheduler.cpp](source/DNFServer/GameServer/Guild/Scheduler.cpp)（约第 119 行）：

```cpp
void CScheduler::SetSpecialHour(int hour)
{
    *(char*)((char*)this + 2) = (char)hour;
    *(char*)((char*)this + 1) = 0;
}
```
