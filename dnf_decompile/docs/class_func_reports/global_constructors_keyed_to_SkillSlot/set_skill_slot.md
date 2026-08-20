# set_skill_slot

`_GLOBAL__I__ZN9SkillSlot14set_skill_slotEPcS0_i`

`global constructors keyed to SkillSlot::set_skill_slot(char*, char*, int)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to SkillSlot` | `0x0860932d` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860932d  _GLOBAL__I__ZN9SkillSlot14set_skill_slotEPcS0_i
#           global constructors keyed to SkillSlot::set_skill_slot(char*, char*, int)
# range [0x0860932d, 0x08609cfb]
0860932d +0x000:  push   %ebp
0860932e +0x001:  mov    %esp,%ebp
08609330 +0x003:  sub    $0x18,%esp
08609333 +0x006:  movl   $0xffff,0x4(%esp)
0860933b +0x00e:  movl   $0x1,(%esp)
08609342 +0x015:  call   086092ed <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08609347 +0x01a:  leave
08609348 +0x01b:  ret
08609349 +0x01c:  nop
0860934a +0x01d:  push   %ebp
0860934b +0x01e:  mov    %esp,%ebp
0860934d +0x020:  mov    0x8(%ebp),%eax
08609350 +0x023:  mov    0x11c(%eax),%eax
08609356 +0x029:  pop    %ebp
08609357 +0x02a:  ret
08609358 +0x02b:  push   %ebp
08609359 +0x02c:  mov    %esp,%ebp
0860935b +0x02e:  mov    0x8(%ebp),%eax
0860935e +0x031:  mov    0x118(%eax),%eax
08609364 +0x037:  pop    %ebp
08609365 +0x038:  ret
08609366 +0x039:  push   %ebp
08609367 +0x03a:  mov    %esp,%ebp
08609369 +0x03c:  mov    0x8(%ebp),%eax
0860936c +0x03f:  movzbl 0x20(%eax),%eax
08609370 +0x043:  test   %al,%al
08609372 +0x045:  sete   %al
08609375 +0x048:  pop    %ebp
08609376 +0x049:  ret
08609377 +0x04a:  nop
08609378 +0x04b:  push   %ebp
08609379 +0x04c:  mov    %esp,%ebp
0860937b +0x04e:  mov    0xc(%ebp),%edx
0860937e +0x051:  mov    0x8(%ebp),%eax
08609381 +0x054:  add    $0x8,%edx
08609384 +0x057:  mov    0x4(%eax,%edx,4),%eax
08609388 +0x05b:  pop    %ebp
08609389 +0x05c:  ret
0860938a +0x05d:  push   %ebp
0860938b +0x05e:  mov    %esp,%ebp
0860938d +0x060:  mov    0x8(%ebp),%eax
08609390 +0x063:  add    $0x131,%eax
08609395 +0x068:  pop    %ebp
08609396 +0x069:  ret
08609397 +0x06a:  nop
08609398 +0x06b:  push   %ebp
08609399 +0x06c:  mov    %esp,%ebp
0860939b +0x06e:  mov    0x8(%ebp),%eax
0860939e +0x071:  movzwl 0x85e(%eax),%eax
086093a5 +0x078:  pop    %ebp
086093a6 +0x079:  ret
086093a7 +0x07a:  nop
086093a8 +0x07b:  push   %ebp
086093a9 +0x07c:  mov    %esp,%ebp
086093ab +0x07e:  sub    $0x8,%esp
086093ae +0x081:  mov    0xc(%ebp),%edx
086093b1 +0x084:  mov    0x10(%ebp),%eax
086093b4 +0x087:  mov    %dx,-0x4(%ebp)
086093b8 +0x08b:  mov    %ax,-0x8(%ebp)
086093bc +0x08f:  mov    0x8(%ebp),%eax
086093bf +0x092:  movzwl -0x4(%ebp),%edx
086093c3 +0x096:  mov    %dx,(%eax)
086093c6 +0x099:  mov    0x8(%ebp),%eax
086093c9 +0x09c:  movzwl -0x8(%ebp),%edx
086093cd +0x0a0:  mov    %dx,0x2(%eax)
086093d1 +0x0a4:  mov    0x8(%ebp),%eax
086093d4 +0x0a7:  mov    0x14(%ebp),%edx
086093d7 +0x0aa:  mov    %edx,0x4(%eax)
086093da +0x0ad:  mov    0x8(%ebp),%eax
086093dd +0x0b0:  mov    0x18(%ebp),%edx
086093e0 +0x0b3:  mov    %edx,0x8(%eax)
086093e3 +0x0b6:  leave
086093e4 +0x0b7:  ret
086093e5 +0x0b8:  nop
086093e6 +0x0b9:  push   %ebp
086093e7 +0x0ba:  mov    %esp,%ebp
086093e9 +0x0bc:  mov    0x8(%ebp),%eax
086093ec +0x0bf:  movl   $0x0,(%eax)
086093f2 +0x0c5:  pop    %ebp
086093f3 +0x0c6:  ret
086093f4 +0x0c7:  push   %ebp
086093f5 +0x0c8:  mov    %esp,%ebp
086093f7 +0x0ca:  mov    0x8(%ebp),%eax
086093fa +0x0cd:  mov    (%eax),%eax
086093fc +0x0cf:  add    $0x8,%eax
086093ff +0x0d2:  pop    %ebp
08609400 +0x0d3:  ret
08609401 +0x0d4:  nop
08609402 +0x0d5:  push   %ebp
08609403 +0x0d6:  mov    %esp,%ebp
08609405 +0x0d8:  push   %ebx
08609406 +0x0d9:  sub    $0x14,%esp
08609409 +0x0dc:  mov    0x8(%ebp),%ebx
0860940c +0x0df:  mov    0xc(%ebp),%eax
0860940f +0x0e2:  movl   $0x4,0x8(%esp)
08609417 +0x0ea:  mov    %eax,0x4(%esp)
0860941b +0x0ee:  mov    %ebx,(%esp)
0860941e +0x0f1:  call   0807d880 <_init+0x178>
08609423 +0x0f6:  mov    0xc(%ebp),%eax
08609426 +0x0f9:  mov    (%eax),%eax
08609428 +0x0fb:  mov    (%eax),%edx
0860942a +0x0fd:  mov    0xc(%ebp),%eax
0860942d +0x100:  mov    %edx,(%eax)
0860942f +0x102:  mov    %ebx,%eax
08609431 +0x104:  add    $0x14,%esp
08609434 +0x107:  pop    %ebx
08609435 +0x108:  pop    %ebp
08609436 +0x109:  ret    $0x4
08609439 +0x10c:  push   %ebp
0860943a +0x10d:  mov    %esp,%ebp
0860943c +0x10f:  push   %esi
0860943d +0x110:  push   %ebx
0860943e +0x111:  sub    $0x10,%esp
08609441 +0x114:  mov    0x8(%ebp),%esi
08609444 +0x117:  mov    0x10(%ebp),%eax
08609447 +0x11a:  mov    %eax,(%esp)
0860944a +0x11d:  call   080da877 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xa14>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xa14
0860944f +0x122:  mov    %eax,%ebx
08609451 +0x124:  mov    0xc(%ebp),%eax
08609454 +0x127:  mov    %eax,(%esp)
08609457 +0x12a:  call   080da877 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xa14>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xa14
0860945c +0x12f:  mov    %ebx,0x8(%esp)
08609460 +0x133:  mov    %eax,0x4(%esp)
08609464 +0x137:  mov    %esi,(%esp)
08609467 +0x13a:  call   0860949a <+0x16d>
0860946c +0x13f:  mov    %esi,%eax
0860946e +0x141:  add    $0x10,%esp
08609471 +0x144:  pop    %ebx
08609472 +0x145:  pop    %esi
08609473 +0x146:  pop    %ebp
08609474 +0x147:  ret    $0x4
08609477 +0x14a:  nop
08609478 +0x14b:  push   %ebp
08609479 +0x14c:  mov    %esp,%ebp
0860947b +0x14e:  sub    $0x18,%esp
0860947e +0x151:  mov    0xc(%ebp),%eax
08609481 +0x154:  mov    %eax,(%esp)
08609484 +0x157:  call   086094b4 <+0x187>
08609489 +0x15c:  mov    %eax,0x4(%esp)
0860948d +0x160:  mov    0x8(%ebp),%eax
08609490 +0x163:  mov    %eax,(%esp)
08609493 +0x166:  call   086094bc <+0x18f>
08609498 +0x16b:  leave
08609499 +0x16c:  ret
0860949a +0x16d:  push   %ebp
0860949b +0x16e:  mov    %esp,%ebp
0860949d +0x170:  mov    0xc(%ebp),%eax
086094a0 +0x173:  mov    (%eax),%edx
086094a2 +0x175:  mov    0x8(%ebp),%eax
086094a5 +0x178:  mov    %edx,(%eax)
086094a7 +0x17a:  mov    0x10(%ebp),%eax
086094aa +0x17d:  mov    (%eax),%edx
086094ac +0x17f:  mov    0x8(%ebp),%eax
086094af +0x182:  mov    %edx,0x4(%eax)
086094b2 +0x185:  pop    %ebp
086094b3 +0x186:  ret
086094b4 +0x187:  push   %ebp
086094b5 +0x188:  mov    %esp,%ebp
086094b7 +0x18a:  mov    0x8(%ebp),%eax
086094ba +0x18d:  pop    %ebp
086094bb +0x18e:  ret
086094bc +0x18f:  push   %ebp
086094bd +0x190:  mov    %esp,%ebp
086094bf +0x192:  push   %ebx
086094c0 +0x193:  sub    $0x24,%esp
086094c3 +0x196:  mov    0x8(%ebp),%eax
086094c6 +0x199:  mov    0x4(%eax),%edx
086094c9 +0x19c:  mov    0x8(%ebp),%eax
086094cc +0x19f:  mov    0x8(%eax),%eax
086094cf +0x1a2:  cmp    %eax,%edx
086094d1 +0x1a4:  je     08609508 <+0x1db>
086094d3 +0x1a6:  mov    0xc(%ebp),%eax
086094d6 +0x1a9:  mov    %eax,(%esp)
086094d9 +0x1ac:  call   08609545 <+0x218>
086094de +0x1b1:  mov    0x8(%ebp),%edx
086094e1 +0x1b4:  mov    0x4(%edx),%ecx
086094e4 +0x1b7:  mov    0x8(%ebp),%edx
086094e7 +0x1ba:  mov    %eax,0x8(%esp)
086094eb +0x1be:  mov    %ecx,0x4(%esp)
086094ef +0x1c2:  mov    %edx,(%esp)
086094f2 +0x1c5:  call   0860954e <+0x221>
086094f7 +0x1ca:  mov    0x8(%ebp),%eax
086094fa +0x1cd:  mov    0x4(%eax),%eax
086094fd +0x1d0:  lea    0xc(%eax),%edx
08609500 +0x1d3:  mov    0x8(%ebp),%eax
08609503 +0x1d6:  mov    %edx,0x4(%eax)
08609506 +0x1d9:  jmp    08609540 <+0x213>
08609508 +0x1db:  mov    0xc(%ebp),%eax
0860950b +0x1de:  mov    %eax,(%esp)
0860950e +0x1e1:  call   08609545 <+0x218>
08609513 +0x1e6:  mov    %eax,%ebx
08609515 +0x1e8:  lea    -0xc(%ebp),%eax
08609518 +0x1eb:  mov    0x8(%ebp),%edx
0860951b +0x1ee:  mov    %edx,0x4(%esp)
0860951f +0x1f2:  mov    %eax,(%esp)
08609522 +0x1f5:  call   084f1368 <_GLOBAL__I__Z7getUserj+0x831a>  ; global constructors keyed to getUser(unsigned int)+0x831a
08609527 +0x1fa:  sub    $0x4,%esp
0860952a +0x1fd:  mov    %ebx,0x8(%esp)
0860952e +0x201:  mov    -0xc(%ebp),%eax
08609531 +0x204:  mov    %eax,0x4(%esp)
08609535 +0x208:  mov    0x8(%ebp),%eax
08609538 +0x20b:  mov    %eax,(%esp)
0860953b +0x20e:  call   08609592 <+0x265>
08609540 +0x213:  mov    -0x4(%ebp),%ebx
08609543 +0x216:  leave
08609544 +0x217:  ret
08609545 +0x218:  push   %ebp
08609546 +0x219:  mov    %esp,%ebp
08609548 +0x21b:  mov    0x8(%ebp),%eax
0860954b +0x21e:  pop    %ebp
0860954c +0x21f:  ret
0860954d +0x220:  nop
0860954e +0x221:  push   %ebp
0860954f +0x222:  mov    %esp,%ebp
08609551 +0x224:  push   %ebx
08609552 +0x225:  sub    $0x14,%esp
08609555 +0x228:  mov    0x10(%ebp),%eax
08609558 +0x22b:  mov    %eax,(%esp)
0860955b +0x22e:  call   08609545 <+0x218>
08609560 +0x233:  mov    %eax,%ebx
08609562 +0x235:  mov    0xc(%ebp),%eax
08609565 +0x238:  mov    %eax,0x4(%esp)
08609569 +0x23c:  movl   $0xc,(%esp)
08609570 +0x243:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08609575 +0x248:  mov    %eax,%edx
08609577 +0x24a:  test   %edx,%edx
08609579 +0x24c:  je     0860958b <+0x25e>
0860957b +0x24e:  mov    (%ebx),%edx
0860957d +0x250:  mov    %edx,(%eax)
0860957f +0x252:  mov    0x4(%ebx),%edx
08609582 +0x255:  mov    %edx,0x4(%eax)
08609585 +0x258:  mov    0x8(%ebx),%edx
08609588 +0x25b:  mov    %edx,0x8(%eax)
0860958b +0x25e:  add    $0x14,%esp
0860958e +0x261:  pop    %ebx
0860958f +0x262:  pop    %ebp
08609590 +0x263:  ret
08609591 +0x264:  nop
08609592 +0x265:  push   %ebp
08609593 +0x266:  mov    %esp,%ebp
08609595 +0x268:  push   %esi
08609596 +0x269:  push   %ebx
08609597 +0x26a:  sub    $0x30,%esp
0860959a +0x26d:  mov    0x8(%ebp),%eax
0860959d +0x270:  mov    0x4(%eax),%edx
086095a0 +0x273:  mov    0x8(%ebp),%eax
086095a3 +0x276:  mov    0x8(%eax),%eax
086095a6 +0x279:  cmp    %eax,%edx
086095a8 +0x27b:  je     08609643 <+0x316>
086095ae +0x281:  mov    0x8(%ebp),%eax
086095b1 +0x284:  mov    0x4(%eax),%eax
086095b4 +0x287:  sub    $0xc,%eax
086095b7 +0x28a:  mov    %eax,(%esp)
086095ba +0x28d:  call   086094b4 <+0x187>
086095bf +0x292:  mov    0x8(%ebp),%edx
086095c2 +0x295:  mov    0x4(%edx),%ecx
086095c5 +0x298:  mov    0x8(%ebp),%edx
086095c8 +0x29b:  mov    %eax,0x8(%esp)
086095cc +0x29f:  mov    %ecx,0x4(%esp)
086095d0 +0x2a3:  mov    %edx,(%esp)
086095d3 +0x2a6:  call   0860954e <+0x221>
086095d8 +0x2ab:  mov    0x8(%ebp),%eax
086095db +0x2ae:  mov    0x4(%eax),%eax
086095de +0x2b1:  lea    0xc(%eax),%edx
086095e1 +0x2b4:  mov    0x8(%ebp),%eax
086095e4 +0x2b7:  mov    %edx,0x4(%eax)
086095e7 +0x2ba:  mov    0x8(%ebp),%eax
086095ea +0x2bd:  mov    0x4(%eax),%eax
086095ed +0x2c0:  lea    -0xc(%eax),%esi
086095f0 +0x2c3:  mov    0x8(%ebp),%eax
086095f3 +0x2c6:  mov    0x4(%eax),%eax
086095f6 +0x2c9:  lea    -0x18(%eax),%ebx
086095f9 +0x2cc:  lea    0xc(%ebp),%eax
086095fc +0x2cf:  mov    %eax,(%esp)
086095ff +0x2d2:  call   084f2980 <_GLOBAL__I__Z7getUserj+0x9932>  ; global constructors keyed to getUser(unsigned int)+0x9932
08609604 +0x2d7:  mov    (%eax),%eax
08609606 +0x2d9:  mov    %esi,0x8(%esp)
0860960a +0x2dd:  mov    %ebx,0x4(%esp)
0860960e +0x2e1:  mov    %eax,(%esp)
08609611 +0x2e4:  call   0860986c <+0x53f>
08609616 +0x2e9:  lea    0xc(%ebp),%eax
08609619 +0x2ec:  mov    %eax,(%esp)
0860961c +0x2ef:  call   086098a4 <+0x577>
08609621 +0x2f4:  mov    %eax,%ebx
08609623 +0x2f6:  mov    0x10(%ebp),%eax
08609626 +0x2f9:  mov    %eax,(%esp)
08609629 +0x2fc:  call   08609545 <+0x218>
0860962e +0x301:  mov    (%eax),%edx
08609630 +0x303:  mov    %edx,(%ebx)
08609632 +0x305:  mov    0x4(%eax),%edx
08609635 +0x308:  mov    %edx,0x4(%ebx)
08609638 +0x30b:  mov    0x8(%eax),%eax
0860963b +0x30e:  mov    %eax,0x8(%ebx)
0860963e +0x311:  jmp    08609862 <+0x535>
08609643 +0x316:  movl   $"vector::_M_insert_aux",0x8(%esp)
0860964b +0x31e:  movl   $0x1,0x4(%esp)
08609653 +0x326:  mov    0x8(%ebp),%eax
08609656 +0x329:  mov    %eax,(%esp)
08609659 +0x32c:  call   086098ae <+0x581>
0860965e +0x331:  mov    %eax,-0x18(%ebp)
08609661 +0x334:  lea    -0x1c(%ebp),%eax
08609664 +0x337:  mov    0x8(%ebp),%edx
08609667 +0x33a:  mov    %edx,0x4(%esp)
0860966b +0x33e:  mov    %eax,(%esp)
0860966e +0x341:  call   084f132a <_GLOBAL__I__Z7getUserj+0x82dc>  ; global constructors keyed to getUser(unsigned int)+0x82dc
08609673 +0x346:  sub    $0x4,%esp
08609676 +0x349:  lea    -0x1c(%ebp),%eax
08609679 +0x34c:  mov    %eax,0x4(%esp)
0860967d +0x350:  lea    0xc(%ebp),%eax
08609680 +0x353:  mov    %eax,(%esp)
08609683 +0x356:  call   08609953 <+0x626>
08609688 +0x35b:  mov    %eax,-0x14(%ebp)
0860968b +0x35e:  mov    0x8(%ebp),%eax
0860968e +0x361:  mov    -0x18(%ebp),%edx
08609691 +0x364:  mov    %edx,0x4(%esp)
08609695 +0x368:  mov    %eax,(%esp)
08609698 +0x36b:  call   0860998c <+0x65f>
0860969d +0x370:  mov    %eax,-0x10(%ebp)
086096a0 +0x373:  mov    -0x10(%ebp),%eax
086096a3 +0x376:  mov    %eax,-0xc(%ebp)
086096a6 +0x379:  mov    0x10(%ebp),%eax
086096a9 +0x37c:  mov    %eax,(%esp)
086096ac +0x37f:  call   08609545 <+0x218>
086096b1 +0x384:  mov    %eax,%ecx
086096b3 +0x386:  mov    -0x14(%ebp),%edx
086096b6 +0x389:  mov    %edx,%eax
086096b8 +0x38b:  add    %eax,%eax
086096ba +0x38d:  add    %edx,%eax
086096bc +0x38f:  shl    $0x2,%eax
086096bf +0x392:  mov    %eax,%edx
086096c1 +0x394:  add    -0x10(%ebp),%edx
086096c4 +0x397:  mov    0x8(%ebp),%eax
086096c7 +0x39a:  mov    %ecx,0x8(%esp)
086096cb +0x39e:  mov    %edx,0x4(%esp)
086096cf +0x3a2:  mov    %eax,(%esp)
086096d2 +0x3a5:  call   0860954e <+0x221>
086096d7 +0x3aa:  movl   $0x0,-0xc(%ebp)
086096de +0x3b1:  mov    0x8(%ebp),%eax
086096e1 +0x3b4:  mov    %eax,(%esp)
086096e4 +0x3b7:  call   084f28ca <_GLOBAL__I__Z7getUserj+0x987c>  ; global constructors keyed to getUser(unsigned int)+0x987c
086096e9 +0x3bc:  mov    %eax,%ebx
086096eb +0x3be:  lea    0xc(%ebp),%eax
086096ee +0x3c1:  mov    %eax,(%esp)
086096f1 +0x3c4:  call   084f2980 <_GLOBAL__I__Z7getUserj+0x9932>  ; global constructors keyed to getUser(unsigned int)+0x9932
086096f6 +0x3c9:  mov    (%eax),%edx
086096f8 +0x3cb:  mov    0x8(%ebp),%eax
086096fb +0x3ce:  mov    (%eax),%eax
086096fd +0x3d0:  mov    %ebx,0xc(%esp)
08609701 +0x3d4:  mov    -0x10(%ebp),%ecx
08609704 +0x3d7:  mov    %ecx,0x8(%esp)
08609708 +0x3db:  mov    %edx,0x4(%esp)
0860970c +0x3df:  mov    %eax,(%esp)
0860970f +0x3e2:  call   086099bb <+0x68e>
08609714 +0x3e7:  mov    %eax,-0xc(%ebp)
08609717 +0x3ea:  addl   $0xc,-0xc(%ebp)
0860971b +0x3ee:  mov    0x8(%ebp),%eax
0860971e +0x3f1:  mov    %eax,(%esp)
08609721 +0x3f4:  call   084f28ca <_GLOBAL__I__Z7getUserj+0x987c>  ; global constructors keyed to getUser(unsigned int)+0x987c
08609726 +0x3f9:  mov    %eax,%ebx
08609728 +0x3fb:  mov    0x8(%ebp),%eax
0860972b +0x3fe:  mov    0x4(%eax),%esi
0860972e +0x401:  lea    0xc(%ebp),%eax
08609731 +0x404:  mov    %eax,(%esp)
08609734 +0x407:  call   084f2980 <_GLOBAL__I__Z7getUserj+0x9932>  ; global constructors keyed to getUser(unsigned int)+0x9932
08609739 +0x40c:  mov    (%eax),%eax
0860973b +0x40e:  mov    %ebx,0xc(%esp)
0860973f +0x412:  mov    -0xc(%ebp),%edx
08609742 +0x415:  mov    %edx,0x8(%esp)
08609746 +0x419:  mov    %esi,0x4(%esp)
0860974a +0x41d:  mov    %eax,(%esp)
0860974d +0x420:  call   086099bb <+0x68e>
08609752 +0x425:  mov    %eax,-0xc(%ebp)
08609755 +0x428:  mov    0x8(%ebp),%eax
08609758 +0x42b:  mov    %eax,(%esp)
0860975b +0x42e:  call   084f28ca <_GLOBAL__I__Z7getUserj+0x987c>  ; global constructors keyed to getUser(unsigned int)+0x987c
08609760 +0x433:  mov    0x8(%ebp),%edx
08609763 +0x436:  mov    0x4(%edx),%ecx
08609766 +0x439:  mov    0x8(%ebp),%edx
08609769 +0x43c:  mov    (%edx),%edx
0860976b +0x43e:  mov    %eax,0x8(%esp)
0860976f +0x442:  mov    %ecx,0x4(%esp)
08609773 +0x446:  mov    %edx,(%esp)
08609776 +0x449:  call   084f28d2 <_GLOBAL__I__Z7getUserj+0x9884>  ; global constructors keyed to getUser(unsigned int)+0x9884
0860977b +0x44e:  mov    0x8(%ebp),%eax
0860977e +0x451:  mov    0x8(%eax),%eax
08609781 +0x454:  mov    %eax,%edx
08609783 +0x456:  mov    0x8(%ebp),%eax
08609786 +0x459:  mov    (%eax),%eax
08609788 +0x45b:  mov    %edx,%ecx
0860978a +0x45d:  sub    %eax,%ecx
0860978c +0x45f:  mov    %ecx,%eax
0860978e +0x461:  sar    $0x2,%eax
08609791 +0x464:  imul   $0xaaaaaaab,%eax,%eax
08609797 +0x46a:  mov    %eax,%ecx
08609799 +0x46c:  mov    0x8(%ebp),%eax
0860979c +0x46f:  mov    (%eax),%edx
0860979e +0x471:  mov    0x8(%ebp),%eax
086097a1 +0x474:  mov    %ecx,0x8(%esp)
086097a5 +0x478:  mov    %edx,0x4(%esp)
086097a9 +0x47c:  mov    %eax,(%esp)
086097ac +0x47f:  call   084f4020 <_GLOBAL__I__Z7getUserj+0xafd2>  ; global constructors keyed to getUser(unsigned int)+0xafd2
086097b1 +0x484:  mov    0x8(%ebp),%eax
086097b4 +0x487:  mov    -0x10(%ebp),%edx
086097b7 +0x48a:  mov    %edx,(%eax)
086097b9 +0x48c:  mov    0x8(%ebp),%eax
086097bc +0x48f:  mov    -0xc(%ebp),%edx
086097bf +0x492:  mov    %edx,0x4(%eax)
086097c2 +0x495:  mov    -0x18(%ebp),%edx
086097c5 +0x498:  mov    %edx,%eax
086097c7 +0x49a:  add    %eax,%eax
086097c9 +0x49c:  add    %edx,%eax
086097cb +0x49e:  shl    $0x2,%eax
086097ce +0x4a1:  mov    %eax,%edx
086097d0 +0x4a3:  add    -0x10(%ebp),%edx
086097d3 +0x4a6:  mov    0x8(%ebp),%eax
086097d6 +0x4a9:  mov    %edx,0x8(%eax)
086097d9 +0x4ac:  jmp    08609862 <+0x535>
086097de +0x4b1:  mov    %eax,(%esp)
086097e1 +0x4b4:  call   08725ce0 <__cxa_begin_catch>
086097e6 +0x4b9:  cmpl   $0x0,-0xc(%ebp)
086097ea +0x4bd:  jne    0860980e <+0x4e1>
086097ec +0x4bf:  mov    -0x14(%ebp),%edx
086097ef +0x4c2:  mov    %edx,%eax
086097f1 +0x4c4:  add    %eax,%eax
086097f3 +0x4c6:  add    %edx,%eax
086097f5 +0x4c8:  shl    $0x2,%eax
086097f8 +0x4cb:  mov    %eax,%edx
086097fa +0x4cd:  add    -0x10(%ebp),%edx
086097fd +0x4d0:  mov    0x8(%ebp),%eax
08609800 +0x4d3:  mov    %edx,0x4(%esp)
08609804 +0x4d7:  mov    %eax,(%esp)
08609807 +0x4da:  call   08609a14 <+0x6e7>
0860980c +0x4df:  jmp    0860982f <+0x502>
0860980e +0x4e1:  mov    0x8(%ebp),%eax
08609811 +0x4e4:  mov    %eax,(%esp)
08609814 +0x4e7:  call   084f28ca <_GLOBAL__I__Z7getUserj+0x987c>  ; global constructors keyed to getUser(unsigned int)+0x987c
08609819 +0x4ec:  mov    %eax,0x8(%esp)
0860981d +0x4f0:  mov    -0xc(%ebp),%eax
08609820 +0x4f3:  mov    %eax,0x4(%esp)
08609824 +0x4f7:  mov    -0x10(%ebp),%eax
08609827 +0x4fa:  mov    %eax,(%esp)
0860982a +0x4fd:  call   084f28d2 <_GLOBAL__I__Z7getUserj+0x9884>  ; global constructors keyed to getUser(unsigned int)+0x9884
0860982f +0x502:  mov    0x8(%ebp),%eax
08609832 +0x505:  mov    -0x18(%ebp),%edx
08609835 +0x508:  mov    %edx,0x8(%esp)
08609839 +0x50c:  mov    -0x10(%ebp),%edx
0860983c +0x50f:  mov    %edx,0x4(%esp)
08609840 +0x513:  mov    %eax,(%esp)
08609843 +0x516:  call   084f4020 <_GLOBAL__I__Z7getUserj+0xafd2>  ; global constructors keyed to getUser(unsigned int)+0xafd2
08609848 +0x51b:  call   08724be0 <__cxa_rethrow>
0860984d +0x520:  mov    %edx,%ebx
0860984f +0x522:  mov    %eax,%esi
08609851 +0x524:  call   08725c30 <__cxa_end_catch>
08609856 +0x529:  mov    %esi,%eax
08609858 +0x52b:  mov    %ebx,%edx
0860985a +0x52d:  mov    %eax,(%esp)
0860985d +0x530:  call   08ae3750 <_Unwind_Resume>
08609862 +0x535:  lea    -0x8(%ebp),%esp
08609865 +0x538:  add    $0x0,%esp
08609868 +0x53b:  pop    %ebx
08609869 +0x53c:  pop    %esi
0860986a +0x53d:  pop    %ebp
0860986b +0x53e:  ret
0860986c +0x53f:  push   %ebp
0860986d +0x540:  mov    %esp,%ebp
0860986f +0x542:  push   %ebx
08609870 +0x543:  sub    $0x14,%esp
08609873 +0x546:  mov    0xc(%ebp),%eax
08609876 +0x549:  mov    %eax,(%esp)
08609879 +0x54c:  call   08609a27 <+0x6fa>
0860987e +0x551:  mov    %eax,%ebx
08609880 +0x553:  mov    0x8(%ebp),%eax
08609883 +0x556:  mov    %eax,(%esp)
08609886 +0x559:  call   08609a27 <+0x6fa>
0860988b +0x55e:  mov    0x10(%ebp),%edx
0860988e +0x561:  mov    %edx,0x8(%esp)
08609892 +0x565:  mov    %ebx,0x4(%esp)
08609896 +0x569:  mov    %eax,(%esp)
08609899 +0x56c:  call   08609a2f <+0x702>
0860989e +0x571:  add    $0x14,%esp
086098a1 +0x574:  pop    %ebx
086098a2 +0x575:  pop    %ebp
086098a3 +0x576:  ret
086098a4 +0x577:  push   %ebp
086098a5 +0x578:  mov    %esp,%ebp
086098a7 +0x57a:  mov    0x8(%ebp),%eax
086098aa +0x57d:  mov    (%eax),%eax
086098ac +0x57f:  pop    %ebp
086098ad +0x580:  ret
086098ae +0x581:  push   %ebp
086098af +0x582:  mov    %esp,%ebp
086098b1 +0x584:  push   %ebx
086098b2 +0x585:  sub    $0x24,%esp
086098b5 +0x588:  mov    0x8(%ebp),%eax
086098b8 +0x58b:  mov    %eax,(%esp)
086098bb +0x58e:  call   08609a74 <+0x747>
086098c0 +0x593:  mov    %eax,%ebx
086098c2 +0x595:  mov    0x8(%ebp),%eax
086098c5 +0x598:  mov    %eax,(%esp)
086098c8 +0x59b:  call   084f1308 <_GLOBAL__I__Z7getUserj+0x82ba>  ; global constructors keyed to getUser(unsigned int)+0x82ba
086098cd +0x5a0:  mov    %ebx,%edx
086098cf +0x5a2:  sub    %eax,%edx
086098d1 +0x5a4:  mov    0xc(%ebp),%eax
086098d4 +0x5a7:  cmp    %eax,%edx
086098d6 +0x5a9:  setb   %al
086098d9 +0x5ac:  test   %al,%al
086098db +0x5ae:  je     086098e8 <+0x5bb>
086098dd +0x5b0:  mov    0x10(%ebp),%eax
086098e0 +0x5b3:  mov    %eax,(%esp)
086098e3 +0x5b6:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
086098e8 +0x5bb:  mov    0x8(%ebp),%eax
086098eb +0x5be:  mov    %eax,(%esp)
086098ee +0x5c1:  call   084f1308 <_GLOBAL__I__Z7getUserj+0x82ba>  ; global constructors keyed to getUser(unsigned int)+0x82ba
086098f3 +0x5c6:  mov    %eax,%ebx
086098f5 +0x5c8:  mov    0x8(%ebp),%eax
086098f8 +0x5cb:  mov    %eax,(%esp)
086098fb +0x5ce:  call   084f1308 <_GLOBAL__I__Z7getUserj+0x82ba>  ; global constructors keyed to getUser(unsigned int)+0x82ba
08609900 +0x5d3:  mov    %eax,-0x10(%ebp)
08609903 +0x5d6:  lea    0xc(%ebp),%eax
08609906 +0x5d9:  mov    %eax,0x4(%esp)
0860990a +0x5dd:  lea    -0x10(%ebp),%eax
0860990d +0x5e0:  mov    %eax,(%esp)
08609910 +0x5e3:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
08609915 +0x5e8:  mov    (%eax),%eax
08609917 +0x5ea:  lea    (%ebx,%eax,1),%eax
0860991a +0x5ed:  mov    %eax,-0xc(%ebp)
0860991d +0x5f0:  mov    0x8(%ebp),%eax
08609920 +0x5f3:  mov    %eax,(%esp)
08609923 +0x5f6:  call   084f1308 <_GLOBAL__I__Z7getUserj+0x82ba>  ; global constructors keyed to getUser(unsigned int)+0x82ba
08609928 +0x5fb:  cmp    -0xc(%ebp),%eax
0860992b +0x5fe:  ja     0860993d <+0x610>
0860992d +0x600:  mov    0x8(%ebp),%eax
08609930 +0x603:  mov    %eax,(%esp)
08609933 +0x606:  call   08609a74 <+0x747>
08609938 +0x60b:  cmp    -0xc(%ebp),%eax
0860993b +0x60e:  jae    0860994a <+0x61d>
0860993d +0x610:  mov    0x8(%ebp),%eax
08609940 +0x613:  mov    %eax,(%esp)
08609943 +0x616:  call   08609a74 <+0x747>
08609948 +0x61b:  jmp    0860994d <+0x620>
0860994a +0x61d:  mov    -0xc(%ebp),%eax
0860994d +0x620:  add    $0x24,%esp
08609950 +0x623:  pop    %ebx
08609951 +0x624:  pop    %ebp
08609952 +0x625:  ret
08609953 +0x626:  push   %ebp
08609954 +0x627:  mov    %esp,%ebp
08609956 +0x629:  push   %ebx
08609957 +0x62a:  sub    $0x14,%esp
0860995a +0x62d:  mov    0x8(%ebp),%eax
0860995d +0x630:  mov    %eax,(%esp)
08609960 +0x633:  call   084f2980 <_GLOBAL__I__Z7getUserj+0x9932>  ; global constructors keyed to getUser(unsigned int)+0x9932
08609965 +0x638:  mov    (%eax),%eax
08609967 +0x63a:  mov    %eax,%ebx
08609969 +0x63c:  mov    0xc(%ebp),%eax
0860996c +0x63f:  mov    %eax,(%esp)
0860996f +0x642:  call   084f2980 <_GLOBAL__I__Z7getUserj+0x9932>  ; global constructors keyed to getUser(unsigned int)+0x9932
08609974 +0x647:  mov    (%eax),%eax
08609976 +0x649:  mov    %ebx,%edx
08609978 +0x64b:  sub    %eax,%edx
0860997a +0x64d:  mov    %edx,%eax
0860997c +0x64f:  sar    $0x2,%eax
0860997f +0x652:  imul   $0xaaaaaaab,%eax,%eax
08609985 +0x658:  add    $0x14,%esp
08609988 +0x65b:  pop    %ebx
08609989 +0x65c:  pop    %ebp
0860998a +0x65d:  ret
0860998b +0x65e:  nop
0860998c +0x65f:  push   %ebp
0860998d +0x660:  mov    %esp,%ebp
0860998f +0x662:  sub    $0x18,%esp
08609992 +0x665:  cmpl   $0x0,0xc(%ebp)
08609996 +0x669:  je     086099b4 <+0x687>
08609998 +0x66b:  mov    0x8(%ebp),%eax
0860999b +0x66e:  movl   $0x0,0x8(%esp)
086099a3 +0x676:  mov    0xc(%ebp),%edx
086099a6 +0x679:  mov    %edx,0x4(%esp)
086099aa +0x67d:  mov    %eax,(%esp)
086099ad +0x680:  call   08609a90 <+0x763>
086099b2 +0x685:  jmp    086099b9 <+0x68c>
086099b4 +0x687:  mov    $0x0,%eax
086099b9 +0x68c:  leave
086099ba +0x68d:  ret
086099bb +0x68e:  push   %ebp
086099bc +0x68f:  mov    %esp,%ebp
086099be +0x691:  sub    $0x28,%esp
086099c1 +0x694:  lea    -0x10(%ebp),%eax
086099c4 +0x697:  lea    0xc(%ebp),%edx
086099c7 +0x69a:  mov    %edx,0x4(%esp)
086099cb +0x69e:  mov    %eax,(%esp)
086099ce +0x6a1:  call   08609ace <+0x7a1>
086099d3 +0x6a6:  sub    $0x4,%esp
086099d6 +0x6a9:  lea    -0xc(%ebp),%eax
086099d9 +0x6ac:  lea    0x8(%ebp),%edx
086099dc +0x6af:  mov    %edx,0x4(%esp)
086099e0 +0x6b3:  mov    %eax,(%esp)
086099e3 +0x6b6:  call   08609ace <+0x7a1>
086099e8 +0x6bb:  sub    $0x4,%esp
086099eb +0x6be:  mov    0x14(%ebp),%eax
086099ee +0x6c1:  mov    %eax,0xc(%esp)
086099f2 +0x6c5:  mov    0x10(%ebp),%eax
086099f5 +0x6c8:  mov    %eax,0x8(%esp)
086099f9 +0x6cc:  mov    -0x10(%ebp),%eax
086099fc +0x6cf:  mov    %eax,0x4(%esp)
08609a00 +0x6d3:  mov    -0xc(%ebp),%eax
08609a03 +0x6d6:  mov    %eax,(%esp)
08609a06 +0x6d9:  call   08609af3 <+0x7c6>
08609a0b +0x6de:  leave
08609a0c +0x6df:  ret
08609a0d +0x6e0:  nop
08609a0e +0x6e1:  push   %ebp
08609a0f +0x6e2:  mov    %esp,%ebp
08609a11 +0x6e4:  pop    %ebp
08609a12 +0x6e5:  ret
08609a13 +0x6e6:  nop
08609a14 +0x6e7:  push   %ebp
08609a15 +0x6e8:  mov    %esp,%ebp
08609a17 +0x6ea:  sub    $0x18,%esp
08609a1a +0x6ed:  mov    0xc(%ebp),%eax
08609a1d +0x6f0:  mov    %eax,(%esp)
08609a20 +0x6f3:  call   08609a0e <+0x6e1>
08609a25 +0x6f8:  leave
08609a26 +0x6f9:  ret
08609a27 +0x6fa:  push   %ebp
08609a28 +0x6fb:  mov    %esp,%ebp
08609a2a +0x6fd:  mov    0x8(%ebp),%eax
08609a2d +0x700:  pop    %ebp
08609a2e +0x701:  ret
08609a2f +0x702:  push   %ebp
08609a30 +0x703:  mov    %esp,%ebp
08609a32 +0x705:  push   %esi
08609a33 +0x706:  push   %ebx
08609a34 +0x707:  sub    $0x10,%esp
08609a37 +0x70a:  mov    0x10(%ebp),%eax
08609a3a +0x70d:  mov    %eax,(%esp)
08609a3d +0x710:  call   08609b14 <+0x7e7>
08609a42 +0x715:  mov    %eax,%esi
08609a44 +0x717:  mov    0xc(%ebp),%eax
08609a47 +0x71a:  mov    %eax,(%esp)
08609a4a +0x71d:  call   08609b14 <+0x7e7>
08609a4f +0x722:  mov    %eax,%ebx
08609a51 +0x724:  mov    0x8(%ebp),%eax
08609a54 +0x727:  mov    %eax,(%esp)
08609a57 +0x72a:  call   08609b14 <+0x7e7>
08609a5c +0x72f:  mov    %esi,0x8(%esp)
08609a60 +0x733:  mov    %ebx,0x4(%esp)
08609a64 +0x737:  mov    %eax,(%esp)
08609a67 +0x73a:  call   08609b1c <+0x7ef>
08609a6c +0x73f:  add    $0x10,%esp
08609a6f +0x742:  pop    %ebx
08609a70 +0x743:  pop    %esi
08609a71 +0x744:  pop    %ebp
08609a72 +0x745:  ret
08609a73 +0x746:  nop
08609a74 +0x747:  push   %ebp
08609a75 +0x748:  mov    %esp,%ebp
08609a77 +0x74a:  sub    $0x18,%esp
08609a7a +0x74d:  mov    0x8(%ebp),%eax
08609a7d +0x750:  mov    %eax,(%esp)
08609a80 +0x753:  call   08609b42 <+0x815>
08609a85 +0x758:  mov    %eax,(%esp)
08609a88 +0x75b:  call   08609b4a <+0x81d>
08609a8d +0x760:  leave
08609a8e +0x761:  ret
08609a8f +0x762:  nop
08609a90 +0x763:  push   %ebp
08609a91 +0x764:  mov    %esp,%ebp
08609a93 +0x766:  sub    $0x18,%esp
08609a96 +0x769:  mov    0x8(%ebp),%eax
08609a99 +0x76c:  mov    %eax,(%esp)
08609a9c +0x76f:  call   08609b4a <+0x81d>
08609aa1 +0x774:  cmp    0xc(%ebp),%eax
08609aa4 +0x777:  setb   %al
08609aa7 +0x77a:  movzbl %al,%eax
08609aaa +0x77d:  test   %eax,%eax
08609aac +0x77f:  setne  %al
08609aaf +0x782:  test   %al,%al
08609ab1 +0x784:  je     08609ab8 <+0x78b>
08609ab3 +0x786:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
08609ab8 +0x78b:  mov    0xc(%ebp),%edx
08609abb +0x78e:  mov    %edx,%eax
08609abd +0x790:  add    %eax,%eax
08609abf +0x792:  add    %edx,%eax
08609ac1 +0x794:  shl    $0x2,%eax
08609ac4 +0x797:  mov    %eax,(%esp)
08609ac7 +0x79a:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08609acc +0x79f:  leave
08609acd +0x7a0:  ret
08609ace +0x7a1:  push   %ebp
08609acf +0x7a2:  mov    %esp,%ebp
08609ad1 +0x7a4:  push   %ebx
08609ad2 +0x7a5:  sub    $0x14,%esp
08609ad5 +0x7a8:  mov    0x8(%ebp),%ebx
08609ad8 +0x7ab:  mov    0xc(%ebp),%eax
08609adb +0x7ae:  mov    (%eax),%eax
08609add +0x7b0:  mov    %eax,0x4(%esp)
08609ae1 +0x7b4:  mov    %ebx,(%esp)
08609ae4 +0x7b7:  call   08609b54 <+0x827>
08609ae9 +0x7bc:  mov    %ebx,%eax
08609aeb +0x7be:  add    $0x14,%esp
08609aee +0x7c1:  pop    %ebx
08609aef +0x7c2:  pop    %ebp
08609af0 +0x7c3:  ret    $0x4
08609af3 +0x7c6:  push   %ebp
08609af4 +0x7c7:  mov    %esp,%ebp
08609af6 +0x7c9:  sub    $0x18,%esp
08609af9 +0x7cc:  mov    0x10(%ebp),%eax
08609afc +0x7cf:  mov    %eax,0x8(%esp)
08609b00 +0x7d3:  mov    0xc(%ebp),%eax
08609b03 +0x7d6:  mov    %eax,0x4(%esp)
08609b07 +0x7da:  mov    0x8(%ebp),%eax
08609b0a +0x7dd:  mov    %eax,(%esp)
08609b0d +0x7e0:  call   08609b61 <+0x834>
08609b12 +0x7e5:  leave
08609b13 +0x7e6:  ret
08609b14 +0x7e7:  push   %ebp
08609b15 +0x7e8:  mov    %esp,%ebp
08609b17 +0x7ea:  mov    0x8(%ebp),%eax
08609b1a +0x7ed:  pop    %ebp
08609b1b +0x7ee:  ret
08609b1c +0x7ef:  push   %ebp
08609b1d +0x7f0:  mov    %esp,%ebp
08609b1f +0x7f2:  sub    $0x28,%esp
08609b22 +0x7f5:  movb   $0x0,-0x9(%ebp)
08609b26 +0x7f9:  mov    0x10(%ebp),%eax
08609b29 +0x7fc:  mov    %eax,0x8(%esp)
08609b2d +0x800:  mov    0xc(%ebp),%eax
08609b30 +0x803:  mov    %eax,0x4(%esp)
08609b34 +0x807:  mov    0x8(%ebp),%eax
08609b37 +0x80a:  mov    %eax,(%esp)
08609b3a +0x80d:  call   08609b82 <+0x855>
08609b3f +0x812:  leave
08609b40 +0x813:  ret
08609b41 +0x814:  nop
08609b42 +0x815:  push   %ebp
08609b43 +0x816:  mov    %esp,%ebp
08609b45 +0x818:  mov    0x8(%ebp),%eax
08609b48 +0x81b:  pop    %ebp
08609b49 +0x81c:  ret
08609b4a +0x81d:  push   %ebp
08609b4b +0x81e:  mov    %esp,%ebp
08609b4d +0x820:  mov    $0x15555555,%eax
08609b52 +0x825:  pop    %ebp
08609b53 +0x826:  ret
08609b54 +0x827:  push   %ebp
08609b55 +0x828:  mov    %esp,%ebp
08609b57 +0x82a:  mov    0x8(%ebp),%eax
08609b5a +0x82d:  mov    0xc(%ebp),%edx
08609b5d +0x830:  mov    %edx,(%eax)
08609b5f +0x832:  pop    %ebp
08609b60 +0x833:  ret
08609b61 +0x834:  push   %ebp
08609b62 +0x835:  mov    %esp,%ebp
08609b64 +0x837:  sub    $0x18,%esp
08609b67 +0x83a:  mov    0x10(%ebp),%eax
08609b6a +0x83d:  mov    %eax,0x8(%esp)
08609b6e +0x841:  mov    0xc(%ebp),%eax
08609b71 +0x844:  mov    %eax,0x4(%esp)
08609b75 +0x848:  mov    0x8(%ebp),%eax
08609b78 +0x84b:  mov    %eax,(%esp)
08609b7b +0x84e:  call   08609be1 <+0x8b4>
08609b80 +0x853:  leave
08609b81 +0x854:  ret
08609b82 +0x855:  push   %ebp
08609b83 +0x856:  mov    %esp,%ebp
08609b85 +0x858:  push   %ebx
08609b86 +0x859:  sub    $0x24,%esp
08609b89 +0x85c:  mov    0xc(%ebp),%edx
08609b8c +0x85f:  mov    0x8(%ebp),%eax
08609b8f +0x862:  mov    %edx,%ecx
08609b91 +0x864:  sub    %eax,%ecx
08609b93 +0x866:  mov    %ecx,%eax
08609b95 +0x868:  sar    $0x2,%eax
08609b98 +0x86b:  imul   $0xaaaaaaab,%eax,%eax
08609b9e +0x871:  mov    %eax,-0xc(%ebp)
08609ba1 +0x874:  jmp    08609bcd <+0x8a0>
08609ba3 +0x876:  subl   $0xc,0x10(%ebp)
08609ba7 +0x87a:  mov    0x10(%ebp),%ebx
08609baa +0x87d:  subl   $0xc,0xc(%ebp)
08609bae +0x881:  mov    0xc(%ebp),%eax
08609bb1 +0x884:  mov    %eax,(%esp)
08609bb4 +0x887:  call   086094b4 <+0x187>
08609bb9 +0x88c:  mov    (%eax),%edx
08609bbb +0x88e:  mov    %edx,(%ebx)
08609bbd +0x890:  mov    0x4(%eax),%edx
08609bc0 +0x893:  mov    %edx,0x4(%ebx)
08609bc3 +0x896:  mov    0x8(%eax),%eax
08609bc6 +0x899:  mov    %eax,0x8(%ebx)
08609bc9 +0x89c:  subl   $0x1,-0xc(%ebp)
08609bcd +0x8a0:  cmpl   $0x0,-0xc(%ebp)
08609bd1 +0x8a4:  setg   %al
08609bd4 +0x8a7:  test   %al,%al
08609bd6 +0x8a9:  jne    08609ba3 <+0x876>
08609bd8 +0x8ab:  mov    0x10(%ebp),%eax
08609bdb +0x8ae:  add    $0x24,%esp
08609bde +0x8b1:  pop    %ebx
08609bdf +0x8b2:  pop    %ebp
08609be0 +0x8b3:  ret
08609be1 +0x8b4:  push   %ebp
08609be2 +0x8b5:  mov    %esp,%ebp
08609be4 +0x8b7:  push   %esi
08609be5 +0x8b8:  push   %ebx
08609be6 +0x8b9:  sub    $0x20,%esp
08609be9 +0x8bc:  mov    0x10(%ebp),%eax
08609bec +0x8bf:  mov    %eax,-0xc(%ebp)
08609bef +0x8c2:  jmp    08609c36 <+0x909>
08609bf1 +0x8c4:  lea    0x8(%ebp),%eax
08609bf4 +0x8c7:  mov    %eax,(%esp)
08609bf7 +0x8ca:  call   08609cbe <+0x991>
08609bfc +0x8cf:  mov    %eax,%ebx
08609bfe +0x8d1:  mov    -0xc(%ebp),%eax
08609c01 +0x8d4:  mov    %eax,0x4(%esp)
08609c05 +0x8d8:  movl   $0xc,(%esp)
08609c0c +0x8df:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08609c11 +0x8e4:  mov    %eax,%edx
08609c13 +0x8e6:  test   %edx,%edx
08609c15 +0x8e8:  je     08609c27 <+0x8fa>
08609c17 +0x8ea:  mov    (%ebx),%edx
08609c19 +0x8ec:  mov    %edx,(%eax)
08609c1b +0x8ee:  mov    0x4(%ebx),%edx
08609c1e +0x8f1:  mov    %edx,0x4(%eax)
08609c21 +0x8f4:  mov    0x8(%ebx),%edx
08609c24 +0x8f7:  mov    %edx,0x8(%eax)
08609c27 +0x8fa:  lea    0x8(%ebp),%eax
08609c2a +0x8fd:  mov    %eax,(%esp)
08609c2d +0x900:  call   08609ca8 <+0x97b>
08609c32 +0x905:  addl   $0xc,-0xc(%ebp)
08609c36 +0x909:  lea    0xc(%ebp),%eax
08609c39 +0x90c:  mov    %eax,0x4(%esp)
08609c3d +0x910:  lea    0x8(%ebp),%eax
08609c40 +0x913:  mov    %eax,(%esp)
08609c43 +0x916:  call   08609c8a <+0x95d>
08609c48 +0x91b:  test   %al,%al
08609c4a +0x91d:  jne    08609bf1 <+0x8c4>
08609c4c +0x91f:  mov    -0xc(%ebp),%eax
08609c4f +0x922:  add    $0x20,%esp
08609c52 +0x925:  pop    %ebx
08609c53 +0x926:  pop    %esi
08609c54 +0x927:  pop    %ebp
08609c55 +0x928:  ret
08609c56 +0x929:  mov    %eax,(%esp)
08609c59 +0x92c:  call   08725ce0 <__cxa_begin_catch>
08609c5e +0x931:  mov    -0xc(%ebp),%eax
08609c61 +0x934:  mov    %eax,0x4(%esp)
08609c65 +0x938:  mov    0x10(%ebp),%eax
08609c68 +0x93b:  mov    %eax,(%esp)
08609c6b +0x93e:  call   084f4047 <_GLOBAL__I__Z7getUserj+0xaff9>  ; global constructors keyed to getUser(unsigned int)+0xaff9
08609c70 +0x943:  call   08724be0 <__cxa_rethrow>
08609c75 +0x948:  mov    %edx,%ebx
08609c77 +0x94a:  mov    %eax,%esi
08609c79 +0x94c:  call   08725c30 <__cxa_end_catch>
08609c7e +0x951:  mov    %esi,%eax
08609c80 +0x953:  mov    %ebx,%edx
08609c82 +0x955:  mov    %eax,(%esp)
08609c85 +0x958:  call   08ae3750 <_Unwind_Resume>
08609c8a +0x95d:  push   %ebp
08609c8b +0x95e:  mov    %esp,%ebp
08609c8d +0x960:  sub    $0x18,%esp
08609c90 +0x963:  mov    0xc(%ebp),%eax
08609c93 +0x966:  mov    %eax,0x4(%esp)
08609c97 +0x96a:  mov    0x8(%ebp),%eax
08609c9a +0x96d:  mov    %eax,(%esp)
08609c9d +0x970:  call   08609cc8 <+0x99b>
08609ca2 +0x975:  xor    $0x1,%eax
08609ca5 +0x978:  leave
08609ca6 +0x979:  ret
08609ca7 +0x97a:  nop
08609ca8 +0x97b:  push   %ebp
08609ca9 +0x97c:  mov    %esp,%ebp
08609cab +0x97e:  mov    0x8(%ebp),%eax
08609cae +0x981:  mov    (%eax),%eax
08609cb0 +0x983:  lea    0xc(%eax),%edx
08609cb3 +0x986:  mov    0x8(%ebp),%eax
08609cb6 +0x989:  mov    %edx,(%eax)
08609cb8 +0x98b:  mov    0x8(%ebp),%eax
08609cbb +0x98e:  pop    %ebp
08609cbc +0x98f:  ret
08609cbd +0x990:  nop
08609cbe +0x991:  push   %ebp
08609cbf +0x992:  mov    %esp,%ebp
08609cc1 +0x994:  mov    0x8(%ebp),%eax
08609cc4 +0x997:  mov    (%eax),%eax
08609cc6 +0x999:  pop    %ebp
08609cc7 +0x99a:  ret
08609cc8 +0x99b:  push   %ebp
08609cc9 +0x99c:  mov    %esp,%ebp
08609ccb +0x99e:  push   %ebx
08609ccc +0x99f:  sub    $0x14,%esp
08609ccf +0x9a2:  mov    0x8(%ebp),%eax
08609cd2 +0x9a5:  mov    %eax,(%esp)
08609cd5 +0x9a8:  call   08609cf2 <+0x9c5>
08609cda +0x9ad:  mov    %eax,%ebx
08609cdc +0x9af:  mov    0xc(%ebp),%eax
08609cdf +0x9b2:  mov    %eax,(%esp)
08609ce2 +0x9b5:  call   08609cf2 <+0x9c5>
08609ce7 +0x9ba:  cmp    %eax,%ebx
08609ce9 +0x9bc:  sete   %al
08609cec +0x9bf:  add    $0x14,%esp
08609cef +0x9c2:  pop    %ebx
08609cf0 +0x9c3:  pop    %ebp
08609cf1 +0x9c4:  ret
08609cf2 +0x9c5:  push   %ebp
08609cf3 +0x9c6:  mov    %esp,%ebp
08609cf5 +0x9c8:  mov    0x8(%ebp),%eax
08609cf8 +0x9cb:  mov    (%eax),%eax
08609cfa +0x9cd:  pop    %ebp
08609cfb +0x9ce:  ret
```

## 反编译 C

```c
// <global>::global @ 0x860932d

/* SkillSlot::set_skill_slot(char*, char*, int) */

void SkillSlot::_GLOBAL__I_set_skill_slot(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
