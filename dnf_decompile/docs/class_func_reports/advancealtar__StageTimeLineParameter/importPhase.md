# importPhase

`_ZN12advancealtar22StageTimeLineParameter11importPhaseERNS_8TimeLineE`

`advancealtar::StageTimeLineParameter::importPhase(advancealtar::TimeLine&)`

| 类 | 地址 |
|---|---|
| `advancealtar::StageTimeLineParameter` | `0x0889a930` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0889a930  _ZN12advancealtar22StageTimeLineParameter11importPhaseERNS_8TimeLineE
#           advancealtar::StageTimeLineParameter::importPhase(advancealtar::TimeLine&)
# range [0x0889a930, 0x0889aca9]
0889a930 +0x000:  push   %ebp
0889a931 +0x001:  mov    %esp,%ebp
0889a933 +0x003:  push   %esi
0889a934 +0x004:  push   %ebx
0889a935 +0x005:  sub    $0x50,%esp
0889a938 +0x008:  movb   $0x0,-0x9(%ebp)
0889a93c +0x00c:  jmp    0889a93f <+0xf>
0889a93e +0x00e:  nop
0889a93f +0x00f:  lea    -0x10(%ebp),%eax
0889a942 +0x012:  mov    %eax,(%esp)
0889a945 +0x015:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0889a94a +0x01a:  movl   $0x1,0x4(%esp)
0889a952 +0x022:  lea    -0x10(%ebp),%eax
0889a955 +0x025:  mov    %eax,(%esp)
0889a958 +0x028:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
0889a95d +0x02d:  xor    $0x1,%eax
0889a960 +0x030:  test   %al,%al
0889a962 +0x032:  je     0889a973 <+0x43>
0889a964 +0x034:  mov    $0x2b1,%ebx
0889a969 +0x039:  mov    $0x0,%esi
0889a96e +0x03e:  jmp    0889ac8e <+0x35e>
0889a973 +0x043:  movl   $"[/time line]",0x4(%esp)
0889a97b +0x04b:  lea    -0x10(%ebp),%eax
0889a97e +0x04e:  mov    %eax,(%esp)
0889a981 +0x051:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0889a986 +0x056:  test   %al,%al
0889a988 +0x058:  je     0889a999 <+0x69>
0889a98a +0x05a:  mov    $0x0,%ebx
0889a98f +0x05f:  mov    $0x0,%esi
0889a994 +0x064:  jmp    0889ac8e <+0x35e>
0889a999 +0x069:  movl   $"[phase]",0x4(%esp)
0889a9a1 +0x071:  lea    -0x10(%ebp),%eax
0889a9a4 +0x074:  mov    %eax,(%esp)
0889a9a7 +0x077:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0889a9ac +0x07c:  test   %al,%al
0889a9ae +0x07e:  je     0889ac6c <+0x33c>
0889a9b4 +0x084:  lea    -0x24(%ebp),%eax
0889a9b7 +0x087:  mov    %eax,(%esp)
0889a9ba +0x08a:  call   08899cb8 <_ZN12advancealtar5PhaseC1Ev>  ; advancealtar::Phase::Phase()
0889a9bf +0x08f:  lea    -0x28(%ebp),%eax
0889a9c2 +0x092:  mov    %eax,(%esp)
0889a9c5 +0x095:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0889a9ca +0x09a:  movl   $0x1,0x4(%esp)
0889a9d2 +0x0a2:  lea    -0x28(%ebp),%eax
0889a9d5 +0x0a5:  mov    %eax,(%esp)
0889a9d8 +0x0a8:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
0889a9dd +0x0ad:  xor    $0x1,%eax
0889a9e0 +0x0b0:  test   %al,%al
0889a9e2 +0x0b2:  je     0889a9f3 <+0xc3>
0889a9e4 +0x0b4:  mov    $0x2be,%ebx
0889a9e9 +0x0b9:  mov    $0x0,%esi
0889a9ee +0x0be:  jmp    0889ac08 <+0x2d8>
0889a9f3 +0x0c3:  movl   $"[/phase]",0x4(%esp)
0889a9fb +0x0cb:  lea    -0x28(%ebp),%eax
0889a9fe +0x0ce:  mov    %eax,(%esp)
0889aa01 +0x0d1:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0889aa06 +0x0d6:  test   %al,%al
0889aa08 +0x0d8:  je     0889aa14 <+0xe4>
0889aa0a +0x0da:  mov    $0x1,%esi
0889aa0f +0x0df:  jmp    0889ac08 <+0x2d8>
0889aa14 +0x0e4:  movl   $"[duration]",0x4(%esp)
0889aa1c +0x0ec:  lea    -0x28(%ebp),%eax
0889aa1f +0x0ef:  mov    %eax,(%esp)
0889aa22 +0x0f2:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0889aa27 +0x0f7:  test   %al,%al
0889aa29 +0x0f9:  je     0889aa57 <+0x127>
0889aa2b +0x0fb:  lea    -0x9(%ebp),%eax
0889aa2e +0x0fe:  mov    %eax,(%esp)
0889aa31 +0x101:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0889aa36 +0x106:  mov    %eax,-0x24(%ebp)
0889aa39 +0x109:  movzbl -0x9(%ebp),%eax
0889aa3d +0x10d:  xor    $0x1,%eax
0889aa40 +0x110:  test   %al,%al
0889aa42 +0x112:  je     0889abec <+0x2bc>
0889aa48 +0x118:  mov    $0x2c6,%ebx
0889aa4d +0x11d:  mov    $0x0,%esi
0889aa52 +0x122:  jmp    0889ac08 <+0x2d8>
0889aa57 +0x127:  movl   $"[type]",0x4(%esp)
0889aa5f +0x12f:  lea    -0x28(%ebp),%eax
0889aa62 +0x132:  mov    %eax,(%esp)
0889aa65 +0x135:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0889aa6a +0x13a:  test   %al,%al
0889aa6c +0x13c:  je     0889ab46 <+0x216>
0889aa72 +0x142:  lea    -0x2c(%ebp),%eax
0889aa75 +0x145:  mov    %eax,(%esp)
0889aa78 +0x148:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0889aa7d +0x14d:  lea    -0x2c(%ebp),%eax
0889aa80 +0x150:  mov    %eax,(%esp)
0889aa83 +0x153:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
0889aa88 +0x158:  xor    $0x1,%eax
0889aa8b +0x15b:  test   %al,%al
0889aa8d +0x15d:  je     0889aa9e <+0x16e>
0889aa8f +0x15f:  mov    $0x2cc,%ebx
0889aa94 +0x164:  mov    $0x0,%esi
0889aa99 +0x169:  jmp    0889ab29 <+0x1f9>
0889aa9e +0x16e:  movl   $"normal",0x4(%esp)
0889aaa6 +0x176:  lea    -0x2c(%ebp),%eax
0889aaa9 +0x179:  mov    %eax,(%esp)
0889aaac +0x17c:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0889aab1 +0x181:  test   %al,%al
0889aab3 +0x183:  je     0889aabe <+0x18e>
0889aab5 +0x185:  movl   $0x0,-0x20(%ebp)
0889aabc +0x18c:  jmp    0889ab0a <+0x1da>
0889aabe +0x18e:  movl   $"named",0x4(%esp)
0889aac6 +0x196:  lea    -0x2c(%ebp),%eax
0889aac9 +0x199:  mov    %eax,(%esp)
0889aacc +0x19c:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0889aad1 +0x1a1:  test   %al,%al
0889aad3 +0x1a3:  je     0889aade <+0x1ae>
0889aad5 +0x1a5:  movl   $0x1,-0x20(%ebp)
0889aadc +0x1ac:  jmp    0889ab0a <+0x1da>
0889aade +0x1ae:  movl   $"boss",0x4(%esp)
0889aae6 +0x1b6:  lea    -0x2c(%ebp),%eax
0889aae9 +0x1b9:  mov    %eax,(%esp)
0889aaec +0x1bc:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0889aaf1 +0x1c1:  test   %al,%al
0889aaf3 +0x1c3:  je     0889aafe <+0x1ce>
0889aaf5 +0x1c5:  movl   $0x2,-0x20(%ebp)
0889aafc +0x1cc:  jmp    0889ab0a <+0x1da>
0889aafe +0x1ce:  mov    $0x2dc,%ebx
0889ab03 +0x1d3:  mov    $0x0,%esi
0889ab08 +0x1d8:  jmp    0889ab29 <+0x1f9>
0889ab0a +0x1da:  mov    $0x1,%esi
0889ab0f +0x1df:  jmp    0889ab29 <+0x1f9>
0889ab11 +0x1e1:  mov    %edx,%ebx
0889ab13 +0x1e3:  mov    %eax,%esi
0889ab15 +0x1e5:  lea    -0x2c(%ebp),%eax
0889ab18 +0x1e8:  mov    %eax,(%esp)
0889ab1b +0x1eb:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0889ab20 +0x1f0:  mov    %esi,%eax
0889ab22 +0x1f2:  mov    %ebx,%edx
0889ab24 +0x1f4:  jmp    0889abf3 <+0x2c3>
0889ab29 +0x1f9:  lea    -0x2c(%ebp),%eax
0889ab2c +0x1fc:  mov    %eax,(%esp)
0889ab2f +0x1ff:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0889ab34 +0x204:  test   %esi,%esi
0889ab36 +0x206:  jne    0889abec <+0x2bc>
0889ab3c +0x20c:  mov    $0x0,%esi
0889ab41 +0x211:  jmp    0889ac08 <+0x2d8>
0889ab46 +0x216:  movl   $"[action assign]",0x4(%esp)
0889ab4e +0x21e:  lea    -0x28(%ebp),%eax
0889ab51 +0x221:  mov    %eax,(%esp)
0889ab54 +0x224:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0889ab59 +0x229:  test   %al,%al
0889ab5b +0x22b:  je     0889abec <+0x2bc>
0889ab61 +0x231:  lea    -0x3c(%ebp),%eax
0889ab64 +0x234:  mov    %eax,(%esp)
0889ab67 +0x237:  call   0889b99c <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x65>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x65
0889ab6c +0x23c:  lea    -0x9(%ebp),%eax
0889ab6f +0x23f:  mov    %eax,(%esp)
0889ab72 +0x242:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0889ab77 +0x247:  mov    %eax,-0x3c(%ebp)
0889ab7a +0x24a:  movzbl -0x9(%ebp),%eax
0889ab7e +0x24e:  xor    $0x1,%eax
0889ab81 +0x251:  test   %al,%al
0889ab83 +0x253:  jne    0889abeb <+0x2bb>
0889ab85 +0x255:  lea    -0x9(%ebp),%eax
0889ab88 +0x258:  mov    %eax,(%esp)
0889ab8b +0x25b:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0889ab90 +0x260:  mov    %ax,-0x34(%ebp)
0889ab94 +0x264:  movzbl -0x9(%ebp),%eax
0889ab98 +0x268:  xor    $0x1,%eax
0889ab9b +0x26b:  test   %al,%al
0889ab9d +0x26d:  je     0889abab <+0x27b>
0889ab9f +0x26f:  mov    $0x2ed,%ebx
0889aba4 +0x274:  mov    $0x0,%esi
0889aba9 +0x279:  jmp    0889ac08 <+0x2d8>
0889abab +0x27b:  lea    -0x9(%ebp),%eax
0889abae +0x27e:  mov    %eax,(%esp)
0889abb1 +0x281:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0889abb6 +0x286:  mov    %ax,-0x32(%ebp)
0889abba +0x28a:  movzbl -0x9(%ebp),%eax
0889abbe +0x28e:  xor    $0x1,%eax
0889abc1 +0x291:  test   %al,%al
0889abc3 +0x293:  je     0889abd1 <+0x2a1>
0889abc5 +0x295:  mov    $0x2f0,%ebx
0889abca +0x29a:  mov    $0x0,%esi
0889abcf +0x29f:  jmp    0889ac08 <+0x2d8>
0889abd1 +0x2a1:  lea    -0x3c(%ebp),%eax
0889abd4 +0x2a4:  mov    %eax,0x4(%esp)
0889abd8 +0x2a8:  lea    -0x24(%ebp),%eax
0889abdb +0x2ab:  add    $0x8,%eax
0889abde +0x2ae:  mov    %eax,(%esp)
0889abe1 +0x2b1:  call   0889c2f4 <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x9bd>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x9bd
0889abe6 +0x2b6:  jmp    0889ab61 <+0x231>
0889abeb +0x2bb:  nop
0889abec +0x2bc:  mov    $0x2,%esi
0889abf1 +0x2c1:  jmp    0889ac08 <+0x2d8>
0889abf3 +0x2c3:  mov    %edx,%ebx
0889abf5 +0x2c5:  mov    %eax,%esi
0889abf7 +0x2c7:  lea    -0x28(%ebp),%eax
0889abfa +0x2ca:  mov    %eax,(%esp)
0889abfd +0x2cd:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0889ac02 +0x2d2:  mov    %esi,%eax
0889ac04 +0x2d4:  mov    %ebx,%edx
0889ac06 +0x2d6:  jmp    0889ac41 <+0x311>
0889ac08 +0x2d8:  lea    -0x28(%ebp),%eax
0889ac0b +0x2db:  mov    %eax,(%esp)
0889ac0e +0x2de:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0889ac13 +0x2e3:  test   %esi,%esi
0889ac15 +0x2e5:  je     0889ac21 <+0x2f1>
0889ac17 +0x2e7:  cmp    $0x1,%esi
0889ac1a +0x2ea:  je     0889ac28 <+0x2f8>
0889ac1c +0x2ec:  jmp    0889a9bf <+0x8f>
0889ac21 +0x2f1:  mov    $0x0,%esi
0889ac26 +0x2f6:  jmp    0889ac56 <+0x326>
0889ac28 +0x2f8:  mov    0x8(%ebp),%eax
0889ac2b +0x2fb:  lea    -0x24(%ebp),%edx
0889ac2e +0x2fe:  mov    %edx,0x4(%esp)
0889ac32 +0x302:  mov    %eax,(%esp)
0889ac35 +0x305:  call   0889c368 <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0xa31>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0xa31
0889ac3a +0x30a:  mov    $0x1,%esi
0889ac3f +0x30f:  jmp    0889ac56 <+0x326>
0889ac41 +0x311:  mov    %edx,%ebx
0889ac43 +0x313:  mov    %eax,%esi
0889ac45 +0x315:  lea    -0x24(%ebp),%eax
0889ac48 +0x318:  mov    %eax,(%esp)
0889ac4b +0x31b:  call   08899ce2 <_ZN12advancealtar5PhaseD1Ev>  ; advancealtar::Phase::~Phase()
0889ac50 +0x320:  mov    %esi,%eax
0889ac52 +0x322:  mov    %ebx,%edx
0889ac54 +0x324:  jmp    0889ac73 <+0x343>
0889ac56 +0x326:  lea    -0x24(%ebp),%eax
0889ac59 +0x329:  mov    %eax,(%esp)
0889ac5c +0x32c:  call   08899ce2 <_ZN12advancealtar5PhaseD1Ev>  ; advancealtar::Phase::~Phase()
0889ac61 +0x331:  test   %esi,%esi
0889ac63 +0x333:  jne    0889ac6c <+0x33c>
0889ac65 +0x335:  mov    $0x0,%esi
0889ac6a +0x33a:  jmp    0889ac8e <+0x35e>
0889ac6c +0x33c:  mov    $0x1,%esi
0889ac71 +0x341:  jmp    0889ac8e <+0x35e>
0889ac73 +0x343:  mov    %edx,%ebx
0889ac75 +0x345:  mov    %eax,%esi
0889ac77 +0x347:  lea    -0x10(%ebp),%eax
0889ac7a +0x34a:  mov    %eax,(%esp)
0889ac7d +0x34d:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0889ac82 +0x352:  mov    %esi,%eax
0889ac84 +0x354:  mov    %ebx,%edx
0889ac86 +0x356:  mov    %eax,(%esp)
0889ac89 +0x359:  call   08ae3750 <_Unwind_Resume>
0889ac8e +0x35e:  lea    -0x10(%ebp),%eax
0889ac91 +0x361:  mov    %eax,(%esp)
0889ac94 +0x364:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0889ac99 +0x369:  test   %esi,%esi
0889ac9b +0x36b:  jne    0889a93e <+0xe>
0889aca1 +0x371:  mov    %ebx,%eax
0889aca3 +0x373:  add    $0x50,%esp
0889aca6 +0x376:  pop    %ebx
0889aca7 +0x377:  pop    %esi
0889aca8 +0x378:  pop    %ebp
0889aca9 +0x379:  ret
```

## 反编译 C

```c
// advancealtar::StageTimeLineParameter::importPhase @ 0x889a930

/* advancealtar::StageTimeLineParameter::importPhase(advancealtar::TimeLine&) */

undefined4 advancealtar::StageTimeLineParameter::importPhase(TimeLine *param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 unaff_EBX;
  int iVar3;
  undefined4 local_40 [2];
  undefined2 local_38;
  undefined2 local_36;
  string local_30;
  string local_2c;
  undefined4 local_28;
  undefined4 local_24;
  vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>> avStack_20 [12];
  string local_14;
  bool local_d;
  
  local_d = false;
  do {
    std::string::string((string *)&local_14);
                    /* try { // try from 0889a958 to 0889a9be has its CatchHandler @ 0889ac73 */
    cVar1 = ScanType((string *)&local_14,true);
    if (cVar1 == '\x01') {
      bVar2 = std::operator==(&local_14,"[/time line]");
      if (bVar2) {
        unaff_EBX = 0;
        bVar2 = false;
      }
      else {
        bVar2 = std::operator==(&local_14,"[phase]");
        if (bVar2) {
          Phase::Phase((Phase *)&local_28);
          do {
                    /* try { // try from 0889a9c5 to 0889a9c9 has its CatchHandler @ 0889ac41 */
            std::string::string((string *)&local_2c);
                    /* try { // try from 0889a9d8 to 0889aa7c has its CatchHandler @ 0889abf3 */
            cVar1 = ScanType((string *)&local_2c,true);
            if (cVar1 == '\x01') {
              bVar2 = std::operator==(&local_2c,"[/phase]");
              if (bVar2) {
                iVar3 = 1;
              }
              else {
                bVar2 = std::operator==(&local_2c,"[duration]");
                if (bVar2) {
                  local_28 = ScanInt(&local_d);
                  if (local_d != true) {
                    unaff_EBX = 0x2c6;
                    iVar3 = 0;
                    goto LAB_0889ac08;
                  }
                }
                else {
                  bVar2 = std::operator==(&local_2c,"[type]");
                  if (bVar2) {
                    std::string::string((string *)&local_30);
                    /* try { // try from 0889aa83 to 0889aaf0 has its CatchHandler @ 0889ab11 */
                    cVar1 = ScanStr((string *)&local_30);
                    if (cVar1 == '\x01') {
                      bVar2 = std::operator==(&local_30,"normal");
                      if (bVar2) {
                        local_24 = 0;
                      }
                      else {
                        bVar2 = std::operator==(&local_30,"named");
                        if (bVar2) {
                          local_24 = 1;
                        }
                        else {
                          bVar2 = std::operator==(&local_30,"boss");
                          if (!bVar2) {
                            unaff_EBX = 0x2dc;
                            bVar2 = false;
                            goto LAB_0889ab29;
                          }
                          local_24 = 2;
                        }
                      }
                      bVar2 = true;
                    }
                    else {
                      unaff_EBX = 0x2cc;
                      bVar2 = false;
                    }
LAB_0889ab29:
                    /* try { // try from 0889ab2f to 0889abe5 has its CatchHandler @ 0889abf3 */
                    std::string::~string((string *)&local_30);
                    if (!bVar2) {
                      iVar3 = 0;
                      goto LAB_0889ac08;
                    }
                  }
                  else {
                    bVar2 = std::operator==(&local_2c,"[action assign]");
                    if (bVar2) {
                      while( true ) {
                        _ActionAssign::_ActionAssign((_ActionAssign *)local_40);
                        local_40[0] = ScanInt(&local_d);
                        if (local_d != true) break;
                        local_38 = ScanInt(&local_d);
                        if (local_d != true) {
                          unaff_EBX = 0x2ed;
                          iVar3 = 0;
                          goto LAB_0889ac08;
                        }
                        local_36 = ScanInt(&local_d);
                        if (local_d != true) {
                          unaff_EBX = 0x2f0;
                          iVar3 = 0;
                          goto LAB_0889ac08;
                        }
                        std::
                        vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>
                        ::push_back(avStack_20,(_ActionAssign *)local_40);
                      }
                    }
                  }
                }
                iVar3 = 2;
              }
            }
            else {
              unaff_EBX = 0x2be;
              iVar3 = 0;
            }
LAB_0889ac08:
                    /* try { // try from 0889ac0e to 0889ac39 has its CatchHandler @ 0889ac41 */
            std::string::~string((string *)&local_2c);
            if (iVar3 == 0) {
              bVar2 = false;
              goto LAB_0889ac56;
            }
          } while (iVar3 != 1);
          std::vector<advancealtar::Phase,std::allocator<advancealtar::Phase>>::push_back
                    ((vector<advancealtar::Phase,std::allocator<advancealtar::Phase>> *)param_1,
                     (Phase *)&local_28);
          bVar2 = true;
LAB_0889ac56:
                    /* try { // try from 0889ac5c to 0889ac60 has its CatchHandler @ 0889ac73 */
          Phase::~Phase((Phase *)&local_28);
          if (!bVar2) {
            bVar2 = false;
            goto LAB_0889ac8e;
          }
        }
        bVar2 = true;
      }
    }
    else {
      unaff_EBX = 0x2b1;
      bVar2 = false;
    }
LAB_0889ac8e:
    std::string::~string((string *)&local_14);
    if (!bVar2) {
      return unaff_EBX;
    }
  } while( true );
}
```
