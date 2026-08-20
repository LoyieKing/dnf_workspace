# _MoveRoom

`_ZN8fair_pvp10CFairMatch9_MoveRoomEP8PvP_RoomS2_b`

`fair_pvp::CFairMatch::_MoveRoom(PvP_Room*, PvP_Room*, bool)`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x08563d32` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08563d32  _ZN8fair_pvp10CFairMatch9_MoveRoomEP8PvP_RoomS2_b
#           fair_pvp::CFairMatch::_MoveRoom(PvP_Room*, PvP_Room*, bool)
# range [0x08563d32, 0x08563ed7]
08563d32 +0x000:  push   %ebp
08563d33 +0x001:  mov    %esp,%ebp
08563d35 +0x003:  push   %esi
08563d36 +0x004:  push   %ebx
08563d37 +0x005:  sub    $0x50,%esp
08563d3a +0x008:  mov    0x14(%ebp),%eax
08563d3d +0x00b:  mov    %al,-0x2c(%ebp)
08563d40 +0x00e:  movl   $0x0,-0x18(%ebp)
08563d47 +0x015:  movl   $0x0,-0x14(%ebp)
08563d4e +0x01c:  movl   $0x0,-0x10(%ebp)
08563d55 +0x023:  movl   $0x0,-0xc(%ebp)
08563d5c +0x02a:  jmp    08563ec1 <+0x18f>
08563d61 +0x02f:  mov    -0xc(%ebp),%eax
08563d64 +0x032:  mov    %eax,0x4(%esp)
08563d68 +0x036:  mov    0x10(%ebp),%eax
08563d6b +0x039:  mov    %eax,(%esp)
08563d6e +0x03c:  call   085d921e <_ZN8PvP_Room13get_user_seatEi>  ; PvP_Room::get_user_seat(int)
08563d73 +0x041:  mov    %eax,-0x14(%ebp)
08563d76 +0x044:  cmpl   $0x0,-0x14(%ebp)
08563d7a +0x048:  je     08563ebc <+0x18a>
08563d80 +0x04e:  mov    -0xc(%ebp),%eax
08563d83 +0x051:  mov    %eax,0x4(%esp)
08563d87 +0x055:  mov    0x10(%ebp),%eax
08563d8a +0x058:  mov    %eax,(%esp)
08563d8d +0x05b:  call   085d9272 <_ZN8PvP_Room8get_teamEi>  ; PvP_Room::get_team(int)
08563d92 +0x060:  mov    %eax,-0x18(%ebp)
08563d95 +0x063:  lea    -0x24(%ebp),%eax
08563d98 +0x066:  mov    %eax,(%esp)
08563d9b +0x069:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08563da0 +0x06e:  movl   $0x29,0x8(%esp)
08563da8 +0x076:  movl   $0x0,0x4(%esp)
08563db0 +0x07e:  lea    -0x24(%ebp),%eax
08563db3 +0x081:  mov    %eax,(%esp)
08563db6 +0x084:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08563dbb +0x089:  movl   $0x1,0x4(%esp)
08563dc3 +0x091:  lea    -0x24(%ebp),%eax
08563dc6 +0x094:  mov    %eax,(%esp)
08563dc9 +0x097:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08563dce +0x09c:  lea    -0x24(%ebp),%eax
08563dd1 +0x09f:  mov    %eax,0x4(%esp)
08563dd5 +0x0a3:  mov    0xc(%ebp),%eax
08563dd8 +0x0a6:  mov    %eax,(%esp)
08563ddb +0x0a9:  call   085db7f6 <_ZN8PvP_Room14make_room_infoEPc>  ; PvP_Room::make_room_info(char*)
08563de0 +0x0ae:  movl   $0x1,0x4(%esp)
08563de8 +0x0b6:  lea    -0x24(%ebp),%eax
08563deb +0x0b9:  mov    %eax,(%esp)
08563dee +0x0bc:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08563df3 +0x0c1:  lea    -0x24(%ebp),%eax
08563df6 +0x0c4:  mov    %eax,0x4(%esp)
08563dfa +0x0c8:  mov    0x10(%ebp),%eax
08563dfd +0x0cb:  mov    %eax,(%esp)
08563e00 +0x0ce:  call   085dbe18 <_ZN8PvP_Room11send_to_pvpER11PacketGuard>  ; PvP_Room::send_to_pvp(PacketGuard&)
08563e05 +0x0d3:  mov    -0xc(%ebp),%eax
08563e08 +0x0d6:  mov    %eax,0xc(%esp)
08563e0c +0x0da:  mov    0x10(%ebp),%eax
08563e0f +0x0dd:  mov    %eax,0x8(%esp)
08563e13 +0x0e1:  mov    -0x14(%ebp),%eax
08563e16 +0x0e4:  mov    %eax,0x4(%esp)
08563e1a +0x0e8:  mov    0x8(%ebp),%eax
08563e1d +0x0eb:  mov    %eax,(%esp)
08563e20 +0x0ee:  call   085633ce <_ZN8fair_pvp10CFairMatch12_PullOutRoomEP5CUserP8PvP_Roomi>  ; fair_pvp::CFairMatch::_PullOutRoom(CUser*, PvP_Room*, int)
08563e25 +0x0f3:  mov    -0x14(%ebp),%eax
08563e28 +0x0f6:  mov    %eax,(%esp)
08563e2b +0x0f9:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08563e30 +0x0fe:  mov    %eax,0x4(%esp)
08563e34 +0x102:  mov    0x8(%ebp),%eax
08563e37 +0x105:  mov    %eax,(%esp)
08563e3a +0x108:  call   08568954 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x31e>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x31e
08563e3f +0x10d:  movzbl -0x2c(%ebp),%eax
08563e43 +0x111:  mov    %eax,0xc(%esp)
08563e47 +0x115:  mov    0xc(%ebp),%eax
08563e4a +0x118:  mov    %eax,0x8(%esp)
08563e4e +0x11c:  mov    -0x14(%ebp),%eax
08563e51 +0x11f:  mov    %eax,0x4(%esp)
08563e55 +0x123:  mov    0x8(%ebp),%eax
08563e58 +0x126:  mov    %eax,(%esp)
08563e5b +0x129:  call   085634bc <_ZN8fair_pvp10CFairMatch10_PutInRoomEP5CUserP8PvP_Roomb>  ; fair_pvp::CFairMatch::_PutInRoom(CUser*, PvP_Room*, bool)
08563e60 +0x12e:  mov    %eax,-0x10(%ebp)
08563e63 +0x131:  cmpl   $0x3,-0x18(%ebp)
08563e67 +0x135:  jne    08563eaf <+0x17d>
08563e69 +0x137:  movl   $0x2,0x10(%esp)
08563e71 +0x13f:  movl   $0x3,0xc(%esp)
08563e79 +0x147:  mov    -0x10(%ebp),%eax
08563e7c +0x14a:  mov    %eax,0x8(%esp)
08563e80 +0x14e:  mov    -0x14(%ebp),%eax
08563e83 +0x151:  mov    %eax,0x4(%esp)
08563e87 +0x155:  mov    0xc(%ebp),%eax
08563e8a +0x158:  mov    %eax,(%esp)
08563e8d +0x15b:  call   085dd070 <_ZN8PvP_Room17OnSetPVPSeatStateEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE>  ; PvP_Room::OnSetPVPSeatState(CUser*, int, ENUM_SEAT_STATE, ENUM_WALKOUT_TYPE)
08563e92 +0x160:  jmp    08563eaf <+0x17d>
08563e94 +0x162:  mov    %edx,%ebx
08563e96 +0x164:  mov    %eax,%esi
08563e98 +0x166:  lea    -0x24(%ebp),%eax
08563e9b +0x169:  mov    %eax,(%esp)
08563e9e +0x16c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08563ea3 +0x171:  mov    %esi,%eax
08563ea5 +0x173:  mov    %ebx,%edx
08563ea7 +0x175:  mov    %eax,(%esp)
08563eaa +0x178:  call   08ae3750 <_Unwind_Resume>
08563eaf +0x17d:  lea    -0x24(%ebp),%eax
08563eb2 +0x180:  mov    %eax,(%esp)
08563eb5 +0x183:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08563eba +0x188:  jmp    08563ebd <+0x18b>
08563ebc +0x18a:  nop
08563ebd +0x18b:  addl   $0x1,-0xc(%ebp)
08563ec1 +0x18f:  cmpl   $0x7,-0xc(%ebp)
08563ec5 +0x193:  setbe  %al
08563ec8 +0x196:  test   %al,%al
08563eca +0x198:  jne    08563d61 <+0x2f>
08563ed0 +0x19e:  add    $0x50,%esp
08563ed3 +0x1a1:  pop    %ebx
08563ed4 +0x1a2:  pop    %esi
08563ed5 +0x1a3:  pop    %ebp
08563ed6 +0x1a4:  ret
08563ed7 +0x1a5:  nop
```

## 反编译 C

```c
// fair_pvp::CFairMatch::_MoveRoom @ 0x8563d32

/* fair_pvp::CFairMatch::_MoveRoom(PvP_Room*, PvP_Room*, bool) */

void __thiscall
fair_pvp::CFairMatch::_MoveRoom(CFairMatch *this,PvP_Room *param_1,PvP_Room *param_2,bool param_3)

{
  int iVar1;
  PacketGuard local_28 [12];
  int local_1c;
  CUser *local_18;
  undefined4 local_14;
  uint local_10;
  
  local_1c = 0;
  local_18 = (CUser *)0x0;
  local_14 = 0;
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    local_18 = (CUser *)PvP_Room::get_user_seat(param_2,local_10);
    if (local_18 != (CUser *)0x0) {
      local_1c = PvP_Room::get_team(param_2,local_10);
      PacketGuard::PacketGuard(local_28);
                    /* try { // try from 08563db6 to 08563e91 has its CatchHandler @ 08563e94 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,0x29);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,1);
      PvP_Room::make_room_info(param_1,(char *)local_28);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
      PvP_Room::send_to_pvp(param_2,local_28);
      _PullOutRoom(this,local_18,param_2,local_10);
      iVar1 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)local_18);
      _SetEnterCharacNo(this,iVar1);
      local_14 = _PutInRoom(this,local_18,param_1,param_3);
      if (local_1c == 3) {
        PvP_Room::OnSetPVPSeatState(param_1,local_18,local_14,3,2);
      }
      PacketGuard::~PacketGuard(local_28);
    }
  }
  return;
}
```
