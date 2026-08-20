# set_seat_state

`_ZN8PvP_Room14set_seat_stateEP5CUseri15ENUM_SEAT_STATEPS1_RbS4_S4_`

`PvP_Room::set_seat_state(CUser*, int, ENUM_SEAT_STATE, CUser**, bool&, bool&, bool&)`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085d77c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d77c0  _ZN8PvP_Room14set_seat_stateEP5CUseri15ENUM_SEAT_STATEPS1_RbS4_S4_
#           PvP_Room::set_seat_state(CUser*, int, ENUM_SEAT_STATE, CUser**, bool&, bool&, bool&)
# range [0x085d77c0, 0x085d7d4f]
085d77c0 +0x000:  push   %ebp
085d77c1 +0x001:  mov    %esp,%ebp
085d77c3 +0x003:  push   %edi
085d77c4 +0x004:  push   %esi
085d77c5 +0x005:  push   %ebx
085d77c6 +0x006:  sub    $0x6c,%esp
085d77c9 +0x009:  cmpl   $0x0,0xc(%ebp)
085d77cd +0x00d:  jne    085d77d9 <+0x19>
085d77cf +0x00f:  mov    $0x0,%eax
085d77d4 +0x014:  jmp    085d7d48 <+0x588>
085d77d9 +0x019:  mov    0x8(%ebp),%eax
085d77dc +0x01c:  mov    %eax,(%esp)
085d77df +0x01f:  call   085d6862 <_ZNK8PvP_Room16get_waiter_countEv>  ; PvP_Room::get_waiter_count() const
085d77e4 +0x024:  mov    %eax,-0x44(%ebp)
085d77e7 +0x027:  mov    0x14(%ebp),%eax
085d77ea +0x02a:  mov    %eax,-0x40(%ebp)
085d77ed +0x02d:  mov    0x8(%ebp),%eax
085d77f0 +0x030:  mov    %eax,(%esp)
085d77f3 +0x033:  call   0822d9cc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3076>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3076
085d77f8 +0x038:  mov    %eax,-0x3c(%ebp)
085d77fb +0x03b:  mov    0x8(%ebp),%eax
085d77fe +0x03e:  mov    %eax,(%esp)
085d7801 +0x041:  call   0822d994 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x303e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x303e
085d7806 +0x046:  mov    %eax,%edi
085d7808 +0x048:  mov    0xc(%ebp),%eax
085d780b +0x04b:  mov    %eax,(%esp)
085d780e +0x04e:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
085d7813 +0x053:  mov    %eax,%esi
085d7815 +0x055:  mov    0xc(%ebp),%eax
085d7818 +0x058:  mov    %eax,(%esp)
085d781b +0x05b:  call   08101072 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x94>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x94
085d7820 +0x060:  mov    %eax,%ebx
085d7822 +0x062:  movl   $0x0,0x10(%esp)
085d782a +0x06a:  movl   $0x0,0xc(%esp)
085d7832 +0x072:  movl   $0x594,0x8(%esp)
085d783a +0x07a:  movl   $&_ZZN8PvP_Room14set_seat_stateEP5CUseri15ENUM_SEAT_STATEPS1_RbS4_S4_E19__PRETTY_FUNCTION__,0x4(%esp)
085d7842 +0x082:  lea    -0x30(%ebp),%eax
085d7845 +0x085:  mov    %eax,(%esp)
085d7848 +0x088:  call   0854fd3c <_ZN10CSwitchLogC1EPKciii>  ; CSwitchLog::CSwitchLog(char const*, int, int, int)
085d784d +0x08d:  mov    -0x44(%ebp),%eax
085d7850 +0x090:  mov    %eax,0x20(%esp)
085d7854 +0x094:  mov    -0x40(%ebp),%eax
085d7857 +0x097:  mov    %eax,0x1c(%esp)
085d785b +0x09b:  mov    0x10(%ebp),%eax
085d785e +0x09e:  mov    %eax,0x18(%esp)
085d7862 +0x0a2:  mov    -0x3c(%ebp),%eax
085d7865 +0x0a5:  mov    %eax,0x14(%esp)
085d7869 +0x0a9:  mov    %edi,0x10(%esp)
085d786d +0x0ad:  mov    %esi,0xc(%esp)
085d7871 +0x0b1:  mov    %ebx,0x8(%esp)
085d7875 +0x0b5:  movl   $"pvp@log %s,%s,room(%d),%d,%d,%d,%d",0x4(%esp)
085d787d +0x0bd:  lea    -0x30(%ebp),%eax
085d7880 +0x0c0:  mov    %eax,(%esp)
085d7883 +0x0c3:  call   0854fd64 <_ZN10CSwitchLogclEPKcz>  ; CSwitchLog::operator()(char const*, ...)
085d7888 +0x0c8:  mov    0x14(%ebp),%eax
085d788b +0x0cb:  cmp    $0xfe,%eax
085d7890 +0x0d0:  je     085d78d6 <+0x116>
085d7892 +0x0d2:  cmp    $0xff,%eax
085d7897 +0x0d7:  jne    085d7d09 <+0x549>
085d789d +0x0dd:  mov    0x8(%ebp),%eax
085d78a0 +0x0e0:  mov    0x28(%eax),%eax
085d78a3 +0x0e3:  cmp    0xc(%ebp),%eax
085d78a6 +0x0e6:  je     085d78b2 <+0xf2>
085d78a8 +0x0e8:  mov    $0x8,%eax
085d78ad +0x0ed:  jmp    085d7d48 <+0x588>
085d78b2 +0x0f2:  mov    0x14(%ebp),%eax
085d78b5 +0x0f5:  mov    %eax,0x8(%esp)
085d78b9 +0x0f9:  mov    0x10(%ebp),%eax
085d78bc +0x0fc:  mov    %eax,0x4(%esp)
085d78c0 +0x100:  mov    0x8(%ebp),%eax
085d78c3 +0x103:  mov    %eax,(%esp)
085d78c6 +0x106:  call   085d7d50 <_ZN8PvP_Room11change_teamEii>  ; PvP_Room::change_team(int, int)
085d78cb +0x10b:  mov    0x1c(%ebp),%eax
085d78ce +0x10e:  movb   $0x1,(%eax)
085d78d1 +0x111:  jmp    085d7d43 <+0x583>
085d78d6 +0x116:  mov    0x8(%ebp),%eax
085d78d9 +0x119:  mov    0xb8(%eax),%eax
085d78df +0x11f:  cmp    $0x2,%eax
085d78e2 +0x122:  jne    085d7a9e <+0x2de>
085d78e8 +0x128:  mov    0x10(%ebp),%edx
085d78eb +0x12b:  mov    0x8(%ebp),%eax
085d78ee +0x12e:  add    $0xc,%edx
085d78f1 +0x131:  mov    (%eax,%edx,4),%eax
085d78f4 +0x134:  test   %eax,%eax
085d78f6 +0x136:  jne    085d7902 <+0x142>
085d78f8 +0x138:  mov    $0x4,%eax
085d78fd +0x13d:  jmp    085d7d48 <+0x588>
085d7902 +0x142:  mov    0x8(%ebp),%eax
085d7905 +0x145:  mov    0x28(%eax),%edx
085d7908 +0x148:  mov    0x10(%ebp),%ecx
085d790b +0x14b:  mov    0x8(%ebp),%eax
085d790e +0x14e:  add    $0xc,%ecx
085d7911 +0x151:  mov    (%eax,%ecx,4),%eax
085d7914 +0x154:  cmp    %eax,%edx
085d7916 +0x156:  jne    085d792f <+0x16f>
085d7918 +0x158:  mov    0x8(%ebp),%eax
085d791b +0x15b:  mov    %eax,(%esp)
085d791e +0x15e:  call   085d7ef4 <_ZN8PvP_Room18select_new_managerEv>  ; PvP_Room::select_new_manager()
085d7923 +0x163:  mov    0x1c(%ebp),%eax
085d7926 +0x166:  movb   $0x1,(%eax)
085d7929 +0x169:  mov    0x20(%ebp),%eax
085d792c +0x16c:  movb   $0x1,(%eax)
085d792f +0x16f:  mov    0x10(%ebp),%edx
085d7932 +0x172:  mov    0x8(%ebp),%eax
085d7935 +0x175:  add    $0xc,%edx
085d7938 +0x178:  mov    (%eax,%edx,4),%edx
085d793b +0x17b:  mov    0x18(%ebp),%eax
085d793e +0x17e:  mov    %edx,(%eax)
085d7940 +0x180:  mov    0x18(%ebp),%eax
085d7943 +0x183:  mov    (%eax),%eax
085d7945 +0x185:  mov    %eax,0x4(%esp)
085d7949 +0x189:  mov    0x8(%ebp),%eax
085d794c +0x18c:  mov    %eax,(%esp)
085d794f +0x18f:  call   085dcaf2 <_ZN8PvP_Room16GiveOuterPenaltyEP5CUser>  ; PvP_Room::GiveOuterPenalty(CUser*)
085d7954 +0x194:  mov    0x10(%ebp),%edx
085d7957 +0x197:  mov    0x8(%ebp),%eax
085d795a +0x19a:  add    $0xc,%edx
085d795d +0x19d:  mov    (%eax,%edx,4),%eax
085d7960 +0x1a0:  movl   $0xffffffff,0x4(%esp)
085d7968 +0x1a8:  mov    %eax,(%esp)
085d796b +0x1ab:  call   085df9b2 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x239>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x239
085d7970 +0x1b0:  mov    0x10(%ebp),%eax
085d7973 +0x1b3:  mov    %eax,0x4(%esp)
085d7977 +0x1b7:  mov    0x8(%ebp),%eax
085d797a +0x1ba:  mov    %eax,(%esp)
085d797d +0x1bd:  call   085d9272 <_ZN8PvP_Room8get_teamEi>  ; PvP_Room::get_team(int)
085d7982 +0x1c2:  mov    %eax,-0x20(%ebp)
085d7985 +0x1c5:  mov    0x8(%ebp),%eax
085d7988 +0x1c8:  mov    %eax,(%esp)
085d798b +0x1cb:  call   085df93a <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x1c1>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x1c1
085d7990 +0x1d0:  mov    0x10(%ebp),%eax
085d7993 +0x1d3:  mov    0x8(%ebp),%edx
085d7996 +0x1d6:  movb   $0x0,0x70(%edx,%eax,1)
085d799b +0x1db:  mov    0x10(%ebp),%edx
085d799e +0x1de:  mov    0x8(%ebp),%eax
085d79a1 +0x1e1:  add    $0x14,%edx
085d79a4 +0x1e4:  movl   $0xff,(%eax,%edx,4)
085d79ab +0x1eb:  mov    0x10(%ebp),%edx
085d79ae +0x1ee:  mov    0x8(%ebp),%eax
085d79b1 +0x1f1:  add    $0xc,%edx
085d79b4 +0x1f4:  movl   $0x0,(%eax,%edx,4)
085d79bb +0x1fb:  mov    0x8(%ebp),%eax
085d79be +0x1fe:  mov    0x600(%eax),%eax
085d79c4 +0x204:  lea    -0x1(%eax),%edx
085d79c7 +0x207:  mov    0x8(%ebp),%eax
085d79ca +0x20a:  mov    %edx,0x600(%eax)
085d79d0 +0x210:  mov    0x10(%ebp),%eax
085d79d3 +0x213:  mov    0x8(%ebp),%edx
085d79d6 +0x216:  movb   $0x0,0x5c8(%edx,%eax,1)
085d79de +0x21e:  mov    0x8(%ebp),%eax
085d79e1 +0x221:  mov    %eax,(%esp)
085d79e4 +0x224:  call   085df940 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x1c7>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x1c7
085d79e9 +0x229:  mov    0x8(%ebp),%eax
085d79ec +0x22c:  lea    0x620(%eax),%edx
085d79f2 +0x232:  mov    0x10(%ebp),%eax
085d79f5 +0x235:  mov    %eax,0x4(%esp)
085d79f9 +0x239:  mov    %edx,(%esp)
085d79fc +0x23c:  call   085de0f0 <_ZN15CRelayBattleMgr11OnLeaveRoomEi>  ; CRelayBattleMgr::OnLeaveRoom(int)
085d7a01 +0x241:  mov    0x8(%ebp),%eax
085d7a04 +0x244:  mov    0x6e4(%eax),%eax
085d7a0a +0x24a:  mov    (%eax),%eax
085d7a0c +0x24c:  add    $0x2c,%eax
085d7a0f +0x24f:  mov    (%eax),%ebx
085d7a11 +0x251:  mov    0x18(%ebp),%eax
085d7a14 +0x254:  mov    (%eax),%edx
085d7a16 +0x256:  mov    0x8(%ebp),%eax
085d7a19 +0x259:  mov    0x6e4(%eax),%eax
085d7a1f +0x25f:  mov    0x10(%ebp),%ecx
085d7a22 +0x262:  mov    %ecx,0x10(%esp)
085d7a26 +0x266:  mov    -0x20(%ebp),%ecx
085d7a29 +0x269:  mov    %ecx,0xc(%esp)
085d7a2d +0x26d:  mov    0x8(%ebp),%ecx
085d7a30 +0x270:  mov    %ecx,0x8(%esp)
085d7a34 +0x274:  mov    %edx,0x4(%esp)
085d7a38 +0x278:  mov    %eax,(%esp)
085d7a3b +0x27b:  call   *%ebx
085d7a3d +0x27d:  mov    0x8(%ebp),%eax
085d7a40 +0x280:  mov    %eax,(%esp)
085d7a43 +0x283:  call   085d6862 <_ZNK8PvP_Room16get_waiter_countEv>  ; PvP_Room::get_waiter_count() const
085d7a48 +0x288:  test   %eax,%eax
085d7a4a +0x28a:  sete   %al
085d7a4d +0x28d:  test   %al,%al
085d7a4f +0x28f:  je     085d7a73 <+0x2b3>
085d7a51 +0x291:  mov    0x8(%ebp),%eax
085d7a54 +0x294:  mov    %eax,(%esp)
085d7a57 +0x297:  call   085d62c8 <_ZN8PvP_Room5resetEv>  ; PvP_Room::reset()
085d7a5c +0x29c:  mov    0x1c(%ebp),%eax
085d7a5f +0x29f:  movb   $0x1,(%eax)
085d7a62 +0x2a2:  mov    0x20(%ebp),%eax
085d7a65 +0x2a5:  movb   $0x1,(%eax)
085d7a68 +0x2a8:  mov    0x24(%ebp),%eax
085d7a6b +0x2ab:  movb   $0x1,(%eax)
085d7a6e +0x2ae:  jmp    085d7d43 <+0x583>
085d7a73 +0x2b3:  mov    0x8(%ebp),%eax
085d7a76 +0x2b6:  mov    %eax,(%esp)
085d7a79 +0x2b9:  call   085d96ec <_ZN8PvP_Room12check_winnerEv>  ; PvP_Room::check_winner()
085d7a7e +0x2be:  test   %al,%al
085d7a80 +0x2c0:  je     085d7a93 <+0x2d3>
085d7a82 +0x2c2:  mov    0x20(%ebp),%eax
085d7a85 +0x2c5:  movb   $0x1,(%eax)
085d7a88 +0x2c8:  mov    0x8(%ebp),%eax
085d7a8b +0x2cb:  mov    %eax,(%esp)
085d7a8e +0x2ce:  call   085dcd7e <_ZN8PvP_Room20pvp_request_pvp_rankEv>  ; PvP_Room::pvp_request_pvp_rank()
085d7a93 +0x2d3:  mov    0x1c(%ebp),%eax
085d7a96 +0x2d6:  movb   $0x1,(%eax)
085d7a99 +0x2d9:  jmp    085d7d43 <+0x583>
085d7a9e +0x2de:  mov    0x8(%ebp),%eax
085d7aa1 +0x2e1:  mov    0x28(%eax),%eax
085d7aa4 +0x2e4:  cmp    0xc(%ebp),%eax
085d7aa7 +0x2e7:  jne    085d7be4 <+0x424>
085d7aad +0x2ed:  mov    0x10(%ebp),%edx
085d7ab0 +0x2f0:  mov    0x8(%ebp),%eax
085d7ab3 +0x2f3:  add    $0xc,%edx
085d7ab6 +0x2f6:  mov    (%eax,%edx,4),%eax
085d7ab9 +0x2f9:  test   %eax,%eax
085d7abb +0x2fb:  je     085d7ba7 <+0x3e7>
085d7ac1 +0x301:  mov    0x10(%ebp),%edx
085d7ac4 +0x304:  mov    0x8(%ebp),%eax
085d7ac7 +0x307:  add    $0xc,%edx
085d7aca +0x30a:  mov    (%eax,%edx,4),%eax
085d7acd +0x30d:  movl   $0xffffffff,0x4(%esp)
085d7ad5 +0x315:  mov    %eax,(%esp)
085d7ad8 +0x318:  call   085df9b2 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x239>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x239
085d7add +0x31d:  mov    0x10(%ebp),%edx
085d7ae0 +0x320:  mov    0x8(%ebp),%eax
085d7ae3 +0x323:  add    $0xc,%edx
085d7ae6 +0x326:  mov    (%eax,%edx,4),%edx
085d7ae9 +0x329:  mov    0x8(%ebp),%eax
085d7aec +0x32c:  mov    0x28(%eax),%eax
085d7aef +0x32f:  cmp    %eax,%edx
085d7af1 +0x331:  jne    085d7b04 <+0x344>
085d7af3 +0x333:  mov    0x8(%ebp),%eax
085d7af6 +0x336:  mov    %eax,(%esp)
085d7af9 +0x339:  call   085d7ef4 <_ZN8PvP_Room18select_new_managerEv>  ; PvP_Room::select_new_manager()
085d7afe +0x33e:  mov    0x20(%ebp),%eax
085d7b01 +0x341:  movb   $0x1,(%eax)
085d7b04 +0x344:  mov    0x10(%ebp),%edx
085d7b07 +0x347:  mov    0x8(%ebp),%eax
085d7b0a +0x34a:  add    $0xc,%edx
085d7b0d +0x34d:  mov    (%eax,%edx,4),%edx
085d7b10 +0x350:  mov    0x18(%ebp),%eax
085d7b13 +0x353:  mov    %edx,(%eax)
085d7b15 +0x355:  mov    0x10(%ebp),%eax
085d7b18 +0x358:  mov    0x8(%ebp),%edx
085d7b1b +0x35b:  movb   $0x0,0x70(%edx,%eax,1)
085d7b20 +0x360:  mov    0x10(%ebp),%edx
085d7b23 +0x363:  mov    0x8(%ebp),%eax
085d7b26 +0x366:  add    $0x14,%edx
085d7b29 +0x369:  movl   $0xff,(%eax,%edx,4)
085d7b30 +0x370:  mov    0x10(%ebp),%edx
085d7b33 +0x373:  mov    0x8(%ebp),%eax
085d7b36 +0x376:  add    $0xc,%edx
085d7b39 +0x379:  movl   $0x0,(%eax,%edx,4)
085d7b40 +0x380:  mov    0x8(%ebp),%eax
085d7b43 +0x383:  lea    0x620(%eax),%edx
085d7b49 +0x389:  movl   $0xff,0x8(%esp)
085d7b51 +0x391:  mov    0x10(%ebp),%eax
085d7b54 +0x394:  mov    %eax,0x4(%esp)
085d7b58 +0x398:  mov    %edx,(%esp)
085d7b5b +0x39b:  call   085de15a <_ZN15CRelayBattleMgr12OnChangeTeamEii>  ; CRelayBattleMgr::OnChangeTeam(int, int)
085d7b60 +0x3a0:  mov    0x8(%ebp),%eax
085d7b63 +0x3a3:  mov    %eax,(%esp)
085d7b66 +0x3a6:  call   085d6862 <_ZNK8PvP_Room16get_waiter_countEv>  ; PvP_Room::get_waiter_count() const
085d7b6b +0x3ab:  test   %eax,%eax
085d7b6d +0x3ad:  sete   %al
085d7b70 +0x3b0:  test   %al,%al
085d7b72 +0x3b2:  je     085d7b96 <+0x3d6>
085d7b74 +0x3b4:  mov    0x8(%ebp),%eax
085d7b77 +0x3b7:  mov    %eax,(%esp)
085d7b7a +0x3ba:  call   085d62c8 <_ZN8PvP_Room5resetEv>  ; PvP_Room::reset()
085d7b7f +0x3bf:  mov    0x1c(%ebp),%eax
085d7b82 +0x3c2:  movb   $0x1,(%eax)
085d7b85 +0x3c5:  mov    0x20(%ebp),%eax
085d7b88 +0x3c8:  movb   $0x1,(%eax)
085d7b8b +0x3cb:  mov    0x24(%ebp),%eax
085d7b8e +0x3ce:  movb   $0x1,(%eax)
085d7b91 +0x3d1:  jmp    085d7d43 <+0x583>
085d7b96 +0x3d6:  mov    0x1c(%ebp),%eax
085d7b99 +0x3d9:  movb   $0x1,(%eax)
085d7b9c +0x3dc:  mov    0x20(%ebp),%eax
085d7b9f +0x3df:  movb   $0x1,(%eax)
085d7ba2 +0x3e2:  jmp    085d7d43 <+0x583>
085d7ba7 +0x3e7:  mov    0x8(%ebp),%eax
085d7baa +0x3ea:  mov    %eax,(%esp)
085d7bad +0x3ed:  call   085d7726 <_ZN8PvP_Room23is_closeable_seat_stateEv>  ; PvP_Room::is_closeable_seat_state()
085d7bb2 +0x3f2:  test   %al,%al
085d7bb4 +0x3f4:  je     085d7bda <+0x41a>
085d7bb6 +0x3f6:  mov    0x14(%ebp),%eax
085d7bb9 +0x3f9:  mov    %eax,0x8(%esp)
085d7bbd +0x3fd:  mov    0x10(%ebp),%eax
085d7bc0 +0x400:  mov    %eax,0x4(%esp)
085d7bc4 +0x404:  mov    0x8(%ebp),%eax
085d7bc7 +0x407:  mov    %eax,(%esp)
085d7bca +0x40a:  call   085d7d50 <_ZN8PvP_Room11change_teamEii>  ; PvP_Room::change_team(int, int)
085d7bcf +0x40f:  mov    0x1c(%ebp),%eax
085d7bd2 +0x412:  movb   $0x1,(%eax)
085d7bd5 +0x415:  jmp    085d7d43 <+0x583>
085d7bda +0x41a:  mov    $0x13,%eax
085d7bdf +0x41f:  jmp    085d7d48 <+0x588>
085d7be4 +0x424:  mov    0x10(%ebp),%edx
085d7be7 +0x427:  mov    0x8(%ebp),%eax
085d7bea +0x42a:  add    $0xc,%edx
085d7bed +0x42d:  mov    (%eax,%edx,4),%eax
085d7bf0 +0x430:  test   %eax,%eax
085d7bf2 +0x432:  je     085d7d42 <+0x582>
085d7bf8 +0x438:  mov    0x10(%ebp),%edx
085d7bfb +0x43b:  mov    0x8(%ebp),%eax
085d7bfe +0x43e:  add    $0xc,%edx
085d7c01 +0x441:  mov    (%eax,%edx,4),%eax
085d7c04 +0x444:  movl   $0xffffffff,0x4(%esp)
085d7c0c +0x44c:  mov    %eax,(%esp)
085d7c0f +0x44f:  call   085df9b2 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x239>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x239
085d7c14 +0x454:  mov    0x10(%ebp),%edx
085d7c17 +0x457:  mov    0x8(%ebp),%eax
085d7c1a +0x45a:  add    $0xc,%edx
085d7c1d +0x45d:  mov    (%eax,%edx,4),%edx
085d7c20 +0x460:  mov    0x18(%ebp),%eax
085d7c23 +0x463:  mov    %edx,(%eax)
085d7c25 +0x465:  mov    0x10(%ebp),%eax
085d7c28 +0x468:  mov    %eax,0x4(%esp)
085d7c2c +0x46c:  mov    0x8(%ebp),%eax
085d7c2f +0x46f:  mov    %eax,(%esp)
085d7c32 +0x472:  call   085d9272 <_ZN8PvP_Room8get_teamEi>  ; PvP_Room::get_team(int)
085d7c37 +0x477:  mov    %eax,-0x1c(%ebp)
085d7c3a +0x47a:  mov    0x10(%ebp),%eax
085d7c3d +0x47d:  mov    0x8(%ebp),%edx
085d7c40 +0x480:  movb   $0x0,0x70(%edx,%eax,1)
085d7c45 +0x485:  mov    0x10(%ebp),%edx
085d7c48 +0x488:  mov    0x8(%ebp),%eax
085d7c4b +0x48b:  add    $0x14,%edx
085d7c4e +0x48e:  movl   $0xff,(%eax,%edx,4)
085d7c55 +0x495:  mov    0x10(%ebp),%edx
085d7c58 +0x498:  mov    0x8(%ebp),%eax
085d7c5b +0x49b:  add    $0xc,%edx
085d7c5e +0x49e:  movl   $0x0,(%eax,%edx,4)
085d7c65 +0x4a5:  mov    0x8(%ebp),%eax
085d7c68 +0x4a8:  mov    0x600(%eax),%eax
085d7c6e +0x4ae:  lea    -0x1(%eax),%edx
085d7c71 +0x4b1:  mov    0x8(%ebp),%eax
085d7c74 +0x4b4:  mov    %edx,0x600(%eax)
085d7c7a +0x4ba:  mov    0x8(%ebp),%eax
085d7c7d +0x4bd:  lea    0x620(%eax),%edx
085d7c83 +0x4c3:  mov    0x10(%ebp),%eax
085d7c86 +0x4c6:  mov    %eax,0x4(%esp)
085d7c8a +0x4ca:  mov    %edx,(%esp)
085d7c8d +0x4cd:  call   085de0f0 <_ZN15CRelayBattleMgr11OnLeaveRoomEi>  ; CRelayBattleMgr::OnLeaveRoom(int)
085d7c92 +0x4d2:  mov    0x8(%ebp),%eax
085d7c95 +0x4d5:  mov    0x6e4(%eax),%eax
085d7c9b +0x4db:  mov    (%eax),%eax
085d7c9d +0x4dd:  add    $0x2c,%eax
085d7ca0 +0x4e0:  mov    (%eax),%ebx
085d7ca2 +0x4e2:  mov    0x18(%ebp),%eax
085d7ca5 +0x4e5:  mov    (%eax),%edx
085d7ca7 +0x4e7:  mov    0x8(%ebp),%eax
085d7caa +0x4ea:  mov    0x6e4(%eax),%eax
085d7cb0 +0x4f0:  mov    0x10(%ebp),%ecx
085d7cb3 +0x4f3:  mov    %ecx,0x10(%esp)
085d7cb7 +0x4f7:  mov    -0x1c(%ebp),%ecx
085d7cba +0x4fa:  mov    %ecx,0xc(%esp)
085d7cbe +0x4fe:  mov    0x8(%ebp),%ecx
085d7cc1 +0x501:  mov    %ecx,0x8(%esp)
085d7cc5 +0x505:  mov    %edx,0x4(%esp)
085d7cc9 +0x509:  mov    %eax,(%esp)
085d7ccc +0x50c:  call   *%ebx
085d7cce +0x50e:  mov    0x8(%ebp),%eax
085d7cd1 +0x511:  mov    %eax,(%esp)
085d7cd4 +0x514:  call   085d6862 <_ZNK8PvP_Room16get_waiter_countEv>  ; PvP_Room::get_waiter_count() const
085d7cd9 +0x519:  test   %eax,%eax
085d7cdb +0x51b:  sete   %al
085d7cde +0x51e:  test   %al,%al
085d7ce0 +0x520:  je     085d7d01 <+0x541>
085d7ce2 +0x522:  mov    0x8(%ebp),%eax
085d7ce5 +0x525:  mov    %eax,(%esp)
085d7ce8 +0x528:  call   085d62c8 <_ZN8PvP_Room5resetEv>  ; PvP_Room::reset()
085d7ced +0x52d:  mov    0x1c(%ebp),%eax
085d7cf0 +0x530:  movb   $0x1,(%eax)
085d7cf3 +0x533:  mov    0x20(%ebp),%eax
085d7cf6 +0x536:  movb   $0x1,(%eax)
085d7cf9 +0x539:  mov    0x24(%ebp),%eax
085d7cfc +0x53c:  movb   $0x1,(%eax)
085d7cff +0x53f:  jmp    085d7d43 <+0x583>
085d7d01 +0x541:  mov    0x1c(%ebp),%eax
085d7d04 +0x544:  movb   $0x1,(%eax)
085d7d07 +0x547:  jmp    085d7d43 <+0x583>
085d7d09 +0x549:  mov    0x10(%ebp),%edx
085d7d0c +0x54c:  mov    0x8(%ebp),%eax
085d7d0f +0x54f:  add    $0xc,%edx
085d7d12 +0x552:  mov    (%eax,%edx,4),%eax
085d7d15 +0x555:  cmp    0xc(%ebp),%eax
085d7d18 +0x558:  je     085d7d21 <+0x561>
085d7d1a +0x55a:  mov    $0x8,%eax
085d7d1f +0x55f:  jmp    085d7d48 <+0x588>
085d7d21 +0x561:  mov    0x14(%ebp),%eax
085d7d24 +0x564:  mov    %eax,0x8(%esp)
085d7d28 +0x568:  mov    0x10(%ebp),%eax
085d7d2b +0x56b:  mov    %eax,0x4(%esp)
085d7d2f +0x56f:  mov    0x8(%ebp),%eax
085d7d32 +0x572:  mov    %eax,(%esp)
085d7d35 +0x575:  call   085d7d50 <_ZN8PvP_Room11change_teamEii>  ; PvP_Room::change_team(int, int)
085d7d3a +0x57a:  mov    0x1c(%ebp),%eax
085d7d3d +0x57d:  movb   $0x1,(%eax)
085d7d40 +0x580:  jmp    085d7d43 <+0x583>
085d7d42 +0x582:  nop
085d7d43 +0x583:  mov    $0x0,%eax
085d7d48 +0x588:  add    $0x6c,%esp
085d7d4b +0x58b:  pop    %ebx
085d7d4c +0x58c:  pop    %esi
085d7d4d +0x58d:  pop    %edi
085d7d4e +0x58e:  pop    %ebp
085d7d4f +0x58f:  ret
```

## 反编译 C

```c
// PvP_Room::set_seat_state @ 0x85d77c0

/* PvP_Room::set_seat_state(CUser*, int, ENUM_SEAT_STATE, CUser**, bool&, bool&, bool&) */

undefined4 __thiscall
PvP_Room::set_seat_state
          (PvP_Room *this,CUserCharacInfo *param_1,int param_2,int param_4,undefined4 *param_5,
          undefined1 *param_6,undefined1 *param_7,undefined1 *param_8)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  CSwitchLog local_34 [16];
  undefined4 local_24;
  undefined4 local_20;
  
  if (param_1 == (CUserCharacInfo *)0x0) {
    return 0;
  }
  uVar2 = get_waiter_count(this);
  uVar3 = get_pvp_battle_mode(this);
  uVar4 = get_index(this);
  uVar5 = CUserCharacInfo::getCurCharacName(param_1);
  uVar6 = CUser::get_acc_name((CUser *)param_1);
  CSwitchLog::CSwitchLog
            (local_34,
             "int PvP_Room::set_seat_state(CUser*, int, ENUM_SEAT_STATE, CUser**, bool&, bool&, bool&)"
             ,0x594,0,0);
  CSwitchLog::operator()
            (local_34,"pvp@log %s,%s,room(%d),%d,%d,%d,%d",uVar6,uVar5,uVar4,uVar3,param_2,param_4,
             uVar2);
  if (param_4 == 0xfe) {
    if (*(int *)(this + 0xb8) == 2) {
      if (*(int *)(this + (param_2 + 0xc) * 4) == 0) {
        return 4;
      }
      if (*(int *)(this + 0x28) == *(int *)(this + (param_2 + 0xc) * 4)) {
        select_new_manager(this);
        *param_6 = 1;
        *param_7 = 1;
      }
      *param_5 = *(undefined4 *)(this + (param_2 + 0xc) * 4);
      GiveOuterPenalty(this,(CUser *)*param_5);
      CUser::SetPvpIndex(*(CUser **)(this + (param_2 + 0xc) * 4),-1);
      local_24 = get_team(this,param_2);
      lock();
      this[param_2 + 0x70] = (PvP_Room)0x0;
      *(undefined4 *)(this + (param_2 + 0x14) * 4) = 0xff;
      *(undefined4 *)(this + (param_2 + 0xc) * 4) = 0;
      *(int *)(this + 0x600) = *(int *)(this + 0x600) + -1;
      this[param_2 + 0x5c8] = (PvP_Room)0x0;
      unlock();
      CRelayBattleMgr::OnLeaveRoom((CRelayBattleMgr *)(this + 0x620),param_2);
      (**(code **)(**(int **)(this + 0x6e4) + 0x2c))
                (*(undefined4 *)(this + 0x6e4),*param_5,this,local_24,param_2);
      iVar7 = get_waiter_count(this);
      if (iVar7 == 0) {
        reset(this);
        *param_6 = 1;
        *param_7 = 1;
        *param_8 = 1;
      }
      else {
        cVar1 = check_winner(this);
        if (cVar1 != '\0') {
          *param_7 = 1;
          pvp_request_pvp_rank(this);
        }
        *param_6 = 1;
      }
    }
    else if (*(CUserCharacInfo **)(this + 0x28) == param_1) {
      if (*(int *)(this + (param_2 + 0xc) * 4) == 0) {
        cVar1 = is_closeable_seat_state(this);
        if (cVar1 == '\0') {
          return 0x13;
        }
        change_team(this,param_2,0xfe);
        *param_6 = 1;
      }
      else {
        CUser::SetPvpIndex(*(CUser **)(this + (param_2 + 0xc) * 4),-1);
        if (*(int *)(this + (param_2 + 0xc) * 4) == *(int *)(this + 0x28)) {
          select_new_manager(this);
          *param_7 = 1;
        }
        *param_5 = *(undefined4 *)(this + (param_2 + 0xc) * 4);
        this[param_2 + 0x70] = (PvP_Room)0x0;
        *(undefined4 *)(this + (param_2 + 0x14) * 4) = 0xff;
        *(undefined4 *)(this + (param_2 + 0xc) * 4) = 0;
        CRelayBattleMgr::OnChangeTeam((CRelayBattleMgr *)(this + 0x620),param_2,0xff);
        iVar7 = get_waiter_count(this);
        if (iVar7 == 0) {
          reset(this);
          *param_6 = 1;
          *param_7 = 1;
          *param_8 = 1;
        }
        else {
          *param_6 = 1;
          *param_7 = 1;
        }
      }
    }
    else if (*(int *)(this + (param_2 + 0xc) * 4) != 0) {
      CUser::SetPvpIndex(*(CUser **)(this + (param_2 + 0xc) * 4),-1);
      *param_5 = *(undefined4 *)(this + (param_2 + 0xc) * 4);
      local_20 = get_team(this,param_2);
      this[param_2 + 0x70] = (PvP_Room)0x0;
      *(undefined4 *)(this + (param_2 + 0x14) * 4) = 0xff;
      *(undefined4 *)(this + (param_2 + 0xc) * 4) = 0;
      *(int *)(this + 0x600) = *(int *)(this + 0x600) + -1;
      CRelayBattleMgr::OnLeaveRoom((CRelayBattleMgr *)(this + 0x620),param_2);
      (**(code **)(**(int **)(this + 0x6e4) + 0x2c))
                (*(undefined4 *)(this + 0x6e4),*param_5,this,local_20,param_2);
      iVar7 = get_waiter_count(this);
      if (iVar7 == 0) {
        reset(this);
        *param_6 = 1;
        *param_7 = 1;
        *param_8 = 1;
      }
      else {
        *param_6 = 1;
      }
    }
  }
  else if (param_4 == 0xff) {
    if (*(CUserCharacInfo **)(this + 0x28) != param_1) {
      return 8;
    }
    change_team(this,param_2,0xff);
    *param_6 = 1;
  }
  else {
    if (*(CUserCharacInfo **)(this + (param_2 + 0xc) * 4) != param_1) {
      return 8;
    }
    change_team(this,param_2,param_4);
    *param_6 = 1;
  }
  return 0;
}
```
