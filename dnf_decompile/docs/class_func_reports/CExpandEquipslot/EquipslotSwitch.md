# EquipslotSwitch

`_ZN16CExpandEquipslot15EquipslotSwitchEP5CUserccc`

`CExpandEquipslot::EquipslotSwitch(CUser*, char, char, char)`

| 类 | 地址 |
|---|---|
| `CExpandEquipslot` | `0x0849943e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849943e  _ZN16CExpandEquipslot15EquipslotSwitchEP5CUserccc
#           CExpandEquipslot::EquipslotSwitch(CUser*, char, char, char)
# range [0x0849943e, 0x0849983d]
0849943e +0x000:  push   %ebp
0849943f +0x001:  mov    %esp,%ebp
08499441 +0x003:  push   %esi
08499442 +0x004:  push   %ebx
08499443 +0x005:  sub    $0x430,%esp
08499449 +0x00b:  mov    0x10(%ebp),%ecx
0849944c +0x00e:  mov    0x14(%ebp),%edx
0849944f +0x011:  mov    0x18(%ebp),%eax
08499452 +0x014:  mov    %cl,-0x40c(%ebp)
08499458 +0x01a:  mov    %dl,-0x410(%ebp)
0849945e +0x020:  mov    %al,-0x414(%ebp)
08499464 +0x026:  cmpl   $0x0,0xc(%ebp)
08499468 +0x02a:  jne    084994a0 <+0x62>
0849946a +0x02c:  movl   $"Fail Equipslot Switch : pUser is NULL",0x10(%esp)
08499472 +0x034:  movl   $0x44,0xc(%esp)
0849947a +0x03c:  movl   $&_ZZN16CExpandEquipslot15EquipslotSwitchEP5CUsercccE19__PRETTY_FUNCTION__,0x8(%esp)
08499482 +0x044:  movl   $"ExpandEquipslot.cpp",0x4(%esp)
0849948a +0x04c:  movl   $0x1,(%esp)
08499491 +0x053:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08499496 +0x058:  mov    $0x1,%eax
0849949b +0x05d:  jmp    08499833 <+0x3f5>
084994a0 +0x062:  mov    0xc(%ebp),%eax
084994a3 +0x065:  mov    %eax,(%esp)
084994a6 +0x068:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084994ab +0x06d:  cmp    $0x2,%eax
084994ae +0x070:  setle  %al
084994b1 +0x073:  test   %al,%al
084994b3 +0x075:  je     084994eb <+0xad>
084994b5 +0x077:  movl   $"Fail Equipslot Switch : pUser is not valid state",0x10(%esp)
084994bd +0x07f:  movl   $0x4a,0xc(%esp)
084994c5 +0x087:  movl   $&_ZZN16CExpandEquipslot15EquipslotSwitchEP5CUsercccE19__PRETTY_FUNCTION__,0x8(%esp)
084994cd +0x08f:  movl   $"ExpandEquipslot.cpp",0x4(%esp)
084994d5 +0x097:  movl   $0x1,(%esp)
084994dc +0x09e:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084994e1 +0x0a3:  mov    $0x13,%eax
084994e6 +0x0a8:  jmp    08499833 <+0x3f5>
084994eb +0x0ad:  mov    0xc(%ebp),%eax
084994ee +0x0b0:  mov    %eax,(%esp)
084994f1 +0x0b3:  call   0822fa7c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5126>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5126
084994f6 +0x0b8:  mov    %al,-0x1e(%ebp)
084994f9 +0x0bb:  mov    0xc(%ebp),%eax
084994fc +0x0be:  mov    %eax,(%esp)
084994ff +0x0c1:  call   0822faa0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x514a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x514a
08499504 +0x0c6:  mov    %al,-0x1d(%ebp)
08499507 +0x0c9:  movzbl -0x1e(%ebp),%eax
0849950b +0x0cd:  cmp    -0x410(%ebp),%al
08499511 +0x0d3:  jne    0849951f <+0xe1>
08499513 +0x0d5:  movzbl -0x1d(%ebp),%eax
08499517 +0x0d9:  cmp    -0x414(%ebp),%al
0849951d +0x0df:  je     08499529 <+0xeb>
0849951f +0x0e1:  mov    $0x1,%eax
08499524 +0x0e6:  jmp    08499833 <+0x3f5>
08499529 +0x0eb:  movl   $0x2,0x4(%esp)
08499531 +0x0f3:  mov    0xc(%ebp),%eax
08499534 +0x0f6:  mov    %eax,(%esp)
08499537 +0x0f9:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
0849953c +0x0fe:  mov    %eax,-0x1c(%ebp)
0849953f +0x101:  mov    -0x1c(%ebp),%eax
08499542 +0x104:  mov    %eax,(%esp)
08499545 +0x107:  call   0849aaa4 <_GLOBAL__I__ZN16CExpandEquipslotC2Ev+0x1c>  ; global constructors keyed to CExpandEquipslot::CExpandEquipslot()+0x1c
0849954a +0x10c:  mov    %eax,-0x18(%ebp)
0849954d +0x10f:  lea    -0xa4(%ebp),%eax
08499553 +0x115:  mov    -0x18(%ebp),%edx
08499556 +0x118:  mov    %edx,0x4(%esp)
0849955a +0x11c:  mov    %eax,(%esp)
0849955d +0x11f:  call   0849aae4 <_GLOBAL__I__ZN16CExpandEquipslotC2Ev+0x5c>  ; global constructors keyed to CExpandEquipslot::CExpandEquipslot()+0x5c
08499562 +0x124:  sub    $0x4,%esp
08499565 +0x127:  jmp    084995db <+0x19d>
08499567 +0x129:  lea    -0xa4(%ebp),%eax
0849956d +0x12f:  mov    %eax,(%esp)
08499570 +0x132:  call   0849ab8e <_GLOBAL__I__ZN16CExpandEquipslotC2Ev+0x106>  ; global constructors keyed to CExpandEquipslot::CExpandEquipslot()+0x106
08499575 +0x137:  mov    %eax,-0x14(%ebp)
08499578 +0x13a:  mov    -0x14(%ebp),%eax
0849957b +0x13d:  movzwl 0x2(%eax),%eax
0849957f +0x141:  cmp    $0x9,%ax
08499583 +0x145:  jbe    084995b8 <+0x17a>
08499585 +0x147:  mov    -0x14(%ebp),%eax
08499588 +0x14a:  movzwl 0x2(%eax),%eax
0849958c +0x14e:  cmp    $0x15,%ax
08499590 +0x152:  ja     084995b8 <+0x17a>
08499592 +0x154:  mov    -0x14(%ebp),%eax
08499595 +0x157:  movzbl 0x1(%eax),%eax
08499599 +0x15b:  cmp    $0x3,%al
0849959b +0x15d:  jne    084995a6 <+0x168>
0849959d +0x15f:  mov    -0x14(%ebp),%eax
084995a0 +0x162:  movb   $0x12,0x1(%eax)
084995a4 +0x166:  jmp    084995b8 <+0x17a>
084995a6 +0x168:  mov    -0x14(%ebp),%eax
084995a9 +0x16b:  movzbl 0x1(%eax),%eax
084995ad +0x16f:  cmp    $0x12,%al
084995af +0x171:  jne    084995b8 <+0x17a>
084995b1 +0x173:  mov    -0x14(%ebp),%eax
084995b4 +0x176:  movb   $0x3,0x1(%eax)
084995b8 +0x17a:  lea    -0x9c(%ebp),%eax
084995be +0x180:  movl   $0x0,0x8(%esp)
084995c6 +0x188:  lea    -0xa4(%ebp),%edx
084995cc +0x18e:  mov    %edx,0x4(%esp)
084995d0 +0x192:  mov    %eax,(%esp)
084995d3 +0x195:  call   0849ab5a <_GLOBAL__I__ZN16CExpandEquipslotC2Ev+0xd2>  ; global constructors keyed to CExpandEquipslot::CExpandEquipslot()+0xd2
084995d8 +0x19a:  sub    $0x4,%esp
084995db +0x19d:  lea    -0xa0(%ebp),%eax
084995e1 +0x1a3:  mov    -0x18(%ebp),%edx
084995e4 +0x1a6:  mov    %edx,0x4(%esp)
084995e8 +0x1aa:  mov    %eax,(%esp)
084995eb +0x1ad:  call   0849ab08 <_GLOBAL__I__ZN16CExpandEquipslotC2Ev+0x80>  ; global constructors keyed to CExpandEquipslot::CExpandEquipslot()+0x80
084995f0 +0x1b2:  sub    $0x4,%esp
084995f3 +0x1b5:  lea    -0xa0(%ebp),%eax
084995f9 +0x1bb:  mov    %eax,0x4(%esp)
084995fd +0x1bf:  lea    -0xa4(%ebp),%eax
08499603 +0x1c5:  mov    %eax,(%esp)
08499606 +0x1c8:  call   0849ab2e <_GLOBAL__I__ZN16CExpandEquipslotC2Ev+0xa6>  ; global constructors keyed to CExpandEquipslot::CExpandEquipslot()+0xa6
0849960b +0x1cd:  test   %al,%al
0849960d +0x1cf:  jne    08499567 <+0x129>
08499613 +0x1d5:  cmpb   $0x0,-0x40c(%ebp)
0849961a +0x1dc:  jne    0849982e <+0x3f0>
08499620 +0x1e2:  mov    0xc(%ebp),%eax
08499623 +0x1e5:  mov    %eax,(%esp)
08499626 +0x1e8:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0849962b +0x1ed:  mov    %eax,-0x10(%ebp)
0849962e +0x1f0:  lea    -0x3fa(%ebp),%eax
08499634 +0x1f6:  mov    %eax,%ebx
08499636 +0x1f8:  mov    $0xb,%esi
0849963b +0x1fd:  jmp    0849964b <+0x20d>
0849963d +0x1ff:  mov    %ebx,(%esp)
08499640 +0x202:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08499645 +0x207:  add    $0x3d,%ebx
08499648 +0x20a:  sub    $0x1,%esi
0849964b +0x20d:  cmp    $0xffffffff,%esi
0849964e +0x210:  setne  %al
08499651 +0x213:  test   %al,%al
08499653 +0x215:  jne    0849963d <+0x1ff>
08499655 +0x217:  lea    -0xe1(%ebp),%eax
0849965b +0x21d:  mov    %eax,(%esp)
0849965e +0x220:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08499663 +0x225:  lea    -0x11e(%ebp),%eax
08499669 +0x22b:  mov    %eax,(%esp)
0849966c +0x22e:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08499671 +0x233:  lea    -0x98(%ebp),%eax
08499677 +0x239:  movl   $0xb,0xc(%esp)
0849967f +0x241:  movl   $0x0,0x8(%esp)
08499687 +0x249:  mov    -0x10(%ebp),%edx
0849968a +0x24c:  mov    %edx,0x4(%esp)
0849968e +0x250:  mov    %eax,(%esp)
08499691 +0x253:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08499696 +0x258:  sub    $0x4,%esp
08499699 +0x25b:  lea    -0x98(%ebp),%eax
0849969f +0x261:  mov    %eax,0x4(%esp)
084996a3 +0x265:  lea    -0xe1(%ebp),%eax
084996a9 +0x26b:  mov    %eax,(%esp)
084996ac +0x26e:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
084996b1 +0x273:  mov    0x8(%ebp),%eax
084996b4 +0x276:  add    $0x42,%eax
084996b7 +0x279:  mov    %eax,0x4(%esp)
084996bb +0x27d:  lea    -0x11e(%ebp),%eax
084996c1 +0x283:  mov    %eax,(%esp)
084996c4 +0x286:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
084996c9 +0x28b:  movl   $0x2dc,0xc(%esp)
084996d1 +0x293:  lea    -0x3fa(%ebp),%eax
084996d7 +0x299:  mov    %eax,0x8(%esp)
084996db +0x29d:  movl   $0x5,0x4(%esp)
084996e3 +0x2a5:  mov    -0x10(%ebp),%eax
084996e6 +0x2a8:  mov    %eax,(%esp)
084996e9 +0x2ab:  call   084fb222 <_ZNK10CInventory12GetInvenDataEiPvi>  ; CInventory::GetInvenData(int, void*, int) const
084996ee +0x2b0:  mov    0x8(%ebp),%eax
084996f1 +0x2b3:  add    $0x5,%eax
084996f4 +0x2b6:  movl   $0x2dc,0xc(%esp)
084996fc +0x2be:  mov    %eax,0x8(%esp)
08499700 +0x2c2:  movl   $0x5,0x4(%esp)
08499708 +0x2ca:  mov    -0x10(%ebp),%eax
0849970b +0x2cd:  mov    %eax,(%esp)
0849970e +0x2d0:  call   084fb11a <_ZN10CInventory12SetInvenDataEiPvi>  ; CInventory::SetInvenData(int, void*, int)
08499713 +0x2d5:  movl   $0x2dc,0xc(%esp)
0849971b +0x2dd:  lea    -0x3fa(%ebp),%eax
08499721 +0x2e3:  mov    %eax,0x8(%esp)
08499725 +0x2e7:  movl   $0x1,0x4(%esp)
0849972d +0x2ef:  mov    0x8(%ebp),%eax
08499730 +0x2f2:  mov    %eax,(%esp)
08499733 +0x2f5:  call   08499986 <_ZN16CExpandEquipslot18SetExpandEquipslotEiPvi>  ; CExpandEquipslot::SetExpandEquipslot(int, void*, int)
08499738 +0x2fa:  mov    -0x10(%ebp),%eax
0849973b +0x2fd:  lea    0x2bb(%eax),%edx
08499741 +0x303:  lea    -0xe1(%ebp),%eax
08499747 +0x309:  mov    %eax,0x4(%esp)
0849974b +0x30d:  mov    %edx,(%esp)
0849974e +0x310:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
08499753 +0x315:  mov    0x8(%ebp),%eax
08499756 +0x318:  lea    0x42(%eax),%edx
08499759 +0x31b:  lea    -0x11e(%ebp),%eax
0849975f +0x321:  mov    %eax,0x4(%esp)
08499763 +0x325:  mov    %edx,(%esp)
08499766 +0x328:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
0849976b +0x32d:  mov    0xc(%ebp),%eax
0849976e +0x330:  mov    %eax,(%esp)
08499771 +0x333:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
08499776 +0x338:  mov    %eax,-0xc(%ebp)
08499779 +0x33b:  cmpl   $0x0,-0xc(%ebp)
0849977d +0x33f:  je     0849978a <+0x34c>
0849977f +0x341:  mov    -0xc(%ebp),%eax
08499782 +0x344:  mov    %eax,(%esp)
08499785 +0x347:  call   085b916e <_ZN6CParty33Reset_party_overlapped_drop_ratioEv>  ; CParty::Reset_party_overlapped_drop_ratio()
0849978a +0x34c:  lea    -0x5b(%ebp),%eax
0849978d +0x34f:  movl   $0xa,0xc(%esp)
08499795 +0x357:  movl   $0x0,0x8(%esp)
0849979d +0x35f:  mov    -0x10(%ebp),%edx
084997a0 +0x362:  mov    %edx,0x4(%esp)
084997a4 +0x366:  mov    %eax,(%esp)
084997a7 +0x369:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
084997ac +0x36e:  sub    $0x4,%esp
084997af +0x371:  mov    -0x59(%ebp),%eax
084997b2 +0x374:  test   %eax,%eax
084997b4 +0x376:  jne    084997c0 <+0x382>
084997b6 +0x378:  mov    0x8(%ebp),%eax
084997b9 +0x37b:  mov    0x7(%eax),%eax
084997bc +0x37e:  test   %eax,%eax
084997be +0x380:  je     084997c7 <+0x389>
084997c0 +0x382:  mov    $0x1,%eax
084997c5 +0x387:  jmp    084997cc <+0x38e>
084997c7 +0x389:  mov    $0x0,%eax
084997cc +0x38e:  test   %al,%al
084997ce +0x390:  je     084997f3 <+0x3b5>
084997d0 +0x392:  mov    0xc(%ebp),%eax
084997d3 +0x395:  add    $0x796f4,%eax
084997d8 +0x39a:  mov    %eax,(%esp)
084997db +0x39d:  call   0822fbda <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5284>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5284
084997e0 +0x3a2:  movl   $0xa,0x4(%esp)
084997e8 +0x3aa:  mov    0xc(%ebp),%eax
084997eb +0x3ad:  mov    %eax,(%esp)
084997ee +0x3b0:  call   0865dd14 <_ZN5CUser10send_equipEi>  ; CUser::send_equip(int)
084997f3 +0x3b5:  cmpb   $0x0,-0x1e(%ebp)
084997f7 +0x3b9:  jne    0849980e <+0x3d0>
084997f9 +0x3bb:  mov    0xc(%ebp),%eax
084997fc +0x3be:  movl   $0x1,0x4(%esp)
08499804 +0x3c6:  mov    %eax,(%esp)
08499807 +0x3c9:  call   0849aab0 <_GLOBAL__I__ZN16CExpandEquipslotC2Ev+0x28>  ; global constructors keyed to CExpandEquipslot::CExpandEquipslot()+0x28
0849980c +0x3ce:  jmp    08499827 <+0x3e9>
0849980e +0x3d0:  cmpb   $0x1,-0x1e(%ebp)
08499812 +0x3d4:  jne    08499827 <+0x3e9>
08499814 +0x3d6:  mov    0xc(%ebp),%eax
08499817 +0x3d9:  movl   $0x0,0x4(%esp)
0849981f +0x3e1:  mov    %eax,(%esp)
08499822 +0x3e4:  call   0849aab0 <_GLOBAL__I__ZN16CExpandEquipslotC2Ev+0x28>  ; global constructors keyed to CExpandEquipslot::CExpandEquipslot()+0x28
08499827 +0x3e9:  mov    $0x0,%eax
0849982c +0x3ee:  jmp    08499833 <+0x3f5>
0849982e +0x3f0:  mov    $0x1,%eax
08499833 +0x3f5:  lea    -0x8(%ebp),%esp
08499836 +0x3f8:  add    $0x0,%esp
08499839 +0x3fb:  pop    %ebx
0849983a +0x3fc:  pop    %esi
0849983b +0x3fd:  pop    %ebp
0849983c +0x3fe:  ret
0849983d +0x3ff:  nop
```

## 反编译 C

```c
// CExpandEquipslot::EquipslotSwitch @ 0x849943e

/* CExpandEquipslot::EquipslotSwitch(CUser*, char, char, char) */

undefined4 __thiscall
CExpandEquipslot::EquipslotSwitch
          (CExpandEquipslot *this,CUser *param_1,char param_2,char param_3,char param_4)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  Inven_Item *this_00;
  Inven_Item local_3fe [732];
  Inven_Item local_122 [61];
  Inven_Item local_e5 [61];
  __normal_iterator<item_lock::stItemLockRef*,std::vector<item_lock::stItemLockRef,std::allocator<item_lock::stItemLockRef>>>
  local_a8 [4];
  __normal_iterator local_a4 [4];
  __normal_iterator<item_lock::stItemLockRef*,std::vector<item_lock::stItemLockRef,std::allocator<item_lock::stItemLockRef>>>
  local_a0 [4];
  Inven_Item local_9c [61];
  undefined1 local_5f [2];
  int local_5d;
  char local_22;
  char local_21;
  CItemLock *local_20;
  undefined4 local_1c;
  int local_18;
  CInventory *local_14;
  CParty *local_10;
  
  if (param_1 == (CUser *)0x0) {
    LogManager::logFormat
              (1,"ExpandEquipslot.cpp",
               "int CExpandEquipslot::EquipslotSwitch(CUser*, char, char, char)",0x44,
               "Fail Equipslot Switch : pUser is NULL");
    uVar2 = 1;
  }
  else {
    iVar3 = CUser::get_state(param_1);
    if (iVar3 < 3) {
      LogManager::logFormat
                (1,"ExpandEquipslot.cpp",
                 "int CExpandEquipslot::EquipslotSwitch(CUser*, char, char, char)",0x4a,
                 "Fail Equipslot Switch : pUser is not valid state");
      uVar2 = 0x13;
    }
    else {
      local_22 = CUserCharacInfo::getCurChannelEquipslotSwitch((CUserCharacInfo *)param_1);
      local_21 = CUserCharacInfo::getCurExpandEquipslotSwitch((CUserCharacInfo *)param_1);
      if ((local_22 == param_3) && (local_21 == param_4)) {
        local_20 = (CItemLock *)CUser::GetCharacExpandData(param_1,2);
        local_1c = item_lock::CItemLock::GetItemLockRefVec(local_20);
        std::vector<item_lock::stItemLockRef,std::allocator<item_lock::stItemLockRef>>::begin();
        while( true ) {
          std::vector<item_lock::stItemLockRef,std::allocator<item_lock::stItemLockRef>>::end();
          bVar1 = __gnu_cxx::operator!=(local_a8,local_a4);
          if (!bVar1) break;
          local_18 = __gnu_cxx::
                     __normal_iterator<item_lock::stItemLockRef*,std::vector<item_lock::stItemLockRef,std::allocator<item_lock::stItemLockRef>>>
                     ::operator*(local_a8);
          if ((9 < *(ushort *)(local_18 + 2)) && (*(ushort *)(local_18 + 2) < 0x16)) {
            if (*(char *)(local_18 + 1) == '\x03') {
              *(undefined1 *)(local_18 + 1) = 0x12;
            }
            else if (*(char *)(local_18 + 1) == '\x12') {
              *(undefined1 *)(local_18 + 1) = 3;
            }
          }
          __gnu_cxx::
          __normal_iterator<item_lock::stItemLockRef*,std::vector<item_lock::stItemLockRef,std::allocator<item_lock::stItemLockRef>>>
          ::operator++(local_a0,(int)local_a8);
        }
        if (param_2 == '\0') {
          local_14 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
          this_00 = local_3fe;
          for (iVar3 = 0xb; iVar3 != -1; iVar3 = iVar3 + -1) {
            Inven_Item::Inven_Item(this_00);
            this_00 = this_00 + 0x3d;
          }
          Inven_Item::Inven_Item(local_e5);
          Inven_Item::Inven_Item(local_122);
          CInventory::GetInvenSlot((int)local_9c,(int)local_14);
          Inven_Item::setCopy(local_e5,local_9c);
          Inven_Item::setCopy(local_122,(Inven_Item *)(this + 0x42));
          CInventory::GetInvenData(local_14,5,local_3fe,0x2dc);
          CInventory::SetInvenData(local_14,5,this + 5,0x2dc);
          SetExpandEquipslot(this,1,local_3fe,0x2dc);
          Inven_Item::setCopy((Inven_Item *)(local_14 + 699),local_e5);
          Inven_Item::setCopy((Inven_Item *)(this + 0x42),local_122);
          local_10 = (CParty *)CUser::GetParty(param_1);
          if (local_10 != (CParty *)0x0) {
            CParty::Reset_party_overlapped_drop_ratio(local_10);
          }
          CInventory::GetInvenSlot((int)local_5f,(int)local_14);
          if ((local_5d == 0) && (*(int *)(this + 7) == 0)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            CCharacterView::enableSaveCharacView((CCharacterView *)(param_1 + 0x796f4));
            CUser::send_equip(param_1,10);
          }
          if (local_22 == '\0') {
            CUserCharacInfo::setCurChannelEquipslotSwitch((CUserCharacInfo *)param_1,'\x01');
          }
          else if (local_22 == '\x01') {
            CUserCharacInfo::setCurChannelEquipslotSwitch((CUserCharacInfo *)param_1,'\0');
          }
          uVar2 = 0;
        }
        else {
          uVar2 = 1;
        }
      }
      else {
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}
```
