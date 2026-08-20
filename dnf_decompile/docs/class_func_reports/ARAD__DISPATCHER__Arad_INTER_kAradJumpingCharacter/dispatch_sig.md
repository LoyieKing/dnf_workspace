# dispatch_sig

`_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter12dispatch_sigEP5CUserPci`

`ARAD::DISPATCHER::Arad_INTER_kAradJumpingCharacter::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `ARAD::DISPATCHER::Arad_INTER_kAradJumpingCharacter` | `0x081999f2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081999f2  _ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter12dispatch_sigEP5CUserPci
#           ARAD::DISPATCHER::Arad_INTER_kAradJumpingCharacter::dispatch_sig(CUser*, char*, int)
# range [0x081999f2, 0x08199d6d]
081999f2 +0x000:  push   %ebp
081999f3 +0x001:  mov    %esp,%ebp
081999f5 +0x003:  push   %esi
081999f6 +0x004:  push   %ebx
081999f7 +0x005:  sub    $0x40,%esp
081999fa +0x008:  cmpl   $0x0,0xc(%ebp)
081999fe +0x00c:  jne    08199a0a <+0x18>
08199a00 +0x00e:  mov    $0x5e9,%ebx
08199a05 +0x013:  jmp    08199d64 <+0x372>
08199a0a +0x018:  mov    0xc(%ebp),%eax
08199a0d +0x01b:  mov    %eax,(%esp)
08199a10 +0x01e:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08199a15 +0x023:  test   %eax,%eax
08199a17 +0x025:  sete   %al
08199a1a +0x028:  test   %al,%al
08199a1c +0x02a:  je     08199a28 <+0x36>
08199a1e +0x02c:  mov    $0x5ee,%ebx
08199a23 +0x031:  jmp    08199d64 <+0x372>
08199a28 +0x036:  mov    0x10(%ebp),%eax
08199a2b +0x039:  mov    %eax,-0x18(%ebp)
08199a2e +0x03c:  cmpl   $0x0,-0x18(%ebp)
08199a32 +0x040:  jne    08199a6a <+0x78>
08199a34 +0x042:  movl   $"JUMPING_CHARACTER INTER_DSP(SigAradJumpingCharacter) null.",0x10(%esp)
08199a3c +0x04a:  movl   $0x5f3,0xc(%esp)
08199a44 +0x052:  movl   $&_ZZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
08199a4c +0x05a:  movl   $"localjapan/Arad_InterDispatcher.cpp",0x4(%esp)
08199a54 +0x062:  movl   $0x1,(%esp)
08199a5b +0x069:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08199a60 +0x06e:  mov    $0x5f4,%ebx
08199a65 +0x073:  jmp    08199d64 <+0x372>
08199a6a +0x078:  mov    -0x18(%ebp),%eax
08199a6d +0x07b:  movzwl 0xb(%eax),%eax
08199a71 +0x07f:  movzwl %ax,%ebx
08199a74 +0x082:  mov    0xc(%ebp),%eax
08199a77 +0x085:  mov    %eax,(%esp)
08199a7a +0x088:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08199a7f +0x08d:  movl   $0x1,0x14(%esp)
08199a87 +0x095:  movl   $0x3,0x10(%esp)
08199a8f +0x09d:  movl   $0x1,0xc(%esp)
08199a97 +0x0a5:  mov    %ebx,0x8(%esp)
08199a9b +0x0a9:  movl   $0x1,0x4(%esp)
08199aa3 +0x0b1:  mov    %eax,(%esp)
08199aa6 +0x0b4:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
08199aab +0x0b9:  xor    $0x1,%eax
08199aae +0x0bc:  test   %al,%al
08199ab0 +0x0be:  je     08199ad7 <+0xe5>
08199ab2 +0x0c0:  movl   $0x13,0x8(%esp)
08199aba +0x0c8:  movl   $0x249,0x4(%esp)
08199ac2 +0x0d0:  mov    0xc(%ebp),%eax
08199ac5 +0x0d3:  mov    %eax,(%esp)
08199ac8 +0x0d6:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08199acd +0x0db:  mov    $0x0,%ebx
08199ad2 +0x0e0:  jmp    08199d64 <+0x372>
08199ad7 +0x0e5:  mov    -0x18(%ebp),%eax
08199ada +0x0e8:  movzwl 0xb(%eax),%eax
08199ade +0x0ec:  movzwl %ax,%eax
08199ae1 +0x0ef:  mov    %eax,0xc(%esp)
08199ae5 +0x0f3:  movl   $0x0,0x8(%esp)
08199aed +0x0fb:  movl   $0x1,0x4(%esp)
08199af5 +0x103:  mov    0xc(%ebp),%eax
08199af8 +0x106:  mov    %eax,(%esp)
08199afb +0x109:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
08199b00 +0x10e:  jmp    08199b1f <+0x12d>
08199b02 +0x110:  mov    0xc(%ebp),%eax
08199b05 +0x113:  mov    %eax,(%esp)
08199b08 +0x116:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08199b0d +0x11b:  add    $0x1,%eax
08199b10 +0x11e:  mov    %eax,0x4(%esp)
08199b14 +0x122:  mov    0xc(%ebp),%eax
08199b17 +0x125:  mov    %eax,(%esp)
08199b1a +0x128:  call   0867a95c <_ZN5CUser14SetCharacLevelEi>  ; CUser::SetCharacLevel(int)
08199b1f +0x12d:  mov    0xc(%ebp),%eax
08199b22 +0x130:  mov    %eax,(%esp)
08199b25 +0x133:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08199b2a +0x138:  cmp    $0x13,%eax
08199b2d +0x13b:  setle  %al
08199b30 +0x13e:  test   %al,%al
08199b32 +0x140:  jne    08199b02 <+0x110>
08199b34 +0x142:  mov    -0x18(%ebp),%eax
08199b37 +0x145:  movzbl 0xa(%eax),%eax
08199b3b +0x149:  movzbl %al,%eax
08199b3e +0x14c:  mov    %eax,-0x14(%ebp)
08199b41 +0x14f:  movl   $0x0,-0x10(%ebp)
08199b48 +0x156:  mov    -0x10(%ebp),%eax
08199b4b +0x159:  mov    %eax,0x8(%esp)
08199b4f +0x15d:  mov    -0x14(%ebp),%eax
08199b52 +0x160:  mov    %eax,0x4(%esp)
08199b56 +0x164:  mov    0xc(%ebp),%eax
08199b59 +0x167:  mov    %eax,(%esp)
08199b5c +0x16a:  call   0867b048 <_ZN5CUser17ChangeGrowType_GMEii>  ; CUser::ChangeGrowType_GM(int, int)
08199b61 +0x16f:  mov    -0x18(%ebp),%eax
08199b64 +0x172:  movzbl 0x9(%eax),%eax
08199b68 +0x176:  cmp    $0x2,%al
08199b6a +0x178:  jne    08199c03 <+0x211>
08199b70 +0x17e:  jmp    08199b8f <+0x19d>
08199b72 +0x180:  mov    0xc(%ebp),%eax
08199b75 +0x183:  mov    %eax,(%esp)
08199b78 +0x186:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08199b7d +0x18b:  add    $0x1,%eax
08199b80 +0x18e:  mov    %eax,0x4(%esp)
08199b84 +0x192:  mov    0xc(%ebp),%eax
08199b87 +0x195:  mov    %eax,(%esp)
08199b8a +0x198:  call   0867a95c <_ZN5CUser14SetCharacLevelEi>  ; CUser::SetCharacLevel(int)
08199b8f +0x19d:  mov    0xc(%ebp),%eax
08199b92 +0x1a0:  mov    %eax,(%esp)
08199b95 +0x1a3:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08199b9a +0x1a8:  cmp    $0x31,%eax
08199b9d +0x1ab:  setle  %al
08199ba0 +0x1ae:  test   %al,%al
08199ba2 +0x1b0:  jne    08199b72 <+0x180>
08199ba4 +0x1b2:  movl   $0x1,-0x10(%ebp)
08199bab +0x1b9:  mov    0xc(%ebp),%eax
08199bae +0x1bc:  mov    %eax,(%esp)
08199bb1 +0x1bf:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
08199bb6 +0x1c4:  movsbl %al,%eax
08199bb9 +0x1c7:  mov    -0x10(%ebp),%edx
08199bbc +0x1ca:  mov    %edx,0x8(%esp)
08199bc0 +0x1ce:  mov    %eax,0x4(%esp)
08199bc4 +0x1d2:  mov    0xc(%ebp),%eax
08199bc7 +0x1d5:  mov    %eax,(%esp)
08199bca +0x1d8:  call   0867b048 <_ZN5CUser17ChangeGrowType_GMEii>  ; CUser::ChangeGrowType_GM(int, int)
08199bcf +0x1dd:  jmp    08199bee <+0x1fc>
08199bd1 +0x1df:  mov    0xc(%ebp),%eax
08199bd4 +0x1e2:  mov    %eax,(%esp)
08199bd7 +0x1e5:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08199bdc +0x1ea:  add    $0x1,%eax
08199bdf +0x1ed:  mov    %eax,0x4(%esp)
08199be3 +0x1f1:  mov    0xc(%ebp),%eax
08199be6 +0x1f4:  mov    %eax,(%esp)
08199be9 +0x1f7:  call   0867a95c <_ZN5CUser14SetCharacLevelEi>  ; CUser::SetCharacLevel(int)
08199bee +0x1fc:  mov    0xc(%ebp),%eax
08199bf1 +0x1ff:  mov    %eax,(%esp)
08199bf4 +0x202:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08199bf9 +0x207:  cmp    $0x36,%eax
08199bfc +0x20a:  setle  %al
08199bff +0x20d:  test   %al,%al
08199c01 +0x20f:  jne    08199bd1 <+0x1df>
08199c03 +0x211:  mov    0xc(%ebp),%eax
08199c06 +0x214:  mov    %eax,(%esp)
08199c09 +0x217:  call   0866c46a <_ZN5CUser15send_skill_infoEv>  ; CUser::send_skill_info()
08199c0e +0x21c:  mov    0xc(%ebp),%eax
08199c11 +0x21f:  mov    %eax,0x4(%esp)
08199c15 +0x223:  mov    0x8(%ebp),%eax
08199c18 +0x226:  mov    %eax,(%esp)
08199c1b +0x229:  call   081993c4 <_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter14clearEpicQuestEP5CUser>  ; ARAD::DISPATCHER::Arad_INTER_kAradJumpingCharacter::clearEpicQuest(CUser*)
08199c20 +0x22e:  lea    -0x24(%ebp),%eax
08199c23 +0x231:  mov    %eax,(%esp)
08199c26 +0x234:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08199c2b +0x239:  lea    -0x24(%ebp),%ebx
08199c2e +0x23c:  mov    0xc(%ebp),%eax
08199c31 +0x23f:  mov    %eax,(%esp)
08199c34 +0x242:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
08199c39 +0x247:  mov    %ebx,0x4(%esp)
08199c3d +0x24b:  mov    %eax,(%esp)
08199c40 +0x24e:  call   086abba8 <_ZNK9UserQuest14get_quest_infoEPc>  ; UserQuest::get_quest_info(char*) const
08199c45 +0x253:  lea    -0x24(%ebp),%eax
08199c48 +0x256:  mov    %eax,0x4(%esp)
08199c4c +0x25a:  mov    0xc(%ebp),%eax
08199c4f +0x25d:  mov    %eax,(%esp)
08199c52 +0x260:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08199c57 +0x265:  mov    0xc(%ebp),%eax
08199c5a +0x268:  mov    %eax,(%esp)
08199c5d +0x26b:  call   0868b044 <_ZN5CUser21send_clear_quest_listEv>  ; CUser::send_clear_quest_list()
08199c62 +0x270:  mov    0xc(%ebp),%eax
08199c65 +0x273:  mov    %eax,(%esp)
08199c68 +0x276:  call   0868ac24 <_ZN5CUser12sendCharacQpEv>  ; CUser::sendCharacQp()
08199c6d +0x27b:  mov    0xc(%ebp),%eax
08199c70 +0x27e:  mov    %eax,(%esp)
08199c73 +0x281:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08199c78 +0x286:  mov    %eax,%ebx
08199c7a +0x288:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08199c7f +0x28d:  mov    %ebx,0x4(%esp)
08199c83 +0x291:  mov    %eax,(%esp)
08199c86 +0x294:  call   08360442 <_ZNK12CDataManager13get_level_expEi>  ; CDataManager::get_level_exp(int) const
08199c8b +0x299:  mov    %eax,-0xc(%ebp)
08199c8e +0x29c:  mov    0xc(%ebp),%eax
08199c91 +0x29f:  mov    -0xc(%ebp),%edx
08199c94 +0x2a2:  mov    %edx,0x4(%esp)
08199c98 +0x2a6:  mov    %eax,(%esp)
08199c9b +0x2a9:  call   0819a87c <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x562>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x562
08199ca0 +0x2ae:  mov    -0x18(%ebp),%eax
08199ca3 +0x2b1:  movzbl 0xa(%eax),%eax
08199ca7 +0x2b5:  movzbl %al,%edx
08199caa +0x2b8:  mov    -0x18(%ebp),%eax
08199cad +0x2bb:  movzbl 0x9(%eax),%eax
08199cb1 +0x2bf:  movzbl %al,%eax
08199cb4 +0x2c2:  mov    %edx,0xc(%esp)
08199cb8 +0x2c6:  mov    %eax,0x8(%esp)
08199cbc +0x2ca:  mov    0xc(%ebp),%eax
08199cbf +0x2cd:  mov    %eax,0x4(%esp)
08199cc3 +0x2d1:  mov    0x8(%ebp),%eax
08199cc6 +0x2d4:  mov    %eax,(%esp)
08199cc9 +0x2d7:  call   0819973e <_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter13sendHelperBoxEP5CUserhh>  ; ARAD::DISPATCHER::Arad_INTER_kAradJumpingCharacter::sendHelperBox(CUser*, unsigned char, unsigned char)
08199cce +0x2dc:  movl   $0x0,0xc(%esp)
08199cd6 +0x2e4:  movl   $0x25,0x8(%esp)
08199cde +0x2ec:  movl   $0x1,0x4(%esp)
08199ce6 +0x2f4:  mov    0xc(%ebp),%eax
08199ce9 +0x2f7:  mov    %eax,(%esp)
08199cec +0x2fa:  call   0867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>  ; CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)
08199cf1 +0x2ff:  movl   $0x0,0xc(%esp)
08199cf9 +0x307:  movl   $0x2,0x8(%esp)
08199d01 +0x30f:  movl   $0x0,0x4(%esp)
08199d09 +0x317:  mov    0xc(%ebp),%eax
08199d0c +0x31a:  mov    %eax,(%esp)
08199d0f +0x31d:  call   0867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>  ; CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)
08199d14 +0x322:  movl   $0x1,0xc(%esp)
08199d1c +0x32a:  movl   $0x2,0x8(%esp)
08199d24 +0x332:  movl   $0x1,0x4(%esp)
08199d2c +0x33a:  mov    0xc(%ebp),%eax
08199d2f +0x33d:  mov    %eax,(%esp)
08199d32 +0x340:  call   0867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>  ; CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)
08199d37 +0x345:  mov    $0x0,%ebx
08199d3c +0x34a:  lea    -0x24(%ebp),%eax
08199d3f +0x34d:  mov    %eax,(%esp)
08199d42 +0x350:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08199d47 +0x355:  jmp    08199d64 <+0x372>
08199d49 +0x357:  mov    %edx,%ebx
08199d4b +0x359:  mov    %eax,%esi
08199d4d +0x35b:  lea    -0x24(%ebp),%eax
08199d50 +0x35e:  mov    %eax,(%esp)
08199d53 +0x361:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08199d58 +0x366:  mov    %esi,%eax
08199d5a +0x368:  mov    %ebx,%edx
08199d5c +0x36a:  mov    %eax,(%esp)
08199d5f +0x36d:  call   08ae3750 <_Unwind_Resume>
08199d64 +0x372:  mov    %ebx,%eax
08199d66 +0x374:  add    $0x40,%esp
08199d69 +0x377:  pop    %ebx
08199d6a +0x378:  pop    %esi
08199d6b +0x379:  pop    %ebp
08199d6c +0x37a:  ret
08199d6d +0x37b:  nop
```

## 反编译 C

```c
// ARAD::DISPATCHER::Arad_INTER_kAradJumpingCharacter::dispatch_sig @ 0x81999f2

/* ARAD::DISPATCHER::Arad_INTER_kAradJumpingCharacter::dispatch_sig(CUser*, char*, int) */

undefined4
ARAD::DISPATCHER::Arad_INTER_kAradJumpingCharacter::dispatch_sig
          (CUser *param_1,char *param_2,int param_3)

{
  undefined2 uVar1;
  char cVar2;
  int iVar3;
  CInventory *pCVar4;
  UserQuest *this;
  CDataManager *this_00;
  undefined4 uVar5;
  PacketGuard local_28 [12];
  int local_1c;
  uint local_18;
  int local_14;
  int local_10;
  
  if (param_2 == (char *)0x0) {
    uVar5 = 0x5e9;
  }
  else {
    iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar3 == 0) {
      uVar5 = 0x5ee;
    }
    else {
      local_1c = param_3;
      if (param_3 == 0) {
        LogManager::logFormat
                  (1,"localjapan/Arad_InterDispatcher.cpp",
                   "virtual int ARAD::DISPATCHER::Arad_INTER_kAradJumpingCharacter::dispatch_sig(CUser*, char*, int)"
                   ,0x5f3,"JUMPING_CHARACTER INTER_DSP(SigAradJumpingCharacter) null.");
        uVar5 = 0x5f4;
      }
      else {
        uVar1 = *(undefined2 *)(param_3 + 0xb);
        pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
        cVar2 = CInventory::delete_item(pCVar4,1,uVar1,1,3,1);
        if (cVar2 == '\x01') {
          CUser::SendUpdateItemList((CUser *)param_2,1,0,*(undefined2 *)(local_1c + 0xb));
          while (iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2), iVar3 < 0x14
                ) {
            iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2);
            CUser::SetCharacLevel((CUser *)param_2,iVar3 + 1);
          }
          local_18 = (uint)*(byte *)(local_1c + 10);
          local_14 = 0;
          CUser::ChangeGrowType_GM((CUser *)param_2,local_18,0);
          if (*(char *)(local_1c + 9) == '\x02') {
            while (iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2),
                  iVar3 < 0x32) {
              iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2);
              CUser::SetCharacLevel((CUser *)param_2,iVar3 + 1);
            }
            local_14 = 1;
            cVar2 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_2);
            CUser::ChangeGrowType_GM((CUser *)param_2,(int)cVar2,local_14);
            while (iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2),
                  iVar3 < 0x37) {
              iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2);
              CUser::SetCharacLevel((CUser *)param_2,iVar3 + 1);
            }
          }
          CUser::send_skill_info((CUser *)param_2);
          clearEpicQuest((Arad_INTER_kAradJumpingCharacter *)param_1,(CUser *)param_2);
          PacketGuard::PacketGuard(local_28);
          this = (UserQuest *)CUser::getCurCharacQuestR((CUser *)param_2);
                    /* try { // try from 08199c40 to 08199d36 has its CatchHandler @ 08199d49 */
          UserQuest::get_quest_info(this,(char *)local_28);
          CUser::Send((CUser *)param_2,local_28);
          CUser::send_clear_quest_list((CUser *)param_2);
          CUser::sendCharacQp((CUser *)param_2);
          iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2);
          this_00 = (CDataManager *)G_CDataManager();
          local_10 = CDataManager::get_level_exp(this_00,iVar3);
          CUserCharacInfo::setCurCharacExp((CUserCharacInfo *)param_2,local_10);
          sendHelperBox((Arad_INTER_kAradJumpingCharacter *)param_1,(CUser *)param_2,
                        *(uchar *)(local_1c + 9),*(uchar *)(local_1c + 10));
          CUser::SendNotiPacket((CUser *)param_2,1,0x25,0);
          CUser::SendNotiPacket((CUser *)param_2,0,2,0);
          CUser::SendNotiPacket((CUser *)param_2,1,2,1);
          uVar5 = 0;
          PacketGuard::~PacketGuard(local_28);
        }
        else {
          CUser::SendCmdErrorPacket((CUser *)param_2,0x249,0x13);
          uVar5 = 0;
        }
      }
    }
  }
  return uVar5;
}
```
