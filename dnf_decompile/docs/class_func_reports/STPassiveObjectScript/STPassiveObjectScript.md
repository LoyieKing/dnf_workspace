# STPassiveObjectScript

`_ZN21STPassiveObjectScriptC1Ev`

`STPassiveObjectScript::STPassiveObjectScript()`

| 类 | 地址 |
|---|---|
| `STPassiveObjectScript` | `0x08a3a538` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a3a538  _ZN21STPassiveObjectScriptC1Ev
#           STPassiveObjectScript::STPassiveObjectScript()
# range [0x08a3a538, 0x08a3a9e5]
08a3a538 +0x000:  push   %ebp
08a3a539 +0x001:  mov    %esp,%ebp
08a3a53b +0x003:  push   %esi
08a3a53c +0x004:  push   %ebx
08a3a53d +0x005:  sub    $0x10,%esp
08a3a540 +0x008:  mov    0x8(%ebp),%eax
08a3a543 +0x00b:  add    $0x4,%eax
08a3a546 +0x00e:  mov    %eax,(%esp)
08a3a549 +0x011:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08a3a54e +0x016:  mov    0x8(%ebp),%eax
08a3a551 +0x019:  add    $0x8,%eax
08a3a554 +0x01c:  mov    %eax,(%esp)
08a3a557 +0x01f:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08a3a55c +0x024:  mov    0x8(%ebp),%eax
08a3a55f +0x027:  add    $0x28,%eax
08a3a562 +0x02a:  mov    %eax,(%esp)
08a3a565 +0x02d:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
08a3a56a +0x032:  mov    0x8(%ebp),%eax
08a3a56d +0x035:  add    $0x34,%eax
08a3a570 +0x038:  mov    %eax,(%esp)
08a3a573 +0x03b:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08a3a578 +0x040:  mov    0x8(%ebp),%eax
08a3a57b +0x043:  add    $0x38,%eax
08a3a57e +0x046:  mov    %eax,(%esp)
08a3a581 +0x049:  call   080ccf60 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dad>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dad
08a3a586 +0x04e:  mov    0x8(%ebp),%eax
08a3a589 +0x051:  add    $0x44,%eax
08a3a58c +0x054:  mov    %eax,(%esp)
08a3a58f +0x057:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08a3a594 +0x05c:  mov    0x8(%ebp),%eax
08a3a597 +0x05f:  add    $0x48,%eax
08a3a59a +0x062:  mov    %eax,(%esp)
08a3a59d +0x065:  call   080ccf60 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dad>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dad
08a3a5a2 +0x06a:  mov    0x8(%ebp),%eax
08a3a5a5 +0x06d:  add    $0x54,%eax
08a3a5a8 +0x070:  mov    %eax,(%esp)
08a3a5ab +0x073:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08a3a5b0 +0x078:  mov    0x8(%ebp),%eax
08a3a5b3 +0x07b:  add    $0x64,%eax
08a3a5b6 +0x07e:  mov    %eax,(%esp)
08a3a5b9 +0x081:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08a3a5be +0x086:  mov    0x8(%ebp),%eax
08a3a5c1 +0x089:  add    $0x68,%eax
08a3a5c4 +0x08c:  mov    %eax,(%esp)
08a3a5c7 +0x08f:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08a3a5cc +0x094:  mov    0x8(%ebp),%eax
08a3a5cf +0x097:  add    $0x6c,%eax
08a3a5d2 +0x09a:  mov    %eax,(%esp)
08a3a5d5 +0x09d:  call   080ccf60 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dad>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dad
08a3a5da +0x0a2:  mov    0x8(%ebp),%eax
08a3a5dd +0x0a5:  add    $0x78,%eax
08a3a5e0 +0x0a8:  mov    %eax,(%esp)
08a3a5e3 +0x0ab:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
08a3a5e8 +0x0b0:  mov    0x8(%ebp),%eax
08a3a5eb +0x0b3:  add    $0x84,%eax
08a3a5f0 +0x0b8:  mov    %eax,(%esp)
08a3a5f3 +0x0bb:  call   080ccf60 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dad>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dad
08a3a5f8 +0x0c0:  mov    0x8(%ebp),%eax
08a3a5fb +0x0c3:  add    $0x90,%eax
08a3a600 +0x0c8:  mov    %eax,(%esp)
08a3a603 +0x0cb:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08a3a608 +0x0d0:  mov    0x8(%ebp),%eax
08a3a60b +0x0d3:  add    $0xd8,%eax
08a3a610 +0x0d8:  mov    %eax,(%esp)
08a3a613 +0x0db:  call   08a3d926 <_GLOBAL__I_g_weaponDurabilityDecreaseRate_+0xbd7>  ; global constructors keyed to g_weaponDurabilityDecreaseRate_+0xbd7
08a3a618 +0x0e0:  mov    0x8(%ebp),%eax
08a3a61b +0x0e3:  add    $0x128,%eax
08a3a620 +0x0e8:  mov    %eax,(%esp)
08a3a623 +0x0eb:  call   08a3da0c <_GLOBAL__I_g_weaponDurabilityDecreaseRate_+0xcbd>  ; global constructors keyed to g_weaponDurabilityDecreaseRate_+0xcbd
08a3a628 +0x0f0:  mov    0x8(%ebp),%eax
08a3a62b +0x0f3:  add    $0x140,%eax
08a3a630 +0x0f8:  mov    %eax,(%esp)
08a3a633 +0x0fb:  call   08a410ac <_GLOBAL__I_g_weaponDurabilityDecreaseRate_+0x435d>  ; global constructors keyed to g_weaponDurabilityDecreaseRate_+0x435d
08a3a638 +0x100:  mov    0x8(%ebp),%eax
08a3a63b +0x103:  add    $0x154,%eax
08a3a640 +0x108:  mov    %eax,(%esp)
08a3a643 +0x10b:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08a3a648 +0x110:  mov    0x8(%ebp),%eax
08a3a64b +0x113:  add    $0x160,%eax
08a3a650 +0x118:  mov    %eax,(%esp)
08a3a653 +0x11b:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
08a3a658 +0x120:  mov    0x8(%ebp),%eax
08a3a65b +0x123:  add    $0x17c,%eax
08a3a660 +0x128:  mov    %eax,(%esp)
08a3a663 +0x12b:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08a3a668 +0x130:  mov    0x8(%ebp),%eax
08a3a66b +0x133:  add    $0x180,%eax
08a3a670 +0x138:  mov    %eax,(%esp)
08a3a673 +0x13b:  call   08a410c0 <_GLOBAL__I_g_weaponDurabilityDecreaseRate_+0x4371>  ; global constructors keyed to g_weaponDurabilityDecreaseRate_+0x4371
08a3a678 +0x140:  mov    0x8(%ebp),%eax
08a3a67b +0x143:  add    $0x18c,%eax
08a3a680 +0x148:  mov    %eax,(%esp)
08a3a683 +0x14b:  call   08a410d4 <_GLOBAL__I_g_weaponDurabilityDecreaseRate_+0x4385>  ; global constructors keyed to g_weaponDurabilityDecreaseRate_+0x4385
08a3a688 +0x150:  mov    0x8(%ebp),%eax
08a3a68b +0x153:  add    $0x198,%eax
08a3a690 +0x158:  mov    %eax,(%esp)
08a3a693 +0x15b:  call   08a410e8 <_GLOBAL__I_g_weaponDurabilityDecreaseRate_+0x4399>  ; global constructors keyed to g_weaponDurabilityDecreaseRate_+0x4399
08a3a698 +0x160:  mov    0x8(%ebp),%eax
08a3a69b +0x163:  add    $0x1a4,%eax
08a3a6a0 +0x168:  mov    %eax,(%esp)
08a3a6a3 +0x16b:  call   08a410fc <_GLOBAL__I_g_weaponDurabilityDecreaseRate_+0x43ad>  ; global constructors keyed to g_weaponDurabilityDecreaseRate_+0x43ad
08a3a6a8 +0x170:  mov    0x8(%ebp),%eax
08a3a6ab +0x173:  add    $0x1b0,%eax
08a3a6b0 +0x178:  mov    %eax,(%esp)
08a3a6b3 +0x17b:  call   08a3e8ae <_GLOBAL__I_g_weaponDurabilityDecreaseRate_+0x1b5f>  ; global constructors keyed to g_weaponDurabilityDecreaseRate_+0x1b5f
08a3a6b8 +0x180:  mov    0x8(%ebp),%eax
08a3a6bb +0x183:  add    $0x1d4,%eax
08a3a6c0 +0x188:  mov    %eax,(%esp)
08a3a6c3 +0x18b:  call   08a3aeca <_ZN15WarningDistanceC1Ev>  ; WarningDistance::WarningDistance()
08a3a6c8 +0x190:  mov    0x8(%ebp),%eax
08a3a6cb +0x193:  add    $0x1e0,%eax
08a3a6d0 +0x198:  mov    %eax,(%esp)
08a3a6d3 +0x19b:  call   08a3aeca <_ZN15WarningDistanceC1Ev>  ; WarningDistance::WarningDistance()
08a3a6d8 +0x1a0:  mov    0x8(%ebp),%eax
08a3a6db +0x1a3:  add    $0x1ec,%eax
08a3a6e0 +0x1a8:  mov    %eax,(%esp)
08a3a6e3 +0x1ab:  call   08a3af0c <_ZN21PassiveIObjSniperInfoC1Ev>  ; PassiveIObjSniperInfo::PassiveIObjSniperInfo()
08a3a6e8 +0x1b0:  mov    0x8(%ebp),%eax
08a3a6eb +0x1b3:  add    $0x274,%eax
08a3a6f0 +0x1b8:  mov    %eax,(%esp)
08a3a6f3 +0x1bb:  call   08a41110 <_GLOBAL__I_g_weaponDurabilityDecreaseRate_+0x43c1>  ; global constructors keyed to g_weaponDurabilityDecreaseRate_+0x43c1
08a3a6f8 +0x1c0:  mov    0x8(%ebp),%eax
08a3a6fb +0x1c3:  add    $0x284,%eax
08a3a700 +0x1c8:  mov    %eax,(%esp)
08a3a703 +0x1cb:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08a3a708 +0x1d0:  mov    0x8(%ebp),%eax
08a3a70b +0x1d3:  mov    %eax,(%esp)
08a3a70e +0x1d6:  call   08a3a9e6 <_ZN21STPassiveObjectScript5clearEv>  ; STPassiveObjectScript::clear()
08a3a713 +0x1db:  jmp    08a3a9de <+0x4a6>
08a3a718 +0x1e0:  mov    %edx,%ebx
08a3a71a +0x1e2:  mov    %eax,%esi
08a3a71c +0x1e4:  mov    0x8(%ebp),%eax
08a3a71f +0x1e7:  add    $0x284,%eax
08a3a724 +0x1ec:  mov    %eax,(%esp)
08a3a727 +0x1ef:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08a3a72c +0x1f4:  mov    %esi,%eax
08a3a72e +0x1f6:  mov    %ebx,%edx
08a3a730 +0x1f8:  jmp    08a3a732 <+0x1fa>
08a3a732 +0x1fa:  mov    %edx,%ebx
08a3a734 +0x1fc:  mov    %eax,%esi
08a3a736 +0x1fe:  mov    0x8(%ebp),%eax
08a3a739 +0x201:  add    $0x274,%eax
08a3a73e +0x206:  mov    %eax,(%esp)
08a3a741 +0x209:  call   08a4040e <_GLOBAL__I_g_weaponDurabilityDecreaseRate_+0x36bf>  ; global constructors keyed to g_weaponDurabilityDecreaseRate_+0x36bf
08a3a746 +0x20e:  mov    %esi,%eax
08a3a748 +0x210:  mov    %ebx,%edx
08a3a74a +0x212:  jmp    08a3a74c <+0x214>
08a3a74c +0x214:  mov    %edx,%ebx
08a3a74e +0x216:  mov    %eax,%esi
08a3a750 +0x218:  mov    0x8(%ebp),%eax
08a3a753 +0x21b:  add    $0x1ec,%eax
08a3a758 +0x220:  mov    %eax,(%esp)
08a3a75b +0x223:  call   08a3e1c4 <_GLOBAL__I_g_weaponDurabilityDecreaseRate_+0x1475>  ; global constructors keyed to g_weaponDurabilityDecreaseRate_+0x1475
08a3a760 +0x228:  mov    %esi,%eax
08a3a762 +0x22a:  mov    %ebx,%edx
08a3a764 +0x22c:  jmp    08a3a766 <+0x22e>
08a3a766 +0x22e:  mov    %edx,%ebx
08a3a768 +0x230:  mov    %eax,%esi
08a3a76a +0x232:  mov    0x8(%ebp),%eax
08a3a76d +0x235:  add    $0x1b0,%eax
08a3a772 +0x23a:  mov    %eax,(%esp)
08a3a775 +0x23d:  call   08a3e156 <_GLOBAL__I_g_weaponDurabilityDecreaseRate_+0x1407>  ; global constructors keyed to g_weaponDurabilityDecreaseRate_+0x1407
08a3a77a +0x242:  mov    %esi,%eax
08a3a77c +0x244:  mov    %ebx,%edx
08a3a77e +0x246:  jmp    08a3a780 <+0x248>
08a3a780 +0x248:  mov    %edx,%ebx
08a3a782 +0x24a:  mov    %eax,%esi
08a3a784 +0x24c:  mov    0x8(%ebp),%eax
08a3a787 +0x24f:  add    $0x1a4,%eax
08a3a78c +0x254:  mov    %eax,(%esp)
08a3a78f +0x257:  call   08a403b0 <_GLOBAL__I_g_weaponDurabilityDecreaseRate_+0x3661>  ; global constructors keyed to g_weaponDurabilityDecreaseRate_+0x3661
08a3a794 +0x25c:  mov    %esi,%eax
08a3a796 +0x25e:  mov    %ebx,%edx
08a3a798 +0x260:  jmp    08a3a79a <+0x262>
08a3a79a +0x262:  mov    %edx,%ebx
08a3a79c +0x264:  mov    %eax,%esi
08a3a79e +0x266:  mov    0x8(%ebp),%eax
08a3a7a1 +0x269:  add    $0x198,%eax
08a3a7a6 +0x26e:  mov    %eax,(%esp)
08a3a7a9 +0x271:  call   08a40352 <_GLOBAL__I_g_weaponDurabilityDecreaseRate_+0x3603>  ; global constructors keyed to g_weaponDurabilityDecreaseRate_+0x3603
08a3a7ae +0x276:  mov    %esi,%eax
08a3a7b0 +0x278:  mov    %ebx,%edx
08a3a7b2 +0x27a:  jmp    08a3a7b4 <+0x27c>
08a3a7b4 +0x27c:  mov    %edx,%ebx
08a3a7b6 +0x27e:  mov    %eax,%esi
08a3a7b8 +0x280:  mov    0x8(%ebp),%eax
08a3a7bb +0x283:  add    $0x18c,%eax
08a3a7c0 +0x288:  mov    %eax,(%esp)
08a3a7c3 +0x28b:  call   08a402f4 <_GLOBAL__I_g_weaponDurabilityDecreaseRate_+0x35a5>  ; global constructors keyed to g_weaponDurabilityDecreaseRate_+0x35a5
08a3a7c8 +0x290:  mov    %esi,%eax
08a3a7ca +0x292:  mov    %ebx,%edx
08a3a7cc +0x294:  jmp    08a3a7ce <+0x296>
08a3a7ce +0x296:  mov    %edx,%ebx
08a3a7d0 +0x298:  mov    %eax,%esi
08a3a7d2 +0x29a:  mov    0x8(%ebp),%eax
08a3a7d5 +0x29d:  add    $0x180,%eax
08a3a7da +0x2a2:  mov    %eax,(%esp)
08a3a7dd +0x2a5:  call   08a40296 <_GLOBAL__I_g_weaponDurabilityDecreaseRate_+0x3547>  ; global constructors keyed to g_weaponDurabilityDecreaseRate_+0x3547
08a3a7e2 +0x2aa:  mov    %esi,%eax
08a3a7e4 +0x2ac:  mov    %ebx,%edx
08a3a7e6 +0x2ae:  jmp    08a3a7e8 <+0x2b0>
08a3a7e8 +0x2b0:  mov    %edx,%ebx
08a3a7ea +0x2b2:  mov    %eax,%esi
08a3a7ec +0x2b4:  mov    0x8(%ebp),%eax
08a3a7ef +0x2b7:  add    $0x17c,%eax
08a3a7f4 +0x2bc:  mov    %eax,(%esp)
08a3a7f7 +0x2bf:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08a3a7fc +0x2c4:  mov    %esi,%eax
08a3a7fe +0x2c6:  mov    %ebx,%edx
08a3a800 +0x2c8:  jmp    08a3a802 <+0x2ca>
08a3a802 +0x2ca:  mov    %edx,%ebx
08a3a804 +0x2cc:  mov    %eax,%esi
08a3a806 +0x2ce:  mov    0x8(%ebp),%eax
08a3a809 +0x2d1:  add    $0x160,%eax
08a3a80e +0x2d6:  mov    %eax,(%esp)
08a3a811 +0x2d9:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08a3a816 +0x2de:  mov    %esi,%eax
08a3a818 +0x2e0:  mov    %ebx,%edx
08a3a81a +0x2e2:  jmp    08a3a81c <+0x2e4>
08a3a81c +0x2e4:  mov    %edx,%ebx
08a3a81e +0x2e6:  mov    %eax,%esi
08a3a820 +0x2e8:  mov    0x8(%ebp),%eax
08a3a823 +0x2eb:  add    $0x154,%eax
08a3a828 +0x2f0:  mov    %eax,(%esp)
08a3a82b +0x2f3:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08a3a830 +0x2f8:  mov    %esi,%eax
08a3a832 +0x2fa:  mov    %ebx,%edx
08a3a834 +0x2fc:  jmp    08a3a836 <+0x2fe>
08a3a836 +0x2fe:  mov    %edx,%ebx
08a3a838 +0x300:  mov    %eax,%esi
08a3a83a +0x302:  mov    0x8(%ebp),%eax
08a3a83d +0x305:  add    $0x140,%eax
08a3a842 +0x30a:  mov    %eax,(%esp)
08a3a845 +0x30d:  call   08a40238 <_GLOBAL__I_g_weaponDurabilityDecreaseRate_+0x34e9>  ; global constructors keyed to g_weaponDurabilityDecreaseRate_+0x34e9
08a3a84a +0x312:  mov    %esi,%eax
08a3a84c +0x314:  mov    %ebx,%edx
08a3a84e +0x316:  jmp    08a3a850 <+0x318>
08a3a850 +0x318:  mov    %edx,%ebx
08a3a852 +0x31a:  mov    %eax,%esi
08a3a854 +0x31c:  mov    0x8(%ebp),%eax
08a3a857 +0x31f:  add    $0x128,%eax
08a3a85c +0x324:  mov    %eax,(%esp)
08a3a85f +0x327:  call   08a3e110 <_GLOBAL__I_g_weaponDurabilityDecreaseRate_+0x13c1>  ; global constructors keyed to g_weaponDurabilityDecreaseRate_+0x13c1
08a3a864 +0x32c:  mov    %esi,%eax
08a3a866 +0x32e:  mov    %ebx,%edx
08a3a868 +0x330:  jmp    08a3a86a <+0x332>
08a3a86a +0x332:  mov    %edx,%ebx
08a3a86c +0x334:  mov    %eax,%esi
08a3a86e +0x336:  mov    0x8(%ebp),%eax
08a3a871 +0x339:  add    $0xd8,%eax
08a3a876 +0x33e:  mov    %eax,(%esp)
08a3a879 +0x341:  call   08a3e04c <_GLOBAL__I_g_weaponDurabilityDecreaseRate_+0x12fd>  ; global constructors keyed to g_weaponDurabilityDecreaseRate_+0x12fd
08a3a87e +0x346:  mov    %esi,%eax
08a3a880 +0x348:  mov    %ebx,%edx
08a3a882 +0x34a:  jmp    08a3a884 <+0x34c>
08a3a884 +0x34c:  mov    %edx,%ebx
08a3a886 +0x34e:  mov    %eax,%esi
08a3a888 +0x350:  mov    0x8(%ebp),%eax
08a3a88b +0x353:  add    $0x90,%eax
08a3a890 +0x358:  mov    %eax,(%esp)
08a3a893 +0x35b:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08a3a898 +0x360:  mov    %esi,%eax
08a3a89a +0x362:  mov    %ebx,%edx
08a3a89c +0x364:  jmp    08a3a89e <+0x366>
08a3a89e +0x366:  mov    %edx,%ebx
08a3a8a0 +0x368:  mov    %eax,%esi
08a3a8a2 +0x36a:  mov    0x8(%ebp),%eax
08a3a8a5 +0x36d:  add    $0x84,%eax
08a3a8aa +0x372:  mov    %eax,(%esp)
08a3a8ad +0x375:  call   080ccf74 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dc1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dc1
08a3a8b2 +0x37a:  mov    %esi,%eax
08a3a8b4 +0x37c:  mov    %ebx,%edx
08a3a8b6 +0x37e:  jmp    08a3a8b8 <+0x380>
08a3a8b8 +0x380:  mov    %edx,%ebx
08a3a8ba +0x382:  mov    %eax,%esi
08a3a8bc +0x384:  mov    0x8(%ebp),%eax
08a3a8bf +0x387:  add    $0x78,%eax
08a3a8c2 +0x38a:  mov    %eax,(%esp)
08a3a8c5 +0x38d:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08a3a8ca +0x392:  mov    %esi,%eax
08a3a8cc +0x394:  mov    %ebx,%edx
08a3a8ce +0x396:  jmp    08a3a8d0 <+0x398>
08a3a8d0 +0x398:  mov    %edx,%ebx
08a3a8d2 +0x39a:  mov    %eax,%esi
08a3a8d4 +0x39c:  mov    0x8(%ebp),%eax
08a3a8d7 +0x39f:  add    $0x6c,%eax
08a3a8da +0x3a2:  mov    %eax,(%esp)
08a3a8dd +0x3a5:  call   080ccf74 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dc1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dc1
08a3a8e2 +0x3aa:  mov    %esi,%eax
08a3a8e4 +0x3ac:  mov    %ebx,%edx
08a3a8e6 +0x3ae:  jmp    08a3a8e8 <+0x3b0>
08a3a8e8 +0x3b0:  mov    %edx,%ebx
08a3a8ea +0x3b2:  mov    %eax,%esi
08a3a8ec +0x3b4:  mov    0x8(%ebp),%eax
08a3a8ef +0x3b7:  add    $0x68,%eax
08a3a8f2 +0x3ba:  mov    %eax,(%esp)
08a3a8f5 +0x3bd:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08a3a8fa +0x3c2:  mov    %esi,%eax
08a3a8fc +0x3c4:  mov    %ebx,%edx
08a3a8fe +0x3c6:  jmp    08a3a900 <+0x3c8>
08a3a900 +0x3c8:  mov    %edx,%ebx
08a3a902 +0x3ca:  mov    %eax,%esi
08a3a904 +0x3cc:  mov    0x8(%ebp),%eax
08a3a907 +0x3cf:  add    $0x64,%eax
08a3a90a +0x3d2:  mov    %eax,(%esp)
08a3a90d +0x3d5:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08a3a912 +0x3da:  mov    %esi,%eax
08a3a914 +0x3dc:  mov    %ebx,%edx
08a3a916 +0x3de:  jmp    08a3a918 <+0x3e0>
08a3a918 +0x3e0:  mov    %edx,%ebx
08a3a91a +0x3e2:  mov    %eax,%esi
08a3a91c +0x3e4:  mov    0x8(%ebp),%eax
08a3a91f +0x3e7:  add    $0x54,%eax
08a3a922 +0x3ea:  mov    %eax,(%esp)
08a3a925 +0x3ed:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08a3a92a +0x3f2:  mov    %esi,%eax
08a3a92c +0x3f4:  mov    %ebx,%edx
08a3a92e +0x3f6:  jmp    08a3a930 <+0x3f8>
08a3a930 +0x3f8:  mov    %edx,%ebx
08a3a932 +0x3fa:  mov    %eax,%esi
08a3a934 +0x3fc:  mov    0x8(%ebp),%eax
08a3a937 +0x3ff:  add    $0x48,%eax
08a3a93a +0x402:  mov    %eax,(%esp)
08a3a93d +0x405:  call   080ccf74 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dc1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dc1
08a3a942 +0x40a:  mov    %esi,%eax
08a3a944 +0x40c:  mov    %ebx,%edx
08a3a946 +0x40e:  jmp    08a3a948 <+0x410>
08a3a948 +0x410:  mov    %edx,%ebx
08a3a94a +0x412:  mov    %eax,%esi
08a3a94c +0x414:  mov    0x8(%ebp),%eax
08a3a94f +0x417:  add    $0x44,%eax
08a3a952 +0x41a:  mov    %eax,(%esp)
08a3a955 +0x41d:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08a3a95a +0x422:  mov    %esi,%eax
08a3a95c +0x424:  mov    %ebx,%edx
08a3a95e +0x426:  jmp    08a3a960 <+0x428>
08a3a960 +0x428:  mov    %edx,%ebx
08a3a962 +0x42a:  mov    %eax,%esi
08a3a964 +0x42c:  mov    0x8(%ebp),%eax
08a3a967 +0x42f:  add    $0x38,%eax
08a3a96a +0x432:  mov    %eax,(%esp)
08a3a96d +0x435:  call   080ccf74 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dc1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dc1
08a3a972 +0x43a:  mov    %esi,%eax
08a3a974 +0x43c:  mov    %ebx,%edx
08a3a976 +0x43e:  jmp    08a3a978 <+0x440>
08a3a978 +0x440:  mov    %edx,%ebx
08a3a97a +0x442:  mov    %eax,%esi
08a3a97c +0x444:  mov    0x8(%ebp),%eax
08a3a97f +0x447:  add    $0x34,%eax
08a3a982 +0x44a:  mov    %eax,(%esp)
08a3a985 +0x44d:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08a3a98a +0x452:  mov    %esi,%eax
08a3a98c +0x454:  mov    %ebx,%edx
08a3a98e +0x456:  jmp    08a3a990 <+0x458>
08a3a990 +0x458:  mov    %edx,%ebx
08a3a992 +0x45a:  mov    %eax,%esi
08a3a994 +0x45c:  mov    0x8(%ebp),%eax
08a3a997 +0x45f:  add    $0x28,%eax
08a3a99a +0x462:  mov    %eax,(%esp)
08a3a99d +0x465:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08a3a9a2 +0x46a:  mov    %esi,%eax
08a3a9a4 +0x46c:  mov    %ebx,%edx
08a3a9a6 +0x46e:  jmp    08a3a9a8 <+0x470>
08a3a9a8 +0x470:  mov    %edx,%ebx
08a3a9aa +0x472:  mov    %eax,%esi
08a3a9ac +0x474:  mov    0x8(%ebp),%eax
08a3a9af +0x477:  add    $0x8,%eax
08a3a9b2 +0x47a:  mov    %eax,(%esp)
08a3a9b5 +0x47d:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08a3a9ba +0x482:  mov    %esi,%eax
08a3a9bc +0x484:  mov    %ebx,%edx
08a3a9be +0x486:  jmp    08a3a9c0 <+0x488>
08a3a9c0 +0x488:  mov    %edx,%ebx
08a3a9c2 +0x48a:  mov    %eax,%esi
08a3a9c4 +0x48c:  mov    0x8(%ebp),%eax
08a3a9c7 +0x48f:  add    $0x4,%eax
08a3a9ca +0x492:  mov    %eax,(%esp)
08a3a9cd +0x495:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08a3a9d2 +0x49a:  mov    %esi,%eax
08a3a9d4 +0x49c:  mov    %ebx,%edx
08a3a9d6 +0x49e:  mov    %eax,(%esp)
08a3a9d9 +0x4a1:  call   08ae3750 <_Unwind_Resume>
08a3a9de +0x4a6:  add    $0x10,%esp
08a3a9e1 +0x4a9:  pop    %ebx
08a3a9e2 +0x4aa:  pop    %esi
08a3a9e3 +0x4ab:  pop    %ebp
08a3a9e4 +0x4ac:  ret
08a3a9e5 +0x4ad:  nop
```

## 反编译 C

```c
// STPassiveObjectScript::STPassiveObjectScript @ 0x8a3a538

/* STPassiveObjectScript::STPassiveObjectScript() */

void __thiscall STPassiveObjectScript::STPassiveObjectScript(STPassiveObjectScript *this)

{
  std::string::string((string *)(this + 4));
                    /* try { // try from 08a3a557 to 08a3a55b has its CatchHandler @ 08a3a9c0 */
  std::string::string((string *)(this + 8));
                    /* try { // try from 08a3a565 to 08a3a569 has its CatchHandler @ 08a3a9a8 */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x28));
                    /* try { // try from 08a3a573 to 08a3a577 has its CatchHandler @ 08a3a990 */
  std::string::string((string *)(this + 0x34));
                    /* try { // try from 08a3a581 to 08a3a585 has its CatchHandler @ 08a3a978 */
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x38));
                    /* try { // try from 08a3a58f to 08a3a593 has its CatchHandler @ 08a3a960 */
  std::string::string((string *)(this + 0x44));
                    /* try { // try from 08a3a59d to 08a3a5a1 has its CatchHandler @ 08a3a948 */
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x48));
                    /* try { // try from 08a3a5ab to 08a3a5af has its CatchHandler @ 08a3a930 */
  std::string::string((string *)(this + 0x54));
                    /* try { // try from 08a3a5b9 to 08a3a5bd has its CatchHandler @ 08a3a918 */
  std::string::string((string *)(this + 100));
                    /* try { // try from 08a3a5c7 to 08a3a5cb has its CatchHandler @ 08a3a900 */
  std::string::string((string *)(this + 0x68));
                    /* try { // try from 08a3a5d5 to 08a3a5d9 has its CatchHandler @ 08a3a8e8 */
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x6c));
                    /* try { // try from 08a3a5e3 to 08a3a5e7 has its CatchHandler @ 08a3a8d0 */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x78));
                    /* try { // try from 08a3a5f3 to 08a3a5f7 has its CatchHandler @ 08a3a8b8 */
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x84));
                    /* try { // try from 08a3a603 to 08a3a607 has its CatchHandler @ 08a3a89e */
  std::string::string((string *)(this + 0x90));
                    /* try { // try from 08a3a613 to 08a3a617 has its CatchHandler @ 08a3a884 */
  STPassiveObjectDestroy::STPassiveObjectDestroy((STPassiveObjectDestroy *)(this + 0xd8));
                    /* try { // try from 08a3a623 to 08a3a627 has its CatchHandler @ 08a3a86a */
  STPassiveObjectAddEffect::STPassiveObjectAddEffect((STPassiveObjectAddEffect *)(this + 0x128));
                    /* try { // try from 08a3a633 to 08a3a637 has its CatchHandler @ 08a3a850 */
  std::
  vector<STPassiveObjectAdditionalParticleInfo*,std::allocator<STPassiveObjectAdditionalParticleInfo*>>
  ::vector((vector<STPassiveObjectAdditionalParticleInfo*,std::allocator<STPassiveObjectAdditionalParticleInfo*>>
            *)(this + 0x140));
                    /* try { // try from 08a3a643 to 08a3a647 has its CatchHandler @ 08a3a836 */
  std::string::string((string *)(this + 0x154));
                    /* try { // try from 08a3a653 to 08a3a657 has its CatchHandler @ 08a3a81c */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x160));
                    /* try { // try from 08a3a663 to 08a3a667 has its CatchHandler @ 08a3a802 */
  std::string::string((string *)(this + 0x17c));
                    /* try { // try from 08a3a673 to 08a3a677 has its CatchHandler @ 08a3a7e8 */
  std::vector<SpeedCtrlPassiveObjInfo,std::allocator<SpeedCtrlPassiveObjInfo>>::vector
            ((vector<SpeedCtrlPassiveObjInfo,std::allocator<SpeedCtrlPassiveObjInfo>> *)
             (this + 0x180));
                    /* try { // try from 08a3a683 to 08a3a687 has its CatchHandler @ 08a3a7ce */
  std::vector<PassiveObjGeneratorPattern,std::allocator<PassiveObjGeneratorPattern>>::vector
            ((vector<PassiveObjGeneratorPattern,std::allocator<PassiveObjGeneratorPattern>> *)
             (this + 0x18c));
                    /* try { // try from 08a3a693 to 08a3a697 has its CatchHandler @ 08a3a7b4 */
  std::vector<PassiveObjGeneratorSequence,std::allocator<PassiveObjGeneratorSequence>>::vector
            ((vector<PassiveObjGeneratorSequence,std::allocator<PassiveObjGeneratorSequence>> *)
             (this + 0x198));
                    /* try { // try from 08a3a6a3 to 08a3a6a7 has its CatchHandler @ 08a3a79a */
  std::vector<PassiveObjGeneratorObject,std::allocator<PassiveObjGeneratorObject>>::vector
            ((vector<PassiveObjGeneratorObject,std::allocator<PassiveObjGeneratorObject>> *)
             (this + 0x1a4));
                    /* try { // try from 08a3a6b3 to 08a3a6b7 has its CatchHandler @ 08a3a780 */
  PassiveObjGeneratorInfo::PassiveObjGeneratorInfo((PassiveObjGeneratorInfo *)(this + 0x1b0));
  WarningDistance::WarningDistance((WarningDistance *)(this + 0x1d4));
  WarningDistance::WarningDistance((WarningDistance *)(this + 0x1e0));
                    /* try { // try from 08a3a6e3 to 08a3a6e7 has its CatchHandler @ 08a3a766 */
  PassiveIObjSniperInfo::PassiveIObjSniperInfo((PassiveIObjSniperInfo *)(this + 0x1ec));
                    /* try { // try from 08a3a6f3 to 08a3a6f7 has its CatchHandler @ 08a3a74c */
  std::vector<RandomItemFairy,std::allocator<RandomItemFairy>>::vector
            ((vector<RandomItemFairy,std::allocator<RandomItemFairy>> *)(this + 0x274));
                    /* try { // try from 08a3a703 to 08a3a707 has its CatchHandler @ 08a3a732 */
  std::string::string((string *)(this + 0x284));
                    /* try { // try from 08a3a70e to 08a3a712 has its CatchHandler @ 08a3a718 */
  clear(this);
  return;
}
```
