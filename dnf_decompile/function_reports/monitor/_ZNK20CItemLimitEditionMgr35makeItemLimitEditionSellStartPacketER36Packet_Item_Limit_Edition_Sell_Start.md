# _ZNK20CItemLimitEditionMgr35makeItemLimitEditionSellStartPacketER36Packet_Item_Limit_Edition_Sell_Start

`CItemLimitEditionMgr::makeItemLimitEditionSellStartPacket(Packet_Item_Limit_Edition_Sell_Start&) const`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a5cce` | `0x9c` | `0x8093ee2` | `0x9d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,49 +1,50 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x28,%esp
-movl   $0x0,-0x10(%ebp)
+push   %ebx
+sub    $0x24,%esp
+movl   $0x0,-0xc(%ebp)
 mov    0x8(%ebp),%edx
 lea    -0x14(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjP17CItemLimitEditionSt4lessIjESaISt4pairIKjS1_EEE5beginEv>
 sub    $0x4,%esp
+jmp    <T> <_ZNK20CItemLimitEditionMgr35makeItemLimitEditionSellStartPacketER36Packet_Item_Limit_Edition_Sell_Start+0x64>
+mov    0xc(%ebp),%ecx
+mov    -0xc(%ebp),%edx
+mov    %edx,%eax
+shl    $0x3,%eax
+add    %edx,%eax
+shl    $0x3,%eax
+add    $0xf,%eax
+lea    (%ecx,%eax,1),%ebx
+lea    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjP17CItemLimitEditionEEptEv>
+mov    0x4(%eax),%eax
+mov    %ebx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZNK17CItemLimitEdition12makeItemInfoER28stItemLimitEditionItemInfo_t>
+addl   $0x1,-0xc(%ebp)
+lea    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjP17CItemLimitEditionEEppEv>
 mov    0x8(%ebp),%edx
-lea    -0x18(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjP17CItemLimitEditionSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
-jmp    <T> <_ZNK20CItemLimitEditionMgr35makeItemLimitEditionSellStartPacketER36Packet_Item_Limit_Edition_Sell_Start+0x7b>
-lea    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjP17CItemLimitEditionEEptEv>
-mov    0x4(%eax),%eax
-mov    %eax,-0xc(%ebp)
-mov    -0x10(%ebp),%edx
-mov    %edx,%eax
-shl    $0x3,%eax
-add    %edx,%eax
-shl    $0x3,%eax
-add    0xc(%ebp),%eax
-add    $0xf,%eax
-mov    %eax,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK17CItemLimitEdition12makeItemInfoER28stItemLimitEditionItemInfo_t>
-addl   $0x1,-0x10(%ebp)
-lea    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjP17CItemLimitEditionEEppEv>
-lea    -0x18(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjP17CItemLimitEditionEEneERKS5_>
 test   %al,%al
-jne    <T> <_ZNK20CItemLimitEditionMgr35makeItemLimitEditionSellStartPacketER36Packet_Item_Limit_Edition_Sell_Start+0x39>
+jne    <T> <_ZNK20CItemLimitEditionMgr35makeItemLimitEditionSellStartPacketER36Packet_Item_Limit_Edition_Sell_Start+0x25>
 mov    0xc(%ebp),%eax
-mov    -0x10(%ebp),%edx
+mov    -0xc(%ebp),%edx
 mov    %edx,0xb(%eax)
+mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CItemLimitEditionMgr::makeItemLimitEditionSellStartPacket(Packet_Item_Limit_Edition_Sell_Start&)
   const */

void __thiscall
CItemLimitEditionMgr::
_ZNK20CItemLimitEditionMgr35makeItemLimitEditionSellStartPacketER36Packet_Item_Limit_Edition_Sell_Start
          (CItemLimitEditionMgr *this,Packet_Item_Limit_Edition_Sell_Start *param_1)

{
  char cVar1;
  int iVar2;
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
    cVar1 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>>::
            operator!=((_Rb_tree_const_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>> *)
                       local_18,(_Rb_tree_const_iterator *)local_1c);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>>::
            operator->((_Rb_tree_const_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>> *)
                       local_18);
    local_10 = *(CItemLimitEdition **)(iVar2 + 4);
    CItemLimitEdition::_ZNK17CItemLimitEdition12makeItemInfoER28stItemLimitEditionItemInfo_t
              (local_10,(stItemLimitEditionItemInfo_t *)(param_1 + local_14 * 0x48 + 0xf));
    local_14 = local_14 + 1;
    std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>>::operator++
              ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>> *)local_18
              );
  }
  *(int *)(param_1 + 0xb) = local_14;
  return;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Monitor/ItemLimitEditionManager.cpp, source/DNFServer/GameServer/Monitor/Arad_BirthdayEvent.h, source/DNFServer/GameServer/Monitor/BlackUser.h, source/DNFServer/GameServer/Monitor/BuddyRegisterManager.h, source/DNFServer/GameServer/Monitor/DNFApplication.h, source/DNFServer/GameServer/Monitor/DNFDBServer.h, source/DNFServer/GameServer/Monitor/DNFManagerServer.h, source/DNFServer/GameServer/Monitor/DNFMember.h 等 299 个文件*
