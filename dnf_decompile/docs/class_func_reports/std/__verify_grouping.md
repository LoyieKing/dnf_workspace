# __verify_grouping

`_ZSt17__verify_groupingPKcjRKSs`

`std::__verify_grouping(char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)`

| 类 | 地址 |
|---|---|
| `std` | `0x087272d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087272d0  _ZSt17__verify_groupingPKcjRKSs
#           std::__verify_grouping(char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
# range [0x087272d0, 0x0872ec9f]
087272d0 +0x0000:  push   %ebp
087272d1 +0x0001:  mov    %esp,%ebp
087272d3 +0x0003:  mov    0x10(%ebp),%eax
087272d6 +0x0006:  push   %edi
087272d7 +0x0007:  mov    0x8(%ebp),%edi
087272da +0x000a:  push   %esi
087272db +0x000b:  mov    0xc(%ebp),%esi
087272de +0x000e:  push   %ebx
087272df +0x000f:  mov    (%eax),%ebx
087272e1 +0x0011:  sub    $0x1,%esi
087272e4 +0x0014:  mov    -0xc(%ebx),%edx
087272e7 +0x0017:  sub    $0x1,%edx
087272ea +0x001a:  cmp    %edx,%esi
087272ec +0x001c:  jbe    087272f0 <+0x20>
087272ee +0x001e:  mov    %edx,%esi
087272f0 +0x0020:  xor    %ecx,%ecx
087272f2 +0x0022:  test   %esi,%esi
087272f4 +0x0024:  mov    $0x1,%eax
087272f9 +0x0029:  jne    08727328 <+0x58>
087272fb +0x002b:  nop
087272fc +0x002c:  lea    0x0(%esi,%eiz,1),%esi
08727300 +0x0030:  test   %edx,%edx
08727302 +0x0032:  je     08727308 <+0x38>
08727304 +0x0034:  test   %al,%al
08727306 +0x0036:  jne    08727348 <+0x78>
08727308 +0x0038:  movzbl (%edi,%esi,1),%ecx
0872730c +0x003c:  lea    0x0(%esi,%eiz,1),%esi
08727310 +0x0040:  lea    -0x1(%ecx),%edx
08727313 +0x0043:  cmp    $0x7d,%dl
08727316 +0x0046:  ja     0872731f <+0x4f>
08727318 +0x0048:  cmp    %cl,(%ebx)
0872731a +0x004a:  setle  %dl
0872731d +0x004d:  and    %edx,%eax
0872731f +0x004f:  pop    %ebx
08727320 +0x0050:  pop    %esi
08727321 +0x0051:  pop    %edi
08727322 +0x0052:  pop    %ebp
08727323 +0x0053:  ret
08727324 +0x0054:  lea    0x0(%esi,%eiz,1),%esi
08727328 +0x0058:  movzbl (%ebx,%edx,1),%eax
0872732c +0x005c:  cmp    (%edi,%ecx,1),%al
0872732f +0x005f:  sete   %al
08727332 +0x0062:  add    $0x1,%ecx
08727335 +0x0065:  sub    $0x1,%edx
08727338 +0x0068:  cmp    %esi,%ecx
0872733a +0x006a:  jae    08727300 <+0x30>
0872733c +0x006c:  test   %al,%al
0872733e +0x006e:  je     08727300 <+0x30>
08727340 +0x0070:  jmp    08727328 <+0x58>
08727342 +0x0072:  lea    0x0(%esi),%esi
08727348 +0x0078:  movzbl (%edi,%esi,1),%ecx
0872734c +0x007c:  lea    0x0(%esi,%eiz,1),%esi
08727350 +0x0080:  cmp    %cl,(%ebx,%edx,1)
08727353 +0x0083:  sete   %al
08727356 +0x0086:  sub    $0x1,%edx
08727359 +0x0089:  je     08727310 <+0x40>
0872735b +0x008b:  test   %al,%al
0872735d +0x008d:  je     08727310 <+0x40>
0872735f +0x008f:  jmp    08727350 <+0x80>
08727361 +0x0091:  nop
08727362 +0x0092:  nop
08727363 +0x0093:  nop
08727364 +0x0094:  nop
08727365 +0x0095:  nop
08727366 +0x0096:  nop
08727367 +0x0097:  nop
08727368 +0x0098:  nop
08727369 +0x0099:  nop
0872736a +0x009a:  nop
0872736b +0x009b:  nop
0872736c +0x009c:  nop
0872736d +0x009d:  nop
0872736e +0x009e:  nop
0872736f +0x009f:  nop
08727370 +0x00a0:  push   %ebp
08727371 +0x00a1:  mov    %esp,%ebp
08727373 +0x00a3:  mov    0x8(%ebp),%eax
08727376 +0x00a6:  cmpb   $0x0,0x70(%eax)
0872737a +0x00aa:  jne    0872739b <+0xcb>
0872737c +0x00ac:  mov    0x8(%eax),%edx
0872737f +0x00af:  movb   $0x1,0x70(%eax)
08727383 +0x00b3:  mov    %edx,0x68(%eax)
08727386 +0x00b6:  mov    0xc(%eax),%edx
08727389 +0x00b9:  mov    %edx,0x6c(%eax)
0872738c +0x00bc:  lea    0x67(%eax),%edx
0872738f +0x00bf:  mov    %edx,0x4(%eax)
08727392 +0x00c2:  mov    %edx,0x8(%eax)
08727395 +0x00c5:  lea    0x68(%eax),%edx
08727398 +0x00c8:  mov    %edx,0xc(%eax)
0872739b +0x00cb:  pop    %ebp
0872739c +0x00cc:  ret
0872739d +0x00cd:  nop
0872739e +0x00ce:  nop
0872739f +0x00cf:  nop
087273a0 +0x00d0:  push   %ebp
087273a1 +0x00d1:  mov    %esp,%ebp
087273a3 +0x00d3:  mov    0x8(%ebp),%eax
087273a6 +0x00d6:  push   %ebx
087273a7 +0x00d7:  cmpb   $0x0,0x70(%eax)
087273ab +0x00db:  je     087273d2 <+0x102>
087273ad +0x00dd:  mov    0x8(%eax),%edx
087273b0 +0x00e0:  cmp    0x4(%eax),%edx
087273b3 +0x00e3:  mov    0x6c(%eax),%ecx
087273b6 +0x00e6:  mov    0x5c(%eax),%ebx
087273b9 +0x00e9:  setne  %dl
087273bc +0x00ec:  movzbl %dl,%edx
087273bf +0x00ef:  add    0x68(%eax),%edx
087273c2 +0x00f2:  mov    %ebx,0x4(%eax)
087273c5 +0x00f5:  mov    %ecx,0xc(%eax)
087273c8 +0x00f8:  mov    %edx,0x68(%eax)
087273cb +0x00fb:  mov    %edx,0x8(%eax)
087273ce +0x00fe:  movb   $0x0,0x70(%eax)
087273d2 +0x0102:  pop    %ebx
087273d3 +0x0103:  pop    %ebp
087273d4 +0x0104:  ret
087273d5 +0x0105:  nop
087273d6 +0x0106:  nop
087273d7 +0x0107:  nop
087273d8 +0x0108:  nop
087273d9 +0x0109:  nop
087273da +0x010a:  nop
087273db +0x010b:  nop
087273dc +0x010c:  nop
087273dd +0x010d:  nop
087273de +0x010e:  nop
087273df +0x010f:  nop
087273e0 +0x0110:  push   %ebp
087273e1 +0x0111:  mov    %esp,%ebp
087273e3 +0x0113:  sub    $0x58,%esp
087273e6 +0x0116:  mov    %ebx,-0xc(%ebp)
087273e9 +0x0119:  mov    0x8(%ebp),%ebx
087273ec +0x011c:  mov    %esi,-0x8(%ebp)
087273ef +0x011f:  mov    0xc(%ebp),%esi
087273f2 +0x0122:  mov    %edi,-0x4(%ebp)
087273f5 +0x0125:  mov    %gs:0x14,%eax
087273fb +0x012b:  mov    %eax,-0x1c(%ebp)
087273fe +0x012e:  xor    %eax,%eax
08727400 +0x0130:  testb  $0x8,0x40(%ebx)
08727404 +0x0134:  je     0872740c <+0x13c>
08727406 +0x0136:  cmpb   $0x0,0x66(%ebx)
0872740a +0x013a:  je     08727430 <+0x160>
0872740c +0x013c:  mov    $0xffffffff,%eax
08727411 +0x0141:  mov    -0x1c(%ebp),%edx
08727414 +0x0144:  xor    %gs:0x14,%edx
0872741b +0x014b:  jne    087274e9 <+0x219>
08727421 +0x0151:  mov    -0xc(%ebp),%ebx
08727424 +0x0154:  mov    -0x8(%ebp),%esi
08727427 +0x0157:  mov    -0x4(%ebp),%edi
0872742a +0x015a:  mov    %ebp,%esp
0872742c +0x015c:  pop    %ebp
0872742d +0x015d:  ret
0872742e +0x015e:  xchg   %ax,%ax
08727430 +0x0160:  mov    0x8(%ebx),%eax
08727433 +0x0163:  cmp    %eax,0x4(%ebx)
08727436 +0x0166:  movzbl 0x70(%ebx),%edi
0872743a +0x016a:  jae    08727470 <+0x1a0>
0872743c +0x016c:  lea    -0x1(%eax),%edx
0872743f +0x016f:  mov    %edx,0x8(%ebx)
08727442 +0x0172:  movzbl -0x1(%eax),%edx
08727446 +0x0176:  xor    %eax,%eax
08727448 +0x0178:  cmp    $0xffffffff,%esi
0872744b +0x017b:  je     08727411 <+0x141>
0872744d +0x017d:  cmp    %esi,%edx
0872744f +0x017f:  mov    %edx,%eax
08727451 +0x0181:  je     08727411 <+0x141>
08727453 +0x0183:  mov    %edi,%edx
08727455 +0x0185:  test   %dl,%dl
08727457 +0x0187:  jne    0872740c <+0x13c>
08727459 +0x0189:  cmpb   $0x0,0x70(%ebx)
0872745d +0x018d:  je     087274c5 <+0x1f5>
0872745f +0x018f:  mov    0x8(%ebx),%eax
08727462 +0x0192:  mov    %esi,%edx
08727464 +0x0194:  movb   $0x1,0x65(%ebx)
08727468 +0x0198:  mov    %dl,(%eax)
0872746a +0x019a:  mov    %esi,%eax
0872746c +0x019c:  jmp    08727411 <+0x141>
0872746e +0x019e:  xchg   %ax,%ax
08727470 +0x01a0:  mov    (%ebx),%eax
08727472 +0x01a2:  lea    -0x2c(%ebp),%edx
08727475 +0x01a5:  movl   $0x18,0x14(%esp)
0872747d +0x01ad:  movl   $0x1,0x10(%esp)
08727485 +0x01b5:  movl   $0xffffffff,0x8(%esp)
0872748d +0x01bd:  movl   $0xffffffff,0xc(%esp)
08727495 +0x01c5:  mov    %ebx,0x4(%esp)
08727499 +0x01c9:  mov    %edx,(%esp)
0872749c +0x01cc:  call   *0x10(%eax)
0872749f +0x01cf:  mov    -0x2c(%ebp),%eax
087274a2 +0x01d2:  and    -0x28(%ebp),%eax
087274a5 +0x01d5:  sub    $0x4,%esp
087274a8 +0x01d8:  cmp    $0xffffffff,%eax
087274ab +0x01db:  je     0872740c <+0x13c>
087274b1 +0x01e1:  mov    (%ebx),%eax
087274b3 +0x01e3:  mov    %ebx,(%esp)
087274b6 +0x01e6:  call   *0x24(%eax)
087274b9 +0x01e9:  cmp    $0xffffffff,%eax
087274bc +0x01ec:  mov    %eax,%edx
087274be +0x01ee:  jne    08727446 <+0x176>
087274c0 +0x01f0:  jmp    0872740c <+0x13c>
087274c5 +0x01f5:  mov    0x8(%ebx),%eax
087274c8 +0x01f8:  lea    0x68(%ebx),%edx
087274cb +0x01fb:  movb   $0x1,0x70(%ebx)
087274cf +0x01ff:  mov    %eax,0x68(%ebx)
087274d2 +0x0202:  mov    0xc(%ebx),%eax
087274d5 +0x0205:  mov    %edx,0xc(%ebx)
087274d8 +0x0208:  mov    %eax,0x6c(%ebx)
087274db +0x020b:  lea    0x67(%ebx),%eax
087274de +0x020e:  mov    %eax,0x4(%ebx)
087274e1 +0x0211:  mov    %eax,0x8(%ebx)
087274e4 +0x0214:  jmp    08727462 <+0x192>
087274e9 +0x0219:  call   0807d980 <_init+0x278>
087274ee +0x021e:  nop
087274ef +0x021f:  nop
087274f0 +0x0220:  push   %ebp
087274f1 +0x0221:  mov    %esp,%ebp
087274f3 +0x0223:  sub    $0x18,%esp
087274f6 +0x0226:  mov    0x8(%ebp),%eax
087274f9 +0x0229:  mov    0x10(%eax),%edx
087274fc +0x022c:  cmp    0x14(%eax),%edx
087274ff +0x022f:  jb     08727508 <+0x238>
08727501 +0x0231:  xor    %eax,%eax
08727503 +0x0233:  leave
08727504 +0x0234:  ret
08727505 +0x0235:  lea    0x0(%esi),%esi
08727508 +0x0238:  mov    (%eax),%edx
0872750a +0x023a:  movl   $0xffffffff,0x4(%esp)
08727512 +0x0242:  mov    %eax,(%esp)
08727515 +0x0245:  call   *0x34(%edx)
08727518 +0x0248:  cmp    $0xffffffff,%eax
0872751b +0x024b:  je     08727503 <+0x233>
0872751d +0x024d:  xor    %eax,%eax
0872751f +0x024f:  jmp    08727503 <+0x233>
08727521 +0x0251:  nop
08727522 +0x0252:  nop
08727523 +0x0253:  nop
08727524 +0x0254:  nop
08727525 +0x0255:  nop
08727526 +0x0256:  nop
08727527 +0x0257:  nop
08727528 +0x0258:  nop
08727529 +0x0259:  nop
0872752a +0x025a:  nop
0872752b +0x025b:  nop
0872752c +0x025c:  nop
0872752d +0x025d:  nop
0872752e +0x025e:  nop
0872752f +0x025f:  nop
08727530 +0x0260:  push   %ebp
08727531 +0x0261:  mov    %esp,%ebp
08727533 +0x0263:  sub    $0x8,%esp
08727536 +0x0266:  mov    0x8(%ebp),%eax
08727539 +0x0269:  mov    %ebx,(%esp)
0872753c +0x026c:  mov    0xc(%ebp),%ebx
0872753f +0x026f:  mov    %esi,0x4(%esp)
08727543 +0x0273:  mov    0x40(%eax),%ecx
08727546 +0x0276:  test   $0x8,%cl
08727549 +0x0279:  je     08727588 <+0x2b8>
0872754b +0x027b:  test   %ebx,%ebx
0872754d +0x027d:  jle    08727588 <+0x2b8>
0872754f +0x027f:  mov    0x5c(%eax),%edx
08727552 +0x0282:  and    $0x10,%ecx
08727555 +0x0285:  lea    (%edx,%ebx,1),%esi
08727558 +0x0288:  mov    %edx,0x4(%eax)
0872755b +0x028b:  mov    %edx,0x8(%eax)
0872755e +0x028e:  mov    %esi,0xc(%eax)
08727561 +0x0291:  jne    08727599 <+0x2c9>
08727563 +0x0293:  movl   $0x0,0x14(%eax)
0872756a +0x029a:  movl   $0x0,0x10(%eax)
08727571 +0x02a1:  movl   $0x0,0x18(%eax)
08727578 +0x02a8:  mov    (%esp),%ebx
0872757b +0x02ab:  mov    0x4(%esp),%esi
0872757f +0x02af:  mov    %ebp,%esp
08727581 +0x02b1:  pop    %ebp
08727582 +0x02b2:  ret
08727583 +0x02b3:  nop
08727584 +0x02b4:  lea    0x0(%esi,%eiz,1),%esi
08727588 +0x02b8:  mov    0x5c(%eax),%edx
0872758b +0x02bb:  and    $0x10,%ecx
0872758e +0x02be:  mov    %edx,0x4(%eax)
08727591 +0x02c1:  mov    %edx,0x8(%eax)
08727594 +0x02c4:  mov    %edx,0xc(%eax)
08727597 +0x02c7:  je     08727563 <+0x293>
08727599 +0x02c9:  test   %ebx,%ebx
0872759b +0x02cb:  jne    08727563 <+0x293>
0872759d +0x02cd:  mov    0x60(%eax),%ecx
087275a0 +0x02d0:  cmp    $0x1,%ecx
087275a3 +0x02d3:  jbe    08727563 <+0x293>
087275a5 +0x02d5:  mov    %edx,0x14(%eax)
087275a8 +0x02d8:  mov    %edx,0x10(%eax)
087275ab +0x02db:  lea    -0x1(%edx,%ecx,1),%edx
087275af +0x02df:  mov    %edx,0x18(%eax)
087275b2 +0x02e2:  mov    (%esp),%ebx
087275b5 +0x02e5:  mov    0x4(%esp),%esi
087275b9 +0x02e9:  mov    %ebp,%esp
087275bb +0x02eb:  pop    %ebp
087275bc +0x02ec:  ret
087275bd +0x02ed:  nop
087275be +0x02ee:  nop
087275bf +0x02ef:  nop
087275c0 +0x02f0:  push   %ebp
087275c1 +0x02f1:  mov    %esp,%ebp
087275c3 +0x02f3:  mov    0x8(%ebp),%eax
087275c6 +0x02f6:  pop    %ebp
087275c7 +0x02f7:  add    $0x8,%eax
087275ca +0x02fa:  ret
087275cb +0x02fb:  nop
087275cc +0x02fc:  nop
087275cd +0x02fd:  nop
087275ce +0x02fe:  nop
087275cf +0x02ff:  nop
087275d0 +0x0300:  push   %ebp
087275d1 +0x0301:  mov    %esp,%ebp
087275d3 +0x0303:  mov    0x8(%ebp),%eax
087275d6 +0x0306:  pop    %ebp
087275d7 +0x0307:  add    $0x4,%eax
087275da +0x030a:  ret
087275db +0x030b:  nop
087275dc +0x030c:  nop
087275dd +0x030d:  nop
087275de +0x030e:  nop
087275df +0x030f:  nop
087275e0 +0x0310:  push   %ebp
087275e1 +0x0311:  mov    %esp,%ebp
087275e3 +0x0313:  mov    0x8(%ebp),%eax
087275e6 +0x0316:  pop    %ebp
087275e7 +0x0317:  add    $0xc,%eax
087275ea +0x031a:  ret
087275eb +0x031b:  nop
087275ec +0x031c:  nop
087275ed +0x031d:  nop
087275ee +0x031e:  nop
087275ef +0x031f:  nop
087275f0 +0x0320:  push   %ebp
087275f1 +0x0321:  mov    %esp,%ebp
087275f3 +0x0323:  mov    0x8(%ebp),%eax
087275f6 +0x0326:  cmpb   $0x0,0x74(%eax)
087275fa +0x032a:  jne    0872761b <+0x34b>
087275fc +0x032c:  mov    0x8(%eax),%edx
087275ff +0x032f:  movb   $0x1,0x74(%eax)
08727603 +0x0333:  mov    %edx,0x6c(%eax)
08727606 +0x0336:  mov    0xc(%eax),%edx
08727609 +0x0339:  mov    %edx,0x70(%eax)
0872760c +0x033c:  lea    0x68(%eax),%edx
0872760f +0x033f:  mov    %edx,0x4(%eax)
08727612 +0x0342:  mov    %edx,0x8(%eax)
08727615 +0x0345:  lea    0x6c(%eax),%edx
08727618 +0x0348:  mov    %edx,0xc(%eax)
0872761b +0x034b:  pop    %ebp
0872761c +0x034c:  ret
0872761d +0x034d:  nop
0872761e +0x034e:  nop
0872761f +0x034f:  nop
08727620 +0x0350:  push   %ebp
08727621 +0x0351:  mov    %esp,%ebp
08727623 +0x0353:  mov    0x8(%ebp),%eax
08727626 +0x0356:  push   %ebx
08727627 +0x0357:  cmpb   $0x0,0x74(%eax)
0872762b +0x035b:  je     08727655 <+0x385>
0872762d +0x035d:  mov    0x8(%eax),%edx
08727630 +0x0360:  cmp    0x4(%eax),%edx
08727633 +0x0363:  mov    0x70(%eax),%ecx
08727636 +0x0366:  mov    0x5c(%eax),%ebx
08727639 +0x0369:  setne  %dl
0872763c +0x036c:  movzbl %dl,%edx
0872763f +0x036f:  shl    $0x2,%edx
08727642 +0x0372:  add    0x6c(%eax),%edx
08727645 +0x0375:  mov    %ebx,0x4(%eax)
08727648 +0x0378:  mov    %ecx,0xc(%eax)
0872764b +0x037b:  mov    %edx,0x6c(%eax)
0872764e +0x037e:  mov    %edx,0x8(%eax)
08727651 +0x0381:  movb   $0x0,0x74(%eax)
08727655 +0x0385:  pop    %ebx
08727656 +0x0386:  pop    %ebp
08727657 +0x0387:  ret
08727658 +0x0388:  nop
08727659 +0x0389:  nop
0872765a +0x038a:  nop
0872765b +0x038b:  nop
0872765c +0x038c:  nop
0872765d +0x038d:  nop
0872765e +0x038e:  nop
0872765f +0x038f:  nop
08727660 +0x0390:  push   %ebp
08727661 +0x0391:  mov    %esp,%ebp
08727663 +0x0393:  sub    $0x58,%esp
08727666 +0x0396:  mov    %ebx,-0xc(%ebp)
08727669 +0x0399:  mov    0x8(%ebp),%ebx
0872766c +0x039c:  mov    %esi,-0x8(%ebp)
0872766f +0x039f:  mov    0xc(%ebp),%esi
08727672 +0x03a2:  mov    %edi,-0x4(%ebp)
08727675 +0x03a5:  mov    %gs:0x14,%eax
0872767b +0x03ab:  mov    %eax,-0x1c(%ebp)
0872767e +0x03ae:  xor    %eax,%eax
08727680 +0x03b0:  testb  $0x8,0x40(%ebx)
08727684 +0x03b4:  je     0872768c <+0x3bc>
08727686 +0x03b6:  cmpb   $0x0,0x66(%ebx)
0872768a +0x03ba:  je     087276b0 <+0x3e0>
0872768c +0x03bc:  mov    $0xffffffff,%eax
08727691 +0x03c1:  mov    -0x1c(%ebp),%edx
08727694 +0x03c4:  xor    %gs:0x14,%edx
0872769b +0x03cb:  jne    08727769 <+0x499>
087276a1 +0x03d1:  mov    -0xc(%ebp),%ebx
087276a4 +0x03d4:  mov    -0x8(%ebp),%esi
087276a7 +0x03d7:  mov    -0x4(%ebp),%edi
087276aa +0x03da:  mov    %ebp,%esp
087276ac +0x03dc:  pop    %ebp
087276ad +0x03dd:  ret
087276ae +0x03de:  xchg   %ax,%ax
087276b0 +0x03e0:  mov    0x8(%ebx),%eax
087276b3 +0x03e3:  cmp    %eax,0x4(%ebx)
087276b6 +0x03e6:  movzbl 0x74(%ebx),%edi
087276ba +0x03ea:  jae    087276f0 <+0x420>
087276bc +0x03ec:  lea    -0x4(%eax),%edx
087276bf +0x03ef:  mov    %edx,0x8(%ebx)
087276c2 +0x03f2:  mov    -0x4(%eax),%edx
087276c5 +0x03f5:  xor    %eax,%eax
087276c7 +0x03f7:  cmp    $0xffffffff,%esi
087276ca +0x03fa:  je     08727691 <+0x3c1>
087276cc +0x03fc:  cmp    %esi,%edx
087276ce +0x03fe:  mov    %edx,%eax
087276d0 +0x0400:  je     08727691 <+0x3c1>
087276d2 +0x0402:  mov    %edi,%edx
087276d4 +0x0404:  test   %dl,%dl
087276d6 +0x0406:  jne    0872768c <+0x3bc>
087276d8 +0x0408:  cmpb   $0x0,0x74(%ebx)
087276dc +0x040c:  je     08727745 <+0x475>
087276de +0x040e:  mov    0x8(%ebx),%eax
087276e1 +0x0411:  mov    %esi,(%eax)
087276e3 +0x0413:  mov    %esi,%eax
087276e5 +0x0415:  movb   $0x1,0x65(%ebx)
087276e9 +0x0419:  jmp    08727691 <+0x3c1>
087276eb +0x041b:  nop
087276ec +0x041c:  lea    0x0(%esi,%eiz,1),%esi
087276f0 +0x0420:  mov    (%ebx),%eax
087276f2 +0x0422:  lea    -0x2c(%ebp),%edx
087276f5 +0x0425:  movl   $0x18,0x14(%esp)
087276fd +0x042d:  movl   $0x1,0x10(%esp)
08727705 +0x0435:  movl   $0xffffffff,0x8(%esp)
0872770d +0x043d:  movl   $0xffffffff,0xc(%esp)
08727715 +0x0445:  mov    %ebx,0x4(%esp)
08727719 +0x0449:  mov    %edx,(%esp)
0872771c +0x044c:  call   *0x10(%eax)
0872771f +0x044f:  mov    -0x2c(%ebp),%eax
08727722 +0x0452:  and    -0x28(%ebp),%eax
08727725 +0x0455:  sub    $0x4,%esp
08727728 +0x0458:  cmp    $0xffffffff,%eax
0872772b +0x045b:  je     0872768c <+0x3bc>
08727731 +0x0461:  mov    (%ebx),%eax
08727733 +0x0463:  mov    %ebx,(%esp)
08727736 +0x0466:  call   *0x24(%eax)
08727739 +0x0469:  cmp    $0xffffffff,%eax
0872773c +0x046c:  mov    %eax,%edx
0872773e +0x046e:  jne    087276c5 <+0x3f5>
08727740 +0x0470:  jmp    0872768c <+0x3bc>
08727745 +0x0475:  mov    0x8(%ebx),%eax
08727748 +0x0478:  lea    0x6c(%ebx),%edx
0872774b +0x047b:  movb   $0x1,0x74(%ebx)
0872774f +0x047f:  mov    %eax,0x6c(%ebx)
08727752 +0x0482:  mov    0xc(%ebx),%eax
08727755 +0x0485:  mov    %edx,0xc(%ebx)
08727758 +0x0488:  mov    %eax,0x70(%ebx)
0872775b +0x048b:  lea    0x68(%ebx),%eax
0872775e +0x048e:  mov    %eax,0x4(%ebx)
08727761 +0x0491:  mov    %eax,0x8(%ebx)
08727764 +0x0494:  jmp    087276e1 <+0x411>
08727769 +0x0499:  call   0807d980 <_init+0x278>
0872776e +0x049e:  nop
0872776f +0x049f:  nop
08727770 +0x04a0:  push   %ebp
08727771 +0x04a1:  mov    %esp,%ebp
08727773 +0x04a3:  sub    $0x18,%esp
08727776 +0x04a6:  mov    0x8(%ebp),%eax
08727779 +0x04a9:  mov    0x10(%eax),%edx
0872777c +0x04ac:  cmp    0x14(%eax),%edx
0872777f +0x04af:  jb     08727788 <+0x4b8>
08727781 +0x04b1:  xor    %eax,%eax
08727783 +0x04b3:  leave
08727784 +0x04b4:  ret
08727785 +0x04b5:  lea    0x0(%esi),%esi
08727788 +0x04b8:  mov    (%eax),%edx
0872778a +0x04ba:  movl   $0xffffffff,0x4(%esp)
08727792 +0x04c2:  mov    %eax,(%esp)
08727795 +0x04c5:  call   *0x34(%edx)
08727798 +0x04c8:  cmp    $0xffffffff,%eax
0872779b +0x04cb:  je     08727783 <+0x4b3>
0872779d +0x04cd:  xor    %eax,%eax
0872779f +0x04cf:  jmp    08727783 <+0x4b3>
087277a1 +0x04d1:  nop
087277a2 +0x04d2:  nop
087277a3 +0x04d3:  nop
087277a4 +0x04d4:  nop
087277a5 +0x04d5:  nop
087277a6 +0x04d6:  nop
087277a7 +0x04d7:  nop
087277a8 +0x04d8:  nop
087277a9 +0x04d9:  nop
087277aa +0x04da:  nop
087277ab +0x04db:  nop
087277ac +0x04dc:  nop
087277ad +0x04dd:  nop
087277ae +0x04de:  nop
087277af +0x04df:  nop
087277b0 +0x04e0:  push   %ebp
087277b1 +0x04e1:  mov    %esp,%ebp
087277b3 +0x04e3:  sub    $0x8,%esp
087277b6 +0x04e6:  mov    0x8(%ebp),%eax
087277b9 +0x04e9:  mov    %ebx,(%esp)
087277bc +0x04ec:  mov    0xc(%ebp),%ebx
087277bf +0x04ef:  mov    %esi,0x4(%esp)
087277c3 +0x04f3:  mov    0x40(%eax),%ecx
087277c6 +0x04f6:  test   $0x8,%cl
087277c9 +0x04f9:  je     08727808 <+0x538>
087277cb +0x04fb:  test   %ebx,%ebx
087277cd +0x04fd:  jle    08727808 <+0x538>
087277cf +0x04ff:  mov    0x5c(%eax),%edx
087277d2 +0x0502:  and    $0x10,%ecx
087277d5 +0x0505:  lea    (%edx,%ebx,4),%esi
087277d8 +0x0508:  mov    %edx,0x4(%eax)
087277db +0x050b:  mov    %edx,0x8(%eax)
087277de +0x050e:  mov    %esi,0xc(%eax)
087277e1 +0x0511:  jne    08727819 <+0x549>
087277e3 +0x0513:  movl   $0x0,0x14(%eax)
087277ea +0x051a:  movl   $0x0,0x10(%eax)
087277f1 +0x0521:  movl   $0x0,0x18(%eax)
087277f8 +0x0528:  mov    (%esp),%ebx
087277fb +0x052b:  mov    0x4(%esp),%esi
087277ff +0x052f:  mov    %ebp,%esp
08727801 +0x0531:  pop    %ebp
08727802 +0x0532:  ret
08727803 +0x0533:  nop
08727804 +0x0534:  lea    0x0(%esi,%eiz,1),%esi
08727808 +0x0538:  mov    0x5c(%eax),%edx
0872780b +0x053b:  and    $0x10,%ecx
0872780e +0x053e:  mov    %edx,0x4(%eax)
08727811 +0x0541:  mov    %edx,0x8(%eax)
08727814 +0x0544:  mov    %edx,0xc(%eax)
08727817 +0x0547:  je     087277e3 <+0x513>
08727819 +0x0549:  test   %ebx,%ebx
0872781b +0x054b:  jne    087277e3 <+0x513>
0872781d +0x054d:  mov    0x60(%eax),%ecx
08727820 +0x0550:  cmp    $0x1,%ecx
08727823 +0x0553:  jbe    087277e3 <+0x513>
08727825 +0x0555:  mov    %edx,0x14(%eax)
08727828 +0x0558:  mov    %edx,0x10(%eax)
0872782b +0x055b:  lea    -0x4(%edx,%ecx,4),%edx
0872782f +0x055f:  mov    %edx,0x18(%eax)
08727832 +0x0562:  mov    (%esp),%ebx
08727835 +0x0565:  mov    0x4(%esp),%esi
08727839 +0x0569:  mov    %ebp,%esp
0872783b +0x056b:  pop    %ebp
0872783c +0x056c:  ret
0872783d +0x056d:  nop
0872783e +0x056e:  nop
0872783f +0x056f:  nop
08727840 +0x0570:  push   %ebp
08727841 +0x0571:  mov    %esp,%ebp
08727843 +0x0573:  mov    0x8(%ebp),%eax
08727846 +0x0576:  pop    %ebp
08727847 +0x0577:  add    $0x8,%eax
0872784a +0x057a:  ret
0872784b +0x057b:  nop
0872784c +0x057c:  nop
0872784d +0x057d:  nop
0872784e +0x057e:  nop
0872784f +0x057f:  nop
08727850 +0x0580:  push   %ebp
08727851 +0x0581:  mov    %esp,%ebp
08727853 +0x0583:  mov    0x8(%ebp),%eax
08727856 +0x0586:  pop    %ebp
08727857 +0x0587:  add    $0x4,%eax
0872785a +0x058a:  ret
0872785b +0x058b:  nop
0872785c +0x058c:  nop
0872785d +0x058d:  nop
0872785e +0x058e:  nop
0872785f +0x058f:  nop
08727860 +0x0590:  push   %ebp
08727861 +0x0591:  mov    %esp,%ebp
08727863 +0x0593:  mov    0x8(%ebp),%eax
08727866 +0x0596:  pop    %ebp
08727867 +0x0597:  add    $0xc,%eax
0872786a +0x059a:  ret
0872786b +0x059b:  nop
0872786c +0x059c:  nop
0872786d +0x059d:  nop
0872786e +0x059e:  nop
0872786f +0x059f:  nop
08727870 +0x05a0:  push   %ebp
08727871 +0x05a1:  mov    %esp,%ebp
08727873 +0x05a3:  sub    $0x18,%esp
08727876 +0x05a6:  mov    0x8(%ebp),%eax
08727879 +0x05a9:  mov    (%eax),%edx
0872787b +0x05ab:  mov    %eax,(%esp)
0872787e +0x05ae:  call   *0x18(%edx)
08727881 +0x05b1:  leave
08727882 +0x05b2:  ret
08727883 +0x05b3:  cmp    $0xffffffff,%edx
08727886 +0x05b6:  je     08727895 <+0x5c5>
08727888 +0x05b8:  mov    %eax,(%esp)
0872788b +0x05bb:  nop
0872788c +0x05bc:  lea    0x0(%esi,%eiz,1),%esi
08727890 +0x05c0:  call   08ae3750 <_Unwind_Resume>
08727895 +0x05c5:  mov    %eax,(%esp)
08727898 +0x05c8:  call   08723df0 <__cxa_call_unexpected>
0872789d +0x05cd:  nop
0872789e +0x05ce:  nop
0872789f +0x05cf:  nop
087278a0 +0x05d0:  push   %ebp
087278a1 +0x05d1:  mov    %esp,%ebp
087278a3 +0x05d3:  sub    $0x18,%esp
087278a6 +0x05d6:  mov    0x8(%ebp),%eax
087278a9 +0x05d9:  mov    (%eax),%edx
087278ab +0x05db:  mov    %eax,(%esp)
087278ae +0x05de:  call   *0x20(%edx)
087278b1 +0x05e1:  leave
087278b2 +0x05e2:  ret
087278b3 +0x05e3:  cmp    $0xffffffff,%edx
087278b6 +0x05e6:  je     087278c5 <+0x5f5>
087278b8 +0x05e8:  mov    %eax,(%esp)
087278bb +0x05eb:  nop
087278bc +0x05ec:  lea    0x0(%esi,%eiz,1),%esi
087278c0 +0x05f0:  call   08ae3750 <_Unwind_Resume>
087278c5 +0x05f5:  mov    %eax,(%esp)
087278c8 +0x05f8:  call   08723df0 <__cxa_call_unexpected>
087278cd +0x05fd:  nop
087278ce +0x05fe:  nop
087278cf +0x05ff:  nop
087278d0 +0x0600:  push   %ebp
087278d1 +0x0601:  mov    %esp,%ebp
087278d3 +0x0603:  sub    $0x18,%esp
087278d6 +0x0606:  mov    0x8(%ebp),%eax
087278d9 +0x0609:  mov    (%eax),%edx
087278db +0x060b:  mov    %eax,(%esp)
087278de +0x060e:  call   *0x18(%edx)
087278e1 +0x0611:  leave
087278e2 +0x0612:  ret
087278e3 +0x0613:  cmp    $0xffffffff,%edx
087278e6 +0x0616:  je     087278f5 <+0x625>
087278e8 +0x0618:  mov    %eax,(%esp)
087278eb +0x061b:  nop
087278ec +0x061c:  lea    0x0(%esi,%eiz,1),%esi
087278f0 +0x0620:  call   08ae3750 <_Unwind_Resume>
087278f5 +0x0625:  mov    %eax,(%esp)
087278f8 +0x0628:  call   08723df0 <__cxa_call_unexpected>
087278fd +0x062d:  nop
087278fe +0x062e:  nop
087278ff +0x062f:  nop
08727900 +0x0630:  push   %ebp
08727901 +0x0631:  mov    %esp,%ebp
08727903 +0x0633:  sub    $0x18,%esp
08727906 +0x0636:  mov    0x8(%ebp),%eax
08727909 +0x0639:  mov    (%eax),%edx
0872790b +0x063b:  mov    %eax,(%esp)
0872790e +0x063e:  call   *0x20(%edx)
08727911 +0x0641:  leave
08727912 +0x0642:  ret
08727913 +0x0643:  cmp    $0xffffffff,%edx
08727916 +0x0646:  je     08727925 <+0x655>
08727918 +0x0648:  mov    %eax,(%esp)
0872791b +0x064b:  nop
0872791c +0x064c:  lea    0x0(%esi,%eiz,1),%esi
08727920 +0x0650:  call   08ae3750 <_Unwind_Resume>
08727925 +0x0655:  mov    %eax,(%esp)
08727928 +0x0658:  call   08723df0 <__cxa_call_unexpected>
0872792d +0x065d:  nop
0872792e +0x065e:  nop
0872792f +0x065f:  nop
08727930 +0x0660:  push   %ebp
08727931 +0x0661:  mov    %esp,%ebp
08727933 +0x0663:  push   %ebx
08727934 +0x0664:  sub    $0x14,%esp
08727937 +0x0667:  mov    0x8(%ebp),%ebx
0872793a +0x066a:  cmpb   $0x0,0x64(%ebx)
0872793e +0x066e:  jne    08727947 <+0x677>
08727940 +0x0670:  mov    0x5c(%ebx),%eax
08727943 +0x0673:  test   %eax,%eax
08727945 +0x0675:  je     08727950 <+0x680>
08727947 +0x0677:  add    $0x14,%esp
0872794a +0x067a:  pop    %ebx
0872794b +0x067b:  pop    %ebp
0872794c +0x067c:  ret
0872794d +0x067d:  lea    0x0(%esi),%esi
08727950 +0x0680:  mov    0x60(%ebx),%eax
08727953 +0x0683:  shl    $0x2,%eax
08727956 +0x0686:  mov    %eax,(%esp)
08727959 +0x0689:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
0872795e +0x068e:  movb   $0x1,0x64(%ebx)
08727962 +0x0692:  mov    %eax,0x5c(%ebx)
08727965 +0x0695:  jmp    08727947 <+0x677>
08727967 +0x0697:  nop
08727968 +0x0698:  nop
08727969 +0x0699:  nop
0872796a +0x069a:  nop
0872796b +0x069b:  nop
0872796c +0x069c:  nop
0872796d +0x069d:  nop
0872796e +0x069e:  nop
0872796f +0x069f:  nop
08727970 +0x06a0:  push   %ebp
08727971 +0x06a1:  mov    %esp,%ebp
08727973 +0x06a3:  push   %ebx
08727974 +0x06a4:  sub    $0x14,%esp
08727977 +0x06a7:  mov    0x8(%ebp),%ebx
0872797a +0x06aa:  cmpb   $0x0,0x64(%ebx)
0872797e +0x06ae:  jne    08727987 <+0x6b7>
08727980 +0x06b0:  mov    0x5c(%ebx),%edx
08727983 +0x06b3:  test   %edx,%edx
08727985 +0x06b5:  je     08727990 <+0x6c0>
08727987 +0x06b7:  add    $0x14,%esp
0872798a +0x06ba:  pop    %ebx
0872798b +0x06bb:  pop    %ebp
0872798c +0x06bc:  ret
0872798d +0x06bd:  lea    0x0(%esi),%esi
08727990 +0x06c0:  mov    0x60(%ebx),%eax
08727993 +0x06c3:  mov    %eax,(%esp)
08727996 +0x06c6:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
0872799b +0x06cb:  movb   $0x1,0x64(%ebx)
0872799f +0x06cf:  mov    %eax,0x5c(%ebx)
087279a2 +0x06d2:  jmp    08727987 <+0x6b7>
087279a4 +0x06d4:  nop
087279a5 +0x06d5:  nop
087279a6 +0x06d6:  nop
087279a7 +0x06d7:  nop
087279a8 +0x06d8:  nop
087279a9 +0x06d9:  nop
087279aa +0x06da:  nop
087279ab +0x06db:  nop
087279ac +0x06dc:  nop
087279ad +0x06dd:  nop
087279ae +0x06de:  nop
087279af +0x06df:  nop
087279b0 +0x06e0:  push   %ebp
087279b1 +0x06e1:  mov    %esp,%ebp
087279b3 +0x06e3:  push   %ebx
087279b4 +0x06e4:  sub    $0x14,%esp
087279b7 +0x06e7:  mov    0x8(%ebp),%ebx
087279ba +0x06ea:  cmpb   $0x0,0x64(%ebx)
087279be +0x06ee:  je     087279da <+0x70a>
087279c0 +0x06f0:  mov    0x5c(%ebx),%eax
087279c3 +0x06f3:  test   %eax,%eax
087279c5 +0x06f5:  je     087279cf <+0x6ff>
087279c7 +0x06f7:  mov    %eax,(%esp)
087279ca +0x06fa:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
087279cf +0x06ff:  movl   $0x0,0x5c(%ebx)
087279d6 +0x0706:  movb   $0x0,0x64(%ebx)
087279da +0x070a:  mov    0x7c(%ebx),%eax
087279dd +0x070d:  test   %eax,%eax
087279df +0x070f:  je     087279e9 <+0x719>
087279e1 +0x0711:  mov    %eax,(%esp)
087279e4 +0x0714:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
087279e9 +0x0719:  movl   $0x0,0x7c(%ebx)
087279f0 +0x0720:  movl   $0x0,0x80(%ebx)
087279fa +0x072a:  movl   $0x0,0x84(%ebx)
08727a04 +0x0734:  movl   $0x0,0x88(%ebx)
08727a0e +0x073e:  add    $0x14,%esp
08727a11 +0x0741:  pop    %ebx
08727a12 +0x0742:  pop    %ebp
08727a13 +0x0743:  ret
08727a14 +0x0744:  nop
08727a15 +0x0745:  nop
08727a16 +0x0746:  nop
08727a17 +0x0747:  nop
08727a18 +0x0748:  nop
08727a19 +0x0749:  nop
08727a1a +0x074a:  nop
08727a1b +0x074b:  nop
08727a1c +0x074c:  nop
08727a1d +0x074d:  nop
08727a1e +0x074e:  nop
08727a1f +0x074f:  nop
08727a20 +0x0750:  push   %ebp
08727a21 +0x0751:  mov    %esp,%ebp
08727a23 +0x0753:  push   %ebx
08727a24 +0x0754:  sub    $0x14,%esp
08727a27 +0x0757:  mov    0x8(%ebp),%ebx
08727a2a +0x075a:  cmpb   $0x0,0x64(%ebx)
08727a2e +0x075e:  je     08727a4a <+0x77a>
08727a30 +0x0760:  mov    0x5c(%ebx),%eax
08727a33 +0x0763:  test   %eax,%eax
08727a35 +0x0765:  je     08727a3f <+0x76f>
08727a37 +0x0767:  mov    %eax,(%esp)
08727a3a +0x076a:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
08727a3f +0x076f:  movl   $0x0,0x5c(%ebx)
08727a46 +0x0776:  movb   $0x0,0x64(%ebx)
08727a4a +0x077a:  mov    0x78(%ebx),%eax
08727a4d +0x077d:  test   %eax,%eax
08727a4f +0x077f:  je     08727a59 <+0x789>
08727a51 +0x0781:  mov    %eax,(%esp)
08727a54 +0x0784:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
08727a59 +0x0789:  movl   $0x0,0x78(%ebx)
08727a60 +0x0790:  movl   $0x0,0x7c(%ebx)
08727a67 +0x0797:  movl   $0x0,0x80(%ebx)
08727a71 +0x07a1:  movl   $0x0,0x84(%ebx)
08727a7b +0x07ab:  add    $0x14,%esp
08727a7e +0x07ae:  pop    %ebx
08727a7f +0x07af:  pop    %ebp
08727a80 +0x07b0:  ret
08727a81 +0x07b1:  nop
08727a82 +0x07b2:  nop
08727a83 +0x07b3:  nop
08727a84 +0x07b4:  nop
08727a85 +0x07b5:  nop
08727a86 +0x07b6:  nop
08727a87 +0x07b7:  nop
08727a88 +0x07b8:  nop
08727a89 +0x07b9:  nop
08727a8a +0x07ba:  nop
08727a8b +0x07bb:  nop
08727a8c +0x07bc:  nop
08727a8d +0x07bd:  nop
08727a8e +0x07be:  nop
08727a8f +0x07bf:  nop
08727a90 +0x07c0:  push   %ebp
08727a91 +0x07c1:  mov    %esp,%ebp
08727a93 +0x07c3:  sub    $0x18,%esp
08727a96 +0x07c6:  mov    0x8(%ebp),%eax
08727a99 +0x07c9:  add    $0x38,%eax
08727a9c +0x07cc:  mov    %eax,(%esp)
08727a9f +0x07cf:  call   08722580 <_ZNKSt12__basic_fileIcE7is_openEv>  ; std::__basic_file<char>::is_open() const
08727aa4 +0x07d4:  leave
08727aa5 +0x07d5:  ret
08727aa6 +0x07d6:  cmp    $0xffffffff,%edx
08727aa9 +0x07d9:  je     08727ab5 <+0x7e5>
08727aab +0x07db:  mov    %eax,(%esp)
08727aae +0x07de:  xchg   %ax,%ax
08727ab0 +0x07e0:  call   08ae3750 <_Unwind_Resume>
08727ab5 +0x07e5:  mov    %eax,(%esp)
08727ab8 +0x07e8:  call   08723df0 <__cxa_call_unexpected>
08727abd +0x07ed:  nop
08727abe +0x07ee:  nop
08727abf +0x07ef:  nop
08727ac0 +0x07f0:  push   %ebp
08727ac1 +0x07f1:  mov    %esp,%ebp
08727ac3 +0x07f3:  sub    $0x18,%esp
08727ac6 +0x07f6:  mov    0x8(%ebp),%eax
08727ac9 +0x07f9:  add    $0x38,%eax
08727acc +0x07fc:  mov    %eax,(%esp)
08727acf +0x07ff:  call   08722580 <_ZNKSt12__basic_fileIcE7is_openEv>  ; std::__basic_file<char>::is_open() const
08727ad4 +0x0804:  leave
08727ad5 +0x0805:  ret
08727ad6 +0x0806:  cmp    $0xffffffff,%edx
08727ad9 +0x0809:  je     08727ae5 <+0x815>
08727adb +0x080b:  mov    %eax,(%esp)
08727ade +0x080e:  xchg   %ax,%ax
08727ae0 +0x0810:  call   08ae3750 <_Unwind_Resume>
08727ae5 +0x0815:  mov    %eax,(%esp)
08727ae8 +0x0818:  call   08723df0 <__cxa_call_unexpected>
08727aed +0x081d:  nop
08727aee +0x081e:  nop
08727aef +0x081f:  nop
08727af0 +0x0820:  push   %ebp
08727af1 +0x0821:  mov    %esp,%ebp
08727af3 +0x0823:  push   %edi
08727af4 +0x0824:  push   %esi
08727af5 +0x0825:  push   %ebx
08727af6 +0x0826:  sub    $0x1c,%esp
08727af9 +0x0829:  mov    0x8(%ebp),%ebx
08727afc +0x082c:  movl   $&_ZTVSt15basic_streambufIwSt11char_traitsIwEE+0x8,(%ebx)
08727b02 +0x0832:  lea    0x1c(%ebx),%esi
08727b05 +0x0835:  movl   $0x0,0x4(%ebx)
08727b0c +0x083c:  movl   $0x0,0x8(%ebx)
08727b13 +0x0843:  movl   $0x0,0xc(%ebx)
08727b1a +0x084a:  movl   $0x0,0x10(%ebx)
08727b21 +0x0851:  movl   $0x0,0x14(%ebx)
08727b28 +0x0858:  movl   $0x0,0x18(%ebx)
08727b2f +0x085f:  mov    %esi,(%esp)
08727b32 +0x0862:  call   086dd050 <_ZNSt6localeC1Ev>  ; std::locale::locale()
08727b37 +0x0867:  lea    0x20(%ebx),%edx
08727b3a +0x086a:  xor    %eax,%eax
08727b3c +0x086c:  movl   $&_ZTVSt13basic_filebufIwSt11char_traitsIwEE+0x8,(%ebx)
08727b42 +0x0872:  movl   $0x0,(%edx,%eax,1)
08727b49 +0x0879:  add    $0x4,%eax
08727b4c +0x087c:  cmp    $0x18,%eax
08727b4f +0x087f:  jb     08727b42 <+0x872>
08727b51 +0x0881:  lea    0x38(%ebx),%edi
08727b54 +0x0884:  mov    %edx,0x4(%esp)
08727b58 +0x0888:  mov    %edi,(%esp)
08727b5b +0x088b:  call   08722560 <_ZNSt12__basic_fileIcEC1EP15pthread_mutex_t>  ; std::__basic_file<char>::__basic_file(pthread_mutex_t*)
08727b60 +0x0890:  movl   $0x0,0x40(%ebx)
08727b67 +0x0897:  movl   $0x0,0x44(%ebx)
08727b6e +0x089e:  movl   $0x0,0x48(%ebx)
08727b75 +0x08a5:  movl   $0x0,0x4c(%ebx)
08727b7c +0x08ac:  movl   $0x0,0x50(%ebx)
08727b83 +0x08b3:  movl   $0x0,0x54(%ebx)
08727b8a +0x08ba:  movl   $0x0,0x58(%ebx)
08727b91 +0x08c1:  movl   $0x0,0x5c(%ebx)
08727b98 +0x08c8:  movl   $0x2000,0x60(%ebx)
08727b9f +0x08cf:  movb   $0x0,0x64(%ebx)
08727ba3 +0x08d3:  movb   $0x0,0x65(%ebx)
08727ba7 +0x08d7:  movb   $0x0,0x66(%ebx)
08727bab +0x08db:  movl   $0x0,0x68(%ebx)
08727bb2 +0x08e2:  movl   $0x0,0x6c(%ebx)
08727bb9 +0x08e9:  movl   $0x0,0x70(%ebx)
08727bc0 +0x08f0:  movb   $0x0,0x74(%ebx)
08727bc4 +0x08f4:  movl   $0x0,0x78(%ebx)
08727bcb +0x08fb:  movl   $0x0,0x7c(%ebx)
08727bd2 +0x0902:  movl   $0x0,0x80(%ebx)
08727bdc +0x090c:  movl   $0x0,0x84(%ebx)
08727be6 +0x0916:  movl   $0x0,0x88(%ebx)
08727bf0 +0x0920:  mov    %esi,(%esp)
08727bf3 +0x0923:  call   0870ba60 <_GLOBAL__I_wlocale_inst.cc+0x970>  ; global constructors keyed to wlocale_inst.cc+0x970
08727bf8 +0x0928:  test   %al,%al
08727bfa +0x092a:  jne    08727c08 <+0x938>
08727bfc +0x092c:  add    $0x1c,%esp
08727bff +0x092f:  pop    %ebx
08727c00 +0x0930:  pop    %esi
08727c01 +0x0931:  pop    %edi
08727c02 +0x0932:  pop    %ebp
08727c03 +0x0933:  ret
08727c04 +0x0934:  lea    0x0(%esi,%eiz,1),%esi
08727c08 +0x0938:  mov    %esi,(%esp)
08727c0b +0x093b:  call   0870bfc0 <_GLOBAL__I_wlocale_inst.cc+0xed0>  ; global constructors keyed to wlocale_inst.cc+0xed0
08727c10 +0x0940:  mov    %eax,0x78(%ebx)
08727c13 +0x0943:  add    $0x1c,%esp
08727c16 +0x0946:  pop    %ebx
08727c17 +0x0947:  pop    %esi
08727c18 +0x0948:  pop    %edi
08727c19 +0x0949:  pop    %ebp
08727c1a +0x094a:  ret
08727c1b +0x094b:  mov    %eax,%esi
08727c1d +0x094d:  mov    %ebx,(%esp)
08727c20 +0x0950:  call   08705f90 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x11724>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x11724
08727c25 +0x0955:  mov    %esi,(%esp)
08727c28 +0x0958:  call   08ae3750 <_Unwind_Resume>
08727c2d +0x095d:  mov    %eax,%esi
08727c2f +0x095f:  mov    %edi,(%esp)
08727c32 +0x0962:  call   08722720 <_ZNSt12__basic_fileIcED1Ev>  ; std::__basic_file<char>::~__basic_file()
08727c37 +0x0967:  jmp    08727c1d <+0x94d>
08727c39 +0x0969:  nop
08727c3a +0x096a:  nop
08727c3b +0x096b:  nop
08727c3c +0x096c:  nop
08727c3d +0x096d:  nop
08727c3e +0x096e:  nop
08727c3f +0x096f:  nop
08727c40 +0x0970:  push   %ebp
08727c41 +0x0971:  mov    %esp,%ebp
08727c43 +0x0973:  push   %edi
08727c44 +0x0974:  push   %esi
08727c45 +0x0975:  push   %ebx
08727c46 +0x0976:  sub    $0x1c,%esp
08727c49 +0x0979:  mov    0x8(%ebp),%ebx
08727c4c +0x097c:  movl   $&_ZTVSt15basic_streambufIcSt11char_traitsIcEE+0x8,(%ebx)
08727c52 +0x0982:  lea    0x1c(%ebx),%esi
08727c55 +0x0985:  movl   $0x0,0x4(%ebx)
08727c5c +0x098c:  movl   $0x0,0x8(%ebx)
08727c63 +0x0993:  movl   $0x0,0xc(%ebx)
08727c6a +0x099a:  movl   $0x0,0x10(%ebx)
08727c71 +0x09a1:  movl   $0x0,0x14(%ebx)
08727c78 +0x09a8:  movl   $0x0,0x18(%ebx)
08727c7f +0x09af:  mov    %esi,(%esp)
08727c82 +0x09b2:  call   086dd050 <_ZNSt6localeC1Ev>  ; std::locale::locale()
08727c87 +0x09b7:  lea    0x20(%ebx),%edx
08727c8a +0x09ba:  xor    %eax,%eax
08727c8c +0x09bc:  movl   $&_ZTVSt13basic_filebufIcSt11char_traitsIcEE+0x8,(%ebx)
08727c92 +0x09c2:  movl   $0x0,(%edx,%eax,1)
08727c99 +0x09c9:  add    $0x4,%eax
08727c9c +0x09cc:  cmp    $0x18,%eax
08727c9f +0x09cf:  jb     08727c92 <+0x9c2>
08727ca1 +0x09d1:  lea    0x38(%ebx),%edi
08727ca4 +0x09d4:  mov    %edx,0x4(%esp)
08727ca8 +0x09d8:  mov    %edi,(%esp)
08727cab +0x09db:  call   08722560 <_ZNSt12__basic_fileIcEC1EP15pthread_mutex_t>  ; std::__basic_file<char>::__basic_file(pthread_mutex_t*)
08727cb0 +0x09e0:  movl   $0x0,0x40(%ebx)
08727cb7 +0x09e7:  movl   $0x0,0x44(%ebx)
08727cbe +0x09ee:  movl   $0x0,0x48(%ebx)
08727cc5 +0x09f5:  movl   $0x0,0x4c(%ebx)
08727ccc +0x09fc:  movl   $0x0,0x50(%ebx)
08727cd3 +0x0a03:  movl   $0x0,0x54(%ebx)
08727cda +0x0a0a:  movl   $0x0,0x58(%ebx)
08727ce1 +0x0a11:  movl   $0x0,0x5c(%ebx)
08727ce8 +0x0a18:  movl   $0x2000,0x60(%ebx)
08727cef +0x0a1f:  movb   $0x0,0x64(%ebx)
08727cf3 +0x0a23:  movb   $0x0,0x65(%ebx)
08727cf7 +0x0a27:  movb   $0x0,0x66(%ebx)
08727cfb +0x0a2b:  movb   $0x0,0x67(%ebx)
08727cff +0x0a2f:  movl   $0x0,0x68(%ebx)
08727d06 +0x0a36:  movl   $0x0,0x6c(%ebx)
08727d0d +0x0a3d:  movb   $0x0,0x70(%ebx)
08727d11 +0x0a41:  movl   $0x0,0x74(%ebx)
08727d18 +0x0a48:  movl   $0x0,0x78(%ebx)
08727d1f +0x0a4f:  movl   $0x0,0x7c(%ebx)
08727d26 +0x0a56:  movl   $0x0,0x80(%ebx)
08727d30 +0x0a60:  movl   $0x0,0x84(%ebx)
08727d3a +0x0a6a:  mov    %esi,(%esp)
08727d3d +0x0a6d:  call   086ead00 <_GLOBAL__I_locale_inst.cc+0x9c0>  ; global constructors keyed to locale_inst.cc+0x9c0
08727d42 +0x0a72:  test   %al,%al
08727d44 +0x0a74:  jne    08727d50 <+0xa80>
08727d46 +0x0a76:  add    $0x1c,%esp
08727d49 +0x0a79:  pop    %ebx
08727d4a +0x0a7a:  pop    %esi
08727d4b +0x0a7b:  pop    %edi
08727d4c +0x0a7c:  pop    %ebp
08727d4d +0x0a7d:  ret
08727d4e +0x0a7e:  xchg   %ax,%ax
08727d50 +0x0a80:  mov    %esi,(%esp)
08727d53 +0x0a83:  call   086eb260 <_GLOBAL__I_locale_inst.cc+0xf20>  ; global constructors keyed to locale_inst.cc+0xf20
08727d58 +0x0a88:  mov    %eax,0x74(%ebx)
08727d5b +0x0a8b:  add    $0x1c,%esp
08727d5e +0x0a8e:  pop    %ebx
08727d5f +0x0a8f:  pop    %esi
08727d60 +0x0a90:  pop    %edi
08727d61 +0x0a91:  pop    %ebp
08727d62 +0x0a92:  ret
08727d63 +0x0a93:  mov    %eax,%esi
08727d65 +0x0a95:  mov    %ebx,(%esp)
08727d68 +0x0a98:  call   08705fb0 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x11744>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x11744
08727d6d +0x0a9d:  mov    %esi,(%esp)
08727d70 +0x0aa0:  call   08ae3750 <_Unwind_Resume>
08727d75 +0x0aa5:  mov    %eax,%esi
08727d77 +0x0aa7:  mov    %edi,(%esp)
08727d7a +0x0aaa:  call   08722720 <_ZNSt12__basic_fileIcED1Ev>  ; std::__basic_file<char>::~__basic_file()
08727d7f +0x0aaf:  jmp    08727d65 <+0xa95>
08727d81 +0x0ab1:  nop
08727d82 +0x0ab2:  nop
08727d83 +0x0ab3:  nop
08727d84 +0x0ab4:  nop
08727d85 +0x0ab5:  nop
08727d86 +0x0ab6:  nop
08727d87 +0x0ab7:  nop
08727d88 +0x0ab8:  nop
08727d89 +0x0ab9:  nop
08727d8a +0x0aba:  nop
08727d8b +0x0abb:  nop
08727d8c +0x0abc:  nop
08727d8d +0x0abd:  nop
08727d8e +0x0abe:  nop
08727d8f +0x0abf:  nop
08727d90 +0x0ac0:  push   %ebp
08727d91 +0x0ac1:  mov    %esp,%ebp
08727d93 +0x0ac3:  push   %edi
08727d94 +0x0ac4:  push   %esi
08727d95 +0x0ac5:  push   %ebx
08727d96 +0x0ac6:  sub    $0x4c,%esp
08727d99 +0x0ac9:  mov    0x8(%ebp),%ebx
08727d9c +0x0acc:  mov    %gs:0x14,%eax
08727da2 +0x0ad2:  mov    %eax,-0x1c(%ebp)
08727da5 +0x0ad5:  xor    %eax,%eax
08727da7 +0x0ad7:  mov    0xc(%ebp),%esi
08727daa +0x0ada:  mov    0x10(%ebp),%edi
08727dad +0x0add:  mov    0x74(%ebx),%eax
08727db0 +0x0ae0:  test   %eax,%eax
08727db2 +0x0ae2:  je     08727f2d <+0xc5d>
08727db8 +0x0ae8:  mov    (%eax),%edx
08727dba +0x0aea:  mov    %eax,(%esp)
08727dbd +0x0aed:  call   *0x18(%edx)
08727dc0 +0x0af0:  test   %al,%al
08727dc2 +0x0af2:  jne    08727e70 <+0xba0>
08727dc8 +0x0af8:  mov    0x74(%ebx),%eax
08727dcb +0x0afb:  mov    (%eax),%edx
08727dcd +0x0afd:  mov    %eax,(%esp)
08727dd0 +0x0b00:  call   *0x20(%edx)
08727dd3 +0x0b03:  lea    0x4c(%ebx),%ecx
08727dd6 +0x0b06:  mov    %ecx,-0x2c(%ebp)
08727dd9 +0x0b09:  mov    0x74(%ebx),%ecx
08727ddc +0x0b0c:  imul   %edi,%eax
08727ddf +0x0b0f:  mov    (%ecx),%ecx
08727de1 +0x0b11:  lea    0x1e(%eax),%edx
08727de4 +0x0b14:  and    $0xfffffff0,%edx
08727de7 +0x0b17:  sub    %edx,%esp
08727de9 +0x0b19:  lea    0x2f(%esp),%edx
08727ded +0x0b1d:  mov    %ecx,-0x30(%ebp)
08727df0 +0x0b20:  lea    -0x20(%ebp),%ecx
08727df3 +0x0b23:  and    $0xfffffff0,%edx
08727df6 +0x0b26:  mov    %ecx,0x1c(%esp)
08727dfa +0x0b2a:  mov    -0x2c(%ebp),%ecx
08727dfd +0x0b2d:  lea    (%edx,%eax,1),%eax
08727e00 +0x0b30:  mov    %eax,0x18(%esp)
08727e04 +0x0b34:  lea    -0x24(%ebp),%eax
08727e07 +0x0b37:  mov    %eax,0x10(%esp)
08727e0b +0x0b3b:  lea    (%esi,%edi,1),%eax
08727e0e +0x0b3e:  mov    %edx,0x14(%esp)
08727e12 +0x0b42:  mov    %ecx,0x4(%esp)
08727e16 +0x0b46:  mov    -0x30(%ebp),%ecx
08727e19 +0x0b49:  mov    %eax,0xc(%esp)
08727e1d +0x0b4d:  mov    %esi,0x8(%esp)
08727e21 +0x0b51:  mov    0x74(%ebx),%eax
08727e24 +0x0b54:  mov    %edx,-0x34(%ebp)
08727e27 +0x0b57:  mov    %eax,(%esp)
08727e2a +0x0b5a:  call   *0x8(%ecx)
08727e2d +0x0b5d:  mov    -0x34(%ebp),%edx
08727e30 +0x0b60:  cmp    $0x1,%eax
08727e33 +0x0b63:  jbe    08727e90 <+0xbc0>
08727e35 +0x0b65:  cmp    $0x3,%eax
08727e38 +0x0b68:  jne    08727f32 <+0xc62>
08727e3e +0x0b6e:  add    $0x38,%ebx
08727e41 +0x0b71:  mov    %edi,0x8(%esp)
08727e45 +0x0b75:  mov    %esi,0x4(%esp)
08727e49 +0x0b79:  mov    %ebx,(%esp)
08727e4c +0x0b7c:  call   08722980 <_ZNSt12__basic_fileIcE6xsputnEPKci>  ; std::__basic_file<char>::xsputn(char const*, int)
08727e51 +0x0b81:  cmp    %edi,%eax
08727e53 +0x0b83:  sete   %al
08727e56 +0x0b86:  mov    -0x1c(%ebp),%edx
08727e59 +0x0b89:  xor    %gs:0x14,%edx
08727e60 +0x0b90:  jne    08727f28 <+0xc58>
08727e66 +0x0b96:  lea    -0xc(%ebp),%esp
08727e69 +0x0b99:  pop    %ebx
08727e6a +0x0b9a:  pop    %esi
08727e6b +0x0b9b:  pop    %edi
08727e6c +0x0b9c:  pop    %ebp
08727e6d +0x0b9d:  ret
08727e6e +0x0b9e:  xchg   %ax,%ax
08727e70 +0x0ba0:  add    $0x38,%ebx
08727e73 +0x0ba3:  mov    %edi,0x8(%esp)
08727e77 +0x0ba7:  mov    %esi,0x4(%esp)
08727e7b +0x0bab:  mov    %ebx,(%esp)
08727e7e +0x0bae:  call   08722980 <_ZNSt12__basic_fileIcE6xsputnEPKci>  ; std::__basic_file<char>::xsputn(char const*, int)
08727e83 +0x0bb3:  cmp    %eax,%edi
08727e85 +0x0bb5:  sete   %al
08727e88 +0x0bb8:  jmp    08727e56 <+0xb86>
08727e8a +0x0bba:  lea    0x0(%esi),%esi
08727e90 +0x0bc0:  mov    -0x20(%ebp),%esi
08727e93 +0x0bc3:  lea    0x38(%ebx),%edi
08727e96 +0x0bc6:  mov    %edx,0x4(%esp)
08727e9a +0x0bca:  mov    %edx,-0x34(%ebp)
08727e9d +0x0bcd:  mov    %edi,(%esp)
08727ea0 +0x0bd0:  sub    %edx,%esi
08727ea2 +0x0bd2:  mov    %esi,0x8(%esp)
08727ea6 +0x0bd6:  mov    %eax,-0x38(%ebp)
08727ea9 +0x0bd9:  call   08722980 <_ZNSt12__basic_fileIcE6xsputnEPKci>  ; std::__basic_file<char>::xsputn(char const*, int)
08727eae +0x0bde:  mov    -0x34(%ebp),%edx
08727eb1 +0x0be1:  mov    -0x38(%ebp),%ecx
08727eb4 +0x0be4:  cmp    %eax,%esi
08727eb6 +0x0be6:  sete   %al
08727eb9 +0x0be9:  jne    08727e56 <+0xb86>
08727ebb +0x0beb:  test   %cl,%cl
08727ebd +0x0bed:  je     08727e56 <+0xb86>
08727ebf +0x0bef:  mov    0x74(%ebx),%eax
08727ec2 +0x0bf2:  lea    (%edx,%esi,1),%esi
08727ec5 +0x0bf5:  mov    %edx,-0x34(%ebp)
08727ec8 +0x0bf8:  mov    (%eax),%ecx
08727eca +0x0bfa:  mov    %edx,0x14(%esp)
08727ece +0x0bfe:  mov    %esi,0x18(%esp)
08727ed2 +0x0c02:  mov    %ecx,-0x30(%ebp)
08727ed5 +0x0c05:  lea    -0x20(%ebp),%ecx
08727ed8 +0x0c08:  mov    %ecx,0x1c(%esp)
08727edc +0x0c0c:  lea    -0x24(%ebp),%ecx
08727edf +0x0c0f:  mov    %ecx,0x10(%esp)
08727ee3 +0x0c13:  mov    -0x2c(%ebp),%ecx
08727ee6 +0x0c16:  mov    0x14(%ebx),%ebx
08727ee9 +0x0c19:  mov    %eax,(%esp)
08727eec +0x0c1c:  mov    %ecx,0x4(%esp)
08727ef0 +0x0c20:  mov    -0x30(%ebp),%ecx
08727ef3 +0x0c23:  mov    %ebx,0xc(%esp)
08727ef7 +0x0c27:  mov    -0x24(%ebp),%ebx
08727efa +0x0c2a:  mov    %ebx,0x8(%esp)
08727efe +0x0c2e:  call   *0x8(%ecx)
08727f01 +0x0c31:  mov    -0x34(%ebp),%edx
08727f04 +0x0c34:  cmp    $0x2,%eax
08727f07 +0x0c37:  je     08727f32 <+0xc62>
08727f09 +0x0c39:  mov    -0x20(%ebp),%ebx
08727f0c +0x0c3c:  mov    %edx,0x4(%esp)
08727f10 +0x0c40:  mov    %edi,(%esp)
08727f13 +0x0c43:  sub    %edx,%ebx
08727f15 +0x0c45:  mov    %ebx,0x8(%esp)
08727f19 +0x0c49:  call   08722980 <_ZNSt12__basic_fileIcE6xsputnEPKci>  ; std::__basic_file<char>::xsputn(char const*, int)
08727f1e +0x0c4e:  cmp    %eax,%ebx
08727f20 +0x0c50:  sete   %al
08727f23 +0x0c53:  jmp    08727e56 <+0xb86>
08727f28 +0x0c58:  call   0807d980 <_init+0x278>
08727f2d +0x0c5d:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
08727f32 +0x0c62:  movl   $"basic_filebuf::_M_convert_to_external conversion error",(%esp)
08727f39 +0x0c69:  call   086d9780 <_ZSt19__throw_ios_failurePKc>  ; std::__throw_ios_failure(char const*)
08727f3e +0x0c6e:  cmp    $0xffffffff,%edx
08727f41 +0x0c71:  je     08727f4d <+0xc7d>
08727f43 +0x0c73:  mov    %eax,(%esp)
08727f46 +0x0c76:  call   08ae3750 <_Unwind_Resume>
08727f4b +0x0c7b:  jmp    08727f3e <+0xc6e>
08727f4d +0x0c7d:  mov    %eax,(%esp)
08727f50 +0x0c80:  call   08723df0 <__cxa_call_unexpected>
08727f55 +0x0c85:  nop
08727f56 +0x0c86:  nop
08727f57 +0x0c87:  nop
08727f58 +0x0c88:  nop
08727f59 +0x0c89:  nop
08727f5a +0x0c8a:  nop
08727f5b +0x0c8b:  nop
08727f5c +0x0c8c:  nop
08727f5d +0x0c8d:  nop
08727f5e +0x0c8e:  nop
08727f5f +0x0c8f:  nop
08727f60 +0x0c90:  push   %ebp
08727f61 +0x0c91:  mov    %esp,%ebp
08727f63 +0x0c93:  sub    $0x38,%esp
08727f66 +0x0c96:  mov    %ebx,-0x8(%ebp)
08727f69 +0x0c99:  mov    0x8(%ebp),%ebx
08727f6c +0x0c9c:  mov    %esi,-0x4(%ebp)
08727f6f +0x0c9f:  mov    0xc(%ebp),%esi
08727f72 +0x0ca2:  testb  $0x10,0x40(%ebx)
08727f76 +0x0ca6:  je     08728008 <+0xd38>
08727f7c +0x0cac:  cmpb   $0x0,0x65(%ebx)
08727f80 +0x0cb0:  jne    08728008 <+0xd38>
08727f86 +0x0cb6:  mov    0x10(%ebx),%eax
08727f89 +0x0cb9:  cmp    $0xffffffff,%esi
08727f8c +0x0cbc:  mov    0x14(%ebx),%edx
08727f8f +0x0cbf:  sete   %cl
08727f92 +0x0cc2:  cmp    %edx,%eax
08727f94 +0x0cc4:  jae    08728018 <+0xd48>
08727f9a +0x0cca:  test   %cl,%cl
08727f9c +0x0ccc:  jne    08727fae <+0xcde>
08727f9e +0x0cce:  mov    %esi,%eax
08727fa0 +0x0cd0:  mov    %al,(%edx)
08727fa2 +0x0cd2:  mov    0x14(%ebx),%edx
08727fa5 +0x0cd5:  mov    0x10(%ebx),%eax
08727fa8 +0x0cd8:  add    $0x1,%edx
08727fab +0x0cdb:  mov    %edx,0x14(%ebx)
08727fae +0x0cde:  sub    %eax,%edx
08727fb0 +0x0ce0:  mov    %edx,0x8(%esp)
08727fb4 +0x0ce4:  mov    %eax,0x4(%esp)
08727fb8 +0x0ce8:  mov    %ebx,(%esp)
08727fbb +0x0ceb:  call   08727d90 <+0xac0>
08727fc0 +0x0cf0:  test   %al,%al
08727fc2 +0x0cf2:  je     08728008 <+0xd38>
08727fc4 +0x0cf4:  movl   $0x0,0x4(%esp)
08727fcc +0x0cfc:  mov    %ebx,(%esp)
08727fcf +0x0cff:  call   08727530 <+0x260>
08727fd4 +0x0d04:  cmp    $0xffffffff,%esi
08727fd7 +0x0d07:  je     0872804d <+0xd7d>
08727fd9 +0x0d09:  mov    %esi,%eax
08727fdb +0x0d0b:  mov    -0x8(%ebp),%ebx
08727fde +0x0d0e:  mov    -0x4(%ebp),%esi
08727fe1 +0x0d11:  mov    %ebp,%esp
08727fe3 +0x0d13:  pop    %ebp
08727fe4 +0x0d14:  ret
08727fe5 +0x0d15:  lea    0x0(%esi),%esi
08727fe8 +0x0d18:  mov    %esi,%eax
08727fea +0x0d1a:  mov    %al,-0x9(%ebp)
08727fed +0x0d1d:  lea    -0x9(%ebp),%eax
08727ff0 +0x0d20:  movl   $0x1,0x8(%esp)
08727ff8 +0x0d28:  mov    %eax,0x4(%esp)
08727ffc +0x0d2c:  mov    %ebx,(%esp)
08727fff +0x0d2f:  call   08727d90 <+0xac0>
08728004 +0x0d34:  test   %al,%al
08728006 +0x0d36:  jne    0872805c <+0xd8c>
08728008 +0x0d38:  mov    $0xffffffff,%eax
0872800d +0x0d3d:  mov    -0x8(%ebp),%ebx
08728010 +0x0d40:  mov    -0x4(%ebp),%esi
08728013 +0x0d43:  mov    %ebp,%esp
08728015 +0x0d45:  pop    %ebp
08728016 +0x0d46:  ret
08728017 +0x0d47:  nop
08728018 +0x0d48:  cmpl   $0x1,0x60(%ebx)
0872801c +0x0d4c:  jbe    08728058 <+0xd88>
0872801e +0x0d4e:  mov    %cl,-0x1c(%ebp)
08728021 +0x0d51:  movl   $0x0,0x4(%esp)
08728029 +0x0d59:  mov    %ebx,(%esp)
0872802c +0x0d5c:  call   08727530 <+0x260>
08728031 +0x0d61:  movzbl -0x1c(%ebp),%ecx
08728035 +0x0d65:  movb   $0x1,0x66(%ebx)
08728039 +0x0d69:  test   %cl,%cl
0872803b +0x0d6b:  jne    08728048 <+0xd78>
0872803d +0x0d6d:  mov    0x14(%ebx),%eax
08728040 +0x0d70:  mov    %esi,%edx
08728042 +0x0d72:  mov    %dl,(%eax)
08728044 +0x0d74:  addl   $0x1,0x14(%ebx)
08728048 +0x0d78:  cmp    $0xffffffff,%esi
0872804b +0x0d7b:  jne    08727fd9 <+0xd09>
0872804d +0x0d7d:  xor    %eax,%eax
0872804f +0x0d7f:  jmp    0872800d <+0xd3d>
08728051 +0x0d81:  lea    0x0(%esi,%eiz,1),%esi
08728058 +0x0d88:  test   %cl,%cl
0872805a +0x0d8a:  je     08727fe8 <+0xd18>
0872805c +0x0d8c:  movb   $0x1,0x66(%ebx)
08728060 +0x0d90:  jmp    08728048 <+0xd78>
08728062 +0x0d92:  nop
08728063 +0x0d93:  nop
08728064 +0x0d94:  nop
08728065 +0x0d95:  nop
08728066 +0x0d96:  nop
08728067 +0x0d97:  nop
08728068 +0x0d98:  nop
08728069 +0x0d99:  nop
0872806a +0x0d9a:  nop
0872806b +0x0d9b:  nop
0872806c +0x0d9c:  nop
0872806d +0x0d9d:  nop
0872806e +0x0d9e:  nop
0872806f +0x0d9f:  nop
08728070 +0x0da0:  push   %ebp
08728071 +0x0da1:  mov    %esp,%ebp
08728073 +0x0da3:  sub    $0x48,%esp
08728076 +0x0da6:  mov    %ebx,-0xc(%ebp)
08728079 +0x0da9:  mov    0x8(%ebp),%ebx
0872807c +0x0dac:  mov    %esi,-0x8(%ebp)
0872807f +0x0daf:  mov    0x10(%ebp),%esi
08728082 +0x0db2:  mov    %edi,-0x4(%ebp)
08728085 +0x0db5:  mov    0xc(%ebp),%edi
08728088 +0x0db8:  mov    0x40(%ebx),%eax
0872808b +0x0dbb:  mov    %eax,-0x1c(%ebp)
0872808e +0x0dbe:  mov    0x74(%ebx),%eax
08728091 +0x0dc1:  test   %eax,%eax
08728093 +0x0dc3:  je     08728169 <+0xe99>
08728099 +0x0dc9:  mov    (%eax),%edx
0872809b +0x0dcb:  mov    %eax,(%esp)
0872809e +0x0dce:  call   *0x18(%edx)
087280a1 +0x0dd1:  test   %al,%al
087280a3 +0x0dd3:  je     08728130 <+0xe60>
087280a9 +0x0dd9:  testb  $0x10,-0x1c(%ebp)
087280ad +0x0ddd:  je     08728130 <+0xe60>
087280b3 +0x0de3:  cmpb   $0x0,0x65(%ebx)
087280b7 +0x0de7:  jne    08728130 <+0xe60>
087280b9 +0x0de9:  mov    0x14(%ebx),%edx
087280bc +0x0dec:  mov    0x18(%ebx),%eax
087280bf +0x0def:  sub    %edx,%eax
087280c1 +0x0df1:  cmpb   $0x0,0x66(%ebx)
087280c5 +0x0df5:  jne    087280d2 <+0xe02>
087280c7 +0x0df7:  mov    0x60(%ebx),%ecx
087280ca +0x0dfa:  cmp    $0x1,%ecx
087280cd +0x0dfd:  jbe    087280d2 <+0xe02>
087280cf +0x0dff:  lea    -0x1(%ecx),%eax
087280d2 +0x0e02:  cmp    $0x3ff,%eax
087280d7 +0x0e07:  jle    087280de <+0xe0e>
087280d9 +0x0e09:  mov    $0x400,%eax
087280de +0x0e0e:  cmp    %esi,%eax
087280e0 +0x0e10:  jg     08728130 <+0xe60>
087280e2 +0x0e12:  mov    0x10(%ebx),%eax
087280e5 +0x0e15:  mov    %esi,0x10(%esp)
087280e9 +0x0e19:  mov    %edi,0xc(%esp)
087280ed +0x0e1d:  sub    %eax,%edx
087280ef +0x0e1f:  mov    %eax,0x4(%esp)
087280f3 +0x0e23:  lea    0x38(%ebx),%eax
087280f6 +0x0e26:  mov    %edx,0x8(%esp)
087280fa +0x0e2a:  mov    %edx,-0x20(%ebp)
087280fd +0x0e2d:  mov    %eax,(%esp)
08728100 +0x0e30:  call   087228d0 <_ZNSt12__basic_fileIcE8xsputn_2EPKciS2_i>  ; std::__basic_file<char>::xsputn_2(char const*, int, char const*, int)
08728105 +0x0e35:  mov    -0x20(%ebp),%edx
08728108 +0x0e38:  add    %edx,%esi
0872810a +0x0e3a:  cmp    %esi,%eax
0872810c +0x0e3c:  mov    %eax,%edi
0872810e +0x0e3e:  je     08728150 <+0xe80>
08728110 +0x0e40:  mov    %edi,%eax
08728112 +0x0e42:  mov    -0xc(%ebp),%ebx
08728115 +0x0e45:  sub    %edx,%eax
08728117 +0x0e47:  cmp    %edi,%edx
08728119 +0x0e49:  mov    -0x8(%ebp),%esi
0872811c +0x0e4c:  setge  %dl
0872811f +0x0e4f:  mov    -0x4(%ebp),%edi
08728122 +0x0e52:  mov    %ebp,%esp
08728124 +0x0e54:  movzbl %dl,%edx
08728127 +0x0e57:  sub    $0x1,%edx
0872812a +0x0e5a:  and    %edx,%eax
0872812c +0x0e5c:  pop    %ebp
0872812d +0x0e5d:  ret
0872812e +0x0e5e:  xchg   %ax,%ax
08728130 +0x0e60:  mov    %esi,0x10(%ebp)
08728133 +0x0e63:  mov    -0x8(%ebp),%esi
08728136 +0x0e66:  mov    %edi,0xc(%ebp)
08728139 +0x0e69:  mov    -0x4(%ebp),%edi
0872813c +0x0e6c:  mov    %ebx,0x8(%ebp)
0872813f +0x0e6f:  mov    -0xc(%ebp),%ebx
08728142 +0x0e72:  mov    %ebp,%esp
08728144 +0x0e74:  pop    %ebp
08728145 +0x0e75:  jmp    08706000 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x11794>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x11794
0872814a +0x0e7a:  lea    0x0(%esi),%esi
08728150 +0x0e80:  movl   $0x0,0x4(%esp)
08728158 +0x0e88:  mov    %ebx,(%esp)
0872815b +0x0e8b:  call   08727530 <+0x260>
08728160 +0x0e90:  mov    -0x20(%ebp),%edx
08728163 +0x0e93:  movb   $0x1,0x66(%ebx)
08728167 +0x0e97:  jmp    08728110 <+0xe40>
08728169 +0x0e99:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
0872816e +0x0e9e:  cmp    $0xffffffff,%edx
08728171 +0x0ea1:  je     0872817b <+0xeab>
08728173 +0x0ea3:  mov    %eax,(%esp)
08728176 +0x0ea6:  call   08ae3750 <_Unwind_Resume>
0872817b +0x0eab:  mov    %eax,(%esp)
0872817e +0x0eae:  call   08723df0 <__cxa_call_unexpected>
08728183 +0x0eb3:  nop
08728184 +0x0eb4:  nop
08728185 +0x0eb5:  nop
08728186 +0x0eb6:  nop
08728187 +0x0eb7:  nop
08728188 +0x0eb8:  nop
08728189 +0x0eb9:  nop
0872818a +0x0eba:  nop
0872818b +0x0ebb:  nop
0872818c +0x0ebc:  nop
0872818d +0x0ebd:  nop
0872818e +0x0ebe:  nop
0872818f +0x0ebf:  nop
08728190 +0x0ec0:  push   %ebp
08728191 +0x0ec1:  mov    %esp,%ebp
08728193 +0x0ec3:  sub    $0x48,%esp
08728196 +0x0ec6:  mov    %ebx,-0xc(%ebp)
08728199 +0x0ec9:  mov    0x8(%ebp),%ebx
0872819c +0x0ecc:  mov    %esi,-0x8(%ebp)
0872819f +0x0ecf:  mov    0x10(%ebp),%esi
087281a2 +0x0ed2:  mov    %edi,-0x4(%ebp)
087281a5 +0x0ed5:  mov    0xc(%ebp),%edi
087281a8 +0x0ed8:  mov    0x40(%ebx),%eax
087281ab +0x0edb:  mov    %eax,-0x1c(%ebp)
087281ae +0x0ede:  mov    0x78(%ebx),%eax
087281b1 +0x0ee1:  test   %eax,%eax
087281b3 +0x0ee3:  je     08728291 <+0xfc1>
087281b9 +0x0ee9:  mov    (%eax),%edx
087281bb +0x0eeb:  mov    %eax,(%esp)
087281be +0x0eee:  call   *0x18(%edx)
087281c1 +0x0ef1:  test   %al,%al
087281c3 +0x0ef3:  je     08728258 <+0xf88>
087281c9 +0x0ef9:  testb  $0x10,-0x1c(%ebp)
087281cd +0x0efd:  je     08728258 <+0xf88>
087281d3 +0x0f03:  cmpb   $0x0,0x65(%ebx)
087281d7 +0x0f07:  jne    08728258 <+0xf88>
087281d9 +0x0f09:  mov    0x14(%ebx),%edx
087281dc +0x0f0c:  mov    0x18(%ebx),%eax
087281df +0x0f0f:  sub    %edx,%eax
087281e1 +0x0f11:  sar    $0x2,%eax
087281e4 +0x0f14:  cmpb   $0x0,0x66(%ebx)
087281e8 +0x0f18:  jne    087281f5 <+0xf25>
087281ea +0x0f1a:  mov    0x60(%ebx),%ecx
087281ed +0x0f1d:  cmp    $0x1,%ecx
087281f0 +0x0f20:  jbe    087281f5 <+0xf25>
087281f2 +0x0f22:  lea    -0x1(%ecx),%eax
087281f5 +0x0f25:  cmp    $0x3ff,%eax
087281fa +0x0f2a:  jle    08728201 <+0xf31>
087281fc +0x0f2c:  mov    $0x400,%eax
08728201 +0x0f31:  cmp    %esi,%eax
08728203 +0x0f33:  jg     08728258 <+0xf88>
08728205 +0x0f35:  mov    0x10(%ebx),%eax
08728208 +0x0f38:  mov    %esi,0x10(%esp)
0872820c +0x0f3c:  mov    %edi,0xc(%esp)
08728210 +0x0f40:  sub    %eax,%edx
08728212 +0x0f42:  sar    $0x2,%edx
08728215 +0x0f45:  mov    %eax,0x4(%esp)
08728219 +0x0f49:  lea    0x38(%ebx),%eax
0872821c +0x0f4c:  mov    %edx,0x8(%esp)
08728220 +0x0f50:  mov    %edx,-0x20(%ebp)
08728223 +0x0f53:  mov    %eax,(%esp)
08728226 +0x0f56:  call   087228d0 <_ZNSt12__basic_fileIcE8xsputn_2EPKciS2_i>  ; std::__basic_file<char>::xsputn_2(char const*, int, char const*, int)
0872822b +0x0f5b:  mov    -0x20(%ebp),%edx
0872822e +0x0f5e:  add    %edx,%esi
08728230 +0x0f60:  cmp    %esi,%eax
08728232 +0x0f62:  mov    %eax,%edi
08728234 +0x0f64:  je     08728278 <+0xfa8>
08728236 +0x0f66:  mov    %edi,%eax
08728238 +0x0f68:  mov    -0xc(%ebp),%ebx
0872823b +0x0f6b:  sub    %edx,%eax
0872823d +0x0f6d:  cmp    %edi,%edx
0872823f +0x0f6f:  mov    -0x8(%ebp),%esi
08728242 +0x0f72:  setge  %dl
08728245 +0x0f75:  mov    -0x4(%ebp),%edi
08728248 +0x0f78:  mov    %ebp,%esp
0872824a +0x0f7a:  movzbl %dl,%edx
0872824d +0x0f7d:  sub    $0x1,%edx
08728250 +0x0f80:  and    %edx,%eax
08728252 +0x0f82:  pop    %ebp
08728253 +0x0f83:  ret
08728254 +0x0f84:  lea    0x0(%esi,%eiz,1),%esi
08728258 +0x0f88:  mov    %esi,0x10(%ebp)
0872825b +0x0f8b:  mov    -0x8(%ebp),%esi
0872825e +0x0f8e:  mov    %edi,0xc(%ebp)
08728261 +0x0f91:  mov    -0x4(%ebp),%edi
08728264 +0x0f94:  mov    %ebx,0x8(%ebp)
08728267 +0x0f97:  mov    -0xc(%ebp),%ebx
0872826a +0x0f9a:  mov    %ebp,%esp
0872826c +0x0f9c:  pop    %ebp
0872826d +0x0f9d:  jmp    08705bc0 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x11354>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x11354
08728272 +0x0fa2:  lea    0x0(%esi),%esi
08728278 +0x0fa8:  movl   $0x0,0x4(%esp)
08728280 +0x0fb0:  mov    %ebx,(%esp)
08728283 +0x0fb3:  call   087277b0 <+0x4e0>
08728288 +0x0fb8:  mov    -0x20(%ebp),%edx
0872828b +0x0fbb:  movb   $0x1,0x66(%ebx)
0872828f +0x0fbf:  jmp    08728236 <+0xf66>
08728291 +0x0fc1:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
08728296 +0x0fc6:  cmp    $0xffffffff,%edx
08728299 +0x0fc9:  je     087282a3 <+0xfd3>
0872829b +0x0fcb:  mov    %eax,(%esp)
0872829e +0x0fce:  call   08ae3750 <_Unwind_Resume>
087282a3 +0x0fd3:  mov    %eax,(%esp)
087282a6 +0x0fd6:  call   08723df0 <__cxa_call_unexpected>
087282ab +0x0fdb:  nop
087282ac +0x0fdc:  nop
087282ad +0x0fdd:  nop
087282ae +0x0fde:  nop
087282af +0x0fdf:  nop
087282b0 +0x0fe0:  push   %ebp
087282b1 +0x0fe1:  mov    %esp,%ebp
087282b3 +0x0fe3:  push   %edi
087282b4 +0x0fe4:  push   %esi
087282b5 +0x0fe5:  push   %ebx
087282b6 +0x0fe6:  sub    $0x5c,%esp
087282b9 +0x0fe9:  mov    0x8(%ebp),%ebx
087282bc +0x0fec:  mov    %gs:0x14,%eax
087282c2 +0x0ff2:  mov    %eax,-0x1c(%ebp)
087282c5 +0x0ff5:  xor    %eax,%eax
087282c7 +0x0ff7:  mov    0xc(%ebp),%esi
087282ca +0x0ffa:  mov    0x10(%ebp),%edi
087282cd +0x0ffd:  mov    0x78(%ebx),%eax
087282d0 +0x1000:  test   %eax,%eax
087282d2 +0x1002:  je     0872845b <+0x118b>
087282d8 +0x1008:  mov    (%eax),%edx
087282da +0x100a:  mov    %eax,(%esp)
087282dd +0x100d:  call   *0x18(%edx)
087282e0 +0x1010:  test   %al,%al
087282e2 +0x1012:  jne    08728390 <+0x10c0>
087282e8 +0x1018:  mov    0x78(%ebx),%eax
087282eb +0x101b:  mov    (%eax),%edx
087282ed +0x101d:  mov    %eax,(%esp)
087282f0 +0x1020:  call   *0x20(%edx)
087282f3 +0x1023:  lea    0x4c(%ebx),%ecx
087282f6 +0x1026:  mov    %ecx,-0x30(%ebp)
087282f9 +0x1029:  mov    0x78(%ebx),%ecx
087282fc +0x102c:  imul   %edi,%eax
087282ff +0x102f:  mov    (%ecx),%ecx
08728301 +0x1031:  lea    0x1e(%eax),%edx
08728304 +0x1034:  and    $0xfffffff0,%edx
08728307 +0x1037:  sub    %edx,%esp
08728309 +0x1039:  lea    0x2f(%esp),%edx
0872830d +0x103d:  mov    %ecx,-0x2c(%ebp)
08728310 +0x1040:  lea    -0x20(%ebp),%ecx
08728313 +0x1043:  and    $0xfffffff0,%edx
08728316 +0x1046:  mov    %ecx,0x1c(%esp)
0872831a +0x104a:  mov    -0x30(%ebp),%ecx
0872831d +0x104d:  lea    (%edx,%eax,1),%eax
08728320 +0x1050:  mov    %eax,0x18(%esp)
08728324 +0x1054:  lea    -0x24(%ebp),%eax
08728327 +0x1057:  mov    %eax,0x10(%esp)
0872832b +0x105b:  lea    (%esi,%edi,4),%eax
0872832e +0x105e:  mov    %edx,0x14(%esp)
08728332 +0x1062:  mov    %ecx,0x4(%esp)
08728336 +0x1066:  mov    -0x2c(%ebp),%ecx
08728339 +0x1069:  mov    %eax,0xc(%esp)
0872833d +0x106d:  mov    %esi,0x8(%esp)
08728341 +0x1071:  mov    0x78(%ebx),%eax
08728344 +0x1074:  mov    %edx,-0x34(%ebp)
08728347 +0x1077:  mov    %eax,(%esp)
0872834a +0x107a:  call   *0x8(%ecx)
0872834d +0x107d:  mov    -0x34(%ebp),%edx
08728350 +0x1080:  cmp    $0x1,%eax
08728353 +0x1083:  jbe    087283b0 <+0x10e0>
08728355 +0x1085:  cmp    $0x3,%eax
08728358 +0x1088:  jne    08728460 <+0x1190>
0872835e +0x108e:  add    $0x38,%ebx
08728361 +0x1091:  mov    %edi,0x8(%esp)
08728365 +0x1095:  mov    %esi,0x4(%esp)
08728369 +0x1099:  mov    %ebx,(%esp)
0872836c +0x109c:  call   08722980 <_ZNSt12__basic_fileIcE6xsputnEPKci>  ; std::__basic_file<char>::xsputn(char const*, int)
08728371 +0x10a1:  cmp    %edi,%eax
08728373 +0x10a3:  sete   %al
08728376 +0x10a6:  mov    -0x1c(%ebp),%edi
08728379 +0x10a9:  xor    %gs:0x14,%edi
08728380 +0x10b0:  jne    08728456 <+0x1186>
08728386 +0x10b6:  lea    -0xc(%ebp),%esp
08728389 +0x10b9:  pop    %ebx
0872838a +0x10ba:  pop    %esi
0872838b +0x10bb:  pop    %edi
0872838c +0x10bc:  pop    %ebp
0872838d +0x10bd:  ret
0872838e +0x10be:  xchg   %ax,%ax
08728390 +0x10c0:  add    $0x38,%ebx
08728393 +0x10c3:  mov    %edi,0x8(%esp)
08728397 +0x10c7:  mov    %esi,0x4(%esp)
0872839b +0x10cb:  mov    %ebx,(%esp)
0872839e +0x10ce:  call   08722980 <_ZNSt12__basic_fileIcE6xsputnEPKci>  ; std::__basic_file<char>::xsputn(char const*, int)
087283a3 +0x10d3:  cmp    %eax,%edi
087283a5 +0x10d5:  sete   %al
087283a8 +0x10d8:  jmp    08728376 <+0x10a6>
087283aa +0x10da:  lea    0x0(%esi),%esi
087283b0 +0x10e0:  mov    -0x20(%ebp),%esi
087283b3 +0x10e3:  lea    0x38(%ebx),%edi
087283b6 +0x10e6:  mov    %edx,0x4(%esp)
087283ba +0x10ea:  mov    %edx,-0x34(%ebp)
087283bd +0x10ed:  mov    %edi,-0x2c(%ebp)
087283c0 +0x10f0:  sub    %edx,%esi
087283c2 +0x10f2:  mov    %esi,0x8(%esp)
087283c6 +0x10f6:  mov    %edi,(%esp)
087283c9 +0x10f9:  mov    %eax,-0x38(%ebp)
087283cc +0x10fc:  call   08722980 <_ZNSt12__basic_fileIcE6xsputnEPKci>  ; std::__basic_file<char>::xsputn(char const*, int)
087283d1 +0x1101:  mov    -0x34(%ebp),%edx
087283d4 +0x1104:  mov    -0x38(%ebp),%ecx
087283d7 +0x1107:  cmp    %eax,%esi
087283d9 +0x1109:  sete   %al
087283dc +0x110c:  jne    08728376 <+0x10a6>
087283de +0x110e:  test   %cl,%cl
087283e0 +0x1110:  je     08728376 <+0x10a6>
087283e2 +0x1112:  mov    0x78(%ebx),%eax
087283e5 +0x1115:  lea    (%edx,%esi,1),%esi
087283e8 +0x1118:  mov    -0x24(%ebp),%ecx
087283eb +0x111b:  mov    %edx,-0x34(%ebp)
087283ee +0x111e:  mov    (%eax),%edi
087283f0 +0x1120:  mov    %esi,0x18(%esp)
087283f4 +0x1124:  lea    -0x24(%ebp),%esi
087283f7 +0x1127:  mov    %edx,0x14(%esp)
087283fb +0x112b:  mov    %esi,0x10(%esp)
087283ff +0x112f:  mov    %edi,-0x3c(%ebp)
08728402 +0x1132:  lea    -0x20(%ebp),%edi
08728405 +0x1135:  mov    %edi,0x1c(%esp)
08728409 +0x1139:  mov    0x14(%ebx),%ebx
0872840c +0x113c:  mov    -0x30(%ebp),%edi
0872840f +0x113f:  mov    %ecx,0x8(%esp)
08728413 +0x1143:  mov    %eax,(%esp)
08728416 +0x1146:  sub    %ecx,%ebx
08728418 +0x1148:  and    $0xfffffffc,%ebx
0872841b +0x114b:  lea    (%ecx,%ebx,1),%ebx
0872841e +0x114e:  mov    -0x3c(%ebp),%ecx
08728421 +0x1151:  mov    %ebx,0xc(%esp)
08728425 +0x1155:  mov    %edi,0x4(%esp)
08728429 +0x1159:  call   *0x8(%ecx)
0872842c +0x115c:  mov    -0x34(%ebp),%edx
0872842f +0x115f:  cmp    $0x2,%eax
08728432 +0x1162:  je     08728460 <+0x1190>
08728434 +0x1164:  mov    -0x20(%ebp),%ebx
08728437 +0x1167:  mov    -0x2c(%ebp),%esi
0872843a +0x116a:  mov    %edx,0x4(%esp)
0872843e +0x116e:  sub    %edx,%ebx
08728440 +0x1170:  mov    %ebx,0x8(%esp)
08728444 +0x1174:  mov    %esi,(%esp)
08728447 +0x1177:  call   08722980 <_ZNSt12__basic_fileIcE6xsputnEPKci>  ; std::__basic_file<char>::xsputn(char const*, int)
0872844c +0x117c:  cmp    %eax,%ebx
0872844e +0x117e:  sete   %al
08728451 +0x1181:  jmp    08728376 <+0x10a6>
08728456 +0x1186:  call   0807d980 <_init+0x278>
0872845b +0x118b:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
08728460 +0x1190:  movl   $"basic_filebuf::_M_convert_to_external conversion error",(%esp)
08728467 +0x1197:  call   086d9780 <_ZSt19__throw_ios_failurePKc>  ; std::__throw_ios_failure(char const*)
0872846c +0x119c:  cmp    $0xffffffff,%edx
0872846f +0x119f:  je     0872847b <+0x11ab>
08728471 +0x11a1:  mov    %eax,(%esp)
08728474 +0x11a4:  call   08ae3750 <_Unwind_Resume>
08728479 +0x11a9:  jmp    0872846c <+0x119c>
0872847b +0x11ab:  mov    %eax,(%esp)
0872847e +0x11ae:  call   08723df0 <__cxa_call_unexpected>
08728483 +0x11b3:  nop
08728484 +0x11b4:  nop
08728485 +0x11b5:  nop
08728486 +0x11b6:  nop
08728487 +0x11b7:  nop
08728488 +0x11b8:  nop
08728489 +0x11b9:  nop
0872848a +0x11ba:  nop
0872848b +0x11bb:  nop
0872848c +0x11bc:  nop
0872848d +0x11bd:  nop
0872848e +0x11be:  nop
0872848f +0x11bf:  nop
08728490 +0x11c0:  push   %ebp
08728491 +0x11c1:  mov    %esp,%ebp
08728493 +0x11c3:  sub    $0x38,%esp
08728496 +0x11c6:  mov    %ebx,-0xc(%ebp)
08728499 +0x11c9:  mov    0x8(%ebp),%ebx
0872849c +0x11cc:  mov    %esi,-0x8(%ebp)
0872849f +0x11cf:  mov    0xc(%ebp),%esi
087284a2 +0x11d2:  mov    %edi,-0x4(%ebp)
087284a5 +0x11d5:  testb  $0x10,0x40(%ebx)
087284a9 +0x11d9:  je     08728508 <+0x1238>
087284ab +0x11db:  cmpb   $0x0,0x65(%ebx)
087284af +0x11df:  jne    08728508 <+0x1238>
087284b1 +0x11e1:  cmp    $0xffffffff,%esi
087284b4 +0x11e4:  mov    0x10(%ebx),%edx
087284b7 +0x11e7:  sete   %al
087284ba +0x11ea:  mov    %eax,%edi
087284bc +0x11ec:  mov    0x14(%ebx),%eax
087284bf +0x11ef:  cmp    %eax,%edx
087284c1 +0x11f1:  jae    08728520 <+0x1250>
087284c3 +0x11f3:  mov    %edi,%ecx
087284c5 +0x11f5:  test   %cl,%cl
087284c7 +0x11f7:  jne    087284d1 <+0x1201>
087284c9 +0x11f9:  mov    %esi,(%eax)
087284cb +0x11fb:  add    $0x4,%eax
087284ce +0x11fe:  mov    %eax,0x14(%ebx)
087284d1 +0x1201:  sub    %edx,%eax
087284d3 +0x1203:  sar    $0x2,%eax
087284d6 +0x1206:  mov    %eax,0x8(%esp)
087284da +0x120a:  mov    %edx,0x4(%esp)
087284de +0x120e:  mov    %ebx,(%esp)
087284e1 +0x1211:  call   087282b0 <+0xfe0>
087284e6 +0x1216:  test   %al,%al
087284e8 +0x1218:  je     08728508 <+0x1238>
087284ea +0x121a:  movl   $0x0,0x4(%esp)
087284f2 +0x1222:  mov    %ebx,(%esp)
087284f5 +0x1225:  call   087277b0 <+0x4e0>
087284fa +0x122a:  mov    %edi,%edx
087284fc +0x122c:  mov    %esi,%eax
087284fe +0x122e:  test   %dl,%dl
08728500 +0x1230:  je     0872850d <+0x123d>
08728502 +0x1232:  xor    %eax,%eax
08728504 +0x1234:  jmp    0872850d <+0x123d>
08728506 +0x1236:  xchg   %ax,%ax
08728508 +0x1238:  mov    $0xffffffff,%eax
0872850d +0x123d:  mov    -0xc(%ebp),%ebx
08728510 +0x1240:  mov    -0x8(%ebp),%esi
08728513 +0x1243:  mov    -0x4(%ebp),%edi
08728516 +0x1246:  mov    %ebp,%esp
08728518 +0x1248:  pop    %ebp
08728519 +0x1249:  ret
0872851a +0x124a:  lea    0x0(%esi),%esi
08728520 +0x1250:  cmpl   $0x1,0x60(%ebx)
08728524 +0x1254:  jbe    08728550 <+0x1280>
08728526 +0x1256:  movl   $0x0,0x4(%esp)
0872852e +0x125e:  mov    %ebx,(%esp)
08728531 +0x1261:  call   087277b0 <+0x4e0>
08728536 +0x1266:  mov    %edi,%ecx
08728538 +0x1268:  test   %cl,%cl
0872853a +0x126a:  movb   $0x1,0x66(%ebx)
0872853e +0x126e:  jne    08728502 <+0x1232>
08728540 +0x1270:  mov    0x14(%ebx),%eax
08728543 +0x1273:  addl   $0x4,0x14(%ebx)
08728547 +0x1277:  mov    %esi,(%eax)
08728549 +0x1279:  mov    %esi,%eax
0872854b +0x127b:  jmp    0872850d <+0x123d>
0872854d +0x127d:  lea    0x0(%esi),%esi
08728550 +0x1280:  mov    %edi,%eax
08728552 +0x1282:  test   %al,%al
08728554 +0x1284:  je     08728560 <+0x1290>
08728556 +0x1286:  movb   $0x1,0x66(%ebx)
0872855a +0x128a:  xor    %eax,%eax
0872855c +0x128c:  jmp    0872850d <+0x123d>
0872855e +0x128e:  xchg   %ax,%ax
08728560 +0x1290:  lea    -0x1c(%ebp),%eax
08728563 +0x1293:  mov    %esi,-0x1c(%ebp)
08728566 +0x1296:  movl   $0x1,0x8(%esp)
0872856e +0x129e:  mov    %eax,0x4(%esp)
08728572 +0x12a2:  mov    %ebx,(%esp)
08728575 +0x12a5:  call   087282b0 <+0xfe0>
0872857a +0x12aa:  test   %al,%al
0872857c +0x12ac:  je     08728508 <+0x1238>
0872857e +0x12ae:  movb   $0x1,0x66(%ebx)
08728582 +0x12b2:  mov    %esi,%eax
08728584 +0x12b4:  jmp    0872850d <+0x123d>
08728586 +0x12b6:  nop
08728587 +0x12b7:  nop
08728588 +0x12b8:  nop
08728589 +0x12b9:  nop
0872858a +0x12ba:  nop
0872858b +0x12bb:  nop
0872858c +0x12bc:  nop
0872858d +0x12bd:  nop
0872858e +0x12be:  nop
0872858f +0x12bf:  nop
08728590 +0x12c0:  push   %ebp
08728591 +0x12c1:  mov    %esp,%ebp
08728593 +0x12c3:  push   %edi
08728594 +0x12c4:  push   %esi
08728595 +0x12c5:  push   %ebx
08728596 +0x12c6:  sub    $0xdc,%esp
0872859c +0x12cc:  mov    0x8(%ebp),%ebx
0872859f +0x12cf:  mov    %gs:0x14,%eax
087285a5 +0x12d5:  mov    %eax,-0x1c(%ebp)
087285a8 +0x12d8:  xor    %eax,%eax
087285aa +0x12da:  mov    0x10(%ebx),%eax
087285ad +0x12dd:  cmp    0x14(%ebx),%eax
087285b0 +0x12e0:  jb     08728698 <+0x13c8>
087285b6 +0x12e6:  movb   $0x1,-0xa9(%ebp)
087285bd +0x12ed:  cmpb   $0x0,0x66(%ebx)
087285c1 +0x12f1:  jne    087285f0 <+0x1320>
087285c3 +0x12f3:  movzbl -0xa9(%ebp),%eax
087285ca +0x12fa:  lea    0x0(%esi),%esi
087285d0 +0x1300:  mov    -0x1c(%ebp),%edx
087285d3 +0x1303:  xor    %gs:0x14,%edx
087285da +0x130a:  jne    0872874f <+0x147f>
087285e0 +0x1310:  add    $0xdc,%esp
087285e6 +0x1316:  pop    %ebx
087285e7 +0x1317:  pop    %esi
087285e8 +0x1318:  pop    %edi
087285e9 +0x1319:  pop    %ebp
087285ea +0x131a:  ret
087285eb +0x131b:  nop
087285ec +0x131c:  lea    0x0(%esi,%eiz,1),%esi
087285f0 +0x1320:  mov    0x74(%ebx),%eax
087285f3 +0x1323:  test   %eax,%eax
087285f5 +0x1325:  je     08728762 <+0x1492>
087285fb +0x132b:  mov    (%eax),%edx
087285fd +0x132d:  mov    %eax,(%esp)
08728600 +0x1330:  call   *0x18(%edx)
08728603 +0x1333:  test   %al,%al
08728605 +0x1335:  jne    087285c3 <+0x12f3>
08728607 +0x1337:  cmpb   $0x0,-0xa9(%ebp)
0872860e +0x133e:  je     087285c3 <+0x12f3>
08728610 +0x1340:  lea    0x38(%ebx),%edx
08728613 +0x1343:  xor    %edi,%edi
08728615 +0x1345:  lea    0x4c(%ebx),%eax
08728618 +0x1348:  lea    -0x9c(%ebp),%esi
0872861e +0x134e:  mov    %edx,-0xb0(%ebp)
08728624 +0x1354:  mov    %ebx,%edx
08728626 +0x1356:  mov    %eax,%ebx
08728628 +0x1358:  mov    %esi,-0xbc(%ebp)
0872862e +0x135e:  xchg   %ax,%ax
08728630 +0x1360:  mov    0x74(%edx),%eax
08728633 +0x1363:  lea    -0xa0(%ebp),%esi
08728639 +0x1369:  mov    %edx,-0xb4(%ebp)
0872863f +0x136f:  mov    (%eax),%ecx
08728641 +0x1371:  mov    %esi,0x10(%esp)
08728645 +0x1375:  lea    -0x1c(%ebp),%esi
08728648 +0x1378:  mov    %esi,0xc(%esp)
0872864c +0x137c:  lea    -0x9c(%ebp),%esi
08728652 +0x1382:  mov    %esi,0x8(%esp)
08728656 +0x1386:  mov    %ebx,0x4(%esp)
0872865a +0x138a:  mov    %eax,(%esp)
0872865d +0x138d:  call   *0xc(%ecx)
08728660 +0x1390:  mov    -0xb4(%ebp),%edx
08728666 +0x1396:  cmp    $0x2,%eax
08728669 +0x1399:  mov    %eax,%esi
0872866b +0x139b:  je     087286c0 <+0x13f0>
0872866d +0x139d:  cmp    $0x1,%eax
08728670 +0x13a0:  jbe    08728700 <+0x1430>
08728676 +0x13a6:  movzbl -0xa9(%ebp),%eax
0872867d +0x13ad:  test   %edi,%edi
0872867f +0x13af:  jle    087286f8 <+0x1428>
08728681 +0x13b1:  cmp    $0x1,%esi
08728684 +0x13b4:  jne    087286f8 <+0x1428>
08728686 +0x13b6:  test   %al,%al
08728688 +0x13b8:  jne    08728630 <+0x1360>
0872868a +0x13ba:  lea    0x0(%esi),%esi
08728690 +0x13c0:  jmp    087285d0 <+0x1300>
08728695 +0x13c5:  lea    0x0(%esi),%esi
08728698 +0x13c8:  mov    (%ebx),%eax
0872869a +0x13ca:  movl   $0xffffffff,0x4(%esp)
087286a2 +0x13d2:  mov    %ebx,(%esp)
087286a5 +0x13d5:  call   *0x34(%eax)
087286a8 +0x13d8:  movb   $0x0,-0xa9(%ebp)
087286af +0x13df:  cmp    $0xffffffff,%eax
087286b2 +0x13e2:  jne    087285b6 <+0x12e6>
087286b8 +0x13e8:  jmp    087285bd <+0x12ed>
087286bd +0x13ed:  lea    0x0(%esi),%esi
087286c0 +0x13f0:  mov    %edx,%ebx
087286c2 +0x13f2:  movb   $0x0,-0xa9(%ebp)
087286c9 +0x13f9:  movzbl -0xa9(%ebp),%eax
087286d0 +0x1400:  test   %al,%al
087286d2 +0x1402:  je     087285d0 <+0x1300>
087286d8 +0x1408:  mov    (%ebx),%eax
087286da +0x140a:  movl   $0xffffffff,0x4(%esp)
087286e2 +0x1412:  mov    %ebx,(%esp)
087286e5 +0x1415:  call   *0x34(%eax)
087286e8 +0x1418:  cmp    $0xffffffff,%eax
087286eb +0x141b:  setne  %al
087286ee +0x141e:  jmp    087285d0 <+0x1300>
087286f3 +0x1423:  nop
087286f4 +0x1424:  lea    0x0(%esi,%eiz,1),%esi
087286f8 +0x1428:  mov    %edx,%ebx
087286fa +0x142a:  jmp    087286d0 <+0x1400>
087286fc +0x142c:  lea    0x0(%esi,%eiz,1),%esi
08728700 +0x1430:  mov    -0xa0(%ebp),%edi
08728706 +0x1436:  sub    -0xbc(%ebp),%edi
0872870c +0x143c:  test   %edi,%edi
0872870e +0x143e:  jle    08728748 <+0x1478>
08728710 +0x1440:  lea    -0x9c(%ebp),%eax
08728716 +0x1446:  mov    %eax,0x4(%esp)
0872871a +0x144a:  mov    -0xb0(%ebp),%eax
08728720 +0x1450:  mov    %edi,0x8(%esp)
08728724 +0x1454:  mov    %eax,(%esp)
08728727 +0x1457:  call   08722980 <_ZNSt12__basic_fileIcE6xsputnEPKci>  ; std::__basic_file<char>::xsputn(char const*, int)
0872872c +0x145c:  mov    -0xb4(%ebp),%edx
08728732 +0x1462:  mov    %eax,%ecx
08728734 +0x1464:  xor    %eax,%eax
08728736 +0x1466:  cmp    %ecx,%edi
08728738 +0x1468:  jne    0872867d <+0x13ad>
0872873e +0x146e:  jmp    08728676 <+0x13a6>
08728743 +0x1473:  nop
08728744 +0x1474:  lea    0x0(%esi,%eiz,1),%esi
08728748 +0x1478:  mov    %edx,%ebx
0872874a +0x147a:  jmp    087286c9 <+0x13f9>
0872874f +0x147f:  nop
08728750 +0x1480:  call   0807d980 <_init+0x278>
08728755 +0x1485:  cmp    $0xffffffff,%edx
08728758 +0x1488:  je     08728767 <+0x1497>
0872875a +0x148a:  mov    %eax,(%esp)
0872875d +0x148d:  call   08ae3750 <_Unwind_Resume>
08728762 +0x1492:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
08728767 +0x1497:  mov    %eax,(%esp)
0872876a +0x149a:  call   08723df0 <__cxa_call_unexpected>
0872876f +0x149f:  nop
08728770 +0x14a0:  push   %ebp
08728771 +0x14a1:  mov    %esp,%ebp
08728773 +0x14a3:  push   %edi
08728774 +0x14a4:  push   %esi
08728775 +0x14a5:  push   %ebx
08728776 +0x14a6:  sub    $0xdc,%esp
0872877c +0x14ac:  mov    0x8(%ebp),%ebx
0872877f +0x14af:  mov    %gs:0x14,%eax
08728785 +0x14b5:  mov    %eax,-0x1c(%ebp)
08728788 +0x14b8:  xor    %eax,%eax
0872878a +0x14ba:  mov    0x10(%ebx),%eax
0872878d +0x14bd:  cmp    0x14(%ebx),%eax
08728790 +0x14c0:  jb     08728878 <+0x15a8>
08728796 +0x14c6:  movb   $0x1,-0xa9(%ebp)
0872879d +0x14cd:  cmpb   $0x0,0x66(%ebx)
087287a1 +0x14d1:  jne    087287d0 <+0x1500>
087287a3 +0x14d3:  movzbl -0xa9(%ebp),%eax
087287aa +0x14da:  lea    0x0(%esi),%esi
087287b0 +0x14e0:  mov    -0x1c(%ebp),%edx
087287b3 +0x14e3:  xor    %gs:0x14,%edx
087287ba +0x14ea:  jne    0872892f <+0x165f>
087287c0 +0x14f0:  add    $0xdc,%esp
087287c6 +0x14f6:  pop    %ebx
087287c7 +0x14f7:  pop    %esi
087287c8 +0x14f8:  pop    %edi
087287c9 +0x14f9:  pop    %ebp
087287ca +0x14fa:  ret
087287cb +0x14fb:  nop
087287cc +0x14fc:  lea    0x0(%esi,%eiz,1),%esi
087287d0 +0x1500:  mov    0x78(%ebx),%eax
087287d3 +0x1503:  test   %eax,%eax
087287d5 +0x1505:  je     08728942 <+0x1672>
087287db +0x150b:  mov    (%eax),%edx
087287dd +0x150d:  mov    %eax,(%esp)
087287e0 +0x1510:  call   *0x18(%edx)
087287e3 +0x1513:  test   %al,%al
087287e5 +0x1515:  jne    087287a3 <+0x14d3>
087287e7 +0x1517:  cmpb   $0x0,-0xa9(%ebp)
087287ee +0x151e:  je     087287a3 <+0x14d3>
087287f0 +0x1520:  lea    0x38(%ebx),%edx
087287f3 +0x1523:  xor    %edi,%edi
087287f5 +0x1525:  lea    0x4c(%ebx),%eax
087287f8 +0x1528:  lea    -0x9c(%ebp),%esi
087287fe +0x152e:  mov    %edx,-0xb0(%ebp)
08728804 +0x1534:  mov    %ebx,%edx
08728806 +0x1536:  mov    %eax,%ebx
08728808 +0x1538:  mov    %esi,-0xbc(%ebp)
0872880e +0x153e:  xchg   %ax,%ax
08728810 +0x1540:  mov    0x78(%edx),%eax
08728813 +0x1543:  lea    -0xa0(%ebp),%esi
08728819 +0x1549:  mov    %edx,-0xb4(%ebp)
0872881f +0x154f:  mov    (%eax),%ecx
08728821 +0x1551:  mov    %esi,0x10(%esp)
08728825 +0x1555:  lea    -0x1c(%ebp),%esi
08728828 +0x1558:  mov    %esi,0xc(%esp)
0872882c +0x155c:  lea    -0x9c(%ebp),%esi
08728832 +0x1562:  mov    %esi,0x8(%esp)
08728836 +0x1566:  mov    %ebx,0x4(%esp)
0872883a +0x156a:  mov    %eax,(%esp)
0872883d +0x156d:  call   *0xc(%ecx)
08728840 +0x1570:  mov    -0xb4(%ebp),%edx
08728846 +0x1576:  cmp    $0x2,%eax
08728849 +0x1579:  mov    %eax,%esi
0872884b +0x157b:  je     087288a0 <+0x15d0>
0872884d +0x157d:  cmp    $0x1,%eax
08728850 +0x1580:  jbe    087288e0 <+0x1610>
08728856 +0x1586:  movzbl -0xa9(%ebp),%eax
0872885d +0x158d:  test   %edi,%edi
0872885f +0x158f:  jle    087288d8 <+0x1608>
08728861 +0x1591:  cmp    $0x1,%esi
08728864 +0x1594:  jne    087288d8 <+0x1608>
08728866 +0x1596:  test   %al,%al
08728868 +0x1598:  jne    08728810 <+0x1540>
0872886a +0x159a:  lea    0x0(%esi),%esi
08728870 +0x15a0:  jmp    087287b0 <+0x14e0>
08728875 +0x15a5:  lea    0x0(%esi),%esi
08728878 +0x15a8:  mov    (%ebx),%eax
0872887a +0x15aa:  movl   $0xffffffff,0x4(%esp)
08728882 +0x15b2:  mov    %ebx,(%esp)
08728885 +0x15b5:  call   *0x34(%eax)
08728888 +0x15b8:  movb   $0x0,-0xa9(%ebp)
0872888f +0x15bf:  cmp    $0xffffffff,%eax
08728892 +0x15c2:  jne    08728796 <+0x14c6>
08728898 +0x15c8:  jmp    0872879d <+0x14cd>
0872889d +0x15cd:  lea    0x0(%esi),%esi
087288a0 +0x15d0:  mov    %edx,%ebx
087288a2 +0x15d2:  movb   $0x0,-0xa9(%ebp)
087288a9 +0x15d9:  movzbl -0xa9(%ebp),%eax
087288b0 +0x15e0:  test   %al,%al
087288b2 +0x15e2:  je     087287b0 <+0x14e0>
087288b8 +0x15e8:  mov    (%ebx),%eax
087288ba +0x15ea:  movl   $0xffffffff,0x4(%esp)
087288c2 +0x15f2:  mov    %ebx,(%esp)
087288c5 +0x15f5:  call   *0x34(%eax)
087288c8 +0x15f8:  cmp    $0xffffffff,%eax
087288cb +0x15fb:  setne  %al
087288ce +0x15fe:  jmp    087287b0 <+0x14e0>
087288d3 +0x1603:  nop
087288d4 +0x1604:  lea    0x0(%esi,%eiz,1),%esi
087288d8 +0x1608:  mov    %edx,%ebx
087288da +0x160a:  jmp    087288b0 <+0x15e0>
087288dc +0x160c:  lea    0x0(%esi,%eiz,1),%esi
087288e0 +0x1610:  mov    -0xa0(%ebp),%edi
087288e6 +0x1616:  sub    -0xbc(%ebp),%edi
087288ec +0x161c:  test   %edi,%edi
087288ee +0x161e:  jle    08728928 <+0x1658>
087288f0 +0x1620:  lea    -0x9c(%ebp),%eax
087288f6 +0x1626:  mov    %eax,0x4(%esp)
087288fa +0x162a:  mov    -0xb0(%ebp),%eax
08728900 +0x1630:  mov    %edi,0x8(%esp)
08728904 +0x1634:  mov    %eax,(%esp)
08728907 +0x1637:  call   08722980 <_ZNSt12__basic_fileIcE6xsputnEPKci>  ; std::__basic_file<char>::xsputn(char const*, int)
0872890c +0x163c:  mov    -0xb4(%ebp),%edx
08728912 +0x1642:  mov    %eax,%ecx
08728914 +0x1644:  xor    %eax,%eax
08728916 +0x1646:  cmp    %ecx,%edi
08728918 +0x1648:  jne    0872885d <+0x158d>
0872891e +0x164e:  jmp    08728856 <+0x1586>
08728923 +0x1653:  nop
08728924 +0x1654:  lea    0x0(%esi,%eiz,1),%esi
08728928 +0x1658:  mov    %edx,%ebx
0872892a +0x165a:  jmp    087288a9 <+0x15d9>
0872892f +0x165f:  nop
08728930 +0x1660:  call   0807d980 <_init+0x278>
08728935 +0x1665:  cmp    $0xffffffff,%edx
08728938 +0x1668:  je     08728947 <+0x1677>
0872893a +0x166a:  mov    %eax,(%esp)
0872893d +0x166d:  call   08ae3750 <_Unwind_Resume>
08728942 +0x1672:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
08728947 +0x1677:  mov    %eax,(%esp)
0872894a +0x167a:  call   08723df0 <__cxa_call_unexpected>
0872894f +0x167f:  nop
08728950 +0x1680:  push   %ebp
08728951 +0x1681:  mov    %esp,%ebp
08728953 +0x1683:  sub    $0x18,%esp
08728956 +0x1686:  mov    0x8(%ebp),%eax
08728959 +0x1689:  add    $0x44,%eax
0872895c +0x168c:  mov    %eax,(%esp)
0872895f +0x168f:  call   08722580 <_ZNKSt12__basic_fileIcE7is_openEv>  ; std::__basic_file<char>::is_open() const
08728964 +0x1694:  leave
08728965 +0x1695:  ret
08728966 +0x1696:  cmp    $0xffffffff,%edx
08728969 +0x1699:  je     08728975 <+0x16a5>
0872896b +0x169b:  mov    %eax,(%esp)
0872896e +0x169e:  xchg   %ax,%ax
08728970 +0x16a0:  call   08ae3750 <_Unwind_Resume>
08728975 +0x16a5:  mov    %eax,(%esp)
08728978 +0x16a8:  call   08723df0 <__cxa_call_unexpected>
0872897d +0x16ad:  nop
0872897e +0x16ae:  nop
0872897f +0x16af:  nop
08728980 +0x16b0:  push   %ebp
08728981 +0x16b1:  mov    %esp,%ebp
08728983 +0x16b3:  sub    $0x18,%esp
08728986 +0x16b6:  mov    0x8(%ebp),%eax
08728989 +0x16b9:  add    $0x44,%eax
0872898c +0x16bc:  mov    %eax,(%esp)
0872898f +0x16bf:  call   08722580 <_ZNKSt12__basic_fileIcE7is_openEv>  ; std::__basic_file<char>::is_open() const
08728994 +0x16c4:  leave
08728995 +0x16c5:  ret
08728996 +0x16c6:  cmp    $0xffffffff,%edx
08728999 +0x16c9:  je     087289a5 <+0x16d5>
0872899b +0x16cb:  mov    %eax,(%esp)
0872899e +0x16ce:  xchg   %ax,%ax
087289a0 +0x16d0:  call   08ae3750 <_Unwind_Resume>
087289a5 +0x16d5:  mov    %eax,(%esp)
087289a8 +0x16d8:  call   08723df0 <__cxa_call_unexpected>
087289ad +0x16dd:  nop
087289ae +0x16de:  nop
087289af +0x16df:  nop
087289b0 +0x16e0:  push   %ebp
087289b1 +0x16e1:  mov    %esp,%ebp
087289b3 +0x16e3:  sub    $0x28,%esp
087289b6 +0x16e6:  mov    %ebx,-0xc(%ebp)
087289b9 +0x16e9:  mov    0x8(%ebp),%ebx
087289bc +0x16ec:  mov    %esi,-0x8(%ebp)
087289bf +0x16ef:  mov    0xc(%ebp),%esi
087289c2 +0x16f2:  mov    %edi,-0x4(%ebp)
087289c5 +0x16f5:  mov    0x10(%ebp),%edi
087289c8 +0x16f8:  lea    0x38(%ebx),%eax
087289cb +0x16fb:  mov    %eax,(%esp)
087289ce +0x16fe:  call   08722580 <_ZNKSt12__basic_fileIcE7is_openEv>  ; std::__basic_file<char>::is_open() const
087289d3 +0x1703:  test   %al,%al
087289d5 +0x1705:  jne    087289ec <+0x171c>
087289d7 +0x1707:  cmp    $0x0,%edi
087289da +0x170a:  je     08728a00 <+0x1730>
087289dc +0x170c:  lea    0x0(%esi,%eiz,1),%esi
087289e0 +0x1710:  jle    087289ec <+0x171c>
087289e2 +0x1712:  test   %esi,%esi
087289e4 +0x1714:  je     087289ec <+0x171c>
087289e6 +0x1716:  mov    %esi,0x5c(%ebx)
087289e9 +0x1719:  mov    %edi,0x60(%ebx)
087289ec +0x171c:  mov    %ebx,%eax
087289ee +0x171e:  mov    -0x8(%ebp),%esi
087289f1 +0x1721:  mov    -0xc(%ebp),%ebx
087289f4 +0x1724:  mov    -0x4(%ebp),%edi
087289f7 +0x1727:  mov    %ebp,%esp
087289f9 +0x1729:  pop    %ebp
087289fa +0x172a:  ret
087289fb +0x172b:  nop
087289fc +0x172c:  lea    0x0(%esi,%eiz,1),%esi
08728a00 +0x1730:  test   %esi,%esi
08728a02 +0x1732:  jne    087289ec <+0x171c>
08728a04 +0x1734:  movl   $0x1,0x60(%ebx)
08728a0b +0x173b:  mov    %ebx,%eax
08728a0d +0x173d:  mov    -0x8(%ebp),%esi
08728a10 +0x1740:  mov    -0xc(%ebp),%ebx
08728a13 +0x1743:  mov    -0x4(%ebp),%edi
08728a16 +0x1746:  mov    %ebp,%esp
08728a18 +0x1748:  pop    %ebp
08728a19 +0x1749:  ret
08728a1a +0x174a:  cmp    $0xffffffff,%edx
08728a1d +0x174d:  je     08728a27 <+0x1757>
08728a1f +0x174f:  mov    %eax,(%esp)
08728a22 +0x1752:  call   08ae3750 <_Unwind_Resume>
08728a27 +0x1757:  mov    %eax,(%esp)
08728a2a +0x175a:  call   08723df0 <__cxa_call_unexpected>
08728a2f +0x175f:  nop
08728a30 +0x1760:  push   %ebp
08728a31 +0x1761:  mov    %esp,%ebp
08728a33 +0x1763:  sub    $0x18,%esp
08728a36 +0x1766:  mov    0x8(%ebp),%eax
08728a39 +0x1769:  add    $0x40,%eax
08728a3c +0x176c:  mov    %eax,(%esp)
08728a3f +0x176f:  call   08722580 <_ZNKSt12__basic_fileIcE7is_openEv>  ; std::__basic_file<char>::is_open() const
08728a44 +0x1774:  leave
08728a45 +0x1775:  ret
08728a46 +0x1776:  cmp    $0xffffffff,%edx
08728a49 +0x1779:  je     08728a55 <+0x1785>
08728a4b +0x177b:  mov    %eax,(%esp)
08728a4e +0x177e:  xchg   %ax,%ax
08728a50 +0x1780:  call   08ae3750 <_Unwind_Resume>
08728a55 +0x1785:  mov    %eax,(%esp)
08728a58 +0x1788:  call   08723df0 <__cxa_call_unexpected>
08728a5d +0x178d:  nop
08728a5e +0x178e:  nop
08728a5f +0x178f:  nop
08728a60 +0x1790:  push   %ebp
08728a61 +0x1791:  mov    %esp,%ebp
08728a63 +0x1793:  sub    $0x18,%esp
08728a66 +0x1796:  mov    0x8(%ebp),%eax
08728a69 +0x1799:  add    $0x40,%eax
08728a6c +0x179c:  mov    %eax,(%esp)
08728a6f +0x179f:  call   08722580 <_ZNKSt12__basic_fileIcE7is_openEv>  ; std::__basic_file<char>::is_open() const
08728a74 +0x17a4:  leave
08728a75 +0x17a5:  ret
08728a76 +0x17a6:  cmp    $0xffffffff,%edx
08728a79 +0x17a9:  je     08728a85 <+0x17b5>
08728a7b +0x17ab:  mov    %eax,(%esp)
08728a7e +0x17ae:  xchg   %ax,%ax
08728a80 +0x17b0:  call   08ae3750 <_Unwind_Resume>
08728a85 +0x17b5:  mov    %eax,(%esp)
08728a88 +0x17b8:  call   08723df0 <__cxa_call_unexpected>
08728a8d +0x17bd:  nop
08728a8e +0x17be:  nop
08728a8f +0x17bf:  nop
08728a90 +0x17c0:  push   %ebp
08728a91 +0x17c1:  mov    %esp,%ebp
08728a93 +0x17c3:  sub    $0x18,%esp
08728a96 +0x17c6:  mov    0x8(%ebp),%eax
08728a99 +0x17c9:  add    $0x3c,%eax
08728a9c +0x17cc:  mov    %eax,(%esp)
08728a9f +0x17cf:  call   08722580 <_ZNKSt12__basic_fileIcE7is_openEv>  ; std::__basic_file<char>::is_open() const
08728aa4 +0x17d4:  leave
08728aa5 +0x17d5:  ret
08728aa6 +0x17d6:  cmp    $0xffffffff,%edx
08728aa9 +0x17d9:  je     08728ab5 <+0x17e5>
08728aab +0x17db:  mov    %eax,(%esp)
08728aae +0x17de:  xchg   %ax,%ax
08728ab0 +0x17e0:  call   08ae3750 <_Unwind_Resume>
08728ab5 +0x17e5:  mov    %eax,(%esp)
08728ab8 +0x17e8:  call   08723df0 <__cxa_call_unexpected>
08728abd +0x17ed:  nop
08728abe +0x17ee:  nop
08728abf +0x17ef:  nop
08728ac0 +0x17f0:  push   %ebp
08728ac1 +0x17f1:  mov    %esp,%ebp
08728ac3 +0x17f3:  sub    $0x18,%esp
08728ac6 +0x17f6:  mov    0x8(%ebp),%eax
08728ac9 +0x17f9:  add    $0x3c,%eax
08728acc +0x17fc:  mov    %eax,(%esp)
08728acf +0x17ff:  call   08722580 <_ZNKSt12__basic_fileIcE7is_openEv>  ; std::__basic_file<char>::is_open() const
08728ad4 +0x1804:  leave
08728ad5 +0x1805:  ret
08728ad6 +0x1806:  cmp    $0xffffffff,%edx
08728ad9 +0x1809:  je     08728ae5 <+0x1815>
08728adb +0x180b:  mov    %eax,(%esp)
08728ade +0x180e:  xchg   %ax,%ax
08728ae0 +0x1810:  call   08ae3750 <_Unwind_Resume>
08728ae5 +0x1815:  mov    %eax,(%esp)
08728ae8 +0x1818:  call   08723df0 <__cxa_call_unexpected>
08728aed +0x181d:  nop
08728aee +0x181e:  nop
08728aef +0x181f:  nop
08728af0 +0x1820:  push   %ebp
08728af1 +0x1821:  mov    %esp,%ebp
08728af3 +0x1823:  sub    $0x18,%esp
08728af6 +0x1826:  mov    0x8(%ebp),%eax
08728af9 +0x1829:  add    $0x44,%eax
08728afc +0x182c:  mov    %eax,(%esp)
08728aff +0x182f:  call   08722580 <_ZNKSt12__basic_fileIcE7is_openEv>  ; std::__basic_file<char>::is_open() const
08728b04 +0x1834:  leave
08728b05 +0x1835:  ret
08728b06 +0x1836:  cmp    $0xffffffff,%edx
08728b09 +0x1839:  je     08728b15 <+0x1845>
08728b0b +0x183b:  mov    %eax,(%esp)
08728b0e +0x183e:  xchg   %ax,%ax
08728b10 +0x1840:  call   08ae3750 <_Unwind_Resume>
08728b15 +0x1845:  mov    %eax,(%esp)
08728b18 +0x1848:  call   08723df0 <__cxa_call_unexpected>
08728b1d +0x184d:  nop
08728b1e +0x184e:  nop
08728b1f +0x184f:  nop
08728b20 +0x1850:  push   %ebp
08728b21 +0x1851:  mov    %esp,%ebp
08728b23 +0x1853:  sub    $0x18,%esp
08728b26 +0x1856:  mov    0x8(%ebp),%eax
08728b29 +0x1859:  add    $0x44,%eax
08728b2c +0x185c:  mov    %eax,(%esp)
08728b2f +0x185f:  call   08722580 <_ZNKSt12__basic_fileIcE7is_openEv>  ; std::__basic_file<char>::is_open() const
08728b34 +0x1864:  leave
08728b35 +0x1865:  ret
08728b36 +0x1866:  cmp    $0xffffffff,%edx
08728b39 +0x1869:  je     08728b45 <+0x1875>
08728b3b +0x186b:  mov    %eax,(%esp)
08728b3e +0x186e:  xchg   %ax,%ax
08728b40 +0x1870:  call   08ae3750 <_Unwind_Resume>
08728b45 +0x1875:  mov    %eax,(%esp)
08728b48 +0x1878:  call   08723df0 <__cxa_call_unexpected>
08728b4d +0x187d:  nop
08728b4e +0x187e:  nop
08728b4f +0x187f:  nop
08728b50 +0x1880:  push   %ebp
08728b51 +0x1881:  mov    %esp,%ebp
08728b53 +0x1883:  sub    $0x18,%esp
08728b56 +0x1886:  mov    0x8(%ebp),%eax
08728b59 +0x1889:  add    $0x3c,%eax
08728b5c +0x188c:  mov    %eax,(%esp)
08728b5f +0x188f:  call   08722580 <_ZNKSt12__basic_fileIcE7is_openEv>  ; std::__basic_file<char>::is_open() const
08728b64 +0x1894:  leave
08728b65 +0x1895:  ret
08728b66 +0x1896:  cmp    $0xffffffff,%edx
08728b69 +0x1899:  je     08728b75 <+0x18a5>
08728b6b +0x189b:  mov    %eax,(%esp)
08728b6e +0x189e:  xchg   %ax,%ax
08728b70 +0x18a0:  call   08ae3750 <_Unwind_Resume>
08728b75 +0x18a5:  mov    %eax,(%esp)
08728b78 +0x18a8:  call   08723df0 <__cxa_call_unexpected>
08728b7d +0x18ad:  nop
08728b7e +0x18ae:  nop
08728b7f +0x18af:  nop
08728b80 +0x18b0:  push   %ebp
08728b81 +0x18b1:  mov    %esp,%ebp
08728b83 +0x18b3:  sub    $0x18,%esp
08728b86 +0x18b6:  mov    0x8(%ebp),%eax
08728b89 +0x18b9:  add    $0x3c,%eax
08728b8c +0x18bc:  mov    %eax,(%esp)
08728b8f +0x18bf:  call   08722580 <_ZNKSt12__basic_fileIcE7is_openEv>  ; std::__basic_file<char>::is_open() const
08728b94 +0x18c4:  leave
08728b95 +0x18c5:  ret
08728b96 +0x18c6:  cmp    $0xffffffff,%edx
08728b99 +0x18c9:  je     08728ba5 <+0x18d5>
08728b9b +0x18cb:  mov    %eax,(%esp)
08728b9e +0x18ce:  xchg   %ax,%ax
08728ba0 +0x18d0:  call   08ae3750 <_Unwind_Resume>
08728ba5 +0x18d5:  mov    %eax,(%esp)
08728ba8 +0x18d8:  call   08723df0 <__cxa_call_unexpected>
08728bad +0x18dd:  nop
08728bae +0x18de:  nop
08728baf +0x18df:  nop
08728bb0 +0x18e0:  push   %ebp
08728bb1 +0x18e1:  mov    %esp,%ebp
08728bb3 +0x18e3:  sub    $0x18,%esp
08728bb6 +0x18e6:  mov    0x8(%ebp),%eax
08728bb9 +0x18e9:  add    $0x40,%eax
08728bbc +0x18ec:  mov    %eax,(%esp)
08728bbf +0x18ef:  call   08722580 <_ZNKSt12__basic_fileIcE7is_openEv>  ; std::__basic_file<char>::is_open() const
08728bc4 +0x18f4:  leave
08728bc5 +0x18f5:  ret
08728bc6 +0x18f6:  cmp    $0xffffffff,%edx
08728bc9 +0x18f9:  je     08728bd5 <+0x1905>
08728bcb +0x18fb:  mov    %eax,(%esp)
08728bce +0x18fe:  xchg   %ax,%ax
08728bd0 +0x1900:  call   08ae3750 <_Unwind_Resume>
08728bd5 +0x1905:  mov    %eax,(%esp)
08728bd8 +0x1908:  call   08723df0 <__cxa_call_unexpected>
08728bdd +0x190d:  nop
08728bde +0x190e:  nop
08728bdf +0x190f:  nop
08728be0 +0x1910:  push   %ebp
08728be1 +0x1911:  mov    %esp,%ebp
08728be3 +0x1913:  sub    $0x18,%esp
08728be6 +0x1916:  mov    0x8(%ebp),%eax
08728be9 +0x1919:  add    $0x40,%eax
08728bec +0x191c:  mov    %eax,(%esp)
08728bef +0x191f:  call   08722580 <_ZNKSt12__basic_fileIcE7is_openEv>  ; std::__basic_file<char>::is_open() const
08728bf4 +0x1924:  leave
08728bf5 +0x1925:  ret
08728bf6 +0x1926:  cmp    $0xffffffff,%edx
08728bf9 +0x1929:  je     08728c05 <+0x1935>
08728bfb +0x192b:  mov    %eax,(%esp)
08728bfe +0x192e:  xchg   %ax,%ax
08728c00 +0x1930:  call   08ae3750 <_Unwind_Resume>
08728c05 +0x1935:  mov    %eax,(%esp)
08728c08 +0x1938:  call   08723df0 <__cxa_call_unexpected>
08728c0d +0x193d:  nop
08728c0e +0x193e:  nop
08728c0f +0x193f:  nop
08728c10 +0x1940:  push   %ebp
08728c11 +0x1941:  mov    %esp,%ebp
08728c13 +0x1943:  sub    $0x28,%esp
08728c16 +0x1946:  mov    %ebx,-0xc(%ebp)
08728c19 +0x1949:  mov    0x8(%ebp),%ebx
08728c1c +0x194c:  mov    %esi,-0x8(%ebp)
08728c1f +0x194f:  mov    0xc(%ebp),%esi
08728c22 +0x1952:  mov    %edi,-0x4(%ebp)
08728c25 +0x1955:  mov    0x10(%ebp),%edi
08728c28 +0x1958:  lea    0x38(%ebx),%eax
08728c2b +0x195b:  mov    %eax,(%esp)
08728c2e +0x195e:  call   08722580 <_ZNKSt12__basic_fileIcE7is_openEv>  ; std::__basic_file<char>::is_open() const
08728c33 +0x1963:  test   %al,%al
08728c35 +0x1965:  jne    08728c4c <+0x197c>
08728c37 +0x1967:  cmp    $0x0,%edi
08728c3a +0x196a:  je     08728c60 <+0x1990>
08728c3c +0x196c:  lea    0x0(%esi,%eiz,1),%esi
08728c40 +0x1970:  jle    08728c4c <+0x197c>
08728c42 +0x1972:  test   %esi,%esi
08728c44 +0x1974:  je     08728c4c <+0x197c>
08728c46 +0x1976:  mov    %esi,0x5c(%ebx)
08728c49 +0x1979:  mov    %edi,0x60(%ebx)
08728c4c +0x197c:  mov    %ebx,%eax
08728c4e +0x197e:  mov    -0x8(%ebp),%esi
08728c51 +0x1981:  mov    -0xc(%ebp),%ebx
08728c54 +0x1984:  mov    -0x4(%ebp),%edi
08728c57 +0x1987:  mov    %ebp,%esp
08728c59 +0x1989:  pop    %ebp
08728c5a +0x198a:  ret
08728c5b +0x198b:  nop
08728c5c +0x198c:  lea    0x0(%esi,%eiz,1),%esi
08728c60 +0x1990:  test   %esi,%esi
08728c62 +0x1992:  jne    08728c4c <+0x197c>
08728c64 +0x1994:  movl   $0x1,0x60(%ebx)
08728c6b +0x199b:  mov    %ebx,%eax
08728c6d +0x199d:  mov    -0x8(%ebp),%esi
08728c70 +0x19a0:  mov    -0xc(%ebp),%ebx
08728c73 +0x19a3:  mov    -0x4(%ebp),%edi
08728c76 +0x19a6:  mov    %ebp,%esp
08728c78 +0x19a8:  pop    %ebp
08728c79 +0x19a9:  ret
08728c7a +0x19aa:  cmp    $0xffffffff,%edx
08728c7d +0x19ad:  je     08728c87 <+0x19b7>
08728c7f +0x19af:  mov    %eax,(%esp)
08728c82 +0x19b2:  call   08ae3750 <_Unwind_Resume>
08728c87 +0x19b7:  mov    %eax,(%esp)
08728c8a +0x19ba:  call   08723df0 <__cxa_call_unexpected>
08728c8f +0x19bf:  nop
08728c90 +0x19c0:  push   %ebp
08728c91 +0x19c1:  mov    %esp,%ebp
08728c93 +0x19c3:  sub    $0x28,%esp
08728c96 +0x19c6:  mov    %ebx,-0xc(%ebp)
08728c99 +0x19c9:  mov    0x8(%ebp),%ebx
08728c9c +0x19cc:  mov    %esi,-0x8(%ebp)
08728c9f +0x19cf:  mov    %edi,-0x4(%ebp)
08728ca2 +0x19d2:  lea    0x38(%ebx),%esi
08728ca5 +0x19d5:  mov    %esi,(%esp)
08728ca8 +0x19d8:  call   08722580 <_ZNKSt12__basic_fileIcE7is_openEv>  ; std::__basic_file<char>::is_open() const
08728cad +0x19dd:  test   %al,%al
08728caf +0x19df:  jne    08728cc8 <+0x19f8>
08728cb1 +0x19e1:  xor    %ebx,%ebx
08728cb3 +0x19e3:  mov    -0x8(%ebp),%esi
08728cb6 +0x19e6:  mov    %ebx,%eax
08728cb8 +0x19e8:  mov    -0x4(%ebp),%edi
08728cbb +0x19eb:  mov    -0xc(%ebp),%ebx
08728cbe +0x19ee:  mov    %ebp,%esp
08728cc0 +0x19f0:  pop    %ebp
08728cc1 +0x19f1:  ret
08728cc2 +0x19f2:  lea    0x0(%esi),%esi
08728cc8 +0x19f8:  mov    %ebx,(%esp)
08728ccb +0x19fb:  call   08728590 <+0x12c0>
08728cd0 +0x1a00:  test   %al,%al
08728cd2 +0x1a02:  sete   %al
08728cd5 +0x1a05:  mov    %eax,%edi
08728cd7 +0x1a07:  movl   $0x0,0x40(%ebx)
08728cde +0x1a0e:  movb   $0x0,0x70(%ebx)
08728ce2 +0x1a12:  mov    %ebx,(%esp)
08728ce5 +0x1a15:  call   08727a20 <+0x750>
08728cea +0x1a1a:  mov    0x5c(%ebx),%eax
08728ced +0x1a1d:  mov    0x48(%ebx),%edx
08728cf0 +0x1a20:  movb   $0x0,0x65(%ebx)
08728cf4 +0x1a24:  movb   $0x0,0x66(%ebx)
08728cf8 +0x1a28:  mov    %eax,0x4(%ebx)
08728cfb +0x1a2b:  mov    %eax,0x8(%ebx)
08728cfe +0x1a2e:  mov    %eax,0xc(%ebx)
08728d01 +0x1a31:  mov    0x44(%ebx),%eax
08728d04 +0x1a34:  movl   $0x0,0x14(%ebx)
08728d0b +0x1a3b:  movl   $0x0,0x10(%ebx)
08728d12 +0x1a42:  movl   $0x0,0x18(%ebx)
08728d19 +0x1a49:  mov    %eax,0x4c(%ebx)
08728d1c +0x1a4c:  mov    %edx,0x50(%ebx)
08728d1f +0x1a4f:  mov    %eax,0x54(%ebx)
08728d22 +0x1a52:  mov    %edx,0x58(%ebx)
08728d25 +0x1a55:  mov    %esi,(%esp)
08728d28 +0x1a58:  call   08722690 <_ZNSt12__basic_fileIcE5closeEv>  ; std::__basic_file<char>::close()
08728d2d +0x1a5d:  test   %eax,%eax
08728d2f +0x1a5f:  je     08728cb1 <+0x19e1>
08728d31 +0x1a61:  mov    %edi,%eax
08728d33 +0x1a63:  test   %al,%al
08728d35 +0x1a65:  jne    08728cb1 <+0x19e1>
08728d3b +0x1a6b:  mov    %ebx,%eax
08728d3d +0x1a6d:  mov    -0x8(%ebp),%esi
08728d40 +0x1a70:  mov    -0xc(%ebp),%ebx
08728d43 +0x1a73:  mov    -0x4(%ebp),%edi
08728d46 +0x1a76:  mov    %ebp,%esp
08728d48 +0x1a78:  pop    %ebp
08728d49 +0x1a79:  ret
08728d4a +0x1a7a:  cmp    $0x2,%edx
08728d4d +0x1a7d:  je     08728dc7 <+0x1af7>
08728d4f +0x1a7f:  mov    %eax,(%esp)
08728d52 +0x1a82:  call   08725ce0 <__cxa_begin_catch>
08728d57 +0x1a87:  call   08725c30 <__cxa_end_catch>
08728d5c +0x1a8c:  mov    $0x1,%edi
08728d61 +0x1a91:  jmp    08728cd7 <+0x1a07>
08728d66 +0x1a96:  cmp    $0xffffffff,%edx
08728d69 +0x1a99:  mov    %eax,%edi
08728d6b +0x1a9b:  je     08728ddc <+0x1b0c>
08728d6d +0x1a9d:  mov    %edi,(%esp)
08728d70 +0x1aa0:  call   08ae3750 <_Unwind_Resume>
08728d75 +0x1aa5:  mov    %eax,%edi
08728d77 +0x1aa7:  movl   $0x0,0x40(%ebx)
08728d7e +0x1aae:  movb   $0x0,0x70(%ebx)
08728d82 +0x1ab2:  mov    %ebx,(%esp)
08728d85 +0x1ab5:  call   08727a20 <+0x750>
08728d8a +0x1aba:  mov    0x5c(%ebx),%eax
08728d8d +0x1abd:  mov    0x48(%ebx),%edx
08728d90 +0x1ac0:  movb   $0x0,0x65(%ebx)
08728d94 +0x1ac4:  movb   $0x0,0x66(%ebx)
08728d98 +0x1ac8:  mov    %eax,0x4(%ebx)
08728d9b +0x1acb:  mov    %eax,0x8(%ebx)
08728d9e +0x1ace:  mov    %eax,0xc(%ebx)
08728da1 +0x1ad1:  mov    0x44(%ebx),%eax
08728da4 +0x1ad4:  movl   $0x0,0x14(%ebx)
08728dab +0x1adb:  movl   $0x0,0x10(%ebx)
08728db2 +0x1ae2:  movl   $0x0,0x18(%ebx)
08728db9 +0x1ae9:  mov    %eax,0x4c(%ebx)
08728dbc +0x1aec:  mov    %edx,0x50(%ebx)
08728dbf +0x1aef:  mov    %eax,0x54(%ebx)
08728dc2 +0x1af2:  mov    %edx,0x58(%ebx)
08728dc5 +0x1af5:  jmp    08728d6d <+0x1a9d>
08728dc7 +0x1af7:  mov    %eax,(%esp)
08728dca +0x1afa:  call   08725ce0 <__cxa_begin_catch>
08728dcf +0x1aff:  mov    %esi,(%esp)
08728dd2 +0x1b02:  call   08722690 <_ZNSt12__basic_fileIcE5closeEv>  ; std::__basic_file<char>::close()
08728dd7 +0x1b07:  call   08724be0 <__cxa_rethrow>
08728ddc +0x1b0c:  mov    %eax,(%esp)
08728ddf +0x1b0f:  call   08723df0 <__cxa_call_unexpected>
08728de4 +0x1b14:  mov    %eax,%edi
08728de6 +0x1b16:  call   08725c30 <__cxa_end_catch>
08728deb +0x1b1b:  jmp    08728d77 <+0x1aa7>
08728ded +0x1b1d:  nop
08728dee +0x1b1e:  nop
08728def +0x1b1f:  nop
08728df0 +0x1b20:  push   %ebp
08728df1 +0x1b21:  mov    %esp,%ebp
08728df3 +0x1b23:  sub    $0x58,%esp
08728df6 +0x1b26:  mov    %ebx,-0xc(%ebp)
08728df9 +0x1b29:  mov    0x8(%ebp),%ebx
08728dfc +0x1b2c:  mov    %esi,-0x8(%ebp)
08728dff +0x1b2f:  mov    %edi,-0x4(%ebp)
08728e02 +0x1b32:  mov    0xc(%ebp),%edi
08728e05 +0x1b35:  mov    %gs:0x14,%eax
08728e0b +0x1b3b:  mov    %eax,-0x1c(%ebp)
08728e0e +0x1b3e:  xor    %eax,%eax
08728e10 +0x1b40:  lea    0x38(%ebx),%esi
08728e13 +0x1b43:  mov    %esi,(%esp)
08728e16 +0x1b46:  call   08722580 <_ZNKSt12__basic_fileIcE7is_openEv>  ; std::__basic_file<char>::is_open() const
08728e1b +0x1b4b:  test   %al,%al
08728e1d +0x1b4d:  je     08728e40 <+0x1b70>
08728e1f +0x1b4f:  xor    %eax,%eax
08728e21 +0x1b51:  mov    -0x1c(%ebp),%edx
08728e24 +0x1b54:  xor    %gs:0x14,%edx
08728e2b +0x1b5b:  jne    08728ef7 <+0x1c27>
08728e31 +0x1b61:  mov    -0xc(%ebp),%ebx
08728e34 +0x1b64:  mov    -0x8(%ebp),%esi
08728e37 +0x1b67:  mov    -0x4(%ebp),%edi
08728e3a +0x1b6a:  mov    %ebp,%esp
08728e3c +0x1b6c:  pop    %ebp
08728e3d +0x1b6d:  ret
08728e3e +0x1b6e:  xchg   %ax,%ax
08728e40 +0x1b70:  mov    0x10(%ebp),%edx
08728e43 +0x1b73:  movl   $0x1b4,0xc(%esp)
08728e4b +0x1b7b:  mov    %edi,0x4(%esp)
08728e4f +0x1b7f:  mov    %esi,(%esp)
08728e52 +0x1b82:  mov    %edx,0x8(%esp)
08728e56 +0x1b86:  call   08722a20 <_ZNSt12__basic_fileIcE4openEPKcSt13_Ios_Openmodei>  ; std::__basic_file<char>::open(char const*, std::_Ios_Openmode, int)
08728e5b +0x1b8b:  mov    %ebx,(%esp)
08728e5e +0x1b8e:  call   08727ac0 <+0x7f0>
08728e63 +0x1b93:  test   %al,%al
08728e65 +0x1b95:  je     08728e1f <+0x1b4f>
08728e67 +0x1b97:  mov    %ebx,(%esp)
08728e6a +0x1b9a:  call   08727970 <+0x6a0>
08728e6f +0x1b9f:  mov    0x10(%ebp),%ecx
08728e72 +0x1ba2:  movb   $0x0,0x65(%ebx)
08728e76 +0x1ba6:  movb   $0x0,0x66(%ebx)
08728e7a +0x1baa:  mov    %ecx,0x40(%ebx)
08728e7d +0x1bad:  movl   $0xffffffff,0x4(%esp)
08728e85 +0x1bb5:  mov    %ebx,(%esp)
08728e88 +0x1bb8:  call   08727530 <+0x260>
08728e8d +0x1bbd:  mov    0x44(%ebx),%eax
08728e90 +0x1bc0:  mov    0x48(%ebx),%edx
08728e93 +0x1bc3:  testb  $0x2,0x10(%ebp)
08728e97 +0x1bc7:  mov    %eax,0x4c(%ebx)
08728e9a +0x1bca:  mov    %edx,0x50(%ebx)
08728e9d +0x1bcd:  mov    %eax,0x54(%ebx)
08728ea0 +0x1bd0:  mov    %edx,0x58(%ebx)
08728ea3 +0x1bd3:  jne    08728eac <+0x1bdc>
08728ea5 +0x1bd5:  mov    %ebx,%eax
08728ea7 +0x1bd7:  jmp    08728e21 <+0x1b51>
08728eac +0x1bdc:  mov    (%ebx),%eax
08728eae +0x1bde:  lea    -0x2c(%ebp),%edx
08728eb1 +0x1be1:  mov    0x10(%ebp),%ecx
08728eb4 +0x1be4:  movl   $0x2,0x10(%esp)
08728ebc +0x1bec:  movl   $0x0,0x8(%esp)
08728ec4 +0x1bf4:  movl   $0x0,0xc(%esp)
08728ecc +0x1bfc:  mov    %ecx,0x14(%esp)
08728ed0 +0x1c00:  mov    %ebx,0x4(%esp)
08728ed4 +0x1c04:  mov    %edx,(%esp)
08728ed7 +0x1c07:  call   *0x10(%eax)
08728eda +0x1c0a:  mov    -0x2c(%ebp),%eax
08728edd +0x1c0d:  and    -0x28(%ebp),%eax
08728ee0 +0x1c10:  sub    $0x4,%esp
08728ee3 +0x1c13:  cmp    $0xffffffff,%eax
08728ee6 +0x1c16:  jne    08728ea5 <+0x1bd5>
08728ee8 +0x1c18:  mov    %ebx,(%esp)
08728eeb +0x1c1b:  call   08728c90 <+0x19c0>
08728ef0 +0x1c20:  xor    %eax,%eax
08728ef2 +0x1c22:  jmp    08728e21 <+0x1b51>
08728ef7 +0x1c27:  call   0807d980 <_init+0x278>
08728efc +0x1c2c:  cmp    $0xffffffff,%edx
08728eff +0x1c2f:  nop
08728f00 +0x1c30:  je     08728f0a <+0x1c3a>
08728f02 +0x1c32:  mov    %eax,(%esp)
08728f05 +0x1c35:  call   08ae3750 <_Unwind_Resume>
08728f0a +0x1c3a:  mov    %eax,(%esp)
08728f0d +0x1c3d:  call   08723df0 <__cxa_call_unexpected>
08728f12 +0x1c42:  nop
08728f13 +0x1c43:  nop
08728f14 +0x1c44:  nop
08728f15 +0x1c45:  nop
08728f16 +0x1c46:  nop
08728f17 +0x1c47:  nop
08728f18 +0x1c48:  nop
08728f19 +0x1c49:  nop
08728f1a +0x1c4a:  nop
08728f1b +0x1c4b:  nop
08728f1c +0x1c4c:  nop
08728f1d +0x1c4d:  nop
08728f1e +0x1c4e:  nop
08728f1f +0x1c4f:  nop
08728f20 +0x1c50:  push   %ebp
08728f21 +0x1c51:  mov    %esp,%ebp
08728f23 +0x1c53:  sub    $0x8,%esp
08728f26 +0x1c56:  mov    0xc(%ebp),%eax
08728f29 +0x1c59:  mov    (%eax),%eax
08728f2b +0x1c5b:  mov    %eax,0xc(%ebp)
08728f2e +0x1c5e:  leave
08728f2f +0x1c5f:  jmp    08728df0 <+0x1b20>
08728f34 +0x1c64:  nop
08728f35 +0x1c65:  nop
08728f36 +0x1c66:  nop
08728f37 +0x1c67:  nop
08728f38 +0x1c68:  nop
08728f39 +0x1c69:  nop
08728f3a +0x1c6a:  nop
08728f3b +0x1c6b:  nop
08728f3c +0x1c6c:  nop
08728f3d +0x1c6d:  nop
08728f3e +0x1c6e:  nop
08728f3f +0x1c6f:  nop
08728f40 +0x1c70:  push   %ebp
08728f41 +0x1c71:  mov    %esp,%ebp
08728f43 +0x1c73:  push   %ebx
08728f44 +0x1c74:  sub    $0x14,%esp
08728f47 +0x1c77:  mov    0x10(%ebp),%eax
08728f4a +0x1c7a:  mov    0x8(%ebp),%ebx
08728f4d +0x1c7d:  mov    %eax,0x8(%esp)
08728f51 +0x1c81:  mov    0xc(%ebp),%eax
08728f54 +0x1c84:  mov    (%eax),%eax
08728f56 +0x1c86:  mov    %eax,0x4(%esp)
08728f5a +0x1c8a:  lea    0xc(%ebx),%eax
08728f5d +0x1c8d:  mov    %eax,(%esp)
08728f60 +0x1c90:  call   08728df0 <+0x1b20>
08728f65 +0x1c95:  test   %eax,%eax
08728f67 +0x1c97:  je     08728f88 <+0x1cb8>
08728f69 +0x1c99:  movl   $0x0,0xc(%ebp)
08728f70 +0x1ca0:  mov    (%ebx),%eax
08728f72 +0x1ca2:  add    -0xc(%eax),%ebx
08728f75 +0x1ca5:  mov    %ebx,0x8(%ebp)
08728f78 +0x1ca8:  add    $0x14,%esp
08728f7b +0x1cab:  pop    %ebx
08728f7c +0x1cac:  pop    %ebp
08728f7d +0x1cad:  jmp    086e0da0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xd00>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xd00
08728f82 +0x1cb2:  lea    0x0(%esi),%esi
08728f88 +0x1cb8:  mov    (%ebx),%eax
08728f8a +0x1cba:  add    -0xc(%eax),%ebx
08728f8d +0x1cbd:  mov    0x14(%ebx),%eax
08728f90 +0x1cc0:  mov    %ebx,0x8(%ebp)
08728f93 +0x1cc3:  or     $0x4,%eax
08728f96 +0x1cc6:  mov    %eax,0xc(%ebp)
08728f99 +0x1cc9:  add    $0x14,%esp
08728f9c +0x1ccc:  pop    %ebx
08728f9d +0x1ccd:  pop    %ebp
08728f9e +0x1cce:  jmp    086e0da0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xd00>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xd00
08728fa3 +0x1cd3:  nop
08728fa4 +0x1cd4:  nop
08728fa5 +0x1cd5:  nop
08728fa6 +0x1cd6:  nop
08728fa7 +0x1cd7:  nop
08728fa8 +0x1cd8:  nop
08728fa9 +0x1cd9:  nop
08728faa +0x1cda:  nop
08728fab +0x1cdb:  nop
08728fac +0x1cdc:  nop
08728fad +0x1cdd:  nop
08728fae +0x1cde:  nop
08728faf +0x1cdf:  nop
08728fb0 +0x1ce0:  push   %ebp
08728fb1 +0x1ce1:  mov    %esp,%ebp
08728fb3 +0x1ce3:  push   %ebx
08728fb4 +0x1ce4:  sub    $0x14,%esp
08728fb7 +0x1ce7:  mov    0x10(%ebp),%eax
08728fba +0x1cea:  mov    0x8(%ebp),%ebx
08728fbd +0x1ced:  mov    %eax,0x8(%esp)
08728fc1 +0x1cf1:  mov    0xc(%ebp),%eax
08728fc4 +0x1cf4:  mov    %eax,0x4(%esp)
08728fc8 +0x1cf8:  lea    0xc(%ebx),%eax
08728fcb +0x1cfb:  mov    %eax,(%esp)
08728fce +0x1cfe:  call   08728df0 <+0x1b20>
08728fd3 +0x1d03:  test   %eax,%eax
08728fd5 +0x1d05:  je     08728ff0 <+0x1d20>
08728fd7 +0x1d07:  movl   $0x0,0xc(%ebp)
08728fde +0x1d0e:  mov    (%ebx),%eax
08728fe0 +0x1d10:  add    -0xc(%eax),%ebx
08728fe3 +0x1d13:  mov    %ebx,0x8(%ebp)
08728fe6 +0x1d16:  add    $0x14,%esp
08728fe9 +0x1d19:  pop    %ebx
08728fea +0x1d1a:  pop    %ebp
08728feb +0x1d1b:  jmp    086e0da0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xd00>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xd00
08728ff0 +0x1d20:  mov    (%ebx),%eax
08728ff2 +0x1d22:  add    -0xc(%eax),%ebx
08728ff5 +0x1d25:  mov    0x14(%ebx),%eax
08728ff8 +0x1d28:  mov    %ebx,0x8(%ebp)
08728ffb +0x1d2b:  or     $0x4,%eax
08728ffe +0x1d2e:  mov    %eax,0xc(%ebp)
08729001 +0x1d31:  add    $0x14,%esp
08729004 +0x1d34:  pop    %ebx
08729005 +0x1d35:  pop    %ebp
08729006 +0x1d36:  jmp    086e0da0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xd00>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xd00
0872900b +0x1d3b:  nop
0872900c +0x1d3c:  nop
0872900d +0x1d3d:  nop
0872900e +0x1d3e:  nop
0872900f +0x1d3f:  nop
08729010 +0x1d40:  push   %ebp
08729011 +0x1d41:  mov    %esp,%ebp
08729013 +0x1d43:  push   %ebx
08729014 +0x1d44:  sub    $0x14,%esp
08729017 +0x1d47:  mov    0x10(%ebp),%eax
0872901a +0x1d4a:  mov    0x8(%ebp),%ebx
0872901d +0x1d4d:  or     $0x10,%eax
08729020 +0x1d50:  mov    %eax,0x8(%esp)
08729024 +0x1d54:  mov    0xc(%ebp),%eax
08729027 +0x1d57:  mov    (%eax),%eax
08729029 +0x1d59:  mov    %eax,0x4(%esp)
0872902d +0x1d5d:  lea    0x4(%ebx),%eax
08729030 +0x1d60:  mov    %eax,(%esp)
08729033 +0x1d63:  call   08728df0 <+0x1b20>
08729038 +0x1d68:  test   %eax,%eax
0872903a +0x1d6a:  je     08729058 <+0x1d88>
0872903c +0x1d6c:  movl   $0x0,0xc(%ebp)
08729043 +0x1d73:  mov    (%ebx),%eax
08729045 +0x1d75:  add    -0xc(%eax),%ebx
08729048 +0x1d78:  mov    %ebx,0x8(%ebp)
0872904b +0x1d7b:  add    $0x14,%esp
0872904e +0x1d7e:  pop    %ebx
0872904f +0x1d7f:  pop    %ebp
08729050 +0x1d80:  jmp    086e0da0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xd00>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xd00
08729055 +0x1d85:  lea    0x0(%esi),%esi
08729058 +0x1d88:  mov    (%ebx),%eax
0872905a +0x1d8a:  add    -0xc(%eax),%ebx
0872905d +0x1d8d:  mov    0x14(%ebx),%eax
08729060 +0x1d90:  mov    %ebx,0x8(%ebp)
08729063 +0x1d93:  or     $0x4,%eax
08729066 +0x1d96:  mov    %eax,0xc(%ebp)
08729069 +0x1d99:  add    $0x14,%esp
0872906c +0x1d9c:  pop    %ebx
0872906d +0x1d9d:  pop    %ebp
0872906e +0x1d9e:  jmp    086e0da0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xd00>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xd00
08729073 +0x1da3:  nop
08729074 +0x1da4:  nop
08729075 +0x1da5:  nop
08729076 +0x1da6:  nop
08729077 +0x1da7:  nop
08729078 +0x1da8:  nop
08729079 +0x1da9:  nop
0872907a +0x1daa:  nop
0872907b +0x1dab:  nop
0872907c +0x1dac:  nop
0872907d +0x1dad:  nop
0872907e +0x1dae:  nop
0872907f +0x1daf:  nop
08729080 +0x1db0:  push   %ebp
08729081 +0x1db1:  mov    %esp,%ebp
08729083 +0x1db3:  push   %ebx
08729084 +0x1db4:  sub    $0x14,%esp
08729087 +0x1db7:  mov    0x10(%ebp),%eax
0872908a +0x1dba:  mov    0x8(%ebp),%ebx
0872908d +0x1dbd:  or     $0x10,%eax
08729090 +0x1dc0:  mov    %eax,0x8(%esp)
08729094 +0x1dc4:  mov    0xc(%ebp),%eax
08729097 +0x1dc7:  mov    %eax,0x4(%esp)
0872909b +0x1dcb:  lea    0x4(%ebx),%eax
0872909e +0x1dce:  mov    %eax,(%esp)
087290a1 +0x1dd1:  call   08728df0 <+0x1b20>
087290a6 +0x1dd6:  test   %eax,%eax
087290a8 +0x1dd8:  je     087290c8 <+0x1df8>
087290aa +0x1dda:  movl   $0x0,0xc(%ebp)
087290b1 +0x1de1:  mov    (%ebx),%eax
087290b3 +0x1de3:  add    -0xc(%eax),%ebx
087290b6 +0x1de6:  mov    %ebx,0x8(%ebp)
087290b9 +0x1de9:  add    $0x14,%esp
087290bc +0x1dec:  pop    %ebx
087290bd +0x1ded:  pop    %ebp
087290be +0x1dee:  jmp    086e0da0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xd00>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xd00
087290c3 +0x1df3:  nop
087290c4 +0x1df4:  lea    0x0(%esi,%eiz,1),%esi
087290c8 +0x1df8:  mov    (%ebx),%eax
087290ca +0x1dfa:  add    -0xc(%eax),%ebx
087290cd +0x1dfd:  mov    0x14(%ebx),%eax
087290d0 +0x1e00:  mov    %ebx,0x8(%ebp)
087290d3 +0x1e03:  or     $0x4,%eax
087290d6 +0x1e06:  mov    %eax,0xc(%ebp)
087290d9 +0x1e09:  add    $0x14,%esp
087290dc +0x1e0c:  pop    %ebx
087290dd +0x1e0d:  pop    %ebp
087290de +0x1e0e:  jmp    086e0da0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xd00>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xd00
087290e3 +0x1e13:  nop
087290e4 +0x1e14:  nop
087290e5 +0x1e15:  nop
087290e6 +0x1e16:  nop
087290e7 +0x1e17:  nop
087290e8 +0x1e18:  nop
087290e9 +0x1e19:  nop
087290ea +0x1e1a:  nop
087290eb +0x1e1b:  nop
087290ec +0x1e1c:  nop
087290ed +0x1e1d:  nop
087290ee +0x1e1e:  nop
087290ef +0x1e1f:  nop
087290f0 +0x1e20:  push   %ebp
087290f1 +0x1e21:  mov    %esp,%ebp
087290f3 +0x1e23:  push   %ebx
087290f4 +0x1e24:  sub    $0x14,%esp
087290f7 +0x1e27:  mov    0x10(%ebp),%eax
087290fa +0x1e2a:  mov    0x8(%ebp),%ebx
087290fd +0x1e2d:  or     $0x8,%eax
08729100 +0x1e30:  mov    %eax,0x8(%esp)
08729104 +0x1e34:  mov    0xc(%ebp),%eax
08729107 +0x1e37:  mov    (%eax),%eax
08729109 +0x1e39:  mov    %eax,0x4(%esp)
0872910d +0x1e3d:  lea    0x8(%ebx),%eax
08729110 +0x1e40:  mov    %eax,(%esp)
08729113 +0x1e43:  call   08728df0 <+0x1b20>
08729118 +0x1e48:  test   %eax,%eax
0872911a +0x1e4a:  je     08729138 <+0x1e68>
0872911c +0x1e4c:  movl   $0x0,0xc(%ebp)
08729123 +0x1e53:  mov    (%ebx),%eax
08729125 +0x1e55:  add    -0xc(%eax),%ebx
08729128 +0x1e58:  mov    %ebx,0x8(%ebp)
0872912b +0x1e5b:  add    $0x14,%esp
0872912e +0x1e5e:  pop    %ebx
0872912f +0x1e5f:  pop    %ebp
08729130 +0x1e60:  jmp    086e0da0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xd00>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xd00
08729135 +0x1e65:  lea    0x0(%esi),%esi
08729138 +0x1e68:  mov    (%ebx),%eax
0872913a +0x1e6a:  add    -0xc(%eax),%ebx
0872913d +0x1e6d:  mov    0x14(%ebx),%eax
08729140 +0x1e70:  mov    %ebx,0x8(%ebp)
08729143 +0x1e73:  or     $0x4,%eax
08729146 +0x1e76:  mov    %eax,0xc(%ebp)
08729149 +0x1e79:  add    $0x14,%esp
0872914c +0x1e7c:  pop    %ebx
0872914d +0x1e7d:  pop    %ebp
0872914e +0x1e7e:  jmp    086e0da0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xd00>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xd00
08729153 +0x1e83:  nop
08729154 +0x1e84:  nop
08729155 +0x1e85:  nop
08729156 +0x1e86:  nop
08729157 +0x1e87:  nop
08729158 +0x1e88:  nop
08729159 +0x1e89:  nop
0872915a +0x1e8a:  nop
0872915b +0x1e8b:  nop
0872915c +0x1e8c:  nop
0872915d +0x1e8d:  nop
0872915e +0x1e8e:  nop
0872915f +0x1e8f:  nop
08729160 +0x1e90:  push   %ebp
08729161 +0x1e91:  mov    %esp,%ebp
08729163 +0x1e93:  push   %ebx
08729164 +0x1e94:  sub    $0x14,%esp
08729167 +0x1e97:  mov    0x10(%ebp),%eax
0872916a +0x1e9a:  mov    0x8(%ebp),%ebx
0872916d +0x1e9d:  or     $0x8,%eax
08729170 +0x1ea0:  mov    %eax,0x8(%esp)
08729174 +0x1ea4:  mov    0xc(%ebp),%eax
08729177 +0x1ea7:  mov    %eax,0x4(%esp)
0872917b +0x1eab:  lea    0x8(%ebx),%eax
0872917e +0x1eae:  mov    %eax,(%esp)
08729181 +0x1eb1:  call   08728df0 <+0x1b20>
08729186 +0x1eb6:  test   %eax,%eax
08729188 +0x1eb8:  je     087291a8 <+0x1ed8>
0872918a +0x1eba:  movl   $0x0,0xc(%ebp)
08729191 +0x1ec1:  mov    (%ebx),%eax
08729193 +0x1ec3:  add    -0xc(%eax),%ebx
08729196 +0x1ec6:  mov    %ebx,0x8(%ebp)
08729199 +0x1ec9:  add    $0x14,%esp
0872919c +0x1ecc:  pop    %ebx
0872919d +0x1ecd:  pop    %ebp
0872919e +0x1ece:  jmp    086e0da0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xd00>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xd00
087291a3 +0x1ed3:  nop
087291a4 +0x1ed4:  lea    0x0(%esi,%eiz,1),%esi
087291a8 +0x1ed8:  mov    (%ebx),%eax
087291aa +0x1eda:  add    -0xc(%eax),%ebx
087291ad +0x1edd:  mov    0x14(%ebx),%eax
087291b0 +0x1ee0:  mov    %ebx,0x8(%ebp)
087291b3 +0x1ee3:  or     $0x4,%eax
087291b6 +0x1ee6:  mov    %eax,0xc(%ebp)
087291b9 +0x1ee9:  add    $0x14,%esp
087291bc +0x1eec:  pop    %ebx
087291bd +0x1eed:  pop    %ebp
087291be +0x1eee:  jmp    086e0da0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xd00>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xd00
087291c3 +0x1ef3:  nop
087291c4 +0x1ef4:  nop
087291c5 +0x1ef5:  nop
087291c6 +0x1ef6:  nop
087291c7 +0x1ef7:  nop
087291c8 +0x1ef8:  nop
087291c9 +0x1ef9:  nop
087291ca +0x1efa:  nop
087291cb +0x1efb:  nop
087291cc +0x1efc:  nop
087291cd +0x1efd:  nop
087291ce +0x1efe:  nop
087291cf +0x1eff:  nop
087291d0 +0x1f00:  push   %ebp
087291d1 +0x1f01:  mov    %esp,%ebp
087291d3 +0x1f03:  sub    $0x18,%esp
087291d6 +0x1f06:  mov    %ebx,-0x8(%ebp)
087291d9 +0x1f09:  mov    0x8(%ebp),%ebx
087291dc +0x1f0c:  mov    %esi,-0x4(%ebp)
087291df +0x1f0f:  movl   $&_ZTVSt13basic_filebufIcSt11char_traitsIcEE+0x8,(%ebx)
087291e5 +0x1f15:  mov    %ebx,(%esp)
087291e8 +0x1f18:  call   08728c90 <+0x19c0>
087291ed +0x1f1d:  lea    0x38(%ebx),%eax
087291f0 +0x1f20:  mov    %eax,(%esp)
087291f3 +0x1f23:  call   08722720 <_ZNSt12__basic_fileIcED1Ev>  ; std::__basic_file<char>::~__basic_file()
087291f8 +0x1f28:  movl   $&_ZTVSt15basic_streambufIcSt11char_traitsIcEE+0x8,(%ebx)
087291fe +0x1f2e:  add    $0x1c,%ebx
08729201 +0x1f31:  mov    -0x4(%ebp),%esi
08729204 +0x1f34:  mov    %ebx,0x8(%ebp)
08729207 +0x1f37:  mov    -0x8(%ebp),%ebx
0872920a +0x1f3a:  mov    %ebp,%esp
0872920c +0x1f3c:  pop    %ebp
0872920d +0x1f3d:  jmp    086dbcd0 <_ZNSt6localeD1Ev>  ; std::locale::~locale()
08729212 +0x1f42:  mov    %eax,%esi
08729214 +0x1f44:  lea    0x38(%ebx),%eax
08729217 +0x1f47:  mov    %eax,(%esp)
0872921a +0x1f4a:  call   08722720 <_ZNSt12__basic_fileIcED1Ev>  ; std::__basic_file<char>::~__basic_file()
0872921f +0x1f4f:  mov    %ebx,(%esp)
08729222 +0x1f52:  call   08705fb0 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x11744>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x11744
08729227 +0x1f57:  mov    %esi,(%esp)
0872922a +0x1f5a:  call   08ae3750 <_Unwind_Resume>
0872922f +0x1f5f:  mov    %eax,%esi
08729231 +0x1f61:  jmp    0872921f <+0x1f4f>
08729233 +0x1f63:  nop
08729234 +0x1f64:  nop
08729235 +0x1f65:  nop
08729236 +0x1f66:  nop
08729237 +0x1f67:  nop
08729238 +0x1f68:  nop
08729239 +0x1f69:  nop
0872923a +0x1f6a:  nop
0872923b +0x1f6b:  nop
0872923c +0x1f6c:  nop
0872923d +0x1f6d:  nop
0872923e +0x1f6e:  nop
0872923f +0x1f6f:  nop
08729240 +0x1f70:  mov    0x4(%esp),%eax
08729244 +0x1f74:  mov    (%eax),%ecx
08729246 +0x1f76:  add    -0xc(%ecx),%eax
08729249 +0x1f79:  mov    %eax,0x4(%esp)
0872924d +0x1f7d:  jmp    08729250 <+0x1f80>
0872924f +0x1f7f:  nop
08729250 +0x1f80:  push   %ebp
08729251 +0x1f81:  mov    %esp,%ebp
08729253 +0x1f83:  sub    $0x28,%esp
08729256 +0x1f86:  mov    %ebx,-0x8(%ebp)
08729259 +0x1f89:  mov    0x8(%ebp),%ebx
0872925c +0x1f8c:  mov    %esi,-0x4(%ebp)
0872925f +0x1f8f:  lea    0x8(%ebx),%eax
08729262 +0x1f92:  movl   $&_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE+0xc,(%ebx)
08729268 +0x1f98:  lea    0x90(%ebx),%esi
0872926e +0x1f9e:  movl   $&_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE+0x20,0x90(%ebx)
08729278 +0x1fa8:  mov    %eax,(%esp)
0872927b +0x1fab:  call   087291d0 <+0x1f00>
08729280 +0x1fb0:  mov    &_ZTTSt14basic_ifstreamIcSt11char_traitsIcEE+0x4,%eax
08729285 +0x1fb5:  mov    &_ZTTSt14basic_ifstreamIcSt11char_traitsIcEE+0x8,%edx
0872928b +0x1fbb:  mov    %eax,(%ebx)
0872928d +0x1fbd:  mov    -0xc(%eax),%eax
08729290 +0x1fc0:  movl   $0x0,0x4(%ebx)
08729297 +0x1fc7:  mov    %edx,(%ebx,%eax,1)
0872929a +0x1fca:  movl   $&_ZTVSt9basic_iosIcSt11char_traitsIcEE+0x8,0x90(%ebx)
087292a4 +0x1fd4:  mov    -0x8(%ebp),%ebx
087292a7 +0x1fd7:  mov    %esi,0x8(%ebp)
087292aa +0x1fda:  mov    -0x4(%ebp),%esi
087292ad +0x1fdd:  mov    %ebp,%esp
087292af +0x1fdf:  pop    %ebp
087292b0 +0x1fe0:  jmp    08727070 <_ZNSt8ios_baseD1Ev>  ; std::ios_base::~ios_base()
087292b5 +0x1fe5:  mov    &_ZTTSt14basic_ifstreamIcSt11char_traitsIcEE+0x4,%edx
087292bb +0x1feb:  mov    &_ZTTSt14basic_ifstreamIcSt11char_traitsIcEE+0x8,%ecx
087292c1 +0x1ff1:  mov    %eax,-0xc(%ebp)
087292c4 +0x1ff4:  mov    %edx,(%ebx)
087292c6 +0x1ff6:  mov    -0xc(%edx),%edx
087292c9 +0x1ff9:  movl   $0x0,0x4(%ebx)
087292d0 +0x2000:  mov    %ecx,(%ebx,%edx,1)
087292d3 +0x2003:  mov    %esi,(%esp)
087292d6 +0x2006:  call   086e0c10 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xb70>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xb70
087292db +0x200b:  mov    -0xc(%ebp),%eax
087292de +0x200e:  mov    %eax,(%esp)
087292e1 +0x2011:  call   08ae3750 <_Unwind_Resume>
087292e6 +0x2016:  nop
087292e7 +0x2017:  nop
087292e8 +0x2018:  nop
087292e9 +0x2019:  nop
087292ea +0x201a:  nop
087292eb +0x201b:  nop
087292ec +0x201c:  nop
087292ed +0x201d:  nop
087292ee +0x201e:  nop
087292ef +0x201f:  nop
087292f0 +0x2020:  push   %ebp
087292f1 +0x2021:  mov    %esp,%ebp
087292f3 +0x2023:  sub    $0x18,%esp
087292f6 +0x2026:  mov    %ebx,-0x8(%ebp)
087292f9 +0x2029:  mov    0xc(%ebp),%ebx
087292fc +0x202c:  mov    %esi,-0x4(%ebp)
087292ff +0x202f:  mov    0x8(%ebp),%esi
08729302 +0x2032:  mov    (%ebx),%eax
08729304 +0x2034:  mov    0xc(%ebx),%edx
08729307 +0x2037:  mov    %eax,(%esi)
08729309 +0x2039:  mov    -0xc(%eax),%eax
0872930c +0x203c:  mov    %edx,(%esi,%eax,1)
0872930f +0x203f:  lea    0x8(%esi),%eax
08729312 +0x2042:  mov    %eax,(%esp)
08729315 +0x2045:  call   087291d0 <+0x1f00>
0872931a +0x204a:  mov    0x4(%ebx),%eax
0872931d +0x204d:  mov    0x8(%ebx),%edx
08729320 +0x2050:  mov    %eax,(%esi)
08729322 +0x2052:  mov    -0xc(%eax),%eax
08729325 +0x2055:  movl   $0x0,0x4(%esi)
0872932c +0x205c:  mov    %edx,(%esi,%eax,1)
0872932f +0x205f:  mov    -0x8(%ebp),%ebx
08729332 +0x2062:  mov    -0x4(%ebp),%esi
08729335 +0x2065:  mov    %ebp,%esp
08729337 +0x2067:  pop    %ebp
08729338 +0x2068:  ret
08729339 +0x2069:  mov    0x4(%ebx),%edx
0872933c +0x206c:  mov    0x8(%ebx),%ecx
0872933f +0x206f:  mov    %edx,(%esi)
08729341 +0x2071:  mov    -0xc(%edx),%edx
08729344 +0x2074:  movl   $0x0,0x4(%esi)
0872934b +0x207b:  mov    %ecx,(%esi,%edx,1)
0872934e +0x207e:  mov    %eax,(%esp)
08729351 +0x2081:  call   08ae3750 <_Unwind_Resume>
08729356 +0x2086:  nop
08729357 +0x2087:  nop
08729358 +0x2088:  nop
08729359 +0x2089:  nop
0872935a +0x208a:  nop
0872935b +0x208b:  nop
0872935c +0x208c:  nop
0872935d +0x208d:  nop
0872935e +0x208e:  nop
0872935f +0x208f:  nop
08729360 +0x2090:  push   %ebp
08729361 +0x2091:  mov    %esp,%ebp
08729363 +0x2093:  push   %ebx
08729364 +0x2094:  sub    $0x14,%esp
08729367 +0x2097:  mov    0x8(%ebp),%ebx
0872936a +0x209a:  mov    %ebx,(%esp)
0872936d +0x209d:  call   087291d0 <+0x1f00>
08729372 +0x20a2:  mov    %ebx,0x8(%ebp)
08729375 +0x20a5:  add    $0x14,%esp
08729378 +0x20a8:  pop    %ebx
08729379 +0x20a9:  pop    %ebp
0872937a +0x20aa:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
0872937f +0x20af:  nop
08729380 +0x20b0:  push   %ebp
08729381 +0x20b1:  mov    %esp,%ebp
08729383 +0x20b3:  push   %edi
08729384 +0x20b4:  push   %esi
08729385 +0x20b5:  push   %ebx
08729386 +0x20b6:  sub    $0x2c,%esp
08729389 +0x20b9:  mov    0x8(%ebp),%ebx
0872938c +0x20bc:  lea    0x94(%ebx),%esi
08729392 +0x20c2:  mov    %esi,(%esp)
08729395 +0x20c5:  call   087270f0 <_ZNSt8ios_baseC1Ev>  ; std::ios_base::ios_base()
0872939a +0x20ca:  mov    &_ZTTSt13basic_fstreamIcSt11char_traitsIcEE+0x8,%edi
087293a0 +0x20d0:  movb   $0x0,0x74(%esi)
087293a4 +0x20d4:  mov    &_ZTTSt13basic_fstreamIcSt11char_traitsIcEE+0xc,%edx
087293aa +0x20da:  movl   $&_ZTVSt9basic_iosIcSt11char_traitsIcEE+0x8,0x94(%ebx)
087293b4 +0x20e4:  movl   $0x0,0x70(%esi)
087293bb +0x20eb:  mov    -0xc(%edi),%eax
087293be +0x20ee:  mov    %edi,(%ebx)
087293c0 +0x20f0:  movl   $0x0,0x4(%ebx)
087293c7 +0x20f7:  movb   $0x0,0x75(%esi)
087293cb +0x20fb:  mov    %edx,(%ebx,%eax,1)
087293ce +0x20fe:  movl   $0x0,0x78(%esi)
087293d5 +0x2105:  movl   $0x0,0x7c(%esi)
087293dc +0x210c:  movl   $0x0,0x80(%esi)
087293e6 +0x2116:  movl   $0x0,0x84(%esi)
087293f0 +0x2120:  movl   $0x0,0x4(%esp)
087293f8 +0x2128:  mov    (%ebx),%eax
087293fa +0x212a:  mov    -0xc(%eax),%eax
087293fd +0x212d:  lea    (%ebx,%eax,1),%eax
08729400 +0x2130:  mov    %eax,(%esp)
08729403 +0x2133:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
08729408 +0x2138:  mov    &_ZTTSt13basic_fstreamIcSt11char_traitsIcEE+0x10,%edx
0872940e +0x213e:  lea    0x8(%ebx),%eax
08729411 +0x2141:  mov    &_ZTTSt13basic_fstreamIcSt11char_traitsIcEE+0x14,%ecx
08729417 +0x2147:  mov    %edx,0x8(%ebx)
0872941a +0x214a:  mov    -0xc(%edx),%edx
0872941d +0x214d:  mov    %ecx,0x8(%ebx,%edx,1)
08729421 +0x2151:  movl   $0x0,0x4(%esp)
08729429 +0x2159:  mov    0x8(%ebx),%edx
0872942c +0x215c:  add    -0xc(%edx),%eax
0872942f +0x215f:  mov    %eax,(%esp)
08729432 +0x2162:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
08729437 +0x2167:  mov    &_ZTTSt13basic_fstreamIcSt11char_traitsIcEE+0x4,%eax
0872943c +0x216c:  lea    0xc(%ebx),%edi
0872943f +0x216f:  mov    &_ZTTSt13basic_fstreamIcSt11char_traitsIcEE+0x18,%edx
08729445 +0x2175:  mov    -0xc(%eax),%eax
08729448 +0x2178:  mov    %edx,(%ebx,%eax,1)
0872944b +0x217b:  movl   $&_ZTVSt13basic_fstreamIcSt11char_traitsIcEE+0xc,(%ebx)
08729451 +0x2181:  movl   $&_ZTVSt13basic_fstreamIcSt11char_traitsIcEE+0x34,0x94(%ebx)
0872945b +0x218b:  movl   $&_ZTVSt13basic_fstreamIcSt11char_traitsIcEE+0x20,0x8(%ebx)
08729462 +0x2192:  mov    %edi,(%esp)
08729465 +0x2195:  call   08727c40 <+0x970>
0872946a +0x219a:  mov    %edi,0x4(%esp)
0872946e +0x219e:  mov    %esi,(%esp)
08729471 +0x21a1:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
08729476 +0x21a6:  mov    0x10(%ebp),%eax
08729479 +0x21a9:  mov    %eax,0x8(%esp)
0872947d +0x21ad:  mov    0xc(%ebp),%eax
08729480 +0x21b0:  mov    (%eax),%eax
08729482 +0x21b2:  mov    %edi,(%esp)
08729485 +0x21b5:  mov    %eax,0x4(%esp)
08729489 +0x21b9:  call   08728df0 <+0x1b20>
0872948e +0x21be:  test   %eax,%eax
08729490 +0x21c0:  je     087294b8 <+0x21e8>
08729492 +0x21c2:  movl   $0x0,0x4(%esp)
0872949a +0x21ca:  mov    (%ebx),%eax
0872949c +0x21cc:  mov    -0xc(%eax),%eax
0872949f +0x21cf:  lea    (%ebx,%eax,1),%eax
087294a2 +0x21d2:  mov    %eax,(%esp)
087294a5 +0x21d5:  call   086e0da0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xd00>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xd00
087294aa +0x21da:  add    $0x2c,%esp
087294ad +0x21dd:  pop    %ebx
087294ae +0x21de:  pop    %esi
087294af +0x21df:  pop    %edi
087294b0 +0x21e0:  pop    %ebp
087294b1 +0x21e1:  ret
087294b2 +0x21e2:  lea    0x0(%esi),%esi
087294b8 +0x21e8:  mov    (%ebx),%eax
087294ba +0x21ea:  mov    -0xc(%eax),%edx
087294bd +0x21ed:  add    %ebx,%edx
087294bf +0x21ef:  mov    0x14(%edx),%eax
087294c2 +0x21f2:  mov    %edx,(%esp)
087294c5 +0x21f5:  or     $0x4,%eax
087294c8 +0x21f8:  mov    %eax,0x4(%esp)
087294cc +0x21fc:  call   086e0da0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xd00>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xd00
087294d1 +0x2201:  add    $0x2c,%esp
087294d4 +0x2204:  pop    %ebx
087294d5 +0x2205:  pop    %esi
087294d6 +0x2206:  pop    %edi
087294d7 +0x2207:  pop    %ebp
087294d8 +0x2208:  ret
087294d9 +0x2209:  mov    %eax,-0x1c(%ebp)
087294dc +0x220c:  mov    %esi,(%esp)
087294df +0x220f:  call   086e0c10 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xb70>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xb70
087294e4 +0x2214:  mov    -0x1c(%ebp),%eax
087294e7 +0x2217:  mov    %eax,(%esp)
087294ea +0x221a:  call   08ae3750 <_Unwind_Resume>
087294ef +0x221f:  mov    %eax,-0x1c(%ebp)
087294f2 +0x2222:  mov    %edi,(%esp)
087294f5 +0x2225:  call   087291d0 <+0x1f00>
087294fa +0x222a:  mov    -0x1c(%ebp),%eax
087294fd +0x222d:  mov    %eax,-0x1c(%ebp)
08729500 +0x2230:  movl   $&_ZTTSt13basic_fstreamIcSt11char_traitsIcEE+0x4,0x4(%esp)
08729508 +0x2238:  mov    %ebx,(%esp)
0872950b +0x223b:  call   086e1730 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x1690>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x1690
08729510 +0x2240:  mov    -0x1c(%ebp),%eax
08729513 +0x2243:  jmp    087294d9 <+0x2209>
08729515 +0x2245:  jmp    087294fd <+0x222d>
08729517 +0x2247:  mov    -0xc(%edi),%edx
0872951a +0x224a:  mov    &_ZTTSt13basic_fstreamIcSt11char_traitsIcEE+0xc,%ecx
08729520 +0x2250:  mov    %edi,(%ebx)
08729522 +0x2252:  movl   $0x0,0x4(%ebx)
08729529 +0x2259:  mov    %ecx,(%ebx,%edx,1)
0872952c +0x225c:  jmp    087294d9 <+0x2209>
0872952e +0x225e:  nop
0872952f +0x225f:  nop
08729530 +0x2260:  push   %ebp
08729531 +0x2261:  mov    %esp,%ebp
08729533 +0x2263:  push   %edi
08729534 +0x2264:  push   %esi
08729535 +0x2265:  push   %ebx
08729536 +0x2266:  sub    $0x2c,%esp
08729539 +0x2269:  mov    0xc(%ebp),%esi
0872953c +0x226c:  mov    0x8(%ebp),%ebx
0872953f +0x226f:  mov    0x8(%esi),%eax
08729542 +0x2272:  lea    0x4(%esi),%edi
08729545 +0x2275:  mov    0xc(%esi),%edx
08729548 +0x2278:  mov    %eax,(%ebx)
0872954a +0x227a:  mov    -0xc(%eax),%eax
0872954d +0x227d:  movl   $0x0,0x4(%ebx)
08729554 +0x2284:  mov    %edx,(%ebx,%eax,1)
08729557 +0x2287:  movl   $0x0,0x4(%esp)
0872955f +0x228f:  mov    (%ebx),%eax
08729561 +0x2291:  mov    -0xc(%eax),%eax
08729564 +0x2294:  lea    (%ebx,%eax,1),%eax
08729567 +0x2297:  mov    %eax,(%esp)
0872956a +0x229a:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
0872956f +0x229f:  mov    0xc(%edi),%edx
08729572 +0x22a2:  lea    0x8(%ebx),%eax
08729575 +0x22a5:  mov    0x10(%edi),%ecx
08729578 +0x22a8:  mov    %edx,0x8(%ebx)
0872957b +0x22ab:  mov    -0xc(%edx),%edx
0872957e +0x22ae:  mov    %ecx,0x8(%ebx,%edx,1)
08729582 +0x22b2:  movl   $0x0,0x4(%esp)
0872958a +0x22ba:  mov    0x8(%ebx),%edx
0872958d +0x22bd:  add    -0xc(%edx),%eax
08729590 +0x22c0:  mov    %eax,(%esp)
08729593 +0x22c3:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
08729598 +0x22c8:  mov    0x4(%esi),%eax
0872959b +0x22cb:  mov    0x14(%edi),%edx
0872959e +0x22ce:  mov    -0xc(%eax),%eax
087295a1 +0x22d1:  mov    %edx,(%ebx,%eax,1)
087295a4 +0x22d4:  mov    (%esi),%eax
087295a6 +0x22d6:  mov    0x20(%esi),%edx
087295a9 +0x22d9:  mov    %eax,(%ebx)
087295ab +0x22db:  mov    -0xc(%eax),%eax
087295ae +0x22de:  mov    %edx,(%ebx,%eax,1)
087295b1 +0x22e1:  mov    0x24(%esi),%eax
087295b4 +0x22e4:  lea    0xc(%ebx),%esi
087295b7 +0x22e7:  mov    %eax,0x8(%ebx)
087295ba +0x22ea:  mov    %esi,(%esp)
087295bd +0x22ed:  call   08727c40 <+0x970>
087295c2 +0x22f2:  mov    %esi,0x4(%esp)
087295c6 +0x22f6:  mov    (%ebx),%eax
087295c8 +0x22f8:  mov    -0xc(%eax),%eax
087295cb +0x22fb:  lea    (%ebx,%eax,1),%eax
087295ce +0x22fe:  mov    %eax,(%esp)
087295d1 +0x2301:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
087295d6 +0x2306:  mov    0x14(%ebp),%eax
087295d9 +0x2309:  mov    %eax,0x8(%esp)
087295dd +0x230d:  mov    0x10(%ebp),%eax
087295e0 +0x2310:  mov    (%eax),%eax
087295e2 +0x2312:  mov    %esi,(%esp)
087295e5 +0x2315:  mov    %eax,0x4(%esp)
087295e9 +0x2319:  call   08728df0 <+0x1b20>
087295ee +0x231e:  test   %eax,%eax
087295f0 +0x2320:  je     08729618 <+0x2348>
087295f2 +0x2322:  movl   $0x0,0x4(%esp)
087295fa +0x232a:  mov    (%ebx),%eax
087295fc +0x232c:  mov    -0xc(%eax),%eax
087295ff +0x232f:  lea    (%ebx,%eax,1),%eax
08729602 +0x2332:  mov    %eax,(%esp)
08729605 +0x2335:  call   086e0da0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xd00>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xd00
0872960a +0x233a:  add    $0x2c,%esp
0872960d +0x233d:  pop    %ebx
0872960e +0x233e:  pop    %esi
0872960f +0x233f:  pop    %edi
08729610 +0x2340:  pop    %ebp
08729611 +0x2341:  ret
08729612 +0x2342:  lea    0x0(%esi),%esi
08729618 +0x2348:  mov    (%ebx),%eax
0872961a +0x234a:  mov    -0xc(%eax),%edx
0872961d +0x234d:  add    %ebx,%edx
0872961f +0x234f:  mov    0x14(%edx),%eax
08729622 +0x2352:  mov    %edx,(%esp)
08729625 +0x2355:  or     $0x4,%eax
08729628 +0x2358:  mov    %eax,0x4(%esp)
0872962c +0x235c:  call   086e0da0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xd00>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xd00
08729631 +0x2361:  add    $0x2c,%esp
08729634 +0x2364:  pop    %ebx
08729635 +0x2365:  pop    %esi
08729636 +0x2366:  pop    %edi
08729637 +0x2367:  pop    %ebp
08729638 +0x2368:  ret
08729639 +0x2369:  mov    %eax,(%esp)
0872963c +0x236c:  call   08ae3750 <_Unwind_Resume>
08729641 +0x2371:  mov    %eax,-0x1c(%ebp)
08729644 +0x2374:  mov    %esi,(%esp)
08729647 +0x2377:  call   087291d0 <+0x1f00>
0872964c +0x237c:  mov    -0x1c(%ebp),%eax
0872964f +0x237f:  mov    %eax,-0x1c(%ebp)
08729652 +0x2382:  mov    %edi,0x4(%esp)
08729656 +0x2386:  mov    %ebx,(%esp)
08729659 +0x2389:  call   086e1730 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x1690>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x1690
0872965e +0x238e:  mov    -0x1c(%ebp),%eax
08729661 +0x2391:  jmp    08729639 <+0x2369>
08729663 +0x2393:  jmp    0872964f <+0x237f>
08729665 +0x2395:  mov    0x8(%esi),%edx
08729668 +0x2398:  mov    0xc(%esi),%ecx
0872966b +0x239b:  mov    %edx,(%ebx)
0872966d +0x239d:  mov    -0xc(%edx),%edx
08729670 +0x23a0:  movl   $0x0,0x4(%ebx)
08729677 +0x23a7:  mov    %ecx,(%ebx,%edx,1)
0872967a +0x23aa:  jmp    08729639 <+0x2369>
0872967c +0x23ac:  nop
0872967d +0x23ad:  nop
0872967e +0x23ae:  nop
0872967f +0x23af:  nop
08729680 +0x23b0:  push   %ebp
08729681 +0x23b1:  mov    %esp,%ebp
08729683 +0x23b3:  push   %edi
08729684 +0x23b4:  push   %esi
08729685 +0x23b5:  push   %ebx
08729686 +0x23b6:  sub    $0x2c,%esp
08729689 +0x23b9:  mov    0x8(%ebp),%ebx
0872968c +0x23bc:  lea    0x94(%ebx),%esi
08729692 +0x23c2:  mov    %esi,(%esp)
08729695 +0x23c5:  call   087270f0 <_ZNSt8ios_baseC1Ev>  ; std::ios_base::ios_base()
0872969a +0x23ca:  mov    &_ZTTSt13basic_fstreamIcSt11char_traitsIcEE+0x8,%edi
087296a0 +0x23d0:  movb   $0x0,0x74(%esi)
087296a4 +0x23d4:  mov    &_ZTTSt13basic_fstreamIcSt11char_traitsIcEE+0xc,%edx
087296aa +0x23da:  movl   $&_ZTVSt9basic_iosIcSt11char_traitsIcEE+0x8,0x94(%ebx)
087296b4 +0x23e4:  movl   $0x0,0x70(%esi)
087296bb +0x23eb:  mov    -0xc(%edi),%eax
087296be +0x23ee:  mov    %edi,(%ebx)
087296c0 +0x23f0:  movl   $0x0,0x4(%ebx)
087296c7 +0x23f7:  movb   $0x0,0x75(%esi)
087296cb +0x23fb:  mov    %edx,(%ebx,%eax,1)
087296ce +0x23fe:  movl   $0x0,0x78(%esi)
087296d5 +0x2405:  movl   $0x0,0x7c(%esi)
087296dc +0x240c:  movl   $0x0,0x80(%esi)
087296e6 +0x2416:  movl   $0x0,0x84(%esi)
087296f0 +0x2420:  movl   $0x0,0x4(%esp)
087296f8 +0x2428:  mov    (%ebx),%eax
087296fa +0x242a:  mov    -0xc(%eax),%eax
087296fd +0x242d:  lea    (%ebx,%eax,1),%eax
08729700 +0x2430:  mov    %eax,(%esp)
08729703 +0x2433:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
08729708 +0x2438:  mov    &_ZTTSt13basic_fstreamIcSt11char_traitsIcEE+0x10,%edx
0872970e +0x243e:  lea    0x8(%ebx),%eax
08729711 +0x2441:  mov    &_ZTTSt13basic_fstreamIcSt11char_traitsIcEE+0x14,%ecx
08729717 +0x2447:  mov    %edx,0x8(%ebx)
0872971a +0x244a:  mov    -0xc(%edx),%edx
0872971d +0x244d:  mov    %ecx,0x8(%ebx,%edx,1)
08729721 +0x2451:  movl   $0x0,0x4(%esp)
08729729 +0x2459:  mov    0x8(%ebx),%edx
0872972c +0x245c:  add    -0xc(%edx),%eax
0872972f +0x245f:  mov    %eax,(%esp)
08729732 +0x2462:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
08729737 +0x2467:  mov    &_ZTTSt13basic_fstreamIcSt11char_traitsIcEE+0x4,%eax
0872973c +0x246c:  lea    0xc(%ebx),%edi
0872973f +0x246f:  mov    &_ZTTSt13basic_fstreamIcSt11char_traitsIcEE+0x18,%edx
08729745 +0x2475:  mov    -0xc(%eax),%eax
08729748 +0x2478:  mov    %edx,(%ebx,%eax,1)
0872974b +0x247b:  movl   $&_ZTVSt13basic_fstreamIcSt11char_traitsIcEE+0xc,(%ebx)
08729751 +0x2481:  movl   $&_ZTVSt13basic_fstreamIcSt11char_traitsIcEE+0x34,0x94(%ebx)
0872975b +0x248b:  movl   $&_ZTVSt13basic_fstreamIcSt11char_traitsIcEE+0x20,0x8(%ebx)
08729762 +0x2492:  mov    %edi,(%esp)
08729765 +0x2495:  call   08727c40 <+0x970>
0872976a +0x249a:  mov    %edi,0x4(%esp)
0872976e +0x249e:  mov    %esi,(%esp)
08729771 +0x24a1:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
08729776 +0x24a6:  mov    0x10(%ebp),%eax
08729779 +0x24a9:  mov    %edi,(%esp)
0872977c +0x24ac:  mov    %eax,0x8(%esp)
08729780 +0x24b0:  mov    0xc(%ebp),%eax
08729783 +0x24b3:  mov    %eax,0x4(%esp)
08729787 +0x24b7:  call   08728df0 <+0x1b20>
0872978c +0x24bc:  test   %eax,%eax
0872978e +0x24be:  je     087297b0 <+0x24e0>
08729790 +0x24c0:  movl   $0x0,0x4(%esp)
08729798 +0x24c8:  mov    (%ebx),%eax
0872979a +0x24ca:  mov    -0xc(%eax),%eax
0872979d +0x24cd:  lea    (%ebx,%eax,1),%eax
087297a0 +0x24d0:  mov    %eax,(%esp)
087297a3 +0x24d3:  call   086e0da0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xd00>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xd00
087297a8 +0x24d8:  add    $0x2c,%esp
087297ab +0x24db:  pop    %ebx
087297ac +0x24dc:  pop    %esi
087297ad +0x24dd:  pop    %edi
087297ae +0x24de:  pop    %ebp
087297af +0x24df:  ret
087297b0 +0x24e0:  mov    (%ebx),%eax
087297b2 +0x24e2:  mov    -0xc(%eax),%edx
087297b5 +0x24e5:  add    %ebx,%edx
087297b7 +0x24e7:  mov    0x14(%edx),%eax
087297ba +0x24ea:  mov    %edx,(%esp)
087297bd +0x24ed:  or     $0x4,%eax
087297c0 +0x24f0:  mov    %eax,0x4(%esp)
087297c4 +0x24f4:  call   086e0da0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xd00>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xd00
087297c9 +0x24f9:  add    $0x2c,%esp
087297cc +0x24fc:  pop    %ebx
087297cd +0x24fd:  pop    %esi
087297ce +0x24fe:  pop    %edi
087297cf +0x24ff:  pop    %ebp
087297d0 +0x2500:  ret
087297d1 +0x2501:  mov    %eax,-0x1c(%ebp)
087297d4 +0x2504:  mov    %esi,(%esp)
087297d7 +0x2507:  call   086e0c10 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xb70>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xb70
087297dc +0x250c:  mov    -0x1c(%ebp),%eax
087297df +0x250f:  mov    %eax,(%esp)
087297e2 +0x2512:  call   08ae3750 <_Unwind_Resume>
087297e7 +0x2517:  mov    %eax,-0x1c(%ebp)
087297ea +0x251a:  mov    %edi,(%esp)
087297ed +0x251d:  call   087291d0 <+0x1f00>
087297f2 +0x2522:  mov    -0x1c(%ebp),%eax
087297f5 +0x2525:  mov    %eax,-0x1c(%ebp)
087297f8 +0x2528:  movl   $&_ZTTSt13basic_fstreamIcSt11char_traitsIcEE+0x4,0x4(%esp)
08729800 +0x2530:  mov    %ebx,(%esp)
08729803 +0x2533:  call   086e1730 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x1690>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x1690
08729808 +0x2538:  mov    -0x1c(%ebp),%eax
0872980b +0x253b:  jmp    087297d1 <+0x2501>
0872980d +0x253d:  jmp    087297f5 <+0x2525>
0872980f +0x253f:  mov    -0xc(%edi),%edx
08729812 +0x2542:  mov    &_ZTTSt13basic_fstreamIcSt11char_traitsIcEE+0xc,%ecx
08729818 +0x2548:  mov    %edi,(%ebx)
0872981a +0x254a:  movl   $0x0,0x4(%ebx)
08729821 +0x2551:  mov    %ecx,(%ebx,%edx,1)
08729824 +0x2554:  jmp    087297d1 <+0x2501>
08729826 +0x2556:  nop
08729827 +0x2557:  nop
08729828 +0x2558:  nop
08729829 +0x2559:  nop
0872982a +0x255a:  nop
0872982b +0x255b:  nop
0872982c +0x255c:  nop
0872982d +0x255d:  nop
0872982e +0x255e:  nop
0872982f +0x255f:  nop
08729830 +0x2560:  push   %ebp
08729831 +0x2561:  mov    %esp,%ebp
08729833 +0x2563:  push   %edi
08729834 +0x2564:  push   %esi
08729835 +0x2565:  push   %ebx
08729836 +0x2566:  sub    $0x2c,%esp
08729839 +0x2569:  mov    0xc(%ebp),%esi
0872983c +0x256c:  mov    0x8(%ebp),%ebx
0872983f +0x256f:  mov    0x8(%esi),%eax
08729842 +0x2572:  lea    0x4(%esi),%edi
08729845 +0x2575:  mov    0xc(%esi),%edx
08729848 +0x2578:  mov    %eax,(%ebx)
0872984a +0x257a:  mov    -0xc(%eax),%eax
0872984d +0x257d:  movl   $0x0,0x4(%ebx)
08729854 +0x2584:  mov    %edx,(%ebx,%eax,1)
08729857 +0x2587:  movl   $0x0,0x4(%esp)
0872985f +0x258f:  mov    (%ebx),%eax
08729861 +0x2591:  mov    -0xc(%eax),%eax
08729864 +0x2594:  lea    (%ebx,%eax,1),%eax
08729867 +0x2597:  mov    %eax,(%esp)
0872986a +0x259a:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
0872986f +0x259f:  mov    0xc(%edi),%edx
08729872 +0x25a2:  lea    0x8(%ebx),%eax
08729875 +0x25a5:  mov    0x10(%edi),%ecx
08729878 +0x25a8:  mov    %edx,0x8(%ebx)
0872987b +0x25ab:  mov    -0xc(%edx),%edx
0872987e +0x25ae:  mov    %ecx,0x8(%ebx,%edx,1)
08729882 +0x25b2:  movl   $0x0,0x4(%esp)
0872988a +0x25ba:  mov    0x8(%ebx),%edx
0872988d +0x25bd:  add    -0xc(%edx),%eax
08729890 +0x25c0:  mov    %eax,(%esp)
08729893 +0x25c3:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
08729898 +0x25c8:  mov    0x4(%esi),%eax
0872989b +0x25cb:  mov    0x14(%edi),%edx
0872989e +0x25ce:  mov    -0xc(%eax),%eax
087298a1 +0x25d1:  mov    %edx,(%ebx,%eax,1)
087298a4 +0x25d4:  mov    (%esi),%eax
087298a6 +0x25d6:  mov    0x20(%esi),%edx
087298a9 +0x25d9:  mov    %eax,(%ebx)
087298ab +0x25db:  mov    -0xc(%eax),%eax
087298ae +0x25de:  mov    %edx,(%ebx,%eax,1)
087298b1 +0x25e1:  mov    0x24(%esi),%eax
087298b4 +0x25e4:  lea    0xc(%ebx),%esi
087298b7 +0x25e7:  mov    %eax,0x8(%ebx)
087298ba +0x25ea:  mov    %esi,(%esp)
087298bd +0x25ed:  call   08727c40 <+0x970>
087298c2 +0x25f2:  mov    %esi,0x4(%esp)
087298c6 +0x25f6:  mov    (%ebx),%eax
087298c8 +0x25f8:  mov    -0xc(%eax),%eax
087298cb +0x25fb:  lea    (%ebx,%eax,1),%eax
087298ce +0x25fe:  mov    %eax,(%esp)
087298d1 +0x2601:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
087298d6 +0x2606:  mov    0x14(%ebp),%eax
087298d9 +0x2609:  mov    %esi,(%esp)
087298dc +0x260c:  mov    %eax,0x8(%esp)
087298e0 +0x2610:  mov    0x10(%ebp),%eax
087298e3 +0x2613:  mov    %eax,0x4(%esp)
087298e7 +0x2617:  call   08728df0 <+0x1b20>
087298ec +0x261c:  test   %eax,%eax
087298ee +0x261e:  je     08729910 <+0x2640>
087298f0 +0x2620:  movl   $0x0,0x4(%esp)
087298f8 +0x2628:  mov    (%ebx),%eax
087298fa +0x262a:  mov    -0xc(%eax),%eax
087298fd +0x262d:  lea    (%ebx,%eax,1),%eax
08729900 +0x2630:  mov    %eax,(%esp)
08729903 +0x2633:  call   086e0da0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xd00>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xd00
08729908 +0x2638:  add    $0x2c,%esp
0872990b +0x263b:  pop    %ebx
0872990c +0x263c:  pop    %esi
0872990d +0x263d:  pop    %edi
0872990e +0x263e:  pop    %ebp
0872990f +0x263f:  ret
08729910 +0x2640:  mov    (%ebx),%eax
08729912 +0x2642:  mov    -0xc(%eax),%edx
08729915 +0x2645:  add    %ebx,%edx
08729917 +0x2647:  mov    0x14(%edx),%eax
0872991a +0x264a:  mov    %edx,(%esp)
0872991d +0x264d:  or     $0x4,%eax
08729920 +0x2650:  mov    %eax,0x4(%esp)
08729924 +0x2654:  call   086e0da0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xd00>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xd00
08729929 +0x2659:  add    $0x2c,%esp
0872992c +0x265c:  pop    %ebx
0872992d +0x265d:  pop    %esi
0872992e +0x265e:  pop    %edi
0872992f +0x265f:  pop    %ebp
08729930 +0x2660:  ret
08729931 +0x2661:  mov    %eax,(%esp)
08729934 +0x2664:  call   08ae3750 <_Unwind_Resume>
08729939 +0x2669:  mov    %eax,-0x1c(%ebp)
0872993c +0x266c:  mov    %esi,(%esp)
0872993f +0x266f:  call   087291d0 <+0x1f00>
08729944 +0x2674:  mov    -0x1c(%ebp),%eax
08729947 +0x2677:  mov    %eax,-0x1c(%ebp)
0872994a +0x267a:  mov    %edi,0x4(%esp)
0872994e +0x267e:  mov    %ebx,(%esp)
08729951 +0x2681:  call   086e1730 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x1690>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x1690
08729956 +0x2686:  mov    -0x1c(%ebp),%eax
08729959 +0x2689:  jmp    08729931 <+0x2661>
0872995b +0x268b:  jmp    08729947 <+0x2677>
0872995d +0x268d:  mov    0x8(%esi),%edx
08729960 +0x2690:  mov    0xc(%esi),%ecx
08729963 +0x2693:  mov    %edx,(%ebx)
08729965 +0x2695:  mov    -0xc(%edx),%edx
08729968 +0x2698:  movl   $0x0,0x4(%ebx)
0872996f +0x269f:  mov    %ecx,(%ebx,%edx,1)
08729972 +0x26a2:  jmp    08729931 <+0x2661>
08729974 +0x26a4:  nop
08729975 +0x26a5:  nop
08729976 +0x26a6:  nop
08729977 +0x26a7:  nop
08729978 +0x26a8:  nop
08729979 +0x26a9:  nop
0872997a +0x26aa:  nop
0872997b +0x26ab:  nop
0872997c +0x26ac:  nop
0872997d +0x26ad:  nop
0872997e +0x26ae:  nop
0872997f +0x26af:  nop
08729980 +0x26b0:  push   %ebp
08729981 +0x26b1:  mov    %esp,%ebp
08729983 +0x26b3:  push   %edi
08729984 +0x26b4:  push   %esi
08729985 +0x26b5:  push   %ebx
08729986 +0x26b6:  sub    $0x2c,%esp
08729989 +0x26b9:  mov    0x8(%ebp),%ebx
0872998c +0x26bc:  lea    0x94(%ebx),%esi
08729992 +0x26c2:  mov    %esi,(%esp)
08729995 +0x26c5:  call   087270f0 <_ZNSt8ios_baseC1Ev>  ; std::ios_base::ios_base()
0872999a +0x26ca:  mov    &_ZTTSt13basic_fstreamIcSt11char_traitsIcEE+0x8,%edi
087299a0 +0x26d0:  movb   $0x0,0x74(%esi)
087299a4 +0x26d4:  mov    &_ZTTSt13basic_fstreamIcSt11char_traitsIcEE+0xc,%edx
087299aa +0x26da:  movl   $&_ZTVSt9basic_iosIcSt11char_traitsIcEE+0x8,0x94(%ebx)
087299b4 +0x26e4:  movl   $0x0,0x70(%esi)
087299bb +0x26eb:  mov    -0xc(%edi),%eax
087299be +0x26ee:  mov    %edi,(%ebx)
087299c0 +0x26f0:  movl   $0x0,0x4(%ebx)
087299c7 +0x26f7:  movb   $0x0,0x75(%esi)
087299cb +0x26fb:  mov    %edx,(%ebx,%eax,1)
087299ce +0x26fe:  movl   $0x0,0x78(%esi)
087299d5 +0x2705:  movl   $0x0,0x7c(%esi)
087299dc +0x270c:  movl   $0x0,0x80(%esi)
087299e6 +0x2716:  movl   $0x0,0x84(%esi)
087299f0 +0x2720:  movl   $0x0,0x4(%esp)
087299f8 +0x2728:  mov    (%ebx),%eax
087299fa +0x272a:  mov    -0xc(%eax),%eax
087299fd +0x272d:  lea    (%ebx,%eax,1),%eax
08729a00 +0x2730:  mov    %eax,(%esp)
08729a03 +0x2733:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
08729a08 +0x2738:  mov    &_ZTTSt13basic_fstreamIcSt11char_traitsIcEE+0x10,%edx
08729a0e +0x273e:  lea    0x8(%ebx),%eax
08729a11 +0x2741:  mov    &_ZTTSt13basic_fstreamIcSt11char_traitsIcEE+0x14,%ecx
08729a17 +0x2747:  mov    %edx,0x8(%ebx)
08729a1a +0x274a:  mov    -0xc(%edx),%edx
08729a1d +0x274d:  mov    %ecx,0x8(%ebx,%edx,1)
08729a21 +0x2751:  movl   $0x0,0x4(%esp)
08729a29 +0x2759:  mov    0x8(%ebx),%edx
08729a2c +0x275c:  add    -0xc(%edx),%eax
08729a2f +0x275f:  mov    %eax,(%esp)
08729a32 +0x2762:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
08729a37 +0x2767:  mov    &_ZTTSt13basic_fstreamIcSt11char_traitsIcEE+0x4,%eax
08729a3c +0x276c:  lea    0xc(%ebx),%edi
08729a3f +0x276f:  mov    &_ZTTSt13basic_fstreamIcSt11char_traitsIcEE+0x18,%edx
08729a45 +0x2775:  mov    -0xc(%eax),%eax
08729a48 +0x2778:  mov    %edx,(%ebx,%eax,1)
08729a4b +0x277b:  movl   $&_ZTVSt13basic_fstreamIcSt11char_traitsIcEE+0xc,(%ebx)
08729a51 +0x2781:  movl   $&_ZTVSt13basic_fstreamIcSt11char_traitsIcEE+0x34,0x94(%ebx)
08729a5b +0x278b:  movl   $&_ZTVSt13basic_fstreamIcSt11char_traitsIcEE+0x20,0x8(%ebx)
08729a62 +0x2792:  mov    %edi,(%esp)
08729a65 +0x2795:  call   08727c40 <+0x970>
08729a6a +0x279a:  mov    %edi,0x4(%esp)
08729a6e +0x279e:  mov    %esi,(%esp)
08729a71 +0x27a1:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
08729a76 +0x27a6:  add    $0x2c,%esp
08729a79 +0x27a9:  pop    %ebx
08729a7a +0x27aa:  pop    %esi
08729a7b +0x27ab:  pop    %edi
08729a7c +0x27ac:  pop    %ebp
08729a7d +0x27ad:  ret
08729a7e +0x27ae:  mov    %eax,-0x1c(%ebp)
08729a81 +0x27b1:  mov    %esi,(%esp)
08729a84 +0x27b4:  call   086e0c10 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xb70>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xb70
08729a89 +0x27b9:  mov    -0x1c(%ebp),%eax
08729a8c +0x27bc:  mov    %eax,(%esp)
08729a8f +0x27bf:  call   08ae3750 <_Unwind_Resume>
08729a94 +0x27c4:  mov    %eax,-0x1c(%ebp)
08729a97 +0x27c7:  mov    %edi,(%esp)
08729a9a +0x27ca:  call   087291d0 <+0x1f00>
08729a9f +0x27cf:  mov    -0x1c(%ebp),%eax
08729aa2 +0x27d2:  mov    %eax,-0x1c(%ebp)
08729aa5 +0x27d5:  movl   $&_ZTTSt13basic_fstreamIcSt11char_traitsIcEE+0x4,0x4(%esp)
08729aad +0x27dd:  mov    %ebx,(%esp)
08729ab0 +0x27e0:  call   086e1730 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x1690>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x1690
08729ab5 +0x27e5:  mov    -0x1c(%ebp),%eax
08729ab8 +0x27e8:  jmp    08729a7e <+0x27ae>
08729aba +0x27ea:  jmp    08729aa2 <+0x27d2>
08729abc +0x27ec:  mov    -0xc(%edi),%edx
08729abf +0x27ef:  mov    &_ZTTSt13basic_fstreamIcSt11char_traitsIcEE+0xc,%ecx
08729ac5 +0x27f5:  mov    %edi,(%ebx)
08729ac7 +0x27f7:  movl   $0x0,0x4(%ebx)
08729ace +0x27fe:  mov    %ecx,(%ebx,%edx,1)
08729ad1 +0x2801:  jmp    08729a7e <+0x27ae>
08729ad3 +0x2803:  nop
08729ad4 +0x2804:  nop
08729ad5 +0x2805:  nop
08729ad6 +0x2806:  nop
08729ad7 +0x2807:  nop
08729ad8 +0x2808:  nop
08729ad9 +0x2809:  nop
08729ada +0x280a:  nop
08729adb +0x280b:  nop
08729adc +0x280c:  nop
08729add +0x280d:  nop
08729ade +0x280e:  nop
08729adf +0x280f:  nop
08729ae0 +0x2810:  push   %ebp
08729ae1 +0x2811:  mov    %esp,%ebp
08729ae3 +0x2813:  push   %edi
08729ae4 +0x2814:  push   %esi
08729ae5 +0x2815:  push   %ebx
08729ae6 +0x2816:  sub    $0x2c,%esp
08729ae9 +0x2819:  mov    0xc(%ebp),%esi
08729aec +0x281c:  mov    0x8(%ebp),%ebx
08729aef +0x281f:  mov    0x8(%esi),%eax
08729af2 +0x2822:  lea    0x4(%esi),%edi
08729af5 +0x2825:  mov    0xc(%esi),%edx
08729af8 +0x2828:  mov    %eax,(%ebx)
08729afa +0x282a:  mov    -0xc(%eax),%eax
08729afd +0x282d:  movl   $0x0,0x4(%ebx)
08729b04 +0x2834:  mov    %edx,(%ebx,%eax,1)
08729b07 +0x2837:  movl   $0x0,0x4(%esp)
08729b0f +0x283f:  mov    (%ebx),%eax
08729b11 +0x2841:  mov    -0xc(%eax),%eax
08729b14 +0x2844:  lea    (%ebx,%eax,1),%eax
08729b17 +0x2847:  mov    %eax,(%esp)
08729b1a +0x284a:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
08729b1f +0x284f:  mov    0xc(%edi),%edx
08729b22 +0x2852:  lea    0x8(%ebx),%eax
08729b25 +0x2855:  mov    0x10(%edi),%ecx
08729b28 +0x2858:  mov    %edx,0x8(%ebx)
08729b2b +0x285b:  mov    -0xc(%edx),%edx
08729b2e +0x285e:  mov    %ecx,0x8(%ebx,%edx,1)
08729b32 +0x2862:  movl   $0x0,0x4(%esp)
08729b3a +0x286a:  mov    0x8(%ebx),%edx
08729b3d +0x286d:  add    -0xc(%edx),%eax
08729b40 +0x2870:  mov    %eax,(%esp)
08729b43 +0x2873:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
08729b48 +0x2878:  mov    0x4(%esi),%eax
08729b4b +0x287b:  mov    0x14(%edi),%edx
08729b4e +0x287e:  mov    -0xc(%eax),%eax
08729b51 +0x2881:  mov    %edx,(%ebx,%eax,1)
08729b54 +0x2884:  mov    (%esi),%eax
08729b56 +0x2886:  mov    0x20(%esi),%edx
08729b59 +0x2889:  mov    %eax,(%ebx)
08729b5b +0x288b:  mov    -0xc(%eax),%eax
08729b5e +0x288e:  mov    %edx,(%ebx,%eax,1)
08729b61 +0x2891:  mov    0x24(%esi),%eax
08729b64 +0x2894:  lea    0xc(%ebx),%esi
08729b67 +0x2897:  mov    %eax,0x8(%ebx)
08729b6a +0x289a:  mov    %esi,(%esp)
08729b6d +0x289d:  call   08727c40 <+0x970>
08729b72 +0x28a2:  mov    %esi,0x4(%esp)
08729b76 +0x28a6:  mov    (%ebx),%eax
08729b78 +0x28a8:  mov    -0xc(%eax),%eax
08729b7b +0x28ab:  lea    (%ebx,%eax,1),%eax
08729b7e +0x28ae:  mov    %eax,(%esp)
08729b81 +0x28b1:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
08729b86 +0x28b6:  add    $0x2c,%esp
08729b89 +0x28b9:  pop    %ebx
08729b8a +0x28ba:  pop    %esi
08729b8b +0x28bb:  pop    %edi
08729b8c +0x28bc:  pop    %ebp
08729b8d +0x28bd:  ret
08729b8e +0x28be:  mov    %eax,(%esp)
08729b91 +0x28c1:  call   08ae3750 <_Unwind_Resume>
08729b96 +0x28c6:  mov    %eax,-0x1c(%ebp)
08729b99 +0x28c9:  mov    %esi,(%esp)
08729b9c +0x28cc:  call   087291d0 <+0x1f00>
08729ba1 +0x28d1:  mov    -0x1c(%ebp),%eax
08729ba4 +0x28d4:  mov    %eax,-0x1c(%ebp)
08729ba7 +0x28d7:  mov    %edi,0x4(%esp)
08729bab +0x28db:  mov    %ebx,(%esp)
08729bae +0x28de:  call   086e1730 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x1690>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x1690
08729bb3 +0x28e3:  mov    -0x1c(%ebp),%eax
08729bb6 +0x28e6:  jmp    08729b8e <+0x28be>
08729bb8 +0x28e8:  jmp    08729ba4 <+0x28d4>
08729bba +0x28ea:  mov    0x8(%esi),%edx
08729bbd +0x28ed:  mov    0xc(%esi),%ecx
08729bc0 +0x28f0:  mov    %edx,(%ebx)
08729bc2 +0x28f2:  mov    -0xc(%edx),%edx
08729bc5 +0x28f5:  movl   $0x0,0x4(%ebx)
08729bcc +0x28fc:  mov    %ecx,(%ebx,%edx,1)
08729bcf +0x28ff:  jmp    08729b8e <+0x28be>
08729bd1 +0x2901:  nop
08729bd2 +0x2902:  nop
08729bd3 +0x2903:  nop
08729bd4 +0x2904:  nop
08729bd5 +0x2905:  nop
08729bd6 +0x2906:  nop
08729bd7 +0x2907:  nop
08729bd8 +0x2908:  nop
08729bd9 +0x2909:  nop
08729bda +0x290a:  nop
08729bdb +0x290b:  nop
08729bdc +0x290c:  nop
08729bdd +0x290d:  nop
08729bde +0x290e:  nop
08729bdf +0x290f:  nop
08729be0 +0x2910:  push   %ebp
08729be1 +0x2911:  mov    %esp,%ebp
08729be3 +0x2913:  push   %edi
08729be4 +0x2914:  push   %esi
08729be5 +0x2915:  push   %ebx
08729be6 +0x2916:  sub    $0x2c,%esp
08729be9 +0x2919:  mov    0x8(%ebp),%ebx
08729bec +0x291c:  lea    0x8c(%ebx),%esi
08729bf2 +0x2922:  mov    %esi,(%esp)
08729bf5 +0x2925:  call   087270f0 <_ZNSt8ios_baseC1Ev>  ; std::ios_base::ios_base()
08729bfa +0x292a:  mov    &_ZTTSt14basic_ofstreamIcSt11char_traitsIcEE+0x4,%eax
08729bff +0x292f:  movb   $0x0,0x74(%esi)
08729c03 +0x2933:  mov    &_ZTTSt14basic_ofstreamIcSt11char_traitsIcEE+0x8,%ecx
08729c09 +0x2939:  movl   $&_ZTVSt9basic_iosIcSt11char_traitsIcEE+0x8,0x8c(%ebx)
08729c13 +0x2943:  movl   $0x0,0x70(%esi)
08729c1a +0x294a:  mov    %eax,(%ebx)
08729c1c +0x294c:  mov    -0xc(%eax),%eax
08729c1f +0x294f:  movb   $0x0,0x75(%esi)
08729c23 +0x2953:  movl   $0x0,0x78(%esi)
08729c2a +0x295a:  movl   $0x0,0x7c(%esi)
08729c31 +0x2961:  mov    %ecx,(%ebx,%eax,1)
08729c34 +0x2964:  movl   $0x0,0x80(%esi)
08729c3e +0x296e:  movl   $0x0,0x84(%esi)
08729c48 +0x2978:  movl   $0x0,0x4(%esp)
08729c50 +0x2980:  mov    (%ebx),%eax
08729c52 +0x2982:  mov    -0xc(%eax),%eax
08729c55 +0x2985:  lea    (%ebx,%eax,1),%eax
08729c58 +0x2988:  mov    %eax,(%esp)
08729c5b +0x298b:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
08729c60 +0x2990:  movl   $&_ZTVSt14basic_ofstreamIcSt11char_traitsIcEE+0xc,(%ebx)
08729c66 +0x2996:  lea    0x4(%ebx),%edi
08729c69 +0x2999:  movl   $&_ZTVSt14basic_ofstreamIcSt11char_traitsIcEE+0x20,0x8c(%ebx)
08729c73 +0x29a3:  mov    %edi,(%esp)
08729c76 +0x29a6:  call   08727c40 <+0x970>
08729c7b +0x29ab:  mov    %edi,0x4(%esp)
08729c7f +0x29af:  mov    %esi,(%esp)
08729c82 +0x29b2:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
08729c87 +0x29b7:  mov    0x10(%ebp),%eax
08729c8a +0x29ba:  or     $0x10,%eax
08729c8d +0x29bd:  mov    %eax,0x8(%esp)
08729c91 +0x29c1:  mov    0xc(%ebp),%eax
08729c94 +0x29c4:  mov    (%eax),%eax
08729c96 +0x29c6:  mov    %edi,(%esp)
08729c99 +0x29c9:  mov    %eax,0x4(%esp)
08729c9d +0x29cd:  call   08728df0 <+0x1b20>
08729ca2 +0x29d2:  test   %eax,%eax
08729ca4 +0x29d4:  je     08729cc8 <+0x29f8>
08729ca6 +0x29d6:  movl   $0x0,0x4(%esp)
08729cae +0x29de:  mov    (%ebx),%eax
08729cb0 +0x29e0:  mov    -0xc(%eax),%eax
08729cb3 +0x29e3:  lea    (%ebx,%eax,1),%eax
08729cb6 +0x29e6:  mov    %eax,(%esp)
08729cb9 +0x29e9:  call   086e0da0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xd00>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xd00
08729cbe +0x29ee:  add    $0x2c,%esp
08729cc1 +0x29f1:  pop    %ebx
08729cc2 +0x29f2:  pop    %esi
08729cc3 +0x29f3:  pop    %edi
08729cc4 +0x29f4:  pop    %ebp
08729cc5 +0x29f5:  ret
08729cc6 +0x29f6:  xchg   %ax,%ax
08729cc8 +0x29f8:  mov    (%ebx),%eax
08729cca +0x29fa:  mov    -0xc(%eax),%edx
08729ccd +0x29fd:  add    %ebx,%edx
08729ccf +0x29ff:  mov    0x14(%edx),%eax
08729cd2 +0x2a02:  mov    %edx,(%esp)
08729cd5 +0x2a05:  or     $0x4,%eax
08729cd8 +0x2a08:  mov    %eax,0x4(%esp)
08729cdc +0x2a0c:  call   086e0da0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xd00>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xd00
08729ce1 +0x2a11:  add    $0x2c,%esp
08729ce4 +0x2a14:  pop    %ebx
08729ce5 +0x2a15:  pop    %esi
08729ce6 +0x2a16:  pop    %edi
08729ce7 +0x2a17:  pop    %ebp
08729ce8 +0x2a18:  ret
08729ce9 +0x2a19:  mov    %eax,-0x1c(%ebp)
08729cec +0x2a1c:  mov    %esi,(%esp)
08729cef +0x2a1f:  call   086e0c10 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xb70>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xb70
08729cf4 +0x2a24:  mov    -0x1c(%ebp),%eax
08729cf7 +0x2a27:  mov    %eax,(%esp)
08729cfa +0x2a2a:  call   08ae3750 <_Unwind_Resume>
08729cff +0x2a2f:  mov    %eax,-0x1c(%ebp)
08729d02 +0x2a32:  mov    %edi,(%esp)
08729d05 +0x2a35:  call   087291d0 <+0x1f00>
08729d0a +0x2a3a:  mov    -0x1c(%ebp),%eax
08729d0d +0x2a3d:  mov    &_ZTTSt14basic_ofstreamIcSt11char_traitsIcEE+0x4,%edx
08729d13 +0x2a43:  mov    &_ZTTSt14basic_ofstreamIcSt11char_traitsIcEE+0x8,%ecx
08729d19 +0x2a49:  mov    %edx,(%ebx)
08729d1b +0x2a4b:  mov    -0xc(%edx),%edx
08729d1e +0x2a4e:  mov    %ecx,(%ebx,%edx,1)
08729d21 +0x2a51:  jmp    08729ce9 <+0x2a19>
08729d23 +0x2a53:  jmp    08729d0d <+0x2a3d>
08729d25 +0x2a55:  nop
08729d26 +0x2a56:  nop
08729d27 +0x2a57:  nop
08729d28 +0x2a58:  nop
08729d29 +0x2a59:  nop
08729d2a +0x2a5a:  nop
08729d2b +0x2a5b:  nop
08729d2c +0x2a5c:  nop
08729d2d +0x2a5d:  nop
08729d2e +0x2a5e:  nop
08729d2f +0x2a5f:  nop
08729d30 +0x2a60:  push   %ebp
08729d31 +0x2a61:  mov    %esp,%ebp
08729d33 +0x2a63:  push   %edi
08729d34 +0x2a64:  push   %esi
08729d35 +0x2a65:  push   %ebx
08729d36 +0x2a66:  sub    $0x2c,%esp
08729d39 +0x2a69:  mov    0xc(%ebp),%esi
08729d3c +0x2a6c:  mov    0x8(%ebp),%ebx
08729d3f +0x2a6f:  mov    0x4(%esi),%eax
08729d42 +0x2a72:  mov    0x8(%esi),%edx
08729d45 +0x2a75:  mov    %eax,(%ebx)
08729d47 +0x2a77:  mov    -0xc(%eax),%eax
08729d4a +0x2a7a:  mov    %edx,(%ebx,%eax,1)
08729d4d +0x2a7d:  movl   $0x0,0x4(%esp)
08729d55 +0x2a85:  mov    (%ebx),%eax
08729d57 +0x2a87:  mov    -0xc(%eax),%eax
08729d5a +0x2a8a:  lea    (%ebx,%eax,1),%eax
08729d5d +0x2a8d:  mov    %eax,(%esp)
08729d60 +0x2a90:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
08729d65 +0x2a95:  mov    (%esi),%eax
08729d67 +0x2a97:  lea    0x4(%ebx),%edi
08729d6a +0x2a9a:  mov    0xc(%esi),%edx
08729d6d +0x2a9d:  mov    %eax,(%ebx)
08729d6f +0x2a9f:  mov    -0xc(%eax),%eax
08729d72 +0x2aa2:  mov    %edx,(%ebx,%eax,1)
08729d75 +0x2aa5:  mov    %edi,(%esp)
08729d78 +0x2aa8:  call   08727c40 <+0x970>
08729d7d +0x2aad:  mov    %edi,0x4(%esp)
08729d81 +0x2ab1:  mov    (%ebx),%eax
08729d83 +0x2ab3:  mov    -0xc(%eax),%eax
08729d86 +0x2ab6:  lea    (%ebx,%eax,1),%eax
08729d89 +0x2ab9:  mov    %eax,(%esp)
08729d8c +0x2abc:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
08729d91 +0x2ac1:  mov    0x14(%ebp),%eax
08729d94 +0x2ac4:  or     $0x10,%eax
08729d97 +0x2ac7:  mov    %eax,0x8(%esp)
08729d9b +0x2acb:  mov    0x10(%ebp),%eax
08729d9e +0x2ace:  mov    (%eax),%eax
08729da0 +0x2ad0:  mov    %edi,(%esp)
08729da3 +0x2ad3:  mov    %eax,0x4(%esp)
08729da7 +0x2ad7:  call   08728df0 <+0x1b20>
08729dac +0x2adc:  test   %eax,%eax
08729dae +0x2ade:  je     08729dd0 <+0x2b00>
08729db0 +0x2ae0:  movl   $0x0,0x4(%esp)
08729db8 +0x2ae8:  mov    (%ebx),%eax
08729dba +0x2aea:  mov    -0xc(%eax),%eax
08729dbd +0x2aed:  lea    (%ebx,%eax,1),%eax
08729dc0 +0x2af0:  mov    %eax,(%esp)
08729dc3 +0x2af3:  call   086e0da0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xd00>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xd00
08729dc8 +0x2af8:  add    $0x2c,%esp
08729dcb +0x2afb:  pop    %ebx
08729dcc +0x2afc:  pop    %esi
08729dcd +0x2afd:  pop    %edi
08729dce +0x2afe:  pop    %ebp
08729dcf +0x2aff:  ret
08729dd0 +0x2b00:  mov    (%ebx),%eax
08729dd2 +0x2b02:  mov    -0xc(%eax),%edx
08729dd5 +0x2b05:  add    %ebx,%edx
08729dd7 +0x2b07:  mov    0x14(%edx),%eax
08729dda +0x2b0a:  mov    %edx,(%esp)
08729ddd +0x2b0d:  or     $0x4,%eax
08729de0 +0x2b10:  mov    %eax,0x4(%esp)
08729de4 +0x2b14:  call   086e0da0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xd00>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xd00
08729de9 +0x2b19:  add    $0x2c,%esp
08729dec +0x2b1c:  pop    %ebx
08729ded +0x2b1d:  pop    %esi
08729dee +0x2b1e:  pop    %edi
08729def +0x2b1f:  pop    %ebp
08729df0 +0x2b20:  ret
08729df1 +0x2b21:  mov    %eax,(%esp)
08729df4 +0x2b24:  call   08ae3750 <_Unwind_Resume>
08729df9 +0x2b29:  mov    %eax,-0x1c(%ebp)
08729dfc +0x2b2c:  mov    %edi,(%esp)
08729dff +0x2b2f:  call   087291d0 <+0x1f00>
08729e04 +0x2b34:  mov    -0x1c(%ebp),%eax
08729e07 +0x2b37:  mov    0x4(%esi),%edx
08729e0a +0x2b3a:  mov    0x8(%esi),%ecx
08729e0d +0x2b3d:  mov    %edx,(%ebx)
08729e0f +0x2b3f:  mov    -0xc(%edx),%edx
08729e12 +0x2b42:  mov    %ecx,(%ebx,%edx,1)
08729e15 +0x2b45:  jmp    08729df1 <+0x2b21>
08729e17 +0x2b47:  jmp    08729e07 <+0x2b37>
08729e19 +0x2b49:  nop
08729e1a +0x2b4a:  nop
08729e1b +0x2b4b:  nop
08729e1c +0x2b4c:  nop
08729e1d +0x2b4d:  nop
08729e1e +0x2b4e:  nop
08729e1f +0x2b4f:  nop
08729e20 +0x2b50:  push   %ebp
08729e21 +0x2b51:  mov    %esp,%ebp
08729e23 +0x2b53:  push   %edi
08729e24 +0x2b54:  push   %esi
08729e25 +0x2b55:  push   %ebx
08729e26 +0x2b56:  sub    $0x2c,%esp
08729e29 +0x2b59:  mov    0x8(%ebp),%ebx
08729e2c +0x2b5c:  lea    0x8c(%ebx),%esi
08729e32 +0x2b62:  mov    %esi,(%esp)
08729e35 +0x2b65:  call   087270f0 <_ZNSt8ios_baseC1Ev>  ; std::ios_base::ios_base()
08729e3a +0x2b6a:  mov    &_ZTTSt14basic_ofstreamIcSt11char_traitsIcEE+0x4,%eax
08729e3f +0x2b6f:  movb   $0x0,0x74(%esi)
08729e43 +0x2b73:  mov    &_ZTTSt14basic_ofstreamIcSt11char_traitsIcEE+0x8,%ecx
08729e49 +0x2b79:  movl   $&_ZTVSt9basic_iosIcSt11char_traitsIcEE+0x8,0x8c(%ebx)
08729e53 +0x2b83:  movl   $0x0,0x70(%esi)
08729e5a +0x2b8a:  mov    %eax,(%ebx)
08729e5c +0x2b8c:  mov    -0xc(%eax),%eax
08729e5f +0x2b8f:  movb   $0x0,0x75(%esi)
08729e63 +0x2b93:  movl   $0x0,0x78(%esi)
08729e6a +0x2b9a:  movl   $0x0,0x7c(%esi)
08729e71 +0x2ba1:  mov    %ecx,(%ebx,%eax,1)
08729e74 +0x2ba4:  movl   $0x0,0x80(%esi)
08729e7e +0x2bae:  movl   $0x0,0x84(%esi)
08729e88 +0x2bb8:  movl   $0x0,0x4(%esp)
08729e90 +0x2bc0:  mov    (%ebx),%eax
08729e92 +0x2bc2:  mov    -0xc(%eax),%eax
08729e95 +0x2bc5:  lea    (%ebx,%eax,1),%eax
08729e98 +0x2bc8:  mov    %eax,(%esp)
08729e9b +0x2bcb:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
08729ea0 +0x2bd0:  movl   $&_ZTVSt14basic_ofstreamIcSt11char_traitsIcEE+0xc,(%ebx)
08729ea6 +0x2bd6:  lea    0x4(%ebx),%edi
08729ea9 +0x2bd9:  movl   $&_ZTVSt14basic_ofstreamIcSt11char_traitsIcEE+0x20,0x8c(%ebx)
08729eb3 +0x2be3:  mov    %edi,(%esp)
08729eb6 +0x2be6:  call   08727c40 <+0x970>
08729ebb +0x2beb:  mov    %edi,0x4(%esp)
08729ebf +0x2bef:  mov    %esi,(%esp)
08729ec2 +0x2bf2:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
08729ec7 +0x2bf7:  mov    0x10(%ebp),%eax
08729eca +0x2bfa:  mov    %edi,(%esp)
08729ecd +0x2bfd:  or     $0x10,%eax
08729ed0 +0x2c00:  mov    %eax,0x8(%esp)
08729ed4 +0x2c04:  mov    0xc(%ebp),%eax
08729ed7 +0x2c07:  mov    %eax,0x4(%esp)
08729edb +0x2c0b:  call   08728df0 <+0x1b20>
08729ee0 +0x2c10:  test   %eax,%eax
08729ee2 +0x2c12:  je     08729f08 <+0x2c38>
08729ee4 +0x2c14:  movl   $0x0,0x4(%esp)
08729eec +0x2c1c:  mov    (%ebx),%eax
08729eee +0x2c1e:  mov    -0xc(%eax),%eax
08729ef1 +0x2c21:  lea    (%ebx,%eax,1),%eax
08729ef4 +0x2c24:  mov    %eax,(%esp)
08729ef7 +0x2c27:  call   086e0da0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xd00>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xd00
08729efc +0x2c2c:  add    $0x2c,%esp
08729eff +0x2c2f:  pop    %ebx
08729f00 +0x2c30:  pop    %esi
08729f01 +0x2c31:  pop    %edi
08729f02 +0x2c32:  pop    %ebp
08729f03 +0x2c33:  ret
08729f04 +0x2c34:  lea    0x0(%esi,%eiz,1),%esi
08729f08 +0x2c38:  mov    (%ebx),%eax
08729f0a +0x2c3a:  mov    -0xc(%eax),%edx
08729f0d +0x2c3d:  add    %ebx,%edx
08729f0f +0x2c3f:  mov    0x14(%edx),%eax
08729f12 +0x2c42:  mov    %edx,(%esp)
08729f15 +0x2c45:  or     $0x4,%eax
08729f18 +0x2c48:  mov    %eax,0x4(%esp)
08729f1c +0x2c4c:  call   086e0da0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xd00>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xd00
08729f21 +0x2c51:  add    $0x2c,%esp
08729f24 +0x2c54:  pop    %ebx
08729f25 +0x2c55:  pop    %esi
08729f26 +0x2c56:  pop    %edi
08729f27 +0x2c57:  pop    %ebp
08729f28 +0x2c58:  ret
08729f29 +0x2c59:  mov    %eax,-0x1c(%ebp)
08729f2c +0x2c5c:  mov    %esi,(%esp)
08729f2f +0x2c5f:  call   086e0c10 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xb70>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xb70
08729f34 +0x2c64:  mov    -0x1c(%ebp),%eax
08729f37 +0x2c67:  mov    %eax,(%esp)
08729f3a +0x2c6a:  call   08ae3750 <_Unwind_Resume>
08729f3f +0x2c6f:  mov    %eax,-0x1c(%ebp)
08729f42 +0x2c72:  mov    %edi,(%esp)
08729f45 +0x2c75:  call   087291d0 <+0x1f00>
08729f4a +0x2c7a:  mov    -0x1c(%ebp),%eax
08729f4d +0x2c7d:  mov    &_ZTTSt14basic_ofstreamIcSt11char_traitsIcEE+0x4,%edx
08729f53 +0x2c83:  mov    &_ZTTSt14basic_ofstreamIcSt11char_traitsIcEE+0x8,%ecx
08729f59 +0x2c89:  mov    %edx,(%ebx)
08729f5b +0x2c8b:  mov    -0xc(%edx),%edx
08729f5e +0x2c8e:  mov    %ecx,(%ebx,%edx,1)
08729f61 +0x2c91:  jmp    08729f29 <+0x2c59>
08729f63 +0x2c93:  jmp    08729f4d <+0x2c7d>
08729f65 +0x2c95:  nop
08729f66 +0x2c96:  nop
08729f67 +0x2c97:  nop
08729f68 +0x2c98:  nop
08729f69 +0x2c99:  nop
08729f6a +0x2c9a:  nop
08729f6b +0x2c9b:  nop
08729f6c +0x2c9c:  nop
08729f6d +0x2c9d:  nop
08729f6e +0x2c9e:  nop
08729f6f +0x2c9f:  nop
08729f70 +0x2ca0:  push   %ebp
08729f71 +0x2ca1:  mov    %esp,%ebp
08729f73 +0x2ca3:  push   %edi
08729f74 +0x2ca4:  push   %esi
08729f75 +0x2ca5:  push   %ebx
08729f76 +0x2ca6:  sub    $0x2c,%esp
08729f79 +0x2ca9:  mov    0xc(%ebp),%esi
08729f7c +0x2cac:  mov    0x8(%ebp),%ebx
08729f7f +0x2caf:  mov    0x4(%esi),%eax
08729f82 +0x2cb2:  mov    0x8(%esi),%edx
08729f85 +0x2cb5:  mov    %eax,(%ebx)
08729f87 +0x2cb7:  mov    -0xc(%eax),%eax
08729f8a +0x2cba:  mov    %edx,(%ebx,%eax,1)
08729f8d +0x2cbd:  movl   $0x0,0x4(%esp)
08729f95 +0x2cc5:  mov    (%ebx),%eax
08729f97 +0x2cc7:  mov    -0xc(%eax),%eax
08729f9a +0x2cca:  lea    (%ebx,%eax,1),%eax
08729f9d +0x2ccd:  mov    %eax,(%esp)
08729fa0 +0x2cd0:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
08729fa5 +0x2cd5:  mov    (%esi),%eax
08729fa7 +0x2cd7:  lea    0x4(%ebx),%edi
08729faa +0x2cda:  mov    0xc(%esi),%edx
08729fad +0x2cdd:  mov    %eax,(%ebx)
08729faf +0x2cdf:  mov    -0xc(%eax),%eax
08729fb2 +0x2ce2:  mov    %edx,(%ebx,%eax,1)
08729fb5 +0x2ce5:  mov    %edi,(%esp)
08729fb8 +0x2ce8:  call   08727c40 <+0x970>
08729fbd +0x2ced:  mov    %edi,0x4(%esp)
08729fc1 +0x2cf1:  mov    (%ebx),%eax
08729fc3 +0x2cf3:  mov    -0xc(%eax),%eax
08729fc6 +0x2cf6:  lea    (%ebx,%eax,1),%eax
08729fc9 +0x2cf9:  mov    %eax,(%esp)
08729fcc +0x2cfc:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
08729fd1 +0x2d01:  mov    0x14(%ebp),%eax
08729fd4 +0x2d04:  mov    %edi,(%esp)
08729fd7 +0x2d07:  or     $0x10,%eax
08729fda +0x2d0a:  mov    %eax,0x8(%esp)
08729fde +0x2d0e:  mov    0x10(%ebp),%eax
08729fe1 +0x2d11:  mov    %eax,0x4(%esp)
08729fe5 +0x2d15:  call   08728df0 <+0x1b20>
08729fea +0x2d1a:  test   %eax,%eax
08729fec +0x2d1c:  je     0872a010 <+0x2d40>
08729fee +0x2d1e:  movl   $0x0,0x4(%esp)
08729ff6 +0x2d26:  mov    (%ebx),%eax
08729ff8 +0x2d28:  mov    -0xc(%eax),%eax
08729ffb +0x2d2b:  lea    (%ebx,%eax,1),%eax
08729ffe +0x2d2e:  mov    %eax,(%esp)
0872a001 +0x2d31:  call   086e0da0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xd00>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xd00
0872a006 +0x2d36:  add    $0x2c,%esp
0872a009 +0x2d39:  pop    %ebx
0872a00a +0x2d3a:  pop    %esi
0872a00b +0x2d3b:  pop    %edi
0872a00c +0x2d3c:  pop    %ebp
0872a00d +0x2d3d:  ret
0872a00e +0x2d3e:  xchg   %ax,%ax
0872a010 +0x2d40:  mov    (%ebx),%eax
0872a012 +0x2d42:  mov    -0xc(%eax),%edx
0872a015 +0x2d45:  add    %ebx,%edx
0872a017 +0x2d47:  mov    0x14(%edx),%eax
0872a01a +0x2d4a:  mov    %edx,(%esp)
0872a01d +0x2d4d:  or     $0x4,%eax
0872a020 +0x2d50:  mov    %eax,0x4(%esp)
0872a024 +0x2d54:  call   086e0da0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xd00>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xd00
0872a029 +0x2d59:  add    $0x2c,%esp
0872a02c +0x2d5c:  pop    %ebx
0872a02d +0x2d5d:  pop    %esi
0872a02e +0x2d5e:  pop    %edi
0872a02f +0x2d5f:  pop    %ebp
0872a030 +0x2d60:  ret
0872a031 +0x2d61:  mov    %eax,(%esp)
0872a034 +0x2d64:  call   08ae3750 <_Unwind_Resume>
0872a039 +0x2d69:  mov    %eax,-0x1c(%ebp)
0872a03c +0x2d6c:  mov    %edi,(%esp)
0872a03f +0x2d6f:  call   087291d0 <+0x1f00>
0872a044 +0x2d74:  mov    -0x1c(%ebp),%eax
0872a047 +0x2d77:  mov    0x4(%esi),%edx
0872a04a +0x2d7a:  mov    0x8(%esi),%ecx
0872a04d +0x2d7d:  mov    %edx,(%ebx)
0872a04f +0x2d7f:  mov    -0xc(%edx),%edx
0872a052 +0x2d82:  mov    %ecx,(%ebx,%edx,1)
0872a055 +0x2d85:  jmp    0872a031 <+0x2d61>
0872a057 +0x2d87:  jmp    0872a047 <+0x2d77>
0872a059 +0x2d89:  nop
0872a05a +0x2d8a:  nop
0872a05b +0x2d8b:  nop
0872a05c +0x2d8c:  nop
0872a05d +0x2d8d:  nop
0872a05e +0x2d8e:  nop
0872a05f +0x2d8f:  nop
0872a060 +0x2d90:  push   %ebp
0872a061 +0x2d91:  mov    %esp,%ebp
0872a063 +0x2d93:  sub    $0x38,%esp
0872a066 +0x2d96:  mov    %ebx,-0xc(%ebp)
0872a069 +0x2d99:  mov    0x8(%ebp),%ebx
0872a06c +0x2d9c:  mov    %esi,-0x8(%ebp)
0872a06f +0x2d9f:  mov    %edi,-0x4(%ebp)
0872a072 +0x2da2:  lea    0x8c(%ebx),%esi
0872a078 +0x2da8:  mov    %esi,(%esp)
0872a07b +0x2dab:  call   087270f0 <_ZNSt8ios_baseC1Ev>  ; std::ios_base::ios_base()
0872a080 +0x2db0:  mov    &_ZTTSt14basic_ofstreamIcSt11char_traitsIcEE+0x4,%edi
0872a086 +0x2db6:  movb   $0x0,0x74(%esi)
0872a08a +0x2dba:  mov    &_ZTTSt14basic_ofstreamIcSt11char_traitsIcEE+0x8,%edx
0872a090 +0x2dc0:  movl   $&_ZTVSt9basic_iosIcSt11char_traitsIcEE+0x8,0x8c(%ebx)
0872a09a +0x2dca:  movl   $0x0,0x70(%esi)
0872a0a1 +0x2dd1:  mov    -0xc(%edi),%eax
0872a0a4 +0x2dd4:  mov    %edi,(%ebx)
0872a0a6 +0x2dd6:  movb   $0x0,0x75(%esi)
0872a0aa +0x2dda:  movl   $0x0,0x78(%esi)
0872a0b1 +0x2de1:  mov    %edx,(%ebx,%eax,1)
0872a0b4 +0x2de4:  movl   $0x0,0x7c(%esi)
0872a0bb +0x2deb:  movl   $0x0,0x80(%esi)
0872a0c5 +0x2df5:  movl   $0x0,0x84(%esi)
0872a0cf +0x2dff:  movl   $0x0,0x4(%esp)
0872a0d7 +0x2e07:  mov    (%ebx),%eax
0872a0d9 +0x2e09:  mov    -0xc(%eax),%eax
0872a0dc +0x2e0c:  lea    (%ebx,%eax,1),%eax
0872a0df +0x2e0f:  mov    %eax,(%esp)
0872a0e2 +0x2e12:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
0872a0e7 +0x2e17:  lea    0x4(%ebx),%ecx
0872a0ea +0x2e1a:  movl   $&_ZTVSt14basic_ofstreamIcSt11char_traitsIcEE+0xc,(%ebx)
0872a0f0 +0x2e20:  movl   $&_ZTVSt14basic_ofstreamIcSt11char_traitsIcEE+0x20,0x8c(%ebx)
0872a0fa +0x2e2a:  mov    %ecx,-0x1c(%ebp)
0872a0fd +0x2e2d:  mov    %ecx,(%esp)
0872a100 +0x2e30:  call   08727c40 <+0x970>
0872a105 +0x2e35:  mov    -0x1c(%ebp),%eax
0872a108 +0x2e38:  mov    %esi,(%esp)
0872a10b +0x2e3b:  mov    %eax,0x4(%esp)
0872a10f +0x2e3f:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
0872a114 +0x2e44:  mov    -0xc(%ebp),%ebx
0872a117 +0x2e47:  mov    -0x8(%ebp),%esi
0872a11a +0x2e4a:  mov    -0x4(%ebp),%edi
0872a11d +0x2e4d:  mov    %ebp,%esp
0872a11f +0x2e4f:  pop    %ebp
0872a120 +0x2e50:  ret
0872a121 +0x2e51:  mov    %eax,-0x20(%ebp)
0872a124 +0x2e54:  mov    %esi,(%esp)
0872a127 +0x2e57:  call   086e0c10 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xb70>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xb70
0872a12c +0x2e5c:  mov    -0x20(%ebp),%eax
0872a12f +0x2e5f:  mov    %eax,(%esp)
0872a132 +0x2e62:  call   08ae3750 <_Unwind_Resume>
0872a137 +0x2e67:  mov    -0x1c(%ebp),%edx
0872a13a +0x2e6a:  mov    %eax,-0x20(%ebp)
0872a13d +0x2e6d:  mov    %edx,(%esp)
0872a140 +0x2e70:  call   087291d0 <+0x1f00>
0872a145 +0x2e75:  mov    -0x20(%ebp),%eax
0872a148 +0x2e78:  mov    -0xc(%edi),%edx
0872a14b +0x2e7b:  mov    &_ZTTSt14basic_ofstreamIcSt11char_traitsIcEE+0x8,%ecx
0872a151 +0x2e81:  mov    %edi,(%ebx)
0872a153 +0x2e83:  mov    %ecx,(%ebx,%edx,1)
0872a156 +0x2e86:  jmp    0872a121 <+0x2e51>
0872a158 +0x2e88:  jmp    0872a148 <+0x2e78>
0872a15a +0x2e8a:  nop
0872a15b +0x2e8b:  nop
0872a15c +0x2e8c:  nop
0872a15d +0x2e8d:  nop
0872a15e +0x2e8e:  nop
0872a15f +0x2e8f:  nop
0872a160 +0x2e90:  push   %ebp
0872a161 +0x2e91:  mov    %esp,%ebp
0872a163 +0x2e93:  sub    $0x38,%esp
0872a166 +0x2e96:  mov    %esi,-0x8(%ebp)
0872a169 +0x2e99:  mov    0xc(%ebp),%esi
0872a16c +0x2e9c:  mov    %ebx,-0xc(%ebp)
0872a16f +0x2e9f:  mov    0x8(%ebp),%ebx
0872a172 +0x2ea2:  mov    %edi,-0x4(%ebp)
0872a175 +0x2ea5:  mov    0x4(%esi),%eax
0872a178 +0x2ea8:  mov    0x8(%esi),%edx
0872a17b +0x2eab:  mov    %eax,(%ebx)
0872a17d +0x2ead:  mov    -0xc(%eax),%eax
0872a180 +0x2eb0:  mov    %edx,(%ebx,%eax,1)
0872a183 +0x2eb3:  movl   $0x0,0x4(%esp)
0872a18b +0x2ebb:  mov    (%ebx),%eax
0872a18d +0x2ebd:  mov    -0xc(%eax),%eax
0872a190 +0x2ec0:  lea    (%ebx,%eax,1),%eax
0872a193 +0x2ec3:  mov    %eax,(%esp)
0872a196 +0x2ec6:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
0872a19b +0x2ecb:  mov    (%esi),%eax
0872a19d +0x2ecd:  lea    0x4(%ebx),%edi
0872a1a0 +0x2ed0:  mov    0xc(%esi),%edx
0872a1a3 +0x2ed3:  mov    %eax,(%ebx)
0872a1a5 +0x2ed5:  mov    -0xc(%eax),%eax
0872a1a8 +0x2ed8:  mov    %edx,(%ebx,%eax,1)
0872a1ab +0x2edb:  mov    %edi,(%esp)
0872a1ae +0x2ede:  call   08727c40 <+0x970>
0872a1b3 +0x2ee3:  mov    %edi,0x4(%esp)
0872a1b7 +0x2ee7:  mov    (%ebx),%eax
0872a1b9 +0x2ee9:  mov    -0xc(%eax),%eax
0872a1bc +0x2eec:  lea    (%ebx,%eax,1),%eax
0872a1bf +0x2eef:  mov    %eax,(%esp)
0872a1c2 +0x2ef2:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
0872a1c7 +0x2ef7:  mov    -0xc(%ebp),%ebx
0872a1ca +0x2efa:  mov    -0x8(%ebp),%esi
0872a1cd +0x2efd:  mov    -0x4(%ebp),%edi
0872a1d0 +0x2f00:  mov    %ebp,%esp
0872a1d2 +0x2f02:  pop    %ebp
0872a1d3 +0x2f03:  ret
0872a1d4 +0x2f04:  mov    %eax,(%esp)
0872a1d7 +0x2f07:  call   08ae3750 <_Unwind_Resume>
0872a1dc +0x2f0c:  mov    %eax,-0x1c(%ebp)
0872a1df +0x2f0f:  mov    %edi,(%esp)
0872a1e2 +0x2f12:  call   087291d0 <+0x1f00>
0872a1e7 +0x2f17:  mov    -0x1c(%ebp),%eax
0872a1ea +0x2f1a:  mov    0x4(%esi),%edx
0872a1ed +0x2f1d:  mov    0x8(%esi),%ecx
0872a1f0 +0x2f20:  mov    %edx,(%ebx)
0872a1f2 +0x2f22:  mov    -0xc(%edx),%edx
0872a1f5 +0x2f25:  mov    %ecx,(%ebx,%edx,1)
0872a1f8 +0x2f28:  jmp    0872a1d4 <+0x2f04>
0872a1fa +0x2f2a:  jmp    0872a1ea <+0x2f1a>
0872a1fc +0x2f2c:  nop
0872a1fd +0x2f2d:  nop
0872a1fe +0x2f2e:  nop
0872a1ff +0x2f2f:  nop
0872a200 +0x2f30:  push   %ebp
0872a201 +0x2f31:  mov    %esp,%ebp
0872a203 +0x2f33:  push   %edi
0872a204 +0x2f34:  push   %esi
0872a205 +0x2f35:  push   %ebx
0872a206 +0x2f36:  sub    $0x2c,%esp
0872a209 +0x2f39:  mov    0x8(%ebp),%ebx
0872a20c +0x2f3c:  lea    0x90(%ebx),%esi
0872a212 +0x2f42:  mov    %esi,(%esp)
0872a215 +0x2f45:  call   087270f0 <_ZNSt8ios_baseC1Ev>  ; std::ios_base::ios_base()
0872a21a +0x2f4a:  mov    &_ZTTSt14basic_ifstreamIcSt11char_traitsIcEE+0x4,%eax
0872a21f +0x2f4f:  movb   $0x0,0x74(%esi)
0872a223 +0x2f53:  mov    &_ZTTSt14basic_ifstreamIcSt11char_traitsIcEE+0x8,%ecx
0872a229 +0x2f59:  movl   $&_ZTVSt9basic_iosIcSt11char_traitsIcEE+0x8,0x90(%ebx)
0872a233 +0x2f63:  movl   $0x0,0x70(%esi)
0872a23a +0x2f6a:  mov    %eax,(%ebx)
0872a23c +0x2f6c:  mov    -0xc(%eax),%eax
0872a23f +0x2f6f:  movb   $0x0,0x75(%esi)
0872a243 +0x2f73:  movl   $0x0,0x4(%ebx)
0872a24a +0x2f7a:  movl   $0x0,0x78(%esi)
0872a251 +0x2f81:  mov    %ecx,(%ebx,%eax,1)
0872a254 +0x2f84:  movl   $0x0,0x7c(%esi)
0872a25b +0x2f8b:  movl   $0x0,0x80(%esi)
0872a265 +0x2f95:  movl   $0x0,0x84(%esi)
0872a26f +0x2f9f:  movl   $0x0,0x4(%esp)
0872a277 +0x2fa7:  mov    (%ebx),%eax
0872a279 +0x2fa9:  mov    -0xc(%eax),%eax
0872a27c +0x2fac:  lea    (%ebx,%eax,1),%eax
0872a27f +0x2faf:  mov    %eax,(%esp)
0872a282 +0x2fb2:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
0872a287 +0x2fb7:  movl   $&_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE+0xc,(%ebx)
0872a28d +0x2fbd:  lea    0x8(%ebx),%edi
0872a290 +0x2fc0:  movl   $&_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE+0x20,0x90(%ebx)
0872a29a +0x2fca:  mov    %edi,(%esp)
0872a29d +0x2fcd:  call   08727c40 <+0x970>
0872a2a2 +0x2fd2:  mov    %edi,0x4(%esp)
0872a2a6 +0x2fd6:  mov    %esi,(%esp)
0872a2a9 +0x2fd9:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
0872a2ae +0x2fde:  mov    0x10(%ebp),%eax
0872a2b1 +0x2fe1:  or     $0x8,%eax
0872a2b4 +0x2fe4:  mov    %eax,0x8(%esp)
0872a2b8 +0x2fe8:  mov    0xc(%ebp),%eax
0872a2bb +0x2feb:  mov    (%eax),%eax
0872a2bd +0x2fed:  mov    %edi,(%esp)
0872a2c0 +0x2ff0:  mov    %eax,0x4(%esp)
0872a2c4 +0x2ff4:  call   08728df0 <+0x1b20>
0872a2c9 +0x2ff9:  test   %eax,%eax
0872a2cb +0x2ffb:  je     0872a2f0 <+0x3020>
0872a2cd +0x2ffd:  movl   $0x0,0x4(%esp)
0872a2d5 +0x3005:  mov    (%ebx),%eax
0872a2d7 +0x3007:  mov    -0xc(%eax),%eax
0872a2da +0x300a:  lea    (%ebx,%eax,1),%eax
0872a2dd +0x300d:  mov    %eax,(%esp)
0872a2e0 +0x3010:  call   086e0da0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xd00>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xd00
0872a2e5 +0x3015:  add    $0x2c,%esp
0872a2e8 +0x3018:  pop    %ebx
0872a2e9 +0x3019:  pop    %esi
0872a2ea +0x301a:  pop    %edi
0872a2eb +0x301b:  pop    %ebp
0872a2ec +0x301c:  ret
0872a2ed +0x301d:  lea    0x0(%esi),%esi
0872a2f0 +0x3020:  mov    (%ebx),%eax
0872a2f2 +0x3022:  mov    -0xc(%eax),%edx
0872a2f5 +0x3025:  add    %ebx,%edx
0872a2f7 +0x3027:  mov    0x14(%edx),%eax
0872a2fa +0x302a:  mov    %edx,(%esp)
0872a2fd +0x302d:  or     $0x4,%eax
0872a300 +0x3030:  mov    %eax,0x4(%esp)
0872a304 +0x3034:  call   086e0da0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xd00>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xd00
0872a309 +0x3039:  add    $0x2c,%esp
0872a30c +0x303c:  pop    %ebx
0872a30d +0x303d:  pop    %esi
0872a30e +0x303e:  pop    %edi
0872a30f +0x303f:  pop    %ebp
0872a310 +0x3040:  ret
0872a311 +0x3041:  mov    %eax,-0x1c(%ebp)
0872a314 +0x3044:  mov    %esi,(%esp)
0872a317 +0x3047:  call   086e0c10 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xb70>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xb70
0872a31c +0x304c:  mov    -0x1c(%ebp),%eax
0872a31f +0x304f:  mov    %eax,(%esp)
0872a322 +0x3052:  call   08ae3750 <_Unwind_Resume>
0872a327 +0x3057:  mov    %eax,-0x1c(%ebp)
0872a32a +0x305a:  mov    %edi,(%esp)
0872a32d +0x305d:  call   087291d0 <+0x1f00>
0872a332 +0x3062:  mov    -0x1c(%ebp),%eax
0872a335 +0x3065:  mov    &_ZTTSt14basic_ifstreamIcSt11char_traitsIcEE+0x4,%edx
0872a33b +0x306b:  mov    &_ZTTSt14basic_ifstreamIcSt11char_traitsIcEE+0x8,%ecx
0872a341 +0x3071:  mov    %edx,(%ebx)
0872a343 +0x3073:  mov    -0xc(%edx),%edx
0872a346 +0x3076:  movl   $0x0,0x4(%ebx)
0872a34d +0x307d:  mov    %ecx,(%ebx,%edx,1)
0872a350 +0x3080:  jmp    0872a311 <+0x3041>
0872a352 +0x3082:  jmp    0872a335 <+0x3065>
0872a354 +0x3084:  nop
0872a355 +0x3085:  nop
0872a356 +0x3086:  nop
0872a357 +0x3087:  nop
0872a358 +0x3088:  nop
0872a359 +0x3089:  nop
0872a35a +0x308a:  nop
0872a35b +0x308b:  nop
0872a35c +0x308c:  nop
0872a35d +0x308d:  nop
0872a35e +0x308e:  nop
0872a35f +0x308f:  nop
0872a360 +0x3090:  push   %ebp
0872a361 +0x3091:  mov    %esp,%ebp
0872a363 +0x3093:  push   %edi
0872a364 +0x3094:  push   %esi
0872a365 +0x3095:  push   %ebx
0872a366 +0x3096:  sub    $0x2c,%esp
0872a369 +0x3099:  mov    0xc(%ebp),%esi
0872a36c +0x309c:  mov    0x8(%ebp),%ebx
0872a36f +0x309f:  mov    0x4(%esi),%eax
0872a372 +0x30a2:  mov    0x8(%esi),%edx
0872a375 +0x30a5:  mov    %eax,(%ebx)
0872a377 +0x30a7:  mov    -0xc(%eax),%eax
0872a37a +0x30aa:  movl   $0x0,0x4(%ebx)
0872a381 +0x30b1:  mov    %edx,(%ebx,%eax,1)
0872a384 +0x30b4:  movl   $0x0,0x4(%esp)
0872a38c +0x30bc:  mov    (%ebx),%eax
0872a38e +0x30be:  mov    -0xc(%eax),%eax
0872a391 +0x30c1:  lea    (%ebx,%eax,1),%eax
0872a394 +0x30c4:  mov    %eax,(%esp)
0872a397 +0x30c7:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
0872a39c +0x30cc:  mov    (%esi),%eax
0872a39e +0x30ce:  lea    0x8(%ebx),%edi
0872a3a1 +0x30d1:  mov    0xc(%esi),%edx
0872a3a4 +0x30d4:  mov    %eax,(%ebx)
0872a3a6 +0x30d6:  mov    -0xc(%eax),%eax
0872a3a9 +0x30d9:  mov    %edx,(%ebx,%eax,1)
0872a3ac +0x30dc:  mov    %edi,(%esp)
0872a3af +0x30df:  call   08727c40 <+0x970>
0872a3b4 +0x30e4:  mov    %edi,0x4(%esp)
0872a3b8 +0x30e8:  mov    (%ebx),%eax
0872a3ba +0x30ea:  mov    -0xc(%eax),%eax
0872a3bd +0x30ed:  lea    (%ebx,%eax,1),%eax
0872a3c0 +0x30f0:  mov    %eax,(%esp)
0872a3c3 +0x30f3:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
0872a3c8 +0x30f8:  mov    0x14(%ebp),%eax
0872a3cb +0x30fb:  or     $0x8,%eax
0872a3ce +0x30fe:  mov    %eax,0x8(%esp)
0872a3d2 +0x3102:  mov    0x10(%ebp),%eax
0872a3d5 +0x3105:  mov    (%eax),%eax
0872a3d7 +0x3107:  mov    %edi,(%esp)
0872a3da +0x310a:  mov    %eax,0x4(%esp)
0872a3de +0x310e:  call   08728df0 <+0x1b20>
0872a3e3 +0x3113:  test   %eax,%eax
0872a3e5 +0x3115:  je     0872a408 <+0x3138>
0872a3e7 +0x3117:  movl   $0x0,0x4(%esp)
0872a3ef +0x311f:  mov    (%ebx),%eax
0872a3f1 +0x3121:  mov    -0xc(%eax),%eax
0872a3f4 +0x3124:  lea    (%ebx,%eax,1),%eax
0872a3f7 +0x3127:  mov    %eax,(%esp)
0872a3fa +0x312a:  call   086e0da0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xd00>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xd00
0872a3ff +0x312f:  add    $0x2c,%esp
0872a402 +0x3132:  pop    %ebx
0872a403 +0x3133:  pop    %esi
0872a404 +0x3134:  pop    %edi
0872a405 +0x3135:  pop    %ebp
0872a406 +0x3136:  ret
0872a407 +0x3137:  nop
0872a408 +0x3138:  mov    (%ebx),%eax
0872a40a +0x313a:  mov    -0xc(%eax),%edx
0872a40d +0x313d:  add    %ebx,%edx
0872a40f +0x313f:  mov    0x14(%edx),%eax
0872a412 +0x3142:  mov    %edx,(%esp)
0872a415 +0x3145:  or     $0x4,%eax
0872a418 +0x3148:  mov    %eax,0x4(%esp)
0872a41c +0x314c:  call   086e0da0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xd00>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xd00
0872a421 +0x3151:  add    $0x2c,%esp
0872a424 +0x3154:  pop    %ebx
0872a425 +0x3155:  pop    %esi
0872a426 +0x3156:  pop    %edi
0872a427 +0x3157:  pop    %ebp
0872a428 +0x3158:  ret
0872a429 +0x3159:  mov    %eax,(%esp)
0872a42c +0x315c:  call   08ae3750 <_Unwind_Resume>
0872a431 +0x3161:  mov    %eax,-0x1c(%ebp)
0872a434 +0x3164:  mov    %edi,(%esp)
0872a437 +0x3167:  call   087291d0 <+0x1f00>
0872a43c +0x316c:  mov    -0x1c(%ebp),%eax
0872a43f +0x316f:  mov    0x4(%esi),%edx
0872a442 +0x3172:  mov    0x8(%esi),%ecx
0872a445 +0x3175:  mov    %edx,(%ebx)
0872a447 +0x3177:  mov    -0xc(%edx),%edx
0872a44a +0x317a:  movl   $0x0,0x4(%ebx)
0872a451 +0x3181:  mov    %ecx,(%ebx,%edx,1)
0872a454 +0x3184:  jmp    0872a429 <+0x3159>
0872a456 +0x3186:  jmp    0872a43f <+0x316f>
0872a458 +0x3188:  nop
0872a459 +0x3189:  nop
0872a45a +0x318a:  nop
0872a45b +0x318b:  nop
0872a45c +0x318c:  nop
0872a45d +0x318d:  nop
0872a45e +0x318e:  nop
0872a45f +0x318f:  nop
0872a460 +0x3190:  push   %ebp
0872a461 +0x3191:  mov    %esp,%ebp
0872a463 +0x3193:  push   %edi
0872a464 +0x3194:  push   %esi
0872a465 +0x3195:  push   %ebx
0872a466 +0x3196:  sub    $0x2c,%esp
0872a469 +0x3199:  mov    0x8(%ebp),%ebx
0872a46c +0x319c:  lea    0x90(%ebx),%esi
0872a472 +0x31a2:  mov    %esi,(%esp)
0872a475 +0x31a5:  call   087270f0 <_ZNSt8ios_baseC1Ev>  ; std::ios_base::ios_base()
0872a47a +0x31aa:  mov    &_ZTTSt14basic_ifstreamIcSt11char_traitsIcEE+0x4,%eax
0872a47f +0x31af:  movb   $0x0,0x74(%esi)
0872a483 +0x31b3:  mov    &_ZTTSt14basic_ifstreamIcSt11char_traitsIcEE+0x8,%ecx
0872a489 +0x31b9:  movl   $&_ZTVSt9basic_iosIcSt11char_traitsIcEE+0x8,0x90(%ebx)
0872a493 +0x31c3:  movl   $0x0,0x70(%esi)
0872a49a +0x31ca:  mov    %eax,(%ebx)
0872a49c +0x31cc:  mov    -0xc(%eax),%eax
0872a49f +0x31cf:  movb   $0x0,0x75(%esi)
0872a4a3 +0x31d3:  movl   $0x0,0x4(%ebx)
0872a4aa +0x31da:  movl   $0x0,0x78(%esi)
0872a4b1 +0x31e1:  mov    %ecx,(%ebx,%eax,1)
0872a4b4 +0x31e4:  movl   $0x0,0x7c(%esi)
0872a4bb +0x31eb:  movl   $0x0,0x80(%esi)
0872a4c5 +0x31f5:  movl   $0x0,0x84(%esi)
0872a4cf +0x31ff:  movl   $0x0,0x4(%esp)
0872a4d7 +0x3207:  mov    (%ebx),%eax
0872a4d9 +0x3209:  mov    -0xc(%eax),%eax
0872a4dc +0x320c:  lea    (%ebx,%eax,1),%eax
0872a4df +0x320f:  mov    %eax,(%esp)
0872a4e2 +0x3212:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
0872a4e7 +0x3217:  movl   $&_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE+0xc,(%ebx)
0872a4ed +0x321d:  lea    0x8(%ebx),%edi
0872a4f0 +0x3220:  movl   $&_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE+0x20,0x90(%ebx)
0872a4fa +0x322a:  mov    %edi,(%esp)
0872a4fd +0x322d:  call   08727c40 <+0x970>
0872a502 +0x3232:  mov    %edi,0x4(%esp)
0872a506 +0x3236:  mov    %esi,(%esp)
0872a509 +0x3239:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
0872a50e +0x323e:  mov    0x10(%ebp),%eax
0872a511 +0x3241:  mov    %edi,(%esp)
0872a514 +0x3244:  or     $0x8,%eax
0872a517 +0x3247:  mov    %eax,0x8(%esp)
0872a51b +0x324b:  mov    0xc(%ebp),%eax
0872a51e +0x324e:  mov    %eax,0x4(%esp)
0872a522 +0x3252:  call   08728df0 <+0x1b20>
0872a527 +0x3257:  test   %eax,%eax
0872a529 +0x3259:  je     0872a550 <+0x3280>
0872a52b +0x325b:  movl   $0x0,0x4(%esp)
0872a533 +0x3263:  mov    (%ebx),%eax
0872a535 +0x3265:  mov    -0xc(%eax),%eax
0872a538 +0x3268:  lea    (%ebx,%eax,1),%eax
0872a53b +0x326b:  mov    %eax,(%esp)
0872a53e +0x326e:  call   086e0da0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xd00>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xd00
0872a543 +0x3273:  add    $0x2c,%esp
0872a546 +0x3276:  pop    %ebx
0872a547 +0x3277:  pop    %esi
0872a548 +0x3278:  pop    %edi
0872a549 +0x3279:  pop    %ebp
0872a54a +0x327a:  ret
0872a54b +0x327b:  nop
0872a54c +0x327c:  lea    0x0(%esi,%eiz,1),%esi
0872a550 +0x3280:  mov    (%ebx),%eax
0872a552 +0x3282:  mov    -0xc(%eax),%edx
0872a555 +0x3285:  add    %ebx,%edx
0872a557 +0x3287:  mov    0x14(%edx),%eax
0872a55a +0x328a:  mov    %edx,(%esp)
0872a55d +0x328d:  or     $0x4,%eax
0872a560 +0x3290:  mov    %eax,0x4(%esp)
0872a564 +0x3294:  call   086e0da0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xd00>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xd00
0872a569 +0x3299:  add    $0x2c,%esp
0872a56c +0x329c:  pop    %ebx
0872a56d +0x329d:  pop    %esi
0872a56e +0x329e:  pop    %edi
0872a56f +0x329f:  pop    %ebp
0872a570 +0x32a0:  ret
0872a571 +0x32a1:  mov    %eax,-0x1c(%ebp)
0872a574 +0x32a4:  mov    %esi,(%esp)
0872a577 +0x32a7:  call   086e0c10 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xb70>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xb70
0872a57c +0x32ac:  mov    -0x1c(%ebp),%eax
0872a57f +0x32af:  mov    %eax,(%esp)
0872a582 +0x32b2:  call   08ae3750 <_Unwind_Resume>
0872a587 +0x32b7:  mov    %eax,-0x1c(%ebp)
0872a58a +0x32ba:  mov    %edi,(%esp)
0872a58d +0x32bd:  call   087291d0 <+0x1f00>
0872a592 +0x32c2:  mov    -0x1c(%ebp),%eax
0872a595 +0x32c5:  mov    &_ZTTSt14basic_ifstreamIcSt11char_traitsIcEE+0x4,%edx
0872a59b +0x32cb:  mov    &_ZTTSt14basic_ifstreamIcSt11char_traitsIcEE+0x8,%ecx
0872a5a1 +0x32d1:  mov    %edx,(%ebx)
0872a5a3 +0x32d3:  mov    -0xc(%edx),%edx
0872a5a6 +0x32d6:  movl   $0x0,0x4(%ebx)
0872a5ad +0x32dd:  mov    %ecx,(%ebx,%edx,1)
0872a5b0 +0x32e0:  jmp    0872a571 <+0x32a1>
0872a5b2 +0x32e2:  jmp    0872a595 <+0x32c5>
0872a5b4 +0x32e4:  nop
0872a5b5 +0x32e5:  nop
0872a5b6 +0x32e6:  nop
0872a5b7 +0x32e7:  nop
0872a5b8 +0x32e8:  nop
0872a5b9 +0x32e9:  nop
0872a5ba +0x32ea:  nop
0872a5bb +0x32eb:  nop
0872a5bc +0x32ec:  nop
0872a5bd +0x32ed:  nop
0872a5be +0x32ee:  nop
0872a5bf +0x32ef:  nop
0872a5c0 +0x32f0:  push   %ebp
0872a5c1 +0x32f1:  mov    %esp,%ebp
0872a5c3 +0x32f3:  push   %edi
0872a5c4 +0x32f4:  push   %esi
0872a5c5 +0x32f5:  push   %ebx
0872a5c6 +0x32f6:  sub    $0x2c,%esp
0872a5c9 +0x32f9:  mov    0xc(%ebp),%esi
0872a5cc +0x32fc:  mov    0x8(%ebp),%ebx
0872a5cf +0x32ff:  mov    0x4(%esi),%eax
0872a5d2 +0x3302:  mov    0x8(%esi),%edx
0872a5d5 +0x3305:  mov    %eax,(%ebx)
0872a5d7 +0x3307:  mov    -0xc(%eax),%eax
0872a5da +0x330a:  movl   $0x0,0x4(%ebx)
0872a5e1 +0x3311:  mov    %edx,(%ebx,%eax,1)
0872a5e4 +0x3314:  movl   $0x0,0x4(%esp)
0872a5ec +0x331c:  mov    (%ebx),%eax
0872a5ee +0x331e:  mov    -0xc(%eax),%eax
0872a5f1 +0x3321:  lea    (%ebx,%eax,1),%eax
0872a5f4 +0x3324:  mov    %eax,(%esp)
0872a5f7 +0x3327:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
0872a5fc +0x332c:  mov    (%esi),%eax
0872a5fe +0x332e:  lea    0x8(%ebx),%edi
0872a601 +0x3331:  mov    0xc(%esi),%edx
0872a604 +0x3334:  mov    %eax,(%ebx)
0872a606 +0x3336:  mov    -0xc(%eax),%eax
0872a609 +0x3339:  mov    %edx,(%ebx,%eax,1)
0872a60c +0x333c:  mov    %edi,(%esp)
0872a60f +0x333f:  call   08727c40 <+0x970>
0872a614 +0x3344:  mov    %edi,0x4(%esp)
0872a618 +0x3348:  mov    (%ebx),%eax
0872a61a +0x334a:  mov    -0xc(%eax),%eax
0872a61d +0x334d:  lea    (%ebx,%eax,1),%eax
0872a620 +0x3350:  mov    %eax,(%esp)
0872a623 +0x3353:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
0872a628 +0x3358:  mov    0x14(%ebp),%eax
0872a62b +0x335b:  mov    %edi,(%esp)
0872a62e +0x335e:  or     $0x8,%eax
0872a631 +0x3361:  mov    %eax,0x8(%esp)
0872a635 +0x3365:  mov    0x10(%ebp),%eax
0872a638 +0x3368:  mov    %eax,0x4(%esp)
0872a63c +0x336c:  call   08728df0 <+0x1b20>
0872a641 +0x3371:  test   %eax,%eax
0872a643 +0x3373:  je     0872a668 <+0x3398>
0872a645 +0x3375:  movl   $0x0,0x4(%esp)
0872a64d +0x337d:  mov    (%ebx),%eax
0872a64f +0x337f:  mov    -0xc(%eax),%eax
0872a652 +0x3382:  lea    (%ebx,%eax,1),%eax
0872a655 +0x3385:  mov    %eax,(%esp)
0872a658 +0x3388:  call   086e0da0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xd00>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xd00
0872a65d +0x338d:  add    $0x2c,%esp
0872a660 +0x3390:  pop    %ebx
0872a661 +0x3391:  pop    %esi
0872a662 +0x3392:  pop    %edi
0872a663 +0x3393:  pop    %ebp
0872a664 +0x3394:  ret
0872a665 +0x3395:  lea    0x0(%esi),%esi
0872a668 +0x3398:  mov    (%ebx),%eax
0872a66a +0x339a:  mov    -0xc(%eax),%edx
0872a66d +0x339d:  add    %ebx,%edx
0872a66f +0x339f:  mov    0x14(%edx),%eax
0872a672 +0x33a2:  mov    %edx,(%esp)
0872a675 +0x33a5:  or     $0x4,%eax
0872a678 +0x33a8:  mov    %eax,0x4(%esp)
0872a67c +0x33ac:  call   086e0da0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xd00>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xd00
0872a681 +0x33b1:  add    $0x2c,%esp
0872a684 +0x33b4:  pop    %ebx
0872a685 +0x33b5:  pop    %esi
0872a686 +0x33b6:  pop    %edi
0872a687 +0x33b7:  pop    %ebp
0872a688 +0x33b8:  ret
0872a689 +0x33b9:  mov    %eax,(%esp)
0872a68c +0x33bc:  call   08ae3750 <_Unwind_Resume>
0872a691 +0x33c1:  mov    %eax,-0x1c(%ebp)
0872a694 +0x33c4:  mov    %edi,(%esp)
0872a697 +0x33c7:  call   087291d0 <+0x1f00>
0872a69c +0x33cc:  mov    -0x1c(%ebp),%eax
0872a69f +0x33cf:  mov    0x4(%esi),%edx
0872a6a2 +0x33d2:  mov    0x8(%esi),%ecx
0872a6a5 +0x33d5:  mov    %edx,(%ebx)
0872a6a7 +0x33d7:  mov    -0xc(%edx),%edx
0872a6aa +0x33da:  movl   $0x0,0x4(%ebx)
0872a6b1 +0x33e1:  mov    %ecx,(%ebx,%edx,1)
0872a6b4 +0x33e4:  jmp    0872a689 <+0x33b9>
0872a6b6 +0x33e6:  jmp    0872a69f <+0x33cf>
0872a6b8 +0x33e8:  nop
0872a6b9 +0x33e9:  nop
0872a6ba +0x33ea:  nop
0872a6bb +0x33eb:  nop
0872a6bc +0x33ec:  nop
0872a6bd +0x33ed:  nop
0872a6be +0x33ee:  nop
0872a6bf +0x33ef:  nop
0872a6c0 +0x33f0:  push   %ebp
0872a6c1 +0x33f1:  mov    %esp,%ebp
0872a6c3 +0x33f3:  sub    $0x38,%esp
0872a6c6 +0x33f6:  mov    %ebx,-0xc(%ebp)
0872a6c9 +0x33f9:  mov    0x8(%ebp),%ebx
0872a6cc +0x33fc:  mov    %esi,-0x8(%ebp)
0872a6cf +0x33ff:  mov    %edi,-0x4(%ebp)
0872a6d2 +0x3402:  lea    0x90(%ebx),%esi
0872a6d8 +0x3408:  mov    %esi,(%esp)
0872a6db +0x340b:  call   087270f0 <_ZNSt8ios_baseC1Ev>  ; std::ios_base::ios_base()
0872a6e0 +0x3410:  mov    &_ZTTSt14basic_ifstreamIcSt11char_traitsIcEE+0x4,%edi
0872a6e6 +0x3416:  movb   $0x0,0x74(%esi)
0872a6ea +0x341a:  mov    &_ZTTSt14basic_ifstreamIcSt11char_traitsIcEE+0x8,%edx
0872a6f0 +0x3420:  movl   $&_ZTVSt9basic_iosIcSt11char_traitsIcEE+0x8,0x90(%ebx)
0872a6fa +0x342a:  movl   $0x0,0x70(%esi)
0872a701 +0x3431:  mov    -0xc(%edi),%eax
0872a704 +0x3434:  mov    %edi,(%ebx)
0872a706 +0x3436:  movl   $0x0,0x4(%ebx)
0872a70d +0x343d:  movb   $0x0,0x75(%esi)
0872a711 +0x3441:  mov    %edx,(%ebx,%eax,1)
0872a714 +0x3444:  movl   $0x0,0x78(%esi)
0872a71b +0x344b:  movl   $0x0,0x7c(%esi)
0872a722 +0x3452:  movl   $0x0,0x80(%esi)
0872a72c +0x345c:  movl   $0x0,0x84(%esi)
0872a736 +0x3466:  movl   $0x0,0x4(%esp)
0872a73e +0x346e:  mov    (%ebx),%eax
0872a740 +0x3470:  mov    -0xc(%eax),%eax
0872a743 +0x3473:  lea    (%ebx,%eax,1),%eax
0872a746 +0x3476:  mov    %eax,(%esp)
0872a749 +0x3479:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
0872a74e +0x347e:  lea    0x8(%ebx),%ecx
0872a751 +0x3481:  movl   $&_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE+0xc,(%ebx)
0872a757 +0x3487:  movl   $&_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE+0x20,0x90(%ebx)
0872a761 +0x3491:  mov    %ecx,-0x1c(%ebp)
0872a764 +0x3494:  mov    %ecx,(%esp)
0872a767 +0x3497:  call   08727c40 <+0x970>
0872a76c +0x349c:  mov    -0x1c(%ebp),%eax
0872a76f +0x349f:  mov    %esi,(%esp)
0872a772 +0x34a2:  mov    %eax,0x4(%esp)
0872a776 +0x34a6:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
0872a77b +0x34ab:  mov    -0xc(%ebp),%ebx
0872a77e +0x34ae:  mov    -0x8(%ebp),%esi
0872a781 +0x34b1:  mov    -0x4(%ebp),%edi
0872a784 +0x34b4:  mov    %ebp,%esp
0872a786 +0x34b6:  pop    %ebp
0872a787 +0x34b7:  ret
0872a788 +0x34b8:  mov    %eax,-0x20(%ebp)
0872a78b +0x34bb:  mov    %esi,(%esp)
0872a78e +0x34be:  call   086e0c10 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xb70>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xb70
0872a793 +0x34c3:  mov    -0x20(%ebp),%eax
0872a796 +0x34c6:  mov    %eax,(%esp)
0872a799 +0x34c9:  call   08ae3750 <_Unwind_Resume>
0872a79e +0x34ce:  mov    -0x1c(%ebp),%edx
0872a7a1 +0x34d1:  mov    %eax,-0x20(%ebp)
0872a7a4 +0x34d4:  mov    %edx,(%esp)
0872a7a7 +0x34d7:  call   087291d0 <+0x1f00>
0872a7ac +0x34dc:  mov    -0x20(%ebp),%eax
0872a7af +0x34df:  mov    -0xc(%edi),%edx
0872a7b2 +0x34e2:  mov    &_ZTTSt14basic_ifstreamIcSt11char_traitsIcEE+0x8,%ecx
0872a7b8 +0x34e8:  mov    %edi,(%ebx)
0872a7ba +0x34ea:  movl   $0x0,0x4(%ebx)
0872a7c1 +0x34f1:  mov    %ecx,(%ebx,%edx,1)
0872a7c4 +0x34f4:  jmp    0872a788 <+0x34b8>
0872a7c6 +0x34f6:  jmp    0872a7af <+0x34df>
0872a7c8 +0x34f8:  nop
0872a7c9 +0x34f9:  nop
0872a7ca +0x34fa:  nop
0872a7cb +0x34fb:  nop
0872a7cc +0x34fc:  nop
0872a7cd +0x34fd:  nop
0872a7ce +0x34fe:  nop
0872a7cf +0x34ff:  nop
0872a7d0 +0x3500:  push   %ebp
0872a7d1 +0x3501:  mov    %esp,%ebp
0872a7d3 +0x3503:  sub    $0x38,%esp
0872a7d6 +0x3506:  mov    %esi,-0x8(%ebp)
0872a7d9 +0x3509:  mov    0xc(%ebp),%esi
0872a7dc +0x350c:  mov    %ebx,-0xc(%ebp)
0872a7df +0x350f:  mov    0x8(%ebp),%ebx
0872a7e2 +0x3512:  mov    %edi,-0x4(%ebp)
0872a7e5 +0x3515:  mov    0x4(%esi),%eax
0872a7e8 +0x3518:  mov    0x8(%esi),%edx
0872a7eb +0x351b:  mov    %eax,(%ebx)
0872a7ed +0x351d:  mov    -0xc(%eax),%eax
0872a7f0 +0x3520:  movl   $0x0,0x4(%ebx)
0872a7f7 +0x3527:  mov    %edx,(%ebx,%eax,1)
0872a7fa +0x352a:  movl   $0x0,0x4(%esp)
0872a802 +0x3532:  mov    (%ebx),%eax
0872a804 +0x3534:  mov    -0xc(%eax),%eax
0872a807 +0x3537:  lea    (%ebx,%eax,1),%eax
0872a80a +0x353a:  mov    %eax,(%esp)
0872a80d +0x353d:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
0872a812 +0x3542:  mov    (%esi),%eax
0872a814 +0x3544:  lea    0x8(%ebx),%edi
0872a817 +0x3547:  mov    0xc(%esi),%edx
0872a81a +0x354a:  mov    %eax,(%ebx)
0872a81c +0x354c:  mov    -0xc(%eax),%eax
0872a81f +0x354f:  mov    %edx,(%ebx,%eax,1)
0872a822 +0x3552:  mov    %edi,(%esp)
0872a825 +0x3555:  call   08727c40 <+0x970>
0872a82a +0x355a:  mov    %edi,0x4(%esp)
0872a82e +0x355e:  mov    (%ebx),%eax
0872a830 +0x3560:  mov    -0xc(%eax),%eax
0872a833 +0x3563:  lea    (%ebx,%eax,1),%eax
0872a836 +0x3566:  mov    %eax,(%esp)
0872a839 +0x3569:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
0872a83e +0x356e:  mov    -0xc(%ebp),%ebx
0872a841 +0x3571:  mov    -0x8(%ebp),%esi
0872a844 +0x3574:  mov    -0x4(%ebp),%edi
0872a847 +0x3577:  mov    %ebp,%esp
0872a849 +0x3579:  pop    %ebp
0872a84a +0x357a:  ret
0872a84b +0x357b:  mov    %eax,(%esp)
0872a84e +0x357e:  call   08ae3750 <_Unwind_Resume>
0872a853 +0x3583:  mov    %eax,-0x1c(%ebp)
0872a856 +0x3586:  mov    %edi,(%esp)
0872a859 +0x3589:  call   087291d0 <+0x1f00>
0872a85e +0x358e:  mov    -0x1c(%ebp),%eax
0872a861 +0x3591:  mov    0x4(%esi),%edx
0872a864 +0x3594:  mov    0x8(%esi),%ecx
0872a867 +0x3597:  mov    %edx,(%ebx)
0872a869 +0x3599:  mov    -0xc(%edx),%edx
0872a86c +0x359c:  movl   $0x0,0x4(%ebx)
0872a873 +0x35a3:  mov    %ecx,(%ebx,%edx,1)
0872a876 +0x35a6:  jmp    0872a84b <+0x357b>
0872a878 +0x35a8:  jmp    0872a861 <+0x3591>
0872a87a +0x35aa:  nop
0872a87b +0x35ab:  nop
0872a87c +0x35ac:  nop
0872a87d +0x35ad:  nop
0872a87e +0x35ae:  nop
0872a87f +0x35af:  nop
0872a880 +0x35b0:  mov    0x4(%esp),%eax
0872a884 +0x35b4:  mov    (%eax),%ecx
0872a886 +0x35b6:  add    -0xc(%ecx),%eax
0872a889 +0x35b9:  mov    %eax,0x4(%esp)
0872a88d +0x35bd:  jmp    0872a890 <+0x35c0>
0872a88f +0x35bf:  nop
0872a890 +0x35c0:  push   %ebp
0872a891 +0x35c1:  mov    %esp,%ebp
0872a893 +0x35c3:  sub    $0x28,%esp
0872a896 +0x35c6:  mov    %ebx,-0x8(%ebp)
0872a899 +0x35c9:  mov    0x8(%ebp),%ebx
0872a89c +0x35cc:  mov    %esi,-0x4(%ebp)
0872a89f +0x35cf:  lea    0x4(%ebx),%eax
0872a8a2 +0x35d2:  movl   $&_ZTVSt14basic_ofstreamIcSt11char_traitsIcEE+0xc,(%ebx)
0872a8a8 +0x35d8:  lea    0x8c(%ebx),%esi
0872a8ae +0x35de:  movl   $&_ZTVSt14basic_ofstreamIcSt11char_traitsIcEE+0x20,0x8c(%ebx)
0872a8b8 +0x35e8:  mov    %eax,(%esp)
0872a8bb +0x35eb:  call   087291d0 <+0x1f00>
0872a8c0 +0x35f0:  mov    &_ZTTSt14basic_ofstreamIcSt11char_traitsIcEE+0x4,%eax
0872a8c5 +0x35f5:  mov    &_ZTTSt14basic_ofstreamIcSt11char_traitsIcEE+0x8,%edx
0872a8cb +0x35fb:  mov    %eax,(%ebx)
0872a8cd +0x35fd:  mov    -0xc(%eax),%eax
0872a8d0 +0x3600:  mov    %edx,(%ebx,%eax,1)
0872a8d3 +0x3603:  movl   $&_ZTVSt9basic_iosIcSt11char_traitsIcEE+0x8,0x8c(%ebx)
0872a8dd +0x360d:  mov    %esi,(%esp)
0872a8e0 +0x3610:  call   08727070 <_ZNSt8ios_baseD1Ev>  ; std::ios_base::~ios_base()
0872a8e5 +0x3615:  mov    -0x4(%ebp),%esi
0872a8e8 +0x3618:  mov    %ebx,0x8(%ebp)
0872a8eb +0x361b:  mov    -0x8(%ebp),%ebx
0872a8ee +0x361e:  mov    %ebp,%esp
0872a8f0 +0x3620:  pop    %ebp
0872a8f1 +0x3621:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
0872a8f6 +0x3626:  mov    &_ZTTSt14basic_ofstreamIcSt11char_traitsIcEE+0x4,%edx
0872a8fc +0x362c:  mov    &_ZTTSt14basic_ofstreamIcSt11char_traitsIcEE+0x8,%ecx
0872a902 +0x3632:  mov    %eax,-0xc(%ebp)
0872a905 +0x3635:  mov    %edx,(%ebx)
0872a907 +0x3637:  mov    -0xc(%edx),%edx
0872a90a +0x363a:  mov    %ecx,(%ebx,%edx,1)
0872a90d +0x363d:  mov    %esi,(%esp)
0872a910 +0x3640:  call   086e0c10 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xb70>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xb70
0872a915 +0x3645:  mov    -0xc(%ebp),%eax
0872a918 +0x3648:  mov    %eax,(%esp)
0872a91b +0x364b:  call   08ae3750 <_Unwind_Resume>
0872a920 +0x3650:  mov    0x4(%esp),%eax
0872a924 +0x3654:  mov    (%eax),%ecx
0872a926 +0x3656:  add    -0xc(%ecx),%eax
0872a929 +0x3659:  mov    %eax,0x4(%esp)
0872a92d +0x365d:  jmp    0872a930 <+0x3660>
0872a92f +0x365f:  nop
0872a930 +0x3660:  push   %ebp
0872a931 +0x3661:  mov    %esp,%ebp
0872a933 +0x3663:  sub    $0x28,%esp
0872a936 +0x3666:  mov    %ebx,-0x8(%ebp)
0872a939 +0x3669:  mov    0x8(%ebp),%ebx
0872a93c +0x366c:  mov    %esi,-0x4(%ebp)
0872a93f +0x366f:  lea    0x8(%ebx),%eax
0872a942 +0x3672:  movl   $&_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE+0xc,(%ebx)
0872a948 +0x3678:  lea    0x90(%ebx),%esi
0872a94e +0x367e:  movl   $&_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE+0x20,0x90(%ebx)
0872a958 +0x3688:  mov    %eax,(%esp)
0872a95b +0x368b:  call   087291d0 <+0x1f00>
0872a960 +0x3690:  mov    &_ZTTSt14basic_ifstreamIcSt11char_traitsIcEE+0x4,%eax
0872a965 +0x3695:  mov    &_ZTTSt14basic_ifstreamIcSt11char_traitsIcEE+0x8,%edx
0872a96b +0x369b:  mov    %eax,(%ebx)
0872a96d +0x369d:  mov    -0xc(%eax),%eax
0872a970 +0x36a0:  movl   $0x0,0x4(%ebx)
0872a977 +0x36a7:  mov    %edx,(%ebx,%eax,1)
0872a97a +0x36aa:  movl   $&_ZTVSt9basic_iosIcSt11char_traitsIcEE+0x8,0x90(%ebx)
0872a984 +0x36b4:  mov    %esi,(%esp)
0872a987 +0x36b7:  call   08727070 <_ZNSt8ios_baseD1Ev>  ; std::ios_base::~ios_base()
0872a98c +0x36bc:  mov    -0x4(%ebp),%esi
0872a98f +0x36bf:  mov    %ebx,0x8(%ebp)
0872a992 +0x36c2:  mov    -0x8(%ebp),%ebx
0872a995 +0x36c5:  mov    %ebp,%esp
0872a997 +0x36c7:  pop    %ebp
0872a998 +0x36c8:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
0872a99d +0x36cd:  mov    &_ZTTSt14basic_ifstreamIcSt11char_traitsIcEE+0x4,%edx
0872a9a3 +0x36d3:  mov    &_ZTTSt14basic_ifstreamIcSt11char_traitsIcEE+0x8,%ecx
0872a9a9 +0x36d9:  mov    %eax,-0xc(%ebp)
0872a9ac +0x36dc:  mov    %edx,(%ebx)
0872a9ae +0x36de:  mov    -0xc(%edx),%edx
0872a9b1 +0x36e1:  movl   $0x0,0x4(%ebx)
0872a9b8 +0x36e8:  mov    %ecx,(%ebx,%edx,1)
0872a9bb +0x36eb:  mov    %esi,(%esp)
0872a9be +0x36ee:  call   086e0c10 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xb70>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xb70
0872a9c3 +0x36f3:  mov    -0xc(%ebp),%eax
0872a9c6 +0x36f6:  mov    %eax,(%esp)
0872a9c9 +0x36f9:  call   08ae3750 <_Unwind_Resume>
0872a9ce +0x36fe:  nop
0872a9cf +0x36ff:  nop
0872a9d0 +0x3700:  push   %ebp
0872a9d1 +0x3701:  mov    %esp,%ebp
0872a9d3 +0x3703:  push   %ebx
0872a9d4 +0x3704:  sub    $0x14,%esp
0872a9d7 +0x3707:  mov    0x8(%ebp),%ebx
0872a9da +0x370a:  lea    0xc(%ebx),%eax
0872a9dd +0x370d:  mov    %eax,(%esp)
0872a9e0 +0x3710:  call   08728c90 <+0x19c0>
0872a9e5 +0x3715:  test   %eax,%eax
0872a9e7 +0x3717:  je     0872a9f0 <+0x3720>
0872a9e9 +0x3719:  add    $0x14,%esp
0872a9ec +0x371c:  pop    %ebx
0872a9ed +0x371d:  pop    %ebp
0872a9ee +0x371e:  ret
0872a9ef +0x371f:  nop
0872a9f0 +0x3720:  mov    (%ebx),%eax
0872a9f2 +0x3722:  add    -0xc(%eax),%ebx
0872a9f5 +0x3725:  mov    0x14(%ebx),%eax
0872a9f8 +0x3728:  mov    %ebx,(%esp)
0872a9fb +0x372b:  or     $0x4,%eax
0872a9fe +0x372e:  mov    %eax,0x4(%esp)
0872aa02 +0x3732:  call   086e0da0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xd00>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xd00
0872aa07 +0x3737:  add    $0x14,%esp
0872aa0a +0x373a:  pop    %ebx
0872aa0b +0x373b:  pop    %ebp
0872aa0c +0x373c:  ret
0872aa0d +0x373d:  nop
0872aa0e +0x373e:  nop
0872aa0f +0x373f:  nop
0872aa10 +0x3740:  push   %ebp
0872aa11 +0x3741:  mov    %esp,%ebp
0872aa13 +0x3743:  push   %ebx
0872aa14 +0x3744:  sub    $0x14,%esp
0872aa17 +0x3747:  mov    0x8(%ebp),%ebx
0872aa1a +0x374a:  lea    0x4(%ebx),%eax
0872aa1d +0x374d:  mov    %eax,(%esp)
0872aa20 +0x3750:  call   08728c90 <+0x19c0>
0872aa25 +0x3755:  test   %eax,%eax
0872aa27 +0x3757:  je     0872aa30 <+0x3760>
0872aa29 +0x3759:  add    $0x14,%esp
0872aa2c +0x375c:  pop    %ebx
0872aa2d +0x375d:  pop    %ebp
0872aa2e +0x375e:  ret
0872aa2f +0x375f:  nop
0872aa30 +0x3760:  mov    (%ebx),%eax
0872aa32 +0x3762:  add    -0xc(%eax),%ebx
0872aa35 +0x3765:  mov    0x14(%ebx),%eax
0872aa38 +0x3768:  mov    %ebx,(%esp)
0872aa3b +0x376b:  or     $0x4,%eax
0872aa3e +0x376e:  mov    %eax,0x4(%esp)
0872aa42 +0x3772:  call   086e0da0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xd00>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xd00
0872aa47 +0x3777:  add    $0x14,%esp
0872aa4a +0x377a:  pop    %ebx
0872aa4b +0x377b:  pop    %ebp
0872aa4c +0x377c:  ret
0872aa4d +0x377d:  nop
0872aa4e +0x377e:  nop
0872aa4f +0x377f:  nop
0872aa50 +0x3780:  push   %ebp
0872aa51 +0x3781:  mov    %esp,%ebp
0872aa53 +0x3783:  push   %ebx
0872aa54 +0x3784:  sub    $0x14,%esp
0872aa57 +0x3787:  mov    0x8(%ebp),%ebx
0872aa5a +0x378a:  lea    0x8(%ebx),%eax
0872aa5d +0x378d:  mov    %eax,(%esp)
0872aa60 +0x3790:  call   08728c90 <+0x19c0>
0872aa65 +0x3795:  test   %eax,%eax
0872aa67 +0x3797:  je     0872aa70 <+0x37a0>
0872aa69 +0x3799:  add    $0x14,%esp
0872aa6c +0x379c:  pop    %ebx
0872aa6d +0x379d:  pop    %ebp
0872aa6e +0x379e:  ret
0872aa6f +0x379f:  nop
0872aa70 +0x37a0:  mov    (%ebx),%eax
0872aa72 +0x37a2:  add    -0xc(%eax),%ebx
0872aa75 +0x37a5:  mov    0x14(%ebx),%eax
0872aa78 +0x37a8:  mov    %ebx,(%esp)
0872aa7b +0x37ab:  or     $0x4,%eax
0872aa7e +0x37ae:  mov    %eax,0x4(%esp)
0872aa82 +0x37b2:  call   086e0da0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xd00>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xd00
0872aa87 +0x37b7:  add    $0x14,%esp
0872aa8a +0x37ba:  pop    %ebx
0872aa8b +0x37bb:  pop    %ebp
0872aa8c +0x37bc:  ret
0872aa8d +0x37bd:  nop
0872aa8e +0x37be:  nop
0872aa8f +0x37bf:  nop
0872aa90 +0x37c0:  push   %ebp
0872aa91 +0x37c1:  mov    %esp,%ebp
0872aa93 +0x37c3:  push   %esi
0872aa94 +0x37c4:  push   %ebx
0872aa95 +0x37c5:  sub    $0x40,%esp
0872aa98 +0x37c8:  mov    0x14(%ebp),%edx
0872aa9b +0x37cb:  mov    0x10(%ebp),%eax
0872aa9e +0x37ce:  mov    0x8(%ebp),%ebx
0872aaa1 +0x37d1:  mov    0xc(%ebp),%esi
0872aaa4 +0x37d4:  mov    %edx,-0x2c(%ebp)
0872aaa7 +0x37d7:  mov    %eax,-0x30(%ebp)
0872aaaa +0x37da:  mov    %gs:0x14,%edx
0872aab1 +0x37e1:  mov    %edx,-0xc(%ebp)
0872aab4 +0x37e4:  xor    %edx,%edx
0872aab6 +0x37e6:  movl   $0xffffffff,(%ebx)
0872aabc +0x37ec:  movl   $0xffffffff,0x4(%ebx)
0872aac3 +0x37f3:  movl   $0x0,0x8(%ebx)
0872aaca +0x37fa:  movl   $0x0,0xc(%ebx)
0872aad1 +0x3801:  mov    %esi,(%esp)
0872aad4 +0x3804:  call   08728590 <+0x12c0>
0872aad9 +0x3809:  test   %al,%al
0872aadb +0x380b:  jne    0872aaf8 <+0x3828>
0872aadd +0x380d:  mov    -0xc(%ebp),%edx
0872aae0 +0x3810:  xor    %gs:0x14,%edx
0872aae7 +0x3817:  mov    %ebx,%eax
0872aae9 +0x3819:  jne    0872ab9a <+0x38ca>
0872aaef +0x381f:  add    $0x40,%esp
0872aaf2 +0x3822:  pop    %ebx
0872aaf3 +0x3823:  pop    %esi
0872aaf4 +0x3824:  pop    %ebp
0872aaf5 +0x3825:  ret    $0x4
0872aaf8 +0x3828:  mov    0x18(%ebp),%eax
0872aafb +0x382b:  mov    -0x2c(%ebp),%edx
0872aafe +0x382e:  mov    %eax,0xc(%esp)
0872ab02 +0x3832:  mov    -0x30(%ebp),%eax
0872ab05 +0x3835:  mov    %edx,0x8(%esp)
0872ab09 +0x3839:  mov    %eax,0x4(%esp)
0872ab0d +0x383d:  lea    0x38(%esi),%eax
0872ab10 +0x3840:  mov    %eax,(%esp)
0872ab13 +0x3843:  call   08722880 <_ZNSt12__basic_fileIcE7seekoffExSt12_Ios_Seekdir>  ; std::__basic_file<char>::seekoff(long long, std::_Ios_Seekdir)
0872ab18 +0x3848:  movl   $0x0,-0x14(%ebp)
0872ab1f +0x384f:  movl   $0x0,-0x10(%ebp)
0872ab26 +0x3856:  mov    %edx,%ecx
0872ab28 +0x3858:  mov    %eax,%edx
0872ab2a +0x385a:  mov    %ecx,-0x18(%ebp)
0872ab2d +0x385d:  mov    %eax,-0x1c(%ebp)
0872ab30 +0x3860:  mov    %eax,(%ebx)
0872ab32 +0x3862:  mov    -0x18(%ebp),%eax
0872ab35 +0x3865:  mov    %eax,0x4(%ebx)
0872ab38 +0x3868:  mov    -0x14(%ebp),%ecx
0872ab3b +0x386b:  and    %edx,%eax
0872ab3d +0x386d:  cmp    $0xffffffff,%eax
0872ab40 +0x3870:  mov    %ecx,0x8(%ebx)
0872ab43 +0x3873:  mov    -0x10(%ebp),%ecx
0872ab46 +0x3876:  mov    %ecx,0xc(%ebx)
0872ab49 +0x3879:  je     0872aadd <+0x380d>
0872ab4b +0x387b:  mov    0x78(%esi),%eax
0872ab4e +0x387e:  movb   $0x0,0x65(%esi)
0872ab52 +0x3882:  movb   $0x0,0x66(%esi)
0872ab56 +0x3886:  movl   $0x0,0x14(%esi)
0872ab5d +0x388d:  mov    %eax,0x84(%esi)
0872ab63 +0x3893:  mov    %eax,0x80(%esi)
0872ab69 +0x3899:  mov    0x5c(%esi),%eax
0872ab6c +0x389c:  movl   $0x0,0x10(%esi)
0872ab73 +0x38a3:  movl   $0x0,0x18(%esi)
0872ab7a +0x38aa:  mov    %eax,0x4(%esi)
0872ab7d +0x38ad:  mov    %eax,0x8(%esi)
0872ab80 +0x38b0:  mov    %eax,0xc(%esi)
0872ab83 +0x38b3:  mov    0x1c(%ebp),%eax
0872ab86 +0x38b6:  mov    0x20(%ebp),%edx
0872ab89 +0x38b9:  mov    %eax,0x4c(%esi)
0872ab8c +0x38bc:  mov    %edx,0x50(%esi)
0872ab8f +0x38bf:  mov    %eax,0x8(%ebx)
0872ab92 +0x38c2:  mov    %edx,0xc(%ebx)
0872ab95 +0x38c5:  jmp    0872aadd <+0x380d>
0872ab9a +0x38ca:  call   0807d980 <_init+0x278>
0872ab9f +0x38cf:  nop
0872aba0 +0x38d0:  push   %ebp
0872aba1 +0x38d1:  mov    %esp,%ebp
0872aba3 +0x38d3:  push   %esi
0872aba4 +0x38d4:  push   %ebx
0872aba5 +0x38d5:  sub    $0x40,%esp
0872aba8 +0x38d8:  mov    0x8(%ebp),%esi
0872abab +0x38db:  mov    0x10(%ebp),%eax
0872abae +0x38de:  mov    0x14(%ebp),%edx
0872abb1 +0x38e1:  mov    0xc(%ebp),%ebx
0872abb4 +0x38e4:  movl   $0xffffffff,(%esi)
0872abba +0x38ea:  mov    %eax,-0x20(%ebp)
0872abbd +0x38ed:  mov    %edx,-0x1c(%ebp)
0872abc0 +0x38f0:  movl   $0xffffffff,0x4(%esi)
0872abc7 +0x38f7:  lea    0x38(%ebx),%eax
0872abca +0x38fa:  movl   $0x0,0x8(%esi)
0872abd1 +0x3901:  movl   $0x0,0xc(%esi)
0872abd8 +0x3908:  mov    %eax,(%esp)
0872abdb +0x390b:  call   08722580 <_ZNKSt12__basic_fileIcE7is_openEv>  ; std::__basic_file<char>::is_open() const
0872abe0 +0x3910:  test   %al,%al
0872abe2 +0x3912:  je     0872ac37 <+0x3967>
0872abe4 +0x3914:  cmpb   $0x0,0x70(%ebx)
0872abe8 +0x3918:  jne    0872ac48 <+0x3978>
0872abea +0x391a:  mov    0x18(%ebp),%edx
0872abed +0x391d:  lea    -0x18(%ebp),%eax
0872abf0 +0x3920:  mov    0x1c(%ebp),%ecx
0872abf3 +0x3923:  mov    %eax,(%esp)
0872abf6 +0x3926:  movl   $0x0,0x10(%esp)
0872abfe +0x392e:  mov    %edx,0x14(%esp)
0872ac02 +0x3932:  mov    -0x20(%ebp),%edx
0872ac05 +0x3935:  mov    %ecx,0x18(%esp)
0872ac09 +0x3939:  mov    -0x1c(%ebp),%ecx
0872ac0c +0x393c:  mov    %ebx,0x4(%esp)
0872ac10 +0x3940:  mov    %edx,0x8(%esp)
0872ac14 +0x3944:  mov    %ecx,0xc(%esp)
0872ac18 +0x3948:  call   0872aa90 <+0x37c0>
0872ac1d +0x394d:  mov    -0x18(%ebp),%eax
0872ac20 +0x3950:  mov    %eax,(%esi)
0872ac22 +0x3952:  mov    -0x14(%ebp),%eax
0872ac25 +0x3955:  sub    $0x4,%esp
0872ac28 +0x3958:  mov    %eax,0x4(%esi)
0872ac2b +0x395b:  mov    -0x10(%ebp),%eax
0872ac2e +0x395e:  mov    %eax,0x8(%esi)
0872ac31 +0x3961:  mov    -0xc(%ebp),%eax
0872ac34 +0x3964:  mov    %eax,0xc(%esi)
0872ac37 +0x3967:  lea    -0x8(%ebp),%esp
0872ac3a +0x396a:  mov    %esi,%eax
0872ac3c +0x396c:  pop    %ebx
0872ac3d +0x396d:  pop    %esi
0872ac3e +0x396e:  pop    %ebp
0872ac3f +0x396f:  ret    $0x4
0872ac42 +0x3972:  lea    0x0(%esi),%esi
0872ac48 +0x3978:  mov    0x8(%ebx),%eax
0872ac4b +0x397b:  cmp    0x4(%ebx),%eax
0872ac4e +0x397e:  mov    0x6c(%ebx),%ecx
0872ac51 +0x3981:  mov    0x5c(%ebx),%edx
0872ac54 +0x3984:  setne  %al
0872ac57 +0x3987:  movzbl %al,%eax
0872ac5a +0x398a:  add    0x68(%ebx),%eax
0872ac5d +0x398d:  mov    %edx,0x4(%ebx)
0872ac60 +0x3990:  mov    %ecx,0xc(%ebx)
0872ac63 +0x3993:  mov    %eax,0x68(%ebx)
0872ac66 +0x3996:  mov    %eax,0x8(%ebx)
0872ac69 +0x3999:  movb   $0x0,0x70(%ebx)
0872ac6d +0x399d:  jmp    0872abea <+0x391a>
0872ac72 +0x39a2:  cmp    $0xffffffff,%edx
0872ac75 +0x39a5:  je     0872ac7f <+0x39af>
0872ac77 +0x39a7:  mov    %eax,(%esp)
0872ac7a +0x39aa:  call   08ae3750 <_Unwind_Resume>
0872ac7f +0x39af:  mov    %eax,(%esp)
0872ac82 +0x39b2:  call   08723df0 <__cxa_call_unexpected>
0872ac87 +0x39b7:  nop
0872ac88 +0x39b8:  nop
0872ac89 +0x39b9:  nop
0872ac8a +0x39ba:  nop
0872ac8b +0x39bb:  nop
0872ac8c +0x39bc:  nop
0872ac8d +0x39bd:  nop
0872ac8e +0x39be:  nop
0872ac8f +0x39bf:  nop
0872ac90 +0x39c0:  push   %ebp
0872ac91 +0x39c1:  mov    %esp,%ebp
0872ac93 +0x39c3:  push   %edi
0872ac94 +0x39c4:  xor    %edi,%edi
0872ac96 +0x39c6:  push   %esi
0872ac97 +0x39c7:  push   %ebx
0872ac98 +0x39c8:  sub    $0x6c,%esp
0872ac9b +0x39cb:  mov    0x10(%ebp),%eax
0872ac9e +0x39ce:  mov    0xc(%ebp),%ebx
0872aca1 +0x39d1:  mov    0x14(%ebp),%edx
0872aca4 +0x39d4:  mov    0x8(%ebp),%esi
0872aca7 +0x39d7:  mov    %eax,-0x38(%ebp)
0872acaa +0x39da:  mov    0x74(%ebx),%eax
0872acad +0x39dd:  mov    %edx,-0x3c(%ebp)
0872acb0 +0x39e0:  test   %eax,%eax
0872acb2 +0x39e2:  je     0872acc6 <+0x39f6>
0872acb4 +0x39e4:  mov    (%eax),%edx
0872acb6 +0x39e6:  mov    %eax,(%esp)
0872acb9 +0x39e9:  call   *0x14(%edx)
0872acbc +0x39ec:  test   %eax,%eax
0872acbe +0x39ee:  mov    %eax,%edi
0872acc0 +0x39f0:  js     0872adb8 <+0x3ae8>
0872acc6 +0x39f6:  test   %edi,%edi
0872acc8 +0x39f8:  setle  %al
0872accb +0x39fb:  movl   $0x0,0x8(%esi)
0872acd2 +0x3a02:  movl   $0x0,0xc(%esi)
0872acd9 +0x3a09:  mov    -0x38(%ebp),%ecx
0872acdc +0x3a0c:  or     -0x3c(%ebp),%ecx
0872acdf +0x3a0f:  movl   $0xffffffff,(%esi)
0872ace5 +0x3a15:  movl   $0xffffffff,0x4(%esi)
0872acec +0x3a1c:  setne  -0x30(%ebp)
0872acf0 +0x3a20:  and    %al,-0x30(%ebp)
0872acf3 +0x3a23:  lea    0x38(%ebx),%eax
0872acf6 +0x3a26:  mov    %eax,(%esp)
0872acf9 +0x3a29:  call   08722580 <_ZNKSt12__basic_fileIcE7is_openEv>  ; std::__basic_file<char>::is_open() const
0872acfe +0x3a2e:  test   %al,%al
0872ad00 +0x3a30:  je     0872adab <+0x3adb>
0872ad06 +0x3a36:  cmpb   $0x0,-0x30(%ebp)
0872ad0a +0x3a3a:  jne    0872adab <+0x3adb>
0872ad10 +0x3a40:  cmpb   $0x0,0x70(%ebx)
0872ad14 +0x3a44:  jne    0872adc8 <+0x3af8>
0872ad1a +0x3a4a:  mov    0x48(%ebx),%edx
0872ad1d +0x3a4d:  mov    0x44(%ebx),%eax
0872ad20 +0x3a50:  mov    %edi,-0x50(%ebp)
0872ad23 +0x3a53:  mov    %edx,-0x2c(%ebp)
0872ad26 +0x3a56:  mov    %edi,%edx
0872ad28 +0x3a58:  mov    -0x38(%ebp),%edi
0872ad2b +0x3a5b:  sar    $0x1f,%edx
0872ad2e +0x3a5e:  mov    %eax,-0x30(%ebp)
0872ad31 +0x3a61:  mov    -0x3c(%ebp),%eax
0872ad34 +0x3a64:  imul   -0x50(%ebp),%eax
0872ad38 +0x3a68:  mov    %edx,-0x4c(%ebp)
0872ad3b +0x3a6b:  imul   -0x4c(%ebp),%edi
0872ad3f +0x3a6f:  add    %eax,%edi
0872ad41 +0x3a71:  mov    -0x38(%ebp),%eax
0872ad44 +0x3a74:  mull   -0x50(%ebp)
0872ad47 +0x3a77:  add    %edi,%edx
0872ad49 +0x3a79:  cmpb   $0x0,0x65(%ebx)
0872ad4d +0x3a7d:  mov    %eax,-0x50(%ebp)
0872ad50 +0x3a80:  mov    %edx,-0x4c(%ebp)
0872ad53 +0x3a83:  je     0872ad5f <+0x3a8f>
0872ad55 +0x3a85:  cmpl   $0x1,0x18(%ebp)
0872ad59 +0x3a89:  je     0872adf8 <+0x3b28>
0872ad5f +0x3a8f:  mov    -0x2c(%ebp),%ecx
0872ad62 +0x3a92:  lea    -0x28(%ebp),%eax
0872ad65 +0x3a95:  mov    -0x30(%ebp),%edx
0872ad68 +0x3a98:  mov    %eax,(%esp)
0872ad6b +0x3a9b:  mov    %ebx,0x4(%esp)
0872ad6f +0x3a9f:  mov    %ecx,0x18(%esp)
0872ad73 +0x3aa3:  mov    0x18(%ebp),%ecx
0872ad76 +0x3aa6:  mov    %edx,0x14(%esp)
0872ad7a +0x3aaa:  mov    -0x50(%ebp),%edx
0872ad7d +0x3aad:  mov    %ecx,0x10(%esp)
0872ad81 +0x3ab1:  mov    -0x4c(%ebp),%ecx
0872ad84 +0x3ab4:  mov    %edx,0x8(%esp)
0872ad88 +0x3ab8:  mov    %ecx,0xc(%esp)
0872ad8c +0x3abc:  call   0872aa90 <+0x37c0>
0872ad91 +0x3ac1:  mov    -0x28(%ebp),%eax
0872ad94 +0x3ac4:  mov    %eax,(%esi)
0872ad96 +0x3ac6:  mov    -0x24(%ebp),%eax
0872ad99 +0x3ac9:  sub    $0x4,%esp
0872ad9c +0x3acc:  mov    %eax,0x4(%esi)
0872ad9f +0x3acf:  mov    -0x20(%ebp),%eax
0872ada2 +0x3ad2:  mov    %eax,0x8(%esi)
0872ada5 +0x3ad5:  mov    -0x1c(%ebp),%eax
0872ada8 +0x3ad8:  mov    %eax,0xc(%esi)
0872adab +0x3adb:  lea    -0xc(%ebp),%esp
0872adae +0x3ade:  mov    %esi,%eax
0872adb0 +0x3ae0:  pop    %ebx
0872adb1 +0x3ae1:  pop    %esi
0872adb2 +0x3ae2:  pop    %edi
0872adb3 +0x3ae3:  pop    %ebp
0872adb4 +0x3ae4:  ret    $0x4
0872adb7 +0x3ae7:  nop
0872adb8 +0x3ae8:  mov    $0x1,%eax
0872adbd +0x3aed:  xor    %edi,%edi
0872adbf +0x3aef:  jmp    0872accb <+0x39fb>
0872adc4 +0x3af4:  lea    0x0(%esi,%eiz,1),%esi
0872adc8 +0x3af8:  mov    0x8(%ebx),%eax
0872adcb +0x3afb:  cmp    0x4(%ebx),%eax
0872adce +0x3afe:  mov    0x6c(%ebx),%ecx
0872add1 +0x3b01:  mov    0x5c(%ebx),%edx
0872add4 +0x3b04:  setne  %al
0872add7 +0x3b07:  movzbl %al,%eax
0872adda +0x3b0a:  add    0x68(%ebx),%eax
0872addd +0x3b0d:  mov    %edx,0x4(%ebx)
0872ade0 +0x3b10:  mov    %ecx,0xc(%ebx)
0872ade3 +0x3b13:  mov    %eax,0x68(%ebx)
0872ade6 +0x3b16:  mov    %eax,0x8(%ebx)
0872ade9 +0x3b19:  movb   $0x0,0x70(%ebx)
0872aded +0x3b1d:  jmp    0872ad1a <+0x3a4a>
0872adf2 +0x3b22:  lea    0x0(%esi),%esi
0872adf8 +0x3b28:  mov    0x74(%ebx),%eax
0872adfb +0x3b2b:  mov    %eax,(%esp)
0872adfe +0x3b2e:  call   087278d0 <+0x600>
0872ae03 +0x3b33:  test   %al,%al
0872ae05 +0x3b35:  je     0872ae30 <+0x3b60>
0872ae07 +0x3b37:  mov    0x8(%ebx),%eax
0872ae0a +0x3b3a:  sub    0xc(%ebx),%eax
0872ae0d +0x3b3d:  mov    %eax,%edx
0872ae0f +0x3b3f:  sar    $0x1f,%edx
0872ae12 +0x3b42:  mov    %eax,-0x38(%ebp)
0872ae15 +0x3b45:  mov    -0x38(%ebp),%eax
0872ae18 +0x3b48:  mov    %edx,-0x34(%ebp)
0872ae1b +0x3b4b:  mov    -0x34(%ebp),%edx
0872ae1e +0x3b4e:  add    %eax,-0x50(%ebp)
0872ae21 +0x3b51:  adc    %edx,-0x4c(%ebp)
0872ae24 +0x3b54:  jmp    0872ad5f <+0x3a8f>
0872ae29 +0x3b59:  lea    0x0(%esi,%eiz,1),%esi
0872ae30 +0x3b60:  mov    0x74(%ebx),%edi
0872ae33 +0x3b63:  mov    0x8(%ebx),%eax
0872ae36 +0x3b66:  sub    0x4(%ebx),%eax
0872ae39 +0x3b69:  mov    (%edi),%ecx
0872ae3b +0x3b6b:  mov    %eax,0x10(%esp)
0872ae3f +0x3b6f:  mov    0x80(%ebx),%eax
0872ae45 +0x3b75:  mov    %eax,0xc(%esp)
0872ae49 +0x3b79:  mov    0x78(%ebx),%eax
0872ae4c +0x3b7c:  mov    %edi,(%esp)
0872ae4f +0x3b7f:  mov    %eax,0x8(%esp)
0872ae53 +0x3b83:  lea    0x54(%ebx),%eax
0872ae56 +0x3b86:  mov    %eax,0x4(%esp)
0872ae5a +0x3b8a:  call   *0x1c(%ecx)
0872ae5d +0x3b8d:  add    0x78(%ebx),%eax
0872ae60 +0x3b90:  sub    0x84(%ebx),%eax
0872ae66 +0x3b96:  mov    %eax,%edx
0872ae68 +0x3b98:  mov    %eax,-0x30(%ebp)
0872ae6b +0x3b9b:  sar    $0x1f,%edx
0872ae6e +0x3b9e:  mov    -0x30(%ebp),%eax
0872ae71 +0x3ba1:  mov    %edx,-0x2c(%ebp)
0872ae74 +0x3ba4:  mov    -0x2c(%ebp),%edx
0872ae77 +0x3ba7:  add    %eax,-0x50(%ebp)
0872ae7a +0x3baa:  adc    %edx,-0x4c(%ebp)
0872ae7d +0x3bad:  mov    0x54(%ebx),%edx
0872ae80 +0x3bb0:  mov    0x58(%ebx),%ecx
0872ae83 +0x3bb3:  mov    %edx,-0x30(%ebp)
0872ae86 +0x3bb6:  mov    %ecx,-0x2c(%ebp)
0872ae89 +0x3bb9:  jmp    0872ad5f <+0x3a8f>
0872ae8e +0x3bbe:  cmp    $0xffffffff,%edx
0872ae91 +0x3bc1:  je     0872ae9d <+0x3bcd>
0872ae93 +0x3bc3:  mov    %eax,(%esp)
0872ae96 +0x3bc6:  call   08ae3750 <_Unwind_Resume>
0872ae9b +0x3bcb:  jmp    0872ae8e <+0x3bbe>
0872ae9d +0x3bcd:  mov    %eax,(%esp)
0872aea0 +0x3bd0:  call   08723df0 <__cxa_call_unexpected>
0872aea5 +0x3bd5:  nop
0872aea6 +0x3bd6:  nop
0872aea7 +0x3bd7:  nop
0872aea8 +0x3bd8:  nop
0872aea9 +0x3bd9:  nop
0872aeaa +0x3bda:  nop
0872aeab +0x3bdb:  nop
0872aeac +0x3bdc:  nop
0872aead +0x3bdd:  nop
0872aeae +0x3bde:  nop
0872aeaf +0x3bdf:  nop
0872aeb0 +0x3be0:  push   %ebp
0872aeb1 +0x3be1:  mov    %esp,%ebp
0872aeb3 +0x3be3:  sub    $0x28,%esp
0872aeb6 +0x3be6:  mov    %ebx,-0xc(%ebp)
0872aeb9 +0x3be9:  mov    0x8(%ebp),%ebx
0872aebc +0x3bec:  mov    %esi,-0x8(%ebp)
0872aebf +0x3bef:  mov    %edi,-0x4(%ebp)
0872aec2 +0x3bf2:  lea    0x38(%ebx),%esi
0872aec5 +0x3bf5:  mov    %esi,(%esp)
0872aec8 +0x3bf8:  call   08722580 <_ZNKSt12__basic_fileIcE7is_openEv>  ; std::__basic_file<char>::is_open() const
0872aecd +0x3bfd:  test   %al,%al
0872aecf +0x3bff:  jne    0872aee8 <+0x3c18>
0872aed1 +0x3c01:  xor    %ebx,%ebx
0872aed3 +0x3c03:  mov    -0x8(%ebp),%esi
0872aed6 +0x3c06:  mov    %ebx,%eax
0872aed8 +0x3c08:  mov    -0x4(%ebp),%edi
0872aedb +0x3c0b:  mov    -0xc(%ebp),%ebx
0872aede +0x3c0e:  mov    %ebp,%esp
0872aee0 +0x3c10:  pop    %ebp
0872aee1 +0x3c11:  ret
0872aee2 +0x3c12:  lea    0x0(%esi),%esi
0872aee8 +0x3c18:  mov    %ebx,(%esp)
0872aeeb +0x3c1b:  call   08728770 <+0x14a0>
0872aef0 +0x3c20:  test   %al,%al
0872aef2 +0x3c22:  sete   %al
0872aef5 +0x3c25:  mov    %eax,%edi
0872aef7 +0x3c27:  movl   $0x0,0x40(%ebx)
0872aefe +0x3c2e:  movb   $0x0,0x74(%ebx)
0872af02 +0x3c32:  mov    %ebx,(%esp)
0872af05 +0x3c35:  call   087279b0 <+0x6e0>
0872af0a +0x3c3a:  mov    0x5c(%ebx),%eax
0872af0d +0x3c3d:  mov    0x48(%ebx),%edx
0872af10 +0x3c40:  movb   $0x0,0x65(%ebx)
0872af14 +0x3c44:  movb   $0x0,0x66(%ebx)
0872af18 +0x3c48:  mov    %eax,0x4(%ebx)
0872af1b +0x3c4b:  mov    %eax,0x8(%ebx)
0872af1e +0x3c4e:  mov    %eax,0xc(%ebx)
0872af21 +0x3c51:  mov    0x44(%ebx),%eax
0872af24 +0x3c54:  movl   $0x0,0x14(%ebx)
0872af2b +0x3c5b:  movl   $0x0,0x10(%ebx)
0872af32 +0x3c62:  movl   $0x0,0x18(%ebx)
0872af39 +0x3c69:  mov    %eax,0x4c(%ebx)
0872af3c +0x3c6c:  mov    %edx,0x50(%ebx)
0872af3f +0x3c6f:  mov    %eax,0x54(%ebx)
0872af42 +0x3c72:  mov    %edx,0x58(%ebx)
0872af45 +0x3c75:  mov    %esi,(%esp)
0872af48 +0x3c78:  call   08722690 <_ZNSt12__basic_fileIcE5closeEv>  ; std::__basic_file<char>::close()
0872af4d +0x3c7d:  test   %eax,%eax
0872af4f +0x3c7f:  je     0872aed1 <+0x3c01>
0872af51 +0x3c81:  mov    %edi,%eax
0872af53 +0x3c83:  test   %al,%al
0872af55 +0x3c85:  jne    0872aed1 <+0x3c01>
0872af5b +0x3c8b:  mov    %ebx,%eax
0872af5d +0x3c8d:  mov    -0x8(%ebp),%esi
0872af60 +0x3c90:  mov    -0xc(%ebp),%ebx
0872af63 +0x3c93:  mov    -0x4(%ebp),%edi
0872af66 +0x3c96:  mov    %ebp,%esp
0872af68 +0x3c98:  pop    %ebp
0872af69 +0x3c99:  ret
0872af6a +0x3c9a:  cmp    $0x2,%edx
0872af6d +0x3c9d:  je     0872afe7 <+0x3d17>
0872af6f +0x3c9f:  mov    %eax,(%esp)
0872af72 +0x3ca2:  call   08725ce0 <__cxa_begin_catch>
0872af77 +0x3ca7:  call   08725c30 <__cxa_end_catch>
0872af7c +0x3cac:  mov    $0x1,%edi
0872af81 +0x3cb1:  jmp    0872aef7 <+0x3c27>
0872af86 +0x3cb6:  cmp    $0xffffffff,%edx
0872af89 +0x3cb9:  mov    %eax,%edi
0872af8b +0x3cbb:  je     0872affc <+0x3d2c>
0872af8d +0x3cbd:  mov    %edi,(%esp)
0872af90 +0x3cc0:  call   08ae3750 <_Unwind_Resume>
0872af95 +0x3cc5:  mov    %eax,%edi
0872af97 +0x3cc7:  movl   $0x0,0x40(%ebx)
0872af9e +0x3cce:  movb   $0x0,0x74(%ebx)
0872afa2 +0x3cd2:  mov    %ebx,(%esp)
0872afa5 +0x3cd5:  call   087279b0 <+0x6e0>
0872afaa +0x3cda:  mov    0x5c(%ebx),%eax
0872afad +0x3cdd:  mov    0x48(%ebx),%edx
0872afb0 +0x3ce0:  movb   $0x0,0x65(%ebx)
0872afb4 +0x3ce4:  movb   $0x0,0x66(%ebx)
0872afb8 +0x3ce8:  mov    %eax,0x4(%ebx)
0872afbb +0x3ceb:  mov    %eax,0x8(%ebx)
0872afbe +0x3cee:  mov    %eax,0xc(%ebx)
0872afc1 +0x3cf1:  mov    0x44(%ebx),%eax
0872afc4 +0x3cf4:  movl   $0x0,0x14(%ebx)
0872afcb +0x3cfb:  movl   $0x0,0x10(%ebx)
0872afd2 +0x3d02:  movl   $0x0,0x18(%ebx)
0872afd9 +0x3d09:  mov    %eax,0x4c(%ebx)
0872afdc +0x3d0c:  mov    %edx,0x50(%ebx)
0872afdf +0x3d0f:  mov    %eax,0x54(%ebx)
0872afe2 +0x3d12:  mov    %edx,0x58(%ebx)
0872afe5 +0x3d15:  jmp    0872af8d <+0x3cbd>
0872afe7 +0x3d17:  mov    %eax,(%esp)
0872afea +0x3d1a:  call   08725ce0 <__cxa_begin_catch>
0872afef +0x3d1f:  mov    %esi,(%esp)
0872aff2 +0x3d22:  call   08722690 <_ZNSt12__basic_fileIcE5closeEv>  ; std::__basic_file<char>::close()
0872aff7 +0x3d27:  call   08724be0 <__cxa_rethrow>
0872affc +0x3d2c:  mov    %eax,(%esp)
0872afff +0x3d2f:  call   08723df0 <__cxa_call_unexpected>
0872b004 +0x3d34:  mov    %eax,%edi
0872b006 +0x3d36:  call   08725c30 <__cxa_end_catch>
0872b00b +0x3d3b:  jmp    0872af97 <+0x3cc7>
0872b00d +0x3d3d:  nop
0872b00e +0x3d3e:  nop
0872b00f +0x3d3f:  nop
0872b010 +0x3d40:  push   %ebp
0872b011 +0x3d41:  mov    %esp,%ebp
0872b013 +0x3d43:  push   %ebx
0872b014 +0x3d44:  sub    $0x14,%esp
0872b017 +0x3d47:  mov    0x8(%ebp),%ebx
0872b01a +0x3d4a:  lea    0xc(%ebx),%eax
0872b01d +0x3d4d:  mov    %eax,(%esp)
0872b020 +0x3d50:  call   0872aeb0 <+0x3be0>
0872b025 +0x3d55:  test   %eax,%eax
0872b027 +0x3d57:  je     0872b030 <+0x3d60>
0872b029 +0x3d59:  add    $0x14,%esp
0872b02c +0x3d5c:  pop    %ebx
0872b02d +0x3d5d:  pop    %ebp
0872b02e +0x3d5e:  ret
0872b02f +0x3d5f:  nop
0872b030 +0x3d60:  mov    (%ebx),%eax
0872b032 +0x3d62:  add    -0xc(%eax),%ebx
0872b035 +0x3d65:  mov    0x14(%ebx),%eax
0872b038 +0x3d68:  mov    %ebx,(%esp)
0872b03b +0x3d6b:  or     $0x4,%eax
0872b03e +0x3d6e:  mov    %eax,0x4(%esp)
0872b042 +0x3d72:  call   086e0cf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xc50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xc50
0872b047 +0x3d77:  add    $0x14,%esp
0872b04a +0x3d7a:  pop    %ebx
0872b04b +0x3d7b:  pop    %ebp
0872b04c +0x3d7c:  ret
0872b04d +0x3d7d:  nop
0872b04e +0x3d7e:  nop
0872b04f +0x3d7f:  nop
0872b050 +0x3d80:  push   %ebp
0872b051 +0x3d81:  mov    %esp,%ebp
0872b053 +0x3d83:  push   %ebx
0872b054 +0x3d84:  sub    $0x14,%esp
0872b057 +0x3d87:  mov    0x8(%ebp),%ebx
0872b05a +0x3d8a:  lea    0x4(%ebx),%eax
0872b05d +0x3d8d:  mov    %eax,(%esp)
0872b060 +0x3d90:  call   0872aeb0 <+0x3be0>
0872b065 +0x3d95:  test   %eax,%eax
0872b067 +0x3d97:  je     0872b070 <+0x3da0>
0872b069 +0x3d99:  add    $0x14,%esp
0872b06c +0x3d9c:  pop    %ebx
0872b06d +0x3d9d:  pop    %ebp
0872b06e +0x3d9e:  ret
0872b06f +0x3d9f:  nop
0872b070 +0x3da0:  mov    (%ebx),%eax
0872b072 +0x3da2:  add    -0xc(%eax),%ebx
0872b075 +0x3da5:  mov    0x14(%ebx),%eax
0872b078 +0x3da8:  mov    %ebx,(%esp)
0872b07b +0x3dab:  or     $0x4,%eax
0872b07e +0x3dae:  mov    %eax,0x4(%esp)
0872b082 +0x3db2:  call   086e0cf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xc50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xc50
0872b087 +0x3db7:  add    $0x14,%esp
0872b08a +0x3dba:  pop    %ebx
0872b08b +0x3dbb:  pop    %ebp
0872b08c +0x3dbc:  ret
0872b08d +0x3dbd:  nop
0872b08e +0x3dbe:  nop
0872b08f +0x3dbf:  nop
0872b090 +0x3dc0:  push   %ebp
0872b091 +0x3dc1:  mov    %esp,%ebp
0872b093 +0x3dc3:  push   %ebx
0872b094 +0x3dc4:  sub    $0x14,%esp
0872b097 +0x3dc7:  mov    0x8(%ebp),%ebx
0872b09a +0x3dca:  lea    0x8(%ebx),%eax
0872b09d +0x3dcd:  mov    %eax,(%esp)
0872b0a0 +0x3dd0:  call   0872aeb0 <+0x3be0>
0872b0a5 +0x3dd5:  test   %eax,%eax
0872b0a7 +0x3dd7:  je     0872b0b0 <+0x3de0>
0872b0a9 +0x3dd9:  add    $0x14,%esp
0872b0ac +0x3ddc:  pop    %ebx
0872b0ad +0x3ddd:  pop    %ebp
0872b0ae +0x3dde:  ret
0872b0af +0x3ddf:  nop
0872b0b0 +0x3de0:  mov    (%ebx),%eax
0872b0b2 +0x3de2:  add    -0xc(%eax),%ebx
0872b0b5 +0x3de5:  mov    0x14(%ebx),%eax
0872b0b8 +0x3de8:  mov    %ebx,(%esp)
0872b0bb +0x3deb:  or     $0x4,%eax
0872b0be +0x3dee:  mov    %eax,0x4(%esp)
0872b0c2 +0x3df2:  call   086e0cf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xc50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xc50
0872b0c7 +0x3df7:  add    $0x14,%esp
0872b0ca +0x3dfa:  pop    %ebx
0872b0cb +0x3dfb:  pop    %ebp
0872b0cc +0x3dfc:  ret
0872b0cd +0x3dfd:  nop
0872b0ce +0x3dfe:  nop
0872b0cf +0x3dff:  nop
0872b0d0 +0x3e00:  push   %ebp
0872b0d1 +0x3e01:  mov    %esp,%ebp
0872b0d3 +0x3e03:  sub    $0x58,%esp
0872b0d6 +0x3e06:  mov    %ebx,-0xc(%ebp)
0872b0d9 +0x3e09:  mov    0x8(%ebp),%ebx
0872b0dc +0x3e0c:  mov    %esi,-0x8(%ebp)
0872b0df +0x3e0f:  mov    %edi,-0x4(%ebp)
0872b0e2 +0x3e12:  mov    0xc(%ebp),%edi
0872b0e5 +0x3e15:  mov    %gs:0x14,%eax
0872b0eb +0x3e1b:  mov    %eax,-0x1c(%ebp)
0872b0ee +0x3e1e:  xor    %eax,%eax
0872b0f0 +0x3e20:  lea    0x38(%ebx),%esi
0872b0f3 +0x3e23:  mov    %esi,(%esp)
0872b0f6 +0x3e26:  call   08722580 <_ZNKSt12__basic_fileIcE7is_openEv>  ; std::__basic_file<char>::is_open() const
0872b0fb +0x3e2b:  test   %al,%al
0872b0fd +0x3e2d:  je     0872b120 <+0x3e50>
0872b0ff +0x3e2f:  xor    %eax,%eax
0872b101 +0x3e31:  mov    -0x1c(%ebp),%edx
0872b104 +0x3e34:  xor    %gs:0x14,%edx
0872b10b +0x3e3b:  jne    0872b1d7 <+0x3f07>
0872b111 +0x3e41:  mov    -0xc(%ebp),%ebx
0872b114 +0x3e44:  mov    -0x8(%ebp),%esi
0872b117 +0x3e47:  mov    -0x4(%ebp),%edi
0872b11a +0x3e4a:  mov    %ebp,%esp
0872b11c +0x3e4c:  pop    %ebp
0872b11d +0x3e4d:  ret
0872b11e +0x3e4e:  xchg   %ax,%ax
0872b120 +0x3e50:  mov    0x10(%ebp),%edx
0872b123 +0x3e53:  movl   $0x1b4,0xc(%esp)
0872b12b +0x3e5b:  mov    %edi,0x4(%esp)
0872b12f +0x3e5f:  mov    %esi,(%esp)
0872b132 +0x3e62:  mov    %edx,0x8(%esp)
0872b136 +0x3e66:  call   08722a20 <_ZNSt12__basic_fileIcE4openEPKcSt13_Ios_Openmodei>  ; std::__basic_file<char>::open(char const*, std::_Ios_Openmode, int)
0872b13b +0x3e6b:  mov    %ebx,(%esp)
0872b13e +0x3e6e:  call   08727a90 <+0x7c0>
0872b143 +0x3e73:  test   %al,%al
0872b145 +0x3e75:  je     0872b0ff <+0x3e2f>
0872b147 +0x3e77:  mov    %ebx,(%esp)
0872b14a +0x3e7a:  call   08727930 <+0x660>
0872b14f +0x3e7f:  mov    0x10(%ebp),%ecx
0872b152 +0x3e82:  movb   $0x0,0x65(%ebx)
0872b156 +0x3e86:  movb   $0x0,0x66(%ebx)
0872b15a +0x3e8a:  mov    %ecx,0x40(%ebx)
0872b15d +0x3e8d:  movl   $0xffffffff,0x4(%esp)
0872b165 +0x3e95:  mov    %ebx,(%esp)
0872b168 +0x3e98:  call   087277b0 <+0x4e0>
0872b16d +0x3e9d:  mov    0x44(%ebx),%eax
0872b170 +0x3ea0:  mov    0x48(%ebx),%edx
0872b173 +0x3ea3:  testb  $0x2,0x10(%ebp)
0872b177 +0x3ea7:  mov    %eax,0x4c(%ebx)
0872b17a +0x3eaa:  mov    %edx,0x50(%ebx)
0872b17d +0x3ead:  mov    %eax,0x54(%ebx)
0872b180 +0x3eb0:  mov    %edx,0x58(%ebx)
0872b183 +0x3eb3:  jne    0872b18c <+0x3ebc>
0872b185 +0x3eb5:  mov    %ebx,%eax
0872b187 +0x3eb7:  jmp    0872b101 <+0x3e31>
0872b18c +0x3ebc:  mov    (%ebx),%eax
0872b18e +0x3ebe:  lea    -0x2c(%ebp),%edx
0872b191 +0x3ec1:  mov    0x10(%ebp),%ecx
0872b194 +0x3ec4:  movl   $0x2,0x10(%esp)
0872b19c +0x3ecc:  movl   $0x0,0x8(%esp)
0872b1a4 +0x3ed4:  movl   $0x0,0xc(%esp)
0872b1ac +0x3edc:  mov    %ecx,0x14(%esp)
0872b1b0 +0x3ee0:  mov    %ebx,0x4(%esp)
0872b1b4 +0x3ee4:  mov    %edx,(%esp)
0872b1b7 +0x3ee7:  call   *0x10(%eax)
0872b1ba +0x3eea:  mov    -0x2c(%ebp),%eax
0872b1bd +0x3eed:  and    -0x28(%ebp),%eax
0872b1c0 +0x3ef0:  sub    $0x4,%esp
0872b1c3 +0x3ef3:  cmp    $0xffffffff,%eax
0872b1c6 +0x3ef6:  jne    0872b185 <+0x3eb5>
0872b1c8 +0x3ef8:  mov    %ebx,(%esp)
0872b1cb +0x3efb:  call   0872aeb0 <+0x3be0>
0872b1d0 +0x3f00:  xor    %eax,%eax
0872b1d2 +0x3f02:  jmp    0872b101 <+0x3e31>
0872b1d7 +0x3f07:  call   0807d980 <_init+0x278>
0872b1dc +0x3f0c:  cmp    $0xffffffff,%edx
0872b1df +0x3f0f:  nop
0872b1e0 +0x3f10:  je     0872b1ea <+0x3f1a>
0872b1e2 +0x3f12:  mov    %eax,(%esp)
0872b1e5 +0x3f15:  call   08ae3750 <_Unwind_Resume>
0872b1ea +0x3f1a:  mov    %eax,(%esp)
0872b1ed +0x3f1d:  call   08723df0 <__cxa_call_unexpected>
0872b1f2 +0x3f22:  nop
0872b1f3 +0x3f23:  nop
0872b1f4 +0x3f24:  nop
0872b1f5 +0x3f25:  nop
0872b1f6 +0x3f26:  nop
0872b1f7 +0x3f27:  nop
0872b1f8 +0x3f28:  nop
0872b1f9 +0x3f29:  nop
0872b1fa +0x3f2a:  nop
0872b1fb +0x3f2b:  nop
0872b1fc +0x3f2c:  nop
0872b1fd +0x3f2d:  nop
0872b1fe +0x3f2e:  nop
0872b1ff +0x3f2f:  nop
0872b200 +0x3f30:  push   %ebp
0872b201 +0x3f31:  mov    %esp,%ebp
0872b203 +0x3f33:  push   %ebx
0872b204 +0x3f34:  sub    $0x14,%esp
0872b207 +0x3f37:  mov    0x10(%ebp),%eax
0872b20a +0x3f3a:  mov    0x8(%ebp),%ebx
0872b20d +0x3f3d:  mov    %eax,0x8(%esp)
0872b211 +0x3f41:  mov    0xc(%ebp),%eax
0872b214 +0x3f44:  mov    %eax,0x4(%esp)
0872b218 +0x3f48:  lea    0xc(%ebx),%eax
0872b21b +0x3f4b:  mov    %eax,(%esp)
0872b21e +0x3f4e:  call   0872b0d0 <+0x3e00>
0872b223 +0x3f53:  test   %eax,%eax
0872b225 +0x3f55:  je     0872b240 <+0x3f70>
0872b227 +0x3f57:  movl   $0x0,0xc(%ebp)
0872b22e +0x3f5e:  mov    (%ebx),%eax
0872b230 +0x3f60:  add    -0xc(%eax),%ebx
0872b233 +0x3f63:  mov    %ebx,0x8(%ebp)
0872b236 +0x3f66:  add    $0x14,%esp
0872b239 +0x3f69:  pop    %ebx
0872b23a +0x3f6a:  pop    %ebp
0872b23b +0x3f6b:  jmp    086e0cf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xc50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xc50
0872b240 +0x3f70:  mov    (%ebx),%eax
0872b242 +0x3f72:  add    -0xc(%eax),%ebx
0872b245 +0x3f75:  mov    0x14(%ebx),%eax
0872b248 +0x3f78:  mov    %ebx,0x8(%ebp)
0872b24b +0x3f7b:  or     $0x4,%eax
0872b24e +0x3f7e:  mov    %eax,0xc(%ebp)
0872b251 +0x3f81:  add    $0x14,%esp
0872b254 +0x3f84:  pop    %ebx
0872b255 +0x3f85:  pop    %ebp
0872b256 +0x3f86:  jmp    086e0cf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xc50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xc50
0872b25b +0x3f8b:  nop
0872b25c +0x3f8c:  nop
0872b25d +0x3f8d:  nop
0872b25e +0x3f8e:  nop
0872b25f +0x3f8f:  nop
0872b260 +0x3f90:  push   %ebp
0872b261 +0x3f91:  mov    %esp,%ebp
0872b263 +0x3f93:  push   %ebx
0872b264 +0x3f94:  sub    $0x14,%esp
0872b267 +0x3f97:  mov    0x10(%ebp),%eax
0872b26a +0x3f9a:  mov    0x8(%ebp),%ebx
0872b26d +0x3f9d:  or     $0x10,%eax
0872b270 +0x3fa0:  mov    %eax,0x8(%esp)
0872b274 +0x3fa4:  mov    0xc(%ebp),%eax
0872b277 +0x3fa7:  mov    %eax,0x4(%esp)
0872b27b +0x3fab:  lea    0x4(%ebx),%eax
0872b27e +0x3fae:  mov    %eax,(%esp)
0872b281 +0x3fb1:  call   0872b0d0 <+0x3e00>
0872b286 +0x3fb6:  test   %eax,%eax
0872b288 +0x3fb8:  je     0872b2a8 <+0x3fd8>
0872b28a +0x3fba:  movl   $0x0,0xc(%ebp)
0872b291 +0x3fc1:  mov    (%ebx),%eax
0872b293 +0x3fc3:  add    -0xc(%eax),%ebx
0872b296 +0x3fc6:  mov    %ebx,0x8(%ebp)
0872b299 +0x3fc9:  add    $0x14,%esp
0872b29c +0x3fcc:  pop    %ebx
0872b29d +0x3fcd:  pop    %ebp
0872b29e +0x3fce:  jmp    086e0cf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xc50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xc50
0872b2a3 +0x3fd3:  nop
0872b2a4 +0x3fd4:  lea    0x0(%esi,%eiz,1),%esi
0872b2a8 +0x3fd8:  mov    (%ebx),%eax
0872b2aa +0x3fda:  add    -0xc(%eax),%ebx
0872b2ad +0x3fdd:  mov    0x14(%ebx),%eax
0872b2b0 +0x3fe0:  mov    %ebx,0x8(%ebp)
0872b2b3 +0x3fe3:  or     $0x4,%eax
0872b2b6 +0x3fe6:  mov    %eax,0xc(%ebp)
0872b2b9 +0x3fe9:  add    $0x14,%esp
0872b2bc +0x3fec:  pop    %ebx
0872b2bd +0x3fed:  pop    %ebp
0872b2be +0x3fee:  jmp    086e0cf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xc50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xc50
0872b2c3 +0x3ff3:  nop
0872b2c4 +0x3ff4:  nop
0872b2c5 +0x3ff5:  nop
0872b2c6 +0x3ff6:  nop
0872b2c7 +0x3ff7:  nop
0872b2c8 +0x3ff8:  nop
0872b2c9 +0x3ff9:  nop
0872b2ca +0x3ffa:  nop
0872b2cb +0x3ffb:  nop
0872b2cc +0x3ffc:  nop
0872b2cd +0x3ffd:  nop
0872b2ce +0x3ffe:  nop
0872b2cf +0x3fff:  nop
0872b2d0 +0x4000:  push   %ebp
0872b2d1 +0x4001:  mov    %esp,%ebp
0872b2d3 +0x4003:  push   %ebx
0872b2d4 +0x4004:  sub    $0x14,%esp
0872b2d7 +0x4007:  mov    0x10(%ebp),%eax
0872b2da +0x400a:  mov    0x8(%ebp),%ebx
0872b2dd +0x400d:  or     $0x8,%eax
0872b2e0 +0x4010:  mov    %eax,0x8(%esp)
0872b2e4 +0x4014:  mov    0xc(%ebp),%eax
0872b2e7 +0x4017:  mov    %eax,0x4(%esp)
0872b2eb +0x401b:  lea    0x8(%ebx),%eax
0872b2ee +0x401e:  mov    %eax,(%esp)
0872b2f1 +0x4021:  call   0872b0d0 <+0x3e00>
0872b2f6 +0x4026:  test   %eax,%eax
0872b2f8 +0x4028:  je     0872b318 <+0x4048>
0872b2fa +0x402a:  movl   $0x0,0xc(%ebp)
0872b301 +0x4031:  mov    (%ebx),%eax
0872b303 +0x4033:  add    -0xc(%eax),%ebx
0872b306 +0x4036:  mov    %ebx,0x8(%ebp)
0872b309 +0x4039:  add    $0x14,%esp
0872b30c +0x403c:  pop    %ebx
0872b30d +0x403d:  pop    %ebp
0872b30e +0x403e:  jmp    086e0cf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xc50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xc50
0872b313 +0x4043:  nop
0872b314 +0x4044:  lea    0x0(%esi,%eiz,1),%esi
0872b318 +0x4048:  mov    (%ebx),%eax
0872b31a +0x404a:  add    -0xc(%eax),%ebx
0872b31d +0x404d:  mov    0x14(%ebx),%eax
0872b320 +0x4050:  mov    %ebx,0x8(%ebp)
0872b323 +0x4053:  or     $0x4,%eax
0872b326 +0x4056:  mov    %eax,0xc(%ebp)
0872b329 +0x4059:  add    $0x14,%esp
0872b32c +0x405c:  pop    %ebx
0872b32d +0x405d:  pop    %ebp
0872b32e +0x405e:  jmp    086e0cf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xc50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xc50
0872b333 +0x4063:  nop
0872b334 +0x4064:  nop
0872b335 +0x4065:  nop
0872b336 +0x4066:  nop
0872b337 +0x4067:  nop
0872b338 +0x4068:  nop
0872b339 +0x4069:  nop
0872b33a +0x406a:  nop
0872b33b +0x406b:  nop
0872b33c +0x406c:  nop
0872b33d +0x406d:  nop
0872b33e +0x406e:  nop
0872b33f +0x406f:  nop
0872b340 +0x4070:  push   %ebp
0872b341 +0x4071:  mov    %esp,%ebp
0872b343 +0x4073:  sub    $0x8,%esp
0872b346 +0x4076:  mov    0xc(%ebp),%eax
0872b349 +0x4079:  mov    (%eax),%eax
0872b34b +0x407b:  mov    %eax,0xc(%ebp)
0872b34e +0x407e:  leave
0872b34f +0x407f:  jmp    0872b0d0 <+0x3e00>
0872b354 +0x4084:  nop
0872b355 +0x4085:  nop
0872b356 +0x4086:  nop
0872b357 +0x4087:  nop
0872b358 +0x4088:  nop
0872b359 +0x4089:  nop
0872b35a +0x408a:  nop
0872b35b +0x408b:  nop
0872b35c +0x408c:  nop
0872b35d +0x408d:  nop
0872b35e +0x408e:  nop
0872b35f +0x408f:  nop
0872b360 +0x4090:  push   %ebp
0872b361 +0x4091:  mov    %esp,%ebp
0872b363 +0x4093:  push   %ebx
0872b364 +0x4094:  sub    $0x14,%esp
0872b367 +0x4097:  mov    0x10(%ebp),%eax
0872b36a +0x409a:  mov    0x8(%ebp),%ebx
0872b36d +0x409d:  mov    %eax,0x8(%esp)
0872b371 +0x40a1:  mov    0xc(%ebp),%eax
0872b374 +0x40a4:  mov    (%eax),%eax
0872b376 +0x40a6:  mov    %eax,0x4(%esp)
0872b37a +0x40aa:  lea    0xc(%ebx),%eax
0872b37d +0x40ad:  mov    %eax,(%esp)
0872b380 +0x40b0:  call   0872b0d0 <+0x3e00>
0872b385 +0x40b5:  test   %eax,%eax
0872b387 +0x40b7:  je     0872b3a8 <+0x40d8>
0872b389 +0x40b9:  movl   $0x0,0xc(%ebp)
0872b390 +0x40c0:  mov    (%ebx),%eax
0872b392 +0x40c2:  add    -0xc(%eax),%ebx
0872b395 +0x40c5:  mov    %ebx,0x8(%ebp)
0872b398 +0x40c8:  add    $0x14,%esp
0872b39b +0x40cb:  pop    %ebx
0872b39c +0x40cc:  pop    %ebp
0872b39d +0x40cd:  jmp    086e0cf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xc50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xc50
0872b3a2 +0x40d2:  lea    0x0(%esi),%esi
0872b3a8 +0x40d8:  mov    (%ebx),%eax
0872b3aa +0x40da:  add    -0xc(%eax),%ebx
0872b3ad +0x40dd:  mov    0x14(%ebx),%eax
0872b3b0 +0x40e0:  mov    %ebx,0x8(%ebp)
0872b3b3 +0x40e3:  or     $0x4,%eax
0872b3b6 +0x40e6:  mov    %eax,0xc(%ebp)
0872b3b9 +0x40e9:  add    $0x14,%esp
0872b3bc +0x40ec:  pop    %ebx
0872b3bd +0x40ed:  pop    %ebp
0872b3be +0x40ee:  jmp    086e0cf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xc50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xc50
0872b3c3 +0x40f3:  nop
0872b3c4 +0x40f4:  nop
0872b3c5 +0x40f5:  nop
0872b3c6 +0x40f6:  nop
0872b3c7 +0x40f7:  nop
0872b3c8 +0x40f8:  nop
0872b3c9 +0x40f9:  nop
0872b3ca +0x40fa:  nop
0872b3cb +0x40fb:  nop
0872b3cc +0x40fc:  nop
0872b3cd +0x40fd:  nop
0872b3ce +0x40fe:  nop
0872b3cf +0x40ff:  nop
0872b3d0 +0x4100:  push   %ebp
0872b3d1 +0x4101:  mov    %esp,%ebp
0872b3d3 +0x4103:  push   %ebx
0872b3d4 +0x4104:  sub    $0x14,%esp
0872b3d7 +0x4107:  mov    0x10(%ebp),%eax
0872b3da +0x410a:  mov    0x8(%ebp),%ebx
0872b3dd +0x410d:  or     $0x10,%eax
0872b3e0 +0x4110:  mov    %eax,0x8(%esp)
0872b3e4 +0x4114:  mov    0xc(%ebp),%eax
0872b3e7 +0x4117:  mov    (%eax),%eax
0872b3e9 +0x4119:  mov    %eax,0x4(%esp)
0872b3ed +0x411d:  lea    0x4(%ebx),%eax
0872b3f0 +0x4120:  mov    %eax,(%esp)
0872b3f3 +0x4123:  call   0872b0d0 <+0x3e00>
0872b3f8 +0x4128:  test   %eax,%eax
0872b3fa +0x412a:  je     0872b418 <+0x4148>
0872b3fc +0x412c:  movl   $0x0,0xc(%ebp)
0872b403 +0x4133:  mov    (%ebx),%eax
0872b405 +0x4135:  add    -0xc(%eax),%ebx
0872b408 +0x4138:  mov    %ebx,0x8(%ebp)
0872b40b +0x413b:  add    $0x14,%esp
0872b40e +0x413e:  pop    %ebx
0872b40f +0x413f:  pop    %ebp
0872b410 +0x4140:  jmp    086e0cf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xc50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xc50
0872b415 +0x4145:  lea    0x0(%esi),%esi
0872b418 +0x4148:  mov    (%ebx),%eax
0872b41a +0x414a:  add    -0xc(%eax),%ebx
0872b41d +0x414d:  mov    0x14(%ebx),%eax
0872b420 +0x4150:  mov    %ebx,0x8(%ebp)
0872b423 +0x4153:  or     $0x4,%eax
0872b426 +0x4156:  mov    %eax,0xc(%ebp)
0872b429 +0x4159:  add    $0x14,%esp
0872b42c +0x415c:  pop    %ebx
0872b42d +0x415d:  pop    %ebp
0872b42e +0x415e:  jmp    086e0cf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xc50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xc50
0872b433 +0x4163:  nop
0872b434 +0x4164:  nop
0872b435 +0x4165:  nop
0872b436 +0x4166:  nop
0872b437 +0x4167:  nop
0872b438 +0x4168:  nop
0872b439 +0x4169:  nop
0872b43a +0x416a:  nop
0872b43b +0x416b:  nop
0872b43c +0x416c:  nop
0872b43d +0x416d:  nop
0872b43e +0x416e:  nop
0872b43f +0x416f:  nop
0872b440 +0x4170:  push   %ebp
0872b441 +0x4171:  mov    %esp,%ebp
0872b443 +0x4173:  push   %ebx
0872b444 +0x4174:  sub    $0x14,%esp
0872b447 +0x4177:  mov    0x10(%ebp),%eax
0872b44a +0x417a:  mov    0x8(%ebp),%ebx
0872b44d +0x417d:  or     $0x8,%eax
0872b450 +0x4180:  mov    %eax,0x8(%esp)
0872b454 +0x4184:  mov    0xc(%ebp),%eax
0872b457 +0x4187:  mov    (%eax),%eax
0872b459 +0x4189:  mov    %eax,0x4(%esp)
0872b45d +0x418d:  lea    0x8(%ebx),%eax
0872b460 +0x4190:  mov    %eax,(%esp)
0872b463 +0x4193:  call   0872b0d0 <+0x3e00>
0872b468 +0x4198:  test   %eax,%eax
0872b46a +0x419a:  je     0872b488 <+0x41b8>
0872b46c +0x419c:  movl   $0x0,0xc(%ebp)
0872b473 +0x41a3:  mov    (%ebx),%eax
0872b475 +0x41a5:  add    -0xc(%eax),%ebx
0872b478 +0x41a8:  mov    %ebx,0x8(%ebp)
0872b47b +0x41ab:  add    $0x14,%esp
0872b47e +0x41ae:  pop    %ebx
0872b47f +0x41af:  pop    %ebp
0872b480 +0x41b0:  jmp    086e0cf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xc50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xc50
0872b485 +0x41b5:  lea    0x0(%esi),%esi
0872b488 +0x41b8:  mov    (%ebx),%eax
0872b48a +0x41ba:  add    -0xc(%eax),%ebx
0872b48d +0x41bd:  mov    0x14(%ebx),%eax
0872b490 +0x41c0:  mov    %ebx,0x8(%ebp)
0872b493 +0x41c3:  or     $0x4,%eax
0872b496 +0x41c6:  mov    %eax,0xc(%ebp)
0872b499 +0x41c9:  add    $0x14,%esp
0872b49c +0x41cc:  pop    %ebx
0872b49d +0x41cd:  pop    %ebp
0872b49e +0x41ce:  jmp    086e0cf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xc50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xc50
0872b4a3 +0x41d3:  nop
0872b4a4 +0x41d4:  nop
0872b4a5 +0x41d5:  nop
0872b4a6 +0x41d6:  nop
0872b4a7 +0x41d7:  nop
0872b4a8 +0x41d8:  nop
0872b4a9 +0x41d9:  nop
0872b4aa +0x41da:  nop
0872b4ab +0x41db:  nop
0872b4ac +0x41dc:  nop
0872b4ad +0x41dd:  nop
0872b4ae +0x41de:  nop
0872b4af +0x41df:  nop
0872b4b0 +0x41e0:  push   %ebp
0872b4b1 +0x41e1:  mov    %esp,%ebp
0872b4b3 +0x41e3:  sub    $0x18,%esp
0872b4b6 +0x41e6:  mov    %ebx,-0x8(%ebp)
0872b4b9 +0x41e9:  mov    0x8(%ebp),%ebx
0872b4bc +0x41ec:  mov    %esi,-0x4(%ebp)
0872b4bf +0x41ef:  movl   $&_ZTVSt13basic_filebufIwSt11char_traitsIwEE+0x8,(%ebx)
0872b4c5 +0x41f5:  mov    %ebx,(%esp)
0872b4c8 +0x41f8:  call   0872aeb0 <+0x3be0>
0872b4cd +0x41fd:  lea    0x38(%ebx),%eax
0872b4d0 +0x4200:  mov    %eax,(%esp)
0872b4d3 +0x4203:  call   08722720 <_ZNSt12__basic_fileIcED1Ev>  ; std::__basic_file<char>::~__basic_file()
0872b4d8 +0x4208:  movl   $&_ZTVSt15basic_streambufIwSt11char_traitsIwEE+0x8,(%ebx)
0872b4de +0x420e:  add    $0x1c,%ebx
0872b4e1 +0x4211:  mov    -0x4(%ebp),%esi
0872b4e4 +0x4214:  mov    %ebx,0x8(%ebp)
0872b4e7 +0x4217:  mov    -0x8(%ebp),%ebx
0872b4ea +0x421a:  mov    %ebp,%esp
0872b4ec +0x421c:  pop    %ebp
0872b4ed +0x421d:  jmp    086dbcd0 <_ZNSt6localeD1Ev>  ; std::locale::~locale()
0872b4f2 +0x4222:  mov    %eax,%esi
0872b4f4 +0x4224:  lea    0x38(%ebx),%eax
0872b4f7 +0x4227:  mov    %eax,(%esp)
0872b4fa +0x422a:  call   08722720 <_ZNSt12__basic_fileIcED1Ev>  ; std::__basic_file<char>::~__basic_file()
0872b4ff +0x422f:  mov    %ebx,(%esp)
0872b502 +0x4232:  call   08705f90 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x11724>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x11724
0872b507 +0x4237:  mov    %esi,(%esp)
0872b50a +0x423a:  call   08ae3750 <_Unwind_Resume>
0872b50f +0x423f:  mov    %eax,%esi
0872b511 +0x4241:  jmp    0872b4ff <+0x422f>
0872b513 +0x4243:  nop
0872b514 +0x4244:  nop
0872b515 +0x4245:  nop
0872b516 +0x4246:  nop
0872b517 +0x4247:  nop
0872b518 +0x4248:  nop
0872b519 +0x4249:  nop
0872b51a +0x424a:  nop
0872b51b +0x424b:  nop
0872b51c +0x424c:  nop
0872b51d +0x424d:  nop
0872b51e +0x424e:  nop
0872b51f +0x424f:  nop
0872b520 +0x4250:  push   %ebp
0872b521 +0x4251:  mov    %esp,%ebp
0872b523 +0x4253:  push   %edi
0872b524 +0x4254:  push   %esi
0872b525 +0x4255:  push   %ebx
0872b526 +0x4256:  sub    $0x2c,%esp
0872b529 +0x4259:  mov    0x8(%ebp),%ebx
0872b52c +0x425c:  lea    0x98(%ebx),%esi
0872b532 +0x4262:  mov    %esi,(%esp)
0872b535 +0x4265:  call   087270f0 <_ZNSt8ios_baseC1Ev>  ; std::ios_base::ios_base()
0872b53a +0x426a:  mov    &_ZTTSt13basic_fstreamIwSt11char_traitsIwEE+0x8,%edi
0872b540 +0x4270:  mov    &_ZTTSt13basic_fstreamIwSt11char_traitsIwEE+0xc,%edx
0872b546 +0x4276:  movl   $&_ZTVSt9basic_iosIwSt11char_traitsIwEE+0x8,0x98(%ebx)
0872b550 +0x4280:  movl   $0x0,0x70(%esi)
0872b557 +0x4287:  mov    -0xc(%edi),%eax
0872b55a +0x428a:  mov    %edi,(%ebx)
0872b55c +0x428c:  movl   $0x0,0x4(%ebx)
0872b563 +0x4293:  movl   $0x0,0x74(%esi)
0872b56a +0x429a:  mov    %edx,(%ebx,%eax,1)
0872b56d +0x429d:  movb   $0x0,0x78(%esi)
0872b571 +0x42a1:  movl   $0x0,0x7c(%esi)
0872b578 +0x42a8:  movl   $0x0,0x80(%esi)
0872b582 +0x42b2:  movl   $0x0,0x84(%esi)
0872b58c +0x42bc:  movl   $0x0,0x88(%esi)
0872b596 +0x42c6:  movl   $0x0,0x4(%esp)
0872b59e +0x42ce:  mov    (%ebx),%eax
0872b5a0 +0x42d0:  mov    -0xc(%eax),%eax
0872b5a3 +0x42d3:  lea    (%ebx,%eax,1),%eax
0872b5a6 +0x42d6:  mov    %eax,(%esp)
0872b5a9 +0x42d9:  call   086e0920 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x880>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x880
0872b5ae +0x42de:  mov    &_ZTTSt13basic_fstreamIwSt11char_traitsIwEE+0x10,%edx
0872b5b4 +0x42e4:  lea    0x8(%ebx),%eax
0872b5b7 +0x42e7:  mov    &_ZTTSt13basic_fstreamIwSt11char_traitsIwEE+0x14,%ecx
0872b5bd +0x42ed:  mov    %edx,0x8(%ebx)
0872b5c0 +0x42f0:  mov    -0xc(%edx),%edx
0872b5c3 +0x42f3:  mov    %ecx,0x8(%ebx,%edx,1)
0872b5c7 +0x42f7:  movl   $0x0,0x4(%esp)
0872b5cf +0x42ff:  mov    0x8(%ebx),%edx
0872b5d2 +0x4302:  add    -0xc(%edx),%eax
0872b5d5 +0x4305:  mov    %eax,(%esp)
0872b5d8 +0x4308:  call   086e0920 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x880>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x880
0872b5dd +0x430d:  mov    &_ZTTSt13basic_fstreamIwSt11char_traitsIwEE+0x4,%eax
0872b5e2 +0x4312:  lea    0xc(%ebx),%edi
0872b5e5 +0x4315:  mov    &_ZTTSt13basic_fstreamIwSt11char_traitsIwEE+0x18,%edx
0872b5eb +0x431b:  mov    -0xc(%eax),%eax
0872b5ee +0x431e:  mov    %edx,(%ebx,%eax,1)
0872b5f1 +0x4321:  movl   $&_ZTVSt13basic_fstreamIwSt11char_traitsIwEE+0xc,(%ebx)
0872b5f7 +0x4327:  movl   $&_ZTVSt13basic_fstreamIwSt11char_traitsIwEE+0x34,0x98(%ebx)
0872b601 +0x4331:  movl   $&_ZTVSt13basic_fstreamIwSt11char_traitsIwEE+0x20,0x8(%ebx)
0872b608 +0x4338:  mov    %edi,(%esp)
0872b60b +0x433b:  call   08727af0 <+0x820>
0872b610 +0x4340:  mov    %edi,0x4(%esp)
0872b614 +0x4344:  mov    %esi,(%esp)
0872b617 +0x4347:  call   086e0920 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x880>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x880
0872b61c +0x434c:  mov    0x10(%ebp),%eax
0872b61f +0x434f:  mov    %eax,0x8(%esp)
0872b623 +0x4353:  mov    0xc(%ebp),%eax
0872b626 +0x4356:  mov    (%eax),%eax
0872b628 +0x4358:  mov    %edi,(%esp)
0872b62b +0x435b:  mov    %eax,0x4(%esp)
0872b62f +0x435f:  call   0872b0d0 <+0x3e00>
0872b634 +0x4364:  test   %eax,%eax
0872b636 +0x4366:  je     0872b658 <+0x4388>
0872b638 +0x4368:  movl   $0x0,0x4(%esp)
0872b640 +0x4370:  mov    (%ebx),%eax
0872b642 +0x4372:  mov    -0xc(%eax),%eax
0872b645 +0x4375:  lea    (%ebx,%eax,1),%eax
0872b648 +0x4378:  mov    %eax,(%esp)
0872b64b +0x437b:  call   086e0cf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xc50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xc50
0872b650 +0x4380:  add    $0x2c,%esp
0872b653 +0x4383:  pop    %ebx
0872b654 +0x4384:  pop    %esi
0872b655 +0x4385:  pop    %edi
0872b656 +0x4386:  pop    %ebp
0872b657 +0x4387:  ret
0872b658 +0x4388:  mov    (%ebx),%eax
0872b65a +0x438a:  mov    -0xc(%eax),%edx
0872b65d +0x438d:  add    %ebx,%edx
0872b65f +0x438f:  mov    0x14(%edx),%eax
0872b662 +0x4392:  mov    %edx,(%esp)
0872b665 +0x4395:  or     $0x4,%eax
0872b668 +0x4398:  mov    %eax,0x4(%esp)
0872b66c +0x439c:  call   086e0cf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xc50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xc50
0872b671 +0x43a1:  add    $0x2c,%esp
0872b674 +0x43a4:  pop    %ebx
0872b675 +0x43a5:  pop    %esi
0872b676 +0x43a6:  pop    %edi
0872b677 +0x43a7:  pop    %ebp
0872b678 +0x43a8:  ret
0872b679 +0x43a9:  mov    %eax,-0x1c(%ebp)
0872b67c +0x43ac:  mov    %esi,(%esp)
0872b67f +0x43af:  call   086e0bf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xb50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xb50
0872b684 +0x43b4:  mov    -0x1c(%ebp),%eax
0872b687 +0x43b7:  mov    %eax,(%esp)
0872b68a +0x43ba:  call   08ae3750 <_Unwind_Resume>
0872b68f +0x43bf:  mov    %eax,-0x1c(%ebp)
0872b692 +0x43c2:  mov    %edi,(%esp)
0872b695 +0x43c5:  call   0872b4b0 <+0x41e0>
0872b69a +0x43ca:  mov    -0x1c(%ebp),%eax
0872b69d +0x43cd:  mov    %eax,-0x1c(%ebp)
0872b6a0 +0x43d0:  movl   $&_ZTTSt13basic_fstreamIwSt11char_traitsIwEE+0x4,0x4(%esp)
0872b6a8 +0x43d8:  mov    %ebx,(%esp)
0872b6ab +0x43db:  call   086e1780 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x16e0>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x16e0
0872b6b0 +0x43e0:  mov    -0x1c(%ebp),%eax
0872b6b3 +0x43e3:  jmp    0872b679 <+0x43a9>
0872b6b5 +0x43e5:  jmp    0872b69d <+0x43cd>
0872b6b7 +0x43e7:  mov    -0xc(%edi),%edx
0872b6ba +0x43ea:  mov    &_ZTTSt13basic_fstreamIwSt11char_traitsIwEE+0xc,%ecx
0872b6c0 +0x43f0:  mov    %edi,(%ebx)
0872b6c2 +0x43f2:  movl   $0x0,0x4(%ebx)
0872b6c9 +0x43f9:  mov    %ecx,(%ebx,%edx,1)
0872b6cc +0x43fc:  jmp    0872b679 <+0x43a9>
0872b6ce +0x43fe:  nop
0872b6cf +0x43ff:  nop
0872b6d0 +0x4400:  push   %ebp
0872b6d1 +0x4401:  mov    %esp,%ebp
0872b6d3 +0x4403:  push   %edi
0872b6d4 +0x4404:  push   %esi
0872b6d5 +0x4405:  push   %ebx
0872b6d6 +0x4406:  sub    $0x2c,%esp
0872b6d9 +0x4409:  mov    0xc(%ebp),%esi
0872b6dc +0x440c:  mov    0x8(%ebp),%ebx
0872b6df +0x440f:  mov    0x8(%esi),%eax
0872b6e2 +0x4412:  lea    0x4(%esi),%edi
0872b6e5 +0x4415:  mov    0xc(%esi),%edx
0872b6e8 +0x4418:  mov    %eax,(%ebx)
0872b6ea +0x441a:  mov    -0xc(%eax),%eax
0872b6ed +0x441d:  movl   $0x0,0x4(%ebx)
0872b6f4 +0x4424:  mov    %edx,(%ebx,%eax,1)
0872b6f7 +0x4427:  movl   $0x0,0x4(%esp)
0872b6ff +0x442f:  mov    (%ebx),%eax
0872b701 +0x4431:  mov    -0xc(%eax),%eax
0872b704 +0x4434:  lea    (%ebx,%eax,1),%eax
0872b707 +0x4437:  mov    %eax,(%esp)
0872b70a +0x443a:  call   086e0920 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x880>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x880
0872b70f +0x443f:  mov    0xc(%edi),%edx
0872b712 +0x4442:  lea    0x8(%ebx),%eax
0872b715 +0x4445:  mov    0x10(%edi),%ecx
0872b718 +0x4448:  mov    %edx,0x8(%ebx)
0872b71b +0x444b:  mov    -0xc(%edx),%edx
0872b71e +0x444e:  mov    %ecx,0x8(%ebx,%edx,1)
0872b722 +0x4452:  movl   $0x0,0x4(%esp)
0872b72a +0x445a:  mov    0x8(%ebx),%edx
0872b72d +0x445d:  add    -0xc(%edx),%eax
0872b730 +0x4460:  mov    %eax,(%esp)
0872b733 +0x4463:  call   086e0920 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x880>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x880
0872b738 +0x4468:  mov    0x4(%esi),%eax
0872b73b +0x446b:  mov    0x14(%edi),%edx
0872b73e +0x446e:  mov    -0xc(%eax),%eax
0872b741 +0x4471:  mov    %edx,(%ebx,%eax,1)
0872b744 +0x4474:  mov    (%esi),%eax
0872b746 +0x4476:  mov    0x20(%esi),%edx
0872b749 +0x4479:  mov    %eax,(%ebx)
0872b74b +0x447b:  mov    -0xc(%eax),%eax
0872b74e +0x447e:  mov    %edx,(%ebx,%eax,1)
0872b751 +0x4481:  mov    0x24(%esi),%eax
0872b754 +0x4484:  lea    0xc(%ebx),%esi
0872b757 +0x4487:  mov    %eax,0x8(%ebx)
0872b75a +0x448a:  mov    %esi,(%esp)
0872b75d +0x448d:  call   08727af0 <+0x820>
0872b762 +0x4492:  mov    %esi,0x4(%esp)
0872b766 +0x4496:  mov    (%ebx),%eax
0872b768 +0x4498:  mov    -0xc(%eax),%eax
0872b76b +0x449b:  lea    (%ebx,%eax,1),%eax
0872b76e +0x449e:  mov    %eax,(%esp)
0872b771 +0x44a1:  call   086e0920 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x880>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x880
0872b776 +0x44a6:  mov    0x14(%ebp),%eax
0872b779 +0x44a9:  mov    %eax,0x8(%esp)
0872b77d +0x44ad:  mov    0x10(%ebp),%eax
0872b780 +0x44b0:  mov    (%eax),%eax
0872b782 +0x44b2:  mov    %esi,(%esp)
0872b785 +0x44b5:  mov    %eax,0x4(%esp)
0872b789 +0x44b9:  call   0872b0d0 <+0x3e00>
0872b78e +0x44be:  test   %eax,%eax
0872b790 +0x44c0:  je     0872b7b8 <+0x44e8>
0872b792 +0x44c2:  movl   $0x0,0x4(%esp)
0872b79a +0x44ca:  mov    (%ebx),%eax
0872b79c +0x44cc:  mov    -0xc(%eax),%eax
0872b79f +0x44cf:  lea    (%ebx,%eax,1),%eax
0872b7a2 +0x44d2:  mov    %eax,(%esp)
0872b7a5 +0x44d5:  call   086e0cf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xc50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xc50
0872b7aa +0x44da:  add    $0x2c,%esp
0872b7ad +0x44dd:  pop    %ebx
0872b7ae +0x44de:  pop    %esi
0872b7af +0x44df:  pop    %edi
0872b7b0 +0x44e0:  pop    %ebp
0872b7b1 +0x44e1:  ret
0872b7b2 +0x44e2:  lea    0x0(%esi),%esi
0872b7b8 +0x44e8:  mov    (%ebx),%eax
0872b7ba +0x44ea:  mov    -0xc(%eax),%edx
0872b7bd +0x44ed:  add    %ebx,%edx
0872b7bf +0x44ef:  mov    0x14(%edx),%eax
0872b7c2 +0x44f2:  mov    %edx,(%esp)
0872b7c5 +0x44f5:  or     $0x4,%eax
0872b7c8 +0x44f8:  mov    %eax,0x4(%esp)
0872b7cc +0x44fc:  call   086e0cf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xc50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xc50
0872b7d1 +0x4501:  add    $0x2c,%esp
0872b7d4 +0x4504:  pop    %ebx
0872b7d5 +0x4505:  pop    %esi
0872b7d6 +0x4506:  pop    %edi
0872b7d7 +0x4507:  pop    %ebp
0872b7d8 +0x4508:  ret
0872b7d9 +0x4509:  mov    %eax,(%esp)
0872b7dc +0x450c:  call   08ae3750 <_Unwind_Resume>
0872b7e1 +0x4511:  mov    %eax,-0x1c(%ebp)
0872b7e4 +0x4514:  mov    %esi,(%esp)
0872b7e7 +0x4517:  call   0872b4b0 <+0x41e0>
0872b7ec +0x451c:  mov    -0x1c(%ebp),%eax
0872b7ef +0x451f:  mov    %eax,-0x1c(%ebp)
0872b7f2 +0x4522:  mov    %edi,0x4(%esp)
0872b7f6 +0x4526:  mov    %ebx,(%esp)
0872b7f9 +0x4529:  call   086e1780 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x16e0>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x16e0
0872b7fe +0x452e:  mov    -0x1c(%ebp),%eax
0872b801 +0x4531:  jmp    0872b7d9 <+0x4509>
0872b803 +0x4533:  jmp    0872b7ef <+0x451f>
0872b805 +0x4535:  mov    0x8(%esi),%edx
0872b808 +0x4538:  mov    0xc(%esi),%ecx
0872b80b +0x453b:  mov    %edx,(%ebx)
0872b80d +0x453d:  mov    -0xc(%edx),%edx
0872b810 +0x4540:  movl   $0x0,0x4(%ebx)
0872b817 +0x4547:  mov    %ecx,(%ebx,%edx,1)
0872b81a +0x454a:  jmp    0872b7d9 <+0x4509>
0872b81c +0x454c:  nop
0872b81d +0x454d:  nop
0872b81e +0x454e:  nop
0872b81f +0x454f:  nop
0872b820 +0x4550:  push   %ebp
0872b821 +0x4551:  mov    %esp,%ebp
0872b823 +0x4553:  push   %edi
0872b824 +0x4554:  push   %esi
0872b825 +0x4555:  push   %ebx
0872b826 +0x4556:  sub    $0x2c,%esp
0872b829 +0x4559:  mov    0x8(%ebp),%ebx
0872b82c +0x455c:  lea    0x98(%ebx),%esi
0872b832 +0x4562:  mov    %esi,(%esp)
0872b835 +0x4565:  call   087270f0 <_ZNSt8ios_baseC1Ev>  ; std::ios_base::ios_base()
0872b83a +0x456a:  mov    &_ZTTSt13basic_fstreamIwSt11char_traitsIwEE+0x8,%edi
0872b840 +0x4570:  mov    &_ZTTSt13basic_fstreamIwSt11char_traitsIwEE+0xc,%edx
0872b846 +0x4576:  movl   $&_ZTVSt9basic_iosIwSt11char_traitsIwEE+0x8,0x98(%ebx)
0872b850 +0x4580:  movl   $0x0,0x70(%esi)
0872b857 +0x4587:  mov    -0xc(%edi),%eax
0872b85a +0x458a:  mov    %edi,(%ebx)
0872b85c +0x458c:  movl   $0x0,0x4(%ebx)
0872b863 +0x4593:  movl   $0x0,0x74(%esi)
0872b86a +0x459a:  mov    %edx,(%ebx,%eax,1)
0872b86d +0x459d:  movb   $0x0,0x78(%esi)
0872b871 +0x45a1:  movl   $0x0,0x7c(%esi)
0872b878 +0x45a8:  movl   $0x0,0x80(%esi)
0872b882 +0x45b2:  movl   $0x0,0x84(%esi)
0872b88c +0x45bc:  movl   $0x0,0x88(%esi)
0872b896 +0x45c6:  movl   $0x0,0x4(%esp)
0872b89e +0x45ce:  mov    (%ebx),%eax
0872b8a0 +0x45d0:  mov    -0xc(%eax),%eax
0872b8a3 +0x45d3:  lea    (%ebx,%eax,1),%eax
0872b8a6 +0x45d6:  mov    %eax,(%esp)
0872b8a9 +0x45d9:  call   086e0920 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x880>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x880
0872b8ae +0x45de:  mov    &_ZTTSt13basic_fstreamIwSt11char_traitsIwEE+0x10,%edx
0872b8b4 +0x45e4:  lea    0x8(%ebx),%eax
0872b8b7 +0x45e7:  mov    &_ZTTSt13basic_fstreamIwSt11char_traitsIwEE+0x14,%ecx
0872b8bd +0x45ed:  mov    %edx,0x8(%ebx)
0872b8c0 +0x45f0:  mov    -0xc(%edx),%edx
0872b8c3 +0x45f3:  mov    %ecx,0x8(%ebx,%edx,1)
0872b8c7 +0x45f7:  movl   $0x0,0x4(%esp)
0872b8cf +0x45ff:  mov    0x8(%ebx),%edx
0872b8d2 +0x4602:  add    -0xc(%edx),%eax
0872b8d5 +0x4605:  mov    %eax,(%esp)
0872b8d8 +0x4608:  call   086e0920 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x880>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x880
0872b8dd +0x460d:  mov    &_ZTTSt13basic_fstreamIwSt11char_traitsIwEE+0x4,%eax
0872b8e2 +0x4612:  lea    0xc(%ebx),%edi
0872b8e5 +0x4615:  mov    &_ZTTSt13basic_fstreamIwSt11char_traitsIwEE+0x18,%edx
0872b8eb +0x461b:  mov    -0xc(%eax),%eax
0872b8ee +0x461e:  mov    %edx,(%ebx,%eax,1)
0872b8f1 +0x4621:  movl   $&_ZTVSt13basic_fstreamIwSt11char_traitsIwEE+0xc,(%ebx)
0872b8f7 +0x4627:  movl   $&_ZTVSt13basic_fstreamIwSt11char_traitsIwEE+0x34,0x98(%ebx)
0872b901 +0x4631:  movl   $&_ZTVSt13basic_fstreamIwSt11char_traitsIwEE+0x20,0x8(%ebx)
0872b908 +0x4638:  mov    %edi,(%esp)
0872b90b +0x463b:  call   08727af0 <+0x820>
0872b910 +0x4640:  mov    %edi,0x4(%esp)
0872b914 +0x4644:  mov    %esi,(%esp)
0872b917 +0x4647:  call   086e0920 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x880>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x880
0872b91c +0x464c:  mov    0x10(%ebp),%eax
0872b91f +0x464f:  mov    %edi,(%esp)
0872b922 +0x4652:  mov    %eax,0x8(%esp)
0872b926 +0x4656:  mov    0xc(%ebp),%eax
0872b929 +0x4659:  mov    %eax,0x4(%esp)
0872b92d +0x465d:  call   0872b0d0 <+0x3e00>
0872b932 +0x4662:  test   %eax,%eax
0872b934 +0x4664:  je     0872b958 <+0x4688>
0872b936 +0x4666:  movl   $0x0,0x4(%esp)
0872b93e +0x466e:  mov    (%ebx),%eax
0872b940 +0x4670:  mov    -0xc(%eax),%eax
0872b943 +0x4673:  lea    (%ebx,%eax,1),%eax
0872b946 +0x4676:  mov    %eax,(%esp)
0872b949 +0x4679:  call   086e0cf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xc50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xc50
0872b94e +0x467e:  add    $0x2c,%esp
0872b951 +0x4681:  pop    %ebx
0872b952 +0x4682:  pop    %esi
0872b953 +0x4683:  pop    %edi
0872b954 +0x4684:  pop    %ebp
0872b955 +0x4685:  ret
0872b956 +0x4686:  xchg   %ax,%ax
0872b958 +0x4688:  mov    (%ebx),%eax
0872b95a +0x468a:  mov    -0xc(%eax),%edx
0872b95d +0x468d:  add    %ebx,%edx
0872b95f +0x468f:  mov    0x14(%edx),%eax
0872b962 +0x4692:  mov    %edx,(%esp)
0872b965 +0x4695:  or     $0x4,%eax
0872b968 +0x4698:  mov    %eax,0x4(%esp)
0872b96c +0x469c:  call   086e0cf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xc50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xc50
0872b971 +0x46a1:  add    $0x2c,%esp
0872b974 +0x46a4:  pop    %ebx
0872b975 +0x46a5:  pop    %esi
0872b976 +0x46a6:  pop    %edi
0872b977 +0x46a7:  pop    %ebp
0872b978 +0x46a8:  ret
0872b979 +0x46a9:  mov    %eax,-0x1c(%ebp)
0872b97c +0x46ac:  mov    %esi,(%esp)
0872b97f +0x46af:  call   086e0bf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xb50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xb50
0872b984 +0x46b4:  mov    -0x1c(%ebp),%eax
0872b987 +0x46b7:  mov    %eax,(%esp)
0872b98a +0x46ba:  call   08ae3750 <_Unwind_Resume>
0872b98f +0x46bf:  mov    %eax,-0x1c(%ebp)
0872b992 +0x46c2:  mov    %edi,(%esp)
0872b995 +0x46c5:  call   0872b4b0 <+0x41e0>
0872b99a +0x46ca:  mov    -0x1c(%ebp),%eax
0872b99d +0x46cd:  mov    %eax,-0x1c(%ebp)
0872b9a0 +0x46d0:  movl   $&_ZTTSt13basic_fstreamIwSt11char_traitsIwEE+0x4,0x4(%esp)
0872b9a8 +0x46d8:  mov    %ebx,(%esp)
0872b9ab +0x46db:  call   086e1780 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x16e0>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x16e0
0872b9b0 +0x46e0:  mov    -0x1c(%ebp),%eax
0872b9b3 +0x46e3:  jmp    0872b979 <+0x46a9>
0872b9b5 +0x46e5:  jmp    0872b99d <+0x46cd>
0872b9b7 +0x46e7:  mov    -0xc(%edi),%edx
0872b9ba +0x46ea:  mov    &_ZTTSt13basic_fstreamIwSt11char_traitsIwEE+0xc,%ecx
0872b9c0 +0x46f0:  mov    %edi,(%ebx)
0872b9c2 +0x46f2:  movl   $0x0,0x4(%ebx)
0872b9c9 +0x46f9:  mov    %ecx,(%ebx,%edx,1)
0872b9cc +0x46fc:  jmp    0872b979 <+0x46a9>
0872b9ce +0x46fe:  nop
0872b9cf +0x46ff:  nop
0872b9d0 +0x4700:  push   %ebp
0872b9d1 +0x4701:  mov    %esp,%ebp
0872b9d3 +0x4703:  push   %edi
0872b9d4 +0x4704:  push   %esi
0872b9d5 +0x4705:  push   %ebx
0872b9d6 +0x4706:  sub    $0x2c,%esp
0872b9d9 +0x4709:  mov    0xc(%ebp),%esi
0872b9dc +0x470c:  mov    0x8(%ebp),%ebx
0872b9df +0x470f:  mov    0x8(%esi),%eax
0872b9e2 +0x4712:  lea    0x4(%esi),%edi
0872b9e5 +0x4715:  mov    0xc(%esi),%edx
0872b9e8 +0x4718:  mov    %eax,(%ebx)
0872b9ea +0x471a:  mov    -0xc(%eax),%eax
0872b9ed +0x471d:  movl   $0x0,0x4(%ebx)
0872b9f4 +0x4724:  mov    %edx,(%ebx,%eax,1)
0872b9f7 +0x4727:  movl   $0x0,0x4(%esp)
0872b9ff +0x472f:  mov    (%ebx),%eax
0872ba01 +0x4731:  mov    -0xc(%eax),%eax
0872ba04 +0x4734:  lea    (%ebx,%eax,1),%eax
0872ba07 +0x4737:  mov    %eax,(%esp)
0872ba0a +0x473a:  call   086e0920 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x880>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x880
0872ba0f +0x473f:  mov    0xc(%edi),%edx
0872ba12 +0x4742:  lea    0x8(%ebx),%eax
0872ba15 +0x4745:  mov    0x10(%edi),%ecx
0872ba18 +0x4748:  mov    %edx,0x8(%ebx)
0872ba1b +0x474b:  mov    -0xc(%edx),%edx
0872ba1e +0x474e:  mov    %ecx,0x8(%ebx,%edx,1)
0872ba22 +0x4752:  movl   $0x0,0x4(%esp)
0872ba2a +0x475a:  mov    0x8(%ebx),%edx
0872ba2d +0x475d:  add    -0xc(%edx),%eax
0872ba30 +0x4760:  mov    %eax,(%esp)
0872ba33 +0x4763:  call   086e0920 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x880>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x880
0872ba38 +0x4768:  mov    0x4(%esi),%eax
0872ba3b +0x476b:  mov    0x14(%edi),%edx
0872ba3e +0x476e:  mov    -0xc(%eax),%eax
0872ba41 +0x4771:  mov    %edx,(%ebx,%eax,1)
0872ba44 +0x4774:  mov    (%esi),%eax
0872ba46 +0x4776:  mov    0x20(%esi),%edx
0872ba49 +0x4779:  mov    %eax,(%ebx)
0872ba4b +0x477b:  mov    -0xc(%eax),%eax
0872ba4e +0x477e:  mov    %edx,(%ebx,%eax,1)
0872ba51 +0x4781:  mov    0x24(%esi),%eax
0872ba54 +0x4784:  lea    0xc(%ebx),%esi
0872ba57 +0x4787:  mov    %eax,0x8(%ebx)
0872ba5a +0x478a:  mov    %esi,(%esp)
0872ba5d +0x478d:  call   08727af0 <+0x820>
0872ba62 +0x4792:  mov    %esi,0x4(%esp)
0872ba66 +0x4796:  mov    (%ebx),%eax
0872ba68 +0x4798:  mov    -0xc(%eax),%eax
0872ba6b +0x479b:  lea    (%ebx,%eax,1),%eax
0872ba6e +0x479e:  mov    %eax,(%esp)
0872ba71 +0x47a1:  call   086e0920 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x880>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x880
0872ba76 +0x47a6:  mov    0x14(%ebp),%eax
0872ba79 +0x47a9:  mov    %esi,(%esp)
0872ba7c +0x47ac:  mov    %eax,0x8(%esp)
0872ba80 +0x47b0:  mov    0x10(%ebp),%eax
0872ba83 +0x47b3:  mov    %eax,0x4(%esp)
0872ba87 +0x47b7:  call   0872b0d0 <+0x3e00>
0872ba8c +0x47bc:  test   %eax,%eax
0872ba8e +0x47be:  je     0872bab0 <+0x47e0>
0872ba90 +0x47c0:  movl   $0x0,0x4(%esp)
0872ba98 +0x47c8:  mov    (%ebx),%eax
0872ba9a +0x47ca:  mov    -0xc(%eax),%eax
0872ba9d +0x47cd:  lea    (%ebx,%eax,1),%eax
0872baa0 +0x47d0:  mov    %eax,(%esp)
0872baa3 +0x47d3:  call   086e0cf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xc50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xc50
0872baa8 +0x47d8:  add    $0x2c,%esp
0872baab +0x47db:  pop    %ebx
0872baac +0x47dc:  pop    %esi
0872baad +0x47dd:  pop    %edi
0872baae +0x47de:  pop    %ebp
0872baaf +0x47df:  ret
0872bab0 +0x47e0:  mov    (%ebx),%eax
0872bab2 +0x47e2:  mov    -0xc(%eax),%edx
0872bab5 +0x47e5:  add    %ebx,%edx
0872bab7 +0x47e7:  mov    0x14(%edx),%eax
0872baba +0x47ea:  mov    %edx,(%esp)
0872babd +0x47ed:  or     $0x4,%eax
0872bac0 +0x47f0:  mov    %eax,0x4(%esp)
0872bac4 +0x47f4:  call   086e0cf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xc50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xc50
0872bac9 +0x47f9:  add    $0x2c,%esp
0872bacc +0x47fc:  pop    %ebx
0872bacd +0x47fd:  pop    %esi
0872bace +0x47fe:  pop    %edi
0872bacf +0x47ff:  pop    %ebp
0872bad0 +0x4800:  ret
0872bad1 +0x4801:  mov    %eax,(%esp)
0872bad4 +0x4804:  call   08ae3750 <_Unwind_Resume>
0872bad9 +0x4809:  mov    %eax,-0x1c(%ebp)
0872badc +0x480c:  mov    %esi,(%esp)
0872badf +0x480f:  call   0872b4b0 <+0x41e0>
0872bae4 +0x4814:  mov    -0x1c(%ebp),%eax
0872bae7 +0x4817:  mov    %eax,-0x1c(%ebp)
0872baea +0x481a:  mov    %edi,0x4(%esp)
0872baee +0x481e:  mov    %ebx,(%esp)
0872baf1 +0x4821:  call   086e1780 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x16e0>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x16e0
0872baf6 +0x4826:  mov    -0x1c(%ebp),%eax
0872baf9 +0x4829:  jmp    0872bad1 <+0x4801>
0872bafb +0x482b:  jmp    0872bae7 <+0x4817>
0872bafd +0x482d:  mov    0x8(%esi),%edx
0872bb00 +0x4830:  mov    0xc(%esi),%ecx
0872bb03 +0x4833:  mov    %edx,(%ebx)
0872bb05 +0x4835:  mov    -0xc(%edx),%edx
0872bb08 +0x4838:  movl   $0x0,0x4(%ebx)
0872bb0f +0x483f:  mov    %ecx,(%ebx,%edx,1)
0872bb12 +0x4842:  jmp    0872bad1 <+0x4801>
0872bb14 +0x4844:  nop
0872bb15 +0x4845:  nop
0872bb16 +0x4846:  nop
0872bb17 +0x4847:  nop
0872bb18 +0x4848:  nop
0872bb19 +0x4849:  nop
0872bb1a +0x484a:  nop
0872bb1b +0x484b:  nop
0872bb1c +0x484c:  nop
0872bb1d +0x484d:  nop
0872bb1e +0x484e:  nop
0872bb1f +0x484f:  nop
0872bb20 +0x4850:  push   %ebp
0872bb21 +0x4851:  mov    %esp,%ebp
0872bb23 +0x4853:  push   %edi
0872bb24 +0x4854:  push   %esi
0872bb25 +0x4855:  push   %ebx
0872bb26 +0x4856:  sub    $0x2c,%esp
0872bb29 +0x4859:  mov    0x8(%ebp),%ebx
0872bb2c +0x485c:  lea    0x98(%ebx),%esi
0872bb32 +0x4862:  mov    %esi,(%esp)
0872bb35 +0x4865:  call   087270f0 <_ZNSt8ios_baseC1Ev>  ; std::ios_base::ios_base()
0872bb3a +0x486a:  mov    &_ZTTSt13basic_fstreamIwSt11char_traitsIwEE+0x8,%edi
0872bb40 +0x4870:  mov    &_ZTTSt13basic_fstreamIwSt11char_traitsIwEE+0xc,%edx
0872bb46 +0x4876:  movl   $&_ZTVSt9basic_iosIwSt11char_traitsIwEE+0x8,0x98(%ebx)
0872bb50 +0x4880:  movl   $0x0,0x70(%esi)
0872bb57 +0x4887:  mov    -0xc(%edi),%eax
0872bb5a +0x488a:  mov    %edi,(%ebx)
0872bb5c +0x488c:  movl   $0x0,0x4(%ebx)
0872bb63 +0x4893:  movl   $0x0,0x74(%esi)
0872bb6a +0x489a:  mov    %edx,(%ebx,%eax,1)
0872bb6d +0x489d:  movb   $0x0,0x78(%esi)
0872bb71 +0x48a1:  movl   $0x0,0x7c(%esi)
0872bb78 +0x48a8:  movl   $0x0,0x80(%esi)
0872bb82 +0x48b2:  movl   $0x0,0x84(%esi)
0872bb8c +0x48bc:  movl   $0x0,0x88(%esi)
0872bb96 +0x48c6:  movl   $0x0,0x4(%esp)
0872bb9e +0x48ce:  mov    (%ebx),%eax
0872bba0 +0x48d0:  mov    -0xc(%eax),%eax
0872bba3 +0x48d3:  lea    (%ebx,%eax,1),%eax
0872bba6 +0x48d6:  mov    %eax,(%esp)
0872bba9 +0x48d9:  call   086e0920 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x880>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x880
0872bbae +0x48de:  mov    &_ZTTSt13basic_fstreamIwSt11char_traitsIwEE+0x10,%edx
0872bbb4 +0x48e4:  lea    0x8(%ebx),%eax
0872bbb7 +0x48e7:  mov    &_ZTTSt13basic_fstreamIwSt11char_traitsIwEE+0x14,%ecx
0872bbbd +0x48ed:  mov    %edx,0x8(%ebx)
0872bbc0 +0x48f0:  mov    -0xc(%edx),%edx
0872bbc3 +0x48f3:  mov    %ecx,0x8(%ebx,%edx,1)
0872bbc7 +0x48f7:  movl   $0x0,0x4(%esp)
0872bbcf +0x48ff:  mov    0x8(%ebx),%edx
0872bbd2 +0x4902:  add    -0xc(%edx),%eax
0872bbd5 +0x4905:  mov    %eax,(%esp)
0872bbd8 +0x4908:  call   086e0920 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x880>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x880
0872bbdd +0x490d:  mov    &_ZTTSt13basic_fstreamIwSt11char_traitsIwEE+0x4,%eax
0872bbe2 +0x4912:  lea    0xc(%ebx),%edi
0872bbe5 +0x4915:  mov    &_ZTTSt13basic_fstreamIwSt11char_traitsIwEE+0x18,%edx
0872bbeb +0x491b:  mov    -0xc(%eax),%eax
0872bbee +0x491e:  mov    %edx,(%ebx,%eax,1)
0872bbf1 +0x4921:  movl   $&_ZTVSt13basic_fstreamIwSt11char_traitsIwEE+0xc,(%ebx)
0872bbf7 +0x4927:  movl   $&_ZTVSt13basic_fstreamIwSt11char_traitsIwEE+0x34,0x98(%ebx)
0872bc01 +0x4931:  movl   $&_ZTVSt13basic_fstreamIwSt11char_traitsIwEE+0x20,0x8(%ebx)
0872bc08 +0x4938:  mov    %edi,(%esp)
0872bc0b +0x493b:  call   08727af0 <+0x820>
0872bc10 +0x4940:  mov    %edi,0x4(%esp)
0872bc14 +0x4944:  mov    %esi,(%esp)
0872bc17 +0x4947:  call   086e0920 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x880>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x880
0872bc1c +0x494c:  add    $0x2c,%esp
0872bc1f +0x494f:  pop    %ebx
0872bc20 +0x4950:  pop    %esi
0872bc21 +0x4951:  pop    %edi
0872bc22 +0x4952:  pop    %ebp
0872bc23 +0x4953:  ret
0872bc24 +0x4954:  mov    %eax,-0x1c(%ebp)
0872bc27 +0x4957:  mov    %esi,(%esp)
0872bc2a +0x495a:  call   086e0bf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xb50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xb50
0872bc2f +0x495f:  mov    -0x1c(%ebp),%eax
0872bc32 +0x4962:  mov    %eax,(%esp)
0872bc35 +0x4965:  call   08ae3750 <_Unwind_Resume>
0872bc3a +0x496a:  mov    %eax,-0x1c(%ebp)
0872bc3d +0x496d:  mov    %edi,(%esp)
0872bc40 +0x4970:  call   0872b4b0 <+0x41e0>
0872bc45 +0x4975:  mov    -0x1c(%ebp),%eax
0872bc48 +0x4978:  mov    %eax,-0x1c(%ebp)
0872bc4b +0x497b:  movl   $&_ZTTSt13basic_fstreamIwSt11char_traitsIwEE+0x4,0x4(%esp)
0872bc53 +0x4983:  mov    %ebx,(%esp)
0872bc56 +0x4986:  call   086e1780 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x16e0>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x16e0
0872bc5b +0x498b:  mov    -0x1c(%ebp),%eax
0872bc5e +0x498e:  jmp    0872bc24 <+0x4954>
0872bc60 +0x4990:  jmp    0872bc48 <+0x4978>
0872bc62 +0x4992:  mov    -0xc(%edi),%edx
0872bc65 +0x4995:  mov    &_ZTTSt13basic_fstreamIwSt11char_traitsIwEE+0xc,%ecx
0872bc6b +0x499b:  mov    %edi,(%ebx)
0872bc6d +0x499d:  movl   $0x0,0x4(%ebx)
0872bc74 +0x49a4:  mov    %ecx,(%ebx,%edx,1)
0872bc77 +0x49a7:  jmp    0872bc24 <+0x4954>
0872bc79 +0x49a9:  nop
0872bc7a +0x49aa:  nop
0872bc7b +0x49ab:  nop
0872bc7c +0x49ac:  nop
0872bc7d +0x49ad:  nop
0872bc7e +0x49ae:  nop
0872bc7f +0x49af:  nop
0872bc80 +0x49b0:  push   %ebp
0872bc81 +0x49b1:  mov    %esp,%ebp
0872bc83 +0x49b3:  push   %edi
0872bc84 +0x49b4:  push   %esi
0872bc85 +0x49b5:  push   %ebx
0872bc86 +0x49b6:  sub    $0x2c,%esp
0872bc89 +0x49b9:  mov    0xc(%ebp),%esi
0872bc8c +0x49bc:  mov    0x8(%ebp),%ebx
0872bc8f +0x49bf:  mov    0x8(%esi),%eax
0872bc92 +0x49c2:  lea    0x4(%esi),%edi
0872bc95 +0x49c5:  mov    0xc(%esi),%edx
0872bc98 +0x49c8:  mov    %eax,(%ebx)
0872bc9a +0x49ca:  mov    -0xc(%eax),%eax
0872bc9d +0x49cd:  movl   $0x0,0x4(%ebx)
0872bca4 +0x49d4:  mov    %edx,(%ebx,%eax,1)
0872bca7 +0x49d7:  movl   $0x0,0x4(%esp)
0872bcaf +0x49df:  mov    (%ebx),%eax
0872bcb1 +0x49e1:  mov    -0xc(%eax),%eax
0872bcb4 +0x49e4:  lea    (%ebx,%eax,1),%eax
0872bcb7 +0x49e7:  mov    %eax,(%esp)
0872bcba +0x49ea:  call   086e0920 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x880>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x880
0872bcbf +0x49ef:  mov    0xc(%edi),%edx
0872bcc2 +0x49f2:  lea    0x8(%ebx),%eax
0872bcc5 +0x49f5:  mov    0x10(%edi),%ecx
0872bcc8 +0x49f8:  mov    %edx,0x8(%ebx)
0872bccb +0x49fb:  mov    -0xc(%edx),%edx
0872bcce +0x49fe:  mov    %ecx,0x8(%ebx,%edx,1)
0872bcd2 +0x4a02:  movl   $0x0,0x4(%esp)
0872bcda +0x4a0a:  mov    0x8(%ebx),%edx
0872bcdd +0x4a0d:  add    -0xc(%edx),%eax
0872bce0 +0x4a10:  mov    %eax,(%esp)
0872bce3 +0x4a13:  call   086e0920 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x880>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x880
0872bce8 +0x4a18:  mov    0x4(%esi),%eax
0872bceb +0x4a1b:  mov    0x14(%edi),%edx
0872bcee +0x4a1e:  mov    -0xc(%eax),%eax
0872bcf1 +0x4a21:  mov    %edx,(%ebx,%eax,1)
0872bcf4 +0x4a24:  mov    (%esi),%eax
0872bcf6 +0x4a26:  mov    0x20(%esi),%edx
0872bcf9 +0x4a29:  mov    %eax,(%ebx)
0872bcfb +0x4a2b:  mov    -0xc(%eax),%eax
0872bcfe +0x4a2e:  mov    %edx,(%ebx,%eax,1)
0872bd01 +0x4a31:  mov    0x24(%esi),%eax
0872bd04 +0x4a34:  lea    0xc(%ebx),%esi
0872bd07 +0x4a37:  mov    %eax,0x8(%ebx)
0872bd0a +0x4a3a:  mov    %esi,(%esp)
0872bd0d +0x4a3d:  call   08727af0 <+0x820>
0872bd12 +0x4a42:  mov    %esi,0x4(%esp)
0872bd16 +0x4a46:  mov    (%ebx),%eax
0872bd18 +0x4a48:  mov    -0xc(%eax),%eax
0872bd1b +0x4a4b:  lea    (%ebx,%eax,1),%eax
0872bd1e +0x4a4e:  mov    %eax,(%esp)
0872bd21 +0x4a51:  call   086e0920 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x880>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x880
0872bd26 +0x4a56:  add    $0x2c,%esp
0872bd29 +0x4a59:  pop    %ebx
0872bd2a +0x4a5a:  pop    %esi
0872bd2b +0x4a5b:  pop    %edi
0872bd2c +0x4a5c:  pop    %ebp
0872bd2d +0x4a5d:  ret
0872bd2e +0x4a5e:  mov    %eax,(%esp)
0872bd31 +0x4a61:  call   08ae3750 <_Unwind_Resume>
0872bd36 +0x4a66:  mov    %eax,-0x1c(%ebp)
0872bd39 +0x4a69:  mov    %esi,(%esp)
0872bd3c +0x4a6c:  call   0872b4b0 <+0x41e0>
0872bd41 +0x4a71:  mov    -0x1c(%ebp),%eax
0872bd44 +0x4a74:  mov    %eax,-0x1c(%ebp)
0872bd47 +0x4a77:  mov    %edi,0x4(%esp)
0872bd4b +0x4a7b:  mov    %ebx,(%esp)
0872bd4e +0x4a7e:  call   086e1780 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x16e0>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x16e0
0872bd53 +0x4a83:  mov    -0x1c(%ebp),%eax
0872bd56 +0x4a86:  jmp    0872bd2e <+0x4a5e>
0872bd58 +0x4a88:  jmp    0872bd44 <+0x4a74>
0872bd5a +0x4a8a:  mov    0x8(%esi),%edx
0872bd5d +0x4a8d:  mov    0xc(%esi),%ecx
0872bd60 +0x4a90:  mov    %edx,(%ebx)
0872bd62 +0x4a92:  mov    -0xc(%edx),%edx
0872bd65 +0x4a95:  movl   $0x0,0x4(%ebx)
0872bd6c +0x4a9c:  mov    %ecx,(%ebx,%edx,1)
0872bd6f +0x4a9f:  jmp    0872bd2e <+0x4a5e>
0872bd71 +0x4aa1:  nop
0872bd72 +0x4aa2:  nop
0872bd73 +0x4aa3:  nop
0872bd74 +0x4aa4:  nop
0872bd75 +0x4aa5:  nop
0872bd76 +0x4aa6:  nop
0872bd77 +0x4aa7:  nop
0872bd78 +0x4aa8:  nop
0872bd79 +0x4aa9:  nop
0872bd7a +0x4aaa:  nop
0872bd7b +0x4aab:  nop
0872bd7c +0x4aac:  nop
0872bd7d +0x4aad:  nop
0872bd7e +0x4aae:  nop
0872bd7f +0x4aaf:  nop
0872bd80 +0x4ab0:  push   %ebp
0872bd81 +0x4ab1:  mov    %esp,%ebp
0872bd83 +0x4ab3:  push   %edi
0872bd84 +0x4ab4:  push   %esi
0872bd85 +0x4ab5:  push   %ebx
0872bd86 +0x4ab6:  sub    $0x2c,%esp
0872bd89 +0x4ab9:  mov    0x8(%ebp),%ebx
0872bd8c +0x4abc:  lea    0x90(%ebx),%esi
0872bd92 +0x4ac2:  mov    %esi,(%esp)
0872bd95 +0x4ac5:  call   087270f0 <_ZNSt8ios_baseC1Ev>  ; std::ios_base::ios_base()
0872bd9a +0x4aca:  mov    &_ZTTSt14basic_ofstreamIwSt11char_traitsIwEE+0x4,%eax
0872bd9f +0x4acf:  mov    &_ZTTSt14basic_ofstreamIwSt11char_traitsIwEE+0x8,%ecx
0872bda5 +0x4ad5:  movl   $&_ZTVSt9basic_iosIwSt11char_traitsIwEE+0x8,0x90(%ebx)
0872bdaf +0x4adf:  movl   $0x0,0x70(%esi)
0872bdb6 +0x4ae6:  mov    %eax,(%ebx)
0872bdb8 +0x4ae8:  mov    -0xc(%eax),%eax
0872bdbb +0x4aeb:  movl   $0x0,0x74(%esi)
0872bdc2 +0x4af2:  movb   $0x0,0x78(%esi)
0872bdc6 +0x4af6:  movl   $0x0,0x7c(%esi)
0872bdcd +0x4afd:  mov    %ecx,(%ebx,%eax,1)
0872bdd0 +0x4b00:  movl   $0x0,0x80(%esi)
0872bdda +0x4b0a:  movl   $0x0,0x84(%esi)
0872bde4 +0x4b14:  movl   $0x0,0x88(%esi)
0872bdee +0x4b1e:  movl   $0x0,0x4(%esp)
0872bdf6 +0x4b26:  mov    (%ebx),%eax
0872bdf8 +0x4b28:  mov    -0xc(%eax),%eax
0872bdfb +0x4b2b:  lea    (%ebx,%eax,1),%eax
0872bdfe +0x4b2e:  mov    %eax,(%esp)
0872be01 +0x4b31:  call   086e0920 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x880>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x880
0872be06 +0x4b36:  movl   $&_ZTVSt14basic_ofstreamIwSt11char_traitsIwEE+0xc,(%ebx)
0872be0c +0x4b3c:  lea    0x4(%ebx),%edi
0872be0f +0x4b3f:  movl   $&_ZTVSt14basic_ofstreamIwSt11char_traitsIwEE+0x20,0x90(%ebx)
0872be19 +0x4b49:  mov    %edi,(%esp)
0872be1c +0x4b4c:  call   08727af0 <+0x820>
0872be21 +0x4b51:  mov    %edi,0x4(%esp)
0872be25 +0x4b55:  mov    %esi,(%esp)
0872be28 +0x4b58:  call   086e0920 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x880>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x880
0872be2d +0x4b5d:  mov    0x10(%ebp),%eax
0872be30 +0x4b60:  or     $0x10,%eax
0872be33 +0x4b63:  mov    %eax,0x8(%esp)
0872be37 +0x4b67:  mov    0xc(%ebp),%eax
0872be3a +0x4b6a:  mov    (%eax),%eax
0872be3c +0x4b6c:  mov    %edi,(%esp)
0872be3f +0x4b6f:  mov    %eax,0x4(%esp)
0872be43 +0x4b73:  call   0872b0d0 <+0x3e00>
0872be48 +0x4b78:  test   %eax,%eax
0872be4a +0x4b7a:  je     0872be70 <+0x4ba0>
0872be4c +0x4b7c:  movl   $0x0,0x4(%esp)
0872be54 +0x4b84:  mov    (%ebx),%eax
0872be56 +0x4b86:  mov    -0xc(%eax),%eax
0872be59 +0x4b89:  lea    (%ebx,%eax,1),%eax
0872be5c +0x4b8c:  mov    %eax,(%esp)
0872be5f +0x4b8f:  call   086e0cf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xc50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xc50
0872be64 +0x4b94:  add    $0x2c,%esp
0872be67 +0x4b97:  pop    %ebx
0872be68 +0x4b98:  pop    %esi
0872be69 +0x4b99:  pop    %edi
0872be6a +0x4b9a:  pop    %ebp
0872be6b +0x4b9b:  ret
0872be6c +0x4b9c:  lea    0x0(%esi,%eiz,1),%esi
0872be70 +0x4ba0:  mov    (%ebx),%eax
0872be72 +0x4ba2:  mov    -0xc(%eax),%edx
0872be75 +0x4ba5:  add    %ebx,%edx
0872be77 +0x4ba7:  mov    0x14(%edx),%eax
0872be7a +0x4baa:  mov    %edx,(%esp)
0872be7d +0x4bad:  or     $0x4,%eax
0872be80 +0x4bb0:  mov    %eax,0x4(%esp)
0872be84 +0x4bb4:  call   086e0cf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xc50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xc50
0872be89 +0x4bb9:  add    $0x2c,%esp
0872be8c +0x4bbc:  pop    %ebx
0872be8d +0x4bbd:  pop    %esi
0872be8e +0x4bbe:  pop    %edi
0872be8f +0x4bbf:  pop    %ebp
0872be90 +0x4bc0:  ret
0872be91 +0x4bc1:  mov    %eax,-0x1c(%ebp)
0872be94 +0x4bc4:  mov    %esi,(%esp)
0872be97 +0x4bc7:  call   086e0bf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xb50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xb50
0872be9c +0x4bcc:  mov    -0x1c(%ebp),%eax
0872be9f +0x4bcf:  mov    %eax,(%esp)
0872bea2 +0x4bd2:  call   08ae3750 <_Unwind_Resume>
0872bea7 +0x4bd7:  mov    %eax,-0x1c(%ebp)
0872beaa +0x4bda:  mov    %edi,(%esp)
0872bead +0x4bdd:  call   0872b4b0 <+0x41e0>
0872beb2 +0x4be2:  mov    -0x1c(%ebp),%eax
0872beb5 +0x4be5:  mov    &_ZTTSt14basic_ofstreamIwSt11char_traitsIwEE+0x4,%edx
0872bebb +0x4beb:  mov    &_ZTTSt14basic_ofstreamIwSt11char_traitsIwEE+0x8,%ecx
0872bec1 +0x4bf1:  mov    %edx,(%ebx)
0872bec3 +0x4bf3:  mov    -0xc(%edx),%edx
0872bec6 +0x4bf6:  mov    %ecx,(%ebx,%edx,1)
0872bec9 +0x4bf9:  jmp    0872be91 <+0x4bc1>
0872becb +0x4bfb:  jmp    0872beb5 <+0x4be5>
0872becd +0x4bfd:  nop
0872bece +0x4bfe:  nop
0872becf +0x4bff:  nop
0872bed0 +0x4c00:  push   %ebp
0872bed1 +0x4c01:  mov    %esp,%ebp
0872bed3 +0x4c03:  push   %edi
0872bed4 +0x4c04:  push   %esi
0872bed5 +0x4c05:  push   %ebx
0872bed6 +0x4c06:  sub    $0x2c,%esp
0872bed9 +0x4c09:  mov    0xc(%ebp),%esi
0872bedc +0x4c0c:  mov    0x8(%ebp),%ebx
0872bedf +0x4c0f:  mov    0x4(%esi),%eax
0872bee2 +0x4c12:  mov    0x8(%esi),%edx
0872bee5 +0x4c15:  mov    %eax,(%ebx)
0872bee7 +0x4c17:  mov    -0xc(%eax),%eax
0872beea +0x4c1a:  mov    %edx,(%ebx,%eax,1)
0872beed +0x4c1d:  movl   $0x0,0x4(%esp)
0872bef5 +0x4c25:  mov    (%ebx),%eax
0872bef7 +0x4c27:  mov    -0xc(%eax),%eax
0872befa +0x4c2a:  lea    (%ebx,%eax,1),%eax
0872befd +0x4c2d:  mov    %eax,(%esp)
0872bf00 +0x4c30:  call   086e0920 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x880>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x880
0872bf05 +0x4c35:  mov    (%esi),%eax
0872bf07 +0x4c37:  lea    0x4(%ebx),%edi
0872bf0a +0x4c3a:  mov    0xc(%esi),%edx
0872bf0d +0x4c3d:  mov    %eax,(%ebx)
0872bf0f +0x4c3f:  mov    -0xc(%eax),%eax
0872bf12 +0x4c42:  mov    %edx,(%ebx,%eax,1)
0872bf15 +0x4c45:  mov    %edi,(%esp)
0872bf18 +0x4c48:  call   08727af0 <+0x820>
0872bf1d +0x4c4d:  mov    %edi,0x4(%esp)
0872bf21 +0x4c51:  mov    (%ebx),%eax
0872bf23 +0x4c53:  mov    -0xc(%eax),%eax
0872bf26 +0x4c56:  lea    (%ebx,%eax,1),%eax
0872bf29 +0x4c59:  mov    %eax,(%esp)
0872bf2c +0x4c5c:  call   086e0920 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x880>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x880
0872bf31 +0x4c61:  mov    0x14(%ebp),%eax
0872bf34 +0x4c64:  or     $0x10,%eax
0872bf37 +0x4c67:  mov    %eax,0x8(%esp)
0872bf3b +0x4c6b:  mov    0x10(%ebp),%eax
0872bf3e +0x4c6e:  mov    (%eax),%eax
0872bf40 +0x4c70:  mov    %edi,(%esp)
0872bf43 +0x4c73:  mov    %eax,0x4(%esp)
0872bf47 +0x4c77:  call   0872b0d0 <+0x3e00>
0872bf4c +0x4c7c:  test   %eax,%eax
0872bf4e +0x4c7e:  je     0872bf70 <+0x4ca0>
0872bf50 +0x4c80:  movl   $0x0,0x4(%esp)
0872bf58 +0x4c88:  mov    (%ebx),%eax
0872bf5a +0x4c8a:  mov    -0xc(%eax),%eax
0872bf5d +0x4c8d:  lea    (%ebx,%eax,1),%eax
0872bf60 +0x4c90:  mov    %eax,(%esp)
0872bf63 +0x4c93:  call   086e0cf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xc50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xc50
0872bf68 +0x4c98:  add    $0x2c,%esp
0872bf6b +0x4c9b:  pop    %ebx
0872bf6c +0x4c9c:  pop    %esi
0872bf6d +0x4c9d:  pop    %edi
0872bf6e +0x4c9e:  pop    %ebp
0872bf6f +0x4c9f:  ret
0872bf70 +0x4ca0:  mov    (%ebx),%eax
0872bf72 +0x4ca2:  mov    -0xc(%eax),%edx
0872bf75 +0x4ca5:  add    %ebx,%edx
0872bf77 +0x4ca7:  mov    0x14(%edx),%eax
0872bf7a +0x4caa:  mov    %edx,(%esp)
0872bf7d +0x4cad:  or     $0x4,%eax
0872bf80 +0x4cb0:  mov    %eax,0x4(%esp)
0872bf84 +0x4cb4:  call   086e0cf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xc50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xc50
0872bf89 +0x4cb9:  add    $0x2c,%esp
0872bf8c +0x4cbc:  pop    %ebx
0872bf8d +0x4cbd:  pop    %esi
0872bf8e +0x4cbe:  pop    %edi
0872bf8f +0x4cbf:  pop    %ebp
0872bf90 +0x4cc0:  ret
0872bf91 +0x4cc1:  mov    %eax,(%esp)
0872bf94 +0x4cc4:  call   08ae3750 <_Unwind_Resume>
0872bf99 +0x4cc9:  mov    %eax,-0x1c(%ebp)
0872bf9c +0x4ccc:  mov    %edi,(%esp)
0872bf9f +0x4ccf:  call   0872b4b0 <+0x41e0>
0872bfa4 +0x4cd4:  mov    -0x1c(%ebp),%eax
0872bfa7 +0x4cd7:  mov    0x4(%esi),%edx
0872bfaa +0x4cda:  mov    0x8(%esi),%ecx
0872bfad +0x4cdd:  mov    %edx,(%ebx)
0872bfaf +0x4cdf:  mov    -0xc(%edx),%edx
0872bfb2 +0x4ce2:  mov    %ecx,(%ebx,%edx,1)
0872bfb5 +0x4ce5:  jmp    0872bf91 <+0x4cc1>
0872bfb7 +0x4ce7:  jmp    0872bfa7 <+0x4cd7>
0872bfb9 +0x4ce9:  nop
0872bfba +0x4cea:  nop
0872bfbb +0x4ceb:  nop
0872bfbc +0x4cec:  nop
0872bfbd +0x4ced:  nop
0872bfbe +0x4cee:  nop
0872bfbf +0x4cef:  nop
0872bfc0 +0x4cf0:  push   %ebp
0872bfc1 +0x4cf1:  mov    %esp,%ebp
0872bfc3 +0x4cf3:  push   %edi
0872bfc4 +0x4cf4:  push   %esi
0872bfc5 +0x4cf5:  push   %ebx
0872bfc6 +0x4cf6:  sub    $0x2c,%esp
0872bfc9 +0x4cf9:  mov    0x8(%ebp),%ebx
0872bfcc +0x4cfc:  lea    0x90(%ebx),%esi
0872bfd2 +0x4d02:  mov    %esi,(%esp)
0872bfd5 +0x4d05:  call   087270f0 <_ZNSt8ios_baseC1Ev>  ; std::ios_base::ios_base()
0872bfda +0x4d0a:  mov    &_ZTTSt14basic_ofstreamIwSt11char_traitsIwEE+0x4,%eax
0872bfdf +0x4d0f:  mov    &_ZTTSt14basic_ofstreamIwSt11char_traitsIwEE+0x8,%ecx
0872bfe5 +0x4d15:  movl   $&_ZTVSt9basic_iosIwSt11char_traitsIwEE+0x8,0x90(%ebx)
0872bfef +0x4d1f:  movl   $0x0,0x70(%esi)
0872bff6 +0x4d26:  mov    %eax,(%ebx)
0872bff8 +0x4d28:  mov    -0xc(%eax),%eax
0872bffb +0x4d2b:  movl   $0x0,0x74(%esi)
0872c002 +0x4d32:  movb   $0x0,0x78(%esi)
0872c006 +0x4d36:  movl   $0x0,0x7c(%esi)
0872c00d +0x4d3d:  mov    %ecx,(%ebx,%eax,1)
0872c010 +0x4d40:  movl   $0x0,0x80(%esi)
0872c01a +0x4d4a:  movl   $0x0,0x84(%esi)
0872c024 +0x4d54:  movl   $0x0,0x88(%esi)
0872c02e +0x4d5e:  movl   $0x0,0x4(%esp)
0872c036 +0x4d66:  mov    (%ebx),%eax
0872c038 +0x4d68:  mov    -0xc(%eax),%eax
0872c03b +0x4d6b:  lea    (%ebx,%eax,1),%eax
0872c03e +0x4d6e:  mov    %eax,(%esp)
0872c041 +0x4d71:  call   086e0920 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x880>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x880
0872c046 +0x4d76:  movl   $&_ZTVSt14basic_ofstreamIwSt11char_traitsIwEE+0xc,(%ebx)
0872c04c +0x4d7c:  lea    0x4(%ebx),%edi
0872c04f +0x4d7f:  movl   $&_ZTVSt14basic_ofstreamIwSt11char_traitsIwEE+0x20,0x90(%ebx)
0872c059 +0x4d89:  mov    %edi,(%esp)
0872c05c +0x4d8c:  call   08727af0 <+0x820>
0872c061 +0x4d91:  mov    %edi,0x4(%esp)
0872c065 +0x4d95:  mov    %esi,(%esp)
0872c068 +0x4d98:  call   086e0920 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x880>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x880
0872c06d +0x4d9d:  mov    0x10(%ebp),%eax
0872c070 +0x4da0:  mov    %edi,(%esp)
0872c073 +0x4da3:  or     $0x10,%eax
0872c076 +0x4da6:  mov    %eax,0x8(%esp)
0872c07a +0x4daa:  mov    0xc(%ebp),%eax
0872c07d +0x4dad:  mov    %eax,0x4(%esp)
0872c081 +0x4db1:  call   0872b0d0 <+0x3e00>
0872c086 +0x4db6:  test   %eax,%eax
0872c088 +0x4db8:  je     0872c0b0 <+0x4de0>
0872c08a +0x4dba:  movl   $0x0,0x4(%esp)
0872c092 +0x4dc2:  mov    (%ebx),%eax
0872c094 +0x4dc4:  mov    -0xc(%eax),%eax
0872c097 +0x4dc7:  lea    (%ebx,%eax,1),%eax
0872c09a +0x4dca:  mov    %eax,(%esp)
0872c09d +0x4dcd:  call   086e0cf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xc50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xc50
0872c0a2 +0x4dd2:  add    $0x2c,%esp
0872c0a5 +0x4dd5:  pop    %ebx
0872c0a6 +0x4dd6:  pop    %esi
0872c0a7 +0x4dd7:  pop    %edi
0872c0a8 +0x4dd8:  pop    %ebp
0872c0a9 +0x4dd9:  ret
0872c0aa +0x4dda:  lea    0x0(%esi),%esi
0872c0b0 +0x4de0:  mov    (%ebx),%eax
0872c0b2 +0x4de2:  mov    -0xc(%eax),%edx
0872c0b5 +0x4de5:  add    %ebx,%edx
0872c0b7 +0x4de7:  mov    0x14(%edx),%eax
0872c0ba +0x4dea:  mov    %edx,(%esp)
0872c0bd +0x4ded:  or     $0x4,%eax
0872c0c0 +0x4df0:  mov    %eax,0x4(%esp)
0872c0c4 +0x4df4:  call   086e0cf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xc50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xc50
0872c0c9 +0x4df9:  add    $0x2c,%esp
0872c0cc +0x4dfc:  pop    %ebx
0872c0cd +0x4dfd:  pop    %esi
0872c0ce +0x4dfe:  pop    %edi
0872c0cf +0x4dff:  pop    %ebp
0872c0d0 +0x4e00:  ret
0872c0d1 +0x4e01:  mov    %eax,-0x1c(%ebp)
0872c0d4 +0x4e04:  mov    %esi,(%esp)
0872c0d7 +0x4e07:  call   086e0bf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xb50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xb50
0872c0dc +0x4e0c:  mov    -0x1c(%ebp),%eax
0872c0df +0x4e0f:  mov    %eax,(%esp)
0872c0e2 +0x4e12:  call   08ae3750 <_Unwind_Resume>
0872c0e7 +0x4e17:  mov    %eax,-0x1c(%ebp)
0872c0ea +0x4e1a:  mov    %edi,(%esp)
0872c0ed +0x4e1d:  call   0872b4b0 <+0x41e0>
0872c0f2 +0x4e22:  mov    -0x1c(%ebp),%eax
0872c0f5 +0x4e25:  mov    &_ZTTSt14basic_ofstreamIwSt11char_traitsIwEE+0x4,%edx
0872c0fb +0x4e2b:  mov    &_ZTTSt14basic_ofstreamIwSt11char_traitsIwEE+0x8,%ecx
0872c101 +0x4e31:  mov    %edx,(%ebx)
0872c103 +0x4e33:  mov    -0xc(%edx),%edx
0872c106 +0x4e36:  mov    %ecx,(%ebx,%edx,1)
0872c109 +0x4e39:  jmp    0872c0d1 <+0x4e01>
0872c10b +0x4e3b:  jmp    0872c0f5 <+0x4e25>
0872c10d +0x4e3d:  nop
0872c10e +0x4e3e:  nop
0872c10f +0x4e3f:  nop
0872c110 +0x4e40:  push   %ebp
0872c111 +0x4e41:  mov    %esp,%ebp
0872c113 +0x4e43:  push   %edi
0872c114 +0x4e44:  push   %esi
0872c115 +0x4e45:  push   %ebx
0872c116 +0x4e46:  sub    $0x2c,%esp
0872c119 +0x4e49:  mov    0xc(%ebp),%esi
0872c11c +0x4e4c:  mov    0x8(%ebp),%ebx
0872c11f +0x4e4f:  mov    0x4(%esi),%eax
0872c122 +0x4e52:  mov    0x8(%esi),%edx
0872c125 +0x4e55:  mov    %eax,(%ebx)
0872c127 +0x4e57:  mov    -0xc(%eax),%eax
0872c12a +0x4e5a:  mov    %edx,(%ebx,%eax,1)
0872c12d +0x4e5d:  movl   $0x0,0x4(%esp)
0872c135 +0x4e65:  mov    (%ebx),%eax
0872c137 +0x4e67:  mov    -0xc(%eax),%eax
0872c13a +0x4e6a:  lea    (%ebx,%eax,1),%eax
0872c13d +0x4e6d:  mov    %eax,(%esp)
0872c140 +0x4e70:  call   086e0920 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x880>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x880
0872c145 +0x4e75:  mov    (%esi),%eax
0872c147 +0x4e77:  lea    0x4(%ebx),%edi
0872c14a +0x4e7a:  mov    0xc(%esi),%edx
0872c14d +0x4e7d:  mov    %eax,(%ebx)
0872c14f +0x4e7f:  mov    -0xc(%eax),%eax
0872c152 +0x4e82:  mov    %edx,(%ebx,%eax,1)
0872c155 +0x4e85:  mov    %edi,(%esp)
0872c158 +0x4e88:  call   08727af0 <+0x820>
0872c15d +0x4e8d:  mov    %edi,0x4(%esp)
0872c161 +0x4e91:  mov    (%ebx),%eax
0872c163 +0x4e93:  mov    -0xc(%eax),%eax
0872c166 +0x4e96:  lea    (%ebx,%eax,1),%eax
0872c169 +0x4e99:  mov    %eax,(%esp)
0872c16c +0x4e9c:  call   086e0920 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x880>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x880
0872c171 +0x4ea1:  mov    0x14(%ebp),%eax
0872c174 +0x4ea4:  mov    %edi,(%esp)
0872c177 +0x4ea7:  or     $0x10,%eax
0872c17a +0x4eaa:  mov    %eax,0x8(%esp)
0872c17e +0x4eae:  mov    0x10(%ebp),%eax
0872c181 +0x4eb1:  mov    %eax,0x4(%esp)
0872c185 +0x4eb5:  call   0872b0d0 <+0x3e00>
0872c18a +0x4eba:  test   %eax,%eax
0872c18c +0x4ebc:  je     0872c1b0 <+0x4ee0>
0872c18e +0x4ebe:  movl   $0x0,0x4(%esp)
0872c196 +0x4ec6:  mov    (%ebx),%eax
0872c198 +0x4ec8:  mov    -0xc(%eax),%eax
0872c19b +0x4ecb:  lea    (%ebx,%eax,1),%eax
0872c19e +0x4ece:  mov    %eax,(%esp)
0872c1a1 +0x4ed1:  call   086e0cf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xc50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xc50
0872c1a6 +0x4ed6:  add    $0x2c,%esp
0872c1a9 +0x4ed9:  pop    %ebx
0872c1aa +0x4eda:  pop    %esi
0872c1ab +0x4edb:  pop    %edi
0872c1ac +0x4edc:  pop    %ebp
0872c1ad +0x4edd:  ret
0872c1ae +0x4ede:  xchg   %ax,%ax
0872c1b0 +0x4ee0:  mov    (%ebx),%eax
0872c1b2 +0x4ee2:  mov    -0xc(%eax),%edx
0872c1b5 +0x4ee5:  add    %ebx,%edx
0872c1b7 +0x4ee7:  mov    0x14(%edx),%eax
0872c1ba +0x4eea:  mov    %edx,(%esp)
0872c1bd +0x4eed:  or     $0x4,%eax
0872c1c0 +0x4ef0:  mov    %eax,0x4(%esp)
0872c1c4 +0x4ef4:  call   086e0cf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xc50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xc50
0872c1c9 +0x4ef9:  add    $0x2c,%esp
0872c1cc +0x4efc:  pop    %ebx
0872c1cd +0x4efd:  pop    %esi
0872c1ce +0x4efe:  pop    %edi
0872c1cf +0x4eff:  pop    %ebp
0872c1d0 +0x4f00:  ret
0872c1d1 +0x4f01:  mov    %eax,(%esp)
0872c1d4 +0x4f04:  call   08ae3750 <_Unwind_Resume>
0872c1d9 +0x4f09:  mov    %eax,-0x1c(%ebp)
0872c1dc +0x4f0c:  mov    %edi,(%esp)
0872c1df +0x4f0f:  call   0872b4b0 <+0x41e0>
0872c1e4 +0x4f14:  mov    -0x1c(%ebp),%eax
0872c1e7 +0x4f17:  mov    0x4(%esi),%edx
0872c1ea +0x4f1a:  mov    0x8(%esi),%ecx
0872c1ed +0x4f1d:  mov    %edx,(%ebx)
0872c1ef +0x4f1f:  mov    -0xc(%edx),%edx
0872c1f2 +0x4f22:  mov    %ecx,(%ebx,%edx,1)
0872c1f5 +0x4f25:  jmp    0872c1d1 <+0x4f01>
0872c1f7 +0x4f27:  jmp    0872c1e7 <+0x4f17>
0872c1f9 +0x4f29:  nop
0872c1fa +0x4f2a:  nop
0872c1fb +0x4f2b:  nop
0872c1fc +0x4f2c:  nop
0872c1fd +0x4f2d:  nop
0872c1fe +0x4f2e:  nop
0872c1ff +0x4f2f:  nop
0872c200 +0x4f30:  push   %ebp
0872c201 +0x4f31:  mov    %esp,%ebp
0872c203 +0x4f33:  sub    $0x38,%esp
0872c206 +0x4f36:  mov    %ebx,-0xc(%ebp)
0872c209 +0x4f39:  mov    0x8(%ebp),%ebx
0872c20c +0x4f3c:  mov    %esi,-0x8(%ebp)
0872c20f +0x4f3f:  mov    %edi,-0x4(%ebp)
0872c212 +0x4f42:  lea    0x90(%ebx),%esi
0872c218 +0x4f48:  mov    %esi,(%esp)
0872c21b +0x4f4b:  call   087270f0 <_ZNSt8ios_baseC1Ev>  ; std::ios_base::ios_base()
0872c220 +0x4f50:  mov    &_ZTTSt14basic_ofstreamIwSt11char_traitsIwEE+0x4,%edi
0872c226 +0x4f56:  mov    &_ZTTSt14basic_ofstreamIwSt11char_traitsIwEE+0x8,%edx
0872c22c +0x4f5c:  movl   $&_ZTVSt9basic_iosIwSt11char_traitsIwEE+0x8,0x90(%ebx)
0872c236 +0x4f66:  movl   $0x0,0x70(%esi)
0872c23d +0x4f6d:  mov    -0xc(%edi),%eax
0872c240 +0x4f70:  mov    %edi,(%ebx)
0872c242 +0x4f72:  movl   $0x0,0x74(%esi)
0872c249 +0x4f79:  movb   $0x0,0x78(%esi)
0872c24d +0x4f7d:  mov    %edx,(%ebx,%eax,1)
0872c250 +0x4f80:  movl   $0x0,0x7c(%esi)
0872c257 +0x4f87:  movl   $0x0,0x80(%esi)
0872c261 +0x4f91:  movl   $0x0,0x84(%esi)
0872c26b +0x4f9b:  movl   $0x0,0x88(%esi)
0872c275 +0x4fa5:  movl   $0x0,0x4(%esp)
0872c27d +0x4fad:  mov    (%ebx),%eax
0872c27f +0x4faf:  mov    -0xc(%eax),%eax
0872c282 +0x4fb2:  lea    (%ebx,%eax,1),%eax
0872c285 +0x4fb5:  mov    %eax,(%esp)
0872c288 +0x4fb8:  call   086e0920 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x880>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x880
0872c28d +0x4fbd:  lea    0x4(%ebx),%ecx
0872c290 +0x4fc0:  movl   $&_ZTVSt14basic_ofstreamIwSt11char_traitsIwEE+0xc,(%ebx)
0872c296 +0x4fc6:  movl   $&_ZTVSt14basic_ofstreamIwSt11char_traitsIwEE+0x20,0x90(%ebx)
0872c2a0 +0x4fd0:  mov    %ecx,-0x1c(%ebp)
0872c2a3 +0x4fd3:  mov    %ecx,(%esp)
0872c2a6 +0x4fd6:  call   08727af0 <+0x820>
0872c2ab +0x4fdb:  mov    -0x1c(%ebp),%eax
0872c2ae +0x4fde:  mov    %esi,(%esp)
0872c2b1 +0x4fe1:  mov    %eax,0x4(%esp)
0872c2b5 +0x4fe5:  call   086e0920 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x880>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x880
0872c2ba +0x4fea:  mov    -0xc(%ebp),%ebx
0872c2bd +0x4fed:  mov    -0x8(%ebp),%esi
0872c2c0 +0x4ff0:  mov    -0x4(%ebp),%edi
0872c2c3 +0x4ff3:  mov    %ebp,%esp
0872c2c5 +0x4ff5:  pop    %ebp
0872c2c6 +0x4ff6:  ret
0872c2c7 +0x4ff7:  mov    %eax,-0x20(%ebp)
0872c2ca +0x4ffa:  mov    %esi,(%esp)
0872c2cd +0x4ffd:  call   086e0bf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xb50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xb50
0872c2d2 +0x5002:  mov    -0x20(%ebp),%eax
0872c2d5 +0x5005:  mov    %eax,(%esp)
0872c2d8 +0x5008:  call   08ae3750 <_Unwind_Resume>
0872c2dd +0x500d:  mov    -0x1c(%ebp),%edx
0872c2e0 +0x5010:  mov    %eax,-0x20(%ebp)
0872c2e3 +0x5013:  mov    %edx,(%esp)
0872c2e6 +0x5016:  call   0872b4b0 <+0x41e0>
0872c2eb +0x501b:  mov    -0x20(%ebp),%eax
0872c2ee +0x501e:  mov    -0xc(%edi),%edx
0872c2f1 +0x5021:  mov    &_ZTTSt14basic_ofstreamIwSt11char_traitsIwEE+0x8,%ecx
0872c2f7 +0x5027:  mov    %edi,(%ebx)
0872c2f9 +0x5029:  mov    %ecx,(%ebx,%edx,1)
0872c2fc +0x502c:  jmp    0872c2c7 <+0x4ff7>
0872c2fe +0x502e:  jmp    0872c2ee <+0x501e>
0872c300 +0x5030:  push   %ebp
0872c301 +0x5031:  mov    %esp,%ebp
0872c303 +0x5033:  sub    $0x38,%esp
0872c306 +0x5036:  mov    %esi,-0x8(%ebp)
0872c309 +0x5039:  mov    0xc(%ebp),%esi
0872c30c +0x503c:  mov    %ebx,-0xc(%ebp)
0872c30f +0x503f:  mov    0x8(%ebp),%ebx
0872c312 +0x5042:  mov    %edi,-0x4(%ebp)
0872c315 +0x5045:  mov    0x4(%esi),%eax
0872c318 +0x5048:  mov    0x8(%esi),%edx
0872c31b +0x504b:  mov    %eax,(%ebx)
0872c31d +0x504d:  mov    -0xc(%eax),%eax
0872c320 +0x5050:  mov    %edx,(%ebx,%eax,1)
0872c323 +0x5053:  movl   $0x0,0x4(%esp)
0872c32b +0x505b:  mov    (%ebx),%eax
0872c32d +0x505d:  mov    -0xc(%eax),%eax
0872c330 +0x5060:  lea    (%ebx,%eax,1),%eax
0872c333 +0x5063:  mov    %eax,(%esp)
0872c336 +0x5066:  call   086e0920 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x880>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x880
0872c33b +0x506b:  mov    (%esi),%eax
0872c33d +0x506d:  lea    0x4(%ebx),%edi
0872c340 +0x5070:  mov    0xc(%esi),%edx
0872c343 +0x5073:  mov    %eax,(%ebx)
0872c345 +0x5075:  mov    -0xc(%eax),%eax
0872c348 +0x5078:  mov    %edx,(%ebx,%eax,1)
0872c34b +0x507b:  mov    %edi,(%esp)
0872c34e +0x507e:  call   08727af0 <+0x820>
0872c353 +0x5083:  mov    %edi,0x4(%esp)
0872c357 +0x5087:  mov    (%ebx),%eax
0872c359 +0x5089:  mov    -0xc(%eax),%eax
0872c35c +0x508c:  lea    (%ebx,%eax,1),%eax
0872c35f +0x508f:  mov    %eax,(%esp)
0872c362 +0x5092:  call   086e0920 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x880>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x880
0872c367 +0x5097:  mov    -0xc(%ebp),%ebx
0872c36a +0x509a:  mov    -0x8(%ebp),%esi
0872c36d +0x509d:  mov    -0x4(%ebp),%edi
0872c370 +0x50a0:  mov    %ebp,%esp
0872c372 +0x50a2:  pop    %ebp
0872c373 +0x50a3:  ret
0872c374 +0x50a4:  mov    %eax,(%esp)
0872c377 +0x50a7:  call   08ae3750 <_Unwind_Resume>
0872c37c +0x50ac:  mov    %eax,-0x1c(%ebp)
0872c37f +0x50af:  mov    %edi,(%esp)
0872c382 +0x50b2:  call   0872b4b0 <+0x41e0>
0872c387 +0x50b7:  mov    -0x1c(%ebp),%eax
0872c38a +0x50ba:  mov    0x4(%esi),%edx
0872c38d +0x50bd:  mov    0x8(%esi),%ecx
0872c390 +0x50c0:  mov    %edx,(%ebx)
0872c392 +0x50c2:  mov    -0xc(%edx),%edx
0872c395 +0x50c5:  mov    %ecx,(%ebx,%edx,1)
0872c398 +0x50c8:  jmp    0872c374 <+0x50a4>
0872c39a +0x50ca:  jmp    0872c38a <+0x50ba>
0872c39c +0x50cc:  nop
0872c39d +0x50cd:  nop
0872c39e +0x50ce:  nop
0872c39f +0x50cf:  nop
0872c3a0 +0x50d0:  push   %ebp
0872c3a1 +0x50d1:  mov    %esp,%ebp
0872c3a3 +0x50d3:  push   %edi
0872c3a4 +0x50d4:  push   %esi
0872c3a5 +0x50d5:  push   %ebx
0872c3a6 +0x50d6:  sub    $0x2c,%esp
0872c3a9 +0x50d9:  mov    0x8(%ebp),%ebx
0872c3ac +0x50dc:  lea    0x94(%ebx),%esi
0872c3b2 +0x50e2:  mov    %esi,(%esp)
0872c3b5 +0x50e5:  call   087270f0 <_ZNSt8ios_baseC1Ev>  ; std::ios_base::ios_base()
0872c3ba +0x50ea:  mov    &_ZTTSt14basic_ifstreamIwSt11char_traitsIwEE+0x4,%eax
0872c3bf +0x50ef:  mov    &_ZTTSt14basic_ifstreamIwSt11char_traitsIwEE+0x8,%ecx
0872c3c5 +0x50f5:  movl   $&_ZTVSt9basic_iosIwSt11char_traitsIwEE+0x8,0x94(%ebx)
0872c3cf +0x50ff:  movl   $0x0,0x70(%esi)
0872c3d6 +0x5106:  mov    %eax,(%ebx)
0872c3d8 +0x5108:  mov    -0xc(%eax),%eax
0872c3db +0x510b:  movl   $0x0,0x74(%esi)
0872c3e2 +0x5112:  movl   $0x0,0x4(%ebx)
0872c3e9 +0x5119:  movb   $0x0,0x78(%esi)
0872c3ed +0x511d:  mov    %ecx,(%ebx,%eax,1)
0872c3f0 +0x5120:  movl   $0x0,0x7c(%esi)
0872c3f7 +0x5127:  movl   $0x0,0x80(%esi)
0872c401 +0x5131:  movl   $0x0,0x84(%esi)
0872c40b +0x513b:  movl   $0x0,0x88(%esi)
0872c415 +0x5145:  movl   $0x0,0x4(%esp)
0872c41d +0x514d:  mov    (%ebx),%eax
0872c41f +0x514f:  mov    -0xc(%eax),%eax
0872c422 +0x5152:  lea    (%ebx,%eax,1),%eax
0872c425 +0x5155:  mov    %eax,(%esp)
0872c428 +0x5158:  call   086e0920 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x880>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x880
0872c42d +0x515d:  movl   $&_ZTVSt14basic_ifstreamIwSt11char_traitsIwEE+0xc,(%ebx)
0872c433 +0x5163:  lea    0x8(%ebx),%edi
0872c436 +0x5166:  movl   $&_ZTVSt14basic_ifstreamIwSt11char_traitsIwEE+0x20,0x94(%ebx)
0872c440 +0x5170:  mov    %edi,(%esp)
0872c443 +0x5173:  call   08727af0 <+0x820>
0872c448 +0x5178:  mov    %edi,0x4(%esp)
0872c44c +0x517c:  mov    %esi,(%esp)
0872c44f +0x517f:  call   086e0920 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x880>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x880
0872c454 +0x5184:  mov    0x10(%ebp),%eax
0872c457 +0x5187:  or     $0x8,%eax
0872c45a +0x518a:  mov    %eax,0x8(%esp)
0872c45e +0x518e:  mov    0xc(%ebp),%eax
0872c461 +0x5191:  mov    (%eax),%eax
0872c463 +0x5193:  mov    %edi,(%esp)
0872c466 +0x5196:  mov    %eax,0x4(%esp)
0872c46a +0x519a:  call   0872b0d0 <+0x3e00>
0872c46f +0x519f:  test   %eax,%eax
0872c471 +0x51a1:  je     0872c498 <+0x51c8>
0872c473 +0x51a3:  movl   $0x0,0x4(%esp)
0872c47b +0x51ab:  mov    (%ebx),%eax
0872c47d +0x51ad:  mov    -0xc(%eax),%eax
0872c480 +0x51b0:  lea    (%ebx,%eax,1),%eax
0872c483 +0x51b3:  mov    %eax,(%esp)
0872c486 +0x51b6:  call   086e0cf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xc50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xc50
0872c48b +0x51bb:  add    $0x2c,%esp
0872c48e +0x51be:  pop    %ebx
0872c48f +0x51bf:  pop    %esi
0872c490 +0x51c0:  pop    %edi
0872c491 +0x51c1:  pop    %ebp
0872c492 +0x51c2:  ret
0872c493 +0x51c3:  nop
0872c494 +0x51c4:  lea    0x0(%esi,%eiz,1),%esi
0872c498 +0x51c8:  mov    (%ebx),%eax
0872c49a +0x51ca:  mov    -0xc(%eax),%edx
0872c49d +0x51cd:  add    %ebx,%edx
0872c49f +0x51cf:  mov    0x14(%edx),%eax
0872c4a2 +0x51d2:  mov    %edx,(%esp)
0872c4a5 +0x51d5:  or     $0x4,%eax
0872c4a8 +0x51d8:  mov    %eax,0x4(%esp)
0872c4ac +0x51dc:  call   086e0cf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xc50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xc50
0872c4b1 +0x51e1:  add    $0x2c,%esp
0872c4b4 +0x51e4:  pop    %ebx
0872c4b5 +0x51e5:  pop    %esi
0872c4b6 +0x51e6:  pop    %edi
0872c4b7 +0x51e7:  pop    %ebp
0872c4b8 +0x51e8:  ret
0872c4b9 +0x51e9:  mov    %eax,-0x1c(%ebp)
0872c4bc +0x51ec:  mov    %esi,(%esp)
0872c4bf +0x51ef:  call   086e0bf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xb50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xb50
0872c4c4 +0x51f4:  mov    -0x1c(%ebp),%eax
0872c4c7 +0x51f7:  mov    %eax,(%esp)
0872c4ca +0x51fa:  call   08ae3750 <_Unwind_Resume>
0872c4cf +0x51ff:  mov    %eax,-0x1c(%ebp)
0872c4d2 +0x5202:  mov    %edi,(%esp)
0872c4d5 +0x5205:  call   0872b4b0 <+0x41e0>
0872c4da +0x520a:  mov    -0x1c(%ebp),%eax
0872c4dd +0x520d:  mov    &_ZTTSt14basic_ifstreamIwSt11char_traitsIwEE+0x4,%edx
0872c4e3 +0x5213:  mov    &_ZTTSt14basic_ifstreamIwSt11char_traitsIwEE+0x8,%ecx
0872c4e9 +0x5219:  mov    %edx,(%ebx)
0872c4eb +0x521b:  mov    -0xc(%edx),%edx
0872c4ee +0x521e:  movl   $0x0,0x4(%ebx)
0872c4f5 +0x5225:  mov    %ecx,(%ebx,%edx,1)
0872c4f8 +0x5228:  jmp    0872c4b9 <+0x51e9>
0872c4fa +0x522a:  jmp    0872c4dd <+0x520d>
0872c4fc +0x522c:  nop
0872c4fd +0x522d:  nop
0872c4fe +0x522e:  nop
0872c4ff +0x522f:  nop
0872c500 +0x5230:  push   %ebp
0872c501 +0x5231:  mov    %esp,%ebp
0872c503 +0x5233:  push   %edi
0872c504 +0x5234:  push   %esi
0872c505 +0x5235:  push   %ebx
0872c506 +0x5236:  sub    $0x2c,%esp
0872c509 +0x5239:  mov    0xc(%ebp),%esi
0872c50c +0x523c:  mov    0x8(%ebp),%ebx
0872c50f +0x523f:  mov    0x4(%esi),%eax
0872c512 +0x5242:  mov    0x8(%esi),%edx
0872c515 +0x5245:  mov    %eax,(%ebx)
0872c517 +0x5247:  mov    -0xc(%eax),%eax
0872c51a +0x524a:  movl   $0x0,0x4(%ebx)
0872c521 +0x5251:  mov    %edx,(%ebx,%eax,1)
0872c524 +0x5254:  movl   $0x0,0x4(%esp)
0872c52c +0x525c:  mov    (%ebx),%eax
0872c52e +0x525e:  mov    -0xc(%eax),%eax
0872c531 +0x5261:  lea    (%ebx,%eax,1),%eax
0872c534 +0x5264:  mov    %eax,(%esp)
0872c537 +0x5267:  call   086e0920 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x880>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x880
0872c53c +0x526c:  mov    (%esi),%eax
0872c53e +0x526e:  lea    0x8(%ebx),%edi
0872c541 +0x5271:  mov    0xc(%esi),%edx
0872c544 +0x5274:  mov    %eax,(%ebx)
0872c546 +0x5276:  mov    -0xc(%eax),%eax
0872c549 +0x5279:  mov    %edx,(%ebx,%eax,1)
0872c54c +0x527c:  mov    %edi,(%esp)
0872c54f +0x527f:  call   08727af0 <+0x820>
0872c554 +0x5284:  mov    %edi,0x4(%esp)
0872c558 +0x5288:  mov    (%ebx),%eax
0872c55a +0x528a:  mov    -0xc(%eax),%eax
0872c55d +0x528d:  lea    (%ebx,%eax,1),%eax
0872c560 +0x5290:  mov    %eax,(%esp)
0872c563 +0x5293:  call   086e0920 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x880>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x880
0872c568 +0x5298:  mov    0x14(%ebp),%eax
0872c56b +0x529b:  or     $0x8,%eax
0872c56e +0x529e:  mov    %eax,0x8(%esp)
0872c572 +0x52a2:  mov    0x10(%ebp),%eax
0872c575 +0x52a5:  mov    (%eax),%eax
0872c577 +0x52a7:  mov    %edi,(%esp)
0872c57a +0x52aa:  mov    %eax,0x4(%esp)
0872c57e +0x52ae:  call   0872b0d0 <+0x3e00>
0872c583 +0x52b3:  test   %eax,%eax
0872c585 +0x52b5:  je     0872c5a8 <+0x52d8>
0872c587 +0x52b7:  movl   $0x0,0x4(%esp)
0872c58f +0x52bf:  mov    (%ebx),%eax
0872c591 +0x52c1:  mov    -0xc(%eax),%eax
0872c594 +0x52c4:  lea    (%ebx,%eax,1),%eax
0872c597 +0x52c7:  mov    %eax,(%esp)
0872c59a +0x52ca:  call   086e0cf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xc50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xc50
0872c59f +0x52cf:  add    $0x2c,%esp
0872c5a2 +0x52d2:  pop    %ebx
0872c5a3 +0x52d3:  pop    %esi
0872c5a4 +0x52d4:  pop    %edi
0872c5a5 +0x52d5:  pop    %ebp
0872c5a6 +0x52d6:  ret
0872c5a7 +0x52d7:  nop
0872c5a8 +0x52d8:  mov    (%ebx),%eax
0872c5aa +0x52da:  mov    -0xc(%eax),%edx
0872c5ad +0x52dd:  add    %ebx,%edx
0872c5af +0x52df:  mov    0x14(%edx),%eax
0872c5b2 +0x52e2:  mov    %edx,(%esp)
0872c5b5 +0x52e5:  or     $0x4,%eax
0872c5b8 +0x52e8:  mov    %eax,0x4(%esp)
0872c5bc +0x52ec:  call   086e0cf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xc50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xc50
0872c5c1 +0x52f1:  add    $0x2c,%esp
0872c5c4 +0x52f4:  pop    %ebx
0872c5c5 +0x52f5:  pop    %esi
0872c5c6 +0x52f6:  pop    %edi
0872c5c7 +0x52f7:  pop    %ebp
0872c5c8 +0x52f8:  ret
0872c5c9 +0x52f9:  mov    %eax,(%esp)
0872c5cc +0x52fc:  call   08ae3750 <_Unwind_Resume>
0872c5d1 +0x5301:  mov    %eax,-0x1c(%ebp)
0872c5d4 +0x5304:  mov    %edi,(%esp)
0872c5d7 +0x5307:  call   0872b4b0 <+0x41e0>
0872c5dc +0x530c:  mov    -0x1c(%ebp),%eax
0872c5df +0x530f:  mov    0x4(%esi),%edx
0872c5e2 +0x5312:  mov    0x8(%esi),%ecx
0872c5e5 +0x5315:  mov    %edx,(%ebx)
0872c5e7 +0x5317:  mov    -0xc(%edx),%edx
0872c5ea +0x531a:  movl   $0x0,0x4(%ebx)
0872c5f1 +0x5321:  mov    %ecx,(%ebx,%edx,1)
0872c5f4 +0x5324:  jmp    0872c5c9 <+0x52f9>
0872c5f6 +0x5326:  jmp    0872c5df <+0x530f>
0872c5f8 +0x5328:  nop
0872c5f9 +0x5329:  nop
0872c5fa +0x532a:  nop
0872c5fb +0x532b:  nop
0872c5fc +0x532c:  nop
0872c5fd +0x532d:  nop
0872c5fe +0x532e:  nop
0872c5ff +0x532f:  nop
0872c600 +0x5330:  push   %ebp
0872c601 +0x5331:  mov    %esp,%ebp
0872c603 +0x5333:  push   %edi
0872c604 +0x5334:  push   %esi
0872c605 +0x5335:  push   %ebx
0872c606 +0x5336:  sub    $0x2c,%esp
0872c609 +0x5339:  mov    0x8(%ebp),%ebx
0872c60c +0x533c:  lea    0x94(%ebx),%esi
0872c612 +0x5342:  mov    %esi,(%esp)
0872c615 +0x5345:  call   087270f0 <_ZNSt8ios_baseC1Ev>  ; std::ios_base::ios_base()
0872c61a +0x534a:  mov    &_ZTTSt14basic_ifstreamIwSt11char_traitsIwEE+0x4,%eax
0872c61f +0x534f:  mov    &_ZTTSt14basic_ifstreamIwSt11char_traitsIwEE+0x8,%ecx
0872c625 +0x5355:  movl   $&_ZTVSt9basic_iosIwSt11char_traitsIwEE+0x8,0x94(%ebx)
0872c62f +0x535f:  movl   $0x0,0x70(%esi)
0872c636 +0x5366:  mov    %eax,(%ebx)
0872c638 +0x5368:  mov    -0xc(%eax),%eax
0872c63b +0x536b:  movl   $0x0,0x74(%esi)
0872c642 +0x5372:  movl   $0x0,0x4(%ebx)
0872c649 +0x5379:  movb   $0x0,0x78(%esi)
0872c64d +0x537d:  mov    %ecx,(%ebx,%eax,1)
0872c650 +0x5380:  movl   $0x0,0x7c(%esi)
0872c657 +0x5387:  movl   $0x0,0x80(%esi)
0872c661 +0x5391:  movl   $0x0,0x84(%esi)
0872c66b +0x539b:  movl   $0x0,0x88(%esi)
0872c675 +0x53a5:  movl   $0x0,0x4(%esp)
0872c67d +0x53ad:  mov    (%ebx),%eax
0872c67f +0x53af:  mov    -0xc(%eax),%eax
0872c682 +0x53b2:  lea    (%ebx,%eax,1),%eax
0872c685 +0x53b5:  mov    %eax,(%esp)
0872c688 +0x53b8:  call   086e0920 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x880>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x880
0872c68d +0x53bd:  movl   $&_ZTVSt14basic_ifstreamIwSt11char_traitsIwEE+0xc,(%ebx)
0872c693 +0x53c3:  lea    0x8(%ebx),%edi
0872c696 +0x53c6:  movl   $&_ZTVSt14basic_ifstreamIwSt11char_traitsIwEE+0x20,0x94(%ebx)
0872c6a0 +0x53d0:  mov    %edi,(%esp)
0872c6a3 +0x53d3:  call   08727af0 <+0x820>
0872c6a8 +0x53d8:  mov    %edi,0x4(%esp)
0872c6ac +0x53dc:  mov    %esi,(%esp)
0872c6af +0x53df:  call   086e0920 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x880>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x880
0872c6b4 +0x53e4:  mov    0x10(%ebp),%eax
0872c6b7 +0x53e7:  mov    %edi,(%esp)
0872c6ba +0x53ea:  or     $0x8,%eax
0872c6bd +0x53ed:  mov    %eax,0x8(%esp)
0872c6c1 +0x53f1:  mov    0xc(%ebp),%eax
0872c6c4 +0x53f4:  mov    %eax,0x4(%esp)
0872c6c8 +0x53f8:  call   0872b0d0 <+0x3e00>
0872c6cd +0x53fd:  test   %eax,%eax
0872c6cf +0x53ff:  je     0872c6f8 <+0x5428>
0872c6d1 +0x5401:  movl   $0x0,0x4(%esp)
0872c6d9 +0x5409:  mov    (%ebx),%eax
0872c6db +0x540b:  mov    -0xc(%eax),%eax
0872c6de +0x540e:  lea    (%ebx,%eax,1),%eax
0872c6e1 +0x5411:  mov    %eax,(%esp)
0872c6e4 +0x5414:  call   086e0cf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xc50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xc50
0872c6e9 +0x5419:  add    $0x2c,%esp
0872c6ec +0x541c:  pop    %ebx
0872c6ed +0x541d:  pop    %esi
0872c6ee +0x541e:  pop    %edi
0872c6ef +0x541f:  pop    %ebp
0872c6f0 +0x5420:  ret
0872c6f1 +0x5421:  lea    0x0(%esi,%eiz,1),%esi
0872c6f8 +0x5428:  mov    (%ebx),%eax
0872c6fa +0x542a:  mov    -0xc(%eax),%edx
0872c6fd +0x542d:  add    %ebx,%edx
0872c6ff +0x542f:  mov    0x14(%edx),%eax
0872c702 +0x5432:  mov    %edx,(%esp)
0872c705 +0x5435:  or     $0x4,%eax
0872c708 +0x5438:  mov    %eax,0x4(%esp)
0872c70c +0x543c:  call   086e0cf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xc50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xc50
0872c711 +0x5441:  add    $0x2c,%esp
0872c714 +0x5444:  pop    %ebx
0872c715 +0x5445:  pop    %esi
0872c716 +0x5446:  pop    %edi
0872c717 +0x5447:  pop    %ebp
0872c718 +0x5448:  ret
0872c719 +0x5449:  mov    %eax,-0x1c(%ebp)
0872c71c +0x544c:  mov    %esi,(%esp)
0872c71f +0x544f:  call   086e0bf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xb50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xb50
0872c724 +0x5454:  mov    -0x1c(%ebp),%eax
0872c727 +0x5457:  mov    %eax,(%esp)
0872c72a +0x545a:  call   08ae3750 <_Unwind_Resume>
0872c72f +0x545f:  mov    %eax,-0x1c(%ebp)
0872c732 +0x5462:  mov    %edi,(%esp)
0872c735 +0x5465:  call   0872b4b0 <+0x41e0>
0872c73a +0x546a:  mov    -0x1c(%ebp),%eax
0872c73d +0x546d:  mov    &_ZTTSt14basic_ifstreamIwSt11char_traitsIwEE+0x4,%edx
0872c743 +0x5473:  mov    &_ZTTSt14basic_ifstreamIwSt11char_traitsIwEE+0x8,%ecx
0872c749 +0x5479:  mov    %edx,(%ebx)
0872c74b +0x547b:  mov    -0xc(%edx),%edx
0872c74e +0x547e:  movl   $0x0,0x4(%ebx)
0872c755 +0x5485:  mov    %ecx,(%ebx,%edx,1)
0872c758 +0x5488:  jmp    0872c719 <+0x5449>
0872c75a +0x548a:  jmp    0872c73d <+0x546d>
0872c75c +0x548c:  nop
0872c75d +0x548d:  nop
0872c75e +0x548e:  nop
0872c75f +0x548f:  nop
0872c760 +0x5490:  push   %ebp
0872c761 +0x5491:  mov    %esp,%ebp
0872c763 +0x5493:  push   %edi
0872c764 +0x5494:  push   %esi
0872c765 +0x5495:  push   %ebx
0872c766 +0x5496:  sub    $0x2c,%esp
0872c769 +0x5499:  mov    0xc(%ebp),%esi
0872c76c +0x549c:  mov    0x8(%ebp),%ebx
0872c76f +0x549f:  mov    0x4(%esi),%eax
0872c772 +0x54a2:  mov    0x8(%esi),%edx
0872c775 +0x54a5:  mov    %eax,(%ebx)
0872c777 +0x54a7:  mov    -0xc(%eax),%eax
0872c77a +0x54aa:  movl   $0x0,0x4(%ebx)
0872c781 +0x54b1:  mov    %edx,(%ebx,%eax,1)
0872c784 +0x54b4:  movl   $0x0,0x4(%esp)
0872c78c +0x54bc:  mov    (%ebx),%eax
0872c78e +0x54be:  mov    -0xc(%eax),%eax
0872c791 +0x54c1:  lea    (%ebx,%eax,1),%eax
0872c794 +0x54c4:  mov    %eax,(%esp)
0872c797 +0x54c7:  call   086e0920 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x880>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x880
0872c79c +0x54cc:  mov    (%esi),%eax
0872c79e +0x54ce:  lea    0x8(%ebx),%edi
0872c7a1 +0x54d1:  mov    0xc(%esi),%edx
0872c7a4 +0x54d4:  mov    %eax,(%ebx)
0872c7a6 +0x54d6:  mov    -0xc(%eax),%eax
0872c7a9 +0x54d9:  mov    %edx,(%ebx,%eax,1)
0872c7ac +0x54dc:  mov    %edi,(%esp)
0872c7af +0x54df:  call   08727af0 <+0x820>
0872c7b4 +0x54e4:  mov    %edi,0x4(%esp)
0872c7b8 +0x54e8:  mov    (%ebx),%eax
0872c7ba +0x54ea:  mov    -0xc(%eax),%eax
0872c7bd +0x54ed:  lea    (%ebx,%eax,1),%eax
0872c7c0 +0x54f0:  mov    %eax,(%esp)
0872c7c3 +0x54f3:  call   086e0920 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x880>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x880
0872c7c8 +0x54f8:  mov    0x14(%ebp),%eax
0872c7cb +0x54fb:  mov    %edi,(%esp)
0872c7ce +0x54fe:  or     $0x8,%eax
0872c7d1 +0x5501:  mov    %eax,0x8(%esp)
0872c7d5 +0x5505:  mov    0x10(%ebp),%eax
0872c7d8 +0x5508:  mov    %eax,0x4(%esp)
0872c7dc +0x550c:  call   0872b0d0 <+0x3e00>
0872c7e1 +0x5511:  test   %eax,%eax
0872c7e3 +0x5513:  je     0872c808 <+0x5538>
0872c7e5 +0x5515:  movl   $0x0,0x4(%esp)
0872c7ed +0x551d:  mov    (%ebx),%eax
0872c7ef +0x551f:  mov    -0xc(%eax),%eax
0872c7f2 +0x5522:  lea    (%ebx,%eax,1),%eax
0872c7f5 +0x5525:  mov    %eax,(%esp)
0872c7f8 +0x5528:  call   086e0cf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xc50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xc50
0872c7fd +0x552d:  add    $0x2c,%esp
0872c800 +0x5530:  pop    %ebx
0872c801 +0x5531:  pop    %esi
0872c802 +0x5532:  pop    %edi
0872c803 +0x5533:  pop    %ebp
0872c804 +0x5534:  ret
0872c805 +0x5535:  lea    0x0(%esi),%esi
0872c808 +0x5538:  mov    (%ebx),%eax
0872c80a +0x553a:  mov    -0xc(%eax),%edx
0872c80d +0x553d:  add    %ebx,%edx
0872c80f +0x553f:  mov    0x14(%edx),%eax
0872c812 +0x5542:  mov    %edx,(%esp)
0872c815 +0x5545:  or     $0x4,%eax
0872c818 +0x5548:  mov    %eax,0x4(%esp)
0872c81c +0x554c:  call   086e0cf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xc50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xc50
0872c821 +0x5551:  add    $0x2c,%esp
0872c824 +0x5554:  pop    %ebx
0872c825 +0x5555:  pop    %esi
0872c826 +0x5556:  pop    %edi
0872c827 +0x5557:  pop    %ebp
0872c828 +0x5558:  ret
0872c829 +0x5559:  mov    %eax,(%esp)
0872c82c +0x555c:  call   08ae3750 <_Unwind_Resume>
0872c831 +0x5561:  mov    %eax,-0x1c(%ebp)
0872c834 +0x5564:  mov    %edi,(%esp)
0872c837 +0x5567:  call   0872b4b0 <+0x41e0>
0872c83c +0x556c:  mov    -0x1c(%ebp),%eax
0872c83f +0x556f:  mov    0x4(%esi),%edx
0872c842 +0x5572:  mov    0x8(%esi),%ecx
0872c845 +0x5575:  mov    %edx,(%ebx)
0872c847 +0x5577:  mov    -0xc(%edx),%edx
0872c84a +0x557a:  movl   $0x0,0x4(%ebx)
0872c851 +0x5581:  mov    %ecx,(%ebx,%edx,1)
0872c854 +0x5584:  jmp    0872c829 <+0x5559>
0872c856 +0x5586:  jmp    0872c83f <+0x556f>
0872c858 +0x5588:  nop
0872c859 +0x5589:  nop
0872c85a +0x558a:  nop
0872c85b +0x558b:  nop
0872c85c +0x558c:  nop
0872c85d +0x558d:  nop
0872c85e +0x558e:  nop
0872c85f +0x558f:  nop
0872c860 +0x5590:  push   %ebp
0872c861 +0x5591:  mov    %esp,%ebp
0872c863 +0x5593:  sub    $0x38,%esp
0872c866 +0x5596:  mov    %ebx,-0xc(%ebp)
0872c869 +0x5599:  mov    0x8(%ebp),%ebx
0872c86c +0x559c:  mov    %esi,-0x8(%ebp)
0872c86f +0x559f:  mov    %edi,-0x4(%ebp)
0872c872 +0x55a2:  lea    0x94(%ebx),%esi
0872c878 +0x55a8:  mov    %esi,(%esp)
0872c87b +0x55ab:  call   087270f0 <_ZNSt8ios_baseC1Ev>  ; std::ios_base::ios_base()
0872c880 +0x55b0:  mov    &_ZTTSt14basic_ifstreamIwSt11char_traitsIwEE+0x4,%edi
0872c886 +0x55b6:  mov    &_ZTTSt14basic_ifstreamIwSt11char_traitsIwEE+0x8,%edx
0872c88c +0x55bc:  movl   $&_ZTVSt9basic_iosIwSt11char_traitsIwEE+0x8,0x94(%ebx)
0872c896 +0x55c6:  movl   $0x0,0x70(%esi)
0872c89d +0x55cd:  mov    -0xc(%edi),%eax
0872c8a0 +0x55d0:  mov    %edi,(%ebx)
0872c8a2 +0x55d2:  movl   $0x0,0x4(%ebx)
0872c8a9 +0x55d9:  movl   $0x0,0x74(%esi)
0872c8b0 +0x55e0:  mov    %edx,(%ebx,%eax,1)
0872c8b3 +0x55e3:  movb   $0x0,0x78(%esi)
0872c8b7 +0x55e7:  movl   $0x0,0x7c(%esi)
0872c8be +0x55ee:  movl   $0x0,0x80(%esi)
0872c8c8 +0x55f8:  movl   $0x0,0x84(%esi)
0872c8d2 +0x5602:  movl   $0x0,0x88(%esi)
0872c8dc +0x560c:  movl   $0x0,0x4(%esp)
0872c8e4 +0x5614:  mov    (%ebx),%eax
0872c8e6 +0x5616:  mov    -0xc(%eax),%eax
0872c8e9 +0x5619:  lea    (%ebx,%eax,1),%eax
0872c8ec +0x561c:  mov    %eax,(%esp)
0872c8ef +0x561f:  call   086e0920 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x880>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x880
0872c8f4 +0x5624:  lea    0x8(%ebx),%ecx
0872c8f7 +0x5627:  movl   $&_ZTVSt14basic_ifstreamIwSt11char_traitsIwEE+0xc,(%ebx)
0872c8fd +0x562d:  movl   $&_ZTVSt14basic_ifstreamIwSt11char_traitsIwEE+0x20,0x94(%ebx)
0872c907 +0x5637:  mov    %ecx,-0x1c(%ebp)
0872c90a +0x563a:  mov    %ecx,(%esp)
0872c90d +0x563d:  call   08727af0 <+0x820>
0872c912 +0x5642:  mov    -0x1c(%ebp),%eax
0872c915 +0x5645:  mov    %esi,(%esp)
0872c918 +0x5648:  mov    %eax,0x4(%esp)
0872c91c +0x564c:  call   086e0920 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x880>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x880
0872c921 +0x5651:  mov    -0xc(%ebp),%ebx
0872c924 +0x5654:  mov    -0x8(%ebp),%esi
0872c927 +0x5657:  mov    -0x4(%ebp),%edi
0872c92a +0x565a:  mov    %ebp,%esp
0872c92c +0x565c:  pop    %ebp
0872c92d +0x565d:  ret
0872c92e +0x565e:  mov    %eax,-0x20(%ebp)
0872c931 +0x5661:  mov    %esi,(%esp)
0872c934 +0x5664:  call   086e0bf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xb50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xb50
0872c939 +0x5669:  mov    -0x20(%ebp),%eax
0872c93c +0x566c:  mov    %eax,(%esp)
0872c93f +0x566f:  call   08ae3750 <_Unwind_Resume>
0872c944 +0x5674:  mov    -0x1c(%ebp),%edx
0872c947 +0x5677:  mov    %eax,-0x20(%ebp)
0872c94a +0x567a:  mov    %edx,(%esp)
0872c94d +0x567d:  call   0872b4b0 <+0x41e0>
0872c952 +0x5682:  mov    -0x20(%ebp),%eax
0872c955 +0x5685:  mov    -0xc(%edi),%edx
0872c958 +0x5688:  mov    &_ZTTSt14basic_ifstreamIwSt11char_traitsIwEE+0x8,%ecx
0872c95e +0x568e:  mov    %edi,(%ebx)
0872c960 +0x5690:  movl   $0x0,0x4(%ebx)
0872c967 +0x5697:  mov    %ecx,(%ebx,%edx,1)
0872c96a +0x569a:  jmp    0872c92e <+0x565e>
0872c96c +0x569c:  jmp    0872c955 <+0x5685>
0872c96e +0x569e:  nop
0872c96f +0x569f:  nop
0872c970 +0x56a0:  push   %ebp
0872c971 +0x56a1:  mov    %esp,%ebp
0872c973 +0x56a3:  sub    $0x38,%esp
0872c976 +0x56a6:  mov    %esi,-0x8(%ebp)
0872c979 +0x56a9:  mov    0xc(%ebp),%esi
0872c97c +0x56ac:  mov    %ebx,-0xc(%ebp)
0872c97f +0x56af:  mov    0x8(%ebp),%ebx
0872c982 +0x56b2:  mov    %edi,-0x4(%ebp)
0872c985 +0x56b5:  mov    0x4(%esi),%eax
0872c988 +0x56b8:  mov    0x8(%esi),%edx
0872c98b +0x56bb:  mov    %eax,(%ebx)
0872c98d +0x56bd:  mov    -0xc(%eax),%eax
0872c990 +0x56c0:  movl   $0x0,0x4(%ebx)
0872c997 +0x56c7:  mov    %edx,(%ebx,%eax,1)
0872c99a +0x56ca:  movl   $0x0,0x4(%esp)
0872c9a2 +0x56d2:  mov    (%ebx),%eax
0872c9a4 +0x56d4:  mov    -0xc(%eax),%eax
0872c9a7 +0x56d7:  lea    (%ebx,%eax,1),%eax
0872c9aa +0x56da:  mov    %eax,(%esp)
0872c9ad +0x56dd:  call   086e0920 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x880>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x880
0872c9b2 +0x56e2:  mov    (%esi),%eax
0872c9b4 +0x56e4:  lea    0x8(%ebx),%edi
0872c9b7 +0x56e7:  mov    0xc(%esi),%edx
0872c9ba +0x56ea:  mov    %eax,(%ebx)
0872c9bc +0x56ec:  mov    -0xc(%eax),%eax
0872c9bf +0x56ef:  mov    %edx,(%ebx,%eax,1)
0872c9c2 +0x56f2:  mov    %edi,(%esp)
0872c9c5 +0x56f5:  call   08727af0 <+0x820>
0872c9ca +0x56fa:  mov    %edi,0x4(%esp)
0872c9ce +0x56fe:  mov    (%ebx),%eax
0872c9d0 +0x5700:  mov    -0xc(%eax),%eax
0872c9d3 +0x5703:  lea    (%ebx,%eax,1),%eax
0872c9d6 +0x5706:  mov    %eax,(%esp)
0872c9d9 +0x5709:  call   086e0920 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x880>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x880
0872c9de +0x570e:  mov    -0xc(%ebp),%ebx
0872c9e1 +0x5711:  mov    -0x8(%ebp),%esi
0872c9e4 +0x5714:  mov    -0x4(%ebp),%edi
0872c9e7 +0x5717:  mov    %ebp,%esp
0872c9e9 +0x5719:  pop    %ebp
0872c9ea +0x571a:  ret
0872c9eb +0x571b:  mov    %eax,(%esp)
0872c9ee +0x571e:  call   08ae3750 <_Unwind_Resume>
0872c9f3 +0x5723:  mov    %eax,-0x1c(%ebp)
0872c9f6 +0x5726:  mov    %edi,(%esp)
0872c9f9 +0x5729:  call   0872b4b0 <+0x41e0>
0872c9fe +0x572e:  mov    -0x1c(%ebp),%eax
0872ca01 +0x5731:  mov    0x4(%esi),%edx
0872ca04 +0x5734:  mov    0x8(%esi),%ecx
0872ca07 +0x5737:  mov    %edx,(%ebx)
0872ca09 +0x5739:  mov    -0xc(%edx),%edx
0872ca0c +0x573c:  movl   $0x0,0x4(%ebx)
0872ca13 +0x5743:  mov    %ecx,(%ebx,%edx,1)
0872ca16 +0x5746:  jmp    0872c9eb <+0x571b>
0872ca18 +0x5748:  jmp    0872ca01 <+0x5731>
0872ca1a +0x574a:  nop
0872ca1b +0x574b:  nop
0872ca1c +0x574c:  nop
0872ca1d +0x574d:  nop
0872ca1e +0x574e:  nop
0872ca1f +0x574f:  nop
0872ca20 +0x5750:  mov    0x4(%esp),%eax
0872ca24 +0x5754:  mov    (%eax),%ecx
0872ca26 +0x5756:  add    -0xc(%ecx),%eax
0872ca29 +0x5759:  mov    %eax,0x4(%esp)
0872ca2d +0x575d:  jmp    0872ca30 <+0x5760>
0872ca2f +0x575f:  nop
0872ca30 +0x5760:  push   %ebp
0872ca31 +0x5761:  mov    %esp,%ebp
0872ca33 +0x5763:  sub    $0x28,%esp
0872ca36 +0x5766:  mov    %ebx,-0x8(%ebp)
0872ca39 +0x5769:  mov    0x8(%ebp),%ebx
0872ca3c +0x576c:  mov    %esi,-0x4(%ebp)
0872ca3f +0x576f:  lea    0x4(%ebx),%eax
0872ca42 +0x5772:  movl   $&_ZTVSt14basic_ofstreamIwSt11char_traitsIwEE+0xc,(%ebx)
0872ca48 +0x5778:  lea    0x90(%ebx),%esi
0872ca4e +0x577e:  movl   $&_ZTVSt14basic_ofstreamIwSt11char_traitsIwEE+0x20,0x90(%ebx)
0872ca58 +0x5788:  mov    %eax,(%esp)
0872ca5b +0x578b:  call   0872b4b0 <+0x41e0>
0872ca60 +0x5790:  mov    &_ZTTSt14basic_ofstreamIwSt11char_traitsIwEE+0x4,%eax
0872ca65 +0x5795:  mov    &_ZTTSt14basic_ofstreamIwSt11char_traitsIwEE+0x8,%edx
0872ca6b +0x579b:  mov    %eax,(%ebx)
0872ca6d +0x579d:  mov    -0xc(%eax),%eax
0872ca70 +0x57a0:  mov    %edx,(%ebx,%eax,1)
0872ca73 +0x57a3:  movl   $&_ZTVSt9basic_iosIwSt11char_traitsIwEE+0x8,0x90(%ebx)
0872ca7d +0x57ad:  mov    %esi,(%esp)
0872ca80 +0x57b0:  call   08727070 <_ZNSt8ios_baseD1Ev>  ; std::ios_base::~ios_base()
0872ca85 +0x57b5:  mov    -0x4(%ebp),%esi
0872ca88 +0x57b8:  mov    %ebx,0x8(%ebp)
0872ca8b +0x57bb:  mov    -0x8(%ebp),%ebx
0872ca8e +0x57be:  mov    %ebp,%esp
0872ca90 +0x57c0:  pop    %ebp
0872ca91 +0x57c1:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
0872ca96 +0x57c6:  mov    &_ZTTSt14basic_ofstreamIwSt11char_traitsIwEE+0x4,%edx
0872ca9c +0x57cc:  mov    &_ZTTSt14basic_ofstreamIwSt11char_traitsIwEE+0x8,%ecx
0872caa2 +0x57d2:  mov    %eax,-0xc(%ebp)
0872caa5 +0x57d5:  mov    %edx,(%ebx)
0872caa7 +0x57d7:  mov    -0xc(%edx),%edx
0872caaa +0x57da:  mov    %ecx,(%ebx,%edx,1)
0872caad +0x57dd:  mov    %esi,(%esp)
0872cab0 +0x57e0:  call   086e0bf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xb50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xb50
0872cab5 +0x57e5:  mov    -0xc(%ebp),%eax
0872cab8 +0x57e8:  mov    %eax,(%esp)
0872cabb +0x57eb:  call   08ae3750 <_Unwind_Resume>
0872cac0 +0x57f0:  mov    0x4(%esp),%eax
0872cac4 +0x57f4:  mov    (%eax),%ecx
0872cac6 +0x57f6:  add    -0xc(%ecx),%eax
0872cac9 +0x57f9:  mov    %eax,0x4(%esp)
0872cacd +0x57fd:  jmp    0872cad0 <+0x5800>
0872cacf +0x57ff:  nop
0872cad0 +0x5800:  push   %ebp
0872cad1 +0x5801:  mov    %esp,%ebp
0872cad3 +0x5803:  sub    $0x28,%esp
0872cad6 +0x5806:  mov    %ebx,-0x8(%ebp)
0872cad9 +0x5809:  mov    0x8(%ebp),%ebx
0872cadc +0x580c:  mov    %esi,-0x4(%ebp)
0872cadf +0x580f:  lea    0x8(%ebx),%eax
0872cae2 +0x5812:  movl   $&_ZTVSt14basic_ifstreamIwSt11char_traitsIwEE+0xc,(%ebx)
0872cae8 +0x5818:  lea    0x94(%ebx),%esi
0872caee +0x581e:  movl   $&_ZTVSt14basic_ifstreamIwSt11char_traitsIwEE+0x20,0x94(%ebx)
0872caf8 +0x5828:  mov    %eax,(%esp)
0872cafb +0x582b:  call   0872b4b0 <+0x41e0>
0872cb00 +0x5830:  mov    &_ZTTSt14basic_ifstreamIwSt11char_traitsIwEE+0x4,%eax
0872cb05 +0x5835:  mov    &_ZTTSt14basic_ifstreamIwSt11char_traitsIwEE+0x8,%edx
0872cb0b +0x583b:  mov    %eax,(%ebx)
0872cb0d +0x583d:  mov    -0xc(%eax),%eax
0872cb10 +0x5840:  movl   $0x0,0x4(%ebx)
0872cb17 +0x5847:  mov    %edx,(%ebx,%eax,1)
0872cb1a +0x584a:  movl   $&_ZTVSt9basic_iosIwSt11char_traitsIwEE+0x8,0x94(%ebx)
0872cb24 +0x5854:  mov    %esi,(%esp)
0872cb27 +0x5857:  call   08727070 <_ZNSt8ios_baseD1Ev>  ; std::ios_base::~ios_base()
0872cb2c +0x585c:  mov    -0x4(%ebp),%esi
0872cb2f +0x585f:  mov    %ebx,0x8(%ebp)
0872cb32 +0x5862:  mov    -0x8(%ebp),%ebx
0872cb35 +0x5865:  mov    %ebp,%esp
0872cb37 +0x5867:  pop    %ebp
0872cb38 +0x5868:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
0872cb3d +0x586d:  mov    &_ZTTSt14basic_ifstreamIwSt11char_traitsIwEE+0x4,%edx
0872cb43 +0x5873:  mov    &_ZTTSt14basic_ifstreamIwSt11char_traitsIwEE+0x8,%ecx
0872cb49 +0x5879:  mov    %eax,-0xc(%ebp)
0872cb4c +0x587c:  mov    %edx,(%ebx)
0872cb4e +0x587e:  mov    -0xc(%edx),%edx
0872cb51 +0x5881:  movl   $0x0,0x4(%ebx)
0872cb58 +0x5888:  mov    %ecx,(%ebx,%edx,1)
0872cb5b +0x588b:  mov    %esi,(%esp)
0872cb5e +0x588e:  call   086e0bf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xb50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xb50
0872cb63 +0x5893:  mov    -0xc(%ebp),%eax
0872cb66 +0x5896:  mov    %eax,(%esp)
0872cb69 +0x5899:  call   08ae3750 <_Unwind_Resume>
0872cb6e +0x589e:  nop
0872cb6f +0x589f:  nop
0872cb70 +0x58a0:  push   %ebp
0872cb71 +0x58a1:  mov    %esp,%ebp
0872cb73 +0x58a3:  sub    $0x38,%esp
0872cb76 +0x58a6:  mov    %esi,-0x8(%ebp)
0872cb79 +0x58a9:  mov    0x8(%ebp),%esi
0872cb7c +0x58ac:  mov    %ebx,-0xc(%ebp)
0872cb7f +0x58af:  mov    %edi,-0x4(%ebp)
0872cb82 +0x58b2:  testb  $0x8,0x40(%esi)
0872cb86 +0x58b6:  jne    0872cba0 <+0x58d0>
0872cb88 +0x58b8:  mov    $0xffffffff,%ebx
0872cb8d +0x58bd:  mov    %ebx,%eax
0872cb8f +0x58bf:  mov    -0x8(%ebp),%esi
0872cb92 +0x58c2:  mov    -0xc(%ebp),%ebx
0872cb95 +0x58c5:  mov    -0x4(%ebp),%edi
0872cb98 +0x58c8:  mov    %ebp,%esp
0872cb9a +0x58ca:  pop    %ebp
0872cb9b +0x58cb:  ret
0872cb9c +0x58cc:  lea    0x0(%esi,%eiz,1),%esi
0872cba0 +0x58d0:  lea    0x38(%esi),%edi
0872cba3 +0x58d3:  mov    %edi,(%esp)
0872cba6 +0x58d6:  call   08722580 <_ZNKSt12__basic_fileIcE7is_openEv>  ; std::__basic_file<char>::is_open() const
0872cbab +0x58db:  test   %al,%al
0872cbad +0x58dd:  je     0872cb88 <+0x58b8>
0872cbaf +0x58df:  mov    0x8(%esi),%eax
0872cbb2 +0x58e2:  mov    0xc(%esi),%ebx
0872cbb5 +0x58e5:  mov    %eax,-0x1c(%ebp)
0872cbb8 +0x58e8:  mov    0x74(%esi),%eax
0872cbbb +0x58eb:  test   %eax,%eax
0872cbbd +0x58ed:  je     0872cbff <+0x592f>
0872cbbf +0x58ef:  mov    (%eax),%edx
0872cbc1 +0x58f1:  mov    %eax,(%esp)
0872cbc4 +0x58f4:  call   *0x14(%edx)
0872cbc7 +0x58f7:  sub    -0x1c(%ebp),%ebx
0872cbca +0x58fa:  test   %eax,%eax
0872cbcc +0x58fc:  js     0872cb8d <+0x58bd>
0872cbce +0x58fe:  mov    %edi,(%esp)
0872cbd1 +0x5901:  call   08722750 <_ZNSt12__basic_fileIcE9showmanycEv>  ; std::__basic_file<char>::showmanyc()
0872cbd6 +0x5906:  mov    %eax,%edi
0872cbd8 +0x5908:  mov    0x74(%esi),%eax
0872cbdb +0x590b:  mov    (%eax),%edx
0872cbdd +0x590d:  mov    %eax,(%esp)
0872cbe0 +0x5910:  call   *0x20(%edx)
0872cbe3 +0x5913:  mov    %edi,%edx
0872cbe5 +0x5915:  mov    %eax,%ecx
0872cbe7 +0x5917:  mov    -0x8(%ebp),%esi
0872cbea +0x591a:  mov    %edi,%eax
0872cbec +0x591c:  mov    -0x4(%ebp),%edi
0872cbef +0x591f:  sar    $0x1f,%edx
0872cbf2 +0x5922:  idiv   %ecx
0872cbf4 +0x5924:  add    %eax,%ebx
0872cbf6 +0x5926:  mov    %ebx,%eax
0872cbf8 +0x5928:  mov    -0xc(%ebp),%ebx
0872cbfb +0x592b:  mov    %ebp,%esp
0872cbfd +0x592d:  pop    %ebp
0872cbfe +0x592e:  ret
0872cbff +0x592f:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
0872cc04 +0x5934:  cmp    $0xffffffff,%edx
0872cc07 +0x5937:  je     0872cc15 <+0x5945>
0872cc09 +0x5939:  mov    %eax,(%esp)
0872cc0c +0x593c:  call   08ae3750 <_Unwind_Resume>
0872cc11 +0x5941:  jmp    0872cc04 <+0x5934>
0872cc13 +0x5943:  jmp    0872cc04 <+0x5934>
0872cc15 +0x5945:  mov    %eax,(%esp)
0872cc18 +0x5948:  nop
0872cc19 +0x5949:  lea    0x0(%esi,%eiz,1),%esi
0872cc20 +0x5950:  call   08723df0 <__cxa_call_unexpected>
0872cc25 +0x5955:  nop
0872cc26 +0x5956:  nop
0872cc27 +0x5957:  nop
0872cc28 +0x5958:  nop
0872cc29 +0x5959:  nop
0872cc2a +0x595a:  nop
0872cc2b +0x595b:  nop
0872cc2c +0x595c:  nop
0872cc2d +0x595d:  nop
0872cc2e +0x595e:  nop
0872cc2f +0x595f:  nop
0872cc30 +0x5960:  push   %ebp
0872cc31 +0x5961:  mov    %esp,%ebp
0872cc33 +0x5963:  sub    $0x38,%esp
0872cc36 +0x5966:  mov    %esi,-0x8(%ebp)
0872cc39 +0x5969:  mov    0x8(%ebp),%esi
0872cc3c +0x596c:  mov    %ebx,-0xc(%ebp)
0872cc3f +0x596f:  mov    %edi,-0x4(%ebp)
0872cc42 +0x5972:  testb  $0x8,0x40(%esi)
0872cc46 +0x5976:  jne    0872cc60 <+0x5990>
0872cc48 +0x5978:  mov    $0xffffffff,%eax
0872cc4d +0x597d:  mov    -0xc(%ebp),%ebx
0872cc50 +0x5980:  mov    -0x8(%ebp),%esi
0872cc53 +0x5983:  mov    -0x4(%ebp),%edi
0872cc56 +0x5986:  mov    %ebp,%esp
0872cc58 +0x5988:  pop    %ebp
0872cc59 +0x5989:  ret
0872cc5a +0x598a:  lea    0x0(%esi),%esi
0872cc60 +0x5990:  lea    0x38(%esi),%edi
0872cc63 +0x5993:  mov    %edi,(%esp)
0872cc66 +0x5996:  call   08722580 <_ZNKSt12__basic_fileIcE7is_openEv>  ; std::__basic_file<char>::is_open() const
0872cc6b +0x599b:  test   %al,%al
0872cc6d +0x599d:  je     0872cc48 <+0x5978>
0872cc6f +0x599f:  mov    0x8(%esi),%eax
0872cc72 +0x59a2:  mov    0xc(%esi),%ebx
0872cc75 +0x59a5:  mov    %eax,-0x1c(%ebp)
0872cc78 +0x59a8:  mov    0x78(%esi),%eax
0872cc7b +0x59ab:  test   %eax,%eax
0872cc7d +0x59ad:  je     0872ccc5 <+0x59f5>
0872cc7f +0x59af:  mov    (%eax),%edx
0872cc81 +0x59b1:  mov    %eax,(%esp)
0872cc84 +0x59b4:  call   *0x14(%edx)
0872cc87 +0x59b7:  sub    -0x1c(%ebp),%ebx
0872cc8a +0x59ba:  mov    %eax,%edx
0872cc8c +0x59bc:  sar    $0x2,%ebx
0872cc8f +0x59bf:  test   %edx,%edx
0872cc91 +0x59c1:  mov    %ebx,%eax
0872cc93 +0x59c3:  js     0872cc4d <+0x597d>
0872cc95 +0x59c5:  mov    %edi,(%esp)
0872cc98 +0x59c8:  call   08722750 <_ZNSt12__basic_fileIcE9showmanycEv>  ; std::__basic_file<char>::showmanyc()
0872cc9d +0x59cd:  mov    %eax,%edi
0872cc9f +0x59cf:  mov    0x78(%esi),%eax
0872cca2 +0x59d2:  mov    (%eax),%edx
0872cca4 +0x59d4:  mov    %eax,(%esp)
0872cca7 +0x59d7:  call   *0x20(%edx)
0872ccaa +0x59da:  mov    %edi,%edx
0872ccac +0x59dc:  mov    %eax,%ecx
0872ccae +0x59de:  mov    -0x8(%ebp),%esi
0872ccb1 +0x59e1:  mov    %edi,%eax
0872ccb3 +0x59e3:  mov    -0x4(%ebp),%edi
0872ccb6 +0x59e6:  sar    $0x1f,%edx
0872ccb9 +0x59e9:  idiv   %ecx
0872ccbb +0x59eb:  lea    (%ebx,%eax,1),%eax
0872ccbe +0x59ee:  mov    -0xc(%ebp),%ebx
0872ccc1 +0x59f1:  mov    %ebp,%esp
0872ccc3 +0x59f3:  pop    %ebp
0872ccc4 +0x59f4:  ret
0872ccc5 +0x59f5:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
0872ccca +0x59fa:  cmp    $0xffffffff,%edx
0872cccd +0x59fd:  je     0872ccdb <+0x5a0b>
0872cccf +0x59ff:  mov    %eax,(%esp)
0872ccd2 +0x5a02:  call   08ae3750 <_Unwind_Resume>
0872ccd7 +0x5a07:  jmp    0872ccca <+0x59fa>
0872ccd9 +0x5a09:  jmp    0872ccca <+0x59fa>
0872ccdb +0x5a0b:  mov    %eax,(%esp)
0872ccde +0x5a0e:  xchg   %ax,%ax
0872cce0 +0x5a10:  call   08723df0 <__cxa_call_unexpected>
0872cce5 +0x5a15:  nop
0872cce6 +0x5a16:  nop
0872cce7 +0x5a17:  nop
0872cce8 +0x5a18:  nop
0872cce9 +0x5a19:  nop
0872ccea +0x5a1a:  nop
0872cceb +0x5a1b:  nop
0872ccec +0x5a1c:  nop
0872cced +0x5a1d:  nop
0872ccee +0x5a1e:  nop
0872ccef +0x5a1f:  nop
0872ccf0 +0x5a20:  mov    0x4(%esp),%eax
0872ccf4 +0x5a24:  mov    (%eax),%ecx
0872ccf6 +0x5a26:  add    -0xc(%ecx),%eax
0872ccf9 +0x5a29:  mov    %eax,0x4(%esp)
0872ccfd +0x5a2d:  jmp    0872cd10 <+0x5a40>
0872ccff +0x5a2f:  nop
0872cd00 +0x5a30:  addl   $0xfffffff8,0x4(%esp)
0872cd05 +0x5a35:  jmp    0872cd10 <+0x5a40>
0872cd07 +0x5a37:  nop
0872cd08 +0x5a38:  nop
0872cd09 +0x5a39:  lea    0x0(%esi,%eiz,1),%esi
0872cd10 +0x5a40:  push   %ebp
0872cd11 +0x5a41:  mov    %esp,%ebp
0872cd13 +0x5a43:  push   %esi
0872cd14 +0x5a44:  push   %ebx
0872cd15 +0x5a45:  sub    $0x20,%esp
0872cd18 +0x5a48:  mov    0x8(%ebp),%ebx
0872cd1b +0x5a4b:  movl   $&_ZTVSt13basic_fstreamIwSt11char_traitsIwEE+0xc,(%ebx)
0872cd21 +0x5a51:  lea    0xc(%ebx),%eax
0872cd24 +0x5a54:  movl   $&_ZTVSt13basic_fstreamIwSt11char_traitsIwEE+0x34,0x98(%ebx)
0872cd2e +0x5a5e:  lea    0x98(%ebx),%esi
0872cd34 +0x5a64:  movl   $&_ZTVSt13basic_fstreamIwSt11char_traitsIwEE+0x20,0x8(%ebx)
0872cd3b +0x5a6b:  mov    %eax,(%esp)
0872cd3e +0x5a6e:  call   0872b4b0 <+0x41e0>
0872cd43 +0x5a73:  mov    &_ZTTSt13basic_fstreamIwSt11char_traitsIwEE+0x4,%eax
0872cd48 +0x5a78:  mov    &_ZTTSt13basic_fstreamIwSt11char_traitsIwEE+0x18,%edx
0872cd4e +0x5a7e:  mov    -0xc(%eax),%eax
0872cd51 +0x5a81:  mov    %edx,(%ebx,%eax,1)
0872cd54 +0x5a84:  mov    &_ZTTSt13basic_fstreamIwSt11char_traitsIwEE+0x10,%eax
0872cd59 +0x5a89:  mov    &_ZTTSt13basic_fstreamIwSt11char_traitsIwEE+0x14,%edx
0872cd5f +0x5a8f:  mov    %eax,0x8(%ebx)
0872cd62 +0x5a92:  mov    -0xc(%eax),%eax
0872cd65 +0x5a95:  mov    %edx,0x8(%ebx,%eax,1)
0872cd69 +0x5a99:  mov    &_ZTTSt13basic_fstreamIwSt11char_traitsIwEE+0x8,%eax
0872cd6e +0x5a9e:  mov    &_ZTTSt13basic_fstreamIwSt11char_traitsIwEE+0xc,%edx
0872cd74 +0x5aa4:  mov    %eax,(%ebx)
0872cd76 +0x5aa6:  mov    -0xc(%eax),%eax
0872cd79 +0x5aa9:  movl   $0x0,0x4(%ebx)
0872cd80 +0x5ab0:  mov    %edx,(%ebx,%eax,1)
0872cd83 +0x5ab3:  movl   $&_ZTVSt9basic_iosIwSt11char_traitsIwEE+0x8,0x98(%ebx)
0872cd8d +0x5abd:  mov    %esi,(%esp)
0872cd90 +0x5ac0:  call   08727070 <_ZNSt8ios_baseD1Ev>  ; std::ios_base::~ios_base()
0872cd95 +0x5ac5:  mov    %ebx,0x8(%ebp)
0872cd98 +0x5ac8:  add    $0x20,%esp
0872cd9b +0x5acb:  pop    %ebx
0872cd9c +0x5acc:  pop    %esi
0872cd9d +0x5acd:  pop    %ebp
0872cd9e +0x5ace:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
0872cda3 +0x5ad3:  mov    %eax,-0xc(%ebp)
0872cda6 +0x5ad6:  movl   $&_ZTTSt13basic_fstreamIwSt11char_traitsIwEE+0x4,0x4(%esp)
0872cdae +0x5ade:  mov    %ebx,(%esp)
0872cdb1 +0x5ae1:  call   086e1780 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x16e0>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x16e0
0872cdb6 +0x5ae6:  mov    %esi,(%esp)
0872cdb9 +0x5ae9:  call   086e0bf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xb50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xb50
0872cdbe +0x5aee:  mov    -0xc(%ebp),%eax
0872cdc1 +0x5af1:  mov    %eax,(%esp)
0872cdc4 +0x5af4:  call   08ae3750 <_Unwind_Resume>
0872cdc9 +0x5af9:  nop
0872cdca +0x5afa:  nop
0872cdcb +0x5afb:  nop
0872cdcc +0x5afc:  nop
0872cdcd +0x5afd:  nop
0872cdce +0x5afe:  nop
0872cdcf +0x5aff:  nop
0872cdd0 +0x5b00:  mov    0x4(%esp),%eax
0872cdd4 +0x5b04:  mov    (%eax),%ecx
0872cdd6 +0x5b06:  add    -0xc(%ecx),%eax
0872cdd9 +0x5b09:  mov    %eax,0x4(%esp)
0872cddd +0x5b0d:  jmp    0872cdf0 <+0x5b20>
0872cddf +0x5b0f:  nop
0872cde0 +0x5b10:  addl   $0xfffffff8,0x4(%esp)
0872cde5 +0x5b15:  jmp    0872cdf0 <+0x5b20>
0872cde7 +0x5b17:  nop
0872cde8 +0x5b18:  nop
0872cde9 +0x5b19:  lea    0x0(%esi,%eiz,1),%esi
0872cdf0 +0x5b20:  push   %ebp
0872cdf1 +0x5b21:  mov    %esp,%ebp
0872cdf3 +0x5b23:  push   %esi
0872cdf4 +0x5b24:  push   %ebx
0872cdf5 +0x5b25:  sub    $0x20,%esp
0872cdf8 +0x5b28:  mov    0x8(%ebp),%ebx
0872cdfb +0x5b2b:  movl   $&_ZTVSt13basic_fstreamIcSt11char_traitsIcEE+0xc,(%ebx)
0872ce01 +0x5b31:  lea    0xc(%ebx),%eax
0872ce04 +0x5b34:  movl   $&_ZTVSt13basic_fstreamIcSt11char_traitsIcEE+0x34,0x94(%ebx)
0872ce0e +0x5b3e:  lea    0x94(%ebx),%esi
0872ce14 +0x5b44:  movl   $&_ZTVSt13basic_fstreamIcSt11char_traitsIcEE+0x20,0x8(%ebx)
0872ce1b +0x5b4b:  mov    %eax,(%esp)
0872ce1e +0x5b4e:  call   087291d0 <+0x1f00>
0872ce23 +0x5b53:  mov    &_ZTTSt13basic_fstreamIcSt11char_traitsIcEE+0x4,%eax
0872ce28 +0x5b58:  mov    &_ZTTSt13basic_fstreamIcSt11char_traitsIcEE+0x18,%edx
0872ce2e +0x5b5e:  mov    -0xc(%eax),%eax
0872ce31 +0x5b61:  mov    %edx,(%ebx,%eax,1)
0872ce34 +0x5b64:  mov    &_ZTTSt13basic_fstreamIcSt11char_traitsIcEE+0x10,%eax
0872ce39 +0x5b69:  mov    &_ZTTSt13basic_fstreamIcSt11char_traitsIcEE+0x14,%edx
0872ce3f +0x5b6f:  mov    %eax,0x8(%ebx)
0872ce42 +0x5b72:  mov    -0xc(%eax),%eax
0872ce45 +0x5b75:  mov    %edx,0x8(%ebx,%eax,1)
0872ce49 +0x5b79:  mov    &_ZTTSt13basic_fstreamIcSt11char_traitsIcEE+0x8,%eax
0872ce4e +0x5b7e:  mov    &_ZTTSt13basic_fstreamIcSt11char_traitsIcEE+0xc,%edx
0872ce54 +0x5b84:  mov    %eax,(%ebx)
0872ce56 +0x5b86:  mov    -0xc(%eax),%eax
0872ce59 +0x5b89:  movl   $0x0,0x4(%ebx)
0872ce60 +0x5b90:  mov    %edx,(%ebx,%eax,1)
0872ce63 +0x5b93:  movl   $&_ZTVSt9basic_iosIcSt11char_traitsIcEE+0x8,0x94(%ebx)
0872ce6d +0x5b9d:  mov    %esi,(%esp)
0872ce70 +0x5ba0:  call   08727070 <_ZNSt8ios_baseD1Ev>  ; std::ios_base::~ios_base()
0872ce75 +0x5ba5:  mov    %ebx,0x8(%ebp)
0872ce78 +0x5ba8:  add    $0x20,%esp
0872ce7b +0x5bab:  pop    %ebx
0872ce7c +0x5bac:  pop    %esi
0872ce7d +0x5bad:  pop    %ebp
0872ce7e +0x5bae:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
0872ce83 +0x5bb3:  mov    %eax,-0xc(%ebp)
0872ce86 +0x5bb6:  movl   $&_ZTTSt13basic_fstreamIcSt11char_traitsIcEE+0x4,0x4(%esp)
0872ce8e +0x5bbe:  mov    %ebx,(%esp)
0872ce91 +0x5bc1:  call   086e1730 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x1690>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x1690
0872ce96 +0x5bc6:  mov    %esi,(%esp)
0872ce99 +0x5bc9:  call   086e0c10 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xb70>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xb70
0872ce9e +0x5bce:  mov    -0xc(%ebp),%eax
0872cea1 +0x5bd1:  mov    %eax,(%esp)
0872cea4 +0x5bd4:  call   08ae3750 <_Unwind_Resume>
0872cea9 +0x5bd9:  nop
0872ceaa +0x5bda:  nop
0872ceab +0x5bdb:  nop
0872ceac +0x5bdc:  nop
0872cead +0x5bdd:  nop
0872ceae +0x5bde:  nop
0872ceaf +0x5bdf:  nop
0872ceb0 +0x5be0:  push   %ebp
0872ceb1 +0x5be1:  mov    %esp,%ebp
0872ceb3 +0x5be3:  sub    $0x68,%esp
0872ceb6 +0x5be6:  mov    %ebx,-0xc(%ebp)
0872ceb9 +0x5be9:  mov    0x8(%ebp),%ebx
0872cebc +0x5bec:  mov    %esi,-0x8(%ebp)
0872cebf +0x5bef:  mov    %edi,-0x4(%ebp)
0872cec2 +0x5bf2:  testb  $0x8,0x40(%ebx)
0872cec6 +0x5bf6:  je     0872cece <+0x5bfe>
0872cec8 +0x5bf8:  cmpb   $0x0,0x66(%ebx)
0872cecc +0x5bfc:  je     0872cee0 <+0x5c10>
0872cece +0x5bfe:  mov    $0xffffffff,%eax
0872ced3 +0x5c03:  mov    -0xc(%ebp),%ebx
0872ced6 +0x5c06:  mov    -0x8(%ebp),%esi
0872ced9 +0x5c09:  mov    -0x4(%ebp),%edi
0872cedc +0x5c0c:  mov    %ebp,%esp
0872cede +0x5c0e:  pop    %ebp
0872cedf +0x5c0f:  ret
0872cee0 +0x5c10:  cmpb   $0x0,0x70(%ebx)
0872cee4 +0x5c14:  jne    0872cf68 <+0x5c98>
0872ceea +0x5c1a:  mov    0x8(%ebx),%eax
0872ceed +0x5c1d:  mov    0xc(%ebx),%edx
0872cef0 +0x5c20:  cmp    %eax,%edx
0872cef2 +0x5c22:  ja     0872d0cd <+0x5dfd>
0872cef8 +0x5c28:  mov    0x60(%ebx),%eax
0872cefb +0x5c2b:  movl   $0x1,-0x2c(%ebp)
0872cf02 +0x5c32:  cmp    $0x1,%eax
0872cf05 +0x5c35:  jbe    0872cf0d <+0x5c3d>
0872cf07 +0x5c37:  sub    $0x1,%eax
0872cf0a +0x5c3a:  mov    %eax,-0x2c(%ebp)
0872cf0d +0x5c3d:  mov    0x74(%ebx),%eax
0872cf10 +0x5c40:  test   %eax,%eax
0872cf12 +0x5c42:  je     0872d26c <+0x5f9c>
0872cf18 +0x5c48:  mov    (%eax),%edx
0872cf1a +0x5c4a:  mov    %eax,(%esp)
0872cf1d +0x5c4d:  call   *0x18(%edx)
0872cf20 +0x5c50:  test   %al,%al
0872cf22 +0x5c52:  je     0872cf98 <+0x5cc8>
0872cf24 +0x5c54:  mov    -0x2c(%ebp),%eax
0872cf27 +0x5c57:  mov    %eax,0x8(%esp)
0872cf2b +0x5c5b:  mov    0x4(%ebx),%eax
0872cf2e +0x5c5e:  mov    %eax,0x4(%esp)
0872cf32 +0x5c62:  lea    0x38(%ebx),%eax
0872cf35 +0x5c65:  mov    %eax,(%esp)
0872cf38 +0x5c68:  call   087229c0 <_ZNSt12__basic_fileIcE6xsgetnEPci>  ; std::__basic_file<char>::xsgetn(char*, int)
0872cf3d +0x5c6d:  test   %eax,%eax
0872cf3f +0x5c6f:  mov    %eax,%esi
0872cf41 +0x5c71:  jne    0872d1d8 <+0x5f08>
0872cf47 +0x5c77:  movl   $0xffffffff,0x4(%esp)
0872cf4f +0x5c7f:  mov    %ebx,(%esp)
0872cf52 +0x5c82:  call   08727530 <+0x260>
0872cf57 +0x5c87:  mov    $0xffffffff,%eax
0872cf5c +0x5c8c:  movb   $0x0,0x65(%ebx)
0872cf60 +0x5c90:  jmp    0872ced3 <+0x5c03>
0872cf65 +0x5c95:  lea    0x0(%esi),%esi
0872cf68 +0x5c98:  mov    0x8(%ebx),%eax
0872cf6b +0x5c9b:  cmp    0x4(%ebx),%eax
0872cf6e +0x5c9e:  mov    0x6c(%ebx),%edx
0872cf71 +0x5ca1:  mov    0x5c(%ebx),%ecx
0872cf74 +0x5ca4:  setne  %al
0872cf77 +0x5ca7:  movzbl %al,%eax
0872cf7a +0x5caa:  add    0x68(%ebx),%eax
0872cf7d +0x5cad:  mov    %ecx,0x4(%ebx)
0872cf80 +0x5cb0:  mov    %edx,0xc(%ebx)
0872cf83 +0x5cb3:  mov    %eax,0x68(%ebx)
0872cf86 +0x5cb6:  mov    %eax,0x8(%ebx)
0872cf89 +0x5cb9:  movb   $0x0,0x70(%ebx)
0872cf8d +0x5cbd:  jmp    0872cef0 <+0x5c20>
0872cf92 +0x5cc2:  lea    0x0(%esi),%esi
0872cf98 +0x5cc8:  mov    0x74(%ebx),%eax
0872cf9b +0x5ccb:  mov    (%eax),%edx
0872cf9d +0x5ccd:  mov    %eax,(%esp)
0872cfa0 +0x5cd0:  call   *0x14(%edx)
0872cfa3 +0x5cd3:  test   %eax,%eax
0872cfa5 +0x5cd5:  jle    0872d232 <+0x5f62>
0872cfab +0x5cdb:  imul   -0x2c(%ebp),%eax
0872cfaf +0x5cdf:  mov    %eax,%edx
0872cfb1 +0x5ce1:  mov    0x80(%ebx),%ecx
0872cfb7 +0x5ce7:  mov    %eax,%esi
0872cfb9 +0x5ce9:  mov    0x84(%ebx),%edi
0872cfbf +0x5cef:  sub    %ecx,%edi
0872cfc1 +0x5cf1:  sub    %edi,%esi
0872cfc3 +0x5cf3:  cmp    %edi,%eax
0872cfc5 +0x5cf5:  setle  %al
0872cfc8 +0x5cf8:  movzbl %al,%eax
0872cfcb +0x5cfb:  sub    $0x1,%eax
0872cfce +0x5cfe:  and    %eax,%esi
0872cfd0 +0x5d00:  cmpb   $0x0,0x65(%ebx)
0872cfd4 +0x5d04:  je     0872cfe8 <+0x5d18>
0872cfd6 +0x5d06:  mov    0xc(%ebx),%eax
0872cfd9 +0x5d09:  cmp    0x4(%ebx),%eax
0872cfdc +0x5d0c:  jne    0872cfe8 <+0x5d18>
0872cfde +0x5d0e:  cmp    $0x1,%edi
0872cfe1 +0x5d11:  sbb    %eax,%eax
0872cfe3 +0x5d13:  and    %eax,%esi
0872cfe5 +0x5d15:  lea    0x0(%esi),%esi
0872cfe8 +0x5d18:  cmp    0x7c(%ebx),%edx
0872cfeb +0x5d1b:  jg     0872d1f8 <+0x5f28>
0872cff1 +0x5d21:  test   %edi,%edi
0872cff3 +0x5d23:  je     0872d008 <+0x5d38>
0872cff5 +0x5d25:  mov    %edi,0x8(%esp)
0872cff9 +0x5d29:  mov    %ecx,0x4(%esp)
0872cffd +0x5d2d:  mov    0x78(%ebx),%eax
0872d000 +0x5d30:  mov    %eax,(%esp)
0872d003 +0x5d33:  call   0807d880 <_init+0x178>
0872d008 +0x5d38:  mov    0x78(%ebx),%ecx
0872d00b +0x5d3b:  mov    %ecx,0x80(%ebx)
0872d011 +0x5d41:  mov    0x78(%ebx),%ecx
0872d014 +0x5d44:  mov    0x4c(%ebx),%eax
0872d017 +0x5d47:  mov    0x50(%ebx),%edx
0872d01a +0x5d4a:  add    %edi,%ecx
0872d01c +0x5d4c:  lea    0x38(%ebx),%edi
0872d01f +0x5d4f:  mov    %eax,0x54(%ebx)
0872d022 +0x5d52:  lea    0x80(%ebx),%eax
0872d028 +0x5d58:  mov    %edx,0x58(%ebx)
0872d02b +0x5d5b:  xor    %edx,%edx
0872d02d +0x5d5d:  mov    %edi,-0x34(%ebp)
0872d030 +0x5d60:  lea    0x4c(%ebx),%edi
0872d033 +0x5d63:  mov    %edi,-0x3c(%ebp)
0872d036 +0x5d66:  xor    %edi,%edi
0872d038 +0x5d68:  test   %esi,%esi
0872d03a +0x5d6a:  mov    %eax,-0x40(%ebp)
0872d03d +0x5d6d:  mov    %ecx,%eax
0872d03f +0x5d6f:  mov    %ecx,0x84(%ebx)
0872d045 +0x5d75:  jle    0872d08b <+0x5dbb>
0872d047 +0x5d77:  mov    %esi,%eax
0872d049 +0x5d79:  sub    0x78(%ebx),%eax
0872d04c +0x5d7c:  lea    (%ecx,%eax,1),%eax
0872d04f +0x5d7f:  cmp    0x7c(%ebx),%eax
0872d052 +0x5d82:  jg     0872d271 <+0x5fa1>
0872d058 +0x5d88:  mov    -0x34(%ebp),%eax
0872d05b +0x5d8b:  mov    %esi,0x8(%esp)
0872d05f +0x5d8f:  mov    %ecx,0x4(%esp)
0872d063 +0x5d93:  mov    %eax,(%esp)
0872d066 +0x5d96:  call   087229c0 <_ZNSt12__basic_fileIcE6xsgetnEPci>  ; std::__basic_file<char>::xsgetn(char*, int)
0872d06b +0x5d9b:  mov    $0x1,%edx
0872d070 +0x5da0:  test   %eax,%eax
0872d072 +0x5da2:  je     0872d07f <+0x5daf>
0872d074 +0x5da4:  cmp    $0xffffffff,%eax
0872d077 +0x5da7:  je     0872d1c7 <+0x5ef7>
0872d07d +0x5dad:  xor    %edx,%edx
0872d07f +0x5daf:  add    0x84(%ebx),%eax
0872d085 +0x5db5:  mov    %eax,0x84(%ebx)
0872d08b +0x5dbb:  mov    0x80(%ebx),%esi
0872d091 +0x5dc1:  mov    0x4(%ebx),%ecx
0872d094 +0x5dc4:  cmp    %eax,%esi
0872d096 +0x5dc6:  mov    %ecx,-0x1c(%ebp)
0872d099 +0x5dc9:  jb     0872d118 <+0x5e48>
0872d09b +0x5dcb:  cmp    $0x3,%edi
0872d09e +0x5dce:  je     0872d16c <+0x5e9c>
0872d0a4 +0x5dd4:  mov    -0x1c(%ebp),%esi
0872d0a7 +0x5dd7:  sub    %ecx,%esi
0872d0a9 +0x5dd9:  cmp    $0x2,%edi
0872d0ac +0x5ddc:  je     0872d0b2 <+0x5de2>
0872d0ae +0x5dde:  test   %esi,%esi
0872d0b0 +0x5de0:  je     0872d0e0 <+0x5e10>
0872d0b2 +0x5de2:  test   %esi,%esi
0872d0b4 +0x5de4:  jle    0872d1bf <+0x5eef>
0872d0ba +0x5dea:  mov    %esi,0x4(%esp)
0872d0be +0x5dee:  mov    %ebx,(%esp)
0872d0c1 +0x5df1:  call   08727530 <+0x260>
0872d0c6 +0x5df6:  mov    0x8(%ebx),%eax
0872d0c9 +0x5df9:  movb   $0x1,0x65(%ebx)
0872d0cd +0x5dfd:  movzbl (%eax),%eax
0872d0d0 +0x5e00:  mov    -0xc(%ebp),%ebx
0872d0d3 +0x5e03:  mov    -0x8(%ebp),%esi
0872d0d6 +0x5e06:  mov    -0x4(%ebp),%edi
0872d0d9 +0x5e09:  mov    %ebp,%esp
0872d0db +0x5e0b:  pop    %ebp
0872d0dc +0x5e0c:  ret
0872d0dd +0x5e0d:  lea    0x0(%esi),%esi
0872d0e0 +0x5e10:  test   %dl,%dl
0872d0e2 +0x5e12:  je     0872d1b0 <+0x5ee0>
0872d0e8 +0x5e18:  movl   $0xffffffff,0x4(%esp)
0872d0f0 +0x5e20:  mov    %ebx,(%esp)
0872d0f3 +0x5e23:  call   08727530 <+0x260>
0872d0f8 +0x5e28:  cmp    $0x1,%edi
0872d0fb +0x5e2b:  movb   $0x0,0x65(%ebx)
0872d0ff +0x5e2f:  jne    0872cece <+0x5bfe>
0872d105 +0x5e35:  movl   $"basic_filebuf::underflow incomplete character in file",(%esp)
0872d10c +0x5e3c:  call   086d9780 <_ZSt19__throw_ios_failurePKc>  ; std::__throw_ios_failure(char const*)
0872d111 +0x5e41:  lea    0x0(%esi,%eiz,1),%esi
0872d118 +0x5e48:  mov    0x74(%ebx),%edi
0872d11b +0x5e4b:  mov    %dl,-0x44(%ebp)
0872d11e +0x5e4e:  mov    (%edi),%edi
0872d120 +0x5e50:  mov    %ecx,0x14(%esp)
0872d124 +0x5e54:  mov    %eax,0xc(%esp)
0872d128 +0x5e58:  mov    %esi,0x8(%esp)
0872d12c +0x5e5c:  mov    %edi,-0x38(%ebp)
0872d12f +0x5e5f:  lea    -0x1c(%ebp),%edi
0872d132 +0x5e62:  mov    %edi,0x1c(%esp)
0872d136 +0x5e66:  mov    -0x2c(%ebp),%edi
0872d139 +0x5e69:  lea    (%ecx,%edi,1),%edi
0872d13c +0x5e6c:  mov    -0x40(%ebp),%ecx
0872d13f +0x5e6f:  mov    %edi,0x18(%esp)
0872d143 +0x5e73:  mov    -0x3c(%ebp),%edi
0872d146 +0x5e76:  mov    %ecx,0x10(%esp)
0872d14a +0x5e7a:  mov    -0x38(%ebp),%ecx
0872d14d +0x5e7d:  mov    %edi,0x4(%esp)
0872d151 +0x5e81:  mov    0x74(%ebx),%eax
0872d154 +0x5e84:  mov    %eax,(%esp)
0872d157 +0x5e87:  call   *0x10(%ecx)
0872d15a +0x5e8a:  mov    0x4(%ebx),%ecx
0872d15d +0x5e8d:  movzbl -0x44(%ebp),%edx
0872d161 +0x5e91:  mov    %eax,%edi
0872d163 +0x5e93:  cmp    $0x3,%edi
0872d166 +0x5e96:  jne    0872d0a4 <+0x5dd4>
0872d16c +0x5e9c:  mov    0x78(%ebx),%eax
0872d16f +0x5e9f:  mov    -0x2c(%ebp),%esi
0872d172 +0x5ea2:  mov    %eax,-0x30(%ebp)
0872d175 +0x5ea5:  mov    0x84(%ebx),%eax
0872d17b +0x5eab:  sub    -0x30(%ebp),%eax
0872d17e +0x5eae:  cmp    %eax,%esi
0872d180 +0x5eb0:  jbe    0872d184 <+0x5eb4>
0872d182 +0x5eb2:  mov    %eax,%esi
0872d184 +0x5eb4:  mov    -0x30(%ebp),%eax
0872d187 +0x5eb7:  mov    %dl,-0x44(%ebp)
0872d18a +0x5eba:  mov    %esi,0x8(%esp)
0872d18e +0x5ebe:  mov    %ecx,(%esp)
0872d191 +0x5ec1:  mov    %eax,0x4(%esp)
0872d195 +0x5ec5:  call   0807d8a0 <_init+0x198>
0872d19a +0x5eca:  mov    0x78(%ebx),%eax
0872d19d +0x5ecd:  movzbl -0x44(%ebp),%edx
0872d1a1 +0x5ed1:  add    %esi,%eax
0872d1a3 +0x5ed3:  mov    %eax,0x80(%ebx)
0872d1a9 +0x5ed9:  jmp    0872d0ae <+0x5dde>
0872d1ae +0x5ede:  xchg   %ax,%ax
0872d1b0 +0x5ee0:  mov    0x84(%ebx),%ecx
0872d1b6 +0x5ee6:  mov    $0x1,%si
0872d1ba +0x5eea:  jmp    0872d047 <+0x5d77>
0872d1bf +0x5eef:  test   %dl,%dl
0872d1c1 +0x5ef1:  jne    0872d0e8 <+0x5e18>
0872d1c7 +0x5ef7:  cmp    $0x2,%edi
0872d1ca +0x5efa:  je     0872d1e8 <+0x5f18>
0872d1cc +0x5efc:  movl   $"basic_filebuf::underflow error reading the file",(%esp)
0872d1d3 +0x5f03:  call   086d9780 <_ZSt19__throw_ios_failurePKc>  ; std::__throw_ios_failure(char const*)
0872d1d8 +0x5f08:  xor    %edi,%edi
0872d1da +0x5f0a:  xor    %edx,%edx
0872d1dc +0x5f0c:  jmp    0872d0b2 <+0x5de2>
0872d1e1 +0x5f11:  lea    0x0(%esi,%eiz,1),%esi
0872d1e8 +0x5f18:  movl   $"basic_filebuf::underflow invalid byte sequence in file",(%esp)
0872d1ef +0x5f1f:  call   086d9780 <_ZSt19__throw_ios_failurePKc>  ; std::__throw_ios_failure(char const*)
0872d1f4 +0x5f24:  lea    0x0(%esi,%eiz,1),%esi
0872d1f8 +0x5f28:  mov    %edx,(%esp)
0872d1fb +0x5f2b:  mov    %edx,-0x44(%ebp)
0872d1fe +0x5f2e:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
0872d203 +0x5f33:  test   %edi,%edi
0872d205 +0x5f35:  mov    -0x44(%ebp),%edx
0872d208 +0x5f38:  mov    %eax,%ecx
0872d20a +0x5f3a:  jne    0872d24b <+0x5f7b>
0872d20c +0x5f3c:  mov    0x78(%ebx),%eax
0872d20f +0x5f3f:  test   %eax,%eax
0872d211 +0x5f41:  je     0872d227 <+0x5f57>
0872d213 +0x5f43:  mov    %edx,-0x44(%ebp)
0872d216 +0x5f46:  mov    %ecx,-0x48(%ebp)
0872d219 +0x5f49:  mov    %eax,(%esp)
0872d21c +0x5f4c:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
0872d221 +0x5f51:  mov    -0x48(%ebp),%ecx
0872d224 +0x5f54:  mov    -0x44(%ebp),%edx
0872d227 +0x5f57:  mov    %ecx,0x78(%ebx)
0872d22a +0x5f5a:  mov    %edx,0x7c(%ebx)
0872d22d +0x5f5d:  jmp    0872d00b <+0x5d3b>
0872d232 +0x5f62:  mov    0x74(%ebx),%eax
0872d235 +0x5f65:  mov    %eax,(%esp)
0872d238 +0x5f68:  call   08727900 <+0x630>
0872d23d +0x5f6d:  mov    -0x2c(%ebp),%ecx
0872d240 +0x5f70:  lea    -0x1(%eax,%ecx,1),%edx
0872d244 +0x5f74:  mov    %ecx,%eax
0872d246 +0x5f76:  jmp    0872cfb1 <+0x5ce1>
0872d24b +0x5f7b:  mov    0x80(%ebx),%eax
0872d251 +0x5f81:  mov    %ecx,-0x48(%ebp)
0872d254 +0x5f84:  mov    %ecx,(%esp)
0872d257 +0x5f87:  mov    %edi,0x8(%esp)
0872d25b +0x5f8b:  mov    %eax,0x4(%esp)
0872d25f +0x5f8f:  call   0807d8a0 <_init+0x198>
0872d264 +0x5f94:  mov    -0x48(%ebp),%ecx
0872d267 +0x5f97:  mov    -0x44(%ebp),%edx
0872d26a +0x5f9a:  jmp    0872d20c <+0x5f3c>
0872d26c +0x5f9c:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
0872d271 +0x5fa1:  movl   $"basic_filebuf::underflow codecvt::max_length() is not valid",(%esp)
0872d278 +0x5fa8:  call   086d9780 <_ZSt19__throw_ios_failurePKc>  ; std::__throw_ios_failure(char const*)
0872d27d +0x5fad:  cmp    $0xffffffff,%edx
0872d280 +0x5fb0:  je     0872d28c <+0x5fbc>
0872d282 +0x5fb2:  mov    %eax,(%esp)
0872d285 +0x5fb5:  call   08ae3750 <_Unwind_Resume>
0872d28a +0x5fba:  jmp    0872d27d <+0x5fad>
0872d28c +0x5fbc:  mov    %eax,(%esp)
0872d28f +0x5fbf:  call   08723df0 <__cxa_call_unexpected>
0872d294 +0x5fc4:  nop
0872d295 +0x5fc5:  nop
0872d296 +0x5fc6:  nop
0872d297 +0x5fc7:  nop
0872d298 +0x5fc8:  nop
0872d299 +0x5fc9:  nop
0872d29a +0x5fca:  nop
0872d29b +0x5fcb:  nop
0872d29c +0x5fcc:  nop
0872d29d +0x5fcd:  nop
0872d29e +0x5fce:  nop
0872d29f +0x5fcf:  nop
0872d2a0 +0x5fd0:  push   %ebp
0872d2a1 +0x5fd1:  mov    %esp,%ebp
0872d2a3 +0x5fd3:  sub    $0x68,%esp
0872d2a6 +0x5fd6:  mov    %ebx,-0xc(%ebp)
0872d2a9 +0x5fd9:  mov    0x8(%ebp),%ebx
0872d2ac +0x5fdc:  mov    %esi,-0x8(%ebp)
0872d2af +0x5fdf:  mov    %edi,-0x4(%ebp)
0872d2b2 +0x5fe2:  testb  $0x8,0x40(%ebx)
0872d2b6 +0x5fe6:  je     0872d2be <+0x5fee>
0872d2b8 +0x5fe8:  cmpb   $0x0,0x66(%ebx)
0872d2bc +0x5fec:  je     0872d2d0 <+0x6000>
0872d2be +0x5fee:  mov    $0xffffffff,%eax
0872d2c3 +0x5ff3:  mov    -0xc(%ebp),%ebx
0872d2c6 +0x5ff6:  mov    -0x8(%ebp),%esi
0872d2c9 +0x5ff9:  mov    -0x4(%ebp),%edi
0872d2cc +0x5ffc:  mov    %ebp,%esp
0872d2ce +0x5ffe:  pop    %ebp
0872d2cf +0x5fff:  ret
0872d2d0 +0x6000:  cmpb   $0x0,0x74(%ebx)
0872d2d4 +0x6004:  jne    0872d358 <+0x6088>
0872d2da +0x600a:  mov    0x8(%ebx),%eax
0872d2dd +0x600d:  mov    0xc(%ebx),%edx
0872d2e0 +0x6010:  cmp    %eax,%edx
0872d2e2 +0x6012:  ja     0872d4c6 <+0x61f6>
0872d2e8 +0x6018:  mov    0x60(%ebx),%eax
0872d2eb +0x601b:  movl   $0x1,-0x2c(%ebp)
0872d2f2 +0x6022:  cmp    $0x1,%eax
0872d2f5 +0x6025:  jbe    0872d2fd <+0x602d>
0872d2f7 +0x6027:  sub    $0x1,%eax
0872d2fa +0x602a:  mov    %eax,-0x2c(%ebp)
0872d2fd +0x602d:  mov    0x78(%ebx),%eax
0872d300 +0x6030:  test   %eax,%eax
0872d302 +0x6032:  je     0872d667 <+0x6397>
0872d308 +0x6038:  mov    (%eax),%edx
0872d30a +0x603a:  mov    %eax,(%esp)
0872d30d +0x603d:  call   *0x18(%edx)
0872d310 +0x6040:  test   %al,%al
0872d312 +0x6042:  je     0872d388 <+0x60b8>
0872d314 +0x6044:  mov    -0x2c(%ebp),%eax
0872d317 +0x6047:  mov    %eax,0x8(%esp)
0872d31b +0x604b:  mov    0x4(%ebx),%eax
0872d31e +0x604e:  mov    %eax,0x4(%esp)
0872d322 +0x6052:  lea    0x38(%ebx),%eax
0872d325 +0x6055:  mov    %eax,(%esp)
0872d328 +0x6058:  call   087229c0 <_ZNSt12__basic_fileIcE6xsgetnEPci>  ; std::__basic_file<char>::xsgetn(char*, int)
0872d32d +0x605d:  test   %eax,%eax
0872d32f +0x605f:  mov    %eax,%esi
0872d331 +0x6061:  jne    0872d5d0 <+0x6300>
0872d337 +0x6067:  movl   $0xffffffff,0x4(%esp)
0872d33f +0x606f:  mov    %ebx,(%esp)
0872d342 +0x6072:  call   087277b0 <+0x4e0>
0872d347 +0x6077:  mov    $0xffffffff,%eax
0872d34c +0x607c:  movb   $0x0,0x65(%ebx)
0872d350 +0x6080:  jmp    0872d2c3 <+0x5ff3>
0872d355 +0x6085:  lea    0x0(%esi),%esi
0872d358 +0x6088:  mov    0x8(%ebx),%eax
0872d35b +0x608b:  cmp    0x4(%ebx),%eax
0872d35e +0x608e:  mov    0x70(%ebx),%edx
0872d361 +0x6091:  mov    0x5c(%ebx),%ecx
0872d364 +0x6094:  setne  %al
0872d367 +0x6097:  movzbl %al,%eax
0872d36a +0x609a:  shl    $0x2,%eax
0872d36d +0x609d:  add    0x6c(%ebx),%eax
0872d370 +0x60a0:  mov    %ecx,0x4(%ebx)
0872d373 +0x60a3:  mov    %edx,0xc(%ebx)
0872d376 +0x60a6:  mov    %eax,0x6c(%ebx)
0872d379 +0x60a9:  mov    %eax,0x8(%ebx)
0872d37c +0x60ac:  movb   $0x0,0x74(%ebx)
0872d380 +0x60b0:  jmp    0872d2e0 <+0x6010>
0872d385 +0x60b5:  lea    0x0(%esi),%esi
0872d388 +0x60b8:  mov    0x78(%ebx),%eax
0872d38b +0x60bb:  mov    (%eax),%edx
0872d38d +0x60bd:  mov    %eax,(%esp)
0872d390 +0x60c0:  call   *0x14(%edx)
0872d393 +0x60c3:  test   %eax,%eax
0872d395 +0x60c5:  jle    0872d62d <+0x635d>
0872d39b +0x60cb:  imul   -0x2c(%ebp),%eax
0872d39f +0x60cf:  mov    %eax,%edx
0872d3a1 +0x60d1:  mov    0x84(%ebx),%ecx
0872d3a7 +0x60d7:  mov    %eax,%esi
0872d3a9 +0x60d9:  mov    0x88(%ebx),%edi
0872d3af +0x60df:  sub    %ecx,%edi
0872d3b1 +0x60e1:  sub    %edi,%esi
0872d3b3 +0x60e3:  cmp    %edi,%eax
0872d3b5 +0x60e5:  setle  %al
0872d3b8 +0x60e8:  movzbl %al,%eax
0872d3bb +0x60eb:  sub    $0x1,%eax
0872d3be +0x60ee:  and    %eax,%esi
0872d3c0 +0x60f0:  cmpb   $0x0,0x65(%ebx)
0872d3c4 +0x60f4:  je     0872d3d8 <+0x6108>
0872d3c6 +0x60f6:  mov    0xc(%ebx),%eax
0872d3c9 +0x60f9:  cmp    0x4(%ebx),%eax
0872d3cc +0x60fc:  jne    0872d3d8 <+0x6108>
0872d3ce +0x60fe:  cmp    $0x1,%edi
0872d3d1 +0x6101:  sbb    %eax,%eax
0872d3d3 +0x6103:  and    %eax,%esi
0872d3d5 +0x6105:  lea    0x0(%esi),%esi
0872d3d8 +0x6108:  cmp    0x80(%ebx),%edx
0872d3de +0x610e:  jg     0872d5f0 <+0x6320>
0872d3e4 +0x6114:  test   %edi,%edi
0872d3e6 +0x6116:  je     0872d3fb <+0x612b>
0872d3e8 +0x6118:  mov    %edi,0x8(%esp)
0872d3ec +0x611c:  mov    %ecx,0x4(%esp)
0872d3f0 +0x6120:  mov    0x7c(%ebx),%eax
0872d3f3 +0x6123:  mov    %eax,(%esp)
0872d3f6 +0x6126:  call   0807d880 <_init+0x178>
0872d3fb +0x612b:  mov    0x7c(%ebx),%ecx
0872d3fe +0x612e:  mov    %ecx,0x84(%ebx)
0872d404 +0x6134:  mov    0x7c(%ebx),%ecx
0872d407 +0x6137:  mov    0x4c(%ebx),%eax
0872d40a +0x613a:  mov    0x50(%ebx),%edx
0872d40d +0x613d:  add    %edi,%ecx
0872d40f +0x613f:  lea    0x38(%ebx),%edi
0872d412 +0x6142:  mov    %eax,0x54(%ebx)
0872d415 +0x6145:  lea    0x84(%ebx),%eax
0872d41b +0x614b:  mov    %edx,0x58(%ebx)
0872d41e +0x614e:  xor    %edx,%edx
0872d420 +0x6150:  mov    %edi,-0x34(%ebp)
0872d423 +0x6153:  lea    0x4c(%ebx),%edi
0872d426 +0x6156:  mov    %edi,-0x3c(%ebp)
0872d429 +0x6159:  xor    %edi,%edi
0872d42b +0x615b:  test   %esi,%esi
0872d42d +0x615d:  mov    %eax,-0x40(%ebp)
0872d430 +0x6160:  mov    %ecx,%eax
0872d432 +0x6162:  mov    %ecx,0x88(%ebx)
0872d438 +0x6168:  jle    0872d481 <+0x61b1>
0872d43a +0x616a:  mov    %esi,%eax
0872d43c +0x616c:  sub    0x7c(%ebx),%eax
0872d43f +0x616f:  lea    (%ecx,%eax,1),%eax
0872d442 +0x6172:  cmp    0x80(%ebx),%eax
0872d448 +0x6178:  jg     0872d66c <+0x639c>
0872d44e +0x617e:  mov    -0x34(%ebp),%eax
0872d451 +0x6181:  mov    %esi,0x8(%esp)
0872d455 +0x6185:  mov    %ecx,0x4(%esp)
0872d459 +0x6189:  mov    %eax,(%esp)
0872d45c +0x618c:  call   087229c0 <_ZNSt12__basic_fileIcE6xsgetnEPci>  ; std::__basic_file<char>::xsgetn(char*, int)
0872d461 +0x6191:  mov    $0x1,%edx
0872d466 +0x6196:  test   %eax,%eax
0872d468 +0x6198:  je     0872d475 <+0x61a5>
0872d46a +0x619a:  cmp    $0xffffffff,%eax
0872d46d +0x619d:  je     0872d5bf <+0x62ef>
0872d473 +0x61a3:  xor    %edx,%edx
0872d475 +0x61a5:  add    0x88(%ebx),%eax
0872d47b +0x61ab:  mov    %eax,0x88(%ebx)
0872d481 +0x61b1:  mov    0x84(%ebx),%esi
0872d487 +0x61b7:  mov    0x4(%ebx),%ecx
0872d48a +0x61ba:  cmp    %eax,%esi
0872d48c +0x61bc:  mov    %ecx,-0x1c(%ebp)
0872d48f +0x61bf:  jb     0872d510 <+0x6240>
0872d491 +0x61c1:  cmp    $0x3,%edi
0872d494 +0x61c4:  je     0872d564 <+0x6294>
0872d49a +0x61ca:  mov    -0x1c(%ebp),%esi
0872d49d +0x61cd:  sub    %ecx,%esi
0872d49f +0x61cf:  sar    $0x2,%esi
0872d4a2 +0x61d2:  cmp    $0x2,%edi
0872d4a5 +0x61d5:  je     0872d4ab <+0x61db>
0872d4a7 +0x61d7:  test   %esi,%esi
0872d4a9 +0x61d9:  je     0872d4d8 <+0x6208>
0872d4ab +0x61db:  test   %esi,%esi
0872d4ad +0x61dd:  jle    0872d5b7 <+0x62e7>
0872d4b3 +0x61e3:  mov    %esi,0x4(%esp)
0872d4b7 +0x61e7:  mov    %ebx,(%esp)
0872d4ba +0x61ea:  call   087277b0 <+0x4e0>
0872d4bf +0x61ef:  mov    0x8(%ebx),%eax
0872d4c2 +0x61f2:  movb   $0x1,0x65(%ebx)
0872d4c6 +0x61f6:  mov    (%eax),%eax
0872d4c8 +0x61f8:  mov    -0xc(%ebp),%ebx
0872d4cb +0x61fb:  mov    -0x8(%ebp),%esi
0872d4ce +0x61fe:  mov    -0x4(%ebp),%edi
0872d4d1 +0x6201:  mov    %ebp,%esp
0872d4d3 +0x6203:  pop    %ebp
0872d4d4 +0x6204:  ret
0872d4d5 +0x6205:  lea    0x0(%esi),%esi
0872d4d8 +0x6208:  test   %dl,%dl
0872d4da +0x620a:  je     0872d5a8 <+0x62d8>
0872d4e0 +0x6210:  movl   $0xffffffff,0x4(%esp)
0872d4e8 +0x6218:  mov    %ebx,(%esp)
0872d4eb +0x621b:  call   087277b0 <+0x4e0>
0872d4f0 +0x6220:  cmp    $0x1,%edi
0872d4f3 +0x6223:  movb   $0x0,0x65(%ebx)
0872d4f7 +0x6227:  jne    0872d2be <+0x5fee>
0872d4fd +0x622d:  movl   $"basic_filebuf::underflow incomplete character in file",(%esp)
0872d504 +0x6234:  call   086d9780 <_ZSt19__throw_ios_failurePKc>  ; std::__throw_ios_failure(char const*)
0872d509 +0x6239:  lea    0x0(%esi,%eiz,1),%esi
0872d510 +0x6240:  mov    0x78(%ebx),%edi
0872d513 +0x6243:  mov    %dl,-0x44(%ebp)
0872d516 +0x6246:  mov    (%edi),%edi
0872d518 +0x6248:  mov    %ecx,0x14(%esp)
0872d51c +0x624c:  mov    %eax,0xc(%esp)
0872d520 +0x6250:  mov    %esi,0x8(%esp)
0872d524 +0x6254:  mov    %edi,-0x38(%ebp)
0872d527 +0x6257:  lea    -0x1c(%ebp),%edi
0872d52a +0x625a:  mov    %edi,0x1c(%esp)
0872d52e +0x625e:  mov    -0x2c(%ebp),%edi
0872d531 +0x6261:  lea    (%ecx,%edi,4),%edi
0872d534 +0x6264:  mov    -0x40(%ebp),%ecx
0872d537 +0x6267:  mov    %edi,0x18(%esp)
0872d53b +0x626b:  mov    -0x3c(%ebp),%edi
0872d53e +0x626e:  mov    %ecx,0x10(%esp)
0872d542 +0x6272:  mov    -0x38(%ebp),%ecx
0872d545 +0x6275:  mov    %edi,0x4(%esp)
0872d549 +0x6279:  mov    0x78(%ebx),%eax
0872d54c +0x627c:  mov    %eax,(%esp)
0872d54f +0x627f:  call   *0x10(%ecx)
0872d552 +0x6282:  mov    0x4(%ebx),%ecx
0872d555 +0x6285:  movzbl -0x44(%ebp),%edx
0872d559 +0x6289:  mov    %eax,%edi
0872d55b +0x628b:  cmp    $0x3,%edi
0872d55e +0x628e:  jne    0872d49a <+0x61ca>
0872d564 +0x6294:  mov    0x7c(%ebx),%eax
0872d567 +0x6297:  mov    -0x2c(%ebp),%esi
0872d56a +0x629a:  mov    %eax,-0x30(%ebp)
0872d56d +0x629d:  mov    0x88(%ebx),%eax
0872d573 +0x62a3:  sub    -0x30(%ebp),%eax
0872d576 +0x62a6:  cmp    %eax,%esi
0872d578 +0x62a8:  jbe    0872d57c <+0x62ac>
0872d57a +0x62aa:  mov    %eax,%esi
0872d57c +0x62ac:  mov    -0x30(%ebp),%eax
0872d57f +0x62af:  mov    %dl,-0x44(%ebp)
0872d582 +0x62b2:  mov    %esi,0x8(%esp)
0872d586 +0x62b6:  mov    %ecx,(%esp)
0872d589 +0x62b9:  mov    %eax,0x4(%esp)
0872d58d +0x62bd:  call   0807dc30 <_init+0x528>
0872d592 +0x62c2:  mov    0x7c(%ebx),%eax
0872d595 +0x62c5:  movzbl -0x44(%ebp),%edx
0872d599 +0x62c9:  add    %esi,%eax
0872d59b +0x62cb:  mov    %eax,0x84(%ebx)
0872d5a1 +0x62d1:  jmp    0872d4a7 <+0x61d7>
0872d5a6 +0x62d6:  xchg   %ax,%ax
0872d5a8 +0x62d8:  mov    0x88(%ebx),%ecx
0872d5ae +0x62de:  mov    $0x1,%si
0872d5b2 +0x62e2:  jmp    0872d43a <+0x616a>
0872d5b7 +0x62e7:  test   %dl,%dl
0872d5b9 +0x62e9:  jne    0872d4e0 <+0x6210>
0872d5bf +0x62ef:  cmp    $0x2,%edi
0872d5c2 +0x62f2:  je     0872d5e0 <+0x6310>
0872d5c4 +0x62f4:  movl   $"basic_filebuf::underflow error reading the file",(%esp)
0872d5cb +0x62fb:  call   086d9780 <_ZSt19__throw_ios_failurePKc>  ; std::__throw_ios_failure(char const*)
0872d5d0 +0x6300:  xor    %edi,%edi
0872d5d2 +0x6302:  xor    %edx,%edx
0872d5d4 +0x6304:  jmp    0872d4ab <+0x61db>
0872d5d9 +0x6309:  lea    0x0(%esi,%eiz,1),%esi
0872d5e0 +0x6310:  movl   $"basic_filebuf::underflow invalid byte sequence in file",(%esp)
0872d5e7 +0x6317:  call   086d9780 <_ZSt19__throw_ios_failurePKc>  ; std::__throw_ios_failure(char const*)
0872d5ec +0x631c:  lea    0x0(%esi,%eiz,1),%esi
0872d5f0 +0x6320:  mov    %edx,(%esp)
0872d5f3 +0x6323:  mov    %edx,-0x44(%ebp)
0872d5f6 +0x6326:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
0872d5fb +0x632b:  test   %edi,%edi
0872d5fd +0x632d:  mov    -0x44(%ebp),%edx
0872d600 +0x6330:  mov    %eax,%ecx
0872d602 +0x6332:  jne    0872d646 <+0x6376>
0872d604 +0x6334:  mov    0x7c(%ebx),%eax
0872d607 +0x6337:  test   %eax,%eax
0872d609 +0x6339:  je     0872d61f <+0x634f>
0872d60b +0x633b:  mov    %edx,-0x44(%ebp)
0872d60e +0x633e:  mov    %ecx,-0x48(%ebp)
0872d611 +0x6341:  mov    %eax,(%esp)
0872d614 +0x6344:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
0872d619 +0x6349:  mov    -0x48(%ebp),%ecx
0872d61c +0x634c:  mov    -0x44(%ebp),%edx
0872d61f +0x634f:  mov    %ecx,0x7c(%ebx)
0872d622 +0x6352:  mov    %edx,0x80(%ebx)
0872d628 +0x6358:  jmp    0872d3fe <+0x612e>
0872d62d +0x635d:  mov    0x78(%ebx),%eax
0872d630 +0x6360:  mov    %eax,(%esp)
0872d633 +0x6363:  call   087278a0 <+0x5d0>
0872d638 +0x6368:  mov    -0x2c(%ebp),%ecx
0872d63b +0x636b:  lea    -0x1(%eax,%ecx,1),%edx
0872d63f +0x636f:  mov    %ecx,%eax
0872d641 +0x6371:  jmp    0872d3a1 <+0x60d1>
0872d646 +0x6376:  mov    0x84(%ebx),%eax
0872d64c +0x637c:  mov    %ecx,-0x48(%ebp)
0872d64f +0x637f:  mov    %ecx,(%esp)
0872d652 +0x6382:  mov    %edi,0x8(%esp)
0872d656 +0x6386:  mov    %eax,0x4(%esp)
0872d65a +0x638a:  call   0807d8a0 <_init+0x198>
0872d65f +0x638f:  mov    -0x48(%ebp),%ecx
0872d662 +0x6392:  mov    -0x44(%ebp),%edx
0872d665 +0x6395:  jmp    0872d604 <+0x6334>
0872d667 +0x6397:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
0872d66c +0x639c:  movl   $"basic_filebuf::underflow codecvt::max_length() is not valid",(%esp)
0872d673 +0x63a3:  call   086d9780 <_ZSt19__throw_ios_failurePKc>  ; std::__throw_ios_failure(char const*)
0872d678 +0x63a8:  cmp    $0xffffffff,%edx
0872d67b +0x63ab:  je     0872d687 <+0x63b7>
0872d67d +0x63ad:  mov    %eax,(%esp)
0872d680 +0x63b0:  call   08ae3750 <_Unwind_Resume>
0872d685 +0x63b5:  jmp    0872d678 <+0x63a8>
0872d687 +0x63b7:  mov    %eax,(%esp)
0872d68a +0x63ba:  call   08723df0 <__cxa_call_unexpected>
0872d68f +0x63bf:  nop
0872d690 +0x63c0:  push   %ebp
0872d691 +0x63c1:  mov    %esp,%ebp
0872d693 +0x63c3:  push   %esi
0872d694 +0x63c4:  push   %ebx
0872d695 +0x63c5:  sub    $0x40,%esp
0872d698 +0x63c8:  mov    0x14(%ebp),%edx
0872d69b +0x63cb:  mov    0x10(%ebp),%eax
0872d69e +0x63ce:  mov    0x8(%ebp),%ebx
0872d6a1 +0x63d1:  mov    0xc(%ebp),%esi
0872d6a4 +0x63d4:  mov    %edx,-0x2c(%ebp)
0872d6a7 +0x63d7:  mov    %eax,-0x30(%ebp)
0872d6aa +0x63da:  mov    %gs:0x14,%edx
0872d6b1 +0x63e1:  mov    %edx,-0xc(%ebp)
0872d6b4 +0x63e4:  xor    %edx,%edx
0872d6b6 +0x63e6:  movl   $0xffffffff,(%ebx)
0872d6bc +0x63ec:  movl   $0xffffffff,0x4(%ebx)
0872d6c3 +0x63f3:  movl   $0x0,0x8(%ebx)
0872d6ca +0x63fa:  movl   $0x0,0xc(%ebx)
0872d6d1 +0x6401:  mov    %esi,(%esp)
0872d6d4 +0x6404:  call   08728770 <+0x14a0>
0872d6d9 +0x6409:  test   %al,%al
0872d6db +0x640b:  jne    0872d6f8 <+0x6428>
0872d6dd +0x640d:  mov    -0xc(%ebp),%edx
0872d6e0 +0x6410:  xor    %gs:0x14,%edx
0872d6e7 +0x6417:  mov    %ebx,%eax
0872d6e9 +0x6419:  jne    0872d79a <+0x64ca>
0872d6ef +0x641f:  add    $0x40,%esp
0872d6f2 +0x6422:  pop    %ebx
0872d6f3 +0x6423:  pop    %esi
0872d6f4 +0x6424:  pop    %ebp
0872d6f5 +0x6425:  ret    $0x4
0872d6f8 +0x6428:  mov    0x18(%ebp),%eax
0872d6fb +0x642b:  mov    -0x2c(%ebp),%edx
0872d6fe +0x642e:  mov    %eax,0xc(%esp)
0872d702 +0x6432:  mov    -0x30(%ebp),%eax
0872d705 +0x6435:  mov    %edx,0x8(%esp)
0872d709 +0x6439:  mov    %eax,0x4(%esp)
0872d70d +0x643d:  lea    0x38(%esi),%eax
0872d710 +0x6440:  mov    %eax,(%esp)
0872d713 +0x6443:  call   08722880 <_ZNSt12__basic_fileIcE7seekoffExSt12_Ios_Seekdir>  ; std::__basic_file<char>::seekoff(long long, std::_Ios_Seekdir)
0872d718 +0x6448:  movl   $0x0,-0x14(%ebp)
0872d71f +0x644f:  movl   $0x0,-0x10(%ebp)
0872d726 +0x6456:  mov    %edx,%ecx
0872d728 +0x6458:  mov    %eax,%edx
0872d72a +0x645a:  mov    %ecx,-0x18(%ebp)
0872d72d +0x645d:  mov    %eax,-0x1c(%ebp)
0872d730 +0x6460:  mov    %eax,(%ebx)
0872d732 +0x6462:  mov    -0x18(%ebp),%eax
0872d735 +0x6465:  mov    %eax,0x4(%ebx)
0872d738 +0x6468:  mov    -0x14(%ebp),%ecx
0872d73b +0x646b:  and    %edx,%eax
0872d73d +0x646d:  cmp    $0xffffffff,%eax
0872d740 +0x6470:  mov    %ecx,0x8(%ebx)
0872d743 +0x6473:  mov    -0x10(%ebp),%ecx
0872d746 +0x6476:  mov    %ecx,0xc(%ebx)
0872d749 +0x6479:  je     0872d6dd <+0x640d>
0872d74b +0x647b:  mov    0x7c(%esi),%eax
0872d74e +0x647e:  movb   $0x0,0x65(%esi)
0872d752 +0x6482:  movb   $0x0,0x66(%esi)
0872d756 +0x6486:  movl   $0x0,0x14(%esi)
0872d75d +0x648d:  mov    %eax,0x88(%esi)
0872d763 +0x6493:  mov    %eax,0x84(%esi)
0872d769 +0x6499:  mov    0x5c(%esi),%eax
0872d76c +0x649c:  movl   $0x0,0x10(%esi)
0872d773 +0x64a3:  movl   $0x0,0x18(%esi)
0872d77a +0x64aa:  mov    %eax,0x4(%esi)
0872d77d +0x64ad:  mov    %eax,0x8(%esi)
0872d780 +0x64b0:  mov    %eax,0xc(%esi)
0872d783 +0x64b3:  mov    0x1c(%ebp),%eax
0872d786 +0x64b6:  mov    0x20(%ebp),%edx
0872d789 +0x64b9:  mov    %eax,0x4c(%esi)
0872d78c +0x64bc:  mov    %edx,0x50(%esi)
0872d78f +0x64bf:  mov    %eax,0x8(%ebx)
0872d792 +0x64c2:  mov    %edx,0xc(%ebx)
0872d795 +0x64c5:  jmp    0872d6dd <+0x640d>
0872d79a +0x64ca:  call   0807d980 <_init+0x278>
0872d79f +0x64cf:  nop
0872d7a0 +0x64d0:  push   %ebp
0872d7a1 +0x64d1:  mov    %esp,%ebp
0872d7a3 +0x64d3:  push   %esi
0872d7a4 +0x64d4:  push   %ebx
0872d7a5 +0x64d5:  sub    $0x30,%esp
0872d7a8 +0x64d8:  mov    0x8(%ebp),%esi
0872d7ab +0x64db:  mov    0x10(%ebp),%eax
0872d7ae +0x64de:  mov    0x14(%ebp),%edx
0872d7b1 +0x64e1:  mov    0xc(%ebp),%ebx
0872d7b4 +0x64e4:  movl   $0xffffffff,(%esi)
0872d7ba +0x64ea:  mov    %eax,-0x10(%ebp)
0872d7bd +0x64ed:  mov    %edx,-0xc(%ebp)
0872d7c0 +0x64f0:  movl   $0xffffffff,0x4(%esi)
0872d7c7 +0x64f7:  lea    0x38(%ebx),%eax
0872d7ca +0x64fa:  movl   $0x0,0x8(%esi)
0872d7d1 +0x6501:  movl   $0x0,0xc(%esi)
0872d7d8 +0x6508:  mov    %eax,(%esp)
0872d7db +0x650b:  call   08722580 <_ZNKSt12__basic_fileIcE7is_openEv>  ; std::__basic_file<char>::is_open() const
0872d7e0 +0x6510:  test   %al,%al
0872d7e2 +0x6512:  je     0872d81d <+0x654d>
0872d7e4 +0x6514:  cmpb   $0x0,0x74(%ebx)
0872d7e8 +0x6518:  jne    0872d828 <+0x6558>
0872d7ea +0x651a:  mov    0x18(%ebp),%eax
0872d7ed +0x651d:  mov    0x1c(%ebp),%edx
0872d7f0 +0x6520:  movl   $0x0,0x10(%esp)
0872d7f8 +0x6528:  mov    %ebx,0x4(%esp)
0872d7fc +0x652c:  mov    %eax,0x14(%esp)
0872d800 +0x6530:  mov    -0x10(%ebp),%eax
0872d803 +0x6533:  mov    %edx,0x18(%esp)
0872d807 +0x6537:  mov    -0xc(%ebp),%edx
0872d80a +0x653a:  mov    %esi,(%esp)
0872d80d +0x653d:  mov    %eax,0x8(%esp)
0872d811 +0x6541:  mov    %edx,0xc(%esp)
0872d815 +0x6545:  call   0872d690 <+0x63c0>
0872d81a +0x654a:  sub    $0x4,%esp
0872d81d +0x654d:  lea    -0x8(%ebp),%esp
0872d820 +0x6550:  mov    %esi,%eax
0872d822 +0x6552:  pop    %ebx
0872d823 +0x6553:  pop    %esi
0872d824 +0x6554:  pop    %ebp
0872d825 +0x6555:  ret    $0x4
0872d828 +0x6558:  mov    0x8(%ebx),%eax
0872d82b +0x655b:  cmp    0x4(%ebx),%eax
0872d82e +0x655e:  mov    0x70(%ebx),%ecx
0872d831 +0x6561:  mov    0x5c(%ebx),%edx
0872d834 +0x6564:  setne  %al
0872d837 +0x6567:  movzbl %al,%eax
0872d83a +0x656a:  shl    $0x2,%eax
0872d83d +0x656d:  add    0x6c(%ebx),%eax
0872d840 +0x6570:  mov    %edx,0x4(%ebx)
0872d843 +0x6573:  mov    %ecx,0xc(%ebx)
0872d846 +0x6576:  mov    %eax,0x6c(%ebx)
0872d849 +0x6579:  mov    %eax,0x8(%ebx)
0872d84c +0x657c:  movb   $0x0,0x74(%ebx)
0872d850 +0x6580:  jmp    0872d7ea <+0x651a>
0872d852 +0x6582:  cmp    $0xffffffff,%edx
0872d855 +0x6585:  je     0872d85f <+0x658f>
0872d857 +0x6587:  mov    %eax,(%esp)
0872d85a +0x658a:  call   08ae3750 <_Unwind_Resume>
0872d85f +0x658f:  mov    %eax,(%esp)
0872d862 +0x6592:  call   08723df0 <__cxa_call_unexpected>
0872d867 +0x6597:  nop
0872d868 +0x6598:  nop
0872d869 +0x6599:  nop
0872d86a +0x659a:  nop
0872d86b +0x659b:  nop
0872d86c +0x659c:  nop
0872d86d +0x659d:  nop
0872d86e +0x659e:  nop
0872d86f +0x659f:  nop
0872d870 +0x65a0:  push   %ebp
0872d871 +0x65a1:  mov    %esp,%ebp
0872d873 +0x65a3:  push   %edi
0872d874 +0x65a4:  xor    %edi,%edi
0872d876 +0x65a6:  push   %esi
0872d877 +0x65a7:  push   %ebx
0872d878 +0x65a8:  sub    $0x6c,%esp
0872d87b +0x65ab:  mov    0x10(%ebp),%eax
0872d87e +0x65ae:  mov    0xc(%ebp),%ebx
0872d881 +0x65b1:  mov    0x14(%ebp),%edx
0872d884 +0x65b4:  mov    0x8(%ebp),%esi
0872d887 +0x65b7:  mov    %eax,-0x38(%ebp)
0872d88a +0x65ba:  mov    0x78(%ebx),%eax
0872d88d +0x65bd:  mov    %edx,-0x3c(%ebp)
0872d890 +0x65c0:  test   %eax,%eax
0872d892 +0x65c2:  je     0872d8a6 <+0x65d6>
0872d894 +0x65c4:  mov    (%eax),%edx
0872d896 +0x65c6:  mov    %eax,(%esp)
0872d899 +0x65c9:  call   *0x14(%edx)
0872d89c +0x65cc:  test   %eax,%eax
0872d89e +0x65ce:  mov    %eax,%edi
0872d8a0 +0x65d0:  js     0872d998 <+0x66c8>
0872d8a6 +0x65d6:  test   %edi,%edi
0872d8a8 +0x65d8:  setle  %al
0872d8ab +0x65db:  movl   $0x0,0x8(%esi)
0872d8b2 +0x65e2:  movl   $0x0,0xc(%esi)
0872d8b9 +0x65e9:  mov    -0x38(%ebp),%ecx
0872d8bc +0x65ec:  or     -0x3c(%ebp),%ecx
0872d8bf +0x65ef:  movl   $0xffffffff,(%esi)
0872d8c5 +0x65f5:  movl   $0xffffffff,0x4(%esi)
0872d8cc +0x65fc:  setne  -0x30(%ebp)
0872d8d0 +0x6600:  and    %al,-0x30(%ebp)
0872d8d3 +0x6603:  lea    0x38(%ebx),%eax
0872d8d6 +0x6606:  mov    %eax,(%esp)
0872d8d9 +0x6609:  call   08722580 <_ZNKSt12__basic_fileIcE7is_openEv>  ; std::__basic_file<char>::is_open() const
0872d8de +0x660e:  test   %al,%al
0872d8e0 +0x6610:  je     0872d98b <+0x66bb>
0872d8e6 +0x6616:  cmpb   $0x0,-0x30(%ebp)
0872d8ea +0x661a:  jne    0872d98b <+0x66bb>
0872d8f0 +0x6620:  cmpb   $0x0,0x74(%ebx)
0872d8f4 +0x6624:  jne    0872d9a8 <+0x66d8>
0872d8fa +0x662a:  mov    0x48(%ebx),%edx
0872d8fd +0x662d:  mov    0x44(%ebx),%eax
0872d900 +0x6630:  mov    %edi,-0x50(%ebp)
0872d903 +0x6633:  mov    %edx,-0x2c(%ebp)
0872d906 +0x6636:  mov    %edi,%edx
0872d908 +0x6638:  mov    -0x38(%ebp),%edi
0872d90b +0x663b:  sar    $0x1f,%edx
0872d90e +0x663e:  mov    %eax,-0x30(%ebp)
0872d911 +0x6641:  mov    -0x3c(%ebp),%eax
0872d914 +0x6644:  imul   -0x50(%ebp),%eax
0872d918 +0x6648:  mov    %edx,-0x4c(%ebp)
0872d91b +0x664b:  imul   -0x4c(%ebp),%edi
0872d91f +0x664f:  add    %eax,%edi
0872d921 +0x6651:  mov    -0x38(%ebp),%eax
0872d924 +0x6654:  mull   -0x50(%ebp)
0872d927 +0x6657:  add    %edi,%edx
0872d929 +0x6659:  cmpb   $0x0,0x65(%ebx)
0872d92d +0x665d:  mov    %eax,-0x50(%ebp)
0872d930 +0x6660:  mov    %edx,-0x4c(%ebp)
0872d933 +0x6663:  je     0872d93f <+0x666f>
0872d935 +0x6665:  cmpl   $0x1,0x18(%ebp)
0872d939 +0x6669:  je     0872d9d8 <+0x6708>
0872d93f +0x666f:  mov    -0x2c(%ebp),%ecx
0872d942 +0x6672:  lea    -0x28(%ebp),%eax
0872d945 +0x6675:  mov    -0x30(%ebp),%edx
0872d948 +0x6678:  mov    %eax,(%esp)
0872d94b +0x667b:  mov    %ebx,0x4(%esp)
0872d94f +0x667f:  mov    %ecx,0x18(%esp)
0872d953 +0x6683:  mov    0x18(%ebp),%ecx
0872d956 +0x6686:  mov    %edx,0x14(%esp)
0872d95a +0x668a:  mov    -0x50(%ebp),%edx
0872d95d +0x668d:  mov    %ecx,0x10(%esp)
0872d961 +0x6691:  mov    -0x4c(%ebp),%ecx
0872d964 +0x6694:  mov    %edx,0x8(%esp)
0872d968 +0x6698:  mov    %ecx,0xc(%esp)
0872d96c +0x669c:  call   0872d690 <+0x63c0>
0872d971 +0x66a1:  mov    -0x28(%ebp),%eax
0872d974 +0x66a4:  mov    %eax,(%esi)
0872d976 +0x66a6:  mov    -0x24(%ebp),%eax
0872d979 +0x66a9:  sub    $0x4,%esp
0872d97c +0x66ac:  mov    %eax,0x4(%esi)
0872d97f +0x66af:  mov    -0x20(%ebp),%eax
0872d982 +0x66b2:  mov    %eax,0x8(%esi)
0872d985 +0x66b5:  mov    -0x1c(%ebp),%eax
0872d988 +0x66b8:  mov    %eax,0xc(%esi)
0872d98b +0x66bb:  lea    -0xc(%ebp),%esp
0872d98e +0x66be:  mov    %esi,%eax
0872d990 +0x66c0:  pop    %ebx
0872d991 +0x66c1:  pop    %esi
0872d992 +0x66c2:  pop    %edi
0872d993 +0x66c3:  pop    %ebp
0872d994 +0x66c4:  ret    $0x4
0872d997 +0x66c7:  nop
0872d998 +0x66c8:  mov    $0x1,%eax
0872d99d +0x66cd:  xor    %edi,%edi
0872d99f +0x66cf:  jmp    0872d8ab <+0x65db>
0872d9a4 +0x66d4:  lea    0x0(%esi,%eiz,1),%esi
0872d9a8 +0x66d8:  mov    0x8(%ebx),%eax
0872d9ab +0x66db:  cmp    0x4(%ebx),%eax
0872d9ae +0x66de:  mov    0x70(%ebx),%ecx
0872d9b1 +0x66e1:  mov    0x5c(%ebx),%edx
0872d9b4 +0x66e4:  setne  %al
0872d9b7 +0x66e7:  movzbl %al,%eax
0872d9ba +0x66ea:  shl    $0x2,%eax
0872d9bd +0x66ed:  add    0x6c(%ebx),%eax
0872d9c0 +0x66f0:  mov    %edx,0x4(%ebx)
0872d9c3 +0x66f3:  mov    %ecx,0xc(%ebx)
0872d9c6 +0x66f6:  mov    %eax,0x6c(%ebx)
0872d9c9 +0x66f9:  mov    %eax,0x8(%ebx)
0872d9cc +0x66fc:  movb   $0x0,0x74(%ebx)
0872d9d0 +0x6700:  jmp    0872d8fa <+0x662a>
0872d9d5 +0x6705:  lea    0x0(%esi),%esi
0872d9d8 +0x6708:  mov    0x78(%ebx),%eax
0872d9db +0x670b:  mov    %eax,(%esp)
0872d9de +0x670e:  call   08727870 <+0x5a0>
0872d9e3 +0x6713:  test   %al,%al
0872d9e5 +0x6715:  je     0872da10 <+0x6740>
0872d9e7 +0x6717:  mov    0x8(%ebx),%eax
0872d9ea +0x671a:  sub    0xc(%ebx),%eax
0872d9ed +0x671d:  sar    $0x2,%eax
0872d9f0 +0x6720:  mov    %eax,%edx
0872d9f2 +0x6722:  sar    $0x1f,%edx
0872d9f5 +0x6725:  mov    %eax,-0x38(%ebp)
0872d9f8 +0x6728:  mov    -0x38(%ebp),%eax
0872d9fb +0x672b:  mov    %edx,-0x34(%ebp)
0872d9fe +0x672e:  mov    -0x34(%ebp),%edx
0872da01 +0x6731:  add    %eax,-0x50(%ebp)
0872da04 +0x6734:  adc    %edx,-0x4c(%ebp)
0872da07 +0x6737:  jmp    0872d93f <+0x666f>
0872da0c +0x673c:  lea    0x0(%esi,%eiz,1),%esi
0872da10 +0x6740:  mov    0x8(%ebx),%eax
0872da13 +0x6743:  sub    0x4(%ebx),%eax
0872da16 +0x6746:  mov    0x78(%ebx),%edi
0872da19 +0x6749:  sar    $0x2,%eax
0872da1c +0x674c:  mov    (%edi),%ecx
0872da1e +0x674e:  mov    %eax,0x10(%esp)
0872da22 +0x6752:  mov    0x84(%ebx),%eax
0872da28 +0x6758:  mov    %eax,0xc(%esp)
0872da2c +0x675c:  mov    0x7c(%ebx),%eax
0872da2f +0x675f:  mov    %edi,(%esp)
0872da32 +0x6762:  mov    %eax,0x8(%esp)
0872da36 +0x6766:  lea    0x54(%ebx),%eax
0872da39 +0x6769:  mov    %eax,0x4(%esp)
0872da3d +0x676d:  call   *0x1c(%ecx)
0872da40 +0x6770:  add    0x7c(%ebx),%eax
0872da43 +0x6773:  sub    0x88(%ebx),%eax
0872da49 +0x6779:  mov    %eax,%edx
0872da4b +0x677b:  mov    %eax,-0x30(%ebp)
0872da4e +0x677e:  sar    $0x1f,%edx
0872da51 +0x6781:  mov    -0x30(%ebp),%eax
0872da54 +0x6784:  mov    %edx,-0x2c(%ebp)
0872da57 +0x6787:  mov    -0x2c(%ebp),%edx
0872da5a +0x678a:  add    %eax,-0x50(%ebp)
0872da5d +0x678d:  adc    %edx,-0x4c(%ebp)
0872da60 +0x6790:  mov    0x54(%ebx),%edx
0872da63 +0x6793:  mov    0x58(%ebx),%ecx
0872da66 +0x6796:  mov    %edx,-0x30(%ebp)
0872da69 +0x6799:  mov    %ecx,-0x2c(%ebp)
0872da6c +0x679c:  jmp    0872d93f <+0x666f>
0872da71 +0x67a1:  cmp    $0xffffffff,%edx
0872da74 +0x67a4:  je     0872da82 <+0x67b2>
0872da76 +0x67a6:  mov    %eax,(%esp)
0872da79 +0x67a9:  call   08ae3750 <_Unwind_Resume>
0872da7e +0x67ae:  xchg   %ax,%ax
0872da80 +0x67b0:  jmp    0872da71 <+0x67a1>
0872da82 +0x67b2:  mov    %eax,(%esp)
0872da85 +0x67b5:  call   08723df0 <__cxa_call_unexpected>
0872da8a +0x67ba:  nop
0872da8b +0x67bb:  nop
0872da8c +0x67bc:  nop
0872da8d +0x67bd:  nop
0872da8e +0x67be:  nop
0872da8f +0x67bf:  nop
0872da90 +0x67c0:  push   %ebp
0872da91 +0x67c1:  mov    %esp,%ebp
0872da93 +0x67c3:  sub    $0x58,%esp
0872da96 +0x67c6:  mov    %esi,-0x8(%ebp)
0872da99 +0x67c9:  mov    0xc(%ebp),%esi
0872da9c +0x67cc:  mov    %ebx,-0xc(%ebp)
0872da9f +0x67cf:  mov    0x8(%ebp),%ebx
0872daa2 +0x67d2:  mov    %gs:0x14,%eax
0872daa8 +0x67d8:  mov    %eax,-0x1c(%ebp)
0872daab +0x67db:  xor    %eax,%eax
0872daad +0x67dd:  mov    %edi,-0x4(%ebp)
0872dab0 +0x67e0:  mov    %esi,(%esp)
0872dab3 +0x67e3:  call   086ead00 <_GLOBAL__I_locale_inst.cc+0x9c0>  ; global constructors keyed to locale_inst.cc+0x9c0
0872dab8 +0x67e8:  test   %al,%al
0872daba +0x67ea:  je     0872dc7e <+0x69ae>
0872dac0 +0x67f0:  mov    %esi,(%esp)
0872dac3 +0x67f3:  call   086eb260 <_GLOBAL__I_locale_inst.cc+0xf20>  ; global constructors keyed to locale_inst.cc+0xf20
0872dac8 +0x67f8:  mov    %eax,%esi
0872daca +0x67fa:  lea    0x38(%ebx),%eax
0872dacd +0x67fd:  mov    %eax,(%esp)
0872dad0 +0x6800:  call   08722580 <_ZNKSt12__basic_fileIcE7is_openEv>  ; std::__basic_file<char>::is_open() const
0872dad5 +0x6805:  test   %al,%al
0872dad7 +0x6807:  jne    0872db00 <+0x6830>
0872dad9 +0x6809:  mov    %esi,0x74(%ebx)
0872dadc +0x680c:  mov    -0x1c(%ebp),%eax
0872dadf +0x680f:  xor    %gs:0x14,%eax
0872dae6 +0x6816:  jne    0872dc79 <+0x69a9>
0872daec +0x681c:  mov    -0xc(%ebp),%ebx
0872daef +0x681f:  mov    -0x8(%ebp),%esi
0872daf2 +0x6822:  mov    -0x4(%ebp),%edi
0872daf5 +0x6825:  mov    %ebp,%esp
0872daf7 +0x6827:  pop    %ebp
0872daf8 +0x6828:  ret
0872daf9 +0x6829:  lea    0x0(%esi,%eiz,1),%esi
0872db00 +0x6830:  cmpb   $0x0,0x65(%ebx)
0872db04 +0x6834:  je     0872dba8 <+0x68d8>
0872db0a +0x683a:  mov    0x74(%ebx),%eax
0872db0d +0x683d:  test   %eax,%eax
0872db0f +0x683f:  je     0872dc85 <+0x69b5>
0872db15 +0x6845:  mov    (%eax),%edx
0872db17 +0x6847:  mov    %eax,(%esp)
0872db1a +0x684a:  call   *0x14(%edx)
0872db1d +0x684d:  cmp    $0xffffffff,%eax
0872db20 +0x6850:  je     0872db97 <+0x68c7>
0872db22 +0x6852:  cmpb   $0x0,0x65(%ebx)
0872db26 +0x6856:  je     0872dbb8 <+0x68e8>
0872db2c +0x685c:  mov    0x74(%ebx),%eax
0872db2f +0x685f:  test   %eax,%eax
0872db31 +0x6861:  je     0872dc85 <+0x69b5>
0872db37 +0x6867:  mov    (%eax),%edx
0872db39 +0x6869:  mov    %eax,(%esp)
0872db3c +0x686c:  call   *0x18(%edx)
0872db3f +0x686f:  test   %al,%al
0872db41 +0x6871:  je     0872dbe8 <+0x6918>
0872db47 +0x6877:  test   %esi,%esi
0872db49 +0x6879:  je     0872dad9 <+0x6809>
0872db4b +0x687b:  mov    %esi,(%esp)
0872db4e +0x687e:  call   087278d0 <+0x600>
0872db53 +0x6883:  test   %al,%al
0872db55 +0x6885:  jne    0872dad9 <+0x6809>
0872db57 +0x6887:  mov    (%ebx),%eax
0872db59 +0x6889:  lea    -0x2c(%ebp),%edx
0872db5c +0x688c:  mov    0x40(%ebx),%ecx
0872db5f +0x688f:  movl   $0x1,0x10(%esp)
0872db67 +0x6897:  movl   $0x0,0x8(%esp)
0872db6f +0x689f:  movl   $0x0,0xc(%esp)
0872db77 +0x68a7:  mov    %ecx,0x14(%esp)
0872db7b +0x68ab:  mov    %ebx,0x4(%esp)
0872db7f +0x68af:  mov    %edx,(%esp)
0872db82 +0x68b2:  call   *0x10(%eax)
0872db85 +0x68b5:  mov    -0x2c(%ebp),%eax
0872db88 +0x68b8:  and    -0x28(%ebp),%eax
0872db8b +0x68bb:  sub    $0x4,%esp
0872db8e +0x68be:  cmp    $0xffffffff,%eax
0872db91 +0x68c1:  jne    0872dad9 <+0x6809>
0872db97 +0x68c7:  movl   $0x0,0x74(%ebx)
0872db9e +0x68ce:  jmp    0872dadc <+0x680c>
0872dba3 +0x68d3:  nop
0872dba4 +0x68d4:  lea    0x0(%esi,%eiz,1),%esi
0872dba8 +0x68d8:  cmpb   $0x0,0x66(%ebx)
0872dbac +0x68dc:  je     0872dad9 <+0x6809>
0872dbb2 +0x68e2:  jmp    0872db0a <+0x683a>
0872dbb7 +0x68e7:  nop
0872dbb8 +0x68e8:  cmpb   $0x0,0x66(%ebx)
0872dbbc +0x68ec:  je     0872dad9 <+0x6809>
0872dbc2 +0x68f2:  mov    %ebx,(%esp)
0872dbc5 +0x68f5:  call   08728590 <+0x12c0>
0872dbca +0x68fa:  test   %al,%al
0872dbcc +0x68fc:  je     0872db97 <+0x68c7>
0872dbce +0x68fe:  movl   $0xffffffff,0x4(%esp)
0872dbd6 +0x6906:  mov    %ebx,(%esp)
0872dbd9 +0x6909:  call   08727530 <+0x260>
0872dbde +0x690e:  jmp    0872dad9 <+0x6809>
0872dbe3 +0x6913:  nop
0872dbe4 +0x6914:  lea    0x0(%esi,%eiz,1),%esi
0872dbe8 +0x6918:  mov    0x74(%ebx),%edx
0872dbeb +0x691b:  mov    0x8(%ebx),%eax
0872dbee +0x691e:  sub    0x4(%ebx),%eax
0872dbf1 +0x6921:  mov    0x78(%ebx),%edi
0872dbf4 +0x6924:  mov    (%edx),%ecx
0872dbf6 +0x6926:  mov    %eax,0x10(%esp)
0872dbfa +0x692a:  mov    0x80(%ebx),%eax
0872dc00 +0x6930:  mov    %edx,(%esp)
0872dc03 +0x6933:  mov    %edi,0x8(%esp)
0872dc07 +0x6937:  mov    %eax,0xc(%esp)
0872dc0b +0x693b:  lea    0x54(%ebx),%eax
0872dc0e +0x693e:  mov    %eax,0x4(%esp)
0872dc12 +0x6942:  call   *0x1c(%ecx)
0872dc15 +0x6945:  mov    0x84(%ebx),%edx
0872dc1b +0x694b:  lea    (%edi,%eax,1),%eax
0872dc1e +0x694e:  xor    %edi,%edi
0872dc20 +0x6950:  sub    %eax,%edx
0872dc22 +0x6952:  mov    %eax,0x80(%ebx)
0872dc28 +0x6958:  jne    0872dc62 <+0x6992>
0872dc2a +0x695a:  mov    0x78(%ebx),%eax
0872dc2d +0x695d:  add    %eax,%edi
0872dc2f +0x695f:  mov    %eax,0x80(%ebx)
0872dc35 +0x6965:  mov    %edi,0x84(%ebx)
0872dc3b +0x696b:  movl   $0xffffffff,0x4(%esp)
0872dc43 +0x6973:  mov    %ebx,(%esp)
0872dc46 +0x6976:  call   08727530 <+0x260>
0872dc4b +0x697b:  mov    0x44(%ebx),%eax
0872dc4e +0x697e:  mov    0x48(%ebx),%edx
0872dc51 +0x6981:  mov    %eax,0x4c(%ebx)
0872dc54 +0x6984:  mov    %edx,0x50(%ebx)
0872dc57 +0x6987:  mov    %eax,0x54(%ebx)
0872dc5a +0x698a:  mov    %edx,0x58(%ebx)
0872dc5d +0x698d:  jmp    0872dad9 <+0x6809>
0872dc62 +0x6992:  mov    %edx,0x8(%esp)
0872dc66 +0x6996:  mov    %edx,%edi
0872dc68 +0x6998:  mov    %eax,0x4(%esp)
0872dc6c +0x699c:  mov    0x78(%ebx),%eax
0872dc6f +0x699f:  mov    %eax,(%esp)
0872dc72 +0x69a2:  call   0807d880 <_init+0x178>
0872dc77 +0x69a7:  jmp    0872dc2a <+0x695a>
0872dc79 +0x69a9:  call   0807d980 <_init+0x278>
0872dc7e +0x69ae:  xor    %esi,%esi
0872dc80 +0x69b0:  jmp    0872daca <+0x67fa>
0872dc85 +0x69b5:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
0872dc8a +0x69ba:  cmp    $0xffffffff,%edx
0872dc8d +0x69bd:  lea    0x0(%esi),%esi
0872dc90 +0x69c0:  je     0872dca2 <+0x69d2>
0872dc92 +0x69c2:  mov    %eax,(%esp)
0872dc95 +0x69c5:  call   08ae3750 <_Unwind_Resume>
0872dc9a +0x69ca:  jmp    0872dc8a <+0x69ba>
0872dc9c +0x69cc:  lea    0x0(%esi,%eiz,1),%esi
0872dca0 +0x69d0:  jmp    0872dc8a <+0x69ba>
0872dca2 +0x69d2:  mov    %eax,(%esp)
0872dca5 +0x69d5:  call   08723df0 <__cxa_call_unexpected>
0872dcaa +0x69da:  nop
0872dcab +0x69db:  nop
0872dcac +0x69dc:  nop
0872dcad +0x69dd:  nop
0872dcae +0x69de:  nop
0872dcaf +0x69df:  nop
0872dcb0 +0x69e0:  push   %ebp
0872dcb1 +0x69e1:  mov    %esp,%ebp
0872dcb3 +0x69e3:  sub    $0x58,%esp
0872dcb6 +0x69e6:  mov    %esi,-0x8(%ebp)
0872dcb9 +0x69e9:  mov    0xc(%ebp),%esi
0872dcbc +0x69ec:  mov    %ebx,-0xc(%ebp)
0872dcbf +0x69ef:  mov    0x8(%ebp),%ebx
0872dcc2 +0x69f2:  mov    %gs:0x14,%eax
0872dcc8 +0x69f8:  mov    %eax,-0x1c(%ebp)
0872dccb +0x69fb:  xor    %eax,%eax
0872dccd +0x69fd:  mov    %edi,-0x4(%ebp)
0872dcd0 +0x6a00:  mov    %esi,(%esp)
0872dcd3 +0x6a03:  call   0870ba60 <_GLOBAL__I_wlocale_inst.cc+0x970>  ; global constructors keyed to wlocale_inst.cc+0x970
0872dcd8 +0x6a08:  test   %al,%al
0872dcda +0x6a0a:  je     0872dea1 <+0x6bd1>
0872dce0 +0x6a10:  mov    %esi,(%esp)
0872dce3 +0x6a13:  call   0870bfc0 <_GLOBAL__I_wlocale_inst.cc+0xed0>  ; global constructors keyed to wlocale_inst.cc+0xed0
0872dce8 +0x6a18:  mov    %eax,%esi
0872dcea +0x6a1a:  lea    0x38(%ebx),%eax
0872dced +0x6a1d:  mov    %eax,(%esp)
0872dcf0 +0x6a20:  call   08722580 <_ZNKSt12__basic_fileIcE7is_openEv>  ; std::__basic_file<char>::is_open() const
0872dcf5 +0x6a25:  test   %al,%al
0872dcf7 +0x6a27:  jne    0872dd20 <+0x6a50>
0872dcf9 +0x6a29:  mov    %esi,0x78(%ebx)
0872dcfc +0x6a2c:  mov    -0x1c(%ebp),%eax
0872dcff +0x6a2f:  xor    %gs:0x14,%eax
0872dd06 +0x6a36:  jne    0872de9c <+0x6bcc>
0872dd0c +0x6a3c:  mov    -0xc(%ebp),%ebx
0872dd0f +0x6a3f:  mov    -0x8(%ebp),%esi
0872dd12 +0x6a42:  mov    -0x4(%ebp),%edi
0872dd15 +0x6a45:  mov    %ebp,%esp
0872dd17 +0x6a47:  pop    %ebp
0872dd18 +0x6a48:  ret
0872dd19 +0x6a49:  lea    0x0(%esi,%eiz,1),%esi
0872dd20 +0x6a50:  cmpb   $0x0,0x65(%ebx)
0872dd24 +0x6a54:  je     0872ddc8 <+0x6af8>
0872dd2a +0x6a5a:  mov    0x78(%ebx),%eax
0872dd2d +0x6a5d:  test   %eax,%eax
0872dd2f +0x6a5f:  je     0872dea8 <+0x6bd8>
0872dd35 +0x6a65:  mov    (%eax),%edx
0872dd37 +0x6a67:  mov    %eax,(%esp)
0872dd3a +0x6a6a:  call   *0x14(%edx)
0872dd3d +0x6a6d:  cmp    $0xffffffff,%eax
0872dd40 +0x6a70:  je     0872ddb7 <+0x6ae7>
0872dd42 +0x6a72:  cmpb   $0x0,0x65(%ebx)
0872dd46 +0x6a76:  je     0872ddd8 <+0x6b08>
0872dd4c +0x6a7c:  mov    0x78(%ebx),%eax
0872dd4f +0x6a7f:  test   %eax,%eax
0872dd51 +0x6a81:  je     0872dea8 <+0x6bd8>
0872dd57 +0x6a87:  mov    (%eax),%edx
0872dd59 +0x6a89:  mov    %eax,(%esp)
0872dd5c +0x6a8c:  call   *0x18(%edx)
0872dd5f +0x6a8f:  test   %al,%al
0872dd61 +0x6a91:  je     0872de08 <+0x6b38>
0872dd67 +0x6a97:  test   %esi,%esi
0872dd69 +0x6a99:  je     0872dcf9 <+0x6a29>
0872dd6b +0x6a9b:  mov    %esi,(%esp)
0872dd6e +0x6a9e:  call   08727870 <+0x5a0>
0872dd73 +0x6aa3:  test   %al,%al
0872dd75 +0x6aa5:  jne    0872dcf9 <+0x6a29>
0872dd77 +0x6aa7:  mov    (%ebx),%eax
0872dd79 +0x6aa9:  lea    -0x2c(%ebp),%edx
0872dd7c +0x6aac:  mov    0x40(%ebx),%ecx
0872dd7f +0x6aaf:  movl   $0x1,0x10(%esp)
0872dd87 +0x6ab7:  movl   $0x0,0x8(%esp)
0872dd8f +0x6abf:  movl   $0x0,0xc(%esp)
0872dd97 +0x6ac7:  mov    %ecx,0x14(%esp)
0872dd9b +0x6acb:  mov    %ebx,0x4(%esp)
0872dd9f +0x6acf:  mov    %edx,(%esp)
0872dda2 +0x6ad2:  call   *0x10(%eax)
0872dda5 +0x6ad5:  mov    -0x2c(%ebp),%eax
0872dda8 +0x6ad8:  and    -0x28(%ebp),%eax
0872ddab +0x6adb:  sub    $0x4,%esp
0872ddae +0x6ade:  cmp    $0xffffffff,%eax
0872ddb1 +0x6ae1:  jne    0872dcf9 <+0x6a29>
0872ddb7 +0x6ae7:  movl   $0x0,0x78(%ebx)
0872ddbe +0x6aee:  jmp    0872dcfc <+0x6a2c>
0872ddc3 +0x6af3:  nop
0872ddc4 +0x6af4:  lea    0x0(%esi,%eiz,1),%esi
0872ddc8 +0x6af8:  cmpb   $0x0,0x66(%ebx)
0872ddcc +0x6afc:  je     0872dcf9 <+0x6a29>
0872ddd2 +0x6b02:  jmp    0872dd2a <+0x6a5a>
0872ddd7 +0x6b07:  nop
0872ddd8 +0x6b08:  cmpb   $0x0,0x66(%ebx)
0872dddc +0x6b0c:  je     0872dcf9 <+0x6a29>
0872dde2 +0x6b12:  mov    %ebx,(%esp)
0872dde5 +0x6b15:  call   08728770 <+0x14a0>
0872ddea +0x6b1a:  test   %al,%al
0872ddec +0x6b1c:  je     0872ddb7 <+0x6ae7>
0872ddee +0x6b1e:  movl   $0xffffffff,0x4(%esp)
0872ddf6 +0x6b26:  mov    %ebx,(%esp)
0872ddf9 +0x6b29:  call   087277b0 <+0x4e0>
0872ddfe +0x6b2e:  jmp    0872dcf9 <+0x6a29>
0872de03 +0x6b33:  nop
0872de04 +0x6b34:  lea    0x0(%esi,%eiz,1),%esi
0872de08 +0x6b38:  mov    0x8(%ebx),%eax
0872de0b +0x6b3b:  mov    0x78(%ebx),%edx
0872de0e +0x6b3e:  sub    0x4(%ebx),%eax
0872de11 +0x6b41:  mov    0x7c(%ebx),%edi
0872de14 +0x6b44:  sar    $0x2,%eax
0872de17 +0x6b47:  mov    (%edx),%ecx
0872de19 +0x6b49:  mov    %eax,0x10(%esp)
0872de1d +0x6b4d:  mov    0x84(%ebx),%eax
0872de23 +0x6b53:  mov    %edi,0x8(%esp)
0872de27 +0x6b57:  mov    %edx,(%esp)
0872de2a +0x6b5a:  mov    %eax,0xc(%esp)
0872de2e +0x6b5e:  lea    0x54(%ebx),%eax
0872de31 +0x6b61:  mov    %eax,0x4(%esp)
0872de35 +0x6b65:  call   *0x1c(%ecx)
0872de38 +0x6b68:  mov    0x88(%ebx),%edx
0872de3e +0x6b6e:  lea    (%edi,%eax,1),%eax
0872de41 +0x6b71:  xor    %edi,%edi
0872de43 +0x6b73:  sub    %eax,%edx
0872de45 +0x6b75:  mov    %eax,0x84(%ebx)
0872de4b +0x6b7b:  jne    0872de85 <+0x6bb5>
0872de4d +0x6b7d:  mov    0x7c(%ebx),%eax
0872de50 +0x6b80:  add    %eax,%edi
0872de52 +0x6b82:  mov    %eax,0x84(%ebx)
0872de58 +0x6b88:  mov    %edi,0x88(%ebx)
0872de5e +0x6b8e:  movl   $0xffffffff,0x4(%esp)
0872de66 +0x6b96:  mov    %ebx,(%esp)
0872de69 +0x6b99:  call   087277b0 <+0x4e0>
0872de6e +0x6b9e:  mov    0x44(%ebx),%eax
0872de71 +0x6ba1:  mov    0x48(%ebx),%edx
0872de74 +0x6ba4:  mov    %eax,0x4c(%ebx)
0872de77 +0x6ba7:  mov    %edx,0x50(%ebx)
0872de7a +0x6baa:  mov    %eax,0x54(%ebx)
0872de7d +0x6bad:  mov    %edx,0x58(%ebx)
0872de80 +0x6bb0:  jmp    0872dcf9 <+0x6a29>
0872de85 +0x6bb5:  mov    %edx,0x8(%esp)
0872de89 +0x6bb9:  mov    %edx,%edi
0872de8b +0x6bbb:  mov    %eax,0x4(%esp)
0872de8f +0x6bbf:  mov    0x7c(%ebx),%eax
0872de92 +0x6bc2:  mov    %eax,(%esp)
0872de95 +0x6bc5:  call   0807d880 <_init+0x178>
0872de9a +0x6bca:  jmp    0872de4d <+0x6b7d>
0872de9c +0x6bcc:  call   0807d980 <_init+0x278>
0872dea1 +0x6bd1:  xor    %esi,%esi
0872dea3 +0x6bd3:  jmp    0872dcea <+0x6a1a>
0872dea8 +0x6bd8:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
0872dead +0x6bdd:  cmp    $0xffffffff,%edx
0872deb0 +0x6be0:  je     0872dec2 <+0x6bf2>
0872deb2 +0x6be2:  mov    %eax,(%esp)
0872deb5 +0x6be5:  call   08ae3750 <_Unwind_Resume>
0872deba +0x6bea:  jmp    0872dead <+0x6bdd>
0872debc +0x6bec:  lea    0x0(%esi,%eiz,1),%esi
0872dec0 +0x6bf0:  jmp    0872dead <+0x6bdd>
0872dec2 +0x6bf2:  mov    %eax,(%esp)
0872dec5 +0x6bf5:  call   08723df0 <__cxa_call_unexpected>
0872deca +0x6bfa:  nop
0872decb +0x6bfb:  nop
0872decc +0x6bfc:  nop
0872decd +0x6bfd:  nop
0872dece +0x6bfe:  nop
0872decf +0x6bff:  nop
0872ded0 +0x6c00:  push   %ebp
0872ded1 +0x6c01:  mov    %esp,%ebp
0872ded3 +0x6c03:  push   %edi
0872ded4 +0x6c04:  xor    %edi,%edi
0872ded6 +0x6c06:  push   %esi
0872ded7 +0x6c07:  push   %ebx
0872ded8 +0x6c08:  sub    $0x4c,%esp
0872dedb +0x6c0b:  mov    0x8(%ebp),%eax
0872dede +0x6c0e:  mov    0xc(%ebp),%esi
0872dee1 +0x6c11:  mov    0x10(%ebp),%ebx
0872dee4 +0x6c14:  cmpb   $0x0,0x70(%eax)
0872dee8 +0x6c18:  je     0872df2f <+0x6c5f>
0872deea +0x6c1a:  test   %ebx,%ebx
0872deec +0x6c1c:  jle    0872e0df <+0x6e0f>
0872def2 +0x6c22:  mov    %eax,%edx
0872def4 +0x6c24:  mov    0x8(%eax),%eax
0872def7 +0x6c27:  mov    0x4(%edx),%edx
0872defa +0x6c2a:  cmp    %edx,%eax
0872defc +0x6c2c:  je     0872e0b9 <+0x6de9>
0872df02 +0x6c32:  cmp    %edx,%eax
0872df04 +0x6c34:  mov    0x8(%ebp),%edx
0872df07 +0x6c37:  setne  %al
0872df0a +0x6c3a:  movzbl %al,%eax
0872df0d +0x6c3d:  mov    0x6c(%edx),%ecx
0872df10 +0x6c40:  add    0x68(%edx),%eax
0872df13 +0x6c43:  mov    %ecx,-0x3c(%ebp)
0872df16 +0x6c46:  mov    0x8(%ebp),%ecx
0872df19 +0x6c49:  mov    %eax,0x68(%edx)
0872df1c +0x6c4c:  mov    0x5c(%edx),%edx
0872df1f +0x6c4f:  mov    %eax,0x8(%ecx)
0872df22 +0x6c52:  mov    -0x3c(%ebp),%eax
0872df25 +0x6c55:  mov    %edx,0x4(%ecx)
0872df28 +0x6c58:  movb   $0x0,0x70(%ecx)
0872df2c +0x6c5c:  mov    %eax,0xc(%ecx)
0872df2f +0x6c5f:  mov    0x8(%ebp),%edx
0872df32 +0x6c62:  mov    $0x1,%eax
0872df37 +0x6c67:  mov    0x8(%ebp),%ecx
0872df3a +0x6c6a:  mov    0x40(%edx),%edx
0872df3d +0x6c6d:  mov    %edx,-0x1c(%ebp)
0872df40 +0x6c70:  mov    0x60(%ecx),%edx
0872df43 +0x6c73:  cmp    $0x1,%edx
0872df46 +0x6c76:  jbe    0872df4b <+0x6c7b>
0872df48 +0x6c78:  lea    -0x1(%edx),%eax
0872df4b +0x6c7b:  cmp    %eax,%ebx
0872df4d +0x6c7d:  jle    0872df69 <+0x6c99>
0872df4f +0x6c7f:  mov    0x8(%ebp),%edx
0872df52 +0x6c82:  mov    0x74(%edx),%eax
0872df55 +0x6c85:  test   %eax,%eax
0872df57 +0x6c87:  je     0872e106 <+0x6e36>
0872df5d +0x6c8d:  mov    (%eax),%edx
0872df5f +0x6c8f:  mov    %eax,(%esp)
0872df62 +0x6c92:  call   *0x18(%edx)
0872df65 +0x6c95:  test   %al,%al
0872df67 +0x6c97:  jne    0872df88 <+0x6cb8>
0872df69 +0x6c99:  mov    0x8(%ebp),%eax
0872df6c +0x6c9c:  mov    %ebx,0x8(%esp)
0872df70 +0x6ca0:  mov    %esi,0x4(%esp)
0872df74 +0x6ca4:  mov    %eax,(%esp)
0872df77 +0x6ca7:  call   08706080 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x11814>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x11814
0872df7c +0x6cac:  add    $0x4c,%esp
0872df7f +0x6caf:  pop    %ebx
0872df80 +0x6cb0:  pop    %esi
0872df81 +0x6cb1:  add    %eax,%edi
0872df83 +0x6cb3:  mov    %edi,%eax
0872df85 +0x6cb5:  pop    %edi
0872df86 +0x6cb6:  pop    %ebp
0872df87 +0x6cb7:  ret
0872df88 +0x6cb8:  testb  $0x8,-0x1c(%ebp)
0872df8c +0x6cbc:  je     0872df69 <+0x6c99>
0872df8e +0x6cbe:  mov    0x8(%ebp),%ecx
0872df91 +0x6cc1:  cmpb   $0x0,0x66(%ecx)
0872df95 +0x6cc5:  jne    0872df69 <+0x6c99>
0872df97 +0x6cc7:  mov    0x8(%ecx),%eax
0872df9a +0x6cca:  mov    0xc(%ecx),%edx
0872df9d +0x6ccd:  sub    %eax,%edx
0872df9f +0x6ccf:  jne    0872e01a <+0x6d4a>
0872dfa1 +0x6cd1:  lea    0x0(%esi,%eiz,1),%esi
0872dfa8 +0x6cd8:  mov    0x8(%ebp),%edx
0872dfab +0x6cdb:  add    $0x38,%edx
0872dfae +0x6cde:  mov    %edx,-0x1c(%ebp)
0872dfb1 +0x6ce1:  jmp    0872dfc4 <+0x6cf4>
0872dfb3 +0x6ce3:  nop
0872dfb4 +0x6ce4:  lea    0x0(%esi,%eiz,1),%esi
0872dfb8 +0x6ce8:  add    %eax,%edi
0872dfba +0x6cea:  sub    %eax,%ebx
0872dfbc +0x6cec:  je     0872e060 <+0x6d90>
0872dfc2 +0x6cf2:  add    %eax,%esi
0872dfc4 +0x6cf4:  mov    -0x1c(%ebp),%ecx
0872dfc7 +0x6cf7:  mov    %ebx,0x8(%esp)
0872dfcb +0x6cfb:  mov    %esi,0x4(%esp)
0872dfcf +0x6cff:  mov    %ecx,(%esp)
0872dfd2 +0x6d02:  call   087229c0 <_ZNSt12__basic_fileIcE6xsgetnEPci>  ; std::__basic_file<char>::xsgetn(char*, int)
0872dfd7 +0x6d07:  cmp    $0xffffffff,%eax
0872dfda +0x6d0a:  je     0872e0ed <+0x6e1d>
0872dfe0 +0x6d10:  test   %eax,%eax
0872dfe2 +0x6d12:  jne    0872dfb8 <+0x6ce8>
0872dfe4 +0x6d14:  test   %ebx,%ebx
0872dfe6 +0x6d16:  je     0872e060 <+0x6d90>
0872dfe8 +0x6d18:  mov    0x8(%ebp),%ecx
0872dfeb +0x6d1b:  mov    0x5c(%ecx),%eax
0872dfee +0x6d1e:  movl   $0x0,0x14(%ecx)
0872dff5 +0x6d25:  movl   $0x0,0x10(%ecx)
0872dffc +0x6d2c:  movl   $0x0,0x18(%ecx)
0872e003 +0x6d33:  mov    %eax,0x4(%ecx)
0872e006 +0x6d36:  mov    %eax,0x8(%ecx)
0872e009 +0x6d39:  mov    %eax,0xc(%ecx)
0872e00c +0x6d3c:  mov    %edi,%eax
0872e00e +0x6d3e:  movb   $0x0,0x65(%ecx)
0872e012 +0x6d42:  add    $0x4c,%esp
0872e015 +0x6d45:  pop    %ebx
0872e016 +0x6d46:  pop    %esi
0872e017 +0x6d47:  pop    %edi
0872e018 +0x6d48:  pop    %ebp
0872e019 +0x6d49:  ret
0872e01a +0x6d4a:  cmp    $0x1,%edx
0872e01d +0x6d4d:  jne    0872e040 <+0x6d70>
0872e01f +0x6d4f:  movzbl (%eax),%eax
0872e022 +0x6d52:  mov    $0x1,%ecx
0872e027 +0x6d57:  mov    %al,(%esi)
0872e029 +0x6d59:  mov    0x8(%ebp),%eax
0872e02c +0x6d5c:  add    %ecx,%esi
0872e02e +0x6d5e:  add    %edx,%edi
0872e030 +0x6d60:  sub    %edx,%ebx
0872e032 +0x6d62:  add    %ecx,0x8(%eax)
0872e035 +0x6d65:  jmp    0872dfa8 <+0x6cd8>
0872e03a +0x6d6a:  lea    0x0(%esi),%esi
0872e040 +0x6d70:  mov    %edx,0x8(%esp)
0872e044 +0x6d74:  mov    %edx,-0x24(%ebp)
0872e047 +0x6d77:  mov    %edx,-0x20(%ebp)
0872e04a +0x6d7a:  mov    %eax,0x4(%esp)
0872e04e +0x6d7e:  mov    %esi,(%esp)
0872e051 +0x6d81:  call   0807d8a0 <_init+0x198>
0872e056 +0x6d86:  mov    -0x20(%ebp),%ecx
0872e059 +0x6d89:  mov    -0x24(%ebp),%edx
0872e05c +0x6d8c:  jmp    0872e029 <+0x6d59>
0872e05e +0x6d8e:  xchg   %ax,%ax
0872e060 +0x6d90:  mov    0x8(%ebp),%eax
0872e063 +0x6d93:  mov    0x40(%eax),%edx
0872e066 +0x6d96:  mov    %eax,%ecx
0872e068 +0x6d98:  mov    0x5c(%eax),%eax
0872e06b +0x6d9b:  and    $0x10,%edx
0872e06e +0x6d9e:  mov    %eax,0x4(%ecx)
0872e071 +0x6da1:  mov    %eax,0x8(%ecx)
0872e074 +0x6da4:  mov    %eax,0xc(%ecx)
0872e077 +0x6da7:  je     0872e090 <+0x6dc0>
0872e079 +0x6da9:  mov    0x60(%ecx),%edx
0872e07c +0x6dac:  cmp    $0x1,%edx
0872e07f +0x6daf:  jbe    0872e090 <+0x6dc0>
0872e081 +0x6db1:  mov    %eax,0x14(%ecx)
0872e084 +0x6db4:  mov    %eax,0x10(%ecx)
0872e087 +0x6db7:  lea    -0x1(%eax,%edx,1),%eax
0872e08b +0x6dbb:  mov    %eax,0x18(%ecx)
0872e08e +0x6dbe:  jmp    0872e0a8 <+0x6dd8>
0872e090 +0x6dc0:  mov    0x8(%ebp),%eax
0872e093 +0x6dc3:  movl   $0x0,0x14(%eax)
0872e09a +0x6dca:  movl   $0x0,0x10(%eax)
0872e0a1 +0x6dd1:  movl   $0x0,0x18(%eax)
0872e0a8 +0x6dd8:  mov    0x8(%ebp),%edx
0872e0ab +0x6ddb:  mov    %edi,%eax
0872e0ad +0x6ddd:  movb   $0x1,0x65(%edx)
0872e0b1 +0x6de1:  add    $0x4c,%esp
0872e0b4 +0x6de4:  pop    %ebx
0872e0b5 +0x6de5:  pop    %esi
0872e0b6 +0x6de6:  pop    %edi
0872e0b7 +0x6de7:  pop    %ebp
0872e0b8 +0x6de8:  ret
0872e0b9 +0x6de9:  movzbl (%eax),%eax
0872e0bc +0x6dec:  sub    $0x1,%ebx
0872e0bf +0x6def:  mov    %al,(%esi)
0872e0c1 +0x6df1:  mov    0x8(%ebp),%eax
0872e0c4 +0x6df4:  add    $0x1,%esi
0872e0c7 +0x6df7:  addl   $0x1,0x8(%eax)
0872e0cb +0x6dfb:  cmpb   $0x0,0x70(%eax)
0872e0cf +0x6dff:  jne    0872e0da <+0x6e0a>
0872e0d1 +0x6e01:  mov    $0x1,%di
0872e0d5 +0x6e05:  jmp    0872df2f <+0x6c5f>
0872e0da +0x6e0a:  mov    $0x1,%edi
0872e0df +0x6e0f:  mov    0x8(%ebp),%edx
0872e0e2 +0x6e12:  mov    0x8(%edx),%eax
0872e0e5 +0x6e15:  mov    0x4(%edx),%edx
0872e0e8 +0x6e18:  jmp    0872df02 <+0x6c32>
0872e0ed +0x6e1d:  movl   $"basic_filebuf::xsgetn error reading the file",(%esp)
0872e0f4 +0x6e24:  call   086d9780 <_ZSt19__throw_ios_failurePKc>  ; std::__throw_ios_failure(char const*)
0872e0f9 +0x6e29:  cmp    $0xffffffff,%edx
0872e0fc +0x6e2c:  je     0872e10b <+0x6e3b>
0872e0fe +0x6e2e:  mov    %eax,(%esp)
0872e101 +0x6e31:  call   08ae3750 <_Unwind_Resume>
0872e106 +0x6e36:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
0872e10b +0x6e3b:  mov    %eax,(%esp)
0872e10e +0x6e3e:  call   08723df0 <__cxa_call_unexpected>
0872e113 +0x6e43:  nop
0872e114 +0x6e44:  nop
0872e115 +0x6e45:  nop
0872e116 +0x6e46:  nop
0872e117 +0x6e47:  nop
0872e118 +0x6e48:  nop
0872e119 +0x6e49:  nop
0872e11a +0x6e4a:  nop
0872e11b +0x6e4b:  nop
0872e11c +0x6e4c:  nop
0872e11d +0x6e4d:  nop
0872e11e +0x6e4e:  nop
0872e11f +0x6e4f:  nop
0872e120 +0x6e50:  push   %ebp
0872e121 +0x6e51:  mov    %esp,%ebp
0872e123 +0x6e53:  push   %edi
0872e124 +0x6e54:  xor    %edi,%edi
0872e126 +0x6e56:  push   %esi
0872e127 +0x6e57:  push   %ebx
0872e128 +0x6e58:  sub    $0x4c,%esp
0872e12b +0x6e5b:  mov    0x8(%ebp),%eax
0872e12e +0x6e5e:  mov    0xc(%ebp),%ebx
0872e131 +0x6e61:  mov    0x10(%ebp),%esi
0872e134 +0x6e64:  cmpb   $0x0,0x74(%eax)
0872e138 +0x6e68:  je     0872e184 <+0x6eb4>
0872e13a +0x6e6a:  test   %esi,%esi
0872e13c +0x6e6c:  jle    0872e333 <+0x7063>
0872e142 +0x6e72:  mov    %eax,%edx
0872e144 +0x6e74:  mov    0x8(%eax),%eax
0872e147 +0x6e77:  cmp    0x4(%edx),%eax
0872e14a +0x6e7a:  je     0872e311 <+0x7041>
0872e150 +0x6e80:  mov    0x8(%ebp),%edx
0872e153 +0x6e83:  xor    %edi,%edi
0872e155 +0x6e85:  mov    0x6c(%edx),%eax
0872e158 +0x6e88:  movl   $0x4,-0x1c(%ebp)
0872e15f +0x6e8f:  mov    0x8(%ebp),%ecx
0872e162 +0x6e92:  add    -0x1c(%ebp),%eax
0872e165 +0x6e95:  mov    0x70(%ecx),%edx
0872e168 +0x6e98:  mov    %eax,0x6c(%ecx)
0872e16b +0x6e9b:  mov    0x5c(%ecx),%ecx
0872e16e +0x6e9e:  mov    %edx,-0x3c(%ebp)
0872e171 +0x6ea1:  mov    0x8(%ebp),%edx
0872e174 +0x6ea4:  mov    %ecx,0x4(%edx)
0872e177 +0x6ea7:  mov    -0x3c(%ebp),%ecx
0872e17a +0x6eaa:  mov    %eax,0x8(%edx)
0872e17d +0x6ead:  movb   $0x0,0x74(%edx)
0872e181 +0x6eb1:  mov    %ecx,0xc(%edx)
0872e184 +0x6eb4:  mov    0x8(%ebp),%ecx
0872e187 +0x6eb7:  mov    0x8(%ebp),%eax
0872e18a +0x6eba:  mov    0x60(%ecx),%edx
0872e18d +0x6ebd:  mov    0x40(%eax),%eax
0872e190 +0x6ec0:  cmp    $0x1,%edx
0872e193 +0x6ec3:  mov    %eax,-0x1c(%ebp)
0872e196 +0x6ec6:  mov    $0x1,%eax
0872e19b +0x6ecb:  jbe    0872e1a0 <+0x6ed0>
0872e19d +0x6ecd:  lea    -0x1(%edx),%eax
0872e1a0 +0x6ed0:  cmp    %eax,%esi
0872e1a2 +0x6ed2:  jle    0872e1be <+0x6eee>
0872e1a4 +0x6ed4:  mov    0x8(%ebp),%edx
0872e1a7 +0x6ed7:  mov    0x78(%edx),%eax
0872e1aa +0x6eda:  test   %eax,%eax
0872e1ac +0x6edc:  je     0872e36a <+0x709a>
0872e1b2 +0x6ee2:  mov    (%eax),%edx
0872e1b4 +0x6ee4:  mov    %eax,(%esp)
0872e1b7 +0x6ee7:  call   *0x18(%edx)
0872e1ba +0x6eea:  test   %al,%al
0872e1bc +0x6eec:  jne    0872e1e0 <+0x6f10>
0872e1be +0x6eee:  mov    0x8(%ebp),%eax
0872e1c1 +0x6ef1:  mov    %esi,0x8(%esp)
0872e1c5 +0x6ef5:  mov    %ebx,0x4(%esp)
0872e1c9 +0x6ef9:  mov    %eax,(%esp)
0872e1cc +0x6efc:  call   08705c50 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x113e4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x113e4
0872e1d1 +0x6f01:  add    $0x4c,%esp
0872e1d4 +0x6f04:  pop    %ebx
0872e1d5 +0x6f05:  pop    %esi
0872e1d6 +0x6f06:  add    %eax,%edi
0872e1d8 +0x6f08:  mov    %edi,%eax
0872e1da +0x6f0a:  pop    %edi
0872e1db +0x6f0b:  pop    %ebp
0872e1dc +0x6f0c:  ret
0872e1dd +0x6f0d:  lea    0x0(%esi),%esi
0872e1e0 +0x6f10:  testb  $0x8,-0x1c(%ebp)
0872e1e4 +0x6f14:  je     0872e1be <+0x6eee>
0872e1e6 +0x6f16:  mov    0x8(%ebp),%ecx
0872e1e9 +0x6f19:  cmpb   $0x0,0x66(%ecx)
0872e1ed +0x6f1d:  jne    0872e1be <+0x6eee>
0872e1ef +0x6f1f:  mov    0x8(%ecx),%eax
0872e1f2 +0x6f22:  mov    0xc(%ecx),%edx
0872e1f5 +0x6f25:  sub    %eax,%edx
0872e1f7 +0x6f27:  sar    $0x2,%edx
0872e1fa +0x6f2a:  test   %edx,%edx
0872e1fc +0x6f2c:  jne    0872e274 <+0x6fa4>
0872e1fe +0x6f2e:  xchg   %ax,%ax
0872e200 +0x6f30:  mov    0x8(%ebp),%edx
0872e203 +0x6f33:  add    $0x38,%edx
0872e206 +0x6f36:  mov    %edx,-0x1c(%ebp)
0872e209 +0x6f39:  jmp    0872e21d <+0x6f4d>
0872e20b +0x6f3b:  nop
0872e20c +0x6f3c:  lea    0x0(%esi,%eiz,1),%esi
0872e210 +0x6f40:  add    %eax,%edi
0872e212 +0x6f42:  sub    %eax,%esi
0872e214 +0x6f44:  je     0872e2b8 <+0x6fe8>
0872e21a +0x6f4a:  lea    (%ebx,%eax,4),%ebx
0872e21d +0x6f4d:  mov    -0x1c(%ebp),%ecx
0872e220 +0x6f50:  mov    %esi,0x8(%esp)
0872e224 +0x6f54:  mov    %ebx,0x4(%esp)
0872e228 +0x6f58:  mov    %ecx,(%esp)
0872e22b +0x6f5b:  call   087229c0 <_ZNSt12__basic_fileIcE6xsgetnEPci>  ; std::__basic_file<char>::xsgetn(char*, int)
0872e230 +0x6f60:  cmp    $0xffffffff,%eax
0872e233 +0x6f63:  je     0872e351 <+0x7081>
0872e239 +0x6f69:  test   %eax,%eax
0872e23b +0x6f6b:  jne    0872e210 <+0x6f40>
0872e23d +0x6f6d:  test   %esi,%esi
0872e23f +0x6f6f:  nop
0872e240 +0x6f70:  je     0872e2b8 <+0x6fe8>
0872e242 +0x6f72:  mov    0x8(%ebp),%ecx
0872e245 +0x6f75:  mov    0x5c(%ecx),%eax
0872e248 +0x6f78:  movl   $0x0,0x14(%ecx)
0872e24f +0x6f7f:  movl   $0x0,0x10(%ecx)
0872e256 +0x6f86:  movl   $0x0,0x18(%ecx)
0872e25d +0x6f8d:  mov    %eax,0x4(%ecx)
0872e260 +0x6f90:  mov    %eax,0x8(%ecx)
0872e263 +0x6f93:  mov    %eax,0xc(%ecx)
0872e266 +0x6f96:  mov    %edi,%eax
0872e268 +0x6f98:  movb   $0x0,0x65(%ecx)
0872e26c +0x6f9c:  add    $0x4c,%esp
0872e26f +0x6f9f:  pop    %ebx
0872e270 +0x6fa0:  pop    %esi
0872e271 +0x6fa1:  pop    %edi
0872e272 +0x6fa2:  pop    %ebp
0872e273 +0x6fa3:  ret
0872e274 +0x6fa4:  cmp    $0x1,%edx
0872e277 +0x6fa7:  jne    0872e298 <+0x6fc8>
0872e279 +0x6fa9:  mov    (%eax),%eax
0872e27b +0x6fab:  mov    $0x1,%ecx
0872e280 +0x6fb0:  mov    %eax,(%ebx)
0872e282 +0x6fb2:  mov    0x8(%ebp),%eax
0872e285 +0x6fb5:  shl    $0x2,%ecx
0872e288 +0x6fb8:  add    %edx,%edi
0872e28a +0x6fba:  add    %ecx,%ebx
0872e28c +0x6fbc:  sub    %edx,%esi
0872e28e +0x6fbe:  add    %ecx,0x8(%eax)
0872e291 +0x6fc1:  jmp    0872e200 <+0x6f30>
0872e296 +0x6fc6:  xchg   %ax,%ax
0872e298 +0x6fc8:  mov    %edx,0x8(%esp)
0872e29c +0x6fcc:  mov    %edx,-0x24(%ebp)
0872e29f +0x6fcf:  mov    %edx,-0x20(%ebp)
0872e2a2 +0x6fd2:  mov    %eax,0x4(%esp)
0872e2a6 +0x6fd6:  mov    %ebx,(%esp)
0872e2a9 +0x6fd9:  call   0807dc30 <_init+0x528>
0872e2ae +0x6fde:  mov    -0x20(%ebp),%ecx
0872e2b1 +0x6fe1:  mov    -0x24(%ebp),%edx
0872e2b4 +0x6fe4:  jmp    0872e282 <+0x6fb2>
0872e2b6 +0x6fe6:  xchg   %ax,%ax
0872e2b8 +0x6fe8:  mov    0x8(%ebp),%eax
0872e2bb +0x6feb:  mov    0x40(%eax),%edx
0872e2be +0x6fee:  mov    %eax,%ecx
0872e2c0 +0x6ff0:  mov    0x5c(%eax),%eax
0872e2c3 +0x6ff3:  and    $0x10,%edx
0872e2c6 +0x6ff6:  mov    %eax,0x4(%ecx)
0872e2c9 +0x6ff9:  mov    %eax,0x8(%ecx)
0872e2cc +0x6ffc:  mov    %eax,0xc(%ecx)
0872e2cf +0x6fff:  je     0872e2e8 <+0x7018>
0872e2d1 +0x7001:  mov    0x60(%ecx),%edx
0872e2d4 +0x7004:  cmp    $0x1,%edx
0872e2d7 +0x7007:  jbe    0872e2e8 <+0x7018>
0872e2d9 +0x7009:  mov    %eax,0x14(%ecx)
0872e2dc +0x700c:  mov    %eax,0x10(%ecx)
0872e2df +0x700f:  lea    -0x4(%eax,%edx,4),%eax
0872e2e3 +0x7013:  mov    %eax,0x18(%ecx)
0872e2e6 +0x7016:  jmp    0872e300 <+0x7030>
0872e2e8 +0x7018:  mov    0x8(%ebp),%eax
0872e2eb +0x701b:  movl   $0x0,0x14(%eax)
0872e2f2 +0x7022:  movl   $0x0,0x10(%eax)
0872e2f9 +0x7029:  movl   $0x0,0x18(%eax)
0872e300 +0x7030:  mov    0x8(%ebp),%edx
0872e303 +0x7033:  mov    %edi,%eax
0872e305 +0x7035:  movb   $0x1,0x65(%edx)
0872e309 +0x7039:  add    $0x4c,%esp
0872e30c +0x703c:  pop    %ebx
0872e30d +0x703d:  pop    %esi
0872e30e +0x703e:  pop    %edi
0872e30f +0x703f:  pop    %ebp
0872e310 +0x7040:  ret
0872e311 +0x7041:  mov    (%eax),%eax
0872e313 +0x7043:  sub    $0x1,%esi
0872e316 +0x7046:  addl   $0x4,0x8(%edx)
0872e31a +0x704a:  mov    %eax,(%ebx)
0872e31c +0x704c:  add    $0x4,%ebx
0872e31f +0x704f:  cmpb   $0x0,0x74(%edx)
0872e323 +0x7053:  jne    0872e32e <+0x705e>
0872e325 +0x7055:  mov    $0x1,%di
0872e329 +0x7059:  jmp    0872e184 <+0x6eb4>
0872e32e +0x705e:  mov    $0x1,%edi
0872e333 +0x7063:  mov    0x8(%ebp),%ecx
0872e336 +0x7066:  movl   $0x0,-0x1c(%ebp)
0872e33d +0x706d:  mov    0x4(%ecx),%edx
0872e340 +0x7070:  cmp    0x8(%ecx),%edx
0872e343 +0x7073:  mov    0x6c(%ecx),%eax
0872e346 +0x7076:  je     0872e15f <+0x6e8f>
0872e34c +0x707c:  jmp    0872e158 <+0x6e88>
0872e351 +0x7081:  movl   $"basic_filebuf::xsgetn error reading the file",(%esp)
0872e358 +0x7088:  call   086d9780 <_ZSt19__throw_ios_failurePKc>  ; std::__throw_ios_failure(char const*)
0872e35d +0x708d:  cmp    $0xffffffff,%edx
0872e360 +0x7090:  je     0872e36f <+0x709f>
0872e362 +0x7092:  mov    %eax,(%esp)
0872e365 +0x7095:  call   08ae3750 <_Unwind_Resume>
0872e36a +0x709a:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
0872e36f +0x709f:  mov    %eax,(%esp)
0872e372 +0x70a2:  call   08723df0 <__cxa_call_unexpected>
0872e377 +0x70a7:  nop
0872e378 +0x70a8:  nop
0872e379 +0x70a9:  nop
0872e37a +0x70aa:  nop
0872e37b +0x70ab:  nop
0872e37c +0x70ac:  nop
0872e37d +0x70ad:  nop
0872e37e +0x70ae:  nop
0872e37f +0x70af:  nop
0872e380 +0x70b0:  mov    0x4(%esp),%eax
0872e384 +0x70b4:  mov    (%eax),%ecx
0872e386 +0x70b6:  add    -0xc(%ecx),%eax
0872e389 +0x70b9:  mov    %eax,0x4(%esp)
0872e38d +0x70bd:  jmp    0872e3a0 <+0x70d0>
0872e38f +0x70bf:  nop
0872e390 +0x70c0:  addl   $0xfffffff8,0x4(%esp)
0872e395 +0x70c5:  jmp    0872e3a0 <+0x70d0>
0872e397 +0x70c7:  nop
0872e398 +0x70c8:  nop
0872e399 +0x70c9:  lea    0x0(%esi,%eiz,1),%esi
0872e3a0 +0x70d0:  push   %ebp
0872e3a1 +0x70d1:  mov    %esp,%ebp
0872e3a3 +0x70d3:  sub    $0x38,%esp
0872e3a6 +0x70d6:  mov    %ebx,-0xc(%ebp)
0872e3a9 +0x70d9:  mov    0x8(%ebp),%ebx
0872e3ac +0x70dc:  mov    %esi,-0x8(%ebp)
0872e3af +0x70df:  mov    %edi,-0x4(%ebp)
0872e3b2 +0x70e2:  lea    0xc(%ebx),%esi
0872e3b5 +0x70e5:  movl   $&_ZTVSt13basic_fstreamIwSt11char_traitsIwEE+0xc,(%ebx)
0872e3bb +0x70eb:  lea    0x98(%ebx),%edi
0872e3c1 +0x70f1:  movl   $&_ZTVSt13basic_fstreamIwSt11char_traitsIwEE+0x34,0x98(%ebx)
0872e3cb +0x70fb:  movl   $&_ZTVSt13basic_fstreamIwSt11char_traitsIwEE+0x20,0x8(%ebx)
0872e3d2 +0x7102:  movl   $&_ZTVSt13basic_filebufIwSt11char_traitsIwEE+0x8,0xc(%ebx)
0872e3d9 +0x7109:  mov    %esi,(%esp)
0872e3dc +0x710c:  call   0872aeb0 <+0x3be0>
0872e3e1 +0x7111:  lea    0x44(%ebx),%eax
0872e3e4 +0x7114:  mov    %eax,(%esp)
0872e3e7 +0x7117:  call   08722720 <_ZNSt12__basic_fileIcED1Ev>  ; std::__basic_file<char>::~__basic_file()
0872e3ec +0x711c:  movl   $&_ZTVSt15basic_streambufIwSt11char_traitsIwEE+0x8,0xc(%ebx)
0872e3f3 +0x7123:  add    $0x1c,%esi
0872e3f6 +0x7126:  mov    %esi,(%esp)
0872e3f9 +0x7129:  call   086dbcd0 <_ZNSt6localeD1Ev>  ; std::locale::~locale()
0872e3fe +0x712e:  mov    &_ZTTSt13basic_fstreamIwSt11char_traitsIwEE+0x4,%eax
0872e403 +0x7133:  mov    &_ZTTSt13basic_fstreamIwSt11char_traitsIwEE+0x18,%edx
0872e409 +0x7139:  mov    -0xc(%eax),%eax
0872e40c +0x713c:  mov    %edx,(%ebx,%eax,1)
0872e40f +0x713f:  mov    &_ZTTSt13basic_fstreamIwSt11char_traitsIwEE+0x10,%eax
0872e414 +0x7144:  mov    &_ZTTSt13basic_fstreamIwSt11char_traitsIwEE+0x14,%edx
0872e41a +0x714a:  mov    %eax,0x8(%ebx)
0872e41d +0x714d:  mov    -0xc(%eax),%eax
0872e420 +0x7150:  mov    %edx,0x8(%ebx,%eax,1)
0872e424 +0x7154:  mov    &_ZTTSt13basic_fstreamIwSt11char_traitsIwEE+0x8,%eax
0872e429 +0x7159:  mov    &_ZTTSt13basic_fstreamIwSt11char_traitsIwEE+0xc,%edx
0872e42f +0x715f:  mov    %eax,(%ebx)
0872e431 +0x7161:  mov    -0xc(%eax),%eax
0872e434 +0x7164:  movl   $0x0,0x4(%ebx)
0872e43b +0x716b:  mov    %edx,(%ebx,%eax,1)
0872e43e +0x716e:  movl   $&_ZTVSt9basic_iosIwSt11char_traitsIwEE+0x8,0x98(%ebx)
0872e448 +0x7178:  mov    -0xc(%ebp),%ebx
0872e44b +0x717b:  mov    %edi,0x8(%ebp)
0872e44e +0x717e:  mov    -0x8(%ebp),%esi
0872e451 +0x7181:  mov    -0x4(%ebp),%edi
0872e454 +0x7184:  mov    %ebp,%esp
0872e456 +0x7186:  pop    %ebp
0872e457 +0x7187:  jmp    08727070 <_ZNSt8ios_baseD1Ev>  ; std::ios_base::~ios_base()
0872e45c +0x718c:  lea    0x44(%ebx),%edx
0872e45f +0x718f:  mov    %eax,-0x1c(%ebp)
0872e462 +0x7192:  mov    %edx,(%esp)
0872e465 +0x7195:  call   08722720 <_ZNSt12__basic_fileIcED1Ev>  ; std::__basic_file<char>::~__basic_file()
0872e46a +0x719a:  mov    -0x1c(%ebp),%eax
0872e46d +0x719d:  mov    %eax,-0x1c(%ebp)
0872e470 +0x71a0:  mov    %esi,(%esp)
0872e473 +0x71a3:  call   08705f90 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x11724>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x11724
0872e478 +0x71a8:  movl   $&_ZTTSt13basic_fstreamIwSt11char_traitsIwEE+0x4,0x4(%esp)
0872e480 +0x71b0:  mov    %ebx,(%esp)
0872e483 +0x71b3:  call   086e1780 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x16e0>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x16e0
0872e488 +0x71b8:  mov    %edi,(%esp)
0872e48b +0x71bb:  call   086e0bf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xb50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xb50
0872e490 +0x71c0:  mov    -0x1c(%ebp),%eax
0872e493 +0x71c3:  mov    %eax,(%esp)
0872e496 +0x71c6:  call   08ae3750 <_Unwind_Resume>
0872e49b +0x71cb:  jmp    0872e46d <+0x719d>
0872e49d +0x71cd:  nop
0872e49e +0x71ce:  nop
0872e49f +0x71cf:  nop
0872e4a0 +0x71d0:  push   %ebp
0872e4a1 +0x71d1:  mov    %esp,%ebp
0872e4a3 +0x71d3:  sub    $0x38,%esp
0872e4a6 +0x71d6:  mov    %ebx,-0xc(%ebp)
0872e4a9 +0x71d9:  mov    0xc(%ebp),%ebx
0872e4ac +0x71dc:  mov    %esi,-0x8(%ebp)
0872e4af +0x71df:  mov    0x8(%ebp),%esi
0872e4b2 +0x71e2:  mov    %edi,-0x4(%ebp)
0872e4b5 +0x71e5:  mov    (%ebx),%eax
0872e4b7 +0x71e7:  mov    0x20(%ebx),%edx
0872e4ba +0x71ea:  lea    0xc(%esi),%edi
0872e4bd +0x71ed:  mov    %eax,(%esi)
0872e4bf +0x71ef:  mov    -0xc(%eax),%eax
0872e4c2 +0x71f2:  mov    %edx,(%esi,%eax,1)
0872e4c5 +0x71f5:  mov    0x24(%ebx),%eax
0872e4c8 +0x71f8:  movl   $&_ZTVSt13basic_filebufIcSt11char_traitsIcEE+0x8,0xc(%esi)
0872e4cf +0x71ff:  mov    %eax,0x8(%esi)
0872e4d2 +0x7202:  mov    %edi,(%esp)
0872e4d5 +0x7205:  call   08728c90 <+0x19c0>
0872e4da +0x720a:  lea    0x44(%esi),%eax
0872e4dd +0x720d:  mov    %eax,(%esp)
0872e4e0 +0x7210:  call   08722720 <_ZNSt12__basic_fileIcED1Ev>  ; std::__basic_file<char>::~__basic_file()
0872e4e5 +0x7215:  movl   $&_ZTVSt15basic_streambufIcSt11char_traitsIcEE+0x8,0xc(%esi)
0872e4ec +0x721c:  add    $0x1c,%edi
0872e4ef +0x721f:  mov    %edi,(%esp)
0872e4f2 +0x7222:  call   086dbcd0 <_ZNSt6localeD1Ev>  ; std::locale::~locale()
0872e4f7 +0x7227:  mov    0x4(%ebx),%eax
0872e4fa +0x722a:  mov    0x18(%ebx),%edx
0872e4fd +0x722d:  mov    -0xc(%eax),%eax
0872e500 +0x7230:  mov    %edx,(%esi,%eax,1)
0872e503 +0x7233:  mov    0x10(%ebx),%eax
0872e506 +0x7236:  mov    0x14(%ebx),%edx
0872e509 +0x7239:  mov    %eax,0x8(%esi)
0872e50c +0x723c:  mov    -0xc(%eax),%eax
0872e50f +0x723f:  mov    %edx,0x8(%esi,%eax,1)
0872e513 +0x7243:  mov    0x8(%ebx),%eax
0872e516 +0x7246:  mov    0xc(%ebx),%edx
0872e519 +0x7249:  mov    %eax,(%esi)
0872e51b +0x724b:  mov    -0xc(%eax),%eax
0872e51e +0x724e:  movl   $0x0,0x4(%esi)
0872e525 +0x7255:  mov    %edx,(%esi,%eax,1)
0872e528 +0x7258:  mov    -0xc(%ebp),%ebx
0872e52b +0x725b:  mov    -0x8(%ebp),%esi
0872e52e +0x725e:  mov    -0x4(%ebp),%edi
0872e531 +0x7261:  mov    %ebp,%esp
0872e533 +0x7263:  pop    %ebp
0872e534 +0x7264:  ret
0872e535 +0x7265:  lea    0x44(%esi),%edx
0872e538 +0x7268:  mov    %eax,-0x1c(%ebp)
0872e53b +0x726b:  mov    %edx,(%esp)
0872e53e +0x726e:  call   08722720 <_ZNSt12__basic_fileIcED1Ev>  ; std::__basic_file<char>::~__basic_file()
0872e543 +0x7273:  mov    -0x1c(%ebp),%eax
0872e546 +0x7276:  add    $0x4,%ebx
0872e549 +0x7279:  mov    %eax,-0x1c(%ebp)
0872e54c +0x727c:  mov    %edi,(%esp)
0872e54f +0x727f:  call   08705fb0 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x11744>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x11744
0872e554 +0x7284:  mov    %ebx,0x4(%esp)
0872e558 +0x7288:  mov    %esi,(%esp)
0872e55b +0x728b:  call   086e1730 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x1690>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x1690
0872e560 +0x7290:  mov    -0x1c(%ebp),%eax
0872e563 +0x7293:  mov    %eax,(%esp)
0872e566 +0x7296:  call   08ae3750 <_Unwind_Resume>
0872e56b +0x729b:  jmp    0872e546 <+0x7276>
0872e56d +0x729d:  nop
0872e56e +0x729e:  nop
0872e56f +0x729f:  nop
0872e570 +0x72a0:  mov    0x4(%esp),%eax
0872e574 +0x72a4:  mov    (%eax),%ecx
0872e576 +0x72a6:  add    -0xc(%ecx),%eax
0872e579 +0x72a9:  mov    %eax,0x4(%esp)
0872e57d +0x72ad:  jmp    0872e580 <+0x72b0>
0872e57f +0x72af:  nop
0872e580 +0x72b0:  push   %ebp
0872e581 +0x72b1:  mov    %esp,%ebp
0872e583 +0x72b3:  sub    $0x38,%esp
0872e586 +0x72b6:  mov    %ebx,-0xc(%ebp)
0872e589 +0x72b9:  mov    0x8(%ebp),%ebx
0872e58c +0x72bc:  mov    %esi,-0x8(%ebp)
0872e58f +0x72bf:  mov    %edi,-0x4(%ebp)
0872e592 +0x72c2:  lea    0x4(%ebx),%esi
0872e595 +0x72c5:  movl   $&_ZTVSt14basic_ofstreamIcSt11char_traitsIcEE+0xc,(%ebx)
0872e59b +0x72cb:  lea    0x8c(%ebx),%edi
0872e5a1 +0x72d1:  movl   $&_ZTVSt14basic_ofstreamIcSt11char_traitsIcEE+0x20,0x8c(%ebx)
0872e5ab +0x72db:  movl   $&_ZTVSt13basic_filebufIcSt11char_traitsIcEE+0x8,0x4(%ebx)
0872e5b2 +0x72e2:  mov    %esi,(%esp)
0872e5b5 +0x72e5:  call   08728c90 <+0x19c0>
0872e5ba +0x72ea:  lea    0x3c(%ebx),%eax
0872e5bd +0x72ed:  mov    %eax,(%esp)
0872e5c0 +0x72f0:  call   08722720 <_ZNSt12__basic_fileIcED1Ev>  ; std::__basic_file<char>::~__basic_file()
0872e5c5 +0x72f5:  movl   $&_ZTVSt15basic_streambufIcSt11char_traitsIcEE+0x8,0x4(%ebx)
0872e5cc +0x72fc:  add    $0x1c,%esi
0872e5cf +0x72ff:  mov    %esi,(%esp)
0872e5d2 +0x7302:  call   086dbcd0 <_ZNSt6localeD1Ev>  ; std::locale::~locale()
0872e5d7 +0x7307:  mov    &_ZTTSt14basic_ofstreamIcSt11char_traitsIcEE+0x4,%eax
0872e5dc +0x730c:  mov    &_ZTTSt14basic_ofstreamIcSt11char_traitsIcEE+0x8,%edx
0872e5e2 +0x7312:  mov    %eax,(%ebx)
0872e5e4 +0x7314:  mov    -0xc(%eax),%eax
0872e5e7 +0x7317:  mov    %edx,(%ebx,%eax,1)
0872e5ea +0x731a:  movl   $&_ZTVSt9basic_iosIcSt11char_traitsIcEE+0x8,0x8c(%ebx)
0872e5f4 +0x7324:  mov    -0xc(%ebp),%ebx
0872e5f7 +0x7327:  mov    %edi,0x8(%ebp)
0872e5fa +0x732a:  mov    -0x8(%ebp),%esi
0872e5fd +0x732d:  mov    -0x4(%ebp),%edi
0872e600 +0x7330:  mov    %ebp,%esp
0872e602 +0x7332:  pop    %ebp
0872e603 +0x7333:  jmp    08727070 <_ZNSt8ios_baseD1Ev>  ; std::ios_base::~ios_base()
0872e608 +0x7338:  lea    0x3c(%ebx),%edx
0872e60b +0x733b:  mov    %eax,-0x1c(%ebp)
0872e60e +0x733e:  mov    %edx,(%esp)
0872e611 +0x7341:  call   08722720 <_ZNSt12__basic_fileIcED1Ev>  ; std::__basic_file<char>::~__basic_file()
0872e616 +0x7346:  mov    -0x1c(%ebp),%eax
0872e619 +0x7349:  mov    %eax,-0x1c(%ebp)
0872e61c +0x734c:  mov    %esi,(%esp)
0872e61f +0x734f:  call   08705fb0 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x11744>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x11744
0872e624 +0x7354:  mov    &_ZTTSt14basic_ofstreamIcSt11char_traitsIcEE+0x4,%edx
0872e62a +0x735a:  mov    &_ZTTSt14basic_ofstreamIcSt11char_traitsIcEE+0x8,%ecx
0872e630 +0x7360:  mov    %edx,(%ebx)
0872e632 +0x7362:  mov    -0xc(%edx),%edx
0872e635 +0x7365:  mov    %ecx,(%ebx,%edx,1)
0872e638 +0x7368:  mov    %edi,(%esp)
0872e63b +0x736b:  call   086e0c10 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xb70>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xb70
0872e640 +0x7370:  mov    -0x1c(%ebp),%eax
0872e643 +0x7373:  mov    %eax,(%esp)
0872e646 +0x7376:  call   08ae3750 <_Unwind_Resume>
0872e64b +0x737b:  jmp    0872e619 <+0x7349>
0872e64d +0x737d:  nop
0872e64e +0x737e:  nop
0872e64f +0x737f:  nop
0872e650 +0x7380:  mov    0x4(%esp),%eax
0872e654 +0x7384:  mov    (%eax),%ecx
0872e656 +0x7386:  add    -0xc(%ecx),%eax
0872e659 +0x7389:  mov    %eax,0x4(%esp)
0872e65d +0x738d:  jmp    0872e670 <+0x73a0>
0872e65f +0x738f:  nop
0872e660 +0x7390:  addl   $0xfffffff8,0x4(%esp)
0872e665 +0x7395:  jmp    0872e670 <+0x73a0>
0872e667 +0x7397:  nop
0872e668 +0x7398:  nop
0872e669 +0x7399:  lea    0x0(%esi,%eiz,1),%esi
0872e670 +0x73a0:  push   %ebp
0872e671 +0x73a1:  mov    %esp,%ebp
0872e673 +0x73a3:  sub    $0x38,%esp
0872e676 +0x73a6:  mov    %ebx,-0xc(%ebp)
0872e679 +0x73a9:  mov    0x8(%ebp),%ebx
0872e67c +0x73ac:  mov    %esi,-0x8(%ebp)
0872e67f +0x73af:  mov    %edi,-0x4(%ebp)
0872e682 +0x73b2:  lea    0xc(%ebx),%esi
0872e685 +0x73b5:  movl   $&_ZTVSt13basic_fstreamIcSt11char_traitsIcEE+0xc,(%ebx)
0872e68b +0x73bb:  lea    0x94(%ebx),%edi
0872e691 +0x73c1:  movl   $&_ZTVSt13basic_fstreamIcSt11char_traitsIcEE+0x34,0x94(%ebx)
0872e69b +0x73cb:  movl   $&_ZTVSt13basic_fstreamIcSt11char_traitsIcEE+0x20,0x8(%ebx)
0872e6a2 +0x73d2:  movl   $&_ZTVSt13basic_filebufIcSt11char_traitsIcEE+0x8,0xc(%ebx)
0872e6a9 +0x73d9:  mov    %esi,(%esp)
0872e6ac +0x73dc:  call   08728c90 <+0x19c0>
0872e6b1 +0x73e1:  lea    0x44(%ebx),%eax
0872e6b4 +0x73e4:  mov    %eax,(%esp)
0872e6b7 +0x73e7:  call   08722720 <_ZNSt12__basic_fileIcED1Ev>  ; std::__basic_file<char>::~__basic_file()
0872e6bc +0x73ec:  movl   $&_ZTVSt15basic_streambufIcSt11char_traitsIcEE+0x8,0xc(%ebx)
0872e6c3 +0x73f3:  add    $0x1c,%esi
0872e6c6 +0x73f6:  mov    %esi,(%esp)
0872e6c9 +0x73f9:  call   086dbcd0 <_ZNSt6localeD1Ev>  ; std::locale::~locale()
0872e6ce +0x73fe:  mov    &_ZTTSt13basic_fstreamIcSt11char_traitsIcEE+0x4,%eax
0872e6d3 +0x7403:  mov    &_ZTTSt13basic_fstreamIcSt11char_traitsIcEE+0x18,%edx
0872e6d9 +0x7409:  mov    -0xc(%eax),%eax
0872e6dc +0x740c:  mov    %edx,(%ebx,%eax,1)
0872e6df +0x740f:  mov    &_ZTTSt13basic_fstreamIcSt11char_traitsIcEE+0x10,%eax
0872e6e4 +0x7414:  mov    &_ZTTSt13basic_fstreamIcSt11char_traitsIcEE+0x14,%edx
0872e6ea +0x741a:  mov    %eax,0x8(%ebx)
0872e6ed +0x741d:  mov    -0xc(%eax),%eax
0872e6f0 +0x7420:  mov    %edx,0x8(%ebx,%eax,1)
0872e6f4 +0x7424:  mov    &_ZTTSt13basic_fstreamIcSt11char_traitsIcEE+0x8,%eax
0872e6f9 +0x7429:  mov    &_ZTTSt13basic_fstreamIcSt11char_traitsIcEE+0xc,%edx
0872e6ff +0x742f:  mov    %eax,(%ebx)
0872e701 +0x7431:  mov    -0xc(%eax),%eax
0872e704 +0x7434:  movl   $0x0,0x4(%ebx)
0872e70b +0x743b:  mov    %edx,(%ebx,%eax,1)
0872e70e +0x743e:  movl   $&_ZTVSt9basic_iosIcSt11char_traitsIcEE+0x8,0x94(%ebx)
0872e718 +0x7448:  mov    -0xc(%ebp),%ebx
0872e71b +0x744b:  mov    %edi,0x8(%ebp)
0872e71e +0x744e:  mov    -0x8(%ebp),%esi
0872e721 +0x7451:  mov    -0x4(%ebp),%edi
0872e724 +0x7454:  mov    %ebp,%esp
0872e726 +0x7456:  pop    %ebp
0872e727 +0x7457:  jmp    08727070 <_ZNSt8ios_baseD1Ev>  ; std::ios_base::~ios_base()
0872e72c +0x745c:  lea    0x44(%ebx),%edx
0872e72f +0x745f:  mov    %eax,-0x1c(%ebp)
0872e732 +0x7462:  mov    %edx,(%esp)
0872e735 +0x7465:  call   08722720 <_ZNSt12__basic_fileIcED1Ev>  ; std::__basic_file<char>::~__basic_file()
0872e73a +0x746a:  mov    -0x1c(%ebp),%eax
0872e73d +0x746d:  mov    %eax,-0x1c(%ebp)
0872e740 +0x7470:  mov    %esi,(%esp)
0872e743 +0x7473:  call   08705fb0 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x11744>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x11744
0872e748 +0x7478:  movl   $&_ZTTSt13basic_fstreamIcSt11char_traitsIcEE+0x4,0x4(%esp)
0872e750 +0x7480:  mov    %ebx,(%esp)
0872e753 +0x7483:  call   086e1730 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x1690>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x1690
0872e758 +0x7488:  mov    %edi,(%esp)
0872e75b +0x748b:  call   086e0c10 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xb70>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xb70
0872e760 +0x7490:  mov    -0x1c(%ebp),%eax
0872e763 +0x7493:  mov    %eax,(%esp)
0872e766 +0x7496:  call   08ae3750 <_Unwind_Resume>
0872e76b +0x749b:  jmp    0872e73d <+0x746d>
0872e76d +0x749d:  nop
0872e76e +0x749e:  nop
0872e76f +0x749f:  nop
0872e770 +0x74a0:  push   %ebp
0872e771 +0x74a1:  mov    %esp,%ebp
0872e773 +0x74a3:  sub    $0x38,%esp
0872e776 +0x74a6:  mov    %ebx,-0xc(%ebp)
0872e779 +0x74a9:  mov    0xc(%ebp),%ebx
0872e77c +0x74ac:  mov    %esi,-0x8(%ebp)
0872e77f +0x74af:  mov    0x8(%ebp),%esi
0872e782 +0x74b2:  mov    %edi,-0x4(%ebp)
0872e785 +0x74b5:  mov    (%ebx),%eax
0872e787 +0x74b7:  mov    0x20(%ebx),%edx
0872e78a +0x74ba:  lea    0xc(%esi),%edi
0872e78d +0x74bd:  mov    %eax,(%esi)
0872e78f +0x74bf:  mov    -0xc(%eax),%eax
0872e792 +0x74c2:  mov    %edx,(%esi,%eax,1)
0872e795 +0x74c5:  mov    0x24(%ebx),%eax
0872e798 +0x74c8:  movl   $&_ZTVSt13basic_filebufIwSt11char_traitsIwEE+0x8,0xc(%esi)
0872e79f +0x74cf:  mov    %eax,0x8(%esi)
0872e7a2 +0x74d2:  mov    %edi,(%esp)
0872e7a5 +0x74d5:  call   0872aeb0 <+0x3be0>
0872e7aa +0x74da:  lea    0x44(%esi),%eax
0872e7ad +0x74dd:  mov    %eax,(%esp)
0872e7b0 +0x74e0:  call   08722720 <_ZNSt12__basic_fileIcED1Ev>  ; std::__basic_file<char>::~__basic_file()
0872e7b5 +0x74e5:  movl   $&_ZTVSt15basic_streambufIwSt11char_traitsIwEE+0x8,0xc(%esi)
0872e7bc +0x74ec:  add    $0x1c,%edi
0872e7bf +0x74ef:  mov    %edi,(%esp)
0872e7c2 +0x74f2:  call   086dbcd0 <_ZNSt6localeD1Ev>  ; std::locale::~locale()
0872e7c7 +0x74f7:  mov    0x4(%ebx),%eax
0872e7ca +0x74fa:  mov    0x18(%ebx),%edx
0872e7cd +0x74fd:  mov    -0xc(%eax),%eax
0872e7d0 +0x7500:  mov    %edx,(%esi,%eax,1)
0872e7d3 +0x7503:  mov    0x10(%ebx),%eax
0872e7d6 +0x7506:  mov    0x14(%ebx),%edx
0872e7d9 +0x7509:  mov    %eax,0x8(%esi)
0872e7dc +0x750c:  mov    -0xc(%eax),%eax
0872e7df +0x750f:  mov    %edx,0x8(%esi,%eax,1)
0872e7e3 +0x7513:  mov    0x8(%ebx),%eax
0872e7e6 +0x7516:  mov    0xc(%ebx),%edx
0872e7e9 +0x7519:  mov    %eax,(%esi)
0872e7eb +0x751b:  mov    -0xc(%eax),%eax
0872e7ee +0x751e:  movl   $0x0,0x4(%esi)
0872e7f5 +0x7525:  mov    %edx,(%esi,%eax,1)
0872e7f8 +0x7528:  mov    -0xc(%ebp),%ebx
0872e7fb +0x752b:  mov    -0x8(%ebp),%esi
0872e7fe +0x752e:  mov    -0x4(%ebp),%edi
0872e801 +0x7531:  mov    %ebp,%esp
0872e803 +0x7533:  pop    %ebp
0872e804 +0x7534:  ret
0872e805 +0x7535:  lea    0x44(%esi),%edx
0872e808 +0x7538:  mov    %eax,-0x1c(%ebp)
0872e80b +0x753b:  mov    %edx,(%esp)
0872e80e +0x753e:  call   08722720 <_ZNSt12__basic_fileIcED1Ev>  ; std::__basic_file<char>::~__basic_file()
0872e813 +0x7543:  mov    -0x1c(%ebp),%eax
0872e816 +0x7546:  add    $0x4,%ebx
0872e819 +0x7549:  mov    %eax,-0x1c(%ebp)
0872e81c +0x754c:  mov    %edi,(%esp)
0872e81f +0x754f:  call   08705f90 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x11724>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x11724
0872e824 +0x7554:  mov    %ebx,0x4(%esp)
0872e828 +0x7558:  mov    %esi,(%esp)
0872e82b +0x755b:  call   086e1780 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x16e0>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x16e0
0872e830 +0x7560:  mov    -0x1c(%ebp),%eax
0872e833 +0x7563:  mov    %eax,(%esp)
0872e836 +0x7566:  call   08ae3750 <_Unwind_Resume>
0872e83b +0x756b:  jmp    0872e816 <+0x7546>
0872e83d +0x756d:  nop
0872e83e +0x756e:  nop
0872e83f +0x756f:  nop
0872e840 +0x7570:  mov    0x4(%esp),%eax
0872e844 +0x7574:  mov    (%eax),%ecx
0872e846 +0x7576:  add    -0xc(%ecx),%eax
0872e849 +0x7579:  mov    %eax,0x4(%esp)
0872e84d +0x757d:  jmp    0872e850 <+0x7580>
0872e84f +0x757f:  nop
0872e850 +0x7580:  push   %ebp
0872e851 +0x7581:  mov    %esp,%ebp
0872e853 +0x7583:  sub    $0x38,%esp
0872e856 +0x7586:  mov    %ebx,-0xc(%ebp)
0872e859 +0x7589:  mov    0x8(%ebp),%ebx
0872e85c +0x758c:  mov    %esi,-0x8(%ebp)
0872e85f +0x758f:  mov    %edi,-0x4(%ebp)
0872e862 +0x7592:  lea    0x4(%ebx),%esi
0872e865 +0x7595:  movl   $&_ZTVSt14basic_ofstreamIwSt11char_traitsIwEE+0xc,(%ebx)
0872e86b +0x759b:  lea    0x90(%ebx),%edi
0872e871 +0x75a1:  movl   $&_ZTVSt14basic_ofstreamIwSt11char_traitsIwEE+0x20,0x90(%ebx)
0872e87b +0x75ab:  movl   $&_ZTVSt13basic_filebufIwSt11char_traitsIwEE+0x8,0x4(%ebx)
0872e882 +0x75b2:  mov    %esi,(%esp)
0872e885 +0x75b5:  call   0872aeb0 <+0x3be0>
0872e88a +0x75ba:  lea    0x3c(%ebx),%eax
0872e88d +0x75bd:  mov    %eax,(%esp)
0872e890 +0x75c0:  call   08722720 <_ZNSt12__basic_fileIcED1Ev>  ; std::__basic_file<char>::~__basic_file()
0872e895 +0x75c5:  movl   $&_ZTVSt15basic_streambufIwSt11char_traitsIwEE+0x8,0x4(%ebx)
0872e89c +0x75cc:  add    $0x1c,%esi
0872e89f +0x75cf:  mov    %esi,(%esp)
0872e8a2 +0x75d2:  call   086dbcd0 <_ZNSt6localeD1Ev>  ; std::locale::~locale()
0872e8a7 +0x75d7:  mov    &_ZTTSt14basic_ofstreamIwSt11char_traitsIwEE+0x4,%eax
0872e8ac +0x75dc:  mov    &_ZTTSt14basic_ofstreamIwSt11char_traitsIwEE+0x8,%edx
0872e8b2 +0x75e2:  mov    %eax,(%ebx)
0872e8b4 +0x75e4:  mov    -0xc(%eax),%eax
0872e8b7 +0x75e7:  mov    %edx,(%ebx,%eax,1)
0872e8ba +0x75ea:  movl   $&_ZTVSt9basic_iosIwSt11char_traitsIwEE+0x8,0x90(%ebx)
0872e8c4 +0x75f4:  mov    -0xc(%ebp),%ebx
0872e8c7 +0x75f7:  mov    %edi,0x8(%ebp)
0872e8ca +0x75fa:  mov    -0x8(%ebp),%esi
0872e8cd +0x75fd:  mov    -0x4(%ebp),%edi
0872e8d0 +0x7600:  mov    %ebp,%esp
0872e8d2 +0x7602:  pop    %ebp
0872e8d3 +0x7603:  jmp    08727070 <_ZNSt8ios_baseD1Ev>  ; std::ios_base::~ios_base()
0872e8d8 +0x7608:  lea    0x3c(%ebx),%edx
0872e8db +0x760b:  mov    %eax,-0x1c(%ebp)
0872e8de +0x760e:  mov    %edx,(%esp)
0872e8e1 +0x7611:  call   08722720 <_ZNSt12__basic_fileIcED1Ev>  ; std::__basic_file<char>::~__basic_file()
0872e8e6 +0x7616:  mov    -0x1c(%ebp),%eax
0872e8e9 +0x7619:  mov    %eax,-0x1c(%ebp)
0872e8ec +0x761c:  mov    %esi,(%esp)
0872e8ef +0x761f:  call   08705f90 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x11724>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x11724
0872e8f4 +0x7624:  mov    &_ZTTSt14basic_ofstreamIwSt11char_traitsIwEE+0x4,%edx
0872e8fa +0x762a:  mov    &_ZTTSt14basic_ofstreamIwSt11char_traitsIwEE+0x8,%ecx
0872e900 +0x7630:  mov    %edx,(%ebx)
0872e902 +0x7632:  mov    -0xc(%edx),%edx
0872e905 +0x7635:  mov    %ecx,(%ebx,%edx,1)
0872e908 +0x7638:  mov    %edi,(%esp)
0872e90b +0x763b:  call   086e0bf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xb50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xb50
0872e910 +0x7640:  mov    -0x1c(%ebp),%eax
0872e913 +0x7643:  mov    %eax,(%esp)
0872e916 +0x7646:  call   08ae3750 <_Unwind_Resume>
0872e91b +0x764b:  jmp    0872e8e9 <+0x7619>
0872e91d +0x764d:  nop
0872e91e +0x764e:  nop
0872e91f +0x764f:  nop
0872e920 +0x7650:  push   %ebp
0872e921 +0x7651:  mov    %esp,%ebp
0872e923 +0x7653:  sub    $0x38,%esp
0872e926 +0x7656:  mov    %ebx,-0xc(%ebp)
0872e929 +0x7659:  mov    0xc(%ebp),%ebx
0872e92c +0x765c:  mov    %esi,-0x8(%ebp)
0872e92f +0x765f:  mov    0x8(%ebp),%esi
0872e932 +0x7662:  mov    %edi,-0x4(%ebp)
0872e935 +0x7665:  mov    (%ebx),%eax
0872e937 +0x7667:  mov    0xc(%ebx),%edx
0872e93a +0x766a:  lea    0x4(%esi),%edi
0872e93d +0x766d:  mov    %eax,(%esi)
0872e93f +0x766f:  mov    -0xc(%eax),%eax
0872e942 +0x7672:  mov    %edx,(%esi,%eax,1)
0872e945 +0x7675:  movl   $&_ZTVSt13basic_filebufIwSt11char_traitsIwEE+0x8,0x4(%esi)
0872e94c +0x767c:  mov    %edi,(%esp)
0872e94f +0x767f:  call   0872aeb0 <+0x3be0>
0872e954 +0x7684:  lea    0x3c(%esi),%eax
0872e957 +0x7687:  mov    %eax,(%esp)
0872e95a +0x768a:  call   08722720 <_ZNSt12__basic_fileIcED1Ev>  ; std::__basic_file<char>::~__basic_file()
0872e95f +0x768f:  movl   $&_ZTVSt15basic_streambufIwSt11char_traitsIwEE+0x8,0x4(%esi)
0872e966 +0x7696:  add    $0x1c,%edi
0872e969 +0x7699:  mov    %edi,(%esp)
0872e96c +0x769c:  call   086dbcd0 <_ZNSt6localeD1Ev>  ; std::locale::~locale()
0872e971 +0x76a1:  mov    0x4(%ebx),%eax
0872e974 +0x76a4:  mov    0x8(%ebx),%edx
0872e977 +0x76a7:  mov    %eax,(%esi)
0872e979 +0x76a9:  mov    -0xc(%eax),%eax
0872e97c +0x76ac:  mov    %edx,(%esi,%eax,1)
0872e97f +0x76af:  mov    -0xc(%ebp),%ebx
0872e982 +0x76b2:  mov    -0x8(%ebp),%esi
0872e985 +0x76b5:  mov    -0x4(%ebp),%edi
0872e988 +0x76b8:  mov    %ebp,%esp
0872e98a +0x76ba:  pop    %ebp
0872e98b +0x76bb:  ret
0872e98c +0x76bc:  lea    0x3c(%esi),%edx
0872e98f +0x76bf:  mov    %eax,-0x1c(%ebp)
0872e992 +0x76c2:  mov    %edx,(%esp)
0872e995 +0x76c5:  call   08722720 <_ZNSt12__basic_fileIcED1Ev>  ; std::__basic_file<char>::~__basic_file()
0872e99a +0x76ca:  mov    -0x1c(%ebp),%eax
0872e99d +0x76cd:  mov    %eax,-0x1c(%ebp)
0872e9a0 +0x76d0:  mov    %edi,(%esp)
0872e9a3 +0x76d3:  call   08705f90 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x11724>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x11724
0872e9a8 +0x76d8:  mov    0x4(%ebx),%edx
0872e9ab +0x76db:  mov    0x8(%ebx),%ecx
0872e9ae +0x76de:  mov    -0x1c(%ebp),%eax
0872e9b1 +0x76e1:  mov    %edx,(%esi)
0872e9b3 +0x76e3:  mov    -0xc(%edx),%edx
0872e9b6 +0x76e6:  mov    %ecx,(%esi,%edx,1)
0872e9b9 +0x76e9:  mov    %eax,(%esp)
0872e9bc +0x76ec:  call   08ae3750 <_Unwind_Resume>
0872e9c1 +0x76f1:  jmp    0872e99d <+0x76cd>
0872e9c3 +0x76f3:  nop
0872e9c4 +0x76f4:  nop
0872e9c5 +0x76f5:  nop
0872e9c6 +0x76f6:  nop
0872e9c7 +0x76f7:  nop
0872e9c8 +0x76f8:  nop
0872e9c9 +0x76f9:  nop
0872e9ca +0x76fa:  nop
0872e9cb +0x76fb:  nop
0872e9cc +0x76fc:  nop
0872e9cd +0x76fd:  nop
0872e9ce +0x76fe:  nop
0872e9cf +0x76ff:  nop
0872e9d0 +0x7700:  mov    0x4(%esp),%eax
0872e9d4 +0x7704:  mov    (%eax),%ecx
0872e9d6 +0x7706:  add    -0xc(%ecx),%eax
0872e9d9 +0x7709:  mov    %eax,0x4(%esp)
0872e9dd +0x770d:  jmp    0872e9e0 <+0x7710>
0872e9df +0x770f:  nop
0872e9e0 +0x7710:  push   %ebp
0872e9e1 +0x7711:  mov    %esp,%ebp
0872e9e3 +0x7713:  sub    $0x38,%esp
0872e9e6 +0x7716:  mov    %ebx,-0xc(%ebp)
0872e9e9 +0x7719:  mov    0x8(%ebp),%ebx
0872e9ec +0x771c:  mov    %esi,-0x8(%ebp)
0872e9ef +0x771f:  mov    %edi,-0x4(%ebp)
0872e9f2 +0x7722:  lea    0x8(%ebx),%esi
0872e9f5 +0x7725:  movl   $&_ZTVSt14basic_ifstreamIwSt11char_traitsIwEE+0xc,(%ebx)
0872e9fb +0x772b:  lea    0x94(%ebx),%edi
0872ea01 +0x7731:  movl   $&_ZTVSt14basic_ifstreamIwSt11char_traitsIwEE+0x20,0x94(%ebx)
0872ea0b +0x773b:  movl   $&_ZTVSt13basic_filebufIwSt11char_traitsIwEE+0x8,0x8(%ebx)
0872ea12 +0x7742:  mov    %esi,(%esp)
0872ea15 +0x7745:  call   0872aeb0 <+0x3be0>
0872ea1a +0x774a:  lea    0x40(%ebx),%eax
0872ea1d +0x774d:  mov    %eax,(%esp)
0872ea20 +0x7750:  call   08722720 <_ZNSt12__basic_fileIcED1Ev>  ; std::__basic_file<char>::~__basic_file()
0872ea25 +0x7755:  movl   $&_ZTVSt15basic_streambufIwSt11char_traitsIwEE+0x8,0x8(%ebx)
0872ea2c +0x775c:  add    $0x1c,%esi
0872ea2f +0x775f:  mov    %esi,(%esp)
0872ea32 +0x7762:  call   086dbcd0 <_ZNSt6localeD1Ev>  ; std::locale::~locale()
0872ea37 +0x7767:  mov    &_ZTTSt14basic_ifstreamIwSt11char_traitsIwEE+0x4,%eax
0872ea3c +0x776c:  mov    &_ZTTSt14basic_ifstreamIwSt11char_traitsIwEE+0x8,%edx
0872ea42 +0x7772:  mov    %eax,(%ebx)
0872ea44 +0x7774:  mov    -0xc(%eax),%eax
0872ea47 +0x7777:  movl   $0x0,0x4(%ebx)
0872ea4e +0x777e:  mov    %edx,(%ebx,%eax,1)
0872ea51 +0x7781:  movl   $&_ZTVSt9basic_iosIwSt11char_traitsIwEE+0x8,0x94(%ebx)
0872ea5b +0x778b:  mov    -0xc(%ebp),%ebx
0872ea5e +0x778e:  mov    %edi,0x8(%ebp)
0872ea61 +0x7791:  mov    -0x8(%ebp),%esi
0872ea64 +0x7794:  mov    -0x4(%ebp),%edi
0872ea67 +0x7797:  mov    %ebp,%esp
0872ea69 +0x7799:  pop    %ebp
0872ea6a +0x779a:  jmp    08727070 <_ZNSt8ios_baseD1Ev>  ; std::ios_base::~ios_base()
0872ea6f +0x779f:  lea    0x40(%ebx),%edx
0872ea72 +0x77a2:  mov    %eax,-0x1c(%ebp)
0872ea75 +0x77a5:  mov    %edx,(%esp)
0872ea78 +0x77a8:  call   08722720 <_ZNSt12__basic_fileIcED1Ev>  ; std::__basic_file<char>::~__basic_file()
0872ea7d +0x77ad:  mov    -0x1c(%ebp),%eax
0872ea80 +0x77b0:  mov    %eax,-0x1c(%ebp)
0872ea83 +0x77b3:  mov    %esi,(%esp)
0872ea86 +0x77b6:  call   08705f90 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x11724>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x11724
0872ea8b +0x77bb:  mov    &_ZTTSt14basic_ifstreamIwSt11char_traitsIwEE+0x4,%edx
0872ea91 +0x77c1:  mov    &_ZTTSt14basic_ifstreamIwSt11char_traitsIwEE+0x8,%ecx
0872ea97 +0x77c7:  mov    %edx,(%ebx)
0872ea99 +0x77c9:  mov    -0xc(%edx),%edx
0872ea9c +0x77cc:  movl   $0x0,0x4(%ebx)
0872eaa3 +0x77d3:  mov    %ecx,(%ebx,%edx,1)
0872eaa6 +0x77d6:  mov    %edi,(%esp)
0872eaa9 +0x77d9:  call   086e0bf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xb50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xb50
0872eaae +0x77de:  mov    -0x1c(%ebp),%eax
0872eab1 +0x77e1:  mov    %eax,(%esp)
0872eab4 +0x77e4:  call   08ae3750 <_Unwind_Resume>
0872eab9 +0x77e9:  jmp    0872ea80 <+0x77b0>
0872eabb +0x77eb:  nop
0872eabc +0x77ec:  nop
0872eabd +0x77ed:  nop
0872eabe +0x77ee:  nop
0872eabf +0x77ef:  nop
0872eac0 +0x77f0:  push   %ebp
0872eac1 +0x77f1:  mov    %esp,%ebp
0872eac3 +0x77f3:  sub    $0x38,%esp
0872eac6 +0x77f6:  mov    %esi,-0x8(%ebp)
0872eac9 +0x77f9:  mov    0xc(%ebp),%esi
0872eacc +0x77fc:  mov    %ebx,-0xc(%ebp)
0872eacf +0x77ff:  mov    0x8(%ebp),%ebx
0872ead2 +0x7802:  mov    %edi,-0x4(%ebp)
0872ead5 +0x7805:  mov    (%esi),%eax
0872ead7 +0x7807:  mov    0xc(%esi),%edx
0872eada +0x780a:  lea    0x8(%ebx),%edi
0872eadd +0x780d:  mov    %eax,(%ebx)
0872eadf +0x780f:  mov    -0xc(%eax),%eax
0872eae2 +0x7812:  mov    %edx,(%ebx,%eax,1)
0872eae5 +0x7815:  movl   $&_ZTVSt13basic_filebufIwSt11char_traitsIwEE+0x8,0x8(%ebx)
0872eaec +0x781c:  mov    %edi,(%esp)
0872eaef +0x781f:  call   0872aeb0 <+0x3be0>
0872eaf4 +0x7824:  lea    0x40(%ebx),%eax
0872eaf7 +0x7827:  mov    %eax,(%esp)
0872eafa +0x782a:  call   08722720 <_ZNSt12__basic_fileIcED1Ev>  ; std::__basic_file<char>::~__basic_file()
0872eaff +0x782f:  movl   $&_ZTVSt15basic_streambufIwSt11char_traitsIwEE+0x8,0x8(%ebx)
0872eb06 +0x7836:  add    $0x1c,%edi
0872eb09 +0x7839:  mov    %edi,(%esp)
0872eb0c +0x783c:  call   086dbcd0 <_ZNSt6localeD1Ev>  ; std::locale::~locale()
0872eb11 +0x7841:  mov    0x4(%esi),%eax
0872eb14 +0x7844:  mov    0x8(%esi),%edx
0872eb17 +0x7847:  mov    %eax,(%ebx)
0872eb19 +0x7849:  mov    -0xc(%eax),%eax
0872eb1c +0x784c:  movl   $0x0,0x4(%ebx)
0872eb23 +0x7853:  mov    %edx,(%ebx,%eax,1)
0872eb26 +0x7856:  mov    -0xc(%ebp),%ebx
0872eb29 +0x7859:  mov    -0x8(%ebp),%esi
0872eb2c +0x785c:  mov    -0x4(%ebp),%edi
0872eb2f +0x785f:  mov    %ebp,%esp
0872eb31 +0x7861:  pop    %ebp
0872eb32 +0x7862:  ret
0872eb33 +0x7863:  lea    0x40(%ebx),%edx
0872eb36 +0x7866:  mov    %eax,-0x1c(%ebp)
0872eb39 +0x7869:  mov    %edx,(%esp)
0872eb3c +0x786c:  call   08722720 <_ZNSt12__basic_fileIcED1Ev>  ; std::__basic_file<char>::~__basic_file()
0872eb41 +0x7871:  mov    -0x1c(%ebp),%eax
0872eb44 +0x7874:  mov    %eax,-0x1c(%ebp)
0872eb47 +0x7877:  mov    %edi,(%esp)
0872eb4a +0x787a:  call   08705f90 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x11724>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x11724
0872eb4f +0x787f:  mov    0x4(%esi),%edx
0872eb52 +0x7882:  mov    0x8(%esi),%ecx
0872eb55 +0x7885:  mov    -0x1c(%ebp),%eax
0872eb58 +0x7888:  mov    %edx,(%ebx)
0872eb5a +0x788a:  mov    -0xc(%edx),%edx
0872eb5d +0x788d:  movl   $0x0,0x4(%ebx)
0872eb64 +0x7894:  mov    %ecx,(%ebx,%edx,1)
0872eb67 +0x7897:  mov    %eax,(%esp)
0872eb6a +0x789a:  call   08ae3750 <_Unwind_Resume>
0872eb6f +0x789f:  jmp    0872eb44 <+0x7874>
0872eb71 +0x78a1:  nop
0872eb72 +0x78a2:  nop
0872eb73 +0x78a3:  nop
0872eb74 +0x78a4:  nop
0872eb75 +0x78a5:  nop
0872eb76 +0x78a6:  nop
0872eb77 +0x78a7:  nop
0872eb78 +0x78a8:  nop
0872eb79 +0x78a9:  nop
0872eb7a +0x78aa:  nop
0872eb7b +0x78ab:  nop
0872eb7c +0x78ac:  nop
0872eb7d +0x78ad:  nop
0872eb7e +0x78ae:  nop
0872eb7f +0x78af:  nop
0872eb80 +0x78b0:  push   %ebp
0872eb81 +0x78b1:  mov    %esp,%ebp
0872eb83 +0x78b3:  sub    $0x18,%esp
0872eb86 +0x78b6:  mov    %ebx,-0x8(%ebp)
0872eb89 +0x78b9:  mov    0x8(%ebp),%ebx
0872eb8c +0x78bc:  mov    %esi,-0x4(%ebp)
0872eb8f +0x78bf:  movl   $&_ZTVSt13basic_filebufIwSt11char_traitsIwEE+0x8,(%ebx)
0872eb95 +0x78c5:  mov    %ebx,(%esp)
0872eb98 +0x78c8:  call   0872aeb0 <+0x3be0>
0872eb9d +0x78cd:  lea    0x38(%ebx),%eax
0872eba0 +0x78d0:  mov    %eax,(%esp)
0872eba3 +0x78d3:  call   08722720 <_ZNSt12__basic_fileIcED1Ev>  ; std::__basic_file<char>::~__basic_file()
0872eba8 +0x78d8:  movl   $&_ZTVSt15basic_streambufIwSt11char_traitsIwEE+0x8,(%ebx)
0872ebae +0x78de:  lea    0x1c(%ebx),%eax
0872ebb1 +0x78e1:  mov    %eax,(%esp)
0872ebb4 +0x78e4:  call   086dbcd0 <_ZNSt6localeD1Ev>  ; std::locale::~locale()
0872ebb9 +0x78e9:  mov    -0x4(%ebp),%esi
0872ebbc +0x78ec:  mov    %ebx,0x8(%ebp)
0872ebbf +0x78ef:  mov    -0x8(%ebp),%ebx
0872ebc2 +0x78f2:  mov    %ebp,%esp
0872ebc4 +0x78f4:  pop    %ebp
0872ebc5 +0x78f5:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
0872ebca +0x78fa:  mov    %eax,%esi
0872ebcc +0x78fc:  lea    0x38(%ebx),%eax
0872ebcf +0x78ff:  mov    %eax,(%esp)
0872ebd2 +0x7902:  call   08722720 <_ZNSt12__basic_fileIcED1Ev>  ; std::__basic_file<char>::~__basic_file()
0872ebd7 +0x7907:  mov    %ebx,(%esp)
0872ebda +0x790a:  call   08705f90 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x11724>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x11724
0872ebdf +0x790f:  mov    %esi,(%esp)
0872ebe2 +0x7912:  call   08ae3750 <_Unwind_Resume>
0872ebe7 +0x7917:  mov    %eax,%esi
0872ebe9 +0x7919:  jmp    0872ebd7 <+0x7907>
0872ebeb +0x791b:  nop
0872ebec +0x791c:  nop
0872ebed +0x791d:  nop
0872ebee +0x791e:  nop
0872ebef +0x791f:  nop
0872ebf0 +0x7920:  push   %ebp
0872ebf1 +0x7921:  mov    %esp,%ebp
0872ebf3 +0x7923:  sub    $0x38,%esp
0872ebf6 +0x7926:  mov    %ebx,-0xc(%ebp)
0872ebf9 +0x7929:  mov    0xc(%ebp),%ebx
0872ebfc +0x792c:  mov    %esi,-0x8(%ebp)
0872ebff +0x792f:  mov    0x8(%ebp),%esi
0872ec02 +0x7932:  mov    %edi,-0x4(%ebp)
0872ec05 +0x7935:  mov    (%ebx),%eax
0872ec07 +0x7937:  mov    0xc(%ebx),%edx
0872ec0a +0x793a:  lea    0x4(%esi),%edi
0872ec0d +0x793d:  mov    %eax,(%esi)
0872ec0f +0x793f:  mov    -0xc(%eax),%eax
0872ec12 +0x7942:  mov    %edx,(%esi,%eax,1)
0872ec15 +0x7945:  movl   $&_ZTVSt13basic_filebufIcSt11char_traitsIcEE+0x8,0x4(%esi)
0872ec1c +0x794c:  mov    %edi,(%esp)
0872ec1f +0x794f:  call   08728c90 <+0x19c0>
0872ec24 +0x7954:  lea    0x3c(%esi),%eax
0872ec27 +0x7957:  mov    %eax,(%esp)
0872ec2a +0x795a:  call   08722720 <_ZNSt12__basic_fileIcED1Ev>  ; std::__basic_file<char>::~__basic_file()
0872ec2f +0x795f:  movl   $&_ZTVSt15basic_streambufIcSt11char_traitsIcEE+0x8,0x4(%esi)
0872ec36 +0x7966:  add    $0x1c,%edi
0872ec39 +0x7969:  mov    %edi,(%esp)
0872ec3c +0x796c:  call   086dbcd0 <_ZNSt6localeD1Ev>  ; std::locale::~locale()
0872ec41 +0x7971:  mov    0x4(%ebx),%eax
0872ec44 +0x7974:  mov    0x8(%ebx),%edx
0872ec47 +0x7977:  mov    %eax,(%esi)
0872ec49 +0x7979:  mov    -0xc(%eax),%eax
0872ec4c +0x797c:  mov    %edx,(%esi,%eax,1)
0872ec4f +0x797f:  mov    -0xc(%ebp),%ebx
0872ec52 +0x7982:  mov    -0x8(%ebp),%esi
0872ec55 +0x7985:  mov    -0x4(%ebp),%edi
0872ec58 +0x7988:  mov    %ebp,%esp
0872ec5a +0x798a:  pop    %ebp
0872ec5b +0x798b:  ret
0872ec5c +0x798c:  lea    0x3c(%esi),%edx
0872ec5f +0x798f:  mov    %eax,-0x1c(%ebp)
0872ec62 +0x7992:  mov    %edx,(%esp)
0872ec65 +0x7995:  call   08722720 <_ZNSt12__basic_fileIcED1Ev>  ; std::__basic_file<char>::~__basic_file()
0872ec6a +0x799a:  mov    -0x1c(%ebp),%eax
0872ec6d +0x799d:  mov    %eax,-0x1c(%ebp)
0872ec70 +0x79a0:  mov    %edi,(%esp)
0872ec73 +0x79a3:  call   08705fb0 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x11744>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x11744
0872ec78 +0x79a8:  mov    0x4(%ebx),%edx
0872ec7b +0x79ab:  mov    0x8(%ebx),%ecx
0872ec7e +0x79ae:  mov    -0x1c(%ebp),%eax
0872ec81 +0x79b1:  mov    %edx,(%esi)
0872ec83 +0x79b3:  mov    -0xc(%edx),%edx
0872ec86 +0x79b6:  mov    %ecx,(%esi,%edx,1)
0872ec89 +0x79b9:  mov    %eax,(%esp)
0872ec8c +0x79bc:  call   08ae3750 <_Unwind_Resume>
0872ec91 +0x79c1:  jmp    0872ec6d <+0x799d>
0872ec93 +0x79c3:  nop
0872ec94 +0x79c4:  nop
0872ec95 +0x79c5:  nop
0872ec96 +0x79c6:  nop
0872ec97 +0x79c7:  nop
0872ec98 +0x79c8:  nop
0872ec99 +0x79c9:  nop
0872ec9a +0x79ca:  nop
0872ec9b +0x79cb:  nop
0872ec9c +0x79cc:  nop
0872ec9d +0x79cd:  nop
0872ec9e +0x79ce:  nop
0872ec9f +0x79cf:  nop
```

## 反编译 C

```c
// std::__verify_grouping @ 0x87272d0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__verify_grouping(char const*, unsigned int, std::string const&) */

bool std::__verify_grouping(char *param_1,uint param_2,string *param_3)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  pcVar1 = *(char **)param_3;
  uVar4 = *(int *)(pcVar1 + -0xc) - 1;
  uVar5 = param_2 - 1;
  if (uVar4 < param_2 - 1) {
    uVar5 = uVar4;
  }
  uVar3 = 0;
  bVar6 = true;
  if (uVar5 != 0) {
    do {
      bVar6 = pcVar1[uVar4] == param_1[uVar3];
      uVar3 = uVar3 + 1;
      uVar4 = uVar4 - 1;
      if (uVar5 <= uVar3) break;
    } while (bVar6);
  }
  if ((uVar4 == 0) || (bVar6 == false)) {
    cVar2 = param_1[uVar5];
  }
  else {
    cVar2 = param_1[uVar5];
    do {
      bVar6 = pcVar1[uVar4] == cVar2;
      uVar4 = uVar4 - 1;
      if (uVar4 == 0) break;
    } while (bVar6);
  }
  if ((byte)(cVar2 - 1U) < 0x7e) {
    bVar6 = (bool)(bVar6 & *pcVar1 <= cVar2);
  }
  return bVar6;
}
```
