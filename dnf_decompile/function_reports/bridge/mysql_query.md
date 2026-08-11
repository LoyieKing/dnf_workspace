# mysql_query

`mysql_query`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| bridge | DIFF | `0x809da20` | `0x3f` | `0x8056e53` | `0xa` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,20 +1,5 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x18,%esp
-mov    %ebx,-0x8(%ebp)
-call   <T> <__i686.get_pc_thunk.bx>
-add    $0x189c42,%ebx
-mov    %esi,-0x4(%ebp)
-mov    0xc(%ebp),%esi
-mov    %esi,(%esp)
-call   <T> <strlen>
-mov    %esi,0x4(%esp)
-mov    %eax,0x8(%esp)
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <mysql_real_query>
-mov    -0x8(%ebp),%ebx
-mov    -0x4(%ebp),%esi
-mov    %ebp,%esp
+mov    $0x1,%eax
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void mysql_query(undefined4 param_1,char *param_2)

{
  size_t sVar1;
  
  sVar1 = strlen(param_2);
  mysql_real_query(param_1,param_2,sVar1);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/ChannelOld/DNFChannelBridge/MysqlClient.cpp](source/ChannelOld/DNFChannelBridge/MysqlClient.cpp)（约第 37 行）：

```cpp
int mysql_query(MYSQL* mysql, const char* q)
{
    return 1;
}
```
