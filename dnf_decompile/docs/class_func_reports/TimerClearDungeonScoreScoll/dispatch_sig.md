# dispatch_sig

`_ZN27TimerClearDungeonScoreScoll12dispatch_sigEiij`

`TimerClearDungeonScoreScoll::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerClearDungeonScoreScoll` | `0x086345d2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086345d2  _ZN27TimerClearDungeonScoreScoll12dispatch_sigEiij
#           TimerClearDungeonScoreScoll::dispatch_sig(int, int, unsigned int)
# range [0x086345d2, 0x086347c5]
086345d2 +0x000:  push   %ebp
086345d3 +0x001:  mov    %esp,%ebp
086345d5 +0x003:  push   %esi
086345d6 +0x004:  push   %ebx
086345d7 +0x005:  sub    $0x30,%esp
086345da +0x008:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
086345df +0x00d:  mov    0xc(%ebp),%edx
086345e2 +0x010:  mov    %edx,0x4(%esp)
086345e6 +0x014:  mov    %eax,(%esp)
086345e9 +0x017:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
086345ee +0x01c:  mov    %eax,-0x10(%ebp)
086345f1 +0x01f:  cmpl   $0x0,-0x10(%ebp)
086345f5 +0x023:  jne    08634601 <+0x2f>
086345f7 +0x025:  mov    $0x0,%eax
086345fc +0x02a:  jmp    086347bf <+0x1ed>
08634601 +0x02f:  mov    0x10(%ebp),%eax
08634604 +0x032:  mov    %eax,0x8(%esp)
08634608 +0x036:  movl   $0x12,0x4(%esp)
08634610 +0x03e:  mov    -0x10(%ebp),%eax
08634613 +0x041:  mov    %eax,(%esp)
08634616 +0x044:  call   0859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>  ; CParty::check_timer_key(TIMER_MESSAGE, int)
0863461b +0x049:  xor    $0x1,%eax
0863461e +0x04c:  test   %al,%al
08634620 +0x04e:  je     0863462c <+0x5a>
08634622 +0x050:  mov    $0x0,%eax
08634627 +0x055:  jmp    086347bf <+0x1ed>
0863462c +0x05a:  mov    -0x10(%ebp),%eax
0863462f +0x05d:  mov    %eax,(%esp)
08634632 +0x060:  call   0822d89c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2f46>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2f46
08634637 +0x065:  cmp    $0x3,%al
08634639 +0x067:  sete   %al
0863463c +0x06a:  test   %al,%al
0863463e +0x06c:  je     086347ba <+0x1e8>
08634644 +0x072:  lea    -0x1c(%ebp),%eax
08634647 +0x075:  mov    %eax,(%esp)
0863464a +0x078:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0863464f +0x07d:  movl   $0x49,0x8(%esp)
08634657 +0x085:  movl   $0x1,0x4(%esp)
0863465f +0x08d:  lea    -0x1c(%ebp),%eax
08634662 +0x090:  mov    %eax,(%esp)
08634665 +0x093:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0863466a +0x098:  movl   $0x1,0x4(%esp)
08634672 +0x0a0:  lea    -0x1c(%ebp),%eax
08634675 +0x0a3:  mov    %eax,(%esp)
08634678 +0x0a6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0863467d +0x0ab:  movl   $0x0,-0xc(%ebp)
08634684 +0x0b2:  jmp    08634725 <+0x153>
08634689 +0x0b7:  mov    -0xc(%ebp),%eax
0863468c +0x0ba:  mov    %eax,0x4(%esp)
08634690 +0x0be:  mov    -0x10(%ebp),%eax
08634693 +0x0c1:  mov    %eax,(%esp)
08634696 +0x0c4:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
0863469b +0x0c9:  test   %eax,%eax
0863469d +0x0cb:  sete   %al
086346a0 +0x0ce:  test   %al,%al
086346a2 +0x0d0:  je     086346b9 <+0xe7>
086346a4 +0x0d2:  movl   $0xffffffff,0x4(%esp)
086346ac +0x0da:  lea    -0x1c(%ebp),%eax
086346af +0x0dd:  mov    %eax,(%esp)
086346b2 +0x0e0:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086346b7 +0x0e5:  jmp    08634721 <+0x14f>
086346b9 +0x0e7:  mov    -0xc(%ebp),%eax
086346bc +0x0ea:  mov    %eax,0x4(%esp)
086346c0 +0x0ee:  mov    -0x10(%ebp),%eax
086346c3 +0x0f1:  mov    %eax,(%esp)
086346c6 +0x0f4:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
086346cb +0x0f9:  mov    %eax,(%esp)
086346ce +0x0fc:  call   08657766 <_ZNK5CUser24getCurCharacTotalFatigueEv>  ; CUser::getCurCharacTotalFatigue() const
086346d3 +0x101:  mov    %eax,%ebx
086346d5 +0x103:  mov    -0xc(%ebp),%eax
086346d8 +0x106:  mov    %eax,0x4(%esp)
086346dc +0x10a:  mov    -0x10(%ebp),%eax
086346df +0x10d:  mov    %eax,(%esp)
086346e2 +0x110:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
086346e7 +0x115:  mov    %eax,(%esp)
086346ea +0x118:  call   08657804 <_ZNK5CUser27getCurCharacTotalMaxFatigueEv>  ; CUser::getCurCharacTotalMaxFatigue() const
086346ef +0x11d:  cmp    %ax,%bx
086346f2 +0x120:  sete   %al
086346f5 +0x123:  test   %al,%al
086346f7 +0x125:  je     0863470e <+0x13c>
086346f9 +0x127:  movl   $0x0,0x4(%esp)
08634701 +0x12f:  lea    -0x1c(%ebp),%eax
08634704 +0x132:  mov    %eax,(%esp)
08634707 +0x135:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0863470c +0x13a:  jmp    08634721 <+0x14f>
0863470e +0x13c:  movl   $0x1,0x4(%esp)
08634716 +0x144:  lea    -0x1c(%ebp),%eax
08634719 +0x147:  mov    %eax,(%esp)
0863471c +0x14a:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08634721 +0x14f:  addl   $0x1,-0xc(%ebp)
08634725 +0x153:  cmpl   $0x3,-0xc(%ebp)
08634729 +0x157:  setle  %al
0863472c +0x15a:  test   %al,%al
0863472e +0x15c:  jne    08634689 <+0xb7>
08634734 +0x162:  movl   $0x1,0x4(%esp)
0863473c +0x16a:  lea    -0x1c(%ebp),%eax
0863473f +0x16d:  mov    %eax,(%esp)
08634742 +0x170:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08634747 +0x175:  lea    -0x1c(%ebp),%eax
0863474a +0x178:  mov    %eax,0x4(%esp)
0863474e +0x17c:  mov    -0x10(%ebp),%eax
08634751 +0x17f:  mov    %eax,(%esp)
08634754 +0x182:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
08634759 +0x187:  movl   $0x4,0x4(%esp)
08634761 +0x18f:  mov    -0x10(%ebp),%eax
08634764 +0x192:  mov    %eax,(%esp)
08634767 +0x195:  call   0822d8ac <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2f56>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2f56
0863476c +0x19a:  movl   $0x1e,0x4(%esp)
08634774 +0x1a2:  mov    -0x10(%ebp),%eax
08634777 +0x1a5:  mov    %eax,(%esp)
0863477a +0x1a8:  call   085b2226 <_ZN6CParty36insert_time_dungeon_score_scroll_msgEi>  ; CParty::insert_time_dungeon_score_scroll_msg(int)
0863477f +0x1ad:  movl   $0x4,0x4(%esp)
08634787 +0x1b5:  mov    -0x10(%ebp),%eax
0863478a +0x1b8:  mov    %eax,(%esp)
0863478d +0x1bb:  call   085b216a <_ZN6CParty27insert_time_card_select_msgEi>  ; CParty::insert_time_card_select_msg(int)
08634792 +0x1c0:  jmp    086347af <+0x1dd>
08634794 +0x1c2:  mov    %edx,%ebx
08634796 +0x1c4:  mov    %eax,%esi
08634798 +0x1c6:  lea    -0x1c(%ebp),%eax
0863479b +0x1c9:  mov    %eax,(%esp)
0863479e +0x1cc:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086347a3 +0x1d1:  mov    %esi,%eax
086347a5 +0x1d3:  mov    %ebx,%edx
086347a7 +0x1d5:  mov    %eax,(%esp)
086347aa +0x1d8:  call   08ae3750 <_Unwind_Resume>
086347af +0x1dd:  lea    -0x1c(%ebp),%eax
086347b2 +0x1e0:  mov    %eax,(%esp)
086347b5 +0x1e3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086347ba +0x1e8:  mov    $0x1,%eax
086347bf +0x1ed:  add    $0x30,%esp
086347c2 +0x1f0:  pop    %ebx
086347c3 +0x1f1:  pop    %esi
086347c4 +0x1f2:  pop    %ebp
086347c5 +0x1f3:  ret
```

## 反编译 C

```c
// TimerClearDungeonScoreScoll::dispatch_sig @ 0x86345d2

/* TimerClearDungeonScoreScoll::dispatch_sig(int, int, unsigned int) */

undefined4 TimerClearDungeonScoreScoll::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  CUser *pCVar6;
  PacketGuard local_20 [12];
  CParty *local_14;
  int local_10;
  
  iVar4 = G_CGameManager();
  local_14 = (CParty *)CGameManager::GetParty(iVar4);
  if (local_14 == (CParty *)0x0) {
    uVar5 = 0;
  }
  else {
    cVar1 = CParty::check_timer_key(local_14,0x12,param_3);
    if (cVar1 == '\x01') {
      cVar1 = CParty::get_dungeon_clear_state(local_14);
      if (cVar1 == '\x03') {
        PacketGuard::PacketGuard(local_20);
                    /* try { // try from 08634665 to 08634791 has its CatchHandler @ 08634794 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x49);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
        for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
          iVar4 = CParty::get_user(local_14,local_10);
          if (iVar4 == 0) {
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,-1);
          }
          else {
            pCVar6 = (CUser *)CParty::get_user(local_14,local_10);
            sVar2 = CUser::getCurCharacTotalFatigue(pCVar6);
            pCVar6 = (CUser *)CParty::get_user(local_14,local_10);
            sVar3 = CUser::getCurCharacTotalMaxFatigue(pCVar6);
            if (sVar2 == sVar3) {
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
        CParty::insert_time_dungeon_score_scroll_msg(local_14,0x1e);
        CParty::insert_time_card_select_msg(local_14,4);
        PacketGuard::~PacketGuard(local_20);
      }
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
  }
  return uVar5;
}
```
