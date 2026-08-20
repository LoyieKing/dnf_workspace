# dispatch_sig

`_ZN23TimerClearDungeonReward12dispatch_sigEiij`

`TimerClearDungeonReward::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerClearDungeonReward` | `0x0863449c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863449c  _ZN23TimerClearDungeonReward12dispatch_sigEiij
#           TimerClearDungeonReward::dispatch_sig(int, int, unsigned int)
# range [0x0863449c, 0x086345d1]
0863449c +0x000:  push   %ebp
0863449d +0x001:  mov    %esp,%ebp
0863449f +0x003:  push   %esi
086344a0 +0x004:  push   %ebx
086344a1 +0x005:  sub    $0x20,%esp
086344a4 +0x008:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
086344a9 +0x00d:  mov    0xc(%ebp),%edx
086344ac +0x010:  mov    %edx,0x4(%esp)
086344b0 +0x014:  mov    %eax,(%esp)
086344b3 +0x017:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
086344b8 +0x01c:  mov    %eax,-0xc(%ebp)
086344bb +0x01f:  cmpl   $0x0,-0xc(%ebp)
086344bf +0x023:  jne    086344cb <+0x2f>
086344c1 +0x025:  mov    $0x0,%eax
086344c6 +0x02a:  jmp    086345ca <+0x12e>
086344cb +0x02f:  mov    0x10(%ebp),%eax
086344ce +0x032:  mov    %eax,0x8(%esp)
086344d2 +0x036:  movl   $0x11,0x4(%esp)
086344da +0x03e:  mov    -0xc(%ebp),%eax
086344dd +0x041:  mov    %eax,(%esp)
086344e0 +0x044:  call   0859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>  ; CParty::check_timer_key(TIMER_MESSAGE, int)
086344e5 +0x049:  xor    $0x1,%eax
086344e8 +0x04c:  test   %al,%al
086344ea +0x04e:  je     086344f6 <+0x5a>
086344ec +0x050:  mov    $0x0,%eax
086344f1 +0x055:  jmp    086345ca <+0x12e>
086344f6 +0x05a:  mov    -0xc(%ebp),%eax
086344f9 +0x05d:  mov    %eax,(%esp)
086344fc +0x060:  call   0822d89c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2f46>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2f46
08634501 +0x065:  cmp    $0x2,%al
08634503 +0x067:  sete   %al
08634506 +0x06a:  test   %al,%al
08634508 +0x06c:  je     086345c5 <+0x129>
0863450e +0x072:  lea    -0x18(%ebp),%eax
08634511 +0x075:  mov    %eax,(%esp)
08634514 +0x078:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08634519 +0x07d:  lea    -0x18(%ebp),%eax
0863451c +0x080:  mov    %eax,(%esp)
0863451f +0x083:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08634524 +0x088:  movl   $0x48,0x8(%esp)
0863452c +0x090:  movl   $0x1,0x4(%esp)
08634534 +0x098:  lea    -0x18(%ebp),%eax
08634537 +0x09b:  mov    %eax,(%esp)
0863453a +0x09e:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0863453f +0x0a3:  movl   $0x1,0x4(%esp)
08634547 +0x0ab:  lea    -0x18(%ebp),%eax
0863454a +0x0ae:  mov    %eax,(%esp)
0863454d +0x0b1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08634552 +0x0b6:  movl   $0x1,0x4(%esp)
0863455a +0x0be:  lea    -0x18(%ebp),%eax
0863455d +0x0c1:  mov    %eax,(%esp)
08634560 +0x0c4:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08634565 +0x0c9:  lea    -0x18(%ebp),%eax
08634568 +0x0cc:  mov    %eax,0x4(%esp)
0863456c +0x0d0:  mov    -0xc(%ebp),%eax
0863456f +0x0d3:  mov    %eax,(%esp)
08634572 +0x0d6:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
08634577 +0x0db:  movl   $0x3,0x4(%esp)
0863457f +0x0e3:  mov    -0xc(%ebp),%eax
08634582 +0x0e6:  mov    %eax,(%esp)
08634585 +0x0e9:  call   0822d8ac <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2f56>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2f56
0863458a +0x0ee:  movl   $0x1e,0x4(%esp)
08634592 +0x0f6:  mov    -0xc(%ebp),%eax
08634595 +0x0f9:  mov    %eax,(%esp)
08634598 +0x0fc:  call   085b2226 <_ZN6CParty36insert_time_dungeon_score_scroll_msgEi>  ; CParty::insert_time_dungeon_score_scroll_msg(int)
0863459d +0x101:  jmp    086345ba <+0x11e>
0863459f +0x103:  mov    %edx,%ebx
086345a1 +0x105:  mov    %eax,%esi
086345a3 +0x107:  lea    -0x18(%ebp),%eax
086345a6 +0x10a:  mov    %eax,(%esp)
086345a9 +0x10d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086345ae +0x112:  mov    %esi,%eax
086345b0 +0x114:  mov    %ebx,%edx
086345b2 +0x116:  mov    %eax,(%esp)
086345b5 +0x119:  call   08ae3750 <_Unwind_Resume>
086345ba +0x11e:  lea    -0x18(%ebp),%eax
086345bd +0x121:  mov    %eax,(%esp)
086345c0 +0x124:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086345c5 +0x129:  mov    $0x1,%eax
086345ca +0x12e:  add    $0x20,%esp
086345cd +0x131:  pop    %ebx
086345ce +0x132:  pop    %esi
086345cf +0x133:  pop    %ebp
086345d0 +0x134:  ret
086345d1 +0x135:  nop
```

## 反编译 C

```c
// TimerClearDungeonReward::dispatch_sig @ 0x863449c

/* TimerClearDungeonReward::dispatch_sig(int, int, unsigned int) */

undefined4 TimerClearDungeonReward::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_1c [12];
  CParty *local_10;
  
  iVar2 = G_CGameManager();
  local_10 = (CParty *)CGameManager::GetParty(iVar2);
  if (local_10 == (CParty *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar1 = CParty::check_timer_key(local_10,0x11,param_3);
    if (cVar1 == '\x01') {
      cVar1 = CParty::get_dungeon_clear_state(local_10);
      if (cVar1 == '\x02') {
        PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0863451f to 0863459c has its CatchHandler @ 0863459f */
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x48);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
        CParty::send_to_party(local_10,local_1c);
        CParty::set_dungeon_clear_state(local_10,'\x03');
        CParty::insert_time_dungeon_score_scroll_msg(local_10,0x1e);
        PacketGuard::~PacketGuard(local_1c);
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
