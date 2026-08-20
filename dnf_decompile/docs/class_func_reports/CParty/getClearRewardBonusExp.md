# getClearRewardBonusExp

`_ZN6CParty22getClearRewardBonusExpEP5CUserRjRK27stClearRewardExpParameter_tR23stClearRewardBonusExp_t`

`CParty::getClearRewardBonusExp(CUser*, unsigned int&, stClearRewardExpParameter_t const&, stClearRewardBonusExp_t&)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085ad278` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ad278  _ZN6CParty22getClearRewardBonusExpEP5CUserRjRK27stClearRewardExpParameter_tR23stClearRewardBonusExp_t
#           CParty::getClearRewardBonusExp(CUser*, unsigned int&, stClearRewardExpParameter_t const&, stClearRewardBonusExp_t&)
# range [0x085ad278, 0x085ad9b3]
085ad278 +0x000:  push   %ebp
085ad279 +0x001:  mov    %esp,%ebp
085ad27b +0x003:  push   %edi
085ad27c +0x004:  push   %esi
085ad27d +0x005:  push   %ebx
085ad27e +0x006:  sub    $0xbc,%esp
085ad284 +0x00c:  movl   $0x0,-0x1c(%ebp)
085ad28b +0x013:  mov    0x10(%ebp),%eax
085ad28e +0x016:  mov    (%eax),%eax
085ad290 +0x018:  mov    %eax,-0x20(%ebp)
085ad293 +0x01b:  mov    0x14(%ebp),%eax
085ad296 +0x01e:  flds   (%eax)
085ad298 +0x020:  fldz
085ad29a +0x022:  fxch   %st(1)
085ad29c +0x024:  fucompp
085ad29e +0x026:  fnstsw %ax
085ad2a0 +0x028:  sahf
085ad2a1 +0x029:  jp     085ad2a5 <+0x2d>
085ad2a3 +0x02b:  je     085ad2e8 <+0x70>
085ad2a5 +0x02d:  mov    0x10(%ebp),%eax
085ad2a8 +0x030:  mov    (%eax),%eax
085ad2aa +0x032:  mov    $0x0,%edx
085ad2af +0x037:  mov    %eax,-0x40(%ebp)
085ad2b2 +0x03a:  mov    %edx,-0x3c(%ebp)
085ad2b5 +0x03d:  fildll -0x40(%ebp)
085ad2b8 +0x040:  mov    0x14(%ebp),%eax
085ad2bb +0x043:  flds   (%eax)
085ad2bd +0x045:  fld1
085ad2bf +0x047:  fsubp  %st,%st(1)
085ad2c1 +0x049:  fmulp  %st,%st(1)
085ad2c3 +0x04b:  fnstcw -0x42(%ebp)
085ad2c6 +0x04e:  movzwl -0x42(%ebp),%eax
085ad2ca +0x052:  mov    $0xc,%ah
085ad2cc +0x054:  mov    %ax,-0x44(%ebp)
085ad2d0 +0x058:  fldcw  -0x44(%ebp)
085ad2d3 +0x05b:  fistpll -0x40(%ebp)
085ad2d6 +0x05e:  fldcw  -0x42(%ebp)
085ad2d9 +0x061:  mov    -0x40(%ebp),%eax
085ad2dc +0x064:  mov    -0x3c(%ebp),%edx
085ad2df +0x067:  mov    %eax,%edx
085ad2e1 +0x069:  mov    0x10(%ebp),%eax
085ad2e4 +0x06c:  mov    %edx,(%eax)
085ad2e6 +0x06e:  jmp    085ad2f5 <+0x7d>
085ad2e8 +0x070:  fnstcw -0x42(%ebp)
085ad2eb +0x073:  movzwl -0x42(%ebp),%eax
085ad2ef +0x077:  mov    $0xc,%ah
085ad2f1 +0x079:  mov    %ax,-0x44(%ebp)
085ad2f5 +0x07d:  mov    0x10(%ebp),%eax
085ad2f8 +0x080:  mov    (%eax),%eax
085ad2fa +0x082:  mov    $0x0,%edx
085ad2ff +0x087:  mov    %eax,-0x40(%ebp)
085ad302 +0x08a:  mov    %edx,-0x3c(%ebp)
085ad305 +0x08d:  fildll -0x40(%ebp)
085ad308 +0x090:  mov    0x14(%ebp),%eax
085ad30b +0x093:  flds   0x4(%eax)
085ad30e +0x096:  fmulp  %st,%st(1)
085ad310 +0x098:  fldcw  -0x44(%ebp)
085ad313 +0x09b:  fistpll -0x40(%ebp)
085ad316 +0x09e:  fldcw  -0x42(%ebp)
085ad319 +0x0a1:  mov    -0x40(%ebp),%eax
085ad31c +0x0a4:  mov    -0x3c(%ebp),%edx
085ad31f +0x0a7:  mov    %eax,%edx
085ad321 +0x0a9:  mov    0x18(%ebp),%eax
085ad324 +0x0ac:  mov    %edx,0x4(%eax)
085ad327 +0x0af:  mov    0x10(%ebp),%eax
085ad32a +0x0b2:  mov    (%eax),%eax
085ad32c +0x0b4:  mov    $0x0,%edx
085ad331 +0x0b9:  mov    %eax,-0x40(%ebp)
085ad334 +0x0bc:  mov    %edx,-0x3c(%ebp)
085ad337 +0x0bf:  fildll -0x40(%ebp)
085ad33a +0x0c2:  mov    0x14(%ebp),%eax
085ad33d +0x0c5:  flds   0x8(%eax)
085ad340 +0x0c8:  fmulp  %st,%st(1)
085ad342 +0x0ca:  fldcw  -0x44(%ebp)
085ad345 +0x0cd:  fistpll -0x40(%ebp)
085ad348 +0x0d0:  fldcw  -0x42(%ebp)
085ad34b +0x0d3:  mov    -0x40(%ebp),%eax
085ad34e +0x0d6:  mov    -0x3c(%ebp),%edx
085ad351 +0x0d9:  mov    %eax,%edx
085ad353 +0x0db:  mov    0x18(%ebp),%eax
085ad356 +0x0de:  mov    %edx,(%eax)
085ad358 +0x0e0:  mov    0x14(%ebp),%eax
085ad35b +0x0e3:  flds   0x8(%eax)
085ad35e +0x0e6:  fldz
085ad360 +0x0e8:  fxch   %st(1)
085ad362 +0x0ea:  fucompp
085ad364 +0x0ec:  fnstsw %ax
085ad366 +0x0ee:  sahf
085ad367 +0x0ef:  jp     085ad36b <+0xf3>
085ad369 +0x0f1:  je     085ad398 <+0x120>
085ad36b +0x0f3:  movl   $0x1,-0x2c(%ebp)
085ad372 +0x0fa:  mov    0x18(%ebp),%eax
085ad375 +0x0fd:  lea    -0x2c(%ebp),%edx
085ad378 +0x100:  mov    %edx,0x4(%esp)
085ad37c +0x104:  mov    %eax,(%esp)
085ad37f +0x107:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
085ad384 +0x10c:  mov    (%eax),%edx
085ad386 +0x10e:  mov    0x18(%ebp),%eax
085ad389 +0x111:  mov    %edx,(%eax)
085ad38b +0x113:  fnstcw -0x42(%ebp)
085ad38e +0x116:  movzwl -0x42(%ebp),%eax
085ad392 +0x11a:  mov    $0xc,%ah
085ad394 +0x11c:  mov    %ax,-0x44(%ebp)
085ad398 +0x120:  mov    0x10(%ebp),%eax
085ad39b +0x123:  mov    (%eax),%eax
085ad39d +0x125:  mov    $0x0,%edx
085ad3a2 +0x12a:  mov    %eax,-0x40(%ebp)
085ad3a5 +0x12d:  mov    %edx,-0x3c(%ebp)
085ad3a8 +0x130:  fildll -0x40(%ebp)
085ad3ab +0x133:  mov    0x14(%ebp),%eax
085ad3ae +0x136:  flds   0xc(%eax)
085ad3b1 +0x139:  fmulp  %st,%st(1)
085ad3b3 +0x13b:  fldcw  -0x44(%ebp)
085ad3b6 +0x13e:  fistpll -0x40(%ebp)
085ad3b9 +0x141:  fldcw  -0x42(%ebp)
085ad3bc +0x144:  mov    -0x40(%ebp),%eax
085ad3bf +0x147:  mov    -0x3c(%ebp),%edx
085ad3c2 +0x14a:  mov    %eax,%edx
085ad3c4 +0x14c:  mov    0x18(%ebp),%eax
085ad3c7 +0x14f:  mov    %edx,0x24(%eax)
085ad3ca +0x152:  mov    0x14(%ebp),%eax
085ad3cd +0x155:  flds   0xc(%eax)
085ad3d0 +0x158:  fldz
085ad3d2 +0x15a:  fxch   %st(1)
085ad3d4 +0x15c:  fucompp
085ad3d6 +0x15e:  fnstsw %ax
085ad3d8 +0x160:  sahf
085ad3d9 +0x161:  jp     085ad3dd <+0x165>
085ad3db +0x163:  je     085ad40e <+0x196>
085ad3dd +0x165:  movl   $0x1,-0x28(%ebp)
085ad3e4 +0x16c:  mov    0x18(%ebp),%eax
085ad3e7 +0x16f:  lea    0x24(%eax),%edx
085ad3ea +0x172:  lea    -0x28(%ebp),%eax
085ad3ed +0x175:  mov    %eax,0x4(%esp)
085ad3f1 +0x179:  mov    %edx,(%esp)
085ad3f4 +0x17c:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
085ad3f9 +0x181:  mov    (%eax),%edx
085ad3fb +0x183:  mov    0x18(%ebp),%eax
085ad3fe +0x186:  mov    %edx,0x24(%eax)
085ad401 +0x189:  fnstcw -0x42(%ebp)
085ad404 +0x18c:  movzwl -0x42(%ebp),%eax
085ad408 +0x190:  mov    $0xc,%ah
085ad40a +0x192:  mov    %ax,-0x44(%ebp)
085ad40e +0x196:  mov    0x10(%ebp),%eax
085ad411 +0x199:  mov    (%eax),%eax
085ad413 +0x19b:  mov    $0x0,%edx
085ad418 +0x1a0:  mov    %eax,-0x40(%ebp)
085ad41b +0x1a3:  mov    %edx,-0x3c(%ebp)
085ad41e +0x1a6:  fildll -0x40(%ebp)
085ad421 +0x1a9:  mov    0x14(%ebp),%eax
085ad424 +0x1ac:  flds   0x2c(%eax)
085ad427 +0x1af:  fmulp  %st,%st(1)
085ad429 +0x1b1:  fldcw  -0x44(%ebp)
085ad42c +0x1b4:  fistpll -0x40(%ebp)
085ad42f +0x1b7:  fldcw  -0x42(%ebp)
085ad432 +0x1ba:  mov    -0x40(%ebp),%eax
085ad435 +0x1bd:  mov    -0x3c(%ebp),%edx
085ad438 +0x1c0:  mov    %eax,%edx
085ad43a +0x1c2:  mov    0x18(%ebp),%eax
085ad43d +0x1c5:  mov    %edx,0x2c(%eax)
085ad440 +0x1c8:  mov    0x10(%ebp),%eax
085ad443 +0x1cb:  mov    (%eax),%eax
085ad445 +0x1cd:  mov    $0x0,%edx
085ad44a +0x1d2:  mov    %eax,-0x40(%ebp)
085ad44d +0x1d5:  mov    %edx,-0x3c(%ebp)
085ad450 +0x1d8:  fildll -0x40(%ebp)
085ad453 +0x1db:  mov    0x14(%ebp),%eax
085ad456 +0x1de:  flds   0x34(%eax)
085ad459 +0x1e1:  fmulp  %st,%st(1)
085ad45b +0x1e3:  fldcw  -0x44(%ebp)
085ad45e +0x1e6:  fistpll -0x40(%ebp)
085ad461 +0x1e9:  fldcw  -0x42(%ebp)
085ad464 +0x1ec:  mov    -0x40(%ebp),%eax
085ad467 +0x1ef:  mov    -0x3c(%ebp),%edx
085ad46a +0x1f2:  mov    %eax,%edx
085ad46c +0x1f4:  mov    0x18(%ebp),%eax
085ad46f +0x1f7:  mov    %edx,0x30(%eax)
085ad472 +0x1fa:  mov    0x10(%ebp),%eax
085ad475 +0x1fd:  mov    (%eax),%eax
085ad477 +0x1ff:  mov    $0x0,%edx
085ad47c +0x204:  mov    %eax,-0x40(%ebp)
085ad47f +0x207:  mov    %edx,-0x3c(%ebp)
085ad482 +0x20a:  fildll -0x40(%ebp)
085ad485 +0x20d:  mov    0x14(%ebp),%eax
085ad488 +0x210:  flds   0x38(%eax)
085ad48b +0x213:  fmulp  %st,%st(1)
085ad48d +0x215:  fldcw  -0x44(%ebp)
085ad490 +0x218:  fistpll -0x40(%ebp)
085ad493 +0x21b:  fldcw  -0x42(%ebp)
085ad496 +0x21e:  mov    -0x40(%ebp),%eax
085ad499 +0x221:  mov    -0x3c(%ebp),%edx
085ad49c +0x224:  mov    %eax,%edx
085ad49e +0x226:  mov    0x18(%ebp),%eax
085ad4a1 +0x229:  mov    %edx,0x34(%eax)
085ad4a4 +0x22c:  mov    0x10(%ebp),%eax
085ad4a7 +0x22f:  mov    (%eax),%eax
085ad4a9 +0x231:  mov    $0x0,%edx
085ad4ae +0x236:  mov    %eax,-0x40(%ebp)
085ad4b1 +0x239:  mov    %edx,-0x3c(%ebp)
085ad4b4 +0x23c:  fildll -0x40(%ebp)
085ad4b7 +0x23f:  mov    0x14(%ebp),%eax
085ad4ba +0x242:  flds   0x48(%eax)
085ad4bd +0x245:  fmulp  %st,%st(1)
085ad4bf +0x247:  fldcw  -0x44(%ebp)
085ad4c2 +0x24a:  fistpll -0x40(%ebp)
085ad4c5 +0x24d:  fldcw  -0x42(%ebp)
085ad4c8 +0x250:  mov    -0x40(%ebp),%eax
085ad4cb +0x253:  mov    -0x3c(%ebp),%edx
085ad4ce +0x256:  mov    %eax,%edx
085ad4d0 +0x258:  mov    0x18(%ebp),%eax
085ad4d3 +0x25b:  mov    %edx,0x38(%eax)
085ad4d6 +0x25e:  mov    0x14(%ebp),%eax
085ad4d9 +0x261:  flds   0x10(%eax)
085ad4dc +0x264:  fldz
085ad4de +0x266:  fxch   %st(1)
085ad4e0 +0x268:  fucompp
085ad4e2 +0x26a:  fnstsw %ax
085ad4e4 +0x26c:  sahf
085ad4e5 +0x26d:  jp     085ad4e9 <+0x271>
085ad4e7 +0x26f:  je     085ad527 <+0x2af>
085ad4e9 +0x271:  mov    0x10(%ebp),%eax
085ad4ec +0x274:  mov    (%eax),%eax
085ad4ee +0x276:  mov    $0x0,%edx
085ad4f3 +0x27b:  mov    %eax,-0x40(%ebp)
085ad4f6 +0x27e:  mov    %edx,-0x3c(%ebp)
085ad4f9 +0x281:  fildll -0x40(%ebp)
085ad4fc +0x284:  mov    0x14(%ebp),%eax
085ad4ff +0x287:  flds   0x10(%eax)
085ad502 +0x28a:  fmulp  %st,%st(1)
085ad504 +0x28c:  fldcw  -0x44(%ebp)
085ad507 +0x28f:  fistpll -0x40(%ebp)
085ad50a +0x292:  fldcw  -0x42(%ebp)
085ad50d +0x295:  mov    -0x40(%ebp),%eax
085ad510 +0x298:  mov    -0x3c(%ebp),%edx
085ad513 +0x29b:  mov    %eax,%edx
085ad515 +0x29d:  mov    0x18(%ebp),%eax
085ad518 +0x2a0:  mov    %edx,0xc(%eax)
085ad51b +0x2a3:  mov    0x18(%ebp),%eax
085ad51e +0x2a6:  movl   $0x2,0x8(%eax)
085ad525 +0x2ad:  jmp    085ad576 <+0x2fe>
085ad527 +0x2af:  mov    0x14(%ebp),%eax
085ad52a +0x2b2:  flds   0x14(%eax)
085ad52d +0x2b5:  fldz
085ad52f +0x2b7:  fxch   %st(1)
085ad531 +0x2b9:  fucompp
085ad533 +0x2bb:  fnstsw %ax
085ad535 +0x2bd:  sahf
085ad536 +0x2be:  jp     085ad53a <+0x2c2>
085ad538 +0x2c0:  je     085ad576 <+0x2fe>
085ad53a +0x2c2:  mov    0x10(%ebp),%eax
085ad53d +0x2c5:  mov    (%eax),%eax
085ad53f +0x2c7:  mov    $0x0,%edx
085ad544 +0x2cc:  mov    %eax,-0x40(%ebp)
085ad547 +0x2cf:  mov    %edx,-0x3c(%ebp)
085ad54a +0x2d2:  fildll -0x40(%ebp)
085ad54d +0x2d5:  mov    0x14(%ebp),%eax
085ad550 +0x2d8:  flds   0x14(%eax)
085ad553 +0x2db:  fmulp  %st,%st(1)
085ad555 +0x2dd:  fldcw  -0x44(%ebp)
085ad558 +0x2e0:  fistpll -0x40(%ebp)
085ad55b +0x2e3:  fldcw  -0x42(%ebp)
085ad55e +0x2e6:  mov    -0x40(%ebp),%eax
085ad561 +0x2e9:  mov    -0x3c(%ebp),%edx
085ad564 +0x2ec:  mov    %eax,%edx
085ad566 +0x2ee:  mov    0x18(%ebp),%eax
085ad569 +0x2f1:  mov    %edx,0xc(%eax)
085ad56c +0x2f4:  mov    0x18(%ebp),%eax
085ad56f +0x2f7:  movl   $0x1,0x8(%eax)
085ad576 +0x2fe:  mov    0x14(%ebp),%eax
085ad579 +0x301:  flds   0x30(%eax)
085ad57c +0x304:  fldz
085ad57e +0x306:  fxch   %st(1)
085ad580 +0x308:  fucompp
085ad582 +0x30a:  fnstsw %ax
085ad584 +0x30c:  sahf
085ad585 +0x30d:  jp     085ad589 <+0x311>
085ad587 +0x30f:  je     085ad606 <+0x38e>
085ad589 +0x311:  mov    0x10(%ebp),%eax
085ad58c +0x314:  mov    (%eax),%eax
085ad58e +0x316:  mov    $0x0,%edx
085ad593 +0x31b:  mov    %eax,-0x40(%ebp)
085ad596 +0x31e:  mov    %edx,-0x3c(%ebp)
085ad599 +0x321:  fildll -0x40(%ebp)
085ad59c +0x324:  mov    0x14(%ebp),%eax
085ad59f +0x327:  flds   0x30(%eax)
085ad5a2 +0x32a:  fmulp  %st,%st(1)
085ad5a4 +0x32c:  fldcw  -0x44(%ebp)
085ad5a7 +0x32f:  fistpll -0x40(%ebp)
085ad5aa +0x332:  fldcw  -0x42(%ebp)
085ad5ad +0x335:  mov    -0x40(%ebp),%eax
085ad5b0 +0x338:  mov    -0x3c(%ebp),%edx
085ad5b3 +0x33b:  mov    %eax,-0x1c(%ebp)
085ad5b6 +0x33e:  mov    0x18(%ebp),%eax
085ad5b9 +0x341:  mov    0x8(%eax),%eax
085ad5bc +0x344:  cmp    $0x1,%eax
085ad5bf +0x347:  jl     085ad5ed <+0x375>
085ad5c1 +0x349:  cmp    $0x2,%eax
085ad5c4 +0x34c:  jle    085ad5cd <+0x355>
085ad5c6 +0x34e:  cmp    $0x3,%eax
085ad5c9 +0x351:  je     085ad602 <+0x38a>
085ad5cb +0x353:  jmp    085ad5ed <+0x375>
085ad5cd +0x355:  mov    0x18(%ebp),%eax
085ad5d0 +0x358:  mov    0xc(%eax),%eax
085ad5d3 +0x35b:  cmp    -0x1c(%ebp),%eax
085ad5d6 +0x35e:  jae    085ad605 <+0x38d>
085ad5d8 +0x360:  mov    0x18(%ebp),%eax
085ad5db +0x363:  mov    -0x1c(%ebp),%edx
085ad5de +0x366:  mov    %edx,0xc(%eax)
085ad5e1 +0x369:  mov    0x18(%ebp),%eax
085ad5e4 +0x36c:  movl   $0x4,0x8(%eax)
085ad5eb +0x373:  jmp    085ad606 <+0x38e>
085ad5ed +0x375:  mov    0x18(%ebp),%eax
085ad5f0 +0x378:  mov    -0x1c(%ebp),%edx
085ad5f3 +0x37b:  mov    %edx,0xc(%eax)
085ad5f6 +0x37e:  mov    0x18(%ebp),%eax
085ad5f9 +0x381:  movl   $0x4,0x8(%eax)
085ad600 +0x388:  jmp    085ad606 <+0x38e>
085ad602 +0x38a:  nop
085ad603 +0x38b:  jmp    085ad606 <+0x38e>
085ad605 +0x38d:  nop
085ad606 +0x38e:  mov    0x10(%ebp),%eax
085ad609 +0x391:  mov    (%eax),%eax
085ad60b +0x393:  mov    $0x0,%edx
085ad610 +0x398:  mov    %eax,-0x40(%ebp)
085ad613 +0x39b:  mov    %edx,-0x3c(%ebp)
085ad616 +0x39e:  fildll -0x40(%ebp)
085ad619 +0x3a1:  mov    0x14(%ebp),%eax
085ad61c +0x3a4:  flds   0x18(%eax)
085ad61f +0x3a7:  fmulp  %st,%st(1)
085ad621 +0x3a9:  fldcw  -0x44(%ebp)
085ad624 +0x3ac:  fistpll -0x40(%ebp)
085ad627 +0x3af:  fldcw  -0x42(%ebp)
085ad62a +0x3b2:  mov    -0x40(%ebp),%eax
085ad62d +0x3b5:  mov    -0x3c(%ebp),%edx
085ad630 +0x3b8:  mov    %eax,%edx
085ad632 +0x3ba:  mov    0x18(%ebp),%eax
085ad635 +0x3bd:  mov    %edx,0x14(%eax)
085ad638 +0x3c0:  mov    0x14(%ebp),%eax
085ad63b +0x3c3:  mov    0x1c(%eax),%eax
085ad63e +0x3c6:  test   %eax,%eax
085ad640 +0x3c8:  je     085ad672 <+0x3fa>
085ad642 +0x3ca:  mov    0x10(%ebp),%eax
085ad645 +0x3cd:  mov    (%eax),%edx
085ad647 +0x3cf:  mov    0x14(%ebp),%eax
085ad64a +0x3d2:  mov    0x1c(%eax),%eax
085ad64d +0x3d5:  mov    %eax,%ecx
085ad64f +0x3d7:  imul   %edx,%ecx
085ad652 +0x3da:  mov    %ecx,-0x6c(%ebp)
085ad655 +0x3dd:  mov    $0x51eb851f,%edx
085ad65a +0x3e2:  mov    -0x6c(%ebp),%eax
085ad65d +0x3e5:  mul    %edx
085ad65f +0x3e7:  shr    $0x5,%edx
085ad662 +0x3ea:  mov    0x18(%ebp),%eax
085ad665 +0x3ed:  mov    %edx,0x10(%eax)
085ad668 +0x3f0:  mov    0x18(%ebp),%eax
085ad66b +0x3f3:  movl   $0x1,0x8(%eax)
085ad672 +0x3fa:  mov    0x10(%ebp),%eax
085ad675 +0x3fd:  mov    (%eax),%eax
085ad677 +0x3ff:  mov    $0x0,%edx
085ad67c +0x404:  mov    %eax,-0x40(%ebp)
085ad67f +0x407:  mov    %edx,-0x3c(%ebp)
085ad682 +0x40a:  fildll -0x40(%ebp)
085ad685 +0x40d:  mov    0x14(%ebp),%eax
085ad688 +0x410:  flds   0x20(%eax)
085ad68b +0x413:  fmulp  %st,%st(1)
085ad68d +0x415:  fldcw  -0x44(%ebp)
085ad690 +0x418:  fistpll -0x40(%ebp)
085ad693 +0x41b:  fldcw  -0x42(%ebp)
085ad696 +0x41e:  mov    -0x40(%ebp),%eax
085ad699 +0x421:  mov    -0x3c(%ebp),%edx
085ad69c +0x424:  mov    %eax,%edx
085ad69e +0x426:  mov    0x18(%ebp),%eax
085ad6a1 +0x429:  mov    %edx,0x20(%eax)
085ad6a4 +0x42c:  mov    0x10(%ebp),%eax
085ad6a7 +0x42f:  mov    (%eax),%eax
085ad6a9 +0x431:  mov    $0x0,%edx
085ad6ae +0x436:  mov    %eax,-0x40(%ebp)
085ad6b1 +0x439:  mov    %edx,-0x3c(%ebp)
085ad6b4 +0x43c:  fildll -0x40(%ebp)
085ad6b7 +0x43f:  mov    0x14(%ebp),%eax
085ad6ba +0x442:  flds   0x28(%eax)
085ad6bd +0x445:  fmulp  %st,%st(1)
085ad6bf +0x447:  fldcw  -0x44(%ebp)
085ad6c2 +0x44a:  fistpll -0x40(%ebp)
085ad6c5 +0x44d:  fldcw  -0x42(%ebp)
085ad6c8 +0x450:  mov    -0x40(%ebp),%eax
085ad6cb +0x453:  mov    -0x3c(%ebp),%edx
085ad6ce +0x456:  mov    %eax,%edx
085ad6d0 +0x458:  mov    0x18(%ebp),%eax
085ad6d3 +0x45b:  mov    %edx,0x1c(%eax)
085ad6d6 +0x45e:  mov    0x10(%ebp),%eax
085ad6d9 +0x461:  mov    (%eax),%eax
085ad6db +0x463:  mov    $0x0,%edx
085ad6e0 +0x468:  mov    %eax,-0x40(%ebp)
085ad6e3 +0x46b:  mov    %edx,-0x3c(%ebp)
085ad6e6 +0x46e:  fildll -0x40(%ebp)
085ad6e9 +0x471:  mov    0x14(%ebp),%eax
085ad6ec +0x474:  flds   0x24(%eax)
085ad6ef +0x477:  fmulp  %st,%st(1)
085ad6f1 +0x479:  fldcw  -0x44(%ebp)
085ad6f4 +0x47c:  fistpll -0x40(%ebp)
085ad6f7 +0x47f:  fldcw  -0x42(%ebp)
085ad6fa +0x482:  mov    -0x40(%ebp),%eax
085ad6fd +0x485:  mov    -0x3c(%ebp),%edx
085ad700 +0x488:  mov    %eax,%edx
085ad702 +0x48a:  mov    0x18(%ebp),%eax
085ad705 +0x48d:  mov    %edx,0x18(%eax)
085ad708 +0x490:  mov    0x10(%ebp),%eax
085ad70b +0x493:  mov    (%eax),%eax
085ad70d +0x495:  mov    $0x0,%edx
085ad712 +0x49a:  mov    %eax,-0x40(%ebp)
085ad715 +0x49d:  mov    %edx,-0x3c(%ebp)
085ad718 +0x4a0:  fildll -0x40(%ebp)
085ad71b +0x4a3:  mov    0x14(%ebp),%eax
085ad71e +0x4a6:  flds   0x3c(%eax)
085ad721 +0x4a9:  fmulp  %st,%st(1)
085ad723 +0x4ab:  fldcw  -0x44(%ebp)
085ad726 +0x4ae:  fistpll -0x40(%ebp)
085ad729 +0x4b1:  fldcw  -0x42(%ebp)
085ad72c +0x4b4:  mov    -0x40(%ebp),%eax
085ad72f +0x4b7:  mov    -0x3c(%ebp),%edx
085ad732 +0x4ba:  mov    %eax,%edx
085ad734 +0x4bc:  mov    0x18(%ebp),%eax
085ad737 +0x4bf:  mov    %edx,0x3c(%eax)
085ad73a +0x4c2:  mov    0x10(%ebp),%eax
085ad73d +0x4c5:  mov    (%eax),%eax
085ad73f +0x4c7:  mov    $0x0,%edx
085ad744 +0x4cc:  mov    %eax,-0x40(%ebp)
085ad747 +0x4cf:  mov    %edx,-0x3c(%ebp)
085ad74a +0x4d2:  fildll -0x40(%ebp)
085ad74d +0x4d5:  mov    0x14(%ebp),%eax
085ad750 +0x4d8:  flds   0x40(%eax)
085ad753 +0x4db:  fmulp  %st,%st(1)
085ad755 +0x4dd:  fldcw  -0x44(%ebp)
085ad758 +0x4e0:  fistpll -0x40(%ebp)
085ad75b +0x4e3:  fldcw  -0x42(%ebp)
085ad75e +0x4e6:  mov    -0x40(%ebp),%eax
085ad761 +0x4e9:  mov    -0x3c(%ebp),%edx
085ad764 +0x4ec:  mov    %eax,%edx
085ad766 +0x4ee:  mov    0x18(%ebp),%eax
085ad769 +0x4f1:  mov    %edx,0x40(%eax)
085ad76c +0x4f4:  mov    0x10(%ebp),%eax
085ad76f +0x4f7:  mov    (%eax),%eax
085ad771 +0x4f9:  mov    $0x0,%edx
085ad776 +0x4fe:  mov    %eax,-0x40(%ebp)
085ad779 +0x501:  mov    %edx,-0x3c(%ebp)
085ad77c +0x504:  fildll -0x40(%ebp)
085ad77f +0x507:  mov    0x14(%ebp),%eax
085ad782 +0x50a:  flds   0x44(%eax)
085ad785 +0x50d:  fmulp  %st,%st(1)
085ad787 +0x50f:  fldcw  -0x44(%ebp)
085ad78a +0x512:  fistpll -0x40(%ebp)
085ad78d +0x515:  fldcw  -0x42(%ebp)
085ad790 +0x518:  mov    -0x40(%ebp),%eax
085ad793 +0x51b:  mov    -0x3c(%ebp),%edx
085ad796 +0x51e:  mov    %eax,%edx
085ad798 +0x520:  mov    0x18(%ebp),%eax
085ad79b +0x523:  mov    %edx,0x44(%eax)
085ad79e +0x526:  mov    0x10(%ebp),%eax
085ad7a1 +0x529:  mov    (%eax),%edx
085ad7a3 +0x52b:  mov    0x18(%ebp),%eax
085ad7a6 +0x52e:  mov    0x4(%eax),%eax
085ad7a9 +0x531:  add    %eax,%edx
085ad7ab +0x533:  mov    0x18(%ebp),%eax
085ad7ae +0x536:  mov    (%eax),%eax
085ad7b0 +0x538:  add    %eax,%edx
085ad7b2 +0x53a:  mov    0x18(%ebp),%eax
085ad7b5 +0x53d:  mov    0xc(%eax),%eax
085ad7b8 +0x540:  add    %eax,%edx
085ad7ba +0x542:  mov    0x18(%ebp),%eax
085ad7bd +0x545:  mov    0x14(%eax),%eax
085ad7c0 +0x548:  add    %eax,%edx
085ad7c2 +0x54a:  mov    0x18(%ebp),%eax
085ad7c5 +0x54d:  mov    0x18(%eax),%eax
085ad7c8 +0x550:  add    %eax,%edx
085ad7ca +0x552:  mov    0x18(%ebp),%eax
085ad7cd +0x555:  mov    0x1c(%eax),%eax
085ad7d0 +0x558:  add    %eax,%edx
085ad7d2 +0x55a:  mov    0x18(%ebp),%eax
085ad7d5 +0x55d:  mov    0x10(%eax),%eax
085ad7d8 +0x560:  add    %eax,%edx
085ad7da +0x562:  mov    0x18(%ebp),%eax
085ad7dd +0x565:  mov    0x20(%eax),%eax
085ad7e0 +0x568:  lea    (%edx,%eax,1),%eax
085ad7e3 +0x56b:  mov    %eax,-0x24(%ebp)
085ad7e6 +0x56e:  mov    0x18(%ebp),%eax
085ad7e9 +0x571:  mov    0x24(%eax),%eax
085ad7ec +0x574:  add    %eax,-0x24(%ebp)
085ad7ef +0x577:  mov    0x10(%ebp),%eax
085ad7f2 +0x57a:  mov    (%eax),%eax
085ad7f4 +0x57c:  mov    %eax,0x4(%esp)
085ad7f8 +0x580:  mov    0xc(%ebp),%eax
085ad7fb +0x583:  mov    %eax,(%esp)
085ad7fe +0x586:  call   0864fa08 <_ZN5CUser20gainExpAsUpperMemberEi>  ; CUser::gainExpAsUpperMember(int)
085ad803 +0x58b:  mov    %eax,%edx
085ad805 +0x58d:  mov    0x18(%ebp),%eax
085ad808 +0x590:  mov    %edx,0x28(%eax)
085ad80b +0x593:  mov    0x18(%ebp),%eax
085ad80e +0x596:  mov    0x28(%eax),%eax
085ad811 +0x599:  add    %eax,-0x24(%ebp)
085ad814 +0x59c:  mov    0x10(%ebp),%eax
085ad817 +0x59f:  mov    (%eax),%eax
085ad819 +0x5a1:  mov    %eax,0x4(%esp)
085ad81d +0x5a5:  mov    0xc(%ebp),%eax
085ad820 +0x5a8:  mov    %eax,(%esp)
085ad823 +0x5ab:  call   0864fb3a <_ZN5CUser17gainGuildSkillExpEi>  ; CUser::gainGuildSkillExp(int)
085ad828 +0x5b0:  add    %eax,-0x24(%ebp)
085ad82b +0x5b3:  mov    0x10(%ebp),%eax
085ad82e +0x5b6:  mov    (%eax),%eax
085ad830 +0x5b8:  mov    %eax,0x4(%esp)
085ad834 +0x5bc:  mov    0xc(%ebp),%eax
085ad837 +0x5bf:  mov    %eax,(%esp)
085ad83a +0x5c2:  call   0864fc34 <_ZN5CUser21gainPowerWarRewardExpEi>  ; CUser::gainPowerWarRewardExp(int)
085ad83f +0x5c7:  add    %eax,-0x24(%ebp)
085ad842 +0x5ca:  mov    0x18(%ebp),%eax
085ad845 +0x5cd:  mov    0x2c(%eax),%eax
085ad848 +0x5d0:  add    %eax,-0x24(%ebp)
085ad84b +0x5d3:  mov    0x18(%ebp),%eax
085ad84e +0x5d6:  mov    0x30(%eax),%eax
085ad851 +0x5d9:  add    %eax,-0x24(%ebp)
085ad854 +0x5dc:  mov    0x18(%ebp),%eax
085ad857 +0x5df:  mov    0x34(%eax),%eax
085ad85a +0x5e2:  add    %eax,-0x24(%ebp)
085ad85d +0x5e5:  mov    0x18(%ebp),%eax
085ad860 +0x5e8:  mov    0x38(%eax),%eax
085ad863 +0x5eb:  add    %eax,-0x24(%ebp)
085ad866 +0x5ee:  mov    0x18(%ebp),%eax
085ad869 +0x5f1:  mov    0x3c(%eax),%eax
085ad86c +0x5f4:  add    %eax,-0x24(%ebp)
085ad86f +0x5f7:  mov    0x18(%ebp),%eax
085ad872 +0x5fa:  mov    0x40(%eax),%eax
085ad875 +0x5fd:  add    %eax,-0x24(%ebp)
085ad878 +0x600:  mov    0x18(%ebp),%eax
085ad87b +0x603:  mov    0x44(%eax),%eax
085ad87e +0x606:  add    %eax,-0x24(%ebp)
085ad881 +0x609:  cmpl   $0xf4240,-0x24(%ebp)
085ad888 +0x610:  jbe    085ad9a5 <+0x72d>
085ad88e +0x616:  mov    -0x20(%ebp),%eax
085ad891 +0x619:  mov    %eax,0x18(%esp)
085ad895 +0x61d:  mov    -0x24(%ebp),%eax
085ad898 +0x620:  mov    %eax,0x14(%esp)
085ad89c +0x624:  movl   $"BLOOD_LOG : EXP(%u), ExpPerUser(%u)\n",0x10(%esp)
085ad8a4 +0x62c:  movl   $0x28b1,0xc(%esp)
085ad8ac +0x634:  movl   $&_ZZN6CParty22getClearRewardBonusExpEP5CUserRjRK27stClearRewardExpParameter_tR23stClearRewardBonusExp_tE19__PRETTY_FUNCTION__,0x8(%esp)
085ad8b4 +0x63c:  movl   $"party.cpp",0x4(%esp)
085ad8bc +0x644:  movl   $0x1,(%esp)
085ad8c3 +0x64b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085ad8c8 +0x650:  mov    0x18(%ebp),%eax
085ad8cb +0x653:  mov    0x28(%eax),%esi
085ad8ce +0x656:  mov    0x18(%ebp),%eax
085ad8d1 +0x659:  mov    0x18(%eax),%eax
085ad8d4 +0x65c:  mov    %eax,-0x60(%ebp)
085ad8d7 +0x65f:  mov    0x18(%ebp),%eax
085ad8da +0x662:  mov    0x1c(%eax),%eax
085ad8dd +0x665:  mov    %eax,-0x5c(%ebp)
085ad8e0 +0x668:  mov    0x18(%ebp),%eax
085ad8e3 +0x66b:  mov    0x20(%eax),%eax
085ad8e6 +0x66e:  mov    %eax,-0x58(%ebp)
085ad8e9 +0x671:  mov    0x18(%ebp),%eax
085ad8ec +0x674:  mov    0x10(%eax),%eax
085ad8ef +0x677:  mov    %eax,-0x54(%ebp)
085ad8f2 +0x67a:  mov    0x18(%ebp),%eax
085ad8f5 +0x67d:  mov    0x14(%eax),%eax
085ad8f8 +0x680:  mov    %eax,-0x50(%ebp)
085ad8fb +0x683:  mov    0x18(%ebp),%eax
085ad8fe +0x686:  mov    0xc(%eax),%eax
085ad901 +0x689:  mov    %eax,-0x4c(%ebp)
085ad904 +0x68c:  mov    0x18(%ebp),%eax
085ad907 +0x68f:  mov    0x30(%eax),%eax
085ad90a +0x692:  mov    %eax,-0x48(%ebp)
085ad90d +0x695:  mov    0x18(%ebp),%eax
085ad910 +0x698:  mov    0x2c(%eax),%edi
085ad913 +0x69b:  mov    0x18(%ebp),%eax
085ad916 +0x69e:  mov    0x24(%eax),%ebx
085ad919 +0x6a1:  mov    0x18(%ebp),%eax
085ad91c +0x6a4:  mov    (%eax),%ecx
085ad91e +0x6a6:  mov    0x18(%ebp),%eax
085ad921 +0x6a9:  mov    0x4(%eax),%edx
085ad924 +0x6ac:  mov    0x14(%ebp),%eax
085ad927 +0x6af:  flds   (%eax)
085ad929 +0x6b1:  mov    %esi,0x4c(%esp)
085ad92d +0x6b5:  mov    -0x60(%ebp),%eax
085ad930 +0x6b8:  mov    %eax,0x48(%esp)
085ad934 +0x6bc:  mov    -0x5c(%ebp),%eax
085ad937 +0x6bf:  mov    %eax,0x44(%esp)
085ad93b +0x6c3:  mov    -0x58(%ebp),%eax
085ad93e +0x6c6:  mov    %eax,0x40(%esp)
085ad942 +0x6ca:  mov    -0x54(%ebp),%eax
085ad945 +0x6cd:  mov    %eax,0x3c(%esp)
085ad949 +0x6d1:  mov    -0x50(%ebp),%eax
085ad94c +0x6d4:  mov    %eax,0x38(%esp)
085ad950 +0x6d8:  mov    -0x1c(%ebp),%eax
085ad953 +0x6db:  mov    %eax,0x34(%esp)
085ad957 +0x6df:  mov    -0x4c(%ebp),%eax
085ad95a +0x6e2:  mov    %eax,0x30(%esp)
085ad95e +0x6e6:  mov    -0x48(%ebp),%eax
085ad961 +0x6e9:  mov    %eax,0x2c(%esp)
085ad965 +0x6ed:  mov    %edi,0x28(%esp)
085ad969 +0x6f1:  mov    %ebx,0x24(%esp)
085ad96d +0x6f5:  mov    %ecx,0x20(%esp)
085ad971 +0x6f9:  mov    %edx,0x1c(%esp)
085ad975 +0x6fd:  fstpl  0x14(%esp)
085ad979 +0x701:  movl   $"BLOOD_LOG : BONUS EXP PARAMETER : %f, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u\n",0x10(%esp)
085ad981 +0x709:  movl   $0x28c2,0xc(%esp)
085ad989 +0x711:  movl   $&_ZZN6CParty22getClearRewardBonusExpEP5CUserRjRK27stClearRewardExpParameter_tR23stClearRewardBonusExp_tE19__PRETTY_FUNCTION__,0x8(%esp)
085ad991 +0x719:  movl   $"party.cpp",0x4(%esp)
085ad999 +0x721:  movl   $0x1,(%esp)
085ad9a0 +0x728:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085ad9a5 +0x72d:  mov    -0x24(%ebp),%eax
085ad9a8 +0x730:  add    $0xbc,%esp
085ad9ae +0x736:  pop    %ebx
085ad9af +0x737:  pop    %esi
085ad9b0 +0x738:  pop    %edi
085ad9b1 +0x739:  pop    %ebp
085ad9b2 +0x73a:  ret
085ad9b3 +0x73b:  nop
```

## 反编译 C

```c
// CParty::getClearRewardBonusExp @ 0x85ad278

/* CParty::getClearRewardBonusExp(CUser*, unsigned int&, stClearRewardExpParameter_t const&,
   stClearRewardBonusExp_t&) */

uint __thiscall
CParty::getClearRewardBonusExp
          (CParty *this,CUser *param_1,uint *param_2,stClearRewardExpParameter_t *param_3,
          stClearRewardBonusExp_t *param_4)

{
  size_t *psVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong local_44;
  size_t local_30 [2];
  uint local_28;
  uint local_24;
  uint local_20;
  
  local_20 = 0;
  local_24 = *param_2;
  if (*(float *)param_3 != 0.0) {
    local_44 = (ulonglong)*param_2;
    local_44._0_4_ = (uint)(longlong)ROUND((1.0 - *(float *)param_3) * (float)local_44);
    *param_2 = (uint)local_44;
  }
  local_44 = (ulonglong)*param_2;
  local_44._0_4_ = (uint)(longlong)ROUND(*(float *)(param_3 + 4) * (float)local_44);
  *(uint *)(param_4 + 4) = (uint)local_44;
  local_44 = (ulonglong)*param_2;
  local_44._0_4_ = (uint)(longlong)ROUND(*(float *)(param_3 + 8) * (float)local_44);
  *(uint *)param_4 = (uint)local_44;
  if (*(float *)(param_3 + 8) != 0.0) {
    local_30[0] = 1;
    psVar1 = std::max<size_t>((size_t *)param_4,local_30);
    *(size_t *)param_4 = *psVar1;
  }
  local_44 = (ulonglong)*param_2;
  local_44._0_4_ = (uint)(longlong)ROUND(*(float *)(param_3 + 0xc) * (float)local_44);
  *(uint *)(param_4 + 0x24) = (uint)local_44;
  if (*(float *)(param_3 + 0xc) != 0.0) {
    local_30[1] = 1;
    psVar1 = std::max<size_t>((size_t *)(param_4 + 0x24),local_30 + 1);
    *(size_t *)(param_4 + 0x24) = *psVar1;
  }
  local_44 = (ulonglong)*param_2;
  local_44._0_4_ = (uint)(longlong)ROUND(*(float *)(param_3 + 0x2c) * (float)local_44);
  *(uint *)(param_4 + 0x2c) = (uint)local_44;
  local_44 = (ulonglong)*param_2;
  local_44._0_4_ = (uint)(longlong)ROUND(*(float *)(param_3 + 0x34) * (float)local_44);
  *(uint *)(param_4 + 0x30) = (uint)local_44;
  local_44 = (ulonglong)*param_2;
  local_44._0_4_ = (uint)(longlong)ROUND(*(float *)(param_3 + 0x38) * (float)local_44);
  *(uint *)(param_4 + 0x34) = (uint)local_44;
  local_44 = (ulonglong)*param_2;
  local_44._0_4_ = (uint)(longlong)ROUND(*(float *)(param_3 + 0x48) * (float)local_44);
  *(uint *)(param_4 + 0x38) = (uint)local_44;
  if (*(float *)(param_3 + 0x10) == 0.0) {
    if (*(float *)(param_3 + 0x14) != 0.0) {
      local_44 = (ulonglong)*param_2;
      local_44._0_4_ = (uint)(longlong)ROUND(*(float *)(param_3 + 0x14) * (float)local_44);
      *(uint *)(param_4 + 0xc) = (uint)local_44;
      *(undefined4 *)(param_4 + 8) = 1;
    }
  }
  else {
    local_44 = (ulonglong)*param_2;
    local_44._0_4_ = (uint)(longlong)ROUND(*(float *)(param_3 + 0x10) * (float)local_44);
    *(uint *)(param_4 + 0xc) = (uint)local_44;
    *(undefined4 *)(param_4 + 8) = 2;
  }
  if (*(float *)(param_3 + 0x30) == 0.0) goto LAB_085ad606;
  local_44 = (ulonglong)*param_2;
  local_44._0_4_ = (uint)(longlong)ROUND(*(float *)(param_3 + 0x30) * (float)local_44);
  local_20 = (uint)local_44;
  iVar3 = *(int *)(param_4 + 8);
  if (0 < iVar3) {
    if (iVar3 < 3) {
      if (*(uint *)(param_4 + 0xc) < (uint)local_44) {
        *(uint *)(param_4 + 0xc) = (uint)local_44;
        *(undefined4 *)(param_4 + 8) = 4;
      }
      goto LAB_085ad606;
    }
    if (iVar3 == 3) goto LAB_085ad606;
  }
  *(uint *)(param_4 + 0xc) = (uint)local_44;
  *(undefined4 *)(param_4 + 8) = 4;
LAB_085ad606:
  local_44 = (ulonglong)*param_2;
  local_44._0_4_ = (uint)(longlong)ROUND(*(float *)(param_3 + 0x18) * (float)local_44);
  *(uint *)(param_4 + 0x14) = (uint)local_44;
  if (*(int *)(param_3 + 0x1c) != 0) {
    *(uint *)(param_4 + 0x10) = (*(int *)(param_3 + 0x1c) * *param_2) / 100;
    *(undefined4 *)(param_4 + 8) = 1;
  }
  local_44 = (ulonglong)*param_2;
  local_44._0_4_ = (uint)(longlong)ROUND(*(float *)(param_3 + 0x20) * (float)local_44);
  *(uint *)(param_4 + 0x20) = (uint)local_44;
  local_44 = (ulonglong)*param_2;
  local_44._0_4_ = (uint)(longlong)ROUND(*(float *)(param_3 + 0x28) * (float)local_44);
  *(uint *)(param_4 + 0x1c) = (uint)local_44;
  local_44 = (ulonglong)*param_2;
  local_44._0_4_ = (uint)(longlong)ROUND(*(float *)(param_3 + 0x24) * (float)local_44);
  *(uint *)(param_4 + 0x18) = (uint)local_44;
  local_44 = (ulonglong)*param_2;
  local_44._0_4_ = (uint)(longlong)ROUND(*(float *)(param_3 + 0x3c) * (float)local_44);
  *(uint *)(param_4 + 0x3c) = (uint)local_44;
  local_44 = (ulonglong)*param_2;
  local_44._0_4_ = (uint)(longlong)ROUND(*(float *)(param_3 + 0x40) * (float)local_44);
  *(uint *)(param_4 + 0x40) = (uint)local_44;
  local_44 = (ulonglong)*param_2;
  local_44._0_4_ = (uint)(longlong)ROUND(*(float *)(param_3 + 0x44) * (float)local_44);
  *(uint *)(param_4 + 0x44) = (uint)local_44;
  local_28 = *param_2 + *(int *)(param_4 + 4) + *(int *)param_4 + *(int *)(param_4 + 0xc) +
             *(int *)(param_4 + 0x14) + *(int *)(param_4 + 0x18) + *(int *)(param_4 + 0x1c) +
             *(int *)(param_4 + 0x10) + *(int *)(param_4 + 0x20) + *(int *)(param_4 + 0x24);
  uVar2 = CUser::gainExpAsUpperMember(param_1,*param_2);
  *(undefined4 *)(param_4 + 0x28) = uVar2;
  local_28 = local_28 + *(int *)(param_4 + 0x28);
  iVar3 = CUser::gainGuildSkillExp(param_1,*param_2);
  local_28 = local_28 + iVar3;
  iVar3 = CUser::gainPowerWarRewardExp((int)param_1);
  local_28 = local_28 + iVar3 + *(int *)(param_4 + 0x2c) + *(int *)(param_4 + 0x30) +
             *(int *)(param_4 + 0x34) + *(int *)(param_4 + 0x38) + *(int *)(param_4 + 0x3c) +
             *(int *)(param_4 + 0x40) + *(int *)(param_4 + 0x44);
  if (1000000 < local_28) {
    LogManager::logFormat
              (1,"party.cpp",
               "unsigned int CParty::getClearRewardBonusExp(CUser*, unsigned int&, const stClearRewardExpParameter_t&, stClearRewardBonusExp_t&)"
               ,0x28b1,"BLOOD_LOG : EXP(%u), ExpPerUser(%u)\n",local_28,local_24);
    LogManager::logFormat
              (1,"party.cpp",
               "unsigned int CParty::getClearRewardBonusExp(CUser*, unsigned int&, const stClearRewardExpParameter_t&, stClearRewardBonusExp_t&)"
               ,0x28c2,
               "BLOOD_LOG : BONUS EXP PARAMETER : %f, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u\n"
               ,(double)*(float *)param_3,*(undefined4 *)(param_4 + 4),*(undefined4 *)param_4,
               *(undefined4 *)(param_4 + 0x24),*(undefined4 *)(param_4 + 0x2c),
               *(undefined4 *)(param_4 + 0x30),*(undefined4 *)(param_4 + 0xc),local_20,
               *(undefined4 *)(param_4 + 0x14),*(undefined4 *)(param_4 + 0x10),
               *(undefined4 *)(param_4 + 0x20),*(undefined4 *)(param_4 + 0x1c),
               *(undefined4 *)(param_4 + 0x18),*(undefined4 *)(param_4 + 0x28));
  }
  return local_28;
}
```
