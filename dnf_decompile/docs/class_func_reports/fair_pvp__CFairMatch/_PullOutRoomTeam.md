# _PullOutRoomTeam

`_ZN8fair_pvp10CFairMatch16_PullOutRoomTeamEP8PvP_Room22ENUM_SCHOOL_MATCH_TEAM`

`fair_pvp::CFairMatch::_PullOutRoomTeam(PvP_Room*, ENUM_SCHOOL_MATCH_TEAM)`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x08565d86` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08565d86  _ZN8fair_pvp10CFairMatch16_PullOutRoomTeamEP8PvP_Room22ENUM_SCHOOL_MATCH_TEAM
#           fair_pvp::CFairMatch::_PullOutRoomTeam(PvP_Room*, ENUM_SCHOOL_MATCH_TEAM)
# range [0x08565d86, 0x08565f91]
08565d86 +0x000:  push   %ebp
08565d87 +0x001:  mov    %esp,%ebp
08565d89 +0x003:  push   %edi
08565d8a +0x004:  push   %esi
08565d8b +0x005:  push   %ebx
08565d8c +0x006:  sub    $0x5c,%esp
08565d8f +0x009:  mov    0x10(%ebp),%edi
08565d92 +0x00c:  mov    0xc(%ebp),%eax
08565d95 +0x00f:  mov    %eax,(%esp)
08565d98 +0x012:  call   0822d9cc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3076>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3076
08565d9d +0x017:  mov    %eax,%esi
08565d9f +0x019:  mov    0xc(%ebp),%eax
08565da2 +0x01c:  mov    %eax,(%esp)
08565da5 +0x01f:  call   0822d994 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x303e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x303e
08565daa +0x024:  mov    %eax,%ebx
08565dac +0x026:  movl   $0x0,0x10(%esp)
08565db4 +0x02e:  movl   $0x0,0xc(%esp)
08565dbc +0x036:  movl   $0xfa7,0x8(%esp)
08565dc4 +0x03e:  movl   $&_ZZN8fair_pvp10CFairMatch16_PullOutRoomTeamEP8PvP_Room22ENUM_SCHOOL_MATCH_TEAME19__PRETTY_FUNCTION__,0x4(%esp)
08565dcc +0x046:  lea    -0x3c(%ebp),%eax
08565dcf +0x049:  mov    %eax,(%esp)
08565dd2 +0x04c:  call   0854fd3c <_ZN10CSwitchLogC1EPKciii>  ; CSwitchLog::CSwitchLog(char const*, int, int, int)
08565dd7 +0x051:  mov    %edi,0x10(%esp)
08565ddb +0x055:  mov    %esi,0xc(%esp)
08565ddf +0x059:  mov    %ebx,0x8(%esp)
08565de3 +0x05d:  movl   $"pvp@log room(%d),%d,%d",0x4(%esp)
08565deb +0x065:  lea    -0x3c(%ebp),%eax
08565dee +0x068:  mov    %eax,(%esp)
08565df1 +0x06b:  call   0854fd64 <_ZN10CSwitchLogclEPKcz>  ; CSwitchLog::operator()(char const*, ...)
08565df6 +0x070:  movl   $0x0,-0x2c(%ebp)
08565dfd +0x077:  movl   $0x0,-0x28(%ebp)
08565e04 +0x07e:  jmp    08565ef5 <+0x16f>
08565e09 +0x083:  mov    0x10(%ebp),%edx
08565e0c +0x086:  mov    -0x28(%ebp),%eax
08565e0f +0x089:  mov    0x8(%ebp),%ecx
08565e12 +0x08c:  mov    %eax,%ebx
08565e14 +0x08e:  shl    $0x4,%ebx
08565e17 +0x091:  mov    %edx,%eax
08565e19 +0x093:  shl    $0x3,%eax
08565e1c +0x096:  add    %edx,%eax
08565e1e +0x098:  shl    $0x3,%eax
08565e21 +0x09b:  lea    (%ebx,%eax,1),%eax
08565e24 +0x09e:  lea    (%ecx,%eax,1),%eax
08565e27 +0x0a1:  add    $0x10,%eax
08565e2a +0x0a4:  movzbl 0x18(%eax),%eax
08565e2e +0x0a8:  test   %al,%al
08565e30 +0x0aa:  je     08565ef1 <+0x16b>
08565e36 +0x0b0:  mov    0x10(%ebp),%edx
08565e39 +0x0b3:  mov    -0x28(%ebp),%eax
08565e3c +0x0b6:  mov    0x8(%ebp),%ecx
08565e3f +0x0b9:  mov    %eax,%ebx
08565e41 +0x0bb:  shl    $0x4,%ebx
08565e44 +0x0be:  mov    %edx,%eax
08565e46 +0x0c0:  shl    $0x3,%eax
08565e49 +0x0c3:  add    %edx,%eax
08565e4b +0x0c5:  shl    $0x3,%eax
08565e4e +0x0c8:  lea    (%ebx,%eax,1),%eax
08565e51 +0x0cb:  lea    (%ecx,%eax,1),%eax
08565e54 +0x0ce:  add    $0x24,%eax
08565e57 +0x0d1:  mov    (%eax),%eax
08565e59 +0x0d3:  test   %eax,%eax
08565e5b +0x0d5:  je     08565ef1 <+0x16b>
08565e61 +0x0db:  mov    0x10(%ebp),%edx
08565e64 +0x0de:  mov    -0x28(%ebp),%eax
08565e67 +0x0e1:  mov    0x8(%ebp),%ecx
08565e6a +0x0e4:  mov    %eax,%ebx
08565e6c +0x0e6:  shl    $0x4,%ebx
08565e6f +0x0e9:  mov    %edx,%eax
08565e71 +0x0eb:  shl    $0x3,%eax
08565e74 +0x0ee:  add    %edx,%eax
08565e76 +0x0f0:  shl    $0x3,%eax
08565e79 +0x0f3:  lea    (%ebx,%eax,1),%eax
08565e7c +0x0f6:  lea    (%ecx,%eax,1),%eax
08565e7f +0x0f9:  add    $0x24,%eax
08565e82 +0x0fc:  mov    (%eax),%eax
08565e84 +0x0fe:  mov    %eax,0x4(%esp)
08565e88 +0x102:  mov    0xc(%ebp),%eax
08565e8b +0x105:  mov    %eax,(%esp)
08565e8e +0x108:  call   085d91e2 <_ZN8PvP_Room13get_user_seatEP5CUser>  ; PvP_Room::get_user_seat(CUser*)
08565e93 +0x10d:  mov    %eax,-0x24(%ebp)
08565e96 +0x110:  cmpl   $0xffffffff,-0x24(%ebp)
08565e9a +0x114:  je     08565ef1 <+0x16b>
08565e9c +0x116:  mov    -0x24(%ebp),%eax
08565e9f +0x119:  mov    %eax,0x4(%esp)
08565ea3 +0x11d:  mov    0xc(%ebp),%eax
08565ea6 +0x120:  mov    %eax,(%esp)
08565ea9 +0x123:  call   085d9272 <_ZN8PvP_Room8get_teamEi>  ; PvP_Room::get_team(int)
08565eae +0x128:  mov    %eax,-0x2c(%ebp)
08565eb1 +0x12b:  mov    0x10(%ebp),%edx
08565eb4 +0x12e:  mov    -0x28(%ebp),%eax
08565eb7 +0x131:  mov    0x8(%ebp),%ecx
08565eba +0x134:  mov    %eax,%ebx
08565ebc +0x136:  shl    $0x4,%ebx
08565ebf +0x139:  mov    %edx,%eax
08565ec1 +0x13b:  shl    $0x3,%eax
08565ec4 +0x13e:  add    %edx,%eax
08565ec6 +0x140:  shl    $0x3,%eax
08565ec9 +0x143:  lea    (%ebx,%eax,1),%eax
08565ecc +0x146:  lea    (%ecx,%eax,1),%eax
08565ecf +0x149:  add    $0x24,%eax
08565ed2 +0x14c:  mov    (%eax),%eax
08565ed4 +0x14e:  mov    -0x24(%ebp),%edx
08565ed7 +0x151:  mov    %edx,0xc(%esp)
08565edb +0x155:  mov    0xc(%ebp),%edx
08565ede +0x158:  mov    %edx,0x8(%esp)
08565ee2 +0x15c:  mov    %eax,0x4(%esp)
08565ee6 +0x160:  mov    0x8(%ebp),%eax
08565ee9 +0x163:  mov    %eax,(%esp)
08565eec +0x166:  call   085633ce <_ZN8fair_pvp10CFairMatch12_PullOutRoomEP5CUserP8PvP_Roomi>  ; fair_pvp::CFairMatch::_PullOutRoom(CUser*, PvP_Room*, int)
08565ef1 +0x16b:  addl   $0x1,-0x28(%ebp)
08565ef5 +0x16f:  cmpl   $0x3,-0x28(%ebp)
08565ef9 +0x173:  setle  %al
08565efc +0x176:  test   %al,%al
08565efe +0x178:  jne    08565e09 <+0x83>
08565f04 +0x17e:  cmpl   $0x1,-0x2c(%ebp)
08565f08 +0x182:  jne    08565f85 <+0x1ff>
08565f0a +0x184:  movl   $0x0,-0x20(%ebp)
08565f11 +0x18b:  jmp    08565f7a <+0x1f4>
08565f13 +0x18d:  mov    -0x20(%ebp),%eax
08565f16 +0x190:  mov    %eax,0x4(%esp)
08565f1a +0x194:  mov    0xc(%ebp),%eax
08565f1d +0x197:  mov    %eax,(%esp)
08565f20 +0x19a:  call   085d921e <_ZN8PvP_Room13get_user_seatEi>  ; PvP_Room::get_user_seat(int)
08565f25 +0x19f:  mov    %eax,-0x1c(%ebp)
08565f28 +0x1a2:  cmpl   $0x0,-0x1c(%ebp)
08565f2c +0x1a6:  je     08565f75 <+0x1ef>
08565f2e +0x1a8:  mov    -0x20(%ebp),%eax
08565f31 +0x1ab:  mov    %eax,0x4(%esp)
08565f35 +0x1af:  mov    0xc(%ebp),%eax
08565f38 +0x1b2:  mov    %eax,(%esp)
08565f3b +0x1b5:  call   085d9272 <_ZN8PvP_Room8get_teamEi>  ; PvP_Room::get_team(int)
08565f40 +0x1ba:  cmp    $0x2,%eax
08565f43 +0x1bd:  sete   %al
08565f46 +0x1c0:  test   %al,%al
08565f48 +0x1c2:  je     08565f76 <+0x1f0>
08565f4a +0x1c4:  movl   $0x2,0x10(%esp)
08565f52 +0x1cc:  movl   $0x1,0xc(%esp)
08565f5a +0x1d4:  mov    -0x20(%ebp),%eax
08565f5d +0x1d7:  mov    %eax,0x8(%esp)
08565f61 +0x1db:  mov    -0x1c(%ebp),%eax
08565f64 +0x1de:  mov    %eax,0x4(%esp)
08565f68 +0x1e2:  mov    0xc(%ebp),%eax
08565f6b +0x1e5:  mov    %eax,(%esp)
08565f6e +0x1e8:  call   085dd070 <_ZN8PvP_Room17OnSetPVPSeatStateEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE>  ; PvP_Room::OnSetPVPSeatState(CUser*, int, ENUM_SEAT_STATE, ENUM_WALKOUT_TYPE)
08565f73 +0x1ed:  jmp    08565f76 <+0x1f0>
08565f75 +0x1ef:  nop
08565f76 +0x1f0:  addl   $0x1,-0x20(%ebp)
08565f7a +0x1f4:  cmpl   $0x7,-0x20(%ebp)
08565f7e +0x1f8:  setle  %al
08565f81 +0x1fb:  test   %al,%al
08565f83 +0x1fd:  jne    08565f13 <+0x18d>
08565f85 +0x1ff:  mov    $0x1,%eax
08565f8a +0x204:  add    $0x5c,%esp
08565f8d +0x207:  pop    %ebx
08565f8e +0x208:  pop    %esi
08565f8f +0x209:  pop    %edi
08565f90 +0x20a:  pop    %ebp
08565f91 +0x20b:  ret
```

## 反编译 C

```c
// fair_pvp::CFairMatch::_PullOutRoomTeam @ 0x8565d86

/* fair_pvp::CFairMatch::_PullOutRoomTeam(PvP_Room*, ENUM_SCHOOL_MATCH_TEAM) */

undefined4 __thiscall
fair_pvp::CFairMatch::_PullOutRoomTeam(CFairMatch *this,PvP_Room *param_1,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  CSwitchLog local_40 [16];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  uVar1 = PvP_Room::get_pvp_battle_mode(param_1);
  uVar2 = PvP_Room::get_index(param_1);
  CSwitchLog::CSwitchLog
            (local_40,
             "bool fair_pvp::CFairMatch::_PullOutRoomTeam(PvP_Room*, ENUM_SCHOOL_MATCH_TEAM)",0xfa7,
             0,0);
  CSwitchLog::operator()(local_40,"pvp@log room(%d),%d,%d",uVar2,uVar1,param_3);
  local_30 = 0;
  for (local_2c = 0; local_2c < 4; local_2c = local_2c + 1) {
    if ((this[local_2c * 0x10 + param_3 * 0x48 + 0x28] != (CFairMatch)0x0) &&
       (*(int *)(this + local_2c * 0x10 + param_3 * 0x48 + 0x24) != 0)) {
      local_28 = PvP_Room::get_user_seat
                           (param_1,*(CUser **)(this + local_2c * 0x10 + param_3 * 0x48 + 0x24));
      if (local_28 != -1) {
        local_30 = PvP_Room::get_team(param_1,local_28);
        _PullOutRoom(this,*(CUser **)(this + local_2c * 0x10 + param_3 * 0x48 + 0x24),param_1,
                     local_28);
      }
    }
  }
  if (local_30 == 1) {
    for (local_24 = 0; local_24 < 8; local_24 = local_24 + 1) {
      local_20 = PvP_Room::get_user_seat(param_1,local_24);
      if (local_20 != 0) {
        iVar3 = PvP_Room::get_team(param_1,local_24);
        if (iVar3 == 2) {
          PvP_Room::OnSetPVPSeatState(param_1,local_20,local_24,1,2);
        }
      }
    }
  }
  return 1;
}
```
