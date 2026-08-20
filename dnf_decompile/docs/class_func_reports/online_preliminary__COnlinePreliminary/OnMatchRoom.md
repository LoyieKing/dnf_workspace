# OnMatchRoom

`_ZN18online_preliminary18COnlinePreliminary11OnMatchRoomEP8PvP_Roomi`

`online_preliminary::COnlinePreliminary::OnMatchRoom(PvP_Room*, int)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminary` | `0x085614ea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085614ea  _ZN18online_preliminary18COnlinePreliminary11OnMatchRoomEP8PvP_Roomi
#           online_preliminary::COnlinePreliminary::OnMatchRoom(PvP_Room*, int)
# range [0x085614ea, 0x08561a0d]
085614ea +0x000:  push   %ebp
085614eb +0x001:  mov    %esp,%ebp
085614ed +0x003:  push   %esi
085614ee +0x004:  push   %ebx
085614ef +0x005:  sub    $0x90,%esp
085614f5 +0x00b:  mov    0x8(%ebp),%eax
085614f8 +0x00e:  mov    0x18(%eax),%eax
085614fb +0x011:  cmp    0x10(%ebp),%eax
085614fe +0x014:  je     08561540 <+0x56>
08561500 +0x016:  movl   $0x0,0xc(%esp)
08561508 +0x01e:  movl   $0x7a6,0x8(%esp)
08561510 +0x026:  movl   $&_ZZN18online_preliminary18COnlinePreliminary11OnMatchRoomEP8PvP_RoomiE19__PRETTY_FUNCTION__,0x4(%esp)
08561518 +0x02e:  lea    -0x6c(%ebp),%eax
0856151b +0x031:  mov    %eax,(%esp)
0856151e +0x034:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08561523 +0x039:  movl   $"OnMatchRoom timeout",0x4(%esp)
0856152b +0x041:  lea    -0x6c(%ebp),%eax
0856152e +0x044:  mov    %eax,(%esp)
08561531 +0x047:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08561536 +0x04c:  mov    $0x0,%eax
0856153b +0x051:  jmp    08561a04 <+0x51a>
08561540 +0x056:  mov    0x8(%ebp),%eax
08561543 +0x059:  mov    0x4(%eax),%eax
08561546 +0x05c:  cmp    $0x1,%eax
08561549 +0x05f:  je     08561555 <+0x6b>
0856154b +0x061:  mov    $0x0,%eax
08561550 +0x066:  jmp    08561a04 <+0x51a>
08561555 +0x06b:  movl   $0x0,-0x1c(%ebp)
0856155c +0x072:  movl   $0x0,-0x18(%ebp)
08561563 +0x079:  movl   $0x0,-0x70(%ebp)
0856156a +0x080:  mov    &_ZN18online_preliminary18COnlinePreliminary17pWaitingRoomList_E,%eax
0856156f +0x085:  mov    (%eax),%eax
08561571 +0x087:  add    $0x8,%eax
08561574 +0x08a:  mov    (%eax),%ebx
08561576 +0x08c:  mov    0x8(%ebp),%edx
08561579 +0x08f:  mov    &_ZN18online_preliminary18COnlinePreliminary17pWaitingRoomList_E,%eax
0856157e +0x094:  lea    -0x70(%ebp),%ecx
08561581 +0x097:  mov    %ecx,0x8(%esp)
08561585 +0x09b:  mov    %edx,0x4(%esp)
08561589 +0x09f:  mov    %eax,(%esp)
0856158c +0x0a2:  call   *%ebx
0856158e +0x0a4:  mov    -0x70(%ebp),%eax
08561591 +0x0a7:  test   %eax,%eax
08561593 +0x0a9:  jne    085615c4 <+0xda>
08561595 +0x0ab:  mov    0x8(%ebp),%eax
08561598 +0x0ae:  movl   $0x2,0x4(%eax)
0856159f +0x0b5:  movl   $0x1,0x8(%esp)
085615a7 +0x0bd:  movl   $0x1,0x4(%esp)
085615af +0x0c5:  mov    0x8(%ebp),%eax
085615b2 +0x0c8:  mov    %eax,(%esp)
085615b5 +0x0cb:  call   0856214a <_ZN18online_preliminary18COnlinePreliminary21_SendMatchStatePacketEii>  ; online_preliminary::COnlinePreliminary::_SendMatchStatePacket(int, int)
085615ba +0x0d0:  mov    $0x0,%eax
085615bf +0x0d5:  jmp    08561a04 <+0x51a>
085615c4 +0x0da:  mov    -0x70(%ebp),%eax
085615c7 +0x0dd:  mov    (%eax),%eax
085615c9 +0x0df:  add    $0x10,%eax
085615cc +0x0e2:  mov    (%eax),%edx
085615ce +0x0e4:  mov    -0x70(%ebp),%eax
085615d1 +0x0e7:  movl   $0x0,0x4(%esp)
085615d9 +0x0ef:  mov    %eax,(%esp)
085615dc +0x0f2:  call   *%edx
085615de +0x0f4:  mov    %eax,-0x1c(%ebp)
085615e1 +0x0f7:  cmpl   $0x0,-0x1c(%ebp)
085615e5 +0x0fb:  jne    0856165c <+0x172>
085615e7 +0x0fd:  movl   $0x0,0xc(%esp)
085615ef +0x105:  movl   $0x7c1,0x8(%esp)
085615f7 +0x10d:  movl   $&_ZZN18online_preliminary18COnlinePreliminary11OnMatchRoomEP8PvP_RoomiE19__PRETTY_FUNCTION__,0x4(%esp)
085615ff +0x115:  lea    -0x5c(%ebp),%eax
08561602 +0x118:  mov    %eax,(%esp)
08561605 +0x11b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0856160a +0x120:  movl   $0x7c1,0xc(%esp)
08561612 +0x128:  movl   $"MatchingSystem.cpp",0x8(%esp)
0856161a +0x130:  movl   $"error file(%s) line(%d)",0x4(%esp)
08561622 +0x138:  lea    -0x5c(%ebp),%eax
08561625 +0x13b:  mov    %eax,(%esp)
08561628 +0x13e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0856162d +0x143:  mov    0x8(%ebp),%eax
08561630 +0x146:  movl   $0x2,0x4(%eax)
08561637 +0x14d:  movl   $0x1,0x8(%esp)
0856163f +0x155:  movl   $0x1,0x4(%esp)
08561647 +0x15d:  mov    0x8(%ebp),%eax
0856164a +0x160:  mov    %eax,(%esp)
0856164d +0x163:  call   0856214a <_ZN18online_preliminary18COnlinePreliminary21_SendMatchStatePacketEii>  ; online_preliminary::COnlinePreliminary::_SendMatchStatePacket(int, int)
08561652 +0x168:  mov    $0x0,%eax
08561657 +0x16d:  jmp    08561a04 <+0x51a>
0856165c +0x172:  mov    -0x1c(%ebp),%eax
0856165f +0x175:  mov    %eax,(%esp)
08561662 +0x178:  call   0865518e <_ZN5CUser10GetPVPRoomEv>  ; CUser::GetPVPRoom()
08561667 +0x17d:  mov    %eax,-0x18(%ebp)
0856166a +0x180:  cmpl   $0x0,-0x18(%ebp)
0856166e +0x184:  jne    085616e5 <+0x1fb>
08561670 +0x186:  movl   $0x0,0xc(%esp)
08561678 +0x18e:  movl   $0x7ca,0x8(%esp)
08561680 +0x196:  movl   $&_ZZN18online_preliminary18COnlinePreliminary11OnMatchRoomEP8PvP_RoomiE19__PRETTY_FUNCTION__,0x4(%esp)
08561688 +0x19e:  lea    -0x4c(%ebp),%eax
0856168b +0x1a1:  mov    %eax,(%esp)
0856168e +0x1a4:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08561693 +0x1a9:  movl   $0x7ca,0xc(%esp)
0856169b +0x1b1:  movl   $"MatchingSystem.cpp",0x8(%esp)
085616a3 +0x1b9:  movl   $"error file(%s) line(%d)",0x4(%esp)
085616ab +0x1c1:  lea    -0x4c(%ebp),%eax
085616ae +0x1c4:  mov    %eax,(%esp)
085616b1 +0x1c7:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085616b6 +0x1cc:  mov    0x8(%ebp),%eax
085616b9 +0x1cf:  movl   $0x2,0x4(%eax)
085616c0 +0x1d6:  movl   $0x1,0x8(%esp)
085616c8 +0x1de:  movl   $0x1,0x4(%esp)
085616d0 +0x1e6:  mov    0x8(%ebp),%eax
085616d3 +0x1e9:  mov    %eax,(%esp)
085616d6 +0x1ec:  call   0856214a <_ZN18online_preliminary18COnlinePreliminary21_SendMatchStatePacketEii>  ; online_preliminary::COnlinePreliminary::_SendMatchStatePacket(int, int)
085616db +0x1f1:  mov    $0x0,%eax
085616e0 +0x1f6:  jmp    08561a04 <+0x51a>
085616e5 +0x1fb:  mov    0xc(%ebp),%eax
085616e8 +0x1fe:  mov    %eax,(%esp)
085616eb +0x201:  call   085d68a0 <_ZN8PvP_Room16get_player_countEv>  ; PvP_Room::get_player_count()
085616f0 +0x206:  mov    %eax,%ebx
085616f2 +0x208:  call   0855fee8 <_ZN18online_preliminary18COnlinePreliminary22GetPlayCountPerOneTeamEv>  ; online_preliminary::COnlinePreliminary::GetPlayCountPerOneTeam()
085616f7 +0x20d:  movzbl %al,%eax
085616fa +0x210:  cmp    %eax,%ebx
085616fc +0x212:  setg   %al
085616ff +0x215:  test   %al,%al
08561701 +0x217:  je     08561778 <+0x28e>
08561703 +0x219:  movl   $0x0,0xc(%esp)
0856170b +0x221:  movl   $0x7d2,0x8(%esp)
08561713 +0x229:  movl   $&_ZZN18online_preliminary18COnlinePreliminary11OnMatchRoomEP8PvP_RoomiE19__PRETTY_FUNCTION__,0x4(%esp)
0856171b +0x231:  lea    -0x3c(%ebp),%eax
0856171e +0x234:  mov    %eax,(%esp)
08561721 +0x237:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08561726 +0x23c:  movl   $0x7d2,0xc(%esp)
0856172e +0x244:  movl   $"MatchingSystem.cpp",0x8(%esp)
08561736 +0x24c:  movl   $"error file(%s) line(%d)",0x4(%esp)
0856173e +0x254:  lea    -0x3c(%ebp),%eax
08561741 +0x257:  mov    %eax,(%esp)
08561744 +0x25a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08561749 +0x25f:  mov    0x8(%ebp),%eax
0856174c +0x262:  movl   $0x2,0x4(%eax)
08561753 +0x269:  movl   $0x1,0x8(%esp)
0856175b +0x271:  movl   $0x1,0x4(%esp)
08561763 +0x279:  mov    0x8(%ebp),%eax
08561766 +0x27c:  mov    %eax,(%esp)
08561769 +0x27f:  call   0856214a <_ZN18online_preliminary18COnlinePreliminary21_SendMatchStatePacketEii>  ; online_preliminary::COnlinePreliminary::_SendMatchStatePacket(int, int)
0856176e +0x284:  mov    $0x0,%eax
08561773 +0x289:  jmp    08561a04 <+0x51a>
08561778 +0x28e:  mov    0x8(%ebp),%eax
0856177b +0x291:  add    $0x1c,%eax
0856177e +0x294:  mov    %eax,(%esp)
08561781 +0x297:  call   0855feaa <_ZNK14TeamInfoSecond4sizeEv>  ; TeamInfoSecond::size() const
08561786 +0x29c:  mov    %eax,%ebx
08561788 +0x29e:  call   0855fee8 <_ZN18online_preliminary18COnlinePreliminary22GetPlayCountPerOneTeamEv>  ; online_preliminary::COnlinePreliminary::GetPlayCountPerOneTeam()
0856178d +0x2a3:  movzbl %al,%eax
08561790 +0x2a6:  cmp    %eax,%ebx
08561792 +0x2a8:  jg     085617ad <+0x2c3>
08561794 +0x2aa:  mov    -0x18(%ebp),%eax
08561797 +0x2ad:  mov    %eax,(%esp)
0856179a +0x2b0:  call   085d68a0 <_ZN8PvP_Room16get_player_countEv>  ; PvP_Room::get_player_count()
0856179f +0x2b5:  mov    %eax,%ebx
085617a1 +0x2b7:  call   0855fee8 <_ZN18online_preliminary18COnlinePreliminary22GetPlayCountPerOneTeamEv>  ; online_preliminary::COnlinePreliminary::GetPlayCountPerOneTeam()
085617a6 +0x2bc:  movzbl %al,%eax
085617a9 +0x2bf:  cmp    %eax,%ebx
085617ab +0x2c1:  jle    085617b4 <+0x2ca>
085617ad +0x2c3:  mov    $0x1,%eax
085617b2 +0x2c8:  jmp    085617b9 <+0x2cf>
085617b4 +0x2ca:  mov    $0x0,%eax
085617b9 +0x2cf:  test   %al,%al
085617bb +0x2d1:  je     08561832 <+0x348>
085617bd +0x2d3:  movl   $0x0,0xc(%esp)
085617c5 +0x2db:  movl   $0x7da,0x8(%esp)
085617cd +0x2e3:  movl   $&_ZZN18online_preliminary18COnlinePreliminary11OnMatchRoomEP8PvP_RoomiE19__PRETTY_FUNCTION__,0x4(%esp)
085617d5 +0x2eb:  lea    -0x2c(%ebp),%eax
085617d8 +0x2ee:  mov    %eax,(%esp)
085617db +0x2f1:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085617e0 +0x2f6:  movl   $0x7da,0xc(%esp)
085617e8 +0x2fe:  movl   $"MatchingSystem.cpp",0x8(%esp)
085617f0 +0x306:  movl   $"error file(%s) line(%d)",0x4(%esp)
085617f8 +0x30e:  lea    -0x2c(%ebp),%eax
085617fb +0x311:  mov    %eax,(%esp)
085617fe +0x314:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08561803 +0x319:  mov    0x8(%ebp),%eax
08561806 +0x31c:  movl   $0x2,0x4(%eax)
0856180d +0x323:  movl   $0x1,0x8(%esp)
08561815 +0x32b:  movl   $0x1,0x4(%esp)
0856181d +0x333:  mov    0x8(%ebp),%eax
08561820 +0x336:  mov    %eax,(%esp)
08561823 +0x339:  call   0856214a <_ZN18online_preliminary18COnlinePreliminary21_SendMatchStatePacketEii>  ; online_preliminary::COnlinePreliminary::_SendMatchStatePacket(int, int)
08561828 +0x33e:  mov    $0x0,%eax
0856182d +0x343:  jmp    08561a04 <+0x51a>
08561832 +0x348:  mov    -0x18(%ebp),%eax
08561835 +0x34b:  mov    %eax,0x4(%esp)
08561839 +0x34f:  mov    0x8(%ebp),%eax
0856183c +0x352:  mov    %eax,(%esp)
0856183f +0x355:  call   08560f74 <_ZN18online_preliminary18COnlinePreliminary15_BackupRoomInfoEP8PvP_Room>  ; online_preliminary::COnlinePreliminary::_BackupRoomInfo(PvP_Room*)
08561844 +0x35a:  mov    0x8(%ebp),%eax
08561847 +0x35d:  add    $0x44,%eax
0856184a +0x360:  mov    %eax,(%esp)
0856184d +0x363:  call   0855fdc0 <_ZN14TeamInfoSecond5resetEv>  ; TeamInfoSecond::reset()
08561852 +0x368:  mov    0x8(%ebp),%eax
08561855 +0x36b:  add    $0x44,%eax
08561858 +0x36e:  mov    %eax,0x4(%esp)
0856185c +0x372:  mov    -0x18(%ebp),%eax
0856185f +0x375:  mov    %eax,(%esp)
08561862 +0x378:  call   085d932a <_ZN8PvP_Room13get_user_listEPv>  ; PvP_Room::get_user_list(void*)
08561867 +0x37d:  movl   $0x2,0x8(%esp)
0856186f +0x385:  movl   $0x3,0x4(%esp)
08561877 +0x38d:  mov    0x8(%ebp),%eax
0856187a +0x390:  mov    %eax,(%esp)
0856187d +0x393:  call   0856214a <_ZN18online_preliminary18COnlinePreliminary21_SendMatchStatePacketEii>  ; online_preliminary::COnlinePreliminary::_SendMatchStatePacket(int, int)
08561882 +0x398:  mov    0x8(%ebp),%eax
08561885 +0x39b:  movl   $0x3,0x4(%eax)
0856188c +0x3a2:  movl   $0x0,-0x14(%ebp)
08561893 +0x3a9:  movl   $0x0,-0x10(%ebp)
0856189a +0x3b0:  jmp    0856194d <+0x463>
0856189f +0x3b5:  mov    -0x10(%ebp),%eax
085618a2 +0x3b8:  mov    %eax,0x4(%esp)
085618a6 +0x3bc:  mov    -0x18(%ebp),%eax
085618a9 +0x3bf:  mov    %eax,(%esp)
085618ac +0x3c2:  call   085d921e <_ZN8PvP_Room13get_user_seatEi>  ; PvP_Room::get_user_seat(int)
085618b1 +0x3c7:  mov    %eax,-0x1c(%ebp)
085618b4 +0x3ca:  cmpl   $0x0,-0x1c(%ebp)
085618b8 +0x3ce:  je     08561948 <+0x45e>
085618be +0x3d4:  mov    -0x10(%ebp),%eax
085618c1 +0x3d7:  mov    %eax,0x4(%esp)
085618c5 +0x3db:  mov    -0x18(%ebp),%eax
085618c8 +0x3de:  mov    %eax,(%esp)
085618cb +0x3e1:  call   085d9272 <_ZN8PvP_Room8get_teamEi>  ; PvP_Room::get_team(int)
085618d0 +0x3e6:  mov    %eax,-0x14(%ebp)
085618d3 +0x3e9:  mov    -0x10(%ebp),%eax
085618d6 +0x3ec:  mov    %eax,0xc(%esp)
085618da +0x3f0:  mov    -0x18(%ebp),%eax
085618dd +0x3f3:  mov    %eax,0x8(%esp)
085618e1 +0x3f7:  mov    -0x1c(%ebp),%eax
085618e4 +0x3fa:  mov    %eax,0x4(%esp)
085618e8 +0x3fe:  mov    0x8(%ebp),%eax
085618eb +0x401:  mov    %eax,(%esp)
085618ee +0x404:  call   08560df2 <_ZN18online_preliminary18COnlinePreliminary12_PullOutRoomEP5CUserP8PvP_Roomi>  ; online_preliminary::COnlinePreliminary::_PullOutRoom(CUser*, PvP_Room*, int)
085618f3 +0x409:  movl   $0x0,0xc(%esp)
085618fb +0x411:  mov    0xc(%ebp),%eax
085618fe +0x414:  mov    %eax,0x8(%esp)
08561902 +0x418:  mov    -0x1c(%ebp),%eax
08561905 +0x41b:  mov    %eax,0x4(%esp)
08561909 +0x41f:  mov    0x8(%ebp),%eax
0856190c +0x422:  mov    %eax,(%esp)
0856190f +0x425:  call   08560e4a <_ZN18online_preliminary18COnlinePreliminary10_PutInRoomEP5CUserP8PvP_Roomb>  ; online_preliminary::COnlinePreliminary::_PutInRoom(CUser*, PvP_Room*, bool)
08561914 +0x42a:  mov    %eax,-0xc(%ebp)
08561917 +0x42d:  cmpl   $0x3,-0x14(%ebp)
0856191b +0x431:  jne    08561949 <+0x45f>
0856191d +0x433:  movl   $0x2,0x10(%esp)
08561925 +0x43b:  movl   $0x3,0xc(%esp)
0856192d +0x443:  mov    -0xc(%ebp),%eax
08561930 +0x446:  mov    %eax,0x8(%esp)
08561934 +0x44a:  mov    -0x1c(%ebp),%eax
08561937 +0x44d:  mov    %eax,0x4(%esp)
0856193b +0x451:  mov    0xc(%ebp),%eax
0856193e +0x454:  mov    %eax,(%esp)
08561941 +0x457:  call   085dd070 <_ZN8PvP_Room17OnSetPVPSeatStateEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE>  ; PvP_Room::OnSetPVPSeatState(CUser*, int, ENUM_SEAT_STATE, ENUM_WALKOUT_TYPE)
08561946 +0x45c:  jmp    08561949 <+0x45f>
08561948 +0x45e:  nop
08561949 +0x45f:  addl   $0x1,-0x10(%ebp)
0856194d +0x463:  cmpl   $0x7,-0x10(%ebp)
08561951 +0x467:  setbe  %al
08561954 +0x46a:  test   %al,%al
08561956 +0x46c:  jne    0856189f <+0x3b5>
0856195c +0x472:  mov    &_ZN18online_preliminary18COnlinePreliminary17pWaitingRoomList_E,%eax
08561961 +0x477:  mov    (%eax),%eax
08561963 +0x479:  add    $0x4,%eax
08561966 +0x47c:  mov    (%eax),%ecx
08561968 +0x47e:  mov    0x8(%ebp),%edx
0856196b +0x481:  mov    &_ZN18online_preliminary18COnlinePreliminary17pWaitingRoomList_E,%eax
08561970 +0x486:  mov    %edx,0x4(%esp)
08561974 +0x48a:  mov    %eax,(%esp)
08561977 +0x48d:  call   *%ecx
08561979 +0x48f:  mov    0x8(%ebp),%eax
0856197c +0x492:  movl   $0x4,0x4(%eax)
08561983 +0x499:  movl   $0x2,0x8(%esp)
0856198b +0x4a1:  movl   $0x2,0x4(%esp)
08561993 +0x4a9:  mov    0x8(%ebp),%eax
08561996 +0x4ac:  mov    %eax,(%esp)
08561999 +0x4af:  call   0856214a <_ZN18online_preliminary18COnlinePreliminary21_SendMatchStatePacketEii>  ; online_preliminary::COnlinePreliminary::_SendMatchStatePacket(int, int)
0856199e +0x4b4:  mov    0x8(%ebp),%eax
085619a1 +0x4b7:  movl   $0x0,0x6c(%eax)
085619a8 +0x4be:  movl   $0x3b,0x4(%esp)
085619b0 +0x4c6:  mov    0xc(%ebp),%eax
085619b3 +0x4c9:  mov    %eax,(%esp)
085619b6 +0x4cc:  call   08568d90 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x75a>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x75a
085619bb +0x4d1:  mov    %eax,%esi
085619bd +0x4d3:  mov    0xc(%ebp),%eax
085619c0 +0x4d6:  mov    %eax,(%esp)
085619c3 +0x4d9:  call   0822d994 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x303e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x303e
085619c8 +0x4de:  mov    %eax,%ebx
085619ca +0x4e0:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
085619cf +0x4e5:  movl   $0x0,0x18(%esp)
085619d7 +0x4ed:  mov    %esi,0x14(%esp)
085619db +0x4f1:  movl   $0xb4,0x10(%esp)
085619e3 +0x4f9:  movl   $0x3b,0xc(%esp)
085619eb +0x501:  mov    %ebx,0x8(%esp)
085619ef +0x505:  movl   $0x5,0x4(%esp)
085619f7 +0x50d:  mov    %eax,(%esp)
085619fa +0x510:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
085619ff +0x515:  mov    $0x1,%eax
08561a04 +0x51a:  add    $0x90,%esp
08561a0a +0x520:  pop    %ebx
08561a0b +0x521:  pop    %esi
08561a0c +0x522:  pop    %ebp
08561a0d +0x523:  ret
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminary::OnMatchRoom @ 0x85614ea

/* online_preliminary::COnlinePreliminary::OnMatchRoom(PvP_Room*, int) */

undefined4 __thiscall
online_preliminary::COnlinePreliminary::OnMatchRoom
          (COnlinePreliminary *this,PvP_Room *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  TimerQueue *pTVar6;
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
    cMyTrace::cMyTrace(local_70,
                       "virtual bool online_preliminary::COnlinePreliminary::OnMatchRoom(PvP_Room*, int)"
                       ,0x7a6,0);
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
  if (local_20 == (CUser *)0x0) {
    cMyTrace::cMyTrace(local_60,
                       "virtual bool online_preliminary::COnlinePreliminary::OnMatchRoom(PvP_Room*, int)"
                       ,0x7c1,0);
    cMyTrace::operator()(local_60,"error file(%s) line(%d)","MatchingSystem.cpp",0x7c1);
    *(undefined4 *)(this + 4) = 2;
    _SendMatchStatePacket(this,1,1);
    return 0;
  }
  local_1c = (PvP_Room *)CUser::GetPVPRoom(local_20);
  if (local_1c == (PvP_Room *)0x0) {
    cMyTrace::cMyTrace(local_50,
                       "virtual bool online_preliminary::COnlinePreliminary::OnMatchRoom(PvP_Room*, int)"
                       ,0x7ca,0);
    cMyTrace::operator()(local_50,"error file(%s) line(%d)","MatchingSystem.cpp",0x7ca);
    *(undefined4 *)(this + 4) = 2;
    _SendMatchStatePacket(this,1,1);
    return 0;
  }
  iVar2 = PvP_Room::get_player_count(param_1);
  uVar3 = GetPlayCountPerOneTeam();
  if ((int)(uVar3 & 0xff) < iVar2) {
    cMyTrace::cMyTrace(local_40,
                       "virtual bool online_preliminary::COnlinePreliminary::OnMatchRoom(PvP_Room*, int)"
                       ,0x7d2,0);
    cMyTrace::operator()(local_40,"error file(%s) line(%d)","MatchingSystem.cpp",0x7d2);
    *(undefined4 *)(this + 4) = 2;
    _SendMatchStatePacket(this,1,1);
    return 0;
  }
  iVar2 = TeamInfoSecond::size((TeamInfoSecond *)(this + 0x1c));
  uVar3 = GetPlayCountPerOneTeam();
  if (iVar2 <= (int)(uVar3 & 0xff)) {
    iVar2 = PvP_Room::get_player_count(local_1c);
    uVar3 = GetPlayCountPerOneTeam();
    if (iVar2 <= (int)(uVar3 & 0xff)) {
      bVar1 = false;
      goto LAB_085617b9;
    }
  }
  bVar1 = true;
LAB_085617b9:
  if (bVar1) {
    cMyTrace::cMyTrace(local_30,
                       "virtual bool online_preliminary::COnlinePreliminary::OnMatchRoom(PvP_Room*, int)"
                       ,0x7da,0);
    cMyTrace::operator()(local_30,"error file(%s) line(%d)","MatchingSystem.cpp",0x7da);
    *(undefined4 *)(this + 4) = 2;
    _SendMatchStatePacket(this,1,1);
    uVar4 = 0;
  }
  else {
    _BackupRoomInfo(this,local_1c);
    TeamInfoSecond::reset((TeamInfoSecond *)(this + 0x44));
    PvP_Room::get_user_list(local_1c,this + 0x44);
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
    *(undefined4 *)(this + 0x6c) = 0;
    uVar4 = PvP_Room::gen_timer_key(param_1,0x3b);
    uVar5 = PvP_Room::get_index(param_1);
    pTVar6 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar6,5,uVar5,0x3b,0xb4,uVar4,0);
    uVar4 = 1;
  }
  return uVar4;
}
```
