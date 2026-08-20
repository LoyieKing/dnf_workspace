# respond_special_item_inventory_upgrade

`_ZN18SpecialItemHandler38respond_special_item_inventory_upgradeEiRK19STSpecailItem_ParamR20STSpecailItem_Result`

`SpecialItemHandler::respond_special_item_inventory_upgrade(int, STSpecailItem_Param const&, STSpecailItem_Result&)`

| 类 | 地址 |
|---|---|
| `SpecialItemHandler` | `0x0827bf90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827bf90  _ZN18SpecialItemHandler38respond_special_item_inventory_upgradeEiRK19STSpecailItem_ParamR20STSpecailItem_Result
#           SpecialItemHandler::respond_special_item_inventory_upgrade(int, STSpecailItem_Param const&, STSpecailItem_Result&)
# range [0x0827bf90, 0x0827c0c1]
0827bf90 +0x000:  push   %ebp
0827bf91 +0x001:  mov    %esp,%ebp
0827bf93 +0x003:  push   %edi
0827bf94 +0x004:  push   %esi
0827bf95 +0x005:  push   %ebx
0827bf96 +0x006:  sub    $0x2c,%esp
0827bf99 +0x009:  mov    0x10(%ebp),%eax
0827bf9c +0x00c:  mov    (%eax),%eax
0827bf9e +0x00e:  mov    %eax,-0x1c(%ebp)
0827bfa1 +0x011:  mov    -0x1c(%ebp),%eax
0827bfa4 +0x014:  mov    %eax,(%esp)
0827bfa7 +0x017:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0827bfac +0x01c:  mov    %eax,(%esp)
0827bfaf +0x01f:  call   0822d6fc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2da6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2da6
0827bfb4 +0x024:  cmp    $0xf,%eax
0827bfb7 +0x027:  setg   %al
0827bfba +0x02a:  test   %al,%al
0827bfbc +0x02c:  je     0827bfcc <+0x3c>
0827bfbe +0x02e:  mov    0x14(%ebp),%eax
0827bfc1 +0x031:  movl   $0x12,(%eax)
0827bfc7 +0x037:  jmp    0827c0ba <+0x12a>
0827bfcc +0x03c:  mov    -0x1c(%ebp),%eax
0827bfcf +0x03f:  mov    %eax,(%esp)
0827bfd2 +0x042:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0827bfd7 +0x047:  mov    %eax,(%esp)
0827bfda +0x04a:  call   0822d6fc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2da6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2da6
0827bfdf +0x04f:  mov    0x10(%ebp),%edx
0827bfe2 +0x052:  mov    0x8(%edx),%edx
0827bfe5 +0x055:  lea    (%eax,%edx,1),%ebx
0827bfe8 +0x058:  mov    -0x1c(%ebp),%eax
0827bfeb +0x05b:  mov    %eax,(%esp)
0827bfee +0x05e:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0827bff3 +0x063:  mov    %eax,(%esp)
0827bff6 +0x066:  call   0822d6fc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2da6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2da6
0827bffb +0x06b:  mov    -0x1c(%ebp),%edx
0827bffe +0x06e:  add    $0x79700,%edx
0827c004 +0x074:  movl   $0x0,0xc(%esp)
0827c00c +0x07c:  mov    %ebx,0x8(%esp)
0827c010 +0x080:  mov    %eax,0x4(%esp)
0827c014 +0x084:  mov    %edx,(%esp)
0827c017 +0x087:  call   08683cbc <_ZN15cUserHistoryLog15ExpandInventoryEiii>  ; cUserHistoryLog::ExpandInventory(int, int, int)
0827c01c +0x08c:  mov    -0x1c(%ebp),%eax
0827c01f +0x08f:  mov    %eax,(%esp)
0827c022 +0x092:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0827c027 +0x097:  mov    %eax,(%esp)
0827c02a +0x09a:  call   0822d6fc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2da6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2da6
0827c02f +0x09f:  mov    0x10(%ebp),%edx
0827c032 +0x0a2:  mov    0x8(%edx),%edx
0827c035 +0x0a5:  lea    (%eax,%edx,1),%ebx
0827c038 +0x0a8:  mov    -0x1c(%ebp),%eax
0827c03b +0x0ab:  mov    %eax,(%esp)
0827c03e +0x0ae:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0827c043 +0x0b3:  mov    %ebx,0x4(%esp)
0827c047 +0x0b7:  mov    %eax,(%esp)
0827c04a +0x0ba:  call   0822d6ee <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2d98>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2d98
0827c04f +0x0bf:  mov    -0x1c(%ebp),%eax
0827c052 +0x0c2:  mov    %eax,(%esp)
0827c055 +0x0c5:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0827c05a +0x0ca:  mov    %eax,(%esp)
0827c05d +0x0cd:  call   0822d6fc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2da6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2da6
0827c062 +0x0d2:  mov    %eax,%edi
0827c064 +0x0d4:  mov    -0x1c(%ebp),%eax
0827c067 +0x0d7:  mov    %eax,(%esp)
0827c06a +0x0da:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0827c06f +0x0df:  mov    %eax,%esi
0827c071 +0x0e1:  mov    -0x1c(%ebp),%eax
0827c074 +0x0e4:  mov    %eax,(%esp)
0827c077 +0x0e7:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0827c07c +0x0ec:  mov    %eax,%ebx
0827c07e +0x0ee:  mov    -0x1c(%ebp),%eax
0827c081 +0x0f1:  mov    %eax,(%esp)
0827c084 +0x0f4:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0827c089 +0x0f9:  mov    %edi,0xc(%esp)
0827c08d +0x0fd:  mov    %esi,0x8(%esp)
0827c091 +0x101:  mov    %ebx,0x4(%esp)
0827c095 +0x105:  mov    %eax,(%esp)
0827c098 +0x108:  call   08444d12 <_ZN26DB_UpdateInventoryCapacity11makeRequestE17ENUM_SERVER_GROUPiji>  ; DB_UpdateInventoryCapacity::makeRequest(ENUM_SERVER_GROUP, int, unsigned int, int)
0827c09d +0x10d:  mov    0x10(%ebp),%eax
0827c0a0 +0x110:  mov    (%eax),%edx
0827c0a2 +0x112:  mov    0x8(%ebp),%eax
0827c0a5 +0x115:  mov    (%eax),%eax
0827c0a7 +0x117:  mov    0xc(%ebp),%ecx
0827c0aa +0x11a:  mov    %ecx,0x8(%esp)
0827c0ae +0x11e:  mov    %edx,0x4(%esp)
0827c0b2 +0x122:  mov    %eax,(%esp)
0827c0b5 +0x125:  call   083275be <_ZN8WongWork9CCeraShop27_sendInventoryUpgradePacketEP5CUseri>  ; WongWork::CCeraShop::_sendInventoryUpgradePacket(CUser*, int)
0827c0ba +0x12a:  add    $0x2c,%esp
0827c0bd +0x12d:  pop    %ebx
0827c0be +0x12e:  pop    %esi
0827c0bf +0x12f:  pop    %edi
0827c0c0 +0x130:  pop    %ebp
0827c0c1 +0x131:  ret
```

## 反编译 C

```c
// SpecialItemHandler::respond_special_item_inventory_upgrade @ 0x827bf90

/* SpecialItemHandler::respond_special_item_inventory_upgrade(int, STSpecailItem_Param const&,
   STSpecailItem_Result&) */

void __thiscall
SpecialItemHandler::respond_special_item_inventory_upgrade
          (SpecialItemHandler *this,int param_1,STSpecailItem_Param *param_2,
          STSpecailItem_Result *param_3)

{
  CUserCharacInfo *this_00;
  CInventory *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  this_00 = *(CUserCharacInfo **)param_2;
  pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(this_00);
  iVar2 = CInventory::get_inventory_capacity(pCVar1);
  if (iVar2 < 0x10) {
    pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(this_00);
    iVar3 = CInventory::get_inventory_capacity(pCVar1);
    iVar2 = *(int *)(param_2 + 8);
    pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(this_00);
    iVar4 = CInventory::get_inventory_capacity(pCVar1);
    cUserHistoryLog::ExpandInventory((cUserHistoryLog *)(this_00 + 0x79700),iVar4,iVar3 + iVar2,0);
    pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(this_00);
    iVar3 = CInventory::get_inventory_capacity(pCVar1);
    iVar2 = *(int *)(param_2 + 8);
    pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(this_00);
    CInventory::set_inventory_capacity(pCVar1,iVar3 + iVar2);
    pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(this_00);
    uVar5 = CInventory::get_inventory_capacity(pCVar1);
    uVar6 = CUserCharacInfo::getCurCharacNo(this_00);
    uVar7 = CUser::GetUID((CUser *)this_00);
    uVar8 = CUser::GetServerGroup((CUser *)this_00);
    DB_UpdateInventoryCapacity::makeRequest(uVar8,uVar7,uVar6,uVar5);
    WongWork::CCeraShop::_sendInventoryUpgradePacket(*(CCeraShop **)this,*(CUser **)param_2,param_1)
    ;
  }
  else {
    *(undefined4 *)param_3 = 0x12;
  }
  return;
}
```
