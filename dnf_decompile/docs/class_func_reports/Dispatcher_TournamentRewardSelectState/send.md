# send

`_ZN38Dispatcher_TournamentRewardSelectState4sendEP5CUserR9ParamBase`

`Dispatcher_TournamentRewardSelectState::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_TournamentRewardSelectState` | `0x081dfd74` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081dfd74  _ZN38Dispatcher_TournamentRewardSelectState4sendEP5CUserR9ParamBase
#           Dispatcher_TournamentRewardSelectState::send(CUser*, ParamBase&)
# range [0x081dfd74, 0x081dff31]
081dfd74 +0x000:  push   %ebp
081dfd75 +0x001:  mov    %esp,%ebp
081dfd77 +0x003:  push   %esi
081dfd78 +0x004:  push   %ebx
081dfd79 +0x005:  sub    $0x30,%esp
081dfd7c +0x008:  mov    0x10(%ebp),%eax
081dfd7f +0x00b:  mov    %eax,-0x14(%ebp)
081dfd82 +0x00e:  lea    -0x20(%ebp),%eax
081dfd85 +0x011:  mov    %eax,(%esp)
081dfd88 +0x014:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081dfd8d +0x019:  lea    -0x20(%ebp),%eax
081dfd90 +0x01c:  mov    %eax,(%esp)
081dfd93 +0x01f:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
081dfd98 +0x024:  movl   $0x1ca,0x8(%esp)
081dfda0 +0x02c:  movl   $0x1,0x4(%esp)
081dfda8 +0x034:  lea    -0x20(%ebp),%eax
081dfdab +0x037:  mov    %eax,(%esp)
081dfdae +0x03a:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081dfdb3 +0x03f:  mov    -0x14(%ebp),%eax
081dfdb6 +0x042:  mov    0x4(%eax),%eax
081dfdb9 +0x045:  test   %eax,%eax
081dfdbb +0x047:  jne    081dff1f <+0x1ab>
081dfdc1 +0x04d:  movl   $0x1,0x4(%esp)
081dfdc9 +0x055:  lea    -0x20(%ebp),%eax
081dfdcc +0x058:  mov    %eax,(%esp)
081dfdcf +0x05b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081dfdd4 +0x060:  mov    0xc(%ebp),%eax
081dfdd7 +0x063:  mov    %eax,(%esp)
081dfdda +0x066:  call   0822fe4e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54f8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54f8
081dfddf +0x06b:  movswl %ax,%ebx
081dfde2 +0x06e:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
081dfde7 +0x073:  mov    %ebx,0x4(%esp)
081dfdeb +0x077:  mov    %eax,(%esp)
081dfdee +0x07a:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
081dfdf3 +0x07f:  mov    %eax,-0x10(%ebp)
081dfdf6 +0x082:  cmpl   $0x0,-0x10(%ebp)
081dfdfa +0x086:  je     081dff1f <+0x1ab>
081dfe00 +0x08c:  movl   $0x0,-0xc(%ebp)
081dfe07 +0x093:  jmp    081dfea8 <+0x134>
081dfe0c +0x098:  mov    -0xc(%ebp),%eax
081dfe0f +0x09b:  mov    %eax,0x4(%esp)
081dfe13 +0x09f:  mov    -0x10(%ebp),%eax
081dfe16 +0x0a2:  mov    %eax,(%esp)
081dfe19 +0x0a5:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
081dfe1e +0x0aa:  test   %eax,%eax
081dfe20 +0x0ac:  sete   %al
081dfe23 +0x0af:  test   %al,%al
081dfe25 +0x0b1:  je     081dfe3c <+0xc8>
081dfe27 +0x0b3:  movl   $0xffffffff,0x4(%esp)
081dfe2f +0x0bb:  lea    -0x20(%ebp),%eax
081dfe32 +0x0be:  mov    %eax,(%esp)
081dfe35 +0x0c1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081dfe3a +0x0c6:  jmp    081dfea4 <+0x130>
081dfe3c +0x0c8:  mov    -0xc(%ebp),%eax
081dfe3f +0x0cb:  mov    %eax,0x4(%esp)
081dfe43 +0x0cf:  mov    -0x10(%ebp),%eax
081dfe46 +0x0d2:  mov    %eax,(%esp)
081dfe49 +0x0d5:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
081dfe4e +0x0da:  mov    %eax,(%esp)
081dfe51 +0x0dd:  call   08657766 <_ZNK5CUser24getCurCharacTotalFatigueEv>  ; CUser::getCurCharacTotalFatigue() const
081dfe56 +0x0e2:  mov    %eax,%ebx
081dfe58 +0x0e4:  mov    -0xc(%ebp),%eax
081dfe5b +0x0e7:  mov    %eax,0x4(%esp)
081dfe5f +0x0eb:  mov    -0x10(%ebp),%eax
081dfe62 +0x0ee:  mov    %eax,(%esp)
081dfe65 +0x0f1:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
081dfe6a +0x0f6:  mov    %eax,(%esp)
081dfe6d +0x0f9:  call   08657804 <_ZNK5CUser27getCurCharacTotalMaxFatigueEv>  ; CUser::getCurCharacTotalMaxFatigue() const
081dfe72 +0x0fe:  cmp    %ax,%bx
081dfe75 +0x101:  sete   %al
081dfe78 +0x104:  test   %al,%al
081dfe7a +0x106:  je     081dfe91 <+0x11d>
081dfe7c +0x108:  movl   $0x0,0x4(%esp)
081dfe84 +0x110:  lea    -0x20(%ebp),%eax
081dfe87 +0x113:  mov    %eax,(%esp)
081dfe8a +0x116:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081dfe8f +0x11b:  jmp    081dfea4 <+0x130>
081dfe91 +0x11d:  movl   $0x1,0x4(%esp)
081dfe99 +0x125:  lea    -0x20(%ebp),%eax
081dfe9c +0x128:  mov    %eax,(%esp)
081dfe9f +0x12b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081dfea4 +0x130:  addl   $0x1,-0xc(%ebp)
081dfea8 +0x134:  cmpl   $0x3,-0xc(%ebp)
081dfeac +0x138:  setle  %al
081dfeaf +0x13b:  test   %al,%al
081dfeb1 +0x13d:  jne    081dfe0c <+0x98>
081dfeb7 +0x143:  movl   $0x1,0x4(%esp)
081dfebf +0x14b:  lea    -0x20(%ebp),%eax
081dfec2 +0x14e:  mov    %eax,(%esp)
081dfec5 +0x151:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081dfeca +0x156:  lea    -0x20(%ebp),%eax
081dfecd +0x159:  mov    %eax,0x4(%esp)
081dfed1 +0x15d:  mov    -0x10(%ebp),%eax
081dfed4 +0x160:  mov    %eax,(%esp)
081dfed7 +0x163:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
081dfedc +0x168:  movl   $0x2,0x4(%esp)
081dfee4 +0x170:  mov    -0x10(%ebp),%eax
081dfee7 +0x173:  mov    %eax,(%esp)
081dfeea +0x176:  call   085bd6bc <_ZN6CParty30SetTournamentDungeonClearStateEc>  ; CParty::SetTournamentDungeonClearState(char)
081dfeef +0x17b:  movl   $0x2f,0x4(%esp)
081dfef7 +0x183:  mov    -0x10(%ebp),%eax
081dfefa +0x186:  mov    %eax,(%esp)
081dfefd +0x189:  call   085bd6de <_ZN6CParty28InsertTournamentDungeonTimerE13TIMER_MESSAGE>  ; CParty::InsertTournamentDungeonTimer(TIMER_MESSAGE)
081dff02 +0x18e:  jmp    081dff1f <+0x1ab>
081dff04 +0x190:  mov    %edx,%ebx
081dff06 +0x192:  mov    %eax,%esi
081dff08 +0x194:  lea    -0x20(%ebp),%eax
081dff0b +0x197:  mov    %eax,(%esp)
081dff0e +0x19a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081dff13 +0x19f:  mov    %esi,%eax
081dff15 +0x1a1:  mov    %ebx,%edx
081dff17 +0x1a3:  mov    %eax,(%esp)
081dff1a +0x1a6:  call   08ae3750 <_Unwind_Resume>
081dff1f +0x1ab:  lea    -0x20(%ebp),%eax
081dff22 +0x1ae:  mov    %eax,(%esp)
081dff25 +0x1b1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081dff2a +0x1b6:  add    $0x30,%esp
081dff2d +0x1b9:  pop    %ebx
081dff2e +0x1ba:  pop    %esi
081dff2f +0x1bb:  pop    %ebp
081dff30 +0x1bc:  ret
081dff31 +0x1bd:  nop
```

## 反编译 C

```c
// Dispatcher_TournamentRewardSelectState::send @ 0x81dfd74

/* Dispatcher_TournamentRewardSelectState::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_TournamentRewardSelectState::send
          (Dispatcher_TournamentRewardSelectState *this,CUser *param_1,ParamBase *param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  CUser *pCVar4;
  PacketGuard local_24 [12];
  ParamBase *local_18;
  CParty *local_14;
  int local_10;
  
  local_18 = param_2;
  PacketGuard::PacketGuard(local_24);
                    /* try { // try from 081dfd93 to 081dff01 has its CatchHandler @ 081dff04 */
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_24);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,1,0x1ca);
  if (*(int *)(local_18 + 4) == 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,1);
    CUser::GetPartyIndex(param_1);
    iVar3 = G_CGameManager();
    local_14 = (CParty *)CGameManager::GetParty(iVar3);
    if (local_14 != (CParty *)0x0) {
      for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
        iVar3 = CParty::get_user(local_14,local_10);
        if (iVar3 == 0) {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,-1);
        }
        else {
          pCVar4 = (CUser *)CParty::get_user(local_14,local_10);
          sVar1 = CUser::getCurCharacTotalFatigue(pCVar4);
          pCVar4 = (CUser *)CParty::get_user(local_14,local_10);
          sVar2 = CUser::getCurCharacTotalMaxFatigue(pCVar4);
          if (sVar1 == sVar2) {
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0);
          }
          else {
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,1);
          }
        }
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
      CParty::send_to_party(local_14,local_24);
      CParty::SetTournamentDungeonClearState(local_14,'\x02');
      CParty::InsertTournamentDungeonTimer(local_14,0x2f);
    }
  }
  PacketGuard::~PacketGuard(local_24);
  return;
}
```
