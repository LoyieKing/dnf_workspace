# dispatch_sig

`_ZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_AuctionBidding::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_AuctionBidding` | `0x0821522e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0821522e  _ZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_AuctionBidding::dispatch_sig(CUser*, PacketBuf&)
# range [0x0821522e, 0x082159fb]
0821522e +0x000:  push   %ebp
0821522f +0x001:  mov    %esp,%ebp
08215231 +0x003:  push   %esi
08215232 +0x004:  push   %ebx
08215233 +0x005:  sub    $0xf0,%esp
08215239 +0x00b:  lea    -0x31(%ebp),%eax
0821523c +0x00e:  mov    %eax,0x4(%esp)
08215240 +0x012:  mov    0x10(%ebp),%eax
08215243 +0x015:  mov    %eax,(%esp)
08215246 +0x018:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
0821524b +0x01d:  xor    $0x1,%eax
0821524e +0x020:  test   %al,%al
08215250 +0x022:  je     0821527b <+0x4d>
08215252 +0x024:  movl   $0x0,0xc(%esp)
0821525a +0x02c:  movl   $0x0,0x8(%esp)
08215262 +0x034:  movl   $&_ZZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821526a +0x03c:  movl   $0xc554,(%esp)
08215271 +0x043:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08215276 +0x048:  jmp    082159f2 <+0x7c4>
0821527b +0x04d:  movzbl -0x31(%ebp),%eax
0821527f +0x051:  cmp    $0x1,%al
08215281 +0x053:  jbe    082152ac <+0x7e>
08215283 +0x055:  movl   $0x0,0xc(%esp)
0821528b +0x05d:  movl   $0x0,0x8(%esp)
08215293 +0x065:  movl   $&_ZZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821529b +0x06d:  movl   $0xc557,(%esp)
082152a2 +0x074:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082152a7 +0x079:  jmp    082159f2 <+0x7c4>
082152ac +0x07e:  movzbl -0x31(%ebp),%eax
082152b0 +0x082:  movzbl %al,%eax
082152b3 +0x085:  mov    %eax,-0x20(%ebp)
082152b6 +0x088:  cmpl   $0x1,-0x20(%ebp)
082152ba +0x08c:  jne    082152d3 <+0xa5>
082152bc +0x08e:  mov    0xc(%ebp),%eax
082152bf +0x091:  mov    %eax,(%esp)
082152c2 +0x094:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
082152c7 +0x099:  cmp    $0x13,%eax
082152ca +0x09c:  jg     082152d3 <+0xa5>
082152cc +0x09e:  mov    $0x1,%eax
082152d1 +0x0a3:  jmp    082152d8 <+0xaa>
082152d3 +0x0a5:  mov    $0x0,%eax
082152d8 +0x0aa:  test   %al,%al
082152da +0x0ac:  je     08215308 <+0xda>
082152dc +0x0ae:  mov    -0x20(%ebp),%eax
082152df +0x0b1:  mov    %eax,0xc(%esp)
082152e3 +0x0b5:  movl   $0x74,0x8(%esp)
082152eb +0x0bd:  movl   $0xbc,0x4(%esp)
082152f3 +0x0c5:  mov    0xc(%ebp),%eax
082152f6 +0x0c8:  mov    %eax,(%esp)
082152f9 +0x0cb:  call   0867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PAY_TYPE)
082152fe +0x0d0:  mov    $0x0,%eax
08215303 +0x0d5:  jmp    082159f2 <+0x7c4>
08215308 +0x0da:  mov    -0x20(%ebp),%eax
0821530b +0x0dd:  mov    %eax,0x8(%esp)
0821530f +0x0e1:  movl   $0xbc,0x4(%esp)
08215317 +0x0e9:  mov    0xc(%ebp),%eax
0821531a +0x0ec:  mov    %eax,(%esp)
0821531d +0x0ef:  call   08680a96 <_ZN5CUser15AuctionPreCheckE14ENUM_CMDPACKET8PAY_TYPE>  ; CUser::AuctionPreCheck(ENUM_CMDPACKET, PAY_TYPE)
08215322 +0x0f4:  mov    %eax,-0x1c(%ebp)
08215325 +0x0f7:  cmpl   $0x0,-0x1c(%ebp)
08215329 +0x0fb:  js     08215333 <+0x105>
0821532b +0x0fd:  mov    -0x1c(%ebp),%eax
0821532e +0x100:  jmp    082159f2 <+0x7c4>
08215333 +0x105:  call   081625e6 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x854>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x854
08215338 +0x10a:  movl   $0x5,0xc(%esp)
08215340 +0x112:  movl   $0x1,0x8(%esp)
08215348 +0x11a:  mov    0xc(%ebp),%edx
0821534b +0x11d:  mov    %edx,0x4(%esp)
0821534f +0x121:  mov    %eax,(%esp)
08215352 +0x124:  call   0816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>  ; ServiceRestrictManager::isRestricted(CUser*, RestrictCategory::Enum, int)
08215357 +0x129:  test   %al,%al
08215359 +0x12b:  je     08215380 <+0x152>
0821535b +0x12d:  movl   $0xd1,0x8(%esp)
08215363 +0x135:  movl   $0xbc,0x4(%esp)
0821536b +0x13d:  mov    0xc(%ebp),%eax
0821536e +0x140:  mov    %eax,(%esp)
08215371 +0x143:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08215376 +0x148:  mov    $0x0,%eax
0821537b +0x14d:  jmp    082159f2 <+0x7c4>
08215380 +0x152:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
08215385 +0x157:  movl   $0x34,0x8(%esp)
0821538d +0x15f:  mov    0xc(%ebp),%edx
08215390 +0x162:  mov    %edx,0x4(%esp)
08215394 +0x166:  mov    %eax,(%esp)
08215397 +0x169:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
0821539c +0x16e:  mov    %eax,-0x18(%ebp)
0821539f +0x171:  cmpl   $0x0,-0x18(%ebp)
082153a3 +0x175:  je     082153d3 <+0x1a5>
082153a5 +0x177:  mov    -0x18(%ebp),%eax
082153a8 +0x17a:  movzbl %al,%eax
082153ab +0x17d:  mov    -0x20(%ebp),%edx
082153ae +0x180:  mov    %edx,0xc(%esp)
082153b2 +0x184:  mov    %eax,0x8(%esp)
082153b6 +0x188:  movl   $0xbc,0x4(%esp)
082153be +0x190:  mov    0xc(%ebp),%eax
082153c1 +0x193:  mov    %eax,(%esp)
082153c4 +0x196:  call   0867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PAY_TYPE)
082153c9 +0x19b:  mov    $0x0,%eax
082153ce +0x1a0:  jmp    082159f2 <+0x7c4>
082153d3 +0x1a5:  cmpl   $0x1,-0x20(%ebp)
082153d7 +0x1a9:  jne    0821561e <+0x3f0>
082153dd +0x1af:  lea    -0x44(%ebp),%eax
082153e0 +0x1b2:  mov    %eax,0x4(%esp)
082153e4 +0x1b6:  mov    0x10(%ebp),%eax
082153e7 +0x1b9:  mov    %eax,(%esp)
082153ea +0x1bc:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
082153ef +0x1c1:  xor    $0x1,%eax
082153f2 +0x1c4:  test   %al,%al
082153f4 +0x1c6:  je     0821541f <+0x1f1>
082153f6 +0x1c8:  movl   $0x0,0xc(%esp)
082153fe +0x1d0:  movl   $0x0,0x8(%esp)
08215406 +0x1d8:  movl   $&_ZZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821540e +0x1e0:  movl   $0xc5a9,(%esp)
08215415 +0x1e7:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821541a +0x1ec:  jmp    082159f2 <+0x7c4>
0821541f +0x1f1:  mov    0xc(%ebp),%eax
08215422 +0x1f4:  mov    %eax,(%esp)
08215425 +0x1f7:  call   080fdf7a <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x2a6>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x2a6
0821542a +0x1fc:  mov    -0x44(%ebp),%edx
0821542d +0x1ff:  cmp    %edx,%eax
0821542f +0x201:  setb   %al
08215432 +0x204:  test   %al,%al
08215434 +0x206:  je     08215462 <+0x234>
08215436 +0x208:  mov    -0x20(%ebp),%eax
08215439 +0x20b:  mov    %eax,0xc(%esp)
0821543d +0x20f:  movl   $0x90,0x8(%esp)
08215445 +0x217:  movl   $0xbc,0x4(%esp)
0821544d +0x21f:  mov    0xc(%ebp),%eax
08215450 +0x222:  mov    %eax,(%esp)
08215453 +0x225:  call   0867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PAY_TYPE)
08215458 +0x22a:  mov    $0x0,%eax
0821545d +0x22f:  jmp    082159f2 <+0x7c4>
08215462 +0x234:  mov    0xc(%ebp),%eax
08215465 +0x237:  mov    %eax,(%esp)
08215468 +0x23a:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0821546d +0x23f:  mov    %eax,%ebx
0821546f +0x241:  call   08231f20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x75ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x75ca
08215474 +0x246:  mov    %ebx,0x4(%esp)
08215478 +0x24a:  mov    %eax,(%esp)
0821547b +0x24d:  call   082151b8 <_ZN14CPrePayInfoMgr14FindPrePayInfoEi>  ; CPrePayInfoMgr::FindPrePayInfo(int)
08215480 +0x252:  test   %eax,%eax
08215482 +0x254:  jne    08215493 <+0x265>
08215484 +0x256:  mov    0xc(%ebp),%eax
08215487 +0x259:  mov    %eax,(%esp)
0821548a +0x25c:  call   08692a24 <_ZN5CUser13GetBuyingGoldEv>  ; CUser::GetBuyingGold()
0821548f +0x261:  test   %al,%al
08215491 +0x263:  je     0821549a <+0x26c>
08215493 +0x265:  mov    $0x1,%eax
08215498 +0x26a:  jmp    0821549f <+0x271>
0821549a +0x26c:  mov    $0x0,%eax
0821549f +0x271:  test   %al,%al
082154a1 +0x273:  je     082154cf <+0x2a1>
082154a3 +0x275:  mov    -0x20(%ebp),%eax
082154a6 +0x278:  mov    %eax,0xc(%esp)
082154aa +0x27c:  movl   $0x9e,0x8(%esp)
082154b2 +0x284:  movl   $0xbc,0x4(%esp)
082154ba +0x28c:  mov    0xc(%ebp),%eax
082154bd +0x28f:  mov    %eax,(%esp)
082154c0 +0x292:  call   0867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PAY_TYPE)
082154c5 +0x297:  mov    $0x0,%eax
082154ca +0x29c:  jmp    082159f2 <+0x7c4>
082154cf +0x2a1:  lea    -0x78(%ebp),%eax
082154d2 +0x2a4:  add    $0x4,%eax
082154d5 +0x2a7:  movl   $0x8,0x8(%esp)
082154dd +0x2af:  mov    %eax,0x4(%esp)
082154e1 +0x2b3:  mov    0x10(%ebp),%eax
082154e4 +0x2b6:  mov    %eax,(%esp)
082154e7 +0x2b9:  call   0858d3b2 <_ZN9PacketBuf10get_binaryEPci>  ; PacketBuf::get_binary(char*, int)
082154ec +0x2be:  xor    $0x1,%eax
082154ef +0x2c1:  test   %al,%al
082154f1 +0x2c3:  je     0821551c <+0x2ee>
082154f3 +0x2c5:  movl   $0x0,0xc(%esp)
082154fb +0x2cd:  movl   $0x0,0x8(%esp)
08215503 +0x2d5:  movl   $&_ZZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821550b +0x2dd:  movl   $0xc5bb,(%esp)
08215512 +0x2e4:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08215517 +0x2e9:  jmp    082159f2 <+0x7c4>
0821551c +0x2ee:  mov    -0x44(%ebp),%eax
0821551f +0x2f1:  mov    %eax,-0x78(%ebp)
08215522 +0x2f4:  movl   $0x0,-0x48(%ebp)
08215529 +0x2fb:  lea    -0x48(%ebp),%eax
0821552c +0x2fe:  mov    %eax,0x4(%esp)
08215530 +0x302:  mov    0x10(%ebp),%eax
08215533 +0x305:  mov    %eax,(%esp)
08215536 +0x308:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
0821553b +0x30d:  xor    $0x1,%eax
0821553e +0x310:  test   %al,%al
08215540 +0x312:  je     0821556b <+0x33d>
08215542 +0x314:  movl   $0x0,0xc(%esp)
0821554a +0x31c:  movl   $0x0,0x8(%esp)
08215552 +0x324:  movl   $&_ZZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821555a +0x32c:  movl   $0xc5c1,(%esp)
08215561 +0x333:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08215566 +0x338:  jmp    082159f2 <+0x7c4>
0821556b +0x33d:  lea    -0xe2(%ebp),%eax
08215571 +0x343:  mov    %eax,(%esp)
08215574 +0x346:  call   0822ebd8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4282>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4282
08215579 +0x34b:  mov    0xc(%ebp),%eax
0821557c +0x34e:  mov    %eax,(%esp)
0821557f +0x351:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08215584 +0x356:  mov    %eax,-0xd0(%ebp)
0821558a +0x35c:  mov    0xc(%ebp),%eax
0821558d +0x35f:  mov    %eax,(%esp)
08215590 +0x362:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08215595 +0x367:  mov    %eax,-0xc4(%ebp)
0821559b +0x36d:  mov    0xc(%ebp),%eax
0821559e +0x370:  mov    %eax,(%esp)
082155a1 +0x373:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
082155a6 +0x378:  add    $0x4,%eax
082155a9 +0x37b:  movl   $0xd,0x8(%esp)
082155b1 +0x383:  mov    %eax,0x4(%esp)
082155b5 +0x387:  lea    -0xe2(%ebp),%eax
082155bb +0x38d:  add    $0x22,%eax
082155be +0x390:  mov    %eax,(%esp)
082155c1 +0x393:  call   0807d8d0 <_init+0x1c8>
082155c6 +0x398:  mov    -0x74(%ebp),%eax
082155c9 +0x39b:  mov    -0x70(%ebp),%edx
082155cc +0x39e:  mov    %eax,-0xcc(%ebp)
082155d2 +0x3a4:  mov    %edx,-0xc8(%ebp)
082155d8 +0x3aa:  mov    -0x44(%ebp),%eax
082155db +0x3ad:  mov    %eax,-0xb3(%ebp)
082155e1 +0x3b3:  mov    -0x48(%ebp),%eax
082155e4 +0x3b6:  mov    %eax,-0xaf(%ebp)
082155ea +0x3bc:  mov    &_ZN10GlobalData20s_cera_auction_proxyE,%eax
082155ef +0x3c1:  lea    -0xe2(%ebp),%edx
082155f5 +0x3c7:  mov    %edx,0x4(%esp)
082155f9 +0x3cb:  mov    %eax,(%esp)
082155fc +0x3ce:  call   082f7c2c <_ZN23CCeraAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE>  ; CCeraAuctionServerProxy::SendPacket(nsl::PACKET_HEADER*)
08215601 +0x3d3:  movl   $0x1,0x4(%esp)
08215609 +0x3db:  mov    0xc(%ebp),%eax
0821560c +0x3de:  mov    %eax,(%esp)
0821560f +0x3e1:  call   08692a08 <_ZN5CUser13SetBuyingGoldEb>  ; CUser::SetBuyingGold(bool)
08215614 +0x3e6:  mov    $0x0,%eax
08215619 +0x3eb:  jmp    082159f2 <+0x7c4>
0821561e +0x3f0:  lea    -0xab(%ebp),%eax
08215624 +0x3f6:  mov    %eax,(%esp)
08215627 +0x3f9:  call   0822e62c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3cd6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3cd6
0821562c +0x3fe:  mov    0xc(%ebp),%eax
0821562f +0x401:  mov    %eax,(%esp)
08215632 +0x404:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08215637 +0x409:  mov    %eax,-0x99(%ebp)
0821563d +0x40f:  mov    0xc(%ebp),%eax
08215640 +0x412:  mov    %eax,(%esp)
08215643 +0x415:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08215648 +0x41a:  mov    %eax,-0x95(%ebp)
0821564e +0x420:  mov    0xc(%ebp),%eax
08215651 +0x423:  mov    %eax,(%esp)
08215654 +0x426:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08215659 +0x42b:  add    $0x4,%eax
0821565c +0x42e:  movl   $0xd,0x8(%esp)
08215664 +0x436:  mov    %eax,0x4(%esp)
08215668 +0x43a:  lea    -0xab(%ebp),%eax
0821566e +0x440:  add    $0x1a,%eax
08215671 +0x443:  mov    %eax,(%esp)
08215674 +0x446:  call   0807d8d0 <_init+0x1c8>
08215679 +0x44b:  lea    -0xab(%ebp),%eax
0821567f +0x451:  add    $0x27,%eax
08215682 +0x454:  mov    %eax,0x4(%esp)
08215686 +0x458:  mov    0x10(%ebp),%eax
08215689 +0x45b:  mov    %eax,(%esp)
0821568c +0x45e:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
08215691 +0x463:  xor    $0x1,%eax
08215694 +0x466:  test   %al,%al
08215696 +0x468:  je     082156c1 <+0x493>
08215698 +0x46a:  movl   $0x0,0xc(%esp)
082156a0 +0x472:  movl   $0x0,0x8(%esp)
082156a8 +0x47a:  movl   $&_ZZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082156b0 +0x482:  movl   $0xc642,(%esp)
082156b7 +0x489:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082156bc +0x48e:  jmp    082159f2 <+0x7c4>
082156c1 +0x493:  lea    -0xab(%ebp),%eax
082156c7 +0x499:  add    $0x2b,%eax
082156ca +0x49c:  movl   $0x8,0x8(%esp)
082156d2 +0x4a4:  mov    %eax,0x4(%esp)
082156d6 +0x4a8:  mov    0x10(%ebp),%eax
082156d9 +0x4ab:  mov    %eax,(%esp)
082156dc +0x4ae:  call   0858d3b2 <_ZN9PacketBuf10get_binaryEPci>  ; PacketBuf::get_binary(char*, int)
082156e1 +0x4b3:  xor    $0x1,%eax
082156e4 +0x4b6:  test   %al,%al
082156e6 +0x4b8:  je     08215711 <+0x4e3>
082156e8 +0x4ba:  movl   $0x0,0xc(%esp)
082156f0 +0x4c2:  movl   $0x0,0x8(%esp)
082156f8 +0x4ca:  movl   $&_ZZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08215700 +0x4d2:  movl   $0xc643,(%esp)
08215707 +0x4d9:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821570c +0x4de:  jmp    082159f2 <+0x7c4>
08215711 +0x4e3:  movl   $0x0,-0x3e(%ebp)
08215718 +0x4ea:  movl   $0x0,-0x3a(%ebp)
0821571f +0x4f1:  movl   $0x0,-0x36(%ebp)
08215726 +0x4f8:  movb   $0x0,-0x32(%ebp)
0821572a +0x4fc:  movl   $0xd,0x8(%esp)
08215732 +0x504:  lea    -0x3e(%ebp),%eax
08215735 +0x507:  mov    %eax,0x4(%esp)
08215739 +0x50b:  mov    0x10(%ebp),%eax
0821573c +0x50e:  mov    %eax,(%esp)
0821573f +0x511:  call   0858d3b2 <_ZN9PacketBuf10get_binaryEPci>  ; PacketBuf::get_binary(char*, int)
08215744 +0x516:  xor    $0x1,%eax
08215747 +0x519:  test   %al,%al
08215749 +0x51b:  je     08215774 <+0x546>
0821574b +0x51d:  movl   $0x0,0xc(%esp)
08215753 +0x525:  movl   $0x0,0x8(%esp)
0821575b +0x52d:  movl   $&_ZZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08215763 +0x535:  movl   $0xc648,(%esp)
0821576a +0x53c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821576f +0x541:  jmp    082159f2 <+0x7c4>
08215774 +0x546:  mov    0xc(%ebp),%eax
08215777 +0x549:  mov    %eax,(%esp)
0821577a +0x54c:  call   0817a188 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x206>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x206
0821577f +0x551:  mov    -0x84(%ebp),%edx
08215785 +0x557:  cmp    %edx,%eax
08215787 +0x559:  setl   %al
0821578a +0x55c:  test   %al,%al
0821578c +0x55e:  je     082157ba <+0x58c>
0821578e +0x560:  mov    -0x20(%ebp),%eax
08215791 +0x563:  mov    %eax,0xc(%esp)
08215795 +0x567:  movl   $0x90,0x8(%esp)
0821579d +0x56f:  movl   $0xbc,0x4(%esp)
082157a5 +0x577:  mov    0xc(%ebp),%eax
082157a8 +0x57a:  mov    %eax,(%esp)
082157ab +0x57d:  call   0867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PAY_TYPE)
082157b0 +0x582:  mov    $0x0,%eax
082157b5 +0x587:  jmp    082159f2 <+0x7c4>
082157ba +0x58c:  mov    0xc(%ebp),%eax
082157bd +0x58f:  mov    %eax,(%esp)
082157c0 +0x592:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
082157c5 +0x597:  mov    %eax,-0x14(%ebp)
082157c8 +0x59a:  mov    -0x84(%ebp),%eax
082157ce +0x5a0:  movl   $0x1,0xc(%esp)
082157d6 +0x5a8:  movl   $0x1a,0x8(%esp)
082157de +0x5b0:  mov    %eax,0x4(%esp)
082157e2 +0x5b4:  mov    -0x14(%ebp),%eax
082157e5 +0x5b7:  mov    %eax,(%esp)
082157e8 +0x5ba:  call   084ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>  ; CInventory::use_money(int, eMoneySubReason, bool)
082157ed +0x5bf:  xor    $0x1,%eax
082157f0 +0x5c2:  test   %al,%al
082157f2 +0x5c4:  je     08215820 <+0x5f2>
082157f4 +0x5c6:  mov    -0x20(%ebp),%eax
082157f7 +0x5c9:  mov    %eax,0xc(%esp)
082157fb +0x5cd:  movl   $0x93,0x8(%esp)
08215803 +0x5d5:  movl   $0xbc,0x4(%esp)
0821580b +0x5dd:  mov    0xc(%ebp),%eax
0821580e +0x5e0:  mov    %eax,(%esp)
08215811 +0x5e3:  call   0867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PAY_TYPE)
08215816 +0x5e8:  mov    $0x0,%eax
0821581b +0x5ed:  jmp    082159f2 <+0x7c4>
08215820 +0x5f2:  mov    0xc(%ebp),%eax
08215823 +0x5f5:  mov    %eax,(%esp)
08215826 +0x5f8:  call   086504d8 <_ZN5CUser13SaveMoneyCoinEv>  ; CUser::SaveMoneyCoin()
0821582b +0x5fd:  mov    &_ZN10GlobalData15s_auction_proxyE,%eax
08215830 +0x602:  lea    -0xab(%ebp),%edx
08215836 +0x608:  mov    %edx,0x4(%esp)
0821583a +0x60c:  mov    %eax,(%esp)
0821583d +0x60f:  call   082f7b1c <_ZN19CAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE>  ; CAuctionServerProxy::SendPacket(nsl::PACKET_HEADER*)
08215842 +0x614:  mov    -0x84(%ebp),%eax
08215848 +0x61a:  cmp    $0x1387,%eax
0821584d +0x61f:  jle    08215964 <+0x736>
08215853 +0x625:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08215858 +0x62a:  movl   $0xc678,0x8(%esp)
08215860 +0x632:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
08215868 +0x63a:  mov    %eax,(%esp)
0821586b +0x63d:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08215870 +0x642:  movl   $0x1,0x8(%esp)
08215878 +0x64a:  mov    %eax,0x4(%esp)
0821587c +0x64e:  lea    -0x50(%ebp),%eax
0821587f +0x651:  mov    %eax,(%esp)
08215882 +0x654:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08215887 +0x659:  lea    -0x50(%ebp),%eax
0821588a +0x65c:  mov    %eax,(%esp)
0821588d +0x65f:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08215892 +0x664:  movl   $0x309,0x4(%esp)
0821589a +0x66c:  mov    %eax,(%esp)
0821589d +0x66f:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
082158a2 +0x674:  mov    0xc(%ebp),%eax
082158a5 +0x677:  mov    %eax,(%esp)
082158a8 +0x67a:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
082158ad +0x67f:  mov    %eax,%ebx
082158af +0x681:  lea    -0x50(%ebp),%eax
082158b2 +0x684:  mov    %eax,(%esp)
082158b5 +0x687:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
082158ba +0x68c:  mov    %ebx,0x4(%esp)
082158be +0x690:  mov    %eax,(%esp)
082158c1 +0x693:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
082158c6 +0x698:  lea    -0x50(%ebp),%eax
082158c9 +0x69b:  mov    %eax,(%esp)
082158cc +0x69e:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
082158d1 +0x6a3:  mov    %eax,(%esp)
082158d4 +0x6a6:  call   08237b96 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd240>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd240
082158d9 +0x6ab:  mov    %eax,-0x10(%ebp)
082158dc +0x6ae:  movl   $0x28,0x8(%esp)
082158e4 +0x6b6:  movl   $0x0,0x4(%esp)
082158ec +0x6be:  mov    -0x10(%ebp),%eax
082158ef +0x6c1:  mov    %eax,(%esp)
082158f2 +0x6c4:  call   0807dcc0 <_init+0x5b8>
082158f7 +0x6c9:  mov    -0x84(%ebp),%edx
082158fd +0x6cf:  mov    -0x10(%ebp),%eax
08215900 +0x6d2:  mov    %edx,0x4(%eax)
08215903 +0x6d5:  mov    -0x10(%ebp),%eax
08215906 +0x6d8:  lea    0x8(%eax),%edx
08215909 +0x6db:  movl   $0xd,0x8(%esp)
08215911 +0x6e3:  lea    -0x3e(%ebp),%eax
08215914 +0x6e6:  mov    %eax,0x4(%esp)
08215918 +0x6ea:  mov    %edx,(%esp)
0821591b +0x6ed:  call   0807d8d0 <_init+0x1c8>
08215920 +0x6f2:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08215925 +0x6f7:  lea    -0x50(%ebp),%edx
08215928 +0x6fa:  mov    %edx,0x8(%esp)
0821592c +0x6fe:  movl   $0x2,0x4(%esp)
08215934 +0x706:  mov    %eax,(%esp)
08215937 +0x709:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0821593c +0x70e:  jmp    08215959 <+0x72b>
0821593e +0x710:  mov    %edx,%ebx
08215940 +0x712:  mov    %eax,%esi
08215942 +0x714:  lea    -0x50(%ebp),%eax
08215945 +0x717:  mov    %eax,(%esp)
08215948 +0x71a:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0821594d +0x71f:  mov    %esi,%eax
0821594f +0x721:  mov    %ebx,%edx
08215951 +0x723:  mov    %eax,(%esp)
08215954 +0x726:  call   08ae3750 <_Unwind_Resume>
08215959 +0x72b:  lea    -0x50(%ebp),%eax
0821595c +0x72e:  mov    %eax,(%esp)
0821595f +0x731:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08215964 +0x736:  movl   $0x0,-0xc(%ebp)
0821596b +0x73d:  jmp    082159e2 <+0x7b4>
0821596d +0x73f:  mov    -0xc(%ebp),%eax
08215970 +0x742:  mov    &_ZL6gmList(,%eax,4),%eax
08215977 +0x749:  mov    %eax,%ebx
08215979 +0x74b:  mov    0xc(%ebp),%eax
0821597c +0x74e:  mov    %eax,(%esp)
0821597f +0x751:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08215984 +0x756:  cmp    %eax,%ebx
08215986 +0x758:  sete   %al
08215989 +0x75b:  test   %al,%al
0821598b +0x75d:  je     082159de <+0x7b0>
0821598d +0x75f:  mov    0xc(%ebp),%eax
08215990 +0x762:  mov    %eax,(%esp)
08215993 +0x765:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08215998 +0x76a:  mov    %eax,%ebx
0821599a +0x76c:  movl   $0x0,0xc(%esp)
082159a2 +0x774:  movl   $0xc686,0x8(%esp)
082159aa +0x77c:  movl   $&_ZZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082159b2 +0x784:  lea    -0x30(%ebp),%eax
082159b5 +0x787:  mov    %eax,(%esp)
082159b8 +0x78a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082159bd +0x78f:  mov    %ebx,0xc(%esp)
082159c1 +0x793:  movl   $"REQ AuctionBidding",0x8(%esp)
082159c9 +0x79b:  movl   $"Trace Auction Delay, %s(%d)",0x4(%esp)
082159d1 +0x7a3:  lea    -0x30(%ebp),%eax
082159d4 +0x7a6:  mov    %eax,(%esp)
082159d7 +0x7a9:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082159dc +0x7ae:  jmp    082159ed <+0x7bf>
082159de +0x7b0:  addl   $0x1,-0xc(%ebp)
082159e2 +0x7b4:  cmpl   $0x4,-0xc(%ebp)
082159e6 +0x7b8:  setle  %al
082159e9 +0x7bb:  test   %al,%al
082159eb +0x7bd:  jne    0821596d <+0x73f>
082159ed +0x7bf:  mov    $0x0,%eax
082159f2 +0x7c4:  add    $0xf0,%esp
082159f8 +0x7ca:  pop    %ebx
082159f9 +0x7cb:  pop    %esi
082159fa +0x7cc:  pop    %ebp
082159fb +0x7cd:  ret
```

## 反编译 C

```c
// Dispatcher_AuctionBidding::dispatch_sig @ 0x821522e

/* Dispatcher_AuctionBidding::dispatch_sig(CUser*, PacketBuf&) */

int __thiscall
Dispatcher_AuctionBidding::dispatch_sig
          (Dispatcher_AuctionBidding *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ServiceRestrictManager *pSVar4;
  uint uVar5;
  Stream *pSVar6;
  CStreamGuard *pCVar7;
  int iVar8;
  undefined4 uVar9;
  PCK_AUCTION_ASK_OWNER_IS_VIP_GP local_e6 [18];
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  char acStack_c4 [13];
  uint local_b7;
  int local_b3;
  PCK_AUCTION_BIDDING_GA local_af [18];
  undefined4 local_9d;
  undefined4 local_99;
  char acStack_95 [13];
  int local_88;
  char acStack_84 [8];
  uint local_7c;
  undefined4 local_78;
  undefined4 local_74;
  CStreamGuard local_54 [8];
  int local_4c;
  uint local_48;
  char local_42 [14];
  cMyTrace local_34 [16];
  uint local_24;
  int local_20;
  uint local_1c;
  CInventory *local_18;
  SIG_AUCTION_MONEY_SUB *local_14;
  int local_10;
  
  cVar2 = PacketBuf::get_byte(param_2,(uchar *)(local_42 + 0xd));
  if (cVar2 == '\x01') {
    if ((byte)local_42[0xd] < 2) {
      local_24 = (uint)(byte)local_42[0xd];
      if ((local_24 == 1) &&
         (iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1), iVar3 < 0x14)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        CUser::SendCmdErrorPacket(param_1,0xbc,0x74,local_24);
        local_20 = 0;
      }
      else {
        local_20 = CUser::AuctionPreCheck(param_1,0xbc,local_24);
        if (local_20 < 0) {
          pSVar4 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
          cVar2 = ServiceRestrictManager::isRestricted(pSVar4,param_1,1,5);
          if (cVar2 == '\0') {
            local_1c = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x34)
            ;
            if (local_1c == 0) {
              if (local_24 == 1) {
                cVar2 = PacketBuf::get_int(param_2,&local_48);
                if (cVar2 == '\x01') {
                  uVar5 = CUser::GetCera(param_1);
                  if (uVar5 < local_48) {
                    CUser::SendCmdErrorPacket(param_1,0xbc,0x90,local_24);
                    local_20 = 0;
                  }
                  else {
                    CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                    iVar3 = G_CPrePayInfoMgr();
                    iVar3 = CPrePayInfoMgr::FindPrePayInfo(iVar3);
                    if ((iVar3 == 0) && (cVar2 = CUser::GetBuyingGold(param_1), cVar2 == '\0')) {
                      bVar1 = false;
                    }
                    else {
                      bVar1 = true;
                    }
                    if (bVar1) {
                      CUser::SendCmdErrorPacket(param_1,0xbc,0x9e,local_24);
                      local_20 = 0;
                    }
                    else {
                      cVar2 = PacketBuf::get_binary(param_2,(char *)&local_78,8);
                      if (cVar2 == '\x01') {
                        local_7c = local_48;
                        local_4c = 0;
                        cVar2 = PacketBuf::get_int(param_2,&local_4c);
                        if (cVar2 == '\x01') {
                          PCK_AUCTION_ASK_OWNER_IS_VIP_GP::PCK_AUCTION_ASK_OWNER_IS_VIP_GP(local_e6)
                          ;
                          local_d4 = CUser::GetUID(param_1);
                          local_c8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                          iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
                          strncpy(acStack_c4,(char *)(iVar3 + 4),0xd);
                          local_d0 = local_78;
                          local_cc = local_74;
                          local_b7 = local_48;
                          local_b3 = local_4c;
                          CCeraAuctionServerProxy::SendPacket
                                    (GlobalData::s_cera_auction_proxy,(PACKET_HEADER *)local_e6);
                          CUser::SetBuyingGold(param_1,true);
                          local_20 = 0;
                        }
                        else {
                          local_20 = LineFunc(0xc5c1,
                                              "virtual int Dispatcher_AuctionBidding::dispatch_sig(CUser*, PacketBuf&)"
                                              ,0,0);
                        }
                      }
                      else {
                        local_20 = LineFunc(0xc5bb,
                                            "virtual int Dispatcher_AuctionBidding::dispatch_sig(CUser*, PacketBuf&)"
                                            ,0,0);
                      }
                    }
                  }
                }
                else {
                  local_20 = LineFunc(0xc5a9,
                                      "virtual int Dispatcher_AuctionBidding::dispatch_sig(CUser*, PacketBuf&)"
                                      ,0,0);
                }
              }
              else {
                PCK_AUCTION_BIDDING_GA::PCK_AUCTION_BIDDING_GA(local_af);
                local_9d = CUser::GetUID(param_1);
                local_99 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
                strncpy(acStack_95,(char *)(iVar3 + 4),0xd);
                cVar2 = PacketBuf::get_int(param_2,&local_88);
                if (cVar2 == '\x01') {
                  cVar2 = PacketBuf::get_binary(param_2,acStack_84,8);
                  if (cVar2 == '\x01') {
                    local_42[0] = '\0';
                    local_42[1] = '\0';
                    local_42[2] = '\0';
                    local_42[3] = '\0';
                    local_42[4] = '\0';
                    local_42[5] = '\0';
                    local_42[6] = '\0';
                    local_42[7] = '\0';
                    local_42[8] = '\0';
                    local_42[9] = '\0';
                    local_42[10] = '\0';
                    local_42[0xb] = '\0';
                    local_42[0xc] = 0;
                    cVar2 = PacketBuf::get_binary(param_2,local_42,0xd);
                    if (cVar2 == '\x01') {
                      iVar3 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_1);
                      if (iVar3 < local_88) {
                        CUser::SendCmdErrorPacket(param_1,0xbc,0x90,local_24);
                        local_20 = 0;
                      }
                      else {
                        local_18 = (CInventory *)
                                   CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                        cVar2 = CInventory::use_money(local_18,local_88,0x1a,1);
                        if (cVar2 == '\x01') {
                          CUser::SaveMoneyCoin(param_1);
                          CAuctionServerProxy::SendPacket
                                    (GlobalData::s_auction_proxy,(PACKET_HEADER *)local_af);
                          if (4999 < local_88) {
                            pSVar6 = (Stream *)
                                     StreamPool::Acquire(GlobalData::s_stream_pool,
                                                         "PacketDispatcher_Impl_1.cpp",0xc678);
                            CStreamGuard::CStreamGuard(local_54,pSVar6,true);
                            pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_54);
                    /* try { // try from 0821589d to 0821593b has its CatchHandler @ 0821593e */
                            CStreamGuard::operator<<(pCVar7,0x309);
                            iVar3 = CUser::GetUID(param_1);
                            pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_54);
                            CStreamGuard::operator<<(pCVar7,iVar3);
                            pCVar7 = (CStreamGuard *)CStreamGuard::operator->(local_54);
                            local_14 = CStreamGuard::GetInBuffer<SIG_AUCTION_MONEY_SUB>(pCVar7);
                            memset(local_14,0,0x28);
                            *(int *)(local_14 + 4) = local_88;
                            strncpy((char *)(local_14 + 8),local_42,0xd);
                            MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_54);
                            CStreamGuard::~CStreamGuard(local_54);
                          }
                          for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
                            iVar3 = *(int *)(gmList + local_10 * 4);
                            iVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                            if (iVar3 == iVar8) {
                              uVar9 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                              cMyTrace::cMyTrace(local_34,
                                                 "virtual int Dispatcher_AuctionBidding::dispatch_sig(CUser*, PacketBuf&)"
                                                 ,0xc686,0);
                              cMyTrace::operator()
                                        (local_34,"Trace Auction Delay, %s(%d)","REQ AuctionBidding"
                                         ,uVar9);
                              break;
                            }
                          }
                          local_20 = 0;
                        }
                        else {
                          CUser::SendCmdErrorPacket(param_1,0xbc,0x93,local_24);
                          local_20 = 0;
                        }
                      }
                    }
                    else {
                      local_20 = LineFunc(0xc648,
                                          "virtual int Dispatcher_AuctionBidding::dispatch_sig(CUser*, PacketBuf&)"
                                          ,0,0);
                    }
                  }
                  else {
                    local_20 = LineFunc(0xc643,
                                        "virtual int Dispatcher_AuctionBidding::dispatch_sig(CUser*, PacketBuf&)"
                                        ,0,0);
                  }
                }
                else {
                  local_20 = LineFunc(0xc642,
                                      "virtual int Dispatcher_AuctionBidding::dispatch_sig(CUser*, PacketBuf&)"
                                      ,0,0);
                }
              }
            }
            else {
              CUser::SendCmdErrorPacket(param_1,0xbc,local_1c & 0xff,local_24);
              local_20 = 0;
            }
          }
          else {
            CUser::SendCmdErrorPacket(param_1,0xbc,0xd1);
            local_20 = 0;
          }
        }
      }
    }
    else {
      local_20 = LineFunc(0xc557,
                          "virtual int Dispatcher_AuctionBidding::dispatch_sig(CUser*, PacketBuf&)",
                          0,0);
    }
  }
  else {
    local_20 = LineFunc(0xc554,
                        "virtual int Dispatcher_AuctionBidding::dispatch_sig(CUser*, PacketBuf&)",0,
                        0);
  }
  return local_20;
}
```
