# Create

`_GLOBAL__I__ZN15message_counter13CTimeInterval6CreateEv`

`global constructors keyed to message_counter::CTimeInterval::Create()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to message_counter::CTimeInterval` | `0x0857015f` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0857015f  _GLOBAL__I__ZN15message_counter13CTimeInterval6CreateEv
#           global constructors keyed to message_counter::CTimeInterval::Create()
# range [0x0857015f, 0x08570dbb]
0857015f +0x000:  push   %ebp
08570160 +0x001:  mov    %esp,%ebp
08570162 +0x003:  sub    $0x18,%esp
08570165 +0x006:  movl   $0xffff,0x4(%esp)
0857016d +0x00e:  movl   $0x1,(%esp)
08570174 +0x015:  call   0857011f <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08570179 +0x01a:  leave
0857017a +0x01b:  ret
0857017b +0x01c:  nop
0857017c +0x01d:  push   %ebp
0857017d +0x01e:  mov    %esp,%ebp
0857017f +0x020:  pop    %ebp
08570180 +0x021:  ret
08570181 +0x022:  nop
08570182 +0x023:  push   %ebp
08570183 +0x024:  mov    %esp,%ebp
08570185 +0x026:  mov    $0x0,%eax
0857018a +0x02b:  mov    $0x0,%edx
0857018f +0x030:  pop    %ebp
08570190 +0x031:  ret
08570191 +0x032:  nop
08570192 +0x033:  push   %ebp
08570193 +0x034:  mov    %esp,%ebp
08570195 +0x036:  mov    0x8(%ebp),%eax
08570198 +0x039:  mov    (%eax),%edx
0857019a +0x03b:  mov    0xc(%ebp),%eax
0857019d +0x03e:  mov    (%eax),%eax
0857019f +0x040:  cmp    %eax,%edx
085701a1 +0x042:  jge    085701aa <+0x4b>
085701a3 +0x044:  mov    $0x1,%eax
085701a8 +0x049:  jmp    08570202 <+0xa3>
085701aa +0x04b:  mov    0x8(%ebp),%eax
085701ad +0x04e:  mov    (%eax),%edx
085701af +0x050:  mov    0xc(%ebp),%eax
085701b2 +0x053:  mov    (%eax),%eax
085701b4 +0x055:  cmp    %eax,%edx
085701b6 +0x057:  jne    085701fd <+0x9e>
085701b8 +0x059:  mov    0x8(%ebp),%eax
085701bb +0x05c:  movzbl 0x4(%eax),%edx
085701bf +0x060:  mov    0xc(%ebp),%eax
085701c2 +0x063:  movzbl 0x4(%eax),%eax
085701c6 +0x067:  cmp    %al,%dl
085701c8 +0x069:  jae    085701d1 <+0x72>
085701ca +0x06b:  mov    $0x1,%eax
085701cf +0x070:  jmp    08570202 <+0xa3>
085701d1 +0x072:  mov    0x8(%ebp),%eax
085701d4 +0x075:  movzbl 0x4(%eax),%edx
085701d8 +0x079:  mov    0xc(%ebp),%eax
085701db +0x07c:  movzbl 0x4(%eax),%eax
085701df +0x080:  cmp    %al,%dl
085701e1 +0x082:  jne    085701fd <+0x9e>
085701e3 +0x084:  mov    0x8(%ebp),%eax
085701e6 +0x087:  movzwl 0x6(%eax),%edx
085701ea +0x08b:  mov    0xc(%ebp),%eax
085701ed +0x08e:  movzwl 0x6(%eax),%eax
085701f1 +0x092:  cmp    %ax,%dx
085701f4 +0x095:  jae    085701fd <+0x9e>
085701f6 +0x097:  mov    $0x1,%eax
085701fb +0x09c:  jmp    08570202 <+0xa3>
085701fd +0x09e:  mov    $0x0,%eax
08570202 +0x0a3:  pop    %ebp
08570203 +0x0a4:  ret
08570204 +0x0a5:  push   %ebp
08570205 +0x0a6:  mov    %esp,%ebp
08570207 +0x0a8:  sub    $0x8,%esp
0857020a +0x0ab:  mov    0x10(%ebp),%edx
0857020d +0x0ae:  mov    0x14(%ebp),%eax
08570210 +0x0b1:  mov    %dl,-0x4(%ebp)
08570213 +0x0b4:  mov    %ax,-0x8(%ebp)
08570217 +0x0b8:  mov    0x8(%ebp),%eax
0857021a +0x0bb:  mov    0xc(%ebp),%edx
0857021d +0x0be:  mov    %edx,(%eax)
0857021f +0x0c0:  mov    0x8(%ebp),%eax
08570222 +0x0c3:  movzbl -0x4(%ebp),%edx
08570226 +0x0c7:  mov    %dl,0x4(%eax)
08570229 +0x0ca:  mov    0x8(%ebp),%eax
0857022c +0x0cd:  movzwl -0x8(%ebp),%edx
08570230 +0x0d1:  mov    %dx,0x6(%eax)
08570234 +0x0d5:  leave
08570235 +0x0d6:  ret
08570236 +0x0d7:  push   %ebp
08570237 +0x0d8:  mov    %esp,%ebp
08570239 +0x0da:  sub    $0x18,%esp
0857023c +0x0dd:  mov    0x8(%ebp),%eax
0857023f +0x0e0:  add    $0x4,%eax
08570242 +0x0e3:  movl   $0x0,0x4(%esp)
0857024a +0x0eb:  mov    %eax,(%esp)
0857024d +0x0ee:  call   0807e2f0 <_init+0xbe8>
08570252 +0x0f3:  leave
08570253 +0x0f4:  ret
08570254 +0x0f5:  push   %ebp
08570255 +0x0f6:  mov    %esp,%ebp
08570257 +0x0f8:  sub    $0x38,%esp
0857025a +0x0fb:  movl   $0x0,0x4(%esp)
08570262 +0x103:  lea    -0x10(%ebp),%eax
08570265 +0x106:  mov    %eax,(%esp)
08570268 +0x109:  call   0807e2f0 <_init+0xbe8>
0857026d +0x10e:  mov    -0x10(%ebp),%edx
08570270 +0x111:  mov    0x8(%ebp),%eax
08570273 +0x114:  mov    0x4(%eax),%eax
08570276 +0x117:  mov    %edx,%ecx
08570278 +0x119:  sub    %eax,%ecx
0857027a +0x11b:  mov    %ecx,%eax
0857027c +0x11d:  imul   $0x3e8,%eax,%eax
08570282 +0x123:  mov    %eax,-0x1c(%ebp)
08570285 +0x126:  fildl  -0x1c(%ebp)
08570288 +0x129:  mov    -0xc(%ebp),%edx
0857028b +0x12c:  mov    0x8(%ebp),%eax
0857028e +0x12f:  mov    0x8(%eax),%eax
08570291 +0x132:  mov    %edx,%ecx
08570293 +0x134:  sub    %eax,%ecx
08570295 +0x136:  mov    %ecx,%eax
08570297 +0x138:  mov    %eax,-0x1c(%ebp)
0857029a +0x13b:  fildl  -0x1c(%ebp)
0857029d +0x13e:  fldl   &data#a2821b98(.rodata)
085702a3 +0x144:  fdivrp %st,%st(1)
085702a5 +0x146:  faddp  %st,%st(1)
085702a7 +0x148:  fnstcw -0x1e(%ebp)
085702aa +0x14b:  movzwl -0x1e(%ebp),%eax
085702ae +0x14f:  mov    $0xc,%ah
085702b0 +0x151:  mov    %ax,-0x20(%ebp)
085702b4 +0x155:  fldcw  -0x20(%ebp)
085702b7 +0x158:  fistpll -0x28(%ebp)
085702ba +0x15b:  fldcw  -0x1e(%ebp)
085702bd +0x15e:  mov    -0x28(%ebp),%eax
085702c0 +0x161:  mov    -0x24(%ebp),%edx
085702c3 +0x164:  leave
085702c4 +0x165:  ret
085702c5 +0x166:  nop
085702c6 +0x167:  push   %ebp
085702c7 +0x168:  mov    %esp,%ebp
085702c9 +0x16a:  mov    0x8(%ebp),%eax
085702cc +0x16d:  movl   $&_ZTVN15message_counter13CTimeIntervalE+0x8,(%eax)
085702d2 +0x173:  pop    %ebp
085702d3 +0x174:  ret
085702d4 +0x175:  push   %ebp
085702d5 +0x176:  mov    %esp,%ebp
085702d7 +0x178:  sub    $0x18,%esp
085702da +0x17b:  mov    0x8(%ebp),%eax
085702dd +0x17e:  mov    %eax,(%esp)
085702e0 +0x181:  call   085702c6 <+0x167>
085702e5 +0x186:  mov    0x8(%ebp),%eax
085702e8 +0x189:  movl   $&_ZTVN15message_counter17CUnixTimeIntervalE+0x8,(%eax)
085702ee +0x18f:  leave
085702ef +0x190:  ret
085702f0 +0x191:  push   %ebp
085702f1 +0x192:  mov    %esp,%ebp
085702f3 +0x194:  push   %ebx
085702f4 +0x195:  sub    $0x14,%esp
085702f7 +0x198:  mov    0x8(%ebp),%ebx
085702fa +0x19b:  mov    0xc(%ebp),%eax
085702fd +0x19e:  mov    0x10(%ebp),%edx
08570300 +0x1a1:  mov    %edx,0x8(%esp)
08570304 +0x1a5:  mov    %eax,0x4(%esp)
08570308 +0x1a9:  mov    %ebx,(%esp)
0857030b +0x1ac:  call   085704b8 <+0x359>
08570310 +0x1b1:  sub    $0x4,%esp
08570313 +0x1b4:  mov    %ebx,%eax
08570315 +0x1b6:  mov    -0x4(%ebp),%ebx
08570318 +0x1b9:  leave
08570319 +0x1ba:  ret    $0x4
0857031c +0x1bd:  push   %ebp
0857031d +0x1be:  mov    %esp,%ebp
0857031f +0x1c0:  push   %ebx
08570320 +0x1c1:  sub    $0x14,%esp
08570323 +0x1c4:  mov    0x8(%ebp),%ebx
08570326 +0x1c7:  mov    0xc(%ebp),%eax
08570329 +0x1ca:  mov    %eax,0x4(%esp)
0857032d +0x1ce:  mov    %ebx,(%esp)
08570330 +0x1d1:  call   08570576 <+0x417>
08570335 +0x1d6:  sub    $0x4,%esp
08570338 +0x1d9:  mov    %ebx,%eax
0857033a +0x1db:  mov    -0x4(%ebp),%ebx
0857033d +0x1de:  leave
0857033e +0x1df:  ret    $0x4
08570341 +0x1e2:  nop
08570342 +0x1e3:  push   %ebp
08570343 +0x1e4:  mov    %esp,%ebp
08570345 +0x1e6:  mov    0x8(%ebp),%eax
08570348 +0x1e9:  mov    (%eax),%edx
0857034a +0x1eb:  mov    0xc(%ebp),%eax
0857034d +0x1ee:  mov    (%eax),%eax
0857034f +0x1f0:  cmp    %eax,%edx
08570351 +0x1f2:  setne  %al
08570354 +0x1f5:  pop    %ebp
08570355 +0x1f6:  ret
08570356 +0x1f7:  push   %ebp
08570357 +0x1f8:  mov    %esp,%ebp
08570359 +0x1fa:  mov    0x8(%ebp),%eax
0857035c +0x1fd:  mov    (%eax),%eax
0857035e +0x1ff:  add    $0x10,%eax
08570361 +0x202:  pop    %ebp
08570362 +0x203:  ret
08570363 +0x204:  push   %ebp
08570364 +0x205:  mov    %esp,%ebp
08570366 +0x207:  push   %esi
08570367 +0x208:  push   %ebx
08570368 +0x209:  sub    $0x10,%esp
0857036b +0x20c:  mov    0x8(%ebp),%esi
0857036e +0x20f:  mov    0x10(%ebp),%eax
08570371 +0x212:  mov    %eax,(%esp)
08570374 +0x215:  call   085705a4 <+0x445>
08570379 +0x21a:  mov    %eax,%ebx
0857037b +0x21c:  mov    0xc(%ebp),%eax
0857037e +0x21f:  mov    %eax,(%esp)
08570381 +0x222:  call   0857059c <+0x43d>
08570386 +0x227:  mov    %ebx,0x8(%esp)
0857038a +0x22b:  mov    %eax,0x4(%esp)
0857038e +0x22f:  mov    %esi,(%esp)
08570391 +0x232:  call   085705ac <+0x44d>
08570396 +0x237:  mov    %esi,%eax
08570398 +0x239:  add    $0x10,%esp
0857039b +0x23c:  pop    %ebx
0857039c +0x23d:  pop    %esi
0857039d +0x23e:  pop    %ebp
0857039e +0x23f:  ret    $0x4
085703a1 +0x242:  nop
085703a2 +0x243:  push   %ebp
085703a3 +0x244:  mov    %esp,%ebp
085703a5 +0x246:  push   %ebx
085703a6 +0x247:  sub    $0x14,%esp
085703a9 +0x24a:  mov    0x8(%ebp),%ebx
085703ac +0x24d:  mov    0xc(%ebp),%eax
085703af +0x250:  mov    %eax,(%esp)
085703b2 +0x253:  call   085705f7 <+0x498>
085703b7 +0x258:  mov    0x4(%eax),%edx
085703ba +0x25b:  mov    (%eax),%eax
085703bc +0x25d:  mov    %eax,(%ebx)
085703be +0x25f:  mov    %edx,0x4(%ebx)
085703c1 +0x262:  mov    0xc(%ebp),%eax
085703c4 +0x265:  add    $0x8,%eax
085703c7 +0x268:  mov    %eax,(%esp)
085703ca +0x26b:  call   085705ff <+0x4a0>
085703cf +0x270:  mov    0x8(%ebp),%edx
085703d2 +0x273:  mov    (%eax),%ecx
085703d4 +0x275:  mov    %ecx,0x8(%edx)
085703d7 +0x278:  mov    0x4(%eax),%ecx
085703da +0x27b:  mov    %ecx,0xc(%edx)
085703dd +0x27e:  mov    0x8(%eax),%ecx
085703e0 +0x281:  mov    %ecx,0x10(%edx)
085703e3 +0x284:  mov    0xc(%eax),%ecx
085703e6 +0x287:  mov    %ecx,0x14(%edx)
085703e9 +0x28a:  mov    0x10(%eax),%eax
085703ec +0x28d:  mov    %eax,0x18(%edx)
085703ef +0x290:  add    $0x14,%esp
085703f2 +0x293:  pop    %ebx
085703f3 +0x294:  pop    %ebp
085703f4 +0x295:  ret
085703f5 +0x296:  nop
085703f6 +0x297:  push   %ebp
085703f7 +0x298:  mov    %esp,%ebp
085703f9 +0x29a:  push   %ebx
085703fa +0x29b:  sub    $0x14,%esp
085703fd +0x29e:  mov    0x8(%ebp),%ebx
08570400 +0x2a1:  mov    0xc(%ebp),%eax
08570403 +0x2a4:  mov    0x10(%ebp),%edx
08570406 +0x2a7:  mov    %edx,0x8(%esp)
0857040a +0x2ab:  mov    %eax,0x4(%esp)
0857040e +0x2af:  mov    %ebx,(%esp)
08570411 +0x2b2:  call   08570608 <+0x4a9>
08570416 +0x2b7:  sub    $0x4,%esp
08570419 +0x2ba:  mov    %ebx,%eax
0857041b +0x2bc:  mov    -0x4(%ebp),%ebx
0857041e +0x2bf:  leave
0857041f +0x2c0:  ret    $0x4
08570422 +0x2c3:  push   %ebp
08570423 +0x2c4:  mov    %esp,%ebp
08570425 +0x2c6:  sub    $0x18,%esp
08570428 +0x2c9:  mov    0x8(%ebp),%eax
0857042b +0x2cc:  mov    %eax,(%esp)
0857042e +0x2cf:  call   085707d8 <+0x679>
08570433 +0x2d4:  leave
08570434 +0x2d5:  ret
08570435 +0x2d6:  nop
08570436 +0x2d7:  push   %ebp
08570437 +0x2d8:  mov    %esp,%ebp
08570439 +0x2da:  sub    $0x18,%esp
0857043c +0x2dd:  mov    0x8(%ebp),%eax
0857043f +0x2e0:  mov    (%eax),%eax
08570441 +0x2e2:  mov    %eax,(%esp)
08570444 +0x2e5:  call   085707e8 <+0x689>
08570449 +0x2ea:  leave
0857044a +0x2eb:  ret
0857044b +0x2ec:  nop
0857044c +0x2ed:  push   %ebp
0857044d +0x2ee:  mov    %esp,%ebp
0857044f +0x2f0:  push   %ebx
08570450 +0x2f1:  sub    $0x14,%esp
08570453 +0x2f4:  mov    0x8(%ebp),%ebx
08570456 +0x2f7:  mov    0xc(%ebp),%eax
08570459 +0x2fa:  mov    %eax,0x4(%esp)
0857045d +0x2fe:  mov    %ebx,(%esp)
08570460 +0x301:  call   08570852 <+0x6f3>
08570465 +0x306:  sub    $0x4,%esp
08570468 +0x309:  mov    %ebx,%eax
0857046a +0x30b:  mov    -0x4(%ebp),%ebx
0857046d +0x30e:  leave
0857046e +0x30f:  ret    $0x4
08570471 +0x312:  nop
08570472 +0x313:  push   %ebp
08570473 +0x314:  mov    %esp,%ebp
08570475 +0x316:  sub    $0x18,%esp
08570478 +0x319:  mov    0x8(%ebp),%eax
0857047b +0x31c:  mov    (%eax),%eax
0857047d +0x31e:  mov    %eax,(%esp)
08570480 +0x321:  call   086df800 <_ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base*)
08570485 +0x326:  mov    0x8(%ebp),%edx
08570488 +0x329:  mov    %eax,(%edx)
0857048a +0x32b:  mov    0x8(%ebp),%eax
0857048d +0x32e:  leave
0857048e +0x32f:  ret
0857048f +0x330:  nop
08570490 +0x331:  push   %ebp
08570491 +0x332:  mov    %esp,%ebp
08570493 +0x334:  sub    $0x18,%esp
08570496 +0x337:  mov    0x8(%ebp),%eax
08570499 +0x33a:  mov    %eax,(%esp)
0857049c +0x33d:  call   08570878 <+0x719>
085704a1 +0x342:  leave
085704a2 +0x343:  ret
085704a3 +0x344:  nop
085704a4 +0x345:  push   %ebp
085704a5 +0x346:  mov    %esp,%ebp
085704a7 +0x348:  sub    $0x18,%esp
085704aa +0x34b:  mov    0x8(%ebp),%eax
085704ad +0x34e:  mov    %eax,(%esp)
085704b0 +0x351:  call   085708ee <+0x78f>
085704b5 +0x356:  leave
085704b6 +0x357:  ret
085704b7 +0x358:  nop
085704b8 +0x359:  push   %ebp
085704b9 +0x35a:  mov    %esp,%ebp
085704bb +0x35c:  push   %esi
085704bc +0x35d:  push   %ebx
085704bd +0x35e:  sub    $0x30,%esp
085704c0 +0x361:  mov    0x8(%ebp),%ebx
085704c3 +0x364:  mov    0xc(%ebp),%eax
085704c6 +0x367:  mov    %eax,(%esp)
085704c9 +0x36a:  call   08570964 <+0x805>
085704ce +0x36f:  mov    %eax,%esi
085704d0 +0x371:  mov    0xc(%ebp),%eax
085704d3 +0x374:  mov    %eax,(%esp)
085704d6 +0x377:  call   08454ce8 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x78fe>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x78fe
085704db +0x37c:  lea    -0x10(%ebp),%edx
085704de +0x37f:  mov    0x10(%ebp),%ecx
085704e1 +0x382:  mov    %ecx,0x10(%esp)
085704e5 +0x386:  mov    %esi,0xc(%esp)
085704e9 +0x38a:  mov    %eax,0x8(%esp)
085704ed +0x38e:  mov    0xc(%ebp),%eax
085704f0 +0x391:  mov    %eax,0x4(%esp)
085704f4 +0x395:  mov    %edx,(%esp)
085704f7 +0x398:  call   08570970 <+0x811>
085704fc +0x39d:  sub    $0x4,%esp
085704ff +0x3a0:  lea    -0xc(%ebp),%eax
08570502 +0x3a3:  mov    0xc(%ebp),%edx
08570505 +0x3a6:  mov    %edx,0x4(%esp)
08570509 +0x3aa:  mov    %eax,(%esp)
0857050c +0x3ad:  call   08570576 <+0x417>
08570511 +0x3b2:  sub    $0x4,%esp
08570514 +0x3b5:  lea    -0xc(%ebp),%eax
08570517 +0x3b8:  mov    %eax,0x4(%esp)
0857051b +0x3bc:  lea    -0x10(%ebp),%eax
0857051e +0x3bf:  mov    %eax,(%esp)
08570521 +0x3c2:  call   08570a28 <+0x8c9>
08570526 +0x3c7:  test   %al,%al
08570528 +0x3c9:  jne    0857054f <+0x3f0>
0857052a +0x3cb:  mov    -0x10(%ebp),%eax
0857052d +0x3ce:  mov    %eax,(%esp)
08570530 +0x3d1:  call   085709ec <+0x88d>
08570535 +0x3d6:  mov    0xc(%ebp),%edx
08570538 +0x3d9:  mov    %eax,0x8(%esp)
0857053c +0x3dd:  mov    0x10(%ebp),%eax
0857053f +0x3e0:  mov    %eax,0x4(%esp)
08570543 +0x3e4:  mov    %edx,(%esp)
08570546 +0x3e7:  call   08570a0e <+0x8af>
0857054b +0x3ec:  test   %al,%al
0857054d +0x3ee:  je     08570563 <+0x404>
0857054f +0x3f0:  mov    0xc(%ebp),%eax
08570552 +0x3f3:  mov    %eax,0x4(%esp)
08570556 +0x3f7:  mov    %ebx,(%esp)
08570559 +0x3fa:  call   08570576 <+0x417>
0857055e +0x3ff:  sub    $0x4,%esp
08570561 +0x402:  jmp    08570568 <+0x409>
08570563 +0x404:  mov    -0x10(%ebp),%eax
08570566 +0x407:  mov    %eax,(%ebx)
08570568 +0x409:  mov    %ebx,%eax
0857056a +0x40b:  lea    -0x8(%ebp),%esp
0857056d +0x40e:  add    $0x0,%esp
08570570 +0x411:  pop    %ebx
08570571 +0x412:  pop    %esi
08570572 +0x413:  pop    %ebp
08570573 +0x414:  ret    $0x4
08570576 +0x417:  push   %ebp
08570577 +0x418:  mov    %esp,%ebp
08570579 +0x41a:  push   %ebx
0857057a +0x41b:  sub    $0x14,%esp
0857057d +0x41e:  mov    0x8(%ebp),%ebx
08570580 +0x421:  mov    0xc(%ebp),%eax
08570583 +0x424:  add    $0x4,%eax
08570586 +0x427:  mov    %eax,0x4(%esp)
0857058a +0x42b:  mov    %ebx,(%esp)
0857058d +0x42e:  call   08570a3c <+0x8dd>
08570592 +0x433:  mov    %ebx,%eax
08570594 +0x435:  add    $0x14,%esp
08570597 +0x438:  pop    %ebx
08570598 +0x439:  pop    %ebp
08570599 +0x43a:  ret    $0x4
0857059c +0x43d:  push   %ebp
0857059d +0x43e:  mov    %esp,%ebp
0857059f +0x440:  mov    0x8(%ebp),%eax
085705a2 +0x443:  pop    %ebp
085705a3 +0x444:  ret
085705a4 +0x445:  push   %ebp
085705a5 +0x446:  mov    %esp,%ebp
085705a7 +0x448:  mov    0x8(%ebp),%eax
085705aa +0x44b:  pop    %ebp
085705ab +0x44c:  ret
085705ac +0x44d:  push   %ebp
085705ad +0x44e:  mov    %esp,%ebp
085705af +0x450:  sub    $0x18,%esp
085705b2 +0x453:  mov    0xc(%ebp),%eax
085705b5 +0x456:  mov    %eax,(%esp)
085705b8 +0x459:  call   0857059c <+0x43d>
085705bd +0x45e:  mov    0x8(%ebp),%ecx
085705c0 +0x461:  mov    0x4(%eax),%edx
085705c3 +0x464:  mov    (%eax),%eax
085705c5 +0x466:  mov    %eax,(%ecx)
085705c7 +0x468:  mov    %edx,0x4(%ecx)
085705ca +0x46b:  mov    0x10(%ebp),%eax
085705cd +0x46e:  mov    %eax,(%esp)
085705d0 +0x471:  call   085705a4 <+0x445>
085705d5 +0x476:  mov    0x8(%ebp),%edx
085705d8 +0x479:  mov    (%eax),%ecx
085705da +0x47b:  mov    %ecx,0x8(%edx)
085705dd +0x47e:  mov    0x4(%eax),%ecx
085705e0 +0x481:  mov    %ecx,0xc(%edx)
085705e3 +0x484:  mov    0x8(%eax),%ecx
085705e6 +0x487:  mov    %ecx,0x10(%edx)
085705e9 +0x48a:  mov    0xc(%eax),%ecx
085705ec +0x48d:  mov    %ecx,0x14(%edx)
085705ef +0x490:  mov    0x10(%eax),%eax
085705f2 +0x493:  mov    %eax,0x18(%edx)
085705f5 +0x496:  leave
085705f6 +0x497:  ret
085705f7 +0x498:  push   %ebp
085705f8 +0x499:  mov    %esp,%ebp
085705fa +0x49b:  mov    0x8(%ebp),%eax
085705fd +0x49e:  pop    %ebp
085705fe +0x49f:  ret
085705ff +0x4a0:  push   %ebp
08570600 +0x4a1:  mov    %esp,%ebp
08570602 +0x4a3:  mov    0x8(%ebp),%eax
08570605 +0x4a6:  pop    %ebp
08570606 +0x4a7:  ret
08570607 +0x4a8:  nop
08570608 +0x4a9:  push   %ebp
08570609 +0x4aa:  mov    %esp,%ebp
0857060b +0x4ac:  push   %esi
0857060c +0x4ad:  push   %ebx
0857060d +0x4ae:  sub    $0x50,%esp
08570610 +0x4b1:  mov    0x8(%ebp),%ebx
08570613 +0x4b4:  mov    0xc(%ebp),%eax
08570616 +0x4b7:  mov    %eax,(%esp)
08570619 +0x4ba:  call   08454ce8 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x78fe>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x78fe
0857061e +0x4bf:  mov    %eax,-0x14(%ebp)
08570621 +0x4c2:  mov    0xc(%ebp),%eax
08570624 +0x4c5:  mov    %eax,(%esp)
08570627 +0x4c8:  call   08570964 <+0x805>
0857062c +0x4cd:  mov    %eax,-0x10(%ebp)
0857062f +0x4d0:  movb   $0x1,-0x9(%ebp)
08570633 +0x4d4:  jmp    08570691 <+0x532>
08570635 +0x4d6:  mov    -0x14(%ebp),%eax
08570638 +0x4d9:  mov    %eax,-0x10(%ebp)
0857063b +0x4dc:  mov    -0x14(%ebp),%eax
0857063e +0x4df:  mov    %eax,(%esp)
08570641 +0x4e2:  call   08570a52 <+0x8f3>
08570646 +0x4e7:  mov    %eax,%esi
08570648 +0x4e9:  mov    0x10(%ebp),%eax
0857064b +0x4ec:  mov    %eax,0x4(%esp)
0857064f +0x4f0:  lea    -0x2d(%ebp),%eax
08570652 +0x4f3:  mov    %eax,(%esp)
08570655 +0x4f6:  call   08570a4a <+0x8eb>
0857065a +0x4fb:  mov    0xc(%ebp),%edx
0857065d +0x4fe:  mov    %esi,0x8(%esp)
08570661 +0x502:  mov    %eax,0x4(%esp)
08570665 +0x506:  mov    %edx,(%esp)
08570668 +0x509:  call   08570a0e <+0x8af>
0857066d +0x50e:  mov    %al,-0x9(%ebp)
08570670 +0x511:  cmpb   $0x0,-0x9(%ebp)
08570674 +0x515:  je     08570683 <+0x524>
08570676 +0x517:  mov    -0x14(%ebp),%eax
08570679 +0x51a:  mov    %eax,(%esp)
0857067c +0x51d:  call   084582e0 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xaef6>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xaef6
08570681 +0x522:  jmp    0857068e <+0x52f>
08570683 +0x524:  mov    -0x14(%ebp),%eax
08570686 +0x527:  mov    %eax,(%esp)
08570689 +0x52a:  call   084582d5 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xaeeb>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xaeeb
0857068e +0x52f:  mov    %eax,-0x14(%ebp)
08570691 +0x532:  cmpl   $0x0,-0x14(%ebp)
08570695 +0x536:  setne  %al
08570698 +0x539:  test   %al,%al
0857069a +0x53b:  jne    08570635 <+0x4d6>
0857069c +0x53d:  mov    -0x10(%ebp),%eax
0857069f +0x540:  mov    %eax,0x4(%esp)
085706a3 +0x544:  lea    -0x34(%ebp),%eax
085706a6 +0x547:  mov    %eax,(%esp)
085706a9 +0x54a:  call   08570a3c <+0x8dd>
085706ae +0x54f:  cmpb   $0x0,-0x9(%ebp)
085706b2 +0x553:  je     08570733 <+0x5d4>
085706b4 +0x555:  lea    -0x2c(%ebp),%eax
085706b7 +0x558:  mov    0xc(%ebp),%edx
085706ba +0x55b:  mov    %edx,0x4(%esp)
085706be +0x55f:  mov    %eax,(%esp)
085706c1 +0x562:  call   08570852 <+0x6f3>
085706c6 +0x567:  sub    $0x4,%esp
085706c9 +0x56a:  lea    -0x2c(%ebp),%eax
085706cc +0x56d:  mov    %eax,0x4(%esp)
085706d0 +0x571:  lea    -0x34(%ebp),%eax
085706d3 +0x574:  mov    %eax,(%esp)
085706d6 +0x577:  call   08570a28 <+0x8c9>
085706db +0x57c:  test   %al,%al
085706dd +0x57e:  je     08570728 <+0x5c9>
085706df +0x580:  movb   $0x1,-0x25(%ebp)
085706e3 +0x584:  mov    -0x10(%ebp),%ecx
085706e6 +0x587:  mov    -0x14(%ebp),%edx
085706e9 +0x58a:  lea    -0x24(%ebp),%eax
085706ec +0x58d:  mov    0x10(%ebp),%esi
085706ef +0x590:  mov    %esi,0x10(%esp)
085706f3 +0x594:  mov    %ecx,0xc(%esp)
085706f7 +0x598:  mov    %edx,0x8(%esp)
085706fb +0x59c:  mov    0xc(%ebp),%edx
085706fe +0x59f:  mov    %edx,0x4(%esp)
08570702 +0x5a3:  mov    %eax,(%esp)
08570705 +0x5a6:  call   08570a74 <+0x915>
0857070a +0x5ab:  sub    $0x4,%esp
0857070d +0x5ae:  lea    -0x25(%ebp),%eax
08570710 +0x5b1:  mov    %eax,0x8(%esp)
08570714 +0x5b5:  lea    -0x24(%ebp),%eax
08570717 +0x5b8:  mov    %eax,0x4(%esp)
0857071b +0x5bc:  mov    %ebx,(%esp)
0857071e +0x5bf:  call   08570b3c <+0x9dd>
08570723 +0x5c4:  jmp    085707c9 <+0x66a>
08570728 +0x5c9:  lea    -0x34(%ebp),%eax
0857072b +0x5cc:  mov    %eax,(%esp)
0857072e +0x5cf:  call   08570b6a <+0xa0b>
08570733 +0x5d4:  mov    0x10(%ebp),%eax
08570736 +0x5d7:  mov    %eax,0x4(%esp)
0857073a +0x5db:  lea    -0x1e(%ebp),%eax
0857073d +0x5de:  mov    %eax,(%esp)
08570740 +0x5e1:  call   08570a4a <+0x8eb>
08570745 +0x5e6:  mov    %eax,%esi
08570747 +0x5e8:  mov    -0x34(%ebp),%eax
0857074a +0x5eb:  mov    %eax,(%esp)
0857074d +0x5ee:  call   085709ec <+0x88d>
08570752 +0x5f3:  mov    0xc(%ebp),%edx
08570755 +0x5f6:  mov    %esi,0x8(%esp)
08570759 +0x5fa:  mov    %eax,0x4(%esp)
0857075d +0x5fe:  mov    %edx,(%esp)
08570760 +0x601:  call   08570a0e <+0x8af>
08570765 +0x606:  test   %al,%al
08570767 +0x608:  je     085707af <+0x650>
08570769 +0x60a:  movb   $0x1,-0x1d(%ebp)
0857076d +0x60e:  mov    -0x10(%ebp),%ecx
08570770 +0x611:  mov    -0x14(%ebp),%edx
08570773 +0x614:  lea    -0x1c(%ebp),%eax
08570776 +0x617:  mov    0x10(%ebp),%esi
08570779 +0x61a:  mov    %esi,0x10(%esp)
0857077d +0x61e:  mov    %ecx,0xc(%esp)
08570781 +0x622:  mov    %edx,0x8(%esp)
08570785 +0x626:  mov    0xc(%ebp),%edx
08570788 +0x629:  mov    %edx,0x4(%esp)
0857078c +0x62d:  mov    %eax,(%esp)
0857078f +0x630:  call   08570a74 <+0x915>
08570794 +0x635:  sub    $0x4,%esp
08570797 +0x638:  lea    -0x1d(%ebp),%eax
0857079a +0x63b:  mov    %eax,0x8(%esp)
0857079e +0x63f:  lea    -0x1c(%ebp),%eax
085707a1 +0x642:  mov    %eax,0x4(%esp)
085707a5 +0x646:  mov    %ebx,(%esp)
085707a8 +0x649:  call   08570b3c <+0x9dd>
085707ad +0x64e:  jmp    085707c9 <+0x66a>
085707af +0x650:  movb   $0x0,-0x15(%ebp)
085707b3 +0x654:  lea    -0x15(%ebp),%eax
085707b6 +0x657:  mov    %eax,0x8(%esp)
085707ba +0x65b:  lea    -0x34(%ebp),%eax
085707bd +0x65e:  mov    %eax,0x4(%esp)
085707c1 +0x662:  mov    %ebx,(%esp)
085707c4 +0x665:  call   08570b88 <+0xa29>
085707c9 +0x66a:  mov    %ebx,%eax
085707cb +0x66c:  lea    -0x8(%ebp),%esp
085707ce +0x66f:  add    $0x0,%esp
085707d1 +0x672:  pop    %ebx
085707d2 +0x673:  pop    %esi
085707d3 +0x674:  pop    %ebp
085707d4 +0x675:  ret    $0x4
085707d7 +0x678:  nop
085707d8 +0x679:  push   %ebp
085707d9 +0x67a:  mov    %esp,%ebp
085707db +0x67c:  mov    0x8(%ebp),%eax
085707de +0x67f:  mov    0x14(%eax),%eax
085707e1 +0x682:  test   %eax,%eax
085707e3 +0x684:  sete   %al
085707e6 +0x687:  pop    %ebp
085707e7 +0x688:  ret
085707e8 +0x689:  push   %ebp
085707e9 +0x68a:  mov    %esp,%ebp
085707eb +0x68c:  sub    $0x28,%esp
085707ee +0x68f:  jmp    0857080c <+0x6ad>
085707f0 +0x691:  mov    0x8(%ebp),%eax
085707f3 +0x694:  mov    %eax,(%esp)
085707f6 +0x697:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
085707fb +0x69c:  add    %eax,%eax
085707fd +0x69e:  mov    %eax,0x4(%esp)
08570801 +0x6a2:  mov    0x8(%ebp),%eax
08570804 +0x6a5:  mov    %eax,(%esp)
08570807 +0x6a8:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
0857080c +0x6ad:  movl   $0x7d8,0x4(%esp)
08570814 +0x6b5:  mov    0x8(%ebp),%eax
08570817 +0x6b8:  mov    %eax,(%esp)
0857081a +0x6bb:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
0857081f +0x6c0:  xor    $0x1,%eax
08570822 +0x6c3:  test   %al,%al
08570824 +0x6c5:  jne    085707f0 <+0x691>
08570826 +0x6c7:  mov    0x8(%ebp),%eax
08570829 +0x6ca:  mov    0x8(%eax),%eax
0857082c +0x6cd:  mov    %eax,%edx
0857082e +0x6cf:  mov    0x8(%ebp),%eax
08570831 +0x6d2:  mov    0xc(%eax),%eax
08570834 +0x6d5:  lea    (%edx,%eax,1),%eax
08570837 +0x6d8:  mov    %eax,-0xc(%ebp)
0857083a +0x6db:  movl   $0x7d8,0x4(%esp)
08570842 +0x6e3:  mov    0x8(%ebp),%eax
08570845 +0x6e6:  mov    %eax,(%esp)
08570848 +0x6e9:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
0857084d +0x6ee:  mov    -0xc(%ebp),%eax
08570850 +0x6f1:  leave
08570851 +0x6f2:  ret
08570852 +0x6f3:  push   %ebp
08570853 +0x6f4:  mov    %esp,%ebp
08570855 +0x6f6:  push   %ebx
08570856 +0x6f7:  sub    $0x14,%esp
08570859 +0x6fa:  mov    0x8(%ebp),%ebx
0857085c +0x6fd:  mov    0xc(%ebp),%eax
0857085f +0x700:  mov    0xc(%eax),%eax
08570862 +0x703:  mov    %eax,0x4(%esp)
08570866 +0x707:  mov    %ebx,(%esp)
08570869 +0x70a:  call   08570a3c <+0x8dd>
0857086e +0x70f:  mov    %ebx,%eax
08570870 +0x711:  add    $0x14,%esp
08570873 +0x714:  pop    %ebx
08570874 +0x715:  pop    %ebp
08570875 +0x716:  ret    $0x4
08570878 +0x719:  push   %ebp
08570879 +0x71a:  mov    %esp,%ebp
0857087b +0x71c:  push   %ebx
0857087c +0x71d:  sub    $0x14,%esp
0857087f +0x720:  mov    0x8(%ebp),%eax
08570882 +0x723:  mov    %eax,(%esp)
08570885 +0x726:  call   08454ce8 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x78fe>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x78fe
0857088a +0x72b:  mov    %eax,0x4(%esp)
0857088e +0x72f:  mov    0x8(%ebp),%eax
08570891 +0x732:  mov    %eax,(%esp)
08570894 +0x735:  call   08454c92 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x78a8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x78a8
08570899 +0x73a:  mov    0x8(%ebp),%eax
0857089c +0x73d:  mov    %eax,(%esp)
0857089f +0x740:  call   08570bb6 <+0xa57>
085708a4 +0x745:  mov    %eax,%ebx
085708a6 +0x747:  mov    0x8(%ebp),%eax
085708a9 +0x74a:  mov    %eax,(%esp)
085708ac +0x74d:  call   08570964 <+0x805>
085708b1 +0x752:  mov    %eax,(%ebx)
085708b3 +0x754:  mov    0x8(%ebp),%eax
085708b6 +0x757:  mov    %eax,(%esp)
085708b9 +0x75a:  call   08570bc2 <+0xa63>
085708be +0x75f:  movl   $0x0,(%eax)
085708c4 +0x765:  mov    0x8(%ebp),%eax
085708c7 +0x768:  mov    %eax,(%esp)
085708ca +0x76b:  call   08570bce <+0xa6f>
085708cf +0x770:  mov    %eax,%ebx
085708d1 +0x772:  mov    0x8(%ebp),%eax
085708d4 +0x775:  mov    %eax,(%esp)
085708d7 +0x778:  call   08570964 <+0x805>
085708dc +0x77d:  mov    %eax,(%ebx)
085708de +0x77f:  mov    0x8(%ebp),%eax
085708e1 +0x782:  movl   $0x0,0x14(%eax)
085708e8 +0x789:  add    $0x14,%esp
085708eb +0x78c:  pop    %ebx
085708ec +0x78d:  pop    %ebp
085708ed +0x78e:  ret
085708ee +0x78f:  push   %ebp
085708ef +0x790:  mov    %esp,%ebp
085708f1 +0x792:  push   %ebx
085708f2 +0x793:  sub    $0x14,%esp
085708f5 +0x796:  mov    0x8(%ebp),%eax
085708f8 +0x799:  mov    %eax,(%esp)
085708fb +0x79c:  call   082b523e <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x7139>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x7139
08570900 +0x7a1:  mov    %eax,0x4(%esp)
08570904 +0x7a5:  mov    0x8(%ebp),%eax
08570907 +0x7a8:  mov    %eax,(%esp)
0857090a +0x7ab:  call   08454aba <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x76d0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x76d0
0857090f +0x7b0:  mov    0x8(%ebp),%eax
08570912 +0x7b3:  mov    %eax,(%esp)
08570915 +0x7b6:  call   08570bda <+0xa7b>
0857091a +0x7bb:  mov    %eax,%ebx
0857091c +0x7bd:  mov    0x8(%ebp),%eax
0857091f +0x7c0:  mov    %eax,(%esp)
08570922 +0x7c3:  call   082c065e <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x12559>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x12559
08570927 +0x7c8:  mov    %eax,(%ebx)
08570929 +0x7ca:  mov    0x8(%ebp),%eax
0857092c +0x7cd:  mov    %eax,(%esp)
0857092f +0x7d0:  call   08570be6 <+0xa87>
08570934 +0x7d5:  movl   $0x0,(%eax)
0857093a +0x7db:  mov    0x8(%ebp),%eax
0857093d +0x7de:  mov    %eax,(%esp)
08570940 +0x7e1:  call   08570bf2 <+0xa93>
08570945 +0x7e6:  mov    %eax,%ebx
08570947 +0x7e8:  mov    0x8(%ebp),%eax
0857094a +0x7eb:  mov    %eax,(%esp)
0857094d +0x7ee:  call   082c065e <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x12559>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x12559
08570952 +0x7f3:  mov    %eax,(%ebx)
08570954 +0x7f5:  mov    0x8(%ebp),%eax
08570957 +0x7f8:  movl   $0x0,0x14(%eax)
0857095e +0x7ff:  add    $0x14,%esp
08570961 +0x802:  pop    %ebx
08570962 +0x803:  pop    %ebp
08570963 +0x804:  ret
08570964 +0x805:  push   %ebp
08570965 +0x806:  mov    %esp,%ebp
08570967 +0x808:  mov    0x8(%ebp),%eax
0857096a +0x80b:  add    $0x4,%eax
0857096d +0x80e:  pop    %ebp
0857096e +0x80f:  ret
0857096f +0x810:  nop
08570970 +0x811:  push   %ebp
08570971 +0x812:  mov    %esp,%ebp
08570973 +0x814:  push   %ebx
08570974 +0x815:  sub    $0x14,%esp
08570977 +0x818:  mov    0x8(%ebp),%ebx
0857097a +0x81b:  jmp    085709c8 <+0x869>
0857097c +0x81d:  mov    0x10(%ebp),%eax
0857097f +0x820:  mov    %eax,(%esp)
08570982 +0x823:  call   08570a52 <+0x8f3>
08570987 +0x828:  mov    0xc(%ebp),%edx
0857098a +0x82b:  mov    0x18(%ebp),%ecx
0857098d +0x82e:  mov    %ecx,0x8(%esp)
08570991 +0x832:  mov    %eax,0x4(%esp)
08570995 +0x836:  mov    %edx,(%esp)
08570998 +0x839:  call   08570a0e <+0x8af>
0857099d +0x83e:  xor    $0x1,%eax
085709a0 +0x841:  test   %al,%al
085709a2 +0x843:  je     085709ba <+0x85b>
085709a4 +0x845:  mov    0x10(%ebp),%eax
085709a7 +0x848:  mov    %eax,0x14(%ebp)
085709aa +0x84b:  mov    0x10(%ebp),%eax
085709ad +0x84e:  mov    %eax,(%esp)
085709b0 +0x851:  call   084582e0 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xaef6>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xaef6
085709b5 +0x856:  mov    %eax,0x10(%ebp)
085709b8 +0x859:  jmp    085709c8 <+0x869>
085709ba +0x85b:  mov    0x10(%ebp),%eax
085709bd +0x85e:  mov    %eax,(%esp)
085709c0 +0x861:  call   084582d5 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xaeeb>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xaeeb
085709c5 +0x866:  mov    %eax,0x10(%ebp)
085709c8 +0x869:  cmpl   $0x0,0x10(%ebp)
085709cc +0x86d:  setne  %al
085709cf +0x870:  test   %al,%al
085709d1 +0x872:  jne    0857097c <+0x81d>
085709d3 +0x874:  mov    0x14(%ebp),%eax
085709d6 +0x877:  mov    %eax,0x4(%esp)
085709da +0x87b:  mov    %ebx,(%esp)
085709dd +0x87e:  call   08570a3c <+0x8dd>
085709e2 +0x883:  mov    %ebx,%eax
085709e4 +0x885:  add    $0x14,%esp
085709e7 +0x888:  pop    %ebx
085709e8 +0x889:  pop    %ebp
085709e9 +0x88a:  ret    $0x4
085709ec +0x88d:  push   %ebp
085709ed +0x88e:  mov    %esp,%ebp
085709ef +0x890:  sub    $0x28,%esp
085709f2 +0x893:  mov    0x8(%ebp),%eax
085709f5 +0x896:  mov    %eax,(%esp)
085709f8 +0x899:  call   08570bfd <+0xa9e>
085709fd +0x89e:  mov    %eax,0x4(%esp)
08570a01 +0x8a2:  lea    -0x9(%ebp),%eax
08570a04 +0x8a5:  mov    %eax,(%esp)
08570a07 +0x8a8:  call   08570a4a <+0x8eb>
08570a0c +0x8ad:  leave
08570a0d +0x8ae:  ret
08570a0e +0x8af:  push   %ebp
08570a0f +0x8b0:  mov    %esp,%ebp
08570a11 +0x8b2:  sub    $0x18,%esp
08570a14 +0x8b5:  mov    0x10(%ebp),%eax
08570a17 +0x8b8:  mov    %eax,0x4(%esp)
08570a1b +0x8bc:  mov    0xc(%ebp),%eax
08570a1e +0x8bf:  mov    %eax,(%esp)
08570a21 +0x8c2:  call   08570192 <+0x33>
08570a26 +0x8c7:  leave
08570a27 +0x8c8:  ret
08570a28 +0x8c9:  push   %ebp
08570a29 +0x8ca:  mov    %esp,%ebp
08570a2b +0x8cc:  mov    0x8(%ebp),%eax
08570a2e +0x8cf:  mov    (%eax),%edx
08570a30 +0x8d1:  mov    0xc(%ebp),%eax
08570a33 +0x8d4:  mov    (%eax),%eax
08570a35 +0x8d6:  cmp    %eax,%edx
08570a37 +0x8d8:  sete   %al
08570a3a +0x8db:  pop    %ebp
08570a3b +0x8dc:  ret
08570a3c +0x8dd:  push   %ebp
08570a3d +0x8de:  mov    %esp,%ebp
08570a3f +0x8e0:  mov    0xc(%ebp),%edx
08570a42 +0x8e3:  mov    0x8(%ebp),%eax
08570a45 +0x8e6:  mov    %edx,(%eax)
08570a47 +0x8e8:  pop    %ebp
08570a48 +0x8e9:  ret
08570a49 +0x8ea:  nop
08570a4a +0x8eb:  push   %ebp
08570a4b +0x8ec:  mov    %esp,%ebp
08570a4d +0x8ee:  mov    0xc(%ebp),%eax
08570a50 +0x8f1:  pop    %ebp
08570a51 +0x8f2:  ret
08570a52 +0x8f3:  push   %ebp
08570a53 +0x8f4:  mov    %esp,%ebp
08570a55 +0x8f6:  sub    $0x28,%esp
08570a58 +0x8f9:  mov    0x8(%ebp),%eax
08570a5b +0x8fc:  mov    %eax,(%esp)
08570a5e +0x8ff:  call   08570c08 <+0xaa9>
08570a63 +0x904:  mov    %eax,0x4(%esp)
08570a67 +0x908:  lea    -0x9(%ebp),%eax
08570a6a +0x90b:  mov    %eax,(%esp)
08570a6d +0x90e:  call   08570a4a <+0x8eb>
08570a72 +0x913:  leave
08570a73 +0x914:  ret
08570a74 +0x915:  push   %ebp
08570a75 +0x916:  mov    %esp,%ebp
08570a77 +0x918:  push   %esi
08570a78 +0x919:  push   %ebx
08570a79 +0x91a:  sub    $0x20,%esp
08570a7c +0x91d:  mov    0x8(%ebp),%esi
08570a7f +0x920:  cmpl   $0x0,0x10(%ebp)
08570a83 +0x924:  jne    08570acb <+0x96c>
08570a85 +0x926:  mov    0xc(%ebp),%eax
08570a88 +0x929:  mov    %eax,(%esp)
08570a8b +0x92c:  call   08570964 <+0x805>
08570a90 +0x931:  cmp    0x14(%ebp),%eax
08570a93 +0x934:  je     08570acb <+0x96c>
08570a95 +0x936:  mov    0x14(%ebp),%eax
08570a98 +0x939:  mov    %eax,(%esp)
08570a9b +0x93c:  call   085709ec <+0x88d>
08570aa0 +0x941:  mov    %eax,%ebx
08570aa2 +0x943:  mov    0x18(%ebp),%eax
08570aa5 +0x946:  mov    %eax,0x4(%esp)
08570aa9 +0x94a:  lea    -0xe(%ebp),%eax
08570aac +0x94d:  mov    %eax,(%esp)
08570aaf +0x950:  call   08570a4a <+0x8eb>
08570ab4 +0x955:  mov    0xc(%ebp),%edx
08570ab7 +0x958:  mov    %ebx,0x8(%esp)
08570abb +0x95c:  mov    %eax,0x4(%esp)
08570abf +0x960:  mov    %edx,(%esp)
08570ac2 +0x963:  call   08570a0e <+0x8af>
08570ac7 +0x968:  test   %al,%al
08570ac9 +0x96a:  je     08570ad2 <+0x973>
08570acb +0x96c:  mov    $0x1,%eax
08570ad0 +0x971:  jmp    08570ad7 <+0x978>
08570ad2 +0x973:  mov    $0x0,%eax
08570ad7 +0x978:  mov    %al,-0xd(%ebp)
08570ada +0x97b:  mov    0x18(%ebp),%eax
08570add +0x97e:  mov    %eax,0x4(%esp)
08570ae1 +0x982:  mov    0xc(%ebp),%eax
08570ae4 +0x985:  mov    %eax,(%esp)
08570ae7 +0x988:  call   08570c14 <+0xab5>
08570aec +0x98d:  mov    %eax,-0xc(%ebp)
08570aef +0x990:  mov    0xc(%ebp),%eax
08570af2 +0x993:  lea    0x4(%eax),%ecx
08570af5 +0x996:  mov    -0xc(%ebp),%edx
08570af8 +0x999:  movzbl -0xd(%ebp),%eax
08570afc +0x99d:  mov    %ecx,0xc(%esp)
08570b00 +0x9a1:  mov    0x14(%ebp),%ecx
08570b03 +0x9a4:  mov    %ecx,0x8(%esp)
08570b07 +0x9a8:  mov    %edx,0x4(%esp)
08570b0b +0x9ac:  mov    %eax,(%esp)
08570b0e +0x9af:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
08570b13 +0x9b4:  mov    0xc(%ebp),%eax
08570b16 +0x9b7:  mov    0x14(%eax),%eax
08570b19 +0x9ba:  lea    0x1(%eax),%edx
08570b1c +0x9bd:  mov    0xc(%ebp),%eax
08570b1f +0x9c0:  mov    %edx,0x14(%eax)
08570b22 +0x9c3:  mov    -0xc(%ebp),%eax
08570b25 +0x9c6:  mov    %eax,0x4(%esp)
08570b29 +0x9ca:  mov    %esi,(%esp)
08570b2c +0x9cd:  call   08570a3c <+0x8dd>
08570b31 +0x9d2:  mov    %esi,%eax
08570b33 +0x9d4:  add    $0x20,%esp
08570b36 +0x9d7:  pop    %ebx
08570b37 +0x9d8:  pop    %esi
08570b38 +0x9d9:  pop    %ebp
08570b39 +0x9da:  ret    $0x4
08570b3c +0x9dd:  push   %ebp
08570b3d +0x9de:  mov    %esp,%ebp
08570b3f +0x9e0:  sub    $0x18,%esp
08570b42 +0x9e3:  mov    0xc(%ebp),%eax
08570b45 +0x9e6:  mov    %eax,(%esp)
08570b48 +0x9e9:  call   08570c95 <+0xb36>
08570b4d +0x9ee:  mov    0x8(%ebp),%edx
08570b50 +0x9f1:  mov    (%eax),%eax
08570b52 +0x9f3:  mov    %eax,(%edx)
08570b54 +0x9f5:  mov    0x10(%ebp),%eax
08570b57 +0x9f8:  mov    %eax,(%esp)
08570b5a +0x9fb:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
08570b5f +0xa00:  movzbl (%eax),%edx
08570b62 +0xa03:  mov    0x8(%ebp),%eax
08570b65 +0xa06:  mov    %dl,0x4(%eax)
08570b68 +0xa09:  leave
08570b69 +0xa0a:  ret
08570b6a +0xa0b:  push   %ebp
08570b6b +0xa0c:  mov    %esp,%ebp
08570b6d +0xa0e:  sub    $0x18,%esp
08570b70 +0xa11:  mov    0x8(%ebp),%eax
08570b73 +0xa14:  mov    (%eax),%eax
08570b75 +0xa16:  mov    %eax,(%esp)
08570b78 +0xa19:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
08570b7d +0xa1e:  mov    0x8(%ebp),%edx
08570b80 +0xa21:  mov    %eax,(%edx)
08570b82 +0xa23:  mov    0x8(%ebp),%eax
08570b85 +0xa26:  leave
08570b86 +0xa27:  ret
08570b87 +0xa28:  nop
08570b88 +0xa29:  push   %ebp
08570b89 +0xa2a:  mov    %esp,%ebp
08570b8b +0xa2c:  sub    $0x18,%esp
08570b8e +0xa2f:  mov    0xc(%ebp),%eax
08570b91 +0xa32:  mov    %eax,(%esp)
08570b94 +0xa35:  call   08570c9d <+0xb3e>
08570b99 +0xa3a:  mov    0x8(%ebp),%edx
08570b9c +0xa3d:  mov    (%eax),%eax
08570b9e +0xa3f:  mov    %eax,(%edx)
08570ba0 +0xa41:  mov    0x10(%ebp),%eax
08570ba3 +0xa44:  mov    %eax,(%esp)
08570ba6 +0xa47:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
08570bab +0xa4c:  movzbl (%eax),%edx
08570bae +0xa4f:  mov    0x8(%ebp),%eax
08570bb1 +0xa52:  mov    %dl,0x4(%eax)
08570bb4 +0xa55:  leave
08570bb5 +0xa56:  ret
08570bb6 +0xa57:  push   %ebp
08570bb7 +0xa58:  mov    %esp,%ebp
08570bb9 +0xa5a:  mov    0x8(%ebp),%eax
08570bbc +0xa5d:  add    $0xc,%eax
08570bbf +0xa60:  pop    %ebp
08570bc0 +0xa61:  ret
08570bc1 +0xa62:  nop
08570bc2 +0xa63:  push   %ebp
08570bc3 +0xa64:  mov    %esp,%ebp
08570bc5 +0xa66:  mov    0x8(%ebp),%eax
08570bc8 +0xa69:  add    $0x8,%eax
08570bcb +0xa6c:  pop    %ebp
08570bcc +0xa6d:  ret
08570bcd +0xa6e:  nop
08570bce +0xa6f:  push   %ebp
08570bcf +0xa70:  mov    %esp,%ebp
08570bd1 +0xa72:  mov    0x8(%ebp),%eax
08570bd4 +0xa75:  add    $0x10,%eax
08570bd7 +0xa78:  pop    %ebp
08570bd8 +0xa79:  ret
08570bd9 +0xa7a:  nop
08570bda +0xa7b:  push   %ebp
08570bdb +0xa7c:  mov    %esp,%ebp
08570bdd +0xa7e:  mov    0x8(%ebp),%eax
08570be0 +0xa81:  add    $0xc,%eax
08570be3 +0xa84:  pop    %ebp
08570be4 +0xa85:  ret
08570be5 +0xa86:  nop
08570be6 +0xa87:  push   %ebp
08570be7 +0xa88:  mov    %esp,%ebp
08570be9 +0xa8a:  mov    0x8(%ebp),%eax
08570bec +0xa8d:  add    $0x8,%eax
08570bef +0xa90:  pop    %ebp
08570bf0 +0xa91:  ret
08570bf1 +0xa92:  nop
08570bf2 +0xa93:  push   %ebp
08570bf3 +0xa94:  mov    %esp,%ebp
08570bf5 +0xa96:  mov    0x8(%ebp),%eax
08570bf8 +0xa99:  add    $0x10,%eax
08570bfb +0xa9c:  pop    %ebp
08570bfc +0xa9d:  ret
08570bfd +0xa9e:  push   %ebp
08570bfe +0xa9f:  mov    %esp,%ebp
08570c00 +0xaa1:  mov    0x8(%ebp),%eax
08570c03 +0xaa4:  add    $0x10,%eax
08570c06 +0xaa7:  pop    %ebp
08570c07 +0xaa8:  ret
08570c08 +0xaa9:  push   %ebp
08570c09 +0xaaa:  mov    %esp,%ebp
08570c0b +0xaac:  mov    0x8(%ebp),%eax
08570c0e +0xaaf:  add    $0x10,%eax
08570c11 +0xab2:  pop    %ebp
08570c12 +0xab3:  ret
08570c13 +0xab4:  nop
08570c14 +0xab5:  push   %ebp
08570c15 +0xab6:  mov    %esp,%ebp
08570c17 +0xab8:  push   %esi
08570c18 +0xab9:  push   %ebx
08570c19 +0xaba:  sub    $0x20,%esp
08570c1c +0xabd:  mov    0x8(%ebp),%eax
08570c1f +0xac0:  mov    %eax,(%esp)
08570c22 +0xac3:  call   08570ca6 <+0xb47>
08570c27 +0xac8:  mov    %eax,-0xc(%ebp)
08570c2a +0xacb:  mov    0xc(%ebp),%eax
08570c2d +0xace:  mov    %eax,(%esp)
08570c30 +0xad1:  call   08570cc9 <+0xb6a>
08570c35 +0xad6:  mov    %eax,%ebx
08570c37 +0xad8:  mov    0x8(%ebp),%eax
08570c3a +0xadb:  mov    %eax,(%esp)
08570c3d +0xade:  call   08459102 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xbd18>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xbd18
08570c42 +0xae3:  mov    %ebx,0x8(%esp)
08570c46 +0xae7:  mov    -0xc(%ebp),%edx
08570c49 +0xaea:  mov    %edx,0x4(%esp)
08570c4d +0xaee:  mov    %eax,(%esp)
08570c50 +0xaf1:  call   08570cd2 <+0xb73>
08570c55 +0xaf6:  jmp    08570c8b <+0xb2c>
08570c57 +0xaf8:  mov    %eax,(%esp)
08570c5a +0xafb:  call   08725ce0 <__cxa_begin_catch>
08570c5f +0xb00:  mov    -0xc(%ebp),%eax
08570c62 +0xb03:  mov    %eax,0x4(%esp)
08570c66 +0xb07:  mov    0x8(%ebp),%eax
08570c69 +0xb0a:  mov    %eax,(%esp)
08570c6c +0xb0d:  call   08459124 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xbd3a>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xbd3a
08570c71 +0xb12:  call   08724be0 <__cxa_rethrow>
08570c76 +0xb17:  mov    %edx,%ebx
08570c78 +0xb19:  mov    %eax,%esi
08570c7a +0xb1b:  call   08725c30 <__cxa_end_catch>
08570c7f +0xb20:  mov    %esi,%eax
08570c81 +0xb22:  mov    %ebx,%edx
08570c83 +0xb24:  mov    %eax,(%esp)
08570c86 +0xb27:  call   08ae3750 <_Unwind_Resume>
08570c8b +0xb2c:  mov    -0xc(%ebp),%eax
08570c8e +0xb2f:  add    $0x20,%esp
08570c91 +0xb32:  pop    %ebx
08570c92 +0xb33:  pop    %esi
08570c93 +0xb34:  pop    %ebp
08570c94 +0xb35:  ret
08570c95 +0xb36:  push   %ebp
08570c96 +0xb37:  mov    %esp,%ebp
08570c98 +0xb39:  mov    0x8(%ebp),%eax
08570c9b +0xb3c:  pop    %ebp
08570c9c +0xb3d:  ret
08570c9d +0xb3e:  push   %ebp
08570c9e +0xb3f:  mov    %esp,%ebp
08570ca0 +0xb41:  mov    0x8(%ebp),%eax
08570ca3 +0xb44:  pop    %ebp
08570ca4 +0xb45:  ret
08570ca5 +0xb46:  nop
08570ca6 +0xb47:  push   %ebp
08570ca7 +0xb48:  mov    %esp,%ebp
08570ca9 +0xb4a:  sub    $0x18,%esp
08570cac +0xb4d:  mov    0x8(%ebp),%eax
08570caf +0xb50:  movl   $0x0,0x8(%esp)
08570cb7 +0xb58:  movl   $0x1,0x4(%esp)
08570cbf +0xb60:  mov    %eax,(%esp)
08570cc2 +0xb63:  call   08570d12 <+0xbb3>
08570cc7 +0xb68:  leave
08570cc8 +0xb69:  ret
08570cc9 +0xb6a:  push   %ebp
08570cca +0xb6b:  mov    %esp,%ebp
08570ccc +0xb6d:  mov    0x8(%ebp),%eax
08570ccf +0xb70:  pop    %ebp
08570cd0 +0xb71:  ret
08570cd1 +0xb72:  nop
08570cd2 +0xb73:  push   %ebp
08570cd3 +0xb74:  mov    %esp,%ebp
08570cd5 +0xb76:  push   %ebx
08570cd6 +0xb77:  sub    $0x14,%esp
08570cd9 +0xb7a:  mov    0x10(%ebp),%eax
08570cdc +0xb7d:  mov    %eax,(%esp)
08570cdf +0xb80:  call   08570cc9 <+0xb6a>
08570ce4 +0xb85:  mov    %eax,%ebx
08570ce6 +0xb87:  mov    0xc(%ebp),%eax
08570ce9 +0xb8a:  mov    %eax,0x4(%esp)
08570ced +0xb8e:  movl   $0x2c,(%esp)
08570cf4 +0xb95:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08570cf9 +0xb9a:  mov    %eax,%edx
08570cfb +0xb9c:  test   %edx,%edx
08570cfd +0xb9e:  je     08570d0b <+0xbac>
08570cff +0xba0:  mov    %ebx,0x4(%esp)
08570d03 +0xba4:  mov    %eax,(%esp)
08570d06 +0xba7:  call   08570d4a <+0xbeb>
08570d0b +0xbac:  add    $0x14,%esp
08570d0e +0xbaf:  pop    %ebx
08570d0f +0xbb0:  pop    %ebp
08570d10 +0xbb1:  ret
08570d11 +0xbb2:  nop
08570d12 +0xbb3:  push   %ebp
08570d13 +0xbb4:  mov    %esp,%ebp
08570d15 +0xbb6:  sub    $0x18,%esp
08570d18 +0xbb9:  mov    0x8(%ebp),%eax
08570d1b +0xbbc:  mov    %eax,(%esp)
08570d1e +0xbbf:  call   08570db0 <+0xc51>
08570d23 +0xbc4:  cmp    0xc(%ebp),%eax
08570d26 +0xbc7:  setb   %al
08570d29 +0xbca:  movzbl %al,%eax
08570d2c +0xbcd:  test   %eax,%eax
08570d2e +0xbcf:  setne  %al
08570d31 +0xbd2:  test   %al,%al
08570d33 +0xbd4:  je     08570d3a <+0xbdb>
08570d35 +0xbd6:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
08570d3a +0xbdb:  mov    0xc(%ebp),%eax
08570d3d +0xbde:  imul   $0x2c,%eax,%eax
08570d40 +0xbe1:  mov    %eax,(%esp)
08570d43 +0xbe4:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08570d48 +0xbe9:  leave
08570d49 +0xbea:  ret
08570d4a +0xbeb:  push   %ebp
08570d4b +0xbec:  mov    %esp,%ebp
08570d4d +0xbee:  sub    $0x18,%esp
08570d50 +0xbf1:  mov    0x8(%ebp),%eax
08570d53 +0xbf4:  movl   $0x0,(%eax)
08570d59 +0xbfa:  mov    0x8(%ebp),%eax
08570d5c +0xbfd:  movl   $0x0,0x4(%eax)
08570d63 +0xc04:  mov    0x8(%ebp),%eax
08570d66 +0xc07:  movl   $0x0,0x8(%eax)
08570d6d +0xc0e:  mov    0x8(%ebp),%eax
08570d70 +0xc11:  movl   $0x0,0xc(%eax)
08570d77 +0xc18:  mov    0xc(%ebp),%eax
08570d7a +0xc1b:  mov    %eax,(%esp)
08570d7d +0xc1e:  call   08570cc9 <+0xb6a>
08570d82 +0xc23:  mov    0x8(%ebp),%edx
08570d85 +0xc26:  mov    (%eax),%ecx
08570d87 +0xc28:  mov    %ecx,0x10(%edx)
08570d8a +0xc2b:  mov    0x4(%eax),%ecx
08570d8d +0xc2e:  mov    %ecx,0x14(%edx)
08570d90 +0xc31:  mov    0x8(%eax),%ecx
08570d93 +0xc34:  mov    %ecx,0x18(%edx)
08570d96 +0xc37:  mov    0xc(%eax),%ecx
08570d99 +0xc3a:  mov    %ecx,0x1c(%edx)
08570d9c +0xc3d:  mov    0x10(%eax),%ecx
08570d9f +0xc40:  mov    %ecx,0x20(%edx)
08570da2 +0xc43:  mov    0x14(%eax),%ecx
08570da5 +0xc46:  mov    %ecx,0x24(%edx)
08570da8 +0xc49:  mov    0x18(%eax),%eax
08570dab +0xc4c:  mov    %eax,0x28(%edx)
08570dae +0xc4f:  leave
08570daf +0xc50:  ret
08570db0 +0xc51:  push   %ebp
08570db1 +0xc52:  mov    %esp,%ebp
08570db3 +0xc54:  mov    $0x5d1745d,%eax
08570db8 +0xc59:  pop    %ebp
08570db9 +0xc5a:  ret
08570dba +0xc5b:  nop
08570dbb +0xc5c:  nop
```

## 反编译 C

```c
// <global>::global @ 0x857015f

/* message_counter::CTimeInterval::Create() */

void message_counter::CTimeInterval::_GLOBAL__I_Create(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
