# NpcScript

`_ZN9NpcScriptC1Ev`

`NpcScript::NpcScript()`

| 类 | 地址 |
|---|---|
| `NpcScript` | `0x089fb942` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 089fb942  _ZN9NpcScriptC1Ev
#           NpcScript::NpcScript()
# range [0x089fb942, 0x089fbf21]
089fb942 +0x000:  push   %ebp
089fb943 +0x001:  mov    %esp,%ebp
089fb945 +0x003:  push   %edi
089fb946 +0x004:  push   %esi
089fb947 +0x005:  push   %ebx
089fb948 +0x006:  sub    $0x2c,%esp
089fb94b +0x009:  mov    0x8(%ebp),%eax
089fb94e +0x00c:  add    $0x4,%eax
089fb951 +0x00f:  mov    %eax,(%esp)
089fb954 +0x012:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
089fb959 +0x017:  mov    0x8(%ebp),%eax
089fb95c +0x01a:  add    $0x8,%eax
089fb95f +0x01d:  mov    %eax,(%esp)
089fb962 +0x020:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
089fb967 +0x025:  mov    0x8(%ebp),%eax
089fb96a +0x028:  add    $0xc,%eax
089fb96d +0x02b:  mov    %eax,(%esp)
089fb970 +0x02e:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
089fb975 +0x033:  mov    0x8(%ebp),%eax
089fb978 +0x036:  add    $0x14,%eax
089fb97b +0x039:  mov    %eax,(%esp)
089fb97e +0x03c:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
089fb983 +0x041:  mov    0x8(%ebp),%eax
089fb986 +0x044:  add    $0x1c,%eax
089fb989 +0x047:  mov    %eax,(%esp)
089fb98c +0x04a:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
089fb991 +0x04f:  mov    0x8(%ebp),%eax
089fb994 +0x052:  add    $0x24,%eax
089fb997 +0x055:  mov    %eax,(%esp)
089fb99a +0x058:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
089fb99f +0x05d:  mov    0x8(%ebp),%eax
089fb9a2 +0x060:  add    $0x28,%eax
089fb9a5 +0x063:  mov    %eax,(%esp)
089fb9a8 +0x066:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
089fb9ad +0x06b:  mov    0x8(%ebp),%eax
089fb9b0 +0x06e:  lea    0x2c(%eax),%esi
089fb9b3 +0x071:  mov    %esi,%edi
089fb9b5 +0x073:  mov    $0x1,%ebx
089fb9ba +0x078:  jmp    089fb9ca <+0x88>
089fb9bc +0x07a:  mov    %edi,(%esp)
089fb9bf +0x07d:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
089fb9c4 +0x082:  add    $0x4,%edi
089fb9c7 +0x085:  sub    $0x1,%ebx
089fb9ca +0x088:  cmp    $0xffffffff,%ebx
089fb9cd +0x08b:  setne  %al
089fb9d0 +0x08e:  test   %al,%al
089fb9d2 +0x090:  jne    089fb9bc <+0x7a>
089fb9d4 +0x092:  jmp    089fba07 <+0xc5>
089fb9d6 +0x094:  mov    %edx,%edi
089fb9d8 +0x096:  mov    %eax,-0x20(%ebp)
089fb9db +0x099:  test   %esi,%esi
089fb9dd +0x09b:  je     089fb9fd <+0xbb>
089fb9df +0x09d:  mov    $0x1,%eax
089fb9e4 +0x0a2:  sub    %ebx,%eax
089fb9e6 +0x0a4:  shl    $0x2,%eax
089fb9e9 +0x0a7:  lea    (%esi,%eax,1),%ebx
089fb9ec +0x0aa:  cmp    %esi,%ebx
089fb9ee +0x0ac:  je     089fb9fd <+0xbb>
089fb9f0 +0x0ae:  sub    $0x4,%ebx
089fb9f3 +0x0b1:  mov    %ebx,(%esp)
089fb9f6 +0x0b4:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
089fb9fb +0x0b9:  jmp    089fb9ec <+0xaa>
089fb9fd +0x0bb:  mov    -0x20(%ebp),%eax
089fba00 +0x0be:  mov    %edi,%edx
089fba02 +0x0c0:  jmp    089fbe6c <+0x52a>
089fba07 +0x0c5:  mov    0x8(%ebp),%eax
089fba0a +0x0c8:  add    $0x3c,%eax
089fba0d +0x0cb:  mov    %eax,(%esp)
089fba10 +0x0ce:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
089fba15 +0x0d3:  mov    0x8(%ebp),%eax
089fba18 +0x0d6:  add    $0x40,%eax
089fba1b +0x0d9:  mov    %eax,(%esp)
089fba1e +0x0dc:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
089fba23 +0x0e1:  mov    0x8(%ebp),%eax
089fba26 +0x0e4:  add    $0x4c,%eax
089fba29 +0x0e7:  mov    %eax,(%esp)
089fba2c +0x0ea:  call   08a01510 <_GLOBAL__I_g_npcScriptBaseDirectory+0xba2>  ; global constructors keyed to g_npcScriptBaseDirectory+0xba2
089fba31 +0x0ef:  mov    0x8(%ebp),%eax
089fba34 +0x0f2:  add    $0x64,%eax
089fba37 +0x0f5:  mov    %eax,(%esp)
089fba3a +0x0f8:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
089fba3f +0x0fd:  mov    0x8(%ebp),%eax
089fba42 +0x100:  lea    0x68(%eax),%esi
089fba45 +0x103:  mov    %esi,%edi
089fba47 +0x105:  mov    $0xb,%ebx
089fba4c +0x10a:  jmp    089fba5c <+0x11a>
089fba4e +0x10c:  mov    %edi,(%esp)
089fba51 +0x10f:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
089fba56 +0x114:  add    $0xc,%edi
089fba59 +0x117:  sub    $0x1,%ebx
089fba5c +0x11a:  cmp    $0xffffffff,%ebx
089fba5f +0x11d:  setne  %al
089fba62 +0x120:  test   %al,%al
089fba64 +0x122:  jne    089fba4e <+0x10c>
089fba66 +0x124:  jmp    089fbaa1 <+0x15f>
089fba68 +0x126:  mov    %edx,%edi
089fba6a +0x128:  mov    %eax,-0x1c(%ebp)
089fba6d +0x12b:  test   %esi,%esi
089fba6f +0x12d:  je     089fba97 <+0x155>
089fba71 +0x12f:  mov    $0xb,%eax
089fba76 +0x134:  sub    %ebx,%eax
089fba78 +0x136:  mov    %eax,%edx
089fba7a +0x138:  mov    %edx,%eax
089fba7c +0x13a:  add    %eax,%eax
089fba7e +0x13c:  add    %edx,%eax
089fba80 +0x13e:  shl    $0x2,%eax
089fba83 +0x141:  lea    (%esi,%eax,1),%ebx
089fba86 +0x144:  cmp    %esi,%ebx
089fba88 +0x146:  je     089fba97 <+0x155>
089fba8a +0x148:  sub    $0xc,%ebx
089fba8d +0x14b:  mov    %ebx,(%esp)
089fba90 +0x14e:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
089fba95 +0x153:  jmp    089fba86 <+0x144>
089fba97 +0x155:  mov    -0x1c(%ebp),%eax
089fba9a +0x158:  mov    %edi,%edx
089fba9c +0x15a:  jmp    089fbdda <+0x498>
089fbaa1 +0x15f:  mov    0x8(%ebp),%eax
089fbaa4 +0x162:  add    $0xf8,%eax
089fbaa9 +0x167:  mov    %eax,(%esp)
089fbaac +0x16a:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
089fbab1 +0x16f:  mov    0x8(%ebp),%eax
089fbab4 +0x172:  add    $0xfc,%eax
089fbab9 +0x177:  mov    %eax,(%esp)
089fbabc +0x17a:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
089fbac1 +0x17f:  mov    0x8(%ebp),%eax
089fbac4 +0x182:  add    $0x100,%eax
089fbac9 +0x187:  mov    %eax,(%esp)
089fbacc +0x18a:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
089fbad1 +0x18f:  mov    0x8(%ebp),%eax
089fbad4 +0x192:  add    $0x104,%eax
089fbad9 +0x197:  mov    %eax,(%esp)
089fbadc +0x19a:  call   080ccf60 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dad>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dad
089fbae1 +0x19f:  mov    0x8(%ebp),%eax
089fbae4 +0x1a2:  add    $0x110,%eax
089fbae9 +0x1a7:  mov    %eax,(%esp)
089fbaec +0x1aa:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
089fbaf1 +0x1af:  mov    0x8(%ebp),%eax
089fbaf4 +0x1b2:  add    $0x11c,%eax
089fbaf9 +0x1b7:  mov    %eax,(%esp)
089fbafc +0x1ba:  call   080ccf60 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dad>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dad
089fbb01 +0x1bf:  mov    0x8(%ebp),%eax
089fbb04 +0x1c2:  add    $0x128,%eax
089fbb09 +0x1c7:  mov    %eax,(%esp)
089fbb0c +0x1ca:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
089fbb11 +0x1cf:  mov    0x8(%ebp),%eax
089fbb14 +0x1d2:  add    $0x134,%eax
089fbb19 +0x1d7:  mov    %eax,(%esp)
089fbb1c +0x1da:  call   08383866 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x13306>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x13306
089fbb21 +0x1df:  mov    0x8(%ebp),%eax
089fbb24 +0x1e2:  add    $0x140,%eax
089fbb29 +0x1e7:  mov    %eax,(%esp)
089fbb2c +0x1ea:  call   08a01524 <_GLOBAL__I_g_npcScriptBaseDirectory+0xbb6>  ; global constructors keyed to g_npcScriptBaseDirectory+0xbb6
089fbb31 +0x1ef:  mov    0x8(%ebp),%eax
089fbb34 +0x1f2:  add    $0x14c,%eax
089fbb39 +0x1f7:  mov    %eax,(%esp)
089fbb3c +0x1fa:  call   080ccf60 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dad>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dad
089fbb41 +0x1ff:  mov    0x8(%ebp),%eax
089fbb44 +0x202:  add    $0x158,%eax
089fbb49 +0x207:  mov    %eax,(%esp)
089fbb4c +0x20a:  call   08a01538 <_GLOBAL__I_g_npcScriptBaseDirectory+0xbca>  ; global constructors keyed to g_npcScriptBaseDirectory+0xbca
089fbb51 +0x20f:  mov    0x8(%ebp),%eax
089fbb54 +0x212:  add    $0x164,%eax
089fbb59 +0x217:  mov    %eax,(%esp)
089fbb5c +0x21a:  call   08a0154c <_GLOBAL__I_g_npcScriptBaseDirectory+0xbde>  ; global constructors keyed to g_npcScriptBaseDirectory+0xbde
089fbb61 +0x21f:  mov    0x8(%ebp),%eax
089fbb64 +0x222:  add    $0x170,%eax
089fbb69 +0x227:  mov    %eax,(%esp)
089fbb6c +0x22a:  call   08a00eb0 <_GLOBAL__I_g_npcScriptBaseDirectory+0x542>  ; global constructors keyed to g_npcScriptBaseDirectory+0x542
089fbb71 +0x22f:  mov    0x8(%ebp),%eax
089fbb74 +0x232:  add    $0x684,%eax
089fbb79 +0x237:  mov    %eax,(%esp)
089fbb7c +0x23a:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
089fbb81 +0x23f:  mov    0x8(%ebp),%eax
089fbb84 +0x242:  add    $0x68c,%eax
089fbb89 +0x247:  mov    %eax,(%esp)
089fbb8c +0x24a:  call   080ccf60 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dad>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dad
089fbb91 +0x24f:  mov    0x8(%ebp),%eax
089fbb94 +0x252:  add    $0x698,%eax
089fbb99 +0x257:  mov    %eax,(%esp)
089fbb9c +0x25a:  call   08a015d8 <_GLOBAL__I_g_npcScriptBaseDirectory+0xc6a>  ; global constructors keyed to g_npcScriptBaseDirectory+0xc6a
089fbba1 +0x25f:  mov    0x8(%ebp),%eax
089fbba4 +0x262:  add    $0x6a4,%eax
089fbba9 +0x267:  mov    %eax,(%esp)
089fbbac +0x26a:  call   08a00c08 <_GLOBAL__I_g_npcScriptBaseDirectory+0x29a>  ; global constructors keyed to g_npcScriptBaseDirectory+0x29a
089fbbb1 +0x26f:  mov    0x8(%ebp),%eax
089fbbb4 +0x272:  add    $0x6bc,%eax
089fbbb9 +0x277:  mov    %eax,(%esp)
089fbbbc +0x27a:  call   089fb78e <_ZN12NpcMovieDataC1Ev>  ; NpcMovieData::NpcMovieData()
089fbbc1 +0x27f:  mov    0x8(%ebp),%eax
089fbbc4 +0x282:  mov    %eax,(%esp)
089fbbc7 +0x285:  call   089fbf22 <_ZN9NpcScript5clearEv>  ; NpcScript::clear()
089fbbcc +0x28a:  jmp    089fbf1a <+0x5d8>
089fbbd1 +0x28f:  mov    %edx,%ebx
089fbbd3 +0x291:  mov    %eax,%esi
089fbbd5 +0x293:  mov    0x8(%ebp),%eax
089fbbd8 +0x296:  add    $0x6bc,%eax
089fbbdd +0x29b:  mov    %eax,(%esp)
089fbbe0 +0x29e:  call   08581d96 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x528>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x528
089fbbe5 +0x2a3:  mov    %esi,%eax
089fbbe7 +0x2a5:  mov    %ebx,%edx
089fbbe9 +0x2a7:  jmp    089fbbeb <+0x2a9>
089fbbeb +0x2a9:  mov    %edx,%ebx
089fbbed +0x2ab:  mov    %eax,%esi
089fbbef +0x2ad:  mov    0x8(%ebp),%eax
089fbbf2 +0x2b0:  add    $0x6a4,%eax
089fbbf7 +0x2b5:  mov    %eax,(%esp)
089fbbfa +0x2b8:  call   08581d50 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x4e2>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x4e2
089fbbff +0x2bd:  mov    %esi,%eax
089fbc01 +0x2bf:  mov    %ebx,%edx
089fbc03 +0x2c1:  jmp    089fbc05 <+0x2c3>
089fbc05 +0x2c3:  mov    %edx,%ebx
089fbc07 +0x2c5:  mov    %eax,%esi
089fbc09 +0x2c7:  mov    0x8(%ebp),%eax
089fbc0c +0x2ca:  add    $0x698,%eax
089fbc11 +0x2cf:  mov    %eax,(%esp)
089fbc14 +0x2d2:  call   08582842 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0xfd4>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0xfd4
089fbc19 +0x2d7:  mov    %esi,%eax
089fbc1b +0x2d9:  mov    %ebx,%edx
089fbc1d +0x2db:  jmp    089fbc1f <+0x2dd>
089fbc1f +0x2dd:  mov    %edx,%ebx
089fbc21 +0x2df:  mov    %eax,%esi
089fbc23 +0x2e1:  mov    0x8(%ebp),%eax
089fbc26 +0x2e4:  add    $0x68c,%eax
089fbc2b +0x2e9:  mov    %eax,(%esp)
089fbc2e +0x2ec:  call   080ccf74 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dc1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dc1
089fbc33 +0x2f1:  mov    %esi,%eax
089fbc35 +0x2f3:  mov    %ebx,%edx
089fbc37 +0x2f5:  jmp    089fbc39 <+0x2f7>
089fbc39 +0x2f7:  mov    %edx,%ebx
089fbc3b +0x2f9:  mov    %eax,%esi
089fbc3d +0x2fb:  mov    0x8(%ebp),%eax
089fbc40 +0x2fe:  add    $0x684,%eax
089fbc45 +0x303:  mov    %eax,(%esp)
089fbc48 +0x306:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
089fbc4d +0x30b:  mov    %esi,%eax
089fbc4f +0x30d:  mov    %ebx,%edx
089fbc51 +0x30f:  jmp    089fbc53 <+0x311>
089fbc53 +0x311:  mov    %edx,%ebx
089fbc55 +0x313:  mov    %eax,%esi
089fbc57 +0x315:  mov    0x8(%ebp),%eax
089fbc5a +0x318:  add    $0x170,%eax
089fbc5f +0x31d:  mov    %eax,(%esp)
089fbc62 +0x320:  call   08581ae0 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x272>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x272
089fbc67 +0x325:  mov    %esi,%eax
089fbc69 +0x327:  mov    %ebx,%edx
089fbc6b +0x329:  jmp    089fbc6d <+0x32b>
089fbc6d +0x32b:  mov    %edx,%ebx
089fbc6f +0x32d:  mov    %eax,%esi
089fbc71 +0x32f:  mov    0x8(%ebp),%eax
089fbc74 +0x332:  add    $0x164,%eax
089fbc79 +0x337:  mov    %eax,(%esp)
089fbc7c +0x33a:  call   085825a8 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0xd3a>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0xd3a
089fbc81 +0x33f:  mov    %esi,%eax
089fbc83 +0x341:  mov    %ebx,%edx
089fbc85 +0x343:  jmp    089fbc87 <+0x345>
089fbc87 +0x345:  mov    %edx,%ebx
089fbc89 +0x347:  mov    %eax,%esi
089fbc8b +0x349:  mov    0x8(%ebp),%eax
089fbc8e +0x34c:  add    $0x158,%eax
089fbc93 +0x351:  mov    %eax,(%esp)
089fbc96 +0x354:  call   0858254a <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0xcdc>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0xcdc
089fbc9b +0x359:  mov    %esi,%eax
089fbc9d +0x35b:  mov    %ebx,%edx
089fbc9f +0x35d:  jmp    089fbca1 <+0x35f>
089fbca1 +0x35f:  mov    %edx,%ebx
089fbca3 +0x361:  mov    %eax,%esi
089fbca5 +0x363:  mov    0x8(%ebp),%eax
089fbca8 +0x366:  add    $0x14c,%eax
089fbcad +0x36b:  mov    %eax,(%esp)
089fbcb0 +0x36e:  call   080ccf74 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dc1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dc1
089fbcb5 +0x373:  mov    %esi,%eax
089fbcb7 +0x375:  mov    %ebx,%edx
089fbcb9 +0x377:  jmp    089fbcbb <+0x379>
089fbcbb +0x379:  mov    %edx,%ebx
089fbcbd +0x37b:  mov    %eax,%esi
089fbcbf +0x37d:  mov    0x8(%ebp),%eax
089fbcc2 +0x380:  add    $0x140,%eax
089fbcc7 +0x385:  mov    %eax,(%esp)
089fbcca +0x388:  call   085824ec <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0xc7e>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0xc7e
089fbccf +0x38d:  mov    %esi,%eax
089fbcd1 +0x38f:  mov    %ebx,%edx
089fbcd3 +0x391:  jmp    089fbcd5 <+0x393>
089fbcd5 +0x393:  mov    %edx,%ebx
089fbcd7 +0x395:  mov    %eax,%esi
089fbcd9 +0x397:  mov    0x8(%ebp),%eax
089fbcdc +0x39a:  add    $0x134,%eax
089fbce1 +0x39f:  mov    %eax,(%esp)
089fbce4 +0x3a2:  call   0838387a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1331a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1331a
089fbce9 +0x3a7:  mov    %esi,%eax
089fbceb +0x3a9:  mov    %ebx,%edx
089fbced +0x3ab:  jmp    089fbcef <+0x3ad>
089fbcef +0x3ad:  mov    %edx,%ebx
089fbcf1 +0x3af:  mov    %eax,%esi
089fbcf3 +0x3b1:  mov    0x8(%ebp),%eax
089fbcf6 +0x3b4:  add    $0x128,%eax
089fbcfb +0x3b9:  mov    %eax,(%esp)
089fbcfe +0x3bc:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
089fbd03 +0x3c1:  mov    %esi,%eax
089fbd05 +0x3c3:  mov    %ebx,%edx
089fbd07 +0x3c5:  jmp    089fbd09 <+0x3c7>
089fbd09 +0x3c7:  mov    %edx,%ebx
089fbd0b +0x3c9:  mov    %eax,%esi
089fbd0d +0x3cb:  mov    0x8(%ebp),%eax
089fbd10 +0x3ce:  add    $0x11c,%eax
089fbd15 +0x3d3:  mov    %eax,(%esp)
089fbd18 +0x3d6:  call   080ccf74 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dc1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dc1
089fbd1d +0x3db:  mov    %esi,%eax
089fbd1f +0x3dd:  mov    %ebx,%edx
089fbd21 +0x3df:  jmp    089fbd23 <+0x3e1>
089fbd23 +0x3e1:  mov    %edx,%ebx
089fbd25 +0x3e3:  mov    %eax,%esi
089fbd27 +0x3e5:  mov    0x8(%ebp),%eax
089fbd2a +0x3e8:  add    $0x110,%eax
089fbd2f +0x3ed:  mov    %eax,(%esp)
089fbd32 +0x3f0:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
089fbd37 +0x3f5:  mov    %esi,%eax
089fbd39 +0x3f7:  mov    %ebx,%edx
089fbd3b +0x3f9:  jmp    089fbd3d <+0x3fb>
089fbd3d +0x3fb:  mov    %edx,%ebx
089fbd3f +0x3fd:  mov    %eax,%esi
089fbd41 +0x3ff:  mov    0x8(%ebp),%eax
089fbd44 +0x402:  add    $0x104,%eax
089fbd49 +0x407:  mov    %eax,(%esp)
089fbd4c +0x40a:  call   080ccf74 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dc1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dc1
089fbd51 +0x40f:  mov    %esi,%eax
089fbd53 +0x411:  mov    %ebx,%edx
089fbd55 +0x413:  jmp    089fbd57 <+0x415>
089fbd57 +0x415:  mov    %edx,%ebx
089fbd59 +0x417:  mov    %eax,%esi
089fbd5b +0x419:  mov    0x8(%ebp),%eax
089fbd5e +0x41c:  add    $0x100,%eax
089fbd63 +0x421:  mov    %eax,(%esp)
089fbd66 +0x424:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
089fbd6b +0x429:  mov    %esi,%eax
089fbd6d +0x42b:  mov    %ebx,%edx
089fbd6f +0x42d:  jmp    089fbd71 <+0x42f>
089fbd71 +0x42f:  mov    %edx,%ebx
089fbd73 +0x431:  mov    %eax,%esi
089fbd75 +0x433:  mov    0x8(%ebp),%eax
089fbd78 +0x436:  add    $0xfc,%eax
089fbd7d +0x43b:  mov    %eax,(%esp)
089fbd80 +0x43e:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
089fbd85 +0x443:  mov    %esi,%eax
089fbd87 +0x445:  mov    %ebx,%edx
089fbd89 +0x447:  jmp    089fbd8b <+0x449>
089fbd8b +0x449:  mov    %edx,%ebx
089fbd8d +0x44b:  mov    %eax,%esi
089fbd8f +0x44d:  mov    0x8(%ebp),%eax
089fbd92 +0x450:  add    $0xf8,%eax
089fbd97 +0x455:  mov    %eax,(%esp)
089fbd9a +0x458:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
089fbd9f +0x45d:  mov    %esi,%eax
089fbda1 +0x45f:  mov    %ebx,%edx
089fbda3 +0x461:  jmp    089fbda5 <+0x463>
089fbda5 +0x463:  mov    %edx,%esi
089fbda7 +0x465:  mov    %eax,%edi
089fbda9 +0x467:  mov    0x8(%ebp),%eax
089fbdac +0x46a:  add    $0x68,%eax
089fbdaf +0x46d:  test   %eax,%eax
089fbdb1 +0x46f:  je     089fbdd6 <+0x494>
089fbdb3 +0x471:  mov    0x8(%ebp),%eax
089fbdb6 +0x474:  add    $0x68,%eax
089fbdb9 +0x477:  lea    0x90(%eax),%ebx
089fbdbf +0x47d:  mov    0x8(%ebp),%eax
089fbdc2 +0x480:  add    $0x68,%eax
089fbdc5 +0x483:  cmp    %eax,%ebx
089fbdc7 +0x485:  je     089fbdd6 <+0x494>
089fbdc9 +0x487:  sub    $0xc,%ebx
089fbdcc +0x48a:  mov    %ebx,(%esp)
089fbdcf +0x48d:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
089fbdd4 +0x492:  jmp    089fbdbf <+0x47d>
089fbdd6 +0x494:  mov    %edi,%eax
089fbdd8 +0x496:  mov    %esi,%edx
089fbdda +0x498:  mov    %edx,%ebx
089fbddc +0x49a:  mov    %eax,%esi
089fbdde +0x49c:  mov    0x8(%ebp),%eax
089fbde1 +0x49f:  add    $0x64,%eax
089fbde4 +0x4a2:  mov    %eax,(%esp)
089fbde7 +0x4a5:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
089fbdec +0x4aa:  mov    %esi,%eax
089fbdee +0x4ac:  mov    %ebx,%edx
089fbdf0 +0x4ae:  jmp    089fbdf2 <+0x4b0>
089fbdf2 +0x4b0:  mov    %edx,%ebx
089fbdf4 +0x4b2:  mov    %eax,%esi
089fbdf6 +0x4b4:  mov    0x8(%ebp),%eax
089fbdf9 +0x4b7:  add    $0x4c,%eax
089fbdfc +0x4ba:  mov    %eax,(%esp)
089fbdff +0x4bd:  call   08581a58 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x1ea>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x1ea
089fbe04 +0x4c2:  mov    %esi,%eax
089fbe06 +0x4c4:  mov    %ebx,%edx
089fbe08 +0x4c6:  jmp    089fbe0a <+0x4c8>
089fbe0a +0x4c8:  mov    %edx,%ebx
089fbe0c +0x4ca:  mov    %eax,%esi
089fbe0e +0x4cc:  mov    0x8(%ebp),%eax
089fbe11 +0x4cf:  add    $0x40,%eax
089fbe14 +0x4d2:  mov    %eax,(%esp)
089fbe17 +0x4d5:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
089fbe1c +0x4da:  mov    %esi,%eax
089fbe1e +0x4dc:  mov    %ebx,%edx
089fbe20 +0x4de:  jmp    089fbe22 <+0x4e0>
089fbe22 +0x4e0:  mov    %edx,%ebx
089fbe24 +0x4e2:  mov    %eax,%esi
089fbe26 +0x4e4:  mov    0x8(%ebp),%eax
089fbe29 +0x4e7:  add    $0x3c,%eax
089fbe2c +0x4ea:  mov    %eax,(%esp)
089fbe2f +0x4ed:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
089fbe34 +0x4f2:  mov    %esi,%eax
089fbe36 +0x4f4:  mov    %ebx,%edx
089fbe38 +0x4f6:  jmp    089fbe3a <+0x4f8>
089fbe3a +0x4f8:  mov    %edx,%esi
089fbe3c +0x4fa:  mov    %eax,%edi
089fbe3e +0x4fc:  mov    0x8(%ebp),%eax
089fbe41 +0x4ff:  add    $0x2c,%eax
089fbe44 +0x502:  test   %eax,%eax
089fbe46 +0x504:  je     089fbe68 <+0x526>
089fbe48 +0x506:  mov    0x8(%ebp),%eax
089fbe4b +0x509:  add    $0x2c,%eax
089fbe4e +0x50c:  lea    0x8(%eax),%ebx
089fbe51 +0x50f:  mov    0x8(%ebp),%eax
089fbe54 +0x512:  add    $0x2c,%eax
089fbe57 +0x515:  cmp    %eax,%ebx
089fbe59 +0x517:  je     089fbe68 <+0x526>
089fbe5b +0x519:  sub    $0x4,%ebx
089fbe5e +0x51c:  mov    %ebx,(%esp)
089fbe61 +0x51f:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
089fbe66 +0x524:  jmp    089fbe51 <+0x50f>
089fbe68 +0x526:  mov    %edi,%eax
089fbe6a +0x528:  mov    %esi,%edx
089fbe6c +0x52a:  mov    %edx,%ebx
089fbe6e +0x52c:  mov    %eax,%esi
089fbe70 +0x52e:  mov    0x8(%ebp),%eax
089fbe73 +0x531:  add    $0x28,%eax
089fbe76 +0x534:  mov    %eax,(%esp)
089fbe79 +0x537:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
089fbe7e +0x53c:  mov    %esi,%eax
089fbe80 +0x53e:  mov    %ebx,%edx
089fbe82 +0x540:  jmp    089fbe84 <+0x542>
089fbe84 +0x542:  mov    %edx,%ebx
089fbe86 +0x544:  mov    %eax,%esi
089fbe88 +0x546:  mov    0x8(%ebp),%eax
089fbe8b +0x549:  add    $0x24,%eax
089fbe8e +0x54c:  mov    %eax,(%esp)
089fbe91 +0x54f:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
089fbe96 +0x554:  mov    %esi,%eax
089fbe98 +0x556:  mov    %ebx,%edx
089fbe9a +0x558:  jmp    089fbe9c <+0x55a>
089fbe9c +0x55a:  mov    %edx,%ebx
089fbe9e +0x55c:  mov    %eax,%esi
089fbea0 +0x55e:  mov    0x8(%ebp),%eax
089fbea3 +0x561:  add    $0x1c,%eax
089fbea6 +0x564:  mov    %eax,(%esp)
089fbea9 +0x567:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
089fbeae +0x56c:  mov    %esi,%eax
089fbeb0 +0x56e:  mov    %ebx,%edx
089fbeb2 +0x570:  jmp    089fbeb4 <+0x572>
089fbeb4 +0x572:  mov    %edx,%ebx
089fbeb6 +0x574:  mov    %eax,%esi
089fbeb8 +0x576:  mov    0x8(%ebp),%eax
089fbebb +0x579:  add    $0x14,%eax
089fbebe +0x57c:  mov    %eax,(%esp)
089fbec1 +0x57f:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
089fbec6 +0x584:  mov    %esi,%eax
089fbec8 +0x586:  mov    %ebx,%edx
089fbeca +0x588:  jmp    089fbecc <+0x58a>
089fbecc +0x58a:  mov    %edx,%ebx
089fbece +0x58c:  mov    %eax,%esi
089fbed0 +0x58e:  mov    0x8(%ebp),%eax
089fbed3 +0x591:  add    $0xc,%eax
089fbed6 +0x594:  mov    %eax,(%esp)
089fbed9 +0x597:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
089fbede +0x59c:  mov    %esi,%eax
089fbee0 +0x59e:  mov    %ebx,%edx
089fbee2 +0x5a0:  jmp    089fbee4 <+0x5a2>
089fbee4 +0x5a2:  mov    %edx,%ebx
089fbee6 +0x5a4:  mov    %eax,%esi
089fbee8 +0x5a6:  mov    0x8(%ebp),%eax
089fbeeb +0x5a9:  add    $0x8,%eax
089fbeee +0x5ac:  mov    %eax,(%esp)
089fbef1 +0x5af:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
089fbef6 +0x5b4:  mov    %esi,%eax
089fbef8 +0x5b6:  mov    %ebx,%edx
089fbefa +0x5b8:  jmp    089fbefc <+0x5ba>
089fbefc +0x5ba:  mov    %edx,%ebx
089fbefe +0x5bc:  mov    %eax,%esi
089fbf00 +0x5be:  mov    0x8(%ebp),%eax
089fbf03 +0x5c1:  add    $0x4,%eax
089fbf06 +0x5c4:  mov    %eax,(%esp)
089fbf09 +0x5c7:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
089fbf0e +0x5cc:  mov    %esi,%eax
089fbf10 +0x5ce:  mov    %ebx,%edx
089fbf12 +0x5d0:  mov    %eax,(%esp)
089fbf15 +0x5d3:  call   08ae3750 <_Unwind_Resume>
089fbf1a +0x5d8:  add    $0x2c,%esp
089fbf1d +0x5db:  pop    %ebx
089fbf1e +0x5dc:  pop    %esi
089fbf1f +0x5dd:  pop    %edi
089fbf20 +0x5de:  pop    %ebp
089fbf21 +0x5df:  ret
```

## 反编译 C

```c
// NpcScript::NpcScript @ 0x89fb942

/* NpcScript::NpcScript() */

void __thiscall NpcScript::NpcScript(NpcScript *this)

{
  int iVar1;
  string *this_00;
  vector<int,std::allocator<int>> *this_01;
  
  std::string::string((string *)(this + 4));
                    /* try { // try from 089fb962 to 089fb966 has its CatchHandler @ 089fbefc */
  std::string::string((string *)(this + 8));
                    /* try { // try from 089fb970 to 089fb974 has its CatchHandler @ 089fbee4 */
  std::string::string((string *)(this + 0xc));
                    /* try { // try from 089fb97e to 089fb982 has its CatchHandler @ 089fbecc */
  std::string::string((string *)(this + 0x14));
                    /* try { // try from 089fb98c to 089fb990 has its CatchHandler @ 089fbeb4 */
  std::string::string((string *)(this + 0x1c));
                    /* try { // try from 089fb99a to 089fb99e has its CatchHandler @ 089fbe9c */
  std::string::string((string *)(this + 0x24));
                    /* try { // try from 089fb9a8 to 089fb9ac has its CatchHandler @ 089fbe84 */
  std::string::string((string *)(this + 0x28));
  this_00 = (string *)(this + 0x2c);
  for (iVar1 = 1; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 089fb9bf to 089fb9c3 has its CatchHandler @ 089fb9d6 */
    std::string::string(this_00);
    this_00 = this_00 + 4;
  }
                    /* try { // try from 089fba10 to 089fba14 has its CatchHandler @ 089fbe3a */
  std::string::string((string *)(this + 0x3c));
                    /* try { // try from 089fba1e to 089fba22 has its CatchHandler @ 089fbe22 */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x40));
                    /* try { // try from 089fba2c to 089fba30 has its CatchHandler @ 089fbe0a */
  std::
  map<ENUM_NPC_ROLE,int,std::less<ENUM_NPC_ROLE>,std::allocator<std::pair<ENUM_NPC_ROLE_const,int>>>
  ::map((map<ENUM_NPC_ROLE,int,std::less<ENUM_NPC_ROLE>,std::allocator<std::pair<ENUM_NPC_ROLE_const,int>>>
         *)(this + 0x4c));
                    /* try { // try from 089fba3a to 089fba3e has its CatchHandler @ 089fbdf2 */
  std::string::string((string *)(this + 100));
  this_01 = (vector<int,std::allocator<int>> *)(this + 0x68);
  for (iVar1 = 0xb; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 089fba51 to 089fba55 has its CatchHandler @ 089fba68 */
    std::vector<int,std::allocator<int>>::vector(this_01);
    this_01 = this_01 + 0xc;
  }
                    /* try { // try from 089fbaac to 089fbab0 has its CatchHandler @ 089fbda5 */
  std::string::string((string *)(this + 0xf8));
                    /* try { // try from 089fbabc to 089fbac0 has its CatchHandler @ 089fbd8b */
  std::string::string((string *)(this + 0xfc));
                    /* try { // try from 089fbacc to 089fbad0 has its CatchHandler @ 089fbd71 */
  std::string::string((string *)(this + 0x100));
                    /* try { // try from 089fbadc to 089fbae0 has its CatchHandler @ 089fbd57 */
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x104));
                    /* try { // try from 089fbaec to 089fbaf0 has its CatchHandler @ 089fbd3d */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x110));
                    /* try { // try from 089fbafc to 089fbb00 has its CatchHandler @ 089fbd23 */
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x11c));
                    /* try { // try from 089fbb0c to 089fbb10 has its CatchHandler @ 089fbd09 */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x128));
                    /* try { // try from 089fbb1c to 089fbb20 has its CatchHandler @ 089fbcef */
  std::vector<InteractiveDialogScript,std::allocator<InteractiveDialogScript>>::vector
            ((vector<InteractiveDialogScript,std::allocator<InteractiveDialogScript>> *)
             (this + 0x134));
                    /* try { // try from 089fbb2c to 089fbb30 has its CatchHandler @ 089fbcd5 */
  std::vector<PresentResponceScript,std::allocator<PresentResponceScript>>::vector
            ((vector<PresentResponceScript,std::allocator<PresentResponceScript>> *)(this + 0x140));
                    /* try { // try from 089fbb3c to 089fbb40 has its CatchHandler @ 089fbcbb */
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x14c));
                    /* try { // try from 089fbb4c to 089fbb50 has its CatchHandler @ 089fbca1 */
  std::vector<PresentResponceScriptException,std::allocator<PresentResponceScriptException>>::vector
            ((vector<PresentResponceScriptException,std::allocator<PresentResponceScriptException>>
              *)(this + 0x158));
                    /* try { // try from 089fbb5c to 089fbb60 has its CatchHandler @ 089fbc87 */
  std::vector<PresentResponceScriptEvent,std::allocator<PresentResponceScriptEvent>>::vector
            ((vector<PresentResponceScriptEvent,std::allocator<PresentResponceScriptEvent>> *)
             (this + 0x164));
                    /* try { // try from 089fbb6c to 089fbb70 has its CatchHandler @ 089fbc6d */
  stFavorableRelationShip_t::stFavorableRelationShip_t((stFavorableRelationShip_t *)(this + 0x170));
                    /* try { // try from 089fbb7c to 089fbb80 has its CatchHandler @ 089fbc53 */
  std::string::string((string *)(this + 0x684));
                    /* try { // try from 089fbb8c to 089fbb90 has its CatchHandler @ 089fbc39 */
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x68c));
                    /* try { // try from 089fbb9c to 089fbba0 has its CatchHandler @ 089fbc1f */
  std::vector<ClickMarkInfo,std::allocator<ClickMarkInfo>>::vector
            ((vector<ClickMarkInfo,std::allocator<ClickMarkInfo>> *)(this + 0x698));
                    /* try { // try from 089fbbac to 089fbbb0 has its CatchHandler @ 089fbc05 */
  randomMessageBalloonInfo::randomMessageBalloonInfo((randomMessageBalloonInfo *)(this + 0x6a4));
                    /* try { // try from 089fbbbc to 089fbbc0 has its CatchHandler @ 089fbbeb */
  NpcMovieData::NpcMovieData((NpcMovieData *)(this + 0x6bc));
                    /* try { // try from 089fbbc7 to 089fbbcb has its CatchHandler @ 089fbbd1 */
  clear(this);
  return;
}
```
