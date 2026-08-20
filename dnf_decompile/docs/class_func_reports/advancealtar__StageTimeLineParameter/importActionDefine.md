# importActionDefine

`_ZN12advancealtar22StageTimeLineParameter18importActionDefineEv`

`advancealtar::StageTimeLineParameter::importActionDefine()`

| 类 | 地址 |
|---|---|
| `advancealtar::StageTimeLineParameter` | `0x0889a56e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0889a56e  _ZN12advancealtar22StageTimeLineParameter18importActionDefineEv
#           advancealtar::StageTimeLineParameter::importActionDefine()
# range [0x0889a56e, 0x0889a92f]
0889a56e +0x000:  push   %ebp
0889a56f +0x001:  mov    %esp,%ebp
0889a571 +0x003:  push   %esi
0889a572 +0x004:  push   %ebx
0889a573 +0x005:  add    $0xffffff80,%esp
0889a576 +0x008:  movb   $0x0,-0x41(%ebp)
0889a57a +0x00c:  jmp    0889a57d <+0xf>
0889a57c +0x00e:  nop
0889a57d +0x00f:  lea    -0x54(%ebp),%eax
0889a580 +0x012:  mov    %eax,(%esp)
0889a583 +0x015:  call   08899c62 <_ZN12advancealtar12ActionDefineC1Ev>  ; advancealtar::ActionDefine::ActionDefine()
0889a588 +0x01a:  lea    -0x58(%ebp),%eax
0889a58b +0x01d:  mov    %eax,(%esp)
0889a58e +0x020:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0889a593 +0x025:  movl   $0x1,0x4(%esp)
0889a59b +0x02d:  lea    -0x58(%ebp),%eax
0889a59e +0x030:  mov    %eax,(%esp)
0889a5a1 +0x033:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
0889a5a6 +0x038:  xor    $0x1,%eax
0889a5a9 +0x03b:  test   %al,%al
0889a5ab +0x03d:  je     0889a5bc <+0x4e>
0889a5ad +0x03f:  mov    $0x253,%esi
0889a5b2 +0x044:  mov    $0x0,%ebx
0889a5b7 +0x049:  jmp    0889a8c0 <+0x352>
0889a5bc +0x04e:  movl   $"[/action define]",0x4(%esp)
0889a5c4 +0x056:  lea    -0x58(%ebp),%eax
0889a5c7 +0x059:  mov    %eax,(%esp)
0889a5ca +0x05c:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0889a5cf +0x061:  test   %al,%al
0889a5d1 +0x063:  je     0889a5dd <+0x6f>
0889a5d3 +0x065:  mov    $0x1,%ebx
0889a5d8 +0x06a:  jmp    0889a8c0 <+0x352>
0889a5dd +0x06f:  movl   $"[normal]",0x4(%esp)
0889a5e5 +0x077:  lea    -0x58(%ebp),%eax
0889a5e8 +0x07a:  mov    %eax,(%esp)
0889a5eb +0x07d:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0889a5f0 +0x082:  test   %al,%al
0889a5f2 +0x084:  jne    0889a64c <+0xde>
0889a5f4 +0x086:  movl   $"[named]",0x4(%esp)
0889a5fc +0x08e:  lea    -0x58(%ebp),%eax
0889a5ff +0x091:  mov    %eax,(%esp)
0889a602 +0x094:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0889a607 +0x099:  test   %al,%al
0889a609 +0x09b:  jne    0889a64c <+0xde>
0889a60b +0x09d:  movl   $"[boss]",0x4(%esp)
0889a613 +0x0a5:  lea    -0x58(%ebp),%eax
0889a616 +0x0a8:  mov    %eax,(%esp)
0889a619 +0x0ab:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0889a61e +0x0b0:  test   %al,%al
0889a620 +0x0b2:  jne    0889a64c <+0xde>
0889a622 +0x0b4:  lea    -0x58(%ebp),%eax
0889a625 +0x0b7:  mov    %eax,(%esp)
0889a628 +0x0ba:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0889a62d +0x0bf:  mov    %eax,0x4(%esp)
0889a631 +0x0c3:  movl   $"advancealtar : ActionDefine.Type undefined='%s'\n",(%esp)
0889a638 +0x0ca:  call   0807db60 <_init+0x458>
0889a63d +0x0cf:  mov    $0x267,%esi
0889a642 +0x0d4:  mov    $0x0,%ebx
0889a647 +0x0d9:  jmp    0889a8c0 <+0x352>
0889a64c +0x0de:  lea    -0x41(%ebp),%eax
0889a64f +0x0e1:  mov    %eax,(%esp)
0889a652 +0x0e4:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0889a657 +0x0e9:  mov    %eax,-0x54(%ebp)
0889a65a +0x0ec:  movzbl -0x41(%ebp),%eax
0889a65e +0x0f0:  xor    $0x1,%eax
0889a661 +0x0f3:  test   %al,%al
0889a663 +0x0f5:  je     0889a674 <+0x106>
0889a665 +0x0f7:  mov    $0x26b,%esi
0889a66a +0x0fc:  mov    $0x0,%ebx
0889a66f +0x101:  jmp    0889a8c0 <+0x352>
0889a674 +0x106:  lea    -0x6c(%ebp),%eax
0889a677 +0x109:  mov    %eax,(%esp)
0889a67a +0x10c:  call   0889b978 <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x41>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x41
0889a67f +0x111:  lea    -0x41(%ebp),%eax
0889a682 +0x114:  mov    %eax,(%esp)
0889a685 +0x117:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0889a68a +0x11c:  mov    %eax,-0x6c(%ebp)
0889a68d +0x11f:  movzbl -0x41(%ebp),%eax
0889a691 +0x123:  xor    $0x1,%eax
0889a694 +0x126:  test   %al,%al
0889a696 +0x128:  jne    0889a814 <+0x2a6>
0889a69c +0x12e:  mov    0x8(%ebp),%edx
0889a69f +0x131:  lea    -0x70(%ebp),%eax
0889a6a2 +0x134:  lea    -0x6c(%ebp),%ecx
0889a6a5 +0x137:  mov    %ecx,0x8(%esp)
0889a6a9 +0x13b:  mov    %edx,0x4(%esp)
0889a6ad +0x13f:  mov    %eax,(%esp)
0889a6b0 +0x142:  call   0889c138 <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x801>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x801
0889a6b5 +0x147:  sub    $0x4,%esp
0889a6b8 +0x14a:  mov    0x8(%ebp),%edx
0889a6bb +0x14d:  lea    -0x40(%ebp),%eax
0889a6be +0x150:  mov    %edx,0x4(%esp)
0889a6c2 +0x154:  mov    %eax,(%esp)
0889a6c5 +0x157:  call   0889c164 <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x82d>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x82d
0889a6ca +0x15c:  sub    $0x4,%esp
0889a6cd +0x15f:  lea    -0x40(%ebp),%eax
0889a6d0 +0x162:  mov    %eax,0x4(%esp)
0889a6d4 +0x166:  lea    -0x70(%ebp),%eax
0889a6d7 +0x169:  mov    %eax,(%esp)
0889a6da +0x16c:  call   0889c18a <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x853>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x853
0889a6df +0x171:  test   %al,%al
0889a6e1 +0x173:  je     0889a705 <+0x197>
0889a6e3 +0x175:  mov    -0x6c(%ebp),%eax
0889a6e6 +0x178:  mov    %eax,0x4(%esp)
0889a6ea +0x17c:  movl   $"advancealtar : not found SummonObject Id = %d\n",(%esp)
0889a6f1 +0x183:  call   0807db60 <_init+0x458>
0889a6f6 +0x188:  mov    $0x27a,%esi
0889a6fb +0x18d:  mov    $0x0,%ebx
0889a700 +0x192:  jmp    0889a8c0 <+0x352>
0889a705 +0x197:  lea    -0x70(%ebp),%eax
0889a708 +0x19a:  mov    %eax,(%esp)
0889a70b +0x19d:  call   0889c19e <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x867>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x867
0889a710 +0x1a2:  add    $0x4,%eax
0889a713 +0x1a5:  mov    %eax,-0x68(%ebp)
0889a716 +0x1a8:  lea    -0x41(%ebp),%eax
0889a719 +0x1ab:  mov    %eax,(%esp)
0889a71c +0x1ae:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0889a721 +0x1b3:  mov    %eax,-0x64(%ebp)
0889a724 +0x1b6:  movzbl -0x41(%ebp),%eax
0889a728 +0x1ba:  xor    $0x1,%eax
0889a72b +0x1bd:  test   %al,%al
0889a72d +0x1bf:  je     0889a73e <+0x1d0>
0889a72f +0x1c1:  mov    $0x27f,%esi
0889a734 +0x1c6:  mov    $0x0,%ebx
0889a739 +0x1cb:  jmp    0889a8c0 <+0x352>
0889a73e +0x1d0:  mov    -0x64(%ebp),%eax
0889a741 +0x1d3:  test   %eax,%eax
0889a743 +0x1d5:  jns    0889a767 <+0x1f9>
0889a745 +0x1d7:  mov    -0x64(%ebp),%eax
0889a748 +0x1da:  mov    %eax,0x4(%esp)
0889a74c +0x1de:  movl   $"advancealtar :  action.firstDelayMs %d < 0\n",(%esp)
0889a753 +0x1e5:  call   0807db60 <_init+0x458>
0889a758 +0x1ea:  mov    $0x285,%esi
0889a75d +0x1ef:  mov    $0x0,%ebx
0889a762 +0x1f4:  jmp    0889a8c0 <+0x352>
0889a767 +0x1f9:  lea    -0x41(%ebp),%eax
0889a76a +0x1fc:  mov    %eax,(%esp)
0889a76d +0x1ff:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0889a772 +0x204:  mov    %eax,-0x60(%ebp)
0889a775 +0x207:  movzbl -0x41(%ebp),%eax
0889a779 +0x20b:  xor    $0x1,%eax
0889a77c +0x20e:  test   %al,%al
0889a77e +0x210:  je     0889a78f <+0x221>
0889a780 +0x212:  mov    $0x289,%esi
0889a785 +0x217:  mov    $0x0,%ebx
0889a78a +0x21c:  jmp    0889a8c0 <+0x352>
0889a78f +0x221:  mov    -0x60(%ebp),%eax
0889a792 +0x224:  cmp    $0x1f3,%eax
0889a797 +0x229:  jg     0889a7bb <+0x24d>
0889a799 +0x22b:  mov    -0x60(%ebp),%eax
0889a79c +0x22e:  mov    %eax,0x4(%esp)
0889a7a0 +0x232:  movl   $"advancealtar :  action.nextDelayMs %d < 500\n",(%esp)
0889a7a7 +0x239:  call   0807db60 <_init+0x458>
0889a7ac +0x23e:  mov    $0x290,%esi
0889a7b1 +0x243:  mov    $0x0,%ebx
0889a7b6 +0x248:  jmp    0889a8c0 <+0x352>
0889a7bb +0x24d:  lea    -0x41(%ebp),%eax
0889a7be +0x250:  mov    %eax,(%esp)
0889a7c1 +0x253:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0889a7c6 +0x258:  mov    %eax,-0xc(%ebp)
0889a7c9 +0x25b:  movzbl -0x41(%ebp),%eax
0889a7cd +0x25f:  xor    $0x1,%eax
0889a7d0 +0x262:  test   %al,%al
0889a7d2 +0x264:  je     0889a7e3 <+0x275>
0889a7d4 +0x266:  mov    $0x294,%esi
0889a7d9 +0x26b:  mov    $0x0,%ebx
0889a7de +0x270:  jmp    0889a8c0 <+0x352>
0889a7e3 +0x275:  cmpl   $0x0,-0xc(%ebp)
0889a7e7 +0x279:  jne    0889a7ef <+0x281>
0889a7e9 +0x27b:  movb   $0x0,-0x5c(%ebp)
0889a7ed +0x27f:  jmp    0889a7fa <+0x28c>
0889a7ef +0x281:  movb   $0x1,-0x5c(%ebp)
0889a7f3 +0x285:  mov    -0xc(%ebp),%eax
0889a7f6 +0x288:  mov    %ax,-0x5a(%ebp)
0889a7fa +0x28c:  lea    -0x6c(%ebp),%eax
0889a7fd +0x28f:  mov    %eax,0x4(%esp)
0889a801 +0x293:  lea    -0x54(%ebp),%eax
0889a804 +0x296:  add    $0x4,%eax
0889a807 +0x299:  mov    %eax,(%esp)
0889a80a +0x29c:  call   0889c1ac <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x875>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x875
0889a80f +0x2a1:  jmp    0889a674 <+0x106>
0889a814 +0x2a6:  nop
0889a815 +0x2a7:  lea    -0x20(%ebp),%eax
0889a818 +0x2aa:  lea    -0x54(%ebp),%edx
0889a81b +0x2ad:  mov    %edx,0x8(%esp)
0889a81f +0x2b1:  lea    -0x54(%ebp),%edx
0889a822 +0x2b4:  mov    %edx,0x4(%esp)
0889a826 +0x2b8:  mov    %eax,(%esp)
0889a829 +0x2bb:  call   0889c21f <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x8e8>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x8e8
0889a82e +0x2c0:  sub    $0x4,%esp
0889a831 +0x2c3:  lea    -0x20(%ebp),%eax
0889a834 +0x2c6:  mov    %eax,0x4(%esp)
0889a838 +0x2ca:  lea    -0x34(%ebp),%eax
0889a83b +0x2cd:  mov    %eax,(%esp)
0889a83e +0x2d0:  call   0889c28e <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x957>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x957
0889a843 +0x2d5:  mov    0x8(%ebp),%eax
0889a846 +0x2d8:  lea    0x18(%eax),%ecx
0889a849 +0x2db:  lea    -0x3c(%ebp),%eax
0889a84c +0x2de:  lea    -0x34(%ebp),%edx
0889a84f +0x2e1:  mov    %edx,0x8(%esp)
0889a853 +0x2e5:  mov    %ecx,0x4(%esp)
0889a857 +0x2e9:  mov    %eax,(%esp)
0889a85a +0x2ec:  call   0889c2c8 <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x991>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x991
0889a85f +0x2f1:  sub    $0x4,%esp
0889a862 +0x2f4:  lea    -0x34(%ebp),%eax
0889a865 +0x2f7:  mov    %eax,(%esp)
0889a868 +0x2fa:  call   0889ba22 <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0xeb>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0xeb
0889a86d +0x2ff:  jmp    0889a899 <+0x32b>
0889a86f +0x301:  mov    %edx,%ebx
0889a871 +0x303:  mov    %eax,%esi
0889a873 +0x305:  lea    -0x34(%ebp),%eax
0889a876 +0x308:  mov    %eax,(%esp)
0889a879 +0x30b:  call   0889ba22 <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0xeb>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0xeb
0889a87e +0x310:  mov    %esi,%eax
0889a880 +0x312:  mov    %ebx,%edx
0889a882 +0x314:  jmp    0889a884 <+0x316>
0889a884 +0x316:  mov    %edx,%ebx
0889a886 +0x318:  mov    %eax,%esi
0889a888 +0x31a:  lea    -0x20(%ebp),%eax
0889a88b +0x31d:  mov    %eax,(%esp)
0889a88e +0x320:  call   0889ba0c <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0xd5>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0xd5
0889a893 +0x325:  mov    %esi,%eax
0889a895 +0x327:  mov    %ebx,%edx
0889a897 +0x329:  jmp    0889a8ab <+0x33d>
0889a899 +0x32b:  lea    -0x20(%ebp),%eax
0889a89c +0x32e:  mov    %eax,(%esp)
0889a89f +0x331:  call   0889ba0c <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0xd5>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0xd5
0889a8a4 +0x336:  mov    $0x2,%ebx
0889a8a9 +0x33b:  jmp    0889a8c0 <+0x352>
0889a8ab +0x33d:  mov    %edx,%ebx
0889a8ad +0x33f:  mov    %eax,%esi
0889a8af +0x341:  lea    -0x58(%ebp),%eax
0889a8b2 +0x344:  mov    %eax,(%esp)
0889a8b5 +0x347:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0889a8ba +0x34c:  mov    %esi,%eax
0889a8bc +0x34e:  mov    %ebx,%edx
0889a8be +0x350:  jmp    0889a8eb <+0x37d>
0889a8c0 +0x352:  lea    -0x58(%ebp),%eax
0889a8c3 +0x355:  mov    %eax,(%esp)
0889a8c6 +0x358:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0889a8cb +0x35d:  test   %ebx,%ebx
0889a8cd +0x35f:  je     0889a8d6 <+0x368>
0889a8cf +0x361:  cmp    $0x1,%ebx
0889a8d2 +0x364:  je     0889a8dd <+0x36f>
0889a8d4 +0x366:  jmp    0889a8e4 <+0x376>
0889a8d6 +0x368:  mov    $0x0,%ebx
0889a8db +0x36d:  jmp    0889a906 <+0x398>
0889a8dd +0x36f:  mov    $0x1,%ebx
0889a8e2 +0x374:  jmp    0889a906 <+0x398>
0889a8e4 +0x376:  mov    $0x2,%ebx
0889a8e9 +0x37b:  jmp    0889a906 <+0x398>
0889a8eb +0x37d:  mov    %edx,%ebx
0889a8ed +0x37f:  mov    %eax,%esi
0889a8ef +0x381:  lea    -0x54(%ebp),%eax
0889a8f2 +0x384:  mov    %eax,(%esp)
0889a8f5 +0x387:  call   08899c82 <_ZN12advancealtar12ActionDefineD1Ev>  ; advancealtar::ActionDefine::~ActionDefine()
0889a8fa +0x38c:  mov    %esi,%eax
0889a8fc +0x38e:  mov    %ebx,%edx
0889a8fe +0x390:  mov    %eax,(%esp)
0889a901 +0x393:  call   08ae3750 <_Unwind_Resume>
0889a906 +0x398:  lea    -0x54(%ebp),%eax
0889a909 +0x39b:  mov    %eax,(%esp)
0889a90c +0x39e:  call   08899c82 <_ZN12advancealtar12ActionDefineD1Ev>  ; advancealtar::ActionDefine::~ActionDefine()
0889a911 +0x3a3:  test   %ebx,%ebx
0889a913 +0x3a5:  je     0889a923 <+0x3b5>
0889a915 +0x3a7:  cmp    $0x1,%ebx
0889a918 +0x3aa:  jne    0889a57c <+0xe>
0889a91e +0x3b0:  mov    $0x0,%esi
0889a923 +0x3b5:  mov    %esi,%eax
0889a925 +0x3b7:  lea    -0x8(%ebp),%esp
0889a928 +0x3ba:  add    $0x0,%esp
0889a92b +0x3bd:  pop    %ebx
0889a92c +0x3be:  pop    %esi
0889a92d +0x3bf:  pop    %ebp
0889a92e +0x3c0:  ret
0889a92f +0x3c1:  nop
```

## 反编译 C

```c
// advancealtar::StageTimeLineParameter::importActionDefine @ 0x889a56e

/* advancealtar::StageTimeLineParameter::importActionDefine() */

undefined4 advancealtar::StageTimeLineParameter::importActionDefine(void)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 unaff_ESI;
  undefined4 *puVar5;
  _Rb_tree_iterator<std::pair<int_const,advancealtar::_SummonObject>> local_74 [4];
  undefined4 local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined1 local_60;
  undefined2 local_5e;
  string local_5c;
  undefined4 local_58;
  vector<advancealtar::_Action,std::allocator<advancealtar::_Action>> avStack_54 [15];
  bool local_45;
  map<int,advancealtar::_SummonObject,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_SummonObject>>>
  local_44 [4];
  pair local_40 [8];
  pair<int_const,advancealtar::ActionDefine> local_38 [20];
  pair<int,advancealtar::ActionDefine> local_24 [20];
  int local_10;
  
  local_45 = false;
  do {
    ActionDefine::ActionDefine((ActionDefine *)&local_58);
                    /* try { // try from 0889a58e to 0889a592 has its CatchHandler @ 0889a8eb */
    std::string::string((string *)&local_5c);
                    /* try { // try from 0889a5a1 to 0889a82d has its CatchHandler @ 0889a8ab */
    cVar1 = ScanType((string *)&local_5c,true);
    if (cVar1 == '\x01') {
      bVar2 = std::operator==(&local_5c,"[/action define]");
      if (bVar2) {
        iVar4 = 1;
      }
      else {
        bVar2 = std::operator==(&local_5c,"[normal]");
        if (((bVar2) || (bVar2 = std::operator==(&local_5c,"[named]"), bVar2)) ||
           (bVar2 = std::operator==(&local_5c,"[boss]"), bVar2)) {
          local_58 = ScanInt(&local_45);
          if (local_45 == true) {
            while( true ) {
              _Action::_Action((_Action *)&local_70);
              local_70 = ScanInt(&local_45);
              if (local_45 != true) break;
              puVar5 = &local_70;
              std::
              map<int,advancealtar::_SummonObject,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_SummonObject>>>
              ::find((int *)local_74);
              std::
              map<int,advancealtar::_SummonObject,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_SummonObject>>>
              ::end(local_44);
              cVar1 = std::_Rb_tree_iterator<std::pair<int_const,advancealtar::_SummonObject>>::
                      operator==(local_74,(_Rb_tree_iterator *)local_44);
              if (cVar1 != '\0') {
                printf("advancealtar : not found SummonObject Id = %d\n",local_70,puVar5);
                unaff_ESI = 0x27a;
                iVar4 = 0;
                goto LAB_0889a8c0;
              }
              local_6c = std::_Rb_tree_iterator<std::pair<int_const,advancealtar::_SummonObject>>::
                         operator->(local_74);
              local_6c = local_6c + 4;
              local_68 = ScanInt(&local_45);
              if (local_45 != true) {
                unaff_ESI = 0x27f;
                iVar4 = 0;
                goto LAB_0889a8c0;
              }
              if (local_68 < 0) {
                printf("advancealtar :  action.firstDelayMs %d < 0\n",local_68);
                unaff_ESI = 0x285;
                iVar4 = 0;
                goto LAB_0889a8c0;
              }
              local_64 = ScanInt(&local_45);
              if (local_45 != true) {
                unaff_ESI = 0x289;
                iVar4 = 0;
                goto LAB_0889a8c0;
              }
              if (local_64 < 500) {
                printf("advancealtar :  action.nextDelayMs %d < 500\n",local_64);
                unaff_ESI = 0x290;
                iVar4 = 0;
                goto LAB_0889a8c0;
              }
              local_10 = ScanInt(&local_45);
              if (local_45 != true) {
                unaff_ESI = 0x294;
                iVar4 = 0;
                goto LAB_0889a8c0;
              }
              local_60 = local_10 != 0;
              if ((bool)local_60) {
                local_5e = (undefined2)local_10;
              }
              std::vector<advancealtar::_Action,std::allocator<advancealtar::_Action>>::push_back
                        (avStack_54,(_Action *)&local_70);
            }
            std::make_pair<int&,advancealtar::ActionDefine&>
                      ((int *)local_24,(ActionDefine *)&local_58);
                    /* try { // try from 0889a83e to 0889a842 has its CatchHandler @ 0889a884 */
            std::pair<int_const,advancealtar::ActionDefine>::pair<int,advancealtar::ActionDefine>
                      (local_38,local_24);
                    /* try { // try from 0889a85a to 0889a85e has its CatchHandler @ 0889a86f */
            std::
            map<int,advancealtar::ActionDefine,std::less<int>,std::allocator<std::pair<int_const,advancealtar::ActionDefine>>>
            ::insert(local_40);
                    /* try { // try from 0889a868 to 0889a86c has its CatchHandler @ 0889a884 */
            std::pair<int_const,advancealtar::ActionDefine>::~pair(local_38);
                    /* try { // try from 0889a89f to 0889a8a3 has its CatchHandler @ 0889a8ab */
            std::pair<int,advancealtar::ActionDefine>::~pair(local_24);
            iVar4 = 2;
          }
          else {
            unaff_ESI = 0x26b;
            iVar4 = 0;
          }
        }
        else {
          uVar3 = std::string::c_str((string *)&local_5c);
          printf("advancealtar : ActionDefine.Type undefined=\'%s\'\n",uVar3);
          unaff_ESI = 0x267;
          iVar4 = 0;
        }
      }
    }
    else {
      unaff_ESI = 0x253;
      iVar4 = 0;
    }
LAB_0889a8c0:
                    /* try { // try from 0889a8c6 to 0889a8ca has its CatchHandler @ 0889a8eb */
    std::string::~string((string *)&local_5c);
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else if (iVar4 == 1) {
      iVar4 = 1;
    }
    else {
      iVar4 = 2;
    }
    ActionDefine::~ActionDefine((ActionDefine *)&local_58);
    if (iVar4 == 0) {
      return unaff_ESI;
    }
    if (iVar4 == 1) {
      return 0;
    }
  } while( true );
}
```
