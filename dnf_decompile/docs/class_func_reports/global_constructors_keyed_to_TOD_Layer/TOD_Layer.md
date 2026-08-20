# TOD_Layer

`_GLOBAL__I__ZN9TOD_LayerC2Et`

`global constructors keyed to TOD_Layer::TOD_Layer(unsigned short)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to TOD_Layer` | `0x085ff0dd` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ff0dd  _GLOBAL__I__ZN9TOD_LayerC2Et
#           global constructors keyed to TOD_Layer::TOD_Layer(unsigned short)
# range [0x085ff0dd, 0x085ffc0f]
085ff0dd +0x000:  push   %ebp
085ff0de +0x001:  mov    %esp,%ebp
085ff0e0 +0x003:  sub    $0x18,%esp
085ff0e3 +0x006:  movl   $0xffff,0x4(%esp)
085ff0eb +0x00e:  movl   $0x1,(%esp)
085ff0f2 +0x015:  call   085ff09d <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
085ff0f7 +0x01a:  leave
085ff0f8 +0x01b:  ret
085ff0f9 +0x01c:  nop
085ff0fa +0x01d:  push   %ebp
085ff0fb +0x01e:  mov    %esp,%ebp
085ff0fd +0x020:  sub    $0x18,%esp
085ff100 +0x023:  mov    0xc(%ebp),%eax
085ff103 +0x026:  mov    %eax,(%esp)
085ff106 +0x029:  call   0822ec40 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x42ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x42ea
085ff10b +0x02e:  mov    0x8(%ebp),%edx
085ff10e +0x031:  mov    %ax,(%edx)
085ff111 +0x034:  leave
085ff112 +0x035:  ret
085ff113 +0x036:  nop
085ff114 +0x037:  push   %ebp
085ff115 +0x038:  mov    %esp,%ebp
085ff117 +0x03a:  mov    0x8(%ebp),%eax
085ff11a +0x03d:  movzwl (%eax),%edx
085ff11d +0x040:  mov    0xc(%ebp),%eax
085ff120 +0x043:  movzwl (%eax),%eax
085ff123 +0x046:  cmp    %ax,%dx
085ff126 +0x049:  setb   %al
085ff129 +0x04c:  pop    %ebp
085ff12a +0x04d:  ret
085ff12b +0x04e:  nop
085ff12c +0x04f:  push   %ebp
085ff12d +0x050:  mov    %esp,%ebp
085ff12f +0x052:  mov    0x8(%ebp),%eax
085ff132 +0x055:  mov    (%eax),%eax
085ff134 +0x057:  pop    %ebp
085ff135 +0x058:  ret
085ff136 +0x059:  push   %ebp
085ff137 +0x05a:  mov    %esp,%ebp
085ff139 +0x05c:  mov    0x8(%ebp),%eax
085ff13c +0x05f:  add    $&_ZL14gUnicodeBuffer+0xce10,%eax
085ff141 +0x064:  pop    %ebp
085ff142 +0x065:  ret
085ff143 +0x066:  nop
085ff144 +0x067:  push   %ebp
085ff145 +0x068:  mov    %esp,%ebp
085ff147 +0x06a:  sub    $0x18,%esp
085ff14a +0x06d:  mov    0x8(%ebp),%eax
085ff14d +0x070:  add    $0x4,%eax
085ff150 +0x073:  mov    %eax,(%esp)
085ff153 +0x076:  call   085fe8ca <_ZN15SendingAPC_InfoD1Ev>  ; SendingAPC_Info::~SendingAPC_Info()
085ff158 +0x07b:  leave
085ff159 +0x07c:  ret
085ff15a +0x07d:  push   %ebp
085ff15b +0x07e:  mov    %esp,%ebp
085ff15d +0x080:  sub    $0x18,%esp
085ff160 +0x083:  mov    0x8(%ebp),%eax
085ff163 +0x086:  add    $0x4,%eax
085ff166 +0x089:  mov    %eax,(%esp)
085ff169 +0x08c:  call   085fe8ca <_ZN15SendingAPC_InfoD1Ev>  ; SendingAPC_Info::~SendingAPC_Info()
085ff16e +0x091:  leave
085ff16f +0x092:  ret
085ff170 +0x093:  push   %ebp
085ff171 +0x094:  mov    %esp,%ebp
085ff173 +0x096:  mov    0x8(%ebp),%eax
085ff176 +0x099:  movl   $0x0,(%eax)
085ff17c +0x09f:  pop    %ebp
085ff17d +0x0a0:  ret
085ff17e +0x0a1:  push   %ebp
085ff17f +0x0a2:  mov    %esp,%ebp
085ff181 +0x0a4:  push   %ebx
085ff182 +0x0a5:  sub    $0x14,%esp
085ff185 +0x0a8:  mov    0x8(%ebp),%ebx
085ff188 +0x0ab:  mov    0xc(%ebp),%eax
085ff18b +0x0ae:  mov    0x10(%ebp),%edx
085ff18e +0x0b1:  mov    %edx,0x8(%esp)
085ff192 +0x0b5:  mov    %eax,0x4(%esp)
085ff196 +0x0b9:  mov    %ebx,(%esp)
085ff199 +0x0bc:  call   085ff2c2 <+0x1e5>
085ff19e +0x0c1:  sub    $0x4,%esp
085ff1a1 +0x0c4:  mov    %ebx,%eax
085ff1a3 +0x0c6:  mov    -0x4(%ebp),%ebx
085ff1a6 +0x0c9:  leave
085ff1a7 +0x0ca:  ret    $0x4
085ff1aa +0x0cd:  push   %ebp
085ff1ab +0x0ce:  mov    %esp,%ebp
085ff1ad +0x0d0:  push   %ebx
085ff1ae +0x0d1:  sub    $0x14,%esp
085ff1b1 +0x0d4:  mov    0x8(%ebp),%ebx
085ff1b4 +0x0d7:  mov    0xc(%ebp),%eax
085ff1b7 +0x0da:  mov    %eax,0x4(%esp)
085ff1bb +0x0de:  mov    %ebx,(%esp)
085ff1be +0x0e1:  call   085ff380 <+0x2a3>
085ff1c3 +0x0e6:  sub    $0x4,%esp
085ff1c6 +0x0e9:  mov    %ebx,%eax
085ff1c8 +0x0eb:  mov    -0x4(%ebp),%ebx
085ff1cb +0x0ee:  leave
085ff1cc +0x0ef:  ret    $0x4
085ff1cf +0x0f2:  nop
085ff1d0 +0x0f3:  push   %ebp
085ff1d1 +0x0f4:  mov    %esp,%ebp
085ff1d3 +0x0f6:  mov    0x8(%ebp),%eax
085ff1d6 +0x0f9:  mov    (%eax),%edx
085ff1d8 +0x0fb:  mov    0xc(%ebp),%eax
085ff1db +0x0fe:  mov    (%eax),%eax
085ff1dd +0x100:  cmp    %eax,%edx
085ff1df +0x102:  setne  %al
085ff1e2 +0x105:  pop    %ebp
085ff1e3 +0x106:  ret
085ff1e4 +0x107:  push   %ebp
085ff1e5 +0x108:  mov    %esp,%ebp
085ff1e7 +0x10a:  mov    0x8(%ebp),%eax
085ff1ea +0x10d:  mov    (%eax),%eax
085ff1ec +0x10f:  add    $0x10,%eax
085ff1ef +0x112:  pop    %ebp
085ff1f0 +0x113:  ret
085ff1f1 +0x114:  push   %ebp
085ff1f2 +0x115:  mov    %esp,%ebp
085ff1f4 +0x117:  push   %edi
085ff1f5 +0x118:  push   %esi
085ff1f6 +0x119:  push   %ebx
085ff1f7 +0x11a:  sub    $0x1c,%esp
085ff1fa +0x11d:  mov    0x8(%ebp),%ebx
085ff1fd +0x120:  mov    %ebx,%edi
085ff1ff +0x122:  mov    0x10(%ebp),%eax
085ff202 +0x125:  mov    %eax,(%esp)
085ff205 +0x128:  call   085ff3ae <+0x2d1>
085ff20a +0x12d:  mov    %eax,%esi
085ff20c +0x12f:  mov    0xc(%ebp),%eax
085ff20f +0x132:  mov    %eax,(%esp)
085ff212 +0x135:  call   085ff3a6 <+0x2c9>
085ff217 +0x13a:  mov    %esi,0x8(%esp)
085ff21b +0x13e:  mov    %eax,0x4(%esp)
085ff21f +0x142:  mov    %edi,(%esp)
085ff222 +0x145:  call   085ff3b6 <+0x2d9>
085ff227 +0x14a:  mov    %ebx,%eax
085ff229 +0x14c:  mov    %ebx,%eax
085ff22b +0x14e:  add    $0x1c,%esp
085ff22e +0x151:  pop    %ebx
085ff22f +0x152:  pop    %esi
085ff230 +0x153:  pop    %edi
085ff231 +0x154:  pop    %ebp
085ff232 +0x155:  ret    $0x4
085ff235 +0x158:  nop
085ff236 +0x159:  push   %ebp
085ff237 +0x15a:  mov    %esp,%ebp
085ff239 +0x15c:  sub    $0x18,%esp
085ff23c +0x15f:  mov    0xc(%ebp),%eax
085ff23f +0x162:  mov    %eax,(%esp)
085ff242 +0x165:  call   085ff3fe <+0x321>
085ff247 +0x16a:  mov    0x8(%ebp),%edx
085ff24a +0x16d:  mov    %eax,0x4(%esp)
085ff24e +0x171:  mov    %edx,(%esp)
085ff251 +0x174:  call   085ff0fa <+0x1d>
085ff256 +0x179:  mov    0xc(%ebp),%eax
085ff259 +0x17c:  add    $0x4,%eax
085ff25c +0x17f:  mov    %eax,(%esp)
085ff25f +0x182:  call   085ff406 <+0x329>
085ff264 +0x187:  mov    0x8(%ebp),%edx
085ff267 +0x18a:  lea    0x4(%edx),%ecx
085ff26a +0x18d:  mov    $&_ZL14gUnicodeBuffer+0xcec8,%edx
085ff26f +0x192:  mov    %edx,0x8(%esp)
085ff273 +0x196:  mov    %eax,0x4(%esp)
085ff277 +0x19a:  mov    %ecx,(%esp)
085ff27a +0x19d:  call   0807d8a0 <_init+0x198>
085ff27f +0x1a2:  leave
085ff280 +0x1a3:  ret
085ff281 +0x1a4:  nop
085ff282 +0x1a5:  push   %ebp
085ff283 +0x1a6:  mov    %esp,%ebp
085ff285 +0x1a8:  push   %ebx
085ff286 +0x1a9:  sub    $0x14,%esp
085ff289 +0x1ac:  mov    0x8(%ebp),%ebx
085ff28c +0x1af:  mov    0xc(%ebp),%eax
085ff28f +0x1b2:  mov    0x10(%ebp),%edx
085ff292 +0x1b5:  mov    %edx,0x8(%esp)
085ff296 +0x1b9:  mov    %eax,0x4(%esp)
085ff29a +0x1bd:  mov    %ebx,(%esp)
085ff29d +0x1c0:  call   085ff40e <+0x331>
085ff2a2 +0x1c5:  sub    $0x4,%esp
085ff2a5 +0x1c8:  mov    %ebx,%eax
085ff2a7 +0x1ca:  mov    -0x4(%ebp),%ebx
085ff2aa +0x1cd:  leave
085ff2ab +0x1ce:  ret    $0x4
085ff2ae +0x1d1:  push   %ebp
085ff2af +0x1d2:  mov    %esp,%ebp
085ff2b1 +0x1d4:  sub    $0x18,%esp
085ff2b4 +0x1d7:  mov    0x8(%ebp),%eax
085ff2b7 +0x1da:  mov    %eax,(%esp)
085ff2ba +0x1dd:  call   085ff5de <+0x501>
085ff2bf +0x1e2:  leave
085ff2c0 +0x1e3:  ret
085ff2c1 +0x1e4:  nop
085ff2c2 +0x1e5:  push   %ebp
085ff2c3 +0x1e6:  mov    %esp,%ebp
085ff2c5 +0x1e8:  push   %esi
085ff2c6 +0x1e9:  push   %ebx
085ff2c7 +0x1ea:  sub    $0x30,%esp
085ff2ca +0x1ed:  mov    0x8(%ebp),%ebx
085ff2cd +0x1f0:  mov    0xc(%ebp),%eax
085ff2d0 +0x1f3:  mov    %eax,(%esp)
085ff2d3 +0x1f6:  call   085ff660 <+0x583>
085ff2d8 +0x1fb:  mov    %eax,%esi
085ff2da +0x1fd:  mov    0xc(%ebp),%eax
085ff2dd +0x200:  mov    %eax,(%esp)
085ff2e0 +0x203:  call   085ff654 <+0x577>
085ff2e5 +0x208:  lea    -0x10(%ebp),%edx
085ff2e8 +0x20b:  mov    0x10(%ebp),%ecx
085ff2eb +0x20e:  mov    %ecx,0x10(%esp)
085ff2ef +0x212:  mov    %esi,0xc(%esp)
085ff2f3 +0x216:  mov    %eax,0x8(%esp)
085ff2f7 +0x21a:  mov    0xc(%ebp),%eax
085ff2fa +0x21d:  mov    %eax,0x4(%esp)
085ff2fe +0x221:  mov    %edx,(%esp)
085ff301 +0x224:  call   085ff66c <+0x58f>
085ff306 +0x229:  sub    $0x4,%esp
085ff309 +0x22c:  lea    -0xc(%ebp),%eax
085ff30c +0x22f:  mov    0xc(%ebp),%edx
085ff30f +0x232:  mov    %edx,0x4(%esp)
085ff313 +0x236:  mov    %eax,(%esp)
085ff316 +0x239:  call   085ff380 <+0x2a3>
085ff31b +0x23e:  sub    $0x4,%esp
085ff31e +0x241:  lea    -0xc(%ebp),%eax
085ff321 +0x244:  mov    %eax,0x4(%esp)
085ff325 +0x248:  lea    -0x10(%ebp),%eax
085ff328 +0x24b:  mov    %eax,(%esp)
085ff32b +0x24e:  call   085ff724 <+0x647>
085ff330 +0x253:  test   %al,%al
085ff332 +0x255:  jne    085ff359 <+0x27c>
085ff334 +0x257:  mov    -0x10(%ebp),%eax
085ff337 +0x25a:  mov    %eax,(%esp)
085ff33a +0x25d:  call   085ff6e8 <+0x60b>
085ff33f +0x262:  mov    0xc(%ebp),%edx
085ff342 +0x265:  mov    %eax,0x8(%esp)
085ff346 +0x269:  mov    0x10(%ebp),%eax
085ff349 +0x26c:  mov    %eax,0x4(%esp)
085ff34d +0x270:  mov    %edx,(%esp)
085ff350 +0x273:  call   085ff70a <+0x62d>
085ff355 +0x278:  test   %al,%al
085ff357 +0x27a:  je     085ff36d <+0x290>
085ff359 +0x27c:  mov    0xc(%ebp),%eax
085ff35c +0x27f:  mov    %eax,0x4(%esp)
085ff360 +0x283:  mov    %ebx,(%esp)
085ff363 +0x286:  call   085ff380 <+0x2a3>
085ff368 +0x28b:  sub    $0x4,%esp
085ff36b +0x28e:  jmp    085ff372 <+0x295>
085ff36d +0x290:  mov    -0x10(%ebp),%eax
085ff370 +0x293:  mov    %eax,(%ebx)
085ff372 +0x295:  mov    %ebx,%eax
085ff374 +0x297:  lea    -0x8(%ebp),%esp
085ff377 +0x29a:  add    $0x0,%esp
085ff37a +0x29d:  pop    %ebx
085ff37b +0x29e:  pop    %esi
085ff37c +0x29f:  pop    %ebp
085ff37d +0x2a0:  ret    $0x4
085ff380 +0x2a3:  push   %ebp
085ff381 +0x2a4:  mov    %esp,%ebp
085ff383 +0x2a6:  push   %ebx
085ff384 +0x2a7:  sub    $0x14,%esp
085ff387 +0x2aa:  mov    0x8(%ebp),%ebx
085ff38a +0x2ad:  mov    0xc(%ebp),%eax
085ff38d +0x2b0:  add    $0x4,%eax
085ff390 +0x2b3:  mov    %eax,0x4(%esp)
085ff394 +0x2b7:  mov    %ebx,(%esp)
085ff397 +0x2ba:  call   085ff738 <+0x65b>
085ff39c +0x2bf:  mov    %ebx,%eax
085ff39e +0x2c1:  add    $0x14,%esp
085ff3a1 +0x2c4:  pop    %ebx
085ff3a2 +0x2c5:  pop    %ebp
085ff3a3 +0x2c6:  ret    $0x4
085ff3a6 +0x2c9:  push   %ebp
085ff3a7 +0x2ca:  mov    %esp,%ebp
085ff3a9 +0x2cc:  mov    0x8(%ebp),%eax
085ff3ac +0x2cf:  pop    %ebp
085ff3ad +0x2d0:  ret
085ff3ae +0x2d1:  push   %ebp
085ff3af +0x2d2:  mov    %esp,%ebp
085ff3b1 +0x2d4:  mov    0x8(%ebp),%eax
085ff3b4 +0x2d7:  pop    %ebp
085ff3b5 +0x2d8:  ret
085ff3b6 +0x2d9:  push   %ebp
085ff3b7 +0x2da:  mov    %esp,%ebp
085ff3b9 +0x2dc:  sub    $0x18,%esp
085ff3bc +0x2df:  mov    0xc(%ebp),%eax
085ff3bf +0x2e2:  mov    %eax,(%esp)
085ff3c2 +0x2e5:  call   085ff3a6 <+0x2c9>
085ff3c7 +0x2ea:  mov    0x8(%ebp),%edx
085ff3ca +0x2ed:  mov    %eax,0x4(%esp)
085ff3ce +0x2f1:  mov    %edx,(%esp)
085ff3d1 +0x2f4:  call   085ff0fa <+0x1d>
085ff3d6 +0x2f9:  mov    0x10(%ebp),%eax
085ff3d9 +0x2fc:  mov    %eax,(%esp)
085ff3dc +0x2ff:  call   085ff3ae <+0x2d1>
085ff3e1 +0x304:  mov    0x8(%ebp),%edx
085ff3e4 +0x307:  lea    0x4(%edx),%ecx
085ff3e7 +0x30a:  mov    $&_ZL14gUnicodeBuffer+0xcec8,%edx
085ff3ec +0x30f:  mov    %edx,0x8(%esp)
085ff3f0 +0x313:  mov    %eax,0x4(%esp)
085ff3f4 +0x317:  mov    %ecx,(%esp)
085ff3f7 +0x31a:  call   0807d8a0 <_init+0x198>
085ff3fc +0x31f:  leave
085ff3fd +0x320:  ret
085ff3fe +0x321:  push   %ebp
085ff3ff +0x322:  mov    %esp,%ebp
085ff401 +0x324:  mov    0x8(%ebp),%eax
085ff404 +0x327:  pop    %ebp
085ff405 +0x328:  ret
085ff406 +0x329:  push   %ebp
085ff407 +0x32a:  mov    %esp,%ebp
085ff409 +0x32c:  mov    0x8(%ebp),%eax
085ff40c +0x32f:  pop    %ebp
085ff40d +0x330:  ret
085ff40e +0x331:  push   %ebp
085ff40f +0x332:  mov    %esp,%ebp
085ff411 +0x334:  push   %esi
085ff412 +0x335:  push   %ebx
085ff413 +0x336:  sub    $0x50,%esp
085ff416 +0x339:  mov    0x8(%ebp),%ebx
085ff419 +0x33c:  mov    0xc(%ebp),%eax
085ff41c +0x33f:  mov    %eax,(%esp)
085ff41f +0x342:  call   085ff654 <+0x577>
085ff424 +0x347:  mov    %eax,-0x14(%ebp)
085ff427 +0x34a:  mov    0xc(%ebp),%eax
085ff42a +0x34d:  mov    %eax,(%esp)
085ff42d +0x350:  call   085ff660 <+0x583>
085ff432 +0x355:  mov    %eax,-0x10(%ebp)
085ff435 +0x358:  movb   $0x1,-0x9(%ebp)
085ff439 +0x35c:  jmp    085ff497 <+0x3ba>
085ff43b +0x35e:  mov    -0x14(%ebp),%eax
085ff43e +0x361:  mov    %eax,-0x10(%ebp)
085ff441 +0x364:  mov    -0x14(%ebp),%eax
085ff444 +0x367:  mov    %eax,(%esp)
085ff447 +0x36a:  call   085ff74e <+0x671>
085ff44c +0x36f:  mov    %eax,%esi
085ff44e +0x371:  mov    0x10(%ebp),%eax
085ff451 +0x374:  mov    %eax,0x4(%esp)
085ff455 +0x378:  lea    -0x2d(%ebp),%eax
085ff458 +0x37b:  mov    %eax,(%esp)
085ff45b +0x37e:  call   085ff746 <+0x669>
085ff460 +0x383:  mov    0xc(%ebp),%edx
085ff463 +0x386:  mov    %esi,0x8(%esp)
085ff467 +0x38a:  mov    %eax,0x4(%esp)
085ff46b +0x38e:  mov    %edx,(%esp)
085ff46e +0x391:  call   085ff70a <+0x62d>
085ff473 +0x396:  mov    %al,-0x9(%ebp)
085ff476 +0x399:  cmpb   $0x0,-0x9(%ebp)
085ff47a +0x39d:  je     085ff489 <+0x3ac>
085ff47c +0x39f:  mov    -0x14(%ebp),%eax
085ff47f +0x3a2:  mov    %eax,(%esp)
085ff482 +0x3a5:  call   085ff77b <+0x69e>
085ff487 +0x3aa:  jmp    085ff494 <+0x3b7>
085ff489 +0x3ac:  mov    -0x14(%ebp),%eax
085ff48c +0x3af:  mov    %eax,(%esp)
085ff48f +0x3b2:  call   085ff770 <+0x693>
085ff494 +0x3b7:  mov    %eax,-0x14(%ebp)
085ff497 +0x3ba:  cmpl   $0x0,-0x14(%ebp)
085ff49b +0x3be:  setne  %al
085ff49e +0x3c1:  test   %al,%al
085ff4a0 +0x3c3:  jne    085ff43b <+0x35e>
085ff4a2 +0x3c5:  mov    -0x10(%ebp),%eax
085ff4a5 +0x3c8:  mov    %eax,0x4(%esp)
085ff4a9 +0x3cc:  lea    -0x34(%ebp),%eax
085ff4ac +0x3cf:  mov    %eax,(%esp)
085ff4af +0x3d2:  call   085ff738 <+0x65b>
085ff4b4 +0x3d7:  cmpb   $0x0,-0x9(%ebp)
085ff4b8 +0x3db:  je     085ff539 <+0x45c>
085ff4ba +0x3dd:  lea    -0x2c(%ebp),%eax
085ff4bd +0x3e0:  mov    0xc(%ebp),%edx
085ff4c0 +0x3e3:  mov    %edx,0x4(%esp)
085ff4c4 +0x3e7:  mov    %eax,(%esp)
085ff4c7 +0x3ea:  call   085ff786 <+0x6a9>
085ff4cc +0x3ef:  sub    $0x4,%esp
085ff4cf +0x3f2:  lea    -0x2c(%ebp),%eax
085ff4d2 +0x3f5:  mov    %eax,0x4(%esp)
085ff4d6 +0x3f9:  lea    -0x34(%ebp),%eax
085ff4d9 +0x3fc:  mov    %eax,(%esp)
085ff4dc +0x3ff:  call   085ff724 <+0x647>
085ff4e1 +0x404:  test   %al,%al
085ff4e3 +0x406:  je     085ff52e <+0x451>
085ff4e5 +0x408:  movb   $0x1,-0x25(%ebp)
085ff4e9 +0x40c:  mov    -0x10(%ebp),%ecx
085ff4ec +0x40f:  mov    -0x14(%ebp),%edx
085ff4ef +0x412:  lea    -0x24(%ebp),%eax
085ff4f2 +0x415:  mov    0x10(%ebp),%esi
085ff4f5 +0x418:  mov    %esi,0x10(%esp)
085ff4f9 +0x41c:  mov    %ecx,0xc(%esp)
085ff4fd +0x420:  mov    %edx,0x8(%esp)
085ff501 +0x424:  mov    0xc(%ebp),%edx
085ff504 +0x427:  mov    %edx,0x4(%esp)
085ff508 +0x42b:  mov    %eax,(%esp)
085ff50b +0x42e:  call   085ff7ac <+0x6cf>
085ff510 +0x433:  sub    $0x4,%esp
085ff513 +0x436:  lea    -0x25(%ebp),%eax
085ff516 +0x439:  mov    %eax,0x8(%esp)
085ff51a +0x43d:  lea    -0x24(%ebp),%eax
085ff51d +0x440:  mov    %eax,0x4(%esp)
085ff521 +0x444:  mov    %ebx,(%esp)
085ff524 +0x447:  call   085ff874 <+0x797>
085ff529 +0x44c:  jmp    085ff5cf <+0x4f2>
085ff52e +0x451:  lea    -0x34(%ebp),%eax
085ff531 +0x454:  mov    %eax,(%esp)
085ff534 +0x457:  call   085ff8a2 <+0x7c5>
085ff539 +0x45c:  mov    0x10(%ebp),%eax
085ff53c +0x45f:  mov    %eax,0x4(%esp)
085ff540 +0x463:  lea    -0x1e(%ebp),%eax
085ff543 +0x466:  mov    %eax,(%esp)
085ff546 +0x469:  call   085ff746 <+0x669>
085ff54b +0x46e:  mov    %eax,%esi
085ff54d +0x470:  mov    -0x34(%ebp),%eax
085ff550 +0x473:  mov    %eax,(%esp)
085ff553 +0x476:  call   085ff6e8 <+0x60b>
085ff558 +0x47b:  mov    0xc(%ebp),%edx
085ff55b +0x47e:  mov    %esi,0x8(%esp)
085ff55f +0x482:  mov    %eax,0x4(%esp)
085ff563 +0x486:  mov    %edx,(%esp)
085ff566 +0x489:  call   085ff70a <+0x62d>
085ff56b +0x48e:  test   %al,%al
085ff56d +0x490:  je     085ff5b5 <+0x4d8>
085ff56f +0x492:  movb   $0x1,-0x1d(%ebp)
085ff573 +0x496:  mov    -0x10(%ebp),%ecx
085ff576 +0x499:  mov    -0x14(%ebp),%edx
085ff579 +0x49c:  lea    -0x1c(%ebp),%eax
085ff57c +0x49f:  mov    0x10(%ebp),%esi
085ff57f +0x4a2:  mov    %esi,0x10(%esp)
085ff583 +0x4a6:  mov    %ecx,0xc(%esp)
085ff587 +0x4aa:  mov    %edx,0x8(%esp)
085ff58b +0x4ae:  mov    0xc(%ebp),%edx
085ff58e +0x4b1:  mov    %edx,0x4(%esp)
085ff592 +0x4b5:  mov    %eax,(%esp)
085ff595 +0x4b8:  call   085ff7ac <+0x6cf>
085ff59a +0x4bd:  sub    $0x4,%esp
085ff59d +0x4c0:  lea    -0x1d(%ebp),%eax
085ff5a0 +0x4c3:  mov    %eax,0x8(%esp)
085ff5a4 +0x4c7:  lea    -0x1c(%ebp),%eax
085ff5a7 +0x4ca:  mov    %eax,0x4(%esp)
085ff5ab +0x4ce:  mov    %ebx,(%esp)
085ff5ae +0x4d1:  call   085ff874 <+0x797>
085ff5b3 +0x4d6:  jmp    085ff5cf <+0x4f2>
085ff5b5 +0x4d8:  movb   $0x0,-0x15(%ebp)
085ff5b9 +0x4dc:  lea    -0x15(%ebp),%eax
085ff5bc +0x4df:  mov    %eax,0x8(%esp)
085ff5c0 +0x4e3:  lea    -0x34(%ebp),%eax
085ff5c3 +0x4e6:  mov    %eax,0x4(%esp)
085ff5c7 +0x4ea:  mov    %ebx,(%esp)
085ff5ca +0x4ed:  call   085ff8c0 <+0x7e3>
085ff5cf +0x4f2:  mov    %ebx,%eax
085ff5d1 +0x4f4:  lea    -0x8(%ebp),%esp
085ff5d4 +0x4f7:  add    $0x0,%esp
085ff5d7 +0x4fa:  pop    %ebx
085ff5d8 +0x4fb:  pop    %esi
085ff5d9 +0x4fc:  pop    %ebp
085ff5da +0x4fd:  ret    $0x4
085ff5dd +0x500:  nop
085ff5de +0x501:  push   %ebp
085ff5df +0x502:  mov    %esp,%ebp
085ff5e1 +0x504:  push   %ebx
085ff5e2 +0x505:  sub    $0x14,%esp
085ff5e5 +0x508:  mov    0x8(%ebp),%eax
085ff5e8 +0x50b:  mov    %eax,(%esp)
085ff5eb +0x50e:  call   085ff654 <+0x577>
085ff5f0 +0x513:  mov    %eax,0x4(%esp)
085ff5f4 +0x517:  mov    0x8(%ebp),%eax
085ff5f7 +0x51a:  mov    %eax,(%esp)
085ff5fa +0x51d:  call   085ff8ee <+0x811>
085ff5ff +0x522:  mov    0x8(%ebp),%eax
085ff602 +0x525:  mov    %eax,(%esp)
085ff605 +0x528:  call   085ff944 <+0x867>
085ff60a +0x52d:  mov    %eax,%ebx
085ff60c +0x52f:  mov    0x8(%ebp),%eax
085ff60f +0x532:  mov    %eax,(%esp)
085ff612 +0x535:  call   085ff660 <+0x583>
085ff617 +0x53a:  mov    %eax,(%ebx)
085ff619 +0x53c:  mov    0x8(%ebp),%eax
085ff61c +0x53f:  mov    %eax,(%esp)
085ff61f +0x542:  call   085ff950 <+0x873>
085ff624 +0x547:  movl   $0x0,(%eax)
085ff62a +0x54d:  mov    0x8(%ebp),%eax
085ff62d +0x550:  mov    %eax,(%esp)
085ff630 +0x553:  call   085ff95c <+0x87f>
085ff635 +0x558:  mov    %eax,%ebx
085ff637 +0x55a:  mov    0x8(%ebp),%eax
085ff63a +0x55d:  mov    %eax,(%esp)
085ff63d +0x560:  call   085ff660 <+0x583>
085ff642 +0x565:  mov    %eax,(%ebx)
085ff644 +0x567:  mov    0x8(%ebp),%eax
085ff647 +0x56a:  movl   $0x0,0x14(%eax)
085ff64e +0x571:  add    $0x14,%esp
085ff651 +0x574:  pop    %ebx
085ff652 +0x575:  pop    %ebp
085ff653 +0x576:  ret
085ff654 +0x577:  push   %ebp
085ff655 +0x578:  mov    %esp,%ebp
085ff657 +0x57a:  mov    0x8(%ebp),%eax
085ff65a +0x57d:  mov    0x8(%eax),%eax
085ff65d +0x580:  pop    %ebp
085ff65e +0x581:  ret
085ff65f +0x582:  nop
085ff660 +0x583:  push   %ebp
085ff661 +0x584:  mov    %esp,%ebp
085ff663 +0x586:  mov    0x8(%ebp),%eax
085ff666 +0x589:  add    $0x4,%eax
085ff669 +0x58c:  pop    %ebp
085ff66a +0x58d:  ret
085ff66b +0x58e:  nop
085ff66c +0x58f:  push   %ebp
085ff66d +0x590:  mov    %esp,%ebp
085ff66f +0x592:  push   %ebx
085ff670 +0x593:  sub    $0x14,%esp
085ff673 +0x596:  mov    0x8(%ebp),%ebx
085ff676 +0x599:  jmp    085ff6c4 <+0x5e7>
085ff678 +0x59b:  mov    0x10(%ebp),%eax
085ff67b +0x59e:  mov    %eax,(%esp)
085ff67e +0x5a1:  call   085ff74e <+0x671>
085ff683 +0x5a6:  mov    0xc(%ebp),%edx
085ff686 +0x5a9:  mov    0x18(%ebp),%ecx
085ff689 +0x5ac:  mov    %ecx,0x8(%esp)
085ff68d +0x5b0:  mov    %eax,0x4(%esp)
085ff691 +0x5b4:  mov    %edx,(%esp)
085ff694 +0x5b7:  call   085ff70a <+0x62d>
085ff699 +0x5bc:  xor    $0x1,%eax
085ff69c +0x5bf:  test   %al,%al
085ff69e +0x5c1:  je     085ff6b6 <+0x5d9>
085ff6a0 +0x5c3:  mov    0x10(%ebp),%eax
085ff6a3 +0x5c6:  mov    %eax,0x14(%ebp)
085ff6a6 +0x5c9:  mov    0x10(%ebp),%eax
085ff6a9 +0x5cc:  mov    %eax,(%esp)
085ff6ac +0x5cf:  call   085ff77b <+0x69e>
085ff6b1 +0x5d4:  mov    %eax,0x10(%ebp)
085ff6b4 +0x5d7:  jmp    085ff6c4 <+0x5e7>
085ff6b6 +0x5d9:  mov    0x10(%ebp),%eax
085ff6b9 +0x5dc:  mov    %eax,(%esp)
085ff6bc +0x5df:  call   085ff770 <+0x693>
085ff6c1 +0x5e4:  mov    %eax,0x10(%ebp)
085ff6c4 +0x5e7:  cmpl   $0x0,0x10(%ebp)
085ff6c8 +0x5eb:  setne  %al
085ff6cb +0x5ee:  test   %al,%al
085ff6cd +0x5f0:  jne    085ff678 <+0x59b>
085ff6cf +0x5f2:  mov    0x14(%ebp),%eax
085ff6d2 +0x5f5:  mov    %eax,0x4(%esp)
085ff6d6 +0x5f9:  mov    %ebx,(%esp)
085ff6d9 +0x5fc:  call   085ff738 <+0x65b>
085ff6de +0x601:  mov    %ebx,%eax
085ff6e0 +0x603:  add    $0x14,%esp
085ff6e3 +0x606:  pop    %ebx
085ff6e4 +0x607:  pop    %ebp
085ff6e5 +0x608:  ret    $0x4
085ff6e8 +0x60b:  push   %ebp
085ff6e9 +0x60c:  mov    %esp,%ebp
085ff6eb +0x60e:  sub    $0x28,%esp
085ff6ee +0x611:  mov    0x8(%ebp),%eax
085ff6f1 +0x614:  mov    %eax,(%esp)
085ff6f4 +0x617:  call   085ff967 <+0x88a>
085ff6f9 +0x61c:  mov    %eax,0x4(%esp)
085ff6fd +0x620:  lea    -0x9(%ebp),%eax
085ff700 +0x623:  mov    %eax,(%esp)
085ff703 +0x626:  call   085ff746 <+0x669>
085ff708 +0x62b:  leave
085ff709 +0x62c:  ret
085ff70a +0x62d:  push   %ebp
085ff70b +0x62e:  mov    %esp,%ebp
085ff70d +0x630:  sub    $0x18,%esp
085ff710 +0x633:  mov    0x10(%ebp),%eax
085ff713 +0x636:  mov    %eax,0x4(%esp)
085ff717 +0x63a:  mov    0xc(%ebp),%eax
085ff71a +0x63d:  mov    %eax,(%esp)
085ff71d +0x640:  call   085ff114 <+0x37>
085ff722 +0x645:  leave
085ff723 +0x646:  ret
085ff724 +0x647:  push   %ebp
085ff725 +0x648:  mov    %esp,%ebp
085ff727 +0x64a:  mov    0x8(%ebp),%eax
085ff72a +0x64d:  mov    (%eax),%edx
085ff72c +0x64f:  mov    0xc(%ebp),%eax
085ff72f +0x652:  mov    (%eax),%eax
085ff731 +0x654:  cmp    %eax,%edx
085ff733 +0x656:  sete   %al
085ff736 +0x659:  pop    %ebp
085ff737 +0x65a:  ret
085ff738 +0x65b:  push   %ebp
085ff739 +0x65c:  mov    %esp,%ebp
085ff73b +0x65e:  mov    0xc(%ebp),%edx
085ff73e +0x661:  mov    0x8(%ebp),%eax
085ff741 +0x664:  mov    %edx,(%eax)
085ff743 +0x666:  pop    %ebp
085ff744 +0x667:  ret
085ff745 +0x668:  nop
085ff746 +0x669:  push   %ebp
085ff747 +0x66a:  mov    %esp,%ebp
085ff749 +0x66c:  mov    0xc(%ebp),%eax
085ff74c +0x66f:  pop    %ebp
085ff74d +0x670:  ret
085ff74e +0x671:  push   %ebp
085ff74f +0x672:  mov    %esp,%ebp
085ff751 +0x674:  sub    $0x28,%esp
085ff754 +0x677:  mov    0x8(%ebp),%eax
085ff757 +0x67a:  mov    %eax,(%esp)
085ff75a +0x67d:  call   085ff972 <+0x895>
085ff75f +0x682:  mov    %eax,0x4(%esp)
085ff763 +0x686:  lea    -0x9(%ebp),%eax
085ff766 +0x689:  mov    %eax,(%esp)
085ff769 +0x68c:  call   085ff746 <+0x669>
085ff76e +0x691:  leave
085ff76f +0x692:  ret
085ff770 +0x693:  push   %ebp
085ff771 +0x694:  mov    %esp,%ebp
085ff773 +0x696:  mov    0x8(%ebp),%eax
085ff776 +0x699:  mov    0xc(%eax),%eax
085ff779 +0x69c:  pop    %ebp
085ff77a +0x69d:  ret
085ff77b +0x69e:  push   %ebp
085ff77c +0x69f:  mov    %esp,%ebp
085ff77e +0x6a1:  mov    0x8(%ebp),%eax
085ff781 +0x6a4:  mov    0x8(%eax),%eax
085ff784 +0x6a7:  pop    %ebp
085ff785 +0x6a8:  ret
085ff786 +0x6a9:  push   %ebp
085ff787 +0x6aa:  mov    %esp,%ebp
085ff789 +0x6ac:  push   %ebx
085ff78a +0x6ad:  sub    $0x14,%esp
085ff78d +0x6b0:  mov    0x8(%ebp),%ebx
085ff790 +0x6b3:  mov    0xc(%ebp),%eax
085ff793 +0x6b6:  mov    0xc(%eax),%eax
085ff796 +0x6b9:  mov    %eax,0x4(%esp)
085ff79a +0x6bd:  mov    %ebx,(%esp)
085ff79d +0x6c0:  call   085ff738 <+0x65b>
085ff7a2 +0x6c5:  mov    %ebx,%eax
085ff7a4 +0x6c7:  add    $0x14,%esp
085ff7a7 +0x6ca:  pop    %ebx
085ff7a8 +0x6cb:  pop    %ebp
085ff7a9 +0x6cc:  ret    $0x4
085ff7ac +0x6cf:  push   %ebp
085ff7ad +0x6d0:  mov    %esp,%ebp
085ff7af +0x6d2:  push   %esi
085ff7b0 +0x6d3:  push   %ebx
085ff7b1 +0x6d4:  sub    $0x20,%esp
085ff7b4 +0x6d7:  mov    0x8(%ebp),%esi
085ff7b7 +0x6da:  cmpl   $0x0,0x10(%ebp)
085ff7bb +0x6de:  jne    085ff803 <+0x726>
085ff7bd +0x6e0:  mov    0xc(%ebp),%eax
085ff7c0 +0x6e3:  mov    %eax,(%esp)
085ff7c3 +0x6e6:  call   085ff660 <+0x583>
085ff7c8 +0x6eb:  cmp    0x14(%ebp),%eax
085ff7cb +0x6ee:  je     085ff803 <+0x726>
085ff7cd +0x6f0:  mov    0x14(%ebp),%eax
085ff7d0 +0x6f3:  mov    %eax,(%esp)
085ff7d3 +0x6f6:  call   085ff6e8 <+0x60b>
085ff7d8 +0x6fb:  mov    %eax,%ebx
085ff7da +0x6fd:  mov    0x18(%ebp),%eax
085ff7dd +0x700:  mov    %eax,0x4(%esp)
085ff7e1 +0x704:  lea    -0xe(%ebp),%eax
085ff7e4 +0x707:  mov    %eax,(%esp)
085ff7e7 +0x70a:  call   085ff746 <+0x669>
085ff7ec +0x70f:  mov    0xc(%ebp),%edx
085ff7ef +0x712:  mov    %ebx,0x8(%esp)
085ff7f3 +0x716:  mov    %eax,0x4(%esp)
085ff7f7 +0x71a:  mov    %edx,(%esp)
085ff7fa +0x71d:  call   085ff70a <+0x62d>
085ff7ff +0x722:  test   %al,%al
085ff801 +0x724:  je     085ff80a <+0x72d>
085ff803 +0x726:  mov    $0x1,%eax
085ff808 +0x72b:  jmp    085ff80f <+0x732>
085ff80a +0x72d:  mov    $0x0,%eax
085ff80f +0x732:  mov    %al,-0xd(%ebp)
085ff812 +0x735:  mov    0x18(%ebp),%eax
085ff815 +0x738:  mov    %eax,0x4(%esp)
085ff819 +0x73c:  mov    0xc(%ebp),%eax
085ff81c +0x73f:  mov    %eax,(%esp)
085ff81f +0x742:  call   085ff97e <+0x8a1>
085ff824 +0x747:  mov    %eax,-0xc(%ebp)
085ff827 +0x74a:  mov    0xc(%ebp),%eax
085ff82a +0x74d:  lea    0x4(%eax),%ecx
085ff82d +0x750:  mov    -0xc(%ebp),%edx
085ff830 +0x753:  movzbl -0xd(%ebp),%eax
085ff834 +0x757:  mov    %ecx,0xc(%esp)
085ff838 +0x75b:  mov    0x14(%ebp),%ecx
085ff83b +0x75e:  mov    %ecx,0x8(%esp)
085ff83f +0x762:  mov    %edx,0x4(%esp)
085ff843 +0x766:  mov    %eax,(%esp)
085ff846 +0x769:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
085ff84b +0x76e:  mov    0xc(%ebp),%eax
085ff84e +0x771:  mov    0x14(%eax),%eax
085ff851 +0x774:  lea    0x1(%eax),%edx
085ff854 +0x777:  mov    0xc(%ebp),%eax
085ff857 +0x77a:  mov    %edx,0x14(%eax)
085ff85a +0x77d:  mov    -0xc(%ebp),%eax
085ff85d +0x780:  mov    %eax,0x4(%esp)
085ff861 +0x784:  mov    %esi,(%esp)
085ff864 +0x787:  call   085ff738 <+0x65b>
085ff869 +0x78c:  mov    %esi,%eax
085ff86b +0x78e:  add    $0x20,%esp
085ff86e +0x791:  pop    %ebx
085ff86f +0x792:  pop    %esi
085ff870 +0x793:  pop    %ebp
085ff871 +0x794:  ret    $0x4
085ff874 +0x797:  push   %ebp
085ff875 +0x798:  mov    %esp,%ebp
085ff877 +0x79a:  sub    $0x18,%esp
085ff87a +0x79d:  mov    0xc(%ebp),%eax
085ff87d +0x7a0:  mov    %eax,(%esp)
085ff880 +0x7a3:  call   085ff9ff <+0x922>
085ff885 +0x7a8:  mov    0x8(%ebp),%edx
085ff888 +0x7ab:  mov    (%eax),%eax
085ff88a +0x7ad:  mov    %eax,(%edx)
085ff88c +0x7af:  mov    0x10(%ebp),%eax
085ff88f +0x7b2:  mov    %eax,(%esp)
085ff892 +0x7b5:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
085ff897 +0x7ba:  movzbl (%eax),%edx
085ff89a +0x7bd:  mov    0x8(%ebp),%eax
085ff89d +0x7c0:  mov    %dl,0x4(%eax)
085ff8a0 +0x7c3:  leave
085ff8a1 +0x7c4:  ret
085ff8a2 +0x7c5:  push   %ebp
085ff8a3 +0x7c6:  mov    %esp,%ebp
085ff8a5 +0x7c8:  sub    $0x18,%esp
085ff8a8 +0x7cb:  mov    0x8(%ebp),%eax
085ff8ab +0x7ce:  mov    (%eax),%eax
085ff8ad +0x7d0:  mov    %eax,(%esp)
085ff8b0 +0x7d3:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
085ff8b5 +0x7d8:  mov    0x8(%ebp),%edx
085ff8b8 +0x7db:  mov    %eax,(%edx)
085ff8ba +0x7dd:  mov    0x8(%ebp),%eax
085ff8bd +0x7e0:  leave
085ff8be +0x7e1:  ret
085ff8bf +0x7e2:  nop
085ff8c0 +0x7e3:  push   %ebp
085ff8c1 +0x7e4:  mov    %esp,%ebp
085ff8c3 +0x7e6:  sub    $0x18,%esp
085ff8c6 +0x7e9:  mov    0xc(%ebp),%eax
085ff8c9 +0x7ec:  mov    %eax,(%esp)
085ff8cc +0x7ef:  call   085ffa07 <+0x92a>
085ff8d1 +0x7f4:  mov    0x8(%ebp),%edx
085ff8d4 +0x7f7:  mov    (%eax),%eax
085ff8d6 +0x7f9:  mov    %eax,(%edx)
085ff8d8 +0x7fb:  mov    0x10(%ebp),%eax
085ff8db +0x7fe:  mov    %eax,(%esp)
085ff8de +0x801:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
085ff8e3 +0x806:  movzbl (%eax),%edx
085ff8e6 +0x809:  mov    0x8(%ebp),%eax
085ff8e9 +0x80c:  mov    %dl,0x4(%eax)
085ff8ec +0x80f:  leave
085ff8ed +0x810:  ret
085ff8ee +0x811:  push   %ebp
085ff8ef +0x812:  mov    %esp,%ebp
085ff8f1 +0x814:  sub    $0x28,%esp
085ff8f4 +0x817:  jmp    085ff936 <+0x859>
085ff8f6 +0x819:  mov    0xc(%ebp),%eax
085ff8f9 +0x81c:  mov    %eax,(%esp)
085ff8fc +0x81f:  call   085ff770 <+0x693>
085ff901 +0x824:  mov    %eax,0x4(%esp)
085ff905 +0x828:  mov    0x8(%ebp),%eax
085ff908 +0x82b:  mov    %eax,(%esp)
085ff90b +0x82e:  call   085ff8ee <+0x811>
085ff910 +0x833:  mov    0xc(%ebp),%eax
085ff913 +0x836:  mov    %eax,(%esp)
085ff916 +0x839:  call   085ff77b <+0x69e>
085ff91b +0x83e:  mov    %eax,-0xc(%ebp)
085ff91e +0x841:  mov    0xc(%ebp),%eax
085ff921 +0x844:  mov    %eax,0x4(%esp)
085ff925 +0x848:  mov    0x8(%ebp),%eax
085ff928 +0x84b:  mov    %eax,(%esp)
085ff92b +0x84e:  call   085ffa10 <+0x933>
085ff930 +0x853:  mov    -0xc(%ebp),%eax
085ff933 +0x856:  mov    %eax,0xc(%ebp)
085ff936 +0x859:  cmpl   $0x0,0xc(%ebp)
085ff93a +0x85d:  setne  %al
085ff93d +0x860:  test   %al,%al
085ff93f +0x862:  jne    085ff8f6 <+0x819>
085ff941 +0x864:  leave
085ff942 +0x865:  ret
085ff943 +0x866:  nop
085ff944 +0x867:  push   %ebp
085ff945 +0x868:  mov    %esp,%ebp
085ff947 +0x86a:  mov    0x8(%ebp),%eax
085ff94a +0x86d:  add    $0xc,%eax
085ff94d +0x870:  pop    %ebp
085ff94e +0x871:  ret
085ff94f +0x872:  nop
085ff950 +0x873:  push   %ebp
085ff951 +0x874:  mov    %esp,%ebp
085ff953 +0x876:  mov    0x8(%ebp),%eax
085ff956 +0x879:  add    $0x8,%eax
085ff959 +0x87c:  pop    %ebp
085ff95a +0x87d:  ret
085ff95b +0x87e:  nop
085ff95c +0x87f:  push   %ebp
085ff95d +0x880:  mov    %esp,%ebp
085ff95f +0x882:  mov    0x8(%ebp),%eax
085ff962 +0x885:  add    $0x10,%eax
085ff965 +0x888:  pop    %ebp
085ff966 +0x889:  ret
085ff967 +0x88a:  push   %ebp
085ff968 +0x88b:  mov    %esp,%ebp
085ff96a +0x88d:  mov    0x8(%ebp),%eax
085ff96d +0x890:  add    $0x10,%eax
085ff970 +0x893:  pop    %ebp
085ff971 +0x894:  ret
085ff972 +0x895:  push   %ebp
085ff973 +0x896:  mov    %esp,%ebp
085ff975 +0x898:  mov    0x8(%ebp),%eax
085ff978 +0x89b:  add    $0x10,%eax
085ff97b +0x89e:  pop    %ebp
085ff97c +0x89f:  ret
085ff97d +0x8a0:  nop
085ff97e +0x8a1:  push   %ebp
085ff97f +0x8a2:  mov    %esp,%ebp
085ff981 +0x8a4:  push   %esi
085ff982 +0x8a5:  push   %ebx
085ff983 +0x8a6:  sub    $0x20,%esp
085ff986 +0x8a9:  mov    0x8(%ebp),%eax
085ff989 +0x8ac:  mov    %eax,(%esp)
085ff98c +0x8af:  call   085ffa44 <+0x967>
085ff991 +0x8b4:  mov    %eax,-0xc(%ebp)
085ff994 +0x8b7:  mov    0xc(%ebp),%eax
085ff997 +0x8ba:  mov    %eax,(%esp)
085ff99a +0x8bd:  call   085ffa70 <+0x993>
085ff99f +0x8c2:  mov    %eax,%ebx
085ff9a1 +0x8c4:  mov    0x8(%ebp),%eax
085ff9a4 +0x8c7:  mov    %eax,(%esp)
085ff9a7 +0x8ca:  call   085ffa68 <+0x98b>
085ff9ac +0x8cf:  mov    %ebx,0x8(%esp)
085ff9b0 +0x8d3:  mov    -0xc(%ebp),%edx
085ff9b3 +0x8d6:  mov    %edx,0x4(%esp)
085ff9b7 +0x8da:  mov    %eax,(%esp)
085ff9ba +0x8dd:  call   085ffa78 <+0x99b>
085ff9bf +0x8e2:  jmp    085ff9f5 <+0x918>
085ff9c1 +0x8e4:  mov    %eax,(%esp)
085ff9c4 +0x8e7:  call   08725ce0 <__cxa_begin_catch>
085ff9c9 +0x8ec:  mov    -0xc(%ebp),%eax
085ff9cc +0x8ef:  mov    %eax,0x4(%esp)
085ff9d0 +0x8f3:  mov    0x8(%ebp),%eax
085ff9d3 +0x8f6:  mov    %eax,(%esp)
085ff9d6 +0x8f9:  call   085ffae0 <+0xa03>
085ff9db +0x8fe:  call   08724be0 <__cxa_rethrow>
085ff9e0 +0x903:  mov    %edx,%ebx
085ff9e2 +0x905:  mov    %eax,%esi
085ff9e4 +0x907:  call   08725c30 <__cxa_end_catch>
085ff9e9 +0x90c:  mov    %esi,%eax
085ff9eb +0x90e:  mov    %ebx,%edx
085ff9ed +0x910:  mov    %eax,(%esp)
085ff9f0 +0x913:  call   08ae3750 <_Unwind_Resume>
085ff9f5 +0x918:  mov    -0xc(%ebp),%eax
085ff9f8 +0x91b:  add    $0x20,%esp
085ff9fb +0x91e:  pop    %ebx
085ff9fc +0x91f:  pop    %esi
085ff9fd +0x920:  pop    %ebp
085ff9fe +0x921:  ret
085ff9ff +0x922:  push   %ebp
085ffa00 +0x923:  mov    %esp,%ebp
085ffa02 +0x925:  mov    0x8(%ebp),%eax
085ffa05 +0x928:  pop    %ebp
085ffa06 +0x929:  ret
085ffa07 +0x92a:  push   %ebp
085ffa08 +0x92b:  mov    %esp,%ebp
085ffa0a +0x92d:  mov    0x8(%ebp),%eax
085ffa0d +0x930:  pop    %ebp
085ffa0e +0x931:  ret
085ffa0f +0x932:  nop
085ffa10 +0x933:  push   %ebp
085ffa11 +0x934:  mov    %esp,%ebp
085ffa13 +0x936:  sub    $0x18,%esp
085ffa16 +0x939:  mov    0x8(%ebp),%eax
085ffa19 +0x93c:  mov    %eax,(%esp)
085ffa1c +0x93f:  call   085ffa68 <+0x98b>
085ffa21 +0x944:  mov    0xc(%ebp),%edx
085ffa24 +0x947:  mov    %edx,0x4(%esp)
085ffa28 +0x94b:  mov    %eax,(%esp)
085ffa2b +0x94e:  call   085ffb18 <+0xa3b>
085ffa30 +0x953:  mov    0xc(%ebp),%eax
085ffa33 +0x956:  mov    %eax,0x4(%esp)
085ffa37 +0x95a:  mov    0x8(%ebp),%eax
085ffa3a +0x95d:  mov    %eax,(%esp)
085ffa3d +0x960:  call   085ffae0 <+0xa03>
085ffa42 +0x965:  leave
085ffa43 +0x966:  ret
085ffa44 +0x967:  push   %ebp
085ffa45 +0x968:  mov    %esp,%ebp
085ffa47 +0x96a:  sub    $0x18,%esp
085ffa4a +0x96d:  mov    0x8(%ebp),%eax
085ffa4d +0x970:  movl   $0x0,0x8(%esp)
085ffa55 +0x978:  movl   $0x1,0x4(%esp)
085ffa5d +0x980:  mov    %eax,(%esp)
085ffa60 +0x983:  call   085ffb2c <+0xa4f>
085ffa65 +0x988:  leave
085ffa66 +0x989:  ret
085ffa67 +0x98a:  nop
085ffa68 +0x98b:  push   %ebp
085ffa69 +0x98c:  mov    %esp,%ebp
085ffa6b +0x98e:  mov    0x8(%ebp),%eax
085ffa6e +0x991:  pop    %ebp
085ffa6f +0x992:  ret
085ffa70 +0x993:  push   %ebp
085ffa71 +0x994:  mov    %esp,%ebp
085ffa73 +0x996:  mov    0x8(%ebp),%eax
085ffa76 +0x999:  pop    %ebp
085ffa77 +0x99a:  ret
085ffa78 +0x99b:  push   %ebp
085ffa79 +0x99c:  mov    %esp,%ebp
085ffa7b +0x99e:  push   %edi
085ffa7c +0x99f:  push   %esi
085ffa7d +0x9a0:  push   %ebx
085ffa7e +0x9a1:  sub    $0x2c,%esp
085ffa81 +0x9a4:  mov    0x10(%ebp),%eax
085ffa84 +0x9a7:  mov    %eax,(%esp)
085ffa87 +0x9aa:  call   085ffa70 <+0x993>
085ffa8c +0x9af:  mov    %eax,%edi
085ffa8e +0x9b1:  mov    0xc(%ebp),%esi
085ffa91 +0x9b4:  mov    %esi,0x4(%esp)
085ffa95 +0x9b8:  movl   $&_ZL14gUnicodeBuffer+0xcedc,(%esp)
085ffa9c +0x9bf:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
085ffaa1 +0x9c4:  mov    %eax,%ebx
085ffaa3 +0x9c6:  mov    %ebx,%eax
085ffaa5 +0x9c8:  test   %eax,%eax
085ffaa7 +0x9ca:  je     085ffad7 <+0x9fa>
085ffaa9 +0x9cc:  mov    %ebx,%eax
085ffaab +0x9ce:  mov    %edi,0x4(%esp)
085ffaaf +0x9d2:  mov    %eax,(%esp)
085ffab2 +0x9d5:  call   085ffba4 <+0xac7>
085ffab7 +0x9da:  jmp    085ffad7 <+0x9fa>
085ffab9 +0x9dc:  mov    %edx,%edi
085ffabb +0x9de:  mov    %eax,-0x1c(%ebp)
085ffabe +0x9e1:  mov    %esi,0x4(%esp)
085ffac2 +0x9e5:  mov    %ebx,(%esp)
085ffac5 +0x9e8:  call   0807fff6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x1c>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x1c
085ffaca +0x9ed:  mov    -0x1c(%ebp),%eax
085ffacd +0x9f0:  mov    %edi,%edx
085ffacf +0x9f2:  mov    %eax,(%esp)
085ffad2 +0x9f5:  call   08ae3750 <_Unwind_Resume>
085ffad7 +0x9fa:  add    $0x2c,%esp
085ffada +0x9fd:  pop    %ebx
085ffadb +0x9fe:  pop    %esi
085ffadc +0x9ff:  pop    %edi
085ffadd +0xa00:  pop    %ebp
085ffade +0xa01:  ret
085ffadf +0xa02:  nop
085ffae0 +0xa03:  push   %ebp
085ffae1 +0xa04:  mov    %esp,%ebp
085ffae3 +0xa06:  sub    $0x18,%esp
085ffae6 +0xa09:  mov    0x8(%ebp),%eax
085ffae9 +0xa0c:  movl   $0x1,0x8(%esp)
085ffaf1 +0xa14:  mov    0xc(%ebp),%edx
085ffaf4 +0xa17:  mov    %edx,0x4(%esp)
085ffaf8 +0xa1b:  mov    %eax,(%esp)
085ffafb +0xa1e:  call   085ffbf0 <+0xb13>
085ffb00 +0xa23:  leave
085ffb01 +0xa24:  ret
085ffb02 +0xa25:  push   %ebp
085ffb03 +0xa26:  mov    %esp,%ebp
085ffb05 +0xa28:  sub    $0x18,%esp
085ffb08 +0xa2b:  mov    0x8(%ebp),%eax
085ffb0b +0xa2e:  add    $0x10,%eax
085ffb0e +0xa31:  mov    %eax,(%esp)
085ffb11 +0xa34:  call   085ff15a <+0x7d>
085ffb16 +0xa39:  leave
085ffb17 +0xa3a:  ret
085ffb18 +0xa3b:  push   %ebp
085ffb19 +0xa3c:  mov    %esp,%ebp
085ffb1b +0xa3e:  sub    $0x18,%esp
085ffb1e +0xa41:  mov    0xc(%ebp),%eax
085ffb21 +0xa44:  mov    %eax,(%esp)
085ffb24 +0xa47:  call   085ffb02 <+0xa25>
085ffb29 +0xa4c:  leave
085ffb2a +0xa4d:  ret
085ffb2b +0xa4e:  nop
085ffb2c +0xa4f:  push   %ebp
085ffb2d +0xa50:  mov    %esp,%ebp
085ffb2f +0xa52:  sub    $0x18,%esp
085ffb32 +0xa55:  mov    0x8(%ebp),%eax
085ffb35 +0xa58:  mov    %eax,(%esp)
085ffb38 +0xa5b:  call   085ffc04 <+0xb27>
085ffb3d +0xa60:  cmp    0xc(%ebp),%eax
085ffb40 +0xa63:  setb   %al
085ffb43 +0xa66:  movzbl %al,%eax
085ffb46 +0xa69:  test   %eax,%eax
085ffb48 +0xa6b:  setne  %al
085ffb4b +0xa6e:  test   %al,%al
085ffb4d +0xa70:  je     085ffb54 <+0xa77>
085ffb4f +0xa72:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
085ffb54 +0xa77:  mov    0xc(%ebp),%eax
085ffb57 +0xa7a:  imul   $&_ZL14gUnicodeBuffer+0xcedc,%eax,%eax
085ffb5d +0xa80:  mov    %eax,(%esp)
085ffb60 +0xa83:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085ffb65 +0xa88:  leave
085ffb66 +0xa89:  ret
085ffb67 +0xa8a:  nop
085ffb68 +0xa8b:  push   %ebp
085ffb69 +0xa8c:  mov    %esp,%ebp
085ffb6b +0xa8e:  sub    $0x18,%esp
085ffb6e +0xa91:  mov    0xc(%ebp),%edx
085ffb71 +0xa94:  mov    0x8(%ebp),%eax
085ffb74 +0xa97:  mov    %edx,0x4(%esp)
085ffb78 +0xa9b:  mov    %eax,(%esp)
085ffb7b +0xa9e:  call   085ff0fa <+0x1d>
085ffb80 +0xaa3:  mov    0x8(%ebp),%edx
085ffb83 +0xaa6:  mov    0xc(%ebp),%eax
085ffb86 +0xaa9:  add    $0x4,%edx
085ffb89 +0xaac:  lea    0x4(%eax),%ecx
085ffb8c +0xaaf:  mov    $&_ZL14gUnicodeBuffer+0xcec8,%eax
085ffb91 +0xab4:  mov    %eax,0x8(%esp)
085ffb95 +0xab8:  mov    %ecx,0x4(%esp)
085ffb99 +0xabc:  mov    %edx,(%esp)
085ffb9c +0xabf:  call   0807d8a0 <_init+0x198>
085ffba1 +0xac4:  leave
085ffba2 +0xac5:  ret
085ffba3 +0xac6:  nop
085ffba4 +0xac7:  push   %ebp
085ffba5 +0xac8:  mov    %esp,%ebp
085ffba7 +0xaca:  sub    $0x18,%esp
085ffbaa +0xacd:  mov    0x8(%ebp),%eax
085ffbad +0xad0:  movl   $0x0,(%eax)
085ffbb3 +0xad6:  mov    0x8(%ebp),%eax
085ffbb6 +0xad9:  movl   $0x0,0x4(%eax)
085ffbbd +0xae0:  mov    0x8(%ebp),%eax
085ffbc0 +0xae3:  movl   $0x0,0x8(%eax)
085ffbc7 +0xaea:  mov    0x8(%ebp),%eax
085ffbca +0xaed:  movl   $0x0,0xc(%eax)
085ffbd1 +0xaf4:  mov    0xc(%ebp),%eax
085ffbd4 +0xaf7:  mov    %eax,(%esp)
085ffbd7 +0xafa:  call   085ffa70 <+0x993>
085ffbdc +0xaff:  mov    0x8(%ebp),%edx
085ffbdf +0xb02:  add    $0x10,%edx
085ffbe2 +0xb05:  mov    %eax,0x4(%esp)
085ffbe6 +0xb09:  mov    %edx,(%esp)
085ffbe9 +0xb0c:  call   085ffb68 <+0xa8b>
085ffbee +0xb11:  leave
085ffbef +0xb12:  ret
085ffbf0 +0xb13:  push   %ebp
085ffbf1 +0xb14:  mov    %esp,%ebp
085ffbf3 +0xb16:  sub    $0x18,%esp
085ffbf6 +0xb19:  mov    0xc(%ebp),%eax
085ffbf9 +0xb1c:  mov    %eax,(%esp)
085ffbfc +0xb1f:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085ffc01 +0xb24:  leave
085ffc02 +0xb25:  ret
085ffc03 +0xb26:  nop
085ffc04 +0xb27:  push   %ebp
085ffc05 +0xb28:  mov    %esp,%ebp
085ffc07 +0xb2a:  mov    $0xb028,%eax
085ffc0c +0xb2f:  pop    %ebp
085ffc0d +0xb30:  ret
085ffc0e +0xb31:  nop
085ffc0f +0xb32:  nop
```

## 反编译 C

```c
// <global>::global @ 0x85ff0dd

/* TOD_Layer::TOD_Layer(unsigned short) */

void TOD_Layer::_GLOBAL__I_TOD_Layer(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
