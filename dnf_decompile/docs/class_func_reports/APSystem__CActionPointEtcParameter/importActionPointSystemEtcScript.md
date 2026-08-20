# importActionPointSystemEtcScript

`_ZN8APSystem24CActionPointEtcParameter32importActionPointSystemEtcScriptEPKcRS0_`

`APSystem::CActionPointEtcParameter::importActionPointSystemEtcScript(char const*, APSystem::CActionPointEtcParameter&)`

| 类 | 地址 |
|---|---|
| `APSystem::CActionPointEtcParameter` | `0x08894996` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08894996  _ZN8APSystem24CActionPointEtcParameter32importActionPointSystemEtcScriptEPKcRS0_
#           APSystem::CActionPointEtcParameter::importActionPointSystemEtcScript(char const*, APSystem::CActionPointEtcParameter&)
# range [0x08894996, 0x08895611]
08894996 +0x000:  push   %ebp
08894997 +0x001:  mov    %esp,%ebp
08894999 +0x003:  push   %esi
0889499a +0x004:  push   %ebx
0889499b +0x005:  sub    $0x160,%esp
088949a1 +0x00b:  lea    -0xd0(%ebp),%eax
088949a7 +0x011:  mov    %eax,(%esp)
088949aa +0x014:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
088949af +0x019:  movl   $0x0,-0x40(%ebp)
088949b6 +0x020:  movb   $0x0,-0xd1(%ebp)
088949bd +0x027:  mov    0xc(%ebp),%eax
088949c0 +0x02a:  mov    %eax,(%esp)
088949c3 +0x02d:  call   088948fc <_ZN8APSystem24CActionPointEtcParameter9ClearDataEv>  ; APSystem::CActionPointEtcParameter::ClearData()
088949c8 +0x032:  mov    0x8(%ebp),%eax
088949cb +0x035:  mov    %eax,0x4(%esp)
088949cf +0x039:  movl   $"",(%esp)
088949d6 +0x040:  call   088bbd29 <_Z18loadRDARScriptFilePKcS0_>  ; loadRDARScriptFile(char const*, char const*)
088949db +0x045:  xor    $0x1,%eax
088949de +0x048:  test   %al,%al
088949e0 +0x04a:  je     088949f0 <+0x5a>
088949e2 +0x04c:  mov    $0x0,%ebx
088949e7 +0x051:  jmp    088955f8 <+0xc62>
088949ec +0x056:  nop
088949ed +0x057:  jmp    088949f0 <+0x5a>
088949ef +0x059:  nop
088949f0 +0x05a:  movl   $0x1,0x4(%esp)
088949f8 +0x062:  lea    -0xd0(%ebp),%eax
088949fe +0x068:  mov    %eax,(%esp)
08894a01 +0x06b:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
08894a06 +0x070:  xor    $0x1,%eax
08894a09 +0x073:  test   %al,%al
08894a0b +0x075:  jne    08895481 <+0xaeb>
08894a11 +0x07b:  movl   $"[action point list]",0x4(%esp)
08894a19 +0x083:  lea    -0xd0(%ebp),%eax
08894a1f +0x089:  mov    %eax,(%esp)
08894a22 +0x08c:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08894a27 +0x091:  test   %al,%al
08894a29 +0x093:  je     08895032 <+0x69c>
08894a2f +0x099:  movl   $0x0,-0x38(%ebp)
08894a36 +0x0a0:  lea    -0x154(%ebp),%eax
08894a3c +0x0a6:  mov    %eax,(%esp)
08894a3f +0x0a9:  call   0889566e <_GLOBAL__I__ZN8APSystem24CActionPointEtcParameter9ClearDataEv+0x1c>  ; global constructors keyed to APSystem::CActionPointEtcParameter::ClearData()+0x1c
08894a44 +0x0ae:  lea    -0xd1(%ebp),%eax
08894a4a +0x0b4:  mov    %eax,(%esp)
08894a4d +0x0b7:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08894a52 +0x0bc:  mov    %eax,-0x34(%ebp)
08894a55 +0x0bf:  movzbl -0xd1(%ebp),%eax
08894a5c +0x0c6:  xor    $0x1,%eax
08894a5f +0x0c9:  test   %al,%al
08894a61 +0x0cb:  je     08894a6d <+0xd7>
08894a63 +0x0cd:  mov    $0x0,%esi
08894a68 +0x0d2:  jmp    0889500e <+0x678>
08894a6d +0x0d7:  mov    -0x34(%ebp),%eax
08894a70 +0x0da:  mov    %ax,-0x154(%ebp)
08894a77 +0x0e1:  lea    -0xd1(%ebp),%eax
08894a7d +0x0e7:  mov    %eax,(%esp)
08894a80 +0x0ea:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08894a85 +0x0ef:  mov    %al,-0x128(%ebp)
08894a8b +0x0f5:  movzbl -0xd1(%ebp),%eax
08894a92 +0x0fc:  xor    $0x1,%eax
08894a95 +0x0ff:  test   %al,%al
08894a97 +0x101:  je     08894aa8 <+0x112>
08894a99 +0x103:  mov    $0x57,%ebx
08894a9e +0x108:  mov    $0x1,%esi
08894aa3 +0x10d:  jmp    0889500e <+0x678>
08894aa8 +0x112:  lea    -0xd1(%ebp),%eax
08894aae +0x118:  mov    %eax,(%esp)
08894ab1 +0x11b:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08894ab6 +0x120:  mov    %eax,-0x30(%ebp)
08894ab9 +0x123:  movzbl -0xd1(%ebp),%eax
08894ac0 +0x12a:  xor    $0x1,%eax
08894ac3 +0x12d:  test   %al,%al
08894ac5 +0x12f:  je     08894ad6 <+0x140>
08894ac7 +0x131:  mov    $0x5b,%ebx
08894acc +0x136:  mov    $0x1,%esi
08894ad1 +0x13b:  jmp    0889500e <+0x678>
08894ad6 +0x140:  mov    -0x30(%ebp),%eax
08894ad9 +0x143:  mov    %ax,-0x148(%ebp)
08894ae0 +0x14a:  lea    -0xd1(%ebp),%eax
08894ae6 +0x150:  mov    %eax,(%esp)
08894ae9 +0x153:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08894aee +0x158:  mov    %eax,-0x2c(%ebp)
08894af1 +0x15b:  movzbl -0xd1(%ebp),%eax
08894af8 +0x162:  xor    $0x1,%eax
08894afb +0x165:  test   %al,%al
08894afd +0x167:  je     08894b09 <+0x173>
08894aff +0x169:  mov    $0x0,%esi
08894b04 +0x16e:  jmp    0889500e <+0x678>
08894b09 +0x173:  mov    -0x2c(%ebp),%eax
08894b0c +0x176:  mov    %eax,-0x152(%ebp)
08894b12 +0x17c:  mov    -0x152(%ebp),%eax
08894b18 +0x182:  mov    %eax,(%esp)
08894b1b +0x185:  call   08894956 <_ZN8APSystem24CActionPointEtcParameter23IsValidActionGroupIndexENS_17_ActionGroupIndexE>  ; APSystem::CActionPointEtcParameter::IsValidActionGroupIndex(APSystem::_ActionGroupIndex)
08894b20 +0x18a:  xor    $0x1,%eax
08894b23 +0x18d:  test   %al,%al
08894b25 +0x18f:  je     08894b36 <+0x1a0>
08894b27 +0x191:  mov    $0x62,%ebx
08894b2c +0x196:  mov    $0x1,%esi
08894b31 +0x19b:  jmp    0889500e <+0x678>
08894b36 +0x1a0:  lea    -0xd1(%ebp),%eax
08894b3c +0x1a6:  mov    %eax,(%esp)
08894b3f +0x1a9:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08894b44 +0x1ae:  mov    %eax,-0x28(%ebp)
08894b47 +0x1b1:  movzbl -0xd1(%ebp),%eax
08894b4e +0x1b8:  xor    $0x1,%eax
08894b51 +0x1bb:  test   %al,%al
08894b53 +0x1bd:  je     08894b64 <+0x1ce>
08894b55 +0x1bf:  mov    $0x65,%ebx
08894b5a +0x1c4:  mov    $0x1,%esi
08894b5f +0x1c9:  jmp    0889500e <+0x678>
08894b64 +0x1ce:  mov    -0x28(%ebp),%eax
08894b67 +0x1d1:  mov    %al,-0x146(%ebp)
08894b6d +0x1d7:  movl   $0x0,-0x20(%ebp)
08894b74 +0x1de:  jmp    08894bbd <+0x227>
08894b76 +0x1e0:  lea    -0xd1(%ebp),%eax
08894b7c +0x1e6:  mov    %eax,(%esp)
08894b7f +0x1e9:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08894b84 +0x1ee:  mov    %eax,-0x1c(%ebp)
08894b87 +0x1f1:  movzbl -0xd1(%ebp),%eax
08894b8e +0x1f8:  xor    $0x1,%eax
08894b91 +0x1fb:  test   %al,%al
08894b93 +0x1fd:  je     08894ba4 <+0x20e>
08894b95 +0x1ff:  mov    $0x6d,%ebx
08894b9a +0x204:  mov    $0x1,%esi
08894b9f +0x209:  jmp    0889500e <+0x678>
08894ba4 +0x20e:  cmpl   $0x0,-0x1c(%ebp)
08894ba8 +0x212:  je     08894bb9 <+0x223>
08894baa +0x214:  mov    -0x20(%ebp),%eax
08894bad +0x217:  mov    -0x1c(%ebp),%edx
08894bb0 +0x21a:  neg    %edx
08894bb2 +0x21c:  mov    %dl,-0x14e(%ebp,%eax,1)
08894bb9 +0x223:  addl   $0x1,-0x20(%ebp)
08894bbd +0x227:  cmpl   $0x4,-0x20(%ebp)
08894bc1 +0x22b:  setle  %al
08894bc4 +0x22e:  test   %al,%al
08894bc6 +0x230:  jne    08894b76 <+0x1e0>
08894bc8 +0x232:  lea    -0xdc(%ebp),%eax
08894bce +0x238:  mov    %eax,(%esp)
08894bd1 +0x23b:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08894bd6 +0x240:  lea    -0xdc(%ebp),%eax
08894bdc +0x246:  mov    %eax,(%esp)
08894bdf +0x249:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
08894be4 +0x24e:  xor    $0x1,%eax
08894be7 +0x251:  test   %al,%al
08894be9 +0x253:  je     08894bfa <+0x264>
08894beb +0x255:  mov    $0x76,%ebx
08894bf0 +0x25a:  mov    $0x0,%esi
08894bf5 +0x25f:  jmp    08894fd3 <+0x63d>
08894bfa +0x264:  movl   $0x0,-0xe0(%ebp)
08894c04 +0x26e:  movl   $0x0,-0x24(%ebp)
08894c0b +0x275:  lea    -0xdc(%ebp),%eax
08894c11 +0x27b:  mov    %eax,(%esp)
08894c14 +0x27e:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08894c19 +0x283:  lea    -0xe0(%ebp),%edx
08894c1f +0x289:  mov    %edx,0x8(%esp)
08894c23 +0x28d:  movl   $",",0x4(%esp)
08894c2b +0x295:  mov    %eax,(%esp)
08894c2e +0x298:  call   0807e150 <_init+0xa48>
08894c33 +0x29d:  mov    %eax,-0x24(%ebp)
08894c36 +0x2a0:  jmp    08894c85 <+0x2ef>
08894c38 +0x2a2:  mov    -0x24(%ebp),%eax
08894c3b +0x2a5:  mov    %eax,(%esp)
08894c3e +0x2a8:  call   0807e6f0 <_init+0xfe8>
08894c43 +0x2ad:  mov    %eax,-0xf0(%ebp)
08894c49 +0x2b3:  lea    -0xf0(%ebp),%eax
08894c4f +0x2b9:  mov    %eax,0x4(%esp)
08894c53 +0x2bd:  lea    -0x154(%ebp),%eax
08894c59 +0x2c3:  add    $0x14,%eax
08894c5c +0x2c6:  mov    %eax,(%esp)
08894c5f +0x2c9:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
08894c64 +0x2ce:  lea    -0xe0(%ebp),%eax
08894c6a +0x2d4:  mov    %eax,0x8(%esp)
08894c6e +0x2d8:  movl   $",",0x4(%esp)
08894c76 +0x2e0:  movl   $0x0,(%esp)
08894c7d +0x2e7:  call   0807e150 <_init+0xa48>
08894c82 +0x2ec:  mov    %eax,-0x24(%ebp)
08894c85 +0x2ef:  cmpl   $0x0,-0x24(%ebp)
08894c89 +0x2f3:  setne  %al
08894c8c +0x2f6:  test   %al,%al
08894c8e +0x2f8:  jne    08894c38 <+0x2a2>
08894c90 +0x2fa:  lea    -0xe4(%ebp),%eax
08894c96 +0x300:  mov    %eax,(%esp)
08894c99 +0x303:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08894c9e +0x308:  lea    -0xe4(%ebp),%eax
08894ca4 +0x30e:  mov    %eax,(%esp)
08894ca7 +0x311:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
08894cac +0x316:  xor    $0x1,%eax
08894caf +0x319:  test   %al,%al
08894cb1 +0x31b:  je     08894cc2 <+0x32c>
08894cb3 +0x31d:  mov    $0x9c,%ebx
08894cb8 +0x322:  mov    $0x0,%esi
08894cbd +0x327:  jmp    08894f9b <+0x605>
08894cc2 +0x32c:  movl   $0x0,-0xe8(%ebp)
08894ccc +0x336:  lea    -0xe4(%ebp),%eax
08894cd2 +0x33c:  mov    %eax,0x4(%esp)
08894cd6 +0x340:  lea    -0xcc(%ebp),%eax
08894cdc +0x346:  mov    %eax,(%esp)
08894cdf +0x349:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
08894ce4 +0x34e:  lea    -0xe8(%ebp),%eax
08894cea +0x354:  mov    %eax,0x4(%esp)
08894cee +0x358:  lea    -0xcc(%ebp),%eax
08894cf4 +0x35e:  mov    %eax,(%esp)
08894cf7 +0x361:  call   088c284a <_Z25ConvertWeekdayStringToIntSsRj>  ; ConvertWeekdayStringToInt(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, unsigned int&)
08894cfc +0x366:  mov    $0x1,%esi
08894d01 +0x36b:  xor    %eax,%esi
08894d03 +0x36d:  lea    -0xcc(%ebp),%eax
08894d09 +0x373:  mov    %eax,(%esp)
08894d0c +0x376:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08894d11 +0x37b:  jmp    08894d2e <+0x398>
08894d13 +0x37d:  mov    %edx,%ebx
08894d15 +0x37f:  mov    %eax,%esi
08894d17 +0x381:  lea    -0xcc(%ebp),%eax
08894d1d +0x387:  mov    %eax,(%esp)
08894d20 +0x38a:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08894d25 +0x38f:  mov    %esi,%eax
08894d27 +0x391:  mov    %ebx,%edx
08894d29 +0x393:  jmp    08894f83 <+0x5ed>
08894d2e +0x398:  mov    %esi,%eax
08894d30 +0x39a:  test   %al,%al
08894d32 +0x39c:  je     08894d40 <+0x3aa>
08894d34 +0x39e:  movl   $0x7,-0x134(%ebp)
08894d3e +0x3a8:  jmp    08894d4c <+0x3b6>
08894d40 +0x3aa:  mov    -0xe8(%ebp),%eax
08894d46 +0x3b0:  mov    %eax,-0x134(%ebp)
08894d4c +0x3b6:  lea    -0xd1(%ebp),%eax
08894d52 +0x3bc:  mov    %eax,(%esp)
08894d55 +0x3bf:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08894d5a +0x3c4:  mov    %al,-0x145(%ebp)
08894d60 +0x3ca:  movzbl -0xd1(%ebp),%eax
08894d67 +0x3d1:  xor    $0x1,%eax
08894d6a +0x3d4:  test   %al,%al
08894d6c +0x3d6:  je     08894d7d <+0x3e7>
08894d6e +0x3d8:  mov    $0xa4,%ebx
08894d73 +0x3dd:  mov    $0x0,%esi
08894d78 +0x3e2:  jmp    08894f9b <+0x605>
08894d7d +0x3e7:  lea    -0xd1(%ebp),%eax
08894d83 +0x3ed:  mov    %eax,(%esp)
08894d86 +0x3f0:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08894d8b +0x3f5:  mov    %al,-0x144(%ebp)
08894d91 +0x3fb:  movzbl -0xd1(%ebp),%eax
08894d98 +0x402:  xor    $0x1,%eax
08894d9b +0x405:  test   %al,%al
08894d9d +0x407:  je     08894dae <+0x418>
08894d9f +0x409:  mov    $0xa7,%ebx
08894da4 +0x40e:  mov    $0x0,%esi
08894da9 +0x413:  jmp    08894f9b <+0x605>
08894dae +0x418:  lea    -0x154(%ebp),%eax
08894db4 +0x41e:  add    $0x24,%eax
08894db7 +0x421:  mov    %eax,(%esp)
08894dba +0x424:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
08894dbf +0x429:  xor    $0x1,%eax
08894dc2 +0x42c:  test   %al,%al
08894dc4 +0x42e:  je     08894dd5 <+0x43f>
08894dc6 +0x430:  mov    $0xaa,%ebx
08894dcb +0x435:  mov    $0x0,%esi
08894dd0 +0x43a:  jmp    08894f9b <+0x605>
08894dd5 +0x43f:  lea    -0x154(%ebp),%eax
08894ddb +0x445:  add    $0x28,%eax
08894dde +0x448:  mov    %eax,(%esp)
08894de1 +0x44b:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
08894de6 +0x450:  xor    $0x1,%eax
08894de9 +0x453:  test   %al,%al
08894deb +0x455:  je     08894dfc <+0x466>
08894ded +0x457:  mov    $0xad,%ebx
08894df2 +0x45c:  mov    $0x0,%esi
08894df7 +0x461:  jmp    08894f9b <+0x605>
08894dfc +0x466:  mov    0xc(%ebp),%edx
08894dff +0x469:  lea    -0xec(%ebp),%eax
08894e05 +0x46f:  lea    -0x154(%ebp),%ecx
08894e0b +0x475:  add    $0xc,%ecx
08894e0e +0x478:  mov    %ecx,0x8(%esp)
08894e12 +0x47c:  mov    %edx,0x4(%esp)
08894e16 +0x480:  mov    %eax,(%esp)
08894e19 +0x483:  call   088957e4 <_GLOBAL__I__ZN8APSystem24CActionPointEtcParameter9ClearDataEv+0x192>  ; global constructors keyed to APSystem::CActionPointEtcParameter::ClearData()+0x192
08894e1e +0x488:  sub    $0x4,%esp
08894e21 +0x48b:  mov    0xc(%ebp),%edx
08894e24 +0x48e:  lea    -0xc8(%ebp),%eax
08894e2a +0x494:  mov    %edx,0x4(%esp)
08894e2e +0x498:  mov    %eax,(%esp)
08894e31 +0x49b:  call   08895810 <_GLOBAL__I__ZN8APSystem24CActionPointEtcParameter9ClearDataEv+0x1be>  ; global constructors keyed to APSystem::CActionPointEtcParameter::ClearData()+0x1be
08894e36 +0x4a0:  sub    $0x4,%esp
08894e39 +0x4a3:  lea    -0xc8(%ebp),%eax
08894e3f +0x4a9:  mov    %eax,0x4(%esp)
08894e43 +0x4ad:  lea    -0xec(%ebp),%eax
08894e49 +0x4b3:  mov    %eax,(%esp)
08894e4c +0x4b6:  call   08895836 <_GLOBAL__I__ZN8APSystem24CActionPointEtcParameter9ClearDataEv+0x1e4>  ; global constructors keyed to APSystem::CActionPointEtcParameter::ClearData()+0x1e4
08894e51 +0x4bb:  test   %al,%al
08894e53 +0x4bd:  je     08894f59 <+0x5c3>
08894e59 +0x4c3:  lea    -0xfc(%ebp),%eax
08894e5f +0x4c9:  mov    %eax,(%esp)
08894e62 +0x4cc:  call   0889584a <_GLOBAL__I__ZN8APSystem24CActionPointEtcParameter9ClearDataEv+0x1f8>  ; global constructors keyed to APSystem::CActionPointEtcParameter::ClearData()+0x1f8
08894e67 +0x4d1:  lea    -0x154(%ebp),%eax
08894e6d +0x4d7:  mov    %eax,0x4(%esp)
08894e71 +0x4db:  lea    -0xfc(%ebp),%eax
08894e77 +0x4e1:  mov    %eax,(%esp)
08894e7a +0x4e4:  call   0889585e <_GLOBAL__I__ZN8APSystem24CActionPointEtcParameter9ClearDataEv+0x20c>  ; global constructors keyed to APSystem::CActionPointEtcParameter::ClearData()+0x20c
08894e7f +0x4e9:  lea    -0xac(%ebp),%eax
08894e85 +0x4ef:  lea    -0xfc(%ebp),%edx
08894e8b +0x4f5:  mov    %edx,0x8(%esp)
08894e8f +0x4f9:  lea    -0x154(%ebp),%edx
08894e95 +0x4ff:  add    $0xc,%edx
08894e98 +0x502:  mov    %edx,0x4(%esp)
08894e9c +0x506:  mov    %eax,(%esp)
08894e9f +0x509:  call   088958d1 <_GLOBAL__I__ZN8APSystem24CActionPointEtcParameter9ClearDataEv+0x27f>  ; global constructors keyed to APSystem::CActionPointEtcParameter::ClearData()+0x27f
08894ea4 +0x50e:  sub    $0x4,%esp
08894ea7 +0x511:  lea    -0xac(%ebp),%eax
08894ead +0x517:  mov    %eax,0x4(%esp)
08894eb1 +0x51b:  lea    -0xbc(%ebp),%eax
08894eb7 +0x521:  mov    %eax,(%esp)
08894eba +0x524:  call   08895916 <_GLOBAL__I__ZN8APSystem24CActionPointEtcParameter9ClearDataEv+0x2c4>  ; global constructors keyed to APSystem::CActionPointEtcParameter::ClearData()+0x2c4
08894ebf +0x529:  mov    0xc(%ebp),%edx
08894ec2 +0x52c:  lea    -0xc4(%ebp),%eax
08894ec8 +0x532:  lea    -0xbc(%ebp),%ecx
08894ece +0x538:  mov    %ecx,0x8(%esp)
08894ed2 +0x53c:  mov    %edx,0x4(%esp)
08894ed6 +0x540:  mov    %eax,(%esp)
08894ed9 +0x543:  call   08895952 <_GLOBAL__I__ZN8APSystem24CActionPointEtcParameter9ClearDataEv+0x300>  ; global constructors keyed to APSystem::CActionPointEtcParameter::ClearData()+0x300
08894ede +0x548:  sub    $0x4,%esp
08894ee1 +0x54b:  lea    -0xbc(%ebp),%eax
08894ee7 +0x551:  mov    %eax,(%esp)
08894eea +0x554:  call   083ce85c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x68828>  ; global constructors keyed to CServerEvent::m_nExpRate+0x68828
08894eef +0x559:  jmp    08894f21 <+0x58b>
08894ef1 +0x55b:  mov    %edx,%ebx
08894ef3 +0x55d:  mov    %eax,%esi
08894ef5 +0x55f:  lea    -0xbc(%ebp),%eax
08894efb +0x565:  mov    %eax,(%esp)
08894efe +0x568:  call   083ce85c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x68828>  ; global constructors keyed to CServerEvent::m_nExpRate+0x68828
08894f03 +0x56d:  mov    %esi,%eax
08894f05 +0x56f:  mov    %ebx,%edx
08894f07 +0x571:  jmp    08894f09 <+0x573>
08894f09 +0x573:  mov    %edx,%ebx
08894f0b +0x575:  mov    %eax,%esi
08894f0d +0x577:  lea    -0xac(%ebp),%eax
08894f13 +0x57d:  mov    %eax,(%esp)
08894f16 +0x580:  call   0889575a <_GLOBAL__I__ZN8APSystem24CActionPointEtcParameter9ClearDataEv+0x108>  ; global constructors keyed to APSystem::CActionPointEtcParameter::ClearData()+0x108
08894f1b +0x585:  mov    %esi,%eax
08894f1d +0x587:  mov    %ebx,%edx
08894f1f +0x589:  jmp    08894f31 <+0x59b>
08894f21 +0x58b:  lea    -0xac(%ebp),%eax
08894f27 +0x591:  mov    %eax,(%esp)
08894f2a +0x594:  call   0889575a <_GLOBAL__I__ZN8APSystem24CActionPointEtcParameter9ClearDataEv+0x108>  ; global constructors keyed to APSystem::CActionPointEtcParameter::ClearData()+0x108
08894f2f +0x599:  jmp    08894f49 <+0x5b3>
08894f31 +0x59b:  mov    %edx,%ebx
08894f33 +0x59d:  mov    %eax,%esi
08894f35 +0x59f:  lea    -0xfc(%ebp),%eax
08894f3b +0x5a5:  mov    %eax,(%esp)
08894f3e +0x5a8:  call   083dd1ac <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x77178>  ; global constructors keyed to CServerEvent::m_nExpRate+0x77178
08894f43 +0x5ad:  mov    %esi,%eax
08894f45 +0x5af:  mov    %ebx,%edx
08894f47 +0x5b1:  jmp    08894f83 <+0x5ed>
08894f49 +0x5b3:  lea    -0xfc(%ebp),%eax
08894f4f +0x5b9:  mov    %eax,(%esp)
08894f52 +0x5bc:  call   083dd1ac <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x77178>  ; global constructors keyed to CServerEvent::m_nExpRate+0x77178
08894f57 +0x5c1:  jmp    08894f7c <+0x5e6>
08894f59 +0x5c3:  lea    -0xec(%ebp),%eax
08894f5f +0x5c9:  mov    %eax,(%esp)
08894f62 +0x5cc:  call   0889597e <_GLOBAL__I__ZN8APSystem24CActionPointEtcParameter9ClearDataEv+0x32c>  ; global constructors keyed to APSystem::CActionPointEtcParameter::ClearData()+0x32c
08894f67 +0x5d1:  lea    0x4(%eax),%edx
08894f6a +0x5d4:  lea    -0x154(%ebp),%eax
08894f70 +0x5da:  mov    %eax,0x4(%esp)
08894f74 +0x5de:  mov    %edx,(%esp)
08894f77 +0x5e1:  call   0889585e <_GLOBAL__I__ZN8APSystem24CActionPointEtcParameter9ClearDataEv+0x20c>  ; global constructors keyed to APSystem::CActionPointEtcParameter::ClearData()+0x20c
08894f7c +0x5e6:  mov    $0x1,%esi
08894f81 +0x5eb:  jmp    08894f9b <+0x605>
08894f83 +0x5ed:  mov    %edx,%ebx
08894f85 +0x5ef:  mov    %eax,%esi
08894f87 +0x5f1:  lea    -0xe4(%ebp),%eax
08894f8d +0x5f7:  mov    %eax,(%esp)
08894f90 +0x5fa:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08894f95 +0x5ff:  mov    %esi,%eax
08894f97 +0x601:  mov    %ebx,%edx
08894f99 +0x603:  jmp    08894fbb <+0x625>
08894f9b +0x605:  lea    -0xe4(%ebp),%eax
08894fa1 +0x60b:  mov    %eax,(%esp)
08894fa4 +0x60e:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08894fa9 +0x613:  test   %esi,%esi
08894fab +0x615:  jne    08894fb4 <+0x61e>
08894fad +0x617:  mov    $0x0,%esi
08894fb2 +0x61c:  jmp    08894fd3 <+0x63d>
08894fb4 +0x61e:  mov    $0x1,%esi
08894fb9 +0x623:  jmp    08894fd3 <+0x63d>
08894fbb +0x625:  mov    %edx,%ebx
08894fbd +0x627:  mov    %eax,%esi
08894fbf +0x629:  lea    -0xdc(%ebp),%eax
08894fc5 +0x62f:  mov    %eax,(%esp)
08894fc8 +0x632:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08894fcd +0x637:  mov    %esi,%eax
08894fcf +0x639:  mov    %ebx,%edx
08894fd1 +0x63b:  jmp    08894ff3 <+0x65d>
08894fd3 +0x63d:  lea    -0xdc(%ebp),%eax
08894fd9 +0x643:  mov    %eax,(%esp)
08894fdc +0x646:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08894fe1 +0x64b:  test   %esi,%esi
08894fe3 +0x64d:  jne    08894fec <+0x656>
08894fe5 +0x64f:  mov    $0x1,%esi
08894fea +0x654:  jmp    0889500e <+0x678>
08894fec +0x656:  mov    $0x2,%esi
08894ff1 +0x65b:  jmp    0889500e <+0x678>
08894ff3 +0x65d:  mov    %edx,%ebx
08894ff5 +0x65f:  mov    %eax,%esi
08894ff7 +0x661:  lea    -0x154(%ebp),%eax
08894ffd +0x667:  mov    %eax,(%esp)
08895000 +0x66a:  call   083721ce <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xc19a>  ; global constructors keyed to CServerEvent::m_nExpRate+0xc19a
08895005 +0x66f:  mov    %esi,%eax
08895007 +0x671:  mov    %ebx,%edx
08895009 +0x673:  jmp    088955da <+0xc44>
0889500e +0x678:  lea    -0x154(%ebp),%eax
08895014 +0x67e:  mov    %eax,(%esp)
08895017 +0x681:  call   083721ce <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xc19a>  ; global constructors keyed to CServerEvent::m_nExpRate+0xc19a
0889501c +0x686:  test   %esi,%esi
0889501e +0x688:  je     088949ec <+0x56>
08895024 +0x68e:  cmp    $0x1,%esi
08895027 +0x691:  je     088955f8 <+0xc62>
0889502d +0x697:  jmp    08894a36 <+0xa0>
08895032 +0x69c:  movl   $"[action point user message]",0x4(%esp)
0889503a +0x6a4:  lea    -0xd0(%ebp),%eax
08895040 +0x6aa:  mov    %eax,(%esp)
08895043 +0x6ad:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08895048 +0x6b2:  test   %al,%al
0889504a +0x6b4:  je     08895197 <+0x801>
08895050 +0x6ba:  lea    -0xd1(%ebp),%eax
08895056 +0x6c0:  mov    %eax,(%esp)
08895059 +0x6c3:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0889505e +0x6c8:  mov    %eax,-0x100(%ebp)
08895064 +0x6ce:  movzbl -0xd1(%ebp),%eax
0889506b +0x6d5:  xor    $0x1,%eax
0889506e +0x6d8:  test   %al,%al
08895070 +0x6da:  je     08895078 <+0x6e2>
08895072 +0x6dc:  nop
08895073 +0x6dd:  jmp    088949f0 <+0x5a>
08895078 +0x6e2:  lea    -0x104(%ebp),%eax
0889507e +0x6e8:  mov    %eax,(%esp)
08895081 +0x6eb:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08895086 +0x6f0:  lea    -0x104(%ebp),%eax
0889508c +0x6f6:  mov    %eax,(%esp)
0889508f +0x6f9:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
08895094 +0x6fe:  xor    $0x1,%eax
08895097 +0x701:  test   %al,%al
08895099 +0x703:  je     088950aa <+0x714>
0889509b +0x705:  mov    $0xc7,%ebx
088950a0 +0x70a:  mov    $0x0,%esi
088950a5 +0x70f:  jmp    0889517c <+0x7e6>
088950aa +0x714:  lea    -0x8c(%ebp),%eax
088950b0 +0x71a:  lea    -0x104(%ebp),%edx
088950b6 +0x720:  mov    %edx,0x8(%esp)
088950ba +0x724:  lea    -0x100(%ebp),%edx
088950c0 +0x72a:  mov    %edx,0x4(%esp)
088950c4 +0x72e:  mov    %eax,(%esp)
088950c7 +0x731:  call   0889598b <_GLOBAL__I__ZN8APSystem24CActionPointEtcParameter9ClearDataEv+0x339>  ; global constructors keyed to APSystem::CActionPointEtcParameter::ClearData()+0x339
088950cc +0x736:  sub    $0x4,%esp
088950cf +0x739:  lea    -0x8c(%ebp),%eax
088950d5 +0x73f:  mov    %eax,0x4(%esp)
088950d9 +0x743:  lea    -0x94(%ebp),%eax
088950df +0x749:  mov    %eax,(%esp)
088950e2 +0x74c:  call   088959d0 <_GLOBAL__I__ZN8APSystem24CActionPointEtcParameter9ClearDataEv+0x37e>  ; global constructors keyed to APSystem::CActionPointEtcParameter::ClearData()+0x37e
088950e7 +0x751:  mov    0xc(%ebp),%eax
088950ea +0x754:  lea    0x30(%eax),%ecx
088950ed +0x757:  lea    -0x9c(%ebp),%eax
088950f3 +0x75d:  lea    -0x94(%ebp),%edx
088950f9 +0x763:  mov    %edx,0x8(%esp)
088950fd +0x767:  mov    %ecx,0x4(%esp)
08895101 +0x76b:  mov    %eax,(%esp)
08895104 +0x76e:  call   08895a0c <_GLOBAL__I__ZN8APSystem24CActionPointEtcParameter9ClearDataEv+0x3ba>  ; global constructors keyed to APSystem::CActionPointEtcParameter::ClearData()+0x3ba
08895109 +0x773:  sub    $0x4,%esp
0889510c +0x776:  lea    -0x94(%ebp),%eax
08895112 +0x77c:  mov    %eax,(%esp)
08895115 +0x77f:  call   083ce996 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x68962>  ; global constructors keyed to CServerEvent::m_nExpRate+0x68962
0889511a +0x784:  jmp    0889514c <+0x7b6>
0889511c +0x786:  mov    %edx,%ebx
0889511e +0x788:  mov    %eax,%esi
08895120 +0x78a:  lea    -0x94(%ebp),%eax
08895126 +0x790:  mov    %eax,(%esp)
08895129 +0x793:  call   083ce996 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x68962>  ; global constructors keyed to CServerEvent::m_nExpRate+0x68962
0889512e +0x798:  mov    %esi,%eax
08895130 +0x79a:  mov    %ebx,%edx
08895132 +0x79c:  jmp    08895134 <+0x79e>
08895134 +0x79e:  mov    %edx,%ebx
08895136 +0x7a0:  mov    %eax,%esi
08895138 +0x7a2:  lea    -0x8c(%ebp),%eax
0889513e +0x7a8:  mov    %eax,(%esp)
08895141 +0x7ab:  call   080c6baa <_GLOBAL__I_g_ServerString_+0x115>  ; global constructors keyed to g_ServerString_+0x115
08895146 +0x7b0:  mov    %esi,%eax
08895148 +0x7b2:  mov    %ebx,%edx
0889514a +0x7b4:  jmp    08895161 <+0x7cb>
0889514c +0x7b6:  lea    -0x8c(%ebp),%eax
08895152 +0x7bc:  mov    %eax,(%esp)
08895155 +0x7bf:  call   080c6baa <_GLOBAL__I_g_ServerString_+0x115>  ; global constructors keyed to g_ServerString_+0x115
0889515a +0x7c4:  mov    $0x1,%esi
0889515f +0x7c9:  jmp    0889517c <+0x7e6>
08895161 +0x7cb:  mov    %edx,%ebx
08895163 +0x7cd:  mov    %eax,%esi
08895165 +0x7cf:  lea    -0x104(%ebp),%eax
0889516b +0x7d5:  mov    %eax,(%esp)
0889516e +0x7d8:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08895173 +0x7dd:  mov    %esi,%eax
08895175 +0x7df:  mov    %ebx,%edx
08895177 +0x7e1:  jmp    088955da <+0xc44>
0889517c +0x7e6:  lea    -0x104(%ebp),%eax
08895182 +0x7ec:  mov    %eax,(%esp)
08895185 +0x7ef:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0889518a +0x7f4:  test   %esi,%esi
0889518c +0x7f6:  je     088955f8 <+0xc62>
08895192 +0x7fc:  jmp    08895050 <+0x6ba>
08895197 +0x801:  movl   $"[action point system message]",0x4(%esp)
0889519f +0x809:  lea    -0xd0(%ebp),%eax
088951a5 +0x80f:  mov    %eax,(%esp)
088951a8 +0x812:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088951ad +0x817:  test   %al,%al
088951af +0x819:  je     088952e4 <+0x94e>
088951b5 +0x81f:  lea    -0xd1(%ebp),%eax
088951bb +0x825:  mov    %eax,(%esp)
088951be +0x828:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088951c3 +0x82d:  mov    %eax,-0x108(%ebp)
088951c9 +0x833:  movzbl -0xd1(%ebp),%eax
088951d0 +0x83a:  xor    $0x1,%eax
088951d3 +0x83d:  test   %al,%al
088951d5 +0x83f:  je     088951dd <+0x847>
088951d7 +0x841:  nop
088951d8 +0x842:  jmp    088949f0 <+0x5a>
088951dd +0x847:  lea    -0x10c(%ebp),%eax
088951e3 +0x84d:  mov    %eax,(%esp)
088951e6 +0x850:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
088951eb +0x855:  lea    -0x10c(%ebp),%eax
088951f1 +0x85b:  mov    %eax,(%esp)
088951f4 +0x85e:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
088951f9 +0x863:  xor    $0x1,%eax
088951fc +0x866:  test   %al,%al
088951fe +0x868:  je     0889520f <+0x879>
08895200 +0x86a:  mov    $0xd5,%ebx
08895205 +0x86f:  mov    $0x0,%esi
0889520a +0x874:  jmp    088952c9 <+0x933>
0889520f +0x879:  lea    -0x74(%ebp),%eax
08895212 +0x87c:  lea    -0x10c(%ebp),%edx
08895218 +0x882:  mov    %edx,0x8(%esp)
0889521c +0x886:  lea    -0x108(%ebp),%edx
08895222 +0x88c:  mov    %edx,0x4(%esp)
08895226 +0x890:  mov    %eax,(%esp)
08895229 +0x893:  call   0889598b <_GLOBAL__I__ZN8APSystem24CActionPointEtcParameter9ClearDataEv+0x339>  ; global constructors keyed to APSystem::CActionPointEtcParameter::ClearData()+0x339
0889522e +0x898:  sub    $0x4,%esp
08895231 +0x89b:  lea    -0x74(%ebp),%eax
08895234 +0x89e:  mov    %eax,0x4(%esp)
08895238 +0x8a2:  lea    -0x7c(%ebp),%eax
0889523b +0x8a5:  mov    %eax,(%esp)
0889523e +0x8a8:  call   088959d0 <_GLOBAL__I__ZN8APSystem24CActionPointEtcParameter9ClearDataEv+0x37e>  ; global constructors keyed to APSystem::CActionPointEtcParameter::ClearData()+0x37e
08895243 +0x8ad:  mov    0xc(%ebp),%eax
08895246 +0x8b0:  lea    0x48(%eax),%ecx
08895249 +0x8b3:  lea    -0x84(%ebp),%eax
0889524f +0x8b9:  lea    -0x7c(%ebp),%edx
08895252 +0x8bc:  mov    %edx,0x8(%esp)
08895256 +0x8c0:  mov    %ecx,0x4(%esp)
0889525a +0x8c4:  mov    %eax,(%esp)
0889525d +0x8c7:  call   08895a0c <_GLOBAL__I__ZN8APSystem24CActionPointEtcParameter9ClearDataEv+0x3ba>  ; global constructors keyed to APSystem::CActionPointEtcParameter::ClearData()+0x3ba
08895262 +0x8cc:  sub    $0x4,%esp
08895265 +0x8cf:  lea    -0x7c(%ebp),%eax
08895268 +0x8d2:  mov    %eax,(%esp)
0889526b +0x8d5:  call   083ce996 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x68962>  ; global constructors keyed to CServerEvent::m_nExpRate+0x68962
08895270 +0x8da:  jmp    0889529c <+0x906>
08895272 +0x8dc:  mov    %edx,%ebx
08895274 +0x8de:  mov    %eax,%esi
08895276 +0x8e0:  lea    -0x7c(%ebp),%eax
08895279 +0x8e3:  mov    %eax,(%esp)
0889527c +0x8e6:  call   083ce996 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x68962>  ; global constructors keyed to CServerEvent::m_nExpRate+0x68962
08895281 +0x8eb:  mov    %esi,%eax
08895283 +0x8ed:  mov    %ebx,%edx
08895285 +0x8ef:  jmp    08895287 <+0x8f1>
08895287 +0x8f1:  mov    %edx,%ebx
08895289 +0x8f3:  mov    %eax,%esi
0889528b +0x8f5:  lea    -0x74(%ebp),%eax
0889528e +0x8f8:  mov    %eax,(%esp)
08895291 +0x8fb:  call   080c6baa <_GLOBAL__I_g_ServerString_+0x115>  ; global constructors keyed to g_ServerString_+0x115
08895296 +0x900:  mov    %esi,%eax
08895298 +0x902:  mov    %ebx,%edx
0889529a +0x904:  jmp    088952ae <+0x918>
0889529c +0x906:  lea    -0x74(%ebp),%eax
0889529f +0x909:  mov    %eax,(%esp)
088952a2 +0x90c:  call   080c6baa <_GLOBAL__I_g_ServerString_+0x115>  ; global constructors keyed to g_ServerString_+0x115
088952a7 +0x911:  mov    $0x1,%esi
088952ac +0x916:  jmp    088952c9 <+0x933>
088952ae +0x918:  mov    %edx,%ebx
088952b0 +0x91a:  mov    %eax,%esi
088952b2 +0x91c:  lea    -0x10c(%ebp),%eax
088952b8 +0x922:  mov    %eax,(%esp)
088952bb +0x925:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088952c0 +0x92a:  mov    %esi,%eax
088952c2 +0x92c:  mov    %ebx,%edx
088952c4 +0x92e:  jmp    088955da <+0xc44>
088952c9 +0x933:  lea    -0x10c(%ebp),%eax
088952cf +0x939:  mov    %eax,(%esp)
088952d2 +0x93c:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088952d7 +0x941:  test   %esi,%esi
088952d9 +0x943:  je     088955f8 <+0xc62>
088952df +0x949:  jmp    088951b5 <+0x81f>
088952e4 +0x94e:  movl   $"[action point medal reward]",0x4(%esp)
088952ec +0x956:  lea    -0xd0(%ebp),%eax
088952f2 +0x95c:  mov    %eax,(%esp)
088952f5 +0x95f:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088952fa +0x964:  test   %al,%al
088952fc +0x966:  je     08895394 <+0x9fe>
08895302 +0x96c:  lea    -0x116(%ebp),%eax
08895308 +0x972:  mov    %eax,(%esp)
0889530b +0x975:  call   08895712 <_GLOBAL__I__ZN8APSystem24CActionPointEtcParameter9ClearDataEv+0xc0>  ; global constructors keyed to APSystem::CActionPointEtcParameter::ClearData()+0xc0
08895310 +0x97a:  lea    -0xd1(%ebp),%eax
08895316 +0x980:  mov    %eax,(%esp)
08895319 +0x983:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0889531e +0x988:  mov    %ax,-0x116(%ebp)
08895325 +0x98f:  movzbl -0xd1(%ebp),%eax
0889532c +0x996:  xor    $0x1,%eax
0889532f +0x999:  test   %al,%al
08895331 +0x99b:  je     08895339 <+0x9a3>
08895333 +0x99d:  nop
08895334 +0x99e:  jmp    088949f0 <+0x5a>
08895339 +0x9a3:  lea    -0xd1(%ebp),%eax
0889533f +0x9a9:  mov    %eax,(%esp)
08895342 +0x9ac:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08895347 +0x9b1:  mov    %ax,-0x114(%ebp)
0889534e +0x9b8:  lea    -0xd1(%ebp),%eax
08895354 +0x9be:  mov    %eax,(%esp)
08895357 +0x9c1:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0889535c +0x9c6:  mov    %eax,-0x112(%ebp)
08895362 +0x9cc:  lea    -0xd1(%ebp),%eax
08895368 +0x9d2:  mov    %eax,(%esp)
0889536b +0x9d5:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08895370 +0x9da:  mov    %ax,-0x10e(%ebp)
08895377 +0x9e1:  mov    0xc(%ebp),%eax
0889537a +0x9e4:  lea    0x60(%eax),%edx
0889537d +0x9e7:  lea    -0x116(%ebp),%eax
08895383 +0x9ed:  mov    %eax,0x4(%esp)
08895387 +0x9f1:  mov    %edx,(%esp)
0889538a +0x9f4:  call   08895a38 <_GLOBAL__I__ZN8APSystem24CActionPointEtcParameter9ClearDataEv+0x3e6>  ; global constructors keyed to APSystem::CActionPointEtcParameter::ClearData()+0x3e6
0889538f +0x9f9:  jmp    08895302 <+0x96c>
08895394 +0x9fe:  movl   $"[action point today reward]",0x4(%esp)
0889539c +0xa06:  lea    -0xd0(%ebp),%eax
088953a2 +0xa0c:  mov    %eax,(%esp)
088953a5 +0xa0f:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088953aa +0xa14:  test   %al,%al
088953ac +0xa16:  je     088949ef <+0x59>
088953b2 +0xa1c:  lea    -0x124(%ebp),%eax
088953b8 +0xa22:  mov    %eax,(%esp)
088953bb +0xa25:  call   08895736 <_GLOBAL__I__ZN8APSystem24CActionPointEtcParameter9ClearDataEv+0xe4>  ; global constructors keyed to APSystem::CActionPointEtcParameter::ClearData()+0xe4
088953c0 +0xa2a:  lea    -0xd1(%ebp),%eax
088953c6 +0xa30:  mov    %eax,(%esp)
088953c9 +0xa33:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088953ce +0xa38:  mov    %eax,-0x18(%ebp)
088953d1 +0xa3b:  movzbl -0xd1(%ebp),%eax
088953d8 +0xa42:  xor    $0x1,%eax
088953db +0xa45:  test   %al,%al
088953dd +0xa47:  je     088953e5 <+0xa4f>
088953df +0xa49:  nop
088953e0 +0xa4a:  jmp    088949f0 <+0x5a>
088953e5 +0xa4f:  subl   $0x1,-0x18(%ebp)
088953e9 +0xa53:  mov    -0x18(%ebp),%eax
088953ec +0xa56:  mov    %eax,-0x124(%ebp)
088953f2 +0xa5c:  mov    -0x124(%ebp),%eax
088953f8 +0xa62:  mov    %eax,(%esp)
088953fb +0xa65:  call   08894976 <_ZN8APSystem24CActionPointEtcParameter22IsValidTodayRewardItemENS_22_SIG_LOAD_ACTION_POINT16_TodayRewardItemE>  ; APSystem::CActionPointEtcParameter::IsValidTodayRewardItem(APSystem::_SIG_LOAD_ACTION_POINT::_TodayRewardItem)
08895400 +0xa6a:  xor    $0x1,%eax
08895403 +0xa6d:  test   %al,%al
08895405 +0xa6f:  je     08895411 <+0xa7b>
08895407 +0xa71:  mov    $0xfa,%ebx
0889540c +0xa76:  jmp    088955f8 <+0xc62>
08895411 +0xa7b:  lea    -0xd1(%ebp),%eax
08895417 +0xa81:  mov    %eax,(%esp)
0889541a +0xa84:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0889541f +0xa89:  mov    %ax,-0x120(%ebp)
08895426 +0xa90:  lea    -0xd1(%ebp),%eax
0889542c +0xa96:  mov    %eax,(%esp)
0889542f +0xa99:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08895434 +0xa9e:  mov    %ax,-0x11e(%ebp)
0889543b +0xaa5:  lea    -0xd1(%ebp),%eax
08895441 +0xaab:  mov    %eax,(%esp)
08895444 +0xaae:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08895449 +0xab3:  mov    %eax,-0x11c(%ebp)
0889544f +0xab9:  lea    -0xd1(%ebp),%eax
08895455 +0xabf:  mov    %eax,(%esp)
08895458 +0xac2:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0889545d +0xac7:  mov    %ax,-0x118(%ebp)
08895464 +0xace:  mov    0xc(%ebp),%eax
08895467 +0xad1:  lea    0x6c(%eax),%edx
0889546a +0xad4:  lea    -0x124(%ebp),%eax
08895470 +0xada:  mov    %eax,0x4(%esp)
08895474 +0xade:  mov    %edx,(%esp)
08895477 +0xae1:  call   08895aac <_GLOBAL__I__ZN8APSystem24CActionPointEtcParameter9ClearDataEv+0x45a>  ; global constructors keyed to APSystem::CActionPointEtcParameter::ClearData()+0x45a
0889547c +0xae6:  jmp    088953b2 <+0xa1c>
08895481 +0xaeb:  nop
08895482 +0xaec:  movl   $0x0,-0x3c(%ebp)
08895489 +0xaf3:  mov    0xc(%ebp),%edx
0889548c +0xaf6:  lea    -0x6c(%ebp),%eax
0889548f +0xaf9:  mov    %edx,0x4(%esp)
08895493 +0xafd:  mov    %eax,(%esp)
08895496 +0xb00:  call   08895b20 <_GLOBAL__I__ZN8APSystem24CActionPointEtcParameter9ClearDataEv+0x4ce>  ; global constructors keyed to APSystem::CActionPointEtcParameter::ClearData()+0x4ce
0889549b +0xb05:  sub    $0x4,%esp
0889549e +0xb08:  lea    -0x6c(%ebp),%eax
088954a1 +0xb0b:  mov    %eax,0x4(%esp)
088954a5 +0xb0f:  lea    -0xd8(%ebp),%eax
088954ab +0xb15:  mov    %eax,(%esp)
088954ae +0xb18:  call   08895b46 <_GLOBAL__I__ZN8APSystem24CActionPointEtcParameter9ClearDataEv+0x4f4>  ; global constructors keyed to APSystem::CActionPointEtcParameter::ClearData()+0x4f4
088954b3 +0xb1d:  jmp    0889558f <+0xbf9>
088954b8 +0xb22:  lea    -0xd8(%ebp),%eax
088954be +0xb28:  mov    %eax,(%esp)
088954c1 +0xb2b:  call   08122bc8 <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x13b>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x13b
088954c6 +0xb30:  add    $0x4,%eax
088954c9 +0xb33:  mov    %eax,-0x14(%ebp)
088954cc +0xb36:  mov    -0x14(%ebp),%eax
088954cf +0xb39:  mov    %eax,(%esp)
088954d2 +0xb3c:  call   08122bd6 <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x149>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x149
088954d7 +0xb41:  mov    %eax,-0x10(%ebp)
088954da +0xb44:  movl   $0x0,-0xc(%ebp)
088954e1 +0xb4b:  jmp    0889555e <+0xbc8>
088954e3 +0xb4d:  addl   $0x1,-0x3c(%ebp)
088954e7 +0xb51:  mov    -0xc(%ebp),%eax
088954ea +0xb54:  mov    %eax,0x4(%esp)
088954ee +0xb58:  mov    -0x14(%ebp),%eax
088954f1 +0xb5b:  mov    %eax,(%esp)
088954f4 +0xb5e:  call   08122bf8 <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x16b>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x16b
088954f9 +0xb63:  mov    %eax,-0x48(%ebp)
088954fc +0xb66:  mov    -0xc(%ebp),%eax
088954ff +0xb69:  mov    %eax,0x4(%esp)
08895503 +0xb6d:  mov    -0x14(%ebp),%eax
08895506 +0xb70:  mov    %eax,(%esp)
08895509 +0xb73:  call   08122bf8 <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x16b>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x16b
0889550e +0xb78:  mov    %eax,%edx
08895510 +0xb7a:  lea    -0x50(%ebp),%eax
08895513 +0xb7d:  lea    -0x48(%ebp),%ecx
08895516 +0xb80:  mov    %ecx,0x8(%esp)
0889551a +0xb84:  mov    %edx,0x4(%esp)
0889551e +0xb88:  mov    %eax,(%esp)
08895521 +0xb8b:  call   08895b55 <_GLOBAL__I__ZN8APSystem24CActionPointEtcParameter9ClearDataEv+0x503>  ; global constructors keyed to APSystem::CActionPointEtcParameter::ClearData()+0x503
08895526 +0xb90:  sub    $0x4,%esp
08895529 +0xb93:  lea    -0x50(%ebp),%eax
0889552c +0xb96:  mov    %eax,0x4(%esp)
08895530 +0xb9a:  lea    -0x58(%ebp),%eax
08895533 +0xb9d:  mov    %eax,(%esp)
08895536 +0xba0:  call   08895b98 <_GLOBAL__I__ZN8APSystem24CActionPointEtcParameter9ClearDataEv+0x546>  ; global constructors keyed to APSystem::CActionPointEtcParameter::ClearData()+0x546
0889553b +0xba5:  mov    0xc(%ebp),%eax
0889553e +0xba8:  lea    0x18(%eax),%ecx
08895541 +0xbab:  lea    -0x60(%ebp),%eax
08895544 +0xbae:  lea    -0x58(%ebp),%edx
08895547 +0xbb1:  mov    %edx,0x8(%esp)
0889554b +0xbb5:  mov    %ecx,0x4(%esp)
0889554f +0xbb9:  mov    %eax,(%esp)
08895552 +0xbbc:  call   08895bca <_GLOBAL__I__ZN8APSystem24CActionPointEtcParameter9ClearDataEv+0x578>  ; global constructors keyed to APSystem::CActionPointEtcParameter::ClearData()+0x578
08895557 +0xbc1:  sub    $0x4,%esp
0889555a +0xbc4:  addl   $0x1,-0xc(%ebp)
0889555e +0xbc8:  mov    -0xc(%ebp),%eax
08895561 +0xbcb:  cmp    -0x10(%ebp),%eax
08895564 +0xbce:  setb   %al
08895567 +0xbd1:  test   %al,%al
08895569 +0xbd3:  jne    088954e3 <+0xb4d>
0889556f +0xbd9:  lea    -0x44(%ebp),%eax
08895572 +0xbdc:  movl   $0x0,0x8(%esp)
0889557a +0xbe4:  lea    -0xd8(%ebp),%edx
08895580 +0xbea:  mov    %edx,0x4(%esp)
08895584 +0xbee:  mov    %eax,(%esp)
08895587 +0xbf1:  call   08122b8a <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0xfd>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0xfd
0889558c +0xbf6:  sub    $0x4,%esp
0889558f +0xbf9:  mov    0xc(%ebp),%edx
08895592 +0xbfc:  lea    -0x64(%ebp),%eax
08895595 +0xbff:  mov    %edx,0x4(%esp)
08895599 +0xc03:  mov    %eax,(%esp)
0889559c +0xc06:  call   08895810 <_GLOBAL__I__ZN8APSystem24CActionPointEtcParameter9ClearDataEv+0x1be>  ; global constructors keyed to APSystem::CActionPointEtcParameter::ClearData()+0x1be
088955a1 +0xc0b:  sub    $0x4,%esp
088955a4 +0xc0e:  lea    -0x64(%ebp),%eax
088955a7 +0xc11:  mov    %eax,0x4(%esp)
088955ab +0xc15:  lea    -0x68(%ebp),%eax
088955ae +0xc18:  mov    %eax,(%esp)
088955b1 +0xc1b:  call   08895b46 <_GLOBAL__I__ZN8APSystem24CActionPointEtcParameter9ClearDataEv+0x4f4>  ; global constructors keyed to APSystem::CActionPointEtcParameter::ClearData()+0x4f4
088955b6 +0xc20:  lea    -0x68(%ebp),%eax
088955b9 +0xc23:  mov    %eax,0x4(%esp)
088955bd +0xc27:  lea    -0xd8(%ebp),%eax
088955c3 +0xc2d:  mov    %eax,(%esp)
088955c6 +0xc30:  call   08122b76 <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0xe9>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0xe9
088955cb +0xc35:  test   %al,%al
088955cd +0xc37:  jne    088954b8 <+0xb22>
088955d3 +0xc3d:  mov    $0x0,%ebx
088955d8 +0xc42:  jmp    088955f8 <+0xc62>
088955da +0xc44:  mov    %edx,%ebx
088955dc +0xc46:  mov    %eax,%esi
088955de +0xc48:  lea    -0xd0(%ebp),%eax
088955e4 +0xc4e:  mov    %eax,(%esp)
088955e7 +0xc51:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088955ec +0xc56:  mov    %esi,%eax
088955ee +0xc58:  mov    %ebx,%edx
088955f0 +0xc5a:  mov    %eax,(%esp)
088955f3 +0xc5d:  call   08ae3750 <_Unwind_Resume>
088955f8 +0xc62:  lea    -0xd0(%ebp),%eax
088955fe +0xc68:  mov    %eax,(%esp)
08895601 +0xc6b:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08895606 +0xc70:  mov    %ebx,%eax
08895608 +0xc72:  lea    -0x8(%ebp),%esp
0889560b +0xc75:  add    $0x0,%esp
0889560e +0xc78:  pop    %ebx
0889560f +0xc79:  pop    %esi
08895610 +0xc7a:  pop    %ebp
08895611 +0xc7b:  ret
```

## 反编译 C

```c
// APSystem::CActionPointEtcParameter::importActionPointSystemEtcScript @ 0x8894996

/* APSystem::CActionPointEtcParameter::importActionPointSystemEtcScript(char const*,
   APSystem::CActionPointEtcParameter&) */

undefined4
APSystem::CActionPointEtcParameter::importActionPointSystemEtcScript
          (char *param_1,CActionPointEtcParameter *param_2)

{
  char cVar1;
  bool bVar2;
  char *__s;
  CActionPointEx **ppCVar3;
  undefined4 unaff_EBX;
  int iVar4;
  undefined2 local_158;
  undefined4 local_156;
  char acStack_152 [6];
  undefined2 local_14c;
  undefined1 local_14a;
  undefined1 local_149;
  undefined1 local_148;
  vector<int,std::allocator<int>> avStack_144 [12];
  undefined4 local_138;
  string asStack_134 [4];
  string asStack_130 [4];
  undefined1 local_12c;
  int local_128;
  undefined2 local_124;
  undefined2 local_122;
  undefined4 local_120;
  undefined2 local_11c;
  undefined2 local_11a;
  undefined2 local_118;
  undefined4 local_116;
  undefined2 local_112;
  string local_110 [4];
  undefined4 local_10c;
  string local_108 [4];
  undefined4 local_104;
  vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>> local_100 [12];
  int local_f4;
  _Rb_tree_iterator<std::pair<unsigned_short_const,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>>>
  local_f0 [4];
  undefined4 local_ec;
  string local_e8 [4];
  char *local_e4;
  string local_e0 [4];
  _Rb_tree_const_iterator<std::pair<unsigned_short_const,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>>>
  local_dc [7];
  bool local_d5;
  string local_d4;
  string local_d0 [4];
  map<unsigned_short,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>>>>
  local_cc [4];
  pair local_c8 [8];
  pair<unsigned_short_const,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>>
  local_c0 [16];
  pair<unsigned_short,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>>
  local_b0 [16];
  pair local_a0 [8];
  pair<unsigned_int_const,std::string> local_98 [8];
  pair<int,std::string> local_90 [8];
  pair local_88 [8];
  pair<unsigned_int_const,std::string> local_80 [8];
  pair<int,std::string> local_78 [8];
  map<unsigned_short,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>>>>
  local_70 [4];
  _Rb_tree_const_iterator<std::pair<unsigned_short_const,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>>>
  local_6c [4];
  map<unsigned_short,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>>>>
  local_68 [4];
  pair local_64 [8];
  pair<unsigned_short_const,APSystem::CActionPointEx_const*> local_5c [8];
  ushort local_54 [4];
  undefined4 local_4c;
  _Rb_tree_const_iterator<std::pair<unsigned_short_const,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>>>
  local_48 [4];
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  char *local_28;
  int local_24;
  int local_20;
  int local_1c;
  vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>> *local_18;
  uint local_14;
  uint local_10;
  
  std::string::string((string *)&local_d4);
  local_44 = 0;
  local_d5 = false;
                    /* try { // try from 088949c3 to 08894a43 has its CatchHandler @ 088955da */
  ClearData(param_2);
  cVar1 = loadRDARScriptFile("",param_1);
  if (cVar1 == '\x01') {
LAB_088949f0:
    cVar1 = ScanType((string *)&local_d4,true);
    if (cVar1 == '\x01') {
      bVar2 = std::operator==(&local_d4,"[action point list]");
      if (bVar2) {
        local_3c = 0;
        do {
          CActionPointEx::CActionPointEx((CActionPointEx *)&local_158);
                    /* try { // try from 08894a4d to 08894bd5 has its CatchHandler @ 08894ff3 */
          local_38 = ScanInt(&local_d5);
          if (local_d5 == true) {
            local_158 = (undefined2)local_38;
            local_12c = ScanInt(&local_d5);
            if (local_d5 == true) {
              local_34 = ScanInt(&local_d5);
              if (local_d5 == true) {
                local_14c = (undefined2)local_34;
                local_30 = ScanInt(&local_d5);
                if (local_d5 == true) {
                  local_156 = local_30;
                  cVar1 = IsValidActionGroupIndex(local_30);
                  if (cVar1 == '\x01') {
                    local_2c = ScanInt(&local_d5);
                    if (local_d5 == true) {
                      local_14a = (undefined1)local_2c;
                      for (local_24 = 0; local_24 < 5; local_24 = local_24 + 1) {
                        local_20 = ScanInt(&local_d5);
                        if (local_d5 != true) {
                          unaff_EBX = 0x6d;
                          iVar4 = 1;
                          goto LAB_0889500e;
                        }
                        if (local_20 != 0) {
                          acStack_152[local_24] = -(char)local_20;
                        }
                      }
                      std::string::string(local_e0);
                    /* try { // try from 08894bdf to 08894c9d has its CatchHandler @ 08894fbb */
                      cVar1 = ScanStr(local_e0);
                      if (cVar1 == '\x01') {
                        local_e4 = (char *)0x0;
                        local_28 = (char *)0x0;
                        __s = (char *)std::string::c_str(local_e0);
                        local_28 = strtok_r(__s,",",&local_e4);
                        while (local_28 != (char *)0x0) {
                          local_f4 = atoi(local_28);
                          std::vector<int,std::allocator<int>>::push_back(avStack_144,&local_f4);
                          local_28 = strtok_r((char *)0x0,",",&local_e4);
                        }
                        std::string::string(local_e8);
                    /* try { // try from 08894ca7 to 08894ce3 has its CatchHandler @ 08894f83 */
                        cVar1 = ScanStr(local_e8);
                        if (cVar1 == '\x01') {
                          local_ec = 0;
                          std::string::string(local_d0,local_e8);
                    /* try { // try from 08894cf7 to 08894cfb has its CatchHandler @ 08894d13 */
                          cVar1 = ConvertWeekdayStringToInt(local_d0,&local_ec);
                    /* try { // try from 08894d0c to 08894d10 has its CatchHandler @ 08894f83 */
                          std::string::~string(local_d0);
                          if (cVar1 == '\x01') {
                            local_138 = local_ec;
                          }
                          else {
                            local_138 = 7;
                          }
                    /* try { // try from 08894d55 to 08894e66 has its CatchHandler @ 08894f83 */
                          local_149 = ScanInt(&local_d5);
                          if (local_d5 == true) {
                            local_148 = ScanInt(&local_d5);
                            if (local_d5 == true) {
                              cVar1 = ScanStr(asStack_134);
                              if (cVar1 == '\x01') {
                                cVar1 = ScanStr(asStack_130);
                                if (cVar1 == '\x01') {
                                  std::
                                  map<unsigned_short,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>>>>
                                  ::find((ushort *)local_f0);
                                  std::
                                  map<unsigned_short,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>>>>
                                  ::end(local_cc);
                                  cVar1 = std::
                                          _Rb_tree_iterator<std::pair<unsigned_short_const,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>>>
                                          ::operator==(local_f0,(_Rb_tree_iterator *)local_cc);
                                  if (cVar1 == '\0') {
                                    iVar4 = std::
                                            _Rb_tree_iterator<std::pair<unsigned_short_const,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>>>
                                            ::operator->(local_f0);
                                    std::
                                    vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>
                                    ::push_back((vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>
                                                 *)(iVar4 + 4),(CActionPointEx *)&local_158);
                                  }
                                  else {
                                    std::
                                    vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>
                                    ::vector(local_100);
                    /* try { // try from 08894e7a to 08894ea3 has its CatchHandler @ 08894f31 */
                                    std::
                                    vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>
                                    ::push_back(local_100,(CActionPointEx *)&local_158);
                                    std::
                                    make_pair<unsigned_short&,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>&>
                                              ((ushort *)local_b0,(vector *)&local_14c);
                    /* try { // try from 08894eba to 08894ebe has its CatchHandler @ 08894f09 */
                                    std::
                                    pair<unsigned_short_const,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>>
                                    ::
                                    pair<unsigned_short,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>>
                                              (local_c0,local_b0);
                    /* try { // try from 08894ed9 to 08894edd has its CatchHandler @ 08894ef1 */
                                    std::
                                    map<unsigned_short,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>>>>
                                    ::insert(local_c8);
                    /* try { // try from 08894eea to 08894eee has its CatchHandler @ 08894f09 */
                                    std::
                                    pair<unsigned_short_const,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>>
                                    ::~pair(local_c0);
                    /* try { // try from 08894f2a to 08894f2e has its CatchHandler @ 08894f31 */
                                    std::
                                    pair<unsigned_short,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>>
                                    ::~pair(local_b0);
                    /* try { // try from 08894f52 to 08894f7b has its CatchHandler @ 08894f83 */
                                    std::
                                    vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>
                                    ::~vector(local_100);
                                  }
                                  bVar2 = true;
                                }
                                else {
                                  unaff_EBX = 0xad;
                                  bVar2 = false;
                                }
                              }
                              else {
                                unaff_EBX = 0xaa;
                                bVar2 = false;
                              }
                            }
                            else {
                              unaff_EBX = 0xa7;
                              bVar2 = false;
                            }
                          }
                          else {
                            unaff_EBX = 0xa4;
                            bVar2 = false;
                          }
                        }
                        else {
                          unaff_EBX = 0x9c;
                          bVar2 = false;
                        }
                    /* try { // try from 08894fa4 to 08894fa8 has its CatchHandler @ 08894fbb */
                        std::string::~string(local_e8);
                        if (bVar2) {
                          bVar2 = true;
                        }
                        else {
                          bVar2 = false;
                        }
                      }
                      else {
                        unaff_EBX = 0x76;
                        bVar2 = false;
                      }
                    /* try { // try from 08894fdc to 08894fe0 has its CatchHandler @ 08894ff3 */
                      std::string::~string(local_e0);
                      if (bVar2) {
                        iVar4 = 2;
                      }
                      else {
                        iVar4 = 1;
                      }
                    }
                    else {
                      unaff_EBX = 0x65;
                      iVar4 = 1;
                    }
                  }
                  else {
                    unaff_EBX = 0x62;
                    iVar4 = 1;
                  }
                }
                else {
                  iVar4 = 0;
                }
              }
              else {
                unaff_EBX = 0x5b;
                iVar4 = 1;
              }
            }
            else {
              unaff_EBX = 0x57;
              iVar4 = 1;
            }
          }
          else {
            iVar4 = 0;
          }
LAB_0889500e:
                    /* try { // try from 08895017 to 08895085 has its CatchHandler @ 088955da */
          CActionPointEx::~CActionPointEx((CActionPointEx *)&local_158);
          if (iVar4 == 0) goto LAB_088949f0;
          if (iVar4 == 1) goto LAB_088955f8;
        } while( true );
      }
      bVar2 = std::operator==(&local_d4,"[action point user message]");
      if (bVar2) {
        while (local_104 = ScanInt(&local_d5), local_d5 == true) {
          std::string::string(local_108);
                    /* try { // try from 0889508f to 088950cb has its CatchHandler @ 08895161 */
          cVar1 = ScanStr(local_108);
          if (cVar1 == '\x01') {
            std::make_pair<int&,std::string&>((int *)local_90,(string *)&local_104);
                    /* try { // try from 088950e2 to 088950e6 has its CatchHandler @ 08895134 */
            std::pair<unsigned_int_const,std::string>::pair<int,std::string>(local_98,local_90);
                    /* try { // try from 08895104 to 08895108 has its CatchHandler @ 0889511c */
            std::
            map<unsigned_int,std::string,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::string>>>
            ::insert(local_a0);
                    /* try { // try from 08895115 to 08895119 has its CatchHandler @ 08895134 */
            std::pair<unsigned_int_const,std::string>::~pair(local_98);
                    /* try { // try from 08895155 to 08895159 has its CatchHandler @ 08895161 */
            std::pair<int,std::string>::~pair(local_90);
          }
          else {
            unaff_EBX = 199;
          }
                    /* try { // try from 08895185 to 088951ea has its CatchHandler @ 088955da */
          std::string::~string(local_108);
          if (cVar1 != '\x01') goto LAB_088955f8;
        }
      }
      else {
        bVar2 = std::operator==(&local_d4,"[action point system message]");
        if (bVar2) {
          while (local_10c = ScanInt(&local_d5), local_d5 == true) {
            std::string::string(local_110);
                    /* try { // try from 088951f4 to 0889522d has its CatchHandler @ 088952ae */
            cVar1 = ScanStr(local_110);
            if (cVar1 == '\x01') {
              std::make_pair<int&,std::string&>((int *)local_78,(string *)&local_10c);
                    /* try { // try from 0889523e to 08895242 has its CatchHandler @ 08895287 */
              std::pair<unsigned_int_const,std::string>::pair<int,std::string>(local_80,local_78);
                    /* try { // try from 0889525d to 08895261 has its CatchHandler @ 08895272 */
              std::
              map<unsigned_int,std::string,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::string>>>
              ::insert(local_88);
                    /* try { // try from 0889526b to 0889526f has its CatchHandler @ 08895287 */
              std::pair<unsigned_int_const,std::string>::~pair(local_80);
                    /* try { // try from 088952a2 to 088952a6 has its CatchHandler @ 088952ae */
              std::pair<int,std::string>::~pair(local_78);
            }
            else {
              unaff_EBX = 0xd5;
            }
                    /* try { // try from 088952d2 to 088955a0 has its CatchHandler @ 088955da */
            std::string::~string(local_110);
            if (cVar1 != '\x01') goto LAB_088955f8;
          }
        }
        else {
          bVar2 = std::operator==(&local_d4,"[action point medal reward]");
          if (bVar2) {
            while( true ) {
              _MedalRewardItem::_MedalRewardItem((_MedalRewardItem *)&local_11a);
              local_11a = ScanInt(&local_d5);
              if (local_d5 != true) break;
              local_118 = ScanInt(&local_d5);
              local_116 = ScanInt(&local_d5);
              local_112 = ScanInt(&local_d5);
              std::vector<APSystem::_MedalRewardItem,std::allocator<APSystem::_MedalRewardItem>>::
              push_back((vector<APSystem::_MedalRewardItem,std::allocator<APSystem::_MedalRewardItem>>
                         *)(param_2 + 0x60),(_MedalRewardItem *)&local_11a);
            }
          }
          else {
            bVar2 = std::operator==(&local_d4,"[action point today reward]");
            if (bVar2) {
              while( true ) {
                _TodayRewardItem::_TodayRewardItem((_TodayRewardItem *)&local_128);
                local_1c = ScanInt(&local_d5);
                if (local_d5 != true) break;
                local_128 = local_1c + -1;
                local_1c = local_128;
                cVar1 = IsValidTodayRewardItem(local_128);
                if (cVar1 != '\x01') {
                  unaff_EBX = 0xfa;
                  goto LAB_088955f8;
                }
                local_124 = ScanInt(&local_d5);
                local_122 = ScanInt(&local_d5);
                local_120 = ScanInt(&local_d5);
                local_11c = ScanInt(&local_d5);
                std::vector<APSystem::_TodayRewardItem,std::allocator<APSystem::_TodayRewardItem>>::
                push_back((vector<APSystem::_TodayRewardItem,std::allocator<APSystem::_TodayRewardItem>>
                           *)(param_2 + 0x6c),(_TodayRewardItem *)&local_128);
              }
            }
          }
        }
      }
      goto LAB_088949f0;
    }
    local_40 = 0;
    std::
    map<unsigned_short,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>>>>
    ::begin(local_70);
    std::
    _Rb_tree_const_iterator<std::pair<unsigned_short_const,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>>>
    ::_Rb_tree_const_iterator(local_dc,(_Rb_tree_iterator *)local_70);
    while( true ) {
      std::
      map<unsigned_short,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>>>>
      ::end(local_68);
      std::
      _Rb_tree_const_iterator<std::pair<unsigned_short_const,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>>>
      ::_Rb_tree_const_iterator(local_6c,(_Rb_tree_iterator *)local_68);
      cVar1 = std::
              _Rb_tree_const_iterator<std::pair<unsigned_short_const,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>>>
              ::operator!=(local_dc,(_Rb_tree_const_iterator *)local_6c);
      if (cVar1 == '\0') break;
      iVar4 = std::
              _Rb_tree_const_iterator<std::pair<unsigned_short_const,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>>>
              ::operator->(local_dc);
      local_18 = (vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>> *)
                 (iVar4 + 4);
      local_14 = std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>::
                 size(local_18);
      for (local_10 = 0; local_10 < local_14; local_10 = local_10 + 1) {
        local_40 = local_40 + 1;
        local_4c = std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>::
                   operator[](local_18,local_10);
        ppCVar3 = (CActionPointEx **)
                  std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>::
                  operator[](local_18,local_10);
        std::make_pair<unsigned_short_const&,APSystem::CActionPointEx_const*>(local_54,ppCVar3);
        std::pair<unsigned_short_const,APSystem::CActionPointEx_const*>::
        pair<unsigned_short,APSystem::CActionPointEx_const*>(local_5c,(pair *)local_54);
        std::
        map<unsigned_short,APSystem::CActionPointEx_const*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,APSystem::CActionPointEx_const*>>>
        ::insert(local_64);
      }
      std::
      _Rb_tree_const_iterator<std::pair<unsigned_short_const,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>>>
      ::operator++(local_48,(int)local_dc);
    }
    unaff_EBX = 0;
  }
  else {
    unaff_EBX = 0;
  }
LAB_088955f8:
  std::string::~string((string *)&local_d4);
  return unaff_EBX;
}
```
