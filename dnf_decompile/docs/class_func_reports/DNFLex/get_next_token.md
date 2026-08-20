# get_next_token

`_ZN6DNFLex14get_next_tokenEv`

`DNFLex::get_next_token()`

| 类 | 地址 |
|---|---|
| `DNFLex` | `0x08acdaa0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08acdaa0  _ZN6DNFLex14get_next_tokenEv
#           DNFLex::get_next_token()
# range [0x08acdaa0, 0x08ace28f]
08acdaa0 +0x000:  push   %ebp
08acdaa1 +0x001:  mov    %esp,%ebp
08acdaa3 +0x003:  sub    $0x48,%esp
08acdaa6 +0x006:  mov    %ebx,-0xc(%ebp)
08acdaa9 +0x009:  mov    0x8(%ebp),%ebx
08acdaac +0x00c:  mov    %esi,-0x8(%ebp)
08acdaaf +0x00f:  xor    %esi,%esi
08acdab1 +0x011:  mov    %edi,-0x4(%ebp)
08acdab4 +0x014:  mov    0x84(%ebx),%eax
08acdaba +0x01a:  cmp    0x80(%ebx),%eax
08acdac0 +0x020:  je     08acdade <+0x3e>
08acdac2 +0x022:  mov    (%ebx),%eax
08acdac4 +0x024:  mov    %ebx,(%esp)
08acdac7 +0x027:  call   *0x18(%eax)
08acdaca +0x02a:  cmpb   $0x0,0x4091(%ebx)
08acdad1 +0x031:  mov    %eax,%esi
08acdad3 +0x033:  je     08acdade <+0x3e>
08acdad5 +0x035:  cmp    $0xb,%esi
08acdad8 +0x038:  je     08acdb20 <+0x80>
08acdada +0x03a:  test   %eax,%eax
08acdadc +0x03c:  je     08acdaf0 <+0x50>
08acdade +0x03e:  mov    %esi,%eax
08acdae0 +0x040:  mov    -0xc(%ebp),%ebx
08acdae3 +0x043:  mov    -0x8(%ebp),%esi
08acdae6 +0x046:  mov    -0x4(%ebp),%edi
08acdae9 +0x049:  mov    %ebp,%esp
08acdaeb +0x04b:  pop    %ebp
08acdaec +0x04c:  ret
08acdaed +0x04d:  lea    0x0(%esi),%esi
08acdaf0 +0x050:  movl   $0x0,0x4(%esp)
08acdaf8 +0x058:  mov    %ebx,(%esp)
08acdafb +0x05b:  call   08acd490 <_ZN6DNFLex14PopInputStreamEb>  ; DNFLex::PopInputStream(bool)
08acdb00 +0x060:  test   %al,%al
08acdb02 +0x062:  je     08acdade <+0x3e>
08acdb04 +0x064:  mov    (%ebx),%eax
08acdb06 +0x066:  mov    %ebx,0x8(%ebp)
08acdb09 +0x069:  mov    -0x8(%ebp),%esi
08acdb0c +0x06c:  mov    -0xc(%ebp),%ebx
08acdb0f +0x06f:  mov    -0x4(%ebp),%edi
08acdb12 +0x072:  mov    0x18(%eax),%eax
08acdb15 +0x075:  mov    %ebp,%esp
08acdb17 +0x077:  pop    %ebp
08acdb18 +0x078:  jmp    *%eax
08acdb1a +0x07a:  lea    0x0(%esi),%esi
08acdb20 +0x080:  mov    0x84(%ebx),%eax
08acdb26 +0x086:  cmp    0x80(%ebx),%eax
08acdb2c +0x08c:  lea    -0x18(%eax),%esi
08acdb2f +0x08f:  sete   %al
08acdb32 +0x092:  movzbl %al,%eax
08acdb35 +0x095:  sub    $0x1,%eax
08acdb38 +0x098:  and    %eax,%esi
08acdb3a +0x09a:  mov    (%ebx),%eax
08acdb3c +0x09c:  mov    %ebx,(%esp)
08acdb3f +0x09f:  call   *0x18(%eax)
08acdb42 +0x0a2:  cmp    $0x7,%eax
08acdb45 +0x0a5:  je     08acdbb0 <+0x110>
08acdb47 +0x0a7:  mov    0xc(%ebx),%edx
08acdb4a +0x0aa:  lea    0x4(%esi),%eax
08acdb4d +0x0ad:  mov    %eax,(%esp)
08acdb50 +0x0b0:  mov    %edx,-0x1c(%ebp)
08acdb53 +0x0b3:  call   08adedd3 <_Z6toMbcsRKSs>  ; toMbcs(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
08acdb58 +0x0b8:  mov    %esi,(%esp)
08acdb5b +0x0bb:  lea    0x8c(%ebx),%esi
08acdb61 +0x0c1:  mov    %eax,%edi
08acdb63 +0x0c3:  call   08adedd3 <_Z6toMbcsRKSs>  ; toMbcs(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
08acdb68 +0x0c8:  mov    -0x1c(%ebp),%edx
08acdb6b +0x0cb:  mov    %edi,0x10(%esp)
08acdb6f +0x0cf:  movl   $&_ZZN6DNFLex14get_next_tokenEvE12__FUNCTION__,0x8(%esp)
08acdb77 +0x0d7:  movl   $"%s - %s/%s, line %d, invalid inclusion.",0x4(%esp)
08acdb7f +0x0df:  mov    %edx,0x14(%esp)
08acdb83 +0x0e3:  mov    %eax,0xc(%esp)
08acdb87 +0x0e7:  mov    %esi,(%esp)
08acdb8a +0x0ea:  call   0807e440 <_init+0xd38>
08acdb8f +0x0ef:  mov    (%ebx),%eax
08acdb91 +0x0f1:  mov    %esi,0x4(%esp)
08acdb95 +0x0f5:  mov    $0x1,%esi
08acdb9a +0x0fa:  mov    %ebx,(%esp)
08acdb9d +0x0fd:  call   *0x2c(%eax)
08acdba0 +0x100:  mov    %esi,%eax
08acdba2 +0x102:  mov    -0xc(%ebp),%ebx
08acdba5 +0x105:  mov    -0x8(%ebp),%esi
08acdba8 +0x108:  mov    -0x4(%ebp),%edi
08acdbab +0x10b:  mov    %ebp,%esp
08acdbad +0x10d:  pop    %ebp
08acdbae +0x10e:  ret
08acdbaf +0x10f:  nop
08acdbb0 +0x110:  lea    0x208c(%ebx),%eax
08acdbb6 +0x116:  mov    %eax,(%esp)
08acdbb9 +0x119:  call   08adeb75 <_Z9toTStringPKc>  ; toTString(char const*)
08acdbbe +0x11e:  movl   $0x0,0xc(%esp)
08acdbc6 +0x126:  movl   $&data#2fb52a47(.rodata),0x4(%esp)
08acdbce +0x12e:  mov    %ebx,(%esp)
08acdbd1 +0x131:  mov    %eax,0x8(%esp)
08acdbd5 +0x135:  call   08acd7d0 <_ZN6DNFLex15PushInputStreamEPKcS1_PNS_13stream_data_tE>  ; DNFLex::PushInputStream(char const*, char const*, DNFLex::stream_data_t*)
08acdbda +0x13a:  test   %al,%al
08acdbdc +0x13c:  jne    08acdb04 <+0x64>
08acdbe2 +0x142:  mov    0xc(%ebx),%edx
08acdbe5 +0x145:  lea    0x4(%esi),%eax
08acdbe8 +0x148:  mov    %eax,(%esp)
08acdbeb +0x14b:  mov    %edx,-0x1c(%ebp)
08acdbee +0x14e:  call   08adedd3 <_Z6toMbcsRKSs>  ; toMbcs(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
08acdbf3 +0x153:  mov    %esi,(%esp)
08acdbf6 +0x156:  lea    0x8c(%ebx),%esi
08acdbfc +0x15c:  mov    %eax,%edi
08acdbfe +0x15e:  call   08adedd3 <_Z6toMbcsRKSs>  ; toMbcs(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
08acdc03 +0x163:  mov    -0x1c(%ebp),%edx
08acdc06 +0x166:  mov    %edi,0x10(%esp)
08acdc0a +0x16a:  movl   $&_ZZN6DNFLex14get_next_tokenEvE12__FUNCTION__,0x8(%esp)
08acdc12 +0x172:  movl   $"%s - %s/%s, line %d, PushInputStream failed.",0x4(%esp)
08acdc1a +0x17a:  mov    %edx,0x14(%esp)
08acdc1e +0x17e:  mov    %eax,0xc(%esp)
08acdc22 +0x182:  jmp    08acdb87 <+0xe7>
08acdc27 +0x187:  nop
08acdc28 +0x188:  nop
08acdc29 +0x189:  nop
08acdc2a +0x18a:  nop
08acdc2b +0x18b:  nop
08acdc2c +0x18c:  nop
08acdc2d +0x18d:  nop
08acdc2e +0x18e:  nop
08acdc2f +0x18f:  nop
08acdc30 +0x190:  push   %ebp
08acdc31 +0x191:  mov    %esp,%ebp
08acdc33 +0x193:  push   %ebx
08acdc34 +0x194:  sub    $0x24,%esp
08acdc37 +0x197:  mov    0x8(%ebp),%ebx
08acdc3a +0x19a:  mov    0x4(%ebx),%eax
08acdc3d +0x19d:  sub    $0xc,%eax
08acdc40 +0x1a0:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
08acdc45 +0x1a5:  jne    08acdc5b <+0x1bb>
08acdc47 +0x1a7:  mov    (%ebx),%eax
08acdc49 +0x1a9:  mov    $&_ZNSs4_Rep20_S_empty_rep_storageE,%edx
08acdc4e +0x1ae:  sub    $0xc,%eax
08acdc51 +0x1b1:  cmp    %eax,%edx
08acdc53 +0x1b3:  jne    08acdc81 <+0x1e1>
08acdc55 +0x1b5:  add    $0x24,%esp
08acdc58 +0x1b8:  pop    %ebx
08acdc59 +0x1b9:  pop    %ebp
08acdc5a +0x1ba:  ret
08acdc5b +0x1bb:  mov    $&data#bb92cc41(.plt),%edx
08acdc60 +0x1c0:  test   %edx,%edx
08acdc62 +0x1c2:  je     08acdca7 <+0x207>
08acdc64 +0x1c4:  or     $0xffffffff,%edx
08acdc67 +0x1c7:  lock xadd %edx,0x8(%eax)
08acdc6c +0x1cc:  test   %edx,%edx
08acdc6e +0x1ce:  jg     08acdc47 <+0x1a7>
08acdc70 +0x1d0:  lea    -0x9(%ebp),%edx
08acdc73 +0x1d3:  mov    %edx,0x4(%esp)
08acdc77 +0x1d7:  mov    %eax,(%esp)
08acdc7a +0x1da:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
08acdc7f +0x1df:  jmp    08acdc47 <+0x1a7>
08acdc81 +0x1e1:  mov    $&data#bb92cc41(.plt),%edx
08acdc86 +0x1e6:  test   %edx,%edx
08acdc88 +0x1e8:  je     08acdcb2 <+0x212>
08acdc8a +0x1ea:  or     $0xffffffff,%edx
08acdc8d +0x1ed:  lock xadd %edx,0x8(%eax)
08acdc92 +0x1f2:  test   %edx,%edx
08acdc94 +0x1f4:  jg     08acdc55 <+0x1b5>
08acdc96 +0x1f6:  lea    -0xa(%ebp),%edx
08acdc99 +0x1f9:  mov    %edx,0x4(%esp)
08acdc9d +0x1fd:  mov    %eax,(%esp)
08acdca0 +0x200:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
08acdca5 +0x205:  jmp    08acdc55 <+0x1b5>
08acdca7 +0x207:  mov    0x8(%eax),%edx
08acdcaa +0x20a:  lea    -0x1(%edx),%ecx
08acdcad +0x20d:  mov    %ecx,0x8(%eax)
08acdcb0 +0x210:  jmp    08acdc6c <+0x1cc>
08acdcb2 +0x212:  mov    0x8(%eax),%edx
08acdcb5 +0x215:  lea    -0x1(%edx),%ecx
08acdcb8 +0x218:  mov    %ecx,0x8(%eax)
08acdcbb +0x21b:  jmp    08acdc92 <+0x1f2>
08acdcbd +0x21d:  nop
08acdcbe +0x21e:  nop
08acdcbf +0x21f:  nop
08acdcc0 +0x220:  push   %ebp
08acdcc1 +0x221:  mov    %esp,%ebp
08acdcc3 +0x223:  push   %edi
08acdcc4 +0x224:  push   %esi
08acdcc5 +0x225:  push   %ebx
08acdcc6 +0x226:  sub    $0x5c,%esp
08acdcc9 +0x229:  mov    0x8(%ebp),%eax
08acdccc +0x22c:  mov    0x4(%eax),%ebx
08acdccf +0x22f:  cmp    0x8(%eax),%ebx
08acdcd2 +0x232:  je     08acde48 <+0x3a8>
08acdcd8 +0x238:  test   %ebx,%ebx
08acdcda +0x23a:  je     08acde40 <+0x3a0>
08acdce0 +0x240:  lea    -0x18(%ebx),%esi
08acdce3 +0x243:  mov    %esi,0x4(%esp)
08acdce7 +0x247:  mov    %ebx,(%esp)
08acdcea +0x24a:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
08acdcef +0x24f:  lea    0x4(%esi),%eax
08acdcf2 +0x252:  mov    %eax,0x4(%esp)
08acdcf6 +0x256:  lea    0x4(%ebx),%eax
08acdcf9 +0x259:  mov    %eax,(%esp)
08acdcfc +0x25c:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
08acdd01 +0x261:  mov    0x8(%esi),%eax
08acdd04 +0x264:  mov    %eax,0x8(%ebx)
08acdd07 +0x267:  mov    0xc(%esi),%eax
08acdd0a +0x26a:  mov    %eax,0xc(%ebx)
08acdd0d +0x26d:  mov    0x10(%esi),%eax
08acdd10 +0x270:  mov    %eax,0x10(%ebx)
08acdd13 +0x273:  mov    0x14(%esi),%eax
08acdd16 +0x276:  mov    %eax,0x14(%ebx)
08acdd19 +0x279:  mov    0x8(%ebp),%ecx
08acdd1c +0x27c:  mov    0x4(%ecx),%edx
08acdd1f +0x27f:  mov    0x8(%ebp),%ecx
08acdd22 +0x282:  lea    0x18(%edx),%eax
08acdd25 +0x285:  lea    -0x18(%edx),%ebx
08acdd28 +0x288:  mov    %ebx,%esi
08acdd2a +0x28a:  mov    %eax,0x4(%ecx)
08acdd2d +0x28d:  sub    0xc(%ebp),%esi
08acdd30 +0x290:  sar    $0x3,%esi
08acdd33 +0x293:  imul   $0xaaaaaaab,%esi,%esi
08acdd39 +0x299:  test   %esi,%esi
08acdd3b +0x29b:  jle    08acdd91 <+0x2f1>
08acdd3d +0x29d:  mov    %edx,-0x3c(%ebp)
08acdd40 +0x2a0:  jmp    08acdd4b <+0x2ab>
08acdd42 +0x2a2:  lea    0x0(%esi),%esi
08acdd48 +0x2a8:  sub    $0x18,%ebx
08acdd4b +0x2ab:  mov    -0x3c(%ebp),%edi
08acdd4e +0x2ae:  sub    $0x1,%esi
08acdd51 +0x2b1:  mov    %ebx,-0x3c(%ebp)
08acdd54 +0x2b4:  mov    %ebx,(%esp)
08acdd57 +0x2b7:  sub    $0x30,%edi
08acdd5a +0x2ba:  mov    %edi,0x4(%esp)
08acdd5e +0x2be:  add    $0x4,%edi
08acdd61 +0x2c1:  call   08707c30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1840>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1840
08acdd66 +0x2c6:  lea    0x4(%ebx),%eax
08acdd69 +0x2c9:  mov    %edi,0x4(%esp)
08acdd6d +0x2cd:  mov    %eax,(%esp)
08acdd70 +0x2d0:  call   08707c30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1840>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1840
08acdd75 +0x2d5:  mov    -0x10(%ebx),%eax
08acdd78 +0x2d8:  test   %esi,%esi
08acdd7a +0x2da:  mov    %eax,0x8(%ebx)
08acdd7d +0x2dd:  mov    -0xc(%ebx),%eax
08acdd80 +0x2e0:  mov    %eax,0xc(%ebx)
08acdd83 +0x2e3:  mov    -0x8(%ebx),%eax
08acdd86 +0x2e6:  mov    %eax,0x10(%ebx)
08acdd89 +0x2e9:  mov    -0x4(%ebx),%eax
08acdd8c +0x2ec:  mov    %eax,0x14(%ebx)
08acdd8f +0x2ef:  jg     08acdd48 <+0x2a8>
08acdd91 +0x2f1:  mov    0x10(%ebp),%eax
08acdd94 +0x2f4:  lea    -0x34(%ebp),%ebx
08acdd97 +0x2f7:  mov    %ebx,(%esp)
08acdd9a +0x2fa:  lea    -0x30(%ebp),%esi
08acdd9d +0x2fd:  mov    %eax,0x4(%esp)
08acdda1 +0x301:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
08acdda6 +0x306:  mov    0x10(%ebp),%eax
08acdda9 +0x309:  mov    %esi,(%esp)
08acddac +0x30c:  add    $0x4,%eax
08acddaf +0x30f:  mov    %eax,0x4(%esp)
08acddb3 +0x313:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
08acddb8 +0x318:  mov    0x10(%ebp),%edx
08acddbb +0x31b:  mov    0xc(%ebp),%ecx
08acddbe +0x31e:  mov    0x8(%edx),%eax
08acddc1 +0x321:  mov    %eax,-0x2c(%ebp)
08acddc4 +0x324:  mov    0xc(%edx),%eax
08acddc7 +0x327:  mov    %eax,-0x28(%ebp)
08acddca +0x32a:  mov    0x10(%edx),%eax
08acddcd +0x32d:  mov    %eax,-0x24(%ebp)
08acddd0 +0x330:  mov    0x14(%edx),%eax
08acddd3 +0x333:  mov    %ebx,0x4(%esp)
08acddd7 +0x337:  mov    %ecx,(%esp)
08acddda +0x33a:  mov    %eax,-0x20(%ebp)
08acdddd +0x33d:  call   08707c30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1840>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1840
08acdde2 +0x342:  mov    0xc(%ebp),%eax
08acdde5 +0x345:  mov    %esi,0x4(%esp)
08acdde9 +0x349:  add    $0x4,%eax
08acddec +0x34c:  mov    %eax,(%esp)
08acddef +0x34f:  call   08707c30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1840>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1840
08acddf4 +0x354:  mov    -0x2c(%ebp),%eax
08acddf7 +0x357:  mov    0xc(%ebp),%edx
08acddfa +0x35a:  mov    %eax,0x8(%edx)
08acddfd +0x35d:  mov    -0x28(%ebp),%eax
08acde00 +0x360:  mov    %eax,0xc(%edx)
08acde03 +0x363:  mov    -0x24(%ebp),%eax
08acde06 +0x366:  mov    %eax,0x10(%edx)
08acde09 +0x369:  mov    -0x20(%ebp),%eax
08acde0c +0x36c:  mov    %eax,0x14(%edx)
08acde0f +0x36f:  mov    -0x30(%ebp),%eax
08acde12 +0x372:  sub    $0xc,%eax
08acde15 +0x375:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
08acde1a +0x37a:  jne    08ace1fd <+0x75d>
08acde20 +0x380:  mov    -0x34(%ebp),%eax
08acde23 +0x383:  mov    $&_ZNSs4_Rep20_S_empty_rep_storageE,%edx
08acde28 +0x388:  sub    $0xc,%eax
08acde2b +0x38b:  cmp    %eax,%edx
08acde2d +0x38d:  jne    08ace1d0 <+0x730>
08acde33 +0x393:  add    $0x5c,%esp
08acde36 +0x396:  pop    %ebx
08acde37 +0x397:  pop    %esi
08acde38 +0x398:  pop    %edi
08acde39 +0x399:  pop    %ebp
08acde3a +0x39a:  ret
08acde3b +0x39b:  nop
08acde3c +0x39c:  lea    0x0(%esi,%eiz,1),%esi
08acde40 +0x3a0:  xor    %edx,%edx
08acde42 +0x3a2:  jmp    08acdd1f <+0x27f>
08acde47 +0x3a7:  nop
08acde48 +0x3a8:  mov    0x8(%ebp),%ecx
08acde4b +0x3ab:  mov    (%ecx),%eax
08acde4d +0x3ad:  sub    %eax,%ebx
08acde4f +0x3af:  sar    $0x3,%ebx
08acde52 +0x3b2:  imul   $0xaaaaaaab,%ebx,%ebx
08acde58 +0x3b8:  test   %ebx,%ebx
08acde5a +0x3ba:  je     08ace01f <+0x57f>
08acde60 +0x3c0:  lea    (%ebx,%ebx,1),%edx
08acde63 +0x3c3:  cmp    %edx,%ebx
08acde65 +0x3c5:  mov    %edx,-0x4c(%ebp)
08acde68 +0x3c8:  jbe    08ace1a0 <+0x700>
08acde6e +0x3ce:  mov    0xc(%ebp),%edx
08acde71 +0x3d1:  movl   $0xaaaaaaa,-0x4c(%ebp)
08acde78 +0x3d8:  sub    %eax,%edx
08acde7a +0x3da:  mov    %edx,%eax
08acde7c +0x3dc:  sar    $0x3,%eax
08acde7f +0x3df:  imul   $0xaaaaaaab,%eax,%ebx
08acde85 +0x3e5:  mov    $0xfffffff0,%eax
08acde8a +0x3ea:  mov    %eax,(%esp)
08acde8d +0x3ed:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08acde92 +0x3f2:  mov    %eax,-0x48(%ebp)
08acde95 +0x3f5:  mov    -0x48(%ebp),%eax
08acde98 +0x3f8:  mov    -0x48(%ebp),%edx
08acde9b +0x3fb:  mov    %eax,-0x50(%ebp)
08acde9e +0x3fe:  lea    (%ebx,%ebx,2),%eax
08acdea1 +0x401:  lea    (%edx,%eax,8),%eax
08acdea4 +0x404:  test   %eax,%eax
08acdea6 +0x406:  mov    %eax,-0x44(%ebp)
08acdea9 +0x409:  je     08acdef0 <+0x450>
08acdeab +0x40b:  mov    0x10(%ebp),%ecx
08acdeae +0x40e:  mov    %eax,(%esp)
08acdeb1 +0x411:  mov    %ecx,0x4(%esp)
08acdeb5 +0x415:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
08acdeba +0x41a:  mov    0x10(%ebp),%eax
08acdebd +0x41d:  add    $0x4,%eax
08acdec0 +0x420:  mov    %eax,0x4(%esp)
08acdec4 +0x424:  mov    -0x44(%ebp),%eax
08acdec7 +0x427:  add    $0x4,%eax
08acdeca +0x42a:  mov    %eax,(%esp)
08acdecd +0x42d:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
08acded2 +0x432:  mov    0x10(%ebp),%edx
08acded5 +0x435:  mov    -0x44(%ebp),%ecx
08acded8 +0x438:  mov    0x8(%edx),%eax
08acdedb +0x43b:  mov    %eax,0x8(%ecx)
08acdede +0x43e:  mov    0xc(%edx),%eax
08acdee1 +0x441:  mov    %eax,0xc(%ecx)
08acdee4 +0x444:  mov    0x10(%edx),%eax
08acdee7 +0x447:  mov    %eax,0x10(%ecx)
08acdeea +0x44a:  mov    0x14(%edx),%eax
08acdeed +0x44d:  mov    %eax,0x14(%ecx)
08acdef0 +0x450:  mov    0x8(%ebp),%ecx
08acdef3 +0x453:  mov    -0x48(%ebp),%esi
08acdef6 +0x456:  movl   $0x0,-0x50(%ebp)
08acdefd +0x45d:  mov    (%ecx),%ebx
08acdeff +0x45f:  cmp    0xc(%ebp),%ebx
08acdf02 +0x462:  mov    %esi,%edi
08acdf04 +0x464:  je     08acdf4f <+0x4af>
08acdf06 +0x466:  xchg   %ax,%ax
08acdf08 +0x468:  test   %edi,%edi
08acdf0a +0x46a:  je     08acdf42 <+0x4a2>
08acdf0c +0x46c:  mov    %ebx,0x4(%esp)
08acdf10 +0x470:  mov    %edi,(%esp)
08acdf13 +0x473:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
08acdf18 +0x478:  lea    0x4(%ebx),%eax
08acdf1b +0x47b:  mov    %eax,0x4(%esp)
08acdf1f +0x47f:  lea    0x4(%edi),%eax
08acdf22 +0x482:  mov    %eax,(%esp)
08acdf25 +0x485:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
08acdf2a +0x48a:  mov    0x8(%ebx),%eax
08acdf2d +0x48d:  mov    %eax,0x8(%edi)
08acdf30 +0x490:  mov    0xc(%ebx),%eax
08acdf33 +0x493:  mov    %eax,0xc(%edi)
08acdf36 +0x496:  mov    0x10(%ebx),%eax
08acdf39 +0x499:  mov    %eax,0x10(%edi)
08acdf3c +0x49c:  mov    0x14(%ebx),%eax
08acdf3f +0x49f:  mov    %eax,0x14(%edi)
08acdf42 +0x4a2:  add    $0x18,%esi
08acdf45 +0x4a5:  add    $0x18,%ebx
08acdf48 +0x4a8:  cmp    0xc(%ebp),%ebx
08acdf4b +0x4ab:  mov    %esi,%edi
08acdf4d +0x4ad:  jne    08acdf08 <+0x468>
08acdf4f +0x4af:  mov    0x8(%ebp),%edx
08acdf52 +0x4b2:  lea    0x18(%edi),%eax
08acdf55 +0x4b5:  mov    %eax,-0x50(%ebp)
08acdf58 +0x4b8:  mov    %eax,%esi
08acdf5a +0x4ba:  mov    0x4(%edx),%edx
08acdf5d +0x4bd:  cmp    %ebx,%edx
08acdf5f +0x4bf:  mov    %edx,-0x40(%ebp)
08acdf62 +0x4c2:  je     08acdfb5 <+0x515>
08acdf64 +0x4c4:  add    $0x30,%edi
08acdf67 +0x4c7:  nop
08acdf68 +0x4c8:  test   %esi,%esi
08acdf6a +0x4ca:  je     08acdfa2 <+0x502>
08acdf6c +0x4cc:  mov    %ebx,0x4(%esp)
08acdf70 +0x4d0:  mov    %esi,(%esp)
08acdf73 +0x4d3:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
08acdf78 +0x4d8:  lea    0x4(%ebx),%eax
08acdf7b +0x4db:  mov    %eax,0x4(%esp)
08acdf7f +0x4df:  lea    0x4(%esi),%eax
08acdf82 +0x4e2:  mov    %eax,(%esp)
08acdf85 +0x4e5:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
08acdf8a +0x4ea:  mov    0x8(%ebx),%eax
08acdf8d +0x4ed:  mov    %eax,0x8(%esi)
08acdf90 +0x4f0:  mov    0xc(%ebx),%eax
08acdf93 +0x4f3:  mov    %eax,0xc(%esi)
08acdf96 +0x4f6:  mov    0x10(%ebx),%eax
08acdf99 +0x4f9:  mov    %eax,0x10(%esi)
08acdf9c +0x4fc:  mov    0x14(%ebx),%eax
08acdf9f +0x4ff:  mov    %eax,0x14(%esi)
08acdfa2 +0x502:  add    $0x18,%ebx
08acdfa5 +0x505:  mov    %edi,%esi
08acdfa7 +0x507:  cmp    %ebx,-0x40(%ebp)
08acdfaa +0x50a:  lea    0x18(%edi),%edi
08acdfad +0x50d:  jne    08acdf68 <+0x4c8>
08acdfaf +0x50f:  mov    0x8(%ebp),%ecx
08acdfb2 +0x512:  mov    0x4(%ecx),%ebx
08acdfb5 +0x515:  mov    0x8(%ebp),%eax
08acdfb8 +0x518:  lea    -0x1b(%ebp),%ecx
08acdfbb +0x51b:  mov    (%eax),%edi
08acdfbd +0x51d:  cmp    %ebx,%edi
08acdfbf +0x51f:  je     08acdff1 <+0x551>
08acdfc1 +0x521:  lea    0x0(%esi,%eiz,1),%esi
08acdfc8 +0x528:  mov    0x4(%edi),%eax
08acdfcb +0x52b:  sub    $0xc,%eax
08acdfce +0x52e:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
08acdfd3 +0x533:  jne    08ace03f <+0x59f>
08acdfd5 +0x535:  mov    (%edi),%eax
08acdfd7 +0x537:  sub    $0xc,%eax
08acdfda +0x53a:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
08acdfdf +0x53f:  jne    08ace078 <+0x5d8>
08acdfe5 +0x545:  add    $0x18,%edi
08acdfe8 +0x548:  cmp    %ebx,%edi
08acdfea +0x54a:  jne    08acdfc8 <+0x528>
08acdfec +0x54c:  mov    0x8(%ebp),%ecx
08acdfef +0x54f:  mov    (%ecx),%ebx
08acdff1 +0x551:  test   %ebx,%ebx
08acdff3 +0x553:  je     08acdffd <+0x55d>
08acdff5 +0x555:  mov    %ebx,(%esp)
08acdff8 +0x558:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08acdffd +0x55d:  mov    -0x48(%ebp),%edx
08ace000 +0x560:  mov    0x8(%ebp),%eax
08ace003 +0x563:  mov    -0x4c(%ebp),%ecx
08ace006 +0x566:  mov    %edx,(%eax)
08ace008 +0x568:  mov    %esi,0x4(%eax)
08ace00b +0x56b:  lea    (%ecx,%ecx,2),%eax
08ace00e +0x56e:  lea    (%edx,%eax,8),%eax
08ace011 +0x571:  mov    0x8(%ebp),%edx
08ace014 +0x574:  mov    %eax,0x8(%edx)
08ace017 +0x577:  add    $0x5c,%esp
08ace01a +0x57a:  pop    %ebx
08ace01b +0x57b:  pop    %esi
08ace01c +0x57c:  pop    %edi
08ace01d +0x57d:  pop    %ebp
08ace01e +0x57e:  ret
08ace01f +0x57f:  mov    0xc(%ebp),%ecx
08ace022 +0x582:  movl   $0x1,-0x4c(%ebp)
08ace029 +0x589:  sub    %eax,%ecx
08ace02b +0x58b:  mov    %ecx,%eax
08ace02d +0x58d:  sar    $0x3,%eax
08ace030 +0x590:  imul   $0xaaaaaaab,%eax,%ebx
08ace036 +0x596:  imul   $0x18,-0x4c(%ebp),%eax
08ace03a +0x59a:  jmp    08acde8a <+0x3ea>
08ace03f +0x59f:  mov    $&data#bb92cc41(.plt),%edx
08ace044 +0x5a4:  test   %edx,%edx
08ace046 +0x5a6:  je     08ace272 <+0x7d2>
08ace04c +0x5ac:  or     $0xffffffff,%edx
08ace04f +0x5af:  lock xadd %edx,0x8(%eax)
08ace054 +0x5b4:  mov    %edx,-0x3c(%ebp)
08ace057 +0x5b7:  cmpl   $0x0,-0x3c(%ebp)
08ace05b +0x5bb:  jg     08acdfd5 <+0x535>
08ace061 +0x5c1:  mov    %ecx,0x4(%esp)
08ace065 +0x5c5:  mov    %ecx,-0x54(%ebp)
08ace068 +0x5c8:  mov    %eax,(%esp)
08ace06b +0x5cb:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
08ace070 +0x5d0:  mov    -0x54(%ebp),%ecx
08ace073 +0x5d3:  jmp    08acdfd5 <+0x535>
08ace078 +0x5d8:  mov    $&data#bb92cc41(.plt),%edx
08ace07d +0x5dd:  test   %edx,%edx
08ace07f +0x5df:  je     08ace0dc <+0x63c>
08ace081 +0x5e1:  or     $0xffffffff,%edx
08ace084 +0x5e4:  lock xadd %edx,0x8(%eax)
08ace089 +0x5e9:  mov    %edx,-0x3c(%ebp)
08ace08c +0x5ec:  cmpl   $0x0,-0x3c(%ebp)
08ace090 +0x5f0:  jg     08acdfe5 <+0x545>
08ace096 +0x5f6:  lea    -0x1c(%ebp),%edx
08ace099 +0x5f9:  mov    %ecx,-0x54(%ebp)
08ace09c +0x5fc:  mov    %edx,0x4(%esp)
08ace0a0 +0x600:  mov    %eax,(%esp)
08ace0a3 +0x603:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
08ace0a8 +0x608:  mov    -0x54(%ebp),%ecx
08ace0ab +0x60b:  jmp    08acdfe5 <+0x545>
08ace0b0 +0x610:  mov    %eax,-0x54(%ebp)
08ace0b3 +0x613:  mov    %esi,(%esp)
08ace0b6 +0x616:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08ace0bb +0x61b:  mov    -0x54(%ebp),%eax
08ace0be +0x61e:  mov    %eax,(%esp)
08ace0c1 +0x621:  call   08725ce0 <__cxa_begin_catch>
08ace0c6 +0x626:  mov    -0x50(%ebp),%ebx
08ace0c9 +0x629:  cmp    %ebx,%esi
08ace0cb +0x62b:  je     08ace0ea <+0x64a>
08ace0cd +0x62d:  mov    %ebx,(%esp)
08ace0d0 +0x630:  add    $0x18,%ebx
08ace0d3 +0x633:  call   08acdc30 <+0x190>
08ace0d8 +0x638:  jmp    08ace0c9 <+0x629>
08ace0da +0x63a:  jmp    08ace0be <+0x61e>
08ace0dc +0x63c:  mov    0x8(%eax),%edx
08ace0df +0x63f:  mov    %edx,-0x3c(%ebp)
08ace0e2 +0x642:  sub    $0x1,%edx
08ace0e5 +0x645:  mov    %edx,0x8(%eax)
08ace0e8 +0x648:  jmp    08ace08c <+0x5ec>
08ace0ea +0x64a:  call   08724be0 <__cxa_rethrow>
08ace0ef +0x64f:  mov    %eax,-0x54(%ebp)
08ace0f2 +0x652:  mov    %edi,(%esp)
08ace0f5 +0x655:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08ace0fa +0x65a:  mov    -0x54(%ebp),%eax
08ace0fd +0x65d:  mov    %eax,(%esp)
08ace100 +0x660:  call   08725ce0 <__cxa_begin_catch>
08ace105 +0x665:  mov    -0x48(%ebp),%ebx
08ace108 +0x668:  cmp    %ebx,%edi
08ace10a +0x66a:  je     08ace15e <+0x6be>
08ace10c +0x66c:  mov    %ebx,(%esp)
08ace10f +0x66f:  add    $0x18,%ebx
08ace112 +0x672:  call   08acdc30 <+0x190>
08ace117 +0x677:  jmp    08ace108 <+0x668>
08ace119 +0x679:  mov    -0x44(%ebp),%edx
08ace11c +0x67c:  mov    %eax,-0x54(%ebp)
08ace11f +0x67f:  mov    %edx,(%esp)
08ace122 +0x682:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08ace127 +0x687:  mov    -0x54(%ebp),%eax
08ace12a +0x68a:  mov    %eax,(%esp)
08ace12d +0x68d:  call   08725ce0 <__cxa_begin_catch>
08ace132 +0x692:  mov    -0x48(%ebp),%ebx
08ace135 +0x695:  cmpl   $0x0,-0x50(%ebp)
08ace139 +0x699:  je     08ace165 <+0x6c5>
08ace13b +0x69b:  cmp    %ebx,-0x50(%ebp)
08ace13e +0x69e:  je     08ace170 <+0x6d0>
08ace140 +0x6a0:  mov    %ebx,(%esp)
08ace143 +0x6a3:  add    $0x18,%ebx
08ace146 +0x6a6:  call   08acdc30 <+0x190>
08ace14b +0x6ab:  jmp    08ace13b <+0x69b>
08ace14d +0x6ad:  jmp    08ace0fd <+0x65d>
08ace14f +0x6af:  mov    %eax,-0x54(%ebp)
08ace152 +0x6b2:  call   08725c30 <__cxa_end_catch>
08ace157 +0x6b7:  mov    -0x54(%ebp),%eax
08ace15a +0x6ba:  jmp    08ace12a <+0x68a>
08ace15c +0x6bc:  jmp    08ace12a <+0x68a>
08ace15e +0x6be:  xchg   %ax,%ax
08ace160 +0x6c0:  call   08724be0 <__cxa_rethrow>
08ace165 +0x6c5:  mov    -0x44(%ebp),%ecx
08ace168 +0x6c8:  mov    %ecx,(%esp)
08ace16b +0x6cb:  call   08acdc30 <+0x190>
08ace170 +0x6d0:  cmpl   $0x0,-0x48(%ebp)
08ace174 +0x6d4:  je     08ace181 <+0x6e1>
08ace176 +0x6d6:  mov    -0x48(%ebp),%eax
08ace179 +0x6d9:  mov    %eax,(%esp)
08ace17c +0x6dc:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08ace181 +0x6e1:  call   08724be0 <__cxa_rethrow>
08ace186 +0x6e6:  jmp    08ace14f <+0x6af>
08ace188 +0x6e8:  mov    %eax,-0x54(%ebp)
08ace18b +0x6eb:  nop
08ace18c +0x6ec:  lea    0x0(%esi,%eiz,1),%esi
08ace190 +0x6f0:  call   08725c30 <__cxa_end_catch>
08ace195 +0x6f5:  mov    -0x54(%ebp),%eax
08ace198 +0x6f8:  mov    %eax,(%esp)
08ace19b +0x6fb:  call   08ae3750 <_Unwind_Resume>
08ace1a0 +0x700:  cmp    $0xaaaaaaa,%edx
08ace1a6 +0x706:  ja     08acde6e <+0x3ce>
08ace1ac +0x70c:  mov    0xc(%ebp),%ecx
08ace1af +0x70f:  movl   $0x0,-0x48(%ebp)
08ace1b6 +0x716:  sub    %eax,%ecx
08ace1b8 +0x718:  mov    %ecx,%eax
08ace1ba +0x71a:  sar    $0x3,%eax
08ace1bd +0x71d:  imul   $0xaaaaaaab,%eax,%ebx
08ace1c3 +0x723:  test   %edx,%edx
08ace1c5 +0x725:  je     08acde95 <+0x3f5>
08ace1cb +0x72b:  jmp    08ace036 <+0x596>
08ace1d0 +0x730:  mov    $&data#bb92cc41(.plt),%edx
08ace1d5 +0x735:  test   %edx,%edx
08ace1d7 +0x737:  je     08ace240 <+0x7a0>
08ace1d9 +0x739:  or     $0xffffffff,%edx
08ace1dc +0x73c:  lock xadd %edx,0x8(%eax)
08ace1e1 +0x741:  test   %edx,%edx
08ace1e3 +0x743:  jg     08acde33 <+0x393>
08ace1e9 +0x749:  lea    -0x1a(%ebp),%edx
08ace1ec +0x74c:  mov    %edx,0x4(%esp)
08ace1f0 +0x750:  mov    %eax,(%esp)
08ace1f3 +0x753:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
08ace1f8 +0x758:  jmp    08acde33 <+0x393>
08ace1fd +0x75d:  mov    $&data#bb92cc41(.plt),%edx
08ace202 +0x762:  test   %edx,%edx
08ace204 +0x764:  je     08ace24b <+0x7ab>
08ace206 +0x766:  or     $0xffffffff,%edx
08ace209 +0x769:  lock xadd %edx,0x8(%eax)
08ace20e +0x76e:  test   %edx,%edx
08ace210 +0x770:  jg     08acde20 <+0x380>
08ace216 +0x776:  lea    -0x19(%ebp),%edx
08ace219 +0x779:  mov    %edx,0x4(%esp)
08ace21d +0x77d:  mov    %eax,(%esp)
08ace220 +0x780:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
08ace225 +0x785:  jmp    08acde20 <+0x380>
08ace22a +0x78a:  mov    %eax,-0x54(%ebp)
08ace22d +0x78d:  mov    %ebx,(%esp)
08ace230 +0x790:  call   08acdc30 <+0x190>
08ace235 +0x795:  mov    -0x54(%ebp),%eax
08ace238 +0x798:  mov    %eax,(%esp)
08ace23b +0x79b:  call   08ae3750 <_Unwind_Resume>
08ace240 +0x7a0:  mov    0x8(%eax),%edx
08ace243 +0x7a3:  lea    -0x1(%edx),%ecx
08ace246 +0x7a6:  mov    %ecx,0x8(%eax)
08ace249 +0x7a9:  jmp    08ace1e1 <+0x741>
08ace24b +0x7ab:  mov    0x8(%eax),%edx
08ace24e +0x7ae:  lea    -0x1(%edx),%ecx
08ace251 +0x7b1:  mov    %ecx,0x8(%eax)
08ace254 +0x7b4:  jmp    08ace20e <+0x76e>
08ace256 +0x7b6:  mov    %eax,-0x54(%ebp)
08ace259 +0x7b9:  mov    %ebx,(%esp)
08ace25c +0x7bc:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08ace261 +0x7c1:  mov    -0x54(%ebp),%eax
08ace264 +0x7c4:  mov    %eax,(%esp)
08ace267 +0x7c7:  call   08ae3750 <_Unwind_Resume>
08ace26c +0x7cc:  jmp    08ace256 <+0x7b6>
08ace26e +0x7ce:  xchg   %ax,%ax
08ace270 +0x7d0:  jmp    08ace264 <+0x7c4>
08ace272 +0x7d2:  mov    0x8(%eax),%edx
08ace275 +0x7d5:  mov    %edx,-0x3c(%ebp)
08ace278 +0x7d8:  sub    $0x1,%edx
08ace27b +0x7db:  mov    %edx,0x8(%eax)
08ace27e +0x7de:  jmp    08ace057 <+0x5b7>
08ace283 +0x7e3:  nop
08ace284 +0x7e4:  nop
08ace285 +0x7e5:  nop
08ace286 +0x7e6:  nop
08ace287 +0x7e7:  nop
08ace288 +0x7e8:  nop
08ace289 +0x7e9:  nop
08ace28a +0x7ea:  nop
08ace28b +0x7eb:  nop
08ace28c +0x7ec:  nop
08ace28d +0x7ed:  nop
08ace28e +0x7ee:  nop
08ace28f +0x7ef:  nop
```

## 反编译 C

```c
// DNFLex::get_next_token @ 0x8acdaa0

/* DWARF original prototype: DNFLEX_TOKEN get_next_token(DNFLex * this) */

DNFLEX_TOKEN __thiscall DNFLex::get_next_token(DNFLex *this)

{
  stream_t *psVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  TCHAR *filename;
  DNFLEX_TOKEN DVar6;
  string *sSrc;
  char *__format;
  
                    /* Unresolved local var: DNFLEX_TOKEN tok@[???] */
  DVar6 = DNF_TOK_EOF;
  if ((this->stream_stack_).super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>.
      _M_impl._M_finish !=
      (this->stream_stack_).super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>.
      _M_impl._M_start) {
    DVar6 = (*(this->super___dnf_script__FlexLexer).super_FlexLexer._vptr_FlexLexer[6])(this);
    if (this->allow_inclusion_ != false) {
      if (DVar6 == DNF_TOK_INCLUDE) {
                    /* Unresolved local var: stream_t * stream@[???] */
        psVar1 = (this->stream_stack_).
                 super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>._M_impl.
                 _M_finish;
        sSrc = (string *)
               ((uint)(psVar1 + -1) &
               (psVar1 ==
               (this->stream_stack_).
               super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>._M_impl.
               _M_start) - 1);
        iVar3 = (*(this->super___dnf_script__FlexLexer).super_FlexLexer._vptr_FlexLexer[6])(this);
        if (iVar3 == 7) {
          filename = toTString(this->STR_TOK_BUF);
          bVar2 = PushInputStream(this,"",filename,(stream_data_t *)0x0);
          if (bVar2) goto LAB_08acdb04;
          iVar3 = (this->super___dnf_script__FlexLexer).super_FlexLexer.yylineno;
          pcVar4 = toMbcs(sSrc + 1);
          pcVar5 = toMbcs(sSrc);
          __format = "%s - %s/%s, line %d, PushInputStream failed.";
        }
        else {
          iVar3 = (this->super___dnf_script__FlexLexer).super_FlexLexer.yylineno;
          pcVar4 = toMbcs(sSrc + 1);
          pcVar5 = toMbcs(sSrc);
          __format = "%s - %s/%s, line %d, invalid inclusion.";
        }
        sprintf(this->ERR_BUF,__format,"get_next_token",pcVar5,pcVar4,iVar3);
        (*(this->super___dnf_script__FlexLexer).super_FlexLexer._vptr_FlexLexer[0xb])
                  (this,this->ERR_BUF);
        return DNF_TOK_ERROR;
      }
      if (DVar6 == DNF_TOK_EOF) {
        bVar2 = PopInputStream(this,false);
        if (bVar2) {
LAB_08acdb04:
                    /* WARNING: Could not recover jumptable at 0x08acdb18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          DVar6 = (*(this->super___dnf_script__FlexLexer).super_FlexLexer._vptr_FlexLexer[6])();
          return DVar6;
        }
      }
    }
  }
  return DVar6;
}
```
