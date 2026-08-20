# importInGameEventScript

`_ZN23InGameEventScriptLoader23importInGameEventScriptEiRKSs`

`InGameEventScriptLoader::importInGameEventScript(int, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)`

| 类 | 地址 |
|---|---|
| `InGameEventScriptLoader` | `0x08982a4a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08982a4a  _ZN23InGameEventScriptLoader23importInGameEventScriptEiRKSs
#           InGameEventScriptLoader::importInGameEventScript(int, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
# range [0x08982a4a, 0x08982f0f]
08982a4a +0x000:  push   %ebp
08982a4b +0x001:  mov    %esp,%ebp
08982a4d +0x003:  push   %edi
08982a4e +0x004:  push   %esi
08982a4f +0x005:  push   %ebx
08982a50 +0x006:  sub    $0x2c,%esp
08982a53 +0x009:  movl   $0x0,-0x20(%ebp)
08982a5a +0x010:  movb   $0x1,-0x19(%ebp)
08982a5e +0x014:  mov    0xc(%ebp),%eax
08982a61 +0x017:  cmp    $0x194,%eax
08982a66 +0x01c:  je     08982bba <+0x170>
08982a6c +0x022:  cmp    $0x194,%eax
08982a71 +0x027:  jg     08982aaf <+0x65>
08982a73 +0x029:  cmp    $0x65,%eax
08982a76 +0x02c:  je     08982e7f <+0x435>
08982a7c +0x032:  cmp    $0x65,%eax
08982a7f +0x035:  jg     08982a98 <+0x4e>
08982a81 +0x037:  cmp    $0x56,%eax
08982a84 +0x03a:  je     08982dd0 <+0x386>
08982a8a +0x040:  cmp    $0x5c,%eax
08982a8d +0x043:  je     08982e29 <+0x3df>
08982a93 +0x049:  jmp    08982ed6 <+0x48c>
08982a98 +0x04e:  cmp    $0x191,%eax
08982a9d +0x053:  jl     08982ed6 <+0x48c>
08982aa3 +0x059:  cmp    $0x192,%eax
08982aa8 +0x05e:  jle    08982b08 <+0xbe>
08982aaa +0x060:  jmp    08982b61 <+0x117>
08982aaf +0x065:  cmp    $0x199,%eax
08982ab4 +0x06a:  je     08982cc5 <+0x27b>
08982aba +0x070:  cmp    $0x199,%eax
08982abf +0x075:  jg     08982ae7 <+0x9d>
08982ac1 +0x077:  cmp    $0x197,%eax
08982ac6 +0x07c:  je     08982c6c <+0x222>
08982acc +0x082:  cmp    $0x197,%eax
08982ad1 +0x087:  jg     08982ed5 <+0x48b>
08982ad7 +0x08d:  cmp    $0x196,%eax
08982adc +0x092:  je     08982c13 <+0x1c9>
08982ae2 +0x098:  jmp    08982ed6 <+0x48c>
08982ae7 +0x09d:  cmp    $0x19b,%eax
08982aec +0x0a2:  je     08982d77 <+0x32d>
08982af2 +0x0a8:  cmp    $0x19b,%eax
08982af7 +0x0ad:  jl     08982d1e <+0x2d4>
08982afd +0x0b3:  cmp    $0x19c,%eax
08982b02 +0x0b8:  jne    08982ed6 <+0x48c>
08982b08 +0x0be:  movl   $0x50,(%esp)
08982b0f +0x0c5:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08982b14 +0x0ca:  mov    %eax,%ebx
08982b16 +0x0cc:  mov    %ebx,%eax
08982b18 +0x0ce:  mov    %eax,(%esp)
08982b1b +0x0d1:  call   089858da <_GLOBAL__I__ZN19InGameEventInfoList15insertEventInfoEiR15InGameEventInfo+0xf1>  ; global constructors keyed to InGameEventInfoList::insertEventInfo(int, InGameEventInfo&)+0xf1
08982b20 +0x0d6:  jmp    08982b3a <+0xf0>
08982b22 +0x0d8:  mov    %edx,%esi
08982b24 +0x0da:  mov    %eax,%edi
08982b26 +0x0dc:  mov    %ebx,(%esp)
08982b29 +0x0df:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08982b2e +0x0e4:  mov    %edi,%eax
08982b30 +0x0e6:  mov    %esi,%edx
08982b32 +0x0e8:  mov    %eax,(%esp)
08982b35 +0x0eb:  call   08ae3750 <_Unwind_Resume>
08982b3a +0x0f0:  mov    %ebx,%eax
08982b3c +0x0f2:  mov    %eax,-0x20(%ebp)
08982b3f +0x0f5:  mov    0x10(%ebp),%eax
08982b42 +0x0f8:  mov    %eax,(%esp)
08982b45 +0x0fb:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08982b4a +0x100:  mov    -0x20(%ebp),%edx
08982b4d +0x103:  mov    %eax,0x4(%esp)
08982b51 +0x107:  mov    %edx,(%esp)
08982b54 +0x10a:  call   0897f7bf <_Z34importAccountFirstLoginEventScriptP23AccountFirstLoginScriptPKc>  ; importAccountFirstLoginEventScript(AccountFirstLoginScript*, char const*)
08982b59 +0x10f:  mov    %al,-0x19(%ebp)
08982b5c +0x112:  jmp    08982ed6 <+0x48c>
08982b61 +0x117:  movl   $0x24,(%esp)
08982b68 +0x11e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08982b6d +0x123:  mov    %eax,%ebx
08982b6f +0x125:  mov    %ebx,%eax
08982b71 +0x127:  mov    %eax,(%esp)
08982b74 +0x12a:  call   08986134 <_GLOBAL__I__ZN19InGameEventInfoList15insertEventInfoEiR15InGameEventInfo+0x94b>  ; global constructors keyed to InGameEventInfoList::insertEventInfo(int, InGameEventInfo&)+0x94b
08982b79 +0x12f:  jmp    08982b93 <+0x149>
08982b7b +0x131:  mov    %edx,%esi
08982b7d +0x133:  mov    %eax,%edi
08982b7f +0x135:  mov    %ebx,(%esp)
08982b82 +0x138:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08982b87 +0x13d:  mov    %edi,%eax
08982b89 +0x13f:  mov    %esi,%edx
08982b8b +0x141:  mov    %eax,(%esp)
08982b8e +0x144:  call   08ae3750 <_Unwind_Resume>
08982b93 +0x149:  mov    %ebx,%eax
08982b95 +0x14b:  mov    %eax,-0x20(%ebp)
08982b98 +0x14e:  mov    0x10(%ebp),%eax
08982b9b +0x151:  mov    %eax,(%esp)
08982b9e +0x154:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08982ba3 +0x159:  mov    -0x20(%ebp),%edx
08982ba6 +0x15c:  mov    %eax,0x4(%esp)
08982baa +0x160:  mov    %edx,(%esp)
08982bad +0x163:  call   0897fc99 <_Z31importAddItemCountDBEventScriptP20AddItemCountDBScriptPKc>  ; importAddItemCountDBEventScript(AddItemCountDBScript*, char const*)
08982bb2 +0x168:  mov    %al,-0x19(%ebp)
08982bb5 +0x16b:  jmp    08982ed6 <+0x48c>
08982bba +0x170:  movl   $0x6c,(%esp)
08982bc1 +0x177:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08982bc6 +0x17c:  mov    %eax,%ebx
08982bc8 +0x17e:  mov    %ebx,%eax
08982bca +0x180:  mov    %eax,(%esp)
08982bcd +0x183:  call   089861da <_GLOBAL__I__ZN19InGameEventInfoList15insertEventInfoEiR15InGameEventInfo+0x9f1>  ; global constructors keyed to InGameEventInfoList::insertEventInfo(int, InGameEventInfo&)+0x9f1
08982bd2 +0x188:  jmp    08982bec <+0x1a2>
08982bd4 +0x18a:  mov    %edx,%esi
08982bd6 +0x18c:  mov    %eax,%edi
08982bd8 +0x18e:  mov    %ebx,(%esp)
08982bdb +0x191:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08982be0 +0x196:  mov    %edi,%eax
08982be2 +0x198:  mov    %esi,%edx
08982be4 +0x19a:  mov    %eax,(%esp)
08982be7 +0x19d:  call   08ae3750 <_Unwind_Resume>
08982bec +0x1a2:  mov    %ebx,%eax
08982bee +0x1a4:  mov    %eax,-0x20(%ebp)
08982bf1 +0x1a7:  mov    0x10(%ebp),%eax
08982bf4 +0x1aa:  mov    %eax,(%esp)
08982bf7 +0x1ad:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08982bfc +0x1b2:  mov    -0x20(%ebp),%edx
08982bff +0x1b5:  mov    %eax,0x4(%esp)
08982c03 +0x1b9:  mov    %edx,(%esp)
08982c06 +0x1bc:  call   08980261 <_Z25importLevelUpRewardScriptP19LevelUpRewardScriptPKc>  ; importLevelUpRewardScript(LevelUpRewardScript*, char const*)
08982c0b +0x1c1:  mov    %al,-0x19(%ebp)
08982c0e +0x1c4:  jmp    08982ed6 <+0x48c>
08982c13 +0x1c9:  movl   $0x68,(%esp)
08982c1a +0x1d0:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08982c1f +0x1d5:  mov    %eax,%ebx
08982c21 +0x1d7:  mov    %ebx,%eax
08982c23 +0x1d9:  mov    %eax,(%esp)
08982c26 +0x1dc:  call   08985b1a <_GLOBAL__I__ZN19InGameEventInfoList15insertEventInfoEiR15InGameEventInfo+0x331>  ; global constructors keyed to InGameEventInfoList::insertEventInfo(int, InGameEventInfo&)+0x331
08982c2b +0x1e1:  jmp    08982c45 <+0x1fb>
08982c2d +0x1e3:  mov    %edx,%esi
08982c2f +0x1e5:  mov    %eax,%edi
08982c31 +0x1e7:  mov    %ebx,(%esp)
08982c34 +0x1ea:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08982c39 +0x1ef:  mov    %edi,%eax
08982c3b +0x1f1:  mov    %esi,%edx
08982c3d +0x1f3:  mov    %eax,(%esp)
08982c40 +0x1f6:  call   08ae3750 <_Unwind_Resume>
08982c45 +0x1fb:  mov    %ebx,%eax
08982c47 +0x1fd:  mov    %eax,-0x20(%ebp)
08982c4a +0x200:  mov    0x10(%ebp),%eax
08982c4d +0x203:  mov    %eax,(%esp)
08982c50 +0x206:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08982c55 +0x20b:  mov    -0x20(%ebp),%edx
08982c58 +0x20e:  mov    %eax,0x4(%esp)
08982c5c +0x212:  mov    %edx,(%esp)
08982c5f +0x215:  call   08981e0f <_Z36importExchangeRandomItemRewardScriptP30ExchangeRandomItemRewardScriptPKc>  ; importExchangeRandomItemRewardScript(ExchangeRandomItemRewardScript*, char const*)
08982c64 +0x21a:  mov    %al,-0x19(%ebp)
08982c67 +0x21d:  jmp    08982ed6 <+0x48c>
08982c6c +0x222:  movl   $0x64,(%esp)
08982c73 +0x229:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08982c78 +0x22e:  mov    %eax,%ebx
08982c7a +0x230:  mov    %ebx,%eax
08982c7c +0x232:  mov    %eax,(%esp)
08982c7f +0x235:  call   08985be2 <_GLOBAL__I__ZN19InGameEventInfoList15insertEventInfoEiR15InGameEventInfo+0x3f9>  ; global constructors keyed to InGameEventInfoList::insertEventInfo(int, InGameEventInfo&)+0x3f9
08982c84 +0x23a:  jmp    08982c9e <+0x254>
08982c86 +0x23c:  mov    %edx,%esi
08982c88 +0x23e:  mov    %eax,%edi
08982c8a +0x240:  mov    %ebx,(%esp)
08982c8d +0x243:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08982c92 +0x248:  mov    %edi,%eax
08982c94 +0x24a:  mov    %esi,%edx
08982c96 +0x24c:  mov    %eax,(%esp)
08982c99 +0x24f:  call   08ae3750 <_Unwind_Resume>
08982c9e +0x254:  mov    %ebx,%eax
08982ca0 +0x256:  mov    %eax,-0x20(%ebp)
08982ca3 +0x259:  mov    0x10(%ebp),%eax
08982ca6 +0x25c:  mov    %eax,(%esp)
08982ca9 +0x25f:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08982cae +0x264:  mov    -0x20(%ebp),%edx
08982cb1 +0x267:  mov    %eax,0x4(%esp)
08982cb5 +0x26b:  mov    %edx,(%esp)
08982cb8 +0x26e:  call   089824b4 <_Z38importAvatarDisjointRandomRewardScriptP32AvatarDisjointRandomRewardScriptPKc>  ; importAvatarDisjointRandomRewardScript(AvatarDisjointRandomRewardScript*, char const*)
08982cbd +0x273:  mov    %al,-0x19(%ebp)
08982cc0 +0x276:  jmp    08982ed6 <+0x48c>
08982cc5 +0x27b:  movl   $0x10,(%esp)
08982ccc +0x282:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08982cd1 +0x287:  mov    %eax,%ebx
08982cd3 +0x289:  mov    %ebx,%eax
08982cd5 +0x28b:  mov    %eax,(%esp)
08982cd8 +0x28e:  call   08985c74 <_GLOBAL__I__ZN19InGameEventInfoList15insertEventInfoEiR15InGameEventInfo+0x48b>  ; global constructors keyed to InGameEventInfoList::insertEventInfo(int, InGameEventInfo&)+0x48b
08982cdd +0x293:  jmp    08982cf7 <+0x2ad>
08982cdf +0x295:  mov    %edx,%esi
08982ce1 +0x297:  mov    %eax,%edi
08982ce3 +0x299:  mov    %ebx,(%esp)
08982ce6 +0x29c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08982ceb +0x2a1:  mov    %edi,%eax
08982ced +0x2a3:  mov    %esi,%edx
08982cef +0x2a5:  mov    %eax,(%esp)
08982cf2 +0x2a8:  call   08ae3750 <_Unwind_Resume>
08982cf7 +0x2ad:  mov    %ebx,%eax
08982cf9 +0x2af:  mov    %eax,-0x20(%ebp)
08982cfc +0x2b2:  mov    0x10(%ebp),%eax
08982cff +0x2b5:  mov    %eax,(%esp)
08982d02 +0x2b8:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08982d07 +0x2bd:  mov    -0x20(%ebp),%edx
08982d0a +0x2c0:  mov    %eax,0x4(%esp)
08982d0e +0x2c4:  mov    %edx,(%esp)
08982d11 +0x2c7:  call   08982fc6 <_Z32importFatigueQuantityEventScriptP21FatigueQuantityScriptPKc>  ; importFatigueQuantityEventScript(FatigueQuantityScript*, char const*)
08982d16 +0x2cc:  mov    %al,-0x19(%ebp)
08982d19 +0x2cf:  jmp    08982ed6 <+0x48c>
08982d1e +0x2d4:  movl   $0x30,(%esp)
08982d25 +0x2db:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08982d2a +0x2e0:  mov    %eax,%ebx
08982d2c +0x2e2:  mov    %ebx,%eax
08982d2e +0x2e4:  mov    %eax,(%esp)
08982d31 +0x2e7:  call   08985d1c <_GLOBAL__I__ZN19InGameEventInfoList15insertEventInfoEiR15InGameEventInfo+0x533>  ; global constructors keyed to InGameEventInfoList::insertEventInfo(int, InGameEventInfo&)+0x533
08982d36 +0x2ec:  jmp    08982d50 <+0x306>
08982d38 +0x2ee:  mov    %edx,%esi
08982d3a +0x2f0:  mov    %eax,%edi
08982d3c +0x2f2:  mov    %ebx,(%esp)
08982d3f +0x2f5:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08982d44 +0x2fa:  mov    %edi,%eax
08982d46 +0x2fc:  mov    %esi,%edx
08982d48 +0x2fe:  mov    %eax,(%esp)
08982d4b +0x301:  call   08ae3750 <_Unwind_Resume>
08982d50 +0x306:  mov    %ebx,%eax
08982d52 +0x308:  mov    %eax,-0x20(%ebp)
08982d55 +0x30b:  mov    0x10(%ebp),%eax
08982d58 +0x30e:  mov    %eax,(%esp)
08982d5b +0x311:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08982d60 +0x316:  mov    -0x20(%ebp),%edx
08982d63 +0x319:  mov    %eax,0x4(%esp)
08982d67 +0x31d:  mov    %edx,(%esp)
08982d6a +0x320:  call   089834a6 <_Z38importPurchaseCashItemBonusEventScriptP27PurchaseCashItemBonusScriptPKc>  ; importPurchaseCashItemBonusEventScript(PurchaseCashItemBonusScript*, char const*)
08982d6f +0x325:  mov    %al,-0x19(%ebp)
08982d72 +0x328:  jmp    08982ed6 <+0x48c>
08982d77 +0x32d:  movl   $0x34,(%esp)
08982d7e +0x334:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08982d83 +0x339:  mov    %eax,%ebx
08982d85 +0x33b:  mov    %ebx,%eax
08982d87 +0x33d:  mov    %eax,(%esp)
08982d8a +0x340:  call   08985e0a <_GLOBAL__I__ZN19InGameEventInfoList15insertEventInfoEiR15InGameEventInfo+0x621>  ; global constructors keyed to InGameEventInfoList::insertEventInfo(int, InGameEventInfo&)+0x621
08982d8f +0x345:  jmp    08982da9 <+0x35f>
08982d91 +0x347:  mov    %edx,%esi
08982d93 +0x349:  mov    %eax,%edi
08982d95 +0x34b:  mov    %ebx,(%esp)
08982d98 +0x34e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08982d9d +0x353:  mov    %edi,%eax
08982d9f +0x355:  mov    %esi,%edx
08982da1 +0x357:  mov    %eax,(%esp)
08982da4 +0x35a:  call   08ae3750 <_Unwind_Resume>
08982da9 +0x35f:  mov    %ebx,%eax
08982dab +0x361:  mov    %eax,-0x20(%ebp)
08982dae +0x364:  mov    0x10(%ebp),%eax
08982db1 +0x367:  mov    %eax,(%esp)
08982db4 +0x36a:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08982db9 +0x36f:  mov    -0x20(%ebp),%edx
08982dbc +0x372:  mov    %eax,0x4(%esp)
08982dc0 +0x376:  mov    %edx,(%esp)
08982dc3 +0x379:  call   08983e48 <_Z30importObjectBringUpEventScriptP19ObjectBringUpScriptPKc>  ; importObjectBringUpEventScript(ObjectBringUpScript*, char const*)
08982dc8 +0x37e:  mov    %al,-0x19(%ebp)
08982dcb +0x381:  jmp    08982ed6 <+0x48c>
08982dd0 +0x386:  movl   $0x78,(%esp)
08982dd7 +0x38d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08982ddc +0x392:  mov    %eax,%ebx
08982dde +0x394:  mov    %ebx,%eax
08982de0 +0x396:  mov    %eax,(%esp)
08982de3 +0x399:  call   0898597a <_GLOBAL__I__ZN19InGameEventInfoList15insertEventInfoEiR15InGameEventInfo+0x191>  ; global constructors keyed to InGameEventInfoList::insertEventInfo(int, InGameEventInfo&)+0x191
08982de8 +0x39e:  jmp    08982e02 <+0x3b8>
08982dea +0x3a0:  mov    %edx,%esi
08982dec +0x3a2:  mov    %eax,%edi
08982dee +0x3a4:  mov    %ebx,(%esp)
08982df1 +0x3a7:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08982df6 +0x3ac:  mov    %edi,%eax
08982df8 +0x3ae:  mov    %esi,%edx
08982dfa +0x3b0:  mov    %eax,(%esp)
08982dfd +0x3b3:  call   08ae3750 <_Unwind_Resume>
08982e02 +0x3b8:  mov    %ebx,%eax
08982e04 +0x3ba:  mov    %eax,-0x20(%ebp)
08982e07 +0x3bd:  mov    0x10(%ebp),%eax
08982e0a +0x3c0:  mov    %eax,(%esp)
08982e0d +0x3c3:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08982e12 +0x3c8:  mov    -0x20(%ebp),%edx
08982e15 +0x3cb:  mov    %eax,0x4(%esp)
08982e19 +0x3cf:  mov    %edx,(%esp)
08982e1c +0x3d2:  call   08981539 <_Z22importAttendanceScriptP16AttendanceScriptPKc>  ; importAttendanceScript(AttendanceScript*, char const*)
08982e21 +0x3d7:  mov    %al,-0x19(%ebp)
08982e24 +0x3da:  jmp    08982ed6 <+0x48c>
08982e29 +0x3df:  movl   $0x18,(%esp)
08982e30 +0x3e6:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08982e35 +0x3eb:  mov    %eax,%ebx
08982e37 +0x3ed:  mov    %ebx,%eax
08982e39 +0x3ef:  mov    %eax,(%esp)
08982e3c +0x3f2:  call   08985fb8 <_GLOBAL__I__ZN19InGameEventInfoList15insertEventInfoEiR15InGameEventInfo+0x7cf>  ; global constructors keyed to InGameEventInfoList::insertEventInfo(int, InGameEventInfo&)+0x7cf
08982e41 +0x3f7:  jmp    08982e5b <+0x411>
08982e43 +0x3f9:  mov    %edx,%esi
08982e45 +0x3fb:  mov    %eax,%edi
08982e47 +0x3fd:  mov    %ebx,(%esp)
08982e4a +0x400:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08982e4f +0x405:  mov    %edi,%eax
08982e51 +0x407:  mov    %esi,%edx
08982e53 +0x409:  mov    %eax,(%esp)
08982e56 +0x40c:  call   08ae3750 <_Unwind_Resume>
08982e5b +0x411:  mov    %ebx,%eax
08982e5d +0x413:  mov    %eax,-0x20(%ebp)
08982e60 +0x416:  mov    0x10(%ebp),%eax
08982e63 +0x419:  mov    %eax,(%esp)
08982e66 +0x41c:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08982e6b +0x421:  mov    -0x20(%ebp),%edx
08982e6e +0x424:  mov    %eax,0x4(%esp)
08982e72 +0x428:  mov    %edx,(%esp)
08982e75 +0x42b:  call   0898512c <_Z26importPcBangPlayTimeScriptP20PcBangPlayTimeScriptPKc>  ; importPcBangPlayTimeScript(PcBangPlayTimeScript*, char const*)
08982e7a +0x430:  mov    %al,-0x19(%ebp)
08982e7d +0x433:  jmp    08982ed6 <+0x48c>
08982e7f +0x435:  movl   $0x64,(%esp)
08982e86 +0x43c:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08982e8b +0x441:  mov    %eax,%ebx
08982e8d +0x443:  mov    %ebx,%eax
08982e8f +0x445:  mov    %eax,(%esp)
08982e92 +0x448:  call   08985eec <_GLOBAL__I__ZN19InGameEventInfoList15insertEventInfoEiR15InGameEventInfo+0x703>  ; global constructors keyed to InGameEventInfoList::insertEventInfo(int, InGameEventInfo&)+0x703
08982e97 +0x44d:  jmp    08982eb1 <+0x467>
08982e99 +0x44f:  mov    %edx,%esi
08982e9b +0x451:  mov    %eax,%edi
08982e9d +0x453:  mov    %ebx,(%esp)
08982ea0 +0x456:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08982ea5 +0x45b:  mov    %edi,%eax
08982ea7 +0x45d:  mov    %esi,%edx
08982ea9 +0x45f:  mov    %eax,(%esp)
08982eac +0x462:  call   08ae3750 <_Unwind_Resume>
08982eb1 +0x467:  mov    %ebx,%eax
08982eb3 +0x469:  mov    %eax,-0x20(%ebp)
08982eb6 +0x46c:  mov    0x10(%ebp),%eax
08982eb9 +0x46f:  mov    %eax,(%esp)
08982ebc +0x472:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08982ec1 +0x477:  mov    -0x20(%ebp),%edx
08982ec4 +0x47a:  mov    %eax,0x4(%esp)
08982ec8 +0x47e:  mov    %edx,(%esp)
08982ecb +0x481:  call   0898491b <_Z36importUsedFatigueGiveItemEventScriptP25UsedFatigueGiveItemScriptPKc>  ; importUsedFatigueGiveItemEventScript(UsedFatigueGiveItemScript*, char const*)
08982ed0 +0x486:  mov    %al,-0x19(%ebp)
08982ed3 +0x489:  jmp    08982ed6 <+0x48c>
08982ed5 +0x48b:  nop
08982ed6 +0x48c:  movzbl -0x19(%ebp),%eax
08982eda +0x490:  xor    $0x1,%eax
08982edd +0x493:  test   %al,%al
08982edf +0x495:  je     08982f05 <+0x4bb>
08982ee1 +0x497:  cmpl   $0x0,-0x20(%ebp)
08982ee5 +0x49b:  je     08982efe <+0x4b4>
08982ee7 +0x49d:  mov    -0x20(%ebp),%ebx
08982eea +0x4a0:  test   %ebx,%ebx
08982eec +0x4a2:  je     08982efe <+0x4b4>
08982eee +0x4a4:  mov    %ebx,(%esp)
08982ef1 +0x4a7:  call   08110e96 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x3a8>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x3a8
08982ef6 +0x4ac:  mov    %ebx,(%esp)
08982ef9 +0x4af:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08982efe +0x4b4:  movl   $0x0,-0x20(%ebp)
08982f05 +0x4bb:  mov    -0x20(%ebp),%eax
08982f08 +0x4be:  add    $0x2c,%esp
08982f0b +0x4c1:  pop    %ebx
08982f0c +0x4c2:  pop    %esi
08982f0d +0x4c3:  pop    %edi
08982f0e +0x4c4:  pop    %ebp
08982f0f +0x4c5:  ret
```

## 反编译 C

```c
// InGameEventScriptLoader::importInGameEventScript @ 0x8982a4a

/* InGameEventScriptLoader::importInGameEventScript(int, std::string const&) */

InGameEventScript * __thiscall
InGameEventScriptLoader::importInGameEventScript
          (InGameEventScriptLoader *this,int param_1,string *param_2)

{
  char *pcVar1;
  InGameEventScript *local_24;
  char local_1d;
  
  local_24 = (InGameEventScript *)0x0;
  local_1d = '\x01';
  if (param_1 == 0x194) {
    local_24 = operator_new(0x6c);
                    /* try { // try from 08982bcd to 08982bd1 has its CatchHandler @ 08982bd4 */
    LevelUpRewardScript::LevelUpRewardScript((LevelUpRewardScript *)local_24);
    pcVar1 = (char *)std::string::c_str(param_2);
    local_1d = importLevelUpRewardScript((LevelUpRewardScript *)local_24,pcVar1);
    goto LAB_08982ed6;
  }
  if (param_1 < 0x195) {
    if (param_1 == 0x65) {
      local_24 = operator_new(100);
                    /* try { // try from 08982e92 to 08982e96 has its CatchHandler @ 08982e99 */
      UsedFatigueGiveItemScript::UsedFatigueGiveItemScript((UsedFatigueGiveItemScript *)local_24);
      pcVar1 = (char *)std::string::c_str(param_2);
      local_1d = importUsedFatigueGiveItemEventScript((UsedFatigueGiveItemScript *)local_24,pcVar1);
      goto LAB_08982ed6;
    }
    if (param_1 < 0x66) {
      if (param_1 == 0x56) {
        local_24 = operator_new(0x78);
                    /* try { // try from 08982de3 to 08982de7 has its CatchHandler @ 08982dea */
        AttendanceScript::AttendanceScript((AttendanceScript *)local_24);
        pcVar1 = (char *)std::string::c_str(param_2);
        local_1d = importAttendanceScript((AttendanceScript *)local_24,pcVar1);
      }
      else if (param_1 == 0x5c) {
        local_24 = operator_new(0x18);
                    /* try { // try from 08982e3c to 08982e40 has its CatchHandler @ 08982e43 */
        PcBangPlayTimeScript::PcBangPlayTimeScript((PcBangPlayTimeScript *)local_24);
        pcVar1 = (char *)std::string::c_str(param_2);
        local_1d = importPcBangPlayTimeScript((PcBangPlayTimeScript *)local_24,pcVar1);
      }
      goto LAB_08982ed6;
    }
    if (param_1 < 0x191) goto LAB_08982ed6;
    if (0x192 < param_1) {
      local_24 = operator_new(0x24);
                    /* try { // try from 08982b74 to 08982b78 has its CatchHandler @ 08982b7b */
      AddItemCountDBScript::AddItemCountDBScript((AddItemCountDBScript *)local_24);
      pcVar1 = (char *)std::string::c_str(param_2);
      local_1d = importAddItemCountDBEventScript((AddItemCountDBScript *)local_24,pcVar1);
      goto LAB_08982ed6;
    }
  }
  else {
    if (param_1 == 0x199) {
      local_24 = operator_new(0x10);
                    /* try { // try from 08982cd8 to 08982cdc has its CatchHandler @ 08982cdf */
      FatigueQuantityScript::FatigueQuantityScript((FatigueQuantityScript *)local_24);
      pcVar1 = (char *)std::string::c_str(param_2);
      local_1d = importFatigueQuantityEventScript((FatigueQuantityScript *)local_24,pcVar1);
      goto LAB_08982ed6;
    }
    if (param_1 < 0x19a) {
      if (param_1 == 0x197) {
        local_24 = operator_new(100);
                    /* try { // try from 08982c7f to 08982c83 has its CatchHandler @ 08982c86 */
        AvatarDisjointRandomRewardScript::AvatarDisjointRandomRewardScript
                  ((AvatarDisjointRandomRewardScript *)local_24);
        pcVar1 = (char *)std::string::c_str(param_2);
        local_1d = importAvatarDisjointRandomRewardScript
                             ((AvatarDisjointRandomRewardScript *)local_24,pcVar1);
      }
      else if ((param_1 < 0x198) && (param_1 == 0x196)) {
        local_24 = operator_new(0x68);
                    /* try { // try from 08982c26 to 08982c2a has its CatchHandler @ 08982c2d */
        ExchangeRandomItemRewardScript::ExchangeRandomItemRewardScript
                  ((ExchangeRandomItemRewardScript *)local_24);
        pcVar1 = (char *)std::string::c_str(param_2);
        local_1d = importExchangeRandomItemRewardScript
                             ((ExchangeRandomItemRewardScript *)local_24,pcVar1);
      }
      goto LAB_08982ed6;
    }
    if (param_1 == 0x19b) {
      local_24 = operator_new(0x34);
                    /* try { // try from 08982d8a to 08982d8e has its CatchHandler @ 08982d91 */
      ObjectBringUpScript::ObjectBringUpScript((ObjectBringUpScript *)local_24);
      pcVar1 = (char *)std::string::c_str(param_2);
      local_1d = importObjectBringUpEventScript((ObjectBringUpScript *)local_24,pcVar1);
      goto LAB_08982ed6;
    }
    if (param_1 < 0x19b) {
      local_24 = operator_new(0x30);
                    /* try { // try from 08982d31 to 08982d35 has its CatchHandler @ 08982d38 */
      PurchaseCashItemBonusScript::PurchaseCashItemBonusScript
                ((PurchaseCashItemBonusScript *)local_24);
      pcVar1 = (char *)std::string::c_str(param_2);
      local_1d = importPurchaseCashItemBonusEventScript
                           ((PurchaseCashItemBonusScript *)local_24,pcVar1);
      goto LAB_08982ed6;
    }
    if (param_1 != 0x19c) goto LAB_08982ed6;
  }
  local_24 = operator_new(0x50);
                    /* try { // try from 08982b1b to 08982b1f has its CatchHandler @ 08982b22 */
  AccountFirstLoginScript::AccountFirstLoginScript((AccountFirstLoginScript *)local_24);
  pcVar1 = (char *)std::string::c_str(param_2);
  local_1d = importAccountFirstLoginEventScript((AccountFirstLoginScript *)local_24,pcVar1);
LAB_08982ed6:
  if (local_1d != '\x01') {
    if ((local_24 != (InGameEventScript *)0x0) && (local_24 != (InGameEventScript *)0x0)) {
      InGameEventScript::~InGameEventScript(local_24);
      operator_delete(local_24);
    }
    local_24 = (InGameEventScript *)0x0;
  }
  return local_24;
}
```
