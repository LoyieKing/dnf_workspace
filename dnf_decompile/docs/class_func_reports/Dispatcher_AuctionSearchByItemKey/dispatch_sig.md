# dispatch_sig

`_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_AuctionSearchByItemKey::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_AuctionSearchByItemKey` | `0x082159fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082159fc  _ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_AuctionSearchByItemKey::dispatch_sig(CUser*, PacketBuf&)
# range [0x082159fc, 0x082161e3]
082159fc +0x000:  push   %ebp
082159fd +0x001:  mov    %esp,%ebp
082159ff +0x003:  push   %ebx
08215a00 +0x004:  sub    $0x144,%esp
08215a06 +0x00a:  lea    -0x29(%ebp),%eax
08215a09 +0x00d:  mov    %eax,0x4(%esp)
08215a0d +0x011:  mov    0x10(%ebp),%eax
08215a10 +0x014:  mov    %eax,(%esp)
08215a13 +0x017:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
08215a18 +0x01c:  xor    $0x1,%eax
08215a1b +0x01f:  test   %al,%al
08215a1d +0x021:  je     08215a48 <+0x4c>
08215a1f +0x023:  movl   $0x0,0xc(%esp)
08215a27 +0x02b:  movl   $0x0,0x8(%esp)
08215a2f +0x033:  movl   $&_ZZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08215a37 +0x03b:  movl   $0xc690,(%esp)
08215a3e +0x042:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08215a43 +0x047:  jmp    082161db <+0x7df>
08215a48 +0x04c:  movzbl -0x29(%ebp),%eax
08215a4c +0x050:  cmp    $0x1,%al
08215a4e +0x052:  jbe    08215a79 <+0x7d>
08215a50 +0x054:  movl   $0x0,0xc(%esp)
08215a58 +0x05c:  movl   $0x0,0x8(%esp)
08215a60 +0x064:  movl   $&_ZZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08215a68 +0x06c:  movl   $0xc693,(%esp)
08215a6f +0x073:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08215a74 +0x078:  jmp    082161db <+0x7df>
08215a79 +0x07d:  movzbl -0x29(%ebp),%eax
08215a7d +0x081:  movzbl %al,%eax
08215a80 +0x084:  mov    %eax,-0x18(%ebp)
08215a83 +0x087:  mov    -0x18(%ebp),%eax
08215a86 +0x08a:  movzbl %al,%eax
08215a89 +0x08d:  mov    %eax,(%esp)
08215a8c +0x090:  call   082138f2 <_Z27IsAuctionServerDisconnectedh>  ; IsAuctionServerDisconnected(unsigned char)
08215a91 +0x095:  test   %al,%al
08215a93 +0x097:  je     08215ac1 <+0xc5>
08215a95 +0x099:  mov    -0x18(%ebp),%eax
08215a98 +0x09c:  mov    %eax,0xc(%esp)
08215a9c +0x0a0:  movl   $0x8c,0x8(%esp)
08215aa4 +0x0a8:  movl   $0xbd,0x4(%esp)
08215aac +0x0b0:  mov    0xc(%ebp),%eax
08215aaf +0x0b3:  mov    %eax,(%esp)
08215ab2 +0x0b6:  call   0867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PAY_TYPE)
08215ab7 +0x0bb:  mov    $0x0,%eax
08215abc +0x0c0:  jmp    082161db <+0x7df>
08215ac1 +0x0c5:  mov    0xc(%ebp),%eax
08215ac4 +0x0c8:  mov    %eax,(%esp)
08215ac7 +0x0cb:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08215acc +0x0d0:  cmp    $0x2,%eax
08215acf +0x0d3:  jle    08215ae0 <+0xe4>
08215ad1 +0x0d5:  mov    0xc(%ebp),%eax
08215ad4 +0x0d8:  mov    %eax,(%esp)
08215ad7 +0x0db:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08215adc +0x0e0:  test   %eax,%eax
08215ade +0x0e2:  jne    08215ae7 <+0xeb>
08215ae0 +0x0e4:  mov    $0x1,%eax
08215ae5 +0x0e9:  jmp    08215aec <+0xf0>
08215ae7 +0x0eb:  mov    $0x0,%eax
08215aec +0x0f0:  test   %al,%al
08215aee +0x0f2:  je     08215b19 <+0x11d>
08215af0 +0x0f4:  movl   $0x0,0xc(%esp)
08215af8 +0x0fc:  movl   $0x0,0x8(%esp)
08215b00 +0x104:  movl   $&_ZZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08215b08 +0x10c:  movl   $0xc6b7,(%esp)
08215b0f +0x113:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08215b14 +0x118:  jmp    082161db <+0x7df>
08215b19 +0x11d:  cmpl   $0x1,-0x18(%ebp)
08215b1d +0x121:  jne    08215d7e <+0x382>
08215b23 +0x127:  lea    -0xb5(%ebp),%eax
08215b29 +0x12d:  mov    %eax,(%esp)
08215b2c +0x130:  call   0822ea84 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x412e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x412e
08215b31 +0x135:  mov    0xc(%ebp),%eax
08215b34 +0x138:  mov    %eax,(%esp)
08215b37 +0x13b:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08215b3c +0x140:  mov    %eax,-0xa3(%ebp)
08215b42 +0x146:  mov    0xc(%ebp),%eax
08215b45 +0x149:  mov    %eax,(%esp)
08215b48 +0x14c:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08215b4d +0x151:  mov    %eax,-0x9f(%ebp)
08215b53 +0x157:  lea    -0xb5(%ebp),%eax
08215b59 +0x15d:  add    $0x1a,%eax
08215b5c +0x160:  mov    %eax,0x4(%esp)
08215b60 +0x164:  mov    0x10(%ebp),%eax
08215b63 +0x167:  mov    %eax,(%esp)
08215b66 +0x16a:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
08215b6b +0x16f:  xor    $0x1,%eax
08215b6e +0x172:  test   %al,%al
08215b70 +0x174:  je     08215b9b <+0x19f>
08215b72 +0x176:  movl   $0x0,0xc(%esp)
08215b7a +0x17e:  movl   $0x0,0x8(%esp)
08215b82 +0x186:  movl   $&_ZZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08215b8a +0x18e:  movl   $0xc6c0,(%esp)
08215b91 +0x195:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08215b96 +0x19a:  jmp    082161db <+0x7df>
08215b9b +0x19f:  lea    -0xb5(%ebp),%eax
08215ba1 +0x1a5:  add    $0x1e,%eax
08215ba4 +0x1a8:  mov    %eax,0x4(%esp)
08215ba8 +0x1ac:  mov    0x10(%ebp),%eax
08215bab +0x1af:  mov    %eax,(%esp)
08215bae +0x1b2:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
08215bb3 +0x1b7:  xor    $0x1,%eax
08215bb6 +0x1ba:  test   %al,%al
08215bb8 +0x1bc:  je     08215be3 <+0x1e7>
08215bba +0x1be:  movl   $0x0,0xc(%esp)
08215bc2 +0x1c6:  movl   $0x0,0x8(%esp)
08215bca +0x1ce:  movl   $&_ZZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08215bd2 +0x1d6:  movl   $0xc6c1,(%esp)
08215bd9 +0x1dd:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08215bde +0x1e2:  jmp    082161db <+0x7df>
08215be3 +0x1e7:  lea    -0xb5(%ebp),%eax
08215be9 +0x1ed:  add    $0x1f,%eax
08215bec +0x1f0:  mov    %eax,0x4(%esp)
08215bf0 +0x1f4:  mov    0x10(%ebp),%eax
08215bf3 +0x1f7:  mov    %eax,(%esp)
08215bf6 +0x1fa:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
08215bfb +0x1ff:  xor    $0x1,%eax
08215bfe +0x202:  test   %al,%al
08215c00 +0x204:  je     08215c2b <+0x22f>
08215c02 +0x206:  movl   $0x0,0xc(%esp)
08215c0a +0x20e:  movl   $0x0,0x8(%esp)
08215c12 +0x216:  movl   $&_ZZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08215c1a +0x21e:  movl   $0xc6c2,(%esp)
08215c21 +0x225:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08215c26 +0x22a:  jmp    082161db <+0x7df>
08215c2b +0x22f:  lea    -0xb5(%ebp),%eax
08215c31 +0x235:  add    $0x20,%eax
08215c34 +0x238:  mov    %eax,0x4(%esp)
08215c38 +0x23c:  mov    0x10(%ebp),%eax
08215c3b +0x23f:  mov    %eax,(%esp)
08215c3e +0x242:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
08215c43 +0x247:  xor    $0x1,%eax
08215c46 +0x24a:  test   %al,%al
08215c48 +0x24c:  je     08215c73 <+0x277>
08215c4a +0x24e:  movl   $0x0,0xc(%esp)
08215c52 +0x256:  movl   $0x0,0x8(%esp)
08215c5a +0x25e:  movl   $&_ZZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08215c62 +0x266:  movl   $0xc6c3,(%esp)
08215c69 +0x26d:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08215c6e +0x272:  jmp    082161db <+0x7df>
08215c73 +0x277:  lea    -0xb5(%ebp),%eax
08215c79 +0x27d:  add    $0x21,%eax
08215c7c +0x280:  mov    %eax,0x4(%esp)
08215c80 +0x284:  mov    0x10(%ebp),%eax
08215c83 +0x287:  mov    %eax,(%esp)
08215c86 +0x28a:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
08215c8b +0x28f:  xor    $0x1,%eax
08215c8e +0x292:  test   %al,%al
08215c90 +0x294:  je     08215cbb <+0x2bf>
08215c92 +0x296:  movl   $0x0,0xc(%esp)
08215c9a +0x29e:  movl   $0x0,0x8(%esp)
08215ca2 +0x2a6:  movl   $&_ZZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08215caa +0x2ae:  movl   $0xc6c4,(%esp)
08215cb1 +0x2b5:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08215cb6 +0x2ba:  jmp    082161db <+0x7df>
08215cbb +0x2bf:  movzbl -0x95(%ebp),%eax
08215cc2 +0x2c6:  cmp    $0x14,%al
08215cc4 +0x2c8:  jbe    08215cef <+0x2f3>
08215cc6 +0x2ca:  movl   $0x0,0xc(%esp)
08215cce +0x2d2:  movl   $0x0,0x8(%esp)
08215cd6 +0x2da:  movl   $&_ZZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08215cde +0x2e2:  movl   $0xc6c7,(%esp)
08215ce5 +0x2e9:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08215cea +0x2ee:  jmp    082161db <+0x7df>
08215cef +0x2f3:  movl   $0x0,-0x14(%ebp)
08215cf6 +0x2fa:  jmp    08215d4e <+0x352>
08215cf8 +0x2fc:  lea    -0x30(%ebp),%eax
08215cfb +0x2ff:  mov    %eax,0x4(%esp)
08215cff +0x303:  mov    0x10(%ebp),%eax
08215d02 +0x306:  mov    %eax,(%esp)
08215d05 +0x309:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
08215d0a +0x30e:  xor    $0x1,%eax
08215d0d +0x311:  test   %al,%al
08215d0f +0x313:  je     08215d3a <+0x33e>
08215d11 +0x315:  movl   $0x0,0xc(%esp)
08215d19 +0x31d:  movl   $0x0,0x8(%esp)
08215d21 +0x325:  movl   $&_ZZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08215d29 +0x32d:  movl   $0xc6cc,(%esp)
08215d30 +0x334:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08215d35 +0x339:  jmp    082161db <+0x7df>
08215d3a +0x33e:  mov    -0x14(%ebp),%edx
08215d3d +0x341:  mov    -0x30(%ebp),%eax
08215d40 +0x344:  add    $0xc,%edx
08215d43 +0x347:  mov    %eax,-0xb4(%ebp,%edx,4)
08215d4a +0x34e:  addl   $0x1,-0x14(%ebp)
08215d4e +0x352:  movzbl -0x95(%ebp),%eax
08215d55 +0x359:  movzbl %al,%eax
08215d58 +0x35c:  cmp    -0x14(%ebp),%eax
08215d5b +0x35f:  setg   %al
08215d5e +0x362:  test   %al,%al
08215d60 +0x364:  jne    08215cf8 <+0x2fc>
08215d62 +0x366:  mov    &_ZN10GlobalData20s_cera_auction_proxyE,%eax
08215d67 +0x36b:  lea    -0xb5(%ebp),%edx
08215d6d +0x371:  mov    %edx,0x4(%esp)
08215d71 +0x375:  mov    %eax,(%esp)
08215d74 +0x378:  call   082f7c2c <_ZN23CCeraAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE>  ; CCeraAuctionServerProxy::SendPacket(nsl::PACKET_HEADER*)
08215d79 +0x37d:  jmp    0821614d <+0x751>
08215d7e +0x382:  lea    -0x136(%ebp),%eax
08215d84 +0x388:  mov    %eax,(%esp)
08215d87 +0x38b:  call   0822e6aa <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3d54>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3d54
08215d8c +0x390:  mov    0xc(%ebp),%eax
08215d8f +0x393:  mov    %eax,(%esp)
08215d92 +0x396:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08215d97 +0x39b:  mov    %eax,-0x124(%ebp)
08215d9d +0x3a1:  mov    0xc(%ebp),%eax
08215da0 +0x3a4:  mov    %eax,(%esp)
08215da3 +0x3a7:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08215da8 +0x3ac:  mov    %eax,-0x120(%ebp)
08215dae +0x3b2:  lea    -0x136(%ebp),%eax
08215db4 +0x3b8:  add    $0x1a,%eax
08215db7 +0x3bb:  mov    %eax,0x4(%esp)
08215dbb +0x3bf:  mov    0x10(%ebp),%eax
08215dbe +0x3c2:  mov    %eax,(%esp)
08215dc1 +0x3c5:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
08215dc6 +0x3ca:  xor    $0x1,%eax
08215dc9 +0x3cd:  test   %al,%al
08215dcb +0x3cf:  je     08215df6 <+0x3fa>
08215dcd +0x3d1:  movl   $0x0,0xc(%esp)
08215dd5 +0x3d9:  movl   $0x0,0x8(%esp)
08215ddd +0x3e1:  movl   $&_ZZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08215de5 +0x3e9:  movl   $0xc6e1,(%esp)
08215dec +0x3f0:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08215df1 +0x3f5:  jmp    082161db <+0x7df>
08215df6 +0x3fa:  lea    -0x136(%ebp),%eax
08215dfc +0x400:  add    $0x1e,%eax
08215dff +0x403:  mov    %eax,0x4(%esp)
08215e03 +0x407:  mov    0x10(%ebp),%eax
08215e06 +0x40a:  mov    %eax,(%esp)
08215e09 +0x40d:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
08215e0e +0x412:  xor    $0x1,%eax
08215e11 +0x415:  test   %al,%al
08215e13 +0x417:  je     08215e3e <+0x442>
08215e15 +0x419:  movl   $0x0,0xc(%esp)
08215e1d +0x421:  movl   $0x0,0x8(%esp)
08215e25 +0x429:  movl   $&_ZZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08215e2d +0x431:  movl   $0xc6e2,(%esp)
08215e34 +0x438:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08215e39 +0x43d:  jmp    082161db <+0x7df>
08215e3e +0x442:  lea    -0x136(%ebp),%eax
08215e44 +0x448:  add    $0x1f,%eax
08215e47 +0x44b:  mov    %eax,0x4(%esp)
08215e4b +0x44f:  mov    0x10(%ebp),%eax
08215e4e +0x452:  mov    %eax,(%esp)
08215e51 +0x455:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
08215e56 +0x45a:  xor    $0x1,%eax
08215e59 +0x45d:  test   %al,%al
08215e5b +0x45f:  je     08215e86 <+0x48a>
08215e5d +0x461:  movl   $0x0,0xc(%esp)
08215e65 +0x469:  movl   $0x0,0x8(%esp)
08215e6d +0x471:  movl   $&_ZZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08215e75 +0x479:  movl   $0xc6e3,(%esp)
08215e7c +0x480:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08215e81 +0x485:  jmp    082161db <+0x7df>
08215e86 +0x48a:  lea    -0x136(%ebp),%eax
08215e8c +0x490:  add    $0x20,%eax
08215e8f +0x493:  mov    %eax,0x4(%esp)
08215e93 +0x497:  mov    0x10(%ebp),%eax
08215e96 +0x49a:  mov    %eax,(%esp)
08215e99 +0x49d:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
08215e9e +0x4a2:  xor    $0x1,%eax
08215ea1 +0x4a5:  test   %al,%al
08215ea3 +0x4a7:  je     08215ece <+0x4d2>
08215ea5 +0x4a9:  movl   $0x0,0xc(%esp)
08215ead +0x4b1:  movl   $0x0,0x8(%esp)
08215eb5 +0x4b9:  movl   $&_ZZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08215ebd +0x4c1:  movl   $0xc6e4,(%esp)
08215ec4 +0x4c8:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08215ec9 +0x4cd:  jmp    082161db <+0x7df>
08215ece +0x4d2:  lea    -0x136(%ebp),%eax
08215ed4 +0x4d8:  add    $0x21,%eax
08215ed7 +0x4db:  mov    %eax,0x4(%esp)
08215edb +0x4df:  mov    0x10(%ebp),%eax
08215ede +0x4e2:  mov    %eax,(%esp)
08215ee1 +0x4e5:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
08215ee6 +0x4ea:  xor    $0x1,%eax
08215ee9 +0x4ed:  test   %al,%al
08215eeb +0x4ef:  je     08215f16 <+0x51a>
08215eed +0x4f1:  movl   $0x0,0xc(%esp)
08215ef5 +0x4f9:  movl   $0x0,0x8(%esp)
08215efd +0x501:  movl   $&_ZZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08215f05 +0x509:  movl   $0xc6e5,(%esp)
08215f0c +0x510:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08215f11 +0x515:  jmp    082161db <+0x7df>
08215f16 +0x51a:  movzbl -0x116(%ebp),%eax
08215f1d +0x521:  cmp    $0x14,%al
08215f1f +0x523:  jbe    08215f4a <+0x54e>
08215f21 +0x525:  movl   $0x0,0xc(%esp)
08215f29 +0x52d:  movl   $0x0,0x8(%esp)
08215f31 +0x535:  movl   $&_ZZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08215f39 +0x53d:  movl   $0xc6e8,(%esp)
08215f40 +0x544:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08215f45 +0x549:  jmp    082161db <+0x7df>
08215f4a +0x54e:  movl   $0x0,-0x10(%ebp)
08215f51 +0x555:  jmp    08215fa9 <+0x5ad>
08215f53 +0x557:  lea    -0x34(%ebp),%eax
08215f56 +0x55a:  mov    %eax,0x4(%esp)
08215f5a +0x55e:  mov    0x10(%ebp),%eax
08215f5d +0x561:  mov    %eax,(%esp)
08215f60 +0x564:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
08215f65 +0x569:  xor    $0x1,%eax
08215f68 +0x56c:  test   %al,%al
08215f6a +0x56e:  je     08215f95 <+0x599>
08215f6c +0x570:  movl   $0x0,0xc(%esp)
08215f74 +0x578:  movl   $0x0,0x8(%esp)
08215f7c +0x580:  movl   $&_ZZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08215f84 +0x588:  movl   $0xc6ed,(%esp)
08215f8b +0x58f:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08215f90 +0x594:  jmp    082161db <+0x7df>
08215f95 +0x599:  mov    -0x10(%ebp),%edx
08215f98 +0x59c:  mov    -0x34(%ebp),%eax
08215f9b +0x59f:  add    $0xc,%edx
08215f9e +0x5a2:  mov    %eax,-0x135(%ebp,%edx,4)
08215fa5 +0x5a9:  addl   $0x1,-0x10(%ebp)
08215fa9 +0x5ad:  movzbl -0x116(%ebp),%eax
08215fb0 +0x5b4:  movzbl %al,%eax
08215fb3 +0x5b7:  cmp    -0x10(%ebp),%eax
08215fb6 +0x5ba:  setg   %al
08215fb9 +0x5bd:  test   %al,%al
08215fbb +0x5bf:  jne    08215f53 <+0x557>
08215fbd +0x5c1:  lea    -0x136(%ebp),%eax
08215fc3 +0x5c7:  add    $0x23,%eax
08215fc6 +0x5ca:  mov    %eax,0x4(%esp)
08215fca +0x5ce:  mov    0x10(%ebp),%eax
08215fcd +0x5d1:  mov    %eax,(%esp)
08215fd0 +0x5d4:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
08215fd5 +0x5d9:  xor    $0x1,%eax
08215fd8 +0x5dc:  test   %al,%al
08215fda +0x5de:  je     08216005 <+0x609>
08215fdc +0x5e0:  movl   $0x0,0xc(%esp)
08215fe4 +0x5e8:  movl   $0x0,0x8(%esp)
08215fec +0x5f0:  movl   $&_ZZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08215ff4 +0x5f8:  movl   $0xc6f3,(%esp)
08215ffb +0x5ff:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08216000 +0x604:  jmp    082161db <+0x7df>
08216005 +0x609:  lea    -0x136(%ebp),%eax
0821600b +0x60f:  add    $0x25,%eax
0821600e +0x612:  mov    %eax,0x4(%esp)
08216012 +0x616:  mov    0x10(%ebp),%eax
08216015 +0x619:  mov    %eax,(%esp)
08216018 +0x61c:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
0821601d +0x621:  xor    $0x1,%eax
08216020 +0x624:  test   %al,%al
08216022 +0x626:  je     0821604d <+0x651>
08216024 +0x628:  movl   $0x0,0xc(%esp)
0821602c +0x630:  movl   $0x0,0x8(%esp)
08216034 +0x638:  movl   $&_ZZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821603c +0x640:  movl   $0xc6f5,(%esp)
08216043 +0x647:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08216048 +0x64c:  jmp    082161db <+0x7df>
0821604d +0x651:  lea    -0x136(%ebp),%eax
08216053 +0x657:  add    $0x27,%eax
08216056 +0x65a:  mov    %eax,0x4(%esp)
0821605a +0x65e:  mov    0x10(%ebp),%eax
0821605d +0x661:  mov    %eax,(%esp)
08216060 +0x664:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
08216065 +0x669:  xor    $0x1,%eax
08216068 +0x66c:  test   %al,%al
0821606a +0x66e:  je     08216095 <+0x699>
0821606c +0x670:  movl   $0x0,0xc(%esp)
08216074 +0x678:  movl   $0x0,0x8(%esp)
0821607c +0x680:  movl   $&_ZZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08216084 +0x688:  movl   $0xc6f7,(%esp)
0821608b +0x68f:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08216090 +0x694:  jmp    082161db <+0x7df>
08216095 +0x699:  lea    -0x136(%ebp),%eax
0821609b +0x69f:  add    $0x23,%eax
0821609e +0x6a2:  mov    %eax,(%esp)
082160a1 +0x6a5:  call   0822ac30 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2da
082160a6 +0x6aa:  lea    -0x136(%ebp),%eax
082160ac +0x6b0:  add    $0x2f,%eax
082160af +0x6b3:  mov    %eax,0x4(%esp)
082160b3 +0x6b7:  mov    0x10(%ebp),%eax
082160b6 +0x6ba:  mov    %eax,(%esp)
082160b9 +0x6bd:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
082160be +0x6c2:  xor    $0x1,%eax
082160c1 +0x6c5:  test   %al,%al
082160c3 +0x6c7:  je     082160ee <+0x6f2>
082160c5 +0x6c9:  movl   $0x0,0xc(%esp)
082160cd +0x6d1:  movl   $0x0,0x8(%esp)
082160d5 +0x6d9:  movl   $&_ZZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082160dd +0x6e1:  movl   $0xc6fd,(%esp)
082160e4 +0x6e8:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082160e9 +0x6ed:  jmp    082161db <+0x7df>
082160ee +0x6f2:  lea    -0x136(%ebp),%eax
082160f4 +0x6f8:  add    $0x30,%eax
082160f7 +0x6fb:  mov    %eax,0x4(%esp)
082160fb +0x6ff:  mov    0x10(%ebp),%eax
082160fe +0x702:  mov    %eax,(%esp)
08216101 +0x705:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
08216106 +0x70a:  xor    $0x1,%eax
08216109 +0x70d:  test   %al,%al
0821610b +0x70f:  je     08216136 <+0x73a>
0821610d +0x711:  movl   $0x0,0xc(%esp)
08216115 +0x719:  movl   $0x0,0x8(%esp)
0821611d +0x721:  movl   $&_ZZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08216125 +0x729:  movl   $0xc6fe,(%esp)
0821612c +0x730:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08216131 +0x735:  jmp    082161db <+0x7df>
08216136 +0x73a:  mov    &_ZN10GlobalData15s_auction_proxyE,%eax
0821613b +0x73f:  lea    -0x136(%ebp),%edx
08216141 +0x745:  mov    %edx,0x4(%esp)
08216145 +0x749:  mov    %eax,(%esp)
08216148 +0x74c:  call   082f7b1c <_ZN19CAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE>  ; CAuctionServerProxy::SendPacket(nsl::PACKET_HEADER*)
0821614d +0x751:  movl   $0x0,-0xc(%ebp)
08216154 +0x758:  jmp    082161cb <+0x7cf>
08216156 +0x75a:  mov    -0xc(%ebp),%eax
08216159 +0x75d:  mov    &_ZL6gmList(,%eax,4),%eax
08216160 +0x764:  mov    %eax,%ebx
08216162 +0x766:  mov    0xc(%ebp),%eax
08216165 +0x769:  mov    %eax,(%esp)
08216168 +0x76c:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0821616d +0x771:  cmp    %eax,%ebx
0821616f +0x773:  sete   %al
08216172 +0x776:  test   %al,%al
08216174 +0x778:  je     082161c7 <+0x7cb>
08216176 +0x77a:  mov    0xc(%ebp),%eax
08216179 +0x77d:  mov    %eax,(%esp)
0821617c +0x780:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08216181 +0x785:  mov    %eax,%ebx
08216183 +0x787:  movl   $0x0,0xc(%esp)
0821618b +0x78f:  movl   $0xc70f,0x8(%esp)
08216193 +0x797:  movl   $&_ZZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821619b +0x79f:  lea    -0x28(%ebp),%eax
0821619e +0x7a2:  mov    %eax,(%esp)
082161a1 +0x7a5:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082161a6 +0x7aa:  mov    %ebx,0xc(%esp)
082161aa +0x7ae:  movl   $"REQ AuctionSearchByItemKey",0x8(%esp)
082161b2 +0x7b6:  movl   $"Trace Auction Delay, %s(%d)",0x4(%esp)
082161ba +0x7be:  lea    -0x28(%ebp),%eax
082161bd +0x7c1:  mov    %eax,(%esp)
082161c0 +0x7c4:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082161c5 +0x7c9:  jmp    082161d6 <+0x7da>
082161c7 +0x7cb:  addl   $0x1,-0xc(%ebp)
082161cb +0x7cf:  cmpl   $0x4,-0xc(%ebp)
082161cf +0x7d3:  setle  %al
082161d2 +0x7d6:  test   %al,%al
082161d4 +0x7d8:  jne    08216156 <+0x75a>
082161d6 +0x7da:  mov    $0x0,%eax
082161db +0x7df:  add    $0x144,%esp
082161e1 +0x7e5:  pop    %ebx
082161e2 +0x7e6:  pop    %ebp
082161e3 +0x7e7:  ret
```

## 反编译 C

```c
// Dispatcher_AuctionSearchByItemKey::dispatch_sig @ 0x82159fc

/* Dispatcher_AuctionSearchByItemKey::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_AuctionSearchByItemKey::dispatch_sig
          (Dispatcher_AuctionSearchByItemKey *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  PCK_AUCTION_SEARCH_BY_ITEMKEY_GA local_13a;
  uint auStack_139 [4];
  undefined4 local_128;
  undefined4 local_124;
  uint uStack_120;
  uchar uStack_11c;
  uchar uStack_11b;
  byte local_11a;
  ushort uStack_119;
  ROI_Category aRStack_117 [2];
  short sStack_115;
  short asStack_113 [4];
  uchar uStack_10b;
  uchar auStack_10a [81];
  PCK_AUCTION_SEARCH_BY_ITEMKEY_GP local_b9;
  uint auStack_b8 [4];
  undefined4 local_a7;
  undefined4 local_a3;
  uint uStack_9f;
  uchar uStack_9b;
  uchar uStack_9a;
  byte local_99;
  ushort auStack_98 [48];
  uint local_38;
  uint local_34;
  byte local_2d;
  cMyTrace local_2c [16];
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  cVar2 = PacketBuf::get_byte(param_2,&local_2d);
  if (cVar2 != '\x01') {
    uVar3 = LineFunc(0xc690,
                     "virtual int Dispatcher_AuctionSearchByItemKey::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar3;
  }
  if (1 < local_2d) {
    uVar3 = LineFunc(0xc693,
                     "virtual int Dispatcher_AuctionSearchByItemKey::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar3;
  }
  local_1c = (uint)local_2d;
  cVar2 = IsAuctionServerDisconnected(local_2d);
  if (cVar2 != '\0') {
    CUser::SendCmdErrorPacket(param_1,0xbd,0x8c,local_1c);
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
    uVar3 = LineFunc(0xc6b7,
                     "virtual int Dispatcher_AuctionSearchByItemKey::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar3;
  }
  if (local_1c == 1) {
    PCK_AUCTION_SEARCH_BY_ITEMKEY_GP::PCK_AUCTION_SEARCH_BY_ITEMKEY_GP(&local_b9);
    local_a7 = CUser::GetUID(param_1);
    local_a3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    cVar2 = PacketBuf::get_int(param_2,&uStack_9f);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc6c0,
                       "virtual int Dispatcher_AuctionSearchByItemKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    cVar2 = PacketBuf::get_byte(param_2,&uStack_9b);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc6c1,
                       "virtual int Dispatcher_AuctionSearchByItemKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    cVar2 = PacketBuf::get_byte(param_2,&uStack_9a);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc6c2,
                       "virtual int Dispatcher_AuctionSearchByItemKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    cVar2 = PacketBuf::get_byte(param_2,&local_99);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc6c3,
                       "virtual int Dispatcher_AuctionSearchByItemKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    cVar2 = PacketBuf::get_short(param_2,auStack_98);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc6c4,
                       "virtual int Dispatcher_AuctionSearchByItemKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    if (0x14 < local_99) {
      uVar3 = LineFunc(0xc6c7,
                       "virtual int Dispatcher_AuctionSearchByItemKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    for (local_18 = 0; local_18 < (int)(uint)local_99; local_18 = local_18 + 1) {
      cVar2 = PacketBuf::get_int(param_2,&local_34);
      if (cVar2 != '\x01') {
        uVar3 = LineFunc(0xc6cc,
                         "virtual int Dispatcher_AuctionSearchByItemKey::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
        return uVar3;
      }
      auStack_b8[local_18 + 0xc] = local_34;
    }
    CCeraAuctionServerProxy::SendPacket(GlobalData::s_cera_auction_proxy,(PACKET_HEADER *)&local_b9)
    ;
  }
  else {
    PCK_AUCTION_SEARCH_BY_ITEMKEY_GA::PCK_AUCTION_SEARCH_BY_ITEMKEY_GA(&local_13a);
    local_128 = CUser::GetUID(param_1);
    local_124 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    cVar2 = PacketBuf::get_int(param_2,&uStack_120);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc6e1,
                       "virtual int Dispatcher_AuctionSearchByItemKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    cVar2 = PacketBuf::get_byte(param_2,&uStack_11c);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc6e2,
                       "virtual int Dispatcher_AuctionSearchByItemKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    cVar2 = PacketBuf::get_byte(param_2,&uStack_11b);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc6e3,
                       "virtual int Dispatcher_AuctionSearchByItemKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    cVar2 = PacketBuf::get_byte(param_2,&local_11a);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc6e4,
                       "virtual int Dispatcher_AuctionSearchByItemKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    cVar2 = PacketBuf::get_short(param_2,&uStack_119);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc6e5,
                       "virtual int Dispatcher_AuctionSearchByItemKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    if (0x14 < local_11a) {
      uVar3 = LineFunc(0xc6e8,
                       "virtual int Dispatcher_AuctionSearchByItemKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    for (local_14 = 0; local_14 < (int)(uint)local_11a; local_14 = local_14 + 1) {
      cVar2 = PacketBuf::get_int(param_2,&local_38);
      if (cVar2 != '\x01') {
        uVar3 = LineFunc(0xc6ed,
                         "virtual int Dispatcher_AuctionSearchByItemKey::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
        return uVar3;
      }
      auStack_139[local_14 + 0xc] = local_38;
    }
    cVar2 = PacketBuf::get_short(param_2,(short *)aRStack_117);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc6f3,
                       "virtual int Dispatcher_AuctionSearchByItemKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    cVar2 = PacketBuf::get_short(param_2,&sStack_115);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc6f5,
                       "virtual int Dispatcher_AuctionSearchByItemKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    cVar2 = PacketBuf::get_short(param_2,asStack_113);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc6f7,
                       "virtual int Dispatcher_AuctionSearchByItemKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    ROI_Category::_sort(aRStack_117);
    cVar2 = PacketBuf::get_byte(param_2,&uStack_10b);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc6fd,
                       "virtual int Dispatcher_AuctionSearchByItemKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    cVar2 = PacketBuf::get_byte(param_2,auStack_10a);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc6fe,
                       "virtual int Dispatcher_AuctionSearchByItemKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    CAuctionServerProxy::SendPacket(GlobalData::s_auction_proxy,(PACKET_HEADER *)&local_13a);
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
  cMyTrace::cMyTrace(local_2c,
                     "virtual int Dispatcher_AuctionSearchByItemKey::dispatch_sig(CUser*, PacketBuf&)"
                     ,0xc70f,0);
  cMyTrace::operator()(local_2c,"Trace Auction Delay, %s(%d)","REQ AuctionSearchByItemKey",uVar3);
  return 0;
}
```
