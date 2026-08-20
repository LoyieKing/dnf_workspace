# CDailyScheduleManager

`_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev`

`global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CDailyScheduleManager` | `0x08127277` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08127277  _GLOBAL__I__ZN21CDailyScheduleManagerC2Ev
#           global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()
# range [0x08127277, 0x08127e6f]
08127277 +0x000:  push   %ebp
08127278 +0x001:  mov    %esp,%ebp
0812727a +0x003:  sub    $0x18,%esp
0812727d +0x006:  movl   $0xffff,0x4(%esp)
08127285 +0x00e:  movl   $0x1,(%esp)
0812728c +0x015:  call   08127237 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08127291 +0x01a:  leave
08127292 +0x01b:  ret
08127293 +0x01c:  nop
08127294 +0x01d:  push   %ebp
08127295 +0x01e:  mov    %esp,%ebp
08127297 +0x020:  sub    $0x18,%esp
0812729a +0x023:  mov    0x8(%ebp),%eax
0812729d +0x026:  mov    %eax,(%esp)
081272a0 +0x029:  call   081273e4 <+0x16d>
081272a5 +0x02e:  leave
081272a6 +0x02f:  ret
081272a7 +0x030:  nop
081272a8 +0x031:  push   %ebp
081272a9 +0x032:  mov    %esp,%ebp
081272ab +0x034:  push   %esi
081272ac +0x035:  push   %ebx
081272ad +0x036:  sub    $0x10,%esp
081272b0 +0x039:  mov    0x8(%ebp),%eax
081272b3 +0x03c:  mov    %eax,(%esp)
081272b6 +0x03f:  call   08127466 <+0x1ef>
081272bb +0x044:  mov    0x8(%ebp),%edx
081272be +0x047:  mov    0x4(%edx),%ecx
081272c1 +0x04a:  mov    0x8(%ebp),%edx
081272c4 +0x04d:  mov    (%edx),%edx
081272c6 +0x04f:  mov    %eax,0x8(%esp)
081272ca +0x053:  mov    %ecx,0x4(%esp)
081272ce +0x057:  mov    %edx,(%esp)
081272d1 +0x05a:  call   0812746e <+0x1f7>
081272d6 +0x05f:  jmp    081272f3 <+0x7c>
081272d8 +0x061:  mov    %edx,%ebx
081272da +0x063:  mov    %eax,%esi
081272dc +0x065:  mov    0x8(%ebp),%eax
081272df +0x068:  mov    %eax,(%esp)
081272e2 +0x06b:  call   081273f8 <+0x181>
081272e7 +0x070:  mov    %esi,%eax
081272e9 +0x072:  mov    %ebx,%edx
081272eb +0x074:  mov    %eax,(%esp)
081272ee +0x077:  call   08ae3750 <_Unwind_Resume>
081272f3 +0x07c:  mov    0x8(%ebp),%eax
081272f6 +0x07f:  mov    %eax,(%esp)
081272f9 +0x082:  call   081273f8 <+0x181>
081272fe +0x087:  add    $0x10,%esp
08127301 +0x08a:  pop    %ebx
08127302 +0x08b:  pop    %esi
08127303 +0x08c:  pop    %ebp
08127304 +0x08d:  ret
08127305 +0x08e:  nop
08127306 +0x08f:  push   %ebp
08127307 +0x090:  mov    %esp,%ebp
08127309 +0x092:  mov    0x8(%ebp),%eax
0812730c +0x095:  mov    0x4(%eax),%eax
0812730f +0x098:  mov    %eax,%edx
08127311 +0x09a:  mov    0x8(%ebp),%eax
08127314 +0x09d:  mov    (%eax),%eax
08127316 +0x09f:  mov    %edx,%ecx
08127318 +0x0a1:  sub    %eax,%ecx
0812731a +0x0a3:  mov    %ecx,%eax
0812731c +0x0a5:  sar    $0x2,%eax
0812731f +0x0a8:  imul   $0x38e38e39,%eax,%eax
08127325 +0x0ae:  pop    %ebp
08127326 +0x0af:  ret
08127327 +0x0b0:  nop
08127328 +0x0b1:  push   %ebp
08127329 +0x0b2:  mov    %esp,%ebp
0812732b +0x0b4:  mov    0x8(%ebp),%eax
0812732e +0x0b7:  mov    (%eax),%ecx
08127330 +0x0b9:  mov    0xc(%ebp),%edx
08127333 +0x0bc:  mov    %edx,%eax
08127335 +0x0be:  shl    $0x3,%eax
08127338 +0x0c1:  add    %edx,%eax
0812733a +0x0c3:  shl    $0x2,%eax
0812733d +0x0c6:  lea    (%ecx,%eax,1),%eax
08127340 +0x0c9:  pop    %ebp
08127341 +0x0ca:  ret
08127342 +0x0cb:  push   %ebp
08127343 +0x0cc:  mov    %esp,%ebp
08127345 +0x0ce:  sub    $0x28,%esp
08127348 +0x0d1:  mov    0x8(%ebp),%eax
0812734b +0x0d4:  mov    0x4(%eax),%edx
0812734e +0x0d7:  mov    0x8(%ebp),%eax
08127351 +0x0da:  mov    0x8(%eax),%eax
08127354 +0x0dd:  cmp    %eax,%edx
08127356 +0x0df:  je     08127385 <+0x10e>
08127358 +0x0e1:  mov    0x8(%ebp),%eax
0812735b +0x0e4:  mov    0x4(%eax),%edx
0812735e +0x0e7:  mov    0x8(%ebp),%eax
08127361 +0x0ea:  mov    0xc(%ebp),%ecx
08127364 +0x0ed:  mov    %ecx,0x8(%esp)
08127368 +0x0f1:  mov    %edx,0x4(%esp)
0812736c +0x0f5:  mov    %eax,(%esp)
0812736f +0x0f8:  call   08127488 <+0x211>
08127374 +0x0fd:  mov    0x8(%ebp),%eax
08127377 +0x100:  mov    0x4(%eax),%eax
0812737a +0x103:  lea    0x24(%eax),%edx
0812737d +0x106:  mov    0x8(%ebp),%eax
08127380 +0x109:  mov    %edx,0x4(%eax)
08127383 +0x10c:  jmp    081273b3 <+0x13c>
08127385 +0x10e:  lea    -0xc(%ebp),%eax
08127388 +0x111:  mov    0x8(%ebp),%edx
0812738b +0x114:  mov    %edx,0x4(%esp)
0812738f +0x118:  mov    %eax,(%esp)
08127392 +0x11b:  call   081274e0 <+0x269>
08127397 +0x120:  sub    $0x4,%esp
0812739a +0x123:  mov    0xc(%ebp),%eax
0812739d +0x126:  mov    %eax,0x8(%esp)
081273a1 +0x12a:  mov    -0xc(%ebp),%eax
081273a4 +0x12d:  mov    %eax,0x4(%esp)
081273a8 +0x131:  mov    0x8(%ebp),%eax
081273ab +0x134:  mov    %eax,(%esp)
081273ae +0x137:  call   08127506 <+0x28f>
081273b3 +0x13c:  leave
081273b4 +0x13d:  ret
081273b5 +0x13e:  nop
081273b6 +0x13f:  push   %ebp
081273b7 +0x140:  mov    %esp,%ebp
081273b9 +0x142:  mov    0x8(%ebp),%eax
081273bc +0x145:  mov    (%eax),%ecx
081273be +0x147:  mov    0xc(%ebp),%edx
081273c1 +0x14a:  mov    %edx,%eax
081273c3 +0x14c:  shl    $0x3,%eax
081273c6 +0x14f:  add    %edx,%eax
081273c8 +0x151:  shl    $0x2,%eax
081273cb +0x154:  lea    (%ecx,%eax,1),%eax
081273ce +0x157:  pop    %ebp
081273cf +0x158:  ret
081273d0 +0x159:  push   %ebp
081273d1 +0x15a:  mov    %esp,%ebp
081273d3 +0x15c:  sub    $0x18,%esp
081273d6 +0x15f:  mov    0x8(%ebp),%eax
081273d9 +0x162:  mov    %eax,(%esp)
081273dc +0x165:  call   08127838 <+0x5c1>
081273e1 +0x16a:  leave
081273e2 +0x16b:  ret
081273e3 +0x16c:  nop
081273e4 +0x16d:  push   %ebp
081273e5 +0x16e:  mov    %esp,%ebp
081273e7 +0x170:  sub    $0x18,%esp
081273ea +0x173:  mov    0x8(%ebp),%eax
081273ed +0x176:  mov    %eax,(%esp)
081273f0 +0x179:  call   08127808 <+0x591>
081273f5 +0x17e:  leave
081273f6 +0x17f:  ret
081273f7 +0x180:  nop
081273f8 +0x181:  push   %ebp
081273f9 +0x182:  mov    %esp,%ebp
081273fb +0x184:  push   %esi
081273fc +0x185:  push   %ebx
081273fd +0x186:  sub    $0x10,%esp
08127400 +0x189:  mov    0x8(%ebp),%eax
08127403 +0x18c:  mov    0x8(%eax),%eax
08127406 +0x18f:  mov    %eax,%edx
08127408 +0x191:  mov    0x8(%ebp),%eax
0812740b +0x194:  mov    (%eax),%eax
0812740d +0x196:  mov    %edx,%ecx
0812740f +0x198:  sub    %eax,%ecx
08127411 +0x19a:  mov    %ecx,%eax
08127413 +0x19c:  sar    $0x2,%eax
08127416 +0x19f:  imul   $0x38e38e39,%eax,%eax
0812741c +0x1a5:  mov    %eax,%edx
0812741e +0x1a7:  mov    0x8(%ebp),%eax
08127421 +0x1aa:  mov    (%eax),%eax
08127423 +0x1ac:  mov    %edx,0x8(%esp)
08127427 +0x1b0:  mov    %eax,0x4(%esp)
0812742b +0x1b4:  mov    0x8(%ebp),%eax
0812742e +0x1b7:  mov    %eax,(%esp)
08127431 +0x1ba:  call   0812784c <+0x5d5>
08127436 +0x1bf:  jmp    08127453 <+0x1dc>
08127438 +0x1c1:  mov    %edx,%ebx
0812743a +0x1c3:  mov    %eax,%esi
0812743c +0x1c5:  mov    0x8(%ebp),%eax
0812743f +0x1c8:  mov    %eax,(%esp)
08127442 +0x1cb:  call   081273d0 <+0x159>
08127447 +0x1d0:  mov    %esi,%eax
08127449 +0x1d2:  mov    %ebx,%edx
0812744b +0x1d4:  mov    %eax,(%esp)
0812744e +0x1d7:  call   08ae3750 <_Unwind_Resume>
08127453 +0x1dc:  mov    0x8(%ebp),%eax
08127456 +0x1df:  mov    %eax,(%esp)
08127459 +0x1e2:  call   081273d0 <+0x159>
0812745e +0x1e7:  add    $0x10,%esp
08127461 +0x1ea:  pop    %ebx
08127462 +0x1eb:  pop    %esi
08127463 +0x1ec:  pop    %ebp
08127464 +0x1ed:  ret
08127465 +0x1ee:  nop
08127466 +0x1ef:  push   %ebp
08127467 +0x1f0:  mov    %esp,%ebp
08127469 +0x1f2:  mov    0x8(%ebp),%eax
0812746c +0x1f5:  pop    %ebp
0812746d +0x1f6:  ret
0812746e +0x1f7:  push   %ebp
0812746f +0x1f8:  mov    %esp,%ebp
08127471 +0x1fa:  sub    $0x18,%esp
08127474 +0x1fd:  mov    0xc(%ebp),%eax
08127477 +0x200:  mov    %eax,0x4(%esp)
0812747b +0x204:  mov    0x8(%ebp),%eax
0812747e +0x207:  mov    %eax,(%esp)
08127481 +0x20a:  call   08127873 <+0x5fc>
08127486 +0x20f:  leave
08127487 +0x210:  ret
08127488 +0x211:  push   %ebp
08127489 +0x212:  mov    %esp,%ebp
0812748b +0x214:  sub    $0x18,%esp
0812748e +0x217:  mov    0xc(%ebp),%eax
08127491 +0x21a:  mov    %eax,0x4(%esp)
08127495 +0x21e:  movl   $0x24,(%esp)
0812749c +0x225:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
081274a1 +0x22a:  mov    %eax,%edx
081274a3 +0x22c:  test   %edx,%edx
081274a5 +0x22e:  je     081274de <+0x267>
081274a7 +0x230:  mov    0x10(%ebp),%edx
081274aa +0x233:  mov    (%edx),%ecx
081274ac +0x235:  mov    %ecx,(%eax)
081274ae +0x237:  mov    0x4(%edx),%ecx
081274b1 +0x23a:  mov    %ecx,0x4(%eax)
081274b4 +0x23d:  mov    0x8(%edx),%ecx
081274b7 +0x240:  mov    %ecx,0x8(%eax)
081274ba +0x243:  mov    0xc(%edx),%ecx
081274bd +0x246:  mov    %ecx,0xc(%eax)
081274c0 +0x249:  mov    0x10(%edx),%ecx
081274c3 +0x24c:  mov    %ecx,0x10(%eax)
081274c6 +0x24f:  mov    0x14(%edx),%ecx
081274c9 +0x252:  mov    %ecx,0x14(%eax)
081274cc +0x255:  mov    0x18(%edx),%ecx
081274cf +0x258:  mov    %ecx,0x18(%eax)
081274d2 +0x25b:  mov    0x1c(%edx),%ecx
081274d5 +0x25e:  mov    %ecx,0x1c(%eax)
081274d8 +0x261:  mov    0x20(%edx),%edx
081274db +0x264:  mov    %edx,0x20(%eax)
081274de +0x267:  leave
081274df +0x268:  ret
081274e0 +0x269:  push   %ebp
081274e1 +0x26a:  mov    %esp,%ebp
081274e3 +0x26c:  push   %ebx
081274e4 +0x26d:  sub    $0x14,%esp
081274e7 +0x270:  mov    0x8(%ebp),%ebx
081274ea +0x273:  mov    0xc(%ebp),%eax
081274ed +0x276:  add    $0x4,%eax
081274f0 +0x279:  mov    %eax,0x4(%esp)
081274f4 +0x27d:  mov    %ebx,(%esp)
081274f7 +0x280:  call   0812788e <+0x617>
081274fc +0x285:  mov    %ebx,%eax
081274fe +0x287:  add    $0x14,%esp
08127501 +0x28a:  pop    %ebx
08127502 +0x28b:  pop    %ebp
08127503 +0x28c:  ret    $0x4
08127506 +0x28f:  push   %ebp
08127507 +0x290:  mov    %esp,%ebp
08127509 +0x292:  push   %esi
0812750a +0x293:  push   %ebx
0812750b +0x294:  sub    $0x30,%esp
0812750e +0x297:  mov    0x8(%ebp),%eax
08127511 +0x29a:  mov    0x4(%eax),%edx
08127514 +0x29d:  mov    0x8(%ebp),%eax
08127517 +0x2a0:  mov    0x8(%eax),%eax
0812751a +0x2a3:  cmp    %eax,%edx
0812751c +0x2a5:  je     081275db <+0x364>
08127522 +0x2ab:  mov    0x8(%ebp),%eax
08127525 +0x2ae:  mov    0x4(%eax),%eax
08127528 +0x2b1:  sub    $0x24,%eax
0812752b +0x2b4:  mov    %eax,(%esp)
0812752e +0x2b7:  call   0812789d <+0x626>
08127533 +0x2bc:  mov    0x8(%ebp),%edx
08127536 +0x2bf:  mov    0x4(%edx),%ecx
08127539 +0x2c2:  mov    0x8(%ebp),%edx
0812753c +0x2c5:  mov    %eax,0x8(%esp)
08127540 +0x2c9:  mov    %ecx,0x4(%esp)
08127544 +0x2cd:  mov    %edx,(%esp)
08127547 +0x2d0:  call   081278a6 <+0x62f>
0812754c +0x2d5:  mov    0x8(%ebp),%eax
0812754f +0x2d8:  mov    0x4(%eax),%eax
08127552 +0x2db:  lea    0x24(%eax),%edx
08127555 +0x2de:  mov    0x8(%ebp),%eax
08127558 +0x2e1:  mov    %edx,0x4(%eax)
0812755b +0x2e4:  mov    0x8(%ebp),%eax
0812755e +0x2e7:  mov    0x4(%eax),%eax
08127561 +0x2ea:  lea    -0x24(%eax),%esi
08127564 +0x2ed:  mov    0x8(%ebp),%eax
08127567 +0x2f0:  mov    0x4(%eax),%eax
0812756a +0x2f3:  lea    -0x48(%eax),%ebx
0812756d +0x2f6:  lea    0xc(%ebp),%eax
08127570 +0x2f9:  mov    %eax,(%esp)
08127573 +0x2fc:  call   0812793c <+0x6c5>
08127578 +0x301:  mov    (%eax),%eax
0812757a +0x303:  mov    %esi,0x8(%esp)
0812757e +0x307:  mov    %ebx,0x4(%esp)
08127582 +0x30b:  mov    %eax,(%esp)
08127585 +0x30e:  call   08127944 <+0x6cd>
0812758a +0x313:  lea    0xc(%ebp),%eax
0812758d +0x316:  mov    %eax,(%esp)
08127590 +0x319:  call   08127984 <+0x70d>
08127595 +0x31e:  mov    %eax,%ebx
08127597 +0x320:  mov    0x10(%ebp),%eax
0812759a +0x323:  mov    %eax,(%esp)
0812759d +0x326:  call   0812797c <+0x705>
081275a2 +0x32b:  mov    (%eax),%edx
081275a4 +0x32d:  mov    %edx,(%ebx)
081275a6 +0x32f:  mov    0x4(%eax),%edx
081275a9 +0x332:  mov    %edx,0x4(%ebx)
081275ac +0x335:  mov    0x8(%eax),%edx
081275af +0x338:  mov    %edx,0x8(%ebx)
081275b2 +0x33b:  mov    0xc(%eax),%edx
081275b5 +0x33e:  mov    %edx,0xc(%ebx)
081275b8 +0x341:  mov    0x10(%eax),%edx
081275bb +0x344:  mov    %edx,0x10(%ebx)
081275be +0x347:  mov    0x14(%eax),%edx
081275c1 +0x34a:  mov    %edx,0x14(%ebx)
081275c4 +0x34d:  mov    0x18(%eax),%edx
081275c7 +0x350:  mov    %edx,0x18(%ebx)
081275ca +0x353:  mov    0x1c(%eax),%edx
081275cd +0x356:  mov    %edx,0x1c(%ebx)
081275d0 +0x359:  mov    0x20(%eax),%eax
081275d3 +0x35c:  mov    %eax,0x20(%ebx)
081275d6 +0x35f:  jmp    081277fd <+0x586>
081275db +0x364:  movl   $"vector::_M_insert_aux",0x8(%esp)
081275e3 +0x36c:  movl   $0x1,0x4(%esp)
081275eb +0x374:  mov    0x8(%ebp),%eax
081275ee +0x377:  mov    %eax,(%esp)
081275f1 +0x37a:  call   0812798e <+0x717>
081275f6 +0x37f:  mov    %eax,-0x18(%ebp)
081275f9 +0x382:  lea    -0x1c(%ebp),%eax
081275fc +0x385:  mov    0x8(%ebp),%edx
081275ff +0x388:  mov    %edx,0x4(%esp)
08127603 +0x38c:  mov    %eax,(%esp)
08127606 +0x38f:  call   08127a34 <+0x7bd>
0812760b +0x394:  sub    $0x4,%esp
0812760e +0x397:  lea    -0x1c(%ebp),%eax
08127611 +0x39a:  mov    %eax,0x4(%esp)
08127615 +0x39e:  lea    0xc(%ebp),%eax
08127618 +0x3a1:  mov    %eax,(%esp)
0812761b +0x3a4:  call   08127a57 <+0x7e0>
08127620 +0x3a9:  mov    %eax,-0x14(%ebp)
08127623 +0x3ac:  mov    0x8(%ebp),%eax
08127626 +0x3af:  mov    -0x18(%ebp),%edx
08127629 +0x3b2:  mov    %edx,0x4(%esp)
0812762d +0x3b6:  mov    %eax,(%esp)
08127630 +0x3b9:  call   08127a90 <+0x819>
08127635 +0x3be:  mov    %eax,-0x10(%ebp)
08127638 +0x3c1:  mov    -0x10(%ebp),%eax
0812763b +0x3c4:  mov    %eax,-0xc(%ebp)
0812763e +0x3c7:  mov    0x10(%ebp),%eax
08127641 +0x3ca:  mov    %eax,(%esp)
08127644 +0x3cd:  call   0812797c <+0x705>
08127649 +0x3d2:  mov    %eax,%ecx
0812764b +0x3d4:  mov    -0x14(%ebp),%edx
0812764e +0x3d7:  mov    %edx,%eax
08127650 +0x3d9:  shl    $0x3,%eax
08127653 +0x3dc:  add    %edx,%eax
08127655 +0x3de:  shl    $0x2,%eax
08127658 +0x3e1:  mov    %eax,%edx
0812765a +0x3e3:  add    -0x10(%ebp),%edx
0812765d +0x3e6:  mov    0x8(%ebp),%eax
08127660 +0x3e9:  mov    %ecx,0x8(%esp)
08127664 +0x3ed:  mov    %edx,0x4(%esp)
08127668 +0x3f1:  mov    %eax,(%esp)
0812766b +0x3f4:  call   08127488 <+0x211>
08127670 +0x3f9:  movl   $0x0,-0xc(%ebp)
08127677 +0x400:  mov    0x8(%ebp),%eax
0812767a +0x403:  mov    %eax,(%esp)
0812767d +0x406:  call   08127466 <+0x1ef>
08127682 +0x40b:  mov    %eax,%ebx
08127684 +0x40d:  lea    0xc(%ebp),%eax
08127687 +0x410:  mov    %eax,(%esp)
0812768a +0x413:  call   0812793c <+0x6c5>
0812768f +0x418:  mov    (%eax),%edx
08127691 +0x41a:  mov    0x8(%ebp),%eax
08127694 +0x41d:  mov    (%eax),%eax
08127696 +0x41f:  mov    %ebx,0xc(%esp)
0812769a +0x423:  mov    -0x10(%ebp),%ecx
0812769d +0x426:  mov    %ecx,0x8(%esp)
081276a1 +0x42a:  mov    %edx,0x4(%esp)
081276a5 +0x42e:  mov    %eax,(%esp)
081276a8 +0x431:  call   08127abf <+0x848>
081276ad +0x436:  mov    %eax,-0xc(%ebp)
081276b0 +0x439:  addl   $0x24,-0xc(%ebp)
081276b4 +0x43d:  mov    0x8(%ebp),%eax
081276b7 +0x440:  mov    %eax,(%esp)
081276ba +0x443:  call   08127466 <+0x1ef>
081276bf +0x448:  mov    %eax,%ebx
081276c1 +0x44a:  mov    0x8(%ebp),%eax
081276c4 +0x44d:  mov    0x4(%eax),%esi
081276c7 +0x450:  lea    0xc(%ebp),%eax
081276ca +0x453:  mov    %eax,(%esp)
081276cd +0x456:  call   0812793c <+0x6c5>
081276d2 +0x45b:  mov    (%eax),%eax
081276d4 +0x45d:  mov    %ebx,0xc(%esp)
081276d8 +0x461:  mov    -0xc(%ebp),%edx
081276db +0x464:  mov    %edx,0x8(%esp)
081276df +0x468:  mov    %esi,0x4(%esp)
081276e3 +0x46c:  mov    %eax,(%esp)
081276e6 +0x46f:  call   08127abf <+0x848>
081276eb +0x474:  mov    %eax,-0xc(%ebp)
081276ee +0x477:  mov    0x8(%ebp),%eax
081276f1 +0x47a:  mov    %eax,(%esp)
081276f4 +0x47d:  call   08127466 <+0x1ef>
081276f9 +0x482:  mov    0x8(%ebp),%edx
081276fc +0x485:  mov    0x4(%edx),%ecx
081276ff +0x488:  mov    0x8(%ebp),%edx
08127702 +0x48b:  mov    (%edx),%edx
08127704 +0x48d:  mov    %eax,0x8(%esp)
08127708 +0x491:  mov    %ecx,0x4(%esp)
0812770c +0x495:  mov    %edx,(%esp)
0812770f +0x498:  call   0812746e <+0x1f7>
08127714 +0x49d:  mov    0x8(%ebp),%eax
08127717 +0x4a0:  mov    0x8(%eax),%eax
0812771a +0x4a3:  mov    %eax,%edx
0812771c +0x4a5:  mov    0x8(%ebp),%eax
0812771f +0x4a8:  mov    (%eax),%eax
08127721 +0x4aa:  mov    %edx,%ecx
08127723 +0x4ac:  sub    %eax,%ecx
08127725 +0x4ae:  mov    %ecx,%eax
08127727 +0x4b0:  sar    $0x2,%eax
0812772a +0x4b3:  imul   $0x38e38e39,%eax,%eax
08127730 +0x4b9:  mov    %eax,%ecx
08127732 +0x4bb:  mov    0x8(%ebp),%eax
08127735 +0x4be:  mov    (%eax),%edx
08127737 +0x4c0:  mov    0x8(%ebp),%eax
0812773a +0x4c3:  mov    %ecx,0x8(%esp)
0812773e +0x4c7:  mov    %edx,0x4(%esp)
08127742 +0x4cb:  mov    %eax,(%esp)
08127745 +0x4ce:  call   0812784c <+0x5d5>
0812774a +0x4d3:  mov    0x8(%ebp),%eax
0812774d +0x4d6:  mov    -0x10(%ebp),%edx
08127750 +0x4d9:  mov    %edx,(%eax)
08127752 +0x4db:  mov    0x8(%ebp),%eax
08127755 +0x4de:  mov    -0xc(%ebp),%edx
08127758 +0x4e1:  mov    %edx,0x4(%eax)
0812775b +0x4e4:  mov    -0x18(%ebp),%edx
0812775e +0x4e7:  mov    %edx,%eax
08127760 +0x4e9:  shl    $0x3,%eax
08127763 +0x4ec:  add    %edx,%eax
08127765 +0x4ee:  shl    $0x2,%eax
08127768 +0x4f1:  mov    %eax,%edx
0812776a +0x4f3:  add    -0x10(%ebp),%edx
0812776d +0x4f6:  mov    0x8(%ebp),%eax
08127770 +0x4f9:  mov    %edx,0x8(%eax)
08127773 +0x4fc:  jmp    081277fd <+0x586>
08127778 +0x501:  mov    %eax,(%esp)
0812777b +0x504:  call   08725ce0 <__cxa_begin_catch>
08127780 +0x509:  cmpl   $0x0,-0xc(%ebp)
08127784 +0x50d:  jne    081277a9 <+0x532>
08127786 +0x50f:  mov    -0x14(%ebp),%edx
08127789 +0x512:  mov    %edx,%eax
0812778b +0x514:  shl    $0x3,%eax
0812778e +0x517:  add    %edx,%eax
08127790 +0x519:  shl    $0x2,%eax
08127793 +0x51c:  mov    %eax,%edx
08127795 +0x51e:  add    -0x10(%ebp),%edx
08127798 +0x521:  mov    0x8(%ebp),%eax
0812779b +0x524:  mov    %edx,0x4(%esp)
0812779f +0x528:  mov    %eax,(%esp)
081277a2 +0x52b:  call   08127b18 <+0x8a1>
081277a7 +0x530:  jmp    081277ca <+0x553>
081277a9 +0x532:  mov    0x8(%ebp),%eax
081277ac +0x535:  mov    %eax,(%esp)
081277af +0x538:  call   08127466 <+0x1ef>
081277b4 +0x53d:  mov    %eax,0x8(%esp)
081277b8 +0x541:  mov    -0xc(%ebp),%eax
081277bb +0x544:  mov    %eax,0x4(%esp)
081277bf +0x548:  mov    -0x10(%ebp),%eax
081277c2 +0x54b:  mov    %eax,(%esp)
081277c5 +0x54e:  call   0812746e <+0x1f7>
081277ca +0x553:  mov    0x8(%ebp),%eax
081277cd +0x556:  mov    -0x18(%ebp),%edx
081277d0 +0x559:  mov    %edx,0x8(%esp)
081277d4 +0x55d:  mov    -0x10(%ebp),%edx
081277d7 +0x560:  mov    %edx,0x4(%esp)
081277db +0x564:  mov    %eax,(%esp)
081277de +0x567:  call   0812784c <+0x5d5>
081277e3 +0x56c:  call   08724be0 <__cxa_rethrow>
081277e8 +0x571:  mov    %edx,%ebx
081277ea +0x573:  mov    %eax,%esi
081277ec +0x575:  call   08725c30 <__cxa_end_catch>
081277f1 +0x57a:  mov    %esi,%eax
081277f3 +0x57c:  mov    %ebx,%edx
081277f5 +0x57e:  mov    %eax,(%esp)
081277f8 +0x581:  call   08ae3750 <_Unwind_Resume>
081277fd +0x586:  lea    -0x8(%ebp),%esp
08127800 +0x589:  add    $0x0,%esp
08127803 +0x58c:  pop    %ebx
08127804 +0x58d:  pop    %esi
08127805 +0x58e:  pop    %ebp
08127806 +0x58f:  ret
08127807 +0x590:  nop
08127808 +0x591:  push   %ebp
08127809 +0x592:  mov    %esp,%ebp
0812780b +0x594:  sub    $0x18,%esp
0812780e +0x597:  mov    0x8(%ebp),%eax
08127811 +0x59a:  mov    %eax,(%esp)
08127814 +0x59d:  call   08127b2c <+0x8b5>
08127819 +0x5a2:  mov    0x8(%ebp),%eax
0812781c +0x5a5:  movl   $0x0,(%eax)
08127822 +0x5ab:  mov    0x8(%ebp),%eax
08127825 +0x5ae:  movl   $0x0,0x4(%eax)
0812782c +0x5b5:  mov    0x8(%ebp),%eax
0812782f +0x5b8:  movl   $0x0,0x8(%eax)
08127836 +0x5bf:  leave
08127837 +0x5c0:  ret
08127838 +0x5c1:  push   %ebp
08127839 +0x5c2:  mov    %esp,%ebp
0812783b +0x5c4:  sub    $0x18,%esp
0812783e +0x5c7:  mov    0x8(%ebp),%eax
08127841 +0x5ca:  mov    %eax,(%esp)
08127844 +0x5cd:  call   08127b40 <+0x8c9>
08127849 +0x5d2:  leave
0812784a +0x5d3:  ret
0812784b +0x5d4:  nop
0812784c +0x5d5:  push   %ebp
0812784d +0x5d6:  mov    %esp,%ebp
0812784f +0x5d8:  sub    $0x18,%esp
08127852 +0x5db:  cmpl   $0x0,0xc(%ebp)
08127856 +0x5df:  je     08127871 <+0x5fa>
08127858 +0x5e1:  mov    0x8(%ebp),%eax
0812785b +0x5e4:  mov    0x10(%ebp),%edx
0812785e +0x5e7:  mov    %edx,0x8(%esp)
08127862 +0x5eb:  mov    0xc(%ebp),%edx
08127865 +0x5ee:  mov    %edx,0x4(%esp)
08127869 +0x5f2:  mov    %eax,(%esp)
0812786c +0x5f5:  call   08127b46 <+0x8cf>
08127871 +0x5fa:  leave
08127872 +0x5fb:  ret
08127873 +0x5fc:  push   %ebp
08127874 +0x5fd:  mov    %esp,%ebp
08127876 +0x5ff:  sub    $0x18,%esp
08127879 +0x602:  mov    0xc(%ebp),%eax
0812787c +0x605:  mov    %eax,0x4(%esp)
08127880 +0x609:  mov    0x8(%ebp),%eax
08127883 +0x60c:  mov    %eax,(%esp)
08127886 +0x60f:  call   08127b59 <+0x8e2>
0812788b +0x614:  leave
0812788c +0x615:  ret
0812788d +0x616:  nop
0812788e +0x617:  push   %ebp
0812788f +0x618:  mov    %esp,%ebp
08127891 +0x61a:  mov    0xc(%ebp),%eax
08127894 +0x61d:  mov    (%eax),%edx
08127896 +0x61f:  mov    0x8(%ebp),%eax
08127899 +0x622:  mov    %edx,(%eax)
0812789b +0x624:  pop    %ebp
0812789c +0x625:  ret
0812789d +0x626:  push   %ebp
0812789e +0x627:  mov    %esp,%ebp
081278a0 +0x629:  mov    0x8(%ebp),%eax
081278a3 +0x62c:  pop    %ebp
081278a4 +0x62d:  ret
081278a5 +0x62e:  nop
081278a6 +0x62f:  push   %ebp
081278a7 +0x630:  mov    %esp,%ebp
081278a9 +0x632:  sub    $0x48,%esp
081278ac +0x635:  mov    0x10(%ebp),%eax
081278af +0x638:  mov    %eax,(%esp)
081278b2 +0x63b:  call   08127b5e <+0x8e7>
081278b7 +0x640:  mov    (%eax),%edx
081278b9 +0x642:  mov    %edx,-0x2c(%ebp)
081278bc +0x645:  mov    0x4(%eax),%edx
081278bf +0x648:  mov    %edx,-0x28(%ebp)
081278c2 +0x64b:  mov    0x8(%eax),%edx
081278c5 +0x64e:  mov    %edx,-0x24(%ebp)
081278c8 +0x651:  mov    0xc(%eax),%edx
081278cb +0x654:  mov    %edx,-0x20(%ebp)
081278ce +0x657:  mov    0x10(%eax),%edx
081278d1 +0x65a:  mov    %edx,-0x1c(%ebp)
081278d4 +0x65d:  mov    0x14(%eax),%edx
081278d7 +0x660:  mov    %edx,-0x18(%ebp)
081278da +0x663:  mov    0x18(%eax),%edx
081278dd +0x666:  mov    %edx,-0x14(%ebp)
081278e0 +0x669:  mov    0x1c(%eax),%edx
081278e3 +0x66c:  mov    %edx,-0x10(%ebp)
081278e6 +0x66f:  mov    0x20(%eax),%eax
081278e9 +0x672:  mov    %eax,-0xc(%ebp)
081278ec +0x675:  mov    0xc(%ebp),%eax
081278ef +0x678:  mov    %eax,0x4(%esp)
081278f3 +0x67c:  movl   $0x24,(%esp)
081278fa +0x683:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
081278ff +0x688:  mov    %eax,%edx
08127901 +0x68a:  test   %edx,%edx
08127903 +0x68c:  je     0812793a <+0x6c3>
08127905 +0x68e:  mov    -0x2c(%ebp),%edx
08127908 +0x691:  mov    %edx,(%eax)
0812790a +0x693:  mov    -0x28(%ebp),%edx
0812790d +0x696:  mov    %edx,0x4(%eax)
08127910 +0x699:  mov    -0x24(%ebp),%edx
08127913 +0x69c:  mov    %edx,0x8(%eax)
08127916 +0x69f:  mov    -0x20(%ebp),%edx
08127919 +0x6a2:  mov    %edx,0xc(%eax)
0812791c +0x6a5:  mov    -0x1c(%ebp),%edx
0812791f +0x6a8:  mov    %edx,0x10(%eax)
08127922 +0x6ab:  mov    -0x18(%ebp),%edx
08127925 +0x6ae:  mov    %edx,0x14(%eax)
08127928 +0x6b1:  mov    -0x14(%ebp),%edx
0812792b +0x6b4:  mov    %edx,0x18(%eax)
0812792e +0x6b7:  mov    -0x10(%ebp),%edx
08127931 +0x6ba:  mov    %edx,0x1c(%eax)
08127934 +0x6bd:  mov    -0xc(%ebp),%edx
08127937 +0x6c0:  mov    %edx,0x20(%eax)
0812793a +0x6c3:  leave
0812793b +0x6c4:  ret
0812793c +0x6c5:  push   %ebp
0812793d +0x6c6:  mov    %esp,%ebp
0812793f +0x6c8:  mov    0x8(%ebp),%eax
08127942 +0x6cb:  pop    %ebp
08127943 +0x6cc:  ret
08127944 +0x6cd:  push   %ebp
08127945 +0x6ce:  mov    %esp,%ebp
08127947 +0x6d0:  push   %ebx
08127948 +0x6d1:  sub    $0x14,%esp
0812794b +0x6d4:  mov    0xc(%ebp),%eax
0812794e +0x6d7:  mov    %eax,(%esp)
08127951 +0x6da:  call   08127b66 <+0x8ef>
08127956 +0x6df:  mov    %eax,%ebx
08127958 +0x6e1:  mov    0x8(%ebp),%eax
0812795b +0x6e4:  mov    %eax,(%esp)
0812795e +0x6e7:  call   08127b66 <+0x8ef>
08127963 +0x6ec:  mov    0x10(%ebp),%edx
08127966 +0x6ef:  mov    %edx,0x8(%esp)
0812796a +0x6f3:  mov    %ebx,0x4(%esp)
0812796e +0x6f7:  mov    %eax,(%esp)
08127971 +0x6fa:  call   08127b6e <+0x8f7>
08127976 +0x6ff:  add    $0x14,%esp
08127979 +0x702:  pop    %ebx
0812797a +0x703:  pop    %ebp
0812797b +0x704:  ret
0812797c +0x705:  push   %ebp
0812797d +0x706:  mov    %esp,%ebp
0812797f +0x708:  mov    0x8(%ebp),%eax
08127982 +0x70b:  pop    %ebp
08127983 +0x70c:  ret
08127984 +0x70d:  push   %ebp
08127985 +0x70e:  mov    %esp,%ebp
08127987 +0x710:  mov    0x8(%ebp),%eax
0812798a +0x713:  mov    (%eax),%eax
0812798c +0x715:  pop    %ebp
0812798d +0x716:  ret
0812798e +0x717:  push   %ebp
0812798f +0x718:  mov    %esp,%ebp
08127991 +0x71a:  push   %ebx
08127992 +0x71b:  sub    $0x24,%esp
08127995 +0x71e:  mov    0x8(%ebp),%eax
08127998 +0x721:  mov    %eax,(%esp)
0812799b +0x724:  call   08127bb2 <+0x93b>
081279a0 +0x729:  mov    %eax,%ebx
081279a2 +0x72b:  mov    0x8(%ebp),%eax
081279a5 +0x72e:  mov    %eax,(%esp)
081279a8 +0x731:  call   08127306 <+0x8f>
081279ad +0x736:  mov    %ebx,%edx
081279af +0x738:  sub    %eax,%edx
081279b1 +0x73a:  mov    0xc(%ebp),%eax
081279b4 +0x73d:  cmp    %eax,%edx
081279b6 +0x73f:  setb   %al
081279b9 +0x742:  test   %al,%al
081279bb +0x744:  je     081279c8 <+0x751>
081279bd +0x746:  mov    0x10(%ebp),%eax
081279c0 +0x749:  mov    %eax,(%esp)
081279c3 +0x74c:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
081279c8 +0x751:  mov    0x8(%ebp),%eax
081279cb +0x754:  mov    %eax,(%esp)
081279ce +0x757:  call   08127306 <+0x8f>
081279d3 +0x75c:  mov    %eax,%ebx
081279d5 +0x75e:  mov    0x8(%ebp),%eax
081279d8 +0x761:  mov    %eax,(%esp)
081279db +0x764:  call   08127306 <+0x8f>
081279e0 +0x769:  mov    %eax,-0x10(%ebp)
081279e3 +0x76c:  lea    0xc(%ebp),%eax
081279e6 +0x76f:  mov    %eax,0x4(%esp)
081279ea +0x773:  lea    -0x10(%ebp),%eax
081279ed +0x776:  mov    %eax,(%esp)
081279f0 +0x779:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
081279f5 +0x77e:  mov    (%eax),%eax
081279f7 +0x780:  lea    (%ebx,%eax,1),%eax
081279fa +0x783:  mov    %eax,-0xc(%ebp)
081279fd +0x786:  mov    0x8(%ebp),%eax
08127a00 +0x789:  mov    %eax,(%esp)
08127a03 +0x78c:  call   08127306 <+0x8f>
08127a08 +0x791:  cmp    -0xc(%ebp),%eax
08127a0b +0x794:  ja     08127a1d <+0x7a6>
08127a0d +0x796:  mov    0x8(%ebp),%eax
08127a10 +0x799:  mov    %eax,(%esp)
08127a13 +0x79c:  call   08127bb2 <+0x93b>
08127a18 +0x7a1:  cmp    -0xc(%ebp),%eax
08127a1b +0x7a4:  jae    08127a2a <+0x7b3>
08127a1d +0x7a6:  mov    0x8(%ebp),%eax
08127a20 +0x7a9:  mov    %eax,(%esp)
08127a23 +0x7ac:  call   08127bb2 <+0x93b>
08127a28 +0x7b1:  jmp    08127a2d <+0x7b6>
08127a2a +0x7b3:  mov    -0xc(%ebp),%eax
08127a2d +0x7b6:  add    $0x24,%esp
08127a30 +0x7b9:  pop    %ebx
08127a31 +0x7ba:  pop    %ebp
08127a32 +0x7bb:  ret
08127a33 +0x7bc:  nop
08127a34 +0x7bd:  push   %ebp
08127a35 +0x7be:  mov    %esp,%ebp
08127a37 +0x7c0:  push   %ebx
08127a38 +0x7c1:  sub    $0x14,%esp
08127a3b +0x7c4:  mov    0x8(%ebp),%ebx
08127a3e +0x7c7:  mov    0xc(%ebp),%eax
08127a41 +0x7ca:  mov    %eax,0x4(%esp)
08127a45 +0x7ce:  mov    %ebx,(%esp)
08127a48 +0x7d1:  call   0812788e <+0x617>
08127a4d +0x7d6:  mov    %ebx,%eax
08127a4f +0x7d8:  add    $0x14,%esp
08127a52 +0x7db:  pop    %ebx
08127a53 +0x7dc:  pop    %ebp
08127a54 +0x7dd:  ret    $0x4
08127a57 +0x7e0:  push   %ebp
08127a58 +0x7e1:  mov    %esp,%ebp
08127a5a +0x7e3:  push   %ebx
08127a5b +0x7e4:  sub    $0x14,%esp
08127a5e +0x7e7:  mov    0x8(%ebp),%eax
08127a61 +0x7ea:  mov    %eax,(%esp)
08127a64 +0x7ed:  call   0812793c <+0x6c5>
08127a69 +0x7f2:  mov    (%eax),%eax
08127a6b +0x7f4:  mov    %eax,%ebx
08127a6d +0x7f6:  mov    0xc(%ebp),%eax
08127a70 +0x7f9:  mov    %eax,(%esp)
08127a73 +0x7fc:  call   0812793c <+0x6c5>
08127a78 +0x801:  mov    (%eax),%eax
08127a7a +0x803:  mov    %ebx,%edx
08127a7c +0x805:  sub    %eax,%edx
08127a7e +0x807:  mov    %edx,%eax
08127a80 +0x809:  sar    $0x2,%eax
08127a83 +0x80c:  imul   $0x38e38e39,%eax,%eax
08127a89 +0x812:  add    $0x14,%esp
08127a8c +0x815:  pop    %ebx
08127a8d +0x816:  pop    %ebp
08127a8e +0x817:  ret
08127a8f +0x818:  nop
08127a90 +0x819:  push   %ebp
08127a91 +0x81a:  mov    %esp,%ebp
08127a93 +0x81c:  sub    $0x18,%esp
08127a96 +0x81f:  cmpl   $0x0,0xc(%ebp)
08127a9a +0x823:  je     08127ab8 <+0x841>
08127a9c +0x825:  mov    0x8(%ebp),%eax
08127a9f +0x828:  movl   $0x0,0x8(%esp)
08127aa7 +0x830:  mov    0xc(%ebp),%edx
08127aaa +0x833:  mov    %edx,0x4(%esp)
08127aae +0x837:  mov    %eax,(%esp)
08127ab1 +0x83a:  call   08127bce <+0x957>
08127ab6 +0x83f:  jmp    08127abd <+0x846>
08127ab8 +0x841:  mov    $0x0,%eax
08127abd +0x846:  leave
08127abe +0x847:  ret
08127abf +0x848:  push   %ebp
08127ac0 +0x849:  mov    %esp,%ebp
08127ac2 +0x84b:  sub    $0x28,%esp
08127ac5 +0x84e:  lea    -0x10(%ebp),%eax
08127ac8 +0x851:  lea    0xc(%ebp),%edx
08127acb +0x854:  mov    %edx,0x4(%esp)
08127acf +0x858:  mov    %eax,(%esp)
08127ad2 +0x85b:  call   08127c0d <+0x996>
08127ad7 +0x860:  sub    $0x4,%esp
08127ada +0x863:  lea    -0xc(%ebp),%eax
08127add +0x866:  lea    0x8(%ebp),%edx
08127ae0 +0x869:  mov    %edx,0x4(%esp)
08127ae4 +0x86d:  mov    %eax,(%esp)
08127ae7 +0x870:  call   08127c0d <+0x996>
08127aec +0x875:  sub    $0x4,%esp
08127aef +0x878:  mov    0x14(%ebp),%eax
08127af2 +0x87b:  mov    %eax,0xc(%esp)
08127af6 +0x87f:  mov    0x10(%ebp),%eax
08127af9 +0x882:  mov    %eax,0x8(%esp)
08127afd +0x886:  mov    -0x10(%ebp),%eax
08127b00 +0x889:  mov    %eax,0x4(%esp)
08127b04 +0x88d:  mov    -0xc(%ebp),%eax
08127b07 +0x890:  mov    %eax,(%esp)
08127b0a +0x893:  call   08127c32 <+0x9bb>
08127b0f +0x898:  leave
08127b10 +0x899:  ret
08127b11 +0x89a:  nop
08127b12 +0x89b:  push   %ebp
08127b13 +0x89c:  mov    %esp,%ebp
08127b15 +0x89e:  pop    %ebp
08127b16 +0x89f:  ret
08127b17 +0x8a0:  nop
08127b18 +0x8a1:  push   %ebp
08127b19 +0x8a2:  mov    %esp,%ebp
08127b1b +0x8a4:  sub    $0x18,%esp
08127b1e +0x8a7:  mov    0xc(%ebp),%eax
08127b21 +0x8aa:  mov    %eax,(%esp)
08127b24 +0x8ad:  call   08127b12 <+0x89b>
08127b29 +0x8b2:  leave
08127b2a +0x8b3:  ret
08127b2b +0x8b4:  nop
08127b2c +0x8b5:  push   %ebp
08127b2d +0x8b6:  mov    %esp,%ebp
08127b2f +0x8b8:  sub    $0x18,%esp
08127b32 +0x8bb:  mov    0x8(%ebp),%eax
08127b35 +0x8be:  mov    %eax,(%esp)
08127b38 +0x8c1:  call   08127c54 <+0x9dd>
08127b3d +0x8c6:  leave
08127b3e +0x8c7:  ret
08127b3f +0x8c8:  nop
08127b40 +0x8c9:  push   %ebp
08127b41 +0x8ca:  mov    %esp,%ebp
08127b43 +0x8cc:  pop    %ebp
08127b44 +0x8cd:  ret
08127b45 +0x8ce:  nop
08127b46 +0x8cf:  push   %ebp
08127b47 +0x8d0:  mov    %esp,%ebp
08127b49 +0x8d2:  sub    $0x18,%esp
08127b4c +0x8d5:  mov    0xc(%ebp),%eax
08127b4f +0x8d8:  mov    %eax,(%esp)
08127b52 +0x8db:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08127b57 +0x8e0:  leave
08127b58 +0x8e1:  ret
08127b59 +0x8e2:  push   %ebp
08127b5a +0x8e3:  mov    %esp,%ebp
08127b5c +0x8e5:  pop    %ebp
08127b5d +0x8e6:  ret
08127b5e +0x8e7:  push   %ebp
08127b5f +0x8e8:  mov    %esp,%ebp
08127b61 +0x8ea:  mov    0x8(%ebp),%eax
08127b64 +0x8ed:  pop    %ebp
08127b65 +0x8ee:  ret
08127b66 +0x8ef:  push   %ebp
08127b67 +0x8f0:  mov    %esp,%ebp
08127b69 +0x8f2:  mov    0x8(%ebp),%eax
08127b6c +0x8f5:  pop    %ebp
08127b6d +0x8f6:  ret
08127b6e +0x8f7:  push   %ebp
08127b6f +0x8f8:  mov    %esp,%ebp
08127b71 +0x8fa:  push   %esi
08127b72 +0x8fb:  push   %ebx
08127b73 +0x8fc:  sub    $0x10,%esp
08127b76 +0x8ff:  mov    0x10(%ebp),%eax
08127b79 +0x902:  mov    %eax,(%esp)
08127b7c +0x905:  call   08127c59 <+0x9e2>
08127b81 +0x90a:  mov    %eax,%esi
08127b83 +0x90c:  mov    0xc(%ebp),%eax
08127b86 +0x90f:  mov    %eax,(%esp)
08127b89 +0x912:  call   08127c59 <+0x9e2>
08127b8e +0x917:  mov    %eax,%ebx
08127b90 +0x919:  mov    0x8(%ebp),%eax
08127b93 +0x91c:  mov    %eax,(%esp)
08127b96 +0x91f:  call   08127c59 <+0x9e2>
08127b9b +0x924:  mov    %esi,0x8(%esp)
08127b9f +0x928:  mov    %ebx,0x4(%esp)
08127ba3 +0x92c:  mov    %eax,(%esp)
08127ba6 +0x92f:  call   08127c61 <+0x9ea>
08127bab +0x934:  add    $0x10,%esp
08127bae +0x937:  pop    %ebx
08127baf +0x938:  pop    %esi
08127bb0 +0x939:  pop    %ebp
08127bb1 +0x93a:  ret
08127bb2 +0x93b:  push   %ebp
08127bb3 +0x93c:  mov    %esp,%ebp
08127bb5 +0x93e:  sub    $0x18,%esp
08127bb8 +0x941:  mov    0x8(%ebp),%eax
08127bbb +0x944:  mov    %eax,(%esp)
08127bbe +0x947:  call   08127c86 <+0xa0f>
08127bc3 +0x94c:  mov    %eax,(%esp)
08127bc6 +0x94f:  call   08127c8e <+0xa17>
08127bcb +0x954:  leave
08127bcc +0x955:  ret
08127bcd +0x956:  nop
08127bce +0x957:  push   %ebp
08127bcf +0x958:  mov    %esp,%ebp
08127bd1 +0x95a:  sub    $0x18,%esp
08127bd4 +0x95d:  mov    0x8(%ebp),%eax
08127bd7 +0x960:  mov    %eax,(%esp)
08127bda +0x963:  call   08127c8e <+0xa17>
08127bdf +0x968:  cmp    0xc(%ebp),%eax
08127be2 +0x96b:  setb   %al
08127be5 +0x96e:  movzbl %al,%eax
08127be8 +0x971:  test   %eax,%eax
08127bea +0x973:  setne  %al
08127bed +0x976:  test   %al,%al
08127bef +0x978:  je     08127bf6 <+0x97f>
08127bf1 +0x97a:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
08127bf6 +0x97f:  mov    0xc(%ebp),%edx
08127bf9 +0x982:  mov    %edx,%eax
08127bfb +0x984:  shl    $0x3,%eax
08127bfe +0x987:  add    %edx,%eax
08127c00 +0x989:  shl    $0x2,%eax
08127c03 +0x98c:  mov    %eax,(%esp)
08127c06 +0x98f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08127c0b +0x994:  leave
08127c0c +0x995:  ret
08127c0d +0x996:  push   %ebp
08127c0e +0x997:  mov    %esp,%ebp
08127c10 +0x999:  push   %ebx
08127c11 +0x99a:  sub    $0x14,%esp
08127c14 +0x99d:  mov    0x8(%ebp),%ebx
08127c17 +0x9a0:  mov    0xc(%ebp),%eax
08127c1a +0x9a3:  mov    (%eax),%eax
08127c1c +0x9a5:  mov    %eax,0x4(%esp)
08127c20 +0x9a9:  mov    %ebx,(%esp)
08127c23 +0x9ac:  call   08127c98 <+0xa21>
08127c28 +0x9b1:  mov    %ebx,%eax
08127c2a +0x9b3:  add    $0x14,%esp
08127c2d +0x9b6:  pop    %ebx
08127c2e +0x9b7:  pop    %ebp
08127c2f +0x9b8:  ret    $0x4
08127c32 +0x9bb:  push   %ebp
08127c33 +0x9bc:  mov    %esp,%ebp
08127c35 +0x9be:  sub    $0x18,%esp
08127c38 +0x9c1:  mov    0x10(%ebp),%eax
08127c3b +0x9c4:  mov    %eax,0x8(%esp)
08127c3f +0x9c8:  mov    0xc(%ebp),%eax
08127c42 +0x9cb:  mov    %eax,0x4(%esp)
08127c46 +0x9cf:  mov    0x8(%ebp),%eax
08127c49 +0x9d2:  mov    %eax,(%esp)
08127c4c +0x9d5:  call   08127ca5 <+0xa2e>
08127c51 +0x9da:  leave
08127c52 +0x9db:  ret
08127c53 +0x9dc:  nop
08127c54 +0x9dd:  push   %ebp
08127c55 +0x9de:  mov    %esp,%ebp
08127c57 +0x9e0:  pop    %ebp
08127c58 +0x9e1:  ret
08127c59 +0x9e2:  push   %ebp
08127c5a +0x9e3:  mov    %esp,%ebp
08127c5c +0x9e5:  mov    0x8(%ebp),%eax
08127c5f +0x9e8:  pop    %ebp
08127c60 +0x9e9:  ret
08127c61 +0x9ea:  push   %ebp
08127c62 +0x9eb:  mov    %esp,%ebp
08127c64 +0x9ed:  sub    $0x28,%esp
08127c67 +0x9f0:  movb   $0x1,-0x9(%ebp)
08127c6b +0x9f4:  mov    0x10(%ebp),%eax
08127c6e +0x9f7:  mov    %eax,0x8(%esp)
08127c72 +0x9fb:  mov    0xc(%ebp),%eax
08127c75 +0x9fe:  mov    %eax,0x4(%esp)
08127c79 +0xa02:  mov    0x8(%ebp),%eax
08127c7c +0xa05:  mov    %eax,(%esp)
08127c7f +0xa08:  call   08127cc6 <+0xa4f>
08127c84 +0xa0d:  leave
08127c85 +0xa0e:  ret
08127c86 +0xa0f:  push   %ebp
08127c87 +0xa10:  mov    %esp,%ebp
08127c89 +0xa12:  mov    0x8(%ebp),%eax
08127c8c +0xa15:  pop    %ebp
08127c8d +0xa16:  ret
08127c8e +0xa17:  push   %ebp
08127c8f +0xa18:  mov    %esp,%ebp
08127c91 +0xa1a:  mov    $0x71c71c7,%eax
08127c96 +0xa1f:  pop    %ebp
08127c97 +0xa20:  ret
08127c98 +0xa21:  push   %ebp
08127c99 +0xa22:  mov    %esp,%ebp
08127c9b +0xa24:  mov    0x8(%ebp),%eax
08127c9e +0xa27:  mov    0xc(%ebp),%edx
08127ca1 +0xa2a:  mov    %edx,(%eax)
08127ca3 +0xa2c:  pop    %ebp
08127ca4 +0xa2d:  ret
08127ca5 +0xa2e:  push   %ebp
08127ca6 +0xa2f:  mov    %esp,%ebp
08127ca8 +0xa31:  sub    $0x18,%esp
08127cab +0xa34:  mov    0x10(%ebp),%eax
08127cae +0xa37:  mov    %eax,0x8(%esp)
08127cb2 +0xa3b:  mov    0xc(%ebp),%eax
08127cb5 +0xa3e:  mov    %eax,0x4(%esp)
08127cb9 +0xa42:  mov    0x8(%ebp),%eax
08127cbc +0xa45:  mov    %eax,(%esp)
08127cbf +0xa48:  call   08127d2c <+0xab5>
08127cc4 +0xa4d:  leave
08127cc5 +0xa4e:  ret
08127cc6 +0xa4f:  push   %ebp
08127cc7 +0xa50:  mov    %esp,%ebp
08127cc9 +0xa52:  sub    $0x28,%esp
08127ccc +0xa55:  mov    0xc(%ebp),%edx
08127ccf +0xa58:  mov    0x8(%ebp),%eax
08127cd2 +0xa5b:  mov    %edx,%ecx
08127cd4 +0xa5d:  sub    %eax,%ecx
08127cd6 +0xa5f:  mov    %ecx,%eax
08127cd8 +0xa61:  sar    $0x2,%eax
08127cdb +0xa64:  imul   $0x38e38e39,%eax,%eax
08127ce1 +0xa6a:  mov    %eax,-0xc(%ebp)
08127ce4 +0xa6d:  mov    -0xc(%ebp),%edx
08127ce7 +0xa70:  mov    %edx,%eax
08127ce9 +0xa72:  shl    $0x3,%eax
08127cec +0xa75:  add    %edx,%eax
08127cee +0xa77:  shl    $0x2,%eax
08127cf1 +0xa7a:  mov    %eax,%ecx
08127cf3 +0xa7c:  mov    -0xc(%ebp),%edx
08127cf6 +0xa7f:  mov    %edx,%eax
08127cf8 +0xa81:  shl    $0x3,%eax
08127cfb +0xa84:  add    %edx,%eax
08127cfd +0xa86:  shl    $0x2,%eax
08127d00 +0xa89:  neg    %eax
08127d02 +0xa8b:  add    0x10(%ebp),%eax
08127d05 +0xa8e:  mov    %ecx,0x8(%esp)
08127d09 +0xa92:  mov    0x8(%ebp),%edx
08127d0c +0xa95:  mov    %edx,0x4(%esp)
08127d10 +0xa99:  mov    %eax,(%esp)
08127d13 +0xa9c:  call   0807d880 <_init+0x178>
08127d18 +0xaa1:  mov    -0xc(%ebp),%edx
08127d1b +0xaa4:  mov    %edx,%eax
08127d1d +0xaa6:  shl    $0x3,%eax
08127d20 +0xaa9:  add    %edx,%eax
08127d22 +0xaab:  shl    $0x2,%eax
08127d25 +0xaae:  neg    %eax
08127d27 +0xab0:  add    0x10(%ebp),%eax
08127d2a +0xab3:  leave
08127d2b +0xab4:  ret
08127d2c +0xab5:  push   %ebp
08127d2d +0xab6:  mov    %esp,%ebp
08127d2f +0xab8:  sub    $0x18,%esp
08127d32 +0xabb:  mov    0x10(%ebp),%eax
08127d35 +0xabe:  mov    %eax,0x8(%esp)
08127d39 +0xac2:  mov    0xc(%ebp),%eax
08127d3c +0xac5:  mov    %eax,0x4(%esp)
08127d40 +0xac9:  mov    0x8(%ebp),%eax
08127d43 +0xacc:  mov    %eax,(%esp)
08127d46 +0xacf:  call   08127d4d <+0xad6>
08127d4b +0xad4:  leave
08127d4c +0xad5:  ret
08127d4d +0xad6:  push   %ebp
08127d4e +0xad7:  mov    %esp,%ebp
08127d50 +0xad9:  push   %ebx
08127d51 +0xada:  sub    $0x14,%esp
08127d54 +0xadd:  mov    0xc(%ebp),%eax
08127d57 +0xae0:  mov    %eax,(%esp)
08127d5a +0xae3:  call   08127d85 <+0xb0e>
08127d5f +0xae8:  mov    %eax,%ebx
08127d61 +0xaea:  mov    0x8(%ebp),%eax
08127d64 +0xaed:  mov    %eax,(%esp)
08127d67 +0xaf0:  call   08127d85 <+0xb0e>
08127d6c +0xaf5:  mov    0x10(%ebp),%edx
08127d6f +0xaf8:  mov    %edx,0x8(%esp)
08127d73 +0xafc:  mov    %ebx,0x4(%esp)
08127d77 +0xb00:  mov    %eax,(%esp)
08127d7a +0xb03:  call   08127d98 <+0xb21>
08127d7f +0xb08:  add    $0x14,%esp
08127d82 +0xb0b:  pop    %ebx
08127d83 +0xb0c:  pop    %ebp
08127d84 +0xb0d:  ret
08127d85 +0xb0e:  push   %ebp
08127d86 +0xb0f:  mov    %esp,%ebp
08127d88 +0xb11:  sub    $0x18,%esp
08127d8b +0xb14:  lea    0x8(%ebp),%eax
08127d8e +0xb17:  mov    %eax,(%esp)
08127d91 +0xb1a:  call   08127ddc <+0xb65>
08127d96 +0xb1f:  leave
08127d97 +0xb20:  ret
08127d98 +0xb21:  push   %ebp
08127d99 +0xb22:  mov    %esp,%ebp
08127d9b +0xb24:  push   %esi
08127d9c +0xb25:  push   %ebx
08127d9d +0xb26:  sub    $0x10,%esp
08127da0 +0xb29:  mov    0x10(%ebp),%eax
08127da3 +0xb2c:  mov    %eax,(%esp)
08127da6 +0xb2f:  call   08127c59 <+0x9e2>
08127dab +0xb34:  mov    %eax,%esi
08127dad +0xb36:  mov    0xc(%ebp),%eax
08127db0 +0xb39:  mov    %eax,(%esp)
08127db3 +0xb3c:  call   08127c59 <+0x9e2>
08127db8 +0xb41:  mov    %eax,%ebx
08127dba +0xb43:  mov    0x8(%ebp),%eax
08127dbd +0xb46:  mov    %eax,(%esp)
08127dc0 +0xb49:  call   08127c59 <+0x9e2>
08127dc5 +0xb4e:  mov    %esi,0x8(%esp)
08127dc9 +0xb52:  mov    %ebx,0x4(%esp)
08127dcd +0xb56:  mov    %eax,(%esp)
08127dd0 +0xb59:  call   08127de6 <+0xb6f>
08127dd5 +0xb5e:  add    $0x10,%esp
08127dd8 +0xb61:  pop    %ebx
08127dd9 +0xb62:  pop    %esi
08127dda +0xb63:  pop    %ebp
08127ddb +0xb64:  ret
08127ddc +0xb65:  push   %ebp
08127ddd +0xb66:  mov    %esp,%ebp
08127ddf +0xb68:  mov    0x8(%ebp),%eax
08127de2 +0xb6b:  mov    (%eax),%eax
08127de4 +0xb6d:  pop    %ebp
08127de5 +0xb6e:  ret
08127de6 +0xb6f:  push   %ebp
08127de7 +0xb70:  mov    %esp,%ebp
08127de9 +0xb72:  sub    $0x28,%esp
08127dec +0xb75:  movb   $0x1,-0x9(%ebp)
08127df0 +0xb79:  mov    0x10(%ebp),%eax
08127df3 +0xb7c:  mov    %eax,0x8(%esp)
08127df7 +0xb80:  mov    0xc(%ebp),%eax
08127dfa +0xb83:  mov    %eax,0x4(%esp)
08127dfe +0xb87:  mov    0x8(%ebp),%eax
08127e01 +0xb8a:  mov    %eax,(%esp)
08127e04 +0xb8d:  call   08127e0b <+0xb94>
08127e09 +0xb92:  leave
08127e0a +0xb93:  ret
08127e0b +0xb94:  push   %ebp
08127e0c +0xb95:  mov    %esp,%ebp
08127e0e +0xb97:  sub    $0x18,%esp
08127e11 +0xb9a:  mov    0xc(%ebp),%edx
08127e14 +0xb9d:  mov    0x8(%ebp),%eax
08127e17 +0xba0:  mov    %edx,%ecx
08127e19 +0xba2:  sub    %eax,%ecx
08127e1b +0xba4:  mov    %ecx,%eax
08127e1d +0xba6:  sar    $0x2,%eax
08127e20 +0xba9:  imul   $0x38e38e39,%eax,%eax
08127e26 +0xbaf:  mov    %eax,%edx
08127e28 +0xbb1:  mov    %edx,%eax
08127e2a +0xbb3:  shl    $0x3,%eax
08127e2d +0xbb6:  add    %edx,%eax
08127e2f +0xbb8:  shl    $0x2,%eax
08127e32 +0xbbb:  mov    %eax,0x8(%esp)
08127e36 +0xbbf:  mov    0x8(%ebp),%eax
08127e39 +0xbc2:  mov    %eax,0x4(%esp)
08127e3d +0xbc6:  mov    0x10(%ebp),%eax
08127e40 +0xbc9:  mov    %eax,(%esp)
08127e43 +0xbcc:  call   0807d880 <_init+0x178>
08127e48 +0xbd1:  mov    0xc(%ebp),%edx
08127e4b +0xbd4:  mov    0x8(%ebp),%eax
08127e4e +0xbd7:  mov    %edx,%ecx
08127e50 +0xbd9:  sub    %eax,%ecx
08127e52 +0xbdb:  mov    %ecx,%eax
08127e54 +0xbdd:  sar    $0x2,%eax
08127e57 +0xbe0:  imul   $0x38e38e39,%eax,%eax
08127e5d +0xbe6:  mov    %eax,%edx
08127e5f +0xbe8:  mov    %edx,%eax
08127e61 +0xbea:  shl    $0x3,%eax
08127e64 +0xbed:  add    %edx,%eax
08127e66 +0xbef:  shl    $0x2,%eax
08127e69 +0xbf2:  add    0x10(%ebp),%eax
08127e6c +0xbf5:  leave
08127e6d +0xbf6:  ret
08127e6e +0xbf7:  nop
08127e6f +0xbf8:  nop
```

## 反编译 C

```c
// <global>::global @ 0x8127277

/* CDailyScheduleManager::CDailyScheduleManager() */

void CDailyScheduleManager::_GLOBAL__I_CDailyScheduleManager(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
