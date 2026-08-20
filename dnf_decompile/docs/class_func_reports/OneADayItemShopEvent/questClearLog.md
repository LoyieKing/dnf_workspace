# questClearLog

`_ZN20OneADayItemShopEvent13questClearLogER11DeliveryMsg`

`OneADayItemShopEvent::questClearLog(DeliveryMsg&)`

| 类 | 地址 |
|---|---|
| `OneADayItemShopEvent` | `0x081ba21e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ba21e  _ZN20OneADayItemShopEvent13questClearLogER11DeliveryMsg
#           OneADayItemShopEvent::questClearLog(DeliveryMsg&)
# range [0x081ba21e, 0x081ba5e7]
081ba21e +0x000:  push   %ebp
081ba21f +0x001:  mov    %esp,%ebp
081ba221 +0x003:  push   %esi
081ba222 +0x004:  push   %ebx
081ba223 +0x005:  sub    $0xd0,%esp
081ba229 +0x00b:  mov    0xc(%ebp),%eax
081ba22c +0x00e:  mov    %eax,-0x1c(%ebp)
081ba22f +0x011:  mov    -0x1c(%ebp),%eax
081ba232 +0x014:  mov    0x10(%eax),%eax
081ba235 +0x017:  mov    %eax,0x4(%esp)
081ba239 +0x01b:  mov    0x8(%ebp),%eax
081ba23c +0x01e:  mov    %eax,(%esp)
081ba23f +0x021:  call   081ba1e2 <_ZN20OneADayItemShopEvent9isQuestIdEi>  ; OneADayItemShopEvent::isQuestId(int)
081ba244 +0x026:  xor    $0x1,%eax
081ba247 +0x029:  test   %al,%al
081ba249 +0x02b:  jne    081ba5dc <+0x3be>
081ba24f +0x031:  lea    -0xbc(%ebp),%eax
081ba255 +0x037:  mov    %eax,(%esp)
081ba258 +0x03a:  call   081ba886 <_GLOBAL__I_correctQuestIds+0x44>  ; global constructors keyed to correctQuestIds+0x44
081ba25d +0x03f:  mov    -0x1c(%ebp),%eax
081ba260 +0x042:  mov    0x4(%eax),%eax
081ba263 +0x045:  mov    %eax,-0xb8(%ebp)
081ba269 +0x04b:  mov    -0x1c(%ebp),%eax
081ba26c +0x04e:  mov    0x8(%eax),%eax
081ba26f +0x051:  mov    %eax,-0xb4(%ebp)
081ba275 +0x057:  mov    -0x1c(%ebp),%eax
081ba278 +0x05a:  mov    0xc(%eax),%eax
081ba27b +0x05d:  mov    %eax,-0xb0(%ebp)
081ba281 +0x063:  movl   $0x6d,-0xbc(%ebp)
081ba28b +0x06d:  movl   $0x1,-0xac(%ebp)
081ba295 +0x077:  lea    -0x3c(%ebp),%eax
081ba298 +0x07a:  mov    %eax,(%esp)
081ba29b +0x07d:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
081ba2a0 +0x082:  lea    -0x35(%ebp),%eax
081ba2a3 +0x085:  mov    %eax,(%esp)
081ba2a6 +0x088:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
081ba2ab +0x08d:  lea    -0x35(%ebp),%eax
081ba2ae +0x090:  mov    %eax,0x8(%esp)
081ba2b2 +0x094:  movl   $"/",0x4(%esp)
081ba2ba +0x09c:  lea    -0x40(%ebp),%eax
081ba2bd +0x09f:  mov    %eax,(%esp)
081ba2c0 +0x0a2:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
081ba2c5 +0x0a7:  jmp    081ba2df <+0xc1>
081ba2c7 +0x0a9:  mov    %edx,%ebx
081ba2c9 +0x0ab:  mov    %eax,%esi
081ba2cb +0x0ad:  lea    -0x35(%ebp),%eax
081ba2ce +0x0b0:  mov    %eax,(%esp)
081ba2d1 +0x0b3:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
081ba2d6 +0x0b8:  mov    %esi,%eax
081ba2d8 +0x0ba:  mov    %ebx,%edx
081ba2da +0x0bc:  jmp    081ba5b4 <+0x396>
081ba2df +0x0c1:  lea    -0x35(%ebp),%eax
081ba2e2 +0x0c4:  mov    %eax,(%esp)
081ba2e5 +0x0c7:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
081ba2ea +0x0cc:  mov    -0x1c(%ebp),%eax
081ba2ed +0x0cf:  mov    0x20(%eax),%eax
081ba2f0 +0x0d2:  test   %eax,%eax
081ba2f2 +0x0d4:  je     081ba30d <+0xef>
081ba2f4 +0x0d6:  mov    -0x1c(%ebp),%eax
081ba2f7 +0x0d9:  mov    0x20(%eax),%eax
081ba2fa +0x0dc:  mov    %eax,(%esp)
081ba2fd +0x0df:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
081ba302 +0x0e4:  test   %eax,%eax
081ba304 +0x0e6:  je     081ba30d <+0xef>
081ba306 +0x0e8:  mov    $0x1,%eax
081ba30b +0x0ed:  jmp    081ba312 <+0xf4>
081ba30d +0x0ef:  mov    $0x0,%eax
081ba312 +0x0f4:  test   %al,%al
081ba314 +0x0f6:  je     081ba582 <+0x364>
081ba31a +0x0fc:  mov    $0x0,%ecx
081ba31f +0x101:  mov    -0x1c(%ebp),%eax
081ba322 +0x104:  mov    0x20(%eax),%edx
081ba325 +0x107:  lea    -0x34(%ebp),%eax
081ba328 +0x10a:  mov    %ecx,0x8(%esp)
081ba32c +0x10e:  mov    %edx,0x4(%esp)
081ba330 +0x112:  mov    %eax,(%esp)
081ba333 +0x115:  call   081ba8e7 <_GLOBAL__I_correctQuestIds+0xa5>  ; global constructors keyed to correctQuestIds+0xa5
081ba338 +0x11a:  sub    $0x4,%esp
081ba33b +0x11d:  lea    -0x34(%ebp),%eax
081ba33e +0x120:  mov    %eax,-0x18(%ebp)
081ba341 +0x123:  mov    -0x18(%ebp),%eax
081ba344 +0x126:  mov    %eax,(%esp)
081ba347 +0x129:  call   080ccf1a <_GLOBAL__I__ZN10BingoEventC2Ev+0x1d67>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1d67
081ba34c +0x12e:  test   %al,%al
081ba34e +0x130:  jne    081ba53c <+0x31e>
081ba354 +0x136:  mov    $0x0,%edx
081ba359 +0x13b:  lea    -0x30(%ebp),%eax
081ba35c +0x13e:  mov    %edx,0xc(%esp)
081ba360 +0x142:  movl   $0x0,0x8(%esp)
081ba368 +0x14a:  mov    -0x18(%ebp),%edx
081ba36b +0x14d:  mov    %edx,0x4(%esp)
081ba36f +0x151:  mov    %eax,(%esp)
081ba372 +0x154:  call   081ba918 <_GLOBAL__I_correctQuestIds+0xd6>  ; global constructors keyed to correctQuestIds+0xd6
081ba377 +0x159:  sub    $0x4,%esp
081ba37a +0x15c:  lea    -0x30(%ebp),%eax
081ba37d +0x15f:  mov    %eax,-0x14(%ebp)
081ba380 +0x162:  mov    -0x14(%ebp),%eax
081ba383 +0x165:  mov    %eax,(%esp)
081ba386 +0x168:  call   080ccf1a <_GLOBAL__I__ZN10BingoEventC2Ev+0x1d67>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1d67
081ba38b +0x16d:  test   %al,%al
081ba38d +0x16f:  jne    081ba53c <+0x31e>
081ba393 +0x175:  mov    $0x0,%edx
081ba398 +0x17a:  lea    -0x2c(%ebp),%eax
081ba39b +0x17d:  mov    %edx,0xc(%esp)
081ba39f +0x181:  movl   $0x0,0x8(%esp)
081ba3a7 +0x189:  mov    -0x18(%ebp),%edx
081ba3aa +0x18c:  mov    %edx,0x4(%esp)
081ba3ae +0x190:  mov    %eax,(%esp)
081ba3b1 +0x193:  call   081ba961 <_GLOBAL__I_correctQuestIds+0x11f>  ; global constructors keyed to correctQuestIds+0x11f
081ba3b6 +0x198:  sub    $0x4,%esp
081ba3b9 +0x19b:  lea    -0x2c(%ebp),%eax
081ba3bc +0x19e:  mov    %eax,-0x10(%ebp)
081ba3bf +0x1a1:  mov    -0x10(%ebp),%eax
081ba3c2 +0x1a4:  mov    %eax,(%esp)
081ba3c5 +0x1a7:  call   080ccf1a <_GLOBAL__I__ZN10BingoEventC2Ev+0x1d67>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1d67
081ba3ca +0x1ac:  test   %al,%al
081ba3cc +0x1ae:  jne    081ba53c <+0x31e>
081ba3d2 +0x1b4:  movb   $0x1,-0x41(%ebp)
081ba3d6 +0x1b8:  jmp    081ba4ff <+0x2e1>
081ba3db +0x1bd:  lea    -0x41(%ebp),%eax
081ba3de +0x1c0:  mov    %eax,(%esp)
081ba3e1 +0x1c3:  call   080ccf24 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1d71>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1d71
081ba3e6 +0x1c8:  test   %al,%al
081ba3e8 +0x1ca:  jne    081ba4e4 <+0x2c6>
081ba3ee +0x1d0:  movl   $0x0,0x4(%esp)
081ba3f6 +0x1d8:  mov    -0x14(%ebp),%eax
081ba3f9 +0x1db:  mov    %eax,(%esp)
081ba3fc +0x1de:  call   081ba9f6 <_GLOBAL__I_correctQuestIds+0x1b4>  ; global constructors keyed to correctQuestIds+0x1b4
081ba401 +0x1e3:  mov    %eax,-0xc(%ebp)
081ba404 +0x1e6:  jmp    081ba4d5 <+0x2b7>
081ba409 +0x1eb:  mov    -0xc(%ebp),%edx
081ba40c +0x1ee:  lea    -0x20(%ebp),%eax
081ba40f +0x1f1:  mov    %edx,0x4(%esp)
081ba413 +0x1f5:  mov    %eax,(%esp)
081ba416 +0x1f8:  call   081baa11 <_GLOBAL__I_correctQuestIds+0x1cf>  ; global constructors keyed to correctQuestIds+0x1cf
081ba41b +0x1fd:  sub    $0x4,%esp
081ba41e +0x200:  lea    -0x24(%ebp),%eax
081ba421 +0x203:  lea    -0x20(%ebp),%edx
081ba424 +0x206:  mov    %edx,0x8(%esp)
081ba428 +0x20a:  lea    -0x3c(%ebp),%edx
081ba42b +0x20d:  mov    %edx,0x4(%esp)
081ba42f +0x211:  mov    %eax,(%esp)
081ba432 +0x214:  call   081baa3a <_GLOBAL__I_correctQuestIds+0x1f8>  ; global constructors keyed to correctQuestIds+0x1f8
081ba437 +0x219:  sub    $0x4,%esp
081ba43a +0x21c:  lea    -0x28(%ebp),%eax
081ba43d +0x21f:  lea    -0x40(%ebp),%edx
081ba440 +0x222:  mov    %edx,0x8(%esp)
081ba444 +0x226:  lea    -0x24(%ebp),%edx
081ba447 +0x229:  mov    %edx,0x4(%esp)
081ba44b +0x22d:  mov    %eax,(%esp)
081ba44e +0x230:  call   081baa3a <_GLOBAL__I_correctQuestIds+0x1f8>  ; global constructors keyed to correctQuestIds+0x1f8
081ba453 +0x235:  sub    $0x4,%esp
081ba456 +0x238:  lea    -0x28(%ebp),%eax
081ba459 +0x23b:  mov    %eax,0x4(%esp)
081ba45d +0x23f:  lea    -0x3c(%ebp),%eax
081ba460 +0x242:  mov    %eax,(%esp)
081ba463 +0x245:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
081ba468 +0x24a:  jmp    081ba47f <+0x261>
081ba46a +0x24c:  mov    %edx,%ebx
081ba46c +0x24e:  mov    %eax,%esi
081ba46e +0x250:  lea    -0x28(%ebp),%eax
081ba471 +0x253:  mov    %eax,(%esp)
081ba474 +0x256:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081ba479 +0x25b:  mov    %esi,%eax
081ba47b +0x25d:  mov    %ebx,%edx
081ba47d +0x25f:  jmp    081ba48c <+0x26e>
081ba47f +0x261:  lea    -0x28(%ebp),%eax
081ba482 +0x264:  mov    %eax,(%esp)
081ba485 +0x267:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081ba48a +0x26c:  jmp    081ba4a1 <+0x283>
081ba48c +0x26e:  mov    %edx,%ebx
081ba48e +0x270:  mov    %eax,%esi
081ba490 +0x272:  lea    -0x24(%ebp),%eax
081ba493 +0x275:  mov    %eax,(%esp)
081ba496 +0x278:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081ba49b +0x27d:  mov    %esi,%eax
081ba49d +0x27f:  mov    %ebx,%edx
081ba49f +0x281:  jmp    081ba4ae <+0x290>
081ba4a1 +0x283:  lea    -0x24(%ebp),%eax
081ba4a4 +0x286:  mov    %eax,(%esp)
081ba4a7 +0x289:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081ba4ac +0x28e:  jmp    081ba4c6 <+0x2a8>
081ba4ae +0x290:  mov    %edx,%ebx
081ba4b0 +0x292:  mov    %eax,%esi
081ba4b2 +0x294:  lea    -0x20(%ebp),%eax
081ba4b5 +0x297:  mov    %eax,(%esp)
081ba4b8 +0x29a:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081ba4bd +0x29f:  mov    %esi,%eax
081ba4bf +0x2a1:  mov    %ebx,%edx
081ba4c1 +0x2a3:  jmp    081ba592 <+0x374>
081ba4c6 +0x2a8:  lea    -0x20(%ebp),%eax
081ba4c9 +0x2ab:  mov    %eax,(%esp)
081ba4cc +0x2ae:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081ba4d1 +0x2b3:  movb   $0x1,-0x41(%ebp)
081ba4d5 +0x2b7:  movzbl -0x41(%ebp),%eax
081ba4d9 +0x2bb:  xor    $0x1,%eax
081ba4dc +0x2be:  test   %al,%al
081ba4de +0x2c0:  jne    081ba409 <+0x1eb>
081ba4e4 +0x2c6:  movzbl -0x41(%ebp),%eax
081ba4e8 +0x2ca:  test   %al,%al
081ba4ea +0x2cc:  je     081ba4ff <+0x2e1>
081ba4ec +0x2ce:  movl   $0x0,0x4(%esp)
081ba4f4 +0x2d6:  mov    -0x14(%ebp),%eax
081ba4f7 +0x2d9:  mov    %eax,(%esp)
081ba4fa +0x2dc:  call   081ba9db <_GLOBAL__I_correctQuestIds+0x199>  ; global constructors keyed to correctQuestIds+0x199
081ba4ff +0x2e1:  movzbl -0x41(%ebp),%eax
081ba503 +0x2e5:  test   %al,%al
081ba505 +0x2e7:  je     081ba52f <+0x311>
081ba507 +0x2e9:  movl   $0x0,0x8(%esp)
081ba50f +0x2f1:  mov    -0x10(%ebp),%eax
081ba512 +0x2f4:  mov    %eax,0x4(%esp)
081ba516 +0x2f8:  mov    -0x14(%ebp),%eax
081ba519 +0x2fb:  mov    %eax,(%esp)
081ba51c +0x2fe:  call   081ba9aa <_GLOBAL__I_correctQuestIds+0x168>  ; global constructors keyed to correctQuestIds+0x168
081ba521 +0x303:  xor    $0x1,%eax
081ba524 +0x306:  test   %al,%al
081ba526 +0x308:  je     081ba52f <+0x311>
081ba528 +0x30a:  mov    $0x1,%eax
081ba52d +0x30f:  jmp    081ba534 <+0x316>
081ba52f +0x311:  mov    $0x0,%eax
081ba534 +0x316:  test   %al,%al
081ba536 +0x318:  jne    081ba3db <+0x1bd>
081ba53c +0x31e:  lea    -0x3c(%ebp),%eax
081ba53f +0x321:  mov    %eax,(%esp)
081ba542 +0x324:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
081ba547 +0x329:  cmp    $0x63,%eax
081ba54a +0x32c:  setbe  %al
081ba54d +0x32f:  test   %al,%al
081ba54f +0x331:  je     081ba582 <+0x364>
081ba551 +0x333:  lea    -0x3c(%ebp),%eax
081ba554 +0x336:  mov    %eax,(%esp)
081ba557 +0x339:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
081ba55c +0x33e:  mov    %eax,%ebx
081ba55e +0x340:  lea    -0x3c(%ebp),%eax
081ba561 +0x343:  mov    %eax,(%esp)
081ba564 +0x346:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
081ba569 +0x34b:  mov    %ebx,0x8(%esp)
081ba56d +0x34f:  mov    %eax,0x4(%esp)
081ba571 +0x353:  lea    -0xbc(%ebp),%eax
081ba577 +0x359:  add    $0x14,%eax
081ba57a +0x35c:  mov    %eax,(%esp)
081ba57d +0x35f:  call   0807d8a0 <_init+0x198>
081ba582 +0x364:  lea    -0xbc(%ebp),%eax
081ba588 +0x36a:  mov    %eax,(%esp)
081ba58b +0x36d:  call   0844920e <_ZN22DB_InsertEventStageLog11makeRequestER19SIG_EVENT_STAGE_LOG>  ; DB_InsertEventStageLog::makeRequest(SIG_EVENT_STAGE_LOG&)
081ba590 +0x372:  jmp    081ba5a7 <+0x389>
081ba592 +0x374:  mov    %edx,%ebx
081ba594 +0x376:  mov    %eax,%esi
081ba596 +0x378:  lea    -0x40(%ebp),%eax
081ba599 +0x37b:  mov    %eax,(%esp)
081ba59c +0x37e:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081ba5a1 +0x383:  mov    %esi,%eax
081ba5a3 +0x385:  mov    %ebx,%edx
081ba5a5 +0x387:  jmp    081ba5b4 <+0x396>
081ba5a7 +0x389:  lea    -0x40(%ebp),%eax
081ba5aa +0x38c:  mov    %eax,(%esp)
081ba5ad +0x38f:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081ba5b2 +0x394:  jmp    081ba5cf <+0x3b1>
081ba5b4 +0x396:  mov    %edx,%ebx
081ba5b6 +0x398:  mov    %eax,%esi
081ba5b8 +0x39a:  lea    -0x3c(%ebp),%eax
081ba5bb +0x39d:  mov    %eax,(%esp)
081ba5be +0x3a0:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081ba5c3 +0x3a5:  mov    %esi,%eax
081ba5c5 +0x3a7:  mov    %ebx,%edx
081ba5c7 +0x3a9:  mov    %eax,(%esp)
081ba5ca +0x3ac:  call   08ae3750 <_Unwind_Resume>
081ba5cf +0x3b1:  lea    -0x3c(%ebp),%eax
081ba5d2 +0x3b4:  mov    %eax,(%esp)
081ba5d5 +0x3b7:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081ba5da +0x3bc:  jmp    081ba5dd <+0x3bf>
081ba5dc +0x3be:  nop
081ba5dd +0x3bf:  lea    -0x8(%ebp),%esp
081ba5e0 +0x3c2:  add    $0x0,%esp
081ba5e3 +0x3c5:  pop    %ebx
081ba5e4 +0x3c6:  pop    %esi
081ba5e5 +0x3c7:  pop    %ebp
081ba5e6 +0x3c8:  ret
081ba5e7 +0x3c9:  nop
```

## 反编译 C

```c
// OneADayItemShopEvent::questClearLog @ 0x81ba21e

/* OneADayItemShopEvent::questClearLog(DeliveryMsg&) */

void __thiscall OneADayItemShopEvent::questClearLog(OneADayItemShopEvent *this,DeliveryMsg *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  size_t __n;
  void *__src;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined1 auStack_ac [103];
  bool local_45;
  string local_44;
  string local_40;
  allocator<char> local_39;
  vector local_38 [4];
  auto_any_base local_34 [4];
  auto_any_base local_30 [4];
  string local_2c;
  string local_28;
  string local_24;
  DeliveryMsg *local_20;
  type2type *local_1c;
  auto_any_base *local_18;
  auto_any_base *local_14;
  int *local_10;
  
  local_20 = param_1;
  cVar1 = isQuestId(this,*(int *)(param_1 + 0x10));
  if (cVar1 == '\x01') {
    SIG_EVENT_STAGE_LOG::SIG_EVENT_STAGE_LOG((SIG_EVENT_STAGE_LOG *)&local_c0);
    local_bc = *(undefined4 *)(local_20 + 4);
    local_b8 = *(undefined4 *)(local_20 + 8);
    local_b4 = *(undefined4 *)(local_20 + 0xc);
    local_c0 = 0x6d;
    local_b0 = 1;
    std::string::string((string *)&local_40);
    std::allocator<char>::allocator();
                    /* try { // try from 081ba2c0 to 081ba2c4 has its CatchHandler @ 081ba2c7 */
    std::string::string((string *)&local_44,"/",(allocator *)&local_39);
    std::allocator<char>::~allocator(&local_39);
    if ((*(int *)(local_20 + 0x20) == 0) ||
       (iVar3 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                          (*(vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> **)
                            (local_20 + 0x20)), iVar3 == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
                    /* try { // try from 081ba333 to 081ba41a has its CatchHandler @ 081ba592 */
      boost::foreach_detail_::
      contain<std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                (local_38,*(bool_ **)(local_20 + 0x20));
      local_1c = (type2type *)local_38;
      bVar2 = boost::foreach_detail_::auto_any_base::operator_cast_to_bool
                        ((auto_any_base *)local_1c);
      if (!bVar2) {
        boost::foreach_detail_::
        begin<std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>,mpl_::bool_<false>>
                  (local_34,local_1c,(bool_ *)0x0);
        local_18 = local_34;
        bVar2 = boost::foreach_detail_::auto_any_base::operator_cast_to_bool(local_18);
        if (!bVar2) {
          boost::foreach_detail_::
          end<std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>,mpl_::bool_<false>>
                    (local_30,local_1c,(bool_ *)0x0);
          local_14 = local_30;
          bVar2 = boost::foreach_detail_::auto_any_base::operator_cast_to_bool(local_14);
          if (!bVar2) {
            local_45 = true;
            while( true ) {
              if ((local_45 == false) ||
                 (bVar2 = boost::foreach_detail_::
                          done<std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>,mpl_::bool_<false>>
                                    (local_18,local_14,(type2type *)0x0), bVar2)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (!bVar2) break;
              cVar1 = boost::foreach_detail_::set_false(&local_45);
              if (cVar1 == '\0') {
                local_10 = (int *)boost::foreach_detail_::
                                  deref<std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>,mpl_::bool_<false>>
                                            (local_18,(type2type *)0x0);
                while (local_45 != true) {
                  boost::lexical_cast<std::string,int>(&local_24,local_10);
                    /* try { // try from 081ba432 to 081ba436 has its CatchHandler @ 081ba4ae */
                  std::operator+(&local_28,&local_40,&local_24);
                    /* try { // try from 081ba44e to 081ba452 has its CatchHandler @ 081ba48c */
                  std::operator+(&local_2c,&local_28,&local_44);
                    /* try { // try from 081ba463 to 081ba467 has its CatchHandler @ 081ba46a */
                  std::string::operator=((string *)&local_40,(string *)&local_2c);
                    /* try { // try from 081ba485 to 081ba489 has its CatchHandler @ 081ba48c */
                  std::string::~string((string *)&local_2c);
                    /* try { // try from 081ba4a7 to 081ba4ab has its CatchHandler @ 081ba4ae */
                  std::string::~string((string *)&local_28);
                    /* try { // try from 081ba4cc to 081ba58f has its CatchHandler @ 081ba592 */
                  std::string::~string((string *)&local_24);
                  local_45 = true;
                }
              }
              if (local_45 != false) {
                boost::foreach_detail_::
                next<std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>,mpl_::bool_<false>>
                          (local_18,(type2type *)0x0);
              }
            }
          }
        }
      }
      uVar4 = std::string::size((string *)&local_40);
      if (uVar4 < 100) {
        __n = std::string::size((string *)&local_40);
        __src = (void *)std::string::c_str((string *)&local_40);
        memcpy(auStack_ac,__src,__n);
      }
    }
    DB_InsertEventStageLog::makeRequest((SIG_EVENT_STAGE_LOG *)&local_c0);
                    /* try { // try from 081ba5ad to 081ba5b1 has its CatchHandler @ 081ba5b4 */
    std::string::~string((string *)&local_44);
    std::string::~string((string *)&local_40);
    return;
  }
  return;
}
```
