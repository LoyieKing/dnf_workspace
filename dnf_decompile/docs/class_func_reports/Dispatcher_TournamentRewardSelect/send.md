# send

`_ZN33Dispatcher_TournamentRewardSelect4sendEP5CUserR9ParamBase`

`Dispatcher_TournamentRewardSelect::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_TournamentRewardSelect` | `0x081e02b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e02b0  _ZN33Dispatcher_TournamentRewardSelect4sendEP5CUserR9ParamBase
#           Dispatcher_TournamentRewardSelect::send(CUser*, ParamBase&)
# range [0x081e02b0, 0x081e046b]
081e02b0 +0x000:  push   %ebp
081e02b1 +0x001:  mov    %esp,%ebp
081e02b3 +0x003:  push   %esi
081e02b4 +0x004:  push   %ebx
081e02b5 +0x005:  sub    $0x40,%esp
081e02b8 +0x008:  mov    0x10(%ebp),%eax
081e02bb +0x00b:  mov    %eax,-0x18(%ebp)
081e02be +0x00e:  lea    -0x24(%ebp),%eax
081e02c1 +0x011:  mov    %eax,(%esp)
081e02c4 +0x014:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081e02c9 +0x019:  lea    -0x24(%ebp),%eax
081e02cc +0x01c:  mov    %eax,(%esp)
081e02cf +0x01f:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
081e02d4 +0x024:  movl   $0x1cb,0x8(%esp)
081e02dc +0x02c:  movl   $0x1,0x4(%esp)
081e02e4 +0x034:  lea    -0x24(%ebp),%eax
081e02e7 +0x037:  mov    %eax,(%esp)
081e02ea +0x03a:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081e02ef +0x03f:  mov    -0x18(%ebp),%eax
081e02f2 +0x042:  mov    0x4(%eax),%eax
081e02f5 +0x045:  test   %eax,%eax
081e02f7 +0x047:  jne    081e045a <+0x1aa>
081e02fd +0x04d:  movl   $0x1,0x4(%esp)
081e0305 +0x055:  lea    -0x24(%ebp),%eax
081e0308 +0x058:  mov    %eax,(%esp)
081e030b +0x05b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e0310 +0x060:  mov    0xc(%ebp),%eax
081e0313 +0x063:  mov    %eax,(%esp)
081e0316 +0x066:  call   0822fe4e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54f8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54f8
081e031b +0x06b:  movswl %ax,%ebx
081e031e +0x06e:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
081e0323 +0x073:  mov    %ebx,0x4(%esp)
081e0327 +0x077:  mov    %eax,(%esp)
081e032a +0x07a:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
081e032f +0x07f:  mov    %eax,-0x14(%ebp)
081e0332 +0x082:  cmpl   $0x0,-0x14(%ebp)
081e0336 +0x086:  je     081e045a <+0x1aa>
081e033c +0x08c:  mov    -0x14(%ebp),%eax
081e033f +0x08f:  add    $0x17bc,%eax
081e0344 +0x094:  mov    %eax,-0x10(%ebp)
081e0347 +0x097:  lea    -0x24(%ebp),%eax
081e034a +0x09a:  mov    %eax,0x4(%esp)
081e034e +0x09e:  mov    -0x10(%ebp),%eax
081e0351 +0x0a1:  mov    %eax,(%esp)
081e0354 +0x0a4:  call   08284fa4 <_ZN24CTournamentDungeonReward16MakeSelectPacketEP11PacketGuard>  ; CTournamentDungeonReward::MakeSelectPacket(PacketGuard*)
081e0359 +0x0a9:  movl   $0x1,0x4(%esp)
081e0361 +0x0b1:  lea    -0x24(%ebp),%eax
081e0364 +0x0b4:  mov    %eax,(%esp)
081e0367 +0x0b7:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081e036c +0x0bc:  lea    -0x24(%ebp),%eax
081e036f +0x0bf:  mov    %eax,0x4(%esp)
081e0373 +0x0c3:  mov    -0x14(%ebp),%eax
081e0376 +0x0c6:  mov    %eax,(%esp)
081e0379 +0x0c9:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
081e037e +0x0ce:  mov    0xc(%ebp),%eax
081e0381 +0x0d1:  mov    %eax,0x4(%esp)
081e0385 +0x0d5:  mov    -0x14(%ebp),%eax
081e0388 +0x0d8:  mov    %eax,(%esp)
081e038b +0x0db:  call   085b3fd8 <_ZN6CParty22CheckRecvFromAllMemberEP5CUser>  ; CParty::CheckRecvFromAllMember(CUser*)
081e0390 +0x0e0:  xor    $0x1,%eax
081e0393 +0x0e3:  test   %al,%al
081e0395 +0x0e5:  jne    081e045a <+0x1aa>
081e039b +0x0eb:  lea    -0x30(%ebp),%eax
081e039e +0x0ee:  mov    %eax,(%esp)
081e03a1 +0x0f1:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
081e03a6 +0x0f6:  lea    -0x30(%ebp),%eax
081e03a9 +0x0f9:  mov    %eax,0x4(%esp)
081e03ad +0x0fd:  mov    -0x14(%ebp),%eax
081e03b0 +0x100:  mov    %eax,(%esp)
081e03b3 +0x103:  call   085bd1dc <_ZN6CParty19GetValidPartyMemberERSt6vectorIiSaIiEE>  ; CParty::GetValidPartyMember(std::vector<int, std::allocator<int> >&)
081e03b8 +0x108:  lea    -0x30(%ebp),%eax
081e03bb +0x10b:  mov    %eax,0x8(%esp)
081e03bf +0x10f:  movl   $0x2,0x4(%esp)
081e03c7 +0x117:  mov    -0x10(%ebp),%eax
081e03ca +0x11a:  mov    %eax,(%esp)
081e03cd +0x11d:  call   08284d08 <_ZN24CTournamentDungeonReward20isCardSelectCompleteE32ENUM_TOURNAMENT_REWARD_CARD_TYPERKSt6vectorIiSaIiEE>  ; CTournamentDungeonReward::isCardSelectComplete(ENUM_TOURNAMENT_REWARD_CARD_TYPE, std::vector<int, std::allocator<int> > const&)
081e03d2 +0x122:  xor    $0x1,%eax
081e03d5 +0x125:  test   %al,%al
081e03d7 +0x127:  je     081e03e0 <+0x130>
081e03d9 +0x129:  mov    $0x0,%ebx
081e03de +0x12e:  jmp    081e0430 <+0x180>
081e03e0 +0x130:  mov    -0x14(%ebp),%eax
081e03e3 +0x133:  mov    %eax,(%esp)
081e03e6 +0x136:  call   085bd79e <_ZN6CParty19isTournamentVictoryEv>  ; CParty::isTournamentVictory()
081e03eb +0x13b:  mov    %al,-0x9(%ebp)
081e03ee +0x13e:  movl   $0x3,0x4(%esp)
081e03f6 +0x146:  mov    -0x14(%ebp),%eax
081e03f9 +0x149:  mov    %eax,(%esp)
081e03fc +0x14c:  call   085bd6bc <_ZN6CParty30SetTournamentDungeonClearStateEc>  ; CParty::SetTournamentDungeonClearState(char)
081e0401 +0x151:  movzbl -0x9(%ebp),%eax
081e0405 +0x155:  mov    %eax,0x4(%esp)
081e0409 +0x159:  mov    -0x14(%ebp),%eax
081e040c +0x15c:  mov    %eax,(%esp)
081e040f +0x15f:  call   085bd236 <_ZN6CParty22TournamentDungeonClearEb>  ; CParty::TournamentDungeonClear(bool)
081e0414 +0x164:  mov    $0x1,%ebx
081e0419 +0x169:  jmp    081e0430 <+0x180>
081e041b +0x16b:  mov    %edx,%ebx
081e041d +0x16d:  mov    %eax,%esi
081e041f +0x16f:  lea    -0x30(%ebp),%eax
081e0422 +0x172:  mov    %eax,(%esp)
081e0425 +0x175:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
081e042a +0x17a:  mov    %esi,%eax
081e042c +0x17c:  mov    %ebx,%edx
081e042e +0x17e:  jmp    081e043f <+0x18f>
081e0430 +0x180:  lea    -0x30(%ebp),%eax
081e0433 +0x183:  mov    %eax,(%esp)
081e0436 +0x186:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
081e043b +0x18b:  test   %ebx,%ebx
081e043d +0x18d:  jmp    081e045a <+0x1aa>
081e043f +0x18f:  mov    %edx,%ebx
081e0441 +0x191:  mov    %eax,%esi
081e0443 +0x193:  lea    -0x24(%ebp),%eax
081e0446 +0x196:  mov    %eax,(%esp)
081e0449 +0x199:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081e044e +0x19e:  mov    %esi,%eax
081e0450 +0x1a0:  mov    %ebx,%edx
081e0452 +0x1a2:  mov    %eax,(%esp)
081e0455 +0x1a5:  call   08ae3750 <_Unwind_Resume>
081e045a +0x1aa:  lea    -0x24(%ebp),%eax
081e045d +0x1ad:  mov    %eax,(%esp)
081e0460 +0x1b0:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081e0465 +0x1b5:  add    $0x40,%esp
081e0468 +0x1b8:  pop    %ebx
081e0469 +0x1b9:  pop    %esi
081e046a +0x1ba:  pop    %ebp
081e046b +0x1bb:  ret
```

## 反编译 C

```c
// Dispatcher_TournamentRewardSelect::send @ 0x81e02b0

/* Dispatcher_TournamentRewardSelect::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_TournamentRewardSelect::send
          (Dispatcher_TournamentRewardSelect *this,CUser *param_1,ParamBase *param_2)

{
  char cVar1;
  int iVar2;
  vector<int,std::allocator<int>> local_34 [12];
  PacketGuard local_28 [12];
  ParamBase *local_1c;
  CParty *local_18;
  CTournamentDungeonReward *local_14;
  bool local_d;
  
  local_1c = param_2;
  PacketGuard::PacketGuard(local_28);
                    /* try { // try from 081e02cf to 081e03a5 has its CatchHandler @ 081e043f */
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_28);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,1,0x1cb);
  if (*(int *)(local_1c + 4) == 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,1);
    CUser::GetPartyIndex(param_1);
    iVar2 = G_CGameManager();
    local_18 = (CParty *)CGameManager::GetParty(iVar2);
    if (local_18 != (CParty *)0x0) {
      local_14 = (CTournamentDungeonReward *)(local_18 + 0x17bc);
      CTournamentDungeonReward::MakeSelectPacket(local_14,local_28);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
      CParty::send_to_party(local_18,local_28);
      cVar1 = CParty::CheckRecvFromAllMember(local_18,param_1);
      if (cVar1 == '\x01') {
        std::vector<int,std::allocator<int>>::vector(local_34);
                    /* try { // try from 081e03b3 to 081e0413 has its CatchHandler @ 081e041b */
        CParty::GetValidPartyMember(local_18,(vector *)local_34);
        cVar1 = CTournamentDungeonReward::isCardSelectComplete(local_14,2,local_34);
        if (cVar1 == '\x01') {
          local_d = (bool)CParty::isTournamentVictory(local_18);
          CParty::SetTournamentDungeonClearState(local_18,'\x03');
          CParty::TournamentDungeonClear(local_18,local_d);
        }
                    /* try { // try from 081e0436 to 081e043a has its CatchHandler @ 081e043f */
        std::vector<int,std::allocator<int>>::~vector(local_34);
      }
    }
  }
  PacketGuard::~PacketGuard(local_28);
  return;
}
```
