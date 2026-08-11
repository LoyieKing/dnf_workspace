# _Z15GetPrevSchedule2tmiii

`GetPrevSchedule(tm, int, int, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a860c` | `0x4a` | `0x809c5ca` | `0x48` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,24 +1,23 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x20(%ebp),%eax
 sub    0x34(%ebp),%eax
 mov    %eax,-0x10(%ebp)
 cmpl   $0x0,-0x10(%ebp)
 jns    <T> <_Z15GetPrevSchedule2tmiii+0x19>
 addl   $0x7,-0x10(%ebp)
 mov    0x38(%ebp),%eax
 mov    %eax,0x10(%ebp)
 mov    0x3c(%ebp),%eax
 mov    %eax,0xc(%ebp)
 movl   $0x0,0x8(%ebp)
 lea    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <mktime>
-mov    -0x10(%ebp),%edx
-imul   $0xfffeae80,%edx,%edx
-add    %edx,%eax
 mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
+imul   $0xfffeae80,%eax,%eax
+add    -0xc(%ebp),%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* GetPrevSchedule(tm, int, int, int) */

int GetPrevSchedule(tm param_1,int param_2,int param_3,int param_4)

{
  time_t tVar1;
  int local_14;
  
  local_14 = param_1.tm_wday - param_2;
  if (local_14 < 0) {
    local_14 = local_14 + 7;
  }
  param_1.tm_hour = param_3;
  param_1.tm_min = param_4;
  param_1.tm_sec = 0;
  tVar1 = mktime(&param_1);
  return tVar1 + local_14 * -0x15180;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/Scheduler.cpp](source/DNFServer/GameServer/Monitor/Scheduler.cpp)（约第 54 行）：

```cpp
int GetPrevSchedule(tm t, int wday, int hour, int min)
{
    int delta = t.tm_wday - wday;
    if (delta < 0)
    {
        delta = delta + 7;
    }
    t.tm_hour = hour;
    t.tm_min = min;
    t.tm_sec = 0;
    time_t tt = mktime(&t);
    return (int)tt + delta * -0x15180;
}
```
