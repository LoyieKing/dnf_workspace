# CSourceVersionMgr

`_GLOBAL__I__ZN17CSourceVersionMgrC2Ev`

`global constructors keyed to CSourceVersionMgr::CSourceVersionMgr()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CSourceVersionMgr` | `0x086b2388` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086b2388  _GLOBAL__I__ZN17CSourceVersionMgrC2Ev
#           global constructors keyed to CSourceVersionMgr::CSourceVersionMgr()
# range [0x086b2388, 0x086b2fef]
086b2388 +0x000:  push   %ebp
086b2389 +0x001:  mov    %esp,%ebp
086b238b +0x003:  sub    $0x18,%esp
086b238e +0x006:  movl   $0xffff,0x4(%esp)
086b2396 +0x00e:  movl   $0x1,(%esp)
086b239d +0x015:  call   086b2348 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
086b23a2 +0x01a:  leave
086b23a3 +0x01b:  ret
086b23a4 +0x01c:  push   %ebp
086b23a5 +0x01d:  mov    %esp,%ebp
086b23a7 +0x01f:  push   %esi
086b23a8 +0x020:  push   %ebx
086b23a9 +0x021:  sub    $0x10,%esp
086b23ac +0x024:  mov    0x8(%ebp),%eax
086b23af +0x027:  mov    %eax,(%esp)
086b23b2 +0x02a:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
086b23b7 +0x02f:  mov    0x8(%ebp),%eax
086b23ba +0x032:  mov    0xc(%ebp),%edx
086b23bd +0x035:  mov    %edx,0x4(%esp)
086b23c1 +0x039:  mov    %eax,(%esp)
086b23c4 +0x03c:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
086b23c9 +0x041:  mov    0x8(%ebp),%eax
086b23cc +0x044:  mov    0x10(%ebp),%edx
086b23cf +0x047:  mov    %edx,0x4(%eax)
086b23d2 +0x04a:  add    $0x10,%esp
086b23d5 +0x04d:  pop    %ebx
086b23d6 +0x04e:  pop    %esi
086b23d7 +0x04f:  pop    %ebp
086b23d8 +0x050:  ret
086b23d9 +0x051:  mov    %edx,%ebx
086b23db +0x053:  mov    %eax,%esi
086b23dd +0x055:  mov    0x8(%ebp),%eax
086b23e0 +0x058:  mov    %eax,(%esp)
086b23e3 +0x05b:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086b23e8 +0x060:  mov    %esi,%eax
086b23ea +0x062:  mov    %ebx,%edx
086b23ec +0x064:  mov    %eax,(%esp)
086b23ef +0x067:  call   08ae3750 <_Unwind_Resume>
086b23f4 +0x06c:  push   %ebp
086b23f5 +0x06d:  mov    %esp,%ebp
086b23f7 +0x06f:  sub    $0x18,%esp
086b23fa +0x072:  mov    0x8(%ebp),%eax
086b23fd +0x075:  mov    %eax,(%esp)
086b2400 +0x078:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086b2405 +0x07d:  leave
086b2406 +0x07e:  ret
086b2407 +0x07f:  nop
086b2408 +0x080:  push   %ebp
086b2409 +0x081:  mov    %esp,%ebp
086b240b +0x083:  push   %esi
086b240c +0x084:  push   %ebx
086b240d +0x085:  sub    $0x20,%esp
086b2410 +0x088:  mov    0x10(%ebp),%eax
086b2413 +0x08b:  mov    %eax,0x8(%esp)
086b2417 +0x08f:  mov    0xc(%ebp),%eax
086b241a +0x092:  mov    %eax,0x4(%esp)
086b241e +0x096:  lea    -0x10(%ebp),%eax
086b2421 +0x099:  mov    %eax,(%esp)
086b2424 +0x09c:  call   086b23a4 <+0x1c>
086b2429 +0x0a1:  mov    0x8(%ebp),%eax
086b242c +0x0a4:  lea    -0x10(%ebp),%edx
086b242f +0x0a7:  mov    %edx,0x4(%esp)
086b2433 +0x0ab:  mov    %eax,(%esp)
086b2436 +0x0ae:  call   086b246a <+0xe2>
086b243b +0x0b3:  jmp    086b2458 <+0xd0>
086b243d +0x0b5:  mov    %edx,%ebx
086b243f +0x0b7:  mov    %eax,%esi
086b2441 +0x0b9:  lea    -0x10(%ebp),%eax
086b2444 +0x0bc:  mov    %eax,(%esp)
086b2447 +0x0bf:  call   086b23f4 <+0x6c>
086b244c +0x0c4:  mov    %esi,%eax
086b244e +0x0c6:  mov    %ebx,%edx
086b2450 +0x0c8:  mov    %eax,(%esp)
086b2453 +0x0cb:  call   08ae3750 <_Unwind_Resume>
086b2458 +0x0d0:  lea    -0x10(%ebp),%eax
086b245b +0x0d3:  mov    %eax,(%esp)
086b245e +0x0d6:  call   086b23f4 <+0x6c>
086b2463 +0x0db:  add    $0x20,%esp
086b2466 +0x0de:  pop    %ebx
086b2467 +0x0df:  pop    %esi
086b2468 +0x0e0:  pop    %ebp
086b2469 +0x0e1:  ret
086b246a +0x0e2:  push   %ebp
086b246b +0x0e3:  mov    %esp,%ebp
086b246d +0x0e5:  sub    $0x18,%esp
086b2470 +0x0e8:  mov    0xc(%ebp),%eax
086b2473 +0x0eb:  mov    %eax,(%esp)
086b2476 +0x0ee:  call   086b2519 <+0x191>
086b247b +0x0f3:  mov    %eax,0x4(%esp)
086b247f +0x0f7:  mov    0x8(%ebp),%eax
086b2482 +0x0fa:  mov    %eax,(%esp)
086b2485 +0x0fd:  call   086b2522 <+0x19a>
086b248a +0x102:  leave
086b248b +0x103:  ret
086b248c +0x104:  push   %ebp
086b248d +0x105:  mov    %esp,%ebp
086b248f +0x107:  mov    0x8(%ebp),%eax
086b2492 +0x10a:  mov    0x4(%eax),%eax
086b2495 +0x10d:  mov    %eax,%edx
086b2497 +0x10f:  mov    0x8(%ebp),%eax
086b249a +0x112:  mov    (%eax),%eax
086b249c +0x114:  mov    %edx,%ecx
086b249e +0x116:  sub    %eax,%ecx
086b24a0 +0x118:  mov    %ecx,%eax
086b24a2 +0x11a:  sar    $0x3,%eax
086b24a5 +0x11d:  pop    %ebp
086b24a6 +0x11e:  ret
086b24a7 +0x11f:  nop
086b24a8 +0x120:  push   %ebp
086b24a9 +0x121:  mov    %esp,%ebp
086b24ab +0x123:  sub    $0x18,%esp
086b24ae +0x126:  mov    0x8(%ebp),%eax
086b24b1 +0x129:  mov    %eax,(%esp)
086b24b4 +0x12c:  call   086b25c0 <+0x238>
086b24b9 +0x131:  leave
086b24ba +0x132:  ret
086b24bb +0x133:  nop
086b24bc +0x134:  push   %ebp
086b24bd +0x135:  mov    %esp,%ebp
086b24bf +0x137:  push   %esi
086b24c0 +0x138:  push   %ebx
086b24c1 +0x139:  sub    $0x10,%esp
086b24c4 +0x13c:  mov    0x8(%ebp),%eax
086b24c7 +0x13f:  mov    %eax,(%esp)
086b24ca +0x142:  call   086b263c <+0x2b4>
086b24cf +0x147:  mov    0x8(%ebp),%edx
086b24d2 +0x14a:  mov    0x4(%edx),%ecx
086b24d5 +0x14d:  mov    0x8(%ebp),%edx
086b24d8 +0x150:  mov    (%edx),%edx
086b24da +0x152:  mov    %eax,0x8(%esp)
086b24de +0x156:  mov    %ecx,0x4(%esp)
086b24e2 +0x15a:  mov    %edx,(%esp)
086b24e5 +0x15d:  call   086b2644 <+0x2bc>
086b24ea +0x162:  jmp    086b2507 <+0x17f>
086b24ec +0x164:  mov    %edx,%ebx
086b24ee +0x166:  mov    %eax,%esi
086b24f0 +0x168:  mov    0x8(%ebp),%eax
086b24f3 +0x16b:  mov    %eax,(%esp)
086b24f6 +0x16e:  call   086b25d4 <+0x24c>
086b24fb +0x173:  mov    %esi,%eax
086b24fd +0x175:  mov    %ebx,%edx
086b24ff +0x177:  mov    %eax,(%esp)
086b2502 +0x17a:  call   08ae3750 <_Unwind_Resume>
086b2507 +0x17f:  mov    0x8(%ebp),%eax
086b250a +0x182:  mov    %eax,(%esp)
086b250d +0x185:  call   086b25d4 <+0x24c>
086b2512 +0x18a:  add    $0x10,%esp
086b2515 +0x18d:  pop    %ebx
086b2516 +0x18e:  pop    %esi
086b2517 +0x18f:  pop    %ebp
086b2518 +0x190:  ret
086b2519 +0x191:  push   %ebp
086b251a +0x192:  mov    %esp,%ebp
086b251c +0x194:  mov    0x8(%ebp),%eax
086b251f +0x197:  pop    %ebp
086b2520 +0x198:  ret
086b2521 +0x199:  nop
086b2522 +0x19a:  push   %ebp
086b2523 +0x19b:  mov    %esp,%ebp
086b2525 +0x19d:  push   %ebx
086b2526 +0x19e:  sub    $0x24,%esp
086b2529 +0x1a1:  mov    0x8(%ebp),%eax
086b252c +0x1a4:  mov    0x4(%eax),%edx
086b252f +0x1a7:  mov    0x8(%ebp),%eax
086b2532 +0x1aa:  mov    0x8(%eax),%eax
086b2535 +0x1ad:  cmp    %eax,%edx
086b2537 +0x1af:  je     086b256e <+0x1e6>
086b2539 +0x1b1:  mov    0xc(%ebp),%eax
086b253c +0x1b4:  mov    %eax,(%esp)
086b253f +0x1b7:  call   086b265e <+0x2d6>
086b2544 +0x1bc:  mov    0x8(%ebp),%edx
086b2547 +0x1bf:  mov    0x4(%edx),%ecx
086b254a +0x1c2:  mov    0x8(%ebp),%edx
086b254d +0x1c5:  mov    %eax,0x8(%esp)
086b2551 +0x1c9:  mov    %ecx,0x4(%esp)
086b2555 +0x1cd:  mov    %edx,(%esp)
086b2558 +0x1d0:  call   086b268c <+0x304>
086b255d +0x1d5:  mov    0x8(%ebp),%eax
086b2560 +0x1d8:  mov    0x4(%eax),%eax
086b2563 +0x1db:  lea    0x8(%eax),%edx
086b2566 +0x1de:  mov    0x8(%ebp),%eax
086b2569 +0x1e1:  mov    %edx,0x4(%eax)
086b256c +0x1e4:  jmp    086b25a6 <+0x21e>
086b256e +0x1e6:  mov    0xc(%ebp),%eax
086b2571 +0x1e9:  mov    %eax,(%esp)
086b2574 +0x1ec:  call   086b265e <+0x2d6>
086b2579 +0x1f1:  mov    %eax,%ebx
086b257b +0x1f3:  lea    -0xc(%ebp),%eax
086b257e +0x1f6:  mov    0x8(%ebp),%edx
086b2581 +0x1f9:  mov    %edx,0x4(%esp)
086b2585 +0x1fd:  mov    %eax,(%esp)
086b2588 +0x200:  call   086b26f4 <+0x36c>
086b258d +0x205:  sub    $0x4,%esp
086b2590 +0x208:  mov    %ebx,0x8(%esp)
086b2594 +0x20c:  mov    -0xc(%ebp),%eax
086b2597 +0x20f:  mov    %eax,0x4(%esp)
086b259b +0x213:  mov    0x8(%ebp),%eax
086b259e +0x216:  mov    %eax,(%esp)
086b25a1 +0x219:  call   086b2744 <+0x3bc>
086b25a6 +0x21e:  mov    -0x4(%ebp),%ebx
086b25a9 +0x221:  leave
086b25aa +0x222:  ret
086b25ab +0x223:  nop
086b25ac +0x224:  push   %ebp
086b25ad +0x225:  mov    %esp,%ebp
086b25af +0x227:  sub    $0x18,%esp
086b25b2 +0x22a:  mov    0x8(%ebp),%eax
086b25b5 +0x22d:  mov    %eax,(%esp)
086b25b8 +0x230:  call   086b2a66 <+0x6de>
086b25bd +0x235:  leave
086b25be +0x236:  ret
086b25bf +0x237:  nop
086b25c0 +0x238:  push   %ebp
086b25c1 +0x239:  mov    %esp,%ebp
086b25c3 +0x23b:  sub    $0x18,%esp
086b25c6 +0x23e:  mov    0x8(%ebp),%eax
086b25c9 +0x241:  mov    %eax,(%esp)
086b25cc +0x244:  call   086b2a36 <+0x6ae>
086b25d1 +0x249:  leave
086b25d2 +0x24a:  ret
086b25d3 +0x24b:  nop
086b25d4 +0x24c:  push   %ebp
086b25d5 +0x24d:  mov    %esp,%ebp
086b25d7 +0x24f:  push   %esi
086b25d8 +0x250:  push   %ebx
086b25d9 +0x251:  sub    $0x10,%esp
086b25dc +0x254:  mov    0x8(%ebp),%eax
086b25df +0x257:  mov    0x8(%eax),%eax
086b25e2 +0x25a:  mov    %eax,%edx
086b25e4 +0x25c:  mov    0x8(%ebp),%eax
086b25e7 +0x25f:  mov    (%eax),%eax
086b25e9 +0x261:  mov    %edx,%ecx
086b25eb +0x263:  sub    %eax,%ecx
086b25ed +0x265:  mov    %ecx,%eax
086b25ef +0x267:  sar    $0x3,%eax
086b25f2 +0x26a:  mov    %eax,%edx
086b25f4 +0x26c:  mov    0x8(%ebp),%eax
086b25f7 +0x26f:  mov    (%eax),%eax
086b25f9 +0x271:  mov    %edx,0x8(%esp)
086b25fd +0x275:  mov    %eax,0x4(%esp)
086b2601 +0x279:  mov    0x8(%ebp),%eax
086b2604 +0x27c:  mov    %eax,(%esp)
086b2607 +0x27f:  call   086b2a7a <+0x6f2>
086b260c +0x284:  jmp    086b2629 <+0x2a1>
086b260e +0x286:  mov    %edx,%ebx
086b2610 +0x288:  mov    %eax,%esi
086b2612 +0x28a:  mov    0x8(%ebp),%eax
086b2615 +0x28d:  mov    %eax,(%esp)
086b2618 +0x290:  call   086b25ac <+0x224>
086b261d +0x295:  mov    %esi,%eax
086b261f +0x297:  mov    %ebx,%edx
086b2621 +0x299:  mov    %eax,(%esp)
086b2624 +0x29c:  call   08ae3750 <_Unwind_Resume>
086b2629 +0x2a1:  mov    0x8(%ebp),%eax
086b262c +0x2a4:  mov    %eax,(%esp)
086b262f +0x2a7:  call   086b25ac <+0x224>
086b2634 +0x2ac:  add    $0x10,%esp
086b2637 +0x2af:  pop    %ebx
086b2638 +0x2b0:  pop    %esi
086b2639 +0x2b1:  pop    %ebp
086b263a +0x2b2:  ret
086b263b +0x2b3:  nop
086b263c +0x2b4:  push   %ebp
086b263d +0x2b5:  mov    %esp,%ebp
086b263f +0x2b7:  mov    0x8(%ebp),%eax
086b2642 +0x2ba:  pop    %ebp
086b2643 +0x2bb:  ret
086b2644 +0x2bc:  push   %ebp
086b2645 +0x2bd:  mov    %esp,%ebp
086b2647 +0x2bf:  sub    $0x18,%esp
086b264a +0x2c2:  mov    0xc(%ebp),%eax
086b264d +0x2c5:  mov    %eax,0x4(%esp)
086b2651 +0x2c9:  mov    0x8(%ebp),%eax
086b2654 +0x2cc:  mov    %eax,(%esp)
086b2657 +0x2cf:  call   086b2aa1 <+0x719>
086b265c +0x2d4:  leave
086b265d +0x2d5:  ret
086b265e +0x2d6:  push   %ebp
086b265f +0x2d7:  mov    %esp,%ebp
086b2661 +0x2d9:  mov    0x8(%ebp),%eax
086b2664 +0x2dc:  pop    %ebp
086b2665 +0x2dd:  ret
086b2666 +0x2de:  push   %ebp
086b2667 +0x2df:  mov    %esp,%ebp
086b2669 +0x2e1:  sub    $0x18,%esp
086b266c +0x2e4:  mov    0xc(%ebp),%edx
086b266f +0x2e7:  mov    0x8(%ebp),%eax
086b2672 +0x2ea:  mov    %edx,0x4(%esp)
086b2676 +0x2ee:  mov    %eax,(%esp)
086b2679 +0x2f1:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
086b267e +0x2f6:  mov    0xc(%ebp),%eax
086b2681 +0x2f9:  mov    0x4(%eax),%edx
086b2684 +0x2fc:  mov    0x8(%ebp),%eax
086b2687 +0x2ff:  mov    %edx,0x4(%eax)
086b268a +0x302:  leave
086b268b +0x303:  ret
086b268c +0x304:  push   %ebp
086b268d +0x305:  mov    %esp,%ebp
086b268f +0x307:  push   %edi
086b2690 +0x308:  push   %esi
086b2691 +0x309:  push   %ebx
086b2692 +0x30a:  sub    $0x2c,%esp
086b2695 +0x30d:  mov    0x10(%ebp),%eax
086b2698 +0x310:  mov    %eax,(%esp)
086b269b +0x313:  call   086b265e <+0x2d6>
086b26a0 +0x318:  mov    %eax,%edi
086b26a2 +0x31a:  mov    0xc(%ebp),%esi
086b26a5 +0x31d:  mov    %esi,0x4(%esp)
086b26a9 +0x321:  movl   $0x8,(%esp)
086b26b0 +0x328:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
086b26b5 +0x32d:  mov    %eax,%ebx
086b26b7 +0x32f:  mov    %ebx,%eax
086b26b9 +0x331:  test   %eax,%eax
086b26bb +0x333:  je     086b26eb <+0x363>
086b26bd +0x335:  mov    %ebx,%eax
086b26bf +0x337:  mov    %edi,0x4(%esp)
086b26c3 +0x33b:  mov    %eax,(%esp)
086b26c6 +0x33e:  call   086b2666 <+0x2de>
086b26cb +0x343:  jmp    086b26eb <+0x363>
086b26cd +0x345:  mov    %edx,%edi
086b26cf +0x347:  mov    %eax,-0x1c(%ebp)
086b26d2 +0x34a:  mov    %esi,0x4(%esp)
086b26d6 +0x34e:  mov    %ebx,(%esp)
086b26d9 +0x351:  call   0807fff6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x1c>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x1c
086b26de +0x356:  mov    -0x1c(%ebp),%eax
086b26e1 +0x359:  mov    %edi,%edx
086b26e3 +0x35b:  mov    %eax,(%esp)
086b26e6 +0x35e:  call   08ae3750 <_Unwind_Resume>
086b26eb +0x363:  add    $0x2c,%esp
086b26ee +0x366:  pop    %ebx
086b26ef +0x367:  pop    %esi
086b26f0 +0x368:  pop    %edi
086b26f1 +0x369:  pop    %ebp
086b26f2 +0x36a:  ret
086b26f3 +0x36b:  nop
086b26f4 +0x36c:  push   %ebp
086b26f5 +0x36d:  mov    %esp,%ebp
086b26f7 +0x36f:  push   %ebx
086b26f8 +0x370:  sub    $0x14,%esp
086b26fb +0x373:  mov    0x8(%ebp),%ebx
086b26fe +0x376:  mov    0xc(%ebp),%eax
086b2701 +0x379:  add    $0x4,%eax
086b2704 +0x37c:  mov    %eax,0x4(%esp)
086b2708 +0x380:  mov    %ebx,(%esp)
086b270b +0x383:  call   086b2abc <+0x734>
086b2710 +0x388:  mov    %ebx,%eax
086b2712 +0x38a:  add    $0x14,%esp
086b2715 +0x38d:  pop    %ebx
086b2716 +0x38e:  pop    %ebp
086b2717 +0x38f:  ret    $0x4
086b271a +0x392:  push   %ebp
086b271b +0x393:  mov    %esp,%ebp
086b271d +0x395:  sub    $0x18,%esp
086b2720 +0x398:  mov    0xc(%ebp),%edx
086b2723 +0x39b:  mov    0x8(%ebp),%eax
086b2726 +0x39e:  mov    %edx,0x4(%esp)
086b272a +0x3a2:  mov    %eax,(%esp)
086b272d +0x3a5:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
086b2732 +0x3aa:  mov    0xc(%ebp),%eax
086b2735 +0x3ad:  mov    0x4(%eax),%edx
086b2738 +0x3b0:  mov    0x8(%ebp),%eax
086b273b +0x3b3:  mov    %edx,0x4(%eax)
086b273e +0x3b6:  mov    0x8(%ebp),%eax
086b2741 +0x3b9:  leave
086b2742 +0x3ba:  ret
086b2743 +0x3bb:  nop
086b2744 +0x3bc:  push   %ebp
086b2745 +0x3bd:  mov    %esp,%ebp
086b2747 +0x3bf:  push   %esi
086b2748 +0x3c0:  push   %ebx
086b2749 +0x3c1:  sub    $0x30,%esp
086b274c +0x3c4:  mov    0x8(%ebp),%eax
086b274f +0x3c7:  mov    0x4(%eax),%edx
086b2752 +0x3ca:  mov    0x8(%ebp),%eax
086b2755 +0x3cd:  mov    0x8(%eax),%eax
086b2758 +0x3d0:  cmp    %eax,%edx
086b275a +0x3d2:  je     086b2829 <+0x4a1>
086b2760 +0x3d8:  mov    0x8(%ebp),%eax
086b2763 +0x3db:  mov    0x4(%eax),%eax
086b2766 +0x3de:  sub    $0x8,%eax
086b2769 +0x3e1:  mov    %eax,(%esp)
086b276c +0x3e4:  call   086b2519 <+0x191>
086b2771 +0x3e9:  mov    0x8(%ebp),%edx
086b2774 +0x3ec:  mov    0x4(%edx),%ecx
086b2777 +0x3ef:  mov    0x8(%ebp),%edx
086b277a +0x3f2:  mov    %eax,0x8(%esp)
086b277e +0x3f6:  mov    %ecx,0x4(%esp)
086b2782 +0x3fa:  mov    %edx,(%esp)
086b2785 +0x3fd:  call   086b268c <+0x304>
086b278a +0x402:  mov    0x8(%ebp),%eax
086b278d +0x405:  mov    0x4(%eax),%eax
086b2790 +0x408:  lea    0x8(%eax),%edx
086b2793 +0x40b:  mov    0x8(%ebp),%eax
086b2796 +0x40e:  mov    %edx,0x4(%eax)
086b2799 +0x411:  mov    0x8(%ebp),%eax
086b279c +0x414:  mov    0x4(%eax),%eax
086b279f +0x417:  lea    -0x8(%eax),%esi
086b27a2 +0x41a:  mov    0x8(%ebp),%eax
086b27a5 +0x41d:  mov    0x4(%eax),%eax
086b27a8 +0x420:  lea    -0x10(%eax),%ebx
086b27ab +0x423:  lea    0xc(%ebp),%eax
086b27ae +0x426:  mov    %eax,(%esp)
086b27b1 +0x429:  call   086b2acc <+0x744>
086b27b6 +0x42e:  mov    (%eax),%eax
086b27b8 +0x430:  mov    %esi,0x8(%esp)
086b27bc +0x434:  mov    %ebx,0x4(%esp)
086b27c0 +0x438:  mov    %eax,(%esp)
086b27c3 +0x43b:  call   086b2ad4 <+0x74c>
086b27c8 +0x440:  mov    0x10(%ebp),%eax
086b27cb +0x443:  mov    %eax,(%esp)
086b27ce +0x446:  call   086b265e <+0x2d6>
086b27d3 +0x44b:  mov    %eax,0x4(%esp)
086b27d7 +0x44f:  lea    -0x24(%ebp),%eax
086b27da +0x452:  mov    %eax,(%esp)
086b27dd +0x455:  call   086b2666 <+0x2de>
086b27e2 +0x45a:  lea    0xc(%ebp),%eax
086b27e5 +0x45d:  mov    %eax,(%esp)
086b27e8 +0x460:  call   086b2b0c <+0x784>
086b27ed +0x465:  lea    -0x24(%ebp),%edx
086b27f0 +0x468:  mov    %edx,0x4(%esp)
086b27f4 +0x46c:  mov    %eax,(%esp)
086b27f7 +0x46f:  call   086b271a <+0x392>
086b27fc +0x474:  jmp    086b2819 <+0x491>
086b27fe +0x476:  mov    %edx,%ebx
086b2800 +0x478:  mov    %eax,%esi
086b2802 +0x47a:  lea    -0x24(%ebp),%eax
086b2805 +0x47d:  mov    %eax,(%esp)
086b2808 +0x480:  call   086b23f4 <+0x6c>
086b280d +0x485:  mov    %esi,%eax
086b280f +0x487:  mov    %ebx,%edx
086b2811 +0x489:  mov    %eax,(%esp)
086b2814 +0x48c:  call   08ae3750 <_Unwind_Resume>
086b2819 +0x491:  lea    -0x24(%ebp),%eax
086b281c +0x494:  mov    %eax,(%esp)
086b281f +0x497:  call   086b23f4 <+0x6c>
086b2824 +0x49c:  jmp    086b2a2b <+0x6a3>
086b2829 +0x4a1:  movl   $"vector::_M_insert_aux",0x8(%esp)
086b2831 +0x4a9:  movl   $0x1,0x4(%esp)
086b2839 +0x4b1:  mov    0x8(%ebp),%eax
086b283c +0x4b4:  mov    %eax,(%esp)
086b283f +0x4b7:  call   086b2b16 <+0x78e>
086b2844 +0x4bc:  mov    %eax,-0x18(%ebp)
086b2847 +0x4bf:  lea    -0x1c(%ebp),%eax
086b284a +0x4c2:  mov    0x8(%ebp),%edx
086b284d +0x4c5:  mov    %edx,0x4(%esp)
086b2851 +0x4c9:  mov    %eax,(%esp)
086b2854 +0x4cc:  call   086b2bbc <+0x834>
086b2859 +0x4d1:  sub    $0x4,%esp
086b285c +0x4d4:  lea    -0x1c(%ebp),%eax
086b285f +0x4d7:  mov    %eax,0x4(%esp)
086b2863 +0x4db:  lea    0xc(%ebp),%eax
086b2866 +0x4de:  mov    %eax,(%esp)
086b2869 +0x4e1:  call   086b2bdf <+0x857>
086b286e +0x4e6:  mov    %eax,-0x14(%ebp)
086b2871 +0x4e9:  mov    0x8(%ebp),%eax
086b2874 +0x4ec:  mov    -0x18(%ebp),%edx
086b2877 +0x4ef:  mov    %edx,0x4(%esp)
086b287b +0x4f3:  mov    %eax,(%esp)
086b287e +0x4f6:  call   086b2c12 <+0x88a>
086b2883 +0x4fb:  mov    %eax,-0x10(%ebp)
086b2886 +0x4fe:  mov    -0x10(%ebp),%eax
086b2889 +0x501:  mov    %eax,-0xc(%ebp)
086b288c +0x504:  mov    0x10(%ebp),%eax
086b288f +0x507:  mov    %eax,(%esp)
086b2892 +0x50a:  call   086b265e <+0x2d6>
086b2897 +0x50f:  mov    -0x14(%ebp),%edx
086b289a +0x512:  shl    $0x3,%edx
086b289d +0x515:  mov    %edx,%ecx
086b289f +0x517:  add    -0x10(%ebp),%ecx
086b28a2 +0x51a:  mov    0x8(%ebp),%edx
086b28a5 +0x51d:  mov    %eax,0x8(%esp)
086b28a9 +0x521:  mov    %ecx,0x4(%esp)
086b28ad +0x525:  mov    %edx,(%esp)
086b28b0 +0x528:  call   086b268c <+0x304>
086b28b5 +0x52d:  movl   $0x0,-0xc(%ebp)
086b28bc +0x534:  mov    0x8(%ebp),%eax
086b28bf +0x537:  mov    %eax,(%esp)
086b28c2 +0x53a:  call   086b263c <+0x2b4>
086b28c7 +0x53f:  mov    %eax,%ebx
086b28c9 +0x541:  lea    0xc(%ebp),%eax
086b28cc +0x544:  mov    %eax,(%esp)
086b28cf +0x547:  call   086b2acc <+0x744>
086b28d4 +0x54c:  mov    (%eax),%edx
086b28d6 +0x54e:  mov    0x8(%ebp),%eax
086b28d9 +0x551:  mov    (%eax),%eax
086b28db +0x553:  mov    %ebx,0xc(%esp)
086b28df +0x557:  mov    -0x10(%ebp),%ecx
086b28e2 +0x55a:  mov    %ecx,0x8(%esp)
086b28e6 +0x55e:  mov    %edx,0x4(%esp)
086b28ea +0x562:  mov    %eax,(%esp)
086b28ed +0x565:  call   086b2c41 <+0x8b9>
086b28f2 +0x56a:  mov    %eax,-0xc(%ebp)
086b28f5 +0x56d:  addl   $0x8,-0xc(%ebp)
086b28f9 +0x571:  mov    0x8(%ebp),%eax
086b28fc +0x574:  mov    %eax,(%esp)
086b28ff +0x577:  call   086b263c <+0x2b4>
086b2904 +0x57c:  mov    %eax,%ebx
086b2906 +0x57e:  mov    0x8(%ebp),%eax
086b2909 +0x581:  mov    0x4(%eax),%esi
086b290c +0x584:  lea    0xc(%ebp),%eax
086b290f +0x587:  mov    %eax,(%esp)
086b2912 +0x58a:  call   086b2acc <+0x744>
086b2917 +0x58f:  mov    (%eax),%eax
086b2919 +0x591:  mov    %ebx,0xc(%esp)
086b291d +0x595:  mov    -0xc(%ebp),%edx
086b2920 +0x598:  mov    %edx,0x8(%esp)
086b2924 +0x59c:  mov    %esi,0x4(%esp)
086b2928 +0x5a0:  mov    %eax,(%esp)
086b292b +0x5a3:  call   086b2c41 <+0x8b9>
086b2930 +0x5a8:  mov    %eax,-0xc(%ebp)
086b2933 +0x5ab:  mov    0x8(%ebp),%eax
086b2936 +0x5ae:  mov    %eax,(%esp)
086b2939 +0x5b1:  call   086b263c <+0x2b4>
086b293e +0x5b6:  mov    0x8(%ebp),%edx
086b2941 +0x5b9:  mov    0x4(%edx),%ecx
086b2944 +0x5bc:  mov    0x8(%ebp),%edx
086b2947 +0x5bf:  mov    (%edx),%edx
086b2949 +0x5c1:  mov    %eax,0x8(%esp)
086b294d +0x5c5:  mov    %ecx,0x4(%esp)
086b2951 +0x5c9:  mov    %edx,(%esp)
086b2954 +0x5cc:  call   086b2644 <+0x2bc>
086b2959 +0x5d1:  mov    0x8(%ebp),%eax
086b295c +0x5d4:  mov    0x8(%eax),%eax
086b295f +0x5d7:  mov    %eax,%edx
086b2961 +0x5d9:  mov    0x8(%ebp),%eax
086b2964 +0x5dc:  mov    (%eax),%eax
086b2966 +0x5de:  mov    %edx,%ecx
086b2968 +0x5e0:  sub    %eax,%ecx
086b296a +0x5e2:  mov    %ecx,%eax
086b296c +0x5e4:  sar    $0x3,%eax
086b296f +0x5e7:  mov    %eax,%ecx
086b2971 +0x5e9:  mov    0x8(%ebp),%eax
086b2974 +0x5ec:  mov    (%eax),%edx
086b2976 +0x5ee:  mov    0x8(%ebp),%eax
086b2979 +0x5f1:  mov    %ecx,0x8(%esp)
086b297d +0x5f5:  mov    %edx,0x4(%esp)
086b2981 +0x5f9:  mov    %eax,(%esp)
086b2984 +0x5fc:  call   086b2a7a <+0x6f2>
086b2989 +0x601:  mov    0x8(%ebp),%eax
086b298c +0x604:  mov    -0x10(%ebp),%edx
086b298f +0x607:  mov    %edx,(%eax)
086b2991 +0x609:  mov    0x8(%ebp),%eax
086b2994 +0x60c:  mov    -0xc(%ebp),%edx
086b2997 +0x60f:  mov    %edx,0x4(%eax)
086b299a +0x612:  mov    -0x18(%ebp),%eax
086b299d +0x615:  shl    $0x3,%eax
086b29a0 +0x618:  mov    %eax,%edx
086b29a2 +0x61a:  add    -0x10(%ebp),%edx
086b29a5 +0x61d:  mov    0x8(%ebp),%eax
086b29a8 +0x620:  mov    %edx,0x8(%eax)
086b29ab +0x623:  jmp    086b2a2b <+0x6a3>
086b29ad +0x625:  mov    %eax,(%esp)
086b29b0 +0x628:  call   08725ce0 <__cxa_begin_catch>
086b29b5 +0x62d:  cmpl   $0x0,-0xc(%ebp)
086b29b9 +0x631:  jne    086b29d7 <+0x64f>
086b29bb +0x633:  mov    -0x14(%ebp),%eax
086b29be +0x636:  shl    $0x3,%eax
086b29c1 +0x639:  mov    %eax,%edx
086b29c3 +0x63b:  add    -0x10(%ebp),%edx
086b29c6 +0x63e:  mov    0x8(%ebp),%eax
086b29c9 +0x641:  mov    %edx,0x4(%esp)
086b29cd +0x645:  mov    %eax,(%esp)
086b29d0 +0x648:  call   086b2c94 <+0x90c>
086b29d5 +0x64d:  jmp    086b29f8 <+0x670>
086b29d7 +0x64f:  mov    0x8(%ebp),%eax
086b29da +0x652:  mov    %eax,(%esp)
086b29dd +0x655:  call   086b263c <+0x2b4>
086b29e2 +0x65a:  mov    %eax,0x8(%esp)
086b29e6 +0x65e:  mov    -0xc(%ebp),%eax
086b29e9 +0x661:  mov    %eax,0x4(%esp)
086b29ed +0x665:  mov    -0x10(%ebp),%eax
086b29f0 +0x668:  mov    %eax,(%esp)
086b29f3 +0x66b:  call   086b2644 <+0x2bc>
086b29f8 +0x670:  mov    0x8(%ebp),%eax
086b29fb +0x673:  mov    -0x18(%ebp),%edx
086b29fe +0x676:  mov    %edx,0x8(%esp)
086b2a02 +0x67a:  mov    -0x10(%ebp),%edx
086b2a05 +0x67d:  mov    %edx,0x4(%esp)
086b2a09 +0x681:  mov    %eax,(%esp)
086b2a0c +0x684:  call   086b2a7a <+0x6f2>
086b2a11 +0x689:  call   08724be0 <__cxa_rethrow>
086b2a16 +0x68e:  mov    %edx,%ebx
086b2a18 +0x690:  mov    %eax,%esi
086b2a1a +0x692:  call   08725c30 <__cxa_end_catch>
086b2a1f +0x697:  mov    %esi,%eax
086b2a21 +0x699:  mov    %ebx,%edx
086b2a23 +0x69b:  mov    %eax,(%esp)
086b2a26 +0x69e:  call   08ae3750 <_Unwind_Resume>
086b2a2b +0x6a3:  lea    -0x8(%ebp),%esp
086b2a2e +0x6a6:  add    $0x0,%esp
086b2a31 +0x6a9:  pop    %ebx
086b2a32 +0x6aa:  pop    %esi
086b2a33 +0x6ab:  pop    %ebp
086b2a34 +0x6ac:  ret
086b2a35 +0x6ad:  nop
086b2a36 +0x6ae:  push   %ebp
086b2a37 +0x6af:  mov    %esp,%ebp
086b2a39 +0x6b1:  sub    $0x18,%esp
086b2a3c +0x6b4:  mov    0x8(%ebp),%eax
086b2a3f +0x6b7:  mov    %eax,(%esp)
086b2a42 +0x6ba:  call   086b2ca8 <+0x920>
086b2a47 +0x6bf:  mov    0x8(%ebp),%eax
086b2a4a +0x6c2:  movl   $0x0,(%eax)
086b2a50 +0x6c8:  mov    0x8(%ebp),%eax
086b2a53 +0x6cb:  movl   $0x0,0x4(%eax)
086b2a5a +0x6d2:  mov    0x8(%ebp),%eax
086b2a5d +0x6d5:  movl   $0x0,0x8(%eax)
086b2a64 +0x6dc:  leave
086b2a65 +0x6dd:  ret
086b2a66 +0x6de:  push   %ebp
086b2a67 +0x6df:  mov    %esp,%ebp
086b2a69 +0x6e1:  sub    $0x18,%esp
086b2a6c +0x6e4:  mov    0x8(%ebp),%eax
086b2a6f +0x6e7:  mov    %eax,(%esp)
086b2a72 +0x6ea:  call   086b2cbc <+0x934>
086b2a77 +0x6ef:  leave
086b2a78 +0x6f0:  ret
086b2a79 +0x6f1:  nop
086b2a7a +0x6f2:  push   %ebp
086b2a7b +0x6f3:  mov    %esp,%ebp
086b2a7d +0x6f5:  sub    $0x18,%esp
086b2a80 +0x6f8:  cmpl   $0x0,0xc(%ebp)
086b2a84 +0x6fc:  je     086b2a9f <+0x717>
086b2a86 +0x6fe:  mov    0x8(%ebp),%eax
086b2a89 +0x701:  mov    0x10(%ebp),%edx
086b2a8c +0x704:  mov    %edx,0x8(%esp)
086b2a90 +0x708:  mov    0xc(%ebp),%edx
086b2a93 +0x70b:  mov    %edx,0x4(%esp)
086b2a97 +0x70f:  mov    %eax,(%esp)
086b2a9a +0x712:  call   086b2cc2 <+0x93a>
086b2a9f +0x717:  leave
086b2aa0 +0x718:  ret
086b2aa1 +0x719:  push   %ebp
086b2aa2 +0x71a:  mov    %esp,%ebp
086b2aa4 +0x71c:  sub    $0x18,%esp
086b2aa7 +0x71f:  mov    0xc(%ebp),%eax
086b2aaa +0x722:  mov    %eax,0x4(%esp)
086b2aae +0x726:  mov    0x8(%ebp),%eax
086b2ab1 +0x729:  mov    %eax,(%esp)
086b2ab4 +0x72c:  call   086b2cd5 <+0x94d>
086b2ab9 +0x731:  leave
086b2aba +0x732:  ret
086b2abb +0x733:  nop
086b2abc +0x734:  push   %ebp
086b2abd +0x735:  mov    %esp,%ebp
086b2abf +0x737:  mov    0xc(%ebp),%eax
086b2ac2 +0x73a:  mov    (%eax),%edx
086b2ac4 +0x73c:  mov    0x8(%ebp),%eax
086b2ac7 +0x73f:  mov    %edx,(%eax)
086b2ac9 +0x741:  pop    %ebp
086b2aca +0x742:  ret
086b2acb +0x743:  nop
086b2acc +0x744:  push   %ebp
086b2acd +0x745:  mov    %esp,%ebp
086b2acf +0x747:  mov    0x8(%ebp),%eax
086b2ad2 +0x74a:  pop    %ebp
086b2ad3 +0x74b:  ret
086b2ad4 +0x74c:  push   %ebp
086b2ad5 +0x74d:  mov    %esp,%ebp
086b2ad7 +0x74f:  push   %ebx
086b2ad8 +0x750:  sub    $0x14,%esp
086b2adb +0x753:  mov    0xc(%ebp),%eax
086b2ade +0x756:  mov    %eax,(%esp)
086b2ae1 +0x759:  call   086b2cfb <+0x973>
086b2ae6 +0x75e:  mov    %eax,%ebx
086b2ae8 +0x760:  mov    0x8(%ebp),%eax
086b2aeb +0x763:  mov    %eax,(%esp)
086b2aee +0x766:  call   086b2cfb <+0x973>
086b2af3 +0x76b:  mov    0x10(%ebp),%edx
086b2af6 +0x76e:  mov    %edx,0x8(%esp)
086b2afa +0x772:  mov    %ebx,0x4(%esp)
086b2afe +0x776:  mov    %eax,(%esp)
086b2b01 +0x779:  call   086b2d03 <+0x97b>
086b2b06 +0x77e:  add    $0x14,%esp
086b2b09 +0x781:  pop    %ebx
086b2b0a +0x782:  pop    %ebp
086b2b0b +0x783:  ret
086b2b0c +0x784:  push   %ebp
086b2b0d +0x785:  mov    %esp,%ebp
086b2b0f +0x787:  mov    0x8(%ebp),%eax
086b2b12 +0x78a:  mov    (%eax),%eax
086b2b14 +0x78c:  pop    %ebp
086b2b15 +0x78d:  ret
086b2b16 +0x78e:  push   %ebp
086b2b17 +0x78f:  mov    %esp,%ebp
086b2b19 +0x791:  push   %ebx
086b2b1a +0x792:  sub    $0x24,%esp
086b2b1d +0x795:  mov    0x8(%ebp),%eax
086b2b20 +0x798:  mov    %eax,(%esp)
086b2b23 +0x79b:  call   086b2d48 <+0x9c0>
086b2b28 +0x7a0:  mov    %eax,%ebx
086b2b2a +0x7a2:  mov    0x8(%ebp),%eax
086b2b2d +0x7a5:  mov    %eax,(%esp)
086b2b30 +0x7a8:  call   086b248c <+0x104>
086b2b35 +0x7ad:  mov    %ebx,%edx
086b2b37 +0x7af:  sub    %eax,%edx
086b2b39 +0x7b1:  mov    0xc(%ebp),%eax
086b2b3c +0x7b4:  cmp    %eax,%edx
086b2b3e +0x7b6:  setb   %al
086b2b41 +0x7b9:  test   %al,%al
086b2b43 +0x7bb:  je     086b2b50 <+0x7c8>
086b2b45 +0x7bd:  mov    0x10(%ebp),%eax
086b2b48 +0x7c0:  mov    %eax,(%esp)
086b2b4b +0x7c3:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
086b2b50 +0x7c8:  mov    0x8(%ebp),%eax
086b2b53 +0x7cb:  mov    %eax,(%esp)
086b2b56 +0x7ce:  call   086b248c <+0x104>
086b2b5b +0x7d3:  mov    %eax,%ebx
086b2b5d +0x7d5:  mov    0x8(%ebp),%eax
086b2b60 +0x7d8:  mov    %eax,(%esp)
086b2b63 +0x7db:  call   086b248c <+0x104>
086b2b68 +0x7e0:  mov    %eax,-0x10(%ebp)
086b2b6b +0x7e3:  lea    0xc(%ebp),%eax
086b2b6e +0x7e6:  mov    %eax,0x4(%esp)
086b2b72 +0x7ea:  lea    -0x10(%ebp),%eax
086b2b75 +0x7ed:  mov    %eax,(%esp)
086b2b78 +0x7f0:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
086b2b7d +0x7f5:  mov    (%eax),%eax
086b2b7f +0x7f7:  lea    (%ebx,%eax,1),%eax
086b2b82 +0x7fa:  mov    %eax,-0xc(%ebp)
086b2b85 +0x7fd:  mov    0x8(%ebp),%eax
086b2b88 +0x800:  mov    %eax,(%esp)
086b2b8b +0x803:  call   086b248c <+0x104>
086b2b90 +0x808:  cmp    -0xc(%ebp),%eax
086b2b93 +0x80b:  ja     086b2ba5 <+0x81d>
086b2b95 +0x80d:  mov    0x8(%ebp),%eax
086b2b98 +0x810:  mov    %eax,(%esp)
086b2b9b +0x813:  call   086b2d48 <+0x9c0>
086b2ba0 +0x818:  cmp    -0xc(%ebp),%eax
086b2ba3 +0x81b:  jae    086b2bb2 <+0x82a>
086b2ba5 +0x81d:  mov    0x8(%ebp),%eax
086b2ba8 +0x820:  mov    %eax,(%esp)
086b2bab +0x823:  call   086b2d48 <+0x9c0>
086b2bb0 +0x828:  jmp    086b2bb5 <+0x82d>
086b2bb2 +0x82a:  mov    -0xc(%ebp),%eax
086b2bb5 +0x82d:  add    $0x24,%esp
086b2bb8 +0x830:  pop    %ebx
086b2bb9 +0x831:  pop    %ebp
086b2bba +0x832:  ret
086b2bbb +0x833:  nop
086b2bbc +0x834:  push   %ebp
086b2bbd +0x835:  mov    %esp,%ebp
086b2bbf +0x837:  push   %ebx
086b2bc0 +0x838:  sub    $0x14,%esp
086b2bc3 +0x83b:  mov    0x8(%ebp),%ebx
086b2bc6 +0x83e:  mov    0xc(%ebp),%eax
086b2bc9 +0x841:  mov    %eax,0x4(%esp)
086b2bcd +0x845:  mov    %ebx,(%esp)
086b2bd0 +0x848:  call   086b2abc <+0x734>
086b2bd5 +0x84d:  mov    %ebx,%eax
086b2bd7 +0x84f:  add    $0x14,%esp
086b2bda +0x852:  pop    %ebx
086b2bdb +0x853:  pop    %ebp
086b2bdc +0x854:  ret    $0x4
086b2bdf +0x857:  push   %ebp
086b2be0 +0x858:  mov    %esp,%ebp
086b2be2 +0x85a:  push   %ebx
086b2be3 +0x85b:  sub    $0x14,%esp
086b2be6 +0x85e:  mov    0x8(%ebp),%eax
086b2be9 +0x861:  mov    %eax,(%esp)
086b2bec +0x864:  call   086b2acc <+0x744>
086b2bf1 +0x869:  mov    (%eax),%eax
086b2bf3 +0x86b:  mov    %eax,%ebx
086b2bf5 +0x86d:  mov    0xc(%ebp),%eax
086b2bf8 +0x870:  mov    %eax,(%esp)
086b2bfb +0x873:  call   086b2acc <+0x744>
086b2c00 +0x878:  mov    (%eax),%eax
086b2c02 +0x87a:  mov    %ebx,%edx
086b2c04 +0x87c:  sub    %eax,%edx
086b2c06 +0x87e:  mov    %edx,%eax
086b2c08 +0x880:  sar    $0x3,%eax
086b2c0b +0x883:  add    $0x14,%esp
086b2c0e +0x886:  pop    %ebx
086b2c0f +0x887:  pop    %ebp
086b2c10 +0x888:  ret
086b2c11 +0x889:  nop
086b2c12 +0x88a:  push   %ebp
086b2c13 +0x88b:  mov    %esp,%ebp
086b2c15 +0x88d:  sub    $0x18,%esp
086b2c18 +0x890:  cmpl   $0x0,0xc(%ebp)
086b2c1c +0x894:  je     086b2c3a <+0x8b2>
086b2c1e +0x896:  mov    0x8(%ebp),%eax
086b2c21 +0x899:  movl   $0x0,0x8(%esp)
086b2c29 +0x8a1:  mov    0xc(%ebp),%edx
086b2c2c +0x8a4:  mov    %edx,0x4(%esp)
086b2c30 +0x8a8:  mov    %eax,(%esp)
086b2c33 +0x8ab:  call   086b2d64 <+0x9dc>
086b2c38 +0x8b0:  jmp    086b2c3f <+0x8b7>
086b2c3a +0x8b2:  mov    $0x0,%eax
086b2c3f +0x8b7:  leave
086b2c40 +0x8b8:  ret
086b2c41 +0x8b9:  push   %ebp
086b2c42 +0x8ba:  mov    %esp,%ebp
086b2c44 +0x8bc:  sub    $0x28,%esp
086b2c47 +0x8bf:  lea    -0x10(%ebp),%eax
086b2c4a +0x8c2:  lea    0xc(%ebp),%edx
086b2c4d +0x8c5:  mov    %edx,0x4(%esp)
086b2c51 +0x8c9:  mov    %eax,(%esp)
086b2c54 +0x8cc:  call   086b2d9c <+0xa14>
086b2c59 +0x8d1:  sub    $0x4,%esp
086b2c5c +0x8d4:  lea    -0xc(%ebp),%eax
086b2c5f +0x8d7:  lea    0x8(%ebp),%edx
086b2c62 +0x8da:  mov    %edx,0x4(%esp)
086b2c66 +0x8de:  mov    %eax,(%esp)
086b2c69 +0x8e1:  call   086b2d9c <+0xa14>
086b2c6e +0x8e6:  sub    $0x4,%esp
086b2c71 +0x8e9:  mov    0x14(%ebp),%eax
086b2c74 +0x8ec:  mov    %eax,0xc(%esp)
086b2c78 +0x8f0:  mov    0x10(%ebp),%eax
086b2c7b +0x8f3:  mov    %eax,0x8(%esp)
086b2c7f +0x8f7:  mov    -0x10(%ebp),%eax
086b2c82 +0x8fa:  mov    %eax,0x4(%esp)
086b2c86 +0x8fe:  mov    -0xc(%ebp),%eax
086b2c89 +0x901:  mov    %eax,(%esp)
086b2c8c +0x904:  call   086b2dc1 <+0xa39>
086b2c91 +0x909:  leave
086b2c92 +0x90a:  ret
086b2c93 +0x90b:  nop
086b2c94 +0x90c:  push   %ebp
086b2c95 +0x90d:  mov    %esp,%ebp
086b2c97 +0x90f:  sub    $0x18,%esp
086b2c9a +0x912:  mov    0xc(%ebp),%eax
086b2c9d +0x915:  mov    %eax,(%esp)
086b2ca0 +0x918:  call   086b23f4 <+0x6c>
086b2ca5 +0x91d:  leave
086b2ca6 +0x91e:  ret
086b2ca7 +0x91f:  nop
086b2ca8 +0x920:  push   %ebp
086b2ca9 +0x921:  mov    %esp,%ebp
086b2cab +0x923:  sub    $0x18,%esp
086b2cae +0x926:  mov    0x8(%ebp),%eax
086b2cb1 +0x929:  mov    %eax,(%esp)
086b2cb4 +0x92c:  call   086b2de2 <+0xa5a>
086b2cb9 +0x931:  leave
086b2cba +0x932:  ret
086b2cbb +0x933:  nop
086b2cbc +0x934:  push   %ebp
086b2cbd +0x935:  mov    %esp,%ebp
086b2cbf +0x937:  pop    %ebp
086b2cc0 +0x938:  ret
086b2cc1 +0x939:  nop
086b2cc2 +0x93a:  push   %ebp
086b2cc3 +0x93b:  mov    %esp,%ebp
086b2cc5 +0x93d:  sub    $0x18,%esp
086b2cc8 +0x940:  mov    0xc(%ebp),%eax
086b2ccb +0x943:  mov    %eax,(%esp)
086b2cce +0x946:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
086b2cd3 +0x94b:  leave
086b2cd4 +0x94c:  ret
086b2cd5 +0x94d:  push   %ebp
086b2cd6 +0x94e:  mov    %esp,%ebp
086b2cd8 +0x950:  sub    $0x18,%esp
086b2cdb +0x953:  jmp    086b2cec <+0x964>
086b2cdd +0x955:  mov    0x8(%ebp),%eax
086b2ce0 +0x958:  mov    %eax,(%esp)
086b2ce3 +0x95b:  call   086b2de7 <+0xa5f>
086b2ce8 +0x960:  addl   $0x8,0x8(%ebp)
086b2cec +0x964:  mov    0x8(%ebp),%eax
086b2cef +0x967:  cmp    0xc(%ebp),%eax
086b2cf2 +0x96a:  setne  %al
086b2cf5 +0x96d:  test   %al,%al
086b2cf7 +0x96f:  jne    086b2cdd <+0x955>
086b2cf9 +0x971:  leave
086b2cfa +0x972:  ret
086b2cfb +0x973:  push   %ebp
086b2cfc +0x974:  mov    %esp,%ebp
086b2cfe +0x976:  mov    0x8(%ebp),%eax
086b2d01 +0x979:  pop    %ebp
086b2d02 +0x97a:  ret
086b2d03 +0x97b:  push   %ebp
086b2d04 +0x97c:  mov    %esp,%ebp
086b2d06 +0x97e:  push   %esi
086b2d07 +0x97f:  push   %ebx
086b2d08 +0x980:  sub    $0x10,%esp
086b2d0b +0x983:  mov    0x10(%ebp),%eax
086b2d0e +0x986:  mov    %eax,(%esp)
086b2d11 +0x989:  call   086b2dfa <+0xa72>
086b2d16 +0x98e:  mov    %eax,%esi
086b2d18 +0x990:  mov    0xc(%ebp),%eax
086b2d1b +0x993:  mov    %eax,(%esp)
086b2d1e +0x996:  call   086b2dfa <+0xa72>
086b2d23 +0x99b:  mov    %eax,%ebx
086b2d25 +0x99d:  mov    0x8(%ebp),%eax
086b2d28 +0x9a0:  mov    %eax,(%esp)
086b2d2b +0x9a3:  call   086b2dfa <+0xa72>
086b2d30 +0x9a8:  mov    %esi,0x8(%esp)
086b2d34 +0x9ac:  mov    %ebx,0x4(%esp)
086b2d38 +0x9b0:  mov    %eax,(%esp)
086b2d3b +0x9b3:  call   086b2e02 <+0xa7a>
086b2d40 +0x9b8:  add    $0x10,%esp
086b2d43 +0x9bb:  pop    %ebx
086b2d44 +0x9bc:  pop    %esi
086b2d45 +0x9bd:  pop    %ebp
086b2d46 +0x9be:  ret
086b2d47 +0x9bf:  nop
086b2d48 +0x9c0:  push   %ebp
086b2d49 +0x9c1:  mov    %esp,%ebp
086b2d4b +0x9c3:  sub    $0x18,%esp
086b2d4e +0x9c6:  mov    0x8(%ebp),%eax
086b2d51 +0x9c9:  mov    %eax,(%esp)
086b2d54 +0x9cc:  call   086b2e28 <+0xaa0>
086b2d59 +0x9d1:  mov    %eax,(%esp)
086b2d5c +0x9d4:  call   086b2e30 <+0xaa8>
086b2d61 +0x9d9:  leave
086b2d62 +0x9da:  ret
086b2d63 +0x9db:  nop
086b2d64 +0x9dc:  push   %ebp
086b2d65 +0x9dd:  mov    %esp,%ebp
086b2d67 +0x9df:  sub    $0x18,%esp
086b2d6a +0x9e2:  mov    0x8(%ebp),%eax
086b2d6d +0x9e5:  mov    %eax,(%esp)
086b2d70 +0x9e8:  call   086b2e30 <+0xaa8>
086b2d75 +0x9ed:  cmp    0xc(%ebp),%eax
086b2d78 +0x9f0:  setb   %al
086b2d7b +0x9f3:  movzbl %al,%eax
086b2d7e +0x9f6:  test   %eax,%eax
086b2d80 +0x9f8:  setne  %al
086b2d83 +0x9fb:  test   %al,%al
086b2d85 +0x9fd:  je     086b2d8c <+0xa04>
086b2d87 +0x9ff:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
086b2d8c +0xa04:  mov    0xc(%ebp),%eax
086b2d8f +0xa07:  shl    $0x3,%eax
086b2d92 +0xa0a:  mov    %eax,(%esp)
086b2d95 +0xa0d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
086b2d9a +0xa12:  leave
086b2d9b +0xa13:  ret
086b2d9c +0xa14:  push   %ebp
086b2d9d +0xa15:  mov    %esp,%ebp
086b2d9f +0xa17:  push   %ebx
086b2da0 +0xa18:  sub    $0x14,%esp
086b2da3 +0xa1b:  mov    0x8(%ebp),%ebx
086b2da6 +0xa1e:  mov    0xc(%ebp),%eax
086b2da9 +0xa21:  mov    (%eax),%eax
086b2dab +0xa23:  mov    %eax,0x4(%esp)
086b2daf +0xa27:  mov    %ebx,(%esp)
086b2db2 +0xa2a:  call   086b2e3a <+0xab2>
086b2db7 +0xa2f:  mov    %ebx,%eax
086b2db9 +0xa31:  add    $0x14,%esp
086b2dbc +0xa34:  pop    %ebx
086b2dbd +0xa35:  pop    %ebp
086b2dbe +0xa36:  ret    $0x4
086b2dc1 +0xa39:  push   %ebp
086b2dc2 +0xa3a:  mov    %esp,%ebp
086b2dc4 +0xa3c:  sub    $0x18,%esp
086b2dc7 +0xa3f:  mov    0x10(%ebp),%eax
086b2dca +0xa42:  mov    %eax,0x8(%esp)
086b2dce +0xa46:  mov    0xc(%ebp),%eax
086b2dd1 +0xa49:  mov    %eax,0x4(%esp)
086b2dd5 +0xa4d:  mov    0x8(%ebp),%eax
086b2dd8 +0xa50:  mov    %eax,(%esp)
086b2ddb +0xa53:  call   086b2e47 <+0xabf>
086b2de0 +0xa58:  leave
086b2de1 +0xa59:  ret
086b2de2 +0xa5a:  push   %ebp
086b2de3 +0xa5b:  mov    %esp,%ebp
086b2de5 +0xa5d:  pop    %ebp
086b2de6 +0xa5e:  ret
086b2de7 +0xa5f:  push   %ebp
086b2de8 +0xa60:  mov    %esp,%ebp
086b2dea +0xa62:  sub    $0x18,%esp
086b2ded +0xa65:  mov    0x8(%ebp),%eax
086b2df0 +0xa68:  mov    %eax,(%esp)
086b2df3 +0xa6b:  call   086b23f4 <+0x6c>
086b2df8 +0xa70:  leave
086b2df9 +0xa71:  ret
086b2dfa +0xa72:  push   %ebp
086b2dfb +0xa73:  mov    %esp,%ebp
086b2dfd +0xa75:  mov    0x8(%ebp),%eax
086b2e00 +0xa78:  pop    %ebp
086b2e01 +0xa79:  ret
086b2e02 +0xa7a:  push   %ebp
086b2e03 +0xa7b:  mov    %esp,%ebp
086b2e05 +0xa7d:  sub    $0x28,%esp
086b2e08 +0xa80:  movb   $0x0,-0x9(%ebp)
086b2e0c +0xa84:  mov    0x10(%ebp),%eax
086b2e0f +0xa87:  mov    %eax,0x8(%esp)
086b2e13 +0xa8b:  mov    0xc(%ebp),%eax
086b2e16 +0xa8e:  mov    %eax,0x4(%esp)
086b2e1a +0xa92:  mov    0x8(%ebp),%eax
086b2e1d +0xa95:  mov    %eax,(%esp)
086b2e20 +0xa98:  call   086b2e68 <+0xae0>
086b2e25 +0xa9d:  leave
086b2e26 +0xa9e:  ret
086b2e27 +0xa9f:  nop
086b2e28 +0xaa0:  push   %ebp
086b2e29 +0xaa1:  mov    %esp,%ebp
086b2e2b +0xaa3:  mov    0x8(%ebp),%eax
086b2e2e +0xaa6:  pop    %ebp
086b2e2f +0xaa7:  ret
086b2e30 +0xaa8:  push   %ebp
086b2e31 +0xaa9:  mov    %esp,%ebp
086b2e33 +0xaab:  mov    $0x1fffffff,%eax
086b2e38 +0xab0:  pop    %ebp
086b2e39 +0xab1:  ret
086b2e3a +0xab2:  push   %ebp
086b2e3b +0xab3:  mov    %esp,%ebp
086b2e3d +0xab5:  mov    0x8(%ebp),%eax
086b2e40 +0xab8:  mov    0xc(%ebp),%edx
086b2e43 +0xabb:  mov    %edx,(%eax)
086b2e45 +0xabd:  pop    %ebp
086b2e46 +0xabe:  ret
086b2e47 +0xabf:  push   %ebp
086b2e48 +0xac0:  mov    %esp,%ebp
086b2e4a +0xac2:  sub    $0x18,%esp
086b2e4d +0xac5:  mov    0x10(%ebp),%eax
086b2e50 +0xac8:  mov    %eax,0x8(%esp)
086b2e54 +0xacc:  mov    0xc(%ebp),%eax
086b2e57 +0xacf:  mov    %eax,0x4(%esp)
086b2e5b +0xad3:  mov    0x8(%ebp),%eax
086b2e5e +0xad6:  mov    %eax,(%esp)
086b2e61 +0xad9:  call   086b2eb8 <+0xb30>
086b2e66 +0xade:  leave
086b2e67 +0xadf:  ret
086b2e68 +0xae0:  push   %ebp
086b2e69 +0xae1:  mov    %esp,%ebp
086b2e6b +0xae3:  sub    $0x28,%esp
086b2e6e +0xae6:  mov    0xc(%ebp),%edx
086b2e71 +0xae9:  mov    0x8(%ebp),%eax
086b2e74 +0xaec:  mov    %edx,%ecx
086b2e76 +0xaee:  sub    %eax,%ecx
086b2e78 +0xaf0:  mov    %ecx,%eax
086b2e7a +0xaf2:  sar    $0x3,%eax
086b2e7d +0xaf5:  mov    %eax,-0xc(%ebp)
086b2e80 +0xaf8:  jmp    086b2ea8 <+0xb20>
086b2e82 +0xafa:  subl   $0x8,0xc(%ebp)
086b2e86 +0xafe:  mov    0xc(%ebp),%eax
086b2e89 +0xb01:  mov    %eax,(%esp)
086b2e8c +0xb04:  call   086b2519 <+0x191>
086b2e91 +0xb09:  subl   $0x8,0x10(%ebp)
086b2e95 +0xb0d:  mov    %eax,0x4(%esp)
086b2e99 +0xb11:  mov    0x10(%ebp),%eax
086b2e9c +0xb14:  mov    %eax,(%esp)
086b2e9f +0xb17:  call   086b271a <+0x392>
086b2ea4 +0xb1c:  subl   $0x1,-0xc(%ebp)
086b2ea8 +0xb20:  cmpl   $0x0,-0xc(%ebp)
086b2eac +0xb24:  setg   %al
086b2eaf +0xb27:  test   %al,%al
086b2eb1 +0xb29:  jne    086b2e82 <+0xafa>
086b2eb3 +0xb2b:  mov    0x10(%ebp),%eax
086b2eb6 +0xb2e:  leave
086b2eb7 +0xb2f:  ret
086b2eb8 +0xb30:  push   %ebp
086b2eb9 +0xb31:  mov    %esp,%ebp
086b2ebb +0xb33:  push   %edi
086b2ebc +0xb34:  push   %esi
086b2ebd +0xb35:  push   %ebx
086b2ebe +0xb36:  sub    $0x3c,%esp
086b2ec1 +0xb39:  mov    0x10(%ebp),%eax
086b2ec4 +0xb3c:  mov    %eax,-0x1c(%ebp)
086b2ec7 +0xb3f:  jmp    086b2f28 <+0xba0>
086b2ec9 +0xb41:  lea    0x8(%ebp),%eax
086b2ecc +0xb44:  mov    %eax,(%esp)
086b2ecf +0xb47:  call   086b2fb0 <+0xc28>
086b2ed4 +0xb4c:  mov    %eax,%edi
086b2ed6 +0xb4e:  mov    -0x1c(%ebp),%esi
086b2ed9 +0xb51:  mov    %esi,0x4(%esp)
086b2edd +0xb55:  movl   $0x8,(%esp)
086b2ee4 +0xb5c:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
086b2ee9 +0xb61:  mov    %eax,%ebx
086b2eeb +0xb63:  mov    %ebx,%eax
086b2eed +0xb65:  test   %eax,%eax
086b2eef +0xb67:  je     086b2f19 <+0xb91>
086b2ef1 +0xb69:  mov    %ebx,%eax
086b2ef3 +0xb6b:  mov    %edi,0x4(%esp)
086b2ef7 +0xb6f:  mov    %eax,(%esp)
086b2efa +0xb72:  call   086b2666 <+0x2de>
086b2eff +0xb77:  jmp    086b2f19 <+0xb91>
086b2f01 +0xb79:  mov    %edx,%edi
086b2f03 +0xb7b:  mov    %eax,-0x2c(%ebp)
086b2f06 +0xb7e:  mov    %esi,0x4(%esp)
086b2f0a +0xb82:  mov    %ebx,(%esp)
086b2f0d +0xb85:  call   0807fff6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x1c>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x1c
086b2f12 +0xb8a:  mov    -0x2c(%ebp),%eax
086b2f15 +0xb8d:  mov    %edi,%edx
086b2f17 +0xb8f:  jmp    086b2f49 <+0xbc1>
086b2f19 +0xb91:  lea    0x8(%ebp),%eax
086b2f1c +0xb94:  mov    %eax,(%esp)
086b2f1f +0xb97:  call   086b2f9a <+0xc12>
086b2f24 +0xb9c:  addl   $0x8,-0x1c(%ebp)
086b2f28 +0xba0:  lea    0xc(%ebp),%eax
086b2f2b +0xba3:  mov    %eax,0x4(%esp)
086b2f2f +0xba7:  lea    0x8(%ebp),%eax
086b2f32 +0xbaa:  mov    %eax,(%esp)
086b2f35 +0xbad:  call   086b2f7d <+0xbf5>
086b2f3a +0xbb2:  test   %al,%al
086b2f3c +0xbb4:  jne    086b2ec9 <+0xb41>
086b2f3e +0xbb6:  mov    -0x1c(%ebp),%eax
086b2f41 +0xbb9:  add    $0x3c,%esp
086b2f44 +0xbbc:  pop    %ebx
086b2f45 +0xbbd:  pop    %esi
086b2f46 +0xbbe:  pop    %edi
086b2f47 +0xbbf:  pop    %ebp
086b2f48 +0xbc0:  ret
086b2f49 +0xbc1:  mov    %eax,(%esp)
086b2f4c +0xbc4:  call   08725ce0 <__cxa_begin_catch>
086b2f51 +0xbc9:  mov    -0x1c(%ebp),%eax
086b2f54 +0xbcc:  mov    %eax,0x4(%esp)
086b2f58 +0xbd0:  mov    0x10(%ebp),%eax
086b2f5b +0xbd3:  mov    %eax,(%esp)
086b2f5e +0xbd6:  call   086b2aa1 <+0x719>
086b2f63 +0xbdb:  call   08724be0 <__cxa_rethrow>
086b2f68 +0xbe0:  mov    %edx,%ebx
086b2f6a +0xbe2:  mov    %eax,%esi
086b2f6c +0xbe4:  call   08725c30 <__cxa_end_catch>
086b2f71 +0xbe9:  mov    %esi,%eax
086b2f73 +0xbeb:  mov    %ebx,%edx
086b2f75 +0xbed:  mov    %eax,(%esp)
086b2f78 +0xbf0:  call   08ae3750 <_Unwind_Resume>
086b2f7d +0xbf5:  push   %ebp
086b2f7e +0xbf6:  mov    %esp,%ebp
086b2f80 +0xbf8:  sub    $0x18,%esp
086b2f83 +0xbfb:  mov    0xc(%ebp),%eax
086b2f86 +0xbfe:  mov    %eax,0x4(%esp)
086b2f8a +0xc02:  mov    0x8(%ebp),%eax
086b2f8d +0xc05:  mov    %eax,(%esp)
086b2f90 +0xc08:  call   086b2fba <+0xc32>
086b2f95 +0xc0d:  xor    $0x1,%eax
086b2f98 +0xc10:  leave
086b2f99 +0xc11:  ret
086b2f9a +0xc12:  push   %ebp
086b2f9b +0xc13:  mov    %esp,%ebp
086b2f9d +0xc15:  mov    0x8(%ebp),%eax
086b2fa0 +0xc18:  mov    (%eax),%eax
086b2fa2 +0xc1a:  lea    0x8(%eax),%edx
086b2fa5 +0xc1d:  mov    0x8(%ebp),%eax
086b2fa8 +0xc20:  mov    %edx,(%eax)
086b2faa +0xc22:  mov    0x8(%ebp),%eax
086b2fad +0xc25:  pop    %ebp
086b2fae +0xc26:  ret
086b2faf +0xc27:  nop
086b2fb0 +0xc28:  push   %ebp
086b2fb1 +0xc29:  mov    %esp,%ebp
086b2fb3 +0xc2b:  mov    0x8(%ebp),%eax
086b2fb6 +0xc2e:  mov    (%eax),%eax
086b2fb8 +0xc30:  pop    %ebp
086b2fb9 +0xc31:  ret
086b2fba +0xc32:  push   %ebp
086b2fbb +0xc33:  mov    %esp,%ebp
086b2fbd +0xc35:  push   %ebx
086b2fbe +0xc36:  sub    $0x14,%esp
086b2fc1 +0xc39:  mov    0x8(%ebp),%eax
086b2fc4 +0xc3c:  mov    %eax,(%esp)
086b2fc7 +0xc3f:  call   086b2fe4 <+0xc5c>
086b2fcc +0xc44:  mov    %eax,%ebx
086b2fce +0xc46:  mov    0xc(%ebp),%eax
086b2fd1 +0xc49:  mov    %eax,(%esp)
086b2fd4 +0xc4c:  call   086b2fe4 <+0xc5c>
086b2fd9 +0xc51:  cmp    %eax,%ebx
086b2fdb +0xc53:  sete   %al
086b2fde +0xc56:  add    $0x14,%esp
086b2fe1 +0xc59:  pop    %ebx
086b2fe2 +0xc5a:  pop    %ebp
086b2fe3 +0xc5b:  ret
086b2fe4 +0xc5c:  push   %ebp
086b2fe5 +0xc5d:  mov    %esp,%ebp
086b2fe7 +0xc5f:  mov    0x8(%ebp),%eax
086b2fea +0xc62:  mov    (%eax),%eax
086b2fec +0xc64:  pop    %ebp
086b2fed +0xc65:  ret
086b2fee +0xc66:  nop
086b2fef +0xc67:  nop
```

## 反编译 C

```c
// <global>::global @ 0x86b2388

/* CSourceVersionMgr::CSourceVersionMgr() */

void CSourceVersionMgr::_GLOBAL__I_CSourceVersionMgr(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
