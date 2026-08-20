# process

`_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase`

`DisPatcher_SelectDungeon::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_SelectDungeon` | `0x081c8102` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c8102  _ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase
#           DisPatcher_SelectDungeon::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081c8102, 0x081c8e9b]
081c8102 +0x000:  push   %ebp
081c8103 +0x001:  mov    %esp,%ebp
081c8105 +0x003:  push   %esi
081c8106 +0x004:  push   %ebx
081c8107 +0x005:  sub    $0xe0,%esp
081c810d +0x00b:  mov    0x14(%ebp),%eax
081c8110 +0x00e:  mov    %eax,-0x90(%ebp)
081c8116 +0x014:  mov    0x14(%ebp),%eax
081c8119 +0x017:  mov    %eax,0xc(%esp)
081c811d +0x01b:  mov    0x10(%ebp),%eax
081c8120 +0x01e:  mov    %eax,0x8(%esp)
081c8124 +0x022:  mov    0xc(%ebp),%eax
081c8127 +0x025:  mov    %eax,0x4(%esp)
081c812b +0x029:  mov    0x8(%ebp),%eax
081c812e +0x02c:  mov    %eax,(%esp)
081c8131 +0x02f:  call   081c7f32 <_ZN24DisPatcher_SelectDungeon11check_errorEP5CUserR8MSG_BASER9ParamBase>  ; DisPatcher_SelectDungeon::check_error(CUser*, MSG_BASE&, ParamBase&)
081c8136 +0x034:  mov    %eax,%edx
081c8138 +0x036:  mov    -0x90(%ebp),%eax
081c813e +0x03c:  mov    %edx,0x4(%eax)
081c8141 +0x03f:  mov    -0x90(%ebp),%eax
081c8147 +0x045:  mov    0x4(%eax),%eax
081c814a +0x048:  test   %eax,%eax
081c814c +0x04a:  jle    081c8158 <+0x56>
081c814e +0x04c:  mov    $0x0,%ebx
081c8153 +0x051:  jmp    081c8e8f <+0xd8d>
081c8158 +0x056:  mov    -0x90(%ebp),%eax
081c815e +0x05c:  mov    0x4(%eax),%eax
081c8161 +0x05f:  test   %eax,%eax
081c8163 +0x061:  jns    081c819c <+0x9a>
081c8165 +0x063:  mov    0xc(%ebp),%eax
081c8168 +0x066:  mov    %eax,(%esp)
081c816b +0x069:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081c8170 +0x06e:  mov    -0x90(%ebp),%edx
081c8176 +0x074:  mov    0x4(%edx),%edx
081c8179 +0x077:  mov    %eax,0xc(%esp)
081c817d +0x07b:  mov    %edx,0x8(%esp)
081c8181 +0x07f:  movl   $&_ZZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081c8189 +0x087:  movl   $0x1970,(%esp)
081c8190 +0x08e:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c8195 +0x093:  mov    %eax,%ebx
081c8197 +0x095:  jmp    081c8e8f <+0xd8d>
081c819c +0x09a:  call   0822ad44 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3ee>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3ee
081c81a1 +0x09f:  mov    0x10(%ebp),%eax
081c81a4 +0x0a2:  mov    %eax,-0x8c(%ebp)
081c81aa +0x0a8:  mov    0xc(%ebp),%eax
081c81ad +0x0ab:  mov    %eax,(%esp)
081c81b0 +0x0ae:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081c81b5 +0x0b3:  mov    %eax,-0x88(%ebp)
081c81bb +0x0b9:  cmpl   $0x0,-0x88(%ebp)
081c81c2 +0x0c0:  je     081c81de <+0xdc>
081c81c4 +0x0c2:  mov    -0x88(%ebp),%eax
081c81ca +0x0c8:  mov    %eax,(%esp)
081c81cd +0x0cb:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
081c81d2 +0x0d0:  cmp    0xc(%ebp),%eax
081c81d5 +0x0d3:  je     081c81de <+0xdc>
081c81d7 +0x0d5:  mov    $0x1,%eax
081c81dc +0x0da:  jmp    081c81e3 <+0xe1>
081c81de +0x0dc:  mov    $0x0,%eax
081c81e3 +0x0e1:  test   %al,%al
081c81e5 +0x0e3:  je     081c81fe <+0xfc>
081c81e7 +0x0e5:  mov    -0x90(%ebp),%eax
081c81ed +0x0eb:  movl   $0x7fffffff,0x4(%eax)
081c81f4 +0x0f2:  mov    $0x0,%ebx
081c81f9 +0x0f7:  jmp    081c8e8f <+0xd8d>
081c81fe +0x0fc:  mov    -0x8c(%ebp),%eax
081c8204 +0x102:  movzbl 0x11(%eax),%eax
081c8208 +0x106:  cmp    $0x1,%al
081c820a +0x108:  jmp    081c82d5 <+0x1d3>
081c820f +0x10d:  nop
081c8210 +0x10e:  movl   $0x0,-0x78(%ebp)
081c8217 +0x115:  jmp    081c82bc <+0x1ba>
081c821c +0x11a:  mov    -0x78(%ebp),%eax
081c821f +0x11d:  mov    %eax,0x4(%esp)
081c8223 +0x121:  mov    -0x88(%ebp),%eax
081c8229 +0x127:  mov    %eax,(%esp)
081c822c +0x12a:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
081c8231 +0x12f:  mov    %eax,-0x74(%ebp)
081c8234 +0x132:  cmpl   $0x0,-0x74(%ebp)
081c8238 +0x136:  je     081c82b7 <+0x1b5>
081c823a +0x138:  mov    -0x74(%ebp),%eax
081c823d +0x13b:  mov    %eax,(%esp)
081c8240 +0x13e:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081c8245 +0x143:  mov    %eax,0x14(%esp)
081c8249 +0x147:  movl   $"[HackUser] dungeon hack user. (mid:%u)",0x10(%esp)
081c8251 +0x14f:  movl   $0x198a,0xc(%esp)
081c8259 +0x157:  movl   $&_ZZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x8(%esp)
081c8261 +0x15f:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
081c8269 +0x167:  movl   $0x1,(%esp)
081c8270 +0x16e:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081c8275 +0x173:  movl   $0x3,0x8(%esp)
081c827d +0x17b:  mov    -0x74(%ebp),%eax
081c8280 +0x17e:  mov    %eax,0x4(%esp)
081c8284 +0x182:  mov    -0x88(%ebp),%eax
081c828a +0x188:  mov    %eax,(%esp)
081c828d +0x18b:  call   0859c114 <_ZN6CParty10leave_userEP5CUser20ENUM_PARTY_INFO_TYPE>  ; CParty::leave_user(CUser*, ENUM_PARTY_INFO_TYPE)
081c8292 +0x190:  movl   $0x0,0xc(%esp)
081c829a +0x198:  movl   $0x1,0x8(%esp)
081c82a2 +0x1a0:  movl   $0x18,0x4(%esp)
081c82aa +0x1a8:  mov    -0x74(%ebp),%eax
081c82ad +0x1ab:  mov    %eax,(%esp)
081c82b0 +0x1ae:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
081c82b5 +0x1b3:  jmp    081c82b8 <+0x1b6>
081c82b7 +0x1b5:  nop
081c82b8 +0x1b6:  addl   $0x1,-0x78(%ebp)
081c82bc +0x1ba:  cmpl   $0x3,-0x78(%ebp)
081c82c0 +0x1be:  setle  %al
081c82c3 +0x1c1:  test   %al,%al
081c82c5 +0x1c3:  jne    081c821c <+0x11a>
081c82cb +0x1c9:  mov    $0x0,%ebx
081c82d0 +0x1ce:  jmp    081c8e8f <+0xd8d>
081c82d5 +0x1d3:  cmpl   $0x0,-0x88(%ebp)
081c82dc +0x1da:  je     081c82f7 <+0x1f5>
081c82de +0x1dc:  mov    -0x8c(%ebp),%eax
081c82e4 +0x1e2:  movzbl 0x11(%eax),%eax
081c82e8 +0x1e6:  movsbl %al,%edx
081c82eb +0x1e9:  mov    -0x88(%ebp),%eax
081c82f1 +0x1ef:  mov    %edx,0xcd8(%eax)
081c82f7 +0x1f5:  mov    0xc(%ebp),%eax
081c82fa +0x1f8:  mov    %eax,(%esp)
081c82fd +0x1fb:  call   0822f8f6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4fa0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4fa0
081c8302 +0x200:  test   %al,%al
081c8304 +0x202:  je     081c8329 <+0x227>
081c8306 +0x204:  mov    0xc(%ebp),%eax
081c8309 +0x207:  movl   $0x0,0xc(%esp)
081c8311 +0x20f:  movl   $0x0,0x8(%esp)
081c8319 +0x217:  movl   $0x0,0x4(%esp)
081c8321 +0x21f:  mov    %eax,(%esp)
081c8324 +0x222:  call   0822f91a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4fc4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4fc4
081c8329 +0x227:  cmpl   $0x0,-0x88(%ebp)
081c8330 +0x22e:  je     081c85cf <+0x4cd>
081c8336 +0x234:  mov    -0x88(%ebp),%eax
081c833c +0x23a:  mov    %eax,(%esp)
081c833f +0x23d:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
081c8344 +0x242:  mov    %eax,-0x70(%ebp)
081c8347 +0x245:  movl   $0x0,0xc(%esp)
081c834f +0x24d:  movl   $0x19bf,0x8(%esp)
081c8357 +0x255:  movl   $&_ZZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081c835f +0x25d:  lea    -0xa0(%ebp),%eax
081c8365 +0x263:  mov    %eax,(%esp)
081c8368 +0x266:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081c836d +0x26b:  mov    -0x70(%ebp),%eax
081c8370 +0x26e:  mov    %eax,0x8(%esp)
081c8374 +0x272:  movl   $"[DisPatcher_SelectDungeon] partyCount : %d",0x4(%esp)
081c837c +0x27a:  lea    -0xa0(%ebp),%eax
081c8382 +0x280:  mov    %eax,(%esp)
081c8385 +0x283:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081c838a +0x288:  movb   $0x0,-0x6a(%ebp)
081c838e +0x28c:  mov    0xc(%ebp),%eax
081c8391 +0x28f:  mov    %eax,(%esp)
081c8394 +0x292:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
081c8399 +0x297:  mov    %al,-0x69(%ebp)
081c839c +0x29a:  movl   $0x0,0x4(%esp)
081c83a4 +0x2a2:  mov    0xc(%ebp),%eax
081c83a7 +0x2a5:  mov    %eax,(%esp)
081c83aa +0x2a8:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
081c83af +0x2ad:  mov    %eax,-0x68(%ebp)
081c83b2 +0x2b0:  movl   $0x0,-0x64(%ebp)
081c83b9 +0x2b7:  jmp    081c84e3 <+0x3e1>
081c83be +0x2bc:  mov    -0x64(%ebp),%eax
081c83c1 +0x2bf:  mov    %eax,0x4(%esp)
081c83c5 +0x2c3:  mov    -0x88(%ebp),%eax
081c83cb +0x2c9:  mov    %eax,(%esp)
081c83ce +0x2cc:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
081c83d3 +0x2d1:  mov    %eax,-0x60(%ebp)
081c83d6 +0x2d4:  cmpl   $0x0,-0x60(%ebp)
081c83da +0x2d8:  je     081c84df <+0x3dd>
081c83e0 +0x2de:  mov    -0x60(%ebp),%eax
081c83e3 +0x2e1:  movl   $0x0,0xc(%esp)
081c83eb +0x2e9:  movl   $0x0,0x8(%esp)
081c83f3 +0x2f1:  movl   $0x0,0x4(%esp)
081c83fb +0x2f9:  mov    %eax,(%esp)
081c83fe +0x2fc:  call   0822f91a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4fc4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4fc4
081c8403 +0x301:  mov    -0x60(%ebp),%eax
081c8406 +0x304:  mov    %eax,(%esp)
081c8409 +0x307:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
081c840e +0x30c:  mov    %al,-0x59(%ebp)
081c8411 +0x30f:  movl   $0x0,0x4(%esp)
081c8419 +0x317:  mov    -0x60(%ebp),%eax
081c841c +0x31a:  mov    %eax,(%esp)
081c841f +0x31d:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
081c8424 +0x322:  mov    %eax,-0x58(%ebp)
081c8427 +0x325:  movzbl -0x69(%ebp),%eax
081c842b +0x329:  cmp    -0x59(%ebp),%al
081c842e +0x32c:  jne    081c8438 <+0x336>
081c8430 +0x32e:  mov    -0x68(%ebp),%eax
081c8433 +0x331:  cmp    -0x58(%ebp),%eax
081c8436 +0x334:  je     081c8454 <+0x352>
081c8438 +0x336:  mov    -0x88(%ebp),%eax
081c843e +0x33c:  mov    %eax,(%esp)
081c8441 +0x33f:  call   0822d952 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ffc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ffc
081c8446 +0x344:  xor    $0x1,%eax
081c8449 +0x347:  test   %al,%al
081c844b +0x349:  je     081c8454 <+0x352>
081c844d +0x34b:  mov    $0x1,%eax
081c8452 +0x350:  jmp    081c8459 <+0x357>
081c8454 +0x352:  mov    $0x0,%eax
081c8459 +0x357:  test   %al,%al
081c845b +0x359:  je     081c84cc <+0x3ca>
081c845d +0x35b:  movsbl -0x59(%ebp),%esi
081c8461 +0x35f:  movsbl -0x69(%ebp),%ebx
081c8465 +0x363:  mov    -0x60(%ebp),%eax
081c8468 +0x366:  mov    %eax,(%esp)
081c846b +0x369:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081c8470 +0x36e:  movl   $0x0,0x4(%esp)
081c8478 +0x376:  mov    %eax,(%esp)
081c847b +0x379:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
081c8480 +0x37e:  mov    -0x58(%ebp),%edx
081c8483 +0x381:  mov    %edx,0x24(%esp)
081c8487 +0x385:  mov    -0x68(%ebp),%edx
081c848a +0x388:  mov    %edx,0x20(%esp)
081c848e +0x38c:  mov    %esi,0x1c(%esp)
081c8492 +0x390:  mov    %ebx,0x18(%esp)
081c8496 +0x394:  mov    %eax,0x14(%esp)
081c849a +0x398:  movl   $"[HACK_VILL_AREA] m_id : %s, Vill(%d,%d), Area(%d,%d)",0x10(%esp)
081c84a2 +0x3a0:  movl   $0x19df,0xc(%esp)
081c84aa +0x3a8:  movl   $&_ZZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x8(%esp)
081c84b2 +0x3b0:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
081c84ba +0x3b8:  movl   $0x1,(%esp)
081c84c1 +0x3bf:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081c84c6 +0x3c4:  movb   $0x1,-0x6a(%ebp)
081c84ca +0x3c8:  jmp    081c84f4 <+0x3f2>
081c84cc +0x3ca:  movl   $0x0,0x4(%esp)
081c84d4 +0x3d2:  mov    -0x60(%ebp),%eax
081c84d7 +0x3d5:  mov    %eax,(%esp)
081c84da +0x3d8:  call   08230844 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5eee>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5eee
081c84df +0x3dd:  addl   $0x1,-0x64(%ebp)
081c84e3 +0x3e1:  mov    -0x64(%ebp),%eax
081c84e6 +0x3e4:  cmp    -0x70(%ebp),%eax
081c84e9 +0x3e7:  setl   %al
081c84ec +0x3ea:  test   %al,%al
081c84ee +0x3ec:  jne    081c83be <+0x2bc>
081c84f4 +0x3f2:  cmpb   $0x0,-0x6a(%ebp)
081c84f8 +0x3f6:  je     081c85cf <+0x4cd>
081c84fe +0x3fc:  movl   $0x0,-0x54(%ebp)
081c8505 +0x403:  jmp    081c85a9 <+0x4a7>
081c850a +0x408:  mov    -0x54(%ebp),%eax
081c850d +0x40b:  mov    %eax,0x4(%esp)
081c8511 +0x40f:  mov    -0x88(%ebp),%eax
081c8517 +0x415:  mov    %eax,(%esp)
081c851a +0x418:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
081c851f +0x41d:  mov    %eax,-0x50(%ebp)
081c8522 +0x420:  cmpl   $0x0,-0x50(%ebp)
081c8526 +0x424:  je     081c85a5 <+0x4a3>
081c8528 +0x426:  movsbl -0x69(%ebp),%ebx
081c852c +0x42a:  mov    -0x50(%ebp),%eax
081c852f +0x42d:  mov    %eax,(%esp)
081c8532 +0x430:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081c8537 +0x435:  movl   $0x0,0x4(%esp)
081c853f +0x43d:  mov    %eax,(%esp)
081c8542 +0x440:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
081c8547 +0x445:  mov    -0x68(%ebp),%edx
081c854a +0x448:  mov    %edx,0x1c(%esp)
081c854e +0x44c:  mov    %ebx,0x18(%esp)
081c8552 +0x450:  mov    %eax,0x14(%esp)
081c8556 +0x454:  movl   $"[HACK_VILL_AREA] m_id : %s, Vill(%d), Area(%d)",0x10(%esp)
081c855e +0x45c:  movl   $0x19fa,0xc(%esp)
081c8566 +0x464:  movl   $&_ZZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x8(%esp)
081c856e +0x46c:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
081c8576 +0x474:  movl   $0x1,(%esp)
081c857d +0x47b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081c8582 +0x480:  movl   $0x0,0xc(%esp)
081c858a +0x488:  movl   $0x1,0x8(%esp)
081c8592 +0x490:  movl   $0x18,0x4(%esp)
081c859a +0x498:  mov    -0x50(%ebp),%eax
081c859d +0x49b:  mov    %eax,(%esp)
081c85a0 +0x49e:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
081c85a5 +0x4a3:  addl   $0x1,-0x54(%ebp)
081c85a9 +0x4a7:  cmpl   $0x3,-0x54(%ebp)
081c85ad +0x4ab:  setle  %al
081c85b0 +0x4ae:  test   %al,%al
081c85b2 +0x4b0:  jne    081c850a <+0x408>
081c85b8 +0x4b6:  mov    -0x90(%ebp),%eax
081c85be +0x4bc:  movl   $0x7fffffff,0x4(%eax)
081c85c5 +0x4c3:  mov    $0x0,%ebx
081c85ca +0x4c8:  jmp    081c8e8f <+0xd8d>
081c85cf +0x4cd:  movb   $0x1,-0x82(%ebp)
081c85d6 +0x4d4:  mov    -0x8c(%ebp),%eax
081c85dc +0x4da:  movzwl 0xd(%eax),%eax
081c85e0 +0x4de:  cwtl
081c85e1 +0x4df:  cmp    $0x2710,%eax
081c85e6 +0x4e4:  jne    081c85ef <+0x4ed>
081c85e8 +0x4e6:  movb   $0x0,-0x82(%ebp)
081c85ef +0x4ed:  mov    -0x8c(%ebp),%eax
081c85f5 +0x4f3:  movzwl 0xd(%eax),%eax
081c85f9 +0x4f7:  movswl %ax,%ebx
081c85fc +0x4fa:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081c8601 +0x4ff:  mov    %ebx,0x4(%esp)
081c8605 +0x503:  mov    %eax,(%esp)
081c8608 +0x506:  call   0835f9f8 <_ZNK12CDataManager12find_dungeonEi>  ; CDataManager::find_dungeon(int) const
081c860d +0x50b:  mov    %eax,-0x4c(%ebp)
081c8610 +0x50e:  cmpl   $0x0,-0x4c(%ebp)
081c8614 +0x512:  je     081c862b <+0x529>
081c8616 +0x514:  mov    -0x4c(%ebp),%eax
081c8619 +0x517:  movzbl 0x800(%eax),%eax
081c8620 +0x51e:  test   %al,%al
081c8622 +0x520:  je     081c862b <+0x529>
081c8624 +0x522:  movb   $0x0,-0x82(%ebp)
081c862b +0x529:  cmpb   $0x0,-0x82(%ebp)
081c8632 +0x530:  je     081c877e <+0x67c>
081c8638 +0x536:  cmpl   $0x0,-0x88(%ebp)
081c863f +0x53d:  je     081c877e <+0x67c>
081c8645 +0x543:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081c864a +0x548:  mov    0xc(%ebp),%edx
081c864d +0x54b:  mov    %edx,0x4(%esp)
081c8651 +0x54f:  mov    %eax,(%esp)
081c8654 +0x552:  call   086cebe0 <_ZN9GameWorld16GetWorldMapIndexEP5CUser>  ; GameWorld::GetWorldMapIndex(CUser*)
081c8659 +0x557:  mov    %eax,-0x48(%ebp)
081c865c +0x55a:  cmpl   $0x0,-0x48(%ebp)
081c8660 +0x55e:  jle    081c8771 <+0x66f>
081c8666 +0x564:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081c866b +0x569:  lea    0x8780(%eax),%edx
081c8671 +0x56f:  mov    -0x48(%ebp),%eax
081c8674 +0x572:  mov    %eax,0x4(%esp)
081c8678 +0x576:  mov    %edx,(%esp)
081c867b +0x579:  call   083647a2 <_ZNK13CWorldMapList14find_world_mapEi>  ; CWorldMapList::find_world_map(int) const
081c8680 +0x57e:  mov    %eax,-0x44(%ebp)
081c8683 +0x581:  cmpl   $0x0,-0x44(%ebp)
081c8687 +0x585:  jne    081c86a0 <+0x59e>
081c8689 +0x587:  mov    -0x90(%ebp),%eax
081c868f +0x58d:  movl   $0x7fffffff,0x4(%eax)
081c8696 +0x594:  mov    $0x0,%ebx
081c869b +0x599:  jmp    081c8e8f <+0xd8d>
081c86a0 +0x59e:  mov    -0x8c(%ebp),%eax
081c86a6 +0x5a4:  movzwl 0xd(%eax),%eax
081c86aa +0x5a8:  cwtl
081c86ab +0x5a9:  mov    %eax,0x4(%esp)
081c86af +0x5ad:  mov    -0x44(%ebp),%eax
081c86b2 +0x5b0:  mov    %eax,(%esp)
081c86b5 +0x5b3:  call   0822b52c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xbd6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xbd6
081c86ba +0x5b8:  xor    $0x1,%eax
081c86bd +0x5bb:  test   %al,%al
081c86bf +0x5bd:  je     081c877e <+0x67c>
081c86c5 +0x5c3:  movl   $0x0,-0x40(%ebp)
081c86cc +0x5ca:  jmp    081c874b <+0x649>
081c86ce +0x5cc:  mov    -0x40(%ebp),%eax
081c86d1 +0x5cf:  mov    %eax,0x4(%esp)
081c86d5 +0x5d3:  mov    -0x88(%ebp),%eax
081c86db +0x5d9:  mov    %eax,(%esp)
081c86de +0x5dc:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
081c86e3 +0x5e1:  test   %al,%al
081c86e5 +0x5e3:  je     081c8747 <+0x645>
081c86e7 +0x5e5:  mov    -0x40(%ebp),%eax
081c86ea +0x5e8:  mov    %eax,0x4(%esp)
081c86ee +0x5ec:  mov    -0x88(%ebp),%eax
081c86f4 +0x5f2:  mov    %eax,(%esp)
081c86f7 +0x5f5:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
081c86fc +0x5fa:  mov    %eax,%ebx
081c86fe +0x5fc:  mov    -0x40(%ebp),%eax
081c8701 +0x5ff:  mov    %eax,0x4(%esp)
081c8705 +0x603:  mov    -0x88(%ebp),%eax
081c870b +0x609:  mov    %eax,(%esp)
081c870e +0x60c:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
081c8713 +0x611:  mov    %eax,(%esp)
081c8716 +0x614:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081c871b +0x619:  movl   $0x0,0x14(%esp)
081c8723 +0x621:  movl   $0x0,0x10(%esp)
081c872b +0x629:  movl   $0x1,0xc(%esp)
081c8733 +0x631:  movl   $0x1f8,0x8(%esp)
081c873b +0x639:  mov    %ebx,0x4(%esp)
081c873f +0x63d:  mov    %eax,(%esp)
081c8742 +0x640:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081c8747 +0x645:  addl   $0x1,-0x40(%ebp)
081c874b +0x649:  cmpl   $0x3,-0x40(%ebp)
081c874f +0x64d:  setle  %al
081c8752 +0x650:  test   %al,%al
081c8754 +0x652:  jne    081c86ce <+0x5cc>
081c875a +0x658:  mov    -0x90(%ebp),%eax
081c8760 +0x65e:  movl   $0x8,0x8(%eax)
081c8767 +0x665:  mov    $0x0,%ebx
081c876c +0x66a:  jmp    081c8e8f <+0xd8d>
081c8771 +0x66f:  mov    -0x90(%ebp),%eax
081c8777 +0x675:  movl   $0x8,0x8(%eax)
081c877e +0x67c:  movb   $0x0,-0x81(%ebp)
081c8785 +0x683:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081c878a +0x688:  mov    0xc(%ebp),%edx
081c878d +0x68b:  mov    %edx,0x4(%esp)
081c8791 +0x68f:  mov    %eax,(%esp)
081c8794 +0x692:  call   086cebe0 <_ZN9GameWorld16GetWorldMapIndexEP5CUser>  ; GameWorld::GetWorldMapIndex(CUser*)
081c8799 +0x697:  mov    %eax,-0x80(%ebp)
081c879c +0x69a:  cmpl   $0x0,-0x80(%ebp)
081c87a0 +0x69e:  jle    081c87d6 <+0x6d4>
081c87a2 +0x6a0:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081c87a7 +0x6a5:  lea    0x8780(%eax),%edx
081c87ad +0x6ab:  mov    -0x80(%ebp),%eax
081c87b0 +0x6ae:  mov    %eax,0x4(%esp)
081c87b4 +0x6b2:  mov    %edx,(%esp)
081c87b7 +0x6b5:  call   083647a2 <_ZNK13CWorldMapList14find_world_mapEi>  ; CWorldMapList::find_world_map(int) const
081c87bc +0x6ba:  mov    %eax,-0x3c(%ebp)
081c87bf +0x6bd:  cmpl   $0x0,-0x3c(%ebp)
081c87c3 +0x6c1:  je     081c87d6 <+0x6d4>
081c87c5 +0x6c3:  mov    -0x3c(%ebp),%eax
081c87c8 +0x6c6:  mov    %eax,(%esp)
081c87cb +0x6c9:  call   0822b520 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xbca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xbca
081c87d0 +0x6ce:  mov    %al,-0x81(%ebp)
081c87d6 +0x6d4:  mov    -0x8c(%ebp),%eax
081c87dc +0x6da:  movzwl 0xd(%eax),%eax
081c87e0 +0x6de:  movswl %ax,%ebx
081c87e3 +0x6e1:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081c87e8 +0x6e6:  mov    %ebx,0x4(%esp)
081c87ec +0x6ea:  mov    %eax,(%esp)
081c87ef +0x6ed:  call   0835f9f8 <_ZNK12CDataManager12find_dungeonEi>  ; CDataManager::find_dungeon(int) const
081c87f4 +0x6f2:  mov    %eax,-0x7c(%ebp)
081c87f7 +0x6f5:  cmpl   $0x0,-0x7c(%ebp)
081c87fb +0x6f9:  jne    081c8814 <+0x712>
081c87fd +0x6fb:  mov    -0x90(%ebp),%eax
081c8803 +0x701:  movl   $0x7fffffff,0x4(%eax)
081c880a +0x708:  mov    $0x0,%ebx
081c880f +0x70d:  jmp    081c8e8f <+0xd8d>
081c8814 +0x712:  mov    -0x7c(%ebp),%eax
081c8817 +0x715:  mov    %eax,(%esp)
081c881a +0x718:  call   0822b4c0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb6a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb6a
081c881f +0x71d:  cmp    $0x1,%eax
081c8822 +0x720:  sete   %al
081c8825 +0x723:  test   %al,%al
081c8827 +0x725:  je     081c8945 <+0x843>
081c882d +0x72b:  cmpl   $0x0,-0x88(%ebp)
081c8834 +0x732:  jne    081c884d <+0x74b>
081c8836 +0x734:  mov    -0x90(%ebp),%eax
081c883c +0x73a:  movl   $0x7fffffff,0x4(%eax)
081c8843 +0x741:  mov    $0x0,%ebx
081c8848 +0x746:  jmp    081c8e8f <+0xd8d>
081c884d +0x74b:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
081c8852 +0x750:  mov    %eax,(%esp)
081c8855 +0x753:  call   082956c8 <_ZN12CGameManager13getDeathTowerEv>  ; CGameManager::getDeathTower()
081c885a +0x758:  mov    %eax,-0x38(%ebp)
081c885d +0x75b:  cmpl   $0x0,-0x38(%ebp)
081c8861 +0x75f:  jne    081c887a <+0x778>
081c8863 +0x761:  mov    -0x90(%ebp),%eax
081c8869 +0x767:  movl   $0x7fffffff,0x4(%eax)
081c8870 +0x76e:  mov    $0x0,%ebx
081c8875 +0x773:  jmp    081c8e8f <+0xd8d>
081c887a +0x778:  mov    -0x7c(%ebp),%eax
081c887d +0x77b:  mov    %eax,(%esp)
081c8880 +0x77e:  call   0814559a <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1d>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1d
081c8885 +0x783:  mov    %eax,-0x34(%ebp)
081c8888 +0x786:  movl   $0x0,-0x30(%ebp)
081c888f +0x78d:  jmp    081c88d2 <+0x7d0>
081c8891 +0x78f:  mov    -0x30(%ebp),%eax
081c8894 +0x792:  mov    %eax,0x4(%esp)
081c8898 +0x796:  mov    -0x88(%ebp),%eax
081c889e +0x79c:  mov    %eax,(%esp)
081c88a1 +0x79f:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
081c88a6 +0x7a4:  mov    %eax,-0x2c(%ebp)
081c88a9 +0x7a7:  cmpl   $0x0,-0x2c(%ebp)
081c88ad +0x7ab:  je     081c88ce <+0x7cc>
081c88af +0x7ad:  mov    -0x2c(%ebp),%eax
081c88b2 +0x7b0:  mov    %eax,(%esp)
081c88b5 +0x7b3:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
081c88ba +0x7b8:  cmp    -0x34(%ebp),%eax
081c88bd +0x7bb:  setl   %al
081c88c0 +0x7be:  test   %al,%al
081c88c2 +0x7c0:  je     081c88ce <+0x7cc>
081c88c4 +0x7c2:  mov    $0x0,%ebx
081c88c9 +0x7c7:  jmp    081c8e8f <+0xd8d>
081c88ce +0x7cc:  addl   $0x1,-0x30(%ebp)
081c88d2 +0x7d0:  cmpl   $0x3,-0x30(%ebp)
081c88d6 +0x7d4:  setle  %al
081c88d9 +0x7d7:  test   %al,%al
081c88db +0x7d9:  jne    081c8891 <+0x78f>
081c88dd +0x7db:  mov    -0x88(%ebp),%eax
081c88e3 +0x7e1:  mov    %eax,0x4(%esp)
081c88e7 +0x7e5:  mov    -0x38(%ebp),%eax
081c88ea +0x7e8:  mov    %eax,(%esp)
081c88ed +0x7eb:  call   08462a26 <_ZN8WongWork11CDeathTower11attachPartyEP6CParty>  ; WongWork::CDeathTower::attachParty(CParty*)
081c88f2 +0x7f0:  mov    -0x8c(%ebp),%eax
081c88f8 +0x7f6:  movzbl 0x10(%eax),%eax
081c88fc +0x7fa:  movsbl %al,%ecx
081c88ff +0x7fd:  mov    -0x8c(%ebp),%eax
081c8905 +0x803:  movzbl 0xf(%eax),%eax
081c8909 +0x807:  movsbl %al,%edx
081c890c +0x80a:  mov    -0x8c(%ebp),%eax
081c8912 +0x810:  movzwl 0xd(%eax),%eax
081c8916 +0x814:  cwtl
081c8917 +0x815:  mov    %ecx,0xc(%esp)
081c891b +0x819:  mov    %edx,0x8(%esp)
081c891f +0x81d:  mov    %eax,0x4(%esp)
081c8923 +0x821:  mov    -0x38(%ebp),%eax
081c8926 +0x824:  mov    %eax,(%esp)
081c8929 +0x827:  call   0846398e <_ZN8WongWork11CDeathTower15handleStartGameEic17ENUM_DUNGEON_TYPE>  ; WongWork::CDeathTower::handleStartGame(int, char, ENUM_DUNGEON_TYPE)
081c892e +0x82c:  mov    -0x90(%ebp),%eax
081c8934 +0x832:  movl   $0x7fffffff,0x4(%eax)
081c893b +0x839:  mov    $0x0,%ebx
081c8940 +0x83e:  jmp    081c8e8f <+0xd8d>
081c8945 +0x843:  mov    -0x7c(%ebp),%eax
081c8948 +0x846:  mov    %eax,(%esp)
081c894b +0x849:  call   0822b4c0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb6a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb6a
081c8950 +0x84e:  cmp    $0x3,%eax
081c8953 +0x851:  sete   %al
081c8956 +0x854:  test   %al,%al
081c8958 +0x856:  je     081c8a8d <+0x98b>
081c895e +0x85c:  mov    -0x88(%ebp),%eax
081c8964 +0x862:  mov    %eax,(%esp)
081c8967 +0x865:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
081c896c +0x86a:  mov    %eax,-0x28(%ebp)
081c896f +0x86d:  mov    -0x7c(%ebp),%eax
081c8972 +0x870:  mov    %eax,(%esp)
081c8975 +0x873:  call   0822b4b4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb5e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb5e
081c897a +0x878:  movsbl %al,%eax
081c897d +0x87b:  cmp    -0x28(%ebp),%eax
081c8980 +0x87e:  setl   %al
081c8983 +0x881:  test   %al,%al
081c8985 +0x883:  je     081c8a55 <+0x953>
081c898b +0x889:  lea    -0xac(%ebp),%eax
081c8991 +0x88f:  mov    %eax,(%esp)
081c8994 +0x892:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081c8999 +0x897:  lea    -0xac(%ebp),%eax
081c899f +0x89d:  mov    %eax,(%esp)
081c89a2 +0x8a0:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
081c89a7 +0x8a5:  movl   $0x10,0x8(%esp)
081c89af +0x8ad:  movl   $0x1,0x4(%esp)
081c89b7 +0x8b5:  lea    -0xac(%ebp),%eax
081c89bd +0x8bb:  mov    %eax,(%esp)
081c89c0 +0x8be:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081c89c5 +0x8c3:  movl   $0x0,0x4(%esp)
081c89cd +0x8cb:  lea    -0xac(%ebp),%eax
081c89d3 +0x8d1:  mov    %eax,(%esp)
081c89d6 +0x8d4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c89db +0x8d9:  movl   $0xf3,0x4(%esp)
081c89e3 +0x8e1:  lea    -0xac(%ebp),%eax
081c89e9 +0x8e7:  mov    %eax,(%esp)
081c89ec +0x8ea:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081c89f1 +0x8ef:  movl   $0x1,0x4(%esp)
081c89f9 +0x8f7:  lea    -0xac(%ebp),%eax
081c89ff +0x8fd:  mov    %eax,(%esp)
081c8a02 +0x900:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081c8a07 +0x905:  lea    -0xac(%ebp),%eax
081c8a0d +0x90b:  mov    %eax,0x4(%esp)
081c8a11 +0x90f:  mov    -0x88(%ebp),%eax
081c8a17 +0x915:  mov    %eax,(%esp)
081c8a1a +0x918:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
081c8a1f +0x91d:  mov    $0x0,%ebx
081c8a24 +0x922:  lea    -0xac(%ebp),%eax
081c8a2a +0x928:  mov    %eax,(%esp)
081c8a2d +0x92b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081c8a32 +0x930:  jmp    081c8e8f <+0xd8d>
081c8a37 +0x935:  mov    %edx,%ebx
081c8a39 +0x937:  mov    %eax,%esi
081c8a3b +0x939:  lea    -0xac(%ebp),%eax
081c8a41 +0x93f:  mov    %eax,(%esp)
081c8a44 +0x942:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081c8a49 +0x947:  mov    %esi,%eax
081c8a4b +0x949:  mov    %ebx,%edx
081c8a4d +0x94b:  mov    %eax,(%esp)
081c8a50 +0x94e:  call   08ae3750 <_Unwind_Resume>
081c8a55 +0x953:  mov    -0x8c(%ebp),%eax
081c8a5b +0x959:  movzbl 0x10(%eax),%eax
081c8a5f +0x95d:  movsbl %al,%edx
081c8a62 +0x960:  mov    -0x8c(%ebp),%eax
081c8a68 +0x966:  movzwl 0xd(%eax),%eax
081c8a6c +0x96a:  cwtl
081c8a6d +0x96b:  mov    %edx,0x8(%esp)
081c8a71 +0x96f:  mov    %eax,0x4(%esp)
081c8a75 +0x973:  mov    -0x88(%ebp),%eax
081c8a7b +0x979:  mov    %eax,(%esp)
081c8a7e +0x97c:  call   08146722 <_ZN6Global14CBossTowerFunc13SelectDungeonEP6CPartys17ENUM_DUNGEON_TYPE>  ; Global::CBossTowerFunc::SelectDungeon(CParty*, short, ENUM_DUNGEON_TYPE)
081c8a83 +0x981:  mov    $0x0,%ebx
081c8a88 +0x986:  jmp    081c8e8f <+0xd8d>
081c8a8d +0x98b:  mov    -0x7c(%ebp),%eax
081c8a90 +0x98e:  movzbl 0x800(%eax),%eax
081c8a97 +0x995:  test   %al,%al
081c8a99 +0x997:  je     081c8ae5 <+0x9e3>
081c8a9b +0x999:  mov    -0x8c(%ebp),%eax
081c8aa1 +0x99f:  movzbl 0xf(%eax),%eax
081c8aa5 +0x9a3:  movsbl %al,%edx
081c8aa8 +0x9a6:  mov    -0x8c(%ebp),%eax
081c8aae +0x9ac:  movzwl 0xd(%eax),%eax
081c8ab2 +0x9b0:  cwtl
081c8ab3 +0x9b1:  mov    %edx,0x8(%esp)
081c8ab7 +0x9b5:  mov    %eax,0x4(%esp)
081c8abb +0x9b9:  mov    0xc(%ebp),%eax
081c8abe +0x9bc:  mov    %eax,(%esp)
081c8ac1 +0x9bf:  call   0813090e <_ZN12advancealtar7Manager11selectStageEP5CUseriNS_15StageDifficulty1TE>  ; advancealtar::Manager::selectStage(CUser*, int, advancealtar::StageDifficulty::T)
081c8ac6 +0x9c4:  mov    %eax,-0x24(%ebp)
081c8ac9 +0x9c7:  mov    -0x24(%ebp),%eax
081c8acc +0x9ca:  mov    %eax,0x4(%esp)
081c8ad0 +0x9ce:  mov    0xc(%ebp),%eax
081c8ad3 +0x9d1:  mov    %eax,(%esp)
081c8ad6 +0x9d4:  call   081309f0 <_ZN12advancealtar7Manager20procErrorSelectStageEP5CUser10ENUM_ERROR>  ; advancealtar::Manager::procErrorSelectStage(CUser*, ENUM_ERROR)
081c8adb +0x9d9:  mov    $0x0,%ebx
081c8ae0 +0x9de:  jmp    081c8e8f <+0xd8d>
081c8ae5 +0x9e3:  mov    -0x7c(%ebp),%eax
081c8ae8 +0x9e6:  movzbl 0x85c(%eax),%eax
081c8aef +0x9ed:  test   %al,%al
081c8af1 +0x9ef:  je     081c8b77 <+0xa75>
081c8af7 +0x9f5:  movl   $0x0,-0x20(%ebp)
081c8afe +0x9fc:  jmp    081c8b67 <+0xa65>
081c8b00 +0x9fe:  mov    -0x20(%ebp),%eax
081c8b03 +0xa01:  mov    %eax,0x4(%esp)
081c8b07 +0xa05:  mov    -0x88(%ebp),%eax
081c8b0d +0xa0b:  mov    %eax,(%esp)
081c8b10 +0xa0e:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
081c8b15 +0xa13:  test   %al,%al
081c8b17 +0xa15:  je     081c8b63 <+0xa61>
081c8b19 +0xa17:  mov    -0x20(%ebp),%eax
081c8b1c +0xa1a:  mov    %eax,0x4(%esp)
081c8b20 +0xa1e:  mov    -0x88(%ebp),%eax
081c8b26 +0xa24:  mov    %eax,(%esp)
081c8b29 +0xa27:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
081c8b2e +0xa2c:  mov    %eax,(%esp)
081c8b31 +0xa2f:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
081c8b36 +0xa34:  mov    %eax,%ebx
081c8b38 +0xa36:  mov    -0x7c(%ebp),%eax
081c8b3b +0xa39:  mov    %eax,(%esp)
081c8b3e +0xa3c:  call   0814559a <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1d>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1d
081c8b43 +0xa41:  cmp    %eax,%ebx
081c8b45 +0xa43:  setl   %al
081c8b48 +0xa46:  test   %al,%al
081c8b4a +0xa48:  je     081c8b63 <+0xa61>
081c8b4c +0xa4a:  mov    -0x90(%ebp),%eax
081c8b52 +0xa50:  movl   $0xe,0xc(%eax)
081c8b59 +0xa57:  mov    $0x0,%ebx
081c8b5e +0xa5c:  jmp    081c8e8f <+0xd8d>
081c8b63 +0xa61:  addl   $0x1,-0x20(%ebp)
081c8b67 +0xa65:  cmpl   $0x3,-0x20(%ebp)
081c8b6b +0xa69:  setle  %al
081c8b6e +0xa6c:  test   %al,%al
081c8b70 +0xa6e:  jne    081c8b00 <+0x9fe>
081c8b72 +0xa70:  jmp    081c8d21 <+0xc1f>
081c8b77 +0xa75:  mov    -0x7c(%ebp),%eax
081c8b7a +0xa78:  movzbl 0x87a(%eax),%eax
081c8b81 +0xa7f:  test   %al,%al
081c8b83 +0xa81:  je     081c8d21 <+0xc1f>
081c8b89 +0xa87:  mov    -0x8c(%ebp),%eax
081c8b8f +0xa8d:  movzbl 0xf(%eax),%eax
081c8b93 +0xa91:  test   %al,%al
081c8b95 +0xa93:  je     081c8be8 <+0xae6>
081c8b97 +0xa95:  mov    0xc(%ebp),%eax
081c8b9a +0xa98:  mov    %eax,(%esp)
081c8b9d +0xa9b:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081c8ba2 +0xaa0:  movl   $0x0,0x14(%esp)
081c8baa +0xaa8:  movl   $0x0,0x10(%esp)
081c8bb2 +0xab0:  movl   $0x1,0xc(%esp)
081c8bba +0xab8:  movl   $0x1f8,0x8(%esp)
081c8bc2 +0xac0:  mov    0xc(%ebp),%edx
081c8bc5 +0xac3:  mov    %edx,0x4(%esp)
081c8bc9 +0xac7:  mov    %eax,(%esp)
081c8bcc +0xaca:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081c8bd1 +0xacf:  mov    -0x90(%ebp),%eax
081c8bd7 +0xad5:  movl   $0x7fffffff,0x4(%eax)
081c8bde +0xadc:  mov    $0x0,%ebx
081c8be3 +0xae1:  jmp    081c8e8f <+0xd8d>
081c8be8 +0xae6:  cmpl   $0x0,-0x88(%ebp)
081c8bef +0xaed:  je     081c8d21 <+0xc1f>
081c8bf5 +0xaf3:  mov    -0x88(%ebp),%eax
081c8bfb +0xaf9:  mov    %eax,(%esp)
081c8bfe +0xafc:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
081c8c03 +0xb01:  mov    %eax,-0x1c(%ebp)
081c8c06 +0xb04:  mov    &_ZN10GlobalData19s_revengeDungeonMgrE,%eax
081c8c0b +0xb09:  mov    %eax,(%esp)
081c8c0e +0xb0c:  call   08234ff6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa6a0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa6a0
081c8c13 +0xb11:  xor    $0x1,%eax
081c8c16 +0xb14:  test   %al,%al
081c8c18 +0xb16:  je     081c8c31 <+0xb2f>
081c8c1a +0xb18:  mov    -0x90(%ebp),%eax
081c8c20 +0xb1e:  movl   $0x15,0xc(%eax)
081c8c27 +0xb25:  mov    $0x0,%ebx
081c8c2c +0xb2a:  jmp    081c8e8f <+0xd8d>
081c8c31 +0xb2f:  mov    -0x7c(%ebp),%eax
081c8c34 +0xb32:  movzbl 0x879(%eax),%eax
081c8c3b +0xb39:  movsbl %al,%eax
081c8c3e +0xb3c:  cmp    -0x1c(%ebp),%eax
081c8c41 +0xb3f:  jl     081c8c55 <+0xb53>
081c8c43 +0xb41:  mov    -0x7c(%ebp),%eax
081c8c46 +0xb44:  movzbl 0x878(%eax),%eax
081c8c4d +0xb4b:  movsbl %al,%eax
081c8c50 +0xb4e:  cmp    -0x1c(%ebp),%eax
081c8c53 +0xb51:  jle    081c8c6c <+0xb6a>
081c8c55 +0xb53:  mov    -0x90(%ebp),%eax
081c8c5b +0xb59:  movl   $0xab,0xc(%eax)
081c8c62 +0xb60:  mov    $0x0,%ebx
081c8c67 +0xb65:  jmp    081c8e8f <+0xd8d>
081c8c6c +0xb6a:  movl   $0x0,-0x18(%ebp)
081c8c73 +0xb71:  jmp    081c8d12 <+0xc10>
081c8c78 +0xb76:  mov    -0x18(%ebp),%eax
081c8c7b +0xb79:  mov    %eax,0x4(%esp)
081c8c7f +0xb7d:  mov    -0x88(%ebp),%eax
081c8c85 +0xb83:  mov    %eax,(%esp)
081c8c88 +0xb86:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
081c8c8d +0xb8b:  test   %al,%al
081c8c8f +0xb8d:  je     081c8d0e <+0xc0c>
081c8c91 +0xb8f:  mov    -0x18(%ebp),%eax
081c8c94 +0xb92:  mov    %eax,0x4(%esp)
081c8c98 +0xb96:  mov    -0x88(%ebp),%eax
081c8c9e +0xb9c:  mov    %eax,(%esp)
081c8ca1 +0xb9f:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
081c8ca6 +0xba4:  mov    %eax,(%esp)
081c8ca9 +0xba7:  call   0822f78a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4e34>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4e34
081c8cae +0xbac:  mov    %al,-0x11(%ebp)
081c8cb1 +0xbaf:  cmpb   $0x0,-0x11(%ebp)
081c8cb5 +0xbb3:  je     081c8cc6 <+0xbc4>
081c8cb7 +0xbb5:  mov    -0x7c(%ebp),%eax
081c8cba +0xbb8:  movzbl 0x87b(%eax),%eax
081c8cc1 +0xbbf:  cmp    -0x11(%ebp),%al
081c8cc4 +0xbc2:  jae    081c8d0e <+0xc0c>
081c8cc6 +0xbc4:  mov    -0x18(%ebp),%eax
081c8cc9 +0xbc7:  mov    %eax,0x4(%esp)
081c8ccd +0xbcb:  mov    -0x88(%ebp),%eax
081c8cd3 +0xbd1:  mov    %eax,(%esp)
081c8cd6 +0xbd4:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
081c8cdb +0xbd9:  movl   $0x0,0x4(%esp)
081c8ce3 +0xbe1:  mov    %eax,(%esp)
081c8ce6 +0xbe4:  call   0822f762 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4e0c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4e0c
081c8ceb +0xbe9:  mov    -0x90(%ebp),%eax
081c8cf1 +0xbef:  movl   $0xad,0xc(%eax)
081c8cf8 +0xbf6:  mov    -0x90(%ebp),%eax
081c8cfe +0xbfc:  mov    -0x18(%ebp),%edx
081c8d01 +0xbff:  mov    %edx,0x14(%eax)
081c8d04 +0xc02:  mov    $0x0,%ebx
081c8d09 +0xc07:  jmp    081c8e8f <+0xd8d>
081c8d0e +0xc0c:  addl   $0x1,-0x18(%ebp)
081c8d12 +0xc10:  cmpl   $0x3,-0x18(%ebp)
081c8d16 +0xc14:  setle  %al
081c8d19 +0xc17:  test   %al,%al
081c8d1b +0xc19:  jne    081c8c78 <+0xb76>
081c8d21 +0xc1f:  cmpl   $0x0,-0x88(%ebp)
081c8d28 +0xc26:  je     081c8e8a <+0xd88>
081c8d2e +0xc2c:  movzbl -0x81(%ebp),%eax
081c8d35 +0xc33:  xor    $0x1,%eax
081c8d38 +0xc36:  test   %al,%al
081c8d3a +0xc38:  je     081c8d82 <+0xc80>
081c8d3c +0xc3a:  mov    -0x88(%ebp),%eax
081c8d42 +0xc40:  mov    0xcd8(%eax),%eax
081c8d48 +0xc46:  cmp    $0x1,%eax
081c8d4b +0xc49:  je     081c8d82 <+0xc80>
081c8d4d +0xc4b:  mov    -0x88(%ebp),%eax
081c8d53 +0xc51:  mov    %eax,0x4(%esp)
081c8d57 +0xc55:  mov    0x8(%ebp),%eax
081c8d5a +0xc58:  mov    %eax,(%esp)
081c8d5d +0xc5b:  call   081c9172 <_ZN24DisPatcher_SelectDungeon15checkBlueMarbleEP6CParty>  ; DisPatcher_SelectDungeon::checkBlueMarble(CParty*)
081c8d62 +0xc60:  xor    $0x1,%eax
081c8d65 +0xc63:  test   %al,%al
081c8d67 +0xc65:  je     081c8d82 <+0xc80>
081c8d69 +0xc67:  mov    -0x7c(%ebp),%eax
081c8d6c +0xc6a:  mov    %eax,(%esp)
081c8d6f +0xc6d:  call   0822b4de <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb88>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb88
081c8d74 +0xc72:  xor    $0x1,%eax
081c8d77 +0xc75:  test   %al,%al
081c8d79 +0xc77:  je     081c8d82 <+0xc80>
081c8d7b +0xc79:  mov    $0x1,%eax
081c8d80 +0xc7e:  jmp    081c8d87 <+0xc85>
081c8d82 +0xc80:  mov    $0x0,%eax
081c8d87 +0xc85:  test   %al,%al
081c8d89 +0xc87:  je     081c8dd5 <+0xcd3>
081c8d8b +0xc89:  mov    -0x88(%ebp),%eax
081c8d91 +0xc8f:  mov    %eax,(%esp)
081c8d94 +0xc92:  call   0859d5e8 <_ZN6CParty18CheckMemberFatigueEv>  ; CParty::CheckMemberFatigue()
081c8d99 +0xc97:  mov    %eax,-0xc(%ebp)
081c8d9c +0xc9a:  cmpl   $0x0,-0xc(%ebp)
081c8da0 +0xc9e:  jle    081c8dd5 <+0xcd3>
081c8da2 +0xca0:  mov    -0x90(%ebp),%eax
081c8da8 +0xca6:  movl   $0x16,0xc(%eax)
081c8daf +0xcad:  mov    -0x90(%ebp),%eax
081c8db5 +0xcb3:  movl   $0x16,0x8(%eax)
081c8dbc +0xcba:  mov    -0xc(%ebp),%eax
081c8dbf +0xcbd:  lea    -0x1(%eax),%edx
081c8dc2 +0xcc0:  mov    -0x90(%ebp),%eax
081c8dc8 +0xcc6:  mov    %edx,0x14(%eax)
081c8dcb +0xcc9:  mov    $0x0,%ebx
081c8dd0 +0xcce:  jmp    081c8e8f <+0xd8d>
081c8dd5 +0xcd3:  mov    -0x8c(%ebp),%eax
081c8ddb +0xcd9:  movzbl 0x10(%eax),%eax
081c8ddf +0xcdd:  movsbl %al,%ecx
081c8de2 +0xce0:  mov    -0x8c(%ebp),%eax
081c8de8 +0xce6:  movzbl 0xf(%eax),%eax
081c8dec +0xcea:  movsbl %al,%edx
081c8def +0xced:  mov    -0x8c(%ebp),%eax
081c8df5 +0xcf3:  movzwl 0xd(%eax),%eax
081c8df9 +0xcf7:  cwtl
081c8dfa +0xcf8:  mov    %ecx,0xc(%esp)
081c8dfe +0xcfc:  mov    %edx,0x8(%esp)
081c8e02 +0xd00:  mov    %eax,0x4(%esp)
081c8e06 +0xd04:  mov    -0x88(%ebp),%eax
081c8e0c +0xd0a:  mov    %eax,(%esp)
081c8e0f +0xd0d:  call   085a0954 <_ZN6CParty13dungeon_startEic17ENUM_DUNGEON_TYPE>  ; CParty::dungeon_start(int, char, ENUM_DUNGEON_TYPE)
081c8e14 +0xd12:  mov    %eax,-0x10(%ebp)
081c8e17 +0xd15:  cmpl   $0x0,-0x10(%ebp)
081c8e1b +0xd19:  jle    081c8e37 <+0xd35>
081c8e1d +0xd1b:  mov    -0x10(%ebp),%edx
081c8e20 +0xd1e:  mov    -0x90(%ebp),%eax
081c8e26 +0xd24:  mov    %edx,0xc(%eax)
081c8e29 +0xd27:  mov    -0x10(%ebp),%edx
081c8e2c +0xd2a:  mov    -0x90(%ebp),%eax
081c8e32 +0xd30:  mov    %edx,0x8(%eax)
081c8e35 +0xd33:  jmp    081c8e8a <+0xd88>
081c8e37 +0xd35:  mov    0xc(%ebp),%eax
081c8e3a +0xd38:  add    $0xe0,%eax
081c8e3f +0xd3d:  mov    %eax,(%esp)
081c8e42 +0xd40:  call   08236de0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc48a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc48a
081c8e47 +0xd45:  test   %al,%al
081c8e49 +0xd47:  sete   %al
081c8e4c +0xd4a:  test   %al,%al
081c8e4e +0xd4c:  je     081c8e8a <+0xd88>
081c8e50 +0xd4e:  mov    0xc(%ebp),%eax
081c8e53 +0xd51:  mov    %eax,(%esp)
081c8e56 +0xd54:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081c8e5b +0xd59:  movl   $0x0,0x14(%esp)
081c8e63 +0xd61:  movl   $0x0,0x10(%esp)
081c8e6b +0xd69:  movl   $0x1,0xc(%esp)
081c8e73 +0xd71:  movl   $0x326,0x8(%esp)
081c8e7b +0xd79:  mov    0xc(%ebp),%edx
081c8e7e +0xd7c:  mov    %edx,0x4(%esp)
081c8e82 +0xd80:  mov    %eax,(%esp)
081c8e85 +0xd83:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081c8e8a +0xd88:  mov    $0x0,%ebx
081c8e8f +0xd8d:  mov    %ebx,%eax
081c8e91 +0xd8f:  add    $0xe0,%esp
081c8e97 +0xd95:  pop    %ebx
081c8e98 +0xd96:  pop    %esi
081c8e99 +0xd97:  pop    %ebp
081c8e9a +0xd98:  ret
081c8e9b +0xd99:  nop
```

## 反编译 C

```c
// DisPatcher_SelectDungeon::process @ 0x81c8102

/* DisPatcher_SelectDungeon::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
DisPatcher_SelectDungeon::process
          (DisPatcher_SelectDungeon *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  CUser *pCVar5;
  GameWorld *pGVar6;
  CHackAnalyzer *pCVar7;
  CGameManager *this_00;
  CUserCharacInfo *pCVar8;
  int iVar9;
  int iVar10;
  PacketGuard local_b0 [12];
  cMyTrace local_a4 [16];
  ParamBase *local_94;
  MSG_BASE *local_90;
  CParty *local_8c;
  char local_86;
  char local_85;
  int local_84;
  CDungeon *local_80;
  int local_74;
  char local_6e;
  char local_6d;
  int local_6c;
  int local_68;
  CUserCharacInfo *local_64;
  char local_5d;
  int local_5c;
  int local_58;
  CUser *local_54;
  int local_50;
  int local_4c;
  uint local_48;
  int local_44;
  CWorldMap *local_40;
  CDeathTower *local_3c;
  int local_38;
  int local_34;
  CUserCharacInfo *local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  CDungeon local_15;
  int local_14;
  int local_10;
  
  local_94 = param_3;
  uVar3 = check_error((CUser *)this,(MSG_BASE *)param_1,(ParamBase *)param_2);
  *(undefined4 *)(local_94 + 4) = uVar3;
  if (*(int *)(local_94 + 4) < 1) {
    if (*(int *)(local_94 + 4) < 0) {
      uVar4 = CUser::get_acc_id(param_1);
      uVar3 = LineFunc(0x1970,
                       "virtual int DisPatcher_SelectDungeon::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(local_94 + 4),uVar4);
    }
    else {
      IsLightServer();
      local_90 = param_2;
      local_8c = (CParty *)CUser::GetParty(param_1);
      if ((local_8c == (CParty *)0x0) ||
         (pCVar5 = (CUser *)CParty::getManager(local_8c), pCVar5 == param_1)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        *(undefined4 *)(local_94 + 4) = 0x7fffffff;
        uVar3 = 0;
      }
      else {
        if (local_8c != (CParty *)0x0) {
          *(int *)(local_8c + 0xcd8) = (int)(char)local_90[0x11];
        }
        cVar2 = CUserCharacInfo::isDisguiseCharac((CUserCharacInfo *)param_1);
        if (cVar2 != '\0') {
          CUserCharacInfo::setDisguiseCharac((CUserCharacInfo *)param_1,false,'\0',0);
        }
        if (local_8c != (CParty *)0x0) {
          local_74 = CParty::get_member_count(local_8c);
          cMyTrace::cMyTrace(local_a4,
                             "virtual int DisPatcher_SelectDungeon::process(CUser*, MSG_BASE&, ParamBase&)"
                             ,0x19bf,0);
          cMyTrace::operator()(local_a4,"[DisPatcher_SelectDungeon] partyCount : %d",local_74);
          local_6e = '\0';
          local_6d = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
          local_6c = CUser::get_area(param_1,false);
          for (local_68 = 0; local_68 < local_74; local_68 = local_68 + 1) {
            local_64 = (CUserCharacInfo *)CParty::get_user(local_8c,local_68);
            if (local_64 != (CUserCharacInfo *)0x0) {
              CUserCharacInfo::setDisguiseCharac(local_64,false,'\0',0);
              local_5d = CUserCharacInfo::getCurCharacVill(local_64);
              local_5c = CUser::get_area((CUser *)local_64,false);
              if (((local_6d == local_5d) && (local_6c == local_5c)) ||
                 (cVar2 = CParty::is_quick_party(local_8c), cVar2 == '\x01')) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if (bVar1) {
                iVar9 = (int)local_5d;
                iVar10 = (int)local_6d;
                uVar4 = CUser::get_acc_id((CUser *)local_64);
                uVar3 = NumberToString(uVar4,0);
                LogManager::logFormat
                          (1,"PacketDispatcher_Impl_1.cpp",
                           "virtual int DisPatcher_SelectDungeon::process(CUser*, MSG_BASE&, ParamBase&)"
                           ,0x19df,"[HACK_VILL_AREA] m_id : %s, Vill(%d,%d), Area(%d,%d)",uVar3,
                           iVar10,iVar9,local_6c,local_5c);
                local_6e = '\x01';
                break;
              }
              CUser::SetDeleteEventDungeonInvitation((CUser *)local_64,false);
            }
          }
          if (local_6e != '\0') {
            for (local_58 = 0; local_58 < 4; local_58 = local_58 + 1) {
              local_54 = (CUser *)CParty::get_user(local_8c,local_58);
              if (local_54 != (CUser *)0x0) {
                iVar10 = (int)local_6d;
                uVar4 = CUser::get_acc_id(local_54);
                uVar3 = NumberToString(uVar4,0);
                LogManager::logFormat
                          (1,"PacketDispatcher_Impl_1.cpp",
                           "virtual int DisPatcher_SelectDungeon::process(CUser*, MSG_BASE&, ParamBase&)"
                           ,0x19fa,"[HACK_VILL_AREA] m_id : %s, Vill(%d), Area(%d)",uVar3,iVar10,
                           local_6c);
                CUser::DisConnSig(local_54,0x18,1,0);
              }
            }
            *(undefined4 *)(local_94 + 4) = 0x7fffffff;
            return 0;
          }
        }
        local_86 = *(short *)(local_90 + 0xd) != 10000;
        iVar10 = G_CDataManager();
        local_50 = CDataManager::find_dungeon(iVar10);
        if ((local_50 != 0) && (*(char *)(local_50 + 0x800) != '\0')) {
          local_86 = '\0';
        }
        if ((local_86 != '\0') && (local_8c != (CParty *)0x0)) {
          pGVar6 = (GameWorld *)G_GameWorld();
          local_4c = GameWorld::GetWorldMapIndex(pGVar6,param_1);
          if (local_4c < 1) {
            *(undefined4 *)(local_94 + 8) = 8;
          }
          else {
            iVar10 = G_CDataManager();
            local_48 = CWorldMapList::find_world_map(iVar10 + 0x8780);
            if (local_48 == 0) {
              *(undefined4 *)(local_94 + 4) = 0x7fffffff;
              return 0;
            }
            cVar2 = CWorldMap::hasDungeon(local_48);
            if (cVar2 != '\x01') {
              for (local_44 = 0; local_44 < 4; local_44 = local_44 + 1) {
                cVar2 = CParty::checkValidUser(local_8c,local_44);
                if (cVar2 != '\0') {
                  uVar3 = CParty::get_user(local_8c,local_44);
                  pCVar5 = (CUser *)CParty::get_user(local_8c,local_44);
                  pCVar7 = (CHackAnalyzer *)CUser::getHackAnalyzer(pCVar5);
                  WongWork::CHackAnalyzer::addServerHackCnt(pCVar7,uVar3,0x1f8,1,0,0);
                }
              }
              *(undefined4 *)(local_94 + 8) = 8;
              return 0;
            }
          }
        }
        local_85 = '\0';
        pGVar6 = (GameWorld *)G_GameWorld();
        local_84 = GameWorld::GetWorldMapIndex(pGVar6,param_1);
        if (0 < local_84) {
          iVar10 = G_CDataManager();
          local_40 = (CWorldMap *)CWorldMapList::find_world_map(iVar10 + 0x8780);
          if (local_40 != (CWorldMap *)0x0) {
            local_85 = CWorldMap::hasDeathTower(local_40);
          }
        }
        iVar10 = G_CDataManager();
        local_80 = (CDungeon *)CDataManager::find_dungeon(iVar10);
        if (local_80 == (CDungeon *)0x0) {
          *(undefined4 *)(local_94 + 4) = 0x7fffffff;
          uVar3 = 0;
        }
        else {
          iVar10 = CDungeon::getDungeonKind(local_80);
          if (iVar10 == 1) {
            if (local_8c == (CParty *)0x0) {
              *(undefined4 *)(local_94 + 4) = 0x7fffffff;
              uVar3 = 0;
            }
            else {
              this_00 = (CGameManager *)G_CGameManager();
              local_3c = (CDeathTower *)CGameManager::getDeathTower(this_00);
              if (local_3c == (CDeathTower *)0x0) {
                *(undefined4 *)(local_94 + 4) = 0x7fffffff;
                uVar3 = 0;
              }
              else {
                local_38 = CDungeon::get_min_level(local_80);
                for (local_34 = 0; local_34 < 4; local_34 = local_34 + 1) {
                  local_30 = (CUserCharacInfo *)CParty::get_user(local_8c,local_34);
                  if ((local_30 != (CUserCharacInfo *)0x0) &&
                     (iVar10 = CUserCharacInfo::get_charac_level(local_30), iVar10 < local_38)) {
                    return 0;
                  }
                }
                WongWork::CDeathTower::attachParty(local_3c,local_8c);
                WongWork::CDeathTower::handleStartGame
                          (local_3c,(int)*(short *)(local_90 + 0xd),(int)(char)local_90[0xf],
                           (int)(char)local_90[0x10]);
                *(undefined4 *)(local_94 + 4) = 0x7fffffff;
                uVar3 = 0;
              }
            }
          }
          else {
            iVar10 = CDungeon::getDungeonKind(local_80);
            if (iVar10 == 3) {
              local_2c = CParty::get_member_count(local_8c);
              cVar2 = CDungeon::get_limit_party_count(local_80);
              if (cVar2 < local_2c) {
                PacketGuard::PacketGuard(local_b0);
                    /* try { // try from 081c89a2 to 081c8a1e has its CatchHandler @ 081c8a37 */
                InterfacePacketBuf::clear((InterfacePacketBuf *)local_b0);
                InterfacePacketBuf::put_header((InterfacePacketBuf *)local_b0,1,0x10);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,0);
                InterfacePacketBuf::put_int((InterfacePacketBuf *)local_b0,0xf3);
                InterfacePacketBuf::finalize((InterfacePacketBuf *)local_b0,true);
                CParty::send_to_party(local_8c,local_b0);
                uVar3 = 0;
                PacketGuard::~PacketGuard(local_b0);
              }
              else {
                Global::CBossTowerFunc::SelectDungeon
                          (local_8c,(int)*(short *)(local_90 + 0xd),(int)(char)local_90[0x10]);
                uVar3 = 0;
              }
            }
            else if (local_80[0x800] == (CDungeon)0x0) {
              if (local_80[0x85c] == (CDungeon)0x0) {
                if (local_80[0x87a] != (CDungeon)0x0) {
                  if (local_90[0xf] != (MSG_BASE)0x0) {
                    pCVar7 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                    WongWork::CHackAnalyzer::addServerHackCnt(pCVar7,param_1,0x1f8,1,0,0);
                    *(undefined4 *)(local_94 + 4) = 0x7fffffff;
                    return 0;
                  }
                  if (local_8c != (CParty *)0x0) {
                    local_20 = CParty::get_member_count(local_8c);
                    cVar2 = village_attacked::CRevengeDungeon::IsOpenRevengeDungeon
                                      (GlobalData::s_revengeDungeonMgr);
                    if (cVar2 != '\x01') {
                      *(undefined4 *)(local_94 + 0xc) = 0x15;
                      return 0;
                    }
                    if (((char)local_80[0x879] < local_20) || (local_20 < (char)local_80[0x878])) {
                      *(undefined4 *)(local_94 + 0xc) = 0xab;
                      return 0;
                    }
                    for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
                      cVar2 = CParty::checkValidUser(local_8c,local_1c);
                      if (cVar2 != '\0') {
                        pCVar8 = (CUserCharacInfo *)CParty::get_user(local_8c,local_1c);
                        local_15 = (CDungeon)CUserCharacInfo::GetCurRevengeDungeonCount(pCVar8);
                        if ((local_15 == (CDungeon)0x0) || ((byte)local_80[0x87b] < (byte)local_15))
                        {
                          pCVar8 = (CUserCharacInfo *)CParty::get_user(local_8c,local_1c);
                          CUserCharacInfo::SetCurRevengeDungeonCount(pCVar8,'\0');
                          *(undefined4 *)(local_94 + 0xc) = 0xad;
                          *(int *)(local_94 + 0x14) = local_1c;
                          return 0;
                        }
                      }
                    }
                  }
                }
              }
              else {
                for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
                  cVar2 = CParty::checkValidUser(local_8c,local_24);
                  if (cVar2 != '\0') {
                    pCVar8 = (CUserCharacInfo *)CParty::get_user(local_8c,local_24);
                    iVar10 = CUserCharacInfo::get_charac_level(pCVar8);
                    iVar9 = CDungeon::get_min_level(local_80);
                    if (iVar10 < iVar9) {
                      *(undefined4 *)(local_94 + 0xc) = 0xe;
                      return 0;
                    }
                  }
                }
              }
              if (local_8c != (CParty *)0x0) {
                if ((((local_85 == '\x01') || (*(int *)(local_8c + 0xcd8) == 1)) ||
                    (cVar2 = checkBlueMarble(this,local_8c), cVar2 == '\x01')) ||
                   (cVar2 = CDungeon::isNoFatigueDungeon(local_80), cVar2 == '\x01')) {
                  bVar1 = false;
                }
                else {
                  bVar1 = true;
                }
                if ((bVar1) && (local_10 = CParty::CheckMemberFatigue(local_8c), 0 < local_10)) {
                  *(undefined4 *)(local_94 + 0xc) = 0x16;
                  *(undefined4 *)(local_94 + 8) = 0x16;
                  *(int *)(local_94 + 0x14) = local_10 + -1;
                  return 0;
                }
                local_14 = CParty::dungeon_start
                                     (local_8c,(int)*(short *)(local_90 + 0xd),
                                      (int)(char)local_90[0xf],(int)(char)local_90[0x10]);
                if (local_14 < 1) {
                  cVar2 = CNetwork<4096,450000>::get_nat_type
                                    ((CNetwork<4096,450000> *)(param_1 + 0xe0));
                  if (cVar2 == '\0') {
                    pCVar7 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                    WongWork::CHackAnalyzer::addServerHackCnt(pCVar7,param_1,0x326,1,0,0);
                  }
                }
                else {
                  *(int *)(local_94 + 0xc) = local_14;
                  *(int *)(local_94 + 8) = local_14;
                }
              }
              uVar3 = 0;
            }
            else {
              local_28 = advancealtar::Manager::selectStage
                                   (param_1,(int)*(short *)(local_90 + 0xd),(int)(char)local_90[0xf]
                                   );
              advancealtar::Manager::procErrorSelectStage(param_1,local_28);
              uVar3 = 0;
            }
          }
        }
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
