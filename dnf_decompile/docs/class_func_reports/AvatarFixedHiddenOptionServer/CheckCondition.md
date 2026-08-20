# CheckCondition

`_ZN29AvatarFixedHiddenOptionServer14CheckConditionEP5CUserPN4arad27SigAvatarHiddenOptionChangeE`

`AvatarFixedHiddenOptionServer::CheckCondition(CUser*, arad::SigAvatarHiddenOptionChange*)`

| 类 | 地址 |
|---|---|
| `AvatarFixedHiddenOptionServer` | `0x0817e4c6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817e4c6  _ZN29AvatarFixedHiddenOptionServer14CheckConditionEP5CUserPN4arad27SigAvatarHiddenOptionChangeE
#           AvatarFixedHiddenOptionServer::CheckCondition(CUser*, arad::SigAvatarHiddenOptionChange*)
# range [0x0817e4c6, 0x0817e8d5]
0817e4c6 +0x000:  push   %ebp
0817e4c7 +0x001:  mov    %esp,%ebp
0817e4c9 +0x003:  push   %ebx
0817e4ca +0x004:  sub    $0xf4,%esp
0817e4d0 +0x00a:  mov    0xc(%ebp),%eax
0817e4d3 +0x00d:  mov    %eax,(%esp)
0817e4d6 +0x010:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0817e4db +0x015:  mov    %eax,-0x10(%ebp)
0817e4de +0x018:  lea    -0x4d(%ebp),%eax
0817e4e1 +0x01b:  mov    %eax,(%esp)
0817e4e4 +0x01e:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0817e4e9 +0x023:  mov    0x10(%ebp),%eax
0817e4ec +0x026:  movzwl (%eax),%eax
0817e4ef +0x029:  movswl %ax,%edx
0817e4f2 +0x02c:  lea    -0xd8(%ebp),%eax
0817e4f8 +0x032:  mov    %edx,0xc(%esp)
0817e4fc +0x036:  movl   $0x1,0x8(%esp)
0817e504 +0x03e:  mov    -0x10(%ebp),%edx
0817e507 +0x041:  mov    %edx,0x4(%esp)
0817e50b +0x045:  mov    %eax,(%esp)
0817e50e +0x048:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0817e513 +0x04d:  sub    $0x4,%esp
0817e516 +0x050:  mov    -0xd8(%ebp),%eax
0817e51c +0x056:  mov    %eax,-0x4d(%ebp)
0817e51f +0x059:  mov    -0xd4(%ebp),%eax
0817e525 +0x05f:  mov    %eax,-0x49(%ebp)
0817e528 +0x062:  mov    -0xd0(%ebp),%eax
0817e52e +0x068:  mov    %eax,-0x45(%ebp)
0817e531 +0x06b:  mov    -0xcc(%ebp),%eax
0817e537 +0x071:  mov    %eax,-0x41(%ebp)
0817e53a +0x074:  mov    -0xc8(%ebp),%eax
0817e540 +0x07a:  mov    %eax,-0x3d(%ebp)
0817e543 +0x07d:  mov    -0xc4(%ebp),%eax
0817e549 +0x083:  mov    %eax,-0x39(%ebp)
0817e54c +0x086:  mov    -0xc0(%ebp),%eax
0817e552 +0x08c:  mov    %eax,-0x35(%ebp)
0817e555 +0x08f:  mov    -0xbc(%ebp),%eax
0817e55b +0x095:  mov    %eax,-0x31(%ebp)
0817e55e +0x098:  mov    -0xb8(%ebp),%eax
0817e564 +0x09e:  mov    %eax,-0x2d(%ebp)
0817e567 +0x0a1:  mov    -0xb4(%ebp),%eax
0817e56d +0x0a7:  mov    %eax,-0x29(%ebp)
0817e570 +0x0aa:  mov    -0xb0(%ebp),%eax
0817e576 +0x0b0:  mov    %eax,-0x25(%ebp)
0817e579 +0x0b3:  mov    -0xac(%ebp),%eax
0817e57f +0x0b9:  mov    %eax,-0x21(%ebp)
0817e582 +0x0bc:  mov    -0xa8(%ebp),%eax
0817e588 +0x0c2:  mov    %eax,-0x1d(%ebp)
0817e58b +0x0c5:  mov    -0xa4(%ebp),%eax
0817e591 +0x0cb:  mov    %eax,-0x19(%ebp)
0817e594 +0x0ce:  mov    -0xa0(%ebp),%eax
0817e59a +0x0d4:  mov    %eax,-0x15(%ebp)
0817e59d +0x0d7:  movzbl -0x9c(%ebp),%eax
0817e5a4 +0x0de:  mov    %al,-0x11(%ebp)
0817e5a7 +0x0e1:  lea    -0x4d(%ebp),%eax
0817e5aa +0x0e4:  mov    %eax,(%esp)
0817e5ad +0x0e7:  call   0811ed66 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x61>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x61
0817e5b2 +0x0ec:  test   %al,%al
0817e5b4 +0x0ee:  je     0817e623 <+0x15d>
0817e5b6 +0x0f0:  mov    0xc(%ebp),%eax
0817e5b9 +0x0f3:  mov    %eax,(%esp)
0817e5bc +0x0f6:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0817e5c1 +0x0fb:  mov    0x10(%ebp),%edx
0817e5c4 +0x0fe:  movzwl (%edx),%edx
0817e5c7 +0x101:  movswl %dx,%edx
0817e5ca +0x104:  mov    %eax,0x18(%esp)
0817e5ce +0x108:  mov    %edx,0x14(%esp)
0817e5d2 +0x10c:  movl   $"AVATAR HIDDEN OPTION CHANGE : Material GetInvenSlot() failed. [slot:%d] [charac_no:%d]",0x10(%esp)
0817e5da +0x114:  movl   $0x71,0xc(%esp)
0817e5e2 +0x11c:  movl   $&_ZZN29AvatarFixedHiddenOptionServer14CheckConditionEP5CUserPN4arad27SigAvatarHiddenOptionChangeEE19__PRETTY_FUNCTION__,0x8(%esp)
0817e5ea +0x124:  movl   $"localjapan/Arad_AvatarFixedHiddenOptionServer.cpp",0x4(%esp)
0817e5f2 +0x12c:  movl   $0x1,(%esp)
0817e5f9 +0x133:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0817e5fe +0x138:  movl   $0x16,0x8(%esp)
0817e606 +0x140:  movl   $0x24c,0x4(%esp)
0817e60e +0x148:  mov    0xc(%ebp),%eax
0817e611 +0x14b:  mov    %eax,(%esp)
0817e614 +0x14e:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0817e619 +0x153:  mov    $0x0,%eax
0817e61e +0x158:  jmp    0817e8d0 <+0x40a>
0817e623 +0x15d:  mov    -0x4b(%ebp),%eax
0817e626 +0x160:  mov    %eax,%ebx
0817e628 +0x162:  call   0817f0a4 <_GLOBAL__I__ZN29AvatarFixedHiddenOptionServerC2Ev+0x2d5>  ; global constructors keyed to AvatarFixedHiddenOptionServer::AvatarFixedHiddenOptionServer()+0x2d5
0817e62d +0x167:  add    $0x4,%eax
0817e630 +0x16a:  mov    %ebx,0x4(%esp)
0817e634 +0x16e:  mov    %eax,(%esp)
0817e637 +0x171:  call   088b0170 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption19isMaterialItemIndexEi>  ; ARAD::SCRIPT::AvatarFixedHiddenOption::isMaterialItemIndex(int)
0817e63c +0x176:  xor    $0x1,%eax
0817e63f +0x179:  test   %al,%al
0817e641 +0x17b:  je     0817e6aa <+0x1e4>
0817e643 +0x17d:  mov    0xc(%ebp),%eax
0817e646 +0x180:  mov    %eax,(%esp)
0817e649 +0x183:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0817e64e +0x188:  mov    -0x4b(%ebp),%edx
0817e651 +0x18b:  mov    %eax,0x18(%esp)
0817e655 +0x18f:  mov    %edx,0x14(%esp)
0817e659 +0x193:  movl   $"AVATAR HIDDEN OPTION CHANGE : isMaterial() failed [index:%d] [charac_no:%d]",0x10(%esp)
0817e661 +0x19b:  movl   $0x78,0xc(%esp)
0817e669 +0x1a3:  movl   $&_ZZN29AvatarFixedHiddenOptionServer14CheckConditionEP5CUserPN4arad27SigAvatarHiddenOptionChangeEE19__PRETTY_FUNCTION__,0x8(%esp)
0817e671 +0x1ab:  movl   $"localjapan/Arad_AvatarFixedHiddenOptionServer.cpp",0x4(%esp)
0817e679 +0x1b3:  movl   $0x1,(%esp)
0817e680 +0x1ba:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0817e685 +0x1bf:  movl   $0x11,0x8(%esp)
0817e68d +0x1c7:  movl   $0x24c,0x4(%esp)
0817e695 +0x1cf:  mov    0xc(%ebp),%eax
0817e698 +0x1d2:  mov    %eax,(%esp)
0817e69b +0x1d5:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0817e6a0 +0x1da:  mov    $0x0,%eax
0817e6a5 +0x1df:  jmp    0817e8d0 <+0x40a>
0817e6aa +0x1e4:  lea    -0x8a(%ebp),%eax
0817e6b0 +0x1ea:  mov    %eax,(%esp)
0817e6b3 +0x1ed:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0817e6b8 +0x1f2:  mov    0x10(%ebp),%eax
0817e6bb +0x1f5:  movzwl 0x2(%eax),%eax
0817e6bf +0x1f9:  movswl %ax,%edx
0817e6c2 +0x1fc:  lea    -0xd8(%ebp),%eax
0817e6c8 +0x202:  mov    %edx,0xc(%esp)
0817e6cc +0x206:  movl   $0x2,0x8(%esp)
0817e6d4 +0x20e:  mov    -0x10(%ebp),%edx
0817e6d7 +0x211:  mov    %edx,0x4(%esp)
0817e6db +0x215:  mov    %eax,(%esp)
0817e6de +0x218:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0817e6e3 +0x21d:  sub    $0x4,%esp
0817e6e6 +0x220:  mov    -0xd8(%ebp),%eax
0817e6ec +0x226:  mov    %eax,-0x8a(%ebp)
0817e6f2 +0x22c:  mov    -0xd4(%ebp),%eax
0817e6f8 +0x232:  mov    %eax,-0x86(%ebp)
0817e6fe +0x238:  mov    -0xd0(%ebp),%eax
0817e704 +0x23e:  mov    %eax,-0x82(%ebp)
0817e70a +0x244:  mov    -0xcc(%ebp),%eax
0817e710 +0x24a:  mov    %eax,-0x7e(%ebp)
0817e713 +0x24d:  mov    -0xc8(%ebp),%eax
0817e719 +0x253:  mov    %eax,-0x7a(%ebp)
0817e71c +0x256:  mov    -0xc4(%ebp),%eax
0817e722 +0x25c:  mov    %eax,-0x76(%ebp)
0817e725 +0x25f:  mov    -0xc0(%ebp),%eax
0817e72b +0x265:  mov    %eax,-0x72(%ebp)
0817e72e +0x268:  mov    -0xbc(%ebp),%eax
0817e734 +0x26e:  mov    %eax,-0x6e(%ebp)
0817e737 +0x271:  mov    -0xb8(%ebp),%eax
0817e73d +0x277:  mov    %eax,-0x6a(%ebp)
0817e740 +0x27a:  mov    -0xb4(%ebp),%eax
0817e746 +0x280:  mov    %eax,-0x66(%ebp)
0817e749 +0x283:  mov    -0xb0(%ebp),%eax
0817e74f +0x289:  mov    %eax,-0x62(%ebp)
0817e752 +0x28c:  mov    -0xac(%ebp),%eax
0817e758 +0x292:  mov    %eax,-0x5e(%ebp)
0817e75b +0x295:  mov    -0xa8(%ebp),%eax
0817e761 +0x29b:  mov    %eax,-0x5a(%ebp)
0817e764 +0x29e:  mov    -0xa4(%ebp),%eax
0817e76a +0x2a4:  mov    %eax,-0x56(%ebp)
0817e76d +0x2a7:  mov    -0xa0(%ebp),%eax
0817e773 +0x2ad:  mov    %eax,-0x52(%ebp)
0817e776 +0x2b0:  movzbl -0x9c(%ebp),%eax
0817e77d +0x2b7:  mov    %al,-0x4e(%ebp)
0817e780 +0x2ba:  lea    -0x8a(%ebp),%eax
0817e786 +0x2c0:  mov    %eax,(%esp)
0817e789 +0x2c3:  call   0811ed66 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x61>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x61
0817e78e +0x2c8:  test   %al,%al
0817e790 +0x2ca:  je     0817e800 <+0x33a>
0817e792 +0x2cc:  mov    0xc(%ebp),%eax
0817e795 +0x2cf:  mov    %eax,(%esp)
0817e798 +0x2d2:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0817e79d +0x2d7:  mov    0x10(%ebp),%edx
0817e7a0 +0x2da:  movzwl 0x2(%edx),%edx
0817e7a4 +0x2de:  movswl %dx,%edx
0817e7a7 +0x2e1:  mov    %eax,0x18(%esp)
0817e7ab +0x2e5:  mov    %edx,0x14(%esp)
0817e7af +0x2e9:  movl   $"AVATAR HIDDEN OPTION CHANGE : Avatar GetInvenSlot() failed. [slot:%d] [charac_no:%d]",0x10(%esp)
0817e7b7 +0x2f1:  movl   $0x83,0xc(%esp)
0817e7bf +0x2f9:  movl   $&_ZZN29AvatarFixedHiddenOptionServer14CheckConditionEP5CUserPN4arad27SigAvatarHiddenOptionChangeEE19__PRETTY_FUNCTION__,0x8(%esp)
0817e7c7 +0x301:  movl   $"localjapan/Arad_AvatarFixedHiddenOptionServer.cpp",0x4(%esp)
0817e7cf +0x309:  movl   $0x1,(%esp)
0817e7d6 +0x310:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0817e7db +0x315:  movl   $0x16,0x8(%esp)
0817e7e3 +0x31d:  movl   $0x24c,0x4(%esp)
0817e7eb +0x325:  mov    0xc(%ebp),%eax
0817e7ee +0x328:  mov    %eax,(%esp)
0817e7f1 +0x32b:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0817e7f6 +0x330:  mov    $0x0,%eax
0817e7fb +0x335:  jmp    0817e8d0 <+0x40a>
0817e800 +0x33a:  mov    -0x88(%ebp),%eax
0817e806 +0x340:  mov    %eax,%ebx
0817e808 +0x342:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0817e80d +0x347:  mov    %ebx,0x4(%esp)
0817e811 +0x34b:  mov    %eax,(%esp)
0817e814 +0x34e:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0817e819 +0x353:  mov    %eax,-0xc(%ebp)
0817e81c +0x356:  cmpl   $0x0,-0xc(%ebp)
0817e820 +0x35a:  je     0817e83b <+0x375>
0817e822 +0x35c:  mov    -0xc(%ebp),%eax
0817e825 +0x35f:  mov    (%eax),%eax
0817e827 +0x361:  add    $0x10,%eax
0817e82a +0x364:  mov    (%eax),%edx
0817e82c +0x366:  mov    -0xc(%ebp),%eax
0817e82f +0x369:  mov    %eax,(%esp)
0817e832 +0x36c:  call   *%edx
0817e834 +0x36e:  xor    $0x1,%eax
0817e837 +0x371:  test   %al,%al
0817e839 +0x373:  je     0817e842 <+0x37c>
0817e83b +0x375:  mov    $0x1,%eax
0817e840 +0x37a:  jmp    0817e847 <+0x381>
0817e842 +0x37c:  mov    $0x0,%eax
0817e847 +0x381:  test   %al,%al
0817e849 +0x383:  je     0817e852 <+0x38c>
0817e84b +0x385:  mov    $0x0,%eax
0817e850 +0x38a:  jmp    0817e8d0 <+0x40a>
0817e852 +0x38c:  mov    -0xc(%ebp),%eax
0817e855 +0x38f:  mov    %eax,(%esp)
0817e858 +0x392:  call   0817edec <_GLOBAL__I__ZN29AvatarFixedHiddenOptionServerC2Ev+0x1d>  ; global constructors keyed to AvatarFixedHiddenOptionServer::AvatarFixedHiddenOptionServer()+0x1d
0817e85d +0x397:  xor    $0x1,%eax
0817e860 +0x39a:  test   %al,%al
0817e862 +0x39c:  je     0817e8cb <+0x405>
0817e864 +0x39e:  mov    0xc(%ebp),%eax
0817e867 +0x3a1:  mov    %eax,(%esp)
0817e86a +0x3a4:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0817e86f +0x3a9:  mov    -0x88(%ebp),%edx
0817e875 +0x3af:  mov    %eax,0x18(%esp)
0817e879 +0x3b3:  mov    %edx,0x14(%esp)
0817e87d +0x3b7:  movl   $"AVATAR HIDDEN OPTION CHANGE : IsHiddenOption() failed. [index:%d] [charac_no:%d]",0x10(%esp)
0817e885 +0x3bf:  movl   $0x94,0xc(%esp)
0817e88d +0x3c7:  movl   $&_ZZN29AvatarFixedHiddenOptionServer14CheckConditionEP5CUserPN4arad27SigAvatarHiddenOptionChangeEE19__PRETTY_FUNCTION__,0x8(%esp)
0817e895 +0x3cf:  movl   $"localjapan/Arad_AvatarFixedHiddenOptionServer.cpp",0x4(%esp)
0817e89d +0x3d7:  movl   $0x1,(%esp)
0817e8a4 +0x3de:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0817e8a9 +0x3e3:  movl   $0x11,0x8(%esp)
0817e8b1 +0x3eb:  movl   $0x24c,0x4(%esp)
0817e8b9 +0x3f3:  mov    0xc(%ebp),%eax
0817e8bc +0x3f6:  mov    %eax,(%esp)
0817e8bf +0x3f9:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0817e8c4 +0x3fe:  mov    $0x0,%eax
0817e8c9 +0x403:  jmp    0817e8d0 <+0x40a>
0817e8cb +0x405:  mov    $0x1,%eax
0817e8d0 +0x40a:  mov    -0x4(%ebp),%ebx
0817e8d3 +0x40d:  leave
0817e8d4 +0x40e:  ret
0817e8d5 +0x40f:  nop
```

## 反编译 C

```c
// AvatarFixedHiddenOptionServer::CheckCondition @ 0x817e4c6

/* AvatarFixedHiddenOptionServer::CheckCondition(CUser*, arad::SigAvatarHiddenOptionChange*) */

undefined4 __thiscall
AvatarFixedHiddenOptionServer::CheckCondition
          (AvatarFixedHiddenOptionServer *this,CUser *param_1,SigAvatarHiddenOptionChange *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  CDataManager *this_00;
  int iVar5;
  undefined1 local_dc [8];
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined2 local_8e;
  undefined2 uStack_8c;
  undefined2 local_8a;
  undefined2 uStack_88;
  undefined4 local_86;
  undefined4 local_82;
  undefined4 local_7e;
  undefined4 local_7a;
  undefined4 local_76;
  undefined4 local_72;
  undefined4 local_6e;
  undefined4 local_6a;
  undefined4 local_66;
  undefined4 local_62;
  undefined4 local_5e;
  undefined4 local_5a;
  undefined4 local_56;
  undefined1 local_52;
  undefined2 local_51;
  undefined2 uStack_4f;
  undefined2 local_4d;
  undefined2 uStack_4b;
  undefined4 local_49;
  undefined4 local_45;
  undefined4 local_41;
  undefined4 local_3d;
  undefined4 local_39;
  undefined4 local_35;
  undefined4 local_31;
  undefined4 local_2d;
  undefined4 local_29;
  undefined4 local_25;
  undefined4 local_21;
  undefined4 local_1d;
  undefined4 local_19;
  undefined1 local_15;
  int local_14;
  CItem *local_10;
  
  local_14 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
  Inven_Item::Inven_Item((Inven_Item *)&local_51);
  CInventory::GetInvenSlot((int)local_dc,local_14);
  local_51 = (undefined2)local_dc._0_4_;
  uStack_4f = SUB42(local_dc._0_4_,2);
  local_4d = (undefined2)local_dc._4_4_;
  uStack_4b = SUB42(local_dc._4_4_,2);
  local_49 = local_d4;
  local_45 = local_d0;
  local_41 = local_cc;
  local_3d = local_c8;
  local_39 = local_c4;
  local_35 = local_c0;
  local_31 = local_bc;
  local_2d = local_b8;
  local_29 = local_b4;
  local_25 = local_b0;
  local_21 = local_ac;
  local_1d = local_a8;
  local_19 = local_a4;
  local_15 = local_a0;
  cVar2 = Inven_Item::isEmpty((Inven_Item *)&local_51);
  if (cVar2 != '\0') {
    uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    LogManager::logFormat
              (1,"localjapan/Arad_AvatarFixedHiddenOptionServer.cpp",
               "bool AvatarFixedHiddenOptionServer::CheckCondition(CUser*, arad::SigAvatarHiddenOptionChange*)"
               ,0x71,
               "AVATAR HIDDEN OPTION CHANGE : Material GetInvenSlot() failed. [slot:%d] [charac_no:%d]"
               ,(int)*(short *)param_2,uVar3);
    CUser::SendCmdErrorPacket(param_1,0x24c,0x16);
    return 0;
  }
  iVar5 = CONCAT22(local_4d,uStack_4f);
  iVar4 = ARAD::Singleton<AvatarFixedHiddenOptionServer>::Get();
  cVar2 = ARAD::SCRIPT::AvatarFixedHiddenOption::isMaterialItemIndex
                    ((AvatarFixedHiddenOption *)(iVar4 + 4),iVar5);
  if (cVar2 == '\x01') {
    Inven_Item::Inven_Item((Inven_Item *)&local_8e);
    iVar5 = (int)*(short *)(param_2 + 2);
    uVar3 = 2;
    CInventory::GetInvenSlot((int)local_dc,local_14);
    local_8e = (undefined2)local_dc._0_4_;
    uStack_8c = SUB42(local_dc._0_4_,2);
    local_8a = (undefined2)local_dc._4_4_;
    uStack_88 = SUB42(local_dc._4_4_,2);
    local_86 = local_d4;
    local_82 = local_d0;
    local_7e = local_cc;
    local_7a = local_c8;
    local_76 = local_c4;
    local_72 = local_c0;
    local_6e = local_bc;
    local_6a = local_b8;
    local_66 = local_b4;
    local_62 = local_b0;
    local_5e = local_ac;
    local_5a = local_a8;
    local_56 = local_a4;
    local_52 = local_a0;
    cVar2 = Inven_Item::isEmpty((Inven_Item *)&local_8e);
    if (cVar2 == '\0') {
      iVar4 = CONCAT22(local_8a,uStack_8c);
      this_00 = (CDataManager *)G_CDataManager();
      local_10 = (CItem *)CDataManager::find_item(this_00,iVar4);
      if ((local_10 == (CItem *)0x0) ||
         (cVar2 = (**(code **)(*(int *)local_10 + 0x10))(local_10,iVar4,uVar3,iVar5),
         cVar2 != '\x01')) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        uVar3 = 0;
      }
      else {
        cVar2 = CItem::IsHiddenOption(local_10);
        if (cVar2 == '\x01') {
          uVar3 = 1;
        }
        else {
          uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
          LogManager::logFormat
                    (1,"localjapan/Arad_AvatarFixedHiddenOptionServer.cpp",
                     "bool AvatarFixedHiddenOptionServer::CheckCondition(CUser*, arad::SigAvatarHiddenOptionChange*)"
                     ,0x94,
                     "AVATAR HIDDEN OPTION CHANGE : IsHiddenOption() failed. [index:%d] [charac_no:%d]"
                     ,CONCAT22(local_8a,uStack_8c),uVar3);
          CUser::SendCmdErrorPacket(param_1,0x24c,0x11);
          uVar3 = 0;
        }
      }
      return uVar3;
    }
    uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    LogManager::logFormat
              (1,"localjapan/Arad_AvatarFixedHiddenOptionServer.cpp",
               "bool AvatarFixedHiddenOptionServer::CheckCondition(CUser*, arad::SigAvatarHiddenOptionChange*)"
               ,0x83,
               "AVATAR HIDDEN OPTION CHANGE : Avatar GetInvenSlot() failed. [slot:%d] [charac_no:%d]"
               ,(int)*(short *)(param_2 + 2),uVar3);
    CUser::SendCmdErrorPacket(param_1,0x24c,0x16);
    return 0;
  }
  uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  LogManager::logFormat
            (1,"localjapan/Arad_AvatarFixedHiddenOptionServer.cpp",
             "bool AvatarFixedHiddenOptionServer::CheckCondition(CUser*, arad::SigAvatarHiddenOptionChange*)"
             ,0x78,"AVATAR HIDDEN OPTION CHANGE : isMaterial() failed [index:%d] [charac_no:%d]",
             CONCAT22(local_4d,uStack_4f),uVar3);
  CUser::SendCmdErrorPacket(param_1,0x24c,0x11);
  return 0;
}
```
