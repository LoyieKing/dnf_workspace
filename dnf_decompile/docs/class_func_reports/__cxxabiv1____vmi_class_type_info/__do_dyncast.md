# __do_dyncast

`_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE`

`__cxxabiv1::__vmi_class_type_info::__do_dyncast(int, __cxxabiv1::__class_type_info::__sub_kind, __cxxabiv1::__class_type_info const*, void const*, __cxxabiv1::__class_type_info const*, void const*, __cxxabiv1::__class_type_info::__dyncast_result&) const`

| 类 | 地址 |
|---|---|
| `__cxxabiv1::__vmi_class_type_info` | `0x08723200` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08723200  _ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE
#           __cxxabiv1::__vmi_class_type_info::__do_dyncast(int, __cxxabiv1::__class_type_info::__sub_kind, __cxxabiv1::__class_type_info const*, void const*, __cxxabiv1::__class_type_info const*, void const*, __cxxabiv1::__class_type_info::__dyncast_result&) const
# range [0x08723200, 0x087237df]
08723200 +0x000:  push   %ebp
08723201 +0x001:  mov    %esp,%ebp
08723203 +0x003:  push   %edi
08723204 +0x004:  push   %esi
08723205 +0x005:  push   %ebx
08723206 +0x006:  sub    $0x8c,%esp
0872320c +0x00c:  mov    0x24(%ebp),%esi
0872320f +0x00f:  call   08722df8 <__i686.get_pc_thunk.bx>
08723214 +0x014:  add    $0xc49984,%ebx
0872321a +0x01a:  testb  $0x10,0x10(%esi)
0872321e +0x01e:  je     08723229 <+0x29>
08723220 +0x020:  mov    0x8(%ebp),%edx
08723223 +0x023:  mov    0x8(%edx),%eax
08723226 +0x026:  mov    %eax,0x10(%esi)
08723229 +0x029:  mov    0x20(%ebp),%ecx
0872322c +0x02c:  cmp    %ecx,0x18(%ebp)
0872322f +0x02f:  je     08723678 <+0x478>
08723235 +0x035:  mov    0x8(%ebp),%eax
08723238 +0x038:  mov    0x4(%eax),%edi
0872323b +0x03b:  mov    0x14(%ebp),%edx
0872323e +0x03e:  mov    0x4(%edx),%eax
08723241 +0x041:  cmp    %edi,%eax
08723243 +0x043:  je     087236d8 <+0x4d8>
08723249 +0x049:  cmpb   $0x2a,(%edi)
0872324c +0x04c:  je     08723262 <+0x62>
0872324e +0x04e:  mov    %eax,0x4(%esp)
08723252 +0x052:  mov    %edi,(%esp)
08723255 +0x055:  call   0807e4e0 <_init+0xdd8>
0872325a +0x05a:  test   %eax,%eax
0872325c +0x05c:  je     087236d8 <+0x4d8>
08723262 +0x062:  mov    0xc(%ebp),%eax
08723265 +0x065:  mov    0x20(%ebp),%ecx
08723268 +0x068:  sub    0xc(%ebp),%ecx
0872326b +0x06b:  movb   $0x0,-0x49(%ebp)
0872326f +0x06f:  sar    $0x1f,%eax
08723272 +0x072:  not    %eax
08723274 +0x074:  and    %eax,%ecx
08723276 +0x076:  mov    %ecx,-0x48(%ebp)
08723279 +0x079:  mov    0x10(%ebp),%ecx
0872327c +0x07c:  lea    -0x2c(%ebp),%eax
0872327f +0x07f:  movb   $0x0,-0x5d(%ebp)
08723283 +0x083:  movb   $0x1,-0x51(%ebp)
08723287 +0x087:  mov    %eax,-0x58(%ebp)
0872328a +0x08a:  or     $0x1,%ecx
0872328d +0x08d:  mov    %ecx,-0x5c(%ebp)
08723290 +0x090:  mov    0x8(%ebp),%edx
08723293 +0x093:  mov    0xc(%edx),%edi
08723296 +0x096:  xchg   %ax,%ax
08723298 +0x098:  test   %edi,%edi
0872329a +0x09a:  je     08723658 <+0x458>
087232a0 +0x0a0:  mov    0x8(%ebp),%edx
087232a3 +0x0a3:  sub    $0x1,%edi
087232a6 +0x0a6:  mov    0x10(%esi),%ecx
087232a9 +0x0a9:  movl   $0x0,-0x2c(%ebp)
087232b0 +0x0b0:  movl   $0x0,-0x28(%ebp)
087232b7 +0x0b7:  mov    0x14(%edx,%edi,8),%eax
087232bb +0x0bb:  mov    0x10(%ebp),%edx
087232be +0x0be:  mov    %ecx,-0x40(%ebp)
087232c1 +0x0c1:  mov    %ecx,-0x1c(%ebp)
087232c4 +0x0c4:  mov    %eax,%ecx
087232c6 +0x0c6:  sar    $0x8,%ecx
087232c9 +0x0c9:  test   $0x1,%al
087232cb +0x0cb:  movl   $0x0,-0x24(%ebp)
087232d2 +0x0d2:  movl   $0x0,-0x20(%ebp)
087232d9 +0x0d9:  mov    %ecx,-0x3c(%ebp)
087232dc +0x0dc:  mov    %edx,-0x44(%ebp)
087232df +0x0df:  je     087232f4 <+0xf4>
087232e1 +0x0e1:  mov    -0x5c(%ebp),%ecx
087232e4 +0x0e4:  mov    0x18(%ebp),%edx
087232e7 +0x0e7:  mov    %ecx,-0x44(%ebp)
087232ea +0x0ea:  mov    -0x3c(%ebp),%ecx
087232ed +0x0ed:  add    (%edx),%ecx
087232ef +0x0ef:  mov    (%ecx),%edx
087232f1 +0x0f1:  mov    %edx,-0x3c(%ebp)
087232f4 +0x0f4:  mov    -0x48(%ebp),%edx
087232f7 +0x0f7:  mov    -0x3c(%ebp),%ecx
087232fa +0x0fa:  add    0x18(%ebp),%ecx
087232fd +0x0fd:  test   %edx,%edx
087232ff +0x0ff:  mov    %ecx,-0x3c(%ebp)
08723302 +0x102:  je     08723313 <+0x113>
08723304 +0x104:  cmp    %ecx,-0x48(%ebp)
08723307 +0x107:  setb   %cl
0872330a +0x10a:  cmp    -0x51(%ebp),%cl
0872330d +0x10d:  je     08723518 <+0x318>
08723313 +0x113:  test   $0x2,%al
08723315 +0x115:  jne    08723325 <+0x125>
08723317 +0x117:  cmpl   $0xfffffffe,0xc(%ebp)
0872331b +0x11b:  je     08723538 <+0x338>
08723321 +0x121:  andl   $0xfffffffd,-0x44(%ebp)
08723325 +0x125:  mov    0x8(%ebp),%edx
08723328 +0x128:  mov    0x10(%edx,%edi,8),%eax
0872332c +0x12c:  mov    -0x58(%ebp),%edx
0872332f +0x12f:  mov    (%eax),%ecx
08723331 +0x131:  mov    %edx,0x1c(%esp)
08723335 +0x135:  mov    0x1c(%ebp),%edx
08723338 +0x138:  mov    %eax,(%esp)
0872333b +0x13b:  mov    %ecx,-0x40(%ebp)
0872333e +0x13e:  mov    0x20(%ebp),%ecx
08723341 +0x141:  mov    %edx,0x14(%esp)
08723345 +0x145:  mov    0x14(%ebp),%edx
08723348 +0x148:  mov    %ecx,0x18(%esp)
0872334c +0x14c:  mov    -0x3c(%ebp),%ecx
0872334f +0x14f:  mov    %edx,0xc(%esp)
08723353 +0x153:  mov    0xc(%ebp),%edx
08723356 +0x156:  mov    %ecx,0x10(%esp)
0872335a +0x15a:  mov    -0x44(%ebp),%ecx
0872335d +0x15d:  mov    %edx,0x4(%esp)
08723361 +0x161:  mov    %ecx,0x8(%esp)
08723365 +0x165:  mov    -0x40(%ebp),%ecx
08723368 +0x168:  call   *0x1c(%ecx)
0872336b +0x16b:  mov    -0x20(%ebp),%edx
0872336e +0x16e:  mov    %edx,-0x50(%ebp)
08723371 +0x171:  mov    %al,-0x44(%ebp)
08723374 +0x174:  mov    -0x24(%ebp),%eax
08723377 +0x177:  or     0x8(%esi),%eax
0872337a +0x17a:  cmp    $0x2,%edx
0872337d +0x17d:  mov    %eax,-0x6c(%ebp)
08723380 +0x180:  mov    %eax,0x8(%esi)
08723383 +0x183:  je     087236b8 <+0x4b8>
08723389 +0x189:  cmp    $0x6,%edx
0872338c +0x18c:  je     087236b8 <+0x4b8>
08723392 +0x192:  cmpb   $0x0,-0x49(%ebp)
08723396 +0x196:  jne    08723458 <+0x258>
0872339c +0x19c:  mov    (%esi),%ecx
0872339e +0x19e:  test   %ecx,%ecx
087233a0 +0x1a0:  mov    %ecx,-0x40(%ebp)
087233a3 +0x1a3:  je     087235f8 <+0x3f8>
087233a9 +0x1a9:  mov    -0x2c(%ebp),%ecx
087233ac +0x1ac:  cmp    %ecx,-0x40(%ebp)
087233af +0x1af:  mov    %ecx,-0x3c(%ebp)
087233b2 +0x1b2:  je     08723590 <+0x390>
087233b8 +0x1b8:  mov    -0x3c(%ebp),%ecx
087233bb +0x1bb:  test   %ecx,%ecx
087233bd +0x1bd:  je     087235a0 <+0x3a0>
087233c3 +0x1c3:  mov    0xc(%esi),%ecx
087233c6 +0x1c6:  cmp    $0x3,%eax
087233c9 +0x1c9:  mov    %ecx,-0x3c(%ebp)
087233cc +0x1cc:  jle    08723480 <+0x280>
087233d2 +0x1d2:  test   $0x1,%al
087233d4 +0x1d4:  jne    08723568 <+0x368>
087233da +0x1da:  mov    -0x3c(%ebp),%eax
087233dd +0x1dd:  test   %eax,%eax
087233df +0x1df:  je     0872357d <+0x37d>
087233e5 +0x1e5:  lea    0x0(%esi),%esi
087233e8 +0x1e8:  mov    -0x3c(%ebp),%eax
087233eb +0x1eb:  test   %edx,%edx
087233ed +0x1ed:  mov    %edx,-0x6c(%ebp)
087233f0 +0x1f0:  mov    %eax,-0x44(%ebp)
087233f3 +0x1f3:  jne    08723403 <+0x203>
087233f5 +0x1f5:  movl   $0x1,-0x6c(%ebp)
087233fc +0x1fc:  movl   $0x1,-0x50(%ebp)
08723403 +0x203:  mov    -0x44(%ebp),%eax
08723406 +0x206:  xor    -0x6c(%ebp),%eax
08723409 +0x209:  cmp    $0x3,%eax
0872340c +0x20c:  jle    087234e8 <+0x2e8>
08723412 +0x212:  cmpl   $0x3,-0x6c(%ebp)
08723416 +0x216:  jg     08723548 <+0x348>
0872341c +0x21c:  mov    -0x44(%ebp),%eax
0872341f +0x21f:  mov    %eax,-0x6c(%ebp)
08723422 +0x222:  mov    -0x3c(%ebp),%ecx
08723425 +0x225:  testb  $0x2,-0x6c(%ebp)
08723429 +0x229:  mov    %ecx,0xc(%esi)
0872342c +0x22c:  jne    08723528 <+0x328>
08723432 +0x232:  testb  $0x1,-0x6c(%ebp)
08723436 +0x236:  je     08723528 <+0x328>
0872343c +0x23c:  mov    0x8(%esi),%eax
0872343f +0x23f:  mov    %eax,-0x6c(%ebp)
08723442 +0x242:  cmpl   $0x4,-0x6c(%ebp)
08723446 +0x246:  jne    08723298 <+0x98>
0872344c +0x24c:  movzbl -0x49(%ebp),%eax
08723450 +0x250:  jmp    0872352a <+0x32a>
08723455 +0x255:  lea    0x0(%esi),%esi
08723458 +0x258:  mov    (%esi),%ecx
0872345a +0x25a:  test   %ecx,%ecx
0872345c +0x25c:  mov    %ecx,-0x40(%ebp)
0872345f +0x25f:  jne    087233a9 <+0x1a9>
08723465 +0x265:  mov    -0x2c(%ebp),%ecx
08723468 +0x268:  test   %ecx,%ecx
0872346a +0x26a:  je     08723442 <+0x242>
0872346c +0x26c:  mov    0xc(%esi),%ecx
0872346f +0x26f:  cmp    $0x3,%eax
08723472 +0x272:  mov    %ecx,-0x3c(%ebp)
08723475 +0x275:  jg     087233d2 <+0x1d2>
0872347b +0x27b:  nop
0872347c +0x27c:  lea    0x0(%esi,%eiz,1),%esi
08723480 +0x280:  mov    -0x3c(%ebp),%eax
08723483 +0x283:  mov    %edx,-0x6c(%ebp)
08723486 +0x286:  test   %eax,%eax
08723488 +0x288:  mov    %eax,-0x44(%ebp)
0872348b +0x28b:  jle    087235b0 <+0x3b0>
08723491 +0x291:  test   %edx,%edx
08723493 +0x293:  jg     08723403 <+0x203>
08723499 +0x299:  cmpl   $0x3,-0x44(%ebp)
0872349d +0x29d:  jle    087234b6 <+0x2b6>
0872349f +0x29f:  testb  $0x1,-0x44(%ebp)
087234a3 +0x2a3:  je     087233f5 <+0x1f5>
087234a9 +0x2a9:  mov    0x8(%ebp),%eax
087234ac +0x2ac:  testb  $0x2,0x8(%eax)
087234b0 +0x2b0:  je     087233f5 <+0x1f5>
087234b6 +0x2b6:  mov    0xc(%ebp),%eax
087234b9 +0x2b9:  mov    -0x2c(%ebp),%edx
087234bc +0x2bc:  test   %eax,%eax
087234be +0x2be:  js     08723730 <+0x530>
087234c4 +0x2c4:  add    0xc(%ebp),%edx
087234c7 +0x2c7:  cmp    %edx,0x20(%ebp)
087234ca +0x2ca:  movl   $0x6,-0x6c(%ebp)
087234d1 +0x2d1:  movl   $0x6,-0x50(%ebp)
087234d8 +0x2d8:  jne    087233f5 <+0x1f5>
087234de +0x2de:  jmp    08723403 <+0x203>
087234e3 +0x2e3:  nop
087234e4 +0x2e4:  lea    0x0(%esi,%eiz,1),%esi
087234e8 +0x2e8:  mov    -0x6c(%ebp),%ecx
087234eb +0x2eb:  and    -0x44(%ebp),%ecx
087234ee +0x2ee:  cmp    $0x3,%ecx
087234f1 +0x2f1:  jg     087237bb <+0x5bb>
087234f7 +0x2f7:  mov    0x8(%esi),%edx
087234fa +0x2fa:  movl   $0x0,(%esi)
08723500 +0x300:  movl   $0x1,0xc(%esi)
08723507 +0x307:  movb   $0x1,-0x49(%ebp)
0872350b +0x30b:  mov    %edx,-0x6c(%ebp)
0872350e +0x30e:  jmp    08723442 <+0x242>
08723513 +0x313:  nop
08723514 +0x314:  lea    0x0(%esi,%eiz,1),%esi
08723518 +0x318:  movb   $0x1,-0x5d(%ebp)
0872351c +0x31c:  jmp    08723298 <+0x98>
08723521 +0x321:  lea    0x0(%esi,%eiz,1),%esi
08723528 +0x328:  xor    %eax,%eax
0872352a +0x32a:  add    $0x8c,%esp
08723530 +0x330:  pop    %ebx
08723531 +0x331:  pop    %esi
08723532 +0x332:  pop    %edi
08723533 +0x333:  pop    %ebp
08723534 +0x334:  ret
08723535 +0x335:  lea    0x0(%esi),%esi
08723538 +0x338:  testb  $0x3,-0x40(%ebp)
0872353c +0x33c:  je     08723298 <+0x98>
08723542 +0x342:  jmp    08723321 <+0x121>
08723547 +0x347:  nop
08723548 +0x348:  mov    -0x2c(%ebp),%eax
0872354b +0x34b:  mov    -0x50(%ebp),%edx
0872354e +0x34e:  movb   $0x0,-0x49(%ebp)
08723552 +0x352:  mov    %eax,(%esi)
08723554 +0x354:  mov    -0x28(%ebp),%eax
08723557 +0x357:  mov    %edx,-0x3c(%ebp)
0872355a +0x35a:  mov    %eax,0x4(%esi)
0872355d +0x35d:  jmp    08723422 <+0x222>
08723562 +0x362:  lea    0x0(%esi),%esi
08723568 +0x368:  testb  $0x2,0x10(%esi)
0872356c +0x36c:  jne    08723480 <+0x280>
08723572 +0x372:  mov    -0x3c(%ebp),%eax
08723575 +0x375:  test   %eax,%eax
08723577 +0x377:  jne    087233e8 <+0x1e8>
0872357d +0x37d:  movl   $0x1,-0x3c(%ebp)
08723584 +0x384:  jmp    087233e8 <+0x1e8>
08723589 +0x389:  lea    0x0(%esi,%eiz,1),%esi
08723590 +0x390:  mov    -0x28(%ebp),%eax
08723593 +0x393:  or     %eax,0x4(%esi)
08723596 +0x396:  jmp    08723442 <+0x242>
0872359b +0x39b:  nop
0872359c +0x39c:  lea    0x0(%esi,%eiz,1),%esi
087235a0 +0x3a0:  cmpb   $0x0,-0x44(%ebp)
087235a4 +0x3a4:  jne    087233c3 <+0x1c3>
087235aa +0x3aa:  jmp    08723442 <+0x242>
087235af +0x3af:  nop
087235b0 +0x3b0:  cmp    $0x3,%edx
087235b3 +0x3b3:  mov    %edx,-0x6c(%ebp)
087235b6 +0x3b6:  jg     08723630 <+0x430>
087235b8 +0x3b8:  mov    0xc(%ebp),%ecx
087235bb +0x3bb:  test   %ecx,%ecx
087235bd +0x3bd:  js     08723770 <+0x570>
087235c3 +0x3c3:  mov    -0x40(%ebp),%eax
087235c6 +0x3c6:  add    0xc(%ebp),%eax
087235c9 +0x3c9:  cmp    %eax,0x20(%ebp)
087235cc +0x3cc:  movl   $0x6,-0x44(%ebp)
087235d3 +0x3d3:  movl   $0x6,-0x3c(%ebp)
087235da +0x3da:  je     08723491 <+0x291>
087235e0 +0x3e0:  movl   $0x1,-0x44(%ebp)
087235e7 +0x3e7:  movl   $0x1,-0x3c(%ebp)
087235ee +0x3ee:  jmp    08723491 <+0x291>
087235f3 +0x3f3:  nop
087235f4 +0x3f4:  lea    0x0(%esi,%eiz,1),%esi
087235f8 +0x3f8:  mov    -0x2c(%ebp),%edx
087235fb +0x3fb:  mov    -0x28(%ebp),%ecx
087235fe +0x3fe:  test   %edx,%edx
08723600 +0x400:  mov    %edx,(%esi)
08723602 +0x402:  mov    %ecx,0x4(%esi)
08723605 +0x405:  je     08723623 <+0x423>
08723607 +0x407:  movzbl -0x44(%ebp),%edx
0872360b +0x40b:  test   %eax,%eax
0872360d +0x40d:  mov    %dl,-0x49(%ebp)
08723610 +0x410:  je     08723298 <+0x98>
08723616 +0x416:  mov    0x8(%ebp),%ecx
08723619 +0x419:  testb  $0x1,0x8(%ecx)
0872361d +0x41d:  je     0872370d <+0x50d>
08723623 +0x423:  movzbl -0x44(%ebp),%ecx
08723627 +0x427:  mov    %cl,-0x49(%ebp)
0872362a +0x42a:  jmp    08723442 <+0x242>
0872362f +0x42f:  nop
08723630 +0x430:  test   $0x1,%dl
08723633 +0x433:  je     08723642 <+0x442>
08723635 +0x435:  mov    0x8(%ebp),%ecx
08723638 +0x438:  testb  $0x2,0x8(%ecx)
0872363c +0x43c:  jne    087235b8 <+0x3b8>
08723642 +0x442:  movl   $0x1,-0x44(%ebp)
08723649 +0x449:  movl   $0x1,-0x3c(%ebp)
08723650 +0x450:  jmp    08723403 <+0x203>
08723655 +0x455:  lea    0x0(%esi),%esi
08723658 +0x458:  cmpb   $0x0,-0x5d(%ebp)
0872365c +0x45c:  je     0872344c <+0x24c>
08723662 +0x462:  cmpb   $0x0,-0x51(%ebp)
08723666 +0x466:  je     0872344c <+0x24c>
0872366c +0x46c:  movb   $0x0,-0x51(%ebp)
08723670 +0x470:  jmp    08723290 <+0x90>
08723675 +0x475:  lea    0x0(%esi),%esi
08723678 +0x478:  mov    0x8(%ebp),%eax
0872367b +0x47b:  mov    0x1c(%ebp),%edx
0872367e +0x47e:  mov    0x4(%eax),%edi
08723681 +0x481:  mov    0x4(%edx),%eax
08723684 +0x484:  cmp    %eax,%edi
08723686 +0x486:  je     087236a5 <+0x4a5>
08723688 +0x488:  cmpb   $0x2a,(%edi)
0872368b +0x48b:  je     0872323b <+0x3b>
08723691 +0x491:  mov    %eax,0x4(%esp)
08723695 +0x495:  mov    %edi,(%esp)
08723698 +0x498:  call   0807e4e0 <_init+0xdd8>
0872369d +0x49d:  test   %eax,%eax
0872369f +0x49f:  jne    0872323b <+0x3b>
087236a5 +0x4a5:  mov    0x10(%ebp),%ecx
087236a8 +0x4a8:  xor    %eax,%eax
087236aa +0x4aa:  mov    %ecx,0x8(%esi)
087236ad +0x4ad:  jmp    0872352a <+0x32a>
087236b2 +0x4b2:  lea    0x0(%esi),%esi
087236b8 +0x4b8:  mov    %edx,%edi
087236ba +0x4ba:  mov    -0x2c(%ebp),%edx
087236bd +0x4bd:  movzbl -0x44(%ebp),%eax
087236c1 +0x4c1:  mov    %edi,0xc(%esi)
087236c4 +0x4c4:  mov    %edx,(%esi)
087236c6 +0x4c6:  mov    -0x28(%ebp),%edx
087236c9 +0x4c9:  mov    %edx,0x4(%esi)
087236cc +0x4cc:  jmp    0872352a <+0x32a>
087236d1 +0x4d1:  lea    0x0(%esi,%eiz,1),%esi
087236d8 +0x4d8:  mov    0xc(%ebp),%ecx
087236db +0x4db:  mov    0x18(%ebp),%eax
087236de +0x4de:  mov    0x10(%ebp),%edx
087236e1 +0x4e1:  test   %ecx,%ecx
087236e3 +0x4e3:  mov    %eax,(%esi)
087236e5 +0x4e5:  mov    %edx,0x4(%esi)
087236e8 +0x4e8:  js     08723718 <+0x518>
087236ea +0x4ea:  mov    0x18(%ebp),%eax
087236ed +0x4ed:  add    0xc(%ebp),%eax
087236f0 +0x4f0:  cmp    %eax,0x20(%ebp)
087236f3 +0x4f3:  sete   %al
087236f6 +0x4f6:  movzbl %al,%eax
087236f9 +0x4f9:  lea    0x1(%eax,%eax,4),%eax
087236fd +0x4fd:  mov    %eax,0xc(%esi)
08723700 +0x500:  add    $0x8c,%esp
08723706 +0x506:  xor    %eax,%eax
08723708 +0x508:  pop    %ebx
08723709 +0x509:  pop    %esi
0872370a +0x50a:  pop    %edi
0872370b +0x50b:  pop    %ebp
0872370c +0x50c:  ret
0872370d +0x50d:  mov    %edx,%eax
0872370f +0x50f:  jmp    0872352a <+0x32a>
08723714 +0x514:  lea    0x0(%esi,%eiz,1),%esi
08723718 +0x518:  cmpl   $0xfffffffe,0xc(%ebp)
0872371c +0x51c:  jne    08723528 <+0x328>
08723722 +0x522:  movl   $0x1,0xc(%esi)
08723729 +0x529:  xor    %eax,%eax
0872372b +0x52b:  jmp    0872352a <+0x32a>
08723730 +0x530:  cmpl   $0xfffffffe,0xc(%ebp)
08723734 +0x534:  je     087233f5 <+0x1f5>
0872373a +0x53a:  mov    0x14(%ebp),%ecx
0872373d +0x53d:  mov    (%ecx),%eax
0872373f +0x53f:  mov    0x20(%ebp),%ecx
08723742 +0x542:  mov    %edx,0x8(%esp)
08723746 +0x546:  mov    0xc(%ebp),%edx
08723749 +0x549:  mov    %ecx,0x10(%esp)
0872374d +0x54d:  mov    0x1c(%ebp),%ecx
08723750 +0x550:  mov    %edx,0x4(%esp)
08723754 +0x554:  mov    %ecx,0xc(%esp)
08723758 +0x558:  mov    0x14(%ebp),%ecx
0872375b +0x55b:  mov    %ecx,(%esp)
0872375e +0x55e:  call   *0x20(%eax)
08723761 +0x561:  mov    %eax,-0x50(%ebp)
08723764 +0x564:  mov    %eax,-0x6c(%ebp)
08723767 +0x567:  jmp    08723403 <+0x203>
0872376c +0x56c:  lea    0x0(%esi,%eiz,1),%esi
08723770 +0x570:  cmpl   $0xfffffffe,0xc(%ebp)
08723774 +0x574:  je     087235e0 <+0x3e0>
0872377a +0x57a:  mov    0x20(%ebp),%ecx
0872377d +0x57d:  mov    0x14(%ebp),%eax
08723780 +0x580:  mov    %edx,-0x64(%ebp)
08723783 +0x583:  mov    (%eax),%eax
08723785 +0x585:  mov    %ecx,0x10(%esp)
08723789 +0x589:  mov    -0x40(%ebp),%ecx
0872378c +0x58c:  mov    %eax,-0x70(%ebp)
0872378f +0x58f:  mov    0x1c(%ebp),%eax
08723792 +0x592:  mov    %ecx,0x8(%esp)
08723796 +0x596:  mov    0x14(%ebp),%ecx
08723799 +0x599:  mov    %eax,0xc(%esp)
0872379d +0x59d:  mov    0xc(%ebp),%eax
087237a0 +0x5a0:  mov    %ecx,(%esp)
087237a3 +0x5a3:  mov    -0x70(%ebp),%ecx
087237a6 +0x5a6:  mov    %eax,0x4(%esp)
087237aa +0x5aa:  call   *0x20(%ecx)
087237ad +0x5ad:  mov    -0x64(%ebp),%edx
087237b0 +0x5b0:  mov    %eax,-0x3c(%ebp)
087237b3 +0x5b3:  mov    %eax,-0x44(%ebp)
087237b6 +0x5b6:  jmp    08723491 <+0x291>
087237bb +0x5bb:  movl   $0x0,(%esi)
087237c1 +0x5c1:  mov    $0x1,%eax
087237c6 +0x5c6:  movl   $0x2,0xc(%esi)
087237cd +0x5cd:  jmp    0872352a <+0x32a>
087237d2 +0x5d2:  nop
087237d3 +0x5d3:  nop
087237d4 +0x5d4:  nop
087237d5 +0x5d5:  nop
087237d6 +0x5d6:  nop
087237d7 +0x5d7:  nop
087237d8 +0x5d8:  nop
087237d9 +0x5d9:  nop
087237da +0x5da:  nop
087237db +0x5db:  nop
087237dc +0x5dc:  nop
087237dd +0x5dd:  nop
087237de +0x5de:  nop
087237df +0x5df:  nop
```

## 反编译 C

```c
// __cxxabiv1::__vmi_class_type_info::__do_dyncast @ 0x8723200

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__vmi_class_type_info::__do_dyncast(int, __cxxabiv1::__class_type_info::__sub_kind,
   __cxxabiv1::__class_type_info const*, void const*, __cxxabiv1::__class_type_info const*, void
   const*, __cxxabiv1::__class_type_info::__dyncast_result&) const */

char __thiscall
__cxxabiv1::__vmi_class_type_info::__do_dyncast
          (__vmi_class_type_info *this,int param_1,uint param_3,int *param_4,int *param_5,
          int param_6,int *param_7,int *param_8)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  char *__s1;
  uint local_70;
  bool local_55;
  uint local_54;
  char local_4d;
  uint local_48;
  int local_44;
  uint local_40;
  int local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  
  if ((*(byte *)(param_8 + 4) & 0x10) != 0) {
    param_8[4] = *(int *)(this + 8);
  }
  if (param_5 == param_7) {
    __s1 = *(char **)(this + 4);
    if ((__s1 == *(char **)(param_6 + 4)) ||
       ((*__s1 != '*' && (iVar4 = strcmp(__s1,*(char **)(param_6 + 4)), iVar4 == 0)))) {
      param_8[2] = param_3;
      return '\0';
    }
  }
  else {
    __s1 = *(char **)(this + 4);
  }
  if (((char *)param_4[1] == __s1) ||
     ((*__s1 != '*' && (iVar4 = strcmp(__s1,(char *)param_4[1]), iVar4 == 0)))) {
    *param_8 = (int)param_5;
    param_8[1] = param_3;
    if (param_1 < 0) {
      if (param_1 == -2) {
        param_8[3] = 1;
      }
      return '\0';
    }
    param_8[3] = (uint)(param_7 == (int *)((int)param_5 + param_1)) * 5 + 1;
    return '\0';
  }
  local_4d = '\0';
  uVar5 = (int)param_7 - param_1 & ~(param_1 >> 0x1f);
  bVar2 = false;
  local_55 = true;
  do {
    iVar4 = *(int *)(this + 0xc);
LAB_08723298:
    while (iVar4 != 0) {
      iVar4 = iVar4 + -1;
      local_20 = param_8[4];
      local_30 = 0;
      local_2c = 0;
      uVar1 = *(uint *)(this + iVar4 * 8 + 0x14);
      local_40 = (int)uVar1 >> 8;
      local_28 = 0;
      local_24 = 0;
      local_48 = param_3;
      if ((uVar1 & 1) != 0) {
        local_40 = *(int *)(local_40 + *param_5);
        local_48 = param_3 | 1;
      }
      if ((uVar5 == 0) || (uVar5 < local_40 + (int)param_5 != local_55)) {
        if ((uVar1 & 2) == 0) goto code_r0x08723317;
        goto LAB_08723325;
      }
      bVar2 = true;
    }
    if (!bVar2) {
      return local_4d;
    }
    if (local_55 == false) {
      return local_4d;
    }
    local_55 = false;
  } while( true );
code_r0x08723317:
  if ((param_1 == -2) && ((local_20 & 3) == 0)) goto LAB_08723298;
  local_48 = local_48 & 0xfffffffd;
LAB_08723325:
  cVar3 = (**(code **)(**(int **)(this + iVar4 * 8 + 0x10) + 0x1c))
                    (*(int **)(this + iVar4 * 8 + 0x10),param_1,local_48,param_4,
                     local_40 + (int)param_5,param_6,param_7,&local_30);
  uVar1 = local_24;
  local_54 = local_24;
  local_70 = local_28 | param_8[2];
  param_8[2] = local_70;
  if ((local_24 == 2) || (local_24 == 6)) {
    param_8[3] = local_24;
    *param_8 = local_30;
    param_8[1] = local_2c;
    return cVar3;
  }
  if (local_4d == '\0') {
    local_44 = *param_8;
    if (local_44 == 0) {
      *param_8 = local_30;
      param_8[1] = local_2c;
      local_4d = cVar3;
      if (local_30 != 0) {
        if (local_70 == 0) goto LAB_08723298;
        if (((byte)this[8] & 1) == 0) {
          return cVar3;
        }
      }
      goto LAB_08723442;
    }
LAB_087233a9:
    if (local_44 == local_30) {
      param_8[1] = param_8[1] | local_2c;
      goto LAB_08723442;
    }
    if ((local_30 == 0) && (cVar3 == '\0')) goto LAB_08723442;
    local_40 = param_8[3];
  }
  else {
    local_44 = *param_8;
    if (local_44 != 0) goto LAB_087233a9;
    if (local_30 == 0) goto LAB_08723442;
    local_40 = param_8[3];
  }
  if ((3 < (int)local_70) && (((local_70 & 1) == 0 || ((*(byte *)(param_8 + 4) & 2) == 0)))) {
    if (local_40 == 0) {
      local_40 = 1;
    }
    if (local_24 == 0) goto LAB_087233f5;
    goto LAB_08723403;
  }
  if (0 < (int)local_40) goto LAB_08723491;
  if ((3 < (int)local_24) && (((local_24 & 1) == 0 || (((byte)this[8] & 2) == 0)))) {
    local_40 = 1;
    goto LAB_08723403;
  }
  if (param_1 < 0) {
    if (param_1 == -2) goto LAB_087235e0;
    local_40 = (**(code **)(*param_4 + 0x20))(param_4,param_1,local_44,param_6,param_7);
  }
  else {
    local_40 = 6;
    if (param_7 != (int *)(local_44 + param_1)) {
LAB_087235e0:
      local_40 = 1;
    }
  }
LAB_08723491:
  if (0 < (int)uVar1) goto LAB_08723403;
  if (((int)local_40 < 4) || (((local_40 & 1) != 0 && (((byte)this[8] & 2) != 0)))) {
    if (param_1 < 0) {
      if (param_1 == -2) goto LAB_087233f5;
      local_54 = (**(code **)(*param_4 + 0x20))(param_4,param_1,local_30,param_6,param_7);
    }
    else {
      local_54 = 6;
      if (param_7 != (int *)(local_30 + param_1)) goto LAB_087233f5;
    }
  }
  else {
LAB_087233f5:
    local_54 = 1;
  }
LAB_08723403:
  if ((int)(local_40 ^ local_54) < 4) {
    if (3 < (int)(local_54 & local_40)) {
      *param_8 = 0;
      param_8[3] = 2;
      return '\x01';
    }
    local_70 = param_8[2];
    *param_8 = 0;
    param_8[3] = 1;
    local_4d = '\x01';
  }
  else {
    if (3 < (int)local_54) {
      local_40 = local_54;
      local_4d = '\0';
      *param_8 = local_30;
      param_8[1] = local_2c;
    }
    param_8[3] = local_40;
    if ((local_40 & 2) != 0) {
      return '\0';
    }
    if ((local_40 & 1) == 0) {
      return '\0';
    }
    local_70 = param_8[2];
  }
LAB_08723442:
  if (local_70 == 4) {
    return local_4d;
  }
  goto LAB_08723298;
}
```
