# _ReturnTeam

`_ZN8fair_pvp10CFairMatch11_ReturnTeamEP8PvP_RoomiP5CUser`

`fair_pvp::CFairMatch::_ReturnTeam(PvP_Room*, int, CUser*)`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x08564dea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08564dea  _ZN8fair_pvp10CFairMatch11_ReturnTeamEP8PvP_RoomiP5CUser
#           fair_pvp::CFairMatch::_ReturnTeam(PvP_Room*, int, CUser*)
# range [0x08564dea, 0x08564f8b]
08564dea +0x000:  push   %ebp
08564deb +0x001:  mov    %esp,%ebp
08564ded +0x003:  push   %edi
08564dee +0x004:  push   %esi
08564def +0x005:  push   %ebx
08564df0 +0x006:  sub    $0x4c,%esp
08564df3 +0x009:  mov    0xc(%ebp),%eax
08564df6 +0x00c:  mov    %eax,(%esp)
08564df9 +0x00f:  call   085d6862 <_ZNK8PvP_Room16get_waiter_countEv>  ; PvP_Room::get_waiter_count() const
08564dfe +0x014:  mov    %eax,%esi
08564e00 +0x016:  mov    0xc(%ebp),%eax
08564e03 +0x019:  mov    %eax,(%esp)
08564e06 +0x01c:  call   0822d9cc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3076>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3076
08564e0b +0x021:  mov    %eax,%edi
08564e0d +0x023:  mov    0xc(%ebp),%eax
08564e10 +0x026:  mov    %eax,(%esp)
08564e13 +0x029:  call   0822d994 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x303e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x303e
08564e18 +0x02e:  mov    %eax,%ebx
08564e1a +0x030:  movl   $0x0,0x10(%esp)
08564e22 +0x038:  movl   $0x0,0xc(%esp)
08564e2a +0x040:  movl   $0xd95,0x8(%esp)
08564e32 +0x048:  movl   $&_ZZN8fair_pvp10CFairMatch11_ReturnTeamEP8PvP_RoomiP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
08564e3a +0x050:  lea    -0x38(%ebp),%eax
08564e3d +0x053:  mov    %eax,(%esp)
08564e40 +0x056:  call   0854fd3c <_ZN10CSwitchLogC1EPKciii>  ; CSwitchLog::CSwitchLog(char const*, int, int, int)
08564e45 +0x05b:  mov    %esi,0x10(%esp)
08564e49 +0x05f:  mov    %edi,0xc(%esp)
08564e4d +0x063:  mov    %ebx,0x8(%esp)
08564e51 +0x067:  movl   $"pvp@log room(%d), %d, %d",0x4(%esp)
08564e59 +0x06f:  lea    -0x38(%ebp),%eax
08564e5c +0x072:  mov    %eax,(%esp)
08564e5f +0x075:  call   0854fd64 <_ZN10CSwitchLogclEPKcz>  ; CSwitchLog::operator()(char const*, ...)
08564e64 +0x07a:  movl   $0x0,-0x28(%ebp)
08564e6b +0x081:  movl   $0x0,-0x24(%ebp)
08564e72 +0x088:  movl   $0x0,-0x20(%ebp)
08564e79 +0x08f:  jmp    08564f68 <+0x17e>
08564e7e +0x094:  mov    -0x20(%ebp),%eax
08564e81 +0x097:  mov    %eax,0x4(%esp)
08564e85 +0x09b:  mov    0xc(%ebp),%eax
08564e88 +0x09e:  mov    %eax,(%esp)
08564e8b +0x0a1:  call   085d921e <_ZN8PvP_Room13get_user_seatEi>  ; PvP_Room::get_user_seat(int)
08564e90 +0x0a6:  mov    %eax,-0x28(%ebp)
08564e93 +0x0a9:  cmpl   $0x0,-0x28(%ebp)
08564e97 +0x0ad:  je     08564f5d <+0x173>
08564e9d +0x0b3:  mov    -0x20(%ebp),%eax
08564ea0 +0x0b6:  mov    %eax,0x4(%esp)
08564ea4 +0x0ba:  mov    0xc(%ebp),%eax
08564ea7 +0x0bd:  mov    %eax,(%esp)
08564eaa +0x0c0:  call   085d9272 <_ZN8PvP_Room8get_teamEi>  ; PvP_Room::get_team(int)
08564eaf +0x0c5:  mov    %eax,-0x1c(%ebp)
08564eb2 +0x0c8:  mov    0x10(%ebp),%eax
08564eb5 +0x0cb:  cmp    -0x1c(%ebp),%eax
08564eb8 +0x0ce:  jne    08564eef <+0x105>
08564eba +0x0d0:  cmpl   $0x2,0x10(%ebp)
08564ebe +0x0d4:  jne    08564f60 <+0x176>
08564ec4 +0x0da:  mov    -0x20(%ebp),%eax
08564ec7 +0x0dd:  movl   $0x2,0x10(%esp)
08564ecf +0x0e5:  movl   $0x1,0xc(%esp)
08564ed7 +0x0ed:  mov    %eax,0x8(%esp)
08564edb +0x0f1:  mov    -0x28(%ebp),%eax
08564ede +0x0f4:  mov    %eax,0x4(%esp)
08564ee2 +0x0f8:  mov    0xc(%ebp),%eax
08564ee5 +0x0fb:  mov    %eax,(%esp)
08564ee8 +0x0fe:  call   085dd070 <_ZN8PvP_Room17OnSetPVPSeatStateEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE>  ; PvP_Room::OnSetPVPSeatState(CUser*, int, ENUM_SEAT_STATE, ENUM_WALKOUT_TYPE)
08564eed +0x103:  jmp    08564f64 <+0x17a>
08564eef +0x105:  cmpl   $0x0,0x14(%ebp)
08564ef3 +0x109:  je     08564efd <+0x113>
08564ef5 +0x10b:  mov    -0x28(%ebp),%eax
08564ef8 +0x10e:  cmp    0x14(%ebp),%eax
08564efb +0x111:  je     08564f63 <+0x179>
08564efd +0x113:  mov    -0x20(%ebp),%eax
08564f00 +0x116:  mov    %eax,0xc(%esp)
08564f04 +0x11a:  mov    0xc(%ebp),%eax
08564f07 +0x11d:  mov    %eax,0x8(%esp)
08564f0b +0x121:  mov    -0x28(%ebp),%eax
08564f0e +0x124:  mov    %eax,0x4(%esp)
08564f12 +0x128:  mov    0x8(%ebp),%eax
08564f15 +0x12b:  mov    %eax,(%esp)
08564f18 +0x12e:  call   085633ce <_ZN8fair_pvp10CFairMatch12_PullOutRoomEP5CUserP8PvP_Roomi>  ; fair_pvp::CFairMatch::_PullOutRoom(CUser*, PvP_Room*, int)
08564f1d +0x133:  cmpl   $0x0,-0x24(%ebp)
08564f21 +0x137:  jne    08564f3a <+0x150>
08564f23 +0x139:  mov    -0x28(%ebp),%eax
08564f26 +0x13c:  mov    %eax,0x4(%esp)
08564f2a +0x140:  mov    0x8(%ebp),%eax
08564f2d +0x143:  mov    %eax,(%esp)
08564f30 +0x146:  call   08563692 <_ZN8fair_pvp10CFairMatch9_MakeRoomEP5CUser>  ; fair_pvp::CFairMatch::_MakeRoom(CUser*)
08564f35 +0x14b:  mov    %eax,-0x24(%ebp)
08564f38 +0x14e:  jmp    08564f64 <+0x17a>
08564f3a +0x150:  movl   $0x1,0xc(%esp)
08564f42 +0x158:  mov    -0x24(%ebp),%eax
08564f45 +0x15b:  mov    %eax,0x8(%esp)
08564f49 +0x15f:  mov    -0x28(%ebp),%eax
08564f4c +0x162:  mov    %eax,0x4(%esp)
08564f50 +0x166:  mov    0x8(%ebp),%eax
08564f53 +0x169:  mov    %eax,(%esp)
08564f56 +0x16c:  call   085634bc <_ZN8fair_pvp10CFairMatch10_PutInRoomEP5CUserP8PvP_Roomb>  ; fair_pvp::CFairMatch::_PutInRoom(CUser*, PvP_Room*, bool)
08564f5b +0x171:  jmp    08564f64 <+0x17a>
08564f5d +0x173:  nop
08564f5e +0x174:  jmp    08564f64 <+0x17a>
08564f60 +0x176:  nop
08564f61 +0x177:  jmp    08564f64 <+0x17a>
08564f63 +0x179:  nop
08564f64 +0x17a:  addl   $0x1,-0x20(%ebp)
08564f68 +0x17e:  cmpl   $0x7,-0x20(%ebp)
08564f6c +0x182:  setbe  %al
08564f6f +0x185:  test   %al,%al
08564f71 +0x187:  jne    08564e7e <+0x94>
08564f77 +0x18d:  mov    0x8(%ebp),%eax
08564f7a +0x190:  movl   $0x0,0x4(%eax)
08564f81 +0x197:  mov    -0x24(%ebp),%eax
08564f84 +0x19a:  add    $0x4c,%esp
08564f87 +0x19d:  pop    %ebx
08564f88 +0x19e:  pop    %esi
08564f89 +0x19f:  pop    %edi
08564f8a +0x1a0:  pop    %ebp
08564f8b +0x1a1:  ret
```

## 反编译 C

```c
// fair_pvp::CFairMatch::_ReturnTeam @ 0x8564dea

/* fair_pvp::CFairMatch::_ReturnTeam(PvP_Room*, int, CUser*) */

PvP_Room * __thiscall
fair_pvp::CFairMatch::_ReturnTeam(CFairMatch *this,PvP_Room *param_1,int param_2,CUser *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  CSwitchLog local_3c [16];
  CUser *local_2c;
  PvP_Room *local_28;
  uint local_24;
  int local_20;
  
  uVar1 = PvP_Room::get_waiter_count(param_1);
  uVar2 = PvP_Room::get_pvp_battle_mode(param_1);
  uVar3 = PvP_Room::get_index(param_1);
  CSwitchLog::CSwitchLog
            (local_3c,"PvP_Room* fair_pvp::CFairMatch::_ReturnTeam(PvP_Room*, int, CUser*)",0xd95,0,
             0);
  CSwitchLog::operator()(local_3c,"pvp@log room(%d), %d, %d",uVar3,uVar2,uVar1);
  local_2c = (CUser *)0x0;
  local_28 = (PvP_Room *)0x0;
  for (local_24 = 0; local_24 < 8; local_24 = local_24 + 1) {
    local_2c = (CUser *)PvP_Room::get_user_seat(param_1,local_24);
    if (local_2c != (CUser *)0x0) {
      local_20 = PvP_Room::get_team(param_1,local_24);
      if (param_2 == local_20) {
        if (param_2 == 2) {
          PvP_Room::OnSetPVPSeatState(param_1,local_2c,local_24,1,2);
        }
      }
      else if ((param_3 == (CUser *)0x0) || (local_2c != param_3)) {
        _PullOutRoom(this,local_2c,param_1,local_24);
        if (local_28 == (PvP_Room *)0x0) {
          local_28 = (PvP_Room *)_MakeRoom(this,local_2c);
        }
        else {
          _PutInRoom(this,local_2c,local_28,true);
        }
      }
    }
  }
  *(undefined4 *)(this + 4) = 0;
  return local_28;
}
```
