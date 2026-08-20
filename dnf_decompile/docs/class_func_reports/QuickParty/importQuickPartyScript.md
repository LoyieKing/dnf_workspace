# importQuickPartyScript

`_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE`

`QuickParty::importQuickPartyScript(char const*, QuickParty::QuickPartyData*)`

| 类 | 地址 |
|---|---|
| `QuickParty` | `0x08a6e282` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a6e282  _ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE
#           QuickParty::importQuickPartyScript(char const*, QuickParty::QuickPartyData*)
# range [0x08a6e282, 0x08a6ef15]
08a6e282 +0x000:  push   %ebp
08a6e283 +0x001:  mov    %esp,%ebp
08a6e285 +0x003:  push   %edi
08a6e286 +0x004:  push   %esi
08a6e287 +0x005:  push   %ebx
08a6e288 +0x006:  sub    $0x12c,%esp
08a6e28e +0x00c:  mov    0x8(%ebp),%eax
08a6e291 +0x00f:  mov    %eax,0x4(%esp)
08a6e295 +0x013:  movl   $"",(%esp)
08a6e29c +0x01a:  call   088bbd29 <_Z18loadRDARScriptFilePKcS0_>  ; loadRDARScriptFile(char const*, char const*)
08a6e2a1 +0x01f:  xor    $0x1,%eax
08a6e2a4 +0x022:  test   %al,%al
08a6e2a6 +0x024:  je     08a6e2b2 <+0x30>
08a6e2a8 +0x026:  mov    $0x0,%ebx
08a6e2ad +0x02b:  jmp    08a6ef09 <+0xc87>
08a6e2b2 +0x030:  lea    -0xec(%ebp),%eax
08a6e2b8 +0x036:  mov    %eax,(%esp)
08a6e2bb +0x039:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08a6e2c0 +0x03e:  lea    -0xec(%ebp),%eax
08a6e2c6 +0x044:  mov    %eax,(%esp)
08a6e2c9 +0x047:  call   08708dd0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x29e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x29e0
08a6e2ce +0x04c:  lea    -0xf0(%ebp),%eax
08a6e2d4 +0x052:  mov    %eax,(%esp)
08a6e2d7 +0x055:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08a6e2dc +0x05a:  lea    -0xf0(%ebp),%eax
08a6e2e2 +0x060:  mov    %eax,(%esp)
08a6e2e5 +0x063:  call   08708dd0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x29e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x29e0
08a6e2ea +0x068:  movb   $0x0,-0xf1(%ebp)
08a6e2f1 +0x06f:  movl   $0x0,-0xf8(%ebp)
08a6e2fb +0x079:  lea    -0x100(%ebp),%eax
08a6e301 +0x07f:  mov    %eax,(%esp)
08a6e304 +0x082:  call   08a6ef72 <_GLOBAL__I__ZN10QuickParty23getRandomBuffTypeByNameERKSs+0x1c>  ; global constructors keyed to QuickParty::getRandomBuffTypeByName(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)+0x1c
08a6e309 +0x087:  movl   $0x1,0x4(%esp)
08a6e311 +0x08f:  lea    -0xec(%ebp),%eax
08a6e317 +0x095:  mov    %eax,(%esp)
08a6e31a +0x098:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
08a6e31f +0x09d:  xor    $0x1,%eax
08a6e322 +0x0a0:  test   %al,%al
08a6e324 +0x0a2:  jne    08a6eeab <+0xc29>
08a6e32a +0x0a8:  mov    $&_ZGVZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataEE8__lookup,%eax
08a6e32f +0x0ad:  movzbl (%eax),%eax
08a6e332 +0x0b0:  test   %al,%al
08a6e334 +0x0b2:  jne    08a6e3a4 <+0x122>
08a6e336 +0x0b4:  movl   $&_ZGVZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataEE8__lookup,(%esp)
08a6e33d +0x0bb:  call   08725330 <__cxa_guard_acquire>
08a6e342 +0x0c0:  test   %eax,%eax
08a6e344 +0x0c2:  setne  %al
08a6e347 +0x0c5:  test   %al,%al
08a6e349 +0x0c7:  je     08a6e3a4 <+0x122>
08a6e34b +0x0c9:  mov    $0x0,%ebx
08a6e350 +0x0ce:  movl   $&_ZZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataEE8__lookup,(%esp)
08a6e357 +0x0d5:  call   080f14d4 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x556>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x556
08a6e35c +0x0da:  movl   $&_ZGVZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataEE8__lookup,(%esp)
08a6e363 +0x0e1:  call   08725250 <__cxa_guard_release>
08a6e368 +0x0e6:  mov    $&_ZNSt3mapIPKci10less_TCHARSaISt4pairIKS1_iEEED1Ev,%eax
08a6e36d +0x0eb:  movl   $&__dso_handle,0x8(%esp)
08a6e375 +0x0f3:  movl   $&_ZZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataEE8__lookup,0x4(%esp)
08a6e37d +0x0fb:  mov    %eax,(%esp)
08a6e380 +0x0fe:  call   0807ddd0 <_init+0x6c8>
08a6e385 +0x103:  jmp    08a6e3a4 <+0x122>
08a6e387 +0x105:  mov    %edx,%esi
08a6e389 +0x107:  mov    %eax,%edi
08a6e38b +0x109:  test   %bl,%bl
08a6e38d +0x10b:  jne    08a6e39b <+0x119>
08a6e38f +0x10d:  movl   $&_ZGVZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataEE8__lookup,(%esp)
08a6e396 +0x114:  call   087252c0 <__cxa_guard_abort>
08a6e39b +0x119:  mov    %edi,%eax
08a6e39d +0x11b:  mov    %esi,%edx
08a6e39f +0x11d:  jmp    08a6eeb5 <+0xc33>
08a6e3a4 +0x122:  mov    $&_ZGVZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataEE11__init_lock,%eax
08a6e3a9 +0x127:  movzbl (%eax),%eax
08a6e3ac +0x12a:  test   %al,%al
08a6e3ae +0x12c:  jne    08a6e41e <+0x19c>
08a6e3b0 +0x12e:  movl   $&_ZGVZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataEE11__init_lock,(%esp)
08a6e3b7 +0x135:  call   08725330 <__cxa_guard_acquire>
08a6e3bc +0x13a:  test   %eax,%eax
08a6e3be +0x13c:  setne  %al
08a6e3c1 +0x13f:  test   %al,%al
08a6e3c3 +0x141:  je     08a6e41e <+0x19c>
08a6e3c5 +0x143:  mov    $0x0,%ebx
08a6e3ca +0x148:  movl   $&_ZZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataEE11__init_lock,(%esp)
08a6e3d1 +0x14f:  call   08ad3522 <_ZN8SpinLockC1Ev>  ; SpinLock::SpinLock()
08a6e3d6 +0x154:  movl   $&_ZGVZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataEE11__init_lock,(%esp)
08a6e3dd +0x15b:  call   08725250 <__cxa_guard_release>
08a6e3e2 +0x160:  mov    $&_ZN8SpinLockD1Ev,%eax
08a6e3e7 +0x165:  movl   $&__dso_handle,0x8(%esp)
08a6e3ef +0x16d:  movl   $&_ZZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataEE11__init_lock,0x4(%esp)
08a6e3f7 +0x175:  mov    %eax,(%esp)
08a6e3fa +0x178:  call   0807ddd0 <_init+0x6c8>
08a6e3ff +0x17d:  jmp    08a6e41e <+0x19c>
08a6e401 +0x17f:  mov    %edx,%esi
08a6e403 +0x181:  mov    %eax,%edi
08a6e405 +0x183:  test   %bl,%bl
08a6e407 +0x185:  jne    08a6e415 <+0x193>
08a6e409 +0x187:  movl   $&_ZGVZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataEE11__init_lock,(%esp)
08a6e410 +0x18e:  call   087252c0 <__cxa_guard_abort>
08a6e415 +0x193:  mov    %edi,%eax
08a6e417 +0x195:  mov    %esi,%edx
08a6e419 +0x197:  jmp    08a6eeb5 <+0xc33>
08a6e41e +0x19c:  movzbl &_ZZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataEE8__inited,%eax
08a6e425 +0x1a3:  test   %al,%al
08a6e427 +0x1a5:  je     08a6e4e6 <+0x264>
08a6e42d +0x1ab:  lea    -0xec(%ebp),%eax
08a6e433 +0x1b1:  mov    %eax,(%esp)
08a6e436 +0x1b4:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08a6e43b +0x1b9:  mov    %eax,-0xe4(%ebp)
08a6e441 +0x1bf:  lea    -0xe8(%ebp),%eax
08a6e447 +0x1c5:  lea    -0xe4(%ebp),%edx
08a6e44d +0x1cb:  mov    %edx,0x8(%esp)
08a6e451 +0x1cf:  movl   $&_ZZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataEE8__lookup,0x4(%esp)
08a6e459 +0x1d7:  mov    %eax,(%esp)
08a6e45c +0x1da:  call   080f154e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x5d0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x5d0
08a6e461 +0x1df:  sub    $0x4,%esp
08a6e464 +0x1e2:  lea    -0xe8(%ebp),%eax
08a6e46a +0x1e8:  mov    %eax,0x4(%esp)
08a6e46e +0x1ec:  lea    -0x104(%ebp),%eax
08a6e474 +0x1f2:  mov    %eax,(%esp)
08a6e477 +0x1f5:  call   080f157a <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x5fc>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x5fc
08a6e47c +0x1fa:  lea    -0xdc(%ebp),%eax
08a6e482 +0x200:  movl   $&_ZZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataEE8__lookup,0x4(%esp)
08a6e48a +0x208:  mov    %eax,(%esp)
08a6e48d +0x20b:  call   080f158a <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x60c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x60c
08a6e492 +0x210:  sub    $0x4,%esp
08a6e495 +0x213:  lea    -0xdc(%ebp),%eax
08a6e49b +0x219:  mov    %eax,0x4(%esp)
08a6e49f +0x21d:  lea    -0xe0(%ebp),%eax
08a6e4a5 +0x223:  mov    %eax,(%esp)
08a6e4a8 +0x226:  call   080f157a <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x5fc>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x5fc
08a6e4ad +0x22b:  lea    -0xe0(%ebp),%eax
08a6e4b3 +0x231:  mov    %eax,0x4(%esp)
08a6e4b7 +0x235:  lea    -0x104(%ebp),%eax
08a6e4bd +0x23b:  mov    %eax,(%esp)
08a6e4c0 +0x23e:  call   080f15b0 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x632>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x632
08a6e4c5 +0x243:  test   %al,%al
08a6e4c7 +0x245:  je     08a6e4dc <+0x25a>
08a6e4c9 +0x247:  lea    -0x104(%ebp),%eax
08a6e4cf +0x24d:  mov    %eax,(%esp)
08a6e4d2 +0x250:  call   080f15c4 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x646>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x646
08a6e4d7 +0x255:  mov    0x4(%eax),%eax
08a6e4da +0x258:  jmp    08a6e4e1 <+0x25f>
08a6e4dc +0x25a:  mov    $0xffffffff,%eax
08a6e4e1 +0x25f:  mov    %eax,-0x2c(%ebp)
08a6e4e4 +0x262:  jmp    08a6e516 <+0x294>
08a6e4e6 +0x264:  movl   $&_ZZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataEE11__init_lock,(%esp)
08a6e4ed +0x26b:  call   08ad3552 <_ZN8SpinLock5enterEv>  ; SpinLock::enter()
08a6e4f2 +0x270:  movzbl &_ZZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataEE8__inited,%eax
08a6e4f9 +0x277:  test   %al,%al
08a6e4fb +0x279:  je     08a6e50f <+0x28d>
08a6e4fd +0x27b:  movl   $&_ZZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataEE11__init_lock,(%esp)
08a6e504 +0x282:  call   08ad3586 <_ZN8SpinLock5leaveEv>  ; SpinLock::leave()
08a6e509 +0x287:  nop
08a6e50a +0x288:  jmp    08a6e32a <+0xa8>
08a6e50f +0x28d:  movl   $0x0,-0x2c(%ebp)
08a6e516 +0x294:  mov    -0x2c(%ebp),%eax
08a6e519 +0x297:  cmp    $0x4d,%eax
08a6e51c +0x29a:  je     08a6e67f <+0x3fd>
08a6e522 +0x2a0:  cmp    $0x4d,%eax
08a6e525 +0x2a3:  jg     08a6e53e <+0x2bc>
08a6e527 +0x2a5:  cmp    $0x3e,%eax
08a6e52a +0x2a8:  je     08a6e579 <+0x2f7>
08a6e52c +0x2aa:  cmp    $0x41,%eax
08a6e52f +0x2ad:  je     08a6e5e0 <+0x35e>
08a6e535 +0x2b3:  test   %eax,%eax
08a6e537 +0x2b5:  je     08a6e579 <+0x2f7>
08a6e539 +0x2b7:  jmp    08a6ee7f <+0xbfd>
08a6e53e +0x2bc:  cmp    $0x8f,%eax
08a6e543 +0x2c1:  je     08a6e99a <+0x718>
08a6e549 +0x2c7:  cmp    $0x8f,%eax
08a6e54e +0x2cc:  jg     08a6e55e <+0x2dc>
08a6e550 +0x2ce:  cmp    $0x59,%eax
08a6e553 +0x2d1:  je     08a6e71b <+0x499>
08a6e559 +0x2d7:  jmp    08a6ee7f <+0xbfd>
08a6e55e +0x2dc:  cmp    $0xb8,%eax
08a6e563 +0x2e1:  je     08a6ebe7 <+0x965>
08a6e569 +0x2e7:  cmp    $0xce,%eax
08a6e56e +0x2ec:  je     08a6ecc7 <+0xa45>
08a6e574 +0x2f2:  jmp    08a6ee7f <+0xbfd>
08a6e579 +0x2f7:  movzbl &_ZZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataEE8__inited,%eax
08a6e580 +0x2fe:  xor    $0x1,%eax
08a6e583 +0x301:  test   %al,%al
08a6e585 +0x303:  je     08a6e5d6 <+0x354>
08a6e587 +0x305:  movl   $0x3e,-0xc8(%ebp)
08a6e591 +0x30f:  lea    -0xc8(%ebp),%eax
08a6e597 +0x315:  mov    %eax,0x8(%esp)
08a6e59b +0x319:  movl   $"[/quick party]",0x4(%esp)
08a6e5a3 +0x321:  lea    -0xd0(%ebp),%eax
08a6e5a9 +0x327:  mov    %eax,(%esp)
08a6e5ac +0x32a:  call   082ae194 <_GLOBAL__I__ZN4CLog5this_E+0xa5bb>  ; global constructors keyed to CLog::this_+0xa5bb
08a6e5b1 +0x32f:  lea    -0xd8(%ebp),%eax
08a6e5b7 +0x335:  lea    -0xd0(%ebp),%edx
08a6e5bd +0x33b:  mov    %edx,0x8(%esp)
08a6e5c1 +0x33f:  movl   $&_ZZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataEE8__lookup,0x4(%esp)
08a6e5c9 +0x347:  mov    %eax,(%esp)
08a6e5cc +0x34a:  call   080f1600 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x682>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x682
08a6e5d1 +0x34f:  sub    $0x4,%esp
08a6e5d4 +0x352:  jmp    08a6e5e0 <+0x35e>
08a6e5d6 +0x354:  mov    $0x1,%ebx
08a6e5db +0x359:  jmp    08a6eecd <+0xc4b>
08a6e5e0 +0x35e:  movzbl &_ZZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataEE8__inited,%eax
08a6e5e7 +0x365:  xor    $0x1,%eax
08a6e5ea +0x368:  test   %al,%al
08a6e5ec +0x36a:  je     08a6e63d <+0x3bb>
08a6e5ee +0x36c:  movl   $0x41,-0xb4(%ebp)
08a6e5f8 +0x376:  lea    -0xb4(%ebp),%eax
08a6e5fe +0x37c:  mov    %eax,0x8(%esp)
08a6e602 +0x380:  movl   $"[unable to quickparty]",0x4(%esp)
08a6e60a +0x388:  lea    -0xbc(%ebp),%eax
08a6e610 +0x38e:  mov    %eax,(%esp)
08a6e613 +0x391:  call   082ae292 <_GLOBAL__I__ZN4CLog5this_E+0xa6b9>  ; global constructors keyed to CLog::this_+0xa6b9
08a6e618 +0x396:  lea    -0xc4(%ebp),%eax
08a6e61e +0x39c:  lea    -0xbc(%ebp),%edx
08a6e624 +0x3a2:  mov    %edx,0x8(%esp)
08a6e628 +0x3a6:  movl   $&_ZZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataEE8__lookup,0x4(%esp)
08a6e630 +0x3ae:  mov    %eax,(%esp)
08a6e633 +0x3b1:  call   080f1600 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x682>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x682
08a6e638 +0x3b6:  sub    $0x4,%esp
08a6e63b +0x3b9:  jmp    08a6e67f <+0x3fd>
08a6e63d +0x3bb:  lea    -0xf1(%ebp),%eax
08a6e643 +0x3c1:  mov    %eax,(%esp)
08a6e646 +0x3c4:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08a6e64b +0x3c9:  mov    %eax,-0xf8(%ebp)
08a6e651 +0x3cf:  movzbl -0xf1(%ebp),%eax
08a6e658 +0x3d6:  xor    $0x1,%eax
08a6e65b +0x3d9:  test   %al,%al
08a6e65d +0x3db:  je     08a6e665 <+0x3e3>
08a6e65f +0x3dd:  nop
08a6e660 +0x3de:  jmp    08a6ee7f <+0xbfd>
08a6e665 +0x3e3:  mov    0xc(%ebp),%eax
08a6e668 +0x3e6:  lea    0xc(%eax),%edx
08a6e66b +0x3e9:  lea    -0xf8(%ebp),%eax
08a6e671 +0x3ef:  mov    %eax,0x4(%esp)
08a6e675 +0x3f3:  mov    %edx,(%esp)
08a6e678 +0x3f6:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
08a6e67d +0x3fb:  jmp    08a6e63d <+0x3bb>
08a6e67f +0x3fd:  movzbl &_ZZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataEE8__inited,%eax
08a6e686 +0x404:  xor    $0x1,%eax
08a6e689 +0x407:  test   %al,%al
08a6e68b +0x409:  je     08a6e6dc <+0x45a>
08a6e68d +0x40b:  movl   $0x4d,-0xa0(%ebp)
08a6e697 +0x415:  lea    -0xa0(%ebp),%eax
08a6e69d +0x41b:  mov    %eax,0x8(%esp)
08a6e6a1 +0x41f:  movl   $"[level section]",0x4(%esp)
08a6e6a9 +0x427:  lea    -0xa8(%ebp),%eax
08a6e6af +0x42d:  mov    %eax,(%esp)
08a6e6b2 +0x430:  call   082adf6c <_GLOBAL__I__ZN4CLog5this_E+0xa393>  ; global constructors keyed to CLog::this_+0xa393
08a6e6b7 +0x435:  lea    -0xb0(%ebp),%eax
08a6e6bd +0x43b:  lea    -0xa8(%ebp),%edx
08a6e6c3 +0x441:  mov    %edx,0x8(%esp)
08a6e6c7 +0x445:  movl   $&_ZZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataEE8__lookup,0x4(%esp)
08a6e6cf +0x44d:  mov    %eax,(%esp)
08a6e6d2 +0x450:  call   080f1600 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x682>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x682
08a6e6d7 +0x455:  sub    $0x4,%esp
08a6e6da +0x458:  jmp    08a6e71b <+0x499>
08a6e6dc +0x45a:  lea    -0xf1(%ebp),%eax
08a6e6e2 +0x460:  mov    %eax,(%esp)
08a6e6e5 +0x463:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08a6e6ea +0x468:  mov    %eax,-0xf8(%ebp)
08a6e6f0 +0x46e:  movzbl -0xf1(%ebp),%eax
08a6e6f7 +0x475:  xor    $0x1,%eax
08a6e6fa +0x478:  test   %al,%al
08a6e6fc +0x47a:  je     08a6e704 <+0x482>
08a6e6fe +0x47c:  nop
08a6e6ff +0x47d:  jmp    08a6ee7f <+0xbfd>
08a6e704 +0x482:  mov    0xc(%ebp),%eax
08a6e707 +0x485:  lea    -0xf8(%ebp),%edx
08a6e70d +0x48b:  mov    %edx,0x4(%esp)
08a6e711 +0x48f:  mov    %eax,(%esp)
08a6e714 +0x492:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
08a6e719 +0x497:  jmp    08a6e6dc <+0x45a>
08a6e71b +0x499:  movzbl &_ZZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataEE8__inited,%eax
08a6e722 +0x4a0:  xor    $0x1,%eax
08a6e725 +0x4a3:  test   %al,%al
08a6e727 +0x4a5:  je     08a6e972 <+0x6f0>
08a6e72d +0x4ab:  movl   $0x59,-0x8c(%ebp)
08a6e737 +0x4b5:  lea    -0x8c(%ebp),%eax
08a6e73d +0x4bb:  mov    %eax,0x8(%esp)
08a6e741 +0x4bf:  movl   $"[basic reward]",0x4(%esp)
08a6e749 +0x4c7:  lea    -0x94(%ebp),%eax
08a6e74f +0x4cd:  mov    %eax,(%esp)
08a6e752 +0x4d0:  call   082ae194 <_GLOBAL__I__ZN4CLog5this_E+0xa5bb>  ; global constructors keyed to CLog::this_+0xa5bb
08a6e757 +0x4d5:  lea    -0x9c(%ebp),%eax
08a6e75d +0x4db:  lea    -0x94(%ebp),%edx
08a6e763 +0x4e1:  mov    %edx,0x8(%esp)
08a6e767 +0x4e5:  movl   $&_ZZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataEE8__lookup,0x4(%esp)
08a6e76f +0x4ed:  mov    %eax,(%esp)
08a6e772 +0x4f0:  call   080f1600 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x682>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x682
08a6e777 +0x4f5:  sub    $0x4,%esp
08a6e77a +0x4f8:  jmp    08a6e99a <+0x718>
08a6e77f +0x4fd:  movl   $"[/basic reward]",0x4(%esp)
08a6e787 +0x505:  lea    -0xec(%ebp),%eax
08a6e78d +0x50b:  mov    %eax,(%esp)
08a6e790 +0x50e:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08a6e795 +0x513:  test   %al,%al
08a6e797 +0x515:  je     08a6e79e <+0x51c>
08a6e799 +0x517:  jmp    08a6e995 <+0x713>
08a6e79e +0x51c:  movl   $"[increase gold card]",0x4(%esp)
08a6e7a6 +0x524:  lea    -0xec(%ebp),%eax
08a6e7ac +0x52a:  mov    %eax,(%esp)
08a6e7af +0x52d:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08a6e7b4 +0x532:  test   %al,%al
08a6e7b6 +0x534:  je     08a6e86a <+0x5e8>
08a6e7bc +0x53a:  lea    -0xf1(%ebp),%eax
08a6e7c2 +0x540:  mov    %eax,(%esp)
08a6e7c5 +0x543:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08a6e7ca +0x548:  mov    %eax,-0xf8(%ebp)
08a6e7d0 +0x54e:  movzbl -0xf1(%ebp),%eax
08a6e7d7 +0x555:  xor    $0x1,%eax
08a6e7da +0x558:  test   %al,%al
08a6e7dc +0x55a:  je     08a6e7e4 <+0x562>
08a6e7de +0x55c:  nop
08a6e7df +0x55d:  jmp    08a6e972 <+0x6f0>
08a6e7e4 +0x562:  movl   $0x0,(%esp)
08a6e7eb +0x569:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08a6e7f0 +0x56e:  mov    %eax,-0xf8(%ebp)
08a6e7f6 +0x574:  mov    -0xf8(%ebp),%eax
08a6e7fc +0x57a:  mov    %eax,-0xfc(%ebp)
08a6e802 +0x580:  lea    -0xf0(%ebp),%eax
08a6e808 +0x586:  mov    %eax,(%esp)
08a6e80b +0x589:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
08a6e810 +0x58e:  mov    %al,-0xf1(%ebp)
08a6e816 +0x594:  movzbl -0xf1(%ebp),%eax
08a6e81d +0x59b:  test   %al,%al
08a6e81f +0x59d:  je     08a6e842 <+0x5c0>
08a6e821 +0x59f:  movl   $"%",0x4(%esp)
08a6e829 +0x5a7:  lea    -0xf0(%ebp),%eax
08a6e82f +0x5ad:  mov    %eax,(%esp)
08a6e832 +0x5b0:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08a6e837 +0x5b5:  test   %al,%al
08a6e839 +0x5b7:  je     08a6e842 <+0x5c0>
08a6e83b +0x5b9:  mov    $0x1,%eax
08a6e840 +0x5be:  jmp    08a6e847 <+0x5c5>
08a6e842 +0x5c0:  mov    $0x0,%eax
08a6e847 +0x5c5:  mov    %eax,-0x100(%ebp)
08a6e84d +0x5cb:  mov    0xc(%ebp),%eax
08a6e850 +0x5ce:  lea    0x18(%eax),%edx
08a6e853 +0x5d1:  lea    -0x100(%ebp),%eax
08a6e859 +0x5d7:  mov    %eax,0x4(%esp)
08a6e85d +0x5db:  mov    %edx,(%esp)
08a6e860 +0x5de:  call   08a6f02a <_GLOBAL__I__ZN10QuickParty23getRandomBuffTypeByNameERKSs+0xd4>  ; global constructors keyed to QuickParty::getRandomBuffTypeByName(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)+0xd4
08a6e865 +0x5e3:  jmp    08a6e7bc <+0x53a>
08a6e86a +0x5e8:  movl   $"[hell ratio]",0x4(%esp)
08a6e872 +0x5f0:  lea    -0xec(%ebp),%eax
08a6e878 +0x5f6:  mov    %eax,(%esp)
08a6e87b +0x5f9:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08a6e880 +0x5fe:  test   %al,%al
08a6e882 +0x600:  je     08a6e972 <+0x6f0>
08a6e888 +0x606:  lea    -0xf0(%ebp),%eax
08a6e88e +0x60c:  mov    %eax,(%esp)
08a6e891 +0x60f:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
08a6e896 +0x614:  mov    %al,-0xf1(%ebp)
08a6e89c +0x61a:  movzbl -0xf1(%ebp),%eax
08a6e8a3 +0x621:  xor    $0x1,%eax
08a6e8a6 +0x624:  test   %al,%al
08a6e8a8 +0x626:  je     08a6e8af <+0x62d>
08a6e8aa +0x628:  jmp    08a6e995 <+0x713>
08a6e8af +0x62d:  movl   $0x0,(%esp)
08a6e8b6 +0x634:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08a6e8bb +0x639:  mov    %eax,-0xf8(%ebp)
08a6e8c1 +0x63f:  mov    -0xf8(%ebp),%edx
08a6e8c7 +0x645:  mov    0xc(%ebp),%eax
08a6e8ca +0x648:  mov    %edx,0x30(%eax)
08a6e8cd +0x64b:  movl   $0x0,(%esp)
08a6e8d4 +0x652:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08a6e8d9 +0x657:  mov    %eax,-0xf8(%ebp)
08a6e8df +0x65d:  mov    -0xf8(%ebp),%edx
08a6e8e5 +0x663:  mov    0xc(%ebp),%eax
08a6e8e8 +0x666:  mov    %edx,0x34(%eax)
08a6e8eb +0x669:  lea    -0x10c(%ebp),%eax
08a6e8f1 +0x66f:  mov    %eax,(%esp)
08a6e8f4 +0x672:  call   08a6ef8a <_GLOBAL__I__ZN10QuickParty23getRandomBuffTypeByNameERKSs+0x34>  ; global constructors keyed to QuickParty::getRandomBuffTypeByName(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)+0x34
08a6e8f9 +0x677:  lea    -0xf1(%ebp),%eax
08a6e8ff +0x67d:  mov    %eax,(%esp)
08a6e902 +0x680:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08a6e907 +0x685:  mov    %eax,-0xf8(%ebp)
08a6e90d +0x68b:  movzbl -0xf1(%ebp),%eax
08a6e914 +0x692:  xor    $0x1,%eax
08a6e917 +0x695:  test   %al,%al
08a6e919 +0x697:  jne    08a6e971 <+0x6ef>
08a6e91b +0x699:  movl   $0x0,(%esp)
08a6e922 +0x6a0:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08a6e927 +0x6a5:  mov    %eax,-0xf8(%ebp)
08a6e92d +0x6ab:  mov    -0xf8(%ebp),%eax
08a6e933 +0x6b1:  mov    %eax,-0x10c(%ebp)
08a6e939 +0x6b7:  movl   $0x0,(%esp)
08a6e940 +0x6be:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08a6e945 +0x6c3:  mov    %eax,-0xf8(%ebp)
08a6e94b +0x6c9:  mov    -0xf8(%ebp),%eax
08a6e951 +0x6cf:  mov    %eax,-0x108(%ebp)
08a6e957 +0x6d5:  mov    0xc(%ebp),%eax
08a6e95a +0x6d8:  lea    0x24(%eax),%edx
08a6e95d +0x6db:  lea    -0x10c(%ebp),%eax
08a6e963 +0x6e1:  mov    %eax,0x4(%esp)
08a6e967 +0x6e5:  mov    %edx,(%esp)
08a6e96a +0x6e8:  call   08a6f09e <_GLOBAL__I__ZN10QuickParty23getRandomBuffTypeByNameERKSs+0x148>  ; global constructors keyed to QuickParty::getRandomBuffTypeByName(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)+0x148
08a6e96f +0x6ed:  jmp    08a6e8f9 <+0x677>
08a6e971 +0x6ef:  nop
08a6e972 +0x6f0:  movl   $0x1,0x4(%esp)
08a6e97a +0x6f8:  lea    -0xec(%ebp),%eax
08a6e980 +0x6fe:  mov    %eax,(%esp)
08a6e983 +0x701:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
08a6e988 +0x706:  test   %al,%al
08a6e98a +0x708:  jne    08a6e77f <+0x4fd>
08a6e990 +0x70e:  jmp    08a6ee7f <+0xbfd>
08a6e995 +0x713:  jmp    08a6ee7f <+0xbfd>
08a6e99a +0x718:  movzbl &_ZZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataEE8__inited,%eax
08a6e9a1 +0x71f:  xor    $0x1,%eax
08a6e9a4 +0x722:  test   %al,%al
08a6e9a6 +0x724:  je     08a6e9ef <+0x76d>
08a6e9a8 +0x726:  movl   $0x8f,-0x78(%ebp)
08a6e9af +0x72d:  lea    -0x78(%ebp),%eax
08a6e9b2 +0x730:  mov    %eax,0x8(%esp)
08a6e9b6 +0x734:  movl   $"[random reward]",0x4(%esp)
08a6e9be +0x73c:  lea    -0x80(%ebp),%eax
08a6e9c1 +0x73f:  mov    %eax,(%esp)
08a6e9c4 +0x742:  call   082adf6c <_GLOBAL__I__ZN4CLog5this_E+0xa393>  ; global constructors keyed to CLog::this_+0xa393
08a6e9c9 +0x747:  lea    -0x88(%ebp),%eax
08a6e9cf +0x74d:  lea    -0x80(%ebp),%edx
08a6e9d2 +0x750:  mov    %edx,0x8(%esp)
08a6e9d6 +0x754:  movl   $&_ZZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataEE8__lookup,0x4(%esp)
08a6e9de +0x75c:  mov    %eax,(%esp)
08a6e9e1 +0x75f:  call   080f1600 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x682>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x682
08a6e9e6 +0x764:  sub    $0x4,%esp
08a6e9e9 +0x767:  jmp    08a6ebe7 <+0x965>
08a6e9ee +0x76c:  nop
08a6e9ef +0x76d:  movl   $0x1,0x4(%esp)
08a6e9f7 +0x775:  lea    -0xec(%ebp),%eax
08a6e9fd +0x77b:  mov    %eax,(%esp)
08a6ea00 +0x77e:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
08a6ea05 +0x783:  xor    $0x1,%eax
08a6ea08 +0x786:  test   %al,%al
08a6ea0a +0x788:  je     08a6ea11 <+0x78f>
08a6ea0c +0x78a:  jmp    08a6ebe2 <+0x960>
08a6ea11 +0x78f:  movl   $"[/random reward]",0x4(%esp)
08a6ea19 +0x797:  lea    -0xec(%ebp),%eax
08a6ea1f +0x79d:  mov    %eax,(%esp)
08a6ea22 +0x7a0:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08a6ea27 +0x7a5:  test   %al,%al
08a6ea29 +0x7a7:  je     08a6ea30 <+0x7ae>
08a6ea2b +0x7a9:  jmp    08a6ebe2 <+0x960>
08a6ea30 +0x7ae:  movl   $"[reward]",0x4(%esp)
08a6ea38 +0x7b6:  lea    -0xec(%ebp),%eax
08a6ea3e +0x7bc:  mov    %eax,(%esp)
08a6ea41 +0x7bf:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08a6ea46 +0x7c4:  test   %al,%al
08a6ea48 +0x7c6:  je     08a6e9ee <+0x76c>
08a6ea4a +0x7c8:  lea    -0xf0(%ebp),%eax
08a6ea50 +0x7ce:  mov    %eax,(%esp)
08a6ea53 +0x7d1:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
08a6ea58 +0x7d6:  mov    %al,-0xf1(%ebp)
08a6ea5e +0x7dc:  movzbl -0xf1(%ebp),%eax
08a6ea65 +0x7e3:  xor    $0x1,%eax
08a6ea68 +0x7e6:  test   %al,%al
08a6ea6a +0x7e8:  je     08a6ea71 <+0x7ef>
08a6ea6c +0x7ea:  jmp    08a6ebe2 <+0x960>
08a6ea71 +0x7ef:  lea    -0x120(%ebp),%eax
08a6ea77 +0x7f5:  mov    %eax,(%esp)
08a6ea7a +0x7f8:  call   08a6efa2 <_GLOBAL__I__ZN10QuickParty23getRandomBuffTypeByNameERKSs+0x4c>  ; global constructors keyed to QuickParty::getRandomBuffTypeByName(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)+0x4c
08a6ea7f +0x7fd:  lea    -0xf0(%ebp),%eax
08a6ea85 +0x803:  mov    %eax,(%esp)
08a6ea88 +0x806:  call   08a6e100 <_ZN10QuickParty23getRandomBuffTypeByNameERKSs>  ; QuickParty::getRandomBuffTypeByName(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
08a6ea8d +0x80b:  mov    %eax,-0x120(%ebp)
08a6ea93 +0x811:  lea    -0x120(%ebp),%eax
08a6ea99 +0x817:  add    $0x4,%eax
08a6ea9c +0x81a:  mov    %eax,(%esp)
08a6ea9f +0x81d:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
08a6eaa4 +0x822:  lea    -0xf1(%ebp),%eax
08a6eaaa +0x828:  mov    %eax,(%esp)
08a6eaad +0x82b:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08a6eab2 +0x830:  mov    %eax,-0xf8(%ebp)
08a6eab8 +0x836:  movzbl -0xf1(%ebp),%eax
08a6eabf +0x83d:  xor    $0x1,%eax
08a6eac2 +0x840:  test   %al,%al
08a6eac4 +0x842:  jne    08a6eb53 <+0x8d1>
08a6eaca +0x848:  movl   $0x0,(%esp)
08a6ead1 +0x84f:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08a6ead6 +0x854:  mov    %eax,-0xf8(%ebp)
08a6eadc +0x85a:  mov    -0xf8(%ebp),%eax
08a6eae2 +0x860:  mov    %eax,-0xfc(%ebp)
08a6eae8 +0x866:  lea    -0xf0(%ebp),%eax
08a6eaee +0x86c:  mov    %eax,(%esp)
08a6eaf1 +0x86f:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
08a6eaf6 +0x874:  mov    %al,-0xf1(%ebp)
08a6eafc +0x87a:  movzbl -0xf1(%ebp),%eax
08a6eb03 +0x881:  test   %al,%al
08a6eb05 +0x883:  je     08a6eb28 <+0x8a6>
08a6eb07 +0x885:  movl   $"%",0x4(%esp)
08a6eb0f +0x88d:  lea    -0xf0(%ebp),%eax
08a6eb15 +0x893:  mov    %eax,(%esp)
08a6eb18 +0x896:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08a6eb1d +0x89b:  test   %al,%al
08a6eb1f +0x89d:  je     08a6eb28 <+0x8a6>
08a6eb21 +0x89f:  mov    $0x1,%eax
08a6eb26 +0x8a4:  jmp    08a6eb2d <+0x8ab>
08a6eb28 +0x8a6:  mov    $0x0,%eax
08a6eb2d +0x8ab:  mov    %eax,-0x100(%ebp)
08a6eb33 +0x8b1:  lea    -0x100(%ebp),%eax
08a6eb39 +0x8b7:  mov    %eax,0x4(%esp)
08a6eb3d +0x8bb:  lea    -0x120(%ebp),%eax
08a6eb43 +0x8c1:  add    $0x8,%eax
08a6eb46 +0x8c4:  mov    %eax,(%esp)
08a6eb49 +0x8c7:  call   08a6f02a <_GLOBAL__I__ZN10QuickParty23getRandomBuffTypeByNameERKSs+0xd4>  ; global constructors keyed to QuickParty::getRandomBuffTypeByName(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)+0xd4
08a6eb4e +0x8cc:  jmp    08a6eaa4 <+0x822>
08a6eb53 +0x8d1:  nop
08a6eb54 +0x8d2:  lea    -0x120(%ebp),%eax
08a6eb5a +0x8d8:  mov    %eax,0x8(%esp)
08a6eb5e +0x8dc:  lea    -0x120(%ebp),%eax
08a6eb64 +0x8e2:  mov    %eax,0x4(%esp)
08a6eb68 +0x8e6:  lea    -0x6c(%ebp),%eax
08a6eb6b +0x8e9:  mov    %eax,(%esp)
08a6eb6e +0x8ec:  call   08a6f17c <_GLOBAL__I__ZN10QuickParty23getRandomBuffTypeByNameERKSs+0x226>  ; global constructors keyed to QuickParty::getRandomBuffTypeByName(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)+0x226
08a6eb73 +0x8f1:  mov    0xc(%ebp),%eax
08a6eb76 +0x8f4:  lea    0x38(%eax),%ecx
08a6eb79 +0x8f7:  lea    -0x74(%ebp),%eax
08a6eb7c +0x8fa:  lea    -0x6c(%ebp),%edx
08a6eb7f +0x8fd:  mov    %edx,0x8(%esp)
08a6eb83 +0x901:  mov    %ecx,0x4(%esp)
08a6eb87 +0x905:  mov    %eax,(%esp)
08a6eb8a +0x908:  call   08a6f1b4 <_GLOBAL__I__ZN10QuickParty23getRandomBuffTypeByNameERKSs+0x25e>  ; global constructors keyed to QuickParty::getRandomBuffTypeByName(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)+0x25e
08a6eb8f +0x90d:  sub    $0x4,%esp
08a6eb92 +0x910:  lea    -0x6c(%ebp),%eax
08a6eb95 +0x913:  mov    %eax,(%esp)
08a6eb98 +0x916:  call   0826e7ca <_GLOBAL__I__ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0xdf6>  ; global constructors keyed to QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)+0xdf6
08a6eb9d +0x91b:  jmp    08a6ebcf <+0x94d>
08a6eb9f +0x91d:  mov    %edx,%ebx
08a6eba1 +0x91f:  mov    %eax,%esi
08a6eba3 +0x921:  lea    -0x6c(%ebp),%eax
08a6eba6 +0x924:  mov    %eax,(%esp)
08a6eba9 +0x927:  call   0826e7ca <_GLOBAL__I__ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0xdf6>  ; global constructors keyed to QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)+0xdf6
08a6ebae +0x92c:  mov    %esi,%eax
08a6ebb0 +0x92e:  mov    %ebx,%edx
08a6ebb2 +0x930:  jmp    08a6ebb4 <+0x932>
08a6ebb4 +0x932:  mov    %edx,%ebx
08a6ebb6 +0x934:  mov    %eax,%esi
08a6ebb8 +0x936:  lea    -0x120(%ebp),%eax
08a6ebbe +0x93c:  mov    %eax,(%esp)
08a6ebc1 +0x93f:  call   0826e77e <_GLOBAL__I__ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0xdaa>  ; global constructors keyed to QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)+0xdaa
08a6ebc6 +0x944:  mov    %esi,%eax
08a6ebc8 +0x946:  mov    %ebx,%edx
08a6ebca +0x948:  jmp    08a6eeb5 <+0xc33>
08a6ebcf +0x94d:  lea    -0x120(%ebp),%eax
08a6ebd5 +0x953:  mov    %eax,(%esp)
08a6ebd8 +0x956:  call   0826e77e <_GLOBAL__I__ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0xdaa>  ; global constructors keyed to QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)+0xdaa
08a6ebdd +0x95b:  jmp    08a6e9ef <+0x76d>
08a6ebe2 +0x960:  jmp    08a6ee7f <+0xbfd>
08a6ebe7 +0x965:  movzbl &_ZZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataEE8__inited,%eax
08a6ebee +0x96c:  xor    $0x1,%eax
08a6ebf1 +0x96f:  test   %al,%al
08a6ebf3 +0x971:  je     08a6ec38 <+0x9b6>
08a6ebf5 +0x973:  movl   $0xb8,-0x44(%ebp)
08a6ebfc +0x97a:  lea    -0x44(%ebp),%eax
08a6ebff +0x97d:  mov    %eax,0x8(%esp)
08a6ec03 +0x981:  movl   $"[random reward prob]",0x4(%esp)
08a6ec0b +0x989:  lea    -0x4c(%ebp),%eax
08a6ec0e +0x98c:  mov    %eax,(%esp)
08a6ec11 +0x98f:  call   082ae10a <_GLOBAL__I__ZN4CLog5this_E+0xa531>  ; global constructors keyed to CLog::this_+0xa531
08a6ec16 +0x994:  lea    -0x54(%ebp),%eax
08a6ec19 +0x997:  lea    -0x4c(%ebp),%edx
08a6ec1c +0x99a:  mov    %edx,0x8(%esp)
08a6ec20 +0x99e:  movl   $&_ZZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataEE8__lookup,0x4(%esp)
08a6ec28 +0x9a6:  mov    %eax,(%esp)
08a6ec2b +0x9a9:  call   080f1600 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x682>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x682
08a6ec30 +0x9ae:  sub    $0x4,%esp
08a6ec33 +0x9b1:  jmp    08a6ecc7 <+0xa45>
08a6ec38 +0x9b6:  lea    -0xf0(%ebp),%eax
08a6ec3e +0x9bc:  mov    %eax,(%esp)
08a6ec41 +0x9bf:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
08a6ec46 +0x9c4:  mov    %al,-0xf1(%ebp)
08a6ec4c +0x9ca:  movzbl -0xf1(%ebp),%eax
08a6ec53 +0x9d1:  xor    $0x1,%eax
08a6ec56 +0x9d4:  test   %al,%al
08a6ec58 +0x9d6:  je     08a6ec60 <+0x9de>
08a6ec5a +0x9d8:  nop
08a6ec5b +0x9d9:  jmp    08a6ee7f <+0xbfd>
08a6ec60 +0x9de:  lea    -0xf0(%ebp),%eax
08a6ec66 +0x9e4:  mov    %eax,(%esp)
08a6ec69 +0x9e7:  call   08a6e100 <_ZN10QuickParty23getRandomBuffTypeByNameERKSs>  ; QuickParty::getRandomBuffTypeByName(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
08a6ec6e +0x9ec:  mov    %eax,-0x28(%ebp)
08a6ec71 +0x9ef:  cmpl   $0xa,-0x28(%ebp)
08a6ec75 +0x9f3:  jle    08a6ec7a <+0x9f8>
08a6ec77 +0x9f5:  nop
08a6ec78 +0x9f6:  jmp    08a6ec38 <+0x9b6>
08a6ec7a +0x9f8:  movl   $0x0,-0x24(%ebp)
08a6ec81 +0x9ff:  jmp    08a6ecb7 <+0xa35>
08a6ec83 +0xa01:  movl   $0x0,(%esp)
08a6ec8a +0xa08:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08a6ec8f +0xa0d:  mov    %eax,-0xf8(%ebp)
08a6ec95 +0xa13:  mov    -0x28(%ebp),%edx
08a6ec98 +0xa16:  mov    -0x24(%ebp),%esi
08a6ec9b +0xa19:  mov    -0xf8(%ebp),%ebx
08a6eca1 +0xa1f:  mov    0xc(%ebp),%ecx
08a6eca4 +0xa22:  mov    %edx,%eax
08a6eca6 +0xa24:  shl    $0x3,%eax
08a6eca9 +0xa27:  sub    %edx,%eax
08a6ecab +0xa29:  add    %esi,%eax
08a6ecad +0xa2b:  add    $0x14,%eax
08a6ecb0 +0xa2e:  mov    %ebx,(%ecx,%eax,4)
08a6ecb3 +0xa31:  addl   $0x1,-0x24(%ebp)
08a6ecb7 +0xa35:  cmpl   $0x6,-0x24(%ebp)
08a6ecbb +0xa39:  setle  %al
08a6ecbe +0xa3c:  test   %al,%al
08a6ecc0 +0xa3e:  jne    08a6ec83 <+0xa01>
08a6ecc2 +0xa40:  jmp    08a6ec38 <+0x9b6>
08a6ecc7 +0xa45:  movzbl &_ZZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataEE8__inited,%eax
08a6ecce +0xa4c:  xor    $0x1,%eax
08a6ecd1 +0xa4f:  test   %al,%al
08a6ecd3 +0xa51:  je     08a6ee5d <+0xbdb>
08a6ecd9 +0xa57:  movl   $0xce,-0x30(%ebp)
08a6ece0 +0xa5e:  lea    -0x30(%ebp),%eax
08a6ece3 +0xa61:  mov    %eax,0x8(%esp)
08a6ece7 +0xa65:  movl   $"[require party num]",0x4(%esp)
08a6ecef +0xa6d:  lea    -0x38(%ebp),%eax
08a6ecf2 +0xa70:  mov    %eax,(%esp)
08a6ecf5 +0xa73:  call   082ae052 <_GLOBAL__I__ZN4CLog5this_E+0xa479>  ; global constructors keyed to CLog::this_+0xa479
08a6ecfa +0xa78:  lea    -0x40(%ebp),%eax
08a6ecfd +0xa7b:  lea    -0x38(%ebp),%edx
08a6ed00 +0xa7e:  mov    %edx,0x8(%esp)
08a6ed04 +0xa82:  movl   $&_ZZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataEE8__lookup,0x4(%esp)
08a6ed0c +0xa8a:  mov    %eax,(%esp)
08a6ed0f +0xa8d:  call   080f1600 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x682>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x682
08a6ed14 +0xa92:  sub    $0x4,%esp
08a6ed17 +0xa95:  jmp    08a6ee7f <+0xbfd>
08a6ed1c +0xa9a:  movl   $0xffffffff,-0x20(%ebp)
08a6ed23 +0xaa1:  movl   $"[normal]",0x4(%esp)
08a6ed2b +0xaa9:  lea    -0xf0(%ebp),%eax
08a6ed31 +0xaaf:  mov    %eax,(%esp)
08a6ed34 +0xab2:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08a6ed39 +0xab7:  test   %al,%al
08a6ed3b +0xab9:  je     08a6ed46 <+0xac4>
08a6ed3d +0xabb:  movl   $0x0,-0x20(%ebp)
08a6ed44 +0xac2:  jmp    08a6ed6b <+0xae9>
08a6ed46 +0xac4:  movl   $"[ancient]",0x4(%esp)
08a6ed4e +0xacc:  lea    -0xf0(%ebp),%eax
08a6ed54 +0xad2:  mov    %eax,(%esp)
08a6ed57 +0xad5:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08a6ed5c +0xada:  test   %al,%al
08a6ed5e +0xadc:  je     08a6ee75 <+0xbf3>
08a6ed64 +0xae2:  movl   $0x1,-0x20(%ebp)
08a6ed6b +0xae9:  lea    -0xf0(%ebp),%eax
08a6ed71 +0xaef:  mov    %eax,(%esp)
08a6ed74 +0xaf2:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
08a6ed79 +0xaf7:  xor    $0x1,%eax
08a6ed7c +0xafa:  test   %al,%al
08a6ed7e +0xafc:  jne    08a6ee78 <+0xbf6>
08a6ed84 +0xb02:  movl   $0xffffffff,-0x1c(%ebp)
08a6ed8b +0xb09:  movl   $"[easy]",0x4(%esp)
08a6ed93 +0xb11:  lea    -0xf0(%ebp),%eax
08a6ed99 +0xb17:  mov    %eax,(%esp)
08a6ed9c +0xb1a:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08a6eda1 +0xb1f:  test   %al,%al
08a6eda3 +0xb21:  je     08a6edae <+0xb2c>
08a6eda5 +0xb23:  movl   $0x0,-0x1c(%ebp)
08a6edac +0xb2a:  jmp    08a6ee15 <+0xb93>
08a6edae +0xb2c:  movl   $"[medium]",0x4(%esp)
08a6edb6 +0xb34:  lea    -0xf0(%ebp),%eax
08a6edbc +0xb3a:  mov    %eax,(%esp)
08a6edbf +0xb3d:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08a6edc4 +0xb42:  test   %al,%al
08a6edc6 +0xb44:  je     08a6edd1 <+0xb4f>
08a6edc8 +0xb46:  movl   $0x1,-0x1c(%ebp)
08a6edcf +0xb4d:  jmp    08a6ee15 <+0xb93>
08a6edd1 +0xb4f:  movl   $"[hard]",0x4(%esp)
08a6edd9 +0xb57:  lea    -0xf0(%ebp),%eax
08a6eddf +0xb5d:  mov    %eax,(%esp)
08a6ede2 +0xb60:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08a6ede7 +0xb65:  test   %al,%al
08a6ede9 +0xb67:  je     08a6edf4 <+0xb72>
08a6edeb +0xb69:  movl   $0x2,-0x1c(%ebp)
08a6edf2 +0xb70:  jmp    08a6ee15 <+0xb93>
08a6edf4 +0xb72:  movl   $"[ultimate]",0x4(%esp)
08a6edfc +0xb7a:  lea    -0xf0(%ebp),%eax
08a6ee02 +0xb80:  mov    %eax,(%esp)
08a6ee05 +0xb83:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08a6ee0a +0xb88:  test   %al,%al
08a6ee0c +0xb8a:  je     08a6ee7b <+0xbf9>
08a6ee0e +0xb8c:  movl   $0x3,-0x1c(%ebp)
08a6ee15 +0xb93:  lea    -0xf8(%ebp),%eax
08a6ee1b +0xb99:  mov    %eax,(%esp)
08a6ee1e +0xb9c:  call   088bc424 <_Z7ScanIntPi>  ; ScanInt(int*)
08a6ee23 +0xba1:  xor    $0x1,%eax
08a6ee26 +0xba4:  test   %al,%al
08a6ee28 +0xba6:  jne    08a6ee7e <+0xbfc>
08a6ee2a +0xba8:  cmpl   $0x0,-0x20(%ebp)
08a6ee2e +0xbac:  js     08a6ee5d <+0xbdb>
08a6ee30 +0xbae:  cmpl   $0x1,-0x20(%ebp)
08a6ee34 +0xbb2:  jg     08a6ee5d <+0xbdb>
08a6ee36 +0xbb4:  cmpl   $0x0,-0x1c(%ebp)
08a6ee3a +0xbb8:  js     08a6ee5d <+0xbdb>
08a6ee3c +0xbba:  cmpl   $0x4,-0x1c(%ebp)
08a6ee40 +0xbbe:  jg     08a6ee5d <+0xbdb>
08a6ee42 +0xbc0:  mov    -0x20(%ebp),%ebx
08a6ee45 +0xbc3:  mov    -0x1c(%ebp),%ecx
08a6ee48 +0xbc6:  mov    -0xf8(%ebp),%edx
08a6ee4e +0xbcc:  mov    0xc(%ebp),%eax
08a6ee51 +0xbcf:  shl    $0x2,%ebx
08a6ee54 +0xbd2:  lea    (%ebx,%ecx,1),%ecx
08a6ee57 +0xbd5:  add    $0x68,%ecx
08a6ee5a +0xbd8:  mov    %edx,(%eax,%ecx,4)
08a6ee5d +0xbdb:  lea    -0xf0(%ebp),%eax
08a6ee63 +0xbe1:  mov    %eax,(%esp)
08a6ee66 +0xbe4:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
08a6ee6b +0xbe9:  test   %al,%al
08a6ee6d +0xbeb:  jne    08a6ed1c <+0xa9a>
08a6ee73 +0xbf1:  jmp    08a6ee7f <+0xbfd>
08a6ee75 +0xbf3:  nop
08a6ee76 +0xbf4:  jmp    08a6ee7f <+0xbfd>
08a6ee78 +0xbf6:  nop
08a6ee79 +0xbf7:  jmp    08a6ee7f <+0xbfd>
08a6ee7b +0xbf9:  nop
08a6ee7c +0xbfa:  jmp    08a6ee7f <+0xbfd>
08a6ee7e +0xbfc:  nop
08a6ee7f +0xbfd:  movzbl &_ZZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataEE8__inited,%eax
08a6ee86 +0xc04:  xor    $0x1,%eax
08a6ee89 +0xc07:  test   %al,%al
08a6ee8b +0xc09:  je     08a6eea5 <+0xc23>
08a6ee8d +0xc0b:  movl   $&_ZZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataEE11__init_lock,(%esp)
08a6ee94 +0xc12:  call   08ad3586 <_ZN8SpinLock5leaveEv>  ; SpinLock::leave()
08a6ee99 +0xc17:  movb   $0x1,&_ZZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataEE8__inited
08a6eea0 +0xc1e:  jmp    08a6e32a <+0xa8>
08a6eea5 +0xc23:  nop
08a6eea6 +0xc24:  jmp    08a6e309 <+0x87>
08a6eeab +0xc29:  nop
08a6eeac +0xc2a:  movzbl -0xf1(%ebp),%ebx
08a6eeb3 +0xc31:  jmp    08a6eecd <+0xc4b>
08a6eeb5 +0xc33:  mov    %edx,%ebx
08a6eeb7 +0xc35:  mov    %eax,%esi
08a6eeb9 +0xc37:  lea    -0xf0(%ebp),%eax
08a6eebf +0xc3d:  mov    %eax,(%esp)
08a6eec2 +0xc40:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08a6eec7 +0xc45:  mov    %esi,%eax
08a6eec9 +0xc47:  mov    %ebx,%edx
08a6eecb +0xc49:  jmp    08a6eedd <+0xc5b>
08a6eecd +0xc4b:  lea    -0xf0(%ebp),%eax
08a6eed3 +0xc51:  mov    %eax,(%esp)
08a6eed6 +0xc54:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08a6eedb +0xc59:  jmp    08a6eefb <+0xc79>
08a6eedd +0xc5b:  mov    %edx,%ebx
08a6eedf +0xc5d:  mov    %eax,%esi
08a6eee1 +0xc5f:  lea    -0xec(%ebp),%eax
08a6eee7 +0xc65:  mov    %eax,(%esp)
08a6eeea +0xc68:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08a6eeef +0xc6d:  mov    %esi,%eax
08a6eef1 +0xc6f:  mov    %ebx,%edx
08a6eef3 +0xc71:  mov    %eax,(%esp)
08a6eef6 +0xc74:  call   08ae3750 <_Unwind_Resume>
08a6eefb +0xc79:  lea    -0xec(%ebp),%eax
08a6ef01 +0xc7f:  mov    %eax,(%esp)
08a6ef04 +0xc82:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08a6ef09 +0xc87:  mov    %ebx,%eax
08a6ef0b +0xc89:  lea    -0xc(%ebp),%esp
08a6ef0e +0xc8c:  add    $0x0,%esp
08a6ef11 +0xc8f:  pop    %ebx
08a6ef12 +0xc90:  pop    %esi
08a6ef13 +0xc91:  pop    %edi
08a6ef14 +0xc92:  pop    %ebp
08a6ef15 +0xc93:  ret
```

## 反编译 C

```c
// QuickParty::importQuickPartyScript @ 0x8a6e282

/* QuickParty::importQuickPartyScript(char const*, QuickParty::QuickPartyData*) */

char QuickParty::importQuickPartyScript(char *param_1,QuickPartyData *param_2)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined1 *puVar5;
  char *pcVar6;
  undefined4 local_124;
  string asStack_120 [4];
  vector<QuickParty::LevelData,std::allocator<QuickParty::LevelData>> avStack_11c [12];
  int local_110;
  int local_10c;
  _Rb_tree_const_iterator<std::pair<char_const*const,int>> local_108 [4];
  undefined4 local_104;
  int local_100;
  int local_fc;
  bool local_f5;
  string local_f4;
  string local_f0;
  _Rb_tree_iterator local_ec [4];
  undefined4 local_e8;
  _Rb_tree_const_iterator<std::pair<char_const*const,int>> local_e4 [4];
  map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>> local_e0 [4];
  pair local_dc [8];
  pair<char_const*const,int> local_d4 [8];
  int local_cc;
  pair local_c8 [8];
  pair<char_const*const,int> local_c0 [8];
  int local_b8;
  pair local_b4 [8];
  pair<char_const*const,int> local_ac [8];
  int local_a4;
  pair local_a0 [8];
  pair<char_const*const,int> local_98 [8];
  int local_90;
  pair local_8c [8];
  pair<char_const*const,int> local_84 [8];
  int local_7c;
  pair local_78 [8];
  pair<QuickParty::RandomBuffType_const,QuickParty::LevelDataRandomReward> local_70 [24];
  pair local_58 [8];
  pair<char_const*const,int> local_50 [8];
  int local_48;
  pair local_44 [8];
  pair<char_const*const,int> local_3c [8];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  cVar1 = loadRDARScriptFile("",param_1);
  if (cVar1 == '\x01') {
    std::string::string((string *)&local_f0);
                    /* try { // try from 08a6e2c9 to 08a6e2db has its CatchHandler @ 08a6eedd */
    std::string::clear((string *)&local_f0);
    std::string::string((string *)&local_f4);
                    /* try { // try from 08a6e2e5 to 08a6e31e has its CatchHandler @ 08a6eeb5 */
    std::string::clear((string *)&local_f4);
    local_f5 = false;
    local_fc = 0;
    LevelData::LevelData((LevelData *)&local_104);
LAB_08a6e309:
    puVar5 = (_Rb_tree_const_iterator *)0x1;
    cVar2 = ScanType((string *)&local_f0,true);
    cVar1 = local_f5;
    if (cVar2 == '\x01') {
LAB_08a6e32a:
      do {
        if ((importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::__lookup == '\0') &&
           (iVar4 = __cxa_guard_acquire(&importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)
                                         ::__lookup,puVar5), iVar4 != 0)) {
                    /* try { // try from 08a6e357 to 08a6e35b has its CatchHandler @ 08a6e387 */
          std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::map
                    ((map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>
                      *)importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::__lookup);
          __cxa_guard_release(&importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::
                               __lookup);
          puVar5 = importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::__lookup;
          __cxa_atexit(std::
                       map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>
                       ::~map,importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::
                              __lookup,&__dso_handle);
        }
        if ((importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::__init_lock == '\0')
           && (iVar4 = __cxa_guard_acquire(&importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)
                                            ::__init_lock), iVar4 != 0)) {
                    /* try { // try from 08a6e3d1 to 08a6e3d5 has its CatchHandler @ 08a6e401 */
          SpinLock::SpinLock((SpinLock *)
                             &importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::
                              __init_lock);
          __cxa_guard_release(&importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::
                               __init_lock);
          puVar5 = (undefined1 *)
                   &importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::__init_lock;
          __cxa_atexit(SpinLock::~SpinLock,
                       &importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::__init_lock
                       ,&__dso_handle);
        }
        if (importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::__inited == '\0') {
          SpinLock::enter((SpinLock *)
                          &importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::
                           __init_lock);
          if (importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::__inited != '\0') {
            SpinLock::leave((SpinLock *)
                            &importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::
                             __init_lock);
            goto LAB_08a6e32a;
          }
          local_30 = 0;
        }
        else {
                    /* try { // try from 08a6e436 to 08a6ea7e has its CatchHandler @ 08a6eeb5 */
          local_e8 = std::string::c_str((string *)&local_f0);
          std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::find
                    ((char **)local_ec);
          std::_Rb_tree_const_iterator<std::pair<char_const*const,int>>::_Rb_tree_const_iterator
                    (local_108,local_ec);
          std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::end
                    (local_e0);
          std::_Rb_tree_const_iterator<std::pair<char_const*const,int>>::_Rb_tree_const_iterator
                    (local_e4,(_Rb_tree_iterator *)local_e0);
          puVar5 = local_e4;
          cVar1 = std::_Rb_tree_const_iterator<std::pair<char_const*const,int>>::operator!=
                            (local_108,(_Rb_tree_const_iterator *)puVar5);
          if (cVar1 == '\0') {
            local_30 = -1;
          }
          else {
            iVar4 = std::_Rb_tree_const_iterator<std::pair<char_const*const,int>>::operator->
                              (local_108);
            local_30 = *(int *)(iVar4 + 4);
          }
        }
        if (local_30 == 0x4d) {
LAB_08a6e67f:
          if (importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::__inited == '\x01') {
            while (local_fc = ScanInt(&local_f5), local_f5 == true) {
              puVar5 = (undefined1 *)&local_fc;
              std::vector<int,std::allocator<int>>::push_back
                        ((vector<int,std::allocator<int>> *)param_2,(int *)puVar5);
            }
          }
          else {
            local_a4 = 0x4d;
            std::pair<char_const*const,int>::pair<char_const(&)[16],int>
                      (local_ac,"[level section]",&local_a4);
            std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::
            insert(local_b4);
LAB_08a6e71b:
            if (importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::__inited == '\x01')
            {
              while( true ) {
                puVar5 = (_Rb_tree_const_iterator *)0x1;
                cVar1 = ScanType((string *)&local_f0,true);
                if (cVar1 == '\0') break;
                pcVar6 = "[/basic reward]";
                bVar3 = std::operator==(&local_f0,"[/basic reward]");
                puVar5 = pcVar6;
                if (bVar3) break;
                bVar3 = std::operator==(&local_f0,"[increase gold card]");
                if (bVar3) {
                  while (local_fc = ScanInt(&local_f5), local_f5 == true) {
                    local_100 = ScanInt((bool *)0x0);
                    local_fc = local_100;
                    local_f5 = (bool)ScanStr((string *)&local_f4);
                    if ((local_f5 == false) || (bVar3 = std::operator==(&local_f4,"%"), !bVar3)) {
                      local_104 = 0;
                    }
                    else {
                      local_104 = 1;
                    }
                    std::vector<QuickParty::LevelData,std::allocator<QuickParty::LevelData>>::
                    push_back((vector<QuickParty::LevelData,std::allocator<QuickParty::LevelData>> *
                              )(param_2 + 0x18),(LevelData *)&local_104);
                  }
                }
                else {
                  pcVar6 = "[hell ratio]";
                  bVar3 = std::operator==(&local_f0,"[hell ratio]");
                  if (bVar3) {
                    local_f5 = (bool)ScanStr((string *)&local_f4);
                    puVar5 = pcVar6;
                    if (local_f5 != true) break;
                    local_fc = ScanInt((bool *)0x0);
                    *(int *)(param_2 + 0x30) = local_fc;
                    local_fc = ScanInt((bool *)0x0);
                    *(int *)(param_2 + 0x34) = local_fc;
                    LevelDataHell::LevelDataHell((LevelDataHell *)&local_110);
                    while (local_fc = ScanInt(&local_f5), local_f5 == true) {
                      local_110 = ScanInt((bool *)0x0);
                      local_fc = local_110;
                      local_10c = ScanInt((bool *)0x0);
                      local_fc = local_10c;
                      std::
                      vector<QuickParty::LevelDataHell,std::allocator<QuickParty::LevelDataHell>>::
                      push_back((vector<QuickParty::LevelDataHell,std::allocator<QuickParty::LevelDataHell>>
                                 *)(param_2 + 0x24),(LevelDataHell *)&local_110);
                    }
                  }
                }
              }
            }
            else {
              local_90 = 0x59;
              std::pair<char_const*const,int>::pair<char_const(&)[15],int>
                        (local_98,"[basic reward]",&local_90);
              std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::
              insert(local_a0);
LAB_08a6e99a:
              if (importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::__inited ==
                  '\x01') {
                while( true ) {
                  puVar5 = (_Rb_tree_const_iterator *)0x1;
                  cVar1 = ScanType((string *)&local_f0,true);
                  if (cVar1 != '\x01') break;
                  pcVar6 = "[/random reward]";
                  bVar3 = std::operator==(&local_f0,"[/random reward]");
                  puVar5 = pcVar6;
                  if (bVar3) break;
                  pcVar6 = "[reward]";
                  bVar3 = std::operator==(&local_f0,"[reward]");
                  if (bVar3) {
                    local_f5 = (bool)ScanStr((string *)&local_f4);
                    puVar5 = pcVar6;
                    if (local_f5 != true) break;
                    LevelDataRandomReward::LevelDataRandomReward
                              ((LevelDataRandomReward *)&local_124);
                    /* try { // try from 08a6ea88 to 08a6eb72 has its CatchHandler @ 08a6ebb4 */
                    local_124 = getRandomBuffTypeByName((string *)&local_f4);
                    ScanStr(asStack_120);
                    while (local_fc = ScanInt(&local_f5), local_f5 == true) {
                      local_100 = ScanInt((bool *)0x0);
                      local_fc = local_100;
                      local_f5 = (bool)ScanStr((string *)&local_f4);
                      if ((local_f5 == false) || (bVar3 = std::operator==(&local_f4,"%"), !bVar3)) {
                        local_104 = 0;
                      }
                      else {
                        local_104 = 1;
                      }
                      std::vector<QuickParty::LevelData,std::allocator<QuickParty::LevelData>>::
                      push_back(avStack_11c,(LevelData *)&local_104);
                    }
                    std::pair<QuickParty::RandomBuffType_const,QuickParty::LevelDataRandomReward>::
                    pair<QuickParty::RandomBuffType&,QuickParty::LevelDataRandomReward&>
                              (local_70,(RandomBuffType *)&local_124,
                               (LevelDataRandomReward *)&local_124);
                    /* try { // try from 08a6eb8a to 08a6eb8e has its CatchHandler @ 08a6eb9f */
                    std::
                    map<QuickParty::RandomBuffType,QuickParty::LevelDataRandomReward,std::less<QuickParty::RandomBuffType>,std::allocator<std::pair<QuickParty::RandomBuffType_const,QuickParty::LevelDataRandomReward>>>
                    ::insert(local_78);
                    /* try { // try from 08a6eb98 to 08a6eb9c has its CatchHandler @ 08a6ebb4 */
                    std::pair<QuickParty::RandomBuffType_const,QuickParty::LevelDataRandomReward>::
                    ~pair(local_70);
                    /* try { // try from 08a6ebd8 to 08a6ee98 has its CatchHandler @ 08a6eeb5 */
                    LevelDataRandomReward::~LevelDataRandomReward
                              ((LevelDataRandomReward *)&local_124);
                  }
                }
              }
              else {
                local_7c = 0x8f;
                std::pair<char_const*const,int>::pair<char_const(&)[16],int>
                          (local_84,"[random reward]",&local_7c);
                puVar5 = importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::__lookup;
                std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>
                ::insert(local_8c);
LAB_08a6ebe7:
                if (importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::__inited !=
                    '\x01') {
                  local_48 = 0xb8;
                  std::pair<char_const*const,int>::pair<char_const(&)[21],int>
                            (local_50,"[random reward prob]",&local_48);
                  puVar5 = importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::__lookup
                  ;
                  std::
                  map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::
                  insert(local_58);
                  goto LAB_08a6ecc7;
                }
                while (local_f5 = (bool)ScanStr((string *)&local_f4), local_f5 == true) {
                  local_2c = getRandomBuffTypeByName((string *)&local_f4);
                  if (local_2c < 0xb) {
                    for (local_28 = 0; local_28 < 7; local_28 = local_28 + 1) {
                      local_fc = ScanInt((bool *)0x0);
                      *(int *)(param_2 + (local_2c * 7 + local_28 + 0x14) * 4) = local_fc;
                    }
                  }
                }
              }
            }
          }
        }
        else if (local_30 < 0x4e) {
          if (local_30 == 0x3e) {
LAB_08a6e579:
            if (importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::__inited == '\x01')
            {
              cVar1 = '\x01';
              break;
            }
            local_cc = 0x3e;
            std::pair<char_const*const,int>::pair<char_const(&)[15],int>
                      (local_d4,"[/quick party]",&local_cc);
            puVar5 = importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::__lookup;
            std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::
            insert(local_dc);
          }
          else if (local_30 != 0x41) {
            if (local_30 != 0) goto LAB_08a6ee7f;
            goto LAB_08a6e579;
          }
          if (importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::__inited != '\x01') {
            local_b8 = 0x41;
            std::pair<char_const*const,int>::pair<char_const(&)[23],int>
                      (local_c0,"[unable to quickparty]",&local_b8);
            puVar5 = importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::__lookup;
            std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::
            insert(local_c8);
            goto LAB_08a6e67f;
          }
          while (local_fc = ScanInt(&local_f5), local_f5 == true) {
            puVar5 = (undefined1 *)&local_fc;
            std::vector<int,std::allocator<int>>::push_back
                      ((vector<int,std::allocator<int>> *)(param_2 + 0xc),(int *)puVar5);
          }
        }
        else {
          if (local_30 == 0x8f) goto LAB_08a6e99a;
          if (local_30 < 0x90) {
            if (local_30 != 0x59) goto LAB_08a6ee7f;
            goto LAB_08a6e71b;
          }
          if (local_30 == 0xb8) goto LAB_08a6ebe7;
          if (local_30 != 0xce) goto LAB_08a6ee7f;
LAB_08a6ecc7:
          if (importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::__inited == '\x01') {
            while (cVar1 = ScanStr((string *)&local_f4), cVar1 != '\0') {
              local_24 = -1;
              pcVar6 = "[normal]";
              bVar3 = std::operator==(&local_f4,"[normal]");
              if (bVar3) {
                local_24 = 0;
                puVar5 = pcVar6;
              }
              else {
                pcVar6 = "[ancient]";
                bVar3 = std::operator==(&local_f4,"[ancient]");
                puVar5 = pcVar6;
                if (!bVar3) break;
                local_24 = 1;
              }
              cVar1 = ScanStr((string *)&local_f4);
              if (cVar1 != '\x01') break;
              local_20 = -1;
              pcVar6 = "[easy]";
              bVar3 = std::operator==(&local_f4,"[easy]");
              if (bVar3) {
                local_20 = 0;
                puVar5 = pcVar6;
              }
              else {
                pcVar6 = "[medium]";
                bVar3 = std::operator==(&local_f4,"[medium]");
                if (bVar3) {
                  local_20 = 1;
                  puVar5 = pcVar6;
                }
                else {
                  pcVar6 = "[hard]";
                  bVar3 = std::operator==(&local_f4,"[hard]");
                  if (bVar3) {
                    local_20 = 2;
                    puVar5 = pcVar6;
                  }
                  else {
                    pcVar6 = "[ultimate]";
                    bVar3 = std::operator==(&local_f4,"[ultimate]");
                    puVar5 = pcVar6;
                    if (!bVar3) break;
                    local_20 = 3;
                  }
                }
              }
              cVar1 = ScanInt(&local_fc);
              if (cVar1 != '\x01') break;
              if ((((-1 < local_24) && (local_24 < 2)) && (-1 < local_20)) && (local_20 < 5)) {
                *(int *)(param_2 + (local_24 * 4 + local_20 + 0x68) * 4) = local_fc;
              }
            }
          }
          else {
            local_34 = 0xce;
            std::pair<char_const*const,int>::pair<char_const(&)[20],int>
                      (local_3c,"[require party num]",&local_34);
            puVar5 = importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::__lookup;
            std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::
            insert(local_44);
          }
        }
LAB_08a6ee7f:
        if (importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::__inited == '\x01')
        goto LAB_08a6e309;
        SpinLock::leave((SpinLock *)
                        &importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::
                         __init_lock);
        importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::__inited = '\x01';
      } while( true );
    }
                    /* try { // try from 08a6eed6 to 08a6eeda has its CatchHandler @ 08a6eedd */
    std::string::~string((string *)&local_f4);
    std::string::~string((string *)&local_f0);
  }
  else {
    cVar1 = '\0';
  }
  return cVar1;
}
```
