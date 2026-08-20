# generateSpecificItem

`_ZN8WongWork12CDungeonDrop20generateSpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE`

`WongWork::CDungeonDrop::generateSpecificItem(WongWork::stGenerateRefData_t const&, WongWork::stGenerateResult_t&)`

| 类 | 地址 |
|---|---|
| `WongWork::CDungeonDrop` | `0x08539c3e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08539c3e  _ZN8WongWork12CDungeonDrop20generateSpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE
#           WongWork::CDungeonDrop::generateSpecificItem(WongWork::stGenerateRefData_t const&, WongWork::stGenerateResult_t&)
# range [0x08539c3e, 0x08539d33]
08539c3e +0x00:  push   %ebp
08539c3f +0x01:  mov    %esp,%ebp
08539c41 +0x03:  sub    $0x68,%esp
08539c44 +0x06:  movl   $0x0,-0x10(%ebp)
08539c4b +0x0d:  mov    0x8(%ebp),%eax
08539c4e +0x10:  add    $0x8,%eax
08539c51 +0x13:  movl   $0x2710,0x8(%esp)
08539c59 +0x1b:  movl   $0x1,0x4(%esp)
08539c61 +0x23:  mov    %eax,(%esp)
08539c64 +0x26:  call   085334a4 <_ZN8WongWork21CGenerateRandomNumber14generateNumberEii>  ; WongWork::CGenerateRandomNumber::generateNumber(int, int)
08539c69 +0x2b:  mov    %eax,-0xc(%ebp)
08539c6c +0x2e:  mov    0xc(%ebp),%eax
08539c6f +0x31:  mov    0x34(%eax),%edx
08539c72 +0x34:  lea    -0x18(%ebp),%eax
08539c75 +0x37:  mov    %edx,0x4(%esp)
08539c79 +0x3b:  mov    %eax,(%esp)
08539c7c +0x3e:  call   08111220 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x732>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x732
08539c81 +0x43:  sub    $0x4,%esp
08539c84 +0x46:  jmp    08539d00 <+0xc2>
08539c86 +0x48:  lea    -0x18(%ebp),%eax
08539c89 +0x4b:  mov    %eax,(%esp)
08539c8c +0x4e:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
08539c91 +0x53:  mov    0x4(%eax),%eax
08539c94 +0x56:  add    %eax,-0x10(%ebp)
08539c97 +0x59:  mov    -0xc(%ebp),%eax
08539c9a +0x5c:  cmp    -0x10(%ebp),%eax
08539c9d +0x5f:  jge    08539cf5 <+0xb7>
08539c9f +0x61:  lea    -0x55(%ebp),%eax
08539ca2 +0x64:  mov    %eax,(%esp)
08539ca5 +0x67:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08539caa +0x6c:  lea    -0x18(%ebp),%eax
08539cad +0x6f:  mov    %eax,(%esp)
08539cb0 +0x72:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
08539cb5 +0x77:  mov    (%eax),%eax
08539cb7 +0x79:  mov    %eax,-0x53(%ebp)
08539cba +0x7c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08539cbf +0x81:  mov    0xc(%eax),%eax
08539cc2 +0x84:  movl   $0x1,0xc(%esp)
08539cca +0x8c:  lea    -0x55(%ebp),%edx
08539ccd +0x8f:  mov    %edx,0x8(%esp)
08539cd1 +0x93:  movl   $0x1,0x4(%esp)
08539cd9 +0x9b:  mov    %eax,(%esp)
08539cdc +0x9e:  call   08511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>  ; CItemList::create_item(ENUM_ITEM_CREATE_TYPE, Inven_Item&, int)
08539ce1 +0xa3:  mov    0x10(%ebp),%eax
08539ce4 +0xa6:  lea    -0x55(%ebp),%edx
08539ce7 +0xa9:  mov    %edx,0x4(%esp)
08539ceb +0xad:  mov    %eax,(%esp)
08539cee +0xb0:  call   08237262 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc90c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc90c
08539cf3 +0xb5:  jmp    08539d32 <+0xf4>
08539cf5 +0xb7:  lea    -0x18(%ebp),%eax
08539cf8 +0xba:  mov    %eax,(%esp)
08539cfb +0xbd:  call   0823dcd0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x8e4e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x8e4e
08539d00 +0xc2:  mov    0xc(%ebp),%eax
08539d03 +0xc5:  mov    0x34(%eax),%edx
08539d06 +0xc8:  lea    -0x14(%ebp),%eax
08539d09 +0xcb:  mov    %edx,0x4(%esp)
08539d0d +0xcf:  mov    %eax,(%esp)
08539d10 +0xd2:  call   0811124c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x75e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x75e
08539d15 +0xd7:  sub    $0x4,%esp
08539d18 +0xda:  lea    -0x14(%ebp),%eax
08539d1b +0xdd:  mov    %eax,0x4(%esp)
08539d1f +0xe1:  lea    -0x18(%ebp),%eax
08539d22 +0xe4:  mov    %eax,(%esp)
08539d25 +0xe7:  call   081938e5 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x54d>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x54d
08539d2a +0xec:  test   %al,%al
08539d2c +0xee:  jne    08539c86 <+0x48>
08539d32 +0xf4:  leave
08539d33 +0xf5:  ret
```

## 反编译 C

```c
// WongWork::CDungeonDrop::generateSpecificItem @ 0x8539c3e

/* WongWork::CDungeonDrop::generateSpecificItem(WongWork::stGenerateRefData_t const&,
   WongWork::stGenerateResult_t&) */

void __thiscall
WongWork::CDungeonDrop::generateSpecificItem
          (CDungeonDrop *this,stGenerateRefData_t *param_1,stGenerateResult_t *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  Inven_Item local_59 [2];
  undefined4 local_57;
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_1c [4];
  __normal_iterator local_18 [4];
  int local_14;
  int local_10;
  
  local_14 = 0;
  local_10 = CGenerateRandomNumber::generateNumber((CGenerateRandomNumber *)(this + 8),1,10000);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
  while( true ) {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
    bVar1 = __gnu_cxx::operator!=(local_1c,local_18);
    if (!bVar1) {
      return;
    }
    iVar2 = __gnu_cxx::
            __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
            ::operator->(local_1c);
    local_14 = local_14 + *(int *)(iVar2 + 4);
    if (local_10 < local_14) break;
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::operator++(local_1c);
  }
  Inven_Item::Inven_Item(local_59);
  puVar3 = (undefined4 *)
           __gnu_cxx::
           __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
           ::operator->(local_1c);
  local_57 = *puVar3;
  iVar2 = G_CDataManager();
  CItemList::create_item(*(CItemList **)(iVar2 + 0xc),1,local_59,1);
  std::vector<Inven_Item,std::allocator<Inven_Item>>::push_back
            ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_2,local_59);
  return;
}
```
