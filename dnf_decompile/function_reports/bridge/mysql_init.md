# mysql_init

`mysql_init`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| bridge | DIFF | `0x80953d0` | `0x108` | `0x8056e21` | `0x28` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,66 +1,12 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x28,%esp
-mov    %ebx,-0xc(%ebp)
-call   <T> <__i686.get_pc_thunk.bx>
-add    $0x192292,%ebx
-mov    %esi,-0x8(%ebp)
-mov    0x8(%ebp),%esi
-mov    %edi,-0x4(%ebp)
-movl   $0x0,0x8(%esp)
-movl   $0x0,0x4(%esp)
-movl   $0x0,(%esp)
-call   <T> <mysql_server_init>
-test   %eax,%eax
-jne    <T> <mysql_init+0xa8>
-test   %esi,%esi
-je     <T> <mysql_init+0xc0>
-mov    $0xf1,%ecx
-mov    %esi,%edi
-rep stos %eax,%es:(%edi)
-mov    -0x4ec(%ebx),%eax
-movl   $0x0,0x2f8(%esi)
-mov    (%eax),%eax
-mov    %eax,0x290(%esi)
-mov    -0x4a8(%ebx),%eax
-mov    (%eax),%eax
-mov    %eax,0x4(%esp)
-lea    0x25f(%esi),%eax
-mov    %eax,(%esp)
-call   <T> <strcpy>
-movl   $0x10,0x35c(%esi)
-movb   $0x1,0x365(%esi)
-movb   $0x0,0x385(%esi)
-mov    %esi,%eax
-mov    -0xc(%ebp),%ebx
-mov    -0x8(%ebp),%esi
-mov    -0x4(%ebp),%edi
-mov    %ebp,%esp
-pop    %ebp
+sub    $0x18,%esp
+cmpl   $0x0,0x8(%ebp)
+jne    <T> <mysql_init+0x23>
+movl   $0x4,0x4(%esp)
+movl   $0x1,(%esp)
+call   <T> <calloc>
+mov    %eax,0x8(%ebp)
+mov    0x8(%ebp),%eax
+leave
 ret
-nop
-lea    0x0(%esi,%eiz,1),%esi
-xor    %esi,%esi
-mov    -0xc(%ebp),%ebx
-mov    %esi,%eax
-mov    -0x4(%ebp),%edi
-mov    -0x8(%ebp),%esi
-mov    %ebp,%esp
-pop    %ebp
-ret
-lea    0x0(%esi,%eiz,1),%esi
-movl   $0x30,0x4(%esp)
-movl   $0x3c4,(%esp)
-call   <T> <my_malloc>
-test   %eax,%eax
-mov    %eax,%esi
-je     <T> <mysql_init+0xe6>
-movb   $0x1,0x384(%eax)
-jmp    <T> <mysql_init+0x4a>
-mov    -0x474(%ebx),%eax
-mov    (%eax),%eax
-movl   $0x7d8,0x4(%esp)
-movl   $0x0,(%esp)
-mov    %eax,0x8(%esp)
-call   <T> <set_mysql_error>
-jmp    <T> <mysql_init+0x94>
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 * mysql_init(undefined4 *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  byte bVar4;
  
  bVar4 = 0;
  iVar2 = mysql_server_init(0,0,0);
  if (iVar2 != 0) {
    return (undefined4 *)0x0;
  }
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)my_malloc(0x3c4,0x30);
    if (param_1 == (undefined4 *)0x0) {
      set_mysql_error(0,0x7d8,*(undefined4 *)PTR_unknown_sqlstate_082271fc);
      return (undefined4 *)0x0;
    }
    *(undefined1 *)(param_1 + 0xe1) = 1;
  }
  else {
    puVar3 = param_1;
    for (iVar2 = 0xf1; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
  }
  puVar1 = PTR_default_client_charset_info_08227184;
  param_1[0xbe] = 0;
  param_1[0xa4] = *(undefined4 *)puVar1;
  strcpy((char *)((int)param_1 + 0x25f),*(char **)PTR_not_error_sqlstate_082271c8);
  param_1[0xd7] = 0x10;
  *(undefined1 *)((int)param_1 + 0x365) = 1;
  *(undefined1 *)((int)param_1 + 0x385) = 0;
  return param_1;
}
```

## 3. 我们的源码函数

定义于 [source/ChannelOld/DNFChannelBridge/MysqlClient.cpp](source/ChannelOld/DNFChannelBridge/MysqlClient.cpp)（约第 22 行）：

```cpp
MYSQL* mysql_init(MYSQL* mysql)
{
    if (mysql == NULL)
    {
        mysql = (MYSQL*)calloc(1, sizeof(MYSQL));
    }
    return mysql;
}
```
