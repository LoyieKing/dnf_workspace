# _ZNK20CItemLimitEditionMgr32makeItemLimitEditionUpdatePacketER32Packet_Item_Limit_Edition_Update

`CItemLimitEditionMgr::makeItemLimitEditionUpdatePacket(Packet_Item_Limit_Edition_Update&) const`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a5d6a` | `0xed` | `0x809413c` | `0xe5` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,76 +1,73 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x24,%esp
 movl   $0x0,-0x10(%ebp)
 mov    0x8(%ebp),%edx
 lea    -0x14(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjP17CItemLimitEditionSt4lessIjESaISt4pairIKjS1_EEE5beginEv>
 sub    $0x4,%esp
 mov    0x8(%ebp),%edx
 lea    -0x18(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjP17CItemLimitEditionSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
-jmp    <T> <_ZNK20CItemLimitEditionMgr32makeItemLimitEditionUpdatePacketER32Packet_Item_Limit_Edition_Update+0xc5>
+jmp    <T> <_ZNK20CItemLimitEditionMgr32makeItemLimitEditionUpdatePacketER32Packet_Item_Limit_Edition_Update+0xbd>
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjP17CItemLimitEditionEEptEv>
 mov    0x4(%eax),%eax
 mov    %eax,-0xc(%ebp)
-mov    -0x10(%ebp),%ebx
+mov    0xc(%ebp),%ecx
+mov    -0x10(%ebp),%edx
+mov    %edx,%eax
+shl    $0x3,%eax
+add    %edx,%eax
+add    $0x12,%eax
+lea    (%ecx,%eax,1),%ebx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK17CItemLimitEdition8getIPGNOEv>
-mov    %eax,%edx
+mov    %eax,(%ebx)
 mov    0xc(%ebp),%ecx
-mov    %ebx,%eax
+mov    -0x10(%ebp),%edx
+mov    %edx,%eax
 shl    $0x3,%eax
-add    %ebx,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x10,%eax
-mov    %edx,0x2(%eax)
-mov    -0x10(%ebp),%ebx
+add    %edx,%eax
+add    $0x16,%eax
+lea    (%ecx,%eax,1),%ebx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK17CItemLimitEdition10getSellNumEv>
-mov    %eax,%edx
+mov    %eax,(%ebx)
 mov    0xc(%ebp),%ecx
-mov    %ebx,%eax
+mov    -0x10(%ebp),%edx
+mov    %edx,%eax
 shl    $0x3,%eax
-add    %ebx,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x10,%eax
-mov    %edx,0x6(%eax)
-mov    -0x10(%ebp),%ebx
+add    %edx,%eax
+add    $0x1a,%eax
+lea    (%ecx,%eax,1),%ebx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK17CItemLimitEdition14isSellCompleteEv>
-mov    %eax,%edx
-mov    0xc(%ebp),%ecx
-mov    %ebx,%eax
-shl    $0x3,%eax
-add    %ebx,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x1a,%eax
-mov    %dl,(%eax)
+mov    %al,(%ebx)
 addl   $0x1,-0x10(%ebp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjP17CItemLimitEditionEEppEv>
 lea    -0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjP17CItemLimitEditionEEneERKS5_>
 test   %al,%al
 jne    <T> <_ZNK20CItemLimitEditionMgr32makeItemLimitEditionUpdatePacketER32Packet_Item_Limit_Edition_Update+0x3d>
 mov    0xc(%ebp),%eax
 mov    -0x10(%ebp),%edx
 mov    %edx,0xe(%eax)
 mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CItemLimitEditionMgr::makeItemLimitEditionUpdatePacket(Packet_Item_Limit_Edition_Update&) const
    */

void __thiscall
CItemLimitEditionMgr::
_ZNK20CItemLimitEditionMgr32makeItemLimitEditionUpdatePacketER32Packet_Item_Limit_Edition_Update
          (CItemLimitEditionMgr *this,Packet_Item_Limit_Edition_Update *param_1)

{
  int iVar1;
  Packet_Item_Limit_Edition_Update PVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  map<unsigned_int,CItemLimitEdition*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CItemLimitEdition*>>>
  local_1c [4];
  map<unsigned_int,CItemLimitEdition*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CItemLimitEdition*>>>
  local_18 [4];
  int local_14;
  CItemLimitEdition *local_10;
  
  local_14 = 0;
  std::
  map<unsigned_int,CItemLimitEdition*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CItemLimitEdition*>>>
  ::begin(local_18);
  std::
  map<unsigned_int,CItemLimitEdition*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CItemLimitEdition*>>>
  ::end(local_1c);
  while( true ) {
    cVar3 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>>::
            operator!=((_Rb_tree_const_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>> *)
                       local_18,(_Rb_tree_const_iterator *)local_1c);
    if (cVar3 == '\0') break;
    iVar4 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>>::
            operator->((_Rb_tree_const_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>> *)
                       local_18);
    iVar1 = local_14;
    local_10 = *(CItemLimitEdition **)(iVar4 + 4);
    uVar5 = CItemLimitEdition::getIPGNO(local_10);
    iVar4 = local_14;
    *(undefined4 *)(param_1 + iVar1 * 9 + 0x12) = uVar5;
    uVar5 = CItemLimitEdition::getSellNum(local_10);
    iVar1 = local_14;
    *(undefined4 *)(param_1 + iVar4 * 9 + 0x16) = uVar5;
    PVar2 = (Packet_Item_Limit_Edition_Update)
            CItemLimitEdition::_ZNK17CItemLimitEdition14isSellCompleteEv(local_10);
    param_1[iVar1 * 9 + 0x1a] = PVar2;
    local_14 = local_14 + 1;
    std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>>::operator++
              ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>> *)local_18
              );
  }
  *(int *)(param_1 + 0xe) = local_14;
  return;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Monitor/ItemLimitEditionManager.cpp, source/DNFServer/GameServer/Monitor/Arad_BirthdayEvent.h, source/DNFServer/GameServer/Monitor/BlackUser.h, source/DNFServer/GameServer/Monitor/BuddyRegisterManager.h, source/DNFServer/GameServer/Monitor/DNFApplication.h, source/DNFServer/GameServer/Monitor/DNFDBServer.h, source/DNFServer/GameServer/Monitor/DNFManagerServer.h, source/DNFServer/GameServer/Monitor/DNFMember.h 等 299 个文件*
