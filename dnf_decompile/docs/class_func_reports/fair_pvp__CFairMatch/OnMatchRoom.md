# OnMatchRoom

`_ZN8fair_pvp10CFairMatch11OnMatchRoomEP8PvP_Roomi`

`fair_pvp::CFairMatch::OnMatchRoom(PvP_Room*, int)`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x08564150` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08564150  _ZN8fair_pvp10CFairMatch11OnMatchRoomEP8PvP_Roomi
#           fair_pvp::CFairMatch::OnMatchRoom(PvP_Room*, int)
# range [0x08564150, 0x0856491b]
08564150 +0x000:  push   %ebp
08564151 +0x001:  mov    %esp,%ebp
08564153 +0x003:  push   %edi
08564154 +0x004:  push   %esi
08564155 +0x005:  push   %ebx
08564156 +0x006:  sub    $0x1ac,%esp
0856415c +0x00c:  mov    0x8(%ebp),%eax
0856415f +0x00f:  mov    0x18(%eax),%eax
08564162 +0x012:  cmp    0x10(%ebp),%eax
08564165 +0x015:  je     085641a7 <+0x57>
08564167 +0x017:  movl   $0x0,0xc(%esp)
0856416f +0x01f:  movl   $0xc8b,0x8(%esp)
08564177 +0x027:  movl   $&_ZZN8fair_pvp10CFairMatch11OnMatchRoomEP8PvP_RoomiE19__PRETTY_FUNCTION__,0x4(%esp)
0856417f +0x02f:  lea    -0x7c(%ebp),%eax
08564182 +0x032:  mov    %eax,(%esp)
08564185 +0x035:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0856418a +0x03a:  movl   $"OnMatchRoom timeout",0x4(%esp)
08564192 +0x042:  lea    -0x7c(%ebp),%eax
08564195 +0x045:  mov    %eax,(%esp)
08564198 +0x048:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0856419d +0x04d:  mov    $0x0,%ebx
085641a2 +0x052:  jmp    0856490f <+0x7bf>
085641a7 +0x057:  mov    0x8(%ebp),%eax
085641aa +0x05a:  mov    0x4(%eax),%eax
085641ad +0x05d:  cmp    $0x1,%eax
085641b0 +0x060:  je     085641bc <+0x6c>
085641b2 +0x062:  mov    $0x0,%ebx
085641b7 +0x067:  jmp    0856490f <+0x7bf>
085641bc +0x06c:  call   08562834 <_ZN8fair_pvp10CFairMatch22GetPlayCountPerOneTeamEv>  ; fair_pvp::CFairMatch::GetPlayCountPerOneTeam()
085641c1 +0x071:  cmp    $0x1,%al
085641c3 +0x073:  sete   %al
085641c6 +0x076:  movzbl %al,%eax
085641c9 +0x079:  mov    %eax,0x4(%esp)
085641cd +0x07d:  mov    0xc(%ebp),%eax
085641d0 +0x080:  mov    %eax,(%esp)
085641d3 +0x083:  call   08568d62 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x72c>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x72c
085641d8 +0x088:  movl   $0x0,-0x2c(%ebp)
085641df +0x08f:  movl   $0x0,-0x80(%ebp)
085641e6 +0x096:  mov    0xc(%ebp),%eax
085641e9 +0x099:  mov    %eax,(%esp)
085641ec +0x09c:  call   08568d16 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x6e0>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x6e0
085641f1 +0x0a1:  mov    0x8(%ebp),%edx
085641f4 +0x0a4:  mov    %eax,0xb8(%edx)
085641fa +0x0aa:  movl   $0x0,-0x84(%ebp)
08564204 +0x0b4:  mov    &_ZN8fair_pvp10CFairMatch17pWaitingRoomList_E,%eax
08564209 +0x0b9:  mov    (%eax),%eax
0856420b +0x0bb:  add    $0x8,%eax
0856420e +0x0be:  mov    (%eax),%ebx
08564210 +0x0c0:  mov    0x8(%ebp),%edx
08564213 +0x0c3:  mov    &_ZN8fair_pvp10CFairMatch17pWaitingRoomList_E,%eax
08564218 +0x0c8:  lea    -0x84(%ebp),%ecx
0856421e +0x0ce:  mov    %ecx,0x8(%esp)
08564222 +0x0d2:  mov    %edx,0x4(%esp)
08564226 +0x0d6:  mov    %eax,(%esp)
08564229 +0x0d9:  call   *%ebx
0856422b +0x0db:  xor    $0x1,%eax
0856422e +0x0de:  test   %al,%al
08564230 +0x0e0:  je     08564261 <+0x111>
08564232 +0x0e2:  mov    0x8(%ebp),%eax
08564235 +0x0e5:  movl   $0x2,0x4(%eax)
0856423c +0x0ec:  movl   $0x1,0x8(%esp)
08564244 +0x0f4:  movl   $0x1,0x4(%esp)
0856424c +0x0fc:  mov    0x8(%ebp),%eax
0856424f +0x0ff:  mov    %eax,(%esp)
08564252 +0x102:  call   085651a6 <_ZN8fair_pvp10CFairMatch21_SendMatchStatePacketEii>  ; fair_pvp::CFairMatch::_SendMatchStatePacket(int, int)
08564257 +0x107:  mov    $0x0,%ebx
0856425c +0x10c:  jmp    0856490f <+0x7bf>
08564261 +0x111:  movl   $0x0,-0x94(%ebp)
0856426b +0x11b:  mov    -0x84(%ebp),%eax
08564271 +0x121:  lea    -0x94(%ebp),%edx
08564277 +0x127:  mov    %edx,0xc(%esp)
0856427b +0x12b:  mov    0xc(%ebp),%edx
0856427e +0x12e:  mov    %edx,0x8(%esp)
08564282 +0x132:  mov    %eax,0x4(%esp)
08564286 +0x136:  mov    0x8(%ebp),%eax
08564289 +0x139:  mov    %eax,(%esp)
0856428c +0x13c:  call   08563ed8 <_ZN8fair_pvp10CFairMatch17_CheckMovableRoomEP6IMatchP8PvP_RoomPS4_>  ; fair_pvp::CFairMatch::_CheckMovableRoom(IMatch*, PvP_Room*, PvP_Room**)
08564291 +0x141:  test   %eax,%eax
08564293 +0x143:  sete   %al
08564296 +0x146:  test   %al,%al
08564298 +0x148:  je     085643ee <+0x29e>
0856429e +0x14e:  mov    0x8(%ebp),%eax
085642a1 +0x151:  movl   $0x2,0x4(%eax)
085642a8 +0x158:  movl   $0x1,0x8(%esp)
085642b0 +0x160:  movl   $0x1,0x4(%esp)
085642b8 +0x168:  mov    0x8(%ebp),%eax
085642bb +0x16b:  mov    %eax,(%esp)
085642be +0x16e:  call   085651a6 <_ZN8fair_pvp10CFairMatch21_SendMatchStatePacketEii>  ; fair_pvp::CFairMatch::_SendMatchStatePacket(int, int)
085642c3 +0x173:  lea    -0x193(%ebp),%edx
085642c9 +0x179:  mov    $0xff,%ebx
085642ce +0x17e:  mov    $0x0,%eax
085642d3 +0x183:  mov    %edx,%ecx
085642d5 +0x185:  and    $0x1,%ecx
085642d8 +0x188:  test   %ecx,%ecx
085642da +0x18a:  je     085642e4 <+0x194>
085642dc +0x18c:  mov    %al,(%edx)
085642de +0x18e:  add    $0x1,%edx
085642e1 +0x191:  sub    $0x1,%ebx
085642e4 +0x194:  mov    %edx,%ecx
085642e6 +0x196:  and    $0x2,%ecx
085642e9 +0x199:  test   %ecx,%ecx
085642eb +0x19b:  je     085642f6 <+0x1a6>
085642ed +0x19d:  mov    %ax,(%edx)
085642f0 +0x1a0:  add    $0x2,%edx
085642f3 +0x1a3:  sub    $0x2,%ebx
085642f6 +0x1a6:  mov    %ebx,%ecx
085642f8 +0x1a8:  shr    $0x2,%ecx
085642fb +0x1ab:  mov    %edx,%edi
085642fd +0x1ad:  rep stos %eax,%es:(%edi)
085642ff +0x1af:  mov    %edi,%edx
08564301 +0x1b1:  mov    %ebx,%ecx
08564303 +0x1b3:  and    $0x2,%ecx
08564306 +0x1b6:  test   %ecx,%ecx
08564308 +0x1b8:  je     08564310 <+0x1c0>
0856430a +0x1ba:  mov    %ax,(%edx)
0856430d +0x1bd:  add    $0x2,%edx
08564310 +0x1c0:  mov    %ebx,%ecx
08564312 +0x1c2:  and    $0x1,%ecx
08564315 +0x1c5:  test   %ecx,%ecx
08564317 +0x1c7:  je     0856431e <+0x1ce>
08564319 +0x1c9:  mov    %al,(%edx)
0856431b +0x1cb:  add    $0x1,%edx
0856431e +0x1ce:  mov    0x8(%ebp),%eax
08564321 +0x1d1:  lea    -0x193(%ebp),%edx
08564327 +0x1d7:  mov    %edx,0x4(%esp)
0856432b +0x1db:  mov    %eax,(%esp)
0856432e +0x1de:  call   08563ff7 <_Z11GetUserNameP6IMatchPc>  ; GetUserName(IMatch*, char*)
08564333 +0x1e3:  mov    %eax,%ebx
08564335 +0x1e5:  movl   $0x0,0x10(%esp)
0856433d +0x1ed:  movl   $0x0,0xc(%esp)
08564345 +0x1f5:  movl   $0xcb0,0x8(%esp)
0856434d +0x1fd:  movl   $&_ZZN8fair_pvp10CFairMatch11OnMatchRoomEP8PvP_RoomiE19__PRETTY_FUNCTION__,0x4(%esp)
08564355 +0x205:  lea    -0x6c(%ebp),%eax
08564358 +0x208:  mov    %eax,(%esp)
0856435b +0x20b:  call   0854fd3c <_ZN10CSwitchLogC1EPKciii>  ; CSwitchLog::CSwitchLog(char const*, int, int, int)
08564360 +0x210:  mov    %ebx,0xc(%esp)
08564364 +0x214:  mov    0x8(%ebp),%eax
08564367 +0x217:  mov    %eax,0x8(%esp)
0856436b +0x21b:  movl   $"pvp@log 1 call match(%x), %s ",0x4(%esp)
08564373 +0x223:  lea    -0x6c(%ebp),%eax
08564376 +0x226:  mov    %eax,(%esp)
08564379 +0x229:  call   0854fd64 <_ZN10CSwitchLogclEPKcz>  ; CSwitchLog::operator()(char const*, ...)
0856437e +0x22e:  mov    -0x84(%ebp),%eax
08564384 +0x234:  lea    -0x193(%ebp),%edx
0856438a +0x23a:  mov    %edx,0x4(%esp)
0856438e +0x23e:  mov    %eax,(%esp)
08564391 +0x241:  call   08563ff7 <_Z11GetUserNameP6IMatchPc>  ; GetUserName(IMatch*, char*)
08564396 +0x246:  mov    %eax,%ebx
08564398 +0x248:  mov    -0x84(%ebp),%esi
0856439e +0x24e:  movl   $0x0,0x10(%esp)
085643a6 +0x256:  movl   $0x0,0xc(%esp)
085643ae +0x25e:  movl   $0xcb1,0x8(%esp)
085643b6 +0x266:  movl   $&_ZZN8fair_pvp10CFairMatch11OnMatchRoomEP8PvP_RoomiE19__PRETTY_FUNCTION__,0x4(%esp)
085643be +0x26e:  lea    -0x5c(%ebp),%eax
085643c1 +0x271:  mov    %eax,(%esp)
085643c4 +0x274:  call   0854fd3c <_ZN10CSwitchLogC1EPKciii>  ; CSwitchLog::CSwitchLog(char const*, int, int, int)
085643c9 +0x279:  mov    %ebx,0xc(%esp)
085643cd +0x27d:  mov    %esi,0x8(%esp)
085643d1 +0x281:  movl   $"pvp@log 1 opposite match(%x), %s ",0x4(%esp)
085643d9 +0x289:  lea    -0x5c(%ebp),%eax
085643dc +0x28c:  mov    %eax,(%esp)
085643df +0x28f:  call   0854fd64 <_ZN10CSwitchLogclEPKcz>  ; CSwitchLog::operator()(char const*, ...)
085643e4 +0x294:  mov    $0x0,%ebx
085643e9 +0x299:  jmp    0856490f <+0x7bf>
085643ee +0x29e:  mov    0xc(%ebp),%eax
085643f1 +0x2a1:  mov    %eax,(%esp)
085643f4 +0x2a4:  call   0822d994 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x303e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x303e
085643f9 +0x2a9:  mov    %eax,%ebx
085643fb +0x2ab:  mov    -0x94(%ebp),%eax
08564401 +0x2b1:  mov    %eax,(%esp)
08564404 +0x2b4:  call   0822d994 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x303e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x303e
08564409 +0x2b9:  cmp    %eax,%ebx
0856440b +0x2bb:  sete   %al
0856440e +0x2be:  test   %al,%al
08564410 +0x2c0:  je     08564566 <+0x416>
08564416 +0x2c6:  mov    0x8(%ebp),%eax
08564419 +0x2c9:  movl   $0x2,0x4(%eax)
08564420 +0x2d0:  movl   $0x1,0x8(%esp)
08564428 +0x2d8:  movl   $0x1,0x4(%esp)
08564430 +0x2e0:  mov    0x8(%ebp),%eax
08564433 +0x2e3:  mov    %eax,(%esp)
08564436 +0x2e6:  call   085651a6 <_ZN8fair_pvp10CFairMatch21_SendMatchStatePacketEii>  ; fair_pvp::CFairMatch::_SendMatchStatePacket(int, int)
0856443b +0x2eb:  lea    -0x193(%ebp),%edx
08564441 +0x2f1:  mov    $0xff,%ebx
08564446 +0x2f6:  mov    $0x0,%eax
0856444b +0x2fb:  mov    %edx,%ecx
0856444d +0x2fd:  and    $0x1,%ecx
08564450 +0x300:  test   %ecx,%ecx
08564452 +0x302:  je     0856445c <+0x30c>
08564454 +0x304:  mov    %al,(%edx)
08564456 +0x306:  add    $0x1,%edx
08564459 +0x309:  sub    $0x1,%ebx
0856445c +0x30c:  mov    %edx,%ecx
0856445e +0x30e:  and    $0x2,%ecx
08564461 +0x311:  test   %ecx,%ecx
08564463 +0x313:  je     0856446e <+0x31e>
08564465 +0x315:  mov    %ax,(%edx)
08564468 +0x318:  add    $0x2,%edx
0856446b +0x31b:  sub    $0x2,%ebx
0856446e +0x31e:  mov    %ebx,%ecx
08564470 +0x320:  shr    $0x2,%ecx
08564473 +0x323:  mov    %edx,%edi
08564475 +0x325:  rep stos %eax,%es:(%edi)
08564477 +0x327:  mov    %edi,%edx
08564479 +0x329:  mov    %ebx,%ecx
0856447b +0x32b:  and    $0x2,%ecx
0856447e +0x32e:  test   %ecx,%ecx
08564480 +0x330:  je     08564488 <+0x338>
08564482 +0x332:  mov    %ax,(%edx)
08564485 +0x335:  add    $0x2,%edx
08564488 +0x338:  mov    %ebx,%ecx
0856448a +0x33a:  and    $0x1,%ecx
0856448d +0x33d:  test   %ecx,%ecx
0856448f +0x33f:  je     08564496 <+0x346>
08564491 +0x341:  mov    %al,(%edx)
08564493 +0x343:  add    $0x1,%edx
08564496 +0x346:  mov    0x8(%ebp),%eax
08564499 +0x349:  lea    -0x193(%ebp),%edx
0856449f +0x34f:  mov    %edx,0x4(%esp)
085644a3 +0x353:  mov    %eax,(%esp)
085644a6 +0x356:  call   08563ff7 <_Z11GetUserNameP6IMatchPc>  ; GetUserName(IMatch*, char*)
085644ab +0x35b:  mov    %eax,%ebx
085644ad +0x35d:  movl   $0x0,0x10(%esp)
085644b5 +0x365:  movl   $0x0,0xc(%esp)
085644bd +0x36d:  movl   $0xcbb,0x8(%esp)
085644c5 +0x375:  movl   $&_ZZN8fair_pvp10CFairMatch11OnMatchRoomEP8PvP_RoomiE19__PRETTY_FUNCTION__,0x4(%esp)
085644cd +0x37d:  lea    -0x4c(%ebp),%eax
085644d0 +0x380:  mov    %eax,(%esp)
085644d3 +0x383:  call   0854fd3c <_ZN10CSwitchLogC1EPKciii>  ; CSwitchLog::CSwitchLog(char const*, int, int, int)
085644d8 +0x388:  mov    %ebx,0xc(%esp)
085644dc +0x38c:  mov    0x8(%ebp),%eax
085644df +0x38f:  mov    %eax,0x8(%esp)
085644e3 +0x393:  movl   $"pvp@log 2 call match(%x), %s ",0x4(%esp)
085644eb +0x39b:  lea    -0x4c(%ebp),%eax
085644ee +0x39e:  mov    %eax,(%esp)
085644f1 +0x3a1:  call   0854fd64 <_ZN10CSwitchLogclEPKcz>  ; CSwitchLog::operator()(char const*, ...)
085644f6 +0x3a6:  mov    -0x84(%ebp),%eax
085644fc +0x3ac:  lea    -0x193(%ebp),%edx
08564502 +0x3b2:  mov    %edx,0x4(%esp)
08564506 +0x3b6:  mov    %eax,(%esp)
08564509 +0x3b9:  call   08563ff7 <_Z11GetUserNameP6IMatchPc>  ; GetUserName(IMatch*, char*)
0856450e +0x3be:  mov    %eax,%ebx
08564510 +0x3c0:  mov    -0x84(%ebp),%esi
08564516 +0x3c6:  movl   $0x0,0x10(%esp)
0856451e +0x3ce:  movl   $0x0,0xc(%esp)
08564526 +0x3d6:  movl   $0xcbc,0x8(%esp)
0856452e +0x3de:  movl   $&_ZZN8fair_pvp10CFairMatch11OnMatchRoomEP8PvP_RoomiE19__PRETTY_FUNCTION__,0x4(%esp)
08564536 +0x3e6:  lea    -0x3c(%ebp),%eax
08564539 +0x3e9:  mov    %eax,(%esp)
0856453c +0x3ec:  call   0854fd3c <_ZN10CSwitchLogC1EPKciii>  ; CSwitchLog::CSwitchLog(char const*, int, int, int)
08564541 +0x3f1:  mov    %ebx,0xc(%esp)
08564545 +0x3f5:  mov    %esi,0x8(%esp)
08564549 +0x3f9:  movl   $"pvp@log 2 opposite match(%x), %s ",0x4(%esp)
08564551 +0x401:  lea    -0x3c(%ebp),%eax
08564554 +0x404:  mov    %eax,(%esp)
08564557 +0x407:  call   0854fd64 <_ZN10CSwitchLogclEPKcz>  ; CSwitchLog::operator()(char const*, ...)
0856455c +0x40c:  mov    $0x0,%ebx
08564561 +0x411:  jmp    0856490f <+0x7bf>
08564566 +0x416:  mov    0x8(%ebp),%eax
08564569 +0x419:  add    $0x64,%eax
0856456c +0x41c:  mov    %eax,(%esp)
0856456f +0x41f:  call   08562582 <_ZN8fair_pvp13TeamInfoThird5resetEv>  ; fair_pvp::TeamInfoThird::reset()
08564574 +0x424:  mov    0x8(%ebp),%eax
08564577 +0x427:  movl   $0x3,0x4(%eax)
0856457e +0x42e:  movl   $0x0,-0x28(%ebp)
08564585 +0x435:  movl   $0x0,-0x24(%ebp)
0856458c +0x43c:  jmp    0856471e <+0x5ce>
08564591 +0x441:  mov    -0x84(%ebp),%eax
08564597 +0x447:  lea    -0x80(%ebp),%edx
0856459a +0x44a:  mov    %edx,0xc(%esp)
0856459e +0x44e:  mov    0xc(%ebp),%edx
085645a1 +0x451:  mov    %edx,0x8(%esp)
085645a5 +0x455:  mov    %eax,0x4(%esp)
085645a9 +0x459:  mov    0x8(%ebp),%eax
085645ac +0x45c:  mov    %eax,(%esp)
085645af +0x45f:  call   08563ed8 <_ZN8fair_pvp10CFairMatch17_CheckMovableRoomEP6IMatchP8PvP_RoomPS4_>  ; fair_pvp::CFairMatch::_CheckMovableRoom(IMatch*, PvP_Room*, PvP_Room**)
085645b4 +0x464:  test   %eax,%eax
085645b6 +0x466:  sete   %al
085645b9 +0x469:  test   %al,%al
085645bb +0x46b:  je     085645ec <+0x49c>
085645bd +0x46d:  mov    0x8(%ebp),%eax
085645c0 +0x470:  movl   $0x2,0x4(%eax)
085645c7 +0x477:  movl   $0x1,0x8(%esp)
085645cf +0x47f:  movl   $0x1,0x4(%esp)
085645d7 +0x487:  mov    0x8(%ebp),%eax
085645da +0x48a:  mov    %eax,(%esp)
085645dd +0x48d:  call   085651a6 <_ZN8fair_pvp10CFairMatch21_SendMatchStatePacketEii>  ; fair_pvp::CFairMatch::_SendMatchStatePacket(int, int)
085645e2 +0x492:  mov    $0x0,%ebx
085645e7 +0x497:  jmp    0856490f <+0x7bf>
085645ec +0x49c:  mov    0x8(%ebp),%eax
085645ef +0x49f:  mov    (%eax),%eax
085645f1 +0x4a1:  add    $0x84,%eax
085645f6 +0x4a6:  mov    (%eax),%edx
085645f8 +0x4a8:  mov    0x8(%ebp),%eax
085645fb +0x4ab:  mov    %eax,(%esp)
085645fe +0x4ae:  call   *%edx
08564600 +0x4b0:  mov    %eax,%ebx
08564602 +0x4b2:  call   08562834 <_ZN8fair_pvp10CFairMatch22GetPlayCountPerOneTeamEv>  ; fair_pvp::CFairMatch::GetPlayCountPerOneTeam()
08564607 +0x4b7:  movzbl %al,%eax
0856460a +0x4ba:  cmp    %eax,%ebx
0856460c +0x4bc:  sete   %al
0856460f +0x4bf:  test   %al,%al
08564611 +0x4c1:  je     0856463a <+0x4ea>
08564613 +0x4c3:  movl   $0x1,-0x28(%ebp)
0856461a +0x4ca:  mov    -0x80(%ebp),%eax
0856461d +0x4cd:  mov    %eax,(%esp)
08564620 +0x4d0:  call   08568d0a <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x6d4>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x6d4
08564625 +0x4d5:  mov    %eax,-0x24(%ebp)
08564628 +0x4d8:  mov    -0x80(%ebp),%eax
0856462b +0x4db:  mov    %eax,0x4(%esp)
0856462f +0x4df:  mov    0x8(%ebp),%eax
08564632 +0x4e2:  mov    %eax,(%esp)
08564635 +0x4e5:  call   08563674 <_ZN8fair_pvp10CFairMatch15_BackupRoomInfoEP8PvP_Room>  ; fair_pvp::CFairMatch::_BackupRoomInfo(PvP_Room*)
0856463a +0x4ea:  movl   $0x0,-0x20(%ebp)
08564641 +0x4f1:  jmp    085646b1 <+0x561>
08564643 +0x4f3:  mov    -0x84(%ebp),%eax
08564649 +0x4f9:  mov    -0x20(%ebp),%edx
0856464c +0x4fc:  add    $0x1,%edx
0856464f +0x4ff:  shl    $0x4,%edx
08564652 +0x502:  movzbl 0x18(%edx,%eax,1),%eax
08564657 +0x507:  test   %al,%al
08564659 +0x509:  je     085646ad <+0x55d>
0856465b +0x50b:  mov    -0x84(%ebp),%eax
08564661 +0x511:  mov    -0x20(%ebp),%edx
08564664 +0x514:  add    $0x1,%edx
08564667 +0x517:  shl    $0x4,%edx
0856466a +0x51a:  add    %edx,%eax
0856466c +0x51c:  add    $0x14,%eax
0856466f +0x51f:  mov    (%eax),%eax
08564671 +0x521:  test   %eax,%eax
08564673 +0x523:  je     085646ad <+0x55d>
08564675 +0x525:  mov    -0x84(%ebp),%eax
0856467b +0x52b:  mov    -0x20(%ebp),%edx
0856467e +0x52e:  add    $0x1,%edx
08564681 +0x531:  shl    $0x4,%edx
08564684 +0x534:  add    %edx,%eax
08564686 +0x536:  add    $0x14,%eax
08564689 +0x539:  mov    (%eax),%ecx
0856468b +0x53b:  mov    -0x28(%ebp),%edx
0856468e +0x53e:  mov    %edx,%eax
08564690 +0x540:  shl    $0x3,%eax
08564693 +0x543:  add    %edx,%eax
08564695 +0x545:  shl    $0x3,%eax
08564698 +0x548:  add    $0x10,%eax
0856469b +0x54b:  add    0x8(%ebp),%eax
0856469e +0x54e:  add    $0xc,%eax
085646a1 +0x551:  mov    %ecx,0x4(%esp)
085646a5 +0x555:  mov    %eax,(%esp)
085646a8 +0x558:  call   085625c6 <_ZN8fair_pvp13TeamInfoThird3addEP5CUser>  ; fair_pvp::TeamInfoThird::add(CUser*)
085646ad +0x55d:  addl   $0x1,-0x20(%ebp)
085646b1 +0x561:  cmpl   $0x3,-0x20(%ebp)
085646b5 +0x565:  setle  %al
085646b8 +0x568:  test   %al,%al
085646ba +0x56a:  jne    08564643 <+0x4f3>
085646bc +0x56c:  movl   $0x2,0x8(%esp)
085646c4 +0x574:  movl   $0x3,0x4(%esp)
085646cc +0x57c:  mov    0x8(%ebp),%eax
085646cf +0x57f:  mov    %eax,(%esp)
085646d2 +0x582:  call   085651a6 <_ZN8fair_pvp10CFairMatch21_SendMatchStatePacketEii>  ; fair_pvp::CFairMatch::_SendMatchStatePacket(int, int)
085646d7 +0x587:  cmpl   $0x0,-0x28(%ebp)
085646db +0x58b:  sete   %al
085646de +0x58e:  movzbl %al,%edx
085646e1 +0x591:  mov    -0x80(%ebp),%eax
085646e4 +0x594:  mov    %edx,0xc(%esp)
085646e8 +0x598:  mov    %eax,0x8(%esp)
085646ec +0x59c:  mov    0xc(%ebp),%eax
085646ef +0x59f:  mov    %eax,0x4(%esp)
085646f3 +0x5a3:  mov    0x8(%ebp),%eax
085646f6 +0x5a6:  mov    %eax,(%esp)
085646f9 +0x5a9:  call   08563d32 <_ZN8fair_pvp10CFairMatch9_MoveRoomEP8PvP_RoomS2_b>  ; fair_pvp::CFairMatch::_MoveRoom(PvP_Room*, PvP_Room*, bool)
085646fe +0x5ae:  mov    -0x84(%ebp),%eax
08564704 +0x5b4:  mov    (%eax),%eax
08564706 +0x5b6:  add    $0x88,%eax
0856470b +0x5bb:  mov    (%eax),%edx
0856470d +0x5bd:  mov    -0x84(%ebp),%eax
08564713 +0x5c3:  mov    %eax,(%esp)
08564716 +0x5c6:  call   *%edx
08564718 +0x5c8:  mov    %eax,-0x84(%ebp)
0856471e +0x5ce:  mov    -0x84(%ebp),%eax
08564724 +0x5d4:  test   %eax,%eax
08564726 +0x5d6:  setne  %al
08564729 +0x5d9:  test   %al,%al
0856472b +0x5db:  jne    08564591 <+0x441>
08564731 +0x5e1:  mov    -0x24(%ebp),%eax
08564734 +0x5e4:  mov    %eax,0x4(%esp)
08564738 +0x5e8:  mov    0xc(%ebp),%eax
0856473b +0x5eb:  mov    %eax,(%esp)
0856473e +0x5ee:  call   085d91e2 <_ZN8PvP_Room13get_user_seatEP5CUser>  ; PvP_Room::get_user_seat(CUser*)
08564743 +0x5f3:  mov    0x8(%ebp),%edx
08564746 +0x5f6:  mov    %eax,0xbc(%edx)
0856474c +0x5fc:  mov    &_ZN8fair_pvp10CFairMatch17pWaitingRoomList_E,%eax
08564751 +0x601:  mov    (%eax),%eax
08564753 +0x603:  add    $0x4,%eax
08564756 +0x606:  mov    (%eax),%ecx
08564758 +0x608:  mov    0x8(%ebp),%edx
0856475b +0x60b:  mov    &_ZN8fair_pvp10CFairMatch17pWaitingRoomList_E,%eax
08564760 +0x610:  mov    %edx,0x4(%esp)
08564764 +0x614:  mov    %eax,(%esp)
08564767 +0x617:  call   *%ecx
08564769 +0x619:  mov    0x8(%ebp),%eax
0856476c +0x61c:  movl   $0x4,0x4(%eax)
08564773 +0x623:  movl   $0x2,0x8(%esp)
0856477b +0x62b:  movl   $0x2,0x4(%esp)
08564783 +0x633:  mov    0x8(%ebp),%eax
08564786 +0x636:  mov    %eax,(%esp)
08564789 +0x639:  call   085651a6 <_ZN8fair_pvp10CFairMatch21_SendMatchStatePacketEii>  ; fair_pvp::CFairMatch::_SendMatchStatePacket(int, int)
0856478e +0x63e:  mov    0x8(%ebp),%eax
08564791 +0x641:  movl   $0x0,0xac(%eax)
0856479b +0x64b:  movl   $0x3b,0x4(%esp)
085647a3 +0x653:  mov    0xc(%ebp),%eax
085647a6 +0x656:  mov    %eax,(%esp)
085647a9 +0x659:  call   08568d90 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x75a>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x75a
085647ae +0x65e:  mov    %eax,%esi
085647b0 +0x660:  mov    0xc(%ebp),%eax
085647b3 +0x663:  mov    %eax,(%esp)
085647b6 +0x666:  call   0822d994 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x303e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x303e
085647bb +0x66b:  mov    %eax,%ebx
085647bd +0x66d:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
085647c2 +0x672:  movl   $0x0,0x18(%esp)
085647ca +0x67a:  mov    %esi,0x14(%esp)
085647ce +0x67e:  movl   $0xb4,0x10(%esp)
085647d6 +0x686:  movl   $0x3b,0xc(%esp)
085647de +0x68e:  mov    %ebx,0x8(%esp)
085647e2 +0x692:  movl   $0x5,0x4(%esp)
085647ea +0x69a:  mov    %eax,(%esp)
085647ed +0x69d:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
085647f2 +0x6a2:  lea    -0x90(%ebp),%eax
085647f8 +0x6a8:  mov    %eax,(%esp)
085647fb +0x6ab:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08564800 +0x6b0:  lea    -0x90(%ebp),%eax
08564806 +0x6b6:  movl   $0xffff,0x8(%esp)
0856480e +0x6be:  mov    %eax,0x4(%esp)
08564812 +0x6c2:  mov    0xc(%ebp),%eax
08564815 +0x6c5:  mov    %eax,(%esp)
08564818 +0x6c8:  call   085db9e2 <_ZN8PvP_Room14make_seat_infoEPci>  ; PvP_Room::make_seat_info(char*, int)
0856481d +0x6cd:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08564822 +0x6d2:  lea    -0x90(%ebp),%edx
08564828 +0x6d8:  mov    %edx,0x4(%esp)
0856482c +0x6dc:  mov    %eax,(%esp)
0856482f +0x6df:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
08564834 +0x6e4:  movl   $0x0,-0x1c(%ebp)
0856483b +0x6eb:  jmp    085648cd <+0x77d>
08564840 +0x6f0:  lea    -0x90(%ebp),%eax
08564846 +0x6f6:  mov    %eax,(%esp)
08564849 +0x6f9:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0856484e +0x6fe:  movl   $0x13d,0x8(%esp)
08564856 +0x706:  movl   $0x0,0x4(%esp)
0856485e +0x70e:  lea    -0x90(%ebp),%eax
08564864 +0x714:  mov    %eax,(%esp)
08564867 +0x717:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0856486c +0x71c:  mov    -0x1c(%ebp),%edx
0856486f +0x71f:  mov    0x8(%ebp),%eax
08564872 +0x722:  add    $0x2c,%edx
08564875 +0x725:  mov    0x8(%eax,%edx,4),%eax
08564879 +0x729:  mov    %eax,0x4(%esp)
0856487d +0x72d:  lea    -0x90(%ebp),%eax
08564883 +0x733:  mov    %eax,(%esp)
08564886 +0x736:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0856488b +0x73b:  movl   $0x1,0x4(%esp)
08564893 +0x743:  lea    -0x90(%ebp),%eax
08564899 +0x749:  mov    %eax,(%esp)
0856489c +0x74c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085648a1 +0x751:  mov    -0x1c(%ebp),%edx
085648a4 +0x754:  mov    %edx,%eax
085648a6 +0x756:  shl    $0x3,%eax
085648a9 +0x759:  add    %edx,%eax
085648ab +0x75b:  shl    $0x3,%eax
085648ae +0x75e:  add    $0x10,%eax
085648b1 +0x761:  add    0x8(%ebp),%eax
085648b4 +0x764:  lea    0xc(%eax),%edx
085648b7 +0x767:  lea    -0x90(%ebp),%eax
085648bd +0x76d:  mov    %eax,0x4(%esp)
085648c1 +0x771:  mov    %edx,(%esp)
085648c4 +0x774:  call   0856274c <_ZN8fair_pvp13TeamInfoThird10SendToTeamER11PacketGuard>  ; fair_pvp::TeamInfoThird::SendToTeam(PacketGuard&)
085648c9 +0x779:  addl   $0x1,-0x1c(%ebp)
085648cd +0x77d:  cmpl   $0x1,-0x1c(%ebp)
085648d1 +0x781:  setle  %al
085648d4 +0x784:  test   %al,%al
085648d6 +0x786:  jne    08564840 <+0x6f0>
085648dc +0x78c:  mov    $0x1,%ebx
085648e1 +0x791:  lea    -0x90(%ebp),%eax
085648e7 +0x797:  mov    %eax,(%esp)
085648ea +0x79a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085648ef +0x79f:  jmp    0856490f <+0x7bf>
085648f1 +0x7a1:  mov    %edx,%ebx
085648f3 +0x7a3:  mov    %eax,%esi
085648f5 +0x7a5:  lea    -0x90(%ebp),%eax
085648fb +0x7ab:  mov    %eax,(%esp)
085648fe +0x7ae:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08564903 +0x7b3:  mov    %esi,%eax
08564905 +0x7b5:  mov    %ebx,%edx
08564907 +0x7b7:  mov    %eax,(%esp)
0856490a +0x7ba:  call   08ae3750 <_Unwind_Resume>
0856490f +0x7bf:  mov    %ebx,%eax
08564911 +0x7c1:  add    $0x1ac,%esp
08564917 +0x7c7:  pop    %ebx
08564918 +0x7c8:  pop    %esi
08564919 +0x7c9:  pop    %edi
0856491a +0x7ca:  pop    %ebp
0856491b +0x7cb:  ret
```

## 反编译 C

```c
// fair_pvp::CFairMatch::OnMatchRoom @ 0x8564150

/* fair_pvp::CFairMatch::OnMatchRoom(PvP_Room*, int) */

undefined4 __thiscall
fair_pvp::CFairMatch::OnMatchRoom(CFairMatch *this,PvP_Room *param_1,int param_2)

{
  IMatch *pIVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  TimerQueue *pTVar6;
  GameWorld *this_00;
  uint uVar7;
  char *pcVar8;
  undefined4 uVar9;
  uint uVar10;
  bool bVar11;
  byte bVar12;
  char local_197;
  char local_196 [254];
  PvP_Room *local_98;
  PacketGuard local_94 [12];
  IMatch *local_88;
  PvP_Room *local_84;
  cMyTrace local_80 [16];
  CSwitchLog local_70 [16];
  CSwitchLog local_60 [16];
  CSwitchLog local_50 [16];
  CSwitchLog local_40 [16];
  undefined4 local_30;
  int local_2c;
  CUser *local_28;
  int local_24;
  int local_20;
  
  bVar12 = 0;
  if (*(int *)(this + 0x18) == param_2) {
    if (*(int *)(this + 4) == 1) {
      cVar2 = GetPlayCountPerOneTeam();
      PvP_Room::setReamtchable(param_1,cVar2 == '\x01');
      local_30 = 0;
      local_84 = (PvP_Room *)0x0;
      uVar9 = PvP_Room::GetManagerSeat(param_1);
      *(undefined4 *)(this + 0xb8) = uVar9;
      local_88 = (IMatch *)0x0;
      cVar2 = (**(code **)(*pWaitingRoomList_ + 8))(pWaitingRoomList_,this,&local_88);
      if (cVar2 == '\x01') {
        local_98 = (PvP_Room *)0x0;
        iVar3 = _CheckMovableRoom(this,local_88,param_1,&local_98);
        if (iVar3 == 0) {
          *(undefined4 *)(this + 4) = 2;
          _SendMatchStatePacket(this,1,1);
          pcVar8 = &local_197;
          uVar10 = 0xff;
          bVar11 = ((uint)pcVar8 & 1) != 0;
          if (bVar11) {
            local_197 = '\0';
            pcVar8 = local_196;
            uVar10 = 0xfe;
          }
          if (((uint)pcVar8 & 2) != 0) {
            pcVar8[0] = '\0';
            pcVar8[1] = '\0';
            pcVar8 = pcVar8 + 2;
            uVar10 = uVar10 - 2;
          }
          for (uVar7 = uVar10 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            pcVar8[0] = '\0';
            pcVar8[1] = '\0';
            pcVar8[2] = '\0';
            pcVar8[3] = '\0';
            pcVar8 = pcVar8 + ((uint)bVar12 * -2 + 1) * 4;
          }
          if ((uVar10 & 2) != 0) {
            pcVar8[0] = '\0';
            pcVar8[1] = '\0';
            pcVar8 = pcVar8 + 2;
          }
          if (!bVar11) {
            *pcVar8 = '\0';
          }
          uVar9 = GetUserName((IMatch *)this,&local_197);
          CSwitchLog::CSwitchLog
                    (local_70,"virtual bool fair_pvp::CFairMatch::OnMatchRoom(PvP_Room*, int)",0xcb0
                     ,0,0);
          CSwitchLog::operator()(local_70,"pvp@log 1 call match(%x), %s ",this,uVar9);
          uVar9 = GetUserName(local_88,&local_197);
          pIVar1 = local_88;
          CSwitchLog::CSwitchLog
                    (local_60,"virtual bool fair_pvp::CFairMatch::OnMatchRoom(PvP_Room*, int)",0xcb1
                     ,0,0);
          CSwitchLog::operator()(local_60,"pvp@log 1 opposite match(%x), %s ",pIVar1,uVar9);
          uVar9 = 0;
        }
        else {
          iVar3 = PvP_Room::get_index(param_1);
          iVar4 = PvP_Room::get_index(local_98);
          if (iVar3 == iVar4) {
            *(undefined4 *)(this + 4) = 2;
            _SendMatchStatePacket(this,1,1);
            pcVar8 = &local_197;
            uVar10 = 0xff;
            bVar11 = ((uint)pcVar8 & 1) != 0;
            if (bVar11) {
              local_197 = '\0';
              pcVar8 = local_196;
              uVar10 = 0xfe;
            }
            if (((uint)pcVar8 & 2) != 0) {
              pcVar8[0] = '\0';
              pcVar8[1] = '\0';
              pcVar8 = pcVar8 + 2;
              uVar10 = uVar10 - 2;
            }
            for (uVar7 = uVar10 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              pcVar8[0] = '\0';
              pcVar8[1] = '\0';
              pcVar8[2] = '\0';
              pcVar8[3] = '\0';
              pcVar8 = pcVar8 + ((uint)bVar12 * -2 + 1) * 4;
            }
            if ((uVar10 & 2) != 0) {
              pcVar8[0] = '\0';
              pcVar8[1] = '\0';
              pcVar8 = pcVar8 + 2;
            }
            if (!bVar11) {
              *pcVar8 = '\0';
            }
            uVar9 = GetUserName((IMatch *)this,&local_197);
            CSwitchLog::CSwitchLog
                      (local_50,"virtual bool fair_pvp::CFairMatch::OnMatchRoom(PvP_Room*, int)",
                       0xcbb,0,0);
            CSwitchLog::operator()(local_50,"pvp@log 2 call match(%x), %s ",this,uVar9);
            uVar9 = GetUserName(local_88,&local_197);
            pIVar1 = local_88;
            CSwitchLog::CSwitchLog
                      (local_40,"virtual bool fair_pvp::CFairMatch::OnMatchRoom(PvP_Room*, int)",
                       0xcbc,0,0);
            CSwitchLog::operator()(local_40,"pvp@log 2 opposite match(%x), %s ",pIVar1,uVar9);
            uVar9 = 0;
          }
          else {
            TeamInfoThird::reset((TeamInfoThird *)(this + 100));
            *(undefined4 *)(this + 4) = 3;
            local_2c = 0;
            local_28 = (CUser *)0x0;
            for (; local_88 != (IMatch *)0x0;
                local_88 = (IMatch *)(**(code **)(*(int *)local_88 + 0x88))(local_88)) {
              iVar3 = _CheckMovableRoom(this,local_88,param_1,&local_84);
              if (iVar3 == 0) {
                *(undefined4 *)(this + 4) = 2;
                _SendMatchStatePacket(this,1,1);
                return 0;
              }
              uVar10 = (**(code **)(*(int *)this + 0x84))(this);
              uVar7 = GetPlayCountPerOneTeam();
              if (uVar10 == (uVar7 & 0xff)) {
                local_2c = 1;
                local_28 = (CUser *)PvP_Room::GetManager(local_84);
                _BackupRoomInfo(this,local_84);
              }
              for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
                if ((local_88[(local_24 + 1) * 0x10 + 0x18] != (IMatch)0x0) &&
                   (*(int *)(local_88 + (local_24 + 1) * 0x10 + 0x14) != 0)) {
                  TeamInfoThird::add((TeamInfoThird *)(this + local_2c * 0x48 + 0x1c),
                                     *(CUser **)(local_88 + (local_24 + 1) * 0x10 + 0x14));
                }
              }
              _SendMatchStatePacket(this,3,2);
              _MoveRoom(this,param_1,local_84,local_2c == 0);
            }
            uVar9 = PvP_Room::get_user_seat(param_1,local_28);
            *(undefined4 *)(this + 0xbc) = uVar9;
            (**(code **)(*pWaitingRoomList_ + 4))(pWaitingRoomList_,this);
            *(undefined4 *)(this + 4) = 4;
            _SendMatchStatePacket(this,2,2);
            *(undefined4 *)(this + 0xac) = 0;
            uVar9 = PvP_Room::gen_timer_key(param_1,0x3b);
            uVar5 = PvP_Room::get_index(param_1);
            pTVar6 = (TimerQueue *)G_TimerQueue();
            TimerQueue::InsertTimer(pTVar6,5,uVar5,0x3b,0xb4,uVar9,0);
            PacketGuard::PacketGuard(local_94);
                    /* try { // try from 08564818 to 085648c8 has its CatchHandler @ 085648f1 */
            PvP_Room::make_seat_info(param_1,(char *)local_94,0xffff);
            this_00 = (GameWorld *)G_GameWorld();
            GameWorld::send_all(this_00,local_94);
            for (local_20 = 0; local_20 < 2; local_20 = local_20 + 1) {
              InterfacePacketBuf::clear((InterfacePacketBuf *)local_94);
              InterfacePacketBuf::put_header((InterfacePacketBuf *)local_94,0,0x13d);
              InterfacePacketBuf::put_short
                        ((InterfacePacketBuf *)local_94,*(int *)(this + (local_20 + 0x2c) * 4 + 8));
              InterfacePacketBuf::finalize((InterfacePacketBuf *)local_94,true);
              TeamInfoThird::SendToTeam((TeamInfoThird *)(this + local_20 * 0x48 + 0x1c),local_94);
            }
            uVar9 = 1;
            PacketGuard::~PacketGuard(local_94);
          }
        }
      }
      else {
        *(undefined4 *)(this + 4) = 2;
        _SendMatchStatePacket(this,1,1);
        uVar9 = 0;
      }
    }
    else {
      uVar9 = 0;
    }
  }
  else {
    cMyTrace::cMyTrace(local_80,"virtual bool fair_pvp::CFairMatch::OnMatchRoom(PvP_Room*, int)",
                       0xc8b,0);
    cMyTrace::operator()(local_80,"OnMatchRoom timeout");
    uVar9 = 0;
  }
  return uVar9;
}
```
