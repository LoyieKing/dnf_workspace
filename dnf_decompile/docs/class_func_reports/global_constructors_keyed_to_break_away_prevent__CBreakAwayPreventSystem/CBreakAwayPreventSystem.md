# CBreakAwayPreventSystem

`_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev`

`global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to break_away_prevent::CBreakAwayPreventSystem` | `0x0831d247` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0831d247  _GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev
#           global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()
# range [0x0831d247, 0x0831e847]
0831d247 +0x0000:  push   %ebp
0831d248 +0x0001:  mov    %esp,%ebp
0831d24a +0x0003:  sub    $0x18,%esp
0831d24d +0x0006:  movl   $0xffff,0x4(%esp)
0831d255 +0x000e:  movl   $0x1,(%esp)
0831d25c +0x0015:  call   0831d207 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0831d261 +0x001a:  leave
0831d262 +0x001b:  ret
0831d263 +0x001c:  nop
0831d264 +0x001d:  push   %ebp
0831d265 +0x001e:  mov    %esp,%ebp
0831d267 +0x0020:  mov    0x8(%ebp),%eax
0831d26a +0x0023:  movb   $0x0,(%eax)
0831d26d +0x0026:  mov    0x8(%ebp),%eax
0831d270 +0x0029:  movb   $0x0,0x1(%eax)
0831d274 +0x002d:  mov    0x8(%ebp),%eax
0831d277 +0x0030:  movb   $0x0,0x2(%eax)
0831d27b +0x0034:  mov    0x8(%ebp),%eax
0831d27e +0x0037:  movl   $0x0,0x4(%eax)
0831d285 +0x003e:  mov    0x8(%ebp),%eax
0831d288 +0x0041:  movl   $0x0,0x8(%eax)
0831d28f +0x0048:  mov    0x8(%ebp),%eax
0831d292 +0x004b:  movl   $0x0,0xc(%eax)
0831d299 +0x0052:  mov    0x8(%ebp),%eax
0831d29c +0x0055:  movl   $0x0,0x10(%eax)
0831d2a3 +0x005c:  mov    0x8(%ebp),%eax
0831d2a6 +0x005f:  movl   $0x0,0x14(%eax)
0831d2ad +0x0066:  pop    %ebp
0831d2ae +0x0067:  ret
0831d2af +0x0068:  nop
0831d2b0 +0x0069:  push   %ebp
0831d2b1 +0x006a:  mov    %esp,%ebp
0831d2b3 +0x006c:  push   %esi
0831d2b4 +0x006d:  push   %ebx
0831d2b5 +0x006e:  sub    $0x10,%esp
0831d2b8 +0x0071:  mov    0x8(%ebp),%eax
0831d2bb +0x0074:  add    $0x10,%eax
0831d2be +0x0077:  mov    %eax,%ebx
0831d2c0 +0x0079:  mov    $0x1d,%esi
0831d2c5 +0x007e:  jmp    0831d2d5 <+0x8e>
0831d2c7 +0x0080:  mov    %ebx,(%esp)
0831d2ca +0x0083:  call   0831d264 <+0x1d>
0831d2cf +0x0088:  add    $0x18,%ebx
0831d2d2 +0x008b:  sub    $0x1,%esi
0831d2d5 +0x008e:  cmp    $0xffffffff,%esi
0831d2d8 +0x0091:  setne  %al
0831d2db +0x0094:  test   %al,%al
0831d2dd +0x0096:  jne    0831d2c7 <+0x80>
0831d2df +0x0098:  mov    0x8(%ebp),%eax
0831d2e2 +0x009b:  movw   $0x0,(%eax)
0831d2e7 +0x00a0:  mov    0x8(%ebp),%eax
0831d2ea +0x00a3:  movw   $0x0,0x2(%eax)
0831d2f0 +0x00a9:  mov    0x8(%ebp),%eax
0831d2f3 +0x00ac:  movw   $0x0,0x4(%eax)
0831d2f9 +0x00b2:  mov    0x8(%ebp),%eax
0831d2fc +0x00b5:  movw   $0x0,0x6(%eax)
0831d302 +0x00bb:  mov    0x8(%ebp),%eax
0831d305 +0x00be:  movw   $0x0,0x8(%eax)
0831d30b +0x00c4:  mov    0x8(%ebp),%eax
0831d30e +0x00c7:  movw   $0x0,0xa(%eax)
0831d314 +0x00cd:  mov    0x8(%ebp),%eax
0831d317 +0x00d0:  movw   $0x0,0xc(%eax)
0831d31d +0x00d6:  mov    0x8(%ebp),%eax
0831d320 +0x00d9:  movb   $0x0,0xe(%eax)
0831d324 +0x00dd:  mov    0x8(%ebp),%eax
0831d327 +0x00e0:  movl   $0x0,0x2e0(%eax)
0831d331 +0x00ea:  add    $0x10,%esp
0831d334 +0x00ed:  pop    %ebx
0831d335 +0x00ee:  pop    %esi
0831d336 +0x00ef:  pop    %ebp
0831d337 +0x00f0:  ret
0831d338 +0x00f1:  push   %ebp
0831d339 +0x00f2:  mov    %esp,%ebp
0831d33b +0x00f4:  mov    0x8(%ebp),%eax
0831d33e +0x00f7:  movzbl (%eax),%edx
0831d341 +0x00fa:  mov    0xc(%ebp),%eax
0831d344 +0x00fd:  movzbl (%eax),%eax
0831d347 +0x0100:  cmp    %al,%dl
0831d349 +0x0102:  jge    0831d352 <+0x10b>
0831d34b +0x0104:  mov    $0x1,%eax
0831d350 +0x0109:  jmp    0831d3ab <+0x164>
0831d352 +0x010b:  mov    0x8(%ebp),%eax
0831d355 +0x010e:  movzbl (%eax),%edx
0831d358 +0x0111:  mov    0xc(%ebp),%eax
0831d35b +0x0114:  movzbl (%eax),%eax
0831d35e +0x0117:  cmp    %al,%dl
0831d360 +0x0119:  jne    0831d3a6 <+0x15f>
0831d362 +0x011b:  mov    0x8(%ebp),%eax
0831d365 +0x011e:  movzbl 0x1(%eax),%edx
0831d369 +0x0122:  mov    0xc(%ebp),%eax
0831d36c +0x0125:  movzbl 0x1(%eax),%eax
0831d370 +0x0129:  cmp    %al,%dl
0831d372 +0x012b:  jge    0831d37b <+0x134>
0831d374 +0x012d:  mov    $0x1,%eax
0831d379 +0x0132:  jmp    0831d3ab <+0x164>
0831d37b +0x0134:  mov    0x8(%ebp),%eax
0831d37e +0x0137:  movzbl 0x1(%eax),%edx
0831d382 +0x013b:  mov    0xc(%ebp),%eax
0831d385 +0x013e:  movzbl 0x1(%eax),%eax
0831d389 +0x0142:  cmp    %al,%dl
0831d38b +0x0144:  jne    0831d3a6 <+0x15f>
0831d38d +0x0146:  mov    0x8(%ebp),%eax
0831d390 +0x0149:  movzbl 0x2(%eax),%edx
0831d394 +0x014d:  mov    0xc(%ebp),%eax
0831d397 +0x0150:  movzbl 0x2(%eax),%eax
0831d39b +0x0154:  cmp    %al,%dl
0831d39d +0x0156:  jge    0831d3a6 <+0x15f>
0831d39f +0x0158:  mov    $0x1,%eax
0831d3a4 +0x015d:  jmp    0831d3ab <+0x164>
0831d3a6 +0x015f:  mov    $0x0,%eax
0831d3ab +0x0164:  pop    %ebp
0831d3ac +0x0165:  ret
0831d3ad +0x0166:  nop
0831d3ae +0x0167:  push   %ebp
0831d3af +0x0168:  mov    %esp,%ebp
0831d3b1 +0x016a:  mov    0x8(%ebp),%eax
0831d3b4 +0x016d:  movb   $0x0,(%eax)
0831d3b7 +0x0170:  mov    0x8(%ebp),%eax
0831d3ba +0x0173:  movb   $0x0,0x1(%eax)
0831d3be +0x0177:  mov    0x8(%ebp),%eax
0831d3c1 +0x017a:  movb   $0x0,0x2(%eax)
0831d3c5 +0x017e:  pop    %ebp
0831d3c6 +0x017f:  ret
0831d3c7 +0x0180:  nop
0831d3c8 +0x0181:  push   %ebp
0831d3c9 +0x0182:  mov    %esp,%ebp
0831d3cb +0x0184:  mov    0x8(%ebp),%eax
0831d3ce +0x0187:  movl   $0x0,(%eax)
0831d3d4 +0x018d:  mov    0x8(%ebp),%eax
0831d3d7 +0x0190:  movl   $0x0,0x4(%eax)
0831d3de +0x0197:  mov    0x8(%ebp),%eax
0831d3e1 +0x019a:  movl   $0x0,0x8(%eax)
0831d3e8 +0x01a1:  mov    0x8(%ebp),%eax
0831d3eb +0x01a4:  movl   $0x0,0xc(%eax)
0831d3f2 +0x01ab:  mov    0x8(%ebp),%eax
0831d3f5 +0x01ae:  movl   $0x0,0x10(%eax)
0831d3fc +0x01b5:  pop    %ebp
0831d3fd +0x01b6:  ret
0831d3fe +0x01b7:  push   %ebp
0831d3ff +0x01b8:  mov    %esp,%ebp
0831d401 +0x01ba:  sub    $0x18,%esp
0831d404 +0x01bd:  mov    0x8(%ebp),%eax
0831d407 +0x01c0:  mov    %eax,(%esp)
0831d40a +0x01c3:  call   0831d5c4 <+0x37d>
0831d40f +0x01c8:  leave
0831d410 +0x01c9:  ret
0831d411 +0x01ca:  nop
0831d412 +0x01cb:  push   %ebp
0831d413 +0x01cc:  mov    %esp,%ebp
0831d415 +0x01ce:  push   %esi
0831d416 +0x01cf:  push   %ebx
0831d417 +0x01d0:  sub    $0x10,%esp
0831d41a +0x01d3:  mov    0x8(%ebp),%eax
0831d41d +0x01d6:  mov    %eax,(%esp)
0831d420 +0x01d9:  call   0831d59c <+0x355>
0831d425 +0x01de:  mov    0x8(%ebp),%eax
0831d428 +0x01e1:  mov    %eax,(%esp)
0831d42b +0x01e4:  call   0831d606 <+0x3bf>
0831d430 +0x01e9:  jmp    0831d44d <+0x206>
0831d432 +0x01eb:  mov    %edx,%ebx
0831d434 +0x01ed:  mov    %eax,%esi
0831d436 +0x01ef:  mov    0x8(%ebp),%eax
0831d439 +0x01f2:  mov    %eax,(%esp)
0831d43c +0x01f5:  call   0831d3fe <+0x1b7>
0831d441 +0x01fa:  mov    %esi,%eax
0831d443 +0x01fc:  mov    %ebx,%edx
0831d445 +0x01fe:  mov    %eax,(%esp)
0831d448 +0x0201:  call   08ae3750 <_Unwind_Resume>
0831d44d +0x0206:  add    $0x10,%esp
0831d450 +0x0209:  pop    %ebx
0831d451 +0x020a:  pop    %esi
0831d452 +0x020b:  pop    %ebp
0831d453 +0x020c:  ret
0831d454 +0x020d:  push   %ebp
0831d455 +0x020e:  mov    %esp,%ebp
0831d457 +0x0210:  mov    0x8(%ebp),%eax
0831d45a +0x0213:  movl   $0x0,(%eax)
0831d460 +0x0219:  mov    0x8(%ebp),%eax
0831d463 +0x021c:  movl   $0x0,0x4(%eax)
0831d46a +0x0223:  mov    0x8(%ebp),%eax
0831d46d +0x0226:  movl   $0x0,0x8(%eax)
0831d474 +0x022d:  mov    0x8(%ebp),%eax
0831d477 +0x0230:  movl   $0x0,0xc(%eax)
0831d47e +0x0237:  mov    0x8(%ebp),%eax
0831d481 +0x023a:  movl   $0x0,0x10(%eax)
0831d488 +0x0241:  pop    %ebp
0831d489 +0x0242:  ret
0831d48a +0x0243:  push   %ebp
0831d48b +0x0244:  mov    %esp,%ebp
0831d48d +0x0246:  mov    0xc(%ebp),%eax
0831d490 +0x0249:  mov    (%eax),%edx
0831d492 +0x024b:  mov    0x8(%ebp),%eax
0831d495 +0x024e:  mov    %edx,(%eax)
0831d497 +0x0250:  mov    0xc(%ebp),%eax
0831d49a +0x0253:  mov    0x4(%eax),%edx
0831d49d +0x0256:  mov    0x8(%ebp),%eax
0831d4a0 +0x0259:  mov    %edx,0x4(%eax)
0831d4a3 +0x025c:  mov    0xc(%ebp),%eax
0831d4a6 +0x025f:  mov    0x8(%eax),%edx
0831d4a9 +0x0262:  mov    0x8(%ebp),%eax
0831d4ac +0x0265:  mov    %edx,0x8(%eax)
0831d4af +0x0268:  mov    0xc(%ebp),%eax
0831d4b2 +0x026b:  mov    0xc(%eax),%edx
0831d4b5 +0x026e:  mov    0x8(%ebp),%eax
0831d4b8 +0x0271:  mov    %edx,0xc(%eax)
0831d4bb +0x0274:  mov    0xc(%ebp),%eax
0831d4be +0x0277:  mov    0x10(%eax),%edx
0831d4c1 +0x027a:  mov    0x8(%ebp),%eax
0831d4c4 +0x027d:  mov    %edx,0x10(%eax)
0831d4c7 +0x0280:  pop    %ebp
0831d4c8 +0x0281:  ret
0831d4c9 +0x0282:  nop
0831d4ca +0x0283:  push   %ebp
0831d4cb +0x0284:  mov    %esp,%ebp
0831d4cd +0x0286:  sub    $0x18,%esp
0831d4d0 +0x0289:  mov    0x8(%ebp),%eax
0831d4d3 +0x028c:  mov    %eax,(%esp)
0831d4d6 +0x028f:  call   0831d454 <+0x20d>
0831d4db +0x0294:  leave
0831d4dc +0x0295:  ret
0831d4dd +0x0296:  nop
0831d4de +0x0297:  push   %ebp
0831d4df +0x0298:  mov    %esp,%ebp
0831d4e1 +0x029a:  mov    0x8(%ebp),%eax
0831d4e4 +0x029d:  mov    0xc(%ebp),%edx
0831d4e7 +0x02a0:  mov    %edx,0x703b8(%eax)
0831d4ed +0x02a6:  pop    %ebp
0831d4ee +0x02a7:  ret
0831d4ef +0x02a8:  nop
0831d4f0 +0x02a9:  push   %ebp
0831d4f1 +0x02aa:  mov    %esp,%ebp
0831d4f3 +0x02ac:  mov    0x8(%ebp),%eax
0831d4f6 +0x02af:  mov    0x703b8(%eax),%eax
0831d4fc +0x02b5:  pop    %ebp
0831d4fd +0x02b6:  ret
0831d4fe +0x02b7:  push   %ebp
0831d4ff +0x02b8:  mov    %esp,%ebp
0831d501 +0x02ba:  mov    0x8(%ebp),%eax
0831d504 +0x02bd:  mov    0x703b0(%eax),%eax
0831d50a +0x02c3:  pop    %ebp
0831d50b +0x02c4:  ret
0831d50c +0x02c5:  push   %ebp
0831d50d +0x02c6:  mov    %esp,%ebp
0831d50f +0x02c8:  sub    $0x4,%esp
0831d512 +0x02cb:  mov    0xc(%ebp),%eax
0831d515 +0x02ce:  mov    %al,-0x4(%ebp)
0831d518 +0x02d1:  mov    0x8(%ebp),%eax
0831d51b +0x02d4:  movzbl -0x4(%ebp),%edx
0831d51f +0x02d8:  mov    %dl,0x703c0(%eax)
0831d525 +0x02de:  leave
0831d526 +0x02df:  ret
0831d527 +0x02e0:  nop
0831d528 +0x02e1:  push   %ebp
0831d529 +0x02e2:  mov    %esp,%ebp
0831d52b +0x02e4:  sub    $0x18,%esp
0831d52e +0x02e7:  mov    0x8(%ebp),%eax
0831d531 +0x02ea:  lea    0x703c4(%eax),%edx
0831d537 +0x02f0:  mov    0xc(%ebp),%eax
0831d53a +0x02f3:  mov    %eax,0x4(%esp)
0831d53e +0x02f7:  mov    %edx,(%esp)
0831d541 +0x02fa:  call   0831d48a <+0x243>
0831d546 +0x02ff:  leave
0831d547 +0x0300:  ret
0831d548 +0x0301:  push   %ebp
0831d549 +0x0302:  mov    %esp,%ebp
0831d54b +0x0304:  sub    $0x18,%esp
0831d54e +0x0307:  mov    0x8(%ebp),%eax
0831d551 +0x030a:  mov    %eax,(%esp)
0831d554 +0x030d:  call   0831d64c <+0x405>
0831d559 +0x0312:  leave
0831d55a +0x0313:  ret
0831d55b +0x0314:  nop
0831d55c +0x0315:  push   %ebp
0831d55d +0x0316:  mov    %esp,%ebp
0831d55f +0x0318:  sub    $0x18,%esp
0831d562 +0x031b:  mov    0x8(%ebp),%eax
0831d565 +0x031e:  mov    %eax,(%esp)
0831d568 +0x0321:  call   0831d3fe <+0x1b7>
0831d56d +0x0326:  leave
0831d56e +0x0327:  ret
0831d56f +0x0328:  nop
0831d570 +0x0329:  push   %ebp
0831d571 +0x032a:  mov    %esp,%ebp
0831d573 +0x032c:  sub    $0x18,%esp
0831d576 +0x032f:  mov    0x8(%ebp),%eax
0831d579 +0x0332:  add    $0x4,%eax
0831d57c +0x0335:  mov    %eax,(%esp)
0831d57f +0x0338:  call   0831d55c <+0x315>
0831d584 +0x033d:  leave
0831d585 +0x033e:  ret
0831d586 +0x033f:  push   %ebp
0831d587 +0x0340:  mov    %esp,%ebp
0831d589 +0x0342:  sub    $0x18,%esp
0831d58c +0x0345:  mov    0x8(%ebp),%eax
0831d58f +0x0348:  add    $0x4,%eax
0831d592 +0x034b:  mov    %eax,(%esp)
0831d595 +0x034e:  call   0831d55c <+0x315>
0831d59a +0x0353:  leave
0831d59b +0x0354:  ret
0831d59c +0x0355:  push   %ebp
0831d59d +0x0356:  mov    %esp,%ebp
0831d59f +0x0358:  sub    $0x18,%esp
0831d5a2 +0x035b:  mov    0x8(%ebp),%eax
0831d5a5 +0x035e:  mov    %eax,(%esp)
0831d5a8 +0x0361:  call   0831d8c2 <+0x67b>
0831d5ad +0x0366:  leave
0831d5ae +0x0367:  ret
0831d5af +0x0368:  nop
0831d5b0 +0x0369:  push   %ebp
0831d5b1 +0x036a:  mov    %esp,%ebp
0831d5b3 +0x036c:  sub    $0x18,%esp
0831d5b6 +0x036f:  mov    0x8(%ebp),%eax
0831d5b9 +0x0372:  mov    %eax,(%esp)
0831d5bc +0x0375:  call   0831d8e0 <+0x699>
0831d5c1 +0x037a:  leave
0831d5c2 +0x037b:  ret
0831d5c3 +0x037c:  nop
0831d5c4 +0x037d:  push   %ebp
0831d5c5 +0x037e:  mov    %esp,%ebp
0831d5c7 +0x0380:  push   %esi
0831d5c8 +0x0381:  push   %ebx
0831d5c9 +0x0382:  sub    $0x10,%esp
0831d5cc +0x0385:  mov    0x8(%ebp),%eax
0831d5cf +0x0388:  mov    %eax,(%esp)
0831d5d2 +0x038b:  call   0831d8f4 <+0x6ad>
0831d5d7 +0x0390:  jmp    0831d5f4 <+0x3ad>
0831d5d9 +0x0392:  mov    %edx,%ebx
0831d5db +0x0394:  mov    %eax,%esi
0831d5dd +0x0396:  mov    0x8(%ebp),%eax
0831d5e0 +0x0399:  mov    %eax,(%esp)
0831d5e3 +0x039c:  call   0831d5b0 <+0x369>
0831d5e8 +0x03a1:  mov    %esi,%eax
0831d5ea +0x03a3:  mov    %ebx,%edx
0831d5ec +0x03a5:  mov    %eax,(%esp)
0831d5ef +0x03a8:  call   08ae3750 <_Unwind_Resume>
0831d5f4 +0x03ad:  mov    0x8(%ebp),%eax
0831d5f7 +0x03b0:  mov    %eax,(%esp)
0831d5fa +0x03b3:  call   0831d5b0 <+0x369>
0831d5ff +0x03b8:  add    $0x10,%esp
0831d602 +0x03bb:  pop    %ebx
0831d603 +0x03bc:  pop    %esi
0831d604 +0x03bd:  pop    %ebp
0831d605 +0x03be:  ret
0831d606 +0x03bf:  push   %ebp
0831d607 +0x03c0:  mov    %esp,%ebp
0831d609 +0x03c2:  sub    $0x18,%esp
0831d60c +0x03c5:  mov    0x8(%ebp),%eax
0831d60f +0x03c8:  mov    %eax,(%esp)
0831d612 +0x03cb:  call   0831d8f4 <+0x6ad>
0831d617 +0x03d0:  mov    0x8(%ebp),%eax
0831d61a +0x03d3:  mov    %eax,(%esp)
0831d61d +0x03d6:  call   0831d950 <+0x709>
0831d622 +0x03db:  leave
0831d623 +0x03dc:  ret
0831d624 +0x03dd:  push   %ebp
0831d625 +0x03de:  mov    %esp,%ebp
0831d627 +0x03e0:  sub    $0x18,%esp
0831d62a +0x03e3:  mov    0x8(%ebp),%eax
0831d62d +0x03e6:  mov    %eax,(%esp)
0831d630 +0x03e9:  call   0831d966 <+0x71f>
0831d635 +0x03ee:  leave
0831d636 +0x03ef:  ret
0831d637 +0x03f0:  nop
0831d638 +0x03f1:  push   %ebp
0831d639 +0x03f2:  mov    %esp,%ebp
0831d63b +0x03f4:  sub    $0x18,%esp
0831d63e +0x03f7:  mov    0x8(%ebp),%eax
0831d641 +0x03fa:  mov    %eax,(%esp)
0831d644 +0x03fd:  call   0831d97a <+0x733>
0831d649 +0x0402:  leave
0831d64a +0x0403:  ret
0831d64b +0x0404:  nop
0831d64c +0x0405:  push   %ebp
0831d64d +0x0406:  mov    %esp,%ebp
0831d64f +0x0408:  push   %esi
0831d650 +0x0409:  push   %ebx
0831d651 +0x040a:  sub    $0x10,%esp
0831d654 +0x040d:  mov    0x8(%ebp),%eax
0831d657 +0x0410:  mov    %eax,(%esp)
0831d65a +0x0413:  call   0831d9e4 <+0x79d>
0831d65f +0x0418:  mov    %eax,0x4(%esp)
0831d663 +0x041c:  mov    0x8(%ebp),%eax
0831d666 +0x041f:  mov    %eax,(%esp)
0831d669 +0x0422:  call   0831d98e <+0x747>
0831d66e +0x0427:  jmp    0831d68b <+0x444>
0831d670 +0x0429:  mov    %edx,%ebx
0831d672 +0x042b:  mov    %eax,%esi
0831d674 +0x042d:  mov    0x8(%ebp),%eax
0831d677 +0x0430:  mov    %eax,(%esp)
0831d67a +0x0433:  call   0831d638 <+0x3f1>
0831d67f +0x0438:  mov    %esi,%eax
0831d681 +0x043a:  mov    %ebx,%edx
0831d683 +0x043c:  mov    %eax,(%esp)
0831d686 +0x043f:  call   08ae3750 <_Unwind_Resume>
0831d68b +0x0444:  mov    0x8(%ebp),%eax
0831d68e +0x0447:  mov    %eax,(%esp)
0831d691 +0x044a:  call   0831d638 <+0x3f1>
0831d696 +0x044f:  add    $0x10,%esp
0831d699 +0x0452:  pop    %ebx
0831d69a +0x0453:  pop    %esi
0831d69b +0x0454:  pop    %ebp
0831d69c +0x0455:  ret
0831d69d +0x0456:  nop
0831d69e +0x0457:  push   %ebp
0831d69f +0x0458:  mov    %esp,%ebp
0831d6a1 +0x045a:  sub    $0x18,%esp
0831d6a4 +0x045d:  mov    0x8(%ebp),%eax
0831d6a7 +0x0460:  mov    %eax,(%esp)
0831d6aa +0x0463:  call   0831d9f0 <+0x7a9>
0831d6af +0x0468:  leave
0831d6b0 +0x0469:  ret
0831d6b1 +0x046a:  nop
0831d6b2 +0x046b:  push   %ebp
0831d6b3 +0x046c:  mov    %esp,%ebp
0831d6b5 +0x046e:  push   %ebx
0831d6b6 +0x046f:  sub    $0x14,%esp
0831d6b9 +0x0472:  mov    0x8(%ebp),%ebx
0831d6bc +0x0475:  mov    0xc(%ebp),%eax
0831d6bf +0x0478:  mov    0x10(%ebp),%edx
0831d6c2 +0x047b:  mov    %edx,0x8(%esp)
0831d6c6 +0x047f:  mov    %eax,0x4(%esp)
0831d6ca +0x0483:  mov    %ebx,(%esp)
0831d6cd +0x0486:  call   0831da66 <+0x81f>
0831d6d2 +0x048b:  sub    $0x4,%esp
0831d6d5 +0x048e:  mov    %ebx,%eax
0831d6d7 +0x0490:  mov    -0x4(%ebp),%ebx
0831d6da +0x0493:  leave
0831d6db +0x0494:  ret    $0x4
0831d6de +0x0497:  push   %ebp
0831d6df +0x0498:  mov    %esp,%ebp
0831d6e1 +0x049a:  push   %ebx
0831d6e2 +0x049b:  sub    $0x14,%esp
0831d6e5 +0x049e:  mov    0x8(%ebp),%ebx
0831d6e8 +0x04a1:  mov    0xc(%ebp),%eax
0831d6eb +0x04a4:  mov    %eax,0x4(%esp)
0831d6ef +0x04a8:  mov    %ebx,(%esp)
0831d6f2 +0x04ab:  call   0831db24 <+0x8dd>
0831d6f7 +0x04b0:  sub    $0x4,%esp
0831d6fa +0x04b3:  mov    %ebx,%eax
0831d6fc +0x04b5:  mov    -0x4(%ebp),%ebx
0831d6ff +0x04b8:  leave
0831d700 +0x04b9:  ret    $0x4
0831d703 +0x04bc:  nop
0831d704 +0x04bd:  push   %ebp
0831d705 +0x04be:  mov    %esp,%ebp
0831d707 +0x04c0:  mov    0x8(%ebp),%eax
0831d70a +0x04c3:  mov    (%eax),%edx
0831d70c +0x04c5:  mov    0xc(%ebp),%eax
0831d70f +0x04c8:  mov    (%eax),%eax
0831d711 +0x04ca:  cmp    %eax,%edx
0831d713 +0x04cc:  setne  %al
0831d716 +0x04cf:  pop    %ebp
0831d717 +0x04d0:  ret
0831d718 +0x04d1:  push   %ebp
0831d719 +0x04d2:  mov    %esp,%ebp
0831d71b +0x04d4:  mov    0x8(%ebp),%eax
0831d71e +0x04d7:  mov    (%eax),%eax
0831d720 +0x04d9:  add    $0x10,%eax
0831d723 +0x04dc:  pop    %ebp
0831d724 +0x04dd:  ret
0831d725 +0x04de:  nop
0831d726 +0x04df:  push   %ebp
0831d727 +0x04e0:  mov    %esp,%ebp
0831d729 +0x04e2:  sub    $0x28,%esp
0831d72c +0x04e5:  lea    -0xc(%ebp),%eax
0831d72f +0x04e8:  mov    0x8(%ebp),%edx
0831d732 +0x04eb:  mov    %edx,0x4(%esp)
0831d736 +0x04ef:  mov    %eax,(%esp)
0831d739 +0x04f2:  call   0831d868 <+0x621>
0831d73e +0x04f7:  sub    $0x4,%esp
0831d741 +0x04fa:  mov    0xc(%ebp),%eax
0831d744 +0x04fd:  mov    %eax,0x8(%esp)
0831d748 +0x0501:  mov    -0xc(%ebp),%eax
0831d74b +0x0504:  mov    %eax,0x4(%esp)
0831d74f +0x0508:  mov    0x8(%ebp),%eax
0831d752 +0x050b:  mov    %eax,(%esp)
0831d755 +0x050e:  call   0831db4a <+0x903>
0831d75a +0x0513:  leave
0831d75b +0x0514:  ret
0831d75c +0x0515:  push   %ebp
0831d75d +0x0516:  mov    %esp,%ebp
0831d75f +0x0518:  push   %edi
0831d760 +0x0519:  push   %esi
0831d761 +0x051a:  push   %ebx
0831d762 +0x051b:  sub    $0x1c,%esp
0831d765 +0x051e:  mov    0x8(%ebp),%ebx
0831d768 +0x0521:  mov    %ebx,%edi
0831d76a +0x0523:  mov    0x10(%ebp),%eax
0831d76d +0x0526:  mov    %eax,(%esp)
0831d770 +0x0529:  call   0831db89 <+0x942>
0831d775 +0x052e:  mov    %eax,%esi
0831d777 +0x0530:  mov    0xc(%ebp),%eax
0831d77a +0x0533:  mov    %eax,(%esp)
0831d77d +0x0536:  call   0831db81 <+0x93a>
0831d782 +0x053b:  mov    %esi,0x8(%esp)
0831d786 +0x053f:  mov    %eax,0x4(%esp)
0831d78a +0x0543:  mov    %edi,(%esp)
0831d78d +0x0546:  call   0831db92 <+0x94b>
0831d792 +0x054b:  mov    %ebx,%eax
0831d794 +0x054d:  mov    %ebx,%eax
0831d796 +0x054f:  add    $0x1c,%esp
0831d799 +0x0552:  pop    %ebx
0831d79a +0x0553:  pop    %esi
0831d79b +0x0554:  pop    %edi
0831d79c +0x0555:  pop    %ebp
0831d79d +0x0556:  ret    $0x4
0831d7a0 +0x0559:  push   %ebp
0831d7a1 +0x055a:  mov    %esp,%ebp
0831d7a3 +0x055c:  sub    $0x18,%esp
0831d7a6 +0x055f:  mov    0xc(%ebp),%edx
0831d7a9 +0x0562:  mov    0x8(%ebp),%eax
0831d7ac +0x0565:  mov    %edx,0x4(%esp)
0831d7b0 +0x0569:  mov    %eax,(%esp)
0831d7b3 +0x056c:  call   0831dbe2 <+0x99b>
0831d7b8 +0x0571:  leave
0831d7b9 +0x0572:  ret
0831d7ba +0x0573:  push   %ebp
0831d7bb +0x0574:  mov    %esp,%ebp
0831d7bd +0x0576:  push   %ebx
0831d7be +0x0577:  sub    $0x14,%esp
0831d7c1 +0x057a:  mov    0x8(%ebp),%ebx
0831d7c4 +0x057d:  mov    0xc(%ebp),%eax
0831d7c7 +0x0580:  mov    %eax,(%esp)
0831d7ca +0x0583:  call   0831dbd2 <+0x98b>
0831d7cf +0x0588:  movzwl (%eax),%edx
0831d7d2 +0x058b:  mov    %dx,(%ebx)
0831d7d5 +0x058e:  movzbl 0x2(%eax),%eax
0831d7d9 +0x0592:  mov    %al,0x2(%ebx)
0831d7dc +0x0595:  mov    0xc(%ebp),%eax
0831d7df +0x0598:  add    $0x4,%eax
0831d7e2 +0x059b:  mov    %eax,(%esp)
0831d7e5 +0x059e:  call   0831dbda <+0x993>
0831d7ea +0x05a3:  mov    0x8(%ebp),%edx
0831d7ed +0x05a6:  add    $0x4,%edx
0831d7f0 +0x05a9:  mov    %eax,0x4(%esp)
0831d7f4 +0x05ad:  mov    %edx,(%esp)
0831d7f7 +0x05b0:  call   0831d7a0 <+0x559>
0831d7fc +0x05b5:  add    $0x14,%esp
0831d7ff +0x05b8:  pop    %ebx
0831d800 +0x05b9:  pop    %ebp
0831d801 +0x05ba:  ret
0831d802 +0x05bb:  push   %ebp
0831d803 +0x05bc:  mov    %esp,%ebp
0831d805 +0x05be:  push   %ebx
0831d806 +0x05bf:  sub    $0x14,%esp
0831d809 +0x05c2:  mov    0x8(%ebp),%ebx
0831d80c +0x05c5:  mov    0xc(%ebp),%eax
0831d80f +0x05c8:  mov    0x10(%ebp),%edx
0831d812 +0x05cb:  mov    %edx,0x8(%esp)
0831d816 +0x05cf:  mov    %eax,0x4(%esp)
0831d81a +0x05d3:  mov    %ebx,(%esp)
0831d81d +0x05d6:  call   0831dcac <+0xa65>
0831d822 +0x05db:  sub    $0x4,%esp
0831d825 +0x05de:  mov    %ebx,%eax
0831d827 +0x05e0:  mov    -0x4(%ebp),%ebx
0831d82a +0x05e3:  leave
0831d82b +0x05e4:  ret    $0x4
0831d82e +0x05e7:  push   %ebp
0831d82f +0x05e8:  mov    %esp,%ebp
0831d831 +0x05ea:  mov    0x8(%ebp),%eax
0831d834 +0x05ed:  mov    (%eax),%edx
0831d836 +0x05ef:  mov    0xc(%ebp),%eax
0831d839 +0x05f2:  mov    (%eax),%eax
0831d83b +0x05f4:  cmp    %eax,%edx
0831d83d +0x05f6:  sete   %al
0831d840 +0x05f9:  pop    %ebp
0831d841 +0x05fa:  ret
0831d842 +0x05fb:  push   %ebp
0831d843 +0x05fc:  mov    %esp,%ebp
0831d845 +0x05fe:  push   %ebx
0831d846 +0x05ff:  sub    $0x14,%esp
0831d849 +0x0602:  mov    0x8(%ebp),%ebx
0831d84c +0x0605:  mov    0xc(%ebp),%eax
0831d84f +0x0608:  mov    (%eax),%eax
0831d851 +0x060a:  mov    %eax,0x4(%esp)
0831d855 +0x060e:  mov    %ebx,(%esp)
0831d858 +0x0611:  call   0831de7c <+0xc35>
0831d85d +0x0616:  mov    %ebx,%eax
0831d85f +0x0618:  add    $0x14,%esp
0831d862 +0x061b:  pop    %ebx
0831d863 +0x061c:  pop    %ebp
0831d864 +0x061d:  ret    $0x4
0831d867 +0x0620:  nop
0831d868 +0x0621:  push   %ebp
0831d869 +0x0622:  mov    %esp,%ebp
0831d86b +0x0624:  push   %ebx
0831d86c +0x0625:  sub    $0x14,%esp
0831d86f +0x0628:  mov    0x8(%ebp),%ebx
0831d872 +0x062b:  mov    0xc(%ebp),%eax
0831d875 +0x062e:  mov    %eax,0x4(%esp)
0831d879 +0x0632:  mov    %ebx,(%esp)
0831d87c +0x0635:  call   0831de7c <+0xc35>
0831d881 +0x063a:  mov    %ebx,%eax
0831d883 +0x063c:  add    $0x14,%esp
0831d886 +0x063f:  pop    %ebx
0831d887 +0x0640:  pop    %ebp
0831d888 +0x0641:  ret    $0x4
0831d88b +0x0644:  nop
0831d88c +0x0645:  push   %ebp
0831d88d +0x0646:  mov    %esp,%ebp
0831d88f +0x0648:  mov    0x8(%ebp),%eax
0831d892 +0x064b:  mov    (%eax),%edx
0831d894 +0x064d:  mov    0xc(%ebp),%eax
0831d897 +0x0650:  mov    (%eax),%eax
0831d899 +0x0652:  cmp    %eax,%edx
0831d89b +0x0654:  setne  %al
0831d89e +0x0657:  pop    %ebp
0831d89f +0x0658:  ret
0831d8a0 +0x0659:  push   %ebp
0831d8a1 +0x065a:  mov    %esp,%ebp
0831d8a3 +0x065c:  mov    0x8(%ebp),%eax
0831d8a6 +0x065f:  mov    (%eax),%eax
0831d8a8 +0x0661:  mov    (%eax),%edx
0831d8aa +0x0663:  mov    0x8(%ebp),%eax
0831d8ad +0x0666:  mov    %edx,(%eax)
0831d8af +0x0668:  mov    0x8(%ebp),%eax
0831d8b2 +0x066b:  pop    %ebp
0831d8b3 +0x066c:  ret
0831d8b4 +0x066d:  push   %ebp
0831d8b5 +0x066e:  mov    %esp,%ebp
0831d8b7 +0x0670:  mov    0x8(%ebp),%eax
0831d8ba +0x0673:  mov    (%eax),%eax
0831d8bc +0x0675:  add    $0x8,%eax
0831d8bf +0x0678:  pop    %ebp
0831d8c0 +0x0679:  ret
0831d8c1 +0x067a:  nop
0831d8c2 +0x067b:  push   %ebp
0831d8c3 +0x067c:  mov    %esp,%ebp
0831d8c5 +0x067e:  sub    $0x18,%esp
0831d8c8 +0x0681:  mov    0x8(%ebp),%eax
0831d8cb +0x0684:  mov    %eax,(%esp)
0831d8ce +0x0687:  call   0831de8a <+0xc43>
0831d8d3 +0x068c:  mov    0x8(%ebp),%eax
0831d8d6 +0x068f:  mov    %eax,(%esp)
0831d8d9 +0x0692:  call   0831d950 <+0x709>
0831d8de +0x0697:  leave
0831d8df +0x0698:  ret
0831d8e0 +0x0699:  push   %ebp
0831d8e1 +0x069a:  mov    %esp,%ebp
0831d8e3 +0x069c:  sub    $0x18,%esp
0831d8e6 +0x069f:  mov    0x8(%ebp),%eax
0831d8e9 +0x06a2:  mov    %eax,(%esp)
0831d8ec +0x06a5:  call   0831deb0 <+0xc69>
0831d8f1 +0x06aa:  leave
0831d8f2 +0x06ab:  ret
0831d8f3 +0x06ac:  nop
0831d8f4 +0x06ad:  push   %ebp
0831d8f5 +0x06ae:  mov    %esp,%ebp
0831d8f7 +0x06b0:  sub    $0x28,%esp
0831d8fa +0x06b3:  mov    0x8(%ebp),%eax
0831d8fd +0x06b6:  mov    (%eax),%eax
0831d8ff +0x06b8:  mov    %eax,-0x10(%ebp)
0831d902 +0x06bb:  jmp    0831d93e <+0x6f7>
0831d904 +0x06bd:  mov    -0x10(%ebp),%eax
0831d907 +0x06c0:  mov    %eax,-0xc(%ebp)
0831d90a +0x06c3:  mov    -0x10(%ebp),%eax
0831d90d +0x06c6:  mov    (%eax),%eax
0831d90f +0x06c8:  mov    %eax,-0x10(%ebp)
0831d912 +0x06cb:  mov    0x8(%ebp),%eax
0831d915 +0x06ce:  mov    %eax,(%esp)
0831d918 +0x06d1:  call   0831deb6 <+0xc6f>
0831d91d +0x06d6:  mov    -0xc(%ebp),%edx
0831d920 +0x06d9:  mov    %edx,0x4(%esp)
0831d924 +0x06dd:  mov    %eax,(%esp)
0831d927 +0x06e0:  call   0831dec4 <+0xc7d>
0831d92c +0x06e5:  mov    -0xc(%ebp),%eax
0831d92f +0x06e8:  mov    %eax,0x4(%esp)
0831d933 +0x06ec:  mov    0x8(%ebp),%eax
0831d936 +0x06ef:  mov    %eax,(%esp)
0831d939 +0x06f2:  call   0831ded8 <+0xc91>
0831d93e +0x06f7:  mov    0x8(%ebp),%edx
0831d941 +0x06fa:  mov    -0x10(%ebp),%eax
0831d944 +0x06fd:  cmp    %eax,%edx
0831d946 +0x06ff:  setne  %al
0831d949 +0x0702:  test   %al,%al
0831d94b +0x0704:  jne    0831d904 <+0x6bd>
0831d94d +0x0706:  leave
0831d94e +0x0707:  ret
0831d94f +0x0708:  nop
0831d950 +0x0709:  push   %ebp
0831d951 +0x070a:  mov    %esp,%ebp
0831d953 +0x070c:  mov    0x8(%ebp),%edx
0831d956 +0x070f:  mov    0x8(%ebp),%eax
0831d959 +0x0712:  mov    %edx,(%eax)
0831d95b +0x0714:  mov    0x8(%ebp),%edx
0831d95e +0x0717:  mov    0x8(%ebp),%eax
0831d961 +0x071a:  mov    %edx,0x4(%eax)
0831d964 +0x071d:  pop    %ebp
0831d965 +0x071e:  ret
0831d966 +0x071f:  push   %ebp
0831d967 +0x0720:  mov    %esp,%ebp
0831d969 +0x0722:  sub    $0x18,%esp
0831d96c +0x0725:  mov    0x8(%ebp),%eax
0831d96f +0x0728:  mov    %eax,(%esp)
0831d972 +0x072b:  call   0831defa <+0xcb3>
0831d977 +0x0730:  leave
0831d978 +0x0731:  ret
0831d979 +0x0732:  nop
0831d97a +0x0733:  push   %ebp
0831d97b +0x0734:  mov    %esp,%ebp
0831d97d +0x0736:  sub    $0x18,%esp
0831d980 +0x0739:  mov    0x8(%ebp),%eax
0831d983 +0x073c:  mov    %eax,(%esp)
0831d986 +0x073f:  call   0831df4a <+0xd03>
0831d98b +0x0744:  leave
0831d98c +0x0745:  ret
0831d98d +0x0746:  nop
0831d98e +0x0747:  push   %ebp
0831d98f +0x0748:  mov    %esp,%ebp
0831d991 +0x074a:  sub    $0x28,%esp
0831d994 +0x074d:  jmp    0831d9d6 <+0x78f>
0831d996 +0x074f:  mov    0xc(%ebp),%eax
0831d999 +0x0752:  mov    %eax,(%esp)
0831d99c +0x0755:  call   0831df4f <+0xd08>
0831d9a1 +0x075a:  mov    %eax,0x4(%esp)
0831d9a5 +0x075e:  mov    0x8(%ebp),%eax
0831d9a8 +0x0761:  mov    %eax,(%esp)
0831d9ab +0x0764:  call   0831d98e <+0x747>
0831d9b0 +0x0769:  mov    0xc(%ebp),%eax
0831d9b3 +0x076c:  mov    %eax,(%esp)
0831d9b6 +0x076f:  call   0831df5a <+0xd13>
0831d9bb +0x0774:  mov    %eax,-0xc(%ebp)
0831d9be +0x0777:  mov    0xc(%ebp),%eax
0831d9c1 +0x077a:  mov    %eax,0x4(%esp)
0831d9c5 +0x077e:  mov    0x8(%ebp),%eax
0831d9c8 +0x0781:  mov    %eax,(%esp)
0831d9cb +0x0784:  call   0831df66 <+0xd1f>
0831d9d0 +0x0789:  mov    -0xc(%ebp),%eax
0831d9d3 +0x078c:  mov    %eax,0xc(%ebp)
0831d9d6 +0x078f:  cmpl   $0x0,0xc(%ebp)
0831d9da +0x0793:  setne  %al
0831d9dd +0x0796:  test   %al,%al
0831d9df +0x0798:  jne    0831d996 <+0x74f>
0831d9e1 +0x079a:  leave
0831d9e2 +0x079b:  ret
0831d9e3 +0x079c:  nop
0831d9e4 +0x079d:  push   %ebp
0831d9e5 +0x079e:  mov    %esp,%ebp
0831d9e7 +0x07a0:  mov    0x8(%ebp),%eax
0831d9ea +0x07a3:  mov    0x8(%eax),%eax
0831d9ed +0x07a6:  pop    %ebp
0831d9ee +0x07a7:  ret
0831d9ef +0x07a8:  nop
0831d9f0 +0x07a9:  push   %ebp
0831d9f1 +0x07aa:  mov    %esp,%ebp
0831d9f3 +0x07ac:  push   %ebx
0831d9f4 +0x07ad:  sub    $0x14,%esp
0831d9f7 +0x07b0:  mov    0x8(%ebp),%eax
0831d9fa +0x07b3:  mov    %eax,(%esp)
0831d9fd +0x07b6:  call   0831d9e4 <+0x79d>
0831da02 +0x07bb:  mov    %eax,0x4(%esp)
0831da06 +0x07bf:  mov    0x8(%ebp),%eax
0831da09 +0x07c2:  mov    %eax,(%esp)
0831da0c +0x07c5:  call   0831d98e <+0x747>
0831da11 +0x07ca:  mov    0x8(%ebp),%eax
0831da14 +0x07cd:  mov    %eax,(%esp)
0831da17 +0x07d0:  call   0831dfa6 <+0xd5f>
0831da1c +0x07d5:  mov    %eax,%ebx
0831da1e +0x07d7:  mov    0x8(%ebp),%eax
0831da21 +0x07da:  mov    %eax,(%esp)
0831da24 +0x07dd:  call   0831df9a <+0xd53>
0831da29 +0x07e2:  mov    %eax,(%ebx)
0831da2b +0x07e4:  mov    0x8(%ebp),%eax
0831da2e +0x07e7:  mov    %eax,(%esp)
0831da31 +0x07ea:  call   0831dfb2 <+0xd6b>
0831da36 +0x07ef:  movl   $0x0,(%eax)
0831da3c +0x07f5:  mov    0x8(%ebp),%eax
0831da3f +0x07f8:  mov    %eax,(%esp)
0831da42 +0x07fb:  call   0831dfbe <+0xd77>
0831da47 +0x0800:  mov    %eax,%ebx
0831da49 +0x0802:  mov    0x8(%ebp),%eax
0831da4c +0x0805:  mov    %eax,(%esp)
0831da4f +0x0808:  call   0831df9a <+0xd53>
0831da54 +0x080d:  mov    %eax,(%ebx)
0831da56 +0x080f:  mov    0x8(%ebp),%eax
0831da59 +0x0812:  movl   $0x0,0x14(%eax)
0831da60 +0x0819:  add    $0x14,%esp
0831da63 +0x081c:  pop    %ebx
0831da64 +0x081d:  pop    %ebp
0831da65 +0x081e:  ret
0831da66 +0x081f:  push   %ebp
0831da67 +0x0820:  mov    %esp,%ebp
0831da69 +0x0822:  push   %esi
0831da6a +0x0823:  push   %ebx
0831da6b +0x0824:  sub    $0x30,%esp
0831da6e +0x0827:  mov    0x8(%ebp),%ebx
0831da71 +0x082a:  mov    0xc(%ebp),%eax
0831da74 +0x082d:  mov    %eax,(%esp)
0831da77 +0x0830:  call   0831df9a <+0xd53>
0831da7c +0x0835:  mov    %eax,%esi
0831da7e +0x0837:  mov    0xc(%ebp),%eax
0831da81 +0x083a:  mov    %eax,(%esp)
0831da84 +0x083d:  call   0831d9e4 <+0x79d>
0831da89 +0x0842:  lea    -0x10(%ebp),%edx
0831da8c +0x0845:  mov    0x10(%ebp),%ecx
0831da8f +0x0848:  mov    %ecx,0x10(%esp)
0831da93 +0x084c:  mov    %esi,0xc(%esp)
0831da97 +0x0850:  mov    %eax,0x8(%esp)
0831da9b +0x0854:  mov    0xc(%ebp),%eax
0831da9e +0x0857:  mov    %eax,0x4(%esp)
0831daa2 +0x085b:  mov    %edx,(%esp)
0831daa5 +0x085e:  call   0831dfca <+0xd83>
0831daaa +0x0863:  sub    $0x4,%esp
0831daad +0x0866:  lea    -0xc(%ebp),%eax
0831dab0 +0x0869:  mov    0xc(%ebp),%edx
0831dab3 +0x086c:  mov    %edx,0x4(%esp)
0831dab7 +0x0870:  mov    %eax,(%esp)
0831daba +0x0873:  call   0831db24 <+0x8dd>
0831dabf +0x0878:  sub    $0x4,%esp
0831dac2 +0x087b:  lea    -0xc(%ebp),%eax
0831dac5 +0x087e:  mov    %eax,0x4(%esp)
0831dac9 +0x0882:  lea    -0x10(%ebp),%eax
0831dacc +0x0885:  mov    %eax,(%esp)
0831dacf +0x0888:  call   0831d82e <+0x5e7>
0831dad4 +0x088d:  test   %al,%al
0831dad6 +0x088f:  jne    0831dafd <+0x8b6>
0831dad8 +0x0891:  mov    -0x10(%ebp),%eax
0831dadb +0x0894:  mov    %eax,(%esp)
0831dade +0x0897:  call   0831e046 <+0xdff>
0831dae3 +0x089c:  mov    0xc(%ebp),%edx
0831dae6 +0x089f:  mov    %eax,0x8(%esp)
0831daea +0x08a3:  mov    0x10(%ebp),%eax
0831daed +0x08a6:  mov    %eax,0x4(%esp)
0831daf1 +0x08aa:  mov    %edx,(%esp)
0831daf4 +0x08ad:  call   0831e068 <+0xe21>
0831daf9 +0x08b2:  test   %al,%al
0831dafb +0x08b4:  je     0831db11 <+0x8ca>
0831dafd +0x08b6:  mov    0xc(%ebp),%eax
0831db00 +0x08b9:  mov    %eax,0x4(%esp)
0831db04 +0x08bd:  mov    %ebx,(%esp)
0831db07 +0x08c0:  call   0831db24 <+0x8dd>
0831db0c +0x08c5:  sub    $0x4,%esp
0831db0f +0x08c8:  jmp    0831db16 <+0x8cf>
0831db11 +0x08ca:  mov    -0x10(%ebp),%eax
0831db14 +0x08cd:  mov    %eax,(%ebx)
0831db16 +0x08cf:  mov    %ebx,%eax
0831db18 +0x08d1:  lea    -0x8(%ebp),%esp
0831db1b +0x08d4:  add    $0x0,%esp
0831db1e +0x08d7:  pop    %ebx
0831db1f +0x08d8:  pop    %esi
0831db20 +0x08d9:  pop    %ebp
0831db21 +0x08da:  ret    $0x4
0831db24 +0x08dd:  push   %ebp
0831db25 +0x08de:  mov    %esp,%ebp
0831db27 +0x08e0:  push   %ebx
0831db28 +0x08e1:  sub    $0x14,%esp
0831db2b +0x08e4:  mov    0x8(%ebp),%ebx
0831db2e +0x08e7:  mov    0xc(%ebp),%eax
0831db31 +0x08ea:  add    $0x4,%eax
0831db34 +0x08ed:  mov    %eax,0x4(%esp)
0831db38 +0x08f1:  mov    %ebx,(%esp)
0831db3b +0x08f4:  call   0831e082 <+0xe3b>
0831db40 +0x08f9:  mov    %ebx,%eax
0831db42 +0x08fb:  add    $0x14,%esp
0831db45 +0x08fe:  pop    %ebx
0831db46 +0x08ff:  pop    %ebp
0831db47 +0x0900:  ret    $0x4
0831db4a +0x0903:  push   %ebp
0831db4b +0x0904:  mov    %esp,%ebp
0831db4d +0x0906:  sub    $0x28,%esp
0831db50 +0x0909:  mov    0x10(%ebp),%eax
0831db53 +0x090c:  mov    %eax,(%esp)
0831db56 +0x090f:  call   0831e08f <+0xe48>
0831db5b +0x0914:  mov    %eax,0x4(%esp)
0831db5f +0x0918:  mov    0x8(%ebp),%eax
0831db62 +0x091b:  mov    %eax,(%esp)
0831db65 +0x091e:  call   0831e098 <+0xe51>
0831db6a +0x0923:  mov    %eax,-0xc(%ebp)
0831db6d +0x0926:  mov    0xc(%ebp),%edx
0831db70 +0x0929:  mov    -0xc(%ebp),%eax
0831db73 +0x092c:  mov    %edx,0x4(%esp)
0831db77 +0x0930:  mov    %eax,(%esp)
0831db7a +0x0933:  call   086dad20 <_ZNSt15_List_node_base4hookEPS_>  ; std::_List_node_base::hook(std::_List_node_base*)
0831db7f +0x0938:  leave
0831db80 +0x0939:  ret
0831db81 +0x093a:  push   %ebp
0831db82 +0x093b:  mov    %esp,%ebp
0831db84 +0x093d:  mov    0x8(%ebp),%eax
0831db87 +0x0940:  pop    %ebp
0831db88 +0x0941:  ret
0831db89 +0x0942:  push   %ebp
0831db8a +0x0943:  mov    %esp,%ebp
0831db8c +0x0945:  mov    0x8(%ebp),%eax
0831db8f +0x0948:  pop    %ebp
0831db90 +0x0949:  ret
0831db91 +0x094a:  nop
0831db92 +0x094b:  push   %ebp
0831db93 +0x094c:  mov    %esp,%ebp
0831db95 +0x094e:  sub    $0x18,%esp
0831db98 +0x0951:  mov    0xc(%ebp),%eax
0831db9b +0x0954:  mov    %eax,(%esp)
0831db9e +0x0957:  call   0831db81 <+0x93a>
0831dba3 +0x095c:  mov    0x8(%ebp),%edx
0831dba6 +0x095f:  movzwl (%eax),%ecx
0831dba9 +0x0962:  mov    %cx,(%edx)
0831dbac +0x0965:  movzbl 0x2(%eax),%eax
0831dbb0 +0x0969:  mov    %al,0x2(%edx)
0831dbb3 +0x096c:  mov    0x10(%ebp),%eax
0831dbb6 +0x096f:  mov    %eax,(%esp)
0831dbb9 +0x0972:  call   0831db89 <+0x942>
0831dbbe +0x0977:  mov    0x8(%ebp),%edx
0831dbc1 +0x097a:  add    $0x4,%edx
0831dbc4 +0x097d:  mov    %eax,0x4(%esp)
0831dbc8 +0x0981:  mov    %edx,(%esp)
0831dbcb +0x0984:  call   0831d7a0 <+0x559>
0831dbd0 +0x0989:  leave
0831dbd1 +0x098a:  ret
0831dbd2 +0x098b:  push   %ebp
0831dbd3 +0x098c:  mov    %esp,%ebp
0831dbd5 +0x098e:  mov    0x8(%ebp),%eax
0831dbd8 +0x0991:  pop    %ebp
0831dbd9 +0x0992:  ret
0831dbda +0x0993:  push   %ebp
0831dbdb +0x0994:  mov    %esp,%ebp
0831dbdd +0x0996:  mov    0x8(%ebp),%eax
0831dbe0 +0x0999:  pop    %ebp
0831dbe1 +0x099a:  ret
0831dbe2 +0x099b:  push   %ebp
0831dbe3 +0x099c:  mov    %esp,%ebp
0831dbe5 +0x099e:  push   %esi
0831dbe6 +0x099f:  push   %ebx
0831dbe7 +0x09a0:  sub    $0x20,%esp
0831dbea +0x09a3:  mov    0xc(%ebp),%eax
0831dbed +0x09a6:  mov    %eax,(%esp)
0831dbf0 +0x09a9:  call   0831e11a <+0xed3>
0831dbf5 +0x09ae:  mov    %eax,0x4(%esp)
0831dbf9 +0x09b2:  lea    -0x11(%ebp),%eax
0831dbfc +0x09b5:  mov    %eax,(%esp)
0831dbff +0x09b8:  call   0831e122 <+0xedb>
0831dc04 +0x09bd:  mov    0x8(%ebp),%eax
0831dc07 +0x09c0:  lea    -0x11(%ebp),%edx
0831dc0a +0x09c3:  mov    %edx,0x4(%esp)
0831dc0e +0x09c7:  mov    %eax,(%esp)
0831dc11 +0x09ca:  call   0831e14a <+0xf03>
0831dc16 +0x09cf:  jmp    0831dc33 <+0x9ec>
0831dc18 +0x09d1:  mov    %edx,%ebx
0831dc1a +0x09d3:  mov    %eax,%esi
0831dc1c +0x09d5:  lea    -0x11(%ebp),%eax
0831dc1f +0x09d8:  mov    %eax,(%esp)
0831dc22 +0x09db:  call   0831e136 <+0xeef>
0831dc27 +0x09e0:  mov    %esi,%eax
0831dc29 +0x09e2:  mov    %ebx,%edx
0831dc2b +0x09e4:  mov    %eax,(%esp)
0831dc2e +0x09e7:  call   08ae3750 <_Unwind_Resume>
0831dc33 +0x09ec:  lea    -0x11(%ebp),%eax
0831dc36 +0x09ef:  mov    %eax,(%esp)
0831dc39 +0x09f2:  call   0831e136 <+0xeef>
0831dc3e +0x09f7:  lea    -0x10(%ebp),%eax
0831dc41 +0x09fa:  mov    0xc(%ebp),%edx
0831dc44 +0x09fd:  mov    %edx,0x4(%esp)
0831dc48 +0x0a01:  mov    %eax,(%esp)
0831dc4b +0x0a04:  call   0831e1b2 <+0xf6b>
0831dc50 +0x0a09:  sub    $0x4,%esp
0831dc53 +0x0a0c:  lea    -0xc(%ebp),%eax
0831dc56 +0x0a0f:  mov    0xc(%ebp),%edx
0831dc59 +0x0a12:  mov    %edx,0x4(%esp)
0831dc5d +0x0a16:  mov    %eax,(%esp)
0831dc60 +0x0a19:  call   0831e18c <+0xf45>
0831dc65 +0x0a1e:  sub    $0x4,%esp
0831dc68 +0x0a21:  mov    %bl,0xc(%esp)
0831dc6c +0x0a25:  mov    -0x10(%ebp),%eax
0831dc6f +0x0a28:  mov    %eax,0x8(%esp)
0831dc73 +0x0a2c:  mov    -0xc(%ebp),%eax
0831dc76 +0x0a2f:  mov    %eax,0x4(%esp)
0831dc7a +0x0a33:  mov    0x8(%ebp),%eax
0831dc7d +0x0a36:  mov    %eax,(%esp)
0831dc80 +0x0a39:  call   0831e1d6 <+0xf8f>
0831dc85 +0x0a3e:  jmp    0831dca2 <+0xa5b>
0831dc87 +0x0a40:  mov    %edx,%ebx
0831dc89 +0x0a42:  mov    %eax,%esi
0831dc8b +0x0a44:  mov    0x8(%ebp),%eax
0831dc8e +0x0a47:  mov    %eax,(%esp)
0831dc91 +0x0a4a:  call   0831d5c4 <+0x37d>
0831dc96 +0x0a4f:  mov    %esi,%eax
0831dc98 +0x0a51:  mov    %ebx,%edx
0831dc9a +0x0a53:  mov    %eax,(%esp)
0831dc9d +0x0a56:  call   08ae3750 <_Unwind_Resume>
0831dca2 +0x0a5b:  lea    -0x8(%ebp),%esp
0831dca5 +0x0a5e:  add    $0x0,%esp
0831dca8 +0x0a61:  pop    %ebx
0831dca9 +0x0a62:  pop    %esi
0831dcaa +0x0a63:  pop    %ebp
0831dcab +0x0a64:  ret
0831dcac +0x0a65:  push   %ebp
0831dcad +0x0a66:  mov    %esp,%ebp
0831dcaf +0x0a68:  push   %esi
0831dcb0 +0x0a69:  push   %ebx
0831dcb1 +0x0a6a:  sub    $0x50,%esp
0831dcb4 +0x0a6d:  mov    0x8(%ebp),%ebx
0831dcb7 +0x0a70:  mov    0xc(%ebp),%eax
0831dcba +0x0a73:  mov    %eax,(%esp)
0831dcbd +0x0a76:  call   0831d9e4 <+0x79d>
0831dcc2 +0x0a7b:  mov    %eax,-0x14(%ebp)
0831dcc5 +0x0a7e:  mov    0xc(%ebp),%eax
0831dcc8 +0x0a81:  mov    %eax,(%esp)
0831dccb +0x0a84:  call   0831df9a <+0xd53>
0831dcd0 +0x0a89:  mov    %eax,-0x10(%ebp)
0831dcd3 +0x0a8c:  movb   $0x1,-0x9(%ebp)
0831dcd7 +0x0a90:  jmp    0831dd35 <+0xaee>
0831dcd9 +0x0a92:  mov    -0x14(%ebp),%eax
0831dcdc +0x0a95:  mov    %eax,-0x10(%ebp)
0831dcdf +0x0a98:  mov    -0x14(%ebp),%eax
0831dce2 +0x0a9b:  mov    %eax,(%esp)
0831dce5 +0x0a9e:  call   0831e224 <+0xfdd>
0831dcea +0x0aa3:  mov    %eax,%esi
0831dcec +0x0aa5:  mov    0x10(%ebp),%eax
0831dcef +0x0aa8:  mov    %eax,0x4(%esp)
0831dcf3 +0x0aac:  lea    -0x2d(%ebp),%eax
0831dcf6 +0x0aaf:  mov    %eax,(%esp)
0831dcf9 +0x0ab2:  call   0831e21c <+0xfd5>
0831dcfe +0x0ab7:  mov    0xc(%ebp),%edx
0831dd01 +0x0aba:  mov    %esi,0x8(%esp)
0831dd05 +0x0abe:  mov    %eax,0x4(%esp)
0831dd09 +0x0ac2:  mov    %edx,(%esp)
0831dd0c +0x0ac5:  call   0831e068 <+0xe21>
0831dd11 +0x0aca:  mov    %al,-0x9(%ebp)
0831dd14 +0x0acd:  cmpb   $0x0,-0x9(%ebp)
0831dd18 +0x0ad1:  je     0831dd27 <+0xae0>
0831dd1a +0x0ad3:  mov    -0x14(%ebp),%eax
0831dd1d +0x0ad6:  mov    %eax,(%esp)
0831dd20 +0x0ad9:  call   0831df5a <+0xd13>
0831dd25 +0x0ade:  jmp    0831dd32 <+0xaeb>
0831dd27 +0x0ae0:  mov    -0x14(%ebp),%eax
0831dd2a +0x0ae3:  mov    %eax,(%esp)
0831dd2d +0x0ae6:  call   0831df4f <+0xd08>
0831dd32 +0x0aeb:  mov    %eax,-0x14(%ebp)
0831dd35 +0x0aee:  cmpl   $0x0,-0x14(%ebp)
0831dd39 +0x0af2:  setne  %al
0831dd3c +0x0af5:  test   %al,%al
0831dd3e +0x0af7:  jne    0831dcd9 <+0xa92>
0831dd40 +0x0af9:  mov    -0x10(%ebp),%eax
0831dd43 +0x0afc:  mov    %eax,0x4(%esp)
0831dd47 +0x0b00:  lea    -0x34(%ebp),%eax
0831dd4a +0x0b03:  mov    %eax,(%esp)
0831dd4d +0x0b06:  call   0831e082 <+0xe3b>
0831dd52 +0x0b0b:  cmpb   $0x0,-0x9(%ebp)
0831dd56 +0x0b0f:  je     0831ddd7 <+0xb90>
0831dd58 +0x0b11:  lea    -0x2c(%ebp),%eax
0831dd5b +0x0b14:  mov    0xc(%ebp),%edx
0831dd5e +0x0b17:  mov    %edx,0x4(%esp)
0831dd62 +0x0b1b:  mov    %eax,(%esp)
0831dd65 +0x0b1e:  call   0831e246 <+0xfff>
0831dd6a +0x0b23:  sub    $0x4,%esp
0831dd6d +0x0b26:  lea    -0x2c(%ebp),%eax
0831dd70 +0x0b29:  mov    %eax,0x4(%esp)
0831dd74 +0x0b2d:  lea    -0x34(%ebp),%eax
0831dd77 +0x0b30:  mov    %eax,(%esp)
0831dd7a +0x0b33:  call   0831d82e <+0x5e7>
0831dd7f +0x0b38:  test   %al,%al
0831dd81 +0x0b3a:  je     0831ddcc <+0xb85>
0831dd83 +0x0b3c:  movb   $0x1,-0x25(%ebp)
0831dd87 +0x0b40:  mov    -0x10(%ebp),%ecx
0831dd8a +0x0b43:  mov    -0x14(%ebp),%edx
0831dd8d +0x0b46:  lea    -0x24(%ebp),%eax
0831dd90 +0x0b49:  mov    0x10(%ebp),%esi
0831dd93 +0x0b4c:  mov    %esi,0x10(%esp)
0831dd97 +0x0b50:  mov    %ecx,0xc(%esp)
0831dd9b +0x0b54:  mov    %edx,0x8(%esp)
0831dd9f +0x0b58:  mov    0xc(%ebp),%edx
0831dda2 +0x0b5b:  mov    %edx,0x4(%esp)
0831dda6 +0x0b5f:  mov    %eax,(%esp)
0831dda9 +0x0b62:  call   0831e26c <+0x1025>
0831ddae +0x0b67:  sub    $0x4,%esp
0831ddb1 +0x0b6a:  lea    -0x25(%ebp),%eax
0831ddb4 +0x0b6d:  mov    %eax,0x8(%esp)
0831ddb8 +0x0b71:  lea    -0x24(%ebp),%eax
0831ddbb +0x0b74:  mov    %eax,0x4(%esp)
0831ddbf +0x0b78:  mov    %ebx,(%esp)
0831ddc2 +0x0b7b:  call   0831e334 <+0x10ed>
0831ddc7 +0x0b80:  jmp    0831de6d <+0xc26>
0831ddcc +0x0b85:  lea    -0x34(%ebp),%eax
0831ddcf +0x0b88:  mov    %eax,(%esp)
0831ddd2 +0x0b8b:  call   0831e362 <+0x111b>
0831ddd7 +0x0b90:  mov    0x10(%ebp),%eax
0831ddda +0x0b93:  mov    %eax,0x4(%esp)
0831ddde +0x0b97:  lea    -0x1e(%ebp),%eax
0831dde1 +0x0b9a:  mov    %eax,(%esp)
0831dde4 +0x0b9d:  call   0831e21c <+0xfd5>
0831dde9 +0x0ba2:  mov    %eax,%esi
0831ddeb +0x0ba4:  mov    -0x34(%ebp),%eax
0831ddee +0x0ba7:  mov    %eax,(%esp)
0831ddf1 +0x0baa:  call   0831e046 <+0xdff>
0831ddf6 +0x0baf:  mov    0xc(%ebp),%edx
0831ddf9 +0x0bb2:  mov    %esi,0x8(%esp)
0831ddfd +0x0bb6:  mov    %eax,0x4(%esp)
0831de01 +0x0bba:  mov    %edx,(%esp)
0831de04 +0x0bbd:  call   0831e068 <+0xe21>
0831de09 +0x0bc2:  test   %al,%al
0831de0b +0x0bc4:  je     0831de53 <+0xc0c>
0831de0d +0x0bc6:  movb   $0x1,-0x1d(%ebp)
0831de11 +0x0bca:  mov    -0x10(%ebp),%ecx
0831de14 +0x0bcd:  mov    -0x14(%ebp),%edx
0831de17 +0x0bd0:  lea    -0x1c(%ebp),%eax
0831de1a +0x0bd3:  mov    0x10(%ebp),%esi
0831de1d +0x0bd6:  mov    %esi,0x10(%esp)
0831de21 +0x0bda:  mov    %ecx,0xc(%esp)
0831de25 +0x0bde:  mov    %edx,0x8(%esp)
0831de29 +0x0be2:  mov    0xc(%ebp),%edx
0831de2c +0x0be5:  mov    %edx,0x4(%esp)
0831de30 +0x0be9:  mov    %eax,(%esp)
0831de33 +0x0bec:  call   0831e26c <+0x1025>
0831de38 +0x0bf1:  sub    $0x4,%esp
0831de3b +0x0bf4:  lea    -0x1d(%ebp),%eax
0831de3e +0x0bf7:  mov    %eax,0x8(%esp)
0831de42 +0x0bfb:  lea    -0x1c(%ebp),%eax
0831de45 +0x0bfe:  mov    %eax,0x4(%esp)
0831de49 +0x0c02:  mov    %ebx,(%esp)
0831de4c +0x0c05:  call   0831e334 <+0x10ed>
0831de51 +0x0c0a:  jmp    0831de6d <+0xc26>
0831de53 +0x0c0c:  movb   $0x0,-0x15(%ebp)
0831de57 +0x0c10:  lea    -0x15(%ebp),%eax
0831de5a +0x0c13:  mov    %eax,0x8(%esp)
0831de5e +0x0c17:  lea    -0x34(%ebp),%eax
0831de61 +0x0c1a:  mov    %eax,0x4(%esp)
0831de65 +0x0c1e:  mov    %ebx,(%esp)
0831de68 +0x0c21:  call   0831e380 <+0x1139>
0831de6d +0x0c26:  mov    %ebx,%eax
0831de6f +0x0c28:  lea    -0x8(%ebp),%esp
0831de72 +0x0c2b:  add    $0x0,%esp
0831de75 +0x0c2e:  pop    %ebx
0831de76 +0x0c2f:  pop    %esi
0831de77 +0x0c30:  pop    %ebp
0831de78 +0x0c31:  ret    $0x4
0831de7b +0x0c34:  nop
0831de7c +0x0c35:  push   %ebp
0831de7d +0x0c36:  mov    %esp,%ebp
0831de7f +0x0c38:  mov    0x8(%ebp),%eax
0831de82 +0x0c3b:  mov    0xc(%ebp),%edx
0831de85 +0x0c3e:  mov    %edx,(%eax)
0831de87 +0x0c40:  pop    %ebp
0831de88 +0x0c41:  ret
0831de89 +0x0c42:  nop
0831de8a +0x0c43:  push   %ebp
0831de8b +0x0c44:  mov    %esp,%ebp
0831de8d +0x0c46:  sub    $0x18,%esp
0831de90 +0x0c49:  mov    0x8(%ebp),%eax
0831de93 +0x0c4c:  mov    %eax,(%esp)
0831de96 +0x0c4f:  call   0831e3ae <+0x1167>
0831de9b +0x0c54:  mov    0x8(%ebp),%eax
0831de9e +0x0c57:  movl   $0x0,(%eax)
0831dea4 +0x0c5d:  mov    0x8(%ebp),%eax
0831dea7 +0x0c60:  movl   $0x0,0x4(%eax)
0831deae +0x0c67:  leave
0831deaf +0x0c68:  ret
0831deb0 +0x0c69:  push   %ebp
0831deb1 +0x0c6a:  mov    %esp,%ebp
0831deb3 +0x0c6c:  pop    %ebp
0831deb4 +0x0c6d:  ret
0831deb5 +0x0c6e:  nop
0831deb6 +0x0c6f:  push   %ebp
0831deb7 +0x0c70:  mov    %esp,%ebp
0831deb9 +0x0c72:  mov    0x8(%ebp),%eax
0831debc +0x0c75:  pop    %ebp
0831debd +0x0c76:  ret
0831debe +0x0c77:  push   %ebp
0831debf +0x0c78:  mov    %esp,%ebp
0831dec1 +0x0c7a:  pop    %ebp
0831dec2 +0x0c7b:  ret
0831dec3 +0x0c7c:  nop
0831dec4 +0x0c7d:  push   %ebp
0831dec5 +0x0c7e:  mov    %esp,%ebp
0831dec7 +0x0c80:  sub    $0x18,%esp
0831deca +0x0c83:  mov    0xc(%ebp),%eax
0831decd +0x0c86:  mov    %eax,(%esp)
0831ded0 +0x0c89:  call   0831debe <+0xc77>
0831ded5 +0x0c8e:  leave
0831ded6 +0x0c8f:  ret
0831ded7 +0x0c90:  nop
0831ded8 +0x0c91:  push   %ebp
0831ded9 +0x0c92:  mov    %esp,%ebp
0831dedb +0x0c94:  sub    $0x18,%esp
0831dede +0x0c97:  mov    0x8(%ebp),%eax
0831dee1 +0x0c9a:  movl   $0x1,0x8(%esp)
0831dee9 +0x0ca2:  mov    0xc(%ebp),%edx
0831deec +0x0ca5:  mov    %edx,0x4(%esp)
0831def0 +0x0ca9:  mov    %eax,(%esp)
0831def3 +0x0cac:  call   0831e3c2 <+0x117b>
0831def8 +0x0cb1:  leave
0831def9 +0x0cb2:  ret
0831defa +0x0cb3:  push   %ebp
0831defb +0x0cb4:  mov    %esp,%ebp
0831defd +0x0cb6:  sub    $0x18,%esp
0831df00 +0x0cb9:  mov    0x8(%ebp),%eax
0831df03 +0x0cbc:  mov    %eax,(%esp)
0831df06 +0x0cbf:  call   0831e3d6 <+0x118f>
0831df0b +0x0cc4:  mov    0x8(%ebp),%eax
0831df0e +0x0cc7:  movl   $0x0,0x4(%eax)
0831df15 +0x0cce:  mov    0x8(%ebp),%eax
0831df18 +0x0cd1:  movl   $0x0,0x8(%eax)
0831df1f +0x0cd8:  mov    0x8(%ebp),%eax
0831df22 +0x0cdb:  movl   $0x0,0xc(%eax)
0831df29 +0x0ce2:  mov    0x8(%ebp),%eax
0831df2c +0x0ce5:  movl   $0x0,0x10(%eax)
0831df33 +0x0cec:  mov    0x8(%ebp),%eax
0831df36 +0x0cef:  movl   $0x0,0x14(%eax)
0831df3d +0x0cf6:  mov    0x8(%ebp),%eax
0831df40 +0x0cf9:  mov    %eax,(%esp)
0831df43 +0x0cfc:  call   0831e3ea <+0x11a3>
0831df48 +0x0d01:  leave
0831df49 +0x0d02:  ret
0831df4a +0x0d03:  push   %ebp
0831df4b +0x0d04:  mov    %esp,%ebp
0831df4d +0x0d06:  pop    %ebp
0831df4e +0x0d07:  ret
0831df4f +0x0d08:  push   %ebp
0831df50 +0x0d09:  mov    %esp,%ebp
0831df52 +0x0d0b:  mov    0x8(%ebp),%eax
0831df55 +0x0d0e:  mov    0xc(%eax),%eax
0831df58 +0x0d11:  pop    %ebp
0831df59 +0x0d12:  ret
0831df5a +0x0d13:  push   %ebp
0831df5b +0x0d14:  mov    %esp,%ebp
0831df5d +0x0d16:  mov    0x8(%ebp),%eax
0831df60 +0x0d19:  mov    0x8(%eax),%eax
0831df63 +0x0d1c:  pop    %ebp
0831df64 +0x0d1d:  ret
0831df65 +0x0d1e:  nop
0831df66 +0x0d1f:  push   %ebp
0831df67 +0x0d20:  mov    %esp,%ebp
0831df69 +0x0d22:  sub    $0x18,%esp
0831df6c +0x0d25:  mov    0x8(%ebp),%eax
0831df6f +0x0d28:  mov    %eax,(%esp)
0831df72 +0x0d2b:  call   0831e41c <+0x11d5>
0831df77 +0x0d30:  mov    0xc(%ebp),%edx
0831df7a +0x0d33:  mov    %edx,0x4(%esp)
0831df7e +0x0d37:  mov    %eax,(%esp)
0831df81 +0x0d3a:  call   0831e43a <+0x11f3>
0831df86 +0x0d3f:  mov    0xc(%ebp),%eax
0831df89 +0x0d42:  mov    %eax,0x4(%esp)
0831df8d +0x0d46:  mov    0x8(%ebp),%eax
0831df90 +0x0d49:  mov    %eax,(%esp)
0831df93 +0x0d4c:  call   0831e44e <+0x1207>
0831df98 +0x0d51:  leave
0831df99 +0x0d52:  ret
0831df9a +0x0d53:  push   %ebp
0831df9b +0x0d54:  mov    %esp,%ebp
0831df9d +0x0d56:  mov    0x8(%ebp),%eax
0831dfa0 +0x0d59:  add    $0x4,%eax
0831dfa3 +0x0d5c:  pop    %ebp
0831dfa4 +0x0d5d:  ret
0831dfa5 +0x0d5e:  nop
0831dfa6 +0x0d5f:  push   %ebp
0831dfa7 +0x0d60:  mov    %esp,%ebp
0831dfa9 +0x0d62:  mov    0x8(%ebp),%eax
0831dfac +0x0d65:  add    $0xc,%eax
0831dfaf +0x0d68:  pop    %ebp
0831dfb0 +0x0d69:  ret
0831dfb1 +0x0d6a:  nop
0831dfb2 +0x0d6b:  push   %ebp
0831dfb3 +0x0d6c:  mov    %esp,%ebp
0831dfb5 +0x0d6e:  mov    0x8(%ebp),%eax
0831dfb8 +0x0d71:  add    $0x8,%eax
0831dfbb +0x0d74:  pop    %ebp
0831dfbc +0x0d75:  ret
0831dfbd +0x0d76:  nop
0831dfbe +0x0d77:  push   %ebp
0831dfbf +0x0d78:  mov    %esp,%ebp
0831dfc1 +0x0d7a:  mov    0x8(%ebp),%eax
0831dfc4 +0x0d7d:  add    $0x10,%eax
0831dfc7 +0x0d80:  pop    %ebp
0831dfc8 +0x0d81:  ret
0831dfc9 +0x0d82:  nop
0831dfca +0x0d83:  push   %ebp
0831dfcb +0x0d84:  mov    %esp,%ebp
0831dfcd +0x0d86:  push   %ebx
0831dfce +0x0d87:  sub    $0x14,%esp
0831dfd1 +0x0d8a:  mov    0x8(%ebp),%ebx
0831dfd4 +0x0d8d:  jmp    0831e022 <+0xddb>
0831dfd6 +0x0d8f:  mov    0x10(%ebp),%eax
0831dfd9 +0x0d92:  mov    %eax,(%esp)
0831dfdc +0x0d95:  call   0831e224 <+0xfdd>
0831dfe1 +0x0d9a:  mov    0xc(%ebp),%edx
0831dfe4 +0x0d9d:  mov    0x18(%ebp),%ecx
0831dfe7 +0x0da0:  mov    %ecx,0x8(%esp)
0831dfeb +0x0da4:  mov    %eax,0x4(%esp)
0831dfef +0x0da8:  mov    %edx,(%esp)
0831dff2 +0x0dab:  call   0831e068 <+0xe21>
0831dff7 +0x0db0:  xor    $0x1,%eax
0831dffa +0x0db3:  test   %al,%al
0831dffc +0x0db5:  je     0831e014 <+0xdcd>
0831dffe +0x0db7:  mov    0x10(%ebp),%eax
0831e001 +0x0dba:  mov    %eax,0x14(%ebp)
0831e004 +0x0dbd:  mov    0x10(%ebp),%eax
0831e007 +0x0dc0:  mov    %eax,(%esp)
0831e00a +0x0dc3:  call   0831df5a <+0xd13>
0831e00f +0x0dc8:  mov    %eax,0x10(%ebp)
0831e012 +0x0dcb:  jmp    0831e022 <+0xddb>
0831e014 +0x0dcd:  mov    0x10(%ebp),%eax
0831e017 +0x0dd0:  mov    %eax,(%esp)
0831e01a +0x0dd3:  call   0831df4f <+0xd08>
0831e01f +0x0dd8:  mov    %eax,0x10(%ebp)
0831e022 +0x0ddb:  cmpl   $0x0,0x10(%ebp)
0831e026 +0x0ddf:  setne  %al
0831e029 +0x0de2:  test   %al,%al
0831e02b +0x0de4:  jne    0831dfd6 <+0xd8f>
0831e02d +0x0de6:  mov    0x14(%ebp),%eax
0831e030 +0x0de9:  mov    %eax,0x4(%esp)
0831e034 +0x0ded:  mov    %ebx,(%esp)
0831e037 +0x0df0:  call   0831e082 <+0xe3b>
0831e03c +0x0df5:  mov    %ebx,%eax
0831e03e +0x0df7:  add    $0x14,%esp
0831e041 +0x0dfa:  pop    %ebx
0831e042 +0x0dfb:  pop    %ebp
0831e043 +0x0dfc:  ret    $0x4
0831e046 +0x0dff:  push   %ebp
0831e047 +0x0e00:  mov    %esp,%ebp
0831e049 +0x0e02:  sub    $0x28,%esp
0831e04c +0x0e05:  mov    0x8(%ebp),%eax
0831e04f +0x0e08:  mov    %eax,(%esp)
0831e052 +0x0e0b:  call   0831e470 <+0x1229>
0831e057 +0x0e10:  mov    %eax,0x4(%esp)
0831e05b +0x0e14:  lea    -0x9(%ebp),%eax
0831e05e +0x0e17:  mov    %eax,(%esp)
0831e061 +0x0e1a:  call   0831e21c <+0xfd5>
0831e066 +0x0e1f:  leave
0831e067 +0x0e20:  ret
0831e068 +0x0e21:  push   %ebp
0831e069 +0x0e22:  mov    %esp,%ebp
0831e06b +0x0e24:  sub    $0x18,%esp
0831e06e +0x0e27:  mov    0x10(%ebp),%eax
0831e071 +0x0e2a:  mov    %eax,0x4(%esp)
0831e075 +0x0e2e:  mov    0xc(%ebp),%eax
0831e078 +0x0e31:  mov    %eax,(%esp)
0831e07b +0x0e34:  call   0831d338 <+0xf1>
0831e080 +0x0e39:  leave
0831e081 +0x0e3a:  ret
0831e082 +0x0e3b:  push   %ebp
0831e083 +0x0e3c:  mov    %esp,%ebp
0831e085 +0x0e3e:  mov    0xc(%ebp),%edx
0831e088 +0x0e41:  mov    0x8(%ebp),%eax
0831e08b +0x0e44:  mov    %edx,(%eax)
0831e08d +0x0e46:  pop    %ebp
0831e08e +0x0e47:  ret
0831e08f +0x0e48:  push   %ebp
0831e090 +0x0e49:  mov    %esp,%ebp
0831e092 +0x0e4b:  mov    0x8(%ebp),%eax
0831e095 +0x0e4e:  pop    %ebp
0831e096 +0x0e4f:  ret
0831e097 +0x0e50:  nop
0831e098 +0x0e51:  push   %ebp
0831e099 +0x0e52:  mov    %esp,%ebp
0831e09b +0x0e54:  push   %esi
0831e09c +0x0e55:  push   %ebx
0831e09d +0x0e56:  sub    $0x20,%esp
0831e0a0 +0x0e59:  mov    0x8(%ebp),%eax
0831e0a3 +0x0e5c:  mov    %eax,(%esp)
0831e0a6 +0x0e5f:  call   0831e47c <+0x1235>
0831e0ab +0x0e64:  mov    %eax,-0xc(%ebp)
0831e0ae +0x0e67:  mov    0xc(%ebp),%eax
0831e0b1 +0x0e6a:  mov    %eax,(%esp)
0831e0b4 +0x0e6d:  call   0831e08f <+0xe48>
0831e0b9 +0x0e72:  mov    %eax,%ebx
0831e0bb +0x0e74:  mov    0x8(%ebp),%eax
0831e0be +0x0e77:  mov    %eax,(%esp)
0831e0c1 +0x0e7a:  call   0831deb6 <+0xc6f>
0831e0c6 +0x0e7f:  mov    %ebx,0x8(%esp)
0831e0ca +0x0e83:  mov    -0xc(%ebp),%edx
0831e0cd +0x0e86:  mov    %edx,0x4(%esp)
0831e0d1 +0x0e8a:  mov    %eax,(%esp)
0831e0d4 +0x0e8d:  call   0831e4a0 <+0x1259>
0831e0d9 +0x0e92:  jmp    0831e10f <+0xec8>
0831e0db +0x0e94:  mov    %eax,(%esp)
0831e0de +0x0e97:  call   08725ce0 <__cxa_begin_catch>
0831e0e3 +0x0e9c:  mov    0x8(%ebp),%eax
0831e0e6 +0x0e9f:  mov    -0xc(%ebp),%edx
0831e0e9 +0x0ea2:  mov    %edx,0x4(%esp)
0831e0ed +0x0ea6:  mov    %eax,(%esp)
0831e0f0 +0x0ea9:  call   0831ded8 <+0xc91>
0831e0f5 +0x0eae:  call   08724be0 <__cxa_rethrow>
0831e0fa +0x0eb3:  mov    %edx,%ebx
0831e0fc +0x0eb5:  mov    %eax,%esi
0831e0fe +0x0eb7:  call   08725c30 <__cxa_end_catch>
0831e103 +0x0ebc:  mov    %esi,%eax
0831e105 +0x0ebe:  mov    %ebx,%edx
0831e107 +0x0ec0:  mov    %eax,(%esp)
0831e10a +0x0ec3:  call   08ae3750 <_Unwind_Resume>
0831e10f +0x0ec8:  mov    -0xc(%ebp),%eax
0831e112 +0x0ecb:  add    $0x20,%esp
0831e115 +0x0ece:  pop    %ebx
0831e116 +0x0ecf:  pop    %esi
0831e117 +0x0ed0:  pop    %ebp
0831e118 +0x0ed1:  ret
0831e119 +0x0ed2:  nop
0831e11a +0x0ed3:  push   %ebp
0831e11b +0x0ed4:  mov    %esp,%ebp
0831e11d +0x0ed6:  mov    0x8(%ebp),%eax
0831e120 +0x0ed9:  pop    %ebp
0831e121 +0x0eda:  ret
0831e122 +0x0edb:  push   %ebp
0831e123 +0x0edc:  mov    %esp,%ebp
0831e125 +0x0ede:  sub    $0x18,%esp
0831e128 +0x0ee1:  mov    0x8(%ebp),%eax
0831e12b +0x0ee4:  mov    %eax,(%esp)
0831e12e +0x0ee7:  call   0831e4e0 <+0x1299>
0831e133 +0x0eec:  leave
0831e134 +0x0eed:  ret
0831e135 +0x0eee:  nop
0831e136 +0x0eef:  push   %ebp
0831e137 +0x0ef0:  mov    %esp,%ebp
0831e139 +0x0ef2:  sub    $0x18,%esp
0831e13c +0x0ef5:  mov    0x8(%ebp),%eax
0831e13f +0x0ef8:  mov    %eax,(%esp)
0831e142 +0x0efb:  call   0831e4e6 <+0x129f>
0831e147 +0x0f00:  leave
0831e148 +0x0f01:  ret
0831e149 +0x0f02:  nop
0831e14a +0x0f03:  push   %ebp
0831e14b +0x0f04:  mov    %esp,%ebp
0831e14d +0x0f06:  sub    $0x28,%esp
0831e150 +0x0f09:  mov    0xc(%ebp),%eax
0831e153 +0x0f0c:  mov    %eax,0x4(%esp)
0831e157 +0x0f10:  lea    -0x9(%ebp),%eax
0831e15a +0x0f13:  mov    %eax,(%esp)
0831e15d +0x0f16:  call   0831e4ec <+0x12a5>
0831e162 +0x0f1b:  mov    0x8(%ebp),%eax
0831e165 +0x0f1e:  lea    -0x9(%ebp),%edx
0831e168 +0x0f21:  mov    %edx,0x4(%esp)
0831e16c +0x0f25:  mov    %eax,(%esp)
0831e16f +0x0f28:  call   0831e500 <+0x12b9>
0831e174 +0x0f2d:  lea    -0x9(%ebp),%eax
0831e177 +0x0f30:  mov    %eax,(%esp)
0831e17a +0x0f33:  call   0831d8e0 <+0x699>
0831e17f +0x0f38:  mov    0x8(%ebp),%eax
0831e182 +0x0f3b:  mov    %eax,(%esp)
0831e185 +0x0f3e:  call   0831d950 <+0x709>
0831e18a +0x0f43:  leave
0831e18b +0x0f44:  ret
0831e18c +0x0f45:  push   %ebp
0831e18d +0x0f46:  mov    %esp,%ebp
0831e18f +0x0f48:  push   %ebx
0831e190 +0x0f49:  sub    $0x14,%esp
0831e193 +0x0f4c:  mov    0x8(%ebp),%ebx
0831e196 +0x0f4f:  mov    0xc(%ebp),%eax
0831e199 +0x0f52:  mov    (%eax),%eax
0831e19b +0x0f54:  mov    %eax,0x4(%esp)
0831e19f +0x0f58:  mov    %ebx,(%esp)
0831e1a2 +0x0f5b:  call   0831e52e <+0x12e7>
0831e1a7 +0x0f60:  mov    %ebx,%eax
0831e1a9 +0x0f62:  add    $0x14,%esp
0831e1ac +0x0f65:  pop    %ebx
0831e1ad +0x0f66:  pop    %ebp
0831e1ae +0x0f67:  ret    $0x4
0831e1b1 +0x0f6a:  nop
0831e1b2 +0x0f6b:  push   %ebp
0831e1b3 +0x0f6c:  mov    %esp,%ebp
0831e1b5 +0x0f6e:  push   %ebx
0831e1b6 +0x0f6f:  sub    $0x14,%esp
0831e1b9 +0x0f72:  mov    0x8(%ebp),%ebx
0831e1bc +0x0f75:  mov    0xc(%ebp),%eax
0831e1bf +0x0f78:  mov    %eax,0x4(%esp)
0831e1c3 +0x0f7c:  mov    %ebx,(%esp)
0831e1c6 +0x0f7f:  call   0831e52e <+0x12e7>
0831e1cb +0x0f84:  mov    %ebx,%eax
0831e1cd +0x0f86:  add    $0x14,%esp
0831e1d0 +0x0f89:  pop    %ebx
0831e1d1 +0x0f8a:  pop    %ebp
0831e1d2 +0x0f8b:  ret    $0x4
0831e1d5 +0x0f8e:  nop
0831e1d6 +0x0f8f:  push   %ebp
0831e1d7 +0x0f90:  mov    %esp,%ebp
0831e1d9 +0x0f92:  sub    $0x18,%esp
0831e1dc +0x0f95:  jmp    0831e203 <+0xfbc>
0831e1de +0x0f97:  lea    0xc(%ebp),%eax
0831e1e1 +0x0f9a:  mov    %eax,(%esp)
0831e1e4 +0x0f9d:  call   0831e564 <+0x131d>
0831e1e9 +0x0fa2:  mov    %eax,0x4(%esp)
0831e1ed +0x0fa6:  mov    0x8(%ebp),%eax
0831e1f0 +0x0fa9:  mov    %eax,(%esp)
0831e1f3 +0x0fac:  call   0831d726 <+0x4df>
0831e1f8 +0x0fb1:  lea    0xc(%ebp),%eax
0831e1fb +0x0fb4:  mov    %eax,(%esp)
0831e1fe +0x0fb7:  call   0831e550 <+0x1309>
0831e203 +0x0fbc:  lea    0x10(%ebp),%eax
0831e206 +0x0fbf:  mov    %eax,0x4(%esp)
0831e20a +0x0fc3:  lea    0xc(%ebp),%eax
0831e20d +0x0fc6:  mov    %eax,(%esp)
0831e210 +0x0fc9:  call   0831e53c <+0x12f5>
0831e215 +0x0fce:  test   %al,%al
0831e217 +0x0fd0:  jne    0831e1de <+0xf97>
0831e219 +0x0fd2:  leave
0831e21a +0x0fd3:  ret
0831e21b +0x0fd4:  nop
0831e21c +0x0fd5:  push   %ebp
0831e21d +0x0fd6:  mov    %esp,%ebp
0831e21f +0x0fd8:  mov    0xc(%ebp),%eax
0831e222 +0x0fdb:  pop    %ebp
0831e223 +0x0fdc:  ret
0831e224 +0x0fdd:  push   %ebp
0831e225 +0x0fde:  mov    %esp,%ebp
0831e227 +0x0fe0:  sub    $0x28,%esp
0831e22a +0x0fe3:  mov    0x8(%ebp),%eax
0831e22d +0x0fe6:  mov    %eax,(%esp)
0831e230 +0x0fe9:  call   0831e571 <+0x132a>
0831e235 +0x0fee:  mov    %eax,0x4(%esp)
0831e239 +0x0ff2:  lea    -0x9(%ebp),%eax
0831e23c +0x0ff5:  mov    %eax,(%esp)
0831e23f +0x0ff8:  call   0831e21c <+0xfd5>
0831e244 +0x0ffd:  leave
0831e245 +0x0ffe:  ret
0831e246 +0x0fff:  push   %ebp
0831e247 +0x1000:  mov    %esp,%ebp
0831e249 +0x1002:  push   %ebx
0831e24a +0x1003:  sub    $0x14,%esp
0831e24d +0x1006:  mov    0x8(%ebp),%ebx
0831e250 +0x1009:  mov    0xc(%ebp),%eax
0831e253 +0x100c:  mov    0xc(%eax),%eax
0831e256 +0x100f:  mov    %eax,0x4(%esp)
0831e25a +0x1013:  mov    %ebx,(%esp)
0831e25d +0x1016:  call   0831e082 <+0xe3b>
0831e262 +0x101b:  mov    %ebx,%eax
0831e264 +0x101d:  add    $0x14,%esp
0831e267 +0x1020:  pop    %ebx
0831e268 +0x1021:  pop    %ebp
0831e269 +0x1022:  ret    $0x4
0831e26c +0x1025:  push   %ebp
0831e26d +0x1026:  mov    %esp,%ebp
0831e26f +0x1028:  push   %esi
0831e270 +0x1029:  push   %ebx
0831e271 +0x102a:  sub    $0x20,%esp
0831e274 +0x102d:  mov    0x8(%ebp),%esi
0831e277 +0x1030:  cmpl   $0x0,0x10(%ebp)
0831e27b +0x1034:  jne    0831e2c3 <+0x107c>
0831e27d +0x1036:  mov    0xc(%ebp),%eax
0831e280 +0x1039:  mov    %eax,(%esp)
0831e283 +0x103c:  call   0831df9a <+0xd53>
0831e288 +0x1041:  cmp    0x14(%ebp),%eax
0831e28b +0x1044:  je     0831e2c3 <+0x107c>
0831e28d +0x1046:  mov    0x14(%ebp),%eax
0831e290 +0x1049:  mov    %eax,(%esp)
0831e293 +0x104c:  call   0831e046 <+0xdff>
0831e298 +0x1051:  mov    %eax,%ebx
0831e29a +0x1053:  mov    0x18(%ebp),%eax
0831e29d +0x1056:  mov    %eax,0x4(%esp)
0831e2a1 +0x105a:  lea    -0xe(%ebp),%eax
0831e2a4 +0x105d:  mov    %eax,(%esp)
0831e2a7 +0x1060:  call   0831e21c <+0xfd5>
0831e2ac +0x1065:  mov    0xc(%ebp),%edx
0831e2af +0x1068:  mov    %ebx,0x8(%esp)
0831e2b3 +0x106c:  mov    %eax,0x4(%esp)
0831e2b7 +0x1070:  mov    %edx,(%esp)
0831e2ba +0x1073:  call   0831e068 <+0xe21>
0831e2bf +0x1078:  test   %al,%al
0831e2c1 +0x107a:  je     0831e2ca <+0x1083>
0831e2c3 +0x107c:  mov    $0x1,%eax
0831e2c8 +0x1081:  jmp    0831e2cf <+0x1088>
0831e2ca +0x1083:  mov    $0x0,%eax
0831e2cf +0x1088:  mov    %al,-0xd(%ebp)
0831e2d2 +0x108b:  mov    0x18(%ebp),%eax
0831e2d5 +0x108e:  mov    %eax,0x4(%esp)
0831e2d9 +0x1092:  mov    0xc(%ebp),%eax
0831e2dc +0x1095:  mov    %eax,(%esp)
0831e2df +0x1098:  call   0831e57c <+0x1335>
0831e2e4 +0x109d:  mov    %eax,-0xc(%ebp)
0831e2e7 +0x10a0:  mov    0xc(%ebp),%eax
0831e2ea +0x10a3:  lea    0x4(%eax),%ecx
0831e2ed +0x10a6:  mov    -0xc(%ebp),%edx
0831e2f0 +0x10a9:  movzbl -0xd(%ebp),%eax
0831e2f4 +0x10ad:  mov    %ecx,0xc(%esp)
0831e2f8 +0x10b1:  mov    0x14(%ebp),%ecx
0831e2fb +0x10b4:  mov    %ecx,0x8(%esp)
0831e2ff +0x10b8:  mov    %edx,0x4(%esp)
0831e303 +0x10bc:  mov    %eax,(%esp)
0831e306 +0x10bf:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
0831e30b +0x10c4:  mov    0xc(%ebp),%eax
0831e30e +0x10c7:  mov    0x14(%eax),%eax
0831e311 +0x10ca:  lea    0x1(%eax),%edx
0831e314 +0x10cd:  mov    0xc(%ebp),%eax
0831e317 +0x10d0:  mov    %edx,0x14(%eax)
0831e31a +0x10d3:  mov    -0xc(%ebp),%eax
0831e31d +0x10d6:  mov    %eax,0x4(%esp)
0831e321 +0x10da:  mov    %esi,(%esp)
0831e324 +0x10dd:  call   0831e082 <+0xe3b>
0831e329 +0x10e2:  mov    %esi,%eax
0831e32b +0x10e4:  add    $0x20,%esp
0831e32e +0x10e7:  pop    %ebx
0831e32f +0x10e8:  pop    %esi
0831e330 +0x10e9:  pop    %ebp
0831e331 +0x10ea:  ret    $0x4
0831e334 +0x10ed:  push   %ebp
0831e335 +0x10ee:  mov    %esp,%ebp
0831e337 +0x10f0:  sub    $0x18,%esp
0831e33a +0x10f3:  mov    0xc(%ebp),%eax
0831e33d +0x10f6:  mov    %eax,(%esp)
0831e340 +0x10f9:  call   0831e5fd <+0x13b6>
0831e345 +0x10fe:  mov    0x8(%ebp),%edx
0831e348 +0x1101:  mov    (%eax),%eax
0831e34a +0x1103:  mov    %eax,(%edx)
0831e34c +0x1105:  mov    0x10(%ebp),%eax
0831e34f +0x1108:  mov    %eax,(%esp)
0831e352 +0x110b:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
0831e357 +0x1110:  movzbl (%eax),%edx
0831e35a +0x1113:  mov    0x8(%ebp),%eax
0831e35d +0x1116:  mov    %dl,0x4(%eax)
0831e360 +0x1119:  leave
0831e361 +0x111a:  ret
0831e362 +0x111b:  push   %ebp
0831e363 +0x111c:  mov    %esp,%ebp
0831e365 +0x111e:  sub    $0x18,%esp
0831e368 +0x1121:  mov    0x8(%ebp),%eax
0831e36b +0x1124:  mov    (%eax),%eax
0831e36d +0x1126:  mov    %eax,(%esp)
0831e370 +0x1129:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
0831e375 +0x112e:  mov    0x8(%ebp),%edx
0831e378 +0x1131:  mov    %eax,(%edx)
0831e37a +0x1133:  mov    0x8(%ebp),%eax
0831e37d +0x1136:  leave
0831e37e +0x1137:  ret
0831e37f +0x1138:  nop
0831e380 +0x1139:  push   %ebp
0831e381 +0x113a:  mov    %esp,%ebp
0831e383 +0x113c:  sub    $0x18,%esp
0831e386 +0x113f:  mov    0xc(%ebp),%eax
0831e389 +0x1142:  mov    %eax,(%esp)
0831e38c +0x1145:  call   0831e605 <+0x13be>
0831e391 +0x114a:  mov    0x8(%ebp),%edx
0831e394 +0x114d:  mov    (%eax),%eax
0831e396 +0x114f:  mov    %eax,(%edx)
0831e398 +0x1151:  mov    0x10(%ebp),%eax
0831e39b +0x1154:  mov    %eax,(%esp)
0831e39e +0x1157:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
0831e3a3 +0x115c:  movzbl (%eax),%edx
0831e3a6 +0x115f:  mov    0x8(%ebp),%eax
0831e3a9 +0x1162:  mov    %dl,0x4(%eax)
0831e3ac +0x1165:  leave
0831e3ad +0x1166:  ret
0831e3ae +0x1167:  push   %ebp
0831e3af +0x1168:  mov    %esp,%ebp
0831e3b1 +0x116a:  sub    $0x18,%esp
0831e3b4 +0x116d:  mov    0x8(%ebp),%eax
0831e3b7 +0x1170:  mov    %eax,(%esp)
0831e3ba +0x1173:  call   0831e60e <+0x13c7>
0831e3bf +0x1178:  leave
0831e3c0 +0x1179:  ret
0831e3c1 +0x117a:  nop
0831e3c2 +0x117b:  push   %ebp
0831e3c3 +0x117c:  mov    %esp,%ebp
0831e3c5 +0x117e:  sub    $0x18,%esp
0831e3c8 +0x1181:  mov    0xc(%ebp),%eax
0831e3cb +0x1184:  mov    %eax,(%esp)
0831e3ce +0x1187:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0831e3d3 +0x118c:  leave
0831e3d4 +0x118d:  ret
0831e3d5 +0x118e:  nop
0831e3d6 +0x118f:  push   %ebp
0831e3d7 +0x1190:  mov    %esp,%ebp
0831e3d9 +0x1192:  sub    $0x18,%esp
0831e3dc +0x1195:  mov    0x8(%ebp),%eax
0831e3df +0x1198:  mov    %eax,(%esp)
0831e3e2 +0x119b:  call   0831e614 <+0x13cd>
0831e3e7 +0x11a0:  leave
0831e3e8 +0x11a1:  ret
0831e3e9 +0x11a2:  nop
0831e3ea +0x11a3:  push   %ebp
0831e3eb +0x11a4:  mov    %esp,%ebp
0831e3ed +0x11a6:  mov    0x8(%ebp),%eax
0831e3f0 +0x11a9:  movl   $0x0,0x4(%eax)
0831e3f7 +0x11b0:  mov    0x8(%ebp),%eax
0831e3fa +0x11b3:  movl   $0x0,0x8(%eax)
0831e401 +0x11ba:  mov    0x8(%ebp),%eax
0831e404 +0x11bd:  lea    0x4(%eax),%edx
0831e407 +0x11c0:  mov    0x8(%ebp),%eax
0831e40a +0x11c3:  mov    %edx,0xc(%eax)
0831e40d +0x11c6:  mov    0x8(%ebp),%eax
0831e410 +0x11c9:  lea    0x4(%eax),%edx
0831e413 +0x11cc:  mov    0x8(%ebp),%eax
0831e416 +0x11cf:  mov    %edx,0x10(%eax)
0831e419 +0x11d2:  pop    %ebp
0831e41a +0x11d3:  ret
0831e41b +0x11d4:  nop
0831e41c +0x11d5:  push   %ebp
0831e41d +0x11d6:  mov    %esp,%ebp
0831e41f +0x11d8:  mov    0x8(%ebp),%eax
0831e422 +0x11db:  pop    %ebp
0831e423 +0x11dc:  ret
0831e424 +0x11dd:  push   %ebp
0831e425 +0x11de:  mov    %esp,%ebp
0831e427 +0x11e0:  sub    $0x18,%esp
0831e42a +0x11e3:  mov    0x8(%ebp),%eax
0831e42d +0x11e6:  add    $0x10,%eax
0831e430 +0x11e9:  mov    %eax,(%esp)
0831e433 +0x11ec:  call   0831d586 <+0x33f>
0831e438 +0x11f1:  leave
0831e439 +0x11f2:  ret
0831e43a +0x11f3:  push   %ebp
0831e43b +0x11f4:  mov    %esp,%ebp
0831e43d +0x11f6:  sub    $0x18,%esp
0831e440 +0x11f9:  mov    0xc(%ebp),%eax
0831e443 +0x11fc:  mov    %eax,(%esp)
0831e446 +0x11ff:  call   0831e424 <+0x11dd>
0831e44b +0x1204:  leave
0831e44c +0x1205:  ret
0831e44d +0x1206:  nop
0831e44e +0x1207:  push   %ebp
0831e44f +0x1208:  mov    %esp,%ebp
0831e451 +0x120a:  sub    $0x18,%esp
0831e454 +0x120d:  mov    0x8(%ebp),%eax
0831e457 +0x1210:  movl   $0x1,0x8(%esp)
0831e45f +0x1218:  mov    0xc(%ebp),%edx
0831e462 +0x121b:  mov    %edx,0x4(%esp)
0831e466 +0x121f:  mov    %eax,(%esp)
0831e469 +0x1222:  call   0831e61a <+0x13d3>
0831e46e +0x1227:  leave
0831e46f +0x1228:  ret
0831e470 +0x1229:  push   %ebp
0831e471 +0x122a:  mov    %esp,%ebp
0831e473 +0x122c:  mov    0x8(%ebp),%eax
0831e476 +0x122f:  add    $0x10,%eax
0831e479 +0x1232:  pop    %ebp
0831e47a +0x1233:  ret
0831e47b +0x1234:  nop
0831e47c +0x1235:  push   %ebp
0831e47d +0x1236:  mov    %esp,%ebp
0831e47f +0x1238:  sub    $0x18,%esp
0831e482 +0x123b:  mov    0x8(%ebp),%eax
0831e485 +0x123e:  movl   $0x0,0x8(%esp)
0831e48d +0x1246:  movl   $0x1,0x4(%esp)
0831e495 +0x124e:  mov    %eax,(%esp)
0831e498 +0x1251:  call   0831e62e <+0x13e7>
0831e49d +0x1256:  leave
0831e49e +0x1257:  ret
0831e49f +0x1258:  nop
0831e4a0 +0x1259:  push   %ebp
0831e4a1 +0x125a:  mov    %esp,%ebp
0831e4a3 +0x125c:  push   %ebx
0831e4a4 +0x125d:  sub    $0x14,%esp
0831e4a7 +0x1260:  mov    0x10(%ebp),%eax
0831e4aa +0x1263:  mov    %eax,(%esp)
0831e4ad +0x1266:  call   0831e08f <+0xe48>
0831e4b2 +0x126b:  mov    %eax,%ebx
0831e4b4 +0x126d:  mov    0xc(%ebp),%eax
0831e4b7 +0x1270:  mov    %eax,0x4(%esp)
0831e4bb +0x1274:  movl   $0x1c,(%esp)
0831e4c2 +0x127b:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
0831e4c7 +0x1280:  mov    %eax,%edx
0831e4c9 +0x1282:  test   %edx,%edx
0831e4cb +0x1284:  je     0831e4d9 <+0x1292>
0831e4cd +0x1286:  mov    %ebx,0x4(%esp)
0831e4d1 +0x128a:  mov    %eax,(%esp)
0831e4d4 +0x128d:  call   0831e674 <+0x142d>
0831e4d9 +0x1292:  add    $0x14,%esp
0831e4dc +0x1295:  pop    %ebx
0831e4dd +0x1296:  pop    %ebp
0831e4de +0x1297:  ret
0831e4df +0x1298:  nop
0831e4e0 +0x1299:  push   %ebp
0831e4e1 +0x129a:  mov    %esp,%ebp
0831e4e3 +0x129c:  pop    %ebp
0831e4e4 +0x129d:  ret
0831e4e5 +0x129e:  nop
0831e4e6 +0x129f:  push   %ebp
0831e4e7 +0x12a0:  mov    %esp,%ebp
0831e4e9 +0x12a2:  pop    %ebp
0831e4ea +0x12a3:  ret
0831e4eb +0x12a4:  nop
0831e4ec +0x12a5:  push   %ebp
0831e4ed +0x12a6:  mov    %esp,%ebp
0831e4ef +0x12a8:  sub    $0x18,%esp
0831e4f2 +0x12ab:  mov    0x8(%ebp),%eax
0831e4f5 +0x12ae:  mov    %eax,(%esp)
0831e4f8 +0x12b1:  call   0831e60e <+0x13c7>
0831e4fd +0x12b6:  leave
0831e4fe +0x12b7:  ret
0831e4ff +0x12b8:  nop
0831e500 +0x12b9:  push   %ebp
0831e501 +0x12ba:  mov    %esp,%ebp
0831e503 +0x12bc:  sub    $0x18,%esp
0831e506 +0x12bf:  mov    0x8(%ebp),%eax
0831e509 +0x12c2:  mov    0xc(%ebp),%edx
0831e50c +0x12c5:  mov    %edx,0x4(%esp)
0831e510 +0x12c9:  mov    %eax,(%esp)
0831e513 +0x12cc:  call   0831e6ba <+0x1473>
0831e518 +0x12d1:  mov    0x8(%ebp),%eax
0831e51b +0x12d4:  movl   $0x0,(%eax)
0831e521 +0x12da:  mov    0x8(%ebp),%eax
0831e524 +0x12dd:  movl   $0x0,0x4(%eax)
0831e52b +0x12e4:  leave
0831e52c +0x12e5:  ret
0831e52d +0x12e6:  nop
0831e52e +0x12e7:  push   %ebp
0831e52f +0x12e8:  mov    %esp,%ebp
0831e531 +0x12ea:  mov    0x8(%ebp),%eax
0831e534 +0x12ed:  mov    0xc(%ebp),%edx
0831e537 +0x12f0:  mov    %edx,(%eax)
0831e539 +0x12f2:  pop    %ebp
0831e53a +0x12f3:  ret
0831e53b +0x12f4:  nop
0831e53c +0x12f5:  push   %ebp
0831e53d +0x12f6:  mov    %esp,%ebp
0831e53f +0x12f8:  mov    0x8(%ebp),%eax
0831e542 +0x12fb:  mov    (%eax),%edx
0831e544 +0x12fd:  mov    0xc(%ebp),%eax
0831e547 +0x1300:  mov    (%eax),%eax
0831e549 +0x1302:  cmp    %eax,%edx
0831e54b +0x1304:  setne  %al
0831e54e +0x1307:  pop    %ebp
0831e54f +0x1308:  ret
0831e550 +0x1309:  push   %ebp
0831e551 +0x130a:  mov    %esp,%ebp
0831e553 +0x130c:  mov    0x8(%ebp),%eax
0831e556 +0x130f:  mov    (%eax),%eax
0831e558 +0x1311:  mov    (%eax),%edx
0831e55a +0x1313:  mov    0x8(%ebp),%eax
0831e55d +0x1316:  mov    %edx,(%eax)
0831e55f +0x1318:  mov    0x8(%ebp),%eax
0831e562 +0x131b:  pop    %ebp
0831e563 +0x131c:  ret
0831e564 +0x131d:  push   %ebp
0831e565 +0x131e:  mov    %esp,%ebp
0831e567 +0x1320:  mov    0x8(%ebp),%eax
0831e56a +0x1323:  mov    (%eax),%eax
0831e56c +0x1325:  add    $0x8,%eax
0831e56f +0x1328:  pop    %ebp
0831e570 +0x1329:  ret
0831e571 +0x132a:  push   %ebp
0831e572 +0x132b:  mov    %esp,%ebp
0831e574 +0x132d:  mov    0x8(%ebp),%eax
0831e577 +0x1330:  add    $0x10,%eax
0831e57a +0x1333:  pop    %ebp
0831e57b +0x1334:  ret
0831e57c +0x1335:  push   %ebp
0831e57d +0x1336:  mov    %esp,%ebp
0831e57f +0x1338:  push   %esi
0831e580 +0x1339:  push   %ebx
0831e581 +0x133a:  sub    $0x20,%esp
0831e584 +0x133d:  mov    0x8(%ebp),%eax
0831e587 +0x1340:  mov    %eax,(%esp)
0831e58a +0x1343:  call   0831e6d4 <+0x148d>
0831e58f +0x1348:  mov    %eax,-0xc(%ebp)
0831e592 +0x134b:  mov    0xc(%ebp),%eax
0831e595 +0x134e:  mov    %eax,(%esp)
0831e598 +0x1351:  call   0831e6f7 <+0x14b0>
0831e59d +0x1356:  mov    %eax,%ebx
0831e59f +0x1358:  mov    0x8(%ebp),%eax
0831e5a2 +0x135b:  mov    %eax,(%esp)
0831e5a5 +0x135e:  call   0831e41c <+0x11d5>
0831e5aa +0x1363:  mov    %ebx,0x8(%esp)
0831e5ae +0x1367:  mov    -0xc(%ebp),%edx
0831e5b1 +0x136a:  mov    %edx,0x4(%esp)
0831e5b5 +0x136e:  mov    %eax,(%esp)
0831e5b8 +0x1371:  call   0831e700 <+0x14b9>
0831e5bd +0x1376:  jmp    0831e5f3 <+0x13ac>
0831e5bf +0x1378:  mov    %eax,(%esp)
0831e5c2 +0x137b:  call   08725ce0 <__cxa_begin_catch>
0831e5c7 +0x1380:  mov    -0xc(%ebp),%eax
0831e5ca +0x1383:  mov    %eax,0x4(%esp)
0831e5ce +0x1387:  mov    0x8(%ebp),%eax
0831e5d1 +0x138a:  mov    %eax,(%esp)
0831e5d4 +0x138d:  call   0831e44e <+0x1207>
0831e5d9 +0x1392:  call   08724be0 <__cxa_rethrow>
0831e5de +0x1397:  mov    %edx,%ebx
0831e5e0 +0x1399:  mov    %eax,%esi
0831e5e2 +0x139b:  call   08725c30 <__cxa_end_catch>
0831e5e7 +0x13a0:  mov    %esi,%eax
0831e5e9 +0x13a2:  mov    %ebx,%edx
0831e5eb +0x13a4:  mov    %eax,(%esp)
0831e5ee +0x13a7:  call   08ae3750 <_Unwind_Resume>
0831e5f3 +0x13ac:  mov    -0xc(%ebp),%eax
0831e5f6 +0x13af:  add    $0x20,%esp
0831e5f9 +0x13b2:  pop    %ebx
0831e5fa +0x13b3:  pop    %esi
0831e5fb +0x13b4:  pop    %ebp
0831e5fc +0x13b5:  ret
0831e5fd +0x13b6:  push   %ebp
0831e5fe +0x13b7:  mov    %esp,%ebp
0831e600 +0x13b9:  mov    0x8(%ebp),%eax
0831e603 +0x13bc:  pop    %ebp
0831e604 +0x13bd:  ret
0831e605 +0x13be:  push   %ebp
0831e606 +0x13bf:  mov    %esp,%ebp
0831e608 +0x13c1:  mov    0x8(%ebp),%eax
0831e60b +0x13c4:  pop    %ebp
0831e60c +0x13c5:  ret
0831e60d +0x13c6:  nop
0831e60e +0x13c7:  push   %ebp
0831e60f +0x13c8:  mov    %esp,%ebp
0831e611 +0x13ca:  pop    %ebp
0831e612 +0x13cb:  ret
0831e613 +0x13cc:  nop
0831e614 +0x13cd:  push   %ebp
0831e615 +0x13ce:  mov    %esp,%ebp
0831e617 +0x13d0:  pop    %ebp
0831e618 +0x13d1:  ret
0831e619 +0x13d2:  nop
0831e61a +0x13d3:  push   %ebp
0831e61b +0x13d4:  mov    %esp,%ebp
0831e61d +0x13d6:  sub    $0x18,%esp
0831e620 +0x13d9:  mov    0xc(%ebp),%eax
0831e623 +0x13dc:  mov    %eax,(%esp)
0831e626 +0x13df:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0831e62b +0x13e4:  leave
0831e62c +0x13e5:  ret
0831e62d +0x13e6:  nop
0831e62e +0x13e7:  push   %ebp
0831e62f +0x13e8:  mov    %esp,%ebp
0831e631 +0x13ea:  sub    $0x18,%esp
0831e634 +0x13ed:  mov    0x8(%ebp),%eax
0831e637 +0x13f0:  mov    %eax,(%esp)
0831e63a +0x13f3:  call   0831e768 <+0x1521>
0831e63f +0x13f8:  cmp    0xc(%ebp),%eax
0831e642 +0x13fb:  setb   %al
0831e645 +0x13fe:  movzbl %al,%eax
0831e648 +0x1401:  test   %eax,%eax
0831e64a +0x1403:  setne  %al
0831e64d +0x1406:  test   %al,%al
0831e64f +0x1408:  je     0831e656 <+0x140f>
0831e651 +0x140a:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
0831e656 +0x140f:  mov    0xc(%ebp),%eax
0831e659 +0x1412:  shl    $0x2,%eax
0831e65c +0x1415:  lea    0x0(,%eax,8),%edx
0831e663 +0x141c:  mov    %edx,%ecx
0831e665 +0x141e:  sub    %eax,%ecx
0831e667 +0x1420:  mov    %ecx,%eax
0831e669 +0x1422:  mov    %eax,(%esp)
0831e66c +0x1425:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0831e671 +0x142a:  leave
0831e672 +0x142b:  ret
0831e673 +0x142c:  nop
0831e674 +0x142d:  push   %ebp
0831e675 +0x142e:  mov    %esp,%ebp
0831e677 +0x1430:  sub    $0x18,%esp
0831e67a +0x1433:  mov    0x8(%ebp),%eax
0831e67d +0x1436:  movl   $0x0,(%eax)
0831e683 +0x143c:  mov    0x8(%ebp),%eax
0831e686 +0x143f:  movl   $0x0,0x4(%eax)
0831e68d +0x1446:  mov    0xc(%ebp),%eax
0831e690 +0x1449:  mov    %eax,(%esp)
0831e693 +0x144c:  call   0831e08f <+0xe48>
0831e698 +0x1451:  mov    0x8(%ebp),%edx
0831e69b +0x1454:  mov    (%eax),%ecx
0831e69d +0x1456:  mov    %ecx,0x8(%edx)
0831e6a0 +0x1459:  mov    0x4(%eax),%ecx
0831e6a3 +0x145c:  mov    %ecx,0xc(%edx)
0831e6a6 +0x145f:  mov    0x8(%eax),%ecx
0831e6a9 +0x1462:  mov    %ecx,0x10(%edx)
0831e6ac +0x1465:  mov    0xc(%eax),%ecx
0831e6af +0x1468:  mov    %ecx,0x14(%edx)
0831e6b2 +0x146b:  mov    0x10(%eax),%eax
0831e6b5 +0x146e:  mov    %eax,0x18(%edx)
0831e6b8 +0x1471:  leave
0831e6b9 +0x1472:  ret
0831e6ba +0x1473:  push   %ebp
0831e6bb +0x1474:  mov    %esp,%ebp
0831e6bd +0x1476:  sub    $0x18,%esp
0831e6c0 +0x1479:  mov    0xc(%ebp),%edx
0831e6c3 +0x147c:  mov    0x8(%ebp),%eax
0831e6c6 +0x147f:  mov    %edx,0x4(%esp)
0831e6ca +0x1483:  mov    %eax,(%esp)
0831e6cd +0x1486:  call   0831e772 <+0x152b>
0831e6d2 +0x148b:  leave
0831e6d3 +0x148c:  ret
0831e6d4 +0x148d:  push   %ebp
0831e6d5 +0x148e:  mov    %esp,%ebp
0831e6d7 +0x1490:  sub    $0x18,%esp
0831e6da +0x1493:  mov    0x8(%ebp),%eax
0831e6dd +0x1496:  movl   $0x0,0x8(%esp)
0831e6e5 +0x149e:  movl   $0x1,0x4(%esp)
0831e6ed +0x14a6:  mov    %eax,(%esp)
0831e6f0 +0x14a9:  call   0831e778 <+0x1531>
0831e6f5 +0x14ae:  leave
0831e6f6 +0x14af:  ret
0831e6f7 +0x14b0:  push   %ebp
0831e6f8 +0x14b1:  mov    %esp,%ebp
0831e6fa +0x14b3:  mov    0x8(%ebp),%eax
0831e6fd +0x14b6:  pop    %ebp
0831e6fe +0x14b7:  ret
0831e6ff +0x14b8:  nop
0831e700 +0x14b9:  push   %ebp
0831e701 +0x14ba:  mov    %esp,%ebp
0831e703 +0x14bc:  push   %edi
0831e704 +0x14bd:  push   %esi
0831e705 +0x14be:  push   %ebx
0831e706 +0x14bf:  sub    $0x2c,%esp
0831e709 +0x14c2:  mov    0x10(%ebp),%eax
0831e70c +0x14c5:  mov    %eax,(%esp)
0831e70f +0x14c8:  call   0831e6f7 <+0x14b0>
0831e714 +0x14cd:  mov    %eax,%edi
0831e716 +0x14cf:  mov    0xc(%ebp),%esi
0831e719 +0x14d2:  mov    %esi,0x4(%esp)
0831e71d +0x14d6:  movl   $0x1c,(%esp)
0831e724 +0x14dd:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
0831e729 +0x14e2:  mov    %eax,%ebx
0831e72b +0x14e4:  mov    %ebx,%eax
0831e72d +0x14e6:  test   %eax,%eax
0831e72f +0x14e8:  je     0831e75f <+0x1518>
0831e731 +0x14ea:  mov    %ebx,%eax
0831e733 +0x14ec:  mov    %edi,0x4(%esp)
0831e737 +0x14f0:  mov    %eax,(%esp)
0831e73a +0x14f3:  call   0831e7f2 <+0x15ab>
0831e73f +0x14f8:  jmp    0831e75f <+0x1518>
0831e741 +0x14fa:  mov    %edx,%edi
0831e743 +0x14fc:  mov    %eax,-0x1c(%ebp)
0831e746 +0x14ff:  mov    %esi,0x4(%esp)
0831e74a +0x1503:  mov    %ebx,(%esp)
0831e74d +0x1506:  call   0807fff6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x1c>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x1c
0831e752 +0x150b:  mov    -0x1c(%ebp),%eax
0831e755 +0x150e:  mov    %edi,%edx
0831e757 +0x1510:  mov    %eax,(%esp)
0831e75a +0x1513:  call   08ae3750 <_Unwind_Resume>
0831e75f +0x1518:  add    $0x2c,%esp
0831e762 +0x151b:  pop    %ebx
0831e763 +0x151c:  pop    %esi
0831e764 +0x151d:  pop    %edi
0831e765 +0x151e:  pop    %ebp
0831e766 +0x151f:  ret
0831e767 +0x1520:  nop
0831e768 +0x1521:  push   %ebp
0831e769 +0x1522:  mov    %esp,%ebp
0831e76b +0x1524:  mov    $"}p�.",%eax
0831e770 +0x1529:  pop    %ebp
0831e771 +0x152a:  ret
0831e772 +0x152b:  push   %ebp
0831e773 +0x152c:  mov    %esp,%ebp
0831e775 +0x152e:  pop    %ebp
0831e776 +0x152f:  ret
0831e777 +0x1530:  nop
0831e778 +0x1531:  push   %ebp
0831e779 +0x1532:  mov    %esp,%ebp
0831e77b +0x1534:  sub    $0x18,%esp
0831e77e +0x1537:  mov    0x8(%ebp),%eax
0831e781 +0x153a:  mov    %eax,(%esp)
0831e784 +0x153d:  call   0831e83e <+0x15f7>
0831e789 +0x1542:  cmp    0xc(%ebp),%eax
0831e78c +0x1545:  setb   %al
0831e78f +0x1548:  movzbl %al,%eax
0831e792 +0x154b:  test   %eax,%eax
0831e794 +0x154d:  setne  %al
0831e797 +0x1550:  test   %al,%al
0831e799 +0x1552:  je     0831e7a0 <+0x1559>
0831e79b +0x1554:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
0831e7a0 +0x1559:  mov    0xc(%ebp),%eax
0831e7a3 +0x155c:  shl    $0x2,%eax
0831e7a6 +0x155f:  lea    0x0(,%eax,8),%edx
0831e7ad +0x1566:  mov    %edx,%ecx
0831e7af +0x1568:  sub    %eax,%ecx
0831e7b1 +0x156a:  mov    %ecx,%eax
0831e7b3 +0x156c:  mov    %eax,(%esp)
0831e7b6 +0x156f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0831e7bb +0x1574:  leave
0831e7bc +0x1575:  ret
0831e7bd +0x1576:  nop
0831e7be +0x1577:  push   %ebp
0831e7bf +0x1578:  mov    %esp,%ebp
0831e7c1 +0x157a:  sub    $0x18,%esp
0831e7c4 +0x157d:  mov    0x8(%ebp),%eax
0831e7c7 +0x1580:  mov    0xc(%ebp),%edx
0831e7ca +0x1583:  movzwl (%edx),%ecx
0831e7cd +0x1586:  mov    %cx,(%eax)
0831e7d0 +0x1589:  movzbl 0x2(%edx),%edx
0831e7d4 +0x158d:  mov    %dl,0x2(%eax)
0831e7d7 +0x1590:  mov    0xc(%ebp),%eax
0831e7da +0x1593:  lea    0x4(%eax),%edx
0831e7dd +0x1596:  mov    0x8(%ebp),%eax
0831e7e0 +0x1599:  add    $0x4,%eax
0831e7e3 +0x159c:  mov    %edx,0x4(%esp)
0831e7e7 +0x15a0:  mov    %eax,(%esp)
0831e7ea +0x15a3:  call   0831d7a0 <+0x559>
0831e7ef +0x15a8:  leave
0831e7f0 +0x15a9:  ret
0831e7f1 +0x15aa:  nop
0831e7f2 +0x15ab:  push   %ebp
0831e7f3 +0x15ac:  mov    %esp,%ebp
0831e7f5 +0x15ae:  sub    $0x18,%esp
0831e7f8 +0x15b1:  mov    0x8(%ebp),%eax
0831e7fb +0x15b4:  movl   $0x0,(%eax)
0831e801 +0x15ba:  mov    0x8(%ebp),%eax
0831e804 +0x15bd:  movl   $0x0,0x4(%eax)
0831e80b +0x15c4:  mov    0x8(%ebp),%eax
0831e80e +0x15c7:  movl   $0x0,0x8(%eax)
0831e815 +0x15ce:  mov    0x8(%ebp),%eax
0831e818 +0x15d1:  movl   $0x0,0xc(%eax)
0831e81f +0x15d8:  mov    0xc(%ebp),%eax
0831e822 +0x15db:  mov    %eax,(%esp)
0831e825 +0x15de:  call   0831e6f7 <+0x14b0>
0831e82a +0x15e3:  mov    0x8(%ebp),%edx
0831e82d +0x15e6:  add    $0x10,%edx
0831e830 +0x15e9:  mov    %eax,0x4(%esp)
0831e834 +0x15ed:  mov    %edx,(%esp)
0831e837 +0x15f0:  call   0831e7be <+0x1577>
0831e83c +0x15f5:  leave
0831e83d +0x15f6:  ret
0831e83e +0x15f7:  push   %ebp
0831e83f +0x15f8:  mov    %esp,%ebp
0831e841 +0x15fa:  mov    $"}p�.",%eax
0831e846 +0x15ff:  pop    %ebp
0831e847 +0x1600:  ret
```

## 反编译 C

```c
// <global>::global @ 0x831d247

/* break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem() */

void break_away_prevent::CBreakAwayPreventSystem::_GLOBAL__I_CBreakAwayPreventSystem(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
