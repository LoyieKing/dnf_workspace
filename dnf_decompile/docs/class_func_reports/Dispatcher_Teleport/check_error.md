# check_error

`_ZN19Dispatcher_Teleport11check_errorEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_Teleport::check_error(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Teleport` | `0x081d056c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d056c  _ZN19Dispatcher_Teleport11check_errorEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_Teleport::check_error(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d056c, 0x081d07bb]
081d056c +0x000:  push   %ebp
081d056d +0x001:  mov    %esp,%ebp
081d056f +0x003:  push   %esi
081d0570 +0x004:  push   %ebx
081d0571 +0x005:  sub    $0x30,%esp
081d0574 +0x008:  mov    0x10(%ebp),%eax
081d0577 +0x00b:  mov    %eax,-0x18(%ebp)
081d057a +0x00e:  mov    0xc(%ebp),%eax
081d057d +0x011:  mov    %eax,(%esp)
081d0580 +0x014:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081d0585 +0x019:  cmp    $0x2,%eax
081d0588 +0x01c:  jle    081d0599 <+0x2d>
081d058a +0x01e:  mov    0xc(%ebp),%eax
081d058d +0x021:  mov    %eax,(%esp)
081d0590 +0x024:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081d0595 +0x029:  test   %eax,%eax
081d0597 +0x02b:  jne    081d05a0 <+0x34>
081d0599 +0x02d:  mov    $0x1,%eax
081d059e +0x032:  jmp    081d05a5 <+0x39>
081d05a0 +0x034:  mov    $0x0,%eax
081d05a5 +0x039:  test   %al,%al
081d05a7 +0x03b:  je     081d05b3 <+0x47>
081d05a9 +0x03d:  mov    $0xffffffff,%eax
081d05ae +0x042:  jmp    081d07b5 <+0x249>
081d05b3 +0x047:  mov    0xc(%ebp),%eax
081d05b6 +0x04a:  mov    %eax,(%esp)
081d05b9 +0x04d:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081d05be +0x052:  cmp    $0x4,%eax
081d05c1 +0x055:  setg   %al
081d05c4 +0x058:  test   %al,%al
081d05c6 +0x05a:  je     081d05ed <+0x81>
081d05c8 +0x05c:  movl   $0x13,0x8(%esp)
081d05d0 +0x064:  movl   $0xf1,0x4(%esp)
081d05d8 +0x06c:  mov    0xc(%ebp),%eax
081d05db +0x06f:  mov    %eax,(%esp)
081d05de +0x072:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081d05e3 +0x077:  mov    $0xffffffff,%eax
081d05e8 +0x07c:  jmp    081d07b5 <+0x249>
081d05ed +0x081:  mov    -0x18(%ebp),%eax
081d05f0 +0x084:  movzwl 0xe(%eax),%eax
081d05f4 +0x088:  movswl %ax,%esi
081d05f7 +0x08b:  mov    -0x18(%ebp),%eax
081d05fa +0x08e:  movzbl 0x14(%eax),%eax
081d05fe +0x092:  movsbl %al,%eax
081d0601 +0x095:  mov    %eax,(%esp)
081d0604 +0x098:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
081d0609 +0x09d:  mov    %eax,%ebx
081d060b +0x09f:  mov    0xc(%ebp),%eax
081d060e +0x0a2:  mov    %eax,(%esp)
081d0611 +0x0a5:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081d0616 +0x0aa:  mov    %esi,0x8(%esp)
081d061a +0x0ae:  mov    %ebx,0x4(%esp)
081d061e +0x0b2:  mov    %eax,(%esp)
081d0621 +0x0b5:  call   084fc1de <_ZNK10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int) const
081d0626 +0x0ba:  mov    %eax,-0x14(%ebp)
081d0629 +0x0bd:  cmpl   $0x0,-0x14(%ebp)
081d062d +0x0c1:  je     081d063c <+0xd0>
081d062f +0x0c3:  mov    -0x14(%ebp),%eax
081d0632 +0x0c6:  mov    0x2(%eax),%eax
081d0635 +0x0c9:  cmp    $0x27ac4e,%eax
081d063a +0x0ce:  jmp    081d0646 <+0xda>
081d063c +0x0d0:  mov    $0xfffffffe,%eax
081d0641 +0x0d5:  jmp    081d07b5 <+0x249>
081d0646 +0x0da:  mov    -0x14(%ebp),%eax
081d0649 +0x0dd:  mov    0x2(%eax),%eax
081d064c +0x0e0:  cmp    $0x27ac4e,%eax
081d0651 +0x0e5:  je     081d0677 <+0x10b>
081d0653 +0x0e7:  mov    -0x14(%ebp),%eax
081d0656 +0x0ea:  mov    0x2(%eax),%eax
081d0659 +0x0ed:  cmp    $0x28e7d0,%eax
081d065e +0x0f2:  je     081d0677 <+0x10b>
081d0660 +0x0f4:  mov    -0x14(%ebp),%eax
081d0663 +0x0f7:  mov    0x2(%eax),%eax
081d0666 +0x0fa:  cmp    $0x29f288,%eax
081d066b +0x0ff:  je     081d0677 <+0x10b>
081d066d +0x101:  mov    $0xfffffffe,%eax
081d0672 +0x106:  jmp    081d07b5 <+0x249>
081d0677 +0x10b:  mov    -0x18(%ebp),%eax
081d067a +0x10e:  movzbl 0x15(%eax),%eax
081d067e +0x112:  test   %al,%al
081d0680 +0x114:  jg     081d068c <+0x120>
081d0682 +0x116:  mov    $0x7fffffff,%eax
081d0687 +0x11b:  jmp    081d07b5 <+0x249>
081d068c +0x120:  mov    -0x18(%ebp),%eax
081d068f +0x123:  movzbl 0x15(%eax),%eax
081d0693 +0x127:  movsbl %al,%eax
081d0696 +0x12a:  mov    %eax,0x4(%esp)
081d069a +0x12e:  mov    0xc(%ebp),%eax
081d069d +0x131:  mov    %eax,(%esp)
081d06a0 +0x134:  call   08678526 <_ZN5CUser13CheckMoveTownEi>  ; CUser::CheckMoveTown(int)
081d06a5 +0x139:  test   %eax,%eax
081d06a7 +0x13b:  setne  %al
081d06aa +0x13e:  test   %al,%al
081d06ac +0x140:  je     081d06b8 <+0x14c>
081d06ae +0x142:  mov    $0x7fffffff,%eax
081d06b3 +0x147:  jmp    081d07b5 <+0x249>
081d06b8 +0x14c:  mov    0xc(%ebp),%eax
081d06bb +0x14f:  mov    %eax,(%esp)
081d06be +0x152:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081d06c3 +0x157:  mov    %eax,-0x10(%ebp)
081d06c6 +0x15a:  cmpl   $0x0,-0x10(%ebp)
081d06ca +0x15e:  je     081d0714 <+0x1a8>
081d06cc +0x160:  mov    -0x10(%ebp),%eax
081d06cf +0x163:  mov    %eax,(%esp)
081d06d2 +0x166:  call   0822d90e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fb8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fb8
081d06d7 +0x16b:  mov    %eax,(%esp)
081d06da +0x16e:  call   0822d7ee <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2e98>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2e98
081d06df +0x173:  test   %al,%al
081d06e1 +0x175:  js     081d0701 <+0x195>
081d06e3 +0x177:  mov    -0x10(%ebp),%eax
081d06e6 +0x17a:  mov    %eax,(%esp)
081d06e9 +0x17d:  call   0822d90e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fb8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fb8
081d06ee +0x182:  mov    %eax,(%esp)
081d06f1 +0x185:  call   0822d7ee <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2e98>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2e98
081d06f6 +0x18a:  cmp    $0x3,%al
081d06f8 +0x18c:  jg     081d0701 <+0x195>
081d06fa +0x18e:  mov    $0x1,%eax
081d06ff +0x193:  jmp    081d0706 <+0x19a>
081d0701 +0x195:  mov    $0x0,%eax
081d0706 +0x19a:  test   %al,%al
081d0708 +0x19c:  je     081d0714 <+0x1a8>
081d070a +0x19e:  mov    $0x9e,%eax
081d070f +0x1a3:  jmp    081d07b5 <+0x249>
081d0714 +0x1a8:  mov    0x14(%ebp),%eax
081d0717 +0x1ab:  mov    %eax,-0xc(%ebp)
081d071a +0x1ae:  mov    -0x14(%ebp),%eax
081d071d +0x1b1:  mov    0x2(%eax),%edx
081d0720 +0x1b4:  mov    -0xc(%ebp),%eax
081d0723 +0x1b7:  mov    %edx,0x14(%eax)
081d0726 +0x1ba:  mov    -0x18(%ebp),%eax
081d0729 +0x1bd:  movzbl 0x14(%eax),%eax
081d072d +0x1c1:  movsbl %al,%edx
081d0730 +0x1c4:  mov    -0x18(%ebp),%eax
081d0733 +0x1c7:  movzwl 0xe(%eax),%eax
081d0737 +0x1cb:  cwtl
081d0738 +0x1cc:  movl   $0xffffffff,0x10(%esp)
081d0740 +0x1d4:  movl   $0xffffffff,0xc(%esp)
081d0748 +0x1dc:  mov    %edx,0x8(%esp)
081d074c +0x1e0:  mov    %eax,0x4(%esp)
081d0750 +0x1e4:  mov    0xc(%ebp),%eax
081d0753 +0x1e7:  mov    %eax,(%esp)
081d0756 +0x1ea:  call   0865e0ae <_ZN5CUser13use_stackableEsiii>  ; CUser::use_stackable(short, int, int, int)
081d075b +0x1ef:  xor    $0x1,%eax
081d075e +0x1f2:  test   %al,%al
081d0760 +0x1f4:  je     081d0769 <+0x1fd>
081d0762 +0x1f6:  mov    $0x11,%eax
081d0767 +0x1fb:  jmp    081d07b5 <+0x249>
081d0769 +0x1fd:  mov    -0x18(%ebp),%eax
081d076c +0x200:  movzbl 0x15(%eax),%eax
081d0770 +0x204:  movsbl %al,%eax
081d0773 +0x207:  movl   $0x1,0x14(%esp)
081d077b +0x20f:  movl   $0x0,0x10(%esp)
081d0783 +0x217:  movl   $0x0,0xc(%esp)
081d078b +0x21f:  movl   $0x0,0x8(%esp)
081d0793 +0x227:  mov    %eax,0x4(%esp)
081d0797 +0x22b:  mov    0xc(%ebp),%eax
081d079a +0x22e:  mov    %eax,(%esp)
081d079d +0x231:  call   085d1424 <_ZN10expert_job10CAlchemist19OnTeleportCharacterEP5CUseriiiib>  ; expert_job::CAlchemist::OnTeleportCharacter(CUser*, int, int, int, int, bool)
081d07a2 +0x236:  xor    $0x1,%eax
081d07a5 +0x239:  test   %al,%al
081d07a7 +0x23b:  je     081d07b0 <+0x244>
081d07a9 +0x23d:  mov    $0x7fffffff,%eax
081d07ae +0x242:  jmp    081d07b5 <+0x249>
081d07b0 +0x244:  mov    $0x0,%eax
081d07b5 +0x249:  add    $0x30,%esp
081d07b8 +0x24c:  pop    %ebx
081d07b9 +0x24d:  pop    %esi
081d07ba +0x24e:  pop    %ebp
081d07bb +0x24f:  ret
```

## 反编译 C

```c
// Dispatcher_Teleport::check_error @ 0x81d056c

/* Dispatcher_Teleport::check_error(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_Teleport::check_error
          (Dispatcher_Teleport *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  short sVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  CInventory *this_00;
  int iVar5;
  CParty *this_01;
  CPartyTelePort *pCVar6;
  undefined4 uVar7;
  
  iVar4 = CUser::get_state(param_1);
  if ((iVar4 < 3) ||
     (iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar4 == 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    return 0xffffffff;
  }
  iVar4 = CUser::get_state(param_1);
  if (4 < iVar4) {
    CUser::SendCmdErrorPacket(param_1,0xf1,0x13);
    return 0xffffffff;
  }
  sVar1 = *(short *)(param_2 + 0xe);
  iVar4 = GetInvenTypeFromItemSpace((int)(char)param_2[0x14]);
  this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  iVar4 = CInventory::GetInvenRef(this_00,iVar4,(int)sVar1);
  if (iVar4 == 0) {
    return 0xfffffffe;
  }
  if (((*(int *)(iVar4 + 2) != 0x27ac4e) && (*(int *)(iVar4 + 2) != 0x28e7d0)) &&
     (*(int *)(iVar4 + 2) != 0x29f288)) {
    return 0xfffffffe;
  }
  if ((char)param_2[0x15] < '\x01') {
    return 0x7fffffff;
  }
  iVar5 = CUser::CheckMoveTown(param_1,(int)(char)param_2[0x15]);
  if (iVar5 != 0) {
    return 0x7fffffff;
  }
  this_01 = (CParty *)CUser::GetParty(param_1);
  if (this_01 == (CParty *)0x0) goto LAB_081d0714;
  pCVar6 = (CPartyTelePort *)CParty::GetPartyTelePort(this_01);
  cVar3 = CPartyTelePort::get_teleport_state(pCVar6);
  if (cVar3 < '\0') {
LAB_081d0701:
    bVar2 = false;
  }
  else {
    pCVar6 = (CPartyTelePort *)CParty::GetPartyTelePort(this_01);
    cVar3 = CPartyTelePort::get_teleport_state(pCVar6);
    if ('\x03' < cVar3) goto LAB_081d0701;
    bVar2 = true;
  }
  if (bVar2) {
    return 0x9e;
  }
LAB_081d0714:
  *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(iVar4 + 2);
  cVar3 = CUser::use_stackable(param_1,*(short *)(param_2 + 0xe),(int)(char)param_2[0x14],-1,-1);
  if (cVar3 == '\x01') {
    cVar3 = expert_job::CAlchemist::OnTeleportCharacter(param_1,(int)(char)param_2[0x15],0,0,0,true)
    ;
    if (cVar3 == '\x01') {
      uVar7 = 0;
    }
    else {
      uVar7 = 0x7fffffff;
    }
  }
  else {
    uVar7 = 0x11;
  }
  return uVar7;
}
```
