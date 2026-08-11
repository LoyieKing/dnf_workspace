# _Z24CheckDayScheduleTimeOveril

`CheckDayScheduleTimeOver(int, long)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x805d84a` | `0x28` | `0x80a42c7` | `0x32` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,14 +1,16 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
-lea    -0xc(%ebp),%eax
-mov    %eax,(%esp)
+movl   $0x0,(%esp)
 call   <T> <time>
+mov    %eax,-0x10(%ebp)
 mov    0x8(%ebp),%eax
-imul   $0xfffeae80,%eax,%edx
-mov    -0xc(%ebp),%eax
-lea    (%edx,%eax,1),%eax
-cmp    0xc(%ebp),%eax
-setg   %al
+imul   $0xfffeae80,%eax,%eax
+add    -0x10(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+mov    0xc(%ebp),%eax
+cmp    -0xc(%ebp),%eax
+setl   %al
+movzbl %al,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CheckDayScheduleTimeOver(int, long) */

undefined4 CheckDayScheduleTimeOver(int param_1,long param_2)

{
  int local_10 [3];
  
  time(local_10);
  local_10[0] = param_1 * -0x15180 + local_10[0];
  return CONCAT31((int3)((uint)local_10[0] >> 8),param_2 < local_10[0]);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/Scheduler.cpp](source/DNFServer/GameServer/Guild/Scheduler.cpp)（约第 287 行）：

```cpp
int CheckDayScheduleTimeOver(int hour, long t)
{
    time_t now = time(0);
    time_t target = (time_t)((long)now - (long)hour * 86400);
    return t < target;
}
```
