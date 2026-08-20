# Process

`_ZN8TaoCrypt8DES_EDE37ProcessEPhPKhj`

`TaoCrypt::DES_EDE3::Process(unsigned char*, unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::DES_EDE3` | `0x087a8370` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a8370  _ZN8TaoCrypt8DES_EDE37ProcessEPhPKhj
#           TaoCrypt::DES_EDE3::Process(unsigned char*, unsigned char const*, unsigned int)
# range [0x087a8370, 0x087a877f]
087a8370 +0x000:  push   %ebp
087a8371 +0x001:  mov    %esp,%ebp
087a8373 +0x003:  push   %edi
087a8374 +0x004:  push   %esi
087a8375 +0x005:  push   %ebx
087a8376 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
087a837b +0x00b:  add    $0xbc481d,%ebx
087a8381 +0x011:  sub    $0x5c,%esp
087a8384 +0x014:  mov    0x8(%ebp),%esi
087a8387 +0x017:  mov    0xc(%ebp),%ecx
087a838a +0x01a:  mov    0x10(%ebp),%edi
087a838d +0x01d:  mov    0x14(%ebp),%eax
087a8390 +0x020:  mov    -0x5c8(%ebx),%edx
087a8396 +0x026:  cmpb   $0x0,(%edx)
087a8399 +0x029:  je     087a8498 <+0x128>
087a839f +0x02f:  shr    $0x3,%eax
087a83a2 +0x032:  cmpl   $0x1,0x34(%esi)
087a83a6 +0x036:  mov    %eax,-0x34(%ebp)
087a83a9 +0x039:  je     087a8408 <+0x98>
087a83ab +0x03b:  lea    -0x65cab8(%ebx),%eax
087a83b1 +0x041:  xor    %edx,%edx
087a83b3 +0x043:  mov    %eax,-0x30(%ebp)
087a83b6 +0x046:  mov    -0x34(%ebp),%eax
087a83b9 +0x049:  test   %eax,%eax
087a83bb +0x04b:  je     087a83fc <+0x8c>
087a83bd +0x04d:  mov    %edi,-0x3c(%ebp)
087a83c0 +0x050:  mov    -0x34(%ebp),%edi
087a83c3 +0x053:  mov    %esi,-0x2c(%ebp)
087a83c6 +0x056:  mov    %edx,%esi
087a83c8 +0x058:  mov    %ecx,-0x38(%ebp)
087a83cb +0x05b:  nop
087a83cc +0x05c:  lea    0x0(%esi,%eiz,1),%esi
087a83d0 +0x060:  mov    -0x3c(%ebp),%eax
087a83d3 +0x063:  mov    -0x38(%ebp),%edx
087a83d6 +0x066:  mov    -0x30(%ebp),%ecx
087a83d9 +0x069:  add    %esi,%eax
087a83db +0x06b:  mov    %eax,0x4(%esp)
087a83df +0x06f:  mov    -0x2c(%ebp),%eax
087a83e2 +0x072:  add    %esi,%edx
087a83e4 +0x074:  mov    %ecx,0xc(%esp)
087a83e8 +0x078:  add    $0x8,%esi
087a83eb +0x07b:  mov    %edx,0x8(%esp)
087a83ef +0x07f:  mov    %eax,(%esp)
087a83f2 +0x082:  call   087a63e0 <_ZNK8TaoCrypt8DES_EDE310AsmProcessEPKhPhPv>  ; TaoCrypt::DES_EDE3::AsmProcess(unsigned char const*, unsigned char*, void*) const
087a83f7 +0x087:  sub    $0x1,%edi
087a83fa +0x08a:  jne    087a83d0 <+0x60>
087a83fc +0x08c:  add    $0x5c,%esp
087a83ff +0x08f:  pop    %ebx
087a8400 +0x090:  pop    %esi
087a8401 +0x091:  pop    %edi
087a8402 +0x092:  pop    %ebp
087a8403 +0x093:  ret
087a8404 +0x094:  lea    0x0(%esi,%eiz,1),%esi
087a8408 +0x098:  mov    0x30(%esi),%eax
087a840b +0x09b:  test   %eax,%eax
087a840d +0x09d:  jne    087a84f8 <+0x188>
087a8413 +0x0a3:  mov    -0x34(%ebp),%eax
087a8416 +0x0a6:  test   %eax,%eax
087a8418 +0x0a8:  je     087a83fc <+0x8c>
087a841a +0x0aa:  lea    -0x65cab8(%ebx),%eax
087a8420 +0x0b0:  mov    %eax,-0x30(%ebp)
087a8423 +0x0b3:  mov    %edi,%eax
087a8425 +0x0b5:  mov    %esi,%edi
087a8427 +0x0b7:  lea    0x10(%esi),%edx
087a842a +0x0ba:  xor    %esi,%esi
087a842c +0x0bc:  movl   $0x0,-0x38(%ebp)
087a8433 +0x0c3:  mov    %ecx,-0x3c(%ebp)
087a8436 +0x0c6:  mov    %eax,-0x2c(%ebp)
087a8439 +0x0c9:  lea    0x0(%esi,%eiz,1),%esi
087a8440 +0x0d0:  mov    -0x2c(%ebp),%ecx
087a8443 +0x0d3:  mov    -0x2c(%ebp),%eax
087a8446 +0x0d6:  mov    %edx,-0x40(%ebp)
087a8449 +0x0d9:  mov    (%ecx,%esi,8),%ecx
087a844c +0x0dc:  xor    %ecx,0x10(%edi)
087a844f +0x0df:  mov    0x4(%eax,%esi,8),%eax
087a8453 +0x0e3:  add    $0x1,%esi
087a8456 +0x0e6:  xor    %eax,0x14(%edi)
087a8459 +0x0e9:  mov    -0x30(%ebp),%ecx
087a845c +0x0ec:  mov    %edx,0x8(%esp)
087a8460 +0x0f0:  mov    %edx,0x4(%esp)
087a8464 +0x0f4:  mov    %edi,(%esp)
087a8467 +0x0f7:  mov    %ecx,0xc(%esp)
087a846b +0x0fb:  call   087a63e0 <_ZNK8TaoCrypt8DES_EDE310AsmProcessEPKhPhPv>  ; TaoCrypt::DES_EDE3::AsmProcess(unsigned char const*, unsigned char*, void*) const
087a8470 +0x100:  mov    -0x40(%ebp),%edx
087a8473 +0x103:  mov    -0x3c(%ebp),%eax
087a8476 +0x106:  mov    (%edx),%ecx
087a8478 +0x108:  mov    %ecx,(%eax)
087a847a +0x10a:  mov    0x4(%edx),%ecx
087a847d +0x10d:  mov    %ecx,0x4(%eax)
087a8480 +0x110:  add    $0x8,%eax
087a8483 +0x113:  cmp    %esi,-0x34(%ebp)
087a8486 +0x116:  mov    %eax,-0x3c(%ebp)
087a8489 +0x119:  jne    087a8440 <+0xd0>
087a848b +0x11b:  add    $0x5c,%esp
087a848e +0x11e:  pop    %ebx
087a848f +0x11f:  pop    %esi
087a8490 +0x120:  pop    %edi
087a8491 +0x121:  pop    %ebp
087a8492 +0x122:  ret
087a8493 +0x123:  nop
087a8494 +0x124:  lea    0x0(%esi,%eiz,1),%esi
087a8498 +0x128:  mov    0x34(%esi),%edx
087a849b +0x12b:  test   %edx,%edx
087a849d +0x12d:  jne    087a8568 <+0x1f8>
087a84a3 +0x133:  xor    %edx,%edx
087a84a5 +0x135:  divl   0x4(%esi)
087a84a8 +0x138:  test   %eax,%eax
087a84aa +0x13a:  mov    %eax,-0x30(%ebp)
087a84ad +0x13d:  je     087a83fc <+0x8c>
087a84b3 +0x143:  mov    %edi,%eax
087a84b5 +0x145:  mov    %esi,%edi
087a84b7 +0x147:  mov    -0x30(%ebp),%esi
087a84ba +0x14a:  lea    0x0(%esi),%esi
087a84c0 +0x150:  mov    (%edi),%edx
087a84c2 +0x152:  mov    %eax,-0x44(%ebp)
087a84c5 +0x155:  mov    %ecx,0xc(%esp)
087a84c9 +0x159:  mov    %eax,0x4(%esp)
087a84cd +0x15d:  mov    %ecx,-0x40(%ebp)
087a84d0 +0x160:  movl   $0x0,0x8(%esp)
087a84d8 +0x168:  mov    %edi,(%esp)
087a84db +0x16b:  call   *0xc(%edx)
087a84de +0x16e:  mov    0x4(%edi),%edx
087a84e1 +0x171:  mov    -0x40(%ebp),%ecx
087a84e4 +0x174:  mov    -0x44(%ebp),%eax
087a84e7 +0x177:  add    %edx,%ecx
087a84e9 +0x179:  add    %edx,%eax
087a84eb +0x17b:  sub    $0x1,%esi
087a84ee +0x17e:  jne    087a84c0 <+0x150>
087a84f0 +0x180:  jmp    087a83fc <+0x8c>
087a84f5 +0x185:  lea    0x0(%esi),%esi
087a84f8 +0x188:  mov    -0x34(%ebp),%edx
087a84fb +0x18b:  test   %edx,%edx
087a84fd +0x18d:  je     087a83fc <+0x8c>
087a8503 +0x193:  lea    -0x65cab8(%ebx),%edx
087a8509 +0x199:  lea    0x10(%esi),%eax
087a850c +0x19c:  mov    %edx,-0x30(%ebp)
087a850f +0x19f:  mov    %esi,%edx
087a8511 +0x1a1:  mov    %ecx,%esi
087a8513 +0x1a3:  nop
087a8514 +0x1a4:  lea    0x0(%esi,%eiz,1),%esi
087a8518 +0x1a8:  mov    -0x30(%ebp),%ecx
087a851b +0x1ab:  mov    %esi,0x8(%esp)
087a851f +0x1af:  mov    %edi,0x4(%esp)
087a8523 +0x1b3:  mov    %edx,(%esp)
087a8526 +0x1b6:  mov    %ecx,0xc(%esp)
087a852a +0x1ba:  mov    %eax,-0x44(%ebp)
087a852d +0x1bd:  mov    %edx,-0x40(%ebp)
087a8530 +0x1c0:  call   087a63e0 <_ZNK8TaoCrypt8DES_EDE310AsmProcessEPKhPhPv>  ; TaoCrypt::DES_EDE3::AsmProcess(unsigned char const*, unsigned char*, void*) const
087a8535 +0x1c5:  mov    -0x40(%ebp),%edx
087a8538 +0x1c8:  mov    -0x44(%ebp),%eax
087a853b +0x1cb:  mov    0x10(%edx),%ecx
087a853e +0x1ce:  xor    %ecx,(%esi)
087a8540 +0x1d0:  mov    0x14(%edx),%ecx
087a8543 +0x1d3:  xor    %ecx,0x4(%esi)
087a8546 +0x1d6:  add    $0x8,%esi
087a8549 +0x1d9:  mov    (%edi),%ecx
087a854b +0x1db:  mov    %ecx,(%eax)
087a854d +0x1dd:  mov    0x4(%edi),%ecx
087a8550 +0x1e0:  add    $0x8,%edi
087a8553 +0x1e3:  mov    %ecx,0x4(%eax)
087a8556 +0x1e6:  subl   $0x1,-0x34(%ebp)
087a855a +0x1ea:  jne    087a8518 <+0x1a8>
087a855c +0x1ec:  add    $0x5c,%esp
087a855f +0x1ef:  pop    %ebx
087a8560 +0x1f0:  pop    %esi
087a8561 +0x1f1:  pop    %edi
087a8562 +0x1f2:  pop    %ebp
087a8563 +0x1f3:  ret
087a8564 +0x1f4:  lea    0x0(%esi,%eiz,1),%esi
087a8568 +0x1f8:  cmp    $0x1,%edx
087a856b +0x1fb:  jne    087a83fc <+0x8c>
087a8571 +0x201:  mov    0x30(%esi),%edx
087a8574 +0x204:  test   %edx,%edx
087a8576 +0x206:  jne    087a85ec <+0x27c>
087a8578 +0x208:  xor    %edx,%edx
087a857a +0x20a:  divl   0x4(%esi)
087a857d +0x20d:  test   %eax,%eax
087a857f +0x20f:  mov    %eax,-0x30(%ebp)
087a8582 +0x212:  je     087a83fc <+0x8c>
087a8588 +0x218:  mov    0x4(%esi),%eax
087a858b +0x21b:  mov    %edi,%edx
087a858d +0x21d:  mov    %ecx,%edi
087a858f +0x21f:  nop
087a8590 +0x220:  mov    %edx,0x4(%esp)
087a8594 +0x224:  mov    %eax,0x8(%esp)
087a8598 +0x228:  mov    0x8(%esi),%eax
087a859b +0x22b:  mov    %edx,-0x40(%ebp)
087a859e +0x22e:  mov    %eax,(%esp)
087a85a1 +0x231:  call   08767410 <_ZN8TaoCrypt6xorbufEPhPKhj>  ; TaoCrypt::xorbuf(unsigned char*, unsigned char const*, unsigned int)
087a85a6 +0x236:  mov    0x8(%esi),%eax
087a85a9 +0x239:  mov    (%esi),%ecx
087a85ab +0x23b:  movl   $0x0,0x8(%esp)
087a85b3 +0x243:  mov    %esi,(%esp)
087a85b6 +0x246:  mov    %eax,0xc(%esp)
087a85ba +0x24a:  mov    %eax,0x4(%esp)
087a85be +0x24e:  call   *0xc(%ecx)
087a85c1 +0x251:  mov    0x8(%esi),%eax
087a85c4 +0x254:  mov    0x4(%esi),%ecx
087a85c7 +0x257:  mov    %edi,(%esp)
087a85ca +0x25a:  mov    %eax,0x4(%esp)
087a85ce +0x25e:  mov    %ecx,0x8(%esp)
087a85d2 +0x262:  call   0807d8a0 <_init+0x198>
087a85d7 +0x267:  mov    0x4(%esi),%eax
087a85da +0x26a:  mov    -0x40(%ebp),%edx
087a85dd +0x26d:  add    %eax,%edi
087a85df +0x26f:  add    %eax,%edx
087a85e1 +0x271:  subl   $0x1,-0x30(%ebp)
087a85e5 +0x275:  jne    087a8590 <+0x220>
087a85e7 +0x277:  jmp    087a83fc <+0x8c>
087a85ec +0x27c:  xor    %edx,%edx
087a85ee +0x27e:  divl   0x4(%esi)
087a85f1 +0x281:  test   %eax,%eax
087a85f3 +0x283:  mov    %eax,-0x30(%ebp)
087a85f6 +0x286:  je     087a83fc <+0x8c>
087a85fc +0x28c:  mov    0x4(%esi),%eax
087a85ff +0x28f:  lea    -0x28(%ebp),%edx
087a8602 +0x292:  mov    %edx,-0x34(%ebp)
087a8605 +0x295:  mov    %edi,%edx
087a8607 +0x297:  mov    %ecx,%edi
087a8609 +0x299:  lea    0x0(%esi,%eiz,1),%esi
087a8610 +0x2a0:  mov    0xc(%esi),%ecx
087a8613 +0x2a3:  mov    %edx,-0x40(%ebp)
087a8616 +0x2a6:  mov    %edx,0x4(%esp)
087a861a +0x2aa:  mov    %eax,0x8(%esp)
087a861e +0x2ae:  mov    %ecx,(%esp)
087a8621 +0x2b1:  call   0807d8a0 <_init+0x198>
087a8626 +0x2b6:  mov    (%esi),%eax
087a8628 +0x2b8:  mov    %edi,0xc(%esp)
087a862c +0x2bc:  movl   $0x0,0x8(%esp)
087a8634 +0x2c4:  mov    0xc(%esi),%ecx
087a8637 +0x2c7:  mov    %esi,(%esp)
087a863a +0x2ca:  mov    %ecx,0x4(%esp)
087a863e +0x2ce:  call   *0xc(%eax)
087a8641 +0x2d1:  mov    0x4(%esi),%eax
087a8644 +0x2d4:  mov    %eax,0x8(%esp)
087a8648 +0x2d8:  mov    0x8(%esi),%eax
087a864b +0x2db:  mov    %edi,(%esp)
087a864e +0x2de:  mov    %eax,0x4(%esp)
087a8652 +0x2e2:  call   08767410 <_ZN8TaoCrypt6xorbufEPhPKhj>  ; TaoCrypt::xorbuf(unsigned char*, unsigned char const*, unsigned int)
087a8657 +0x2e7:  mov    0x4(%esi),%ecx
087a865a +0x2ea:  mov    0x8(%esi),%eax
087a865d +0x2ed:  mov    %ecx,0x8(%esp)
087a8661 +0x2f1:  mov    -0x34(%ebp),%ecx
087a8664 +0x2f4:  mov    %eax,0x4(%esp)
087a8668 +0x2f8:  mov    %ecx,(%esp)
087a866b +0x2fb:  call   0807d8a0 <_init+0x198>
087a8670 +0x300:  mov    0xc(%esi),%eax
087a8673 +0x303:  mov    0x4(%esi),%ecx
087a8676 +0x306:  mov    %eax,0x4(%esp)
087a867a +0x30a:  mov    %ecx,0x8(%esp)
087a867e +0x30e:  mov    0x8(%esi),%eax
087a8681 +0x311:  mov    %eax,(%esp)
087a8684 +0x314:  call   0807d8a0 <_init+0x198>
087a8689 +0x319:  mov    0x4(%esi),%ecx
087a868c +0x31c:  mov    0xc(%esi),%eax
087a868f +0x31f:  mov    %ecx,0x8(%esp)
087a8693 +0x323:  mov    -0x34(%ebp),%ecx
087a8696 +0x326:  mov    %eax,(%esp)
087a8699 +0x329:  mov    %ecx,0x4(%esp)
087a869d +0x32d:  call   0807d8a0 <_init+0x198>
087a86a2 +0x332:  mov    0x4(%esi),%eax
087a86a5 +0x335:  mov    -0x40(%ebp),%edx
087a86a8 +0x338:  add    %eax,%edi
087a86aa +0x33a:  add    %eax,%edx
087a86ac +0x33c:  subl   $0x1,-0x30(%ebp)
087a86b0 +0x340:  jne    087a8610 <+0x2a0>
087a86b6 +0x346:  jmp    087a83fc <+0x8c>
087a86bb +0x34b:  nop
087a86bc +0x34c:  nop
087a86bd +0x34d:  nop
087a86be +0x34e:  nop
087a86bf +0x34f:  nop
087a86c0 +0x350:  call   087245c4 <__i686.get_pc_thunk.cx>
087a86c5 +0x355:  add    $0xbc44d3,%ecx
087a86cb +0x35b:  push   %ebp
087a86cc +0x35c:  mov    %esp,%ebp
087a86ce +0x35e:  mov    -0x474(%ecx),%eax
087a86d4 +0x364:  lea    0x8(%eax),%edx
087a86d7 +0x367:  mov    0x8(%ebp),%eax
087a86da +0x36a:  mov    %edx,(%eax)
087a86dc +0x36c:  pop    %ebp
087a86dd +0x36d:  ret
087a86de +0x36e:  nop
087a86df +0x36f:  nop
087a86e0 +0x370:  call   087245c4 <__i686.get_pc_thunk.cx>
087a86e5 +0x375:  add    $0xbc44b3,%ecx
087a86eb +0x37b:  push   %ebp
087a86ec +0x37c:  mov    %esp,%ebp
087a86ee +0x37e:  mov    -0x474(%ecx),%eax
087a86f4 +0x384:  lea    0x8(%eax),%edx
087a86f7 +0x387:  mov    0x8(%ebp),%eax
087a86fa +0x38a:  mov    %edx,(%eax)
087a86fc +0x38c:  pop    %ebp
087a86fd +0x38d:  ret
087a86fe +0x38e:  nop
087a86ff +0x38f:  nop
087a8700 +0x390:  call   087245c4 <__i686.get_pc_thunk.cx>
087a8705 +0x395:  add    $0xbc4493,%ecx
087a870b +0x39b:  push   %ebp
087a870c +0x39c:  mov    %esp,%ebp
087a870e +0x39e:  mov    -0x474(%ecx),%eax
087a8714 +0x3a4:  lea    0x8(%eax),%edx
087a8717 +0x3a7:  mov    0x8(%ebp),%eax
087a871a +0x3aa:  mov    %edx,(%eax)
087a871c +0x3ac:  pop    %ebp
087a871d +0x3ad:  ret
087a871e +0x3ae:  nop
087a871f +0x3af:  nop
087a8720 +0x3b0:  call   087245c4 <__i686.get_pc_thunk.cx>
087a8725 +0x3b5:  add    $0xbc4473,%ecx
087a872b +0x3bb:  push   %ebp
087a872c +0x3bc:  mov    %esp,%ebp
087a872e +0x3be:  mov    -0x474(%ecx),%eax
087a8734 +0x3c4:  lea    0x8(%eax),%edx
087a8737 +0x3c7:  mov    0x8(%ebp),%eax
087a873a +0x3ca:  mov    %edx,(%eax)
087a873c +0x3cc:  pop    %ebp
087a873d +0x3cd:  ret
087a873e +0x3ce:  nop
087a873f +0x3cf:  nop
087a8740 +0x3d0:  call   087245c4 <__i686.get_pc_thunk.cx>
087a8745 +0x3d5:  add    $0xbc4453,%ecx
087a874b +0x3db:  push   %ebp
087a874c +0x3dc:  mov    %esp,%ebp
087a874e +0x3de:  mov    -0x474(%ecx),%eax
087a8754 +0x3e4:  lea    0x8(%eax),%edx
087a8757 +0x3e7:  mov    0x8(%ebp),%eax
087a875a +0x3ea:  mov    %edx,(%eax)
087a875c +0x3ec:  pop    %ebp
087a875d +0x3ed:  ret
087a875e +0x3ee:  nop
087a875f +0x3ef:  nop
087a8760 +0x3f0:  call   087245c4 <__i686.get_pc_thunk.cx>
087a8765 +0x3f5:  add    $0xbc4433,%ecx
087a876b +0x3fb:  push   %ebp
087a876c +0x3fc:  mov    %esp,%ebp
087a876e +0x3fe:  mov    -0x474(%ecx),%eax
087a8774 +0x404:  lea    0x8(%eax),%edx
087a8777 +0x407:  mov    0x8(%ebp),%eax
087a877a +0x40a:  mov    %edx,(%eax)
087a877c +0x40c:  pop    %ebp
087a877d +0x40d:  ret
087a877e +0x40e:  nop
087a877f +0x40f:  nop
```

## 反编译 C

```c
// TaoCrypt::DES_EDE3::Process @ 0x87a8370

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DES_EDE3::Process(unsigned char*, unsigned char const*, unsigned int) */

void __thiscall
TaoCrypt::DES_EDE3::Process(DES_EDE3 *this,uchar *param_1,uchar *param_2,uint param_3)

{
  DES_EDE3 *pDVar1;
  uchar *puVar2;
  size_t __n;
  uchar *puVar3;
  int iVar4;
  uint uVar5;
  uchar *local_40;
  uint local_38;
  uint local_34;
  undefined1 local_2c [24];
  undefined4 uStack_14;
  
  uStack_14 = 0x87a837b;
  if (*PTR_isMMX_0936c5d0 == '\0') {
    if (*(int *)(this + 0x34) == 0) {
      for (uVar5 = param_3 / *(uint *)(this + 4); uVar5 != 0; uVar5 = uVar5 - 1) {
        (**(code **)(*(int *)this + 0xc))(this,param_2,0,param_1);
        param_1 = param_1 + *(int *)(this + 4);
        param_2 = param_2 + *(int *)(this + 4);
      }
    }
    else if (*(int *)(this + 0x34) == 1) {
      if (*(int *)(this + 0x30) == 0) {
        local_34 = param_3 / *(uint *)(this + 4);
        if (local_34 != 0) {
          uVar5 = *(uint *)(this + 4);
          do {
            xorbuf(*(uchar **)(this + 8),param_2,uVar5);
            (**(code **)(*(int *)this + 0xc))
                      (this,*(undefined4 *)(this + 8),0,*(undefined4 *)(this + 8));
            memcpy(param_1,*(void **)(this + 8),*(size_t *)(this + 4));
            uVar5 = *(uint *)(this + 4);
            param_1 = param_1 + uVar5;
            param_2 = param_2 + uVar5;
            local_34 = local_34 - 1;
          } while (local_34 != 0);
        }
      }
      else {
        local_34 = param_3 / *(uint *)(this + 4);
        if (local_34 != 0) {
          __n = *(size_t *)(this + 4);
          do {
            memcpy(*(void **)(this + 0xc),param_2,__n);
            (**(code **)(*(int *)this + 0xc))(this,*(undefined4 *)(this + 0xc),0,param_1);
            xorbuf(param_1,*(uchar **)(this + 8),*(uint *)(this + 4));
            memcpy(local_2c,*(void **)(this + 8),*(size_t *)(this + 4));
            memcpy(*(void **)(this + 8),*(void **)(this + 0xc),*(size_t *)(this + 4));
            memcpy(*(void **)(this + 0xc),local_2c,*(size_t *)(this + 4));
            __n = *(size_t *)(this + 4);
            param_1 = param_1 + __n;
            param_2 = param_2 + __n;
            local_34 = local_34 - 1;
          } while (local_34 != 0);
        }
      }
    }
  }
  else {
    local_38 = param_3 >> 3;
    if (*(int *)(this + 0x34) == 1) {
      if (*(int *)(this + 0x30) == 0) {
        if (local_38 != 0) {
          pDVar1 = this + 0x10;
          local_40 = param_1;
          uVar5 = 0;
          do {
            *(uint *)(this + 0x10) = *(uint *)(this + 0x10) ^ *(uint *)(param_2 + uVar5 * 8);
            iVar4 = uVar5 * 8;
            uVar5 = uVar5 + 1;
            *(uint *)(this + 0x14) = *(uint *)(this + 0x14) ^ *(uint *)(param_2 + iVar4 + 4);
            AsmProcess(this,(uchar *)pDVar1,(uchar *)pDVar1,Spbox);
            *(undefined4 *)local_40 = *(undefined4 *)pDVar1;
            *(undefined4 *)(local_40 + 4) = *(undefined4 *)(this + 0x14);
            local_40 = local_40 + 8;
          } while (local_38 != uVar5);
          return;
        }
      }
      else if (local_38 != 0) {
        do {
          AsmProcess(this,param_2,param_1,Spbox);
          *(uint *)param_1 = *(uint *)param_1 ^ *(uint *)(this + 0x10);
          *(uint *)((int)param_1 + 4) = *(uint *)((int)param_1 + 4) ^ *(uint *)(this + 0x14);
          param_1 = (uchar *)((int)param_1 + 8);
          *(undefined4 *)(this + 0x10) = *(undefined4 *)param_2;
          puVar2 = param_2 + 4;
          param_2 = param_2 + 8;
          *(undefined4 *)(this + 0x14) = *(undefined4 *)puVar2;
          local_38 = local_38 - 1;
        } while (local_38 != 0);
        return;
      }
    }
    else if (local_38 != 0) {
      iVar4 = 0;
      do {
        puVar2 = param_2 + iVar4;
        puVar3 = param_1 + iVar4;
        iVar4 = iVar4 + 8;
        AsmProcess(this,puVar2,puVar3,Spbox);
        local_38 = local_38 - 1;
      } while (local_38 != 0);
    }
  }
  return;
}
```
