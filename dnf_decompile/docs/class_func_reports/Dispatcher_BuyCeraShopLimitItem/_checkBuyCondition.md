# _checkBuyCondition

`_ZNK31Dispatcher_BuyCeraShopLimitItem18_checkBuyConditionEP5CUserPK17CItemLimitEdition`

`Dispatcher_BuyCeraShopLimitItem::_checkBuyCondition(CUser*, CItemLimitEdition const*) const`

| 类 | 地址 |
|---|---|
| `Dispatcher_BuyCeraShopLimitItem` | `0x0821f7cc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0821f7cc  _ZNK31Dispatcher_BuyCeraShopLimitItem18_checkBuyConditionEP5CUserPK17CItemLimitEdition
#           Dispatcher_BuyCeraShopLimitItem::_checkBuyCondition(CUser*, CItemLimitEdition const*) const
# range [0x0821f7cc, 0x0821f9b9]
0821f7cc +0x000:  push   %ebp
0821f7cd +0x001:  mov    %esp,%ebp
0821f7cf +0x003:  push   %ebx
0821f7d0 +0x004:  sub    $0x14,%esp
0821f7d3 +0x007:  mov    0x10(%ebp),%eax
0821f7d6 +0x00a:  mov    %eax,(%esp)
0821f7d9 +0x00d:  call   0822cb1c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x21c6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x21c6
0821f7de +0x012:  cmp    $0xa,%eax
0821f7e1 +0x015:  setle  %al
0821f7e4 +0x018:  test   %al,%al
0821f7e6 +0x01a:  je     0821f813 <+0x47>
0821f7e8 +0x01c:  mov    0xc(%ebp),%eax
0821f7eb +0x01f:  mov    %eax,(%esp)
0821f7ee +0x022:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0821f7f3 +0x027:  mov    %eax,%ebx
0821f7f5 +0x029:  mov    0x10(%ebp),%eax
0821f7f8 +0x02c:  mov    %eax,(%esp)
0821f7fb +0x02f:  call   0822cb1c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x21c6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x21c6
0821f800 +0x034:  cmp    %eax,%ebx
0821f802 +0x036:  setne  %al
0821f805 +0x039:  test   %al,%al
0821f807 +0x03b:  je     0821f813 <+0x47>
0821f809 +0x03d:  mov    $0x7,%eax
0821f80e +0x042:  jmp    0821f9b4 <+0x1e8>
0821f813 +0x047:  mov    0x10(%ebp),%eax
0821f816 +0x04a:  mov    %eax,(%esp)
0821f819 +0x04d:  call   0822cb28 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x21d2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x21d2
0821f81e +0x052:  test   %ax,%ax
0821f821 +0x055:  je     0821f847 <+0x7b>
0821f823 +0x057:  mov    0x10(%ebp),%eax
0821f826 +0x05a:  mov    %eax,(%esp)
0821f829 +0x05d:  call   0822cb28 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x21d2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x21d2
0821f82e +0x062:  movzwl %ax,%ebx
0821f831 +0x065:  mov    0xc(%ebp),%eax
0821f834 +0x068:  mov    %eax,(%esp)
0821f837 +0x06b:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0821f83c +0x070:  cmp    %eax,%ebx
0821f83e +0x072:  jle    0821f847 <+0x7b>
0821f840 +0x074:  mov    $0x1,%eax
0821f845 +0x079:  jmp    0821f84c <+0x80>
0821f847 +0x07b:  mov    $0x0,%eax
0821f84c +0x080:  test   %al,%al
0821f84e +0x082:  je     0821f85a <+0x8e>
0821f850 +0x084:  mov    $0x7,%eax
0821f855 +0x089:  jmp    0821f9b4 <+0x1e8>
0821f85a +0x08e:  mov    0x10(%ebp),%eax
0821f85d +0x091:  mov    %eax,(%esp)
0821f860 +0x094:  call   0822cb34 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x21de>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x21de
0821f865 +0x099:  test   %ax,%ax
0821f868 +0x09c:  je     0821f88e <+0xc2>
0821f86a +0x09e:  mov    0x10(%ebp),%eax
0821f86d +0x0a1:  mov    %eax,(%esp)
0821f870 +0x0a4:  call   0822cb34 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x21de>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x21de
0821f875 +0x0a9:  movzwl %ax,%ebx
0821f878 +0x0ac:  mov    0xc(%ebp),%eax
0821f87b +0x0af:  mov    %eax,(%esp)
0821f87e +0x0b2:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0821f883 +0x0b7:  cmp    %eax,%ebx
0821f885 +0x0b9:  jge    0821f88e <+0xc2>
0821f887 +0x0bb:  mov    $0x1,%eax
0821f88c +0x0c0:  jmp    0821f893 <+0xc7>
0821f88e +0x0c2:  mov    $0x0,%eax
0821f893 +0x0c7:  test   %al,%al
0821f895 +0x0c9:  je     0821f8a1 <+0xd5>
0821f897 +0x0cb:  mov    $0x7,%eax
0821f89c +0x0d0:  jmp    0821f9b4 <+0x1e8>
0821f8a1 +0x0d5:  mov    0x10(%ebp),%eax
0821f8a4 +0x0d8:  mov    %eax,(%esp)
0821f8a7 +0x0db:  call   0822cb40 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x21ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x21ea
0821f8ac +0x0e0:  test   %eax,%eax
0821f8ae +0x0e2:  je     0821f8d3 <+0x107>
0821f8b0 +0x0e4:  mov    0x10(%ebp),%eax
0821f8b3 +0x0e7:  mov    %eax,(%esp)
0821f8b6 +0x0ea:  call   0822cb40 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x21ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x21ea
0821f8bb +0x0ef:  mov    %eax,%ebx
0821f8bd +0x0f1:  mov    0xc(%ebp),%eax
0821f8c0 +0x0f4:  mov    %eax,(%esp)
0821f8c3 +0x0f7:  call   0822f202 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48ac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48ac
0821f8c8 +0x0fc:  cmp    %eax,%ebx
0821f8ca +0x0fe:  jle    0821f8d3 <+0x107>
0821f8cc +0x100:  mov    $0x1,%eax
0821f8d1 +0x105:  jmp    0821f8d8 <+0x10c>
0821f8d3 +0x107:  mov    $0x0,%eax
0821f8d8 +0x10c:  test   %al,%al
0821f8da +0x10e:  je     0821f8e6 <+0x11a>
0821f8dc +0x110:  mov    $0x7,%eax
0821f8e1 +0x115:  jmp    0821f9b4 <+0x1e8>
0821f8e6 +0x11a:  mov    0x10(%ebp),%eax
0821f8e9 +0x11d:  mov    %eax,(%esp)
0821f8ec +0x120:  call   0822cb4c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x21f6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x21f6
0821f8f1 +0x125:  test   %eax,%eax
0821f8f3 +0x127:  je     0821f918 <+0x14c>
0821f8f5 +0x129:  mov    0x10(%ebp),%eax
0821f8f8 +0x12c:  mov    %eax,(%esp)
0821f8fb +0x12f:  call   0822cb4c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x21f6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x21f6
0821f900 +0x134:  mov    %eax,%ebx
0821f902 +0x136:  mov    0xc(%ebp),%eax
0821f905 +0x139:  mov    %eax,(%esp)
0821f908 +0x13c:  call   0822f202 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48ac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48ac
0821f90d +0x141:  cmp    %eax,%ebx
0821f90f +0x143:  jge    0821f918 <+0x14c>
0821f911 +0x145:  mov    $0x1,%eax
0821f916 +0x14a:  jmp    0821f91d <+0x151>
0821f918 +0x14c:  mov    $0x0,%eax
0821f91d +0x151:  test   %al,%al
0821f91f +0x153:  je     0821f92b <+0x15f>
0821f921 +0x155:  mov    $0x7,%eax
0821f926 +0x15a:  jmp    0821f9b4 <+0x1e8>
0821f92b +0x15f:  mov    0x10(%ebp),%eax
0821f92e +0x162:  mov    %eax,(%esp)
0821f931 +0x165:  call   0822cb58 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2202>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2202
0821f936 +0x16a:  test   %eax,%eax
0821f938 +0x16c:  je     0821f95d <+0x191>
0821f93a +0x16e:  mov    0x10(%ebp),%eax
0821f93d +0x171:  mov    %eax,(%esp)
0821f940 +0x174:  call   0822cb58 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2202>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2202
0821f945 +0x179:  mov    %eax,%ebx
0821f947 +0x17b:  mov    0xc(%ebp),%eax
0821f94a +0x17e:  mov    %eax,(%esp)
0821f94d +0x181:  call   0822fde6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5490>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5490
0821f952 +0x186:  cmp    %eax,%ebx
0821f954 +0x188:  jle    0821f95d <+0x191>
0821f956 +0x18a:  mov    $0x1,%eax
0821f95b +0x18f:  jmp    0821f962 <+0x196>
0821f95d +0x191:  mov    $0x0,%eax
0821f962 +0x196:  test   %al,%al
0821f964 +0x198:  je     0821f96d <+0x1a1>
0821f966 +0x19a:  mov    $0x7,%eax
0821f96b +0x19f:  jmp    0821f9b4 <+0x1e8>
0821f96d +0x1a1:  mov    0x10(%ebp),%eax
0821f970 +0x1a4:  mov    %eax,(%esp)
0821f973 +0x1a7:  call   0822cb64 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x220e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x220e
0821f978 +0x1ac:  test   %eax,%eax
0821f97a +0x1ae:  je     0821f99f <+0x1d3>
0821f97c +0x1b0:  mov    0x10(%ebp),%eax
0821f97f +0x1b3:  mov    %eax,(%esp)
0821f982 +0x1b6:  call   0822cb64 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x220e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x220e
0821f987 +0x1bb:  mov    %eax,%ebx
0821f989 +0x1bd:  mov    0xc(%ebp),%eax
0821f98c +0x1c0:  mov    %eax,(%esp)
0821f98f +0x1c3:  call   0822fde6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5490>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5490
0821f994 +0x1c8:  cmp    %eax,%ebx
0821f996 +0x1ca:  jge    0821f99f <+0x1d3>
0821f998 +0x1cc:  mov    $0x1,%eax
0821f99d +0x1d1:  jmp    0821f9a4 <+0x1d8>
0821f99f +0x1d3:  mov    $0x0,%eax
0821f9a4 +0x1d8:  test   %al,%al
0821f9a6 +0x1da:  je     0821f9af <+0x1e3>
0821f9a8 +0x1dc:  mov    $0x7,%eax
0821f9ad +0x1e1:  jmp    0821f9b4 <+0x1e8>
0821f9af +0x1e3:  mov    $0x0,%eax
0821f9b4 +0x1e8:  add    $0x14,%esp
0821f9b7 +0x1eb:  pop    %ebx
0821f9b8 +0x1ec:  pop    %ebp
0821f9b9 +0x1ed:  ret
```

## 反编译 C

```c
// Dispatcher_BuyCeraShopLimitItem::_checkBuyCondition @ 0x821f7cc

/* Dispatcher_BuyCeraShopLimitItem::_checkBuyCondition(CUser*, CItemLimitEdition const*) const */

undefined4 __thiscall
Dispatcher_BuyCeraShopLimitItem::_checkBuyCondition
          (Dispatcher_BuyCeraShopLimitItem *this,CUser *param_1,CItemLimitEdition *param_2)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  
  iVar3 = CItemLimitEdition::getCondCharacJob(param_2);
  if (iVar3 < 0xb) {
    iVar3 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
    iVar4 = CItemLimitEdition::getCondCharacJob(param_2);
    if (iVar3 != iVar4) {
      return 7;
    }
  }
  sVar2 = CItemLimitEdition::getCondCharacLevelBegin(param_2);
  if (sVar2 == 0) {
LAB_0821f847:
    bVar1 = false;
  }
  else {
    uVar5 = CItemLimitEdition::getCondCharacLevelBegin(param_2);
    iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    if ((int)(uVar5 & 0xffff) <= iVar3) goto LAB_0821f847;
    bVar1 = true;
  }
  if (bVar1) {
    return 7;
  }
  sVar2 = CItemLimitEdition::getCondCharacLevelEnd(param_2);
  if (sVar2 == 0) {
LAB_0821f88e:
    bVar1 = false;
  }
  else {
    uVar5 = CItemLimitEdition::getCondCharacLevelEnd(param_2);
    iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    if (iVar3 <= (int)(uVar5 & 0xffff)) goto LAB_0821f88e;
    bVar1 = true;
  }
  if (bVar1) {
    return 7;
  }
  iVar3 = CItemLimitEdition::getCondCharacCreateTimeBegin(param_2);
  if (iVar3 == 0) {
LAB_0821f8d3:
    bVar1 = false;
  }
  else {
    iVar3 = CItemLimitEdition::getCondCharacCreateTimeBegin(param_2);
    iVar4 = CUserCharacInfo::getCurCharacCreateTime((CUserCharacInfo *)param_1);
    if (iVar3 <= iVar4) goto LAB_0821f8d3;
    bVar1 = true;
  }
  if (bVar1) {
    return 7;
  }
  iVar3 = CItemLimitEdition::getCondCharacCreateTimeEnd(param_2);
  if (iVar3 == 0) {
LAB_0821f918:
    bVar1 = false;
  }
  else {
    iVar3 = CItemLimitEdition::getCondCharacCreateTimeEnd(param_2);
    iVar4 = CUserCharacInfo::getCurCharacCreateTime((CUserCharacInfo *)param_1);
    if (iVar4 <= iVar3) goto LAB_0821f918;
    bVar1 = true;
  }
  if (bVar1) {
    return 7;
  }
  iVar3 = CItemLimitEdition::getCondAccCreateTimeBegin(param_2);
  if (iVar3 == 0) {
LAB_0821f95d:
    bVar1 = false;
  }
  else {
    iVar3 = CItemLimitEdition::getCondAccCreateTimeBegin(param_2);
    iVar4 = CUser::getRegTime(param_1);
    if (iVar3 <= iVar4) goto LAB_0821f95d;
    bVar1 = true;
  }
  if (bVar1) {
    return 7;
  }
  iVar3 = CItemLimitEdition::getCondAccCreateTimeEnd(param_2);
  if (iVar3 != 0) {
    iVar3 = CItemLimitEdition::getCondAccCreateTimeEnd(param_2);
    iVar4 = CUser::getRegTime(param_1);
    if (iVar3 < iVar4) {
      bVar1 = true;
      goto LAB_0821f9a4;
    }
  }
  bVar1 = false;
LAB_0821f9a4:
  if (bVar1) {
    uVar6 = 7;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}
```
