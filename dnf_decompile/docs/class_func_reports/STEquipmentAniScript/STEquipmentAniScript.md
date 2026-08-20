# STEquipmentAniScript

`_ZN20STEquipmentAniScriptC1Ev`

`STEquipmentAniScript::STEquipmentAniScript()`

| 类 | 地址 |
|---|---|
| `STEquipmentAniScript` | `0x0898ca36` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0898ca36  _ZN20STEquipmentAniScriptC1Ev
#           STEquipmentAniScript::STEquipmentAniScript()
# range [0x0898ca36, 0x0898ce61]
0898ca36 +0x000:  push   %ebp
0898ca37 +0x001:  mov    %esp,%ebp
0898ca39 +0x003:  push   %edi
0898ca3a +0x004:  push   %esi
0898ca3b +0x005:  push   %ebx
0898ca3c +0x006:  sub    $0x2c,%esp
0898ca3f +0x009:  mov    0x8(%ebp),%eax
0898ca42 +0x00c:  add    $0x4,%eax
0898ca45 +0x00f:  mov    %eax,(%esp)
0898ca48 +0x012:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0898ca4d +0x017:  mov    0x8(%ebp),%eax
0898ca50 +0x01a:  add    $0x8,%eax
0898ca53 +0x01d:  mov    %eax,(%esp)
0898ca56 +0x020:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0898ca5b +0x025:  mov    0x8(%ebp),%eax
0898ca5e +0x028:  add    $0xc,%eax
0898ca61 +0x02b:  mov    %eax,(%esp)
0898ca64 +0x02e:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0898ca69 +0x033:  mov    0x8(%ebp),%eax
0898ca6c +0x036:  lea    0x10(%eax),%esi
0898ca6f +0x039:  mov    %esi,%edi
0898ca71 +0x03b:  mov    $0x1,%ebx
0898ca76 +0x040:  jmp    0898ca86 <+0x50>
0898ca78 +0x042:  mov    %edi,(%esp)
0898ca7b +0x045:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0898ca80 +0x04a:  add    $0x4,%edi
0898ca83 +0x04d:  sub    $0x1,%ebx
0898ca86 +0x050:  cmp    $0xffffffff,%ebx
0898ca89 +0x053:  setne  %al
0898ca8c +0x056:  test   %al,%al
0898ca8e +0x058:  jne    0898ca78 <+0x42>
0898ca90 +0x05a:  jmp    0898cac3 <+0x8d>
0898ca92 +0x05c:  mov    %edx,%edi
0898ca94 +0x05e:  mov    %eax,-0x24(%ebp)
0898ca97 +0x061:  test   %esi,%esi
0898ca99 +0x063:  je     0898cab9 <+0x83>
0898ca9b +0x065:  mov    $0x1,%eax
0898caa0 +0x06a:  sub    %ebx,%eax
0898caa2 +0x06c:  shl    $0x2,%eax
0898caa5 +0x06f:  lea    (%esi,%eax,1),%ebx
0898caa8 +0x072:  cmp    %esi,%ebx
0898caaa +0x074:  je     0898cab9 <+0x83>
0898caac +0x076:  sub    $0x4,%ebx
0898caaf +0x079:  mov    %ebx,(%esp)
0898cab2 +0x07c:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898cab7 +0x081:  jmp    0898caa8 <+0x72>
0898cab9 +0x083:  mov    -0x24(%ebp),%eax
0898cabc +0x086:  mov    %edi,%edx
0898cabe +0x088:  jmp    0898ce0b <+0x3d5>
0898cac3 +0x08d:  mov    0x8(%ebp),%eax
0898cac6 +0x090:  add    $0x18,%eax
0898cac9 +0x093:  mov    %eax,(%esp)
0898cacc +0x096:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0898cad1 +0x09b:  mov    0x8(%ebp),%eax
0898cad4 +0x09e:  add    $0x1c,%eax
0898cad7 +0x0a1:  mov    %eax,(%esp)
0898cada +0x0a4:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0898cadf +0x0a9:  mov    0x8(%ebp),%eax
0898cae2 +0x0ac:  add    $0x20,%eax
0898cae5 +0x0af:  mov    %eax,(%esp)
0898cae8 +0x0b2:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0898caed +0x0b7:  mov    0x8(%ebp),%eax
0898caf0 +0x0ba:  add    $0x24,%eax
0898caf3 +0x0bd:  mov    %eax,(%esp)
0898caf6 +0x0c0:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0898cafb +0x0c5:  mov    0x8(%ebp),%eax
0898cafe +0x0c8:  add    $0x28,%eax
0898cb01 +0x0cb:  mov    %eax,(%esp)
0898cb04 +0x0ce:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0898cb09 +0x0d3:  mov    0x8(%ebp),%eax
0898cb0c +0x0d6:  lea    0x2c(%eax),%esi
0898cb0f +0x0d9:  mov    %esi,%edi
0898cb11 +0x0db:  mov    $0x3,%ebx
0898cb16 +0x0e0:  jmp    0898cb26 <+0xf0>
0898cb18 +0x0e2:  mov    %edi,(%esp)
0898cb1b +0x0e5:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0898cb20 +0x0ea:  add    $0x4,%edi
0898cb23 +0x0ed:  sub    $0x1,%ebx
0898cb26 +0x0f0:  cmp    $0xffffffff,%ebx
0898cb29 +0x0f3:  setne  %al
0898cb2c +0x0f6:  test   %al,%al
0898cb2e +0x0f8:  jne    0898cb18 <+0xe2>
0898cb30 +0x0fa:  jmp    0898cb63 <+0x12d>
0898cb32 +0x0fc:  mov    %edx,%edi
0898cb34 +0x0fe:  mov    %eax,-0x20(%ebp)
0898cb37 +0x101:  test   %esi,%esi
0898cb39 +0x103:  je     0898cb59 <+0x123>
0898cb3b +0x105:  mov    $0x3,%eax
0898cb40 +0x10a:  sub    %ebx,%eax
0898cb42 +0x10c:  shl    $0x2,%eax
0898cb45 +0x10f:  lea    (%esi,%eax,1),%ebx
0898cb48 +0x112:  cmp    %esi,%ebx
0898cb4a +0x114:  je     0898cb59 <+0x123>
0898cb4c +0x116:  sub    $0x4,%ebx
0898cb4f +0x119:  mov    %ebx,(%esp)
0898cb52 +0x11c:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898cb57 +0x121:  jmp    0898cb48 <+0x112>
0898cb59 +0x123:  mov    -0x20(%ebp),%eax
0898cb5c +0x126:  mov    %edi,%edx
0898cb5e +0x128:  jmp    0898cd61 <+0x32b>
0898cb63 +0x12d:  mov    0x8(%ebp),%eax
0898cb66 +0x130:  lea    0x3c(%eax),%esi
0898cb69 +0x133:  mov    %esi,%edi
0898cb6b +0x135:  mov    $0x3,%ebx
0898cb70 +0x13a:  jmp    0898cb80 <+0x14a>
0898cb72 +0x13c:  mov    %edi,(%esp)
0898cb75 +0x13f:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0898cb7a +0x144:  add    $0x4,%edi
0898cb7d +0x147:  sub    $0x1,%ebx
0898cb80 +0x14a:  cmp    $0xffffffff,%ebx
0898cb83 +0x14d:  setne  %al
0898cb86 +0x150:  test   %al,%al
0898cb88 +0x152:  jne    0898cb72 <+0x13c>
0898cb8a +0x154:  jmp    0898cbbd <+0x187>
0898cb8c +0x156:  mov    %edx,%edi
0898cb8e +0x158:  mov    %eax,-0x1c(%ebp)
0898cb91 +0x15b:  test   %esi,%esi
0898cb93 +0x15d:  je     0898cbb3 <+0x17d>
0898cb95 +0x15f:  mov    $0x3,%eax
0898cb9a +0x164:  sub    %ebx,%eax
0898cb9c +0x166:  shl    $0x2,%eax
0898cb9f +0x169:  lea    (%esi,%eax,1),%ebx
0898cba2 +0x16c:  cmp    %esi,%ebx
0898cba4 +0x16e:  je     0898cbb3 <+0x17d>
0898cba6 +0x170:  sub    $0x4,%ebx
0898cba9 +0x173:  mov    %ebx,(%esp)
0898cbac +0x176:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898cbb1 +0x17b:  jmp    0898cba2 <+0x16c>
0898cbb3 +0x17d:  mov    -0x1c(%ebp),%eax
0898cbb6 +0x180:  mov    %edi,%edx
0898cbb8 +0x182:  jmp    0898cd2f <+0x2f9>
0898cbbd +0x187:  mov    0x8(%ebp),%eax
0898cbc0 +0x18a:  add    $0x4c,%eax
0898cbc3 +0x18d:  mov    %eax,(%esp)
0898cbc6 +0x190:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0898cbcb +0x195:  mov    0x8(%ebp),%eax
0898cbce +0x198:  add    $0x50,%eax
0898cbd1 +0x19b:  mov    %eax,(%esp)
0898cbd4 +0x19e:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0898cbd9 +0x1a3:  mov    0x8(%ebp),%eax
0898cbdc +0x1a6:  add    $0x54,%eax
0898cbdf +0x1a9:  mov    %eax,(%esp)
0898cbe2 +0x1ac:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0898cbe7 +0x1b1:  mov    0x8(%ebp),%eax
0898cbea +0x1b4:  add    $0x58,%eax
0898cbed +0x1b7:  mov    %eax,(%esp)
0898cbf0 +0x1ba:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0898cbf5 +0x1bf:  mov    0x8(%ebp),%eax
0898cbf8 +0x1c2:  add    $0x5c,%eax
0898cbfb +0x1c5:  mov    %eax,(%esp)
0898cbfe +0x1c8:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0898cc03 +0x1cd:  mov    0x8(%ebp),%eax
0898cc06 +0x1d0:  add    $0x60,%eax
0898cc09 +0x1d3:  mov    %eax,(%esp)
0898cc0c +0x1d6:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0898cc11 +0x1db:  mov    0x8(%ebp),%eax
0898cc14 +0x1de:  add    $0x64,%eax
0898cc17 +0x1e1:  mov    %eax,(%esp)
0898cc1a +0x1e4:  call   080ccf60 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dad>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dad
0898cc1f +0x1e9:  mov    0x8(%ebp),%eax
0898cc22 +0x1ec:  add    $0x70,%eax
0898cc25 +0x1ef:  mov    %eax,(%esp)
0898cc28 +0x1f2:  call   080ccf60 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dad>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dad
0898cc2d +0x1f7:  mov    0x8(%ebp),%eax
0898cc30 +0x1fa:  mov    %eax,(%esp)
0898cc33 +0x1fd:  call   0898ce62 <_ZN20STEquipmentAniScript5clearEv>  ; STEquipmentAniScript::clear()
0898cc38 +0x202:  jmp    0898ce59 <+0x423>
0898cc3d +0x207:  mov    %edx,%ebx
0898cc3f +0x209:  mov    %eax,%esi
0898cc41 +0x20b:  mov    0x8(%ebp),%eax
0898cc44 +0x20e:  add    $0x70,%eax
0898cc47 +0x211:  mov    %eax,(%esp)
0898cc4a +0x214:  call   080ccf74 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dc1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dc1
0898cc4f +0x219:  mov    %esi,%eax
0898cc51 +0x21b:  mov    %ebx,%edx
0898cc53 +0x21d:  jmp    0898cc55 <+0x21f>
0898cc55 +0x21f:  mov    %edx,%ebx
0898cc57 +0x221:  mov    %eax,%esi
0898cc59 +0x223:  mov    0x8(%ebp),%eax
0898cc5c +0x226:  add    $0x64,%eax
0898cc5f +0x229:  mov    %eax,(%esp)
0898cc62 +0x22c:  call   080ccf74 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dc1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dc1
0898cc67 +0x231:  mov    %esi,%eax
0898cc69 +0x233:  mov    %ebx,%edx
0898cc6b +0x235:  jmp    0898cc6d <+0x237>
0898cc6d +0x237:  mov    %edx,%ebx
0898cc6f +0x239:  mov    %eax,%esi
0898cc71 +0x23b:  mov    0x8(%ebp),%eax
0898cc74 +0x23e:  add    $0x60,%eax
0898cc77 +0x241:  mov    %eax,(%esp)
0898cc7a +0x244:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898cc7f +0x249:  mov    %esi,%eax
0898cc81 +0x24b:  mov    %ebx,%edx
0898cc83 +0x24d:  jmp    0898cc85 <+0x24f>
0898cc85 +0x24f:  mov    %edx,%ebx
0898cc87 +0x251:  mov    %eax,%esi
0898cc89 +0x253:  mov    0x8(%ebp),%eax
0898cc8c +0x256:  add    $0x5c,%eax
0898cc8f +0x259:  mov    %eax,(%esp)
0898cc92 +0x25c:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898cc97 +0x261:  mov    %esi,%eax
0898cc99 +0x263:  mov    %ebx,%edx
0898cc9b +0x265:  jmp    0898cc9d <+0x267>
0898cc9d +0x267:  mov    %edx,%ebx
0898cc9f +0x269:  mov    %eax,%esi
0898cca1 +0x26b:  mov    0x8(%ebp),%eax
0898cca4 +0x26e:  add    $0x58,%eax
0898cca7 +0x271:  mov    %eax,(%esp)
0898ccaa +0x274:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898ccaf +0x279:  mov    %esi,%eax
0898ccb1 +0x27b:  mov    %ebx,%edx
0898ccb3 +0x27d:  jmp    0898ccb5 <+0x27f>
0898ccb5 +0x27f:  mov    %edx,%ebx
0898ccb7 +0x281:  mov    %eax,%esi
0898ccb9 +0x283:  mov    0x8(%ebp),%eax
0898ccbc +0x286:  add    $0x54,%eax
0898ccbf +0x289:  mov    %eax,(%esp)
0898ccc2 +0x28c:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898ccc7 +0x291:  mov    %esi,%eax
0898ccc9 +0x293:  mov    %ebx,%edx
0898cccb +0x295:  jmp    0898cccd <+0x297>
0898cccd +0x297:  mov    %edx,%ebx
0898cccf +0x299:  mov    %eax,%esi
0898ccd1 +0x29b:  mov    0x8(%ebp),%eax
0898ccd4 +0x29e:  add    $0x50,%eax
0898ccd7 +0x2a1:  mov    %eax,(%esp)
0898ccda +0x2a4:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898ccdf +0x2a9:  mov    %esi,%eax
0898cce1 +0x2ab:  mov    %ebx,%edx
0898cce3 +0x2ad:  jmp    0898cce5 <+0x2af>
0898cce5 +0x2af:  mov    %edx,%ebx
0898cce7 +0x2b1:  mov    %eax,%esi
0898cce9 +0x2b3:  mov    0x8(%ebp),%eax
0898ccec +0x2b6:  add    $0x4c,%eax
0898ccef +0x2b9:  mov    %eax,(%esp)
0898ccf2 +0x2bc:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898ccf7 +0x2c1:  mov    %esi,%eax
0898ccf9 +0x2c3:  mov    %ebx,%edx
0898ccfb +0x2c5:  jmp    0898ccfd <+0x2c7>
0898ccfd +0x2c7:  mov    %edx,%esi
0898ccff +0x2c9:  mov    %eax,%edi
0898cd01 +0x2cb:  mov    0x8(%ebp),%eax
0898cd04 +0x2ce:  add    $0x3c,%eax
0898cd07 +0x2d1:  test   %eax,%eax
0898cd09 +0x2d3:  je     0898cd2b <+0x2f5>
0898cd0b +0x2d5:  mov    0x8(%ebp),%eax
0898cd0e +0x2d8:  add    $0x3c,%eax
0898cd11 +0x2db:  lea    0x10(%eax),%ebx
0898cd14 +0x2de:  mov    0x8(%ebp),%eax
0898cd17 +0x2e1:  add    $0x3c,%eax
0898cd1a +0x2e4:  cmp    %eax,%ebx
0898cd1c +0x2e6:  je     0898cd2b <+0x2f5>
0898cd1e +0x2e8:  sub    $0x4,%ebx
0898cd21 +0x2eb:  mov    %ebx,(%esp)
0898cd24 +0x2ee:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898cd29 +0x2f3:  jmp    0898cd14 <+0x2de>
0898cd2b +0x2f5:  mov    %edi,%eax
0898cd2d +0x2f7:  mov    %esi,%edx
0898cd2f +0x2f9:  mov    %edx,%esi
0898cd31 +0x2fb:  mov    %eax,%edi
0898cd33 +0x2fd:  mov    0x8(%ebp),%eax
0898cd36 +0x300:  add    $0x2c,%eax
0898cd39 +0x303:  test   %eax,%eax
0898cd3b +0x305:  je     0898cd5d <+0x327>
0898cd3d +0x307:  mov    0x8(%ebp),%eax
0898cd40 +0x30a:  add    $0x2c,%eax
0898cd43 +0x30d:  lea    0x10(%eax),%ebx
0898cd46 +0x310:  mov    0x8(%ebp),%eax
0898cd49 +0x313:  add    $0x2c,%eax
0898cd4c +0x316:  cmp    %eax,%ebx
0898cd4e +0x318:  je     0898cd5d <+0x327>
0898cd50 +0x31a:  sub    $0x4,%ebx
0898cd53 +0x31d:  mov    %ebx,(%esp)
0898cd56 +0x320:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898cd5b +0x325:  jmp    0898cd46 <+0x310>
0898cd5d +0x327:  mov    %edi,%eax
0898cd5f +0x329:  mov    %esi,%edx
0898cd61 +0x32b:  mov    %edx,%ebx
0898cd63 +0x32d:  mov    %eax,%esi
0898cd65 +0x32f:  mov    0x8(%ebp),%eax
0898cd68 +0x332:  add    $0x28,%eax
0898cd6b +0x335:  mov    %eax,(%esp)
0898cd6e +0x338:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898cd73 +0x33d:  mov    %esi,%eax
0898cd75 +0x33f:  mov    %ebx,%edx
0898cd77 +0x341:  jmp    0898cd79 <+0x343>
0898cd79 +0x343:  mov    %edx,%ebx
0898cd7b +0x345:  mov    %eax,%esi
0898cd7d +0x347:  mov    0x8(%ebp),%eax
0898cd80 +0x34a:  add    $0x24,%eax
0898cd83 +0x34d:  mov    %eax,(%esp)
0898cd86 +0x350:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898cd8b +0x355:  mov    %esi,%eax
0898cd8d +0x357:  mov    %ebx,%edx
0898cd8f +0x359:  jmp    0898cd91 <+0x35b>
0898cd91 +0x35b:  mov    %edx,%ebx
0898cd93 +0x35d:  mov    %eax,%esi
0898cd95 +0x35f:  mov    0x8(%ebp),%eax
0898cd98 +0x362:  add    $0x20,%eax
0898cd9b +0x365:  mov    %eax,(%esp)
0898cd9e +0x368:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898cda3 +0x36d:  mov    %esi,%eax
0898cda5 +0x36f:  mov    %ebx,%edx
0898cda7 +0x371:  jmp    0898cda9 <+0x373>
0898cda9 +0x373:  mov    %edx,%ebx
0898cdab +0x375:  mov    %eax,%esi
0898cdad +0x377:  mov    0x8(%ebp),%eax
0898cdb0 +0x37a:  add    $0x1c,%eax
0898cdb3 +0x37d:  mov    %eax,(%esp)
0898cdb6 +0x380:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898cdbb +0x385:  mov    %esi,%eax
0898cdbd +0x387:  mov    %ebx,%edx
0898cdbf +0x389:  jmp    0898cdc1 <+0x38b>
0898cdc1 +0x38b:  mov    %edx,%ebx
0898cdc3 +0x38d:  mov    %eax,%esi
0898cdc5 +0x38f:  mov    0x8(%ebp),%eax
0898cdc8 +0x392:  add    $0x18,%eax
0898cdcb +0x395:  mov    %eax,(%esp)
0898cdce +0x398:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898cdd3 +0x39d:  mov    %esi,%eax
0898cdd5 +0x39f:  mov    %ebx,%edx
0898cdd7 +0x3a1:  jmp    0898cdd9 <+0x3a3>
0898cdd9 +0x3a3:  mov    %edx,%esi
0898cddb +0x3a5:  mov    %eax,%edi
0898cddd +0x3a7:  mov    0x8(%ebp),%eax
0898cde0 +0x3aa:  add    $0x10,%eax
0898cde3 +0x3ad:  test   %eax,%eax
0898cde5 +0x3af:  je     0898ce07 <+0x3d1>
0898cde7 +0x3b1:  mov    0x8(%ebp),%eax
0898cdea +0x3b4:  add    $0x10,%eax
0898cded +0x3b7:  lea    0x8(%eax),%ebx
0898cdf0 +0x3ba:  mov    0x8(%ebp),%eax
0898cdf3 +0x3bd:  add    $0x10,%eax
0898cdf6 +0x3c0:  cmp    %eax,%ebx
0898cdf8 +0x3c2:  je     0898ce07 <+0x3d1>
0898cdfa +0x3c4:  sub    $0x4,%ebx
0898cdfd +0x3c7:  mov    %ebx,(%esp)
0898ce00 +0x3ca:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898ce05 +0x3cf:  jmp    0898cdf0 <+0x3ba>
0898ce07 +0x3d1:  mov    %edi,%eax
0898ce09 +0x3d3:  mov    %esi,%edx
0898ce0b +0x3d5:  mov    %edx,%ebx
0898ce0d +0x3d7:  mov    %eax,%esi
0898ce0f +0x3d9:  mov    0x8(%ebp),%eax
0898ce12 +0x3dc:  add    $0xc,%eax
0898ce15 +0x3df:  mov    %eax,(%esp)
0898ce18 +0x3e2:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898ce1d +0x3e7:  mov    %esi,%eax
0898ce1f +0x3e9:  mov    %ebx,%edx
0898ce21 +0x3eb:  jmp    0898ce23 <+0x3ed>
0898ce23 +0x3ed:  mov    %edx,%ebx
0898ce25 +0x3ef:  mov    %eax,%esi
0898ce27 +0x3f1:  mov    0x8(%ebp),%eax
0898ce2a +0x3f4:  add    $0x8,%eax
0898ce2d +0x3f7:  mov    %eax,(%esp)
0898ce30 +0x3fa:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898ce35 +0x3ff:  mov    %esi,%eax
0898ce37 +0x401:  mov    %ebx,%edx
0898ce39 +0x403:  jmp    0898ce3b <+0x405>
0898ce3b +0x405:  mov    %edx,%ebx
0898ce3d +0x407:  mov    %eax,%esi
0898ce3f +0x409:  mov    0x8(%ebp),%eax
0898ce42 +0x40c:  add    $0x4,%eax
0898ce45 +0x40f:  mov    %eax,(%esp)
0898ce48 +0x412:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898ce4d +0x417:  mov    %esi,%eax
0898ce4f +0x419:  mov    %ebx,%edx
0898ce51 +0x41b:  mov    %eax,(%esp)
0898ce54 +0x41e:  call   08ae3750 <_Unwind_Resume>
0898ce59 +0x423:  add    $0x2c,%esp
0898ce5c +0x426:  pop    %ebx
0898ce5d +0x427:  pop    %esi
0898ce5e +0x428:  pop    %edi
0898ce5f +0x429:  pop    %ebp
0898ce60 +0x42a:  ret
0898ce61 +0x42b:  nop
```

## 反编译 C

```c
// STEquipmentAniScript::STEquipmentAniScript @ 0x898ca36

/* STEquipmentAniScript::STEquipmentAniScript() */

void __thiscall STEquipmentAniScript::STEquipmentAniScript(STEquipmentAniScript *this)

{
  int iVar1;
  string *psVar2;
  
  std::string::string((string *)(this + 4));
                    /* try { // try from 0898ca56 to 0898ca5a has its CatchHandler @ 0898ce3b */
  std::string::string((string *)(this + 8));
                    /* try { // try from 0898ca64 to 0898ca68 has its CatchHandler @ 0898ce23 */
  std::string::string((string *)(this + 0xc));
  psVar2 = (string *)(this + 0x10);
  for (iVar1 = 1; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 0898ca7b to 0898ca7f has its CatchHandler @ 0898ca92 */
    std::string::string(psVar2);
    psVar2 = psVar2 + 4;
  }
                    /* try { // try from 0898cacc to 0898cad0 has its CatchHandler @ 0898cdd9 */
  std::string::string((string *)(this + 0x18));
                    /* try { // try from 0898cada to 0898cade has its CatchHandler @ 0898cdc1 */
  std::string::string((string *)(this + 0x1c));
                    /* try { // try from 0898cae8 to 0898caec has its CatchHandler @ 0898cda9 */
  std::string::string((string *)(this + 0x20));
                    /* try { // try from 0898caf6 to 0898cafa has its CatchHandler @ 0898cd91 */
  std::string::string((string *)(this + 0x24));
                    /* try { // try from 0898cb04 to 0898cb08 has its CatchHandler @ 0898cd79 */
  std::string::string((string *)(this + 0x28));
  psVar2 = (string *)(this + 0x2c);
  for (iVar1 = 3; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 0898cb1b to 0898cb1f has its CatchHandler @ 0898cb32 */
    std::string::string(psVar2);
    psVar2 = psVar2 + 4;
  }
  psVar2 = (string *)(this + 0x3c);
  for (iVar1 = 3; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 0898cb75 to 0898cb79 has its CatchHandler @ 0898cb8c */
    std::string::string(psVar2);
    psVar2 = psVar2 + 4;
  }
                    /* try { // try from 0898cbc6 to 0898cbca has its CatchHandler @ 0898ccfd */
  std::string::string((string *)(this + 0x4c));
                    /* try { // try from 0898cbd4 to 0898cbd8 has its CatchHandler @ 0898cce5 */
  std::string::string((string *)(this + 0x50));
                    /* try { // try from 0898cbe2 to 0898cbe6 has its CatchHandler @ 0898cccd */
  std::string::string((string *)(this + 0x54));
                    /* try { // try from 0898cbf0 to 0898cbf4 has its CatchHandler @ 0898ccb5 */
  std::string::string((string *)(this + 0x58));
                    /* try { // try from 0898cbfe to 0898cc02 has its CatchHandler @ 0898cc9d */
  std::string::string((string *)(this + 0x5c));
                    /* try { // try from 0898cc0c to 0898cc10 has its CatchHandler @ 0898cc85 */
  std::string::string((string *)(this + 0x60));
                    /* try { // try from 0898cc1a to 0898cc1e has its CatchHandler @ 0898cc6d */
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 100));
                    /* try { // try from 0898cc28 to 0898cc2c has its CatchHandler @ 0898cc55 */
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x70));
                    /* try { // try from 0898cc33 to 0898cc37 has its CatchHandler @ 0898cc3d */
  clear(this);
  return;
}
```
