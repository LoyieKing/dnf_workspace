# dispatch_sig

`_ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_AuctionSearchByNoItmeKey::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_AuctionSearchByNoItmeKey` | `0x082161e4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082161e4  _ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_AuctionSearchByNoItmeKey::dispatch_sig(CUser*, PacketBuf&)
# range [0x082161e4, 0x08216965]
082161e4 +0x000:  push   %ebp
082161e5 +0x001:  mov    %esp,%ebp
082161e7 +0x003:  push   %ebx
082161e8 +0x004:  sub    $0x94,%esp
082161ee +0x00a:  lea    -0x21(%ebp),%eax
082161f1 +0x00d:  mov    %eax,0x4(%esp)
082161f5 +0x011:  mov    0x10(%ebp),%eax
082161f8 +0x014:  mov    %eax,(%esp)
082161fb +0x017:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
08216200 +0x01c:  xor    $0x1,%eax
08216203 +0x01f:  test   %al,%al
08216205 +0x021:  je     08216230 <+0x4c>
08216207 +0x023:  movl   $0x0,0xc(%esp)
0821620f +0x02b:  movl   $0x0,0x8(%esp)
08216217 +0x033:  movl   $&_ZZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821621f +0x03b:  movl   $0xc719,(%esp)
08216226 +0x042:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821622b +0x047:  jmp    0821695d <+0x779>
08216230 +0x04c:  movzbl -0x21(%ebp),%eax
08216234 +0x050:  cmp    $0x1,%al
08216236 +0x052:  jbe    08216261 <+0x7d>
08216238 +0x054:  movl   $0x0,0xc(%esp)
08216240 +0x05c:  movl   $0x0,0x8(%esp)
08216248 +0x064:  movl   $&_ZZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08216250 +0x06c:  movl   $0xc71c,(%esp)
08216257 +0x073:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821625c +0x078:  jmp    0821695d <+0x779>
08216261 +0x07d:  movzbl -0x21(%ebp),%eax
08216265 +0x081:  movzbl %al,%eax
08216268 +0x084:  mov    %eax,-0x10(%ebp)
0821626b +0x087:  mov    -0x10(%ebp),%eax
0821626e +0x08a:  movzbl %al,%eax
08216271 +0x08d:  mov    %eax,(%esp)
08216274 +0x090:  call   082138f2 <_Z27IsAuctionServerDisconnectedh>  ; IsAuctionServerDisconnected(unsigned char)
08216279 +0x095:  test   %al,%al
0821627b +0x097:  je     082162a9 <+0xc5>
0821627d +0x099:  mov    -0x10(%ebp),%eax
08216280 +0x09c:  mov    %eax,0xc(%esp)
08216284 +0x0a0:  movl   $0x8c,0x8(%esp)
0821628c +0x0a8:  movl   $0xbd,0x4(%esp)
08216294 +0x0b0:  mov    0xc(%ebp),%eax
08216297 +0x0b3:  mov    %eax,(%esp)
0821629a +0x0b6:  call   0867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PAY_TYPE)
0821629f +0x0bb:  mov    $0x0,%eax
082162a4 +0x0c0:  jmp    0821695d <+0x779>
082162a9 +0x0c5:  mov    0xc(%ebp),%eax
082162ac +0x0c8:  mov    %eax,(%esp)
082162af +0x0cb:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
082162b4 +0x0d0:  cmp    $0x2,%eax
082162b7 +0x0d3:  jle    082162c8 <+0xe4>
082162b9 +0x0d5:  mov    0xc(%ebp),%eax
082162bc +0x0d8:  mov    %eax,(%esp)
082162bf +0x0db:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
082162c4 +0x0e0:  test   %eax,%eax
082162c6 +0x0e2:  jne    082162cf <+0xeb>
082162c8 +0x0e4:  mov    $0x1,%eax
082162cd +0x0e9:  jmp    082162d4 <+0xf0>
082162cf +0x0eb:  mov    $0x0,%eax
082162d4 +0x0f0:  test   %al,%al
082162d6 +0x0f2:  je     08216301 <+0x11d>
082162d8 +0x0f4:  movl   $0x0,0xc(%esp)
082162e0 +0x0fc:  movl   $0x0,0x8(%esp)
082162e8 +0x104:  movl   $&_ZZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082162f0 +0x10c:  movl   $0xc73f,(%esp)
082162f7 +0x113:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082162fc +0x118:  jmp    0821695d <+0x779>
08216301 +0x11d:  cmpl   $0x1,-0x10(%ebp)
08216305 +0x121:  jne    0821652e <+0x34a>
0821630b +0x127:  lea    -0x54(%ebp),%eax
0821630e +0x12a:  mov    %eax,(%esp)
08216311 +0x12d:  call   0822eafa <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x41a4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x41a4
08216316 +0x132:  mov    0xc(%ebp),%eax
08216319 +0x135:  mov    %eax,(%esp)
0821631c +0x138:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08216321 +0x13d:  mov    %eax,-0x42(%ebp)
08216324 +0x140:  mov    0xc(%ebp),%eax
08216327 +0x143:  mov    %eax,(%esp)
0821632a +0x146:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0821632f +0x14b:  mov    %eax,-0x3e(%ebp)
08216332 +0x14e:  lea    -0x54(%ebp),%eax
08216335 +0x151:  add    $0x1a,%eax
08216338 +0x154:  mov    %eax,0x4(%esp)
0821633c +0x158:  mov    0x10(%ebp),%eax
0821633f +0x15b:  mov    %eax,(%esp)
08216342 +0x15e:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
08216347 +0x163:  xor    $0x1,%eax
0821634a +0x166:  test   %al,%al
0821634c +0x168:  je     08216377 <+0x193>
0821634e +0x16a:  movl   $0x0,0xc(%esp)
08216356 +0x172:  movl   $0x0,0x8(%esp)
0821635e +0x17a:  movl   $&_ZZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08216366 +0x182:  movl   $0xc748,(%esp)
0821636d +0x189:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08216372 +0x18e:  jmp    0821695d <+0x779>
08216377 +0x193:  lea    -0x54(%ebp),%eax
0821637a +0x196:  add    $0x1e,%eax
0821637d +0x199:  mov    %eax,0x4(%esp)
08216381 +0x19d:  mov    0x10(%ebp),%eax
08216384 +0x1a0:  mov    %eax,(%esp)
08216387 +0x1a3:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
0821638c +0x1a8:  xor    $0x1,%eax
0821638f +0x1ab:  test   %al,%al
08216391 +0x1ad:  je     082163bc <+0x1d8>
08216393 +0x1af:  movl   $0x0,0xc(%esp)
0821639b +0x1b7:  movl   $0x0,0x8(%esp)
082163a3 +0x1bf:  movl   $&_ZZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082163ab +0x1c7:  movl   $0xc749,(%esp)
082163b2 +0x1ce:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082163b7 +0x1d3:  jmp    0821695d <+0x779>
082163bc +0x1d8:  lea    -0x54(%ebp),%eax
082163bf +0x1db:  add    $0x20,%eax
082163c2 +0x1de:  mov    %eax,0x4(%esp)
082163c6 +0x1e2:  mov    0x10(%ebp),%eax
082163c9 +0x1e5:  mov    %eax,(%esp)
082163cc +0x1e8:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
082163d1 +0x1ed:  xor    $0x1,%eax
082163d4 +0x1f0:  test   %al,%al
082163d6 +0x1f2:  je     08216401 <+0x21d>
082163d8 +0x1f4:  movl   $0x0,0xc(%esp)
082163e0 +0x1fc:  movl   $0x0,0x8(%esp)
082163e8 +0x204:  movl   $&_ZZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082163f0 +0x20c:  movl   $0xc74a,(%esp)
082163f7 +0x213:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082163fc +0x218:  jmp    0821695d <+0x779>
08216401 +0x21d:  lea    -0x54(%ebp),%eax
08216404 +0x220:  add    $0x21,%eax
08216407 +0x223:  mov    %eax,0x4(%esp)
0821640b +0x227:  mov    0x10(%ebp),%eax
0821640e +0x22a:  mov    %eax,(%esp)
08216411 +0x22d:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
08216416 +0x232:  xor    $0x1,%eax
08216419 +0x235:  test   %al,%al
0821641b +0x237:  je     08216446 <+0x262>
0821641d +0x239:  movl   $0x0,0xc(%esp)
08216425 +0x241:  movl   $0x0,0x8(%esp)
0821642d +0x249:  movl   $&_ZZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08216435 +0x251:  movl   $0xc74b,(%esp)
0821643c +0x258:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08216441 +0x25d:  jmp    0821695d <+0x779>
08216446 +0x262:  lea    -0x54(%ebp),%eax
08216449 +0x265:  add    $0x22,%eax
0821644c +0x268:  mov    %eax,0x4(%esp)
08216450 +0x26c:  mov    0x10(%ebp),%eax
08216453 +0x26f:  mov    %eax,(%esp)
08216456 +0x272:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
0821645b +0x277:  xor    $0x1,%eax
0821645e +0x27a:  test   %al,%al
08216460 +0x27c:  je     0821648b <+0x2a7>
08216462 +0x27e:  movl   $0x0,0xc(%esp)
0821646a +0x286:  movl   $0x0,0x8(%esp)
08216472 +0x28e:  movl   $&_ZZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821647a +0x296:  movl   $0xc74c,(%esp)
08216481 +0x29d:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08216486 +0x2a2:  jmp    0821695d <+0x779>
0821648b +0x2a7:  lea    -0x54(%ebp),%eax
0821648e +0x2aa:  add    $0x23,%eax
08216491 +0x2ad:  mov    %eax,0x4(%esp)
08216495 +0x2b1:  mov    0x10(%ebp),%eax
08216498 +0x2b4:  mov    %eax,(%esp)
0821649b +0x2b7:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
082164a0 +0x2bc:  xor    $0x1,%eax
082164a3 +0x2bf:  test   %al,%al
082164a5 +0x2c1:  je     082164d0 <+0x2ec>
082164a7 +0x2c3:  movl   $0x0,0xc(%esp)
082164af +0x2cb:  movl   $0x0,0x8(%esp)
082164b7 +0x2d3:  movl   $&_ZZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082164bf +0x2db:  movl   $0xc74d,(%esp)
082164c6 +0x2e2:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082164cb +0x2e7:  jmp    0821695d <+0x779>
082164d0 +0x2ec:  lea    -0x54(%ebp),%eax
082164d3 +0x2ef:  add    $0x24,%eax
082164d6 +0x2f2:  mov    %eax,0x4(%esp)
082164da +0x2f6:  mov    0x10(%ebp),%eax
082164dd +0x2f9:  mov    %eax,(%esp)
082164e0 +0x2fc:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
082164e5 +0x301:  xor    $0x1,%eax
082164e8 +0x304:  test   %al,%al
082164ea +0x306:  je     08216515 <+0x331>
082164ec +0x308:  movl   $0x0,0xc(%esp)
082164f4 +0x310:  movl   $0x0,0x8(%esp)
082164fc +0x318:  movl   $&_ZZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08216504 +0x320:  movl   $0xc74e,(%esp)
0821650b +0x327:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08216510 +0x32c:  jmp    0821695d <+0x779>
08216515 +0x331:  mov    &_ZN10GlobalData20s_cera_auction_proxyE,%eax
0821651a +0x336:  lea    -0x54(%ebp),%edx
0821651d +0x339:  mov    %edx,0x4(%esp)
08216521 +0x33d:  mov    %eax,(%esp)
08216524 +0x340:  call   082f7c2c <_ZN23CCeraAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE>  ; CCeraAuctionServerProxy::SendPacket(nsl::PACKET_HEADER*)
08216529 +0x345:  jmp    082168cf <+0x6eb>
0821652e +0x34a:  lea    -0x87(%ebp),%eax
08216534 +0x350:  mov    %eax,(%esp)
08216537 +0x353:  call   0822e736 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3de0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3de0
0821653c +0x358:  mov    0xc(%ebp),%eax
0821653f +0x35b:  mov    %eax,(%esp)
08216542 +0x35e:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08216547 +0x363:  mov    %eax,-0x75(%ebp)
0821654a +0x366:  mov    0xc(%ebp),%eax
0821654d +0x369:  mov    %eax,(%esp)
08216550 +0x36c:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08216555 +0x371:  mov    %eax,-0x71(%ebp)
08216558 +0x374:  lea    -0x87(%ebp),%eax
0821655e +0x37a:  add    $0x1a,%eax
08216561 +0x37d:  mov    %eax,0x4(%esp)
08216565 +0x381:  mov    0x10(%ebp),%eax
08216568 +0x384:  mov    %eax,(%esp)
0821656b +0x387:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
08216570 +0x38c:  xor    $0x1,%eax
08216573 +0x38f:  test   %al,%al
08216575 +0x391:  je     082165a0 <+0x3bc>
08216577 +0x393:  movl   $0x0,0xc(%esp)
0821657f +0x39b:  movl   $0x0,0x8(%esp)
08216587 +0x3a3:  movl   $&_ZZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821658f +0x3ab:  movl   $0xc760,(%esp)
08216596 +0x3b2:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821659b +0x3b7:  jmp    0821695d <+0x779>
082165a0 +0x3bc:  lea    -0x87(%ebp),%eax
082165a6 +0x3c2:  add    $0x1e,%eax
082165a9 +0x3c5:  mov    %eax,0x4(%esp)
082165ad +0x3c9:  mov    0x10(%ebp),%eax
082165b0 +0x3cc:  mov    %eax,(%esp)
082165b3 +0x3cf:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
082165b8 +0x3d4:  xor    $0x1,%eax
082165bb +0x3d7:  test   %al,%al
082165bd +0x3d9:  je     082165e8 <+0x404>
082165bf +0x3db:  movl   $0x0,0xc(%esp)
082165c7 +0x3e3:  movl   $0x0,0x8(%esp)
082165cf +0x3eb:  movl   $&_ZZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082165d7 +0x3f3:  movl   $0xc761,(%esp)
082165de +0x3fa:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082165e3 +0x3ff:  jmp    0821695d <+0x779>
082165e8 +0x404:  lea    -0x87(%ebp),%eax
082165ee +0x40a:  add    $0x20,%eax
082165f1 +0x40d:  mov    %eax,0x4(%esp)
082165f5 +0x411:  mov    0x10(%ebp),%eax
082165f8 +0x414:  mov    %eax,(%esp)
082165fb +0x417:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
08216600 +0x41c:  xor    $0x1,%eax
08216603 +0x41f:  test   %al,%al
08216605 +0x421:  je     08216630 <+0x44c>
08216607 +0x423:  movl   $0x0,0xc(%esp)
0821660f +0x42b:  movl   $0x0,0x8(%esp)
08216617 +0x433:  movl   $&_ZZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821661f +0x43b:  movl   $0xc762,(%esp)
08216626 +0x442:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821662b +0x447:  jmp    0821695d <+0x779>
08216630 +0x44c:  lea    -0x87(%ebp),%eax
08216636 +0x452:  add    $0x21,%eax
08216639 +0x455:  mov    %eax,0x4(%esp)
0821663d +0x459:  mov    0x10(%ebp),%eax
08216640 +0x45c:  mov    %eax,(%esp)
08216643 +0x45f:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
08216648 +0x464:  xor    $0x1,%eax
0821664b +0x467:  test   %al,%al
0821664d +0x469:  je     08216678 <+0x494>
0821664f +0x46b:  movl   $0x0,0xc(%esp)
08216657 +0x473:  movl   $0x0,0x8(%esp)
0821665f +0x47b:  movl   $&_ZZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08216667 +0x483:  movl   $0xc763,(%esp)
0821666e +0x48a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08216673 +0x48f:  jmp    0821695d <+0x779>
08216678 +0x494:  lea    -0x87(%ebp),%eax
0821667e +0x49a:  add    $0x22,%eax
08216681 +0x49d:  mov    %eax,0x4(%esp)
08216685 +0x4a1:  mov    0x10(%ebp),%eax
08216688 +0x4a4:  mov    %eax,(%esp)
0821668b +0x4a7:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
08216690 +0x4ac:  xor    $0x1,%eax
08216693 +0x4af:  test   %al,%al
08216695 +0x4b1:  je     082166c0 <+0x4dc>
08216697 +0x4b3:  movl   $0x0,0xc(%esp)
0821669f +0x4bb:  movl   $0x0,0x8(%esp)
082166a7 +0x4c3:  movl   $&_ZZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082166af +0x4cb:  movl   $0xc764,(%esp)
082166b6 +0x4d2:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082166bb +0x4d7:  jmp    0821695d <+0x779>
082166c0 +0x4dc:  lea    -0x87(%ebp),%eax
082166c6 +0x4e2:  add    $0x23,%eax
082166c9 +0x4e5:  mov    %eax,0x4(%esp)
082166cd +0x4e9:  mov    0x10(%ebp),%eax
082166d0 +0x4ec:  mov    %eax,(%esp)
082166d3 +0x4ef:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
082166d8 +0x4f4:  xor    $0x1,%eax
082166db +0x4f7:  test   %al,%al
082166dd +0x4f9:  je     08216708 <+0x524>
082166df +0x4fb:  movl   $0x0,0xc(%esp)
082166e7 +0x503:  movl   $0x0,0x8(%esp)
082166ef +0x50b:  movl   $&_ZZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082166f7 +0x513:  movl   $0xc765,(%esp)
082166fe +0x51a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08216703 +0x51f:  jmp    0821695d <+0x779>
08216708 +0x524:  lea    -0x87(%ebp),%eax
0821670e +0x52a:  add    $0x24,%eax
08216711 +0x52d:  mov    %eax,0x4(%esp)
08216715 +0x531:  mov    0x10(%ebp),%eax
08216718 +0x534:  mov    %eax,(%esp)
0821671b +0x537:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
08216720 +0x53c:  xor    $0x1,%eax
08216723 +0x53f:  test   %al,%al
08216725 +0x541:  je     08216750 <+0x56c>
08216727 +0x543:  movl   $0x0,0xc(%esp)
0821672f +0x54b:  movl   $0x0,0x8(%esp)
08216737 +0x553:  movl   $&_ZZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821673f +0x55b:  movl   $0xc766,(%esp)
08216746 +0x562:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821674b +0x567:  jmp    0821695d <+0x779>
08216750 +0x56c:  lea    -0x87(%ebp),%eax
08216756 +0x572:  add    $0x25,%eax
08216759 +0x575:  mov    %eax,0x4(%esp)
0821675d +0x579:  mov    0x10(%ebp),%eax
08216760 +0x57c:  mov    %eax,(%esp)
08216763 +0x57f:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
08216768 +0x584:  xor    $0x1,%eax
0821676b +0x587:  test   %al,%al
0821676d +0x589:  je     08216798 <+0x5b4>
0821676f +0x58b:  movl   $0x0,0xc(%esp)
08216777 +0x593:  movl   $0x0,0x8(%esp)
0821677f +0x59b:  movl   $&_ZZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08216787 +0x5a3:  movl   $0xc76a,(%esp)
0821678e +0x5aa:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08216793 +0x5af:  jmp    0821695d <+0x779>
08216798 +0x5b4:  lea    -0x87(%ebp),%eax
0821679e +0x5ba:  add    $0x27,%eax
082167a1 +0x5bd:  mov    %eax,0x4(%esp)
082167a5 +0x5c1:  mov    0x10(%ebp),%eax
082167a8 +0x5c4:  mov    %eax,(%esp)
082167ab +0x5c7:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
082167b0 +0x5cc:  xor    $0x1,%eax
082167b3 +0x5cf:  test   %al,%al
082167b5 +0x5d1:  je     082167e0 <+0x5fc>
082167b7 +0x5d3:  movl   $0x0,0xc(%esp)
082167bf +0x5db:  movl   $0x0,0x8(%esp)
082167c7 +0x5e3:  movl   $&_ZZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082167cf +0x5eb:  movl   $0xc76c,(%esp)
082167d6 +0x5f2:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082167db +0x5f7:  jmp    0821695d <+0x779>
082167e0 +0x5fc:  lea    -0x87(%ebp),%eax
082167e6 +0x602:  add    $0x29,%eax
082167e9 +0x605:  mov    %eax,0x4(%esp)
082167ed +0x609:  mov    0x10(%ebp),%eax
082167f0 +0x60c:  mov    %eax,(%esp)
082167f3 +0x60f:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
082167f8 +0x614:  xor    $0x1,%eax
082167fb +0x617:  test   %al,%al
082167fd +0x619:  je     08216828 <+0x644>
082167ff +0x61b:  movl   $0x0,0xc(%esp)
08216807 +0x623:  movl   $0x0,0x8(%esp)
0821680f +0x62b:  movl   $&_ZZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08216817 +0x633:  movl   $0xc76e,(%esp)
0821681e +0x63a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08216823 +0x63f:  jmp    0821695d <+0x779>
08216828 +0x644:  lea    -0x87(%ebp),%eax
0821682e +0x64a:  add    $0x31,%eax
08216831 +0x64d:  mov    %eax,0x4(%esp)
08216835 +0x651:  mov    0x10(%ebp),%eax
08216838 +0x654:  mov    %eax,(%esp)
0821683b +0x657:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
08216840 +0x65c:  xor    $0x1,%eax
08216843 +0x65f:  test   %al,%al
08216845 +0x661:  je     08216870 <+0x68c>
08216847 +0x663:  movl   $0x0,0xc(%esp)
0821684f +0x66b:  movl   $0x0,0x8(%esp)
08216857 +0x673:  movl   $&_ZZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821685f +0x67b:  movl   $0xc772,(%esp)
08216866 +0x682:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821686b +0x687:  jmp    0821695d <+0x779>
08216870 +0x68c:  lea    -0x87(%ebp),%eax
08216876 +0x692:  add    $0x32,%eax
08216879 +0x695:  mov    %eax,0x4(%esp)
0821687d +0x699:  mov    0x10(%ebp),%eax
08216880 +0x69c:  mov    %eax,(%esp)
08216883 +0x69f:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
08216888 +0x6a4:  xor    $0x1,%eax
0821688b +0x6a7:  test   %al,%al
0821688d +0x6a9:  je     082168b8 <+0x6d4>
0821688f +0x6ab:  movl   $0x0,0xc(%esp)
08216897 +0x6b3:  movl   $0x0,0x8(%esp)
0821689f +0x6bb:  movl   $&_ZZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082168a7 +0x6c3:  movl   $0xc773,(%esp)
082168ae +0x6ca:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082168b3 +0x6cf:  jmp    0821695d <+0x779>
082168b8 +0x6d4:  mov    &_ZN10GlobalData15s_auction_proxyE,%eax
082168bd +0x6d9:  lea    -0x87(%ebp),%edx
082168c3 +0x6df:  mov    %edx,0x4(%esp)
082168c7 +0x6e3:  mov    %eax,(%esp)
082168ca +0x6e6:  call   082f7b1c <_ZN19CAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE>  ; CAuctionServerProxy::SendPacket(nsl::PACKET_HEADER*)
082168cf +0x6eb:  movl   $0x0,-0xc(%ebp)
082168d6 +0x6f2:  jmp    0821694d <+0x769>
082168d8 +0x6f4:  mov    -0xc(%ebp),%eax
082168db +0x6f7:  mov    &_ZL6gmList(,%eax,4),%eax
082168e2 +0x6fe:  mov    %eax,%ebx
082168e4 +0x700:  mov    0xc(%ebp),%eax
082168e7 +0x703:  mov    %eax,(%esp)
082168ea +0x706:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
082168ef +0x70b:  cmp    %eax,%ebx
082168f1 +0x70d:  sete   %al
082168f4 +0x710:  test   %al,%al
082168f6 +0x712:  je     08216949 <+0x765>
082168f8 +0x714:  mov    0xc(%ebp),%eax
082168fb +0x717:  mov    %eax,(%esp)
082168fe +0x71a:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08216903 +0x71f:  mov    %eax,%ebx
08216905 +0x721:  movl   $0x0,0xc(%esp)
0821690d +0x729:  movl   $0xc784,0x8(%esp)
08216915 +0x731:  movl   $&_ZZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821691d +0x739:  lea    -0x20(%ebp),%eax
08216920 +0x73c:  mov    %eax,(%esp)
08216923 +0x73f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08216928 +0x744:  mov    %ebx,0xc(%esp)
0821692c +0x748:  movl   $"REQ AuctionSearchByNoItmeKey",0x8(%esp)
08216934 +0x750:  movl   $"Trace Auction Delay, %s(%d)",0x4(%esp)
0821693c +0x758:  lea    -0x20(%ebp),%eax
0821693f +0x75b:  mov    %eax,(%esp)
08216942 +0x75e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08216947 +0x763:  jmp    08216958 <+0x774>
08216949 +0x765:  addl   $0x1,-0xc(%ebp)
0821694d +0x769:  cmpl   $0x4,-0xc(%ebp)
08216951 +0x76d:  setle  %al
08216954 +0x770:  test   %al,%al
08216956 +0x772:  jne    082168d8 <+0x6f4>
08216958 +0x774:  mov    $0x0,%eax
0821695d +0x779:  add    $0x94,%esp
08216963 +0x77f:  pop    %ebx
08216964 +0x780:  pop    %ebp
08216965 +0x781:  ret
```

## 反编译 C

```c
// Dispatcher_AuctionSearchByNoItmeKey::dispatch_sig @ 0x82161e4

/* Dispatcher_AuctionSearchByNoItmeKey::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_AuctionSearchByNoItmeKey::dispatch_sig
          (Dispatcher_AuctionSearchByNoItmeKey *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  PCK_AUCTION_SEARCH_BY_NOITEMKEY_GA local_8b [18];
  undefined4 local_79;
  undefined4 local_75;
  uint uStack_71;
  ushort uStack_6d;
  uchar uStack_6b;
  uchar uStack_6a;
  uchar uStack_69;
  uchar uStack_68;
  uchar uStack_67;
  short sStack_66;
  short sStack_64;
  short asStack_62 [4];
  uchar uStack_5a;
  uchar uStack_59;
  PCK_AUCTION_SEARCH_BY_NOITEMKEY_GP local_58 [18];
  undefined4 local_46;
  undefined4 local_42;
  uint uStack_3e;
  ushort uStack_3a;
  uchar uStack_38;
  uchar uStack_37;
  uchar uStack_36;
  uchar uStack_35;
  uchar auStack_34 [15];
  byte local_25;
  cMyTrace local_24 [16];
  uint local_14;
  int local_10;
  
  cVar2 = PacketBuf::get_byte(param_2,&local_25);
  if (cVar2 != '\x01') {
    uVar3 = LineFunc(0xc719,
                     "virtual int Dispatcher_AuctionSearchByNoItmeKey::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar3;
  }
  if (1 < local_25) {
    uVar3 = LineFunc(0xc71c,
                     "virtual int Dispatcher_AuctionSearchByNoItmeKey::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar3;
  }
  local_14 = (uint)local_25;
  cVar2 = IsAuctionServerDisconnected(local_25);
  if (cVar2 != '\0') {
    CUser::SendCmdErrorPacket(param_1,0xbd,0x8c,local_14);
    return 0;
  }
  iVar4 = CUser::get_state(param_1);
  if ((iVar4 < 3) ||
     (iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar4 == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    uVar3 = LineFunc(0xc73f,
                     "virtual int Dispatcher_AuctionSearchByNoItmeKey::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar3;
  }
  if (local_14 == 1) {
    PCK_AUCTION_SEARCH_BY_NOITEMKEY_GP::PCK_AUCTION_SEARCH_BY_NOITEMKEY_GP(local_58);
    local_46 = CUser::GetUID(param_1);
    local_42 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    cVar2 = PacketBuf::get_int(param_2,&uStack_3e);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc748,
                       "virtual int Dispatcher_AuctionSearchByNoItmeKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    cVar2 = PacketBuf::get_short(param_2,&uStack_3a);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc749,
                       "virtual int Dispatcher_AuctionSearchByNoItmeKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    cVar2 = PacketBuf::get_byte(param_2,&uStack_38);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc74a,
                       "virtual int Dispatcher_AuctionSearchByNoItmeKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    cVar2 = PacketBuf::get_byte(param_2,&uStack_37);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc74b,
                       "virtual int Dispatcher_AuctionSearchByNoItmeKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    cVar2 = PacketBuf::get_byte(param_2,&uStack_36);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc74c,
                       "virtual int Dispatcher_AuctionSearchByNoItmeKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    cVar2 = PacketBuf::get_byte(param_2,&uStack_35);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc74d,
                       "virtual int Dispatcher_AuctionSearchByNoItmeKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    cVar2 = PacketBuf::get_byte(param_2,auStack_34);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc74e,
                       "virtual int Dispatcher_AuctionSearchByNoItmeKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    CCeraAuctionServerProxy::SendPacket(GlobalData::s_cera_auction_proxy,(PACKET_HEADER *)local_58);
  }
  else {
    PCK_AUCTION_SEARCH_BY_NOITEMKEY_GA::PCK_AUCTION_SEARCH_BY_NOITEMKEY_GA(local_8b);
    local_79 = CUser::GetUID(param_1);
    local_75 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    cVar2 = PacketBuf::get_int(param_2,&uStack_71);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc760,
                       "virtual int Dispatcher_AuctionSearchByNoItmeKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    cVar2 = PacketBuf::get_short(param_2,&uStack_6d);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc761,
                       "virtual int Dispatcher_AuctionSearchByNoItmeKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    cVar2 = PacketBuf::get_byte(param_2,&uStack_6b);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc762,
                       "virtual int Dispatcher_AuctionSearchByNoItmeKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    cVar2 = PacketBuf::get_byte(param_2,&uStack_6a);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc763,
                       "virtual int Dispatcher_AuctionSearchByNoItmeKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    cVar2 = PacketBuf::get_byte(param_2,&uStack_69);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc764,
                       "virtual int Dispatcher_AuctionSearchByNoItmeKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    cVar2 = PacketBuf::get_byte(param_2,&uStack_68);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc765,
                       "virtual int Dispatcher_AuctionSearchByNoItmeKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    cVar2 = PacketBuf::get_byte(param_2,&uStack_67);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc766,
                       "virtual int Dispatcher_AuctionSearchByNoItmeKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    cVar2 = PacketBuf::get_short(param_2,&sStack_66);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc76a,
                       "virtual int Dispatcher_AuctionSearchByNoItmeKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    cVar2 = PacketBuf::get_short(param_2,&sStack_64);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc76c,
                       "virtual int Dispatcher_AuctionSearchByNoItmeKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    cVar2 = PacketBuf::get_short(param_2,asStack_62);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc76e,
                       "virtual int Dispatcher_AuctionSearchByNoItmeKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    cVar2 = PacketBuf::get_byte(param_2,&uStack_5a);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc772,
                       "virtual int Dispatcher_AuctionSearchByNoItmeKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    cVar2 = PacketBuf::get_byte(param_2,&uStack_59);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc773,
                       "virtual int Dispatcher_AuctionSearchByNoItmeKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    CAuctionServerProxy::SendPacket(GlobalData::s_auction_proxy,(PACKET_HEADER *)local_8b);
  }
  local_10 = 0;
  while( true ) {
    if (4 < local_10) {
      return 0;
    }
    iVar4 = *(int *)(gmList + local_10 * 4);
    iVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    if (iVar4 == iVar5) break;
    local_10 = local_10 + 1;
  }
  uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  cMyTrace::cMyTrace(local_24,
                     "virtual int Dispatcher_AuctionSearchByNoItmeKey::dispatch_sig(CUser*, PacketBuf&)"
                     ,0xc784,0);
  cMyTrace::operator()(local_24,"Trace Auction Delay, %s(%d)","REQ AuctionSearchByNoItmeKey",uVar3);
  return 0;
}
```
