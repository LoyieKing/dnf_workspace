# dispatch_sig

`_ZN34Dispatcher_Card_Select_Right_State12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_Card_Select_Right_State::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Card_Select_Right_State` | `0x081ff504` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ff504  _ZN34Dispatcher_Card_Select_Right_State12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_Card_Select_Right_State::dispatch_sig(CUser*, PacketBuf&)
# range [0x081ff504, 0x081ff7dd]
081ff504 +0x000:  push   %ebp
081ff505 +0x001:  mov    %esp,%ebp
081ff507 +0x003:  push   %esi
081ff508 +0x004:  push   %ebx
081ff509 +0x005:  sub    $0x40,%esp
081ff50c +0x008:  mov    0xc(%ebp),%eax
081ff50f +0x00b:  mov    %eax,(%esp)
081ff512 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081ff517 +0x013:  cmp    $0x5,%eax
081ff51a +0x016:  setne  %al
081ff51d +0x019:  test   %al,%al
081ff51f +0x01b:  je     081ff52b <+0x27>
081ff521 +0x01d:  mov    $0x0,%ebx
081ff526 +0x022:  jmp    081ff7d4 <+0x2d0>
081ff52b +0x027:  mov    0xc(%ebp),%eax
081ff52e +0x02a:  mov    %eax,(%esp)
081ff531 +0x02d:  call   08690eca <_ZNK5CUser12getMoveSpaceEv>  ; CUser::getMoveSpace() const
081ff536 +0x032:  cmp    $0x1,%eax
081ff539 +0x035:  sete   %al
081ff53c +0x038:  test   %al,%al
081ff53e +0x03a:  je     081ff54a <+0x46>
081ff540 +0x03c:  mov    $0x0,%ebx
081ff545 +0x041:  jmp    081ff7d4 <+0x2d0>
081ff54a +0x046:  mov    0xc(%ebp),%eax
081ff54d +0x049:  mov    %eax,(%esp)
081ff550 +0x04c:  call   0822fe4e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54f8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54f8
081ff555 +0x051:  movswl %ax,%ebx
081ff558 +0x054:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
081ff55d +0x059:  mov    %ebx,0x4(%esp)
081ff561 +0x05d:  mov    %eax,(%esp)
081ff564 +0x060:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
081ff569 +0x065:  mov    %eax,-0x10(%ebp)
081ff56c +0x068:  cmpl   $0x0,-0x10(%ebp)
081ff570 +0x06c:  sete   %al
081ff573 +0x06f:  test   %al,%al
081ff575 +0x071:  je     081ff5a2 <+0x9e>
081ff577 +0x073:  movl   $0x0,0xc(%esp)
081ff57f +0x07b:  movl   $0x0,0x8(%esp)
081ff587 +0x083:  movl   $&_ZZN34Dispatcher_Card_Select_Right_State12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081ff58f +0x08b:  movl   $0x9328,(%esp)
081ff596 +0x092:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ff59b +0x097:  mov    %eax,%ebx
081ff59d +0x099:  jmp    081ff7d4 <+0x2d0>
081ff5a2 +0x09e:  mov    -0x10(%ebp),%eax
081ff5a5 +0x0a1:  mov    0xcac(%eax),%eax
081ff5ab +0x0a7:  test   %eax,%eax
081ff5ad +0x0a9:  je     081ff5cb <+0xc7>
081ff5af +0x0ab:  mov    -0x10(%ebp),%eax
081ff5b2 +0x0ae:  mov    0xcac(%eax),%eax
081ff5b8 +0x0b4:  mov    %eax,(%esp)
081ff5bb +0x0b7:  call   0822b4fa <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xba4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xba4
081ff5c0 +0x0bc:  test   %al,%al
081ff5c2 +0x0be:  je     081ff5cb <+0xc7>
081ff5c4 +0x0c0:  mov    $0x1,%eax
081ff5c9 +0x0c5:  jmp    081ff5d0 <+0xcc>
081ff5cb +0x0c7:  mov    $0x0,%eax
081ff5d0 +0x0cc:  test   %al,%al
081ff5d2 +0x0ce:  je     081ff5de <+0xda>
081ff5d4 +0x0d0:  mov    $0x0,%ebx
081ff5d9 +0x0d5:  jmp    081ff7d4 <+0x2d0>
081ff5de +0x0da:  mov    0xc(%ebp),%eax
081ff5e1 +0x0dd:  mov    %eax,0x4(%esp)
081ff5e5 +0x0e1:  mov    -0x10(%ebp),%eax
081ff5e8 +0x0e4:  mov    %eax,(%esp)
081ff5eb +0x0e7:  call   085b3fd8 <_ZN6CParty22CheckRecvFromAllMemberEP5CUser>  ; CParty::CheckRecvFromAllMember(CUser*)
081ff5f0 +0x0ec:  xor    $0x1,%eax
081ff5f3 +0x0ef:  test   %al,%al
081ff5f5 +0x0f1:  je     081ff601 <+0xfd>
081ff5f7 +0x0f3:  mov    $0x0,%ebx
081ff5fc +0x0f8:  jmp    081ff7d4 <+0x2d0>
081ff601 +0x0fd:  mov    -0x10(%ebp),%eax
081ff604 +0x100:  mov    %eax,(%esp)
081ff607 +0x103:  call   0822d89c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2f46>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2f46
081ff60c +0x108:  cmp    $0x3,%al
081ff60e +0x10a:  setg   %al
081ff611 +0x10d:  test   %al,%al
081ff613 +0x10f:  je     081ff659 <+0x155>
081ff615 +0x111:  mov    0xc(%ebp),%eax
081ff618 +0x114:  mov    %eax,(%esp)
081ff61b +0x117:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081ff620 +0x11c:  movl   $0x0,0x14(%esp)
081ff628 +0x124:  movl   $0x0,0x10(%esp)
081ff630 +0x12c:  movl   $0x1,0xc(%esp)
081ff638 +0x134:  movl   $0x197,0x8(%esp)
081ff640 +0x13c:  mov    0xc(%ebp),%edx
081ff643 +0x13f:  mov    %edx,0x4(%esp)
081ff647 +0x143:  mov    %eax,(%esp)
081ff64a +0x146:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081ff64f +0x14b:  mov    $0x0,%ebx
081ff654 +0x150:  jmp    081ff7d4 <+0x2d0>
081ff659 +0x155:  lea    -0x1c(%ebp),%eax
081ff65c +0x158:  mov    %eax,(%esp)
081ff65f +0x15b:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081ff664 +0x160:  movl   $0x49,0x8(%esp)
081ff66c +0x168:  movl   $0x1,0x4(%esp)
081ff674 +0x170:  lea    -0x1c(%ebp),%eax
081ff677 +0x173:  mov    %eax,(%esp)
081ff67a +0x176:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081ff67f +0x17b:  movl   $0x1,0x4(%esp)
081ff687 +0x183:  lea    -0x1c(%ebp),%eax
081ff68a +0x186:  mov    %eax,(%esp)
081ff68d +0x189:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081ff692 +0x18e:  movl   $0x0,-0xc(%ebp)
081ff699 +0x195:  jmp    081ff73a <+0x236>
081ff69e +0x19a:  mov    -0xc(%ebp),%eax
081ff6a1 +0x19d:  mov    %eax,0x4(%esp)
081ff6a5 +0x1a1:  mov    -0x10(%ebp),%eax
081ff6a8 +0x1a4:  mov    %eax,(%esp)
081ff6ab +0x1a7:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
081ff6b0 +0x1ac:  test   %eax,%eax
081ff6b2 +0x1ae:  sete   %al
081ff6b5 +0x1b1:  test   %al,%al
081ff6b7 +0x1b3:  je     081ff6ce <+0x1ca>
081ff6b9 +0x1b5:  movl   $0xffffffff,0x4(%esp)
081ff6c1 +0x1bd:  lea    -0x1c(%ebp),%eax
081ff6c4 +0x1c0:  mov    %eax,(%esp)
081ff6c7 +0x1c3:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081ff6cc +0x1c8:  jmp    081ff736 <+0x232>
081ff6ce +0x1ca:  mov    -0xc(%ebp),%eax
081ff6d1 +0x1cd:  mov    %eax,0x4(%esp)
081ff6d5 +0x1d1:  mov    -0x10(%ebp),%eax
081ff6d8 +0x1d4:  mov    %eax,(%esp)
081ff6db +0x1d7:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
081ff6e0 +0x1dc:  mov    %eax,(%esp)
081ff6e3 +0x1df:  call   08657766 <_ZNK5CUser24getCurCharacTotalFatigueEv>  ; CUser::getCurCharacTotalFatigue() const
081ff6e8 +0x1e4:  mov    %eax,%ebx
081ff6ea +0x1e6:  mov    -0xc(%ebp),%eax
081ff6ed +0x1e9:  mov    %eax,0x4(%esp)
081ff6f1 +0x1ed:  mov    -0x10(%ebp),%eax
081ff6f4 +0x1f0:  mov    %eax,(%esp)
081ff6f7 +0x1f3:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
081ff6fc +0x1f8:  mov    %eax,(%esp)
081ff6ff +0x1fb:  call   08657804 <_ZNK5CUser27getCurCharacTotalMaxFatigueEv>  ; CUser::getCurCharacTotalMaxFatigue() const
081ff704 +0x200:  cmp    %ax,%bx
081ff707 +0x203:  sete   %al
081ff70a +0x206:  test   %al,%al
081ff70c +0x208:  je     081ff723 <+0x21f>
081ff70e +0x20a:  movl   $0x0,0x4(%esp)
081ff716 +0x212:  lea    -0x1c(%ebp),%eax
081ff719 +0x215:  mov    %eax,(%esp)
081ff71c +0x218:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081ff721 +0x21d:  jmp    081ff736 <+0x232>
081ff723 +0x21f:  movl   $0x1,0x4(%esp)
081ff72b +0x227:  lea    -0x1c(%ebp),%eax
081ff72e +0x22a:  mov    %eax,(%esp)
081ff731 +0x22d:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081ff736 +0x232:  addl   $0x1,-0xc(%ebp)
081ff73a +0x236:  cmpl   $0x3,-0xc(%ebp)
081ff73e +0x23a:  setle  %al
081ff741 +0x23d:  test   %al,%al
081ff743 +0x23f:  jne    081ff69e <+0x19a>
081ff749 +0x245:  movl   $0x1,0x4(%esp)
081ff751 +0x24d:  lea    -0x1c(%ebp),%eax
081ff754 +0x250:  mov    %eax,(%esp)
081ff757 +0x253:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081ff75c +0x258:  lea    -0x1c(%ebp),%eax
081ff75f +0x25b:  mov    %eax,0x4(%esp)
081ff763 +0x25f:  mov    -0x10(%ebp),%eax
081ff766 +0x262:  mov    %eax,(%esp)
081ff769 +0x265:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
081ff76e +0x26a:  movl   $0x4,0x4(%esp)
081ff776 +0x272:  mov    -0x10(%ebp),%eax
081ff779 +0x275:  mov    %eax,(%esp)
081ff77c +0x278:  call   0822d8ac <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2f56>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2f56
081ff781 +0x27d:  movl   $0x1e,0x4(%esp)
081ff789 +0x285:  mov    -0x10(%ebp),%eax
081ff78c +0x288:  mov    %eax,(%esp)
081ff78f +0x28b:  call   085b2284 <_ZN6CParty33insert_time_card_select_right_msgEi>  ; CParty::insert_time_card_select_right_msg(int)
081ff794 +0x290:  movl   $0x4,0x4(%esp)
081ff79c +0x298:  mov    -0x10(%ebp),%eax
081ff79f +0x29b:  mov    %eax,(%esp)
081ff7a2 +0x29e:  call   085b216a <_ZN6CParty27insert_time_card_select_msgEi>  ; CParty::insert_time_card_select_msg(int)
081ff7a7 +0x2a3:  mov    $0x0,%ebx
081ff7ac +0x2a8:  lea    -0x1c(%ebp),%eax
081ff7af +0x2ab:  mov    %eax,(%esp)
081ff7b2 +0x2ae:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081ff7b7 +0x2b3:  jmp    081ff7d4 <+0x2d0>
081ff7b9 +0x2b5:  mov    %edx,%ebx
081ff7bb +0x2b7:  mov    %eax,%esi
081ff7bd +0x2b9:  lea    -0x1c(%ebp),%eax
081ff7c0 +0x2bc:  mov    %eax,(%esp)
081ff7c3 +0x2bf:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081ff7c8 +0x2c4:  mov    %esi,%eax
081ff7ca +0x2c6:  mov    %ebx,%edx
081ff7cc +0x2c8:  mov    %eax,(%esp)
081ff7cf +0x2cb:  call   08ae3750 <_Unwind_Resume>
081ff7d4 +0x2d0:  mov    %ebx,%eax
081ff7d6 +0x2d2:  add    $0x40,%esp
081ff7d9 +0x2d5:  pop    %ebx
081ff7da +0x2d6:  pop    %esi
081ff7db +0x2d7:  pop    %ebp
081ff7dc +0x2d8:  ret
081ff7dd +0x2d9:  nop
```

## 反编译 C

```c
// Dispatcher_Card_Select_Right_State::dispatch_sig @ 0x81ff504

/* Dispatcher_Card_Select_Right_State::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_Card_Select_Right_State::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  CHackAnalyzer *pCVar7;
  CUser *pCVar8;
  PacketGuard local_20 [12];
  CParty *local_14;
  int local_10;
  
  iVar5 = CUser::get_state((CUser *)param_2);
  if (iVar5 != 5) {
    return 0;
  }
  iVar5 = CUser::getMoveSpace((CUser *)param_2);
  if (iVar5 == 1) {
    return 0;
  }
  CUser::GetPartyIndex((CUser *)param_2);
  iVar5 = G_CGameManager();
  local_14 = (CParty *)CGameManager::GetParty(iVar5);
  if (local_14 == (CParty *)0x0) {
    uVar6 = LineFunc(0x9328,
                     "virtual int Dispatcher_Card_Select_Right_State::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar6;
  }
  if ((*(int *)(local_14 + 0xcac) == 0) ||
     (cVar2 = CDungeon::isTowerOfDespairDungeon(*(CDungeon **)(local_14 + 0xcac)), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((!bVar1) &&
     (cVar2 = CParty::CheckRecvFromAllMember(local_14,(CUser *)param_2), cVar2 == '\x01')) {
    cVar2 = CParty::get_dungeon_clear_state(local_14);
    if (cVar2 < '\x04') {
      PacketGuard::PacketGuard(local_20);
                    /* try { // try from 081ff67a to 081ff7a6 has its CatchHandler @ 081ff7b9 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x49);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
      for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
        iVar5 = CParty::get_user(local_14,local_10);
        if (iVar5 == 0) {
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,-1);
        }
        else {
          pCVar8 = (CUser *)CParty::get_user(local_14,local_10);
          sVar3 = CUser::getCurCharacTotalFatigue(pCVar8);
          pCVar8 = (CUser *)CParty::get_user(local_14,local_10);
          sVar4 = CUser::getCurCharacTotalMaxFatigue(pCVar8);
          if (sVar3 == sVar4) {
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,0);
          }
          else {
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,1);
          }
        }
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
      CParty::send_to_party(local_14,local_20);
      CParty::set_dungeon_clear_state(local_14,'\x04');
      CParty::insert_time_card_select_right_msg(local_14,0x1e);
      CParty::insert_time_card_select_msg(local_14,4);
      PacketGuard::~PacketGuard(local_20);
    }
    else {
      pCVar7 = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)param_2);
      WongWork::CHackAnalyzer::addServerHackCnt(pCVar7,param_2,0x197,1,0,0);
    }
  }
  return 0;
}
```
