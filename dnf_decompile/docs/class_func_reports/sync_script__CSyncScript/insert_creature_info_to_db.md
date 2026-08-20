# insert_creature_info_to_db

`_ZN11sync_script11CSyncScript26insert_creature_info_to_dbEjPK14CreatureScriptPKcS5_`

`sync_script::CSyncScript::insert_creature_info_to_db(unsigned int, CreatureScript const*, char const*, char const*)`

| 类 | 地址 |
|---|---|
| `sync_script::CSyncScript` | `0x08624414` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08624414  _ZN11sync_script11CSyncScript26insert_creature_info_to_dbEjPK14CreatureScriptPKcS5_
#           sync_script::CSyncScript::insert_creature_info_to_db(unsigned int, CreatureScript const*, char const*, char const*)
# range [0x08624414, 0x08624b09]
08624414 +0x000:  push   %ebp
08624415 +0x001:  mov    %esp,%ebp
08624417 +0x003:  push   %edi
08624418 +0x004:  push   %esi
08624419 +0x005:  push   %ebx
0862441a +0x006:  sub    $0xc1c,%esp
08624420 +0x00c:  mov    0x8(%ebp),%eax
08624423 +0x00f:  movzbl (%eax),%eax
08624426 +0x012:  xor    $0x1,%eax
08624429 +0x015:  test   %al,%al
0862442b +0x017:  je     08624437 <+0x23>
0862442d +0x019:  mov    $0x1,%ebx
08624432 +0x01e:  jmp    08624afd <+0x6e9>
08624437 +0x023:  movl   $0x0,-0x58(%ebp)
0862443e +0x02a:  movl   $0x0,-0x20(%ebp)
08624445 +0x031:  jmp    08624461 <+0x4d>
08624447 +0x033:  mov    -0x20(%ebp),%eax
0862444a +0x036:  mov    -0x20(%ebp),%ecx
0862444d +0x039:  mov    0x10(%ebp),%edx
08624450 +0x03c:  add    $0x14,%ecx
08624453 +0x03f:  mov    (%edx,%ecx,4),%edx
08624456 +0x042:  add    $0x30,%edx
08624459 +0x045:  mov    %dl,-0x58(%ebp,%eax,1)
0862445d +0x049:  addl   $0x1,-0x20(%ebp)
08624461 +0x04d:  mov    -0x20(%ebp),%eax
08624464 +0x050:  cmp    $0x2,%eax
08624467 +0x053:  setbe  %al
0862446a +0x056:  test   %al,%al
0862446c +0x058:  jne    08624447 <+0x33>
0862446e +0x05a:  lea    -0x50(%ebp),%eax
08624471 +0x05d:  mov    %eax,(%esp)
08624474 +0x060:  call   08375f58 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xff24>  ; global constructors keyed to CServerEvent::m_nExpRate+0xff24
08624479 +0x065:  mov    0x10(%ebp),%eax
0862447c +0x068:  lea    0x14c(%eax),%edx
08624482 +0x06e:  lea    -0x4c(%ebp),%eax
08624485 +0x071:  mov    %edx,0x4(%esp)
08624489 +0x075:  mov    %eax,(%esp)
0862448c +0x078:  call   080cd37a <_GLOBAL__I__ZN10BingoEventC2Ev+0x21c7>  ; global constructors keyed to BingoEvent::BingoEvent()+0x21c7
08624491 +0x07d:  sub    $0x4,%esp
08624494 +0x080:  mov    0x10(%ebp),%eax
08624497 +0x083:  lea    0x14c(%eax),%edx
0862449d +0x089:  lea    -0x48(%ebp),%eax
086244a0 +0x08c:  mov    %edx,0x4(%esp)
086244a4 +0x090:  mov    %eax,(%esp)
086244a7 +0x093:  call   080cd34e <_GLOBAL__I__ZN10BingoEventC2Ev+0x219b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x219b
086244ac +0x098:  sub    $0x4,%esp
086244af +0x09b:  lea    -0x54(%ebp),%eax
086244b2 +0x09e:  lea    -0x50(%ebp),%edx
086244b5 +0x0a1:  mov    %edx,0xc(%esp)
086244b9 +0x0a5:  mov    -0x4c(%ebp),%edx
086244bc +0x0a8:  mov    %edx,0x8(%esp)
086244c0 +0x0ac:  mov    -0x48(%ebp),%edx
086244c3 +0x0af:  mov    %edx,0x4(%esp)
086244c7 +0x0b3:  mov    %eax,(%esp)
086244ca +0x0b6:  call   08628e7a <_GLOBAL__I__Z22GetSocketTypeCharactert+0x24d8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x24d8
086244cf +0x0bb:  sub    $0x4,%esp
086244d2 +0x0be:  lea    -0x5c(%ebp),%eax
086244d5 +0x0c1:  lea    -0x54(%ebp),%edx
086244d8 +0x0c4:  mov    %edx,0x4(%esp)
086244dc +0x0c8:  mov    %eax,(%esp)
086244df +0x0cb:  call   086272c0 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x91e>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x91e
086244e4 +0x0d0:  sub    $0x4,%esp
086244e7 +0x0d3:  lea    -0x54(%ebp),%eax
086244ea +0x0d6:  mov    %eax,(%esp)
086244ed +0x0d9:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
086244f2 +0x0de:  jmp    08624539 <+0x125>
086244f4 +0x0e0:  mov    %edx,%ebx
086244f6 +0x0e2:  mov    %eax,%esi
086244f8 +0x0e4:  lea    -0x54(%ebp),%eax
086244fb +0x0e7:  mov    %eax,(%esp)
086244fe +0x0ea:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08624503 +0x0ef:  mov    %esi,%eax
08624505 +0x0f1:  mov    %ebx,%edx
08624507 +0x0f3:  jmp    0862451e <+0x10a>
08624509 +0x0f5:  mov    %edx,%ebx
0862450b +0x0f7:  mov    %eax,%esi
0862450d +0x0f9:  lea    -0x5c(%ebp),%eax
08624510 +0x0fc:  mov    %eax,(%esp)
08624513 +0x0ff:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08624518 +0x104:  mov    %esi,%eax
0862451a +0x106:  mov    %ebx,%edx
0862451c +0x108:  jmp    0862451e <+0x10a>
0862451e +0x10a:  mov    %edx,%ebx
08624520 +0x10c:  mov    %eax,%esi
08624522 +0x10e:  lea    -0x50(%ebp),%eax
08624525 +0x111:  mov    %eax,(%esp)
08624528 +0x114:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
0862452d +0x119:  mov    %esi,%eax
0862452f +0x11b:  mov    %ebx,%edx
08624531 +0x11d:  mov    %eax,(%esp)
08624534 +0x120:  call   08ae3750 <_Unwind_Resume>
08624539 +0x125:  lea    -0x50(%ebp),%eax
0862453c +0x128:  mov    %eax,(%esp)
0862453f +0x12b:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08624544 +0x130:  lea    -0x40(%ebp),%eax
08624547 +0x133:  mov    %eax,(%esp)
0862454a +0x136:  call   08375f58 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xff24>  ; global constructors keyed to CServerEvent::m_nExpRate+0xff24
0862454f +0x13b:  mov    0x10(%ebp),%eax
08624552 +0x13e:  lea    0x134(%eax),%edx
08624558 +0x144:  lea    -0x3c(%ebp),%eax
0862455b +0x147:  mov    %edx,0x4(%esp)
0862455f +0x14b:  mov    %eax,(%esp)
08624562 +0x14e:  call   080cd37a <_GLOBAL__I__ZN10BingoEventC2Ev+0x21c7>  ; global constructors keyed to BingoEvent::BingoEvent()+0x21c7
08624567 +0x153:  sub    $0x4,%esp
0862456a +0x156:  mov    0x10(%ebp),%eax
0862456d +0x159:  lea    0x134(%eax),%edx
08624573 +0x15f:  lea    -0x38(%ebp),%eax
08624576 +0x162:  mov    %edx,0x4(%esp)
0862457a +0x166:  mov    %eax,(%esp)
0862457d +0x169:  call   080cd34e <_GLOBAL__I__ZN10BingoEventC2Ev+0x219b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x219b
08624582 +0x16e:  sub    $0x4,%esp
08624585 +0x171:  lea    -0x44(%ebp),%eax
08624588 +0x174:  lea    -0x40(%ebp),%edx
0862458b +0x177:  mov    %edx,0xc(%esp)
0862458f +0x17b:  mov    -0x3c(%ebp),%edx
08624592 +0x17e:  mov    %edx,0x8(%esp)
08624596 +0x182:  mov    -0x38(%ebp),%edx
08624599 +0x185:  mov    %edx,0x4(%esp)
0862459d +0x189:  mov    %eax,(%esp)
086245a0 +0x18c:  call   08628e7a <_GLOBAL__I__Z22GetSocketTypeCharactert+0x24d8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x24d8
086245a5 +0x191:  sub    $0x4,%esp
086245a8 +0x194:  lea    -0x60(%ebp),%eax
086245ab +0x197:  lea    -0x44(%ebp),%edx
086245ae +0x19a:  mov    %edx,0x4(%esp)
086245b2 +0x19e:  mov    %eax,(%esp)
086245b5 +0x1a1:  call   086272c0 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x91e>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x91e
086245ba +0x1a6:  sub    $0x4,%esp
086245bd +0x1a9:  lea    -0x44(%ebp),%eax
086245c0 +0x1ac:  mov    %eax,(%esp)
086245c3 +0x1af:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
086245c8 +0x1b4:  jmp    0862460c <+0x1f8>
086245ca +0x1b6:  mov    %edx,%ebx
086245cc +0x1b8:  mov    %eax,%esi
086245ce +0x1ba:  lea    -0x44(%ebp),%eax
086245d1 +0x1bd:  mov    %eax,(%esp)
086245d4 +0x1c0:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
086245d9 +0x1c5:  mov    %esi,%eax
086245db +0x1c7:  mov    %ebx,%edx
086245dd +0x1c9:  jmp    086245f4 <+0x1e0>
086245df +0x1cb:  mov    %edx,%ebx
086245e1 +0x1cd:  mov    %eax,%esi
086245e3 +0x1cf:  lea    -0x60(%ebp),%eax
086245e6 +0x1d2:  mov    %eax,(%esp)
086245e9 +0x1d5:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086245ee +0x1da:  mov    %esi,%eax
086245f0 +0x1dc:  mov    %ebx,%edx
086245f2 +0x1de:  jmp    086245f4 <+0x1e0>
086245f4 +0x1e0:  mov    %edx,%ebx
086245f6 +0x1e2:  mov    %eax,%esi
086245f8 +0x1e4:  lea    -0x40(%ebp),%eax
086245fb +0x1e7:  mov    %eax,(%esp)
086245fe +0x1ea:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08624603 +0x1ef:  mov    %esi,%eax
08624605 +0x1f1:  mov    %ebx,%edx
08624607 +0x1f3:  jmp    08624ad7 <+0x6c3>
0862460c +0x1f8:  lea    -0x40(%ebp),%eax
0862460f +0x1fb:  mov    %eax,(%esp)
08624612 +0x1fe:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08624617 +0x203:  lea    -0x30(%ebp),%eax
0862461a +0x206:  mov    %eax,(%esp)
0862461d +0x209:  call   08375f58 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xff24>  ; global constructors keyed to CServerEvent::m_nExpRate+0xff24
08624622 +0x20e:  mov    0x10(%ebp),%eax
08624625 +0x211:  lea    0x140(%eax),%edx
0862462b +0x217:  lea    -0x2c(%ebp),%eax
0862462e +0x21a:  mov    %edx,0x4(%esp)
08624632 +0x21e:  mov    %eax,(%esp)
08624635 +0x221:  call   080cd37a <_GLOBAL__I__ZN10BingoEventC2Ev+0x21c7>  ; global constructors keyed to BingoEvent::BingoEvent()+0x21c7
0862463a +0x226:  sub    $0x4,%esp
0862463d +0x229:  mov    0x10(%ebp),%eax
08624640 +0x22c:  lea    0x140(%eax),%edx
08624646 +0x232:  lea    -0x28(%ebp),%eax
08624649 +0x235:  mov    %edx,0x4(%esp)
0862464d +0x239:  mov    %eax,(%esp)
08624650 +0x23c:  call   080cd34e <_GLOBAL__I__ZN10BingoEventC2Ev+0x219b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x219b
08624655 +0x241:  sub    $0x4,%esp
08624658 +0x244:  lea    -0x34(%ebp),%eax
0862465b +0x247:  lea    -0x30(%ebp),%edx
0862465e +0x24a:  mov    %edx,0xc(%esp)
08624662 +0x24e:  mov    -0x2c(%ebp),%edx
08624665 +0x251:  mov    %edx,0x8(%esp)
08624669 +0x255:  mov    -0x28(%ebp),%edx
0862466c +0x258:  mov    %edx,0x4(%esp)
08624670 +0x25c:  mov    %eax,(%esp)
08624673 +0x25f:  call   08628e7a <_GLOBAL__I__Z22GetSocketTypeCharactert+0x24d8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x24d8
08624678 +0x264:  sub    $0x4,%esp
0862467b +0x267:  lea    -0x64(%ebp),%eax
0862467e +0x26a:  lea    -0x34(%ebp),%edx
08624681 +0x26d:  mov    %edx,0x4(%esp)
08624685 +0x271:  mov    %eax,(%esp)
08624688 +0x274:  call   086272c0 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x91e>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x91e
0862468d +0x279:  sub    $0x4,%esp
08624690 +0x27c:  lea    -0x34(%ebp),%eax
08624693 +0x27f:  mov    %eax,(%esp)
08624696 +0x282:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
0862469b +0x287:  jmp    086246df <+0x2cb>
0862469d +0x289:  mov    %edx,%ebx
0862469f +0x28b:  mov    %eax,%esi
086246a1 +0x28d:  lea    -0x34(%ebp),%eax
086246a4 +0x290:  mov    %eax,(%esp)
086246a7 +0x293:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
086246ac +0x298:  mov    %esi,%eax
086246ae +0x29a:  mov    %ebx,%edx
086246b0 +0x29c:  jmp    086246c7 <+0x2b3>
086246b2 +0x29e:  mov    %edx,%ebx
086246b4 +0x2a0:  mov    %eax,%esi
086246b6 +0x2a2:  lea    -0x64(%ebp),%eax
086246b9 +0x2a5:  mov    %eax,(%esp)
086246bc +0x2a8:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086246c1 +0x2ad:  mov    %esi,%eax
086246c3 +0x2af:  mov    %ebx,%edx
086246c5 +0x2b1:  jmp    086246c7 <+0x2b3>
086246c7 +0x2b3:  mov    %edx,%ebx
086246c9 +0x2b5:  mov    %eax,%esi
086246cb +0x2b7:  lea    -0x30(%ebp),%eax
086246ce +0x2ba:  mov    %eax,(%esp)
086246d1 +0x2bd:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
086246d6 +0x2c2:  mov    %esi,%eax
086246d8 +0x2c4:  mov    %ebx,%edx
086246da +0x2c6:  jmp    08624ab5 <+0x6a1>
086246df +0x2cb:  lea    -0x30(%ebp),%eax
086246e2 +0x2ce:  mov    %eax,(%esp)
086246e5 +0x2d1:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
086246ea +0x2d6:  lea    -0x90(%ebp),%ebx
086246f0 +0x2dc:  mov    $0x0,%eax
086246f5 +0x2e1:  mov    $0xb,%edx
086246fa +0x2e6:  mov    %ebx,%edi
086246fc +0x2e8:  mov    %edx,%ecx
086246fe +0x2ea:  rep stos %eax,%es:(%edi)
08624700 +0x2ec:  mov    0x10(%ebp),%eax
08624703 +0x2ef:  add    $0x4,%eax
08624706 +0x2f2:  mov    %eax,(%esp)
08624709 +0x2f5:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0862470e +0x2fa:  mov    %eax,-0x90(%ebp)
08624714 +0x300:  lea    -0x58(%ebp),%eax
08624717 +0x303:  mov    %eax,-0x8c(%ebp)
0862471d +0x309:  mov    0x14(%ebp),%eax
08624720 +0x30c:  mov    %eax,-0x88(%ebp)
08624726 +0x312:  mov    0x18(%ebp),%eax
08624729 +0x315:  mov    %eax,-0x84(%ebp)
0862472f +0x31b:  lea    -0x5c(%ebp),%eax
08624732 +0x31e:  mov    %eax,(%esp)
08624735 +0x321:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0862473a +0x326:  mov    %eax,-0x80(%ebp)
0862473d +0x329:  mov    0x10(%ebp),%eax
08624740 +0x32c:  add    $0x128,%eax
08624745 +0x331:  mov    %eax,(%esp)
08624748 +0x334:  call   08237a90 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd13a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd13a
0862474d +0x339:  test   %eax,%eax
0862474f +0x33b:  je     08624773 <+0x35f>
08624751 +0x33d:  mov    0x10(%ebp),%eax
08624754 +0x340:  add    $0x128,%eax
08624759 +0x345:  movl   $0x0,0x4(%esp)
08624761 +0x34d:  mov    %eax,(%esp)
08624764 +0x350:  call   08628ee0 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x253e>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x253e
08624769 +0x355:  mov    %eax,(%esp)
0862476c +0x358:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08624771 +0x35d:  jmp    08624778 <+0x364>
08624773 +0x35f:  mov    $"",%eax
08624778 +0x364:  mov    %eax,-0x7c(%ebp)
0862477b +0x367:  mov    0x10(%ebp),%eax
0862477e +0x36a:  add    $0x128,%eax
08624783 +0x36f:  mov    %eax,(%esp)
08624786 +0x372:  call   08237a90 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd13a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd13a
0862478b +0x377:  cmp    $0x1,%eax
0862478e +0x37a:  jbe    086247b2 <+0x39e>
08624790 +0x37c:  mov    0x10(%ebp),%eax
08624793 +0x37f:  add    $0x128,%eax
08624798 +0x384:  movl   $0x1,0x4(%esp)
086247a0 +0x38c:  mov    %eax,(%esp)
086247a3 +0x38f:  call   08628ee0 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x253e>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x253e
086247a8 +0x394:  mov    %eax,(%esp)
086247ab +0x397:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
086247b0 +0x39c:  jmp    086247b7 <+0x3a3>
086247b2 +0x39e:  mov    $"",%eax
086247b7 +0x3a3:  mov    %eax,-0x78(%ebp)
086247ba +0x3a6:  mov    0x10(%ebp),%eax
086247bd +0x3a9:  add    $0x128,%eax
086247c2 +0x3ae:  mov    %eax,(%esp)
086247c5 +0x3b1:  call   08237a90 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd13a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd13a
086247ca +0x3b6:  cmp    $0x2,%eax
086247cd +0x3b9:  jbe    086247f1 <+0x3dd>
086247cf +0x3bb:  mov    0x10(%ebp),%eax
086247d2 +0x3be:  add    $0x128,%eax
086247d7 +0x3c3:  movl   $0x2,0x4(%esp)
086247df +0x3cb:  mov    %eax,(%esp)
086247e2 +0x3ce:  call   08628ee0 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x253e>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x253e
086247e7 +0x3d3:  mov    %eax,(%esp)
086247ea +0x3d6:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
086247ef +0x3db:  jmp    086247f6 <+0x3e2>
086247f1 +0x3dd:  mov    $"",%eax
086247f6 +0x3e2:  mov    %eax,-0x74(%ebp)
086247f9 +0x3e5:  mov    0x10(%ebp),%eax
086247fc +0x3e8:  add    $0x128,%eax
08624801 +0x3ed:  mov    %eax,(%esp)
08624804 +0x3f0:  call   08237a90 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd13a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd13a
08624809 +0x3f5:  cmp    $0x3,%eax
0862480c +0x3f8:  jbe    08624830 <+0x41c>
0862480e +0x3fa:  mov    0x10(%ebp),%eax
08624811 +0x3fd:  add    $0x128,%eax
08624816 +0x402:  movl   $0x3,0x4(%esp)
0862481e +0x40a:  mov    %eax,(%esp)
08624821 +0x40d:  call   08628ee0 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x253e>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x253e
08624826 +0x412:  mov    %eax,(%esp)
08624829 +0x415:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0862482e +0x41a:  jmp    08624835 <+0x421>
08624830 +0x41c:  mov    $"",%eax
08624835 +0x421:  mov    %eax,-0x70(%ebp)
08624838 +0x424:  lea    -0x60(%ebp),%eax
0862483b +0x427:  mov    %eax,(%esp)
0862483e +0x42a:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08624843 +0x42f:  mov    %eax,-0x6c(%ebp)
08624846 +0x432:  lea    -0x64(%ebp),%eax
08624849 +0x435:  mov    %eax,(%esp)
0862484c +0x438:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08624851 +0x43d:  mov    %eax,-0x68(%ebp)
08624854 +0x440:  lea    -0xb90(%ebp),%ebx
0862485a +0x446:  mov    $0x0,%eax
0862485f +0x44b:  mov    $0x2c0,%edx
08624864 +0x450:  mov    %ebx,%edi
08624866 +0x452:  mov    %edx,%ecx
08624868 +0x454:  rep stos %eax,%es:(%edi)
0862486a +0x456:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0862486f +0x45b:  movl   $0x0,0x8(%esp)
08624877 +0x463:  movl   $0x5,0x4(%esp)
0862487f +0x46b:  mov    %eax,(%esp)
08624882 +0x46e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08624887 +0x473:  mov    %eax,-0x24(%ebp)
0862488a +0x476:  movl   $0x0,-0x1c(%ebp)
08624891 +0x47d:  jmp    086248c4 <+0x4b0>
08624893 +0x47f:  mov    -0x1c(%ebp),%edx
08624896 +0x482:  lea    -0xb90(%ebp),%eax
0862489c +0x488:  shl    $0x8,%edx
0862489f +0x48b:  add    %edx,%eax
086248a1 +0x48d:  mov    %eax,%edx
086248a3 +0x48f:  mov    -0x1c(%ebp),%eax
086248a6 +0x492:  mov    -0x90(%ebp,%eax,4),%eax
086248ad +0x499:  mov    %edx,0x8(%esp)
086248b1 +0x49d:  mov    %eax,0x4(%esp)
086248b5 +0x4a1:  mov    -0x24(%ebp),%eax
086248b8 +0x4a4:  mov    %eax,(%esp)
086248bb +0x4a7:  call   0861cc47 <_Z15GetEscapeStringP5MySQLPKcPc>  ; GetEscapeString(MySQL*, char const*, char*)
086248c0 +0x4ac:  addl   $0x1,-0x1c(%ebp)
086248c4 +0x4b0:  mov    -0x1c(%ebp),%eax
086248c7 +0x4b3:  cmp    $0xa,%eax
086248ca +0x4b6:  setbe  %al
086248cd +0x4b9:  test   %al,%al
086248cf +0x4bb:  jne    08624893 <+0x47f>
086248d1 +0x4bd:  mov    0x10(%ebp),%eax
086248d4 +0x4c0:  mov    0x17c(%eax),%eax
086248da +0x4c6:  mov    %eax,-0xbc4(%ebp)
086248e0 +0x4cc:  mov    0x10(%ebp),%eax
086248e3 +0x4cf:  mov    0x178(%eax),%eax
086248e9 +0x4d5:  mov    %eax,-0xbc0(%ebp)
086248ef +0x4db:  lea    -0xb90(%ebp),%eax
086248f5 +0x4e1:  add    $0xa00,%eax
086248fa +0x4e6:  mov    %eax,-0xbbc(%ebp)
08624900 +0x4ec:  lea    -0xb90(%ebp),%eax
08624906 +0x4f2:  add    $0x900,%eax
0862490b +0x4f7:  mov    %eax,-0xbb8(%ebp)
08624911 +0x4fd:  lea    -0xb90(%ebp),%eax
08624917 +0x503:  add    $0x800,%eax
0862491c +0x508:  mov    %eax,-0xbb4(%ebp)
08624922 +0x50e:  lea    -0xb90(%ebp),%eax
08624928 +0x514:  add    $0x700,%eax
0862492d +0x519:  mov    %eax,-0xbb0(%ebp)
08624933 +0x51f:  lea    -0xb90(%ebp),%eax
08624939 +0x525:  add    $0x600,%eax
0862493e +0x52a:  mov    %eax,-0xbac(%ebp)
08624944 +0x530:  lea    -0xb90(%ebp),%eax
0862494a +0x536:  add    $0x500,%eax
0862494f +0x53b:  mov    %eax,-0xba8(%ebp)
08624955 +0x541:  lea    -0xb90(%ebp),%eax
0862495b +0x547:  add    $0x400,%eax
08624960 +0x54c:  mov    %eax,-0xba4(%ebp)
08624966 +0x552:  lea    -0xb90(%ebp),%eax
0862496c +0x558:  add    $0x300,%eax
08624971 +0x55d:  mov    %eax,-0xba0(%ebp)
08624977 +0x563:  lea    -0xb90(%ebp),%eax
0862497d +0x569:  add    $0x200,%eax
08624982 +0x56e:  mov    %eax,-0xb9c(%ebp)
08624988 +0x574:  mov    0x10(%ebp),%eax
0862498b +0x577:  mov    0x5c(%eax),%esi
0862498e +0x57a:  lea    -0xb90(%ebp),%eax
08624994 +0x580:  lea    0x100(%eax),%edi
0862499a +0x586:  mov    0x10(%ebp),%eax
0862499d +0x589:  mov    0x20(%eax),%ebx
086249a0 +0x58c:  mov    0x10(%ebp),%eax
086249a3 +0x58f:  mov    0x1c(%eax),%ecx
086249a6 +0x592:  lea    -0xb90(%ebp),%edx
086249ac +0x598:  mov    0x10(%ebp),%eax
086249af +0x59b:  mov    (%eax),%eax
086249b1 +0x59d:  mov    %eax,-0xbcc(%ebp)
086249b7 +0x5a3:  mov    -0xbc4(%ebp),%eax
086249bd +0x5a9:  mov    %eax,0x4c(%esp)
086249c1 +0x5ad:  mov    -0xbc0(%ebp),%eax
086249c7 +0x5b3:  mov    %eax,0x48(%esp)
086249cb +0x5b7:  mov    -0xbbc(%ebp),%eax
086249d1 +0x5bd:  mov    %eax,0x44(%esp)
086249d5 +0x5c1:  mov    -0xbb8(%ebp),%eax
086249db +0x5c7:  mov    %eax,0x40(%esp)
086249df +0x5cb:  mov    -0xbb4(%ebp),%eax
086249e5 +0x5d1:  mov    %eax,0x3c(%esp)
086249e9 +0x5d5:  mov    -0xbb0(%ebp),%eax
086249ef +0x5db:  mov    %eax,0x38(%esp)
086249f3 +0x5df:  mov    -0xbac(%ebp),%eax
086249f9 +0x5e5:  mov    %eax,0x34(%esp)
086249fd +0x5e9:  mov    -0xba8(%ebp),%eax
08624a03 +0x5ef:  mov    %eax,0x30(%esp)
08624a07 +0x5f3:  mov    -0xba4(%ebp),%eax
08624a0d +0x5f9:  mov    %eax,0x2c(%esp)
08624a11 +0x5fd:  mov    -0xba0(%ebp),%eax
08624a17 +0x603:  mov    %eax,0x28(%esp)
08624a1b +0x607:  mov    -0xb9c(%ebp),%eax
08624a21 +0x60d:  mov    %eax,0x24(%esp)
08624a25 +0x611:  mov    %esi,0x20(%esp)
08624a29 +0x615:  mov    %edi,0x1c(%esp)
08624a2d +0x619:  mov    %ebx,0x18(%esp)
08624a31 +0x61d:  mov    %ecx,0x14(%esp)
08624a35 +0x621:  mov    %edx,0x10(%esp)
08624a39 +0x625:  mov    -0xbcc(%ebp),%ecx
08624a3f +0x62b:  mov    %ecx,0xc(%esp)
08624a43 +0x62f:  mov    0xc(%ebp),%eax
08624a46 +0x632:  mov    %eax,0x8(%esp)
08624a4a +0x636:  movl   $"inSert into dnf_creature_info(it_id, creature_id, creature_name, skill_recovery_time, overskill_recovery_time, artifact_slot, learn_overskill_level, skill_info, overskill_info, piercing, skill_name, skill_desc, overskill_name, overskill_desc, skill_level_values, overskill_level_values, evolution_creature_id, evolution_level) values(%u, %d, '%s', %d, %d, '%s', %d, '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', %d, %d)",0x4(%esp)
08624a52 +0x63e:  mov    -0x24(%ebp),%eax
08624a55 +0x641:  mov    %eax,(%esp)
08624a58 +0x644:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08624a5d +0x649:  xor    $0x1,%eax
08624a60 +0x64c:  test   %al,%al
08624a62 +0x64e:  je     08624a6b <+0x657>
08624a64 +0x650:  mov    $0x0,%ebx
08624a69 +0x655:  jmp    08624aa8 <+0x694>
08624a6b +0x657:  movl   $0x1,0x4(%esp)
08624a73 +0x65f:  mov    -0x24(%ebp),%eax
08624a76 +0x662:  mov    %eax,(%esp)
08624a79 +0x665:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08624a7e +0x66a:  xor    $0x1,%eax
08624a81 +0x66d:  test   %al,%al
08624a83 +0x66f:  je     08624a8c <+0x678>
08624a85 +0x671:  mov    $0x0,%ebx
08624a8a +0x676:  jmp    08624aa8 <+0x694>
08624a8c +0x678:  mov    $0x1,%ebx
08624a91 +0x67d:  jmp    08624aa8 <+0x694>
08624a93 +0x67f:  mov    %edx,%ebx
08624a95 +0x681:  mov    %eax,%esi
08624a97 +0x683:  lea    -0x64(%ebp),%eax
08624a9a +0x686:  mov    %eax,(%esp)
08624a9d +0x689:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08624aa2 +0x68e:  mov    %esi,%eax
08624aa4 +0x690:  mov    %ebx,%edx
08624aa6 +0x692:  jmp    08624ab5 <+0x6a1>
08624aa8 +0x694:  lea    -0x64(%ebp),%eax
08624aab +0x697:  mov    %eax,(%esp)
08624aae +0x69a:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08624ab3 +0x69f:  jmp    08624aca <+0x6b6>
08624ab5 +0x6a1:  mov    %edx,%ebx
08624ab7 +0x6a3:  mov    %eax,%esi
08624ab9 +0x6a5:  lea    -0x60(%ebp),%eax
08624abc +0x6a8:  mov    %eax,(%esp)
08624abf +0x6ab:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08624ac4 +0x6b0:  mov    %esi,%eax
08624ac6 +0x6b2:  mov    %ebx,%edx
08624ac8 +0x6b4:  jmp    08624ad7 <+0x6c3>
08624aca +0x6b6:  lea    -0x60(%ebp),%eax
08624acd +0x6b9:  mov    %eax,(%esp)
08624ad0 +0x6bc:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08624ad5 +0x6c1:  jmp    08624af2 <+0x6de>
08624ad7 +0x6c3:  mov    %edx,%ebx
08624ad9 +0x6c5:  mov    %eax,%esi
08624adb +0x6c7:  lea    -0x5c(%ebp),%eax
08624ade +0x6ca:  mov    %eax,(%esp)
08624ae1 +0x6cd:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08624ae6 +0x6d2:  mov    %esi,%eax
08624ae8 +0x6d4:  mov    %ebx,%edx
08624aea +0x6d6:  mov    %eax,(%esp)
08624aed +0x6d9:  call   08ae3750 <_Unwind_Resume>
08624af2 +0x6de:  lea    -0x5c(%ebp),%eax
08624af5 +0x6e1:  mov    %eax,(%esp)
08624af8 +0x6e4:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08624afd +0x6e9:  mov    %ebx,%eax
08624aff +0x6eb:  lea    -0xc(%ebp),%esp
08624b02 +0x6ee:  add    $0x0,%esp
08624b05 +0x6f1:  pop    %ebx
08624b06 +0x6f2:  pop    %esi
08624b07 +0x6f3:  pop    %edi
08624b08 +0x6f4:  pop    %ebp
08624b09 +0x6f5:  ret
```

## 反编译 C

```c
// sync_script::CSyncScript::insert_creature_info_to_db @ 0x8624414

/* sync_script::CSyncScript::insert_creature_info_to_db(unsigned int, CreatureScript const*, char
   const*, char const*) */

undefined4 __thiscall
sync_script::CSyncScript::insert_creature_info_to_db
          (CSyncScript *this,uint param_1,CreatureScript *param_2,char *param_3,char *param_4)

{
  char cVar1;
  string *psVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  char **ppcVar6;
  char *pcVar7;
  byte bVar8;
  char local_b94 [256];
  undefined1 local_a94 [256];
  undefined1 auStack_994 [256];
  undefined1 auStack_894 [256];
  undefined1 auStack_794 [256];
  undefined1 auStack_694 [256];
  undefined1 auStack_594 [256];
  undefined1 auStack_494 [256];
  undefined1 auStack_394 [256];
  undefined1 auStack_294 [256];
  undefined1 auStack_194 [256];
  char *local_94 [11];
  CStringMaker local_68 [4];
  CStringMaker local_64 [4];
  CStringMaker local_60 [4];
  undefined4 local_5c;
  CStringMaker local_58 [4];
  CStringMaker local_54 [4];
  undefined4 local_50;
  undefined4 local_4c;
  CStringMaker local_48 [4];
  CStringMaker local_44 [4];
  undefined4 local_40;
  undefined4 local_3c;
  CStringMaker local_38 [4];
  CStringMaker local_34 [4];
  undefined4 local_30;
  undefined4 local_2c;
  MySQL *local_28;
  uint local_24;
  uint local_20;
  
  bVar8 = 0;
  if (*this == (CSyncScript)0x1) {
    local_5c = 0;
    for (local_24 = 0; local_24 < 3; local_24 = local_24 + 1) {
      local_58[local_24 - 4] =
           (CStringMaker)((char)*(undefined4 *)(param_2 + (local_24 + 0x14) * 4) + '0');
    }
    CStringMaker::CStringMaker(local_54);
                    /* try { // try from 0862448c to 086244ce has its CatchHandler @ 0862451e */
    std::vector<int,std::allocator<int>>::end();
    std::vector<int,std::allocator<int>>::begin();
    std::
    for_each<__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>,sync_script::CStringMaker>
              (local_58,local_4c,local_50,local_54);
                    /* try { // try from 086244df to 086244e3 has its CatchHandler @ 086244f4 */
    CStringMaker::operator_cast_to_string(local_60);
                    /* try { // try from 086244ed to 086244f1 has its CatchHandler @ 08624509 */
    CStringMaker::~CStringMaker(local_58);
                    /* try { // try from 0862453f to 0862454e has its CatchHandler @ 08624ad7 */
    CStringMaker::~CStringMaker(local_54);
    CStringMaker::CStringMaker(local_44);
                    /* try { // try from 08624562 to 086245a4 has its CatchHandler @ 086245f4 */
    std::vector<int,std::allocator<int>>::end();
    std::vector<int,std::allocator<int>>::begin();
    std::
    for_each<__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>,sync_script::CStringMaker>
              (local_48,local_3c,local_40,local_44);
                    /* try { // try from 086245b5 to 086245b9 has its CatchHandler @ 086245ca */
    CStringMaker::operator_cast_to_string(local_64);
                    /* try { // try from 086245c3 to 086245c7 has its CatchHandler @ 086245df */
    CStringMaker::~CStringMaker(local_48);
                    /* try { // try from 08624612 to 08624621 has its CatchHandler @ 08624ab5 */
    CStringMaker::~CStringMaker(local_44);
    CStringMaker::CStringMaker(local_34);
                    /* try { // try from 08624635 to 08624677 has its CatchHandler @ 086246c7 */
    std::vector<int,std::allocator<int>>::end();
    std::vector<int,std::allocator<int>>::begin();
    std::
    for_each<__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>,sync_script::CStringMaker>
              (local_38,local_2c,local_30,local_34);
                    /* try { // try from 08624688 to 0862468c has its CatchHandler @ 0862469d */
    CStringMaker::operator_cast_to_string(local_68);
                    /* try { // try from 08624696 to 0862469a has its CatchHandler @ 086246b2 */
    CStringMaker::~CStringMaker(local_38);
                    /* try { // try from 086246e5 to 08624a7d has its CatchHandler @ 08624a93 */
    CStringMaker::~CStringMaker(local_34);
    ppcVar6 = local_94;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *ppcVar6 = (char *)0x0;
      ppcVar6 = ppcVar6 + (uint)bVar8 * -2 + 1;
    }
    local_94[0] = (char *)std::string::c_str((string *)(param_2 + 4));
    local_94[1] = (char *)&local_5c;
    local_94[2] = param_3;
    local_94[3] = param_4;
    local_94[4] = (char *)std::string::c_str((string *)local_60);
    iVar4 = std::vector<std::string,std::allocator<std::string>>::size
                      ((vector<std::string,std::allocator<std::string>> *)(param_2 + 0x128));
    if (iVar4 == 0) {
      local_94[5] = &DAT_08ce2e28;
    }
    else {
      psVar2 = (string *)
               std::vector<std::string,std::allocator<std::string>>::at
                         ((vector<std::string,std::allocator<std::string>> *)(param_2 + 0x128),0);
      local_94[5] = (char *)std::string::c_str(psVar2);
    }
    uVar3 = std::vector<std::string,std::allocator<std::string>>::size
                      ((vector<std::string,std::allocator<std::string>> *)(param_2 + 0x128));
    if (uVar3 < 2) {
      local_94[6] = &DAT_08ce2e28;
    }
    else {
      psVar2 = (string *)
               std::vector<std::string,std::allocator<std::string>>::at
                         ((vector<std::string,std::allocator<std::string>> *)(param_2 + 0x128),1);
      local_94[6] = (char *)std::string::c_str(psVar2);
    }
    uVar3 = std::vector<std::string,std::allocator<std::string>>::size
                      ((vector<std::string,std::allocator<std::string>> *)(param_2 + 0x128));
    if (uVar3 < 3) {
      local_94[7] = &DAT_08ce2e28;
    }
    else {
      psVar2 = (string *)
               std::vector<std::string,std::allocator<std::string>>::at
                         ((vector<std::string,std::allocator<std::string>> *)(param_2 + 0x128),2);
      local_94[7] = (char *)std::string::c_str(psVar2);
    }
    uVar3 = std::vector<std::string,std::allocator<std::string>>::size
                      ((vector<std::string,std::allocator<std::string>> *)(param_2 + 0x128));
    if (uVar3 < 4) {
      local_94[8] = &DAT_08ce2e28;
    }
    else {
      psVar2 = (string *)
               std::vector<std::string,std::allocator<std::string>>::at
                         ((vector<std::string,std::allocator<std::string>> *)(param_2 + 0x128),3);
      local_94[8] = (char *)std::string::c_str(psVar2);
    }
    local_94[9] = (char *)std::string::c_str((string *)local_64);
    local_94[10] = (char *)std::string::c_str((string *)local_68);
    pcVar7 = local_b94;
    for (iVar4 = 0x2c0; iVar4 != 0; iVar4 = iVar4 + -1) {
      pcVar7[0] = '\0';
      pcVar7[1] = '\0';
      pcVar7[2] = '\0';
      pcVar7[3] = '\0';
      pcVar7 = pcVar7 + ((uint)bVar8 * -2 + 1) * 4;
    }
    local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,5,0);
    for (local_20 = 0; local_20 < 0xb; local_20 = local_20 + 1) {
      GetEscapeString(local_28,local_94[local_20],local_b94 + local_20 * 0x100);
    }
    cVar1 = MySQL::set_query(local_28,
                             "inSert into dnf_creature_info(it_id, creature_id, creature_name, skill_recovery_time, overskill_recovery_time, artifact_slot, learn_overskill_level, skill_info, overskill_info, piercing, skill_name, skill_desc, overskill_name, overskill_desc, skill_level_values, overskill_level_values, evolution_creature_id, evolution_level) values(%u, %d, \'%s\', %d, %d, \'%s\', %d, \'%s\', \'%s\', \'%s\', \'%s\', \'%s\', \'%s\', \'%s\', \'%s\', \'%s\', %d, %d)"
                             ,param_1,*(undefined4 *)param_2,local_b94,
                             *(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20),
                             local_a94,*(undefined4 *)(param_2 + 0x5c),auStack_994,auStack_894,
                             auStack_794,auStack_694,auStack_594,auStack_494,auStack_394,auStack_294
                             ,auStack_194,*(undefined4 *)(param_2 + 0x178),
                             *(undefined4 *)(param_2 + 0x17c));
    if (cVar1 == '\x01') {
      cVar1 = MySQL::exec(local_28,true);
      if (cVar1 == '\x01') {
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
      }
    }
    else {
      uVar5 = 0;
    }
                    /* try { // try from 08624aae to 08624ab2 has its CatchHandler @ 08624ab5 */
    std::string::~string((string *)local_68);
                    /* try { // try from 08624ad0 to 08624ad4 has its CatchHandler @ 08624ad7 */
    std::string::~string((string *)local_64);
    std::string::~string((string *)local_60);
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}
```
