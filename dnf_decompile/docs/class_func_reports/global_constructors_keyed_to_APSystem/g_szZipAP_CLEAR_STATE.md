# g_szZipAP_CLEAR_STATE

`_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE`

`global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE`

| 类 | 地址 |
|---|---|
| `global constructors keyed to APSystem` | `0x0812529d` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812529d  _GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE
#           global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE
# range [0x0812529d, 0x08125aa7]
0812529d +0x000:  push   %ebp
0812529e +0x001:  mov    %esp,%ebp
081252a0 +0x003:  sub    $0x18,%esp
081252a3 +0x006:  movl   $0xffff,0x4(%esp)
081252ab +0x00e:  movl   $0x1,(%esp)
081252b2 +0x015:  call   0812525d <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
081252b7 +0x01a:  leave
081252b8 +0x01b:  ret
081252b9 +0x01c:  nop
081252ba +0x01d:  push   %ebp
081252bb +0x01e:  mov    %esp,%ebp
081252bd +0x020:  mov    0x8(%ebp),%eax
081252c0 +0x023:  mov    0xc(%ebp),%edx
081252c3 +0x026:  mov    %edx,0x4(%eax)
081252c6 +0x029:  pop    %ebp
081252c7 +0x02a:  ret
081252c8 +0x02b:  push   %ebp
081252c9 +0x02c:  mov    %esp,%ebp
081252cb +0x02e:  sub    $0x18,%esp
081252ce +0x031:  mov    0x8(%ebp),%eax
081252d1 +0x034:  movl   $&_ZTV9ParamBase+0x8,(%eax)
081252d7 +0x03a:  mov    $0x0,%eax
081252dc +0x03f:  test   %al,%al
081252de +0x041:  je     081252eb <+0x4e>
081252e0 +0x043:  mov    0x8(%ebp),%eax
081252e3 +0x046:  mov    %eax,(%esp)
081252e6 +0x049:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081252eb +0x04e:  leave
081252ec +0x04f:  ret
081252ed +0x050:  nop
081252ee +0x051:  push   %ebp
081252ef +0x052:  mov    %esp,%ebp
081252f1 +0x054:  sub    $0x18,%esp
081252f4 +0x057:  mov    0x8(%ebp),%eax
081252f7 +0x05a:  mov    %eax,(%esp)
081252fa +0x05d:  call   081252c8 <+0x2b>
081252ff +0x062:  mov    0x8(%ebp),%eax
08125302 +0x065:  mov    %eax,(%esp)
08125305 +0x068:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0812530a +0x06d:  leave
0812530b +0x06e:  ret
0812530c +0x06f:  push   %ebp
0812530d +0x070:  mov    %esp,%ebp
0812530f +0x072:  mov    0x8(%ebp),%eax
08125312 +0x075:  movl   $&_ZTV9ParamBase+0x8,(%eax)
08125318 +0x07b:  pop    %ebp
08125319 +0x07c:  ret
0812531a +0x07d:  push   %ebp
0812531b +0x07e:  mov    %esp,%ebp
0812531d +0x080:  sub    $0x28,%esp
08125320 +0x083:  mov    0x8(%ebp),%eax
08125323 +0x086:  mov    0xc(%eax),%eax
08125326 +0x089:  test   %eax,%eax
08125328 +0x08b:  je     08125349 <+0xac>
0812532a +0x08d:  mov    0xc(%ebp),%eax
0812532d +0x090:  mov    %eax,0x4(%esp)
08125331 +0x094:  mov    0x8(%ebp),%eax
08125334 +0x097:  mov    %eax,(%esp)
08125337 +0x09a:  call   080e22d0 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x76>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x76
0812533c +0x09f:  xor    $0x1,%eax
0812533f +0x0a2:  test   %al,%al
08125341 +0x0a4:  jne    08125349 <+0xac>
08125343 +0x0a6:  cmpl   $0x0,0x14(%ebp)
08125347 +0x0aa:  jg     08125350 <+0xb3>
08125349 +0x0ac:  mov    $0x1,%eax
0812534e +0x0b1:  jmp    08125355 <+0xb8>
08125350 +0x0b3:  mov    $0x0,%eax
08125355 +0x0b8:  test   %al,%al
08125357 +0x0ba:  je     08125360 <+0xc3>
08125359 +0x0bc:  mov    $0x0,%eax
0812535e +0x0c1:  jmp    081253dc <+0x13f>
08125360 +0x0c3:  movl   $0x0,-0xc(%ebp)
08125367 +0x0ca:  mov    0x8(%ebp),%eax
0812536a +0x0cd:  mov    0x10(%eax),%eax
0812536d +0x0d0:  mov    0xc(%ebp),%edx
08125370 +0x0d3:  shl    $0x2,%edx
08125373 +0x0d6:  add    %edx,%eax
08125375 +0x0d8:  mov    (%eax),%eax
08125377 +0x0da:  cmp    0x14(%ebp),%eax
0812537a +0x0dd:  jge    081253ab <+0x10e>
0812537c +0x0df:  mov    0x8(%ebp),%eax
0812537f +0x0e2:  mov    0x10(%eax),%eax
08125382 +0x0e5:  mov    0xc(%ebp),%edx
08125385 +0x0e8:  shl    $0x2,%edx
08125388 +0x0eb:  add    %edx,%eax
0812538a +0x0ed:  mov    (%eax),%eax
0812538c +0x0ef:  mov    %eax,-0xc(%ebp)
0812538f +0x0f2:  mov    0x14(%ebp),%eax
08125392 +0x0f5:  mov    %eax,0x8(%esp)
08125396 +0x0f9:  movl   $0x0,0x4(%esp)
0812539e +0x101:  mov    0x10(%ebp),%eax
081253a1 +0x104:  mov    %eax,(%esp)
081253a4 +0x107:  call   0807dcc0 <_init+0x5b8>
081253a9 +0x10c:  jmp    081253b1 <+0x114>
081253ab +0x10e:  mov    0x14(%ebp),%eax
081253ae +0x111:  mov    %eax,-0xc(%ebp)
081253b1 +0x114:  mov    -0xc(%ebp),%edx
081253b4 +0x117:  mov    0x8(%ebp),%eax
081253b7 +0x11a:  mov    0xc(%eax),%eax
081253ba +0x11d:  mov    0xc(%ebp),%ecx
081253bd +0x120:  shl    $0x2,%ecx
081253c0 +0x123:  add    %ecx,%eax
081253c2 +0x125:  mov    (%eax),%eax
081253c4 +0x127:  mov    %edx,0x8(%esp)
081253c8 +0x12b:  mov    %eax,0x4(%esp)
081253cc +0x12f:  mov    0x10(%ebp),%eax
081253cf +0x132:  mov    %eax,(%esp)
081253d2 +0x135:  call   0807d8a0 <_init+0x198>
081253d7 +0x13a:  mov    $0x1,%eax
081253dc +0x13f:  leave
081253dd +0x140:  ret
081253de +0x141:  push   %ebp
081253df +0x142:  mov    %esp,%ebp
081253e1 +0x144:  mov    0x8(%ebp),%eax
081253e4 +0x147:  mov    0x10(%eax),%eax
081253e7 +0x14a:  mov    0xc(%ebp),%edx
081253ea +0x14d:  shl    $0x2,%edx
081253ed +0x150:  add    %edx,%eax
081253ef +0x152:  mov    (%eax),%eax
081253f1 +0x154:  pop    %ebp
081253f2 +0x155:  ret
081253f3 +0x156:  nop
081253f4 +0x157:  push   %ebp
081253f5 +0x158:  mov    %esp,%ebp
081253f7 +0x15a:  mov    0xc(%ebp),%eax
081253fa +0x15d:  mov    0x8(%ebp),%edx
081253fd +0x160:  movb   $0x1,0x8d0fd(%edx,%eax,1)
08125405 +0x168:  pop    %ebp
08125406 +0x169:  ret
08125407 +0x16a:  nop
08125408 +0x16b:  push   %ebp
08125409 +0x16c:  mov    %esp,%ebp
0812540b +0x16e:  sub    $0x18,%esp
0812540e +0x171:  mov    0x8(%ebp),%eax
08125411 +0x174:  movl   $&_ZTV11IDispatcher+0x8,(%eax)
08125417 +0x17a:  mov    $0x0,%eax
0812541c +0x17f:  test   %al,%al
0812541e +0x181:  je     0812542b <+0x18e>
08125420 +0x183:  mov    0x8(%ebp),%eax
08125423 +0x186:  mov    %eax,(%esp)
08125426 +0x189:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0812542b +0x18e:  leave
0812542c +0x18f:  ret
0812542d +0x190:  nop
0812542e +0x191:  push   %ebp
0812542f +0x192:  mov    %esp,%ebp
08125431 +0x194:  sub    $0x18,%esp
08125434 +0x197:  mov    0x8(%ebp),%eax
08125437 +0x19a:  mov    %eax,(%esp)
0812543a +0x19d:  call   08125408 <+0x16b>
0812543f +0x1a2:  mov    0x8(%ebp),%eax
08125442 +0x1a5:  mov    %eax,(%esp)
08125445 +0x1a8:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0812544a +0x1ad:  leave
0812544b +0x1ae:  ret
0812544c +0x1af:  push   %ebp
0812544d +0x1b0:  mov    %esp,%ebp
0812544f +0x1b2:  sub    $0x18,%esp
08125452 +0x1b5:  mov    0x8(%ebp),%eax
08125455 +0x1b8:  movl   $&_ZTVN8APSystem18DB_LoadActionPointE+0x8,(%eax)
0812545b +0x1be:  mov    0x8(%ebp),%eax
0812545e +0x1c1:  mov    %eax,(%esp)
08125461 +0x1c4:  call   080e2378 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x11e>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x11e
08125466 +0x1c9:  mov    $0x0,%eax
0812546b +0x1ce:  test   %al,%al
0812546d +0x1d0:  je     0812547a <+0x1dd>
0812546f +0x1d2:  mov    0x8(%ebp),%eax
08125472 +0x1d5:  mov    %eax,(%esp)
08125475 +0x1d8:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0812547a +0x1dd:  leave
0812547b +0x1de:  ret
0812547c +0x1df:  push   %ebp
0812547d +0x1e0:  mov    %esp,%ebp
0812547f +0x1e2:  sub    $0x18,%esp
08125482 +0x1e5:  mov    0x8(%ebp),%eax
08125485 +0x1e8:  mov    %eax,(%esp)
08125488 +0x1eb:  call   0812544c <+0x1af>
0812548d +0x1f0:  mov    0x8(%ebp),%eax
08125490 +0x1f3:  mov    %eax,(%esp)
08125493 +0x1f6:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08125498 +0x1fb:  leave
08125499 +0x1fc:  ret
0812549a +0x1fd:  push   %ebp
0812549b +0x1fe:  mov    %esp,%ebp
0812549d +0x200:  sub    $0x18,%esp
081254a0 +0x203:  mov    0x8(%ebp),%eax
081254a3 +0x206:  movl   $&_ZTVN8APSystem20DB_UpdateActionPointE+0x8,(%eax)
081254a9 +0x20c:  mov    0x8(%ebp),%eax
081254ac +0x20f:  mov    %eax,(%esp)
081254af +0x212:  call   080e2378 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x11e>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x11e
081254b4 +0x217:  mov    $0x0,%eax
081254b9 +0x21c:  test   %al,%al
081254bb +0x21e:  je     081254c8 <+0x22b>
081254bd +0x220:  mov    0x8(%ebp),%eax
081254c0 +0x223:  mov    %eax,(%esp)
081254c3 +0x226:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081254c8 +0x22b:  leave
081254c9 +0x22c:  ret
081254ca +0x22d:  push   %ebp
081254cb +0x22e:  mov    %esp,%ebp
081254cd +0x230:  sub    $0x18,%esp
081254d0 +0x233:  mov    0x8(%ebp),%eax
081254d3 +0x236:  mov    %eax,(%esp)
081254d6 +0x239:  call   0812549a <+0x1fd>
081254db +0x23e:  mov    0x8(%ebp),%eax
081254de +0x241:  mov    %eax,(%esp)
081254e1 +0x244:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081254e6 +0x249:  leave
081254e7 +0x24a:  ret
081254e8 +0x24b:  push   %ebp
081254e9 +0x24c:  mov    %esp,%ebp
081254eb +0x24e:  sub    $0x18,%esp
081254ee +0x251:  mov    0x8(%ebp),%eax
081254f1 +0x254:  movl   $&_ZTVN8APSystem18DB_LoadRewardMedalE+0x8,(%eax)
081254f7 +0x25a:  mov    0x8(%ebp),%eax
081254fa +0x25d:  mov    %eax,(%esp)
081254fd +0x260:  call   080e2378 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x11e>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x11e
08125502 +0x265:  mov    $0x0,%eax
08125507 +0x26a:  test   %al,%al
08125509 +0x26c:  je     08125516 <+0x279>
0812550b +0x26e:  mov    0x8(%ebp),%eax
0812550e +0x271:  mov    %eax,(%esp)
08125511 +0x274:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08125516 +0x279:  leave
08125517 +0x27a:  ret
08125518 +0x27b:  push   %ebp
08125519 +0x27c:  mov    %esp,%ebp
0812551b +0x27e:  sub    $0x18,%esp
0812551e +0x281:  mov    0x8(%ebp),%eax
08125521 +0x284:  mov    %eax,(%esp)
08125524 +0x287:  call   081254e8 <+0x24b>
08125529 +0x28c:  mov    0x8(%ebp),%eax
0812552c +0x28f:  mov    %eax,(%esp)
0812552f +0x292:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08125534 +0x297:  leave
08125535 +0x298:  ret
08125536 +0x299:  push   %ebp
08125537 +0x29a:  mov    %esp,%ebp
08125539 +0x29c:  sub    $0x18,%esp
0812553c +0x29f:  mov    0x8(%ebp),%eax
0812553f +0x2a2:  movl   $&_ZTVN8APSystem20DB_UpdateRewardMedalE+0x8,(%eax)
08125545 +0x2a8:  mov    0x8(%ebp),%eax
08125548 +0x2ab:  mov    %eax,(%esp)
0812554b +0x2ae:  call   080e2378 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x11e>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x11e
08125550 +0x2b3:  mov    $0x0,%eax
08125555 +0x2b8:  test   %al,%al
08125557 +0x2ba:  je     08125564 <+0x2c7>
08125559 +0x2bc:  mov    0x8(%ebp),%eax
0812555c +0x2bf:  mov    %eax,(%esp)
0812555f +0x2c2:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08125564 +0x2c7:  leave
08125565 +0x2c8:  ret
08125566 +0x2c9:  push   %ebp
08125567 +0x2ca:  mov    %esp,%ebp
08125569 +0x2cc:  sub    $0x18,%esp
0812556c +0x2cf:  mov    0x8(%ebp),%eax
0812556f +0x2d2:  mov    %eax,(%esp)
08125572 +0x2d5:  call   08125536 <+0x299>
08125577 +0x2da:  mov    0x8(%ebp),%eax
0812557a +0x2dd:  mov    %eax,(%esp)
0812557d +0x2e0:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08125582 +0x2e5:  leave
08125583 +0x2e6:  ret
08125584 +0x2e7:  push   %ebp
08125585 +0x2e8:  mov    %esp,%ebp
08125587 +0x2ea:  sub    $0x18,%esp
0812558a +0x2ed:  mov    0x8(%ebp),%eax
0812558d +0x2f0:  movl   $&_ZTVN8APSystem21Inter_LoadActionPointE+0x8,(%eax)
08125593 +0x2f6:  mov    0x8(%ebp),%eax
08125596 +0x2f9:  mov    %eax,(%esp)
08125599 +0x2fc:  call   080e23bc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x162>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x162
0812559e +0x301:  mov    $0x0,%eax
081255a3 +0x306:  test   %al,%al
081255a5 +0x308:  je     081255b2 <+0x315>
081255a7 +0x30a:  mov    0x8(%ebp),%eax
081255aa +0x30d:  mov    %eax,(%esp)
081255ad +0x310:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081255b2 +0x315:  leave
081255b3 +0x316:  ret
081255b4 +0x317:  push   %ebp
081255b5 +0x318:  mov    %esp,%ebp
081255b7 +0x31a:  sub    $0x18,%esp
081255ba +0x31d:  mov    0x8(%ebp),%eax
081255bd +0x320:  mov    %eax,(%esp)
081255c0 +0x323:  call   08125584 <+0x2e7>
081255c5 +0x328:  mov    0x8(%ebp),%eax
081255c8 +0x32b:  mov    %eax,(%esp)
081255cb +0x32e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081255d0 +0x333:  leave
081255d1 +0x334:  ret
081255d2 +0x335:  push   %ebp
081255d3 +0x336:  mov    %esp,%ebp
081255d5 +0x338:  sub    $0x18,%esp
081255d8 +0x33b:  mov    0x8(%ebp),%eax
081255db +0x33e:  movl   $&_ZTVN8APSystem22Inter_EmptyActionPointE+0x8,(%eax)
081255e1 +0x344:  mov    0x8(%ebp),%eax
081255e4 +0x347:  mov    %eax,(%esp)
081255e7 +0x34a:  call   080e23bc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x162>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x162
081255ec +0x34f:  mov    $0x0,%eax
081255f1 +0x354:  test   %al,%al
081255f3 +0x356:  je     08125600 <+0x363>
081255f5 +0x358:  mov    0x8(%ebp),%eax
081255f8 +0x35b:  mov    %eax,(%esp)
081255fb +0x35e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08125600 +0x363:  leave
08125601 +0x364:  ret
08125602 +0x365:  push   %ebp
08125603 +0x366:  mov    %esp,%ebp
08125605 +0x368:  sub    $0x18,%esp
08125608 +0x36b:  mov    0x8(%ebp),%eax
0812560b +0x36e:  mov    %eax,(%esp)
0812560e +0x371:  call   081255d2 <+0x335>
08125613 +0x376:  mov    0x8(%ebp),%eax
08125616 +0x379:  mov    %eax,(%esp)
08125619 +0x37c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0812561e +0x381:  leave
0812561f +0x382:  ret
08125620 +0x383:  push   %ebp
08125621 +0x384:  mov    %esp,%ebp
08125623 +0x386:  sub    $0x18,%esp
08125626 +0x389:  mov    0x8(%ebp),%eax
08125629 +0x38c:  movl   $&_ZTVN8APSystem21Inter_LoadRewardMedalE+0x8,(%eax)
0812562f +0x392:  mov    0x8(%ebp),%eax
08125632 +0x395:  mov    %eax,(%esp)
08125635 +0x398:  call   080e23bc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x162>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x162
0812563a +0x39d:  mov    $0x0,%eax
0812563f +0x3a2:  test   %al,%al
08125641 +0x3a4:  je     0812564e <+0x3b1>
08125643 +0x3a6:  mov    0x8(%ebp),%eax
08125646 +0x3a9:  mov    %eax,(%esp)
08125649 +0x3ac:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0812564e +0x3b1:  leave
0812564f +0x3b2:  ret
08125650 +0x3b3:  push   %ebp
08125651 +0x3b4:  mov    %esp,%ebp
08125653 +0x3b6:  sub    $0x18,%esp
08125656 +0x3b9:  mov    0x8(%ebp),%eax
08125659 +0x3bc:  mov    %eax,(%esp)
0812565c +0x3bf:  call   08125620 <+0x383>
08125661 +0x3c4:  mov    0x8(%ebp),%eax
08125664 +0x3c7:  mov    %eax,(%esp)
08125667 +0x3ca:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0812566c +0x3cf:  leave
0812566d +0x3d0:  ret
0812566e +0x3d1:  push   %ebp
0812566f +0x3d2:  mov    %esp,%ebp
08125671 +0x3d4:  mov    $0x0,%eax
08125676 +0x3d9:  pop    %ebp
08125677 +0x3da:  ret
08125678 +0x3db:  push   %ebp
08125679 +0x3dc:  mov    %esp,%ebp
0812567b +0x3de:  mov    $0x0,%eax
08125680 +0x3e3:  pop    %ebp
08125681 +0x3e4:  ret
08125682 +0x3e5:  push   %ebp
08125683 +0x3e6:  mov    %esp,%ebp
08125685 +0x3e8:  mov    $0x0,%eax
0812568a +0x3ed:  pop    %ebp
0812568b +0x3ee:  ret
0812568c +0x3ef:  push   %ebp
0812568d +0x3f0:  mov    %esp,%ebp
0812568f +0x3f2:  mov    $0x0,%eax
08125694 +0x3f7:  pop    %ebp
08125695 +0x3f8:  ret
08125696 +0x3f9:  push   %ebp
08125697 +0x3fa:  mov    %esp,%ebp
08125699 +0x3fc:  sub    $0x18,%esp
0812569c +0x3ff:  mov    0x8(%ebp),%eax
0812569f +0x402:  movl   $&_ZTV17IPacketDispatcherI8MSG_BASE9ParamBaseL8ch_state0EE+0x8,(%eax)
081256a5 +0x408:  mov    0x8(%ebp),%eax
081256a8 +0x40b:  mov    %eax,(%esp)
081256ab +0x40e:  call   08125408 <+0x16b>
081256b0 +0x413:  mov    $0x0,%eax
081256b5 +0x418:  test   %al,%al
081256b7 +0x41a:  je     081256c4 <+0x427>
081256b9 +0x41c:  mov    0x8(%ebp),%eax
081256bc +0x41f:  mov    %eax,(%esp)
081256bf +0x422:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081256c4 +0x427:  leave
081256c5 +0x428:  ret
081256c6 +0x429:  push   %ebp
081256c7 +0x42a:  mov    %esp,%ebp
081256c9 +0x42c:  sub    $0x18,%esp
081256cc +0x42f:  mov    0x8(%ebp),%eax
081256cf +0x432:  mov    %eax,(%esp)
081256d2 +0x435:  call   08125696 <+0x3f9>
081256d7 +0x43a:  mov    0x8(%ebp),%eax
081256da +0x43d:  mov    %eax,(%esp)
081256dd +0x440:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081256e2 +0x445:  leave
081256e3 +0x446:  ret
081256e4 +0x447:  push   %ebp
081256e5 +0x448:  mov    %esp,%ebp
081256e7 +0x44a:  sub    $0x28,%esp
081256ea +0x44d:  movl   $0xcf1,0x4(%esp)
081256f2 +0x455:  mov    0x8(%ebp),%eax
081256f5 +0x458:  mov    %eax,(%esp)
081256f8 +0x45b:  call   0861bfdc <_ZN6Stream10enable_outEi>  ; Stream::enable_out(int)
081256fd +0x460:  xor    $0x1,%eax
08125700 +0x463:  test   %al,%al
08125702 +0x465:  je     0812570b <+0x46e>
08125704 +0x467:  mov    $0x0,%eax
08125709 +0x46c:  jmp    08125735 <+0x498>
0812570b +0x46e:  mov    0x8(%ebp),%eax
0812570e +0x471:  mov    0x8(%eax),%eax
08125711 +0x474:  mov    %eax,%edx
08125713 +0x476:  mov    0x8(%ebp),%eax
08125716 +0x479:  mov    0x10(%eax),%eax
08125719 +0x47c:  lea    (%edx,%eax,1),%eax
0812571c +0x47f:  mov    %eax,-0xc(%ebp)
0812571f +0x482:  movl   $0xcf1,0x4(%esp)
08125727 +0x48a:  mov    0x8(%ebp),%eax
0812572a +0x48d:  mov    %eax,(%esp)
0812572d +0x490:  call   0861be34 <_ZN6Stream7out_ptrEi>  ; Stream::out_ptr(int)
08125732 +0x495:  mov    -0xc(%ebp),%eax
08125735 +0x498:  leave
08125736 +0x499:  ret
08125737 +0x49a:  nop
08125738 +0x49b:  push   %ebp
08125739 +0x49c:  mov    %esp,%ebp
0812573b +0x49e:  sub    $0x28,%esp
0812573e +0x4a1:  movl   $0x13,0x4(%esp)
08125746 +0x4a9:  mov    0x8(%ebp),%eax
08125749 +0x4ac:  mov    %eax,(%esp)
0812574c +0x4af:  call   0861bfdc <_ZN6Stream10enable_outEi>  ; Stream::enable_out(int)
08125751 +0x4b4:  xor    $0x1,%eax
08125754 +0x4b7:  test   %al,%al
08125756 +0x4b9:  je     0812575f <+0x4c2>
08125758 +0x4bb:  mov    $0x0,%eax
0812575d +0x4c0:  jmp    08125789 <+0x4ec>
0812575f +0x4c2:  mov    0x8(%ebp),%eax
08125762 +0x4c5:  mov    0x8(%eax),%eax
08125765 +0x4c8:  mov    %eax,%edx
08125767 +0x4ca:  mov    0x8(%ebp),%eax
0812576a +0x4cd:  mov    0x10(%eax),%eax
0812576d +0x4d0:  lea    (%edx,%eax,1),%eax
08125770 +0x4d3:  mov    %eax,-0xc(%ebp)
08125773 +0x4d6:  movl   $0x13,0x4(%esp)
0812577b +0x4de:  mov    0x8(%ebp),%eax
0812577e +0x4e1:  mov    %eax,(%esp)
08125781 +0x4e4:  call   0861be34 <_ZN6Stream7out_ptrEi>  ; Stream::out_ptr(int)
08125786 +0x4e9:  mov    -0xc(%ebp),%eax
08125789 +0x4ec:  leave
0812578a +0x4ed:  ret
0812578b +0x4ee:  nop
0812578c +0x4ef:  push   %ebp
0812578d +0x4f0:  mov    %esp,%ebp
0812578f +0x4f2:  mov    0x8(%ebp),%eax
08125792 +0x4f5:  mov    0x4(%eax),%eax
08125795 +0x4f8:  mov    %eax,%edx
08125797 +0x4fa:  mov    0x8(%ebp),%eax
0812579a +0x4fd:  mov    (%eax),%eax
0812579c +0x4ff:  mov    %edx,%ecx
0812579e +0x501:  sub    %eax,%ecx
081257a0 +0x503:  mov    %ecx,%eax
081257a2 +0x505:  sar    %eax
081257a4 +0x507:  imul   $0xcccccccd,%eax,%eax
081257aa +0x50d:  pop    %ebp
081257ab +0x50e:  ret
081257ac +0x50f:  push   %ebp
081257ad +0x510:  mov    %esp,%ebp
081257af +0x512:  mov    0x8(%ebp),%eax
081257b2 +0x515:  mov    (%eax),%ecx
081257b4 +0x517:  mov    0xc(%ebp),%edx
081257b7 +0x51a:  mov    %edx,%eax
081257b9 +0x51c:  shl    $0x2,%eax
081257bc +0x51f:  add    %edx,%eax
081257be +0x521:  add    %eax,%eax
081257c0 +0x523:  lea    (%ecx,%eax,1),%eax
081257c3 +0x526:  pop    %ebp
081257c4 +0x527:  ret
081257c5 +0x528:  nop
081257c6 +0x529:  push   %ebp
081257c7 +0x52a:  mov    %esp,%ebp
081257c9 +0x52c:  sub    $0x28,%esp
081257cc +0x52f:  movl   $0xf,0x4(%esp)
081257d4 +0x537:  mov    0x8(%ebp),%eax
081257d7 +0x53a:  mov    %eax,(%esp)
081257da +0x53d:  call   0861bfdc <_ZN6Stream10enable_outEi>  ; Stream::enable_out(int)
081257df +0x542:  xor    $0x1,%eax
081257e2 +0x545:  test   %al,%al
081257e4 +0x547:  je     081257ed <+0x550>
081257e6 +0x549:  mov    $0x0,%eax
081257eb +0x54e:  jmp    08125817 <+0x57a>
081257ed +0x550:  mov    0x8(%ebp),%eax
081257f0 +0x553:  mov    0x8(%eax),%eax
081257f3 +0x556:  mov    %eax,%edx
081257f5 +0x558:  mov    0x8(%ebp),%eax
081257f8 +0x55b:  mov    0x10(%eax),%eax
081257fb +0x55e:  lea    (%edx,%eax,1),%eax
081257fe +0x561:  mov    %eax,-0xc(%ebp)
08125801 +0x564:  movl   $0xf,0x4(%esp)
08125809 +0x56c:  mov    0x8(%ebp),%eax
0812580c +0x56f:  mov    %eax,(%esp)
0812580f +0x572:  call   0861be34 <_ZN6Stream7out_ptrEi>  ; Stream::out_ptr(int)
08125814 +0x577:  mov    -0xc(%ebp),%eax
08125817 +0x57a:  leave
08125818 +0x57b:  ret
08125819 +0x57c:  nop
0812581a +0x57d:  push   %ebp
0812581b +0x57e:  mov    %esp,%ebp
0812581d +0x580:  sub    $0x18,%esp
08125820 +0x583:  mov    0x8(%ebp),%eax
08125823 +0x586:  movl   $&_ZTVN8APSystem25Dispatcher_GetTodayRewardE+0x8,(%eax)
08125829 +0x58c:  mov    0x8(%ebp),%eax
0812582c +0x58f:  mov    %eax,(%esp)
0812582f +0x592:  call   08125696 <+0x3f9>
08125834 +0x597:  mov    $0x0,%eax
08125839 +0x59c:  test   %al,%al
0812583b +0x59e:  je     08125848 <+0x5ab>
0812583d +0x5a0:  mov    0x8(%ebp),%eax
08125840 +0x5a3:  mov    %eax,(%esp)
08125843 +0x5a6:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08125848 +0x5ab:  leave
08125849 +0x5ac:  ret
0812584a +0x5ad:  push   %ebp
0812584b +0x5ae:  mov    %esp,%ebp
0812584d +0x5b0:  sub    $0x18,%esp
08125850 +0x5b3:  mov    0x8(%ebp),%eax
08125853 +0x5b6:  mov    %eax,(%esp)
08125856 +0x5b9:  call   0812581a <+0x57d>
0812585b +0x5be:  mov    0x8(%ebp),%eax
0812585e +0x5c1:  mov    %eax,(%esp)
08125861 +0x5c4:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08125866 +0x5c9:  leave
08125867 +0x5ca:  ret
08125868 +0x5cb:  push   %ebp
08125869 +0x5cc:  mov    %esp,%ebp
0812586b +0x5ce:  sub    $0x18,%esp
0812586e +0x5d1:  mov    0x8(%ebp),%eax
08125871 +0x5d4:  movl   $&_ZTVN8APSystem22Dispatcher_ClearActionE+0x8,(%eax)
08125877 +0x5da:  mov    0x8(%ebp),%eax
0812587a +0x5dd:  mov    %eax,(%esp)
0812587d +0x5e0:  call   08125696 <+0x3f9>
08125882 +0x5e5:  mov    $0x0,%eax
08125887 +0x5ea:  test   %al,%al
08125889 +0x5ec:  je     08125896 <+0x5f9>
0812588b +0x5ee:  mov    0x8(%ebp),%eax
0812588e +0x5f1:  mov    %eax,(%esp)
08125891 +0x5f4:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08125896 +0x5f9:  leave
08125897 +0x5fa:  ret
08125898 +0x5fb:  push   %ebp
08125899 +0x5fc:  mov    %esp,%ebp
0812589b +0x5fe:  sub    $0x18,%esp
0812589e +0x601:  mov    0x8(%ebp),%eax
081258a1 +0x604:  mov    %eax,(%esp)
081258a4 +0x607:  call   08125868 <+0x5cb>
081258a9 +0x60c:  mov    0x8(%ebp),%eax
081258ac +0x60f:  mov    %eax,(%esp)
081258af +0x612:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081258b4 +0x617:  leave
081258b5 +0x618:  ret
081258b6 +0x619:  push   %ebp
081258b7 +0x61a:  mov    %esp,%ebp
081258b9 +0x61c:  push   %esi
081258ba +0x61d:  push   %ebx
081258bb +0x61e:  sub    $0x30,%esp
081258be +0x621:  mov    0x8(%ebp),%eax
081258c1 +0x624:  mov    (%eax),%eax
081258c3 +0x626:  add    $0x10,%eax
081258c6 +0x629:  mov    (%eax),%edx
081258c8 +0x62b:  mov    0x10(%ebp),%eax
081258cb +0x62e:  mov    %eax,0x8(%esp)
081258cf +0x632:  mov    0xc(%ebp),%eax
081258d2 +0x635:  mov    %eax,0x4(%esp)
081258d6 +0x639:  mov    0x8(%ebp),%eax
081258d9 +0x63c:  mov    %eax,(%esp)
081258dc +0x63f:  call   *%edx
081258de +0x641:  test   %eax,%eax
081258e0 +0x643:  setg   %al
081258e3 +0x646:  test   %al,%al
081258e5 +0x648:  je     081258f1 <+0x654>
081258e7 +0x64a:  mov    $0x0,%ebx
081258ec +0x64f:  jmp    081259fd <+0x760>
081258f1 +0x654:  movl   $0x0,-0xc(%ebp)
081258f8 +0x65b:  mov    0x8(%ebp),%eax
081258fb +0x65e:  mov    (%eax),%eax
081258fd +0x660:  add    $0x14,%eax
08125900 +0x663:  mov    (%eax),%edx
08125902 +0x665:  lea    -0x19(%ebp),%eax
08125905 +0x668:  mov    %eax,0x8(%esp)
08125909 +0x66c:  mov    0x10(%ebp),%eax
0812590c +0x66f:  mov    %eax,0x4(%esp)
08125910 +0x673:  mov    0x8(%ebp),%eax
08125913 +0x676:  mov    %eax,(%esp)
08125916 +0x679:  call   *%edx
08125918 +0x67b:  mov    %eax,-0xc(%ebp)
0812591b +0x67e:  cmpl   $0x0,-0xc(%ebp)
0812591f +0x682:  setne  %al
08125922 +0x685:  test   %al,%al
08125924 +0x687:  je     0812592e <+0x691>
08125926 +0x689:  mov    -0xc(%ebp),%ebx
08125929 +0x68c:  jmp    081259fd <+0x760>
0812592e +0x691:  lea    -0x1d(%ebp),%eax
08125931 +0x694:  mov    %eax,(%esp)
08125934 +0x697:  call   0812530c <+0x6f>
08125939 +0x69c:  mov    0x8(%ebp),%eax
0812593c +0x69f:  mov    (%eax),%eax
0812593e +0x6a1:  add    $0x18,%eax
08125941 +0x6a4:  mov    (%eax),%edx
08125943 +0x6a6:  lea    -0x1d(%ebp),%eax
08125946 +0x6a9:  mov    %eax,0xc(%esp)
0812594a +0x6ad:  lea    -0x19(%ebp),%eax
0812594d +0x6b0:  mov    %eax,0x8(%esp)
08125951 +0x6b4:  mov    0xc(%ebp),%eax
08125954 +0x6b7:  mov    %eax,0x4(%esp)
08125958 +0x6bb:  mov    0x8(%ebp),%eax
0812595b +0x6be:  mov    %eax,(%esp)
0812595e +0x6c1:  call   *%edx
08125960 +0x6c3:  mov    %eax,-0xc(%ebp)
08125963 +0x6c6:  cmpl   $0x0,-0xc(%ebp)
08125967 +0x6ca:  setg   %al
0812596a +0x6cd:  test   %al,%al
0812596c +0x6cf:  je     08125973 <+0x6d6>
0812596e +0x6d1:  mov    -0xc(%ebp),%ebx
08125971 +0x6d4:  jmp    081259f2 <+0x755>
08125973 +0x6d6:  cmpl   $0x0,-0xc(%ebp)
08125977 +0x6da:  jns    08125980 <+0x6e3>
08125979 +0x6dc:  mov    $0x0,%ebx
0812597e +0x6e1:  jmp    081259f2 <+0x755>
08125980 +0x6e3:  mov    0x8(%ebp),%eax
08125983 +0x6e6:  mov    (%eax),%eax
08125985 +0x6e8:  add    $0x1c,%eax
08125988 +0x6eb:  mov    (%eax),%edx
0812598a +0x6ed:  lea    -0x1d(%ebp),%eax
0812598d +0x6f0:  mov    %eax,0x8(%esp)
08125991 +0x6f4:  mov    0xc(%ebp),%eax
08125994 +0x6f7:  mov    %eax,0x4(%esp)
08125998 +0x6fb:  mov    0x8(%ebp),%eax
0812599b +0x6fe:  mov    %eax,(%esp)
0812599e +0x701:  call   *%edx
081259a0 +0x703:  mov    0x8(%ebp),%eax
081259a3 +0x706:  mov    (%eax),%eax
081259a5 +0x708:  add    $0xc,%eax
081259a8 +0x70b:  mov    (%eax),%edx
081259aa +0x70d:  mov    0x10(%ebp),%eax
081259ad +0x710:  mov    %eax,0x8(%esp)
081259b1 +0x714:  mov    0xc(%ebp),%eax
081259b4 +0x717:  mov    %eax,0x4(%esp)
081259b8 +0x71b:  mov    0x8(%ebp),%eax
081259bb +0x71e:  mov    %eax,(%esp)
081259be +0x721:  call   *%edx
081259c0 +0x723:  test   %eax,%eax
081259c2 +0x725:  setg   %al
081259c5 +0x728:  test   %al,%al
081259c7 +0x72a:  je     081259d0 <+0x733>
081259c9 +0x72c:  mov    $0x85,%ebx
081259ce +0x731:  jmp    081259f2 <+0x755>
081259d0 +0x733:  mov    $0x0,%ebx
081259d5 +0x738:  jmp    081259f2 <+0x755>
081259d7 +0x73a:  mov    %edx,%ebx
081259d9 +0x73c:  mov    %eax,%esi
081259db +0x73e:  lea    -0x1d(%ebp),%eax
081259de +0x741:  mov    %eax,(%esp)
081259e1 +0x744:  call   081252c8 <+0x2b>
081259e6 +0x749:  mov    %esi,%eax
081259e8 +0x74b:  mov    %ebx,%edx
081259ea +0x74d:  mov    %eax,(%esp)
081259ed +0x750:  call   08ae3750 <_Unwind_Resume>
081259f2 +0x755:  lea    -0x1d(%ebp),%eax
081259f5 +0x758:  mov    %eax,(%esp)
081259f8 +0x75b:  call   081252c8 <+0x2b>
081259fd +0x760:  mov    %ebx,%eax
081259ff +0x762:  add    $0x30,%esp
08125a02 +0x765:  pop    %ebx
08125a03 +0x766:  pop    %esi
08125a04 +0x767:  pop    %ebp
08125a05 +0x768:  ret
08125a06 +0x769:  push   %ebp
08125a07 +0x76a:  mov    %esp,%ebp
08125a09 +0x76c:  sub    $0x38,%esp
08125a0c +0x76f:  mov    0xc(%ebp),%eax
08125a0f +0x772:  mov    %eax,(%esp)
08125a12 +0x775:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08125a17 +0x77a:  shr    $0x1f,%eax
08125a1a +0x77d:  test   %al,%al
08125a1c +0x77f:  je     08125a90 <+0x7f3>
08125a1e +0x781:  movl   $0x1,0x4(%esp)
08125a26 +0x789:  mov    0x10(%ebp),%eax
08125a29 +0x78c:  mov    %eax,(%esp)
08125a2c +0x78f:  call   081252ba <+0x1d>
08125a31 +0x794:  lea    -0xa(%ebp),%eax
08125a34 +0x797:  mov    %eax,0x4(%esp)
08125a38 +0x79b:  mov    0x10(%ebp),%eax
08125a3b +0x79e:  mov    %eax,(%esp)
08125a3e +0x7a1:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
08125a43 +0x7a6:  mov    0x10(%ebp),%eax
08125a46 +0x7a9:  mov    %eax,(%esp)
08125a49 +0x7ac:  call   0858da52 <_ZNK9PacketBuf7get_lenEv>  ; PacketBuf::get_len() const
08125a4e +0x7b1:  movzwl -0xa(%ebp),%edx
08125a52 +0x7b5:  movswl %dx,%edx
08125a55 +0x7b8:  mov    %eax,0x18(%esp)
08125a59 +0x7bc:  mov    %edx,0x14(%esp)
08125a5d +0x7c0:  movl   $"return __LINE__: code(%d) size(%d)",0x10(%esp)
08125a65 +0x7c8:  movl   $0x94,0xc(%esp)
08125a6d +0x7d0:  movl   $&_ZZN17IPacketDispatcherI8MSG_BASE9ParamBaseL8ch_state0EE11check_stateEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x8(%esp)
08125a75 +0x7d8:  movl   $"localchina/../PacketDispatcher.h",0x4(%esp)
08125a7d +0x7e0:  movl   $0x1,(%esp)
08125a84 +0x7e7:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08125a89 +0x7ec:  mov    $0x95,%eax
08125a8e +0x7f1:  jmp    08125a95 <+0x7f8>
08125a90 +0x7f3:  mov    $0x0,%eax
08125a95 +0x7f8:  leave
08125a96 +0x7f9:  ret
08125a97 +0x7fa:  nop
08125a98 +0x7fb:  push   %ebp
08125a99 +0x7fc:  mov    %esp,%ebp
08125a9b +0x7fe:  pop    %ebp
08125a9c +0x7ff:  ret
08125a9d +0x800:  nop
08125a9e +0x801:  push   %ebp
08125a9f +0x802:  mov    %esp,%ebp
08125aa1 +0x804:  mov    $0x0,%eax
08125aa6 +0x809:  pop    %ebp
08125aa7 +0x80a:  ret
```

## 反编译 C

```c
// <global>::global @ 0x812529d

/* APSystem::g_szZipAP_CLEAR_STATE */

void APSystem::_GLOBAL__I_g_szZipAP_CLEAR_STATE(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
