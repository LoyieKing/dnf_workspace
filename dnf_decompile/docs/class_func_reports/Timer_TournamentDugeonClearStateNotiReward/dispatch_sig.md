# dispatch_sig

`_ZN42Timer_TournamentDugeonClearStateNotiReward12dispatch_sigEiij`

`Timer_TournamentDugeonClearStateNotiReward::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `Timer_TournamentDugeonClearStateNotiReward` | `0x0863b2fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863b2fe  _ZN42Timer_TournamentDugeonClearStateNotiReward12dispatch_sigEiij
#           Timer_TournamentDugeonClearStateNotiReward::dispatch_sig(int, int, unsigned int)
# range [0x0863b2fe, 0x0863b4e9]
0863b2fe +0x000:  push   %ebp
0863b2ff +0x001:  mov    %esp,%ebp
0863b301 +0x003:  push   %esi
0863b302 +0x004:  push   %ebx
0863b303 +0x005:  sub    $0x30,%esp
0863b306 +0x008:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0863b30b +0x00d:  mov    0xc(%ebp),%edx
0863b30e +0x010:  mov    %edx,0x4(%esp)
0863b312 +0x014:  mov    %eax,(%esp)
0863b315 +0x017:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
0863b31a +0x01c:  mov    %eax,-0x10(%ebp)
0863b31d +0x01f:  cmpl   $0x0,-0x10(%ebp)
0863b321 +0x023:  jne    0863b32d <+0x2f>
0863b323 +0x025:  mov    $0x0,%eax
0863b328 +0x02a:  jmp    0863b4e3 <+0x1e5>
0863b32d +0x02f:  mov    0x10(%ebp),%eax
0863b330 +0x032:  mov    %eax,0x8(%esp)
0863b334 +0x036:  movl   $0x2e,0x4(%esp)
0863b33c +0x03e:  mov    -0x10(%ebp),%eax
0863b33f +0x041:  mov    %eax,(%esp)
0863b342 +0x044:  call   0859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>  ; CParty::check_timer_key(TIMER_MESSAGE, int)
0863b347 +0x049:  xor    $0x1,%eax
0863b34a +0x04c:  test   %al,%al
0863b34c +0x04e:  je     0863b358 <+0x5a>
0863b34e +0x050:  mov    $0x0,%eax
0863b353 +0x055:  jmp    0863b4e3 <+0x1e5>
0863b358 +0x05a:  mov    -0x10(%ebp),%eax
0863b35b +0x05d:  mov    %eax,(%esp)
0863b35e +0x060:  call   085bd6ac <_ZN6CParty30GetTournamentDungeonClearStateEv>  ; CParty::GetTournamentDungeonClearState()
0863b363 +0x065:  cmp    $0x1,%al
0863b365 +0x067:  sete   %al
0863b368 +0x06a:  test   %al,%al
0863b36a +0x06c:  je     0863b4de <+0x1e0>
0863b370 +0x072:  lea    -0x1c(%ebp),%eax
0863b373 +0x075:  mov    %eax,(%esp)
0863b376 +0x078:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0863b37b +0x07d:  lea    -0x1c(%ebp),%eax
0863b37e +0x080:  mov    %eax,(%esp)
0863b381 +0x083:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0863b386 +0x088:  movl   $0x1ca,0x8(%esp)
0863b38e +0x090:  movl   $0x1,0x4(%esp)
0863b396 +0x098:  lea    -0x1c(%ebp),%eax
0863b399 +0x09b:  mov    %eax,(%esp)
0863b39c +0x09e:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0863b3a1 +0x0a3:  movl   $0x1,0x4(%esp)
0863b3a9 +0x0ab:  lea    -0x1c(%ebp),%eax
0863b3ac +0x0ae:  mov    %eax,(%esp)
0863b3af +0x0b1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0863b3b4 +0x0b6:  movl   $0x0,-0xc(%ebp)
0863b3bb +0x0bd:  jmp    0863b45c <+0x15e>
0863b3c0 +0x0c2:  mov    -0xc(%ebp),%eax
0863b3c3 +0x0c5:  mov    %eax,0x4(%esp)
0863b3c7 +0x0c9:  mov    -0x10(%ebp),%eax
0863b3ca +0x0cc:  mov    %eax,(%esp)
0863b3cd +0x0cf:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
0863b3d2 +0x0d4:  test   %eax,%eax
0863b3d4 +0x0d6:  sete   %al
0863b3d7 +0x0d9:  test   %al,%al
0863b3d9 +0x0db:  je     0863b3f0 <+0xf2>
0863b3db +0x0dd:  movl   $0xffffffff,0x4(%esp)
0863b3e3 +0x0e5:  lea    -0x1c(%ebp),%eax
0863b3e6 +0x0e8:  mov    %eax,(%esp)
0863b3e9 +0x0eb:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0863b3ee +0x0f0:  jmp    0863b458 <+0x15a>
0863b3f0 +0x0f2:  mov    -0xc(%ebp),%eax
0863b3f3 +0x0f5:  mov    %eax,0x4(%esp)
0863b3f7 +0x0f9:  mov    -0x10(%ebp),%eax
0863b3fa +0x0fc:  mov    %eax,(%esp)
0863b3fd +0x0ff:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
0863b402 +0x104:  mov    %eax,(%esp)
0863b405 +0x107:  call   08657766 <_ZNK5CUser24getCurCharacTotalFatigueEv>  ; CUser::getCurCharacTotalFatigue() const
0863b40a +0x10c:  mov    %eax,%ebx
0863b40c +0x10e:  mov    -0xc(%ebp),%eax
0863b40f +0x111:  mov    %eax,0x4(%esp)
0863b413 +0x115:  mov    -0x10(%ebp),%eax
0863b416 +0x118:  mov    %eax,(%esp)
0863b419 +0x11b:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
0863b41e +0x120:  mov    %eax,(%esp)
0863b421 +0x123:  call   08657804 <_ZNK5CUser27getCurCharacTotalMaxFatigueEv>  ; CUser::getCurCharacTotalMaxFatigue() const
0863b426 +0x128:  cmp    %ax,%bx
0863b429 +0x12b:  sete   %al
0863b42c +0x12e:  test   %al,%al
0863b42e +0x130:  je     0863b445 <+0x147>
0863b430 +0x132:  movl   $0x0,0x4(%esp)
0863b438 +0x13a:  lea    -0x1c(%ebp),%eax
0863b43b +0x13d:  mov    %eax,(%esp)
0863b43e +0x140:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0863b443 +0x145:  jmp    0863b458 <+0x15a>
0863b445 +0x147:  movl   $0x1,0x4(%esp)
0863b44d +0x14f:  lea    -0x1c(%ebp),%eax
0863b450 +0x152:  mov    %eax,(%esp)
0863b453 +0x155:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0863b458 +0x15a:  addl   $0x1,-0xc(%ebp)
0863b45c +0x15e:  cmpl   $0x3,-0xc(%ebp)
0863b460 +0x162:  setle  %al
0863b463 +0x165:  test   %al,%al
0863b465 +0x167:  jne    0863b3c0 <+0xc2>
0863b46b +0x16d:  movl   $0x1,0x4(%esp)
0863b473 +0x175:  lea    -0x1c(%ebp),%eax
0863b476 +0x178:  mov    %eax,(%esp)
0863b479 +0x17b:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0863b47e +0x180:  lea    -0x1c(%ebp),%eax
0863b481 +0x183:  mov    %eax,0x4(%esp)
0863b485 +0x187:  mov    -0x10(%ebp),%eax
0863b488 +0x18a:  mov    %eax,(%esp)
0863b48b +0x18d:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
0863b490 +0x192:  movl   $0x2,0x4(%esp)
0863b498 +0x19a:  mov    -0x10(%ebp),%eax
0863b49b +0x19d:  mov    %eax,(%esp)
0863b49e +0x1a0:  call   085bd6bc <_ZN6CParty30SetTournamentDungeonClearStateEc>  ; CParty::SetTournamentDungeonClearState(char)
0863b4a3 +0x1a5:  movl   $0x2f,0x4(%esp)
0863b4ab +0x1ad:  mov    -0x10(%ebp),%eax
0863b4ae +0x1b0:  mov    %eax,(%esp)
0863b4b1 +0x1b3:  call   085bd6de <_ZN6CParty28InsertTournamentDungeonTimerE13TIMER_MESSAGE>  ; CParty::InsertTournamentDungeonTimer(TIMER_MESSAGE)
0863b4b6 +0x1b8:  jmp    0863b4d3 <+0x1d5>
0863b4b8 +0x1ba:  mov    %edx,%ebx
0863b4ba +0x1bc:  mov    %eax,%esi
0863b4bc +0x1be:  lea    -0x1c(%ebp),%eax
0863b4bf +0x1c1:  mov    %eax,(%esp)
0863b4c2 +0x1c4:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0863b4c7 +0x1c9:  mov    %esi,%eax
0863b4c9 +0x1cb:  mov    %ebx,%edx
0863b4cb +0x1cd:  mov    %eax,(%esp)
0863b4ce +0x1d0:  call   08ae3750 <_Unwind_Resume>
0863b4d3 +0x1d5:  lea    -0x1c(%ebp),%eax
0863b4d6 +0x1d8:  mov    %eax,(%esp)
0863b4d9 +0x1db:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0863b4de +0x1e0:  mov    $0x1,%eax
0863b4e3 +0x1e5:  add    $0x30,%esp
0863b4e6 +0x1e8:  pop    %ebx
0863b4e7 +0x1e9:  pop    %esi
0863b4e8 +0x1ea:  pop    %ebp
0863b4e9 +0x1eb:  ret
```

## 反编译 C

```c
// Timer_TournamentDugeonClearStateNotiReward::dispatch_sig @ 0x863b2fe

/* Timer_TournamentDugeonClearStateNotiReward::dispatch_sig(int, int, unsigned int) */

undefined4
Timer_TournamentDugeonClearStateNotiReward::dispatch_sig(int param_1,int param_2,uint param_3)

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
    cVar1 = CParty::check_timer_key(local_14,0x2e,param_3);
    if (cVar1 == '\x01') {
      cVar1 = CParty::GetTournamentDungeonClearState(local_14);
      if (cVar1 == '\x01') {
        PacketGuard::PacketGuard(local_20);
                    /* try { // try from 0863b381 to 0863b4b5 has its CatchHandler @ 0863b4b8 */
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_20);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x1ca);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
        for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
          iVar4 = CParty::get_user(local_14,local_10);
          if (iVar4 == 0) {
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,-1);
          }
          else {
            pCVar6 = (CUser *)CParty::get_user(local_14,local_10);
            sVar2 = CUser::getCurCharacTotalFatigue(pCVar6);
            pCVar6 = (CUser *)CParty::get_user(local_14,local_10);
            sVar3 = CUser::getCurCharacTotalMaxFatigue(pCVar6);
            if (sVar2 == sVar3) {
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
            }
            else {
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
            }
          }
        }
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
        CParty::send_to_party(local_14,local_20);
        CParty::SetTournamentDungeonClearState(local_14,'\x02');
        CParty::InsertTournamentDungeonTimer(local_14,0x2f);
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
