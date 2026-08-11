# _ZN9CPowerWar8setEventEv

`CPowerWar::setEvent()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a6dee` | `0x4a` | `0x809d19a` | `0x53` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,23 +1,28 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x28,%esp
+push   %ebx
+sub    $0x24,%esp
 mov    0x8(%ebp),%eax
-movb   $0x1,0x4(%eax)
+add    $0x4,%eax
+movb   $0x1,(%eax)
 movl   $0x0,(%esp)
 call   <T> <time>
 mov    %eax,-0x10(%ebp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <localtime>
 mov    %eax,-0xc(%ebp)
+mov    0x8(%ebp),%eax
+lea    0x8(%eax),%ebx
 mov    -0xc(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    0x8(%ebp),%edx
 add    $0x14,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN10CScheduler26GetSpecificDayScheduleHourEi>
-mov    0x8(%ebp),%edx
-mov    %eax,0x8(%edx)
-leave
+mov    %eax,(%ebx)
+add    $0x24,%esp
+pop    %ebx
+pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPowerWar::setEvent() */

void __thiscall CPowerWar::_ZN9CPowerWar8setEventEv(CPowerWar *this)

{
  undefined4 uVar1;
  time_t local_14;
  tm *local_10;
  
  this[4] = (CPowerWar)0x1;
  local_14 = time((time_t *)0x0);
  local_10 = localtime(&local_14);
  uVar1 = CScheduler::_ZN10CScheduler26GetSpecificDayScheduleHourEi
                    ((CScheduler *)(this + 0x14),local_10->tm_wday);
  *(undefined4 *)(this + 8) = uVar1;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerWar.cpp](source/DNFServer/GameServer/Guild/PowerWar.cpp)（约第 128 行）：

```cpp
void CPowerWar::setEvent()
{
    *(unsigned char*)((char*)this + 4) = 1;
    time_t now = time(0);
    tm* t = localtime(&now);
    *(int*)((char*)this + 8) =
        ((CScheduler*)((char*)this + 0x14))->GetSpecificDayScheduleHour(t->tm_wday);
}
```
