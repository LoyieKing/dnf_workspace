# getTagCharacInventory

`_ZNK5CUser21getTagCharacInventoryEP21TAG_CHARAC_INVEN_DATA`

`CUser::getTagCharacInventory(TAG_CHARAC_INVEN_DATA*) const`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0869067c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0869067c  _ZNK5CUser21getTagCharacInventoryEP21TAG_CHARAC_INVEN_DATA
#           CUser::getTagCharacInventory(TAG_CHARAC_INVEN_DATA*) const
# range [0x0869067c, 0x08690775]
0869067c +0x00:  push   %ebp
0869067d +0x01:  mov    %esp,%ebp
0869067f +0x03:  push   %esi
08690680 +0x04:  push   %ebx
08690681 +0x05:  sub    $0x10,%esp
08690684 +0x08:  mov    0x8(%ebp),%eax
08690687 +0x0b:  mov    %eax,(%esp)
0869068a +0x0e:  call   084ebea8 <_GLOBAL__I__Z7getUserj+0x2e5a>  ; global constructors keyed to getUser(unsigned int)+0x2e5a
0869068f +0x13:  test   %eax,%eax
08690691 +0x15:  sete   %al
08690694 +0x18:  test   %al,%al
08690696 +0x1a:  je     086906a2 <+0x26>
08690698 +0x1c:  mov    $0x0,%eax
0869069d +0x21:  jmp    0869076f <+0xf3>
086906a2 +0x26:  mov    0xc(%ebp),%eax
086906a5 +0x29:  lea    0x53e(%eax),%ebx
086906ab +0x2f:  mov    0x8(%ebp),%eax
086906ae +0x32:  mov    %eax,(%esp)
086906b1 +0x35:  call   0822f110 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ba>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ba
086906b6 +0x3a:  movl   $0x1905,0xc(%esp)
086906be +0x42:  mov    %ebx,0x8(%esp)
086906c2 +0x46:  movl   $0x2,0x4(%esp)
086906ca +0x4e:  mov    %eax,(%esp)
086906cd +0x51:  call   084fb222 <_ZNK10CInventory12GetInvenDataEiPvi>  ; CInventory::GetInvenData(int, void*, int) const
086906d2 +0x56:  mov    0x8(%ebp),%eax
086906d5 +0x59:  mov    %eax,(%esp)
086906d8 +0x5c:  call   0822f110 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ba>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ba
086906dd +0x61:  add    $0x1c,%eax
086906e0 +0x64:  mov    %eax,%edx
086906e2 +0x66:  mov    0xc(%ebp),%eax
086906e5 +0x69:  movl   $0x53e,0x8(%esp)
086906ed +0x71:  mov    %edx,0x4(%esp)
086906f1 +0x75:  mov    %eax,(%esp)
086906f4 +0x78:  call   0807d8a0 <_init+0x198>
086906f9 +0x7d:  mov    0xc(%ebp),%eax
086906fc +0x80:  lea    0x3ff8(%eax),%ebx
08690702 +0x86:  mov    0x8(%ebp),%eax
08690705 +0x89:  mov    %eax,(%esp)
08690708 +0x8c:  call   0822f110 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ba>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ba
0869070d +0x91:  mov    %ebx,0x4(%esp)
08690711 +0x95:  mov    %eax,(%esp)
08690714 +0x98:  call   0869498a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x11df>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x11df
08690719 +0x9d:  mov    0xc(%ebp),%eax
0869071c +0xa0:  lea    0x1e43(%eax),%esi
08690722 +0xa6:  mov    0xc(%ebp),%eax
08690725 +0xa9:  lea    0x1e47(%eax),%ebx
0869072b +0xaf:  mov    0x8(%ebp),%eax
0869072e +0xb2:  mov    %eax,(%esp)
08690731 +0xb5:  call   0822f110 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ba>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ba
08690736 +0xba:  mov    %eax,(%esp)
08690739 +0xbd:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
0869073e +0xc2:  mov    %esi,0x8(%esp)
08690742 +0xc6:  mov    %ebx,0x4(%esp)
08690746 +0xca:  mov    %eax,(%esp)
08690749 +0xcd:  call   082f925c <_ZNK8WongWork14CAvatarItemMgr7GetItemEP16AvatarDetailInfoPi>  ; WongWork::CAvatarItemMgr::GetItem(AvatarDetailInfo*, int*) const
0869074e +0xd2:  mov    0x8(%ebp),%eax
08690751 +0xd5:  mov    %eax,(%esp)
08690754 +0xd8:  call   0869609a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x28ef>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x28ef
08690759 +0xdd:  mov    %eax,(%esp)
0869075c +0xe0:  call   0822d708 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2db2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2db2
08690761 +0xe5:  mov    0xc(%ebp),%edx
08690764 +0xe8:  mov    %eax,0x4020(%edx)
0869076a +0xee:  mov    $0x1,%eax
0869076f +0xf3:  add    $0x10,%esp
08690772 +0xf6:  pop    %ebx
08690773 +0xf7:  pop    %esi
08690774 +0xf8:  pop    %ebp
08690775 +0xf9:  ret
```

## 反编译 C

```c
// CUser::getTagCharacInventory @ 0x869067c

/* CUser::getTagCharacInventory(TAG_CHARAC_INVEN_DATA*) const */

bool __thiscall CUser::getTagCharacInventory(CUser *this,TAG_CHARAC_INVEN_DATA *param_1)

{
  int iVar1;
  CInventory *pCVar2;
  int iVar3;
  CAvatarItemMgr *this_00;
  CCargo *this_01;
  undefined4 uVar4;
  
  iVar1 = CUserCharacInfo::getTagCharacR((CUserCharacInfo *)this);
  if (iVar1 != 0) {
    pCVar2 = (CInventory *)CUserCharacInfo::getTagCharacInvenR((CUserCharacInfo *)this);
    CInventory::GetInvenData(pCVar2,2,param_1 + 0x53e,0x1905);
    iVar3 = CUserCharacInfo::getTagCharacInvenR((CUserCharacInfo *)this);
    memcpy(param_1,(void *)(iVar3 + 0x1c),0x53e);
    pCVar2 = (CInventory *)CUserCharacInfo::getTagCharacInvenR((CUserCharacInfo *)this);
    CInventory::GetClearAvatar(pCVar2,(ulong *)(param_1 + 0x3ff8));
    pCVar2 = (CInventory *)CUserCharacInfo::getTagCharacInvenR((CUserCharacInfo *)this);
    this_00 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar2);
    WongWork::CAvatarItemMgr::GetItem
              (this_00,(AvatarDetailInfo *)(param_1 + 0x1e47),(int *)(param_1 + 0x1e43));
    this_01 = (CCargo *)CUserCharacInfo::getTagCharacCargoR((CUserCharacInfo *)this);
    uVar4 = CCargo::GetCapacity(this_01);
    *(undefined4 *)(param_1 + 0x4020) = uVar4;
  }
  return iVar1 != 0;
}
```
