# mysql_num_rows

`mysql_num_rows`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | DIFF | `0x80c00b0` | `0xd` | `0x80b92a7` | `0xf` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,7 +1,6 @@
 push   %ebp
 mov    %esp,%ebp
-mov    0x8(%ebp),%eax
+mov    $0x0,%eax
+mov    $0x0,%edx
 pop    %ebp
-mov    0x4(%eax),%edx
-mov    (%eax),%eax
 ret
```
## 2. Ghidra 反编译 C

```c

undefined8 mysql_num_rows(undefined8 *param_1)

{
  return *param_1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/ServerLib/common_source/mysql_stubs.cpp](source/DNFServer/GameServer/ServerLab/ServerLib/common_source/mysql_stubs.cpp)（约第 79 行）：

```cpp
NSL_WEAK unsigned long long mysql_num_rows(MYSQL_RES* result)
{
    (void)result;
    return 0;
}
```
