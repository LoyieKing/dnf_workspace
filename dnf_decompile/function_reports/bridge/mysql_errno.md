# mysql_errno

`mysql_errno`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| bridge | DIFF | `0x8094380` | `0x2a` | `0x8056e89` | `0xa` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,15 +1,5 @@
 push   %ebp
 mov    %esp,%ebp
-mov    0x8(%ebp),%eax
-call   <T> <__i686.get_pc_thunk.cx>
-add    $0x1932e5,%ecx
-test   %eax,%eax
-je     <T> <mysql_errno+0x20>
-mov    0x58(%eax),%eax
+mov    $0x0,%eax
 pop    %ebp
 ret
-lea    0x0(%esi),%esi
-mov    -0x54(%ecx),%eax
-pop    %ebp
-mov    (%eax),%eax
-ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Function: __i686.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */

undefined4 mysql_errno(int param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x58);
  }
  return *(undefined4 *)PTR_mysql_server_last_errno_0822761c;
}
```

## 3. 我们的源码函数

定义于 [source/ChannelOld/DNFChannelBridge/MysqlClient.cpp](source/ChannelOld/DNFChannelBridge/MysqlClient.cpp)（约第 61 行）：

```cpp
unsigned int mysql_errno(MYSQL* mysql)
{
    return 0;
}
```
