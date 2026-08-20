# GiveGrowCreatureEvent

`_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev`

`global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to GiveGrowCreatureEvent` | `0x081b7381` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b7381  _GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev
#           global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()
# range [0x081b7381, 0x081b815b]
081b7381 +0x000:  push   %ebp
081b7382 +0x001:  mov    %esp,%ebp
081b7384 +0x003:  sub    $0x18,%esp
081b7387 +0x006:  movl   $0xffff,0x4(%esp)
081b738f +0x00e:  movl   $0x1,(%esp)
081b7396 +0x015:  call   081b7341 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
081b739b +0x01a:  leave
081b739c +0x01b:  ret
081b739d +0x01c:  nop
081b739e +0x01d:  push   %ebp
081b739f +0x01e:  mov    %esp,%ebp
081b73a1 +0x020:  sub    $0x18,%esp
081b73a4 +0x023:  mov    0x8(%ebp),%eax
081b73a7 +0x026:  mov    0xc(%ebp),%edx
081b73aa +0x029:  mov    %edx,0x4(%esp)
081b73ae +0x02d:  mov    %eax,(%esp)
081b73b1 +0x030:  call   080c84fa <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x52>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x52
081b73b6 +0x035:  leave
081b73b7 +0x036:  ret
081b73b8 +0x037:  push   %ebp
081b73b9 +0x038:  mov    %esp,%ebp
081b73bb +0x03a:  sub    $0x18,%esp
081b73be +0x03d:  mov    0x8(%ebp),%eax
081b73c1 +0x040:  lea    0x4(%eax),%edx
081b73c4 +0x043:  mov    0x10(%ebp),%eax
081b73c7 +0x046:  mov    %eax,0xc(%esp)
081b73cb +0x04a:  mov    0xc(%ebp),%eax
081b73ce +0x04d:  mov    %eax,0x8(%esp)
081b73d2 +0x051:  mov    %edx,0x4(%esp)
081b73d6 +0x055:  mov    0x8(%ebp),%eax
081b73d9 +0x058:  mov    %eax,(%esp)
081b73dc +0x05b:  call   0858cc68 <_ZN9PacketBuf7put_strERiPci>  ; PacketBuf::put_str(int&, char*, int)
081b73e1 +0x060:  leave
081b73e2 +0x061:  ret
081b73e3 +0x062:  nop
081b73e4 +0x063:  push   %ebp
081b73e5 +0x064:  mov    %esp,%ebp
081b73e7 +0x066:  sub    $0x18,%esp
081b73ea +0x069:  mov    0x8(%ebp),%eax
081b73ed +0x06c:  mov    (%eax),%eax
081b73ef +0x06e:  mov    0x10(%ebp),%edx
081b73f2 +0x071:  mov    %edx,0x8(%esp)
081b73f6 +0x075:  mov    0xc(%ebp),%edx
081b73f9 +0x078:  mov    %edx,0x4(%esp)
081b73fd +0x07c:  mov    %eax,(%esp)
081b7400 +0x07f:  call   081b73b8 <+0x37>
081b7405 +0x084:  leave
081b7406 +0x085:  ret
081b7407 +0x086:  nop
081b7408 +0x087:  push   %ebp
081b7409 +0x088:  mov    %esp,%ebp
081b740b +0x08a:  mov    0x8(%ebp),%eax
081b740e +0x08d:  add    $0x6e8,%eax
081b7413 +0x092:  pop    %ebp
081b7414 +0x093:  ret
081b7415 +0x094:  nop
081b7416 +0x095:  push   %ebp
081b7417 +0x096:  mov    %esp,%ebp
081b7419 +0x098:  sub    $0x18,%esp
081b741c +0x09b:  mov    0x8(%ebp),%eax
081b741f +0x09e:  movw   $0x0,(%eax)
081b7424 +0x0a3:  mov    0x8(%ebp),%eax
081b7427 +0x0a6:  movl   $0x0,0x4(%eax)
081b742e +0x0ad:  mov    0x8(%ebp),%eax
081b7431 +0x0b0:  movl   $0x0,0x8(%eax)
081b7438 +0x0b7:  mov    0x8(%ebp),%eax
081b743b +0x0ba:  add    $0xc,%eax
081b743e +0x0bd:  movl   $0x1e,0x8(%esp)
081b7446 +0x0c5:  movl   $0x0,0x4(%esp)
081b744e +0x0cd:  mov    %eax,(%esp)
081b7451 +0x0d0:  call   0807dcc0 <_init+0x5b8>
081b7456 +0x0d5:  leave
081b7457 +0x0d6:  ret
081b7458 +0x0d7:  push   %ebp
081b7459 +0x0d8:  mov    %esp,%ebp
081b745b +0x0da:  sub    $0x18,%esp
081b745e +0x0dd:  mov    0x8(%ebp),%eax
081b7461 +0x0e0:  movw   $0x0,(%eax)
081b7466 +0x0e5:  mov    0x8(%ebp),%eax
081b7469 +0x0e8:  movl   $0x0,0x4(%eax)
081b7470 +0x0ef:  mov    0x8(%ebp),%eax
081b7473 +0x0f2:  movl   $0x0,0x8(%eax)
081b747a +0x0f9:  mov    0x8(%ebp),%eax
081b747d +0x0fc:  add    $0xc,%eax
081b7480 +0x0ff:  movl   $0x1e,0x8(%esp)
081b7488 +0x107:  movl   $0x0,0x4(%esp)
081b7490 +0x10f:  mov    %eax,(%esp)
081b7493 +0x112:  call   0807dcc0 <_init+0x5b8>
081b7498 +0x117:  leave
081b7499 +0x118:  ret
081b749a +0x119:  push   %ebp
081b749b +0x11a:  mov    %esp,%ebp
081b749d +0x11c:  push   %ebx
081b749e +0x11d:  sub    $0x14,%esp
081b74a1 +0x120:  mov    0x8(%ebp),%ebx
081b74a4 +0x123:  mov    0xc(%ebp),%eax
081b74a7 +0x126:  mov    %eax,0x4(%esp)
081b74ab +0x12a:  mov    %ebx,(%esp)
081b74ae +0x12d:  call   081b772c <+0x3ab>
081b74b3 +0x132:  sub    $0x4,%esp
081b74b6 +0x135:  mov    %ebx,%eax
081b74b8 +0x137:  mov    -0x4(%ebp),%ebx
081b74bb +0x13a:  leave
081b74bc +0x13b:  ret    $0x4
081b74bf +0x13e:  nop
081b74c0 +0x13f:  push   %ebp
081b74c1 +0x140:  mov    %esp,%ebp
081b74c3 +0x142:  push   %ebx
081b74c4 +0x143:  sub    $0x14,%esp
081b74c7 +0x146:  mov    0x8(%ebp),%ebx
081b74ca +0x149:  mov    0xc(%ebp),%eax
081b74cd +0x14c:  mov    %eax,0x4(%esp)
081b74d1 +0x150:  mov    %ebx,(%esp)
081b74d4 +0x153:  call   081b7752 <+0x3d1>
081b74d9 +0x158:  sub    $0x4,%esp
081b74dc +0x15b:  mov    %ebx,%eax
081b74de +0x15d:  mov    -0x4(%ebp),%ebx
081b74e1 +0x160:  leave
081b74e2 +0x161:  ret    $0x4
081b74e5 +0x164:  nop
081b74e6 +0x165:  push   %ebp
081b74e7 +0x166:  mov    %esp,%ebp
081b74e9 +0x168:  mov    0x8(%ebp),%eax
081b74ec +0x16b:  mov    (%eax),%edx
081b74ee +0x16d:  mov    0xc(%ebp),%eax
081b74f1 +0x170:  mov    (%eax),%eax
081b74f3 +0x172:  cmp    %eax,%edx
081b74f5 +0x174:  setne  %al
081b74f8 +0x177:  pop    %ebp
081b74f9 +0x178:  ret
081b74fa +0x179:  push   %ebp
081b74fb +0x17a:  mov    %esp,%ebp
081b74fd +0x17c:  push   %ebx
081b74fe +0x17d:  sub    $0x14,%esp
081b7501 +0x180:  mov    0x8(%ebp),%ebx
081b7504 +0x183:  mov    0xc(%ebp),%eax
081b7507 +0x186:  movl   $0x4,0x8(%esp)
081b750f +0x18e:  mov    %eax,0x4(%esp)
081b7513 +0x192:  mov    %ebx,(%esp)
081b7516 +0x195:  call   0807d880 <_init+0x178>
081b751b +0x19a:  mov    0xc(%ebp),%eax
081b751e +0x19d:  mov    (%eax),%eax
081b7520 +0x19f:  mov    %eax,(%esp)
081b7523 +0x1a2:  call   086df800 <_ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base*)
081b7528 +0x1a7:  mov    0xc(%ebp),%edx
081b752b +0x1aa:  mov    %eax,(%edx)
081b752d +0x1ac:  mov    %ebx,%eax
081b752f +0x1ae:  add    $0x14,%esp
081b7532 +0x1b1:  pop    %ebx
081b7533 +0x1b2:  pop    %ebp
081b7534 +0x1b3:  ret    $0x4
081b7537 +0x1b6:  nop
081b7538 +0x1b7:  push   %ebp
081b7539 +0x1b8:  mov    %esp,%ebp
081b753b +0x1ba:  mov    0x8(%ebp),%eax
081b753e +0x1bd:  mov    (%eax),%eax
081b7540 +0x1bf:  add    $0x10,%eax
081b7543 +0x1c2:  pop    %ebp
081b7544 +0x1c3:  ret
081b7545 +0x1c4:  nop
081b7546 +0x1c5:  push   %ebp
081b7547 +0x1c6:  mov    %esp,%ebp
081b7549 +0x1c8:  sub    $0x28,%esp
081b754c +0x1cb:  lea    -0x10(%ebp),%eax
081b754f +0x1ce:  mov    0x8(%ebp),%edx
081b7552 +0x1d1:  mov    %edx,0x4(%esp)
081b7556 +0x1d5:  mov    %eax,(%esp)
081b7559 +0x1d8:  call   081b7778 <+0x3f7>
081b755e +0x1dd:  sub    $0x4,%esp
081b7561 +0x1e0:  lea    -0xc(%ebp),%eax
081b7564 +0x1e3:  mov    0x8(%ebp),%edx
081b7567 +0x1e6:  mov    %edx,0x4(%esp)
081b756b +0x1ea:  mov    %eax,(%esp)
081b756e +0x1ed:  call   081b77a4 <+0x423>
081b7573 +0x1f2:  sub    $0x4,%esp
081b7576 +0x1f5:  lea    -0x10(%ebp),%eax
081b7579 +0x1f8:  mov    %eax,0x4(%esp)
081b757d +0x1fc:  lea    -0xc(%ebp),%eax
081b7580 +0x1ff:  mov    %eax,(%esp)
081b7583 +0x202:  call   081b77cf <+0x44e>
081b7588 +0x207:  leave
081b7589 +0x208:  ret
081b758a +0x209:  push   %ebp
081b758b +0x20a:  mov    %esp,%ebp
081b758d +0x20c:  push   %ebx
081b758e +0x20d:  sub    $0x14,%esp
081b7591 +0x210:  mov    0x8(%ebp),%ebx
081b7594 +0x213:  mov    0xc(%ebp),%eax
081b7597 +0x216:  mov    %eax,0x4(%esp)
081b759b +0x21a:  mov    %ebx,(%esp)
081b759e +0x21d:  call   081b77fc <+0x47b>
081b75a3 +0x222:  mov    %ebx,%eax
081b75a5 +0x224:  add    $0x14,%esp
081b75a8 +0x227:  pop    %ebx
081b75a9 +0x228:  pop    %ebp
081b75aa +0x229:  ret    $0x4
081b75ad +0x22c:  nop
081b75ae +0x22d:  push   %ebp
081b75af +0x22e:  mov    %esp,%ebp
081b75b1 +0x230:  push   %ebx
081b75b2 +0x231:  sub    $0x14,%esp
081b75b5 +0x234:  mov    0x8(%ebp),%ebx
081b75b8 +0x237:  mov    0xc(%ebp),%eax
081b75bb +0x23a:  add    $0x4,%eax
081b75be +0x23d:  mov    %eax,0x4(%esp)
081b75c2 +0x241:  mov    %ebx,(%esp)
081b75c5 +0x244:  call   081b77fc <+0x47b>
081b75ca +0x249:  mov    %ebx,%eax
081b75cc +0x24b:  add    $0x14,%esp
081b75cf +0x24e:  pop    %ebx
081b75d0 +0x24f:  pop    %ebp
081b75d1 +0x250:  ret    $0x4
081b75d4 +0x253:  push   %ebp
081b75d5 +0x254:  mov    %esp,%ebp
081b75d7 +0x256:  push   %ebx
081b75d8 +0x257:  sub    $0x14,%esp
081b75db +0x25a:  mov    0x8(%ebp),%eax
081b75de +0x25d:  mov    %eax,(%esp)
081b75e1 +0x260:  call   081b780c <+0x48b>
081b75e6 +0x265:  mov    (%eax),%ebx
081b75e8 +0x267:  mov    0xc(%ebp),%eax
081b75eb +0x26a:  mov    %eax,(%esp)
081b75ee +0x26d:  call   081b780c <+0x48b>
081b75f3 +0x272:  mov    (%eax),%eax
081b75f5 +0x274:  cmp    %eax,%ebx
081b75f7 +0x276:  setne  %al
081b75fa +0x279:  add    $0x14,%esp
081b75fd +0x27c:  pop    %ebx
081b75fe +0x27d:  pop    %ebp
081b75ff +0x27e:  ret
081b7600 +0x27f:  push   %ebp
081b7601 +0x280:  mov    %esp,%ebp
081b7603 +0x282:  push   %ebx
081b7604 +0x283:  sub    $0x24,%esp
081b7607 +0x286:  mov    0x8(%ebp),%ebx
081b760a +0x289:  mov    0xc(%ebp),%eax
081b760d +0x28c:  mov    (%eax),%eax
081b760f +0x28e:  mov    %eax,-0xc(%ebp)
081b7612 +0x291:  lea    -0xc(%ebp),%edx
081b7615 +0x294:  lea    0x2c(%eax),%ecx
081b7618 +0x297:  mov    0xc(%ebp),%eax
081b761b +0x29a:  mov    %ecx,(%eax)
081b761d +0x29c:  mov    %edx,0x4(%esp)
081b7621 +0x2a0:  mov    %ebx,(%esp)
081b7624 +0x2a3:  call   081b77fc <+0x47b>
081b7629 +0x2a8:  mov    %ebx,%eax
081b762b +0x2aa:  add    $0x24,%esp
081b762e +0x2ad:  pop    %ebx
081b762f +0x2ae:  pop    %ebp
081b7630 +0x2af:  ret    $0x4
081b7633 +0x2b2:  nop
081b7634 +0x2b3:  push   %ebp
081b7635 +0x2b4:  mov    %esp,%ebp
081b7637 +0x2b6:  mov    0x8(%ebp),%eax
081b763a +0x2b9:  mov    (%eax),%eax
081b763c +0x2bb:  pop    %ebp
081b763d +0x2bc:  ret
081b763e +0x2bd:  push   %ebp
081b763f +0x2be:  mov    %esp,%ebp
081b7641 +0x2c0:  sub    $0x18,%esp
081b7644 +0x2c3:  mov    0x8(%ebp),%eax
081b7647 +0x2c6:  mov    0xc(%ebp),%edx
081b764a +0x2c9:  mov    %edx,0x8(%esp)
081b764e +0x2cd:  movl   $0x1e,0x4(%esp)
081b7656 +0x2d5:  mov    %eax,(%esp)
081b7659 +0x2d8:  call   08ad463f <_Z9ss_strcpyPcjPKc>  ; ss_strcpy(char*, unsigned int, char const*)
081b765e +0x2dd:  leave
081b765f +0x2de:  ret
081b7660 +0x2df:  push   %ebp
081b7661 +0x2e0:  mov    %esp,%ebp
081b7663 +0x2e2:  sub    $0x28,%esp
081b7666 +0x2e5:  mov    0x8(%ebp),%eax
081b7669 +0x2e8:  mov    0x4(%eax),%edx
081b766c +0x2eb:  mov    0x8(%ebp),%eax
081b766f +0x2ee:  mov    0x8(%eax),%eax
081b7672 +0x2f1:  cmp    %eax,%edx
081b7674 +0x2f3:  je     081b76a3 <+0x322>
081b7676 +0x2f5:  mov    0x8(%ebp),%eax
081b7679 +0x2f8:  mov    0x4(%eax),%edx
081b767c +0x2fb:  mov    0x8(%ebp),%eax
081b767f +0x2fe:  mov    0xc(%ebp),%ecx
081b7682 +0x301:  mov    %ecx,0x8(%esp)
081b7686 +0x305:  mov    %edx,0x4(%esp)
081b768a +0x309:  mov    %eax,(%esp)
081b768d +0x30c:  call   081b7814 <+0x493>
081b7692 +0x311:  mov    0x8(%ebp),%eax
081b7695 +0x314:  mov    0x4(%eax),%eax
081b7698 +0x317:  lea    0x2c(%eax),%edx
081b769b +0x31a:  mov    0x8(%ebp),%eax
081b769e +0x31d:  mov    %edx,0x4(%eax)
081b76a1 +0x320:  jmp    081b76d1 <+0x350>
081b76a3 +0x322:  lea    -0xc(%ebp),%eax
081b76a6 +0x325:  mov    0x8(%ebp),%edx
081b76a9 +0x328:  mov    %edx,0x4(%esp)
081b76ad +0x32c:  mov    %eax,(%esp)
081b76b0 +0x32f:  call   081b75ae <+0x22d>
081b76b5 +0x334:  sub    $0x4,%esp
081b76b8 +0x337:  mov    0xc(%ebp),%eax
081b76bb +0x33a:  mov    %eax,0x8(%esp)
081b76bf +0x33e:  mov    -0xc(%ebp),%eax
081b76c2 +0x341:  mov    %eax,0x4(%esp)
081b76c6 +0x345:  mov    0x8(%ebp),%eax
081b76c9 +0x348:  mov    %eax,(%esp)
081b76cc +0x34b:  call   081b787a <+0x4f9>
081b76d1 +0x350:  leave
081b76d2 +0x351:  ret
081b76d3 +0x352:  nop
081b76d4 +0x353:  push   %ebp
081b76d5 +0x354:  mov    %esp,%ebp
081b76d7 +0x356:  mov    0x8(%ebp),%eax
081b76da +0x359:  mov    0x4(%eax),%eax
081b76dd +0x35c:  mov    %eax,%edx
081b76df +0x35e:  mov    0x8(%ebp),%eax
081b76e2 +0x361:  mov    (%eax),%eax
081b76e4 +0x363:  mov    %edx,%ecx
081b76e6 +0x365:  sub    %eax,%ecx
081b76e8 +0x367:  mov    %ecx,%eax
081b76ea +0x369:  sar    $0x2,%eax
081b76ed +0x36c:  imul   $0xba2e8ba3,%eax,%eax
081b76f3 +0x372:  pop    %ebp
081b76f4 +0x373:  ret
081b76f5 +0x374:  nop
081b76f6 +0x375:  push   %ebp
081b76f7 +0x376:  mov    %esp,%ebp
081b76f9 +0x378:  mov    0x8(%ebp),%eax
081b76fc +0x37b:  mov    (%eax),%edx
081b76fe +0x37d:  mov    0xc(%ebp),%eax
081b7701 +0x380:  imul   $0x2c,%eax,%eax
081b7704 +0x383:  lea    (%edx,%eax,1),%eax
081b7707 +0x386:  pop    %ebp
081b7708 +0x387:  ret
081b7709 +0x388:  nop
081b770a +0x389:  push   %ebp
081b770b +0x38a:  mov    %esp,%ebp
081b770d +0x38c:  mov    0x8(%ebp),%eax
081b7710 +0x38f:  pop    %ebp
081b7711 +0x390:  ret
081b7712 +0x391:  push   %ebp
081b7713 +0x392:  mov    %esp,%ebp
081b7715 +0x394:  sub    $0x18,%esp
081b7718 +0x397:  mov    0xc(%ebp),%eax
081b771b +0x39a:  mov    %eax,0x4(%esp)
081b771f +0x39e:  mov    0x8(%ebp),%eax
081b7722 +0x3a1:  mov    %eax,(%esp)
081b7725 +0x3a4:  call   081b7bb7 <+0x836>
081b772a +0x3a9:  leave
081b772b +0x3aa:  ret
081b772c +0x3ab:  push   %ebp
081b772d +0x3ac:  mov    %esp,%ebp
081b772f +0x3ae:  push   %ebx
081b7730 +0x3af:  sub    $0x14,%esp
081b7733 +0x3b2:  mov    0x8(%ebp),%ebx
081b7736 +0x3b5:  mov    0xc(%ebp),%eax
081b7739 +0x3b8:  mov    0xc(%eax),%eax
081b773c +0x3bb:  mov    %eax,0x4(%esp)
081b7740 +0x3bf:  mov    %ebx,(%esp)
081b7743 +0x3c2:  call   081b7bd2 <+0x851>
081b7748 +0x3c7:  mov    %ebx,%eax
081b774a +0x3c9:  add    $0x14,%esp
081b774d +0x3cc:  pop    %ebx
081b774e +0x3cd:  pop    %ebp
081b774f +0x3ce:  ret    $0x4
081b7752 +0x3d1:  push   %ebp
081b7753 +0x3d2:  mov    %esp,%ebp
081b7755 +0x3d4:  push   %ebx
081b7756 +0x3d5:  sub    $0x14,%esp
081b7759 +0x3d8:  mov    0x8(%ebp),%ebx
081b775c +0x3db:  mov    0xc(%ebp),%eax
081b775f +0x3de:  add    $0x4,%eax
081b7762 +0x3e1:  mov    %eax,0x4(%esp)
081b7766 +0x3e5:  mov    %ebx,(%esp)
081b7769 +0x3e8:  call   081b7bd2 <+0x851>
081b776e +0x3ed:  mov    %ebx,%eax
081b7770 +0x3ef:  add    $0x14,%esp
081b7773 +0x3f2:  pop    %ebx
081b7774 +0x3f3:  pop    %ebp
081b7775 +0x3f4:  ret    $0x4
081b7778 +0x3f7:  push   %ebp
081b7779 +0x3f8:  mov    %esp,%ebp
081b777b +0x3fa:  push   %ebx
081b777c +0x3fb:  sub    $0x24,%esp
081b777f +0x3fe:  mov    0x8(%ebp),%ebx
081b7782 +0x401:  mov    0xc(%ebp),%eax
081b7785 +0x404:  mov    0x4(%eax),%eax
081b7788 +0x407:  mov    %eax,-0xc(%ebp)
081b778b +0x40a:  lea    -0xc(%ebp),%eax
081b778e +0x40d:  mov    %eax,0x4(%esp)
081b7792 +0x411:  mov    %ebx,(%esp)
081b7795 +0x414:  call   081b7be0 <+0x85f>
081b779a +0x419:  mov    %ebx,%eax
081b779c +0x41b:  add    $0x24,%esp
081b779f +0x41e:  pop    %ebx
081b77a0 +0x41f:  pop    %ebp
081b77a1 +0x420:  ret    $0x4
081b77a4 +0x423:  push   %ebp
081b77a5 +0x424:  mov    %esp,%ebp
081b77a7 +0x426:  push   %ebx
081b77a8 +0x427:  sub    $0x24,%esp
081b77ab +0x42a:  mov    0x8(%ebp),%ebx
081b77ae +0x42d:  mov    0xc(%ebp),%eax
081b77b1 +0x430:  mov    (%eax),%eax
081b77b3 +0x432:  mov    %eax,-0xc(%ebp)
081b77b6 +0x435:  lea    -0xc(%ebp),%eax
081b77b9 +0x438:  mov    %eax,0x4(%esp)
081b77bd +0x43c:  mov    %ebx,(%esp)
081b77c0 +0x43f:  call   081b7be0 <+0x85f>
081b77c5 +0x444:  mov    %ebx,%eax
081b77c7 +0x446:  add    $0x24,%esp
081b77ca +0x449:  pop    %ebx
081b77cb +0x44a:  pop    %ebp
081b77cc +0x44b:  ret    $0x4
081b77cf +0x44e:  push   %ebp
081b77d0 +0x44f:  mov    %esp,%ebp
081b77d2 +0x451:  push   %ebx
081b77d3 +0x452:  sub    $0x14,%esp
081b77d6 +0x455:  mov    0x8(%ebp),%eax
081b77d9 +0x458:  mov    %eax,(%esp)
081b77dc +0x45b:  call   081b7bf0 <+0x86f>
081b77e1 +0x460:  mov    (%eax),%ebx
081b77e3 +0x462:  mov    0xc(%ebp),%eax
081b77e6 +0x465:  mov    %eax,(%esp)
081b77e9 +0x468:  call   081b7bf0 <+0x86f>
081b77ee +0x46d:  mov    (%eax),%eax
081b77f0 +0x46f:  cmp    %eax,%ebx
081b77f2 +0x471:  sete   %al
081b77f5 +0x474:  add    $0x14,%esp
081b77f8 +0x477:  pop    %ebx
081b77f9 +0x478:  pop    %ebp
081b77fa +0x479:  ret
081b77fb +0x47a:  nop
081b77fc +0x47b:  push   %ebp
081b77fd +0x47c:  mov    %esp,%ebp
081b77ff +0x47e:  mov    0xc(%ebp),%eax
081b7802 +0x481:  mov    (%eax),%edx
081b7804 +0x483:  mov    0x8(%ebp),%eax
081b7807 +0x486:  mov    %edx,(%eax)
081b7809 +0x488:  pop    %ebp
081b780a +0x489:  ret
081b780b +0x48a:  nop
081b780c +0x48b:  push   %ebp
081b780d +0x48c:  mov    %esp,%ebp
081b780f +0x48e:  mov    0x8(%ebp),%eax
081b7812 +0x491:  pop    %ebp
081b7813 +0x492:  ret
081b7814 +0x493:  push   %ebp
081b7815 +0x494:  mov    %esp,%ebp
081b7817 +0x496:  sub    $0x18,%esp
081b781a +0x499:  mov    0xc(%ebp),%eax
081b781d +0x49c:  mov    %eax,0x4(%esp)
081b7821 +0x4a0:  movl   $0x2c,(%esp)
081b7828 +0x4a7:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
081b782d +0x4ac:  mov    %eax,%edx
081b782f +0x4ae:  test   %edx,%edx
081b7831 +0x4b0:  je     081b7878 <+0x4f7>
081b7833 +0x4b2:  mov    0x10(%ebp),%edx
081b7836 +0x4b5:  mov    (%edx),%ecx
081b7838 +0x4b7:  mov    %ecx,(%eax)
081b783a +0x4b9:  mov    0x4(%edx),%ecx
081b783d +0x4bc:  mov    %ecx,0x4(%eax)
081b7840 +0x4bf:  mov    0x8(%edx),%ecx
081b7843 +0x4c2:  mov    %ecx,0x8(%eax)
081b7846 +0x4c5:  mov    0xc(%edx),%ecx
081b7849 +0x4c8:  mov    %ecx,0xc(%eax)
081b784c +0x4cb:  mov    0x10(%edx),%ecx
081b784f +0x4ce:  mov    %ecx,0x10(%eax)
081b7852 +0x4d1:  mov    0x14(%edx),%ecx
081b7855 +0x4d4:  mov    %ecx,0x14(%eax)
081b7858 +0x4d7:  mov    0x18(%edx),%ecx
081b785b +0x4da:  mov    %ecx,0x18(%eax)
081b785e +0x4dd:  mov    0x1c(%edx),%ecx
081b7861 +0x4e0:  mov    %ecx,0x1c(%eax)
081b7864 +0x4e3:  mov    0x20(%edx),%ecx
081b7867 +0x4e6:  mov    %ecx,0x20(%eax)
081b786a +0x4e9:  mov    0x24(%edx),%ecx
081b786d +0x4ec:  mov    %ecx,0x24(%eax)
081b7870 +0x4ef:  movzwl 0x28(%edx),%edx
081b7874 +0x4f3:  mov    %dx,0x28(%eax)
081b7878 +0x4f7:  leave
081b7879 +0x4f8:  ret
081b787a +0x4f9:  push   %ebp
081b787b +0x4fa:  mov    %esp,%ebp
081b787d +0x4fc:  push   %esi
081b787e +0x4fd:  push   %ebx
081b787f +0x4fe:  sub    $0x50,%esp
081b7882 +0x501:  mov    0x8(%ebp),%eax
081b7885 +0x504:  mov    0x4(%eax),%edx
081b7888 +0x507:  mov    0x8(%ebp),%eax
081b788b +0x50a:  mov    0x8(%eax),%eax
081b788e +0x50d:  cmp    %eax,%edx
081b7890 +0x50f:  je     081b797d <+0x5fc>
081b7896 +0x515:  mov    0x8(%ebp),%eax
081b7899 +0x518:  mov    0x4(%eax),%eax
081b789c +0x51b:  sub    $0x2c,%eax
081b789f +0x51e:  mov    %eax,(%esp)
081b78a2 +0x521:  call   081b7bf8 <+0x877>
081b78a7 +0x526:  mov    0x8(%ebp),%edx
081b78aa +0x529:  mov    0x4(%edx),%ecx
081b78ad +0x52c:  mov    0x8(%ebp),%edx
081b78b0 +0x52f:  mov    %eax,0x8(%esp)
081b78b4 +0x533:  mov    %ecx,0x4(%esp)
081b78b8 +0x537:  mov    %edx,(%esp)
081b78bb +0x53a:  call   081b7c00 <+0x87f>
081b78c0 +0x53f:  mov    0x8(%ebp),%eax
081b78c3 +0x542:  mov    0x4(%eax),%eax
081b78c6 +0x545:  lea    0x2c(%eax),%edx
081b78c9 +0x548:  mov    0x8(%ebp),%eax
081b78cc +0x54b:  mov    %edx,0x4(%eax)
081b78cf +0x54e:  mov    0x8(%ebp),%eax
081b78d2 +0x551:  mov    0x4(%eax),%eax
081b78d5 +0x554:  lea    -0x2c(%eax),%esi
081b78d8 +0x557:  mov    0x8(%ebp),%eax
081b78db +0x55a:  mov    0x4(%eax),%eax
081b78de +0x55d:  lea    -0x58(%eax),%ebx
081b78e1 +0x560:  lea    0xc(%ebp),%eax
081b78e4 +0x563:  mov    %eax,(%esp)
081b78e7 +0x566:  call   081b780c <+0x48b>
081b78ec +0x56b:  mov    (%eax),%eax
081b78ee +0x56d:  mov    %esi,0x8(%esp)
081b78f2 +0x571:  mov    %ebx,0x4(%esp)
081b78f6 +0x575:  mov    %eax,(%esp)
081b78f9 +0x578:  call   081b7c75 <+0x8f4>
081b78fe +0x57d:  lea    0xc(%ebp),%eax
081b7901 +0x580:  mov    %eax,(%esp)
081b7904 +0x583:  call   081b7634 <+0x2b3>
081b7909 +0x588:  mov    %eax,%ebx
081b790b +0x58a:  mov    0x10(%ebp),%eax
081b790e +0x58d:  mov    %eax,(%esp)
081b7911 +0x590:  call   081b7cad <+0x92c>
081b7916 +0x595:  mov    (%eax),%edx
081b7918 +0x597:  mov    %edx,-0x48(%ebp)
081b791b +0x59a:  mov    0x4(%eax),%edx
081b791e +0x59d:  mov    %edx,-0x44(%ebp)
081b7921 +0x5a0:  mov    0x8(%eax),%edx
081b7924 +0x5a3:  mov    %edx,-0x40(%ebp)
081b7927 +0x5a6:  mov    0xc(%eax),%edx
081b792a +0x5a9:  mov    %edx,-0x3c(%ebp)
081b792d +0x5ac:  mov    0x10(%eax),%edx
081b7930 +0x5af:  mov    %edx,-0x38(%ebp)
081b7933 +0x5b2:  mov    0x14(%eax),%edx
081b7936 +0x5b5:  mov    %edx,-0x34(%ebp)
081b7939 +0x5b8:  mov    0x18(%eax),%edx
081b793c +0x5bb:  mov    %edx,-0x30(%ebp)
081b793f +0x5be:  mov    0x1c(%eax),%edx
081b7942 +0x5c1:  mov    %edx,-0x2c(%ebp)
081b7945 +0x5c4:  mov    0x20(%eax),%edx
081b7948 +0x5c7:  mov    %edx,-0x28(%ebp)
081b794b +0x5ca:  mov    0x24(%eax),%edx
081b794e +0x5cd:  mov    %edx,-0x24(%ebp)
081b7951 +0x5d0:  movzwl 0x28(%eax),%eax
081b7955 +0x5d4:  mov    %ax,-0x20(%ebp)
081b7959 +0x5d8:  lea    -0x48(%ebp),%eax
081b795c +0x5db:  cmp    %eax,%ebx
081b795e +0x5dd:  je     081b7b85 <+0x804>
081b7964 +0x5e3:  movl   $0x2a,0x8(%esp)
081b796c +0x5eb:  mov    %eax,0x4(%esp)
081b7970 +0x5ef:  mov    %ebx,(%esp)
081b7973 +0x5f2:  call   0807d8a0 <_init+0x198>
081b7978 +0x5f7:  jmp    081b7b85 <+0x804>
081b797d +0x5fc:  movl   $"vector::_M_insert_aux",0x8(%esp)
081b7985 +0x604:  movl   $0x1,0x4(%esp)
081b798d +0x60c:  mov    0x8(%ebp),%eax
081b7990 +0x60f:  mov    %eax,(%esp)
081b7993 +0x612:  call   081b7cb6 <+0x935>
081b7998 +0x617:  mov    %eax,-0x18(%ebp)
081b799b +0x61a:  lea    -0x1c(%ebp),%eax
081b799e +0x61d:  mov    0x8(%ebp),%edx
081b79a1 +0x620:  mov    %edx,0x4(%esp)
081b79a5 +0x624:  mov    %eax,(%esp)
081b79a8 +0x627:  call   081b758a <+0x209>
081b79ad +0x62c:  sub    $0x4,%esp
081b79b0 +0x62f:  lea    -0x1c(%ebp),%eax
081b79b3 +0x632:  mov    %eax,0x4(%esp)
081b79b7 +0x636:  lea    0xc(%ebp),%eax
081b79ba +0x639:  mov    %eax,(%esp)
081b79bd +0x63c:  call   081b7d5b <+0x9da>
081b79c2 +0x641:  mov    %eax,-0x14(%ebp)
081b79c5 +0x644:  mov    0x8(%ebp),%eax
081b79c8 +0x647:  mov    -0x18(%ebp),%edx
081b79cb +0x64a:  mov    %edx,0x4(%esp)
081b79cf +0x64e:  mov    %eax,(%esp)
081b79d2 +0x651:  call   081b7d94 <+0xa13>
081b79d7 +0x656:  mov    %eax,-0x10(%ebp)
081b79da +0x659:  mov    -0x10(%ebp),%eax
081b79dd +0x65c:  mov    %eax,-0xc(%ebp)
081b79e0 +0x65f:  mov    0x10(%ebp),%eax
081b79e3 +0x662:  mov    %eax,(%esp)
081b79e6 +0x665:  call   081b7cad <+0x92c>
081b79eb +0x66a:  mov    -0x14(%ebp),%edx
081b79ee +0x66d:  imul   $0x2c,%edx,%edx
081b79f1 +0x670:  mov    %edx,%ecx
081b79f3 +0x672:  add    -0x10(%ebp),%ecx
081b79f6 +0x675:  mov    0x8(%ebp),%edx
081b79f9 +0x678:  mov    %eax,0x8(%esp)
081b79fd +0x67c:  mov    %ecx,0x4(%esp)
081b7a01 +0x680:  mov    %edx,(%esp)
081b7a04 +0x683:  call   081b7814 <+0x493>
081b7a09 +0x688:  movl   $0x0,-0xc(%ebp)
081b7a10 +0x68f:  mov    0x8(%ebp),%eax
081b7a13 +0x692:  mov    %eax,(%esp)
081b7a16 +0x695:  call   081b770a <+0x389>
081b7a1b +0x69a:  mov    %eax,%ebx
081b7a1d +0x69c:  lea    0xc(%ebp),%eax
081b7a20 +0x69f:  mov    %eax,(%esp)
081b7a23 +0x6a2:  call   081b780c <+0x48b>
081b7a28 +0x6a7:  mov    (%eax),%edx
081b7a2a +0x6a9:  mov    0x8(%ebp),%eax
081b7a2d +0x6ac:  mov    (%eax),%eax
081b7a2f +0x6ae:  mov    %ebx,0xc(%esp)
081b7a33 +0x6b2:  mov    -0x10(%ebp),%ecx
081b7a36 +0x6b5:  mov    %ecx,0x8(%esp)
081b7a3a +0x6b9:  mov    %edx,0x4(%esp)
081b7a3e +0x6bd:  mov    %eax,(%esp)
081b7a41 +0x6c0:  call   081b7dc3 <+0xa42>
081b7a46 +0x6c5:  mov    %eax,-0xc(%ebp)
081b7a49 +0x6c8:  addl   $0x2c,-0xc(%ebp)
081b7a4d +0x6cc:  mov    0x8(%ebp),%eax
081b7a50 +0x6cf:  mov    %eax,(%esp)
081b7a53 +0x6d2:  call   081b770a <+0x389>
081b7a58 +0x6d7:  mov    %eax,%ebx
081b7a5a +0x6d9:  mov    0x8(%ebp),%eax
081b7a5d +0x6dc:  mov    0x4(%eax),%esi
081b7a60 +0x6df:  lea    0xc(%ebp),%eax
081b7a63 +0x6e2:  mov    %eax,(%esp)
081b7a66 +0x6e5:  call   081b780c <+0x48b>
081b7a6b +0x6ea:  mov    (%eax),%eax
081b7a6d +0x6ec:  mov    %ebx,0xc(%esp)
081b7a71 +0x6f0:  mov    -0xc(%ebp),%edx
081b7a74 +0x6f3:  mov    %edx,0x8(%esp)
081b7a78 +0x6f7:  mov    %esi,0x4(%esp)
081b7a7c +0x6fb:  mov    %eax,(%esp)
081b7a7f +0x6fe:  call   081b7dc3 <+0xa42>
081b7a84 +0x703:  mov    %eax,-0xc(%ebp)
081b7a87 +0x706:  mov    0x8(%ebp),%eax
081b7a8a +0x709:  mov    %eax,(%esp)
081b7a8d +0x70c:  call   081b770a <+0x389>
081b7a92 +0x711:  mov    0x8(%ebp),%edx
081b7a95 +0x714:  mov    0x4(%edx),%ecx
081b7a98 +0x717:  mov    0x8(%ebp),%edx
081b7a9b +0x71a:  mov    (%edx),%edx
081b7a9d +0x71c:  mov    %eax,0x8(%esp)
081b7aa1 +0x720:  mov    %ecx,0x4(%esp)
081b7aa5 +0x724:  mov    %edx,(%esp)
081b7aa8 +0x727:  call   081b7712 <+0x391>
081b7aad +0x72c:  mov    0x8(%ebp),%eax
081b7ab0 +0x72f:  mov    0x8(%eax),%eax
081b7ab3 +0x732:  mov    %eax,%edx
081b7ab5 +0x734:  mov    0x8(%ebp),%eax
081b7ab8 +0x737:  mov    (%eax),%eax
081b7aba +0x739:  mov    %edx,%ecx
081b7abc +0x73b:  sub    %eax,%ecx
081b7abe +0x73d:  mov    %ecx,%eax
081b7ac0 +0x73f:  sar    $0x2,%eax
081b7ac3 +0x742:  imul   $0xba2e8ba3,%eax,%eax
081b7ac9 +0x748:  mov    %eax,%ecx
081b7acb +0x74a:  mov    0x8(%ebp),%eax
081b7ace +0x74d:  mov    (%eax),%edx
081b7ad0 +0x74f:  mov    0x8(%ebp),%eax
081b7ad3 +0x752:  mov    %ecx,0x8(%esp)
081b7ad7 +0x756:  mov    %edx,0x4(%esp)
081b7adb +0x75a:  mov    %eax,(%esp)
081b7ade +0x75d:  call   081b7b90 <+0x80f>
081b7ae3 +0x762:  mov    0x8(%ebp),%eax
081b7ae6 +0x765:  mov    -0x10(%ebp),%edx
081b7ae9 +0x768:  mov    %edx,(%eax)
081b7aeb +0x76a:  mov    0x8(%ebp),%eax
081b7aee +0x76d:  mov    -0xc(%ebp),%edx
081b7af1 +0x770:  mov    %edx,0x4(%eax)
081b7af4 +0x773:  mov    -0x18(%ebp),%eax
081b7af7 +0x776:  imul   $0x2c,%eax,%eax
081b7afa +0x779:  mov    %eax,%edx
081b7afc +0x77b:  add    -0x10(%ebp),%edx
081b7aff +0x77e:  mov    0x8(%ebp),%eax
081b7b02 +0x781:  mov    %edx,0x8(%eax)
081b7b05 +0x784:  jmp    081b7b85 <+0x804>
081b7b07 +0x786:  mov    %eax,(%esp)
081b7b0a +0x789:  call   08725ce0 <__cxa_begin_catch>
081b7b0f +0x78e:  cmpl   $0x0,-0xc(%ebp)
081b7b13 +0x792:  jne    081b7b31 <+0x7b0>
081b7b15 +0x794:  mov    -0x14(%ebp),%eax
081b7b18 +0x797:  imul   $0x2c,%eax,%eax
081b7b1b +0x79a:  mov    %eax,%edx
081b7b1d +0x79c:  add    -0x10(%ebp),%edx
081b7b20 +0x79f:  mov    0x8(%ebp),%eax
081b7b23 +0x7a2:  mov    %edx,0x4(%esp)
081b7b27 +0x7a6:  mov    %eax,(%esp)
081b7b2a +0x7a9:  call   081b7e1c <+0xa9b>
081b7b2f +0x7ae:  jmp    081b7b52 <+0x7d1>
081b7b31 +0x7b0:  mov    0x8(%ebp),%eax
081b7b34 +0x7b3:  mov    %eax,(%esp)
081b7b37 +0x7b6:  call   081b770a <+0x389>
081b7b3c +0x7bb:  mov    %eax,0x8(%esp)
081b7b40 +0x7bf:  mov    -0xc(%ebp),%eax
081b7b43 +0x7c2:  mov    %eax,0x4(%esp)
081b7b47 +0x7c6:  mov    -0x10(%ebp),%eax
081b7b4a +0x7c9:  mov    %eax,(%esp)
081b7b4d +0x7cc:  call   081b7712 <+0x391>
081b7b52 +0x7d1:  mov    0x8(%ebp),%eax
081b7b55 +0x7d4:  mov    -0x18(%ebp),%edx
081b7b58 +0x7d7:  mov    %edx,0x8(%esp)
081b7b5c +0x7db:  mov    -0x10(%ebp),%edx
081b7b5f +0x7de:  mov    %edx,0x4(%esp)
081b7b63 +0x7e2:  mov    %eax,(%esp)
081b7b66 +0x7e5:  call   081b7b90 <+0x80f>
081b7b6b +0x7ea:  call   08724be0 <__cxa_rethrow>
081b7b70 +0x7ef:  mov    %edx,%ebx
081b7b72 +0x7f1:  mov    %eax,%esi
081b7b74 +0x7f3:  call   08725c30 <__cxa_end_catch>
081b7b79 +0x7f8:  mov    %esi,%eax
081b7b7b +0x7fa:  mov    %ebx,%edx
081b7b7d +0x7fc:  mov    %eax,(%esp)
081b7b80 +0x7ff:  call   08ae3750 <_Unwind_Resume>
081b7b85 +0x804:  lea    -0x8(%ebp),%esp
081b7b88 +0x807:  add    $0x0,%esp
081b7b8b +0x80a:  pop    %ebx
081b7b8c +0x80b:  pop    %esi
081b7b8d +0x80c:  pop    %ebp
081b7b8e +0x80d:  ret
081b7b8f +0x80e:  nop
081b7b90 +0x80f:  push   %ebp
081b7b91 +0x810:  mov    %esp,%ebp
081b7b93 +0x812:  sub    $0x18,%esp
081b7b96 +0x815:  cmpl   $0x0,0xc(%ebp)
081b7b9a +0x819:  je     081b7bb5 <+0x834>
081b7b9c +0x81b:  mov    0x8(%ebp),%eax
081b7b9f +0x81e:  mov    0x10(%ebp),%edx
081b7ba2 +0x821:  mov    %edx,0x8(%esp)
081b7ba6 +0x825:  mov    0xc(%ebp),%edx
081b7ba9 +0x828:  mov    %edx,0x4(%esp)
081b7bad +0x82c:  mov    %eax,(%esp)
081b7bb0 +0x82f:  call   081b7e30 <+0xaaf>
081b7bb5 +0x834:  leave
081b7bb6 +0x835:  ret
081b7bb7 +0x836:  push   %ebp
081b7bb8 +0x837:  mov    %esp,%ebp
081b7bba +0x839:  sub    $0x18,%esp
081b7bbd +0x83c:  mov    0xc(%ebp),%eax
081b7bc0 +0x83f:  mov    %eax,0x4(%esp)
081b7bc4 +0x843:  mov    0x8(%ebp),%eax
081b7bc7 +0x846:  mov    %eax,(%esp)
081b7bca +0x849:  call   081b7e43 <+0xac2>
081b7bcf +0x84e:  leave
081b7bd0 +0x84f:  ret
081b7bd1 +0x850:  nop
081b7bd2 +0x851:  push   %ebp
081b7bd3 +0x852:  mov    %esp,%ebp
081b7bd5 +0x854:  mov    0xc(%ebp),%edx
081b7bd8 +0x857:  mov    0x8(%ebp),%eax
081b7bdb +0x85a:  mov    %edx,(%eax)
081b7bdd +0x85c:  pop    %ebp
081b7bde +0x85d:  ret
081b7bdf +0x85e:  nop
081b7be0 +0x85f:  push   %ebp
081b7be1 +0x860:  mov    %esp,%ebp
081b7be3 +0x862:  mov    0xc(%ebp),%eax
081b7be6 +0x865:  mov    (%eax),%edx
081b7be8 +0x867:  mov    0x8(%ebp),%eax
081b7beb +0x86a:  mov    %edx,(%eax)
081b7bed +0x86c:  pop    %ebp
081b7bee +0x86d:  ret
081b7bef +0x86e:  nop
081b7bf0 +0x86f:  push   %ebp
081b7bf1 +0x870:  mov    %esp,%ebp
081b7bf3 +0x872:  mov    0x8(%ebp),%eax
081b7bf6 +0x875:  pop    %ebp
081b7bf7 +0x876:  ret
081b7bf8 +0x877:  push   %ebp
081b7bf9 +0x878:  mov    %esp,%ebp
081b7bfb +0x87a:  mov    0x8(%ebp),%eax
081b7bfe +0x87d:  pop    %ebp
081b7bff +0x87e:  ret
081b7c00 +0x87f:  push   %ebp
081b7c01 +0x880:  mov    %esp,%ebp
081b7c03 +0x882:  push   %ebx
081b7c04 +0x883:  sub    $0x14,%esp
081b7c07 +0x886:  mov    0x10(%ebp),%eax
081b7c0a +0x889:  mov    %eax,(%esp)
081b7c0d +0x88c:  call   081b7e48 <+0xac7>
081b7c12 +0x891:  mov    %eax,%ebx
081b7c14 +0x893:  mov    0xc(%ebp),%eax
081b7c17 +0x896:  mov    %eax,0x4(%esp)
081b7c1b +0x89a:  movl   $0x2c,(%esp)
081b7c22 +0x8a1:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
081b7c27 +0x8a6:  mov    %eax,%edx
081b7c29 +0x8a8:  test   %edx,%edx
081b7c2b +0x8aa:  je     081b7c6f <+0x8ee>
081b7c2d +0x8ac:  mov    (%ebx),%edx
081b7c2f +0x8ae:  mov    %edx,(%eax)
081b7c31 +0x8b0:  mov    0x4(%ebx),%edx
081b7c34 +0x8b3:  mov    %edx,0x4(%eax)
081b7c37 +0x8b6:  mov    0x8(%ebx),%edx
081b7c3a +0x8b9:  mov    %edx,0x8(%eax)
081b7c3d +0x8bc:  mov    0xc(%ebx),%edx
081b7c40 +0x8bf:  mov    %edx,0xc(%eax)
081b7c43 +0x8c2:  mov    0x10(%ebx),%edx
081b7c46 +0x8c5:  mov    %edx,0x10(%eax)
081b7c49 +0x8c8:  mov    0x14(%ebx),%edx
081b7c4c +0x8cb:  mov    %edx,0x14(%eax)
081b7c4f +0x8ce:  mov    0x18(%ebx),%edx
081b7c52 +0x8d1:  mov    %edx,0x18(%eax)
081b7c55 +0x8d4:  mov    0x1c(%ebx),%edx
081b7c58 +0x8d7:  mov    %edx,0x1c(%eax)
081b7c5b +0x8da:  mov    0x20(%ebx),%edx
081b7c5e +0x8dd:  mov    %edx,0x20(%eax)
081b7c61 +0x8e0:  mov    0x24(%ebx),%edx
081b7c64 +0x8e3:  mov    %edx,0x24(%eax)
081b7c67 +0x8e6:  movzwl 0x28(%ebx),%edx
081b7c6b +0x8ea:  mov    %dx,0x28(%eax)
081b7c6f +0x8ee:  add    $0x14,%esp
081b7c72 +0x8f1:  pop    %ebx
081b7c73 +0x8f2:  pop    %ebp
081b7c74 +0x8f3:  ret
081b7c75 +0x8f4:  push   %ebp
081b7c76 +0x8f5:  mov    %esp,%ebp
081b7c78 +0x8f7:  push   %ebx
081b7c79 +0x8f8:  sub    $0x14,%esp
081b7c7c +0x8fb:  mov    0xc(%ebp),%eax
081b7c7f +0x8fe:  mov    %eax,(%esp)
081b7c82 +0x901:  call   081b7e50 <+0xacf>
081b7c87 +0x906:  mov    %eax,%ebx
081b7c89 +0x908:  mov    0x8(%ebp),%eax
081b7c8c +0x90b:  mov    %eax,(%esp)
081b7c8f +0x90e:  call   081b7e50 <+0xacf>
081b7c94 +0x913:  mov    0x10(%ebp),%edx
081b7c97 +0x916:  mov    %edx,0x8(%esp)
081b7c9b +0x91a:  mov    %ebx,0x4(%esp)
081b7c9f +0x91e:  mov    %eax,(%esp)
081b7ca2 +0x921:  call   081b7e58 <+0xad7>
081b7ca7 +0x926:  add    $0x14,%esp
081b7caa +0x929:  pop    %ebx
081b7cab +0x92a:  pop    %ebp
081b7cac +0x92b:  ret
081b7cad +0x92c:  push   %ebp
081b7cae +0x92d:  mov    %esp,%ebp
081b7cb0 +0x92f:  mov    0x8(%ebp),%eax
081b7cb3 +0x932:  pop    %ebp
081b7cb4 +0x933:  ret
081b7cb5 +0x934:  nop
081b7cb6 +0x935:  push   %ebp
081b7cb7 +0x936:  mov    %esp,%ebp
081b7cb9 +0x938:  push   %ebx
081b7cba +0x939:  sub    $0x24,%esp
081b7cbd +0x93c:  mov    0x8(%ebp),%eax
081b7cc0 +0x93f:  mov    %eax,(%esp)
081b7cc3 +0x942:  call   081b7e9c <+0xb1b>
081b7cc8 +0x947:  mov    %eax,%ebx
081b7cca +0x949:  mov    0x8(%ebp),%eax
081b7ccd +0x94c:  mov    %eax,(%esp)
081b7cd0 +0x94f:  call   081b76d4 <+0x353>
081b7cd5 +0x954:  mov    %ebx,%edx
081b7cd7 +0x956:  sub    %eax,%edx
081b7cd9 +0x958:  mov    0xc(%ebp),%eax
081b7cdc +0x95b:  cmp    %eax,%edx
081b7cde +0x95d:  setb   %al
081b7ce1 +0x960:  test   %al,%al
081b7ce3 +0x962:  je     081b7cf0 <+0x96f>
081b7ce5 +0x964:  mov    0x10(%ebp),%eax
081b7ce8 +0x967:  mov    %eax,(%esp)
081b7ceb +0x96a:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
081b7cf0 +0x96f:  mov    0x8(%ebp),%eax
081b7cf3 +0x972:  mov    %eax,(%esp)
081b7cf6 +0x975:  call   081b76d4 <+0x353>
081b7cfb +0x97a:  mov    %eax,%ebx
081b7cfd +0x97c:  mov    0x8(%ebp),%eax
081b7d00 +0x97f:  mov    %eax,(%esp)
081b7d03 +0x982:  call   081b76d4 <+0x353>
081b7d08 +0x987:  mov    %eax,-0x10(%ebp)
081b7d0b +0x98a:  lea    0xc(%ebp),%eax
081b7d0e +0x98d:  mov    %eax,0x4(%esp)
081b7d12 +0x991:  lea    -0x10(%ebp),%eax
081b7d15 +0x994:  mov    %eax,(%esp)
081b7d18 +0x997:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
081b7d1d +0x99c:  mov    (%eax),%eax
081b7d1f +0x99e:  lea    (%ebx,%eax,1),%eax
081b7d22 +0x9a1:  mov    %eax,-0xc(%ebp)
081b7d25 +0x9a4:  mov    0x8(%ebp),%eax
081b7d28 +0x9a7:  mov    %eax,(%esp)
081b7d2b +0x9aa:  call   081b76d4 <+0x353>
081b7d30 +0x9af:  cmp    -0xc(%ebp),%eax
081b7d33 +0x9b2:  ja     081b7d45 <+0x9c4>
081b7d35 +0x9b4:  mov    0x8(%ebp),%eax
081b7d38 +0x9b7:  mov    %eax,(%esp)
081b7d3b +0x9ba:  call   081b7e9c <+0xb1b>
081b7d40 +0x9bf:  cmp    -0xc(%ebp),%eax
081b7d43 +0x9c2:  jae    081b7d52 <+0x9d1>
081b7d45 +0x9c4:  mov    0x8(%ebp),%eax
081b7d48 +0x9c7:  mov    %eax,(%esp)
081b7d4b +0x9ca:  call   081b7e9c <+0xb1b>
081b7d50 +0x9cf:  jmp    081b7d55 <+0x9d4>
081b7d52 +0x9d1:  mov    -0xc(%ebp),%eax
081b7d55 +0x9d4:  add    $0x24,%esp
081b7d58 +0x9d7:  pop    %ebx
081b7d59 +0x9d8:  pop    %ebp
081b7d5a +0x9d9:  ret
081b7d5b +0x9da:  push   %ebp
081b7d5c +0x9db:  mov    %esp,%ebp
081b7d5e +0x9dd:  push   %ebx
081b7d5f +0x9de:  sub    $0x14,%esp
081b7d62 +0x9e1:  mov    0x8(%ebp),%eax
081b7d65 +0x9e4:  mov    %eax,(%esp)
081b7d68 +0x9e7:  call   081b780c <+0x48b>
081b7d6d +0x9ec:  mov    (%eax),%eax
081b7d6f +0x9ee:  mov    %eax,%ebx
081b7d71 +0x9f0:  mov    0xc(%ebp),%eax
081b7d74 +0x9f3:  mov    %eax,(%esp)
081b7d77 +0x9f6:  call   081b780c <+0x48b>
081b7d7c +0x9fb:  mov    (%eax),%eax
081b7d7e +0x9fd:  mov    %ebx,%edx
081b7d80 +0x9ff:  sub    %eax,%edx
081b7d82 +0xa01:  mov    %edx,%eax
081b7d84 +0xa03:  sar    $0x2,%eax
081b7d87 +0xa06:  imul   $0xba2e8ba3,%eax,%eax
081b7d8d +0xa0c:  add    $0x14,%esp
081b7d90 +0xa0f:  pop    %ebx
081b7d91 +0xa10:  pop    %ebp
081b7d92 +0xa11:  ret
081b7d93 +0xa12:  nop
081b7d94 +0xa13:  push   %ebp
081b7d95 +0xa14:  mov    %esp,%ebp
081b7d97 +0xa16:  sub    $0x18,%esp
081b7d9a +0xa19:  cmpl   $0x0,0xc(%ebp)
081b7d9e +0xa1d:  je     081b7dbc <+0xa3b>
081b7da0 +0xa1f:  mov    0x8(%ebp),%eax
081b7da3 +0xa22:  movl   $0x0,0x8(%esp)
081b7dab +0xa2a:  mov    0xc(%ebp),%edx
081b7dae +0xa2d:  mov    %edx,0x4(%esp)
081b7db2 +0xa31:  mov    %eax,(%esp)
081b7db5 +0xa34:  call   081b7eb8 <+0xb37>
081b7dba +0xa39:  jmp    081b7dc1 <+0xa40>
081b7dbc +0xa3b:  mov    $0x0,%eax
081b7dc1 +0xa40:  leave
081b7dc2 +0xa41:  ret
081b7dc3 +0xa42:  push   %ebp
081b7dc4 +0xa43:  mov    %esp,%ebp
081b7dc6 +0xa45:  sub    $0x28,%esp
081b7dc9 +0xa48:  lea    -0x10(%ebp),%eax
081b7dcc +0xa4b:  lea    0xc(%ebp),%edx
081b7dcf +0xa4e:  mov    %edx,0x4(%esp)
081b7dd3 +0xa52:  mov    %eax,(%esp)
081b7dd6 +0xa55:  call   081b7ef0 <+0xb6f>
081b7ddb +0xa5a:  sub    $0x4,%esp
081b7dde +0xa5d:  lea    -0xc(%ebp),%eax
081b7de1 +0xa60:  lea    0x8(%ebp),%edx
081b7de4 +0xa63:  mov    %edx,0x4(%esp)
081b7de8 +0xa67:  mov    %eax,(%esp)
081b7deb +0xa6a:  call   081b7ef0 <+0xb6f>
081b7df0 +0xa6f:  sub    $0x4,%esp
081b7df3 +0xa72:  mov    0x14(%ebp),%eax
081b7df6 +0xa75:  mov    %eax,0xc(%esp)
081b7dfa +0xa79:  mov    0x10(%ebp),%eax
081b7dfd +0xa7c:  mov    %eax,0x8(%esp)
081b7e01 +0xa80:  mov    -0x10(%ebp),%eax
081b7e04 +0xa83:  mov    %eax,0x4(%esp)
081b7e08 +0xa87:  mov    -0xc(%ebp),%eax
081b7e0b +0xa8a:  mov    %eax,(%esp)
081b7e0e +0xa8d:  call   081b7f15 <+0xb94>
081b7e13 +0xa92:  leave
081b7e14 +0xa93:  ret
081b7e15 +0xa94:  nop
081b7e16 +0xa95:  push   %ebp
081b7e17 +0xa96:  mov    %esp,%ebp
081b7e19 +0xa98:  pop    %ebp
081b7e1a +0xa99:  ret
081b7e1b +0xa9a:  nop
081b7e1c +0xa9b:  push   %ebp
081b7e1d +0xa9c:  mov    %esp,%ebp
081b7e1f +0xa9e:  sub    $0x18,%esp
081b7e22 +0xaa1:  mov    0xc(%ebp),%eax
081b7e25 +0xaa4:  mov    %eax,(%esp)
081b7e28 +0xaa7:  call   081b7e16 <+0xa95>
081b7e2d +0xaac:  leave
081b7e2e +0xaad:  ret
081b7e2f +0xaae:  nop
081b7e30 +0xaaf:  push   %ebp
081b7e31 +0xab0:  mov    %esp,%ebp
081b7e33 +0xab2:  sub    $0x18,%esp
081b7e36 +0xab5:  mov    0xc(%ebp),%eax
081b7e39 +0xab8:  mov    %eax,(%esp)
081b7e3c +0xabb:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081b7e41 +0xac0:  leave
081b7e42 +0xac1:  ret
081b7e43 +0xac2:  push   %ebp
081b7e44 +0xac3:  mov    %esp,%ebp
081b7e46 +0xac5:  pop    %ebp
081b7e47 +0xac6:  ret
081b7e48 +0xac7:  push   %ebp
081b7e49 +0xac8:  mov    %esp,%ebp
081b7e4b +0xaca:  mov    0x8(%ebp),%eax
081b7e4e +0xacd:  pop    %ebp
081b7e4f +0xace:  ret
081b7e50 +0xacf:  push   %ebp
081b7e51 +0xad0:  mov    %esp,%ebp
081b7e53 +0xad2:  mov    0x8(%ebp),%eax
081b7e56 +0xad5:  pop    %ebp
081b7e57 +0xad6:  ret
081b7e58 +0xad7:  push   %ebp
081b7e59 +0xad8:  mov    %esp,%ebp
081b7e5b +0xada:  push   %esi
081b7e5c +0xadb:  push   %ebx
081b7e5d +0xadc:  sub    $0x10,%esp
081b7e60 +0xadf:  mov    0x10(%ebp),%eax
081b7e63 +0xae2:  mov    %eax,(%esp)
081b7e66 +0xae5:  call   081b7f36 <+0xbb5>
081b7e6b +0xaea:  mov    %eax,%esi
081b7e6d +0xaec:  mov    0xc(%ebp),%eax
081b7e70 +0xaef:  mov    %eax,(%esp)
081b7e73 +0xaf2:  call   081b7f36 <+0xbb5>
081b7e78 +0xaf7:  mov    %eax,%ebx
081b7e7a +0xaf9:  mov    0x8(%ebp),%eax
081b7e7d +0xafc:  mov    %eax,(%esp)
081b7e80 +0xaff:  call   081b7f36 <+0xbb5>
081b7e85 +0xb04:  mov    %esi,0x8(%esp)
081b7e89 +0xb08:  mov    %ebx,0x4(%esp)
081b7e8d +0xb0c:  mov    %eax,(%esp)
081b7e90 +0xb0f:  call   081b7f3e <+0xbbd>
081b7e95 +0xb14:  add    $0x10,%esp
081b7e98 +0xb17:  pop    %ebx
081b7e99 +0xb18:  pop    %esi
081b7e9a +0xb19:  pop    %ebp
081b7e9b +0xb1a:  ret
081b7e9c +0xb1b:  push   %ebp
081b7e9d +0xb1c:  mov    %esp,%ebp
081b7e9f +0xb1e:  sub    $0x18,%esp
081b7ea2 +0xb21:  mov    0x8(%ebp),%eax
081b7ea5 +0xb24:  mov    %eax,(%esp)
081b7ea8 +0xb27:  call   081b7f64 <+0xbe3>
081b7ead +0xb2c:  mov    %eax,(%esp)
081b7eb0 +0xb2f:  call   081b7f6c <+0xbeb>
081b7eb5 +0xb34:  leave
081b7eb6 +0xb35:  ret
081b7eb7 +0xb36:  nop
081b7eb8 +0xb37:  push   %ebp
081b7eb9 +0xb38:  mov    %esp,%ebp
081b7ebb +0xb3a:  sub    $0x18,%esp
081b7ebe +0xb3d:  mov    0x8(%ebp),%eax
081b7ec1 +0xb40:  mov    %eax,(%esp)
081b7ec4 +0xb43:  call   081b7f6c <+0xbeb>
081b7ec9 +0xb48:  cmp    0xc(%ebp),%eax
081b7ecc +0xb4b:  setb   %al
081b7ecf +0xb4e:  movzbl %al,%eax
081b7ed2 +0xb51:  test   %eax,%eax
081b7ed4 +0xb53:  setne  %al
081b7ed7 +0xb56:  test   %al,%al
081b7ed9 +0xb58:  je     081b7ee0 <+0xb5f>
081b7edb +0xb5a:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
081b7ee0 +0xb5f:  mov    0xc(%ebp),%eax
081b7ee3 +0xb62:  imul   $0x2c,%eax,%eax
081b7ee6 +0xb65:  mov    %eax,(%esp)
081b7ee9 +0xb68:  call   08724450 <_Znwj>  ; operator new(unsigned int)
081b7eee +0xb6d:  leave
081b7eef +0xb6e:  ret
081b7ef0 +0xb6f:  push   %ebp
081b7ef1 +0xb70:  mov    %esp,%ebp
081b7ef3 +0xb72:  push   %ebx
081b7ef4 +0xb73:  sub    $0x14,%esp
081b7ef7 +0xb76:  mov    0x8(%ebp),%ebx
081b7efa +0xb79:  mov    0xc(%ebp),%eax
081b7efd +0xb7c:  mov    (%eax),%eax
081b7eff +0xb7e:  mov    %eax,0x4(%esp)
081b7f03 +0xb82:  mov    %ebx,(%esp)
081b7f06 +0xb85:  call   081b7f76 <+0xbf5>
081b7f0b +0xb8a:  mov    %ebx,%eax
081b7f0d +0xb8c:  add    $0x14,%esp
081b7f10 +0xb8f:  pop    %ebx
081b7f11 +0xb90:  pop    %ebp
081b7f12 +0xb91:  ret    $0x4
081b7f15 +0xb94:  push   %ebp
081b7f16 +0xb95:  mov    %esp,%ebp
081b7f18 +0xb97:  sub    $0x18,%esp
081b7f1b +0xb9a:  mov    0x10(%ebp),%eax
081b7f1e +0xb9d:  mov    %eax,0x8(%esp)
081b7f22 +0xba1:  mov    0xc(%ebp),%eax
081b7f25 +0xba4:  mov    %eax,0x4(%esp)
081b7f29 +0xba8:  mov    0x8(%ebp),%eax
081b7f2c +0xbab:  mov    %eax,(%esp)
081b7f2f +0xbae:  call   081b7f83 <+0xc02>
081b7f34 +0xbb3:  leave
081b7f35 +0xbb4:  ret
081b7f36 +0xbb5:  push   %ebp
081b7f37 +0xbb6:  mov    %esp,%ebp
081b7f39 +0xbb8:  mov    0x8(%ebp),%eax
081b7f3c +0xbbb:  pop    %ebp
081b7f3d +0xbbc:  ret
081b7f3e +0xbbd:  push   %ebp
081b7f3f +0xbbe:  mov    %esp,%ebp
081b7f41 +0xbc0:  sub    $0x28,%esp
081b7f44 +0xbc3:  movb   $0x0,-0x9(%ebp)
081b7f48 +0xbc7:  mov    0x10(%ebp),%eax
081b7f4b +0xbca:  mov    %eax,0x8(%esp)
081b7f4f +0xbce:  mov    0xc(%ebp),%eax
081b7f52 +0xbd1:  mov    %eax,0x4(%esp)
081b7f56 +0xbd5:  mov    0x8(%ebp),%eax
081b7f59 +0xbd8:  mov    %eax,(%esp)
081b7f5c +0xbdb:  call   081b7fa4 <+0xc23>
081b7f61 +0xbe0:  leave
081b7f62 +0xbe1:  ret
081b7f63 +0xbe2:  nop
081b7f64 +0xbe3:  push   %ebp
081b7f65 +0xbe4:  mov    %esp,%ebp
081b7f67 +0xbe6:  mov    0x8(%ebp),%eax
081b7f6a +0xbe9:  pop    %ebp
081b7f6b +0xbea:  ret
081b7f6c +0xbeb:  push   %ebp
081b7f6d +0xbec:  mov    %esp,%ebp
081b7f6f +0xbee:  mov    $0x5d1745d,%eax
081b7f74 +0xbf3:  pop    %ebp
081b7f75 +0xbf4:  ret
081b7f76 +0xbf5:  push   %ebp
081b7f77 +0xbf6:  mov    %esp,%ebp
081b7f79 +0xbf8:  mov    0x8(%ebp),%eax
081b7f7c +0xbfb:  mov    0xc(%ebp),%edx
081b7f7f +0xbfe:  mov    %edx,(%eax)
081b7f81 +0xc00:  pop    %ebp
081b7f82 +0xc01:  ret
081b7f83 +0xc02:  push   %ebp
081b7f84 +0xc03:  mov    %esp,%ebp
081b7f86 +0xc05:  sub    $0x18,%esp
081b7f89 +0xc08:  mov    0x10(%ebp),%eax
081b7f8c +0xc0b:  mov    %eax,0x8(%esp)
081b7f90 +0xc0f:  mov    0xc(%ebp),%eax
081b7f93 +0xc12:  mov    %eax,0x4(%esp)
081b7f97 +0xc16:  mov    0x8(%ebp),%eax
081b7f9a +0xc19:  mov    %eax,(%esp)
081b7f9d +0xc1c:  call   081b800b <+0xc8a>
081b7fa2 +0xc21:  leave
081b7fa3 +0xc22:  ret
081b7fa4 +0xc23:  push   %ebp
081b7fa5 +0xc24:  mov    %esp,%ebp
081b7fa7 +0xc26:  push   %ebx
081b7fa8 +0xc27:  sub    $0x24,%esp
081b7fab +0xc2a:  mov    0xc(%ebp),%edx
081b7fae +0xc2d:  mov    0x8(%ebp),%eax
081b7fb1 +0xc30:  mov    %edx,%ecx
081b7fb3 +0xc32:  sub    %eax,%ecx
081b7fb5 +0xc34:  mov    %ecx,%eax
081b7fb7 +0xc36:  sar    $0x2,%eax
081b7fba +0xc39:  imul   $0xba2e8ba3,%eax,%eax
081b7fc0 +0xc3f:  mov    %eax,-0xc(%ebp)
081b7fc3 +0xc42:  jmp    081b7ff7 <+0xc76>
081b7fc5 +0xc44:  subl   $0x2c,0x10(%ebp)
081b7fc9 +0xc48:  mov    0x10(%ebp),%ebx
081b7fcc +0xc4b:  subl   $0x2c,0xc(%ebp)
081b7fd0 +0xc4f:  mov    0xc(%ebp),%eax
081b7fd3 +0xc52:  mov    %eax,(%esp)
081b7fd6 +0xc55:  call   081b7bf8 <+0x877>
081b7fdb +0xc5a:  cmp    %eax,%ebx
081b7fdd +0xc5c:  je     081b7ff3 <+0xc72>
081b7fdf +0xc5e:  movl   $0x2a,0x8(%esp)
081b7fe7 +0xc66:  mov    %eax,0x4(%esp)
081b7feb +0xc6a:  mov    %ebx,(%esp)
081b7fee +0xc6d:  call   0807d8a0 <_init+0x198>
081b7ff3 +0xc72:  subl   $0x1,-0xc(%ebp)
081b7ff7 +0xc76:  cmpl   $0x0,-0xc(%ebp)
081b7ffb +0xc7a:  setg   %al
081b7ffe +0xc7d:  test   %al,%al
081b8000 +0xc7f:  jne    081b7fc5 <+0xc44>
081b8002 +0xc81:  mov    0x10(%ebp),%eax
081b8005 +0xc84:  add    $0x24,%esp
081b8008 +0xc87:  pop    %ebx
081b8009 +0xc88:  pop    %ebp
081b800a +0xc89:  ret
081b800b +0xc8a:  push   %ebp
081b800c +0xc8b:  mov    %esp,%ebp
081b800e +0xc8d:  push   %esi
081b800f +0xc8e:  push   %ebx
081b8010 +0xc8f:  sub    $0x20,%esp
081b8013 +0xc92:  mov    0x10(%ebp),%eax
081b8016 +0xc95:  mov    %eax,-0xc(%ebp)
081b8019 +0xc98:  jmp    081b8092 <+0xd11>
081b801b +0xc9a:  lea    0x8(%ebp),%eax
081b801e +0xc9d:  mov    %eax,(%esp)
081b8021 +0xca0:  call   081b811e <+0xd9d>
081b8026 +0xca5:  mov    %eax,%ebx
081b8028 +0xca7:  mov    -0xc(%ebp),%eax
081b802b +0xcaa:  mov    %eax,0x4(%esp)
081b802f +0xcae:  movl   $0x2c,(%esp)
081b8036 +0xcb5:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
081b803b +0xcba:  mov    %eax,%edx
081b803d +0xcbc:  test   %edx,%edx
081b803f +0xcbe:  je     081b8083 <+0xd02>
081b8041 +0xcc0:  mov    (%ebx),%edx
081b8043 +0xcc2:  mov    %edx,(%eax)
081b8045 +0xcc4:  mov    0x4(%ebx),%edx
081b8048 +0xcc7:  mov    %edx,0x4(%eax)
081b804b +0xcca:  mov    0x8(%ebx),%edx
081b804e +0xccd:  mov    %edx,0x8(%eax)
081b8051 +0xcd0:  mov    0xc(%ebx),%edx
081b8054 +0xcd3:  mov    %edx,0xc(%eax)
081b8057 +0xcd6:  mov    0x10(%ebx),%edx
081b805a +0xcd9:  mov    %edx,0x10(%eax)
081b805d +0xcdc:  mov    0x14(%ebx),%edx
081b8060 +0xcdf:  mov    %edx,0x14(%eax)
081b8063 +0xce2:  mov    0x18(%ebx),%edx
081b8066 +0xce5:  mov    %edx,0x18(%eax)
081b8069 +0xce8:  mov    0x1c(%ebx),%edx
081b806c +0xceb:  mov    %edx,0x1c(%eax)
081b806f +0xcee:  mov    0x20(%ebx),%edx
081b8072 +0xcf1:  mov    %edx,0x20(%eax)
081b8075 +0xcf4:  mov    0x24(%ebx),%edx
081b8078 +0xcf7:  mov    %edx,0x24(%eax)
081b807b +0xcfa:  movzwl 0x28(%ebx),%edx
081b807f +0xcfe:  mov    %dx,0x28(%eax)
081b8083 +0xd02:  lea    0x8(%ebp),%eax
081b8086 +0xd05:  mov    %eax,(%esp)
081b8089 +0xd08:  call   081b8108 <+0xd87>
081b808e +0xd0d:  addl   $0x2c,-0xc(%ebp)
081b8092 +0xd11:  lea    0xc(%ebp),%eax
081b8095 +0xd14:  mov    %eax,0x4(%esp)
081b8099 +0xd18:  lea    0x8(%ebp),%eax
081b809c +0xd1b:  mov    %eax,(%esp)
081b809f +0xd1e:  call   081b80ea <+0xd69>
081b80a4 +0xd23:  test   %al,%al
081b80a6 +0xd25:  jne    081b801b <+0xc9a>
081b80ac +0xd2b:  mov    -0xc(%ebp),%eax
081b80af +0xd2e:  add    $0x20,%esp
081b80b2 +0xd31:  pop    %ebx
081b80b3 +0xd32:  pop    %esi
081b80b4 +0xd33:  pop    %ebp
081b80b5 +0xd34:  ret
081b80b6 +0xd35:  mov    %eax,(%esp)
081b80b9 +0xd38:  call   08725ce0 <__cxa_begin_catch>
081b80be +0xd3d:  mov    -0xc(%ebp),%eax
081b80c1 +0xd40:  mov    %eax,0x4(%esp)
081b80c5 +0xd44:  mov    0x10(%ebp),%eax
081b80c8 +0xd47:  mov    %eax,(%esp)
081b80cb +0xd4a:  call   081b7bb7 <+0x836>
081b80d0 +0xd4f:  call   08724be0 <__cxa_rethrow>
081b80d5 +0xd54:  mov    %edx,%ebx
081b80d7 +0xd56:  mov    %eax,%esi
081b80d9 +0xd58:  call   08725c30 <__cxa_end_catch>
081b80de +0xd5d:  mov    %esi,%eax
081b80e0 +0xd5f:  mov    %ebx,%edx
081b80e2 +0xd61:  mov    %eax,(%esp)
081b80e5 +0xd64:  call   08ae3750 <_Unwind_Resume>
081b80ea +0xd69:  push   %ebp
081b80eb +0xd6a:  mov    %esp,%ebp
081b80ed +0xd6c:  sub    $0x18,%esp
081b80f0 +0xd6f:  mov    0xc(%ebp),%eax
081b80f3 +0xd72:  mov    %eax,0x4(%esp)
081b80f7 +0xd76:  mov    0x8(%ebp),%eax
081b80fa +0xd79:  mov    %eax,(%esp)
081b80fd +0xd7c:  call   081b8128 <+0xda7>
081b8102 +0xd81:  xor    $0x1,%eax
081b8105 +0xd84:  leave
081b8106 +0xd85:  ret
081b8107 +0xd86:  nop
081b8108 +0xd87:  push   %ebp
081b8109 +0xd88:  mov    %esp,%ebp
081b810b +0xd8a:  mov    0x8(%ebp),%eax
081b810e +0xd8d:  mov    (%eax),%eax
081b8110 +0xd8f:  lea    0x2c(%eax),%edx
081b8113 +0xd92:  mov    0x8(%ebp),%eax
081b8116 +0xd95:  mov    %edx,(%eax)
081b8118 +0xd97:  mov    0x8(%ebp),%eax
081b811b +0xd9a:  pop    %ebp
081b811c +0xd9b:  ret
081b811d +0xd9c:  nop
081b811e +0xd9d:  push   %ebp
081b811f +0xd9e:  mov    %esp,%ebp
081b8121 +0xda0:  mov    0x8(%ebp),%eax
081b8124 +0xda3:  mov    (%eax),%eax
081b8126 +0xda5:  pop    %ebp
081b8127 +0xda6:  ret
081b8128 +0xda7:  push   %ebp
081b8129 +0xda8:  mov    %esp,%ebp
081b812b +0xdaa:  push   %ebx
081b812c +0xdab:  sub    $0x14,%esp
081b812f +0xdae:  mov    0x8(%ebp),%eax
081b8132 +0xdb1:  mov    %eax,(%esp)
081b8135 +0xdb4:  call   081b8152 <+0xdd1>
081b813a +0xdb9:  mov    %eax,%ebx
081b813c +0xdbb:  mov    0xc(%ebp),%eax
081b813f +0xdbe:  mov    %eax,(%esp)
081b8142 +0xdc1:  call   081b8152 <+0xdd1>
081b8147 +0xdc6:  cmp    %eax,%ebx
081b8149 +0xdc8:  sete   %al
081b814c +0xdcb:  add    $0x14,%esp
081b814f +0xdce:  pop    %ebx
081b8150 +0xdcf:  pop    %ebp
081b8151 +0xdd0:  ret
081b8152 +0xdd1:  push   %ebp
081b8153 +0xdd2:  mov    %esp,%ebp
081b8155 +0xdd4:  mov    0x8(%ebp),%eax
081b8158 +0xdd7:  mov    (%eax),%eax
081b815a +0xdd9:  pop    %ebp
081b815b +0xdda:  ret
```

## 反编译 C

```c
// <global>::global @ 0x81b7381

/* GiveGrowCreatureEvent::GiveGrowCreatureEvent() */

void GiveGrowCreatureEvent::_GLOBAL__I_GiveGrowCreatureEvent(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
