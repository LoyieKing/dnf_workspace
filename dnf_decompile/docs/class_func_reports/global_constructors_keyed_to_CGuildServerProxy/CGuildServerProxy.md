# CGuildServerProxy

`_GLOBAL__I__ZN17CGuildServerProxyC2ESsii`

`global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CGuildServerProxy` | `0x0846f230` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846f230  _GLOBAL__I__ZN17CGuildServerProxyC2ESsii
#           global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)
# range [0x0846f230, 0x084704fb]
0846f230 +0x0000:  push   %ebp
0846f231 +0x0001:  mov    %esp,%ebp
0846f233 +0x0003:  sub    $0x18,%esp
0846f236 +0x0006:  movl   $0xffff,0x4(%esp)
0846f23e +0x000e:  movl   $0x1,(%esp)
0846f245 +0x0015:  call   0846f1f0 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0846f24a +0x001a:  leave
0846f24b +0x001b:  ret
0846f24c +0x001c:  push   %ebp
0846f24d +0x001d:  mov    %esp,%ebp
0846f24f +0x001f:  sub    $0x18,%esp
0846f252 +0x0022:  mov    0x8(%ebp),%eax
0846f255 +0x0025:  movl   $0x33,0x8(%esp)
0846f25d +0x002d:  movl   $0x3e8,0x4(%esp)
0846f265 +0x0035:  mov    %eax,(%esp)
0846f268 +0x0038:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
0846f26d +0x003d:  mov    0x8(%ebp),%eax
0846f270 +0x0040:  movl   $0x0,0xa(%eax)
0846f277 +0x0047:  mov    0x8(%ebp),%eax
0846f27a +0x004a:  movl   $0x0,0xe(%eax)
0846f281 +0x0051:  mov    0x8(%ebp),%eax
0846f284 +0x0054:  movb   $0xff,0x12(%eax)
0846f288 +0x0058:  mov    0x8(%ebp),%eax
0846f28b +0x005b:  movb   $0xff,0x23(%eax)
0846f28f +0x005f:  mov    0x8(%ebp),%eax
0846f292 +0x0062:  add    $0x2c,%eax
0846f295 +0x0065:  movl   $0x7,0x8(%esp)
0846f29d +0x006d:  movl   $0x0,0x4(%esp)
0846f2a5 +0x0075:  mov    %eax,(%esp)
0846f2a8 +0x0078:  call   0807dcc0 <_init+0x5b8>
0846f2ad +0x007d:  leave
0846f2ae +0x007e:  ret
0846f2af +0x007f:  nop
0846f2b0 +0x0080:  push   %ebp
0846f2b1 +0x0081:  mov    %esp,%ebp
0846f2b3 +0x0083:  sub    $0x18,%esp
0846f2b6 +0x0086:  mov    0x8(%ebp),%eax
0846f2b9 +0x0089:  movl   $0x12,0x8(%esp)
0846f2c1 +0x0091:  movl   $0x3f5,0x4(%esp)
0846f2c9 +0x0099:  mov    %eax,(%esp)
0846f2cc +0x009c:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
0846f2d1 +0x00a1:  leave
0846f2d2 +0x00a2:  ret
0846f2d3 +0x00a3:  nop
0846f2d4 +0x00a4:  push   %ebp
0846f2d5 +0x00a5:  mov    %esp,%ebp
0846f2d7 +0x00a7:  sub    $0x18,%esp
0846f2da +0x00aa:  mov    0x8(%ebp),%eax
0846f2dd +0x00ad:  movl   $0x3b,0x8(%esp)
0846f2e5 +0x00b5:  movl   $0x3e9,0x4(%esp)
0846f2ed +0x00bd:  mov    %eax,(%esp)
0846f2f0 +0x00c0:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
0846f2f5 +0x00c5:  mov    0x8(%ebp),%eax
0846f2f8 +0x00c8:  movl   $0x0,0xa(%eax)
0846f2ff +0x00cf:  mov    0x8(%ebp),%eax
0846f302 +0x00d2:  movb   $0xff,0xe(%eax)
0846f306 +0x00d6:  mov    0x8(%ebp),%eax
0846f309 +0x00d9:  movl   $0x0,0xf(%eax)
0846f310 +0x00e0:  mov    0x8(%ebp),%eax
0846f313 +0x00e3:  movl   $0x0,0x13(%eax)
0846f31a +0x00ea:  mov    0x8(%ebp),%eax
0846f31d +0x00ed:  movb   $0x0,0x17(%eax)
0846f321 +0x00f1:  mov    0x8(%ebp),%eax
0846f324 +0x00f4:  movl   $0x0,0x18(%eax)
0846f32b +0x00fb:  mov    0x8(%ebp),%eax
0846f32e +0x00fe:  add    $0x1c,%eax
0846f331 +0x0101:  movl   $0x1e,0x8(%esp)
0846f339 +0x0109:  movl   $0x0,0x4(%esp)
0846f341 +0x0111:  mov    %eax,(%esp)
0846f344 +0x0114:  call   0807dcc0 <_init+0x5b8>
0846f349 +0x0119:  leave
0846f34a +0x011a:  ret
0846f34b +0x011b:  nop
0846f34c +0x011c:  push   %ebp
0846f34d +0x011d:  mov    %esp,%ebp
0846f34f +0x011f:  sub    $0x18,%esp
0846f352 +0x0122:  mov    0x8(%ebp),%eax
0846f355 +0x0125:  movl   $0xb,0x8(%esp)
0846f35d +0x012d:  movl   $0x3ec,0x4(%esp)
0846f365 +0x0135:  mov    %eax,(%esp)
0846f368 +0x0138:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
0846f36d +0x013d:  mov    0x8(%ebp),%eax
0846f370 +0x0140:  movb   $0xff,0xa(%eax)
0846f374 +0x0144:  leave
0846f375 +0x0145:  ret
0846f376 +0x0146:  push   %ebp
0846f377 +0x0147:  mov    %esp,%ebp
0846f379 +0x0149:  sub    $0x18,%esp
0846f37c +0x014c:  mov    0x8(%ebp),%eax
0846f37f +0x014f:  movl   $0x1c,0x8(%esp)
0846f387 +0x0157:  movl   $0x40e,0x4(%esp)
0846f38f +0x015f:  mov    %eax,(%esp)
0846f392 +0x0162:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
0846f397 +0x0167:  mov    0x8(%ebp),%eax
0846f39a +0x016a:  movb   $0x0,0x17(%eax)
0846f39e +0x016e:  leave
0846f39f +0x016f:  ret
0846f3a0 +0x0170:  push   %ebp
0846f3a1 +0x0171:  mov    %esp,%ebp
0846f3a3 +0x0173:  sub    $0x18,%esp
0846f3a6 +0x0176:  mov    0x8(%ebp),%eax
0846f3a9 +0x0179:  movl   $0x12,0x8(%esp)
0846f3b1 +0x0181:  movl   $0x401,0x4(%esp)
0846f3b9 +0x0189:  mov    %eax,(%esp)
0846f3bc +0x018c:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
0846f3c1 +0x0191:  mov    0x8(%ebp),%eax
0846f3c4 +0x0194:  movl   $0x0,0xe(%eax)
0846f3cb +0x019b:  leave
0846f3cc +0x019c:  ret
0846f3cd +0x019d:  nop
0846f3ce +0x019e:  push   %ebp
0846f3cf +0x019f:  mov    %esp,%ebp
0846f3d1 +0x01a1:  sub    $0x18,%esp
0846f3d4 +0x01a4:  mov    0x8(%ebp),%eax
0846f3d7 +0x01a7:  movl   $0x12,0x8(%esp)
0846f3df +0x01af:  movl   $0x424,0x4(%esp)
0846f3e7 +0x01b7:  mov    %eax,(%esp)
0846f3ea +0x01ba:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
0846f3ef +0x01bf:  mov    0x8(%ebp),%eax
0846f3f2 +0x01c2:  movl   $0x0,0xe(%eax)
0846f3f9 +0x01c9:  leave
0846f3fa +0x01ca:  ret
0846f3fb +0x01cb:  nop
0846f3fc +0x01cc:  push   %ebp
0846f3fd +0x01cd:  mov    %esp,%ebp
0846f3ff +0x01cf:  sub    $0x18,%esp
0846f402 +0x01d2:  mov    0x8(%ebp),%eax
0846f405 +0x01d5:  movl   $0x20,0x8(%esp)
0846f40d +0x01dd:  movl   $0x429,0x4(%esp)
0846f415 +0x01e5:  mov    %eax,(%esp)
0846f418 +0x01e8:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
0846f41d +0x01ed:  leave
0846f41e +0x01ee:  ret
0846f41f +0x01ef:  nop
0846f420 +0x01f0:  push   %ebp
0846f421 +0x01f1:  mov    %esp,%ebp
0846f423 +0x01f3:  sub    $0x18,%esp
0846f426 +0x01f6:  mov    0x8(%ebp),%eax
0846f429 +0x01f9:  movl   $0x1b,0x8(%esp)
0846f431 +0x0201:  movl   $0x408,0x4(%esp)
0846f439 +0x0209:  mov    %eax,(%esp)
0846f43c +0x020c:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
0846f441 +0x0211:  mov    0x8(%ebp),%eax
0846f444 +0x0214:  movl   $0xffffffff,0xa(%eax)
0846f44b +0x021b:  mov    0x8(%ebp),%eax
0846f44e +0x021e:  movl   $0x0,0xe(%eax)
0846f455 +0x0225:  mov    0x8(%ebp),%eax
0846f458 +0x0228:  movl   $0x0,0x12(%eax)
0846f45f +0x022f:  mov    0x8(%ebp),%eax
0846f462 +0x0232:  movb   $0x0,0x16(%eax)
0846f466 +0x0236:  mov    0x8(%ebp),%eax
0846f469 +0x0239:  movl   $0x0,0x17(%eax)
0846f470 +0x0240:  leave
0846f471 +0x0241:  ret
0846f472 +0x0242:  push   %ebp
0846f473 +0x0243:  mov    %esp,%ebp
0846f475 +0x0245:  sub    $0x18,%esp
0846f478 +0x0248:  mov    0x8(%ebp),%eax
0846f47b +0x024b:  movl   $0x18f,0x8(%esp)
0846f483 +0x0253:  movl   $0x40d,0x4(%esp)
0846f48b +0x025b:  mov    %eax,(%esp)
0846f48e +0x025e:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
0846f493 +0x0263:  mov    0x8(%ebp),%eax
0846f496 +0x0266:  movl   $0x0,0xa(%eax)
0846f49d +0x026d:  mov    0x8(%ebp),%eax
0846f4a0 +0x0270:  movl   $0x0,0xe(%eax)
0846f4a7 +0x0277:  mov    0x8(%ebp),%eax
0846f4aa +0x027a:  movb   $0x0,0x12(%eax)
0846f4ae +0x027e:  mov    0x8(%ebp),%eax
0846f4b1 +0x0281:  add    $0x13,%eax
0846f4b4 +0x0284:  movl   $0x17c,0x8(%esp)
0846f4bc +0x028c:  movl   $0x0,0x4(%esp)
0846f4c4 +0x0294:  mov    %eax,(%esp)
0846f4c7 +0x0297:  call   0807dcc0 <_init+0x5b8>
0846f4cc +0x029c:  leave
0846f4cd +0x029d:  ret
0846f4ce +0x029e:  push   %ebp
0846f4cf +0x029f:  mov    %esp,%ebp
0846f4d1 +0x02a1:  sub    $0x18,%esp
0846f4d4 +0x02a4:  mov    0x8(%ebp),%eax
0846f4d7 +0x02a7:  movl   $0x27,0x8(%esp)
0846f4df +0x02af:  movl   $0x4d1,0x4(%esp)
0846f4e7 +0x02b7:  mov    %eax,(%esp)
0846f4ea +0x02ba:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
0846f4ef +0x02bf:  mov    0x8(%ebp),%eax
0846f4f2 +0x02c2:  movl   $0x0,0xa(%eax)
0846f4f9 +0x02c9:  mov    0x8(%ebp),%eax
0846f4fc +0x02cc:  movl   $0x0,0xe(%eax)
0846f503 +0x02d3:  mov    0x8(%ebp),%eax
0846f506 +0x02d6:  add    $0x12,%eax
0846f509 +0x02d9:  movl   $0x15,0x8(%esp)
0846f511 +0x02e1:  movl   $0x0,0x4(%esp)
0846f519 +0x02e9:  mov    %eax,(%esp)
0846f51c +0x02ec:  call   0807dcc0 <_init+0x5b8>
0846f521 +0x02f1:  leave
0846f522 +0x02f2:  ret
0846f523 +0x02f3:  nop
0846f524 +0x02f4:  push   %ebp
0846f525 +0x02f5:  mov    %esp,%ebp
0846f527 +0x02f7:  sub    $0x18,%esp
0846f52a +0x02fa:  mov    0x8(%ebp),%eax
0846f52d +0x02fd:  movl   $0x74,0x8(%esp)
0846f535 +0x0305:  movl   $0x42d,0x4(%esp)
0846f53d +0x030d:  mov    %eax,(%esp)
0846f540 +0x0310:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
0846f545 +0x0315:  mov    0x8(%ebp),%eax
0846f548 +0x0318:  movl   $0x0,0xa(%eax)
0846f54f +0x031f:  mov    0x8(%ebp),%eax
0846f552 +0x0322:  movb   $0x0,0xe(%eax)
0846f556 +0x0326:  mov    0x8(%ebp),%eax
0846f559 +0x0329:  add    $0xf,%eax
0846f55c +0x032c:  movl   $0x65,0x8(%esp)
0846f564 +0x0334:  movl   $0x0,0x4(%esp)
0846f56c +0x033c:  mov    %eax,(%esp)
0846f56f +0x033f:  call   0807dcc0 <_init+0x5b8>
0846f574 +0x0344:  leave
0846f575 +0x0345:  ret
0846f576 +0x0346:  push   %ebp
0846f577 +0x0347:  mov    %esp,%ebp
0846f579 +0x0349:  sub    $0x18,%esp
0846f57c +0x034c:  mov    0x8(%ebp),%eax
0846f57f +0x034f:  movl   $0xb,0x8(%esp)
0846f587 +0x0357:  movl   $0x412,0x4(%esp)
0846f58f +0x035f:  mov    %eax,(%esp)
0846f592 +0x0362:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
0846f597 +0x0367:  leave
0846f598 +0x0368:  ret
0846f599 +0x0369:  nop
0846f59a +0x036a:  push   %ebp
0846f59b +0x036b:  mov    %esp,%ebp
0846f59d +0x036d:  sub    $0x18,%esp
0846f5a0 +0x0370:  mov    0x8(%ebp),%eax
0846f5a3 +0x0373:  movl   $0xb,0x8(%esp)
0846f5ab +0x037b:  movl   $0x416,0x4(%esp)
0846f5b3 +0x0383:  mov    %eax,(%esp)
0846f5b6 +0x0386:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
0846f5bb +0x038b:  leave
0846f5bc +0x038c:  ret
0846f5bd +0x038d:  nop
0846f5be +0x038e:  push   %ebp
0846f5bf +0x038f:  mov    %esp,%ebp
0846f5c1 +0x0391:  sub    $0x18,%esp
0846f5c4 +0x0394:  mov    0x8(%ebp),%eax
0846f5c7 +0x0397:  movl   $0x16,0x8(%esp)
0846f5cf +0x039f:  movl   $0x6db,0x4(%esp)
0846f5d7 +0x03a7:  mov    %eax,(%esp)
0846f5da +0x03aa:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
0846f5df +0x03af:  mov    0x8(%ebp),%eax
0846f5e2 +0x03b2:  movl   $0x0,0xa(%eax)
0846f5e9 +0x03b9:  mov    0x8(%ebp),%eax
0846f5ec +0x03bc:  movl   $0x0,0xe(%eax)
0846f5f3 +0x03c3:  mov    0x8(%ebp),%eax
0846f5f6 +0x03c6:  movl   $0x0,0x12(%eax)
0846f5fd +0x03cd:  leave
0846f5fe +0x03ce:  ret
0846f5ff +0x03cf:  nop
0846f600 +0x03d0:  push   %ebp
0846f601 +0x03d1:  mov    %esp,%ebp
0846f603 +0x03d3:  sub    $0x18,%esp
0846f606 +0x03d6:  mov    0x8(%ebp),%eax
0846f609 +0x03d9:  movl   $0x1a,0x8(%esp)
0846f611 +0x03e1:  movl   $0x6dc,0x4(%esp)
0846f619 +0x03e9:  mov    %eax,(%esp)
0846f61c +0x03ec:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
0846f621 +0x03f1:  mov    0x8(%ebp),%eax
0846f624 +0x03f4:  movl   $0x0,0xa(%eax)
0846f62b +0x03fb:  mov    0x8(%ebp),%eax
0846f62e +0x03fe:  movl   $0x0,0xe(%eax)
0846f635 +0x0405:  mov    0x8(%ebp),%eax
0846f638 +0x0408:  movl   $0x0,0x12(%eax)
0846f63f +0x040f:  mov    0x8(%ebp),%eax
0846f642 +0x0412:  movl   $0x0,0x16(%eax)
0846f649 +0x0419:  leave
0846f64a +0x041a:  ret
0846f64b +0x041b:  nop
0846f64c +0x041c:  push   %ebp
0846f64d +0x041d:  mov    %esp,%ebp
0846f64f +0x041f:  sub    $0x18,%esp
0846f652 +0x0422:  mov    0x8(%ebp),%eax
0846f655 +0x0425:  movl   $0x12,0x8(%esp)
0846f65d +0x042d:  movl   $0x6de,0x4(%esp)
0846f665 +0x0435:  mov    %eax,(%esp)
0846f668 +0x0438:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
0846f66d +0x043d:  mov    0x8(%ebp),%eax
0846f670 +0x0440:  movl   $0x0,0xa(%eax)
0846f677 +0x0447:  mov    0x8(%ebp),%eax
0846f67a +0x044a:  movl   $0x0,0xe(%eax)
0846f681 +0x0451:  leave
0846f682 +0x0452:  ret
0846f683 +0x0453:  nop
0846f684 +0x0454:  push   %ebp
0846f685 +0x0455:  mov    %esp,%ebp
0846f687 +0x0457:  sub    $0x18,%esp
0846f68a +0x045a:  mov    0x8(%ebp),%eax
0846f68d +0x045d:  movl   $0xe,0x8(%esp)
0846f695 +0x0465:  movl   $0x6e0,0x4(%esp)
0846f69d +0x046d:  mov    %eax,(%esp)
0846f6a0 +0x0470:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
0846f6a5 +0x0475:  mov    0x8(%ebp),%eax
0846f6a8 +0x0478:  movl   $0x0,0xa(%eax)
0846f6af +0x047f:  leave
0846f6b0 +0x0480:  ret
0846f6b1 +0x0481:  nop
0846f6b2 +0x0482:  push   %ebp
0846f6b3 +0x0483:  mov    %esp,%ebp
0846f6b5 +0x0485:  sub    $0x18,%esp
0846f6b8 +0x0488:  mov    0x8(%ebp),%eax
0846f6bb +0x048b:  movl   $0x1a,0x8(%esp)
0846f6c3 +0x0493:  movl   $0x6e3,0x4(%esp)
0846f6cb +0x049b:  mov    %eax,(%esp)
0846f6ce +0x049e:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
0846f6d3 +0x04a3:  mov    0x8(%ebp),%eax
0846f6d6 +0x04a6:  movl   $0x0,0xa(%eax)
0846f6dd +0x04ad:  mov    0x8(%ebp),%eax
0846f6e0 +0x04b0:  movl   $0x0,0xe(%eax)
0846f6e7 +0x04b7:  mov    0x8(%ebp),%eax
0846f6ea +0x04ba:  movl   $0x0,0x12(%eax)
0846f6f1 +0x04c1:  mov    0x8(%ebp),%eax
0846f6f4 +0x04c4:  movl   $0x0,0x16(%eax)
0846f6fb +0x04cb:  leave
0846f6fc +0x04cc:  ret
0846f6fd +0x04cd:  nop
0846f6fe +0x04ce:  push   %ebp
0846f6ff +0x04cf:  mov    %esp,%ebp
0846f701 +0x04d1:  sub    $0x18,%esp
0846f704 +0x04d4:  mov    0x8(%ebp),%eax
0846f707 +0x04d7:  movl   $0x5a,0x8(%esp)
0846f70f +0x04df:  movl   $0x6e5,0x4(%esp)
0846f717 +0x04e7:  mov    %eax,(%esp)
0846f71a +0x04ea:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
0846f71f +0x04ef:  mov    0x8(%ebp),%eax
0846f722 +0x04f2:  movl   $0x0,0xa(%eax)
0846f729 +0x04f9:  mov    0x8(%ebp),%eax
0846f72c +0x04fc:  movl   $0x0,0xe(%eax)
0846f733 +0x0503:  mov    0x8(%ebp),%eax
0846f736 +0x0506:  movl   $0x0,0x12(%eax)
0846f73d +0x050d:  mov    0x8(%ebp),%eax
0846f740 +0x0510:  add    $0x16,%eax
0846f743 +0x0513:  movl   $0x44,0x8(%esp)
0846f74b +0x051b:  movl   $0x0,0x4(%esp)
0846f753 +0x0523:  mov    %eax,(%esp)
0846f756 +0x0526:  call   0807dcc0 <_init+0x5b8>
0846f75b +0x052b:  leave
0846f75c +0x052c:  ret
0846f75d +0x052d:  nop
0846f75e +0x052e:  push   %ebp
0846f75f +0x052f:  mov    %esp,%ebp
0846f761 +0x0531:  sub    $0x18,%esp
0846f764 +0x0534:  mov    0x8(%ebp),%eax
0846f767 +0x0537:  movl   $0xe,0x8(%esp)
0846f76f +0x053f:  movl   $0x6b1,0x4(%esp)
0846f777 +0x0547:  mov    %eax,(%esp)
0846f77a +0x054a:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
0846f77f +0x054f:  mov    0x8(%ebp),%eax
0846f782 +0x0552:  movl   $0x0,0xa(%eax)
0846f789 +0x0559:  leave
0846f78a +0x055a:  ret
0846f78b +0x055b:  nop
0846f78c +0x055c:  push   %ebp
0846f78d +0x055d:  mov    %esp,%ebp
0846f78f +0x055f:  sub    $0x18,%esp
0846f792 +0x0562:  mov    0x8(%ebp),%eax
0846f795 +0x0565:  movl   $0x13,0x8(%esp)
0846f79d +0x056d:  movl   $0x6b2,0x4(%esp)
0846f7a5 +0x0575:  mov    %eax,(%esp)
0846f7a8 +0x0578:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
0846f7ad +0x057d:  mov    0x8(%ebp),%eax
0846f7b0 +0x0580:  movl   $0x0,0xa(%eax)
0846f7b7 +0x0587:  mov    0x8(%ebp),%eax
0846f7ba +0x058a:  movl   $0x0,0xe(%eax)
0846f7c1 +0x0591:  mov    0x8(%ebp),%eax
0846f7c4 +0x0594:  movb   $0x0,0x12(%eax)
0846f7c8 +0x0598:  leave
0846f7c9 +0x0599:  ret
0846f7ca +0x059a:  push   %ebp
0846f7cb +0x059b:  mov    %esp,%ebp
0846f7cd +0x059d:  sub    $0x18,%esp
0846f7d0 +0x05a0:  mov    0x8(%ebp),%eax
0846f7d3 +0x05a3:  movl   $0x1c,0x8(%esp)
0846f7db +0x05ab:  movl   $0x6aa,0x4(%esp)
0846f7e3 +0x05b3:  mov    %eax,(%esp)
0846f7e6 +0x05b6:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
0846f7eb +0x05bb:  leave
0846f7ec +0x05bc:  ret
0846f7ed +0x05bd:  nop
0846f7ee +0x05be:  push   %ebp
0846f7ef +0x05bf:  mov    %esp,%ebp
0846f7f1 +0x05c1:  sub    $0x18,%esp
0846f7f4 +0x05c4:  mov    0x8(%ebp),%eax
0846f7f7 +0x05c7:  movl   $0x13,0x8(%esp)
0846f7ff +0x05cf:  movl   $0x6a8,0x4(%esp)
0846f807 +0x05d7:  mov    %eax,(%esp)
0846f80a +0x05da:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
0846f80f +0x05df:  leave
0846f810 +0x05e0:  ret
0846f811 +0x05e1:  nop
0846f812 +0x05e2:  push   %ebp
0846f813 +0x05e3:  mov    %esp,%ebp
0846f815 +0x05e5:  sub    $0x18,%esp
0846f818 +0x05e8:  mov    0x8(%ebp),%eax
0846f81b +0x05eb:  movl   $0x13,0x8(%esp)
0846f823 +0x05f3:  movl   $0x6a9,0x4(%esp)
0846f82b +0x05fb:  mov    %eax,(%esp)
0846f82e +0x05fe:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
0846f833 +0x0603:  leave
0846f834 +0x0604:  ret
0846f835 +0x0605:  nop
0846f836 +0x0606:  push   %ebp
0846f837 +0x0607:  mov    %esp,%ebp
0846f839 +0x0609:  sub    $0x18,%esp
0846f83c +0x060c:  mov    0x8(%ebp),%eax
0846f83f +0x060f:  movl   $0xa,0x8(%esp)
0846f847 +0x0617:  movl   $0x6a6,0x4(%esp)
0846f84f +0x061f:  mov    %eax,(%esp)
0846f852 +0x0622:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
0846f857 +0x0627:  leave
0846f858 +0x0628:  ret
0846f859 +0x0629:  nop
0846f85a +0x062a:  push   %ebp
0846f85b +0x062b:  mov    %esp,%ebp
0846f85d +0x062d:  sub    $0x18,%esp
0846f860 +0x0630:  mov    0x8(%ebp),%eax
0846f863 +0x0633:  movl   $0xa,0x8(%esp)
0846f86b +0x063b:  movl   $0x6a7,0x4(%esp)
0846f873 +0x0643:  mov    %eax,(%esp)
0846f876 +0x0646:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
0846f87b +0x064b:  leave
0846f87c +0x064c:  ret
0846f87d +0x064d:  nop
0846f87e +0x064e:  push   %ebp
0846f87f +0x064f:  mov    %esp,%ebp
0846f881 +0x0651:  sub    $0x18,%esp
0846f884 +0x0654:  mov    0x8(%ebp),%eax
0846f887 +0x0657:  movl   $0x112,0x8(%esp)
0846f88f +0x065f:  movl   $0x432,0x4(%esp)
0846f897 +0x0667:  mov    %eax,(%esp)
0846f89a +0x066a:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
0846f89f +0x066f:  mov    0x8(%ebp),%eax
0846f8a2 +0x0672:  add    $0x12,%eax
0846f8a5 +0x0675:  movl   $0x100,0x8(%esp)
0846f8ad +0x067d:  movl   $0x0,0x4(%esp)
0846f8b5 +0x0685:  mov    %eax,(%esp)
0846f8b8 +0x0688:  call   0807dcc0 <_init+0x5b8>
0846f8bd +0x068d:  leave
0846f8be +0x068e:  ret
0846f8bf +0x068f:  nop
0846f8c0 +0x0690:  push   %ebp
0846f8c1 +0x0691:  mov    %esp,%ebp
0846f8c3 +0x0693:  sub    $0x18,%esp
0846f8c6 +0x0696:  mov    0x8(%ebp),%eax
0846f8c9 +0x0699:  movl   $0x30,0x8(%esp)
0846f8d1 +0x06a1:  movl   $0x434,0x4(%esp)
0846f8d9 +0x06a9:  mov    %eax,(%esp)
0846f8dc +0x06ac:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
0846f8e1 +0x06b1:  mov    0x8(%ebp),%eax
0846f8e4 +0x06b4:  add    $0x12,%eax
0846f8e7 +0x06b7:  movl   $0x1e,0x8(%esp)
0846f8ef +0x06bf:  movl   $0x0,0x4(%esp)
0846f8f7 +0x06c7:  mov    %eax,(%esp)
0846f8fa +0x06ca:  call   0807dcc0 <_init+0x5b8>
0846f8ff +0x06cf:  leave
0846f900 +0x06d0:  ret
0846f901 +0x06d1:  nop
0846f902 +0x06d2:  push   %ebp
0846f903 +0x06d3:  mov    %esp,%ebp
0846f905 +0x06d5:  sub    $0x18,%esp
0846f908 +0x06d8:  mov    0x8(%ebp),%eax
0846f90b +0x06db:  movl   $0xf,0x8(%esp)
0846f913 +0x06e3:  movl   $0x436,0x4(%esp)
0846f91b +0x06eb:  mov    %eax,(%esp)
0846f91e +0x06ee:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
0846f923 +0x06f3:  leave
0846f924 +0x06f4:  ret
0846f925 +0x06f5:  nop
0846f926 +0x06f6:  push   %ebp
0846f927 +0x06f7:  mov    %esp,%ebp
0846f929 +0x06f9:  sub    $0x18,%esp
0846f92c +0x06fc:  mov    0x8(%ebp),%eax
0846f92f +0x06ff:  movl   $0x34,0x8(%esp)
0846f937 +0x0707:  movl   $0x439,0x4(%esp)
0846f93f +0x070f:  mov    %eax,(%esp)
0846f942 +0x0712:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
0846f947 +0x0717:  mov    0x8(%ebp),%eax
0846f94a +0x071a:  add    $0x16,%eax
0846f94d +0x071d:  movl   $0x1e,0x8(%esp)
0846f955 +0x0725:  movl   $0x0,0x4(%esp)
0846f95d +0x072d:  mov    %eax,(%esp)
0846f960 +0x0730:  call   0807dcc0 <_init+0x5b8>
0846f965 +0x0735:  leave
0846f966 +0x0736:  ret
0846f967 +0x0737:  nop
0846f968 +0x0738:  push   %ebp
0846f969 +0x0739:  mov    %esp,%ebp
0846f96b +0x073b:  sub    $0x18,%esp
0846f96e +0x073e:  mov    0x8(%ebp),%eax
0846f971 +0x0741:  movl   $0x30,0x8(%esp)
0846f979 +0x0749:  movl   $0x43b,0x4(%esp)
0846f981 +0x0751:  mov    %eax,(%esp)
0846f984 +0x0754:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
0846f989 +0x0759:  mov    0x8(%ebp),%eax
0846f98c +0x075c:  add    $0x12,%eax
0846f98f +0x075f:  movl   $0x1e,0x8(%esp)
0846f997 +0x0767:  movl   $0x0,0x4(%esp)
0846f99f +0x076f:  mov    %eax,(%esp)
0846f9a2 +0x0772:  call   0807dcc0 <_init+0x5b8>
0846f9a7 +0x0777:  leave
0846f9a8 +0x0778:  ret
0846f9a9 +0x0779:  nop
0846f9aa +0x077a:  push   %ebp
0846f9ab +0x077b:  mov    %esp,%ebp
0846f9ad +0x077d:  sub    $0x18,%esp
0846f9b0 +0x0780:  mov    0x8(%ebp),%eax
0846f9b3 +0x0783:  movl   $0x29,0x8(%esp)
0846f9bb +0x078b:  movl   $0x444,0x4(%esp)
0846f9c3 +0x0793:  mov    %eax,(%esp)
0846f9c6 +0x0796:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
0846f9cb +0x079b:  mov    0x8(%ebp),%eax
0846f9ce +0x079e:  movl   $0x0,0xa(%eax)
0846f9d5 +0x07a5:  mov    0x8(%ebp),%eax
0846f9d8 +0x07a8:  movl   $0x0,0xe(%eax)
0846f9df +0x07af:  mov    0x8(%ebp),%eax
0846f9e2 +0x07b2:  add    $0x12,%eax
0846f9e5 +0x07b5:  movl   $0x17,0x8(%esp)
0846f9ed +0x07bd:  movl   $0x0,0x4(%esp)
0846f9f5 +0x07c5:  mov    %eax,(%esp)
0846f9f8 +0x07c8:  call   0807dcc0 <_init+0x5b8>
0846f9fd +0x07cd:  leave
0846f9fe +0x07ce:  ret
0846f9ff +0x07cf:  nop
0846fa00 +0x07d0:  push   %ebp
0846fa01 +0x07d1:  mov    %esp,%ebp
0846fa03 +0x07d3:  sub    $0x18,%esp
0846fa06 +0x07d6:  mov    0x8(%ebp),%eax
0846fa09 +0x07d9:  movl   $0x34,0x8(%esp)
0846fa11 +0x07e1:  movl   $0x451,0x4(%esp)
0846fa19 +0x07e9:  mov    %eax,(%esp)
0846fa1c +0x07ec:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
0846fa21 +0x07f1:  mov    0x8(%ebp),%eax
0846fa24 +0x07f4:  movl   $0x0,0xa(%eax)
0846fa2b +0x07fb:  mov    0x8(%ebp),%eax
0846fa2e +0x07fe:  movl   $0x0,0xe(%eax)
0846fa35 +0x0805:  mov    0x8(%ebp),%eax
0846fa38 +0x0808:  movl   $0x0,0x12(%eax)
0846fa3f +0x080f:  mov    0x8(%ebp),%eax
0846fa42 +0x0812:  add    $0x16,%eax
0846fa45 +0x0815:  movl   $0x1e,0x8(%esp)
0846fa4d +0x081d:  movl   $0x0,0x4(%esp)
0846fa55 +0x0825:  mov    %eax,(%esp)
0846fa58 +0x0828:  call   0807dcc0 <_init+0x5b8>
0846fa5d +0x082d:  leave
0846fa5e +0x082e:  ret
0846fa5f +0x082f:  nop
0846fa60 +0x0830:  push   %ebp
0846fa61 +0x0831:  mov    %esp,%ebp
0846fa63 +0x0833:  sub    $0x18,%esp
0846fa66 +0x0836:  mov    0x8(%ebp),%eax
0846fa69 +0x0839:  movl   $0x32,0x8(%esp)
0846fa71 +0x0841:  movl   $0x43f,0x4(%esp)
0846fa79 +0x0849:  mov    %eax,(%esp)
0846fa7c +0x084c:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
0846fa81 +0x0851:  mov    0x8(%ebp),%eax
0846fa84 +0x0854:  add    $0x25,%eax
0846fa87 +0x0857:  movl   $0xd,0x8(%esp)
0846fa8f +0x085f:  movl   $0x0,0x4(%esp)
0846fa97 +0x0867:  mov    %eax,(%esp)
0846fa9a +0x086a:  call   0807dcc0 <_init+0x5b8>
0846fa9f +0x086f:  mov    0x8(%ebp),%eax
0846faa2 +0x0872:  add    $0xe,%eax
0846faa5 +0x0875:  movl   $0x17,0x8(%esp)
0846faad +0x087d:  movl   $0x0,0x4(%esp)
0846fab5 +0x0885:  mov    %eax,(%esp)
0846fab8 +0x0888:  call   0807dcc0 <_init+0x5b8>
0846fabd +0x088d:  leave
0846fabe +0x088e:  ret
0846fabf +0x088f:  nop
0846fac0 +0x0890:  push   %ebp
0846fac1 +0x0891:  mov    %esp,%ebp
0846fac3 +0x0893:  sub    $0x18,%esp
0846fac6 +0x0896:  mov    0x8(%ebp),%eax
0846fac9 +0x0899:  movl   $0x1f,0x8(%esp)
0846fad1 +0x08a1:  movl   $0x1f41,0x4(%esp)
0846fad9 +0x08a9:  mov    %eax,(%esp)
0846fadc +0x08ac:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
0846fae1 +0x08b1:  mov    0x8(%ebp),%eax
0846fae4 +0x08b4:  movb   $0x0,0xa(%eax)
0846fae8 +0x08b8:  mov    0x8(%ebp),%eax
0846faeb +0x08bb:  movb   $0x0,0xb(%eax)
0846faef +0x08bf:  mov    0x8(%ebp),%eax
0846faf2 +0x08c2:  movb   $0x0,0xc(%eax)
0846faf6 +0x08c6:  mov    0x8(%ebp),%eax
0846faf9 +0x08c9:  movw   $0x0,0x1d(%eax)
0846faff +0x08cf:  mov    0x8(%ebp),%eax
0846fb02 +0x08d2:  add    $0xd,%eax
0846fb05 +0x08d5:  movl   $0x10,0x8(%esp)
0846fb0d +0x08dd:  movl   $0x0,0x4(%esp)
0846fb15 +0x08e5:  mov    %eax,(%esp)
0846fb18 +0x08e8:  call   0807dcc0 <_init+0x5b8>
0846fb1d +0x08ed:  leave
0846fb1e +0x08ee:  ret
0846fb1f +0x08ef:  nop
0846fb20 +0x08f0:  push   %ebp
0846fb21 +0x08f1:  mov    %esp,%ebp
0846fb23 +0x08f3:  sub    $0x18,%esp
0846fb26 +0x08f6:  mov    0x8(%ebp),%eax
0846fb29 +0x08f9:  movl   $0x17,0x8(%esp)
0846fb31 +0x0901:  movl   $0x1bbc,0x4(%esp)
0846fb39 +0x0909:  mov    %eax,(%esp)
0846fb3c +0x090c:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
0846fb41 +0x0911:  mov    0x8(%ebp),%eax
0846fb44 +0x0914:  movb   $0x0,0xa(%eax)
0846fb48 +0x0918:  mov    0x8(%ebp),%eax
0846fb4b +0x091b:  movl   $0x0,0xb(%eax)
0846fb52 +0x0922:  mov    0x8(%ebp),%eax
0846fb55 +0x0925:  movl   $0x0,0xf(%eax)
0846fb5c +0x092c:  mov    0x8(%ebp),%eax
0846fb5f +0x092f:  movl   $0x0,0x13(%eax)
0846fb66 +0x0936:  leave
0846fb67 +0x0937:  ret
0846fb68 +0x0938:  push   %ebp
0846fb69 +0x0939:  mov    %esp,%ebp
0846fb6b +0x093b:  sub    $0x18,%esp
0846fb6e +0x093e:  mov    0x8(%ebp),%eax
0846fb71 +0x0941:  movl   $0x12,0x8(%esp)
0846fb79 +0x0949:  movl   $0x1bbe,0x4(%esp)
0846fb81 +0x0951:  mov    %eax,(%esp)
0846fb84 +0x0954:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
0846fb89 +0x0959:  mov    0x8(%ebp),%eax
0846fb8c +0x095c:  movl   $0x0,0xa(%eax)
0846fb93 +0x0963:  mov    0x8(%ebp),%eax
0846fb96 +0x0966:  movl   $0x0,0xe(%eax)
0846fb9d +0x096d:  leave
0846fb9e +0x096e:  ret
0846fb9f +0x096f:  nop
0846fba0 +0x0970:  push   %ebp
0846fba1 +0x0971:  mov    %esp,%ebp
0846fba3 +0x0973:  sub    $0x18,%esp
0846fba6 +0x0976:  mov    0x8(%ebp),%eax
0846fba9 +0x0979:  movl   $0x13,0x8(%esp)
0846fbb1 +0x0981:  movl   $0x2329,0x4(%esp)
0846fbb9 +0x0989:  mov    %eax,(%esp)
0846fbbc +0x098c:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
0846fbc1 +0x0991:  mov    0x8(%ebp),%eax
0846fbc4 +0x0994:  movb   $0x0,0xa(%eax)
0846fbc8 +0x0998:  mov    0x8(%ebp),%eax
0846fbcb +0x099b:  movl   $0x0,0xb(%eax)
0846fbd2 +0x09a2:  mov    0x8(%ebp),%eax
0846fbd5 +0x09a5:  movl   $0x0,0xf(%eax)
0846fbdc +0x09ac:  leave
0846fbdd +0x09ad:  ret
0846fbde +0x09ae:  push   %ebp
0846fbdf +0x09af:  mov    %esp,%ebp
0846fbe1 +0x09b1:  sub    $0x18,%esp
0846fbe4 +0x09b4:  mov    0x8(%ebp),%eax
0846fbe7 +0x09b7:  movl   $0x90,0x8(%esp)
0846fbef +0x09bf:  movl   $0x232d,0x4(%esp)
0846fbf7 +0x09c7:  mov    %eax,(%esp)
0846fbfa +0x09ca:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
0846fbff +0x09cf:  mov    0x8(%ebp),%eax
0846fc02 +0x09d2:  movl   $0x0,0xa(%eax)
0846fc09 +0x09d9:  mov    0x8(%ebp),%eax
0846fc0c +0x09dc:  movl   $0x0,0xe(%eax)
0846fc13 +0x09e3:  mov    0x8(%ebp),%eax
0846fc16 +0x09e6:  movl   $0x0,0x12(%eax)
0846fc1d +0x09ed:  mov    0x8(%ebp),%eax
0846fc20 +0x09f0:  movb   $0xff,0x16(%eax)
0846fc24 +0x09f4:  mov    0x8(%ebp),%eax
0846fc27 +0x09f7:  movb   $0xff,0x17(%eax)
0846fc2b +0x09fb:  mov    0x8(%ebp),%eax
0846fc2e +0x09fe:  add    $0x18,%eax
0846fc31 +0x0a01:  movl   $0x78,0x8(%esp)
0846fc39 +0x0a09:  movl   $0x0,0x4(%esp)
0846fc41 +0x0a11:  mov    %eax,(%esp)
0846fc44 +0x0a14:  call   0807dcc0 <_init+0x5b8>
0846fc49 +0x0a19:  leave
0846fc4a +0x0a1a:  ret
0846fc4b +0x0a1b:  nop
0846fc4c +0x0a1c:  push   %ebp
0846fc4d +0x0a1d:  mov    %esp,%ebp
0846fc4f +0x0a1f:  sub    $0x18,%esp
0846fc52 +0x0a22:  mov    0x8(%ebp),%eax
0846fc55 +0x0a25:  movl   $0x16,0x8(%esp)
0846fc5d +0x0a2d:  movl   $0x2331,0x4(%esp)
0846fc65 +0x0a35:  mov    %eax,(%esp)
0846fc68 +0x0a38:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
0846fc6d +0x0a3d:  mov    0x8(%ebp),%eax
0846fc70 +0x0a40:  movl   $0x0,0xa(%eax)
0846fc77 +0x0a47:  mov    0x8(%ebp),%eax
0846fc7a +0x0a4a:  movl   $0x0,0xe(%eax)
0846fc81 +0x0a51:  mov    0x8(%ebp),%eax
0846fc84 +0x0a54:  movl   $0x0,0x12(%eax)
0846fc8b +0x0a5b:  leave
0846fc8c +0x0a5c:  ret
0846fc8d +0x0a5d:  nop
0846fc8e +0x0a5e:  push   %ebp
0846fc8f +0x0a5f:  mov    %esp,%ebp
0846fc91 +0x0a61:  mov    0x8(%ebp),%eax
0846fc94 +0x0a64:  add    $0x24,%eax
0846fc97 +0x0a67:  pop    %ebp
0846fc98 +0x0a68:  ret
0846fc99 +0x0a69:  push   %ebp
0846fc9a +0x0a6a:  mov    %esp,%ebp
0846fc9c +0x0a6c:  push   %esi
0846fc9d +0x0a6d:  push   %ebx
0846fc9e +0x0a6e:  sub    $0x10,%esp
0846fca1 +0x0a71:  mov    0x8(%ebp),%esi
0846fca4 +0x0a74:  mov    0x10(%ebp),%eax
0846fca7 +0x0a77:  mov    %eax,(%esp)
0846fcaa +0x0a7a:  call   0846fdcd <+0xb9d>
0846fcaf +0x0a7f:  mov    %eax,%ebx
0846fcb1 +0x0a81:  mov    0xc(%ebp),%eax
0846fcb4 +0x0a84:  mov    %eax,(%esp)
0846fcb7 +0x0a87:  call   080e2d79 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0xb1f>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0xb1f
0846fcbc +0x0a8c:  mov    %ebx,0x8(%esp)
0846fcc0 +0x0a90:  mov    %eax,0x4(%esp)
0846fcc4 +0x0a94:  mov    %esi,(%esp)
0846fcc7 +0x0a97:  call   0846fdd6 <+0xba6>
0846fccc +0x0a9c:  mov    %esi,%eax
0846fcce +0x0a9e:  add    $0x10,%esp
0846fcd1 +0x0aa1:  pop    %ebx
0846fcd2 +0x0aa2:  pop    %esi
0846fcd3 +0x0aa3:  pop    %ebp
0846fcd4 +0x0aa4:  ret    $0x4
0846fcd7 +0x0aa7:  nop
0846fcd8 +0x0aa8:  push   %ebp
0846fcd9 +0x0aa9:  mov    %esp,%ebp
0846fcdb +0x0aab:  sub    $0x18,%esp
0846fcde +0x0aae:  mov    0xc(%ebp),%eax
0846fce1 +0x0ab1:  mov    %eax,(%esp)
0846fce4 +0x0ab4:  call   080e2d71 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0xb17>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0xb17
0846fce9 +0x0ab9:  mov    (%eax),%edx
0846fceb +0x0abb:  mov    0x8(%ebp),%eax
0846fcee +0x0abe:  mov    %edx,(%eax)
0846fcf0 +0x0ac0:  mov    0xc(%ebp),%eax
0846fcf3 +0x0ac3:  add    $0x4,%eax
0846fcf6 +0x0ac6:  mov    %eax,(%esp)
0846fcf9 +0x0ac9:  call   0846fe29 <+0xbf9>
0846fcfe +0x0ace:  mov    0x8(%ebp),%edx
0846fd01 +0x0ad1:  mov    (%eax),%ecx
0846fd03 +0x0ad3:  mov    %ecx,0x4(%edx)
0846fd06 +0x0ad6:  mov    0x4(%eax),%ecx
0846fd09 +0x0ad9:  mov    %ecx,0x8(%edx)
0846fd0c +0x0adc:  mov    0x8(%eax),%ecx
0846fd0f +0x0adf:  mov    %ecx,0xc(%edx)
0846fd12 +0x0ae2:  mov    0xc(%eax),%ecx
0846fd15 +0x0ae5:  mov    %ecx,0x10(%edx)
0846fd18 +0x0ae8:  mov    0x10(%eax),%ecx
0846fd1b +0x0aeb:  mov    %ecx,0x14(%edx)
0846fd1e +0x0aee:  mov    0x14(%eax),%ecx
0846fd21 +0x0af1:  mov    %ecx,0x18(%edx)
0846fd24 +0x0af4:  movzwl 0x18(%eax),%eax
0846fd28 +0x0af8:  mov    %ax,0x1c(%edx)
0846fd2c +0x0afc:  leave
0846fd2d +0x0afd:  ret
0846fd2e +0x0afe:  push   %ebp
0846fd2f +0x0aff:  mov    %esp,%ebp
0846fd31 +0x0b01:  push   %ebx
0846fd32 +0x0b02:  sub    $0x14,%esp
0846fd35 +0x0b05:  mov    0x8(%ebp),%ebx
0846fd38 +0x0b08:  mov    0xc(%ebp),%eax
0846fd3b +0x0b0b:  mov    0x10(%ebp),%edx
0846fd3e +0x0b0e:  mov    %edx,0x8(%esp)
0846fd42 +0x0b12:  mov    %eax,0x4(%esp)
0846fd46 +0x0b16:  mov    %ebx,(%esp)
0846fd49 +0x0b19:  call   0846fe32 <+0xc02>
0846fd4e +0x0b1e:  sub    $0x4,%esp
0846fd51 +0x0b21:  mov    %ebx,%eax
0846fd53 +0x0b23:  mov    -0x4(%ebp),%ebx
0846fd56 +0x0b26:  leave
0846fd57 +0x0b27:  ret    $0x4
0846fd5a +0x0b2a:  push   %ebp
0846fd5b +0x0b2b:  mov    %esp,%ebp
0846fd5d +0x0b2d:  push   %ebx
0846fd5e +0x0b2e:  sub    $0x14,%esp
0846fd61 +0x0b31:  mov    0x8(%ebp),%ebx
0846fd64 +0x0b34:  mov    0xc(%ebp),%eax
0846fd67 +0x0b37:  mov    0x10(%ebp),%edx
0846fd6a +0x0b3a:  mov    %edx,0x8(%esp)
0846fd6e +0x0b3e:  mov    %eax,0x4(%esp)
0846fd72 +0x0b42:  mov    %ebx,(%esp)
0846fd75 +0x0b45:  call   08470002 <+0xdd2>
0846fd7a +0x0b4a:  sub    $0x4,%esp
0846fd7d +0x0b4d:  mov    %ebx,%eax
0846fd7f +0x0b4f:  mov    -0x4(%ebp),%ebx
0846fd82 +0x0b52:  leave
0846fd83 +0x0b53:  ret    $0x4
0846fd86 +0x0b56:  push   %ebp
0846fd87 +0x0b57:  mov    %esp,%ebp
0846fd89 +0x0b59:  push   %ebx
0846fd8a +0x0b5a:  sub    $0x14,%esp
0846fd8d +0x0b5d:  mov    0x8(%ebp),%ebx
0846fd90 +0x0b60:  mov    0xc(%ebp),%eax
0846fd93 +0x0b63:  mov    %eax,0x4(%esp)
0846fd97 +0x0b67:  mov    %ebx,(%esp)
0846fd9a +0x0b6a:  call   084700c0 <+0xe90>
0846fd9f +0x0b6f:  sub    $0x4,%esp
0846fda2 +0x0b72:  mov    %ebx,%eax
0846fda4 +0x0b74:  mov    -0x4(%ebp),%ebx
0846fda7 +0x0b77:  leave
0846fda8 +0x0b78:  ret    $0x4
0846fdab +0x0b7b:  nop
0846fdac +0x0b7c:  push   %ebp
0846fdad +0x0b7d:  mov    %esp,%ebp
0846fdaf +0x0b7f:  mov    0x8(%ebp),%eax
0846fdb2 +0x0b82:  mov    (%eax),%edx
0846fdb4 +0x0b84:  mov    0xc(%ebp),%eax
0846fdb7 +0x0b87:  mov    (%eax),%eax
0846fdb9 +0x0b89:  cmp    %eax,%edx
0846fdbb +0x0b8b:  sete   %al
0846fdbe +0x0b8e:  pop    %ebp
0846fdbf +0x0b8f:  ret
0846fdc0 +0x0b90:  push   %ebp
0846fdc1 +0x0b91:  mov    %esp,%ebp
0846fdc3 +0x0b93:  mov    0x8(%ebp),%eax
0846fdc6 +0x0b96:  mov    (%eax),%eax
0846fdc8 +0x0b98:  add    $0x10,%eax
0846fdcb +0x0b9b:  pop    %ebp
0846fdcc +0x0b9c:  ret
0846fdcd +0x0b9d:  push   %ebp
0846fdce +0x0b9e:  mov    %esp,%ebp
0846fdd0 +0x0ba0:  mov    0x8(%ebp),%eax
0846fdd3 +0x0ba3:  pop    %ebp
0846fdd4 +0x0ba4:  ret
0846fdd5 +0x0ba5:  nop
0846fdd6 +0x0ba6:  push   %ebp
0846fdd7 +0x0ba7:  mov    %esp,%ebp
0846fdd9 +0x0ba9:  sub    $0x18,%esp
0846fddc +0x0bac:  mov    0xc(%ebp),%eax
0846fddf +0x0baf:  mov    %eax,(%esp)
0846fde2 +0x0bb2:  call   080e2d79 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0xb1f>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0xb1f
0846fde7 +0x0bb7:  mov    (%eax),%edx
0846fde9 +0x0bb9:  mov    0x8(%ebp),%eax
0846fdec +0x0bbc:  mov    %edx,(%eax)
0846fdee +0x0bbe:  mov    0x10(%ebp),%eax
0846fdf1 +0x0bc1:  mov    %eax,(%esp)
0846fdf4 +0x0bc4:  call   0846fdcd <+0xb9d>
0846fdf9 +0x0bc9:  mov    0x8(%ebp),%edx
0846fdfc +0x0bcc:  mov    (%eax),%ecx
0846fdfe +0x0bce:  mov    %ecx,0x4(%edx)
0846fe01 +0x0bd1:  mov    0x4(%eax),%ecx
0846fe04 +0x0bd4:  mov    %ecx,0x8(%edx)
0846fe07 +0x0bd7:  mov    0x8(%eax),%ecx
0846fe0a +0x0bda:  mov    %ecx,0xc(%edx)
0846fe0d +0x0bdd:  mov    0xc(%eax),%ecx
0846fe10 +0x0be0:  mov    %ecx,0x10(%edx)
0846fe13 +0x0be3:  mov    0x10(%eax),%ecx
0846fe16 +0x0be6:  mov    %ecx,0x14(%edx)
0846fe19 +0x0be9:  mov    0x14(%eax),%ecx
0846fe1c +0x0bec:  mov    %ecx,0x18(%edx)
0846fe1f +0x0bef:  movzwl 0x18(%eax),%eax
0846fe23 +0x0bf3:  mov    %ax,0x1c(%edx)
0846fe27 +0x0bf7:  leave
0846fe28 +0x0bf8:  ret
0846fe29 +0x0bf9:  push   %ebp
0846fe2a +0x0bfa:  mov    %esp,%ebp
0846fe2c +0x0bfc:  mov    0x8(%ebp),%eax
0846fe2f +0x0bff:  pop    %ebp
0846fe30 +0x0c00:  ret
0846fe31 +0x0c01:  nop
0846fe32 +0x0c02:  push   %ebp
0846fe33 +0x0c03:  mov    %esp,%ebp
0846fe35 +0x0c05:  push   %esi
0846fe36 +0x0c06:  push   %ebx
0846fe37 +0x0c07:  sub    $0x50,%esp
0846fe3a +0x0c0a:  mov    0x8(%ebp),%ebx
0846fe3d +0x0c0d:  mov    0xc(%ebp),%eax
0846fe40 +0x0c10:  mov    %eax,(%esp)
0846fe43 +0x0c13:  call   082b626c <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x8167>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x8167
0846fe48 +0x0c18:  mov    %eax,-0x14(%ebp)
0846fe4b +0x0c1b:  mov    0xc(%ebp),%eax
0846fe4e +0x0c1e:  mov    %eax,(%esp)
0846fe51 +0x0c21:  call   084700e6 <+0xeb6>
0846fe56 +0x0c26:  mov    %eax,-0x10(%ebp)
0846fe59 +0x0c29:  movb   $0x1,-0x9(%ebp)
0846fe5d +0x0c2d:  jmp    0846febb <+0xc8b>
0846fe5f +0x0c2f:  mov    -0x14(%ebp),%eax
0846fe62 +0x0c32:  mov    %eax,-0x10(%ebp)
0846fe65 +0x0c35:  mov    -0x14(%ebp),%eax
0846fe68 +0x0c38:  mov    %eax,(%esp)
0846fe6b +0x0c3b:  call   084700fa <+0xeca>
0846fe70 +0x0c40:  mov    %eax,%esi
0846fe72 +0x0c42:  mov    0x10(%ebp),%eax
0846fe75 +0x0c45:  mov    %eax,0x4(%esp)
0846fe79 +0x0c49:  lea    -0x2d(%ebp),%eax
0846fe7c +0x0c4c:  mov    %eax,(%esp)
0846fe7f +0x0c4f:  call   084700f2 <+0xec2>
0846fe84 +0x0c54:  mov    0xc(%ebp),%edx
0846fe87 +0x0c57:  mov    %esi,0x8(%esp)
0846fe8b +0x0c5b:  mov    %eax,0x4(%esp)
0846fe8f +0x0c5f:  mov    %edx,(%esp)
0846fe92 +0x0c62:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
0846fe97 +0x0c67:  mov    %al,-0x9(%ebp)
0846fe9a +0x0c6a:  cmpb   $0x0,-0x9(%ebp)
0846fe9e +0x0c6e:  je     0846fead <+0xc7d>
0846fea0 +0x0c70:  mov    -0x14(%ebp),%eax
0846fea3 +0x0c73:  mov    %eax,(%esp)
0846fea6 +0x0c76:  call   082bf3c2 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x112bd>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x112bd
0846feab +0x0c7b:  jmp    0846feb8 <+0xc88>
0846fead +0x0c7d:  mov    -0x14(%ebp),%eax
0846feb0 +0x0c80:  mov    %eax,(%esp)
0846feb3 +0x0c83:  call   082bf3b7 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x112b2>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x112b2
0846feb8 +0x0c88:  mov    %eax,-0x14(%ebp)
0846febb +0x0c8b:  cmpl   $0x0,-0x14(%ebp)
0846febf +0x0c8f:  setne  %al
0846fec2 +0x0c92:  test   %al,%al
0846fec4 +0x0c94:  jne    0846fe5f <+0xc2f>
0846fec6 +0x0c96:  mov    -0x10(%ebp),%eax
0846fec9 +0x0c99:  mov    %eax,0x4(%esp)
0846fecd +0x0c9d:  lea    -0x34(%ebp),%eax
0846fed0 +0x0ca0:  mov    %eax,(%esp)
0846fed3 +0x0ca3:  call   0847011c <+0xeec>
0846fed8 +0x0ca8:  cmpb   $0x0,-0x9(%ebp)
0846fedc +0x0cac:  je     0846ff5d <+0xd2d>
0846fede +0x0cae:  lea    -0x2c(%ebp),%eax
0846fee1 +0x0cb1:  mov    0xc(%ebp),%edx
0846fee4 +0x0cb4:  mov    %edx,0x4(%esp)
0846fee8 +0x0cb8:  mov    %eax,(%esp)
0846feeb +0x0cbb:  call   0847012a <+0xefa>
0846fef0 +0x0cc0:  sub    $0x4,%esp
0846fef3 +0x0cc3:  lea    -0x2c(%ebp),%eax
0846fef6 +0x0cc6:  mov    %eax,0x4(%esp)
0846fefa +0x0cca:  lea    -0x34(%ebp),%eax
0846fefd +0x0ccd:  mov    %eax,(%esp)
0846ff00 +0x0cd0:  call   0846fdac <+0xb7c>
0846ff05 +0x0cd5:  test   %al,%al
0846ff07 +0x0cd7:  je     0846ff52 <+0xd22>
0846ff09 +0x0cd9:  movb   $0x1,-0x25(%ebp)
0846ff0d +0x0cdd:  mov    -0x10(%ebp),%ecx
0846ff10 +0x0ce0:  mov    -0x14(%ebp),%edx
0846ff13 +0x0ce3:  lea    -0x24(%ebp),%eax
0846ff16 +0x0ce6:  mov    0x10(%ebp),%esi
0846ff19 +0x0ce9:  mov    %esi,0x10(%esp)
0846ff1d +0x0ced:  mov    %ecx,0xc(%esp)
0846ff21 +0x0cf1:  mov    %edx,0x8(%esp)
0846ff25 +0x0cf5:  mov    0xc(%ebp),%edx
0846ff28 +0x0cf8:  mov    %edx,0x4(%esp)
0846ff2c +0x0cfc:  mov    %eax,(%esp)
0846ff2f +0x0cff:  call   08470150 <+0xf20>
0846ff34 +0x0d04:  sub    $0x4,%esp
0846ff37 +0x0d07:  lea    -0x25(%ebp),%eax
0846ff3a +0x0d0a:  mov    %eax,0x8(%esp)
0846ff3e +0x0d0e:  lea    -0x24(%ebp),%eax
0846ff41 +0x0d11:  mov    %eax,0x4(%esp)
0846ff45 +0x0d15:  mov    %ebx,(%esp)
0846ff48 +0x0d18:  call   08470218 <+0xfe8>
0846ff4d +0x0d1d:  jmp    0846fff3 <+0xdc3>
0846ff52 +0x0d22:  lea    -0x34(%ebp),%eax
0846ff55 +0x0d25:  mov    %eax,(%esp)
0846ff58 +0x0d28:  call   08470246 <+0x1016>
0846ff5d +0x0d2d:  mov    0x10(%ebp),%eax
0846ff60 +0x0d30:  mov    %eax,0x4(%esp)
0846ff64 +0x0d34:  lea    -0x1e(%ebp),%eax
0846ff67 +0x0d37:  mov    %eax,(%esp)
0846ff6a +0x0d3a:  call   084700f2 <+0xec2>
0846ff6f +0x0d3f:  mov    %eax,%esi
0846ff71 +0x0d41:  mov    -0x34(%ebp),%eax
0846ff74 +0x0d44:  mov    %eax,(%esp)
0846ff77 +0x0d47:  call   08470263 <+0x1033>
0846ff7c +0x0d4c:  mov    0xc(%ebp),%edx
0846ff7f +0x0d4f:  mov    %esi,0x8(%esp)
0846ff83 +0x0d53:  mov    %eax,0x4(%esp)
0846ff87 +0x0d57:  mov    %edx,(%esp)
0846ff8a +0x0d5a:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
0846ff8f +0x0d5f:  test   %al,%al
0846ff91 +0x0d61:  je     0846ffd9 <+0xda9>
0846ff93 +0x0d63:  movb   $0x1,-0x1d(%ebp)
0846ff97 +0x0d67:  mov    -0x10(%ebp),%ecx
0846ff9a +0x0d6a:  mov    -0x14(%ebp),%edx
0846ff9d +0x0d6d:  lea    -0x1c(%ebp),%eax
0846ffa0 +0x0d70:  mov    0x10(%ebp),%esi
0846ffa3 +0x0d73:  mov    %esi,0x10(%esp)
0846ffa7 +0x0d77:  mov    %ecx,0xc(%esp)
0846ffab +0x0d7b:  mov    %edx,0x8(%esp)
0846ffaf +0x0d7f:  mov    0xc(%ebp),%edx
0846ffb2 +0x0d82:  mov    %edx,0x4(%esp)
0846ffb6 +0x0d86:  mov    %eax,(%esp)
0846ffb9 +0x0d89:  call   08470150 <+0xf20>
0846ffbe +0x0d8e:  sub    $0x4,%esp
0846ffc1 +0x0d91:  lea    -0x1d(%ebp),%eax
0846ffc4 +0x0d94:  mov    %eax,0x8(%esp)
0846ffc8 +0x0d98:  lea    -0x1c(%ebp),%eax
0846ffcb +0x0d9b:  mov    %eax,0x4(%esp)
0846ffcf +0x0d9f:  mov    %ebx,(%esp)
0846ffd2 +0x0da2:  call   08470218 <+0xfe8>
0846ffd7 +0x0da7:  jmp    0846fff3 <+0xdc3>
0846ffd9 +0x0da9:  movb   $0x0,-0x15(%ebp)
0846ffdd +0x0dad:  lea    -0x15(%ebp),%eax
0846ffe0 +0x0db0:  mov    %eax,0x8(%esp)
0846ffe4 +0x0db4:  lea    -0x34(%ebp),%eax
0846ffe7 +0x0db7:  mov    %eax,0x4(%esp)
0846ffeb +0x0dbb:  mov    %ebx,(%esp)
0846ffee +0x0dbe:  call   08470286 <+0x1056>
0846fff3 +0x0dc3:  mov    %ebx,%eax
0846fff5 +0x0dc5:  lea    -0x8(%ebp),%esp
0846fff8 +0x0dc8:  add    $0x0,%esp
0846fffb +0x0dcb:  pop    %ebx
0846fffc +0x0dcc:  pop    %esi
0846fffd +0x0dcd:  pop    %ebp
0846fffe +0x0dce:  ret    $0x4
08470001 +0x0dd1:  nop
08470002 +0x0dd2:  push   %ebp
08470003 +0x0dd3:  mov    %esp,%ebp
08470005 +0x0dd5:  push   %esi
08470006 +0x0dd6:  push   %ebx
08470007 +0x0dd7:  sub    $0x30,%esp
0847000a +0x0dda:  mov    0x8(%ebp),%ebx
0847000d +0x0ddd:  mov    0xc(%ebp),%eax
08470010 +0x0de0:  mov    %eax,(%esp)
08470013 +0x0de3:  call   084700e6 <+0xeb6>
08470018 +0x0de8:  mov    %eax,%esi
0847001a +0x0dea:  mov    0xc(%ebp),%eax
0847001d +0x0ded:  mov    %eax,(%esp)
08470020 +0x0df0:  call   082b626c <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x8167>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x8167
08470025 +0x0df5:  lea    -0x10(%ebp),%edx
08470028 +0x0df8:  mov    0x10(%ebp),%ecx
0847002b +0x0dfb:  mov    %ecx,0x10(%esp)
0847002f +0x0dff:  mov    %esi,0xc(%esp)
08470033 +0x0e03:  mov    %eax,0x8(%esp)
08470037 +0x0e07:  mov    0xc(%ebp),%eax
0847003a +0x0e0a:  mov    %eax,0x4(%esp)
0847003e +0x0e0e:  mov    %edx,(%esp)
08470041 +0x0e11:  call   084702b4 <+0x1084>
08470046 +0x0e16:  sub    $0x4,%esp
08470049 +0x0e19:  lea    -0xc(%ebp),%eax
0847004c +0x0e1c:  mov    0xc(%ebp),%edx
0847004f +0x0e1f:  mov    %edx,0x4(%esp)
08470053 +0x0e23:  mov    %eax,(%esp)
08470056 +0x0e26:  call   084700c0 <+0xe90>
0847005b +0x0e2b:  sub    $0x4,%esp
0847005e +0x0e2e:  lea    -0xc(%ebp),%eax
08470061 +0x0e31:  mov    %eax,0x4(%esp)
08470065 +0x0e35:  lea    -0x10(%ebp),%eax
08470068 +0x0e38:  mov    %eax,(%esp)
0847006b +0x0e3b:  call   0846fdac <+0xb7c>
08470070 +0x0e40:  test   %al,%al
08470072 +0x0e42:  jne    08470099 <+0xe69>
08470074 +0x0e44:  mov    -0x10(%ebp),%eax
08470077 +0x0e47:  mov    %eax,(%esp)
0847007a +0x0e4a:  call   08470263 <+0x1033>
0847007f +0x0e4f:  mov    0xc(%ebp),%edx
08470082 +0x0e52:  mov    %eax,0x8(%esp)
08470086 +0x0e56:  mov    0x10(%ebp),%eax
08470089 +0x0e59:  mov    %eax,0x4(%esp)
0847008d +0x0e5d:  mov    %edx,(%esp)
08470090 +0x0e60:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
08470095 +0x0e65:  test   %al,%al
08470097 +0x0e67:  je     084700ad <+0xe7d>
08470099 +0x0e69:  mov    0xc(%ebp),%eax
0847009c +0x0e6c:  mov    %eax,0x4(%esp)
084700a0 +0x0e70:  mov    %ebx,(%esp)
084700a3 +0x0e73:  call   084700c0 <+0xe90>
084700a8 +0x0e78:  sub    $0x4,%esp
084700ab +0x0e7b:  jmp    084700b2 <+0xe82>
084700ad +0x0e7d:  mov    -0x10(%ebp),%eax
084700b0 +0x0e80:  mov    %eax,(%ebx)
084700b2 +0x0e82:  mov    %ebx,%eax
084700b4 +0x0e84:  lea    -0x8(%ebp),%esp
084700b7 +0x0e87:  add    $0x0,%esp
084700ba +0x0e8a:  pop    %ebx
084700bb +0x0e8b:  pop    %esi
084700bc +0x0e8c:  pop    %ebp
084700bd +0x0e8d:  ret    $0x4
084700c0 +0x0e90:  push   %ebp
084700c1 +0x0e91:  mov    %esp,%ebp
084700c3 +0x0e93:  push   %ebx
084700c4 +0x0e94:  sub    $0x14,%esp
084700c7 +0x0e97:  mov    0x8(%ebp),%ebx
084700ca +0x0e9a:  mov    0xc(%ebp),%eax
084700cd +0x0e9d:  add    $0x4,%eax
084700d0 +0x0ea0:  mov    %eax,0x4(%esp)
084700d4 +0x0ea4:  mov    %ebx,(%esp)
084700d7 +0x0ea7:  call   0847011c <+0xeec>
084700dc +0x0eac:  mov    %ebx,%eax
084700de +0x0eae:  add    $0x14,%esp
084700e1 +0x0eb1:  pop    %ebx
084700e2 +0x0eb2:  pop    %ebp
084700e3 +0x0eb3:  ret    $0x4
084700e6 +0x0eb6:  push   %ebp
084700e7 +0x0eb7:  mov    %esp,%ebp
084700e9 +0x0eb9:  mov    0x8(%ebp),%eax
084700ec +0x0ebc:  add    $0x4,%eax
084700ef +0x0ebf:  pop    %ebp
084700f0 +0x0ec0:  ret
084700f1 +0x0ec1:  nop
084700f2 +0x0ec2:  push   %ebp
084700f3 +0x0ec3:  mov    %esp,%ebp
084700f5 +0x0ec5:  mov    0xc(%ebp),%eax
084700f8 +0x0ec8:  pop    %ebp
084700f9 +0x0ec9:  ret
084700fa +0x0eca:  push   %ebp
084700fb +0x0ecb:  mov    %esp,%ebp
084700fd +0x0ecd:  sub    $0x28,%esp
08470100 +0x0ed0:  mov    0x8(%ebp),%eax
08470103 +0x0ed3:  mov    %eax,(%esp)
08470106 +0x0ed6:  call   08470330 <+0x1100>
0847010b +0x0edb:  mov    %eax,0x4(%esp)
0847010f +0x0edf:  lea    -0x9(%ebp),%eax
08470112 +0x0ee2:  mov    %eax,(%esp)
08470115 +0x0ee5:  call   084700f2 <+0xec2>
0847011a +0x0eea:  leave
0847011b +0x0eeb:  ret
0847011c +0x0eec:  push   %ebp
0847011d +0x0eed:  mov    %esp,%ebp
0847011f +0x0eef:  mov    0xc(%ebp),%edx
08470122 +0x0ef2:  mov    0x8(%ebp),%eax
08470125 +0x0ef5:  mov    %edx,(%eax)
08470127 +0x0ef7:  pop    %ebp
08470128 +0x0ef8:  ret
08470129 +0x0ef9:  nop
0847012a +0x0efa:  push   %ebp
0847012b +0x0efb:  mov    %esp,%ebp
0847012d +0x0efd:  push   %ebx
0847012e +0x0efe:  sub    $0x14,%esp
08470131 +0x0f01:  mov    0x8(%ebp),%ebx
08470134 +0x0f04:  mov    0xc(%ebp),%eax
08470137 +0x0f07:  mov    0xc(%eax),%eax
0847013a +0x0f0a:  mov    %eax,0x4(%esp)
0847013e +0x0f0e:  mov    %ebx,(%esp)
08470141 +0x0f11:  call   0847011c <+0xeec>
08470146 +0x0f16:  mov    %ebx,%eax
08470148 +0x0f18:  add    $0x14,%esp
0847014b +0x0f1b:  pop    %ebx
0847014c +0x0f1c:  pop    %ebp
0847014d +0x0f1d:  ret    $0x4
08470150 +0x0f20:  push   %ebp
08470151 +0x0f21:  mov    %esp,%ebp
08470153 +0x0f23:  push   %esi
08470154 +0x0f24:  push   %ebx
08470155 +0x0f25:  sub    $0x20,%esp
08470158 +0x0f28:  mov    0x8(%ebp),%esi
0847015b +0x0f2b:  cmpl   $0x0,0x10(%ebp)
0847015f +0x0f2f:  jne    084701a7 <+0xf77>
08470161 +0x0f31:  mov    0xc(%ebp),%eax
08470164 +0x0f34:  mov    %eax,(%esp)
08470167 +0x0f37:  call   084700e6 <+0xeb6>
0847016c +0x0f3c:  cmp    0x14(%ebp),%eax
0847016f +0x0f3f:  je     084701a7 <+0xf77>
08470171 +0x0f41:  mov    0x14(%ebp),%eax
08470174 +0x0f44:  mov    %eax,(%esp)
08470177 +0x0f47:  call   08470263 <+0x1033>
0847017c +0x0f4c:  mov    %eax,%ebx
0847017e +0x0f4e:  mov    0x18(%ebp),%eax
08470181 +0x0f51:  mov    %eax,0x4(%esp)
08470185 +0x0f55:  lea    -0xe(%ebp),%eax
08470188 +0x0f58:  mov    %eax,(%esp)
0847018b +0x0f5b:  call   084700f2 <+0xec2>
08470190 +0x0f60:  mov    0xc(%ebp),%edx
08470193 +0x0f63:  mov    %ebx,0x8(%esp)
08470197 +0x0f67:  mov    %eax,0x4(%esp)
0847019b +0x0f6b:  mov    %edx,(%esp)
0847019e +0x0f6e:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
084701a3 +0x0f73:  test   %al,%al
084701a5 +0x0f75:  je     084701ae <+0xf7e>
084701a7 +0x0f77:  mov    $0x1,%eax
084701ac +0x0f7c:  jmp    084701b3 <+0xf83>
084701ae +0x0f7e:  mov    $0x0,%eax
084701b3 +0x0f83:  mov    %al,-0xd(%ebp)
084701b6 +0x0f86:  mov    0x18(%ebp),%eax
084701b9 +0x0f89:  mov    %eax,0x4(%esp)
084701bd +0x0f8d:  mov    0xc(%ebp),%eax
084701c0 +0x0f90:  mov    %eax,(%esp)
084701c3 +0x0f93:  call   0847033c <+0x110c>
084701c8 +0x0f98:  mov    %eax,-0xc(%ebp)
084701cb +0x0f9b:  mov    0xc(%ebp),%eax
084701ce +0x0f9e:  lea    0x4(%eax),%ecx
084701d1 +0x0fa1:  mov    -0xc(%ebp),%edx
084701d4 +0x0fa4:  movzbl -0xd(%ebp),%eax
084701d8 +0x0fa8:  mov    %ecx,0xc(%esp)
084701dc +0x0fac:  mov    0x14(%ebp),%ecx
084701df +0x0faf:  mov    %ecx,0x8(%esp)
084701e3 +0x0fb3:  mov    %edx,0x4(%esp)
084701e7 +0x0fb7:  mov    %eax,(%esp)
084701ea +0x0fba:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
084701ef +0x0fbf:  mov    0xc(%ebp),%eax
084701f2 +0x0fc2:  mov    0x14(%eax),%eax
084701f5 +0x0fc5:  lea    0x1(%eax),%edx
084701f8 +0x0fc8:  mov    0xc(%ebp),%eax
084701fb +0x0fcb:  mov    %edx,0x14(%eax)
084701fe +0x0fce:  mov    -0xc(%ebp),%eax
08470201 +0x0fd1:  mov    %eax,0x4(%esp)
08470205 +0x0fd5:  mov    %esi,(%esp)
08470208 +0x0fd8:  call   0847011c <+0xeec>
0847020d +0x0fdd:  mov    %esi,%eax
0847020f +0x0fdf:  add    $0x20,%esp
08470212 +0x0fe2:  pop    %ebx
08470213 +0x0fe3:  pop    %esi
08470214 +0x0fe4:  pop    %ebp
08470215 +0x0fe5:  ret    $0x4
08470218 +0x0fe8:  push   %ebp
08470219 +0x0fe9:  mov    %esp,%ebp
0847021b +0x0feb:  sub    $0x18,%esp
0847021e +0x0fee:  mov    0xc(%ebp),%eax
08470221 +0x0ff1:  mov    %eax,(%esp)
08470224 +0x0ff4:  call   084703bd <+0x118d>
08470229 +0x0ff9:  mov    0x8(%ebp),%edx
0847022c +0x0ffc:  mov    (%eax),%eax
0847022e +0x0ffe:  mov    %eax,(%edx)
08470230 +0x1000:  mov    0x10(%ebp),%eax
08470233 +0x1003:  mov    %eax,(%esp)
08470236 +0x1006:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
0847023b +0x100b:  movzbl (%eax),%edx
0847023e +0x100e:  mov    0x8(%ebp),%eax
08470241 +0x1011:  mov    %dl,0x4(%eax)
08470244 +0x1014:  leave
08470245 +0x1015:  ret
08470246 +0x1016:  push   %ebp
08470247 +0x1017:  mov    %esp,%ebp
08470249 +0x1019:  sub    $0x18,%esp
0847024c +0x101c:  mov    0x8(%ebp),%eax
0847024f +0x101f:  mov    (%eax),%eax
08470251 +0x1021:  mov    %eax,(%esp)
08470254 +0x1024:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
08470259 +0x1029:  mov    0x8(%ebp),%edx
0847025c +0x102c:  mov    %eax,(%edx)
0847025e +0x102e:  mov    0x8(%ebp),%eax
08470261 +0x1031:  leave
08470262 +0x1032:  ret
08470263 +0x1033:  push   %ebp
08470264 +0x1034:  mov    %esp,%ebp
08470266 +0x1036:  sub    $0x28,%esp
08470269 +0x1039:  mov    0x8(%ebp),%eax
0847026c +0x103c:  mov    %eax,(%esp)
0847026f +0x103f:  call   084703c5 <+0x1195>
08470274 +0x1044:  mov    %eax,0x4(%esp)
08470278 +0x1048:  lea    -0x9(%ebp),%eax
0847027b +0x104b:  mov    %eax,(%esp)
0847027e +0x104e:  call   084700f2 <+0xec2>
08470283 +0x1053:  leave
08470284 +0x1054:  ret
08470285 +0x1055:  nop
08470286 +0x1056:  push   %ebp
08470287 +0x1057:  mov    %esp,%ebp
08470289 +0x1059:  sub    $0x18,%esp
0847028c +0x105c:  mov    0xc(%ebp),%eax
0847028f +0x105f:  mov    %eax,(%esp)
08470292 +0x1062:  call   084703d0 <+0x11a0>
08470297 +0x1067:  mov    0x8(%ebp),%edx
0847029a +0x106a:  mov    (%eax),%eax
0847029c +0x106c:  mov    %eax,(%edx)
0847029e +0x106e:  mov    0x10(%ebp),%eax
084702a1 +0x1071:  mov    %eax,(%esp)
084702a4 +0x1074:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
084702a9 +0x1079:  movzbl (%eax),%edx
084702ac +0x107c:  mov    0x8(%ebp),%eax
084702af +0x107f:  mov    %dl,0x4(%eax)
084702b2 +0x1082:  leave
084702b3 +0x1083:  ret
084702b4 +0x1084:  push   %ebp
084702b5 +0x1085:  mov    %esp,%ebp
084702b7 +0x1087:  push   %ebx
084702b8 +0x1088:  sub    $0x14,%esp
084702bb +0x108b:  mov    0x8(%ebp),%ebx
084702be +0x108e:  jmp    0847030c <+0x10dc>
084702c0 +0x1090:  mov    0x10(%ebp),%eax
084702c3 +0x1093:  mov    %eax,(%esp)
084702c6 +0x1096:  call   084700fa <+0xeca>
084702cb +0x109b:  mov    0xc(%ebp),%edx
084702ce +0x109e:  mov    0x18(%ebp),%ecx
084702d1 +0x10a1:  mov    %ecx,0x8(%esp)
084702d5 +0x10a5:  mov    %eax,0x4(%esp)
084702d9 +0x10a9:  mov    %edx,(%esp)
084702dc +0x10ac:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
084702e1 +0x10b1:  xor    $0x1,%eax
084702e4 +0x10b4:  test   %al,%al
084702e6 +0x10b6:  je     084702fe <+0x10ce>
084702e8 +0x10b8:  mov    0x10(%ebp),%eax
084702eb +0x10bb:  mov    %eax,0x14(%ebp)
084702ee +0x10be:  mov    0x10(%ebp),%eax
084702f1 +0x10c1:  mov    %eax,(%esp)
084702f4 +0x10c4:  call   082bf3c2 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x112bd>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x112bd
084702f9 +0x10c9:  mov    %eax,0x10(%ebp)
084702fc +0x10cc:  jmp    0847030c <+0x10dc>
084702fe +0x10ce:  mov    0x10(%ebp),%eax
08470301 +0x10d1:  mov    %eax,(%esp)
08470304 +0x10d4:  call   082bf3b7 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x112b2>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x112b2
08470309 +0x10d9:  mov    %eax,0x10(%ebp)
0847030c +0x10dc:  cmpl   $0x0,0x10(%ebp)
08470310 +0x10e0:  setne  %al
08470313 +0x10e3:  test   %al,%al
08470315 +0x10e5:  jne    084702c0 <+0x1090>
08470317 +0x10e7:  mov    0x14(%ebp),%eax
0847031a +0x10ea:  mov    %eax,0x4(%esp)
0847031e +0x10ee:  mov    %ebx,(%esp)
08470321 +0x10f1:  call   0847011c <+0xeec>
08470326 +0x10f6:  mov    %ebx,%eax
08470328 +0x10f8:  add    $0x14,%esp
0847032b +0x10fb:  pop    %ebx
0847032c +0x10fc:  pop    %ebp
0847032d +0x10fd:  ret    $0x4
08470330 +0x1100:  push   %ebp
08470331 +0x1101:  mov    %esp,%ebp
08470333 +0x1103:  mov    0x8(%ebp),%eax
08470336 +0x1106:  add    $0x10,%eax
08470339 +0x1109:  pop    %ebp
0847033a +0x110a:  ret
0847033b +0x110b:  nop
0847033c +0x110c:  push   %ebp
0847033d +0x110d:  mov    %esp,%ebp
0847033f +0x110f:  push   %esi
08470340 +0x1110:  push   %ebx
08470341 +0x1111:  sub    $0x20,%esp
08470344 +0x1114:  mov    0x8(%ebp),%eax
08470347 +0x1117:  mov    %eax,(%esp)
0847034a +0x111a:  call   084703d8 <+0x11a8>
0847034f +0x111f:  mov    %eax,-0xc(%ebp)
08470352 +0x1122:  mov    0xc(%ebp),%eax
08470355 +0x1125:  mov    %eax,(%esp)
08470358 +0x1128:  call   084703fb <+0x11cb>
0847035d +0x112d:  mov    %eax,%ebx
0847035f +0x112f:  mov    0x8(%ebp),%eax
08470362 +0x1132:  mov    %eax,(%esp)
08470365 +0x1135:  call   082c9404 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x1b2ff>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x1b2ff
0847036a +0x113a:  mov    %ebx,0x8(%esp)
0847036e +0x113e:  mov    -0xc(%ebp),%edx
08470371 +0x1141:  mov    %edx,0x4(%esp)
08470375 +0x1145:  mov    %eax,(%esp)
08470378 +0x1148:  call   08470404 <+0x11d4>
0847037d +0x114d:  jmp    084703b3 <+0x1183>
0847037f +0x114f:  mov    %eax,(%esp)
08470382 +0x1152:  call   08725ce0 <__cxa_begin_catch>
08470387 +0x1157:  mov    -0xc(%ebp),%eax
0847038a +0x115a:  mov    %eax,0x4(%esp)
0847038e +0x115e:  mov    0x8(%ebp),%eax
08470391 +0x1161:  mov    %eax,(%esp)
08470394 +0x1164:  call   082c9426 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x1b321>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x1b321
08470399 +0x1169:  call   08724be0 <__cxa_rethrow>
0847039e +0x116e:  mov    %edx,%ebx
084703a0 +0x1170:  mov    %eax,%esi
084703a2 +0x1172:  call   08725c30 <__cxa_end_catch>
084703a7 +0x1177:  mov    %esi,%eax
084703a9 +0x1179:  mov    %ebx,%edx
084703ab +0x117b:  mov    %eax,(%esp)
084703ae +0x117e:  call   08ae3750 <_Unwind_Resume>
084703b3 +0x1183:  mov    -0xc(%ebp),%eax
084703b6 +0x1186:  add    $0x20,%esp
084703b9 +0x1189:  pop    %ebx
084703ba +0x118a:  pop    %esi
084703bb +0x118b:  pop    %ebp
084703bc +0x118c:  ret
084703bd +0x118d:  push   %ebp
084703be +0x118e:  mov    %esp,%ebp
084703c0 +0x1190:  mov    0x8(%ebp),%eax
084703c3 +0x1193:  pop    %ebp
084703c4 +0x1194:  ret
084703c5 +0x1195:  push   %ebp
084703c6 +0x1196:  mov    %esp,%ebp
084703c8 +0x1198:  mov    0x8(%ebp),%eax
084703cb +0x119b:  add    $0x10,%eax
084703ce +0x119e:  pop    %ebp
084703cf +0x119f:  ret
084703d0 +0x11a0:  push   %ebp
084703d1 +0x11a1:  mov    %esp,%ebp
084703d3 +0x11a3:  mov    0x8(%ebp),%eax
084703d6 +0x11a6:  pop    %ebp
084703d7 +0x11a7:  ret
084703d8 +0x11a8:  push   %ebp
084703d9 +0x11a9:  mov    %esp,%ebp
084703db +0x11ab:  sub    $0x18,%esp
084703de +0x11ae:  mov    0x8(%ebp),%eax
084703e1 +0x11b1:  movl   $0x0,0x8(%esp)
084703e9 +0x11b9:  movl   $0x1,0x4(%esp)
084703f1 +0x11c1:  mov    %eax,(%esp)
084703f4 +0x11c4:  call   08470444 <+0x1214>
084703f9 +0x11c9:  leave
084703fa +0x11ca:  ret
084703fb +0x11cb:  push   %ebp
084703fc +0x11cc:  mov    %esp,%ebp
084703fe +0x11ce:  mov    0x8(%ebp),%eax
08470401 +0x11d1:  pop    %ebp
08470402 +0x11d2:  ret
08470403 +0x11d3:  nop
08470404 +0x11d4:  push   %ebp
08470405 +0x11d5:  mov    %esp,%ebp
08470407 +0x11d7:  push   %ebx
08470408 +0x11d8:  sub    $0x14,%esp
0847040b +0x11db:  mov    0x10(%ebp),%eax
0847040e +0x11de:  mov    %eax,(%esp)
08470411 +0x11e1:  call   084703fb <+0x11cb>
08470416 +0x11e6:  mov    %eax,%ebx
08470418 +0x11e8:  mov    0xc(%ebp),%eax
0847041b +0x11eb:  mov    %eax,0x4(%esp)
0847041f +0x11ef:  movl   $0x30,(%esp)
08470426 +0x11f6:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
0847042b +0x11fb:  mov    %eax,%edx
0847042d +0x11fd:  test   %edx,%edx
0847042f +0x11ff:  je     0847043d <+0x120d>
08470431 +0x1201:  mov    %ebx,0x4(%esp)
08470435 +0x1205:  mov    %eax,(%esp)
08470438 +0x1208:  call   08470482 <+0x1252>
0847043d +0x120d:  add    $0x14,%esp
08470440 +0x1210:  pop    %ebx
08470441 +0x1211:  pop    %ebp
08470442 +0x1212:  ret
08470443 +0x1213:  nop
08470444 +0x1214:  push   %ebp
08470445 +0x1215:  mov    %esp,%ebp
08470447 +0x1217:  sub    $0x18,%esp
0847044a +0x121a:  mov    0x8(%ebp),%eax
0847044d +0x121d:  mov    %eax,(%esp)
08470450 +0x1220:  call   084704f0 <+0x12c0>
08470455 +0x1225:  cmp    0xc(%ebp),%eax
08470458 +0x1228:  setb   %al
0847045b +0x122b:  movzbl %al,%eax
0847045e +0x122e:  test   %eax,%eax
08470460 +0x1230:  setne  %al
08470463 +0x1233:  test   %al,%al
08470465 +0x1235:  je     0847046c <+0x123c>
08470467 +0x1237:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
0847046c +0x123c:  mov    0xc(%ebp),%edx
0847046f +0x123f:  mov    %edx,%eax
08470471 +0x1241:  add    %eax,%eax
08470473 +0x1243:  add    %edx,%eax
08470475 +0x1245:  shl    $0x4,%eax
08470478 +0x1248:  mov    %eax,(%esp)
0847047b +0x124b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08470480 +0x1250:  leave
08470481 +0x1251:  ret
08470482 +0x1252:  push   %ebp
08470483 +0x1253:  mov    %esp,%ebp
08470485 +0x1255:  sub    $0x18,%esp
08470488 +0x1258:  mov    0x8(%ebp),%eax
0847048b +0x125b:  movl   $0x0,(%eax)
08470491 +0x1261:  mov    0x8(%ebp),%eax
08470494 +0x1264:  movl   $0x0,0x4(%eax)
0847049b +0x126b:  mov    0x8(%ebp),%eax
0847049e +0x126e:  movl   $0x0,0x8(%eax)
084704a5 +0x1275:  mov    0x8(%ebp),%eax
084704a8 +0x1278:  movl   $0x0,0xc(%eax)
084704af +0x127f:  mov    0xc(%ebp),%eax
084704b2 +0x1282:  mov    %eax,(%esp)
084704b5 +0x1285:  call   084703fb <+0x11cb>
084704ba +0x128a:  mov    0x8(%ebp),%edx
084704bd +0x128d:  mov    (%eax),%ecx
084704bf +0x128f:  mov    %ecx,0x10(%edx)
084704c2 +0x1292:  mov    0x4(%eax),%ecx
084704c5 +0x1295:  mov    %ecx,0x14(%edx)
084704c8 +0x1298:  mov    0x8(%eax),%ecx
084704cb +0x129b:  mov    %ecx,0x18(%edx)
084704ce +0x129e:  mov    0xc(%eax),%ecx
084704d1 +0x12a1:  mov    %ecx,0x1c(%edx)
084704d4 +0x12a4:  mov    0x10(%eax),%ecx
084704d7 +0x12a7:  mov    %ecx,0x20(%edx)
084704da +0x12aa:  mov    0x14(%eax),%ecx
084704dd +0x12ad:  mov    %ecx,0x24(%edx)
084704e0 +0x12b0:  mov    0x18(%eax),%ecx
084704e3 +0x12b3:  mov    %ecx,0x28(%edx)
084704e6 +0x12b6:  movzwl 0x1c(%eax),%eax
084704ea +0x12ba:  mov    %ax,0x2c(%edx)
084704ee +0x12be:  leave
084704ef +0x12bf:  ret
084704f0 +0x12c0:  push   %ebp
084704f1 +0x12c1:  mov    %esp,%ebp
084704f3 +0x12c3:  mov    $0x5555555,%eax
084704f8 +0x12c8:  pop    %ebp
084704f9 +0x12c9:  ret
084704fa +0x12ca:  nop
084704fb +0x12cb:  nop
```

## 反编译 C

```c
// <global>::global @ 0x846f230

/* CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>,
   std::allocator<char> >, int, int) */

void CGuildServerProxy::_GLOBAL__I_CGuildServerProxy(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
