# dispatch_sig

`_ZN33Dispatcher_AuctionAskAveragePrice12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_AuctionAskAveragePrice::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_AuctionAskAveragePrice` | `0x08213940` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08213940  _ZN33Dispatcher_AuctionAskAveragePrice12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_AuctionAskAveragePrice::dispatch_sig(CUser*, PacketBuf&)
# range [0x08213940, 0x08213e14]
08213940 +0x000:  push   %ebp
08213941 +0x001:  mov    %esp,%ebp
08213943 +0x003:  push   %ebx
08213944 +0x004:  sub    $0x94,%esp
0821394a +0x00a:  lea    -0x2d(%ebp),%eax
0821394d +0x00d:  mov    %eax,0x4(%esp)
08213951 +0x011:  mov    0x10(%ebp),%eax
08213954 +0x014:  mov    %eax,(%esp)
08213957 +0x017:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
0821395c +0x01c:  xor    $0x1,%eax
0821395f +0x01f:  test   %al,%al
08213961 +0x021:  je     0821398c <+0x4c>
08213963 +0x023:  movl   $0x0,0xc(%esp)
0821396b +0x02b:  movl   $0x0,0x8(%esp)
08213973 +0x033:  movl   $&_ZZN33Dispatcher_AuctionAskAveragePrice12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821397b +0x03b:  movl   $0xc1e5,(%esp)
08213982 +0x042:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08213987 +0x047:  jmp    08213e0c <+0x4cc>
0821398c +0x04c:  movzbl -0x2d(%ebp),%eax
08213990 +0x050:  cmp    $0x1,%al
08213992 +0x052:  jbe    082139bd <+0x7d>
08213994 +0x054:  movl   $0x0,0xc(%esp)
0821399c +0x05c:  movl   $0x0,0x8(%esp)
082139a4 +0x064:  movl   $&_ZZN33Dispatcher_AuctionAskAveragePrice12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082139ac +0x06c:  movl   $0xc1e8,(%esp)
082139b3 +0x073:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082139b8 +0x078:  jmp    08213e0c <+0x4cc>
082139bd +0x07d:  movzbl -0x2d(%ebp),%eax
082139c1 +0x081:  movzbl %al,%eax
082139c4 +0x084:  mov    %eax,-0x1c(%ebp)
082139c7 +0x087:  mov    -0x1c(%ebp),%eax
082139ca +0x08a:  movzbl %al,%eax
082139cd +0x08d:  mov    %eax,(%esp)
082139d0 +0x090:  call   082138f2 <_Z27IsAuctionServerDisconnectedh>  ; IsAuctionServerDisconnected(unsigned char)
082139d5 +0x095:  test   %al,%al
082139d7 +0x097:  je     08213a05 <+0xc5>
082139d9 +0x099:  mov    -0x1c(%ebp),%eax
082139dc +0x09c:  mov    %eax,0xc(%esp)
082139e0 +0x0a0:  movl   $0x8c,0x8(%esp)
082139e8 +0x0a8:  movl   $0xb9,0x4(%esp)
082139f0 +0x0b0:  mov    0xc(%ebp),%eax
082139f3 +0x0b3:  mov    %eax,(%esp)
082139f6 +0x0b6:  call   0867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PAY_TYPE)
082139fb +0x0bb:  mov    $0x0,%eax
08213a00 +0x0c0:  jmp    08213e0c <+0x4cc>
08213a05 +0x0c5:  mov    0xc(%ebp),%eax
08213a08 +0x0c8:  mov    %eax,(%esp)
08213a0b +0x0cb:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08213a10 +0x0d0:  cmp    $0x2,%eax
08213a13 +0x0d3:  jle    08213a24 <+0xe4>
08213a15 +0x0d5:  mov    0xc(%ebp),%eax
08213a18 +0x0d8:  mov    %eax,(%esp)
08213a1b +0x0db:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08213a20 +0x0e0:  test   %eax,%eax
08213a22 +0x0e2:  jne    08213a2b <+0xeb>
08213a24 +0x0e4:  mov    $0x1,%eax
08213a29 +0x0e9:  jmp    08213a30 <+0xf0>
08213a2b +0x0eb:  mov    $0x0,%eax
08213a30 +0x0f0:  test   %al,%al
08213a32 +0x0f2:  je     08213a5d <+0x11d>
08213a34 +0x0f4:  movl   $0x0,0xc(%esp)
08213a3c +0x0fc:  movl   $0x0,0x8(%esp)
08213a44 +0x104:  movl   $&_ZZN33Dispatcher_AuctionAskAveragePrice12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08213a4c +0x10c:  movl   $0xc207,(%esp)
08213a53 +0x113:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08213a58 +0x118:  jmp    08213e0c <+0x4cc>
08213a5d +0x11d:  lea    -0x82(%ebp),%eax
08213a63 +0x123:  mov    %eax,(%esp)
08213a66 +0x126:  call   0822e4d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3b82>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3b82
08213a6b +0x12b:  mov    0xc(%ebp),%eax
08213a6e +0x12e:  mov    %eax,(%esp)
08213a71 +0x131:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08213a76 +0x136:  mov    %eax,-0x70(%ebp)
08213a79 +0x139:  mov    0xc(%ebp),%eax
08213a7c +0x13c:  mov    %eax,(%esp)
08213a7f +0x13f:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08213a84 +0x144:  mov    %eax,-0x6c(%ebp)
08213a87 +0x147:  lea    -0x34(%ebp),%eax
08213a8a +0x14a:  mov    %eax,0x4(%esp)
08213a8e +0x14e:  mov    0x10(%ebp),%eax
08213a91 +0x151:  mov    %eax,(%esp)
08213a94 +0x154:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
08213a99 +0x159:  xor    $0x1,%eax
08213a9c +0x15c:  test   %al,%al
08213a9e +0x15e:  je     08213ac9 <+0x189>
08213aa0 +0x160:  movl   $0x0,0xc(%esp)
08213aa8 +0x168:  movl   $0x0,0x8(%esp)
08213ab0 +0x170:  movl   $&_ZZN33Dispatcher_AuctionAskAveragePrice12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08213ab8 +0x178:  movl   $0xc217,(%esp)
08213abf +0x17f:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08213ac4 +0x184:  jmp    08213e0c <+0x4cc>
08213ac9 +0x189:  mov    -0x34(%ebp),%eax
08213acc +0x18c:  mov    %eax,-0x68(%ebp)
08213acf +0x18f:  lea    -0x82(%ebp),%eax
08213ad5 +0x195:  add    $0x1e,%eax
08213ad8 +0x198:  mov    %eax,0x4(%esp)
08213adc +0x19c:  mov    0x10(%ebp),%eax
08213adf +0x19f:  mov    %eax,(%esp)
08213ae2 +0x1a2:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
08213ae7 +0x1a7:  xor    $0x1,%eax
08213aea +0x1aa:  test   %al,%al
08213aec +0x1ac:  je     08213b17 <+0x1d7>
08213aee +0x1ae:  movl   $0x0,0xc(%esp)
08213af6 +0x1b6:  movl   $0x0,0x8(%esp)
08213afe +0x1be:  movl   $&_ZZN33Dispatcher_AuctionAskAveragePrice12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08213b06 +0x1c6:  movl   $0xc21a,(%esp)
08213b0d +0x1cd:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08213b12 +0x1d2:  jmp    08213e0c <+0x4cc>
08213b17 +0x1d7:  cmpl   $0x1,-0x1c(%ebp)
08213b1b +0x1db:  jne    08213b6a <+0x22a>
08213b1d +0x1dd:  lea    -0x53(%ebp),%eax
08213b20 +0x1e0:  mov    %eax,(%esp)
08213b23 +0x1e3:  call   0822e94c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3ff6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3ff6
08213b28 +0x1e8:  mov    0xc(%ebp),%eax
08213b2b +0x1eb:  mov    %eax,(%esp)
08213b2e +0x1ee:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08213b33 +0x1f3:  mov    %eax,-0x41(%ebp)
08213b36 +0x1f6:  mov    0xc(%ebp),%eax
08213b39 +0x1f9:  mov    %eax,(%esp)
08213b3c +0x1fc:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08213b41 +0x201:  mov    %eax,-0x3d(%ebp)
08213b44 +0x204:  mov    -0x34(%ebp),%eax
08213b47 +0x207:  mov    %eax,-0x39(%ebp)
08213b4a +0x20a:  movzbl -0x35(%ebp),%eax
08213b4e +0x20e:  mov    %al,-0x35(%ebp)
08213b51 +0x211:  mov    &_ZN10GlobalData20s_cera_auction_proxyE,%eax
08213b56 +0x216:  lea    -0x53(%ebp),%edx
08213b59 +0x219:  mov    %edx,0x4(%esp)
08213b5d +0x21d:  mov    %eax,(%esp)
08213b60 +0x220:  call   082f7c2c <_ZN23CCeraAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE>  ; CCeraAuctionServerProxy::SendPacket(nsl::PACKET_HEADER*)
08213b65 +0x225:  jmp    08213d7e <+0x43e>
08213b6a +0x22a:  movl   $0x0,-0x14(%ebp)
08213b71 +0x231:  jmp    08213c6c <+0x32c>
08213b76 +0x236:  mov    -0x14(%ebp),%edx
08213b79 +0x239:  lea    -0x82(%ebp),%eax
08213b7f +0x23f:  add    $0x10,%edx
08213b82 +0x242:  add    %edx,%eax
08213b84 +0x244:  add    $0xf,%eax
08213b87 +0x247:  mov    %eax,0x4(%esp)
08213b8b +0x24b:  mov    0x10(%ebp),%eax
08213b8e +0x24e:  mov    %eax,(%esp)
08213b91 +0x251:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
08213b96 +0x256:  xor    $0x1,%eax
08213b99 +0x259:  test   %al,%al
08213b9b +0x25b:  je     08213bc6 <+0x286>
08213b9d +0x25d:  movl   $0x0,0xc(%esp)
08213ba5 +0x265:  movl   $0x0,0x8(%esp)
08213bad +0x26d:  movl   $&_ZZN33Dispatcher_AuctionAskAveragePrice12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08213bb5 +0x275:  movl   $0xc22f,(%esp)
08213bbc +0x27c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08213bc1 +0x281:  jmp    08213e0c <+0x4cc>
08213bc6 +0x286:  mov    -0x14(%ebp),%edx
08213bc9 +0x289:  lea    -0x82(%ebp),%eax
08213bcf +0x28f:  add    $0x10,%edx
08213bd2 +0x292:  add    %edx,%edx
08213bd4 +0x294:  add    %edx,%eax
08213bd6 +0x296:  add    $0x2,%eax
08213bd9 +0x299:  mov    %eax,0x4(%esp)
08213bdd +0x29d:  mov    0x10(%ebp),%eax
08213be0 +0x2a0:  mov    %eax,(%esp)
08213be3 +0x2a3:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
08213be8 +0x2a8:  xor    $0x1,%eax
08213beb +0x2ab:  test   %al,%al
08213bed +0x2ad:  je     08213c18 <+0x2d8>
08213bef +0x2af:  movl   $0x0,0xc(%esp)
08213bf7 +0x2b7:  movl   $0x0,0x8(%esp)
08213bff +0x2bf:  movl   $&_ZZN33Dispatcher_AuctionAskAveragePrice12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08213c07 +0x2c7:  movl   $0xc232,(%esp)
08213c0e +0x2ce:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08213c13 +0x2d3:  jmp    08213e0c <+0x4cc>
08213c18 +0x2d8:  mov    -0x14(%ebp),%edx
08213c1b +0x2db:  lea    -0x82(%ebp),%eax
08213c21 +0x2e1:  add    $0x20,%edx
08213c24 +0x2e4:  add    %edx,%eax
08213c26 +0x2e6:  add    $0xa,%eax
08213c29 +0x2e9:  mov    %eax,0x4(%esp)
08213c2d +0x2ed:  mov    0x10(%ebp),%eax
08213c30 +0x2f0:  mov    %eax,(%esp)
08213c33 +0x2f3:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
08213c38 +0x2f8:  xor    $0x1,%eax
08213c3b +0x2fb:  test   %al,%al
08213c3d +0x2fd:  je     08213c68 <+0x328>
08213c3f +0x2ff:  movl   $0x0,0xc(%esp)
08213c47 +0x307:  movl   $0x0,0x8(%esp)
08213c4f +0x30f:  movl   $&_ZZN33Dispatcher_AuctionAskAveragePrice12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08213c57 +0x317:  movl   $0xc235,(%esp)
08213c5e +0x31e:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08213c63 +0x323:  jmp    08213e0c <+0x4cc>
08213c68 +0x328:  addl   $0x1,-0x14(%ebp)
08213c6c +0x32c:  cmpl   $0x2,-0x14(%ebp)
08213c70 +0x330:  setle  %al
08213c73 +0x333:  test   %al,%al
08213c75 +0x335:  jne    08213b76 <+0x236>
08213c7b +0x33b:  mov    -0x34(%ebp),%eax
08213c7e +0x33e:  mov    %eax,%ebx
08213c80 +0x340:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08213c85 +0x345:  mov    %ebx,0x4(%esp)
08213c89 +0x349:  mov    %eax,(%esp)
08213c8c +0x34c:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08213c91 +0x351:  mov    %eax,-0x18(%ebp)
08213c94 +0x354:  cmpl   $0x0,-0x18(%ebp)
08213c98 +0x358:  jne    08213cc3 <+0x383>
08213c9a +0x35a:  movl   $0x0,0xc(%esp)
08213ca2 +0x362:  movl   $0x0,0x8(%esp)
08213caa +0x36a:  movl   $&_ZZN33Dispatcher_AuctionAskAveragePrice12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08213cb2 +0x372:  movl   $0xc23a,(%esp)
08213cb9 +0x379:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08213cbe +0x37e:  jmp    08213e0c <+0x4cc>
08213cc3 +0x383:  mov    -0x18(%ebp),%eax
08213cc6 +0x386:  mov    (%eax),%eax
08213cc8 +0x388:  add    $0x4c,%eax
08213ccb +0x38b:  mov    (%eax),%edx
08213ccd +0x38d:  mov    -0x18(%ebp),%eax
08213cd0 +0x390:  mov    %eax,(%esp)
08213cd3 +0x393:  call   *%edx
08213cd5 +0x395:  test   %al,%al
08213cd7 +0x397:  je     08213d0e <+0x3ce>
08213cd9 +0x399:  movl   $0x0,-0x10(%ebp)
08213ce0 +0x3a0:  jmp    08213d03 <+0x3c3>
08213ce2 +0x3a2:  mov    -0x10(%ebp),%eax
08213ce5 +0x3a5:  add    $0x10,%eax
08213ce8 +0x3a8:  movzwl -0x80(%ebp,%eax,2),%eax
08213ced +0x3ad:  test   %ax,%ax
08213cf0 +0x3b0:  jne    08213cff <+0x3bf>
08213cf2 +0x3b2:  mov    -0x10(%ebp),%eax
08213cf5 +0x3b5:  add    $0x10,%eax
08213cf8 +0x3b8:  movw   $0x7530,-0x80(%ebp,%eax,2)
08213cff +0x3bf:  addl   $0x1,-0x10(%ebp)
08213d03 +0x3c3:  cmpl   $0x2,-0x10(%ebp)
08213d07 +0x3c7:  setle  %al
08213d0a +0x3ca:  test   %al,%al
08213d0c +0x3cc:  jne    08213ce2 <+0x3a2>
08213d0e +0x3ce:  lea    -0x82(%ebp),%eax
08213d14 +0x3d4:  add    $0x22,%eax
08213d17 +0x3d7:  mov    %eax,(%esp)
08213d1a +0x3da:  call   0822ac30 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2da
08213d1f +0x3df:  lea    -0x82(%ebp),%eax
08213d25 +0x3e5:  add    $0x2e,%eax
08213d28 +0x3e8:  mov    %eax,0x4(%esp)
08213d2c +0x3ec:  mov    0x10(%ebp),%eax
08213d2f +0x3ef:  mov    %eax,(%esp)
08213d32 +0x3f2:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
08213d37 +0x3f7:  xor    $0x1,%eax
08213d3a +0x3fa:  test   %al,%al
08213d3c +0x3fc:  je     08213d67 <+0x427>
08213d3e +0x3fe:  movl   $0x0,0xc(%esp)
08213d46 +0x406:  movl   $0x0,0x8(%esp)
08213d4e +0x40e:  movl   $&_ZZN33Dispatcher_AuctionAskAveragePrice12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08213d56 +0x416:  movl   $0xc247,(%esp)
08213d5d +0x41d:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08213d62 +0x422:  jmp    08213e0c <+0x4cc>
08213d67 +0x427:  mov    &_ZN10GlobalData15s_auction_proxyE,%eax
08213d6c +0x42c:  lea    -0x82(%ebp),%edx
08213d72 +0x432:  mov    %edx,0x4(%esp)
08213d76 +0x436:  mov    %eax,(%esp)
08213d79 +0x439:  call   082f7b1c <_ZN19CAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE>  ; CAuctionServerProxy::SendPacket(nsl::PACKET_HEADER*)
08213d7e +0x43e:  movl   $0x0,-0xc(%ebp)
08213d85 +0x445:  jmp    08213dfc <+0x4bc>
08213d87 +0x447:  mov    -0xc(%ebp),%eax
08213d8a +0x44a:  mov    &_ZL6gmList(,%eax,4),%eax
08213d91 +0x451:  mov    %eax,%ebx
08213d93 +0x453:  mov    0xc(%ebp),%eax
08213d96 +0x456:  mov    %eax,(%esp)
08213d99 +0x459:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08213d9e +0x45e:  cmp    %eax,%ebx
08213da0 +0x460:  sete   %al
08213da3 +0x463:  test   %al,%al
08213da5 +0x465:  je     08213df8 <+0x4b8>
08213da7 +0x467:  mov    0xc(%ebp),%eax
08213daa +0x46a:  mov    %eax,(%esp)
08213dad +0x46d:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08213db2 +0x472:  mov    %eax,%ebx
08213db4 +0x474:  movl   $0x0,0xc(%esp)
08213dbc +0x47c:  movl   $0xc258,0x8(%esp)
08213dc4 +0x484:  movl   $&_ZZN33Dispatcher_AuctionAskAveragePrice12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08213dcc +0x48c:  lea    -0x2c(%ebp),%eax
08213dcf +0x48f:  mov    %eax,(%esp)
08213dd2 +0x492:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08213dd7 +0x497:  mov    %ebx,0xc(%esp)
08213ddb +0x49b:  movl   $"REQ AuctionAskAveragePrice",0x8(%esp)
08213de3 +0x4a3:  movl   $"Trace Auction Delay, %s(%d)",0x4(%esp)
08213deb +0x4ab:  lea    -0x2c(%ebp),%eax
08213dee +0x4ae:  mov    %eax,(%esp)
08213df1 +0x4b1:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08213df6 +0x4b6:  jmp    08213e07 <+0x4c7>
08213df8 +0x4b8:  addl   $0x1,-0xc(%ebp)
08213dfc +0x4bc:  cmpl   $0x4,-0xc(%ebp)
08213e00 +0x4c0:  setle  %al
08213e03 +0x4c3:  test   %al,%al
08213e05 +0x4c5:  jne    08213d87 <+0x447>
08213e07 +0x4c7:  mov    $0x0,%eax
08213e0c +0x4cc:  add    $0x94,%esp
08213e12 +0x4d2:  pop    %ebx
08213e13 +0x4d3:  pop    %ebp
08213e14 +0x4d4:  ret
```

## 反编译 C

```c
// Dispatcher_AuctionAskAveragePrice::dispatch_sig @ 0x8213940

/* Dispatcher_AuctionAskAveragePrice::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_AuctionAskAveragePrice::dispatch_sig
          (Dispatcher_AuctionAskAveragePrice *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  CDataManager *this_00;
  int iVar5;
  PCK_AUCTION_ASK_AVERAGE_PRICE_GA local_86 [2];
  short asStack_84 [8];
  undefined4 local_74;
  undefined4 local_70;
  uint local_6c;
  uchar uStack_68;
  uchar auStack_67 [3];
  ROI_Category aRStack_64 [8];
  char acStack_5c [4];
  uchar uStack_58;
  PCK_AUCTION_ASK_AVERAGE_PRICE_GP local_57 [18];
  undefined4 local_45;
  undefined4 local_41;
  uint local_3d;
  uint local_38;
  byte local_31;
  cMyTrace local_30 [16];
  uint local_20;
  int *local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  cVar2 = PacketBuf::get_byte(param_2,&local_31);
  if (cVar2 != '\x01') {
    uVar3 = LineFunc(0xc1e5,
                     "virtual int Dispatcher_AuctionAskAveragePrice::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar3;
  }
  if (1 < local_31) {
    uVar3 = LineFunc(0xc1e8,
                     "virtual int Dispatcher_AuctionAskAveragePrice::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar3;
  }
  local_20 = (uint)local_31;
  cVar2 = IsAuctionServerDisconnected(local_31);
  if (cVar2 != '\0') {
    CUser::SendCmdErrorPacket(param_1,0xb9,0x8c,local_20);
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
    uVar3 = LineFunc(0xc207,
                     "virtual int Dispatcher_AuctionAskAveragePrice::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else {
    PCK_AUCTION_ASK_AVERAGE_PRICE_GA::PCK_AUCTION_ASK_AVERAGE_PRICE_GA(local_86);
    local_74 = CUser::GetUID(param_1);
    local_70 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    cVar2 = PacketBuf::get_int(param_2,&local_38);
    if (cVar2 == '\x01') {
      local_6c = local_38;
      cVar2 = PacketBuf::get_byte(param_2,&uStack_68);
      if (cVar2 == '\x01') {
        if (local_20 == 1) {
          PCK_AUCTION_ASK_AVERAGE_PRICE_GP::PCK_AUCTION_ASK_AVERAGE_PRICE_GP(local_57);
          local_45 = CUser::GetUID(param_1);
          local_41 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
          local_3d = local_38;
          CCeraAuctionServerProxy::SendPacket
                    (GlobalData::s_cera_auction_proxy,(PACKET_HEADER *)local_57);
        }
        else {
          for (local_18 = 0; local_18 < 3; local_18 = local_18 + 1) {
            cVar2 = PacketBuf::get_byte(param_2,auStack_67 + local_18);
            if (cVar2 != '\x01') {
              uVar3 = LineFunc(0xc22f,
                               "virtual int Dispatcher_AuctionAskAveragePrice::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
              return uVar3;
            }
            cVar2 = PacketBuf::get_short(param_2,asStack_84 + local_18 + 0x10);
            if (cVar2 != '\x01') {
              uVar3 = LineFunc(0xc232,
                               "virtual int Dispatcher_AuctionAskAveragePrice::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
              return uVar3;
            }
            cVar2 = PacketBuf::get_byte(param_2,acStack_5c + local_18);
            if (cVar2 != '\x01') {
              uVar3 = LineFunc(0xc235,
                               "virtual int Dispatcher_AuctionAskAveragePrice::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
              return uVar3;
            }
          }
          this_00 = (CDataManager *)G_CDataManager();
          local_1c = (int *)CDataManager::find_item(this_00,local_38);
          if (local_1c == (int *)0x0) {
            uVar3 = LineFunc(0xc23a,
                             "virtual int Dispatcher_AuctionAskAveragePrice::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
            return uVar3;
          }
          cVar2 = (**(code **)(*local_1c + 0x4c))(local_1c);
          if (cVar2 != '\0') {
            for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
              if (asStack_84[local_14 + 0x10] == 0) {
                asStack_84[local_14 + 0x10] = 30000;
              }
            }
          }
          ROI_Category::_sort(aRStack_64);
          cVar2 = PacketBuf::get_byte(param_2,&uStack_58);
          if (cVar2 != '\x01') {
            uVar3 = LineFunc(0xc247,
                             "virtual int Dispatcher_AuctionAskAveragePrice::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
            return uVar3;
          }
          CAuctionServerProxy::SendPacket(GlobalData::s_auction_proxy,(PACKET_HEADER *)local_86);
        }
        for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
          iVar4 = *(int *)(gmList + local_10 * 4);
          iVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
          if (iVar4 == iVar5) {
            uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
            cMyTrace::cMyTrace(local_30,
                               "virtual int Dispatcher_AuctionAskAveragePrice::dispatch_sig(CUser*, PacketBuf&)"
                               ,0xc258,0);
            cMyTrace::operator()
                      (local_30,"Trace Auction Delay, %s(%d)","REQ AuctionAskAveragePrice",uVar3);
            break;
          }
        }
        uVar3 = 0;
      }
      else {
        uVar3 = LineFunc(0xc21a,
                         "virtual int Dispatcher_AuctionAskAveragePrice::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
    }
    else {
      uVar3 = LineFunc(0xc217,
                       "virtual int Dispatcher_AuctionAskAveragePrice::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
  }
  return uVar3;
}
```
