# PacketBuf

`_GLOBAL__I__ZN9PacketBufC2Ev`

`global constructors keyed to PacketBuf::PacketBuf()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to PacketBuf` | `0x0858e22b` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858e22b  _GLOBAL__I__ZN9PacketBufC2Ev
#           global constructors keyed to PacketBuf::PacketBuf()
# range [0x0858e22b, 0x0858e70f]
0858e22b +0x000:  push   %ebp
0858e22c +0x001:  mov    %esp,%ebp
0858e22e +0x003:  sub    $0x18,%esp
0858e231 +0x006:  movl   $0xffff,0x4(%esp)
0858e239 +0x00e:  movl   $0x1,(%esp)
0858e240 +0x015:  call   0858e1eb <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0858e245 +0x01a:  leave
0858e246 +0x01b:  ret
0858e247 +0x01c:  nop
0858e248 +0x01d:  push   %ebp
0858e249 +0x01e:  mov    %esp,%ebp
0858e24b +0x020:  sub    $0x10,%esp
0858e24e +0x023:  mov    0xc(%ebp),%eax
0858e251 +0x026:  mov    %eax,-0x4(%ebp)
0858e254 +0x029:  mov    -0x4(%ebp),%eax
0858e257 +0x02c:  movzwl (%eax),%eax
0858e25a +0x02f:  cmp    $0x2,%ax
0858e25e +0x033:  je     0858e278 <+0x4d>
0858e260 +0x035:  mov    -0x4(%ebp),%eax
0858e263 +0x038:  movzwl (%eax),%eax
0858e266 +0x03b:  cmp    $0x9,%ax
0858e26a +0x03f:  je     0858e278 <+0x4d>
0858e26c +0x041:  mov    -0x4(%ebp),%eax
0858e26f +0x044:  movzwl (%eax),%eax
0858e272 +0x047:  cmp    $0x57,%ax
0858e276 +0x04b:  jne    0858e27f <+0x54>
0858e278 +0x04d:  mov    $0x1,%eax
0858e27d +0x052:  jmp    0858e284 <+0x59>
0858e27f +0x054:  mov    $0x0,%eax
0858e284 +0x059:  leave
0858e285 +0x05a:  ret
0858e286 +0x05b:  push   %ebp
0858e287 +0x05c:  mov    %esp,%ebp
0858e289 +0x05e:  mov    0x8(%ebp),%eax
0858e28c +0x061:  mov    0xc(%ebp),%edx
0858e28f +0x064:  mov    %edx,0x10(%eax)
0858e292 +0x067:  pop    %ebp
0858e293 +0x068:  ret
0858e294 +0x069:  push   %ebp
0858e295 +0x06a:  mov    %esp,%ebp
0858e297 +0x06c:  pop    %ebp
0858e298 +0x06d:  ret
0858e299 +0x06e:  nop
0858e29a +0x06f:  push   %ebp
0858e29b +0x070:  mov    %esp,%ebp
0858e29d +0x072:  pop    %ebp
0858e29e +0x073:  ret
0858e29f +0x074:  nop
0858e2a0 +0x075:  push   %ebp
0858e2a1 +0x076:  mov    %esp,%ebp
0858e2a3 +0x078:  mov    0x8(%ebp),%eax
0858e2a6 +0x07b:  mov    0xc(%ebp),%edx
0858e2a9 +0x07e:  mov    %edx,(%eax)
0858e2ab +0x080:  pop    %ebp
0858e2ac +0x081:  ret
0858e2ad +0x082:  nop
0858e2ae +0x083:  push   %ebp
0858e2af +0x084:  mov    %esp,%ebp
0858e2b1 +0x086:  sub    $0x18,%esp
0858e2b4 +0x089:  mov    0x8(%ebp),%eax
0858e2b7 +0x08c:  mov    (%eax),%eax
0858e2b9 +0x08e:  mov    0xc(%ebp),%edx
0858e2bc +0x091:  mov    %edx,0x4(%esp)
0858e2c0 +0x095:  mov    %eax,(%esp)
0858e2c3 +0x098:  call   0858e2ca <+0x9f>
0858e2c8 +0x09d:  leave
0858e2c9 +0x09e:  ret
0858e2ca +0x09f:  push   %ebp
0858e2cb +0x0a0:  mov    %esp,%ebp
0858e2cd +0x0a2:  push   %esi
0858e2ce +0x0a3:  push   %ebx
0858e2cf +0x0a4:  sub    $0x40,%esp
0858e2d2 +0x0a7:  cmpl   $0x0,0xc(%ebp)
0858e2d6 +0x0ab:  jne    0858e2e2 <+0xb7>
0858e2d8 +0x0ad:  mov    $0x0,%eax
0858e2dd +0x0b2:  jmp    0858e3e4 <+0x1b9>
0858e2e2 +0x0b7:  mov    0xc(%ebp),%eax
0858e2e5 +0x0ba:  mov    %eax,-0x2c(%ebp)
0858e2e8 +0x0bd:  mov    0x8(%ebp),%eax
0858e2eb +0x0c0:  lea    0x8(%eax),%edx
0858e2ee +0x0c3:  lea    -0x2c(%ebp),%eax
0858e2f1 +0x0c6:  mov    %eax,0x4(%esp)
0858e2f5 +0x0ca:  mov    %edx,(%esp)
0858e2f8 +0x0cd:  call   0858e5b4 <+0x389>
0858e2fd +0x0d2:  mov    -0x2c(%ebp),%eax
0858e300 +0x0d5:  mov    &_ZL14gUnicodeBuffer+0xce08(%eax),%eax
0858e306 +0x0db:  cmp    $0x8f21,%eax
0858e30b +0x0e0:  je     0858e361 <+0x136>
0858e30d +0x0e2:  mov    -0x2c(%ebp),%esi
0858e310 +0x0e5:  mov    -0x2c(%ebp),%eax
0858e313 +0x0e8:  mov    &_ZL14gUnicodeBuffer+0xce08(%eax),%ebx
0858e319 +0x0ee:  movl   $0x0,0xc(%esp)
0858e321 +0x0f6:  movl   $0x269,0x8(%esp)
0858e329 +0x0fe:  movl   $&_ZZN11DynamicPoolI9PacketBufE4FreeEPS0_E12__FUNCTION__,0x4(%esp)
0858e331 +0x106:  lea    -0x28(%ebp),%eax
0858e334 +0x109:  mov    %eax,(%esp)
0858e337 +0x10c:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0858e33c +0x111:  mov    %esi,0xc(%esp)
0858e340 +0x115:  mov    %ebx,0x8(%esp)
0858e344 +0x119:  movl   $"DYNAMIC MEMORY_POOL Free error dummy(%x), node(%x)",0x4(%esp)
0858e34c +0x121:  lea    -0x28(%ebp),%eax
0858e34f +0x124:  mov    %eax,(%esp)
0858e352 +0x127:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0858e357 +0x12c:  mov    0x8(%ebp),%eax
0858e35a +0x12f:  movl   $0x5,0x4(%eax)
0858e361 +0x136:  mov    -0x2c(%ebp),%eax
0858e364 +0x139:  movzbl &_ZL14gUnicodeBuffer+0xce0c(%eax),%eax
0858e36b +0x140:  cmp    $0x1,%al
0858e36d +0x142:  je     0858e3cc <+0x1a1>
0858e36f +0x144:  mov    -0x2c(%ebp),%esi
0858e372 +0x147:  mov    -0x2c(%ebp),%eax
0858e375 +0x14a:  movzbl &_ZL14gUnicodeBuffer+0xce0c(%eax),%eax
0858e37c +0x151:  movsbl %al,%ebx
0858e37f +0x154:  movl   $0x0,0xc(%esp)
0858e387 +0x15c:  movl   $0x26f,0x8(%esp)
0858e38f +0x164:  movl   $&_ZZN11DynamicPoolI9PacketBufE4FreeEPS0_E12__FUNCTION__,0x4(%esp)
0858e397 +0x16c:  lea    -0x18(%ebp),%eax
0858e39a +0x16f:  mov    %eax,(%esp)
0858e39d +0x172:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0858e3a2 +0x177:  mov    %esi,0xc(%esp)
0858e3a6 +0x17b:  mov    %ebx,0x8(%esp)
0858e3aa +0x17f:  movl   $"DYNAMIC MEMORY_POOL Free error reference count(%d), node(%x)",0x4(%esp)
0858e3b2 +0x187:  lea    -0x18(%ebp),%eax
0858e3b5 +0x18a:  mov    %eax,(%esp)
0858e3b8 +0x18d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0858e3bd +0x192:  mov    0x8(%ebp),%eax
0858e3c0 +0x195:  movl   $0x6,0x4(%eax)
0858e3c7 +0x19c:  call   08108f9c <_Z14PrintBackTracev>  ; PrintBackTrace()
0858e3cc +0x1a1:  mov    -0x2c(%ebp),%eax
0858e3cf +0x1a4:  movzbl &_ZL14gUnicodeBuffer+0xce0c(%eax),%edx
0858e3d6 +0x1ab:  sub    $0x1,%edx
0858e3d9 +0x1ae:  mov    %dl,&_ZL14gUnicodeBuffer+0xce0c(%eax)
0858e3df +0x1b4:  mov    $0x1,%eax
0858e3e4 +0x1b9:  add    $0x40,%esp
0858e3e7 +0x1bc:  pop    %ebx
0858e3e8 +0x1bd:  pop    %esi
0858e3e9 +0x1be:  pop    %ebp
0858e3ea +0x1bf:  ret
0858e3eb +0x1c0:  nop
0858e3ec +0x1c1:  push   %ebp
0858e3ed +0x1c2:  mov    %esp,%ebp
0858e3ef +0x1c4:  sub    $0x28,%esp
0858e3f2 +0x1c7:  movl   $0x0,-0x10(%ebp)
0858e3f9 +0x1ce:  mov    0xc(%ebp),%eax
0858e3fc +0x1d1:  mov    %eax,(%esp)
0858e3ff +0x1d4:  call   08110b1c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x2e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x2e
0858e404 +0x1d9:  mov    %eax,-0x14(%ebp)
0858e407 +0x1dc:  movl   $0x0,0x4(%esp)
0858e40f +0x1e4:  mov    0xc(%ebp),%eax
0858e412 +0x1e7:  mov    %eax,(%esp)
0858e415 +0x1ea:  call   080cb89e <_GLOBAL__I__ZN10BingoEventC2Ev+0x6eb>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6eb
0858e41a +0x1ef:  movl   $0x0,-0xc(%ebp)
0858e421 +0x1f6:  jmp    0858e4b9 <+0x28e>
0858e426 +0x1fb:  mov    -0xc(%ebp),%edx
0858e429 +0x1fe:  mov    %edx,%eax
0858e42b +0x200:  add    %eax,%eax
0858e42d +0x202:  add    %edx,%eax
0858e42f +0x204:  add    0x8(%ebp),%eax
0858e432 +0x207:  mov    %eax,(%esp)
0858e435 +0x20a:  call   0811ed22 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x1d>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x1d
0858e43a +0x20f:  xor    $0x1,%eax
0858e43d +0x212:  test   %al,%al
0858e43f +0x214:  je     0858e4b5 <+0x28a>
0858e441 +0x216:  mov    -0xc(%ebp),%edx
0858e444 +0x219:  mov    0x8(%ebp),%ecx
0858e447 +0x21c:  mov    %edx,%eax
0858e449 +0x21e:  add    %eax,%eax
0858e44b +0x220:  add    %edx,%eax
0858e44d +0x222:  movzbl (%eax,%ecx,1),%eax
0858e451 +0x226:  movzbl %al,%eax
0858e454 +0x229:  mov    %eax,0x4(%esp)
0858e458 +0x22d:  mov    0xc(%ebp),%eax
0858e45b +0x230:  mov    %eax,(%esp)
0858e45e +0x233:  call   080cb89e <_GLOBAL__I__ZN10BingoEventC2Ev+0x6eb>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6eb
0858e463 +0x238:  mov    -0xc(%ebp),%edx
0858e466 +0x23b:  mov    0x8(%ebp),%ecx
0858e469 +0x23e:  mov    %edx,%eax
0858e46b +0x240:  add    %eax,%eax
0858e46d +0x242:  add    %edx,%eax
0858e46f +0x244:  lea    (%ecx,%eax,1),%eax
0858e472 +0x247:  add    $0x1,%eax
0858e475 +0x24a:  movzbl (%eax),%eax
0858e478 +0x24d:  movzbl %al,%eax
0858e47b +0x250:  mov    %eax,0x4(%esp)
0858e47f +0x254:  mov    0xc(%ebp),%eax
0858e482 +0x257:  mov    %eax,(%esp)
0858e485 +0x25a:  call   080cb89e <_GLOBAL__I__ZN10BingoEventC2Ev+0x6eb>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6eb
0858e48a +0x25f:  mov    -0xc(%ebp),%edx
0858e48d +0x262:  mov    0x8(%ebp),%ecx
0858e490 +0x265:  mov    %edx,%eax
0858e492 +0x267:  add    %eax,%eax
0858e494 +0x269:  add    %edx,%eax
0858e496 +0x26b:  lea    (%ecx,%eax,1),%eax
0858e499 +0x26e:  add    $0x2,%eax
0858e49c +0x271:  movzbl (%eax),%eax
0858e49f +0x274:  movzbl %al,%eax
0858e4a2 +0x277:  mov    %eax,0x4(%esp)
0858e4a6 +0x27b:  mov    0xc(%ebp),%eax
0858e4a9 +0x27e:  mov    %eax,(%esp)
0858e4ac +0x281:  call   080cb89e <_GLOBAL__I__ZN10BingoEventC2Ev+0x6eb>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6eb
0858e4b1 +0x286:  addl   $0x1,-0x10(%ebp)
0858e4b5 +0x28a:  addl   $0x1,-0xc(%ebp)
0858e4b9 +0x28e:  cmpl   $0x2,-0xc(%ebp)
0858e4bd +0x292:  setle  %al
0858e4c0 +0x295:  test   %al,%al
0858e4c2 +0x297:  jne    0858e426 <+0x1fb>
0858e4c8 +0x29d:  mov    -0x10(%ebp),%eax
0858e4cb +0x2a0:  mov    %eax,0x8(%esp)
0858e4cf +0x2a4:  lea    -0x14(%ebp),%eax
0858e4d2 +0x2a7:  mov    %eax,0x4(%esp)
0858e4d6 +0x2ab:  mov    0xc(%ebp),%eax
0858e4d9 +0x2ae:  mov    %eax,(%esp)
0858e4dc +0x2b1:  call   0858c978 <_ZN9PacketBuf8put_byteERii>  ; PacketBuf::put_byte(int&, int)
0858e4e1 +0x2b6:  cmpl   $0x0,-0x10(%ebp)
0858e4e5 +0x2ba:  je     0858e5b2 <+0x387>
0858e4eb +0x2c0:  mov    0x8(%ebp),%eax
0858e4ee +0x2c3:  movzbl 0x9(%eax),%eax
0858e4f2 +0x2c7:  movzbl %al,%eax
0858e4f5 +0x2ca:  mov    %eax,0x4(%esp)
0858e4f9 +0x2ce:  mov    0xc(%ebp),%eax
0858e4fc +0x2d1:  mov    %eax,(%esp)
0858e4ff +0x2d4:  call   080cb89e <_GLOBAL__I__ZN10BingoEventC2Ev+0x6eb>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6eb
0858e504 +0x2d9:  mov    0x8(%ebp),%eax
0858e507 +0x2dc:  add    $0xa,%eax
0858e50a +0x2df:  mov    %eax,(%esp)
0858e50d +0x2e2:  call   0811ed22 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x1d>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x1d
0858e512 +0x2e7:  xor    $0x1,%eax
0858e515 +0x2ea:  test   %al,%al
0858e517 +0x2ec:  je     0858e59f <+0x374>
0858e51d +0x2f2:  mov    0x8(%ebp),%eax
0858e520 +0x2f5:  movzbl 0xd(%eax),%eax
0858e524 +0x2f9:  and    $0x3,%eax
0858e527 +0x2fc:  movzbl %al,%eax
0858e52a +0x2ff:  mov    %eax,0x4(%esp)
0858e52e +0x303:  mov    0xc(%ebp),%eax
0858e531 +0x306:  mov    %eax,(%esp)
0858e534 +0x309:  call   080cb89e <_GLOBAL__I__ZN10BingoEventC2Ev+0x6eb>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6eb
0858e539 +0x30e:  mov    0x8(%ebp),%eax
0858e53c +0x311:  movzbl 0xd(%eax),%eax
0858e540 +0x315:  movzbl %al,%eax
0858e543 +0x318:  mov    %eax,0x4(%esp)
0858e547 +0x31c:  mov    0xc(%ebp),%eax
0858e54a +0x31f:  mov    %eax,(%esp)
0858e54d +0x322:  call   080cb89e <_GLOBAL__I__ZN10BingoEventC2Ev+0x6eb>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6eb
0858e552 +0x327:  mov    0x8(%ebp),%eax
0858e555 +0x32a:  movzbl 0xa(%eax),%eax
0858e559 +0x32e:  movzbl %al,%eax
0858e55c +0x331:  mov    %eax,0x4(%esp)
0858e560 +0x335:  mov    0xc(%ebp),%eax
0858e563 +0x338:  mov    %eax,(%esp)
0858e566 +0x33b:  call   080cb89e <_GLOBAL__I__ZN10BingoEventC2Ev+0x6eb>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6eb
0858e56b +0x340:  mov    0x8(%ebp),%eax
0858e56e +0x343:  movzbl 0xb(%eax),%eax
0858e572 +0x347:  movzbl %al,%eax
0858e575 +0x34a:  mov    %eax,0x4(%esp)
0858e579 +0x34e:  mov    0xc(%ebp),%eax
0858e57c +0x351:  mov    %eax,(%esp)
0858e57f +0x354:  call   080cb89e <_GLOBAL__I__ZN10BingoEventC2Ev+0x6eb>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6eb
0858e584 +0x359:  mov    0x8(%ebp),%eax
0858e587 +0x35c:  movzbl 0xc(%eax),%eax
0858e58b +0x360:  movzbl %al,%eax
0858e58e +0x363:  mov    %eax,0x4(%esp)
0858e592 +0x367:  mov    0xc(%ebp),%eax
0858e595 +0x36a:  mov    %eax,(%esp)
0858e598 +0x36d:  call   080cb89e <_GLOBAL__I__ZN10BingoEventC2Ev+0x6eb>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6eb
0858e59d +0x372:  jmp    0858e5b2 <+0x387>
0858e59f +0x374:  movl   $0xffffffff,0x4(%esp)
0858e5a7 +0x37c:  mov    0xc(%ebp),%eax
0858e5aa +0x37f:  mov    %eax,(%esp)
0858e5ad +0x382:  call   080cb89e <_GLOBAL__I__ZN10BingoEventC2Ev+0x6eb>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6eb
0858e5b2 +0x387:  leave
0858e5b3 +0x388:  ret
0858e5b4 +0x389:  push   %ebp
0858e5b5 +0x38a:  mov    %esp,%ebp
0858e5b7 +0x38c:  sub    $0x18,%esp
0858e5ba +0x38f:  mov    0x8(%ebp),%eax
0858e5bd +0x392:  mov    0xc(%ebp),%edx
0858e5c0 +0x395:  mov    %edx,0x4(%esp)
0858e5c4 +0x399:  mov    %eax,(%esp)
0858e5c7 +0x39c:  call   0858e5ce <+0x3a3>
0858e5cc +0x3a1:  leave
0858e5cd +0x3a2:  ret
0858e5ce +0x3a3:  push   %ebp
0858e5cf +0x3a4:  mov    %esp,%ebp
0858e5d1 +0x3a6:  sub    $0x18,%esp
0858e5d4 +0x3a9:  mov    0x8(%ebp),%eax
0858e5d7 +0x3ac:  mov    0x18(%eax),%edx
0858e5da +0x3af:  mov    0x8(%ebp),%eax
0858e5dd +0x3b2:  mov    0x20(%eax),%eax
0858e5e0 +0x3b5:  sub    $0x4,%eax
0858e5e3 +0x3b8:  cmp    %eax,%edx
0858e5e5 +0x3ba:  je     0858e614 <+0x3e9>
0858e5e7 +0x3bc:  mov    0x8(%ebp),%eax
0858e5ea +0x3bf:  mov    0x18(%eax),%edx
0858e5ed +0x3c2:  mov    0x8(%ebp),%eax
0858e5f0 +0x3c5:  mov    0xc(%ebp),%ecx
0858e5f3 +0x3c8:  mov    %ecx,0x8(%esp)
0858e5f7 +0x3cc:  mov    %edx,0x4(%esp)
0858e5fb +0x3d0:  mov    %eax,(%esp)
0858e5fe +0x3d3:  call   0858e628 <+0x3fd>
0858e603 +0x3d8:  mov    0x8(%ebp),%eax
0858e606 +0x3db:  mov    0x18(%eax),%eax
0858e609 +0x3de:  lea    0x4(%eax),%edx
0858e60c +0x3e1:  mov    0x8(%ebp),%eax
0858e60f +0x3e4:  mov    %edx,0x18(%eax)
0858e612 +0x3e7:  jmp    0858e626 <+0x3fb>
0858e614 +0x3e9:  mov    0xc(%ebp),%eax
0858e617 +0x3ec:  mov    %eax,0x4(%esp)
0858e61b +0x3f0:  mov    0x8(%ebp),%eax
0858e61e +0x3f3:  mov    %eax,(%esp)
0858e621 +0x3f6:  call   0858e650 <+0x425>
0858e626 +0x3fb:  leave
0858e627 +0x3fc:  ret
0858e628 +0x3fd:  push   %ebp
0858e629 +0x3fe:  mov    %esp,%ebp
0858e62b +0x400:  sub    $0x18,%esp
0858e62e +0x403:  mov    0xc(%ebp),%eax
0858e631 +0x406:  mov    %eax,0x4(%esp)
0858e635 +0x40a:  movl   $0x4,(%esp)
0858e63c +0x411:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
0858e641 +0x416:  mov    %eax,%edx
0858e643 +0x418:  test   %edx,%edx
0858e645 +0x41a:  je     0858e64e <+0x423>
0858e647 +0x41c:  mov    0x10(%ebp),%edx
0858e64a +0x41f:  mov    (%edx),%edx
0858e64c +0x421:  mov    %edx,(%eax)
0858e64e +0x423:  leave
0858e64f +0x424:  ret
0858e650 +0x425:  push   %ebp
0858e651 +0x426:  mov    %esp,%ebp
0858e653 +0x428:  push   %esi
0858e654 +0x429:  push   %ebx
0858e655 +0x42a:  sub    $0x10,%esp
0858e658 +0x42d:  movl   $0x1,0x4(%esp)
0858e660 +0x435:  mov    0x8(%ebp),%eax
0858e663 +0x438:  mov    %eax,(%esp)
0858e666 +0x43b:  call   082d2d80 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x24c7b>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x24c7b
0858e66b +0x440:  mov    0x8(%ebp),%eax
0858e66e +0x443:  mov    0x24(%eax),%eax
0858e671 +0x446:  lea    0x4(%eax),%ebx
0858e674 +0x449:  mov    0x8(%ebp),%eax
0858e677 +0x44c:  mov    %eax,(%esp)
0858e67a +0x44f:  call   082d2dd6 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x24cd1>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x24cd1
0858e67f +0x454:  mov    %eax,(%ebx)
0858e681 +0x456:  mov    0xc(%ebp),%eax
0858e684 +0x459:  mov    %eax,(%esp)
0858e687 +0x45c:  call   082d2e01 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x24cfc>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x24cfc
0858e68c +0x461:  mov    0x8(%ebp),%edx
0858e68f +0x464:  mov    0x18(%edx),%ecx
0858e692 +0x467:  mov    0x8(%ebp),%edx
0858e695 +0x46a:  mov    %eax,0x8(%esp)
0858e699 +0x46e:  mov    %ecx,0x4(%esp)
0858e69d +0x472:  mov    %edx,(%esp)
0858e6a0 +0x475:  call   0858e628 <+0x3fd>
0858e6a5 +0x47a:  mov    0x8(%ebp),%eax
0858e6a8 +0x47d:  mov    0x24(%eax),%eax
0858e6ab +0x480:  lea    0x4(%eax),%edx
0858e6ae +0x483:  mov    0x8(%ebp),%eax
0858e6b1 +0x486:  add    $0x18,%eax
0858e6b4 +0x489:  mov    %edx,0x4(%esp)
0858e6b8 +0x48d:  mov    %eax,(%esp)
0858e6bb +0x490:  call   082d2e0a <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x24d05>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x24d05
0858e6c0 +0x495:  mov    0x8(%ebp),%eax
0858e6c3 +0x498:  mov    0x1c(%eax),%edx
0858e6c6 +0x49b:  mov    0x8(%ebp),%eax
0858e6c9 +0x49e:  mov    %edx,0x18(%eax)
0858e6cc +0x4a1:  add    $0x10,%esp
0858e6cf +0x4a4:  pop    %ebx
0858e6d0 +0x4a5:  pop    %esi
0858e6d1 +0x4a6:  pop    %ebp
0858e6d2 +0x4a7:  ret
0858e6d3 +0x4a8:  mov    %eax,(%esp)
0858e6d6 +0x4ab:  call   08725ce0 <__cxa_begin_catch>
0858e6db +0x4b0:  mov    0x8(%ebp),%eax
0858e6de +0x4b3:  mov    0x24(%eax),%eax
0858e6e1 +0x4b6:  add    $0x4,%eax
0858e6e4 +0x4b9:  mov    (%eax),%edx
0858e6e6 +0x4bb:  mov    0x8(%ebp),%eax
0858e6e9 +0x4be:  mov    %edx,0x4(%esp)
0858e6ed +0x4c2:  mov    %eax,(%esp)
0858e6f0 +0x4c5:  call   082d2e42 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x24d3d>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x24d3d
0858e6f5 +0x4ca:  call   08724be0 <__cxa_rethrow>
0858e6fa +0x4cf:  mov    %edx,%ebx
0858e6fc +0x4d1:  mov    %eax,%esi
0858e6fe +0x4d3:  call   08725c30 <__cxa_end_catch>
0858e703 +0x4d8:  mov    %esi,%eax
0858e705 +0x4da:  mov    %ebx,%edx
0858e707 +0x4dc:  mov    %eax,(%esp)
0858e70a +0x4df:  call   08ae3750 <_Unwind_Resume>
0858e70f +0x4e4:  nop
```

## 反编译 C

```c
// <global>::global @ 0x858e22b

/* PacketBuf::PacketBuf() */

void PacketBuf::_GLOBAL__I_PacketBuf(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
