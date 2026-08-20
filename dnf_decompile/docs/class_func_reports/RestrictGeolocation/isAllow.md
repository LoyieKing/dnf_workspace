# isAllow

`_ZN19RestrictGeolocation7isAllowESsSs`

`RestrictGeolocation::isAllow(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::basic_string<char, std::char_traits<char>, std::allocator<char> >)`

| 类 | 地址 |
|---|---|
| `RestrictGeolocation` | `0x08170b2c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08170b2c  _ZN19RestrictGeolocation7isAllowESsSs
#           RestrictGeolocation::isAllow(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::basic_string<char, std::char_traits<char>, std::allocator<char> >)
# range [0x08170b2c, 0x08170ecb]
08170b2c +0x000:  push   %ebp
08170b2d +0x001:  mov    %esp,%ebp
08170b2f +0x003:  push   %esi
08170b30 +0x004:  push   %ebx
08170b31 +0x005:  sub    $0x90,%esp
08170b37 +0x00b:  mov    0x8(%ebp),%eax
08170b3a +0x00e:  mov    (%eax),%eax
08170b3c +0x010:  test   %eax,%eax
08170b3e +0x012:  jne    08170b80 <+0x54>
08170b40 +0x014:  movl   $0x5,0xc(%esp)
08170b48 +0x01c:  movl   $0x44,0x8(%esp)
08170b50 +0x024:  movl   $&_ZZN19RestrictGeolocation7isAllowESsSsE19__PRETTY_FUNCTION__,0x4(%esp)
08170b58 +0x02c:  lea    -0x54(%ebp),%eax
08170b5b +0x02f:  mov    %eax,(%esp)
08170b5e +0x032:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08170b63 +0x037:  movl   $"[Taiwan, GeoIP] Geo instance is null.",0x4(%esp)
08170b6b +0x03f:  lea    -0x54(%ebp),%eax
08170b6e +0x042:  mov    %eax,(%esp)
08170b71 +0x045:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08170b76 +0x04a:  mov    $0x1,%ebx
08170b7b +0x04f:  jmp    08170ec0 <+0x394>
08170b80 +0x054:  movl   $0x0,-0x64(%ebp)
08170b87 +0x05b:  movl   $0x0,-0x60(%ebp)
08170b8e +0x062:  movl   $0x0,-0x5c(%ebp)
08170b95 +0x069:  movl   $0x0,-0x58(%ebp)
08170b9c +0x070:  mov    0x10(%ebp),%eax
08170b9f +0x073:  mov    %eax,(%esp)
08170ba2 +0x076:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08170ba7 +0x07b:  mov    0x8(%ebp),%edx
08170baa +0x07e:  mov    (%edx),%edx
08170bac +0x080:  mov    %eax,0x4(%esp)
08170bb0 +0x084:  mov    %edx,(%esp)
08170bb3 +0x087:  call   0807e0d0 <_init+0x9c8>
08170bb8 +0x08c:  test   %eax,%eax
08170bba +0x08e:  setne  %al
08170bbd +0x091:  test   %al,%al
08170bbf +0x093:  je     08170bec <+0xc0>
08170bc1 +0x095:  mov    0x10(%ebp),%eax
08170bc4 +0x098:  mov    %eax,(%esp)
08170bc7 +0x09b:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08170bcc +0x0a0:  mov    0x8(%ebp),%edx
08170bcf +0x0a3:  mov    (%edx),%edx
08170bd1 +0x0a5:  mov    %eax,0x4(%esp)
08170bd5 +0x0a9:  mov    %edx,(%esp)
08170bd8 +0x0ac:  call   0807e0d0 <_init+0x9c8>
08170bdd +0x0b1:  mov    %eax,0x4(%esp)
08170be1 +0x0b5:  lea    -0x64(%ebp),%eax
08170be4 +0x0b8:  mov    %eax,(%esp)
08170be7 +0x0bb:  call   0807def0 <_init+0x7e8>
08170bec +0x0c0:  lea    -0x3d(%ebp),%eax
08170bef +0x0c3:  mov    %eax,(%esp)
08170bf2 +0x0c6:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
08170bf7 +0x0cb:  lea    -0x3d(%ebp),%eax
08170bfa +0x0ce:  mov    %eax,0x8(%esp)
08170bfe +0x0d2:  lea    -0x64(%ebp),%eax
08170c01 +0x0d5:  mov    %eax,0x4(%esp)
08170c05 +0x0d9:  lea    -0x44(%ebp),%eax
08170c08 +0x0dc:  mov    %eax,(%esp)
08170c0b +0x0df:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
08170c10 +0x0e4:  lea    -0x44(%ebp),%eax
08170c13 +0x0e7:  mov    %eax,0x4(%esp)
08170c17 +0x0eb:  mov    0x8(%ebp),%eax
08170c1a +0x0ee:  mov    %eax,(%esp)
08170c1d +0x0f1:  call   0817109a <_ZN19RestrictGeolocation18isAllowCountryCodeESs>  ; RestrictGeolocation::isAllowCountryCode(std::basic_string<char, std::char_traits<char>, std::allocator<char> >)
08170c22 +0x0f6:  mov    %eax,%ebx
08170c24 +0x0f8:  lea    -0x44(%ebp),%eax
08170c27 +0x0fb:  mov    %eax,(%esp)
08170c2a +0x0fe:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08170c2f +0x103:  jmp    08170c61 <+0x135>
08170c31 +0x105:  mov    %edx,%ebx
08170c33 +0x107:  mov    %eax,%esi
08170c35 +0x109:  lea    -0x44(%ebp),%eax
08170c38 +0x10c:  mov    %eax,(%esp)
08170c3b +0x10f:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08170c40 +0x114:  mov    %esi,%eax
08170c42 +0x116:  mov    %ebx,%edx
08170c44 +0x118:  jmp    08170c46 <+0x11a>
08170c46 +0x11a:  mov    %edx,%ebx
08170c48 +0x11c:  mov    %eax,%esi
08170c4a +0x11e:  lea    -0x3d(%ebp),%eax
08170c4d +0x121:  mov    %eax,(%esp)
08170c50 +0x124:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08170c55 +0x129:  mov    %esi,%eax
08170c57 +0x12b:  mov    %ebx,%edx
08170c59 +0x12d:  mov    %eax,(%esp)
08170c5c +0x130:  call   08ae3750 <_Unwind_Resume>
08170c61 +0x135:  lea    -0x3d(%ebp),%eax
08170c64 +0x138:  mov    %eax,(%esp)
08170c67 +0x13b:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08170c6c +0x140:  test   %bl,%bl
08170c6e +0x142:  je     08170cd9 <+0x1ad>
08170c70 +0x144:  mov    0x10(%ebp),%eax
08170c73 +0x147:  mov    %eax,(%esp)
08170c76 +0x14a:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08170c7b +0x14f:  mov    %eax,%esi
08170c7d +0x151:  mov    0xc(%ebp),%eax
08170c80 +0x154:  mov    %eax,(%esp)
08170c83 +0x157:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08170c88 +0x15c:  mov    %eax,%ebx
08170c8a +0x15e:  movl   $0x0,0xc(%esp)
08170c92 +0x166:  movl   $0x4e,0x8(%esp)
08170c9a +0x16e:  movl   $&_ZZN19RestrictGeolocation7isAllowESsSsE19__PRETTY_FUNCTION__,0x4(%esp)
08170ca2 +0x176:  lea    -0x3c(%ebp),%eax
08170ca5 +0x179:  mov    %eax,(%esp)
08170ca8 +0x17c:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08170cad +0x181:  lea    -0x64(%ebp),%eax
08170cb0 +0x184:  mov    %eax,0x10(%esp)
08170cb4 +0x188:  mov    %esi,0xc(%esp)
08170cb8 +0x18c:  mov    %ebx,0x8(%esp)
08170cbc +0x190:  movl   $"[Taiwan, GeoIP] Success Account:%s, IP:%s, CountryCode:%s",0x4(%esp)
08170cc4 +0x198:  lea    -0x3c(%ebp),%eax
08170cc7 +0x19b:  mov    %eax,(%esp)
08170cca +0x19e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08170ccf +0x1a3:  mov    $0x1,%ebx
08170cd4 +0x1a8:  jmp    08170ec0 <+0x394>
08170cd9 +0x1ad:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08170cde +0x1b2:  mov    %eax,(%esp)
08170ce1 +0x1b5:  call   08106ce0 <_GLOBAL__I__ZN15CmmChannelProxyC2ESsi+0x162>  ; global constructors keyed to CmmChannelProxy::CmmChannelProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x162
08170ce6 +0x1ba:  cmp    $0x3,%eax
08170ce9 +0x1bd:  sete   %al
08170cec +0x1c0:  test   %al,%al
08170cee +0x1c2:  je     08170d59 <+0x22d>
08170cf0 +0x1c4:  mov    0x10(%ebp),%eax
08170cf3 +0x1c7:  mov    %eax,(%esp)
08170cf6 +0x1ca:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08170cfb +0x1cf:  mov    %eax,%esi
08170cfd +0x1d1:  mov    0xc(%ebp),%eax
08170d00 +0x1d4:  mov    %eax,(%esp)
08170d03 +0x1d7:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08170d08 +0x1dc:  mov    %eax,%ebx
08170d0a +0x1de:  movl   $0x0,0xc(%esp)
08170d12 +0x1e6:  movl   $0x55,0x8(%esp)
08170d1a +0x1ee:  movl   $&_ZZN19RestrictGeolocation7isAllowESsSsE19__PRETTY_FUNCTION__,0x4(%esp)
08170d22 +0x1f6:  lea    -0x2c(%ebp),%eax
08170d25 +0x1f9:  mov    %eax,(%esp)
08170d28 +0x1fc:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08170d2d +0x201:  lea    -0x64(%ebp),%eax
08170d30 +0x204:  mov    %eax,0x10(%esp)
08170d34 +0x208:  mov    %esi,0xc(%esp)
08170d38 +0x20c:  mov    %ebx,0x8(%esp)
08170d3c +0x210:  movl   $"[Taiwan, GeoIP] Success Global server group. Account:%s, IP:%s, CountryCode:%s",0x4(%esp)
08170d44 +0x218:  lea    -0x2c(%ebp),%eax
08170d47 +0x21b:  mov    %eax,(%esp)
08170d4a +0x21e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08170d4f +0x223:  mov    $0x1,%ebx
08170d54 +0x228:  jmp    08170ec0 <+0x394>
08170d59 +0x22d:  mov    0x10(%ebp),%eax
08170d5c +0x230:  mov    %eax,(%esp)
08170d5f +0x233:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08170d64 +0x238:  mov    %eax,%esi
08170d66 +0x23a:  mov    0xc(%ebp),%eax
08170d69 +0x23d:  mov    %eax,(%esp)
08170d6c +0x240:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08170d71 +0x245:  mov    %eax,%ebx
08170d73 +0x247:  movl   $0x0,0xc(%esp)
08170d7b +0x24f:  movl   $0x5a,0x8(%esp)
08170d83 +0x257:  movl   $&_ZZN19RestrictGeolocation7isAllowESsSsE19__PRETTY_FUNCTION__,0x4(%esp)
08170d8b +0x25f:  lea    -0x1c(%ebp),%eax
08170d8e +0x262:  mov    %eax,(%esp)
08170d91 +0x265:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08170d96 +0x26a:  lea    -0x64(%ebp),%eax
08170d99 +0x26d:  mov    %eax,0x10(%esp)
08170d9d +0x271:  mov    %esi,0xc(%esp)
08170da1 +0x275:  mov    %ebx,0x8(%esp)
08170da5 +0x279:  movl   $"[Taiwan, GeoIP] Fail Account:%s, IP:%s, CountryCode:%s",0x4(%esp)
08170dad +0x281:  lea    -0x1c(%ebp),%eax
08170db0 +0x284:  mov    %eax,(%esp)
08170db3 +0x287:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08170db8 +0x28c:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08170dbd +0x291:  movl   $0x5c,0x8(%esp)
08170dc5 +0x299:  movl   $"localtaiwan/System/RestrictGeolocation.cpp",0x4(%esp)
08170dcd +0x2a1:  mov    %eax,(%esp)
08170dd0 +0x2a4:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08170dd5 +0x2a9:  movl   $0x1,0x8(%esp)
08170ddd +0x2b1:  mov    %eax,0x4(%esp)
08170de1 +0x2b5:  lea    -0x6c(%ebp),%eax
08170de4 +0x2b8:  mov    %eax,(%esp)
08170de7 +0x2bb:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08170dec +0x2c0:  lea    -0x6c(%ebp),%eax
08170def +0x2c3:  mov    %eax,(%esp)
08170df2 +0x2c6:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08170df7 +0x2cb:  movl   $0x11b,0x4(%esp)
08170dff +0x2d3:  mov    %eax,(%esp)
08170e02 +0x2d6:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08170e07 +0x2db:  lea    -0x6c(%ebp),%eax
08170e0a +0x2de:  mov    %eax,(%esp)
08170e0d +0x2e1:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08170e12 +0x2e6:  movl   $0xffffffff,0x4(%esp)
08170e1a +0x2ee:  mov    %eax,(%esp)
08170e1d +0x2f1:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08170e22 +0x2f6:  lea    -0x6c(%ebp),%eax
08170e25 +0x2f9:  mov    %eax,(%esp)
08170e28 +0x2fc:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08170e2d +0x301:  mov    %eax,(%esp)
08170e30 +0x304:  call   08171532 <_GLOBAL__I__ZN19RestrictGeolocationC2Ev+0x3f7>  ; global constructors keyed to RestrictGeolocation::RestrictGeolocation()+0x3f7
08170e35 +0x309:  mov    %eax,-0xc(%ebp)
08170e38 +0x30c:  mov    -0xc(%ebp),%eax
08170e3b +0x30f:  lea    0x10(%eax),%edx
08170e3e +0x312:  movl   $0x10,0x8(%esp)
08170e46 +0x31a:  lea    -0x64(%ebp),%eax
08170e49 +0x31d:  mov    %eax,0x4(%esp)
08170e4d +0x321:  mov    %edx,(%esp)
08170e50 +0x324:  call   0807d8d0 <_init+0x1c8>
08170e55 +0x329:  mov    0x10(%ebp),%eax
08170e58 +0x32c:  mov    %eax,(%esp)
08170e5b +0x32f:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08170e60 +0x334:  mov    -0xc(%ebp),%edx
08170e63 +0x337:  movl   $0x10,0x8(%esp)
08170e6b +0x33f:  mov    %eax,0x4(%esp)
08170e6f +0x343:  mov    %edx,(%esp)
08170e72 +0x346:  call   0807d8d0 <_init+0x1c8>
08170e77 +0x34b:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08170e7c +0x350:  lea    -0x6c(%ebp),%edx
08170e7f +0x353:  mov    %edx,0x8(%esp)
08170e83 +0x357:  movl   $0x2,0x4(%esp)
08170e8b +0x35f:  mov    %eax,(%esp)
08170e8e +0x362:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08170e93 +0x367:  mov    $0x0,%ebx
08170e98 +0x36c:  lea    -0x6c(%ebp),%eax
08170e9b +0x36f:  mov    %eax,(%esp)
08170e9e +0x372:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08170ea3 +0x377:  jmp    08170ec0 <+0x394>
08170ea5 +0x379:  mov    %edx,%ebx
08170ea7 +0x37b:  mov    %eax,%esi
08170ea9 +0x37d:  lea    -0x6c(%ebp),%eax
08170eac +0x380:  mov    %eax,(%esp)
08170eaf +0x383:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08170eb4 +0x388:  mov    %esi,%eax
08170eb6 +0x38a:  mov    %ebx,%edx
08170eb8 +0x38c:  mov    %eax,(%esp)
08170ebb +0x38f:  call   08ae3750 <_Unwind_Resume>
08170ec0 +0x394:  mov    %ebx,%eax
08170ec2 +0x396:  add    $0x90,%esp
08170ec8 +0x39c:  pop    %ebx
08170ec9 +0x39d:  pop    %esi
08170eca +0x39e:  pop    %ebp
08170ecb +0x39f:  ret
```

## 反编译 C

```c
// RestrictGeolocation::isAllow @ 0x8170b2c

/* RestrictGeolocation::isAllow(std::string, std::string) */

undefined4 __thiscall
RestrictGeolocation::isAllow(RestrictGeolocation *this,string param_1,string param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  CEnvironment *this_00;
  Stream *pSVar5;
  CStreamGuard *pCVar6;
  undefined4 uVar7;
  CStreamGuard local_70 [8];
  char local_68 [16];
  cMyTrace local_58 [16];
  string local_48 [7];
  allocator<char> local_41;
  cMyTrace local_40 [16];
  cMyTrace local_30 [16];
  cMyTrace local_20 [16];
  SIG_SAVE_GEO_REJECT *local_10;
  
  if (*(int *)this == 0) {
    cMyTrace::cMyTrace(local_58,"bool RestrictGeolocation::isAllow(std::string, std::string)",0x44,5
                      );
    cMyTrace::operator()(local_58,"[Taiwan, GeoIP] Geo instance is null.");
    uVar7 = 1;
  }
  else {
    local_68[0] = '\0';
    local_68[1] = '\0';
    local_68[2] = '\0';
    local_68[3] = '\0';
    local_68[4] = '\0';
    local_68[5] = '\0';
    local_68[6] = '\0';
    local_68[7] = '\0';
    local_68[8] = '\0';
    local_68[9] = '\0';
    local_68[10] = '\0';
    local_68[0xb] = '\0';
    local_68[0xc] = '\0';
    local_68[0xd] = '\0';
    local_68[0xe] = '\0';
    local_68[0xf] = '\0';
    uVar7 = std::string::c_str((string *)param_2._M_dataplus._M_p);
    iVar2 = GeoIP_country_code_by_addr(*(undefined4 *)this,uVar7);
    if (iVar2 != 0) {
      uVar7 = std::string::c_str((string *)param_2._M_dataplus._M_p);
      pcVar3 = (char *)GeoIP_country_code_by_addr(*(undefined4 *)this,uVar7);
      strcpy(local_68,pcVar3);
    }
    std::allocator<char>::allocator();
                    /* try { // try from 08170c0b to 08170c0f has its CatchHandler @ 08170c46 */
    std::string::string(local_48,local_68,(allocator *)&local_41);
                    /* try { // try from 08170c1d to 08170c21 has its CatchHandler @ 08170c31 */
    cVar1 = isAllowCountryCode((string)this);
                    /* try { // try from 08170c2a to 08170c2e has its CatchHandler @ 08170c46 */
    std::string::~string(local_48);
    std::allocator<char>::~allocator(&local_41);
    if (cVar1 == '\0') {
      this_00 = (CEnvironment *)G_CEnvironment();
      iVar2 = CEnvironment::get_server_group(this_00);
      if (iVar2 == 3) {
        uVar7 = std::string::c_str((string *)param_2._M_dataplus._M_p);
        uVar4 = std::string::c_str((string *)param_1._M_dataplus._M_p);
        cMyTrace::cMyTrace(local_30,"bool RestrictGeolocation::isAllow(std::string, std::string)",
                           0x55,0);
        cMyTrace::operator()
                  (local_30,
                   "[Taiwan, GeoIP] Success Global server group. Account:%s, IP:%s, CountryCode:%s",
                   uVar4,uVar7,local_68);
        uVar7 = 1;
      }
      else {
        uVar7 = std::string::c_str((string *)param_2._M_dataplus._M_p);
        uVar4 = std::string::c_str((string *)param_1._M_dataplus._M_p);
        cMyTrace::cMyTrace(local_20,"bool RestrictGeolocation::isAllow(std::string, std::string)",
                           0x5a,0);
        cMyTrace::operator()
                  (local_20,"[Taiwan, GeoIP] Fail Account:%s, IP:%s, CountryCode:%s",uVar4,uVar7,
                   local_68);
        pSVar5 = (Stream *)
                 StreamPool::Acquire(GlobalData::s_stream_pool,
                                     "localtaiwan/System/RestrictGeolocation.cpp",0x5c);
        CStreamGuard::CStreamGuard(local_70,pSVar5,true);
        pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_70);
                    /* try { // try from 08170e02 to 08170e92 has its CatchHandler @ 08170ea5 */
        CStreamGuard::operator<<(pCVar6,0x11b);
        pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_70);
        CStreamGuard::operator<<(pCVar6,-1);
        pCVar6 = (CStreamGuard *)CStreamGuard::operator->(local_70);
        local_10 = CStreamGuard::GetInBuffer<SIG_SAVE_GEO_REJECT>(pCVar6);
        strncpy((char *)(local_10 + 0x10),local_68,0x10);
        pcVar3 = (char *)std::string::c_str((string *)param_2._M_dataplus._M_p);
        strncpy((char *)local_10,pcVar3,0x10);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_70);
        uVar7 = 0;
        CStreamGuard::~CStreamGuard(local_70);
      }
    }
    else {
      uVar7 = std::string::c_str((string *)param_2._M_dataplus._M_p);
      uVar4 = std::string::c_str((string *)param_1._M_dataplus._M_p);
      cMyTrace::cMyTrace(local_40,"bool RestrictGeolocation::isAllow(std::string, std::string)",0x4e
                         ,0);
      cMyTrace::operator()
                (local_40,"[Taiwan, GeoIP] Success Account:%s, IP:%s, CountryCode:%s",uVar4,uVar7,
                 local_68);
      uVar7 = 1;
    }
  }
  return uVar7;
}
```
