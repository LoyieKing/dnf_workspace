# mysql_free_result

`mysql_free_result`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x80c1d70` | `0xd4` | `0x80b9292` | `0x5` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,58 +1,4 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x28,%esp
-mov    %esi,-0x8(%ebp)
-mov    0x8(%ebp),%esi
-mov    %ebx,-0xc(%ebp)
-call   <T> <__i686.get_pc_thunk.bx>
-add    $0x1c0c3c,%ebx
-mov    %edi,-0x4(%ebp)
-test   %esi,%esi
-je     <T> <mysql_free_result+0x78>
-mov    0x18(%esi),%edi
-test   %edi,%edi
-je     <T> <mysql_free_result+0x3c>
-lea    0x51(%esi),%eax
-cmp    %eax,0x3b8(%edi)
-je     <T> <mysql_free_result+0x88>
-cmpl   $0x2,0x380(%edi)
-je     <T> <mysql_free_result+0xa0>
-mov    0xc(%esi),%eax
-mov    %eax,(%esp)
-call   <T> <free_rows>
-mov    0x8(%esi),%edi
-test   %edi,%edi
-je     <T> <mysql_free_result+0x61>
-lea    0x28(%esi),%eax
-movl   $0x0,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <free_root>
-mov    0x20(%esi),%eax
-test   %eax,%eax
-je     <T> <mysql_free_result+0x70>
-mov    %eax,(%esp)
-call   <T> <my_no_flags_free>
-mov    %esi,(%esp)
-call   <T> <my_no_flags_free>
-mov    -0xc(%ebp),%ebx
-mov    -0x8(%ebp),%esi
-mov    -0x4(%ebp),%edi
-mov    %ebp,%esp
 pop    %ebp
 ret
-lea    0x0(%esi),%esi
-cmpl   $0x2,0x380(%edi)
-movl   $0x0,0x3b8(%edi)
-jne    <T> <mysql_free_result+0x3c>
-nop
-lea    0x0(%esi,%eiz,1),%esi
-mov    0x3b0(%edi),%eax
-movl   $0x0,0x4(%esp)
-mov    %edi,(%esp)
-call   *0x14(%eax)
-mov    0x3b8(%edi),%eax
-movl   $0x0,0x380(%edi)
-test   %eax,%eax
-je     <T> <mysql_free_result+0x3c>
-movb   $0x1,(%eax)
-jmp    <T> <mysql_free_result+0x3c>
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void mysql_free_result(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 0x3b8) == param_1 + 0x51) {
        iVar2 = *(int *)(iVar1 + 0x380);
        *(undefined4 *)(iVar1 + 0x3b8) = 0;
      }
      else {
        iVar2 = *(int *)(iVar1 + 0x380);
      }
      if (iVar2 == 2) {
        (**(code **)(*(int *)(iVar1 + 0x3b0) + 0x14))(iVar1,0);
        *(undefined4 *)(iVar1 + 0x380) = 0;
        if (*(undefined1 **)(iVar1 + 0x3b8) != (undefined1 *)0x0) {
          **(undefined1 **)(iVar1 + 0x3b8) = 1;
        }
      }
    }
    free_rows(*(undefined4 *)(param_1 + 0xc));
    if (*(int *)(param_1 + 8) != 0) {
      free_root(param_1 + 0x28,0);
    }
    if (*(int *)(param_1 + 0x20) != 0) {
      my_no_flags_free(*(int *)(param_1 + 0x20));
    }
    my_no_flags_free(param_1);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/ServerLib/common_source/mysql_stubs.cpp](source/DNFServer/GameServer/ServerLab/ServerLib/common_source/mysql_stubs.cpp)（约第 62 行）：

```cpp
NSL_WEAK void mysql_free_result(MYSQL_RES* result)
{
    (void)result;
}
```
