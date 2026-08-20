# init

`_ZN24TaiwanInternalDispatcher4initEv`

`TaiwanInternalDispatcher::init()`

| 类 | 地址 |
|---|---|
| `TaiwanInternalDispatcher` | `0x08160294` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08160294  _ZN24TaiwanInternalDispatcher4initEv
#           TaiwanInternalDispatcher::init()
# range [0x08160294, 0x08160699]
08160294 +0x000:  push   %ebp
08160295 +0x001:  mov    %esp,%ebp
08160297 +0x003:  push   %ebx
08160298 +0x004:  sub    $0x24,%esp
0816029b +0x007:  movl   $0x0,-0xc(%ebp)
081602a2 +0x00e:  movl   $0x8,(%esp)
081602a9 +0x015:  call   08724450 <_Znwj>  ; operator new(unsigned int)
081602ae +0x01a:  mov    %eax,%ebx
081602b0 +0x01c:  mov    %ebx,%eax
081602b2 +0x01e:  mov    %eax,(%esp)
081602b5 +0x021:  call   08161ec4 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x132>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x132
081602ba +0x026:  mov    %ebx,%eax
081602bc +0x028:  mov    %eax,-0xc(%ebp)
081602bf +0x02b:  cmpl   $0x0,-0xc(%ebp)
081602c3 +0x02f:  je     081602f4 <+0x60>
081602c5 +0x031:  mov    -0xc(%ebp),%eax
081602c8 +0x034:  mov    %eax,(%esp)
081602cb +0x037:  call   08161e8e <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0xfc>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0xfc
081602d0 +0x03c:  mov    -0xc(%ebp),%edx
081602d3 +0x03f:  mov    %edx,0x8(%esp)
081602d7 +0x043:  mov    %eax,0x4(%esp)
081602db +0x047:  mov    0x8(%ebp),%eax
081602de +0x04a:  mov    %eax,(%esp)
081602e1 +0x04d:  call   081606fe <_ZN24TaiwanInternalDispatcher13addDispatcherEN18TaiwanInternalPack1TEP30TaiwanInterfaceInterDispatcher>  ; TaiwanInternalDispatcher::addDispatcher(TaiwanInternalPack::T, TaiwanInterfaceInterDispatcher*)
081602e6 +0x052:  xor    $0x1,%eax
081602e9 +0x055:  test   %al,%al
081602eb +0x057:  je     081602f4 <+0x60>
081602ed +0x059:  mov    $0x1,%eax
081602f2 +0x05e:  jmp    081602f9 <+0x65>
081602f4 +0x060:  mov    $0x0,%eax
081602f9 +0x065:  test   %al,%al
081602fb +0x067:  je     08160307 <+0x73>
081602fd +0x069:  mov    $0x0,%eax
08160302 +0x06e:  jmp    08160693 <+0x3ff>
08160307 +0x073:  movl   $0x8,(%esp)
0816030e +0x07a:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08160313 +0x07f:  mov    %eax,%ebx
08160315 +0x081:  mov    %ebx,%eax
08160317 +0x083:  mov    %eax,(%esp)
0816031a +0x086:  call   08161f36 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x1a4>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x1a4
0816031f +0x08b:  mov    %ebx,%eax
08160321 +0x08d:  mov    %eax,-0xc(%ebp)
08160324 +0x090:  cmpl   $0x0,-0xc(%ebp)
08160328 +0x094:  je     08160359 <+0xc5>
0816032a +0x096:  mov    -0xc(%ebp),%eax
0816032d +0x099:  mov    %eax,(%esp)
08160330 +0x09c:  call   08161e8e <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0xfc>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0xfc
08160335 +0x0a1:  mov    -0xc(%ebp),%edx
08160338 +0x0a4:  mov    %edx,0x8(%esp)
0816033c +0x0a8:  mov    %eax,0x4(%esp)
08160340 +0x0ac:  mov    0x8(%ebp),%eax
08160343 +0x0af:  mov    %eax,(%esp)
08160346 +0x0b2:  call   081606fe <_ZN24TaiwanInternalDispatcher13addDispatcherEN18TaiwanInternalPack1TEP30TaiwanInterfaceInterDispatcher>  ; TaiwanInternalDispatcher::addDispatcher(TaiwanInternalPack::T, TaiwanInterfaceInterDispatcher*)
0816034b +0x0b7:  xor    $0x1,%eax
0816034e +0x0ba:  test   %al,%al
08160350 +0x0bc:  je     08160359 <+0xc5>
08160352 +0x0be:  mov    $0x1,%eax
08160357 +0x0c3:  jmp    0816035e <+0xca>
08160359 +0x0c5:  mov    $0x0,%eax
0816035e +0x0ca:  test   %al,%al
08160360 +0x0cc:  je     0816036c <+0xd8>
08160362 +0x0ce:  mov    $0x0,%eax
08160367 +0x0d3:  jmp    08160693 <+0x3ff>
0816036c +0x0d8:  movl   $0x8,(%esp)
08160373 +0x0df:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08160378 +0x0e4:  mov    %eax,%ebx
0816037a +0x0e6:  mov    %ebx,%eax
0816037c +0x0e8:  mov    %eax,(%esp)
0816037f +0x0eb:  call   08161fa8 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x216>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x216
08160384 +0x0f0:  mov    %ebx,%eax
08160386 +0x0f2:  mov    %eax,-0xc(%ebp)
08160389 +0x0f5:  cmpl   $0x0,-0xc(%ebp)
0816038d +0x0f9:  je     081603be <+0x12a>
0816038f +0x0fb:  mov    -0xc(%ebp),%eax
08160392 +0x0fe:  mov    %eax,(%esp)
08160395 +0x101:  call   08161e8e <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0xfc>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0xfc
0816039a +0x106:  mov    -0xc(%ebp),%edx
0816039d +0x109:  mov    %edx,0x8(%esp)
081603a1 +0x10d:  mov    %eax,0x4(%esp)
081603a5 +0x111:  mov    0x8(%ebp),%eax
081603a8 +0x114:  mov    %eax,(%esp)
081603ab +0x117:  call   081606fe <_ZN24TaiwanInternalDispatcher13addDispatcherEN18TaiwanInternalPack1TEP30TaiwanInterfaceInterDispatcher>  ; TaiwanInternalDispatcher::addDispatcher(TaiwanInternalPack::T, TaiwanInterfaceInterDispatcher*)
081603b0 +0x11c:  xor    $0x1,%eax
081603b3 +0x11f:  test   %al,%al
081603b5 +0x121:  je     081603be <+0x12a>
081603b7 +0x123:  mov    $0x1,%eax
081603bc +0x128:  jmp    081603c3 <+0x12f>
081603be +0x12a:  mov    $0x0,%eax
081603c3 +0x12f:  test   %al,%al
081603c5 +0x131:  je     081603d1 <+0x13d>
081603c7 +0x133:  mov    $0x0,%eax
081603cc +0x138:  jmp    08160693 <+0x3ff>
081603d1 +0x13d:  movl   $0x8,(%esp)
081603d8 +0x144:  call   08724450 <_Znwj>  ; operator new(unsigned int)
081603dd +0x149:  mov    %eax,%ebx
081603df +0x14b:  mov    %ebx,%eax
081603e1 +0x14d:  mov    %eax,(%esp)
081603e4 +0x150:  call   0816201a <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x288>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x288
081603e9 +0x155:  mov    %ebx,%eax
081603eb +0x157:  mov    %eax,-0xc(%ebp)
081603ee +0x15a:  cmpl   $0x0,-0xc(%ebp)
081603f2 +0x15e:  je     08160423 <+0x18f>
081603f4 +0x160:  mov    -0xc(%ebp),%eax
081603f7 +0x163:  mov    %eax,(%esp)
081603fa +0x166:  call   08161e8e <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0xfc>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0xfc
081603ff +0x16b:  mov    -0xc(%ebp),%edx
08160402 +0x16e:  mov    %edx,0x8(%esp)
08160406 +0x172:  mov    %eax,0x4(%esp)
0816040a +0x176:  mov    0x8(%ebp),%eax
0816040d +0x179:  mov    %eax,(%esp)
08160410 +0x17c:  call   081606fe <_ZN24TaiwanInternalDispatcher13addDispatcherEN18TaiwanInternalPack1TEP30TaiwanInterfaceInterDispatcher>  ; TaiwanInternalDispatcher::addDispatcher(TaiwanInternalPack::T, TaiwanInterfaceInterDispatcher*)
08160415 +0x181:  xor    $0x1,%eax
08160418 +0x184:  test   %al,%al
0816041a +0x186:  je     08160423 <+0x18f>
0816041c +0x188:  mov    $0x1,%eax
08160421 +0x18d:  jmp    08160428 <+0x194>
08160423 +0x18f:  mov    $0x0,%eax
08160428 +0x194:  test   %al,%al
0816042a +0x196:  je     08160436 <+0x1a2>
0816042c +0x198:  mov    $0x0,%eax
08160431 +0x19d:  jmp    08160693 <+0x3ff>
08160436 +0x1a2:  movl   $0x8,(%esp)
0816043d +0x1a9:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08160442 +0x1ae:  mov    %eax,%ebx
08160444 +0x1b0:  mov    %ebx,%eax
08160446 +0x1b2:  mov    %eax,(%esp)
08160449 +0x1b5:  call   0816208c <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x2fa>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x2fa
0816044e +0x1ba:  mov    %ebx,%eax
08160450 +0x1bc:  mov    %eax,-0xc(%ebp)
08160453 +0x1bf:  cmpl   $0x0,-0xc(%ebp)
08160457 +0x1c3:  je     08160488 <+0x1f4>
08160459 +0x1c5:  mov    -0xc(%ebp),%eax
0816045c +0x1c8:  mov    %eax,(%esp)
0816045f +0x1cb:  call   08161e8e <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0xfc>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0xfc
08160464 +0x1d0:  mov    -0xc(%ebp),%edx
08160467 +0x1d3:  mov    %edx,0x8(%esp)
0816046b +0x1d7:  mov    %eax,0x4(%esp)
0816046f +0x1db:  mov    0x8(%ebp),%eax
08160472 +0x1de:  mov    %eax,(%esp)
08160475 +0x1e1:  call   081606fe <_ZN24TaiwanInternalDispatcher13addDispatcherEN18TaiwanInternalPack1TEP30TaiwanInterfaceInterDispatcher>  ; TaiwanInternalDispatcher::addDispatcher(TaiwanInternalPack::T, TaiwanInterfaceInterDispatcher*)
0816047a +0x1e6:  xor    $0x1,%eax
0816047d +0x1e9:  test   %al,%al
0816047f +0x1eb:  je     08160488 <+0x1f4>
08160481 +0x1ed:  mov    $0x1,%eax
08160486 +0x1f2:  jmp    0816048d <+0x1f9>
08160488 +0x1f4:  mov    $0x0,%eax
0816048d +0x1f9:  test   %al,%al
0816048f +0x1fb:  je     0816049b <+0x207>
08160491 +0x1fd:  mov    $0x0,%eax
08160496 +0x202:  jmp    08160693 <+0x3ff>
0816049b +0x207:  movl   $0x8,(%esp)
081604a2 +0x20e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
081604a7 +0x213:  mov    %eax,%ebx
081604a9 +0x215:  mov    %ebx,%eax
081604ab +0x217:  mov    %eax,(%esp)
081604ae +0x21a:  call   081620fe <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x36c>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x36c
081604b3 +0x21f:  mov    %ebx,%eax
081604b5 +0x221:  mov    %eax,-0xc(%ebp)
081604b8 +0x224:  cmpl   $0x0,-0xc(%ebp)
081604bc +0x228:  je     081604ed <+0x259>
081604be +0x22a:  mov    -0xc(%ebp),%eax
081604c1 +0x22d:  mov    %eax,(%esp)
081604c4 +0x230:  call   08161e8e <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0xfc>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0xfc
081604c9 +0x235:  mov    -0xc(%ebp),%edx
081604cc +0x238:  mov    %edx,0x8(%esp)
081604d0 +0x23c:  mov    %eax,0x4(%esp)
081604d4 +0x240:  mov    0x8(%ebp),%eax
081604d7 +0x243:  mov    %eax,(%esp)
081604da +0x246:  call   081606fe <_ZN24TaiwanInternalDispatcher13addDispatcherEN18TaiwanInternalPack1TEP30TaiwanInterfaceInterDispatcher>  ; TaiwanInternalDispatcher::addDispatcher(TaiwanInternalPack::T, TaiwanInterfaceInterDispatcher*)
081604df +0x24b:  xor    $0x1,%eax
081604e2 +0x24e:  test   %al,%al
081604e4 +0x250:  je     081604ed <+0x259>
081604e6 +0x252:  mov    $0x1,%eax
081604eb +0x257:  jmp    081604f2 <+0x25e>
081604ed +0x259:  mov    $0x0,%eax
081604f2 +0x25e:  test   %al,%al
081604f4 +0x260:  je     08160500 <+0x26c>
081604f6 +0x262:  mov    $0x0,%eax
081604fb +0x267:  jmp    08160693 <+0x3ff>
08160500 +0x26c:  movl   $0x8,(%esp)
08160507 +0x273:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0816050c +0x278:  mov    %eax,%ebx
0816050e +0x27a:  mov    %ebx,%eax
08160510 +0x27c:  mov    %eax,(%esp)
08160513 +0x27f:  call   08162170 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x3de>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x3de
08160518 +0x284:  mov    %ebx,%eax
0816051a +0x286:  mov    %eax,-0xc(%ebp)
0816051d +0x289:  cmpl   $0x0,-0xc(%ebp)
08160521 +0x28d:  je     08160552 <+0x2be>
08160523 +0x28f:  mov    -0xc(%ebp),%eax
08160526 +0x292:  mov    %eax,(%esp)
08160529 +0x295:  call   08161e8e <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0xfc>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0xfc
0816052e +0x29a:  mov    -0xc(%ebp),%edx
08160531 +0x29d:  mov    %edx,0x8(%esp)
08160535 +0x2a1:  mov    %eax,0x4(%esp)
08160539 +0x2a5:  mov    0x8(%ebp),%eax
0816053c +0x2a8:  mov    %eax,(%esp)
0816053f +0x2ab:  call   081606fe <_ZN24TaiwanInternalDispatcher13addDispatcherEN18TaiwanInternalPack1TEP30TaiwanInterfaceInterDispatcher>  ; TaiwanInternalDispatcher::addDispatcher(TaiwanInternalPack::T, TaiwanInterfaceInterDispatcher*)
08160544 +0x2b0:  xor    $0x1,%eax
08160547 +0x2b3:  test   %al,%al
08160549 +0x2b5:  je     08160552 <+0x2be>
0816054b +0x2b7:  mov    $0x1,%eax
08160550 +0x2bc:  jmp    08160557 <+0x2c3>
08160552 +0x2be:  mov    $0x0,%eax
08160557 +0x2c3:  test   %al,%al
08160559 +0x2c5:  je     08160565 <+0x2d1>
0816055b +0x2c7:  mov    $0x0,%eax
08160560 +0x2cc:  jmp    08160693 <+0x3ff>
08160565 +0x2d1:  movl   $0x8,(%esp)
0816056c +0x2d8:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08160571 +0x2dd:  mov    %eax,%ebx
08160573 +0x2df:  mov    %ebx,%eax
08160575 +0x2e1:  mov    %eax,(%esp)
08160578 +0x2e4:  call   081621e2 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x450>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x450
0816057d +0x2e9:  mov    %ebx,%eax
0816057f +0x2eb:  mov    %eax,-0xc(%ebp)
08160582 +0x2ee:  cmpl   $0x0,-0xc(%ebp)
08160586 +0x2f2:  je     081605b7 <+0x323>
08160588 +0x2f4:  mov    -0xc(%ebp),%eax
0816058b +0x2f7:  mov    %eax,(%esp)
0816058e +0x2fa:  call   08161e8e <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0xfc>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0xfc
08160593 +0x2ff:  mov    -0xc(%ebp),%edx
08160596 +0x302:  mov    %edx,0x8(%esp)
0816059a +0x306:  mov    %eax,0x4(%esp)
0816059e +0x30a:  mov    0x8(%ebp),%eax
081605a1 +0x30d:  mov    %eax,(%esp)
081605a4 +0x310:  call   081606fe <_ZN24TaiwanInternalDispatcher13addDispatcherEN18TaiwanInternalPack1TEP30TaiwanInterfaceInterDispatcher>  ; TaiwanInternalDispatcher::addDispatcher(TaiwanInternalPack::T, TaiwanInterfaceInterDispatcher*)
081605a9 +0x315:  xor    $0x1,%eax
081605ac +0x318:  test   %al,%al
081605ae +0x31a:  je     081605b7 <+0x323>
081605b0 +0x31c:  mov    $0x1,%eax
081605b5 +0x321:  jmp    081605bc <+0x328>
081605b7 +0x323:  mov    $0x0,%eax
081605bc +0x328:  test   %al,%al
081605be +0x32a:  je     081605ca <+0x336>
081605c0 +0x32c:  mov    $0x0,%eax
081605c5 +0x331:  jmp    08160693 <+0x3ff>
081605ca +0x336:  movl   $0x8,(%esp)
081605d1 +0x33d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
081605d6 +0x342:  mov    %eax,%ebx
081605d8 +0x344:  mov    %ebx,%eax
081605da +0x346:  mov    %eax,(%esp)
081605dd +0x349:  call   08162254 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x4c2>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x4c2
081605e2 +0x34e:  mov    %ebx,%eax
081605e4 +0x350:  mov    %eax,-0xc(%ebp)
081605e7 +0x353:  cmpl   $0x0,-0xc(%ebp)
081605eb +0x357:  je     0816061c <+0x388>
081605ed +0x359:  mov    -0xc(%ebp),%eax
081605f0 +0x35c:  mov    %eax,(%esp)
081605f3 +0x35f:  call   08161e8e <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0xfc>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0xfc
081605f8 +0x364:  mov    -0xc(%ebp),%edx
081605fb +0x367:  mov    %edx,0x8(%esp)
081605ff +0x36b:  mov    %eax,0x4(%esp)
08160603 +0x36f:  mov    0x8(%ebp),%eax
08160606 +0x372:  mov    %eax,(%esp)
08160609 +0x375:  call   081606fe <_ZN24TaiwanInternalDispatcher13addDispatcherEN18TaiwanInternalPack1TEP30TaiwanInterfaceInterDispatcher>  ; TaiwanInternalDispatcher::addDispatcher(TaiwanInternalPack::T, TaiwanInterfaceInterDispatcher*)
0816060e +0x37a:  xor    $0x1,%eax
08160611 +0x37d:  test   %al,%al
08160613 +0x37f:  je     0816061c <+0x388>
08160615 +0x381:  mov    $0x1,%eax
0816061a +0x386:  jmp    08160621 <+0x38d>
0816061c +0x388:  mov    $0x0,%eax
08160621 +0x38d:  test   %al,%al
08160623 +0x38f:  je     0816062c <+0x398>
08160625 +0x391:  mov    $0x0,%eax
0816062a +0x396:  jmp    08160693 <+0x3ff>
0816062c +0x398:  movl   $0x8,(%esp)
08160633 +0x39f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08160638 +0x3a4:  mov    %eax,%ebx
0816063a +0x3a6:  mov    %ebx,%eax
0816063c +0x3a8:  mov    %eax,(%esp)
0816063f +0x3ab:  call   081622c6 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x534>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x534
08160644 +0x3b0:  mov    %ebx,%eax
08160646 +0x3b2:  mov    %eax,-0xc(%ebp)
08160649 +0x3b5:  cmpl   $0x0,-0xc(%ebp)
0816064d +0x3b9:  je     0816067e <+0x3ea>
0816064f +0x3bb:  mov    -0xc(%ebp),%eax
08160652 +0x3be:  mov    %eax,(%esp)
08160655 +0x3c1:  call   08161e8e <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0xfc>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0xfc
0816065a +0x3c6:  mov    -0xc(%ebp),%edx
0816065d +0x3c9:  mov    %edx,0x8(%esp)
08160661 +0x3cd:  mov    %eax,0x4(%esp)
08160665 +0x3d1:  mov    0x8(%ebp),%eax
08160668 +0x3d4:  mov    %eax,(%esp)
0816066b +0x3d7:  call   081606fe <_ZN24TaiwanInternalDispatcher13addDispatcherEN18TaiwanInternalPack1TEP30TaiwanInterfaceInterDispatcher>  ; TaiwanInternalDispatcher::addDispatcher(TaiwanInternalPack::T, TaiwanInterfaceInterDispatcher*)
08160670 +0x3dc:  xor    $0x1,%eax
08160673 +0x3df:  test   %al,%al
08160675 +0x3e1:  je     0816067e <+0x3ea>
08160677 +0x3e3:  mov    $0x1,%eax
0816067c +0x3e8:  jmp    08160683 <+0x3ef>
0816067e +0x3ea:  mov    $0x0,%eax
08160683 +0x3ef:  test   %al,%al
08160685 +0x3f1:  je     0816068e <+0x3fa>
08160687 +0x3f3:  mov    $0x0,%eax
0816068c +0x3f8:  jmp    08160693 <+0x3ff>
0816068e +0x3fa:  mov    $0x1,%eax
08160693 +0x3ff:  add    $0x24,%esp
08160696 +0x402:  pop    %ebx
08160697 +0x403:  pop    %ebp
08160698 +0x404:  ret
08160699 +0x405:  nop
```

## 反编译 C

```c
// TaiwanInternalDispatcher::init @ 0x8160294

/* TaiwanInternalDispatcher::init() */

bool __thiscall TaiwanInternalDispatcher::init(TaiwanInternalDispatcher *this)

{
  bool bVar1;
  char cVar2;
  InterLoadServiceRestrictPolicy *this_00;
  undefined4 uVar3;
  InterLoadGeolocation *this_01;
  InterCheckStayTimeEvent *this_02;
  InterSelectCreateDnfEventInfo *this_03;
  InterSelectCreateDnfUserInfo *this_04;
  InterSelectMobileAuthReward *this_05;
  InterSelectPcroomDailyReward *this_06;
  InterUpdateP2pHolePunchingState *this_07;
  InterInsertGiveBoxEventReward *this_08;
  InterLoadHeroMissionEventData *this_09;
  
  this_00 = operator_new(8);
  InterLoadServiceRestrictPolicy::InterLoadServiceRestrictPolicy(this_00);
  if (this_00 == (InterLoadServiceRestrictPolicy *)0x0) {
LAB_081602f4:
    bVar1 = false;
  }
  else {
    uVar3 = TaiwanInterfaceInterDispatcher::getCode((TaiwanInterfaceInterDispatcher *)this_00);
    cVar2 = addDispatcher(this,uVar3,this_00);
    if (cVar2 == '\x01') goto LAB_081602f4;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_01 = operator_new(8);
  InterLoadGeolocation::InterLoadGeolocation(this_01);
  if (this_01 == (InterLoadGeolocation *)0x0) {
LAB_08160359:
    bVar1 = false;
  }
  else {
    uVar3 = TaiwanInterfaceInterDispatcher::getCode((TaiwanInterfaceInterDispatcher *)this_01);
    cVar2 = addDispatcher(this,uVar3,this_01);
    if (cVar2 == '\x01') goto LAB_08160359;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_02 = operator_new(8);
  InterCheckStayTimeEvent::InterCheckStayTimeEvent(this_02);
  if (this_02 == (InterCheckStayTimeEvent *)0x0) {
LAB_081603be:
    bVar1 = false;
  }
  else {
    uVar3 = TaiwanInterfaceInterDispatcher::getCode((TaiwanInterfaceInterDispatcher *)this_02);
    cVar2 = addDispatcher(this,uVar3,this_02);
    if (cVar2 == '\x01') goto LAB_081603be;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_03 = operator_new(8);
  InterSelectCreateDnfEventInfo::InterSelectCreateDnfEventInfo(this_03);
  if (this_03 == (InterSelectCreateDnfEventInfo *)0x0) {
LAB_08160423:
    bVar1 = false;
  }
  else {
    uVar3 = TaiwanInterfaceInterDispatcher::getCode((TaiwanInterfaceInterDispatcher *)this_03);
    cVar2 = addDispatcher(this,uVar3,this_03);
    if (cVar2 == '\x01') goto LAB_08160423;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_04 = operator_new(8);
  InterSelectCreateDnfUserInfo::InterSelectCreateDnfUserInfo(this_04);
  if (this_04 == (InterSelectCreateDnfUserInfo *)0x0) {
LAB_08160488:
    bVar1 = false;
  }
  else {
    uVar3 = TaiwanInterfaceInterDispatcher::getCode((TaiwanInterfaceInterDispatcher *)this_04);
    cVar2 = addDispatcher(this,uVar3,this_04);
    if (cVar2 == '\x01') goto LAB_08160488;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_05 = operator_new(8);
  InterSelectMobileAuthReward::InterSelectMobileAuthReward(this_05);
  if (this_05 == (InterSelectMobileAuthReward *)0x0) {
LAB_081604ed:
    bVar1 = false;
  }
  else {
    uVar3 = TaiwanInterfaceInterDispatcher::getCode((TaiwanInterfaceInterDispatcher *)this_05);
    cVar2 = addDispatcher(this,uVar3,this_05);
    if (cVar2 == '\x01') goto LAB_081604ed;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_06 = operator_new(8);
  InterSelectPcroomDailyReward::InterSelectPcroomDailyReward(this_06);
  if (this_06 == (InterSelectPcroomDailyReward *)0x0) {
LAB_08160552:
    bVar1 = false;
  }
  else {
    uVar3 = TaiwanInterfaceInterDispatcher::getCode((TaiwanInterfaceInterDispatcher *)this_06);
    cVar2 = addDispatcher(this,uVar3,this_06);
    if (cVar2 == '\x01') goto LAB_08160552;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_07 = operator_new(8);
  InterUpdateP2pHolePunchingState::InterUpdateP2pHolePunchingState(this_07);
  if (this_07 == (InterUpdateP2pHolePunchingState *)0x0) {
LAB_081605b7:
    bVar1 = false;
  }
  else {
    uVar3 = TaiwanInterfaceInterDispatcher::getCode((TaiwanInterfaceInterDispatcher *)this_07);
    cVar2 = addDispatcher(this,uVar3,this_07);
    if (cVar2 == '\x01') goto LAB_081605b7;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_08 = operator_new(8);
  InterInsertGiveBoxEventReward::InterInsertGiveBoxEventReward(this_08);
  if (this_08 == (InterInsertGiveBoxEventReward *)0x0) {
LAB_0816061c:
    bVar1 = false;
  }
  else {
    uVar3 = TaiwanInterfaceInterDispatcher::getCode((TaiwanInterfaceInterDispatcher *)this_08);
    cVar2 = addDispatcher(this,uVar3,this_08);
    if (cVar2 == '\x01') goto LAB_0816061c;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_09 = operator_new(8);
  InterLoadHeroMissionEventData::InterLoadHeroMissionEventData(this_09);
  if (this_09 != (InterLoadHeroMissionEventData *)0x0) {
    uVar3 = TaiwanInterfaceInterDispatcher::getCode((TaiwanInterfaceInterDispatcher *)this_09);
    cVar2 = addDispatcher(this,uVar3,this_09);
    if (cVar2 != '\x01') {
      bVar1 = true;
      goto LAB_08160683;
    }
  }
  bVar1 = false;
LAB_08160683:
  return !bVar1;
}
```
