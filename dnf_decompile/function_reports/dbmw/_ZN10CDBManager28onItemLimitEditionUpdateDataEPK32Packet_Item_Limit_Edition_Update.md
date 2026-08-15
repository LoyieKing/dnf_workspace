# _ZN10CDBManager28onItemLimitEditionUpdateDataEPK32Packet_Item_Limit_Edition_Update

`CDBManager::onItemLimitEditionUpdateData(Packet_Item_Limit_Edition_Update const*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8081e1c` | `0x164` | `0x805ba18` | `0x17a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,115 +1,123 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x3c,%esp
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %eax,-0x24(%ebp)
 cmpl   $0x0,-0x24(%ebp)
 jne    <T> <_ZN10CDBManager28onItemLimitEditionUpdateDataEPK32Packet_Item_Limit_Edition_Update+0x22>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager28onItemLimitEditionUpdateDataEPK32Packet_Item_Limit_Edition_Update+0x15c>
+jmp    <T> <_ZN10CDBManager28onItemLimitEditionUpdateDataEPK32Packet_Item_Limit_Edition_Update+0x172>
 movl   $0x0,(%esp)
 call   <T> <time>
 mov    %eax,-0x20(%ebp)
 movl   $0x0,-0x1c(%ebp)
-jmp    <T> <_ZN10CDBManager28onItemLimitEditionUpdateDataEPK32Packet_Item_Limit_Edition_Update+0x143>
+jmp    <T> <_ZN10CDBManager28onItemLimitEditionUpdateDataEPK32Packet_Item_Limit_Edition_Update+0x157>
+mov    0xc(%ebp),%ecx
 mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
 mov    %edx,%eax
 shl    $0x3,%eax
 add    %edx,%eax
+add    $0x1a,%eax
 lea    (%ecx,%eax,1),%eax
-add    $0x1a,%eax
 movzbl (%eax),%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager28onItemLimitEditionUpdateDataEPK32Packet_Item_Limit_Edition_Update+0xc0>
+je     <T> <_ZN10CDBManager28onItemLimitEditionUpdateDataEPK32Packet_Item_Limit_Edition_Update+0xcd>
 mov    -0x24(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%esi
 mov    0xc(%ebp),%eax
 mov    0xa(%eax),%ebx
+mov    0xc(%ebp),%ecx
 mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
 mov    %edx,%eax
 shl    $0x3,%eax
 add    %edx,%eax
+add    $0x12,%eax
 lea    (%ecx,%eax,1),%eax
-add    $0x10,%eax
-mov    0x2(%eax),%ecx
+mov    (%eax),%ecx
+mov    0xc(%ebp),%edi
 mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%edi
 mov    %edx,%eax
 shl    $0x3,%eax
 add    %edx,%eax
+add    $0x16,%eax
 lea    (%edi,%eax,1),%eax
-add    $0x10,%eax
-mov    0x6(%eax),%eax
+mov    (%eax),%eax
 mov    %ebx,0x18(%esp)
 mov    %ecx,0x14(%esp)
 mov    -0x20(%ebp),%edx
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"upDate limited_shop_manager set sell_cnt=%d,real_end_time=%d where ipg_no=%d and server_id=%d",0x8(%esp)
 movl   $0x4ec8,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   *%esi
-jmp    <T> <_ZN10CDBManager28onItemLimitEditionUpdateDataEPK32Packet_Item_Limit_Edition_Update+0x120>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager28onItemLimitEditionUpdateDataEPK32Packet_Item_Limit_Edition_Update+0x139>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager28onItemLimitEditionUpdateDataEPK32Packet_Item_Limit_Edition_Update+0x172>
 mov    -0x24(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%esi
 mov    0xc(%ebp),%eax
 mov    0xa(%eax),%ebx
+mov    0xc(%ebp),%ecx
 mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
 mov    %edx,%eax
 shl    $0x3,%eax
 add    %edx,%eax
+add    $0x12,%eax
 lea    (%ecx,%eax,1),%eax
-add    $0x10,%eax
-mov    0x2(%eax),%ecx
+mov    (%eax),%ecx
+mov    0xc(%ebp),%edi
 mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%edi
 mov    %edx,%eax
 shl    $0x3,%eax
 add    %edx,%eax
+add    $0x16,%eax
 lea    (%edi,%eax,1),%eax
-add    $0x10,%eax
-mov    0x6(%eax),%eax
+mov    (%eax),%eax
 mov    %ebx,0x14(%esp)
 mov    %ecx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"upDate limited_shop_manager set sell_cnt=%d where ipg_no=%d and server_id=%d",0x8(%esp)
 movl   $0x4ec8,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   *%esi
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager28onItemLimitEditionUpdateDataEPK32Packet_Item_Limit_Edition_Update+0x139>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager28onItemLimitEditionUpdateDataEPK32Packet_Item_Limit_Edition_Update+0x172>
 mov    -0x24(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4ec8,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-xor    $0x1,%eax
-test   %al,%al
 addl   $0x1,-0x1c(%ebp)
+mov    -0x1c(%ebp),%edx
 mov    0xc(%ebp),%eax
 mov    0xe(%eax),%eax
-cmp    -0x1c(%ebp),%eax
-seta   %al
+cmp    %eax,%edx
+setb   %al
 test   %al,%al
 jne    <T> <_ZN10CDBManager28onItemLimitEditionUpdateDataEPK32Packet_Item_Limit_Edition_Update+0x3d>
 mov    $0x1,%eax
 add    $0x3c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::onItemLimitEditionUpdateData(Packet_Item_Limit_Edition_Update const*) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager28onItemLimitEditionUpdateDataEPK32Packet_Item_Limit_Edition_Update
          (CDBManager *this,Packet_Item_Limit_Edition_Update *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  time_t tVar3;
  uint local_20;
  
  piVar1 = *(int **)(this + 4);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    tVar3 = time((time_t *)0x0);
    for (local_20 = 0; local_20 < *(uint *)(param_1 + 0xe); local_20 = local_20 + 1) {
      if (param_1[local_20 * 9 + 0x1a] == (Packet_Item_Limit_Edition_Update)0x0) {
        (**(code **)(*piVar1 + 0x1c))
                  (piVar1,0x4ec8,
                   "upDate limited_shop_manager set sell_cnt=%d where ipg_no=%d and server_id=%d",
                   *(undefined4 *)(param_1 + local_20 * 9 + 0x16),
                   *(undefined4 *)(param_1 + local_20 * 9 + 0x12),*(undefined4 *)(param_1 + 10));
      }
      else {
        (**(code **)(*piVar1 + 0x1c))
                  (piVar1,0x4ec8,
                   "upDate limited_shop_manager set sell_cnt=%d,real_end_time=%d where ipg_no=%d and server_id=%d"
                   ,*(undefined4 *)(param_1 + local_20 * 9 + 0x16),tVar3,
                   *(undefined4 *)(param_1 + local_20 * 9 + 0x12),*(undefined4 *)(param_1 + 10));
      }
      (**(code **)(*piVar1 + 0x20))(piVar1,0x4ec8);
    }
    uVar2 = 1;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 284 个文件*
