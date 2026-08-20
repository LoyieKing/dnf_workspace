# OnEndPvPResult

`_ZN8fair_pvp10CFairMatch14OnEndPvPResultEP8PvP_RoomP5CUser`

`fair_pvp::CFairMatch::OnEndPvPResult(PvP_Room*, CUser*)`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x0856694c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0856694c  _ZN8fair_pvp10CFairMatch14OnEndPvPResultEP8PvP_RoomP5CUser
#           fair_pvp::CFairMatch::OnEndPvPResult(PvP_Room*, CUser*)
# range [0x0856694c, 0x08566d3d]
0856694c +0x000:  push   %ebp
0856694d +0x001:  mov    %esp,%ebp
0856694f +0x003:  push   %edi
08566950 +0x004:  push   %esi
08566951 +0x005:  push   %ebx
08566952 +0x006:  sub    $0x7c,%esp
08566955 +0x009:  mov    0x10(%ebp),%eax
08566958 +0x00c:  mov    %eax,0x4(%esp)
0856695c +0x010:  mov    0xc(%ebp),%eax
0856695f +0x013:  mov    %eax,(%esp)
08566962 +0x016:  call   085d91e2 <_ZN8PvP_Room13get_user_seatEP5CUser>  ; PvP_Room::get_user_seat(CUser*)
08566967 +0x01b:  mov    %eax,-0x30(%ebp)
0856696a +0x01e:  cmpl   $0xffffffff,-0x30(%ebp)
0856696e +0x022:  jne    085669a1 <+0x55>
08566970 +0x024:  movl   $"error get_user_seat",0x10(%esp)
08566978 +0x02c:  movl   $0x10b3,0xc(%esp)
08566980 +0x034:  movl   $&_ZZN8fair_pvp10CFairMatch14OnEndPvPResultEP8PvP_RoomP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
08566988 +0x03c:  movl   $"MatchingSystem.cpp",0x4(%esp)
08566990 +0x044:  movl   $0x1,(%esp)
08566997 +0x04b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0856699c +0x050:  jmp    08566d35 <+0x3e9>
085669a1 +0x055:  mov    0xc(%ebp),%eax
085669a4 +0x058:  mov    %eax,(%esp)
085669a7 +0x05b:  call   085d6862 <_ZNK8PvP_Room16get_waiter_countEv>  ; PvP_Room::get_waiter_count() const
085669ac +0x060:  mov    %eax,-0x60(%ebp)
085669af +0x063:  mov    0xc(%ebp),%eax
085669b2 +0x066:  mov    %eax,(%esp)
085669b5 +0x069:  call   0822d9cc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3076>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3076
085669ba +0x06e:  mov    %eax,-0x5c(%ebp)
085669bd +0x071:  mov    0xc(%ebp),%eax
085669c0 +0x074:  mov    %eax,(%esp)
085669c3 +0x077:  call   0822d994 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x303e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x303e
085669c8 +0x07c:  mov    %eax,%edi
085669ca +0x07e:  mov    0x10(%ebp),%eax
085669cd +0x081:  mov    %eax,(%esp)
085669d0 +0x084:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
085669d5 +0x089:  mov    %eax,%esi
085669d7 +0x08b:  mov    0x10(%ebp),%eax
085669da +0x08e:  mov    %eax,(%esp)
085669dd +0x091:  call   08101072 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x94>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x94
085669e2 +0x096:  mov    %eax,%ebx
085669e4 +0x098:  movl   $0x0,0x10(%esp)
085669ec +0x0a0:  movl   $0x0,0xc(%esp)
085669f4 +0x0a8:  movl   $0x10b8,0x8(%esp)
085669fc +0x0b0:  movl   $&_ZZN8fair_pvp10CFairMatch14OnEndPvPResultEP8PvP_RoomP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
08566a04 +0x0b8:  lea    -0x40(%ebp),%eax
08566a07 +0x0bb:  mov    %eax,(%esp)
08566a0a +0x0be:  call   0854fd3c <_ZN10CSwitchLogC1EPKciii>  ; CSwitchLog::CSwitchLog(char const*, int, int, int)
08566a0f +0x0c3:  mov    -0x60(%ebp),%eax
08566a12 +0x0c6:  mov    %eax,0x18(%esp)
08566a16 +0x0ca:  mov    -0x5c(%ebp),%eax
08566a19 +0x0cd:  mov    %eax,0x14(%esp)
08566a1d +0x0d1:  mov    %edi,0x10(%esp)
08566a21 +0x0d5:  mov    %esi,0xc(%esp)
08566a25 +0x0d9:  mov    %ebx,0x8(%esp)
08566a29 +0x0dd:  movl   $"pvp@log %s,%s,room(%d),%d,%d",0x4(%esp)
08566a31 +0x0e5:  lea    -0x40(%ebp),%eax
08566a34 +0x0e8:  mov    %eax,(%esp)
08566a37 +0x0eb:  call   0854fd64 <_ZN10CSwitchLogclEPKcz>  ; CSwitchLog::operator()(char const*, ...)
08566a3c +0x0f0:  mov    -0x30(%ebp),%eax
08566a3f +0x0f3:  mov    %eax,0x4(%esp)
08566a43 +0x0f7:  mov    0xc(%ebp),%eax
08566a46 +0x0fa:  mov    %eax,(%esp)
08566a49 +0x0fd:  call   085d9272 <_ZN8PvP_Room8get_teamEi>  ; PvP_Room::get_team(int)
08566a4e +0x102:  mov    %eax,-0x2c(%ebp)
08566a51 +0x105:  cmpl   $0xfe,-0x2c(%ebp)
08566a58 +0x10c:  jne    08566a8b <+0x13f>
08566a5a +0x10e:  movl   $"error get_team",0x10(%esp)
08566a62 +0x116:  movl   $0x10be,0xc(%esp)
08566a6a +0x11e:  movl   $&_ZZN8fair_pvp10CFairMatch14OnEndPvPResultEP8PvP_RoomP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
08566a72 +0x126:  movl   $"MatchingSystem.cpp",0x4(%esp)
08566a7a +0x12e:  movl   $0x1,(%esp)
08566a81 +0x135:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08566a86 +0x13a:  jmp    08566d35 <+0x3e9>
08566a8b +0x13f:  mov    0x10(%ebp),%eax
08566a8e +0x142:  mov    %eax,0x4(%esp)
08566a92 +0x146:  mov    0x8(%ebp),%eax
08566a95 +0x149:  mov    %eax,(%esp)
08566a98 +0x14c:  call   085663a8 <_ZN8fair_pvp10CFairMatch9_FindTeamEP5CUser>  ; fair_pvp::CFairMatch::_FindTeam(CUser*)
08566a9d +0x151:  mov    %eax,-0x28(%ebp)
08566aa0 +0x154:  cmpl   $0x2,-0x28(%ebp)
08566aa4 +0x158:  jne    08566ad7 <+0x18b>
08566aa6 +0x15a:  movl   $"error _FindTeam",0x10(%esp)
08566aae +0x162:  movl   $0x10c5,0xc(%esp)
08566ab6 +0x16a:  movl   $&_ZZN8fair_pvp10CFairMatch14OnEndPvPResultEP8PvP_RoomP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
08566abe +0x172:  movl   $"MatchingSystem.cpp",0x4(%esp)
08566ac6 +0x17a:  movl   $0x1,(%esp)
08566acd +0x181:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08566ad2 +0x186:  jmp    08566d35 <+0x3e9>
08566ad7 +0x18b:  mov    -0x28(%ebp),%edx
08566ada +0x18e:  mov    0x8(%ebp),%ecx
08566add +0x191:  mov    %edx,%eax
08566adf +0x193:  shl    $0x3,%eax
08566ae2 +0x196:  add    %edx,%eax
08566ae4 +0x198:  shl    $0x3,%eax
08566ae7 +0x19b:  lea    (%ecx,%eax,1),%eax
08566aea +0x19e:  add    $0x20,%eax
08566aed +0x1a1:  mov    (%eax),%eax
08566aef +0x1a3:  cmp    $0x2,%eax
08566af2 +0x1a6:  je     08566d34 <+0x3e8>
08566af8 +0x1ac:  mov    -0x28(%ebp),%eax
08566afb +0x1af:  mov    %eax,0x4(%esp)
08566aff +0x1b3:  mov    0x8(%ebp),%eax
08566b02 +0x1b6:  mov    %eax,(%esp)
08566b05 +0x1b9:  call   08566476 <_ZN8fair_pvp10CFairMatch13_GetOtherTeamE22ENUM_SCHOOL_MATCH_TEAM>  ; fair_pvp::CFairMatch::_GetOtherTeam(ENUM_SCHOOL_MATCH_TEAM)
08566b0a +0x1be:  mov    %eax,-0x24(%ebp)
08566b0d +0x1c1:  cmpl   $0x2,-0x24(%ebp)
08566b11 +0x1c5:  jne    08566b44 <+0x1f8>
08566b13 +0x1c7:  movl   $"error _GetOtherTeam",0x10(%esp)
08566b1b +0x1cf:  movl   $0x10d2,0xc(%esp)
08566b23 +0x1d7:  movl   $&_ZZN8fair_pvp10CFairMatch14OnEndPvPResultEP8PvP_RoomP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
08566b2b +0x1df:  movl   $"MatchingSystem.cpp",0x4(%esp)
08566b33 +0x1e7:  movl   $0x1,(%esp)
08566b3a +0x1ee:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08566b3f +0x1f3:  jmp    08566d35 <+0x3e9>
08566b44 +0x1f8:  movl   $0x1,0x4(%esp)
08566b4c +0x200:  mov    0xc(%ebp),%eax
08566b4f +0x203:  mov    %eax,(%esp)
08566b52 +0x206:  call   08568d7e <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x748>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x748
08566b57 +0x20b:  movl   $0x0,-0x20(%ebp)
08566b5e +0x212:  jmp    08566bea <+0x29e>
08566b63 +0x217:  mov    -0x28(%ebp),%edx
08566b66 +0x21a:  mov    -0x20(%ebp),%eax
08566b69 +0x21d:  mov    0x8(%ebp),%ecx
08566b6c +0x220:  mov    %eax,%ebx
08566b6e +0x222:  shl    $0x4,%ebx
08566b71 +0x225:  mov    %edx,%eax
08566b73 +0x227:  shl    $0x3,%eax
08566b76 +0x22a:  add    %edx,%eax
08566b78 +0x22c:  shl    $0x3,%eax
08566b7b +0x22f:  lea    (%ebx,%eax,1),%eax
08566b7e +0x232:  lea    (%ecx,%eax,1),%eax
08566b81 +0x235:  add    $0x10,%eax
08566b84 +0x238:  movzbl 0x18(%eax),%eax
08566b88 +0x23c:  test   %al,%al
08566b8a +0x23e:  je     08566be6 <+0x29a>
08566b8c +0x240:  mov    -0x28(%ebp),%edx
08566b8f +0x243:  mov    -0x20(%ebp),%eax
08566b92 +0x246:  mov    0x8(%ebp),%ecx
08566b95 +0x249:  mov    %eax,%ebx
08566b97 +0x24b:  shl    $0x4,%ebx
08566b9a +0x24e:  mov    %edx,%eax
08566b9c +0x250:  shl    $0x3,%eax
08566b9f +0x253:  add    %edx,%eax
08566ba1 +0x255:  shl    $0x3,%eax
08566ba4 +0x258:  lea    (%ebx,%eax,1),%eax
08566ba7 +0x25b:  lea    (%ecx,%eax,1),%eax
08566baa +0x25e:  add    $0x24,%eax
08566bad +0x261:  mov    (%eax),%eax
08566baf +0x263:  test   %eax,%eax
08566bb1 +0x265:  je     08566be6 <+0x29a>
08566bb3 +0x267:  mov    -0x28(%ebp),%edx
08566bb6 +0x26a:  mov    -0x20(%ebp),%eax
08566bb9 +0x26d:  mov    0x8(%ebp),%ecx
08566bbc +0x270:  mov    %eax,%ebx
08566bbe +0x272:  shl    $0x4,%ebx
08566bc1 +0x275:  mov    %edx,%eax
08566bc3 +0x277:  shl    $0x3,%eax
08566bc6 +0x27a:  add    %edx,%eax
08566bc8 +0x27c:  shl    $0x3,%eax
08566bcb +0x27f:  lea    (%ebx,%eax,1),%eax
08566bce +0x282:  lea    (%ecx,%eax,1),%eax
08566bd1 +0x285:  add    $0x24,%eax
08566bd4 +0x288:  mov    (%eax),%eax
08566bd6 +0x28a:  movl   $0x6,0x4(%esp)
08566bde +0x292:  mov    %eax,(%esp)
08566be1 +0x295:  call   0867edb2 <_ZN5CUser9set_stateE8ch_state>  ; CUser::set_state(ch_state)
08566be6 +0x29a:  addl   $0x1,-0x20(%ebp)
08566bea +0x29e:  cmpl   $0x3,-0x20(%ebp)
08566bee +0x2a2:  setle  %al
08566bf1 +0x2a5:  test   %al,%al
08566bf3 +0x2a7:  jne    08566b63 <+0x217>
08566bf9 +0x2ad:  mov    -0x28(%ebp),%edx
08566bfc +0x2b0:  mov    0x8(%ebp),%ecx
08566bff +0x2b3:  mov    %edx,%eax
08566c01 +0x2b5:  shl    $0x3,%eax
08566c04 +0x2b8:  add    %edx,%eax
08566c06 +0x2ba:  shl    $0x3,%eax
08566c09 +0x2bd:  lea    (%ecx,%eax,1),%eax
08566c0c +0x2c0:  add    $0x20,%eax
08566c0f +0x2c3:  mov    (%eax),%eax
08566c11 +0x2c5:  cmp    $0x1,%eax
08566c14 +0x2c8:  jne    08566ccc <+0x380>
08566c1a +0x2ce:  mov    -0x2c(%ebp),%eax
08566c1d +0x2d1:  mov    %eax,0x4(%esp)
08566c21 +0x2d5:  mov    0x8(%ebp),%eax
08566c24 +0x2d8:  mov    %eax,(%esp)
08566c27 +0x2db:  call   08564f8c <_ZN8fair_pvp10CFairMatch16_GetOppositeTeamEi>  ; fair_pvp::CFairMatch::_GetOppositeTeam(int)
08566c2c +0x2e0:  movl   $0x0,0xc(%esp)
08566c34 +0x2e8:  mov    %eax,0x8(%esp)
08566c38 +0x2ec:  mov    0xc(%ebp),%eax
08566c3b +0x2ef:  mov    %eax,0x4(%esp)
08566c3f +0x2f3:  mov    0x8(%ebp),%eax
08566c42 +0x2f6:  mov    %eax,(%esp)
08566c45 +0x2f9:  call   08564dea <_ZN8fair_pvp10CFairMatch11_ReturnTeamEP8PvP_RoomiP5CUser>  ; fair_pvp::CFairMatch::_ReturnTeam(PvP_Room*, int, CUser*)
08566c4a +0x2fe:  mov    %eax,-0x1c(%ebp)
08566c4d +0x301:  cmpl   $0x0,-0x1c(%ebp)
08566c51 +0x305:  je     08566d01 <+0x3b5>
08566c57 +0x30b:  lea    -0x4c(%ebp),%eax
08566c5a +0x30e:  mov    %eax,(%esp)
08566c5d +0x311:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08566c62 +0x316:  movl   $0x13b,0x8(%esp)
08566c6a +0x31e:  movl   $0x0,0x4(%esp)
08566c72 +0x326:  lea    -0x4c(%ebp),%eax
08566c75 +0x329:  mov    %eax,(%esp)
08566c78 +0x32c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08566c7d +0x331:  movl   $0x1,0x4(%esp)
08566c85 +0x339:  lea    -0x4c(%ebp),%eax
08566c88 +0x33c:  mov    %eax,(%esp)
08566c8b +0x33f:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08566c90 +0x344:  lea    -0x4c(%ebp),%eax
08566c93 +0x347:  mov    %eax,0x4(%esp)
08566c97 +0x34b:  mov    -0x1c(%ebp),%eax
08566c9a +0x34e:  mov    %eax,(%esp)
08566c9d +0x351:  call   085dbe18 <_ZN8PvP_Room11send_to_pvpER11PacketGuard>  ; PvP_Room::send_to_pvp(PacketGuard&)
08566ca2 +0x356:  jmp    08566cbf <+0x373>
08566ca4 +0x358:  mov    %edx,%ebx
08566ca6 +0x35a:  mov    %eax,%esi
08566ca8 +0x35c:  lea    -0x4c(%ebp),%eax
08566cab +0x35f:  mov    %eax,(%esp)
08566cae +0x362:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08566cb3 +0x367:  mov    %esi,%eax
08566cb5 +0x369:  mov    %ebx,%edx
08566cb7 +0x36b:  mov    %eax,(%esp)
08566cba +0x36e:  call   08ae3750 <_Unwind_Resume>
08566cbf +0x373:  lea    -0x4c(%ebp),%eax
08566cc2 +0x376:  mov    %eax,(%esp)
08566cc5 +0x379:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08566cca +0x37e:  jmp    08566d01 <+0x3b5>
08566ccc +0x380:  mov    -0x28(%ebp),%edx
08566ccf +0x383:  mov    0x8(%ebp),%ecx
08566cd2 +0x386:  mov    %edx,%eax
08566cd4 +0x388:  shl    $0x3,%eax
08566cd7 +0x38b:  add    %edx,%eax
08566cd9 +0x38d:  shl    $0x3,%eax
08566cdc +0x390:  lea    (%ecx,%eax,1),%eax
08566cdf +0x393:  add    $0x20,%eax
08566ce2 +0x396:  mov    (%eax),%eax
08566ce4 +0x398:  test   %eax,%eax
08566ce6 +0x39a:  jne    08566d01 <+0x3b5>
08566ce8 +0x39c:  mov    -0x28(%ebp),%eax
08566ceb +0x39f:  mov    %eax,0x8(%esp)
08566cef +0x3a3:  mov    0xc(%ebp),%eax
08566cf2 +0x3a6:  mov    %eax,0x4(%esp)
08566cf6 +0x3aa:  mov    0x8(%ebp),%eax
08566cf9 +0x3ad:  mov    %eax,(%esp)
08566cfc +0x3b0:  call   08565d86 <_ZN8fair_pvp10CFairMatch16_PullOutRoomTeamEP8PvP_Room22ENUM_SCHOOL_MATCH_TEAM>  ; fair_pvp::CFairMatch::_PullOutRoomTeam(PvP_Room*, ENUM_SCHOOL_MATCH_TEAM)
08566d01 +0x3b5:  movl   $0x2,0x4(%esp)
08566d09 +0x3bd:  mov    0xc(%ebp),%eax
08566d0c +0x3c0:  mov    %eax,(%esp)
08566d0f +0x3c3:  call   08568d7e <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x748>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x748
08566d14 +0x3c8:  cmpl   $0x1,-0x2c(%ebp)
08566d18 +0x3cc:  jne    08566d35 <+0x3e9>
08566d1a +0x3ce:  mov    0x8(%ebp),%eax
08566d1d +0x3d1:  lea    0x64(%eax),%edx
08566d20 +0x3d4:  mov    0x8(%ebp),%eax
08566d23 +0x3d7:  add    $0x1c,%eax
08566d26 +0x3da:  mov    %edx,0x4(%esp)
08566d2a +0x3de:  mov    %eax,(%esp)
08566d2d +0x3e1:  call   0856942b <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0xdf5>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0xdf5
08566d32 +0x3e6:  jmp    08566d35 <+0x3e9>
08566d34 +0x3e8:  nop
08566d35 +0x3e9:  add    $0x7c,%esp
08566d38 +0x3ec:  pop    %ebx
08566d39 +0x3ed:  pop    %esi
08566d3a +0x3ee:  pop    %edi
08566d3b +0x3ef:  pop    %ebp
08566d3c +0x3f0:  ret
08566d3d +0x3f1:  nop
```

## 反编译 C

```c
// fair_pvp::CFairMatch::OnEndPvPResult @ 0x856694c

/* fair_pvp::CFairMatch::OnEndPvPResult(PvP_Room*, CUser*) */

void __thiscall
fair_pvp::CFairMatch::OnEndPvPResult(CFairMatch *this,PvP_Room *param_1,CUser *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  PacketGuard local_50 [12];
  CSwitchLog local_44 [16];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  PvP_Room *local_20;
  
  local_34 = PvP_Room::get_user_seat(param_1,param_2);
  if (local_34 == -1) {
    LogManager::logFormat
              (1,"MatchingSystem.cpp",
               "virtual void fair_pvp::CFairMatch::OnEndPvPResult(PvP_Room*, CUser*)",0x10b3,
               "error get_user_seat");
  }
  else {
    uVar1 = PvP_Room::get_waiter_count(param_1);
    uVar2 = PvP_Room::get_pvp_battle_mode(param_1);
    uVar3 = PvP_Room::get_index(param_1);
    uVar4 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_2);
    uVar5 = CUser::get_acc_name(param_2);
    CSwitchLog::CSwitchLog
              (local_44,"virtual void fair_pvp::CFairMatch::OnEndPvPResult(PvP_Room*, CUser*)",
               0x10b8,0,0);
    CSwitchLog::operator()(local_44,"pvp@log %s,%s,room(%d),%d,%d",uVar5,uVar4,uVar3,uVar2,uVar1);
    local_30 = PvP_Room::get_team(param_1,local_34);
    if (local_30 == 0xfe) {
      LogManager::logFormat
                (1,"MatchingSystem.cpp",
                 "virtual void fair_pvp::CFairMatch::OnEndPvPResult(PvP_Room*, CUser*)",0x10be,
                 "error get_team");
    }
    else {
      local_2c = _FindTeam(this,param_2);
      if (local_2c == 2) {
        LogManager::logFormat
                  (1,"MatchingSystem.cpp",
                   "virtual void fair_pvp::CFairMatch::OnEndPvPResult(PvP_Room*, CUser*)",0x10c5,
                   "error _FindTeam");
      }
      else if (*(int *)(this + local_2c * 0x48 + 0x20) != 2) {
        local_28 = _GetOtherTeam(this,local_2c);
        if (local_28 == 2) {
          LogManager::logFormat
                    (1,"MatchingSystem.cpp",
                     "virtual void fair_pvp::CFairMatch::OnEndPvPResult(PvP_Room*, CUser*)",0x10d2,
                     "error _GetOtherTeam");
        }
        else {
          PvP_Room::set_state(param_1,1);
          for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
            if ((this[local_24 * 0x10 + local_2c * 0x48 + 0x28] != (CFairMatch)0x0) &&
               (*(int *)(this + local_24 * 0x10 + local_2c * 0x48 + 0x24) != 0)) {
              CUser::set_state(*(CUser **)(this + local_24 * 0x10 + local_2c * 0x48 + 0x24),6);
            }
          }
          if (*(int *)(this + local_2c * 0x48 + 0x20) == 1) {
            iVar6 = _GetOppositeTeam(this,local_30);
            local_20 = (PvP_Room *)_ReturnTeam(this,param_1,iVar6,(CUser *)0x0);
            if (local_20 != (PvP_Room *)0x0) {
              PacketGuard::PacketGuard(local_50);
                    /* try { // try from 08566c78 to 08566ca1 has its CatchHandler @ 08566ca4 */
              InterfacePacketBuf::put_header((InterfacePacketBuf *)local_50,0,0x13b);
              InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
              PvP_Room::send_to_pvp(local_20,local_50);
              PacketGuard::~PacketGuard(local_50);
            }
          }
          else if (*(int *)(this + local_2c * 0x48 + 0x20) == 0) {
            _PullOutRoomTeam(this,param_1,local_2c);
          }
          PvP_Room::set_state(param_1,2);
          if (local_30 == 1) {
            std::swap<fair_pvp::TeamInfoThird>
                      ((TeamInfoThird *)(this + 0x1c),(TeamInfoThird *)(this + 100));
          }
        }
      }
    }
  }
  return;
}
```
