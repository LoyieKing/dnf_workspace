# writeRawLog

`_ZN14CFileLogWriter11writeRawLogEPKcS1_z`

`CFileLogWriter::writeRawLog(char const*, char const*, ...)`

| 类 | 地址 |
|---|---|
| `CFileLogWriter` | `0x0810747c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810747c  _ZN14CFileLogWriter11writeRawLogEPKcS1_z
#           CFileLogWriter::writeRawLog(char const*, char const*, ...)
# range [0x0810747c, 0x0810786b]
0810747c +0x000:  push   %ebp
0810747d +0x001:  mov    %esp,%ebp
0810747f +0x003:  push   %edi
08107480 +0x004:  push   %esi
08107481 +0x005:  push   %ebx
08107482 +0x006:  sub    $0x2dc,%esp
08107488 +0x00c:  mov    0x8(%ebp),%eax
0810748b +0x00f:  add    $0x1c,%eax
0810748e +0x012:  mov    %eax,0x4(%esp)
08107492 +0x016:  lea    -0x50(%ebp),%eax
08107495 +0x019:  mov    %eax,(%esp)
08107498 +0x01c:  call   08107c64 <_GLOBAL__I__Z22CFileLogWriterInstancev+0x12a>  ; global constructors keyed to CFileLogWriterInstance()+0x12a
0810749d +0x021:  movl   $0x0,(%esp)
081074a4 +0x028:  call   0807d750 <_init+0x48>
081074a9 +0x02d:  mov    %eax,-0x54(%ebp)
081074ac +0x030:  lea    -0x9c(%ebp),%eax
081074b2 +0x036:  mov    %eax,0x4(%esp)
081074b6 +0x03a:  lea    -0x54(%ebp),%eax
081074b9 +0x03d:  mov    %eax,(%esp)
081074bc +0x040:  call   0807e360 <_init+0xc58>
081074c1 +0x045:  mov    %eax,-0x24(%ebp)
081074c4 +0x048:  lea    0x14(%ebp),%eax
081074c7 +0x04b:  mov    %eax,-0x58(%ebp)
081074ca +0x04e:  mov    -0x24(%ebp),%eax
081074cd +0x051:  mov    0xc(%eax),%eax
081074d0 +0x054:  mov    -0x24(%ebp),%edx
081074d3 +0x057:  mov    0x10(%edx),%edx
081074d6 +0x05a:  lea    0x1(%edx),%ecx
081074d9 +0x05d:  mov    -0x24(%ebp),%edx
081074dc +0x060:  mov    0x14(%edx),%edx
081074df +0x063:  add    $0x76c,%edx
081074e5 +0x069:  mov    %eax,0x14(%esp)
081074e9 +0x06d:  mov    %ecx,0x10(%esp)
081074ed +0x071:  mov    %edx,0xc(%esp)
081074f1 +0x075:  mov    0xc(%ebp),%eax
081074f4 +0x078:  mov    %eax,0x8(%esp)
081074f8 +0x07c:  movl   $"%s%04d%02d%02d.log",0x4(%esp)
08107500 +0x084:  lea    -0x1c8(%ebp),%eax
08107506 +0x08a:  mov    %eax,(%esp)
08107509 +0x08d:  call   0807e440 <_init+0xd38>
0810750e +0x092:  lea    -0x49(%ebp),%eax
08107511 +0x095:  mov    %eax,(%esp)
08107514 +0x098:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
08107519 +0x09d:  lea    -0x49(%ebp),%eax
0810751c +0x0a0:  mov    %eax,0x8(%esp)
08107520 +0x0a4:  lea    -0x1c8(%ebp),%eax
08107526 +0x0aa:  mov    %eax,0x4(%esp)
0810752a +0x0ae:  lea    -0x5c(%ebp),%eax
0810752d +0x0b1:  mov    %eax,(%esp)
08107530 +0x0b4:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
08107535 +0x0b9:  jmp    0810754f <+0xd3>
08107537 +0x0bb:  mov    %edx,%ebx
08107539 +0x0bd:  mov    %eax,%esi
0810753b +0x0bf:  lea    -0x49(%ebp),%eax
0810753e +0x0c2:  mov    %eax,(%esp)
08107541 +0x0c5:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08107546 +0x0ca:  mov    %esi,%eax
08107548 +0x0cc:  mov    %ebx,%edx
0810754a +0x0ce:  jmp    0810783a <+0x3be>
0810754f +0x0d3:  lea    -0x49(%ebp),%eax
08107552 +0x0d6:  mov    %eax,(%esp)
08107555 +0x0d9:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0810755a +0x0de:  mov    0x8(%ebp),%eax
0810755d +0x0e1:  lea    0x4(%eax),%ecx
08107560 +0x0e4:  lea    -0x60(%ebp),%eax
08107563 +0x0e7:  lea    -0x5c(%ebp),%edx
08107566 +0x0ea:  mov    %edx,0x8(%esp)
0810756a +0x0ee:  mov    %ecx,0x4(%esp)
0810756e +0x0f2:  mov    %eax,(%esp)
08107571 +0x0f5:  call   08107c96 <_GLOBAL__I__Z22CFileLogWriterInstancev+0x15c>  ; global constructors keyed to CFileLogWriterInstance()+0x15c
08107576 +0x0fa:  sub    $0x4,%esp
08107579 +0x0fd:  mov    0x8(%ebp),%eax
0810757c +0x100:  lea    0x4(%eax),%edx
0810757f +0x103:  lea    -0x48(%ebp),%eax
08107582 +0x106:  mov    %edx,0x4(%esp)
08107586 +0x10a:  mov    %eax,(%esp)
08107589 +0x10d:  call   08107cc2 <_GLOBAL__I__Z22CFileLogWriterInstancev+0x188>  ; global constructors keyed to CFileLogWriterInstance()+0x188
0810758e +0x112:  sub    $0x4,%esp
08107591 +0x115:  lea    -0x48(%ebp),%eax
08107594 +0x118:  mov    %eax,0x4(%esp)
08107598 +0x11c:  lea    -0x60(%ebp),%eax
0810759b +0x11f:  mov    %eax,(%esp)
0810759e +0x122:  call   08107ce8 <_GLOBAL__I__Z22CFileLogWriterInstancev+0x1ae>  ; global constructors keyed to CFileLogWriterInstance()+0x1ae
081075a3 +0x127:  test   %al,%al
081075a5 +0x129:  je     081075d6 <+0x15a>
081075a7 +0x12b:  lea    -0x60(%ebp),%eax
081075aa +0x12e:  mov    %eax,(%esp)
081075ad +0x131:  call   08107cfc <_GLOBAL__I__Z22CFileLogWriterInstancev+0x1c2>  ; global constructors keyed to CFileLogWriterInstance()+0x1c2
081075b2 +0x136:  mov    0x4(%eax),%eax
081075b5 +0x139:  mov    %eax,-0x1c(%ebp)
081075b8 +0x13c:  mov    -0x58(%ebp),%eax
081075bb +0x13f:  mov    %eax,0x8(%esp)
081075bf +0x143:  mov    0x10(%ebp),%eax
081075c2 +0x146:  mov    %eax,0x4(%esp)
081075c6 +0x14a:  mov    -0x1c(%ebp),%eax
081075c9 +0x14d:  mov    %eax,(%esp)
081075cc +0x150:  call   08106f8e <_ZN5CFLog8writeLogEPKcPc>  ; CFLog::writeLog(char const*, char*)
081075d1 +0x155:  jmp    0810782d <+0x3b1>
081075d6 +0x15a:  mov    -0x54(%ebp),%eax
081075d9 +0x15d:  sub    $&_ZL14gUnicodeBuffer+0xac54,%eax
081075de +0x162:  mov    %eax,-0x64(%ebp)
081075e1 +0x165:  lea    -0xc8(%ebp),%eax
081075e7 +0x16b:  mov    %eax,0x4(%esp)
081075eb +0x16f:  lea    -0x64(%ebp),%eax
081075ee +0x172:  mov    %eax,(%esp)
081075f1 +0x175:  call   0807e360 <_init+0xc58>
081075f6 +0x17a:  mov    %eax,-0x20(%ebp)
081075f9 +0x17d:  mov    -0x20(%ebp),%eax
081075fc +0x180:  mov    0xc(%eax),%eax
081075ff +0x183:  mov    -0x20(%ebp),%edx
08107602 +0x186:  mov    0x10(%edx),%edx
08107605 +0x189:  lea    0x1(%edx),%ecx
08107608 +0x18c:  mov    -0x20(%ebp),%edx
0810760b +0x18f:  mov    0x14(%edx),%edx
0810760e +0x192:  add    $0x76c,%edx
08107614 +0x198:  mov    %eax,0x14(%esp)
08107618 +0x19c:  mov    %ecx,0x10(%esp)
0810761c +0x1a0:  mov    %edx,0xc(%esp)
08107620 +0x1a4:  mov    0xc(%ebp),%eax
08107623 +0x1a7:  mov    %eax,0x8(%esp)
08107627 +0x1ab:  movl   $"%s%04d%02d%02d.log",0x4(%esp)
0810762f +0x1b3:  lea    -0x2c8(%ebp),%eax
08107635 +0x1b9:  mov    %eax,(%esp)
08107638 +0x1bc:  call   0807e440 <_init+0xd38>
0810763d +0x1c1:  lea    -0x41(%ebp),%eax
08107640 +0x1c4:  mov    %eax,(%esp)
08107643 +0x1c7:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
08107648 +0x1cc:  lea    -0x41(%ebp),%eax
0810764b +0x1cf:  mov    %eax,0x8(%esp)
0810764f +0x1d3:  lea    -0x2c8(%ebp),%eax
08107655 +0x1d9:  mov    %eax,0x4(%esp)
08107659 +0x1dd:  lea    -0x68(%ebp),%eax
0810765c +0x1e0:  mov    %eax,(%esp)
0810765f +0x1e3:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
08107664 +0x1e8:  jmp    0810767e <+0x202>
08107666 +0x1ea:  mov    %edx,%ebx
08107668 +0x1ec:  mov    %eax,%esi
0810766a +0x1ee:  lea    -0x41(%ebp),%eax
0810766d +0x1f1:  mov    %eax,(%esp)
08107670 +0x1f4:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08107675 +0x1f9:  mov    %esi,%eax
08107677 +0x1fb:  mov    %ebx,%edx
08107679 +0x1fd:  jmp    08107818 <+0x39c>
0810767e +0x202:  lea    -0x41(%ebp),%eax
08107681 +0x205:  mov    %eax,(%esp)
08107684 +0x208:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08107689 +0x20d:  mov    0x8(%ebp),%eax
0810768c +0x210:  lea    0x4(%eax),%ecx
0810768f +0x213:  lea    -0x6c(%ebp),%eax
08107692 +0x216:  lea    -0x68(%ebp),%edx
08107695 +0x219:  mov    %edx,0x8(%esp)
08107699 +0x21d:  mov    %ecx,0x4(%esp)
0810769d +0x221:  mov    %eax,(%esp)
081076a0 +0x224:  call   08107c96 <_GLOBAL__I__Z22CFileLogWriterInstancev+0x15c>  ; global constructors keyed to CFileLogWriterInstance()+0x15c
081076a5 +0x229:  sub    $0x4,%esp
081076a8 +0x22c:  mov    0x8(%ebp),%eax
081076ab +0x22f:  lea    0x4(%eax),%edx
081076ae +0x232:  lea    -0x40(%ebp),%eax
081076b1 +0x235:  mov    %edx,0x4(%esp)
081076b5 +0x239:  mov    %eax,(%esp)
081076b8 +0x23c:  call   08107cc2 <_GLOBAL__I__Z22CFileLogWriterInstancev+0x188>  ; global constructors keyed to CFileLogWriterInstance()+0x188
081076bd +0x241:  sub    $0x4,%esp
081076c0 +0x244:  lea    -0x40(%ebp),%eax
081076c3 +0x247:  mov    %eax,0x4(%esp)
081076c7 +0x24b:  lea    -0x6c(%ebp),%eax
081076ca +0x24e:  mov    %eax,(%esp)
081076cd +0x251:  call   08107ce8 <_GLOBAL__I__Z22CFileLogWriterInstancev+0x1ae>  ; global constructors keyed to CFileLogWriterInstance()+0x1ae
081076d2 +0x256:  test   %al,%al
081076d4 +0x258:  je     08107709 <+0x28d>
081076d6 +0x25a:  lea    -0x6c(%ebp),%eax
081076d9 +0x25d:  mov    %eax,(%esp)
081076dc +0x260:  call   08107cfc <_GLOBAL__I__Z22CFileLogWriterInstancev+0x1c2>  ; global constructors keyed to CFileLogWriterInstance()+0x1c2
081076e1 +0x265:  mov    0x4(%eax),%eax
081076e4 +0x268:  test   %eax,%eax
081076e6 +0x26a:  je     081076f4 <+0x278>
081076e8 +0x26c:  mov    (%eax),%edx
081076ea +0x26e:  add    $0x4,%edx
081076ed +0x271:  mov    (%edx),%edx
081076ef +0x273:  mov    %eax,(%esp)
081076f2 +0x276:  call   *%edx
081076f4 +0x278:  mov    0x8(%ebp),%eax
081076f7 +0x27b:  lea    0x4(%eax),%edx
081076fa +0x27e:  mov    -0x6c(%ebp),%eax
081076fd +0x281:  mov    %eax,0x4(%esp)
08107701 +0x285:  mov    %edx,(%esp)
08107704 +0x288:  call   08107d0a <_GLOBAL__I__Z22CFileLogWriterInstancev+0x1d0>  ; global constructors keyed to CFileLogWriterInstance()+0x1d0
08107709 +0x28d:  movl   $0xc,(%esp)
08107710 +0x294:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08107715 +0x299:  mov    %eax,%ebx
08107717 +0x29b:  mov    %ebx,%eax
08107719 +0x29d:  lea    -0x5c(%ebp),%edx
0810771c +0x2a0:  mov    %edx,0x4(%esp)
08107720 +0x2a4:  mov    %eax,(%esp)
08107723 +0x2a7:  call   08106dc4 <_ZN5CFLogC1ERSs>  ; CFLog::CFLog(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
08107728 +0x2ac:  jmp    0810773f <+0x2c3>
0810772a +0x2ae:  mov    %edx,%esi
0810772c +0x2b0:  mov    %eax,%edi
0810772e +0x2b2:  mov    %ebx,(%esp)
08107731 +0x2b5:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08107736 +0x2ba:  mov    %edi,%eax
08107738 +0x2bc:  mov    %esi,%edx
0810773a +0x2be:  jmp    081077f6 <+0x37a>
0810773f +0x2c3:  mov    %ebx,%eax
08107741 +0x2c5:  mov    %eax,-0x70(%ebp)
08107744 +0x2c8:  lea    -0x2c(%ebp),%eax
08107747 +0x2cb:  lea    -0x70(%ebp),%edx
0810774a +0x2ce:  mov    %edx,0x8(%esp)
0810774e +0x2d2:  lea    -0x5c(%ebp),%edx
08107751 +0x2d5:  mov    %edx,0x4(%esp)
08107755 +0x2d9:  mov    %eax,(%esp)
08107758 +0x2dc:  call   08107d24 <_GLOBAL__I__Z22CFileLogWriterInstancev+0x1ea>  ; global constructors keyed to CFileLogWriterInstance()+0x1ea
0810775d +0x2e1:  sub    $0x4,%esp
08107760 +0x2e4:  lea    -0x2c(%ebp),%eax
08107763 +0x2e7:  mov    %eax,0x4(%esp)
08107767 +0x2eb:  lea    -0x34(%ebp),%eax
0810776a +0x2ee:  mov    %eax,(%esp)
0810776d +0x2f1:  call   08107d68 <_GLOBAL__I__Z22CFileLogWriterInstancev+0x22e>  ; global constructors keyed to CFileLogWriterInstance()+0x22e
08107772 +0x2f6:  mov    0x8(%ebp),%eax
08107775 +0x2f9:  lea    0x4(%eax),%ecx
08107778 +0x2fc:  lea    -0x3c(%ebp),%eax
0810777b +0x2ff:  lea    -0x34(%ebp),%edx
0810777e +0x302:  mov    %edx,0x8(%esp)
08107782 +0x306:  mov    %ecx,0x4(%esp)
08107786 +0x30a:  mov    %eax,(%esp)
08107789 +0x30d:  call   08107da0 <_GLOBAL__I__Z22CFileLogWriterInstancev+0x266>  ; global constructors keyed to CFileLogWriterInstance()+0x266
0810778e +0x312:  sub    $0x4,%esp
08107791 +0x315:  movzbl -0x38(%ebp),%ebx
08107795 +0x319:  lea    -0x34(%ebp),%eax
08107798 +0x31c:  mov    %eax,(%esp)
0810779b +0x31f:  call   08107bd6 <_GLOBAL__I__Z22CFileLogWriterInstancev+0x9c>  ; global constructors keyed to CFileLogWriterInstance()+0x9c
081077a0 +0x324:  jmp    081077cc <+0x350>
081077a2 +0x326:  mov    %edx,%ebx
081077a4 +0x328:  mov    %eax,%esi
081077a6 +0x32a:  lea    -0x34(%ebp),%eax
081077a9 +0x32d:  mov    %eax,(%esp)
081077ac +0x330:  call   08107bd6 <_GLOBAL__I__Z22CFileLogWriterInstancev+0x9c>  ; global constructors keyed to CFileLogWriterInstance()+0x9c
081077b1 +0x335:  mov    %esi,%eax
081077b3 +0x337:  mov    %ebx,%edx
081077b5 +0x339:  jmp    081077b7 <+0x33b>
081077b7 +0x33b:  mov    %edx,%ebx
081077b9 +0x33d:  mov    %eax,%esi
081077bb +0x33f:  lea    -0x2c(%ebp),%eax
081077be +0x342:  mov    %eax,(%esp)
081077c1 +0x345:  call   08107bc2 <_GLOBAL__I__Z22CFileLogWriterInstancev+0x88>  ; global constructors keyed to CFileLogWriterInstance()+0x88
081077c6 +0x34a:  mov    %esi,%eax
081077c8 +0x34c:  mov    %ebx,%edx
081077ca +0x34e:  jmp    081077f6 <+0x37a>
081077cc +0x350:  lea    -0x2c(%ebp),%eax
081077cf +0x353:  mov    %eax,(%esp)
081077d2 +0x356:  call   08107bc2 <_GLOBAL__I__Z22CFileLogWriterInstancev+0x88>  ; global constructors keyed to CFileLogWriterInstance()+0x88
081077d7 +0x35b:  test   %bl,%bl
081077d9 +0x35d:  je     0810780b <+0x38f>
081077db +0x35f:  mov    -0x58(%ebp),%edx
081077de +0x362:  mov    -0x70(%ebp),%eax
081077e1 +0x365:  mov    %edx,0x8(%esp)
081077e5 +0x369:  mov    0x10(%ebp),%edx
081077e8 +0x36c:  mov    %edx,0x4(%esp)
081077ec +0x370:  mov    %eax,(%esp)
081077ef +0x373:  call   08106f8e <_ZN5CFLog8writeLogEPKcPc>  ; CFLog::writeLog(char const*, char*)
081077f4 +0x378:  jmp    0810780b <+0x38f>
081077f6 +0x37a:  mov    %edx,%ebx
081077f8 +0x37c:  mov    %eax,%esi
081077fa +0x37e:  lea    -0x68(%ebp),%eax
081077fd +0x381:  mov    %eax,(%esp)
08107800 +0x384:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08107805 +0x389:  mov    %esi,%eax
08107807 +0x38b:  mov    %ebx,%edx
08107809 +0x38d:  jmp    08107818 <+0x39c>
0810780b +0x38f:  lea    -0x68(%ebp),%eax
0810780e +0x392:  mov    %eax,(%esp)
08107811 +0x395:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08107816 +0x39a:  jmp    0810782d <+0x3b1>
08107818 +0x39c:  mov    %edx,%ebx
0810781a +0x39e:  mov    %eax,%esi
0810781c +0x3a0:  lea    -0x5c(%ebp),%eax
0810781f +0x3a3:  mov    %eax,(%esp)
08107822 +0x3a6:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08107827 +0x3ab:  mov    %esi,%eax
08107829 +0x3ad:  mov    %ebx,%edx
0810782b +0x3af:  jmp    0810783a <+0x3be>
0810782d +0x3b1:  lea    -0x5c(%ebp),%eax
08107830 +0x3b4:  mov    %eax,(%esp)
08107833 +0x3b7:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08107838 +0x3bc:  jmp    08107855 <+0x3d9>
0810783a +0x3be:  mov    %edx,%ebx
0810783c +0x3c0:  mov    %eax,%esi
0810783e +0x3c2:  lea    -0x50(%ebp),%eax
08107841 +0x3c5:  mov    %eax,(%esp)
08107844 +0x3c8:  call   08107c80 <_GLOBAL__I__Z22CFileLogWriterInstancev+0x146>  ; global constructors keyed to CFileLogWriterInstance()+0x146
08107849 +0x3cd:  mov    %esi,%eax
0810784b +0x3cf:  mov    %ebx,%edx
0810784d +0x3d1:  mov    %eax,(%esp)
08107850 +0x3d4:  call   08ae3750 <_Unwind_Resume>
08107855 +0x3d9:  lea    -0x50(%ebp),%eax
08107858 +0x3dc:  mov    %eax,(%esp)
0810785b +0x3df:  call   08107c80 <_GLOBAL__I__Z22CFileLogWriterInstancev+0x146>  ; global constructors keyed to CFileLogWriterInstance()+0x146
08107860 +0x3e4:  lea    -0xc(%ebp),%esp
08107863 +0x3e7:  add    $0x0,%esp
08107866 +0x3ea:  pop    %ebx
08107867 +0x3eb:  pop    %esi
08107868 +0x3ec:  pop    %edi
08107869 +0x3ed:  pop    %ebp
0810786a +0x3ee:  ret
0810786b +0x3ef:  nop
```

## 反编译 C

```c
// CFileLogWriter::writeRawLog @ 0x810747c

/* CFileLogWriter::writeRawLog(char const*, char const*, ...) */

void __thiscall CFileLogWriter::writeRawLog(CFileLogWriter *this,char *param_1,char *param_2,...)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  CFLog *this_00;
  _Rb_tree_iterator *p_Var4;
  string *psVar5;
  char local_2cc [256];
  char local_1cc [256];
  tm local_cc;
  tm local_a0;
  CFLog *local_74;
  string local_70;
  string local_6c [4];
  int local_68;
  string local_64;
  string local_60;
  char *local_5c;
  time_t local_58;
  CGuard<CMutex> local_54 [7];
  allocator<char> local_4d;
  map<std::string,CFLog*,std::less<std::string>,std::allocator<std::pair<std::string_const,CFLog*>>>
  local_4c [7];
  allocator<char> local_45;
  map<std::string,CFLog*,std::less<std::string>,std::allocator<std::pair<std::string_const,CFLog*>>>
  local_44 [4];
  pair local_40 [4];
  char local_3c;
  pair<std::string_const,CFLog*> local_38 [8];
  string local_30 [2];
  tm *local_28;
  tm *local_24;
  CFLog *local_20;
  
  CGuard<CMutex>::CGuard(local_54,(CMutex *)(this + 0x1c));
  local_58 = time((time_t *)0x0);
  local_28 = localtime_r(&local_58,&local_a0);
  local_5c = &stack0x00000010;
  sprintf(local_1cc,"%s%04d%02d%02d.log",param_1,local_28->tm_year + 0x76c,local_28->tm_mon + 1,
          local_28->tm_mday);
  std::allocator<char>::allocator();
                    /* try { // try from 08107530 to 08107534 has its CatchHandler @ 08107537 */
  std::string::string((string *)&local_60,local_1cc,(allocator *)&local_4d);
  std::allocator<char>::~allocator(&local_4d);
                    /* try { // try from 08107571 to 081075d0 has its CatchHandler @ 08107818 */
  std::
  map<std::string,CFLog*,std::less<std::string>,std::allocator<std::pair<std::string_const,CFLog*>>>
  ::find(&local_64);
  std::
  map<std::string,CFLog*,std::less<std::string>,std::allocator<std::pair<std::string_const,CFLog*>>>
  ::end(local_4c);
  cVar2 = std::_Rb_tree_iterator<std::pair<std::string_const,CFLog*>>::operator!=
                    ((_Rb_tree_iterator<std::pair<std::string_const,CFLog*>> *)&local_64,
                     (_Rb_tree_iterator *)local_4c);
  if (cVar2 == '\0') {
    local_68 = local_58 + -0x15180;
    local_24 = localtime_r(&local_68,&local_cc);
    sprintf(local_2cc,"%s%04d%02d%02d.log",param_1,local_24->tm_year + 0x76c,local_24->tm_mon + 1,
            local_24->tm_mday);
    std::allocator<char>::allocator();
                    /* try { // try from 0810765f to 08107663 has its CatchHandler @ 08107666 */
    std::string::string(local_6c,local_2cc,(allocator *)&local_45);
    std::allocator<char>::~allocator(&local_45);
    psVar5 = local_6c;
                    /* try { // try from 081076a0 to 08107714 has its CatchHandler @ 081077f6 */
    std::
    map<std::string,CFLog*,std::less<std::string>,std::allocator<std::pair<std::string_const,CFLog*>>>
    ::find(&local_70);
    std::
    map<std::string,CFLog*,std::less<std::string>,std::allocator<std::pair<std::string_const,CFLog*>>>
    ::end(local_44);
    p_Var4 = (_Rb_tree_iterator *)local_44;
    cVar2 = std::_Rb_tree_iterator<std::pair<std::string_const,CFLog*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<std::string_const,CFLog*>> *)&local_70,p_Var4);
    if (cVar2 != '\0') {
      iVar3 = std::_Rb_tree_iterator<std::pair<std::string_const,CFLog*>>::operator->
                        ((_Rb_tree_iterator<std::pair<std::string_const,CFLog*>> *)&local_70);
      piVar1 = *(int **)(iVar3 + 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(piVar1,p_Var4,psVar5);
      }
      std::
      map<std::string,CFLog*,std::less<std::string>,std::allocator<std::pair<std::string_const,CFLog*>>>
      ::erase((map<std::string,CFLog*,std::less<std::string>,std::allocator<std::pair<std::string_const,CFLog*>>>
               *)(this + 4),local_70._M_dataplus._M_p);
    }
    this_00 = operator_new(0xc);
                    /* try { // try from 08107723 to 08107727 has its CatchHandler @ 0810772a */
    CFLog::CFLog(this_00,&local_60);
    local_74 = this_00;
                    /* try { // try from 08107758 to 0810775c has its CatchHandler @ 081077f6 */
    std::make_pair<std::string&,CFLog*&>(local_30,(CFLog **)&local_60);
                    /* try { // try from 0810776d to 08107771 has its CatchHandler @ 081077b7 */
    std::pair<std::string_const,CFLog*>::pair<std::string,CFLog*>(local_38,(pair *)local_30);
                    /* try { // try from 08107789 to 0810778d has its CatchHandler @ 081077a2 */
    std::
    map<std::string,CFLog*,std::less<std::string>,std::allocator<std::pair<std::string_const,CFLog*>>>
    ::insert(local_40);
                    /* try { // try from 0810779b to 0810779f has its CatchHandler @ 081077b7 */
    std::pair<std::string_const,CFLog*>::~pair(local_38);
                    /* try { // try from 081077d2 to 081077f3 has its CatchHandler @ 081077f6 */
    std::pair<std::string,CFLog*>::~pair((pair<std::string,CFLog*> *)local_30);
    if (local_3c != '\0') {
      CFLog::writeLog(local_74,param_2,local_5c);
    }
                    /* try { // try from 08107811 to 08107815 has its CatchHandler @ 08107818 */
    std::string::~string(local_6c);
  }
  else {
    iVar3 = std::_Rb_tree_iterator<std::pair<std::string_const,CFLog*>>::operator->
                      ((_Rb_tree_iterator<std::pair<std::string_const,CFLog*>> *)&local_64);
    local_20 = *(CFLog **)(iVar3 + 4);
    CFLog::writeLog(local_20,param_2,local_5c);
  }
                    /* try { // try from 08107833 to 08107837 has its CatchHandler @ 0810783a */
  std::string::~string((string *)&local_60);
  CGuard<CMutex>::~CGuard(local_54);
  return;
}
```
