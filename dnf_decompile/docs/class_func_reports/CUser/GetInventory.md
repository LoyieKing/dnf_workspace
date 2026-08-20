# GetInventory

`_ZN5CUser12GetInventoryEP18SIG_LOAD_INVENTORY`

`CUser::GetInventory(SIG_LOAD_INVENTORY*)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0864d646` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864d646  _ZN5CUser12GetInventoryEP18SIG_LOAD_INVENTORY
#           CUser::GetInventory(SIG_LOAD_INVENTORY*)
# range [0x0864d646, 0x0864d84d]
0864d646 +0x000:  push   %ebp
0864d647 +0x001:  mov    %esp,%ebp
0864d649 +0x003:  push   %ebx
0864d64a +0x004:  sub    $0x14,%esp
0864d64d +0x007:  mov    0x8(%ebp),%eax
0864d650 +0x00a:  mov    %eax,(%esp)
0864d653 +0x00d:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0864d658 +0x012:  mov    %eax,(%esp)
0864d65b +0x015:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
0864d660 +0x01a:  mov    %eax,%edx
0864d662 +0x01c:  mov    0xc(%ebp),%eax
0864d665 +0x01f:  mov    %edx,0x4034(%eax)
0864d66b +0x025:  mov    0x8(%ebp),%eax
0864d66e +0x028:  mov    %eax,(%esp)
0864d671 +0x02b:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0864d676 +0x030:  mov    %eax,(%esp)
0864d679 +0x033:  call   0822d68a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2d34>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2d34
0864d67e +0x038:  mov    0xc(%ebp),%edx
0864d681 +0x03b:  mov    %eax,0x4038(%edx)
0864d687 +0x041:  mov    0x8(%ebp),%eax
0864d68a +0x044:  mov    %eax,(%esp)
0864d68d +0x047:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0864d692 +0x04c:  mov    %eax,(%esp)
0864d695 +0x04f:  call   081ac72e <_GLOBAL__I__ZN4ARAD26CeraShopPurcahseCountBonus10LoadScriptEv+0x3a>  ; global constructors keyed to ARAD::CeraShopPurcahseCountBonus::LoadScript()+0x3a
0864d69a +0x054:  mov    0xc(%ebp),%edx
0864d69d +0x057:  mov    %eax,0x403c(%edx)
0864d6a3 +0x05d:  mov    0x8(%ebp),%eax
0864d6a6 +0x060:  mov    %eax,(%esp)
0864d6a9 +0x063:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0864d6ae +0x068:  mov    %eax,(%esp)
0864d6b1 +0x06b:  call   08110c7a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x18c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x18c
0864d6b6 +0x070:  mov    0xc(%ebp),%edx
0864d6b9 +0x073:  mov    %eax,0x4040(%edx)
0864d6bf +0x079:  mov    0xc(%ebp),%eax
0864d6c2 +0x07c:  lea    0x5949(%eax),%ebx
0864d6c8 +0x082:  mov    0x8(%ebp),%eax
0864d6cb +0x085:  mov    %eax,(%esp)
0864d6ce +0x088:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0864d6d3 +0x08d:  movl   $0x4a58,0xc(%esp)
0864d6db +0x095:  mov    %ebx,0x8(%esp)
0864d6df +0x099:  movl   $0x1,0x4(%esp)
0864d6e7 +0x0a1:  mov    %eax,(%esp)
0864d6ea +0x0a4:  call   084fb222 <_ZNK10CInventory12GetInvenDataEiPvi>  ; CInventory::GetInvenData(int, void*, int) const
0864d6ef +0x0a9:  mov    0xc(%ebp),%eax
0864d6f2 +0x0ac:  lea    0x4044(%eax),%ebx
0864d6f8 +0x0b2:  mov    0x8(%ebp),%eax
0864d6fb +0x0b5:  mov    %eax,(%esp)
0864d6fe +0x0b8:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0864d703 +0x0bd:  movl   $0x1905,0xc(%esp)
0864d70b +0x0c5:  mov    %ebx,0x8(%esp)
0864d70f +0x0c9:  movl   $0x2,0x4(%esp)
0864d717 +0x0d1:  mov    %eax,(%esp)
0864d71a +0x0d4:  call   084fb222 <_ZNK10CInventory12GetInvenDataEiPvi>  ; CInventory::GetInvenData(int, void*, int) const
0864d71f +0x0d9:  mov    0xc(%ebp),%eax
0864d722 +0x0dc:  lea    0xeed1(%eax),%ebx
0864d728 +0x0e2:  mov    0x8(%ebp),%eax
0864d72b +0x0e5:  mov    %eax,(%esp)
0864d72e +0x0e8:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0864d733 +0x0ed:  movl   $0x39aa,0xc(%esp)
0864d73b +0x0f5:  mov    %ebx,0x8(%esp)
0864d73f +0x0f9:  movl   $0x3,0x4(%esp)
0864d747 +0x101:  mov    %eax,(%esp)
0864d74a +0x104:  call   084fb222 <_ZNK10CInventory12GetInvenDataEiPvi>  ; CInventory::GetInvenData(int, void*, int) const
0864d74f +0x109:  mov    0x8(%ebp),%eax
0864d752 +0x10c:  mov    %eax,(%esp)
0864d755 +0x10f:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0864d75a +0x114:  add    $0x1c,%eax
0864d75d +0x117:  mov    0xc(%ebp),%edx
0864d760 +0x11a:  add    $0xa3a1,%edx
0864d766 +0x120:  movl   $0x53e,0x8(%esp)
0864d76e +0x128:  mov    %eax,0x4(%esp)
0864d772 +0x12c:  mov    %edx,(%esp)
0864d775 +0x12f:  call   0807d8a0 <_init+0x198>
0864d77a +0x134:  mov    0x8(%ebp),%eax
0864d77d +0x137:  mov    %eax,(%esp)
0864d780 +0x13a:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0864d785 +0x13f:  lea    0x55a(%eax),%edx
0864d78b +0x145:  mov    0xc(%ebp),%eax
0864d78e +0x148:  add    $&_ZL14gUnicodeBuffer+0x825b,%eax
0864d793 +0x14d:  movl   $0xf4,0x8(%esp)
0864d79b +0x155:  mov    %edx,0x4(%esp)
0864d79f +0x159:  mov    %eax,(%esp)
0864d7a2 +0x15c:  call   0807d8a0 <_init+0x198>
0864d7a7 +0x161:  mov    0xc(%ebp),%eax
0864d7aa +0x164:  lea    &_ZL14gUnicodeBuffer+0xa22c(%eax),%ebx
0864d7b0 +0x16a:  mov    0x8(%ebp),%eax
0864d7b3 +0x16d:  mov    %eax,(%esp)
0864d7b6 +0x170:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0864d7bb +0x175:  mov    %ebx,0x4(%esp)
0864d7bf +0x179:  mov    %eax,(%esp)
0864d7c2 +0x17c:  call   0869498a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x11df>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x11df
0864d7c7 +0x181:  mov    0x8(%ebp),%eax
0864d7ca +0x184:  mov    %eax,(%esp)
0864d7cd +0x187:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
0864d7d2 +0x18c:  mov    %eax,(%esp)
0864d7d5 +0x18f:  call   0822d708 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2db2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2db2
0864d7da +0x194:  mov    0xc(%ebp),%edx
0864d7dd +0x197:  mov    %eax,0xa8e0(%edx)
0864d7e3 +0x19d:  mov    0xc(%ebp),%eax
0864d7e6 +0x1a0:  lea    0xa8e4(%eax),%ebx
0864d7ec +0x1a6:  mov    0x8(%ebp),%eax
0864d7ef +0x1a9:  mov    %eax,(%esp)
0864d7f2 +0x1ac:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
0864d7f7 +0x1b1:  mov    %ebx,0x4(%esp)
0864d7fb +0x1b5:  mov    %eax,(%esp)
0864d7fe +0x1b8:  call   0850b164 <_ZNK6CCargo9get_cargoEPv>  ; CCargo::get_cargo(void*) const
0864d803 +0x1bd:  mov    0x8(%ebp),%eax
0864d806 +0x1c0:  mov    %eax,(%esp)
0864d809 +0x1c3:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0864d80e +0x1c8:  add    $0x658,%eax
0864d813 +0x1cd:  mov    %eax,(%esp)
0864d816 +0x1d0:  call   0817fef0 <_ZNK10AvatarCoin3GetEv>  ; AvatarCoin::Get() const
0864d81b +0x1d5:  mov    0xc(%ebp),%edx
0864d81e +0x1d8:  mov    %eax,&_ZL14gUnicodeBuffer+0xa254(%edx)
0864d824 +0x1de:  mov    0x8(%ebp),%eax
0864d827 +0x1e1:  mov    %eax,(%esp)
0864d82a +0x1e4:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0864d82f +0x1e9:  mov    %eax,(%esp)
0864d832 +0x1ec:  call   0822d6fc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2da6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2da6
0864d837 +0x1f1:  mov    %eax,%edx
0864d839 +0x1f3:  mov    0xc(%ebp),%eax
0864d83c +0x1f6:  mov    %edx,&_ZL14gUnicodeBuffer+0xae10(%eax)
0864d842 +0x1fc:  mov    $0x1,%eax
0864d847 +0x201:  add    $0x14,%esp
0864d84a +0x204:  pop    %ebx
0864d84b +0x205:  pop    %ebp
0864d84c +0x206:  ret
0864d84d +0x207:  nop
```

## 反编译 C

```c
// CUser::GetInventory @ 0x864d646

/* CUser::GetInventory(SIG_LOAD_INVENTORY*) */

undefined4 __thiscall CUser::GetInventory(CUser *this,SIG_LOAD_INVENTORY *param_1)

{
  CInventory *pCVar1;
  undefined4 uVar2;
  int iVar3;
  CCargo *pCVar4;
  
  pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
  uVar2 = CInventory::get_money(pCVar1);
  *(undefined4 *)(param_1 + 0x4034) = uVar2;
  pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
  uVar2 = CInventory::GetCoin(pCVar1);
  *(undefined4 *)(param_1 + 0x4038) = uVar2;
  pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
  uVar2 = CInventory::GetPayCoin(pCVar1);
  *(undefined4 *)(param_1 + 0x403c) = uVar2;
  pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
  uVar2 = CInventory::GetEventCoin(pCVar1);
  *(undefined4 *)(param_1 + 0x4040) = uVar2;
  pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
  CInventory::GetInvenData(pCVar1,1,param_1 + 0x5949,0x4a58);
  pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
  CInventory::GetInvenData(pCVar1,2,param_1 + 0x4044,0x1905);
  pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
  CInventory::GetInvenData(pCVar1,3,param_1 + 0xeed1,0x39aa);
  iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
  memcpy(param_1 + 0xa3a1,(void *)(iVar3 + 0x1c),0x53e);
  iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
  memcpy(param_1 + 0x12787,(void *)(iVar3 + 0x55a),0xf4);
  pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
  CInventory::GetClearAvatar(pCVar1,(ulong *)(param_1 + 0x14758));
  pCVar4 = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)this);
  uVar2 = CCargo::GetCapacity(pCVar4);
  *(undefined4 *)(param_1 + 0xa8e0) = uVar2;
  pCVar4 = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)this);
  CCargo::get_cargo(pCVar4,param_1 + 0xa8e4);
  iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
  uVar2 = AvatarCoin::Get((AvatarCoin *)(iVar3 + 0x658));
  *(undefined4 *)(param_1 + 0x14780) = uVar2;
  pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
  uVar2 = CInventory::get_inventory_capacity(pCVar1);
  *(undefined4 *)(param_1 + 0x1533c) = uVar2;
  return 1;
}
```
