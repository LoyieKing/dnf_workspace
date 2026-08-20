# CheckConditionUseRecharge

`_ZN20AvatarRechargeServer25CheckConditionUseRechargeEP5CUserPN4arad24SigAradUseAvatarRechargeE`

`AvatarRechargeServer::CheckConditionUseRecharge(CUser*, arad::SigAradUseAvatarRecharge*)`

| 类 | 地址 |
|---|---|
| `AvatarRechargeServer` | `0x081906e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081906e2  _ZN20AvatarRechargeServer25CheckConditionUseRechargeEP5CUserPN4arad24SigAradUseAvatarRechargeE
#           AvatarRechargeServer::CheckConditionUseRecharge(CUser*, arad::SigAradUseAvatarRecharge*)
# range [0x081906e2, 0x08190a6f]
081906e2 +0x000:  push   %ebp
081906e3 +0x001:  mov    %esp,%ebp
081906e5 +0x003:  push   %ebx
081906e6 +0x004:  sub    $0x44,%esp
081906e9 +0x007:  mov    0x10(%ebp),%eax
081906ec +0x00a:  movzwl 0x2(%eax),%eax
081906f0 +0x00e:  movzwl %ax,%ebx
081906f3 +0x011:  mov    0xc(%ebp),%eax
081906f6 +0x014:  mov    %eax,(%esp)
081906f9 +0x017:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081906fe +0x01c:  mov    %ebx,0x8(%esp)
08190702 +0x020:  movl   $0x1,0x4(%esp)
0819070a +0x028:  mov    %eax,(%esp)
0819070d +0x02b:  call   084fc1de <_ZNK10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int) const
08190712 +0x030:  mov    %eax,-0x14(%ebp)
08190715 +0x033:  cmpl   $0x0,-0x14(%ebp)
08190719 +0x037:  je     0819072a <+0x48>
0819071b +0x039:  mov    -0x14(%ebp),%eax
0819071e +0x03c:  mov    %eax,(%esp)
08190721 +0x03f:  call   0811ed66 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x61>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x61
08190726 +0x044:  test   %al,%al
08190728 +0x046:  je     08190731 <+0x4f>
0819072a +0x048:  mov    $0x1,%eax
0819072f +0x04d:  jmp    08190736 <+0x54>
08190731 +0x04f:  mov    $0x0,%eax
08190736 +0x054:  test   %al,%al
08190738 +0x056:  je     08190780 <+0x9e>
0819073a +0x058:  movl   $0x16,0x8(%esp)
08190742 +0x060:  movl   $0x24d,0x4(%esp)
0819074a +0x068:  mov    0xc(%ebp),%eax
0819074d +0x06b:  mov    %eax,(%esp)
08190750 +0x06e:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08190755 +0x073:  mov    0x10(%ebp),%eax
08190758 +0x076:  movzwl 0x2(%eax),%eax
0819075c +0x07a:  movzwl %ax,%eax
0819075f +0x07d:  mov    %eax,0x8(%esp)
08190763 +0x081:  mov    0xc(%ebp),%eax
08190766 +0x084:  mov    %eax,0x4(%esp)
0819076a +0x088:  movl   $"USE AVATAR RECHANGE",(%esp)
08190771 +0x08f:  call   08197ba4 <_ZN4ARAD11PRINT_ERROR7isEmptyEPcP5CUsert>  ; ARAD::PRINT_ERROR::isEmpty(char*, CUser*, unsigned short)
08190776 +0x094:  mov    $0x0,%eax
0819077b +0x099:  jmp    08190a6b <+0x389>
08190780 +0x09e:  mov    0x8(%ebp),%eax
08190783 +0x0a1:  lea    0x8(%eax),%edx
08190786 +0x0a4:  lea    -0x20(%ebp),%eax
08190789 +0x0a7:  mov    %edx,0x4(%esp)
0819078d +0x0ab:  mov    %eax,(%esp)
08190790 +0x0ae:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
08190795 +0x0b3:  sub    $0x4,%esp
08190798 +0x0b6:  mov    -0x14(%ebp),%eax
0819079b +0x0b9:  mov    0x2(%eax),%eax
0819079e +0x0bc:  mov    %eax,-0x18(%ebp)
081907a1 +0x0bf:  mov    0x8(%ebp),%eax
081907a4 +0x0c2:  lea    0x8(%eax),%ecx
081907a7 +0x0c5:  lea    -0x1c(%ebp),%eax
081907aa +0x0c8:  lea    -0x18(%ebp),%edx
081907ad +0x0cb:  mov    %edx,0x8(%esp)
081907b1 +0x0cf:  mov    %ecx,0x4(%esp)
081907b5 +0x0d3:  mov    %eax,(%esp)
081907b8 +0x0d6:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
081907bd +0x0db:  sub    $0x4,%esp
081907c0 +0x0de:  lea    -0x20(%ebp),%eax
081907c3 +0x0e1:  mov    %eax,0x4(%esp)
081907c7 +0x0e5:  lea    -0x1c(%ebp),%eax
081907ca +0x0e8:  mov    %eax,(%esp)
081907cd +0x0eb:  call   080c78f0 <_GLOBAL__I_g_ServerString_+0xe5b>  ; global constructors keyed to g_ServerString_+0xe5b
081907d2 +0x0f0:  test   %al,%al
081907d4 +0x0f2:  je     08190840 <+0x15e>
081907d6 +0x0f4:  movl   $0x11,0x8(%esp)
081907de +0x0fc:  movl   $0x24d,0x4(%esp)
081907e6 +0x104:  mov    0xc(%ebp),%eax
081907e9 +0x107:  mov    %eax,(%esp)
081907ec +0x10a:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081907f1 +0x10f:  mov    0xc(%ebp),%eax
081907f4 +0x112:  mov    %eax,(%esp)
081907f7 +0x115:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081907fc +0x11a:  mov    -0x14(%ebp),%edx
081907ff +0x11d:  mov    0x2(%edx),%edx
08190802 +0x120:  mov    %eax,0x18(%esp)
08190806 +0x124:  mov    %edx,0x14(%esp)
0819080a +0x128:  movl   $"USE AVATAR RECHANGE : [item_id:%d] isn't RechargeStone [charac_no:%d]",0x10(%esp)
08190812 +0x130:  movl   $0xad,0xc(%esp)
0819081a +0x138:  movl   $&_ZZN20AvatarRechargeServer25CheckConditionUseRechargeEP5CUserPN4arad24SigAradUseAvatarRechargeEE19__PRETTY_FUNCTION__,0x8(%esp)
08190822 +0x140:  movl   $"localjapan/Arad_EmblemReformServer.cpp",0x4(%esp)
0819082a +0x148:  movl   $0x1,(%esp)
08190831 +0x14f:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08190836 +0x154:  mov    $0x0,%eax
0819083b +0x159:  jmp    08190a6b <+0x389>
08190840 +0x15e:  mov    0x10(%ebp),%eax
08190843 +0x161:  movzwl 0x2(%eax),%eax
08190847 +0x165:  movzwl %ax,%eax
0819084a +0x168:  mov    %eax,0x8(%esp)
0819084e +0x16c:  movl   $0x1,0x4(%esp)
08190856 +0x174:  mov    0xc(%ebp),%eax
08190859 +0x177:  mov    %eax,(%esp)
0819085c +0x17a:  call   08646942 <_ZNK5CUser13CheckItemLockEii>  ; CUser::CheckItemLock(int, int) const
08190861 +0x17f:  test   %al,%al
08190863 +0x181:  je     081908ab <+0x1c9>
08190865 +0x183:  movl   $0xd5,0x8(%esp)
0819086d +0x18b:  movl   $0x24d,0x4(%esp)
08190875 +0x193:  mov    0xc(%ebp),%eax
08190878 +0x196:  mov    %eax,(%esp)
0819087b +0x199:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08190880 +0x19e:  mov    0x10(%ebp),%eax
08190883 +0x1a1:  movzwl 0x2(%eax),%eax
08190887 +0x1a5:  movzwl %ax,%eax
0819088a +0x1a8:  mov    %eax,0x8(%esp)
0819088e +0x1ac:  mov    0xc(%ebp),%eax
08190891 +0x1af:  mov    %eax,0x4(%esp)
08190895 +0x1b3:  movl   $"USE AVATAR RECHANGE",(%esp)
0819089c +0x1ba:  call   08197bfd <_ZN4ARAD11PRINT_ERROR13CheckItemLockEPcP5CUsert>  ; ARAD::PRINT_ERROR::CheckItemLock(char*, CUser*, unsigned short)
081908a1 +0x1bf:  mov    $0x0,%eax
081908a6 +0x1c4:  jmp    08190a6b <+0x389>
081908ab +0x1c9:  mov    0x10(%ebp),%eax
081908ae +0x1cc:  movzwl (%eax),%eax
081908b1 +0x1cf:  movzwl %ax,%ebx
081908b4 +0x1d2:  mov    0xc(%ebp),%eax
081908b7 +0x1d5:  mov    %eax,(%esp)
081908ba +0x1d8:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081908bf +0x1dd:  mov    %ebx,0x8(%esp)
081908c3 +0x1e1:  movl   $0x2,0x4(%esp)
081908cb +0x1e9:  mov    %eax,(%esp)
081908ce +0x1ec:  call   084fc1de <_ZNK10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int) const
081908d3 +0x1f1:  mov    %eax,-0x10(%ebp)
081908d6 +0x1f4:  cmpl   $0x0,-0x10(%ebp)
081908da +0x1f8:  je     081908eb <+0x209>
081908dc +0x1fa:  mov    -0x10(%ebp),%eax
081908df +0x1fd:  mov    %eax,(%esp)
081908e2 +0x200:  call   0811ed66 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x61>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x61
081908e7 +0x205:  test   %al,%al
081908e9 +0x207:  je     081908f2 <+0x210>
081908eb +0x209:  mov    $0x1,%eax
081908f0 +0x20e:  jmp    081908f7 <+0x215>
081908f2 +0x210:  mov    $0x0,%eax
081908f7 +0x215:  test   %al,%al
081908f9 +0x217:  je     08190940 <+0x25e>
081908fb +0x219:  movl   $0x16,0x8(%esp)
08190903 +0x221:  movl   $0x24d,0x4(%esp)
0819090b +0x229:  mov    0xc(%ebp),%eax
0819090e +0x22c:  mov    %eax,(%esp)
08190911 +0x22f:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08190916 +0x234:  mov    0x10(%ebp),%eax
08190919 +0x237:  movzwl (%eax),%eax
0819091c +0x23a:  movzwl %ax,%eax
0819091f +0x23d:  mov    %eax,0x8(%esp)
08190923 +0x241:  mov    0xc(%ebp),%eax
08190926 +0x244:  mov    %eax,0x4(%esp)
0819092a +0x248:  movl   $"USE AVATAR RECHANGE",(%esp)
08190931 +0x24f:  call   08197ba4 <_ZN4ARAD11PRINT_ERROR7isEmptyEPcP5CUsert>  ; ARAD::PRINT_ERROR::isEmpty(char*, CUser*, unsigned short)
08190936 +0x254:  mov    $0x0,%eax
0819093b +0x259:  jmp    08190a6b <+0x389>
08190940 +0x25e:  mov    0x10(%ebp),%eax
08190943 +0x261:  movzwl (%eax),%eax
08190946 +0x264:  movzwl %ax,%eax
08190949 +0x267:  mov    %eax,0x8(%esp)
0819094d +0x26b:  movl   $0x1,0x4(%esp)
08190955 +0x273:  mov    0xc(%ebp),%eax
08190958 +0x276:  mov    %eax,(%esp)
0819095b +0x279:  call   08646942 <_ZNK5CUser13CheckItemLockEii>  ; CUser::CheckItemLock(int, int) const
08190960 +0x27e:  test   %al,%al
08190962 +0x280:  je     081909a9 <+0x2c7>
08190964 +0x282:  movl   $0xd5,0x8(%esp)
0819096c +0x28a:  movl   $0x24d,0x4(%esp)
08190974 +0x292:  mov    0xc(%ebp),%eax
08190977 +0x295:  mov    %eax,(%esp)
0819097a +0x298:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0819097f +0x29d:  mov    0x10(%ebp),%eax
08190982 +0x2a0:  movzwl (%eax),%eax
08190985 +0x2a3:  movzwl %ax,%eax
08190988 +0x2a6:  mov    %eax,0x8(%esp)
0819098c +0x2aa:  mov    0xc(%ebp),%eax
0819098f +0x2ad:  mov    %eax,0x4(%esp)
08190993 +0x2b1:  movl   $"USE AVATAR RECHANGE",(%esp)
0819099a +0x2b8:  call   08197bfd <_ZN4ARAD11PRINT_ERROR13CheckItemLockEPcP5CUsert>  ; ARAD::PRINT_ERROR::CheckItemLock(char*, CUser*, unsigned short)
0819099f +0x2bd:  mov    $0x0,%eax
081909a4 +0x2c2:  jmp    08190a6b <+0x389>
081909a9 +0x2c7:  mov    -0x10(%ebp),%eax
081909ac +0x2ca:  mov    0x7(%eax),%ebx
081909af +0x2cd:  mov    0xc(%ebp),%eax
081909b2 +0x2d0:  mov    %eax,(%esp)
081909b5 +0x2d3:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081909ba +0x2d8:  mov    %eax,(%esp)
081909bd +0x2db:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
081909c2 +0x2e0:  mov    %ebx,0x4(%esp)
081909c6 +0x2e4:  mov    %eax,(%esp)
081909c9 +0x2e7:  call   082f98f8 <_ZNK8WongWork14CAvatarItemMgr18getJewelSocketDataEi>  ; WongWork::CAvatarItemMgr::getJewelSocketData(int) const
081909ce +0x2ec:  mov    %eax,-0xc(%ebp)
081909d1 +0x2ef:  mov    -0xc(%ebp),%eax
081909d4 +0x2f2:  mov    %eax,(%esp)
081909d7 +0x2f5:  call   08190699 <_ZL14getSocketCountPK20stAvatarEmblemInfo_t>  ; getSocketCount(stAvatarEmblemInfo_t const*)
081909dc +0x2fa:  mov    0x8(%ebp),%edx
081909df +0x2fd:  mov    0x4(%edx),%edx
081909e2 +0x300:  imul   %eax,%edx
081909e5 +0x303:  mov    0x10(%ebp),%eax
081909e8 +0x306:  mov    %edx,0x8(%eax)
081909eb +0x309:  mov    -0x10(%ebp),%eax
081909ee +0x30c:  movzwl 0xf(%eax),%eax
081909f2 +0x310:  movzwl %ax,%edx
081909f5 +0x313:  mov    0x10(%ebp),%eax
081909f8 +0x316:  mov    0x8(%eax),%eax
081909fb +0x319:  cmp    %eax,%edx
081909fd +0x31b:  jl     08190a66 <+0x384>
081909ff +0x31d:  movl   $0xd8,0x8(%esp)
08190a07 +0x325:  movl   $0x24d,0x4(%esp)
08190a0f +0x32d:  mov    0xc(%ebp),%eax
08190a12 +0x330:  mov    %eax,(%esp)
08190a15 +0x333:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08190a1a +0x338:  mov    0xc(%ebp),%eax
08190a1d +0x33b:  mov    %eax,(%esp)
08190a20 +0x33e:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08190a25 +0x343:  mov    -0x10(%ebp),%edx
08190a28 +0x346:  mov    0x7(%edx),%edx
08190a2b +0x349:  mov    %eax,0x18(%esp)
08190a2f +0x34d:  mov    %edx,0x14(%esp)
08190a33 +0x351:  movl   $"USE AVATAR RECHANGE : already max endurance [ui_id:%d] [charac_no:%d]",0x10(%esp)
08190a3b +0x359:  movl   $0xcd,0xc(%esp)
08190a43 +0x361:  movl   $&_ZZN20AvatarRechargeServer25CheckConditionUseRechargeEP5CUserPN4arad24SigAradUseAvatarRechargeEE19__PRETTY_FUNCTION__,0x8(%esp)
08190a4b +0x369:  movl   $"localjapan/Arad_EmblemReformServer.cpp",0x4(%esp)
08190a53 +0x371:  movl   $0x1,(%esp)
08190a5a +0x378:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08190a5f +0x37d:  mov    $0x0,%eax
08190a64 +0x382:  jmp    08190a6b <+0x389>
08190a66 +0x384:  mov    $0x1,%eax
08190a6b +0x389:  mov    -0x4(%ebp),%ebx
08190a6e +0x38c:  leave
08190a6f +0x38d:  ret
```

## 反编译 C

```c
// AvatarRechargeServer::CheckConditionUseRecharge @ 0x81906e2

/* AvatarRechargeServer::CheckConditionUseRecharge(CUser*, arad::SigAradUseAvatarRecharge*) */

undefined4 __thiscall
AvatarRechargeServer::CheckConditionUseRecharge
          (AvatarRechargeServer *this,CUser *param_1,SigAradUseAvatarRecharge *param_2)

{
  ushort uVar1;
  bool bVar2;
  char cVar3;
  CInventory *pCVar4;
  undefined4 uVar5;
  CAvatarItemMgr *this_00;
  int iVar6;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_24 [4];
  _Rb_tree_iterator<std::pair<int_const,int>> local_20 [4];
  undefined4 local_1c;
  Inven_Item *local_18;
  Inven_Item *local_14;
  stAvatarEmblemInfo_t *local_10;
  
  uVar1 = *(ushort *)(param_2 + 2);
  pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  local_18 = (Inven_Item *)CInventory::GetInvenRef(pCVar4,1,(uint)uVar1);
  if ((local_18 == (Inven_Item *)0x0) || (cVar3 = Inven_Item::isEmpty(local_18), cVar3 != '\0')) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    CUser::SendCmdErrorPacket(param_1,0x24d,0x16);
    ARAD::PRINT_ERROR::isEmpty("USE AVATAR RECHANGE",param_1,*(ushort *)(param_2 + 2));
    return 0;
  }
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_24);
  local_1c = *(undefined4 *)(local_18 + 2);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_20);
  cVar3 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator==
                    (local_20,(_Rb_tree_iterator *)local_24);
  if (cVar3 != '\0') {
    CUser::SendCmdErrorPacket(param_1,0x24d,0x11);
    uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    LogManager::logFormat
              (1,"localjapan/Arad_EmblemReformServer.cpp",
               "bool AvatarRechargeServer::CheckConditionUseRecharge(CUser*, arad::SigAradUseAvatarRecharge*)"
               ,0xad,"USE AVATAR RECHANGE : [item_id:%d] isn\'t RechargeStone [charac_no:%d]",
               *(undefined4 *)(local_18 + 2),uVar5);
    return 0;
  }
  cVar3 = CUser::CheckItemLock(param_1,1,(uint)*(ushort *)(param_2 + 2));
  if (cVar3 == '\0') {
    uVar1 = *(ushort *)param_2;
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    local_14 = (Inven_Item *)CInventory::GetInvenRef(pCVar4,2,(uint)uVar1);
    if ((local_14 == (Inven_Item *)0x0) || (cVar3 = Inven_Item::isEmpty(local_14), cVar3 != '\0')) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      CUser::SendCmdErrorPacket(param_1,0x24d,0x16);
      ARAD::PRINT_ERROR::isEmpty("USE AVATAR RECHANGE",param_1,*(ushort *)param_2);
      uVar5 = 0;
    }
    else {
      cVar3 = CUser::CheckItemLock(param_1,1,(uint)*(ushort *)param_2);
      if (cVar3 == '\0') {
        iVar6 = *(int *)(local_14 + 7);
        pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        this_00 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar4);
        local_10 = (stAvatarEmblemInfo_t *)
                   WongWork::CAvatarItemMgr::getJewelSocketData(this_00,iVar6);
        iVar6 = getSocketCount(local_10);
        *(int *)(param_2 + 8) = *(int *)(this + 4) * iVar6;
        if ((int)(uint)*(ushort *)(local_14 + 0xf) < *(int *)(param_2 + 8)) {
          uVar5 = 1;
        }
        else {
          CUser::SendCmdErrorPacket(param_1,0x24d,0xd8);
          uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
          LogManager::logFormat
                    (1,"localjapan/Arad_EmblemReformServer.cpp",
                     "bool AvatarRechargeServer::CheckConditionUseRecharge(CUser*, arad::SigAradUseAvatarRecharge*)"
                     ,0xcd,"USE AVATAR RECHANGE : already max endurance [ui_id:%d] [charac_no:%d]",
                     *(undefined4 *)(local_14 + 7),uVar5);
          uVar5 = 0;
        }
      }
      else {
        CUser::SendCmdErrorPacket(param_1,0x24d,0xd5);
        ARAD::PRINT_ERROR::CheckItemLock("USE AVATAR RECHANGE",param_1,*(ushort *)param_2);
        uVar5 = 0;
      }
    }
    return uVar5;
  }
  CUser::SendCmdErrorPacket(param_1,0x24d,0xd5);
  ARAD::PRINT_ERROR::CheckItemLock("USE AVATAR RECHANGE",param_1,*(ushort *)(param_2 + 2));
  return 0;
}
```
