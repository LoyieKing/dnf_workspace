# CAuctionServerProxy

`_GLOBAL__I__ZN19CAuctionServerProxyC2EPciS0_`

`global constructors keyed to CAuctionServerProxy::CAuctionServerProxy(char*, int, char*)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CAuctionServerProxy` | `0x082f7cef` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f7cef  _GLOBAL__I__ZN19CAuctionServerProxyC2EPciS0_
#           global constructors keyed to CAuctionServerProxy::CAuctionServerProxy(char*, int, char*)
# range [0x082f7cef, 0x082f80f3]
082f7cef +0x000:  push   %ebp
082f7cf0 +0x001:  mov    %esp,%ebp
082f7cf2 +0x003:  sub    $0x18,%esp
082f7cf5 +0x006:  movl   $0xffff,0x4(%esp)
082f7cfd +0x00e:  movl   $0x1,(%esp)
082f7d04 +0x015:  call   082f7caf <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
082f7d09 +0x01a:  leave
082f7d0a +0x01b:  ret
082f7d0b +0x01c:  nop
082f7d0c +0x01d:  push   %ebp
082f7d0d +0x01e:  mov    %esp,%ebp
082f7d0f +0x020:  mov    0x8(%ebp),%eax
082f7d12 +0x023:  movzbl 0x1(%eax),%eax
082f7d16 +0x027:  movsbl %al,%eax
082f7d19 +0x02a:  pop    %ebp
082f7d1a +0x02b:  ret
082f7d1b +0x02c:  nop
082f7d1c +0x02d:  push   %ebp
082f7d1d +0x02e:  mov    %esp,%ebp
082f7d1f +0x030:  mov    0x8(%ebp),%eax
082f7d22 +0x033:  mov    0x2(%eax),%eax
082f7d25 +0x036:  pop    %ebp
082f7d26 +0x037:  ret
082f7d27 +0x038:  nop
082f7d28 +0x039:  push   %ebp
082f7d29 +0x03a:  mov    %esp,%ebp
082f7d2b +0x03c:  mov    0x8(%ebp),%eax
082f7d2e +0x03f:  movzbl (%eax),%eax
082f7d31 +0x042:  movsbl %al,%eax
082f7d34 +0x045:  pop    %ebp
082f7d35 +0x046:  ret
082f7d36 +0x047:  push   %ebp
082f7d37 +0x048:  mov    %esp,%ebp
082f7d39 +0x04a:  sub    $0x18,%esp
082f7d3c +0x04d:  mov    0x8(%ebp),%eax
082f7d3f +0x050:  mov    %eax,(%esp)
082f7d42 +0x053:  call   0822e4d2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3b7c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3b7c
082f7d47 +0x058:  movl   $0x16,0x8(%esp)
082f7d4f +0x060:  movl   $0x0,0x4(%esp)
082f7d57 +0x068:  mov    0x8(%ebp),%eax
082f7d5a +0x06b:  mov    %eax,(%esp)
082f7d5d +0x06e:  call   0807dcc0 <_init+0x5b8>
082f7d62 +0x073:  mov    0x8(%ebp),%eax
082f7d65 +0x076:  movl   $0x0,0x4(%esp)
082f7d6d +0x07e:  mov    %eax,(%esp)
082f7d70 +0x081:  call   0822e4ae <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3b58>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3b58
082f7d75 +0x086:  mov    0x8(%ebp),%eax
082f7d78 +0x089:  movl   $0x0,0x4(%esp)
082f7d80 +0x091:  mov    %eax,(%esp)
082f7d83 +0x094:  call   0822e490 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3b3a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3b3a
082f7d88 +0x099:  mov    0x8(%ebp),%eax
082f7d8b +0x09c:  movl   $0x16,0x4(%esp)
082f7d93 +0x0a4:  mov    %eax,(%esp)
082f7d96 +0x0a7:  call   0822e4a0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3b4a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3b4a
082f7d9b +0x0ac:  leave
082f7d9c +0x0ad:  ret
082f7d9d +0x0ae:  nop
082f7d9e +0x0af:  push   %ebp
082f7d9f +0x0b0:  mov    %esp,%ebp
082f7da1 +0x0b2:  sub    $0x18,%esp
082f7da4 +0x0b5:  mov    0x8(%ebp),%eax
082f7da7 +0x0b8:  mov    %eax,(%esp)
082f7daa +0x0bb:  call   0822e4d2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3b7c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3b7c
082f7daf +0x0c0:  movl   $0x12,0x8(%esp)
082f7db7 +0x0c8:  movl   $0x0,0x4(%esp)
082f7dbf +0x0d0:  mov    0x8(%ebp),%eax
082f7dc2 +0x0d3:  mov    %eax,(%esp)
082f7dc5 +0x0d6:  call   0807dcc0 <_init+0x5b8>
082f7dca +0x0db:  mov    0x8(%ebp),%eax
082f7dcd +0x0de:  movl   $0x0,0x4(%esp)
082f7dd5 +0x0e6:  mov    %eax,(%esp)
082f7dd8 +0x0e9:  call   0822e4ae <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3b58>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3b58
082f7ddd +0x0ee:  mov    0x8(%ebp),%eax
082f7de0 +0x0f1:  movl   $0xd,0x4(%esp)
082f7de8 +0x0f9:  mov    %eax,(%esp)
082f7deb +0x0fc:  call   0822e490 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3b3a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3b3a
082f7df0 +0x101:  mov    0x8(%ebp),%eax
082f7df3 +0x104:  movl   $0x12,0x4(%esp)
082f7dfb +0x10c:  mov    %eax,(%esp)
082f7dfe +0x10f:  call   0822e4a0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3b4a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3b4a
082f7e03 +0x114:  leave
082f7e04 +0x115:  ret
082f7e05 +0x116:  nop
082f7e06 +0x117:  push   %ebp
082f7e07 +0x118:  mov    %esp,%ebp
082f7e09 +0x11a:  sub    $0x18,%esp
082f7e0c +0x11d:  mov    0x8(%ebp),%eax
082f7e0f +0x120:  mov    %eax,(%esp)
082f7e12 +0x123:  call   0822e4d2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3b7c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3b7c
082f7e17 +0x128:  movl   $0x16,0x8(%esp)
082f7e1f +0x130:  movl   $0x0,0x4(%esp)
082f7e27 +0x138:  mov    0x8(%ebp),%eax
082f7e2a +0x13b:  mov    %eax,(%esp)
082f7e2d +0x13e:  call   0807dcc0 <_init+0x5b8>
082f7e32 +0x143:  mov    0x8(%ebp),%eax
082f7e35 +0x146:  movl   $0x12,0x4(%esp)
082f7e3d +0x14e:  mov    %eax,(%esp)
082f7e40 +0x151:  call   0822e4ae <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3b58>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3b58
082f7e45 +0x156:  mov    0x8(%ebp),%eax
082f7e48 +0x159:  movl   $0x0,0x4(%esp)
082f7e50 +0x161:  mov    %eax,(%esp)
082f7e53 +0x164:  call   0822e490 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3b3a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3b3a
082f7e58 +0x169:  mov    0x8(%ebp),%eax
082f7e5b +0x16c:  movl   $0x16,0x4(%esp)
082f7e63 +0x174:  mov    %eax,(%esp)
082f7e66 +0x177:  call   0822e4a0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3b4a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3b4a
082f7e6b +0x17c:  leave
082f7e6c +0x17d:  ret
082f7e6d +0x17e:  nop
082f7e6e +0x17f:  push   %ebp
082f7e6f +0x180:  mov    %esp,%ebp
082f7e71 +0x182:  sub    $0x18,%esp
082f7e74 +0x185:  mov    0x8(%ebp),%eax
082f7e77 +0x188:  mov    %eax,(%esp)
082f7e7a +0x18b:  call   0822e4d2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3b7c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3b7c
082f7e7f +0x190:  movl   $0x12,0x8(%esp)
082f7e87 +0x198:  movl   $0x0,0x4(%esp)
082f7e8f +0x1a0:  mov    0x8(%ebp),%eax
082f7e92 +0x1a3:  mov    %eax,(%esp)
082f7e95 +0x1a6:  call   0807dcc0 <_init+0x5b8>
082f7e9a +0x1ab:  mov    0x8(%ebp),%eax
082f7e9d +0x1ae:  movl   $0x12,0x4(%esp)
082f7ea5 +0x1b6:  mov    %eax,(%esp)
082f7ea8 +0x1b9:  call   0822e4ae <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3b58>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3b58
082f7ead +0x1be:  mov    0x8(%ebp),%eax
082f7eb0 +0x1c1:  movl   $0xd,0x4(%esp)
082f7eb8 +0x1c9:  mov    %eax,(%esp)
082f7ebb +0x1cc:  call   0822e490 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3b3a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3b3a
082f7ec0 +0x1d1:  mov    0x8(%ebp),%eax
082f7ec3 +0x1d4:  movl   $0x12,0x4(%esp)
082f7ecb +0x1dc:  mov    %eax,(%esp)
082f7ece +0x1df:  call   0822e4a0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3b4a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3b4a
082f7ed3 +0x1e4:  leave
082f7ed4 +0x1e5:  ret
082f7ed5 +0x1e6:  nop
082f7ed6 +0x1e7:  push   %ebp
082f7ed7 +0x1e8:  mov    %esp,%ebp
082f7ed9 +0x1ea:  mov    0x8(%ebp),%eax
082f7edc +0x1ed:  add    $0x4,%eax
082f7edf +0x1f0:  pop    %ebp
082f7ee0 +0x1f1:  ret
082f7ee1 +0x1f2:  nop
082f7ee2 +0x1f3:  push   %ebp
082f7ee3 +0x1f4:  mov    %esp,%ebp
082f7ee5 +0x1f6:  push   %ebx
082f7ee6 +0x1f7:  sub    $0x54,%esp
082f7ee9 +0x1fa:  mov    0x8(%ebp),%eax
082f7eec +0x1fd:  mov    0x18(%eax),%edx
082f7eef +0x200:  mov    0xc(%ebp),%eax
082f7ef2 +0x203:  lea    (%edx,%eax,1),%eax
082f7ef5 +0x206:  mov    %eax,-0x14(%ebp)
082f7ef8 +0x209:  movl   $0x12,-0xc(%ebp)
082f7eff +0x210:  cmpl   $0x11,-0x14(%ebp)
082f7f03 +0x214:  jg     082f7f32 <+0x243>
082f7f05 +0x216:  mov    0x8(%ebp),%eax
082f7f08 +0x219:  mov    0x18(%eax),%edx
082f7f0b +0x21c:  mov    0xc(%ebp),%eax
082f7f0e +0x21f:  add    %eax,%edx
082f7f10 +0x221:  mov    0x8(%ebp),%eax
082f7f13 +0x224:  mov    %edx,0x18(%eax)
082f7f16 +0x227:  mov    0x8(%ebp),%eax
082f7f19 +0x22a:  mov    0x2c(%eax),%edx
082f7f1c +0x22d:  mov    0xc(%ebp),%eax
082f7f1f +0x230:  add    %eax,%edx
082f7f21 +0x232:  mov    0x8(%ebp),%eax
082f7f24 +0x235:  mov    %edx,0x2c(%eax)
082f7f27 +0x238:  mov    $0x1,%eax
082f7f2c +0x23d:  jmp    082f80ed <+0x3fe>
082f7f31 +0x242:  nop
082f7f32 +0x243:  mov    0x8(%ebp),%eax
082f7f35 +0x246:  mov    0x18(%eax),%eax
082f7f38 +0x249:  test   %eax,%eax
082f7f3a +0x24b:  je     082f7f52 <+0x263>
082f7f3c +0x24d:  mov    0x8(%ebp),%eax
082f7f3f +0x250:  mov    0x2c(%eax),%edx
082f7f42 +0x253:  mov    0x8(%ebp),%eax
082f7f45 +0x256:  mov    0x18(%eax),%eax
082f7f48 +0x259:  neg    %eax
082f7f4a +0x25b:  add    %eax,%edx
082f7f4c +0x25d:  mov    0x8(%ebp),%eax
082f7f4f +0x260:  mov    %edx,0x2c(%eax)
082f7f52 +0x263:  mov    0x8(%ebp),%eax
082f7f55 +0x266:  mov    0x2c(%eax),%eax
082f7f58 +0x269:  movl   $0x12,0x8(%esp)
082f7f60 +0x271:  mov    %eax,0x4(%esp)
082f7f64 +0x275:  lea    -0x26(%ebp),%eax
082f7f67 +0x278:  mov    %eax,(%esp)
082f7f6a +0x27b:  call   0807d8a0 <_init+0x198>
082f7f6f +0x280:  lea    -0x26(%ebp),%eax
082f7f72 +0x283:  mov    %eax,(%esp)
082f7f75 +0x286:  call   082f7d1c <+0x2d>
082f7f7a +0x28b:  mov    %eax,-0x10(%ebp)
082f7f7d +0x28e:  cmpl   $0x11,-0x10(%ebp)
082f7f81 +0x292:  jbe    082f7f8c <+0x29d>
082f7f83 +0x294:  cmpl   $0x5000,-0x10(%ebp)
082f7f8a +0x29b:  jbe    082f8006 <+0x317>
082f7f8c +0x29d:  lea    -0x26(%ebp),%eax
082f7f8f +0x2a0:  mov    %eax,(%esp)
082f7f92 +0x2a3:  call   082f7d0c <+0x1d>
082f7f97 +0x2a8:  mov    %eax,%ebx
082f7f99 +0x2aa:  lea    -0x26(%ebp),%eax
082f7f9c +0x2ad:  mov    %eax,(%esp)
082f7f9f +0x2b0:  call   082f7d28 <+0x39>
082f7fa4 +0x2b5:  mov    %ebx,0x20(%esp)
082f7fa8 +0x2b9:  mov    %eax,0x1c(%esp)
082f7fac +0x2bd:  mov    -0x10(%ebp),%eax
082f7faf +0x2c0:  mov    %eax,0x18(%esp)
082f7fb3 +0x2c4:  mov    0xc(%ebp),%eax
082f7fb6 +0x2c7:  mov    %eax,0x14(%esp)
082f7fba +0x2cb:  movl   $"Recv Size[%d], Parsing Packet Size[%d] PacketHeader[%x] PacketType[%d] is Too Large At Auction Packet",0x10(%esp)
082f7fc2 +0x2d3:  movl   $0x402,0xc(%esp)
082f7fca +0x2db:  movl   $&_ZZN8CNetworkILi100000ELi100000EE27Parsing_AuctionServerPacketEiE12__FUNCTION__,0x8(%esp)
082f7fd2 +0x2e3:  movl   $"Network.h",0x4(%esp)
082f7fda +0x2eb:  movl   $0x1,(%esp)
082f7fe1 +0x2f2:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
082f7fe6 +0x2f7:  mov    0x8(%ebp),%eax
082f7fe9 +0x2fa:  lea    0x30(%eax),%edx
082f7fec +0x2fd:  mov    0x8(%ebp),%eax
082f7fef +0x300:  mov    %edx,0x2c(%eax)
082f7ff2 +0x303:  mov    0x8(%ebp),%eax
082f7ff5 +0x306:  movl   $0x0,0x18(%eax)
082f7ffc +0x30d:  mov    $0x0,%eax
082f8001 +0x312:  jmp    082f80ed <+0x3fe>
082f8006 +0x317:  mov    -0x14(%ebp),%eax
082f8009 +0x31a:  cmp    -0x10(%ebp),%eax
082f800c +0x31d:  jb     082f8097 <+0x3a8>
082f8012 +0x323:  mov    0x8(%ebp),%eax
082f8015 +0x326:  mov    0x2c(%eax),%eax
082f8018 +0x329:  mov    %eax,(%esp)
082f801b +0x32c:  call   0847ac3c <_ZN21CDispatchServerPacket21dispatchAuctionPacketEPc>  ; CDispatchServerPacket::dispatchAuctionPacket(char*)
082f8020 +0x331:  mov    -0x14(%ebp),%eax
082f8023 +0x334:  sub    -0x10(%ebp),%eax
082f8026 +0x337:  mov    %eax,-0x14(%ebp)
082f8029 +0x33a:  mov    0x8(%ebp),%eax
082f802c +0x33d:  mov    0x2c(%eax),%eax
082f802f +0x340:  mov    %eax,%edx
082f8031 +0x342:  add    -0x10(%ebp),%edx
082f8034 +0x345:  mov    0x8(%ebp),%eax
082f8037 +0x348:  mov    %edx,0x2c(%eax)
082f803a +0x34b:  mov    0x8(%ebp),%eax
082f803d +0x34e:  movl   $0x0,0x18(%eax)
082f8044 +0x355:  cmpl   $0x0,-0x14(%ebp)
082f8048 +0x359:  jne    082f8058 <+0x369>
082f804a +0x35b:  mov    0x8(%ebp),%eax
082f804d +0x35e:  lea    0x30(%eax),%edx
082f8050 +0x361:  mov    0x8(%ebp),%eax
082f8053 +0x364:  mov    %edx,0x2c(%eax)
082f8056 +0x367:  jmp    082f8098 <+0x3a9>
082f8058 +0x369:  cmpl   $0x11,-0x14(%ebp)
082f805c +0x36d:  jg     082f7f31 <+0x242>
082f8062 +0x373:  mov    -0x14(%ebp),%eax
082f8065 +0x376:  mov    %eax,0x14(%esp)
082f8069 +0x37a:  movl   $"need more data (parsinglength < HEADER_SIZE): body=%d !!",0x10(%esp)
082f8071 +0x382:  movl   $0x41c,0xc(%esp)
082f8079 +0x38a:  movl   $&_ZZN8CNetworkILi100000ELi100000EE27Parsing_AuctionServerPacketEiE12__FUNCTION__,0x8(%esp)
082f8081 +0x392:  movl   $"Network.h",0x4(%esp)
082f8089 +0x39a:  movl   $0x1,(%esp)
082f8090 +0x3a1:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
082f8095 +0x3a6:  jmp    082f8098 <+0x3a9>
082f8097 +0x3a8:  nop
082f8098 +0x3a9:  cmpl   $0x0,-0x14(%ebp)
082f809c +0x3ad:  jle    082f80e8 <+0x3f9>
082f809e +0x3af:  mov    -0x14(%ebp),%eax
082f80a1 +0x3b2:  cmp    $&_ZL14gUnicodeBuffer+0xe174,%eax
082f80a6 +0x3b7:  jbe    082f80af <+0x3c0>
082f80a8 +0x3b9:  mov    $0x0,%eax
082f80ad +0x3be:  jmp    082f80ed <+0x3fe>
082f80af +0x3c0:  mov    -0x14(%ebp),%edx
082f80b2 +0x3c3:  mov    0x8(%ebp),%eax
082f80b5 +0x3c6:  mov    0x2c(%eax),%eax
082f80b8 +0x3c9:  mov    0x8(%ebp),%ecx
082f80bb +0x3cc:  add    $0x30,%ecx
082f80be +0x3cf:  mov    %edx,0x8(%esp)
082f80c2 +0x3d3:  mov    %eax,0x4(%esp)
082f80c6 +0x3d7:  mov    %ecx,(%esp)
082f80c9 +0x3da:  call   0807d880 <_init+0x178>
082f80ce +0x3df:  mov    0x8(%ebp),%eax
082f80d1 +0x3e2:  lea    0x30(%eax),%edx
082f80d4 +0x3e5:  mov    -0x14(%ebp),%eax
082f80d7 +0x3e8:  add    %eax,%edx
082f80d9 +0x3ea:  mov    0x8(%ebp),%eax
082f80dc +0x3ed:  mov    %edx,0x2c(%eax)
082f80df +0x3f0:  mov    -0x14(%ebp),%edx
082f80e2 +0x3f3:  mov    0x8(%ebp),%eax
082f80e5 +0x3f6:  mov    %edx,0x18(%eax)
082f80e8 +0x3f9:  mov    $0x1,%eax
082f80ed +0x3fe:  add    $0x54,%esp
082f80f0 +0x401:  pop    %ebx
082f80f1 +0x402:  pop    %ebp
082f80f2 +0x403:  ret
082f80f3 +0x404:  nop
```

## 反编译 C

```c
// <global>::global @ 0x82f7cef

/* CAuctionServerProxy::CAuctionServerProxy(char*, int, char*) */

void CAuctionServerProxy::_GLOBAL__I_CAuctionServerProxy(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
