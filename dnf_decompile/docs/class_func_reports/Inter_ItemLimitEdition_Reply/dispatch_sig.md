# dispatch_sig

`_ZN28Inter_ItemLimitEdition_Reply12dispatch_sigEP5CUserPci`

`Inter_ItemLimitEdition_Reply::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_ItemLimitEdition_Reply` | `0x084dbef0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084dbef0  _ZN28Inter_ItemLimitEdition_Reply12dispatch_sigEP5CUserPci
#           Inter_ItemLimitEdition_Reply::dispatch_sig(CUser*, char*, int)
# range [0x084dbef0, 0x084dc979]
084dbef0 +0x000:  push   %ebp
084dbef1 +0x001:  mov    %esp,%ebp
084dbef3 +0x003:  push   %edi
084dbef4 +0x004:  push   %esi
084dbef5 +0x005:  push   %ebx
084dbef6 +0x006:  sub    $0x12c,%esp
084dbefc +0x00c:  mov    0xc(%ebp),%eax
084dbeff +0x00f:  mov    %eax,(%esp)
084dbf02 +0x012:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084dbf07 +0x017:  cmp    $0x2,%eax
084dbf0a +0x01a:  setle  %al
084dbf0d +0x01d:  test   %al,%al
084dbf0f +0x01f:  je     084dbf1b <+0x2b>
084dbf11 +0x021:  mov    $0x0,%ebx
084dbf16 +0x026:  jmp    084dc96d <+0xa7d>
084dbf1b +0x02b:  mov    0x10(%ebp),%eax
084dbf1e +0x02e:  mov    %eax,-0x38(%ebp)
084dbf21 +0x031:  movl   $0x0,-0x34(%ebp)
084dbf28 +0x038:  movl   $0x0,-0x30(%ebp)
084dbf2f +0x03f:  mov    -0x38(%ebp),%eax
084dbf32 +0x042:  mov    0x12(%eax),%esi
084dbf35 +0x045:  mov    -0x38(%ebp),%eax
084dbf38 +0x048:  mov    0xe(%eax),%ebx
084dbf3b +0x04b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084dbf40 +0x050:  mov    %eax,(%esp)
084dbf43 +0x053:  call   08179fa6 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x24>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x24
084dbf48 +0x058:  mov    %esi,0x8(%esp)
084dbf4c +0x05c:  mov    %ebx,0x4(%esp)
084dbf50 +0x060:  mov    %eax,(%esp)
084dbf53 +0x063:  call   084e9904 <_GLOBAL__I__Z7getUserj+0x8b6>  ; global constructors keyed to getUser(unsigned int)+0x8b6
084dbf58 +0x068:  xor    $0x1,%eax
084dbf5b +0x06b:  test   %al,%al
084dbf5d +0x06d:  je     084dbf8b <+0x9b>
084dbf5f +0x06f:  movl   $0x4,(%esp)
084dbf66 +0x076:  call   08725800 <__cxa_allocate_exception>
084dbf6b +0x07b:  mov    %eax,%edx
084dbf6d +0x07d:  movl   $0x16,(%edx)
084dbf73 +0x083:  movl   $0x0,0x8(%esp)
084dbf7b +0x08b:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
084dbf83 +0x093:  mov    %eax,(%esp)
084dbf86 +0x096:  call   08724c50 <__cxa_throw>
084dbf8b +0x09b:  mov    -0x38(%ebp),%eax
084dbf8e +0x09e:  movzbl 0x16(%eax),%eax
084dbf92 +0x0a2:  movzbl %al,%eax
084dbf95 +0x0a5:  cmp    $0x1,%eax
084dbf98 +0x0a8:  je     084dbfd5 <+0xe5>
084dbf9a +0x0aa:  cmp    $0x2,%eax
084dbf9d +0x0ad:  je     084dbfa9 <+0xb9>
084dbf9f +0x0af:  test   %eax,%eax
084dbfa1 +0x0b1:  je     084dc02d <+0x13d>
084dbfa7 +0x0b7:  jmp    084dc001 <+0x111>
084dbfa9 +0x0b9:  movl   $0x4,(%esp)
084dbfb0 +0x0c0:  call   08725800 <__cxa_allocate_exception>
084dbfb5 +0x0c5:  mov    %eax,%edx
084dbfb7 +0x0c7:  movl   $0x5f,(%edx)
084dbfbd +0x0cd:  movl   $0x0,0x8(%esp)
084dbfc5 +0x0d5:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
084dbfcd +0x0dd:  mov    %eax,(%esp)
084dbfd0 +0x0e0:  call   08724c50 <__cxa_throw>
084dbfd5 +0x0e5:  movl   $0x4,(%esp)
084dbfdc +0x0ec:  call   08725800 <__cxa_allocate_exception>
084dbfe1 +0x0f1:  mov    %eax,%edx
084dbfe3 +0x0f3:  movl   $0x16,(%edx)
084dbfe9 +0x0f9:  movl   $0x0,0x8(%esp)
084dbff1 +0x101:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
084dbff9 +0x109:  mov    %eax,(%esp)
084dbffc +0x10c:  call   08724c50 <__cxa_throw>
084dc001 +0x111:  movl   $0x4,(%esp)
084dc008 +0x118:  call   08725800 <__cxa_allocate_exception>
084dc00d +0x11d:  mov    %eax,%edx
084dc00f +0x11f:  movl   $0x1,(%edx)
084dc015 +0x125:  movl   $0x0,0x8(%esp)
084dc01d +0x12d:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
084dc025 +0x135:  mov    %eax,(%esp)
084dc028 +0x138:  call   08724c50 <__cxa_throw>
084dc02d +0x13d:  nop
084dc02e +0x13e:  mov    -0x38(%ebp),%eax
084dc031 +0x141:  mov    0xe(%eax),%ebx
084dc034 +0x144:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084dc039 +0x149:  mov    %eax,(%esp)
084dc03c +0x14c:  call   08179fa6 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x24>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x24
084dc041 +0x151:  mov    %ebx,0x4(%esp)
084dc045 +0x155:  mov    %eax,(%esp)
084dc048 +0x158:  call   0817a0a8 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x126>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x126
084dc04d +0x15d:  mov    %eax,-0x34(%ebp)
084dc050 +0x160:  cmpl   $0x0,-0x34(%ebp)
084dc054 +0x164:  sete   %al
084dc057 +0x167:  test   %al,%al
084dc059 +0x169:  je     084dc087 <+0x197>
084dc05b +0x16b:  movl   $0x4,(%esp)
084dc062 +0x172:  call   08725800 <__cxa_allocate_exception>
084dc067 +0x177:  mov    %eax,%edx
084dc069 +0x179:  movl   $0x11,(%edx)
084dc06f +0x17f:  movl   $0x0,0x8(%esp)
084dc077 +0x187:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
084dc07f +0x18f:  mov    %eax,(%esp)
084dc082 +0x192:  call   08724c50 <__cxa_throw>
084dc087 +0x197:  mov    -0x34(%ebp),%eax
084dc08a +0x19a:  mov    %eax,(%esp)
084dc08d +0x19d:  call   0822cac8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2172>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2172
084dc092 +0x1a2:  test   %al,%al
084dc094 +0x1a4:  je     084dc144 <+0x254>
084dc09a +0x1aa:  lea    -0x58(%ebp),%eax
084dc09d +0x1ad:  mov    %eax,(%esp)
084dc0a0 +0x1b0:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084dc0a5 +0x1b5:  movl   $0xe1,0x8(%esp)
084dc0ad +0x1bd:  movl   $0x0,0x4(%esp)
084dc0b5 +0x1c5:  lea    -0x58(%ebp),%eax
084dc0b8 +0x1c8:  mov    %eax,(%esp)
084dc0bb +0x1cb:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084dc0c0 +0x1d0:  movl   $0x0,0x4(%esp)
084dc0c8 +0x1d8:  lea    -0x58(%ebp),%eax
084dc0cb +0x1db:  mov    %eax,(%esp)
084dc0ce +0x1de:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084dc0d3 +0x1e3:  movl   $0x1,0x4(%esp)
084dc0db +0x1eb:  lea    -0x58(%ebp),%eax
084dc0de +0x1ee:  mov    %eax,(%esp)
084dc0e1 +0x1f1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084dc0e6 +0x1f6:  lea    -0x58(%ebp),%eax
084dc0e9 +0x1f9:  mov    %eax,0x4(%esp)
084dc0ed +0x1fd:  mov    -0x34(%ebp),%eax
084dc0f0 +0x200:  mov    %eax,(%esp)
084dc0f3 +0x203:  call   085130e8 <_ZNK17CItemLimitEdition14makeInfoPacketER11PacketGuard>  ; CItemLimitEdition::makeInfoPacket(PacketGuard&) const
084dc0f8 +0x208:  movl   $0x1,0x4(%esp)
084dc100 +0x210:  lea    -0x58(%ebp),%eax
084dc103 +0x213:  mov    %eax,(%esp)
084dc106 +0x216:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084dc10b +0x21b:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084dc110 +0x220:  lea    -0x58(%ebp),%edx
084dc113 +0x223:  mov    %edx,0x4(%esp)
084dc117 +0x227:  mov    %eax,(%esp)
084dc11a +0x22a:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
084dc11f +0x22f:  jmp    084dc139 <+0x249>
084dc121 +0x231:  mov    %edx,%ebx
084dc123 +0x233:  mov    %eax,%esi
084dc125 +0x235:  lea    -0x58(%ebp),%eax
084dc128 +0x238:  mov    %eax,(%esp)
084dc12b +0x23b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084dc130 +0x240:  mov    %esi,%eax
084dc132 +0x242:  mov    %ebx,%edx
084dc134 +0x244:  jmp    084dc2c7 <+0x3d7>
084dc139 +0x249:  lea    -0x58(%ebp),%eax
084dc13c +0x24c:  mov    %eax,(%esp)
084dc13f +0x24f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084dc144 +0x254:  mov    0xc(%ebp),%eax
084dc147 +0x257:  mov    %eax,(%esp)
084dc14a +0x25a:  call   080fdf7a <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x2a6>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x2a6
084dc14f +0x25f:  mov    %eax,%ebx
084dc151 +0x261:  mov    -0x34(%ebp),%eax
084dc154 +0x264:  mov    %eax,(%esp)
084dc157 +0x267:  call   0822cafa <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x21a4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x21a4
084dc15c +0x26c:  cmp    %eax,%ebx
084dc15e +0x26e:  setb   %al
084dc161 +0x271:  test   %al,%al
084dc163 +0x273:  je     084dc191 <+0x2a1>
084dc165 +0x275:  movl   $0x4,(%esp)
084dc16c +0x27c:  call   08725800 <__cxa_allocate_exception>
084dc171 +0x281:  mov    %eax,%edx
084dc173 +0x283:  movl   $0xb,(%edx)
084dc179 +0x289:  movl   $0x0,0x8(%esp)
084dc181 +0x291:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
084dc189 +0x299:  mov    %eax,(%esp)
084dc18c +0x29c:  call   08724c50 <__cxa_throw>
084dc191 +0x2a1:  mov    0xc(%ebp),%eax
084dc194 +0x2a4:  mov    %eax,(%esp)
084dc197 +0x2a7:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
084dc19c +0x2ac:  mov    %eax,(%esp)
084dc19f +0x2af:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
084dc1a4 +0x2b4:  mov    %eax,%ebx
084dc1a6 +0x2b6:  mov    -0x34(%ebp),%eax
084dc1a9 +0x2b9:  mov    %eax,(%esp)
084dc1ac +0x2bc:  call   0822cb06 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x21b0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x21b0
084dc1b1 +0x2c1:  cmp    %eax,%ebx
084dc1b3 +0x2c3:  setl   %al
084dc1b6 +0x2c6:  test   %al,%al
084dc1b8 +0x2c8:  je     084dc1e6 <+0x2f6>
084dc1ba +0x2ca:  movl   $0x4,(%esp)
084dc1c1 +0x2d1:  call   08725800 <__cxa_allocate_exception>
084dc1c6 +0x2d6:  mov    %eax,%edx
084dc1c8 +0x2d8:  movl   $0xa,(%edx)
084dc1ce +0x2de:  movl   $0x0,0x8(%esp)
084dc1d6 +0x2e6:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
084dc1de +0x2ee:  mov    %eax,(%esp)
084dc1e1 +0x2f1:  call   08724c50 <__cxa_throw>
084dc1e6 +0x2f6:  mov    0xc(%ebp),%eax
084dc1e9 +0x2f9:  mov    %eax,(%esp)
084dc1ec +0x2fc:  call   0817a17c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x1fa>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x1fa
084dc1f1 +0x301:  mov    %eax,%ebx
084dc1f3 +0x303:  mov    -0x34(%ebp),%eax
084dc1f6 +0x306:  mov    %eax,(%esp)
084dc1f9 +0x309:  call   0822cb12 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x21bc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x21bc
084dc1fe +0x30e:  cmp    %eax,%ebx
084dc200 +0x310:  setb   %al
084dc203 +0x313:  test   %al,%al
084dc205 +0x315:  je     084dc233 <+0x343>
084dc207 +0x317:  movl   $0x4,(%esp)
084dc20e +0x31e:  call   08725800 <__cxa_allocate_exception>
084dc213 +0x323:  mov    %eax,%edx
084dc215 +0x325:  movl   $0xc,(%edx)
084dc21b +0x32b:  movl   $0x0,0x8(%esp)
084dc223 +0x333:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
084dc22b +0x33b:  mov    %eax,(%esp)
084dc22e +0x33e:  call   08724c50 <__cxa_throw>
084dc233 +0x343:  mov    -0x34(%ebp),%eax
084dc236 +0x346:  mov    %eax,(%esp)
084dc239 +0x349:  call   0817a090 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x10e>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x10e
084dc23e +0x34e:  cmp    $0x1,%eax
084dc241 +0x351:  je     084dc29b <+0x3ab>
084dc243 +0x353:  mov    -0x34(%ebp),%eax
084dc246 +0x356:  mov    %eax,(%esp)
084dc249 +0x359:  call   0817a090 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x10e>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x10e
084dc24e +0x35e:  mov    %eax,%ebx
084dc250 +0x360:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084dc255 +0x365:  mov    %ebx,0x4(%esp)
084dc259 +0x369:  mov    %eax,(%esp)
084dc25c +0x36c:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084dc261 +0x371:  mov    %eax,-0x30(%ebp)
084dc264 +0x374:  cmpl   $0x0,-0x30(%ebp)
084dc268 +0x378:  sete   %al
084dc26b +0x37b:  test   %al,%al
084dc26d +0x37d:  je     084dc29c <+0x3ac>
084dc26f +0x37f:  movl   $0x4,(%esp)
084dc276 +0x386:  call   08725800 <__cxa_allocate_exception>
084dc27b +0x38b:  mov    %eax,%edx
084dc27d +0x38d:  movl   $0x11,(%edx)
084dc283 +0x393:  movl   $0x0,0x8(%esp)
084dc28b +0x39b:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
084dc293 +0x3a3:  mov    %eax,(%esp)
084dc296 +0x3a6:  call   08724c50 <__cxa_throw>
084dc29b +0x3ab:  nop
084dc29c +0x3ac:  movb   $0x0,-0x39(%ebp)
084dc2a0 +0x3b0:  movl   $0x0,-0x40(%ebp)
084dc2a7 +0x3b7:  movl   $0x0,-0x44(%ebp)
084dc2ae +0x3be:  mov    -0x34(%ebp),%eax
084dc2b1 +0x3c1:  mov    %eax,(%esp)
084dc2b4 +0x3c4:  call   0817a09c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x11a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x11a
084dc2b9 +0x3c9:  mov    %eax,-0x2c(%ebp)
084dc2bc +0x3cc:  cmpl   $0x0,-0x2c(%ebp)
084dc2c0 +0x3d0:  je     084dc322 <+0x432>
084dc2c2 +0x3d2:  jmp    084dc360 <+0x470>
084dc2c7 +0x3d7:  cmp    $0x1,%edx
084dc2ca +0x3da:  je     084dc2d4 <+0x3e4>
084dc2cc +0x3dc:  mov    %eax,(%esp)
084dc2cf +0x3df:  call   08ae3750 <_Unwind_Resume>
084dc2d4 +0x3e4:  mov    %eax,(%esp)
084dc2d7 +0x3e7:  call   08725ce0 <__cxa_begin_catch>
084dc2dc +0x3ec:  mov    (%eax),%eax
084dc2de +0x3ee:  mov    %eax,-0x28(%ebp)
084dc2e1 +0x3f1:  mov    -0x28(%ebp),%eax
084dc2e4 +0x3f4:  movzbl %al,%eax
084dc2e7 +0x3f7:  mov    %eax,0x8(%esp)
084dc2eb +0x3fb:  movl   $0x100,0x4(%esp)
084dc2f3 +0x403:  mov    0xc(%ebp),%eax
084dc2f6 +0x406:  mov    %eax,(%esp)
084dc2f9 +0x409:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
084dc2fe +0x40e:  mov    $0x0,%ebx
084dc303 +0x413:  call   08725c30 <__cxa_end_catch>
084dc308 +0x418:  jmp    084dc96d <+0xa7d>
084dc30d +0x41d:  mov    %edx,%ebx
084dc30f +0x41f:  mov    %eax,%esi
084dc311 +0x421:  call   08725c30 <__cxa_end_catch>
084dc316 +0x426:  mov    %esi,%eax
084dc318 +0x428:  mov    %ebx,%edx
084dc31a +0x42a:  mov    %eax,(%esp)
084dc31d +0x42d:  call   08ae3750 <_Unwind_Resume>
084dc322 +0x432:  mov    -0x34(%ebp),%eax
084dc325 +0x435:  mov    %eax,(%esp)
084dc328 +0x438:  call   0817a090 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x10e>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x10e
084dc32d +0x43d:  mov    %eax,%edx
084dc32f +0x43f:  mov    &_ZN10GlobalData11s_pCeraShopE,%eax
084dc334 +0x444:  lea    -0x39(%ebp),%ecx
084dc337 +0x447:  mov    %ecx,0x10(%esp)
084dc33b +0x44b:  lea    -0x44(%ebp),%ecx
084dc33e +0x44e:  mov    %ecx,0xc(%esp)
084dc342 +0x452:  lea    -0x40(%ebp),%ecx
084dc345 +0x455:  mov    %ecx,0x8(%esp)
084dc349 +0x459:  mov    %edx,0x4(%esp)
084dc34d +0x45d:  mov    %eax,(%esp)
084dc350 +0x460:  call   08324a1e <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb>  ; WongWork::CCeraShop::IsSpecialItem(int, int&, int&, bool&)
084dc355 +0x465:  test   %al,%al
084dc357 +0x467:  je     084dc360 <+0x470>
084dc359 +0x469:  mov    $0x1,%eax
084dc35e +0x46e:  jmp    084dc365 <+0x475>
084dc360 +0x470:  mov    $0x0,%eax
084dc365 +0x475:  test   %al,%al
084dc367 +0x477:  je     084dc38d <+0x49d>
084dc369 +0x479:  mov    -0x34(%ebp),%eax
084dc36c +0x47c:  mov    %eax,(%esp)
084dc36f +0x47f:  call   0817a090 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x10e>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x10e
084dc374 +0x484:  mov    %eax,%ebx
084dc376 +0x486:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084dc37b +0x48b:  mov    0xc(%eax),%eax
084dc37e +0x48e:  mov    %ebx,0x4(%esp)
084dc382 +0x492:  mov    %eax,(%esp)
084dc385 +0x495:  call   0817a10c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x18a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x18a
084dc38a +0x49a:  mov    %eax,-0x2c(%ebp)
084dc38d +0x49d:  mov    0xc(%ebp),%eax
084dc390 +0x4a0:  mov    %eax,(%esp)
084dc393 +0x4a3:  call   0817a208 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x286>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x286
084dc398 +0x4a8:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
084dc39d +0x4ad:  movl   $0x46d9,0x8(%esp)
084dc3a5 +0x4b5:  movl   $"InterDispatcher.cpp",0x4(%esp)
084dc3ad +0x4bd:  mov    %eax,(%esp)
084dc3b0 +0x4c0:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
084dc3b5 +0x4c5:  movl   $0x0,0x8(%esp)
084dc3bd +0x4cd:  mov    %eax,0x4(%esp)
084dc3c1 +0x4d1:  lea    -0x4c(%ebp),%eax
084dc3c4 +0x4d4:  mov    %eax,(%esp)
084dc3c7 +0x4d7:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
084dc3cc +0x4dc:  lea    -0x4c(%ebp),%eax
084dc3cf +0x4df:  mov    %eax,(%esp)
084dc3d2 +0x4e2:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084dc3d7 +0x4e7:  mov    %eax,(%esp)
084dc3da +0x4ea:  call   0817a50c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x58a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x58a
084dc3df +0x4ef:  mov    %eax,-0x24(%ebp)
084dc3e2 +0x4f2:  mov    -0x38(%ebp),%eax
084dc3e5 +0x4f5:  mov    0xe(%eax),%edx
084dc3e8 +0x4f8:  mov    -0x24(%ebp),%eax
084dc3eb +0x4fb:  mov    %edx,(%eax)
084dc3ed +0x4fd:  mov    -0x24(%ebp),%eax
084dc3f0 +0x500:  movl   $0xa,0x4(%eax)
084dc3f7 +0x507:  mov    -0x34(%ebp),%eax
084dc3fa +0x50a:  mov    %eax,(%esp)
084dc3fd +0x50d:  call   0822cafa <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x21a4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x21a4
084dc402 +0x512:  mov    %eax,%edx
084dc404 +0x514:  mov    -0x24(%ebp),%eax
084dc407 +0x517:  mov    %edx,0x10(%eax)
084dc40a +0x51a:  mov    -0x34(%ebp),%eax
084dc40d +0x51d:  mov    %eax,(%esp)
084dc410 +0x520:  call   0822cb06 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x21b0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x21b0
084dc415 +0x525:  mov    %eax,%edx
084dc417 +0x527:  mov    -0x24(%ebp),%eax
084dc41a +0x52a:  mov    %edx,0x18(%eax)
084dc41d +0x52d:  mov    -0x34(%ebp),%eax
084dc420 +0x530:  mov    %eax,(%esp)
084dc423 +0x533:  call   0822cb12 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x21bc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x21bc
084dc428 +0x538:  mov    %eax,%edx
084dc42a +0x53a:  mov    -0x24(%ebp),%eax
084dc42d +0x53d:  mov    %edx,0x14(%eax)
084dc430 +0x540:  mov    -0x34(%ebp),%eax
084dc433 +0x543:  mov    %eax,(%esp)
084dc436 +0x546:  call   0817a090 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x10e>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x10e
084dc43b +0x54b:  mov    -0x24(%ebp),%edx
084dc43e +0x54e:  mov    %eax,0x8(%edx)
084dc441 +0x551:  mov    -0x34(%ebp),%eax
084dc444 +0x554:  mov    %eax,(%esp)
084dc447 +0x557:  call   0822ca98 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2142>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2142
084dc44c +0x55c:  mov    %eax,%edx
084dc44e +0x55e:  mov    -0x24(%ebp),%eax
084dc451 +0x561:  mov    %dx,0xc(%eax)
084dc455 +0x565:  mov    -0x38(%ebp),%eax
084dc458 +0x568:  movzbl 0x17(%eax),%eax
084dc45c +0x56c:  mov    %eax,%edx
084dc45e +0x56e:  mov    -0x24(%ebp),%eax
084dc461 +0x571:  mov    %dl,0x2c(%eax)
084dc464 +0x574:  mov    -0x34(%ebp),%eax
084dc467 +0x577:  mov    %eax,(%esp)
084dc46a +0x57a:  call   0822cab0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x215a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x215a
084dc46f +0x57f:  mov    -0x24(%ebp),%edx
084dc472 +0x582:  mov    %al,0x2d(%edx)
084dc475 +0x585:  mov    -0x24(%ebp),%eax
084dc478 +0x588:  movl   $0x0,0x1c(%eax)
084dc47f +0x58f:  mov    -0x2c(%ebp),%edx
084dc482 +0x592:  mov    -0x24(%ebp),%eax
084dc485 +0x595:  mov    %edx,0x28(%eax)
084dc488 +0x598:  mov    -0x24(%ebp),%eax
084dc48b +0x59b:  movl   $0x1,0x20(%eax)
084dc492 +0x5a2:  mov    -0x24(%ebp),%eax
084dc495 +0x5a5:  movl   $0x1,0x24(%eax)
084dc49c +0x5ac:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084dc4a3 +0x5b3:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084dc4a8 +0x5b8:  mov    -0x24(%ebp),%edx
084dc4ab +0x5bb:  mov    %eax,0x30(%edx)
084dc4ae +0x5be:  mov    -0x24(%ebp),%eax
084dc4b1 +0x5c1:  movb   $0x0,0x34(%eax)
084dc4b5 +0x5c5:  mov    0xc(%ebp),%eax
084dc4b8 +0x5c8:  mov    %eax,(%esp)
084dc4bb +0x5cb:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084dc4c0 +0x5d0:  mov    -0x24(%ebp),%edx
084dc4c3 +0x5d3:  mov    %eax,0x40(%edx)
084dc4c6 +0x5d6:  mov    0xc(%ebp),%eax
084dc4c9 +0x5d9:  mov    %eax,(%esp)
084dc4cc +0x5dc:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084dc4d1 +0x5e1:  mov    %eax,%edx
084dc4d3 +0x5e3:  mov    -0x24(%ebp),%eax
084dc4d6 +0x5e6:  mov    %edx,0x38(%eax)
084dc4d9 +0x5e9:  mov    -0x38(%ebp),%eax
084dc4dc +0x5ec:  movzbl 0x18(%eax),%edx
084dc4e0 +0x5f0:  mov    -0x24(%ebp),%eax
084dc4e3 +0x5f3:  mov    %dl,0x44(%eax)
084dc4e6 +0x5f6:  movl   $0x0,-0x20(%ebp)
084dc4ed +0x5fd:  jmp    084dc539 <+0x649>
084dc4ef +0x5ff:  mov    -0x20(%ebp),%ecx
084dc4f2 +0x602:  mov    -0x20(%ebp),%edx
084dc4f5 +0x605:  mov    -0x38(%ebp),%ebx
084dc4f8 +0x608:  mov    %edx,%eax
084dc4fa +0x60a:  shl    $0x2,%eax
084dc4fd +0x60d:  add    %edx,%eax
084dc4ff +0x60f:  lea    (%ebx,%eax,1),%eax
084dc502 +0x612:  add    $0x10,%eax
084dc505 +0x615:  mov    0x9(%eax),%edx
084dc508 +0x618:  mov    -0x24(%ebp),%eax
084dc50b +0x61b:  add    $0x8,%ecx
084dc50e +0x61e:  mov    %edx,0x8(%eax,%ecx,8)
084dc512 +0x622:  mov    -0x20(%ebp),%ecx
084dc515 +0x625:  mov    -0x20(%ebp),%edx
084dc518 +0x628:  mov    -0x38(%ebp),%ebx
084dc51b +0x62b:  mov    %edx,%eax
084dc51d +0x62d:  shl    $0x2,%eax
084dc520 +0x630:  add    %edx,%eax
084dc522 +0x632:  lea    (%ebx,%eax,1),%eax
084dc525 +0x635:  add    $0x1d,%eax
084dc528 +0x638:  movzbl (%eax),%edx
084dc52b +0x63b:  mov    -0x24(%ebp),%eax
084dc52e +0x63e:  add    $0x8,%ecx
084dc531 +0x641:  mov    %dl,0xc(%eax,%ecx,8)
084dc535 +0x645:  addl   $0x1,-0x20(%ebp)
084dc539 +0x649:  mov    -0x38(%ebp),%eax
084dc53c +0x64c:  movzbl 0x18(%eax),%eax
084dc540 +0x650:  movzbl %al,%eax
084dc543 +0x653:  cmp    -0x20(%ebp),%eax
084dc546 +0x656:  setg   %al
084dc549 +0x659:  test   %al,%al
084dc54b +0x65b:  jne    084dc4ef <+0x5ff>
084dc54d +0x65d:  mov    -0x38(%ebp),%eax
084dc550 +0x660:  movzbl 0xc8(%eax),%edx
084dc557 +0x667:  mov    -0x24(%ebp),%eax
084dc55a +0x66a:  mov    %dl,0x160(%eax)
084dc560 +0x670:  movl   $0x0,-0x1c(%ebp)
084dc567 +0x677:  jmp    084dc5bf <+0x6cf>
084dc569 +0x679:  mov    -0x1c(%ebp),%ecx
084dc56c +0x67c:  mov    -0x1c(%ebp),%edx
084dc56f +0x67f:  mov    -0x38(%ebp),%eax
084dc572 +0x682:  add    $0x18,%edx
084dc575 +0x685:  mov    0x9(%eax,%edx,8),%edx
084dc579 +0x689:  mov    -0x24(%ebp),%eax
084dc57c +0x68c:  add    $0x2c,%ecx
084dc57f +0x68f:  mov    %edx,0x4(%eax,%ecx,8)
084dc583 +0x693:  mov    -0x1c(%ebp),%ecx
084dc586 +0x696:  mov    -0x1c(%ebp),%edx
084dc589 +0x699:  mov    -0x38(%ebp),%eax
084dc58c +0x69c:  add    $0x18,%edx
084dc58f +0x69f:  movzwl 0xd(%eax,%edx,8),%edx
084dc594 +0x6a4:  mov    -0x24(%ebp),%eax
084dc597 +0x6a7:  add    $0x2c,%ecx
084dc59a +0x6aa:  mov    %dx,0x8(%eax,%ecx,8)
084dc59f +0x6af:  mov    -0x1c(%ebp),%ecx
084dc5a2 +0x6b2:  mov    -0x1c(%ebp),%edx
084dc5a5 +0x6b5:  mov    -0x38(%ebp),%eax
084dc5a8 +0x6b8:  add    $0x18,%edx
084dc5ab +0x6bb:  movzwl 0xf(%eax,%edx,8),%edx
084dc5b0 +0x6c0:  mov    -0x24(%ebp),%eax
084dc5b3 +0x6c3:  add    $0x2c,%ecx
084dc5b6 +0x6c6:  mov    %dx,0xa(%eax,%ecx,8)
084dc5bb +0x6cb:  addl   $0x1,-0x1c(%ebp)
084dc5bf +0x6cf:  mov    -0x38(%ebp),%eax
084dc5c2 +0x6d2:  movzbl 0xc8(%eax),%eax
084dc5c9 +0x6d9:  movzbl %al,%eax
084dc5cc +0x6dc:  cmp    -0x1c(%ebp),%eax
084dc5cf +0x6df:  setg   %al
084dc5d2 +0x6e2:  test   %al,%al
084dc5d4 +0x6e4:  jne    084dc569 <+0x679>
084dc5d6 +0x6e6:  lea    -0xa8(%ebp),%ebx
084dc5dc +0x6ec:  mov    $0x0,%eax
084dc5e1 +0x6f1:  mov    $0x9,%edx
084dc5e6 +0x6f6:  mov    %ebx,%edi
084dc5e8 +0x6f8:  mov    %edx,%ecx
084dc5ea +0x6fa:  rep stos %eax,%es:(%edi)
084dc5ec +0x6fc:  lea    -0x6d(%ebp),%eax
084dc5ef +0x6ff:  mov    $0x15,%edx
084dc5f4 +0x704:  mov    $0x0,%ecx
084dc5f9 +0x709:  mov    %eax,%ebx
084dc5fb +0x70b:  and    $0x1,%ebx
084dc5fe +0x70e:  test   %ebx,%ebx
084dc600 +0x710:  je     084dc60a <+0x71a>
084dc602 +0x712:  mov    %cl,(%eax)
084dc604 +0x714:  add    $0x1,%eax
084dc607 +0x717:  sub    $0x1,%edx
084dc60a +0x71a:  mov    %eax,%ebx
084dc60c +0x71c:  and    $0x2,%ebx
084dc60f +0x71f:  test   %ebx,%ebx
084dc611 +0x721:  je     084dc61c <+0x72c>
084dc613 +0x723:  mov    %cx,(%eax)
084dc616 +0x726:  add    $0x2,%eax
084dc619 +0x729:  sub    $0x2,%edx
084dc61c +0x72c:  mov    %edx,%esi
084dc61e +0x72e:  and    $0xfffffffc,%esi
084dc621 +0x731:  mov    $0x0,%ebx
084dc626 +0x736:  mov    %ecx,(%eax,%ebx,1)
084dc629 +0x739:  add    $0x4,%ebx
084dc62c +0x73c:  cmp    %esi,%ebx
084dc62e +0x73e:  jb     084dc626 <+0x736>
084dc630 +0x740:  add    %ebx,%eax
084dc632 +0x742:  mov    %edx,%ebx
084dc634 +0x744:  and    $0x2,%ebx
084dc637 +0x747:  test   %ebx,%ebx
084dc639 +0x749:  je     084dc641 <+0x751>
084dc63b +0x74b:  mov    %cx,(%eax)
084dc63e +0x74e:  add    $0x2,%eax
084dc641 +0x751:  and    $0x1,%edx
084dc644 +0x754:  test   %edx,%edx
084dc646 +0x756:  je     084dc64d <+0x75d>
084dc648 +0x758:  mov    %cl,(%eax)
084dc64a +0x75a:  add    $0x1,%eax
084dc64d +0x75d:  mov    -0x34(%ebp),%eax
084dc650 +0x760:  mov    %eax,(%esp)
084dc653 +0x763:  call   0822cafa <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x21a4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x21a4
084dc658 +0x768:  mov    %eax,0xc(%esp)
084dc65c +0x76c:  movl   $"%d",0x8(%esp)
084dc664 +0x774:  movl   $0x24,0x4(%esp)
084dc66c +0x77c:  lea    -0xa8(%ebp),%eax
084dc672 +0x782:  mov    %eax,(%esp)
084dc675 +0x785:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
084dc67a +0x78a:  mov    -0x38(%ebp),%eax
084dc67d +0x78d:  mov    0xe(%eax),%eax
084dc680 +0x790:  mov    %eax,0xc(%esp)
084dc684 +0x794:  movl   $"%d",0x8(%esp)
084dc68c +0x79c:  movl   $0x8,0x4(%esp)
084dc694 +0x7a4:  lea    -0x75(%ebp),%eax
084dc697 +0x7a7:  mov    %eax,(%esp)
084dc69a +0x7aa:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
084dc69f +0x7af:  mov    -0x34(%ebp),%eax
084dc6a2 +0x7b2:  mov    %eax,(%esp)
084dc6a5 +0x7b5:  call   0817a090 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x10e>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x10e
084dc6aa +0x7ba:  cmp    $0x1,%eax
084dc6ad +0x7bd:  setne  %al
084dc6b0 +0x7c0:  test   %al,%al
084dc6b2 +0x7c2:  je     084dc740 <+0x850>
084dc6b8 +0x7c8:  mov    -0x30(%ebp),%eax
084dc6bb +0x7cb:  mov    %eax,(%esp)
084dc6be +0x7ce:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
084dc6c3 +0x7d3:  test   %al,%al
084dc6c5 +0x7d5:  je     084dc6db <+0x7eb>
084dc6c7 +0x7d7:  mov    -0x24(%ebp),%eax
084dc6ca +0x7da:  movzwl 0xc(%eax),%eax
084dc6ce +0x7de:  cmp    $0x1,%ax
084dc6d2 +0x7e2:  jbe    084dc6db <+0x7eb>
084dc6d4 +0x7e4:  mov    $0x1,%eax
084dc6d9 +0x7e9:  jmp    084dc6e0 <+0x7f0>
084dc6db +0x7eb:  mov    $0x0,%eax
084dc6e0 +0x7f0:  test   %al,%al
084dc6e2 +0x7f2:  je     084dc721 <+0x831>
084dc6e4 +0x7f4:  mov    -0x24(%ebp),%eax
084dc6e7 +0x7f7:  movzwl 0xc(%eax),%eax
084dc6eb +0x7fb:  movzwl %ax,%ebx
084dc6ee +0x7fe:  mov    -0x30(%ebp),%eax
084dc6f1 +0x801:  mov    %eax,(%esp)
084dc6f4 +0x804:  call   0811ed82 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x7d>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x7d
084dc6f9 +0x809:  mov    %ebx,0x10(%esp)
084dc6fd +0x80d:  mov    %eax,0xc(%esp)
084dc701 +0x811:  movl   $"%s %d개",0x8(%esp)
084dc709 +0x819:  movl   $0x62,0x4(%esp)
084dc711 +0x821:  lea    -0x10c(%ebp),%eax
084dc717 +0x827:  mov    %eax,(%esp)
084dc71a +0x82a:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
084dc71f +0x82f:  jmp    084dc76c <+0x87c>
084dc721 +0x831:  mov    -0x30(%ebp),%eax
084dc724 +0x834:  mov    %eax,(%esp)
084dc727 +0x837:  call   0811ed82 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x7d>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x7d
084dc72c +0x83c:  mov    %eax,0x4(%esp)
084dc730 +0x840:  lea    -0x10c(%ebp),%eax
084dc736 +0x846:  mov    %eax,(%esp)
084dc739 +0x849:  call   0807def0 <_init+0x7e8>
084dc73e +0x84e:  jmp    084dc76c <+0x87c>
084dc740 +0x850:  mov    -0x24(%ebp),%eax
084dc743 +0x853:  movzwl 0xc(%eax),%eax
084dc747 +0x857:  movzwl %ax,%eax
084dc74a +0x85a:  mov    %eax,0xc(%esp)
084dc74e +0x85e:  movl   $"코인 %d개",0x8(%esp)
084dc756 +0x866:  movl   $0x62,0x4(%esp)
084dc75e +0x86e:  lea    -0x10c(%ebp),%eax
084dc764 +0x874:  mov    %eax,(%esp)
084dc767 +0x877:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
084dc76c +0x87c:  mov    -0x34(%ebp),%eax
084dc76f +0x87f:  mov    %eax,(%esp)
084dc772 +0x882:  call   0822cafa <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x21a4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x21a4
084dc777 +0x887:  test   %eax,%eax
084dc779 +0x889:  sete   %al
084dc77c +0x88c:  test   %al,%al
084dc77e +0x88e:  je     084dc7ec <+0x8fc>
084dc780 +0x890:  mov    &_ZN10GlobalData12s_pIPGHelperE,%eax
084dc785 +0x895:  mov    (%eax),%eax
084dc787 +0x897:  add    $0x18,%eax
084dc78a +0x89a:  mov    (%eax),%edi
084dc78c +0x89c:  lea    -0x4c(%ebp),%eax
084dc78f +0x89f:  mov    %eax,(%esp)
084dc792 +0x8a2:  call   08100ffa <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1c>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1c
084dc797 +0x8a7:  mov    %eax,%esi
084dc799 +0x8a9:  mov    0xc(%ebp),%eax
084dc79c +0x8ac:  mov    %eax,(%esp)
084dc79f +0x8af:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
084dc7a4 +0x8b4:  mov    %eax,%ebx
084dc7a6 +0x8b6:  lea    -0x6d(%ebp),%eax
084dc7a9 +0x8b9:  mov    %eax,(%esp)
084dc7ac +0x8bc:  call   084b76d8 <_ZN8WongWork12CGenUniqueNo11GenUniqueNoEPc>  ; WongWork::CGenUniqueNo::GenUniqueNo(char*)
084dc7b1 +0x8c1:  mov    &_ZN10GlobalData12s_pIPGHelperE,%edx
084dc7b7 +0x8c7:  mov    %esi,0x1c(%esp)
084dc7bb +0x8cb:  mov    %ebx,0x18(%esp)
084dc7bf +0x8cf:  lea    -0x10c(%ebp),%ecx
084dc7c5 +0x8d5:  mov    %ecx,0x14(%esp)
084dc7c9 +0x8d9:  mov    %eax,0x10(%esp)
084dc7cd +0x8dd:  lea    -0xa8(%ebp),%eax
084dc7d3 +0x8e3:  mov    %eax,0xc(%esp)
084dc7d7 +0x8e7:  lea    -0x75(%ebp),%eax
084dc7da +0x8ea:  mov    %eax,0x8(%esp)
084dc7de +0x8ee:  mov    0xc(%ebp),%eax
084dc7e1 +0x8f1:  mov    %eax,0x4(%esp)
084dc7e5 +0x8f5:  mov    %edx,(%esp)
084dc7e8 +0x8f8:  call   *%edi
084dc7ea +0x8fa:  jmp    084dc856 <+0x966>
084dc7ec +0x8fc:  mov    &_ZN10GlobalData12s_pIPGHelperE,%eax
084dc7f1 +0x901:  mov    (%eax),%eax
084dc7f3 +0x903:  add    $0x14,%eax
084dc7f6 +0x906:  mov    (%eax),%edi
084dc7f8 +0x908:  lea    -0x4c(%ebp),%eax
084dc7fb +0x90b:  mov    %eax,(%esp)
084dc7fe +0x90e:  call   08100ffa <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1c>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1c
084dc803 +0x913:  mov    %eax,%esi
084dc805 +0x915:  mov    0xc(%ebp),%eax
084dc808 +0x918:  mov    %eax,(%esp)
084dc80b +0x91b:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
084dc810 +0x920:  mov    %eax,%ebx
084dc812 +0x922:  lea    -0x6d(%ebp),%eax
084dc815 +0x925:  mov    %eax,(%esp)
084dc818 +0x928:  call   084b76d8 <_ZN8WongWork12CGenUniqueNo11GenUniqueNoEPc>  ; WongWork::CGenUniqueNo::GenUniqueNo(char*)
084dc81d +0x92d:  mov    &_ZN10GlobalData12s_pIPGHelperE,%edx
084dc823 +0x933:  mov    %esi,0x1c(%esp)
084dc827 +0x937:  mov    %ebx,0x18(%esp)
084dc82b +0x93b:  lea    -0x10c(%ebp),%ecx
084dc831 +0x941:  mov    %ecx,0x14(%esp)
084dc835 +0x945:  mov    %eax,0x10(%esp)
084dc839 +0x949:  lea    -0xa8(%ebp),%eax
084dc83f +0x94f:  mov    %eax,0xc(%esp)
084dc843 +0x953:  lea    -0x75(%ebp),%eax
084dc846 +0x956:  mov    %eax,0x8(%esp)
084dc84a +0x95a:  mov    0xc(%ebp),%eax
084dc84d +0x95d:  mov    %eax,0x4(%esp)
084dc851 +0x961:  mov    %edx,(%esp)
084dc854 +0x964:  call   *%edi
084dc856 +0x966:  lea    -0x84(%ebp),%eax
084dc85c +0x96c:  mov    %eax,(%esp)
084dc85f +0x96f:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084dc864 +0x974:  movl   $0x100,0x8(%esp)
084dc86c +0x97c:  movl   $0x1,0x4(%esp)
084dc874 +0x984:  lea    -0x84(%ebp),%eax
084dc87a +0x98a:  mov    %eax,(%esp)
084dc87d +0x98d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084dc882 +0x992:  movl   $0x1,0x4(%esp)
084dc88a +0x99a:  lea    -0x84(%ebp),%eax
084dc890 +0x9a0:  mov    %eax,(%esp)
084dc893 +0x9a3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084dc898 +0x9a8:  mov    -0x34(%ebp),%eax
084dc89b +0x9ab:  mov    %eax,(%esp)
084dc89e +0x9ae:  call   084e971c <_GLOBAL__I__Z7getUserj+0x6ce>  ; global constructors keyed to getUser(unsigned int)+0x6ce
084dc8a3 +0x9b3:  mov    %eax,0x4(%esp)
084dc8a7 +0x9b7:  lea    -0x84(%ebp),%eax
084dc8ad +0x9bd:  mov    %eax,(%esp)
084dc8b0 +0x9c0:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084dc8b5 +0x9c5:  mov    -0x34(%ebp),%eax
084dc8b8 +0x9c8:  mov    %eax,(%esp)
084dc8bb +0x9cb:  call   0822cabc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2166>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2166
084dc8c0 +0x9d0:  mov    %eax,0x4(%esp)
084dc8c4 +0x9d4:  lea    -0x84(%ebp),%eax
084dc8ca +0x9da:  mov    %eax,(%esp)
084dc8cd +0x9dd:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084dc8d2 +0x9e2:  mov    -0x34(%ebp),%eax
084dc8d5 +0x9e5:  mov    %eax,(%esp)
084dc8d8 +0x9e8:  call   084e9726 <_GLOBAL__I__Z7getUserj+0x6d8>  ; global constructors keyed to getUser(unsigned int)+0x6d8
084dc8dd +0x9ed:  mov    %eax,0x4(%esp)
084dc8e1 +0x9f1:  lea    -0x84(%ebp),%eax
084dc8e7 +0x9f7:  mov    %eax,(%esp)
084dc8ea +0x9fa:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084dc8ef +0x9ff:  movl   $0x1,0x4(%esp)
084dc8f7 +0xa07:  lea    -0x84(%ebp),%eax
084dc8fd +0xa0d:  mov    %eax,(%esp)
084dc900 +0xa10:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084dc905 +0xa15:  lea    -0x84(%ebp),%eax
084dc90b +0xa1b:  mov    %eax,0x4(%esp)
084dc90f +0xa1f:  mov    0xc(%ebp),%eax
084dc912 +0xa22:  mov    %eax,(%esp)
084dc915 +0xa25:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084dc91a +0xa2a:  mov    $0x0,%ebx
084dc91f +0xa2f:  lea    -0x84(%ebp),%eax
084dc925 +0xa35:  mov    %eax,(%esp)
084dc928 +0xa38:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084dc92d +0xa3d:  jmp    084dc962 <+0xa72>
084dc92f +0xa3f:  mov    %edx,%ebx
084dc931 +0xa41:  mov    %eax,%esi
084dc933 +0xa43:  lea    -0x84(%ebp),%eax
084dc939 +0xa49:  mov    %eax,(%esp)
084dc93c +0xa4c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084dc941 +0xa51:  mov    %esi,%eax
084dc943 +0xa53:  mov    %ebx,%edx
084dc945 +0xa55:  jmp    084dc947 <+0xa57>
084dc947 +0xa57:  mov    %edx,%ebx
084dc949 +0xa59:  mov    %eax,%esi
084dc94b +0xa5b:  lea    -0x4c(%ebp),%eax
084dc94e +0xa5e:  mov    %eax,(%esp)
084dc951 +0xa61:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084dc956 +0xa66:  mov    %esi,%eax
084dc958 +0xa68:  mov    %ebx,%edx
084dc95a +0xa6a:  mov    %eax,(%esp)
084dc95d +0xa6d:  call   08ae3750 <_Unwind_Resume>
084dc962 +0xa72:  lea    -0x4c(%ebp),%eax
084dc965 +0xa75:  mov    %eax,(%esp)
084dc968 +0xa78:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084dc96d +0xa7d:  mov    %ebx,%eax
084dc96f +0xa7f:  add    $0x12c,%esp
084dc975 +0xa85:  pop    %ebx
084dc976 +0xa86:  pop    %esi
084dc977 +0xa87:  pop    %edi
084dc978 +0xa88:  pop    %ebp
084dc979 +0xa89:  ret
```

## 反编译 C

```c
// Inter_ItemLimitEdition_Reply::dispatch_sig @ 0x84dbef0

/* Inter_ItemLimitEdition_Reply::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_ItemLimitEdition_Reply::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  ushort uVar2;
  code *pcVar3;
  char cVar4;
  stCeraShopIPGRequest_t sVar5;
  undefined2 uVar6;
  int iVar7;
  CDataManager *pCVar8;
  CItemLimitEditionMgr *this;
  undefined4 *puVar9;
  uint uVar10;
  GameWorld *this_00;
  uint uVar11;
  CInventory *this_01;
  int iVar12;
  Stream *pSVar13;
  CStreamGuard *this_02;
  undefined4 uVar14;
  char *pcVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  bool bVar18;
  byte bVar19;
  char local_110 [100];
  char local_ac [36];
  PacketGuard local_88 [15];
  char local_79 [8];
  char local_71;
  char local_70 [20];
  PacketGuard local_5c [12];
  CStreamGuard local_50 [8];
  int local_48 [2];
  bool local_3d;
  int local_3c;
  CItemLimitEdition *local_38;
  CItem *local_34;
  int local_30;
  stCeraShopIPGRequest_t *local_28;
  int local_24;
  int local_20;
  
  bVar19 = 0;
  iVar7 = CUser::get_state((CUser *)param_2);
  if (iVar7 < 3) {
    return 0;
  }
  local_3c = param_3;
  local_38 = (CItemLimitEdition *)0x0;
  local_34 = (CItem *)0x0;
  uVar10 = *(uint *)(param_3 + 0x12);
  uVar11 = *(uint *)(param_3 + 0xe);
                    /* try { // try from 084dbf3b to 084dc0a4 has its CatchHandler @ 084dc2c7 */
  pCVar8 = (CDataManager *)G_CDataManager();
  this = (CItemLimitEditionMgr *)CDataManager::getItemLimitEditionMgr(pCVar8);
  cVar4 = CItemLimitEditionMgr::updateItem(this,uVar11,uVar10);
  if (cVar4 != '\x01') {
    puVar9 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar9 = 0x16;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar9,&ENUM_ERROR::typeinfo,0);
  }
  cVar4 = *(char *)(local_3c + 0x16);
  if (cVar4 == '\x01') {
    puVar9 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar9 = 0x16;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar9,&ENUM_ERROR::typeinfo,0);
  }
  if (cVar4 == '\x02') {
    puVar9 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar9 = 0x5f;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar9,&ENUM_ERROR::typeinfo,0);
  }
  if (cVar4 != '\0') {
    puVar9 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar9 = 1;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar9,&ENUM_ERROR::typeinfo,0);
  }
  uVar14 = *(undefined4 *)(local_3c + 0xe);
  pCVar8 = (CDataManager *)G_CDataManager();
  uVar10 = CDataManager::getItemLimitEditionMgr(pCVar8);
  local_38 = (CItemLimitEdition *)CItemLimitEditionMgr::getItemInfo(uVar10);
  if (local_38 == (CItemLimitEdition *)0x0) {
    puVar9 = (undefined4 *)__cxa_allocate_exception(4,uVar14);
    *puVar9 = 0x11;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar9,&ENUM_ERROR::typeinfo,0);
  }
  cVar4 = CItemLimitEdition::isSellComplete(local_38);
  if (cVar4 != '\0') {
    PacketGuard::PacketGuard(local_5c);
                    /* try { // try from 084dc0bb to 084dc11e has its CatchHandler @ 084dc121 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_5c,0,0xe1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_5c,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_5c,1);
    CItemLimitEdition::makeInfoPacket(local_38,local_5c);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_5c,true);
    this_00 = (GameWorld *)G_GameWorld();
    GameWorld::send_all(this_00,local_5c);
                    /* try { // try from 084dc13f to 084dc29a has its CatchHandler @ 084dc2c7 */
    PacketGuard::~PacketGuard(local_5c);
  }
  uVar10 = CUser::GetCera((CUser *)param_2);
  uVar11 = CItemLimitEdition::getPriceCera(local_38);
  if (uVar10 < uVar11) {
    puVar9 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar9 = 0xb;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar9,&ENUM_ERROR::typeinfo,0);
  }
  this_01 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
  iVar7 = CInventory::get_money(this_01);
  iVar12 = CItemLimitEdition::getPriceGold(local_38);
  if (iVar7 < iVar12) {
    puVar9 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar9 = 10;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar9,&ENUM_ERROR::typeinfo,0);
  }
  uVar10 = CUserCharacInfo::GetWinPoint((CUserCharacInfo *)param_2);
  uVar11 = CItemLimitEdition::getPriceWinPoint();
  if (uVar10 < uVar11) {
    puVar9 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar9 = 0xc;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar9,&ENUM_ERROR::typeinfo,0);
  }
  iVar7 = CItemLimitEdition::getRelateditem(local_38);
  if (iVar7 != 1) {
    iVar7 = CItemLimitEdition::getRelateditem(local_38);
    pCVar8 = (CDataManager *)G_CDataManager();
    local_34 = (CItem *)CDataManager::find_item(pCVar8,iVar7);
    if (local_34 == (CItem *)0x0) {
      puVar9 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar9 = 0x11;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar9,&ENUM_ERROR::typeinfo,0);
    }
  }
  local_3d = false;
  local_48[1] = 0;
  local_48[0] = 0;
  local_30 = CItemLimitEdition::getFeaturedIdx(local_38);
  if (local_30 == 0) {
    iVar7 = CItemLimitEdition::getRelateditem(local_38);
    cVar4 = WongWork::CCeraShop::IsSpecialItem
                      (GlobalData::s_pCeraShop,iVar7,local_48 + 1,local_48,&local_3d);
    if (cVar4 != '\0') {
      bVar18 = true;
      goto LAB_084dc365;
    }
  }
  bVar18 = false;
LAB_084dc365:
  if (bVar18) {
    iVar7 = CItemLimitEdition::getRelateditem(local_38);
    iVar12 = G_CDataManager();
    local_30 = CItemList::GetRestrictCode(*(CItemList **)(iVar12 + 0xc),iVar7);
  }
  CUser::resetUsedCera((CUser *)param_2);
  pSVar13 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"InterDispatcher.cpp",0x46d9);
  CStreamGuard::CStreamGuard(local_50,pSVar13,false);
  this_02 = (CStreamGuard *)CStreamGuard::operator->(local_50);
                    /* try { // try from 084dc3da to 084dc863 has its CatchHandler @ 084dc947 */
  local_28 = CStreamGuard::GetInBuffer<stCeraShopIPGRequest_t>(this_02);
  *(undefined4 *)local_28 = *(undefined4 *)(local_3c + 0xe);
  *(undefined4 *)(local_28 + 4) = 10;
  uVar14 = CItemLimitEdition::getPriceCera(local_38);
  *(undefined4 *)(local_28 + 0x10) = uVar14;
  uVar14 = CItemLimitEdition::getPriceGold(local_38);
  *(undefined4 *)(local_28 + 0x18) = uVar14;
  uVar14 = CItemLimitEdition::getPriceWinPoint();
  *(undefined4 *)(local_28 + 0x14) = uVar14;
  uVar14 = CItemLimitEdition::getRelateditem(local_38);
  *(undefined4 *)(local_28 + 8) = uVar14;
  uVar6 = CItemLimitEdition::getRelatedItemCnt(local_38);
  *(undefined2 *)(local_28 + 0xc) = uVar6;
  local_28[0x2c] = *(stCeraShopIPGRequest_t *)(local_3c + 0x17);
  sVar5 = (stCeraShopIPGRequest_t)CItemLimitEdition::getAvatarTypeSelect(local_38);
  local_28[0x2d] = sVar5;
  *(undefined4 *)(local_28 + 0x1c) = 0;
  *(int *)(local_28 + 0x28) = local_30;
  *(undefined4 *)(local_28 + 0x20) = 1;
  *(undefined4 *)(local_28 + 0x24) = 1;
  uVar14 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  *(undefined4 *)(local_28 + 0x30) = uVar14;
  local_28[0x34] = (stCeraShopIPGRequest_t)0x0;
  uVar14 = CUser::get_acc_id((CUser *)param_2);
  *(undefined4 *)(local_28 + 0x40) = uVar14;
  uVar14 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
  *(undefined4 *)(local_28 + 0x38) = uVar14;
  local_28[0x44] = *(stCeraShopIPGRequest_t *)(local_3c + 0x18);
  for (local_24 = 0; local_24 < (int)(uint)*(byte *)(local_3c + 0x18); local_24 = local_24 + 1) {
    *(undefined4 *)(local_28 + (local_24 + 8) * 8 + 8) =
         *(undefined4 *)(local_3c + local_24 * 5 + 0x19);
    local_28[(local_24 + 8) * 8 + 0xc] = *(stCeraShopIPGRequest_t *)(local_3c + local_24 * 5 + 0x1d)
    ;
  }
  local_28[0x160] = *(stCeraShopIPGRequest_t *)(local_3c + 200);
  for (local_20 = 0; local_20 < (int)(uint)*(byte *)(local_3c + 200); local_20 = local_20 + 1) {
    *(undefined4 *)(local_28 + (local_20 + 0x2c) * 8 + 4) =
         *(undefined4 *)(local_3c + 9 + (local_20 + 0x18) * 8);
    *(undefined2 *)(local_28 + (local_20 + 0x2c) * 8 + 8) =
         *(undefined2 *)(local_3c + 0xd + (local_20 + 0x18) * 8);
    *(undefined2 *)(local_28 + (local_20 + 0x2c) * 8 + 10) =
         *(undefined2 *)(local_3c + 0xf + (local_20 + 0x18) * 8);
  }
  pcVar15 = local_ac;
  for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
    pcVar15[0] = '\0';
    pcVar15[1] = '\0';
    pcVar15[2] = '\0';
    pcVar15[3] = '\0';
    pcVar15 = pcVar15 + ((uint)bVar19 * -2 + 1) * 4;
  }
  pcVar15 = &local_71;
  uVar10 = 0x15;
  bVar18 = ((uint)pcVar15 & 1) != 0;
  if (bVar18) {
    local_71 = '\0';
    pcVar15 = local_70;
    uVar10 = 0x14;
  }
  if (((uint)pcVar15 & 2) != 0) {
    pcVar15[0] = '\0';
    pcVar15[1] = '\0';
    pcVar15 = pcVar15 + 2;
    uVar10 = uVar10 - 2;
  }
  uVar11 = 0;
  do {
    pcVar1 = pcVar15 + uVar11;
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    uVar11 = uVar11 + 4;
  } while (uVar11 < (uVar10 & 0xfffffffc));
  pcVar15 = pcVar15 + uVar11;
  if ((uVar10 & 2) != 0) {
    pcVar15[0] = '\0';
    pcVar15[1] = '\0';
    pcVar15 = pcVar15 + 2;
  }
  if (!bVar18) {
    *pcVar15 = '\0';
  }
  uVar14 = CItemLimitEdition::getPriceCera(local_38);
  OS_API::snprintf(local_ac,0x24,"%d",uVar14);
  OS_API::snprintf(local_79,8,"%d",*(undefined4 *)(local_3c + 0xe));
  iVar7 = CItemLimitEdition::getRelateditem(local_38);
  if (iVar7 == 1) {
    OS_API::snprintf(local_110,0x62,&DAT_08c898d2,(uint)*(ushort *)(local_28 + 0xc));
  }
  else {
    cVar4 = CItem::is_stackable(local_34);
    if ((cVar4 == '\0') || (*(ushort *)(local_28 + 0xc) < 2)) {
      bVar18 = false;
    }
    else {
      bVar18 = true;
    }
    if (bVar18) {
      uVar2 = *(ushort *)(local_28 + 0xc);
      uVar14 = CItem::GetItemName(local_34);
      OS_API::snprintf(local_110,0x62,&DAT_08c898ca,uVar14,(uint)uVar2);
    }
    else {
      pcVar15 = (char *)CItem::GetItemName(local_34);
      strcpy(local_110,pcVar15);
    }
  }
  iVar7 = CItemLimitEdition::getPriceCera(local_38);
  if (iVar7 == 0) {
    pcVar3 = *(code **)(*GlobalData::s_pIPGHelper + 0x18);
    uVar14 = CStreamGuard::Get(local_50);
    uVar16 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_2);
    uVar17 = WongWork::CGenUniqueNo::GenUniqueNo(&local_71);
    (*pcVar3)(GlobalData::s_pIPGHelper,param_2,local_79,local_ac,uVar17,local_110,uVar16,uVar14);
  }
  else {
    pcVar3 = *(code **)(*GlobalData::s_pIPGHelper + 0x14);
    uVar14 = CStreamGuard::Get(local_50);
    uVar16 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_2);
    uVar17 = WongWork::CGenUniqueNo::GenUniqueNo(&local_71);
    (*pcVar3)(GlobalData::s_pIPGHelper,param_2,local_79,local_ac,uVar17,local_110,uVar16,uVar14);
  }
  PacketGuard::PacketGuard(local_88);
                    /* try { // try from 084dc87d to 084dc919 has its CatchHandler @ 084dc92f */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_88,1,0x100);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_88,1);
  iVar7 = CItemLimitEdition::getIPGNO(local_38);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_88,iVar7);
  iVar7 = CItemLimitEdition::getCurSellNum(local_38);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_88,iVar7);
  iVar7 = CItemLimitEdition::getTotalSellNum(local_38);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_88,iVar7);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_88,true);
  CUser::Send((CUser *)param_2,local_88);
                    /* try { // try from 084dc928 to 084dc92c has its CatchHandler @ 084dc947 */
  PacketGuard::~PacketGuard(local_88);
  CStreamGuard::~CStreamGuard(local_50);
  return 0;
}
```
