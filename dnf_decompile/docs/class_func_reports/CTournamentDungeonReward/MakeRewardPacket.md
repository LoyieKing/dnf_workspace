# MakeRewardPacket

`_ZN24CTournamentDungeonReward16MakeRewardPacketEP11PacketGuardb`

`CTournamentDungeonReward::MakeRewardPacket(PacketGuard*, bool)`

| 类 | 地址 |
|---|---|
| `CTournamentDungeonReward` | `0x08284caa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08284caa  _ZN24CTournamentDungeonReward16MakeRewardPacketEP11PacketGuardb
#           CTournamentDungeonReward::MakeRewardPacket(PacketGuard*, bool)
# range [0x08284caa, 0x08284d07]
08284caa +0x00:  push   %ebp
08284cab +0x01:  mov    %esp,%ebp
08284cad +0x03:  sub    $0x28,%esp
08284cb0 +0x06:  mov    0x10(%ebp),%eax
08284cb3 +0x09:  mov    %al,-0xc(%ebp)
08284cb6 +0x0c:  mov    0xc(%ebp),%eax
08284cb9 +0x0f:  mov    %eax,0x8(%esp)
08284cbd +0x13:  movl   $0x0,0x4(%esp)
08284cc5 +0x1b:  mov    0x8(%ebp),%eax
08284cc8 +0x1e:  mov    %eax,(%esp)
08284ccb +0x21:  call   082852e4 <_ZN24CTournamentDungeonReward17_MakeRewardPacketE32ENUM_TOURNAMENT_REWARD_CARD_TYPEP11PacketGuard>  ; CTournamentDungeonReward::_MakeRewardPacket(ENUM_TOURNAMENT_REWARD_CARD_TYPE, PacketGuard*)
08284cd0 +0x26:  cmpb   $0x0,-0xc(%ebp)
08284cd4 +0x2a:  je     08284cf2 <+0x48>
08284cd6 +0x2c:  mov    0xc(%ebp),%eax
08284cd9 +0x2f:  mov    %eax,0x8(%esp)
08284cdd +0x33:  movl   $0x1,0x4(%esp)
08284ce5 +0x3b:  mov    0x8(%ebp),%eax
08284ce8 +0x3e:  mov    %eax,(%esp)
08284ceb +0x41:  call   082852e4 <_ZN24CTournamentDungeonReward17_MakeRewardPacketE32ENUM_TOURNAMENT_REWARD_CARD_TYPEP11PacketGuard>  ; CTournamentDungeonReward::_MakeRewardPacket(ENUM_TOURNAMENT_REWARD_CARD_TYPE, PacketGuard*)
08284cf0 +0x46:  jmp    08284d05 <+0x5b>
08284cf2 +0x48:  mov    0xc(%ebp),%eax
08284cf5 +0x4b:  movl   $0x0,0x4(%esp)
08284cfd +0x53:  mov    %eax,(%esp)
08284d00 +0x56:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08284d05 +0x5b:  leave
08284d06 +0x5c:  ret
08284d07 +0x5d:  nop
```

## 反编译 C

```c
// CTournamentDungeonReward::MakeRewardPacket @ 0x8284caa

/* CTournamentDungeonReward::MakeRewardPacket(PacketGuard*, bool) */

void __thiscall
CTournamentDungeonReward::MakeRewardPacket
          (CTournamentDungeonReward *this,PacketGuard *param_1,bool param_2)

{
  _MakeRewardPacket(this,0,param_1);
  if (param_2) {
    _MakeRewardPacket(this,1,param_1);
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,0);
  }
  return;
}
```
