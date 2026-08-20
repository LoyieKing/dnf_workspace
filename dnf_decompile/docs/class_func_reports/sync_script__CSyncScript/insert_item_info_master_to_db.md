# insert_item_info_master_to_db

`_ZN11sync_script11CSyncScript29insert_item_info_master_to_dbEv`

`sync_script::CSyncScript::insert_item_info_master_to_db()`

| 类 | 地址 |
|---|---|
| `sync_script::CSyncScript` | `0x0862571a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0862571a  _ZN11sync_script11CSyncScript29insert_item_info_master_to_dbEv
#           sync_script::CSyncScript::insert_item_info_master_to_db()
# range [0x0862571a, 0x08625c53]
0862571a +0x000:  push   %ebp
0862571b +0x001:  mov    %esp,%ebp
0862571d +0x003:  push   %edi
0862571e +0x004:  push   %esi
0862571f +0x005:  push   %ebx
08625720 +0x006:  sub    $0x11c,%esp
08625726 +0x00c:  mov    0x8(%ebp),%eax
08625729 +0x00f:  movzbl (%eax),%eax
0862572c +0x012:  xor    $0x1,%eax
0862572f +0x015:  test   %al,%al
08625731 +0x017:  je     0862573d <+0x23>
08625733 +0x019:  mov    $0x1,%eax
08625738 +0x01e:  jmp    08625c48 <+0x52e>
0862573d +0x023:  lea    -0xa0(%ebp),%ebx
08625743 +0x029:  mov    $0x0,%eax
08625748 +0x02e:  mov    $0x19,%edx
0862574d +0x033:  mov    %ebx,%edi
0862574f +0x035:  mov    %edx,%ecx
08625751 +0x037:  rep stos %eax,%es:(%edi)
08625753 +0x039:  lea    -0x104(%ebp),%ebx
08625759 +0x03f:  mov    $0x0,%eax
0862575e +0x044:  mov    $0x19,%edx
08625763 +0x049:  mov    %ebx,%edi
08625765 +0x04b:  mov    %edx,%ecx
08625767 +0x04d:  rep stos %eax,%es:(%edi)
08625769 +0x04f:  mov    0x8(%ebp),%eax
0862576c +0x052:  lea    0x34(%eax),%edx
0862576f +0x055:  lea    -0x30(%ebp),%eax
08625772 +0x058:  mov    %edx,0x4(%esp)
08625776 +0x05c:  mov    %eax,(%esp)
08625779 +0x05f:  call   086290fa <_GLOBAL__I__Z22GetSocketTypeCharactert+0x2758>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x2758
0862577e +0x064:  sub    $0x4,%esp
08625781 +0x067:  jmp    0862585d <+0x143>
08625786 +0x06c:  lea    -0x30(%ebp),%eax
08625789 +0x06f:  mov    %eax,(%esp)
0862578c +0x072:  call   08629178 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x27d6>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x27d6
08625791 +0x077:  add    $0x10,%eax
08625794 +0x07a:  mov    %eax,(%esp)
08625797 +0x07d:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0862579c +0x082:  mov    %eax,%ebx
0862579e +0x084:  lea    -0x30(%ebp),%eax
086257a1 +0x087:  mov    %eax,(%esp)
086257a4 +0x08a:  call   08629178 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x27d6>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x27d6
086257a9 +0x08f:  lea    0x9(%eax),%edx
086257ac +0x092:  mov    0x8(%ebp),%eax
086257af +0x095:  add    $0x64,%eax
086257b2 +0x098:  mov    %edx,0x4(%esp)
086257b6 +0x09c:  mov    %eax,(%esp)
086257b9 +0x09f:  call   08628fae <_GLOBAL__I__Z22GetSocketTypeCharactert+0x260c>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x260c
086257be +0x0a4:  mov    %eax,(%esp)
086257c1 +0x0a7:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
086257c6 +0x0ac:  mov    %ebx,0xc(%esp)
086257ca +0x0b0:  mov    %eax,0x8(%esp)
086257ce +0x0b4:  movl   $"<%s>%s",0x4(%esp)
086257d6 +0x0bc:  lea    -0x104(%ebp),%eax
086257dc +0x0c2:  mov    %eax,(%esp)
086257df +0x0c5:  call   0807e440 <_init+0xd38>
086257e4 +0x0ca:  lea    -0x30(%ebp),%eax
086257e7 +0x0cd:  mov    %eax,(%esp)
086257ea +0x0d0:  call   08629178 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x27d6>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x27d6
086257ef +0x0d5:  add    $0x10,%eax
086257f2 +0x0d8:  mov    %eax,(%esp)
086257f5 +0x0db:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
086257fa +0x0e0:  mov    %eax,%ebx
086257fc +0x0e2:  lea    -0x30(%ebp),%eax
086257ff +0x0e5:  mov    %eax,(%esp)
08625802 +0x0e8:  call   08629178 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x27d6>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x27d6
08625807 +0x0ed:  movzwl 0xc(%eax),%eax
0862580b +0x0f1:  movzwl %ax,%esi
0862580e +0x0f4:  lea    -0x30(%ebp),%eax
08625811 +0x0f7:  mov    %eax,(%esp)
08625814 +0x0fa:  call   08629178 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x27d6>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x27d6
08625819 +0x0ff:  movzbl 0x9(%eax),%eax
0862581d +0x103:  movzbl %al,%eax
08625820 +0x106:  lea    -0x104(%ebp),%edx
08625826 +0x10c:  mov    %edx,0x10(%esp)
0862582a +0x110:  mov    %ebx,0xc(%esp)
0862582e +0x114:  mov    %esi,0x8(%esp)
08625832 +0x118:  mov    %eax,0x4(%esp)
08625836 +0x11c:  mov    0x8(%ebp),%eax
08625839 +0x11f:  mov    %eax,(%esp)
0862583c +0x122:  call   08625c54 <_ZN11sync_script11CSyncScript27insert_one_item_info_masterEhtPKcS2_>  ; sync_script::CSyncScript::insert_one_item_info_master(unsigned char, unsigned short, char const*, char const*)
08625841 +0x127:  xor    $0x1,%eax
08625844 +0x12a:  test   %al,%al
08625846 +0x12c:  je     08625852 <+0x138>
08625848 +0x12e:  mov    $0x0,%eax
0862584d +0x133:  jmp    08625c48 <+0x52e>
08625852 +0x138:  lea    -0x30(%ebp),%eax
08625855 +0x13b:  mov    %eax,(%esp)
08625858 +0x13e:  call   0862915a <_GLOBAL__I__Z22GetSocketTypeCharactert+0x27b8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x27b8
0862585d +0x143:  mov    0x8(%ebp),%eax
08625860 +0x146:  lea    0x34(%eax),%edx
08625863 +0x149:  lea    -0x2c(%ebp),%eax
08625866 +0x14c:  mov    %edx,0x4(%esp)
0862586a +0x150:  mov    %eax,(%esp)
0862586d +0x153:  call   08629120 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x277e>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x277e
08625872 +0x158:  sub    $0x4,%esp
08625875 +0x15b:  lea    -0x2c(%ebp),%eax
08625878 +0x15e:  mov    %eax,0x4(%esp)
0862587c +0x162:  lea    -0x30(%ebp),%eax
0862587f +0x165:  mov    %eax,(%esp)
08625882 +0x168:  call   08629146 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x27a4>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x27a4
08625887 +0x16d:  test   %al,%al
08625889 +0x16f:  jne    08625786 <+0x6c>
0862588f +0x175:  mov    0x8(%ebp),%eax
08625892 +0x178:  lea    0x4c(%eax),%edx
08625895 +0x17b:  lea    -0x34(%ebp),%eax
08625898 +0x17e:  mov    %edx,0x4(%esp)
0862589c +0x182:  mov    %eax,(%esp)
0862589f +0x185:  call   08629186 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x27e4>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x27e4
086258a4 +0x18a:  sub    $0x4,%esp
086258a7 +0x18d:  jmp    086259bd <+0x2a3>
086258ac +0x192:  lea    -0x34(%ebp),%eax
086258af +0x195:  mov    %eax,(%esp)
086258b2 +0x198:  call   08629204 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x2862>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x2862
086258b7 +0x19d:  add    $0x10,%eax
086258ba +0x1a0:  mov    %eax,(%esp)
086258bd +0x1a3:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
086258c2 +0x1a8:  mov    %eax,%ebx
086258c4 +0x1aa:  lea    -0x34(%ebp),%eax
086258c7 +0x1ad:  mov    %eax,(%esp)
086258ca +0x1b0:  call   08629204 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x2862>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x2862
086258cf +0x1b5:  lea    0xa(%eax),%edx
086258d2 +0x1b8:  mov    0x8(%ebp),%eax
086258d5 +0x1bb:  add    $0x7c,%eax
086258d8 +0x1be:  mov    %edx,0x4(%esp)
086258dc +0x1c2:  mov    %eax,(%esp)
086258df +0x1c5:  call   08628fae <_GLOBAL__I__Z22GetSocketTypeCharactert+0x260c>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x260c
086258e4 +0x1ca:  mov    %eax,(%esp)
086258e7 +0x1cd:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
086258ec +0x1d2:  mov    %ebx,0xc(%esp)
086258f0 +0x1d6:  mov    %eax,0x8(%esp)
086258f4 +0x1da:  movl   $"%s%s",0x4(%esp)
086258fc +0x1e2:  lea    -0xa0(%ebp),%eax
08625902 +0x1e8:  mov    %eax,(%esp)
08625905 +0x1eb:  call   0807e440 <_init+0xd38>
0862590a +0x1f0:  lea    -0x34(%ebp),%eax
0862590d +0x1f3:  mov    %eax,(%esp)
08625910 +0x1f6:  call   08629204 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x2862>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x2862
08625915 +0x1fb:  lea    0x9(%eax),%edx
08625918 +0x1fe:  mov    0x8(%ebp),%eax
0862591b +0x201:  add    $0x64,%eax
0862591e +0x204:  mov    %edx,0x4(%esp)
08625922 +0x208:  mov    %eax,(%esp)
08625925 +0x20b:  call   08628fae <_GLOBAL__I__Z22GetSocketTypeCharactert+0x260c>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x260c
0862592a +0x210:  mov    %eax,(%esp)
0862592d +0x213:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08625932 +0x218:  lea    -0xa0(%ebp),%edx
08625938 +0x21e:  mov    %edx,0xc(%esp)
0862593c +0x222:  mov    %eax,0x8(%esp)
08625940 +0x226:  movl   $"<%s>%s",0x4(%esp)
08625948 +0x22e:  lea    -0x104(%ebp),%eax
0862594e +0x234:  mov    %eax,(%esp)
08625951 +0x237:  call   0807e440 <_init+0xd38>
08625956 +0x23c:  lea    -0x34(%ebp),%eax
08625959 +0x23f:  mov    %eax,(%esp)
0862595c +0x242:  call   08629204 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x2862>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x2862
08625961 +0x247:  movzwl 0xc(%eax),%eax
08625965 +0x24b:  movzwl %ax,%ebx
08625968 +0x24e:  lea    -0x34(%ebp),%eax
0862596b +0x251:  mov    %eax,(%esp)
0862596e +0x254:  call   08629204 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x2862>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x2862
08625973 +0x259:  movzbl 0x9(%eax),%eax
08625977 +0x25d:  movzbl %al,%eax
0862597a +0x260:  lea    -0x104(%ebp),%edx
08625980 +0x266:  mov    %edx,0x10(%esp)
08625984 +0x26a:  lea    -0xa0(%ebp),%edx
0862598a +0x270:  mov    %edx,0xc(%esp)
0862598e +0x274:  mov    %ebx,0x8(%esp)
08625992 +0x278:  mov    %eax,0x4(%esp)
08625996 +0x27c:  mov    0x8(%ebp),%eax
08625999 +0x27f:  mov    %eax,(%esp)
0862599c +0x282:  call   08625c54 <_ZN11sync_script11CSyncScript27insert_one_item_info_masterEhtPKcS2_>  ; sync_script::CSyncScript::insert_one_item_info_master(unsigned char, unsigned short, char const*, char const*)
086259a1 +0x287:  xor    $0x1,%eax
086259a4 +0x28a:  test   %al,%al
086259a6 +0x28c:  je     086259b2 <+0x298>
086259a8 +0x28e:  mov    $0x0,%eax
086259ad +0x293:  jmp    08625c48 <+0x52e>
086259b2 +0x298:  lea    -0x34(%ebp),%eax
086259b5 +0x29b:  mov    %eax,(%esp)
086259b8 +0x29e:  call   086291e6 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x2844>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x2844
086259bd +0x2a3:  mov    0x8(%ebp),%eax
086259c0 +0x2a6:  lea    0x4c(%eax),%edx
086259c3 +0x2a9:  lea    -0x28(%ebp),%eax
086259c6 +0x2ac:  mov    %edx,0x4(%esp)
086259ca +0x2b0:  mov    %eax,(%esp)
086259cd +0x2b3:  call   086291ac <_GLOBAL__I__Z22GetSocketTypeCharactert+0x280a>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x280a
086259d2 +0x2b8:  sub    $0x4,%esp
086259d5 +0x2bb:  lea    -0x28(%ebp),%eax
086259d8 +0x2be:  mov    %eax,0x4(%esp)
086259dc +0x2c2:  lea    -0x34(%ebp),%eax
086259df +0x2c5:  mov    %eax,(%esp)
086259e2 +0x2c8:  call   086291d2 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x2830>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x2830
086259e7 +0x2cd:  test   %al,%al
086259e9 +0x2cf:  jne    086258ac <+0x192>
086259ef +0x2d5:  movb   $0x0,-0x19(%ebp)
086259f3 +0x2d9:  mov    0x8(%ebp),%eax
086259f6 +0x2dc:  lea    0x1c(%eax),%edx
086259f9 +0x2df:  lea    -0x38(%ebp),%eax
086259fc +0x2e2:  mov    %edx,0x4(%esp)
08625a00 +0x2e6:  mov    %eax,(%esp)
08625a03 +0x2e9:  call   08629212 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x2870>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x2870
08625a08 +0x2ee:  sub    $0x4,%esp
08625a0b +0x2f1:  jmp    08625c11 <+0x4f7>
08625a10 +0x2f6:  lea    -0x38(%ebp),%eax
08625a13 +0x2f9:  mov    %eax,(%esp)
08625a16 +0x2fc:  call   08629290 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x28ee>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x28ee
08625a1b +0x301:  movzbl 0x4(%eax),%eax
08625a1f +0x305:  xor    $0x1,%eax
08625a22 +0x308:  test   %al,%al
08625a24 +0x30a:  jne    08625c05 <+0x4eb>
08625a2a +0x310:  movb   $0x0,-0x19(%ebp)
08625a2e +0x314:  mov    0x8(%ebp),%eax
08625a31 +0x317:  lea    0x10(%eax),%edx
08625a34 +0x31a:  lea    -0x3c(%ebp),%eax
08625a37 +0x31d:  mov    %edx,0x4(%esp)
08625a3b +0x321:  mov    %eax,(%esp)
08625a3e +0x324:  call   0807f40e <_GLOBAL__I__Z13base64_encodePKhjRSs+0x4de>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x4de
08625a43 +0x329:  sub    $0x4,%esp
08625a46 +0x32c:  jmp    08625a7f <+0x365>
08625a48 +0x32e:  lea    -0x38(%ebp),%eax
08625a4b +0x331:  mov    %eax,(%esp)
08625a4e +0x334:  call   08629290 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x28ee>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x28ee
08625a53 +0x339:  movzbl 0x5(%eax),%ebx
08625a57 +0x33d:  lea    -0x3c(%ebp),%eax
08625a5a +0x340:  mov    %eax,(%esp)
08625a5d +0x343:  call   0807f35e <_GLOBAL__I__Z13base64_encodePKhjRSs+0x42e>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x42e
08625a62 +0x348:  movzbl (%eax),%eax
08625a65 +0x34b:  cmp    %al,%bl
08625a67 +0x34d:  sete   %al
08625a6a +0x350:  test   %al,%al
08625a6c +0x352:  je     08625a74 <+0x35a>
08625a6e +0x354:  movb   $0x1,-0x19(%ebp)
08625a72 +0x358:  jmp    08625aad <+0x393>
08625a74 +0x35a:  lea    -0x3c(%ebp),%eax
08625a77 +0x35d:  mov    %eax,(%esp)
08625a7a +0x360:  call   083c8c4e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x62c1a>  ; global constructors keyed to CServerEvent::m_nExpRate+0x62c1a
08625a7f +0x365:  mov    0x8(%ebp),%eax
08625a82 +0x368:  lea    0x10(%eax),%edx
08625a85 +0x36b:  lea    -0x20(%ebp),%eax
08625a88 +0x36e:  mov    %edx,0x4(%esp)
08625a8c +0x372:  mov    %eax,(%esp)
08625a8f +0x375:  call   0807eff2 <_GLOBAL__I__Z13base64_encodePKhjRSs+0xc2>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0xc2
08625a94 +0x37a:  sub    $0x4,%esp
08625a97 +0x37d:  lea    -0x20(%ebp),%eax
08625a9a +0x380:  mov    %eax,0x4(%esp)
08625a9e +0x384:  lea    -0x3c(%ebp),%eax
08625aa1 +0x387:  mov    %eax,(%esp)
08625aa4 +0x38a:  call   0862929d <_GLOBAL__I__Z22GetSocketTypeCharactert+0x28fb>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x28fb
08625aa9 +0x38f:  test   %al,%al
08625aab +0x391:  jne    08625a48 <+0x32e>
08625aad +0x393:  lea    -0x38(%ebp),%eax
08625ab0 +0x396:  mov    %eax,(%esp)
08625ab3 +0x399:  call   08629290 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x28ee>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x28ee
08625ab8 +0x39e:  add    $0xc,%eax
08625abb +0x3a1:  mov    %eax,(%esp)
08625abe +0x3a4:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08625ac3 +0x3a9:  mov    %eax,%ebx
08625ac5 +0x3ab:  lea    -0x38(%ebp),%eax
08625ac8 +0x3ae:  mov    %eax,(%esp)
08625acb +0x3b1:  call   08629290 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x28ee>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x28ee
08625ad0 +0x3b6:  lea    0x5(%eax),%edx
08625ad3 +0x3b9:  mov    0x8(%ebp),%eax
08625ad6 +0x3bc:  add    $0x64,%eax
08625ad9 +0x3bf:  mov    %edx,0x4(%esp)
08625add +0x3c3:  mov    %eax,(%esp)
08625ae0 +0x3c6:  call   08628fae <_GLOBAL__I__Z22GetSocketTypeCharactert+0x260c>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x260c
08625ae5 +0x3cb:  mov    %eax,(%esp)
08625ae8 +0x3ce:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08625aed +0x3d3:  mov    %ebx,0xc(%esp)
08625af1 +0x3d7:  mov    %eax,0x8(%esp)
08625af5 +0x3db:  movl   $"<%s>%s",0x4(%esp)
08625afd +0x3e3:  lea    -0x104(%ebp),%eax
08625b03 +0x3e9:  mov    %eax,(%esp)
08625b06 +0x3ec:  call   0807e440 <_init+0xd38>
08625b0b +0x3f1:  movzbl -0x19(%ebp),%eax
08625b0f +0x3f5:  xor    $0x1,%eax
08625b12 +0x3f8:  test   %al,%al
08625b14 +0x3fa:  je     08625b88 <+0x46e>
08625b16 +0x3fc:  lea    -0x38(%ebp),%eax
08625b19 +0x3ff:  mov    %eax,(%esp)
08625b1c +0x402:  call   08629290 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x28ee>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x28ee
08625b21 +0x407:  add    $0xc,%eax
08625b24 +0x40a:  mov    %eax,(%esp)
08625b27 +0x40d:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08625b2c +0x412:  mov    %eax,%ebx
08625b2e +0x414:  lea    -0x38(%ebp),%eax
08625b31 +0x417:  mov    %eax,(%esp)
08625b34 +0x41a:  call   08629290 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x28ee>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x28ee
08625b39 +0x41f:  movzwl 0x8(%eax),%eax
08625b3d +0x423:  movzwl %ax,%esi
08625b40 +0x426:  lea    -0x38(%ebp),%eax
08625b43 +0x429:  mov    %eax,(%esp)
08625b46 +0x42c:  call   08629290 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x28ee>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x28ee
08625b4b +0x431:  movzbl 0x5(%eax),%eax
08625b4f +0x435:  movzbl %al,%eax
08625b52 +0x438:  lea    -0x104(%ebp),%edx
08625b58 +0x43e:  mov    %edx,0x10(%esp)
08625b5c +0x442:  mov    %ebx,0xc(%esp)
08625b60 +0x446:  mov    %esi,0x8(%esp)
08625b64 +0x44a:  mov    %eax,0x4(%esp)
08625b68 +0x44e:  mov    0x8(%ebp),%eax
08625b6b +0x451:  mov    %eax,(%esp)
08625b6e +0x454:  call   08625c54 <_ZN11sync_script11CSyncScript27insert_one_item_info_masterEhtPKcS2_>  ; sync_script::CSyncScript::insert_one_item_info_master(unsigned char, unsigned short, char const*, char const*)
08625b73 +0x459:  xor    $0x1,%eax
08625b76 +0x45c:  test   %al,%al
08625b78 +0x45e:  je     08625c06 <+0x4ec>
08625b7e +0x464:  mov    $0x0,%eax
08625b83 +0x469:  jmp    08625c48 <+0x52e>
08625b88 +0x46e:  lea    -0x38(%ebp),%eax
08625b8b +0x471:  mov    %eax,(%esp)
08625b8e +0x474:  call   08629290 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x28ee>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x28ee
08625b93 +0x479:  lea    0x5(%eax),%edx
08625b96 +0x47c:  mov    0x8(%ebp),%eax
08625b99 +0x47f:  add    $0x64,%eax
08625b9c +0x482:  mov    %edx,0x4(%esp)
08625ba0 +0x486:  mov    %eax,(%esp)
08625ba3 +0x489:  call   08628fae <_GLOBAL__I__Z22GetSocketTypeCharactert+0x260c>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x260c
08625ba8 +0x48e:  mov    %eax,(%esp)
08625bab +0x491:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08625bb0 +0x496:  mov    %eax,%ebx
08625bb2 +0x498:  lea    -0x38(%ebp),%eax
08625bb5 +0x49b:  mov    %eax,(%esp)
08625bb8 +0x49e:  call   08629290 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x28ee>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x28ee
08625bbd +0x4a3:  movzwl 0x8(%eax),%eax
08625bc1 +0x4a7:  movzwl %ax,%esi
08625bc4 +0x4aa:  lea    -0x38(%ebp),%eax
08625bc7 +0x4ad:  mov    %eax,(%esp)
08625bca +0x4b0:  call   08629290 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x28ee>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x28ee
08625bcf +0x4b5:  movzbl 0x5(%eax),%eax
08625bd3 +0x4b9:  movzbl %al,%eax
08625bd6 +0x4bc:  lea    -0x104(%ebp),%edx
08625bdc +0x4c2:  mov    %edx,0x10(%esp)
08625be0 +0x4c6:  mov    %ebx,0xc(%esp)
08625be4 +0x4ca:  mov    %esi,0x8(%esp)
08625be8 +0x4ce:  mov    %eax,0x4(%esp)
08625bec +0x4d2:  mov    0x8(%ebp),%eax
08625bef +0x4d5:  mov    %eax,(%esp)
08625bf2 +0x4d8:  call   08625c54 <_ZN11sync_script11CSyncScript27insert_one_item_info_masterEhtPKcS2_>  ; sync_script::CSyncScript::insert_one_item_info_master(unsigned char, unsigned short, char const*, char const*)
08625bf7 +0x4dd:  xor    $0x1,%eax
08625bfa +0x4e0:  test   %al,%al
08625bfc +0x4e2:  je     08625c06 <+0x4ec>
08625bfe +0x4e4:  mov    $0x0,%eax
08625c03 +0x4e9:  jmp    08625c48 <+0x52e>
08625c05 +0x4eb:  nop
08625c06 +0x4ec:  lea    -0x38(%ebp),%eax
08625c09 +0x4ef:  mov    %eax,(%esp)
08625c0c +0x4f2:  call   08629272 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x28d0>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x28d0
08625c11 +0x4f7:  mov    0x8(%ebp),%eax
08625c14 +0x4fa:  lea    0x1c(%eax),%edx
08625c17 +0x4fd:  lea    -0x24(%ebp),%eax
08625c1a +0x500:  mov    %edx,0x4(%esp)
08625c1e +0x504:  mov    %eax,(%esp)
08625c21 +0x507:  call   08629238 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x2896>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x2896
08625c26 +0x50c:  sub    $0x4,%esp
08625c29 +0x50f:  lea    -0x24(%ebp),%eax
08625c2c +0x512:  mov    %eax,0x4(%esp)
08625c30 +0x516:  lea    -0x38(%ebp),%eax
08625c33 +0x519:  mov    %eax,(%esp)
08625c36 +0x51c:  call   0862925e <_GLOBAL__I__Z22GetSocketTypeCharactert+0x28bc>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x28bc
08625c3b +0x521:  test   %al,%al
08625c3d +0x523:  jne    08625a10 <+0x2f6>
08625c43 +0x529:  mov    $0x1,%eax
08625c48 +0x52e:  lea    -0xc(%ebp),%esp
08625c4b +0x531:  add    $0x0,%esp
08625c4e +0x534:  pop    %ebx
08625c4f +0x535:  pop    %esi
08625c50 +0x536:  pop    %edi
08625c51 +0x537:  pop    %ebp
08625c52 +0x538:  ret
08625c53 +0x539:  nop
```

## 反编译 C

```c
// sync_script::CSyncScript::insert_item_info_master_to_db @ 0x862571a

/* sync_script::CSyncScript::insert_item_info_master_to_db() */

undefined4 __thiscall sync_script::CSyncScript::insert_item_info_master_to_db(CSyncScript *this)

{
  ushort uVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  string *psVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  char local_108 [100];
  char local_a4 [100];
  __normal_iterator<unsigned_char*,std::vector<unsigned_char,std::allocator<unsigned_char>>>
  local_40 [4];
  map<std::string,sync_script::CSyncScript::SITEMTYPE,std::less<std::string>,std::allocator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>>
  local_3c [4];
  map<sync_script::CSyncScript::SARMORTYPE,sync_script::CSyncScript::SITEMTYPE,std::less<sync_script::CSyncScript::SARMORTYPE>,std::allocator<std::pair<sync_script::CSyncScript::SARMORTYPE_const,sync_script::CSyncScript::SITEMTYPE>>>
  local_38 [4];
  map<sync_script::CSyncScript::SWEAPONTYPE,sync_script::CSyncScript::SITEMTYPE,std::less<sync_script::CSyncScript::SWEAPONTYPE>,std::allocator<std::pair<sync_script::CSyncScript::SWEAPONTYPE_const,sync_script::CSyncScript::SITEMTYPE>>>
  local_34 [4];
  map<sync_script::CSyncScript::SWEAPONTYPE,sync_script::CSyncScript::SITEMTYPE,std::less<sync_script::CSyncScript::SWEAPONTYPE>,std::allocator<std::pair<sync_script::CSyncScript::SWEAPONTYPE_const,sync_script::CSyncScript::SITEMTYPE>>>
  local_30 [4];
  map<sync_script::CSyncScript::SARMORTYPE,sync_script::CSyncScript::SITEMTYPE,std::less<sync_script::CSyncScript::SARMORTYPE>,std::allocator<std::pair<sync_script::CSyncScript::SARMORTYPE_const,sync_script::CSyncScript::SITEMTYPE>>>
  local_2c [4];
  map<std::string,sync_script::CSyncScript::SITEMTYPE,std::less<std::string>,std::allocator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>>
  local_28 [4];
  __normal_iterator local_24 [7];
  char local_1d;
  
  if (*this == (CSyncScript)0x1) {
    pcVar7 = local_a4;
    for (iVar8 = 0x19; iVar8 != 0; iVar8 = iVar8 + -1) {
      pcVar7[0] = '\0';
      pcVar7[1] = '\0';
      pcVar7[2] = '\0';
      pcVar7[3] = '\0';
      pcVar7 = pcVar7 + 4;
    }
    pcVar7 = local_108;
    for (iVar8 = 0x19; iVar8 != 0; iVar8 = iVar8 + -1) {
      pcVar7[0] = '\0';
      pcVar7[1] = '\0';
      pcVar7[2] = '\0';
      pcVar7[3] = '\0';
      pcVar7 = pcVar7 + 4;
    }
    std::
    map<sync_script::CSyncScript::SWEAPONTYPE,sync_script::CSyncScript::SITEMTYPE,std::less<sync_script::CSyncScript::SWEAPONTYPE>,std::allocator<std::pair<sync_script::CSyncScript::SWEAPONTYPE_const,sync_script::CSyncScript::SITEMTYPE>>>
    ::begin(local_34);
    while( true ) {
      std::
      map<sync_script::CSyncScript::SWEAPONTYPE,sync_script::CSyncScript::SITEMTYPE,std::less<sync_script::CSyncScript::SWEAPONTYPE>,std::allocator<std::pair<sync_script::CSyncScript::SWEAPONTYPE_const,sync_script::CSyncScript::SITEMTYPE>>>
      ::end(local_30);
      cVar2 = std::
              _Rb_tree_iterator<std::pair<sync_script::CSyncScript::SWEAPONTYPE_const,sync_script::CSyncScript::SITEMTYPE>>
              ::operator!=((_Rb_tree_iterator<std::pair<sync_script::CSyncScript::SWEAPONTYPE_const,sync_script::CSyncScript::SITEMTYPE>>
                            *)local_34,(_Rb_tree_iterator *)local_30);
      if (cVar2 == '\0') break;
      iVar8 = std::
              _Rb_tree_iterator<std::pair<sync_script::CSyncScript::SWEAPONTYPE_const,sync_script::CSyncScript::SITEMTYPE>>
              ::operator->((_Rb_tree_iterator<std::pair<sync_script::CSyncScript::SWEAPONTYPE_const,sync_script::CSyncScript::SITEMTYPE>>
                            *)local_34);
      uVar4 = std::string::c_str((string *)(iVar8 + 0x10));
      iVar8 = std::
              _Rb_tree_iterator<std::pair<sync_script::CSyncScript::SWEAPONTYPE_const,sync_script::CSyncScript::SITEMTYPE>>
              ::operator->((_Rb_tree_iterator<std::pair<sync_script::CSyncScript::SWEAPONTYPE_const,sync_script::CSyncScript::SITEMTYPE>>
                            *)local_34);
      psVar5 = (string *)
               std::
               map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
               ::operator[]((map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
                             *)(this + 100),(uchar *)(iVar8 + 9));
      uVar6 = std::string::c_str(psVar5);
      sprintf(local_108,"<%s>%s",uVar6,uVar4);
      iVar8 = std::
              _Rb_tree_iterator<std::pair<sync_script::CSyncScript::SWEAPONTYPE_const,sync_script::CSyncScript::SITEMTYPE>>
              ::operator->((_Rb_tree_iterator<std::pair<sync_script::CSyncScript::SWEAPONTYPE_const,sync_script::CSyncScript::SITEMTYPE>>
                            *)local_34);
      pcVar7 = (char *)std::string::c_str((string *)(iVar8 + 0x10));
      iVar8 = std::
              _Rb_tree_iterator<std::pair<sync_script::CSyncScript::SWEAPONTYPE_const,sync_script::CSyncScript::SITEMTYPE>>
              ::operator->((_Rb_tree_iterator<std::pair<sync_script::CSyncScript::SWEAPONTYPE_const,sync_script::CSyncScript::SITEMTYPE>>
                            *)local_34);
      uVar1 = *(ushort *)(iVar8 + 0xc);
      iVar8 = std::
              _Rb_tree_iterator<std::pair<sync_script::CSyncScript::SWEAPONTYPE_const,sync_script::CSyncScript::SITEMTYPE>>
              ::operator->((_Rb_tree_iterator<std::pair<sync_script::CSyncScript::SWEAPONTYPE_const,sync_script::CSyncScript::SITEMTYPE>>
                            *)local_34);
      cVar2 = insert_one_item_info_master(this,*(uchar *)(iVar8 + 9),uVar1,pcVar7,local_108);
      if (cVar2 != '\x01') {
        return 0;
      }
      std::
      _Rb_tree_iterator<std::pair<sync_script::CSyncScript::SWEAPONTYPE_const,sync_script::CSyncScript::SITEMTYPE>>
      ::operator++((_Rb_tree_iterator<std::pair<sync_script::CSyncScript::SWEAPONTYPE_const,sync_script::CSyncScript::SITEMTYPE>>
                    *)local_34);
    }
    std::
    map<sync_script::CSyncScript::SARMORTYPE,sync_script::CSyncScript::SITEMTYPE,std::less<sync_script::CSyncScript::SARMORTYPE>,std::allocator<std::pair<sync_script::CSyncScript::SARMORTYPE_const,sync_script::CSyncScript::SITEMTYPE>>>
    ::begin(local_38);
    while( true ) {
      std::
      map<sync_script::CSyncScript::SARMORTYPE,sync_script::CSyncScript::SITEMTYPE,std::less<sync_script::CSyncScript::SARMORTYPE>,std::allocator<std::pair<sync_script::CSyncScript::SARMORTYPE_const,sync_script::CSyncScript::SITEMTYPE>>>
      ::end(local_2c);
      cVar2 = std::
              _Rb_tree_iterator<std::pair<sync_script::CSyncScript::SARMORTYPE_const,sync_script::CSyncScript::SITEMTYPE>>
              ::operator!=((_Rb_tree_iterator<std::pair<sync_script::CSyncScript::SARMORTYPE_const,sync_script::CSyncScript::SITEMTYPE>>
                            *)local_38,(_Rb_tree_iterator *)local_2c);
      if (cVar2 == '\0') break;
      iVar8 = std::
              _Rb_tree_iterator<std::pair<sync_script::CSyncScript::SARMORTYPE_const,sync_script::CSyncScript::SITEMTYPE>>
              ::operator->((_Rb_tree_iterator<std::pair<sync_script::CSyncScript::SARMORTYPE_const,sync_script::CSyncScript::SITEMTYPE>>
                            *)local_38);
      uVar4 = std::string::c_str((string *)(iVar8 + 0x10));
      iVar8 = std::
              _Rb_tree_iterator<std::pair<sync_script::CSyncScript::SARMORTYPE_const,sync_script::CSyncScript::SITEMTYPE>>
              ::operator->((_Rb_tree_iterator<std::pair<sync_script::CSyncScript::SARMORTYPE_const,sync_script::CSyncScript::SITEMTYPE>>
                            *)local_38);
      psVar5 = (string *)
               std::
               map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
               ::operator[]((map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
                             *)(this + 0x7c),(uchar *)(iVar8 + 10));
      uVar6 = std::string::c_str(psVar5);
      sprintf(local_a4,"%s%s",uVar6,uVar4);
      iVar8 = std::
              _Rb_tree_iterator<std::pair<sync_script::CSyncScript::SARMORTYPE_const,sync_script::CSyncScript::SITEMTYPE>>
              ::operator->((_Rb_tree_iterator<std::pair<sync_script::CSyncScript::SARMORTYPE_const,sync_script::CSyncScript::SITEMTYPE>>
                            *)local_38);
      psVar5 = (string *)
               std::
               map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
               ::operator[]((map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
                             *)(this + 100),(uchar *)(iVar8 + 9));
      uVar4 = std::string::c_str(psVar5);
      sprintf(local_108,"<%s>%s",uVar4,local_a4);
      iVar8 = std::
              _Rb_tree_iterator<std::pair<sync_script::CSyncScript::SARMORTYPE_const,sync_script::CSyncScript::SITEMTYPE>>
              ::operator->((_Rb_tree_iterator<std::pair<sync_script::CSyncScript::SARMORTYPE_const,sync_script::CSyncScript::SITEMTYPE>>
                            *)local_38);
      uVar1 = *(ushort *)(iVar8 + 0xc);
      iVar8 = std::
              _Rb_tree_iterator<std::pair<sync_script::CSyncScript::SARMORTYPE_const,sync_script::CSyncScript::SITEMTYPE>>
              ::operator->((_Rb_tree_iterator<std::pair<sync_script::CSyncScript::SARMORTYPE_const,sync_script::CSyncScript::SITEMTYPE>>
                            *)local_38);
      cVar2 = insert_one_item_info_master(this,*(uchar *)(iVar8 + 9),uVar1,local_a4,local_108);
      if (cVar2 != '\x01') {
        return 0;
      }
      std::
      _Rb_tree_iterator<std::pair<sync_script::CSyncScript::SARMORTYPE_const,sync_script::CSyncScript::SITEMTYPE>>
      ::operator++((_Rb_tree_iterator<std::pair<sync_script::CSyncScript::SARMORTYPE_const,sync_script::CSyncScript::SITEMTYPE>>
                    *)local_38);
    }
    local_1d = '\0';
    std::
    map<std::string,sync_script::CSyncScript::SITEMTYPE,std::less<std::string>,std::allocator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>>
    ::begin(local_3c);
    while( true ) {
      std::
      map<std::string,sync_script::CSyncScript::SITEMTYPE,std::less<std::string>,std::allocator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>>
      ::end(local_28);
      cVar2 = std::
              _Rb_tree_iterator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>::
              operator!=((_Rb_tree_iterator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>
                          *)local_3c,(_Rb_tree_iterator *)local_28);
      if (cVar2 == '\0') break;
      iVar8 = std::
              _Rb_tree_iterator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>::
              operator->((_Rb_tree_iterator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>
                          *)local_3c);
      if (*(char *)(iVar8 + 4) == '\x01') {
        local_1d = '\0';
        std::vector<unsigned_char,std::allocator<unsigned_char>>::begin();
        while( true ) {
          std::vector<unsigned_char,std::allocator<unsigned_char>>::end();
          bVar3 = __gnu_cxx::operator!=(local_40,local_24);
          if (!bVar3) break;
          iVar8 = std::
                  _Rb_tree_iterator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>
                  ::operator->((_Rb_tree_iterator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>
                                *)local_3c);
          cVar2 = *(char *)(iVar8 + 5);
          pcVar7 = (char *)__gnu_cxx::
                           __normal_iterator<unsigned_char*,std::vector<unsigned_char,std::allocator<unsigned_char>>>
                           ::operator*(local_40);
          if (cVar2 == *pcVar7) {
            local_1d = '\x01';
            break;
          }
          __gnu_cxx::
          __normal_iterator<unsigned_char*,std::vector<unsigned_char,std::allocator<unsigned_char>>>
          ::operator++(local_40);
        }
        iVar8 = std::
                _Rb_tree_iterator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>
                ::operator->((_Rb_tree_iterator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>
                              *)local_3c);
        uVar4 = std::string::c_str((string *)(iVar8 + 0xc));
        iVar8 = std::
                _Rb_tree_iterator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>
                ::operator->((_Rb_tree_iterator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>
                              *)local_3c);
        psVar5 = (string *)
                 std::
                 map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
                 ::operator[]((map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
                               *)(this + 100),(uchar *)(iVar8 + 5));
        uVar6 = std::string::c_str(psVar5);
        sprintf(local_108,"<%s>%s",uVar6,uVar4);
        if (local_1d == '\x01') {
          iVar8 = std::
                  _Rb_tree_iterator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>
                  ::operator->((_Rb_tree_iterator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>
                                *)local_3c);
          psVar5 = (string *)
                   std::
                   map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
                   ::operator[]((map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
                                 *)(this + 100),(uchar *)(iVar8 + 5));
          pcVar7 = (char *)std::string::c_str(psVar5);
          iVar8 = std::
                  _Rb_tree_iterator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>
                  ::operator->((_Rb_tree_iterator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>
                                *)local_3c);
          uVar1 = *(ushort *)(iVar8 + 8);
          iVar8 = std::
                  _Rb_tree_iterator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>
                  ::operator->((_Rb_tree_iterator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>
                                *)local_3c);
          cVar2 = insert_one_item_info_master(this,*(uchar *)(iVar8 + 5),uVar1,pcVar7,local_108);
          if (cVar2 != '\x01') {
            return 0;
          }
        }
        else {
          iVar8 = std::
                  _Rb_tree_iterator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>
                  ::operator->((_Rb_tree_iterator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>
                                *)local_3c);
          pcVar7 = (char *)std::string::c_str((string *)(iVar8 + 0xc));
          iVar8 = std::
                  _Rb_tree_iterator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>
                  ::operator->((_Rb_tree_iterator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>
                                *)local_3c);
          uVar1 = *(ushort *)(iVar8 + 8);
          iVar8 = std::
                  _Rb_tree_iterator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>
                  ::operator->((_Rb_tree_iterator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>
                                *)local_3c);
          cVar2 = insert_one_item_info_master(this,*(uchar *)(iVar8 + 5),uVar1,pcVar7,local_108);
          if (cVar2 != '\x01') {
            return 0;
          }
        }
      }
      std::_Rb_tree_iterator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>::
      operator++((_Rb_tree_iterator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>
                  *)local_3c);
    }
  }
  return 1;
}
```
