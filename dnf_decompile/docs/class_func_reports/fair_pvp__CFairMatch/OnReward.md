# OnReward

`_ZN8fair_pvp10CFairMatch8OnRewardEP8PvP_Roomib`

`fair_pvp::CFairMatch::OnReward(PvP_Room*, int, bool)`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x08565966` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08565966  _ZN8fair_pvp10CFairMatch8OnRewardEP8PvP_Roomib
#           fair_pvp::CFairMatch::OnReward(PvP_Room*, int, bool)
# range [0x08565966, 0x08565c4d]
08565966 +0x000:  push   %ebp
08565967 +0x001:  mov    %esp,%ebp
08565969 +0x003:  push   %esi
0856596a +0x004:  push   %ebx
0856596b +0x005:  sub    $0x40,%esp
0856596e +0x008:  mov    0x14(%ebp),%eax
08565971 +0x00b:  mov    %al,-0x1c(%ebp)
08565974 +0x00e:  cmpb   $0x0,-0x1c(%ebp)
08565978 +0x012:  je     08565a31 <+0xcb>
0856597e +0x018:  movl   $0x1,0x8(%esp)
08565986 +0x020:  movl   $0x1,0x4(%esp)
0856598e +0x028:  mov    0x8(%ebp),%eax
08565991 +0x02b:  mov    %eax,(%esp)
08565994 +0x02e:  call   08562e1e <_ZN8fair_pvp10CFairMatch13_UpdateRatingEi22ENUM_ELO_RATING_SYSTEM>  ; fair_pvp::CFairMatch::_UpdateRating(int, ENUM_ELO_RATING_SYSTEM)
08565999 +0x033:  movl   $0x1,0x8(%esp)
085659a1 +0x03b:  movl   $0x2,0x4(%esp)
085659a9 +0x043:  mov    0x8(%ebp),%eax
085659ac +0x046:  mov    %eax,(%esp)
085659af +0x049:  call   08562e1e <_ZN8fair_pvp10CFairMatch13_UpdateRatingEi22ENUM_ELO_RATING_SYSTEM>  ; fair_pvp::CFairMatch::_UpdateRating(int, ENUM_ELO_RATING_SYSTEM)
085659b4 +0x04e:  mov    0x8(%ebp),%eax
085659b7 +0x051:  add    $0x6c,%eax
085659ba +0x054:  movl   $0x1,0x18(%esp)
085659c2 +0x05c:  movl   $0x0,0x14(%esp)
085659ca +0x064:  movl   $0x0,0x10(%esp)
085659d2 +0x06c:  movl   $0x0,0xc(%esp)
085659da +0x074:  mov    %eax,0x8(%esp)
085659de +0x078:  mov    0xc(%ebp),%eax
085659e1 +0x07b:  mov    %eax,0x4(%esp)
085659e5 +0x07f:  mov    0x8(%ebp),%eax
085659e8 +0x082:  mov    %eax,(%esp)
085659eb +0x085:  call   08565700 <_ZN8fair_pvp10CFairMatch11UpdateScoreEP8PvP_RoomRNS_15PlayerInfoThirdE22ENUM_SCHOOL_MATCH_TEAMiii>  ; fair_pvp::CFairMatch::UpdateScore(PvP_Room*, fair_pvp::PlayerInfoThird&, ENUM_SCHOOL_MATCH_TEAM, int, int, int)
085659f0 +0x08a:  mov    0x8(%ebp),%eax
085659f3 +0x08d:  add    $0x24,%eax
085659f6 +0x090:  movl   $0x1,0x18(%esp)
085659fe +0x098:  movl   $0x0,0x14(%esp)
08565a06 +0x0a0:  movl   $0x0,0x10(%esp)
08565a0e +0x0a8:  movl   $0x1,0xc(%esp)
08565a16 +0x0b0:  mov    %eax,0x8(%esp)
08565a1a +0x0b4:  mov    0xc(%ebp),%eax
08565a1d +0x0b7:  mov    %eax,0x4(%esp)
08565a21 +0x0bb:  mov    0x8(%ebp),%eax
08565a24 +0x0be:  mov    %eax,(%esp)
08565a27 +0x0c1:  call   08565700 <_ZN8fair_pvp10CFairMatch11UpdateScoreEP8PvP_RoomRNS_15PlayerInfoThirdE22ENUM_SCHOOL_MATCH_TEAMiii>  ; fair_pvp::CFairMatch::UpdateScore(PvP_Room*, fair_pvp::PlayerInfoThird&, ENUM_SCHOOL_MATCH_TEAM, int, int, int)
08565a2c +0x0c6:  jmp    08565b9c <+0x236>
08565a31 +0x0cb:  cmpl   $0x1,0x10(%ebp)
08565a35 +0x0cf:  jne    08565aee <+0x188>
08565a3b +0x0d5:  movl   $0x2,0x8(%esp)
08565a43 +0x0dd:  movl   $0x1,0x4(%esp)
08565a4b +0x0e5:  mov    0x8(%ebp),%eax
08565a4e +0x0e8:  mov    %eax,(%esp)
08565a51 +0x0eb:  call   08562e1e <_ZN8fair_pvp10CFairMatch13_UpdateRatingEi22ENUM_ELO_RATING_SYSTEM>  ; fair_pvp::CFairMatch::_UpdateRating(int, ENUM_ELO_RATING_SYSTEM)
08565a56 +0x0f0:  movl   $0x0,0x8(%esp)
08565a5e +0x0f8:  movl   $0x2,0x4(%esp)
08565a66 +0x100:  mov    0x8(%ebp),%eax
08565a69 +0x103:  mov    %eax,(%esp)
08565a6c +0x106:  call   08562e1e <_ZN8fair_pvp10CFairMatch13_UpdateRatingEi22ENUM_ELO_RATING_SYSTEM>  ; fair_pvp::CFairMatch::_UpdateRating(int, ENUM_ELO_RATING_SYSTEM)
08565a71 +0x10b:  mov    0x8(%ebp),%eax
08565a74 +0x10e:  add    $0x6c,%eax
08565a77 +0x111:  movl   $0x0,0x18(%esp)
08565a7f +0x119:  movl   $0x0,0x14(%esp)
08565a87 +0x121:  movl   $0x1,0x10(%esp)
08565a8f +0x129:  movl   $0x0,0xc(%esp)
08565a97 +0x131:  mov    %eax,0x8(%esp)
08565a9b +0x135:  mov    0xc(%ebp),%eax
08565a9e +0x138:  mov    %eax,0x4(%esp)
08565aa2 +0x13c:  mov    0x8(%ebp),%eax
08565aa5 +0x13f:  mov    %eax,(%esp)
08565aa8 +0x142:  call   08565700 <_ZN8fair_pvp10CFairMatch11UpdateScoreEP8PvP_RoomRNS_15PlayerInfoThirdE22ENUM_SCHOOL_MATCH_TEAMiii>  ; fair_pvp::CFairMatch::UpdateScore(PvP_Room*, fair_pvp::PlayerInfoThird&, ENUM_SCHOOL_MATCH_TEAM, int, int, int)
08565aad +0x147:  mov    0x8(%ebp),%eax
08565ab0 +0x14a:  add    $0x24,%eax
08565ab3 +0x14d:  movl   $0x0,0x18(%esp)
08565abb +0x155:  movl   $0x1,0x14(%esp)
08565ac3 +0x15d:  movl   $0x0,0x10(%esp)
08565acb +0x165:  movl   $0x1,0xc(%esp)
08565ad3 +0x16d:  mov    %eax,0x8(%esp)
08565ad7 +0x171:  mov    0xc(%ebp),%eax
08565ada +0x174:  mov    %eax,0x4(%esp)
08565ade +0x178:  mov    0x8(%ebp),%eax
08565ae1 +0x17b:  mov    %eax,(%esp)
08565ae4 +0x17e:  call   08565700 <_ZN8fair_pvp10CFairMatch11UpdateScoreEP8PvP_RoomRNS_15PlayerInfoThirdE22ENUM_SCHOOL_MATCH_TEAMiii>  ; fair_pvp::CFairMatch::UpdateScore(PvP_Room*, fair_pvp::PlayerInfoThird&, ENUM_SCHOOL_MATCH_TEAM, int, int, int)
08565ae9 +0x183:  jmp    08565b9c <+0x236>
08565aee +0x188:  movl   $0x2,0x8(%esp)
08565af6 +0x190:  movl   $0x2,0x4(%esp)
08565afe +0x198:  mov    0x8(%ebp),%eax
08565b01 +0x19b:  mov    %eax,(%esp)
08565b04 +0x19e:  call   08562e1e <_ZN8fair_pvp10CFairMatch13_UpdateRatingEi22ENUM_ELO_RATING_SYSTEM>  ; fair_pvp::CFairMatch::_UpdateRating(int, ENUM_ELO_RATING_SYSTEM)
08565b09 +0x1a3:  movl   $0x0,0x8(%esp)
08565b11 +0x1ab:  movl   $0x1,0x4(%esp)
08565b19 +0x1b3:  mov    0x8(%ebp),%eax
08565b1c +0x1b6:  mov    %eax,(%esp)
08565b1f +0x1b9:  call   08562e1e <_ZN8fair_pvp10CFairMatch13_UpdateRatingEi22ENUM_ELO_RATING_SYSTEM>  ; fair_pvp::CFairMatch::_UpdateRating(int, ENUM_ELO_RATING_SYSTEM)
08565b24 +0x1be:  mov    0x8(%ebp),%eax
08565b27 +0x1c1:  add    $0x6c,%eax
08565b2a +0x1c4:  movl   $0x0,0x18(%esp)
08565b32 +0x1cc:  movl   $0x1,0x14(%esp)
08565b3a +0x1d4:  movl   $0x0,0x10(%esp)
08565b42 +0x1dc:  movl   $0x0,0xc(%esp)
08565b4a +0x1e4:  mov    %eax,0x8(%esp)
08565b4e +0x1e8:  mov    0xc(%ebp),%eax
08565b51 +0x1eb:  mov    %eax,0x4(%esp)
08565b55 +0x1ef:  mov    0x8(%ebp),%eax
08565b58 +0x1f2:  mov    %eax,(%esp)
08565b5b +0x1f5:  call   08565700 <_ZN8fair_pvp10CFairMatch11UpdateScoreEP8PvP_RoomRNS_15PlayerInfoThirdE22ENUM_SCHOOL_MATCH_TEAMiii>  ; fair_pvp::CFairMatch::UpdateScore(PvP_Room*, fair_pvp::PlayerInfoThird&, ENUM_SCHOOL_MATCH_TEAM, int, int, int)
08565b60 +0x1fa:  mov    0x8(%ebp),%eax
08565b63 +0x1fd:  add    $0x24,%eax
08565b66 +0x200:  movl   $0x0,0x18(%esp)
08565b6e +0x208:  movl   $0x0,0x14(%esp)
08565b76 +0x210:  movl   $0x1,0x10(%esp)
08565b7e +0x218:  movl   $0x1,0xc(%esp)
08565b86 +0x220:  mov    %eax,0x8(%esp)
08565b8a +0x224:  mov    0xc(%ebp),%eax
08565b8d +0x227:  mov    %eax,0x4(%esp)
08565b91 +0x22b:  mov    0x8(%ebp),%eax
08565b94 +0x22e:  mov    %eax,(%esp)
08565b97 +0x231:  call   08565700 <_ZN8fair_pvp10CFairMatch11UpdateScoreEP8PvP_RoomRNS_15PlayerInfoThirdE22ENUM_SCHOOL_MATCH_TEAMiii>  ; fair_pvp::CFairMatch::UpdateScore(PvP_Room*, fair_pvp::PlayerInfoThird&, ENUM_SCHOOL_MATCH_TEAM, int, int, int)
08565b9c +0x236:  mov    0x8(%ebp),%eax
08565b9f +0x239:  mov    0xb0(%eax),%eax
08565ba5 +0x23f:  lea    0x1(%eax),%edx
08565ba8 +0x242:  mov    0x8(%ebp),%eax
08565bab +0x245:  mov    %edx,0xb0(%eax)
08565bb1 +0x24b:  lea    -0x14(%ebp),%eax
08565bb4 +0x24e:  mov    %eax,(%esp)
08565bb7 +0x251:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08565bbc +0x256:  movl   $0x13c,0x8(%esp)
08565bc4 +0x25e:  movl   $0x0,0x4(%esp)
08565bcc +0x266:  lea    -0x14(%ebp),%eax
08565bcf +0x269:  mov    %eax,(%esp)
08565bd2 +0x26c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08565bd7 +0x271:  mov    0x8(%ebp),%eax
08565bda +0x274:  mov    0xb0(%eax),%eax
08565be0 +0x27a:  mov    $0x3,%edx
08565be5 +0x27f:  mov    %edx,%ecx
08565be7 +0x281:  sub    %eax,%ecx
08565be9 +0x283:  mov    %ecx,%eax
08565beb +0x285:  mov    %eax,0x4(%esp)
08565bef +0x289:  lea    -0x14(%ebp),%eax
08565bf2 +0x28c:  mov    %eax,(%esp)
08565bf5 +0x28f:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08565bfa +0x294:  movl   $0x1,0x4(%esp)
08565c02 +0x29c:  lea    -0x14(%ebp),%eax
08565c05 +0x29f:  mov    %eax,(%esp)
08565c08 +0x2a2:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08565c0d +0x2a7:  lea    -0x14(%ebp),%eax
08565c10 +0x2aa:  mov    %eax,0x4(%esp)
08565c14 +0x2ae:  mov    0xc(%ebp),%eax
08565c17 +0x2b1:  mov    %eax,(%esp)
08565c1a +0x2b4:  call   085dbe18 <_ZN8PvP_Room11send_to_pvpER11PacketGuard>  ; PvP_Room::send_to_pvp(PacketGuard&)
08565c1f +0x2b9:  jmp    08565c3c <+0x2d6>
08565c21 +0x2bb:  mov    %edx,%ebx
08565c23 +0x2bd:  mov    %eax,%esi
08565c25 +0x2bf:  lea    -0x14(%ebp),%eax
08565c28 +0x2c2:  mov    %eax,(%esp)
08565c2b +0x2c5:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08565c30 +0x2ca:  mov    %esi,%eax
08565c32 +0x2cc:  mov    %ebx,%edx
08565c34 +0x2ce:  mov    %eax,(%esp)
08565c37 +0x2d1:  call   08ae3750 <_Unwind_Resume>
08565c3c +0x2d6:  lea    -0x14(%ebp),%eax
08565c3f +0x2d9:  mov    %eax,(%esp)
08565c42 +0x2dc:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08565c47 +0x2e1:  add    $0x40,%esp
08565c4a +0x2e4:  pop    %ebx
08565c4b +0x2e5:  pop    %esi
08565c4c +0x2e6:  pop    %ebp
08565c4d +0x2e7:  ret
```

## 反编译 C

```c
// fair_pvp::CFairMatch::OnReward @ 0x8565966

/* fair_pvp::CFairMatch::OnReward(PvP_Room*, int, bool) */

void __thiscall
fair_pvp::CFairMatch::OnReward(CFairMatch *this,PvP_Room *param_1,int param_2,bool param_3)

{
  PacketGuard local_18 [12];
  
  if (param_3) {
    _UpdateRating(this,1,1);
    _UpdateRating(this,2,1);
    UpdateScore(this,param_1,this + 0x6c,0,0,0,1);
    UpdateScore(this,param_1,this + 0x24,1,0,0,1);
  }
  else if (param_2 == 1) {
    _UpdateRating(this,1,2);
    _UpdateRating(this,2,0);
    UpdateScore(this,param_1,this + 0x6c,0,1,0,0);
    UpdateScore(this,param_1,this + 0x24,1,0,1,0);
  }
  else {
    _UpdateRating(this,2,2);
    _UpdateRating(this,1,0);
    UpdateScore(this,param_1,this + 0x6c,0,0,1,0);
    UpdateScore(this,param_1,this + 0x24,1,1,0,0);
  }
  *(int *)(this + 0xb0) = *(int *)(this + 0xb0) + 1;
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 08565bd2 to 08565c1e has its CatchHandler @ 08565c21 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x13c);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,3 - *(int *)(this + 0xb0));
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  PvP_Room::send_to_pvp(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
