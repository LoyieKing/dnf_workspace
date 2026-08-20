# init

`_ZN18TaiwanDBDispatcher4initEv`

`TaiwanDBDispatcher::init()`

| 类 | 地址 |
|---|---|
| `TaiwanDBDispatcher` | `0x0815a1f8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0815a1f8  _ZN18TaiwanDBDispatcher4initEv
#           TaiwanDBDispatcher::init()
# range [0x0815a1f8, 0x0815a7f5]
0815a1f8 +0x000:  push   %ebp
0815a1f9 +0x001:  mov    %esp,%ebp
0815a1fb +0x003:  push   %ebx
0815a1fc +0x004:  sub    $0x24,%esp
0815a1ff +0x007:  movl   $0x0,-0xc(%ebp)
0815a206 +0x00e:  movl   $0x8,(%esp)
0815a20d +0x015:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0815a212 +0x01a:  mov    %eax,%ebx
0815a214 +0x01c:  mov    %ebx,%eax
0815a216 +0x01e:  mov    %eax,(%esp)
0815a219 +0x021:  call   0815dff8 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x26c>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x26c
0815a21e +0x026:  mov    %ebx,%eax
0815a220 +0x028:  mov    %eax,-0xc(%ebp)
0815a223 +0x02b:  cmpl   $0x0,-0xc(%ebp)
0815a227 +0x02f:  je     0815a258 <+0x60>
0815a229 +0x031:  mov    -0xc(%ebp),%eax
0815a22c +0x034:  mov    %eax,(%esp)
0815a22f +0x037:  call   0815dfc2 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x236>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x236
0815a234 +0x03c:  mov    -0xc(%ebp),%edx
0815a237 +0x03f:  mov    %edx,0x8(%esp)
0815a23b +0x043:  mov    %eax,0x4(%esp)
0815a23f +0x047:  mov    0x8(%ebp),%eax
0815a242 +0x04a:  mov    %eax,(%esp)
0815a245 +0x04d:  call   0815a85a <_ZN18TaiwanDBDispatcher13addDispatcherEN18TaiwanInternalPack1TEP27TaiwanInterfaceDBDispatcher>  ; TaiwanDBDispatcher::addDispatcher(TaiwanInternalPack::T, TaiwanInterfaceDBDispatcher*)
0815a24a +0x052:  xor    $0x1,%eax
0815a24d +0x055:  test   %al,%al
0815a24f +0x057:  je     0815a258 <+0x60>
0815a251 +0x059:  mov    $0x1,%eax
0815a256 +0x05e:  jmp    0815a25d <+0x65>
0815a258 +0x060:  mov    $0x0,%eax
0815a25d +0x065:  test   %al,%al
0815a25f +0x067:  je     0815a26b <+0x73>
0815a261 +0x069:  mov    $0x0,%eax
0815a266 +0x06e:  jmp    0815a7f0 <+0x5f8>
0815a26b +0x073:  movl   $0x8,(%esp)
0815a272 +0x07a:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0815a277 +0x07f:  mov    %eax,%ebx
0815a279 +0x081:  mov    %ebx,%eax
0815a27b +0x083:  mov    %eax,(%esp)
0815a27e +0x086:  call   0815e06a <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x2de>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x2de
0815a283 +0x08b:  mov    %ebx,%eax
0815a285 +0x08d:  mov    %eax,-0xc(%ebp)
0815a288 +0x090:  cmpl   $0x0,-0xc(%ebp)
0815a28c +0x094:  je     0815a2bd <+0xc5>
0815a28e +0x096:  mov    -0xc(%ebp),%eax
0815a291 +0x099:  mov    %eax,(%esp)
0815a294 +0x09c:  call   0815dfc2 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x236>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x236
0815a299 +0x0a1:  mov    -0xc(%ebp),%edx
0815a29c +0x0a4:  mov    %edx,0x8(%esp)
0815a2a0 +0x0a8:  mov    %eax,0x4(%esp)
0815a2a4 +0x0ac:  mov    0x8(%ebp),%eax
0815a2a7 +0x0af:  mov    %eax,(%esp)
0815a2aa +0x0b2:  call   0815a85a <_ZN18TaiwanDBDispatcher13addDispatcherEN18TaiwanInternalPack1TEP27TaiwanInterfaceDBDispatcher>  ; TaiwanDBDispatcher::addDispatcher(TaiwanInternalPack::T, TaiwanInterfaceDBDispatcher*)
0815a2af +0x0b7:  xor    $0x1,%eax
0815a2b2 +0x0ba:  test   %al,%al
0815a2b4 +0x0bc:  je     0815a2bd <+0xc5>
0815a2b6 +0x0be:  mov    $0x1,%eax
0815a2bb +0x0c3:  jmp    0815a2c2 <+0xca>
0815a2bd +0x0c5:  mov    $0x0,%eax
0815a2c2 +0x0ca:  test   %al,%al
0815a2c4 +0x0cc:  je     0815a2d0 <+0xd8>
0815a2c6 +0x0ce:  mov    $0x0,%eax
0815a2cb +0x0d3:  jmp    0815a7f0 <+0x5f8>
0815a2d0 +0x0d8:  movl   $0x8,(%esp)
0815a2d7 +0x0df:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0815a2dc +0x0e4:  mov    %eax,%ebx
0815a2de +0x0e6:  mov    %ebx,%eax
0815a2e0 +0x0e8:  mov    %eax,(%esp)
0815a2e3 +0x0eb:  call   0815e0dc <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x350>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x350
0815a2e8 +0x0f0:  mov    %ebx,%eax
0815a2ea +0x0f2:  mov    %eax,-0xc(%ebp)
0815a2ed +0x0f5:  cmpl   $0x0,-0xc(%ebp)
0815a2f1 +0x0f9:  je     0815a322 <+0x12a>
0815a2f3 +0x0fb:  mov    -0xc(%ebp),%eax
0815a2f6 +0x0fe:  mov    %eax,(%esp)
0815a2f9 +0x101:  call   0815dfc2 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x236>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x236
0815a2fe +0x106:  mov    -0xc(%ebp),%edx
0815a301 +0x109:  mov    %edx,0x8(%esp)
0815a305 +0x10d:  mov    %eax,0x4(%esp)
0815a309 +0x111:  mov    0x8(%ebp),%eax
0815a30c +0x114:  mov    %eax,(%esp)
0815a30f +0x117:  call   0815a85a <_ZN18TaiwanDBDispatcher13addDispatcherEN18TaiwanInternalPack1TEP27TaiwanInterfaceDBDispatcher>  ; TaiwanDBDispatcher::addDispatcher(TaiwanInternalPack::T, TaiwanInterfaceDBDispatcher*)
0815a314 +0x11c:  xor    $0x1,%eax
0815a317 +0x11f:  test   %al,%al
0815a319 +0x121:  je     0815a322 <+0x12a>
0815a31b +0x123:  mov    $0x1,%eax
0815a320 +0x128:  jmp    0815a327 <+0x12f>
0815a322 +0x12a:  mov    $0x0,%eax
0815a327 +0x12f:  test   %al,%al
0815a329 +0x131:  je     0815a335 <+0x13d>
0815a32b +0x133:  mov    $0x0,%eax
0815a330 +0x138:  jmp    0815a7f0 <+0x5f8>
0815a335 +0x13d:  movl   $0x8,(%esp)
0815a33c +0x144:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0815a341 +0x149:  mov    %eax,%ebx
0815a343 +0x14b:  mov    %ebx,%eax
0815a345 +0x14d:  mov    %eax,(%esp)
0815a348 +0x150:  call   0815e14e <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x3c2>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x3c2
0815a34d +0x155:  mov    %ebx,%eax
0815a34f +0x157:  mov    %eax,-0xc(%ebp)
0815a352 +0x15a:  cmpl   $0x0,-0xc(%ebp)
0815a356 +0x15e:  je     0815a387 <+0x18f>
0815a358 +0x160:  mov    -0xc(%ebp),%eax
0815a35b +0x163:  mov    %eax,(%esp)
0815a35e +0x166:  call   0815dfc2 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x236>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x236
0815a363 +0x16b:  mov    -0xc(%ebp),%edx
0815a366 +0x16e:  mov    %edx,0x8(%esp)
0815a36a +0x172:  mov    %eax,0x4(%esp)
0815a36e +0x176:  mov    0x8(%ebp),%eax
0815a371 +0x179:  mov    %eax,(%esp)
0815a374 +0x17c:  call   0815a85a <_ZN18TaiwanDBDispatcher13addDispatcherEN18TaiwanInternalPack1TEP27TaiwanInterfaceDBDispatcher>  ; TaiwanDBDispatcher::addDispatcher(TaiwanInternalPack::T, TaiwanInterfaceDBDispatcher*)
0815a379 +0x181:  xor    $0x1,%eax
0815a37c +0x184:  test   %al,%al
0815a37e +0x186:  je     0815a387 <+0x18f>
0815a380 +0x188:  mov    $0x1,%eax
0815a385 +0x18d:  jmp    0815a38c <+0x194>
0815a387 +0x18f:  mov    $0x0,%eax
0815a38c +0x194:  test   %al,%al
0815a38e +0x196:  je     0815a39a <+0x1a2>
0815a390 +0x198:  mov    $0x0,%eax
0815a395 +0x19d:  jmp    0815a7f0 <+0x5f8>
0815a39a +0x1a2:  movl   $0x8,(%esp)
0815a3a1 +0x1a9:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0815a3a6 +0x1ae:  mov    %eax,%ebx
0815a3a8 +0x1b0:  mov    %ebx,%eax
0815a3aa +0x1b2:  mov    %eax,(%esp)
0815a3ad +0x1b5:  call   0815e1c0 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x434>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x434
0815a3b2 +0x1ba:  mov    %ebx,%eax
0815a3b4 +0x1bc:  mov    %eax,-0xc(%ebp)
0815a3b7 +0x1bf:  cmpl   $0x0,-0xc(%ebp)
0815a3bb +0x1c3:  je     0815a3ec <+0x1f4>
0815a3bd +0x1c5:  mov    -0xc(%ebp),%eax
0815a3c0 +0x1c8:  mov    %eax,(%esp)
0815a3c3 +0x1cb:  call   0815dfc2 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x236>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x236
0815a3c8 +0x1d0:  mov    -0xc(%ebp),%edx
0815a3cb +0x1d3:  mov    %edx,0x8(%esp)
0815a3cf +0x1d7:  mov    %eax,0x4(%esp)
0815a3d3 +0x1db:  mov    0x8(%ebp),%eax
0815a3d6 +0x1de:  mov    %eax,(%esp)
0815a3d9 +0x1e1:  call   0815a85a <_ZN18TaiwanDBDispatcher13addDispatcherEN18TaiwanInternalPack1TEP27TaiwanInterfaceDBDispatcher>  ; TaiwanDBDispatcher::addDispatcher(TaiwanInternalPack::T, TaiwanInterfaceDBDispatcher*)
0815a3de +0x1e6:  xor    $0x1,%eax
0815a3e1 +0x1e9:  test   %al,%al
0815a3e3 +0x1eb:  je     0815a3ec <+0x1f4>
0815a3e5 +0x1ed:  mov    $0x1,%eax
0815a3ea +0x1f2:  jmp    0815a3f1 <+0x1f9>
0815a3ec +0x1f4:  mov    $0x0,%eax
0815a3f1 +0x1f9:  test   %al,%al
0815a3f3 +0x1fb:  je     0815a3ff <+0x207>
0815a3f5 +0x1fd:  mov    $0x0,%eax
0815a3fa +0x202:  jmp    0815a7f0 <+0x5f8>
0815a3ff +0x207:  movl   $0x8,(%esp)
0815a406 +0x20e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0815a40b +0x213:  mov    %eax,%ebx
0815a40d +0x215:  mov    %ebx,%eax
0815a40f +0x217:  mov    %eax,(%esp)
0815a412 +0x21a:  call   0815e232 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x4a6>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x4a6
0815a417 +0x21f:  mov    %ebx,%eax
0815a419 +0x221:  mov    %eax,-0xc(%ebp)
0815a41c +0x224:  cmpl   $0x0,-0xc(%ebp)
0815a420 +0x228:  je     0815a451 <+0x259>
0815a422 +0x22a:  mov    -0xc(%ebp),%eax
0815a425 +0x22d:  mov    %eax,(%esp)
0815a428 +0x230:  call   0815dfc2 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x236>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x236
0815a42d +0x235:  mov    -0xc(%ebp),%edx
0815a430 +0x238:  mov    %edx,0x8(%esp)
0815a434 +0x23c:  mov    %eax,0x4(%esp)
0815a438 +0x240:  mov    0x8(%ebp),%eax
0815a43b +0x243:  mov    %eax,(%esp)
0815a43e +0x246:  call   0815a85a <_ZN18TaiwanDBDispatcher13addDispatcherEN18TaiwanInternalPack1TEP27TaiwanInterfaceDBDispatcher>  ; TaiwanDBDispatcher::addDispatcher(TaiwanInternalPack::T, TaiwanInterfaceDBDispatcher*)
0815a443 +0x24b:  xor    $0x1,%eax
0815a446 +0x24e:  test   %al,%al
0815a448 +0x250:  je     0815a451 <+0x259>
0815a44a +0x252:  mov    $0x1,%eax
0815a44f +0x257:  jmp    0815a456 <+0x25e>
0815a451 +0x259:  mov    $0x0,%eax
0815a456 +0x25e:  test   %al,%al
0815a458 +0x260:  je     0815a464 <+0x26c>
0815a45a +0x262:  mov    $0x0,%eax
0815a45f +0x267:  jmp    0815a7f0 <+0x5f8>
0815a464 +0x26c:  movl   $0x8,(%esp)
0815a46b +0x273:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0815a470 +0x278:  mov    %eax,%ebx
0815a472 +0x27a:  mov    %ebx,%eax
0815a474 +0x27c:  mov    %eax,(%esp)
0815a477 +0x27f:  call   0815e2a4 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x518>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x518
0815a47c +0x284:  mov    %ebx,%eax
0815a47e +0x286:  mov    %eax,-0xc(%ebp)
0815a481 +0x289:  cmpl   $0x0,-0xc(%ebp)
0815a485 +0x28d:  je     0815a4b6 <+0x2be>
0815a487 +0x28f:  mov    -0xc(%ebp),%eax
0815a48a +0x292:  mov    %eax,(%esp)
0815a48d +0x295:  call   0815dfc2 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x236>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x236
0815a492 +0x29a:  mov    -0xc(%ebp),%edx
0815a495 +0x29d:  mov    %edx,0x8(%esp)
0815a499 +0x2a1:  mov    %eax,0x4(%esp)
0815a49d +0x2a5:  mov    0x8(%ebp),%eax
0815a4a0 +0x2a8:  mov    %eax,(%esp)
0815a4a3 +0x2ab:  call   0815a85a <_ZN18TaiwanDBDispatcher13addDispatcherEN18TaiwanInternalPack1TEP27TaiwanInterfaceDBDispatcher>  ; TaiwanDBDispatcher::addDispatcher(TaiwanInternalPack::T, TaiwanInterfaceDBDispatcher*)
0815a4a8 +0x2b0:  xor    $0x1,%eax
0815a4ab +0x2b3:  test   %al,%al
0815a4ad +0x2b5:  je     0815a4b6 <+0x2be>
0815a4af +0x2b7:  mov    $0x1,%eax
0815a4b4 +0x2bc:  jmp    0815a4bb <+0x2c3>
0815a4b6 +0x2be:  mov    $0x0,%eax
0815a4bb +0x2c3:  test   %al,%al
0815a4bd +0x2c5:  je     0815a4c9 <+0x2d1>
0815a4bf +0x2c7:  mov    $0x0,%eax
0815a4c4 +0x2cc:  jmp    0815a7f0 <+0x5f8>
0815a4c9 +0x2d1:  movl   $0x8,(%esp)
0815a4d0 +0x2d8:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0815a4d5 +0x2dd:  mov    %eax,%ebx
0815a4d7 +0x2df:  mov    %ebx,%eax
0815a4d9 +0x2e1:  mov    %eax,(%esp)
0815a4dc +0x2e4:  call   0815e316 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x58a>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x58a
0815a4e1 +0x2e9:  mov    %ebx,%eax
0815a4e3 +0x2eb:  mov    %eax,-0xc(%ebp)
0815a4e6 +0x2ee:  cmpl   $0x0,-0xc(%ebp)
0815a4ea +0x2f2:  je     0815a51b <+0x323>
0815a4ec +0x2f4:  mov    -0xc(%ebp),%eax
0815a4ef +0x2f7:  mov    %eax,(%esp)
0815a4f2 +0x2fa:  call   0815dfc2 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x236>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x236
0815a4f7 +0x2ff:  mov    -0xc(%ebp),%edx
0815a4fa +0x302:  mov    %edx,0x8(%esp)
0815a4fe +0x306:  mov    %eax,0x4(%esp)
0815a502 +0x30a:  mov    0x8(%ebp),%eax
0815a505 +0x30d:  mov    %eax,(%esp)
0815a508 +0x310:  call   0815a85a <_ZN18TaiwanDBDispatcher13addDispatcherEN18TaiwanInternalPack1TEP27TaiwanInterfaceDBDispatcher>  ; TaiwanDBDispatcher::addDispatcher(TaiwanInternalPack::T, TaiwanInterfaceDBDispatcher*)
0815a50d +0x315:  xor    $0x1,%eax
0815a510 +0x318:  test   %al,%al
0815a512 +0x31a:  je     0815a51b <+0x323>
0815a514 +0x31c:  mov    $0x1,%eax
0815a519 +0x321:  jmp    0815a520 <+0x328>
0815a51b +0x323:  mov    $0x0,%eax
0815a520 +0x328:  test   %al,%al
0815a522 +0x32a:  je     0815a52e <+0x336>
0815a524 +0x32c:  mov    $0x0,%eax
0815a529 +0x331:  jmp    0815a7f0 <+0x5f8>
0815a52e +0x336:  movl   $0x8,(%esp)
0815a535 +0x33d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0815a53a +0x342:  mov    %eax,%ebx
0815a53c +0x344:  mov    %ebx,%eax
0815a53e +0x346:  mov    %eax,(%esp)
0815a541 +0x349:  call   0815e388 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x5fc>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x5fc
0815a546 +0x34e:  mov    %ebx,%eax
0815a548 +0x350:  mov    %eax,-0xc(%ebp)
0815a54b +0x353:  cmpl   $0x0,-0xc(%ebp)
0815a54f +0x357:  je     0815a580 <+0x388>
0815a551 +0x359:  mov    -0xc(%ebp),%eax
0815a554 +0x35c:  mov    %eax,(%esp)
0815a557 +0x35f:  call   0815dfc2 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x236>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x236
0815a55c +0x364:  mov    -0xc(%ebp),%edx
0815a55f +0x367:  mov    %edx,0x8(%esp)
0815a563 +0x36b:  mov    %eax,0x4(%esp)
0815a567 +0x36f:  mov    0x8(%ebp),%eax
0815a56a +0x372:  mov    %eax,(%esp)
0815a56d +0x375:  call   0815a85a <_ZN18TaiwanDBDispatcher13addDispatcherEN18TaiwanInternalPack1TEP27TaiwanInterfaceDBDispatcher>  ; TaiwanDBDispatcher::addDispatcher(TaiwanInternalPack::T, TaiwanInterfaceDBDispatcher*)
0815a572 +0x37a:  xor    $0x1,%eax
0815a575 +0x37d:  test   %al,%al
0815a577 +0x37f:  je     0815a580 <+0x388>
0815a579 +0x381:  mov    $0x1,%eax
0815a57e +0x386:  jmp    0815a585 <+0x38d>
0815a580 +0x388:  mov    $0x0,%eax
0815a585 +0x38d:  test   %al,%al
0815a587 +0x38f:  je     0815a593 <+0x39b>
0815a589 +0x391:  mov    $0x0,%eax
0815a58e +0x396:  jmp    0815a7f0 <+0x5f8>
0815a593 +0x39b:  movl   $0x8,(%esp)
0815a59a +0x3a2:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0815a59f +0x3a7:  mov    %eax,%ebx
0815a5a1 +0x3a9:  mov    %ebx,%eax
0815a5a3 +0x3ab:  mov    %eax,(%esp)
0815a5a6 +0x3ae:  call   0815e3fa <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x66e>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x66e
0815a5ab +0x3b3:  mov    %ebx,%eax
0815a5ad +0x3b5:  mov    %eax,-0xc(%ebp)
0815a5b0 +0x3b8:  cmpl   $0x0,-0xc(%ebp)
0815a5b4 +0x3bc:  je     0815a5e5 <+0x3ed>
0815a5b6 +0x3be:  mov    -0xc(%ebp),%eax
0815a5b9 +0x3c1:  mov    %eax,(%esp)
0815a5bc +0x3c4:  call   0815dfc2 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x236>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x236
0815a5c1 +0x3c9:  mov    -0xc(%ebp),%edx
0815a5c4 +0x3cc:  mov    %edx,0x8(%esp)
0815a5c8 +0x3d0:  mov    %eax,0x4(%esp)
0815a5cc +0x3d4:  mov    0x8(%ebp),%eax
0815a5cf +0x3d7:  mov    %eax,(%esp)
0815a5d2 +0x3da:  call   0815a85a <_ZN18TaiwanDBDispatcher13addDispatcherEN18TaiwanInternalPack1TEP27TaiwanInterfaceDBDispatcher>  ; TaiwanDBDispatcher::addDispatcher(TaiwanInternalPack::T, TaiwanInterfaceDBDispatcher*)
0815a5d7 +0x3df:  xor    $0x1,%eax
0815a5da +0x3e2:  test   %al,%al
0815a5dc +0x3e4:  je     0815a5e5 <+0x3ed>
0815a5de +0x3e6:  mov    $0x1,%eax
0815a5e3 +0x3eb:  jmp    0815a5ea <+0x3f2>
0815a5e5 +0x3ed:  mov    $0x0,%eax
0815a5ea +0x3f2:  test   %al,%al
0815a5ec +0x3f4:  je     0815a5f8 <+0x400>
0815a5ee +0x3f6:  mov    $0x0,%eax
0815a5f3 +0x3fb:  jmp    0815a7f0 <+0x5f8>
0815a5f8 +0x400:  movl   $0x8,(%esp)
0815a5ff +0x407:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0815a604 +0x40c:  mov    %eax,%ebx
0815a606 +0x40e:  mov    %ebx,%eax
0815a608 +0x410:  mov    %eax,(%esp)
0815a60b +0x413:  call   0815e46c <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x6e0>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x6e0
0815a610 +0x418:  mov    %ebx,%eax
0815a612 +0x41a:  mov    %eax,-0xc(%ebp)
0815a615 +0x41d:  cmpl   $0x0,-0xc(%ebp)
0815a619 +0x421:  je     0815a64a <+0x452>
0815a61b +0x423:  mov    -0xc(%ebp),%eax
0815a61e +0x426:  mov    %eax,(%esp)
0815a621 +0x429:  call   0815dfc2 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x236>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x236
0815a626 +0x42e:  mov    -0xc(%ebp),%edx
0815a629 +0x431:  mov    %edx,0x8(%esp)
0815a62d +0x435:  mov    %eax,0x4(%esp)
0815a631 +0x439:  mov    0x8(%ebp),%eax
0815a634 +0x43c:  mov    %eax,(%esp)
0815a637 +0x43f:  call   0815a85a <_ZN18TaiwanDBDispatcher13addDispatcherEN18TaiwanInternalPack1TEP27TaiwanInterfaceDBDispatcher>  ; TaiwanDBDispatcher::addDispatcher(TaiwanInternalPack::T, TaiwanInterfaceDBDispatcher*)
0815a63c +0x444:  xor    $0x1,%eax
0815a63f +0x447:  test   %al,%al
0815a641 +0x449:  je     0815a64a <+0x452>
0815a643 +0x44b:  mov    $0x1,%eax
0815a648 +0x450:  jmp    0815a64f <+0x457>
0815a64a +0x452:  mov    $0x0,%eax
0815a64f +0x457:  test   %al,%al
0815a651 +0x459:  je     0815a65d <+0x465>
0815a653 +0x45b:  mov    $0x0,%eax
0815a658 +0x460:  jmp    0815a7f0 <+0x5f8>
0815a65d +0x465:  movl   $0x8,(%esp)
0815a664 +0x46c:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0815a669 +0x471:  mov    %eax,%ebx
0815a66b +0x473:  mov    %ebx,%eax
0815a66d +0x475:  mov    %eax,(%esp)
0815a670 +0x478:  call   0815e4de <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x752>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x752
0815a675 +0x47d:  mov    %ebx,%eax
0815a677 +0x47f:  mov    %eax,-0xc(%ebp)
0815a67a +0x482:  cmpl   $0x0,-0xc(%ebp)
0815a67e +0x486:  je     0815a6af <+0x4b7>
0815a680 +0x488:  mov    -0xc(%ebp),%eax
0815a683 +0x48b:  mov    %eax,(%esp)
0815a686 +0x48e:  call   0815dfc2 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x236>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x236
0815a68b +0x493:  mov    -0xc(%ebp),%edx
0815a68e +0x496:  mov    %edx,0x8(%esp)
0815a692 +0x49a:  mov    %eax,0x4(%esp)
0815a696 +0x49e:  mov    0x8(%ebp),%eax
0815a699 +0x4a1:  mov    %eax,(%esp)
0815a69c +0x4a4:  call   0815a85a <_ZN18TaiwanDBDispatcher13addDispatcherEN18TaiwanInternalPack1TEP27TaiwanInterfaceDBDispatcher>  ; TaiwanDBDispatcher::addDispatcher(TaiwanInternalPack::T, TaiwanInterfaceDBDispatcher*)
0815a6a1 +0x4a9:  xor    $0x1,%eax
0815a6a4 +0x4ac:  test   %al,%al
0815a6a6 +0x4ae:  je     0815a6af <+0x4b7>
0815a6a8 +0x4b0:  mov    $0x1,%eax
0815a6ad +0x4b5:  jmp    0815a6b4 <+0x4bc>
0815a6af +0x4b7:  mov    $0x0,%eax
0815a6b4 +0x4bc:  test   %al,%al
0815a6b6 +0x4be:  je     0815a6c2 <+0x4ca>
0815a6b8 +0x4c0:  mov    $0x0,%eax
0815a6bd +0x4c5:  jmp    0815a7f0 <+0x5f8>
0815a6c2 +0x4ca:  movl   $0x8,(%esp)
0815a6c9 +0x4d1:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0815a6ce +0x4d6:  mov    %eax,%ebx
0815a6d0 +0x4d8:  mov    %ebx,%eax
0815a6d2 +0x4da:  mov    %eax,(%esp)
0815a6d5 +0x4dd:  call   0815e550 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x7c4>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x7c4
0815a6da +0x4e2:  mov    %ebx,%eax
0815a6dc +0x4e4:  mov    %eax,-0xc(%ebp)
0815a6df +0x4e7:  cmpl   $0x0,-0xc(%ebp)
0815a6e3 +0x4eb:  je     0815a714 <+0x51c>
0815a6e5 +0x4ed:  mov    -0xc(%ebp),%eax
0815a6e8 +0x4f0:  mov    %eax,(%esp)
0815a6eb +0x4f3:  call   0815dfc2 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x236>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x236
0815a6f0 +0x4f8:  mov    -0xc(%ebp),%edx
0815a6f3 +0x4fb:  mov    %edx,0x8(%esp)
0815a6f7 +0x4ff:  mov    %eax,0x4(%esp)
0815a6fb +0x503:  mov    0x8(%ebp),%eax
0815a6fe +0x506:  mov    %eax,(%esp)
0815a701 +0x509:  call   0815a85a <_ZN18TaiwanDBDispatcher13addDispatcherEN18TaiwanInternalPack1TEP27TaiwanInterfaceDBDispatcher>  ; TaiwanDBDispatcher::addDispatcher(TaiwanInternalPack::T, TaiwanInterfaceDBDispatcher*)
0815a706 +0x50e:  xor    $0x1,%eax
0815a709 +0x511:  test   %al,%al
0815a70b +0x513:  je     0815a714 <+0x51c>
0815a70d +0x515:  mov    $0x1,%eax
0815a712 +0x51a:  jmp    0815a719 <+0x521>
0815a714 +0x51c:  mov    $0x0,%eax
0815a719 +0x521:  test   %al,%al
0815a71b +0x523:  je     0815a727 <+0x52f>
0815a71d +0x525:  mov    $0x0,%eax
0815a722 +0x52a:  jmp    0815a7f0 <+0x5f8>
0815a727 +0x52f:  movl   $0x8,(%esp)
0815a72e +0x536:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0815a733 +0x53b:  mov    %eax,%ebx
0815a735 +0x53d:  mov    %ebx,%eax
0815a737 +0x53f:  mov    %eax,(%esp)
0815a73a +0x542:  call   0815e5c2 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x836>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x836
0815a73f +0x547:  mov    %ebx,%eax
0815a741 +0x549:  mov    %eax,-0xc(%ebp)
0815a744 +0x54c:  cmpl   $0x0,-0xc(%ebp)
0815a748 +0x550:  je     0815a779 <+0x581>
0815a74a +0x552:  mov    -0xc(%ebp),%eax
0815a74d +0x555:  mov    %eax,(%esp)
0815a750 +0x558:  call   0815dfc2 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x236>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x236
0815a755 +0x55d:  mov    -0xc(%ebp),%edx
0815a758 +0x560:  mov    %edx,0x8(%esp)
0815a75c +0x564:  mov    %eax,0x4(%esp)
0815a760 +0x568:  mov    0x8(%ebp),%eax
0815a763 +0x56b:  mov    %eax,(%esp)
0815a766 +0x56e:  call   0815a85a <_ZN18TaiwanDBDispatcher13addDispatcherEN18TaiwanInternalPack1TEP27TaiwanInterfaceDBDispatcher>  ; TaiwanDBDispatcher::addDispatcher(TaiwanInternalPack::T, TaiwanInterfaceDBDispatcher*)
0815a76b +0x573:  xor    $0x1,%eax
0815a76e +0x576:  test   %al,%al
0815a770 +0x578:  je     0815a779 <+0x581>
0815a772 +0x57a:  mov    $0x1,%eax
0815a777 +0x57f:  jmp    0815a77e <+0x586>
0815a779 +0x581:  mov    $0x0,%eax
0815a77e +0x586:  test   %al,%al
0815a780 +0x588:  je     0815a789 <+0x591>
0815a782 +0x58a:  mov    $0x0,%eax
0815a787 +0x58f:  jmp    0815a7f0 <+0x5f8>
0815a789 +0x591:  movl   $0x8,(%esp)
0815a790 +0x598:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0815a795 +0x59d:  mov    %eax,%ebx
0815a797 +0x59f:  mov    %ebx,%eax
0815a799 +0x5a1:  mov    %eax,(%esp)
0815a79c +0x5a4:  call   0815e634 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x8a8>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x8a8
0815a7a1 +0x5a9:  mov    %ebx,%eax
0815a7a3 +0x5ab:  mov    %eax,-0xc(%ebp)
0815a7a6 +0x5ae:  cmpl   $0x0,-0xc(%ebp)
0815a7aa +0x5b2:  je     0815a7db <+0x5e3>
0815a7ac +0x5b4:  mov    -0xc(%ebp),%eax
0815a7af +0x5b7:  mov    %eax,(%esp)
0815a7b2 +0x5ba:  call   0815dfc2 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x236>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x236
0815a7b7 +0x5bf:  mov    -0xc(%ebp),%edx
0815a7ba +0x5c2:  mov    %edx,0x8(%esp)
0815a7be +0x5c6:  mov    %eax,0x4(%esp)
0815a7c2 +0x5ca:  mov    0x8(%ebp),%eax
0815a7c5 +0x5cd:  mov    %eax,(%esp)
0815a7c8 +0x5d0:  call   0815a85a <_ZN18TaiwanDBDispatcher13addDispatcherEN18TaiwanInternalPack1TEP27TaiwanInterfaceDBDispatcher>  ; TaiwanDBDispatcher::addDispatcher(TaiwanInternalPack::T, TaiwanInterfaceDBDispatcher*)
0815a7cd +0x5d5:  xor    $0x1,%eax
0815a7d0 +0x5d8:  test   %al,%al
0815a7d2 +0x5da:  je     0815a7db <+0x5e3>
0815a7d4 +0x5dc:  mov    $0x1,%eax
0815a7d9 +0x5e1:  jmp    0815a7e0 <+0x5e8>
0815a7db +0x5e3:  mov    $0x0,%eax
0815a7e0 +0x5e8:  test   %al,%al
0815a7e2 +0x5ea:  je     0815a7eb <+0x5f3>
0815a7e4 +0x5ec:  mov    $0x0,%eax
0815a7e9 +0x5f1:  jmp    0815a7f0 <+0x5f8>
0815a7eb +0x5f3:  mov    $0x1,%eax
0815a7f0 +0x5f8:  add    $0x24,%esp
0815a7f3 +0x5fb:  pop    %ebx
0815a7f4 +0x5fc:  pop    %ebp
0815a7f5 +0x5fd:  ret
```

## 反编译 C

```c
// TaiwanDBDispatcher::init @ 0x815a1f8

/* TaiwanDBDispatcher::init() */

bool __thiscall TaiwanDBDispatcher::init(TaiwanDBDispatcher *this)

{
  bool bVar1;
  char cVar2;
  LoadServiceRestrictPolicy *this_00;
  undefined4 uVar3;
  SaveServiceRestrictPolicy *this_01;
  LoadGeolocation *this_02;
  CheckStayTimeEvent *this_03;
  ResetStayTimeEvent *this_04;
  DBUpdateExitTime *this_05;
  DBSelectCreateDnfEventInfo *this_06;
  DBSelectCreateDnfUserInfo *this_07;
  DBInsertCreateDnfUserInfo *this_08;
  DBSelectMobileAuthRewardTw *this_09;
  DBSelectPcroomDailyReward *this_10;
  DBUpdatePcroomDailyReward *this_11;
  DBInsertGiveBoxEventReward *this_12;
  DBLoadHeroMissionEventData *this_13;
  DBSaveHeroMissionEventData *this_14;
  
  this_00 = operator_new(8);
  LoadServiceRestrictPolicy::LoadServiceRestrictPolicy(this_00);
  if (this_00 == (LoadServiceRestrictPolicy *)0x0) {
LAB_0815a258:
    bVar1 = false;
  }
  else {
    uVar3 = TaiwanInterfaceDBDispatcher::getCode((TaiwanInterfaceDBDispatcher *)this_00);
    cVar2 = addDispatcher(this,uVar3,this_00);
    if (cVar2 == '\x01') goto LAB_0815a258;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_01 = operator_new(8);
  SaveServiceRestrictPolicy::SaveServiceRestrictPolicy(this_01);
  if (this_01 == (SaveServiceRestrictPolicy *)0x0) {
LAB_0815a2bd:
    bVar1 = false;
  }
  else {
    uVar3 = TaiwanInterfaceDBDispatcher::getCode((TaiwanInterfaceDBDispatcher *)this_01);
    cVar2 = addDispatcher(this,uVar3,this_01);
    if (cVar2 == '\x01') goto LAB_0815a2bd;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_02 = operator_new(8);
  LoadGeolocation::LoadGeolocation(this_02);
  if (this_02 == (LoadGeolocation *)0x0) {
LAB_0815a322:
    bVar1 = false;
  }
  else {
    uVar3 = TaiwanInterfaceDBDispatcher::getCode((TaiwanInterfaceDBDispatcher *)this_02);
    cVar2 = addDispatcher(this,uVar3,this_02);
    if (cVar2 == '\x01') goto LAB_0815a322;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_03 = operator_new(8);
  CheckStayTimeEvent::CheckStayTimeEvent(this_03);
  if (this_03 == (CheckStayTimeEvent *)0x0) {
LAB_0815a387:
    bVar1 = false;
  }
  else {
    uVar3 = TaiwanInterfaceDBDispatcher::getCode((TaiwanInterfaceDBDispatcher *)this_03);
    cVar2 = addDispatcher(this,uVar3,this_03);
    if (cVar2 == '\x01') goto LAB_0815a387;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_04 = operator_new(8);
  ResetStayTimeEvent::ResetStayTimeEvent(this_04);
  if (this_04 == (ResetStayTimeEvent *)0x0) {
LAB_0815a3ec:
    bVar1 = false;
  }
  else {
    uVar3 = TaiwanInterfaceDBDispatcher::getCode((TaiwanInterfaceDBDispatcher *)this_04);
    cVar2 = addDispatcher(this,uVar3,this_04);
    if (cVar2 == '\x01') goto LAB_0815a3ec;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_05 = operator_new(8);
  DBUpdateExitTime::DBUpdateExitTime(this_05);
  if (this_05 == (DBUpdateExitTime *)0x0) {
LAB_0815a451:
    bVar1 = false;
  }
  else {
    uVar3 = TaiwanInterfaceDBDispatcher::getCode((TaiwanInterfaceDBDispatcher *)this_05);
    cVar2 = addDispatcher(this,uVar3,this_05);
    if (cVar2 == '\x01') goto LAB_0815a451;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_06 = operator_new(8);
  DBSelectCreateDnfEventInfo::DBSelectCreateDnfEventInfo(this_06);
  if (this_06 == (DBSelectCreateDnfEventInfo *)0x0) {
LAB_0815a4b6:
    bVar1 = false;
  }
  else {
    uVar3 = TaiwanInterfaceDBDispatcher::getCode((TaiwanInterfaceDBDispatcher *)this_06);
    cVar2 = addDispatcher(this,uVar3,this_06);
    if (cVar2 == '\x01') goto LAB_0815a4b6;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_07 = operator_new(8);
  DBSelectCreateDnfUserInfo::DBSelectCreateDnfUserInfo(this_07);
  if (this_07 == (DBSelectCreateDnfUserInfo *)0x0) {
LAB_0815a51b:
    bVar1 = false;
  }
  else {
    uVar3 = TaiwanInterfaceDBDispatcher::getCode((TaiwanInterfaceDBDispatcher *)this_07);
    cVar2 = addDispatcher(this,uVar3,this_07);
    if (cVar2 == '\x01') goto LAB_0815a51b;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_08 = operator_new(8);
  DBInsertCreateDnfUserInfo::DBInsertCreateDnfUserInfo(this_08);
  if (this_08 == (DBInsertCreateDnfUserInfo *)0x0) {
LAB_0815a580:
    bVar1 = false;
  }
  else {
    uVar3 = TaiwanInterfaceDBDispatcher::getCode((TaiwanInterfaceDBDispatcher *)this_08);
    cVar2 = addDispatcher(this,uVar3,this_08);
    if (cVar2 == '\x01') goto LAB_0815a580;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_09 = operator_new(8);
  DBSelectMobileAuthRewardTw::DBSelectMobileAuthRewardTw(this_09);
  if (this_09 == (DBSelectMobileAuthRewardTw *)0x0) {
LAB_0815a5e5:
    bVar1 = false;
  }
  else {
    uVar3 = TaiwanInterfaceDBDispatcher::getCode((TaiwanInterfaceDBDispatcher *)this_09);
    cVar2 = addDispatcher(this,uVar3,this_09);
    if (cVar2 == '\x01') goto LAB_0815a5e5;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_10 = operator_new(8);
  DBSelectPcroomDailyReward::DBSelectPcroomDailyReward(this_10);
  if (this_10 == (DBSelectPcroomDailyReward *)0x0) {
LAB_0815a64a:
    bVar1 = false;
  }
  else {
    uVar3 = TaiwanInterfaceDBDispatcher::getCode((TaiwanInterfaceDBDispatcher *)this_10);
    cVar2 = addDispatcher(this,uVar3,this_10);
    if (cVar2 == '\x01') goto LAB_0815a64a;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_11 = operator_new(8);
  DBUpdatePcroomDailyReward::DBUpdatePcroomDailyReward(this_11);
  if (this_11 == (DBUpdatePcroomDailyReward *)0x0) {
LAB_0815a6af:
    bVar1 = false;
  }
  else {
    uVar3 = TaiwanInterfaceDBDispatcher::getCode((TaiwanInterfaceDBDispatcher *)this_11);
    cVar2 = addDispatcher(this,uVar3,this_11);
    if (cVar2 == '\x01') goto LAB_0815a6af;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_12 = operator_new(8);
  DBInsertGiveBoxEventReward::DBInsertGiveBoxEventReward(this_12);
  if (this_12 == (DBInsertGiveBoxEventReward *)0x0) {
LAB_0815a714:
    bVar1 = false;
  }
  else {
    uVar3 = TaiwanInterfaceDBDispatcher::getCode((TaiwanInterfaceDBDispatcher *)this_12);
    cVar2 = addDispatcher(this,uVar3,this_12);
    if (cVar2 == '\x01') goto LAB_0815a714;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_13 = operator_new(8);
  DBLoadHeroMissionEventData::DBLoadHeroMissionEventData(this_13);
  if (this_13 == (DBLoadHeroMissionEventData *)0x0) {
LAB_0815a779:
    bVar1 = false;
  }
  else {
    uVar3 = TaiwanInterfaceDBDispatcher::getCode((TaiwanInterfaceDBDispatcher *)this_13);
    cVar2 = addDispatcher(this,uVar3,this_13);
    if (cVar2 == '\x01') goto LAB_0815a779;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_14 = operator_new(8);
  DBSaveHeroMissionEventData::DBSaveHeroMissionEventData(this_14);
  if (this_14 != (DBSaveHeroMissionEventData *)0x0) {
    uVar3 = TaiwanInterfaceDBDispatcher::getCode((TaiwanInterfaceDBDispatcher *)this_14);
    cVar2 = addDispatcher(this,uVar3,this_14);
    if (cVar2 != '\x01') {
      bVar1 = true;
      goto LAB_0815a7e0;
    }
  }
  bVar1 = false;
LAB_0815a7e0:
  return !bVar1;
}
```
