# mysql_real_escape_string

`mysql_real_escape_string`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | DIFF | `0x80c92a0` | `0x84` | `0x80b92d9` | `0xa` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,37 +1,5 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x28,%esp
-mov    0x8(%ebp),%eax
-mov    %ebx,-0x8(%ebp)
-mov    0xc(%ebp),%edx
-mov    %esi,-0x4(%ebp)
-mov    0x10(%ebp),%ecx
-call   <T> <__i686.get_pc_thunk.bx>
-add    $0x1b9706,%ebx
-mov    0x14(%ebp),%esi
-testb  $0x2,0x2ed(%eax)
-jne    <T> <mysql_real_escape_string+0x58>
-mov    %esi,0x10(%esp)
-mov    %ecx,0xc(%esp)
-movl   $0x0,0x8(%esp)
-mov    %edx,0x4(%esp)
-mov    0x290(%eax),%eax
-mov    %eax,(%esp)
-call   <T> <escape_string_for_mysql>
-mov    -0x8(%ebp),%ebx
-mov    -0x4(%ebp),%esi
-mov    %ebp,%esp
+mov    $0x0,%eax
 pop    %ebp
 ret
-mov    %esi,0x10(%esp)
-mov    %ecx,0xc(%esp)
-movl   $0x0,0x8(%esp)
-mov    %edx,0x4(%esp)
-mov    0x290(%eax),%eax
-mov    %eax,(%esp)
-call   <T> <escape_quotes_for_mysql>
-mov    -0x8(%ebp),%ebx
-mov    -0x4(%ebp),%esi
-mov    %ebp,%esp
-pop    %ebp
-ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void mysql_real_escape_string(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if ((*(byte *)(param_1 + 0x2ed) & 2) == 0) {
    escape_string_for_mysql(*(undefined4 *)(param_1 + 0x290),param_2,0,param_3,param_4);
    return;
  }
  escape_quotes_for_mysql(*(undefined4 *)(param_1 + 0x290),param_2,0,param_3,param_4);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/ServerLib/common_source/mysql_stubs.cpp](source/DNFServer/GameServer/ServerLab/ServerLib/common_source/mysql_stubs.cpp)（约第 103 行）：

```cpp
NSL_WEAK unsigned long mysql_real_escape_string(MYSQL* mysql, char* to, const char* from,
                                                 unsigned long length)
{
    (void)mysql;
    (void)to;
    (void)from;
    (void)length;
    return 0;
}
```
