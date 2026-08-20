# CheckContinueSchedule

`_ZN21CDailyScheduleManager21CheckContinueScheduleERK14_DailySchedulePPS0_S4_`

`CDailyScheduleManager::CheckContinueSchedule(_DailySchedule const&, _DailySchedule**, _DailySchedule**)`

| 类 | 地址 |
|---|---|
| `CDailyScheduleManager` | `0x081261a8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081261a8  _ZN21CDailyScheduleManager21CheckContinueScheduleERK14_DailySchedulePPS0_S4_
#           CDailyScheduleManager::CheckContinueSchedule(_DailySchedule const&, _DailySchedule**, _DailySchedule**)
# range [0x081261a8, 0x081266e1]
081261a8 +0x000:  push   %ebp
081261a9 +0x001:  mov    %esp,%ebp
081261ab +0x003:  push   %ebx
081261ac +0x004:  sub    $0x124,%esp
081261b2 +0x00a:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
081261b9 +0x011:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
081261be +0x016:  mov    %eax,-0x28(%ebp)
081261c1 +0x019:  lea    -0x5c(%ebp),%eax
081261c4 +0x01c:  mov    %eax,0x4(%esp)
081261c8 +0x020:  lea    -0x28(%ebp),%eax
081261cb +0x023:  mov    %eax,(%esp)
081261ce +0x026:  call   0807e360 <_init+0xc58>
081261d3 +0x02b:  mov    -0x44(%ebp),%eax
081261d6 +0x02e:  mov    %eax,-0x24(%ebp)
081261d9 +0x031:  movl   $0x2c,0x8(%esp)
081261e1 +0x039:  lea    -0x5c(%ebp),%eax
081261e4 +0x03c:  mov    %eax,0x4(%esp)
081261e8 +0x040:  lea    -0x88(%ebp),%eax
081261ee +0x046:  mov    %eax,(%esp)
081261f1 +0x049:  call   0807d8a0 <_init+0x198>
081261f6 +0x04e:  movl   $0x2c,0x8(%esp)
081261fe +0x056:  lea    -0x5c(%ebp),%eax
08126201 +0x059:  mov    %eax,0x4(%esp)
08126205 +0x05d:  lea    -0xb4(%ebp),%eax
0812620b +0x063:  mov    %eax,(%esp)
0812620e +0x066:  call   0807d8a0 <_init+0x198>
08126213 +0x06b:  mov    0xc(%ebp),%eax
08126216 +0x06e:  movzbl 0x18(%eax),%eax
0812621a +0x072:  movzbl %al,%eax
0812621d +0x075:  mov    %eax,-0x80(%ebp)
08126220 +0x078:  mov    0xc(%ebp),%eax
08126223 +0x07b:  movzbl 0x19(%eax),%eax
08126227 +0x07f:  movzbl %al,%eax
0812622a +0x082:  mov    %eax,-0x84(%ebp)
08126230 +0x088:  mov    0xc(%ebp),%eax
08126233 +0x08b:  movzbl 0x1a(%eax),%eax
08126237 +0x08f:  movzbl %al,%eax
0812623a +0x092:  mov    %eax,-0x88(%ebp)
08126240 +0x098:  lea    -0x88(%ebp),%eax
08126246 +0x09e:  mov    %eax,(%esp)
08126249 +0x0a1:  call   0807e820 <_init+0x1118>
0812624e +0x0a6:  mov    %eax,-0x2c(%ebp)
08126251 +0x0a9:  mov    -0x2c(%ebp),%eax
08126254 +0x0ac:  sub    $0x1,%eax
08126257 +0x0af:  mov    %eax,-0x2c(%ebp)
0812625a +0x0b2:  lea    -0x88(%ebp),%eax
08126260 +0x0b8:  mov    %eax,0x4(%esp)
08126264 +0x0bc:  lea    -0x2c(%ebp),%eax
08126267 +0x0bf:  mov    %eax,(%esp)
0812626a +0x0c2:  call   0807e360 <_init+0xc58>
0812626f +0x0c7:  mov    0xc(%ebp),%eax
08126272 +0x0ca:  movzbl 0x1b(%eax),%eax
08126276 +0x0ce:  movzbl %al,%eax
08126279 +0x0d1:  mov    %eax,-0xac(%ebp)
0812627f +0x0d7:  mov    0xc(%ebp),%eax
08126282 +0x0da:  movzbl 0x1c(%eax),%eax
08126286 +0x0de:  movzbl %al,%eax
08126289 +0x0e1:  mov    %eax,-0xb0(%ebp)
0812628f +0x0e7:  mov    0xc(%ebp),%eax
08126292 +0x0ea:  movzbl 0x1d(%eax),%eax
08126296 +0x0ee:  movzbl %al,%eax
08126299 +0x0f1:  mov    %eax,-0xb4(%ebp)
0812629f +0x0f7:  lea    -0xb4(%ebp),%eax
081262a5 +0x0fd:  mov    %eax,(%esp)
081262a8 +0x100:  call   0807e820 <_init+0x1118>
081262ad +0x105:  mov    %eax,-0x30(%ebp)
081262b0 +0x108:  mov    -0x30(%ebp),%eax
081262b3 +0x10b:  add    $0x1,%eax
081262b6 +0x10e:  mov    %eax,-0x30(%ebp)
081262b9 +0x111:  lea    -0xb4(%ebp),%eax
081262bf +0x117:  mov    %eax,0x4(%esp)
081262c3 +0x11b:  lea    -0x30(%ebp),%eax
081262c6 +0x11e:  mov    %eax,(%esp)
081262c9 +0x121:  call   0807e360 <_init+0xc58>
081262ce +0x126:  mov    0x8(%ebp),%eax
081262d1 +0x129:  add    $0xd8,%eax
081262d6 +0x12e:  mov    %eax,(%esp)
081262d9 +0x131:  call   08127306 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x8f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x8f
081262de +0x136:  mov    %eax,-0x20(%ebp)
081262e1 +0x139:  movl   $0x0,-0x1c(%ebp)
081262e8 +0x140:  jmp    081266a9 <+0x501>
081262ed +0x145:  mov    0xc(%ebp),%eax
081262f0 +0x148:  mov    0x8(%eax),%ebx
081262f3 +0x14b:  mov    0x8(%ebp),%eax
081262f6 +0x14e:  lea    0xd8(%eax),%edx
081262fc +0x154:  mov    -0x1c(%ebp),%eax
081262ff +0x157:  mov    %eax,0x4(%esp)
08126303 +0x15b:  mov    %edx,(%esp)
08126306 +0x15e:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
0812630b +0x163:  mov    0x8(%eax),%eax
0812630e +0x166:  cmp    %eax,%ebx
08126310 +0x168:  jne    08126339 <+0x191>
08126312 +0x16a:  mov    0xc(%ebp),%eax
08126315 +0x16d:  mov    0x4(%eax),%eax
08126318 +0x170:  mov    %eax,%ebx
0812631a +0x172:  mov    0x8(%ebp),%eax
0812631d +0x175:  lea    0xd8(%eax),%edx
08126323 +0x17b:  mov    -0x1c(%ebp),%eax
08126326 +0x17e:  mov    %eax,0x4(%esp)
0812632a +0x182:  mov    %edx,(%esp)
0812632d +0x185:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
08126332 +0x18a:  mov    0x4(%eax),%eax
08126335 +0x18d:  cmp    %eax,%ebx
08126337 +0x18f:  je     08126340 <+0x198>
08126339 +0x191:  mov    $0x1,%eax
0812633e +0x196:  jmp    08126345 <+0x19d>
08126340 +0x198:  mov    $0x0,%eax
08126345 +0x19d:  test   %al,%al
08126347 +0x19f:  jne    081266a1 <+0x4f9>
0812634d +0x1a5:  mov    0x8(%ebp),%eax
08126350 +0x1a8:  lea    0xd8(%eax),%edx
08126356 +0x1ae:  mov    -0x1c(%ebp),%eax
08126359 +0x1b1:  mov    %eax,0x4(%esp)
0812635d +0x1b5:  mov    %edx,(%esp)
08126360 +0x1b8:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
08126365 +0x1bd:  cmp    0xc(%ebp),%eax
08126368 +0x1c0:  sete   %al
0812636b +0x1c3:  test   %al,%al
0812636d +0x1c5:  jne    081266a4 <+0x4fc>
08126373 +0x1cb:  movb   $0x0,-0x16(%ebp)
08126377 +0x1cf:  movb   $0x0,-0x15(%ebp)
0812637b +0x1d3:  mov    0xc(%ebp),%eax
0812637e +0x1d6:  mov    0x20(%eax),%eax
08126381 +0x1d9:  test   %eax,%eax
08126383 +0x1db:  jne    08126421 <+0x279>
08126389 +0x1e1:  mov    -0xac(%ebp),%ebx
0812638f +0x1e7:  mov    0x8(%ebp),%eax
08126392 +0x1ea:  lea    0xd8(%eax),%edx
08126398 +0x1f0:  mov    -0x1c(%ebp),%eax
0812639b +0x1f3:  mov    %eax,0x4(%esp)
0812639f +0x1f7:  mov    %edx,(%esp)
081263a2 +0x1fa:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
081263a7 +0x1ff:  movzbl 0x18(%eax),%eax
081263ab +0x203:  movzbl %al,%eax
081263ae +0x206:  cmp    %eax,%ebx
081263b0 +0x208:  jne    0812640b <+0x263>
081263b2 +0x20a:  mov    -0xb0(%ebp),%ebx
081263b8 +0x210:  mov    0x8(%ebp),%eax
081263bb +0x213:  lea    0xd8(%eax),%edx
081263c1 +0x219:  mov    -0x1c(%ebp),%eax
081263c4 +0x21c:  mov    %eax,0x4(%esp)
081263c8 +0x220:  mov    %edx,(%esp)
081263cb +0x223:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
081263d0 +0x228:  movzbl 0x19(%eax),%eax
081263d4 +0x22c:  movzbl %al,%eax
081263d7 +0x22f:  cmp    %eax,%ebx
081263d9 +0x231:  jne    0812640b <+0x263>
081263db +0x233:  mov    -0xb4(%ebp),%ebx
081263e1 +0x239:  mov    0x8(%ebp),%eax
081263e4 +0x23c:  lea    0xd8(%eax),%edx
081263ea +0x242:  mov    -0x1c(%ebp),%eax
081263ed +0x245:  mov    %eax,0x4(%esp)
081263f1 +0x249:  mov    %edx,(%esp)
081263f4 +0x24c:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
081263f9 +0x251:  movzbl 0x1a(%eax),%eax
081263fd +0x255:  movzbl %al,%eax
08126400 +0x258:  cmp    %eax,%ebx
08126402 +0x25a:  jne    0812640b <+0x263>
08126404 +0x25c:  mov    $0x1,%eax
08126409 +0x261:  jmp    08126410 <+0x268>
0812640b +0x263:  mov    $0x0,%eax
08126410 +0x268:  test   %al,%al
08126412 +0x26a:  je     081264bc <+0x314>
08126418 +0x270:  movb   $0x1,-0x15(%ebp)
0812641c +0x274:  jmp    081264bc <+0x314>
08126421 +0x279:  mov    0xc(%ebp),%eax
08126424 +0x27c:  mov    0x20(%eax),%eax
08126427 +0x27f:  cmp    $0x1,%eax
0812642a +0x282:  jne    081264bc <+0x314>
08126430 +0x288:  mov    -0x80(%ebp),%ebx
08126433 +0x28b:  mov    0x8(%ebp),%eax
08126436 +0x28e:  lea    0xd8(%eax),%edx
0812643c +0x294:  mov    -0x1c(%ebp),%eax
0812643f +0x297:  mov    %eax,0x4(%esp)
08126443 +0x29b:  mov    %edx,(%esp)
08126446 +0x29e:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
0812644b +0x2a3:  movzbl 0x1b(%eax),%eax
0812644f +0x2a7:  movzbl %al,%eax
08126452 +0x2aa:  cmp    %eax,%ebx
08126454 +0x2ac:  jne    081264af <+0x307>
08126456 +0x2ae:  mov    -0x84(%ebp),%ebx
0812645c +0x2b4:  mov    0x8(%ebp),%eax
0812645f +0x2b7:  lea    0xd8(%eax),%edx
08126465 +0x2bd:  mov    -0x1c(%ebp),%eax
08126468 +0x2c0:  mov    %eax,0x4(%esp)
0812646c +0x2c4:  mov    %edx,(%esp)
0812646f +0x2c7:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
08126474 +0x2cc:  movzbl 0x1c(%eax),%eax
08126478 +0x2d0:  movzbl %al,%eax
0812647b +0x2d3:  cmp    %eax,%ebx
0812647d +0x2d5:  jne    081264af <+0x307>
0812647f +0x2d7:  mov    -0x88(%ebp),%ebx
08126485 +0x2dd:  mov    0x8(%ebp),%eax
08126488 +0x2e0:  lea    0xd8(%eax),%edx
0812648e +0x2e6:  mov    -0x1c(%ebp),%eax
08126491 +0x2e9:  mov    %eax,0x4(%esp)
08126495 +0x2ed:  mov    %edx,(%esp)
08126498 +0x2f0:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
0812649d +0x2f5:  movzbl 0x1d(%eax),%eax
081264a1 +0x2f9:  movzbl %al,%eax
081264a4 +0x2fc:  cmp    %eax,%ebx
081264a6 +0x2fe:  jne    081264af <+0x307>
081264a8 +0x300:  mov    $0x1,%eax
081264ad +0x305:  jmp    081264b4 <+0x30c>
081264af +0x307:  mov    $0x0,%eax
081264b4 +0x30c:  test   %al,%al
081264b6 +0x30e:  je     081264bc <+0x314>
081264b8 +0x310:  movb   $0x1,-0x16(%ebp)
081264bc +0x314:  cmpb   $0x0,-0x15(%ebp)
081264c0 +0x318:  je     0812667c <+0x4d4>
081264c6 +0x31e:  lea    -0xe0(%ebp),%eax
081264cc +0x324:  mov    %eax,0x4(%esp)
081264d0 +0x328:  lea    -0x28(%ebp),%eax
081264d3 +0x32b:  mov    %eax,(%esp)
081264d6 +0x32e:  call   0807e360 <_init+0xc58>
081264db +0x333:  lea    -0x10c(%ebp),%eax
081264e1 +0x339:  mov    %eax,0x4(%esp)
081264e5 +0x33d:  lea    -0x28(%ebp),%eax
081264e8 +0x340:  mov    %eax,(%esp)
081264eb +0x343:  call   0807e360 <_init+0xc58>
081264f0 +0x348:  mov    -0xc8(%ebp),%eax
081264f6 +0x34e:  mov    %eax,-0x14(%ebp)
081264f9 +0x351:  mov    0x8(%ebp),%eax
081264fc +0x354:  lea    0xd8(%eax),%edx
08126502 +0x35a:  mov    -0x1c(%ebp),%eax
08126505 +0x35d:  mov    %eax,0x4(%esp)
08126509 +0x361:  mov    %edx,(%esp)
0812650c +0x364:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
08126511 +0x369:  mov    0x14(%eax),%eax
08126514 +0x36c:  cmp    -0x14(%ebp),%eax
08126517 +0x36f:  je     08126539 <+0x391>
08126519 +0x371:  mov    0x8(%ebp),%eax
0812651c +0x374:  lea    0xd8(%eax),%edx
08126522 +0x37a:  mov    -0x1c(%ebp),%eax
08126525 +0x37d:  mov    %eax,0x4(%esp)
08126529 +0x381:  mov    %edx,(%esp)
0812652c +0x384:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
08126531 +0x389:  mov    0x14(%eax),%eax
08126534 +0x38c:  cmp    $0x7,%eax
08126537 +0x38f:  jne    08126540 <+0x398>
08126539 +0x391:  mov    $0x1,%eax
0812653e +0x396:  jmp    08126545 <+0x39d>
08126540 +0x398:  mov    $0x0,%eax
08126545 +0x39d:  test   %al,%al
08126547 +0x39f:  je     081266a5 <+0x4fd>
0812654d +0x3a5:  mov    0x8(%ebp),%eax
08126550 +0x3a8:  lea    0xd8(%eax),%edx
08126556 +0x3ae:  mov    -0x1c(%ebp),%eax
08126559 +0x3b1:  mov    %eax,0x4(%esp)
0812655d +0x3b5:  mov    %edx,(%esp)
08126560 +0x3b8:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
08126565 +0x3bd:  movzbl 0x18(%eax),%eax
08126569 +0x3c1:  movzbl %al,%eax
0812656c +0x3c4:  mov    %eax,-0x104(%ebp)
08126572 +0x3ca:  mov    0x8(%ebp),%eax
08126575 +0x3cd:  lea    0xd8(%eax),%edx
0812657b +0x3d3:  mov    -0x1c(%ebp),%eax
0812657e +0x3d6:  mov    %eax,0x4(%esp)
08126582 +0x3da:  mov    %edx,(%esp)
08126585 +0x3dd:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
0812658a +0x3e2:  movzbl 0x19(%eax),%eax
0812658e +0x3e6:  movzbl %al,%eax
08126591 +0x3e9:  mov    %eax,-0x108(%ebp)
08126597 +0x3ef:  mov    0x8(%ebp),%eax
0812659a +0x3f2:  lea    0xd8(%eax),%edx
081265a0 +0x3f8:  mov    -0x1c(%ebp),%eax
081265a3 +0x3fb:  mov    %eax,0x4(%esp)
081265a7 +0x3ff:  mov    %edx,(%esp)
081265aa +0x402:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
081265af +0x407:  movzbl 0x1a(%eax),%eax
081265b3 +0x40b:  movzbl %al,%eax
081265b6 +0x40e:  mov    %eax,-0x10c(%ebp)
081265bc +0x414:  lea    -0x10c(%ebp),%eax
081265c2 +0x41a:  mov    %eax,(%esp)
081265c5 +0x41d:  call   0807e820 <_init+0x1118>
081265ca +0x422:  mov    %eax,-0x10(%ebp)
081265cd +0x425:  mov    0x8(%ebp),%eax
081265d0 +0x428:  lea    0xd8(%eax),%edx
081265d6 +0x42e:  mov    -0x1c(%ebp),%eax
081265d9 +0x431:  mov    %eax,0x4(%esp)
081265dd +0x435:  mov    %edx,(%esp)
081265e0 +0x438:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
081265e5 +0x43d:  movzbl 0x1b(%eax),%eax
081265e9 +0x441:  movzbl %al,%eax
081265ec +0x444:  mov    %eax,-0x104(%ebp)
081265f2 +0x44a:  mov    0x8(%ebp),%eax
081265f5 +0x44d:  lea    0xd8(%eax),%edx
081265fb +0x453:  mov    -0x1c(%ebp),%eax
081265fe +0x456:  mov    %eax,0x4(%esp)
08126602 +0x45a:  mov    %edx,(%esp)
08126605 +0x45d:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
0812660a +0x462:  movzbl 0x1c(%eax),%eax
0812660e +0x466:  movzbl %al,%eax
08126611 +0x469:  mov    %eax,-0x108(%ebp)
08126617 +0x46f:  mov    0x8(%ebp),%eax
0812661a +0x472:  lea    0xd8(%eax),%edx
08126620 +0x478:  mov    -0x1c(%ebp),%eax
08126623 +0x47b:  mov    %eax,0x4(%esp)
08126627 +0x47f:  mov    %edx,(%esp)
0812662a +0x482:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
0812662f +0x487:  movzbl 0x1d(%eax),%eax
08126633 +0x48b:  movzbl %al,%eax
08126636 +0x48e:  mov    %eax,-0x10c(%ebp)
0812663c +0x494:  lea    -0x10c(%ebp),%eax
08126642 +0x49a:  mov    %eax,(%esp)
08126645 +0x49d:  call   0807e820 <_init+0x1118>
0812664a +0x4a2:  mov    %eax,-0xc(%ebp)
0812664d +0x4a5:  mov    -0x28(%ebp),%eax
08126650 +0x4a8:  cmp    -0x10(%ebp),%eax
08126653 +0x4ab:  jl     081266a5 <+0x4fd>
08126655 +0x4ad:  mov    -0x28(%ebp),%eax
08126658 +0x4b0:  cmp    -0xc(%ebp),%eax
0812665b +0x4b3:  jg     081266a5 <+0x4fd>
0812665d +0x4b5:  mov    0x8(%ebp),%eax
08126660 +0x4b8:  lea    0xd8(%eax),%edx
08126666 +0x4be:  mov    -0x1c(%ebp),%eax
08126669 +0x4c1:  mov    %eax,0x4(%esp)
0812666d +0x4c5:  mov    %edx,(%esp)
08126670 +0x4c8:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
08126675 +0x4cd:  mov    0x14(%ebp),%edx
08126678 +0x4d0:  mov    %eax,(%edx)
0812667a +0x4d2:  jmp    081266a5 <+0x4fd>
0812667c +0x4d4:  cmpb   $0x0,-0x16(%ebp)
08126680 +0x4d8:  je     081266a5 <+0x4fd>
08126682 +0x4da:  mov    0x8(%ebp),%eax
08126685 +0x4dd:  lea    0xd8(%eax),%edx
0812668b +0x4e3:  mov    -0x1c(%ebp),%eax
0812668e +0x4e6:  mov    %eax,0x4(%esp)
08126692 +0x4ea:  mov    %edx,(%esp)
08126695 +0x4ed:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
0812669a +0x4f2:  mov    0x10(%ebp),%edx
0812669d +0x4f5:  mov    %eax,(%edx)
0812669f +0x4f7:  jmp    081266a5 <+0x4fd>
081266a1 +0x4f9:  nop
081266a2 +0x4fa:  jmp    081266a5 <+0x4fd>
081266a4 +0x4fc:  nop
081266a5 +0x4fd:  addl   $0x1,-0x1c(%ebp)
081266a9 +0x501:  mov    -0x1c(%ebp),%eax
081266ac +0x504:  cmp    -0x20(%ebp),%eax
081266af +0x507:  setb   %al
081266b2 +0x50a:  test   %al,%al
081266b4 +0x50c:  jne    081262ed <+0x145>
081266ba +0x512:  mov    0x14(%ebp),%eax
081266bd +0x515:  mov    (%eax),%eax
081266bf +0x517:  test   %eax,%eax
081266c1 +0x519:  jne    081266cc <+0x524>
081266c3 +0x51b:  mov    0x10(%ebp),%eax
081266c6 +0x51e:  mov    (%eax),%eax
081266c8 +0x520:  test   %eax,%eax
081266ca +0x522:  je     081266d3 <+0x52b>
081266cc +0x524:  mov    $0x1,%eax
081266d1 +0x529:  jmp    081266d8 <+0x530>
081266d3 +0x52b:  mov    $0x0,%eax
081266d8 +0x530:  add    $0x124,%esp
081266de +0x536:  pop    %ebx
081266df +0x537:  pop    %ebp
081266e0 +0x538:  ret
081266e1 +0x539:  nop
```

## 反编译 C

```c
// CDailyScheduleManager::CheckContinueSchedule @ 0x81261a8

/* CDailyScheduleManager::CheckContinueSchedule(_DailySchedule const&, _DailySchedule**,
   _DailySchedule**) */

undefined4 __thiscall
CDailyScheduleManager::CheckContinueSchedule
          (CDailyScheduleManager *this,_DailySchedule *param_1,_DailySchedule **param_2,
          _DailySchedule **param_3)

{
  bool bVar1;
  time_t tVar2;
  int iVar3;
  _DailySchedule *p_Var4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  tm local_110;
  tm local_e4;
  tm local_b8;
  tm local_8c;
  tm local_60;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  char local_1a;
  char local_19;
  int local_18;
  time_t local_14;
  time_t local_10;
  
  local_2c = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  localtime_r(&local_2c,&local_60);
  local_28 = local_60.tm_wday;
  memcpy(&local_8c,&local_60,0x2c);
  memcpy(&local_b8,&local_60,0x2c);
  local_8c.tm_hour = (int)(byte)param_1[0x18];
  local_8c.tm_min = (int)(byte)param_1[0x19];
  local_8c.tm_sec = (int)(byte)param_1[0x1a];
  tVar2 = mktime(&local_8c);
  local_30 = tVar2 + -1;
  localtime_r(&local_30,&local_8c);
  local_b8.tm_hour = (int)(byte)param_1[0x1b];
  local_b8.tm_min = (int)(byte)param_1[0x1c];
  local_b8.tm_sec = (int)(byte)param_1[0x1d];
  tVar2 = mktime(&local_b8);
  local_34 = tVar2 + 1;
  localtime_r(&local_34,&local_b8);
  local_24 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::size
                       ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8));
  for (local_20 = 0; local_20 < local_24; local_20 = local_20 + 1) {
    iVar6 = *(int *)(param_1 + 8);
    iVar3 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                      ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                       local_20);
    if ((iVar6 == *(int *)(iVar3 + 8)) &&
       (iVar6 = *(int *)(param_1 + 4),
       iVar3 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                         ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                          local_20), iVar6 == *(int *)(iVar3 + 4))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((!bVar1) &&
       (p_Var4 = (_DailySchedule *)
                 std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                           ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                            local_20), iVar3 = local_8c.tm_hour, iVar6 = local_b8.tm_hour,
       p_Var4 != param_1)) {
      local_1a = '\0';
      local_19 = '\0';
      if (*(int *)(param_1 + 0x20) == 0) {
        iVar5 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                          ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                           local_20);
        iVar3 = local_b8.tm_min;
        if (((iVar6 == (uint)*(byte *)(iVar5 + 0x18)) &&
            (iVar5 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                               ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)
                                (this + 0xd8),local_20), iVar6 = local_b8.tm_sec,
            iVar3 == (uint)*(byte *)(iVar5 + 0x19))) &&
           (iVar3 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                              ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)
                               (this + 0xd8),local_20), iVar6 == (uint)*(byte *)(iVar3 + 0x1a))) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          local_19 = '\x01';
        }
      }
      else if (*(int *)(param_1 + 0x20) == 1) {
        iVar5 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                          ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                           local_20);
        iVar6 = local_8c.tm_min;
        if (((iVar3 == (uint)*(byte *)(iVar5 + 0x1b)) &&
            (iVar5 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                               ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)
                                (this + 0xd8),local_20), iVar3 = local_8c.tm_sec,
            iVar6 == (uint)*(byte *)(iVar5 + 0x1c))) &&
           (iVar6 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                              ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)
                               (this + 0xd8),local_20), iVar3 == (uint)*(byte *)(iVar6 + 0x1d))) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          local_1a = '\x01';
        }
      }
      if (local_19 == '\0') {
        if (local_1a != '\0') {
          p_Var4 = (_DailySchedule *)
                   std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                             ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8)
                              ,local_20);
          *param_2 = p_Var4;
        }
      }
      else {
        localtime_r(&local_2c,&local_e4);
        localtime_r(&local_2c,&local_110);
        local_18 = local_e4.tm_wday;
        iVar6 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                          ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                           local_20);
        if ((*(int *)(iVar6 + 0x14) == local_18) ||
           (iVar6 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                              ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)
                               (this + 0xd8),local_20), *(int *)(iVar6 + 0x14) == 7)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          iVar6 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                            ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                             local_20);
          local_110.tm_hour = (int)*(byte *)(iVar6 + 0x18);
          iVar6 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                            ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                             local_20);
          local_110.tm_min = (int)*(byte *)(iVar6 + 0x19);
          iVar6 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                            ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                             local_20);
          local_110.tm_sec = (int)*(byte *)(iVar6 + 0x1a);
          local_14 = mktime(&local_110);
          iVar6 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                            ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                             local_20);
          local_110.tm_hour = (int)*(byte *)(iVar6 + 0x1b);
          iVar6 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                            ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                             local_20);
          local_110.tm_min = (int)*(byte *)(iVar6 + 0x1c);
          iVar6 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                            ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                             local_20);
          local_110.tm_sec = (int)*(byte *)(iVar6 + 0x1d);
          local_10 = mktime(&local_110);
          if ((local_14 <= local_2c) && (local_2c <= local_10)) {
            p_Var4 = (_DailySchedule *)
                     std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                               ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)
                                (this + 0xd8),local_20);
            *param_3 = p_Var4;
          }
        }
      }
    }
  }
  if ((*param_3 == (_DailySchedule *)0x0) && (*param_2 == (_DailySchedule *)0x0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  return uVar7;
}
```
