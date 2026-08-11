# mysql_fetch_row

`mysql_fetch_row`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| bridge | DIFF | `0x80962e0` | `0x229` | `0x8056e67` | `0xa` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,160 +1,5 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x78,%esp
-mov    %esi,-0x8(%ebp)
-mov    0x8(%ebp),%esi
-mov    %ebx,-0xc(%ebp)
-mov    %edi,-0x4(%ebp)
-call   <T> <__i686.get_pc_thunk.bx>
-add    $0x191379,%ebx
-mov    0xc(%esi),%ecx
-test   %ecx,%ecx
-je     <T> <mysql_fetch_row+0x58>
-mov    0x10(%esi),%edx
-test   %edx,%edx
-je     <T> <mysql_fetch_row+0x48>
-mov    0x4(%edx),%eax
-mov    (%edx),%edx
-mov    %eax,0x24(%esi)
-mov    %edx,0x10(%esi)
-mov    -0xc(%ebp),%ebx
-mov    -0x8(%ebp),%esi
-mov    -0x4(%ebp),%edi
-mov    %ebp,%esp
+mov    $0x0,%eax
 pop    %ebp
 ret
-nop
-lea    0x0(%esi,%eiz,1),%esi
-movl   $0x0,0x24(%esi)
-xor    %eax,%eax
-jmp    <T> <mysql_fetch_row+0x36>
-nop
-lea    0x0(%esi,%eiz,1),%esi
-xor    %eax,%eax
-cmpb   $0x0,0x50(%esi)
-jne    <T> <mysql_fetch_row+0x36>
-mov    0x18(%esi),%eax
-cmpl   $0x2,0x380(%eax)
-mov    %eax,-0x3c(%ebp)
-jne    <T> <mysql_fetch_row+0x18e>
-mov    %eax,%edx
-mov    0x20(%esi),%ecx
-mov    0x48(%esi),%eax
-mov    0x14(%esi),%edi
-mov    %edx,(%esp)
-mov    %ecx,-0x34(%ebp)
-mov    %eax,-0x30(%ebp)
-call   <T> <cli_safe_read>
-cmp    $0xffffffff,%eax
-je     <T> <mysql_fetch_row+0x15d>
-cmp    $0x8,%eax
-ja     <T> <mysql_fetch_row+0x1b9>
-mov    -0x3c(%ebp),%ecx
-mov    0x10(%ecx),%edx
-cmpb   $0xfe,(%edx)
-je     <T> <mysql_fetch_row+0x144>
-lea    (%edx,%eax,1),%eax
-mov    %edx,-0x1c(%ebp)
-mov    -0x30(%ebp),%edx
-mov    %eax,-0x40(%ebp)
-test   %edx,%edx
-je     <T> <mysql_fetch_row+0x21e>
-lea    0x4(%edi),%eax
-xor    %edx,%edx
-lea    -0x1c(%ebp),%ecx
-xor    %edi,%edi
-mov    %ecx,-0x38(%ebp)
-mov    %esi,-0x44(%ebp)
-mov    %eax,-0x5c(%ebp)
-jmp    <T> <mysql_fetch_row+0x118>
-xchg   %ax,%ax
-mov    -0x1c(%ebp),%esi
-mov    -0x40(%ebp),%ecx
-mov    %esi,-0x4c(%ebp)
-sub    %esi,%ecx
-cmp    %ecx,%eax
-ja     <T> <mysql_fetch_row+0x1e8>
-mov    -0x34(%ebp),%ecx
-mov    %esi,(%ecx,%edi,4)
-mov    %esi,%ecx
-add    %eax,%ecx
-mov    %ecx,-0x1c(%ebp)
-mov    -0x5c(%ebp),%ecx
-mov    %eax,-0x4(%ecx)
-test   %edx,%edx
-je     <T> <mysql_fetch_row+0x105>
-movb   $0x0,(%edx)
-add    $0x1,%edi
-mov    -0x1c(%ebp),%edx
-addl   $0x4,-0x5c(%ebp)
-cmp    %edi,-0x30(%ebp)
-jbe    <T> <mysql_fetch_row+0x1c4>
-mov    -0x38(%ebp),%esi
-mov    %edx,-0x48(%ebp)
-mov    %esi,(%esp)
-call   <T> <net_field_length>
-mov    -0x48(%ebp),%edx
-cmp    $0xffffffff,%eax
-jne    <T> <mysql_fetch_row+0xd8>
-mov    -0x34(%ebp),%eax
-mov    -0x5c(%ebp),%ecx
-movl   $0x0,(%eax,%edi,4)
-movl   $0x0,-0x4(%ecx)
-jmp    <T> <mysql_fetch_row+0xfe>
-cmp    $0x1,%eax
-jbe    <T> <mysql_fetch_row+0x15d>
-movzwl 0x1(%edx),%eax
-mov    %eax,0x2f4(%ecx)
-movzwl 0x3(%edx),%eax
-mov    %eax,0x2ec(%ecx)
-movb   $0x1,0x50(%esi)
-mov    -0x3c(%ebp),%eax
-mov    -0x3c(%ebp),%edx
-movl   $0x0,0x380(%eax)
-lea    0x51(%esi),%eax
-cmp    %eax,0x3b8(%edx)
-je     <T> <mysql_fetch_row+0x20f>
-movl   $0x0,0x18(%esi)
-xor    %eax,%eax
-jmp    <T> <mysql_fetch_row+0x36>
-mov    -0x474(%ebx),%eax
-cmpb   $0x1,0x51(%esi)
-mov    (%eax),%edx
-sbb    %eax,%eax
-and    $0xffffffdc,%eax
-add    $0x802,%eax
-mov    %eax,0x4(%esp)
-mov    %edx,0x8(%esp)
-mov    -0x3c(%ebp),%edx
-mov    %edx,(%esp)
-call   <T> <set_mysql_error>
-jmp    <T> <mysql_fetch_row+0x15d>
-mov    -0x3c(%ebp),%ecx
-mov    0x10(%ecx),%edx
-jmp    <T> <mysql_fetch_row+0xad>
-mov    -0x44(%ebp),%esi
-shl    $0x2,%edi
-lea    0x1(%edx),%eax
-mov    -0x34(%ebp),%ecx
-mov    %eax,(%ecx,%edi,1)
-movb   $0x0,(%edx)
-mov    0x20(%esi),%eax
-addl   $0x1,(%esi)
-adcl   $0x0,0x4(%esi)
-mov    %eax,0x24(%esi)
-jmp    <T> <mysql_fetch_row+0x36>
-mov    -0x474(%ebx),%eax
-mov    -0x44(%ebp),%esi
-mov    (%eax),%eax
-movl   $0x7d0,0x4(%esp)
-mov    %eax,0x8(%esp)
-mov    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <set_mysql_error>
-jmp    <T> <mysql_fetch_row+0x15d>
-movl   $0x0,0x3b8(%edx)
-jmp    <T> <mysql_fetch_row+0x180>
-mov    $0x1,%eax
-xor    %edi,%edi
-xor    %edx,%edx
-jmp    <T> <mysql_fetch_row+0x1cd>
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

uint mysql_fetch_row(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  uint uVar10;
  int iVar11;
  undefined4 *local_60;
  char *local_20 [4];
  
  if (param_1[3] != 0) {
    puVar1 = (uint *)param_1[4];
    if (puVar1 != (uint *)0x0) {
      uVar2 = puVar1[1];
      uVar3 = *puVar1;
      param_1[9] = uVar2;
      param_1[4] = uVar3;
      return uVar2;
    }
    param_1[9] = 0;
    return 0;
  }
  if ((char)param_1[0x14] != '\0') {
    return 0;
  }
  uVar2 = param_1[6];
  if (*(int *)(uVar2 + 0x380) == 2) {
    uVar3 = param_1[8];
    uVar4 = param_1[0x12];
    puVar5 = (undefined4 *)param_1[5];
    uVar6 = cli_safe_read(uVar2);
    if (uVar6 != 0xffffffff) {
      if (uVar6 < 9) {
        pcVar8 = *(char **)(uVar2 + 0x10);
        if (*pcVar8 == -2) {
          if (1 < uVar6) {
            *(uint *)(uVar2 + 0x2f4) = (uint)*(ushort *)(pcVar8 + 1);
            *(uint *)(uVar2 + 0x2ec) = (uint)*(ushort *)(pcVar8 + 3);
          }
          goto LAB_0809643d;
        }
      }
      else {
        pcVar8 = *(char **)(uVar2 + 0x10);
      }
      if (uVar4 == 0) {
        pcVar8 = (char *)0x1;
        iVar11 = 0;
        local_20[0] = (char *)0x0;
      }
      else {
        uVar10 = 0;
        pcVar9 = (char *)0x0;
        local_20[0] = pcVar8;
        do {
          local_60 = puVar5 + 1;
          pcVar7 = (char *)net_field_length(local_20);
          if (pcVar7 == (char *)0xffffffff) {
            *(undefined4 *)(uVar3 + uVar10 * 4) = 0;
            *puVar5 = 0;
          }
          else {
            if (pcVar8 + (uVar6 - (int)local_20[0]) < pcVar7) {
              set_mysql_error(uVar2,2000,*(undefined4 *)PTR_unknown_sqlstate_082271fc);
              goto LAB_0809643d;
            }
            *(char **)(uVar3 + uVar10 * 4) = local_20[0];
            local_20[0] = local_20[0] + (int)pcVar7;
            *puVar5 = pcVar7;
          }
          if (pcVar9 != (char *)0x0) {
            *pcVar9 = '\0';
          }
          uVar10 = uVar10 + 1;
          pcVar9 = local_20[0];
          puVar5 = local_60;
        } while (uVar10 < uVar4);
        iVar11 = uVar10 * 4;
        pcVar8 = local_20[0] + 1;
      }
      *(char **)(uVar3 + iVar11) = pcVar8;
      *local_20[0] = '\0';
      uVar2 = *param_1;
      *param_1 = *param_1 + 1;
      param_1[1] = param_1[1] + (uint)(0xfffffffe < uVar2);
      param_1[9] = param_1[8];
      return param_1[8];
    }
  }
  else {
    set_mysql_error(uVar2,(-(uint)(*(char *)((int)param_1 + 0x51) == '\0') & 0xffffffdc) + 0x802,
                    *(undefined4 *)PTR_unknown_sqlstate_082271fc);
  }
LAB_0809643d:
  *(undefined1 *)(param_1 + 0x14) = 1;
  *(undefined4 *)(uVar2 + 0x380) = 0;
  if (*(int *)(uVar2 + 0x3b8) == (int)param_1 + 0x51) {
    *(undefined4 *)(uVar2 + 0x3b8) = 0;
  }
  param_1[6] = 0;
  return 0;
}
```

## 3. 我们的源码函数

定义于 [source/ChannelOld/DNFChannelBridge/MysqlClient.cpp](source/ChannelOld/DNFChannelBridge/MysqlClient.cpp)（约第 47 行）：

```cpp
MYSQL_ROW mysql_fetch_row(MYSQL_RES* result)
{
    return NULL;
}
```
