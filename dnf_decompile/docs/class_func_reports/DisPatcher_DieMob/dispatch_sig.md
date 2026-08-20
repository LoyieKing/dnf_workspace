# dispatch_sig

`_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf`

`DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_DieMob` | `0x081eb0c4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081eb0c4  _ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf
#           DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)
# range [0x081eb0c4, 0x081ecce5]
081eb0c4 +0x0000:  push   %ebp
081eb0c5 +0x0001:  mov    %esp,%ebp
081eb0c7 +0x0003:  push   %esi
081eb0c8 +0x0004:  push   %ebx
081eb0c9 +0x0005:  sub    $0xb10,%esp
081eb0cf +0x000b:  movl   $0x0,-0x74(%ebp)
081eb0d6 +0x0012:  lea    -0xadb(%ebp),%eax
081eb0dc +0x0018:  add    $0xd,%eax
081eb0df +0x001b:  mov    %eax,0x4(%esp)
081eb0e3 +0x001f:  mov    0x10(%ebp),%eax
081eb0e6 +0x0022:  mov    %eax,(%esp)
081eb0e9 +0x0025:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081eb0ee +0x002a:  xor    $0x1,%eax
081eb0f1 +0x002d:  test   %al,%al
081eb0f3 +0x002f:  je     081eb11e <+0x5a>
081eb0f5 +0x0031:  movl   $0x0,0xc(%esp)
081eb0fd +0x0039:  movl   $0x0,0x8(%esp)
081eb105 +0x0041:  movl   $&_ZZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081eb10d +0x0049:  movl   $0x6d09,(%esp)
081eb114 +0x0050:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081eb119 +0x0055:  jmp    081eccdb <+0x1c17>
081eb11e +0x005a:  lea    -0xadb(%ebp),%eax
081eb124 +0x0060:  add    $0xf,%eax
081eb127 +0x0063:  mov    %eax,0x4(%esp)
081eb12b +0x0067:  mov    0x10(%ebp),%eax
081eb12e +0x006a:  mov    %eax,(%esp)
081eb131 +0x006d:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081eb136 +0x0072:  xor    $0x1,%eax
081eb139 +0x0075:  test   %al,%al
081eb13b +0x0077:  je     081eb166 <+0xa2>
081eb13d +0x0079:  movl   $0x0,0xc(%esp)
081eb145 +0x0081:  movl   $0x0,0x8(%esp)
081eb14d +0x0089:  movl   $&_ZZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081eb155 +0x0091:  movl   $0x6d0a,(%esp)
081eb15c +0x0098:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081eb161 +0x009d:  jmp    081eccdb <+0x1c17>
081eb166 +0x00a2:  lea    -0xadb(%ebp),%eax
081eb16c +0x00a8:  add    $0x11,%eax
081eb16f +0x00ab:  mov    %eax,0x4(%esp)
081eb173 +0x00af:  mov    0x10(%ebp),%eax
081eb176 +0x00b2:  mov    %eax,(%esp)
081eb179 +0x00b5:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081eb17e +0x00ba:  xor    $0x1,%eax
081eb181 +0x00bd:  test   %al,%al
081eb183 +0x00bf:  je     081eb1ae <+0xea>
081eb185 +0x00c1:  movl   $0x0,0xc(%esp)
081eb18d +0x00c9:  movl   $0x0,0x8(%esp)
081eb195 +0x00d1:  movl   $&_ZZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081eb19d +0x00d9:  movl   $0x6d0c,(%esp)
081eb1a4 +0x00e0:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081eb1a9 +0x00e5:  jmp    081eccdb <+0x1c17>
081eb1ae +0x00ea:  lea    -0xadb(%ebp),%eax
081eb1b4 +0x00f0:  add    $0x15,%eax
081eb1b7 +0x00f3:  mov    %eax,0x4(%esp)
081eb1bb +0x00f7:  mov    0x10(%ebp),%eax
081eb1be +0x00fa:  mov    %eax,(%esp)
081eb1c1 +0x00fd:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081eb1c6 +0x0102:  xor    $0x1,%eax
081eb1c9 +0x0105:  test   %al,%al
081eb1cb +0x0107:  je     081eb1f6 <+0x132>
081eb1cd +0x0109:  movl   $0x0,0xc(%esp)
081eb1d5 +0x0111:  movl   $0x0,0x8(%esp)
081eb1dd +0x0119:  movl   $&_ZZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081eb1e5 +0x0121:  movl   $0x6d0d,(%esp)
081eb1ec +0x0128:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081eb1f1 +0x012d:  jmp    081eccdb <+0x1c17>
081eb1f6 +0x0132:  lea    -0xadb(%ebp),%eax
081eb1fc +0x0138:  add    $0xa1a,%eax
081eb201 +0x013d:  mov    %eax,0x4(%esp)
081eb205 +0x0141:  mov    0x10(%ebp),%eax
081eb208 +0x0144:  mov    %eax,(%esp)
081eb20b +0x0147:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
081eb210 +0x014c:  xor    $0x1,%eax
081eb213 +0x014f:  test   %al,%al
081eb215 +0x0151:  je     081eb240 <+0x17c>
081eb217 +0x0153:  movl   $0x0,0xc(%esp)
081eb21f +0x015b:  movl   $0x0,0x8(%esp)
081eb227 +0x0163:  movl   $&_ZZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081eb22f +0x016b:  movl   $0x6d0e,(%esp)
081eb236 +0x0172:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081eb23b +0x0177:  jmp    081eccdb <+0x1c17>
081eb240 +0x017c:  lea    -0xadb(%ebp),%eax
081eb246 +0x0182:  add    $0xa1e,%eax
081eb24b +0x0187:  mov    %eax,0x4(%esp)
081eb24f +0x018b:  mov    0x10(%ebp),%eax
081eb252 +0x018e:  mov    %eax,(%esp)
081eb255 +0x0191:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
081eb25a +0x0196:  xor    $0x1,%eax
081eb25d +0x0199:  test   %al,%al
081eb25f +0x019b:  je     081eb28a <+0x1c6>
081eb261 +0x019d:  movl   $0x0,0xc(%esp)
081eb269 +0x01a5:  movl   $0x0,0x8(%esp)
081eb271 +0x01ad:  movl   $&_ZZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081eb279 +0x01b5:  movl   $0x6d0f,(%esp)
081eb280 +0x01bc:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081eb285 +0x01c1:  jmp    081eccdb <+0x1c17>
081eb28a +0x01c6:  lea    -0xadb(%ebp),%eax
081eb290 +0x01cc:  add    $0x19,%eax
081eb293 +0x01cf:  mov    %eax,0x4(%esp)
081eb297 +0x01d3:  mov    0x10(%ebp),%eax
081eb29a +0x01d6:  mov    %eax,(%esp)
081eb29d +0x01d9:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081eb2a2 +0x01de:  xor    $0x1,%eax
081eb2a5 +0x01e1:  test   %al,%al
081eb2a7 +0x01e3:  je     081eb2d2 <+0x20e>
081eb2a9 +0x01e5:  movl   $0x0,0xc(%esp)
081eb2b1 +0x01ed:  movl   $0x0,0x8(%esp)
081eb2b9 +0x01f5:  movl   $&_ZZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081eb2c1 +0x01fd:  movl   $0x6d11,(%esp)
081eb2c8 +0x0204:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081eb2cd +0x0209:  jmp    081eccdb <+0x1c17>
081eb2d2 +0x020e:  movl   $0x0,-0x3c(%ebp)
081eb2d9 +0x0215:  movl   $0x0,-0x3c(%ebp)
081eb2e0 +0x021c:  jmp    081eb43b <+0x377>
081eb2e5 +0x0221:  mov    -0x3c(%ebp),%edx
081eb2e8 +0x0224:  lea    -0xadb(%ebp),%eax
081eb2ee +0x022a:  add    $0x8,%edx
081eb2f1 +0x022d:  add    %edx,%edx
081eb2f3 +0x022f:  add    %edx,%eax
081eb2f5 +0x0231:  add    $0xa,%eax
081eb2f8 +0x0234:  mov    %eax,0x4(%esp)
081eb2fc +0x0238:  mov    0x10(%ebp),%eax
081eb2ff +0x023b:  mov    %eax,(%esp)
081eb302 +0x023e:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081eb307 +0x0243:  xor    $0x1,%eax
081eb30a +0x0246:  test   %al,%al
081eb30c +0x0248:  je     081eb337 <+0x273>
081eb30e +0x024a:  movl   $0x0,0xc(%esp)
081eb316 +0x0252:  movl   $0x0,0x8(%esp)
081eb31e +0x025a:  movl   $&_ZZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081eb326 +0x0262:  movl   $0x6d16,(%esp)
081eb32d +0x0269:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081eb332 +0x026e:  jmp    081eccdb <+0x1c17>
081eb337 +0x0273:  mov    -0x3c(%ebp),%edx
081eb33a +0x0276:  lea    -0xadb(%ebp),%eax
081eb340 +0x027c:  add    $0x108,%edx
081eb346 +0x0282:  add    %edx,%edx
081eb348 +0x0284:  add    %edx,%eax
081eb34a +0x0286:  add    $0xa,%eax
081eb34d +0x0289:  mov    %eax,0x4(%esp)
081eb351 +0x028d:  mov    0x10(%ebp),%eax
081eb354 +0x0290:  mov    %eax,(%esp)
081eb357 +0x0293:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081eb35c +0x0298:  xor    $0x1,%eax
081eb35f +0x029b:  test   %al,%al
081eb361 +0x029d:  je     081eb38c <+0x2c8>
081eb363 +0x029f:  movl   $0x0,0xc(%esp)
081eb36b +0x02a7:  movl   $0x0,0x8(%esp)
081eb373 +0x02af:  movl   $&_ZZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081eb37b +0x02b7:  movl   $0x6d17,(%esp)
081eb382 +0x02be:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081eb387 +0x02c3:  jmp    081eccdb <+0x1c17>
081eb38c +0x02c8:  mov    -0x3c(%ebp),%edx
081eb38f +0x02cb:  lea    -0xadb(%ebp),%eax
081eb395 +0x02d1:  add    $0x104,%edx
081eb39b +0x02d7:  shl    $0x2,%edx
081eb39e +0x02da:  add    %edx,%eax
081eb3a0 +0x02dc:  add    $0xa,%eax
081eb3a3 +0x02df:  mov    %eax,0x4(%esp)
081eb3a7 +0x02e3:  mov    0x10(%ebp),%eax
081eb3aa +0x02e6:  mov    %eax,(%esp)
081eb3ad +0x02e9:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
081eb3b2 +0x02ee:  xor    $0x1,%eax
081eb3b5 +0x02f1:  test   %al,%al
081eb3b7 +0x02f3:  je     081eb3e2 <+0x31e>
081eb3b9 +0x02f5:  movl   $0x0,0xc(%esp)
081eb3c1 +0x02fd:  movl   $0x0,0x8(%esp)
081eb3c9 +0x0305:  movl   $&_ZZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081eb3d1 +0x030d:  movl   $0x6d18,(%esp)
081eb3d8 +0x0314:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081eb3dd +0x0319:  jmp    081eccdb <+0x1c17>
081eb3e2 +0x031e:  mov    -0x3c(%ebp),%edx
081eb3e5 +0x0321:  lea    -0xadb(%ebp),%eax
081eb3eb +0x0327:  add    $0x408,%edx
081eb3f1 +0x032d:  add    %edx,%edx
081eb3f3 +0x032f:  add    %edx,%eax
081eb3f5 +0x0331:  add    $0xa,%eax
081eb3f8 +0x0334:  mov    %eax,0x4(%esp)
081eb3fc +0x0338:  mov    0x10(%ebp),%eax
081eb3ff +0x033b:  mov    %eax,(%esp)
081eb402 +0x033e:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081eb407 +0x0343:  xor    $0x1,%eax
081eb40a +0x0346:  test   %al,%al
081eb40c +0x0348:  je     081eb437 <+0x373>
081eb40e +0x034a:  movl   $0x0,0xc(%esp)
081eb416 +0x0352:  movl   $0x0,0x8(%esp)
081eb41e +0x035a:  movl   $&_ZZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081eb426 +0x0362:  movl   $0x6d19,(%esp)
081eb42d +0x0369:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081eb432 +0x036e:  jmp    081eccdb <+0x1c17>
081eb437 +0x0373:  addl   $0x1,-0x3c(%ebp)
081eb43b +0x0377:  movzbl -0xac2(%ebp),%eax
081eb442 +0x037e:  movzbl %al,%eax
081eb445 +0x0381:  cmp    -0x3c(%ebp),%eax
081eb448 +0x0384:  setg   %al
081eb44b +0x0387:  test   %al,%al
081eb44d +0x0389:  jne    081eb2e5 <+0x221>
081eb453 +0x038f:  lea    -0xadb(%ebp),%eax
081eb459 +0x0395:  add    $0xa24,%eax
081eb45e +0x039a:  mov    %eax,0x4(%esp)
081eb462 +0x039e:  mov    0x10(%ebp),%eax
081eb465 +0x03a1:  mov    %eax,(%esp)
081eb468 +0x03a4:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081eb46d +0x03a9:  xor    $0x1,%eax
081eb470 +0x03ac:  test   %al,%al
081eb472 +0x03ae:  je     081eb49d <+0x3d9>
081eb474 +0x03b0:  movl   $0x0,0xc(%esp)
081eb47c +0x03b8:  movl   $0x0,0x8(%esp)
081eb484 +0x03c0:  movl   $&_ZZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081eb48c +0x03c8:  movl   $0x6d25,(%esp)
081eb493 +0x03cf:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081eb498 +0x03d4:  jmp    081eccdb <+0x1c17>
081eb49d +0x03d9:  lea    -0xadb(%ebp),%eax
081eb4a3 +0x03df:  add    $0xa26,%eax
081eb4a8 +0x03e4:  mov    %eax,0x4(%esp)
081eb4ac +0x03e8:  mov    0x10(%ebp),%eax
081eb4af +0x03eb:  mov    %eax,(%esp)
081eb4b2 +0x03ee:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081eb4b7 +0x03f3:  xor    $0x1,%eax
081eb4ba +0x03f6:  test   %al,%al
081eb4bc +0x03f8:  je     081eb4e7 <+0x423>
081eb4be +0x03fa:  movl   $0x0,0xc(%esp)
081eb4c6 +0x0402:  movl   $0x0,0x8(%esp)
081eb4ce +0x040a:  movl   $&_ZZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081eb4d6 +0x0412:  movl   $0x6d26,(%esp)
081eb4dd +0x0419:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081eb4e2 +0x041e:  jmp    081eccdb <+0x1c17>
081eb4e7 +0x0423:  lea    -0xadb(%ebp),%eax
081eb4ed +0x0429:  add    $0xa22,%eax
081eb4f2 +0x042e:  mov    %eax,0x4(%esp)
081eb4f6 +0x0432:  mov    0x10(%ebp),%eax
081eb4f9 +0x0435:  mov    %eax,(%esp)
081eb4fc +0x0438:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081eb501 +0x043d:  xor    $0x1,%eax
081eb504 +0x0440:  test   %al,%al
081eb506 +0x0442:  je     081eb531 <+0x46d>
081eb508 +0x0444:  movl   $0x0,0xc(%esp)
081eb510 +0x044c:  movl   $0x0,0x8(%esp)
081eb518 +0x0454:  movl   $&_ZZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081eb520 +0x045c:  movl   $0x6d28,(%esp)
081eb527 +0x0463:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081eb52c +0x0468:  jmp    081eccdb <+0x1c17>
081eb531 +0x046d:  lea    -0xadb(%ebp),%eax
081eb537 +0x0473:  add    $0xa23,%eax
081eb53c +0x0478:  mov    %eax,0x4(%esp)
081eb540 +0x047c:  mov    0x10(%ebp),%eax
081eb543 +0x047f:  mov    %eax,(%esp)
081eb546 +0x0482:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081eb54b +0x0487:  xor    $0x1,%eax
081eb54e +0x048a:  test   %al,%al
081eb550 +0x048c:  je     081eb57b <+0x4b7>
081eb552 +0x048e:  movl   $0x0,0xc(%esp)
081eb55a +0x0496:  movl   $0x0,0x8(%esp)
081eb562 +0x049e:  movl   $&_ZZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081eb56a +0x04a6:  movl   $0x6d2b,(%esp)
081eb571 +0x04ad:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081eb576 +0x04b2:  jmp    081eccdb <+0x1c17>
081eb57b +0x04b7:  movb   $0x0,-0x75(%ebp)
081eb57f +0x04bb:  lea    -0x75(%ebp),%eax
081eb582 +0x04be:  mov    %eax,0x4(%esp)
081eb586 +0x04c2:  mov    0x10(%ebp),%eax
081eb589 +0x04c5:  mov    %eax,(%esp)
081eb58c +0x04c8:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081eb591 +0x04cd:  xor    $0x1,%eax
081eb594 +0x04d0:  test   %al,%al
081eb596 +0x04d2:  je     081eb5c1 <+0x4fd>
081eb598 +0x04d4:  movl   $0x0,0xc(%esp)
081eb5a0 +0x04dc:  movl   $0x0,0x8(%esp)
081eb5a8 +0x04e4:  movl   $&_ZZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081eb5b0 +0x04ec:  movl   $0x6d2f,(%esp)
081eb5b7 +0x04f3:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081eb5bc +0x04f8:  jmp    081eccdb <+0x1c17>
081eb5c1 +0x04fd:  movb   $0x0,-0x76(%ebp)
081eb5c5 +0x0501:  lea    -0x76(%ebp),%eax
081eb5c8 +0x0504:  mov    %eax,0x4(%esp)
081eb5cc +0x0508:  mov    0x10(%ebp),%eax
081eb5cf +0x050b:  mov    %eax,(%esp)
081eb5d2 +0x050e:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081eb5d7 +0x0513:  xor    $0x1,%eax
081eb5da +0x0516:  test   %al,%al
081eb5dc +0x0518:  je     081eb607 <+0x543>
081eb5de +0x051a:  movl   $0x0,0xc(%esp)
081eb5e6 +0x0522:  movl   $0x0,0x8(%esp)
081eb5ee +0x052a:  movl   $&_ZZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081eb5f6 +0x0532:  movl   $0x6d32,(%esp)
081eb5fd +0x0539:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081eb602 +0x053e:  jmp    081eccdb <+0x1c17>
081eb607 +0x0543:  movzbl -0x76(%ebp),%eax
081eb60b +0x0547:  test   %al,%al
081eb60d +0x0549:  je     081eb626 <+0x562>
081eb60f +0x054b:  mov    0xc(%ebp),%eax
081eb612 +0x054e:  mov    %eax,(%esp)
081eb615 +0x0551:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081eb61a +0x0556:  cmp    $0x5,%eax
081eb61d +0x0559:  jne    081eb626 <+0x562>
081eb61f +0x055b:  mov    $0x1,%eax
081eb624 +0x0560:  jmp    081eb62b <+0x567>
081eb626 +0x0562:  mov    $0x0,%eax
081eb62b +0x0567:  test   %al,%al
081eb62d +0x0569:  je     081eb68b <+0x5c7>
081eb62f +0x056b:  mov    0xc(%ebp),%eax
081eb632 +0x056e:  mov    %eax,(%esp)
081eb635 +0x0571:  call   0822fe4e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54f8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54f8
081eb63a +0x0576:  movswl %ax,%ebx
081eb63d +0x0579:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
081eb642 +0x057e:  mov    %ebx,0x4(%esp)
081eb646 +0x0582:  mov    %eax,(%esp)
081eb649 +0x0585:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
081eb64e +0x058a:  mov    %eax,-0x38(%ebp)
081eb651 +0x058d:  cmpl   $0x0,-0x38(%ebp)
081eb655 +0x0591:  jne    081eb680 <+0x5bc>
081eb657 +0x0593:  movl   $0x0,0xc(%esp)
081eb65f +0x059b:  movl   $0x0,0x8(%esp)
081eb667 +0x05a3:  movl   $&_ZZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081eb66f +0x05ab:  movl   $0x6d38,(%esp)
081eb676 +0x05b2:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081eb67b +0x05b7:  jmp    081eccdb <+0x1c17>
081eb680 +0x05bc:  mov    -0x38(%ebp),%eax
081eb683 +0x05bf:  mov    %eax,(%esp)
081eb686 +0x05c2:  call   085ba762 <_ZN6CParty18setMonsterMoveHackEv>  ; CParty::setMonsterMoveHack()
081eb68b +0x05c7:  lea    -0x78(%ebp),%eax
081eb68e +0x05ca:  mov    %eax,0x4(%esp)
081eb692 +0x05ce:  mov    0x10(%ebp),%eax
081eb695 +0x05d1:  mov    %eax,(%esp)
081eb698 +0x05d4:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081eb69d +0x05d9:  xor    $0x1,%eax
081eb6a0 +0x05dc:  test   %al,%al
081eb6a2 +0x05de:  je     081eb6cd <+0x609>
081eb6a4 +0x05e0:  movl   $0x0,0xc(%esp)
081eb6ac +0x05e8:  movl   $0x0,0x8(%esp)
081eb6b4 +0x05f0:  movl   $&_ZZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081eb6bc +0x05f8:  movl   $0x6d3e,(%esp)
081eb6c3 +0x05ff:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081eb6c8 +0x0604:  jmp    081eccdb <+0x1c17>
081eb6cd +0x0609:  lea    -0xadb(%ebp),%eax
081eb6d3 +0x060f:  add    $0xa28,%eax
081eb6d8 +0x0614:  mov    %eax,0x4(%esp)
081eb6dc +0x0618:  mov    0x10(%ebp),%eax
081eb6df +0x061b:  mov    %eax,(%esp)
081eb6e2 +0x061e:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081eb6e7 +0x0623:  xor    $0x1,%eax
081eb6ea +0x0626:  test   %al,%al
081eb6ec +0x0628:  je     081eb717 <+0x653>
081eb6ee +0x062a:  movl   $0x0,0xc(%esp)
081eb6f6 +0x0632:  movl   $0x0,0x8(%esp)
081eb6fe +0x063a:  movl   $&_ZZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081eb706 +0x0642:  movl   $0x6d41,(%esp)
081eb70d +0x0649:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081eb712 +0x064e:  jmp    081eccdb <+0x1c17>
081eb717 +0x0653:  lea    -0xadb(%ebp),%eax
081eb71d +0x0659:  add    $0xa2d,%eax
081eb722 +0x065e:  mov    %eax,0x4(%esp)
081eb726 +0x0662:  mov    0x10(%ebp),%eax
081eb729 +0x0665:  mov    %eax,(%esp)
081eb72c +0x0668:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081eb731 +0x066d:  xor    $0x1,%eax
081eb734 +0x0670:  test   %al,%al
081eb736 +0x0672:  je     081eb761 <+0x69d>
081eb738 +0x0674:  movl   $0x0,0xc(%esp)
081eb740 +0x067c:  movl   $0x0,0x8(%esp)
081eb748 +0x0684:  movl   $&_ZZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081eb750 +0x068c:  movl   $0x6d42,(%esp)
081eb757 +0x0693:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081eb75c +0x0698:  jmp    081eccdb <+0x1c17>
081eb761 +0x069d:  lea    -0xadb(%ebp),%eax
081eb767 +0x06a3:  add    $0xa31,%eax
081eb76c +0x06a8:  mov    %eax,0x4(%esp)
081eb770 +0x06ac:  mov    0x10(%ebp),%eax
081eb773 +0x06af:  mov    %eax,(%esp)
081eb776 +0x06b2:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081eb77b +0x06b7:  xor    $0x1,%eax
081eb77e +0x06ba:  test   %al,%al
081eb780 +0x06bc:  je     081eb7ab <+0x6e7>
081eb782 +0x06be:  movl   $0x0,0xc(%esp)
081eb78a +0x06c6:  movl   $0x0,0x8(%esp)
081eb792 +0x06ce:  movl   $&_ZZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081eb79a +0x06d6:  movl   $0x6d43,(%esp)
081eb7a1 +0x06dd:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081eb7a6 +0x06e2:  jmp    081eccdb <+0x1c17>
081eb7ab +0x06e7:  lea    -0xadb(%ebp),%eax
081eb7b1 +0x06ed:  add    $0xa29,%eax
081eb7b6 +0x06f2:  mov    %eax,0x4(%esp)
081eb7ba +0x06f6:  mov    0x10(%ebp),%eax
081eb7bd +0x06f9:  mov    %eax,(%esp)
081eb7c0 +0x06fc:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081eb7c5 +0x0701:  xor    $0x1,%eax
081eb7c8 +0x0704:  test   %al,%al
081eb7ca +0x0706:  je     081eb7f5 <+0x731>
081eb7cc +0x0708:  movl   $0x0,0xc(%esp)
081eb7d4 +0x0710:  movl   $0x0,0x8(%esp)
081eb7dc +0x0718:  movl   $&_ZZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081eb7e4 +0x0720:  movl   $0x6d44,(%esp)
081eb7eb +0x0727:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081eb7f0 +0x072c:  jmp    081eccdb <+0x1c17>
081eb7f5 +0x0731:  lea    -0xadb(%ebp),%eax
081eb7fb +0x0737:  add    $0xa2b,%eax
081eb800 +0x073c:  mov    %eax,0x4(%esp)
081eb804 +0x0740:  mov    0x10(%ebp),%eax
081eb807 +0x0743:  mov    %eax,(%esp)
081eb80a +0x0746:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081eb80f +0x074b:  xor    $0x1,%eax
081eb812 +0x074e:  test   %al,%al
081eb814 +0x0750:  je     081eb83f <+0x77b>
081eb816 +0x0752:  movl   $0x0,0xc(%esp)
081eb81e +0x075a:  movl   $0x0,0x8(%esp)
081eb826 +0x0762:  movl   $&_ZZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081eb82e +0x076a:  movl   $0x6d45,(%esp)
081eb835 +0x0771:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081eb83a +0x0776:  jmp    081eccdb <+0x1c17>
081eb83f +0x077b:  lea    -0xadb(%ebp),%eax
081eb845 +0x0781:  add    $0xa35,%eax
081eb84a +0x0786:  mov    %eax,0x4(%esp)
081eb84e +0x078a:  mov    0x10(%ebp),%eax
081eb851 +0x078d:  mov    %eax,(%esp)
081eb854 +0x0790:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081eb859 +0x0795:  xor    $0x1,%eax
081eb85c +0x0798:  test   %al,%al
081eb85e +0x079a:  je     081eb889 <+0x7c5>
081eb860 +0x079c:  movl   $0x0,0xc(%esp)
081eb868 +0x07a4:  movl   $0x0,0x8(%esp)
081eb870 +0x07ac:  movl   $&_ZZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081eb878 +0x07b4:  movl   $0x6d46,(%esp)
081eb87f +0x07bb:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081eb884 +0x07c0:  jmp    081eccdb <+0x1c17>
081eb889 +0x07c5:  lea    -0xadb(%ebp),%eax
081eb88f +0x07cb:  add    $0xa37,%eax
081eb894 +0x07d0:  mov    %eax,0x4(%esp)
081eb898 +0x07d4:  mov    0x10(%ebp),%eax
081eb89b +0x07d7:  mov    %eax,(%esp)
081eb89e +0x07da:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081eb8a3 +0x07df:  xor    $0x1,%eax
081eb8a6 +0x07e2:  test   %al,%al
081eb8a8 +0x07e4:  je     081eb8d3 <+0x80f>
081eb8aa +0x07e6:  movl   $0x0,0xc(%esp)
081eb8b2 +0x07ee:  movl   $0x0,0x8(%esp)
081eb8ba +0x07f6:  movl   $&_ZZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081eb8c2 +0x07fe:  movl   $0x6d47,(%esp)
081eb8c9 +0x0805:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081eb8ce +0x080a:  jmp    081eccdb <+0x1c17>
081eb8d3 +0x080f:  lea    -0xadb(%ebp),%eax
081eb8d9 +0x0815:  add    $0xa39,%eax
081eb8de +0x081a:  mov    %eax,0x4(%esp)
081eb8e2 +0x081e:  mov    0x10(%ebp),%eax
081eb8e5 +0x0821:  mov    %eax,(%esp)
081eb8e8 +0x0824:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081eb8ed +0x0829:  xor    $0x1,%eax
081eb8f0 +0x082c:  test   %al,%al
081eb8f2 +0x082e:  je     081eb91d <+0x859>
081eb8f4 +0x0830:  movl   $0x0,0xc(%esp)
081eb8fc +0x0838:  movl   $0x0,0x8(%esp)
081eb904 +0x0840:  movl   $&_ZZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081eb90c +0x0848:  movl   $0x6d48,(%esp)
081eb913 +0x084f:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081eb918 +0x0854:  jmp    081eccdb <+0x1c17>
081eb91d +0x0859:  lea    -0xadb(%ebp),%eax
081eb923 +0x085f:  add    $0xa3b,%eax
081eb928 +0x0864:  mov    %eax,0x4(%esp)
081eb92c +0x0868:  mov    0x10(%ebp),%eax
081eb92f +0x086b:  mov    %eax,(%esp)
081eb932 +0x086e:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081eb937 +0x0873:  xor    $0x1,%eax
081eb93a +0x0876:  test   %al,%al
081eb93c +0x0878:  je     081eb967 <+0x8a3>
081eb93e +0x087a:  movl   $0x0,0xc(%esp)
081eb946 +0x0882:  movl   $0x0,0x8(%esp)
081eb94e +0x088a:  movl   $&_ZZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081eb956 +0x0892:  movl   $0x6d49,(%esp)
081eb95d +0x0899:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081eb962 +0x089e:  jmp    081eccdb <+0x1c17>
081eb967 +0x08a3:  lea    -0xadb(%ebp),%eax
081eb96d +0x08a9:  add    $0xa3d,%eax
081eb972 +0x08ae:  mov    %eax,0x4(%esp)
081eb976 +0x08b2:  mov    0x10(%ebp),%eax
081eb979 +0x08b5:  mov    %eax,(%esp)
081eb97c +0x08b8:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081eb981 +0x08bd:  xor    $0x1,%eax
081eb984 +0x08c0:  test   %al,%al
081eb986 +0x08c2:  je     081eb9b1 <+0x8ed>
081eb988 +0x08c4:  movl   $0x0,0xc(%esp)
081eb990 +0x08cc:  movl   $0x0,0x8(%esp)
081eb998 +0x08d4:  movl   $&_ZZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081eb9a0 +0x08dc:  movl   $0x6d4a,(%esp)
081eb9a7 +0x08e3:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081eb9ac +0x08e8:  jmp    081eccdb <+0x1c17>
081eb9b1 +0x08ed:  mov    0xc(%ebp),%eax
081eb9b4 +0x08f0:  mov    %eax,(%esp)
081eb9b7 +0x08f3:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081eb9bc +0x08f8:  cmp    $0x5,%eax
081eb9bf +0x08fb:  sete   %al
081eb9c2 +0x08fe:  test   %al,%al
081eb9c4 +0x0900:  je     081ec390 <+0x12cc>
081eb9ca +0x0906:  mov    0xc(%ebp),%eax
081eb9cd +0x0909:  mov    %eax,(%esp)
081eb9d0 +0x090c:  call   0822fe4e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54f8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54f8
081eb9d5 +0x0911:  movswl %ax,%ebx
081eb9d8 +0x0914:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
081eb9dd +0x0919:  mov    %ebx,0x4(%esp)
081eb9e1 +0x091d:  mov    %eax,(%esp)
081eb9e4 +0x0920:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
081eb9e9 +0x0925:  mov    %eax,-0x34(%ebp)
081eb9ec +0x0928:  cmpl   $0x0,-0x34(%ebp)
081eb9f0 +0x092c:  jne    081eba1b <+0x957>
081eb9f2 +0x092e:  movl   $0x0,0xc(%esp)
081eb9fa +0x0936:  movl   $0x0,0x8(%esp)
081eba02 +0x093e:  movl   $&_ZZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081eba0a +0x0946:  movl   $0x6d54,(%esp)
081eba11 +0x094d:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081eba16 +0x0952:  jmp    081eccdb <+0x1c17>
081eba1b +0x0957:  mov    -0x34(%ebp),%eax
081eba1e +0x095a:  add    $0x1844,%eax
081eba23 +0x095f:  mov    %eax,(%esp)
081eba26 +0x0962:  call   08235840 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xaeea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xaeea
081eba2b +0x0967:  cmp    $0xc7,%eax
081eba30 +0x096c:  setbe  %al
081eba33 +0x096f:  test   %al,%al
081eba35 +0x0971:  je     081ebb0e <+0xa4a>
081eba3b +0x0977:  movzwl -0xace(%ebp),%eax
081eba42 +0x097e:  movzwl %ax,%eax
081eba45 +0x0981:  mov    %eax,-0x70(%ebp)
081eba48 +0x0984:  mov    -0x34(%ebp),%eax
081eba4b +0x0987:  lea    0x1844(%eax),%ecx
081eba51 +0x098d:  lea    -0x7c(%ebp),%eax
081eba54 +0x0990:  lea    -0x70(%ebp),%edx
081eba57 +0x0993:  mov    %edx,0x8(%esp)
081eba5b +0x0997:  mov    %ecx,0x4(%esp)
081eba5f +0x099b:  mov    %eax,(%esp)
081eba62 +0x099e:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
081eba67 +0x09a3:  sub    $0x4,%esp
081eba6a +0x09a6:  mov    -0x34(%ebp),%eax
081eba6d +0x09a9:  lea    0x1844(%eax),%edx
081eba73 +0x09af:  lea    -0x6c(%ebp),%eax
081eba76 +0x09b2:  mov    %edx,0x4(%esp)
081eba7a +0x09b6:  mov    %eax,(%esp)
081eba7d +0x09b9:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
081eba82 +0x09be:  sub    $0x4,%esp
081eba85 +0x09c1:  lea    -0x6c(%ebp),%eax
081eba88 +0x09c4:  mov    %eax,0x4(%esp)
081eba8c +0x09c8:  lea    -0x7c(%ebp),%eax
081eba8f +0x09cb:  mov    %eax,(%esp)
081eba92 +0x09ce:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
081eba97 +0x09d3:  test   %al,%al
081eba99 +0x09d5:  je     081ebab1 <+0x9ed>
081eba9b +0x09d7:  lea    -0x7c(%ebp),%eax
081eba9e +0x09da:  mov    %eax,(%esp)
081ebaa1 +0x09dd:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
081ebaa6 +0x09e2:  mov    0x4(%eax),%edx
081ebaa9 +0x09e5:  add    $0x1,%edx
081ebaac +0x09e8:  mov    %edx,0x4(%eax)
081ebaaf +0x09eb:  jmp    081ebb0e <+0xa4a>
081ebab1 +0x09ed:  movl   $0x1,-0x50(%ebp)
081ebab8 +0x09f4:  lea    -0x58(%ebp),%eax
081ebabb +0x09f7:  lea    -0x50(%ebp),%edx
081ebabe +0x09fa:  mov    %edx,0x8(%esp)
081ebac2 +0x09fe:  lea    -0xadb(%ebp),%edx
081ebac8 +0x0a04:  add    $0xd,%edx
081ebacb +0x0a07:  mov    %edx,0x4(%esp)
081ebacf +0x0a0b:  mov    %eax,(%esp)
081ebad2 +0x0a0e:  call   08237727 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcdd1>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcdd1
081ebad7 +0x0a13:  sub    $0x4,%esp
081ebada +0x0a16:  lea    -0x58(%ebp),%eax
081ebadd +0x0a19:  mov    %eax,0x4(%esp)
081ebae1 +0x0a1d:  lea    -0x60(%ebp),%eax
081ebae4 +0x0a20:  mov    %eax,(%esp)
081ebae7 +0x0a23:  call   0823776a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xce14>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xce14
081ebaec +0x0a28:  mov    -0x34(%ebp),%eax
081ebaef +0x0a2b:  lea    0x1844(%eax),%ecx
081ebaf5 +0x0a31:  lea    -0x68(%ebp),%eax
081ebaf8 +0x0a34:  lea    -0x60(%ebp),%edx
081ebafb +0x0a37:  mov    %edx,0x8(%esp)
081ebaff +0x0a3b:  mov    %ecx,0x4(%esp)
081ebb03 +0x0a3f:  mov    %eax,(%esp)
081ebb06 +0x0a42:  call   080c6d50 <_GLOBAL__I_g_ServerString_+0x2bb>  ; global constructors keyed to g_ServerString_+0x2bb
081ebb0b +0x0a47:  sub    $0x4,%esp
081ebb0e +0x0a4a:  movzbl -0x75(%ebp),%eax
081ebb12 +0x0a4e:  cmp    $0x1,%al
081ebb14 +0x0a50:  jne    081ebb39 <+0xa75>
081ebb16 +0x0a52:  movzwl -0xace(%ebp),%eax
081ebb1d +0x0a59:  movzwl %ax,%eax
081ebb20 +0x0a5c:  mov    %eax,0x4(%esp)
081ebb24 +0x0a60:  mov    -0x34(%ebp),%eax
081ebb27 +0x0a63:  mov    %eax,(%esp)
081ebb2a +0x0a66:  call   085b6540 <_ZN6CParty20DestroyPassiveObjectEi>  ; CParty::DestroyPassiveObject(int)
081ebb2f +0x0a6b:  mov    $0x0,%eax
081ebb34 +0x0a70:  jmp    081eccdb <+0x1c17>
081ebb39 +0x0a75:  movzwl -0xacc(%ebp),%eax
081ebb40 +0x0a7c:  movzwl %ax,%edx
081ebb43 +0x0a7f:  movzwl -0xace(%ebp),%eax
081ebb4a +0x0a86:  movzwl %ax,%eax
081ebb4d +0x0a89:  lea    -0x74(%ebp),%ecx
081ebb50 +0x0a8c:  mov    %ecx,0x14(%esp)
081ebb54 +0x0a90:  lea    -0xadb(%ebp),%ecx
081ebb5a +0x0a96:  mov    %ecx,0x10(%esp)
081ebb5e +0x0a9a:  mov    %edx,0xc(%esp)
081ebb62 +0x0a9e:  mov    %eax,0x8(%esp)
081ebb66 +0x0aa2:  mov    0xc(%ebp),%eax
081ebb69 +0x0aa5:  mov    %eax,0x4(%esp)
081ebb6d +0x0aa9:  mov    -0x34(%ebp),%eax
081ebb70 +0x0aac:  mov    %eax,(%esp)
081ebb73 +0x0aaf:  call   085a27e8 <_ZN6CParty12kill_monsterEP5CUseritRK15MSG_MONSTER_DIEPi>  ; CParty::kill_monster(CUser*, int, unsigned short, MSG_MONSTER_DIE const&, int*)
081ebb78 +0x0ab4:  xor    $0x1,%eax
081ebb7b +0x0ab7:  test   %al,%al
081ebb7d +0x0ab9:  je     081ebc55 <+0xb91>
081ebb83 +0x0abf:  lea    -0x88(%ebp),%eax
081ebb89 +0x0ac5:  mov    %eax,(%esp)
081ebb8c +0x0ac8:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081ebb91 +0x0acd:  movl   $0x2a,0x8(%esp)
081ebb99 +0x0ad5:  movl   $0x1,0x4(%esp)
081ebba1 +0x0add:  lea    -0x88(%ebp),%eax
081ebba7 +0x0ae3:  mov    %eax,(%esp)
081ebbaa +0x0ae6:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081ebbaf +0x0aeb:  movl   $0x0,0x4(%esp)
081ebbb7 +0x0af3:  lea    -0x88(%ebp),%eax
081ebbbd +0x0af9:  mov    %eax,(%esp)
081ebbc0 +0x0afc:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081ebbc5 +0x0b01:  movl   $0x5,0x4(%esp)
081ebbcd +0x0b09:  lea    -0x88(%ebp),%eax
081ebbd3 +0x0b0f:  mov    %eax,(%esp)
081ebbd6 +0x0b12:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081ebbdb +0x0b17:  movzwl -0xace(%ebp),%eax
081ebbe2 +0x0b1e:  movzwl %ax,%eax
081ebbe5 +0x0b21:  mov    %eax,0x4(%esp)
081ebbe9 +0x0b25:  lea    -0x88(%ebp),%eax
081ebbef +0x0b2b:  mov    %eax,(%esp)
081ebbf2 +0x0b2e:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081ebbf7 +0x0b33:  movl   $0x1,0x4(%esp)
081ebbff +0x0b3b:  lea    -0x88(%ebp),%eax
081ebc05 +0x0b41:  mov    %eax,(%esp)
081ebc08 +0x0b44:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081ebc0d +0x0b49:  lea    -0x88(%ebp),%eax
081ebc13 +0x0b4f:  mov    %eax,0x4(%esp)
081ebc17 +0x0b53:  mov    0xc(%ebp),%eax
081ebc1a +0x0b56:  mov    %eax,(%esp)
081ebc1d +0x0b59:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081ebc22 +0x0b5e:  jmp    081ebc42 <+0xb7e>
081ebc24 +0x0b60:  mov    %edx,%ebx
081ebc26 +0x0b62:  mov    %eax,%esi
081ebc28 +0x0b64:  lea    -0x88(%ebp),%eax
081ebc2e +0x0b6a:  mov    %eax,(%esp)
081ebc31 +0x0b6d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081ebc36 +0x0b72:  mov    %esi,%eax
081ebc38 +0x0b74:  mov    %ebx,%edx
081ebc3a +0x0b76:  mov    %eax,(%esp)
081ebc3d +0x0b79:  call   08ae3750 <_Unwind_Resume>
081ebc42 +0x0b7e:  lea    -0x88(%ebp),%eax
081ebc48 +0x0b84:  mov    %eax,(%esp)
081ebc4b +0x0b87:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081ebc50 +0x0b8c:  jmp    081eccd6 <+0x1c12>
081ebc55 +0x0b91:  mov    0xc(%ebp),%eax
081ebc58 +0x0b94:  mov    %eax,(%esp)
081ebc5b +0x0b97:  call   0823080e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5eb8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5eb8
081ebc60 +0x0b9c:  lea    -0xadb(%ebp),%edx
081ebc66 +0x0ba2:  mov    %edx,0x4(%esp)
081ebc6a +0x0ba6:  mov    %eax,(%esp)
081ebc6d +0x0ba9:  call   0827a81c <_ZN17Secu_HackLogCheck6DieMobEPK15MSG_MONSTER_DIE>  ; Secu_HackLogCheck::DieMob(MSG_MONSTER_DIE const*)
081ebc72 +0x0bae:  movzwl -0xacc(%ebp),%eax
081ebc79 +0x0bb5:  cmp    $0xffff,%ax
081ebc7d +0x0bb9:  je     081ebd28 <+0xc64>
081ebc83 +0x0bbf:  movzwl -0xb5(%ebp),%eax
081ebc8a +0x0bc6:  movzwl %ax,%esi
081ebc8d +0x0bc9:  movzwl -0xb7(%ebp),%eax
081ebc94 +0x0bd0:  movzwl %ax,%ebx
081ebc97 +0x0bd3:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
081ebc9e +0x0bda:  call   081458ac <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x32f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x32f
081ebca3 +0x0bdf:  mov    0xc(%ebp),%edx
081ebca6 +0x0be2:  add    $0x8e448,%edx
081ebcac +0x0be8:  movl   $0x3e8,0x18(%esp)
081ebcb4 +0x0bf0:  movl   $0x258,0x14(%esp)
081ebcbc +0x0bf8:  movl   $0x258,0x10(%esp)
081ebcc4 +0x0c00:  mov    %esi,0xc(%esp)
081ebcc8 +0x0c04:  mov    %ebx,0x8(%esp)
081ebccc +0x0c08:  mov    %eax,0x4(%esp)
081ebcd0 +0x0c0c:  mov    %edx,(%esp)
081ebcd3 +0x0c0f:  call   0823049c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5b46>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5b46
081ebcd8 +0x0c14:  test   %al,%al
081ebcda +0x0c16:  je     081ebd16 <+0xc52>
081ebcdc +0x0c18:  mov    0xc(%ebp),%eax
081ebcdf +0x0c1b:  mov    %eax,(%esp)
081ebce2 +0x0c1e:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081ebce7 +0x0c23:  movl   $0x0,0x14(%esp)
081ebcef +0x0c2b:  movl   $0x0,0x10(%esp)
081ebcf7 +0x0c33:  movl   $0x1,0xc(%esp)
081ebcff +0x0c3b:  movl   $0xd1,0x8(%esp)
081ebd07 +0x0c43:  mov    0xc(%ebp),%edx
081ebd0a +0x0c46:  mov    %edx,0x4(%esp)
081ebd0e +0x0c4a:  mov    %eax,(%esp)
081ebd11 +0x0c4d:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081ebd16 +0x0c52:  mov    0xc(%ebp),%eax
081ebd19 +0x0c55:  movl   $0x0,0x8e480(%eax)
081ebd23 +0x0c5f:  jmp    081ebf30 <+0xe6c>
081ebd28 +0x0c64:  mov    0xc(%ebp),%eax
081ebd2b +0x0c67:  mov    0x8e480(%eax),%eax
081ebd31 +0x0c6d:  lea    0x1(%eax),%edx
081ebd34 +0x0c70:  mov    0xc(%ebp),%eax
081ebd37 +0x0c73:  mov    %edx,0x8e480(%eax)
081ebd3d +0x0c79:  mov    0xc(%ebp),%eax
081ebd40 +0x0c7c:  mov    0x8e480(%eax),%eax
081ebd46 +0x0c82:  cmp    $0x4,%eax
081ebd49 +0x0c85:  jbe    081ebf30 <+0xe6c>
081ebd4f +0x0c8b:  mov    0xc(%ebp),%eax
081ebd52 +0x0c8e:  movl   $0x0,0x8e480(%eax)
081ebd5c +0x0c98:  mov    -0x34(%ebp),%eax
081ebd5f +0x0c9b:  mov    0xcac(%eax),%eax
081ebd65 +0x0ca1:  test   %eax,%eax
081ebd67 +0x0ca3:  jne    081ebda8 <+0xce4>
081ebd69 +0x0ca5:  mov    0xc(%ebp),%eax
081ebd6c +0x0ca8:  mov    %eax,(%esp)
081ebd6f +0x0cab:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081ebd74 +0x0cb0:  movl   $0x0,0x14(%esp)
081ebd7c +0x0cb8:  movl   $0x0,0x10(%esp)
081ebd84 +0x0cc0:  movl   $0x1,0xc(%esp)
081ebd8c +0x0cc8:  movl   $0xcd,0x8(%esp)
081ebd94 +0x0cd0:  mov    0xc(%ebp),%edx
081ebd97 +0x0cd3:  mov    %edx,0x4(%esp)
081ebd9b +0x0cd7:  mov    %eax,(%esp)
081ebd9e +0x0cda:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081ebda3 +0x0cdf:  jmp    081ebe3b <+0xd77>
081ebda8 +0x0ce4:  mov    -0x34(%ebp),%eax
081ebdab +0x0ce7:  mov    0xcac(%eax),%eax
081ebdb1 +0x0ced:  mov    %eax,(%esp)
081ebdb4 +0x0cf0:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
081ebdb9 +0x0cf5:  cmp    $0x2afe,%eax
081ebdbe +0x0cfa:  sete   %al
081ebdc1 +0x0cfd:  test   %al,%al
081ebdc3 +0x0cff:  je     081ebe01 <+0xd3d>
081ebdc5 +0x0d01:  mov    0xc(%ebp),%eax
081ebdc8 +0x0d04:  mov    %eax,(%esp)
081ebdcb +0x0d07:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081ebdd0 +0x0d0c:  movl   $0x0,0x14(%esp)
081ebdd8 +0x0d14:  movl   $0x2,0x10(%esp)
081ebde0 +0x0d1c:  movl   $0x1,0xc(%esp)
081ebde8 +0x0d24:  movl   $0xcd,0x8(%esp)
081ebdf0 +0x0d2c:  mov    0xc(%ebp),%edx
081ebdf3 +0x0d2f:  mov    %edx,0x4(%esp)
081ebdf7 +0x0d33:  mov    %eax,(%esp)
081ebdfa +0x0d36:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081ebdff +0x0d3b:  jmp    081ebe3b <+0xd77>
081ebe01 +0x0d3d:  mov    0xc(%ebp),%eax
081ebe04 +0x0d40:  mov    %eax,(%esp)
081ebe07 +0x0d43:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081ebe0c +0x0d48:  movl   $0x0,0x14(%esp)
081ebe14 +0x0d50:  movl   $0x0,0x10(%esp)
081ebe1c +0x0d58:  movl   $0x1,0xc(%esp)
081ebe24 +0x0d60:  movl   $0xcd,0x8(%esp)
081ebe2c +0x0d68:  mov    0xc(%ebp),%edx
081ebe2f +0x0d6b:  mov    %edx,0x4(%esp)
081ebe33 +0x0d6f:  mov    %eax,(%esp)
081ebe36 +0x0d72:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081ebe3b +0x0d77:  mov    -0x34(%ebp),%eax
081ebe3e +0x0d7a:  mov    %eax,(%esp)
081ebe41 +0x0d7d:  call   0822d8f6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fa0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fa0
081ebe46 +0x0d82:  xor    $0x1,%eax
081ebe49 +0x0d85:  test   %al,%al
081ebe4b +0x0d87:  je     081ebf30 <+0xe6c>
081ebe51 +0x0d8d:  mov    -0x34(%ebp),%eax
081ebe54 +0x0d90:  mov    0xcac(%eax),%eax
081ebe5a +0x0d96:  test   %eax,%eax
081ebe5c +0x0d98:  jne    081ebe9d <+0xdd9>
081ebe5e +0x0d9a:  mov    0xc(%ebp),%eax
081ebe61 +0x0d9d:  mov    %eax,(%esp)
081ebe64 +0x0da0:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081ebe69 +0x0da5:  movl   $0x0,0x14(%esp)
081ebe71 +0x0dad:  movl   $0x0,0x10(%esp)
081ebe79 +0x0db5:  movl   $0x1,0xc(%esp)
081ebe81 +0x0dbd:  movl   $0xce,0x8(%esp)
081ebe89 +0x0dc5:  mov    0xc(%ebp),%edx
081ebe8c +0x0dc8:  mov    %edx,0x4(%esp)
081ebe90 +0x0dcc:  mov    %eax,(%esp)
081ebe93 +0x0dcf:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081ebe98 +0x0dd4:  jmp    081ebf30 <+0xe6c>
081ebe9d +0x0dd9:  mov    -0x34(%ebp),%eax
081ebea0 +0x0ddc:  mov    0xcac(%eax),%eax
081ebea6 +0x0de2:  mov    %eax,(%esp)
081ebea9 +0x0de5:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
081ebeae +0x0dea:  cmp    $0x2afe,%eax
081ebeb3 +0x0def:  sete   %al
081ebeb6 +0x0df2:  test   %al,%al
081ebeb8 +0x0df4:  je     081ebef6 <+0xe32>
081ebeba +0x0df6:  mov    0xc(%ebp),%eax
081ebebd +0x0df9:  mov    %eax,(%esp)
081ebec0 +0x0dfc:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081ebec5 +0x0e01:  movl   $0x0,0x14(%esp)
081ebecd +0x0e09:  movl   $0x2,0x10(%esp)
081ebed5 +0x0e11:  movl   $0x1,0xc(%esp)
081ebedd +0x0e19:  movl   $0xce,0x8(%esp)
081ebee5 +0x0e21:  mov    0xc(%ebp),%edx
081ebee8 +0x0e24:  mov    %edx,0x4(%esp)
081ebeec +0x0e28:  mov    %eax,(%esp)
081ebeef +0x0e2b:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081ebef4 +0x0e30:  jmp    081ebf30 <+0xe6c>
081ebef6 +0x0e32:  mov    0xc(%ebp),%eax
081ebef9 +0x0e35:  mov    %eax,(%esp)
081ebefc +0x0e38:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081ebf01 +0x0e3d:  movl   $0x0,0x14(%esp)
081ebf09 +0x0e45:  movl   $0x0,0x10(%esp)
081ebf11 +0x0e4d:  movl   $0x1,0xc(%esp)
081ebf19 +0x0e55:  movl   $0xce,0x8(%esp)
081ebf21 +0x0e5d:  mov    0xc(%ebp),%edx
081ebf24 +0x0e60:  mov    %edx,0x4(%esp)
081ebf28 +0x0e64:  mov    %eax,(%esp)
081ebf2b +0x0e67:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081ebf30 +0x0e6c:  movl   $0x0,-0x3c(%ebp)
081ebf37 +0x0e73:  jmp    081ec2b7 <+0x11f3>
081ebf3c +0x0e78:  mov    -0x3c(%ebp),%eax
081ebf3f +0x0e7b:  add    $0x8,%eax
081ebf42 +0x0e7e:  movzwl -0xad1(%ebp,%eax,2),%eax
081ebf4a +0x0e86:  cmp    $0x111,%ax
081ebf4e +0x0e8a:  jne    081ec2b3 <+0x11ef>
081ebf54 +0x0e90:  movl   $0x0,-0x30(%ebp)
081ebf5b +0x0e97:  mov    -0x3c(%ebp),%eax
081ebf5e +0x0e9a:  add    $0x108,%eax
081ebf63 +0x0e9f:  movzwl -0xad1(%ebp,%eax,2),%eax
081ebf6b +0x0ea7:  movzwl %ax,%ebx
081ebf6e +0x0eaa:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081ebf73 +0x0eaf:  mov    %ebx,0x4(%esp)
081ebf77 +0x0eb3:  mov    %eax,(%esp)
081ebf7a +0x0eb6:  call   086c4b9c <_ZN9GameWorld15find_from_worldEt>  ; GameWorld::find_from_world(unsigned short)
081ebf7f +0x0ebb:  mov    %eax,-0x30(%ebp)
081ebf82 +0x0ebe:  cmpl   $0x0,-0x30(%ebp)
081ebf86 +0x0ec2:  je     081ebfb5 <+0xef1>
081ebf88 +0x0ec4:  mov    -0x3c(%ebp),%eax
081ebf8b +0x0ec7:  add    $0x108,%eax
081ebf90 +0x0ecc:  movzwl -0xad1(%ebp,%eax,2),%eax
081ebf98 +0x0ed4:  movzwl %ax,%eax
081ebf9b +0x0ed7:  mov    %eax,0x4(%esp)
081ebf9f +0x0edb:  mov    -0x34(%ebp),%eax
081ebfa2 +0x0ede:  mov    %eax,(%esp)
081ebfa5 +0x0ee1:  call   085b66fa <_ZN6CParty10isMyMemberEj>  ; CParty::isMyMember(unsigned int)
081ebfaa +0x0ee6:  test   %al,%al
081ebfac +0x0ee8:  je     081ebfb5 <+0xef1>
081ebfae +0x0eea:  mov    $0x1,%eax
081ebfb3 +0x0eef:  jmp    081ebfba <+0xef6>
081ebfb5 +0x0ef1:  mov    $0x0,%eax
081ebfba +0x0ef6:  test   %al,%al
081ebfbc +0x0ef8:  je     081ec2b3 <+0x11ef>
081ebfc2 +0x0efe:  movl   $0x0,-0x8c(%ebp)
081ebfcc +0x0f08:  movl   $0x6b,-0x90(%ebp)
081ebfd6 +0x0f12:  lea    -0x90(%ebp),%eax
081ebfdc +0x0f18:  mov    %eax,0x8(%esp)
081ebfe0 +0x0f1c:  lea    -0x8c(%ebp),%eax
081ebfe6 +0x0f22:  mov    %eax,0x4(%esp)
081ebfea +0x0f26:  mov    -0x30(%ebp),%eax
081ebfed +0x0f29:  mov    %eax,(%esp)
081ebff0 +0x0f2c:  call   08286790 <_ZN19CHackLog_OverDamage32GetDungeonLimitDamageAndHackTypeEP5CUserRjRN8WongWork13ENUM_HACKTYPEE>  ; CHackLog_OverDamage::GetDungeonLimitDamageAndHackType(CUser*, unsigned int&, WongWork::ENUM_HACKTYPE&)
081ebff5 +0x0f31:  mov    -0xbd(%ebp),%eax
081ebffb +0x0f37:  cmp    $0x5dc,%eax
081ec000 +0x0f3c:  jbe    081ec08a <+0xfc6>
081ec006 +0x0f42:  mov    0xc(%ebp),%eax
081ec009 +0x0f45:  mov    %eax,(%esp)
081ec00c +0x0f48:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081ec011 +0x0f4d:  movl   $0x0,0x14(%esp)
081ec019 +0x0f55:  movl   $0x0,0x10(%esp)
081ec021 +0x0f5d:  movl   $0x1,0xc(%esp)
081ec029 +0x0f65:  movl   $0x6f,0x8(%esp)
081ec031 +0x0f6d:  mov    0xc(%ebp),%edx
081ec034 +0x0f70:  mov    %edx,0x4(%esp)
081ec038 +0x0f74:  mov    %eax,(%esp)
081ec03b +0x0f77:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081ec040 +0x0f7c:  mov    -0xbd(%ebp),%ebx
081ec046 +0x0f82:  movl   $0x0,0xc(%esp)
081ec04e +0x0f8a:  movl   $0x6ddb,0x8(%esp)
081ec056 +0x0f92:  movl   $&_ZZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081ec05e +0x0f9a:  lea    -0x4c(%ebp),%eax
081ec061 +0x0f9d:  mov    %eax,(%esp)
081ec064 +0x0fa0:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081ec069 +0x0fa5:  mov    %ebx,0x8(%esp)
081ec06d +0x0fa9:  movl   $"Position : PacketDispatcher.cpp ZeroHit or 1500up Hit    Hit Count : %d  :::::::::::: ENUM_HACKTYPE_KILL_MONSTER_ZERO_HIT",0x4(%esp)
081ec075 +0x0fb1:  lea    -0x4c(%ebp),%eax
081ec078 +0x0fb4:  mov    %eax,(%esp)
081ec07b +0x0fb7:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081ec080 +0x0fbc:  movl   $0x1,-0xbd(%ebp)
081ec08a +0x0fc6:  mov    -0xbd(%ebp),%eax
081ec090 +0x0fcc:  cmp    $0x1,%eax
081ec093 +0x0fcf:  jne    081ec0bc <+0xff8>
081ec095 +0x0fd1:  mov    -0x30(%ebp),%eax
081ec098 +0x0fd4:  mov    %eax,(%esp)
081ec09b +0x0fd7:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081ec0a0 +0x0fdc:  mov    0xcac(%eax),%eax
081ec0a6 +0x0fe2:  mov    %eax,(%esp)
081ec0a9 +0x0fe5:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
081ec0ae +0x0fea:  cmp    $0x2afe,%eax
081ec0b3 +0x0fef:  jne    081ec0bc <+0xff8>
081ec0b5 +0x0ff1:  mov    $0x1,%eax
081ec0ba +0x0ff6:  jmp    081ec0c1 <+0xffd>
081ec0bc +0x0ff8:  mov    $0x0,%eax
081ec0c1 +0x0ffd:  test   %al,%al
081ec0c3 +0x0fff:  je     081ec101 <+0x103d>
081ec0c5 +0x1001:  mov    -0xc1(%ebp),%ebx
081ec0cb +0x1007:  mov    -0x30(%ebp),%eax
081ec0ce +0x100a:  mov    %eax,(%esp)
081ec0d1 +0x100d:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081ec0d6 +0x1012:  movl   $0x0,0x14(%esp)
081ec0de +0x101a:  mov    %ebx,0x10(%esp)
081ec0e2 +0x101e:  movl   $0x1,0xc(%esp)
081ec0ea +0x1026:  movl   $0x7f,0x8(%esp)
081ec0f2 +0x102e:  mov    -0x30(%ebp),%edx
081ec0f5 +0x1031:  mov    %edx,0x4(%esp)
081ec0f9 +0x1035:  mov    %eax,(%esp)
081ec0fc +0x1038:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081ec101 +0x103d:  mov    -0xc1(%ebp),%eax
081ec107 +0x1043:  test   %eax,%eax
081ec109 +0x1045:  jne    081ec14f <+0x108b>
081ec10b +0x1047:  mov    0xc(%ebp),%eax
081ec10e +0x104a:  mov    %eax,(%esp)
081ec111 +0x104d:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081ec116 +0x1052:  movl   $0x0,0x14(%esp)
081ec11e +0x105a:  movl   $0x0,0x10(%esp)
081ec126 +0x1062:  movl   $0x1,0xc(%esp)
081ec12e +0x106a:  movl   $0x6d,0x8(%esp)
081ec136 +0x1072:  mov    0xc(%ebp),%edx
081ec139 +0x1075:  mov    %edx,0x4(%esp)
081ec13d +0x1079:  mov    %eax,(%esp)
081ec140 +0x107c:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081ec145 +0x1081:  movl   $0x1,-0xc1(%ebp)
081ec14f +0x108b:  mov    -0x3c(%ebp),%eax
081ec152 +0x108e:  add    $0x408,%eax
081ec157 +0x1093:  movzwl -0xad1(%ebp,%eax,2),%eax
081ec15f +0x109b:  test   %ax,%ax
081ec162 +0x109e:  jne    081ec1b0 <+0x10ec>
081ec164 +0x10a0:  mov    0xc(%ebp),%eax
081ec167 +0x10a3:  mov    %eax,(%esp)
081ec16a +0x10a6:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081ec16f +0x10ab:  movl   $0x0,0x14(%esp)
081ec177 +0x10b3:  movl   $0x0,0x10(%esp)
081ec17f +0x10bb:  movl   $0x1,0xc(%esp)
081ec187 +0x10c3:  movl   $0x6e,0x8(%esp)
081ec18f +0x10cb:  mov    0xc(%ebp),%edx
081ec192 +0x10ce:  mov    %edx,0x4(%esp)
081ec196 +0x10d2:  mov    %eax,(%esp)
081ec199 +0x10d5:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081ec19e +0x10da:  mov    -0x3c(%ebp),%eax
081ec1a1 +0x10dd:  add    $0x408,%eax
081ec1a6 +0x10e2:  movw   $0x1,-0xad1(%ebp,%eax,2)
081ec1b0 +0x10ec:  mov    -0x3c(%ebp),%eax
081ec1b3 +0x10ef:  add    $0x104,%eax
081ec1b8 +0x10f4:  mov    -0xad1(%ebp,%eax,4),%eax
081ec1bf +0x10fb:  mov    -0x3c(%ebp),%edx
081ec1c2 +0x10fe:  add    $0x408,%edx
081ec1c8 +0x1104:  movzwl -0xad1(%ebp,%edx,2),%edx
081ec1d0 +0x110c:  movzwl %dx,%edx
081ec1d3 +0x110f:  mov    %edx,-0xaec(%ebp)
081ec1d9 +0x1115:  mov    $0x0,%edx
081ec1de +0x111a:  divl   -0xaec(%ebp)
081ec1e4 +0x1120:  mov    %eax,-0x2c(%ebp)
081ec1e7 +0x1123:  mov    -0x8c(%ebp),%eax
081ec1ed +0x1129:  cmp    %eax,-0x2c(%ebp)
081ec1f0 +0x112c:  jbe    081ec21e <+0x115a>
081ec1f2 +0x112e:  mov    -0x34(%ebp),%eax
081ec1f5 +0x1131:  mov    0xcac(%eax),%eax
081ec1fb +0x1137:  test   %eax,%eax
081ec1fd +0x1139:  je     081ec217 <+0x1153>
081ec1ff +0x113b:  mov    -0x34(%ebp),%eax
081ec202 +0x113e:  mov    0xcac(%eax),%eax
081ec208 +0x1144:  mov    %eax,(%esp)
081ec20b +0x1147:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
081ec210 +0x114c:  cmp    $0x2afe,%eax
081ec215 +0x1151:  je     081ec21e <+0x115a>
081ec217 +0x1153:  mov    $0x1,%eax
081ec21c +0x1158:  jmp    081ec223 <+0x115f>
081ec21e +0x115a:  mov    $0x0,%eax
081ec223 +0x115f:  test   %al,%al
081ec225 +0x1161:  je     081ec2b3 <+0x11ef>
081ec22b +0x1167:  mov    -0x90(%ebp),%ebx
081ec231 +0x116d:  mov    -0x30(%ebp),%eax
081ec234 +0x1170:  mov    %eax,(%esp)
081ec237 +0x1173:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081ec23c +0x1178:  movl   $0x0,0x14(%esp)
081ec244 +0x1180:  movl   $0x0,0x10(%esp)
081ec24c +0x1188:  movl   $0x1,0xc(%esp)
081ec254 +0x1190:  mov    %ebx,0x8(%esp)
081ec258 +0x1194:  mov    -0x30(%ebp),%edx
081ec25b +0x1197:  mov    %edx,0x4(%esp)
081ec25f +0x119b:  mov    %eax,(%esp)
081ec262 +0x119e:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081ec267 +0x11a3:  call   08286998 <_ZN19CHackLog_OverDamage24GetDungeonLimitMaxDamageEv>  ; CHackLog_OverDamage::GetDungeonLimitMaxDamage()
081ec26c +0x11a8:  cmp    -0x2c(%ebp),%eax
081ec26f +0x11ab:  setb   %al
081ec272 +0x11ae:  test   %al,%al
081ec274 +0x11b0:  je     081ec2b3 <+0x11ef>
081ec276 +0x11b2:  call   082869a2 <_ZN19CHackLog_OverDamage29GetHackTypeOverLimitMaxDamageEv>  ; CHackLog_OverDamage::GetHackTypeOverLimitMaxDamage()
081ec27b +0x11b7:  mov    %eax,%ebx
081ec27d +0x11b9:  mov    -0x30(%ebp),%eax
081ec280 +0x11bc:  mov    %eax,(%esp)
081ec283 +0x11bf:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081ec288 +0x11c4:  movl   $0x0,0x14(%esp)
081ec290 +0x11cc:  movl   $0x0,0x10(%esp)
081ec298 +0x11d4:  movl   $0x1,0xc(%esp)
081ec2a0 +0x11dc:  mov    %ebx,0x8(%esp)
081ec2a4 +0x11e0:  mov    -0x30(%ebp),%edx
081ec2a7 +0x11e3:  mov    %edx,0x4(%esp)
081ec2ab +0x11e7:  mov    %eax,(%esp)
081ec2ae +0x11ea:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081ec2b3 +0x11ef:  addl   $0x1,-0x3c(%ebp)
081ec2b7 +0x11f3:  movzbl -0xac2(%ebp),%eax
081ec2be +0x11fa:  movzbl %al,%eax
081ec2c1 +0x11fd:  cmp    -0x3c(%ebp),%eax
081ec2c4 +0x1200:  setg   %al
081ec2c7 +0x1203:  test   %al,%al
081ec2c9 +0x1205:  jne    081ebf3c <+0xe78>
081ec2cf +0x120b:  mov    -0xbd(%ebp),%ecx
081ec2d5 +0x1211:  mov    $0xcccccccd,%edx
081ec2da +0x1216:  mov    %ecx,%eax
081ec2dc +0x1218:  mul    %edx
081ec2de +0x121a:  shr    $0x3,%edx
081ec2e1 +0x121d:  mov    %edx,%eax
081ec2e3 +0x121f:  shl    $0x2,%eax
081ec2e6 +0x1222:  add    %edx,%eax
081ec2e8 +0x1224:  add    %eax,%eax
081ec2ea +0x1226:  mov    %ecx,%edx
081ec2ec +0x1228:  sub    %eax,%edx
081ec2ee +0x122a:  test   %edx,%edx
081ec2f0 +0x122c:  jne    081ec34f <+0x128b>
081ec2f2 +0x122e:  mov    -0xc1(%ebp),%ecx
081ec2f8 +0x1234:  mov    $0xcccccccd,%edx
081ec2fd +0x1239:  mov    %ecx,%eax
081ec2ff +0x123b:  mul    %edx
081ec301 +0x123d:  shr    $0x3,%edx
081ec304 +0x1240:  mov    %edx,%eax
081ec306 +0x1242:  shl    $0x2,%eax
081ec309 +0x1245:  add    %edx,%eax
081ec30b +0x1247:  add    %eax,%eax
081ec30d +0x1249:  mov    %ecx,%edx
081ec30f +0x124b:  sub    %eax,%edx
081ec311 +0x124d:  test   %edx,%edx
081ec313 +0x124f:  jne    081ec34f <+0x128b>
081ec315 +0x1251:  mov    0xc(%ebp),%eax
081ec318 +0x1254:  mov    %eax,(%esp)
081ec31b +0x1257:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081ec320 +0x125c:  movl   $0x0,0x14(%esp)
081ec328 +0x1264:  movl   $0x0,0x10(%esp)
081ec330 +0x126c:  movl   $0x1,0xc(%esp)
081ec338 +0x1274:  movl   $0xca,0x8(%esp)
081ec340 +0x127c:  mov    0xc(%ebp),%edx
081ec343 +0x127f:  mov    %edx,0x4(%esp)
081ec347 +0x1283:  mov    %eax,(%esp)
081ec34a +0x1286:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081ec34f +0x128b:  mov    0xc(%ebp),%eax
081ec352 +0x128e:  mov    %eax,(%esp)
081ec355 +0x1291:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081ec35a +0x1296:  movzwl -0xb5(%ebp),%eax
081ec361 +0x129d:  movzwl %ax,%ecx
081ec364 +0x12a0:  movzwl -0xb7(%ebp),%eax
081ec36b +0x12a7:  movzwl %ax,%edx
081ec36e +0x12aa:  mov    -0x74(%ebp),%eax
081ec371 +0x12ad:  movzwl %ax,%eax
081ec374 +0x12b0:  mov    %ecx,0xc(%esp)
081ec378 +0x12b4:  mov    %edx,0x8(%esp)
081ec37c +0x12b8:  mov    %eax,0x4(%esp)
081ec380 +0x12bc:  mov    0xc(%ebp),%eax
081ec383 +0x12bf:  mov    %eax,(%esp)
081ec386 +0x12c2:  call   080f908c <_ZN8WongWork13CHackAnalyzer20ValidateFixMobDiePosEP5CUserttt>  ; WongWork::CHackAnalyzer::ValidateFixMobDiePos(CUser*, unsigned short, unsigned short, unsigned short)
081ec38b +0x12c7:  jmp    081eccd6 <+0x1c12>
081ec390 +0x12cc:  mov    0xc(%ebp),%eax
081ec393 +0x12cf:  mov    %eax,(%esp)
081ec396 +0x12d2:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081ec39b +0x12d7:  cmp    $0xa,%eax
081ec39e +0x12da:  sete   %al
081ec3a1 +0x12dd:  test   %al,%al
081ec3a3 +0x12df:  je     081ec79c <+0x16d8>
081ec3a9 +0x12e5:  mov    0xc(%ebp),%eax
081ec3ac +0x12e8:  mov    %eax,(%esp)
081ec3af +0x12eb:  call   086552a4 <_ZN5CUser13getDeathTowerEv>  ; CUser::getDeathTower()
081ec3b4 +0x12f0:  mov    %eax,-0x28(%ebp)
081ec3b7 +0x12f3:  cmpl   $0x0,-0x28(%ebp)
081ec3bb +0x12f7:  je     081eccd6 <+0x1c12>
081ec3c1 +0x12fd:  movzwl -0xacc(%ebp),%eax
081ec3c8 +0x1304:  cmp    $0xffff,%ax
081ec3cc +0x1308:  je     081ec465 <+0x13a1>
081ec3d2 +0x130e:  movzwl -0xb5(%ebp),%eax
081ec3d9 +0x1315:  movzwl %ax,%esi
081ec3dc +0x1318:  movzwl -0xb7(%ebp),%eax
081ec3e3 +0x131f:  movzwl %ax,%ebx
081ec3e6 +0x1322:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
081ec3ed +0x1329:  call   081458ac <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x32f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x32f
081ec3f2 +0x132e:  mov    0xc(%ebp),%edx
081ec3f5 +0x1331:  add    $0x8e448,%edx
081ec3fb +0x1337:  movl   $0x3e8,0x18(%esp)
081ec403 +0x133f:  movl   $0x258,0x14(%esp)
081ec40b +0x1347:  movl   $0x258,0x10(%esp)
081ec413 +0x134f:  mov    %esi,0xc(%esp)
081ec417 +0x1353:  mov    %ebx,0x8(%esp)
081ec41b +0x1357:  mov    %eax,0x4(%esp)
081ec41f +0x135b:  mov    %edx,(%esp)
081ec422 +0x135e:  call   0823049c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5b46>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5b46
081ec427 +0x1363:  test   %al,%al
081ec429 +0x1365:  je     081ec465 <+0x13a1>
081ec42b +0x1367:  mov    0xc(%ebp),%eax
081ec42e +0x136a:  mov    %eax,(%esp)
081ec431 +0x136d:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081ec436 +0x1372:  movl   $0x0,0x14(%esp)
081ec43e +0x137a:  movl   $0x0,0x10(%esp)
081ec446 +0x1382:  movl   $0x1,0xc(%esp)
081ec44e +0x138a:  movl   $0xd4,0x8(%esp)
081ec456 +0x1392:  mov    0xc(%ebp),%edx
081ec459 +0x1395:  mov    %edx,0x4(%esp)
081ec45d +0x1399:  mov    %eax,(%esp)
081ec460 +0x139c:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081ec465 +0x13a1:  movl   $0x0,-0x3c(%ebp)
081ec46c +0x13a8:  jmp    081ec5ec <+0x1528>
081ec471 +0x13ad:  mov    -0x3c(%ebp),%eax
081ec474 +0x13b0:  add    $0x8,%eax
081ec477 +0x13b3:  movzwl -0xad1(%ebp,%eax,2),%eax
081ec47f +0x13bb:  cmp    $0x111,%ax
081ec483 +0x13bf:  jne    081ec5e8 <+0x1524>
081ec489 +0x13c5:  movl   $0x0,-0x24(%ebp)
081ec490 +0x13cc:  mov    -0x3c(%ebp),%eax
081ec493 +0x13cf:  add    $0x108,%eax
081ec498 +0x13d4:  movzwl -0xad1(%ebp,%eax,2),%eax
081ec4a0 +0x13dc:  movzwl %ax,%ebx
081ec4a3 +0x13df:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081ec4a8 +0x13e4:  mov    %ebx,0x4(%esp)
081ec4ac +0x13e8:  mov    %eax,(%esp)
081ec4af +0x13eb:  call   086c4b9c <_ZN9GameWorld15find_from_worldEt>  ; GameWorld::find_from_world(unsigned short)
081ec4b4 +0x13f0:  mov    %eax,-0x24(%ebp)
081ec4b7 +0x13f3:  cmpl   $0x0,-0x24(%ebp)
081ec4bb +0x13f7:  je     081ec5e8 <+0x1524>
081ec4c1 +0x13fd:  mov    -0x3c(%ebp),%eax
081ec4c4 +0x1400:  add    $0x408,%eax
081ec4c9 +0x1405:  movzwl -0xad1(%ebp,%eax,2),%eax
081ec4d1 +0x140d:  test   %ax,%ax
081ec4d4 +0x1410:  jne    081ec522 <+0x145e>
081ec4d6 +0x1412:  mov    0xc(%ebp),%eax
081ec4d9 +0x1415:  mov    %eax,(%esp)
081ec4dc +0x1418:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081ec4e1 +0x141d:  movl   $0x0,0x14(%esp)
081ec4e9 +0x1425:  movl   $0x0,0x10(%esp)
081ec4f1 +0x142d:  movl   $0x1,0xc(%esp)
081ec4f9 +0x1435:  movl   $0x6e,0x8(%esp)
081ec501 +0x143d:  mov    0xc(%ebp),%edx
081ec504 +0x1440:  mov    %edx,0x4(%esp)
081ec508 +0x1444:  mov    %eax,(%esp)
081ec50b +0x1447:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081ec510 +0x144c:  mov    -0x3c(%ebp),%eax
081ec513 +0x144f:  add    $0x408,%eax
081ec518 +0x1454:  movw   $0x1,-0xad1(%ebp,%eax,2)
081ec522 +0x145e:  mov    -0x3c(%ebp),%eax
081ec525 +0x1461:  add    $0x104,%eax
081ec52a +0x1466:  mov    -0xad1(%ebp,%eax,4),%eax
081ec531 +0x146d:  mov    -0x3c(%ebp),%edx
081ec534 +0x1470:  add    $0x408,%edx
081ec53a +0x1476:  movzwl -0xad1(%ebp,%edx,2),%edx
081ec542 +0x147e:  movzwl %dx,%edx
081ec545 +0x1481:  mov    %edx,-0xaec(%ebp)
081ec54b +0x1487:  mov    $0x0,%edx
081ec550 +0x148c:  divl   -0xaec(%ebp)
081ec556 +0x1492:  mov    %eax,-0x20(%ebp)
081ec559 +0x1495:  cmpl   $0x32c7,-0x20(%ebp)
081ec560 +0x149c:  jbe    081ec59c <+0x14d8>
081ec562 +0x149e:  mov    0xc(%ebp),%eax
081ec565 +0x14a1:  mov    %eax,(%esp)
081ec568 +0x14a4:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081ec56d +0x14a9:  movl   $0x0,0x14(%esp)
081ec575 +0x14b1:  movl   $0x0,0x10(%esp)
081ec57d +0x14b9:  movl   $0x1,0xc(%esp)
081ec585 +0x14c1:  movl   $0x6c,0x8(%esp)
081ec58d +0x14c9:  mov    0xc(%ebp),%edx
081ec590 +0x14cc:  mov    %edx,0x4(%esp)
081ec594 +0x14d0:  mov    %eax,(%esp)
081ec597 +0x14d3:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081ec59c +0x14d8:  call   08286984 <_ZN19CHackLog_OverDamage24GetDeathTowerLimitDamageEv>  ; CHackLog_OverDamage::GetDeathTowerLimitDamage()
081ec5a1 +0x14dd:  cmp    -0x20(%ebp),%eax
081ec5a4 +0x14e0:  setb   %al
081ec5a7 +0x14e3:  test   %al,%al
081ec5a9 +0x14e5:  je     081ec5e8 <+0x1524>
081ec5ab +0x14e7:  call   0828698e <_ZN19CHackLog_OverDamage31GetDeathTowerOverDamageHackTypeEv>  ; CHackLog_OverDamage::GetDeathTowerOverDamageHackType()
081ec5b0 +0x14ec:  mov    %eax,%ebx
081ec5b2 +0x14ee:  mov    -0x24(%ebp),%eax
081ec5b5 +0x14f1:  mov    %eax,(%esp)
081ec5b8 +0x14f4:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081ec5bd +0x14f9:  movl   $0x0,0x14(%esp)
081ec5c5 +0x1501:  movl   $0x0,0x10(%esp)
081ec5cd +0x1509:  movl   $0x1,0xc(%esp)
081ec5d5 +0x1511:  mov    %ebx,0x8(%esp)
081ec5d9 +0x1515:  mov    -0x24(%ebp),%edx
081ec5dc +0x1518:  mov    %edx,0x4(%esp)
081ec5e0 +0x151c:  mov    %eax,(%esp)
081ec5e3 +0x151f:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081ec5e8 +0x1524:  addl   $0x1,-0x3c(%ebp)
081ec5ec +0x1528:  movzbl -0xac2(%ebp),%eax
081ec5f3 +0x152f:  movzbl %al,%eax
081ec5f6 +0x1532:  cmp    -0x3c(%ebp),%eax
081ec5f9 +0x1535:  setg   %al
081ec5fc +0x1538:  test   %al,%al
081ec5fe +0x153a:  jne    081ec471 <+0x13ad>
081ec604 +0x1540:  movzwl -0xacc(%ebp),%eax
081ec60b +0x1547:  cmp    $0xffff,%ax
081ec60f +0x154b:  je     081ec623 <+0x155f>
081ec611 +0x154d:  mov    0xc(%ebp),%eax
081ec614 +0x1550:  movl   $0x0,0x8e480(%eax)
081ec61e +0x155a:  jmp    081ec71c <+0x1658>
081ec623 +0x155f:  mov    0xc(%ebp),%eax
081ec626 +0x1562:  mov    %eax,(%esp)
081ec629 +0x1565:  call   0822fe4e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54f8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54f8
081ec62e +0x156a:  movswl %ax,%ebx
081ec631 +0x156d:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
081ec636 +0x1572:  mov    %ebx,0x4(%esp)
081ec63a +0x1576:  mov    %eax,(%esp)
081ec63d +0x1579:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
081ec642 +0x157e:  mov    %eax,-0x1c(%ebp)
081ec645 +0x1581:  cmpl   $0x0,-0x1c(%ebp)
081ec649 +0x1585:  jne    081ec674 <+0x15b0>
081ec64b +0x1587:  movl   $0x0,0xc(%esp)
081ec653 +0x158f:  movl   $0x0,0x8(%esp)
081ec65b +0x1597:  movl   $&_ZZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081ec663 +0x159f:  movl   $0x6e7f,(%esp)
081ec66a +0x15a6:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ec66f +0x15ab:  jmp    081eccdb <+0x1c17>
081ec674 +0x15b0:  mov    0xc(%ebp),%eax
081ec677 +0x15b3:  mov    0x8e480(%eax),%eax
081ec67d +0x15b9:  lea    0x1(%eax),%edx
081ec680 +0x15bc:  mov    0xc(%ebp),%eax
081ec683 +0x15bf:  mov    %edx,0x8e480(%eax)
081ec689 +0x15c5:  mov    0xc(%ebp),%eax
081ec68c +0x15c8:  mov    0x8e480(%eax),%eax
081ec692 +0x15ce:  cmp    $0x4,%eax
081ec695 +0x15d1:  jbe    081ec71c <+0x1658>
081ec69b +0x15d7:  mov    0xc(%ebp),%eax
081ec69e +0x15da:  movl   $0x0,0x8e480(%eax)
081ec6a8 +0x15e4:  mov    0xc(%ebp),%eax
081ec6ab +0x15e7:  mov    %eax,(%esp)
081ec6ae +0x15ea:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081ec6b3 +0x15ef:  movl   $0x0,0x14(%esp)
081ec6bb +0x15f7:  movl   $0x1,0x10(%esp)
081ec6c3 +0x15ff:  movl   $0x1,0xc(%esp)
081ec6cb +0x1607:  movl   $0xcd,0x8(%esp)
081ec6d3 +0x160f:  mov    0xc(%ebp),%edx
081ec6d6 +0x1612:  mov    %edx,0x4(%esp)
081ec6da +0x1616:  mov    %eax,(%esp)
081ec6dd +0x1619:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081ec6e2 +0x161e:  mov    0xc(%ebp),%eax
081ec6e5 +0x1621:  mov    %eax,(%esp)
081ec6e8 +0x1624:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081ec6ed +0x1629:  movl   $0x0,0x14(%esp)
081ec6f5 +0x1631:  movl   $0x1,0x10(%esp)
081ec6fd +0x1639:  movl   $0x1,0xc(%esp)
081ec705 +0x1641:  movl   $0xce,0x8(%esp)
081ec70d +0x1649:  mov    0xc(%ebp),%edx
081ec710 +0x164c:  mov    %edx,0x4(%esp)
081ec714 +0x1650:  mov    %eax,(%esp)
081ec717 +0x1653:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081ec71c +0x1658:  movzwl -0xacc(%ebp),%eax
081ec723 +0x165f:  movzwl %ax,%edx
081ec726 +0x1662:  movzwl -0xace(%ebp),%eax
081ec72d +0x1669:  movzwl %ax,%eax
081ec730 +0x166c:  lea    -0x74(%ebp),%ecx
081ec733 +0x166f:  mov    %ecx,0x14(%esp)
081ec737 +0x1673:  lea    -0xadb(%ebp),%ecx
081ec73d +0x1679:  mov    %ecx,0x10(%esp)
081ec741 +0x167d:  mov    %edx,0xc(%esp)
081ec745 +0x1681:  mov    %eax,0x8(%esp)
081ec749 +0x1685:  mov    0xc(%ebp),%eax
081ec74c +0x1688:  mov    %eax,0x4(%esp)
081ec750 +0x168c:  mov    -0x28(%ebp),%eax
081ec753 +0x168f:  mov    %eax,(%esp)
081ec756 +0x1692:  call   0846483e <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi>  ; WongWork::CDeathTower::handleKillMonster(CUser*, unsigned short, unsigned short, MSG_MONSTER_DIE const&, int*)
081ec75b +0x1697:  mov    0xc(%ebp),%eax
081ec75e +0x169a:  mov    %eax,(%esp)
081ec761 +0x169d:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081ec766 +0x16a2:  movzwl -0xb5(%ebp),%eax
081ec76d +0x16a9:  movzwl %ax,%ecx
081ec770 +0x16ac:  movzwl -0xb7(%ebp),%eax
081ec777 +0x16b3:  movzwl %ax,%edx
081ec77a +0x16b6:  mov    -0x74(%ebp),%eax
081ec77d +0x16b9:  movzwl %ax,%eax
081ec780 +0x16bc:  mov    %ecx,0xc(%esp)
081ec784 +0x16c0:  mov    %edx,0x8(%esp)
081ec788 +0x16c4:  mov    %eax,0x4(%esp)
081ec78c +0x16c8:  mov    0xc(%ebp),%eax
081ec78f +0x16cb:  mov    %eax,(%esp)
081ec792 +0x16ce:  call   080f908c <_ZN8WongWork13CHackAnalyzer20ValidateFixMobDiePosEP5CUserttt>  ; WongWork::CHackAnalyzer::ValidateFixMobDiePos(CUser*, unsigned short, unsigned short, unsigned short)
081ec797 +0x16d3:  jmp    081eccd6 <+0x1c12>
081ec79c +0x16d8:  mov    0xc(%ebp),%eax
081ec79f +0x16db:  mov    %eax,(%esp)
081ec7a2 +0x16de:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081ec7a7 +0x16e3:  cmp    $0xc,%eax
081ec7aa +0x16e6:  sete   %al
081ec7ad +0x16e9:  test   %al,%al
081ec7af +0x16eb:  je     081ecabf <+0x19fb>
081ec7b5 +0x16f1:  movzwl -0xacc(%ebp),%eax
081ec7bc +0x16f8:  cmp    $0xffff,%ax
081ec7c0 +0x16fc:  jne    081ec836 <+0x1772>
081ec7c2 +0x16fe:  mov    0xc(%ebp),%eax
081ec7c5 +0x1701:  mov    %eax,(%esp)
081ec7c8 +0x1704:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081ec7cd +0x1709:  movl   $0x0,0x14(%esp)
081ec7d5 +0x1711:  movl   $0x0,0x10(%esp)
081ec7dd +0x1719:  movl   $0x1,0xc(%esp)
081ec7e5 +0x1721:  movl   $0xcd,0x8(%esp)
081ec7ed +0x1729:  mov    0xc(%ebp),%edx
081ec7f0 +0x172c:  mov    %edx,0x4(%esp)
081ec7f4 +0x1730:  mov    %eax,(%esp)
081ec7f7 +0x1733:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081ec7fc +0x1738:  mov    0xc(%ebp),%eax
081ec7ff +0x173b:  mov    %eax,(%esp)
081ec802 +0x173e:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081ec807 +0x1743:  movl   $0x0,0x14(%esp)
081ec80f +0x174b:  movl   $0x0,0x10(%esp)
081ec817 +0x1753:  movl   $0x1,0xc(%esp)
081ec81f +0x175b:  movl   $0xce,0x8(%esp)
081ec827 +0x1763:  mov    0xc(%ebp),%edx
081ec82a +0x1766:  mov    %edx,0x4(%esp)
081ec82e +0x176a:  mov    %eax,(%esp)
081ec831 +0x176d:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081ec836 +0x1772:  movl   $0x0,-0x3c(%ebp)
081ec83d +0x1779:  jmp    081eca69 <+0x19a5>
081ec842 +0x177e:  mov    -0x3c(%ebp),%eax
081ec845 +0x1781:  add    $0x8,%eax
081ec848 +0x1784:  movzwl -0xad1(%ebp,%eax,2),%eax
081ec850 +0x178c:  cmp    $0x111,%ax
081ec854 +0x1790:  jne    081eca65 <+0x19a1>
081ec85a +0x1796:  movl   $0x0,-0x18(%ebp)
081ec861 +0x179d:  mov    -0x3c(%ebp),%eax
081ec864 +0x17a0:  add    $0x108,%eax
081ec869 +0x17a5:  movzwl -0xad1(%ebp,%eax,2),%eax
081ec871 +0x17ad:  movzwl %ax,%ebx
081ec874 +0x17b0:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081ec879 +0x17b5:  mov    %ebx,0x4(%esp)
081ec87d +0x17b9:  mov    %eax,(%esp)
081ec880 +0x17bc:  call   086c4b9c <_ZN9GameWorld15find_from_worldEt>  ; GameWorld::find_from_world(unsigned short)
081ec885 +0x17c1:  mov    %eax,-0x18(%ebp)
081ec888 +0x17c4:  cmpl   $0x0,-0x18(%ebp)
081ec88c +0x17c8:  je     081eca65 <+0x19a1>
081ec892 +0x17ce:  mov    -0x3c(%ebp),%eax
081ec895 +0x17d1:  add    $0x104,%eax
081ec89a +0x17d6:  mov    -0xad1(%ebp,%eax,4),%eax
081ec8a1 +0x17dd:  mov    -0x3c(%ebp),%edx
081ec8a4 +0x17e0:  add    $0x408,%edx
081ec8aa +0x17e6:  movzwl -0xad1(%ebp,%edx,2),%edx
081ec8b2 +0x17ee:  movzwl %dx,%edx
081ec8b5 +0x17f1:  mov    %edx,-0xaec(%ebp)
081ec8bb +0x17f7:  mov    $0x0,%edx
081ec8c0 +0x17fc:  divl   -0xaec(%ebp)
081ec8c6 +0x1802:  mov    %eax,-0x14(%ebp)
081ec8c9 +0x1805:  call   082869ac <_ZN19CHackLog_OverDamage23GetBossTowerLimitDamageEv>  ; CHackLog_OverDamage::GetBossTowerLimitDamage()
081ec8ce +0x180a:  cmp    -0x14(%ebp),%eax
081ec8d1 +0x180d:  setb   %al
081ec8d4 +0x1810:  test   %al,%al
081ec8d6 +0x1812:  je     081ec965 <+0x18a1>
081ec8dc +0x1818:  call   082869b6 <_ZN19CHackLog_OverDamage30GetBossTowerOverDamageHackTypeEv>  ; CHackLog_OverDamage::GetBossTowerOverDamageHackType()
081ec8e1 +0x181d:  mov    %eax,%ebx
081ec8e3 +0x181f:  mov    -0x18(%ebp),%eax
081ec8e6 +0x1822:  mov    %eax,(%esp)
081ec8e9 +0x1825:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081ec8ee +0x182a:  movl   $0x0,0x14(%esp)
081ec8f6 +0x1832:  movl   $0x0,0x10(%esp)
081ec8fe +0x183a:  movl   $0x1,0xc(%esp)
081ec906 +0x1842:  mov    %ebx,0x8(%esp)
081ec90a +0x1846:  mov    -0x18(%ebp),%edx
081ec90d +0x1849:  mov    %edx,0x4(%esp)
081ec911 +0x184d:  mov    %eax,(%esp)
081ec914 +0x1850:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081ec919 +0x1855:  call   08286998 <_ZN19CHackLog_OverDamage24GetDungeonLimitMaxDamageEv>  ; CHackLog_OverDamage::GetDungeonLimitMaxDamage()
081ec91e +0x185a:  cmp    -0x14(%ebp),%eax
081ec921 +0x185d:  setb   %al
081ec924 +0x1860:  test   %al,%al
081ec926 +0x1862:  je     081ec965 <+0x18a1>
081ec928 +0x1864:  call   082869a2 <_ZN19CHackLog_OverDamage29GetHackTypeOverLimitMaxDamageEv>  ; CHackLog_OverDamage::GetHackTypeOverLimitMaxDamage()
081ec92d +0x1869:  mov    %eax,%ebx
081ec92f +0x186b:  mov    -0x18(%ebp),%eax
081ec932 +0x186e:  mov    %eax,(%esp)
081ec935 +0x1871:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081ec93a +0x1876:  movl   $0x0,0x14(%esp)
081ec942 +0x187e:  movl   $0x0,0x10(%esp)
081ec94a +0x1886:  movl   $0x1,0xc(%esp)
081ec952 +0x188e:  mov    %ebx,0x8(%esp)
081ec956 +0x1892:  mov    -0x18(%ebp),%edx
081ec959 +0x1895:  mov    %edx,0x4(%esp)
081ec95d +0x1899:  mov    %eax,(%esp)
081ec960 +0x189c:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081ec965 +0x18a1:  mov    -0xbd(%ebp),%eax
081ec96b +0x18a7:  cmp    $0x5dc,%eax
081ec970 +0x18ac:  jbe    081ec9b6 <+0x18f2>
081ec972 +0x18ae:  mov    0xc(%ebp),%eax
081ec975 +0x18b1:  mov    %eax,(%esp)
081ec978 +0x18b4:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081ec97d +0x18b9:  movl   $0x0,0x14(%esp)
081ec985 +0x18c1:  movl   $0x0,0x10(%esp)
081ec98d +0x18c9:  movl   $0x1,0xc(%esp)
081ec995 +0x18d1:  movl   $0x6f,0x8(%esp)
081ec99d +0x18d9:  mov    0xc(%ebp),%edx
081ec9a0 +0x18dc:  mov    %edx,0x4(%esp)
081ec9a4 +0x18e0:  mov    %eax,(%esp)
081ec9a7 +0x18e3:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081ec9ac +0x18e8:  movl   $0x1,-0xbd(%ebp)
081ec9b6 +0x18f2:  mov    -0x3c(%ebp),%eax
081ec9b9 +0x18f5:  add    $0x408,%eax
081ec9be +0x18fa:  movzwl -0xad1(%ebp,%eax,2),%eax
081ec9c6 +0x1902:  test   %ax,%ax
081ec9c9 +0x1905:  jne    081eca17 <+0x1953>
081ec9cb +0x1907:  mov    0xc(%ebp),%eax
081ec9ce +0x190a:  mov    %eax,(%esp)
081ec9d1 +0x190d:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081ec9d6 +0x1912:  movl   $0x0,0x14(%esp)
081ec9de +0x191a:  movl   $0x0,0x10(%esp)
081ec9e6 +0x1922:  movl   $0x1,0xc(%esp)
081ec9ee +0x192a:  movl   $0x6e,0x8(%esp)
081ec9f6 +0x1932:  mov    0xc(%ebp),%edx
081ec9f9 +0x1935:  mov    %edx,0x4(%esp)
081ec9fd +0x1939:  mov    %eax,(%esp)
081eca00 +0x193c:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081eca05 +0x1941:  mov    -0x3c(%ebp),%eax
081eca08 +0x1944:  add    $0x408,%eax
081eca0d +0x1949:  movw   $0x1,-0xad1(%ebp,%eax,2)
081eca17 +0x1953:  mov    -0xc1(%ebp),%eax
081eca1d +0x1959:  test   %eax,%eax
081eca1f +0x195b:  jne    081eca65 <+0x19a1>
081eca21 +0x195d:  mov    0xc(%ebp),%eax
081eca24 +0x1960:  mov    %eax,(%esp)
081eca27 +0x1963:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081eca2c +0x1968:  movl   $0x0,0x14(%esp)
081eca34 +0x1970:  movl   $0x0,0x10(%esp)
081eca3c +0x1978:  movl   $0x1,0xc(%esp)
081eca44 +0x1980:  movl   $0x6d,0x8(%esp)
081eca4c +0x1988:  mov    0xc(%ebp),%edx
081eca4f +0x198b:  mov    %edx,0x4(%esp)
081eca53 +0x198f:  mov    %eax,(%esp)
081eca56 +0x1992:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081eca5b +0x1997:  movl   $0x1,-0xc1(%ebp)
081eca65 +0x19a1:  addl   $0x1,-0x3c(%ebp)
081eca69 +0x19a5:  movzbl -0xac2(%ebp),%eax
081eca70 +0x19ac:  movzbl %al,%eax
081eca73 +0x19af:  cmp    -0x3c(%ebp),%eax
081eca76 +0x19b2:  setg   %al
081eca79 +0x19b5:  test   %al,%al
081eca7b +0x19b7:  jne    081ec842 <+0x177e>
081eca81 +0x19bd:  movzwl -0xacc(%ebp),%eax
081eca88 +0x19c4:  movzwl %ax,%edx
081eca8b +0x19c7:  movzwl -0xace(%ebp),%eax
081eca92 +0x19ce:  movzwl %ax,%eax
081eca95 +0x19d1:  movl   $0x0,0x10(%esp)
081eca9d +0x19d9:  lea    -0xadb(%ebp),%ecx
081ecaa3 +0x19df:  mov    %ecx,0xc(%esp)
081ecaa7 +0x19e3:  mov    %edx,0x8(%esp)
081ecaab +0x19e7:  mov    %eax,0x4(%esp)
081ecaaf +0x19eb:  mov    0xc(%ebp),%eax
081ecab2 +0x19ee:  mov    %eax,(%esp)
081ecab5 +0x19f1:  call   081468aa <_ZN6Global14CBossTowerFunc6DieMobEP5CUserttRK15MSG_MONSTER_DIEPi>  ; Global::CBossTowerFunc::DieMob(CUser*, unsigned short, unsigned short, MSG_MONSTER_DIE const&, int*)
081ecaba +0x19f6:  jmp    081eccd6 <+0x1c12>
081ecabf +0x19fb:  mov    0xc(%ebp),%eax
081ecac2 +0x19fe:  mov    %eax,(%esp)
081ecac5 +0x1a01:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081ecaca +0x1a06:  cmp    $0xd,%eax
081ecacd +0x1a09:  sete   %al
081ecad0 +0x1a0c:  test   %al,%al
081ecad2 +0x1a0e:  je     081ecb0a <+0x1a46>
081ecad4 +0x1a10:  movzwl -0xacc(%ebp),%eax
081ecadb +0x1a17:  movzwl %ax,%edx
081ecade +0x1a1a:  movzwl -0xace(%ebp),%eax
081ecae5 +0x1a21:  movzwl %ax,%eax
081ecae8 +0x1a24:  lea    -0xadb(%ebp),%ecx
081ecaee +0x1a2a:  mov    %ecx,0xc(%esp)
081ecaf2 +0x1a2e:  mov    %edx,0x8(%esp)
081ecaf6 +0x1a32:  mov    %eax,0x4(%esp)
081ecafa +0x1a36:  mov    0xc(%ebp),%eax
081ecafd +0x1a39:  mov    %eax,(%esp)
081ecb00 +0x1a3c:  call   08130bb8 <_ZN12advancealtar7Manager6dieMobEP5CUserttRK15MSG_MONSTER_DIE>  ; advancealtar::Manager::dieMob(CUser*, unsigned short, unsigned short, MSG_MONSTER_DIE const&)
081ecb05 +0x1a41:  jmp    081eccd6 <+0x1c12>
081ecb0a +0x1a46:  mov    0xc(%ebp),%eax
081ecb0d +0x1a49:  mov    %eax,(%esp)
081ecb10 +0x1a4c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081ecb15 +0x1a51:  cmp    $0x8,%eax
081ecb18 +0x1a54:  sete   %al
081ecb1b +0x1a57:  test   %al,%al
081ecb1d +0x1a59:  je     081eccd6 <+0x1c12>
081ecb23 +0x1a5f:  mov    0xc(%ebp),%eax
081ecb26 +0x1a62:  mov    %eax,(%esp)
081ecb29 +0x1a65:  call   0822fe84 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x552e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x552e
081ecb2e +0x1a6a:  movswl %ax,%ebx
081ecb31 +0x1a6d:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
081ecb36 +0x1a72:  mov    %ebx,0x4(%esp)
081ecb3a +0x1a76:  mov    %eax,(%esp)
081ecb3d +0x1a79:  call   082a25d0 <_ZN12CGameManager10GetWarRoomEi>  ; CGameManager::GetWarRoom(int)
081ecb42 +0x1a7e:  mov    %eax,-0x10(%ebp)
081ecb45 +0x1a81:  cmpl   $0x0,-0x10(%ebp)
081ecb49 +0x1a85:  jne    081ecb74 <+0x1ab0>
081ecb4b +0x1a87:  movl   $0x0,0xc(%esp)
081ecb53 +0x1a8f:  movl   $0x0,0x8(%esp)
081ecb5b +0x1a97:  movl   $&_ZZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081ecb63 +0x1a9f:  movl   $0x6ed0,(%esp)
081ecb6a +0x1aa6:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ecb6f +0x1aab:  jmp    081eccdb <+0x1c17>
081ecb74 +0x1ab0:  movzwl -0xacc(%ebp),%eax
081ecb7b +0x1ab7:  cmp    $0xffff,%ax
081ecb7f +0x1abb:  jne    081ecb8a <+0x1ac6>
081ecb81 +0x1abd:  movl   $0x0,-0xc(%ebp)
081ecb88 +0x1ac4:  jmp    081ecbd7 <+0x1b13>
081ecb8a +0x1ac6:  movzwl -0xacc(%ebp),%eax
081ecb91 +0x1acd:  movzwl %ax,%ebx
081ecb94 +0x1ad0:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081ecb99 +0x1ad5:  mov    %ebx,0x4(%esp)
081ecb9d +0x1ad9:  mov    %eax,(%esp)
081ecba0 +0x1adc:  call   086c4b9c <_ZN9GameWorld15find_from_worldEt>  ; GameWorld::find_from_world(unsigned short)
081ecba5 +0x1ae1:  mov    %eax,-0xc(%ebp)
081ecba8 +0x1ae4:  cmpl   $0x0,-0xc(%ebp)
081ecbac +0x1ae8:  jne    081ecbd7 <+0x1b13>
081ecbae +0x1aea:  movl   $0x0,0xc(%esp)
081ecbb6 +0x1af2:  movl   $0x0,0x8(%esp)
081ecbbe +0x1afa:  movl   $&_ZZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081ecbc6 +0x1b02:  movl   $0x6edb,(%esp)
081ecbcd +0x1b09:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ecbd2 +0x1b0e:  jmp    081eccdb <+0x1c17>
081ecbd7 +0x1b13:  movzwl -0xace(%ebp),%eax
081ecbde +0x1b1a:  movzwl %ax,%eax
081ecbe1 +0x1b1d:  mov    -0xc(%ebp),%edx
081ecbe4 +0x1b20:  mov    %edx,0xc(%esp)
081ecbe8 +0x1b24:  mov    %eax,0x8(%esp)
081ecbec +0x1b28:  mov    0xc(%ebp),%eax
081ecbef +0x1b2b:  mov    %eax,0x4(%esp)
081ecbf3 +0x1b2f:  mov    -0x10(%ebp),%eax
081ecbf6 +0x1b32:  mov    %eax,(%esp)
081ecbf9 +0x1b35:  call   086be1fe <_ZN7WarRoom17HandleMonsterKillEP5CUseriS1_>  ; WarRoom::HandleMonsterKill(CUser*, int, CUser*)
081ecbfe +0x1b3a:  xor    $0x1,%eax
081ecc01 +0x1b3d:  test   %al,%al
081ecc03 +0x1b3f:  je     081eccd6 <+0x1c12>
081ecc09 +0x1b45:  lea    -0x9c(%ebp),%eax
081ecc0f +0x1b4b:  mov    %eax,(%esp)
081ecc12 +0x1b4e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081ecc17 +0x1b53:  movl   $0x2a,0x8(%esp)
081ecc1f +0x1b5b:  movl   $0x1,0x4(%esp)
081ecc27 +0x1b63:  lea    -0x9c(%ebp),%eax
081ecc2d +0x1b69:  mov    %eax,(%esp)
081ecc30 +0x1b6c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081ecc35 +0x1b71:  movl   $0x0,0x4(%esp)
081ecc3d +0x1b79:  lea    -0x9c(%ebp),%eax
081ecc43 +0x1b7f:  mov    %eax,(%esp)
081ecc46 +0x1b82:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081ecc4b +0x1b87:  movl   $0x5,0x4(%esp)
081ecc53 +0x1b8f:  lea    -0x9c(%ebp),%eax
081ecc59 +0x1b95:  mov    %eax,(%esp)
081ecc5c +0x1b98:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081ecc61 +0x1b9d:  movzwl -0xace(%ebp),%eax
081ecc68 +0x1ba4:  movzwl %ax,%eax
081ecc6b +0x1ba7:  mov    %eax,0x4(%esp)
081ecc6f +0x1bab:  lea    -0x9c(%ebp),%eax
081ecc75 +0x1bb1:  mov    %eax,(%esp)
081ecc78 +0x1bb4:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081ecc7d +0x1bb9:  movl   $0x1,0x4(%esp)
081ecc85 +0x1bc1:  lea    -0x9c(%ebp),%eax
081ecc8b +0x1bc7:  mov    %eax,(%esp)
081ecc8e +0x1bca:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081ecc93 +0x1bcf:  lea    -0x9c(%ebp),%eax
081ecc99 +0x1bd5:  mov    %eax,0x4(%esp)
081ecc9d +0x1bd9:  mov    0xc(%ebp),%eax
081ecca0 +0x1bdc:  mov    %eax,(%esp)
081ecca3 +0x1bdf:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081ecca8 +0x1be4:  jmp    081eccc8 <+0x1c04>
081eccaa +0x1be6:  mov    %edx,%ebx
081eccac +0x1be8:  mov    %eax,%esi
081eccae +0x1bea:  lea    -0x9c(%ebp),%eax
081eccb4 +0x1bf0:  mov    %eax,(%esp)
081eccb7 +0x1bf3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081eccbc +0x1bf8:  mov    %esi,%eax
081eccbe +0x1bfa:  mov    %ebx,%edx
081eccc0 +0x1bfc:  mov    %eax,(%esp)
081eccc3 +0x1bff:  call   08ae3750 <_Unwind_Resume>
081eccc8 +0x1c04:  lea    -0x9c(%ebp),%eax
081eccce +0x1c0a:  mov    %eax,(%esp)
081eccd1 +0x1c0d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081eccd6 +0x1c12:  mov    $0x0,%eax
081eccdb +0x1c17:  lea    -0x8(%ebp),%esp
081eccde +0x1c1a:  add    $0x0,%esp
081ecce1 +0x1c1d:  pop    %ebx
081ecce2 +0x1c1e:  pop    %esi
081ecce3 +0x1c1f:  pop    %ebp
081ecce4 +0x1c20:  ret
081ecce5 +0x1c21:  nop
```

## 反编译 C

```c
// DisPatcher_DieMob::dispatch_sig @ 0x81eb0c4

/* DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_DieMob::dispatch_sig(DisPatcher_DieMob *this,CUser *param_1,PacketBuf *param_2)

{
  ushort uVar1;
  bool bVar2;
  ushort uVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  Secu_HackLogCheck *this_00;
  CHackAnalyzer *pCVar8;
  GameWorld *pGVar9;
  MSG_MONSTER_DIE local_adf [10];
  undefined1 auStack_ad5 [3];
  ushort local_ad2;
  ushort local_ad0;
  int iStack_ace;
  int iStack_aca;
  byte local_ac6 [2561];
  uint local_c5;
  uint local_c1;
  uchar uStack_bd;
  uchar uStack_bc;
  ushort local_bb;
  ushort local_b9;
  char cStack_b7;
  short sStack_b6;
  short sStack_b4;
  int iStack_b2;
  int iStack_ae;
  short sStack_aa;
  short sStack_a8;
  short sStack_a6;
  short sStack_a4;
  short sStack_a2;
  PacketGuard local_a0 [12];
  undefined4 local_94;
  uint local_90;
  PacketGuard local_8c [12];
  _Rb_tree_iterator<std::pair<int_const,int>> local_80 [4];
  ushort local_7c;
  uchar local_7a;
  uchar local_79;
  int local_78;
  uint local_74;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_70 [4];
  pair local_6c [8];
  pair<int_const,int> local_64 [8];
  ushort local_5c [4];
  undefined4 local_54;
  cMyTrace local_50 [16];
  int local_40;
  CParty *local_3c;
  CParty *local_38;
  CUser *local_34;
  uint local_30;
  CDeathTower *local_2c;
  CUser *local_28;
  uint local_24;
  int local_20;
  CUser *local_1c;
  uint local_18;
  WarRoom *local_14;
  CUser *local_10;
  
  local_78 = 0;
  cVar4 = PacketBuf::get_short(param_2,&local_ad2);
  if (cVar4 != '\x01') {
    uVar5 = LineFunc(0x6d09,"virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar5;
  }
  cVar4 = PacketBuf::get_short(param_2,&local_ad0);
  if (cVar4 != '\x01') {
    uVar5 = LineFunc(0x6d0a,"virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar5;
  }
  cVar4 = PacketBuf::get_int(param_2,&iStack_ace);
  if (cVar4 != '\x01') {
    uVar5 = LineFunc(0x6d0c,"virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar5;
  }
  cVar4 = PacketBuf::get_int(param_2,&iStack_aca);
  if (cVar4 != '\x01') {
    uVar5 = LineFunc(0x6d0d,"virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar5;
  }
  cVar4 = PacketBuf::get_int(param_2,&local_c5);
  if (cVar4 != '\x01') {
    uVar5 = LineFunc(0x6d0e,"virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar5;
  }
  cVar4 = PacketBuf::get_int(param_2,&local_c1);
  if (cVar4 != '\x01') {
    uVar5 = LineFunc(0x6d0f,"virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar5;
  }
  cVar4 = PacketBuf::get_byte(param_2,local_ac6);
  if (cVar4 != '\x01') {
    uVar5 = LineFunc(0x6d11,"virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar5;
  }
  for (local_40 = 0; local_40 < (int)(uint)local_ac6[0]; local_40 = local_40 + 1) {
    cVar4 = PacketBuf::get_short(param_2,(ushort *)(auStack_ad5 + (local_40 + 8) * 2));
    if (cVar4 != '\x01') {
      uVar5 = LineFunc(0x6d16,"virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)",0,0)
      ;
      return uVar5;
    }
    cVar4 = PacketBuf::get_short(param_2,(ushort *)(auStack_ad5 + (local_40 + 0x108) * 2));
    if (cVar4 != '\x01') {
      uVar5 = LineFunc(0x6d17,"virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)",0,0)
      ;
      return uVar5;
    }
    cVar4 = PacketBuf::get_int(param_2,(uint *)(auStack_ad5 + (local_40 + 0x104) * 4));
    if (cVar4 != '\x01') {
      uVar5 = LineFunc(0x6d18,"virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)",0,0)
      ;
      return uVar5;
    }
    cVar4 = PacketBuf::get_short(param_2,(ushort *)(auStack_ad5 + (local_40 + 0x408) * 2));
    if (cVar4 != '\x01') {
      uVar5 = LineFunc(0x6d19,"virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)",0,0)
      ;
      return uVar5;
    }
  }
  cVar4 = PacketBuf::get_short(param_2,&local_bb);
  if (cVar4 != '\x01') {
    uVar5 = LineFunc(0x6d25,"virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar5;
  }
  cVar4 = PacketBuf::get_short(param_2,&local_b9);
  if (cVar4 != '\x01') {
    uVar5 = LineFunc(0x6d26,"virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar5;
  }
  cVar4 = PacketBuf::get_byte(param_2,&uStack_bd);
  if (cVar4 != '\x01') {
    uVar5 = LineFunc(0x6d28,"virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar5;
  }
  cVar4 = PacketBuf::get_byte(param_2,&uStack_bc);
  if (cVar4 != '\x01') {
    uVar5 = LineFunc(0x6d2b,"virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar5;
  }
  local_79 = '\0';
  cVar4 = PacketBuf::get_byte(param_2,&local_79);
  if (cVar4 != '\x01') {
    uVar5 = LineFunc(0x6d2f,"virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar5;
  }
  local_7a = '\0';
  cVar4 = PacketBuf::get_byte(param_2,&local_7a);
  if (cVar4 != '\x01') {
    uVar5 = LineFunc(0x6d32,"virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar5;
  }
  if ((local_7a == '\0') || (iVar6 = CUser::get_state(param_1), iVar6 != 5)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    CUser::GetPartyIndex(param_1);
    iVar6 = G_CGameManager();
    local_3c = (CParty *)CGameManager::GetParty(iVar6);
    if (local_3c == (CParty *)0x0) {
      uVar5 = LineFunc(0x6d38,"virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)",0,0)
      ;
      return uVar5;
    }
    CParty::setMonsterMoveHack(local_3c);
  }
  cVar4 = PacketBuf::get_short(param_2,&local_7c);
  if (cVar4 == '\x01') {
    cVar4 = PacketBuf::get_byte(param_2,&cStack_b7);
    if (cVar4 == '\x01') {
      cVar4 = PacketBuf::get_int(param_2,&iStack_b2);
      if (cVar4 == '\x01') {
        cVar4 = PacketBuf::get_int(param_2,&iStack_ae);
        if (cVar4 == '\x01') {
          cVar4 = PacketBuf::get_short(param_2,&sStack_b6);
          if (cVar4 == '\x01') {
            cVar4 = PacketBuf::get_short(param_2,&sStack_b4);
            if (cVar4 == '\x01') {
              cVar4 = PacketBuf::get_short(param_2,&sStack_aa);
              if (cVar4 == '\x01') {
                cVar4 = PacketBuf::get_short(param_2,&sStack_a8);
                if (cVar4 == '\x01') {
                  cVar4 = PacketBuf::get_short(param_2,&sStack_a6);
                  if (cVar4 == '\x01') {
                    cVar4 = PacketBuf::get_short(param_2,&sStack_a4);
                    if (cVar4 == '\x01') {
                      cVar4 = PacketBuf::get_short(param_2,&sStack_a2);
                      if (cVar4 == '\x01') {
                        iVar6 = CUser::get_state(param_1);
                        if (iVar6 == 5) {
                          CUser::GetPartyIndex(param_1);
                          iVar6 = G_CGameManager();
                          local_38 = (CParty *)CGameManager::GetParty(iVar6);
                          if (local_38 == (CParty *)0x0) {
                            uVar5 = LineFunc(0x6d54,
                                             "virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)"
                                             ,0,0);
                            return uVar5;
                          }
                          uVar7 = std::
                                  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                  ::size((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                          *)(local_38 + 0x1844));
                          if (uVar7 < 200) {
                            local_74 = (uint)local_ad2;
                            std::
                            map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                            find((int *)local_80);
                            std::
                            map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                            end(local_70);
                            cVar4 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                                              (local_80,(_Rb_tree_iterator *)local_70);
                            if (cVar4 == '\0') {
                              local_54 = 1;
                              std::make_pair<unsigned_short&,int>(local_5c,(int *)&local_ad2);
                              std::pair<int_const,int>::pair<unsigned_short,int>
                                        (local_64,(pair *)local_5c);
                              std::
                              map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                              insert(local_6c);
                            }
                            else {
                              iVar6 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                                                (local_80);
                              *(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + 1;
                            }
                          }
                          if (local_79 == '\x01') {
                            CParty::DestroyPassiveObject(local_38,(uint)local_ad2);
                            return 0;
                          }
                          cVar4 = CParty::kill_monster
                                            (local_38,param_1,(uint)local_ad2,local_ad0,local_adf,
                                             &local_78);
                          if (cVar4 == '\x01') {
                            this_00 = (Secu_HackLogCheck *)CUser::GetHackCheck(param_1);
                            Secu_HackLogCheck::DieMob(this_00,local_adf);
                            uVar3 = local_b9;
                            uVar1 = local_bb;
                            if (local_ad0 == 0xffff) {
                              *(int *)(param_1 + 0x8e480) = *(int *)(param_1 + 0x8e480) + 1;
                              if (4 < *(uint *)(param_1 + 0x8e480)) {
                                *(undefined4 *)(param_1 + 0x8e480) = 0;
                                if (*(int *)(local_38 + 0xcac) == 0) {
                                  pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                                  WongWork::CHackAnalyzer::addServerHackCnt
                                            (pCVar8,param_1,0xcd,1,0,0);
                                }
                                else {
                                  iVar6 = CDungeon::get_index(*(CDungeon **)(local_38 + 0xcac));
                                  if (iVar6 == 0x2afe) {
                                    pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                                    WongWork::CHackAnalyzer::addServerHackCnt
                                              (pCVar8,param_1,0xcd,1,2,0);
                                  }
                                  else {
                                    pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                                    WongWork::CHackAnalyzer::addServerHackCnt
                                              (pCVar8,param_1,0xcd,1,0,0);
                                  }
                                }
                                cVar4 = CParty::checkBossRoom(local_38);
                                if (cVar4 != '\x01') {
                                  if (*(int *)(local_38 + 0xcac) == 0) {
                                    pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                                    WongWork::CHackAnalyzer::addServerHackCnt
                                              (pCVar8,param_1,0xce,1,0,0);
                                  }
                                  else {
                                    iVar6 = CDungeon::get_index(*(CDungeon **)(local_38 + 0xcac));
                                    if (iVar6 == 0x2afe) {
                                      pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                                      WongWork::CHackAnalyzer::addServerHackCnt
                                                (pCVar8,param_1,0xce,1,2,0);
                                    }
                                    else {
                                      pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                                      WongWork::CHackAnalyzer::addServerHackCnt
                                                (pCVar8,param_1,0xce,1,0,0);
                                    }
                                  }
                                }
                              }
                            }
                            else {
                              uVar7 = CSystemTime::getCurTickCount
                                                ((CSystemTime *)GlobalData::s_systemTime_);
                              cVar4 = CUser::st_monstorkill::Check
                                                ((st_monstorkill *)(param_1 + 0x8e448),uVar7,uVar1,
                                                 uVar3,600,600,1000);
                              if (cVar4 != '\0') {
                                pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                                WongWork::CHackAnalyzer::addServerHackCnt(pCVar8,param_1,0xd1,1,0,0)
                                ;
                              }
                              *(undefined4 *)(param_1 + 0x8e480) = 0;
                            }
                            for (local_40 = 0; local_40 < (int)(uint)local_ac6[0];
                                local_40 = local_40 + 1) {
                              if (*(short *)(auStack_ad5 + (local_40 + 8) * 2) == 0x111) {
                                local_34 = (CUser *)0x0;
                                uVar1 = *(ushort *)(auStack_ad5 + (local_40 + 0x108) * 2);
                                pGVar9 = (GameWorld *)G_GameWorld();
                                local_34 = (CUser *)GameWorld::find_from_world(pGVar9,uVar1);
                                if ((local_34 == (CUser *)0x0) ||
                                   (cVar4 = CParty::isMyMember(local_38,(uint)*(ushort *)
                                                                               (auStack_ad5 +
                                                                               (local_40 + 0x108) *
                                                                               2)), cVar4 == '\0'))
                                {
                                  bVar2 = false;
                                }
                                else {
                                  bVar2 = true;
                                }
                                if (bVar2) {
                                  local_90 = 0;
                                  local_94 = 0x6b;
                                  CHackLog_OverDamage::GetDungeonLimitDamageAndHackType
                                            (local_34,&local_90,(ENUM_HACKTYPE *)&local_94);
                                  if (0x5dc < local_c1) {
                                    pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                                    WongWork::CHackAnalyzer::addServerHackCnt
                                              (pCVar8,param_1,0x6f,1,0,0);
                                    uVar7 = local_c1;
                                    cMyTrace::cMyTrace(local_50,
                                                  "virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)"
                                                  ,0x6ddb,0);
                                    cMyTrace::operator()
                                              (local_50,
                                               "Position : PacketDispatcher.cpp ZeroHit or 1500up Hit    Hit Count : %d  :::::::::::: ENUM_HACKTYPE_KILL_MONSTER_ZERO_HIT"
                                               ,uVar7);
                                    local_c1 = 1;
                                  }
                                  if (local_c1 == 1) {
                                    iVar6 = CUser::GetParty(local_34);
                                    iVar6 = CDungeon::get_index(*(CDungeon **)(iVar6 + 0xcac));
                                    if (iVar6 != 0x2afe) goto LAB_081ec0bc;
                                    bVar2 = true;
                                  }
                                  else {
LAB_081ec0bc:
                                    bVar2 = false;
                                  }
                                  uVar7 = local_c5;
                                  if (bVar2) {
                                    pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(local_34);
                                    WongWork::CHackAnalyzer::addServerHackCnt
                                              (pCVar8,local_34,0x7f,1,uVar7,0);
                                  }
                                  if (local_c5 == 0) {
                                    pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                                    WongWork::CHackAnalyzer::addServerHackCnt
                                              (pCVar8,param_1,0x6d,1,0,0);
                                    local_c5 = 1;
                                  }
                                  if (*(short *)(auStack_ad5 + (local_40 + 0x408) * 2) == 0) {
                                    pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                                    WongWork::CHackAnalyzer::addServerHackCnt
                                              (pCVar8,param_1,0x6e,1,0,0);
                                    *(undefined2 *)(auStack_ad5 + (local_40 + 0x408) * 2) = 1;
                                  }
                                  local_30 = *(uint *)(auStack_ad5 + (local_40 + 0x104) * 4) /
                                             (uint)*(ushort *)(auStack_ad5 + (local_40 + 0x408) * 2)
                                  ;
                                  if ((local_90 <
                                       *(uint *)(auStack_ad5 + (local_40 + 0x104) * 4) /
                                       (uint)*(ushort *)(auStack_ad5 + (local_40 + 0x408) * 2)) &&
                                     ((*(int *)(local_38 + 0xcac) == 0 ||
                                      (iVar6 = CDungeon::get_index(*(CDungeon **)(local_38 + 0xcac))
                                      , iVar6 != 0x2afe)))) {
                                    bVar2 = true;
                                  }
                                  else {
                                    bVar2 = false;
                                  }
                                  uVar5 = local_94;
                                  if (bVar2) {
                                    pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(local_34);
                                    WongWork::CHackAnalyzer::addServerHackCnt
                                              (pCVar8,local_34,uVar5,1,0,0);
                                    uVar7 = CHackLog_OverDamage::GetDungeonLimitMaxDamage();
                                    if (uVar7 < local_30) {
                                      uVar5 = CHackLog_OverDamage::GetHackTypeOverLimitMaxDamage();
                                      pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(local_34);
                                      WongWork::CHackAnalyzer::addServerHackCnt
                                                (pCVar8,local_34,uVar5,1,0,0);
                                    }
                                  }
                                }
                              }
                            }
                            if ((local_c1 % 10 == 0) && (local_c5 % 10 == 0)) {
                              pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                              WongWork::CHackAnalyzer::addServerHackCnt(pCVar8,param_1,0xca,1,0,0);
                            }
                            CUser::getHackAnalyzer(param_1);
                            WongWork::CHackAnalyzer::ValidateFixMobDiePos
                                      (param_1,(ushort)local_78,local_bb,local_b9);
                          }
                          else {
                            PacketGuard::PacketGuard(local_8c);
                    /* try { // try from 081ebbaa to 081ebc21 has its CatchHandler @ 081ebc24 */
                            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_8c,1,0x2a);
                            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_8c,0);
                            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_8c,5);
                            InterfacePacketBuf::put_short
                                      ((InterfacePacketBuf *)local_8c,(uint)local_ad2);
                            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_8c,true);
                            CUser::Send(param_1,local_8c);
                            PacketGuard::~PacketGuard(local_8c);
                          }
                        }
                        else {
                          iVar6 = CUser::get_state(param_1);
                          if (iVar6 == 10) {
                            local_2c = (CDeathTower *)CUser::getDeathTower(param_1);
                            uVar3 = local_b9;
                            uVar1 = local_bb;
                            if (local_2c != (CDeathTower *)0x0) {
                              if (local_ad0 != 0xffff) {
                                uVar7 = CSystemTime::getCurTickCount
                                                  ((CSystemTime *)GlobalData::s_systemTime_);
                                cVar4 = CUser::st_monstorkill::Check
                                                  ((st_monstorkill *)(param_1 + 0x8e448),uVar7,uVar1
                                                   ,uVar3,600,600,1000);
                                if (cVar4 != '\0') {
                                  pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                                  WongWork::CHackAnalyzer::addServerHackCnt
                                            (pCVar8,param_1,0xd4,1,0,0);
                                }
                              }
                              for (local_40 = 0; local_40 < (int)(uint)local_ac6[0];
                                  local_40 = local_40 + 1) {
                                if (*(short *)(auStack_ad5 + (local_40 + 8) * 2) == 0x111) {
                                  local_28 = (CUser *)0x0;
                                  uVar1 = *(ushort *)(auStack_ad5 + (local_40 + 0x108) * 2);
                                  pGVar9 = (GameWorld *)G_GameWorld();
                                  local_28 = (CUser *)GameWorld::find_from_world(pGVar9,uVar1);
                                  if (local_28 != (CUser *)0x0) {
                                    if (*(short *)(auStack_ad5 + (local_40 + 0x408) * 2) == 0) {
                                      pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                                      WongWork::CHackAnalyzer::addServerHackCnt
                                                (pCVar8,param_1,0x6e,1,0,0);
                                      *(undefined2 *)(auStack_ad5 + (local_40 + 0x408) * 2) = 1;
                                    }
                                    local_24 = *(uint *)(auStack_ad5 + (local_40 + 0x104) * 4) /
                                               (uint)*(ushort *)
                                                      (auStack_ad5 + (local_40 + 0x408) * 2);
                                    if (12999 < local_24) {
                                      pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                                      WongWork::CHackAnalyzer::addServerHackCnt
                                                (pCVar8,param_1,0x6c,1,0,0);
                                    }
                                    uVar7 = CHackLog_OverDamage::GetDeathTowerLimitDamage();
                                    if (uVar7 < local_24) {
                                      uVar5 = CHackLog_OverDamage::GetDeathTowerOverDamageHackType()
                                      ;
                                      pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(local_28);
                                      WongWork::CHackAnalyzer::addServerHackCnt
                                                (pCVar8,local_28,uVar5,1,0,0);
                                    }
                                  }
                                }
                              }
                              if (local_ad0 == 0xffff) {
                                CUser::GetPartyIndex(param_1);
                                iVar6 = G_CGameManager();
                                local_20 = CGameManager::GetParty(iVar6);
                                if (local_20 == 0) {
                                  uVar5 = LineFunc(0x6e7f,
                                                  "virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)"
                                                  ,0,0);
                                  return uVar5;
                                }
                                *(int *)(param_1 + 0x8e480) = *(int *)(param_1 + 0x8e480) + 1;
                                if (4 < *(uint *)(param_1 + 0x8e480)) {
                                  *(undefined4 *)(param_1 + 0x8e480) = 0;
                                  pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                                  WongWork::CHackAnalyzer::addServerHackCnt
                                            (pCVar8,param_1,0xcd,1,1,0);
                                  pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                                  WongWork::CHackAnalyzer::addServerHackCnt
                                            (pCVar8,param_1,0xce,1,1,0);
                                }
                              }
                              else {
                                *(undefined4 *)(param_1 + 0x8e480) = 0;
                              }
                              WongWork::CDeathTower::handleKillMonster
                                        (local_2c,param_1,local_ad2,local_ad0,local_adf,&local_78);
                              CUser::getHackAnalyzer(param_1);
                              WongWork::CHackAnalyzer::ValidateFixMobDiePos
                                        (param_1,(ushort)local_78,local_bb,local_b9);
                            }
                          }
                          else {
                            iVar6 = CUser::get_state(param_1);
                            if (iVar6 == 0xc) {
                              if (local_ad0 == 0xffff) {
                                pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                                WongWork::CHackAnalyzer::addServerHackCnt(pCVar8,param_1,0xcd,1,0,0)
                                ;
                                pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                                WongWork::CHackAnalyzer::addServerHackCnt(pCVar8,param_1,0xce,1,0,0)
                                ;
                              }
                              for (local_40 = 0; local_40 < (int)(uint)local_ac6[0];
                                  local_40 = local_40 + 1) {
                                if (*(short *)(auStack_ad5 + (local_40 + 8) * 2) == 0x111) {
                                  local_1c = (CUser *)0x0;
                                  uVar1 = *(ushort *)(auStack_ad5 + (local_40 + 0x108) * 2);
                                  pGVar9 = (GameWorld *)G_GameWorld();
                                  local_1c = (CUser *)GameWorld::find_from_world(pGVar9,uVar1);
                                  if (local_1c != (CUser *)0x0) {
                                    local_18 = *(uint *)(auStack_ad5 + (local_40 + 0x104) * 4) /
                                               (uint)*(ushort *)
                                                      (auStack_ad5 + (local_40 + 0x408) * 2);
                                    uVar7 = CHackLog_OverDamage::GetBossTowerLimitDamage();
                                    if (uVar7 < local_18) {
                                      uVar5 = CHackLog_OverDamage::GetBossTowerOverDamageHackType();
                                      pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(local_1c);
                                      WongWork::CHackAnalyzer::addServerHackCnt
                                                (pCVar8,local_1c,uVar5,1,0,0);
                                      uVar7 = CHackLog_OverDamage::GetDungeonLimitMaxDamage();
                                      if (uVar7 < local_18) {
                                        uVar5 = CHackLog_OverDamage::GetHackTypeOverLimitMaxDamage()
                                        ;
                                        pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(local_1c);
                                        WongWork::CHackAnalyzer::addServerHackCnt
                                                  (pCVar8,local_1c,uVar5,1,0,0);
                                      }
                                    }
                                    if (0x5dc < local_c1) {
                                      pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                                      WongWork::CHackAnalyzer::addServerHackCnt
                                                (pCVar8,param_1,0x6f,1,0,0);
                                      local_c1 = 1;
                                    }
                                    if (*(short *)(auStack_ad5 + (local_40 + 0x408) * 2) == 0) {
                                      pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                                      WongWork::CHackAnalyzer::addServerHackCnt
                                                (pCVar8,param_1,0x6e,1,0,0);
                                      *(undefined2 *)(auStack_ad5 + (local_40 + 0x408) * 2) = 1;
                                    }
                                    if (local_c5 == 0) {
                                      pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                                      WongWork::CHackAnalyzer::addServerHackCnt
                                                (pCVar8,param_1,0x6d,1,0,0);
                                      local_c5 = 1;
                                    }
                                  }
                                }
                              }
                              Global::CBossTowerFunc::DieMob
                                        (param_1,local_ad2,local_ad0,local_adf,(int *)0x0);
                            }
                            else {
                              iVar6 = CUser::get_state(param_1);
                              if (iVar6 == 0xd) {
                                advancealtar::Manager::dieMob(param_1,local_ad2,local_ad0,local_adf)
                                ;
                              }
                              else {
                                iVar6 = CUser::get_state(param_1);
                                if (iVar6 == 8) {
                                  CUser::GetWarRoomIndex(param_1);
                                  iVar6 = G_CGameManager();
                                  local_14 = (WarRoom *)CGameManager::GetWarRoom(iVar6);
                                  if (local_14 == (WarRoom *)0x0) {
                                    uVar5 = LineFunc(0x6ed0,
                                                  "virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)"
                                                  ,0,0);
                                    return uVar5;
                                  }
                                  if (local_ad0 == 0xffff) {
                                    local_10 = (CUser *)0x0;
                                  }
                                  else {
                                    pGVar9 = (GameWorld *)G_GameWorld();
                                    local_10 = (CUser *)GameWorld::find_from_world(pGVar9,local_ad0)
                                    ;
                                    if (local_10 == (CUser *)0x0) {
                                      uVar5 = LineFunc(0x6edb,
                                                  "virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)"
                                                  ,0,0);
                                      return uVar5;
                                    }
                                  }
                                  cVar4 = WarRoom::HandleMonsterKill
                                                    (local_14,param_1,(uint)local_ad2,local_10);
                                  if (cVar4 != '\x01') {
                                    PacketGuard::PacketGuard(local_a0);
                    /* try { // try from 081ecc30 to 081ecca7 has its CatchHandler @ 081eccaa */
                                    InterfacePacketBuf::put_header
                                              ((InterfacePacketBuf *)local_a0,1,0x2a);
                                    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a0,0);
                                    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a0,5);
                                    InterfacePacketBuf::put_short
                                              ((InterfacePacketBuf *)local_a0,(uint)local_ad2);
                                    InterfacePacketBuf::finalize
                                              ((InterfacePacketBuf *)local_a0,true);
                                    CUser::Send(param_1,local_a0);
                                    PacketGuard::~PacketGuard(local_a0);
                                  }
                                }
                              }
                            }
                          }
                        }
                        uVar5 = 0;
                      }
                      else {
                        uVar5 = LineFunc(0x6d4a,
                                         "virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)"
                                         ,0,0);
                      }
                    }
                    else {
                      uVar5 = LineFunc(0x6d49,
                                       "virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)"
                                       ,0,0);
                    }
                  }
                  else {
                    uVar5 = LineFunc(0x6d48,
                                     "virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)"
                                     ,0,0);
                  }
                }
                else {
                  uVar5 = LineFunc(0x6d47,
                                   "virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                }
              }
              else {
                uVar5 = LineFunc(0x6d46,
                                 "virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)",0
                                 ,0);
              }
            }
            else {
              uVar5 = LineFunc(0x6d45,
                               "virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)",0,0
                              );
            }
          }
          else {
            uVar5 = LineFunc(0x6d44,
                             "virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)",0,0);
          }
        }
        else {
          uVar5 = LineFunc(0x6d43,"virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)",
                           0,0);
        }
      }
      else {
        uVar5 = LineFunc(0x6d42,"virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)",0,
                         0);
      }
    }
    else {
      uVar5 = LineFunc(0x6d41,"virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)",0,0)
      ;
    }
  }
  else {
    uVar5 = LineFunc(0x6d3e,"virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)",0,0);
  }
  return uVar5;
}
```
