# _M_initialize_timepunct

`_ZNSt11__timepunctIwE23_M_initialize_timepunctEP15__locale_struct`

`std::__timepunct<wchar_t>::_M_initialize_timepunct(__locale_struct*)`

| 类 | 地址 |
|---|---|
| `std::__timepunct<wchar_t>` | `0x08721450` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08721450  _ZNSt11__timepunctIwE23_M_initialize_timepunctEP15__locale_struct
#           std::__timepunct<wchar_t>::_M_initialize_timepunct(__locale_struct*)
# range [0x08721450, 0x08721c8f]
08721450 +0x000:  push   %ebp
08721451 +0x001:  mov    %esp,%ebp
08721453 +0x003:  push   %ebx
08721454 +0x004:  sub    $0x14,%esp
08721457 +0x007:  mov    0x8(%ebp),%ebx
0872145a +0x00a:  mov    0x8(%ebx),%edx
0872145d +0x00d:  test   %edx,%edx
0872145f +0x00f:  je     08721ae0 <+0x690>
08721465 +0x015:  mov    0xc(%ebp),%eax
08721468 +0x018:  test   %eax,%eax
0872146a +0x01a:  je     08721950 <+0x500>
08721470 +0x020:  lea    0xc(%ebp),%eax
08721473 +0x023:  mov    %eax,(%esp)
08721476 +0x026:  call   08722b10 <_ZNSt6locale5facet17_S_clone_c_localeERP15__locale_struct>  ; std::locale::facet::_S_clone_c_locale(__locale_struct*&)
0872147b +0x02b:  mov    %eax,0xc(%ebx)
0872147e +0x02e:  mov    0xc(%ebp),%eax
08721481 +0x031:  movl   $&_ZL14gUnicodeBuffer+0x15b31,(%esp)
08721488 +0x038:  mov    %eax,0x4(%esp)
0872148c +0x03c:  call   0807de10 <_init+0x708>
08721491 +0x041:  mov    0x8(%ebx),%edx
08721494 +0x044:  mov    %eax,0x8(%edx)
08721497 +0x047:  mov    0xc(%ebp),%eax
0872149a +0x04a:  movl   $&_ZL14gUnicodeBuffer+0x15b35,(%esp)
087214a1 +0x051:  mov    %eax,0x4(%esp)
087214a5 +0x055:  call   0807de10 <_init+0x708>
087214aa +0x05a:  mov    0x8(%ebx),%edx
087214ad +0x05d:  mov    %eax,0xc(%edx)
087214b0 +0x060:  mov    0xc(%ebp),%eax
087214b3 +0x063:  movl   $&_ZL14gUnicodeBuffer+0x15b32,(%esp)
087214ba +0x06a:  mov    %eax,0x4(%esp)
087214be +0x06e:  call   0807de10 <_init+0x708>
087214c3 +0x073:  mov    0x8(%ebx),%edx
087214c6 +0x076:  mov    %eax,0x10(%edx)
087214c9 +0x079:  mov    0xc(%ebp),%eax
087214cc +0x07c:  movl   $&_ZL14gUnicodeBuffer+0x15b38,(%esp)
087214d3 +0x083:  mov    %eax,0x4(%esp)
087214d7 +0x087:  call   0807de10 <_init+0x708>
087214dc +0x08c:  mov    0x8(%ebx),%edx
087214df +0x08f:  mov    %eax,0x14(%edx)
087214e2 +0x092:  mov    0xc(%ebp),%eax
087214e5 +0x095:  movl   $&_ZL14gUnicodeBuffer+0x15b30,(%esp)
087214ec +0x09c:  mov    %eax,0x4(%esp)
087214f0 +0x0a0:  call   0807de10 <_init+0x708>
087214f5 +0x0a5:  mov    0x8(%ebx),%edx
087214f8 +0x0a8:  mov    %eax,0x18(%edx)
087214fb +0x0ab:  mov    0xc(%ebp),%eax
087214fe +0x0ae:  movl   $&_ZL14gUnicodeBuffer+0x15b37,(%esp)
08721505 +0x0b5:  mov    %eax,0x4(%esp)
08721509 +0x0b9:  call   0807de10 <_init+0x708>
0872150e +0x0be:  mov    0x8(%ebx),%edx
08721511 +0x0c1:  mov    %eax,0x1c(%edx)
08721514 +0x0c4:  mov    0xc(%ebp),%eax
08721517 +0x0c7:  movl   $&_ZL14gUnicodeBuffer+0x15b2e,(%esp)
0872151e +0x0ce:  mov    %eax,0x4(%esp)
08721522 +0x0d2:  call   0807de10 <_init+0x708>
08721527 +0x0d7:  mov    0x8(%ebx),%edx
0872152a +0x0da:  mov    %eax,0x20(%edx)
0872152d +0x0dd:  mov    0xc(%ebp),%eax
08721530 +0x0e0:  movl   $&_ZL14gUnicodeBuffer+0x15b2f,(%esp)
08721537 +0x0e7:  mov    %eax,0x4(%esp)
0872153b +0x0eb:  call   0807de10 <_init+0x708>
08721540 +0x0f0:  mov    0x8(%ebx),%edx
08721543 +0x0f3:  mov    %eax,0x24(%edx)
08721546 +0x0f6:  mov    0xc(%ebp),%eax
08721549 +0x0f9:  movl   $&_ZL14gUnicodeBuffer+0x15b33,(%esp)
08721550 +0x100:  mov    %eax,0x4(%esp)
08721554 +0x104:  call   0807de10 <_init+0x708>
08721559 +0x109:  mov    0x8(%ebx),%edx
0872155c +0x10c:  mov    %eax,0x28(%edx)
0872155f +0x10f:  mov    0xc(%ebp),%eax
08721562 +0x112:  movl   $&_ZL14gUnicodeBuffer+0x15b0f,(%esp)
08721569 +0x119:  mov    %eax,0x4(%esp)
0872156d +0x11d:  call   0807de10 <_init+0x708>
08721572 +0x122:  mov    0x8(%ebx),%edx
08721575 +0x125:  mov    %eax,0x2c(%edx)
08721578 +0x128:  mov    0xc(%ebp),%eax
0872157b +0x12b:  movl   $&_ZL14gUnicodeBuffer+0x15b10,(%esp)
08721582 +0x132:  mov    %eax,0x4(%esp)
08721586 +0x136:  call   0807de10 <_init+0x708>
0872158b +0x13b:  mov    0x8(%ebx),%edx
0872158e +0x13e:  mov    %eax,0x30(%edx)
08721591 +0x141:  mov    0xc(%ebp),%eax
08721594 +0x144:  movl   $&_ZL14gUnicodeBuffer+0x15b11,(%esp)
0872159b +0x14b:  mov    %eax,0x4(%esp)
0872159f +0x14f:  call   0807de10 <_init+0x708>
087215a4 +0x154:  mov    0x8(%ebx),%edx
087215a7 +0x157:  mov    %eax,0x34(%edx)
087215aa +0x15a:  mov    0xc(%ebp),%eax
087215ad +0x15d:  movl   $&_ZL14gUnicodeBuffer+0x15b12,(%esp)
087215b4 +0x164:  mov    %eax,0x4(%esp)
087215b8 +0x168:  call   0807de10 <_init+0x708>
087215bd +0x16d:  mov    0x8(%ebx),%edx
087215c0 +0x170:  mov    %eax,0x38(%edx)
087215c3 +0x173:  mov    0xc(%ebp),%eax
087215c6 +0x176:  movl   $&_ZL14gUnicodeBuffer+0x15b13,(%esp)
087215cd +0x17d:  mov    %eax,0x4(%esp)
087215d1 +0x181:  call   0807de10 <_init+0x708>
087215d6 +0x186:  mov    0x8(%ebx),%edx
087215d9 +0x189:  mov    %eax,0x3c(%edx)
087215dc +0x18c:  mov    0xc(%ebp),%eax
087215df +0x18f:  movl   $&_ZL14gUnicodeBuffer+0x15b14,(%esp)
087215e6 +0x196:  mov    %eax,0x4(%esp)
087215ea +0x19a:  call   0807de10 <_init+0x708>
087215ef +0x19f:  mov    0x8(%ebx),%edx
087215f2 +0x1a2:  mov    %eax,0x40(%edx)
087215f5 +0x1a5:  mov    0xc(%ebp),%eax
087215f8 +0x1a8:  movl   $&_ZL14gUnicodeBuffer+0x15b15,(%esp)
087215ff +0x1af:  mov    %eax,0x4(%esp)
08721603 +0x1b3:  call   0807de10 <_init+0x708>
08721608 +0x1b8:  mov    0x8(%ebx),%edx
0872160b +0x1bb:  mov    %eax,0x44(%edx)
0872160e +0x1be:  mov    0xc(%ebp),%eax
08721611 +0x1c1:  movl   $&_ZL14gUnicodeBuffer+0x15b08,(%esp)
08721618 +0x1c8:  mov    %eax,0x4(%esp)
0872161c +0x1cc:  call   0807de10 <_init+0x708>
08721621 +0x1d1:  mov    0x8(%ebx),%edx
08721624 +0x1d4:  mov    %eax,0x48(%edx)
08721627 +0x1d7:  mov    0xc(%ebp),%eax
0872162a +0x1da:  movl   $&_ZL14gUnicodeBuffer+0x15b09,(%esp)
08721631 +0x1e1:  mov    %eax,0x4(%esp)
08721635 +0x1e5:  call   0807de10 <_init+0x708>
0872163a +0x1ea:  mov    0x8(%ebx),%edx
0872163d +0x1ed:  mov    %eax,0x4c(%edx)
08721640 +0x1f0:  mov    0xc(%ebp),%eax
08721643 +0x1f3:  movl   $&_ZL14gUnicodeBuffer+0x15b0a,(%esp)
0872164a +0x1fa:  mov    %eax,0x4(%esp)
0872164e +0x1fe:  call   0807de10 <_init+0x708>
08721653 +0x203:  mov    0x8(%ebx),%edx
08721656 +0x206:  mov    %eax,0x50(%edx)
08721659 +0x209:  mov    0xc(%ebp),%eax
0872165c +0x20c:  movl   $&_ZL14gUnicodeBuffer+0x15b0b,(%esp)
08721663 +0x213:  mov    %eax,0x4(%esp)
08721667 +0x217:  call   0807de10 <_init+0x708>
0872166c +0x21c:  mov    0x8(%ebx),%edx
0872166f +0x21f:  mov    %eax,0x54(%edx)
08721672 +0x222:  mov    0xc(%ebp),%eax
08721675 +0x225:  movl   $&_ZL14gUnicodeBuffer+0x15b0c,(%esp)
0872167c +0x22c:  mov    %eax,0x4(%esp)
08721680 +0x230:  call   0807de10 <_init+0x708>
08721685 +0x235:  mov    0x8(%ebx),%edx
08721688 +0x238:  mov    %eax,0x58(%edx)
0872168b +0x23b:  mov    0xc(%ebp),%eax
0872168e +0x23e:  movl   $&_ZL14gUnicodeBuffer+0x15b0d,(%esp)
08721695 +0x245:  mov    %eax,0x4(%esp)
08721699 +0x249:  call   0807de10 <_init+0x708>
0872169e +0x24e:  mov    0x8(%ebx),%edx
087216a1 +0x251:  mov    %eax,0x5c(%edx)
087216a4 +0x254:  mov    0xc(%ebp),%eax
087216a7 +0x257:  movl   $&_ZL14gUnicodeBuffer+0x15b0e,(%esp)
087216ae +0x25e:  mov    %eax,0x4(%esp)
087216b2 +0x262:  call   0807de10 <_init+0x708>
087216b7 +0x267:  mov    0x8(%ebx),%edx
087216ba +0x26a:  mov    %eax,0x60(%edx)
087216bd +0x26d:  mov    0xc(%ebp),%eax
087216c0 +0x270:  movl   $&_ZL14gUnicodeBuffer+0x15b22,(%esp)
087216c7 +0x277:  mov    %eax,0x4(%esp)
087216cb +0x27b:  call   0807de10 <_init+0x708>
087216d0 +0x280:  mov    0x8(%ebx),%edx
087216d3 +0x283:  mov    %eax,0x64(%edx)
087216d6 +0x286:  mov    0xc(%ebp),%eax
087216d9 +0x289:  movl   $&_ZL14gUnicodeBuffer+0x15b23,(%esp)
087216e0 +0x290:  mov    %eax,0x4(%esp)
087216e4 +0x294:  call   0807de10 <_init+0x708>
087216e9 +0x299:  mov    0x8(%ebx),%edx
087216ec +0x29c:  mov    %eax,0x68(%edx)
087216ef +0x29f:  mov    0xc(%ebp),%eax
087216f2 +0x2a2:  movl   $&_ZL14gUnicodeBuffer+0x15b24,(%esp)
087216f9 +0x2a9:  mov    %eax,0x4(%esp)
087216fd +0x2ad:  call   0807de10 <_init+0x708>
08721702 +0x2b2:  mov    0x8(%ebx),%edx
08721705 +0x2b5:  mov    %eax,0x6c(%edx)
08721708 +0x2b8:  mov    0xc(%ebp),%eax
0872170b +0x2bb:  movl   $&_ZL14gUnicodeBuffer+0x15b25,(%esp)
08721712 +0x2c2:  mov    %eax,0x4(%esp)
08721716 +0x2c6:  call   0807de10 <_init+0x708>
0872171b +0x2cb:  mov    0x8(%ebx),%edx
0872171e +0x2ce:  mov    %eax,0x70(%edx)
08721721 +0x2d1:  mov    0xc(%ebp),%eax
08721724 +0x2d4:  movl   $&_ZL14gUnicodeBuffer+0x15b26,(%esp)
0872172b +0x2db:  mov    %eax,0x4(%esp)
0872172f +0x2df:  call   0807de10 <_init+0x708>
08721734 +0x2e4:  mov    0x8(%ebx),%edx
08721737 +0x2e7:  mov    %eax,0x74(%edx)
0872173a +0x2ea:  mov    0xc(%ebp),%eax
0872173d +0x2ed:  movl   $&_ZL14gUnicodeBuffer+0x15b27,(%esp)
08721744 +0x2f4:  mov    %eax,0x4(%esp)
08721748 +0x2f8:  call   0807de10 <_init+0x708>
0872174d +0x2fd:  mov    0x8(%ebx),%edx
08721750 +0x300:  mov    %eax,0x78(%edx)
08721753 +0x303:  mov    0xc(%ebp),%eax
08721756 +0x306:  movl   $&_ZL14gUnicodeBuffer+0x15b28,(%esp)
0872175d +0x30d:  mov    %eax,0x4(%esp)
08721761 +0x311:  call   0807de10 <_init+0x708>
08721766 +0x316:  mov    0x8(%ebx),%edx
08721769 +0x319:  mov    %eax,0x7c(%edx)
0872176c +0x31c:  mov    0xc(%ebp),%eax
0872176f +0x31f:  movl   $&_ZL14gUnicodeBuffer+0x15b29,(%esp)
08721776 +0x326:  mov    %eax,0x4(%esp)
0872177a +0x32a:  call   0807de10 <_init+0x708>
0872177f +0x32f:  mov    0x8(%ebx),%edx
08721782 +0x332:  mov    %eax,0x80(%edx)
08721788 +0x338:  mov    0xc(%ebp),%eax
0872178b +0x33b:  movl   $&_ZL14gUnicodeBuffer+0x15b2a,(%esp)
08721792 +0x342:  mov    %eax,0x4(%esp)
08721796 +0x346:  call   0807de10 <_init+0x708>
0872179b +0x34b:  mov    0x8(%ebx),%edx
0872179e +0x34e:  mov    %eax,0x84(%edx)
087217a4 +0x354:  mov    0xc(%ebp),%eax
087217a7 +0x357:  movl   $&_ZL14gUnicodeBuffer+0x15b2b,(%esp)
087217ae +0x35e:  mov    %eax,0x4(%esp)
087217b2 +0x362:  call   0807de10 <_init+0x708>
087217b7 +0x367:  mov    0x8(%ebx),%edx
087217ba +0x36a:  mov    %eax,0x88(%edx)
087217c0 +0x370:  mov    0xc(%ebp),%eax
087217c3 +0x373:  movl   $&_ZL14gUnicodeBuffer+0x15b2c,(%esp)
087217ca +0x37a:  mov    %eax,0x4(%esp)
087217ce +0x37e:  call   0807de10 <_init+0x708>
087217d3 +0x383:  mov    0x8(%ebx),%edx
087217d6 +0x386:  mov    %eax,0x8c(%edx)
087217dc +0x38c:  mov    0xc(%ebp),%eax
087217df +0x38f:  movl   $&_ZL14gUnicodeBuffer+0x15b2d,(%esp)
087217e6 +0x396:  mov    %eax,0x4(%esp)
087217ea +0x39a:  call   0807de10 <_init+0x708>
087217ef +0x39f:  mov    0x8(%ebx),%edx
087217f2 +0x3a2:  mov    %eax,0x90(%edx)
087217f8 +0x3a8:  mov    0xc(%ebp),%eax
087217fb +0x3ab:  movl   $&_ZL14gUnicodeBuffer+0x15b16,(%esp)
08721802 +0x3b2:  mov    %eax,0x4(%esp)
08721806 +0x3b6:  call   0807de10 <_init+0x708>
0872180b +0x3bb:  mov    0x8(%ebx),%edx
0872180e +0x3be:  mov    %eax,0x94(%edx)
08721814 +0x3c4:  mov    0xc(%ebp),%eax
08721817 +0x3c7:  movl   $&_ZL14gUnicodeBuffer+0x15b17,(%esp)
0872181e +0x3ce:  mov    %eax,0x4(%esp)
08721822 +0x3d2:  call   0807de10 <_init+0x708>
08721827 +0x3d7:  mov    0x8(%ebx),%edx
0872182a +0x3da:  mov    %eax,0x98(%edx)
08721830 +0x3e0:  mov    0xc(%ebp),%eax
08721833 +0x3e3:  movl   $&_ZL14gUnicodeBuffer+0x15b18,(%esp)
0872183a +0x3ea:  mov    %eax,0x4(%esp)
0872183e +0x3ee:  call   0807de10 <_init+0x708>
08721843 +0x3f3:  mov    0x8(%ebx),%edx
08721846 +0x3f6:  mov    %eax,0x9c(%edx)
0872184c +0x3fc:  mov    0xc(%ebp),%eax
0872184f +0x3ff:  movl   $&_ZL14gUnicodeBuffer+0x15b19,(%esp)
08721856 +0x406:  mov    %eax,0x4(%esp)
0872185a +0x40a:  call   0807de10 <_init+0x708>
0872185f +0x40f:  mov    0x8(%ebx),%edx
08721862 +0x412:  mov    %eax,0xa0(%edx)
08721868 +0x418:  mov    0xc(%ebp),%eax
0872186b +0x41b:  movl   $&_ZL14gUnicodeBuffer+0x15b1a,(%esp)
08721872 +0x422:  mov    %eax,0x4(%esp)
08721876 +0x426:  call   0807de10 <_init+0x708>
0872187b +0x42b:  mov    0x8(%ebx),%edx
0872187e +0x42e:  mov    %eax,0xa4(%edx)
08721884 +0x434:  mov    0xc(%ebp),%eax
08721887 +0x437:  movl   $&_ZL14gUnicodeBuffer+0x15b1b,(%esp)
0872188e +0x43e:  mov    %eax,0x4(%esp)
08721892 +0x442:  call   0807de10 <_init+0x708>
08721897 +0x447:  mov    0x8(%ebx),%edx
0872189a +0x44a:  mov    %eax,0xa8(%edx)
087218a0 +0x450:  mov    0xc(%ebp),%eax
087218a3 +0x453:  movl   $&_ZL14gUnicodeBuffer+0x15b1c,(%esp)
087218aa +0x45a:  mov    %eax,0x4(%esp)
087218ae +0x45e:  call   0807de10 <_init+0x708>
087218b3 +0x463:  mov    0x8(%ebx),%edx
087218b6 +0x466:  mov    %eax,0xac(%edx)
087218bc +0x46c:  mov    0xc(%ebp),%eax
087218bf +0x46f:  movl   $&_ZL14gUnicodeBuffer+0x15b1d,(%esp)
087218c6 +0x476:  mov    %eax,0x4(%esp)
087218ca +0x47a:  call   0807de10 <_init+0x708>
087218cf +0x47f:  mov    0x8(%ebx),%edx
087218d2 +0x482:  mov    %eax,0xb0(%edx)
087218d8 +0x488:  mov    0xc(%ebp),%eax
087218db +0x48b:  movl   $&_ZL14gUnicodeBuffer+0x15b1e,(%esp)
087218e2 +0x492:  mov    %eax,0x4(%esp)
087218e6 +0x496:  call   0807de10 <_init+0x708>
087218eb +0x49b:  mov    0x8(%ebx),%edx
087218ee +0x49e:  mov    %eax,0xb4(%edx)
087218f4 +0x4a4:  mov    0xc(%ebp),%eax
087218f7 +0x4a7:  movl   $&_ZL14gUnicodeBuffer+0x15b1f,(%esp)
087218fe +0x4ae:  mov    %eax,0x4(%esp)
08721902 +0x4b2:  call   0807de10 <_init+0x708>
08721907 +0x4b7:  mov    0x8(%ebx),%edx
0872190a +0x4ba:  mov    %eax,0xb8(%edx)
08721910 +0x4c0:  mov    0xc(%ebp),%eax
08721913 +0x4c3:  movl   $&_ZL14gUnicodeBuffer+0x15b20,(%esp)
0872191a +0x4ca:  mov    %eax,0x4(%esp)
0872191e +0x4ce:  call   0807de10 <_init+0x708>
08721923 +0x4d3:  mov    0x8(%ebx),%edx
08721926 +0x4d6:  mov    %eax,0xbc(%edx)
0872192c +0x4dc:  mov    0xc(%ebp),%eax
0872192f +0x4df:  movl   $&_ZL14gUnicodeBuffer+0x15b21,(%esp)
08721936 +0x4e6:  mov    %eax,0x4(%esp)
0872193a +0x4ea:  call   0807de10 <_init+0x708>
0872193f +0x4ef:  mov    0x8(%ebx),%edx
08721942 +0x4f2:  mov    %eax,0xc0(%edx)
08721948 +0x4f8:  add    $0x14,%esp
0872194b +0x4fb:  pop    %ebx
0872194c +0x4fc:  pop    %ebp
0872194d +0x4fd:  ret
0872194e +0x4fe:  xchg   %ax,%ax
08721950 +0x500:  call   086daf40 <_ZNSt6locale5facet15_S_get_c_localeEv>  ; std::locale::facet::_S_get_c_locale()
08721955 +0x505:  mov    %eax,0xc(%ebx)
08721958 +0x508:  mov    0x8(%ebx),%eax
0872195b +0x50b:  movl   $"%",0x8(%eax)
08721962 +0x512:  movl   $"%",0xc(%eax)
08721969 +0x519:  movl   $"%",0x10(%eax)
08721970 +0x520:  movl   $"%",0x14(%eax)
08721977 +0x527:  movl   $"",0x18(%eax)
0872197e +0x52e:  movl   $"",0x1c(%eax)
08721985 +0x535:  movl   $"A",0x20(%eax)
0872198c +0x53c:  movl   $"P",0x24(%eax)
08721993 +0x543:  movl   $"",0x28(%eax)
0872199a +0x54a:  movl   $"S",0x2c(%eax)
087219a1 +0x551:  movl   $"M",0x30(%eax)
087219a8 +0x558:  movl   $"T",0x34(%eax)
087219af +0x55f:  movl   $"W",0x38(%eax)
087219b6 +0x566:  movl   $"T",0x3c(%eax)
087219bd +0x56d:  movl   $"F",0x40(%eax)
087219c4 +0x574:  movl   $"S",0x44(%eax)
087219cb +0x57b:  movl   $"S",0x48(%eax)
087219d2 +0x582:  movl   $"M",0x4c(%eax)
087219d9 +0x589:  movl   $"T",0x50(%eax)
087219e0 +0x590:  movl   $"W",0x54(%eax)
087219e7 +0x597:  movl   $"T",0x58(%eax)
087219ee +0x59e:  movl   $"F",0x5c(%eax)
087219f5 +0x5a5:  movl   $"S",0x60(%eax)
087219fc +0x5ac:  movl   $"J",0x64(%eax)
08721a03 +0x5b3:  movl   $"F",0x68(%eax)
08721a0a +0x5ba:  movl   $"M",0x6c(%eax)
08721a11 +0x5c1:  movl   $"A",0x70(%eax)
08721a18 +0x5c8:  movl   $"M",0x74(%eax)
08721a1f +0x5cf:  movl   $"J",0x78(%eax)
08721a26 +0x5d6:  movl   $"J",0x7c(%eax)
08721a2d +0x5dd:  movl   $"A",0x80(%eax)
08721a37 +0x5e7:  movl   $"S",0x84(%eax)
08721a41 +0x5f1:  movl   $"O",0x88(%eax)
08721a4b +0x5fb:  movl   $"N",0x8c(%eax)
08721a55 +0x605:  movl   $"D",0x90(%eax)
08721a5f +0x60f:  movl   $"J",0x94(%eax)
08721a69 +0x619:  movl   $"F",0x98(%eax)
08721a73 +0x623:  movl   $"M",0x9c(%eax)
08721a7d +0x62d:  movl   $"A",0xa0(%eax)
08721a87 +0x637:  movl   $"M",0xa4(%eax)
08721a91 +0x641:  movl   $"J",0xa8(%eax)
08721a9b +0x64b:  movl   $"J",0xac(%eax)
08721aa5 +0x655:  movl   $"A",0xb0(%eax)
08721aaf +0x65f:  movl   $"S",0xb4(%eax)
08721ab9 +0x669:  movl   $"O",0xb8(%eax)
08721ac3 +0x673:  movl   $"N",0xbc(%eax)
08721acd +0x67d:  movl   $"D",0xc0(%eax)
08721ad7 +0x687:  add    $0x14,%esp
08721ada +0x68a:  pop    %ebx
08721adb +0x68b:  pop    %ebp
08721adc +0x68c:  ret
08721add +0x68d:  lea    0x0(%esi),%esi
08721ae0 +0x690:  movl   $0xc8,(%esp)
08721ae7 +0x697:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08721aec +0x69c:  movl   $0x0,0x4(%eax)
08721af3 +0x6a3:  movl   $&_ZTVSt17__timepunct_cacheIwE+0x8,(%eax)
08721af9 +0x6a9:  movl   $0x0,0x8(%eax)
08721b00 +0x6b0:  movl   $0x0,0xc(%eax)
08721b07 +0x6b7:  movl   $0x0,0x10(%eax)
08721b0e +0x6be:  movl   $0x0,0x14(%eax)
08721b15 +0x6c5:  movl   $0x0,0x18(%eax)
08721b1c +0x6cc:  movl   $0x0,0x1c(%eax)
08721b23 +0x6d3:  movl   $0x0,0x20(%eax)
08721b2a +0x6da:  movl   $0x0,0x24(%eax)
08721b31 +0x6e1:  movl   $0x0,0x28(%eax)
08721b38 +0x6e8:  movl   $0x0,0x2c(%eax)
08721b3f +0x6ef:  movl   $0x0,0x30(%eax)
08721b46 +0x6f6:  movl   $0x0,0x34(%eax)
08721b4d +0x6fd:  movl   $0x0,0x38(%eax)
08721b54 +0x704:  movl   $0x0,0x3c(%eax)
08721b5b +0x70b:  movl   $0x0,0x40(%eax)
08721b62 +0x712:  movl   $0x0,0x44(%eax)
08721b69 +0x719:  movl   $0x0,0x48(%eax)
08721b70 +0x720:  movl   $0x0,0x4c(%eax)
08721b77 +0x727:  movl   $0x0,0x50(%eax)
08721b7e +0x72e:  movl   $0x0,0x54(%eax)
08721b85 +0x735:  movl   $0x0,0x58(%eax)
08721b8c +0x73c:  movl   $0x0,0x5c(%eax)
08721b93 +0x743:  movl   $0x0,0x60(%eax)
08721b9a +0x74a:  movl   $0x0,0x64(%eax)
08721ba1 +0x751:  movl   $0x0,0x68(%eax)
08721ba8 +0x758:  movl   $0x0,0x6c(%eax)
08721baf +0x75f:  movl   $0x0,0x70(%eax)
08721bb6 +0x766:  movl   $0x0,0x74(%eax)
08721bbd +0x76d:  movl   $0x0,0x78(%eax)
08721bc4 +0x774:  movl   $0x0,0x7c(%eax)
08721bcb +0x77b:  movl   $0x0,0x80(%eax)
08721bd5 +0x785:  movl   $0x0,0x84(%eax)
08721bdf +0x78f:  movl   $0x0,0x88(%eax)
08721be9 +0x799:  movl   $0x0,0x8c(%eax)
08721bf3 +0x7a3:  movl   $0x0,0x90(%eax)
08721bfd +0x7ad:  movl   $0x0,0x94(%eax)
08721c07 +0x7b7:  movl   $0x0,0x98(%eax)
08721c11 +0x7c1:  movl   $0x0,0x9c(%eax)
08721c1b +0x7cb:  movl   $0x0,0xa0(%eax)
08721c25 +0x7d5:  movl   $0x0,0xa4(%eax)
08721c2f +0x7df:  movl   $0x0,0xa8(%eax)
08721c39 +0x7e9:  movl   $0x0,0xac(%eax)
08721c43 +0x7f3:  movl   $0x0,0xb0(%eax)
08721c4d +0x7fd:  movl   $0x0,0xb4(%eax)
08721c57 +0x807:  movl   $0x0,0xb8(%eax)
08721c61 +0x811:  movl   $0x0,0xbc(%eax)
08721c6b +0x81b:  movl   $0x0,0xc0(%eax)
08721c75 +0x825:  movb   $0x0,0xc4(%eax)
08721c7c +0x82c:  mov    %eax,0x8(%ebx)
08721c7f +0x82f:  jmp    08721465 <+0x15>
08721c84 +0x834:  nop
08721c85 +0x835:  nop
08721c86 +0x836:  nop
08721c87 +0x837:  nop
08721c88 +0x838:  nop
08721c89 +0x839:  nop
08721c8a +0x83a:  nop
08721c8b +0x83b:  nop
08721c8c +0x83c:  nop
08721c8d +0x83d:  nop
08721c8e +0x83e:  nop
08721c8f +0x83f:  nop
```

## 反编译 C

```c
// std::__timepunct<wchar_t>::_M_initialize_timepunct @ 0x8721450

/* std::__timepunct<wchar_t>::_M_initialize_timepunct(__locale_struct*) */

void __thiscall
std::__timepunct<wchar_t>::_M_initialize_timepunct
          (__timepunct<wchar_t> *this,__locale_struct *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if (*(int *)(this + 8) == 0) {
    puVar3 = operator_new(200);
    puVar3[1] = 0;
    *puVar3 = &PTR____timepunct_cache_08d00970;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
    puVar3[0x12] = 0;
    puVar3[0x13] = 0;
    puVar3[0x14] = 0;
    puVar3[0x15] = 0;
    puVar3[0x16] = 0;
    puVar3[0x17] = 0;
    puVar3[0x18] = 0;
    puVar3[0x19] = 0;
    puVar3[0x1a] = 0;
    puVar3[0x1b] = 0;
    puVar3[0x1c] = 0;
    puVar3[0x1d] = 0;
    puVar3[0x1e] = 0;
    puVar3[0x1f] = 0;
    puVar3[0x20] = 0;
    puVar3[0x21] = 0;
    puVar3[0x22] = 0;
    puVar3[0x23] = 0;
    puVar3[0x24] = 0;
    puVar3[0x25] = 0;
    puVar3[0x26] = 0;
    puVar3[0x27] = 0;
    puVar3[0x28] = 0;
    puVar3[0x29] = 0;
    puVar3[0x2a] = 0;
    puVar3[0x2b] = 0;
    puVar3[0x2c] = 0;
    puVar3[0x2d] = 0;
    puVar3[0x2e] = 0;
    puVar3[0x2f] = 0;
    puVar3[0x30] = 0;
    *(undefined1 *)(puVar3 + 0x31) = 0;
    *(undefined4 **)(this + 8) = puVar3;
  }
  if (param_1 != (__locale_struct *)0x0) {
    uVar2 = locale::facet::_S_clone_c_locale(&param_1);
    *(undefined4 *)(this + 0xc) = uVar2;
    uVar2 = __nl_langinfo_l(0x2005d,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 8) = uVar2;
    uVar2 = __nl_langinfo_l(0x20061,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0xc) = uVar2;
    uVar2 = __nl_langinfo_l(0x2005e,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x10) = uVar2;
    uVar2 = __nl_langinfo_l(0x20064,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x14) = uVar2;
    uVar2 = __nl_langinfo_l(0x2005c,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x18) = uVar2;
    uVar2 = __nl_langinfo_l(0x20063,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x1c) = uVar2;
    uVar2 = __nl_langinfo_l(0x2005a,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x20) = uVar2;
    uVar2 = __nl_langinfo_l(0x2005b,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x24) = uVar2;
    uVar2 = __nl_langinfo_l(0x2005f,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x28) = uVar2;
    uVar2 = __nl_langinfo_l(0x2003b,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x2c) = uVar2;
    uVar2 = __nl_langinfo_l(0x2003c,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x30) = uVar2;
    uVar2 = __nl_langinfo_l(0x2003d,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x34) = uVar2;
    uVar2 = __nl_langinfo_l(0x2003e,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x38) = uVar2;
    uVar2 = __nl_langinfo_l(0x2003f,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x3c) = uVar2;
    uVar2 = __nl_langinfo_l(0x20040,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x40) = uVar2;
    uVar2 = __nl_langinfo_l(0x20041,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x44) = uVar2;
    uVar2 = __nl_langinfo_l(0x20034,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x48) = uVar2;
    uVar2 = __nl_langinfo_l(0x20035,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x4c) = uVar2;
    uVar2 = __nl_langinfo_l(0x20036,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x50) = uVar2;
    uVar2 = __nl_langinfo_l(0x20037,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x54) = uVar2;
    uVar2 = __nl_langinfo_l(0x20038,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x58) = uVar2;
    uVar2 = __nl_langinfo_l(0x20039,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x5c) = uVar2;
    uVar2 = __nl_langinfo_l(0x2003a,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x60) = uVar2;
    uVar2 = __nl_langinfo_l(0x2004e,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 100) = uVar2;
    uVar2 = __nl_langinfo_l(0x2004f,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x68) = uVar2;
    uVar2 = __nl_langinfo_l(0x20050,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x6c) = uVar2;
    uVar2 = __nl_langinfo_l(0x20051,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x70) = uVar2;
    uVar2 = __nl_langinfo_l(0x20052,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x74) = uVar2;
    uVar2 = __nl_langinfo_l(0x20053,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x78) = uVar2;
    uVar2 = __nl_langinfo_l(0x20054,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x7c) = uVar2;
    uVar2 = __nl_langinfo_l(0x20055,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x80) = uVar2;
    uVar2 = __nl_langinfo_l(0x20056,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x84) = uVar2;
    uVar2 = __nl_langinfo_l(0x20057,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x88) = uVar2;
    uVar2 = __nl_langinfo_l(0x20058,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x8c) = uVar2;
    uVar2 = __nl_langinfo_l(0x20059,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x90) = uVar2;
    uVar2 = __nl_langinfo_l(0x20042,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x94) = uVar2;
    uVar2 = __nl_langinfo_l(0x20043,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x98) = uVar2;
    uVar2 = __nl_langinfo_l(0x20044,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x9c) = uVar2;
    uVar2 = __nl_langinfo_l(0x20045,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0xa0) = uVar2;
    uVar2 = __nl_langinfo_l(0x20046,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0xa4) = uVar2;
    uVar2 = __nl_langinfo_l(0x20047,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0xa8) = uVar2;
    uVar2 = __nl_langinfo_l(0x20048,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0xac) = uVar2;
    uVar2 = __nl_langinfo_l(0x20049,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0xb0) = uVar2;
    uVar2 = __nl_langinfo_l(0x2004a,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0xb4) = uVar2;
    uVar2 = __nl_langinfo_l(0x2004b,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0xb8) = uVar2;
    uVar2 = __nl_langinfo_l(0x2004c,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0xbc) = uVar2;
    uVar2 = __nl_langinfo_l(0x2004d,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0xc0) = uVar2;
    return;
  }
  uVar2 = locale::facet::_S_get_c_locale();
  *(undefined4 *)(this + 0xc) = uVar2;
  iVar1 = *(int *)(this + 8);
  *(undefined **)(iVar1 + 8) = &DAT_08d011c4;
  *(undefined **)(iVar1 + 0xc) = &DAT_08d011c4;
  *(undefined **)(iVar1 + 0x10) = &DAT_08d011e8;
  *(undefined **)(iVar1 + 0x14) = &DAT_08d011e8;
  *(undefined **)(iVar1 + 0x18) = &DAT_08d01188;
  *(undefined **)(iVar1 + 0x1c) = &DAT_08d01188;
  *(undefined **)(iVar1 + 0x20) = &DAT_08de0614;
  *(undefined **)(iVar1 + 0x24) = &DAT_08d0120c;
  *(undefined **)(iVar1 + 0x28) = &DAT_08d01188;
  *(wchar_t **)(iVar1 + 0x2c) = L"Sunday";
  *(wchar_t **)(iVar1 + 0x30) = L"Monday";
  *(wchar_t **)(iVar1 + 0x34) = L"Tuesday";
  *(wchar_t **)(iVar1 + 0x38) = L"Wednesday";
  *(wchar_t **)(iVar1 + 0x3c) = L"Thursday";
  *(wchar_t **)(iVar1 + 0x40) = L"Friday";
  *(wchar_t **)(iVar1 + 0x44) = L"Saturday";
  *(undefined **)(iVar1 + 0x48) = &DAT_08d012fc;
  *(undefined **)(iVar1 + 0x4c) = &DAT_08d0130c;
  *(undefined **)(iVar1 + 0x50) = &DAT_08d0131c;
  *(undefined **)(iVar1 + 0x54) = &DAT_08d0132c;
  *(undefined **)(iVar1 + 0x58) = &DAT_08d0133c;
  *(undefined **)(iVar1 + 0x5c) = &DAT_08d0134c;
  *(undefined **)(iVar1 + 0x60) = &DAT_08d0135c;
  *(wchar_t **)(iVar1 + 100) = L"January";
  *(wchar_t **)(iVar1 + 0x68) = L"February";
  *(wchar_t **)(iVar1 + 0x6c) = L"March";
  *(wchar_t **)(iVar1 + 0x70) = L"April";
  *(undefined **)(iVar1 + 0x74) = &DAT_08d013e0;
  *(undefined **)(iVar1 + 0x78) = &DAT_08d013f0;
  *(undefined **)(iVar1 + 0x7c) = &DAT_08d01404;
  *(wchar_t **)(iVar1 + 0x80) = L"August";
  *(wchar_t **)(iVar1 + 0x84) = L"September";
  *(wchar_t **)(iVar1 + 0x88) = L"October";
  *(wchar_t **)(iVar1 + 0x8c) = L"November";
  *(wchar_t **)(iVar1 + 0x90) = L"December";
  *(undefined **)(iVar1 + 0x94) = &DAT_08d014c4;
  *(undefined **)(iVar1 + 0x98) = &DAT_08d014d4;
  *(undefined **)(iVar1 + 0x9c) = &DAT_08d014e4;
  *(undefined **)(iVar1 + 0xa0) = &DAT_08d014f4;
  *(undefined **)(iVar1 + 0xa4) = &DAT_08d013e0;
  *(undefined **)(iVar1 + 0xa8) = &DAT_08d01504;
  *(undefined **)(iVar1 + 0xac) = &DAT_08d01514;
  *(undefined **)(iVar1 + 0xb0) = &DAT_08d01524;
  *(undefined **)(iVar1 + 0xb4) = &DAT_08d01534;
  *(undefined **)(iVar1 + 0xb8) = &DAT_08d01544;
  *(undefined **)(iVar1 + 0xbc) = &DAT_08d01554;
  *(undefined **)(iVar1 + 0xc0) = &DAT_08d01564;
  return;
}
```
