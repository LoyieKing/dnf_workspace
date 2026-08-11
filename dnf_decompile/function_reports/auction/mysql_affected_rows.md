# mysql_affected_rows

`mysql_affected_rows`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x80c4cc0` | `0x14` | `0x80b92c4` | `0xf` |

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
-mov    0x2bc(%eax),%edx
-mov    0x2b8(%eax),%eax
 ret
```
## 2. Ghidra 反编译 C

```c

undefined8 mysql_affected_rows(int param_1)

{
  return *(undefined8 *)(param_1 + 0x2b8);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/ServerLib/common_source/mysql_stubs.cpp](source/DNFServer/GameServer/ServerLab/ServerLib/common_source/mysql_stubs.cpp)（约第 91 行）：

```cpp
NSL_WEAK unsigned long long mysql_affected_rows(MYSQL* mysql)
{
    (void)mysql;
    return 0;
}
```
