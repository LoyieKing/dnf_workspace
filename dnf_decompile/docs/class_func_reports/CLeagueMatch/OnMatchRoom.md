# OnMatchRoom

`_ZN12CLeagueMatch11OnMatchRoomEP8PvP_Roomi`

`CLeagueMatch::OnMatchRoom(PvP_Room*, int)`

| 类 | 地址 |
|---|---|
| `CLeagueMatch` | `0x0855dc64` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0855dc64  _ZN12CLeagueMatch11OnMatchRoomEP8PvP_Roomi
#           CLeagueMatch::OnMatchRoom(PvP_Room*, int)
# range [0x0855dc64, 0x0855e129]
0855dc64 +0x000:  push   %ebp
0855dc65 +0x001:  mov    %esp,%ebp
0855dc67 +0x003:  push   %ebx
0855dc68 +0x004:  sub    $0x94,%esp
0855dc6e +0x00a:  mov    0x8(%ebp),%eax
0855dc71 +0x00d:  mov    0x18(%eax),%eax
0855dc74 +0x010:  cmp    0x10(%ebp),%eax
0855dc77 +0x013:  je     0855dcb9 <+0x55>
0855dc79 +0x015:  movl   $0x0,0xc(%esp)
0855dc81 +0x01d:  movl   $0x295,0x8(%esp)
0855dc89 +0x025:  movl   $&_ZZN12CLeagueMatch11OnMatchRoomEP8PvP_RoomiE19__PRETTY_FUNCTION__,0x4(%esp)
0855dc91 +0x02d:  lea    -0x6c(%ebp),%eax
0855dc94 +0x030:  mov    %eax,(%esp)
0855dc97 +0x033:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0855dc9c +0x038:  movl   $"OnMatchRoom timeout",0x4(%esp)
0855dca4 +0x040:  lea    -0x6c(%ebp),%eax
0855dca7 +0x043:  mov    %eax,(%esp)
0855dcaa +0x046:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0855dcaf +0x04b:  mov    $0x0,%eax
0855dcb4 +0x050:  jmp    0855e120 <+0x4bc>
0855dcb9 +0x055:  mov    0x8(%ebp),%eax
0855dcbc +0x058:  mov    0x4(%eax),%eax
0855dcbf +0x05b:  cmp    $0x1,%eax
0855dcc2 +0x05e:  je     0855dcce <+0x6a>
0855dcc4 +0x060:  mov    $0x0,%eax
0855dcc9 +0x065:  jmp    0855e120 <+0x4bc>
0855dcce +0x06a:  movl   $0x0,-0x1c(%ebp)
0855dcd5 +0x071:  movl   $0x0,-0x18(%ebp)
0855dcdc +0x078:  movl   $0x0,-0x70(%ebp)
0855dce3 +0x07f:  mov    &_ZN12CLeagueMatch17pWaitingRoomList_E,%eax
0855dce8 +0x084:  mov    (%eax),%eax
0855dcea +0x086:  add    $0x8,%eax
0855dced +0x089:  mov    (%eax),%ebx
0855dcef +0x08b:  mov    0x8(%ebp),%edx
0855dcf2 +0x08e:  mov    &_ZN12CLeagueMatch17pWaitingRoomList_E,%eax
0855dcf7 +0x093:  lea    -0x70(%ebp),%ecx
0855dcfa +0x096:  mov    %ecx,0x8(%esp)
0855dcfe +0x09a:  mov    %edx,0x4(%esp)
0855dd02 +0x09e:  mov    %eax,(%esp)
0855dd05 +0x0a1:  call   *%ebx
0855dd07 +0x0a3:  mov    -0x70(%ebp),%eax
0855dd0a +0x0a6:  test   %eax,%eax
0855dd0c +0x0a8:  jne    0855dd3d <+0xd9>
0855dd0e +0x0aa:  mov    0x8(%ebp),%eax
0855dd11 +0x0ad:  movl   $0x2,0x4(%eax)
0855dd18 +0x0b4:  movl   $0x1,0x8(%esp)
0855dd20 +0x0bc:  movl   $0x1,0x4(%esp)
0855dd28 +0x0c4:  mov    0x8(%ebp),%eax
0855dd2b +0x0c7:  mov    %eax,(%esp)
0855dd2e +0x0ca:  call   0855e664 <_ZN12CLeagueMatch21_SendMatchStatePacketEii>  ; CLeagueMatch::_SendMatchStatePacket(int, int)
0855dd33 +0x0cf:  mov    $0x0,%eax
0855dd38 +0x0d4:  jmp    0855e120 <+0x4bc>
0855dd3d +0x0d9:  mov    -0x70(%ebp),%eax
0855dd40 +0x0dc:  mov    (%eax),%eax
0855dd42 +0x0de:  add    $0x10,%eax
0855dd45 +0x0e1:  mov    (%eax),%edx
0855dd47 +0x0e3:  mov    -0x70(%ebp),%eax
0855dd4a +0x0e6:  movl   $0x0,0x4(%esp)
0855dd52 +0x0ee:  mov    %eax,(%esp)
0855dd55 +0x0f1:  call   *%edx
0855dd57 +0x0f3:  mov    %eax,-0x1c(%ebp)
0855dd5a +0x0f6:  cmpl   $0x0,-0x1c(%ebp)
0855dd5e +0x0fa:  jne    0855ddd5 <+0x171>
0855dd60 +0x0fc:  movl   $0x0,0xc(%esp)
0855dd68 +0x104:  movl   $0x2b0,0x8(%esp)
0855dd70 +0x10c:  movl   $&_ZZN12CLeagueMatch11OnMatchRoomEP8PvP_RoomiE19__PRETTY_FUNCTION__,0x4(%esp)
0855dd78 +0x114:  lea    -0x5c(%ebp),%eax
0855dd7b +0x117:  mov    %eax,(%esp)
0855dd7e +0x11a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0855dd83 +0x11f:  movl   $0x2b0,0xc(%esp)
0855dd8b +0x127:  movl   $"MatchingSystem.cpp",0x8(%esp)
0855dd93 +0x12f:  movl   $"error file(%s) line(%d)",0x4(%esp)
0855dd9b +0x137:  lea    -0x5c(%ebp),%eax
0855dd9e +0x13a:  mov    %eax,(%esp)
0855dda1 +0x13d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0855dda6 +0x142:  mov    0x8(%ebp),%eax
0855dda9 +0x145:  movl   $0x2,0x4(%eax)
0855ddb0 +0x14c:  movl   $0x1,0x8(%esp)
0855ddb8 +0x154:  movl   $0x1,0x4(%esp)
0855ddc0 +0x15c:  mov    0x8(%ebp),%eax
0855ddc3 +0x15f:  mov    %eax,(%esp)
0855ddc6 +0x162:  call   0855e664 <_ZN12CLeagueMatch21_SendMatchStatePacketEii>  ; CLeagueMatch::_SendMatchStatePacket(int, int)
0855ddcb +0x167:  mov    $0x0,%eax
0855ddd0 +0x16c:  jmp    0855e120 <+0x4bc>
0855ddd5 +0x171:  mov    -0x1c(%ebp),%eax
0855ddd8 +0x174:  mov    %eax,(%esp)
0855dddb +0x177:  call   0865518e <_ZN5CUser10GetPVPRoomEv>  ; CUser::GetPVPRoom()
0855dde0 +0x17c:  mov    %eax,-0x18(%ebp)
0855dde3 +0x17f:  cmpl   $0x0,-0x18(%ebp)
0855dde7 +0x183:  jne    0855de5e <+0x1fa>
0855dde9 +0x185:  movl   $0x0,0xc(%esp)
0855ddf1 +0x18d:  movl   $0x2b9,0x8(%esp)
0855ddf9 +0x195:  movl   $&_ZZN12CLeagueMatch11OnMatchRoomEP8PvP_RoomiE19__PRETTY_FUNCTION__,0x4(%esp)
0855de01 +0x19d:  lea    -0x4c(%ebp),%eax
0855de04 +0x1a0:  mov    %eax,(%esp)
0855de07 +0x1a3:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0855de0c +0x1a8:  movl   $0x2b9,0xc(%esp)
0855de14 +0x1b0:  movl   $"MatchingSystem.cpp",0x8(%esp)
0855de1c +0x1b8:  movl   $"error file(%s) line(%d)",0x4(%esp)
0855de24 +0x1c0:  lea    -0x4c(%ebp),%eax
0855de27 +0x1c3:  mov    %eax,(%esp)
0855de2a +0x1c6:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0855de2f +0x1cb:  mov    0x8(%ebp),%eax
0855de32 +0x1ce:  movl   $0x2,0x4(%eax)
0855de39 +0x1d5:  movl   $0x1,0x8(%esp)
0855de41 +0x1dd:  movl   $0x1,0x4(%esp)
0855de49 +0x1e5:  mov    0x8(%ebp),%eax
0855de4c +0x1e8:  mov    %eax,(%esp)
0855de4f +0x1eb:  call   0855e664 <_ZN12CLeagueMatch21_SendMatchStatePacketEii>  ; CLeagueMatch::_SendMatchStatePacket(int, int)
0855de54 +0x1f0:  mov    $0x0,%eax
0855de59 +0x1f5:  jmp    0855e120 <+0x4bc>
0855de5e +0x1fa:  mov    0xc(%ebp),%eax
0855de61 +0x1fd:  mov    %eax,(%esp)
0855de64 +0x200:  call   085d68a0 <_ZN8PvP_Room16get_player_countEv>  ; PvP_Room::get_player_count()
0855de69 +0x205:  movzbl &_ZN12CLeagueMatch23nPlayerCountPerOneTeam_E,%edx
0855de70 +0x20c:  movzbl %dl,%edx
0855de73 +0x20f:  cmp    %edx,%eax
0855de75 +0x211:  setg   %al
0855de78 +0x214:  test   %al,%al
0855de7a +0x216:  je     0855def1 <+0x28d>
0855de7c +0x218:  movl   $0x0,0xc(%esp)
0855de84 +0x220:  movl   $0x2c2,0x8(%esp)
0855de8c +0x228:  movl   $&_ZZN12CLeagueMatch11OnMatchRoomEP8PvP_RoomiE19__PRETTY_FUNCTION__,0x4(%esp)
0855de94 +0x230:  lea    -0x3c(%ebp),%eax
0855de97 +0x233:  mov    %eax,(%esp)
0855de9a +0x236:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0855de9f +0x23b:  movl   $0x2c2,0xc(%esp)
0855dea7 +0x243:  movl   $"MatchingSystem.cpp",0x8(%esp)
0855deaf +0x24b:  movl   $"error file(%s) line(%d)",0x4(%esp)
0855deb7 +0x253:  lea    -0x3c(%ebp),%eax
0855deba +0x256:  mov    %eax,(%esp)
0855debd +0x259:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0855dec2 +0x25e:  mov    0x8(%ebp),%eax
0855dec5 +0x261:  movl   $0x2,0x4(%eax)
0855decc +0x268:  movl   $0x1,0x8(%esp)
0855ded4 +0x270:  movl   $0x1,0x4(%esp)
0855dedc +0x278:  mov    0x8(%ebp),%eax
0855dedf +0x27b:  mov    %eax,(%esp)
0855dee2 +0x27e:  call   0855e664 <_ZN12CLeagueMatch21_SendMatchStatePacketEii>  ; CLeagueMatch::_SendMatchStatePacket(int, int)
0855dee7 +0x283:  mov    $0x0,%eax
0855deec +0x288:  jmp    0855e120 <+0x4bc>
0855def1 +0x28d:  mov    0x8(%ebp),%eax
0855def4 +0x290:  add    $0x1c,%eax
0855def7 +0x293:  mov    %eax,(%esp)
0855defa +0x296:  call   0855cd26 <_ZNK8TeamInfo4sizeEv>  ; TeamInfo::size() const
0855deff +0x29b:  movzbl &_ZN12CLeagueMatch23nPlayerCountPerOneTeam_E,%edx
0855df06 +0x2a2:  movzbl %dl,%edx
0855df09 +0x2a5:  cmp    %edx,%eax
0855df0b +0x2a7:  jg     0855df26 <+0x2c2>
0855df0d +0x2a9:  mov    -0x18(%ebp),%eax
0855df10 +0x2ac:  mov    %eax,(%esp)
0855df13 +0x2af:  call   085d68a0 <_ZN8PvP_Room16get_player_countEv>  ; PvP_Room::get_player_count()
0855df18 +0x2b4:  movzbl &_ZN12CLeagueMatch23nPlayerCountPerOneTeam_E,%edx
0855df1f +0x2bb:  movzbl %dl,%edx
0855df22 +0x2be:  cmp    %edx,%eax
0855df24 +0x2c0:  jle    0855df2d <+0x2c9>
0855df26 +0x2c2:  mov    $0x1,%eax
0855df2b +0x2c7:  jmp    0855df32 <+0x2ce>
0855df2d +0x2c9:  mov    $0x0,%eax
0855df32 +0x2ce:  test   %al,%al
0855df34 +0x2d0:  je     0855dfab <+0x347>
0855df36 +0x2d2:  movl   $0x0,0xc(%esp)
0855df3e +0x2da:  movl   $0x2ca,0x8(%esp)
0855df46 +0x2e2:  movl   $&_ZZN12CLeagueMatch11OnMatchRoomEP8PvP_RoomiE19__PRETTY_FUNCTION__,0x4(%esp)
0855df4e +0x2ea:  lea    -0x2c(%ebp),%eax
0855df51 +0x2ed:  mov    %eax,(%esp)
0855df54 +0x2f0:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0855df59 +0x2f5:  movl   $0x2ca,0xc(%esp)
0855df61 +0x2fd:  movl   $"MatchingSystem.cpp",0x8(%esp)
0855df69 +0x305:  movl   $"error file(%s) line(%d)",0x4(%esp)
0855df71 +0x30d:  lea    -0x2c(%ebp),%eax
0855df74 +0x310:  mov    %eax,(%esp)
0855df77 +0x313:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0855df7c +0x318:  mov    0x8(%ebp),%eax
0855df7f +0x31b:  movl   $0x2,0x4(%eax)
0855df86 +0x322:  movl   $0x1,0x8(%esp)
0855df8e +0x32a:  movl   $0x1,0x4(%esp)
0855df96 +0x332:  mov    0x8(%ebp),%eax
0855df99 +0x335:  mov    %eax,(%esp)
0855df9c +0x338:  call   0855e664 <_ZN12CLeagueMatch21_SendMatchStatePacketEii>  ; CLeagueMatch::_SendMatchStatePacket(int, int)
0855dfa1 +0x33d:  mov    $0x0,%eax
0855dfa6 +0x342:  jmp    0855e120 <+0x4bc>
0855dfab +0x347:  mov    -0x18(%ebp),%eax
0855dfae +0x34a:  mov    %eax,0x4(%esp)
0855dfb2 +0x34e:  mov    0x8(%ebp),%eax
0855dfb5 +0x351:  mov    %eax,(%esp)
0855dfb8 +0x354:  call   0855d554 <_ZN12CLeagueMatch15_BackupRoomInfoEP8PvP_Room>  ; CLeagueMatch::_BackupRoomInfo(PvP_Room*)
0855dfbd +0x359:  mov    0x8(%ebp),%eax
0855dfc0 +0x35c:  add    $0x8c,%eax
0855dfc5 +0x361:  mov    %eax,(%esp)
0855dfc8 +0x364:  call   0855cb16 <_ZN8TeamInfo5resetEv>  ; TeamInfo::reset()
0855dfcd +0x369:  mov    0x8(%ebp),%eax
0855dfd0 +0x36c:  add    $0x8c,%eax
0855dfd5 +0x371:  mov    %eax,0x4(%esp)
0855dfd9 +0x375:  mov    -0x18(%ebp),%eax
0855dfdc +0x378:  mov    %eax,(%esp)
0855dfdf +0x37b:  call   085d932a <_ZN8PvP_Room13get_user_listEPv>  ; PvP_Room::get_user_list(void*)
0855dfe4 +0x380:  movl   $0x2,0x8(%esp)
0855dfec +0x388:  movl   $0x3,0x4(%esp)
0855dff4 +0x390:  mov    0x8(%ebp),%eax
0855dff7 +0x393:  mov    %eax,(%esp)
0855dffa +0x396:  call   0855e664 <_ZN12CLeagueMatch21_SendMatchStatePacketEii>  ; CLeagueMatch::_SendMatchStatePacket(int, int)
0855dfff +0x39b:  mov    0x8(%ebp),%eax
0855e002 +0x39e:  movl   $0x3,0x4(%eax)
0855e009 +0x3a5:  movl   $0x0,-0x14(%ebp)
0855e010 +0x3ac:  movl   $0x0,-0x10(%ebp)
0855e017 +0x3b3:  jmp    0855e0ca <+0x466>
0855e01c +0x3b8:  mov    -0x10(%ebp),%eax
0855e01f +0x3bb:  mov    %eax,0x4(%esp)
0855e023 +0x3bf:  mov    -0x18(%ebp),%eax
0855e026 +0x3c2:  mov    %eax,(%esp)
0855e029 +0x3c5:  call   085d921e <_ZN8PvP_Room13get_user_seatEi>  ; PvP_Room::get_user_seat(int)
0855e02e +0x3ca:  mov    %eax,-0x1c(%ebp)
0855e031 +0x3cd:  cmpl   $0x0,-0x1c(%ebp)
0855e035 +0x3d1:  je     0855e0c5 <+0x461>
0855e03b +0x3d7:  mov    -0x10(%ebp),%eax
0855e03e +0x3da:  mov    %eax,0x4(%esp)
0855e042 +0x3de:  mov    -0x18(%ebp),%eax
0855e045 +0x3e1:  mov    %eax,(%esp)
0855e048 +0x3e4:  call   085d9272 <_ZN8PvP_Room8get_teamEi>  ; PvP_Room::get_team(int)
0855e04d +0x3e9:  mov    %eax,-0x14(%ebp)
0855e050 +0x3ec:  mov    -0x10(%ebp),%eax
0855e053 +0x3ef:  mov    %eax,0xc(%esp)
0855e057 +0x3f3:  mov    -0x18(%ebp),%eax
0855e05a +0x3f6:  mov    %eax,0x8(%esp)
0855e05e +0x3fa:  mov    -0x1c(%ebp),%eax
0855e061 +0x3fd:  mov    %eax,0x4(%esp)
0855e065 +0x401:  mov    0x8(%ebp),%eax
0855e068 +0x404:  mov    %eax,(%esp)
0855e06b +0x407:  call   0855d3d2 <_ZN12CLeagueMatch12_PullOutRoomEP5CUserP8PvP_Roomi>  ; CLeagueMatch::_PullOutRoom(CUser*, PvP_Room*, int)
0855e070 +0x40c:  movl   $0x0,0xc(%esp)
0855e078 +0x414:  mov    0xc(%ebp),%eax
0855e07b +0x417:  mov    %eax,0x8(%esp)
0855e07f +0x41b:  mov    -0x1c(%ebp),%eax
0855e082 +0x41e:  mov    %eax,0x4(%esp)
0855e086 +0x422:  mov    0x8(%ebp),%eax
0855e089 +0x425:  mov    %eax,(%esp)
0855e08c +0x428:  call   0855d42a <_ZN12CLeagueMatch10_PutInRoomEP5CUserP8PvP_Roomb>  ; CLeagueMatch::_PutInRoom(CUser*, PvP_Room*, bool)
0855e091 +0x42d:  mov    %eax,-0xc(%ebp)
0855e094 +0x430:  cmpl   $0x3,-0x14(%ebp)
0855e098 +0x434:  jne    0855e0c6 <+0x462>
0855e09a +0x436:  movl   $0x2,0x10(%esp)
0855e0a2 +0x43e:  movl   $0x3,0xc(%esp)
0855e0aa +0x446:  mov    -0xc(%ebp),%eax
0855e0ad +0x449:  mov    %eax,0x8(%esp)
0855e0b1 +0x44d:  mov    -0x1c(%ebp),%eax
0855e0b4 +0x450:  mov    %eax,0x4(%esp)
0855e0b8 +0x454:  mov    0xc(%ebp),%eax
0855e0bb +0x457:  mov    %eax,(%esp)
0855e0be +0x45a:  call   085dd070 <_ZN8PvP_Room17OnSetPVPSeatStateEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE>  ; PvP_Room::OnSetPVPSeatState(CUser*, int, ENUM_SEAT_STATE, ENUM_WALKOUT_TYPE)
0855e0c3 +0x45f:  jmp    0855e0c6 <+0x462>
0855e0c5 +0x461:  nop
0855e0c6 +0x462:  addl   $0x1,-0x10(%ebp)
0855e0ca +0x466:  cmpl   $0x7,-0x10(%ebp)
0855e0ce +0x46a:  setbe  %al
0855e0d1 +0x46d:  test   %al,%al
0855e0d3 +0x46f:  jne    0855e01c <+0x3b8>
0855e0d9 +0x475:  mov    &_ZN12CLeagueMatch17pWaitingRoomList_E,%eax
0855e0de +0x47a:  mov    (%eax),%eax
0855e0e0 +0x47c:  add    $0x4,%eax
0855e0e3 +0x47f:  mov    (%eax),%ecx
0855e0e5 +0x481:  mov    0x8(%ebp),%edx
0855e0e8 +0x484:  mov    &_ZN12CLeagueMatch17pWaitingRoomList_E,%eax
0855e0ed +0x489:  mov    %edx,0x4(%esp)
0855e0f1 +0x48d:  mov    %eax,(%esp)
0855e0f4 +0x490:  call   *%ecx
0855e0f6 +0x492:  mov    0x8(%ebp),%eax
0855e0f9 +0x495:  movl   $0x4,0x4(%eax)
0855e100 +0x49c:  movl   $0x2,0x8(%esp)
0855e108 +0x4a4:  movl   $0x2,0x4(%esp)
0855e110 +0x4ac:  mov    0x8(%ebp),%eax
0855e113 +0x4af:  mov    %eax,(%esp)
0855e116 +0x4b2:  call   0855e664 <_ZN12CLeagueMatch21_SendMatchStatePacketEii>  ; CLeagueMatch::_SendMatchStatePacket(int, int)
0855e11b +0x4b7:  mov    $0x1,%eax
0855e120 +0x4bc:  add    $0x94,%esp
0855e126 +0x4c2:  pop    %ebx
0855e127 +0x4c3:  pop    %ebp
0855e128 +0x4c4:  ret
0855e129 +0x4c5:  nop
```

## 反编译 C

```c
// CLeagueMatch::OnMatchRoom @ 0x855dc64

/* CLeagueMatch::OnMatchRoom(PvP_Room*, int) */

undefined4 __thiscall CLeagueMatch::OnMatchRoom(CLeagueMatch *this,PvP_Room *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int *local_74;
  cMyTrace local_70 [16];
  cMyTrace local_60 [16];
  cMyTrace local_50 [16];
  cMyTrace local_40 [16];
  cMyTrace local_30 [16];
  CUser *local_20;
  PvP_Room *local_1c;
  int local_18;
  uint local_14;
  undefined4 local_10;
  
  if (*(int *)(this + 0x18) != param_2) {
    cMyTrace::cMyTrace(local_70,"virtual bool CLeagueMatch::OnMatchRoom(PvP_Room*, int)",0x295,0);
    cMyTrace::operator()(local_70,"OnMatchRoom timeout");
    return 0;
  }
  if (*(int *)(this + 4) != 1) {
    return 0;
  }
  local_20 = (CUser *)0x0;
  local_1c = (PvP_Room *)0x0;
  local_74 = (int *)0x0;
  (**(code **)(*pWaitingRoomList_ + 8))(pWaitingRoomList_,this,&local_74);
  if (local_74 == (int *)0x0) {
    *(undefined4 *)(this + 4) = 2;
    _SendMatchStatePacket(this,1,1);
    return 0;
  }
  local_20 = (CUser *)(**(code **)(*local_74 + 0x10))(local_74,0);
  if (local_20 != (CUser *)0x0) {
    local_1c = (PvP_Room *)CUser::GetPVPRoom(local_20);
    if (local_1c == (PvP_Room *)0x0) {
      cMyTrace::cMyTrace(local_50,"virtual bool CLeagueMatch::OnMatchRoom(PvP_Room*, int)",0x2b9,0);
      cMyTrace::operator()(local_50,"error file(%s) line(%d)","MatchingSystem.cpp",0x2b9);
      *(undefined4 *)(this + 4) = 2;
      _SendMatchStatePacket(this,1,1);
      return 0;
    }
    iVar2 = PvP_Room::get_player_count(param_1);
    if (iVar2 <= (int)(uint)nPlayerCountPerOneTeam_) {
      iVar2 = TeamInfo::size((TeamInfo *)(this + 0x1c));
      if (((int)(uint)nPlayerCountPerOneTeam_ < iVar2) ||
         (iVar2 = PvP_Room::get_player_count(local_1c), (int)(uint)nPlayerCountPerOneTeam_ < iVar2))
      {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        cMyTrace::cMyTrace(local_30,"virtual bool CLeagueMatch::OnMatchRoom(PvP_Room*, int)",0x2ca,0
                          );
        cMyTrace::operator()(local_30,"error file(%s) line(%d)","MatchingSystem.cpp",0x2ca);
        *(undefined4 *)(this + 4) = 2;
        _SendMatchStatePacket(this,1,1);
        uVar3 = 0;
      }
      else {
        _BackupRoomInfo(this,local_1c);
        TeamInfo::reset((TeamInfo *)(this + 0x8c));
        PvP_Room::get_user_list(local_1c,this + 0x8c);
        _SendMatchStatePacket(this,3,2);
        *(undefined4 *)(this + 4) = 3;
        local_18 = 0;
        for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
          local_20 = (CUser *)PvP_Room::get_user_seat(local_1c,local_14);
          if (local_20 != (CUser *)0x0) {
            local_18 = PvP_Room::get_team(local_1c,local_14);
            _PullOutRoom(this,local_20,local_1c,local_14);
            local_10 = _PutInRoom(this,local_20,param_1,false);
            if (local_18 == 3) {
              PvP_Room::OnSetPVPSeatState(param_1,local_20,local_10,3,2);
            }
          }
        }
        (**(code **)(*pWaitingRoomList_ + 4))(pWaitingRoomList_,this);
        *(undefined4 *)(this + 4) = 4;
        _SendMatchStatePacket(this,2,2);
        uVar3 = 1;
      }
      return uVar3;
    }
    cMyTrace::cMyTrace(local_40,"virtual bool CLeagueMatch::OnMatchRoom(PvP_Room*, int)",0x2c2,0);
    cMyTrace::operator()(local_40,"error file(%s) line(%d)","MatchingSystem.cpp",0x2c2);
    *(undefined4 *)(this + 4) = 2;
    _SendMatchStatePacket(this,1,1);
    return 0;
  }
  cMyTrace::cMyTrace(local_60,"virtual bool CLeagueMatch::OnMatchRoom(PvP_Room*, int)",0x2b0,0);
  cMyTrace::operator()(local_60,"error file(%s) line(%d)","MatchingSystem.cpp",0x2b0);
  *(undefined4 *)(this + 4) = 2;
  _SendMatchStatePacket(this,1,1);
  return 0;
}
```
