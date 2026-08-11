# mysql_close

`mysql_close`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | DIFF | `0x80c40b0` | `0x14e` | `0x80b9257` | `0x5` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,71 +1,4 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
-push   %ebx
-sub    $0x20,%esp
-mov    0x8(%ebp),%esi
-call   <T> <__i686.get_pc_thunk.bx>
-add    $0x1be900,%ebx
-test   %esi,%esi
-je     <T> <mysql_close+0x147>
-mov    (%esi),%edx
-test   %edx,%edx
-je     <T> <mysql_close+0x89>
-mov    %esi,(%esp)
-call   <T> <free_old_query>
-mov    0x3b0(%esi),%eax
-movl   $0x0,0x380(%esi)
-movb   $0x0,0x385(%esi)
-movl   $0x0,0x1c(%esp)
-movl   $0x1,0x18(%esp)
-movl   $0x0,0x14(%esp)
-movl   $0x0,0x10(%esp)
-movl   $0x0,0xc(%esp)
-movl   $0x0,0x8(%esp)
-movl   $0x1,0x4(%esp)
-mov    %esi,(%esp)
-call   *0x4(%eax)
-mov    %esi,(%esp)
-call   <T> <end_server>
-mov    %esi,%eax
-call   <T> <mysql_close_free_options>
-mov    0x284(%esi),%eax
-mov    %eax,(%esp)
-call   <T> <my_no_flags_free>
-mov    0x274(%esi),%eax
-mov    %eax,(%esp)
-call   <T> <my_no_flags_free>
-mov    0x278(%esi),%eax
-mov    %eax,(%esp)
-call   <T> <my_no_flags_free>
-mov    0x28c(%esi),%eax
-mov    %eax,(%esp)
-call   <T> <my_no_flags_free>
-mov    0x3bc(%esi),%eax
-mov    %eax,(%esp)
-call   <T> <my_no_flags_free>
-lea    -0x11f4e4(%ebx),%eax
-movl   $0x0,0x3bc(%esi)
-movl   $0x0,0x28c(%esi)
-movl   $0x0,0x278(%esi)
-movl   $0x0,0x274(%esi)
-movl   $0x0,0x284(%esi)
-mov    %eax,0x4(%esp)
-lea    0x3ac(%esi),%eax
-mov    %eax,(%esp)
-call   <T> <mysql_detach_stmt_list>
-mov    0x3b4(%esi),%eax
-test   %eax,%eax
-je     <T> <mysql_close+0x136>
-mov    0x3b0(%esi),%eax
-mov    %esi,(%esp)
-call   *0x2c(%eax)
-cmpb   $0x0,0x384(%esi)
-je     <T> <mysql_close+0x147>
-mov    %esi,(%esp)
-call   <T> <my_no_flags_free>
-add    $0x20,%esp
-pop    %ebx
-pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void mysql_close(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      free_old_query(param_1);
      param_1[0xe0] = 0;
      *(undefined1 *)((int)param_1 + 0x385) = 0;
      (**(code **)(param_1[0xec] + 4))(param_1,1,0,0,0,0,1,0);
      end_server(param_1);
    }
    mysql_close_free_options();
    my_no_flags_free(param_1[0xa1]);
    my_no_flags_free(param_1[0x9d]);
    my_no_flags_free(param_1[0x9e]);
    my_no_flags_free(param_1[0xa3]);
    my_no_flags_free(param_1[0xef]);
    param_1[0xef] = 0;
    param_1[0xa3] = 0;
    param_1[0x9e] = 0;
    param_1[0x9d] = 0;
    param_1[0xa1] = 0;
    mysql_detach_stmt_list(param_1 + 0xeb,"mysql_close");
    if (param_1[0xed] != 0) {
      (**(code **)(param_1[0xec] + 0x2c))(param_1);
    }
    if ((char)param_1[0xe1] != '\0') {
      my_no_flags_free(param_1);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/ServerLib/common_source/mysql_stubs.cpp](source/DNFServer/GameServer/ServerLab/ServerLib/common_source/mysql_stubs.cpp)（约第 14 行）：

```cpp
NSL_WEAK void mysql_close(MYSQL* mysql)
{
    (void)mysql;
}
```
