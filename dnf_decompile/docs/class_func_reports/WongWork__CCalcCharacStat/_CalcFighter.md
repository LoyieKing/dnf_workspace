# _CalcFighter

`_ZN8WongWork15CCalcCharacStat12_CalcFighterEP15_Additioal_infoii`

`WongWork::CCalcCharacStat::_CalcFighter(_Additioal_info*, int, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CCalcCharacStat` | `0x0831f282` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0831f282  _ZN8WongWork15CCalcCharacStat12_CalcFighterEP15_Additioal_infoii
#           WongWork::CCalcCharacStat::_CalcFighter(_Additioal_info*, int, int)
# range [0x0831f282, 0x0831f75b]
0831f282 +0x000:  push   %ebp
0831f283 +0x001:  mov    %esp,%ebp
0831f285 +0x003:  cmpl   $0x4,0xc(%ebp)
0831f289 +0x007:  ja     0831f757 <+0x4d5>
0831f28f +0x00d:  mov    0xc(%ebp),%eax
0831f292 +0x010:  shl    $0x2,%eax
0831f295 +0x013:  mov    &data#09fca992(.rodata)(%eax),%eax
0831f29b +0x019:  jmp    *%eax
0831f29d +0x01b:  mov    0x10(%ebp),%eax
0831f2a0 +0x01e:  sub    $0x1,%eax
0831f2a3 +0x021:  imul   $0x1c2,%eax,%eax
0831f2a9 +0x027:  add    $0x708,%eax
0831f2ae +0x02c:  mov    %eax,%edx
0831f2b0 +0x02e:  mov    0x8(%ebp),%eax
0831f2b3 +0x031:  mov    %edx,(%eax)
0831f2b5 +0x033:  mov    0x10(%ebp),%eax
0831f2b8 +0x036:  sub    $0x1,%eax
0831f2bb +0x039:  imul   $0xfa,%eax,%eax
0831f2c1 +0x03f:  add    $0x5dc,%eax
0831f2c6 +0x044:  mov    %eax,%edx
0831f2c8 +0x046:  mov    0x8(%ebp),%eax
0831f2cb +0x049:  mov    %edx,0x4(%eax)
0831f2ce +0x04c:  mov    0x10(%ebp),%eax
0831f2d1 +0x04f:  sub    $0x1,%eax
0831f2d4 +0x052:  shl    $0x5,%eax
0831f2d7 +0x055:  lea    0x3c(%eax),%edx
0831f2da +0x058:  mov    0x8(%ebp),%eax
0831f2dd +0x05b:  mov    %dx,0x8(%eax)
0831f2e1 +0x05f:  mov    0x10(%ebp),%eax
0831f2e4 +0x062:  sub    $0x1,%eax
0831f2e7 +0x065:  mov    %eax,%edx
0831f2e9 +0x067:  mov    %edx,%eax
0831f2eb +0x069:  shl    $0x2,%eax
0831f2ee +0x06c:  add    %edx,%eax
0831f2f0 +0x06e:  lea    0x0(,%eax,8),%edx
0831f2f7 +0x075:  mov    %edx,%ecx
0831f2f9 +0x077:  sub    %ax,%cx
0831f2fc +0x07a:  mov    %ecx,%eax
0831f2fe +0x07c:  lea    0x3c(%eax),%edx
0831f301 +0x07f:  mov    0x8(%ebp),%eax
0831f304 +0x082:  mov    %dx,0xa(%eax)
0831f308 +0x086:  mov    0x10(%ebp),%eax
0831f30b +0x089:  sub    $0x1,%eax
0831f30e +0x08c:  add    %eax,%eax
0831f310 +0x08e:  mov    %eax,%edx
0831f312 +0x090:  shl    $0x4,%edx
0831f315 +0x093:  mov    %edx,%ecx
0831f317 +0x095:  sub    %ax,%cx
0831f31a +0x098:  mov    %ecx,%eax
0831f31c +0x09a:  lea    0x32(%eax),%edx
0831f31f +0x09d:  mov    0x8(%ebp),%eax
0831f322 +0x0a0:  mov    %dx,0xc(%eax)
0831f326 +0x0a4:  mov    0x10(%ebp),%eax
0831f329 +0x0a7:  sub    $0x1,%eax
0831f32c +0x0aa:  mov    %eax,%edx
0831f32e +0x0ac:  mov    %edx,%eax
0831f330 +0x0ae:  add    %eax,%eax
0831f332 +0x0b0:  add    %edx,%eax
0831f334 +0x0b2:  shl    $0x3,%eax
0831f337 +0x0b5:  sub    %dx,%ax
0831f33a +0x0b8:  lea    0x32(%eax),%edx
0831f33d +0x0bb:  mov    0x8(%ebp),%eax
0831f340 +0x0be:  mov    %dx,0xe(%eax)
0831f344 +0x0c2:  mov    0x10(%ebp),%eax
0831f347 +0x0c5:  sub    $0x1,%eax
0831f34a +0x0c8:  imul   $0x9c4,%eax,%eax
0831f350 +0x0ce:  lea    0x493e0(%eax),%edx
0831f356 +0x0d4:  mov    0x8(%ebp),%eax
0831f359 +0x0d7:  mov    %edx,0x3a(%eax)
0831f35c +0x0da:  mov    0x10(%ebp),%eax
0831f35f +0x0dd:  sub    $0x1,%eax
0831f362 +0x0e0:  mov    %eax,%edx
0831f364 +0x0e2:  mov    %edx,%eax
0831f366 +0x0e4:  shl    $0x2,%eax
0831f369 +0x0e7:  add    %edx,%eax
0831f36b +0x0e9:  shl    $0x2,%eax
0831f36e +0x0ec:  add    $0x1770,%ax
0831f372 +0x0f0:  mov    %eax,%edx
0831f374 +0x0f2:  mov    0x8(%ebp),%eax
0831f377 +0x0f5:  mov    %dx,0x4a(%eax)
0831f37b +0x0f9:  jmp    0831f757 <+0x4d5>
0831f380 +0x0fe:  mov    0x10(%ebp),%eax
0831f383 +0x101:  imul   $0x190,%eax,%eax
0831f389 +0x107:  add    $0x8ca,%eax
0831f38e +0x10c:  mov    %eax,%edx
0831f390 +0x10e:  mov    0x8(%ebp),%eax
0831f393 +0x111:  mov    %edx,(%eax)
0831f395 +0x113:  mov    0x10(%ebp),%eax
0831f398 +0x116:  imul   $0x12c,%eax,%eax
0831f39e +0x11c:  add    $0x15e,%eax
0831f3a3 +0x121:  mov    %eax,%edx
0831f3a5 +0x123:  mov    0x8(%ebp),%eax
0831f3a8 +0x126:  mov    %edx,0x4(%eax)
0831f3ab +0x129:  mov    0x10(%ebp),%eax
0831f3ae +0x12c:  mov    %eax,%edx
0831f3b0 +0x12e:  mov    %edx,%eax
0831f3b2 +0x130:  shl    $0x2,%eax
0831f3b5 +0x133:  add    %edx,%eax
0831f3b7 +0x135:  shl    $0x2,%eax
0831f3ba +0x138:  lea    0xf4(%eax),%edx
0831f3c0 +0x13e:  mov    0x8(%ebp),%eax
0831f3c3 +0x141:  mov    %dx,0x8(%eax)
0831f3c7 +0x145:  mov    0x10(%ebp),%eax
0831f3ca +0x148:  mov    %eax,%edx
0831f3cc +0x14a:  mov    %edx,%eax
0831f3ce +0x14c:  shl    $0x2,%eax
0831f3d1 +0x14f:  add    %edx,%eax
0831f3d3 +0x151:  shl    $0x2,%eax
0831f3d6 +0x154:  lea    0x127(%eax),%edx
0831f3dc +0x15a:  mov    0x8(%ebp),%eax
0831f3df +0x15d:  mov    %dx,0xa(%eax)
0831f3e3 +0x161:  mov    0x10(%ebp),%eax
0831f3e6 +0x164:  mov    %eax,%edx
0831f3e8 +0x166:  mov    %edx,%eax
0831f3ea +0x168:  shl    $0x2,%eax
0831f3ed +0x16b:  add    %edx,%eax
0831f3ef +0x16d:  shl    $0x3,%eax
0831f3f2 +0x170:  lea    -0xa0(%eax),%edx
0831f3f8 +0x176:  mov    0x8(%ebp),%eax
0831f3fb +0x179:  mov    %dx,0xc(%eax)
0831f3ff +0x17d:  mov    0x10(%ebp),%eax
0831f402 +0x180:  mov    %eax,%edx
0831f404 +0x182:  mov    %edx,%eax
0831f406 +0x184:  shl    $0x2,%eax
0831f409 +0x187:  add    %edx,%eax
0831f40b +0x189:  shl    $0x3,%eax
0831f40e +0x18c:  lea    -0x117(%eax),%edx
0831f414 +0x192:  mov    0x8(%ebp),%eax
0831f417 +0x195:  mov    %dx,0xe(%eax)
0831f41b +0x199:  mov    0x10(%ebp),%eax
0831f41e +0x19c:  sub    $0x1,%eax
0831f421 +0x19f:  imul   $0x9c4,%eax,%eax
0831f427 +0x1a5:  lea    0x493e0(%eax),%edx
0831f42d +0x1ab:  mov    0x8(%ebp),%eax
0831f430 +0x1ae:  mov    %edx,0x3a(%eax)
0831f433 +0x1b1:  mov    0x10(%ebp),%eax
0831f436 +0x1b4:  mov    %eax,%edx
0831f438 +0x1b6:  mov    %edx,%eax
0831f43a +0x1b8:  shl    $0x2,%eax
0831f43d +0x1bb:  add    %edx,%eax
0831f43f +0x1bd:  shl    $0x2,%eax
0831f442 +0x1c0:  sub    $0xe6,%ax
0831f446 +0x1c4:  mov    %eax,%edx
0831f448 +0x1c6:  mov    0x8(%ebp),%eax
0831f44b +0x1c9:  mov    %dx,0x40(%eax)
0831f44f +0x1cd:  mov    0x10(%ebp),%eax
0831f452 +0x1d0:  mov    %eax,%edx
0831f454 +0x1d2:  mov    %edx,%eax
0831f456 +0x1d4:  shl    $0x2,%eax
0831f459 +0x1d7:  add    %edx,%eax
0831f45b +0x1d9:  shl    $0x2,%eax
0831f45e +0x1dc:  lea    0x25a8(%eax),%edx
0831f464 +0x1e2:  mov    0x8(%ebp),%eax
0831f467 +0x1e5:  mov    %dx,0x48(%eax)
0831f46b +0x1e9:  mov    0x10(%ebp),%eax
0831f46e +0x1ec:  mov    %eax,%edx
0831f470 +0x1ee:  mov    %edx,%eax
0831f472 +0x1f0:  shl    $0x2,%eax
0831f475 +0x1f3:  add    %edx,%eax
0831f477 +0x1f5:  add    %eax,%eax
0831f479 +0x1f7:  add    $0x1810,%ax
0831f47d +0x1fb:  mov    %eax,%edx
0831f47f +0x1fd:  mov    0x8(%ebp),%eax
0831f482 +0x200:  mov    %dx,0x4a(%eax)
0831f486 +0x204:  jmp    0831f757 <+0x4d5>
0831f48b +0x209:  mov    0x10(%ebp),%eax
0831f48e +0x20c:  imul   $0x1f4,%eax,%eax
0831f494 +0x212:  add    $0x1c2,%eax
0831f499 +0x217:  mov    %eax,%edx
0831f49b +0x219:  mov    0x8(%ebp),%eax
0831f49e +0x21c:  mov    %edx,(%eax)
0831f4a0 +0x21e:  mov    0x10(%ebp),%eax
0831f4a3 +0x221:  imul   $0xc8,%eax,%eax
0831f4a9 +0x227:  add    $0x866,%eax
0831f4ae +0x22c:  mov    %eax,%edx
0831f4b0 +0x22e:  mov    0x8(%ebp),%eax
0831f4b3 +0x231:  mov    %edx,0x4(%eax)
0831f4b6 +0x234:  mov    0x10(%ebp),%eax
0831f4b9 +0x237:  mov    %eax,%edx
0831f4bb +0x239:  mov    %edx,%eax
0831f4bd +0x23b:  shl    $0x2,%eax
0831f4c0 +0x23e:  add    %edx,%eax
0831f4c2 +0x240:  lea    0x0(,%eax,8),%edx
0831f4c9 +0x247:  mov    %edx,%ecx
0831f4cb +0x249:  sub    %ax,%cx
0831f4ce +0x24c:  mov    %ecx,%eax
0831f4d0 +0x24e:  lea    -0x1a(%eax),%edx
0831f4d3 +0x251:  mov    0x8(%ebp),%eax
0831f4d6 +0x254:  mov    %dx,0x8(%eax)
0831f4da +0x258:  mov    0x10(%ebp),%eax
0831f4dd +0x25b:  add    %eax,%eax
0831f4df +0x25d:  mov    %eax,%edx
0831f4e1 +0x25f:  shl    $0x4,%edx
0831f4e4 +0x262:  mov    %edx,%ecx
0831f4e6 +0x264:  sub    %ax,%cx
0831f4e9 +0x267:  mov    %ecx,%eax
0831f4eb +0x269:  lea    0x73(%eax),%edx
0831f4ee +0x26c:  mov    0x8(%ebp),%eax
0831f4f1 +0x26f:  mov    %dx,0xa(%eax)
0831f4f5 +0x273:  mov    0x10(%ebp),%eax
0831f4f8 +0x276:  mov    %eax,%edx
0831f4fa +0x278:  mov    %edx,%eax
0831f4fc +0x27a:  shl    $0x2,%eax
0831f4ff +0x27d:  add    %edx,%eax
0831f501 +0x27f:  lea    0x0(,%eax,8),%edx
0831f508 +0x286:  mov    %edx,%ecx
0831f50a +0x288:  sub    %ax,%cx
0831f50d +0x28b:  mov    %ecx,%eax
0831f50f +0x28d:  lea    -0x46(%eax),%edx
0831f512 +0x290:  mov    0x8(%ebp),%eax
0831f515 +0x293:  mov    %dx,0xc(%eax)
0831f519 +0x297:  mov    0x10(%ebp),%eax
0831f51c +0x29a:  mov    %eax,%edx
0831f51e +0x29c:  mov    %edx,%eax
0831f520 +0x29e:  shl    $0x2,%eax
0831f523 +0x2a1:  add    %edx,%eax
0831f525 +0x2a3:  shl    $0x2,%eax
0831f528 +0x2a6:  lea    0x51(%eax),%edx
0831f52b +0x2a9:  mov    0x8(%ebp),%eax
0831f52e +0x2ac:  mov    %dx,0xe(%eax)
0831f532 +0x2b0:  mov    0x10(%ebp),%eax
0831f535 +0x2b3:  sub    $0x1,%eax
0831f538 +0x2b6:  imul   $0x9c4,%eax,%eax
0831f53e +0x2bc:  lea    0x493e0(%eax),%edx
0831f544 +0x2c2:  mov    0x8(%ebp),%eax
0831f547 +0x2c5:  mov    %edx,0x3a(%eax)
0831f54a +0x2c8:  mov    0x10(%ebp),%eax
0831f54d +0x2cb:  mov    %eax,%edx
0831f54f +0x2cd:  mov    %edx,%eax
0831f551 +0x2cf:  shl    $0x2,%eax
0831f554 +0x2d2:  add    %edx,%eax
0831f556 +0x2d4:  add    %eax,%eax
0831f558 +0x2d6:  lea    0x2468(%eax),%edx
0831f55e +0x2dc:  mov    0x8(%ebp),%eax
0831f561 +0x2df:  mov    %dx,0x46(%eax)
0831f565 +0x2e3:  mov    0x10(%ebp),%eax
0831f568 +0x2e6:  mov    %eax,%edx
0831f56a +0x2e8:  mov    %edx,%eax
0831f56c +0x2ea:  shl    $0x2,%eax
0831f56f +0x2ed:  add    %edx,%eax
0831f571 +0x2ef:  shl    $0x3,%eax
0831f574 +0x2f2:  add    $0x15f4,%ax
0831f578 +0x2f6:  mov    %eax,%edx
0831f57a +0x2f8:  mov    0x8(%ebp),%eax
0831f57d +0x2fb:  mov    %dx,0x4a(%eax)
0831f581 +0x2ff:  jmp    0831f757 <+0x4d5>
0831f586 +0x304:  mov    0x10(%ebp),%eax
0831f589 +0x307:  imul   $0x258,%eax,%eax
0831f58f +0x30d:  sub    $0x546,%eax
0831f594 +0x312:  mov    %eax,%edx
0831f596 +0x314:  mov    0x8(%ebp),%eax
0831f599 +0x317:  mov    %edx,(%eax)
0831f59b +0x319:  mov    0x10(%ebp),%eax
0831f59e +0x31c:  imul   $0x64,%eax,%eax
0831f5a1 +0x31f:  add    $0xf6e,%eax
0831f5a6 +0x324:  mov    %eax,%edx
0831f5a8 +0x326:  mov    0x8(%ebp),%eax
0831f5ab +0x329:  mov    %edx,0x4(%eax)
0831f5ae +0x32c:  mov    0x10(%ebp),%eax
0831f5b1 +0x32f:  mov    %eax,%edx
0831f5b3 +0x331:  mov    %edx,%eax
0831f5b5 +0x333:  shl    $0x3,%eax
0831f5b8 +0x336:  add    %edx,%eax
0831f5ba +0x338:  add    %eax,%eax
0831f5bc +0x33a:  add    %edx,%eax
0831f5be +0x33c:  add    %eax,%eax
0831f5c0 +0x33e:  lea    -0x50(%eax),%edx
0831f5c3 +0x341:  mov    0x8(%ebp),%eax
0831f5c6 +0x344:  mov    %dx,0x8(%eax)
0831f5ca +0x348:  mov    0x10(%ebp),%eax
0831f5cd +0x34b:  mov    %eax,%edx
0831f5cf +0x34d:  mov    %edx,%eax
0831f5d1 +0x34f:  shl    $0x2,%eax
0831f5d4 +0x352:  add    %edx,%eax
0831f5d6 +0x354:  shl    $0x3,%eax
0831f5d9 +0x357:  lea    -0x41(%eax),%edx
0831f5dc +0x35a:  mov    0x8(%ebp),%eax
0831f5df +0x35d:  mov    %dx,0xa(%eax)
0831f5e3 +0x361:  mov    0x10(%ebp),%eax
0831f5e6 +0x364:  mov    %eax,%edx
0831f5e8 +0x366:  mov    %edx,%eax
0831f5ea +0x368:  add    %eax,%eax
0831f5ec +0x36a:  add    %edx,%eax
0831f5ee +0x36c:  lea    0x0(,%eax,8),%edx
0831f5f5 +0x373:  add    %edx,%eax
0831f5f7 +0x375:  lea    0x4a(%eax),%edx
0831f5fa +0x378:  mov    0x8(%ebp),%eax
0831f5fd +0x37b:  mov    %dx,0xc(%eax)
0831f601 +0x37f:  mov    0x10(%ebp),%eax
0831f604 +0x382:  mov    %eax,%edx
0831f606 +0x384:  mov    %edx,%eax
0831f608 +0x386:  shl    $0x4,%eax
0831f60b +0x389:  sub    %dx,%ax
0831f60e +0x38c:  lea    0xab(%eax),%edx
0831f614 +0x392:  mov    0x8(%ebp),%eax
0831f617 +0x395:  mov    %dx,0xe(%eax)
0831f61b +0x399:  mov    0x10(%ebp),%eax
0831f61e +0x39c:  mov    %eax,%edx
0831f620 +0x39e:  mov    %edx,%eax
0831f622 +0x3a0:  add    %eax,%eax
0831f624 +0x3a2:  add    %edx,%eax
0831f626 +0x3a4:  add    %eax,%eax
0831f628 +0x3a6:  sub    $0x134,%ax
0831f62c +0x3aa:  mov    %eax,%edx
0831f62e +0x3ac:  mov    0x8(%ebp),%eax
0831f631 +0x3af:  mov    %dx,0x14(%eax)
0831f635 +0x3b3:  mov    0x10(%ebp),%eax
0831f638 +0x3b6:  imul   $0xbb8,%eax,%eax
0831f63e +0x3bc:  lea    0x466f4(%eax),%edx
0831f644 +0x3c2:  mov    0x8(%ebp),%eax
0831f647 +0x3c5:  mov    %edx,0x3a(%eax)
0831f64a +0x3c8:  mov    0x10(%ebp),%edx
0831f64d +0x3cb:  mov    %edx,%eax
0831f64f +0x3cd:  shl    $0x2,%eax
0831f652 +0x3d0:  add    %edx,%eax
0831f654 +0x3d2:  add    %eax,%eax
0831f656 +0x3d4:  add    $0x22d8,%eax
0831f65b +0x3d9:  mov    %eax,%edx
0831f65d +0x3db:  mov    0x8(%ebp),%eax
0831f660 +0x3de:  mov    %edx,0x42(%eax)
0831f663 +0x3e1:  mov    0x10(%ebp),%eax
0831f666 +0x3e4:  add    %eax,%eax
0831f668 +0x3e6:  mov    %eax,%edx
0831f66a +0x3e8:  shl    $0x4,%edx
0831f66d +0x3eb:  mov    %edx,%ecx
0831f66f +0x3ed:  sub    %ax,%cx
0831f672 +0x3f0:  mov    %ecx,%eax
0831f674 +0x3f2:  add    $0x16a8,%ax
0831f678 +0x3f6:  mov    %eax,%edx
0831f67a +0x3f8:  mov    0x8(%ebp),%eax
0831f67d +0x3fb:  mov    %dx,0x4a(%eax)
0831f681 +0x3ff:  jmp    0831f757 <+0x4d5>
0831f686 +0x404:  mov    0x10(%ebp),%eax
0831f689 +0x407:  imul   $0x1c2,%eax,%eax
0831f68f +0x40d:  add    $0x546,%eax
0831f694 +0x412:  mov    %eax,%edx
0831f696 +0x414:  mov    0x8(%ebp),%eax
0831f699 +0x417:  mov    %edx,(%eax)
0831f69b +0x419:  mov    0x10(%ebp),%eax
0831f69e +0x41c:  imul   $0xfa,%eax,%eax
0831f6a4 +0x422:  add    $0x4e2,%eax
0831f6a9 +0x427:  mov    %eax,%edx
0831f6ab +0x429:  mov    0x8(%ebp),%eax
0831f6ae +0x42c:  mov    %edx,0x4(%eax)
0831f6b1 +0x42f:  mov    0x10(%ebp),%eax
0831f6b4 +0x432:  sub    $0x12,%eax
0831f6b7 +0x435:  shl    $0x5,%eax
0831f6ba +0x438:  lea    0x25c(%eax),%edx
0831f6c0 +0x43e:  mov    0x8(%ebp),%eax
0831f6c3 +0x441:  mov    %dx,0x8(%eax)
0831f6c7 +0x445:  mov    0x10(%ebp),%eax
0831f6ca +0x448:  mov    %eax,%edx
0831f6cc +0x44a:  mov    %edx,%eax
0831f6ce +0x44c:  shl    $0x2,%eax
0831f6d1 +0x44f:  add    %edx,%eax
0831f6d3 +0x451:  lea    0x0(,%eax,8),%edx
0831f6da +0x458:  mov    %edx,%ecx
0831f6dc +0x45a:  sub    %ax,%cx
0831f6df +0x45d:  mov    %ecx,%eax
0831f6e1 +0x45f:  lea    0x19(%eax),%edx
0831f6e4 +0x462:  mov    0x8(%ebp),%eax
0831f6e7 +0x465:  mov    %dx,0xa(%eax)
0831f6eb +0x469:  mov    0x10(%ebp),%eax
0831f6ee +0x46c:  add    %eax,%eax
0831f6f0 +0x46e:  mov    %eax,%edx
0831f6f2 +0x470:  shl    $0x4,%edx
0831f6f5 +0x473:  mov    %edx,%ecx
0831f6f7 +0x475:  sub    %ax,%cx
0831f6fa +0x478:  mov    %ecx,%eax
0831f6fc +0x47a:  lea    0x14(%eax),%edx
0831f6ff +0x47d:  mov    0x8(%ebp),%eax
0831f702 +0x480:  mov    %dx,0xc(%eax)
0831f706 +0x484:  mov    0x10(%ebp),%eax
0831f709 +0x487:  mov    %eax,%edx
0831f70b +0x489:  mov    %edx,%eax
0831f70d +0x48b:  add    %eax,%eax
0831f70f +0x48d:  add    %edx,%eax
0831f711 +0x48f:  shl    $0x3,%eax
0831f714 +0x492:  sub    %dx,%ax
0831f717 +0x495:  lea    0x1b(%eax),%edx
0831f71a +0x498:  mov    0x8(%ebp),%eax
0831f71d +0x49b:  mov    %dx,0xe(%eax)
0831f721 +0x49f:  mov    0x10(%ebp),%eax
0831f724 +0x4a2:  sub    $0x1,%eax
0831f727 +0x4a5:  imul   $0x9c4,%eax,%eax
0831f72d +0x4ab:  lea    0x493e0(%eax),%edx
0831f733 +0x4b1:  mov    0x8(%ebp),%eax
0831f736 +0x4b4:  mov    %edx,0x3a(%eax)
0831f739 +0x4b7:  mov    0x10(%ebp),%eax
0831f73c +0x4ba:  add    %eax,%eax
0831f73e +0x4bc:  mov    %eax,%edx
0831f740 +0x4be:  shl    $0x4,%edx
0831f743 +0x4c1:  mov    %edx,%ecx
0831f745 +0x4c3:  sub    %ax,%cx
0831f748 +0x4c6:  mov    %ecx,%eax
0831f74a +0x4c8:  add    $0x16a8,%ax
0831f74e +0x4cc:  mov    %eax,%edx
0831f750 +0x4ce:  mov    0x8(%ebp),%eax
0831f753 +0x4d1:  mov    %dx,0x4a(%eax)
0831f757 +0x4d5:  mov    0x8(%ebp),%eax
0831f75a +0x4d8:  pop    %ebp
0831f75b +0x4d9:  ret
```

## 反编译 C

```c
// WongWork::CCalcCharacStat::_CalcFighter @ 0x831f282

/* WongWork::CCalcCharacStat::_CalcFighter(_Additioal_info*, int, int) */

_Additioal_info *
WongWork::CCalcCharacStat::_CalcFighter(_Additioal_info *param_1,int param_2,int param_3)

{
  short sVar1;
  
  sVar1 = (short)param_3;
  switch(param_2) {
  case 0:
    *(int *)param_1 = (param_3 + -1) * 0x1c2 + 0x708;
    *(int *)(param_1 + 4) = (param_3 + -1) * 0xfa + 0x5dc;
    *(short *)(param_1 + 8) = (sVar1 + -1) * 0x20 + 0x3c;
    *(short *)(param_1 + 10) = (sVar1 + -1) * 0x23 + 0x3c;
    *(short *)(param_1 + 0xc) = (sVar1 + -1) * 0x1e + 0x32;
    *(short *)(param_1 + 0xe) = (sVar1 + -1) * 0x17 + 0x32;
    *(int *)(param_1 + 0x3a) = (param_3 + -1) * 0x9c4 + 300000;
    *(short *)(param_1 + 0x4a) = (sVar1 + -1) * 0x14 + 6000;
    break;
  case 1:
    *(int *)param_1 = param_3 * 400 + 0x8ca;
    *(int *)(param_1 + 4) = param_3 * 300 + 0x15e;
    *(short *)(param_1 + 8) = ((short)(param_3 << 2) + sVar1) * 4 + 0xf4;
    *(short *)(param_1 + 10) = ((short)(param_3 << 2) + sVar1) * 4 + 0x127;
    *(short *)(param_1 + 0xc) = ((short)(param_3 << 2) + sVar1) * 8 + -0xa0;
    *(short *)(param_1 + 0xe) = ((short)(param_3 << 2) + sVar1) * 8 + -0x117;
    *(int *)(param_1 + 0x3a) = (param_3 + -1) * 0x9c4 + 300000;
    *(short *)(param_1 + 0x40) = ((short)(param_3 << 2) + sVar1) * 4 + -0xe6;
    *(short *)(param_1 + 0x48) = ((short)(param_3 << 2) + sVar1) * 4 + 0x25a8;
    *(short *)(param_1 + 0x4a) = ((short)(param_3 << 2) + sVar1) * 2 + 0x1810;
    break;
  case 2:
    *(int *)param_1 = param_3 * 500 + 0x1c2;
    *(int *)(param_1 + 4) = param_3 * 200 + 0x866;
    *(short *)(param_1 + 8) = sVar1 * 0x23 + -0x1a;
    *(short *)(param_1 + 10) = (short)(param_3 << 5) + sVar1 * -2 + 0x73;
    *(short *)(param_1 + 0xc) = sVar1 * 0x23 + -0x46;
    *(short *)(param_1 + 0xe) = ((short)(param_3 << 2) + sVar1) * 4 + 0x51;
    *(int *)(param_1 + 0x3a) = (param_3 + -1) * 0x9c4 + 300000;
    *(short *)(param_1 + 0x46) = sVar1 * 10 + 0x2468;
    *(short *)(param_1 + 0x4a) = ((short)(param_3 << 2) + sVar1) * 8 + 0x15f4;
    break;
  case 3:
    *(int *)param_1 = param_3 * 600 + -0x546;
    *(int *)(param_1 + 4) = param_3 * 100 + 0xf6e;
    *(short *)(param_1 + 8) = sVar1 * 0x26 + -0x50;
    *(short *)(param_1 + 10) = ((short)(param_3 << 2) + sVar1) * 8 + -0x41;
    *(short *)(param_1 + 0xc) = sVar1 * 0x1b + 0x4a;
    *(short *)(param_1 + 0xe) = ((short)(param_3 << 4) - sVar1) + 0xab;
    *(short *)(param_1 + 0x14) = sVar1 * 6 + -0x134;
    *(int *)(param_1 + 0x3a) = param_3 * 3000 + 0x466f4;
    *(int *)(param_1 + 0x42) = param_3 * 10 + 0x22d8;
    *(short *)(param_1 + 0x4a) = (short)(param_3 << 5) + sVar1 * -2 + 0x16a8;
    break;
  case 4:
    *(int *)param_1 = param_3 * 0x1c2 + 0x546;
    *(int *)(param_1 + 4) = param_3 * 0xfa + 0x4e2;
    *(short *)(param_1 + 8) = (sVar1 + -0x12) * 0x20 + 0x25c;
    *(short *)(param_1 + 10) = sVar1 * 0x23 + 0x19;
    *(short *)(param_1 + 0xc) = (short)(param_3 << 5) + sVar1 * -2 + 0x14;
    *(short *)(param_1 + 0xe) = sVar1 * 0x17 + 0x1b;
    *(int *)(param_1 + 0x3a) = (param_3 + -1) * 0x9c4 + 300000;
    *(short *)(param_1 + 0x4a) = (short)(param_3 << 5) + sVar1 * -2 + 0x16a8;
  }
  return param_1;
}
```
