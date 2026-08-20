# get_month_map_ptr

`_ZN5boost9gregorian10greg_month17get_month_map_ptrEv`

`boost::gregorian::greg_month::get_month_map_ptr()`

| 类 | 地址 |
|---|---|
| `boost::gregorian::greg_month` | `0x087dcd60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087dcd60  _ZN5boost9gregorian10greg_month17get_month_map_ptrEv
#           boost::gregorian::greg_month::get_month_map_ptr()
# range [0x087dcd60, 0x087dfd8f]
087dcd60 +0x0000:  push   %ebp
087dcd61 +0x0001:  mov    %esp,%ebp
087dcd63 +0x0003:  push   %edi
087dcd64 +0x0004:  push   %esi
087dcd65 +0x0005:  push   %ebx
087dcd66 +0x0006:  sub    $0x8c,%esp
087dcd6c +0x000c:  cmpb   $0x0,&_ZGVZN5boost9gregorian10greg_month17get_month_map_ptrEvE13month_map_ptr
087dcd73 +0x0013:  je     087dcda7 <+0x47>
087dcd75 +0x0015:  mov    &_ZZN5boost9gregorian10greg_month17get_month_map_ptrEvE13month_map_ptr,%eax
087dcd7a +0x001a:  mov    0x14(%eax),%edi
087dcd7d +0x001d:  test   %edi,%edi
087dcd7f +0x001f:  je     087dce5c <+0xfc>
087dcd85 +0x0025:  mov    0x8(%ebp),%edx
087dcd88 +0x0028:  mov    %eax,(%edx)
087dcd8a +0x002a:  mov    &_ZZN5boost9gregorian10greg_month17get_month_map_ptrEvE13month_map_ptr+0x4,%eax
087dcd8f +0x002f:  test   %eax,%eax
087dcd91 +0x0031:  mov    %eax,0x4(%edx)
087dcd94 +0x0034:  je     087dcd9a <+0x3a>
087dcd96 +0x0036:  lock incl 0x4(%eax)
087dcd9a +0x003a:  mov    0x8(%ebp),%eax
087dcd9d +0x003d:  lea    -0xc(%ebp),%esp
087dcda0 +0x0040:  pop    %ebx
087dcda1 +0x0041:  pop    %esi
087dcda2 +0x0042:  pop    %edi
087dcda3 +0x0043:  pop    %ebp
087dcda4 +0x0044:  ret    $0x4
087dcda7 +0x0047:  movl   $&_ZGVZN5boost9gregorian10greg_month17get_month_map_ptrEvE13month_map_ptr,(%esp)
087dcdae +0x004e:  call   08725330 <__cxa_guard_acquire>
087dcdb3 +0x0053:  test   %eax,%eax
087dcdb5 +0x0055:  je     087dcd75 <+0x15>
087dcdb7 +0x0057:  movl   $0x18,(%esp)
087dcdbe +0x005e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
087dcdc3 +0x0063:  mov    %eax,%ebx
087dcdc5 +0x0065:  movl   $0x0,0x14(%eax)
087dcdcc +0x006c:  movl   $0x0,0x4(%eax)
087dcdd3 +0x0073:  movl   $0x0,0x8(%eax)
087dcdda +0x007a:  lea    0x4(%eax),%eax
087dcddd +0x007d:  mov    %eax,0xc(%ebx)
087dcde0 +0x0080:  mov    %eax,0x10(%ebx)
087dcde3 +0x0083:  mov    %ebx,&_ZZN5boost9gregorian10greg_month17get_month_map_ptrEvE13month_map_ptr
087dcde9 +0x0089:  movl   $0x0,&_ZZN5boost9gregorian10greg_month17get_month_map_ptrEvE13month_map_ptr+0x4
087dcdf3 +0x0093:  movl   $0x10,(%esp)
087dcdfa +0x009a:  call   08724450 <_Znwj>  ; operator new(unsigned int)
087dcdff +0x009f:  mov    %ebx,0xc(%eax)
087dce02 +0x00a2:  movl   $0x1,0x4(%eax)
087dce09 +0x00a9:  movl   $0x1,0x8(%eax)
087dce10 +0x00b0:  movl   $&_ZTVN5boost6detail17sp_counted_impl_pISt3mapISstSt4lessISsESaISt4pairIKSstEEEEE+0x8,(%eax)
087dce16 +0x00b6:  mov    %eax,&_ZZN5boost9gregorian10greg_month17get_month_map_ptrEvE13month_map_ptr+0x4
087dce1b +0x00bb:  mov    %ebx,0x8(%esp)
087dce1f +0x00bf:  mov    %ebx,0x4(%esp)
087dce23 +0x00c3:  movl   $&_ZZN5boost9gregorian10greg_month17get_month_map_ptrEvE13month_map_ptr,(%esp)
087dce2a +0x00ca:  call   080cb756 <_GLOBAL__I__ZN10BingoEventC2Ev+0x5a3>  ; global constructors keyed to BingoEvent::BingoEvent()+0x5a3
087dce2f +0x00cf:  movl   $&_ZGVZN5boost9gregorian10greg_month17get_month_map_ptrEvE13month_map_ptr,(%esp)
087dce36 +0x00d6:  call   08725250 <__cxa_guard_release>
087dce3b +0x00db:  movl   $&__dso_handle,0x8(%esp)
087dce43 +0x00e3:  movl   $&_ZZN5boost9gregorian10greg_month17get_month_map_ptrEvE13month_map_ptr,0x4(%esp)
087dce4b +0x00eb:  movl   $&_ZN5boost10shared_ptrISt3mapISstSt4lessISsESaISt4pairIKSstEEEED1Ev,(%esp)
087dce52 +0x00f2:  call   0807ddd0 <_init+0x6c8>
087dce57 +0x00f7:  jmp    087dcd75 <+0x15>
087dce5c +0x00fc:  lea    -0x19(%ebp),%eax
087dce5f +0x00ff:  mov    %eax,0x8(%esp)
087dce63 +0x0103:  lea    -0x28(%ebp),%eax
087dce66 +0x0106:  movl   $&data#2fb52a47(.rodata),0x4(%esp)
087dce6e +0x010e:  mov    %eax,(%esp)
087dce71 +0x0111:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
087dce76 +0x0116:  movl   $0x0,-0x84(%ebp)
087dce80 +0x0120:  lea    -0x2c(%ebp),%edi
087dce83 +0x0123:  movw   $0x1,-0x7e(%ebp)
087dce89 +0x0129:  lea    0x0(%esi,%eiz,1),%esi
087dce90 +0x0130:  mov    -0x84(%ebp),%edx
087dce96 +0x0136:  mov    &_ZN5boost9gregorianL16long_month_namesE(%edx),%ebx
087dce9c +0x013c:  mov    %ebx,(%esp)
087dce9f +0x013f:  call   0807e3b0 <_init+0xca8>
087dcea4 +0x0144:  lea    -0x28(%ebp),%ecx
087dcea7 +0x0147:  mov    %ebx,0x4(%esp)
087dceab +0x014b:  mov    %ecx,(%esp)
087dceae +0x014e:  mov    %eax,0x8(%esp)
087dceb2 +0x0152:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087dceb7 +0x0157:  lea    -0x28(%ebp),%eax
087dceba +0x015a:  mov    %eax,0x4(%esp)
087dcebe +0x015e:  mov    %edi,(%esp)
087dcec1 +0x0161:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
087dcec6 +0x0166:  call   086dce30 <_ZNSt6locale7classicEv>  ; std::locale::classic()
087dcecb +0x016b:  lea    -0x3c(%ebp),%edx
087dcece +0x016e:  mov    %eax,0x4(%esp)
087dced2 +0x0172:  mov    %edx,(%esp)
087dced5 +0x0175:  call   086dadf0 <_ZNSt6localeC1ERKS_>  ; std::locale::locale(std::locale const&)
087dceda +0x017a:  mov    -0x2c(%ebp),%eax
087dcedd +0x017d:  mov    -0xc(%eax),%eax
087dcee0 +0x0180:  test   %eax,%eax
087dcee2 +0x0182:  mov    %eax,-0x78(%ebp)
087dcee5 +0x0185:  je     087dcf50 <+0x1f0>
087dcee7 +0x0187:  xor    %ebx,%ebx
087dcee9 +0x0189:  jmp    087dcf3e <+0x1de>
087dceeb +0x018b:  nop
087dceec +0x018c:  lea    0x0(%esi,%eiz,1),%esi
087dcef0 +0x0190:  mov    %edi,(%esp)
087dcef3 +0x0193:  call   08708e00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2a10>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2a10
087dcef8 +0x0198:  mov    (%edi),%eax
087dcefa +0x019a:  mov    -0x4(%eax),%ecx
087dcefd +0x019d:  lea    (%eax,%ebx,1),%esi
087dcf00 +0x01a0:  test   %ecx,%ecx
087dcf02 +0x01a2:  js     087dd24b <+0x4eb>
087dcf08 +0x01a8:  mov    %edi,(%esp)
087dcf0b +0x01ab:  call   08708e00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2a10>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2a10
087dcf10 +0x01b0:  mov    %esi,-0x74(%ebp)
087dcf13 +0x01b3:  mov    (%edi),%esi
087dcf15 +0x01b5:  add    %ebx,%esi
087dcf17 +0x01b7:  lea    -0x3c(%ebp),%ecx
087dcf1a +0x01ba:  movsbl (%esi),%esi
087dcf1d +0x01bd:  mov    %ecx,(%esp)
087dcf20 +0x01c0:  call   086eb2c0 <_GLOBAL__I_locale_inst.cc+0xf80>  ; global constructors keyed to locale_inst.cc+0xf80
087dcf25 +0x01c5:  mov    (%eax),%edx
087dcf27 +0x01c7:  mov    %esi,0x4(%esp)
087dcf2b +0x01cb:  mov    %eax,(%esp)
087dcf2e +0x01ce:  call   *0x10(%edx)
087dcf31 +0x01d1:  mov    -0x74(%ebp),%edx
087dcf34 +0x01d4:  add    $0x1,%ebx
087dcf37 +0x01d7:  mov    %al,(%edx)
087dcf39 +0x01d9:  cmp    %ebx,-0x78(%ebp)
087dcf3c +0x01dc:  jbe    087dcf50 <+0x1f0>
087dcf3e +0x01de:  mov    (%edi),%eax
087dcf40 +0x01e0:  mov    -0x4(%eax),%esi
087dcf43 +0x01e3:  test   %esi,%esi
087dcf45 +0x01e5:  jns    087dcef0 <+0x190>
087dcf47 +0x01e7:  add    %ebx,%eax
087dcf49 +0x01e9:  mov    %eax,-0x74(%ebp)
087dcf4c +0x01ec:  mov    %eax,%esi
087dcf4e +0x01ee:  jmp    087dcf17 <+0x1b7>
087dcf50 +0x01f0:  lea    -0x30(%ebp),%ecx
087dcf53 +0x01f3:  mov    %edi,0x4(%esp)
087dcf57 +0x01f7:  mov    %ecx,(%esp)
087dcf5a +0x01fa:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
087dcf5f +0x01ff:  lea    -0x3c(%ebp),%ecx
087dcf62 +0x0202:  mov    %ecx,(%esp)
087dcf65 +0x0205:  call   086dbcd0 <_ZNSt6localeD1Ev>  ; std::locale::~locale()
087dcf6a +0x020a:  lea    -0x30(%ebp),%eax
087dcf6d +0x020d:  lea    -0x28(%ebp),%edx
087dcf70 +0x0210:  mov    %eax,0x4(%esp)
087dcf74 +0x0214:  mov    %edx,(%esp)
087dcf77 +0x0217:  call   08707c30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1840>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1840
087dcf7c +0x021c:  mov    -0x30(%ebp),%eax
087dcf7f +0x021f:  sub    $0xc,%eax
087dcf82 +0x0222:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
087dcf87 +0x0227:  jne    087dd26c <+0x50c>
087dcf8d +0x022d:  mov    -0x2c(%ebp),%eax
087dcf90 +0x0230:  mov    $&_ZNSs4_Rep20_S_empty_rep_storageE,%ecx
087dcf95 +0x0235:  sub    $0xc,%eax
087dcf98 +0x0238:  cmp    %eax,%ecx
087dcf9a +0x023a:  jne    087dd299 <+0x539>
087dcfa0 +0x0240:  lea    -0x28(%ebp),%ecx
087dcfa3 +0x0243:  lea    -0x44(%ebp),%esi
087dcfa6 +0x0246:  mov    %ecx,0x4(%esp)
087dcfaa +0x024a:  mov    %esi,(%esp)
087dcfad +0x024d:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
087dcfb2 +0x0252:  movzwl -0x7e(%ebp),%eax
087dcfb6 +0x0256:  lea    -0x4c(%ebp),%ebx
087dcfb9 +0x0259:  mov    %esi,0x4(%esp)
087dcfbd +0x025d:  mov    %ebx,(%esp)
087dcfc0 +0x0260:  mov    %ax,-0x40(%ebp)
087dcfc4 +0x0264:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
087dcfc9 +0x0269:  movzwl -0x40(%ebp),%eax
087dcfcd +0x026d:  lea    -0x70(%ebp),%edx
087dcfd0 +0x0270:  mov    %ebx,0x8(%esp)
087dcfd4 +0x0274:  mov    %edx,(%esp)
087dcfd7 +0x0277:  mov    %ax,-0x48(%ebp)
087dcfdb +0x027b:  mov    &_ZZN5boost9gregorian10greg_month17get_month_map_ptrEvE13month_map_ptr,%eax
087dcfe0 +0x0280:  mov    %eax,0x4(%esp)
087dcfe4 +0x0284:  call   087dda50 <+0xcf0>
087dcfe9 +0x0289:  mov    -0x4c(%ebp),%eax
087dcfec +0x028c:  mov    $&_ZNSs4_Rep20_S_empty_rep_storageE,%ecx
087dcff1 +0x0291:  sub    $0x4,%esp
087dcff4 +0x0294:  sub    $0xc,%eax
087dcff7 +0x0297:  cmp    %eax,%ecx
087dcff9 +0x0299:  jne    087dd30b <+0x5ab>
087dcfff +0x029f:  mov    -0x44(%ebp),%eax
087dd002 +0x02a2:  mov    $&_ZNSs4_Rep20_S_empty_rep_storageE,%edx
087dd007 +0x02a7:  sub    $0xc,%eax
087dd00a +0x02aa:  cmp    %eax,%edx
087dd00c +0x02ac:  jne    087dd338 <+0x5d8>
087dd012 +0x02b2:  mov    -0x84(%ebp),%ecx
087dd018 +0x02b8:  mov    &_ZN5boost9gregorianL17short_month_namesE(%ecx),%ebx
087dd01e +0x02be:  mov    %ebx,(%esp)
087dd021 +0x02c1:  call   0807e3b0 <_init+0xca8>
087dd026 +0x02c6:  mov    %ebx,0x4(%esp)
087dd02a +0x02ca:  mov    %eax,0x8(%esp)
087dd02e +0x02ce:  lea    -0x28(%ebp),%eax
087dd031 +0x02d1:  mov    %eax,(%esp)
087dd034 +0x02d4:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087dd039 +0x02d9:  lea    -0x28(%ebp),%edx
087dd03c +0x02dc:  lea    -0x34(%ebp),%ebx
087dd03f +0x02df:  mov    %edx,0x4(%esp)
087dd043 +0x02e3:  mov    %ebx,(%esp)
087dd046 +0x02e6:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
087dd04b +0x02eb:  call   086dce30 <_ZNSt6locale7classicEv>  ; std::locale::classic()
087dd050 +0x02f0:  lea    -0x3c(%ebp),%ecx
087dd053 +0x02f3:  mov    %eax,0x4(%esp)
087dd057 +0x02f7:  mov    %ecx,(%esp)
087dd05a +0x02fa:  call   086dadf0 <_ZNSt6localeC1ERKS_>  ; std::locale::locale(std::locale const&)
087dd05f +0x02ff:  mov    -0x34(%ebp),%eax
087dd062 +0x0302:  mov    -0xc(%eax),%eax
087dd065 +0x0305:  test   %eax,%eax
087dd067 +0x0307:  mov    %eax,-0x7c(%ebp)
087dd06a +0x030a:  je     087dd0e8 <+0x388>
087dd06c +0x030c:  xor    %esi,%esi
087dd06e +0x030e:  jmp    087dd0cf <+0x36f>
087dd070 +0x0310:  mov    %ebx,(%esp)
087dd073 +0x0313:  call   08708e00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2a10>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2a10
087dd078 +0x0318:  mov    (%ebx),%eax
087dd07a +0x031a:  lea    (%eax,%esi,1),%edx
087dd07d +0x031d:  mov    -0x4(%eax),%eax
087dd080 +0x0320:  mov    %edx,-0x74(%ebp)
087dd083 +0x0323:  test   %eax,%eax
087dd085 +0x0325:  js     087dd3ad <+0x64d>
087dd08b +0x032b:  mov    %ebx,(%esp)
087dd08e +0x032e:  call   08708e00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2a10>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2a10
087dd093 +0x0333:  mov    (%ebx),%eax
087dd095 +0x0335:  mov    -0x74(%ebp),%ecx
087dd098 +0x0338:  add    %esi,%eax
087dd09a +0x033a:  mov    %ecx,-0x78(%ebp)
087dd09d +0x033d:  mov    %eax,%edx
087dd09f +0x033f:  mov    %eax,-0x74(%ebp)
087dd0a2 +0x0342:  movsbl (%edx),%edx
087dd0a5 +0x0345:  lea    -0x3c(%ebp),%ecx
087dd0a8 +0x0348:  mov    %ecx,(%esp)
087dd0ab +0x034b:  mov    %edx,-0x74(%ebp)
087dd0ae +0x034e:  call   086eb2c0 <_GLOBAL__I_locale_inst.cc+0xf80>  ; global constructors keyed to locale_inst.cc+0xf80
087dd0b3 +0x0353:  mov    (%eax),%edx
087dd0b5 +0x0355:  mov    -0x74(%ebp),%ecx
087dd0b8 +0x0358:  mov    %eax,(%esp)
087dd0bb +0x035b:  mov    %ecx,0x4(%esp)
087dd0bf +0x035f:  call   *0x10(%edx)
087dd0c2 +0x0362:  mov    -0x78(%ebp),%edx
087dd0c5 +0x0365:  add    $0x1,%esi
087dd0c8 +0x0368:  mov    %al,(%edx)
087dd0ca +0x036a:  cmp    %esi,-0x7c(%ebp)
087dd0cd +0x036d:  jbe    087dd0e8 <+0x388>
087dd0cf +0x036f:  mov    (%ebx),%eax
087dd0d1 +0x0371:  mov    -0x4(%eax),%edx
087dd0d4 +0x0374:  test   %edx,%edx
087dd0d6 +0x0376:  jns    087dd070 <+0x310>
087dd0d8 +0x0378:  add    %esi,%eax
087dd0da +0x037a:  mov    %eax,-0x78(%ebp)
087dd0dd +0x037d:  mov    %eax,%edx
087dd0df +0x037f:  mov    %eax,-0x74(%ebp)
087dd0e2 +0x0382:  jmp    087dd0a2 <+0x342>
087dd0e4 +0x0384:  lea    0x0(%esi,%eiz,1),%esi
087dd0e8 +0x0388:  lea    -0x38(%ebp),%esi
087dd0eb +0x038b:  mov    %ebx,0x4(%esp)
087dd0ef +0x038f:  mov    %esi,(%esp)
087dd0f2 +0x0392:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
087dd0f7 +0x0397:  lea    -0x3c(%ebp),%eax
087dd0fa +0x039a:  mov    %eax,(%esp)
087dd0fd +0x039d:  call   086dbcd0 <_ZNSt6localeD1Ev>  ; std::locale::~locale()
087dd102 +0x03a2:  lea    -0x28(%ebp),%edx
087dd105 +0x03a5:  mov    %esi,0x4(%esp)
087dd109 +0x03a9:  mov    %edx,(%esp)
087dd10c +0x03ac:  call   08707c30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1840>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1840
087dd111 +0x03b1:  mov    -0x38(%ebp),%eax
087dd114 +0x03b4:  mov    $&_ZNSs4_Rep20_S_empty_rep_storageE,%ecx
087dd119 +0x03b9:  sub    $0xc,%eax
087dd11c +0x03bc:  cmp    %eax,%ecx
087dd11e +0x03be:  jne    087dd3ce <+0x66e>
087dd124 +0x03c4:  mov    -0x34(%ebp),%eax
087dd127 +0x03c7:  mov    $&_ZNSs4_Rep20_S_empty_rep_storageE,%edx
087dd12c +0x03cc:  sub    $0xc,%eax
087dd12f +0x03cf:  cmp    %eax,%edx
087dd131 +0x03d1:  jne    087dd3fb <+0x69b>
087dd137 +0x03d7:  lea    -0x28(%ebp),%ecx
087dd13a +0x03da:  lea    -0x54(%ebp),%esi
087dd13d +0x03dd:  mov    %ecx,0x4(%esp)
087dd141 +0x03e1:  mov    %esi,(%esp)
087dd144 +0x03e4:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
087dd149 +0x03e9:  movzwl -0x7e(%ebp),%eax
087dd14d +0x03ed:  lea    -0x5c(%ebp),%ebx
087dd150 +0x03f0:  mov    %esi,0x4(%esp)
087dd154 +0x03f4:  mov    %ebx,(%esp)
087dd157 +0x03f7:  mov    %ax,-0x50(%ebp)
087dd15b +0x03fb:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
087dd160 +0x0400:  movzwl -0x50(%ebp),%eax
087dd164 +0x0404:  lea    -0x70(%ebp),%edx
087dd167 +0x0407:  mov    %ebx,0x8(%esp)
087dd16b +0x040b:  mov    %edx,(%esp)
087dd16e +0x040e:  mov    %ax,-0x58(%ebp)
087dd172 +0x0412:  mov    &_ZZN5boost9gregorian10greg_month17get_month_map_ptrEvE13month_map_ptr,%eax
087dd177 +0x0417:  mov    %eax,0x4(%esp)
087dd17b +0x041b:  call   087dda50 <+0xcf0>
087dd180 +0x0420:  mov    -0x5c(%ebp),%eax
087dd183 +0x0423:  mov    $&_ZNSs4_Rep20_S_empty_rep_storageE,%ecx
087dd188 +0x0428:  sub    $0x4,%esp
087dd18b +0x042b:  sub    $0xc,%eax
087dd18e +0x042e:  cmp    %eax,%ecx
087dd190 +0x0430:  jne    087dd448 <+0x6e8>
087dd196 +0x0436:  mov    -0x54(%ebp),%eax
087dd199 +0x0439:  mov    $&_ZNSs4_Rep20_S_empty_rep_storageE,%edx
087dd19e +0x043e:  sub    $0xc,%eax
087dd1a1 +0x0441:  cmp    %eax,%edx
087dd1a3 +0x0443:  jne    087dd476 <+0x716>
087dd1a9 +0x0449:  addw   $0x1,-0x7e(%ebp)
087dd1ae +0x044e:  addl   $0x4,-0x84(%ebp)
087dd1b5 +0x0455:  cmpw   $0xd,-0x7e(%ebp)
087dd1ba +0x045a:  jne    087dce90 <+0x130>
087dd1c0 +0x0460:  mov    -0x28(%ebp),%eax
087dd1c3 +0x0463:  sub    $0xc,%eax
087dd1c6 +0x0466:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
087dd1cb +0x046b:  jne    087dd4b9 <+0x759>
087dd1d1 +0x0471:  mov    &_ZZN5boost9gregorian10greg_month17get_month_map_ptrEvE13month_map_ptr,%eax
087dd1d6 +0x0476:  jmp    087dcd85 <+0x25>
087dd1db +0x047b:  mov    %eax,-0x88(%ebp)
087dd1e1 +0x0481:  movl   $&_ZGVZN5boost9gregorian10greg_month17get_month_map_ptrEvE13month_map_ptr,(%esp)
087dd1e8 +0x0488:  call   087252c0 <__cxa_guard_abort>
087dd1ed +0x048d:  mov    -0x88(%ebp),%eax
087dd1f3 +0x0493:  mov    %eax,(%esp)
087dd1f6 +0x0496:  call   08ae3750 <_Unwind_Resume>
087dd1fb +0x049b:  mov    %eax,(%esp)
087dd1fe +0x049e:  call   08ae3750 <_Unwind_Resume>
087dd203 +0x04a3:  lea    -0x28(%ebp),%ecx
087dd206 +0x04a6:  mov    %eax,-0x88(%ebp)
087dd20c +0x04ac:  mov    %ecx,(%esp)
087dd20f +0x04af:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
087dd214 +0x04b4:  mov    -0x88(%ebp),%eax
087dd21a +0x04ba:  jmp    087dd1fb <+0x49b>
087dd21c +0x04bc:  mov    %eax,-0x88(%ebp)
087dd222 +0x04c2:  mov    %edi,(%esp)
087dd225 +0x04c5:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
087dd22a +0x04ca:  mov    -0x88(%ebp),%eax
087dd230 +0x04d0:  jmp    087dd203 <+0x4a3>
087dd232 +0x04d2:  lea    -0x3c(%ebp),%edx
087dd235 +0x04d5:  mov    %eax,-0x88(%ebp)
087dd23b +0x04db:  mov    %edx,(%esp)
087dd23e +0x04de:  call   086dbcd0 <_ZNSt6localeD1Ev>  ; std::locale::~locale()
087dd243 +0x04e3:  mov    -0x88(%ebp),%eax
087dd249 +0x04e9:  jmp    087dd21c <+0x4bc>
087dd24b +0x04eb:  mov    %esi,-0x74(%ebp)
087dd24e +0x04ee:  jmp    087dcf17 <+0x1b7>
087dd253 +0x04f3:  lea    -0x30(%ebp),%edx
087dd256 +0x04f6:  mov    %eax,-0x88(%ebp)
087dd25c +0x04fc:  mov    %edx,(%esp)
087dd25f +0x04ff:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
087dd264 +0x0504:  mov    -0x88(%ebp),%eax
087dd26a +0x050a:  jmp    087dd21c <+0x4bc>
087dd26c +0x050c:  mov    $&data#bb92cc41(.plt),%edx
087dd271 +0x0511:  test   %edx,%edx
087dd273 +0x0513:  je     087dd2c6 <+0x566>
087dd275 +0x0515:  or     $0xffffffff,%edx
087dd278 +0x0518:  lock xadd %edx,0x8(%eax)
087dd27d +0x051d:  test   %edx,%edx
087dd27f +0x051f:  jg     087dcf8d <+0x22d>
087dd285 +0x0525:  lea    -0x1a(%ebp),%ecx
087dd288 +0x0528:  mov    %ecx,0x4(%esp)
087dd28c +0x052c:  mov    %eax,(%esp)
087dd28f +0x052f:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087dd294 +0x0534:  jmp    087dcf8d <+0x22d>
087dd299 +0x0539:  mov    $&data#bb92cc41(.plt),%edx
087dd29e +0x053e:  test   %edx,%edx
087dd2a0 +0x0540:  je     087dd2d1 <+0x571>
087dd2a2 +0x0542:  or     $0xffffffff,%edx
087dd2a5 +0x0545:  lock xadd %edx,0x8(%eax)
087dd2aa +0x054a:  test   %edx,%edx
087dd2ac +0x054c:  jg     087dcfa0 <+0x240>
087dd2b2 +0x0552:  lea    -0x1b(%ebp),%edx
087dd2b5 +0x0555:  mov    %edx,0x4(%esp)
087dd2b9 +0x0559:  mov    %eax,(%esp)
087dd2bc +0x055c:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087dd2c1 +0x0561:  jmp    087dcfa0 <+0x240>
087dd2c6 +0x0566:  mov    0x8(%eax),%edx
087dd2c9 +0x0569:  lea    -0x1(%edx),%ecx
087dd2cc +0x056c:  mov    %ecx,0x8(%eax)
087dd2cf +0x056f:  jmp    087dd27d <+0x51d>
087dd2d1 +0x0571:  mov    0x8(%eax),%edx
087dd2d4 +0x0574:  lea    -0x1(%edx),%ecx
087dd2d7 +0x0577:  mov    %ecx,0x8(%eax)
087dd2da +0x057a:  jmp    087dd2aa <+0x54a>
087dd2dc +0x057c:  mov    %eax,-0x88(%ebp)
087dd2e2 +0x0582:  mov    %esi,(%esp)
087dd2e5 +0x0585:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
087dd2ea +0x058a:  mov    -0x88(%ebp),%eax
087dd2f0 +0x0590:  jmp    087dd203 <+0x4a3>
087dd2f5 +0x0595:  mov    %eax,-0x88(%ebp)
087dd2fb +0x059b:  mov    %ebx,(%esp)
087dd2fe +0x059e:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
087dd303 +0x05a3:  mov    -0x88(%ebp),%eax
087dd309 +0x05a9:  jmp    087dd2dc <+0x57c>
087dd30b +0x05ab:  mov    $&data#bb92cc41(.plt),%edx
087dd310 +0x05b0:  test   %edx,%edx
087dd312 +0x05b2:  je     087dd365 <+0x605>
087dd314 +0x05b4:  or     $0xffffffff,%edx
087dd317 +0x05b7:  lock xadd %edx,0x8(%eax)
087dd31c +0x05bc:  test   %edx,%edx
087dd31e +0x05be:  jg     087dcfff <+0x29f>
087dd324 +0x05c4:  lea    -0x1c(%ebp),%edx
087dd327 +0x05c7:  mov    %edx,0x4(%esp)
087dd32b +0x05cb:  mov    %eax,(%esp)
087dd32e +0x05ce:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087dd333 +0x05d3:  jmp    087dcfff <+0x29f>
087dd338 +0x05d8:  mov    $&data#bb92cc41(.plt),%edx
087dd33d +0x05dd:  test   %edx,%edx
087dd33f +0x05df:  je     087dd370 <+0x610>
087dd341 +0x05e1:  or     $0xffffffff,%edx
087dd344 +0x05e4:  lock xadd %edx,0x8(%eax)
087dd349 +0x05e9:  test   %edx,%edx
087dd34b +0x05eb:  jg     087dd012 <+0x2b2>
087dd351 +0x05f1:  lea    -0x1d(%ebp),%edx
087dd354 +0x05f4:  mov    %edx,0x4(%esp)
087dd358 +0x05f8:  mov    %eax,(%esp)
087dd35b +0x05fb:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087dd360 +0x0600:  jmp    087dd012 <+0x2b2>
087dd365 +0x0605:  mov    0x8(%eax),%edx
087dd368 +0x0608:  lea    -0x1(%edx),%ecx
087dd36b +0x060b:  mov    %ecx,0x8(%eax)
087dd36e +0x060e:  jmp    087dd31c <+0x5bc>
087dd370 +0x0610:  mov    0x8(%eax),%edx
087dd373 +0x0613:  lea    -0x1(%edx),%ecx
087dd376 +0x0616:  mov    %ecx,0x8(%eax)
087dd379 +0x0619:  jmp    087dd349 <+0x5e9>
087dd37b +0x061b:  mov    %eax,-0x88(%ebp)
087dd381 +0x0621:  mov    %ebx,(%esp)
087dd384 +0x0624:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
087dd389 +0x0629:  mov    -0x88(%ebp),%eax
087dd38f +0x062f:  jmp    087dd203 <+0x4a3>
087dd394 +0x0634:  lea    -0x3c(%ebp),%ecx
087dd397 +0x0637:  mov    %eax,-0x88(%ebp)
087dd39d +0x063d:  mov    %ecx,(%esp)
087dd3a0 +0x0640:  call   086dbcd0 <_ZNSt6localeD1Ev>  ; std::locale::~locale()
087dd3a5 +0x0645:  mov    -0x88(%ebp),%eax
087dd3ab +0x064b:  jmp    087dd37b <+0x61b>
087dd3ad +0x064d:  mov    %edx,-0x78(%ebp)
087dd3b0 +0x0650:  mov    -0x74(%ebp),%edx
087dd3b3 +0x0653:  jmp    087dd0a2 <+0x342>
087dd3b8 +0x0658:  mov    %eax,-0x88(%ebp)
087dd3be +0x065e:  mov    %esi,(%esp)
087dd3c1 +0x0661:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
087dd3c6 +0x0666:  mov    -0x88(%ebp),%eax
087dd3cc +0x066c:  jmp    087dd37b <+0x61b>
087dd3ce +0x066e:  mov    $&data#bb92cc41(.plt),%edx
087dd3d3 +0x0673:  test   %edx,%edx
087dd3d5 +0x0675:  je     087dd428 <+0x6c8>
087dd3d7 +0x0677:  or     $0xffffffff,%edx
087dd3da +0x067a:  lock xadd %edx,0x8(%eax)
087dd3df +0x067f:  test   %edx,%edx
087dd3e1 +0x0681:  jg     087dd124 <+0x3c4>
087dd3e7 +0x0687:  lea    -0x1e(%ebp),%edx
087dd3ea +0x068a:  mov    %edx,0x4(%esp)
087dd3ee +0x068e:  mov    %eax,(%esp)
087dd3f1 +0x0691:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087dd3f6 +0x0696:  jmp    087dd124 <+0x3c4>
087dd3fb +0x069b:  mov    $&data#bb92cc41(.plt),%edx
087dd400 +0x06a0:  test   %edx,%edx
087dd402 +0x06a2:  je     087dd433 <+0x6d3>
087dd404 +0x06a4:  or     $0xffffffff,%edx
087dd407 +0x06a7:  lock xadd %edx,0x8(%eax)
087dd40c +0x06ac:  test   %edx,%edx
087dd40e +0x06ae:  jg     087dd137 <+0x3d7>
087dd414 +0x06b4:  lea    -0x1f(%ebp),%edx
087dd417 +0x06b7:  mov    %edx,0x4(%esp)
087dd41b +0x06bb:  mov    %eax,(%esp)
087dd41e +0x06be:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087dd423 +0x06c3:  jmp    087dd137 <+0x3d7>
087dd428 +0x06c8:  mov    0x8(%eax),%edx
087dd42b +0x06cb:  lea    -0x1(%edx),%ecx
087dd42e +0x06ce:  mov    %ecx,0x8(%eax)
087dd431 +0x06d1:  jmp    087dd3df <+0x67f>
087dd433 +0x06d3:  mov    0x8(%eax),%edx
087dd436 +0x06d6:  lea    -0x1(%edx),%ecx
087dd439 +0x06d9:  mov    %ecx,0x8(%eax)
087dd43c +0x06dc:  jmp    087dd40c <+0x6ac>
087dd43e +0x06de:  jmp    087dd2dc <+0x57c>
087dd443 +0x06e3:  jmp    087dd2f5 <+0x595>
087dd448 +0x06e8:  mov    $&data#bb92cc41(.plt),%edx
087dd44d +0x06ed:  test   %edx,%edx
087dd44f +0x06ef:  nop
087dd450 +0x06f0:  je     087dd4a3 <+0x743>
087dd452 +0x06f2:  or     $0xffffffff,%edx
087dd455 +0x06f5:  lock xadd %edx,0x8(%eax)
087dd45a +0x06fa:  test   %edx,%edx
087dd45c +0x06fc:  jg     087dd196 <+0x436>
087dd462 +0x0702:  lea    -0x20(%ebp),%edx
087dd465 +0x0705:  mov    %edx,0x4(%esp)
087dd469 +0x0709:  mov    %eax,(%esp)
087dd46c +0x070c:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087dd471 +0x0711:  jmp    087dd196 <+0x436>
087dd476 +0x0716:  mov    $&data#bb92cc41(.plt),%edx
087dd47b +0x071b:  test   %edx,%edx
087dd47d +0x071d:  je     087dd4ae <+0x74e>
087dd47f +0x071f:  or     $0xffffffff,%edx
087dd482 +0x0722:  lock xadd %edx,0x8(%eax)
087dd487 +0x0727:  test   %edx,%edx
087dd489 +0x0729:  jg     087dd1a9 <+0x449>
087dd48f +0x072f:  lea    -0x21(%ebp),%edx
087dd492 +0x0732:  mov    %edx,0x4(%esp)
087dd496 +0x0736:  mov    %eax,(%esp)
087dd499 +0x0739:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087dd49e +0x073e:  jmp    087dd1a9 <+0x449>
087dd4a3 +0x0743:  mov    0x8(%eax),%edx
087dd4a6 +0x0746:  lea    -0x1(%edx),%ecx
087dd4a9 +0x0749:  mov    %ecx,0x8(%eax)
087dd4ac +0x074c:  jmp    087dd45a <+0x6fa>
087dd4ae +0x074e:  mov    0x8(%eax),%edx
087dd4b1 +0x0751:  lea    -0x1(%edx),%ecx
087dd4b4 +0x0754:  mov    %ecx,0x8(%eax)
087dd4b7 +0x0757:  jmp    087dd487 <+0x727>
087dd4b9 +0x0759:  mov    $&data#bb92cc41(.plt),%edx
087dd4be +0x075e:  test   %edx,%edx
087dd4c0 +0x0760:  je     087dd50a <+0x7aa>
087dd4c2 +0x0762:  or     $0xffffffff,%edx
087dd4c5 +0x0765:  lock xadd %edx,0x8(%eax)
087dd4ca +0x076a:  test   %edx,%edx
087dd4cc +0x076c:  jg     087dd1d1 <+0x471>
087dd4d2 +0x0772:  lea    -0x22(%ebp),%edx
087dd4d5 +0x0775:  mov    %edx,0x4(%esp)
087dd4d9 +0x0779:  mov    %eax,(%esp)
087dd4dc +0x077c:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087dd4e1 +0x0781:  jmp    087dd1d1 <+0x471>
087dd4e6 +0x0786:  mov    %eax,(%esp)
087dd4e9 +0x0789:  call   08725ce0 <__cxa_begin_catch>
087dd4ee +0x078e:  mov    0x8(%ebx),%eax
087dd4f1 +0x0791:  mov    %ebx,(%esp)
087dd4f4 +0x0794:  mov    %eax,0x4(%esp)
087dd4f8 +0x0798:  call   087de410 <+0x16b0>
087dd4fd +0x079d:  mov    %ebx,(%esp)
087dd500 +0x07a0:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
087dd505 +0x07a5:  call   08724be0 <__cxa_rethrow>
087dd50a +0x07aa:  mov    0x8(%eax),%edx
087dd50d +0x07ad:  lea    -0x1(%edx),%ecx
087dd510 +0x07b0:  mov    %ecx,0x8(%eax)
087dd513 +0x07b3:  jmp    087dd4ca <+0x76a>
087dd515 +0x07b5:  mov    %eax,-0x88(%ebp)
087dd51b +0x07bb:  call   08725c30 <__cxa_end_catch>
087dd520 +0x07c0:  mov    -0x88(%ebp),%eax
087dd526 +0x07c6:  jmp    087dd1db <+0x47b>
087dd52b +0x07cb:  jmp    087dd515 <+0x7b5>
087dd52d +0x07cd:  nop
087dd52e +0x07ce:  nop
087dd52f +0x07cf:  nop
087dd530 +0x07d0:  push   %ebp
087dd531 +0x07d1:  mov    %esp,%ebp
087dd533 +0x07d3:  mov    0x8(%ebp),%eax
087dd536 +0x07d6:  movl   $&_ZTVN5boost6detail15sp_counted_baseE+0x8,(%eax)
087dd53c +0x07dc:  pop    %ebp
087dd53d +0x07dd:  ret
087dd53e +0x07de:  nop
087dd53f +0x07df:  nop
087dd540 +0x07e0:  push   %ebp
087dd541 +0x07e1:  xor    %eax,%eax
087dd543 +0x07e3:  mov    %esp,%ebp
087dd545 +0x07e5:  pop    %ebp
087dd546 +0x07e6:  ret
087dd547 +0x07e7:  nop
087dd548 +0x07e8:  nop
087dd549 +0x07e9:  nop
087dd54a +0x07ea:  nop
087dd54b +0x07eb:  nop
087dd54c +0x07ec:  nop
087dd54d +0x07ed:  nop
087dd54e +0x07ee:  nop
087dd54f +0x07ef:  nop
087dd550 +0x07f0:  push   %ebp
087dd551 +0x07f1:  mov    $0x1,%eax
087dd556 +0x07f6:  mov    %esp,%ebp
087dd558 +0x07f8:  pop    %ebp
087dd559 +0x07f9:  ret
087dd55a +0x07fa:  nop
087dd55b +0x07fb:  nop
087dd55c +0x07fc:  nop
087dd55d +0x07fd:  nop
087dd55e +0x07fe:  nop
087dd55f +0x07ff:  nop
087dd560 +0x0800:  push   %ebp
087dd561 +0x0801:  mov    %esp,%ebp
087dd563 +0x0803:  mov    0x8(%ebp),%eax
087dd566 +0x0806:  pop    %ebp
087dd567 +0x0807:  mov    0x24(%eax),%eax
087dd56a +0x080a:  ret
087dd56b +0x080b:  nop
087dd56c +0x080c:  nop
087dd56d +0x080d:  nop
087dd56e +0x080e:  nop
087dd56f +0x080f:  nop
087dd570 +0x0810:  push   %ebp
087dd571 +0x0811:  mov    %esp,%ebp
087dd573 +0x0813:  mov    0x8(%ebp),%eax
087dd576 +0x0816:  pop    %ebp
087dd577 +0x0817:  mov    0x28(%eax),%eax
087dd57a +0x081a:  ret
087dd57b +0x081b:  nop
087dd57c +0x081c:  nop
087dd57d +0x081d:  nop
087dd57e +0x081e:  nop
087dd57f +0x081f:  nop
087dd580 +0x0820:  push   %ebp
087dd581 +0x0821:  mov    %esp,%ebp
087dd583 +0x0823:  pop    %ebp
087dd584 +0x0824:  ret
087dd585 +0x0825:  nop
087dd586 +0x0826:  nop
087dd587 +0x0827:  nop
087dd588 +0x0828:  nop
087dd589 +0x0829:  nop
087dd58a +0x082a:  nop
087dd58b +0x082b:  nop
087dd58c +0x082c:  nop
087dd58d +0x082d:  nop
087dd58e +0x082e:  nop
087dd58f +0x082f:  nop
087dd590 +0x0830:  push   %ebp
087dd591 +0x0831:  mov    %esp,%ebp
087dd593 +0x0833:  pop    %ebp
087dd594 +0x0834:  ret
087dd595 +0x0835:  nop
087dd596 +0x0836:  nop
087dd597 +0x0837:  nop
087dd598 +0x0838:  nop
087dd599 +0x0839:  nop
087dd59a +0x083a:  nop
087dd59b +0x083b:  nop
087dd59c +0x083c:  nop
087dd59d +0x083d:  nop
087dd59e +0x083e:  nop
087dd59f +0x083f:  nop
087dd5a0 +0x0840:  push   %ebp
087dd5a1 +0x0841:  xor    %eax,%eax
087dd5a3 +0x0843:  mov    %esp,%ebp
087dd5a5 +0x0845:  pop    %ebp
087dd5a6 +0x0846:  ret
087dd5a7 +0x0847:  nop
087dd5a8 +0x0848:  nop
087dd5a9 +0x0849:  nop
087dd5aa +0x084a:  nop
087dd5ab +0x084b:  nop
087dd5ac +0x084c:  nop
087dd5ad +0x084d:  nop
087dd5ae +0x084e:  nop
087dd5af +0x084f:  nop
087dd5b0 +0x0850:  push   %ebp
087dd5b1 +0x0851:  mov    $0x1,%eax
087dd5b6 +0x0856:  mov    %esp,%ebp
087dd5b8 +0x0858:  pop    %ebp
087dd5b9 +0x0859:  ret
087dd5ba +0x085a:  nop
087dd5bb +0x085b:  nop
087dd5bc +0x085c:  nop
087dd5bd +0x085d:  nop
087dd5be +0x085e:  nop
087dd5bf +0x085f:  nop
087dd5c0 +0x0860:  push   %ebp
087dd5c1 +0x0861:  mov    $0x1,%eax
087dd5c6 +0x0866:  mov    %esp,%ebp
087dd5c8 +0x0868:  pop    %ebp
087dd5c9 +0x0869:  ret
087dd5ca +0x086a:  nop
087dd5cb +0x086b:  nop
087dd5cc +0x086c:  nop
087dd5cd +0x086d:  nop
087dd5ce +0x086e:  nop
087dd5cf +0x086f:  nop
087dd5d0 +0x0870:  push   %ebp
087dd5d1 +0x0871:  mov    %esp,%ebp
087dd5d3 +0x0873:  mov    0x8(%ebp),%eax
087dd5d6 +0x0876:  pop    %ebp
087dd5d7 +0x0877:  mov    0x20(%eax),%eax
087dd5da +0x087a:  ret
087dd5db +0x087b:  nop
087dd5dc +0x087c:  nop
087dd5dd +0x087d:  nop
087dd5de +0x087e:  nop
087dd5df +0x087f:  nop
087dd5e0 +0x0880:  push   %ebp
087dd5e1 +0x0881:  mov    %esp,%ebp
087dd5e3 +0x0883:  mov    0x8(%ebp),%eax
087dd5e6 +0x0886:  pop    %ebp
087dd5e7 +0x0887:  mov    0x24(%eax),%eax
087dd5ea +0x088a:  ret
087dd5eb +0x088b:  nop
087dd5ec +0x088c:  nop
087dd5ed +0x088d:  nop
087dd5ee +0x088e:  nop
087dd5ef +0x088f:  nop
087dd5f0 +0x0890:  push   %ebp
087dd5f1 +0x0891:  mov    %esp,%ebp
087dd5f3 +0x0893:  pop    %ebp
087dd5f4 +0x0894:  ret
087dd5f5 +0x0895:  nop
087dd5f6 +0x0896:  nop
087dd5f7 +0x0897:  nop
087dd5f8 +0x0898:  nop
087dd5f9 +0x0899:  nop
087dd5fa +0x089a:  nop
087dd5fb +0x089b:  nop
087dd5fc +0x089c:  nop
087dd5fd +0x089d:  nop
087dd5fe +0x089e:  nop
087dd5ff +0x089f:  nop
087dd600 +0x08a0:  push   %ebp
087dd601 +0x08a1:  mov    %esp,%ebp
087dd603 +0x08a3:  pop    %ebp
087dd604 +0x08a4:  ret
087dd605 +0x08a5:  nop
087dd606 +0x08a6:  nop
087dd607 +0x08a7:  nop
087dd608 +0x08a8:  nop
087dd609 +0x08a9:  nop
087dd60a +0x08aa:  nop
087dd60b +0x08ab:  nop
087dd60c +0x08ac:  nop
087dd60d +0x08ad:  nop
087dd60e +0x08ae:  nop
087dd60f +0x08af:  nop
087dd610 +0x08b0:  push   %ebp
087dd611 +0x08b1:  xor    %eax,%eax
087dd613 +0x08b3:  mov    %esp,%ebp
087dd615 +0x08b5:  pop    %ebp
087dd616 +0x08b6:  ret
087dd617 +0x08b7:  nop
087dd618 +0x08b8:  nop
087dd619 +0x08b9:  nop
087dd61a +0x08ba:  nop
087dd61b +0x08bb:  nop
087dd61c +0x08bc:  nop
087dd61d +0x08bd:  nop
087dd61e +0x08be:  nop
087dd61f +0x08bf:  nop
087dd620 +0x08c0:  push   %ebp
087dd621 +0x08c1:  mov    $0x1,%eax
087dd626 +0x08c6:  mov    %esp,%ebp
087dd628 +0x08c8:  pop    %ebp
087dd629 +0x08c9:  ret
087dd62a +0x08ca:  nop
087dd62b +0x08cb:  nop
087dd62c +0x08cc:  nop
087dd62d +0x08cd:  nop
087dd62e +0x08ce:  nop
087dd62f +0x08cf:  nop
087dd630 +0x08d0:  push   %ebp
087dd631 +0x08d1:  mov    %esp,%ebp
087dd633 +0x08d3:  sub    $0x8,%esp
087dd636 +0x08d6:  mov    0x8(%ebp),%eax
087dd639 +0x08d9:  movl   $&_ZTVN5boost6detail15sp_counted_baseE+0x8,(%eax)
087dd63f +0x08df:  leave
087dd640 +0x08e0:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
087dd645 +0x08e5:  nop
087dd646 +0x08e6:  nop
087dd647 +0x08e7:  nop
087dd648 +0x08e8:  nop
087dd649 +0x08e9:  nop
087dd64a +0x08ea:  nop
087dd64b +0x08eb:  nop
087dd64c +0x08ec:  nop
087dd64d +0x08ed:  nop
087dd64e +0x08ee:  nop
087dd64f +0x08ef:  nop
087dd650 +0x08f0:  push   %ebp
087dd651 +0x08f1:  mov    %esp,%ebp
087dd653 +0x08f3:  sub    $0x8,%esp
087dd656 +0x08f6:  mov    0x8(%ebp),%eax
087dd659 +0x08f9:  movl   $&_ZTVN5boost9date_time14date_names_putINS_9gregorian17greg_facet_configEwSt19ostreambuf_iteratorIwSt11char_traitsIwEEEE+0x8,(%eax)
087dd65f +0x08ff:  leave
087dd660 +0x0900:  jmp    086dada0 <_ZNSt6locale5facetD1Ev>  ; std::locale::facet::~facet()
087dd665 +0x0905:  nop
087dd666 +0x0906:  nop
087dd667 +0x0907:  nop
087dd668 +0x0908:  nop
087dd669 +0x0909:  nop
087dd66a +0x090a:  nop
087dd66b +0x090b:  nop
087dd66c +0x090c:  nop
087dd66d +0x090d:  nop
087dd66e +0x090e:  nop
087dd66f +0x090f:  nop
087dd670 +0x0910:  push   %ebp
087dd671 +0x0911:  mov    %esp,%ebp
087dd673 +0x0913:  sub    $0x8,%esp
087dd676 +0x0916:  mov    0x8(%ebp),%eax
087dd679 +0x0919:  movl   $&_ZTVN5boost9date_time14date_names_putINS_9gregorian17greg_facet_configEcSt19ostreambuf_iteratorIcSt11char_traitsIcEEEE+0x8,(%eax)
087dd67f +0x091f:  leave
087dd680 +0x0920:  jmp    086dada0 <_ZNSt6locale5facetD1Ev>  ; std::locale::facet::~facet()
087dd685 +0x0925:  nop
087dd686 +0x0926:  nop
087dd687 +0x0927:  nop
087dd688 +0x0928:  nop
087dd689 +0x0929:  nop
087dd68a +0x092a:  nop
087dd68b +0x092b:  nop
087dd68c +0x092c:  nop
087dd68d +0x092d:  nop
087dd68e +0x092e:  nop
087dd68f +0x092f:  nop
087dd690 +0x0930:  push   %ebp
087dd691 +0x0931:  mov    $&data#bb92cc41(.plt),%eax
087dd696 +0x0936:  mov    %esp,%ebp
087dd698 +0x0938:  push   %ebx
087dd699 +0x0939:  sub    $0x14,%esp
087dd69c +0x093c:  test   %eax,%eax
087dd69e +0x093e:  mov    0x8(%ebp),%ebx
087dd6a1 +0x0941:  je     087dd6d1 <+0x971>
087dd6a3 +0x0943:  mov    $0xffffffff,%eax
087dd6a8 +0x0948:  lock xadd %eax,(%ebx)
087dd6ac +0x094c:  cmp    $0x1,%eax
087dd6af +0x094f:  je     087dd6b8 <+0x958>
087dd6b1 +0x0951:  add    $0x14,%esp
087dd6b4 +0x0954:  pop    %ebx
087dd6b5 +0x0955:  pop    %ebp
087dd6b6 +0x0956:  ret
087dd6b7 +0x0957:  nop
087dd6b8 +0x0958:  test   %ebx,%ebx
087dd6ba +0x095a:  je     087dd6b1 <+0x951>
087dd6bc +0x095c:  mov    %ebx,(%esp)
087dd6bf +0x095f:  call   086db910 <_ZNSt6locale5_ImplD1Ev>  ; std::locale::_Impl::~_Impl()
087dd6c4 +0x0964:  mov    %ebx,0x8(%ebp)
087dd6c7 +0x0967:  add    $0x14,%esp
087dd6ca +0x096a:  pop    %ebx
087dd6cb +0x096b:  pop    %ebp
087dd6cc +0x096c:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
087dd6d1 +0x0971:  mov    (%ebx),%eax
087dd6d3 +0x0973:  lea    -0x1(%eax),%edx
087dd6d6 +0x0976:  mov    %edx,(%ebx)
087dd6d8 +0x0978:  jmp    087dd6ac <+0x94c>
087dd6da +0x097a:  nop
087dd6db +0x097b:  nop
087dd6dc +0x097c:  nop
087dd6dd +0x097d:  nop
087dd6de +0x097e:  nop
087dd6df +0x097f:  nop
087dd6e0 +0x0980:  push   %ebp
087dd6e1 +0x0981:  mov    %esp,%ebp
087dd6e3 +0x0983:  push   %esi
087dd6e4 +0x0984:  push   %ebx
087dd6e5 +0x0985:  sub    $0x20,%esp
087dd6e8 +0x0988:  mov    0x8(%ebp),%esi
087dd6eb +0x098b:  movl   $0x14,(%esp)
087dd6f2 +0x0992:  call   08724450 <_Znwj>  ; operator new(unsigned int)
087dd6f7 +0x0997:  movl   $0x1,0x8(%esp)
087dd6ff +0x099f:  mov    %eax,%ebx
087dd701 +0x09a1:  mov    0xc(%ebp),%eax
087dd704 +0x09a4:  mov    (%eax),%eax
087dd706 +0x09a6:  mov    %ebx,(%esp)
087dd709 +0x09a9:  mov    %eax,0x4(%esp)
087dd70d +0x09ad:  call   086dbb20 <_ZNSt6locale5_ImplC1ERKS0_j>  ; std::locale::_Impl::_Impl(std::locale::_Impl const&, unsigned int)
087dd712 +0x09b2:  mov    0x10(%ebp),%eax
087dd715 +0x09b5:  mov    %ebx,(%esi)
087dd717 +0x09b7:  movl   $&_ZN5boost9date_time14date_names_putINS_9gregorian17greg_facet_configEwSt19ostreambuf_iteratorIwSt11char_traitsIwEEE2idE,0x4(%esp)
087dd71f +0x09bf:  mov    %ebx,(%esp)
087dd722 +0x09c2:  mov    %eax,0x8(%esp)
087dd726 +0x09c6:  call   086db600 <_ZNSt6locale5_Impl16_M_install_facetEPKNS_2idEPKNS_5facetE>  ; std::locale::_Impl::_M_install_facet(std::locale::id const*, std::locale::facet const*)
087dd72b +0x09cb:  mov    (%esi),%eax
087dd72d +0x09cd:  mov    0x10(%eax),%eax
087dd730 +0x09d0:  mov    (%eax),%edx
087dd732 +0x09d2:  test   %edx,%edx
087dd734 +0x09d4:  je     087dd743 <+0x9e3>
087dd736 +0x09d6:  mov    %edx,(%esp)
087dd739 +0x09d9:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
087dd73e +0x09de:  mov    (%esi),%eax
087dd740 +0x09e0:  mov    0x10(%eax),%eax
087dd743 +0x09e3:  movl   $0x0,(%eax)
087dd749 +0x09e9:  add    $0x20,%esp
087dd74c +0x09ec:  pop    %ebx
087dd74d +0x09ed:  pop    %esi
087dd74e +0x09ee:  pop    %ebp
087dd74f +0x09ef:  ret
087dd750 +0x09f0:  mov    %eax,-0xc(%ebp)
087dd753 +0x09f3:  mov    %ebx,(%esp)
087dd756 +0x09f6:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
087dd75b +0x09fb:  mov    -0xc(%ebp),%eax
087dd75e +0x09fe:  mov    %eax,(%esp)
087dd761 +0x0a01:  call   08ae3750 <_Unwind_Resume>
087dd766 +0x0a06:  mov    %eax,(%esp)
087dd769 +0x0a09:  call   08725ce0 <__cxa_begin_catch>
087dd76e +0x0a0e:  mov    (%esi),%eax
087dd770 +0x0a10:  mov    %eax,(%esp)
087dd773 +0x0a13:  call   087dd690 <+0x930>
087dd778 +0x0a18:  call   08724be0 <__cxa_rethrow>
087dd77d +0x0a1d:  mov    %eax,-0xc(%ebp)
087dd780 +0x0a20:  call   08725c30 <__cxa_end_catch>
087dd785 +0x0a25:  mov    -0xc(%ebp),%eax
087dd788 +0x0a28:  mov    %eax,(%esp)
087dd78b +0x0a2b:  call   08ae3750 <_Unwind_Resume>
087dd790 +0x0a30:  push   %ebp
087dd791 +0x0a31:  mov    %esp,%ebp
087dd793 +0x0a33:  push   %esi
087dd794 +0x0a34:  push   %ebx
087dd795 +0x0a35:  sub    $0x20,%esp
087dd798 +0x0a38:  mov    0x8(%ebp),%esi
087dd79b +0x0a3b:  movl   $0x14,(%esp)
087dd7a2 +0x0a42:  call   08724450 <_Znwj>  ; operator new(unsigned int)
087dd7a7 +0x0a47:  movl   $0x1,0x8(%esp)
087dd7af +0x0a4f:  mov    %eax,%ebx
087dd7b1 +0x0a51:  mov    0xc(%ebp),%eax
087dd7b4 +0x0a54:  mov    (%eax),%eax
087dd7b6 +0x0a56:  mov    %ebx,(%esp)
087dd7b9 +0x0a59:  mov    %eax,0x4(%esp)
087dd7bd +0x0a5d:  call   086dbb20 <_ZNSt6locale5_ImplC1ERKS0_j>  ; std::locale::_Impl::_Impl(std::locale::_Impl const&, unsigned int)
087dd7c2 +0x0a62:  mov    0x10(%ebp),%eax
087dd7c5 +0x0a65:  mov    %ebx,(%esi)
087dd7c7 +0x0a67:  movl   $&_ZN5boost9date_time14date_names_putINS_9gregorian17greg_facet_configEcSt19ostreambuf_iteratorIcSt11char_traitsIcEEE2idE,0x4(%esp)
087dd7cf +0x0a6f:  mov    %ebx,(%esp)
087dd7d2 +0x0a72:  mov    %eax,0x8(%esp)
087dd7d6 +0x0a76:  call   086db600 <_ZNSt6locale5_Impl16_M_install_facetEPKNS_2idEPKNS_5facetE>  ; std::locale::_Impl::_M_install_facet(std::locale::id const*, std::locale::facet const*)
087dd7db +0x0a7b:  mov    (%esi),%eax
087dd7dd +0x0a7d:  mov    0x10(%eax),%eax
087dd7e0 +0x0a80:  mov    (%eax),%edx
087dd7e2 +0x0a82:  test   %edx,%edx
087dd7e4 +0x0a84:  je     087dd7f3 <+0xa93>
087dd7e6 +0x0a86:  mov    %edx,(%esp)
087dd7e9 +0x0a89:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
087dd7ee +0x0a8e:  mov    (%esi),%eax
087dd7f0 +0x0a90:  mov    0x10(%eax),%eax
087dd7f3 +0x0a93:  movl   $0x0,(%eax)
087dd7f9 +0x0a99:  add    $0x20,%esp
087dd7fc +0x0a9c:  pop    %ebx
087dd7fd +0x0a9d:  pop    %esi
087dd7fe +0x0a9e:  pop    %ebp
087dd7ff +0x0a9f:  ret
087dd800 +0x0aa0:  mov    %eax,-0xc(%ebp)
087dd803 +0x0aa3:  mov    %ebx,(%esp)
087dd806 +0x0aa6:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
087dd80b +0x0aab:  mov    -0xc(%ebp),%eax
087dd80e +0x0aae:  mov    %eax,(%esp)
087dd811 +0x0ab1:  call   08ae3750 <_Unwind_Resume>
087dd816 +0x0ab6:  mov    %eax,(%esp)
087dd819 +0x0ab9:  call   08725ce0 <__cxa_begin_catch>
087dd81e +0x0abe:  mov    (%esi),%eax
087dd820 +0x0ac0:  mov    %eax,(%esp)
087dd823 +0x0ac3:  call   087dd690 <+0x930>
087dd828 +0x0ac8:  call   08724be0 <__cxa_rethrow>
087dd82d +0x0acd:  mov    %eax,-0xc(%ebp)
087dd830 +0x0ad0:  call   08725c30 <__cxa_end_catch>
087dd835 +0x0ad5:  mov    -0xc(%ebp),%eax
087dd838 +0x0ad8:  mov    %eax,(%esp)
087dd83b +0x0adb:  call   08ae3750 <_Unwind_Resume>
087dd840 +0x0ae0:  push   %ebp
087dd841 +0x0ae1:  mov    %esp,%ebp
087dd843 +0x0ae3:  sub    $0x38,%esp
087dd846 +0x0ae6:  mov    0x10(%ebp),%eax
087dd849 +0x0ae9:  mov    %ebx,-0xc(%ebp)
087dd84c +0x0aec:  mov    0xc(%ebp),%ebx
087dd84f +0x0aef:  mov    %esi,-0x8(%ebp)
087dd852 +0x0af2:  mov    %edi,-0x4(%ebp)
087dd855 +0x0af5:  test   %eax,%eax
087dd857 +0x0af7:  je     087dd8e0 <+0xb80>
087dd85d +0x0afd:  mov    $0x1,%edi
087dd862 +0x0b02:  movl   $0x18,(%esp)
087dd869 +0x0b09:  call   08724450 <_Znwj>  ; operator new(unsigned int)
087dd86e +0x0b0e:  test   %eax,%eax
087dd870 +0x0b10:  mov    %eax,%esi
087dd872 +0x0b12:  je     087dd8ac <+0xb4c>
087dd874 +0x0b14:  movl   $0x0,(%eax)
087dd87a +0x0b1a:  movl   $0x0,0x4(%eax)
087dd881 +0x0b21:  movl   $0x0,0x8(%eax)
087dd888 +0x0b28:  movl   $0x0,0xc(%eax)
087dd88f +0x0b2f:  mov    0x18(%ebp),%eax
087dd892 +0x0b32:  mov    %eax,0x4(%esp)
087dd896 +0x0b36:  lea    0x10(%esi),%eax
087dd899 +0x0b39:  mov    %eax,(%esp)
087dd89c +0x0b3c:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
087dd8a1 +0x0b41:  mov    0x18(%ebp),%edx
087dd8a4 +0x0b44:  movzwl 0x4(%edx),%eax
087dd8a8 +0x0b48:  mov    %ax,0x14(%esi)
087dd8ac +0x0b4c:  lea    0x4(%ebx),%eax
087dd8af +0x0b4f:  mov    %eax,0xc(%esp)
087dd8b3 +0x0b53:  mov    0x14(%ebp),%eax
087dd8b6 +0x0b56:  mov    %esi,0x4(%esp)
087dd8ba +0x0b5a:  mov    %edi,(%esp)
087dd8bd +0x0b5d:  mov    %eax,0x8(%esp)
087dd8c1 +0x0b61:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
087dd8c6 +0x0b66:  mov    0x8(%ebp),%edx
087dd8c9 +0x0b69:  addl   $0x1,0x14(%ebx)
087dd8cd +0x0b6d:  mov    %esi,(%edx)
087dd8cf +0x0b6f:  mov    %edx,%eax
087dd8d1 +0x0b71:  mov    -0xc(%ebp),%ebx
087dd8d4 +0x0b74:  mov    -0x8(%ebp),%esi
087dd8d7 +0x0b77:  mov    -0x4(%ebp),%edi
087dd8da +0x0b7a:  mov    %ebp,%esp
087dd8dc +0x0b7c:  pop    %ebp
087dd8dd +0x0b7d:  ret    $0x4
087dd8e0 +0x0b80:  lea    0x4(%ebx),%eax
087dd8e3 +0x0b83:  cmp    %eax,0x14(%ebp)
087dd8e6 +0x0b86:  je     087dd85d <+0xafd>
087dd8ec +0x0b8c:  mov    0x18(%ebp),%eax
087dd8ef +0x0b8f:  mov    0x14(%ebp),%edx
087dd8f2 +0x0b92:  mov    (%eax),%esi
087dd8f4 +0x0b94:  mov    0x10(%edx),%edi
087dd8f7 +0x0b97:  mov    -0xc(%esi),%eax
087dd8fa +0x0b9a:  mov    -0xc(%edi),%edx
087dd8fd +0x0b9d:  cmp    %eax,%edx
087dd8ff +0x0b9f:  mov    %edx,%ecx
087dd901 +0x0ba1:  cmova  %eax,%ecx
087dd904 +0x0ba4:  mov    %edx,-0x1c(%ebp)
087dd907 +0x0ba7:  cmp    %ecx,%ecx
087dd909 +0x0ba9:  repz cmpsb %es:(%edi),%ds:(%esi)
087dd90b +0x0bab:  seta   %dl
087dd90e +0x0bae:  setb   %cl
087dd911 +0x0bb1:  sub    %cl,%dl
087dd913 +0x0bb3:  sub    -0x1c(%ebp),%eax
087dd916 +0x0bb6:  movsbl %dl,%edx
087dd919 +0x0bb9:  test   %edx,%edx
087dd91b +0x0bbb:  mov    %edx,%edi
087dd91d +0x0bbd:  cmove  %eax,%edi
087dd920 +0x0bc0:  shr    $0x1f,%edi
087dd923 +0x0bc3:  jmp    087dd862 <+0xb02>
087dd928 +0x0bc8:  mov    %eax,(%esp)
087dd92b +0x0bcb:  call   08725ce0 <__cxa_begin_catch>
087dd930 +0x0bd0:  mov    %esi,(%esp)
087dd933 +0x0bd3:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
087dd938 +0x0bd8:  call   08724be0 <__cxa_rethrow>
087dd93d +0x0bdd:  mov    %eax,%ebx
087dd93f +0x0bdf:  call   08725c30 <__cxa_end_catch>
087dd944 +0x0be4:  mov    %ebx,(%esp)
087dd947 +0x0be7:  call   08ae3750 <_Unwind_Resume>
087dd94c +0x0bec:  nop
087dd94d +0x0bed:  nop
087dd94e +0x0bee:  nop
087dd94f +0x0bef:  nop
087dd950 +0x0bf0:  push   %ebp
087dd951 +0x0bf1:  mov    %esp,%ebp
087dd953 +0x0bf3:  sub    $0x8,%esp
087dd956 +0x0bf6:  mov    0x8(%ebp),%eax
087dd959 +0x0bf9:  movl   $&_ZTVN5boost9date_time14date_names_putINS_9gregorian17greg_facet_configEcSt19ostreambuf_iteratorIcSt11char_traitsIcEEEE+0x8,(%eax)
087dd95f +0x0bff:  leave
087dd960 +0x0c00:  jmp    086dada0 <_ZNSt6locale5facetD1Ev>  ; std::locale::facet::~facet()
087dd965 +0x0c05:  nop
087dd966 +0x0c06:  nop
087dd967 +0x0c07:  nop
087dd968 +0x0c08:  nop
087dd969 +0x0c09:  nop
087dd96a +0x0c0a:  nop
087dd96b +0x0c0b:  nop
087dd96c +0x0c0c:  nop
087dd96d +0x0c0d:  nop
087dd96e +0x0c0e:  nop
087dd96f +0x0c0f:  nop
087dd970 +0x0c10:  push   %ebp
087dd971 +0x0c11:  mov    %esp,%ebp
087dd973 +0x0c13:  push   %ebx
087dd974 +0x0c14:  sub    $0x14,%esp
087dd977 +0x0c17:  mov    0x8(%ebp),%ebx
087dd97a +0x0c1a:  movl   $&_ZTVN5boost9date_time14date_names_putINS_9gregorian17greg_facet_configEcSt19ostreambuf_iteratorIcSt11char_traitsIcEEEE+0x8,(%ebx)
087dd980 +0x0c20:  mov    %ebx,(%esp)
087dd983 +0x0c23:  call   086dada0 <_ZNSt6locale5facetD1Ev>  ; std::locale::facet::~facet()
087dd988 +0x0c28:  mov    %ebx,0x8(%ebp)
087dd98b +0x0c2b:  add    $0x14,%esp
087dd98e +0x0c2e:  pop    %ebx
087dd98f +0x0c2f:  pop    %ebp
087dd990 +0x0c30:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
087dd995 +0x0c35:  nop
087dd996 +0x0c36:  nop
087dd997 +0x0c37:  nop
087dd998 +0x0c38:  nop
087dd999 +0x0c39:  nop
087dd99a +0x0c3a:  nop
087dd99b +0x0c3b:  nop
087dd99c +0x0c3c:  nop
087dd99d +0x0c3d:  nop
087dd99e +0x0c3e:  nop
087dd99f +0x0c3f:  nop
087dd9a0 +0x0c40:  push   %ebp
087dd9a1 +0x0c41:  mov    %esp,%ebp
087dd9a3 +0x0c43:  sub    $0x8,%esp
087dd9a6 +0x0c46:  mov    0x8(%ebp),%eax
087dd9a9 +0x0c49:  movl   $&_ZTVN5boost9date_time14date_names_putINS_9gregorian17greg_facet_configEwSt19ostreambuf_iteratorIwSt11char_traitsIwEEEE+0x8,(%eax)
087dd9af +0x0c4f:  leave
087dd9b0 +0x0c50:  jmp    086dada0 <_ZNSt6locale5facetD1Ev>  ; std::locale::facet::~facet()
087dd9b5 +0x0c55:  nop
087dd9b6 +0x0c56:  nop
087dd9b7 +0x0c57:  nop
087dd9b8 +0x0c58:  nop
087dd9b9 +0x0c59:  nop
087dd9ba +0x0c5a:  nop
087dd9bb +0x0c5b:  nop
087dd9bc +0x0c5c:  nop
087dd9bd +0x0c5d:  nop
087dd9be +0x0c5e:  nop
087dd9bf +0x0c5f:  nop
087dd9c0 +0x0c60:  push   %ebp
087dd9c1 +0x0c61:  mov    %esp,%ebp
087dd9c3 +0x0c63:  push   %ebx
087dd9c4 +0x0c64:  sub    $0x14,%esp
087dd9c7 +0x0c67:  mov    0x8(%ebp),%ebx
087dd9ca +0x0c6a:  movl   $&_ZTVN5boost9date_time14date_names_putINS_9gregorian17greg_facet_configEwSt19ostreambuf_iteratorIwSt11char_traitsIwEEEE+0x8,(%ebx)
087dd9d0 +0x0c70:  mov    %ebx,(%esp)
087dd9d3 +0x0c73:  call   086dada0 <_ZNSt6locale5facetD1Ev>  ; std::locale::facet::~facet()
087dd9d8 +0x0c78:  mov    %ebx,0x8(%ebp)
087dd9db +0x0c7b:  add    $0x14,%esp
087dd9de +0x0c7e:  pop    %ebx
087dd9df +0x0c7f:  pop    %ebp
087dd9e0 +0x0c80:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
087dd9e5 +0x0c85:  nop
087dd9e6 +0x0c86:  nop
087dd9e7 +0x0c87:  nop
087dd9e8 +0x0c88:  nop
087dd9e9 +0x0c89:  nop
087dd9ea +0x0c8a:  nop
087dd9eb +0x0c8b:  nop
087dd9ec +0x0c8c:  nop
087dd9ed +0x0c8d:  nop
087dd9ee +0x0c8e:  nop
087dd9ef +0x0c8f:  nop
087dd9f0 +0x0c90:  push   %ebp
087dd9f1 +0x0c91:  mov    %esp,%ebp
087dd9f3 +0x0c93:  push   %ebx
087dd9f4 +0x0c94:  sub    $0x14,%esp
087dd9f7 +0x0c97:  mov    0x8(%ebp),%ebx
087dd9fa +0x0c9a:  movl   $&_ZTVN5boost9date_time14date_names_putINS_9gregorian17greg_facet_configEcSt19ostreambuf_iteratorIcSt11char_traitsIcEEEE+0x8,(%ebx)
087dda00 +0x0ca0:  mov    %ebx,(%esp)
087dda03 +0x0ca3:  call   086dada0 <_ZNSt6locale5facetD1Ev>  ; std::locale::facet::~facet()
087dda08 +0x0ca8:  mov    %ebx,0x8(%ebp)
087dda0b +0x0cab:  add    $0x14,%esp
087dda0e +0x0cae:  pop    %ebx
087dda0f +0x0caf:  pop    %ebp
087dda10 +0x0cb0:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
087dda15 +0x0cb5:  nop
087dda16 +0x0cb6:  nop
087dda17 +0x0cb7:  nop
087dda18 +0x0cb8:  nop
087dda19 +0x0cb9:  nop
087dda1a +0x0cba:  nop
087dda1b +0x0cbb:  nop
087dda1c +0x0cbc:  nop
087dda1d +0x0cbd:  nop
087dda1e +0x0cbe:  nop
087dda1f +0x0cbf:  nop
087dda20 +0x0cc0:  push   %ebp
087dda21 +0x0cc1:  mov    %esp,%ebp
087dda23 +0x0cc3:  push   %ebx
087dda24 +0x0cc4:  sub    $0x14,%esp
087dda27 +0x0cc7:  mov    0x8(%ebp),%ebx
087dda2a +0x0cca:  movl   $&_ZTVN5boost9date_time14date_names_putINS_9gregorian17greg_facet_configEwSt19ostreambuf_iteratorIwSt11char_traitsIwEEEE+0x8,(%ebx)
087dda30 +0x0cd0:  mov    %ebx,(%esp)
087dda33 +0x0cd3:  call   086dada0 <_ZNSt6locale5facetD1Ev>  ; std::locale::facet::~facet()
087dda38 +0x0cd8:  mov    %ebx,0x8(%ebp)
087dda3b +0x0cdb:  add    $0x14,%esp
087dda3e +0x0cde:  pop    %ebx
087dda3f +0x0cdf:  pop    %ebp
087dda40 +0x0ce0:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
087dda45 +0x0ce5:  nop
087dda46 +0x0ce6:  nop
087dda47 +0x0ce7:  nop
087dda48 +0x0ce8:  nop
087dda49 +0x0ce9:  nop
087dda4a +0x0cea:  nop
087dda4b +0x0ceb:  nop
087dda4c +0x0cec:  nop
087dda4d +0x0ced:  nop
087dda4e +0x0cee:  nop
087dda4f +0x0cef:  nop
087dda50 +0x0cf0:  push   %ebp
087dda51 +0x0cf1:  mov    %esp,%ebp
087dda53 +0x0cf3:  push   %edi
087dda54 +0x0cf4:  push   %esi
087dda55 +0x0cf5:  push   %ebx
087dda56 +0x0cf6:  sub    $0x4c,%esp
087dda59 +0x0cf9:  mov    0xc(%ebp),%edx
087dda5c +0x0cfc:  mov    0x8(%edx),%eax
087dda5f +0x0cff:  test   %eax,%eax
087dda61 +0x0d01:  je     087ddb2c <+0xdcc>
087dda67 +0x0d07:  mov    0x10(%ebp),%ecx
087dda6a +0x0d0a:  mov    (%ecx),%ecx
087dda6c +0x0d0c:  mov    -0xc(%ecx),%ebx
087dda6f +0x0d0f:  mov    %ecx,-0x20(%ebp)
087dda72 +0x0d12:  mov    %ebx,-0x24(%ebp)
087dda75 +0x0d15:  jmp    087dda86 <+0xd26>
087dda77 +0x0d17:  nop
087dda78 +0x0d18:  mov    %eax,%edx
087dda7a +0x0d1a:  mov    0x8(%eax),%eax
087dda7d +0x0d1d:  mov    $0x1,%ecx
087dda82 +0x0d22:  test   %eax,%eax
087dda84 +0x0d24:  je     087ddac0 <+0xd60>
087dda86 +0x0d26:  mov    0x10(%eax),%edi
087dda89 +0x0d29:  mov    -0x24(%ebp),%ecx
087dda8c +0x0d2c:  mov    -0x20(%ebp),%esi
087dda8f +0x0d2f:  mov    -0xc(%edi),%edx
087dda92 +0x0d32:  cmp    %edx,-0x24(%ebp)
087dda95 +0x0d35:  cmova  %edx,%ecx
087dda98 +0x0d38:  cmp    %ecx,%ecx
087dda9a +0x0d3a:  repz cmpsb %es:(%edi),%ds:(%esi)
087dda9c +0x0d3c:  seta   %bl
087dda9f +0x0d3f:  setb   %cl
087ddaa2 +0x0d42:  sub    %cl,%bl
087ddaa4 +0x0d44:  movsbl %bl,%esi
087ddaa7 +0x0d47:  mov    -0x24(%ebp),%ebx
087ddaaa +0x0d4a:  sub    %edx,%ebx
087ddaac +0x0d4c:  test   %esi,%esi
087ddaae +0x0d4e:  cmove  %ebx,%esi
087ddab1 +0x0d51:  test   %esi,%esi
087ddab3 +0x0d53:  js     087dda78 <+0xd18>
087ddab5 +0x0d55:  mov    %eax,%edx
087ddab7 +0x0d57:  mov    0xc(%eax),%eax
087ddaba +0x0d5a:  xor    %ecx,%ecx
087ddabc +0x0d5c:  test   %eax,%eax
087ddabe +0x0d5e:  jne    087dda86 <+0xd26>
087ddac0 +0x0d60:  test   %cl,%cl
087ddac2 +0x0d62:  mov    -0x24(%ebp),%ebx
087ddac5 +0x0d65:  mov    %edx,-0x24(%ebp)
087ddac8 +0x0d68:  je     087ddaeb <+0xd8b>
087ddaca +0x0d6a:  mov    0xc(%ebp),%eax
087ddacd +0x0d6d:  cmp    0xc(%eax),%edx
087ddad0 +0x0d70:  je     087ddb6f <+0xe0f>
087ddad6 +0x0d76:  mov    %edx,(%esp)
087ddad9 +0x0d79:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
087ddade +0x0d7e:  mov    0x10(%ebp),%ebx
087ddae1 +0x0d81:  mov    (%ebx),%ebx
087ddae3 +0x0d83:  mov    %eax,%edx
087ddae5 +0x0d85:  mov    %ebx,-0x20(%ebp)
087ddae8 +0x0d88:  mov    -0xc(%ebx),%ebx
087ddaeb +0x0d8b:  mov    0x10(%edx),%esi
087ddaee +0x0d8e:  mov    -0x20(%ebp),%edi
087ddaf1 +0x0d91:  mov    -0xc(%esi),%ecx
087ddaf4 +0x0d94:  cmp    %ecx,%ebx
087ddaf6 +0x0d96:  mov    %ecx,-0x2c(%ebp)
087ddaf9 +0x0d99:  cmovbe %ebx,%ecx
087ddafc +0x0d9c:  cmp    %ecx,%ecx
087ddafe +0x0d9e:  repz cmpsb %es:(%edi),%ds:(%esi)
087ddb00 +0x0da0:  seta   %al
087ddb03 +0x0da3:  setb   %cl
087ddb06 +0x0da6:  sub    %cl,%al
087ddb08 +0x0da8:  movsbl %al,%esi
087ddb0b +0x0dab:  mov    -0x2c(%ebp),%eax
087ddb0e +0x0dae:  sub    %ebx,%eax
087ddb10 +0x0db0:  test   %esi,%esi
087ddb12 +0x0db2:  cmove  %eax,%esi
087ddb15 +0x0db5:  test   %esi,%esi
087ddb17 +0x0db7:  js     087ddb34 <+0xdd4>
087ddb19 +0x0db9:  mov    0x8(%ebp),%eax
087ddb1c +0x0dbc:  mov    %edx,(%eax)
087ddb1e +0x0dbe:  movb   $0x0,0x4(%eax)
087ddb22 +0x0dc2:  lea    -0xc(%ebp),%esp
087ddb25 +0x0dc5:  pop    %ebx
087ddb26 +0x0dc6:  pop    %esi
087ddb27 +0x0dc7:  pop    %edi
087ddb28 +0x0dc8:  pop    %ebp
087ddb29 +0x0dc9:  ret    $0x4
087ddb2c +0x0dcc:  add    $0x4,%edx
087ddb2f +0x0dcf:  mov    %edx,-0x24(%ebp)
087ddb32 +0x0dd2:  jmp    087ddaca <+0xd6a>
087ddb34 +0x0dd4:  mov    0x10(%ebp),%ebx
087ddb37 +0x0dd7:  lea    -0x1c(%ebp),%eax
087ddb3a +0x0dda:  mov    -0x24(%ebp),%edx
087ddb3d +0x0ddd:  mov    0xc(%ebp),%ecx
087ddb40 +0x0de0:  mov    %eax,(%esp)
087ddb43 +0x0de3:  mov    %ebx,0x10(%esp)
087ddb47 +0x0de7:  mov    %edx,0xc(%esp)
087ddb4b +0x0deb:  movl   $0x0,0x8(%esp)
087ddb53 +0x0df3:  mov    %ecx,0x4(%esp)
087ddb57 +0x0df7:  call   087dd840 <+0xae0>
087ddb5c +0x0dfc:  mov    0x8(%ebp),%ebx
087ddb5f +0x0dff:  mov    -0x1c(%ebp),%eax
087ddb62 +0x0e02:  movb   $0x1,0x4(%ebx)
087ddb66 +0x0e06:  mov    %eax,(%ebx)
087ddb68 +0x0e08:  mov    %ebx,%eax
087ddb6a +0x0e0a:  sub    $0x4,%esp
087ddb6d +0x0e0d:  jmp    087ddb22 <+0xdc2>
087ddb6f +0x0e0f:  mov    0x10(%ebp),%ecx
087ddb72 +0x0e12:  mov    %eax,%ebx
087ddb74 +0x0e14:  lea    -0x1c(%ebp),%eax
087ddb77 +0x0e17:  mov    %edx,0xc(%esp)
087ddb7b +0x0e1b:  mov    %eax,(%esp)
087ddb7e +0x0e1e:  mov    %ecx,0x10(%esp)
087ddb82 +0x0e22:  movl   $0x0,0x8(%esp)
087ddb8a +0x0e2a:  mov    %ebx,0x4(%esp)
087ddb8e +0x0e2e:  call   087dd840 <+0xae0>
087ddb93 +0x0e33:  mov    0x8(%ebp),%edx
087ddb96 +0x0e36:  mov    -0x1c(%ebp),%eax
087ddb99 +0x0e39:  movb   $0x1,0x4(%edx)
087ddb9d +0x0e3d:  mov    %eax,(%edx)
087ddb9f +0x0e3f:  mov    %edx,%eax
087ddba1 +0x0e41:  sub    $0x4,%esp
087ddba4 +0x0e44:  jmp    087ddb22 <+0xdc2>
087ddba9 +0x0e49:  nop
087ddbaa +0x0e4a:  nop
087ddbab +0x0e4b:  nop
087ddbac +0x0e4c:  nop
087ddbad +0x0e4d:  nop
087ddbae +0x0e4e:  nop
087ddbaf +0x0e4f:  nop
087ddbb0 +0x0e50:  push   %ebp
087ddbb1 +0x0e51:  mov    %esp,%ebp
087ddbb3 +0x0e53:  push   %edi
087ddbb4 +0x0e54:  push   %esi
087ddbb5 +0x0e55:  push   %ebx
087ddbb6 +0x0e56:  sub    $0x2c,%esp
087ddbb9 +0x0e59:  mov    0x10(%ebp),%edx
087ddbbc +0x0e5c:  lea    -0x19(%ebp),%eax
087ddbbf +0x0e5f:  mov    0xc(%ebp),%esi
087ddbc2 +0x0e62:  mov    %eax,0x8(%esp)
087ddbc6 +0x0e66:  mov    0x8(%ebp),%eax
087ddbc9 +0x0e69:  mov    0x14(%eax),%eax
087ddbcc +0x0e6c:  mov    (%eax,%edx,4),%eax
087ddbcf +0x0e6f:  mov    %eax,0x4(%esp)
087ddbd3 +0x0e73:  lea    -0x20(%ebp),%eax
087ddbd6 +0x0e76:  mov    %eax,(%esp)
087ddbd9 +0x0e79:  call   0871d180 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x7b64>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x7b64
087ddbde +0x0e7e:  mov    -0x20(%ebp),%edi
087ddbe1 +0x0e81:  lea    -0xc(%edi),%eax
087ddbe4 +0x0e84:  mov    0x8(%eax),%ecx
087ddbe7 +0x0e87:  test   %ecx,%ecx
087ddbe9 +0x0e89:  js     087ddc70 <+0xf10>
087ddbef +0x0e8f:  lea    -0x20(%ebp),%eax
087ddbf2 +0x0e92:  mov    %eax,(%esp)
087ddbf5 +0x0e95:  call   0871e990 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x9374>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x9374
087ddbfa +0x0e9a:  mov    -0x20(%ebp),%edi
087ddbfd +0x0e9d:  lea    -0xc(%edi),%eax
087ddc00 +0x0ea0:  mov    0x8(%eax),%edx
087ddc03 +0x0ea3:  test   %edx,%edx
087ddc05 +0x0ea5:  js     087ddc70 <+0xf10>
087ddc07 +0x0ea7:  lea    -0x20(%ebp),%eax
087ddc0a +0x0eaa:  mov    %eax,(%esp)
087ddc0d +0x0ead:  call   0871e990 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x9374>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x9374
087ddc12 +0x0eb2:  mov    -0x20(%ebp),%edx
087ddc15 +0x0eb5:  mov    %edi,%ebx
087ddc17 +0x0eb7:  lea    -0xc(%edx),%eax
087ddc1a +0x0eba:  mov    %edx,%edi
087ddc1c +0x0ebc:  mov    (%eax),%edx
087ddc1e +0x0ebe:  lea    (%edi,%edx,4),%edi
087ddc21 +0x0ec1:  cmp    %edi,%ebx
087ddc23 +0x0ec3:  jne    087ddc2f <+0xecf>
087ddc25 +0x0ec5:  jmp    087ddc5e <+0xefe>
087ddc27 +0x0ec7:  nop
087ddc28 +0x0ec8:  add    $0x4,%ebx
087ddc2b +0x0ecb:  cmp    %ebx,%edi
087ddc2d +0x0ecd:  je     087ddc58 <+0xef8>
087ddc2f +0x0ecf:  cmpb   $0x0,0x4(%esi)
087ddc33 +0x0ed3:  mov    (%ebx),%eax
087ddc35 +0x0ed5:  jne    087ddc28 <+0xec8>
087ddc37 +0x0ed7:  mov    (%esi),%edx
087ddc39 +0x0ed9:  mov    0x14(%edx),%ecx
087ddc3c +0x0edc:  cmp    0x18(%edx),%ecx
087ddc3f +0x0edf:  jae    087ddc74 <+0xf14>
087ddc41 +0x0ee1:  addl   $0x4,0x14(%edx)
087ddc45 +0x0ee5:  mov    %eax,(%ecx)
087ddc47 +0x0ee7:  cmp    $0xffffffff,%eax
087ddc4a +0x0eea:  jne    087ddc28 <+0xec8>
087ddc4c +0x0eec:  add    $0x4,%ebx
087ddc4f +0x0eef:  cmp    %ebx,%edi
087ddc51 +0x0ef1:  movb   $0x1,0x4(%esi)
087ddc55 +0x0ef5:  jne    087ddc2f <+0xecf>
087ddc57 +0x0ef7:  nop
087ddc58 +0x0ef8:  mov    -0x20(%ebp),%eax
087ddc5b +0x0efb:  sub    $0xc,%eax
087ddc5e +0x0efe:  cmp    $&_ZNSbIwSt11char_traitsIwESaIwEE4_Rep20_S_empty_rep_storageE,%eax
087ddc63 +0x0f03:  jne    087ddc9f <+0xf3f>
087ddc65 +0x0f05:  add    $0x2c,%esp
087ddc68 +0x0f08:  pop    %ebx
087ddc69 +0x0f09:  pop    %esi
087ddc6a +0x0f0a:  pop    %edi
087ddc6b +0x0f0b:  pop    %ebp
087ddc6c +0x0f0c:  ret
087ddc6d +0x0f0d:  lea    0x0(%esi),%esi
087ddc70 +0x0f10:  mov    %edi,%ebx
087ddc72 +0x0f12:  jmp    087ddc1c <+0xebc>
087ddc74 +0x0f14:  mov    (%edx),%ecx
087ddc76 +0x0f16:  mov    %eax,0x4(%esp)
087ddc7a +0x0f1a:  mov    %edx,(%esp)
087ddc7d +0x0f1d:  call   *0x34(%ecx)
087ddc80 +0x0f20:  jmp    087ddc47 <+0xee7>
087ddc82 +0x0f22:  mov    %eax,%ebx
087ddc84 +0x0f24:  lea    -0x20(%ebp),%eax
087ddc87 +0x0f27:  mov    %eax,(%esp)
087ddc8a +0x0f2a:  call   0871d720 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x8104>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x8104
087ddc8f +0x0f2f:  mov    %ebx,(%esp)
087ddc92 +0x0f32:  call   08ae3750 <_Unwind_Resume>
087ddc97 +0x0f37:  mov    %eax,(%esp)
087ddc9a +0x0f3a:  call   08ae3750 <_Unwind_Resume>
087ddc9f +0x0f3f:  mov    $&data#bb92cc41(.plt),%edx
087ddca4 +0x0f44:  test   %edx,%edx
087ddca6 +0x0f46:  je     087ddcc5 <+0xf65>
087ddca8 +0x0f48:  or     $0xffffffff,%edx
087ddcab +0x0f4b:  lock xadd %edx,0x8(%eax)
087ddcb0 +0x0f50:  test   %edx,%edx
087ddcb2 +0x0f52:  jg     087ddc65 <+0xf05>
087ddcb4 +0x0f54:  lea    -0x1a(%ebp),%edx
087ddcb7 +0x0f57:  mov    %edx,0x4(%esp)
087ddcbb +0x0f5b:  mov    %eax,(%esp)
087ddcbe +0x0f5e:  call   0871c480 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x6e64>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x6e64
087ddcc3 +0x0f63:  jmp    087ddc65 <+0xf05>
087ddcc5 +0x0f65:  mov    0x8(%eax),%edx
087ddcc8 +0x0f68:  lea    -0x1(%edx),%ecx
087ddccb +0x0f6b:  mov    %ecx,0x8(%eax)
087ddcce +0x0f6e:  jmp    087ddcb0 <+0xf50>
087ddcd0 +0x0f70:  push   %ebp
087ddcd1 +0x0f71:  mov    %esp,%ebp
087ddcd3 +0x0f73:  push   %edi
087ddcd4 +0x0f74:  push   %esi
087ddcd5 +0x0f75:  push   %ebx
087ddcd6 +0x0f76:  sub    $0x2c,%esp
087ddcd9 +0x0f79:  mov    0xc(%ebp),%esi
087ddcdc +0x0f7c:  lea    -0x19(%ebp),%eax
087ddcdf +0x0f7f:  mov    %eax,0x8(%esp)
087ddce3 +0x0f83:  lea    -0x20(%ebp),%eax
087ddce6 +0x0f86:  movl   $&_ZN5boost9date_time14date_names_putINS_9gregorian17greg_facet_configEwSt19ostreambuf_iteratorIwSt11char_traitsIwEEE9separatorE,0x4(%esp)
087ddcee +0x0f8e:  mov    %eax,(%esp)
087ddcf1 +0x0f91:  call   0871d180 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x7b64>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x7b64
087ddcf6 +0x0f96:  mov    -0x20(%ebp),%ebx
087ddcf9 +0x0f99:  mov    -0xc(%ebx),%edx
087ddcfc +0x0f9c:  lea    -0xc(%ebx),%eax
087ddcff +0x0f9f:  lea    (%ebx,%edx,4),%edi
087ddd02 +0x0fa2:  cmp    %edi,%ebx
087ddd04 +0x0fa4:  jne    087ddd0f <+0xfaf>
087ddd06 +0x0fa6:  jmp    087ddd3e <+0xfde>
087ddd08 +0x0fa8:  add    $0x4,%ebx
087ddd0b +0x0fab:  cmp    %ebx,%edi
087ddd0d +0x0fad:  je     087ddd38 <+0xfd8>
087ddd0f +0x0faf:  cmpb   $0x0,0x4(%esi)
087ddd13 +0x0fb3:  mov    (%ebx),%eax
087ddd15 +0x0fb5:  jne    087ddd08 <+0xfa8>
087ddd17 +0x0fb7:  mov    (%esi),%edx
087ddd19 +0x0fb9:  mov    0x14(%edx),%ecx
087ddd1c +0x0fbc:  cmp    0x18(%edx),%ecx
087ddd1f +0x0fbf:  jae    087ddd4d <+0xfed>
087ddd21 +0x0fc1:  addl   $0x4,0x14(%edx)
087ddd25 +0x0fc5:  mov    %eax,(%ecx)
087ddd27 +0x0fc7:  cmp    $0xffffffff,%eax
087ddd2a +0x0fca:  jne    087ddd08 <+0xfa8>
087ddd2c +0x0fcc:  add    $0x4,%ebx
087ddd2f +0x0fcf:  cmp    %ebx,%edi
087ddd31 +0x0fd1:  movb   $0x1,0x4(%esi)
087ddd35 +0x0fd5:  jne    087ddd0f <+0xfaf>
087ddd37 +0x0fd7:  nop
087ddd38 +0x0fd8:  mov    -0x20(%ebp),%eax
087ddd3b +0x0fdb:  sub    $0xc,%eax
087ddd3e +0x0fde:  cmp    $&_ZNSbIwSt11char_traitsIwESaIwEE4_Rep20_S_empty_rep_storageE,%eax
087ddd43 +0x0fe3:  jne    087ddd63 <+0x1003>
087ddd45 +0x0fe5:  add    $0x2c,%esp
087ddd48 +0x0fe8:  pop    %ebx
087ddd49 +0x0fe9:  pop    %esi
087ddd4a +0x0fea:  pop    %edi
087ddd4b +0x0feb:  pop    %ebp
087ddd4c +0x0fec:  ret
087ddd4d +0x0fed:  mov    (%edx),%ecx
087ddd4f +0x0fef:  mov    %eax,0x4(%esp)
087ddd53 +0x0ff3:  mov    %edx,(%esp)
087ddd56 +0x0ff6:  call   *0x34(%ecx)
087ddd59 +0x0ff9:  jmp    087ddd27 <+0xfc7>
087ddd5b +0x0ffb:  mov    %eax,(%esp)
087ddd5e +0x0ffe:  call   08ae3750 <_Unwind_Resume>
087ddd63 +0x1003:  mov    $&data#bb92cc41(.plt),%edx
087ddd68 +0x1008:  test   %edx,%edx
087ddd6a +0x100a:  je     087ddd9e <+0x103e>
087ddd6c +0x100c:  or     $0xffffffff,%edx
087ddd6f +0x100f:  lock xadd %edx,0x8(%eax)
087ddd74 +0x1014:  test   %edx,%edx
087ddd76 +0x1016:  jg     087ddd45 <+0xfe5>
087ddd78 +0x1018:  lea    -0x1a(%ebp),%edx
087ddd7b +0x101b:  mov    %edx,0x4(%esp)
087ddd7f +0x101f:  mov    %eax,(%esp)
087ddd82 +0x1022:  call   0871c480 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x6e64>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x6e64
087ddd87 +0x1027:  jmp    087ddd45 <+0xfe5>
087ddd89 +0x1029:  mov    %eax,%ebx
087ddd8b +0x102b:  lea    -0x20(%ebp),%eax
087ddd8e +0x102e:  mov    %eax,(%esp)
087ddd91 +0x1031:  call   0871d720 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x8104>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x8104
087ddd96 +0x1036:  mov    %ebx,(%esp)
087ddd99 +0x1039:  call   08ae3750 <_Unwind_Resume>
087ddd9e +0x103e:  mov    0x8(%eax),%edx
087ddda1 +0x1041:  lea    -0x1(%edx),%ecx
087ddda4 +0x1044:  mov    %ecx,0x8(%eax)
087ddda7 +0x1047:  jmp    087ddd74 <+0x1014>
087ddda9 +0x1049:  nop
087dddaa +0x104a:  nop
087dddab +0x104b:  nop
087dddac +0x104c:  nop
087dddad +0x104d:  nop
087dddae +0x104e:  nop
087dddaf +0x104f:  nop
087dddb0 +0x1050:  push   %ebp
087dddb1 +0x1051:  mov    %esp,%ebp
087dddb3 +0x1053:  push   %edi
087dddb4 +0x1054:  push   %esi
087dddb5 +0x1055:  push   %ebx
087dddb6 +0x1056:  sub    $0x2c,%esp
087dddb9 +0x1059:  mov    0xc(%ebp),%esi
087dddbc +0x105c:  lea    -0x19(%ebp),%eax
087dddbf +0x105f:  mov    %eax,0x8(%esp)
087dddc3 +0x1063:  lea    -0x20(%ebp),%eax
087dddc6 +0x1066:  movl   $&_ZN5boost9date_time14date_names_putINS_9gregorian17greg_facet_configEwSt19ostreambuf_iteratorIwSt11char_traitsIwEEE9separatorE,0x4(%esp)
087dddce +0x106e:  mov    %eax,(%esp)
087dddd1 +0x1071:  call   0871d180 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x7b64>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x7b64
087dddd6 +0x1076:  mov    -0x20(%ebp),%ebx
087dddd9 +0x1079:  mov    -0xc(%ebx),%edx
087ddddc +0x107c:  lea    -0xc(%ebx),%eax
087ddddf +0x107f:  lea    (%ebx,%edx,4),%edi
087ddde2 +0x1082:  cmp    %edi,%ebx
087ddde4 +0x1084:  jne    087dddef <+0x108f>
087ddde6 +0x1086:  jmp    087dde1e <+0x10be>
087ddde8 +0x1088:  add    $0x4,%ebx
087dddeb +0x108b:  cmp    %ebx,%edi
087ddded +0x108d:  je     087dde18 <+0x10b8>
087dddef +0x108f:  cmpb   $0x0,0x4(%esi)
087dddf3 +0x1093:  mov    (%ebx),%eax
087dddf5 +0x1095:  jne    087ddde8 <+0x1088>
087dddf7 +0x1097:  mov    (%esi),%edx
087dddf9 +0x1099:  mov    0x14(%edx),%ecx
087dddfc +0x109c:  cmp    0x18(%edx),%ecx
087dddff +0x109f:  jae    087dde2d <+0x10cd>
087dde01 +0x10a1:  addl   $0x4,0x14(%edx)
087dde05 +0x10a5:  mov    %eax,(%ecx)
087dde07 +0x10a7:  cmp    $0xffffffff,%eax
087dde0a +0x10aa:  jne    087ddde8 <+0x1088>
087dde0c +0x10ac:  add    $0x4,%ebx
087dde0f +0x10af:  cmp    %ebx,%edi
087dde11 +0x10b1:  movb   $0x1,0x4(%esi)
087dde15 +0x10b5:  jne    087dddef <+0x108f>
087dde17 +0x10b7:  nop
087dde18 +0x10b8:  mov    -0x20(%ebp),%eax
087dde1b +0x10bb:  sub    $0xc,%eax
087dde1e +0x10be:  cmp    $&_ZNSbIwSt11char_traitsIwESaIwEE4_Rep20_S_empty_rep_storageE,%eax
087dde23 +0x10c3:  jne    087dde43 <+0x10e3>
087dde25 +0x10c5:  add    $0x2c,%esp
087dde28 +0x10c8:  pop    %ebx
087dde29 +0x10c9:  pop    %esi
087dde2a +0x10ca:  pop    %edi
087dde2b +0x10cb:  pop    %ebp
087dde2c +0x10cc:  ret
087dde2d +0x10cd:  mov    (%edx),%ecx
087dde2f +0x10cf:  mov    %eax,0x4(%esp)
087dde33 +0x10d3:  mov    %edx,(%esp)
087dde36 +0x10d6:  call   *0x34(%ecx)
087dde39 +0x10d9:  jmp    087dde07 <+0x10a7>
087dde3b +0x10db:  mov    %eax,(%esp)
087dde3e +0x10de:  call   08ae3750 <_Unwind_Resume>
087dde43 +0x10e3:  mov    $&data#bb92cc41(.plt),%edx
087dde48 +0x10e8:  test   %edx,%edx
087dde4a +0x10ea:  je     087dde7e <+0x111e>
087dde4c +0x10ec:  or     $0xffffffff,%edx
087dde4f +0x10ef:  lock xadd %edx,0x8(%eax)
087dde54 +0x10f4:  test   %edx,%edx
087dde56 +0x10f6:  jg     087dde25 <+0x10c5>
087dde58 +0x10f8:  lea    -0x1a(%ebp),%edx
087dde5b +0x10fb:  mov    %edx,0x4(%esp)
087dde5f +0x10ff:  mov    %eax,(%esp)
087dde62 +0x1102:  call   0871c480 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x6e64>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x6e64
087dde67 +0x1107:  jmp    087dde25 <+0x10c5>
087dde69 +0x1109:  mov    %eax,%ebx
087dde6b +0x110b:  lea    -0x20(%ebp),%eax
087dde6e +0x110e:  mov    %eax,(%esp)
087dde71 +0x1111:  call   0871d720 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x8104>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x8104
087dde76 +0x1116:  mov    %ebx,(%esp)
087dde79 +0x1119:  call   08ae3750 <_Unwind_Resume>
087dde7e +0x111e:  mov    0x8(%eax),%edx
087dde81 +0x1121:  lea    -0x1(%edx),%ecx
087dde84 +0x1124:  mov    %ecx,0x8(%eax)
087dde87 +0x1127:  jmp    087dde54 <+0x10f4>
087dde89 +0x1129:  nop
087dde8a +0x112a:  nop
087dde8b +0x112b:  nop
087dde8c +0x112c:  nop
087dde8d +0x112d:  nop
087dde8e +0x112e:  nop
087dde8f +0x112f:  nop
087dde90 +0x1130:  push   %ebp
087dde91 +0x1131:  mov    %esp,%ebp
087dde93 +0x1133:  push   %edi
087dde94 +0x1134:  push   %esi
087dde95 +0x1135:  push   %ebx
087dde96 +0x1136:  sub    $0x2c,%esp
087dde99 +0x1139:  mov    0xc(%ebp),%esi
087dde9c +0x113c:  lea    -0x19(%ebp),%eax
087dde9f +0x113f:  mov    %eax,0x8(%esp)
087ddea3 +0x1143:  lea    -0x20(%ebp),%eax
087ddea6 +0x1146:  movl   $&_ZN5boost9date_time14date_names_putINS_9gregorian17greg_facet_configEwSt19ostreambuf_iteratorIwSt11char_traitsIwEEE9separatorE,0x4(%esp)
087ddeae +0x114e:  mov    %eax,(%esp)
087ddeb1 +0x1151:  call   0871d180 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x7b64>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x7b64
087ddeb6 +0x1156:  mov    -0x20(%ebp),%ebx
087ddeb9 +0x1159:  mov    -0xc(%ebx),%edx
087ddebc +0x115c:  lea    -0xc(%ebx),%eax
087ddebf +0x115f:  lea    (%ebx,%edx,4),%edi
087ddec2 +0x1162:  cmp    %edi,%ebx
087ddec4 +0x1164:  jne    087ddecf <+0x116f>
087ddec6 +0x1166:  jmp    087ddefe <+0x119e>
087ddec8 +0x1168:  add    $0x4,%ebx
087ddecb +0x116b:  cmp    %ebx,%edi
087ddecd +0x116d:  je     087ddef8 <+0x1198>
087ddecf +0x116f:  cmpb   $0x0,0x4(%esi)
087dded3 +0x1173:  mov    (%ebx),%eax
087dded5 +0x1175:  jne    087ddec8 <+0x1168>
087dded7 +0x1177:  mov    (%esi),%edx
087dded9 +0x1179:  mov    0x14(%edx),%ecx
087ddedc +0x117c:  cmp    0x18(%edx),%ecx
087ddedf +0x117f:  jae    087ddf0d <+0x11ad>
087ddee1 +0x1181:  addl   $0x4,0x14(%edx)
087ddee5 +0x1185:  mov    %eax,(%ecx)
087ddee7 +0x1187:  cmp    $0xffffffff,%eax
087ddeea +0x118a:  jne    087ddec8 <+0x1168>
087ddeec +0x118c:  add    $0x4,%ebx
087ddeef +0x118f:  cmp    %ebx,%edi
087ddef1 +0x1191:  movb   $0x1,0x4(%esi)
087ddef5 +0x1195:  jne    087ddecf <+0x116f>
087ddef7 +0x1197:  nop
087ddef8 +0x1198:  mov    -0x20(%ebp),%eax
087ddefb +0x119b:  sub    $0xc,%eax
087ddefe +0x119e:  cmp    $&_ZNSbIwSt11char_traitsIwESaIwEE4_Rep20_S_empty_rep_storageE,%eax
087ddf03 +0x11a3:  jne    087ddf23 <+0x11c3>
087ddf05 +0x11a5:  add    $0x2c,%esp
087ddf08 +0x11a8:  pop    %ebx
087ddf09 +0x11a9:  pop    %esi
087ddf0a +0x11aa:  pop    %edi
087ddf0b +0x11ab:  pop    %ebp
087ddf0c +0x11ac:  ret
087ddf0d +0x11ad:  mov    (%edx),%ecx
087ddf0f +0x11af:  mov    %eax,0x4(%esp)
087ddf13 +0x11b3:  mov    %edx,(%esp)
087ddf16 +0x11b6:  call   *0x34(%ecx)
087ddf19 +0x11b9:  jmp    087ddee7 <+0x1187>
087ddf1b +0x11bb:  mov    %eax,(%esp)
087ddf1e +0x11be:  call   08ae3750 <_Unwind_Resume>
087ddf23 +0x11c3:  mov    $&data#bb92cc41(.plt),%edx
087ddf28 +0x11c8:  test   %edx,%edx
087ddf2a +0x11ca:  je     087ddf5e <+0x11fe>
087ddf2c +0x11cc:  or     $0xffffffff,%edx
087ddf2f +0x11cf:  lock xadd %edx,0x8(%eax)
087ddf34 +0x11d4:  test   %edx,%edx
087ddf36 +0x11d6:  jg     087ddf05 <+0x11a5>
087ddf38 +0x11d8:  lea    -0x1a(%ebp),%edx
087ddf3b +0x11db:  mov    %edx,0x4(%esp)
087ddf3f +0x11df:  mov    %eax,(%esp)
087ddf42 +0x11e2:  call   0871c480 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x6e64>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x6e64
087ddf47 +0x11e7:  jmp    087ddf05 <+0x11a5>
087ddf49 +0x11e9:  mov    %eax,%ebx
087ddf4b +0x11eb:  lea    -0x20(%ebp),%eax
087ddf4e +0x11ee:  mov    %eax,(%esp)
087ddf51 +0x11f1:  call   0871d720 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x8104>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x8104
087ddf56 +0x11f6:  mov    %ebx,(%esp)
087ddf59 +0x11f9:  call   08ae3750 <_Unwind_Resume>
087ddf5e +0x11fe:  mov    0x8(%eax),%edx
087ddf61 +0x1201:  lea    -0x1(%edx),%ecx
087ddf64 +0x1204:  mov    %ecx,0x8(%eax)
087ddf67 +0x1207:  jmp    087ddf34 <+0x11d4>
087ddf69 +0x1209:  nop
087ddf6a +0x120a:  nop
087ddf6b +0x120b:  nop
087ddf6c +0x120c:  nop
087ddf6d +0x120d:  nop
087ddf6e +0x120e:  nop
087ddf6f +0x120f:  nop
087ddf70 +0x1210:  push   %ebp
087ddf71 +0x1211:  mov    %esp,%ebp
087ddf73 +0x1213:  push   %edi
087ddf74 +0x1214:  push   %esi
087ddf75 +0x1215:  push   %ebx
087ddf76 +0x1216:  sub    $0x2c,%esp
087ddf79 +0x1219:  mov    0x10(%ebp),%eax
087ddf7c +0x121c:  mov    0xc(%ebp),%esi
087ddf7f +0x121f:  cmp    $0x2,%eax
087ddf82 +0x1222:  jle    087ddf90 <+0x1230>
087ddf84 +0x1224:  add    $0x2c,%esp
087ddf87 +0x1227:  pop    %ebx
087ddf88 +0x1228:  pop    %esi
087ddf89 +0x1229:  pop    %edi
087ddf8a +0x122a:  pop    %ebp
087ddf8b +0x122b:  ret
087ddf8c +0x122c:  lea    0x0(%esi,%eiz,1),%esi
087ddf90 +0x1230:  lea    -0x19(%ebp),%edx
087ddf93 +0x1233:  mov    %edx,0x8(%esp)
087ddf97 +0x1237:  mov    %eax,%edx
087ddf99 +0x1239:  shl    $0x6,%edx
087ddf9c +0x123c:  lea    &_ZN5boost9date_time14date_names_putINS_9gregorian17greg_facet_configEwSt19ostreambuf_iteratorIwSt11char_traitsIwEEE27default_special_value_namesE(%edx,%eax,4),%eax
087ddfa3 +0x1243:  mov    %eax,0x4(%esp)
087ddfa7 +0x1247:  lea    -0x20(%ebp),%eax
087ddfaa +0x124a:  mov    %eax,(%esp)
087ddfad +0x124d:  call   0871d180 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x7b64>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x7b64
087ddfb2 +0x1252:  mov    -0x20(%ebp),%ebx
087ddfb5 +0x1255:  mov    -0xc(%ebx),%edx
087ddfb8 +0x1258:  lea    -0xc(%ebx),%eax
087ddfbb +0x125b:  lea    (%ebx,%edx,4),%edi
087ddfbe +0x125e:  cmp    %edi,%ebx
087ddfc0 +0x1260:  jne    087ddfcf <+0x126f>
087ddfc2 +0x1262:  jmp    087ddffe <+0x129e>
087ddfc4 +0x1264:  lea    0x0(%esi,%eiz,1),%esi
087ddfc8 +0x1268:  add    $0x4,%ebx
087ddfcb +0x126b:  cmp    %ebx,%edi
087ddfcd +0x126d:  je     087ddff8 <+0x1298>
087ddfcf +0x126f:  cmpb   $0x0,0x4(%esi)
087ddfd3 +0x1273:  mov    (%ebx),%eax
087ddfd5 +0x1275:  jne    087ddfc8 <+0x1268>
087ddfd7 +0x1277:  mov    (%esi),%edx
087ddfd9 +0x1279:  mov    0x14(%edx),%ecx
087ddfdc +0x127c:  cmp    0x18(%edx),%ecx
087ddfdf +0x127f:  jae    087de036 <+0x12d6>
087ddfe1 +0x1281:  addl   $0x4,0x14(%edx)
087ddfe5 +0x1285:  mov    %eax,(%ecx)
087ddfe7 +0x1287:  cmp    $0xffffffff,%eax
087ddfea +0x128a:  jne    087ddfc8 <+0x1268>
087ddfec +0x128c:  add    $0x4,%ebx
087ddfef +0x128f:  cmp    %ebx,%edi
087ddff1 +0x1291:  movb   $0x1,0x4(%esi)
087ddff5 +0x1295:  jne    087ddfcf <+0x126f>
087ddff7 +0x1297:  nop
087ddff8 +0x1298:  mov    -0x20(%ebp),%eax
087ddffb +0x129b:  sub    $0xc,%eax
087ddffe +0x129e:  cmp    $&_ZNSbIwSt11char_traitsIwESaIwEE4_Rep20_S_empty_rep_storageE,%eax
087de003 +0x12a3:  je     087ddf84 <+0x1224>
087de009 +0x12a9:  mov    $&data#bb92cc41(.plt),%edx
087de00e +0x12ae:  test   %edx,%edx
087de010 +0x12b0:  je     087de061 <+0x1301>
087de012 +0x12b2:  or     $0xffffffff,%edx
087de015 +0x12b5:  lock xadd %edx,0x8(%eax)
087de01a +0x12ba:  test   %edx,%edx
087de01c +0x12bc:  jg     087ddf84 <+0x1224>
087de022 +0x12c2:  lea    -0x1a(%ebp),%edx
087de025 +0x12c5:  mov    %edx,0x4(%esp)
087de029 +0x12c9:  mov    %eax,(%esp)
087de02c +0x12cc:  call   0871c480 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x6e64>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x6e64
087de031 +0x12d1:  jmp    087ddf84 <+0x1224>
087de036 +0x12d6:  mov    (%edx),%ecx
087de038 +0x12d8:  mov    %eax,0x4(%esp)
087de03c +0x12dc:  mov    %edx,(%esp)
087de03f +0x12df:  call   *0x34(%ecx)
087de042 +0x12e2:  jmp    087ddfe7 <+0x1287>
087de044 +0x12e4:  mov    %eax,(%esp)
087de047 +0x12e7:  call   08ae3750 <_Unwind_Resume>
087de04c +0x12ec:  mov    %eax,%ebx
087de04e +0x12ee:  lea    -0x20(%ebp),%eax
087de051 +0x12f1:  mov    %eax,(%esp)
087de054 +0x12f4:  call   0871d720 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x8104>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x8104
087de059 +0x12f9:  mov    %ebx,(%esp)
087de05c +0x12fc:  call   08ae3750 <_Unwind_Resume>
087de061 +0x1301:  mov    0x8(%eax),%edx
087de064 +0x1304:  lea    -0x1(%edx),%ecx
087de067 +0x1307:  mov    %ecx,0x8(%eax)
087de06a +0x130a:  jmp    087de01a <+0x12ba>
087de06c +0x130c:  nop
087de06d +0x130d:  nop
087de06e +0x130e:  nop
087de06f +0x130f:  nop
087de070 +0x1310:  push   %ebp
087de071 +0x1311:  mov    %esp,%ebp
087de073 +0x1313:  push   %edi
087de074 +0x1314:  push   %esi
087de075 +0x1315:  push   %ebx
087de076 +0x1316:  sub    $0x2c,%esp
087de079 +0x1319:  mov    0xc(%ebp),%esi
087de07c +0x131c:  lea    -0x19(%ebp),%eax
087de07f +0x131f:  mov    %eax,0x8(%esp)
087de083 +0x1323:  lea    -0x20(%ebp),%eax
087de086 +0x1326:  movl   $&_ZN5boost9date_time14date_names_putINS_9gregorian17greg_facet_configEcSt19ostreambuf_iteratorIcSt11char_traitsIcEEE9separatorE,0x4(%esp)
087de08e +0x132e:  mov    %eax,(%esp)
087de091 +0x1331:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
087de096 +0x1336:  mov    -0x20(%ebp),%ebx
087de099 +0x1339:  mov    -0xc(%ebx),%edi
087de09c +0x133c:  lea    -0xc(%ebx),%eax
087de09f +0x133f:  add    %ebx,%edi
087de0a1 +0x1341:  cmp    %edi,%ebx
087de0a3 +0x1343:  jne    087de0af <+0x134f>
087de0a5 +0x1345:  jmp    087de0d5 <+0x1375>
087de0a7 +0x1347:  nop
087de0a8 +0x1348:  add    $0x1,%ebx
087de0ab +0x134b:  cmp    %ebx,%edi
087de0ad +0x134d:  je     087de0cf <+0x136f>
087de0af +0x134f:  cmpb   $0x0,0x4(%esi)
087de0b3 +0x1353:  movzbl (%ebx),%edx
087de0b6 +0x1356:  jne    087de0a8 <+0x1348>
087de0b8 +0x1358:  mov    (%esi),%eax
087de0ba +0x135a:  mov    0x14(%eax),%ecx
087de0bd +0x135d:  cmp    0x18(%eax),%ecx
087de0c0 +0x1360:  jae    087de0e4 <+0x1384>
087de0c2 +0x1362:  add    $0x1,%ebx
087de0c5 +0x1365:  mov    %dl,(%ecx)
087de0c7 +0x1367:  addl   $0x1,0x14(%eax)
087de0cb +0x136b:  cmp    %ebx,%edi
087de0cd +0x136d:  jne    087de0af <+0x134f>
087de0cf +0x136f:  mov    -0x20(%ebp),%eax
087de0d2 +0x1372:  sub    $0xc,%eax
087de0d5 +0x1375:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
087de0da +0x137a:  jne    087de106 <+0x13a6>
087de0dc +0x137c:  add    $0x2c,%esp
087de0df +0x137f:  pop    %ebx
087de0e0 +0x1380:  pop    %esi
087de0e1 +0x1381:  pop    %edi
087de0e2 +0x1382:  pop    %ebp
087de0e3 +0x1383:  ret
087de0e4 +0x1384:  mov    (%eax),%ecx
087de0e6 +0x1386:  movzbl %dl,%edx
087de0e9 +0x1389:  mov    %edx,0x4(%esp)
087de0ed +0x138d:  mov    %eax,(%esp)
087de0f0 +0x1390:  call   *0x34(%ecx)
087de0f3 +0x1393:  cmp    $0xffffffff,%eax
087de0f6 +0x1396:  jne    087de0a8 <+0x1348>
087de0f8 +0x1398:  movb   $0x1,0x4(%esi)
087de0fc +0x139c:  jmp    087de0a8 <+0x1348>
087de0fe +0x139e:  mov    %eax,(%esp)
087de101 +0x13a1:  call   08ae3750 <_Unwind_Resume>
087de106 +0x13a6:  mov    $&data#bb92cc41(.plt),%edx
087de10b +0x13ab:  test   %edx,%edx
087de10d +0x13ad:  je     087de141 <+0x13e1>
087de10f +0x13af:  or     $0xffffffff,%edx
087de112 +0x13b2:  lock xadd %edx,0x8(%eax)
087de117 +0x13b7:  test   %edx,%edx
087de119 +0x13b9:  jg     087de0dc <+0x137c>
087de11b +0x13bb:  lea    -0x1a(%ebp),%edx
087de11e +0x13be:  mov    %edx,0x4(%esp)
087de122 +0x13c2:  mov    %eax,(%esp)
087de125 +0x13c5:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087de12a +0x13ca:  jmp    087de0dc <+0x137c>
087de12c +0x13cc:  mov    %eax,%ebx
087de12e +0x13ce:  lea    -0x20(%ebp),%eax
087de131 +0x13d1:  mov    %eax,(%esp)
087de134 +0x13d4:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
087de139 +0x13d9:  mov    %ebx,(%esp)
087de13c +0x13dc:  call   08ae3750 <_Unwind_Resume>
087de141 +0x13e1:  mov    0x8(%eax),%edx
087de144 +0x13e4:  lea    -0x1(%edx),%ecx
087de147 +0x13e7:  mov    %ecx,0x8(%eax)
087de14a +0x13ea:  jmp    087de117 <+0x13b7>
087de14c +0x13ec:  nop
087de14d +0x13ed:  nop
087de14e +0x13ee:  nop
087de14f +0x13ef:  nop
087de150 +0x13f0:  push   %ebp
087de151 +0x13f1:  mov    %esp,%ebp
087de153 +0x13f3:  push   %edi
087de154 +0x13f4:  push   %esi
087de155 +0x13f5:  push   %ebx
087de156 +0x13f6:  sub    $0x2c,%esp
087de159 +0x13f9:  mov    0xc(%ebp),%esi
087de15c +0x13fc:  lea    -0x19(%ebp),%eax
087de15f +0x13ff:  mov    %eax,0x8(%esp)
087de163 +0x1403:  lea    -0x20(%ebp),%eax
087de166 +0x1406:  movl   $&_ZN5boost9date_time14date_names_putINS_9gregorian17greg_facet_configEcSt19ostreambuf_iteratorIcSt11char_traitsIcEEE9separatorE,0x4(%esp)
087de16e +0x140e:  mov    %eax,(%esp)
087de171 +0x1411:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
087de176 +0x1416:  mov    -0x20(%ebp),%ebx
087de179 +0x1419:  mov    -0xc(%ebx),%edi
087de17c +0x141c:  lea    -0xc(%ebx),%eax
087de17f +0x141f:  add    %ebx,%edi
087de181 +0x1421:  cmp    %edi,%ebx
087de183 +0x1423:  jne    087de18f <+0x142f>
087de185 +0x1425:  jmp    087de1b5 <+0x1455>
087de187 +0x1427:  nop
087de188 +0x1428:  add    $0x1,%ebx
087de18b +0x142b:  cmp    %ebx,%edi
087de18d +0x142d:  je     087de1af <+0x144f>
087de18f +0x142f:  cmpb   $0x0,0x4(%esi)
087de193 +0x1433:  movzbl (%ebx),%edx
087de196 +0x1436:  jne    087de188 <+0x1428>
087de198 +0x1438:  mov    (%esi),%eax
087de19a +0x143a:  mov    0x14(%eax),%ecx
087de19d +0x143d:  cmp    0x18(%eax),%ecx
087de1a0 +0x1440:  jae    087de1c4 <+0x1464>
087de1a2 +0x1442:  add    $0x1,%ebx
087de1a5 +0x1445:  mov    %dl,(%ecx)
087de1a7 +0x1447:  addl   $0x1,0x14(%eax)
087de1ab +0x144b:  cmp    %ebx,%edi
087de1ad +0x144d:  jne    087de18f <+0x142f>
087de1af +0x144f:  mov    -0x20(%ebp),%eax
087de1b2 +0x1452:  sub    $0xc,%eax
087de1b5 +0x1455:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
087de1ba +0x145a:  jne    087de1e6 <+0x1486>
087de1bc +0x145c:  add    $0x2c,%esp
087de1bf +0x145f:  pop    %ebx
087de1c0 +0x1460:  pop    %esi
087de1c1 +0x1461:  pop    %edi
087de1c2 +0x1462:  pop    %ebp
087de1c3 +0x1463:  ret
087de1c4 +0x1464:  mov    (%eax),%ecx
087de1c6 +0x1466:  movzbl %dl,%edx
087de1c9 +0x1469:  mov    %edx,0x4(%esp)
087de1cd +0x146d:  mov    %eax,(%esp)
087de1d0 +0x1470:  call   *0x34(%ecx)
087de1d3 +0x1473:  cmp    $0xffffffff,%eax
087de1d6 +0x1476:  jne    087de188 <+0x1428>
087de1d8 +0x1478:  movb   $0x1,0x4(%esi)
087de1dc +0x147c:  jmp    087de188 <+0x1428>
087de1de +0x147e:  mov    %eax,(%esp)
087de1e1 +0x1481:  call   08ae3750 <_Unwind_Resume>
087de1e6 +0x1486:  mov    $&data#bb92cc41(.plt),%edx
087de1eb +0x148b:  test   %edx,%edx
087de1ed +0x148d:  je     087de221 <+0x14c1>
087de1ef +0x148f:  or     $0xffffffff,%edx
087de1f2 +0x1492:  lock xadd %edx,0x8(%eax)
087de1f7 +0x1497:  test   %edx,%edx
087de1f9 +0x1499:  jg     087de1bc <+0x145c>
087de1fb +0x149b:  lea    -0x1a(%ebp),%edx
087de1fe +0x149e:  mov    %edx,0x4(%esp)
087de202 +0x14a2:  mov    %eax,(%esp)
087de205 +0x14a5:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087de20a +0x14aa:  jmp    087de1bc <+0x145c>
087de20c +0x14ac:  mov    %eax,%ebx
087de20e +0x14ae:  lea    -0x20(%ebp),%eax
087de211 +0x14b1:  mov    %eax,(%esp)
087de214 +0x14b4:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
087de219 +0x14b9:  mov    %ebx,(%esp)
087de21c +0x14bc:  call   08ae3750 <_Unwind_Resume>
087de221 +0x14c1:  mov    0x8(%eax),%edx
087de224 +0x14c4:  lea    -0x1(%edx),%ecx
087de227 +0x14c7:  mov    %ecx,0x8(%eax)
087de22a +0x14ca:  jmp    087de1f7 <+0x1497>
087de22c +0x14cc:  nop
087de22d +0x14cd:  nop
087de22e +0x14ce:  nop
087de22f +0x14cf:  nop
087de230 +0x14d0:  push   %ebp
087de231 +0x14d1:  mov    %esp,%ebp
087de233 +0x14d3:  push   %edi
087de234 +0x14d4:  push   %esi
087de235 +0x14d5:  push   %ebx
087de236 +0x14d6:  sub    $0x2c,%esp
087de239 +0x14d9:  mov    0xc(%ebp),%esi
087de23c +0x14dc:  lea    -0x19(%ebp),%eax
087de23f +0x14df:  mov    %eax,0x8(%esp)
087de243 +0x14e3:  lea    -0x20(%ebp),%eax
087de246 +0x14e6:  movl   $&_ZN5boost9date_time14date_names_putINS_9gregorian17greg_facet_configEcSt19ostreambuf_iteratorIcSt11char_traitsIcEEE9separatorE,0x4(%esp)
087de24e +0x14ee:  mov    %eax,(%esp)
087de251 +0x14f1:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
087de256 +0x14f6:  mov    -0x20(%ebp),%ebx
087de259 +0x14f9:  mov    -0xc(%ebx),%edi
087de25c +0x14fc:  lea    -0xc(%ebx),%eax
087de25f +0x14ff:  add    %ebx,%edi
087de261 +0x1501:  cmp    %edi,%ebx
087de263 +0x1503:  jne    087de26f <+0x150f>
087de265 +0x1505:  jmp    087de295 <+0x1535>
087de267 +0x1507:  nop
087de268 +0x1508:  add    $0x1,%ebx
087de26b +0x150b:  cmp    %ebx,%edi
087de26d +0x150d:  je     087de28f <+0x152f>
087de26f +0x150f:  cmpb   $0x0,0x4(%esi)
087de273 +0x1513:  movzbl (%ebx),%edx
087de276 +0x1516:  jne    087de268 <+0x1508>
087de278 +0x1518:  mov    (%esi),%eax
087de27a +0x151a:  mov    0x14(%eax),%ecx
087de27d +0x151d:  cmp    0x18(%eax),%ecx
087de280 +0x1520:  jae    087de2a4 <+0x1544>
087de282 +0x1522:  add    $0x1,%ebx
087de285 +0x1525:  mov    %dl,(%ecx)
087de287 +0x1527:  addl   $0x1,0x14(%eax)
087de28b +0x152b:  cmp    %ebx,%edi
087de28d +0x152d:  jne    087de26f <+0x150f>
087de28f +0x152f:  mov    -0x20(%ebp),%eax
087de292 +0x1532:  sub    $0xc,%eax
087de295 +0x1535:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
087de29a +0x153a:  jne    087de2c6 <+0x1566>
087de29c +0x153c:  add    $0x2c,%esp
087de29f +0x153f:  pop    %ebx
087de2a0 +0x1540:  pop    %esi
087de2a1 +0x1541:  pop    %edi
087de2a2 +0x1542:  pop    %ebp
087de2a3 +0x1543:  ret
087de2a4 +0x1544:  mov    (%eax),%ecx
087de2a6 +0x1546:  movzbl %dl,%edx
087de2a9 +0x1549:  mov    %edx,0x4(%esp)
087de2ad +0x154d:  mov    %eax,(%esp)
087de2b0 +0x1550:  call   *0x34(%ecx)
087de2b3 +0x1553:  cmp    $0xffffffff,%eax
087de2b6 +0x1556:  jne    087de268 <+0x1508>
087de2b8 +0x1558:  movb   $0x1,0x4(%esi)
087de2bc +0x155c:  jmp    087de268 <+0x1508>
087de2be +0x155e:  mov    %eax,(%esp)
087de2c1 +0x1561:  call   08ae3750 <_Unwind_Resume>
087de2c6 +0x1566:  mov    $&data#bb92cc41(.plt),%edx
087de2cb +0x156b:  test   %edx,%edx
087de2cd +0x156d:  je     087de301 <+0x15a1>
087de2cf +0x156f:  or     $0xffffffff,%edx
087de2d2 +0x1572:  lock xadd %edx,0x8(%eax)
087de2d7 +0x1577:  test   %edx,%edx
087de2d9 +0x1579:  jg     087de29c <+0x153c>
087de2db +0x157b:  lea    -0x1a(%ebp),%edx
087de2de +0x157e:  mov    %edx,0x4(%esp)
087de2e2 +0x1582:  mov    %eax,(%esp)
087de2e5 +0x1585:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087de2ea +0x158a:  jmp    087de29c <+0x153c>
087de2ec +0x158c:  mov    %eax,%ebx
087de2ee +0x158e:  lea    -0x20(%ebp),%eax
087de2f1 +0x1591:  mov    %eax,(%esp)
087de2f4 +0x1594:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
087de2f9 +0x1599:  mov    %ebx,(%esp)
087de2fc +0x159c:  call   08ae3750 <_Unwind_Resume>
087de301 +0x15a1:  mov    0x8(%eax),%edx
087de304 +0x15a4:  lea    -0x1(%edx),%ecx
087de307 +0x15a7:  mov    %ecx,0x8(%eax)
087de30a +0x15aa:  jmp    087de2d7 <+0x1577>
087de30c +0x15ac:  nop
087de30d +0x15ad:  nop
087de30e +0x15ae:  nop
087de30f +0x15af:  nop
087de310 +0x15b0:  push   %ebp
087de311 +0x15b1:  mov    %esp,%ebp
087de313 +0x15b3:  push   %edi
087de314 +0x15b4:  push   %esi
087de315 +0x15b5:  push   %ebx
087de316 +0x15b6:  sub    $0x2c,%esp
087de319 +0x15b9:  mov    0x10(%ebp),%eax
087de31c +0x15bc:  mov    0xc(%ebp),%esi
087de31f +0x15bf:  cmp    $0x2,%eax
087de322 +0x15c2:  jle    087de330 <+0x15d0>
087de324 +0x15c4:  add    $0x2c,%esp
087de327 +0x15c7:  pop    %ebx
087de328 +0x15c8:  pop    %esi
087de329 +0x15c9:  pop    %edi
087de32a +0x15ca:  pop    %ebp
087de32b +0x15cb:  ret
087de32c +0x15cc:  lea    0x0(%esi,%eiz,1),%esi
087de330 +0x15d0:  lea    -0x19(%ebp),%edx
087de333 +0x15d3:  mov    %edx,0x8(%esp)
087de337 +0x15d7:  mov    %eax,%edx
087de339 +0x15d9:  shl    $0x4,%edx
087de33c +0x15dc:  lea    &_ZN5boost9date_time14date_names_putINS_9gregorian17greg_facet_configEcSt19ostreambuf_iteratorIcSt11char_traitsIcEEE27default_special_value_namesE(%eax,%edx,1),%eax
087de343 +0x15e3:  mov    %eax,0x4(%esp)
087de347 +0x15e7:  lea    -0x20(%ebp),%eax
087de34a +0x15ea:  mov    %eax,(%esp)
087de34d +0x15ed:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
087de352 +0x15f2:  mov    -0x20(%ebp),%ebx
087de355 +0x15f5:  mov    -0xc(%ebx),%edi
087de358 +0x15f8:  lea    -0xc(%ebx),%eax
087de35b +0x15fb:  add    %ebx,%edi
087de35d +0x15fd:  cmp    %edi,%ebx
087de35f +0x15ff:  jne    087de36f <+0x160f>
087de361 +0x1601:  jmp    087de395 <+0x1635>
087de363 +0x1603:  nop
087de364 +0x1604:  lea    0x0(%esi,%eiz,1),%esi
087de368 +0x1608:  add    $0x1,%ebx
087de36b +0x160b:  cmp    %ebx,%edi
087de36d +0x160d:  je     087de38f <+0x162f>
087de36f +0x160f:  cmpb   $0x0,0x4(%esi)
087de373 +0x1613:  movzbl (%ebx),%edx
087de376 +0x1616:  jne    087de368 <+0x1608>
087de378 +0x1618:  mov    (%esi),%eax
087de37a +0x161a:  mov    0x14(%eax),%ecx
087de37d +0x161d:  cmp    0x18(%eax),%ecx
087de380 +0x1620:  jae    087de3c9 <+0x1669>
087de382 +0x1622:  add    $0x1,%ebx
087de385 +0x1625:  mov    %dl,(%ecx)
087de387 +0x1627:  addl   $0x1,0x14(%eax)
087de38b +0x162b:  cmp    %ebx,%edi
087de38d +0x162d:  jne    087de36f <+0x160f>
087de38f +0x162f:  mov    -0x20(%ebp),%eax
087de392 +0x1632:  sub    $0xc,%eax
087de395 +0x1635:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
087de39a +0x163a:  je     087de324 <+0x15c4>
087de39c +0x163c:  mov    $&data#bb92cc41(.plt),%edx
087de3a1 +0x1641:  test   %edx,%edx
087de3a3 +0x1643:  je     087de400 <+0x16a0>
087de3a5 +0x1645:  or     $0xffffffff,%edx
087de3a8 +0x1648:  lock xadd %edx,0x8(%eax)
087de3ad +0x164d:  test   %edx,%edx
087de3af +0x164f:  jg     087de324 <+0x15c4>
087de3b5 +0x1655:  lea    -0x1a(%ebp),%edx
087de3b8 +0x1658:  mov    %edx,0x4(%esp)
087de3bc +0x165c:  mov    %eax,(%esp)
087de3bf +0x165f:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087de3c4 +0x1664:  jmp    087de324 <+0x15c4>
087de3c9 +0x1669:  mov    (%eax),%ecx
087de3cb +0x166b:  movzbl %dl,%edx
087de3ce +0x166e:  mov    %edx,0x4(%esp)
087de3d2 +0x1672:  mov    %eax,(%esp)
087de3d5 +0x1675:  call   *0x34(%ecx)
087de3d8 +0x1678:  cmp    $0xffffffff,%eax
087de3db +0x167b:  jne    087de368 <+0x1608>
087de3dd +0x167d:  movb   $0x1,0x4(%esi)
087de3e1 +0x1681:  jmp    087de368 <+0x1608>
087de3e3 +0x1683:  mov    %eax,(%esp)
087de3e6 +0x1686:  call   08ae3750 <_Unwind_Resume>
087de3eb +0x168b:  mov    %eax,%ebx
087de3ed +0x168d:  lea    -0x20(%ebp),%eax
087de3f0 +0x1690:  mov    %eax,(%esp)
087de3f3 +0x1693:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
087de3f8 +0x1698:  mov    %ebx,(%esp)
087de3fb +0x169b:  call   08ae3750 <_Unwind_Resume>
087de400 +0x16a0:  mov    0x8(%eax),%edx
087de403 +0x16a3:  lea    -0x1(%edx),%ecx
087de406 +0x16a6:  mov    %ecx,0x8(%eax)
087de409 +0x16a9:  jmp    087de3ad <+0x164d>
087de40b +0x16ab:  nop
087de40c +0x16ac:  nop
087de40d +0x16ad:  nop
087de40e +0x16ae:  nop
087de40f +0x16af:  nop
087de410 +0x16b0:  push   %ebp
087de411 +0x16b1:  mov    %esp,%ebp
087de413 +0x16b3:  push   %edi
087de414 +0x16b4:  push   %esi
087de415 +0x16b5:  push   %ebx
087de416 +0x16b6:  sub    $0x4c,%esp
087de419 +0x16b9:  mov    0x8(%ebp),%edi
087de41c +0x16bc:  cmpl   $0x0,0xc(%ebp)
087de420 +0x16c0:  je     087de801 <+0x1aa1>
087de426 +0x16c6:  mov    0xc(%ebp),%eax
087de429 +0x16c9:  mov    0xc(%eax),%eax
087de42c +0x16cc:  mov    %eax,-0x44(%ebp)
087de42f +0x16cf:  cmpl   $0x0,-0x44(%ebp)
087de433 +0x16d3:  je     087de7db <+0x1a7b>
087de439 +0x16d9:  mov    -0x44(%ebp),%edx
087de43c +0x16dc:  mov    0xc(%edx),%edx
087de43f +0x16df:  mov    %edx,-0x40(%ebp)
087de442 +0x16e2:  cmpl   $0x0,-0x40(%ebp)
087de446 +0x16e6:  je     087de6f1 <+0x1991>
087de44c +0x16ec:  mov    -0x40(%ebp),%eax
087de44f +0x16ef:  mov    0xc(%eax),%eax
087de452 +0x16f2:  mov    %eax,-0x3c(%ebp)
087de455 +0x16f5:  cmpl   $0x0,-0x3c(%ebp)
087de459 +0x16f9:  je     087de6cb <+0x196b>
087de45f +0x16ff:  mov    -0x3c(%ebp),%edx
087de462 +0x1702:  mov    0xc(%edx),%edx
087de465 +0x1705:  mov    %edx,-0x38(%ebp)
087de468 +0x1708:  cmpl   $0x0,-0x38(%ebp)
087de46c +0x170c:  je     087de5be <+0x185e>
087de472 +0x1712:  mov    -0x38(%ebp),%eax
087de475 +0x1715:  mov    0xc(%eax),%eax
087de478 +0x1718:  test   %eax,%eax
087de47a +0x171a:  mov    %eax,-0x34(%ebp)
087de47d +0x171d:  je     087de598 <+0x1838>
087de483 +0x1723:  mov    -0x34(%ebp),%edx
087de486 +0x1726:  mov    0xc(%edx),%edx
087de489 +0x1729:  test   %edx,%edx
087de48b +0x172b:  mov    %edx,-0x30(%ebp)
087de48e +0x172e:  je     087de546 <+0x17e6>
087de494 +0x1734:  mov    -0x30(%ebp),%eax
087de497 +0x1737:  mov    0xc(%eax),%esi
087de49a +0x173a:  test   %esi,%esi
087de49c +0x173c:  je     087de518 <+0x17b8>
087de49e +0x173e:  xchg   %ax,%ax
087de4a0 +0x1740:  mov    0xc(%esi),%ebx
087de4a3 +0x1743:  test   %ebx,%ebx
087de4a5 +0x1745:  je     087de4f4 <+0x1794>
087de4a7 +0x1747:  mov    $&data#bb92cc41(.plt),%eax
087de4ac +0x174c:  test   %eax,%eax
087de4ae +0x174e:  je     087de646 <+0x18e6>
087de4b4 +0x1754:  mov    %esi,-0x2c(%ebp)
087de4b7 +0x1757:  jmp    087de4c2 <+0x1762>
087de4b9 +0x1759:  lea    0x0(%esi,%eiz,1),%esi
087de4c0 +0x1760:  mov    %esi,%ebx
087de4c2 +0x1762:  mov    0xc(%ebx),%eax
087de4c5 +0x1765:  mov    %edi,(%esp)
087de4c8 +0x1768:  mov    %eax,0x4(%esp)
087de4cc +0x176c:  call   087de410 <+0x16b0>
087de4d1 +0x1771:  mov    0x10(%ebx),%eax
087de4d4 +0x1774:  mov    0x8(%ebx),%esi
087de4d7 +0x1777:  sub    $0xc,%eax
087de4da +0x177a:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
087de4df +0x177f:  jne    087de574 <+0x1814>
087de4e5 +0x1785:  mov    %ebx,(%esp)
087de4e8 +0x1788:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
087de4ed +0x178d:  test   %esi,%esi
087de4ef +0x178f:  jne    087de4c0 <+0x1760>
087de4f1 +0x1791:  mov    -0x2c(%ebp),%esi
087de4f4 +0x1794:  mov    0x10(%esi),%eax
087de4f7 +0x1797:  mov    0x8(%esi),%ebx
087de4fa +0x179a:  sub    $0xc,%eax
087de4fd +0x179d:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
087de502 +0x17a2:  jne    087de772 <+0x1a12>
087de508 +0x17a8:  mov    %esi,(%esp)
087de50b +0x17ab:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
087de510 +0x17b0:  test   %ebx,%ebx
087de512 +0x17b2:  je     087de518 <+0x17b8>
087de514 +0x17b4:  mov    %ebx,%esi
087de516 +0x17b6:  jmp    087de4a0 <+0x1740>
087de518 +0x17b8:  mov    -0x30(%ebp),%eax
087de51b +0x17bb:  mov    0x8(%eax),%ebx
087de51e +0x17be:  mov    0x10(%eax),%eax
087de521 +0x17c1:  sub    $0xc,%eax
087de524 +0x17c4:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
087de529 +0x17c9:  jne    087de79f <+0x1a3f>
087de52f +0x17cf:  mov    -0x30(%ebp),%eax
087de532 +0x17d2:  mov    %eax,(%esp)
087de535 +0x17d5:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
087de53a +0x17da:  test   %ebx,%ebx
087de53c +0x17dc:  je     087de546 <+0x17e6>
087de53e +0x17de:  mov    %ebx,-0x30(%ebp)
087de541 +0x17e1:  jmp    087de494 <+0x1734>
087de546 +0x17e6:  mov    -0x34(%ebp),%edx
087de549 +0x17e9:  mov    0x10(%edx),%eax
087de54c +0x17ec:  mov    0x8(%edx),%ebx
087de54f +0x17ef:  sub    $0xc,%eax
087de552 +0x17f2:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
087de557 +0x17f7:  jne    087de67c <+0x191c>
087de55d +0x17fd:  mov    -0x34(%ebp),%eax
087de560 +0x1800:  mov    %eax,(%esp)
087de563 +0x1803:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
087de568 +0x1808:  test   %ebx,%ebx
087de56a +0x180a:  je     087de598 <+0x1838>
087de56c +0x180c:  mov    %ebx,-0x34(%ebp)
087de56f +0x180f:  jmp    087de483 <+0x1723>
087de574 +0x1814:  or     $0xffffffff,%edx
087de577 +0x1817:  lock xadd %edx,0x8(%eax)
087de57c +0x181c:  test   %edx,%edx
087de57e +0x181e:  jg     087de4e5 <+0x1785>
087de584 +0x1824:  lea    -0x19(%ebp),%edx
087de587 +0x1827:  mov    %edx,0x4(%esp)
087de58b +0x182b:  mov    %eax,(%esp)
087de58e +0x182e:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087de593 +0x1833:  jmp    087de4e5 <+0x1785>
087de598 +0x1838:  mov    -0x38(%ebp),%edx
087de59b +0x183b:  mov    0x10(%edx),%eax
087de59e +0x183e:  mov    0x8(%edx),%ebx
087de5a1 +0x1841:  sub    $0xc,%eax
087de5a4 +0x1844:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
087de5a9 +0x1849:  jne    087de5e4 <+0x1884>
087de5ab +0x184b:  mov    -0x38(%ebp),%eax
087de5ae +0x184e:  mov    %eax,(%esp)
087de5b1 +0x1851:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
087de5b6 +0x1856:  mov    %ebx,-0x38(%ebp)
087de5b9 +0x1859:  jmp    087de468 <+0x1708>
087de5be +0x185e:  mov    -0x3c(%ebp),%edx
087de5c1 +0x1861:  mov    0x10(%edx),%eax
087de5c4 +0x1864:  mov    0x8(%edx),%ebx
087de5c7 +0x1867:  sub    $0xc,%eax
087de5ca +0x186a:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
087de5cf +0x186f:  jne    087de60a <+0x18aa>
087de5d1 +0x1871:  mov    -0x3c(%ebp),%eax
087de5d4 +0x1874:  mov    %eax,(%esp)
087de5d7 +0x1877:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
087de5dc +0x187c:  mov    %ebx,-0x3c(%ebp)
087de5df +0x187f:  jmp    087de455 <+0x16f5>
087de5e4 +0x1884:  mov    $&data#bb92cc41(.plt),%edx
087de5e9 +0x1889:  test   %edx,%edx
087de5eb +0x188b:  je     087de630 <+0x18d0>
087de5ed +0x188d:  or     $0xffffffff,%edx
087de5f0 +0x1890:  lock xadd %edx,0x8(%eax)
087de5f5 +0x1895:  test   %edx,%edx
087de5f7 +0x1897:  jg     087de5ab <+0x184b>
087de5f9 +0x1899:  lea    -0x1d(%ebp),%edx
087de5fc +0x189c:  mov    %edx,0x4(%esp)
087de600 +0x18a0:  mov    %eax,(%esp)
087de603 +0x18a3:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087de608 +0x18a8:  jmp    087de5ab <+0x184b>
087de60a +0x18aa:  mov    $&data#bb92cc41(.plt),%edx
087de60f +0x18af:  test   %edx,%edx
087de611 +0x18b1:  je     087de63b <+0x18db>
087de613 +0x18b3:  or     $0xffffffff,%edx
087de616 +0x18b6:  lock xadd %edx,0x8(%eax)
087de61b +0x18bb:  test   %edx,%edx
087de61d +0x18bd:  jg     087de5d1 <+0x1871>
087de61f +0x18bf:  lea    -0x1e(%ebp),%edx
087de622 +0x18c2:  mov    %edx,0x4(%esp)
087de626 +0x18c6:  mov    %eax,(%esp)
087de629 +0x18c9:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087de62e +0x18ce:  jmp    087de5d1 <+0x1871>
087de630 +0x18d0:  mov    0x8(%eax),%edx
087de633 +0x18d3:  lea    -0x1(%edx),%ecx
087de636 +0x18d6:  mov    %ecx,0x8(%eax)
087de639 +0x18d9:  jmp    087de5f5 <+0x1895>
087de63b +0x18db:  mov    0x8(%eax),%edx
087de63e +0x18de:  lea    -0x1(%edx),%ecx
087de641 +0x18e1:  mov    %ecx,0x8(%eax)
087de644 +0x18e4:  jmp    087de61b <+0x18bb>
087de646 +0x18e6:  mov    %esi,-0x2c(%ebp)
087de649 +0x18e9:  mov    0xc(%ebx),%eax
087de64c +0x18ec:  mov    %edi,(%esp)
087de64f +0x18ef:  mov    %eax,0x4(%esp)
087de653 +0x18f3:  call   087de410 <+0x16b0>
087de658 +0x18f8:  mov    0x10(%ebx),%eax
087de65b +0x18fb:  mov    0x8(%ebx),%esi
087de65e +0x18fe:  sub    $0xc,%eax
087de661 +0x1901:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
087de666 +0x1906:  jne    087de6ad <+0x194d>
087de668 +0x1908:  mov    %ebx,(%esp)
087de66b +0x190b:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
087de670 +0x1910:  test   %esi,%esi
087de672 +0x1912:  je     087de4f1 <+0x1791>
087de678 +0x1918:  mov    %esi,%ebx
087de67a +0x191a:  jmp    087de649 <+0x18e9>
087de67c +0x191c:  mov    $&data#bb92cc41(.plt),%edx
087de681 +0x1921:  test   %edx,%edx
087de683 +0x1923:  je     087de848 <+0x1ae8>
087de689 +0x1929:  or     $0xffffffff,%edx
087de68c +0x192c:  lock xadd %edx,0x8(%eax)
087de691 +0x1931:  test   %edx,%edx
087de693 +0x1933:  jg     087de55d <+0x17fd>
087de699 +0x1939:  lea    -0x1c(%ebp),%edx
087de69c +0x193c:  mov    %edx,0x4(%esp)
087de6a0 +0x1940:  mov    %eax,(%esp)
087de6a3 +0x1943:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087de6a8 +0x1948:  jmp    087de55d <+0x17fd>
087de6ad +0x194d:  mov    0x8(%eax),%edx
087de6b0 +0x1950:  lea    -0x1(%edx),%ecx
087de6b3 +0x1953:  test   %edx,%edx
087de6b5 +0x1955:  mov    %ecx,0x8(%eax)
087de6b8 +0x1958:  jg     087de668 <+0x1908>
087de6ba +0x195a:  lea    -0x19(%ebp),%edx
087de6bd +0x195d:  mov    %edx,0x4(%esp)
087de6c1 +0x1961:  mov    %eax,(%esp)
087de6c4 +0x1964:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087de6c9 +0x1969:  jmp    087de668 <+0x1908>
087de6cb +0x196b:  mov    -0x40(%ebp),%edx
087de6ce +0x196e:  mov    0x10(%edx),%eax
087de6d1 +0x1971:  mov    0x8(%edx),%ebx
087de6d4 +0x1974:  sub    $0xc,%eax
087de6d7 +0x1977:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
087de6dc +0x197c:  jne    087de717 <+0x19b7>
087de6de +0x197e:  mov    -0x40(%ebp),%eax
087de6e1 +0x1981:  mov    %eax,(%esp)
087de6e4 +0x1984:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
087de6e9 +0x1989:  mov    %ebx,-0x40(%ebp)
087de6ec +0x198c:  jmp    087de442 <+0x16e2>
087de6f1 +0x1991:  mov    -0x44(%ebp),%edx
087de6f4 +0x1994:  mov    0x10(%edx),%eax
087de6f7 +0x1997:  mov    0x8(%edx),%ebx
087de6fa +0x199a:  sub    $0xc,%eax
087de6fd +0x199d:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
087de702 +0x19a2:  jne    087de73d <+0x19dd>
087de704 +0x19a4:  mov    -0x44(%ebp),%eax
087de707 +0x19a7:  mov    %eax,(%esp)
087de70a +0x19aa:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
087de70f +0x19af:  mov    %ebx,-0x44(%ebp)
087de712 +0x19b2:  jmp    087de42f <+0x16cf>
087de717 +0x19b7:  mov    $&data#bb92cc41(.plt),%edx
087de71c +0x19bc:  test   %edx,%edx
087de71e +0x19be:  je     087de767 <+0x1a07>
087de720 +0x19c0:  or     $0xffffffff,%edx
087de723 +0x19c3:  lock xadd %edx,0x8(%eax)
087de728 +0x19c8:  test   %edx,%edx
087de72a +0x19ca:  jg     087de6de <+0x197e>
087de72c +0x19cc:  lea    -0x1f(%ebp),%edx
087de72f +0x19cf:  mov    %edx,0x4(%esp)
087de733 +0x19d3:  mov    %eax,(%esp)
087de736 +0x19d6:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087de73b +0x19db:  jmp    087de6de <+0x197e>
087de73d +0x19dd:  mov    $&data#bb92cc41(.plt),%edx
087de742 +0x19e2:  test   %edx,%edx
087de744 +0x19e4:  je     087de82f <+0x1acf>
087de74a +0x19ea:  or     $0xffffffff,%edx
087de74d +0x19ed:  lock xadd %edx,0x8(%eax)
087de752 +0x19f2:  test   %edx,%edx
087de754 +0x19f4:  jg     087de704 <+0x19a4>
087de756 +0x19f6:  lea    -0x20(%ebp),%edx
087de759 +0x19f9:  mov    %edx,0x4(%esp)
087de75d +0x19fd:  mov    %eax,(%esp)
087de760 +0x1a00:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087de765 +0x1a05:  jmp    087de704 <+0x19a4>
087de767 +0x1a07:  mov    0x8(%eax),%edx
087de76a +0x1a0a:  lea    -0x1(%edx),%ecx
087de76d +0x1a0d:  mov    %ecx,0x8(%eax)
087de770 +0x1a10:  jmp    087de728 <+0x19c8>
087de772 +0x1a12:  mov    $&data#bb92cc41(.plt),%edx
087de777 +0x1a17:  test   %edx,%edx
087de779 +0x1a19:  je     087de7d0 <+0x1a70>
087de77b +0x1a1b:  or     $0xffffffff,%edx
087de77e +0x1a1e:  lock xadd %edx,0x8(%eax)
087de783 +0x1a23:  test   %edx,%edx
087de785 +0x1a25:  jg     087de508 <+0x17a8>
087de78b +0x1a2b:  lea    -0x1a(%ebp),%edx
087de78e +0x1a2e:  mov    %edx,0x4(%esp)
087de792 +0x1a32:  mov    %eax,(%esp)
087de795 +0x1a35:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087de79a +0x1a3a:  jmp    087de508 <+0x17a8>
087de79f +0x1a3f:  mov    $&data#bb92cc41(.plt),%edx
087de7a4 +0x1a44:  test   %edx,%edx
087de7a6 +0x1a46:  je     087de856 <+0x1af6>
087de7ac +0x1a4c:  or     $0xffffffff,%edx
087de7af +0x1a4f:  lock xadd %edx,0x8(%eax)
087de7b4 +0x1a54:  test   %edx,%edx
087de7b6 +0x1a56:  jg     087de52f <+0x17cf>
087de7bc +0x1a5c:  lea    -0x1b(%ebp),%edx
087de7bf +0x1a5f:  mov    %edx,0x4(%esp)
087de7c3 +0x1a63:  mov    %eax,(%esp)
087de7c6 +0x1a66:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087de7cb +0x1a6b:  jmp    087de52f <+0x17cf>
087de7d0 +0x1a70:  mov    0x8(%eax),%edx
087de7d3 +0x1a73:  lea    -0x1(%edx),%ecx
087de7d6 +0x1a76:  mov    %ecx,0x8(%eax)
087de7d9 +0x1a79:  jmp    087de783 <+0x1a23>
087de7db +0x1a7b:  mov    0xc(%ebp),%edx
087de7de +0x1a7e:  mov    0x10(%edx),%eax
087de7e1 +0x1a81:  mov    0x8(%edx),%ebx
087de7e4 +0x1a84:  sub    $0xc,%eax
087de7e7 +0x1a87:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
087de7ec +0x1a8c:  jne    087de809 <+0x1aa9>
087de7ee +0x1a8e:  mov    0xc(%ebp),%eax
087de7f1 +0x1a91:  mov    %eax,(%esp)
087de7f4 +0x1a94:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
087de7f9 +0x1a99:  mov    %ebx,0xc(%ebp)
087de7fc +0x1a9c:  jmp    087de41c <+0x16bc>
087de801 +0x1aa1:  add    $0x4c,%esp
087de804 +0x1aa4:  pop    %ebx
087de805 +0x1aa5:  pop    %esi
087de806 +0x1aa6:  pop    %edi
087de807 +0x1aa7:  pop    %ebp
087de808 +0x1aa8:  ret
087de809 +0x1aa9:  mov    $&data#bb92cc41(.plt),%edx
087de80e +0x1aae:  test   %edx,%edx
087de810 +0x1ab0:  je     087de83d <+0x1add>
087de812 +0x1ab2:  or     $0xffffffff,%edx
087de815 +0x1ab5:  lock xadd %edx,0x8(%eax)
087de81a +0x1aba:  test   %edx,%edx
087de81c +0x1abc:  jg     087de7ee <+0x1a8e>
087de81e +0x1abe:  lea    -0x21(%ebp),%edx
087de821 +0x1ac1:  mov    %edx,0x4(%esp)
087de825 +0x1ac5:  mov    %eax,(%esp)
087de828 +0x1ac8:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087de82d +0x1acd:  jmp    087de7ee <+0x1a8e>
087de82f +0x1acf:  mov    0x8(%eax),%edx
087de832 +0x1ad2:  lea    -0x1(%edx),%ecx
087de835 +0x1ad5:  mov    %ecx,0x8(%eax)
087de838 +0x1ad8:  jmp    087de752 <+0x19f2>
087de83d +0x1add:  mov    0x8(%eax),%edx
087de840 +0x1ae0:  lea    -0x1(%edx),%ecx
087de843 +0x1ae3:  mov    %ecx,0x8(%eax)
087de846 +0x1ae6:  jmp    087de81a <+0x1aba>
087de848 +0x1ae8:  mov    0x8(%eax),%edx
087de84b +0x1aeb:  lea    -0x1(%edx),%ecx
087de84e +0x1aee:  mov    %ecx,0x8(%eax)
087de851 +0x1af1:  jmp    087de691 <+0x1931>
087de856 +0x1af6:  mov    0x8(%eax),%edx
087de859 +0x1af9:  lea    -0x1(%edx),%ecx
087de85c +0x1afc:  mov    %ecx,0x8(%eax)
087de85f +0x1aff:  jmp    087de7b4 <+0x1a54>
087de864 +0x1b04:  nop
087de865 +0x1b05:  nop
087de866 +0x1b06:  nop
087de867 +0x1b07:  nop
087de868 +0x1b08:  nop
087de869 +0x1b09:  nop
087de86a +0x1b0a:  nop
087de86b +0x1b0b:  nop
087de86c +0x1b0c:  nop
087de86d +0x1b0d:  nop
087de86e +0x1b0e:  nop
087de86f +0x1b0f:  nop
087de870 +0x1b10:  push   %ebp
087de871 +0x1b11:  mov    %esp,%ebp
087de873 +0x1b13:  push   %ebx
087de874 +0x1b14:  sub    $0x14,%esp
087de877 +0x1b17:  mov    0x8(%ebp),%eax
087de87a +0x1b1a:  mov    0xc(%eax),%ebx
087de87d +0x1b1d:  test   %ebx,%ebx
087de87f +0x1b1f:  je     087de8a0 <+0x1b40>
087de881 +0x1b21:  mov    0x8(%ebx),%eax
087de884 +0x1b24:  mov    %ebx,(%esp)
087de887 +0x1b27:  mov    %eax,0x4(%esp)
087de88b +0x1b2b:  call   087de410 <+0x16b0>
087de890 +0x1b30:  mov    %ebx,0x8(%ebp)
087de893 +0x1b33:  add    $0x14,%esp
087de896 +0x1b36:  pop    %ebx
087de897 +0x1b37:  pop    %ebp
087de898 +0x1b38:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
087de89d +0x1b3d:  lea    0x0(%esi),%esi
087de8a0 +0x1b40:  add    $0x14,%esp
087de8a3 +0x1b43:  pop    %ebx
087de8a4 +0x1b44:  pop    %ebp
087de8a5 +0x1b45:  ret
087de8a6 +0x1b46:  mov    %eax,(%esp)
087de8a9 +0x1b49:  call   08ae3750 <_Unwind_Resume>
087de8ae +0x1b4e:  nop
087de8af +0x1b4f:  nop
087de8b0 +0x1b50:  push   %ebp
087de8b1 +0x1b51:  mov    %esp,%ebp
087de8b3 +0x1b53:  push   %edi
087de8b4 +0x1b54:  push   %esi
087de8b5 +0x1b55:  push   %ebx
087de8b6 +0x1b56:  sub    $0x2c,%esp
087de8b9 +0x1b59:  mov    0xc(%ebp),%esi
087de8bc +0x1b5c:  lea    -0x19(%ebp),%eax
087de8bf +0x1b5f:  mov    %eax,0x8(%esp)
087de8c3 +0x1b63:  mov    0x8(%ebp),%eax
087de8c6 +0x1b66:  add    $0x1c,%eax
087de8c9 +0x1b69:  mov    %eax,0x4(%esp)
087de8cd +0x1b6d:  lea    -0x20(%ebp),%eax
087de8d0 +0x1b70:  mov    %eax,(%esp)
087de8d3 +0x1b73:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
087de8d8 +0x1b78:  mov    -0x20(%ebp),%edi
087de8db +0x1b7b:  lea    -0xc(%edi),%eax
087de8de +0x1b7e:  mov    0x8(%eax),%edx
087de8e1 +0x1b81:  test   %edx,%edx
087de8e3 +0x1b83:  js     087de960 <+0x1c00>
087de8e5 +0x1b85:  lea    -0x20(%ebp),%eax
087de8e8 +0x1b88:  mov    %eax,(%esp)
087de8eb +0x1b8b:  call   08708e00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2a10>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2a10
087de8f0 +0x1b90:  mov    -0x20(%ebp),%edi
087de8f3 +0x1b93:  lea    -0xc(%edi),%eax
087de8f6 +0x1b96:  mov    0x8(%eax),%ebx
087de8f9 +0x1b99:  test   %ebx,%ebx
087de8fb +0x1b9b:  js     087de960 <+0x1c00>
087de8fd +0x1b9d:  lea    -0x20(%ebp),%eax
087de900 +0x1ba0:  mov    %eax,(%esp)
087de903 +0x1ba3:  call   08708e00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2a10>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2a10
087de908 +0x1ba8:  mov    -0x20(%ebp),%edx
087de90b +0x1bab:  mov    %edi,%ebx
087de90d +0x1bad:  lea    -0xc(%edx),%eax
087de910 +0x1bb0:  mov    %edx,%edi
087de912 +0x1bb2:  add    (%eax),%edi
087de914 +0x1bb4:  cmp    %edi,%ebx
087de916 +0x1bb6:  jne    087de927 <+0x1bc7>
087de918 +0x1bb8:  jmp    087de94d <+0x1bed>
087de91a +0x1bba:  lea    0x0(%esi),%esi
087de920 +0x1bc0:  add    $0x1,%ebx
087de923 +0x1bc3:  cmp    %ebx,%edi
087de925 +0x1bc5:  je     087de947 <+0x1be7>
087de927 +0x1bc7:  cmpb   $0x0,0x4(%esi)
087de92b +0x1bcb:  movzbl (%ebx),%edx
087de92e +0x1bce:  jne    087de920 <+0x1bc0>
087de930 +0x1bd0:  mov    (%esi),%eax
087de932 +0x1bd2:  mov    0x14(%eax),%ecx
087de935 +0x1bd5:  cmp    0x18(%eax),%ecx
087de938 +0x1bd8:  jae    087de964 <+0x1c04>
087de93a +0x1bda:  add    $0x1,%ebx
087de93d +0x1bdd:  mov    %dl,(%ecx)
087de93f +0x1bdf:  addl   $0x1,0x14(%eax)
087de943 +0x1be3:  cmp    %ebx,%edi
087de945 +0x1be5:  jne    087de927 <+0x1bc7>
087de947 +0x1be7:  mov    -0x20(%ebp),%eax
087de94a +0x1bea:  sub    $0xc,%eax
087de94d +0x1bed:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
087de952 +0x1bf2:  jne    087de99b <+0x1c3b>
087de954 +0x1bf4:  add    $0x2c,%esp
087de957 +0x1bf7:  pop    %ebx
087de958 +0x1bf8:  pop    %esi
087de959 +0x1bf9:  pop    %edi
087de95a +0x1bfa:  pop    %ebp
087de95b +0x1bfb:  ret
087de95c +0x1bfc:  lea    0x0(%esi,%eiz,1),%esi
087de960 +0x1c00:  mov    %edi,%ebx
087de962 +0x1c02:  jmp    087de912 <+0x1bb2>
087de964 +0x1c04:  mov    (%eax),%ecx
087de966 +0x1c06:  movzbl %dl,%edx
087de969 +0x1c09:  mov    %edx,0x4(%esp)
087de96d +0x1c0d:  mov    %eax,(%esp)
087de970 +0x1c10:  call   *0x34(%ecx)
087de973 +0x1c13:  cmp    $0xffffffff,%eax
087de976 +0x1c16:  jne    087de920 <+0x1bc0>
087de978 +0x1c18:  movb   $0x1,0x4(%esi)
087de97c +0x1c1c:  jmp    087de920 <+0x1bc0>
087de97e +0x1c1e:  mov    %eax,%ebx
087de980 +0x1c20:  lea    -0x20(%ebp),%eax
087de983 +0x1c23:  mov    %eax,(%esp)
087de986 +0x1c26:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
087de98b +0x1c2b:  mov    %ebx,(%esp)
087de98e +0x1c2e:  call   08ae3750 <_Unwind_Resume>
087de993 +0x1c33:  mov    %eax,(%esp)
087de996 +0x1c36:  call   08ae3750 <_Unwind_Resume>
087de99b +0x1c3b:  mov    $&data#bb92cc41(.plt),%edx
087de9a0 +0x1c40:  test   %edx,%edx
087de9a2 +0x1c42:  je     087de9c1 <+0x1c61>
087de9a4 +0x1c44:  or     $0xffffffff,%edx
087de9a7 +0x1c47:  lock xadd %edx,0x8(%eax)
087de9ac +0x1c4c:  test   %edx,%edx
087de9ae +0x1c4e:  jg     087de954 <+0x1bf4>
087de9b0 +0x1c50:  lea    -0x1a(%ebp),%edx
087de9b3 +0x1c53:  mov    %edx,0x4(%esp)
087de9b7 +0x1c57:  mov    %eax,(%esp)
087de9ba +0x1c5a:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087de9bf +0x1c5f:  jmp    087de954 <+0x1bf4>
087de9c1 +0x1c61:  mov    0x8(%eax),%edx
087de9c4 +0x1c64:  lea    -0x1(%edx),%ecx
087de9c7 +0x1c67:  mov    %ecx,0x8(%eax)
087de9ca +0x1c6a:  jmp    087de9ac <+0x1c4c>
087de9cc +0x1c6c:  nop
087de9cd +0x1c6d:  nop
087de9ce +0x1c6e:  nop
087de9cf +0x1c6f:  nop
087de9d0 +0x1c70:  push   %ebp
087de9d1 +0x1c71:  mov    %esp,%ebp
087de9d3 +0x1c73:  push   %edi
087de9d4 +0x1c74:  push   %esi
087de9d5 +0x1c75:  push   %ebx
087de9d6 +0x1c76:  sub    $0x2c,%esp
087de9d9 +0x1c79:  mov    0x10(%ebp),%edx
087de9dc +0x1c7c:  lea    -0x19(%ebp),%eax
087de9df +0x1c7f:  mov    0xc(%ebp),%esi
087de9e2 +0x1c82:  mov    %eax,0x8(%esp)
087de9e6 +0x1c86:  mov    0x8(%ebp),%eax
087de9e9 +0x1c89:  mov    0xc(%eax),%eax
087de9ec +0x1c8c:  mov    -0x4(%eax,%edx,4),%eax
087de9f0 +0x1c90:  mov    %eax,0x4(%esp)
087de9f4 +0x1c94:  lea    -0x20(%ebp),%eax
087de9f7 +0x1c97:  mov    %eax,(%esp)
087de9fa +0x1c9a:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
087de9ff +0x1c9f:  mov    -0x20(%ebp),%ebx
087dea02 +0x1ca2:  lea    -0xc(%ebx),%eax
087dea05 +0x1ca5:  mov    %ebx,%edi
087dea07 +0x1ca7:  mov    0x8(%eax),%edx
087dea0a +0x1caa:  test   %edx,%edx
087dea0c +0x1cac:  js     087dea3b <+0x1cdb>
087dea0e +0x1cae:  lea    -0x20(%ebp),%eax
087dea11 +0x1cb1:  mov    %eax,(%esp)
087dea14 +0x1cb4:  call   08708e00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2a10>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2a10
087dea19 +0x1cb9:  mov    -0x20(%ebp),%edi
087dea1c +0x1cbc:  lea    -0xc(%edi),%eax
087dea1f +0x1cbf:  mov    0x8(%eax),%ecx
087dea22 +0x1cc2:  test   %ecx,%ecx
087dea24 +0x1cc4:  js     087dea9e <+0x1d3e>
087dea26 +0x1cc6:  lea    -0x20(%ebp),%eax
087dea29 +0x1cc9:  mov    %eax,(%esp)
087dea2c +0x1ccc:  call   08708e00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2a10>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2a10
087dea31 +0x1cd1:  mov    -0x20(%ebp),%edx
087dea34 +0x1cd4:  mov    %edi,%ebx
087dea36 +0x1cd6:  lea    -0xc(%edx),%eax
087dea39 +0x1cd9:  mov    %edx,%edi
087dea3b +0x1cdb:  add    (%eax),%edi
087dea3d +0x1cdd:  cmp    %edi,%ebx
087dea3f +0x1cdf:  jne    087dea4f <+0x1cef>
087dea41 +0x1ce1:  jmp    087dea75 <+0x1d15>
087dea43 +0x1ce3:  nop
087dea44 +0x1ce4:  lea    0x0(%esi,%eiz,1),%esi
087dea48 +0x1ce8:  add    $0x1,%ebx
087dea4b +0x1ceb:  cmp    %ebx,%edi
087dea4d +0x1ced:  je     087dea6f <+0x1d0f>
087dea4f +0x1cef:  cmpb   $0x0,0x4(%esi)
087dea53 +0x1cf3:  movzbl (%ebx),%edx
087dea56 +0x1cf6:  jne    087dea48 <+0x1ce8>
087dea58 +0x1cf8:  mov    (%esi),%eax
087dea5a +0x1cfa:  mov    0x14(%eax),%ecx
087dea5d +0x1cfd:  cmp    0x18(%eax),%ecx
087dea60 +0x1d00:  jae    087dea84 <+0x1d24>
087dea62 +0x1d02:  add    $0x1,%ebx
087dea65 +0x1d05:  mov    %dl,(%ecx)
087dea67 +0x1d07:  addl   $0x1,0x14(%eax)
087dea6b +0x1d0b:  cmp    %ebx,%edi
087dea6d +0x1d0d:  jne    087dea4f <+0x1cef>
087dea6f +0x1d0f:  mov    -0x20(%ebp),%eax
087dea72 +0x1d12:  sub    $0xc,%eax
087dea75 +0x1d15:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
087dea7a +0x1d1a:  jne    087deabf <+0x1d5f>
087dea7c +0x1d1c:  add    $0x2c,%esp
087dea7f +0x1d1f:  pop    %ebx
087dea80 +0x1d20:  pop    %esi
087dea81 +0x1d21:  pop    %edi
087dea82 +0x1d22:  pop    %ebp
087dea83 +0x1d23:  ret
087dea84 +0x1d24:  mov    (%eax),%ecx
087dea86 +0x1d26:  movzbl %dl,%edx
087dea89 +0x1d29:  mov    %edx,0x4(%esp)
087dea8d +0x1d2d:  mov    %eax,(%esp)
087dea90 +0x1d30:  call   *0x34(%ecx)
087dea93 +0x1d33:  cmp    $0xffffffff,%eax
087dea96 +0x1d36:  jne    087dea48 <+0x1ce8>
087dea98 +0x1d38:  movb   $0x1,0x4(%esi)
087dea9c +0x1d3c:  jmp    087dea48 <+0x1ce8>
087dea9e +0x1d3e:  mov    %edi,%ebx
087deaa0 +0x1d40:  jmp    087dea3b <+0x1cdb>
087deaa2 +0x1d42:  mov    %eax,%ebx
087deaa4 +0x1d44:  lea    -0x20(%ebp),%eax
087deaa7 +0x1d47:  mov    %eax,(%esp)
087deaaa +0x1d4a:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
087deaaf +0x1d4f:  mov    %ebx,(%esp)
087deab2 +0x1d52:  call   08ae3750 <_Unwind_Resume>
087deab7 +0x1d57:  mov    %eax,(%esp)
087deaba +0x1d5a:  call   08ae3750 <_Unwind_Resume>
087deabf +0x1d5f:  mov    $&data#bb92cc41(.plt),%edx
087deac4 +0x1d64:  test   %edx,%edx
087deac6 +0x1d66:  je     087deae5 <+0x1d85>
087deac8 +0x1d68:  or     $0xffffffff,%edx
087deacb +0x1d6b:  lock xadd %edx,0x8(%eax)
087dead0 +0x1d70:  test   %edx,%edx
087dead2 +0x1d72:  jg     087dea7c <+0x1d1c>
087dead4 +0x1d74:  lea    -0x1a(%ebp),%edx
087dead7 +0x1d77:  mov    %edx,0x4(%esp)
087deadb +0x1d7b:  mov    %eax,(%esp)
087deade +0x1d7e:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087deae3 +0x1d83:  jmp    087dea7c <+0x1d1c>
087deae5 +0x1d85:  mov    0x8(%eax),%edx
087deae8 +0x1d88:  lea    -0x1(%edx),%ecx
087deaeb +0x1d8b:  mov    %ecx,0x8(%eax)
087deaee +0x1d8e:  jmp    087dead0 <+0x1d70>
087deaf0 +0x1d90:  push   %ebp
087deaf1 +0x1d91:  mov    %esp,%ebp
087deaf3 +0x1d93:  push   %edi
087deaf4 +0x1d94:  push   %esi
087deaf5 +0x1d95:  push   %ebx
087deaf6 +0x1d96:  sub    $0x2c,%esp
087deaf9 +0x1d99:  mov    0xc(%ebp),%esi
087deafc +0x1d9c:  lea    -0x19(%ebp),%eax
087deaff +0x1d9f:  mov    %eax,0x8(%esp)
087deb03 +0x1da3:  mov    0x8(%ebp),%eax
087deb06 +0x1da6:  add    $0x1c,%eax
087deb09 +0x1da9:  mov    %eax,0x4(%esp)
087deb0d +0x1dad:  lea    -0x20(%ebp),%eax
087deb10 +0x1db0:  mov    %eax,(%esp)
087deb13 +0x1db3:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
087deb18 +0x1db8:  mov    -0x20(%ebp),%edi
087deb1b +0x1dbb:  lea    -0xc(%edi),%eax
087deb1e +0x1dbe:  mov    0x8(%eax),%ebx
087deb21 +0x1dc1:  test   %ebx,%ebx
087deb23 +0x1dc3:  js     087deba0 <+0x1e40>
087deb25 +0x1dc5:  lea    -0x20(%ebp),%eax
087deb28 +0x1dc8:  mov    %eax,(%esp)
087deb2b +0x1dcb:  call   08708e00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2a10>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2a10
087deb30 +0x1dd0:  mov    -0x20(%ebp),%edi
087deb33 +0x1dd3:  lea    -0xc(%edi),%eax
087deb36 +0x1dd6:  mov    0x8(%eax),%ecx
087deb39 +0x1dd9:  test   %ecx,%ecx
087deb3b +0x1ddb:  js     087deba0 <+0x1e40>
087deb3d +0x1ddd:  lea    -0x20(%ebp),%eax
087deb40 +0x1de0:  mov    %eax,(%esp)
087deb43 +0x1de3:  call   08708e00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2a10>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2a10
087deb48 +0x1de8:  mov    -0x20(%ebp),%edx
087deb4b +0x1deb:  mov    %edi,%ebx
087deb4d +0x1ded:  lea    -0xc(%edx),%eax
087deb50 +0x1df0:  mov    %edx,%edi
087deb52 +0x1df2:  add    (%eax),%edi
087deb54 +0x1df4:  cmp    %edi,%ebx
087deb56 +0x1df6:  jne    087deb67 <+0x1e07>
087deb58 +0x1df8:  jmp    087deb8d <+0x1e2d>
087deb5a +0x1dfa:  lea    0x0(%esi),%esi
087deb60 +0x1e00:  add    $0x1,%ebx
087deb63 +0x1e03:  cmp    %ebx,%edi
087deb65 +0x1e05:  je     087deb87 <+0x1e27>
087deb67 +0x1e07:  cmpb   $0x0,0x4(%esi)
087deb6b +0x1e0b:  movzbl (%ebx),%edx
087deb6e +0x1e0e:  jne    087deb60 <+0x1e00>
087deb70 +0x1e10:  mov    (%esi),%eax
087deb72 +0x1e12:  mov    0x14(%eax),%ecx
087deb75 +0x1e15:  cmp    0x18(%eax),%ecx
087deb78 +0x1e18:  jae    087deba4 <+0x1e44>
087deb7a +0x1e1a:  add    $0x1,%ebx
087deb7d +0x1e1d:  mov    %dl,(%ecx)
087deb7f +0x1e1f:  addl   $0x1,0x14(%eax)
087deb83 +0x1e23:  cmp    %ebx,%edi
087deb85 +0x1e25:  jne    087deb67 <+0x1e07>
087deb87 +0x1e27:  mov    -0x20(%ebp),%eax
087deb8a +0x1e2a:  sub    $0xc,%eax
087deb8d +0x1e2d:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
087deb92 +0x1e32:  jne    087debdb <+0x1e7b>
087deb94 +0x1e34:  add    $0x2c,%esp
087deb97 +0x1e37:  pop    %ebx
087deb98 +0x1e38:  pop    %esi
087deb99 +0x1e39:  pop    %edi
087deb9a +0x1e3a:  pop    %ebp
087deb9b +0x1e3b:  ret
087deb9c +0x1e3c:  lea    0x0(%esi,%eiz,1),%esi
087deba0 +0x1e40:  mov    %edi,%ebx
087deba2 +0x1e42:  jmp    087deb52 <+0x1df2>
087deba4 +0x1e44:  mov    (%eax),%ecx
087deba6 +0x1e46:  movzbl %dl,%edx
087deba9 +0x1e49:  mov    %edx,0x4(%esp)
087debad +0x1e4d:  mov    %eax,(%esp)
087debb0 +0x1e50:  call   *0x34(%ecx)
087debb3 +0x1e53:  cmp    $0xffffffff,%eax
087debb6 +0x1e56:  jne    087deb60 <+0x1e00>
087debb8 +0x1e58:  movb   $0x1,0x4(%esi)
087debbc +0x1e5c:  jmp    087deb60 <+0x1e00>
087debbe +0x1e5e:  mov    %eax,%ebx
087debc0 +0x1e60:  lea    -0x20(%ebp),%eax
087debc3 +0x1e63:  mov    %eax,(%esp)
087debc6 +0x1e66:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
087debcb +0x1e6b:  mov    %ebx,(%esp)
087debce +0x1e6e:  call   08ae3750 <_Unwind_Resume>
087debd3 +0x1e73:  mov    %eax,(%esp)
087debd6 +0x1e76:  call   08ae3750 <_Unwind_Resume>
087debdb +0x1e7b:  mov    $&data#bb92cc41(.plt),%edx
087debe0 +0x1e80:  test   %edx,%edx
087debe2 +0x1e82:  je     087dec01 <+0x1ea1>
087debe4 +0x1e84:  or     $0xffffffff,%edx
087debe7 +0x1e87:  lock xadd %edx,0x8(%eax)
087debec +0x1e8c:  test   %edx,%edx
087debee +0x1e8e:  jg     087deb94 <+0x1e34>
087debf0 +0x1e90:  lea    -0x1a(%ebp),%edx
087debf3 +0x1e93:  mov    %edx,0x4(%esp)
087debf7 +0x1e97:  mov    %eax,(%esp)
087debfa +0x1e9a:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087debff +0x1e9f:  jmp    087deb94 <+0x1e34>
087dec01 +0x1ea1:  mov    0x8(%eax),%edx
087dec04 +0x1ea4:  lea    -0x1(%edx),%ecx
087dec07 +0x1ea7:  mov    %ecx,0x8(%eax)
087dec0a +0x1eaa:  jmp    087debec <+0x1e8c>
087dec0c +0x1eac:  nop
087dec0d +0x1ead:  nop
087dec0e +0x1eae:  nop
087dec0f +0x1eaf:  nop
087dec10 +0x1eb0:  push   %ebp
087dec11 +0x1eb1:  mov    %esp,%ebp
087dec13 +0x1eb3:  push   %edi
087dec14 +0x1eb4:  push   %esi
087dec15 +0x1eb5:  push   %ebx
087dec16 +0x1eb6:  sub    $0x2c,%esp
087dec19 +0x1eb9:  mov    0xc(%ebp),%esi
087dec1c +0x1ebc:  lea    -0x19(%ebp),%eax
087dec1f +0x1ebf:  mov    %eax,0x8(%esp)
087dec23 +0x1ec3:  mov    0x8(%ebp),%eax
087dec26 +0x1ec6:  add    $0x1c,%eax
087dec29 +0x1ec9:  mov    %eax,0x4(%esp)
087dec2d +0x1ecd:  lea    -0x20(%ebp),%eax
087dec30 +0x1ed0:  mov    %eax,(%esp)
087dec33 +0x1ed3:  call   0871d180 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x7b64>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x7b64
087dec38 +0x1ed8:  mov    -0x20(%ebp),%edi
087dec3b +0x1edb:  lea    -0xc(%edi),%eax
087dec3e +0x1ede:  mov    0x8(%eax),%ecx
087dec41 +0x1ee1:  test   %ecx,%ecx
087dec43 +0x1ee3:  js     087decd0 <+0x1f70>
087dec49 +0x1ee9:  lea    -0x20(%ebp),%eax
087dec4c +0x1eec:  mov    %eax,(%esp)
087dec4f +0x1eef:  call   0871e990 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x9374>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x9374
087dec54 +0x1ef4:  mov    -0x20(%ebp),%edi
087dec57 +0x1ef7:  lea    -0xc(%edi),%eax
087dec5a +0x1efa:  mov    0x8(%eax),%edx
087dec5d +0x1efd:  test   %edx,%edx
087dec5f +0x1eff:  js     087decd0 <+0x1f70>
087dec61 +0x1f01:  lea    -0x20(%ebp),%eax
087dec64 +0x1f04:  mov    %eax,(%esp)
087dec67 +0x1f07:  call   0871e990 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x9374>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x9374
087dec6c +0x1f0c:  mov    -0x20(%ebp),%edx
087dec6f +0x1f0f:  mov    %edi,%ebx
087dec71 +0x1f11:  lea    -0xc(%edx),%eax
087dec74 +0x1f14:  mov    %edx,%edi
087dec76 +0x1f16:  mov    (%eax),%edx
087dec78 +0x1f18:  lea    (%edi,%edx,4),%edi
087dec7b +0x1f1b:  cmp    %edi,%ebx
087dec7d +0x1f1d:  jne    087dec8f <+0x1f2f>
087dec7f +0x1f1f:  jmp    087decbe <+0x1f5e>
087dec81 +0x1f21:  lea    0x0(%esi,%eiz,1),%esi
087dec88 +0x1f28:  add    $0x4,%ebx
087dec8b +0x1f2b:  cmp    %ebx,%edi
087dec8d +0x1f2d:  je     087decb8 <+0x1f58>
087dec8f +0x1f2f:  cmpb   $0x0,0x4(%esi)
087dec93 +0x1f33:  mov    (%ebx),%eax
087dec95 +0x1f35:  jne    087dec88 <+0x1f28>
087dec97 +0x1f37:  mov    (%esi),%edx
087dec99 +0x1f39:  mov    0x14(%edx),%ecx
087dec9c +0x1f3c:  cmp    0x18(%edx),%ecx
087dec9f +0x1f3f:  jae    087decd4 <+0x1f74>
087deca1 +0x1f41:  addl   $0x4,0x14(%edx)
087deca5 +0x1f45:  mov    %eax,(%ecx)
087deca7 +0x1f47:  cmp    $0xffffffff,%eax
087decaa +0x1f4a:  jne    087dec88 <+0x1f28>
087decac +0x1f4c:  add    $0x4,%ebx
087decaf +0x1f4f:  cmp    %ebx,%edi
087decb1 +0x1f51:  movb   $0x1,0x4(%esi)
087decb5 +0x1f55:  jne    087dec8f <+0x1f2f>
087decb7 +0x1f57:  nop
087decb8 +0x1f58:  mov    -0x20(%ebp),%eax
087decbb +0x1f5b:  sub    $0xc,%eax
087decbe +0x1f5e:  cmp    $&_ZNSbIwSt11char_traitsIwESaIwEE4_Rep20_S_empty_rep_storageE,%eax
087decc3 +0x1f63:  jne    087decff <+0x1f9f>
087decc5 +0x1f65:  add    $0x2c,%esp
087decc8 +0x1f68:  pop    %ebx
087decc9 +0x1f69:  pop    %esi
087decca +0x1f6a:  pop    %edi
087deccb +0x1f6b:  pop    %ebp
087deccc +0x1f6c:  ret
087deccd +0x1f6d:  lea    0x0(%esi),%esi
087decd0 +0x1f70:  mov    %edi,%ebx
087decd2 +0x1f72:  jmp    087dec76 <+0x1f16>
087decd4 +0x1f74:  mov    (%edx),%ecx
087decd6 +0x1f76:  mov    %eax,0x4(%esp)
087decda +0x1f7a:  mov    %edx,(%esp)
087decdd +0x1f7d:  call   *0x34(%ecx)
087dece0 +0x1f80:  jmp    087deca7 <+0x1f47>
087dece2 +0x1f82:  mov    %eax,%ebx
087dece4 +0x1f84:  lea    -0x20(%ebp),%eax
087dece7 +0x1f87:  mov    %eax,(%esp)
087decea +0x1f8a:  call   0871d720 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x8104>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x8104
087decef +0x1f8f:  mov    %ebx,(%esp)
087decf2 +0x1f92:  call   08ae3750 <_Unwind_Resume>
087decf7 +0x1f97:  mov    %eax,(%esp)
087decfa +0x1f9a:  call   08ae3750 <_Unwind_Resume>
087decff +0x1f9f:  mov    $&data#bb92cc41(.plt),%edx
087ded04 +0x1fa4:  test   %edx,%edx
087ded06 +0x1fa6:  je     087ded25 <+0x1fc5>
087ded08 +0x1fa8:  or     $0xffffffff,%edx
087ded0b +0x1fab:  lock xadd %edx,0x8(%eax)
087ded10 +0x1fb0:  test   %edx,%edx
087ded12 +0x1fb2:  jg     087decc5 <+0x1f65>
087ded14 +0x1fb4:  lea    -0x1a(%ebp),%edx
087ded17 +0x1fb7:  mov    %edx,0x4(%esp)
087ded1b +0x1fbb:  mov    %eax,(%esp)
087ded1e +0x1fbe:  call   0871c480 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x6e64>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x6e64
087ded23 +0x1fc3:  jmp    087decc5 <+0x1f65>
087ded25 +0x1fc5:  mov    0x8(%eax),%edx
087ded28 +0x1fc8:  lea    -0x1(%edx),%ecx
087ded2b +0x1fcb:  mov    %ecx,0x8(%eax)
087ded2e +0x1fce:  jmp    087ded10 <+0x1fb0>
087ded30 +0x1fd0:  push   %ebp
087ded31 +0x1fd1:  mov    %esp,%ebp
087ded33 +0x1fd3:  push   %edi
087ded34 +0x1fd4:  push   %esi
087ded35 +0x1fd5:  push   %ebx
087ded36 +0x1fd6:  sub    $0x2c,%esp
087ded39 +0x1fd9:  mov    0x10(%ebp),%edx
087ded3c +0x1fdc:  lea    -0x19(%ebp),%eax
087ded3f +0x1fdf:  mov    0xc(%ebp),%esi
087ded42 +0x1fe2:  mov    %eax,0x8(%esp)
087ded46 +0x1fe6:  mov    0x8(%ebp),%eax
087ded49 +0x1fe9:  mov    0x8(%eax),%eax
087ded4c +0x1fec:  mov    -0x4(%eax,%edx,4),%eax
087ded50 +0x1ff0:  mov    %eax,0x4(%esp)
087ded54 +0x1ff4:  lea    -0x20(%ebp),%eax
087ded57 +0x1ff7:  mov    %eax,(%esp)
087ded5a +0x1ffa:  call   0871d180 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x7b64>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x7b64
087ded5f +0x1fff:  mov    -0x20(%ebp),%edi
087ded62 +0x2002:  lea    -0xc(%edi),%eax
087ded65 +0x2005:  mov    0x8(%eax),%edx
087ded68 +0x2008:  test   %edx,%edx
087ded6a +0x200a:  js     087dedf0 <+0x2090>
087ded70 +0x2010:  lea    -0x20(%ebp),%eax
087ded73 +0x2013:  mov    %eax,(%esp)
087ded76 +0x2016:  call   0871e990 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x9374>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x9374
087ded7b +0x201b:  mov    -0x20(%ebp),%edi
087ded7e +0x201e:  lea    -0xc(%edi),%eax
087ded81 +0x2021:  mov    0x8(%eax),%ebx
087ded84 +0x2024:  test   %ebx,%ebx
087ded86 +0x2026:  js     087dedf0 <+0x2090>
087ded88 +0x2028:  lea    -0x20(%ebp),%eax
087ded8b +0x202b:  mov    %eax,(%esp)
087ded8e +0x202e:  call   0871e990 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x9374>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x9374
087ded93 +0x2033:  mov    -0x20(%ebp),%edx
087ded96 +0x2036:  mov    %edi,%ebx
087ded98 +0x2038:  lea    -0xc(%edx),%eax
087ded9b +0x203b:  mov    %edx,%edi
087ded9d +0x203d:  mov    (%eax),%edx
087ded9f +0x203f:  lea    (%edi,%edx,4),%edi
087deda2 +0x2042:  cmp    %edi,%ebx
087deda4 +0x2044:  jne    087dedaf <+0x204f>
087deda6 +0x2046:  jmp    087dedde <+0x207e>
087deda8 +0x2048:  add    $0x4,%ebx
087dedab +0x204b:  cmp    %ebx,%edi
087dedad +0x204d:  je     087dedd8 <+0x2078>
087dedaf +0x204f:  cmpb   $0x0,0x4(%esi)
087dedb3 +0x2053:  mov    (%ebx),%eax
087dedb5 +0x2055:  jne    087deda8 <+0x2048>
087dedb7 +0x2057:  mov    (%esi),%edx
087dedb9 +0x2059:  mov    0x14(%edx),%ecx
087dedbc +0x205c:  cmp    0x18(%edx),%ecx
087dedbf +0x205f:  jae    087dedf4 <+0x2094>
087dedc1 +0x2061:  addl   $0x4,0x14(%edx)
087dedc5 +0x2065:  mov    %eax,(%ecx)
087dedc7 +0x2067:  cmp    $0xffffffff,%eax
087dedca +0x206a:  jne    087deda8 <+0x2048>
087dedcc +0x206c:  add    $0x4,%ebx
087dedcf +0x206f:  cmp    %ebx,%edi
087dedd1 +0x2071:  movb   $0x1,0x4(%esi)
087dedd5 +0x2075:  jne    087dedaf <+0x204f>
087dedd7 +0x2077:  nop
087dedd8 +0x2078:  mov    -0x20(%ebp),%eax
087deddb +0x207b:  sub    $0xc,%eax
087dedde +0x207e:  cmp    $&_ZNSbIwSt11char_traitsIwESaIwEE4_Rep20_S_empty_rep_storageE,%eax
087dede3 +0x2083:  jne    087dee1f <+0x20bf>
087dede5 +0x2085:  add    $0x2c,%esp
087dede8 +0x2088:  pop    %ebx
087dede9 +0x2089:  pop    %esi
087dedea +0x208a:  pop    %edi
087dedeb +0x208b:  pop    %ebp
087dedec +0x208c:  ret
087deded +0x208d:  lea    0x0(%esi),%esi
087dedf0 +0x2090:  mov    %edi,%ebx
087dedf2 +0x2092:  jmp    087ded9d <+0x203d>
087dedf4 +0x2094:  mov    (%edx),%ecx
087dedf6 +0x2096:  mov    %eax,0x4(%esp)
087dedfa +0x209a:  mov    %edx,(%esp)
087dedfd +0x209d:  call   *0x34(%ecx)
087dee00 +0x20a0:  jmp    087dedc7 <+0x2067>
087dee02 +0x20a2:  mov    %eax,%ebx
087dee04 +0x20a4:  lea    -0x20(%ebp),%eax
087dee07 +0x20a7:  mov    %eax,(%esp)
087dee0a +0x20aa:  call   0871d720 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x8104>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x8104
087dee0f +0x20af:  mov    %ebx,(%esp)
087dee12 +0x20b2:  call   08ae3750 <_Unwind_Resume>
087dee17 +0x20b7:  mov    %eax,(%esp)
087dee1a +0x20ba:  call   08ae3750 <_Unwind_Resume>
087dee1f +0x20bf:  mov    $&data#bb92cc41(.plt),%edx
087dee24 +0x20c4:  test   %edx,%edx
087dee26 +0x20c6:  je     087dee45 <+0x20e5>
087dee28 +0x20c8:  or     $0xffffffff,%edx
087dee2b +0x20cb:  lock xadd %edx,0x8(%eax)
087dee30 +0x20d0:  test   %edx,%edx
087dee32 +0x20d2:  jg     087dede5 <+0x2085>
087dee34 +0x20d4:  lea    -0x1a(%ebp),%edx
087dee37 +0x20d7:  mov    %edx,0x4(%esp)
087dee3b +0x20db:  mov    %eax,(%esp)
087dee3e +0x20de:  call   0871c480 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x6e64>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x6e64
087dee43 +0x20e3:  jmp    087dede5 <+0x2085>
087dee45 +0x20e5:  mov    0x8(%eax),%edx
087dee48 +0x20e8:  lea    -0x1(%edx),%ecx
087dee4b +0x20eb:  mov    %ecx,0x8(%eax)
087dee4e +0x20ee:  jmp    087dee30 <+0x20d0>
087dee50 +0x20f0:  push   %ebp
087dee51 +0x20f1:  mov    %esp,%ebp
087dee53 +0x20f3:  push   %edi
087dee54 +0x20f4:  push   %esi
087dee55 +0x20f5:  push   %ebx
087dee56 +0x20f6:  sub    $0x2c,%esp
087dee59 +0x20f9:  mov    0x10(%ebp),%edx
087dee5c +0x20fc:  lea    -0x19(%ebp),%eax
087dee5f +0x20ff:  mov    0xc(%ebp),%esi
087dee62 +0x2102:  mov    %eax,0x8(%esp)
087dee66 +0x2106:  mov    0x8(%ebp),%eax
087dee69 +0x2109:  mov    0x14(%eax),%eax
087dee6c +0x210c:  mov    (%eax,%edx,4),%eax
087dee6f +0x210f:  mov    %eax,0x4(%esp)
087dee73 +0x2113:  lea    -0x20(%ebp),%eax
087dee76 +0x2116:  mov    %eax,(%esp)
087dee79 +0x2119:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
087dee7e +0x211e:  mov    -0x20(%ebp),%ebx
087dee81 +0x2121:  lea    -0xc(%ebx),%eax
087dee84 +0x2124:  mov    %ebx,%edi
087dee86 +0x2126:  mov    0x8(%eax),%edx
087dee89 +0x2129:  test   %edx,%edx
087dee8b +0x212b:  js     087deeba <+0x215a>
087dee8d +0x212d:  lea    -0x20(%ebp),%eax
087dee90 +0x2130:  mov    %eax,(%esp)
087dee93 +0x2133:  call   08708e00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2a10>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2a10
087dee98 +0x2138:  mov    -0x20(%ebp),%edi
087dee9b +0x213b:  lea    -0xc(%edi),%eax
087dee9e +0x213e:  mov    0x8(%eax),%ecx
087deea1 +0x2141:  test   %ecx,%ecx
087deea3 +0x2143:  js     087def1e <+0x21be>
087deea5 +0x2145:  lea    -0x20(%ebp),%eax
087deea8 +0x2148:  mov    %eax,(%esp)
087deeab +0x214b:  call   08708e00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2a10>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2a10
087deeb0 +0x2150:  mov    -0x20(%ebp),%edx
087deeb3 +0x2153:  mov    %edi,%ebx
087deeb5 +0x2155:  lea    -0xc(%edx),%eax
087deeb8 +0x2158:  mov    %edx,%edi
087deeba +0x215a:  add    (%eax),%edi
087deebc +0x215c:  cmp    %edi,%ebx
087deebe +0x215e:  jne    087deecf <+0x216f>
087deec0 +0x2160:  jmp    087deef5 <+0x2195>
087deec2 +0x2162:  lea    0x0(%esi),%esi
087deec8 +0x2168:  add    $0x1,%ebx
087deecb +0x216b:  cmp    %ebx,%edi
087deecd +0x216d:  je     087deeef <+0x218f>
087deecf +0x216f:  cmpb   $0x0,0x4(%esi)
087deed3 +0x2173:  movzbl (%ebx),%edx
087deed6 +0x2176:  jne    087deec8 <+0x2168>
087deed8 +0x2178:  mov    (%esi),%eax
087deeda +0x217a:  mov    0x14(%eax),%ecx
087deedd +0x217d:  cmp    0x18(%eax),%ecx
087deee0 +0x2180:  jae    087def04 <+0x21a4>
087deee2 +0x2182:  add    $0x1,%ebx
087deee5 +0x2185:  mov    %dl,(%ecx)
087deee7 +0x2187:  addl   $0x1,0x14(%eax)
087deeeb +0x218b:  cmp    %ebx,%edi
087deeed +0x218d:  jne    087deecf <+0x216f>
087deeef +0x218f:  mov    -0x20(%ebp),%eax
087deef2 +0x2192:  sub    $0xc,%eax
087deef5 +0x2195:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
087deefa +0x219a:  jne    087def3f <+0x21df>
087deefc +0x219c:  add    $0x2c,%esp
087deeff +0x219f:  pop    %ebx
087def00 +0x21a0:  pop    %esi
087def01 +0x21a1:  pop    %edi
087def02 +0x21a2:  pop    %ebp
087def03 +0x21a3:  ret
087def04 +0x21a4:  mov    (%eax),%ecx
087def06 +0x21a6:  movzbl %dl,%edx
087def09 +0x21a9:  mov    %edx,0x4(%esp)
087def0d +0x21ad:  mov    %eax,(%esp)
087def10 +0x21b0:  call   *0x34(%ecx)
087def13 +0x21b3:  cmp    $0xffffffff,%eax
087def16 +0x21b6:  jne    087deec8 <+0x2168>
087def18 +0x21b8:  movb   $0x1,0x4(%esi)
087def1c +0x21bc:  jmp    087deec8 <+0x2168>
087def1e +0x21be:  mov    %edi,%ebx
087def20 +0x21c0:  jmp    087deeba <+0x215a>
087def22 +0x21c2:  mov    %eax,%ebx
087def24 +0x21c4:  lea    -0x20(%ebp),%eax
087def27 +0x21c7:  mov    %eax,(%esp)
087def2a +0x21ca:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
087def2f +0x21cf:  mov    %ebx,(%esp)
087def32 +0x21d2:  call   08ae3750 <_Unwind_Resume>
087def37 +0x21d7:  mov    %eax,(%esp)
087def3a +0x21da:  call   08ae3750 <_Unwind_Resume>
087def3f +0x21df:  mov    $&data#bb92cc41(.plt),%edx
087def44 +0x21e4:  test   %edx,%edx
087def46 +0x21e6:  je     087def65 <+0x2205>
087def48 +0x21e8:  or     $0xffffffff,%edx
087def4b +0x21eb:  lock xadd %edx,0x8(%eax)
087def50 +0x21f0:  test   %edx,%edx
087def52 +0x21f2:  jg     087deefc <+0x219c>
087def54 +0x21f4:  lea    -0x1a(%ebp),%edx
087def57 +0x21f7:  mov    %edx,0x4(%esp)
087def5b +0x21fb:  mov    %eax,(%esp)
087def5e +0x21fe:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087def63 +0x2203:  jmp    087deefc <+0x219c>
087def65 +0x2205:  mov    0x8(%eax),%edx
087def68 +0x2208:  lea    -0x1(%edx),%ecx
087def6b +0x220b:  mov    %ecx,0x8(%eax)
087def6e +0x220e:  jmp    087def50 <+0x21f0>
087def70 +0x2210:  push   %ebp
087def71 +0x2211:  mov    %esp,%ebp
087def73 +0x2213:  push   %edi
087def74 +0x2214:  push   %esi
087def75 +0x2215:  push   %ebx
087def76 +0x2216:  sub    $0x2c,%esp
087def79 +0x2219:  mov    0x10(%ebp),%edx
087def7c +0x221c:  lea    -0x19(%ebp),%eax
087def7f +0x221f:  mov    0xc(%ebp),%esi
087def82 +0x2222:  mov    %eax,0x8(%esp)
087def86 +0x2226:  mov    0x8(%ebp),%eax
087def89 +0x2229:  mov    0x18(%eax),%eax
087def8c +0x222c:  mov    (%eax,%edx,4),%eax
087def8f +0x222f:  mov    %eax,0x4(%esp)
087def93 +0x2233:  lea    -0x20(%ebp),%eax
087def96 +0x2236:  mov    %eax,(%esp)
087def99 +0x2239:  call   0871d180 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x7b64>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x7b64
087def9e +0x223e:  mov    -0x20(%ebp),%edi
087defa1 +0x2241:  lea    -0xc(%edi),%eax
087defa4 +0x2244:  mov    0x8(%eax),%ebx
087defa7 +0x2247:  test   %ebx,%ebx
087defa9 +0x2249:  js     087df030 <+0x22d0>
087defaf +0x224f:  lea    -0x20(%ebp),%eax
087defb2 +0x2252:  mov    %eax,(%esp)
087defb5 +0x2255:  call   0871e990 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x9374>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x9374
087defba +0x225a:  mov    -0x20(%ebp),%edi
087defbd +0x225d:  lea    -0xc(%edi),%eax
087defc0 +0x2260:  mov    0x8(%eax),%ecx
087defc3 +0x2263:  test   %ecx,%ecx
087defc5 +0x2265:  js     087df030 <+0x22d0>
087defc7 +0x2267:  lea    -0x20(%ebp),%eax
087defca +0x226a:  mov    %eax,(%esp)
087defcd +0x226d:  call   0871e990 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x9374>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x9374
087defd2 +0x2272:  mov    -0x20(%ebp),%edx
087defd5 +0x2275:  mov    %edi,%ebx
087defd7 +0x2277:  lea    -0xc(%edx),%eax
087defda +0x227a:  mov    %edx,%edi
087defdc +0x227c:  mov    (%eax),%edx
087defde +0x227e:  lea    (%edi,%edx,4),%edi
087defe1 +0x2281:  cmp    %edi,%ebx
087defe3 +0x2283:  jne    087defef <+0x228f>
087defe5 +0x2285:  jmp    087df01e <+0x22be>
087defe7 +0x2287:  nop
087defe8 +0x2288:  add    $0x4,%ebx
087defeb +0x228b:  cmp    %ebx,%edi
087defed +0x228d:  je     087df018 <+0x22b8>
087defef +0x228f:  cmpb   $0x0,0x4(%esi)
087deff3 +0x2293:  mov    (%ebx),%eax
087deff5 +0x2295:  jne    087defe8 <+0x2288>
087deff7 +0x2297:  mov    (%esi),%edx
087deff9 +0x2299:  mov    0x14(%edx),%ecx
087deffc +0x229c:  cmp    0x18(%edx),%ecx
087defff +0x229f:  jae    087df034 <+0x22d4>
087df001 +0x22a1:  addl   $0x4,0x14(%edx)
087df005 +0x22a5:  mov    %eax,(%ecx)
087df007 +0x22a7:  cmp    $0xffffffff,%eax
087df00a +0x22aa:  jne    087defe8 <+0x2288>
087df00c +0x22ac:  add    $0x4,%ebx
087df00f +0x22af:  cmp    %ebx,%edi
087df011 +0x22b1:  movb   $0x1,0x4(%esi)
087df015 +0x22b5:  jne    087defef <+0x228f>
087df017 +0x22b7:  nop
087df018 +0x22b8:  mov    -0x20(%ebp),%eax
087df01b +0x22bb:  sub    $0xc,%eax
087df01e +0x22be:  cmp    $&_ZNSbIwSt11char_traitsIwESaIwEE4_Rep20_S_empty_rep_storageE,%eax
087df023 +0x22c3:  jne    087df05f <+0x22ff>
087df025 +0x22c5:  add    $0x2c,%esp
087df028 +0x22c8:  pop    %ebx
087df029 +0x22c9:  pop    %esi
087df02a +0x22ca:  pop    %edi
087df02b +0x22cb:  pop    %ebp
087df02c +0x22cc:  ret
087df02d +0x22cd:  lea    0x0(%esi),%esi
087df030 +0x22d0:  mov    %edi,%ebx
087df032 +0x22d2:  jmp    087defdc <+0x227c>
087df034 +0x22d4:  mov    (%edx),%ecx
087df036 +0x22d6:  mov    %eax,0x4(%esp)
087df03a +0x22da:  mov    %edx,(%esp)
087df03d +0x22dd:  call   *0x34(%ecx)
087df040 +0x22e0:  jmp    087df007 <+0x22a7>
087df042 +0x22e2:  mov    %eax,%ebx
087df044 +0x22e4:  lea    -0x20(%ebp),%eax
087df047 +0x22e7:  mov    %eax,(%esp)
087df04a +0x22ea:  call   0871d720 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x8104>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x8104
087df04f +0x22ef:  mov    %ebx,(%esp)
087df052 +0x22f2:  call   08ae3750 <_Unwind_Resume>
087df057 +0x22f7:  mov    %eax,(%esp)
087df05a +0x22fa:  call   08ae3750 <_Unwind_Resume>
087df05f +0x22ff:  mov    $&data#bb92cc41(.plt),%edx
087df064 +0x2304:  test   %edx,%edx
087df066 +0x2306:  je     087df085 <+0x2325>
087df068 +0x2308:  or     $0xffffffff,%edx
087df06b +0x230b:  lock xadd %edx,0x8(%eax)
087df070 +0x2310:  test   %edx,%edx
087df072 +0x2312:  jg     087df025 <+0x22c5>
087df074 +0x2314:  lea    -0x1a(%ebp),%edx
087df077 +0x2317:  mov    %edx,0x4(%esp)
087df07b +0x231b:  mov    %eax,(%esp)
087df07e +0x231e:  call   0871c480 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x6e64>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x6e64
087df083 +0x2323:  jmp    087df025 <+0x22c5>
087df085 +0x2325:  mov    0x8(%eax),%edx
087df088 +0x2328:  lea    -0x1(%edx),%ecx
087df08b +0x232b:  mov    %ecx,0x8(%eax)
087df08e +0x232e:  jmp    087df070 <+0x2310>
087df090 +0x2330:  push   %ebp
087df091 +0x2331:  mov    %esp,%ebp
087df093 +0x2333:  push   %edi
087df094 +0x2334:  push   %esi
087df095 +0x2335:  push   %ebx
087df096 +0x2336:  sub    $0x2c,%esp
087df099 +0x2339:  mov    0x10(%ebp),%edx
087df09c +0x233c:  lea    -0x19(%ebp),%eax
087df09f +0x233f:  mov    0xc(%ebp),%esi
087df0a2 +0x2342:  mov    %eax,0x8(%esp)
087df0a6 +0x2346:  mov    0x8(%ebp),%eax
087df0a9 +0x2349:  mov    0x8(%eax),%eax
087df0ac +0x234c:  mov    -0x4(%eax,%edx,4),%eax
087df0b0 +0x2350:  mov    %eax,0x4(%esp)
087df0b4 +0x2354:  lea    -0x20(%ebp),%eax
087df0b7 +0x2357:  mov    %eax,(%esp)
087df0ba +0x235a:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
087df0bf +0x235f:  mov    -0x20(%ebp),%ebx
087df0c2 +0x2362:  lea    -0xc(%ebx),%eax
087df0c5 +0x2365:  mov    %ebx,%edi
087df0c7 +0x2367:  mov    0x8(%eax),%ecx
087df0ca +0x236a:  test   %ecx,%ecx
087df0cc +0x236c:  js     087df0fb <+0x239b>
087df0ce +0x236e:  lea    -0x20(%ebp),%eax
087df0d1 +0x2371:  mov    %eax,(%esp)
087df0d4 +0x2374:  call   08708e00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2a10>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2a10
087df0d9 +0x2379:  mov    -0x20(%ebp),%edi
087df0dc +0x237c:  lea    -0xc(%edi),%eax
087df0df +0x237f:  mov    0x8(%eax),%edx
087df0e2 +0x2382:  test   %edx,%edx
087df0e4 +0x2384:  js     087df15e <+0x23fe>
087df0e6 +0x2386:  lea    -0x20(%ebp),%eax
087df0e9 +0x2389:  mov    %eax,(%esp)
087df0ec +0x238c:  call   08708e00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2a10>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2a10
087df0f1 +0x2391:  mov    -0x20(%ebp),%edx
087df0f4 +0x2394:  mov    %edi,%ebx
087df0f6 +0x2396:  lea    -0xc(%edx),%eax
087df0f9 +0x2399:  mov    %edx,%edi
087df0fb +0x239b:  add    (%eax),%edi
087df0fd +0x239d:  cmp    %edi,%ebx
087df0ff +0x239f:  jne    087df10f <+0x23af>
087df101 +0x23a1:  jmp    087df135 <+0x23d5>
087df103 +0x23a3:  nop
087df104 +0x23a4:  lea    0x0(%esi,%eiz,1),%esi
087df108 +0x23a8:  add    $0x1,%ebx
087df10b +0x23ab:  cmp    %ebx,%edi
087df10d +0x23ad:  je     087df12f <+0x23cf>
087df10f +0x23af:  cmpb   $0x0,0x4(%esi)
087df113 +0x23b3:  movzbl (%ebx),%edx
087df116 +0x23b6:  jne    087df108 <+0x23a8>
087df118 +0x23b8:  mov    (%esi),%eax
087df11a +0x23ba:  mov    0x14(%eax),%ecx
087df11d +0x23bd:  cmp    0x18(%eax),%ecx
087df120 +0x23c0:  jae    087df144 <+0x23e4>
087df122 +0x23c2:  add    $0x1,%ebx
087df125 +0x23c5:  mov    %dl,(%ecx)
087df127 +0x23c7:  addl   $0x1,0x14(%eax)
087df12b +0x23cb:  cmp    %ebx,%edi
087df12d +0x23cd:  jne    087df10f <+0x23af>
087df12f +0x23cf:  mov    -0x20(%ebp),%eax
087df132 +0x23d2:  sub    $0xc,%eax
087df135 +0x23d5:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
087df13a +0x23da:  jne    087df17f <+0x241f>
087df13c +0x23dc:  add    $0x2c,%esp
087df13f +0x23df:  pop    %ebx
087df140 +0x23e0:  pop    %esi
087df141 +0x23e1:  pop    %edi
087df142 +0x23e2:  pop    %ebp
087df143 +0x23e3:  ret
087df144 +0x23e4:  mov    (%eax),%ecx
087df146 +0x23e6:  movzbl %dl,%edx
087df149 +0x23e9:  mov    %edx,0x4(%esp)
087df14d +0x23ed:  mov    %eax,(%esp)
087df150 +0x23f0:  call   *0x34(%ecx)
087df153 +0x23f3:  cmp    $0xffffffff,%eax
087df156 +0x23f6:  jne    087df108 <+0x23a8>
087df158 +0x23f8:  movb   $0x1,0x4(%esi)
087df15c +0x23fc:  jmp    087df108 <+0x23a8>
087df15e +0x23fe:  mov    %edi,%ebx
087df160 +0x2400:  jmp    087df0fb <+0x239b>
087df162 +0x2402:  mov    %eax,%ebx
087df164 +0x2404:  lea    -0x20(%ebp),%eax
087df167 +0x2407:  mov    %eax,(%esp)
087df16a +0x240a:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
087df16f +0x240f:  mov    %ebx,(%esp)
087df172 +0x2412:  call   08ae3750 <_Unwind_Resume>
087df177 +0x2417:  mov    %eax,(%esp)
087df17a +0x241a:  call   08ae3750 <_Unwind_Resume>
087df17f +0x241f:  mov    $&data#bb92cc41(.plt),%edx
087df184 +0x2424:  test   %edx,%edx
087df186 +0x2426:  je     087df1a5 <+0x2445>
087df188 +0x2428:  or     $0xffffffff,%edx
087df18b +0x242b:  lock xadd %edx,0x8(%eax)
087df190 +0x2430:  test   %edx,%edx
087df192 +0x2432:  jg     087df13c <+0x23dc>
087df194 +0x2434:  lea    -0x1a(%ebp),%edx
087df197 +0x2437:  mov    %edx,0x4(%esp)
087df19b +0x243b:  mov    %eax,(%esp)
087df19e +0x243e:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087df1a3 +0x2443:  jmp    087df13c <+0x23dc>
087df1a5 +0x2445:  mov    0x8(%eax),%edx
087df1a8 +0x2448:  lea    -0x1(%edx),%ecx
087df1ab +0x244b:  mov    %ecx,0x8(%eax)
087df1ae +0x244e:  jmp    087df190 <+0x2430>
087df1b0 +0x2450:  push   %ebp
087df1b1 +0x2451:  mov    %esp,%ebp
087df1b3 +0x2453:  push   %edi
087df1b4 +0x2454:  push   %esi
087df1b5 +0x2455:  push   %ebx
087df1b6 +0x2456:  sub    $0x2c,%esp
087df1b9 +0x2459:  mov    0x10(%ebp),%edx
087df1bc +0x245c:  lea    -0x19(%ebp),%eax
087df1bf +0x245f:  mov    0xc(%ebp),%esi
087df1c2 +0x2462:  mov    %eax,0x8(%esp)
087df1c6 +0x2466:  mov    0x8(%ebp),%eax
087df1c9 +0x2469:  mov    0x18(%eax),%eax
087df1cc +0x246c:  mov    (%eax,%edx,4),%eax
087df1cf +0x246f:  mov    %eax,0x4(%esp)
087df1d3 +0x2473:  lea    -0x20(%ebp),%eax
087df1d6 +0x2476:  mov    %eax,(%esp)
087df1d9 +0x2479:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
087df1de +0x247e:  mov    -0x20(%ebp),%ebx
087df1e1 +0x2481:  lea    -0xc(%ebx),%eax
087df1e4 +0x2484:  mov    %ebx,%edi
087df1e6 +0x2486:  mov    0x8(%eax),%edx
087df1e9 +0x2489:  test   %edx,%edx
087df1eb +0x248b:  js     087df21a <+0x24ba>
087df1ed +0x248d:  lea    -0x20(%ebp),%eax
087df1f0 +0x2490:  mov    %eax,(%esp)
087df1f3 +0x2493:  call   08708e00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2a10>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2a10
087df1f8 +0x2498:  mov    -0x20(%ebp),%edi
087df1fb +0x249b:  lea    -0xc(%edi),%eax
087df1fe +0x249e:  mov    0x8(%eax),%ebx
087df201 +0x24a1:  test   %ebx,%ebx
087df203 +0x24a3:  js     087df27e <+0x251e>
087df205 +0x24a5:  lea    -0x20(%ebp),%eax
087df208 +0x24a8:  mov    %eax,(%esp)
087df20b +0x24ab:  call   08708e00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2a10>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2a10
087df210 +0x24b0:  mov    -0x20(%ebp),%edx
087df213 +0x24b3:  mov    %edi,%ebx
087df215 +0x24b5:  lea    -0xc(%edx),%eax
087df218 +0x24b8:  mov    %edx,%edi
087df21a +0x24ba:  add    (%eax),%edi
087df21c +0x24bc:  cmp    %edi,%ebx
087df21e +0x24be:  jne    087df22f <+0x24cf>
087df220 +0x24c0:  jmp    087df255 <+0x24f5>
087df222 +0x24c2:  lea    0x0(%esi),%esi
087df228 +0x24c8:  add    $0x1,%ebx
087df22b +0x24cb:  cmp    %ebx,%edi
087df22d +0x24cd:  je     087df24f <+0x24ef>
087df22f +0x24cf:  cmpb   $0x0,0x4(%esi)
087df233 +0x24d3:  movzbl (%ebx),%edx
087df236 +0x24d6:  jne    087df228 <+0x24c8>
087df238 +0x24d8:  mov    (%esi),%eax
087df23a +0x24da:  mov    0x14(%eax),%ecx
087df23d +0x24dd:  cmp    0x18(%eax),%ecx
087df240 +0x24e0:  jae    087df264 <+0x2504>
087df242 +0x24e2:  add    $0x1,%ebx
087df245 +0x24e5:  mov    %dl,(%ecx)
087df247 +0x24e7:  addl   $0x1,0x14(%eax)
087df24b +0x24eb:  cmp    %ebx,%edi
087df24d +0x24ed:  jne    087df22f <+0x24cf>
087df24f +0x24ef:  mov    -0x20(%ebp),%eax
087df252 +0x24f2:  sub    $0xc,%eax
087df255 +0x24f5:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
087df25a +0x24fa:  jne    087df29f <+0x253f>
087df25c +0x24fc:  add    $0x2c,%esp
087df25f +0x24ff:  pop    %ebx
087df260 +0x2500:  pop    %esi
087df261 +0x2501:  pop    %edi
087df262 +0x2502:  pop    %ebp
087df263 +0x2503:  ret
087df264 +0x2504:  mov    (%eax),%ecx
087df266 +0x2506:  movzbl %dl,%edx
087df269 +0x2509:  mov    %edx,0x4(%esp)
087df26d +0x250d:  mov    %eax,(%esp)
087df270 +0x2510:  call   *0x34(%ecx)
087df273 +0x2513:  cmp    $0xffffffff,%eax
087df276 +0x2516:  jne    087df228 <+0x24c8>
087df278 +0x2518:  movb   $0x1,0x4(%esi)
087df27c +0x251c:  jmp    087df228 <+0x24c8>
087df27e +0x251e:  mov    %edi,%ebx
087df280 +0x2520:  jmp    087df21a <+0x24ba>
087df282 +0x2522:  mov    %eax,%ebx
087df284 +0x2524:  lea    -0x20(%ebp),%eax
087df287 +0x2527:  mov    %eax,(%esp)
087df28a +0x252a:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
087df28f +0x252f:  mov    %ebx,(%esp)
087df292 +0x2532:  call   08ae3750 <_Unwind_Resume>
087df297 +0x2537:  mov    %eax,(%esp)
087df29a +0x253a:  call   08ae3750 <_Unwind_Resume>
087df29f +0x253f:  mov    $&data#bb92cc41(.plt),%edx
087df2a4 +0x2544:  test   %edx,%edx
087df2a6 +0x2546:  je     087df2c5 <+0x2565>
087df2a8 +0x2548:  or     $0xffffffff,%edx
087df2ab +0x254b:  lock xadd %edx,0x8(%eax)
087df2b0 +0x2550:  test   %edx,%edx
087df2b2 +0x2552:  jg     087df25c <+0x24fc>
087df2b4 +0x2554:  lea    -0x1a(%ebp),%edx
087df2b7 +0x2557:  mov    %edx,0x4(%esp)
087df2bb +0x255b:  mov    %eax,(%esp)
087df2be +0x255e:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087df2c3 +0x2563:  jmp    087df25c <+0x24fc>
087df2c5 +0x2565:  mov    0x8(%eax),%edx
087df2c8 +0x2568:  lea    -0x1(%edx),%ecx
087df2cb +0x256b:  mov    %ecx,0x8(%eax)
087df2ce +0x256e:  jmp    087df2b0 <+0x2550>
087df2d0 +0x2570:  push   %ebp
087df2d1 +0x2571:  mov    %esp,%ebp
087df2d3 +0x2573:  push   %edi
087df2d4 +0x2574:  push   %esi
087df2d5 +0x2575:  push   %ebx
087df2d6 +0x2576:  sub    $0x2c,%esp
087df2d9 +0x2579:  mov    0xc(%ebp),%esi
087df2dc +0x257c:  lea    -0x19(%ebp),%eax
087df2df +0x257f:  mov    %eax,0x8(%esp)
087df2e3 +0x2583:  mov    0x8(%ebp),%eax
087df2e6 +0x2586:  add    $0x1c,%eax
087df2e9 +0x2589:  mov    %eax,0x4(%esp)
087df2ed +0x258d:  lea    -0x20(%ebp),%eax
087df2f0 +0x2590:  mov    %eax,(%esp)
087df2f3 +0x2593:  call   0871d180 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x7b64>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x7b64
087df2f8 +0x2598:  mov    -0x20(%ebp),%edi
087df2fb +0x259b:  lea    -0xc(%edi),%eax
087df2fe +0x259e:  mov    0x8(%eax),%ebx
087df301 +0x25a1:  test   %ebx,%ebx
087df303 +0x25a3:  js     087df390 <+0x2630>
087df309 +0x25a9:  lea    -0x20(%ebp),%eax
087df30c +0x25ac:  mov    %eax,(%esp)
087df30f +0x25af:  call   0871e990 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x9374>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x9374
087df314 +0x25b4:  mov    -0x20(%ebp),%edi
087df317 +0x25b7:  lea    -0xc(%edi),%eax
087df31a +0x25ba:  mov    0x8(%eax),%ecx
087df31d +0x25bd:  test   %ecx,%ecx
087df31f +0x25bf:  js     087df390 <+0x2630>
087df321 +0x25c1:  lea    -0x20(%ebp),%eax
087df324 +0x25c4:  mov    %eax,(%esp)
087df327 +0x25c7:  call   0871e990 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x9374>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x9374
087df32c +0x25cc:  mov    -0x20(%ebp),%edx
087df32f +0x25cf:  mov    %edi,%ebx
087df331 +0x25d1:  lea    -0xc(%edx),%eax
087df334 +0x25d4:  mov    %edx,%edi
087df336 +0x25d6:  mov    (%eax),%edx
087df338 +0x25d8:  lea    (%edi,%edx,4),%edi
087df33b +0x25db:  cmp    %edi,%ebx
087df33d +0x25dd:  jne    087df34f <+0x25ef>
087df33f +0x25df:  jmp    087df37e <+0x261e>
087df341 +0x25e1:  lea    0x0(%esi,%eiz,1),%esi
087df348 +0x25e8:  add    $0x4,%ebx
087df34b +0x25eb:  cmp    %ebx,%edi
087df34d +0x25ed:  je     087df378 <+0x2618>
087df34f +0x25ef:  cmpb   $0x0,0x4(%esi)
087df353 +0x25f3:  mov    (%ebx),%eax
087df355 +0x25f5:  jne    087df348 <+0x25e8>
087df357 +0x25f7:  mov    (%esi),%edx
087df359 +0x25f9:  mov    0x14(%edx),%ecx
087df35c +0x25fc:  cmp    0x18(%edx),%ecx
087df35f +0x25ff:  jae    087df394 <+0x2634>
087df361 +0x2601:  addl   $0x4,0x14(%edx)
087df365 +0x2605:  mov    %eax,(%ecx)
087df367 +0x2607:  cmp    $0xffffffff,%eax
087df36a +0x260a:  jne    087df348 <+0x25e8>
087df36c +0x260c:  add    $0x4,%ebx
087df36f +0x260f:  cmp    %ebx,%edi
087df371 +0x2611:  movb   $0x1,0x4(%esi)
087df375 +0x2615:  jne    087df34f <+0x25ef>
087df377 +0x2617:  nop
087df378 +0x2618:  mov    -0x20(%ebp),%eax
087df37b +0x261b:  sub    $0xc,%eax
087df37e +0x261e:  cmp    $&_ZNSbIwSt11char_traitsIwESaIwEE4_Rep20_S_empty_rep_storageE,%eax
087df383 +0x2623:  jne    087df3bf <+0x265f>
087df385 +0x2625:  add    $0x2c,%esp
087df388 +0x2628:  pop    %ebx
087df389 +0x2629:  pop    %esi
087df38a +0x262a:  pop    %edi
087df38b +0x262b:  pop    %ebp
087df38c +0x262c:  ret
087df38d +0x262d:  lea    0x0(%esi),%esi
087df390 +0x2630:  mov    %edi,%ebx
087df392 +0x2632:  jmp    087df336 <+0x25d6>
087df394 +0x2634:  mov    (%edx),%ecx
087df396 +0x2636:  mov    %eax,0x4(%esp)
087df39a +0x263a:  mov    %edx,(%esp)
087df39d +0x263d:  call   *0x34(%ecx)
087df3a0 +0x2640:  jmp    087df367 <+0x2607>
087df3a2 +0x2642:  mov    %eax,%ebx
087df3a4 +0x2644:  lea    -0x20(%ebp),%eax
087df3a7 +0x2647:  mov    %eax,(%esp)
087df3aa +0x264a:  call   0871d720 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x8104>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x8104
087df3af +0x264f:  mov    %ebx,(%esp)
087df3b2 +0x2652:  call   08ae3750 <_Unwind_Resume>
087df3b7 +0x2657:  mov    %eax,(%esp)
087df3ba +0x265a:  call   08ae3750 <_Unwind_Resume>
087df3bf +0x265f:  mov    $&data#bb92cc41(.plt),%edx
087df3c4 +0x2664:  test   %edx,%edx
087df3c6 +0x2666:  je     087df3e5 <+0x2685>
087df3c8 +0x2668:  or     $0xffffffff,%edx
087df3cb +0x266b:  lock xadd %edx,0x8(%eax)
087df3d0 +0x2670:  test   %edx,%edx
087df3d2 +0x2672:  jg     087df385 <+0x2625>
087df3d4 +0x2674:  lea    -0x1a(%ebp),%edx
087df3d7 +0x2677:  mov    %edx,0x4(%esp)
087df3db +0x267b:  mov    %eax,(%esp)
087df3de +0x267e:  call   0871c480 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x6e64>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x6e64
087df3e3 +0x2683:  jmp    087df385 <+0x2625>
087df3e5 +0x2685:  mov    0x8(%eax),%edx
087df3e8 +0x2688:  lea    -0x1(%edx),%ecx
087df3eb +0x268b:  mov    %ecx,0x8(%eax)
087df3ee +0x268e:  jmp    087df3d0 <+0x2670>
087df3f0 +0x2690:  push   %ebp
087df3f1 +0x2691:  mov    %esp,%ebp
087df3f3 +0x2693:  push   %edi
087df3f4 +0x2694:  push   %esi
087df3f5 +0x2695:  push   %ebx
087df3f6 +0x2696:  sub    $0x2c,%esp
087df3f9 +0x2699:  mov    0x10(%ebp),%edx
087df3fc +0x269c:  lea    -0x19(%ebp),%eax
087df3ff +0x269f:  mov    0xc(%ebp),%esi
087df402 +0x26a2:  mov    %eax,0x8(%esp)
087df406 +0x26a6:  mov    0x8(%ebp),%eax
087df409 +0x26a9:  mov    0x10(%eax),%eax
087df40c +0x26ac:  mov    (%eax,%edx,4),%eax
087df40f +0x26af:  mov    %eax,0x4(%esp)
087df413 +0x26b3:  lea    -0x20(%ebp),%eax
087df416 +0x26b6:  mov    %eax,(%esp)
087df419 +0x26b9:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
087df41e +0x26be:  mov    -0x20(%ebp),%ebx
087df421 +0x26c1:  lea    -0xc(%ebx),%eax
087df424 +0x26c4:  mov    %ebx,%edi
087df426 +0x26c6:  mov    0x8(%eax),%ecx
087df429 +0x26c9:  test   %ecx,%ecx
087df42b +0x26cb:  js     087df45a <+0x26fa>
087df42d +0x26cd:  lea    -0x20(%ebp),%eax
087df430 +0x26d0:  mov    %eax,(%esp)
087df433 +0x26d3:  call   08708e00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2a10>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2a10
087df438 +0x26d8:  mov    -0x20(%ebp),%edi
087df43b +0x26db:  lea    -0xc(%edi),%eax
087df43e +0x26de:  mov    0x8(%eax),%edx
087df441 +0x26e1:  test   %edx,%edx
087df443 +0x26e3:  js     087df4be <+0x275e>
087df445 +0x26e5:  lea    -0x20(%ebp),%eax
087df448 +0x26e8:  mov    %eax,(%esp)
087df44b +0x26eb:  call   08708e00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2a10>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2a10
087df450 +0x26f0:  mov    -0x20(%ebp),%edx
087df453 +0x26f3:  mov    %edi,%ebx
087df455 +0x26f5:  lea    -0xc(%edx),%eax
087df458 +0x26f8:  mov    %edx,%edi
087df45a +0x26fa:  add    (%eax),%edi
087df45c +0x26fc:  cmp    %edi,%ebx
087df45e +0x26fe:  jne    087df46f <+0x270f>
087df460 +0x2700:  jmp    087df495 <+0x2735>
087df462 +0x2702:  lea    0x0(%esi),%esi
087df468 +0x2708:  add    $0x1,%ebx
087df46b +0x270b:  cmp    %ebx,%edi
087df46d +0x270d:  je     087df48f <+0x272f>
087df46f +0x270f:  cmpb   $0x0,0x4(%esi)
087df473 +0x2713:  movzbl (%ebx),%edx
087df476 +0x2716:  jne    087df468 <+0x2708>
087df478 +0x2718:  mov    (%esi),%eax
087df47a +0x271a:  mov    0x14(%eax),%ecx
087df47d +0x271d:  cmp    0x18(%eax),%ecx
087df480 +0x2720:  jae    087df4a4 <+0x2744>
087df482 +0x2722:  add    $0x1,%ebx
087df485 +0x2725:  mov    %dl,(%ecx)
087df487 +0x2727:  addl   $0x1,0x14(%eax)
087df48b +0x272b:  cmp    %ebx,%edi
087df48d +0x272d:  jne    087df46f <+0x270f>
087df48f +0x272f:  mov    -0x20(%ebp),%eax
087df492 +0x2732:  sub    $0xc,%eax
087df495 +0x2735:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
087df49a +0x273a:  jne    087df4df <+0x277f>
087df49c +0x273c:  add    $0x2c,%esp
087df49f +0x273f:  pop    %ebx
087df4a0 +0x2740:  pop    %esi
087df4a1 +0x2741:  pop    %edi
087df4a2 +0x2742:  pop    %ebp
087df4a3 +0x2743:  ret
087df4a4 +0x2744:  mov    (%eax),%ecx
087df4a6 +0x2746:  movzbl %dl,%edx
087df4a9 +0x2749:  mov    %edx,0x4(%esp)
087df4ad +0x274d:  mov    %eax,(%esp)
087df4b0 +0x2750:  call   *0x34(%ecx)
087df4b3 +0x2753:  cmp    $0xffffffff,%eax
087df4b6 +0x2756:  jne    087df468 <+0x2708>
087df4b8 +0x2758:  movb   $0x1,0x4(%esi)
087df4bc +0x275c:  jmp    087df468 <+0x2708>
087df4be +0x275e:  mov    %edi,%ebx
087df4c0 +0x2760:  jmp    087df45a <+0x26fa>
087df4c2 +0x2762:  mov    %eax,%ebx
087df4c4 +0x2764:  lea    -0x20(%ebp),%eax
087df4c7 +0x2767:  mov    %eax,(%esp)
087df4ca +0x276a:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
087df4cf +0x276f:  mov    %ebx,(%esp)
087df4d2 +0x2772:  call   08ae3750 <_Unwind_Resume>
087df4d7 +0x2777:  mov    %eax,(%esp)
087df4da +0x277a:  call   08ae3750 <_Unwind_Resume>
087df4df +0x277f:  mov    $&data#bb92cc41(.plt),%edx
087df4e4 +0x2784:  test   %edx,%edx
087df4e6 +0x2786:  je     087df505 <+0x27a5>
087df4e8 +0x2788:  or     $0xffffffff,%edx
087df4eb +0x278b:  lock xadd %edx,0x8(%eax)
087df4f0 +0x2790:  test   %edx,%edx
087df4f2 +0x2792:  jg     087df49c <+0x273c>
087df4f4 +0x2794:  lea    -0x1a(%ebp),%edx
087df4f7 +0x2797:  mov    %edx,0x4(%esp)
087df4fb +0x279b:  mov    %eax,(%esp)
087df4fe +0x279e:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087df503 +0x27a3:  jmp    087df49c <+0x273c>
087df505 +0x27a5:  mov    0x8(%eax),%edx
087df508 +0x27a8:  lea    -0x1(%edx),%ecx
087df50b +0x27ab:  mov    %ecx,0x8(%eax)
087df50e +0x27ae:  jmp    087df4f0 <+0x2790>
087df510 +0x27b0:  push   %ebp
087df511 +0x27b1:  mov    %esp,%ebp
087df513 +0x27b3:  push   %edi
087df514 +0x27b4:  push   %esi
087df515 +0x27b5:  push   %ebx
087df516 +0x27b6:  sub    $0x2c,%esp
087df519 +0x27b9:  mov    0x10(%ebp),%edx
087df51c +0x27bc:  lea    -0x19(%ebp),%eax
087df51f +0x27bf:  mov    0xc(%ebp),%esi
087df522 +0x27c2:  mov    %eax,0x8(%esp)
087df526 +0x27c6:  mov    0x8(%ebp),%eax
087df529 +0x27c9:  mov    0x10(%eax),%eax
087df52c +0x27cc:  mov    (%eax,%edx,4),%eax
087df52f +0x27cf:  mov    %eax,0x4(%esp)
087df533 +0x27d3:  lea    -0x20(%ebp),%eax
087df536 +0x27d6:  mov    %eax,(%esp)
087df539 +0x27d9:  call   0871d180 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x7b64>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x7b64
087df53e +0x27de:  mov    -0x20(%ebp),%edi
087df541 +0x27e1:  lea    -0xc(%edi),%eax
087df544 +0x27e4:  mov    0x8(%eax),%edx
087df547 +0x27e7:  test   %edx,%edx
087df549 +0x27e9:  js     087df5d0 <+0x2870>
087df54f +0x27ef:  lea    -0x20(%ebp),%eax
087df552 +0x27f2:  mov    %eax,(%esp)
087df555 +0x27f5:  call   0871e990 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x9374>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x9374
087df55a +0x27fa:  mov    -0x20(%ebp),%edi
087df55d +0x27fd:  lea    -0xc(%edi),%eax
087df560 +0x2800:  mov    0x8(%eax),%ebx
087df563 +0x2803:  test   %ebx,%ebx
087df565 +0x2805:  js     087df5d0 <+0x2870>
087df567 +0x2807:  lea    -0x20(%ebp),%eax
087df56a +0x280a:  mov    %eax,(%esp)
087df56d +0x280d:  call   0871e990 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x9374>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x9374
087df572 +0x2812:  mov    -0x20(%ebp),%edx
087df575 +0x2815:  mov    %edi,%ebx
087df577 +0x2817:  lea    -0xc(%edx),%eax
087df57a +0x281a:  mov    %edx,%edi
087df57c +0x281c:  mov    (%eax),%edx
087df57e +0x281e:  lea    (%edi,%edx,4),%edi
087df581 +0x2821:  cmp    %edi,%ebx
087df583 +0x2823:  jne    087df58f <+0x282f>
087df585 +0x2825:  jmp    087df5be <+0x285e>
087df587 +0x2827:  nop
087df588 +0x2828:  add    $0x4,%ebx
087df58b +0x282b:  cmp    %ebx,%edi
087df58d +0x282d:  je     087df5b8 <+0x2858>
087df58f +0x282f:  cmpb   $0x0,0x4(%esi)
087df593 +0x2833:  mov    (%ebx),%eax
087df595 +0x2835:  jne    087df588 <+0x2828>
087df597 +0x2837:  mov    (%esi),%edx
087df599 +0x2839:  mov    0x14(%edx),%ecx
087df59c +0x283c:  cmp    0x18(%edx),%ecx
087df59f +0x283f:  jae    087df5d4 <+0x2874>
087df5a1 +0x2841:  addl   $0x4,0x14(%edx)
087df5a5 +0x2845:  mov    %eax,(%ecx)
087df5a7 +0x2847:  cmp    $0xffffffff,%eax
087df5aa +0x284a:  jne    087df588 <+0x2828>
087df5ac +0x284c:  add    $0x4,%ebx
087df5af +0x284f:  cmp    %ebx,%edi
087df5b1 +0x2851:  movb   $0x1,0x4(%esi)
087df5b5 +0x2855:  jne    087df58f <+0x282f>
087df5b7 +0x2857:  nop
087df5b8 +0x2858:  mov    -0x20(%ebp),%eax
087df5bb +0x285b:  sub    $0xc,%eax
087df5be +0x285e:  cmp    $&_ZNSbIwSt11char_traitsIwESaIwEE4_Rep20_S_empty_rep_storageE,%eax
087df5c3 +0x2863:  jne    087df5ff <+0x289f>
087df5c5 +0x2865:  add    $0x2c,%esp
087df5c8 +0x2868:  pop    %ebx
087df5c9 +0x2869:  pop    %esi
087df5ca +0x286a:  pop    %edi
087df5cb +0x286b:  pop    %ebp
087df5cc +0x286c:  ret
087df5cd +0x286d:  lea    0x0(%esi),%esi
087df5d0 +0x2870:  mov    %edi,%ebx
087df5d2 +0x2872:  jmp    087df57c <+0x281c>
087df5d4 +0x2874:  mov    (%edx),%ecx
087df5d6 +0x2876:  mov    %eax,0x4(%esp)
087df5da +0x287a:  mov    %edx,(%esp)
087df5dd +0x287d:  call   *0x34(%ecx)
087df5e0 +0x2880:  jmp    087df5a7 <+0x2847>
087df5e2 +0x2882:  mov    %eax,%ebx
087df5e4 +0x2884:  lea    -0x20(%ebp),%eax
087df5e7 +0x2887:  mov    %eax,(%esp)
087df5ea +0x288a:  call   0871d720 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x8104>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x8104
087df5ef +0x288f:  mov    %ebx,(%esp)
087df5f2 +0x2892:  call   08ae3750 <_Unwind_Resume>
087df5f7 +0x2897:  mov    %eax,(%esp)
087df5fa +0x289a:  call   08ae3750 <_Unwind_Resume>
087df5ff +0x289f:  mov    $&data#bb92cc41(.plt),%edx
087df604 +0x28a4:  test   %edx,%edx
087df606 +0x28a6:  je     087df625 <+0x28c5>
087df608 +0x28a8:  or     $0xffffffff,%edx
087df60b +0x28ab:  lock xadd %edx,0x8(%eax)
087df610 +0x28b0:  test   %edx,%edx
087df612 +0x28b2:  jg     087df5c5 <+0x2865>
087df614 +0x28b4:  lea    -0x1a(%ebp),%edx
087df617 +0x28b7:  mov    %edx,0x4(%esp)
087df61b +0x28bb:  mov    %eax,(%esp)
087df61e +0x28be:  call   0871c480 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x6e64>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x6e64
087df623 +0x28c3:  jmp    087df5c5 <+0x2865>
087df625 +0x28c5:  mov    0x8(%eax),%edx
087df628 +0x28c8:  lea    -0x1(%edx),%ecx
087df62b +0x28cb:  mov    %ecx,0x8(%eax)
087df62e +0x28ce:  jmp    087df610 <+0x28b0>
087df630 +0x28d0:  push   %ebp
087df631 +0x28d1:  mov    %esp,%ebp
087df633 +0x28d3:  push   %edi
087df634 +0x28d4:  push   %esi
087df635 +0x28d5:  push   %ebx
087df636 +0x28d6:  sub    $0x2c,%esp
087df639 +0x28d9:  mov    0x10(%ebp),%edx
087df63c +0x28dc:  lea    -0x19(%ebp),%eax
087df63f +0x28df:  mov    0xc(%ebp),%esi
087df642 +0x28e2:  mov    %eax,0x8(%esp)
087df646 +0x28e6:  mov    0x8(%ebp),%eax
087df649 +0x28e9:  mov    0xc(%eax),%eax
087df64c +0x28ec:  mov    -0x4(%eax,%edx,4),%eax
087df650 +0x28f0:  mov    %eax,0x4(%esp)
087df654 +0x28f4:  lea    -0x20(%ebp),%eax
087df657 +0x28f7:  mov    %eax,(%esp)
087df65a +0x28fa:  call   0871d180 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x7b64>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x7b64
087df65f +0x28ff:  mov    -0x20(%ebp),%edi
087df662 +0x2902:  lea    -0xc(%edi),%eax
087df665 +0x2905:  mov    0x8(%eax),%ebx
087df668 +0x2908:  test   %ebx,%ebx
087df66a +0x290a:  js     087df6f0 <+0x2990>
087df670 +0x2910:  lea    -0x20(%ebp),%eax
087df673 +0x2913:  mov    %eax,(%esp)
087df676 +0x2916:  call   0871e990 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x9374>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x9374
087df67b +0x291b:  mov    -0x20(%ebp),%edi
087df67e +0x291e:  lea    -0xc(%edi),%eax
087df681 +0x2921:  mov    0x8(%eax),%ecx
087df684 +0x2924:  test   %ecx,%ecx
087df686 +0x2926:  js     087df6f0 <+0x2990>
087df688 +0x2928:  lea    -0x20(%ebp),%eax
087df68b +0x292b:  mov    %eax,(%esp)
087df68e +0x292e:  call   0871e990 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x9374>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x9374
087df693 +0x2933:  mov    -0x20(%ebp),%edx
087df696 +0x2936:  mov    %edi,%ebx
087df698 +0x2938:  lea    -0xc(%edx),%eax
087df69b +0x293b:  mov    %edx,%edi
087df69d +0x293d:  mov    (%eax),%edx
087df69f +0x293f:  lea    (%edi,%edx,4),%edi
087df6a2 +0x2942:  cmp    %edi,%ebx
087df6a4 +0x2944:  jne    087df6af <+0x294f>
087df6a6 +0x2946:  jmp    087df6de <+0x297e>
087df6a8 +0x2948:  add    $0x4,%ebx
087df6ab +0x294b:  cmp    %ebx,%edi
087df6ad +0x294d:  je     087df6d8 <+0x2978>
087df6af +0x294f:  cmpb   $0x0,0x4(%esi)
087df6b3 +0x2953:  mov    (%ebx),%eax
087df6b5 +0x2955:  jne    087df6a8 <+0x2948>
087df6b7 +0x2957:  mov    (%esi),%edx
087df6b9 +0x2959:  mov    0x14(%edx),%ecx
087df6bc +0x295c:  cmp    0x18(%edx),%ecx
087df6bf +0x295f:  jae    087df6f4 <+0x2994>
087df6c1 +0x2961:  addl   $0x4,0x14(%edx)
087df6c5 +0x2965:  mov    %eax,(%ecx)
087df6c7 +0x2967:  cmp    $0xffffffff,%eax
087df6ca +0x296a:  jne    087df6a8 <+0x2948>
087df6cc +0x296c:  add    $0x4,%ebx
087df6cf +0x296f:  cmp    %ebx,%edi
087df6d1 +0x2971:  movb   $0x1,0x4(%esi)
087df6d5 +0x2975:  jne    087df6af <+0x294f>
087df6d7 +0x2977:  nop
087df6d8 +0x2978:  mov    -0x20(%ebp),%eax
087df6db +0x297b:  sub    $0xc,%eax
087df6de +0x297e:  cmp    $&_ZNSbIwSt11char_traitsIwESaIwEE4_Rep20_S_empty_rep_storageE,%eax
087df6e3 +0x2983:  jne    087df71f <+0x29bf>
087df6e5 +0x2985:  add    $0x2c,%esp
087df6e8 +0x2988:  pop    %ebx
087df6e9 +0x2989:  pop    %esi
087df6ea +0x298a:  pop    %edi
087df6eb +0x298b:  pop    %ebp
087df6ec +0x298c:  ret
087df6ed +0x298d:  lea    0x0(%esi),%esi
087df6f0 +0x2990:  mov    %edi,%ebx
087df6f2 +0x2992:  jmp    087df69d <+0x293d>
087df6f4 +0x2994:  mov    (%edx),%ecx
087df6f6 +0x2996:  mov    %eax,0x4(%esp)
087df6fa +0x299a:  mov    %edx,(%esp)
087df6fd +0x299d:  call   *0x34(%ecx)
087df700 +0x29a0:  jmp    087df6c7 <+0x2967>
087df702 +0x29a2:  mov    %eax,%ebx
087df704 +0x29a4:  lea    -0x20(%ebp),%eax
087df707 +0x29a7:  mov    %eax,(%esp)
087df70a +0x29aa:  call   0871d720 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x8104>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x8104
087df70f +0x29af:  mov    %ebx,(%esp)
087df712 +0x29b2:  call   08ae3750 <_Unwind_Resume>
087df717 +0x29b7:  mov    %eax,(%esp)
087df71a +0x29ba:  call   08ae3750 <_Unwind_Resume>
087df71f +0x29bf:  mov    $&data#bb92cc41(.plt),%edx
087df724 +0x29c4:  test   %edx,%edx
087df726 +0x29c6:  je     087df745 <+0x29e5>
087df728 +0x29c8:  or     $0xffffffff,%edx
087df72b +0x29cb:  lock xadd %edx,0x8(%eax)
087df730 +0x29d0:  test   %edx,%edx
087df732 +0x29d2:  jg     087df6e5 <+0x2985>
087df734 +0x29d4:  lea    -0x1a(%ebp),%edx
087df737 +0x29d7:  mov    %edx,0x4(%esp)
087df73b +0x29db:  mov    %eax,(%esp)
087df73e +0x29de:  call   0871c480 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x6e64>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x6e64
087df743 +0x29e3:  jmp    087df6e5 <+0x2985>
087df745 +0x29e5:  mov    0x8(%eax),%edx
087df748 +0x29e8:  lea    -0x1(%edx),%ecx
087df74b +0x29eb:  mov    %ecx,0x8(%eax)
087df74e +0x29ee:  jmp    087df730 <+0x29d0>
087df750 +0x29f0:  push   %ebp
087df751 +0x29f1:  mov    %esp,%ebp
087df753 +0x29f3:  push   %edi
087df754 +0x29f4:  push   %esi
087df755 +0x29f5:  push   %ebx
087df756 +0x29f6:  sub    $0x2c,%esp
087df759 +0x29f9:  movzwl 0x10(%ebp),%eax
087df75d +0x29fd:  mov    0xc(%ebp),%esi
087df760 +0x2a00:  movzwl %ax,%edx
087df763 +0x2a03:  test   %edx,%edx
087df765 +0x2a05:  je     087df83b <+0x2adb>
087df76b +0x2a0b:  cmp    $0xc,%ax
087df76f +0x2a0f:  ja     087df81c <+0x2abc>
087df775 +0x2a15:  sub    $0x1,%edx
087df778 +0x2a18:  lea    -0x19(%ebp),%eax
087df77b +0x2a1b:  mov    %eax,0x8(%esp)
087df77f +0x2a1f:  mov    &_ZN5boost9gregorianL17short_month_namesE(,%edx,4),%eax
087df786 +0x2a26:  mov    %eax,0x4(%esp)
087df78a +0x2a2a:  lea    -0x20(%ebp),%eax
087df78d +0x2a2d:  mov    %eax,(%esp)
087df790 +0x2a30:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
087df795 +0x2a35:  mov    -0x20(%ebp),%edi
087df798 +0x2a38:  lea    -0xc(%edi),%eax
087df79b +0x2a3b:  mov    0x8(%eax),%ecx
087df79e +0x2a3e:  test   %ecx,%ecx
087df7a0 +0x2a40:  js     087df818 <+0x2ab8>
087df7a2 +0x2a42:  lea    -0x20(%ebp),%eax
087df7a5 +0x2a45:  mov    %eax,(%esp)
087df7a8 +0x2a48:  call   08708e00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2a10>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2a10
087df7ad +0x2a4d:  mov    -0x20(%ebp),%edi
087df7b0 +0x2a50:  lea    -0xc(%edi),%eax
087df7b3 +0x2a53:  mov    0x8(%eax),%edx
087df7b6 +0x2a56:  test   %edx,%edx
087df7b8 +0x2a58:  js     087df818 <+0x2ab8>
087df7ba +0x2a5a:  lea    -0x20(%ebp),%eax
087df7bd +0x2a5d:  mov    %eax,(%esp)
087df7c0 +0x2a60:  call   08708e00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2a10>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2a10
087df7c5 +0x2a65:  mov    -0x20(%ebp),%edx
087df7c8 +0x2a68:  mov    %edi,%ebx
087df7ca +0x2a6a:  lea    -0xc(%edx),%eax
087df7cd +0x2a6d:  mov    %edx,%edi
087df7cf +0x2a6f:  add    (%eax),%edi
087df7d1 +0x2a71:  cmp    %edi,%ebx
087df7d3 +0x2a73:  jne    087df7df <+0x2a7f>
087df7d5 +0x2a75:  jmp    087df805 <+0x2aa5>
087df7d7 +0x2a77:  nop
087df7d8 +0x2a78:  add    $0x1,%ebx
087df7db +0x2a7b:  cmp    %ebx,%edi
087df7dd +0x2a7d:  je     087df7ff <+0x2a9f>
087df7df +0x2a7f:  cmpb   $0x0,0x4(%esi)
087df7e3 +0x2a83:  movzbl (%ebx),%edx
087df7e6 +0x2a86:  jne    087df7d8 <+0x2a78>
087df7e8 +0x2a88:  mov    (%esi),%eax
087df7ea +0x2a8a:  mov    0x14(%eax),%ecx
087df7ed +0x2a8d:  cmp    0x18(%eax),%ecx
087df7f0 +0x2a90:  jae    087df85e <+0x2afe>
087df7f2 +0x2a92:  add    $0x1,%ebx
087df7f5 +0x2a95:  mov    %dl,(%ecx)
087df7f7 +0x2a97:  addl   $0x1,0x14(%eax)
087df7fb +0x2a9b:  cmp    %ebx,%edi
087df7fd +0x2a9d:  jne    087df7df <+0x2a7f>
087df7ff +0x2a9f:  mov    -0x20(%ebp),%eax
087df802 +0x2aa2:  sub    $0xc,%eax
087df805 +0x2aa5:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
087df80a +0x2aaa:  jne    087df89c <+0x2b3c>
087df810 +0x2ab0:  add    $0x2c,%esp
087df813 +0x2ab3:  pop    %ebx
087df814 +0x2ab4:  pop    %esi
087df815 +0x2ab5:  pop    %edi
087df816 +0x2ab6:  pop    %ebp
087df817 +0x2ab7:  ret
087df818 +0x2ab8:  mov    %edi,%ebx
087df81a +0x2aba:  jmp    087df7cf <+0x2a6f>
087df81c +0x2abc:  mov    %edx,0x4(%esp)
087df820 +0x2ac0:  movl   $0x1,0x8(%esp)
087df828 +0x2ac8:  movl   $0x1,(%esp)
087df82f +0x2acf:  call   080d16d2 <_GLOBAL__I__ZN10BingoEventC2Ev+0x651f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x651f
087df834 +0x2ad4:  xor    %edx,%edx
087df836 +0x2ad6:  jmp    087df778 <+0x2a18>
087df83b +0x2adb:  movl   $0x0,0x8(%esp)
087df843 +0x2ae3:  movl   $0x0,0x4(%esp)
087df84b +0x2aeb:  movl   $0x1,(%esp)
087df852 +0x2af2:  call   080d16d2 <_GLOBAL__I__ZN10BingoEventC2Ev+0x651f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x651f
087df857 +0x2af7:  xor    %edx,%edx
087df859 +0x2af9:  jmp    087df778 <+0x2a18>
087df85e +0x2afe:  mov    (%eax),%ecx
087df860 +0x2b00:  movzbl %dl,%edx
087df863 +0x2b03:  mov    %edx,0x4(%esp)
087df867 +0x2b07:  mov    %eax,(%esp)
087df86a +0x2b0a:  call   *0x34(%ecx)
087df86d +0x2b0d:  cmp    $0xffffffff,%eax
087df870 +0x2b10:  jne    087df7d8 <+0x2a78>
087df876 +0x2b16:  movb   $0x1,0x4(%esi)
087df87a +0x2b1a:  jmp    087df7d8 <+0x2a78>
087df87f +0x2b1f:  mov    %eax,%ebx
087df881 +0x2b21:  lea    -0x20(%ebp),%eax
087df884 +0x2b24:  mov    %eax,(%esp)
087df887 +0x2b27:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
087df88c +0x2b2c:  mov    %ebx,(%esp)
087df88f +0x2b2f:  call   08ae3750 <_Unwind_Resume>
087df894 +0x2b34:  mov    %eax,(%esp)
087df897 +0x2b37:  call   08ae3750 <_Unwind_Resume>
087df89c +0x2b3c:  mov    $&data#bb92cc41(.plt),%edx
087df8a1 +0x2b41:  test   %edx,%edx
087df8a3 +0x2b43:  je     087df8c9 <+0x2b69>
087df8a5 +0x2b45:  or     $0xffffffff,%edx
087df8a8 +0x2b48:  lock xadd %edx,0x8(%eax)
087df8ad +0x2b4d:  test   %edx,%edx
087df8af +0x2b4f:  jg     087df810 <+0x2ab0>
087df8b5 +0x2b55:  lea    -0x1a(%ebp),%edx
087df8b8 +0x2b58:  mov    %edx,0x4(%esp)
087df8bc +0x2b5c:  mov    %eax,(%esp)
087df8bf +0x2b5f:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087df8c4 +0x2b64:  jmp    087df810 <+0x2ab0>
087df8c9 +0x2b69:  mov    0x8(%eax),%edx
087df8cc +0x2b6c:  lea    -0x1(%edx),%ecx
087df8cf +0x2b6f:  mov    %ecx,0x8(%eax)
087df8d2 +0x2b72:  jmp    087df8ad <+0x2b4d>
087df8d4 +0x2b74:  nop
087df8d5 +0x2b75:  nop
087df8d6 +0x2b76:  nop
087df8d7 +0x2b77:  nop
087df8d8 +0x2b78:  nop
087df8d9 +0x2b79:  nop
087df8da +0x2b7a:  nop
087df8db +0x2b7b:  nop
087df8dc +0x2b7c:  nop
087df8dd +0x2b7d:  nop
087df8de +0x2b7e:  nop
087df8df +0x2b7f:  nop
087df8e0 +0x2b80:  push   %ebp
087df8e1 +0x2b81:  mov    %esp,%ebp
087df8e3 +0x2b83:  push   %edi
087df8e4 +0x2b84:  push   %esi
087df8e5 +0x2b85:  push   %ebx
087df8e6 +0x2b86:  sub    $0x2c,%esp
087df8e9 +0x2b89:  movzwl 0x10(%ebp),%eax
087df8ed +0x2b8d:  mov    0xc(%ebp),%esi
087df8f0 +0x2b90:  movzwl %ax,%edx
087df8f3 +0x2b93:  test   %edx,%edx
087df8f5 +0x2b95:  je     087df9db <+0x2c7b>
087df8fb +0x2b9b:  cmp    $0xc,%ax
087df8ff +0x2b9f:  ja     087df9bc <+0x2c5c>
087df905 +0x2ba5:  sub    $0x1,%edx
087df908 +0x2ba8:  lea    -0x19(%ebp),%eax
087df90b +0x2bab:  mov    %eax,0x8(%esp)
087df90f +0x2baf:  mov    &_ZN5boost9gregorianL18w_long_month_namesE(,%edx,4),%eax
087df916 +0x2bb6:  mov    %eax,0x4(%esp)
087df91a +0x2bba:  lea    -0x20(%ebp),%eax
087df91d +0x2bbd:  mov    %eax,(%esp)
087df920 +0x2bc0:  call   0871d180 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x7b64>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x7b64
087df925 +0x2bc5:  mov    -0x20(%ebp),%edi
087df928 +0x2bc8:  lea    -0xc(%edi),%eax
087df92b +0x2bcb:  mov    0x8(%eax),%ecx
087df92e +0x2bce:  test   %ecx,%ecx
087df930 +0x2bd0:  js     087df9b8 <+0x2c58>
087df936 +0x2bd6:  lea    -0x20(%ebp),%eax
087df939 +0x2bd9:  mov    %eax,(%esp)
087df93c +0x2bdc:  call   0871e990 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x9374>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x9374
087df941 +0x2be1:  mov    -0x20(%ebp),%edi
087df944 +0x2be4:  lea    -0xc(%edi),%eax
087df947 +0x2be7:  mov    0x8(%eax),%edx
087df94a +0x2bea:  test   %edx,%edx
087df94c +0x2bec:  js     087df9b8 <+0x2c58>
087df94e +0x2bee:  lea    -0x20(%ebp),%eax
087df951 +0x2bf1:  mov    %eax,(%esp)
087df954 +0x2bf4:  call   0871e990 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x9374>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x9374
087df959 +0x2bf9:  mov    -0x20(%ebp),%edx
087df95c +0x2bfc:  mov    %edi,%ebx
087df95e +0x2bfe:  lea    -0xc(%edx),%eax
087df961 +0x2c01:  mov    %edx,%edi
087df963 +0x2c03:  mov    (%eax),%edx
087df965 +0x2c05:  lea    (%edi,%edx,4),%edi
087df968 +0x2c08:  cmp    %edi,%ebx
087df96a +0x2c0a:  jne    087df977 <+0x2c17>
087df96c +0x2c0c:  jmp    087df9a6 <+0x2c46>
087df96e +0x2c0e:  xchg   %ax,%ax
087df970 +0x2c10:  add    $0x4,%ebx
087df973 +0x2c13:  cmp    %ebx,%edi
087df975 +0x2c15:  je     087df9a0 <+0x2c40>
087df977 +0x2c17:  cmpb   $0x0,0x4(%esi)
087df97b +0x2c1b:  mov    (%ebx),%eax
087df97d +0x2c1d:  jne    087df970 <+0x2c10>
087df97f +0x2c1f:  mov    (%esi),%edx
087df981 +0x2c21:  mov    0x14(%edx),%ecx
087df984 +0x2c24:  cmp    0x18(%edx),%ecx
087df987 +0x2c27:  jae    087df9fe <+0x2c9e>
087df989 +0x2c29:  addl   $0x4,0x14(%edx)
087df98d +0x2c2d:  mov    %eax,(%ecx)
087df98f +0x2c2f:  cmp    $0xffffffff,%eax
087df992 +0x2c32:  jne    087df970 <+0x2c10>
087df994 +0x2c34:  add    $0x4,%ebx
087df997 +0x2c37:  cmp    %ebx,%edi
087df999 +0x2c39:  movb   $0x1,0x4(%esi)
087df99d +0x2c3d:  jne    087df977 <+0x2c17>
087df99f +0x2c3f:  nop
087df9a0 +0x2c40:  mov    -0x20(%ebp),%eax
087df9a3 +0x2c43:  sub    $0xc,%eax
087df9a6 +0x2c46:  cmp    $&_ZNSbIwSt11char_traitsIwESaIwEE4_Rep20_S_empty_rep_storageE,%eax
087df9ab +0x2c4b:  jne    087dfa29 <+0x2cc9>
087df9ad +0x2c4d:  add    $0x2c,%esp
087df9b0 +0x2c50:  pop    %ebx
087df9b1 +0x2c51:  pop    %esi
087df9b2 +0x2c52:  pop    %edi
087df9b3 +0x2c53:  pop    %ebp
087df9b4 +0x2c54:  ret
087df9b5 +0x2c55:  lea    0x0(%esi),%esi
087df9b8 +0x2c58:  mov    %edi,%ebx
087df9ba +0x2c5a:  jmp    087df963 <+0x2c03>
087df9bc +0x2c5c:  mov    %edx,0x4(%esp)
087df9c0 +0x2c60:  movl   $0x1,0x8(%esp)
087df9c8 +0x2c68:  movl   $0x1,(%esp)
087df9cf +0x2c6f:  call   080d16d2 <_GLOBAL__I__ZN10BingoEventC2Ev+0x651f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x651f
087df9d4 +0x2c74:  xor    %edx,%edx
087df9d6 +0x2c76:  jmp    087df908 <+0x2ba8>
087df9db +0x2c7b:  movl   $0x0,0x8(%esp)
087df9e3 +0x2c83:  movl   $0x0,0x4(%esp)
087df9eb +0x2c8b:  movl   $0x1,(%esp)
087df9f2 +0x2c92:  call   080d16d2 <_GLOBAL__I__ZN10BingoEventC2Ev+0x651f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x651f
087df9f7 +0x2c97:  xor    %edx,%edx
087df9f9 +0x2c99:  jmp    087df908 <+0x2ba8>
087df9fe +0x2c9e:  mov    (%edx),%ecx
087dfa00 +0x2ca0:  mov    %eax,0x4(%esp)
087dfa04 +0x2ca4:  mov    %edx,(%esp)
087dfa07 +0x2ca7:  call   *0x34(%ecx)
087dfa0a +0x2caa:  jmp    087df98f <+0x2c2f>
087dfa0c +0x2cac:  mov    %eax,%ebx
087dfa0e +0x2cae:  lea    -0x20(%ebp),%eax
087dfa11 +0x2cb1:  mov    %eax,(%esp)
087dfa14 +0x2cb4:  call   0871d720 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x8104>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x8104
087dfa19 +0x2cb9:  mov    %ebx,(%esp)
087dfa1c +0x2cbc:  call   08ae3750 <_Unwind_Resume>
087dfa21 +0x2cc1:  mov    %eax,(%esp)
087dfa24 +0x2cc4:  call   08ae3750 <_Unwind_Resume>
087dfa29 +0x2cc9:  mov    $&data#bb92cc41(.plt),%edx
087dfa2e +0x2cce:  test   %edx,%edx
087dfa30 +0x2cd0:  je     087dfa56 <+0x2cf6>
087dfa32 +0x2cd2:  or     $0xffffffff,%edx
087dfa35 +0x2cd5:  lock xadd %edx,0x8(%eax)
087dfa3a +0x2cda:  test   %edx,%edx
087dfa3c +0x2cdc:  jg     087df9ad <+0x2c4d>
087dfa42 +0x2ce2:  lea    -0x1a(%ebp),%edx
087dfa45 +0x2ce5:  mov    %edx,0x4(%esp)
087dfa49 +0x2ce9:  mov    %eax,(%esp)
087dfa4c +0x2cec:  call   0871c480 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x6e64>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x6e64
087dfa51 +0x2cf1:  jmp    087df9ad <+0x2c4d>
087dfa56 +0x2cf6:  mov    0x8(%eax),%edx
087dfa59 +0x2cf9:  lea    -0x1(%edx),%ecx
087dfa5c +0x2cfc:  mov    %ecx,0x8(%eax)
087dfa5f +0x2cff:  jmp    087dfa3a <+0x2cda>
087dfa61 +0x2d01:  nop
087dfa62 +0x2d02:  nop
087dfa63 +0x2d03:  nop
087dfa64 +0x2d04:  nop
087dfa65 +0x2d05:  nop
087dfa66 +0x2d06:  nop
087dfa67 +0x2d07:  nop
087dfa68 +0x2d08:  nop
087dfa69 +0x2d09:  nop
087dfa6a +0x2d0a:  nop
087dfa6b +0x2d0b:  nop
087dfa6c +0x2d0c:  nop
087dfa6d +0x2d0d:  nop
087dfa6e +0x2d0e:  nop
087dfa6f +0x2d0f:  nop
087dfa70 +0x2d10:  push   %ebp
087dfa71 +0x2d11:  mov    %esp,%ebp
087dfa73 +0x2d13:  push   %edi
087dfa74 +0x2d14:  push   %esi
087dfa75 +0x2d15:  push   %ebx
087dfa76 +0x2d16:  sub    $0x2c,%esp
087dfa79 +0x2d19:  movzwl 0x10(%ebp),%eax
087dfa7d +0x2d1d:  mov    0xc(%ebp),%esi
087dfa80 +0x2d20:  movzwl %ax,%edx
087dfa83 +0x2d23:  test   %edx,%edx
087dfa85 +0x2d25:  je     087dfb6b <+0x2e0b>
087dfa8b +0x2d2b:  cmp    $0xc,%ax
087dfa8f +0x2d2f:  ja     087dfb4c <+0x2dec>
087dfa95 +0x2d35:  sub    $0x1,%edx
087dfa98 +0x2d38:  lea    -0x19(%ebp),%eax
087dfa9b +0x2d3b:  mov    %eax,0x8(%esp)
087dfa9f +0x2d3f:  mov    &_ZN5boost9gregorianL19w_short_month_namesE(,%edx,4),%eax
087dfaa6 +0x2d46:  mov    %eax,0x4(%esp)
087dfaaa +0x2d4a:  lea    -0x20(%ebp),%eax
087dfaad +0x2d4d:  mov    %eax,(%esp)
087dfab0 +0x2d50:  call   0871d180 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x7b64>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x7b64
087dfab5 +0x2d55:  mov    -0x20(%ebp),%edi
087dfab8 +0x2d58:  lea    -0xc(%edi),%eax
087dfabb +0x2d5b:  mov    0x8(%eax),%edx
087dfabe +0x2d5e:  test   %edx,%edx
087dfac0 +0x2d60:  js     087dfb48 <+0x2de8>
087dfac6 +0x2d66:  lea    -0x20(%ebp),%eax
087dfac9 +0x2d69:  mov    %eax,(%esp)
087dfacc +0x2d6c:  call   0871e990 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x9374>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x9374
087dfad1 +0x2d71:  mov    -0x20(%ebp),%edi
087dfad4 +0x2d74:  lea    -0xc(%edi),%eax
087dfad7 +0x2d77:  mov    0x8(%eax),%ebx
087dfada +0x2d7a:  test   %ebx,%ebx
087dfadc +0x2d7c:  js     087dfb48 <+0x2de8>
087dfade +0x2d7e:  lea    -0x20(%ebp),%eax
087dfae1 +0x2d81:  mov    %eax,(%esp)
087dfae4 +0x2d84:  call   0871e990 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x9374>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x9374
087dfae9 +0x2d89:  mov    -0x20(%ebp),%edx
087dfaec +0x2d8c:  mov    %edi,%ebx
087dfaee +0x2d8e:  lea    -0xc(%edx),%eax
087dfaf1 +0x2d91:  mov    %edx,%edi
087dfaf3 +0x2d93:  mov    (%eax),%edx
087dfaf5 +0x2d95:  lea    (%edi,%edx,4),%edi
087dfaf8 +0x2d98:  cmp    %edi,%ebx
087dfafa +0x2d9a:  jne    087dfb07 <+0x2da7>
087dfafc +0x2d9c:  jmp    087dfb36 <+0x2dd6>
087dfafe +0x2d9e:  xchg   %ax,%ax
087dfb00 +0x2da0:  add    $0x4,%ebx
087dfb03 +0x2da3:  cmp    %ebx,%edi
087dfb05 +0x2da5:  je     087dfb30 <+0x2dd0>
087dfb07 +0x2da7:  cmpb   $0x0,0x4(%esi)
087dfb0b +0x2dab:  mov    (%ebx),%eax
087dfb0d +0x2dad:  jne    087dfb00 <+0x2da0>
087dfb0f +0x2daf:  mov    (%esi),%edx
087dfb11 +0x2db1:  mov    0x14(%edx),%ecx
087dfb14 +0x2db4:  cmp    0x18(%edx),%ecx
087dfb17 +0x2db7:  jae    087dfb8e <+0x2e2e>
087dfb19 +0x2db9:  addl   $0x4,0x14(%edx)
087dfb1d +0x2dbd:  mov    %eax,(%ecx)
087dfb1f +0x2dbf:  cmp    $0xffffffff,%eax
087dfb22 +0x2dc2:  jne    087dfb00 <+0x2da0>
087dfb24 +0x2dc4:  add    $0x4,%ebx
087dfb27 +0x2dc7:  cmp    %ebx,%edi
087dfb29 +0x2dc9:  movb   $0x1,0x4(%esi)
087dfb2d +0x2dcd:  jne    087dfb07 <+0x2da7>
087dfb2f +0x2dcf:  nop
087dfb30 +0x2dd0:  mov    -0x20(%ebp),%eax
087dfb33 +0x2dd3:  sub    $0xc,%eax
087dfb36 +0x2dd6:  cmp    $&_ZNSbIwSt11char_traitsIwESaIwEE4_Rep20_S_empty_rep_storageE,%eax
087dfb3b +0x2ddb:  jne    087dfbb9 <+0x2e59>
087dfb3d +0x2ddd:  add    $0x2c,%esp
087dfb40 +0x2de0:  pop    %ebx
087dfb41 +0x2de1:  pop    %esi
087dfb42 +0x2de2:  pop    %edi
087dfb43 +0x2de3:  pop    %ebp
087dfb44 +0x2de4:  ret
087dfb45 +0x2de5:  lea    0x0(%esi),%esi
087dfb48 +0x2de8:  mov    %edi,%ebx
087dfb4a +0x2dea:  jmp    087dfaf3 <+0x2d93>
087dfb4c +0x2dec:  mov    %edx,0x4(%esp)
087dfb50 +0x2df0:  movl   $0x1,0x8(%esp)
087dfb58 +0x2df8:  movl   $0x1,(%esp)
087dfb5f +0x2dff:  call   080d16d2 <_GLOBAL__I__ZN10BingoEventC2Ev+0x651f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x651f
087dfb64 +0x2e04:  xor    %edx,%edx
087dfb66 +0x2e06:  jmp    087dfa98 <+0x2d38>
087dfb6b +0x2e0b:  movl   $0x0,0x8(%esp)
087dfb73 +0x2e13:  movl   $0x0,0x4(%esp)
087dfb7b +0x2e1b:  movl   $0x1,(%esp)
087dfb82 +0x2e22:  call   080d16d2 <_GLOBAL__I__ZN10BingoEventC2Ev+0x651f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x651f
087dfb87 +0x2e27:  xor    %edx,%edx
087dfb89 +0x2e29:  jmp    087dfa98 <+0x2d38>
087dfb8e +0x2e2e:  mov    (%edx),%ecx
087dfb90 +0x2e30:  mov    %eax,0x4(%esp)
087dfb94 +0x2e34:  mov    %edx,(%esp)
087dfb97 +0x2e37:  call   *0x34(%ecx)
087dfb9a +0x2e3a:  jmp    087dfb1f <+0x2dbf>
087dfb9c +0x2e3c:  mov    %eax,%ebx
087dfb9e +0x2e3e:  lea    -0x20(%ebp),%eax
087dfba1 +0x2e41:  mov    %eax,(%esp)
087dfba4 +0x2e44:  call   0871d720 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x8104>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x8104
087dfba9 +0x2e49:  mov    %ebx,(%esp)
087dfbac +0x2e4c:  call   08ae3750 <_Unwind_Resume>
087dfbb1 +0x2e51:  mov    %eax,(%esp)
087dfbb4 +0x2e54:  call   08ae3750 <_Unwind_Resume>
087dfbb9 +0x2e59:  mov    $&data#bb92cc41(.plt),%edx
087dfbbe +0x2e5e:  test   %edx,%edx
087dfbc0 +0x2e60:  je     087dfbe6 <+0x2e86>
087dfbc2 +0x2e62:  or     $0xffffffff,%edx
087dfbc5 +0x2e65:  lock xadd %edx,0x8(%eax)
087dfbca +0x2e6a:  test   %edx,%edx
087dfbcc +0x2e6c:  jg     087dfb3d <+0x2ddd>
087dfbd2 +0x2e72:  lea    -0x1a(%ebp),%edx
087dfbd5 +0x2e75:  mov    %edx,0x4(%esp)
087dfbd9 +0x2e79:  mov    %eax,(%esp)
087dfbdc +0x2e7c:  call   0871c480 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x6e64>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x6e64
087dfbe1 +0x2e81:  jmp    087dfb3d <+0x2ddd>
087dfbe6 +0x2e86:  mov    0x8(%eax),%edx
087dfbe9 +0x2e89:  lea    -0x1(%edx),%ecx
087dfbec +0x2e8c:  mov    %ecx,0x8(%eax)
087dfbef +0x2e8f:  jmp    087dfbca <+0x2e6a>
087dfbf1 +0x2e91:  nop
087dfbf2 +0x2e92:  nop
087dfbf3 +0x2e93:  nop
087dfbf4 +0x2e94:  nop
087dfbf5 +0x2e95:  nop
087dfbf6 +0x2e96:  nop
087dfbf7 +0x2e97:  nop
087dfbf8 +0x2e98:  nop
087dfbf9 +0x2e99:  nop
087dfbfa +0x2e9a:  nop
087dfbfb +0x2e9b:  nop
087dfbfc +0x2e9c:  nop
087dfbfd +0x2e9d:  nop
087dfbfe +0x2e9e:  nop
087dfbff +0x2e9f:  nop
087dfc00 +0x2ea0:  push   %ebp
087dfc01 +0x2ea1:  mov    %esp,%ebp
087dfc03 +0x2ea3:  push   %edi
087dfc04 +0x2ea4:  push   %esi
087dfc05 +0x2ea5:  push   %ebx
087dfc06 +0x2ea6:  sub    $0x2c,%esp
087dfc09 +0x2ea9:  movzwl 0x10(%ebp),%eax
087dfc0d +0x2ead:  mov    0xc(%ebp),%esi
087dfc10 +0x2eb0:  movzwl %ax,%edx
087dfc13 +0x2eb3:  test   %edx,%edx
087dfc15 +0x2eb5:  je     087dfceb <+0x2f8b>
087dfc1b +0x2ebb:  cmp    $0xc,%ax
087dfc1f +0x2ebf:  ja     087dfccc <+0x2f6c>
087dfc25 +0x2ec5:  sub    $0x1,%edx
087dfc28 +0x2ec8:  lea    -0x19(%ebp),%eax
087dfc2b +0x2ecb:  mov    %eax,0x8(%esp)
087dfc2f +0x2ecf:  mov    &_ZN5boost9gregorianL16long_month_namesE(,%edx,4),%eax
087dfc36 +0x2ed6:  mov    %eax,0x4(%esp)
087dfc3a +0x2eda:  lea    -0x20(%ebp),%eax
087dfc3d +0x2edd:  mov    %eax,(%esp)
087dfc40 +0x2ee0:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
087dfc45 +0x2ee5:  mov    -0x20(%ebp),%edi
087dfc48 +0x2ee8:  lea    -0xc(%edi),%eax
087dfc4b +0x2eeb:  mov    0x8(%eax),%ebx
087dfc4e +0x2eee:  test   %ebx,%ebx
087dfc50 +0x2ef0:  js     087dfcc8 <+0x2f68>
087dfc52 +0x2ef2:  lea    -0x20(%ebp),%eax
087dfc55 +0x2ef5:  mov    %eax,(%esp)
087dfc58 +0x2ef8:  call   08708e00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2a10>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2a10
087dfc5d +0x2efd:  mov    -0x20(%ebp),%edi
087dfc60 +0x2f00:  lea    -0xc(%edi),%eax
087dfc63 +0x2f03:  mov    0x8(%eax),%ecx
087dfc66 +0x2f06:  test   %ecx,%ecx
087dfc68 +0x2f08:  js     087dfcc8 <+0x2f68>
087dfc6a +0x2f0a:  lea    -0x20(%ebp),%eax
087dfc6d +0x2f0d:  mov    %eax,(%esp)
087dfc70 +0x2f10:  call   08708e00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2a10>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2a10
087dfc75 +0x2f15:  mov    -0x20(%ebp),%edx
087dfc78 +0x2f18:  mov    %edi,%ebx
087dfc7a +0x2f1a:  lea    -0xc(%edx),%eax
087dfc7d +0x2f1d:  mov    %edx,%edi
087dfc7f +0x2f1f:  add    (%eax),%edi
087dfc81 +0x2f21:  cmp    %edi,%ebx
087dfc83 +0x2f23:  jne    087dfc8f <+0x2f2f>
087dfc85 +0x2f25:  jmp    087dfcb5 <+0x2f55>
087dfc87 +0x2f27:  nop
087dfc88 +0x2f28:  add    $0x1,%ebx
087dfc8b +0x2f2b:  cmp    %ebx,%edi
087dfc8d +0x2f2d:  je     087dfcaf <+0x2f4f>
087dfc8f +0x2f2f:  cmpb   $0x0,0x4(%esi)
087dfc93 +0x2f33:  movzbl (%ebx),%edx
087dfc96 +0x2f36:  jne    087dfc88 <+0x2f28>
087dfc98 +0x2f38:  mov    (%esi),%eax
087dfc9a +0x2f3a:  mov    0x14(%eax),%ecx
087dfc9d +0x2f3d:  cmp    0x18(%eax),%ecx
087dfca0 +0x2f40:  jae    087dfd0e <+0x2fae>
087dfca2 +0x2f42:  add    $0x1,%ebx
087dfca5 +0x2f45:  mov    %dl,(%ecx)
087dfca7 +0x2f47:  addl   $0x1,0x14(%eax)
087dfcab +0x2f4b:  cmp    %ebx,%edi
087dfcad +0x2f4d:  jne    087dfc8f <+0x2f2f>
087dfcaf +0x2f4f:  mov    -0x20(%ebp),%eax
087dfcb2 +0x2f52:  sub    $0xc,%eax
087dfcb5 +0x2f55:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
087dfcba +0x2f5a:  jne    087dfd4c <+0x2fec>
087dfcc0 +0x2f60:  add    $0x2c,%esp
087dfcc3 +0x2f63:  pop    %ebx
087dfcc4 +0x2f64:  pop    %esi
087dfcc5 +0x2f65:  pop    %edi
087dfcc6 +0x2f66:  pop    %ebp
087dfcc7 +0x2f67:  ret
087dfcc8 +0x2f68:  mov    %edi,%ebx
087dfcca +0x2f6a:  jmp    087dfc7f <+0x2f1f>
087dfccc +0x2f6c:  mov    %edx,0x4(%esp)
087dfcd0 +0x2f70:  movl   $0x1,0x8(%esp)
087dfcd8 +0x2f78:  movl   $0x1,(%esp)
087dfcdf +0x2f7f:  call   080d16d2 <_GLOBAL__I__ZN10BingoEventC2Ev+0x651f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x651f
087dfce4 +0x2f84:  xor    %edx,%edx
087dfce6 +0x2f86:  jmp    087dfc28 <+0x2ec8>
087dfceb +0x2f8b:  movl   $0x0,0x8(%esp)
087dfcf3 +0x2f93:  movl   $0x0,0x4(%esp)
087dfcfb +0x2f9b:  movl   $0x1,(%esp)
087dfd02 +0x2fa2:  call   080d16d2 <_GLOBAL__I__ZN10BingoEventC2Ev+0x651f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x651f
087dfd07 +0x2fa7:  xor    %edx,%edx
087dfd09 +0x2fa9:  jmp    087dfc28 <+0x2ec8>
087dfd0e +0x2fae:  mov    (%eax),%ecx
087dfd10 +0x2fb0:  movzbl %dl,%edx
087dfd13 +0x2fb3:  mov    %edx,0x4(%esp)
087dfd17 +0x2fb7:  mov    %eax,(%esp)
087dfd1a +0x2fba:  call   *0x34(%ecx)
087dfd1d +0x2fbd:  cmp    $0xffffffff,%eax
087dfd20 +0x2fc0:  jne    087dfc88 <+0x2f28>
087dfd26 +0x2fc6:  movb   $0x1,0x4(%esi)
087dfd2a +0x2fca:  jmp    087dfc88 <+0x2f28>
087dfd2f +0x2fcf:  mov    %eax,%ebx
087dfd31 +0x2fd1:  lea    -0x20(%ebp),%eax
087dfd34 +0x2fd4:  mov    %eax,(%esp)
087dfd37 +0x2fd7:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
087dfd3c +0x2fdc:  mov    %ebx,(%esp)
087dfd3f +0x2fdf:  call   08ae3750 <_Unwind_Resume>
087dfd44 +0x2fe4:  mov    %eax,(%esp)
087dfd47 +0x2fe7:  call   08ae3750 <_Unwind_Resume>
087dfd4c +0x2fec:  mov    $&data#bb92cc41(.plt),%edx
087dfd51 +0x2ff1:  test   %edx,%edx
087dfd53 +0x2ff3:  je     087dfd79 <+0x3019>
087dfd55 +0x2ff5:  or     $0xffffffff,%edx
087dfd58 +0x2ff8:  lock xadd %edx,0x8(%eax)
087dfd5d +0x2ffd:  test   %edx,%edx
087dfd5f +0x2fff:  jg     087dfcc0 <+0x2f60>
087dfd65 +0x3005:  lea    -0x1a(%ebp),%edx
087dfd68 +0x3008:  mov    %edx,0x4(%esp)
087dfd6c +0x300c:  mov    %eax,(%esp)
087dfd6f +0x300f:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087dfd74 +0x3014:  jmp    087dfcc0 <+0x2f60>
087dfd79 +0x3019:  mov    0x8(%eax),%edx
087dfd7c +0x301c:  lea    -0x1(%edx),%ecx
087dfd7f +0x301f:  mov    %ecx,0x8(%eax)
087dfd82 +0x3022:  jmp    087dfd5d <+0x2ffd>
087dfd84 +0x3024:  nop
087dfd85 +0x3025:  nop
087dfd86 +0x3026:  nop
087dfd87 +0x3027:  nop
087dfd88 +0x3028:  nop
087dfd89 +0x3029:  nop
087dfd8a +0x302a:  nop
087dfd8b +0x302b:  nop
087dfd8c +0x302c:  nop
087dfd8d +0x302d:  nop
087dfd8e +0x302e:  nop
087dfd8f +0x302f:  nop
```

## 反编译 C

```c
// boost::gregorian::greg_month::get_month_map_ptr @ 0x87dcd60

/* WARNING: Removing unreachable block (ram,0x087dd433) */
/* WARNING: Removing unreachable block (ram,0x087dd2d1) */
/* WARNING: Removing unreachable block (ram,0x087dd365) */
/* WARNING: Removing unreachable block (ram,0x087dd2c6) */
/* WARNING: Removing unreachable block (ram,0x087dd428) */
/* WARNING: Removing unreachable block (ram,0x087dd4ae) */
/* WARNING: Removing unreachable block (ram,0x087dd50a) */
/* WARNING: Removing unreachable block (ram,0x087dd370) */
/* WARNING: Removing unreachable block (ram,0x087dd4a3) */
/* boost::gregorian::greg_month::get_month_map_ptr() */

greg_month * __thiscall boost::gregorian::greg_month::get_month_map_ptr(greg_month *this)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  size_t sVar7;
  locale *plVar8;
  ctype *pcVar9;
  char *pcVar10;
  uint uVar11;
  bool bVar12;
  int local_88;
  short local_82;
  char *local_7c;
  char *local_78;
  pair local_74 [20];
  int local_60;
  short local_5c;
  int local_58;
  short local_54;
  int local_50;
  short local_4c;
  int local_48;
  short local_44;
  locale local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c [3];
  allocator local_1d [13];
  
  if ((get_month_map_ptr()::month_map_ptr == '\0') &&
     (iVar5 = __cxa_guard_acquire(&get_month_map_ptr()::month_map_ptr), iVar5 != 0)) {
                    /* try { // try from 087dcdbe to 087dcdc2 has its CatchHandler @ 087dd1db */
    pvVar6 = operator_new(0x18);
    *(undefined4 *)((int)pvVar6 + 0x14) = 0;
    *(undefined4 *)((int)pvVar6 + 4) = 0;
    *(undefined4 *)((int)pvVar6 + 8) = 0;
    *(int *)((int)pvVar6 + 0xc) = (int)pvVar6 + 4;
    *(int *)((int)pvVar6 + 0x10) = (int)pvVar6 + 4;
    DAT_09491d4c = (undefined4 *)0x0;
    get_month_map_ptr()::month_map_ptr = pvVar6;
                    /* try { // try from 087dcdfa to 087dcdfe has its CatchHandler @ 087dd4e6 */
    DAT_09491d4c = operator_new(0x10);
    DAT_09491d4c[3] = pvVar6;
    DAT_09491d4c[1] = 1;
    DAT_09491d4c[2] = 1;
    *DAT_09491d4c = &PTR__sp_counted_impl_p_08de0de0;
    detail::sp_enable_shared_from_this(&get_month_map_ptr()::month_map_ptr,pvVar6,pvVar6);
    __cxa_guard_release(&get_month_map_ptr()::month_map_ptr);
    __cxa_atexit(shared_ptr<std::map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>>
                 ::~shared_ptr,&get_month_map_ptr()::month_map_ptr,&__dso_handle);
  }
  if (*(int *)((int)get_month_map_ptr()::month_map_ptr + 0x14) == 0) {
                    /* try { // try from 087dce71 to 087dce75 has its CatchHandler @ 087dd1fb */
    std::string::string((string *)local_2c,"",local_1d);
    local_88 = 0;
    local_82 = 1;
    do {
      pcVar10 = *(char **)((int)&long_month_names + local_88);
      sVar7 = strlen(pcVar10);
                    /* try { // try from 087dceb2 to 087dcec5 has its CatchHandler @ 087dd203 */
      std::string::assign((string *)local_2c,pcVar10,sVar7);
      std::string::string((string *)&local_30,(string *)local_2c);
                    /* try { // try from 087dcec6 to 087dceca has its CatchHandler @ 087dd21c */
      plVar8 = (locale *)std::locale::classic();
      std::locale::locale(&local_40,plVar8);
      uVar2 = *(uint *)(local_30 + -0xc);
      if (uVar2 != 0) {
        uVar11 = 0;
        do {
          if (*(int *)(local_30 + -4) < 0) {
            local_78 = (char *)(local_30 + uVar11);
            pcVar10 = local_78;
          }
          else {
                    /* try { // try from 087dcef3 to 087dcf5e has its CatchHandler @ 087dd232 */
            std::string::_M_leak_hard((string *)&local_30);
            local_78 = (char *)(local_30 + uVar11);
            pcVar10 = local_78;
            if (-1 < *(int *)(local_30 + -4)) {
              std::string::_M_leak_hard((string *)&local_30);
              pcVar10 = (char *)(local_30 + uVar11);
            }
          }
          cVar4 = *pcVar10;
          pcVar9 = std::use_facet<std::ctype<char>>(&local_40);
          cVar4 = (**(code **)(*(int *)pcVar9 + 0x10))(pcVar9,(int)cVar4);
          uVar11 = uVar11 + 1;
          *local_78 = cVar4;
        } while (uVar11 < uVar2);
      }
      std::string::string((string *)&local_34,(string *)&local_30);
      std::locale::~locale(&local_40);
                    /* try { // try from 087dcf77 to 087dcf7b has its CatchHandler @ 087dd253 */
      std::string::assign((string *)local_2c,(string *)&local_34);
      if ((allocator *)(local_34 + -0xc) != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
        LOCK();
        piVar1 = (int *)(local_34 + -4);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 < 1) {
          std::string::_Rep::_M_destroy((allocator *)(local_34 + -0xc));
        }
      }
      if ((allocator *)(local_30 + -0xc) != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
        LOCK();
        piVar1 = (int *)(local_30 + -4);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 < 1) {
          std::string::_Rep::_M_destroy((allocator *)(local_30 + -0xc));
        }
      }
                    /* try { // try from 087dcfad to 087dcfb1 has its CatchHandler @ 087dd203 */
      std::string::string((string *)&local_48,(string *)local_2c);
      local_44 = local_82;
                    /* try { // try from 087dcfc4 to 087dcfc8 has its CatchHandler @ 087dd2dc */
      std::string::string((string *)&local_50,(string *)&local_48);
      local_4c = local_44;
                    /* try { // try from 087dcfe4 to 087dcfe8 has its CatchHandler @ 087dd2f5 */
      std::
      _Rb_tree<std::string,std::pair<std::string_const,unsigned_short>,std::_Select1st<std::pair<std::string_const,unsigned_short>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
      ::_M_insert_unique(local_74);
      if ((allocator *)(local_50 + -0xc) != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
        LOCK();
        piVar1 = (int *)(local_50 + -4);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 < 1) {
          std::string::_Rep::_M_destroy((allocator *)(local_50 + -0xc));
        }
      }
      if ((allocator *)(local_48 + -0xc) != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
        LOCK();
        piVar1 = (int *)(local_48 + -4);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 < 1) {
          std::string::_Rep::_M_destroy((allocator *)(local_48 + -0xc));
        }
      }
      pcVar10 = *(char **)((int)&short_month_names + local_88);
      sVar7 = strlen(pcVar10);
                    /* try { // try from 087dd034 to 087dd04a has its CatchHandler @ 087dd203 */
      std::string::assign((string *)local_2c,pcVar10,sVar7);
      std::string::string((string *)&local_38,(string *)local_2c);
                    /* try { // try from 087dd04b to 087dd04f has its CatchHandler @ 087dd37b */
      plVar8 = (locale *)std::locale::classic();
      std::locale::locale(&local_40,plVar8);
      uVar2 = *(uint *)(local_38 + -0xc);
      if (uVar2 != 0) {
        uVar11 = 0;
        do {
          if (*(int *)(local_38 + -4) < 0) {
            local_7c = (char *)(local_38 + uVar11);
            pcVar10 = local_7c;
          }
          else {
                    /* try { // try from 087dd073 to 087dd0f6 has its CatchHandler @ 087dd394 */
            std::string::_M_leak_hard((string *)&local_38);
            local_7c = (char *)(local_38 + uVar11);
            pcVar10 = local_7c;
            if (-1 < *(int *)(local_38 + -4)) {
              std::string::_M_leak_hard((string *)&local_38);
              pcVar10 = (char *)(local_38 + uVar11);
            }
          }
          cVar4 = *pcVar10;
          pcVar9 = std::use_facet<std::ctype<char>>(&local_40);
          cVar4 = (**(code **)(*(int *)pcVar9 + 0x10))(pcVar9,(int)cVar4);
          uVar11 = uVar11 + 1;
          *local_7c = cVar4;
        } while (uVar11 < uVar2);
      }
      std::string::string((string *)&local_3c,(string *)&local_38);
      std::locale::~locale(&local_40);
                    /* try { // try from 087dd10c to 087dd110 has its CatchHandler @ 087dd3b8 */
      std::string::assign((string *)local_2c,(string *)&local_3c);
      if ((allocator *)(local_3c + -0xc) != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
        LOCK();
        piVar1 = (int *)(local_3c + -4);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 < 1) {
          std::string::_Rep::_M_destroy((allocator *)(local_3c + -0xc));
        }
      }
      if ((allocator *)(local_38 + -0xc) != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
        LOCK();
        piVar1 = (int *)(local_38 + -4);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 < 1) {
          std::string::_Rep::_M_destroy((allocator *)(local_38 + -0xc));
        }
      }
                    /* try { // try from 087dd144 to 087dd148 has its CatchHandler @ 087dd203 */
      std::string::string((string *)&local_58,(string *)local_2c);
      local_54 = local_82;
                    /* try { // try from 087dd15b to 087dd15f has its CatchHandler @ 087dd43e */
      std::string::string((string *)&local_60,(string *)&local_58);
      local_5c = local_54;
                    /* try { // try from 087dd17b to 087dd17f has its CatchHandler @ 087dd443 */
      std::
      _Rb_tree<std::string,std::pair<std::string_const,unsigned_short>,std::_Select1st<std::pair<std::string_const,unsigned_short>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
      ::_M_insert_unique(local_74);
      if ((allocator *)(local_60 + -0xc) != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
        LOCK();
        piVar1 = (int *)(local_60 + -4);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 < 1) {
          std::string::_Rep::_M_destroy((allocator *)(local_60 + -0xc));
        }
      }
      if ((allocator *)(local_58 + -0xc) != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
        LOCK();
        piVar1 = (int *)(local_58 + -4);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 < 1) {
          std::string::_Rep::_M_destroy((allocator *)(local_58 + -0xc));
        }
      }
      local_82 = local_82 + 1;
      local_88 = local_88 + 4;
    } while (local_82 != 0xd);
    if ((allocator *)(local_2c[0] + -0xc) != (allocator *)&std::string::_Rep::_S_empty_rep_storage)
    {
      LOCK();
      piVar1 = (int *)(local_2c[0] + -4);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 < 1) {
        std::string::_Rep::_M_destroy((allocator *)(local_2c[0] + -0xc));
      }
    }
  }
  *(void **)this = get_month_map_ptr()::month_map_ptr;
  puVar3 = DAT_09491d4c;
  bVar12 = DAT_09491d4c != (undefined4 *)0x0;
  *(undefined4 **)(this + 4) = DAT_09491d4c;
  if (bVar12) {
    LOCK();
    puVar3[1] = puVar3[1] + 1;
    UNLOCK();
  }
  return this;
}
```
