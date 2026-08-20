# AntibotSend

`_ZN5CUser11AntibotSendER9PacketBuf`

`CUser::AntibotSend(PacketBuf&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0864809c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864809c  _ZN5CUser11AntibotSendER9PacketBuf
#           CUser::AntibotSend(PacketBuf&)
# range [0x0864809c, 0x086485b9]
0864809c +0x000:  push   %ebp
0864809d +0x001:  mov    %esp,%ebp
0864809f +0x003:  push   %edi
086480a0 +0x004:  push   %esi
086480a1 +0x005:  push   %ebx
086480a2 +0x006:  sub    $&_ZL14gUnicodeBuffer+0xcec0,%esp
086480a8 +0x00c:  movl   $0x0,0x4(%esp)
086480b0 +0x014:  mov    0xc(%ebp),%eax
086480b3 +0x017:  mov    %eax,(%esp)
086480b6 +0x01a:  call   0822b702 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xdac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xdac
086480bb +0x01f:  add    $0x1,%eax
086480be +0x022:  movzwl (%eax),%eax
086480c1 +0x025:  mov    %ax,-0x30(%ebp)
086480c5 +0x029:  movb   $0x0,-0x2e(%ebp)
086480c9 +0x02d:  mov    0xc(%ebp),%eax
086480cc +0x030:  mov    %eax,(%esp)
086480cf +0x033:  call   0858da28 <_ZNK9PacketBuf17isEncryptRequiredEv>  ; PacketBuf::isEncryptRequired() const
086480d4 +0x038:  test   %al,%al
086480d6 +0x03a:  je     08648112 <+0x76>
086480d8 +0x03c:  mov    &_ZN10GlobalData17s_antibotChecker_E,%eax
086480dd +0x041:  mov    (%eax),%eax
086480df +0x043:  add    $0x34,%eax
086480e2 +0x046:  mov    (%eax),%esi
086480e4 +0x048:  movzwl -0x30(%ebp),%ebx
086480e8 +0x04c:  mov    0x8(%ebp),%eax
086480eb +0x04f:  mov    %eax,(%esp)
086480ee +0x052:  call   0822fce4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x538e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x538e
086480f3 +0x057:  mov    %eax,%edx
086480f5 +0x059:  mov    &_ZN10GlobalData17s_antibotChecker_E,%eax
086480fa +0x05e:  mov    %ebx,0x8(%esp)
086480fe +0x062:  mov    %edx,0x4(%esp)
08648102 +0x066:  mov    %eax,(%esp)
08648105 +0x069:  call   *%esi
08648107 +0x06b:  test   %eax,%eax
08648109 +0x06d:  je     08648112 <+0x76>
0864810b +0x06f:  mov    $0x1,%eax
08648110 +0x074:  jmp    08648117 <+0x7b>
08648112 +0x076:  mov    $0x0,%eax
08648117 +0x07b:  mov    %al,-0x2d(%ebp)
0864811a +0x07e:  cmpb   $0x0,-0x2d(%ebp)
0864811e +0x082:  je     086483e3 <+0x347>
08648124 +0x088:  mov    %esp,%eax
08648126 +0x08a:  mov    %eax,-&_ZL14gUnicodeBuffer+0xce80(%ebp)
0864812c +0x090:  lea    -0x64(%ebp),%eax
0864812f +0x093:  mov    %eax,(%esp)
08648132 +0x096:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08648137 +0x09b:  mov    0xc(%ebp),%eax
0864813a +0x09e:  mov    %eax,(%esp)
0864813d +0x0a1:  call   0858da52 <_ZNK9PacketBuf7get_lenEv>  ; PacketBuf::get_len() const
08648142 +0x0a6:  add    $0x1f4,%eax
08648147 +0x0ab:  mov    %eax,-0x20(%ebp)
0864814a +0x0ae:  mov    -0x20(%ebp),%eax
0864814d +0x0b1:  sub    $0x1,%eax
08648150 +0x0b4:  mov    %eax,-0x58(%ebp)
08648153 +0x0b7:  mov    -0x20(%ebp),%eax
08648156 +0x0ba:  mov    $0x0,%edx
0864815b +0x0bf:  mov    %eax,%ecx
0864815d +0x0c1:  and    $0xff,%ch
08648160 +0x0c4:  mov    %ecx,-&_ZL14gUnicodeBuffer+0xce94(%ebp)
08648166 +0x0ca:  mov    %edx,%ecx
08648168 +0x0cc:  and    $0xf,%ecx
0864816b +0x0cf:  mov    %ecx,-&_ZL14gUnicodeBuffer+0xce90(%ebp)
08648171 +0x0d5:  mov    -&_ZL14gUnicodeBuffer+0xce94(%ebp),%eax
08648177 +0x0db:  mov    -&_ZL14gUnicodeBuffer+0xce90(%ebp),%edx
0864817d +0x0e1:  shld   $0x3,%eax,%edx
08648181 +0x0e5:  shl    $0x3,%eax
08648184 +0x0e8:  mov    %eax,%ecx
08648186 +0x0ea:  and    $0xff,%ch
08648189 +0x0ed:  mov    %ecx,-&_ZL14gUnicodeBuffer+0xce9c(%ebp)
0864818f +0x0f3:  mov    %edx,%ecx
08648191 +0x0f5:  and    $0xf,%ecx
08648194 +0x0f8:  mov    %ecx,-&_ZL14gUnicodeBuffer+0xce98(%ebp)
0864819a +0x0fe:  mov    -&_ZL14gUnicodeBuffer+0xce9c(%ebp),%eax
086481a0 +0x104:  mov    -&_ZL14gUnicodeBuffer+0xce98(%ebp),%edx
086481a6 +0x10a:  mov    -0x20(%ebp),%eax
086481a9 +0x10d:  mov    $0x0,%edx
086481ae +0x112:  mov    %eax,%ecx
086481b0 +0x114:  and    $0xff,%ch
086481b3 +0x117:  mov    %ecx,-&_ZL14gUnicodeBuffer+0xcea4(%ebp)
086481b9 +0x11d:  mov    %edx,%ecx
086481bb +0x11f:  and    $0xf,%ecx
086481be +0x122:  mov    %ecx,-&_ZL14gUnicodeBuffer+0xcea0(%ebp)
086481c4 +0x128:  mov    -&_ZL14gUnicodeBuffer+0xcea4(%ebp),%eax
086481ca +0x12e:  mov    -&_ZL14gUnicodeBuffer+0xcea0(%ebp),%edx
086481d0 +0x134:  shld   $0x3,%eax,%edx
086481d4 +0x138:  shl    $0x3,%eax
086481d7 +0x13b:  mov    %eax,%ecx
086481d9 +0x13d:  and    $0xff,%ch
086481dc +0x140:  mov    %ecx,-&_ZL14gUnicodeBuffer+0xceac(%ebp)
086481e2 +0x146:  mov    %edx,%ecx
086481e4 +0x148:  and    $0xf,%ecx
086481e7 +0x14b:  mov    %ecx,-&_ZL14gUnicodeBuffer+0xcea8(%ebp)
086481ed +0x151:  mov    -&_ZL14gUnicodeBuffer+0xceac(%ebp),%eax
086481f3 +0x157:  mov    -&_ZL14gUnicodeBuffer+0xcea8(%ebp),%edx
086481f9 +0x15d:  mov    -0x20(%ebp),%eax
086481fc +0x160:  add    $0xf,%eax
086481ff +0x163:  add    $0xf,%eax
08648202 +0x166:  shr    $0x4,%eax
08648205 +0x169:  shl    $0x4,%eax
08648208 +0x16c:  sub    %eax,%esp
0864820a +0x16e:  lea    0x18(%esp),%eax
0864820e +0x172:  add    $0xf,%eax
08648211 +0x175:  shr    $0x4,%eax
08648214 +0x178:  shl    $0x4,%eax
08648217 +0x17b:  mov    %eax,-0x54(%ebp)
0864821a +0x17e:  mov    -0x20(%ebp),%eax
0864821d +0x181:  mov    %eax,-0x68(%ebp)
08648220 +0x184:  lea    -0x64(%ebp),%eax
08648223 +0x187:  mov    %eax,(%esp)
08648226 +0x18a:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0864822b +0x18f:  mov    -0x20(%ebp),%edx
0864822e +0x192:  mov    -0x54(%ebp),%eax
08648231 +0x195:  mov    %edx,0x8(%esp)
08648235 +0x199:  movl   $0x0,0x4(%esp)
0864823d +0x1a1:  mov    %eax,(%esp)
08648240 +0x1a4:  call   0807dcc0 <_init+0x5b8>
08648245 +0x1a9:  movl   $0x231,0x8(%esp)
0864824d +0x1b1:  movl   $0x0,0x4(%esp)
08648255 +0x1b9:  lea    -0x64(%ebp),%eax
08648258 +0x1bc:  mov    %eax,(%esp)
0864825b +0x1bf:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08648260 +0x1c4:  mov    &_ZN10GlobalData17s_antibotChecker_E,%eax
08648265 +0x1c9:  mov    (%eax),%eax
08648267 +0x1cb:  add    $0x28,%eax
0864826a +0x1ce:  mov    (%eax),%eax
0864826c +0x1d0:  mov    %eax,-&_ZL14gUnicodeBuffer+0xce88(%ebp)
08648272 +0x1d6:  mov    -0x54(%ebp),%ebx
08648275 +0x1d9:  mov    0xc(%ebp),%eax
08648278 +0x1dc:  mov    %eax,(%esp)
0864827b +0x1df:  call   0858da52 <_ZNK9PacketBuf7get_lenEv>  ; PacketBuf::get_len() const
08648280 +0x1e4:  mov    %eax,%edi
08648282 +0x1e6:  movl   $0x0,0x4(%esp)
0864828a +0x1ee:  mov    0xc(%ebp),%eax
0864828d +0x1f1:  mov    %eax,(%esp)
08648290 +0x1f4:  call   0822b702 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xdac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xdac
08648295 +0x1f9:  mov    %eax,%esi
08648297 +0x1fb:  mov    0x8(%ebp),%eax
0864829a +0x1fe:  mov    %eax,(%esp)
0864829d +0x201:  call   0822fce4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x538e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x538e
086482a2 +0x206:  mov    %eax,%ecx
086482a4 +0x208:  mov    &_ZN10GlobalData17s_antibotChecker_E,%edx
086482aa +0x20e:  lea    -0x68(%ebp),%eax
086482ad +0x211:  mov    %eax,0x14(%esp)
086482b1 +0x215:  mov    %ebx,0x10(%esp)
086482b5 +0x219:  mov    %edi,0xc(%esp)
086482b9 +0x21d:  mov    %esi,0x8(%esp)
086482bd +0x221:  mov    %ecx,0x4(%esp)
086482c1 +0x225:  mov    %edx,(%esp)
086482c4 +0x228:  call   *-&_ZL14gUnicodeBuffer+0xce88(%ebp)
086482ca +0x22e:  mov    %eax,-0x1c(%ebp)
086482cd +0x231:  cmpl   $0x0,-0x1c(%ebp)
086482d1 +0x235:  jne    08648323 <+0x287>
086482d3 +0x237:  mov    -0x68(%ebp),%eax
086482d6 +0x23a:  mov    %eax,%edx
086482d8 +0x23c:  mov    -0x54(%ebp),%eax
086482db +0x23f:  mov    %edx,0x8(%esp)
086482df +0x243:  mov    %eax,0x4(%esp)
086482e3 +0x247:  lea    -0x64(%ebp),%eax
086482e6 +0x24a:  mov    %eax,(%esp)
086482e9 +0x24d:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
086482ee +0x252:  movl   $0x0,0x4(%esp)
086482f6 +0x25a:  lea    -0x64(%ebp),%eax
086482f9 +0x25d:  mov    %eax,(%esp)
086482fc +0x260:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08648301 +0x265:  lea    -0x64(%ebp),%eax
08648304 +0x268:  mov    %eax,0x4(%esp)
08648308 +0x26c:  mov    0x8(%ebp),%eax
0864830b +0x26f:  mov    %eax,(%esp)
0864830e +0x272:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08648313 +0x277:  mov    %al,-&_ZL14gUnicodeBuffer+0xce81(%ebp)
08648319 +0x27d:  mov    $0x0,%ebx
0864831e +0x282:  jmp    086483aa <+0x30e>
08648323 +0x287:  mov    0xc(%ebp),%eax
08648326 +0x28a:  mov    %eax,(%esp)
08648329 +0x28d:  call   0858da52 <_ZNK9PacketBuf7get_lenEv>  ; PacketBuf::get_len() const
0864832e +0x292:  mov    %eax,%esi
08648330 +0x294:  mov    0x8(%ebp),%eax
08648333 +0x297:  mov    %eax,(%esp)
08648336 +0x29a:  call   0822fce4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x538e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x538e
0864833b +0x29f:  mov    %eax,%ebx
0864833d +0x2a1:  movzwl -0x30(%ebp),%edi
08648341 +0x2a5:  movl   $0x0,0xc(%esp)
08648349 +0x2ad:  movl   $0x807,0x8(%esp)
08648351 +0x2b5:  movl   $&_ZZN5CUser11AntibotSendER9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08648359 +0x2bd:  lea    -0x50(%ebp),%eax
0864835c +0x2c0:  mov    %eax,(%esp)
0864835f +0x2c3:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08648364 +0x2c8:  mov    %esi,0x14(%esp)
08648368 +0x2cc:  mov    %ebx,0x10(%esp)
0864836c +0x2d0:  mov    %edi,0xc(%esp)
08648370 +0x2d4:  mov    -0x1c(%ebp),%eax
08648373 +0x2d7:  mov    %eax,0x8(%esp)
08648377 +0x2db:  movl   $"[RecvBufferForEncrypt] result : %d, PacketID : %d, Key : %d, Length : %d",0x4(%esp)
0864837f +0x2e3:  lea    -0x50(%ebp),%eax
08648382 +0x2e6:  mov    %eax,(%esp)
08648385 +0x2e9:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0864838a +0x2ee:  movb   $0x1,-0x2e(%ebp)
0864838e +0x2f2:  mov    $0x1,%ebx
08648393 +0x2f7:  jmp    086483aa <+0x30e>
08648395 +0x2f9:  mov    %edx,%ebx
08648397 +0x2fb:  mov    %eax,%esi
08648399 +0x2fd:  lea    -0x64(%ebp),%eax
0864839c +0x300:  mov    %eax,(%esp)
0864839f +0x303:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086483a4 +0x308:  mov    %esi,%eax
086483a6 +0x30a:  mov    %ebx,%edx
086483a8 +0x30c:  jmp    086483c7 <+0x32b>
086483aa +0x30e:  lea    -0x64(%ebp),%eax
086483ad +0x311:  mov    %eax,(%esp)
086483b0 +0x314:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086483b5 +0x319:  test   %ebx,%ebx
086483b7 +0x31b:  jne    086483c0 <+0x324>
086483b9 +0x31d:  mov    $0x0,%eax
086483be +0x322:  jmp    086483d5 <+0x339>
086483c0 +0x324:  mov    $0x1,%eax
086483c5 +0x329:  jmp    086483d5 <+0x339>
086483c7 +0x32b:  mov    -&_ZL14gUnicodeBuffer+0xce80(%ebp),%esp
086483cd +0x331:  mov    %eax,(%esp)
086483d0 +0x334:  call   08ae3750 <_Unwind_Resume>
086483d5 +0x339:  mov    -&_ZL14gUnicodeBuffer+0xce80(%ebp),%esp
086483db +0x33f:  test   %eax,%eax
086483dd +0x341:  je     086485a7 <+0x50b>
086483e3 +0x347:  lea    -&_ZL14gUnicodeBuffer+0xce70(%ebp),%eax
086483e9 +0x34d:  mov    %eax,(%esp)
086483ec +0x350:  call   0858c8c0 <_ZN9PacketBufC1Ev>  ; PacketBuf::PacketBuf()
086483f1 +0x355:  movl   $0x0,0x4(%esp)
086483f9 +0x35d:  mov    0xc(%ebp),%eax
086483fc +0x360:  mov    %eax,(%esp)
086483ff +0x363:  call   0822b702 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xdac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xdac
08648404 +0x368:  mov    %eax,-0x2c(%ebp)
08648407 +0x36b:  mov    0xc(%ebp),%eax
0864840a +0x36e:  mov    %eax,(%esp)
0864840d +0x371:  call   0858da52 <_ZNK9PacketBuf7get_lenEv>  ; PacketBuf::get_len() const
08648412 +0x376:  mov    %eax,-0x28(%ebp)
08648415 +0x379:  movzbl -0x2d(%ebp),%eax
08648419 +0x37d:  xor    $0x1,%eax
0864841c +0x380:  test   %al,%al
0864841e +0x382:  je     0864842f <+0x393>
08648420 +0x384:  mov    0xc(%ebp),%eax
08648423 +0x387:  mov    %eax,(%esp)
08648426 +0x38a:  call   0858da28 <_ZNK9PacketBuf17isEncryptRequiredEv>  ; PacketBuf::isEncryptRequired() const
0864842b +0x38f:  test   %al,%al
0864842d +0x391:  jne    08648435 <+0x399>
0864842f +0x393:  cmpb   $0x0,-0x2e(%ebp)
08648433 +0x397:  je     0864843c <+0x3a0>
08648435 +0x399:  mov    $0x1,%eax
0864843a +0x39e:  jmp    08648441 <+0x3a5>
0864843c +0x3a0:  mov    $0x0,%eax
08648441 +0x3a5:  test   %al,%al
08648443 +0x3a7:  je     086484a0 <+0x404>
08648445 +0x3a9:  mov    0xc(%ebp),%eax
08648448 +0x3ac:  mov    %eax,0x4(%esp)
0864844c +0x3b0:  lea    -&_ZL14gUnicodeBuffer+0xce70(%ebp),%eax
08648452 +0x3b6:  mov    %eax,(%esp)
08648455 +0x3b9:  call   0858dcd2 <_ZN9PacketBuf4copyERKS_>  ; PacketBuf::copy(PacketBuf const&)
0864845a +0x3be:  lea    -&_ZL14gUnicodeBuffer+0xce70(%ebp),%eax
08648460 +0x3c4:  mov    %eax,(%esp)
08648463 +0x3c7:  call   0858d86a <_ZN9PacketBuf14encrypt_packetEv>  ; PacketBuf::encrypt_packet()
08648468 +0x3cc:  movl   $0x0,0x4(%esp)
08648470 +0x3d4:  lea    -&_ZL14gUnicodeBuffer+0xce70(%ebp),%eax
08648476 +0x3da:  mov    %eax,(%esp)
08648479 +0x3dd:  call   0822b702 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xdac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xdac
0864847e +0x3e2:  mov    %eax,-0x2c(%ebp)
08648481 +0x3e5:  lea    -&_ZL14gUnicodeBuffer+0xce70(%ebp),%eax
08648487 +0x3eb:  mov    %eax,(%esp)
0864848a +0x3ee:  call   0858da52 <_ZNK9PacketBuf7get_lenEv>  ; PacketBuf::get_len() const
0864848f +0x3f3:  mov    %eax,-0x28(%ebp)
08648492 +0x3f6:  lea    -&_ZL14gUnicodeBuffer+0xce70(%ebp),%eax
08648498 +0x3fc:  mov    %eax,(%esp)
0864849b +0x3ff:  call   0858df30 <_ZN9PacketBuf11encFinalizeEv>  ; PacketBuf::encFinalize()
086484a0 +0x404:  mov    -0x28(%ebp),%eax
086484a3 +0x407:  movzwl %ax,%eax
086484a6 +0x40a:  mov    0x8(%ebp),%edx
086484a9 +0x40d:  mov    %edx,0x8(%esp)
086484ad +0x411:  mov    %eax,0x4(%esp)
086484b1 +0x415:  mov    -0x2c(%ebp),%eax
086484b4 +0x418:  mov    %eax,(%esp)
086484b7 +0x41b:  call   082751ee <_Z22_NS_PI_2ND_SendHash_SCPctP5CUser>  ; _NS_PI_2ND_SendHash_SC(char*, unsigned short, CUser*)
086484bc +0x420:  mov    0x8(%ebp),%eax
086484bf +0x423:  lea    0xe0(%eax),%edx
086484c5 +0x429:  mov    -0x28(%ebp),%eax
086484c8 +0x42c:  mov    %eax,0x8(%esp)
086484cc +0x430:  mov    -0x2c(%ebp),%eax
086484cf +0x433:  mov    %eax,0x4(%esp)
086484d3 +0x437:  mov    %edx,(%esp)
086484d6 +0x43a:  call   08698744 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x4f99>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x4f99
086484db +0x43f:  mov    %eax,-0x24(%ebp)
086484de +0x442:  cmpl   $0x0,-0x24(%ebp)
086484e2 +0x446:  jns    08648572 <+0x4d6>
086484e8 +0x44c:  movzwl -0x30(%ebp),%esi
086484ec +0x450:  mov    0x8(%ebp),%eax
086484ef +0x453:  mov    %eax,(%esp)
086484f2 +0x456:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
086484f7 +0x45b:  mov    %eax,%ebx
086484f9 +0x45d:  movl   $0x0,0xc(%esp)
08648501 +0x465:  movl   $0x834,0x8(%esp)
08648509 +0x46d:  movl   $&_ZZN5CUser11AntibotSendER9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08648511 +0x475:  lea    -0x40(%ebp),%eax
08648514 +0x478:  mov    %eax,(%esp)
08648517 +0x47b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0864851c +0x480:  mov    -0x28(%ebp),%eax
0864851f +0x483:  mov    %eax,0x10(%esp)
08648523 +0x487:  mov    %esi,0xc(%esp)
08648527 +0x48b:  mov    %ebx,0x8(%esp)
0864852b +0x48f:  movl   $"User %s - send_packet() fail length(ID:%d,LEN:%d),",0x4(%esp)
08648533 +0x497:  lea    -0x40(%ebp),%eax
08648536 +0x49a:  mov    %eax,(%esp)
08648539 +0x49d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0864853e +0x4a2:  cmpw   $0xc7,-0x30(%ebp)
08648544 +0x4a8:  je     08648569 <+0x4cd>
08648546 +0x4aa:  movl   $0x0,0xc(%esp)
0864854e +0x4b2:  movl   $0x0,0x8(%esp)
08648556 +0x4ba:  movl   $0x6,0x4(%esp)
0864855e +0x4c2:  mov    0x8(%ebp),%eax
08648561 +0x4c5:  mov    %eax,(%esp)
08648564 +0x4c8:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
08648569 +0x4cd:  movb   $0x0,-&_ZL14gUnicodeBuffer+0xce81(%ebp)
08648570 +0x4d4:  jmp    08648599 <+0x4fd>
08648572 +0x4d6:  movb   $0x1,-&_ZL14gUnicodeBuffer+0xce81(%ebp)
08648579 +0x4dd:  jmp    08648599 <+0x4fd>
0864857b +0x4df:  mov    %edx,%ebx
0864857d +0x4e1:  mov    %eax,%esi
0864857f +0x4e3:  lea    -&_ZL14gUnicodeBuffer+0xce70(%ebp),%eax
08648585 +0x4e9:  mov    %eax,(%esp)
08648588 +0x4ec:  call   0858c8dc <_ZN9PacketBufD1Ev>  ; PacketBuf::~PacketBuf()
0864858d +0x4f1:  mov    %esi,%eax
0864858f +0x4f3:  mov    %ebx,%edx
08648591 +0x4f5:  mov    %eax,(%esp)
08648594 +0x4f8:  call   08ae3750 <_Unwind_Resume>
08648599 +0x4fd:  lea    -&_ZL14gUnicodeBuffer+0xce70(%ebp),%eax
0864859f +0x503:  mov    %eax,(%esp)
086485a2 +0x506:  call   0858c8dc <_ZN9PacketBufD1Ev>  ; PacketBuf::~PacketBuf()
086485a7 +0x50b:  movzbl -&_ZL14gUnicodeBuffer+0xce81(%ebp),%eax
086485ae +0x512:  lea    -0xc(%ebp),%esp
086485b1 +0x515:  add    $0x0,%esp
086485b4 +0x518:  pop    %ebx
086485b5 +0x519:  pop    %esi
086485b6 +0x51a:  pop    %edi
086485b7 +0x51b:  pop    %ebp
086485b8 +0x51c:  ret
086485b9 +0x51d:  nop
```

## 反编译 C

```c
// CUser::AntibotSend @ 0x864809c

/* CUser::AntibotSend(PacketBuf&) */

undefined1 __thiscall CUser::AntibotSend(CUser *this,PacketBuf *param_1)

{
  code *pcVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  bool bVar10;
  uint uStack_17400;
  uint uStack_173f4;
  undefined1 auStack_173e0 [4];
  int iStack_173dc;
  uint uStack_173d8;
  uint uStack_173d4;
  undefined4 uStack_173d0;
  int iStack_173cc;
  uint uStack_173c8;
  uint uStack_173c4;
  undefined4 uStack_173c0;
  code *pcStack_173b8;
  undefined1 uStack_173b1;
  undefined1 *puStack_173b0;
  undefined1 auStack_173a0 [95028];
  uint local_6c;
  PacketGuard local_68 [12];
  int local_5c;
  undefined1 *local_58;
  undefined1 local_54 [16];
  undefined1 local_44 [16];
  ushort local_34;
  char local_32;
  char local_31;
  int local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  int local_20;
  
  uStack_17400 = 0x86480bb;
  iVar4 = PacketBuf::get_packet(param_1,0);
  local_34 = *(ushort *)(iVar4 + 1);
  local_32 = '\0';
  uStack_17400 = 0x86480d4;
  cVar3 = PacketBuf::isEncryptRequired(param_1);
  if (cVar3 == '\0') {
LAB_08648112:
    local_31 = '\0';
  }
  else {
    pcVar1 = *(code **)(*GlobalData::s_antibotChecker_ + 0x34);
    uVar8 = (uint)local_34;
    uStack_17400 = 0x86480f3;
    getAntibotKey(this);
    uStack_17400 = 0x8648107;
    uStack_173f4 = uVar8;
    iVar4 = (*pcVar1)();
    if (iVar4 == 0) goto LAB_08648112;
    local_31 = '\x01';
  }
  piVar9 = (int *)&stack0xfffe8c04;
  if (local_31 != '\0') {
                    /* try { // try from 08648132 to 08648136 has its CatchHandler @ 086483c7 */
    uStack_17400 = 0x8648137;
    puStack_173b0 = &stack0xfffe8c04;
    PacketGuard::PacketGuard(local_68);
                    /* try { // try from 0864813d to 08648389 has its CatchHandler @ 08648395 */
    uStack_17400 = 0x8648142;
    iVar4 = PacketBuf::get_len(param_1);
    local_6c = iVar4 + 500;
    local_5c = iVar4 + 499;
    uStack_173c4 = local_6c;
    uStack_173c0 = 0;
    iStack_173cc = local_6c * 8;
    uStack_173c8 = local_6c >> 0x1d;
    uStack_173d4 = local_6c;
    uStack_173d0 = 0;
    iStack_173dc = local_6c * 8;
    uStack_173d8 = local_6c >> 0x1d;
    iVar4 = -(iVar4 + 0x212U & 0xfffffff0);
    local_58 = auStack_173e0 + iVar4;
    *(PacketGuard **)(&stack0xfffe8c04 + iVar4) = local_68;
    *(undefined4 *)((int)&uStack_17400 + iVar4) = 0x864822b;
    local_24 = local_6c;
    InterfacePacketBuf::clear(*(InterfacePacketBuf **)(&stack0xfffe8c04 + iVar4));
    *(uint *)((int)&stack0xfffe8c0c + iVar4) = local_24;
    *(undefined4 *)(&stack0xfffe8c08 + iVar4) = 0;
    *(undefined1 **)(&stack0xfffe8c04 + iVar4) = local_58;
    *(undefined4 *)((int)&uStack_17400 + iVar4) = 0x8648245;
    memset(*(void **)(&stack0xfffe8c04 + iVar4),*(int *)(&stack0xfffe8c08 + iVar4),
           *(size_t *)((int)&stack0xfffe8c0c + iVar4));
    *(undefined4 *)((int)&stack0xfffe8c0c + iVar4) = 0x231;
    *(undefined4 *)(&stack0xfffe8c08 + iVar4) = 0;
    *(PacketGuard **)(&stack0xfffe8c04 + iVar4) = local_68;
    *(undefined4 *)((int)&uStack_17400 + iVar4) = 0x8648260;
    InterfacePacketBuf::put_header
              (*(InterfacePacketBuf **)(&stack0xfffe8c04 + iVar4),*(int *)(&stack0xfffe8c08 + iVar4)
               ,*(int *)((int)&stack0xfffe8c0c + iVar4));
    puVar2 = local_58;
    pcStack_173b8 = *(code **)(*GlobalData::s_antibotChecker_ + 0x28);
    *(PacketBuf **)(&stack0xfffe8c04 + iVar4) = param_1;
    *(undefined4 *)((int)&uStack_17400 + iVar4) = 0x8648280;
    uVar5 = PacketBuf::get_len(*(PacketBuf **)(&stack0xfffe8c04 + iVar4));
    *(undefined4 *)(&stack0xfffe8c08 + iVar4) = 0;
    *(PacketBuf **)(&stack0xfffe8c04 + iVar4) = param_1;
    *(undefined4 *)((int)&uStack_17400 + iVar4) = 0x8648295;
    uVar6 = PacketBuf::get_packet
                      (*(PacketBuf **)(&stack0xfffe8c04 + iVar4),*(int *)(&stack0xfffe8c08 + iVar4))
    ;
    *(CUser **)(&stack0xfffe8c04 + iVar4) = this;
    *(undefined4 *)((int)&uStack_17400 + iVar4) = 0x86482a2;
    uVar7 = getAntibotKey(*(CUser **)(&stack0xfffe8c04 + iVar4));
    *(uint **)(&stack0xfffe8c18 + iVar4) = &local_6c;
    *(undefined1 **)(&stack0xfffe8c14 + iVar4) = puVar2;
    *(undefined4 *)(&stack0xfffe8c10 + iVar4) = uVar5;
    *(undefined4 *)((int)&stack0xfffe8c0c + iVar4) = uVar6;
    *(undefined4 *)(&stack0xfffe8c08 + iVar4) = uVar7;
    *(int **)(&stack0xfffe8c04 + iVar4) = GlobalData::s_antibotChecker_;
    pcVar1 = pcStack_173b8;
    *(undefined4 *)((int)&uStack_17400 + iVar4) = 0x86482ca;
    local_20 = (*pcVar1)();
    bVar10 = local_20 != 0;
    if (bVar10) {
      *(PacketBuf **)(&stack0xfffe8c04 + iVar4) = param_1;
      *(undefined4 *)((int)&uStack_17400 + iVar4) = 0x864832e;
      uVar5 = PacketBuf::get_len(*(PacketBuf **)(&stack0xfffe8c04 + iVar4));
      *(CUser **)(&stack0xfffe8c04 + iVar4) = this;
      *(undefined4 *)((int)&uStack_17400 + iVar4) = 0x864833b;
      uVar6 = getAntibotKey(*(CUser **)(&stack0xfffe8c04 + iVar4));
      uVar8 = (uint)local_34;
      *(undefined4 *)(&stack0xfffe8c10 + iVar4) = 0;
      *(undefined4 *)((int)&stack0xfffe8c0c + iVar4) = 0x807;
      *(char **)(&stack0xfffe8c08 + iVar4) = "bool CUser::AntibotSend(PacketBuf&)";
      *(undefined1 **)(&stack0xfffe8c04 + iVar4) = local_54;
      *(undefined4 *)((int)&uStack_17400 + iVar4) = 0x8648364;
      cMyTrace::cMyTrace(*(cMyTrace **)(&stack0xfffe8c04 + iVar4),
                         *(char **)(&stack0xfffe8c08 + iVar4),
                         *(int *)((int)&stack0xfffe8c0c + iVar4),*(int *)(&stack0xfffe8c10 + iVar4))
      ;
      *(undefined4 *)(&stack0xfffe8c18 + iVar4) = uVar5;
      *(undefined4 *)(&stack0xfffe8c14 + iVar4) = uVar6;
      *(uint *)(&stack0xfffe8c10 + iVar4) = uVar8;
      *(int *)((int)&stack0xfffe8c0c + iVar4) = local_20;
      *(char **)(&stack0xfffe8c08 + iVar4) =
           "[RecvBufferForEncrypt] result : %d, PacketID : %d, Key : %d, Length : %d";
      *(undefined1 **)(&stack0xfffe8c04 + iVar4) = local_54;
      *(undefined4 *)((int)&uStack_17400 + iVar4) = 0x864838a;
      cMyTrace::operator()
                (*(cMyTrace **)(&stack0xfffe8c04 + iVar4),*(char **)(&stack0xfffe8c08 + iVar4));
      local_32 = '\x01';
    }
    else {
      *(uint *)((int)&stack0xfffe8c0c + iVar4) = local_6c;
      *(undefined1 **)(&stack0xfffe8c08 + iVar4) = local_58;
      *(PacketGuard **)(&stack0xfffe8c04 + iVar4) = local_68;
      *(undefined4 *)((int)&uStack_17400 + iVar4) = 0x86482ee;
      InterfacePacketBuf::put_binary
                (*(InterfacePacketBuf **)(&stack0xfffe8c04 + iVar4),
                 *(char **)(&stack0xfffe8c08 + iVar4),*(int *)((int)&stack0xfffe8c0c + iVar4));
      *(undefined4 *)(&stack0xfffe8c08 + iVar4) = 0;
      *(PacketGuard **)(&stack0xfffe8c04 + iVar4) = local_68;
      *(undefined4 *)((int)&uStack_17400 + iVar4) = 0x8648301;
      InterfacePacketBuf::finalize
                (*(InterfacePacketBuf **)(&stack0xfffe8c04 + iVar4),(bool)(&stack0xfffe8c08)[iVar4])
      ;
      *(PacketGuard **)(&stack0xfffe8c08 + iVar4) = local_68;
      *(CUser **)(&stack0xfffe8c04 + iVar4) = this;
      *(undefined4 *)((int)&uStack_17400 + iVar4) = 0x8648313;
      uStack_173b1 = Send(*(CUser **)(&stack0xfffe8c04 + iVar4),
                          *(PacketGuard **)(&stack0xfffe8c08 + iVar4));
    }
    *(PacketGuard **)(&stack0xfffe8c04 + iVar4) = local_68;
                    /* try { // try from 086483b0 to 086483b4 has its CatchHandler @ 086483c7 */
    *(undefined4 *)((int)&uStack_17400 + iVar4) = 0x86483b5;
    PacketGuard::~PacketGuard(*(PacketGuard **)(&stack0xfffe8c04 + iVar4));
    piVar9 = (int *)puStack_173b0;
    if (!bVar10) {
      return uStack_173b1;
    }
  }
  *piVar9 = (int)auStack_173a0;
  piVar9[-1] = 0x86483f1;
  PacketBuf::PacketBuf((PacketBuf *)*piVar9);
  piVar9[1] = 0;
  *piVar9 = (int)param_1;
                    /* try { // try from 086483ff to 08648568 has its CatchHandler @ 0864857b */
  piVar9[-1] = 0x8648404;
  local_30 = PacketBuf::get_packet((PacketBuf *)*piVar9,piVar9[1]);
  *piVar9 = (int)param_1;
  piVar9[-1] = 0x8648412;
  local_2c = PacketBuf::get_len((PacketBuf *)*piVar9);
  if (local_31 == '\x01') {
LAB_0864842f:
    if (local_32 == '\0') {
      bVar10 = false;
      goto LAB_08648441;
    }
  }
  else {
    *piVar9 = (int)param_1;
    piVar9[-1] = 0x864842b;
    cVar3 = PacketBuf::isEncryptRequired((PacketBuf *)*piVar9);
    if (cVar3 == '\0') goto LAB_0864842f;
  }
  bVar10 = true;
LAB_08648441:
  if (bVar10) {
    piVar9[1] = (int)param_1;
    *piVar9 = (int)auStack_173a0;
    piVar9[-1] = 0x864845a;
    PacketBuf::copy((PacketBuf *)*piVar9,(PacketBuf *)piVar9[1]);
    *piVar9 = (int)auStack_173a0;
    piVar9[-1] = 0x8648468;
    PacketBuf::encrypt_packet((PacketBuf *)*piVar9);
    piVar9[1] = 0;
    *piVar9 = (int)auStack_173a0;
    piVar9[-1] = 0x864847e;
    local_30 = PacketBuf::get_packet((PacketBuf *)*piVar9,piVar9[1]);
    *piVar9 = (int)auStack_173a0;
    piVar9[-1] = 0x864848f;
    local_2c = PacketBuf::get_len((PacketBuf *)*piVar9);
    *piVar9 = (int)auStack_173a0;
    piVar9[-1] = 0x86484a0;
    PacketBuf::encFinalize((PacketBuf *)*piVar9);
  }
  piVar9[2] = (int)this;
  piVar9[1] = local_2c & 0xffff;
  *piVar9 = local_30;
  piVar9[-1] = 0x86484bc;
  _NS_PI_2ND_SendHash_SC((char *)*piVar9,*(ushort *)(piVar9 + 1),(CUser *)piVar9[2]);
  piVar9[2] = local_2c;
  piVar9[1] = local_30;
  *piVar9 = (int)(this + 0xe0);
  piVar9[-1] = 0x86484db;
  local_28 = CNetwork<4096,450000>::send_packet
                       ((CNetwork<4096,450000> *)*piVar9,(char *)piVar9[1],piVar9[2]);
  if (local_28 < 0) {
    uVar8 = (uint)local_34;
    *piVar9 = (int)this;
    piVar9[-1] = 0x86484f7;
    iVar4 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)*piVar9);
    piVar9[3] = 0;
    piVar9[2] = 0x834;
    piVar9[1] = (int)"bool CUser::AntibotSend(PacketBuf&)";
    *piVar9 = (int)local_44;
    piVar9[-1] = 0x864851c;
    cMyTrace::cMyTrace((cMyTrace *)*piVar9,(char *)piVar9[1],piVar9[2],piVar9[3]);
    piVar9[4] = local_2c;
    piVar9[3] = uVar8;
    piVar9[2] = iVar4;
    piVar9[1] = (int)"User %s - send_packet() fail length(ID:%d,LEN:%d),";
    *piVar9 = (int)local_44;
    piVar9[-1] = 0x864853e;
    cMyTrace::operator()((cMyTrace *)*piVar9,(char *)piVar9[1]);
    if (local_34 != 199) {
      piVar9[3] = 0;
      piVar9[2] = 0;
      piVar9[1] = 6;
      *piVar9 = (int)this;
      piVar9[-1] = 0x8648569;
      DisConnSig();
    }
    uStack_173b1 = 0;
  }
  else {
    uStack_173b1 = 1;
  }
  *piVar9 = (int)auStack_173a0;
  piVar9[-1] = 0x86485a7;
  PacketBuf::~PacketBuf((PacketBuf *)*piVar9);
  return uStack_173b1;
}
```
