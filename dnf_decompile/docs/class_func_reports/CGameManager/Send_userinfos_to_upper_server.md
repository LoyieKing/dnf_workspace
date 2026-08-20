# Send_userinfos_to_upper_server

`_ZN12CGameManager30Send_userinfos_to_upper_serverEh`

`CGameManager::Send_userinfos_to_upper_server(unsigned char)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x082961be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082961be  _ZN12CGameManager30Send_userinfos_to_upper_serverEh
#           CGameManager::Send_userinfos_to_upper_server(unsigned char)
# range [0x082961be, 0x08296641]
082961be +0x000:  push   %ebp
082961bf +0x001:  mov    %esp,%ebp
082961c1 +0x003:  push   %esi
082961c2 +0x004:  push   %ebx
082961c3 +0x005:  sub    $0x1750,%esp
082961c9 +0x00b:  mov    0xc(%ebp),%eax
082961cc +0x00e:  mov    %al,-0x173c(%ebp)
082961d2 +0x014:  movl   $0x0,-0x18(%ebp)
082961d9 +0x01b:  lea    -0x1732(%ebp),%eax
082961df +0x021:  mov    %eax,(%esp)
082961e2 +0x024:  call   082a3f52 <_GLOBAL__I__ZN4CLog5this_E+0x379>  ; global constructors keyed to CLog::this_+0x379
082961e7 +0x029:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
082961ec +0x02e:  mov    %eax,(%esp)
082961ef +0x031:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
082961f4 +0x036:  mov    %al,-0x1727(%ebp)
082961fa +0x03c:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
082961ff +0x041:  mov    %eax,(%esp)
08296202 +0x044:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
08296207 +0x049:  test   %al,%al
08296209 +0x04b:  je     082962c2 <+0x104>
0829620f +0x051:  cmpb   $0xc9,-0x173c(%ebp)
08296216 +0x058:  jne    082962c2 <+0x104>
0829621c +0x05e:  movl   $0x0,-0x24(%ebp)
08296223 +0x065:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%eax
08296228 +0x06a:  mov    %eax,(%esp)
0829622b +0x06d:  call   082b2aaa <_GLOBAL__I__ZN4CLog5this_E+0xeed1>  ; global constructors keyed to CLog::this_+0xeed1
08296230 +0x072:  mov    %eax,-0x10(%ebp)
08296233 +0x075:  jmp    082962a5 <+0xe7>
08296235 +0x077:  lea    -0x36(%ebp),%eax
08296238 +0x07a:  mov    %eax,(%esp)
0829623b +0x07d:  call   082a4088 <_GLOBAL__I__ZN4CLog5this_E+0x4af>  ; global constructors keyed to CLog::this_+0x4af
08296240 +0x082:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08296245 +0x087:  mov    %eax,(%esp)
08296248 +0x08a:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
0829624d +0x08f:  mov    %eax,-0x2c(%ebp)
08296250 +0x092:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08296255 +0x097:  mov    %eax,(%esp)
08296258 +0x09a:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
0829625d +0x09f:  mov    %eax,-0x28(%ebp)
08296260 +0x0a2:  movzwl -0x34(%ebp),%eax
08296264 +0x0a6:  movzwl %ax,%esi
08296267 +0x0a9:  lea    -0x36(%ebp),%ebx
0829626a +0x0ac:  mov    -0x10(%ebp),%edx
0829626d +0x0af:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%eax
08296272 +0x0b4:  mov    %edx,0x4(%esp)
08296276 +0x0b8:  mov    %eax,(%esp)
08296279 +0x0bb:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
0829627e +0x0c0:  mov    %esi,0x8(%esp)
08296282 +0x0c4:  mov    %ebx,0x4(%esp)
08296286 +0x0c8:  mov    %eax,(%esp)
08296289 +0x0cb:  call   08470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>  ; CMonitorServerProxy::SendTcpPacket(char*, int)
0829628e +0x0d0:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%eax
08296293 +0x0d5:  lea    -0x24(%ebp),%edx
08296296 +0x0d8:  mov    %edx,0x4(%esp)
0829629a +0x0dc:  mov    %eax,(%esp)
0829629d +0x0df:  call   082b2ae2 <_GLOBAL__I__ZN4CLog5this_E+0xef09>  ; global constructors keyed to CLog::this_+0xef09
082962a2 +0x0e4:  mov    %eax,-0x10(%ebp)
082962a5 +0x0e7:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%eax
082962aa +0x0ec:  mov    %eax,(%esp)
082962ad +0x0ef:  call   082b2ad6 <_GLOBAL__I__ZN4CLog5this_E+0xeefd>  ; global constructors keyed to CLog::this_+0xeefd
082962b2 +0x0f4:  mov    -0x24(%ebp),%edx
082962b5 +0x0f7:  cmp    %edx,%eax
082962b7 +0x0f9:  setg   %al
082962ba +0x0fc:  test   %al,%al
082962bc +0x0fe:  jne    08296235 <+0x77>
082962c2 +0x104:  mov    0x8(%ebp),%eax
082962c5 +0x107:  add    $0x22c,%eax
082962ca +0x10c:  mov    %eax,(%esp)
082962cd +0x10f:  call   082b2a96 <_GLOBAL__I__ZN4CLog5this_E+0xeebd>  ; global constructors keyed to CLog::this_+0xeebd
082962d2 +0x114:  test   %al,%al
082962d4 +0x116:  jne    08296636 <+0x478>
082962da +0x11c:  movl   $0x0,-0x20(%ebp)
082962e1 +0x123:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%eax
082962e6 +0x128:  mov    %eax,(%esp)
082962e9 +0x12b:  call   082b2aaa <_GLOBAL__I__ZN4CLog5this_E+0xeed1>  ; global constructors keyed to CLog::this_+0xeed1
082962ee +0x130:  mov    %eax,-0xc(%ebp)
082962f1 +0x133:  jmp    08296617 <+0x459>
082962f6 +0x138:  mov    0x8(%ebp),%eax
082962f9 +0x13b:  lea    0x22c(%eax),%edx
082962ff +0x141:  lea    -0x3c(%ebp),%eax
08296302 +0x144:  mov    %edx,0x4(%esp)
08296306 +0x148:  mov    %eax,(%esp)
08296309 +0x14b:  call   080d3ab4 <_GLOBAL__I__ZN10BingoEventC2Ev+0x8901>  ; global constructors keyed to BingoEvent::BingoEvent()+0x8901
0829630e +0x150:  sub    $0x4,%esp
08296311 +0x153:  jmp    0829657e <+0x3c0>
08296316 +0x158:  lea    -0x3c(%ebp),%eax
08296319 +0x15b:  mov    %eax,(%esp)
0829631c +0x15e:  call   082b0798 <_GLOBAL__I__ZN4CLog5this_E+0xcbbf>  ; global constructors keyed to CLog::this_+0xcbbf
08296321 +0x163:  mov    0x4(%eax),%eax
08296324 +0x166:  mov    %eax,-0x14(%ebp)
08296327 +0x169:  mov    -0x14(%ebp),%eax
0829632a +0x16c:  mov    %eax,(%esp)
0829632d +0x16f:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08296332 +0x174:  cmp    $0x1,%eax
08296335 +0x177:  jle    0829634e <+0x190>
08296337 +0x179:  mov    -0x14(%ebp),%eax
0829633a +0x17c:  mov    %eax,(%esp)
0829633d +0x17f:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08296342 +0x184:  cmp    -0xc(%ebp),%eax
08296345 +0x187:  jne    0829634e <+0x190>
08296347 +0x189:  mov    $0x1,%eax
0829634c +0x18e:  jmp    08296353 <+0x195>
0829634e +0x190:  mov    $0x0,%eax
08296353 +0x195:  test   %al,%al
08296355 +0x197:  je     08296573 <+0x3b5>
0829635b +0x19d:  mov    -0x18(%ebp),%ebx
0829635e +0x1a0:  mov    -0x14(%ebp),%eax
08296361 +0x1a3:  mov    %eax,(%esp)
08296364 +0x1a6:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08296369 +0x1ab:  imul   $0x4e,%ebx,%edx
0829636c +0x1ae:  lea    -0x8(%ebp),%ecx
0829636f +0x1b1:  lea    (%ecx,%edx,1),%edx
08296372 +0x1b4:  sub    $0x172a,%edx
08296378 +0x1ba:  mov    %eax,0xc(%edx)
0829637b +0x1bd:  mov    -0x18(%ebp),%ebx
0829637e +0x1c0:  movl   $0xffffffff,0x4(%esp)
08296386 +0x1c8:  mov    -0x14(%ebp),%eax
08296389 +0x1cb:  mov    %eax,(%esp)
0829638c +0x1ce:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08296391 +0x1d3:  imul   $0x4e,%ebx,%edx
08296394 +0x1d6:  lea    -0x8(%ebp),%ecx
08296397 +0x1d9:  lea    (%ecx,%edx,1),%edx
0829639a +0x1dc:  sub    $0x172a,%edx
082963a0 +0x1e2:  mov    %eax,0x10(%edx)
082963a3 +0x1e5:  mov    -0x18(%ebp),%ebx
082963a6 +0x1e8:  mov    -0x14(%ebp),%eax
082963a9 +0x1eb:  mov    %eax,(%esp)
082963ac +0x1ee:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
082963b1 +0x1f3:  imul   $0x4e,%ebx,%edx
082963b4 +0x1f6:  lea    -0x8(%ebp),%ecx
082963b7 +0x1f9:  lea    (%ecx,%edx,1),%edx
082963ba +0x1fc:  sub    $0x172a,%edx
082963c0 +0x202:  mov    %eax,0x14(%edx)
082963c3 +0x205:  mov    -0x18(%ebp),%ebx
082963c6 +0x208:  mov    -0x14(%ebp),%eax
082963c9 +0x20b:  mov    %eax,(%esp)
082963cc +0x20e:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
082963d1 +0x213:  imul   $0x4e,%ebx,%edx
082963d4 +0x216:  lea    -0x8(%ebp),%ecx
082963d7 +0x219:  lea    (%ecx,%edx,1),%edx
082963da +0x21c:  sub    $0x172a,%edx
082963e0 +0x222:  mov    %eax,0x18(%edx)
082963e3 +0x225:  mov    -0x18(%ebp),%ebx
082963e6 +0x228:  mov    -0x14(%ebp),%eax
082963e9 +0x22b:  mov    %eax,(%esp)
082963ec +0x22e:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
082963f1 +0x233:  imul   $0x4e,%ebx,%edx
082963f4 +0x236:  lea    -0x8(%ebp),%ecx
082963f7 +0x239:  lea    (%ecx,%edx,1),%edx
082963fa +0x23c:  sub    $0x171a,%edx
08296400 +0x242:  mov    %al,0xc(%edx)
08296403 +0x245:  mov    -0x18(%ebp),%ebx
08296406 +0x248:  mov    -0x14(%ebp),%eax
08296409 +0x24b:  mov    %eax,(%esp)
0829640c +0x24e:  call   0815741c <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x7b>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x7b
08296411 +0x253:  imul   $0x4e,%ebx,%edx
08296414 +0x256:  lea    -0x8(%ebp),%ecx
08296417 +0x259:  lea    (%ecx,%edx,1),%edx
0829641a +0x25c:  sub    $0x171a,%edx
08296420 +0x262:  mov    %al,0xd(%edx)
08296423 +0x265:  mov    -0x18(%ebp),%ebx
08296426 +0x268:  mov    -0x14(%ebp),%eax
08296429 +0x26b:  mov    %eax,(%esp)
0829642c +0x26e:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08296431 +0x273:  imul   $0x4e,%ebx,%edx
08296434 +0x276:  lea    -0x8(%ebp),%ecx
08296437 +0x279:  lea    (%ecx,%edx,1),%edx
0829643a +0x27c:  sub    $0x170c,%edx
08296440 +0x282:  mov    %ax,(%edx)
08296443 +0x285:  mov    -0x18(%ebp),%ebx
08296446 +0x288:  mov    -0x14(%ebp),%eax
08296449 +0x28b:  mov    %eax,(%esp)
0829644c +0x28e:  call   0822f5c4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4c6e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4c6e
08296451 +0x293:  imul   $0x4e,%ebx,%edx
08296454 +0x296:  lea    -0x8(%ebp),%ecx
08296457 +0x299:  lea    (%ecx,%edx,1),%edx
0829645a +0x29c:  sub    $0x16fa,%edx
08296460 +0x2a2:  mov    %eax,0xe(%edx)
08296463 +0x2a5:  mov    -0x14(%ebp),%eax
08296466 +0x2a8:  mov    %eax,(%esp)
08296469 +0x2ab:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0829646e +0x2b0:  mov    -0x18(%ebp),%ecx
08296471 +0x2b3:  lea    -0x1732(%ebp),%edx
08296477 +0x2b9:  imul   $0x4e,%ecx,%ecx
0829647a +0x2bc:  add    $0x10,%ecx
0829647d +0x2bf:  add    %ecx,%edx
0829647f +0x2c1:  add    $0x10,%edx
08296482 +0x2c4:  mov    %eax,0x4(%esp)
08296486 +0x2c8:  mov    %edx,(%esp)
08296489 +0x2cb:  call   0807def0 <_init+0x7e8>
0829648e +0x2d0:  mov    -0x18(%ebp),%ebx
08296491 +0x2d3:  mov    -0x14(%ebp),%eax
08296494 +0x2d6:  mov    %eax,(%esp)
08296497 +0x2d9:  call   0867ec12 <_ZN5CUser6getSexEv>  ; CUser::getSex()
0829649c +0x2de:  imul   $0x4e,%ebx,%edx
0829649f +0x2e1:  lea    -0x8(%ebp),%ecx
082964a2 +0x2e4:  lea    (%ecx,%edx,1),%edx
082964a5 +0x2e7:  sub    $0x16ea,%edx
082964ab +0x2ed:  mov    %al,0x12(%edx)
082964ae +0x2f0:  mov    -0x14(%ebp),%eax
082964b1 +0x2f3:  mov    %eax,(%esp)
082964b4 +0x2f6:  call   08101056 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x78>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x78
082964b9 +0x2fb:  mov    -0x18(%ebp),%ecx
082964bc +0x2fe:  lea    -0x1732(%ebp),%edx
082964c2 +0x304:  imul   $0x4e,%ecx,%ecx
082964c5 +0x307:  add    $0x40,%ecx
082964c8 +0x30a:  add    %ecx,%edx
082964ca +0x30c:  add    $0x13,%edx
082964cd +0x30f:  movl   $0x6,0x8(%esp)
082964d5 +0x317:  mov    %eax,0x4(%esp)
082964d9 +0x31b:  mov    %edx,(%esp)
082964dc +0x31e:  call   0807d8a0 <_init+0x198>
082964e1 +0x323:  mov    -0x14(%ebp),%eax
082964e4 +0x326:  lea    0xe0(%eax),%edx
082964ea +0x32c:  movl   $0x10,0x8(%esp)
082964f2 +0x334:  lea    -0x4c(%ebp),%eax
082964f5 +0x337:  mov    %eax,0x4(%esp)
082964f9 +0x33b:  mov    %edx,(%esp)
082964fc +0x33e:  call   0816282e <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0xa9c>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0xa9c
08296501 +0x343:  mov    -0x18(%ebp),%edx
08296504 +0x346:  lea    -0x1732(%ebp),%eax
0829650a +0x34c:  imul   $0x4e,%edx,%edx
0829650d +0x34f:  add    $0x30,%edx
08296510 +0x352:  add    %edx,%eax
08296512 +0x354:  lea    0x12(%eax),%edx
08296515 +0x357:  lea    -0x4c(%ebp),%eax
08296518 +0x35a:  mov    %eax,0x4(%esp)
0829651c +0x35e:  mov    %edx,(%esp)
0829651f +0x361:  call   0807def0 <_init+0x7e8>
08296524 +0x366:  addl   $0x1,-0x18(%ebp)
08296528 +0x36a:  cmpl   $0x4a,-0x18(%ebp)
0829652c +0x36e:  setg   %al
0829652f +0x371:  test   %al,%al
08296531 +0x373:  je     08296573 <+0x3b5>
08296533 +0x375:  movw   $0x16e6,-0x1730(%ebp)
0829653c +0x37e:  mov    -0x18(%ebp),%eax
0829653f +0x381:  mov    %al,-0x1728(%ebp)
08296545 +0x387:  mov    -0xc(%ebp),%edx
08296548 +0x38a:  movzbl -0x173c(%ebp),%eax
0829654f +0x391:  mov    %edx,0xc(%esp)
08296553 +0x395:  mov    -0x14(%ebp),%edx
08296556 +0x398:  mov    %edx,0x8(%esp)
0829655a +0x39c:  mov    %eax,0x4(%esp)
0829655e +0x3a0:  lea    -0x1732(%ebp),%eax
08296564 +0x3a6:  mov    %eax,(%esp)
08296567 +0x3a9:  call   0829611a <_Z25SendUserInfoToUpperServerR33Packet_Monitor_UDP_Reply_UserInfohP5CUser17ENUM_SERVER_GROUP>  ; SendUserInfoToUpperServer(Packet_Monitor_UDP_Reply_UserInfo&, unsigned char, CUser*, ENUM_SERVER_GROUP)
0829656c +0x3ae:  movl   $0x0,-0x18(%ebp)
08296573 +0x3b5:  lea    -0x3c(%ebp),%eax
08296576 +0x3b8:  mov    %eax,(%esp)
08296579 +0x3bb:  call   080d0d52 <_GLOBAL__I__ZN10BingoEventC2Ev+0x5b9f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x5b9f
0829657e +0x3c0:  mov    0x8(%ebp),%eax
08296581 +0x3c3:  lea    0x22c(%eax),%edx
08296587 +0x3c9:  lea    -0x1c(%ebp),%eax
0829658a +0x3cc:  mov    %edx,0x4(%esp)
0829658e +0x3d0:  mov    %eax,(%esp)
08296591 +0x3d3:  call   080d3ada <_GLOBAL__I__ZN10BingoEventC2Ev+0x8927>  ; global constructors keyed to BingoEvent::BingoEvent()+0x8927
08296596 +0x3d8:  sub    $0x4,%esp
08296599 +0x3db:  lea    -0x1c(%ebp),%eax
0829659c +0x3de:  mov    %eax,0x4(%esp)
082965a0 +0x3e2:  lea    -0x3c(%ebp),%eax
082965a3 +0x3e5:  mov    %eax,(%esp)
082965a6 +0x3e8:  call   082b07fc <_GLOBAL__I__ZN4CLog5this_E+0xcc23>  ; global constructors keyed to CLog::this_+0xcc23
082965ab +0x3ed:  test   %al,%al
082965ad +0x3ef:  jne    08296316 <+0x158>
082965b3 +0x3f5:  cmpl   $0x0,-0x18(%ebp)
082965b7 +0x3f9:  je     08296600 <+0x442>
082965b9 +0x3fb:  mov    -0x18(%ebp),%eax
082965bc +0x3fe:  imul   $0x4e,%eax,%eax
082965bf +0x401:  add    $0xc,%eax
082965c2 +0x404:  mov    %ax,-0x1730(%ebp)
082965c9 +0x40b:  mov    -0x18(%ebp),%eax
082965cc +0x40e:  mov    %al,-0x1728(%ebp)
082965d2 +0x414:  mov    -0xc(%ebp),%edx
082965d5 +0x417:  movzbl -0x173c(%ebp),%eax
082965dc +0x41e:  mov    %edx,0xc(%esp)
082965e0 +0x422:  mov    -0x14(%ebp),%edx
082965e3 +0x425:  mov    %edx,0x8(%esp)
082965e7 +0x429:  mov    %eax,0x4(%esp)
082965eb +0x42d:  lea    -0x1732(%ebp),%eax
082965f1 +0x433:  mov    %eax,(%esp)
082965f4 +0x436:  call   0829611a <_Z25SendUserInfoToUpperServerR33Packet_Monitor_UDP_Reply_UserInfohP5CUser17ENUM_SERVER_GROUP>  ; SendUserInfoToUpperServer(Packet_Monitor_UDP_Reply_UserInfo&, unsigned char, CUser*, ENUM_SERVER_GROUP)
082965f9 +0x43b:  movl   $0x0,-0x18(%ebp)
08296600 +0x442:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%eax
08296605 +0x447:  lea    -0x20(%ebp),%edx
08296608 +0x44a:  mov    %edx,0x4(%esp)
0829660c +0x44e:  mov    %eax,(%esp)
0829660f +0x451:  call   082b2ae2 <_GLOBAL__I__ZN4CLog5this_E+0xef09>  ; global constructors keyed to CLog::this_+0xef09
08296614 +0x456:  mov    %eax,-0xc(%ebp)
08296617 +0x459:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%eax
0829661c +0x45e:  mov    %eax,(%esp)
0829661f +0x461:  call   082b2ad6 <_GLOBAL__I__ZN4CLog5this_E+0xeefd>  ; global constructors keyed to CLog::this_+0xeefd
08296624 +0x466:  mov    -0x20(%ebp),%edx
08296627 +0x469:  cmp    %edx,%eax
08296629 +0x46b:  setg   %al
0829662c +0x46e:  test   %al,%al
0829662e +0x470:  jne    082962f6 <+0x138>
08296634 +0x476:  jmp    08296637 <+0x479>
08296636 +0x478:  nop
08296637 +0x479:  lea    -0x8(%ebp),%esp
0829663a +0x47c:  add    $0x0,%esp
0829663d +0x47f:  pop    %ebx
0829663e +0x480:  pop    %esi
0829663f +0x481:  pop    %ebp
08296640 +0x482:  ret
08296641 +0x483:  nop
```

## 反编译 C

```c
// CGameManager::Send_userinfos_to_upper_server @ 0x82961be

/* CGameManager::Send_userinfos_to_upper_server(unsigned char) */

void __thiscall CGameManager::Send_userinfos_to_upper_server(CGameManager *this,uchar param_1)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  CEnvironment *pCVar6;
  GameWorld *pGVar7;
  CMonitorServerProxy *this_00;
  int iVar8;
  undefined4 uVar9;
  char *__src;
  void *__src_00;
  uint uVar10;
  Packet_Monitor_UDP_Reply_UserInfo local_1736 [2];
  short local_1734;
  undefined1 local_172c;
  undefined1 local_172b;
  undefined4 auStack_172a [4];
  undefined1 auStack_171a [2];
  undefined2 uStack_1718;
  char acStack_1716 [30];
  undefined4 uStack_16f8;
  char acStack_16f4 [16];
  undefined1 auStack_16e4 [5780];
  char local_50 [16];
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_40 [6];
  Packet_ChannelType local_3a [2];
  ushort local_38;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_20 [4];
  int local_1c;
  CUser *local_18;
  undefined4 local_14;
  int local_10;
  
  local_1c = 0;
  Packet_Monitor_UDP_Reply_UserInfo::Packet_Monitor_UDP_Reply_UserInfo(local_1736);
  pCVar6 = (CEnvironment *)G_CEnvironment();
  local_172b = CEnvironment::get_channel_no(pCVar6);
  pGVar7 = (GameWorld *)G_GameWorld();
  cVar3 = GameWorld::IsIntegratedPvPBaseChannel(pGVar7);
  if ((cVar3 != '\0') && (param_1 == 0xc9)) {
    local_28 = 0;
    local_14 = CServerProxyMgr<CMonitorServerProxy>::GetStartIndex(GlobalData::s_monitor_proxy_mgr);
    while (iVar8 = CServerProxyMgr<CMonitorServerProxy>::GetEndIndex
                             (GlobalData::s_monitor_proxy_mgr), local_28 < iVar8) {
      Packet_ChannelType::Packet_ChannelType(local_3a);
      pCVar6 = (CEnvironment *)G_CEnvironment();
      local_30 = CEnvironment::get_channel_no(pCVar6);
      pGVar7 = (GameWorld *)G_GameWorld();
      local_2c = GameWorld::GetChannelType(pGVar7);
      uVar10 = (uint)local_38;
      this_00 = (CMonitorServerProxy *)
                CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                          (GlobalData::s_monitor_proxy_mgr,local_14);
      CMonitorServerProxy::SendTcpPacket(this_00,(char *)local_3a,uVar10);
      local_14 = CServerProxyMgr<CMonitorServerProxy>::GetNextIndex
                           (GlobalData::s_monitor_proxy_mgr,&local_28);
    }
  }
  cVar3 = std::
          map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
          ::empty((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
                   *)(this + 0x22c));
  if (cVar3 == '\0') {
    local_24 = 0;
    local_10 = CServerProxyMgr<CMonitorServerProxy>::GetStartIndex(GlobalData::s_monitor_proxy_mgr);
    while (iVar8 = CServerProxyMgr<CMonitorServerProxy>::GetEndIndex
                             (GlobalData::s_monitor_proxy_mgr), local_24 < iVar8) {
      std::
      map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
      ::begin(local_40);
      while( true ) {
        std::
        map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
        ::end(local_20);
        cVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator!=
                          ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_40,
                           (_Rb_tree_iterator *)local_20);
        if (cVar3 == '\0') break;
        iVar8 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator->
                          ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_40);
        local_18 = *(CUser **)(iVar8 + 4);
        iVar8 = CUser::get_state(local_18);
        if ((iVar8 < 2) || (iVar8 = CUser::GetServerGroup(local_18), iVar8 != local_10)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        iVar8 = local_1c;
        if (bVar1) {
          uVar9 = CUser::get_acc_id(local_18);
          iVar2 = local_1c;
          *(undefined4 *)((int)auStack_172a + iVar8 * 0x4e) = uVar9;
          uVar9 = CUser::get_charac_no(local_18,-1);
          iVar8 = local_1c;
          *(undefined4 *)((int)auStack_172a + iVar2 * 0x4e + 4) = uVar9;
          uVar9 = CUser::GetUID(local_18);
          iVar2 = local_1c;
          *(undefined4 *)((int)auStack_172a + iVar8 * 0x4e + 8) = uVar9;
          uVar9 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)local_18);
          iVar8 = local_1c;
          *(undefined4 *)(auStack_171a + iVar2 * 0x4e + -4) = uVar9;
          uVar4 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)local_18);
          iVar2 = local_1c;
          auStack_171a[iVar8 * 0x4e] = uVar4;
          uVar4 = CUserCharacInfo::getCurCharacGrowType((CUserCharacInfo *)local_18);
          iVar8 = local_1c;
          auStack_171a[iVar2 * 0x4e + 1] = uVar4;
          uVar5 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)local_18);
          iVar2 = local_1c;
          *(undefined2 *)(auStack_171a + iVar8 * 0x4e + 2) = uVar5;
          uVar9 = CUserCharacInfo::get_charac_memberkey((CUserCharacInfo *)local_18);
          *(undefined4 *)((int)&uStack_16f8 + iVar2 * 0x4e) = uVar9;
          __src = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)local_18);
          strcpy(auStack_171a + local_1c * 0x4e + 4,__src);
          iVar8 = local_1c;
          uVar4 = CUser::getSex(local_18);
          auStack_16e4[iVar8 * 0x4e] = uVar4;
          __src_00 = (void *)CUser::GetSsnString(local_18);
          memcpy(auStack_16e4 + local_1c * 0x4e + 1,__src_00,6);
          CNetwork<4096,450000>::GetPeerIP2
                    ((CNetwork<4096,450000> *)(local_18 + 0xe0),local_50,0x10);
          strcpy(acStack_16f4 + local_1c * 0x4e,local_50);
          local_1c = local_1c + 1;
          if (0x4a < local_1c) {
            local_1734 = 0x16e6;
            local_172c = (undefined1)local_1c;
            SendUserInfoToUpperServer(local_1736,param_1,local_18,local_10);
            local_1c = 0;
          }
        }
        std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator++
                  ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_40);
      }
      if (local_1c != 0) {
        local_1734 = (short)local_1c * 0x4e + 0xc;
        local_172c = (undefined1)local_1c;
        SendUserInfoToUpperServer(local_1736,param_1,local_18,local_10);
        local_1c = 0;
      }
      local_10 = CServerProxyMgr<CMonitorServerProxy>::GetNextIndex
                           (GlobalData::s_monitor_proxy_mgr,&local_24);
    }
  }
  return;
}
```
