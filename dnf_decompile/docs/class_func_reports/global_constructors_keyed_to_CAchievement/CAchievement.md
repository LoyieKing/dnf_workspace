# CAchievement

`_GLOBAL__I__ZN12CAchievementC2Ev`

`global constructors keyed to CAchievement::CAchievement()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CAchievement` | `0x0828d853` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828d853  _GLOBAL__I__ZN12CAchievementC2Ev
#           global constructors keyed to CAchievement::CAchievement()
# range [0x0828d853, 0x0828f92b]
0828d853 +0x0000:  push   %ebp
0828d854 +0x0001:  mov    %esp,%ebp
0828d856 +0x0003:  sub    $0x18,%esp
0828d859 +0x0006:  movl   $0xffff,0x4(%esp)
0828d861 +0x000e:  movl   $0x1,(%esp)
0828d868 +0x0015:  call   0828d813 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0828d86d +0x001a:  leave
0828d86e +0x001b:  ret
0828d86f +0x001c:  nop
0828d870 +0x001d:  push   %ebp
0828d871 +0x001e:  mov    %esp,%ebp
0828d873 +0x0020:  mov    0x8(%ebp),%eax
0828d876 +0x0023:  movl   $0x0,(%eax)
0828d87c +0x0029:  mov    0x8(%ebp),%eax
0828d87f +0x002c:  movw   $0x0,0x4(%eax)
0828d885 +0x0032:  mov    0x8(%ebp),%eax
0828d888 +0x0035:  movw   $0x0,0x6(%eax)
0828d88e +0x003b:  mov    0x8(%ebp),%eax
0828d891 +0x003e:  movw   $0x0,0x8(%eax)
0828d897 +0x0044:  mov    0x8(%ebp),%eax
0828d89a +0x0047:  movw   $0x0,0xa(%eax)
0828d8a0 +0x004d:  pop    %ebp
0828d8a1 +0x004e:  ret
0828d8a2 +0x004f:  push   %ebp
0828d8a3 +0x0050:  mov    %esp,%ebp
0828d8a5 +0x0052:  mov    0x8(%ebp),%eax
0828d8a8 +0x0055:  movzwl 0x4(%eax),%eax
0828d8ac +0x0059:  test   %ax,%ax
0828d8af +0x005c:  jne    0828d8d0 <+0x7d>
0828d8b1 +0x005e:  mov    0x8(%ebp),%eax
0828d8b4 +0x0061:  movzwl 0x6(%eax),%eax
0828d8b8 +0x0065:  test   %ax,%ax
0828d8bb +0x0068:  jne    0828d8d0 <+0x7d>
0828d8bd +0x006a:  mov    0x8(%ebp),%eax
0828d8c0 +0x006d:  movzwl 0x8(%eax),%eax
0828d8c4 +0x0071:  test   %ax,%ax
0828d8c7 +0x0074:  jne    0828d8d0 <+0x7d>
0828d8c9 +0x0076:  mov    $0x1,%eax
0828d8ce +0x007b:  jmp    0828d8d5 <+0x82>
0828d8d0 +0x007d:  mov    $0x0,%eax
0828d8d5 +0x0082:  pop    %ebp
0828d8d6 +0x0083:  ret
0828d8d7 +0x0084:  nop
0828d8d8 +0x0085:  push   %ebp
0828d8d9 +0x0086:  mov    %esp,%ebp
0828d8db +0x0088:  push   %esi
0828d8dc +0x0089:  push   %ebx
0828d8dd +0x008a:  sub    $0x10,%esp
0828d8e0 +0x008d:  mov    0x8(%ebp),%eax
0828d8e3 +0x0090:  mov    %eax,%ebx
0828d8e5 +0x0092:  mov    $0x1ff,%esi
0828d8ea +0x0097:  jmp    0828d8fa <+0xa7>
0828d8ec +0x0099:  mov    %ebx,(%esp)
0828d8ef +0x009c:  call   0828d870 <+0x1d>
0828d8f4 +0x00a1:  add    $0xc,%ebx
0828d8f7 +0x00a4:  sub    $0x1,%esi
0828d8fa +0x00a7:  cmp    $0xffffffff,%esi
0828d8fd +0x00aa:  setne  %al
0828d900 +0x00ad:  test   %al,%al
0828d902 +0x00af:  jne    0828d8ec <+0x99>
0828d904 +0x00b1:  mov    0x8(%ebp),%eax
0828d907 +0x00b4:  movl   $0x0,0x1800(%eax)
0828d911 +0x00be:  mov    0x8(%ebp),%eax
0828d914 +0x00c1:  movl   $0x0,0x1804(%eax)
0828d91e +0x00cb:  add    $0x10,%esp
0828d921 +0x00ce:  pop    %ebx
0828d922 +0x00cf:  pop    %esi
0828d923 +0x00d0:  pop    %ebp
0828d924 +0x00d1:  ret
0828d925 +0x00d2:  nop
0828d926 +0x00d3:  push   %ebp
0828d927 +0x00d4:  mov    %esp,%ebp
0828d929 +0x00d6:  push   %esi
0828d92a +0x00d7:  push   %ebx
0828d92b +0x00d8:  sub    $0x10,%esp
0828d92e +0x00db:  mov    0x8(%ebp),%eax
0828d931 +0x00de:  add    $0x18,%eax
0828d934 +0x00e1:  mov    %eax,(%esp)
0828d937 +0x00e4:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0828d93c +0x00e9:  jmp    0828d95c <+0x109>
0828d93e +0x00eb:  mov    %edx,%ebx
0828d940 +0x00ed:  mov    %eax,%esi
0828d942 +0x00ef:  mov    0x8(%ebp),%eax
0828d945 +0x00f2:  add    $0x4,%eax
0828d948 +0x00f5:  mov    %eax,(%esp)
0828d94b +0x00f8:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0828d950 +0x00fd:  mov    %esi,%eax
0828d952 +0x00ff:  mov    %ebx,%edx
0828d954 +0x0101:  mov    %eax,(%esp)
0828d957 +0x0104:  call   08ae3750 <_Unwind_Resume>
0828d95c +0x0109:  mov    0x8(%ebp),%eax
0828d95f +0x010c:  add    $0x4,%eax
0828d962 +0x010f:  mov    %eax,(%esp)
0828d965 +0x0112:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0828d96a +0x0117:  add    $0x10,%esp
0828d96d +0x011a:  pop    %ebx
0828d96e +0x011b:  pop    %esi
0828d96f +0x011c:  pop    %ebp
0828d970 +0x011d:  ret
0828d971 +0x011e:  nop
0828d972 +0x011f:  push   %ebp
0828d973 +0x0120:  mov    %esp,%ebp
0828d975 +0x0122:  push   %esi
0828d976 +0x0123:  push   %ebx
0828d977 +0x0124:  sub    $0x10,%esp
0828d97a +0x0127:  mov    0x8(%ebp),%eax
0828d97d +0x012a:  add    $0x34,%eax
0828d980 +0x012d:  mov    %eax,(%esp)
0828d983 +0x0130:  call   0828dc8a <+0x437>
0828d988 +0x0135:  jmp    0828d9a2 <+0x14f>
0828d98a +0x0137:  mov    %edx,%ebx
0828d98c +0x0139:  mov    %eax,%esi
0828d98e +0x013b:  mov    0x8(%ebp),%eax
0828d991 +0x013e:  add    $0x30,%eax
0828d994 +0x0141:  mov    %eax,(%esp)
0828d997 +0x0144:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0828d99c +0x0149:  mov    %esi,%eax
0828d99e +0x014b:  mov    %ebx,%edx
0828d9a0 +0x014d:  jmp    0828d9b2 <+0x15f>
0828d9a2 +0x014f:  mov    0x8(%ebp),%eax
0828d9a5 +0x0152:  add    $0x30,%eax
0828d9a8 +0x0155:  mov    %eax,(%esp)
0828d9ab +0x0158:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0828d9b0 +0x015d:  jmp    0828d9ca <+0x177>
0828d9b2 +0x015f:  mov    %edx,%ebx
0828d9b4 +0x0161:  mov    %eax,%esi
0828d9b6 +0x0163:  mov    0x8(%ebp),%eax
0828d9b9 +0x0166:  add    $0x24,%eax
0828d9bc +0x0169:  mov    %eax,(%esp)
0828d9bf +0x016c:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0828d9c4 +0x0171:  mov    %esi,%eax
0828d9c6 +0x0173:  mov    %ebx,%edx
0828d9c8 +0x0175:  jmp    0828d9da <+0x187>
0828d9ca +0x0177:  mov    0x8(%ebp),%eax
0828d9cd +0x017a:  add    $0x24,%eax
0828d9d0 +0x017d:  mov    %eax,(%esp)
0828d9d3 +0x0180:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0828d9d8 +0x0185:  jmp    0828d9f2 <+0x19f>
0828d9da +0x0187:  mov    %edx,%ebx
0828d9dc +0x0189:  mov    %eax,%esi
0828d9de +0x018b:  mov    0x8(%ebp),%eax
0828d9e1 +0x018e:  add    $0x20,%eax
0828d9e4 +0x0191:  mov    %eax,(%esp)
0828d9e7 +0x0194:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0828d9ec +0x0199:  mov    %esi,%eax
0828d9ee +0x019b:  mov    %ebx,%edx
0828d9f0 +0x019d:  jmp    0828da02 <+0x1af>
0828d9f2 +0x019f:  mov    0x8(%ebp),%eax
0828d9f5 +0x01a2:  add    $0x20,%eax
0828d9f8 +0x01a5:  mov    %eax,(%esp)
0828d9fb +0x01a8:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0828da00 +0x01ad:  jmp    0828da1a <+0x1c7>
0828da02 +0x01af:  mov    %edx,%ebx
0828da04 +0x01b1:  mov    %eax,%esi
0828da06 +0x01b3:  mov    0x8(%ebp),%eax
0828da09 +0x01b6:  add    $0x18,%eax
0828da0c +0x01b9:  mov    %eax,(%esp)
0828da0f +0x01bc:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0828da14 +0x01c1:  mov    %esi,%eax
0828da16 +0x01c3:  mov    %ebx,%edx
0828da18 +0x01c5:  jmp    0828da2a <+0x1d7>
0828da1a +0x01c7:  mov    0x8(%ebp),%eax
0828da1d +0x01ca:  add    $0x18,%eax
0828da20 +0x01cd:  mov    %eax,(%esp)
0828da23 +0x01d0:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0828da28 +0x01d5:  jmp    0828da42 <+0x1ef>
0828da2a +0x01d7:  mov    %edx,%ebx
0828da2c +0x01d9:  mov    %eax,%esi
0828da2e +0x01db:  mov    0x8(%ebp),%eax
0828da31 +0x01de:  add    $0x14,%eax
0828da34 +0x01e1:  mov    %eax,(%esp)
0828da37 +0x01e4:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0828da3c +0x01e9:  mov    %esi,%eax
0828da3e +0x01eb:  mov    %ebx,%edx
0828da40 +0x01ed:  jmp    0828da52 <+0x1ff>
0828da42 +0x01ef:  mov    0x8(%ebp),%eax
0828da45 +0x01f2:  add    $0x14,%eax
0828da48 +0x01f5:  mov    %eax,(%esp)
0828da4b +0x01f8:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0828da50 +0x01fd:  jmp    0828da6a <+0x217>
0828da52 +0x01ff:  mov    %edx,%ebx
0828da54 +0x0201:  mov    %eax,%esi
0828da56 +0x0203:  mov    0x8(%ebp),%eax
0828da59 +0x0206:  add    $0x8,%eax
0828da5c +0x0209:  mov    %eax,(%esp)
0828da5f +0x020c:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0828da64 +0x0211:  mov    %esi,%eax
0828da66 +0x0213:  mov    %ebx,%edx
0828da68 +0x0215:  jmp    0828da7a <+0x227>
0828da6a +0x0217:  mov    0x8(%ebp),%eax
0828da6d +0x021a:  add    $0x8,%eax
0828da70 +0x021d:  mov    %eax,(%esp)
0828da73 +0x0220:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0828da78 +0x0225:  jmp    0828da98 <+0x245>
0828da7a +0x0227:  mov    %edx,%ebx
0828da7c +0x0229:  mov    %eax,%esi
0828da7e +0x022b:  mov    0x8(%ebp),%eax
0828da81 +0x022e:  add    $0x4,%eax
0828da84 +0x0231:  mov    %eax,(%esp)
0828da87 +0x0234:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0828da8c +0x0239:  mov    %esi,%eax
0828da8e +0x023b:  mov    %ebx,%edx
0828da90 +0x023d:  mov    %eax,(%esp)
0828da93 +0x0240:  call   08ae3750 <_Unwind_Resume>
0828da98 +0x0245:  mov    0x8(%ebp),%eax
0828da9b +0x0248:  add    $0x4,%eax
0828da9e +0x024b:  mov    %eax,(%esp)
0828daa1 +0x024e:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0828daa6 +0x0253:  add    $0x10,%esp
0828daa9 +0x0256:  pop    %ebx
0828daaa +0x0257:  pop    %esi
0828daab +0x0258:  pop    %ebp
0828daac +0x0259:  ret
0828daad +0x025a:  nop
0828daae +0x025b:  push   %ebp
0828daaf +0x025c:  mov    %esp,%ebp
0828dab1 +0x025e:  sub    $0x18,%esp
0828dab4 +0x0261:  mov    0x8(%ebp),%eax
0828dab7 +0x0264:  mov    %eax,(%esp)
0828daba +0x0267:  call   0828dd6c <+0x519>
0828dabf +0x026c:  leave
0828dac0 +0x026d:  ret
0828dac1 +0x026e:  nop
0828dac2 +0x026f:  push   %ebp
0828dac3 +0x0270:  mov    %esp,%ebp
0828dac5 +0x0272:  push   %esi
0828dac6 +0x0273:  push   %ebx
0828dac7 +0x0274:  sub    $0x10,%esp
0828daca +0x0277:  mov    0xc(%ebp),%eax
0828dacd +0x027a:  mov    (%eax),%edx
0828dacf +0x027c:  mov    0x8(%ebp),%eax
0828dad2 +0x027f:  mov    %edx,(%eax)
0828dad4 +0x0281:  mov    0xc(%ebp),%eax
0828dad7 +0x0284:  lea    0x4(%eax),%edx
0828dada +0x0287:  mov    0x8(%ebp),%eax
0828dadd +0x028a:  add    $0x4,%eax
0828dae0 +0x028d:  mov    %edx,0x4(%esp)
0828dae4 +0x0291:  mov    %eax,(%esp)
0828dae7 +0x0294:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
0828daec +0x0299:  mov    0xc(%ebp),%eax
0828daef +0x029c:  lea    0x8(%eax),%edx
0828daf2 +0x029f:  mov    0x8(%ebp),%eax
0828daf5 +0x02a2:  add    $0x8,%eax
0828daf8 +0x02a5:  mov    %edx,0x4(%esp)
0828dafc +0x02a9:  mov    %eax,(%esp)
0828daff +0x02ac:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
0828db04 +0x02b1:  mov    0xc(%ebp),%eax
0828db07 +0x02b4:  mov    0xc(%eax),%edx
0828db0a +0x02b7:  mov    0x8(%ebp),%eax
0828db0d +0x02ba:  mov    %edx,0xc(%eax)
0828db10 +0x02bd:  mov    0xc(%ebp),%eax
0828db13 +0x02c0:  mov    0x10(%eax),%edx
0828db16 +0x02c3:  mov    0x8(%ebp),%eax
0828db19 +0x02c6:  mov    %edx,0x10(%eax)
0828db1c +0x02c9:  mov    0xc(%ebp),%eax
0828db1f +0x02cc:  lea    0x14(%eax),%edx
0828db22 +0x02cf:  mov    0x8(%ebp),%eax
0828db25 +0x02d2:  add    $0x14,%eax
0828db28 +0x02d5:  mov    %edx,0x4(%esp)
0828db2c +0x02d9:  mov    %eax,(%esp)
0828db2f +0x02dc:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
0828db34 +0x02e1:  mov    0xc(%ebp),%eax
0828db37 +0x02e4:  lea    0x18(%eax),%edx
0828db3a +0x02e7:  mov    0x8(%ebp),%eax
0828db3d +0x02ea:  add    $0x18,%eax
0828db40 +0x02ed:  mov    %edx,0x4(%esp)
0828db44 +0x02f1:  mov    %eax,(%esp)
0828db47 +0x02f4:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
0828db4c +0x02f9:  mov    0xc(%ebp),%eax
0828db4f +0x02fc:  mov    0x1c(%eax),%edx
0828db52 +0x02ff:  mov    0x8(%ebp),%eax
0828db55 +0x0302:  mov    %edx,0x1c(%eax)
0828db58 +0x0305:  mov    0xc(%ebp),%eax
0828db5b +0x0308:  lea    0x20(%eax),%edx
0828db5e +0x030b:  mov    0x8(%ebp),%eax
0828db61 +0x030e:  add    $0x20,%eax
0828db64 +0x0311:  mov    %edx,0x4(%esp)
0828db68 +0x0315:  mov    %eax,(%esp)
0828db6b +0x0318:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
0828db70 +0x031d:  mov    0xc(%ebp),%eax
0828db73 +0x0320:  lea    0x24(%eax),%edx
0828db76 +0x0323:  mov    0x8(%ebp),%eax
0828db79 +0x0326:  add    $0x24,%eax
0828db7c +0x0329:  mov    %edx,0x4(%esp)
0828db80 +0x032d:  mov    %eax,(%esp)
0828db83 +0x0330:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
0828db88 +0x0335:  mov    0xc(%ebp),%eax
0828db8b +0x0338:  mov    0x28(%eax),%edx
0828db8e +0x033b:  mov    0x8(%ebp),%eax
0828db91 +0x033e:  mov    %edx,0x28(%eax)
0828db94 +0x0341:  mov    0xc(%ebp),%eax
0828db97 +0x0344:  mov    0x2c(%eax),%edx
0828db9a +0x0347:  mov    0x8(%ebp),%eax
0828db9d +0x034a:  mov    %edx,0x2c(%eax)
0828dba0 +0x034d:  mov    0xc(%ebp),%eax
0828dba3 +0x0350:  lea    0x30(%eax),%edx
0828dba6 +0x0353:  mov    0x8(%ebp),%eax
0828dba9 +0x0356:  add    $0x30,%eax
0828dbac +0x0359:  mov    %edx,0x4(%esp)
0828dbb0 +0x035d:  mov    %eax,(%esp)
0828dbb3 +0x0360:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
0828dbb8 +0x0365:  mov    0xc(%ebp),%eax
0828dbbb +0x0368:  lea    0x34(%eax),%edx
0828dbbe +0x036b:  mov    0x8(%ebp),%eax
0828dbc1 +0x036e:  add    $0x34,%eax
0828dbc4 +0x0371:  mov    %edx,0x4(%esp)
0828dbc8 +0x0375:  mov    %eax,(%esp)
0828dbcb +0x0378:  call   0828ded8 <+0x685>
0828dbd0 +0x037d:  jmp    0828dc83 <+0x430>
0828dbd5 +0x0382:  mov    %edx,%ebx
0828dbd7 +0x0384:  mov    %eax,%esi
0828dbd9 +0x0386:  mov    0x8(%ebp),%eax
0828dbdc +0x0389:  add    $0x30,%eax
0828dbdf +0x038c:  mov    %eax,(%esp)
0828dbe2 +0x038f:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0828dbe7 +0x0394:  mov    %esi,%eax
0828dbe9 +0x0396:  mov    %ebx,%edx
0828dbeb +0x0398:  jmp    0828dbed <+0x39a>
0828dbed +0x039a:  mov    %edx,%ebx
0828dbef +0x039c:  mov    %eax,%esi
0828dbf1 +0x039e:  mov    0x8(%ebp),%eax
0828dbf4 +0x03a1:  add    $0x24,%eax
0828dbf7 +0x03a4:  mov    %eax,(%esp)
0828dbfa +0x03a7:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0828dbff +0x03ac:  mov    %esi,%eax
0828dc01 +0x03ae:  mov    %ebx,%edx
0828dc03 +0x03b0:  jmp    0828dc05 <+0x3b2>
0828dc05 +0x03b2:  mov    %edx,%ebx
0828dc07 +0x03b4:  mov    %eax,%esi
0828dc09 +0x03b6:  mov    0x8(%ebp),%eax
0828dc0c +0x03b9:  add    $0x20,%eax
0828dc0f +0x03bc:  mov    %eax,(%esp)
0828dc12 +0x03bf:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0828dc17 +0x03c4:  mov    %esi,%eax
0828dc19 +0x03c6:  mov    %ebx,%edx
0828dc1b +0x03c8:  jmp    0828dc1d <+0x3ca>
0828dc1d +0x03ca:  mov    %edx,%ebx
0828dc1f +0x03cc:  mov    %eax,%esi
0828dc21 +0x03ce:  mov    0x8(%ebp),%eax
0828dc24 +0x03d1:  add    $0x18,%eax
0828dc27 +0x03d4:  mov    %eax,(%esp)
0828dc2a +0x03d7:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0828dc2f +0x03dc:  mov    %esi,%eax
0828dc31 +0x03de:  mov    %ebx,%edx
0828dc33 +0x03e0:  jmp    0828dc35 <+0x3e2>
0828dc35 +0x03e2:  mov    %edx,%ebx
0828dc37 +0x03e4:  mov    %eax,%esi
0828dc39 +0x03e6:  mov    0x8(%ebp),%eax
0828dc3c +0x03e9:  add    $0x14,%eax
0828dc3f +0x03ec:  mov    %eax,(%esp)
0828dc42 +0x03ef:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0828dc47 +0x03f4:  mov    %esi,%eax
0828dc49 +0x03f6:  mov    %ebx,%edx
0828dc4b +0x03f8:  jmp    0828dc4d <+0x3fa>
0828dc4d +0x03fa:  mov    %edx,%ebx
0828dc4f +0x03fc:  mov    %eax,%esi
0828dc51 +0x03fe:  mov    0x8(%ebp),%eax
0828dc54 +0x0401:  add    $0x8,%eax
0828dc57 +0x0404:  mov    %eax,(%esp)
0828dc5a +0x0407:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0828dc5f +0x040c:  mov    %esi,%eax
0828dc61 +0x040e:  mov    %ebx,%edx
0828dc63 +0x0410:  jmp    0828dc65 <+0x412>
0828dc65 +0x0412:  mov    %edx,%ebx
0828dc67 +0x0414:  mov    %eax,%esi
0828dc69 +0x0416:  mov    0x8(%ebp),%eax
0828dc6c +0x0419:  add    $0x4,%eax
0828dc6f +0x041c:  mov    %eax,(%esp)
0828dc72 +0x041f:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0828dc77 +0x0424:  mov    %esi,%eax
0828dc79 +0x0426:  mov    %ebx,%edx
0828dc7b +0x0428:  mov    %eax,(%esp)
0828dc7e +0x042b:  call   08ae3750 <_Unwind_Resume>
0828dc83 +0x0430:  add    $0x10,%esp
0828dc86 +0x0433:  pop    %ebx
0828dc87 +0x0434:  pop    %esi
0828dc88 +0x0435:  pop    %ebp
0828dc89 +0x0436:  ret
0828dc8a +0x0437:  push   %ebp
0828dc8b +0x0438:  mov    %esp,%ebp
0828dc8d +0x043a:  push   %esi
0828dc8e +0x043b:  push   %ebx
0828dc8f +0x043c:  sub    $0x10,%esp
0828dc92 +0x043f:  mov    0x8(%ebp),%eax
0828dc95 +0x0442:  mov    %eax,(%esp)
0828dc98 +0x0445:  call   0828e358 <+0xb05>
0828dc9d +0x044a:  mov    0x8(%ebp),%edx
0828dca0 +0x044d:  mov    0x4(%edx),%ecx
0828dca3 +0x0450:  mov    0x8(%ebp),%edx
0828dca6 +0x0453:  mov    (%edx),%edx
0828dca8 +0x0455:  mov    %eax,0x8(%esp)
0828dcac +0x0459:  mov    %ecx,0x4(%esp)
0828dcb0 +0x045d:  mov    %edx,(%esp)
0828dcb3 +0x0460:  call   0828e360 <+0xb0d>
0828dcb8 +0x0465:  jmp    0828dcd5 <+0x482>
0828dcba +0x0467:  mov    %edx,%ebx
0828dcbc +0x0469:  mov    %eax,%esi
0828dcbe +0x046b:  mov    0x8(%ebp),%eax
0828dcc1 +0x046e:  mov    %eax,(%esp)
0828dcc4 +0x0471:  call   0828e2f0 <+0xa9d>
0828dcc9 +0x0476:  mov    %esi,%eax
0828dccb +0x0478:  mov    %ebx,%edx
0828dccd +0x047a:  mov    %eax,(%esp)
0828dcd0 +0x047d:  call   08ae3750 <_Unwind_Resume>
0828dcd5 +0x0482:  mov    0x8(%ebp),%eax
0828dcd8 +0x0485:  mov    %eax,(%esp)
0828dcdb +0x0488:  call   0828e2f0 <+0xa9d>
0828dce0 +0x048d:  add    $0x10,%esp
0828dce3 +0x0490:  pop    %ebx
0828dce4 +0x0491:  pop    %esi
0828dce5 +0x0492:  pop    %ebp
0828dce6 +0x0493:  ret
0828dce7 +0x0494:  nop
0828dce8 +0x0495:  push   %ebp
0828dce9 +0x0496:  mov    %esp,%ebp
0828dceb +0x0498:  mov    0x8(%ebp),%eax
0828dcee +0x049b:  mov    0x4(%eax),%eax
0828dcf1 +0x049e:  mov    %eax,%edx
0828dcf3 +0x04a0:  mov    0x8(%ebp),%eax
0828dcf6 +0x04a3:  mov    (%eax),%eax
0828dcf8 +0x04a5:  mov    %edx,%ecx
0828dcfa +0x04a7:  sub    %eax,%ecx
0828dcfc +0x04a9:  mov    %ecx,%eax
0828dcfe +0x04ab:  sar    $0x2,%eax
0828dd01 +0x04ae:  pop    %ebp
0828dd02 +0x04af:  ret
0828dd03 +0x04b0:  nop
0828dd04 +0x04b1:  push   %ebp
0828dd05 +0x04b2:  mov    %esp,%ebp
0828dd07 +0x04b4:  mov    0x8(%ebp),%eax
0828dd0a +0x04b7:  mov    (%eax),%eax
0828dd0c +0x04b9:  mov    0xc(%ebp),%edx
0828dd0f +0x04bc:  shl    $0x2,%edx
0828dd12 +0x04bf:  add    %edx,%eax
0828dd14 +0x04c1:  pop    %ebp
0828dd15 +0x04c2:  ret
0828dd16 +0x04c3:  push   %ebp
0828dd17 +0x04c4:  mov    %esp,%ebp
0828dd19 +0x04c6:  mov    0x8(%ebp),%eax
0828dd1c +0x04c9:  mov    0x4(%eax),%eax
0828dd1f +0x04cc:  mov    %eax,%edx
0828dd21 +0x04ce:  mov    0x8(%ebp),%eax
0828dd24 +0x04d1:  mov    (%eax),%eax
0828dd26 +0x04d3:  mov    %edx,%ecx
0828dd28 +0x04d5:  sub    %eax,%ecx
0828dd2a +0x04d7:  mov    %ecx,%eax
0828dd2c +0x04d9:  sar    $0x6,%eax
0828dd2f +0x04dc:  pop    %ebp
0828dd30 +0x04dd:  ret
0828dd31 +0x04de:  nop
0828dd32 +0x04df:  push   %ebp
0828dd33 +0x04e0:  mov    %esp,%ebp
0828dd35 +0x04e2:  mov    0x8(%ebp),%eax
0828dd38 +0x04e5:  mov    (%eax),%eax
0828dd3a +0x04e7:  mov    0xc(%ebp),%edx
0828dd3d +0x04ea:  shl    $0x6,%edx
0828dd40 +0x04ed:  add    %edx,%eax
0828dd42 +0x04ef:  pop    %ebp
0828dd43 +0x04f0:  ret
0828dd44 +0x04f1:  push   %ebp
0828dd45 +0x04f2:  mov    %esp,%ebp
0828dd47 +0x04f4:  sub    $0x18,%esp
0828dd4a +0x04f7:  mov    0x8(%ebp),%eax
0828dd4d +0x04fa:  mov    %eax,(%esp)
0828dd50 +0x04fd:  call   0828e37a <+0xb27>
0828dd55 +0x0502:  leave
0828dd56 +0x0503:  ret
0828dd57 +0x0504:  nop
0828dd58 +0x0505:  push   %ebp
0828dd59 +0x0506:  mov    %esp,%ebp
0828dd5b +0x0508:  sub    $0x18,%esp
0828dd5e +0x050b:  mov    0x8(%ebp),%eax
0828dd61 +0x050e:  mov    %eax,(%esp)
0828dd64 +0x0511:  call   0828e38e <+0xb3b>
0828dd69 +0x0516:  leave
0828dd6a +0x0517:  ret
0828dd6b +0x0518:  nop
0828dd6c +0x0519:  push   %ebp
0828dd6d +0x051a:  mov    %esp,%ebp
0828dd6f +0x051c:  push   %esi
0828dd70 +0x051d:  push   %ebx
0828dd71 +0x051e:  sub    $0x10,%esp
0828dd74 +0x0521:  mov    0x8(%ebp),%eax
0828dd77 +0x0524:  mov    %eax,(%esp)
0828dd7a +0x0527:  call   0828e3f8 <+0xba5>
0828dd7f +0x052c:  mov    %eax,0x4(%esp)
0828dd83 +0x0530:  mov    0x8(%ebp),%eax
0828dd86 +0x0533:  mov    %eax,(%esp)
0828dd89 +0x0536:  call   0828e3a2 <+0xb4f>
0828dd8e +0x053b:  jmp    0828ddab <+0x558>
0828dd90 +0x053d:  mov    %edx,%ebx
0828dd92 +0x053f:  mov    %eax,%esi
0828dd94 +0x0541:  mov    0x8(%ebp),%eax
0828dd97 +0x0544:  mov    %eax,(%esp)
0828dd9a +0x0547:  call   0828dd58 <+0x505>
0828dd9f +0x054c:  mov    %esi,%eax
0828dda1 +0x054e:  mov    %ebx,%edx
0828dda3 +0x0550:  mov    %eax,(%esp)
0828dda6 +0x0553:  call   08ae3750 <_Unwind_Resume>
0828ddab +0x0558:  mov    0x8(%ebp),%eax
0828ddae +0x055b:  mov    %eax,(%esp)
0828ddb1 +0x055e:  call   0828dd58 <+0x505>
0828ddb6 +0x0563:  add    $0x10,%esp
0828ddb9 +0x0566:  pop    %ebx
0828ddba +0x0567:  pop    %esi
0828ddbb +0x0568:  pop    %ebp
0828ddbc +0x0569:  ret
0828ddbd +0x056a:  nop
0828ddbe +0x056b:  push   %ebp
0828ddbf +0x056c:  mov    %esp,%ebp
0828ddc1 +0x056e:  push   %ebx
0828ddc2 +0x056f:  sub    $0x14,%esp
0828ddc5 +0x0572:  mov    0x8(%ebp),%ebx
0828ddc8 +0x0575:  mov    0xc(%ebp),%eax
0828ddcb +0x0578:  mov    0x10(%ebp),%edx
0828ddce +0x057b:  mov    %edx,0x8(%esp)
0828ddd2 +0x057f:  mov    %eax,0x4(%esp)
0828ddd6 +0x0583:  mov    %ebx,(%esp)
0828ddd9 +0x0586:  call   0828e404 <+0xbb1>
0828ddde +0x058b:  sub    $0x4,%esp
0828dde1 +0x058e:  mov    %ebx,%eax
0828dde3 +0x0590:  mov    -0x4(%ebp),%ebx
0828dde6 +0x0593:  leave
0828dde7 +0x0594:  ret    $0x4
0828ddea +0x0597:  push   %ebp
0828ddeb +0x0598:  mov    %esp,%ebp
0828dded +0x059a:  push   %ebx
0828ddee +0x059b:  sub    $0x14,%esp
0828ddf1 +0x059e:  mov    0x8(%ebp),%ebx
0828ddf4 +0x05a1:  mov    0xc(%ebp),%eax
0828ddf7 +0x05a4:  mov    %eax,0x4(%esp)
0828ddfb +0x05a8:  mov    %ebx,(%esp)
0828ddfe +0x05ab:  call   0828e4c2 <+0xc6f>
0828de03 +0x05b0:  sub    $0x4,%esp
0828de06 +0x05b3:  mov    %ebx,%eax
0828de08 +0x05b5:  mov    -0x4(%ebp),%ebx
0828de0b +0x05b8:  leave
0828de0c +0x05b9:  ret    $0x4
0828de0f +0x05bc:  nop
0828de10 +0x05bd:  push   %ebp
0828de11 +0x05be:  mov    %esp,%ebp
0828de13 +0x05c0:  mov    0x8(%ebp),%eax
0828de16 +0x05c3:  mov    (%eax),%edx
0828de18 +0x05c5:  mov    0xc(%ebp),%eax
0828de1b +0x05c8:  mov    (%eax),%eax
0828de1d +0x05ca:  cmp    %eax,%edx
0828de1f +0x05cc:  setne  %al
0828de22 +0x05cf:  pop    %ebp
0828de23 +0x05d0:  ret
0828de24 +0x05d1:  push   %ebp
0828de25 +0x05d2:  mov    %esp,%ebp
0828de27 +0x05d4:  mov    0x8(%ebp),%eax
0828de2a +0x05d7:  mov    (%eax),%eax
0828de2c +0x05d9:  add    $0x10,%eax
0828de2f +0x05dc:  pop    %ebp
0828de30 +0x05dd:  ret
0828de31 +0x05de:  push   %ebp
0828de32 +0x05df:  mov    %esp,%ebp
0828de34 +0x05e1:  push   %esi
0828de35 +0x05e2:  push   %ebx
0828de36 +0x05e3:  sub    $0x10,%esp
0828de39 +0x05e6:  mov    0x8(%ebp),%esi
0828de3c +0x05e9:  mov    0x10(%ebp),%eax
0828de3f +0x05ec:  mov    %eax,(%esp)
0828de42 +0x05ef:  call   0828e4e8 <+0xc95>
0828de47 +0x05f4:  mov    %eax,%ebx
0828de49 +0x05f6:  mov    0xc(%ebp),%eax
0828de4c +0x05f9:  mov    %eax,(%esp)
0828de4f +0x05fc:  call   080e2d79 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0xb1f>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0xb1f
0828de54 +0x0601:  mov    %ebx,0x8(%esp)
0828de58 +0x0605:  mov    %eax,0x4(%esp)
0828de5c +0x0609:  mov    %esi,(%esp)
0828de5f +0x060c:  call   0828e4f0 <+0xc9d>
0828de64 +0x0611:  mov    %esi,%eax
0828de66 +0x0613:  add    $0x10,%esp
0828de69 +0x0616:  pop    %ebx
0828de6a +0x0617:  pop    %esi
0828de6b +0x0618:  pop    %ebp
0828de6c +0x0619:  ret    $0x4
0828de6f +0x061c:  nop
0828de70 +0x061d:  push   %ebp
0828de71 +0x061e:  mov    %esp,%ebp
0828de73 +0x0620:  sub    $0x18,%esp
0828de76 +0x0623:  mov    0xc(%ebp),%eax
0828de79 +0x0626:  mov    %eax,(%esp)
0828de7c +0x0629:  call   080e2d71 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0xb17>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0xb17
0828de81 +0x062e:  mov    (%eax),%edx
0828de83 +0x0630:  mov    0x8(%ebp),%eax
0828de86 +0x0633:  mov    %edx,(%eax)
0828de88 +0x0635:  mov    0xc(%ebp),%eax
0828de8b +0x0638:  add    $0x4,%eax
0828de8e +0x063b:  mov    %eax,(%esp)
0828de91 +0x063e:  call   0828e529 <+0xcd6>
0828de96 +0x0643:  mov    0x8(%ebp),%edx
0828de99 +0x0646:  mov    (%eax),%ecx
0828de9b +0x0648:  mov    %ecx,0x4(%edx)
0828de9e +0x064b:  mov    0x4(%eax),%ecx
0828dea1 +0x064e:  mov    %ecx,0x8(%edx)
0828dea4 +0x0651:  mov    0x8(%eax),%eax
0828dea7 +0x0654:  mov    %eax,0xc(%edx)
0828deaa +0x0657:  leave
0828deab +0x0658:  ret
0828deac +0x0659:  push   %ebp
0828dead +0x065a:  mov    %esp,%ebp
0828deaf +0x065c:  push   %ebx
0828deb0 +0x065d:  sub    $0x14,%esp
0828deb3 +0x0660:  mov    0x8(%ebp),%ebx
0828deb6 +0x0663:  mov    0xc(%ebp),%eax
0828deb9 +0x0666:  mov    0x10(%ebp),%edx
0828debc +0x0669:  mov    %edx,0x8(%esp)
0828dec0 +0x066d:  mov    %eax,0x4(%esp)
0828dec4 +0x0671:  mov    %ebx,(%esp)
0828dec7 +0x0674:  call   0828e532 <+0xcdf>
0828decc +0x0679:  sub    $0x4,%esp
0828decf +0x067c:  mov    %ebx,%eax
0828ded1 +0x067e:  mov    -0x4(%ebp),%ebx
0828ded4 +0x0681:  leave
0828ded5 +0x0682:  ret    $0x4
0828ded8 +0x0685:  push   %ebp
0828ded9 +0x0686:  mov    %esp,%ebp
0828dedb +0x0688:  push   %esi
0828dedc +0x0689:  push   %ebx
0828dedd +0x068a:  sub    $0x20,%esp
0828dee0 +0x068d:  mov    0xc(%ebp),%eax
0828dee3 +0x0690:  mov    %eax,(%esp)
0828dee6 +0x0693:  call   0828e702 <+0xeaf>
0828deeb +0x0698:  mov    %eax,%ebx
0828deed +0x069a:  mov    0xc(%ebp),%eax
0828def0 +0x069d:  mov    %eax,(%esp)
0828def3 +0x06a0:  call   0828dce8 <+0x495>
0828def8 +0x06a5:  mov    0x8(%ebp),%edx
0828defb +0x06a8:  mov    %ebx,0x8(%esp)
0828deff +0x06ac:  mov    %eax,0x4(%esp)
0828df03 +0x06b0:  mov    %edx,(%esp)
0828df06 +0x06b3:  call   0828e70a <+0xeb7>
0828df0b +0x06b8:  mov    0x8(%ebp),%eax
0828df0e +0x06bb:  mov    %eax,(%esp)
0828df11 +0x06be:  call   0828e358 <+0xb05>
0828df16 +0x06c3:  mov    %eax,%ebx
0828df18 +0x06c5:  mov    0x8(%ebp),%eax
0828df1b +0x06c8:  mov    (%eax),%esi
0828df1d +0x06ca:  lea    -0x10(%ebp),%eax
0828df20 +0x06cd:  mov    0xc(%ebp),%edx
0828df23 +0x06d0:  mov    %edx,0x4(%esp)
0828df27 +0x06d4:  mov    %eax,(%esp)
0828df2a +0x06d7:  call   0828e7a8 <+0xf55>
0828df2f +0x06dc:  sub    $0x4,%esp
0828df32 +0x06df:  lea    -0xc(%ebp),%eax
0828df35 +0x06e2:  mov    0xc(%ebp),%edx
0828df38 +0x06e5:  mov    %edx,0x4(%esp)
0828df3c +0x06e9:  mov    %eax,(%esp)
0828df3f +0x06ec:  call   0828e77c <+0xf29>
0828df44 +0x06f1:  sub    $0x4,%esp
0828df47 +0x06f4:  mov    %ebx,0xc(%esp)
0828df4b +0x06f8:  mov    %esi,0x8(%esp)
0828df4f +0x06fc:  mov    -0x10(%ebp),%eax
0828df52 +0x06ff:  mov    %eax,0x4(%esp)
0828df56 +0x0703:  mov    -0xc(%ebp),%eax
0828df59 +0x0706:  mov    %eax,(%esp)
0828df5c +0x0709:  call   0828e7d4 <+0xf81>
0828df61 +0x070e:  mov    0x8(%ebp),%edx
0828df64 +0x0711:  mov    %eax,0x4(%edx)
0828df67 +0x0714:  lea    -0x8(%ebp),%esp
0828df6a +0x0717:  add    $0x0,%esp
0828df6d +0x071a:  pop    %ebx
0828df6e +0x071b:  pop    %esi
0828df6f +0x071c:  pop    %ebp
0828df70 +0x071d:  ret
0828df71 +0x071e:  mov    %edx,%ebx
0828df73 +0x0720:  mov    %eax,%esi
0828df75 +0x0722:  mov    0x8(%ebp),%eax
0828df78 +0x0725:  mov    %eax,(%esp)
0828df7b +0x0728:  call   0828e2f0 <+0xa9d>
0828df80 +0x072d:  mov    %esi,%eax
0828df82 +0x072f:  mov    %ebx,%edx
0828df84 +0x0731:  mov    %eax,(%esp)
0828df87 +0x0734:  call   08ae3750 <_Unwind_Resume>
0828df8c +0x0739:  push   %ebp
0828df8d +0x073a:  mov    %esp,%ebp
0828df8f +0x073c:  push   %ebx
0828df90 +0x073d:  sub    $0x14,%esp
0828df93 +0x0740:  mov    0x8(%ebp),%ebx
0828df96 +0x0743:  mov    0xc(%ebp),%eax
0828df99 +0x0746:  mov    0x10(%ebp),%edx
0828df9c +0x0749:  mov    %edx,0x8(%esp)
0828dfa0 +0x074d:  mov    %eax,0x4(%esp)
0828dfa4 +0x0751:  mov    %ebx,(%esp)
0828dfa7 +0x0754:  call   0828e7f6 <+0xfa3>
0828dfac +0x0759:  sub    $0x4,%esp
0828dfaf +0x075c:  mov    %ebx,%eax
0828dfb1 +0x075e:  mov    -0x4(%ebp),%ebx
0828dfb4 +0x0761:  leave
0828dfb5 +0x0762:  ret    $0x4
0828dfb8 +0x0765:  push   %ebp
0828dfb9 +0x0766:  mov    %esp,%ebp
0828dfbb +0x0768:  push   %ebx
0828dfbc +0x0769:  sub    $0x14,%esp
0828dfbf +0x076c:  mov    0x8(%ebp),%ebx
0828dfc2 +0x076f:  mov    0xc(%ebp),%eax
0828dfc5 +0x0772:  mov    %eax,0x4(%esp)
0828dfc9 +0x0776:  mov    %ebx,(%esp)
0828dfcc +0x0779:  call   0828e8b4 <+0x1061>
0828dfd1 +0x077e:  sub    $0x4,%esp
0828dfd4 +0x0781:  mov    %ebx,%eax
0828dfd6 +0x0783:  mov    -0x4(%ebp),%ebx
0828dfd9 +0x0786:  leave
0828dfda +0x0787:  ret    $0x4
0828dfdd +0x078a:  nop
0828dfde +0x078b:  push   %ebp
0828dfdf +0x078c:  mov    %esp,%ebp
0828dfe1 +0x078e:  mov    0x8(%ebp),%eax
0828dfe4 +0x0791:  mov    (%eax),%edx
0828dfe6 +0x0793:  mov    0xc(%ebp),%eax
0828dfe9 +0x0796:  mov    (%eax),%eax
0828dfeb +0x0798:  cmp    %eax,%edx
0828dfed +0x079a:  setne  %al
0828dff0 +0x079d:  pop    %ebp
0828dff1 +0x079e:  ret
0828dff2 +0x079f:  push   %ebp
0828dff3 +0x07a0:  mov    %esp,%ebp
0828dff5 +0x07a2:  mov    0x8(%ebp),%eax
0828dff8 +0x07a5:  mov    (%eax),%eax
0828dffa +0x07a7:  add    $0x10,%eax
0828dffd +0x07aa:  pop    %ebp
0828dffe +0x07ab:  ret
0828dfff +0x07ac:  nop
0828e000 +0x07ad:  push   %ebp
0828e001 +0x07ae:  mov    %esp,%ebp
0828e003 +0x07b0:  push   %esi
0828e004 +0x07b1:  push   %ebx
0828e005 +0x07b2:  sub    $0x20,%esp
0828e008 +0x07b5:  mov    0xc(%ebp),%eax
0828e00b +0x07b8:  mov    %eax,(%esp)
0828e00e +0x07bb:  call   0828e8da <+0x1087>
0828e013 +0x07c0:  mov    %eax,%ebx
0828e015 +0x07c2:  mov    0xc(%ebp),%eax
0828e018 +0x07c5:  mov    %eax,(%esp)
0828e01b +0x07c8:  call   0828e258 <+0xa05>
0828e020 +0x07cd:  mov    0x8(%ebp),%edx
0828e023 +0x07d0:  mov    %ebx,0x8(%esp)
0828e027 +0x07d4:  mov    %eax,0x4(%esp)
0828e02b +0x07d8:  mov    %edx,(%esp)
0828e02e +0x07db:  call   0828e8f6 <+0x10a3>
0828e033 +0x07e0:  mov    0x8(%ebp),%eax
0828e036 +0x07e3:  mov    %eax,(%esp)
0828e039 +0x07e6:  call   0828ea36 <+0x11e3>
0828e03e +0x07eb:  mov    %eax,%ebx
0828e040 +0x07ed:  mov    0x8(%ebp),%eax
0828e043 +0x07f0:  mov    (%eax),%esi
0828e045 +0x07f2:  lea    -0x10(%ebp),%eax
0828e048 +0x07f5:  mov    0xc(%ebp),%edx
0828e04b +0x07f8:  mov    %edx,0x4(%esp)
0828e04f +0x07fc:  mov    %eax,(%esp)
0828e052 +0x07ff:  call   0828ea0a <+0x11b7>
0828e057 +0x0804:  sub    $0x4,%esp
0828e05a +0x0807:  lea    -0xc(%ebp),%eax
0828e05d +0x080a:  mov    0xc(%ebp),%edx
0828e060 +0x080d:  mov    %edx,0x4(%esp)
0828e064 +0x0811:  mov    %eax,(%esp)
0828e067 +0x0814:  call   0828e9de <+0x118b>
0828e06c +0x0819:  sub    $0x4,%esp
0828e06f +0x081c:  mov    %ebx,0xc(%esp)
0828e073 +0x0820:  mov    %esi,0x8(%esp)
0828e077 +0x0824:  mov    -0x10(%ebp),%eax
0828e07a +0x0827:  mov    %eax,0x4(%esp)
0828e07e +0x082b:  mov    -0xc(%ebp),%eax
0828e081 +0x082e:  mov    %eax,(%esp)
0828e084 +0x0831:  call   0828ea3e <+0x11eb>
0828e089 +0x0836:  mov    0x8(%ebp),%edx
0828e08c +0x0839:  mov    %eax,0x4(%edx)
0828e08f +0x083c:  lea    -0x8(%ebp),%esp
0828e092 +0x083f:  add    $0x0,%esp
0828e095 +0x0842:  pop    %ebx
0828e096 +0x0843:  pop    %esi
0828e097 +0x0844:  pop    %ebp
0828e098 +0x0845:  ret
0828e099 +0x0846:  mov    %edx,%ebx
0828e09b +0x0848:  mov    %eax,%esi
0828e09d +0x084a:  mov    0x8(%ebp),%eax
0828e0a0 +0x084d:  mov    %eax,(%esp)
0828e0a3 +0x0850:  call   0828e970 <+0x111d>
0828e0a8 +0x0855:  mov    %esi,%eax
0828e0aa +0x0857:  mov    %ebx,%edx
0828e0ac +0x0859:  mov    %eax,(%esp)
0828e0af +0x085c:  call   08ae3750 <_Unwind_Resume>
0828e0b4 +0x0861:  push   %ebp
0828e0b5 +0x0862:  mov    %esp,%ebp
0828e0b7 +0x0864:  push   %esi
0828e0b8 +0x0865:  push   %ebx
0828e0b9 +0x0866:  sub    $0x10,%esp
0828e0bc +0x0869:  mov    0x8(%ebp),%eax
0828e0bf +0x086c:  mov    %eax,(%esp)
0828e0c2 +0x086f:  call   0828ea36 <+0x11e3>
0828e0c7 +0x0874:  mov    0x8(%ebp),%edx
0828e0ca +0x0877:  mov    0x4(%edx),%ecx
0828e0cd +0x087a:  mov    0x8(%ebp),%edx
0828e0d0 +0x087d:  mov    (%edx),%edx
0828e0d2 +0x087f:  mov    %eax,0x8(%esp)
0828e0d6 +0x0883:  mov    %ecx,0x4(%esp)
0828e0da +0x0887:  mov    %edx,(%esp)
0828e0dd +0x088a:  call   0828ea5f <+0x120c>
0828e0e2 +0x088f:  jmp    0828e0ff <+0x8ac>
0828e0e4 +0x0891:  mov    %edx,%ebx
0828e0e6 +0x0893:  mov    %eax,%esi
0828e0e8 +0x0895:  mov    0x8(%ebp),%eax
0828e0eb +0x0898:  mov    %eax,(%esp)
0828e0ee +0x089b:  call   0828e970 <+0x111d>
0828e0f3 +0x08a0:  mov    %esi,%eax
0828e0f5 +0x08a2:  mov    %ebx,%edx
0828e0f7 +0x08a4:  mov    %eax,(%esp)
0828e0fa +0x08a7:  call   08ae3750 <_Unwind_Resume>
0828e0ff +0x08ac:  mov    0x8(%ebp),%eax
0828e102 +0x08af:  mov    %eax,(%esp)
0828e105 +0x08b2:  call   0828e970 <+0x111d>
0828e10a +0x08b7:  add    $0x10,%esp
0828e10d +0x08ba:  pop    %ebx
0828e10e +0x08bb:  pop    %esi
0828e10f +0x08bc:  pop    %ebp
0828e110 +0x08bd:  ret
0828e111 +0x08be:  nop
0828e112 +0x08bf:  push   %ebp
0828e113 +0x08c0:  mov    %esp,%ebp
0828e115 +0x08c2:  mov    0x8(%ebp),%eax
0828e118 +0x08c5:  mov    (%eax),%ecx
0828e11a +0x08c7:  mov    0xc(%ebp),%edx
0828e11d +0x08ca:  mov    %edx,%eax
0828e11f +0x08cc:  shl    $0x2,%eax
0828e122 +0x08cf:  add    %edx,%eax
0828e124 +0x08d1:  shl    $0x3,%eax
0828e127 +0x08d4:  lea    (%ecx,%eax,1),%eax
0828e12a +0x08d7:  pop    %ebp
0828e12b +0x08d8:  ret
0828e12c +0x08d9:  push   %ebp
0828e12d +0x08da:  mov    %esp,%ebp
0828e12f +0x08dc:  sub    $0x18,%esp
0828e132 +0x08df:  mov    0x8(%ebp),%eax
0828e135 +0x08e2:  mov    %eax,(%esp)
0828e138 +0x08e5:  call   0828ea7a <+0x1227>
0828e13d +0x08ea:  leave
0828e13e +0x08eb:  ret
0828e13f +0x08ec:  nop
0828e140 +0x08ed:  push   %ebp
0828e141 +0x08ee:  mov    %esp,%ebp
0828e143 +0x08f0:  push   %ebx
0828e144 +0x08f1:  sub    $0x14,%esp
0828e147 +0x08f4:  mov    0x8(%ebp),%ebx
0828e14a +0x08f7:  mov    0xc(%ebp),%eax
0828e14d +0x08fa:  mov    %eax,0x4(%esp)
0828e151 +0x08fe:  mov    %ebx,(%esp)
0828e154 +0x0901:  call   0828eaf0 <+0x129d>
0828e159 +0x0906:  sub    $0x4,%esp
0828e15c +0x0909:  mov    %ebx,%eax
0828e15e +0x090b:  mov    -0x4(%ebp),%ebx
0828e161 +0x090e:  leave
0828e162 +0x090f:  ret    $0x4
0828e165 +0x0912:  nop
0828e166 +0x0913:  push   %ebp
0828e167 +0x0914:  mov    %esp,%ebp
0828e169 +0x0916:  push   %ebx
0828e16a +0x0917:  sub    $0x14,%esp
0828e16d +0x091a:  mov    0x8(%ebp),%ebx
0828e170 +0x091d:  mov    0xc(%ebp),%eax
0828e173 +0x0920:  mov    %eax,0x4(%esp)
0828e177 +0x0924:  mov    %ebx,(%esp)
0828e17a +0x0927:  call   0828eb16 <+0x12c3>
0828e17f +0x092c:  sub    $0x4,%esp
0828e182 +0x092f:  mov    %ebx,%eax
0828e184 +0x0931:  mov    -0x4(%ebp),%ebx
0828e187 +0x0934:  leave
0828e188 +0x0935:  ret    $0x4
0828e18b +0x0938:  nop
0828e18c +0x0939:  push   %ebp
0828e18d +0x093a:  mov    %esp,%ebp
0828e18f +0x093c:  mov    0x8(%ebp),%eax
0828e192 +0x093f:  mov    (%eax),%edx
0828e194 +0x0941:  mov    0xc(%ebp),%eax
0828e197 +0x0944:  mov    (%eax),%eax
0828e199 +0x0946:  cmp    %eax,%edx
0828e19b +0x0948:  setne  %al
0828e19e +0x094b:  pop    %ebp
0828e19f +0x094c:  ret
0828e1a0 +0x094d:  push   %ebp
0828e1a1 +0x094e:  mov    %esp,%ebp
0828e1a3 +0x0950:  mov    0x8(%ebp),%eax
0828e1a6 +0x0953:  mov    (%eax),%eax
0828e1a8 +0x0955:  add    $0x10,%eax
0828e1ab +0x0958:  pop    %ebp
0828e1ac +0x0959:  ret
0828e1ad +0x095a:  nop
0828e1ae +0x095b:  push   %ebp
0828e1af +0x095c:  mov    %esp,%ebp
0828e1b1 +0x095e:  sub    $0x18,%esp
0828e1b4 +0x0961:  mov    0x8(%ebp),%eax
0828e1b7 +0x0964:  mov    (%eax),%eax
0828e1b9 +0x0966:  mov    %eax,(%esp)
0828e1bc +0x0969:  call   086df850 <_ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base const*)
0828e1c1 +0x096e:  mov    0x8(%ebp),%edx
0828e1c4 +0x0971:  mov    %eax,(%edx)
0828e1c6 +0x0973:  mov    0x8(%ebp),%eax
0828e1c9 +0x0976:  leave
0828e1ca +0x0977:  ret
0828e1cb +0x0978:  nop
0828e1cc +0x0979:  push   %ebp
0828e1cd +0x097a:  mov    %esp,%ebp
0828e1cf +0x097c:  sub    $0x18,%esp
0828e1d2 +0x097f:  mov    0x8(%ebp),%eax
0828e1d5 +0x0982:  mov    %eax,(%esp)
0828e1d8 +0x0985:  call   0828eb3c <+0x12e9>
0828e1dd +0x098a:  leave
0828e1de +0x098b:  ret
0828e1df +0x098c:  nop
0828e1e0 +0x098d:  push   %ebp
0828e1e1 +0x098e:  mov    %esp,%ebp
0828e1e3 +0x0990:  sub    $0x18,%esp
0828e1e6 +0x0993:  mov    0x8(%ebp),%eax
0828e1e9 +0x0996:  mov    (%eax),%eax
0828e1eb +0x0998:  mov    %eax,(%esp)
0828e1ee +0x099b:  call   0828eb48 <+0x12f5>
0828e1f3 +0x09a0:  leave
0828e1f4 +0x09a1:  ret
0828e1f5 +0x09a2:  nop
0828e1f6 +0x09a3:  push   %ebp
0828e1f7 +0x09a4:  mov    %esp,%ebp
0828e1f9 +0x09a6:  mov    0x8(%ebp),%eax
0828e1fc +0x09a9:  mov    0x4(%eax),%eax
0828e1ff +0x09ac:  mov    %eax,%edx
0828e201 +0x09ae:  mov    0x8(%ebp),%eax
0828e204 +0x09b1:  mov    (%eax),%eax
0828e206 +0x09b3:  mov    %edx,%ecx
0828e208 +0x09b5:  sub    %eax,%ecx
0828e20a +0x09b7:  mov    %ecx,%eax
0828e20c +0x09b9:  sar    $0x2,%eax
0828e20f +0x09bc:  imul   $0xaaaaaaab,%eax,%eax
0828e215 +0x09c2:  pop    %ebp
0828e216 +0x09c3:  ret
0828e217 +0x09c4:  nop
0828e218 +0x09c5:  push   %ebp
0828e219 +0x09c6:  mov    %esp,%ebp
0828e21b +0x09c8:  mov    0x8(%ebp),%eax
0828e21e +0x09cb:  mov    (%eax),%ecx
0828e220 +0x09cd:  mov    0xc(%ebp),%edx
0828e223 +0x09d0:  mov    %edx,%eax
0828e225 +0x09d2:  add    %eax,%eax
0828e227 +0x09d4:  add    %edx,%eax
0828e229 +0x09d6:  shl    $0x2,%eax
0828e22c +0x09d9:  lea    (%ecx,%eax,1),%eax
0828e22f +0x09dc:  pop    %ebp
0828e230 +0x09dd:  ret
0828e231 +0x09de:  nop
0828e232 +0x09df:  push   %ebp
0828e233 +0x09e0:  mov    %esp,%ebp
0828e235 +0x09e2:  push   %ebx
0828e236 +0x09e3:  sub    $0x14,%esp
0828e239 +0x09e6:  mov    0x8(%ebp),%ebx
0828e23c +0x09e9:  mov    0xc(%ebp),%eax
0828e23f +0x09ec:  mov    %eax,0x4(%esp)
0828e243 +0x09f0:  mov    %ebx,(%esp)
0828e246 +0x09f3:  call   0828ebb2 <+0x135f>
0828e24b +0x09f8:  sub    $0x4,%esp
0828e24e +0x09fb:  mov    %ebx,%eax
0828e250 +0x09fd:  mov    -0x4(%ebp),%ebx
0828e253 +0x0a00:  leave
0828e254 +0x0a01:  ret    $0x4
0828e257 +0x0a04:  nop
0828e258 +0x0a05:  push   %ebp
0828e259 +0x0a06:  mov    %esp,%ebp
0828e25b +0x0a08:  mov    0x8(%ebp),%eax
0828e25e +0x0a0b:  mov    0x4(%eax),%eax
0828e261 +0x0a0e:  mov    %eax,%edx
0828e263 +0x0a10:  mov    0x8(%ebp),%eax
0828e266 +0x0a13:  mov    (%eax),%eax
0828e268 +0x0a15:  mov    %edx,%ecx
0828e26a +0x0a17:  sub    %eax,%ecx
0828e26c +0x0a19:  mov    %ecx,%eax
0828e26e +0x0a1b:  sar    $0x3,%eax
0828e271 +0x0a1e:  imul   $0xcccccccd,%eax,%eax
0828e277 +0x0a24:  pop    %ebp
0828e278 +0x0a25:  ret
0828e279 +0x0a26:  nop
0828e27a +0x0a27:  push   %ebp
0828e27b +0x0a28:  mov    %esp,%ebp
0828e27d +0x0a2a:  sub    $0x18,%esp
0828e280 +0x0a2d:  mov    0x8(%ebp),%eax
0828e283 +0x0a30:  mov    (%eax),%eax
0828e285 +0x0a32:  mov    %eax,(%esp)
0828e288 +0x0a35:  call   086df800 <_ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base*)
0828e28d +0x0a3a:  mov    0x8(%ebp),%edx
0828e290 +0x0a3d:  mov    %eax,(%edx)
0828e292 +0x0a3f:  mov    0x8(%ebp),%eax
0828e295 +0x0a42:  leave
0828e296 +0x0a43:  ret
0828e297 +0x0a44:  nop
0828e298 +0x0a45:  push   %ebp
0828e299 +0x0a46:  mov    %esp,%ebp
0828e29b +0x0a48:  push   %ebx
0828e29c +0x0a49:  sub    $0x14,%esp
0828e29f +0x0a4c:  mov    0x8(%ebp),%ebx
0828e2a2 +0x0a4f:  mov    0xc(%ebp),%eax
0828e2a5 +0x0a52:  mov    %eax,0x4(%esp)
0828e2a9 +0x0a56:  mov    %ebx,(%esp)
0828e2ac +0x0a59:  call   0828ebd8 <+0x1385>
0828e2b1 +0x0a5e:  sub    $0x4,%esp
0828e2b4 +0x0a61:  mov    %ebx,%eax
0828e2b6 +0x0a63:  mov    -0x4(%ebp),%ebx
0828e2b9 +0x0a66:  leave
0828e2ba +0x0a67:  ret    $0x4
0828e2bd +0x0a6a:  nop
0828e2be +0x0a6b:  push   %ebp
0828e2bf +0x0a6c:  mov    %esp,%ebp
0828e2c1 +0x0a6e:  sub    $0x18,%esp
0828e2c4 +0x0a71:  mov    0x8(%ebp),%eax
0828e2c7 +0x0a74:  mov    (%eax),%eax
0828e2c9 +0x0a76:  mov    %eax,(%esp)
0828e2cc +0x0a79:  call   086df800 <_ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base*)
0828e2d1 +0x0a7e:  mov    0x8(%ebp),%edx
0828e2d4 +0x0a81:  mov    %eax,(%edx)
0828e2d6 +0x0a83:  mov    0x8(%ebp),%eax
0828e2d9 +0x0a86:  leave
0828e2da +0x0a87:  ret
0828e2db +0x0a88:  nop
0828e2dc +0x0a89:  push   %ebp
0828e2dd +0x0a8a:  mov    %esp,%ebp
0828e2df +0x0a8c:  sub    $0x18,%esp
0828e2e2 +0x0a8f:  mov    0x8(%ebp),%eax
0828e2e5 +0x0a92:  mov    %eax,(%esp)
0828e2e8 +0x0a95:  call   0828ebfe <+0x13ab>
0828e2ed +0x0a9a:  leave
0828e2ee +0x0a9b:  ret
0828e2ef +0x0a9c:  nop
0828e2f0 +0x0a9d:  push   %ebp
0828e2f1 +0x0a9e:  mov    %esp,%ebp
0828e2f3 +0x0aa0:  push   %esi
0828e2f4 +0x0aa1:  push   %ebx
0828e2f5 +0x0aa2:  sub    $0x10,%esp
0828e2f8 +0x0aa5:  mov    0x8(%ebp),%eax
0828e2fb +0x0aa8:  mov    0x8(%eax),%eax
0828e2fe +0x0aab:  mov    %eax,%edx
0828e300 +0x0aad:  mov    0x8(%ebp),%eax
0828e303 +0x0ab0:  mov    (%eax),%eax
0828e305 +0x0ab2:  mov    %edx,%ecx
0828e307 +0x0ab4:  sub    %eax,%ecx
0828e309 +0x0ab6:  mov    %ecx,%eax
0828e30b +0x0ab8:  sar    $0x2,%eax
0828e30e +0x0abb:  mov    %eax,%edx
0828e310 +0x0abd:  mov    0x8(%ebp),%eax
0828e313 +0x0ac0:  mov    (%eax),%eax
0828e315 +0x0ac2:  mov    %edx,0x8(%esp)
0828e319 +0x0ac6:  mov    %eax,0x4(%esp)
0828e31d +0x0aca:  mov    0x8(%ebp),%eax
0828e320 +0x0acd:  mov    %eax,(%esp)
0828e323 +0x0ad0:  call   0828ec12 <+0x13bf>
0828e328 +0x0ad5:  jmp    0828e345 <+0xaf2>
0828e32a +0x0ad7:  mov    %edx,%ebx
0828e32c +0x0ad9:  mov    %eax,%esi
0828e32e +0x0adb:  mov    0x8(%ebp),%eax
0828e331 +0x0ade:  mov    %eax,(%esp)
0828e334 +0x0ae1:  call   0828e2dc <+0xa89>
0828e339 +0x0ae6:  mov    %esi,%eax
0828e33b +0x0ae8:  mov    %ebx,%edx
0828e33d +0x0aea:  mov    %eax,(%esp)
0828e340 +0x0aed:  call   08ae3750 <_Unwind_Resume>
0828e345 +0x0af2:  mov    0x8(%ebp),%eax
0828e348 +0x0af5:  mov    %eax,(%esp)
0828e34b +0x0af8:  call   0828e2dc <+0xa89>
0828e350 +0x0afd:  add    $0x10,%esp
0828e353 +0x0b00:  pop    %ebx
0828e354 +0x0b01:  pop    %esi
0828e355 +0x0b02:  pop    %ebp
0828e356 +0x0b03:  ret
0828e357 +0x0b04:  nop
0828e358 +0x0b05:  push   %ebp
0828e359 +0x0b06:  mov    %esp,%ebp
0828e35b +0x0b08:  mov    0x8(%ebp),%eax
0828e35e +0x0b0b:  pop    %ebp
0828e35f +0x0b0c:  ret
0828e360 +0x0b0d:  push   %ebp
0828e361 +0x0b0e:  mov    %esp,%ebp
0828e363 +0x0b10:  sub    $0x18,%esp
0828e366 +0x0b13:  mov    0xc(%ebp),%eax
0828e369 +0x0b16:  mov    %eax,0x4(%esp)
0828e36d +0x0b1a:  mov    0x8(%ebp),%eax
0828e370 +0x0b1d:  mov    %eax,(%esp)
0828e373 +0x0b20:  call   0828ec39 <+0x13e6>
0828e378 +0x0b25:  leave
0828e379 +0x0b26:  ret
0828e37a +0x0b27:  push   %ebp
0828e37b +0x0b28:  mov    %esp,%ebp
0828e37d +0x0b2a:  sub    $0x18,%esp
0828e380 +0x0b2d:  mov    0x8(%ebp),%eax
0828e383 +0x0b30:  mov    %eax,(%esp)
0828e386 +0x0b33:  call   0828ec6c <+0x1419>
0828e38b +0x0b38:  leave
0828e38c +0x0b39:  ret
0828e38d +0x0b3a:  nop
0828e38e +0x0b3b:  push   %ebp
0828e38f +0x0b3c:  mov    %esp,%ebp
0828e391 +0x0b3e:  sub    $0x18,%esp
0828e394 +0x0b41:  mov    0x8(%ebp),%eax
0828e397 +0x0b44:  mov    %eax,(%esp)
0828e39a +0x0b47:  call   0828ecbc <+0x1469>
0828e39f +0x0b4c:  leave
0828e3a0 +0x0b4d:  ret
0828e3a1 +0x0b4e:  nop
0828e3a2 +0x0b4f:  push   %ebp
0828e3a3 +0x0b50:  mov    %esp,%ebp
0828e3a5 +0x0b52:  sub    $0x28,%esp
0828e3a8 +0x0b55:  jmp    0828e3ea <+0xb97>
0828e3aa +0x0b57:  mov    0xc(%ebp),%eax
0828e3ad +0x0b5a:  mov    %eax,(%esp)
0828e3b0 +0x0b5d:  call   0828ecc1 <+0x146e>
0828e3b5 +0x0b62:  mov    %eax,0x4(%esp)
0828e3b9 +0x0b66:  mov    0x8(%ebp),%eax
0828e3bc +0x0b69:  mov    %eax,(%esp)
0828e3bf +0x0b6c:  call   0828e3a2 <+0xb4f>
0828e3c4 +0x0b71:  mov    0xc(%ebp),%eax
0828e3c7 +0x0b74:  mov    %eax,(%esp)
0828e3ca +0x0b77:  call   0828eccc <+0x1479>
0828e3cf +0x0b7c:  mov    %eax,-0xc(%ebp)
0828e3d2 +0x0b7f:  mov    0xc(%ebp),%eax
0828e3d5 +0x0b82:  mov    %eax,0x4(%esp)
0828e3d9 +0x0b86:  mov    0x8(%ebp),%eax
0828e3dc +0x0b89:  mov    %eax,(%esp)
0828e3df +0x0b8c:  call   0828ecd8 <+0x1485>
0828e3e4 +0x0b91:  mov    -0xc(%ebp),%eax
0828e3e7 +0x0b94:  mov    %eax,0xc(%ebp)
0828e3ea +0x0b97:  cmpl   $0x0,0xc(%ebp)
0828e3ee +0x0b9b:  setne  %al
0828e3f1 +0x0b9e:  test   %al,%al
0828e3f3 +0x0ba0:  jne    0828e3aa <+0xb57>
0828e3f5 +0x0ba2:  leave
0828e3f6 +0x0ba3:  ret
0828e3f7 +0x0ba4:  nop
0828e3f8 +0x0ba5:  push   %ebp
0828e3f9 +0x0ba6:  mov    %esp,%ebp
0828e3fb +0x0ba8:  mov    0x8(%ebp),%eax
0828e3fe +0x0bab:  mov    0x8(%eax),%eax
0828e401 +0x0bae:  pop    %ebp
0828e402 +0x0baf:  ret
0828e403 +0x0bb0:  nop
0828e404 +0x0bb1:  push   %ebp
0828e405 +0x0bb2:  mov    %esp,%ebp
0828e407 +0x0bb4:  push   %esi
0828e408 +0x0bb5:  push   %ebx
0828e409 +0x0bb6:  sub    $0x30,%esp
0828e40c +0x0bb9:  mov    0x8(%ebp),%ebx
0828e40f +0x0bbc:  mov    0xc(%ebp),%eax
0828e412 +0x0bbf:  mov    %eax,(%esp)
0828e415 +0x0bc2:  call   0828ed0c <+0x14b9>
0828e41a +0x0bc7:  mov    %eax,%esi
0828e41c +0x0bc9:  mov    0xc(%ebp),%eax
0828e41f +0x0bcc:  mov    %eax,(%esp)
0828e422 +0x0bcf:  call   0828e3f8 <+0xba5>
0828e427 +0x0bd4:  lea    -0x10(%ebp),%edx
0828e42a +0x0bd7:  mov    0x10(%ebp),%ecx
0828e42d +0x0bda:  mov    %ecx,0x10(%esp)
0828e431 +0x0bde:  mov    %esi,0xc(%esp)
0828e435 +0x0be2:  mov    %eax,0x8(%esp)
0828e439 +0x0be6:  mov    0xc(%ebp),%eax
0828e43c +0x0be9:  mov    %eax,0x4(%esp)
0828e440 +0x0bed:  mov    %edx,(%esp)
0828e443 +0x0bf0:  call   0828ed18 <+0x14c5>
0828e448 +0x0bf5:  sub    $0x4,%esp
0828e44b +0x0bf8:  lea    -0xc(%ebp),%eax
0828e44e +0x0bfb:  mov    0xc(%ebp),%edx
0828e451 +0x0bfe:  mov    %edx,0x4(%esp)
0828e455 +0x0c02:  mov    %eax,(%esp)
0828e458 +0x0c05:  call   0828e4c2 <+0xc6f>
0828e45d +0x0c0a:  sub    $0x4,%esp
0828e460 +0x0c0d:  lea    -0xc(%ebp),%eax
0828e463 +0x0c10:  mov    %eax,0x4(%esp)
0828e467 +0x0c14:  lea    -0x10(%ebp),%eax
0828e46a +0x0c17:  mov    %eax,(%esp)
0828e46d +0x0c1a:  call   0828edb6 <+0x1563>
0828e472 +0x0c1f:  test   %al,%al
0828e474 +0x0c21:  jne    0828e49b <+0xc48>
0828e476 +0x0c23:  mov    -0x10(%ebp),%eax
0828e479 +0x0c26:  mov    %eax,(%esp)
0828e47c +0x0c29:  call   0828ed94 <+0x1541>
0828e481 +0x0c2e:  mov    0xc(%ebp),%edx
0828e484 +0x0c31:  mov    %eax,0x8(%esp)
0828e488 +0x0c35:  mov    0x10(%ebp),%eax
0828e48b +0x0c38:  mov    %eax,0x4(%esp)
0828e48f +0x0c3c:  mov    %edx,(%esp)
0828e492 +0x0c3f:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
0828e497 +0x0c44:  test   %al,%al
0828e499 +0x0c46:  je     0828e4af <+0xc5c>
0828e49b +0x0c48:  mov    0xc(%ebp),%eax
0828e49e +0x0c4b:  mov    %eax,0x4(%esp)
0828e4a2 +0x0c4f:  mov    %ebx,(%esp)
0828e4a5 +0x0c52:  call   0828e4c2 <+0xc6f>
0828e4aa +0x0c57:  sub    $0x4,%esp
0828e4ad +0x0c5a:  jmp    0828e4b4 <+0xc61>
0828e4af +0x0c5c:  mov    -0x10(%ebp),%eax
0828e4b2 +0x0c5f:  mov    %eax,(%ebx)
0828e4b4 +0x0c61:  mov    %ebx,%eax
0828e4b6 +0x0c63:  lea    -0x8(%ebp),%esp
0828e4b9 +0x0c66:  add    $0x0,%esp
0828e4bc +0x0c69:  pop    %ebx
0828e4bd +0x0c6a:  pop    %esi
0828e4be +0x0c6b:  pop    %ebp
0828e4bf +0x0c6c:  ret    $0x4
0828e4c2 +0x0c6f:  push   %ebp
0828e4c3 +0x0c70:  mov    %esp,%ebp
0828e4c5 +0x0c72:  push   %ebx
0828e4c6 +0x0c73:  sub    $0x14,%esp
0828e4c9 +0x0c76:  mov    0x8(%ebp),%ebx
0828e4cc +0x0c79:  mov    0xc(%ebp),%eax
0828e4cf +0x0c7c:  add    $0x4,%eax
0828e4d2 +0x0c7f:  mov    %eax,0x4(%esp)
0828e4d6 +0x0c83:  mov    %ebx,(%esp)
0828e4d9 +0x0c86:  call   0828edca <+0x1577>
0828e4de +0x0c8b:  mov    %ebx,%eax
0828e4e0 +0x0c8d:  add    $0x14,%esp
0828e4e3 +0x0c90:  pop    %ebx
0828e4e4 +0x0c91:  pop    %ebp
0828e4e5 +0x0c92:  ret    $0x4
0828e4e8 +0x0c95:  push   %ebp
0828e4e9 +0x0c96:  mov    %esp,%ebp
0828e4eb +0x0c98:  mov    0x8(%ebp),%eax
0828e4ee +0x0c9b:  pop    %ebp
0828e4ef +0x0c9c:  ret
0828e4f0 +0x0c9d:  push   %ebp
0828e4f1 +0x0c9e:  mov    %esp,%ebp
0828e4f3 +0x0ca0:  sub    $0x18,%esp
0828e4f6 +0x0ca3:  mov    0xc(%ebp),%eax
0828e4f9 +0x0ca6:  mov    %eax,(%esp)
0828e4fc +0x0ca9:  call   080e2d79 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0xb1f>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0xb1f
0828e501 +0x0cae:  mov    (%eax),%edx
0828e503 +0x0cb0:  mov    0x8(%ebp),%eax
0828e506 +0x0cb3:  mov    %edx,(%eax)
0828e508 +0x0cb5:  mov    0x10(%ebp),%eax
0828e50b +0x0cb8:  mov    %eax,(%esp)
0828e50e +0x0cbb:  call   0828e4e8 <+0xc95>
0828e513 +0x0cc0:  mov    0x8(%ebp),%edx
0828e516 +0x0cc3:  mov    (%eax),%ecx
0828e518 +0x0cc5:  mov    %ecx,0x4(%edx)
0828e51b +0x0cc8:  mov    0x4(%eax),%ecx
0828e51e +0x0ccb:  mov    %ecx,0x8(%edx)
0828e521 +0x0cce:  mov    0x8(%eax),%eax
0828e524 +0x0cd1:  mov    %eax,0xc(%edx)
0828e527 +0x0cd4:  leave
0828e528 +0x0cd5:  ret
0828e529 +0x0cd6:  push   %ebp
0828e52a +0x0cd7:  mov    %esp,%ebp
0828e52c +0x0cd9:  mov    0x8(%ebp),%eax
0828e52f +0x0cdc:  pop    %ebp
0828e530 +0x0cdd:  ret
0828e531 +0x0cde:  nop
0828e532 +0x0cdf:  push   %ebp
0828e533 +0x0ce0:  mov    %esp,%ebp
0828e535 +0x0ce2:  push   %esi
0828e536 +0x0ce3:  push   %ebx
0828e537 +0x0ce4:  sub    $0x50,%esp
0828e53a +0x0ce7:  mov    0x8(%ebp),%ebx
0828e53d +0x0cea:  mov    0xc(%ebp),%eax
0828e540 +0x0ced:  mov    %eax,(%esp)
0828e543 +0x0cf0:  call   0828e3f8 <+0xba5>
0828e548 +0x0cf5:  mov    %eax,-0x14(%ebp)
0828e54b +0x0cf8:  mov    0xc(%ebp),%eax
0828e54e +0x0cfb:  mov    %eax,(%esp)
0828e551 +0x0cfe:  call   0828ed0c <+0x14b9>
0828e556 +0x0d03:  mov    %eax,-0x10(%ebp)
0828e559 +0x0d06:  movb   $0x1,-0x9(%ebp)
0828e55d +0x0d0a:  jmp    0828e5bb <+0xd68>
0828e55f +0x0d0c:  mov    -0x14(%ebp),%eax
0828e562 +0x0d0f:  mov    %eax,-0x10(%ebp)
0828e565 +0x0d12:  mov    -0x14(%ebp),%eax
0828e568 +0x0d15:  mov    %eax,(%esp)
0828e56b +0x0d18:  call   0828ede0 <+0x158d>
0828e570 +0x0d1d:  mov    %eax,%esi
0828e572 +0x0d1f:  mov    0x10(%ebp),%eax
0828e575 +0x0d22:  mov    %eax,0x4(%esp)
0828e579 +0x0d26:  lea    -0x2d(%ebp),%eax
0828e57c +0x0d29:  mov    %eax,(%esp)
0828e57f +0x0d2c:  call   0828edd8 <+0x1585>
0828e584 +0x0d31:  mov    0xc(%ebp),%edx
0828e587 +0x0d34:  mov    %esi,0x8(%esp)
0828e58b +0x0d38:  mov    %eax,0x4(%esp)
0828e58f +0x0d3c:  mov    %edx,(%esp)
0828e592 +0x0d3f:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
0828e597 +0x0d44:  mov    %al,-0x9(%ebp)
0828e59a +0x0d47:  cmpb   $0x0,-0x9(%ebp)
0828e59e +0x0d4b:  je     0828e5ad <+0xd5a>
0828e5a0 +0x0d4d:  mov    -0x14(%ebp),%eax
0828e5a3 +0x0d50:  mov    %eax,(%esp)
0828e5a6 +0x0d53:  call   0828eccc <+0x1479>
0828e5ab +0x0d58:  jmp    0828e5b8 <+0xd65>
0828e5ad +0x0d5a:  mov    -0x14(%ebp),%eax
0828e5b0 +0x0d5d:  mov    %eax,(%esp)
0828e5b3 +0x0d60:  call   0828ecc1 <+0x146e>
0828e5b8 +0x0d65:  mov    %eax,-0x14(%ebp)
0828e5bb +0x0d68:  cmpl   $0x0,-0x14(%ebp)
0828e5bf +0x0d6c:  setne  %al
0828e5c2 +0x0d6f:  test   %al,%al
0828e5c4 +0x0d71:  jne    0828e55f <+0xd0c>
0828e5c6 +0x0d73:  mov    -0x10(%ebp),%eax
0828e5c9 +0x0d76:  mov    %eax,0x4(%esp)
0828e5cd +0x0d7a:  lea    -0x34(%ebp),%eax
0828e5d0 +0x0d7d:  mov    %eax,(%esp)
0828e5d3 +0x0d80:  call   0828edca <+0x1577>
0828e5d8 +0x0d85:  cmpb   $0x0,-0x9(%ebp)
0828e5dc +0x0d89:  je     0828e65d <+0xe0a>
0828e5de +0x0d8b:  lea    -0x2c(%ebp),%eax
0828e5e1 +0x0d8e:  mov    0xc(%ebp),%edx
0828e5e4 +0x0d91:  mov    %edx,0x4(%esp)
0828e5e8 +0x0d95:  mov    %eax,(%esp)
0828e5eb +0x0d98:  call   0828ebd8 <+0x1385>
0828e5f0 +0x0d9d:  sub    $0x4,%esp
0828e5f3 +0x0da0:  lea    -0x2c(%ebp),%eax
0828e5f6 +0x0da3:  mov    %eax,0x4(%esp)
0828e5fa +0x0da7:  lea    -0x34(%ebp),%eax
0828e5fd +0x0daa:  mov    %eax,(%esp)
0828e600 +0x0dad:  call   0828edb6 <+0x1563>
0828e605 +0x0db2:  test   %al,%al
0828e607 +0x0db4:  je     0828e652 <+0xdff>
0828e609 +0x0db6:  movb   $0x1,-0x25(%ebp)
0828e60d +0x0dba:  mov    -0x10(%ebp),%ecx
0828e610 +0x0dbd:  mov    -0x14(%ebp),%edx
0828e613 +0x0dc0:  lea    -0x24(%ebp),%eax
0828e616 +0x0dc3:  mov    0x10(%ebp),%esi
0828e619 +0x0dc6:  mov    %esi,0x10(%esp)
0828e61d +0x0dca:  mov    %ecx,0xc(%esp)
0828e621 +0x0dce:  mov    %edx,0x8(%esp)
0828e625 +0x0dd2:  mov    0xc(%ebp),%edx
0828e628 +0x0dd5:  mov    %edx,0x4(%esp)
0828e62c +0x0dd9:  mov    %eax,(%esp)
0828e62f +0x0ddc:  call   0828ee02 <+0x15af>
0828e634 +0x0de1:  sub    $0x4,%esp
0828e637 +0x0de4:  lea    -0x25(%ebp),%eax
0828e63a +0x0de7:  mov    %eax,0x8(%esp)
0828e63e +0x0deb:  lea    -0x24(%ebp),%eax
0828e641 +0x0dee:  mov    %eax,0x4(%esp)
0828e645 +0x0df2:  mov    %ebx,(%esp)
0828e648 +0x0df5:  call   0828eeca <+0x1677>
0828e64d +0x0dfa:  jmp    0828e6f3 <+0xea0>
0828e652 +0x0dff:  lea    -0x34(%ebp),%eax
0828e655 +0x0e02:  mov    %eax,(%esp)
0828e658 +0x0e05:  call   0828eef8 <+0x16a5>
0828e65d +0x0e0a:  mov    0x10(%ebp),%eax
0828e660 +0x0e0d:  mov    %eax,0x4(%esp)
0828e664 +0x0e11:  lea    -0x1e(%ebp),%eax
0828e667 +0x0e14:  mov    %eax,(%esp)
0828e66a +0x0e17:  call   0828edd8 <+0x1585>
0828e66f +0x0e1c:  mov    %eax,%esi
0828e671 +0x0e1e:  mov    -0x34(%ebp),%eax
0828e674 +0x0e21:  mov    %eax,(%esp)
0828e677 +0x0e24:  call   0828ed94 <+0x1541>
0828e67c +0x0e29:  mov    0xc(%ebp),%edx
0828e67f +0x0e2c:  mov    %esi,0x8(%esp)
0828e683 +0x0e30:  mov    %eax,0x4(%esp)
0828e687 +0x0e34:  mov    %edx,(%esp)
0828e68a +0x0e37:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
0828e68f +0x0e3c:  test   %al,%al
0828e691 +0x0e3e:  je     0828e6d9 <+0xe86>
0828e693 +0x0e40:  movb   $0x1,-0x1d(%ebp)
0828e697 +0x0e44:  mov    -0x10(%ebp),%ecx
0828e69a +0x0e47:  mov    -0x14(%ebp),%edx
0828e69d +0x0e4a:  lea    -0x1c(%ebp),%eax
0828e6a0 +0x0e4d:  mov    0x10(%ebp),%esi
0828e6a3 +0x0e50:  mov    %esi,0x10(%esp)
0828e6a7 +0x0e54:  mov    %ecx,0xc(%esp)
0828e6ab +0x0e58:  mov    %edx,0x8(%esp)
0828e6af +0x0e5c:  mov    0xc(%ebp),%edx
0828e6b2 +0x0e5f:  mov    %edx,0x4(%esp)
0828e6b6 +0x0e63:  mov    %eax,(%esp)
0828e6b9 +0x0e66:  call   0828ee02 <+0x15af>
0828e6be +0x0e6b:  sub    $0x4,%esp
0828e6c1 +0x0e6e:  lea    -0x1d(%ebp),%eax
0828e6c4 +0x0e71:  mov    %eax,0x8(%esp)
0828e6c8 +0x0e75:  lea    -0x1c(%ebp),%eax
0828e6cb +0x0e78:  mov    %eax,0x4(%esp)
0828e6cf +0x0e7c:  mov    %ebx,(%esp)
0828e6d2 +0x0e7f:  call   0828eeca <+0x1677>
0828e6d7 +0x0e84:  jmp    0828e6f3 <+0xea0>
0828e6d9 +0x0e86:  movb   $0x0,-0x15(%ebp)
0828e6dd +0x0e8a:  lea    -0x15(%ebp),%eax
0828e6e0 +0x0e8d:  mov    %eax,0x8(%esp)
0828e6e4 +0x0e91:  lea    -0x34(%ebp),%eax
0828e6e7 +0x0e94:  mov    %eax,0x4(%esp)
0828e6eb +0x0e98:  mov    %ebx,(%esp)
0828e6ee +0x0e9b:  call   0828ef16 <+0x16c3>
0828e6f3 +0x0ea0:  mov    %ebx,%eax
0828e6f5 +0x0ea2:  lea    -0x8(%ebp),%esp
0828e6f8 +0x0ea5:  add    $0x0,%esp
0828e6fb +0x0ea8:  pop    %ebx
0828e6fc +0x0ea9:  pop    %esi
0828e6fd +0x0eaa:  pop    %ebp
0828e6fe +0x0eab:  ret    $0x4
0828e701 +0x0eae:  nop
0828e702 +0x0eaf:  push   %ebp
0828e703 +0x0eb0:  mov    %esp,%ebp
0828e705 +0x0eb2:  mov    0x8(%ebp),%eax
0828e708 +0x0eb5:  pop    %ebp
0828e709 +0x0eb6:  ret
0828e70a +0x0eb7:  push   %ebp
0828e70b +0x0eb8:  mov    %esp,%ebp
0828e70d +0x0eba:  push   %esi
0828e70e +0x0ebb:  push   %ebx
0828e70f +0x0ebc:  sub    $0x10,%esp
0828e712 +0x0ebf:  mov    0x8(%ebp),%eax
0828e715 +0x0ec2:  mov    0x10(%ebp),%edx
0828e718 +0x0ec5:  mov    %edx,0x4(%esp)
0828e71c +0x0ec9:  mov    %eax,(%esp)
0828e71f +0x0ecc:  call   0828ef44 <+0x16f1>
0828e724 +0x0ed1:  mov    0xc(%ebp),%eax
0828e727 +0x0ed4:  mov    %eax,0x4(%esp)
0828e72b +0x0ed8:  mov    0x8(%ebp),%eax
0828e72e +0x0edb:  mov    %eax,(%esp)
0828e731 +0x0ede:  call   0828ef7c <+0x1729>
0828e736 +0x0ee3:  mov    0x8(%ebp),%edx
0828e739 +0x0ee6:  mov    %eax,(%edx)
0828e73b +0x0ee8:  mov    0x8(%ebp),%eax
0828e73e +0x0eeb:  mov    (%eax),%edx
0828e740 +0x0eed:  mov    0x8(%ebp),%eax
0828e743 +0x0ef0:  mov    %edx,0x4(%eax)
0828e746 +0x0ef3:  mov    0x8(%ebp),%eax
0828e749 +0x0ef6:  mov    (%eax),%eax
0828e74b +0x0ef8:  mov    0xc(%ebp),%edx
0828e74e +0x0efb:  shl    $0x2,%edx
0828e751 +0x0efe:  lea    (%eax,%edx,1),%edx
0828e754 +0x0f01:  mov    0x8(%ebp),%eax
0828e757 +0x0f04:  mov    %edx,0x8(%eax)
0828e75a +0x0f07:  add    $0x10,%esp
0828e75d +0x0f0a:  pop    %ebx
0828e75e +0x0f0b:  pop    %esi
0828e75f +0x0f0c:  pop    %ebp
0828e760 +0x0f0d:  ret
0828e761 +0x0f0e:  mov    %edx,%ebx
0828e763 +0x0f10:  mov    %eax,%esi
0828e765 +0x0f12:  mov    0x8(%ebp),%eax
0828e768 +0x0f15:  mov    %eax,(%esp)
0828e76b +0x0f18:  call   0828e2dc <+0xa89>
0828e770 +0x0f1d:  mov    %esi,%eax
0828e772 +0x0f1f:  mov    %ebx,%edx
0828e774 +0x0f21:  mov    %eax,(%esp)
0828e777 +0x0f24:  call   08ae3750 <_Unwind_Resume>
0828e77c +0x0f29:  push   %ebp
0828e77d +0x0f2a:  mov    %esp,%ebp
0828e77f +0x0f2c:  push   %ebx
0828e780 +0x0f2d:  sub    $0x24,%esp
0828e783 +0x0f30:  mov    0x8(%ebp),%ebx
0828e786 +0x0f33:  mov    0xc(%ebp),%eax
0828e789 +0x0f36:  mov    (%eax),%eax
0828e78b +0x0f38:  mov    %eax,-0xc(%ebp)
0828e78e +0x0f3b:  lea    -0xc(%ebp),%eax
0828e791 +0x0f3e:  mov    %eax,0x4(%esp)
0828e795 +0x0f42:  mov    %ebx,(%esp)
0828e798 +0x0f45:  call   0828efac <+0x1759>
0828e79d +0x0f4a:  mov    %ebx,%eax
0828e79f +0x0f4c:  add    $0x24,%esp
0828e7a2 +0x0f4f:  pop    %ebx
0828e7a3 +0x0f50:  pop    %ebp
0828e7a4 +0x0f51:  ret    $0x4
0828e7a7 +0x0f54:  nop
0828e7a8 +0x0f55:  push   %ebp
0828e7a9 +0x0f56:  mov    %esp,%ebp
0828e7ab +0x0f58:  push   %ebx
0828e7ac +0x0f59:  sub    $0x24,%esp
0828e7af +0x0f5c:  mov    0x8(%ebp),%ebx
0828e7b2 +0x0f5f:  mov    0xc(%ebp),%eax
0828e7b5 +0x0f62:  mov    0x4(%eax),%eax
0828e7b8 +0x0f65:  mov    %eax,-0xc(%ebp)
0828e7bb +0x0f68:  lea    -0xc(%ebp),%eax
0828e7be +0x0f6b:  mov    %eax,0x4(%esp)
0828e7c2 +0x0f6f:  mov    %ebx,(%esp)
0828e7c5 +0x0f72:  call   0828efac <+0x1759>
0828e7ca +0x0f77:  mov    %ebx,%eax
0828e7cc +0x0f79:  add    $0x24,%esp
0828e7cf +0x0f7c:  pop    %ebx
0828e7d0 +0x0f7d:  pop    %ebp
0828e7d1 +0x0f7e:  ret    $0x4
0828e7d4 +0x0f81:  push   %ebp
0828e7d5 +0x0f82:  mov    %esp,%ebp
0828e7d7 +0x0f84:  sub    $0x18,%esp
0828e7da +0x0f87:  mov    0x10(%ebp),%eax
0828e7dd +0x0f8a:  mov    %eax,0x8(%esp)
0828e7e1 +0x0f8e:  mov    0xc(%ebp),%eax
0828e7e4 +0x0f91:  mov    %eax,0x4(%esp)
0828e7e8 +0x0f95:  mov    0x8(%ebp),%eax
0828e7eb +0x0f98:  mov    %eax,(%esp)
0828e7ee +0x0f9b:  call   0828efbb <+0x1768>
0828e7f3 +0x0fa0:  leave
0828e7f4 +0x0fa1:  ret
0828e7f5 +0x0fa2:  nop
0828e7f6 +0x0fa3:  push   %ebp
0828e7f7 +0x0fa4:  mov    %esp,%ebp
0828e7f9 +0x0fa6:  push   %esi
0828e7fa +0x0fa7:  push   %ebx
0828e7fb +0x0fa8:  sub    $0x30,%esp
0828e7fe +0x0fab:  mov    0x8(%ebp),%ebx
0828e801 +0x0fae:  mov    0xc(%ebp),%eax
0828e804 +0x0fb1:  mov    %eax,(%esp)
0828e807 +0x0fb4:  call   0828ec60 <+0x140d>
0828e80c +0x0fb9:  mov    %eax,%esi
0828e80e +0x0fbb:  mov    0xc(%ebp),%eax
0828e811 +0x0fbe:  mov    %eax,(%esp)
0828e814 +0x0fc1:  call   0828ec54 <+0x1401>
0828e819 +0x0fc6:  lea    -0x10(%ebp),%edx
0828e81c +0x0fc9:  mov    0x10(%ebp),%ecx
0828e81f +0x0fcc:  mov    %ecx,0x10(%esp)
0828e823 +0x0fd0:  mov    %esi,0xc(%esp)
0828e827 +0x0fd4:  mov    %eax,0x8(%esp)
0828e82b +0x0fd8:  mov    0xc(%ebp),%eax
0828e82e +0x0fdb:  mov    %eax,0x4(%esp)
0828e832 +0x0fdf:  mov    %edx,(%esp)
0828e835 +0x0fe2:  call   0828efdc <+0x1789>
0828e83a +0x0fe7:  sub    $0x4,%esp
0828e83d +0x0fea:  lea    -0xc(%ebp),%eax
0828e840 +0x0fed:  mov    0xc(%ebp),%edx
0828e843 +0x0ff0:  mov    %edx,0x4(%esp)
0828e847 +0x0ff4:  mov    %eax,(%esp)
0828e84a +0x0ff7:  call   0828e8b4 <+0x1061>
0828e84f +0x0ffc:  sub    $0x4,%esp
0828e852 +0x0fff:  lea    -0xc(%ebp),%eax
0828e855 +0x1002:  mov    %eax,0x4(%esp)
0828e859 +0x1006:  lea    -0x10(%ebp),%eax
0828e85c +0x1009:  mov    %eax,(%esp)
0828e85f +0x100c:  call   0828f07a <+0x1827>
0828e864 +0x1011:  test   %al,%al
0828e866 +0x1013:  jne    0828e88d <+0x103a>
0828e868 +0x1015:  mov    -0x10(%ebp),%eax
0828e86b +0x1018:  mov    %eax,(%esp)
0828e86e +0x101b:  call   0828f058 <+0x1805>
0828e873 +0x1020:  mov    0xc(%ebp),%edx
0828e876 +0x1023:  mov    %eax,0x8(%esp)
0828e87a +0x1027:  mov    0x10(%ebp),%eax
0828e87d +0x102a:  mov    %eax,0x4(%esp)
0828e881 +0x102e:  mov    %edx,(%esp)
0828e884 +0x1031:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
0828e889 +0x1036:  test   %al,%al
0828e88b +0x1038:  je     0828e8a1 <+0x104e>
0828e88d +0x103a:  mov    0xc(%ebp),%eax
0828e890 +0x103d:  mov    %eax,0x4(%esp)
0828e894 +0x1041:  mov    %ebx,(%esp)
0828e897 +0x1044:  call   0828e8b4 <+0x1061>
0828e89c +0x1049:  sub    $0x4,%esp
0828e89f +0x104c:  jmp    0828e8a6 <+0x1053>
0828e8a1 +0x104e:  mov    -0x10(%ebp),%eax
0828e8a4 +0x1051:  mov    %eax,(%ebx)
0828e8a6 +0x1053:  mov    %ebx,%eax
0828e8a8 +0x1055:  lea    -0x8(%ebp),%esp
0828e8ab +0x1058:  add    $0x0,%esp
0828e8ae +0x105b:  pop    %ebx
0828e8af +0x105c:  pop    %esi
0828e8b0 +0x105d:  pop    %ebp
0828e8b1 +0x105e:  ret    $0x4
0828e8b4 +0x1061:  push   %ebp
0828e8b5 +0x1062:  mov    %esp,%ebp
0828e8b7 +0x1064:  push   %ebx
0828e8b8 +0x1065:  sub    $0x14,%esp
0828e8bb +0x1068:  mov    0x8(%ebp),%ebx
0828e8be +0x106b:  mov    0xc(%ebp),%eax
0828e8c1 +0x106e:  add    $0x4,%eax
0828e8c4 +0x1071:  mov    %eax,0x4(%esp)
0828e8c8 +0x1075:  mov    %ebx,(%esp)
0828e8cb +0x1078:  call   0828f08e <+0x183b>
0828e8d0 +0x107d:  mov    %ebx,%eax
0828e8d2 +0x107f:  add    $0x14,%esp
0828e8d5 +0x1082:  pop    %ebx
0828e8d6 +0x1083:  pop    %ebp
0828e8d7 +0x1084:  ret    $0x4
0828e8da +0x1087:  push   %ebp
0828e8db +0x1088:  mov    %esp,%ebp
0828e8dd +0x108a:  mov    0x8(%ebp),%eax
0828e8e0 +0x108d:  pop    %ebp
0828e8e1 +0x108e:  ret
0828e8e2 +0x108f:  push   %ebp
0828e8e3 +0x1090:  mov    %esp,%ebp
0828e8e5 +0x1092:  sub    $0x18,%esp
0828e8e8 +0x1095:  mov    0x8(%ebp),%eax
0828e8eb +0x1098:  mov    %eax,(%esp)
0828e8ee +0x109b:  call   0828f0d4 <+0x1881>
0828e8f3 +0x10a0:  leave
0828e8f4 +0x10a1:  ret
0828e8f5 +0x10a2:  nop
0828e8f6 +0x10a3:  push   %ebp
0828e8f7 +0x10a4:  mov    %esp,%ebp
0828e8f9 +0x10a6:  push   %esi
0828e8fa +0x10a7:  push   %ebx
0828e8fb +0x10a8:  sub    $0x10,%esp
0828e8fe +0x10ab:  mov    0x8(%ebp),%eax
0828e901 +0x10ae:  mov    0x10(%ebp),%edx
0828e904 +0x10b1:  mov    %edx,0x4(%esp)
0828e908 +0x10b5:  mov    %eax,(%esp)
0828e90b +0x10b8:  call   0828f09c <+0x1849>
0828e910 +0x10bd:  mov    0xc(%ebp),%eax
0828e913 +0x10c0:  mov    %eax,0x4(%esp)
0828e917 +0x10c4:  mov    0x8(%ebp),%eax
0828e91a +0x10c7:  mov    %eax,(%esp)
0828e91d +0x10ca:  call   0828f0e8 <+0x1895>
0828e922 +0x10cf:  mov    0x8(%ebp),%edx
0828e925 +0x10d2:  mov    %eax,(%edx)
0828e927 +0x10d4:  mov    0x8(%ebp),%eax
0828e92a +0x10d7:  mov    (%eax),%edx
0828e92c +0x10d9:  mov    0x8(%ebp),%eax
0828e92f +0x10dc:  mov    %edx,0x4(%eax)
0828e932 +0x10df:  mov    0x8(%ebp),%eax
0828e935 +0x10e2:  mov    (%eax),%ecx
0828e937 +0x10e4:  mov    0xc(%ebp),%edx
0828e93a +0x10e7:  mov    %edx,%eax
0828e93c +0x10e9:  shl    $0x2,%eax
0828e93f +0x10ec:  add    %edx,%eax
0828e941 +0x10ee:  shl    $0x3,%eax
0828e944 +0x10f1:  lea    (%ecx,%eax,1),%edx
0828e947 +0x10f4:  mov    0x8(%ebp),%eax
0828e94a +0x10f7:  mov    %edx,0x8(%eax)
0828e94d +0x10fa:  add    $0x10,%esp
0828e950 +0x10fd:  pop    %ebx
0828e951 +0x10fe:  pop    %esi
0828e952 +0x10ff:  pop    %ebp
0828e953 +0x1100:  ret
0828e954 +0x1101:  mov    %edx,%ebx
0828e956 +0x1103:  mov    %eax,%esi
0828e958 +0x1105:  mov    0x8(%ebp),%eax
0828e95b +0x1108:  mov    %eax,(%esp)
0828e95e +0x110b:  call   0828e8e2 <+0x108f>
0828e963 +0x1110:  mov    %esi,%eax
0828e965 +0x1112:  mov    %ebx,%edx
0828e967 +0x1114:  mov    %eax,(%esp)
0828e96a +0x1117:  call   08ae3750 <_Unwind_Resume>
0828e96f +0x111c:  nop
0828e970 +0x111d:  push   %ebp
0828e971 +0x111e:  mov    %esp,%ebp
0828e973 +0x1120:  push   %esi
0828e974 +0x1121:  push   %ebx
0828e975 +0x1122:  sub    $0x10,%esp
0828e978 +0x1125:  mov    0x8(%ebp),%eax
0828e97b +0x1128:  mov    0x8(%eax),%eax
0828e97e +0x112b:  mov    %eax,%edx
0828e980 +0x112d:  mov    0x8(%ebp),%eax
0828e983 +0x1130:  mov    (%eax),%eax
0828e985 +0x1132:  mov    %edx,%ecx
0828e987 +0x1134:  sub    %eax,%ecx
0828e989 +0x1136:  mov    %ecx,%eax
0828e98b +0x1138:  sar    $0x3,%eax
0828e98e +0x113b:  imul   $0xcccccccd,%eax,%eax
0828e994 +0x1141:  mov    %eax,%edx
0828e996 +0x1143:  mov    0x8(%ebp),%eax
0828e999 +0x1146:  mov    (%eax),%eax
0828e99b +0x1148:  mov    %edx,0x8(%esp)
0828e99f +0x114c:  mov    %eax,0x4(%esp)
0828e9a3 +0x1150:  mov    0x8(%ebp),%eax
0828e9a6 +0x1153:  mov    %eax,(%esp)
0828e9a9 +0x1156:  call   0828f118 <+0x18c5>
0828e9ae +0x115b:  jmp    0828e9cb <+0x1178>
0828e9b0 +0x115d:  mov    %edx,%ebx
0828e9b2 +0x115f:  mov    %eax,%esi
0828e9b4 +0x1161:  mov    0x8(%ebp),%eax
0828e9b7 +0x1164:  mov    %eax,(%esp)
0828e9ba +0x1167:  call   0828e8e2 <+0x108f>
0828e9bf +0x116c:  mov    %esi,%eax
0828e9c1 +0x116e:  mov    %ebx,%edx
0828e9c3 +0x1170:  mov    %eax,(%esp)
0828e9c6 +0x1173:  call   08ae3750 <_Unwind_Resume>
0828e9cb +0x1178:  mov    0x8(%ebp),%eax
0828e9ce +0x117b:  mov    %eax,(%esp)
0828e9d1 +0x117e:  call   0828e8e2 <+0x108f>
0828e9d6 +0x1183:  add    $0x10,%esp
0828e9d9 +0x1186:  pop    %ebx
0828e9da +0x1187:  pop    %esi
0828e9db +0x1188:  pop    %ebp
0828e9dc +0x1189:  ret
0828e9dd +0x118a:  nop
0828e9de +0x118b:  push   %ebp
0828e9df +0x118c:  mov    %esp,%ebp
0828e9e1 +0x118e:  push   %ebx
0828e9e2 +0x118f:  sub    $0x24,%esp
0828e9e5 +0x1192:  mov    0x8(%ebp),%ebx
0828e9e8 +0x1195:  mov    0xc(%ebp),%eax
0828e9eb +0x1198:  mov    (%eax),%eax
0828e9ed +0x119a:  mov    %eax,-0xc(%ebp)
0828e9f0 +0x119d:  lea    -0xc(%ebp),%eax
0828e9f3 +0x11a0:  mov    %eax,0x4(%esp)
0828e9f7 +0x11a4:  mov    %ebx,(%esp)
0828e9fa +0x11a7:  call   0828f140 <+0x18ed>
0828e9ff +0x11ac:  mov    %ebx,%eax
0828ea01 +0x11ae:  add    $0x24,%esp
0828ea04 +0x11b1:  pop    %ebx
0828ea05 +0x11b2:  pop    %ebp
0828ea06 +0x11b3:  ret    $0x4
0828ea09 +0x11b6:  nop
0828ea0a +0x11b7:  push   %ebp
0828ea0b +0x11b8:  mov    %esp,%ebp
0828ea0d +0x11ba:  push   %ebx
0828ea0e +0x11bb:  sub    $0x24,%esp
0828ea11 +0x11be:  mov    0x8(%ebp),%ebx
0828ea14 +0x11c1:  mov    0xc(%ebp),%eax
0828ea17 +0x11c4:  mov    0x4(%eax),%eax
0828ea1a +0x11c7:  mov    %eax,-0xc(%ebp)
0828ea1d +0x11ca:  lea    -0xc(%ebp),%eax
0828ea20 +0x11cd:  mov    %eax,0x4(%esp)
0828ea24 +0x11d1:  mov    %ebx,(%esp)
0828ea27 +0x11d4:  call   0828f140 <+0x18ed>
0828ea2c +0x11d9:  mov    %ebx,%eax
0828ea2e +0x11db:  add    $0x24,%esp
0828ea31 +0x11de:  pop    %ebx
0828ea32 +0x11df:  pop    %ebp
0828ea33 +0x11e0:  ret    $0x4
0828ea36 +0x11e3:  push   %ebp
0828ea37 +0x11e4:  mov    %esp,%ebp
0828ea39 +0x11e6:  mov    0x8(%ebp),%eax
0828ea3c +0x11e9:  pop    %ebp
0828ea3d +0x11ea:  ret
0828ea3e +0x11eb:  push   %ebp
0828ea3f +0x11ec:  mov    %esp,%ebp
0828ea41 +0x11ee:  sub    $0x18,%esp
0828ea44 +0x11f1:  mov    0x10(%ebp),%eax
0828ea47 +0x11f4:  mov    %eax,0x8(%esp)
0828ea4b +0x11f8:  mov    0xc(%ebp),%eax
0828ea4e +0x11fb:  mov    %eax,0x4(%esp)
0828ea52 +0x11ff:  mov    0x8(%ebp),%eax
0828ea55 +0x1202:  mov    %eax,(%esp)
0828ea58 +0x1205:  call   0828f14f <+0x18fc>
0828ea5d +0x120a:  leave
0828ea5e +0x120b:  ret
0828ea5f +0x120c:  push   %ebp
0828ea60 +0x120d:  mov    %esp,%ebp
0828ea62 +0x120f:  sub    $0x18,%esp
0828ea65 +0x1212:  mov    0xc(%ebp),%eax
0828ea68 +0x1215:  mov    %eax,0x4(%esp)
0828ea6c +0x1219:  mov    0x8(%ebp),%eax
0828ea6f +0x121c:  mov    %eax,(%esp)
0828ea72 +0x121f:  call   0828f170 <+0x191d>
0828ea77 +0x1224:  leave
0828ea78 +0x1225:  ret
0828ea79 +0x1226:  nop
0828ea7a +0x1227:  push   %ebp
0828ea7b +0x1228:  mov    %esp,%ebp
0828ea7d +0x122a:  push   %ebx
0828ea7e +0x122b:  sub    $0x14,%esp
0828ea81 +0x122e:  mov    0x8(%ebp),%eax
0828ea84 +0x1231:  mov    %eax,(%esp)
0828ea87 +0x1234:  call   0828e3f8 <+0xba5>
0828ea8c +0x1239:  mov    %eax,0x4(%esp)
0828ea90 +0x123d:  mov    0x8(%ebp),%eax
0828ea93 +0x1240:  mov    %eax,(%esp)
0828ea96 +0x1243:  call   0828e3a2 <+0xb4f>
0828ea9b +0x1248:  mov    0x8(%ebp),%eax
0828ea9e +0x124b:  mov    %eax,(%esp)
0828eaa1 +0x124e:  call   0828f18a <+0x1937>
0828eaa6 +0x1253:  mov    %eax,%ebx
0828eaa8 +0x1255:  mov    0x8(%ebp),%eax
0828eaab +0x1258:  mov    %eax,(%esp)
0828eaae +0x125b:  call   0828ed0c <+0x14b9>
0828eab3 +0x1260:  mov    %eax,(%ebx)
0828eab5 +0x1262:  mov    0x8(%ebp),%eax
0828eab8 +0x1265:  mov    %eax,(%esp)
0828eabb +0x1268:  call   0828f196 <+0x1943>
0828eac0 +0x126d:  movl   $0x0,(%eax)
0828eac6 +0x1273:  mov    0x8(%ebp),%eax
0828eac9 +0x1276:  mov    %eax,(%esp)
0828eacc +0x1279:  call   0828f1a2 <+0x194f>
0828ead1 +0x127e:  mov    %eax,%ebx
0828ead3 +0x1280:  mov    0x8(%ebp),%eax
0828ead6 +0x1283:  mov    %eax,(%esp)
0828ead9 +0x1286:  call   0828ed0c <+0x14b9>
0828eade +0x128b:  mov    %eax,(%ebx)
0828eae0 +0x128d:  mov    0x8(%ebp),%eax
0828eae3 +0x1290:  movl   $0x0,0x14(%eax)
0828eaea +0x1297:  add    $0x14,%esp
0828eaed +0x129a:  pop    %ebx
0828eaee +0x129b:  pop    %ebp
0828eaef +0x129c:  ret
0828eaf0 +0x129d:  push   %ebp
0828eaf1 +0x129e:  mov    %esp,%ebp
0828eaf3 +0x12a0:  push   %ebx
0828eaf4 +0x12a1:  sub    $0x14,%esp
0828eaf7 +0x12a4:  mov    0x8(%ebp),%ebx
0828eafa +0x12a7:  mov    0xc(%ebp),%eax
0828eafd +0x12aa:  mov    0xc(%eax),%eax
0828eb00 +0x12ad:  mov    %eax,0x4(%esp)
0828eb04 +0x12b1:  mov    %ebx,(%esp)
0828eb07 +0x12b4:  call   0828f1ae <+0x195b>
0828eb0c +0x12b9:  mov    %ebx,%eax
0828eb0e +0x12bb:  add    $0x14,%esp
0828eb11 +0x12be:  pop    %ebx
0828eb12 +0x12bf:  pop    %ebp
0828eb13 +0x12c0:  ret    $0x4
0828eb16 +0x12c3:  push   %ebp
0828eb17 +0x12c4:  mov    %esp,%ebp
0828eb19 +0x12c6:  push   %ebx
0828eb1a +0x12c7:  sub    $0x14,%esp
0828eb1d +0x12ca:  mov    0x8(%ebp),%ebx
0828eb20 +0x12cd:  mov    0xc(%ebp),%eax
0828eb23 +0x12d0:  add    $0x4,%eax
0828eb26 +0x12d3:  mov    %eax,0x4(%esp)
0828eb2a +0x12d7:  mov    %ebx,(%esp)
0828eb2d +0x12da:  call   0828f1ae <+0x195b>
0828eb32 +0x12df:  mov    %ebx,%eax
0828eb34 +0x12e1:  add    $0x14,%esp
0828eb37 +0x12e4:  pop    %ebx
0828eb38 +0x12e5:  pop    %ebp
0828eb39 +0x12e6:  ret    $0x4
0828eb3c +0x12e9:  push   %ebp
0828eb3d +0x12ea:  mov    %esp,%ebp
0828eb3f +0x12ec:  mov    0x8(%ebp),%eax
0828eb42 +0x12ef:  mov    0x14(%eax),%eax
0828eb45 +0x12f2:  pop    %ebp
0828eb46 +0x12f3:  ret
0828eb47 +0x12f4:  nop
0828eb48 +0x12f5:  push   %ebp
0828eb49 +0x12f6:  mov    %esp,%ebp
0828eb4b +0x12f8:  sub    $0x28,%esp
0828eb4e +0x12fb:  jmp    0828eb6c <+0x1319>
0828eb50 +0x12fd:  mov    0x8(%ebp),%eax
0828eb53 +0x1300:  mov    %eax,(%esp)
0828eb56 +0x1303:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
0828eb5b +0x1308:  add    %eax,%eax
0828eb5d +0x130a:  mov    %eax,0x4(%esp)
0828eb61 +0x130e:  mov    0x8(%ebp),%eax
0828eb64 +0x1311:  mov    %eax,(%esp)
0828eb67 +0x1314:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
0828eb6c +0x1319:  movl   $0x180c,0x4(%esp)
0828eb74 +0x1321:  mov    0x8(%ebp),%eax
0828eb77 +0x1324:  mov    %eax,(%esp)
0828eb7a +0x1327:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
0828eb7f +0x132c:  xor    $0x1,%eax
0828eb82 +0x132f:  test   %al,%al
0828eb84 +0x1331:  jne    0828eb50 <+0x12fd>
0828eb86 +0x1333:  mov    0x8(%ebp),%eax
0828eb89 +0x1336:  mov    0x8(%eax),%eax
0828eb8c +0x1339:  mov    %eax,%edx
0828eb8e +0x133b:  mov    0x8(%ebp),%eax
0828eb91 +0x133e:  mov    0xc(%eax),%eax
0828eb94 +0x1341:  lea    (%edx,%eax,1),%eax
0828eb97 +0x1344:  mov    %eax,-0xc(%ebp)
0828eb9a +0x1347:  movl   $0x180c,0x4(%esp)
0828eba2 +0x134f:  mov    0x8(%ebp),%eax
0828eba5 +0x1352:  mov    %eax,(%esp)
0828eba8 +0x1355:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
0828ebad +0x135a:  mov    -0xc(%ebp),%eax
0828ebb0 +0x135d:  leave
0828ebb1 +0x135e:  ret
0828ebb2 +0x135f:  push   %ebp
0828ebb3 +0x1360:  mov    %esp,%ebp
0828ebb5 +0x1362:  push   %ebx
0828ebb6 +0x1363:  sub    $0x14,%esp
0828ebb9 +0x1366:  mov    0x8(%ebp),%ebx
0828ebbc +0x1369:  mov    0xc(%ebp),%eax
0828ebbf +0x136c:  mov    0xc(%eax),%eax
0828ebc2 +0x136f:  mov    %eax,0x4(%esp)
0828ebc6 +0x1373:  mov    %ebx,(%esp)
0828ebc9 +0x1376:  call   0828f08e <+0x183b>
0828ebce +0x137b:  mov    %ebx,%eax
0828ebd0 +0x137d:  add    $0x14,%esp
0828ebd3 +0x1380:  pop    %ebx
0828ebd4 +0x1381:  pop    %ebp
0828ebd5 +0x1382:  ret    $0x4
0828ebd8 +0x1385:  push   %ebp
0828ebd9 +0x1386:  mov    %esp,%ebp
0828ebdb +0x1388:  push   %ebx
0828ebdc +0x1389:  sub    $0x14,%esp
0828ebdf +0x138c:  mov    0x8(%ebp),%ebx
0828ebe2 +0x138f:  mov    0xc(%ebp),%eax
0828ebe5 +0x1392:  mov    0xc(%eax),%eax
0828ebe8 +0x1395:  mov    %eax,0x4(%esp)
0828ebec +0x1399:  mov    %ebx,(%esp)
0828ebef +0x139c:  call   0828edca <+0x1577>
0828ebf4 +0x13a1:  mov    %ebx,%eax
0828ebf6 +0x13a3:  add    $0x14,%esp
0828ebf9 +0x13a6:  pop    %ebx
0828ebfa +0x13a7:  pop    %ebp
0828ebfb +0x13a8:  ret    $0x4
0828ebfe +0x13ab:  push   %ebp
0828ebff +0x13ac:  mov    %esp,%ebp
0828ec01 +0x13ae:  sub    $0x18,%esp
0828ec04 +0x13b1:  mov    0x8(%ebp),%eax
0828ec07 +0x13b4:  mov    %eax,(%esp)
0828ec0a +0x13b7:  call   0828f1bc <+0x1969>
0828ec0f +0x13bc:  leave
0828ec10 +0x13bd:  ret
0828ec11 +0x13be:  nop
0828ec12 +0x13bf:  push   %ebp
0828ec13 +0x13c0:  mov    %esp,%ebp
0828ec15 +0x13c2:  sub    $0x18,%esp
0828ec18 +0x13c5:  cmpl   $0x0,0xc(%ebp)
0828ec1c +0x13c9:  je     0828ec37 <+0x13e4>
0828ec1e +0x13cb:  mov    0x8(%ebp),%eax
0828ec21 +0x13ce:  mov    0x10(%ebp),%edx
0828ec24 +0x13d1:  mov    %edx,0x8(%esp)
0828ec28 +0x13d5:  mov    0xc(%ebp),%edx
0828ec2b +0x13d8:  mov    %edx,0x4(%esp)
0828ec2f +0x13dc:  mov    %eax,(%esp)
0828ec32 +0x13df:  call   0828f1c2 <+0x196f>
0828ec37 +0x13e4:  leave
0828ec38 +0x13e5:  ret
0828ec39 +0x13e6:  push   %ebp
0828ec3a +0x13e7:  mov    %esp,%ebp
0828ec3c +0x13e9:  sub    $0x18,%esp
0828ec3f +0x13ec:  mov    0xc(%ebp),%eax
0828ec42 +0x13ef:  mov    %eax,0x4(%esp)
0828ec46 +0x13f3:  mov    0x8(%ebp),%eax
0828ec49 +0x13f6:  mov    %eax,(%esp)
0828ec4c +0x13f9:  call   0828f1d5 <+0x1982>
0828ec51 +0x13fe:  leave
0828ec52 +0x13ff:  ret
0828ec53 +0x1400:  nop
0828ec54 +0x1401:  push   %ebp
0828ec55 +0x1402:  mov    %esp,%ebp
0828ec57 +0x1404:  mov    0x8(%ebp),%eax
0828ec5a +0x1407:  mov    0x8(%eax),%eax
0828ec5d +0x140a:  pop    %ebp
0828ec5e +0x140b:  ret
0828ec5f +0x140c:  nop
0828ec60 +0x140d:  push   %ebp
0828ec61 +0x140e:  mov    %esp,%ebp
0828ec63 +0x1410:  mov    0x8(%ebp),%eax
0828ec66 +0x1413:  add    $0x4,%eax
0828ec69 +0x1416:  pop    %ebp
0828ec6a +0x1417:  ret
0828ec6b +0x1418:  nop
0828ec6c +0x1419:  push   %ebp
0828ec6d +0x141a:  mov    %esp,%ebp
0828ec6f +0x141c:  sub    $0x18,%esp
0828ec72 +0x141f:  mov    0x8(%ebp),%eax
0828ec75 +0x1422:  mov    %eax,(%esp)
0828ec78 +0x1425:  call   0828f1f0 <+0x199d>
0828ec7d +0x142a:  mov    0x8(%ebp),%eax
0828ec80 +0x142d:  movl   $0x0,0x4(%eax)
0828ec87 +0x1434:  mov    0x8(%ebp),%eax
0828ec8a +0x1437:  movl   $0x0,0x8(%eax)
0828ec91 +0x143e:  mov    0x8(%ebp),%eax
0828ec94 +0x1441:  movl   $0x0,0xc(%eax)
0828ec9b +0x1448:  mov    0x8(%ebp),%eax
0828ec9e +0x144b:  movl   $0x0,0x10(%eax)
0828eca5 +0x1452:  mov    0x8(%ebp),%eax
0828eca8 +0x1455:  movl   $0x0,0x14(%eax)
0828ecaf +0x145c:  mov    0x8(%ebp),%eax
0828ecb2 +0x145f:  mov    %eax,(%esp)
0828ecb5 +0x1462:  call   0828f204 <+0x19b1>
0828ecba +0x1467:  leave
0828ecbb +0x1468:  ret
0828ecbc +0x1469:  push   %ebp
0828ecbd +0x146a:  mov    %esp,%ebp
0828ecbf +0x146c:  pop    %ebp
0828ecc0 +0x146d:  ret
0828ecc1 +0x146e:  push   %ebp
0828ecc2 +0x146f:  mov    %esp,%ebp
0828ecc4 +0x1471:  mov    0x8(%ebp),%eax
0828ecc7 +0x1474:  mov    0xc(%eax),%eax
0828ecca +0x1477:  pop    %ebp
0828eccb +0x1478:  ret
0828eccc +0x1479:  push   %ebp
0828eccd +0x147a:  mov    %esp,%ebp
0828eccf +0x147c:  mov    0x8(%ebp),%eax
0828ecd2 +0x147f:  mov    0x8(%eax),%eax
0828ecd5 +0x1482:  pop    %ebp
0828ecd6 +0x1483:  ret
0828ecd7 +0x1484:  nop
0828ecd8 +0x1485:  push   %ebp
0828ecd9 +0x1486:  mov    %esp,%ebp
0828ecdb +0x1488:  sub    $0x18,%esp
0828ecde +0x148b:  mov    0x8(%ebp),%eax
0828ece1 +0x148e:  mov    %eax,(%esp)
0828ece4 +0x1491:  call   0828f236 <+0x19e3>
0828ece9 +0x1496:  mov    0xc(%ebp),%edx
0828ecec +0x1499:  mov    %edx,0x4(%esp)
0828ecf0 +0x149d:  mov    %eax,(%esp)
0828ecf3 +0x14a0:  call   0828f244 <+0x19f1>
0828ecf8 +0x14a5:  mov    0xc(%ebp),%eax
0828ecfb +0x14a8:  mov    %eax,0x4(%esp)
0828ecff +0x14ac:  mov    0x8(%ebp),%eax
0828ed02 +0x14af:  mov    %eax,(%esp)
0828ed05 +0x14b2:  call   0828f258 <+0x1a05>
0828ed0a +0x14b7:  leave
0828ed0b +0x14b8:  ret
0828ed0c +0x14b9:  push   %ebp
0828ed0d +0x14ba:  mov    %esp,%ebp
0828ed0f +0x14bc:  mov    0x8(%ebp),%eax
0828ed12 +0x14bf:  add    $0x4,%eax
0828ed15 +0x14c2:  pop    %ebp
0828ed16 +0x14c3:  ret
0828ed17 +0x14c4:  nop
0828ed18 +0x14c5:  push   %ebp
0828ed19 +0x14c6:  mov    %esp,%ebp
0828ed1b +0x14c8:  push   %ebx
0828ed1c +0x14c9:  sub    $0x14,%esp
0828ed1f +0x14cc:  mov    0x8(%ebp),%ebx
0828ed22 +0x14cf:  jmp    0828ed70 <+0x151d>
0828ed24 +0x14d1:  mov    0x10(%ebp),%eax
0828ed27 +0x14d4:  mov    %eax,(%esp)
0828ed2a +0x14d7:  call   0828ede0 <+0x158d>
0828ed2f +0x14dc:  mov    0xc(%ebp),%edx
0828ed32 +0x14df:  mov    0x18(%ebp),%ecx
0828ed35 +0x14e2:  mov    %ecx,0x8(%esp)
0828ed39 +0x14e6:  mov    %eax,0x4(%esp)
0828ed3d +0x14ea:  mov    %edx,(%esp)
0828ed40 +0x14ed:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
0828ed45 +0x14f2:  xor    $0x1,%eax
0828ed48 +0x14f5:  test   %al,%al
0828ed4a +0x14f7:  je     0828ed62 <+0x150f>
0828ed4c +0x14f9:  mov    0x10(%ebp),%eax
0828ed4f +0x14fc:  mov    %eax,0x14(%ebp)
0828ed52 +0x14ff:  mov    0x10(%ebp),%eax
0828ed55 +0x1502:  mov    %eax,(%esp)
0828ed58 +0x1505:  call   0828eccc <+0x1479>
0828ed5d +0x150a:  mov    %eax,0x10(%ebp)
0828ed60 +0x150d:  jmp    0828ed70 <+0x151d>
0828ed62 +0x150f:  mov    0x10(%ebp),%eax
0828ed65 +0x1512:  mov    %eax,(%esp)
0828ed68 +0x1515:  call   0828ecc1 <+0x146e>
0828ed6d +0x151a:  mov    %eax,0x10(%ebp)
0828ed70 +0x151d:  cmpl   $0x0,0x10(%ebp)
0828ed74 +0x1521:  setne  %al
0828ed77 +0x1524:  test   %al,%al
0828ed79 +0x1526:  jne    0828ed24 <+0x14d1>
0828ed7b +0x1528:  mov    0x14(%ebp),%eax
0828ed7e +0x152b:  mov    %eax,0x4(%esp)
0828ed82 +0x152f:  mov    %ebx,(%esp)
0828ed85 +0x1532:  call   0828edca <+0x1577>
0828ed8a +0x1537:  mov    %ebx,%eax
0828ed8c +0x1539:  add    $0x14,%esp
0828ed8f +0x153c:  pop    %ebx
0828ed90 +0x153d:  pop    %ebp
0828ed91 +0x153e:  ret    $0x4
0828ed94 +0x1541:  push   %ebp
0828ed95 +0x1542:  mov    %esp,%ebp
0828ed97 +0x1544:  sub    $0x28,%esp
0828ed9a +0x1547:  mov    0x8(%ebp),%eax
0828ed9d +0x154a:  mov    %eax,(%esp)
0828eda0 +0x154d:  call   0828f27a <+0x1a27>
0828eda5 +0x1552:  mov    %eax,0x4(%esp)
0828eda9 +0x1556:  lea    -0x9(%ebp),%eax
0828edac +0x1559:  mov    %eax,(%esp)
0828edaf +0x155c:  call   0828edd8 <+0x1585>
0828edb4 +0x1561:  leave
0828edb5 +0x1562:  ret
0828edb6 +0x1563:  push   %ebp
0828edb7 +0x1564:  mov    %esp,%ebp
0828edb9 +0x1566:  mov    0x8(%ebp),%eax
0828edbc +0x1569:  mov    (%eax),%edx
0828edbe +0x156b:  mov    0xc(%ebp),%eax
0828edc1 +0x156e:  mov    (%eax),%eax
0828edc3 +0x1570:  cmp    %eax,%edx
0828edc5 +0x1572:  sete   %al
0828edc8 +0x1575:  pop    %ebp
0828edc9 +0x1576:  ret
0828edca +0x1577:  push   %ebp
0828edcb +0x1578:  mov    %esp,%ebp
0828edcd +0x157a:  mov    0xc(%ebp),%edx
0828edd0 +0x157d:  mov    0x8(%ebp),%eax
0828edd3 +0x1580:  mov    %edx,(%eax)
0828edd5 +0x1582:  pop    %ebp
0828edd6 +0x1583:  ret
0828edd7 +0x1584:  nop
0828edd8 +0x1585:  push   %ebp
0828edd9 +0x1586:  mov    %esp,%ebp
0828eddb +0x1588:  mov    0xc(%ebp),%eax
0828edde +0x158b:  pop    %ebp
0828eddf +0x158c:  ret
0828ede0 +0x158d:  push   %ebp
0828ede1 +0x158e:  mov    %esp,%ebp
0828ede3 +0x1590:  sub    $0x28,%esp
0828ede6 +0x1593:  mov    0x8(%ebp),%eax
0828ede9 +0x1596:  mov    %eax,(%esp)
0828edec +0x1599:  call   0828f285 <+0x1a32>
0828edf1 +0x159e:  mov    %eax,0x4(%esp)
0828edf5 +0x15a2:  lea    -0x9(%ebp),%eax
0828edf8 +0x15a5:  mov    %eax,(%esp)
0828edfb +0x15a8:  call   0828edd8 <+0x1585>
0828ee00 +0x15ad:  leave
0828ee01 +0x15ae:  ret
0828ee02 +0x15af:  push   %ebp
0828ee03 +0x15b0:  mov    %esp,%ebp
0828ee05 +0x15b2:  push   %esi
0828ee06 +0x15b3:  push   %ebx
0828ee07 +0x15b4:  sub    $0x20,%esp
0828ee0a +0x15b7:  mov    0x8(%ebp),%esi
0828ee0d +0x15ba:  cmpl   $0x0,0x10(%ebp)
0828ee11 +0x15be:  jne    0828ee59 <+0x1606>
0828ee13 +0x15c0:  mov    0xc(%ebp),%eax
0828ee16 +0x15c3:  mov    %eax,(%esp)
0828ee19 +0x15c6:  call   0828ed0c <+0x14b9>
0828ee1e +0x15cb:  cmp    0x14(%ebp),%eax
0828ee21 +0x15ce:  je     0828ee59 <+0x1606>
0828ee23 +0x15d0:  mov    0x14(%ebp),%eax
0828ee26 +0x15d3:  mov    %eax,(%esp)
0828ee29 +0x15d6:  call   0828ed94 <+0x1541>
0828ee2e +0x15db:  mov    %eax,%ebx
0828ee30 +0x15dd:  mov    0x18(%ebp),%eax
0828ee33 +0x15e0:  mov    %eax,0x4(%esp)
0828ee37 +0x15e4:  lea    -0xe(%ebp),%eax
0828ee3a +0x15e7:  mov    %eax,(%esp)
0828ee3d +0x15ea:  call   0828edd8 <+0x1585>
0828ee42 +0x15ef:  mov    0xc(%ebp),%edx
0828ee45 +0x15f2:  mov    %ebx,0x8(%esp)
0828ee49 +0x15f6:  mov    %eax,0x4(%esp)
0828ee4d +0x15fa:  mov    %edx,(%esp)
0828ee50 +0x15fd:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
0828ee55 +0x1602:  test   %al,%al
0828ee57 +0x1604:  je     0828ee60 <+0x160d>
0828ee59 +0x1606:  mov    $0x1,%eax
0828ee5e +0x160b:  jmp    0828ee65 <+0x1612>
0828ee60 +0x160d:  mov    $0x0,%eax
0828ee65 +0x1612:  mov    %al,-0xd(%ebp)
0828ee68 +0x1615:  mov    0x18(%ebp),%eax
0828ee6b +0x1618:  mov    %eax,0x4(%esp)
0828ee6f +0x161c:  mov    0xc(%ebp),%eax
0828ee72 +0x161f:  mov    %eax,(%esp)
0828ee75 +0x1622:  call   0828f290 <+0x1a3d>
0828ee7a +0x1627:  mov    %eax,-0xc(%ebp)
0828ee7d +0x162a:  mov    0xc(%ebp),%eax
0828ee80 +0x162d:  lea    0x4(%eax),%ecx
0828ee83 +0x1630:  mov    -0xc(%ebp),%edx
0828ee86 +0x1633:  movzbl -0xd(%ebp),%eax
0828ee8a +0x1637:  mov    %ecx,0xc(%esp)
0828ee8e +0x163b:  mov    0x14(%ebp),%ecx
0828ee91 +0x163e:  mov    %ecx,0x8(%esp)
0828ee95 +0x1642:  mov    %edx,0x4(%esp)
0828ee99 +0x1646:  mov    %eax,(%esp)
0828ee9c +0x1649:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
0828eea1 +0x164e:  mov    0xc(%ebp),%eax
0828eea4 +0x1651:  mov    0x14(%eax),%eax
0828eea7 +0x1654:  lea    0x1(%eax),%edx
0828eeaa +0x1657:  mov    0xc(%ebp),%eax
0828eead +0x165a:  mov    %edx,0x14(%eax)
0828eeb0 +0x165d:  mov    -0xc(%ebp),%eax
0828eeb3 +0x1660:  mov    %eax,0x4(%esp)
0828eeb7 +0x1664:  mov    %esi,(%esp)
0828eeba +0x1667:  call   0828edca <+0x1577>
0828eebf +0x166c:  mov    %esi,%eax
0828eec1 +0x166e:  add    $0x20,%esp
0828eec4 +0x1671:  pop    %ebx
0828eec5 +0x1672:  pop    %esi
0828eec6 +0x1673:  pop    %ebp
0828eec7 +0x1674:  ret    $0x4
0828eeca +0x1677:  push   %ebp
0828eecb +0x1678:  mov    %esp,%ebp
0828eecd +0x167a:  sub    $0x18,%esp
0828eed0 +0x167d:  mov    0xc(%ebp),%eax
0828eed3 +0x1680:  mov    %eax,(%esp)
0828eed6 +0x1683:  call   0828f311 <+0x1abe>
0828eedb +0x1688:  mov    0x8(%ebp),%edx
0828eede +0x168b:  mov    (%eax),%eax
0828eee0 +0x168d:  mov    %eax,(%edx)
0828eee2 +0x168f:  mov    0x10(%ebp),%eax
0828eee5 +0x1692:  mov    %eax,(%esp)
0828eee8 +0x1695:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
0828eeed +0x169a:  movzbl (%eax),%edx
0828eef0 +0x169d:  mov    0x8(%ebp),%eax
0828eef3 +0x16a0:  mov    %dl,0x4(%eax)
0828eef6 +0x16a3:  leave
0828eef7 +0x16a4:  ret
0828eef8 +0x16a5:  push   %ebp
0828eef9 +0x16a6:  mov    %esp,%ebp
0828eefb +0x16a8:  sub    $0x18,%esp
0828eefe +0x16ab:  mov    0x8(%ebp),%eax
0828ef01 +0x16ae:  mov    (%eax),%eax
0828ef03 +0x16b0:  mov    %eax,(%esp)
0828ef06 +0x16b3:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
0828ef0b +0x16b8:  mov    0x8(%ebp),%edx
0828ef0e +0x16bb:  mov    %eax,(%edx)
0828ef10 +0x16bd:  mov    0x8(%ebp),%eax
0828ef13 +0x16c0:  leave
0828ef14 +0x16c1:  ret
0828ef15 +0x16c2:  nop
0828ef16 +0x16c3:  push   %ebp
0828ef17 +0x16c4:  mov    %esp,%ebp
0828ef19 +0x16c6:  sub    $0x18,%esp
0828ef1c +0x16c9:  mov    0xc(%ebp),%eax
0828ef1f +0x16cc:  mov    %eax,(%esp)
0828ef22 +0x16cf:  call   0828f319 <+0x1ac6>
0828ef27 +0x16d4:  mov    0x8(%ebp),%edx
0828ef2a +0x16d7:  mov    (%eax),%eax
0828ef2c +0x16d9:  mov    %eax,(%edx)
0828ef2e +0x16db:  mov    0x10(%ebp),%eax
0828ef31 +0x16de:  mov    %eax,(%esp)
0828ef34 +0x16e1:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
0828ef39 +0x16e6:  movzbl (%eax),%edx
0828ef3c +0x16e9:  mov    0x8(%ebp),%eax
0828ef3f +0x16ec:  mov    %dl,0x4(%eax)
0828ef42 +0x16ef:  leave
0828ef43 +0x16f0:  ret
0828ef44 +0x16f1:  push   %ebp
0828ef45 +0x16f2:  mov    %esp,%ebp
0828ef47 +0x16f4:  sub    $0x18,%esp
0828ef4a +0x16f7:  mov    0x8(%ebp),%eax
0828ef4d +0x16fa:  mov    0xc(%ebp),%edx
0828ef50 +0x16fd:  mov    %edx,0x4(%esp)
0828ef54 +0x1701:  mov    %eax,(%esp)
0828ef57 +0x1704:  call   0828f322 <+0x1acf>
0828ef5c +0x1709:  mov    0x8(%ebp),%eax
0828ef5f +0x170c:  movl   $0x0,(%eax)
0828ef65 +0x1712:  mov    0x8(%ebp),%eax
0828ef68 +0x1715:  movl   $0x0,0x4(%eax)
0828ef6f +0x171c:  mov    0x8(%ebp),%eax
0828ef72 +0x171f:  movl   $0x0,0x8(%eax)
0828ef79 +0x1726:  leave
0828ef7a +0x1727:  ret
0828ef7b +0x1728:  nop
0828ef7c +0x1729:  push   %ebp
0828ef7d +0x172a:  mov    %esp,%ebp
0828ef7f +0x172c:  sub    $0x18,%esp
0828ef82 +0x172f:  cmpl   $0x0,0xc(%ebp)
0828ef86 +0x1733:  je     0828efa4 <+0x1751>
0828ef88 +0x1735:  mov    0x8(%ebp),%eax
0828ef8b +0x1738:  movl   $0x0,0x8(%esp)
0828ef93 +0x1740:  mov    0xc(%ebp),%edx
0828ef96 +0x1743:  mov    %edx,0x4(%esp)
0828ef9a +0x1747:  mov    %eax,(%esp)
0828ef9d +0x174a:  call   0828f33c <+0x1ae9>
0828efa2 +0x174f:  jmp    0828efa9 <+0x1756>
0828efa4 +0x1751:  mov    $0x0,%eax
0828efa9 +0x1756:  leave
0828efaa +0x1757:  ret
0828efab +0x1758:  nop
0828efac +0x1759:  push   %ebp
0828efad +0x175a:  mov    %esp,%ebp
0828efaf +0x175c:  mov    0xc(%ebp),%eax
0828efb2 +0x175f:  mov    (%eax),%edx
0828efb4 +0x1761:  mov    0x8(%ebp),%eax
0828efb7 +0x1764:  mov    %edx,(%eax)
0828efb9 +0x1766:  pop    %ebp
0828efba +0x1767:  ret
0828efbb +0x1768:  push   %ebp
0828efbc +0x1769:  mov    %esp,%ebp
0828efbe +0x176b:  sub    $0x18,%esp
0828efc1 +0x176e:  mov    0x10(%ebp),%eax
0828efc4 +0x1771:  mov    %eax,0x8(%esp)
0828efc8 +0x1775:  mov    0xc(%ebp),%eax
0828efcb +0x1778:  mov    %eax,0x4(%esp)
0828efcf +0x177c:  mov    0x8(%ebp),%eax
0828efd2 +0x177f:  mov    %eax,(%esp)
0828efd5 +0x1782:  call   0828f374 <+0x1b21>
0828efda +0x1787:  leave
0828efdb +0x1788:  ret
0828efdc +0x1789:  push   %ebp
0828efdd +0x178a:  mov    %esp,%ebp
0828efdf +0x178c:  push   %ebx
0828efe0 +0x178d:  sub    $0x14,%esp
0828efe3 +0x1790:  mov    0x8(%ebp),%ebx
0828efe6 +0x1793:  jmp    0828f034 <+0x17e1>
0828efe8 +0x1795:  mov    0x10(%ebp),%eax
0828efeb +0x1798:  mov    %eax,(%esp)
0828efee +0x179b:  call   0828f395 <+0x1b42>
0828eff3 +0x17a0:  mov    0xc(%ebp),%edx
0828eff6 +0x17a3:  mov    0x18(%ebp),%ecx
0828eff9 +0x17a6:  mov    %ecx,0x8(%esp)
0828effd +0x17aa:  mov    %eax,0x4(%esp)
0828f001 +0x17ae:  mov    %edx,(%esp)
0828f004 +0x17b1:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
0828f009 +0x17b6:  xor    $0x1,%eax
0828f00c +0x17b9:  test   %al,%al
0828f00e +0x17bb:  je     0828f026 <+0x17d3>
0828f010 +0x17bd:  mov    0x10(%ebp),%eax
0828f013 +0x17c0:  mov    %eax,0x14(%ebp)
0828f016 +0x17c3:  mov    0x10(%ebp),%eax
0828f019 +0x17c6:  mov    %eax,(%esp)
0828f01c +0x17c9:  call   0828f1e5 <+0x1992>
0828f021 +0x17ce:  mov    %eax,0x10(%ebp)
0828f024 +0x17d1:  jmp    0828f034 <+0x17e1>
0828f026 +0x17d3:  mov    0x10(%ebp),%eax
0828f029 +0x17d6:  mov    %eax,(%esp)
0828f02c +0x17d9:  call   0828f1da <+0x1987>
0828f031 +0x17de:  mov    %eax,0x10(%ebp)
0828f034 +0x17e1:  cmpl   $0x0,0x10(%ebp)
0828f038 +0x17e5:  setne  %al
0828f03b +0x17e8:  test   %al,%al
0828f03d +0x17ea:  jne    0828efe8 <+0x1795>
0828f03f +0x17ec:  mov    0x14(%ebp),%eax
0828f042 +0x17ef:  mov    %eax,0x4(%esp)
0828f046 +0x17f3:  mov    %ebx,(%esp)
0828f049 +0x17f6:  call   0828f08e <+0x183b>
0828f04e +0x17fb:  mov    %ebx,%eax
0828f050 +0x17fd:  add    $0x14,%esp
0828f053 +0x1800:  pop    %ebx
0828f054 +0x1801:  pop    %ebp
0828f055 +0x1802:  ret    $0x4
0828f058 +0x1805:  push   %ebp
0828f059 +0x1806:  mov    %esp,%ebp
0828f05b +0x1808:  sub    $0x28,%esp
0828f05e +0x180b:  mov    0x8(%ebp),%eax
0828f061 +0x180e:  mov    %eax,(%esp)
0828f064 +0x1811:  call   0828f3b7 <+0x1b64>
0828f069 +0x1816:  mov    %eax,0x4(%esp)
0828f06d +0x181a:  lea    -0x9(%ebp),%eax
0828f070 +0x181d:  mov    %eax,(%esp)
0828f073 +0x1820:  call   0828f3c2 <+0x1b6f>
0828f078 +0x1825:  leave
0828f079 +0x1826:  ret
0828f07a +0x1827:  push   %ebp
0828f07b +0x1828:  mov    %esp,%ebp
0828f07d +0x182a:  mov    0x8(%ebp),%eax
0828f080 +0x182d:  mov    (%eax),%edx
0828f082 +0x182f:  mov    0xc(%ebp),%eax
0828f085 +0x1832:  mov    (%eax),%eax
0828f087 +0x1834:  cmp    %eax,%edx
0828f089 +0x1836:  sete   %al
0828f08c +0x1839:  pop    %ebp
0828f08d +0x183a:  ret
0828f08e +0x183b:  push   %ebp
0828f08f +0x183c:  mov    %esp,%ebp
0828f091 +0x183e:  mov    0xc(%ebp),%edx
0828f094 +0x1841:  mov    0x8(%ebp),%eax
0828f097 +0x1844:  mov    %edx,(%eax)
0828f099 +0x1846:  pop    %ebp
0828f09a +0x1847:  ret
0828f09b +0x1848:  nop
0828f09c +0x1849:  push   %ebp
0828f09d +0x184a:  mov    %esp,%ebp
0828f09f +0x184c:  sub    $0x18,%esp
0828f0a2 +0x184f:  mov    0x8(%ebp),%eax
0828f0a5 +0x1852:  mov    0xc(%ebp),%edx
0828f0a8 +0x1855:  mov    %edx,0x4(%esp)
0828f0ac +0x1859:  mov    %eax,(%esp)
0828f0af +0x185c:  call   0828f3ca <+0x1b77>
0828f0b4 +0x1861:  mov    0x8(%ebp),%eax
0828f0b7 +0x1864:  movl   $0x0,(%eax)
0828f0bd +0x186a:  mov    0x8(%ebp),%eax
0828f0c0 +0x186d:  movl   $0x0,0x4(%eax)
0828f0c7 +0x1874:  mov    0x8(%ebp),%eax
0828f0ca +0x1877:  movl   $0x0,0x8(%eax)
0828f0d1 +0x187e:  leave
0828f0d2 +0x187f:  ret
0828f0d3 +0x1880:  nop
0828f0d4 +0x1881:  push   %ebp
0828f0d5 +0x1882:  mov    %esp,%ebp
0828f0d7 +0x1884:  sub    $0x18,%esp
0828f0da +0x1887:  mov    0x8(%ebp),%eax
0828f0dd +0x188a:  mov    %eax,(%esp)
0828f0e0 +0x188d:  call   0828f3e4 <+0x1b91>
0828f0e5 +0x1892:  leave
0828f0e6 +0x1893:  ret
0828f0e7 +0x1894:  nop
0828f0e8 +0x1895:  push   %ebp
0828f0e9 +0x1896:  mov    %esp,%ebp
0828f0eb +0x1898:  sub    $0x18,%esp
0828f0ee +0x189b:  cmpl   $0x0,0xc(%ebp)
0828f0f2 +0x189f:  je     0828f110 <+0x18bd>
0828f0f4 +0x18a1:  mov    0x8(%ebp),%eax
0828f0f7 +0x18a4:  movl   $0x0,0x8(%esp)
0828f0ff +0x18ac:  mov    0xc(%ebp),%edx
0828f102 +0x18af:  mov    %edx,0x4(%esp)
0828f106 +0x18b3:  mov    %eax,(%esp)
0828f109 +0x18b6:  call   0828f3ea <+0x1b97>
0828f10e +0x18bb:  jmp    0828f115 <+0x18c2>
0828f110 +0x18bd:  mov    $0x0,%eax
0828f115 +0x18c2:  leave
0828f116 +0x18c3:  ret
0828f117 +0x18c4:  nop
0828f118 +0x18c5:  push   %ebp
0828f119 +0x18c6:  mov    %esp,%ebp
0828f11b +0x18c8:  sub    $0x18,%esp
0828f11e +0x18cb:  cmpl   $0x0,0xc(%ebp)
0828f122 +0x18cf:  je     0828f13d <+0x18ea>
0828f124 +0x18d1:  mov    0x8(%ebp),%eax
0828f127 +0x18d4:  mov    0x10(%ebp),%edx
0828f12a +0x18d7:  mov    %edx,0x8(%esp)
0828f12e +0x18db:  mov    0xc(%ebp),%edx
0828f131 +0x18de:  mov    %edx,0x4(%esp)
0828f135 +0x18e2:  mov    %eax,(%esp)
0828f138 +0x18e5:  call   0828f42a <+0x1bd7>
0828f13d +0x18ea:  leave
0828f13e +0x18eb:  ret
0828f13f +0x18ec:  nop
0828f140 +0x18ed:  push   %ebp
0828f141 +0x18ee:  mov    %esp,%ebp
0828f143 +0x18f0:  mov    0xc(%ebp),%eax
0828f146 +0x18f3:  mov    (%eax),%edx
0828f148 +0x18f5:  mov    0x8(%ebp),%eax
0828f14b +0x18f8:  mov    %edx,(%eax)
0828f14d +0x18fa:  pop    %ebp
0828f14e +0x18fb:  ret
0828f14f +0x18fc:  push   %ebp
0828f150 +0x18fd:  mov    %esp,%ebp
0828f152 +0x18ff:  sub    $0x18,%esp
0828f155 +0x1902:  mov    0x10(%ebp),%eax
0828f158 +0x1905:  mov    %eax,0x8(%esp)
0828f15c +0x1909:  mov    0xc(%ebp),%eax
0828f15f +0x190c:  mov    %eax,0x4(%esp)
0828f163 +0x1910:  mov    0x8(%ebp),%eax
0828f166 +0x1913:  mov    %eax,(%esp)
0828f169 +0x1916:  call   0828f4e1 <+0x1c8e>
0828f16e +0x191b:  leave
0828f16f +0x191c:  ret
0828f170 +0x191d:  push   %ebp
0828f171 +0x191e:  mov    %esp,%ebp
0828f173 +0x1920:  sub    $0x18,%esp
0828f176 +0x1923:  mov    0xc(%ebp),%eax
0828f179 +0x1926:  mov    %eax,0x4(%esp)
0828f17d +0x192a:  mov    0x8(%ebp),%eax
0828f180 +0x192d:  mov    %eax,(%esp)
0828f183 +0x1930:  call   0828f5a6 <+0x1d53>
0828f188 +0x1935:  leave
0828f189 +0x1936:  ret
0828f18a +0x1937:  push   %ebp
0828f18b +0x1938:  mov    %esp,%ebp
0828f18d +0x193a:  mov    0x8(%ebp),%eax
0828f190 +0x193d:  add    $0xc,%eax
0828f193 +0x1940:  pop    %ebp
0828f194 +0x1941:  ret
0828f195 +0x1942:  nop
0828f196 +0x1943:  push   %ebp
0828f197 +0x1944:  mov    %esp,%ebp
0828f199 +0x1946:  mov    0x8(%ebp),%eax
0828f19c +0x1949:  add    $0x8,%eax
0828f19f +0x194c:  pop    %ebp
0828f1a0 +0x194d:  ret
0828f1a1 +0x194e:  nop
0828f1a2 +0x194f:  push   %ebp
0828f1a3 +0x1950:  mov    %esp,%ebp
0828f1a5 +0x1952:  mov    0x8(%ebp),%eax
0828f1a8 +0x1955:  add    $0x10,%eax
0828f1ab +0x1958:  pop    %ebp
0828f1ac +0x1959:  ret
0828f1ad +0x195a:  nop
0828f1ae +0x195b:  push   %ebp
0828f1af +0x195c:  mov    %esp,%ebp
0828f1b1 +0x195e:  mov    0xc(%ebp),%edx
0828f1b4 +0x1961:  mov    0x8(%ebp),%eax
0828f1b7 +0x1964:  mov    %edx,(%eax)
0828f1b9 +0x1966:  pop    %ebp
0828f1ba +0x1967:  ret
0828f1bb +0x1968:  nop
0828f1bc +0x1969:  push   %ebp
0828f1bd +0x196a:  mov    %esp,%ebp
0828f1bf +0x196c:  pop    %ebp
0828f1c0 +0x196d:  ret
0828f1c1 +0x196e:  nop
0828f1c2 +0x196f:  push   %ebp
0828f1c3 +0x1970:  mov    %esp,%ebp
0828f1c5 +0x1972:  sub    $0x18,%esp
0828f1c8 +0x1975:  mov    0xc(%ebp),%eax
0828f1cb +0x1978:  mov    %eax,(%esp)
0828f1ce +0x197b:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0828f1d3 +0x1980:  leave
0828f1d4 +0x1981:  ret
0828f1d5 +0x1982:  push   %ebp
0828f1d6 +0x1983:  mov    %esp,%ebp
0828f1d8 +0x1985:  pop    %ebp
0828f1d9 +0x1986:  ret
0828f1da +0x1987:  push   %ebp
0828f1db +0x1988:  mov    %esp,%ebp
0828f1dd +0x198a:  mov    0x8(%ebp),%eax
0828f1e0 +0x198d:  mov    0xc(%eax),%eax
0828f1e3 +0x1990:  pop    %ebp
0828f1e4 +0x1991:  ret
0828f1e5 +0x1992:  push   %ebp
0828f1e6 +0x1993:  mov    %esp,%ebp
0828f1e8 +0x1995:  mov    0x8(%ebp),%eax
0828f1eb +0x1998:  mov    0x8(%eax),%eax
0828f1ee +0x199b:  pop    %ebp
0828f1ef +0x199c:  ret
0828f1f0 +0x199d:  push   %ebp
0828f1f1 +0x199e:  mov    %esp,%ebp
0828f1f3 +0x19a0:  sub    $0x18,%esp
0828f1f6 +0x19a3:  mov    0x8(%ebp),%eax
0828f1f9 +0x19a6:  mov    %eax,(%esp)
0828f1fc +0x19a9:  call   0828f5cc <+0x1d79>
0828f201 +0x19ae:  leave
0828f202 +0x19af:  ret
0828f203 +0x19b0:  nop
0828f204 +0x19b1:  push   %ebp
0828f205 +0x19b2:  mov    %esp,%ebp
0828f207 +0x19b4:  mov    0x8(%ebp),%eax
0828f20a +0x19b7:  movl   $0x0,0x4(%eax)
0828f211 +0x19be:  mov    0x8(%ebp),%eax
0828f214 +0x19c1:  movl   $0x0,0x8(%eax)
0828f21b +0x19c8:  mov    0x8(%ebp),%eax
0828f21e +0x19cb:  lea    0x4(%eax),%edx
0828f221 +0x19ce:  mov    0x8(%ebp),%eax
0828f224 +0x19d1:  mov    %edx,0xc(%eax)
0828f227 +0x19d4:  mov    0x8(%ebp),%eax
0828f22a +0x19d7:  lea    0x4(%eax),%edx
0828f22d +0x19da:  mov    0x8(%ebp),%eax
0828f230 +0x19dd:  mov    %edx,0x10(%eax)
0828f233 +0x19e0:  pop    %ebp
0828f234 +0x19e1:  ret
0828f235 +0x19e2:  nop
0828f236 +0x19e3:  push   %ebp
0828f237 +0x19e4:  mov    %esp,%ebp
0828f239 +0x19e6:  mov    0x8(%ebp),%eax
0828f23c +0x19e9:  pop    %ebp
0828f23d +0x19ea:  ret
0828f23e +0x19eb:  push   %ebp
0828f23f +0x19ec:  mov    %esp,%ebp
0828f241 +0x19ee:  pop    %ebp
0828f242 +0x19ef:  ret
0828f243 +0x19f0:  nop
0828f244 +0x19f1:  push   %ebp
0828f245 +0x19f2:  mov    %esp,%ebp
0828f247 +0x19f4:  sub    $0x18,%esp
0828f24a +0x19f7:  mov    0xc(%ebp),%eax
0828f24d +0x19fa:  mov    %eax,(%esp)
0828f250 +0x19fd:  call   0828f23e <+0x19eb>
0828f255 +0x1a02:  leave
0828f256 +0x1a03:  ret
0828f257 +0x1a04:  nop
0828f258 +0x1a05:  push   %ebp
0828f259 +0x1a06:  mov    %esp,%ebp
0828f25b +0x1a08:  sub    $0x18,%esp
0828f25e +0x1a0b:  mov    0x8(%ebp),%eax
0828f261 +0x1a0e:  movl   $0x1,0x8(%esp)
0828f269 +0x1a16:  mov    0xc(%ebp),%edx
0828f26c +0x1a19:  mov    %edx,0x4(%esp)
0828f270 +0x1a1d:  mov    %eax,(%esp)
0828f273 +0x1a20:  call   0828f5d2 <+0x1d7f>
0828f278 +0x1a25:  leave
0828f279 +0x1a26:  ret
0828f27a +0x1a27:  push   %ebp
0828f27b +0x1a28:  mov    %esp,%ebp
0828f27d +0x1a2a:  mov    0x8(%ebp),%eax
0828f280 +0x1a2d:  add    $0x10,%eax
0828f283 +0x1a30:  pop    %ebp
0828f284 +0x1a31:  ret
0828f285 +0x1a32:  push   %ebp
0828f286 +0x1a33:  mov    %esp,%ebp
0828f288 +0x1a35:  mov    0x8(%ebp),%eax
0828f28b +0x1a38:  add    $0x10,%eax
0828f28e +0x1a3b:  pop    %ebp
0828f28f +0x1a3c:  ret
0828f290 +0x1a3d:  push   %ebp
0828f291 +0x1a3e:  mov    %esp,%ebp
0828f293 +0x1a40:  push   %esi
0828f294 +0x1a41:  push   %ebx
0828f295 +0x1a42:  sub    $0x20,%esp
0828f298 +0x1a45:  mov    0x8(%ebp),%eax
0828f29b +0x1a48:  mov    %eax,(%esp)
0828f29e +0x1a4b:  call   0828f5e6 <+0x1d93>
0828f2a3 +0x1a50:  mov    %eax,-0xc(%ebp)
0828f2a6 +0x1a53:  mov    0xc(%ebp),%eax
0828f2a9 +0x1a56:  mov    %eax,(%esp)
0828f2ac +0x1a59:  call   0828f609 <+0x1db6>
0828f2b1 +0x1a5e:  mov    %eax,%ebx
0828f2b3 +0x1a60:  mov    0x8(%ebp),%eax
0828f2b6 +0x1a63:  mov    %eax,(%esp)
0828f2b9 +0x1a66:  call   0828f236 <+0x19e3>
0828f2be +0x1a6b:  mov    %ebx,0x8(%esp)
0828f2c2 +0x1a6f:  mov    -0xc(%ebp),%edx
0828f2c5 +0x1a72:  mov    %edx,0x4(%esp)
0828f2c9 +0x1a76:  mov    %eax,(%esp)
0828f2cc +0x1a79:  call   0828f612 <+0x1dbf>
0828f2d1 +0x1a7e:  jmp    0828f307 <+0x1ab4>
0828f2d3 +0x1a80:  mov    %eax,(%esp)
0828f2d6 +0x1a83:  call   08725ce0 <__cxa_begin_catch>
0828f2db +0x1a88:  mov    -0xc(%ebp),%eax
0828f2de +0x1a8b:  mov    %eax,0x4(%esp)
0828f2e2 +0x1a8f:  mov    0x8(%ebp),%eax
0828f2e5 +0x1a92:  mov    %eax,(%esp)
0828f2e8 +0x1a95:  call   0828f258 <+0x1a05>
0828f2ed +0x1a9a:  call   08724be0 <__cxa_rethrow>
0828f2f2 +0x1a9f:  mov    %edx,%ebx
0828f2f4 +0x1aa1:  mov    %eax,%esi
0828f2f6 +0x1aa3:  call   08725c30 <__cxa_end_catch>
0828f2fb +0x1aa8:  mov    %esi,%eax
0828f2fd +0x1aaa:  mov    %ebx,%edx
0828f2ff +0x1aac:  mov    %eax,(%esp)
0828f302 +0x1aaf:  call   08ae3750 <_Unwind_Resume>
0828f307 +0x1ab4:  mov    -0xc(%ebp),%eax
0828f30a +0x1ab7:  add    $0x20,%esp
0828f30d +0x1aba:  pop    %ebx
0828f30e +0x1abb:  pop    %esi
0828f30f +0x1abc:  pop    %ebp
0828f310 +0x1abd:  ret
0828f311 +0x1abe:  push   %ebp
0828f312 +0x1abf:  mov    %esp,%ebp
0828f314 +0x1ac1:  mov    0x8(%ebp),%eax
0828f317 +0x1ac4:  pop    %ebp
0828f318 +0x1ac5:  ret
0828f319 +0x1ac6:  push   %ebp
0828f31a +0x1ac7:  mov    %esp,%ebp
0828f31c +0x1ac9:  mov    0x8(%ebp),%eax
0828f31f +0x1acc:  pop    %ebp
0828f320 +0x1acd:  ret
0828f321 +0x1ace:  nop
0828f322 +0x1acf:  push   %ebp
0828f323 +0x1ad0:  mov    %esp,%ebp
0828f325 +0x1ad2:  sub    $0x18,%esp
0828f328 +0x1ad5:  mov    0xc(%ebp),%edx
0828f32b +0x1ad8:  mov    0x8(%ebp),%eax
0828f32e +0x1adb:  mov    %edx,0x4(%esp)
0828f332 +0x1adf:  mov    %eax,(%esp)
0828f335 +0x1ae2:  call   0828f652 <+0x1dff>
0828f33a +0x1ae7:  leave
0828f33b +0x1ae8:  ret
0828f33c +0x1ae9:  push   %ebp
0828f33d +0x1aea:  mov    %esp,%ebp
0828f33f +0x1aec:  sub    $0x18,%esp
0828f342 +0x1aef:  mov    0x8(%ebp),%eax
0828f345 +0x1af2:  mov    %eax,(%esp)
0828f348 +0x1af5:  call   0828f658 <+0x1e05>
0828f34d +0x1afa:  cmp    0xc(%ebp),%eax
0828f350 +0x1afd:  setb   %al
0828f353 +0x1b00:  movzbl %al,%eax
0828f356 +0x1b03:  test   %eax,%eax
0828f358 +0x1b05:  setne  %al
0828f35b +0x1b08:  test   %al,%al
0828f35d +0x1b0a:  je     0828f364 <+0x1b11>
0828f35f +0x1b0c:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
0828f364 +0x1b11:  mov    0xc(%ebp),%eax
0828f367 +0x1b14:  shl    $0x2,%eax
0828f36a +0x1b17:  mov    %eax,(%esp)
0828f36d +0x1b1a:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0828f372 +0x1b1f:  leave
0828f373 +0x1b20:  ret
0828f374 +0x1b21:  push   %ebp
0828f375 +0x1b22:  mov    %esp,%ebp
0828f377 +0x1b24:  sub    $0x18,%esp
0828f37a +0x1b27:  mov    0x10(%ebp),%eax
0828f37d +0x1b2a:  mov    %eax,0x8(%esp)
0828f381 +0x1b2e:  mov    0xc(%ebp),%eax
0828f384 +0x1b31:  mov    %eax,0x4(%esp)
0828f388 +0x1b35:  mov    0x8(%ebp),%eax
0828f38b +0x1b38:  mov    %eax,(%esp)
0828f38e +0x1b3b:  call   0828f662 <+0x1e0f>
0828f393 +0x1b40:  leave
0828f394 +0x1b41:  ret
0828f395 +0x1b42:  push   %ebp
0828f396 +0x1b43:  mov    %esp,%ebp
0828f398 +0x1b45:  sub    $0x28,%esp
0828f39b +0x1b48:  mov    0x8(%ebp),%eax
0828f39e +0x1b4b:  mov    %eax,(%esp)
0828f3a1 +0x1b4e:  call   0828f6ad <+0x1e5a>
0828f3a6 +0x1b53:  mov    %eax,0x4(%esp)
0828f3aa +0x1b57:  lea    -0x9(%ebp),%eax
0828f3ad +0x1b5a:  mov    %eax,(%esp)
0828f3b0 +0x1b5d:  call   0828f3c2 <+0x1b6f>
0828f3b5 +0x1b62:  leave
0828f3b6 +0x1b63:  ret
0828f3b7 +0x1b64:  push   %ebp
0828f3b8 +0x1b65:  mov    %esp,%ebp
0828f3ba +0x1b67:  mov    0x8(%ebp),%eax
0828f3bd +0x1b6a:  add    $0x10,%eax
0828f3c0 +0x1b6d:  pop    %ebp
0828f3c1 +0x1b6e:  ret
0828f3c2 +0x1b6f:  push   %ebp
0828f3c3 +0x1b70:  mov    %esp,%ebp
0828f3c5 +0x1b72:  mov    0xc(%ebp),%eax
0828f3c8 +0x1b75:  pop    %ebp
0828f3c9 +0x1b76:  ret
0828f3ca +0x1b77:  push   %ebp
0828f3cb +0x1b78:  mov    %esp,%ebp
0828f3cd +0x1b7a:  sub    $0x18,%esp
0828f3d0 +0x1b7d:  mov    0xc(%ebp),%edx
0828f3d3 +0x1b80:  mov    0x8(%ebp),%eax
0828f3d6 +0x1b83:  mov    %edx,0x4(%esp)
0828f3da +0x1b87:  mov    %eax,(%esp)
0828f3dd +0x1b8a:  call   0828f6b8 <+0x1e65>
0828f3e2 +0x1b8f:  leave
0828f3e3 +0x1b90:  ret
0828f3e4 +0x1b91:  push   %ebp
0828f3e5 +0x1b92:  mov    %esp,%ebp
0828f3e7 +0x1b94:  pop    %ebp
0828f3e8 +0x1b95:  ret
0828f3e9 +0x1b96:  nop
0828f3ea +0x1b97:  push   %ebp
0828f3eb +0x1b98:  mov    %esp,%ebp
0828f3ed +0x1b9a:  sub    $0x18,%esp
0828f3f0 +0x1b9d:  mov    0x8(%ebp),%eax
0828f3f3 +0x1ba0:  mov    %eax,(%esp)
0828f3f6 +0x1ba3:  call   0828f6be <+0x1e6b>
0828f3fb +0x1ba8:  cmp    0xc(%ebp),%eax
0828f3fe +0x1bab:  setb   %al
0828f401 +0x1bae:  movzbl %al,%eax
0828f404 +0x1bb1:  test   %eax,%eax
0828f406 +0x1bb3:  setne  %al
0828f409 +0x1bb6:  test   %al,%al
0828f40b +0x1bb8:  je     0828f412 <+0x1bbf>
0828f40d +0x1bba:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
0828f412 +0x1bbf:  mov    0xc(%ebp),%edx
0828f415 +0x1bc2:  mov    %edx,%eax
0828f417 +0x1bc4:  shl    $0x2,%eax
0828f41a +0x1bc7:  add    %edx,%eax
0828f41c +0x1bc9:  shl    $0x3,%eax
0828f41f +0x1bcc:  mov    %eax,(%esp)
0828f422 +0x1bcf:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0828f427 +0x1bd4:  leave
0828f428 +0x1bd5:  ret
0828f429 +0x1bd6:  nop
0828f42a +0x1bd7:  push   %ebp
0828f42b +0x1bd8:  mov    %esp,%ebp
0828f42d +0x1bda:  sub    $0x18,%esp
0828f430 +0x1bdd:  mov    0xc(%ebp),%eax
0828f433 +0x1be0:  mov    %eax,(%esp)
0828f436 +0x1be3:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0828f43b +0x1be8:  leave
0828f43c +0x1be9:  ret
0828f43d +0x1bea:  nop
0828f43e +0x1beb:  push   %ebp
0828f43f +0x1bec:  mov    %esp,%ebp
0828f441 +0x1bee:  push   %esi
0828f442 +0x1bef:  push   %ebx
0828f443 +0x1bf0:  sub    $0x10,%esp
0828f446 +0x1bf3:  mov    0xc(%ebp),%eax
0828f449 +0x1bf6:  mov    (%eax),%edx
0828f44b +0x1bf8:  mov    0x8(%ebp),%eax
0828f44e +0x1bfb:  mov    %edx,(%eax)
0828f450 +0x1bfd:  mov    0xc(%ebp),%eax
0828f453 +0x1c00:  lea    0x4(%eax),%edx
0828f456 +0x1c03:  mov    0x8(%ebp),%eax
0828f459 +0x1c06:  add    $0x4,%eax
0828f45c +0x1c09:  mov    %edx,0x4(%esp)
0828f460 +0x1c0d:  mov    %eax,(%esp)
0828f463 +0x1c10:  call   080eaa36 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x66f>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x66f
0828f468 +0x1c15:  mov    0xc(%ebp),%eax
0828f46b +0x1c18:  mov    0x10(%eax),%edx
0828f46e +0x1c1b:  mov    0x8(%ebp),%eax
0828f471 +0x1c1e:  mov    %edx,0x10(%eax)
0828f474 +0x1c21:  mov    0xc(%ebp),%eax
0828f477 +0x1c24:  mov    0x14(%eax),%edx
0828f47a +0x1c27:  mov    0x8(%ebp),%eax
0828f47d +0x1c2a:  mov    %edx,0x14(%eax)
0828f480 +0x1c2d:  mov    0xc(%ebp),%eax
0828f483 +0x1c30:  lea    0x18(%eax),%edx
0828f486 +0x1c33:  mov    0x8(%ebp),%eax
0828f489 +0x1c36:  add    $0x18,%eax
0828f48c +0x1c39:  mov    %edx,0x4(%esp)
0828f490 +0x1c3d:  mov    %eax,(%esp)
0828f493 +0x1c40:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
0828f498 +0x1c45:  mov    0xc(%ebp),%eax
0828f49b +0x1c48:  mov    0x1c(%eax),%edx
0828f49e +0x1c4b:  mov    0x8(%ebp),%eax
0828f4a1 +0x1c4e:  mov    %edx,0x1c(%eax)
0828f4a4 +0x1c51:  mov    0xc(%ebp),%eax
0828f4a7 +0x1c54:  mov    0x20(%eax),%edx
0828f4aa +0x1c57:  mov    0x8(%ebp),%eax
0828f4ad +0x1c5a:  mov    %edx,0x20(%eax)
0828f4b0 +0x1c5d:  mov    0xc(%ebp),%eax
0828f4b3 +0x1c60:  mov    0x24(%eax),%edx
0828f4b6 +0x1c63:  mov    0x8(%ebp),%eax
0828f4b9 +0x1c66:  mov    %edx,0x24(%eax)
0828f4bc +0x1c69:  add    $0x10,%esp
0828f4bf +0x1c6c:  pop    %ebx
0828f4c0 +0x1c6d:  pop    %esi
0828f4c1 +0x1c6e:  pop    %ebp
0828f4c2 +0x1c6f:  ret
0828f4c3 +0x1c70:  mov    %edx,%ebx
0828f4c5 +0x1c72:  mov    %eax,%esi
0828f4c7 +0x1c74:  mov    0x8(%ebp),%eax
0828f4ca +0x1c77:  add    $0x4,%eax
0828f4cd +0x1c7a:  mov    %eax,(%esp)
0828f4d0 +0x1c7d:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0828f4d5 +0x1c82:  mov    %esi,%eax
0828f4d7 +0x1c84:  mov    %ebx,%edx
0828f4d9 +0x1c86:  mov    %eax,(%esp)
0828f4dc +0x1c89:  call   08ae3750 <_Unwind_Resume>
0828f4e1 +0x1c8e:  push   %ebp
0828f4e2 +0x1c8f:  mov    %esp,%ebp
0828f4e4 +0x1c91:  push   %edi
0828f4e5 +0x1c92:  push   %esi
0828f4e6 +0x1c93:  push   %ebx
0828f4e7 +0x1c94:  sub    $0x3c,%esp
0828f4ea +0x1c97:  mov    0x10(%ebp),%eax
0828f4ed +0x1c9a:  mov    %eax,-0x1c(%ebp)
0828f4f0 +0x1c9d:  jmp    0828f551 <+0x1cfe>
0828f4f2 +0x1c9f:  lea    0x8(%ebp),%eax
0828f4f5 +0x1ca2:  mov    %eax,(%esp)
0828f4f8 +0x1ca5:  call   0828f70a <+0x1eb7>
0828f4fd +0x1caa:  mov    %eax,%edi
0828f4ff +0x1cac:  mov    -0x1c(%ebp),%esi
0828f502 +0x1caf:  mov    %esi,0x4(%esp)
0828f506 +0x1cb3:  movl   $0x28,(%esp)
0828f50d +0x1cba:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
0828f512 +0x1cbf:  mov    %eax,%ebx
0828f514 +0x1cc1:  mov    %ebx,%eax
0828f516 +0x1cc3:  test   %eax,%eax
0828f518 +0x1cc5:  je     0828f542 <+0x1cef>
0828f51a +0x1cc7:  mov    %ebx,%eax
0828f51c +0x1cc9:  mov    %edi,0x4(%esp)
0828f520 +0x1ccd:  mov    %eax,(%esp)
0828f523 +0x1cd0:  call   0828f43e <+0x1beb>
0828f528 +0x1cd5:  jmp    0828f542 <+0x1cef>
0828f52a +0x1cd7:  mov    %edx,%edi
0828f52c +0x1cd9:  mov    %eax,-0x2c(%ebp)
0828f52f +0x1cdc:  mov    %esi,0x4(%esp)
0828f533 +0x1ce0:  mov    %ebx,(%esp)
0828f536 +0x1ce3:  call   0807fff6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x1c>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x1c
0828f53b +0x1ce8:  mov    -0x2c(%ebp),%eax
0828f53e +0x1ceb:  mov    %edi,%edx
0828f540 +0x1ced:  jmp    0828f572 <+0x1d1f>
0828f542 +0x1cef:  lea    0x8(%ebp),%eax
0828f545 +0x1cf2:  mov    %eax,(%esp)
0828f548 +0x1cf5:  call   0828f6f4 <+0x1ea1>
0828f54d +0x1cfa:  addl   $0x28,-0x1c(%ebp)
0828f551 +0x1cfe:  lea    0xc(%ebp),%eax
0828f554 +0x1d01:  mov    %eax,0x4(%esp)
0828f558 +0x1d05:  lea    0x8(%ebp),%eax
0828f55b +0x1d08:  mov    %eax,(%esp)
0828f55e +0x1d0b:  call   0828f6c8 <+0x1e75>
0828f563 +0x1d10:  test   %al,%al
0828f565 +0x1d12:  jne    0828f4f2 <+0x1c9f>
0828f567 +0x1d14:  mov    -0x1c(%ebp),%eax
0828f56a +0x1d17:  add    $0x3c,%esp
0828f56d +0x1d1a:  pop    %ebx
0828f56e +0x1d1b:  pop    %esi
0828f56f +0x1d1c:  pop    %edi
0828f570 +0x1d1d:  pop    %ebp
0828f571 +0x1d1e:  ret
0828f572 +0x1d1f:  mov    %eax,(%esp)
0828f575 +0x1d22:  call   08725ce0 <__cxa_begin_catch>
0828f57a +0x1d27:  mov    -0x1c(%ebp),%eax
0828f57d +0x1d2a:  mov    %eax,0x4(%esp)
0828f581 +0x1d2e:  mov    0x10(%ebp),%eax
0828f584 +0x1d31:  mov    %eax,(%esp)
0828f587 +0x1d34:  call   0828f170 <+0x191d>
0828f58c +0x1d39:  call   08724be0 <__cxa_rethrow>
0828f591 +0x1d3e:  mov    %edx,%ebx
0828f593 +0x1d40:  mov    %eax,%esi
0828f595 +0x1d42:  call   08725c30 <__cxa_end_catch>
0828f59a +0x1d47:  mov    %esi,%eax
0828f59c +0x1d49:  mov    %ebx,%edx
0828f59e +0x1d4b:  mov    %eax,(%esp)
0828f5a1 +0x1d4e:  call   08ae3750 <_Unwind_Resume>
0828f5a6 +0x1d53:  push   %ebp
0828f5a7 +0x1d54:  mov    %esp,%ebp
0828f5a9 +0x1d56:  sub    $0x18,%esp
0828f5ac +0x1d59:  jmp    0828f5bd <+0x1d6a>
0828f5ae +0x1d5b:  mov    0x8(%ebp),%eax
0828f5b1 +0x1d5e:  mov    %eax,(%esp)
0828f5b4 +0x1d61:  call   0828f714 <+0x1ec1>
0828f5b9 +0x1d66:  addl   $0x28,0x8(%ebp)
0828f5bd +0x1d6a:  mov    0x8(%ebp),%eax
0828f5c0 +0x1d6d:  cmp    0xc(%ebp),%eax
0828f5c3 +0x1d70:  setne  %al
0828f5c6 +0x1d73:  test   %al,%al
0828f5c8 +0x1d75:  jne    0828f5ae <+0x1d5b>
0828f5ca +0x1d77:  leave
0828f5cb +0x1d78:  ret
0828f5cc +0x1d79:  push   %ebp
0828f5cd +0x1d7a:  mov    %esp,%ebp
0828f5cf +0x1d7c:  pop    %ebp
0828f5d0 +0x1d7d:  ret
0828f5d1 +0x1d7e:  nop
0828f5d2 +0x1d7f:  push   %ebp
0828f5d3 +0x1d80:  mov    %esp,%ebp
0828f5d5 +0x1d82:  sub    $0x18,%esp
0828f5d8 +0x1d85:  mov    0xc(%ebp),%eax
0828f5db +0x1d88:  mov    %eax,(%esp)
0828f5de +0x1d8b:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0828f5e3 +0x1d90:  leave
0828f5e4 +0x1d91:  ret
0828f5e5 +0x1d92:  nop
0828f5e6 +0x1d93:  push   %ebp
0828f5e7 +0x1d94:  mov    %esp,%ebp
0828f5e9 +0x1d96:  sub    $0x18,%esp
0828f5ec +0x1d99:  mov    0x8(%ebp),%eax
0828f5ef +0x1d9c:  movl   $0x0,0x8(%esp)
0828f5f7 +0x1da4:  movl   $0x1,0x4(%esp)
0828f5ff +0x1dac:  mov    %eax,(%esp)
0828f602 +0x1daf:  call   0828f728 <+0x1ed5>
0828f607 +0x1db4:  leave
0828f608 +0x1db5:  ret
0828f609 +0x1db6:  push   %ebp
0828f60a +0x1db7:  mov    %esp,%ebp
0828f60c +0x1db9:  mov    0x8(%ebp),%eax
0828f60f +0x1dbc:  pop    %ebp
0828f610 +0x1dbd:  ret
0828f611 +0x1dbe:  nop
0828f612 +0x1dbf:  push   %ebp
0828f613 +0x1dc0:  mov    %esp,%ebp
0828f615 +0x1dc2:  push   %ebx
0828f616 +0x1dc3:  sub    $0x14,%esp
0828f619 +0x1dc6:  mov    0x10(%ebp),%eax
0828f61c +0x1dc9:  mov    %eax,(%esp)
0828f61f +0x1dcc:  call   0828f609 <+0x1db6>
0828f624 +0x1dd1:  mov    %eax,%ebx
0828f626 +0x1dd3:  mov    0xc(%ebp),%eax
0828f629 +0x1dd6:  mov    %eax,0x4(%esp)
0828f62d +0x1dda:  movl   $0x20,(%esp)
0828f634 +0x1de1:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
0828f639 +0x1de6:  mov    %eax,%edx
0828f63b +0x1de8:  test   %edx,%edx
0828f63d +0x1dea:  je     0828f64b <+0x1df8>
0828f63f +0x1dec:  mov    %ebx,0x4(%esp)
0828f643 +0x1df0:  mov    %eax,(%esp)
0828f646 +0x1df3:  call   0828f760 <+0x1f0d>
0828f64b +0x1df8:  add    $0x14,%esp
0828f64e +0x1dfb:  pop    %ebx
0828f64f +0x1dfc:  pop    %ebp
0828f650 +0x1dfd:  ret
0828f651 +0x1dfe:  nop
0828f652 +0x1dff:  push   %ebp
0828f653 +0x1e00:  mov    %esp,%ebp
0828f655 +0x1e02:  pop    %ebp
0828f656 +0x1e03:  ret
0828f657 +0x1e04:  nop
0828f658 +0x1e05:  push   %ebp
0828f659 +0x1e06:  mov    %esp,%ebp
0828f65b +0x1e08:  mov    $0x3fffffff,%eax
0828f660 +0x1e0d:  pop    %ebp
0828f661 +0x1e0e:  ret
0828f662 +0x1e0f:  push   %ebp
0828f663 +0x1e10:  mov    %esp,%ebp
0828f665 +0x1e12:  sub    $0x28,%esp
0828f668 +0x1e15:  lea    -0x10(%ebp),%eax
0828f66b +0x1e18:  mov    0xc(%ebp),%edx
0828f66e +0x1e1b:  mov    %edx,0x4(%esp)
0828f672 +0x1e1f:  mov    %eax,(%esp)
0828f675 +0x1e22:  call   0828f7b4 <+0x1f61>
0828f67a +0x1e27:  sub    $0x4,%esp
0828f67d +0x1e2a:  lea    -0xc(%ebp),%eax
0828f680 +0x1e2d:  mov    0x8(%ebp),%edx
0828f683 +0x1e30:  mov    %edx,0x4(%esp)
0828f687 +0x1e34:  mov    %eax,(%esp)
0828f68a +0x1e37:  call   0828f7b4 <+0x1f61>
0828f68f +0x1e3c:  sub    $0x4,%esp
0828f692 +0x1e3f:  mov    0x10(%ebp),%eax
0828f695 +0x1e42:  mov    %eax,0x8(%esp)
0828f699 +0x1e46:  mov    -0x10(%ebp),%eax
0828f69c +0x1e49:  mov    %eax,0x4(%esp)
0828f6a0 +0x1e4d:  mov    -0xc(%ebp),%eax
0828f6a3 +0x1e50:  mov    %eax,(%esp)
0828f6a6 +0x1e53:  call   0828f7c3 <+0x1f70>
0828f6ab +0x1e58:  leave
0828f6ac +0x1e59:  ret
0828f6ad +0x1e5a:  push   %ebp
0828f6ae +0x1e5b:  mov    %esp,%ebp
0828f6b0 +0x1e5d:  mov    0x8(%ebp),%eax
0828f6b3 +0x1e60:  add    $0x10,%eax
0828f6b6 +0x1e63:  pop    %ebp
0828f6b7 +0x1e64:  ret
0828f6b8 +0x1e65:  push   %ebp
0828f6b9 +0x1e66:  mov    %esp,%ebp
0828f6bb +0x1e68:  pop    %ebp
0828f6bc +0x1e69:  ret
0828f6bd +0x1e6a:  nop
0828f6be +0x1e6b:  push   %ebp
0828f6bf +0x1e6c:  mov    %esp,%ebp
0828f6c1 +0x1e6e:  mov    $0x6666666,%eax
0828f6c6 +0x1e73:  pop    %ebp
0828f6c7 +0x1e74:  ret
0828f6c8 +0x1e75:  push   %ebp
0828f6c9 +0x1e76:  mov    %esp,%ebp
0828f6cb +0x1e78:  push   %ebx
0828f6cc +0x1e79:  sub    $0x14,%esp
0828f6cf +0x1e7c:  mov    0x8(%ebp),%eax
0828f6d2 +0x1e7f:  mov    %eax,(%esp)
0828f6d5 +0x1e82:  call   0828f808 <+0x1fb5>
0828f6da +0x1e87:  mov    (%eax),%ebx
0828f6dc +0x1e89:  mov    0xc(%ebp),%eax
0828f6df +0x1e8c:  mov    %eax,(%esp)
0828f6e2 +0x1e8f:  call   0828f808 <+0x1fb5>
0828f6e7 +0x1e94:  mov    (%eax),%eax
0828f6e9 +0x1e96:  cmp    %eax,%ebx
0828f6eb +0x1e98:  setne  %al
0828f6ee +0x1e9b:  add    $0x14,%esp
0828f6f1 +0x1e9e:  pop    %ebx
0828f6f2 +0x1e9f:  pop    %ebp
0828f6f3 +0x1ea0:  ret
0828f6f4 +0x1ea1:  push   %ebp
0828f6f5 +0x1ea2:  mov    %esp,%ebp
0828f6f7 +0x1ea4:  mov    0x8(%ebp),%eax
0828f6fa +0x1ea7:  mov    (%eax),%eax
0828f6fc +0x1ea9:  lea    0x28(%eax),%edx
0828f6ff +0x1eac:  mov    0x8(%ebp),%eax
0828f702 +0x1eaf:  mov    %edx,(%eax)
0828f704 +0x1eb1:  mov    0x8(%ebp),%eax
0828f707 +0x1eb4:  pop    %ebp
0828f708 +0x1eb5:  ret
0828f709 +0x1eb6:  nop
0828f70a +0x1eb7:  push   %ebp
0828f70b +0x1eb8:  mov    %esp,%ebp
0828f70d +0x1eba:  mov    0x8(%ebp),%eax
0828f710 +0x1ebd:  mov    (%eax),%eax
0828f712 +0x1ebf:  pop    %ebp
0828f713 +0x1ec0:  ret
0828f714 +0x1ec1:  push   %ebp
0828f715 +0x1ec2:  mov    %esp,%ebp
0828f717 +0x1ec4:  sub    $0x18,%esp
0828f71a +0x1ec7:  mov    0x8(%ebp),%eax
0828f71d +0x1eca:  mov    %eax,(%esp)
0828f720 +0x1ecd:  call   0828d926 <+0xd3>
0828f725 +0x1ed2:  leave
0828f726 +0x1ed3:  ret
0828f727 +0x1ed4:  nop
0828f728 +0x1ed5:  push   %ebp
0828f729 +0x1ed6:  mov    %esp,%ebp
0828f72b +0x1ed8:  sub    $0x18,%esp
0828f72e +0x1edb:  mov    0x8(%ebp),%eax
0828f731 +0x1ede:  mov    %eax,(%esp)
0828f734 +0x1ee1:  call   0828f810 <+0x1fbd>
0828f739 +0x1ee6:  cmp    0xc(%ebp),%eax
0828f73c +0x1ee9:  setb   %al
0828f73f +0x1eec:  movzbl %al,%eax
0828f742 +0x1eef:  test   %eax,%eax
0828f744 +0x1ef1:  setne  %al
0828f747 +0x1ef4:  test   %al,%al
0828f749 +0x1ef6:  je     0828f750 <+0x1efd>
0828f74b +0x1ef8:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
0828f750 +0x1efd:  mov    0xc(%ebp),%eax
0828f753 +0x1f00:  shl    $0x5,%eax
0828f756 +0x1f03:  mov    %eax,(%esp)
0828f759 +0x1f06:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0828f75e +0x1f0b:  leave
0828f75f +0x1f0c:  ret
0828f760 +0x1f0d:  push   %ebp
0828f761 +0x1f0e:  mov    %esp,%ebp
0828f763 +0x1f10:  sub    $0x18,%esp
0828f766 +0x1f13:  mov    0x8(%ebp),%eax
0828f769 +0x1f16:  movl   $0x0,(%eax)
0828f76f +0x1f1c:  mov    0x8(%ebp),%eax
0828f772 +0x1f1f:  movl   $0x0,0x4(%eax)
0828f779 +0x1f26:  mov    0x8(%ebp),%eax
0828f77c +0x1f29:  movl   $0x0,0x8(%eax)
0828f783 +0x1f30:  mov    0x8(%ebp),%eax
0828f786 +0x1f33:  movl   $0x0,0xc(%eax)
0828f78d +0x1f3a:  mov    0xc(%ebp),%eax
0828f790 +0x1f3d:  mov    %eax,(%esp)
0828f793 +0x1f40:  call   0828f609 <+0x1db6>
0828f798 +0x1f45:  mov    0x8(%ebp),%edx
0828f79b +0x1f48:  mov    (%eax),%ecx
0828f79d +0x1f4a:  mov    %ecx,0x10(%edx)
0828f7a0 +0x1f4d:  mov    0x4(%eax),%ecx
0828f7a3 +0x1f50:  mov    %ecx,0x14(%edx)
0828f7a6 +0x1f53:  mov    0x8(%eax),%ecx
0828f7a9 +0x1f56:  mov    %ecx,0x18(%edx)
0828f7ac +0x1f59:  mov    0xc(%eax),%eax
0828f7af +0x1f5c:  mov    %eax,0x1c(%edx)
0828f7b2 +0x1f5f:  leave
0828f7b3 +0x1f60:  ret
0828f7b4 +0x1f61:  push   %ebp
0828f7b5 +0x1f62:  mov    %esp,%ebp
0828f7b7 +0x1f64:  mov    0x8(%ebp),%eax
0828f7ba +0x1f67:  mov    0xc(%ebp),%edx
0828f7bd +0x1f6a:  mov    %edx,(%eax)
0828f7bf +0x1f6c:  pop    %ebp
0828f7c0 +0x1f6d:  ret    $0x4
0828f7c3 +0x1f70:  push   %ebp
0828f7c4 +0x1f71:  mov    %esp,%ebp
0828f7c6 +0x1f73:  push   %esi
0828f7c7 +0x1f74:  push   %ebx
0828f7c8 +0x1f75:  sub    $0x10,%esp
0828f7cb +0x1f78:  mov    0x10(%ebp),%eax
0828f7ce +0x1f7b:  mov    %eax,(%esp)
0828f7d1 +0x1f7e:  call   0828f82f <+0x1fdc>
0828f7d6 +0x1f83:  mov    %eax,%esi
0828f7d8 +0x1f85:  mov    0xc(%ebp),%eax
0828f7db +0x1f88:  mov    %eax,(%esp)
0828f7de +0x1f8b:  call   0828f81a <+0x1fc7>
0828f7e3 +0x1f90:  mov    %eax,%ebx
0828f7e5 +0x1f92:  mov    0x8(%ebp),%eax
0828f7e8 +0x1f95:  mov    %eax,(%esp)
0828f7eb +0x1f98:  call   0828f81a <+0x1fc7>
0828f7f0 +0x1f9d:  mov    %esi,0x8(%esp)
0828f7f4 +0x1fa1:  mov    %ebx,0x4(%esp)
0828f7f8 +0x1fa5:  mov    %eax,(%esp)
0828f7fb +0x1fa8:  call   0828f837 <+0x1fe4>
0828f800 +0x1fad:  add    $0x10,%esp
0828f803 +0x1fb0:  pop    %ebx
0828f804 +0x1fb1:  pop    %esi
0828f805 +0x1fb2:  pop    %ebp
0828f806 +0x1fb3:  ret
0828f807 +0x1fb4:  nop
0828f808 +0x1fb5:  push   %ebp
0828f809 +0x1fb6:  mov    %esp,%ebp
0828f80b +0x1fb8:  mov    0x8(%ebp),%eax
0828f80e +0x1fbb:  pop    %ebp
0828f80f +0x1fbc:  ret
0828f810 +0x1fbd:  push   %ebp
0828f811 +0x1fbe:  mov    %esp,%ebp
0828f813 +0x1fc0:  mov    $0x7ffffff,%eax
0828f818 +0x1fc5:  pop    %ebp
0828f819 +0x1fc6:  ret
0828f81a +0x1fc7:  push   %ebp
0828f81b +0x1fc8:  mov    %esp,%ebp
0828f81d +0x1fca:  sub    $0x18,%esp
0828f820 +0x1fcd:  lea    0x8(%ebp),%eax
0828f823 +0x1fd0:  mov    %eax,(%esp)
0828f826 +0x1fd3:  call   0828f85c <+0x2009>
0828f82b +0x1fd8:  mov    (%eax),%eax
0828f82d +0x1fda:  leave
0828f82e +0x1fdb:  ret
0828f82f +0x1fdc:  push   %ebp
0828f830 +0x1fdd:  mov    %esp,%ebp
0828f832 +0x1fdf:  mov    0x8(%ebp),%eax
0828f835 +0x1fe2:  pop    %ebp
0828f836 +0x1fe3:  ret
0828f837 +0x1fe4:  push   %ebp
0828f838 +0x1fe5:  mov    %esp,%ebp
0828f83a +0x1fe7:  sub    $0x28,%esp
0828f83d +0x1fea:  movb   $0x1,-0x9(%ebp)
0828f841 +0x1fee:  mov    0x10(%ebp),%eax
0828f844 +0x1ff1:  mov    %eax,0x8(%esp)
0828f848 +0x1ff5:  mov    0xc(%ebp),%eax
0828f84b +0x1ff8:  mov    %eax,0x4(%esp)
0828f84f +0x1ffc:  mov    0x8(%ebp),%eax
0828f852 +0x1fff:  mov    %eax,(%esp)
0828f855 +0x2002:  call   0828f864 <+0x2011>
0828f85a +0x2007:  leave
0828f85b +0x2008:  ret
0828f85c +0x2009:  push   %ebp
0828f85d +0x200a:  mov    %esp,%ebp
0828f85f +0x200c:  mov    0x8(%ebp),%eax
0828f862 +0x200f:  pop    %ebp
0828f863 +0x2010:  ret
0828f864 +0x2011:  push   %ebp
0828f865 +0x2012:  mov    %esp,%ebp
0828f867 +0x2014:  sub    $0x18,%esp
0828f86a +0x2017:  mov    0xc(%ebp),%edx
0828f86d +0x201a:  mov    0x8(%ebp),%eax
0828f870 +0x201d:  mov    %edx,%ecx
0828f872 +0x201f:  sub    %eax,%ecx
0828f874 +0x2021:  mov    %ecx,%eax
0828f876 +0x2023:  sar    $0x2,%eax
0828f879 +0x2026:  shl    $0x2,%eax
0828f87c +0x2029:  mov    %eax,0x8(%esp)
0828f880 +0x202d:  mov    0x8(%ebp),%eax
0828f883 +0x2030:  mov    %eax,0x4(%esp)
0828f887 +0x2034:  mov    0x10(%ebp),%eax
0828f88a +0x2037:  mov    %eax,(%esp)
0828f88d +0x203a:  call   0807d880 <_init+0x178>
0828f892 +0x203f:  mov    0xc(%ebp),%edx
0828f895 +0x2042:  mov    0x8(%ebp),%eax
0828f898 +0x2045:  mov    %edx,%ecx
0828f89a +0x2047:  sub    %eax,%ecx
0828f89c +0x2049:  mov    %ecx,%eax
0828f89e +0x204b:  sar    $0x2,%eax
0828f8a1 +0x204e:  shl    $0x2,%eax
0828f8a4 +0x2051:  add    0x10(%ebp),%eax
0828f8a7 +0x2054:  leave
0828f8a8 +0x2055:  ret
0828f8a9 +0x2056:  nop
0828f8aa +0x2057:  push   %ebp
0828f8ab +0x2058:  mov    %esp,%ebp
0828f8ad +0x205a:  push   %esi
0828f8ae +0x205b:  push   %ebx
0828f8af +0x205c:  sub    $0x10,%esp
0828f8b2 +0x205f:  mov    0x8(%ebp),%eax
0828f8b5 +0x2062:  movl   $&_ZTV12CAchievement+0x8,(%eax)
0828f8bb +0x2068:  mov    0x8(%ebp),%eax
0828f8be +0x206b:  add    $0xc,%eax
0828f8c1 +0x206e:  mov    %eax,(%esp)
0828f8c4 +0x2071:  call   0828daae <+0x25b>
0828f8c9 +0x2076:  jmp    0828f8e6 <+0x2093>
0828f8cb +0x2078:  mov    %edx,%ebx
0828f8cd +0x207a:  mov    %eax,%esi
0828f8cf +0x207c:  mov    0x8(%ebp),%eax
0828f8d2 +0x207f:  mov    %eax,(%esp)
0828f8d5 +0x2082:  call   080c8be2 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x3a>  ; global constructors keyed to BestClearTime::BestClearTime()+0x3a
0828f8da +0x2087:  mov    %esi,%eax
0828f8dc +0x2089:  mov    %ebx,%edx
0828f8de +0x208b:  mov    %eax,(%esp)
0828f8e1 +0x208e:  call   08ae3750 <_Unwind_Resume>
0828f8e6 +0x2093:  mov    0x8(%ebp),%eax
0828f8e9 +0x2096:  mov    %eax,(%esp)
0828f8ec +0x2099:  call   080c8be2 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x3a>  ; global constructors keyed to BestClearTime::BestClearTime()+0x3a
0828f8f1 +0x209e:  mov    $0x0,%eax
0828f8f6 +0x20a3:  test   %al,%al
0828f8f8 +0x20a5:  je     0828f905 <+0x20b2>
0828f8fa +0x20a7:  mov    0x8(%ebp),%eax
0828f8fd +0x20aa:  mov    %eax,(%esp)
0828f900 +0x20ad:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0828f905 +0x20b2:  add    $0x10,%esp
0828f908 +0x20b5:  pop    %ebx
0828f909 +0x20b6:  pop    %esi
0828f90a +0x20b7:  pop    %ebp
0828f90b +0x20b8:  ret
0828f90c +0x20b9:  push   %ebp
0828f90d +0x20ba:  mov    %esp,%ebp
0828f90f +0x20bc:  sub    $0x18,%esp
0828f912 +0x20bf:  mov    0x8(%ebp),%eax
0828f915 +0x20c2:  mov    %eax,(%esp)
0828f918 +0x20c5:  call   0828f8aa <+0x2057>
0828f91d +0x20ca:  mov    0x8(%ebp),%eax
0828f920 +0x20cd:  mov    %eax,(%esp)
0828f923 +0x20d0:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0828f928 +0x20d5:  leave
0828f929 +0x20d6:  ret
0828f92a +0x20d7:  nop
0828f92b +0x20d8:  nop
```

## 反编译 C

```c
// <global>::global @ 0x828d853

/* CAchievement::CAchievement() */

void CAchievement::_GLOBAL__I_CAchievement(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
