# arad_sp_charater_name_check

`_GLOBAL__I__ZN4ARAD8DATABASE12CREATE_QUERY27arad_sp_charater_name_checkEP5MySQLP17SIG_CREATE_CHARACPKc`

`global constructors keyed to ARAD::DATABASE::CREATE_QUERY::arad_sp_charater_name_check(MySQL*, SIG_CREATE_CHARAC*, char const*)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to ARAD::DATABASE::CREATE_QUERY` | `0x0818d280` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818d280  _GLOBAL__I__ZN4ARAD8DATABASE12CREATE_QUERY27arad_sp_charater_name_checkEP5MySQLP17SIG_CREATE_CHARACPKc
#           global constructors keyed to ARAD::DATABASE::CREATE_QUERY::arad_sp_charater_name_check(MySQL*, SIG_CREATE_CHARAC*, char const*)
# range [0x0818d280, 0x0818dc83]
0818d280 +0x000:  push   %ebp
0818d281 +0x001:  mov    %esp,%ebp
0818d283 +0x003:  sub    $0x18,%esp
0818d286 +0x006:  movl   $0xffff,0x4(%esp)
0818d28e +0x00e:  movl   $0x1,(%esp)
0818d295 +0x015:  call   0818d240 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0818d29a +0x01a:  leave
0818d29b +0x01b:  ret
0818d29c +0x01c:  push   %ebp
0818d29d +0x01d:  mov    %esp,%ebp
0818d29f +0x01f:  sub    $0x28,%esp
0818d2a2 +0x022:  mov    0x8(%ebp),%eax
0818d2a5 +0x025:  mov    0x4(%eax),%edx
0818d2a8 +0x028:  mov    0x8(%ebp),%eax
0818d2ab +0x02b:  mov    0x8(%eax),%eax
0818d2ae +0x02e:  cmp    %eax,%edx
0818d2b0 +0x030:  je     0818d2df <+0x5f>
0818d2b2 +0x032:  mov    0x8(%ebp),%eax
0818d2b5 +0x035:  mov    0x4(%eax),%edx
0818d2b8 +0x038:  mov    0x8(%ebp),%eax
0818d2bb +0x03b:  mov    0xc(%ebp),%ecx
0818d2be +0x03e:  mov    %ecx,0x8(%esp)
0818d2c2 +0x042:  mov    %edx,0x4(%esp)
0818d2c6 +0x046:  mov    %eax,(%esp)
0818d2c9 +0x049:  call   0818d310 <+0x90>
0818d2ce +0x04e:  mov    0x8(%ebp),%eax
0818d2d1 +0x051:  mov    0x4(%eax),%eax
0818d2d4 +0x054:  lea    0x18(%eax),%edx
0818d2d7 +0x057:  mov    0x8(%ebp),%eax
0818d2da +0x05a:  mov    %edx,0x4(%eax)
0818d2dd +0x05d:  jmp    0818d30d <+0x8d>
0818d2df +0x05f:  lea    -0xc(%ebp),%eax
0818d2e2 +0x062:  mov    0x8(%ebp),%edx
0818d2e5 +0x065:  mov    %edx,0x4(%esp)
0818d2e9 +0x069:  mov    %eax,(%esp)
0818d2ec +0x06c:  call   0818d356 <+0xd6>
0818d2f1 +0x071:  sub    $0x4,%esp
0818d2f4 +0x074:  mov    0xc(%ebp),%eax
0818d2f7 +0x077:  mov    %eax,0x8(%esp)
0818d2fb +0x07b:  mov    -0xc(%ebp),%eax
0818d2fe +0x07e:  mov    %eax,0x4(%esp)
0818d302 +0x082:  mov    0x8(%ebp),%eax
0818d305 +0x085:  mov    %eax,(%esp)
0818d308 +0x088:  call   0818d37c <+0xfc>
0818d30d +0x08d:  leave
0818d30e +0x08e:  ret
0818d30f +0x08f:  nop
0818d310 +0x090:  push   %ebp
0818d311 +0x091:  mov    %esp,%ebp
0818d313 +0x093:  sub    $0x18,%esp
0818d316 +0x096:  mov    0xc(%ebp),%eax
0818d319 +0x099:  mov    %eax,0x4(%esp)
0818d31d +0x09d:  movl   $0x18,(%esp)
0818d324 +0x0a4:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
0818d329 +0x0a9:  mov    %eax,%edx
0818d32b +0x0ab:  test   %edx,%edx
0818d32d +0x0ad:  je     0818d354 <+0xd4>
0818d32f +0x0af:  mov    0x10(%ebp),%edx
0818d332 +0x0b2:  mov    (%edx),%ecx
0818d334 +0x0b4:  mov    %ecx,(%eax)
0818d336 +0x0b6:  mov    0x4(%edx),%ecx
0818d339 +0x0b9:  mov    %ecx,0x4(%eax)
0818d33c +0x0bc:  mov    0x8(%edx),%ecx
0818d33f +0x0bf:  mov    %ecx,0x8(%eax)
0818d342 +0x0c2:  mov    0xc(%edx),%ecx
0818d345 +0x0c5:  mov    %ecx,0xc(%eax)
0818d348 +0x0c8:  mov    0x10(%edx),%ecx
0818d34b +0x0cb:  mov    %ecx,0x10(%eax)
0818d34e +0x0ce:  mov    0x14(%edx),%edx
0818d351 +0x0d1:  mov    %edx,0x14(%eax)
0818d354 +0x0d4:  leave
0818d355 +0x0d5:  ret
0818d356 +0x0d6:  push   %ebp
0818d357 +0x0d7:  mov    %esp,%ebp
0818d359 +0x0d9:  push   %ebx
0818d35a +0x0da:  sub    $0x14,%esp
0818d35d +0x0dd:  mov    0x8(%ebp),%ebx
0818d360 +0x0e0:  mov    0xc(%ebp),%eax
0818d363 +0x0e3:  add    $0x4,%eax
0818d366 +0x0e6:  mov    %eax,0x4(%esp)
0818d36a +0x0ea:  mov    %ebx,(%esp)
0818d36d +0x0ed:  call   0818d668 <+0x3e8>
0818d372 +0x0f2:  mov    %ebx,%eax
0818d374 +0x0f4:  add    $0x14,%esp
0818d377 +0x0f7:  pop    %ebx
0818d378 +0x0f8:  pop    %ebp
0818d379 +0x0f9:  ret    $0x4
0818d37c +0x0fc:  push   %ebp
0818d37d +0x0fd:  mov    %esp,%ebp
0818d37f +0x0ff:  push   %esi
0818d380 +0x100:  push   %ebx
0818d381 +0x101:  sub    $0x30,%esp
0818d384 +0x104:  mov    0x8(%ebp),%eax
0818d387 +0x107:  mov    0x4(%eax),%edx
0818d38a +0x10a:  mov    0x8(%ebp),%eax
0818d38d +0x10d:  mov    0x8(%eax),%eax
0818d390 +0x110:  cmp    %eax,%edx
0818d392 +0x112:  je     0818d43f <+0x1bf>
0818d398 +0x118:  mov    0x8(%ebp),%eax
0818d39b +0x11b:  mov    0x4(%eax),%eax
0818d39e +0x11e:  sub    $0x18,%eax
0818d3a1 +0x121:  mov    %eax,(%esp)
0818d3a4 +0x124:  call   0818d677 <+0x3f7>
0818d3a9 +0x129:  mov    0x8(%ebp),%edx
0818d3ac +0x12c:  mov    0x4(%edx),%ecx
0818d3af +0x12f:  mov    0x8(%ebp),%edx
0818d3b2 +0x132:  mov    %eax,0x8(%esp)
0818d3b6 +0x136:  mov    %ecx,0x4(%esp)
0818d3ba +0x13a:  mov    %edx,(%esp)
0818d3bd +0x13d:  call   0818d680 <+0x400>
0818d3c2 +0x142:  mov    0x8(%ebp),%eax
0818d3c5 +0x145:  mov    0x4(%eax),%eax
0818d3c8 +0x148:  lea    0x18(%eax),%edx
0818d3cb +0x14b:  mov    0x8(%ebp),%eax
0818d3ce +0x14e:  mov    %edx,0x4(%eax)
0818d3d1 +0x151:  mov    0x8(%ebp),%eax
0818d3d4 +0x154:  mov    0x4(%eax),%eax
0818d3d7 +0x157:  lea    -0x18(%eax),%esi
0818d3da +0x15a:  mov    0x8(%ebp),%eax
0818d3dd +0x15d:  mov    0x4(%eax),%eax
0818d3e0 +0x160:  lea    -0x30(%eax),%ebx
0818d3e3 +0x163:  lea    0xc(%ebp),%eax
0818d3e6 +0x166:  mov    %eax,(%esp)
0818d3e9 +0x169:  call   0818d6f2 <+0x472>
0818d3ee +0x16e:  mov    (%eax),%eax
0818d3f0 +0x170:  mov    %esi,0x8(%esp)
0818d3f4 +0x174:  mov    %ebx,0x4(%esp)
0818d3f8 +0x178:  mov    %eax,(%esp)
0818d3fb +0x17b:  call   0818d6fa <+0x47a>
0818d400 +0x180:  lea    0xc(%ebp),%eax
0818d403 +0x183:  mov    %eax,(%esp)
0818d406 +0x186:  call   0818d73a <+0x4ba>
0818d40b +0x18b:  mov    %eax,%ebx
0818d40d +0x18d:  mov    0x10(%ebp),%eax
0818d410 +0x190:  mov    %eax,(%esp)
0818d413 +0x193:  call   0818d732 <+0x4b2>
0818d418 +0x198:  mov    (%eax),%edx
0818d41a +0x19a:  mov    %edx,(%ebx)
0818d41c +0x19c:  mov    0x4(%eax),%edx
0818d41f +0x19f:  mov    %edx,0x4(%ebx)
0818d422 +0x1a2:  mov    0x8(%eax),%edx
0818d425 +0x1a5:  mov    %edx,0x8(%ebx)
0818d428 +0x1a8:  mov    0xc(%eax),%edx
0818d42b +0x1ab:  mov    %edx,0xc(%ebx)
0818d42e +0x1ae:  mov    0x10(%eax),%edx
0818d431 +0x1b1:  mov    %edx,0x10(%ebx)
0818d434 +0x1b4:  mov    0x14(%eax),%eax
0818d437 +0x1b7:  mov    %eax,0x14(%ebx)
0818d43a +0x1ba:  jmp    0818d65e <+0x3de>
0818d43f +0x1bf:  movl   $"vector::_M_insert_aux",0x8(%esp)
0818d447 +0x1c7:  movl   $0x1,0x4(%esp)
0818d44f +0x1cf:  mov    0x8(%ebp),%eax
0818d452 +0x1d2:  mov    %eax,(%esp)
0818d455 +0x1d5:  call   0818d744 <+0x4c4>
0818d45a +0x1da:  mov    %eax,-0x18(%ebp)
0818d45d +0x1dd:  lea    -0x1c(%ebp),%eax
0818d460 +0x1e0:  mov    0x8(%ebp),%edx
0818d463 +0x1e3:  mov    %edx,0x4(%esp)
0818d467 +0x1e7:  mov    %eax,(%esp)
0818d46a +0x1ea:  call   0818d7ea <+0x56a>
0818d46f +0x1ef:  sub    $0x4,%esp
0818d472 +0x1f2:  lea    -0x1c(%ebp),%eax
0818d475 +0x1f5:  mov    %eax,0x4(%esp)
0818d479 +0x1f9:  lea    0xc(%ebp),%eax
0818d47c +0x1fc:  mov    %eax,(%esp)
0818d47f +0x1ff:  call   0818d80d <+0x58d>
0818d484 +0x204:  mov    %eax,-0x14(%ebp)
0818d487 +0x207:  mov    0x8(%ebp),%eax
0818d48a +0x20a:  mov    -0x18(%ebp),%edx
0818d48d +0x20d:  mov    %edx,0x4(%esp)
0818d491 +0x211:  mov    %eax,(%esp)
0818d494 +0x214:  call   0818d846 <+0x5c6>
0818d499 +0x219:  mov    %eax,-0x10(%ebp)
0818d49c +0x21c:  mov    -0x10(%ebp),%eax
0818d49f +0x21f:  mov    %eax,-0xc(%ebp)
0818d4a2 +0x222:  mov    0x10(%ebp),%eax
0818d4a5 +0x225:  mov    %eax,(%esp)
0818d4a8 +0x228:  call   0818d732 <+0x4b2>
0818d4ad +0x22d:  mov    %eax,%ecx
0818d4af +0x22f:  mov    -0x14(%ebp),%edx
0818d4b2 +0x232:  mov    %edx,%eax
0818d4b4 +0x234:  add    %eax,%eax
0818d4b6 +0x236:  add    %edx,%eax
0818d4b8 +0x238:  shl    $0x3,%eax
0818d4bb +0x23b:  mov    %eax,%edx
0818d4bd +0x23d:  add    -0x10(%ebp),%edx
0818d4c0 +0x240:  mov    0x8(%ebp),%eax
0818d4c3 +0x243:  mov    %ecx,0x8(%esp)
0818d4c7 +0x247:  mov    %edx,0x4(%esp)
0818d4cb +0x24b:  mov    %eax,(%esp)
0818d4ce +0x24e:  call   0818d310 <+0x90>
0818d4d3 +0x253:  movl   $0x0,-0xc(%ebp)
0818d4da +0x25a:  mov    0x8(%ebp),%eax
0818d4dd +0x25d:  mov    %eax,(%esp)
0818d4e0 +0x260:  call   0818d876 <+0x5f6>
0818d4e5 +0x265:  mov    %eax,%ebx
0818d4e7 +0x267:  lea    0xc(%ebp),%eax
0818d4ea +0x26a:  mov    %eax,(%esp)
0818d4ed +0x26d:  call   0818d6f2 <+0x472>
0818d4f2 +0x272:  mov    (%eax),%edx
0818d4f4 +0x274:  mov    0x8(%ebp),%eax
0818d4f7 +0x277:  mov    (%eax),%eax
0818d4f9 +0x279:  mov    %ebx,0xc(%esp)
0818d4fd +0x27d:  mov    -0x10(%ebp),%ecx
0818d500 +0x280:  mov    %ecx,0x8(%esp)
0818d504 +0x284:  mov    %edx,0x4(%esp)
0818d508 +0x288:  mov    %eax,(%esp)
0818d50b +0x28b:  call   0818d87e <+0x5fe>
0818d510 +0x290:  mov    %eax,-0xc(%ebp)
0818d513 +0x293:  addl   $0x18,-0xc(%ebp)
0818d517 +0x297:  mov    0x8(%ebp),%eax
0818d51a +0x29a:  mov    %eax,(%esp)
0818d51d +0x29d:  call   0818d876 <+0x5f6>
0818d522 +0x2a2:  mov    %eax,%ebx
0818d524 +0x2a4:  mov    0x8(%ebp),%eax
0818d527 +0x2a7:  mov    0x4(%eax),%esi
0818d52a +0x2aa:  lea    0xc(%ebp),%eax
0818d52d +0x2ad:  mov    %eax,(%esp)
0818d530 +0x2b0:  call   0818d6f2 <+0x472>
0818d535 +0x2b5:  mov    (%eax),%eax
0818d537 +0x2b7:  mov    %ebx,0xc(%esp)
0818d53b +0x2bb:  mov    -0xc(%ebp),%edx
0818d53e +0x2be:  mov    %edx,0x8(%esp)
0818d542 +0x2c2:  mov    %esi,0x4(%esp)
0818d546 +0x2c6:  mov    %eax,(%esp)
0818d549 +0x2c9:  call   0818d87e <+0x5fe>
0818d54e +0x2ce:  mov    %eax,-0xc(%ebp)
0818d551 +0x2d1:  mov    0x8(%ebp),%eax
0818d554 +0x2d4:  mov    %eax,(%esp)
0818d557 +0x2d7:  call   0818d876 <+0x5f6>
0818d55c +0x2dc:  mov    0x8(%ebp),%edx
0818d55f +0x2df:  mov    0x4(%edx),%ecx
0818d562 +0x2e2:  mov    0x8(%ebp),%edx
0818d565 +0x2e5:  mov    (%edx),%edx
0818d567 +0x2e7:  mov    %eax,0x8(%esp)
0818d56b +0x2eb:  mov    %ecx,0x4(%esp)
0818d56f +0x2ef:  mov    %edx,(%esp)
0818d572 +0x2f2:  call   0818d8e9 <+0x669>
0818d577 +0x2f7:  mov    0x8(%ebp),%eax
0818d57a +0x2fa:  mov    0x8(%eax),%eax
0818d57d +0x2fd:  mov    %eax,%edx
0818d57f +0x2ff:  mov    0x8(%ebp),%eax
0818d582 +0x302:  mov    (%eax),%eax
0818d584 +0x304:  mov    %edx,%ecx
0818d586 +0x306:  sub    %eax,%ecx
0818d588 +0x308:  mov    %ecx,%eax
0818d58a +0x30a:  sar    $0x3,%eax
0818d58d +0x30d:  imul   $0xaaaaaaab,%eax,%eax
0818d593 +0x313:  mov    %eax,%ecx
0818d595 +0x315:  mov    0x8(%ebp),%eax
0818d598 +0x318:  mov    (%eax),%edx
0818d59a +0x31a:  mov    0x8(%ebp),%eax
0818d59d +0x31d:  mov    %ecx,0x8(%esp)
0818d5a1 +0x321:  mov    %edx,0x4(%esp)
0818d5a5 +0x325:  mov    %eax,(%esp)
0818d5a8 +0x328:  call   0818d904 <+0x684>
0818d5ad +0x32d:  mov    0x8(%ebp),%eax
0818d5b0 +0x330:  mov    -0x10(%ebp),%edx
0818d5b3 +0x333:  mov    %edx,(%eax)
0818d5b5 +0x335:  mov    0x8(%ebp),%eax
0818d5b8 +0x338:  mov    -0xc(%ebp),%edx
0818d5bb +0x33b:  mov    %edx,0x4(%eax)
0818d5be +0x33e:  mov    -0x18(%ebp),%edx
0818d5c1 +0x341:  mov    %edx,%eax
0818d5c3 +0x343:  add    %eax,%eax
0818d5c5 +0x345:  add    %edx,%eax
0818d5c7 +0x347:  shl    $0x3,%eax
0818d5ca +0x34a:  mov    %eax,%edx
0818d5cc +0x34c:  add    -0x10(%ebp),%edx
0818d5cf +0x34f:  mov    0x8(%ebp),%eax
0818d5d2 +0x352:  mov    %edx,0x8(%eax)
0818d5d5 +0x355:  jmp    0818d65e <+0x3de>
0818d5da +0x35a:  mov    %eax,(%esp)
0818d5dd +0x35d:  call   08725ce0 <__cxa_begin_catch>
0818d5e2 +0x362:  cmpl   $0x0,-0xc(%ebp)
0818d5e6 +0x366:  jne    0818d60a <+0x38a>
0818d5e8 +0x368:  mov    -0x14(%ebp),%edx
0818d5eb +0x36b:  mov    %edx,%eax
0818d5ed +0x36d:  add    %eax,%eax
0818d5ef +0x36f:  add    %edx,%eax
0818d5f1 +0x371:  shl    $0x3,%eax
0818d5f4 +0x374:  mov    %eax,%edx
0818d5f6 +0x376:  add    -0x10(%ebp),%edx
0818d5f9 +0x379:  mov    0x8(%ebp),%eax
0818d5fc +0x37c:  mov    %edx,0x4(%esp)
0818d600 +0x380:  mov    %eax,(%esp)
0818d603 +0x383:  call   0818d8d6 <+0x656>
0818d608 +0x388:  jmp    0818d62b <+0x3ab>
0818d60a +0x38a:  mov    0x8(%ebp),%eax
0818d60d +0x38d:  mov    %eax,(%esp)
0818d610 +0x390:  call   0818d876 <+0x5f6>
0818d615 +0x395:  mov    %eax,0x8(%esp)
0818d619 +0x399:  mov    -0xc(%ebp),%eax
0818d61c +0x39c:  mov    %eax,0x4(%esp)
0818d620 +0x3a0:  mov    -0x10(%ebp),%eax
0818d623 +0x3a3:  mov    %eax,(%esp)
0818d626 +0x3a6:  call   0818d8e9 <+0x669>
0818d62b +0x3ab:  mov    0x8(%ebp),%eax
0818d62e +0x3ae:  mov    -0x18(%ebp),%edx
0818d631 +0x3b1:  mov    %edx,0x8(%esp)
0818d635 +0x3b5:  mov    -0x10(%ebp),%edx
0818d638 +0x3b8:  mov    %edx,0x4(%esp)
0818d63c +0x3bc:  mov    %eax,(%esp)
0818d63f +0x3bf:  call   0818d904 <+0x684>
0818d644 +0x3c4:  call   08724be0 <__cxa_rethrow>
0818d649 +0x3c9:  mov    %edx,%ebx
0818d64b +0x3cb:  mov    %eax,%esi
0818d64d +0x3cd:  call   08725c30 <__cxa_end_catch>
0818d652 +0x3d2:  mov    %esi,%eax
0818d654 +0x3d4:  mov    %ebx,%edx
0818d656 +0x3d6:  mov    %eax,(%esp)
0818d659 +0x3d9:  call   08ae3750 <_Unwind_Resume>
0818d65e +0x3de:  lea    -0x8(%ebp),%esp
0818d661 +0x3e1:  add    $0x0,%esp
0818d664 +0x3e4:  pop    %ebx
0818d665 +0x3e5:  pop    %esi
0818d666 +0x3e6:  pop    %ebp
0818d667 +0x3e7:  ret
0818d668 +0x3e8:  push   %ebp
0818d669 +0x3e9:  mov    %esp,%ebp
0818d66b +0x3eb:  mov    0xc(%ebp),%eax
0818d66e +0x3ee:  mov    (%eax),%edx
0818d670 +0x3f0:  mov    0x8(%ebp),%eax
0818d673 +0x3f3:  mov    %edx,(%eax)
0818d675 +0x3f5:  pop    %ebp
0818d676 +0x3f6:  ret
0818d677 +0x3f7:  push   %ebp
0818d678 +0x3f8:  mov    %esp,%ebp
0818d67a +0x3fa:  mov    0x8(%ebp),%eax
0818d67d +0x3fd:  pop    %ebp
0818d67e +0x3fe:  ret
0818d67f +0x3ff:  nop
0818d680 +0x400:  push   %ebp
0818d681 +0x401:  mov    %esp,%ebp
0818d683 +0x403:  sub    $0x38,%esp
0818d686 +0x406:  mov    0x10(%ebp),%eax
0818d689 +0x409:  mov    %eax,(%esp)
0818d68c +0x40c:  call   0818d92b <+0x6ab>
0818d691 +0x411:  mov    (%eax),%edx
0818d693 +0x413:  mov    %edx,-0x20(%ebp)
0818d696 +0x416:  mov    0x4(%eax),%edx
0818d699 +0x419:  mov    %edx,-0x1c(%ebp)
0818d69c +0x41c:  mov    0x8(%eax),%edx
0818d69f +0x41f:  mov    %edx,-0x18(%ebp)
0818d6a2 +0x422:  mov    0xc(%eax),%edx
0818d6a5 +0x425:  mov    %edx,-0x14(%ebp)
0818d6a8 +0x428:  mov    0x10(%eax),%edx
0818d6ab +0x42b:  mov    %edx,-0x10(%ebp)
0818d6ae +0x42e:  mov    0x14(%eax),%eax
0818d6b1 +0x431:  mov    %eax,-0xc(%ebp)
0818d6b4 +0x434:  mov    0xc(%ebp),%eax
0818d6b7 +0x437:  mov    %eax,0x4(%esp)
0818d6bb +0x43b:  movl   $0x18,(%esp)
0818d6c2 +0x442:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
0818d6c7 +0x447:  mov    %eax,%edx
0818d6c9 +0x449:  test   %edx,%edx
0818d6cb +0x44b:  je     0818d6f0 <+0x470>
0818d6cd +0x44d:  mov    -0x20(%ebp),%edx
0818d6d0 +0x450:  mov    %edx,(%eax)
0818d6d2 +0x452:  mov    -0x1c(%ebp),%edx
0818d6d5 +0x455:  mov    %edx,0x4(%eax)
0818d6d8 +0x458:  mov    -0x18(%ebp),%edx
0818d6db +0x45b:  mov    %edx,0x8(%eax)
0818d6de +0x45e:  mov    -0x14(%ebp),%edx
0818d6e1 +0x461:  mov    %edx,0xc(%eax)
0818d6e4 +0x464:  mov    -0x10(%ebp),%edx
0818d6e7 +0x467:  mov    %edx,0x10(%eax)
0818d6ea +0x46a:  mov    -0xc(%ebp),%edx
0818d6ed +0x46d:  mov    %edx,0x14(%eax)
0818d6f0 +0x470:  leave
0818d6f1 +0x471:  ret
0818d6f2 +0x472:  push   %ebp
0818d6f3 +0x473:  mov    %esp,%ebp
0818d6f5 +0x475:  mov    0x8(%ebp),%eax
0818d6f8 +0x478:  pop    %ebp
0818d6f9 +0x479:  ret
0818d6fa +0x47a:  push   %ebp
0818d6fb +0x47b:  mov    %esp,%ebp
0818d6fd +0x47d:  push   %ebx
0818d6fe +0x47e:  sub    $0x14,%esp
0818d701 +0x481:  mov    0xc(%ebp),%eax
0818d704 +0x484:  mov    %eax,(%esp)
0818d707 +0x487:  call   0818d933 <+0x6b3>
0818d70c +0x48c:  mov    %eax,%ebx
0818d70e +0x48e:  mov    0x8(%ebp),%eax
0818d711 +0x491:  mov    %eax,(%esp)
0818d714 +0x494:  call   0818d933 <+0x6b3>
0818d719 +0x499:  mov    0x10(%ebp),%edx
0818d71c +0x49c:  mov    %edx,0x8(%esp)
0818d720 +0x4a0:  mov    %ebx,0x4(%esp)
0818d724 +0x4a4:  mov    %eax,(%esp)
0818d727 +0x4a7:  call   0818d93b <+0x6bb>
0818d72c +0x4ac:  add    $0x14,%esp
0818d72f +0x4af:  pop    %ebx
0818d730 +0x4b0:  pop    %ebp
0818d731 +0x4b1:  ret
0818d732 +0x4b2:  push   %ebp
0818d733 +0x4b3:  mov    %esp,%ebp
0818d735 +0x4b5:  mov    0x8(%ebp),%eax
0818d738 +0x4b8:  pop    %ebp
0818d739 +0x4b9:  ret
0818d73a +0x4ba:  push   %ebp
0818d73b +0x4bb:  mov    %esp,%ebp
0818d73d +0x4bd:  mov    0x8(%ebp),%eax
0818d740 +0x4c0:  mov    (%eax),%eax
0818d742 +0x4c2:  pop    %ebp
0818d743 +0x4c3:  ret
0818d744 +0x4c4:  push   %ebp
0818d745 +0x4c5:  mov    %esp,%ebp
0818d747 +0x4c7:  push   %ebx
0818d748 +0x4c8:  sub    $0x24,%esp
0818d74b +0x4cb:  mov    0x8(%ebp),%eax
0818d74e +0x4ce:  mov    %eax,(%esp)
0818d751 +0x4d1:  call   0818d9a2 <+0x722>
0818d756 +0x4d6:  mov    %eax,%ebx
0818d758 +0x4d8:  mov    0x8(%ebp),%eax
0818d75b +0x4db:  mov    %eax,(%esp)
0818d75e +0x4de:  call   0818d980 <+0x700>
0818d763 +0x4e3:  mov    %ebx,%edx
0818d765 +0x4e5:  sub    %eax,%edx
0818d767 +0x4e7:  mov    0xc(%ebp),%eax
0818d76a +0x4ea:  cmp    %eax,%edx
0818d76c +0x4ec:  setb   %al
0818d76f +0x4ef:  test   %al,%al
0818d771 +0x4f1:  je     0818d77e <+0x4fe>
0818d773 +0x4f3:  mov    0x10(%ebp),%eax
0818d776 +0x4f6:  mov    %eax,(%esp)
0818d779 +0x4f9:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
0818d77e +0x4fe:  mov    0x8(%ebp),%eax
0818d781 +0x501:  mov    %eax,(%esp)
0818d784 +0x504:  call   0818d980 <+0x700>
0818d789 +0x509:  mov    %eax,%ebx
0818d78b +0x50b:  mov    0x8(%ebp),%eax
0818d78e +0x50e:  mov    %eax,(%esp)
0818d791 +0x511:  call   0818d980 <+0x700>
0818d796 +0x516:  mov    %eax,-0x10(%ebp)
0818d799 +0x519:  lea    0xc(%ebp),%eax
0818d79c +0x51c:  mov    %eax,0x4(%esp)
0818d7a0 +0x520:  lea    -0x10(%ebp),%eax
0818d7a3 +0x523:  mov    %eax,(%esp)
0818d7a6 +0x526:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
0818d7ab +0x52b:  mov    (%eax),%eax
0818d7ad +0x52d:  lea    (%ebx,%eax,1),%eax
0818d7b0 +0x530:  mov    %eax,-0xc(%ebp)
0818d7b3 +0x533:  mov    0x8(%ebp),%eax
0818d7b6 +0x536:  mov    %eax,(%esp)
0818d7b9 +0x539:  call   0818d980 <+0x700>
0818d7be +0x53e:  cmp    -0xc(%ebp),%eax
0818d7c1 +0x541:  ja     0818d7d3 <+0x553>
0818d7c3 +0x543:  mov    0x8(%ebp),%eax
0818d7c6 +0x546:  mov    %eax,(%esp)
0818d7c9 +0x549:  call   0818d9a2 <+0x722>
0818d7ce +0x54e:  cmp    -0xc(%ebp),%eax
0818d7d1 +0x551:  jae    0818d7e0 <+0x560>
0818d7d3 +0x553:  mov    0x8(%ebp),%eax
0818d7d6 +0x556:  mov    %eax,(%esp)
0818d7d9 +0x559:  call   0818d9a2 <+0x722>
0818d7de +0x55e:  jmp    0818d7e3 <+0x563>
0818d7e0 +0x560:  mov    -0xc(%ebp),%eax
0818d7e3 +0x563:  add    $0x24,%esp
0818d7e6 +0x566:  pop    %ebx
0818d7e7 +0x567:  pop    %ebp
0818d7e8 +0x568:  ret
0818d7e9 +0x569:  nop
0818d7ea +0x56a:  push   %ebp
0818d7eb +0x56b:  mov    %esp,%ebp
0818d7ed +0x56d:  push   %ebx
0818d7ee +0x56e:  sub    $0x14,%esp
0818d7f1 +0x571:  mov    0x8(%ebp),%ebx
0818d7f4 +0x574:  mov    0xc(%ebp),%eax
0818d7f7 +0x577:  mov    %eax,0x4(%esp)
0818d7fb +0x57b:  mov    %ebx,(%esp)
0818d7fe +0x57e:  call   0818d668 <+0x3e8>
0818d803 +0x583:  mov    %ebx,%eax
0818d805 +0x585:  add    $0x14,%esp
0818d808 +0x588:  pop    %ebx
0818d809 +0x589:  pop    %ebp
0818d80a +0x58a:  ret    $0x4
0818d80d +0x58d:  push   %ebp
0818d80e +0x58e:  mov    %esp,%ebp
0818d810 +0x590:  push   %ebx
0818d811 +0x591:  sub    $0x14,%esp
0818d814 +0x594:  mov    0x8(%ebp),%eax
0818d817 +0x597:  mov    %eax,(%esp)
0818d81a +0x59a:  call   0818d6f2 <+0x472>
0818d81f +0x59f:  mov    (%eax),%eax
0818d821 +0x5a1:  mov    %eax,%ebx
0818d823 +0x5a3:  mov    0xc(%ebp),%eax
0818d826 +0x5a6:  mov    %eax,(%esp)
0818d829 +0x5a9:  call   0818d6f2 <+0x472>
0818d82e +0x5ae:  mov    (%eax),%eax
0818d830 +0x5b0:  mov    %ebx,%edx
0818d832 +0x5b2:  sub    %eax,%edx
0818d834 +0x5b4:  mov    %edx,%eax
0818d836 +0x5b6:  sar    $0x3,%eax
0818d839 +0x5b9:  imul   $0xaaaaaaab,%eax,%eax
0818d83f +0x5bf:  add    $0x14,%esp
0818d842 +0x5c2:  pop    %ebx
0818d843 +0x5c3:  pop    %ebp
0818d844 +0x5c4:  ret
0818d845 +0x5c5:  nop
0818d846 +0x5c6:  push   %ebp
0818d847 +0x5c7:  mov    %esp,%ebp
0818d849 +0x5c9:  sub    $0x18,%esp
0818d84c +0x5cc:  cmpl   $0x0,0xc(%ebp)
0818d850 +0x5d0:  je     0818d86e <+0x5ee>
0818d852 +0x5d2:  mov    0x8(%ebp),%eax
0818d855 +0x5d5:  movl   $0x0,0x8(%esp)
0818d85d +0x5dd:  mov    0xc(%ebp),%edx
0818d860 +0x5e0:  mov    %edx,0x4(%esp)
0818d864 +0x5e4:  mov    %eax,(%esp)
0818d867 +0x5e7:  call   0818d9be <+0x73e>
0818d86c +0x5ec:  jmp    0818d873 <+0x5f3>
0818d86e +0x5ee:  mov    $0x0,%eax
0818d873 +0x5f3:  leave
0818d874 +0x5f4:  ret
0818d875 +0x5f5:  nop
0818d876 +0x5f6:  push   %ebp
0818d877 +0x5f7:  mov    %esp,%ebp
0818d879 +0x5f9:  mov    0x8(%ebp),%eax
0818d87c +0x5fc:  pop    %ebp
0818d87d +0x5fd:  ret
0818d87e +0x5fe:  push   %ebp
0818d87f +0x5ff:  mov    %esp,%ebp
0818d881 +0x601:  sub    $0x28,%esp
0818d884 +0x604:  lea    -0x10(%ebp),%eax
0818d887 +0x607:  lea    0xc(%ebp),%edx
0818d88a +0x60a:  mov    %edx,0x4(%esp)
0818d88e +0x60e:  mov    %eax,(%esp)
0818d891 +0x611:  call   0818d9fc <+0x77c>
0818d896 +0x616:  sub    $0x4,%esp
0818d899 +0x619:  lea    -0xc(%ebp),%eax
0818d89c +0x61c:  lea    0x8(%ebp),%edx
0818d89f +0x61f:  mov    %edx,0x4(%esp)
0818d8a3 +0x623:  mov    %eax,(%esp)
0818d8a6 +0x626:  call   0818d9fc <+0x77c>
0818d8ab +0x62b:  sub    $0x4,%esp
0818d8ae +0x62e:  mov    0x14(%ebp),%eax
0818d8b1 +0x631:  mov    %eax,0xc(%esp)
0818d8b5 +0x635:  mov    0x10(%ebp),%eax
0818d8b8 +0x638:  mov    %eax,0x8(%esp)
0818d8bc +0x63c:  mov    -0x10(%ebp),%eax
0818d8bf +0x63f:  mov    %eax,0x4(%esp)
0818d8c3 +0x643:  mov    -0xc(%ebp),%eax
0818d8c6 +0x646:  mov    %eax,(%esp)
0818d8c9 +0x649:  call   0818da21 <+0x7a1>
0818d8ce +0x64e:  leave
0818d8cf +0x64f:  ret
0818d8d0 +0x650:  push   %ebp
0818d8d1 +0x651:  mov    %esp,%ebp
0818d8d3 +0x653:  pop    %ebp
0818d8d4 +0x654:  ret
0818d8d5 +0x655:  nop
0818d8d6 +0x656:  push   %ebp
0818d8d7 +0x657:  mov    %esp,%ebp
0818d8d9 +0x659:  sub    $0x18,%esp
0818d8dc +0x65c:  mov    0xc(%ebp),%eax
0818d8df +0x65f:  mov    %eax,(%esp)
0818d8e2 +0x662:  call   0818d8d0 <+0x650>
0818d8e7 +0x667:  leave
0818d8e8 +0x668:  ret
0818d8e9 +0x669:  push   %ebp
0818d8ea +0x66a:  mov    %esp,%ebp
0818d8ec +0x66c:  sub    $0x18,%esp
0818d8ef +0x66f:  mov    0xc(%ebp),%eax
0818d8f2 +0x672:  mov    %eax,0x4(%esp)
0818d8f6 +0x676:  mov    0x8(%ebp),%eax
0818d8f9 +0x679:  mov    %eax,(%esp)
0818d8fc +0x67c:  call   0818da42 <+0x7c2>
0818d901 +0x681:  leave
0818d902 +0x682:  ret
0818d903 +0x683:  nop
0818d904 +0x684:  push   %ebp
0818d905 +0x685:  mov    %esp,%ebp
0818d907 +0x687:  sub    $0x18,%esp
0818d90a +0x68a:  cmpl   $0x0,0xc(%ebp)
0818d90e +0x68e:  je     0818d929 <+0x6a9>
0818d910 +0x690:  mov    0x8(%ebp),%eax
0818d913 +0x693:  mov    0x10(%ebp),%edx
0818d916 +0x696:  mov    %edx,0x8(%esp)
0818d91a +0x69a:  mov    0xc(%ebp),%edx
0818d91d +0x69d:  mov    %edx,0x4(%esp)
0818d921 +0x6a1:  mov    %eax,(%esp)
0818d924 +0x6a4:  call   0818da5c <+0x7dc>
0818d929 +0x6a9:  leave
0818d92a +0x6aa:  ret
0818d92b +0x6ab:  push   %ebp
0818d92c +0x6ac:  mov    %esp,%ebp
0818d92e +0x6ae:  mov    0x8(%ebp),%eax
0818d931 +0x6b1:  pop    %ebp
0818d932 +0x6b2:  ret
0818d933 +0x6b3:  push   %ebp
0818d934 +0x6b4:  mov    %esp,%ebp
0818d936 +0x6b6:  mov    0x8(%ebp),%eax
0818d939 +0x6b9:  pop    %ebp
0818d93a +0x6ba:  ret
0818d93b +0x6bb:  push   %ebp
0818d93c +0x6bc:  mov    %esp,%ebp
0818d93e +0x6be:  push   %esi
0818d93f +0x6bf:  push   %ebx
0818d940 +0x6c0:  sub    $0x10,%esp
0818d943 +0x6c3:  mov    0x10(%ebp),%eax
0818d946 +0x6c6:  mov    %eax,(%esp)
0818d949 +0x6c9:  call   0818da6f <+0x7ef>
0818d94e +0x6ce:  mov    %eax,%esi
0818d950 +0x6d0:  mov    0xc(%ebp),%eax
0818d953 +0x6d3:  mov    %eax,(%esp)
0818d956 +0x6d6:  call   0818da6f <+0x7ef>
0818d95b +0x6db:  mov    %eax,%ebx
0818d95d +0x6dd:  mov    0x8(%ebp),%eax
0818d960 +0x6e0:  mov    %eax,(%esp)
0818d963 +0x6e3:  call   0818da6f <+0x7ef>
0818d968 +0x6e8:  mov    %esi,0x8(%esp)
0818d96c +0x6ec:  mov    %ebx,0x4(%esp)
0818d970 +0x6f0:  mov    %eax,(%esp)
0818d973 +0x6f3:  call   0818da77 <+0x7f7>
0818d978 +0x6f8:  add    $0x10,%esp
0818d97b +0x6fb:  pop    %ebx
0818d97c +0x6fc:  pop    %esi
0818d97d +0x6fd:  pop    %ebp
0818d97e +0x6fe:  ret
0818d97f +0x6ff:  nop
0818d980 +0x700:  push   %ebp
0818d981 +0x701:  mov    %esp,%ebp
0818d983 +0x703:  mov    0x8(%ebp),%eax
0818d986 +0x706:  mov    0x4(%eax),%eax
0818d989 +0x709:  mov    %eax,%edx
0818d98b +0x70b:  mov    0x8(%ebp),%eax
0818d98e +0x70e:  mov    (%eax),%eax
0818d990 +0x710:  mov    %edx,%ecx
0818d992 +0x712:  sub    %eax,%ecx
0818d994 +0x714:  mov    %ecx,%eax
0818d996 +0x716:  sar    $0x3,%eax
0818d999 +0x719:  imul   $0xaaaaaaab,%eax,%eax
0818d99f +0x71f:  pop    %ebp
0818d9a0 +0x720:  ret
0818d9a1 +0x721:  nop
0818d9a2 +0x722:  push   %ebp
0818d9a3 +0x723:  mov    %esp,%ebp
0818d9a5 +0x725:  sub    $0x18,%esp
0818d9a8 +0x728:  mov    0x8(%ebp),%eax
0818d9ab +0x72b:  mov    %eax,(%esp)
0818d9ae +0x72e:  call   0818da9c <+0x81c>
0818d9b3 +0x733:  mov    %eax,(%esp)
0818d9b6 +0x736:  call   0818daa4 <+0x824>
0818d9bb +0x73b:  leave
0818d9bc +0x73c:  ret
0818d9bd +0x73d:  nop
0818d9be +0x73e:  push   %ebp
0818d9bf +0x73f:  mov    %esp,%ebp
0818d9c1 +0x741:  sub    $0x18,%esp
0818d9c4 +0x744:  mov    0x8(%ebp),%eax
0818d9c7 +0x747:  mov    %eax,(%esp)
0818d9ca +0x74a:  call   0818daa4 <+0x824>
0818d9cf +0x74f:  cmp    0xc(%ebp),%eax
0818d9d2 +0x752:  setb   %al
0818d9d5 +0x755:  movzbl %al,%eax
0818d9d8 +0x758:  test   %eax,%eax
0818d9da +0x75a:  setne  %al
0818d9dd +0x75d:  test   %al,%al
0818d9df +0x75f:  je     0818d9e6 <+0x766>
0818d9e1 +0x761:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
0818d9e6 +0x766:  mov    0xc(%ebp),%edx
0818d9e9 +0x769:  mov    %edx,%eax
0818d9eb +0x76b:  add    %eax,%eax
0818d9ed +0x76d:  add    %edx,%eax
0818d9ef +0x76f:  shl    $0x3,%eax
0818d9f2 +0x772:  mov    %eax,(%esp)
0818d9f5 +0x775:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0818d9fa +0x77a:  leave
0818d9fb +0x77b:  ret
0818d9fc +0x77c:  push   %ebp
0818d9fd +0x77d:  mov    %esp,%ebp
0818d9ff +0x77f:  push   %ebx
0818da00 +0x780:  sub    $0x14,%esp
0818da03 +0x783:  mov    0x8(%ebp),%ebx
0818da06 +0x786:  mov    0xc(%ebp),%eax
0818da09 +0x789:  mov    (%eax),%eax
0818da0b +0x78b:  mov    %eax,0x4(%esp)
0818da0f +0x78f:  mov    %ebx,(%esp)
0818da12 +0x792:  call   0818daae <+0x82e>
0818da17 +0x797:  mov    %ebx,%eax
0818da19 +0x799:  add    $0x14,%esp
0818da1c +0x79c:  pop    %ebx
0818da1d +0x79d:  pop    %ebp
0818da1e +0x79e:  ret    $0x4
0818da21 +0x7a1:  push   %ebp
0818da22 +0x7a2:  mov    %esp,%ebp
0818da24 +0x7a4:  sub    $0x18,%esp
0818da27 +0x7a7:  mov    0x10(%ebp),%eax
0818da2a +0x7aa:  mov    %eax,0x8(%esp)
0818da2e +0x7ae:  mov    0xc(%ebp),%eax
0818da31 +0x7b1:  mov    %eax,0x4(%esp)
0818da35 +0x7b5:  mov    0x8(%ebp),%eax
0818da38 +0x7b8:  mov    %eax,(%esp)
0818da3b +0x7bb:  call   0818dabb <+0x83b>
0818da40 +0x7c0:  leave
0818da41 +0x7c1:  ret
0818da42 +0x7c2:  push   %ebp
0818da43 +0x7c3:  mov    %esp,%ebp
0818da45 +0x7c5:  sub    $0x18,%esp
0818da48 +0x7c8:  mov    0xc(%ebp),%eax
0818da4b +0x7cb:  mov    %eax,0x4(%esp)
0818da4f +0x7cf:  mov    0x8(%ebp),%eax
0818da52 +0x7d2:  mov    %eax,(%esp)
0818da55 +0x7d5:  call   0818dadc <+0x85c>
0818da5a +0x7da:  leave
0818da5b +0x7db:  ret
0818da5c +0x7dc:  push   %ebp
0818da5d +0x7dd:  mov    %esp,%ebp
0818da5f +0x7df:  sub    $0x18,%esp
0818da62 +0x7e2:  mov    0xc(%ebp),%eax
0818da65 +0x7e5:  mov    %eax,(%esp)
0818da68 +0x7e8:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0818da6d +0x7ed:  leave
0818da6e +0x7ee:  ret
0818da6f +0x7ef:  push   %ebp
0818da70 +0x7f0:  mov    %esp,%ebp
0818da72 +0x7f2:  mov    0x8(%ebp),%eax
0818da75 +0x7f5:  pop    %ebp
0818da76 +0x7f6:  ret
0818da77 +0x7f7:  push   %ebp
0818da78 +0x7f8:  mov    %esp,%ebp
0818da7a +0x7fa:  sub    $0x28,%esp
0818da7d +0x7fd:  movb   $0x1,-0x9(%ebp)
0818da81 +0x801:  mov    0x10(%ebp),%eax
0818da84 +0x804:  mov    %eax,0x8(%esp)
0818da88 +0x808:  mov    0xc(%ebp),%eax
0818da8b +0x80b:  mov    %eax,0x4(%esp)
0818da8f +0x80f:  mov    0x8(%ebp),%eax
0818da92 +0x812:  mov    %eax,(%esp)
0818da95 +0x815:  call   0818dae1 <+0x861>
0818da9a +0x81a:  leave
0818da9b +0x81b:  ret
0818da9c +0x81c:  push   %ebp
0818da9d +0x81d:  mov    %esp,%ebp
0818da9f +0x81f:  mov    0x8(%ebp),%eax
0818daa2 +0x822:  pop    %ebp
0818daa3 +0x823:  ret
0818daa4 +0x824:  push   %ebp
0818daa5 +0x825:  mov    %esp,%ebp
0818daa7 +0x827:  mov    $0xaaaaaaa,%eax
0818daac +0x82c:  pop    %ebp
0818daad +0x82d:  ret
0818daae +0x82e:  push   %ebp
0818daaf +0x82f:  mov    %esp,%ebp
0818dab1 +0x831:  mov    0x8(%ebp),%eax
0818dab4 +0x834:  mov    0xc(%ebp),%edx
0818dab7 +0x837:  mov    %edx,(%eax)
0818dab9 +0x839:  pop    %ebp
0818daba +0x83a:  ret
0818dabb +0x83b:  push   %ebp
0818dabc +0x83c:  mov    %esp,%ebp
0818dabe +0x83e:  sub    $0x18,%esp
0818dac1 +0x841:  mov    0x10(%ebp),%eax
0818dac4 +0x844:  mov    %eax,0x8(%esp)
0818dac8 +0x848:  mov    0xc(%ebp),%eax
0818dacb +0x84b:  mov    %eax,0x4(%esp)
0818dacf +0x84f:  mov    0x8(%ebp),%eax
0818dad2 +0x852:  mov    %eax,(%esp)
0818dad5 +0x855:  call   0818db44 <+0x8c4>
0818dada +0x85a:  leave
0818dadb +0x85b:  ret
0818dadc +0x85c:  push   %ebp
0818dadd +0x85d:  mov    %esp,%ebp
0818dadf +0x85f:  pop    %ebp
0818dae0 +0x860:  ret
0818dae1 +0x861:  push   %ebp
0818dae2 +0x862:  mov    %esp,%ebp
0818dae4 +0x864:  sub    $0x28,%esp
0818dae7 +0x867:  mov    0xc(%ebp),%edx
0818daea +0x86a:  mov    0x8(%ebp),%eax
0818daed +0x86d:  mov    %edx,%ecx
0818daef +0x86f:  sub    %eax,%ecx
0818daf1 +0x871:  mov    %ecx,%eax
0818daf3 +0x873:  sar    $0x3,%eax
0818daf6 +0x876:  imul   $0xaaaaaaab,%eax,%eax
0818dafc +0x87c:  mov    %eax,-0xc(%ebp)
0818daff +0x87f:  mov    -0xc(%ebp),%edx
0818db02 +0x882:  mov    %edx,%eax
0818db04 +0x884:  add    %eax,%eax
0818db06 +0x886:  add    %edx,%eax
0818db08 +0x888:  shl    $0x3,%eax
0818db0b +0x88b:  mov    %eax,%ecx
0818db0d +0x88d:  mov    -0xc(%ebp),%edx
0818db10 +0x890:  mov    %edx,%eax
0818db12 +0x892:  add    %eax,%eax
0818db14 +0x894:  add    %edx,%eax
0818db16 +0x896:  shl    $0x3,%eax
0818db19 +0x899:  neg    %eax
0818db1b +0x89b:  add    0x10(%ebp),%eax
0818db1e +0x89e:  mov    %ecx,0x8(%esp)
0818db22 +0x8a2:  mov    0x8(%ebp),%edx
0818db25 +0x8a5:  mov    %edx,0x4(%esp)
0818db29 +0x8a9:  mov    %eax,(%esp)
0818db2c +0x8ac:  call   0807d880 <_init+0x178>
0818db31 +0x8b1:  mov    -0xc(%ebp),%edx
0818db34 +0x8b4:  mov    %edx,%eax
0818db36 +0x8b6:  add    %eax,%eax
0818db38 +0x8b8:  add    %edx,%eax
0818db3a +0x8ba:  shl    $0x3,%eax
0818db3d +0x8bd:  neg    %eax
0818db3f +0x8bf:  add    0x10(%ebp),%eax
0818db42 +0x8c2:  leave
0818db43 +0x8c3:  ret
0818db44 +0x8c4:  push   %ebp
0818db45 +0x8c5:  mov    %esp,%ebp
0818db47 +0x8c7:  sub    $0x18,%esp
0818db4a +0x8ca:  mov    0x10(%ebp),%eax
0818db4d +0x8cd:  mov    %eax,0x8(%esp)
0818db51 +0x8d1:  mov    0xc(%ebp),%eax
0818db54 +0x8d4:  mov    %eax,0x4(%esp)
0818db58 +0x8d8:  mov    0x8(%ebp),%eax
0818db5b +0x8db:  mov    %eax,(%esp)
0818db5e +0x8de:  call   0818db65 <+0x8e5>
0818db63 +0x8e3:  leave
0818db64 +0x8e4:  ret
0818db65 +0x8e5:  push   %ebp
0818db66 +0x8e6:  mov    %esp,%ebp
0818db68 +0x8e8:  push   %ebx
0818db69 +0x8e9:  sub    $0x14,%esp
0818db6c +0x8ec:  mov    0xc(%ebp),%eax
0818db6f +0x8ef:  mov    %eax,(%esp)
0818db72 +0x8f2:  call   0818db9d <+0x91d>
0818db77 +0x8f7:  mov    %eax,%ebx
0818db79 +0x8f9:  mov    0x8(%ebp),%eax
0818db7c +0x8fc:  mov    %eax,(%esp)
0818db7f +0x8ff:  call   0818db9d <+0x91d>
0818db84 +0x904:  mov    0x10(%ebp),%edx
0818db87 +0x907:  mov    %edx,0x8(%esp)
0818db8b +0x90b:  mov    %ebx,0x4(%esp)
0818db8f +0x90f:  mov    %eax,(%esp)
0818db92 +0x912:  call   0818dbb0 <+0x930>
0818db97 +0x917:  add    $0x14,%esp
0818db9a +0x91a:  pop    %ebx
0818db9b +0x91b:  pop    %ebp
0818db9c +0x91c:  ret
0818db9d +0x91d:  push   %ebp
0818db9e +0x91e:  mov    %esp,%ebp
0818dba0 +0x920:  sub    $0x18,%esp
0818dba3 +0x923:  lea    0x8(%ebp),%eax
0818dba6 +0x926:  mov    %eax,(%esp)
0818dba9 +0x929:  call   0818dbf4 <+0x974>
0818dbae +0x92e:  leave
0818dbaf +0x92f:  ret
0818dbb0 +0x930:  push   %ebp
0818dbb1 +0x931:  mov    %esp,%ebp
0818dbb3 +0x933:  push   %esi
0818dbb4 +0x934:  push   %ebx
0818dbb5 +0x935:  sub    $0x10,%esp
0818dbb8 +0x938:  mov    0x10(%ebp),%eax
0818dbbb +0x93b:  mov    %eax,(%esp)
0818dbbe +0x93e:  call   0818da6f <+0x7ef>
0818dbc3 +0x943:  mov    %eax,%esi
0818dbc5 +0x945:  mov    0xc(%ebp),%eax
0818dbc8 +0x948:  mov    %eax,(%esp)
0818dbcb +0x94b:  call   0818da6f <+0x7ef>
0818dbd0 +0x950:  mov    %eax,%ebx
0818dbd2 +0x952:  mov    0x8(%ebp),%eax
0818dbd5 +0x955:  mov    %eax,(%esp)
0818dbd8 +0x958:  call   0818da6f <+0x7ef>
0818dbdd +0x95d:  mov    %esi,0x8(%esp)
0818dbe1 +0x961:  mov    %ebx,0x4(%esp)
0818dbe5 +0x965:  mov    %eax,(%esp)
0818dbe8 +0x968:  call   0818dbfe <+0x97e>
0818dbed +0x96d:  add    $0x10,%esp
0818dbf0 +0x970:  pop    %ebx
0818dbf1 +0x971:  pop    %esi
0818dbf2 +0x972:  pop    %ebp
0818dbf3 +0x973:  ret
0818dbf4 +0x974:  push   %ebp
0818dbf5 +0x975:  mov    %esp,%ebp
0818dbf7 +0x977:  mov    0x8(%ebp),%eax
0818dbfa +0x97a:  mov    (%eax),%eax
0818dbfc +0x97c:  pop    %ebp
0818dbfd +0x97d:  ret
0818dbfe +0x97e:  push   %ebp
0818dbff +0x97f:  mov    %esp,%ebp
0818dc01 +0x981:  sub    $0x28,%esp
0818dc04 +0x984:  movb   $0x1,-0x9(%ebp)
0818dc08 +0x988:  mov    0x10(%ebp),%eax
0818dc0b +0x98b:  mov    %eax,0x8(%esp)
0818dc0f +0x98f:  mov    0xc(%ebp),%eax
0818dc12 +0x992:  mov    %eax,0x4(%esp)
0818dc16 +0x996:  mov    0x8(%ebp),%eax
0818dc19 +0x999:  mov    %eax,(%esp)
0818dc1c +0x99c:  call   0818dc23 <+0x9a3>
0818dc21 +0x9a1:  leave
0818dc22 +0x9a2:  ret
0818dc23 +0x9a3:  push   %ebp
0818dc24 +0x9a4:  mov    %esp,%ebp
0818dc26 +0x9a6:  sub    $0x18,%esp
0818dc29 +0x9a9:  mov    0xc(%ebp),%edx
0818dc2c +0x9ac:  mov    0x8(%ebp),%eax
0818dc2f +0x9af:  mov    %edx,%ecx
0818dc31 +0x9b1:  sub    %eax,%ecx
0818dc33 +0x9b3:  mov    %ecx,%eax
0818dc35 +0x9b5:  sar    $0x3,%eax
0818dc38 +0x9b8:  imul   $0xaaaaaaab,%eax,%eax
0818dc3e +0x9be:  mov    %eax,%edx
0818dc40 +0x9c0:  mov    %edx,%eax
0818dc42 +0x9c2:  add    %eax,%eax
0818dc44 +0x9c4:  add    %edx,%eax
0818dc46 +0x9c6:  shl    $0x3,%eax
0818dc49 +0x9c9:  mov    %eax,0x8(%esp)
0818dc4d +0x9cd:  mov    0x8(%ebp),%eax
0818dc50 +0x9d0:  mov    %eax,0x4(%esp)
0818dc54 +0x9d4:  mov    0x10(%ebp),%eax
0818dc57 +0x9d7:  mov    %eax,(%esp)
0818dc5a +0x9da:  call   0807d880 <_init+0x178>
0818dc5f +0x9df:  mov    0xc(%ebp),%edx
0818dc62 +0x9e2:  mov    0x8(%ebp),%eax
0818dc65 +0x9e5:  mov    %edx,%ecx
0818dc67 +0x9e7:  sub    %eax,%ecx
0818dc69 +0x9e9:  mov    %ecx,%eax
0818dc6b +0x9eb:  sar    $0x3,%eax
0818dc6e +0x9ee:  imul   $0xaaaaaaab,%eax,%eax
0818dc74 +0x9f4:  mov    %eax,%edx
0818dc76 +0x9f6:  mov    %edx,%eax
0818dc78 +0x9f8:  add    %eax,%eax
0818dc7a +0x9fa:  add    %edx,%eax
0818dc7c +0x9fc:  shl    $0x3,%eax
0818dc7f +0x9ff:  add    0x10(%ebp),%eax
0818dc82 +0xa02:  leave
0818dc83 +0xa03:  ret
```

## 反编译 C

```c
// <global>::global @ 0x818d280

/* ARAD::DATABASE::CREATE_QUERY::arad_sp_charater_name_check(MySQL*, SIG_CREATE_CHARAC*, char
   const*) */

void ARAD::DATABASE::CREATE_QUERY::_GLOBAL__I_arad_sp_charater_name_check(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
