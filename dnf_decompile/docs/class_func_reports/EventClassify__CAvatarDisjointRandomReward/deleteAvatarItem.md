# deleteAvatarItem

`_ZN13EventClassify27CAvatarDisjointRandomReward16deleteAvatarItemEP5CUsertR10Inven_ItemPK5CItem`

`EventClassify::CAvatarDisjointRandomReward::deleteAvatarItem(CUser*, unsigned short, Inven_Item&, CItem const*)`

| 类 | 地址 |
|---|---|
| `EventClassify::CAvatarDisjointRandomReward` | `0x0810f4e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810f4e2  _ZN13EventClassify27CAvatarDisjointRandomReward16deleteAvatarItemEP5CUsertR10Inven_ItemPK5CItem
#           EventClassify::CAvatarDisjointRandomReward::deleteAvatarItem(CUser*, unsigned short, Inven_Item&, CItem const*)
# range [0x0810f4e2, 0x0810f5f3]
0810f4e2 +0x000:  push   %ebp
0810f4e3 +0x001:  mov    %esp,%ebp
0810f4e5 +0x003:  push   %esi
0810f4e6 +0x004:  push   %ebx
0810f4e7 +0x005:  sub    $0x30,%esp
0810f4ea +0x008:  mov    0x10(%ebp),%eax
0810f4ed +0x00b:  mov    %ax,-0xc(%ebp)
0810f4f1 +0x00f:  movzwl -0xc(%ebp),%ebx
0810f4f5 +0x013:  mov    0xc(%ebp),%eax
0810f4f8 +0x016:  mov    %eax,(%esp)
0810f4fb +0x019:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0810f500 +0x01e:  movl   $0x1,0x14(%esp)
0810f508 +0x026:  movl   $0x6,0x10(%esp)
0810f510 +0x02e:  movl   $0x1,0xc(%esp)
0810f518 +0x036:  mov    %ebx,0x8(%esp)
0810f51c +0x03a:  movl   $0x2,0x4(%esp)
0810f524 +0x042:  mov    %eax,(%esp)
0810f527 +0x045:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
0810f52c +0x04a:  xor    $0x1,%eax
0810f52f +0x04d:  test   %al,%al
0810f531 +0x04f:  je     0810f53d <+0x5b>
0810f533 +0x051:  mov    $0x16,%eax
0810f538 +0x056:  jmp    0810f5ec <+0x10a>
0810f53d +0x05b:  mov    0x14(%ebp),%eax
0810f540 +0x05e:  mov    0x7(%eax),%ebx
0810f543 +0x061:  mov    0xc(%ebp),%eax
0810f546 +0x064:  mov    %eax,(%esp)
0810f549 +0x067:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0810f54e +0x06c:  mov    %eax,(%esp)
0810f551 +0x06f:  call   08110c6c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x17e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x17e
0810f556 +0x074:  mov    %ebx,0x4(%esp)
0810f55a +0x078:  mov    %eax,(%esp)
0810f55d +0x07b:  call   082f9402 <_ZN8WongWork14CAvatarItemMgr12UnRegistItemEi>  ; WongWork::CAvatarItemMgr::UnRegistItem(int)
0810f562 +0x080:  xor    $0x1,%eax
0810f565 +0x083:  test   %al,%al
0810f567 +0x085:  je     0810f570 <+0x8e>
0810f569 +0x087:  mov    $0x16,%eax
0810f56e +0x08c:  jmp    0810f5ec <+0x10a>
0810f570 +0x08e:  movzwl -0xc(%ebp),%eax
0810f574 +0x092:  lea    0xa(%eax),%esi
0810f577 +0x095:  mov    0x14(%ebp),%eax
0810f57a +0x098:  mov    0x7(%eax),%ebx
0810f57d +0x09b:  mov    0xc(%ebp),%eax
0810f580 +0x09e:  mov    %eax,(%esp)
0810f583 +0x0a1:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0810f588 +0x0a6:  movl   $0x0,0x14(%esp)
0810f590 +0x0ae:  mov    %esi,0x10(%esp)
0810f594 +0x0b2:  movl   $0x5,0xc(%esp)
0810f59c +0x0ba:  mov    %ebx,0x8(%esp)
0810f5a0 +0x0be:  movl   $0x36,0x4(%esp)
0810f5a8 +0x0c6:  mov    %eax,(%esp)
0810f5ab +0x0c9:  call   08508c2e <_ZNK10CInventory15SendAvatarEventEiiiii>  ; CInventory::SendAvatarEvent(int, int, int, int, int) const
0810f5b0 +0x0ce:  mov    0x14(%ebp),%eax
0810f5b3 +0x0d1:  mov    0x7(%eax),%ebx
0810f5b6 +0x0d4:  mov    0xc(%ebp),%eax
0810f5b9 +0x0d7:  mov    %eax,(%esp)
0810f5bc +0x0da:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0810f5c1 +0x0df:  movl   $"",0x8(%esp)
0810f5c9 +0x0e7:  mov    %ebx,0x4(%esp)
0810f5cd +0x0eb:  mov    %eax,(%esp)
0810f5d0 +0x0ee:  call   0844536a <_ZN22DB_UpdateAvatarHistory11makeRequestEjiPc>  ; DB_UpdateAvatarHistory::makeRequest(unsigned int, int, char*)
0810f5d5 +0x0f3:  mov    0x18(%ebp),%eax
0810f5d8 +0x0f6:  mov    %eax,0x4(%esp)
0810f5dc +0x0fa:  mov    0x8(%ebp),%eax
0810f5df +0x0fd:  mov    %eax,(%esp)
0810f5e2 +0x100:  call   0810f5f4 <_ZN13EventClassify27CAvatarDisjointRandomReward27SendDisjointAvatarStatisticEPK5CItem>  ; EventClassify::CAvatarDisjointRandomReward::SendDisjointAvatarStatistic(CItem const*)
0810f5e7 +0x105:  mov    $0x0,%eax
0810f5ec +0x10a:  add    $0x30,%esp
0810f5ef +0x10d:  pop    %ebx
0810f5f0 +0x10e:  pop    %esi
0810f5f1 +0x10f:  pop    %ebp
0810f5f2 +0x110:  ret
0810f5f3 +0x111:  nop
```

## 反编译 C

```c
// EventClassify::CAvatarDisjointRandomReward::deleteAvatarItem @ 0x810f4e2

/* EventClassify::CAvatarDisjointRandomReward::deleteAvatarItem(CUser*, unsigned short, Inven_Item&,
   CItem const*) */

undefined4 __thiscall
EventClassify::CAvatarDisjointRandomReward::deleteAvatarItem
          (CAvatarDisjointRandomReward *this,CUser *param_1,ushort param_2,Inven_Item *param_3,
          CItem *param_4)

{
  char cVar1;
  CInventory *pCVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
  cVar1 = CInventory::delete_item(pCVar2,2,param_2,1,6,1);
  if (cVar1 == '\x01') {
    pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    iVar4 = CInventory::GetAvatarItemMgrW(pCVar2);
    cVar1 = WongWork::CAvatarItemMgr::UnRegistItem(iVar4);
    if (cVar1 == '\x01') {
      iVar4 = *(int *)(param_3 + 7);
      pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      CInventory::SendAvatarEvent(pCVar2,0x36,iVar4,5,param_2 + 10,0);
      iVar4 = *(int *)(param_3 + 7);
      uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      DB_UpdateAvatarHistory::makeRequest(uVar5,iVar4,"");
      SendDisjointAvatarStatistic(this,param_4);
      uVar3 = 0;
    }
    else {
      uVar3 = 0x16;
    }
  }
  else {
    uVar3 = 0x16;
  }
  return uVar3;
}
```
