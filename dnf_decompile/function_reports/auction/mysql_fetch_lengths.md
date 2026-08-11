# mysql_fetch_lengths

`mysql_fetch_lengths`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x80c0070` | `0x3a` | `0x80b92a1` | `0xa` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,24 +1,5 @@
 push   %ebp
-xor    %eax,%eax
 mov    %esp,%ebp
-push   %esi
-sub    $0x14,%esp
-mov    0x8(%ebp),%esi
-mov    0x24(%esi),%edx
-test   %edx,%edx
-je     <T> <mysql_fetch_lengths+0x34>
-mov    0xc(%esi),%eax
-test   %eax,%eax
-je     <T> <mysql_fetch_lengths+0x31>
-mov    0x48(%esi),%ecx
-mov    0x1c(%esi),%eax
-mov    %edx,0x4(%esp)
-mov    %ecx,0x8(%esp)
-mov    0x14(%esi),%edx
-mov    %edx,(%esp)
-call   *0x10(%eax)
-mov    0x14(%esi),%eax
-add    $0x14,%esp
-pop    %esi
+mov    $0x0,%eax
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

undefined4 mysql_fetch_lengths(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    if (*(int *)(param_1 + 0xc) != 0) {
      (**(code **)(*(int *)(param_1 + 0x1c) + 0x10))
                (*(undefined4 *)(param_1 + 0x14),*(int *)(param_1 + 0x24),
                 *(undefined4 *)(param_1 + 0x48));
    }
    uVar1 = *(undefined4 *)(param_1 + 0x14);
  }
  return uVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/ServerLib/common_source/mysql_stubs.cpp](source/DNFServer/GameServer/ServerLab/ServerLib/common_source/mysql_stubs.cpp)（约第 73 行）：

```cpp
NSL_WEAK unsigned long* mysql_fetch_lengths(MYSQL_RES* result)
{
    (void)result;
    return 0;
}
```
