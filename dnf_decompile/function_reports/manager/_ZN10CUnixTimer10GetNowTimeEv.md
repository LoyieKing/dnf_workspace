# _ZN10CUnixTimer10GetNowTimeEv

`CUnixTimer::GetNowTime()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | NEAR | `0x80627fa` | `0x37` | `0x8065d96` | `0x37` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,18 +1,18 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x38,%esp
 movl   $0x0,0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <gettimeofday>
 mov    -0x10(%ebp),%eax
 mov    %eax,-0x1c(%ebp)
 fildl  -0x1c(%ebp)
 mov    -0xc(%ebp),%eax
 mov    %eax,-0x1c(%ebp)
 fildl  -0x1c(%ebp)
-fldl   &data#04177fd3(.rodata)
+fldl   &data#d46b6b1f(.rodata)
 fdivrp %st,%st(1)
 faddp  %st,%st(1)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CUnixTimer::GetNowTime() */

longdouble CUnixTimer::_ZN10CUnixTimer10GetNowTimeEv(void)

{
  timeval local_14 [2];
  
  gettimeofday(local_14,(__timezone_ptr_t)0x0);
  return (longdouble)local_14[0].tv_usec / (longdouble)_DAT_08159b08 +
         (longdouble)local_14[0].tv_sec;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/SystemTimeHandler.cpp](source/DNFServer/GameServer/DBMW/SystemTimeHandler.cpp)（约第 42 行）：

```cpp
double CUnixTimer::GetNowTime()
{
    struct timeval tv;
    gettimeofday(&tv, 0);
    return tv.tv_sec + tv.tv_usec / 1000000.0;
}
```
