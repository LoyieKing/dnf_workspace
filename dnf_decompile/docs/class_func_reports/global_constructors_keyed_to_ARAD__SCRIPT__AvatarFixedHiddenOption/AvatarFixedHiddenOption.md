# AvatarFixedHiddenOption

`_GLOBAL__I__ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC2Ev`

`global constructors keyed to ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to ARAD::SCRIPT::AvatarFixedHiddenOption` | `0x088b01cc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088b01cc  _GLOBAL__I__ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC2Ev
#           global constructors keyed to ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption()
# range [0x088b01cc, 0x088b0dbb]
088b01cc +0x000:  push   %ebp
088b01cd +0x001:  mov    %esp,%ebp
088b01cf +0x003:  sub    $0x18,%esp
088b01d2 +0x006:  movl   $0xffff,0x4(%esp)
088b01da +0x00e:  movl   $0x1,(%esp)
088b01e1 +0x015:  call   088b018c <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
088b01e6 +0x01a:  leave
088b01e7 +0x01b:  ret
088b01e8 +0x01c:  push   %ebp
088b01e9 +0x01d:  mov    %esp,%ebp
088b01eb +0x01f:  mov    0x8(%ebp),%eax
088b01ee +0x022:  mov    0xc(%ebp),%edx
088b01f1 +0x025:  mov    %edx,(%eax)
088b01f3 +0x027:  mov    0x8(%ebp),%eax
088b01f6 +0x02a:  movb   $0x0,0x4(%eax)
088b01fa +0x02e:  mov    0x8(%ebp),%eax
088b01fd +0x031:  mov    $0x0,%edx
088b0202 +0x036:  mov    %edx,0x8(%eax)
088b0205 +0x039:  mov    0x8(%ebp),%eax
088b0208 +0x03c:  mov    0x10(%ebp),%edx
088b020b +0x03f:  mov    %edx,0xc(%eax)
088b020e +0x042:  mov    0x8(%ebp),%eax
088b0211 +0x045:  mov    0x14(%ebp),%edx
088b0214 +0x048:  mov    %edx,0x10(%eax)
088b0217 +0x04b:  pop    %ebp
088b0218 +0x04c:  ret
088b0219 +0x04d:  nop
088b021a +0x04e:  push   %ebp
088b021b +0x04f:  mov    %esp,%ebp
088b021d +0x051:  mov    0x8(%ebp),%eax
088b0220 +0x054:  mov    0xc(%ebp),%edx
088b0223 +0x057:  mov    %edx,(%eax)
088b0225 +0x059:  mov    0x8(%ebp),%eax
088b0228 +0x05c:  movb   $0x1,0x4(%eax)
088b022c +0x060:  mov    0x8(%ebp),%eax
088b022f +0x063:  mov    0x10(%ebp),%edx
088b0232 +0x066:  mov    %edx,0x8(%eax)
088b0235 +0x069:  mov    0x8(%ebp),%eax
088b0238 +0x06c:  movl   $0x0,0xc(%eax)
088b023f +0x073:  mov    0x8(%ebp),%eax
088b0242 +0x076:  mov    0x14(%ebp),%edx
088b0245 +0x079:  mov    %edx,0x10(%eax)
088b0248 +0x07c:  pop    %ebp
088b0249 +0x07d:  ret
088b024a +0x07e:  push   %ebp
088b024b +0x07f:  mov    %esp,%ebp
088b024d +0x081:  sub    $0x18,%esp
088b0250 +0x084:  mov    0x8(%ebp),%eax
088b0253 +0x087:  mov    %eax,(%esp)
088b0256 +0x08a:  call   088b033c <+0x170>
088b025b +0x08f:  leave
088b025c +0x090:  ret
088b025d +0x091:  nop
088b025e +0x092:  push   %ebp
088b025f +0x093:  mov    %esp,%ebp
088b0261 +0x095:  push   %esi
088b0262 +0x096:  push   %ebx
088b0263 +0x097:  sub    $0x10,%esp
088b0266 +0x09a:  mov    0x8(%ebp),%eax
088b0269 +0x09d:  mov    %eax,(%esp)
088b026c +0x0a0:  call   088b03be <+0x1f2>
088b0271 +0x0a5:  mov    0x8(%ebp),%edx
088b0274 +0x0a8:  mov    0x4(%edx),%ecx
088b0277 +0x0ab:  mov    0x8(%ebp),%edx
088b027a +0x0ae:  mov    (%edx),%edx
088b027c +0x0b0:  mov    %eax,0x8(%esp)
088b0280 +0x0b4:  mov    %ecx,0x4(%esp)
088b0284 +0x0b8:  mov    %edx,(%esp)
088b0287 +0x0bb:  call   088b03c6 <+0x1fa>
088b028c +0x0c0:  jmp    088b02a9 <+0xdd>
088b028e +0x0c2:  mov    %edx,%ebx
088b0290 +0x0c4:  mov    %eax,%esi
088b0292 +0x0c6:  mov    0x8(%ebp),%eax
088b0295 +0x0c9:  mov    %eax,(%esp)
088b0298 +0x0cc:  call   088b0350 <+0x184>
088b029d +0x0d1:  mov    %esi,%eax
088b029f +0x0d3:  mov    %ebx,%edx
088b02a1 +0x0d5:  mov    %eax,(%esp)
088b02a4 +0x0d8:  call   08ae3750 <_Unwind_Resume>
088b02a9 +0x0dd:  mov    0x8(%ebp),%eax
088b02ac +0x0e0:  mov    %eax,(%esp)
088b02af +0x0e3:  call   088b0350 <+0x184>
088b02b4 +0x0e8:  add    $0x10,%esp
088b02b7 +0x0eb:  pop    %ebx
088b02b8 +0x0ec:  pop    %esi
088b02b9 +0x0ed:  pop    %ebp
088b02ba +0x0ee:  ret
088b02bb +0x0ef:  nop
088b02bc +0x0f0:  push   %ebp
088b02bd +0x0f1:  mov    %esp,%ebp
088b02bf +0x0f3:  sub    $0x18,%esp
088b02c2 +0x0f6:  mov    0xc(%ebp),%eax
088b02c5 +0x0f9:  mov    %eax,(%esp)
088b02c8 +0x0fc:  call   088b03e0 <+0x214>
088b02cd +0x101:  mov    %eax,0x4(%esp)
088b02d1 +0x105:  mov    0x8(%ebp),%eax
088b02d4 +0x108:  mov    %eax,(%esp)
088b02d7 +0x10b:  call   088b03e8 <+0x21c>
088b02dc +0x110:  leave
088b02dd +0x111:  ret
088b02de +0x112:  push   %ebp
088b02df +0x113:  mov    %esp,%ebp
088b02e1 +0x115:  sub    $0x18,%esp
088b02e4 +0x118:  mov    0xc(%ebp),%eax
088b02e7 +0x11b:  mov    %eax,(%esp)
088b02ea +0x11e:  call   088b0471 <+0x2a5>
088b02ef +0x123:  mov    %eax,%edx
088b02f1 +0x125:  mov    0x8(%ebp),%eax
088b02f4 +0x128:  mov    %edx,(%eax)
088b02f6 +0x12a:  mov    0x10(%ebp),%eax
088b02f9 +0x12d:  mov    %eax,(%esp)
088b02fc +0x130:  call   08080ff4 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x101a>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x101a
088b0301 +0x135:  mov    (%eax),%edx
088b0303 +0x137:  mov    0x8(%ebp),%eax
088b0306 +0x13a:  mov    %edx,0x4(%eax)
088b0309 +0x13d:  leave
088b030a +0x13e:  ret
088b030b +0x13f:  nop
088b030c +0x140:  push   %ebp
088b030d +0x141:  mov    %esp,%ebp
088b030f +0x143:  sub    $0x18,%esp
088b0312 +0x146:  mov    0x8(%ebp),%eax
088b0315 +0x149:  mov    (%eax),%eax
088b0317 +0x14b:  mov    %eax,0x4(%esp)
088b031b +0x14f:  mov    0x8(%ebp),%eax
088b031e +0x152:  mov    %eax,(%esp)
088b0321 +0x155:  call   088b047a <+0x2ae>
088b0326 +0x15a:  leave
088b0327 +0x15b:  ret
088b0328 +0x15c:  push   %ebp
088b0329 +0x15d:  mov    %esp,%ebp
088b032b +0x15f:  sub    $0x18,%esp
088b032e +0x162:  mov    0x8(%ebp),%eax
088b0331 +0x165:  mov    %eax,(%esp)
088b0334 +0x168:  call   088b04e0 <+0x314>
088b0339 +0x16d:  leave
088b033a +0x16e:  ret
088b033b +0x16f:  nop
088b033c +0x170:  push   %ebp
088b033d +0x171:  mov    %esp,%ebp
088b033f +0x173:  sub    $0x18,%esp
088b0342 +0x176:  mov    0x8(%ebp),%eax
088b0345 +0x179:  mov    %eax,(%esp)
088b0348 +0x17c:  call   088b04b0 <+0x2e4>
088b034d +0x181:  leave
088b034e +0x182:  ret
088b034f +0x183:  nop
088b0350 +0x184:  push   %ebp
088b0351 +0x185:  mov    %esp,%ebp
088b0353 +0x187:  push   %esi
088b0354 +0x188:  push   %ebx
088b0355 +0x189:  sub    $0x10,%esp
088b0358 +0x18c:  mov    0x8(%ebp),%eax
088b035b +0x18f:  mov    0x8(%eax),%eax
088b035e +0x192:  mov    %eax,%edx
088b0360 +0x194:  mov    0x8(%ebp),%eax
088b0363 +0x197:  mov    (%eax),%eax
088b0365 +0x199:  mov    %edx,%ecx
088b0367 +0x19b:  sub    %eax,%ecx
088b0369 +0x19d:  mov    %ecx,%eax
088b036b +0x19f:  sar    $0x2,%eax
088b036e +0x1a2:  imul   $0xcccccccd,%eax,%eax
088b0374 +0x1a8:  mov    %eax,%edx
088b0376 +0x1aa:  mov    0x8(%ebp),%eax
088b0379 +0x1ad:  mov    (%eax),%eax
088b037b +0x1af:  mov    %edx,0x8(%esp)
088b037f +0x1b3:  mov    %eax,0x4(%esp)
088b0383 +0x1b7:  mov    0x8(%ebp),%eax
088b0386 +0x1ba:  mov    %eax,(%esp)
088b0389 +0x1bd:  call   088b04f4 <+0x328>
088b038e +0x1c2:  jmp    088b03ab <+0x1df>
088b0390 +0x1c4:  mov    %edx,%ebx
088b0392 +0x1c6:  mov    %eax,%esi
088b0394 +0x1c8:  mov    0x8(%ebp),%eax
088b0397 +0x1cb:  mov    %eax,(%esp)
088b039a +0x1ce:  call   088b0328 <+0x15c>
088b039f +0x1d3:  mov    %esi,%eax
088b03a1 +0x1d5:  mov    %ebx,%edx
088b03a3 +0x1d7:  mov    %eax,(%esp)
088b03a6 +0x1da:  call   08ae3750 <_Unwind_Resume>
088b03ab +0x1df:  mov    0x8(%ebp),%eax
088b03ae +0x1e2:  mov    %eax,(%esp)
088b03b1 +0x1e5:  call   088b0328 <+0x15c>
088b03b6 +0x1ea:  add    $0x10,%esp
088b03b9 +0x1ed:  pop    %ebx
088b03ba +0x1ee:  pop    %esi
088b03bb +0x1ef:  pop    %ebp
088b03bc +0x1f0:  ret
088b03bd +0x1f1:  nop
088b03be +0x1f2:  push   %ebp
088b03bf +0x1f3:  mov    %esp,%ebp
088b03c1 +0x1f5:  mov    0x8(%ebp),%eax
088b03c4 +0x1f8:  pop    %ebp
088b03c5 +0x1f9:  ret
088b03c6 +0x1fa:  push   %ebp
088b03c7 +0x1fb:  mov    %esp,%ebp
088b03c9 +0x1fd:  sub    $0x18,%esp
088b03cc +0x200:  mov    0xc(%ebp),%eax
088b03cf +0x203:  mov    %eax,0x4(%esp)
088b03d3 +0x207:  mov    0x8(%ebp),%eax
088b03d6 +0x20a:  mov    %eax,(%esp)
088b03d9 +0x20d:  call   088b051b <+0x34f>
088b03de +0x212:  leave
088b03df +0x213:  ret
088b03e0 +0x214:  push   %ebp
088b03e1 +0x215:  mov    %esp,%ebp
088b03e3 +0x217:  mov    0x8(%ebp),%eax
088b03e6 +0x21a:  pop    %ebp
088b03e7 +0x21b:  ret
088b03e8 +0x21c:  push   %ebp
088b03e9 +0x21d:  mov    %esp,%ebp
088b03eb +0x21f:  push   %ebx
088b03ec +0x220:  sub    $0x24,%esp
088b03ef +0x223:  mov    0x8(%ebp),%eax
088b03f2 +0x226:  mov    0x4(%eax),%edx
088b03f5 +0x229:  mov    0x8(%ebp),%eax
088b03f8 +0x22c:  mov    0x8(%eax),%eax
088b03fb +0x22f:  cmp    %eax,%edx
088b03fd +0x231:  je     088b0434 <+0x268>
088b03ff +0x233:  mov    0xc(%ebp),%eax
088b0402 +0x236:  mov    %eax,(%esp)
088b0405 +0x239:  call   088b0535 <+0x369>
088b040a +0x23e:  mov    0x8(%ebp),%edx
088b040d +0x241:  mov    0x4(%edx),%ecx
088b0410 +0x244:  mov    0x8(%ebp),%edx
088b0413 +0x247:  mov    %eax,0x8(%esp)
088b0417 +0x24b:  mov    %ecx,0x4(%esp)
088b041b +0x24f:  mov    %edx,(%esp)
088b041e +0x252:  call   088b053e <+0x372>
088b0423 +0x257:  mov    0x8(%ebp),%eax
088b0426 +0x25a:  mov    0x4(%eax),%eax
088b0429 +0x25d:  lea    0x14(%eax),%edx
088b042c +0x260:  mov    0x8(%ebp),%eax
088b042f +0x263:  mov    %edx,0x4(%eax)
088b0432 +0x266:  jmp    088b046c <+0x2a0>
088b0434 +0x268:  mov    0xc(%ebp),%eax
088b0437 +0x26b:  mov    %eax,(%esp)
088b043a +0x26e:  call   088b0535 <+0x369>
088b043f +0x273:  mov    %eax,%ebx
088b0441 +0x275:  lea    -0xc(%ebp),%eax
088b0444 +0x278:  mov    0x8(%ebp),%edx
088b0447 +0x27b:  mov    %edx,0x4(%esp)
088b044b +0x27f:  mov    %eax,(%esp)
088b044e +0x282:  call   088b058e <+0x3c2>
088b0453 +0x287:  sub    $0x4,%esp
088b0456 +0x28a:  mov    %ebx,0x8(%esp)
088b045a +0x28e:  mov    -0xc(%ebp),%eax
088b045d +0x291:  mov    %eax,0x4(%esp)
088b0461 +0x295:  mov    0x8(%ebp),%eax
088b0464 +0x298:  mov    %eax,(%esp)
088b0467 +0x29b:  call   088b05b4 <+0x3e8>
088b046c +0x2a0:  mov    -0x4(%ebp),%ebx
088b046f +0x2a3:  leave
088b0470 +0x2a4:  ret
088b0471 +0x2a5:  push   %ebp
088b0472 +0x2a6:  mov    %esp,%ebp
088b0474 +0x2a8:  mov    0x8(%ebp),%eax
088b0477 +0x2ab:  pop    %ebp
088b0478 +0x2ac:  ret
088b0479 +0x2ad:  nop
088b047a +0x2ae:  push   %ebp
088b047b +0x2af:  mov    %esp,%ebp
088b047d +0x2b1:  sub    $0x18,%esp
088b0480 +0x2b4:  mov    0x8(%ebp),%eax
088b0483 +0x2b7:  mov    %eax,(%esp)
088b0486 +0x2ba:  call   088b03be <+0x1f2>
088b048b +0x2bf:  mov    0x8(%ebp),%edx
088b048e +0x2c2:  mov    0x4(%edx),%edx
088b0491 +0x2c5:  mov    %eax,0x8(%esp)
088b0495 +0x2c9:  mov    %edx,0x4(%esp)
088b0499 +0x2cd:  mov    0xc(%ebp),%eax
088b049c +0x2d0:  mov    %eax,(%esp)
088b049f +0x2d3:  call   088b03c6 <+0x1fa>
088b04a4 +0x2d8:  mov    0x8(%ebp),%eax
088b04a7 +0x2db:  mov    0xc(%ebp),%edx
088b04aa +0x2de:  mov    %edx,0x4(%eax)
088b04ad +0x2e1:  leave
088b04ae +0x2e2:  ret
088b04af +0x2e3:  nop
088b04b0 +0x2e4:  push   %ebp
088b04b1 +0x2e5:  mov    %esp,%ebp
088b04b3 +0x2e7:  sub    $0x18,%esp
088b04b6 +0x2ea:  mov    0x8(%ebp),%eax
088b04b9 +0x2ed:  mov    %eax,(%esp)
088b04bc +0x2f0:  call   088b089e <+0x6d2>
088b04c1 +0x2f5:  mov    0x8(%ebp),%eax
088b04c4 +0x2f8:  movl   $0x0,(%eax)
088b04ca +0x2fe:  mov    0x8(%ebp),%eax
088b04cd +0x301:  movl   $0x0,0x4(%eax)
088b04d4 +0x308:  mov    0x8(%ebp),%eax
088b04d7 +0x30b:  movl   $0x0,0x8(%eax)
088b04de +0x312:  leave
088b04df +0x313:  ret
088b04e0 +0x314:  push   %ebp
088b04e1 +0x315:  mov    %esp,%ebp
088b04e3 +0x317:  sub    $0x18,%esp
088b04e6 +0x31a:  mov    0x8(%ebp),%eax
088b04e9 +0x31d:  mov    %eax,(%esp)
088b04ec +0x320:  call   088b08b2 <+0x6e6>
088b04f1 +0x325:  leave
088b04f2 +0x326:  ret
088b04f3 +0x327:  nop
088b04f4 +0x328:  push   %ebp
088b04f5 +0x329:  mov    %esp,%ebp
088b04f7 +0x32b:  sub    $0x18,%esp
088b04fa +0x32e:  cmpl   $0x0,0xc(%ebp)
088b04fe +0x332:  je     088b0519 <+0x34d>
088b0500 +0x334:  mov    0x8(%ebp),%eax
088b0503 +0x337:  mov    0x10(%ebp),%edx
088b0506 +0x33a:  mov    %edx,0x8(%esp)
088b050a +0x33e:  mov    0xc(%ebp),%edx
088b050d +0x341:  mov    %edx,0x4(%esp)
088b0511 +0x345:  mov    %eax,(%esp)
088b0514 +0x348:  call   088b08b8 <+0x6ec>
088b0519 +0x34d:  leave
088b051a +0x34e:  ret
088b051b +0x34f:  push   %ebp
088b051c +0x350:  mov    %esp,%ebp
088b051e +0x352:  sub    $0x18,%esp
088b0521 +0x355:  mov    0xc(%ebp),%eax
088b0524 +0x358:  mov    %eax,0x4(%esp)
088b0528 +0x35c:  mov    0x8(%ebp),%eax
088b052b +0x35f:  mov    %eax,(%esp)
088b052e +0x362:  call   088b08cb <+0x6ff>
088b0533 +0x367:  leave
088b0534 +0x368:  ret
088b0535 +0x369:  push   %ebp
088b0536 +0x36a:  mov    %esp,%ebp
088b0538 +0x36c:  mov    0x8(%ebp),%eax
088b053b +0x36f:  pop    %ebp
088b053c +0x370:  ret
088b053d +0x371:  nop
088b053e +0x372:  push   %ebp
088b053f +0x373:  mov    %esp,%ebp
088b0541 +0x375:  push   %ebx
088b0542 +0x376:  sub    $0x14,%esp
088b0545 +0x379:  mov    0x10(%ebp),%eax
088b0548 +0x37c:  mov    %eax,(%esp)
088b054b +0x37f:  call   088b0535 <+0x369>
088b0550 +0x384:  mov    %eax,%ebx
088b0552 +0x386:  mov    0xc(%ebp),%eax
088b0555 +0x389:  mov    %eax,0x4(%esp)
088b0559 +0x38d:  movl   $0x14,(%esp)
088b0560 +0x394:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
088b0565 +0x399:  mov    %eax,%edx
088b0567 +0x39b:  test   %edx,%edx
088b0569 +0x39d:  je     088b0587 <+0x3bb>
088b056b +0x39f:  mov    (%ebx),%edx
088b056d +0x3a1:  mov    %edx,(%eax)
088b056f +0x3a3:  mov    0x4(%ebx),%edx
088b0572 +0x3a6:  mov    %edx,0x4(%eax)
088b0575 +0x3a9:  mov    0x8(%ebx),%edx
088b0578 +0x3ac:  mov    %edx,0x8(%eax)
088b057b +0x3af:  mov    0xc(%ebx),%edx
088b057e +0x3b2:  mov    %edx,0xc(%eax)
088b0581 +0x3b5:  mov    0x10(%ebx),%edx
088b0584 +0x3b8:  mov    %edx,0x10(%eax)
088b0587 +0x3bb:  add    $0x14,%esp
088b058a +0x3be:  pop    %ebx
088b058b +0x3bf:  pop    %ebp
088b058c +0x3c0:  ret
088b058d +0x3c1:  nop
088b058e +0x3c2:  push   %ebp
088b058f +0x3c3:  mov    %esp,%ebp
088b0591 +0x3c5:  push   %ebx
088b0592 +0x3c6:  sub    $0x14,%esp
088b0595 +0x3c9:  mov    0x8(%ebp),%ebx
088b0598 +0x3cc:  mov    0xc(%ebp),%eax
088b059b +0x3cf:  add    $0x4,%eax
088b059e +0x3d2:  mov    %eax,0x4(%esp)
088b05a2 +0x3d6:  mov    %ebx,(%esp)
088b05a5 +0x3d9:  call   088b08d0 <+0x704>
088b05aa +0x3de:  mov    %ebx,%eax
088b05ac +0x3e0:  add    $0x14,%esp
088b05af +0x3e3:  pop    %ebx
088b05b0 +0x3e4:  pop    %ebp
088b05b1 +0x3e5:  ret    $0x4
088b05b4 +0x3e8:  push   %ebp
088b05b5 +0x3e9:  mov    %esp,%ebp
088b05b7 +0x3eb:  push   %esi
088b05b8 +0x3ec:  push   %ebx
088b05b9 +0x3ed:  sub    $0x30,%esp
088b05bc +0x3f0:  mov    0x8(%ebp),%eax
088b05bf +0x3f3:  mov    0x4(%eax),%edx
088b05c2 +0x3f6:  mov    0x8(%ebp),%eax
088b05c5 +0x3f9:  mov    0x8(%eax),%eax
088b05c8 +0x3fc:  cmp    %eax,%edx
088b05ca +0x3fe:  je     088b0671 <+0x4a5>
088b05d0 +0x404:  mov    0x8(%ebp),%eax
088b05d3 +0x407:  mov    0x4(%eax),%eax
088b05d6 +0x40a:  sub    $0x14,%eax
088b05d9 +0x40d:  mov    %eax,(%esp)
088b05dc +0x410:  call   088b03e0 <+0x214>
088b05e1 +0x415:  mov    0x8(%ebp),%edx
088b05e4 +0x418:  mov    0x4(%edx),%ecx
088b05e7 +0x41b:  mov    0x8(%ebp),%edx
088b05ea +0x41e:  mov    %eax,0x8(%esp)
088b05ee +0x422:  mov    %ecx,0x4(%esp)
088b05f2 +0x426:  mov    %edx,(%esp)
088b05f5 +0x429:  call   088b053e <+0x372>
088b05fa +0x42e:  mov    0x8(%ebp),%eax
088b05fd +0x431:  mov    0x4(%eax),%eax
088b0600 +0x434:  lea    0x14(%eax),%edx
088b0603 +0x437:  mov    0x8(%ebp),%eax
088b0606 +0x43a:  mov    %edx,0x4(%eax)
088b0609 +0x43d:  mov    0x8(%ebp),%eax
088b060c +0x440:  mov    0x4(%eax),%eax
088b060f +0x443:  lea    -0x14(%eax),%esi
088b0612 +0x446:  mov    0x8(%ebp),%eax
088b0615 +0x449:  mov    0x4(%eax),%eax
088b0618 +0x44c:  lea    -0x28(%eax),%ebx
088b061b +0x44f:  lea    0xc(%ebp),%eax
088b061e +0x452:  mov    %eax,(%esp)
088b0621 +0x455:  call   088b08e0 <+0x714>
088b0626 +0x45a:  mov    (%eax),%eax
088b0628 +0x45c:  mov    %esi,0x8(%esp)
088b062c +0x460:  mov    %ebx,0x4(%esp)
088b0630 +0x464:  mov    %eax,(%esp)
088b0633 +0x467:  call   088b08e8 <+0x71c>
088b0638 +0x46c:  lea    0xc(%ebp),%eax
088b063b +0x46f:  mov    %eax,(%esp)
088b063e +0x472:  call   088b0920 <+0x754>
088b0643 +0x477:  mov    %eax,%ebx
088b0645 +0x479:  mov    0x10(%ebp),%eax
088b0648 +0x47c:  mov    %eax,(%esp)
088b064b +0x47f:  call   088b0535 <+0x369>
088b0650 +0x484:  mov    (%eax),%edx
088b0652 +0x486:  mov    %edx,(%ebx)
088b0654 +0x488:  mov    0x4(%eax),%edx
088b0657 +0x48b:  mov    %edx,0x4(%ebx)
088b065a +0x48e:  mov    0x8(%eax),%edx
088b065d +0x491:  mov    %edx,0x8(%ebx)
088b0660 +0x494:  mov    0xc(%eax),%edx
088b0663 +0x497:  mov    %edx,0xc(%ebx)
088b0666 +0x49a:  mov    0x10(%eax),%eax
088b0669 +0x49d:  mov    %eax,0x10(%ebx)
088b066c +0x4a0:  jmp    088b0893 <+0x6c7>
088b0671 +0x4a5:  movl   $"vector::_M_insert_aux",0x8(%esp)
088b0679 +0x4ad:  movl   $0x1,0x4(%esp)
088b0681 +0x4b5:  mov    0x8(%ebp),%eax
088b0684 +0x4b8:  mov    %eax,(%esp)
088b0687 +0x4bb:  call   088b092a <+0x75e>
088b068c +0x4c0:  mov    %eax,-0x18(%ebp)
088b068f +0x4c3:  lea    -0x1c(%ebp),%eax
088b0692 +0x4c6:  mov    0x8(%ebp),%edx
088b0695 +0x4c9:  mov    %edx,0x4(%esp)
088b0699 +0x4cd:  mov    %eax,(%esp)
088b069c +0x4d0:  call   088b09d0 <+0x804>
088b06a1 +0x4d5:  sub    $0x4,%esp
088b06a4 +0x4d8:  lea    -0x1c(%ebp),%eax
088b06a7 +0x4db:  mov    %eax,0x4(%esp)
088b06ab +0x4df:  lea    0xc(%ebp),%eax
088b06ae +0x4e2:  mov    %eax,(%esp)
088b06b1 +0x4e5:  call   088b09f3 <+0x827>
088b06b6 +0x4ea:  mov    %eax,-0x14(%ebp)
088b06b9 +0x4ed:  mov    0x8(%ebp),%eax
088b06bc +0x4f0:  mov    -0x18(%ebp),%edx
088b06bf +0x4f3:  mov    %edx,0x4(%esp)
088b06c3 +0x4f7:  mov    %eax,(%esp)
088b06c6 +0x4fa:  call   088b0a2c <+0x860>
088b06cb +0x4ff:  mov    %eax,-0x10(%ebp)
088b06ce +0x502:  mov    -0x10(%ebp),%eax
088b06d1 +0x505:  mov    %eax,-0xc(%ebp)
088b06d4 +0x508:  mov    0x10(%ebp),%eax
088b06d7 +0x50b:  mov    %eax,(%esp)
088b06da +0x50e:  call   088b0535 <+0x369>
088b06df +0x513:  mov    %eax,%ecx
088b06e1 +0x515:  mov    -0x14(%ebp),%edx
088b06e4 +0x518:  mov    %edx,%eax
088b06e6 +0x51a:  shl    $0x2,%eax
088b06e9 +0x51d:  add    %edx,%eax
088b06eb +0x51f:  shl    $0x2,%eax
088b06ee +0x522:  mov    %eax,%edx
088b06f0 +0x524:  add    -0x10(%ebp),%edx
088b06f3 +0x527:  mov    0x8(%ebp),%eax
088b06f6 +0x52a:  mov    %ecx,0x8(%esp)
088b06fa +0x52e:  mov    %edx,0x4(%esp)
088b06fe +0x532:  mov    %eax,(%esp)
088b0701 +0x535:  call   088b053e <+0x372>
088b0706 +0x53a:  movl   $0x0,-0xc(%ebp)
088b070d +0x541:  mov    0x8(%ebp),%eax
088b0710 +0x544:  mov    %eax,(%esp)
088b0713 +0x547:  call   088b03be <+0x1f2>
088b0718 +0x54c:  mov    %eax,%ebx
088b071a +0x54e:  lea    0xc(%ebp),%eax
088b071d +0x551:  mov    %eax,(%esp)
088b0720 +0x554:  call   088b08e0 <+0x714>
088b0725 +0x559:  mov    (%eax),%edx
088b0727 +0x55b:  mov    0x8(%ebp),%eax
088b072a +0x55e:  mov    (%eax),%eax
088b072c +0x560:  mov    %ebx,0xc(%esp)
088b0730 +0x564:  mov    -0x10(%ebp),%ecx
088b0733 +0x567:  mov    %ecx,0x8(%esp)
088b0737 +0x56b:  mov    %edx,0x4(%esp)
088b073b +0x56f:  mov    %eax,(%esp)
088b073e +0x572:  call   088b0a5b <+0x88f>
088b0743 +0x577:  mov    %eax,-0xc(%ebp)
088b0746 +0x57a:  addl   $0x14,-0xc(%ebp)
088b074a +0x57e:  mov    0x8(%ebp),%eax
088b074d +0x581:  mov    %eax,(%esp)
088b0750 +0x584:  call   088b03be <+0x1f2>
088b0755 +0x589:  mov    %eax,%ebx
088b0757 +0x58b:  mov    0x8(%ebp),%eax
088b075a +0x58e:  mov    0x4(%eax),%esi
088b075d +0x591:  lea    0xc(%ebp),%eax
088b0760 +0x594:  mov    %eax,(%esp)
088b0763 +0x597:  call   088b08e0 <+0x714>
088b0768 +0x59c:  mov    (%eax),%eax
088b076a +0x59e:  mov    %ebx,0xc(%esp)
088b076e +0x5a2:  mov    -0xc(%ebp),%edx
088b0771 +0x5a5:  mov    %edx,0x8(%esp)
088b0775 +0x5a9:  mov    %esi,0x4(%esp)
088b0779 +0x5ad:  mov    %eax,(%esp)
088b077c +0x5b0:  call   088b0a5b <+0x88f>
088b0781 +0x5b5:  mov    %eax,-0xc(%ebp)
088b0784 +0x5b8:  mov    0x8(%ebp),%eax
088b0787 +0x5bb:  mov    %eax,(%esp)
088b078a +0x5be:  call   088b03be <+0x1f2>
088b078f +0x5c3:  mov    0x8(%ebp),%edx
088b0792 +0x5c6:  mov    0x4(%edx),%ecx
088b0795 +0x5c9:  mov    0x8(%ebp),%edx
088b0798 +0x5cc:  mov    (%edx),%edx
088b079a +0x5ce:  mov    %eax,0x8(%esp)
088b079e +0x5d2:  mov    %ecx,0x4(%esp)
088b07a2 +0x5d6:  mov    %edx,(%esp)
088b07a5 +0x5d9:  call   088b03c6 <+0x1fa>
088b07aa +0x5de:  mov    0x8(%ebp),%eax
088b07ad +0x5e1:  mov    0x8(%eax),%eax
088b07b0 +0x5e4:  mov    %eax,%edx
088b07b2 +0x5e6:  mov    0x8(%ebp),%eax
088b07b5 +0x5e9:  mov    (%eax),%eax
088b07b7 +0x5eb:  mov    %edx,%ecx
088b07b9 +0x5ed:  sub    %eax,%ecx
088b07bb +0x5ef:  mov    %ecx,%eax
088b07bd +0x5f1:  sar    $0x2,%eax
088b07c0 +0x5f4:  imul   $0xcccccccd,%eax,%eax
088b07c6 +0x5fa:  mov    %eax,%ecx
088b07c8 +0x5fc:  mov    0x8(%ebp),%eax
088b07cb +0x5ff:  mov    (%eax),%edx
088b07cd +0x601:  mov    0x8(%ebp),%eax
088b07d0 +0x604:  mov    %ecx,0x8(%esp)
088b07d4 +0x608:  mov    %edx,0x4(%esp)
088b07d8 +0x60c:  mov    %eax,(%esp)
088b07db +0x60f:  call   088b04f4 <+0x328>
088b07e0 +0x614:  mov    0x8(%ebp),%eax
088b07e3 +0x617:  mov    -0x10(%ebp),%edx
088b07e6 +0x61a:  mov    %edx,(%eax)
088b07e8 +0x61c:  mov    0x8(%ebp),%eax
088b07eb +0x61f:  mov    -0xc(%ebp),%edx
088b07ee +0x622:  mov    %edx,0x4(%eax)
088b07f1 +0x625:  mov    -0x18(%ebp),%edx
088b07f4 +0x628:  mov    %edx,%eax
088b07f6 +0x62a:  shl    $0x2,%eax
088b07f9 +0x62d:  add    %edx,%eax
088b07fb +0x62f:  shl    $0x2,%eax
088b07fe +0x632:  mov    %eax,%edx
088b0800 +0x634:  add    -0x10(%ebp),%edx
088b0803 +0x637:  mov    0x8(%ebp),%eax
088b0806 +0x63a:  mov    %edx,0x8(%eax)
088b0809 +0x63d:  jmp    088b0893 <+0x6c7>
088b080e +0x642:  mov    %eax,(%esp)
088b0811 +0x645:  call   08725ce0 <__cxa_begin_catch>
088b0816 +0x64a:  cmpl   $0x0,-0xc(%ebp)
088b081a +0x64e:  jne    088b083f <+0x673>
088b081c +0x650:  mov    -0x14(%ebp),%edx
088b081f +0x653:  mov    %edx,%eax
088b0821 +0x655:  shl    $0x2,%eax
088b0824 +0x658:  add    %edx,%eax
088b0826 +0x65a:  shl    $0x2,%eax
088b0829 +0x65d:  mov    %eax,%edx
088b082b +0x65f:  add    -0x10(%ebp),%edx
088b082e +0x662:  mov    0x8(%ebp),%eax
088b0831 +0x665:  mov    %edx,0x4(%esp)
088b0835 +0x669:  mov    %eax,(%esp)
088b0838 +0x66c:  call   088b0ab4 <+0x8e8>
088b083d +0x671:  jmp    088b0860 <+0x694>
088b083f +0x673:  mov    0x8(%ebp),%eax
088b0842 +0x676:  mov    %eax,(%esp)
088b0845 +0x679:  call   088b03be <+0x1f2>
088b084a +0x67e:  mov    %eax,0x8(%esp)
088b084e +0x682:  mov    -0xc(%ebp),%eax
088b0851 +0x685:  mov    %eax,0x4(%esp)
088b0855 +0x689:  mov    -0x10(%ebp),%eax
088b0858 +0x68c:  mov    %eax,(%esp)
088b085b +0x68f:  call   088b03c6 <+0x1fa>
088b0860 +0x694:  mov    0x8(%ebp),%eax
088b0863 +0x697:  mov    -0x18(%ebp),%edx
088b0866 +0x69a:  mov    %edx,0x8(%esp)
088b086a +0x69e:  mov    -0x10(%ebp),%edx
088b086d +0x6a1:  mov    %edx,0x4(%esp)
088b0871 +0x6a5:  mov    %eax,(%esp)
088b0874 +0x6a8:  call   088b04f4 <+0x328>
088b0879 +0x6ad:  call   08724be0 <__cxa_rethrow>
088b087e +0x6b2:  mov    %edx,%ebx
088b0880 +0x6b4:  mov    %eax,%esi
088b0882 +0x6b6:  call   08725c30 <__cxa_end_catch>
088b0887 +0x6bb:  mov    %esi,%eax
088b0889 +0x6bd:  mov    %ebx,%edx
088b088b +0x6bf:  mov    %eax,(%esp)
088b088e +0x6c2:  call   08ae3750 <_Unwind_Resume>
088b0893 +0x6c7:  lea    -0x8(%ebp),%esp
088b0896 +0x6ca:  add    $0x0,%esp
088b0899 +0x6cd:  pop    %ebx
088b089a +0x6ce:  pop    %esi
088b089b +0x6cf:  pop    %ebp
088b089c +0x6d0:  ret
088b089d +0x6d1:  nop
088b089e +0x6d2:  push   %ebp
088b089f +0x6d3:  mov    %esp,%ebp
088b08a1 +0x6d5:  sub    $0x18,%esp
088b08a4 +0x6d8:  mov    0x8(%ebp),%eax
088b08a7 +0x6db:  mov    %eax,(%esp)
088b08aa +0x6de:  call   088b0ac8 <+0x8fc>
088b08af +0x6e3:  leave
088b08b0 +0x6e4:  ret
088b08b1 +0x6e5:  nop
088b08b2 +0x6e6:  push   %ebp
088b08b3 +0x6e7:  mov    %esp,%ebp
088b08b5 +0x6e9:  pop    %ebp
088b08b6 +0x6ea:  ret
088b08b7 +0x6eb:  nop
088b08b8 +0x6ec:  push   %ebp
088b08b9 +0x6ed:  mov    %esp,%ebp
088b08bb +0x6ef:  sub    $0x18,%esp
088b08be +0x6f2:  mov    0xc(%ebp),%eax
088b08c1 +0x6f5:  mov    %eax,(%esp)
088b08c4 +0x6f8:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
088b08c9 +0x6fd:  leave
088b08ca +0x6fe:  ret
088b08cb +0x6ff:  push   %ebp
088b08cc +0x700:  mov    %esp,%ebp
088b08ce +0x702:  pop    %ebp
088b08cf +0x703:  ret
088b08d0 +0x704:  push   %ebp
088b08d1 +0x705:  mov    %esp,%ebp
088b08d3 +0x707:  mov    0xc(%ebp),%eax
088b08d6 +0x70a:  mov    (%eax),%edx
088b08d8 +0x70c:  mov    0x8(%ebp),%eax
088b08db +0x70f:  mov    %edx,(%eax)
088b08dd +0x711:  pop    %ebp
088b08de +0x712:  ret
088b08df +0x713:  nop
088b08e0 +0x714:  push   %ebp
088b08e1 +0x715:  mov    %esp,%ebp
088b08e3 +0x717:  mov    0x8(%ebp),%eax
088b08e6 +0x71a:  pop    %ebp
088b08e7 +0x71b:  ret
088b08e8 +0x71c:  push   %ebp
088b08e9 +0x71d:  mov    %esp,%ebp
088b08eb +0x71f:  push   %ebx
088b08ec +0x720:  sub    $0x14,%esp
088b08ef +0x723:  mov    0xc(%ebp),%eax
088b08f2 +0x726:  mov    %eax,(%esp)
088b08f5 +0x729:  call   088b0acd <+0x901>
088b08fa +0x72e:  mov    %eax,%ebx
088b08fc +0x730:  mov    0x8(%ebp),%eax
088b08ff +0x733:  mov    %eax,(%esp)
088b0902 +0x736:  call   088b0acd <+0x901>
088b0907 +0x73b:  mov    0x10(%ebp),%edx
088b090a +0x73e:  mov    %edx,0x8(%esp)
088b090e +0x742:  mov    %ebx,0x4(%esp)
088b0912 +0x746:  mov    %eax,(%esp)
088b0915 +0x749:  call   088b0ad5 <+0x909>
088b091a +0x74e:  add    $0x14,%esp
088b091d +0x751:  pop    %ebx
088b091e +0x752:  pop    %ebp
088b091f +0x753:  ret
088b0920 +0x754:  push   %ebp
088b0921 +0x755:  mov    %esp,%ebp
088b0923 +0x757:  mov    0x8(%ebp),%eax
088b0926 +0x75a:  mov    (%eax),%eax
088b0928 +0x75c:  pop    %ebp
088b0929 +0x75d:  ret
088b092a +0x75e:  push   %ebp
088b092b +0x75f:  mov    %esp,%ebp
088b092d +0x761:  push   %ebx
088b092e +0x762:  sub    $0x24,%esp
088b0931 +0x765:  mov    0x8(%ebp),%eax
088b0934 +0x768:  mov    %eax,(%esp)
088b0937 +0x76b:  call   088b0b1a <+0x94e>
088b093c +0x770:  mov    %eax,%ebx
088b093e +0x772:  mov    0x8(%ebp),%eax
088b0941 +0x775:  mov    %eax,(%esp)
088b0944 +0x778:  call   0817f068 <_GLOBAL__I__ZN29AvatarFixedHiddenOptionServerC2Ev+0x299>  ; global constructors keyed to AvatarFixedHiddenOptionServer::AvatarFixedHiddenOptionServer()+0x299
088b0949 +0x77d:  mov    %ebx,%edx
088b094b +0x77f:  sub    %eax,%edx
088b094d +0x781:  mov    0xc(%ebp),%eax
088b0950 +0x784:  cmp    %eax,%edx
088b0952 +0x786:  setb   %al
088b0955 +0x789:  test   %al,%al
088b0957 +0x78b:  je     088b0964 <+0x798>
088b0959 +0x78d:  mov    0x10(%ebp),%eax
088b095c +0x790:  mov    %eax,(%esp)
088b095f +0x793:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
088b0964 +0x798:  mov    0x8(%ebp),%eax
088b0967 +0x79b:  mov    %eax,(%esp)
088b096a +0x79e:  call   0817f068 <_GLOBAL__I__ZN29AvatarFixedHiddenOptionServerC2Ev+0x299>  ; global constructors keyed to AvatarFixedHiddenOptionServer::AvatarFixedHiddenOptionServer()+0x299
088b096f +0x7a3:  mov    %eax,%ebx
088b0971 +0x7a5:  mov    0x8(%ebp),%eax
088b0974 +0x7a8:  mov    %eax,(%esp)
088b0977 +0x7ab:  call   0817f068 <_GLOBAL__I__ZN29AvatarFixedHiddenOptionServerC2Ev+0x299>  ; global constructors keyed to AvatarFixedHiddenOptionServer::AvatarFixedHiddenOptionServer()+0x299
088b097c +0x7b0:  mov    %eax,-0x10(%ebp)
088b097f +0x7b3:  lea    0xc(%ebp),%eax
088b0982 +0x7b6:  mov    %eax,0x4(%esp)
088b0986 +0x7ba:  lea    -0x10(%ebp),%eax
088b0989 +0x7bd:  mov    %eax,(%esp)
088b098c +0x7c0:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
088b0991 +0x7c5:  mov    (%eax),%eax
088b0993 +0x7c7:  lea    (%ebx,%eax,1),%eax
088b0996 +0x7ca:  mov    %eax,-0xc(%ebp)
088b0999 +0x7cd:  mov    0x8(%ebp),%eax
088b099c +0x7d0:  mov    %eax,(%esp)
088b099f +0x7d3:  call   0817f068 <_GLOBAL__I__ZN29AvatarFixedHiddenOptionServerC2Ev+0x299>  ; global constructors keyed to AvatarFixedHiddenOptionServer::AvatarFixedHiddenOptionServer()+0x299
088b09a4 +0x7d8:  cmp    -0xc(%ebp),%eax
088b09a7 +0x7db:  ja     088b09b9 <+0x7ed>
088b09a9 +0x7dd:  mov    0x8(%ebp),%eax
088b09ac +0x7e0:  mov    %eax,(%esp)
088b09af +0x7e3:  call   088b0b1a <+0x94e>
088b09b4 +0x7e8:  cmp    -0xc(%ebp),%eax
088b09b7 +0x7eb:  jae    088b09c6 <+0x7fa>
088b09b9 +0x7ed:  mov    0x8(%ebp),%eax
088b09bc +0x7f0:  mov    %eax,(%esp)
088b09bf +0x7f3:  call   088b0b1a <+0x94e>
088b09c4 +0x7f8:  jmp    088b09c9 <+0x7fd>
088b09c6 +0x7fa:  mov    -0xc(%ebp),%eax
088b09c9 +0x7fd:  add    $0x24,%esp
088b09cc +0x800:  pop    %ebx
088b09cd +0x801:  pop    %ebp
088b09ce +0x802:  ret
088b09cf +0x803:  nop
088b09d0 +0x804:  push   %ebp
088b09d1 +0x805:  mov    %esp,%ebp
088b09d3 +0x807:  push   %ebx
088b09d4 +0x808:  sub    $0x14,%esp
088b09d7 +0x80b:  mov    0x8(%ebp),%ebx
088b09da +0x80e:  mov    0xc(%ebp),%eax
088b09dd +0x811:  mov    %eax,0x4(%esp)
088b09e1 +0x815:  mov    %ebx,(%esp)
088b09e4 +0x818:  call   088b08d0 <+0x704>
088b09e9 +0x81d:  mov    %ebx,%eax
088b09eb +0x81f:  add    $0x14,%esp
088b09ee +0x822:  pop    %ebx
088b09ef +0x823:  pop    %ebp
088b09f0 +0x824:  ret    $0x4
088b09f3 +0x827:  push   %ebp
088b09f4 +0x828:  mov    %esp,%ebp
088b09f6 +0x82a:  push   %ebx
088b09f7 +0x82b:  sub    $0x14,%esp
088b09fa +0x82e:  mov    0x8(%ebp),%eax
088b09fd +0x831:  mov    %eax,(%esp)
088b0a00 +0x834:  call   088b08e0 <+0x714>
088b0a05 +0x839:  mov    (%eax),%eax
088b0a07 +0x83b:  mov    %eax,%ebx
088b0a09 +0x83d:  mov    0xc(%ebp),%eax
088b0a0c +0x840:  mov    %eax,(%esp)
088b0a0f +0x843:  call   088b08e0 <+0x714>
088b0a14 +0x848:  mov    (%eax),%eax
088b0a16 +0x84a:  mov    %ebx,%edx
088b0a18 +0x84c:  sub    %eax,%edx
088b0a1a +0x84e:  mov    %edx,%eax
088b0a1c +0x850:  sar    $0x2,%eax
088b0a1f +0x853:  imul   $0xcccccccd,%eax,%eax
088b0a25 +0x859:  add    $0x14,%esp
088b0a28 +0x85c:  pop    %ebx
088b0a29 +0x85d:  pop    %ebp
088b0a2a +0x85e:  ret
088b0a2b +0x85f:  nop
088b0a2c +0x860:  push   %ebp
088b0a2d +0x861:  mov    %esp,%ebp
088b0a2f +0x863:  sub    $0x18,%esp
088b0a32 +0x866:  cmpl   $0x0,0xc(%ebp)
088b0a36 +0x86a:  je     088b0a54 <+0x888>
088b0a38 +0x86c:  mov    0x8(%ebp),%eax
088b0a3b +0x86f:  movl   $0x0,0x8(%esp)
088b0a43 +0x877:  mov    0xc(%ebp),%edx
088b0a46 +0x87a:  mov    %edx,0x4(%esp)
088b0a4a +0x87e:  mov    %eax,(%esp)
088b0a4d +0x881:  call   088b0b36 <+0x96a>
088b0a52 +0x886:  jmp    088b0a59 <+0x88d>
088b0a54 +0x888:  mov    $0x0,%eax
088b0a59 +0x88d:  leave
088b0a5a +0x88e:  ret
088b0a5b +0x88f:  push   %ebp
088b0a5c +0x890:  mov    %esp,%ebp
088b0a5e +0x892:  sub    $0x28,%esp
088b0a61 +0x895:  lea    -0x10(%ebp),%eax
088b0a64 +0x898:  lea    0xc(%ebp),%edx
088b0a67 +0x89b:  mov    %edx,0x4(%esp)
088b0a6b +0x89f:  mov    %eax,(%esp)
088b0a6e +0x8a2:  call   088b0b75 <+0x9a9>
088b0a73 +0x8a7:  sub    $0x4,%esp
088b0a76 +0x8aa:  lea    -0xc(%ebp),%eax
088b0a79 +0x8ad:  lea    0x8(%ebp),%edx
088b0a7c +0x8b0:  mov    %edx,0x4(%esp)
088b0a80 +0x8b4:  mov    %eax,(%esp)
088b0a83 +0x8b7:  call   088b0b75 <+0x9a9>
088b0a88 +0x8bc:  sub    $0x4,%esp
088b0a8b +0x8bf:  mov    0x14(%ebp),%eax
088b0a8e +0x8c2:  mov    %eax,0xc(%esp)
088b0a92 +0x8c6:  mov    0x10(%ebp),%eax
088b0a95 +0x8c9:  mov    %eax,0x8(%esp)
088b0a99 +0x8cd:  mov    -0x10(%ebp),%eax
088b0a9c +0x8d0:  mov    %eax,0x4(%esp)
088b0aa0 +0x8d4:  mov    -0xc(%ebp),%eax
088b0aa3 +0x8d7:  mov    %eax,(%esp)
088b0aa6 +0x8da:  call   088b0b9a <+0x9ce>
088b0aab +0x8df:  leave
088b0aac +0x8e0:  ret
088b0aad +0x8e1:  nop
088b0aae +0x8e2:  push   %ebp
088b0aaf +0x8e3:  mov    %esp,%ebp
088b0ab1 +0x8e5:  pop    %ebp
088b0ab2 +0x8e6:  ret
088b0ab3 +0x8e7:  nop
088b0ab4 +0x8e8:  push   %ebp
088b0ab5 +0x8e9:  mov    %esp,%ebp
088b0ab7 +0x8eb:  sub    $0x18,%esp
088b0aba +0x8ee:  mov    0xc(%ebp),%eax
088b0abd +0x8f1:  mov    %eax,(%esp)
088b0ac0 +0x8f4:  call   088b0aae <+0x8e2>
088b0ac5 +0x8f9:  leave
088b0ac6 +0x8fa:  ret
088b0ac7 +0x8fb:  nop
088b0ac8 +0x8fc:  push   %ebp
088b0ac9 +0x8fd:  mov    %esp,%ebp
088b0acb +0x8ff:  pop    %ebp
088b0acc +0x900:  ret
088b0acd +0x901:  push   %ebp
088b0ace +0x902:  mov    %esp,%ebp
088b0ad0 +0x904:  mov    0x8(%ebp),%eax
088b0ad3 +0x907:  pop    %ebp
088b0ad4 +0x908:  ret
088b0ad5 +0x909:  push   %ebp
088b0ad6 +0x90a:  mov    %esp,%ebp
088b0ad8 +0x90c:  push   %esi
088b0ad9 +0x90d:  push   %ebx
088b0ada +0x90e:  sub    $0x10,%esp
088b0add +0x911:  mov    0x10(%ebp),%eax
088b0ae0 +0x914:  mov    %eax,(%esp)
088b0ae3 +0x917:  call   088b0bbb <+0x9ef>
088b0ae8 +0x91c:  mov    %eax,%esi
088b0aea +0x91e:  mov    0xc(%ebp),%eax
088b0aed +0x921:  mov    %eax,(%esp)
088b0af0 +0x924:  call   088b0bbb <+0x9ef>
088b0af5 +0x929:  mov    %eax,%ebx
088b0af7 +0x92b:  mov    0x8(%ebp),%eax
088b0afa +0x92e:  mov    %eax,(%esp)
088b0afd +0x931:  call   088b0bbb <+0x9ef>
088b0b02 +0x936:  mov    %esi,0x8(%esp)
088b0b06 +0x93a:  mov    %ebx,0x4(%esp)
088b0b0a +0x93e:  mov    %eax,(%esp)
088b0b0d +0x941:  call   088b0bc3 <+0x9f7>
088b0b12 +0x946:  add    $0x10,%esp
088b0b15 +0x949:  pop    %ebx
088b0b16 +0x94a:  pop    %esi
088b0b17 +0x94b:  pop    %ebp
088b0b18 +0x94c:  ret
088b0b19 +0x94d:  nop
088b0b1a +0x94e:  push   %ebp
088b0b1b +0x94f:  mov    %esp,%ebp
088b0b1d +0x951:  sub    $0x18,%esp
088b0b20 +0x954:  mov    0x8(%ebp),%eax
088b0b23 +0x957:  mov    %eax,(%esp)
088b0b26 +0x95a:  call   088b0be8 <+0xa1c>
088b0b2b +0x95f:  mov    %eax,(%esp)
088b0b2e +0x962:  call   088b0bf0 <+0xa24>
088b0b33 +0x967:  leave
088b0b34 +0x968:  ret
088b0b35 +0x969:  nop
088b0b36 +0x96a:  push   %ebp
088b0b37 +0x96b:  mov    %esp,%ebp
088b0b39 +0x96d:  sub    $0x18,%esp
088b0b3c +0x970:  mov    0x8(%ebp),%eax
088b0b3f +0x973:  mov    %eax,(%esp)
088b0b42 +0x976:  call   088b0bf0 <+0xa24>
088b0b47 +0x97b:  cmp    0xc(%ebp),%eax
088b0b4a +0x97e:  setb   %al
088b0b4d +0x981:  movzbl %al,%eax
088b0b50 +0x984:  test   %eax,%eax
088b0b52 +0x986:  setne  %al
088b0b55 +0x989:  test   %al,%al
088b0b57 +0x98b:  je     088b0b5e <+0x992>
088b0b59 +0x98d:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
088b0b5e +0x992:  mov    0xc(%ebp),%edx
088b0b61 +0x995:  mov    %edx,%eax
088b0b63 +0x997:  shl    $0x2,%eax
088b0b66 +0x99a:  add    %edx,%eax
088b0b68 +0x99c:  shl    $0x2,%eax
088b0b6b +0x99f:  mov    %eax,(%esp)
088b0b6e +0x9a2:  call   08724450 <_Znwj>  ; operator new(unsigned int)
088b0b73 +0x9a7:  leave
088b0b74 +0x9a8:  ret
088b0b75 +0x9a9:  push   %ebp
088b0b76 +0x9aa:  mov    %esp,%ebp
088b0b78 +0x9ac:  push   %ebx
088b0b79 +0x9ad:  sub    $0x14,%esp
088b0b7c +0x9b0:  mov    0x8(%ebp),%ebx
088b0b7f +0x9b3:  mov    0xc(%ebp),%eax
088b0b82 +0x9b6:  mov    (%eax),%eax
088b0b84 +0x9b8:  mov    %eax,0x4(%esp)
088b0b88 +0x9bc:  mov    %ebx,(%esp)
088b0b8b +0x9bf:  call   088b0bfa <+0xa2e>
088b0b90 +0x9c4:  mov    %ebx,%eax
088b0b92 +0x9c6:  add    $0x14,%esp
088b0b95 +0x9c9:  pop    %ebx
088b0b96 +0x9ca:  pop    %ebp
088b0b97 +0x9cb:  ret    $0x4
088b0b9a +0x9ce:  push   %ebp
088b0b9b +0x9cf:  mov    %esp,%ebp
088b0b9d +0x9d1:  sub    $0x18,%esp
088b0ba0 +0x9d4:  mov    0x10(%ebp),%eax
088b0ba3 +0x9d7:  mov    %eax,0x8(%esp)
088b0ba7 +0x9db:  mov    0xc(%ebp),%eax
088b0baa +0x9de:  mov    %eax,0x4(%esp)
088b0bae +0x9e2:  mov    0x8(%ebp),%eax
088b0bb1 +0x9e5:  mov    %eax,(%esp)
088b0bb4 +0x9e8:  call   088b0c07 <+0xa3b>
088b0bb9 +0x9ed:  leave
088b0bba +0x9ee:  ret
088b0bbb +0x9ef:  push   %ebp
088b0bbc +0x9f0:  mov    %esp,%ebp
088b0bbe +0x9f2:  mov    0x8(%ebp),%eax
088b0bc1 +0x9f5:  pop    %ebp
088b0bc2 +0x9f6:  ret
088b0bc3 +0x9f7:  push   %ebp
088b0bc4 +0x9f8:  mov    %esp,%ebp
088b0bc6 +0x9fa:  sub    $0x28,%esp
088b0bc9 +0x9fd:  movb   $0x0,-0x9(%ebp)
088b0bcd +0xa01:  mov    0x10(%ebp),%eax
088b0bd0 +0xa04:  mov    %eax,0x8(%esp)
088b0bd4 +0xa08:  mov    0xc(%ebp),%eax
088b0bd7 +0xa0b:  mov    %eax,0x4(%esp)
088b0bdb +0xa0f:  mov    0x8(%ebp),%eax
088b0bde +0xa12:  mov    %eax,(%esp)
088b0be1 +0xa15:  call   088b0c28 <+0xa5c>
088b0be6 +0xa1a:  leave
088b0be7 +0xa1b:  ret
088b0be8 +0xa1c:  push   %ebp
088b0be9 +0xa1d:  mov    %esp,%ebp
088b0beb +0xa1f:  mov    0x8(%ebp),%eax
088b0bee +0xa22:  pop    %ebp
088b0bef +0xa23:  ret
088b0bf0 +0xa24:  push   %ebp
088b0bf1 +0xa25:  mov    %esp,%ebp
088b0bf3 +0xa27:  mov    $0xccccccc,%eax
088b0bf8 +0xa2c:  pop    %ebp
088b0bf9 +0xa2d:  ret
088b0bfa +0xa2e:  push   %ebp
088b0bfb +0xa2f:  mov    %esp,%ebp
088b0bfd +0xa31:  mov    0x8(%ebp),%eax
088b0c00 +0xa34:  mov    0xc(%ebp),%edx
088b0c03 +0xa37:  mov    %edx,(%eax)
088b0c05 +0xa39:  pop    %ebp
088b0c06 +0xa3a:  ret
088b0c07 +0xa3b:  push   %ebp
088b0c08 +0xa3c:  mov    %esp,%ebp
088b0c0a +0xa3e:  sub    $0x18,%esp
088b0c0d +0xa41:  mov    0x10(%ebp),%eax
088b0c10 +0xa44:  mov    %eax,0x8(%esp)
088b0c14 +0xa48:  mov    0xc(%ebp),%eax
088b0c17 +0xa4b:  mov    %eax,0x4(%esp)
088b0c1b +0xa4f:  mov    0x8(%ebp),%eax
088b0c1e +0xa52:  mov    %eax,(%esp)
088b0c21 +0xa55:  call   088b0c93 <+0xac7>
088b0c26 +0xa5a:  leave
088b0c27 +0xa5b:  ret
088b0c28 +0xa5c:  push   %ebp
088b0c29 +0xa5d:  mov    %esp,%ebp
088b0c2b +0xa5f:  push   %ebx
088b0c2c +0xa60:  sub    $0x24,%esp
088b0c2f +0xa63:  mov    0xc(%ebp),%edx
088b0c32 +0xa66:  mov    0x8(%ebp),%eax
088b0c35 +0xa69:  mov    %edx,%ecx
088b0c37 +0xa6b:  sub    %eax,%ecx
088b0c39 +0xa6d:  mov    %ecx,%eax
088b0c3b +0xa6f:  sar    $0x2,%eax
088b0c3e +0xa72:  imul   $0xcccccccd,%eax,%eax
088b0c44 +0xa78:  mov    %eax,-0xc(%ebp)
088b0c47 +0xa7b:  jmp    088b0c7f <+0xab3>
088b0c49 +0xa7d:  subl   $0x14,0x10(%ebp)
088b0c4d +0xa81:  mov    0x10(%ebp),%ebx
088b0c50 +0xa84:  subl   $0x14,0xc(%ebp)
088b0c54 +0xa88:  mov    0xc(%ebp),%eax
088b0c57 +0xa8b:  mov    %eax,(%esp)
088b0c5a +0xa8e:  call   088b03e0 <+0x214>
088b0c5f +0xa93:  mov    (%eax),%edx
088b0c61 +0xa95:  mov    %edx,(%ebx)
088b0c63 +0xa97:  mov    0x4(%eax),%edx
088b0c66 +0xa9a:  mov    %edx,0x4(%ebx)
088b0c69 +0xa9d:  mov    0x8(%eax),%edx
088b0c6c +0xaa0:  mov    %edx,0x8(%ebx)
088b0c6f +0xaa3:  mov    0xc(%eax),%edx
088b0c72 +0xaa6:  mov    %edx,0xc(%ebx)
088b0c75 +0xaa9:  mov    0x10(%eax),%eax
088b0c78 +0xaac:  mov    %eax,0x10(%ebx)
088b0c7b +0xaaf:  subl   $0x1,-0xc(%ebp)
088b0c7f +0xab3:  cmpl   $0x0,-0xc(%ebp)
088b0c83 +0xab7:  setg   %al
088b0c86 +0xaba:  test   %al,%al
088b0c88 +0xabc:  jne    088b0c49 <+0xa7d>
088b0c8a +0xabe:  mov    0x10(%ebp),%eax
088b0c8d +0xac1:  add    $0x24,%esp
088b0c90 +0xac4:  pop    %ebx
088b0c91 +0xac5:  pop    %ebp
088b0c92 +0xac6:  ret
088b0c93 +0xac7:  push   %ebp
088b0c94 +0xac8:  mov    %esp,%ebp
088b0c96 +0xaca:  push   %esi
088b0c97 +0xacb:  push   %ebx
088b0c98 +0xacc:  sub    $0x20,%esp
088b0c9b +0xacf:  mov    0x10(%ebp),%eax
088b0c9e +0xad2:  mov    %eax,-0xc(%ebp)
088b0ca1 +0xad5:  jmp    088b0cf4 <+0xb28>
088b0ca3 +0xad7:  lea    0x8(%ebp),%eax
088b0ca6 +0xada:  mov    %eax,(%esp)
088b0ca9 +0xadd:  call   088b0d7c <+0xbb0>
088b0cae +0xae2:  mov    %eax,%ebx
088b0cb0 +0xae4:  mov    -0xc(%ebp),%eax
088b0cb3 +0xae7:  mov    %eax,0x4(%esp)
088b0cb7 +0xaeb:  movl   $0x14,(%esp)
088b0cbe +0xaf2:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
088b0cc3 +0xaf7:  mov    %eax,%edx
088b0cc5 +0xaf9:  test   %edx,%edx
088b0cc7 +0xafb:  je     088b0ce5 <+0xb19>
088b0cc9 +0xafd:  mov    (%ebx),%edx
088b0ccb +0xaff:  mov    %edx,(%eax)
088b0ccd +0xb01:  mov    0x4(%ebx),%edx
088b0cd0 +0xb04:  mov    %edx,0x4(%eax)
088b0cd3 +0xb07:  mov    0x8(%ebx),%edx
088b0cd6 +0xb0a:  mov    %edx,0x8(%eax)
088b0cd9 +0xb0d:  mov    0xc(%ebx),%edx
088b0cdc +0xb10:  mov    %edx,0xc(%eax)
088b0cdf +0xb13:  mov    0x10(%ebx),%edx
088b0ce2 +0xb16:  mov    %edx,0x10(%eax)
088b0ce5 +0xb19:  lea    0x8(%ebp),%eax
088b0ce8 +0xb1c:  mov    %eax,(%esp)
088b0ceb +0xb1f:  call   088b0d66 <+0xb9a>
088b0cf0 +0xb24:  addl   $0x14,-0xc(%ebp)
088b0cf4 +0xb28:  lea    0xc(%ebp),%eax
088b0cf7 +0xb2b:  mov    %eax,0x4(%esp)
088b0cfb +0xb2f:  lea    0x8(%ebp),%eax
088b0cfe +0xb32:  mov    %eax,(%esp)
088b0d01 +0xb35:  call   088b0d48 <+0xb7c>
088b0d06 +0xb3a:  test   %al,%al
088b0d08 +0xb3c:  jne    088b0ca3 <+0xad7>
088b0d0a +0xb3e:  mov    -0xc(%ebp),%eax
088b0d0d +0xb41:  add    $0x20,%esp
088b0d10 +0xb44:  pop    %ebx
088b0d11 +0xb45:  pop    %esi
088b0d12 +0xb46:  pop    %ebp
088b0d13 +0xb47:  ret
088b0d14 +0xb48:  mov    %eax,(%esp)
088b0d17 +0xb4b:  call   08725ce0 <__cxa_begin_catch>
088b0d1c +0xb50:  mov    -0xc(%ebp),%eax
088b0d1f +0xb53:  mov    %eax,0x4(%esp)
088b0d23 +0xb57:  mov    0x10(%ebp),%eax
088b0d26 +0xb5a:  mov    %eax,(%esp)
088b0d29 +0xb5d:  call   088b051b <+0x34f>
088b0d2e +0xb62:  call   08724be0 <__cxa_rethrow>
088b0d33 +0xb67:  mov    %edx,%ebx
088b0d35 +0xb69:  mov    %eax,%esi
088b0d37 +0xb6b:  call   08725c30 <__cxa_end_catch>
088b0d3c +0xb70:  mov    %esi,%eax
088b0d3e +0xb72:  mov    %ebx,%edx
088b0d40 +0xb74:  mov    %eax,(%esp)
088b0d43 +0xb77:  call   08ae3750 <_Unwind_Resume>
088b0d48 +0xb7c:  push   %ebp
088b0d49 +0xb7d:  mov    %esp,%ebp
088b0d4b +0xb7f:  sub    $0x18,%esp
088b0d4e +0xb82:  mov    0xc(%ebp),%eax
088b0d51 +0xb85:  mov    %eax,0x4(%esp)
088b0d55 +0xb89:  mov    0x8(%ebp),%eax
088b0d58 +0xb8c:  mov    %eax,(%esp)
088b0d5b +0xb8f:  call   088b0d86 <+0xbba>
088b0d60 +0xb94:  xor    $0x1,%eax
088b0d63 +0xb97:  leave
088b0d64 +0xb98:  ret
088b0d65 +0xb99:  nop
088b0d66 +0xb9a:  push   %ebp
088b0d67 +0xb9b:  mov    %esp,%ebp
088b0d69 +0xb9d:  mov    0x8(%ebp),%eax
088b0d6c +0xba0:  mov    (%eax),%eax
088b0d6e +0xba2:  lea    0x14(%eax),%edx
088b0d71 +0xba5:  mov    0x8(%ebp),%eax
088b0d74 +0xba8:  mov    %edx,(%eax)
088b0d76 +0xbaa:  mov    0x8(%ebp),%eax
088b0d79 +0xbad:  pop    %ebp
088b0d7a +0xbae:  ret
088b0d7b +0xbaf:  nop
088b0d7c +0xbb0:  push   %ebp
088b0d7d +0xbb1:  mov    %esp,%ebp
088b0d7f +0xbb3:  mov    0x8(%ebp),%eax
088b0d82 +0xbb6:  mov    (%eax),%eax
088b0d84 +0xbb8:  pop    %ebp
088b0d85 +0xbb9:  ret
088b0d86 +0xbba:  push   %ebp
088b0d87 +0xbbb:  mov    %esp,%ebp
088b0d89 +0xbbd:  push   %ebx
088b0d8a +0xbbe:  sub    $0x14,%esp
088b0d8d +0xbc1:  mov    0x8(%ebp),%eax
088b0d90 +0xbc4:  mov    %eax,(%esp)
088b0d93 +0xbc7:  call   088b0db0 <+0xbe4>
088b0d98 +0xbcc:  mov    %eax,%ebx
088b0d9a +0xbce:  mov    0xc(%ebp),%eax
088b0d9d +0xbd1:  mov    %eax,(%esp)
088b0da0 +0xbd4:  call   088b0db0 <+0xbe4>
088b0da5 +0xbd9:  cmp    %eax,%ebx
088b0da7 +0xbdb:  sete   %al
088b0daa +0xbde:  add    $0x14,%esp
088b0dad +0xbe1:  pop    %ebx
088b0dae +0xbe2:  pop    %ebp
088b0daf +0xbe3:  ret
088b0db0 +0xbe4:  push   %ebp
088b0db1 +0xbe5:  mov    %esp,%ebp
088b0db3 +0xbe7:  mov    0x8(%ebp),%eax
088b0db6 +0xbea:  mov    (%eax),%eax
088b0db8 +0xbec:  pop    %ebp
088b0db9 +0xbed:  ret
088b0dba +0xbee:  nop
088b0dbb +0xbef:  nop
```

## 反编译 C

```c
// <global>::global @ 0x88b01cc

/* ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption() */

void ARAD::SCRIPT::AvatarFixedHiddenOption::_GLOBAL__I_AvatarFixedHiddenOption(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
