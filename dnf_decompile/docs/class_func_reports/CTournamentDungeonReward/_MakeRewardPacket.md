# _MakeRewardPacket

`_ZN24CTournamentDungeonReward17_MakeRewardPacketE32ENUM_TOURNAMENT_REWARD_CARD_TYPEP11PacketGuard`

`CTournamentDungeonReward::_MakeRewardPacket(ENUM_TOURNAMENT_REWARD_CARD_TYPE, PacketGuard*)`

| 类 | 地址 |
|---|---|
| `CTournamentDungeonReward` | `0x082852e4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082852e4  _ZN24CTournamentDungeonReward17_MakeRewardPacketE32ENUM_TOURNAMENT_REWARD_CARD_TYPEP11PacketGuard
#           CTournamentDungeonReward::_MakeRewardPacket(ENUM_TOURNAMENT_REWARD_CARD_TYPE, PacketGuard*)
# range [0x082852e4, 0x082853b7]
082852e4 +0x00:  push   %ebp
082852e5 +0x01:  mov    %esp,%ebp
082852e7 +0x03:  push   %ebx
082852e8 +0x04:  sub    $0x24,%esp
082852eb +0x07:  mov    0xc(%ebp),%eax
082852ee +0x0a:  cmp    $0x1,%eax
082852f1 +0x0d:  jg     082853b0 <+0xcc>
082852f7 +0x13:  mov    0x10(%ebp),%eax
082852fa +0x16:  movl   $0x2,0x4(%esp)
08285302 +0x1e:  mov    %eax,(%esp)
08285305 +0x21:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0828530a +0x26:  movl   $0x0,-0xc(%ebp)
08285311 +0x2d:  jmp    0828539f <+0xbb>
08285316 +0x32:  mov    0xc(%ebp),%edx
08285319 +0x35:  mov    -0xc(%ebp),%ecx
0828531c +0x38:  mov    0x8(%ebp),%ebx
0828531f +0x3b:  mov    %ecx,%eax
08285321 +0x3d:  add    %eax,%eax
08285323 +0x3f:  add    %ecx,%eax
08285325 +0x41:  lea    0x0(,%eax,4),%ecx
0828532c +0x48:  mov    %edx,%eax
0828532e +0x4a:  add    %eax,%eax
08285330 +0x4c:  add    %edx,%eax
08285332 +0x4e:  shl    $0x3,%eax
08285335 +0x51:  lea    (%ecx,%eax,1),%eax
08285338 +0x54:  lea    (%ebx,%eax,1),%eax
0828533b +0x57:  add    $0x8,%eax
0828533e +0x5a:  mov    (%eax),%edx
08285340 +0x5c:  mov    0x10(%ebp),%eax
08285343 +0x5f:  mov    %edx,0x4(%esp)
08285347 +0x63:  mov    %eax,(%esp)
0828534a +0x66:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0828534f +0x6b:  mov    0xc(%ebp),%edx
08285352 +0x6e:  mov    -0xc(%ebp),%ecx
08285355 +0x71:  mov    0x8(%ebp),%ebx
08285358 +0x74:  mov    %ecx,%eax
0828535a +0x76:  add    %eax,%eax
0828535c +0x78:  add    %ecx,%eax
0828535e +0x7a:  lea    0x0(,%eax,4),%ecx
08285365 +0x81:  mov    %edx,%eax
08285367 +0x83:  add    %eax,%eax
08285369 +0x85:  add    %edx,%eax
0828536b +0x87:  shl    $0x3,%eax
0828536e +0x8a:  lea    (%ecx,%eax,1),%eax
08285371 +0x8d:  lea    (%ebx,%eax,1),%eax
08285374 +0x90:  add    $0xc,%eax
08285377 +0x93:  mov    (%eax),%edx
08285379 +0x95:  mov    0x10(%ebp),%eax
0828537c +0x98:  mov    %edx,0x4(%esp)
08285380 +0x9c:  mov    %eax,(%esp)
08285383 +0x9f:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08285388 +0xa4:  mov    0x10(%ebp),%eax
0828538b +0xa7:  movl   $0x0,0x4(%esp)
08285393 +0xaf:  mov    %eax,(%esp)
08285396 +0xb2:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0828539b +0xb7:  addl   $0x1,-0xc(%ebp)
0828539f +0xbb:  cmpl   $0x1,-0xc(%ebp)
082853a3 +0xbf:  setle  %al
082853a6 +0xc2:  test   %al,%al
082853a8 +0xc4:  jne    08285316 <+0x32>
082853ae +0xca:  jmp    082853b1 <+0xcd>
082853b0 +0xcc:  nop
082853b1 +0xcd:  add    $0x24,%esp
082853b4 +0xd0:  pop    %ebx
082853b5 +0xd1:  pop    %ebp
082853b6 +0xd2:  ret
082853b7 +0xd3:  nop
```

## 反编译 C

```c
// CTournamentDungeonReward::_MakeRewardPacket @ 0x82852e4

/* CTournamentDungeonReward::_MakeRewardPacket(ENUM_TOURNAMENT_REWARD_CARD_TYPE, PacketGuard*) */

void __thiscall
CTournamentDungeonReward::_MakeRewardPacket
          (CTournamentDungeonReward *this,int param_2,InterfacePacketBuf *param_3)

{
  int local_10;
  
  if (param_2 < 2) {
    InterfacePacketBuf::put_byte(param_3,2);
    for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
      InterfacePacketBuf::put_int(param_3,*(int *)(this + local_10 * 0xc + param_2 * 0x18 + 8));
      InterfacePacketBuf::put_int(param_3,*(int *)(this + local_10 * 0xc + param_2 * 0x18 + 0xc));
      InterfacePacketBuf::put_short(param_3,0);
    }
  }
  return;
}
```
