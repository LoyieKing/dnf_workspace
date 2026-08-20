# Recharge

`_ZN20AvatarRechargeServer8RechargeEP5CUserPN4arad24SigAradUseAvatarRechargeE`

`AvatarRechargeServer::Recharge(CUser*, arad::SigAradUseAvatarRecharge*)`

| 类 | 地址 |
|---|---|
| `AvatarRechargeServer` | `0x08190a70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08190a70  _ZN20AvatarRechargeServer8RechargeEP5CUserPN4arad24SigAradUseAvatarRechargeE
#           AvatarRechargeServer::Recharge(CUser*, arad::SigAradUseAvatarRecharge*)
# range [0x08190a70, 0x08190de9]
08190a70 +0x000:  push   %ebp
08190a71 +0x001:  mov    %esp,%ebp
08190a73 +0x003:  push   %edi
08190a74 +0x004:  push   %esi
08190a75 +0x005:  push   %ebx
08190a76 +0x006:  sub    $0x7c,%esp
08190a79 +0x009:  mov    0x10(%ebp),%eax
08190a7c +0x00c:  movzwl 0x2(%eax),%eax
08190a80 +0x010:  movzwl %ax,%ebx
08190a83 +0x013:  mov    0xc(%ebp),%eax
08190a86 +0x016:  mov    %eax,(%esp)
08190a89 +0x019:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08190a8e +0x01e:  mov    %ebx,0x8(%esp)
08190a92 +0x022:  movl   $0x1,0x4(%esp)
08190a9a +0x02a:  mov    %eax,(%esp)
08190a9d +0x02d:  call   084fc1de <_ZNK10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int) const
08190aa2 +0x032:  mov    %eax,-0x28(%ebp)
08190aa5 +0x035:  mov    -0x28(%ebp),%eax
08190aa8 +0x038:  mov    0x2(%eax),%eax
08190aab +0x03b:  mov    %eax,-0x24(%ebp)
08190aae +0x03e:  cmpl   $0x0,-0x28(%ebp)
08190ab2 +0x042:  je     08190ac3 <+0x53>
08190ab4 +0x044:  mov    -0x28(%ebp),%eax
08190ab7 +0x047:  mov    %eax,(%esp)
08190aba +0x04a:  call   0811ed66 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x61>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x61
08190abf +0x04f:  test   %al,%al
08190ac1 +0x051:  je     08190aca <+0x5a>
08190ac3 +0x053:  mov    $0x1,%eax
08190ac8 +0x058:  jmp    08190acf <+0x5f>
08190aca +0x05a:  mov    $0x0,%eax
08190acf +0x05f:  test   %al,%al
08190ad1 +0x061:  je     08190b19 <+0xa9>
08190ad3 +0x063:  movl   $0x16,0x8(%esp)
08190adb +0x06b:  movl   $0x24d,0x4(%esp)
08190ae3 +0x073:  mov    0xc(%ebp),%eax
08190ae6 +0x076:  mov    %eax,(%esp)
08190ae9 +0x079:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08190aee +0x07e:  mov    0x10(%ebp),%eax
08190af1 +0x081:  movzwl 0x2(%eax),%eax
08190af5 +0x085:  movzwl %ax,%eax
08190af8 +0x088:  mov    %eax,0x8(%esp)
08190afc +0x08c:  mov    0xc(%ebp),%eax
08190aff +0x08f:  mov    %eax,0x4(%esp)
08190b03 +0x093:  movl   $"USE AVATAR RECHANGE",(%esp)
08190b0a +0x09a:  call   08197ba4 <_ZN4ARAD11PRINT_ERROR7isEmptyEPcP5CUsert>  ; ARAD::PRINT_ERROR::isEmpty(char*, CUser*, unsigned short)
08190b0f +0x09f:  mov    $0x0,%eax
08190b14 +0x0a4:  jmp    08190de1 <+0x371>
08190b19 +0x0a9:  mov    0x10(%ebp),%eax
08190b1c +0x0ac:  movzwl 0x2(%eax),%eax
08190b20 +0x0b0:  movzwl %ax,%ebx
08190b23 +0x0b3:  mov    0xc(%ebp),%eax
08190b26 +0x0b6:  mov    %eax,(%esp)
08190b29 +0x0b9:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08190b2e +0x0be:  movl   $0x1,0x14(%esp)
08190b36 +0x0c6:  movl   $0x3,0x10(%esp)
08190b3e +0x0ce:  movl   $0x1,0xc(%esp)
08190b46 +0x0d6:  mov    %ebx,0x8(%esp)
08190b4a +0x0da:  movl   $0x1,0x4(%esp)
08190b52 +0x0e2:  mov    %eax,(%esp)
08190b55 +0x0e5:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
08190b5a +0x0ea:  xor    $0x1,%eax
08190b5d +0x0ed:  test   %al,%al
08190b5f +0x0ef:  je     08190ba7 <+0x137>
08190b61 +0x0f1:  movl   $0x13,0x8(%esp)
08190b69 +0x0f9:  movl   $0x24d,0x4(%esp)
08190b71 +0x101:  mov    0xc(%ebp),%eax
08190b74 +0x104:  mov    %eax,(%esp)
08190b77 +0x107:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08190b7c +0x10c:  mov    0x10(%ebp),%eax
08190b7f +0x10f:  movzwl 0x2(%eax),%eax
08190b83 +0x113:  movzwl %ax,%eax
08190b86 +0x116:  mov    %eax,0x8(%esp)
08190b8a +0x11a:  mov    0xc(%ebp),%eax
08190b8d +0x11d:  mov    %eax,0x4(%esp)
08190b91 +0x121:  movl   $"USE AVATAR RECHANGE",(%esp)
08190b98 +0x128:  call   08197c56 <_ZN4ARAD11PRINT_ERROR11delete_itemEPcP5CUsert>  ; ARAD::PRINT_ERROR::delete_item(char*, CUser*, unsigned short)
08190b9d +0x12d:  mov    $0x0,%eax
08190ba2 +0x132:  jmp    08190de1 <+0x371>
08190ba7 +0x137:  mov    0x10(%ebp),%eax
08190baa +0x13a:  movzwl 0x2(%eax),%eax
08190bae +0x13e:  movzwl %ax,%eax
08190bb1 +0x141:  mov    %eax,0xc(%esp)
08190bb5 +0x145:  movl   $0x0,0x8(%esp)
08190bbd +0x14d:  movl   $0x1,0x4(%esp)
08190bc5 +0x155:  mov    0xc(%ebp),%eax
08190bc8 +0x158:  mov    %eax,(%esp)
08190bcb +0x15b:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
08190bd0 +0x160:  mov    0xc(%ebp),%eax
08190bd3 +0x163:  mov    %eax,(%esp)
08190bd6 +0x166:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08190bdb +0x16b:  mov    %eax,%ebx
08190bdd +0x16d:  mov    0x10(%ebp),%eax
08190be0 +0x170:  movzwl 0x2(%eax),%eax
08190be4 +0x174:  movzwl %ax,%esi
08190be7 +0x177:  movl   $0x0,0xc(%esp)
08190bef +0x17f:  movl   $0xe8,0x8(%esp)
08190bf7 +0x187:  movl   $&_ZZN20AvatarRechargeServer8RechargeEP5CUserPN4arad24SigAradUseAvatarRechargeEE19__PRETTY_FUNCTION__,0x4(%esp)
08190bff +0x18f:  lea    -0x4c(%ebp),%eax
08190c02 +0x192:  mov    %eax,(%esp)
08190c05 +0x195:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08190c0a +0x19a:  mov    %ebx,0xc(%esp)
08190c0e +0x19e:  mov    %esi,0x8(%esp)
08190c12 +0x1a2:  movl   $"USE AVATAR RECHANGE : delete_item() success. [slot:%d] [charac_no:%d]",0x4(%esp)
08190c1a +0x1aa:  lea    -0x4c(%ebp),%eax
08190c1d +0x1ad:  mov    %eax,(%esp)
08190c20 +0x1b0:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08190c25 +0x1b5:  mov    0x10(%ebp),%eax
08190c28 +0x1b8:  movzwl (%eax),%eax
08190c2b +0x1bb:  movzwl %ax,%ebx
08190c2e +0x1be:  mov    0xc(%ebp),%eax
08190c31 +0x1c1:  mov    %eax,(%esp)
08190c34 +0x1c4:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08190c39 +0x1c9:  mov    %ebx,0x8(%esp)
08190c3d +0x1cd:  movl   $0x2,0x4(%esp)
08190c45 +0x1d5:  mov    %eax,(%esp)
08190c48 +0x1d8:  call   084fc2ae <_ZN10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int)
08190c4d +0x1dd:  mov    %eax,-0x20(%ebp)
08190c50 +0x1e0:  mov    -0x20(%ebp),%eax
08190c53 +0x1e3:  mov    %eax,(%esp)
08190c56 +0x1e6:  call   0811ed66 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x61>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x61
08190c5b +0x1eb:  test   %al,%al
08190c5d +0x1ed:  je     08190ca4 <+0x234>
08190c5f +0x1ef:  movl   $0x16,0x8(%esp)
08190c67 +0x1f7:  movl   $0x24d,0x4(%esp)
08190c6f +0x1ff:  mov    0xc(%ebp),%eax
08190c72 +0x202:  mov    %eax,(%esp)
08190c75 +0x205:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08190c7a +0x20a:  mov    0x10(%ebp),%eax
08190c7d +0x20d:  movzwl (%eax),%eax
08190c80 +0x210:  movzwl %ax,%eax
08190c83 +0x213:  mov    %eax,0x8(%esp)
08190c87 +0x217:  mov    0xc(%ebp),%eax
08190c8a +0x21a:  mov    %eax,0x4(%esp)
08190c8e +0x21e:  movl   $"USE AVATAR RECHANGE",(%esp)
08190c95 +0x225:  call   08197ba4 <_ZN4ARAD11PRINT_ERROR7isEmptyEPcP5CUsert>  ; ARAD::PRINT_ERROR::isEmpty(char*, CUser*, unsigned short)
08190c9a +0x22a:  mov    $0x0,%eax
08190c9f +0x22f:  jmp    08190de1 <+0x371>
08190ca4 +0x234:  mov    -0x20(%ebp),%eax
08190ca7 +0x237:  movzwl 0xf(%eax),%eax
08190cab +0x23b:  movzwl %ax,%ebx
08190cae +0x23e:  mov    -0x24(%ebp),%eax
08190cb1 +0x241:  mov    %eax,-0x3c(%ebp)
08190cb4 +0x244:  mov    0x8(%ebp),%eax
08190cb7 +0x247:  lea    0x8(%eax),%edx
08190cba +0x24a:  lea    -0x3c(%ebp),%eax
08190cbd +0x24d:  mov    %eax,0x4(%esp)
08190cc1 +0x251:  mov    %edx,(%esp)
08190cc4 +0x254:  call   081934ac <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x114>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x114
08190cc9 +0x259:  mov    (%eax),%eax
08190ccb +0x25b:  lea    (%ebx,%eax,1),%eax
08190cce +0x25e:  mov    %eax,-0x1c(%ebp)
08190cd1 +0x261:  mov    0x10(%ebp),%eax
08190cd4 +0x264:  mov    0x8(%eax),%eax
08190cd7 +0x267:  cmp    -0x1c(%ebp),%eax
08190cda +0x26a:  jge    08190ce5 <+0x275>
08190cdc +0x26c:  mov    0x10(%ebp),%eax
08190cdf +0x26f:  mov    0x8(%eax),%eax
08190ce2 +0x272:  mov    %eax,-0x1c(%ebp)
08190ce5 +0x275:  mov    -0x20(%ebp),%eax
08190ce8 +0x278:  movzwl 0xf(%eax),%eax
08190cec +0x27c:  movzwl %ax,%eax
08190cef +0x27f:  mov    -0x1c(%ebp),%edx
08190cf2 +0x282:  sub    %eax,%edx
08190cf4 +0x284:  mov    0x10(%ebp),%eax
08190cf7 +0x287:  mov    %edx,0x4(%eax)
08190cfa +0x28a:  mov    -0x1c(%ebp),%eax
08190cfd +0x28d:  mov    %eax,%edx
08190cff +0x28f:  mov    -0x20(%ebp),%eax
08190d02 +0x292:  mov    %dx,0xf(%eax)
08190d06 +0x296:  mov    -0x20(%ebp),%eax
08190d09 +0x299:  movzwl 0xf(%eax),%eax
08190d0d +0x29d:  movzwl %ax,%edx
08190d10 +0x2a0:  mov    0x10(%ebp),%eax
08190d13 +0x2a3:  mov    %edx,0xc(%eax)
08190d16 +0x2a6:  mov    0x10(%ebp),%eax
08190d19 +0x2a9:  movzwl (%eax),%eax
08190d1c +0x2ac:  movzwl %ax,%eax
08190d1f +0x2af:  mov    %eax,0xc(%esp)
08190d23 +0x2b3:  movl   $0x1,0x8(%esp)
08190d2b +0x2bb:  movl   $0x1,0x4(%esp)
08190d33 +0x2c3:  mov    0xc(%ebp),%eax
08190d36 +0x2c6:  mov    %eax,(%esp)
08190d39 +0x2c9:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
08190d3e +0x2ce:  mov    0xc(%ebp),%eax
08190d41 +0x2d1:  mov    %eax,(%esp)
08190d44 +0x2d4:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08190d49 +0x2d9:  mov    %eax,%ebx
08190d4b +0x2db:  mov    -0x20(%ebp),%eax
08190d4e +0x2de:  movzwl 0xf(%eax),%eax
08190d52 +0x2e2:  movzwl %ax,%eax
08190d55 +0x2e5:  mov    %eax,-0x5c(%ebp)
08190d58 +0x2e8:  mov    -0x20(%ebp),%eax
08190d5b +0x2eb:  mov    0x2(%eax),%edi
08190d5e +0x2ee:  mov    0x10(%ebp),%eax
08190d61 +0x2f1:  movzwl (%eax),%eax
08190d64 +0x2f4:  movzwl %ax,%esi
08190d67 +0x2f7:  movl   $0x0,0xc(%esp)
08190d6f +0x2ff:  movl   $0xfe,0x8(%esp)
08190d77 +0x307:  movl   $&_ZZN20AvatarRechargeServer8RechargeEP5CUserPN4arad24SigAradUseAvatarRechargeEE19__PRETTY_FUNCTION__,0x4(%esp)
08190d7f +0x30f:  lea    -0x38(%ebp),%eax
08190d82 +0x312:  mov    %eax,(%esp)
08190d85 +0x315:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08190d8a +0x31a:  mov    %ebx,0x14(%esp)
08190d8e +0x31e:  mov    -0x5c(%ebp),%eax
08190d91 +0x321:  mov    %eax,0x10(%esp)
08190d95 +0x325:  mov    %edi,0xc(%esp)
08190d99 +0x329:  mov    %esi,0x8(%esp)
08190d9d +0x32d:  movl   $"USE AVATAR RECHARGE : success [slot:%d] [item_id:%d] [Endurance:%d] [charac_no:%d]",0x4(%esp)
08190da5 +0x335:  lea    -0x38(%ebp),%eax
08190da8 +0x338:  mov    %eax,(%esp)
08190dab +0x33b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08190db0 +0x340:  lea    -0x54(%ebp),%eax
08190db3 +0x343:  mov    %eax,(%esp)
08190db6 +0x346:  call   081933f6 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x5e>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x5e
08190dbb +0x34b:  mov    -0x20(%ebp),%eax
08190dbe +0x34e:  mov    0x7(%eax),%eax
08190dc1 +0x351:  mov    %eax,-0x54(%ebp)
08190dc4 +0x354:  mov    -0x20(%ebp),%eax
08190dc7 +0x357:  movzwl 0xf(%eax),%eax
08190dcb +0x35b:  movzwl %ax,%eax
08190dce +0x35e:  mov    %eax,-0x50(%ebp)
08190dd1 +0x361:  lea    -0x54(%ebp),%eax
08190dd4 +0x364:  mov    %eax,(%esp)
08190dd7 +0x367:  call   08190dea <_ZN20AvatarRechargeServer23SaveAvatarEnduranceUnitERN4arad26SigAradAvatarEnduranceSaveE>  ; AvatarRechargeServer::SaveAvatarEnduranceUnit(arad::SigAradAvatarEnduranceSave&)
08190ddc +0x36c:  mov    $0x1,%eax
08190de1 +0x371:  add    $0x7c,%esp
08190de4 +0x374:  pop    %ebx
08190de5 +0x375:  pop    %esi
08190de6 +0x376:  pop    %edi
08190de7 +0x377:  pop    %ebp
08190de8 +0x378:  ret
08190de9 +0x379:  nop
```

## 反编译 C

```c
// AvatarRechargeServer::Recharge @ 0x8190a70

/* AvatarRechargeServer::Recharge(CUser*, arad::SigAradUseAvatarRecharge*) */

undefined4 __thiscall
AvatarRechargeServer::Recharge
          (AvatarRechargeServer *this,CUser *param_1,SigAradUseAvatarRecharge *param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  ushort uVar3;
  bool bVar4;
  char cVar5;
  CInventory *pCVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 local_58;
  uint local_54;
  cMyTrace local_50 [16];
  int local_40;
  cMyTrace local_3c [16];
  Inven_Item *local_2c;
  int local_28;
  Inven_Item *local_24;
  int local_20;
  
  uVar1 = *(ushort *)(param_2 + 2);
  pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  local_2c = (Inven_Item *)CInventory::GetInvenRef(pCVar6,1,(uint)uVar1);
  local_28 = *(int *)(local_2c + 2);
  if (local_2c != (Inven_Item *)0x0) {
    cVar5 = Inven_Item::isEmpty(local_2c);
    if (cVar5 == '\0') {
      bVar4 = false;
      goto LAB_08190acf;
    }
  }
  bVar4 = true;
LAB_08190acf:
  if (bVar4) {
    CUser::SendCmdErrorPacket(param_1,0x24d,0x16);
    ARAD::PRINT_ERROR::isEmpty("USE AVATAR RECHANGE",param_1,*(ushort *)(param_2 + 2));
    uVar7 = 0;
  }
  else {
    uVar2 = *(undefined2 *)(param_2 + 2);
    pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    cVar5 = CInventory::delete_item(pCVar6,1,uVar2,1,3,1);
    if (cVar5 == '\x01') {
      CUser::SendUpdateItemList(param_1,1,0,*(undefined2 *)(param_2 + 2));
      uVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      uVar1 = *(ushort *)(param_2 + 2);
      cMyTrace::cMyTrace(local_50,
                         "bool AvatarRechargeServer::Recharge(CUser*, arad::SigAradUseAvatarRecharge*)"
                         ,0xe8,0);
      cMyTrace::operator()
                (local_50,"USE AVATAR RECHANGE : delete_item() success. [slot:%d] [charac_no:%d]",
                 (uint)uVar1,uVar7);
      uVar1 = *(ushort *)param_2;
      pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      local_24 = (Inven_Item *)CInventory::GetInvenRef(pCVar6,2,(uint)uVar1);
      cVar5 = Inven_Item::isEmpty(local_24);
      if (cVar5 == '\0') {
        uVar1 = *(ushort *)(local_24 + 0xf);
        local_40 = local_28;
        piVar8 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                        operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                    *)(this + 8),&local_40);
        local_20 = (uint)uVar1 + *piVar8;
        if (*(int *)(param_2 + 8) < local_20) {
          local_20 = *(int *)(param_2 + 8);
        }
        *(uint *)(param_2 + 4) = local_20 - (uint)*(ushort *)(local_24 + 0xf);
        *(short *)(local_24 + 0xf) = (short)local_20;
        *(uint *)(param_2 + 0xc) = (uint)*(ushort *)(local_24 + 0xf);
        CUser::SendUpdateItemList(param_1,1,1,*(undefined2 *)param_2);
        uVar9 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        uVar1 = *(ushort *)(local_24 + 0xf);
        uVar7 = *(undefined4 *)(local_24 + 2);
        uVar3 = *(ushort *)param_2;
        cMyTrace::cMyTrace(local_3c,
                           "bool AvatarRechargeServer::Recharge(CUser*, arad::SigAradUseAvatarRecharge*)"
                           ,0xfe,0);
        cMyTrace::operator()
                  (local_3c,
                   "USE AVATAR RECHARGE : success [slot:%d] [item_id:%d] [Endurance:%d] [charac_no:%d]"
                   ,(uint)uVar3,uVar7,(uint)uVar1,uVar9);
        arad::SigAradAvatarEnduranceSave::SigAradAvatarEnduranceSave
                  ((SigAradAvatarEnduranceSave *)&local_58);
        local_58 = *(undefined4 *)(local_24 + 7);
        local_54 = (uint)*(ushort *)(local_24 + 0xf);
        SaveAvatarEnduranceUnit((SigAradAvatarEnduranceSave *)&local_58);
        uVar7 = 1;
      }
      else {
        CUser::SendCmdErrorPacket(param_1,0x24d,0x16);
        ARAD::PRINT_ERROR::isEmpty("USE AVATAR RECHANGE",param_1,*(ushort *)param_2);
        uVar7 = 0;
      }
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0x24d,0x13);
      ARAD::PRINT_ERROR::delete_item("USE AVATAR RECHANGE",param_1,*(ushort *)(param_2 + 2));
      uVar7 = 0;
    }
  }
  return uVar7;
}
```
