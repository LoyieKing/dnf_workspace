# mysql_options

`mysql_options`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | DIFF | `0x80c0a10` | `0x261` | `0x80b9270` | `0xa` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,153 +1,5 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x28,%esp
-mov    0xc(%ebp),%eax
-mov    %ebx,-0xc(%ebp)
-call   <T> <__i686.get_pc_thunk.bx>
-add    $0x1c1f9f,%ebx
-mov    %esi,-0x8(%ebp)
-mov    0x8(%ebp),%esi
-cmp    $0x15,%eax
-mov    %edi,-0x4(%ebp)
-mov    0x10(%ebp),%edi
-jbe    <T> <.L95+0x18>
-mov    $0x1,%eax
-lea    0x0(%esi),%esi
-mov    -0xc(%ebp),%ebx
-mov    -0x8(%ebp),%esi
-mov    -0x4(%ebp),%edi
-mov    %ebp,%esp
+mov    $0x0,%eax
 pop    %ebp
 ret
-lea    0x0(%esi),%esi
-mov    -0x11f358(%ebx,%eax,4),%edx
-add    %ebx,%edx
-jmp    *%edx
-nop
-lea    0x0(%esi,%eiz,1),%esi
-cmpb   $0x0,(%edi)
-jne    <T> <.L105+0x10>
-andl   $0xbfffffff,0x30c(%esi)
-xor    %eax,%eax
-jmp    <T> <.L95+0x8>
-nop
-mov    (%edi),%eax
-mov    %eax,0x2fc(%esi)
-xor    %eax,%eax
-jmp    <T> <.L95+0x8>
-lea    0x0(%esi,%eiz,1),%esi
-mov    (%edi),%eax
-mov    %eax,0x300(%esi)
-xor    %eax,%eax
-jmp    <T> <.L95+0x8>
-lea    0x0(%esi,%eiz,1),%esi
-mov    %eax,0x35c(%esi)
-xor    %eax,%eax
-jmp    <T> <.L95+0x8>
-lea    0x0(%esi),%esi
-movl   $0x10,0x4(%esp)
-mov    %edi,(%esp)
-call   <T> <my_strdup>
-mov    %eax,0x360(%esi)
-xor    %eax,%eax
-jmp    <T> <.L95+0x8>
-lea    0x0(%esi),%esi
-movzbl (%edi),%eax
-mov    %al,0x364(%esi)
-xor    %eax,%eax
-jmp    <T> <.L95+0x8>
-cmpb   $0x0,(%edi)
-setne  0x365(%esi)
-xor    %eax,%eax
-jmp    <T> <.L95+0x8>
-lea    0x0(%esi,%eiz,1),%esi
-movzbl (%edi),%eax
-mov    %al,0x385(%esi)
-xor    %eax,%eax
-jmp    <T> <.L95+0x8>
-mov    (%edi),%eax
-mov    %eax,0x2f8(%esi)
-xor    %eax,%eax
-jmp    <T> <.L95+0x8>
-nop
-movb   $0x1,0x355(%esi)
-xor    %eax,%eax
-orl    $0x20,0x30c(%esi)
-jmp    <T> <.L95+0x8>
-lea    0x0(%esi),%esi
-movl   $0x3,0x308(%esi)
-xor    %eax,%eax
-jmp    <T> <.L95+0x8>
-lea    0x0(%esi,%eiz,1),%esi
-lea    0x2f8(%esi),%eax
-mov    %edi,%edx
-call   <T> <add_init_command>
-xor    %eax,%eax
-jmp    <T> <.L95+0x8>
-lea    0x0(%esi,%eiz,1),%esi
-mov    0x328(%esi),%eax
-mov    %eax,(%esp)
-call   <T> <my_no_flags_free>
-movl   $0x10,0x4(%esp)
-mov    %edi,(%esp)
-call   <T> <my_strdup>
-mov    %eax,0x328(%esi)
-xor    %eax,%eax
-jmp    <T> <.L95+0x8>
-nop
-lea    0x0(%esi,%eiz,1),%esi
-mov    0x32c(%esi),%eax
-mov    %eax,(%esp)
-call   <T> <my_no_flags_free>
-movl   $0x10,0x4(%esp)
-mov    %edi,(%esp)
-call   <T> <my_strdup>
-mov    %eax,0x32c(%esi)
-xor    %eax,%eax
-jmp    <T> <.L95+0x8>
-nop
-lea    0x0(%esi,%eiz,1),%esi
-mov    0x330(%esi),%eax
-mov    %eax,(%esp)
-call   <T> <my_no_flags_free>
-movl   $0x10,0x4(%esp)
-mov    %edi,(%esp)
-call   <T> <my_strdup>
-mov    %eax,0x330(%esi)
-xor    %eax,%eax
-jmp    <T> <.L95+0x8>
-nop
-lea    0x0(%esi,%eiz,1),%esi
-mov    0x334(%esi),%eax
-mov    %eax,(%esp)
-call   <T> <my_no_flags_free>
-movl   $0x10,0x4(%esp)
-mov    %edi,(%esp)
-call   <T> <my_strdup>
-mov    %eax,0x334(%esi)
-xor    %eax,%eax
-jmp    <T> <.L95+0x8>
-nop
-lea    0x0(%esi,%eiz,1),%esi
-test   %edi,%edi
-je     <T> <.L105+0x28>
-mov    (%edi),%edi
-test   %edi,%edi
-jne    <T> <.L105+0x28>
-andl   $0xffffff7f,0x30c(%esi)
-xor    %eax,%eax
-jmp    <T> <.L95+0x8>
-nop
-lea    0x0(%esi,%eiz,1),%esi
-mov    (%edi),%eax
-mov    %eax,0x308(%esi)
-xor    %eax,%eax
-jmp    <T> <.L95+0x8>
-nop
-orl    $0x40000000,0x30c(%esi)
-xor    %eax,%eax
-jmp    <T> <.L95+0x8>
-lea    0x0(%esi,%eiz,1),%esi
-orl    $0x80,0x30c(%esi)
-xor    %eax,%eax
-jmp    <T> <.L95+0x8>
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 mysql_options(int param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  
  switch(param_2) {
  case 0:
    *(int *)(param_1 + 0x2f8) = *param_3;
    uVar1 = 0;
    break;
  case 1:
    *(undefined1 *)(param_1 + 0x355) = 1;
    uVar1 = 0;
    *(uint *)(param_1 + 0x30c) = *(uint *)(param_1 + 0x30c) | 0x20;
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x308) = 3;
    uVar1 = 0;
    break;
  case 3:
    add_init_command();
    uVar1 = 0;
    break;
  case 4:
    my_no_flags_free(*(undefined4 *)(param_1 + 0x328));
    uVar1 = my_strdup(param_3,0x10);
    *(undefined4 *)(param_1 + 0x328) = uVar1;
    uVar1 = 0;
    break;
  case 5:
    my_no_flags_free(*(undefined4 *)(param_1 + 0x32c));
    uVar1 = my_strdup(param_3,0x10);
    *(undefined4 *)(param_1 + 0x32c) = uVar1;
    uVar1 = 0;
    break;
  case 6:
    my_no_flags_free(*(undefined4 *)(param_1 + 0x330));
    uVar1 = my_strdup(param_3,0x10);
    *(undefined4 *)(param_1 + 0x330) = uVar1;
    uVar1 = 0;
    break;
  case 7:
    my_no_flags_free(*(undefined4 *)(param_1 + 0x334));
    uVar1 = my_strdup(param_3,0x10);
    *(undefined4 *)(param_1 + 0x334) = uVar1;
    uVar1 = 0;
    break;
  case 8:
    if ((param_3 == (int *)0x0) || (*param_3 != 0)) {
      *(uint *)(param_1 + 0x30c) = *(uint *)(param_1 + 0x30c) | 0x80;
      uVar1 = 0;
    }
    else {
      *(uint *)(param_1 + 0x30c) = *(uint *)(param_1 + 0x30c) & 0xffffff7f;
      uVar1 = 0;
    }
    break;
  case 9:
    *(int *)(param_1 + 0x308) = *param_3;
    uVar1 = 0;
    break;
  case 0xb:
    *(int *)(param_1 + 0x2fc) = *param_3;
    uVar1 = 0;
    break;
  case 0xc:
    *(int *)(param_1 + 0x300) = *param_3;
    uVar1 = 0;
    break;
  default:
    uVar1 = 1;
    break;
  case 0xe:
  case 0xf:
  case 0x10:
    *(undefined4 *)(param_1 + 0x35c) = param_2;
    uVar1 = 0;
    break;
  case 0x11:
    uVar1 = my_strdup(param_3,0x10);
    *(undefined4 *)(param_1 + 0x360) = uVar1;
    uVar1 = 0;
    break;
  case 0x12:
    *(char *)(param_1 + 0x364) = (char)*param_3;
    uVar1 = 0;
    break;
  case 0x13:
    *(bool *)(param_1 + 0x365) = (char)*param_3 != '\0';
    uVar1 = 0;
    break;
  case 0x14:
    *(char *)(param_1 + 0x385) = (char)*param_3;
    uVar1 = 0;
    break;
  case 0x15:
    if ((char)*param_3 != '\0') {
      *(uint *)(param_1 + 0x30c) = *(uint *)(param_1 + 0x30c) | 0x40000000;
      return 0;
    }
    *(uint *)(param_1 + 0x30c) = *(uint *)(param_1 + 0x30c) & 0xbfffffff;
  case 10:
    uVar1 = 0;
  }
  return uVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/ServerLib/common_source/mysql_stubs.cpp](source/DNFServer/GameServer/ServerLab/ServerLib/common_source/mysql_stubs.cpp)（约第 40 行）：

```cpp
NSL_WEAK int mysql_options(MYSQL* mysql, int option, const void* arg)
{
    (void)mysql;
    (void)option;
    (void)arg;
    return 0;
}
```
