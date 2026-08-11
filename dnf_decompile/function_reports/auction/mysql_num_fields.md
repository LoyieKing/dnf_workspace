# mysql_num_fields

`mysql_num_fields`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x80c00c0` | `0xb` | `0x80b92ba` | `0xa` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,6 +1,5 @@
 push   %ebp
 mov    %esp,%ebp
-mov    0x8(%ebp),%eax
+mov    $0x0,%eax
 pop    %ebp
-mov    0x48(%eax),%eax
 ret
```
## 2. Ghidra 反编译 C

```c

undefined4 mysql_num_fields(int param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/ServerLib/common_source/mysql_stubs.cpp](source/DNFServer/GameServer/ServerLab/ServerLib/common_source/mysql_stubs.cpp)（约第 85 行）：

```cpp
NSL_WEAK unsigned int mysql_num_fields(MYSQL_RES* result)
{
    (void)result;
    return 0;
}
```
