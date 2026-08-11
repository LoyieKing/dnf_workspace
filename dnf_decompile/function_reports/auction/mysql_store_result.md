# mysql_store_result

`mysql_store_result`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x80c0610` | `0x1b2` | `0x80b9288` | `0xa` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,106 +1,5 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
-xor    %edi,%edi
-push   %esi
-push   %ebx
-sub    $0x1c,%esp
-mov    0x8(%ebp),%esi
-call   <T> <__i686.get_pc_thunk.bx>
-add    $0x1c239d,%ebx
-mov    0x294(%esi),%eax
-test   %eax,%eax
-je     <T> <mysql_store_result+0x155>
-cmpl   $0x1,0x380(%esi)
-jne    <T> <mysql_store_result+0x160>
-movl   $0x0,0x380(%esi)
-movl   $0x30,0x4(%esp)
-mov    0x2e8(%esi),%eax
-lea    0x58(,%eax,4),%eax
-mov    %eax,(%esp)
-call   <T> <my_malloc>
-test   %eax,%eax
-mov    %eax,%edi
-je     <T> <mysql_store_result+0x188>
-mov    0x3b0(%esi),%eax
-movb   $0x1,0x50(%edi)
-mov    0x2e8(%esi),%edx
-mov    %eax,0x1c(%edi)
-lea    0x58(%edi),%eax
-mov    %eax,0x14(%edi)
-mov    0x3b0(%esi),%eax
-mov    %edx,0x8(%esp)
-mov    0x294(%esi),%edx
-mov    %esi,(%esp)
-mov    %edx,0x4(%esp)
-call   *0x8(%eax)
-test   %eax,%eax
-mov    %eax,0xc(%edi)
-je     <T> <mysql_store_result+0x1a6>
-mov    0x28(%eax),%edx
-mov    0x2c(%eax),%ecx
-mov    (%eax),%eax
-mov    %edx,(%edi)
-mov    %ecx,0x4(%edi)
-mov    %eax,0x10(%edi)
-mov    0x294(%esi),%eax
-mov    %edx,0x2b8(%esi)
-mov    %ecx,0x2bc(%esi)
-mov    %eax,0x8(%edi)
-mov    0x298(%esi),%eax
-movl   $0x0,0x294(%esi)
-mov    %eax,0x28(%edi)
-mov    0x29c(%esi),%eax
-mov    %eax,0x2c(%edi)
-mov    0x2a0(%esi),%eax
-mov    %eax,0x30(%edi)
-mov    0x2a4(%esi),%eax
-mov    %eax,0x34(%edi)
-mov    0x2a8(%esi),%eax
-mov    %eax,0x38(%edi)
-mov    0x2ac(%esi),%eax
-mov    %eax,0x3c(%edi)
-mov    0x2b0(%esi),%eax
-mov    %eax,0x40(%edi)
-mov    0x2b4(%esi),%eax
-mov    %eax,0x44(%edi)
-mov    0x2e8(%esi),%eax
-movl   $0x0,0x2a0(%esi)
-movl   $0x0,0x29c(%esi)
-movl   $0x0,0x298(%esi)
-mov    %eax,0x48(%edi)
-movl   $0x0,0x2a4(%esi)
-movl   $0x0,0x3b8(%esi)
-add    $0x1c,%esp
-mov    %edi,%eax
-pop    %ebx
-pop    %esi
-pop    %edi
+mov    $0x0,%eax
 pop    %ebp
 ret
-nop
-mov    -0x2a4(%ebx),%eax
-mov    (%eax),%eax
-mov    %esi,(%esp)
-movl   $0x7de,0x4(%esp)
-mov    %eax,0x8(%esp)
-call   <T> <set_mysql_error>
-add    $0x1c,%esp
-mov    %edi,%eax
-pop    %ebx
-pop    %esi
-pop    %edi
-pop    %ebp
-ret
-xchg   %ax,%ax
-mov    -0x2a4(%ebx),%eax
-mov    (%eax),%eax
-movl   $0x7d8,0x4(%esp)
-mov    %esi,(%esp)
-mov    %eax,0x8(%esp)
-call   <T> <set_mysql_error>
-jmp    <T> <mysql_store_result+0x155>
-mov    %edi,(%esp)
-xor    %edi,%edi
-call   <T> <my_no_flags_free>
-jmp    <T> <mysql_store_result+0x155>
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 * mysql_store_result(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = (undefined4 *)0x0;
  if (*(int *)(param_1 + 0x294) != 0) {
    if (*(int *)(param_1 + 0x380) != 1) {
      set_mysql_error(param_1,0x7de,*(undefined4 *)PTR_unknown_sqlstate_0828271c);
      return (undefined4 *)0x0;
    }
    *(undefined4 *)(param_1 + 0x380) = 0;
    puVar4 = (undefined4 *)my_malloc(*(int *)(param_1 + 0x2e8) * 4 + 0x58,0x30);
    if (puVar4 == (undefined4 *)0x0) {
      set_mysql_error(param_1,0x7d8,*(undefined4 *)PTR_unknown_sqlstate_0828271c);
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x3b0);
      *(undefined1 *)(puVar4 + 0x14) = 1;
      uVar2 = *(undefined4 *)(param_1 + 0x2e8);
      puVar4[7] = uVar1;
      puVar4[5] = puVar4 + 0x16;
      puVar5 = (undefined4 *)
               (**(code **)(*(int *)(param_1 + 0x3b0) + 8))
                         (param_1,*(undefined4 *)(param_1 + 0x294),uVar2);
      puVar4[3] = puVar5;
      if (puVar5 == (undefined4 *)0x0) {
        my_no_flags_free(puVar4);
        puVar4 = (undefined4 *)0x0;
      }
      else {
        uVar1 = puVar5[10];
        uVar2 = puVar5[0xb];
        uVar3 = *puVar5;
        *puVar4 = uVar1;
        puVar4[1] = uVar2;
        puVar4[4] = uVar3;
        *(undefined4 *)(param_1 + 0x2b8) = uVar1;
        *(undefined4 *)(param_1 + 700) = uVar2;
        puVar4[2] = *(undefined4 *)(param_1 + 0x294);
        *(undefined4 *)(param_1 + 0x294) = 0;
        puVar4[10] = *(undefined4 *)(param_1 + 0x298);
        puVar4[0xb] = *(undefined4 *)(param_1 + 0x29c);
        puVar4[0xc] = *(undefined4 *)(param_1 + 0x2a0);
        puVar4[0xd] = *(undefined4 *)(param_1 + 0x2a4);
        puVar4[0xe] = *(undefined4 *)(param_1 + 0x2a8);
        puVar4[0xf] = *(undefined4 *)(param_1 + 0x2ac);
        puVar4[0x10] = *(undefined4 *)(param_1 + 0x2b0);
        puVar4[0x11] = *(undefined4 *)(param_1 + 0x2b4);
        *(undefined4 *)(param_1 + 0x2a0) = 0;
        *(undefined4 *)(param_1 + 0x29c) = 0;
        *(undefined4 *)(param_1 + 0x298) = 0;
        puVar4[0x12] = *(undefined4 *)(param_1 + 0x2e8);
        *(undefined4 *)(param_1 + 0x2a4) = 0;
        *(undefined4 *)(param_1 + 0x3b8) = 0;
      }
    }
  }
  return puVar4;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/ServerLib/common_source/mysql_stubs.cpp](source/DNFServer/GameServer/ServerLab/ServerLib/common_source/mysql_stubs.cpp)（约第 56 行）：

```cpp
NSL_WEAK MYSQL_RES* mysql_store_result(MYSQL* mysql)
{
    (void)mysql;
    return 0;
}
```
