# SetCharacInfo

`_ZN5CUser13SetCharacInfoEiPc`

`CUser::SetCharacInfo(int, char*)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08649c6a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08649c6a  _ZN5CUser13SetCharacInfoEiPc
#           CUser::SetCharacInfo(int, char*)
# range [0x08649c6a, 0x0864a185]
08649c6a +0x000:  push   %ebp
08649c6b +0x001:  mov    %esp,%ebp
08649c6d +0x003:  push   %esi
08649c6e +0x004:  push   %ebx
08649c6f +0x005:  sub    $0x1c30,%esp
08649c75 +0x00b:  movl   $0x70c,0x8(%esp)
08649c7d +0x013:  movl   $0x0,0x4(%esp)
08649c85 +0x01b:  lea    -0x744(%ebp),%eax
08649c8b +0x021:  mov    %eax,(%esp)
08649c8e +0x024:  call   0807dcc0 <_init+0x5b8>
08649c93 +0x029:  lea    -0x1c15(%ebp),%eax
08649c99 +0x02f:  mov    %eax,(%esp)
08649c9c +0x032:  call   08695cf8 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x254d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x254d
08649ca1 +0x037:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08649ca8 +0x03e:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08649cad +0x043:  mov    %eax,-0x20(%ebp)
08649cb0 +0x046:  mov    0x10(%ebp),%eax
08649cb3 +0x049:  mov    %eax,-0x1c(%ebp)
08649cb6 +0x04c:  movl   $0x0,-0x18(%ebp)
08649cbd +0x053:  jmp    08649fe1 <+0x377>
08649cc2 +0x058:  lea    -0x1c15(%ebp),%eax
08649cc8 +0x05e:  mov    %eax,(%esp)
08649ccb +0x061:  call   086822b8 <_ZN12_Charac_info5ResetEv>  ; _Charac_info::Reset()
08649cd0 +0x066:  mov    -0x18(%ebp),%eax
08649cd3 +0x069:  imul   $0x94,%eax,%eax
08649cd9 +0x06f:  add    -0x1c(%ebp),%eax
08649cdc +0x072:  mov    (%eax),%eax
08649cde +0x074:  mov    %eax,-0x1c15(%ebp)
08649ce4 +0x07a:  mov    -0x18(%ebp),%eax
08649ce7 +0x07d:  imul   $0x94,%eax,%eax
08649ced +0x083:  add    -0x1c(%ebp),%eax
08649cf0 +0x086:  add    $0x4,%eax
08649cf3 +0x089:  movl   $0x1e,0x8(%esp)
08649cfb +0x091:  mov    %eax,0x4(%esp)
08649cff +0x095:  lea    -0x1c15(%ebp),%eax
08649d05 +0x09b:  add    $0x4,%eax
08649d08 +0x09e:  mov    %eax,(%esp)
08649d0b +0x0a1:  call   0807d8d0 <_init+0x1c8>
08649d10 +0x0a6:  mov    -0x18(%ebp),%eax
08649d13 +0x0a9:  imul   $0x94,%eax,%eax
08649d19 +0x0af:  add    -0x1c(%ebp),%eax
08649d1c +0x0b2:  movzbl 0x18(%eax),%eax
08649d20 +0x0b6:  mov    %al,-0x1bef(%ebp)
08649d26 +0x0bc:  mov    -0x18(%ebp),%eax
08649d29 +0x0bf:  imul   $0x94,%eax,%eax
08649d2f +0x0c5:  add    -0x1c(%ebp),%eax
08649d32 +0x0c8:  movzbl 0x19(%eax),%eax
08649d36 +0x0cc:  mov    %al,-0x1bec(%ebp)
08649d3c +0x0d2:  mov    -0x18(%ebp),%eax
08649d3f +0x0d5:  imul   $0x94,%eax,%eax
08649d45 +0x0db:  add    -0x1c(%ebp),%eax
08649d48 +0x0de:  movzwl 0x1a(%eax),%eax
08649d4c +0x0e2:  mov    %ax,-0x1bee(%ebp)
08649d53 +0x0e9:  movl   $0x0,-0x10(%ebp)
08649d5a +0x0f0:  jmp    08649d8b <+0x121>
08649d5c +0x0f2:  mov    -0x10(%ebp),%edx
08649d5f +0x0f5:  mov    -0x18(%ebp),%eax
08649d62 +0x0f8:  imul   $0x94,%eax,%eax
08649d68 +0x0fe:  add    -0x1c(%ebp),%eax
08649d6b +0x101:  mov    -0x10(%ebp),%ecx
08649d6e +0x104:  add    $0x4,%ecx
08649d71 +0x107:  mov    0x8(%eax,%ecx,8),%eax
08649d75 +0x10b:  imul   $0x3d,%edx,%edx
08649d78 +0x10e:  lea    -0x8(%ebp),%ecx
08649d7b +0x111:  lea    (%ecx,%edx,1),%edx
08649d7e +0x114:  sub    $0x1b2d,%edx
08649d84 +0x11a:  mov    %eax,0x18(%edx)
08649d87 +0x11d:  addl   $0x1,-0x10(%ebp)
08649d8b +0x121:  cmpl   $0xb,-0x10(%ebp)
08649d8f +0x125:  setle  %al
08649d92 +0x128:  test   %al,%al
08649d94 +0x12a:  jne    08649d5c <+0xf2>
08649d96 +0x12c:  movl   $0x0,-0xc(%ebp)
08649d9d +0x133:  jmp    08649e19 <+0x1af>
08649d9f +0x135:  mov    -0xc(%ebp),%edx
08649da2 +0x138:  mov    -0x18(%ebp),%eax
08649da5 +0x13b:  imul   $0x94,%eax,%eax
08649dab +0x141:  add    -0x1c(%ebp),%eax
08649dae +0x144:  mov    -0xc(%ebp),%ecx
08649db1 +0x147:  add    $0x4,%ecx
08649db4 +0x14a:  mov    0x8(%eax,%ecx,8),%eax
08649db8 +0x14e:  add    $0xea,%edx
08649dbe +0x154:  mov    %eax,-0x1c07(%ebp,%edx,8)
08649dc5 +0x15b:  mov    -0xc(%ebp),%edx
08649dc8 +0x15e:  mov    -0x18(%ebp),%eax
08649dcb +0x161:  imul   $0x94,%eax,%eax
08649dd1 +0x167:  add    -0x1c(%ebp),%eax
08649dd4 +0x16a:  mov    -0xc(%ebp),%ecx
08649dd7 +0x16d:  add    $0x4,%ecx
08649dda +0x170:  movzwl 0xc(%eax,%ecx,8),%eax
08649ddf +0x175:  add    $0xea,%edx
08649de5 +0x17b:  mov    %ax,-0x1c03(%ebp,%edx,8)
08649ded +0x183:  mov    -0xc(%ebp),%edx
08649df0 +0x186:  mov    -0x18(%ebp),%eax
08649df3 +0x189:  imul   $0x94,%eax,%eax
08649df9 +0x18f:  add    -0x1c(%ebp),%eax
08649dfc +0x192:  mov    -0xc(%ebp),%ecx
08649dff +0x195:  add    $0x4,%ecx
08649e02 +0x198:  movzwl 0xe(%eax,%ecx,8),%eax
08649e07 +0x19d:  add    $0xea,%edx
08649e0d +0x1a3:  mov    %ax,-0x1c01(%ebp,%edx,8)
08649e15 +0x1ab:  addl   $0x1,-0xc(%ebp)
08649e19 +0x1af:  cmpl   $0xb,-0xc(%ebp)
08649e1d +0x1b3:  setle  %al
08649e20 +0x1b6:  test   %al,%al
08649e22 +0x1b8:  jne    08649d9f <+0x135>
08649e28 +0x1be:  mov    -0x18(%ebp),%eax
08649e2b +0x1c1:  imul   $0x94,%eax,%eax
08649e31 +0x1c7:  add    -0x1c(%ebp),%eax
08649e34 +0x1ca:  movzbl 0x22(%eax),%eax
08649e38 +0x1ce:  cmp    $0x1,%al
08649e3a +0x1d0:  je     08649e5c <+0x1f2>
08649e3c +0x1d2:  mov    -0x18(%ebp),%eax
08649e3f +0x1d5:  imul   $0x94,%eax,%eax
08649e45 +0x1db:  add    -0x1c(%ebp),%eax
08649e48 +0x1de:  movzbl 0x22(%eax),%eax
08649e4c +0x1e2:  cmp    $0xff,%al
08649e4e +0x1e4:  je     08649e5c <+0x1f2>
08649e50 +0x1e6:  movl   $0x0,-0x74f(%ebp)
08649e5a +0x1f0:  jmp    08649e75 <+0x20b>
08649e5c +0x1f2:  mov    -0x18(%ebp),%eax
08649e5f +0x1f5:  imul   $0x94,%eax,%eax
08649e65 +0x1fb:  add    -0x1c(%ebp),%eax
08649e68 +0x1fe:  movzbl 0x22(%eax),%eax
08649e6c +0x202:  movzbl %al,%eax
08649e6f +0x205:  mov    %eax,-0x74f(%ebp)
08649e75 +0x20b:  mov    -0x18(%ebp),%eax
08649e78 +0x20e:  imul   $0x94,%eax,%eax
08649e7e +0x214:  add    -0x1c(%ebp),%eax
08649e81 +0x217:  mov    0x88(%eax),%eax
08649e87 +0x21d:  mov    %eax,0x4(%esp)
08649e8b +0x221:  lea    -0x1c15(%ebp),%eax
08649e91 +0x227:  add    $0x39,%eax
08649e94 +0x22a:  mov    %eax,(%esp)
08649e97 +0x22d:  call   0822d0e6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2790>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2790
08649e9c +0x232:  mov    -0x18(%ebp),%eax
08649e9f +0x235:  imul   $0x94,%eax,%eax
08649ea5 +0x23b:  add    -0x1c(%ebp),%eax
08649ea8 +0x23e:  mov    0x90(%eax),%eax
08649eae +0x244:  cmp    -0x20(%ebp),%eax
08649eb1 +0x247:  jg     08649eb9 <+0x24f>
08649eb3 +0x249:  movb   $0x0,-0x11(%ebp)
08649eb7 +0x24d:  jmp    08649ebd <+0x253>
08649eb9 +0x24f:  movb   $0x1,-0x11(%ebp)
08649ebd +0x253:  movzbl -0x11(%ebp),%eax
08649ec1 +0x257:  mov    %al,-0xdaf(%ebp)
08649ec7 +0x25d:  mov    -0x18(%ebp),%eax
08649eca +0x260:  imul   $0x94,%eax,%eax
08649ed0 +0x266:  add    -0x1c(%ebp),%eax
08649ed3 +0x269:  mov    0x90(%eax),%eax
08649ed9 +0x26f:  mov    %eax,-0x968(%ebp)
08649edf +0x275:  mov    -0x18(%ebp),%eax
08649ee2 +0x278:  imul   $0x94,%eax,%eax
08649ee8 +0x27e:  add    -0x1c(%ebp),%eax
08649eeb +0x281:  mov    0x8c(%eax),%eax
08649ef1 +0x287:  mov    %eax,-0xdb8(%ebp)
08649ef7 +0x28d:  mov    -0x18(%ebp),%eax
08649efa +0x290:  imul   $0x94,%eax,%eax
08649f00 +0x296:  add    -0x1c(%ebp),%eax
08649f03 +0x299:  movzbl 0x1c(%eax),%eax
08649f07 +0x29d:  and    $0x1,%eax
08649f0a +0x2a0:  test   %al,%al
08649f0c +0x2a2:  setne  %al
08649f0f +0x2a5:  mov    %al,-0x9d5(%ebp)
08649f15 +0x2ab:  mov    -0x18(%ebp),%eax
08649f18 +0x2ae:  imul   $0x94,%eax,%eax
08649f1e +0x2b4:  add    -0x1c(%ebp),%eax
08649f21 +0x2b7:  movzbl 0x1d(%eax),%eax
08649f25 +0x2bb:  mov    %al,-0x75e(%ebp)
08649f2b +0x2c1:  mov    -0x18(%ebp),%eax
08649f2e +0x2c4:  imul   $0x94,%eax,%eax
08649f34 +0x2ca:  add    -0x1c(%ebp),%eax
08649f37 +0x2cd:  mov    0x1e(%eax),%eax
08649f3a +0x2d0:  mov    %eax,-0x75d(%ebp)
08649f40 +0x2d6:  movzbl -0xdd5(%ebp),%eax
08649f47 +0x2dd:  or     $0x1,%eax
08649f4a +0x2e0:  mov    %al,-0xdd5(%ebp)
08649f50 +0x2e6:  mov    -0x18(%ebp),%eax
08649f53 +0x2e9:  imul   $0x94,%eax,%eax
08649f59 +0x2ef:  add    -0x1c(%ebp),%eax
08649f5c +0x2f2:  movzbl 0x1c(%eax),%eax
08649f60 +0x2f6:  shr    $0x4,%al
08649f63 +0x2f9:  and    $0x1,%eax
08649f66 +0x2fc:  shl    $0x7,%eax
08649f69 +0x2ff:  sar    $0x7,%al
08649f6c +0x302:  and    $0x1,%eax
08649f6f +0x305:  lea    (%eax,%eax,1),%edx
08649f72 +0x308:  movzbl -0xdd5(%ebp),%eax
08649f79 +0x30f:  and    $0xfffffffd,%eax
08649f7c +0x312:  or     %edx,%eax
08649f7e +0x314:  mov    %al,-0xdd5(%ebp)
08649f84 +0x31a:  mov    0x8(%ebp),%eax
08649f87 +0x31d:  add    $0x79794,%eax
08649f8c +0x322:  mov    %eax,0x4(%esp)
08649f90 +0x326:  lea    -0x1c15(%ebp),%eax
08649f96 +0x32c:  add    $0xda,%eax
08649f9b +0x331:  mov    %eax,(%esp)
08649f9e +0x334:  call   0822d4f6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ba0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ba0
08649fa3 +0x339:  mov    0x8(%ebp),%eax
08649fa6 +0x33c:  add    $0x79794,%eax
08649fab +0x341:  mov    %eax,0x4(%esp)
08649faf +0x345:  lea    -0x1c15(%ebp),%eax
08649fb5 +0x34b:  add    $0xdaa,%eax
08649fba +0x350:  mov    %eax,(%esp)
08649fbd +0x353:  call   086949c6 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x121b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x121b
08649fc2 +0x358:  mov    0x8(%ebp),%eax
08649fc5 +0x35b:  lea    0x796e8(%eax),%edx
08649fcb +0x361:  lea    -0x1c15(%ebp),%eax
08649fd1 +0x367:  mov    %eax,0x4(%esp)
08649fd5 +0x36b:  mov    %edx,(%esp)
08649fd8 +0x36e:  call   08698a58 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x52ad>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x52ad
08649fdd +0x373:  addl   $0x1,-0x18(%ebp)
08649fe1 +0x377:  mov    -0x18(%ebp),%eax
08649fe4 +0x37a:  cmp    0xc(%ebp),%eax
08649fe7 +0x37d:  setl   %al
08649fea +0x380:  test   %al,%al
08649fec +0x382:  jne    08649cc2 <+0x58>
08649ff2 +0x388:  mov    -0x744(%ebp),%eax
08649ff8 +0x38e:  test   %eax,%eax
08649ffa +0x390:  jle    0864a16e <+0x504>
0864a000 +0x396:  mov    -0x744(%ebp),%eax
0864a006 +0x39c:  cmp    $0x71,%eax
0864a009 +0x39f:  jle    0864a078 <+0x40e>
0864a00b +0x3a1:  mov    0x8(%ebp),%eax
0864a00e +0x3a4:  mov    %eax,(%esp)
0864a011 +0x3a7:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0864a016 +0x3ac:  movl   $0x0,0x4(%esp)
0864a01e +0x3b4:  mov    %eax,(%esp)
0864a021 +0x3b7:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0864a026 +0x3bc:  mov    %eax,%ebx
0864a028 +0x3be:  mov    -0x744(%ebp),%esi
0864a02e +0x3c4:  movl   $0x5,0xc(%esp)
0864a036 +0x3cc:  movl   $0xcaf,0x8(%esp)
0864a03e +0x3d4:  movl   $&_ZZN5CUser13SetCharacInfoEiPcE19__PRETTY_FUNCTION__,0x4(%esp)
0864a046 +0x3dc:  lea    -0x30(%ebp),%eax
0864a049 +0x3df:  mov    %eax,(%esp)
0864a04c +0x3e2:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0864a051 +0x3e7:  mov    0xc(%ebp),%eax
0864a054 +0x3ea:  mov    %eax,0x10(%esp)
0864a058 +0x3ee:  mov    %ebx,0xc(%esp)
0864a05c +0x3f2:  mov    %esi,0x8(%esp)
0864a060 +0x3f6:  movl   $"SetCharacInfo AVATAR INFO PROBLEM items<%d> user_no<%s> characnum<%d>",0x4(%esp)
0864a068 +0x3fe:  lea    -0x30(%ebp),%eax
0864a06b +0x401:  mov    %eax,(%esp)
0864a06e +0x404:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0864a073 +0x409:  jmp    0864a16e <+0x504>
0864a078 +0x40e:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0864a07d +0x413:  movl   $0xcb3,0x8(%esp)
0864a085 +0x41b:  movl   $"user.cpp",0x4(%esp)
0864a08d +0x423:  mov    %eax,(%esp)
0864a090 +0x426:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0864a095 +0x42b:  movl   $0x1,0x8(%esp)
0864a09d +0x433:  mov    %eax,0x4(%esp)
0864a0a1 +0x437:  lea    -0x38(%ebp),%eax
0864a0a4 +0x43a:  mov    %eax,(%esp)
0864a0a7 +0x43d:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0864a0ac +0x442:  lea    -0x38(%ebp),%eax
0864a0af +0x445:  mov    %eax,(%esp)
0864a0b2 +0x448:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0864a0b7 +0x44d:  movl   $0x33,0x4(%esp)
0864a0bf +0x455:  mov    %eax,(%esp)
0864a0c2 +0x458:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0864a0c7 +0x45d:  mov    0x8(%ebp),%eax
0864a0ca +0x460:  mov    %eax,(%esp)
0864a0cd +0x463:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0864a0d2 +0x468:  mov    %eax,%ebx
0864a0d4 +0x46a:  lea    -0x38(%ebp),%eax
0864a0d7 +0x46d:  mov    %eax,(%esp)
0864a0da +0x470:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0864a0df +0x475:  mov    %ebx,0x4(%esp)
0864a0e3 +0x479:  mov    %eax,(%esp)
0864a0e6 +0x47c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0864a0eb +0x481:  lea    -0x38(%ebp),%eax
0864a0ee +0x484:  mov    %eax,(%esp)
0864a0f1 +0x487:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0864a0f6 +0x48c:  movl   $0x70c,0x8(%esp)
0864a0fe +0x494:  lea    -0x744(%ebp),%edx
0864a104 +0x49a:  mov    %edx,0x4(%esp)
0864a108 +0x49e:  mov    %eax,(%esp)
0864a10b +0x4a1:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0864a110 +0x4a6:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0864a115 +0x4ab:  lea    -0x38(%ebp),%edx
0864a118 +0x4ae:  mov    %edx,0x8(%esp)
0864a11c +0x4b2:  movl   $0x2,0x4(%esp)
0864a124 +0x4ba:  mov    %eax,(%esp)
0864a127 +0x4bd:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0864a12c +0x4c2:  jmp    0864a143 <+0x4d9>
0864a12e +0x4c4:  mov    %edx,%ebx
0864a130 +0x4c6:  mov    %eax,%esi
0864a132 +0x4c8:  lea    -0x38(%ebp),%eax
0864a135 +0x4cb:  mov    %eax,(%esp)
0864a138 +0x4ce:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0864a13d +0x4d3:  mov    %esi,%eax
0864a13f +0x4d5:  mov    %ebx,%edx
0864a141 +0x4d7:  jmp    0864a150 <+0x4e6>
0864a143 +0x4d9:  lea    -0x38(%ebp),%eax
0864a146 +0x4dc:  mov    %eax,(%esp)
0864a149 +0x4df:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0864a14e +0x4e4:  jmp    0864a16e <+0x504>
0864a150 +0x4e6:  mov    %edx,%ebx
0864a152 +0x4e8:  mov    %eax,%esi
0864a154 +0x4ea:  lea    -0x1c15(%ebp),%eax
0864a15a +0x4f0:  mov    %eax,(%esp)
0864a15d +0x4f3:  call   08697982 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x41d7>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x41d7
0864a162 +0x4f8:  mov    %esi,%eax
0864a164 +0x4fa:  mov    %ebx,%edx
0864a166 +0x4fc:  mov    %eax,(%esp)
0864a169 +0x4ff:  call   08ae3750 <_Unwind_Resume>
0864a16e +0x504:  lea    -0x1c15(%ebp),%eax
0864a174 +0x50a:  mov    %eax,(%esp)
0864a177 +0x50d:  call   08697982 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x41d7>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x41d7
0864a17c +0x512:  add    $0x1c30,%esp
0864a182 +0x518:  pop    %ebx
0864a183 +0x519:  pop    %esi
0864a184 +0x51a:  pop    %ebp
0864a185 +0x51b:  ret
```

## 反编译 C

```c
// CUser::SetCharacInfo @ 0x8649c6a

/* CUser::SetCharacInfo(int, char*) */

void __thiscall CUser::SetCharacInfo(CUser *this,int param_1,char *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  int iVar5;
  undefined4 local_1c19;
  char acStack_1c15 [10];
  undefined4 uStack_1c0b;
  undefined2 auStack_1c07 [10];
  char local_1bf3;
  undefined2 local_1bf2;
  char local_1bf0;
  CommonTime aCStack_1be0 [161];
  CInventory aCStack_1b3f [30];
  undefined4 auStack_1b21 [409];
  undefined4 uStack_14bb;
  undefined2 auStack_14b7 [804];
  CCargo aCStack_e6f [150];
  byte local_dd9;
  undefined4 local_dbc;
  undefined1 local_db3;
  undefined1 local_9d9;
  undefined4 local_96c;
  char local_762;
  undefined4 local_761;
  uint local_753;
  int local_748 [451];
  CStreamGuard local_3c [8];
  cMyTrace local_34 [16];
  int local_24;
  char *local_20;
  int local_1c;
  undefined1 local_15;
  int local_14;
  int local_10;
  
  memset(local_748,0,0x70c);
  _Charac_info::_Charac_info((_Charac_info *)&local_1c19);
  local_24 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_20 = param_2;
  for (local_1c = 0; local_1c < param_1; local_1c = local_1c + 1) {
                    /* try { // try from 08649ccb to 0864a094 has its CatchHandler @ 0864a150 */
    _Charac_info::Reset((_Charac_info *)&local_1c19);
    local_1c19 = *(undefined4 *)(local_20 + local_1c * 0x94);
    strncpy(acStack_1c15,local_20 + local_1c * 0x94 + 4,0x1e);
    local_1bf3 = local_20[local_1c * 0x94 + 0x18];
    local_1bf0 = local_20[local_1c * 0x94 + 0x19];
    local_1bf2 = *(undefined2 *)(local_20 + local_1c * 0x94 + 0x1a);
    for (local_14 = 0; local_14 < 0xc; local_14 = local_14 + 1) {
      *(undefined4 *)((int)auStack_1b21 + local_14 * 0x3d) =
           *(undefined4 *)(local_20 + (local_14 + 4) * 8 + local_1c * 0x94 + 8);
    }
    for (local_10 = 0; local_10 < 0xc; local_10 = local_10 + 1) {
      (&uStack_1c0b)[(local_10 + 0xea) * 2] =
           *(undefined4 *)(local_20 + (local_10 + 4) * 8 + local_1c * 0x94 + 8);
      auStack_1c07[(local_10 + 0xea) * 4] =
           *(undefined2 *)(local_20 + (local_10 + 4) * 8 + local_1c * 0x94 + 0xc);
      auStack_1c07[(local_10 + 0xea) * 4 + 1] =
           *(undefined2 *)(local_20 + (local_10 + 4) * 8 + local_1c * 0x94 + 0xe);
    }
    if ((local_20[local_1c * 0x94 + 0x22] == '\x01') || (local_20[local_1c * 0x94 + 0x22] == -1)) {
      local_753 = (uint)(byte)local_20[local_1c * 0x94 + 0x22];
    }
    else {
      local_753 = 0;
    }
    CommonTime::SetCreateTime(aCStack_1be0,*(long *)(local_20 + local_1c * 0x94 + 0x88));
    local_db3 = local_24 < *(int *)(local_20 + local_1c * 0x94 + 0x90);
    local_96c = *(undefined4 *)(local_20 + local_1c * 0x94 + 0x90);
    local_dbc = *(undefined4 *)(local_20 + local_1c * 0x94 + 0x8c);
    local_9d9 = (local_20[local_1c * 0x94 + 0x1c] & 1U) != 0;
    local_762 = local_20[local_1c * 0x94 + 0x1d];
    local_761 = *(undefined4 *)(local_20 + local_1c * 0x94 + 0x1e);
    local_dd9 = local_dd9 & 0xfd | 1 |
                ((char)(((byte)local_20[local_1c * 0x94 + 0x1c] >> 4) << 7) >> 7 & 1U) * '\x02';
    local_15 = local_db3;
    CInventory::SetInventoryMemory(aCStack_1b3f,(InventoryMemory *)(this + 0x79794));
    CCargo::SetInventoryMemory(aCStack_e6f,(InventoryMemory *)(this + 0x79794));
    std::vector<_Charac_info,std::allocator<_Charac_info>>::push_back
              ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
               (_Charac_info *)&local_1c19);
  }
  if (0 < local_748[0]) {
    if (local_748[0] < 0x72) {
      pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"user.cpp",0xcb3);
      CStreamGuard::CStreamGuard(local_3c,pSVar3,true);
      pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_3c);
                    /* try { // try from 0864a0c2 to 0864a12b has its CatchHandler @ 0864a12e */
      CStreamGuard::operator<<(pCVar4,0x33);
      iVar5 = GetUID(this);
      pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_3c);
      CStreamGuard::operator<<(pCVar4,iVar5);
      pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_3c);
      CStreamGuard::put_binary(pCVar4,local_748,0x70c);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_3c);
                    /* try { // try from 0864a149 to 0864a14d has its CatchHandler @ 0864a150 */
      CStreamGuard::~CStreamGuard(local_3c);
    }
    else {
      uVar1 = get_acc_id(this);
      uVar2 = NumberToString(uVar1,0);
      cMyTrace::cMyTrace(local_34,"void CUser::SetCharacInfo(int, char*)",0xcaf,5);
      cMyTrace::operator()
                (local_34,"SetCharacInfo AVATAR INFO PROBLEM items<%d> user_no<%s> characnum<%d>",
                 local_748[0],uVar2,param_1);
    }
  }
  _Charac_info::~_Charac_info((_Charac_info *)&local_1c19);
  return;
}
```
