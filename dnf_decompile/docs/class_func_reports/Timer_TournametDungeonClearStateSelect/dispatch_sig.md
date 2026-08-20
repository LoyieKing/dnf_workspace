# dispatch_sig

`_ZN38Timer_TournametDungeonClearStateSelect12dispatch_sigEiij`

`Timer_TournametDungeonClearStateSelect::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `Timer_TournametDungeonClearStateSelect` | `0x0863b4ea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863b4ea  _ZN38Timer_TournametDungeonClearStateSelect12dispatch_sigEiij
#           Timer_TournametDungeonClearStateSelect::dispatch_sig(int, int, unsigned int)
# range [0x0863b4ea, 0x0863b6c3]
0863b4ea +0x000:  push   %ebp
0863b4eb +0x001:  mov    %esp,%ebp
0863b4ed +0x003:  push   %esi
0863b4ee +0x004:  push   %ebx
0863b4ef +0x005:  sub    $0x40,%esp
0863b4f2 +0x008:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0863b4f7 +0x00d:  mov    0xc(%ebp),%edx
0863b4fa +0x010:  mov    %edx,0x4(%esp)
0863b4fe +0x014:  mov    %eax,(%esp)
0863b501 +0x017:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
0863b506 +0x01c:  mov    %eax,-0x14(%ebp)
0863b509 +0x01f:  cmpl   $0x0,-0x14(%ebp)
0863b50d +0x023:  jne    0863b519 <+0x2f>
0863b50f +0x025:  mov    $0x0,%eax
0863b514 +0x02a:  jmp    0863b6bd <+0x1d3>
0863b519 +0x02f:  mov    0x10(%ebp),%eax
0863b51c +0x032:  mov    %eax,0x8(%esp)
0863b520 +0x036:  movl   $0x2f,0x4(%esp)
0863b528 +0x03e:  mov    -0x14(%ebp),%eax
0863b52b +0x041:  mov    %eax,(%esp)
0863b52e +0x044:  call   0859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>  ; CParty::check_timer_key(TIMER_MESSAGE, int)
0863b533 +0x049:  xor    $0x1,%eax
0863b536 +0x04c:  test   %al,%al
0863b538 +0x04e:  je     0863b544 <+0x5a>
0863b53a +0x050:  mov    $0x0,%eax
0863b53f +0x055:  jmp    0863b6bd <+0x1d3>
0863b544 +0x05a:  mov    -0x14(%ebp),%eax
0863b547 +0x05d:  mov    %eax,(%esp)
0863b54a +0x060:  call   085bd6ac <_ZN6CParty30GetTournamentDungeonClearStateEv>  ; CParty::GetTournamentDungeonClearState()
0863b54f +0x065:  cmp    $0x2,%al
0863b551 +0x067:  sete   %al
0863b554 +0x06a:  test   %al,%al
0863b556 +0x06c:  je     0863b6b8 <+0x1ce>
0863b55c +0x072:  lea    -0x20(%ebp),%eax
0863b55f +0x075:  mov    %eax,(%esp)
0863b562 +0x078:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0863b567 +0x07d:  lea    -0x20(%ebp),%eax
0863b56a +0x080:  mov    %eax,(%esp)
0863b56d +0x083:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0863b572 +0x088:  movl   $0x1cb,0x8(%esp)
0863b57a +0x090:  movl   $0x1,0x4(%esp)
0863b582 +0x098:  lea    -0x20(%ebp),%eax
0863b585 +0x09b:  mov    %eax,(%esp)
0863b588 +0x09e:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0863b58d +0x0a3:  movl   $0x1,0x4(%esp)
0863b595 +0x0ab:  lea    -0x20(%ebp),%eax
0863b598 +0x0ae:  mov    %eax,(%esp)
0863b59b +0x0b1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0863b5a0 +0x0b6:  mov    -0x14(%ebp),%eax
0863b5a3 +0x0b9:  add    $0x17bc,%eax
0863b5a8 +0x0be:  mov    %eax,-0x10(%ebp)
0863b5ab +0x0c1:  lea    -0x2c(%ebp),%eax
0863b5ae +0x0c4:  mov    %eax,(%esp)
0863b5b1 +0x0c7:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
0863b5b6 +0x0cc:  lea    -0x2c(%ebp),%eax
0863b5b9 +0x0cf:  mov    %eax,0x4(%esp)
0863b5bd +0x0d3:  mov    -0x14(%ebp),%eax
0863b5c0 +0x0d6:  mov    %eax,(%esp)
0863b5c3 +0x0d9:  call   085bd1dc <_ZN6CParty19GetValidPartyMemberERSt6vectorIiSaIiEE>  ; CParty::GetValidPartyMember(std::vector<int, std::allocator<int> >&)
0863b5c8 +0x0de:  mov    -0x14(%ebp),%eax
0863b5cb +0x0e1:  mov    %eax,(%esp)
0863b5ce +0x0e4:  call   085bd79e <_ZN6CParty19isTournamentVictoryEv>  ; CParty::isTournamentVictory()
0863b5d3 +0x0e9:  mov    %al,-0x9(%ebp)
0863b5d6 +0x0ec:  lea    -0x2c(%ebp),%eax
0863b5d9 +0x0ef:  mov    %eax,0x8(%esp)
0863b5dd +0x0f3:  movl   $0x2,0x4(%esp)
0863b5e5 +0x0fb:  mov    -0x10(%ebp),%eax
0863b5e8 +0x0fe:  mov    %eax,(%esp)
0863b5eb +0x101:  call   08284d08 <_ZN24CTournamentDungeonReward20isCardSelectCompleteE32ENUM_TOURNAMENT_REWARD_CARD_TYPERKSt6vectorIiSaIiEE>  ; CTournamentDungeonReward::isCardSelectComplete(ENUM_TOURNAMENT_REWARD_CARD_TYPE, std::vector<int, std::allocator<int> > const&)
0863b5f0 +0x106:  xor    $0x1,%eax
0863b5f3 +0x109:  test   %al,%al
0863b5f5 +0x10b:  je     0863b611 <+0x127>
0863b5f7 +0x10d:  movzbl -0x9(%ebp),%eax
0863b5fb +0x111:  mov    %eax,0x8(%esp)
0863b5ff +0x115:  lea    -0x2c(%ebp),%eax
0863b602 +0x118:  mov    %eax,0x4(%esp)
0863b606 +0x11c:  mov    -0x10(%ebp),%eax
0863b609 +0x11f:  mov    %eax,(%esp)
0863b60c +0x122:  call   0828523c <_ZN24CTournamentDungeonReward15ForceSelectCardERSt6vectorIiSaIiEEb>  ; CTournamentDungeonReward::ForceSelectCard(std::vector<int, std::allocator<int> >&, bool)
0863b611 +0x127:  lea    -0x20(%ebp),%eax
0863b614 +0x12a:  mov    %eax,0x4(%esp)
0863b618 +0x12e:  mov    -0x10(%ebp),%eax
0863b61b +0x131:  mov    %eax,(%esp)
0863b61e +0x134:  call   08284fa4 <_ZN24CTournamentDungeonReward16MakeSelectPacketEP11PacketGuard>  ; CTournamentDungeonReward::MakeSelectPacket(PacketGuard*)
0863b623 +0x139:  movl   $0x1,0x4(%esp)
0863b62b +0x141:  lea    -0x20(%ebp),%eax
0863b62e +0x144:  mov    %eax,(%esp)
0863b631 +0x147:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0863b636 +0x14c:  lea    -0x20(%ebp),%eax
0863b639 +0x14f:  mov    %eax,0x4(%esp)
0863b63d +0x153:  mov    -0x14(%ebp),%eax
0863b640 +0x156:  mov    %eax,(%esp)
0863b643 +0x159:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
0863b648 +0x15e:  movl   $0x3,0x4(%esp)
0863b650 +0x166:  mov    -0x14(%ebp),%eax
0863b653 +0x169:  mov    %eax,(%esp)
0863b656 +0x16c:  call   085bd6bc <_ZN6CParty30SetTournamentDungeonClearStateEc>  ; CParty::SetTournamentDungeonClearState(char)
0863b65b +0x171:  movzbl -0x9(%ebp),%eax
0863b65f +0x175:  mov    %eax,0x4(%esp)
0863b663 +0x179:  mov    -0x14(%ebp),%eax
0863b666 +0x17c:  mov    %eax,(%esp)
0863b669 +0x17f:  call   085bd236 <_ZN6CParty22TournamentDungeonClearEb>  ; CParty::TournamentDungeonClear(bool)
0863b66e +0x184:  jmp    0863b685 <+0x19b>
0863b670 +0x186:  mov    %edx,%ebx
0863b672 +0x188:  mov    %eax,%esi
0863b674 +0x18a:  lea    -0x2c(%ebp),%eax
0863b677 +0x18d:  mov    %eax,(%esp)
0863b67a +0x190:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0863b67f +0x195:  mov    %esi,%eax
0863b681 +0x197:  mov    %ebx,%edx
0863b683 +0x199:  jmp    0863b692 <+0x1a8>
0863b685 +0x19b:  lea    -0x2c(%ebp),%eax
0863b688 +0x19e:  mov    %eax,(%esp)
0863b68b +0x1a1:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0863b690 +0x1a6:  jmp    0863b6ad <+0x1c3>
0863b692 +0x1a8:  mov    %edx,%ebx
0863b694 +0x1aa:  mov    %eax,%esi
0863b696 +0x1ac:  lea    -0x20(%ebp),%eax
0863b699 +0x1af:  mov    %eax,(%esp)
0863b69c +0x1b2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0863b6a1 +0x1b7:  mov    %esi,%eax
0863b6a3 +0x1b9:  mov    %ebx,%edx
0863b6a5 +0x1bb:  mov    %eax,(%esp)
0863b6a8 +0x1be:  call   08ae3750 <_Unwind_Resume>
0863b6ad +0x1c3:  lea    -0x20(%ebp),%eax
0863b6b0 +0x1c6:  mov    %eax,(%esp)
0863b6b3 +0x1c9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0863b6b8 +0x1ce:  mov    $0x1,%eax
0863b6bd +0x1d3:  add    $0x40,%esp
0863b6c0 +0x1d6:  pop    %ebx
0863b6c1 +0x1d7:  pop    %esi
0863b6c2 +0x1d8:  pop    %ebp
0863b6c3 +0x1d9:  ret
```

## 反编译 C

```c
// Timer_TournametDungeonClearStateSelect::dispatch_sig @ 0x863b4ea

/* Timer_TournametDungeonClearStateSelect::dispatch_sig(int, int, unsigned int) */

undefined4
Timer_TournametDungeonClearStateSelect::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  vector<int,std::allocator<int>> local_30 [12];
  PacketGuard local_24 [12];
  CParty *local_18;
  CParty *local_14;
  bool local_d;
  
  iVar2 = G_CGameManager();
  local_18 = (CParty *)CGameManager::GetParty(iVar2);
  if (local_18 == (CParty *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar1 = CParty::check_timer_key(local_18,0x2f,param_3);
    if (cVar1 == '\x01') {
      cVar1 = CParty::GetTournamentDungeonClearState(local_18);
      if (cVar1 == '\x02') {
        PacketGuard::PacketGuard(local_24);
                    /* try { // try from 0863b56d to 0863b5b5 has its CatchHandler @ 0863b692 */
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_24);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,1,0x1cb);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,1);
        local_14 = local_18 + 0x17bc;
        std::vector<int,std::allocator<int>>::vector(local_30);
                    /* try { // try from 0863b5c3 to 0863b66d has its CatchHandler @ 0863b670 */
        CParty::GetValidPartyMember(local_18,(vector *)local_30);
        local_d = (bool)CParty::isTournamentVictory(local_18);
        cVar1 = CTournamentDungeonReward::isCardSelectComplete
                          ((CTournamentDungeonReward *)local_14,2,local_30);
        if (cVar1 != '\x01') {
          CTournamentDungeonReward::ForceSelectCard
                    ((CTournamentDungeonReward *)local_14,(vector *)local_30,local_d);
        }
        CTournamentDungeonReward::MakeSelectPacket((CTournamentDungeonReward *)local_14,local_24);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
        CParty::send_to_party(local_18,local_24);
        CParty::SetTournamentDungeonClearState(local_18,'\x03');
        CParty::TournamentDungeonClear(local_18,local_d);
                    /* try { // try from 0863b68b to 0863b68f has its CatchHandler @ 0863b692 */
        std::vector<int,std::allocator<int>>::~vector(local_30);
        PacketGuard::~PacketGuard(local_24);
      }
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
