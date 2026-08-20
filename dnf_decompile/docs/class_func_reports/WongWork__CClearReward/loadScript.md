# loadScript

`_ZN8WongWork12CClearReward10loadScriptEPKc`

`WongWork::CClearReward::loadScript(char const*)`

| 类 | 地址 |
|---|---|
| `WongWork::CClearReward` | `0x085392c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085392c0  _ZN8WongWork12CClearReward10loadScriptEPKc
#           WongWork::CClearReward::loadScript(char const*)
# range [0x085392c0, 0x08539c3d]
085392c0 +0x000:  push   %ebp
085392c1 +0x001:  mov    %esp,%ebp
085392c3 +0x003:  push   %esi
085392c4 +0x004:  push   %ebx
085392c5 +0x005:  sub    $0x90,%esp
085392cb +0x00b:  mov    0xc(%ebp),%eax
085392ce +0x00e:  mov    %eax,0x4(%esp)
085392d2 +0x012:  movl   $"",(%esp)
085392d9 +0x019:  call   088bbd29 <_Z18loadRDARScriptFilePKcS0_>  ; loadRDARScriptFile(char const*, char const*)
085392de +0x01e:  xor    $0x1,%eax
085392e1 +0x021:  test   %al,%al
085392e3 +0x023:  je     085392ef <+0x2f>
085392e5 +0x025:  mov    $0x943,%ebx
085392ea +0x02a:  jmp    08539c31 <+0x971>
085392ef +0x02f:  lea    -0x54(%ebp),%eax
085392f2 +0x032:  mov    %eax,(%esp)
085392f5 +0x035:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
085392fa +0x03a:  movl   $0x0,-0x44(%ebp)
08539301 +0x041:  movb   $0x0,-0x55(%ebp)
08539305 +0x045:  jmp    0853930e <+0x4e>
08539307 +0x047:  nop
08539308 +0x048:  jmp    0853930e <+0x4e>
0853930a +0x04a:  nop
0853930b +0x04b:  jmp    0853930e <+0x4e>
0853930d +0x04d:  nop
0853930e +0x04e:  movl   $0x1,0x4(%esp)
08539316 +0x056:  lea    -0x54(%ebp),%eax
08539319 +0x059:  mov    %eax,(%esp)
0853931c +0x05c:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
08539321 +0x061:  xor    $0x1,%eax
08539324 +0x064:  test   %al,%al
08539326 +0x066:  jne    08539bde <+0x91e>
0853932c +0x06c:  movl   $"[drop prob count]",0x4(%esp)
08539334 +0x074:  lea    -0x54(%ebp),%eax
08539337 +0x077:  mov    %eax,(%esp)
0853933a +0x07a:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0853933f +0x07f:  test   %al,%al
08539341 +0x081:  je     085393d5 <+0x115>
08539347 +0x087:  lea    -0x55(%ebp),%eax
0853934a +0x08a:  mov    %eax,(%esp)
0853934d +0x08d:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08539352 +0x092:  mov    %eax,-0x40(%ebp)
08539355 +0x095:  movzbl -0x55(%ebp),%eax
08539359 +0x099:  xor    $0x1,%eax
0853935c +0x09c:  test   %al,%al
0853935e +0x09e:  je     0853936a <+0xaa>
08539360 +0x0a0:  mov    $0x951,%ebx
08539365 +0x0a5:  jmp    08539c26 <+0x966>
0853936a +0x0aa:  movl   $0x0,-0x3c(%ebp)
08539371 +0x0b1:  jmp    085393c5 <+0x105>
08539373 +0x0b3:  movl   $0x0,-0x50(%ebp)
0853937a +0x0ba:  movl   $0x0,-0x4c(%ebp)
08539381 +0x0c1:  movl   $0x0,-0x48(%ebp)
08539388 +0x0c8:  mov    -0x40(%ebp),%ecx
0853938b +0x0cb:  mov    -0x3c(%ebp),%edx
0853938e +0x0ce:  mov    %edx,%eax
08539390 +0x0d0:  add    %eax,%eax
08539392 +0x0d2:  add    %edx,%eax
08539394 +0x0d4:  shl    $0x2,%eax
08539397 +0x0d7:  add    $0x10,%eax
0853939a +0x0da:  add    0x8(%ebp),%eax
0853939d +0x0dd:  lea    0x8(%eax),%edx
085393a0 +0x0e0:  mov    -0x50(%ebp),%eax
085393a3 +0x0e3:  mov    %eax,0x8(%esp)
085393a7 +0x0e7:  mov    -0x4c(%ebp),%eax
085393aa +0x0ea:  mov    %eax,0xc(%esp)
085393ae +0x0ee:  mov    -0x48(%ebp),%eax
085393b1 +0x0f1:  mov    %eax,0x10(%esp)
085393b5 +0x0f5:  mov    %ecx,0x4(%esp)
085393b9 +0x0f9:  mov    %edx,(%esp)
085393bc +0x0fc:  call   0853be66 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x20f2>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x20f2
085393c1 +0x101:  addl   $0x1,-0x3c(%ebp)
085393c5 +0x105:  cmpl   $0x5,-0x3c(%ebp)
085393c9 +0x109:  setle  %al
085393cc +0x10c:  test   %al,%al
085393ce +0x10e:  jne    08539373 <+0xb3>
085393d0 +0x110:  jmp    0853930e <+0x4e>
085393d5 +0x115:  movl   $"[drop prob]",0x4(%esp)
085393dd +0x11d:  lea    -0x54(%ebp),%eax
085393e0 +0x120:  mov    %eax,(%esp)
085393e3 +0x123:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
085393e8 +0x128:  test   %al,%al
085393ea +0x12a:  je     085395fc <+0x33c>
085393f0 +0x130:  lea    -0x5c(%ebp),%eax
085393f3 +0x133:  mov    %eax,(%esp)
085393f6 +0x136:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
085393fb +0x13b:  lea    -0x5c(%ebp),%eax
085393fe +0x13e:  mov    %eax,(%esp)
08539401 +0x141:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
08539406 +0x146:  xor    $0x1,%eax
08539409 +0x149:  test   %al,%al
0853940b +0x14b:  je     08539417 <+0x157>
0853940d +0x14d:  mov    $0x0,%esi
08539412 +0x152:  jmp    085395db <+0x31b>
08539417 +0x157:  movl   $"default",0x4(%esp)
0853941f +0x15f:  lea    -0x5c(%ebp),%eax
08539422 +0x162:  mov    %eax,(%esp)
08539425 +0x165:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0853942a +0x16a:  test   %al,%al
0853942c +0x16c:  je     0853943a <+0x17a>
0853942e +0x16e:  movl   $0x0,-0x38(%ebp)
08539435 +0x175:  jmp    085394ec <+0x22c>
0853943a +0x17a:  movl   $"event",0x4(%esp)
08539442 +0x182:  lea    -0x5c(%ebp),%eax
08539445 +0x185:  mov    %eax,(%esp)
08539448 +0x188:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0853944d +0x18d:  test   %al,%al
0853944f +0x18f:  je     0853945d <+0x19d>
08539451 +0x191:  movl   $0x1,-0x38(%ebp)
08539458 +0x198:  jmp    085394ec <+0x22c>
0853945d +0x19d:  movl   $"event2",0x4(%esp)
08539465 +0x1a5:  lea    -0x5c(%ebp),%eax
08539468 +0x1a8:  mov    %eax,(%esp)
0853946b +0x1ab:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08539470 +0x1b0:  test   %al,%al
08539472 +0x1b2:  je     0853947d <+0x1bd>
08539474 +0x1b4:  movl   $0x2,-0x38(%ebp)
0853947b +0x1bb:  jmp    085394ec <+0x22c>
0853947d +0x1bd:  movl   $"pcroom default",0x4(%esp)
08539485 +0x1c5:  lea    -0x5c(%ebp),%eax
08539488 +0x1c8:  mov    %eax,(%esp)
0853948b +0x1cb:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08539490 +0x1d0:  test   %al,%al
08539492 +0x1d2:  je     0853949d <+0x1dd>
08539494 +0x1d4:  movl   $0x3,-0x38(%ebp)
0853949b +0x1db:  jmp    085394ec <+0x22c>
0853949d +0x1dd:  movl   $"pcroom event",0x4(%esp)
085394a5 +0x1e5:  lea    -0x5c(%ebp),%eax
085394a8 +0x1e8:  mov    %eax,(%esp)
085394ab +0x1eb:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
085394b0 +0x1f0:  test   %al,%al
085394b2 +0x1f2:  je     085394bd <+0x1fd>
085394b4 +0x1f4:  movl   $0x4,-0x38(%ebp)
085394bb +0x1fb:  jmp    085394ec <+0x22c>
085394bd +0x1fd:  movl   $"pcroom bonus",0x4(%esp)
085394c5 +0x205:  lea    -0x5c(%ebp),%eax
085394c8 +0x208:  mov    %eax,(%esp)
085394cb +0x20b:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
085394d0 +0x210:  test   %al,%al
085394d2 +0x212:  je     085394dd <+0x21d>
085394d4 +0x214:  movl   $0x5,-0x38(%ebp)
085394db +0x21b:  jmp    085394ec <+0x22c>
085394dd +0x21d:  mov    $0x969,%ebx
085394e2 +0x222:  mov    $0x1,%esi
085394e7 +0x227:  jmp    085395db <+0x31b>
085394ec +0x22c:  mov    0x8(%ebp),%eax
085394ef +0x22f:  lea    0x18(%eax),%ecx
085394f2 +0x232:  mov    -0x38(%ebp),%edx
085394f5 +0x235:  mov    %edx,%eax
085394f7 +0x237:  add    %eax,%eax
085394f9 +0x239:  add    %edx,%eax
085394fb +0x23b:  shl    $0x2,%eax
085394fe +0x23e:  lea    (%ecx,%eax,1),%eax
08539501 +0x241:  mov    %eax,-0x34(%ebp)
08539504 +0x244:  movl   $0x0,-0x30(%ebp)
0853950b +0x24b:  jmp    085395a3 <+0x2e3>
08539510 +0x250:  mov    -0x30(%ebp),%eax
08539513 +0x253:  mov    %eax,0x4(%esp)
08539517 +0x257:  mov    -0x34(%ebp),%eax
0853951a +0x25a:  mov    %eax,(%esp)
0853951d +0x25d:  call   0853bd58 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x1fe4>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x1fe4
08539522 +0x262:  mov    %eax,-0x2c(%ebp)
08539525 +0x265:  lea    -0x55(%ebp),%eax
08539528 +0x268:  mov    %eax,(%esp)
0853952b +0x26b:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08539530 +0x270:  mov    -0x2c(%ebp),%edx
08539533 +0x273:  mov    %eax,(%edx)
08539535 +0x275:  movzbl -0x55(%ebp),%eax
08539539 +0x279:  xor    $0x1,%eax
0853953c +0x27c:  test   %al,%al
0853953e +0x27e:  je     0853954f <+0x28f>
08539540 +0x280:  mov    $0x96f,%ebx
08539545 +0x285:  mov    $0x1,%esi
0853954a +0x28a:  jmp    085395db <+0x31b>
0853954f +0x28f:  lea    -0x55(%ebp),%eax
08539552 +0x292:  mov    %eax,(%esp)
08539555 +0x295:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0853955a +0x29a:  mov    -0x2c(%ebp),%edx
0853955d +0x29d:  mov    %eax,0x4(%edx)
08539560 +0x2a0:  movzbl -0x55(%ebp),%eax
08539564 +0x2a4:  xor    $0x1,%eax
08539567 +0x2a7:  test   %al,%al
08539569 +0x2a9:  je     08539577 <+0x2b7>
0853956b +0x2ab:  mov    $0x971,%ebx
08539570 +0x2b0:  mov    $0x1,%esi
08539575 +0x2b5:  jmp    085395db <+0x31b>
08539577 +0x2b7:  lea    -0x55(%ebp),%eax
0853957a +0x2ba:  mov    %eax,(%esp)
0853957d +0x2bd:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08539582 +0x2c2:  mov    -0x2c(%ebp),%edx
08539585 +0x2c5:  mov    %eax,0x8(%edx)
08539588 +0x2c8:  movzbl -0x55(%ebp),%eax
0853958c +0x2cc:  xor    $0x1,%eax
0853958f +0x2cf:  test   %al,%al
08539591 +0x2d1:  je     0853959f <+0x2df>
08539593 +0x2d3:  mov    $0x973,%ebx
08539598 +0x2d8:  mov    $0x1,%esi
0853959d +0x2dd:  jmp    085395db <+0x31b>
0853959f +0x2df:  addl   $0x1,-0x30(%ebp)
085395a3 +0x2e3:  mov    -0x34(%ebp),%eax
085395a6 +0x2e6:  mov    %eax,(%esp)
085395a9 +0x2e9:  call   0853bd36 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x1fc2>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x1fc2
085395ae +0x2ee:  cmp    -0x30(%ebp),%eax
085395b1 +0x2f1:  seta   %al
085395b4 +0x2f4:  test   %al,%al
085395b6 +0x2f6:  jne    08539510 <+0x250>
085395bc +0x2fc:  mov    $0x2,%esi
085395c1 +0x301:  jmp    085395db <+0x31b>
085395c3 +0x303:  mov    %edx,%ebx
085395c5 +0x305:  mov    %eax,%esi
085395c7 +0x307:  lea    -0x5c(%ebp),%eax
085395ca +0x30a:  mov    %eax,(%esp)
085395cd +0x30d:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
085395d2 +0x312:  mov    %esi,%eax
085395d4 +0x314:  mov    %ebx,%edx
085395d6 +0x316:  jmp    08539c0b <+0x94b>
085395db +0x31b:  lea    -0x5c(%ebp),%eax
085395de +0x31e:  mov    %eax,(%esp)
085395e1 +0x321:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
085395e6 +0x326:  test   %esi,%esi
085395e8 +0x328:  je     08539307 <+0x47>
085395ee +0x32e:  cmp    $0x1,%esi
085395f1 +0x331:  je     08539c26 <+0x966>
085395f7 +0x337:  jmp    085393f0 <+0x130>
085395fc +0x33c:  movl   $"[drop kind prob]",0x4(%esp)
08539604 +0x344:  lea    -0x54(%ebp),%eax
08539607 +0x347:  mov    %eax,(%esp)
0853960a +0x34a:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0853960f +0x34f:  test   %al,%al
08539611 +0x351:  je     08539669 <+0x3a9>
08539613 +0x353:  lea    -0x55(%ebp),%eax
08539616 +0x356:  mov    %eax,(%esp)
08539619 +0x359:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0853961e +0x35e:  mov    0x8(%ebp),%edx
08539621 +0x361:  mov    %eax,0xa8(%edx)
08539627 +0x367:  movzbl -0x55(%ebp),%eax
0853962b +0x36b:  xor    $0x1,%eax
0853962e +0x36e:  test   %al,%al
08539630 +0x370:  je     0853963c <+0x37c>
08539632 +0x372:  mov    $0x97a,%ebx
08539637 +0x377:  jmp    08539c26 <+0x966>
0853963c +0x37c:  lea    -0x55(%ebp),%eax
0853963f +0x37f:  mov    %eax,(%esp)
08539642 +0x382:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08539647 +0x387:  mov    0x8(%ebp),%edx
0853964a +0x38a:  mov    %eax,0xac(%edx)
08539650 +0x390:  movzbl -0x55(%ebp),%eax
08539654 +0x394:  xor    $0x1,%eax
08539657 +0x397:  test   %al,%al
08539659 +0x399:  je     0853930a <+0x4a>
0853965f +0x39f:  mov    $0x97c,%ebx
08539664 +0x3a4:  jmp    08539c26 <+0x966>
08539669 +0x3a9:  movl   $"[drop item type prob]",0x4(%esp)
08539671 +0x3b1:  lea    -0x54(%ebp),%eax
08539674 +0x3b4:  mov    %eax,(%esp)
08539677 +0x3b7:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0853967c +0x3bc:  test   %al,%al
0853967e +0x3be:  je     085396c9 <+0x409>
08539680 +0x3c0:  movl   $0x1,-0x28(%ebp)
08539687 +0x3c7:  jmp    085396b9 <+0x3f9>
08539689 +0x3c9:  mov    -0x28(%ebp),%esi
0853968c +0x3cc:  lea    -0x55(%ebp),%eax
0853968f +0x3cf:  mov    %eax,(%esp)
08539692 +0x3d2:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08539697 +0x3d7:  mov    0x8(%ebp),%edx
0853969a +0x3da:  lea    0x2c(%esi),%ecx
0853969d +0x3dd:  mov    %eax,(%edx,%ecx,4)
085396a0 +0x3e0:  movzbl -0x55(%ebp),%eax
085396a4 +0x3e4:  xor    $0x1,%eax
085396a7 +0x3e7:  test   %al,%al
085396a9 +0x3e9:  je     085396b5 <+0x3f5>
085396ab +0x3eb:  mov    $0x984,%ebx
085396b0 +0x3f0:  jmp    08539c26 <+0x966>
085396b5 +0x3f5:  addl   $0x1,-0x28(%ebp)
085396b9 +0x3f9:  cmpl   $0x4,-0x28(%ebp)
085396bd +0x3fd:  setle  %al
085396c0 +0x400:  test   %al,%al
085396c2 +0x402:  jne    08539689 <+0x3c9>
085396c4 +0x404:  jmp    0853930e <+0x4e>
085396c9 +0x409:  movl   $"[basis of rarity dicision]",0x4(%esp)
085396d1 +0x411:  lea    -0x54(%ebp),%eax
085396d4 +0x414:  mov    %eax,(%esp)
085396d7 +0x417:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
085396dc +0x41c:  test   %al,%al
085396de +0x41e:  je     0853972a <+0x46a>
085396e0 +0x420:  movl   $0x0,-0x24(%ebp)
085396e7 +0x427:  jmp    0853971a <+0x45a>
085396e9 +0x429:  mov    -0x24(%ebp),%esi
085396ec +0x42c:  lea    -0x55(%ebp),%eax
085396ef +0x42f:  mov    %eax,(%esp)
085396f2 +0x432:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
085396f7 +0x437:  mov    0x8(%ebp),%edx
085396fa +0x43a:  lea    0x3c(%esi),%ecx
085396fd +0x43d:  mov    %eax,0xc(%edx,%ecx,4)
08539701 +0x441:  movzbl -0x55(%ebp),%eax
08539705 +0x445:  xor    $0x1,%eax
08539708 +0x448:  test   %al,%al
0853970a +0x44a:  je     08539716 <+0x456>
0853970c +0x44c:  mov    $0x98d,%ebx
08539711 +0x451:  jmp    08539c26 <+0x966>
08539716 +0x456:  addl   $0x1,-0x24(%ebp)
0853971a +0x45a:  cmpl   $0x5,-0x24(%ebp)
0853971e +0x45e:  setle  %al
08539721 +0x461:  test   %al,%al
08539723 +0x463:  jne    085396e9 <+0x429>
08539725 +0x465:  jmp    0853930e <+0x4e>
0853972a +0x46a:  movl   $"[dungeon difficulty drop bonusrate]",0x4(%esp)
08539732 +0x472:  lea    -0x54(%ebp),%eax
08539735 +0x475:  mov    %eax,(%esp)
08539738 +0x478:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0853973d +0x47d:  test   %al,%al
0853973f +0x47f:  je     0853978b <+0x4cb>
08539741 +0x481:  movl   $0x0,-0x20(%ebp)
08539748 +0x488:  jmp    0853977b <+0x4bb>
0853974a +0x48a:  mov    -0x20(%ebp),%esi
0853974d +0x48d:  lea    -0x55(%ebp),%eax
08539750 +0x490:  mov    %eax,(%esp)
08539753 +0x493:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08539758 +0x498:  mov    0x8(%ebp),%edx
0853975b +0x49b:  lea    0x30(%esi),%ecx
0853975e +0x49e:  mov    %eax,0x4(%edx,%ecx,4)
08539762 +0x4a2:  movzbl -0x55(%ebp),%eax
08539766 +0x4a6:  xor    $0x1,%eax
08539769 +0x4a9:  test   %al,%al
0853976b +0x4ab:  je     08539777 <+0x4b7>
0853976d +0x4ad:  mov    $0x99a,%ebx
08539772 +0x4b2:  jmp    08539c26 <+0x966>
08539777 +0x4b7:  addl   $0x1,-0x20(%ebp)
0853977b +0x4bb:  cmpl   $0x4,-0x20(%ebp)
0853977f +0x4bf:  setle  %al
08539782 +0x4c2:  test   %al,%al
08539784 +0x4c4:  jne    0853974a <+0x48a>
08539786 +0x4c6:  jmp    0853930e <+0x4e>
0853978b +0x4cb:  movl   $"[party member drop bonusrate]",0x4(%esp)
08539793 +0x4d3:  lea    -0x54(%ebp),%eax
08539796 +0x4d6:  mov    %eax,(%esp)
08539799 +0x4d9:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0853979e +0x4de:  test   %al,%al
085397a0 +0x4e0:  je     085397ec <+0x52c>
085397a2 +0x4e2:  movl   $0x0,-0x1c(%ebp)
085397a9 +0x4e9:  jmp    085397dc <+0x51c>
085397ab +0x4eb:  mov    -0x1c(%ebp),%esi
085397ae +0x4ee:  lea    -0x55(%ebp),%eax
085397b1 +0x4f1:  mov    %eax,(%esp)
085397b4 +0x4f4:  call   088bc4e5 <_Z9ScanFloatPb>  ; ScanFloat(bool*)
085397b9 +0x4f9:  mov    0x8(%ebp),%eax
085397bc +0x4fc:  lea    0x38(%esi),%edx
085397bf +0x4ff:  fstps  0xc(%eax,%edx,4)
085397c3 +0x503:  movzbl -0x55(%ebp),%eax
085397c7 +0x507:  xor    $0x1,%eax
085397ca +0x50a:  test   %al,%al
085397cc +0x50c:  je     085397d8 <+0x518>
085397ce +0x50e:  mov    $0x9a3,%ebx
085397d3 +0x513:  jmp    08539c26 <+0x966>
085397d8 +0x518:  addl   $0x1,-0x1c(%ebp)
085397dc +0x51c:  cmpl   $0x3,-0x1c(%ebp)
085397e0 +0x520:  setle  %al
085397e3 +0x523:  test   %al,%al
085397e5 +0x525:  jne    085397ab <+0x4eb>
085397e7 +0x527:  jmp    0853930e <+0x4e>
085397ec +0x52c:  movl   $"[dungeon difficulty gold drop bonusrate]",0x4(%esp)
085397f4 +0x534:  lea    -0x54(%ebp),%eax
085397f7 +0x537:  mov    %eax,(%esp)
085397fa +0x53a:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
085397ff +0x53f:  test   %al,%al
08539801 +0x541:  je     0853984d <+0x58d>
08539803 +0x543:  movl   $0x0,-0x18(%ebp)
0853980a +0x54a:  jmp    0853983d <+0x57d>
0853980c +0x54c:  mov    -0x18(%ebp),%esi
0853980f +0x54f:  lea    -0x55(%ebp),%eax
08539812 +0x552:  mov    %eax,(%esp)
08539815 +0x555:  call   088bc4e5 <_Z9ScanFloatPb>  ; ScanFloat(bool*)
0853981a +0x55a:  mov    0x8(%ebp),%eax
0853981d +0x55d:  lea    0x34(%esi),%edx
08539820 +0x560:  fstps  0x8(%eax,%edx,4)
08539824 +0x564:  movzbl -0x55(%ebp),%eax
08539828 +0x568:  xor    $0x1,%eax
0853982b +0x56b:  test   %al,%al
0853982d +0x56d:  je     08539839 <+0x579>
0853982f +0x56f:  mov    $0x9b0,%ebx
08539834 +0x574:  jmp    08539c26 <+0x966>
08539839 +0x579:  addl   $0x1,-0x18(%ebp)
0853983d +0x57d:  cmpl   $0x4,-0x18(%ebp)
08539841 +0x581:  setle  %al
08539844 +0x584:  test   %al,%al
08539846 +0x586:  jne    0853980c <+0x54c>
08539848 +0x588:  jmp    0853930e <+0x4e>
0853984d +0x58d:  movl   $"[item drop ref table]",0x4(%esp)
08539855 +0x595:  lea    -0x54(%ebp),%eax
08539858 +0x598:  mov    %eax,(%esp)
0853985b +0x59b:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08539860 +0x5a0:  test   %al,%al
08539862 +0x5a2:  je     0853992a <+0x66a>
08539868 +0x5a8:  mov    0x8(%ebp),%eax
0853986b +0x5ab:  movb   $0x0,0x114(%eax)
08539872 +0x5b2:  mov    0x8(%ebp),%eax
08539875 +0x5b5:  movb   $0x0,0x115(%eax)
0853987c +0x5bc:  movl   $0x1,-0x14(%ebp)
08539883 +0x5c3:  jmp    08539913 <+0x653>
08539888 +0x5c8:  lea    -0x55(%ebp),%eax
0853988b +0x5cb:  mov    %eax,(%esp)
0853988e +0x5ce:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08539893 +0x5d3:  mov    %eax,-0x44(%ebp)
08539896 +0x5d6:  movzbl -0x55(%ebp),%eax
0853989a +0x5da:  xor    $0x1,%eax
0853989d +0x5dd:  test   %al,%al
0853989f +0x5df:  je     085398ab <+0x5eb>
085398a1 +0x5e1:  mov    $0x9bc,%ebx
085398a6 +0x5e6:  jmp    08539c26 <+0x966>
085398ab +0x5eb:  mov    -0x44(%ebp),%esi
085398ae +0x5ee:  lea    -0x55(%ebp),%eax
085398b1 +0x5f1:  mov    %eax,(%esp)
085398b4 +0x5f4:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
085398b9 +0x5f9:  mov    %eax,%edx
085398bb +0x5fb:  mov    0x8(%ebp),%eax
085398be +0x5fe:  lea    0x88(%esi),%ecx
085398c4 +0x604:  mov    %dl,0x4(%eax,%ecx,2)
085398c8 +0x608:  movzbl -0x55(%ebp),%eax
085398cc +0x60c:  xor    $0x1,%eax
085398cf +0x60f:  test   %al,%al
085398d1 +0x611:  je     085398dd <+0x61d>
085398d3 +0x613:  mov    $0x9c0,%ebx
085398d8 +0x618:  jmp    08539c26 <+0x966>
085398dd +0x61d:  mov    -0x44(%ebp),%esi
085398e0 +0x620:  lea    -0x55(%ebp),%eax
085398e3 +0x623:  mov    %eax,(%esp)
085398e6 +0x626:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
085398eb +0x62b:  mov    %eax,%edx
085398ed +0x62d:  mov    0x8(%ebp),%eax
085398f0 +0x630:  lea    0x88(%esi),%ecx
085398f6 +0x636:  mov    %dl,0x5(%eax,%ecx,2)
085398fa +0x63a:  movzbl -0x55(%ebp),%eax
085398fe +0x63e:  xor    $0x1,%eax
08539901 +0x641:  test   %al,%al
08539903 +0x643:  je     0853990f <+0x64f>
08539905 +0x645:  mov    $0x9c4,%ebx
0853990a +0x64a:  jmp    08539c26 <+0x966>
0853990f +0x64f:  addl   $0x1,-0x14(%ebp)
08539913 +0x653:  cmpl   $0xc8,-0x14(%ebp)
0853991a +0x65a:  setle  %al
0853991d +0x65d:  test   %al,%al
0853991f +0x65f:  jne    08539888 <+0x5c8>
08539925 +0x665:  jmp    0853930e <+0x4e>
0853992a +0x66a:  movl   $"[gold card cost table]",0x4(%esp)
08539932 +0x672:  lea    -0x54(%ebp),%eax
08539935 +0x675:  mov    %eax,(%esp)
08539938 +0x678:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0853993d +0x67d:  test   %al,%al
0853993f +0x67f:  je     08539993 <+0x6d3>
08539941 +0x681:  jmp    08539944 <+0x684>
08539943 +0x683:  nop
08539944 +0x684:  lea    -0x55(%ebp),%eax
08539947 +0x687:  mov    %eax,(%esp)
0853994a +0x68a:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0853994f +0x68f:  mov    %eax,-0x44(%ebp)
08539952 +0x692:  movzbl -0x55(%ebp),%eax
08539956 +0x696:  xor    $0x1,%eax
08539959 +0x699:  test   %al,%al
0853995b +0x69b:  je     08539963 <+0x6a3>
0853995d +0x69d:  nop
0853995e +0x69e:  jmp    0853930e <+0x4e>
08539963 +0x6a3:  mov    -0x44(%ebp),%esi
08539966 +0x6a6:  lea    -0x55(%ebp),%eax
08539969 +0x6a9:  mov    %eax,(%esp)
0853996c +0x6ac:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08539971 +0x6b1:  mov    0x8(%ebp),%edx
08539974 +0x6b4:  lea    0x8e04(%esi),%ecx
0853997a +0x6ba:  mov    %eax,0x4(%edx,%ecx,4)
0853997e +0x6be:  movzbl -0x55(%ebp),%eax
08539982 +0x6c2:  xor    $0x1,%eax
08539985 +0x6c5:  test   %al,%al
08539987 +0x6c7:  je     08539943 <+0x683>
08539989 +0x6c9:  mov    $0x9d1,%ebx
0853998e +0x6ce:  jmp    08539c26 <+0x966>
08539993 +0x6d3:  movl   $"[gold card create rate]",0x4(%esp)
0853999b +0x6db:  lea    -0x54(%ebp),%eax
0853999e +0x6de:  mov    %eax,(%esp)
085399a1 +0x6e1:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
085399a6 +0x6e6:  test   %al,%al
085399a8 +0x6e8:  je     085399d7 <+0x717>
085399aa +0x6ea:  lea    -0x55(%ebp),%eax
085399ad +0x6ed:  mov    %eax,(%esp)
085399b0 +0x6f0:  call   088bc4e5 <_Z9ScanFloatPb>  ; ScanFloat(bool*)
085399b5 +0x6f5:  mov    0x8(%ebp),%eax
085399b8 +0x6f8:  fstps  &_ZL14gUnicodeBuffer+0x1960c(%eax)
085399be +0x6fe:  movzbl -0x55(%ebp),%eax
085399c2 +0x702:  xor    $0x1,%eax
085399c5 +0x705:  test   %al,%al
085399c7 +0x707:  je     0853930d <+0x4d>
085399cd +0x70d:  mov    $0x9d8,%ebx
085399d2 +0x712:  jmp    08539c26 <+0x966>
085399d7 +0x717:  movl   $"[pcroom card blank item]",0x4(%esp)
085399df +0x71f:  lea    -0x54(%ebp),%eax
085399e2 +0x722:  mov    %eax,(%esp)
085399e5 +0x725:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
085399ea +0x72a:  test   %al,%al
085399ec +0x72c:  je     08539a98 <+0x7d8>
085399f2 +0x732:  mov    0x8(%ebp),%eax
085399f5 +0x735:  movl   $0x0,&_ZL14gUnicodeBuffer+0x19648(%eax)
085399ff +0x73f:  lea    -0x55(%ebp),%eax
08539a02 +0x742:  mov    %eax,(%esp)
08539a05 +0x745:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08539a0a +0x74a:  mov    %eax,-0x68(%ebp)
08539a0d +0x74d:  movzbl -0x55(%ebp),%eax
08539a11 +0x751:  xor    $0x1,%eax
08539a14 +0x754:  test   %al,%al
08539a16 +0x756:  je     08539a1e <+0x75e>
08539a18 +0x758:  nop
08539a19 +0x759:  jmp    0853930e <+0x4e>
08539a1e +0x75e:  lea    -0x55(%ebp),%eax
08539a21 +0x761:  mov    %eax,(%esp)
08539a24 +0x764:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08539a29 +0x769:  mov    %eax,-0x64(%ebp)
08539a2c +0x76c:  movzbl -0x55(%ebp),%eax
08539a30 +0x770:  xor    $0x1,%eax
08539a33 +0x773:  test   %al,%al
08539a35 +0x775:  je     08539a41 <+0x781>
08539a37 +0x777:  mov    $0x9e6,%ebx
08539a3c +0x77c:  jmp    08539c26 <+0x966>
08539a41 +0x781:  lea    -0x55(%ebp),%eax
08539a44 +0x784:  mov    %eax,(%esp)
08539a47 +0x787:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08539a4c +0x78c:  mov    %eax,-0x60(%ebp)
08539a4f +0x78f:  movzbl -0x55(%ebp),%eax
08539a53 +0x793:  xor    $0x1,%eax
08539a56 +0x796:  test   %al,%al
08539a58 +0x798:  je     08539a64 <+0x7a4>
08539a5a +0x79a:  mov    $0x9e9,%ebx
08539a5f +0x79f:  jmp    08539c26 <+0x966>
08539a64 +0x7a4:  mov    0x8(%ebp),%eax
08539a67 +0x7a7:  lea    &_ZL14gUnicodeBuffer+0x1964c(%eax),%edx
08539a6d +0x7ad:  lea    -0x68(%ebp),%eax
08539a70 +0x7b0:  mov    %eax,0x4(%esp)
08539a74 +0x7b4:  mov    %edx,(%esp)
08539a77 +0x7b7:  call   0853bef0 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x217c>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x217c
08539a7c +0x7bc:  mov    0x8(%ebp),%eax
08539a7f +0x7bf:  mov    &_ZL14gUnicodeBuffer+0x19648(%eax),%edx
08539a85 +0x7c5:  mov    -0x68(%ebp),%eax
08539a88 +0x7c8:  add    %eax,%edx
08539a8a +0x7ca:  mov    0x8(%ebp),%eax
08539a8d +0x7cd:  mov    %edx,&_ZL14gUnicodeBuffer+0x19648(%eax)
08539a93 +0x7d3:  jmp    085399ff <+0x73f>
08539a98 +0x7d8:  movl   $"[reward item rate per map max count]",0x4(%esp)
08539aa0 +0x7e0:  lea    -0x54(%ebp),%eax
08539aa3 +0x7e3:  mov    %eax,(%esp)
08539aa6 +0x7e6:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08539aab +0x7eb:  test   %al,%al
08539aad +0x7ed:  je     08539b16 <+0x856>
08539aaf +0x7ef:  lea    -0x55(%ebp),%eax
08539ab2 +0x7f2:  mov    %eax,(%esp)
08539ab5 +0x7f5:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08539aba +0x7fa:  mov    %eax,-0x10(%ebp)
08539abd +0x7fd:  movzbl -0x55(%ebp),%eax
08539ac1 +0x801:  xor    $0x1,%eax
08539ac4 +0x804:  test   %al,%al
08539ac6 +0x806:  je     08539ace <+0x80e>
08539ac8 +0x808:  nop
08539ac9 +0x809:  jmp    0853930e <+0x4e>
08539ace +0x80e:  cmpl   $0x9,-0x10(%ebp)
08539ad2 +0x812:  jbe    08539ade <+0x81e>
08539ad4 +0x814:  mov    $0x9f6,%ebx
08539ad9 +0x819:  jmp    08539c26 <+0x966>
08539ade +0x81e:  lea    -0x55(%ebp),%eax
08539ae1 +0x821:  mov    %eax,(%esp)
08539ae4 +0x824:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08539ae9 +0x829:  mov    %eax,-0xc(%ebp)
08539aec +0x82c:  movzbl -0x55(%ebp),%eax
08539af0 +0x830:  xor    $0x1,%eax
08539af3 +0x833:  test   %al,%al
08539af5 +0x835:  je     08539b01 <+0x841>
08539af7 +0x837:  mov    $0x9f9,%ebx
08539afc +0x83c:  jmp    08539c26 <+0x966>
08539b01 +0x841:  mov    -0x10(%ebp),%edx
08539b04 +0x844:  mov    0x8(%ebp),%eax
08539b07 +0x847:  lea    0x8ed0(%edx),%ecx
08539b0d +0x84d:  mov    -0xc(%ebp),%edx
08539b10 +0x850:  mov    %edx,0xc(%eax,%ecx,4)
08539b14 +0x854:  jmp    08539aaf <+0x7ef>
08539b16 +0x856:  movl   $"[gold card blank item]",0x4(%esp)
08539b1e +0x85e:  lea    -0x54(%ebp),%eax
08539b21 +0x861:  mov    %eax,(%esp)
08539b24 +0x864:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08539b29 +0x869:  test   %al,%al
08539b2b +0x86b:  je     08539bd7 <+0x917>
08539b31 +0x871:  mov    0x8(%ebp),%eax
08539b34 +0x874:  movl   $0x0,&_ZL14gUnicodeBuffer+0x19610(%eax)
08539b3e +0x87e:  lea    -0x55(%ebp),%eax
08539b41 +0x881:  mov    %eax,(%esp)
08539b44 +0x884:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08539b49 +0x889:  mov    %eax,-0x74(%ebp)
08539b4c +0x88c:  movzbl -0x55(%ebp),%eax
08539b50 +0x890:  xor    $0x1,%eax
08539b53 +0x893:  test   %al,%al
08539b55 +0x895:  je     08539b5d <+0x89d>
08539b57 +0x897:  nop
08539b58 +0x898:  jmp    0853930e <+0x4e>
08539b5d +0x89d:  lea    -0x55(%ebp),%eax
08539b60 +0x8a0:  mov    %eax,(%esp)
08539b63 +0x8a3:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08539b68 +0x8a8:  mov    %eax,-0x70(%ebp)
08539b6b +0x8ab:  movzbl -0x55(%ebp),%eax
08539b6f +0x8af:  xor    $0x1,%eax
08539b72 +0x8b2:  test   %al,%al
08539b74 +0x8b4:  je     08539b80 <+0x8c0>
08539b76 +0x8b6:  mov    $0xa08,%ebx
08539b7b +0x8bb:  jmp    08539c26 <+0x966>
08539b80 +0x8c0:  lea    -0x55(%ebp),%eax
08539b83 +0x8c3:  mov    %eax,(%esp)
08539b86 +0x8c6:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08539b8b +0x8cb:  mov    %eax,-0x6c(%ebp)
08539b8e +0x8ce:  movzbl -0x55(%ebp),%eax
08539b92 +0x8d2:  xor    $0x1,%eax
08539b95 +0x8d5:  test   %al,%al
08539b97 +0x8d7:  je     08539ba3 <+0x8e3>
08539b99 +0x8d9:  mov    $0xa0b,%ebx
08539b9e +0x8de:  jmp    08539c26 <+0x966>
08539ba3 +0x8e3:  mov    0x8(%ebp),%eax
08539ba6 +0x8e6:  lea    &_ZL14gUnicodeBuffer+0x19614(%eax),%edx
08539bac +0x8ec:  lea    -0x74(%ebp),%eax
08539baf +0x8ef:  mov    %eax,0x4(%esp)
08539bb3 +0x8f3:  mov    %edx,(%esp)
08539bb6 +0x8f6:  call   0853bef0 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x217c>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x217c
08539bbb +0x8fb:  mov    0x8(%ebp),%eax
08539bbe +0x8fe:  mov    &_ZL14gUnicodeBuffer+0x19610(%eax),%edx
08539bc4 +0x904:  mov    -0x74(%ebp),%eax
08539bc7 +0x907:  add    %eax,%edx
08539bc9 +0x909:  mov    0x8(%ebp),%eax
08539bcc +0x90c:  mov    %edx,&_ZL14gUnicodeBuffer+0x19610(%eax)
08539bd2 +0x912:  jmp    08539b3e <+0x87e>
08539bd7 +0x917:  mov    $0xa41,%ebx
08539bdc +0x91c:  jmp    08539c26 <+0x966>
08539bde +0x91e:  nop
08539bdf +0x91f:  mov    0x8(%ebp),%eax
08539be2 +0x922:  lea    0x114(%eax),%edx
08539be8 +0x928:  mov    0x8(%ebp),%eax
08539beb +0x92b:  add    $0x2a8,%eax
08539bf0 +0x930:  movl   $0x0,0x8(%esp)
08539bf8 +0x938:  mov    %edx,0x4(%esp)
08539bfc +0x93c:  mov    %eax,(%esp)
08539bff +0x93f:  call   0853466c <_ZN8WongWork17CItemGenRateTable13generateTableEPNS_16stGenItemRange_tEb>  ; WongWork::CItemGenRateTable::generateTable(WongWork::stGenItemRange_t*, bool)
08539c04 +0x944:  mov    $0x0,%ebx
08539c09 +0x949:  jmp    08539c26 <+0x966>
08539c0b +0x94b:  mov    %edx,%ebx
08539c0d +0x94d:  mov    %eax,%esi
08539c0f +0x94f:  lea    -0x54(%ebp),%eax
08539c12 +0x952:  mov    %eax,(%esp)
08539c15 +0x955:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08539c1a +0x95a:  mov    %esi,%eax
08539c1c +0x95c:  mov    %ebx,%edx
08539c1e +0x95e:  mov    %eax,(%esp)
08539c21 +0x961:  call   08ae3750 <_Unwind_Resume>
08539c26 +0x966:  lea    -0x54(%ebp),%eax
08539c29 +0x969:  mov    %eax,(%esp)
08539c2c +0x96c:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08539c31 +0x971:  mov    %ebx,%eax
08539c33 +0x973:  add    $0x90,%esp
08539c39 +0x979:  pop    %ebx
08539c3a +0x97a:  pop    %esi
08539c3b +0x97b:  pop    %ebp
08539c3c +0x97c:  ret
08539c3d +0x97d:  nop
```

## 反编译 C

```c
// WongWork::CClearReward::loadScript @ 0x85392c0

/* WongWork::CClearReward::loadScript(char const*) */

undefined4 __thiscall WongWork::CClearReward::loadScript(CClearReward *this,char *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  CClearReward CVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 unaff_EBX;
  int iVar7;
  longdouble lVar8;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  string local_60;
  bool local_59;
  string local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  vector<WongWork::CClearReward::stGenItemProb_t,std::allocator<WongWork::CClearReward::stGenItemProb_t>>
  *local_38;
  uint local_34;
  undefined4 *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  undefined4 local_10;
  
  cVar2 = loadRDARScriptFile("",param_1);
  if (cVar2 == '\x01') {
    std::string::string((string *)&local_58);
    local_48 = 0;
    local_59 = false;
LAB_0853930e:
    do {
                    /* try { // try from 0853931c to 085393fa has its CatchHandler @ 08539c0b */
      cVar2 = ScanType((string *)&local_58,true);
      if (cVar2 != '\x01') {
        CItemGenRateTable::generateTable
                  ((CItemGenRateTable *)(this + 0x2a8),(stGenItemRange_t *)(this + 0x114),false);
        unaff_EBX = 0;
        goto LAB_08539c26;
      }
      bVar3 = std::operator==(&local_58,"[drop prob count]");
      if (bVar3) {
        local_44 = ScanInt(&local_59);
        if (local_59 != true) {
          unaff_EBX = 0x951;
          goto LAB_08539c26;
        }
        for (local_40 = 0; local_40 < 6; local_40 = local_40 + 1) {
          local_54 = 0;
          local_50 = 0;
          local_4c = 0;
          std::
          vector<WongWork::CClearReward::stGenItemProb_t,std::allocator<WongWork::CClearReward::stGenItemProb_t>>
          ::resize(this + local_40 * 0xc + 0x18,local_44,0,0,0);
        }
        goto LAB_0853930e;
      }
      bVar3 = std::operator==(&local_58,"[drop prob]");
      if (bVar3) {
        do {
          std::string::string((string *)&local_60);
                    /* try { // try from 08539401 to 08539581 has its CatchHandler @ 085395c3 */
          cVar2 = ScanStr((string *)&local_60);
          if (cVar2 == '\x01') {
            bVar3 = std::operator==(&local_60,"default");
            if (bVar3) {
              local_3c = 0;
            }
            else {
              bVar3 = std::operator==(&local_60,"event");
              if (bVar3) {
                local_3c = 1;
              }
              else {
                bVar3 = std::operator==(&local_60,"event2");
                if (bVar3) {
                  local_3c = 2;
                }
                else {
                  bVar3 = std::operator==(&local_60,"pcroom default");
                  if (bVar3) {
                    local_3c = 3;
                  }
                  else {
                    bVar3 = std::operator==(&local_60,"pcroom event");
                    if (bVar3) {
                      local_3c = 4;
                    }
                    else {
                      bVar3 = std::operator==(&local_60,"pcroom bonus");
                      if (!bVar3) {
                        unaff_EBX = 0x969;
                        iVar7 = 1;
                        goto LAB_085395db;
                      }
                      local_3c = 5;
                    }
                  }
                }
              }
            }
            local_38 = (vector<WongWork::CClearReward::stGenItemProb_t,std::allocator<WongWork::CClearReward::stGenItemProb_t>>
                        *)(this + local_3c * 0xc + 0x18);
            local_34 = 0;
            while (uVar6 = std::
                           vector<WongWork::CClearReward::stGenItemProb_t,std::allocator<WongWork::CClearReward::stGenItemProb_t>>
                           ::size(local_38), local_34 < uVar6) {
              local_30 = (undefined4 *)
                         std::
                         vector<WongWork::CClearReward::stGenItemProb_t,std::allocator<WongWork::CClearReward::stGenItemProb_t>>
                         ::operator[](local_38,local_34);
              uVar5 = ScanInt(&local_59);
              *local_30 = uVar5;
              if (local_59 != true) {
                unaff_EBX = 0x96f;
                iVar7 = 1;
                goto LAB_085395db;
              }
              uVar5 = ScanInt(&local_59);
              local_30[1] = uVar5;
              if (local_59 != true) {
                unaff_EBX = 0x971;
                iVar7 = 1;
                goto LAB_085395db;
              }
              uVar5 = ScanInt(&local_59);
              local_30[2] = uVar5;
              if (local_59 != true) {
                unaff_EBX = 0x973;
                iVar7 = 1;
                goto LAB_085395db;
              }
              local_34 = local_34 + 1;
            }
            iVar7 = 2;
          }
          else {
            iVar7 = 0;
          }
LAB_085395db:
                    /* try { // try from 085395e1 to 08539c03 has its CatchHandler @ 08539c0b */
          std::string::~string((string *)&local_60);
          if (iVar7 == 0) goto LAB_0853930e;
          if (iVar7 == 1) goto LAB_08539c26;
        } while( true );
      }
      bVar3 = std::operator==(&local_58,"[drop kind prob]");
      if (!bVar3) {
        bVar3 = std::operator==(&local_58,"[drop item type prob]");
        if (bVar3) {
          for (local_2c = 1; iVar7 = local_2c, local_2c < 5; local_2c = local_2c + 1) {
            uVar5 = ScanInt(&local_59);
            *(undefined4 *)(this + (iVar7 + 0x2c) * 4) = uVar5;
            if (local_59 != true) {
              unaff_EBX = 0x984;
              goto LAB_08539c26;
            }
          }
        }
        else {
          bVar3 = std::operator==(&local_58,"[basis of rarity dicision]");
          if (bVar3) {
            for (local_28 = 0; iVar7 = local_28, local_28 < 6; local_28 = local_28 + 1) {
              uVar5 = ScanInt(&local_59);
              *(undefined4 *)(this + (iVar7 + 0x3c) * 4 + 0xc) = uVar5;
              if (local_59 != true) {
                unaff_EBX = 0x98d;
                goto LAB_08539c26;
              }
            }
          }
          else {
            bVar3 = std::operator==(&local_58,"[dungeon difficulty drop bonusrate]");
            if (bVar3) {
              for (local_24 = 0; iVar7 = local_24, local_24 < 5; local_24 = local_24 + 1) {
                uVar5 = ScanInt(&local_59);
                *(undefined4 *)(this + (iVar7 + 0x30) * 4 + 4) = uVar5;
                if (local_59 != true) {
                  unaff_EBX = 0x99a;
                  goto LAB_08539c26;
                }
              }
            }
            else {
              bVar3 = std::operator==(&local_58,"[party member drop bonusrate]");
              if (bVar3) {
                for (local_20 = 0; iVar7 = local_20, local_20 < 4; local_20 = local_20 + 1) {
                  lVar8 = (longdouble)ScanFloat(&local_59);
                  *(float *)(this + (iVar7 + 0x38) * 4 + 0xc) = (float)lVar8;
                  if (local_59 != true) {
                    unaff_EBX = 0x9a3;
                    goto LAB_08539c26;
                  }
                }
              }
              else {
                bVar3 = std::operator==(&local_58,"[dungeon difficulty gold drop bonusrate]");
                if (bVar3) {
                  for (local_1c = 0; iVar7 = local_1c, local_1c < 5; local_1c = local_1c + 1) {
                    lVar8 = (longdouble)ScanFloat(&local_59);
                    *(float *)(this + (iVar7 + 0x34) * 4 + 8) = (float)lVar8;
                    if (local_59 != true) {
                      unaff_EBX = 0x9b0;
                      goto LAB_08539c26;
                    }
                  }
                }
                else {
                  bVar3 = std::operator==(&local_58,"[item drop ref table]");
                  if (bVar3) {
                    this[0x114] = (CClearReward)0x0;
                    this[0x115] = (CClearReward)0x0;
                    for (local_18 = 1; local_18 < 0xc9; local_18 = local_18 + 1) {
                      iVar7 = ScanInt(&local_59);
                      local_48 = iVar7;
                      if (local_59 != true) {
                        unaff_EBX = 0x9bc;
                        goto LAB_08539c26;
                      }
                      CVar4 = (CClearReward)ScanInt(&local_59);
                      iVar1 = local_48;
                      this[(iVar7 + 0x88) * 2 + 4] = CVar4;
                      if (local_59 != true) {
                        unaff_EBX = 0x9c0;
                        goto LAB_08539c26;
                      }
                      CVar4 = (CClearReward)ScanInt(&local_59);
                      this[(iVar1 + 0x88) * 2 + 5] = CVar4;
                      if (local_59 != true) {
                        unaff_EBX = 0x9c4;
                        goto LAB_08539c26;
                      }
                    }
                  }
                  else {
                    bVar3 = std::operator==(&local_58,"[gold card cost table]");
                    if (bVar3) {
                      while (iVar7 = ScanInt(&local_59), local_48 = iVar7, local_59 == true) {
                        uVar5 = ScanInt(&local_59);
                        *(undefined4 *)(this + (iVar7 + 0x8e04) * 4 + 4) = uVar5;
                        if (local_59 != true) {
                          unaff_EBX = 0x9d1;
                          goto LAB_08539c26;
                        }
                      }
                    }
                    else {
                      bVar3 = std::operator==(&local_58,"[gold card create rate]");
                      if (bVar3) {
                        lVar8 = (longdouble)ScanFloat(&local_59);
                        *(float *)(this + 0x23b38) = (float)lVar8;
                        if (local_59 != true) {
                          unaff_EBX = 0x9d8;
                          goto LAB_08539c26;
                        }
                      }
                      else {
                        bVar3 = std::operator==(&local_58,"[pcroom card blank item]");
                        if (bVar3) {
                          *(undefined4 *)(this + 0x23b74) = 0;
                          while (local_6c = ScanInt(&local_59), local_59 == true) {
                            local_68 = ScanInt(&local_59);
                            if (local_59 != true) {
                              unaff_EBX = 0x9e6;
                              goto LAB_08539c26;
                            }
                            local_64 = ScanInt(&local_59);
                            if (local_59 != true) {
                              unaff_EBX = 0x9e9;
                              goto LAB_08539c26;
                            }
                            std::
                            vector<WongWork::CClearReward::stGoldCardBlankItemInfo_t,std::allocator<WongWork::CClearReward::stGoldCardBlankItemInfo_t>>
                            ::push_back((vector<WongWork::CClearReward::stGoldCardBlankItemInfo_t,std::allocator<WongWork::CClearReward::stGoldCardBlankItemInfo_t>>
                                         *)(this + 0x23b78),(stGoldCardBlankItemInfo_t *)&local_6c);
                            *(int *)(this + 0x23b74) = *(int *)(this + 0x23b74) + local_6c;
                          }
                        }
                        else {
                          bVar3 = std::operator==(&local_58,"[reward item rate per map max count]");
                          if (bVar3) {
                            while (local_14 = ScanInt(&local_59), local_59 == true) {
                              if (9 < local_14) {
                                unaff_EBX = 0x9f6;
                                goto LAB_08539c26;
                              }
                              local_10 = ScanInt(&local_59);
                              if (local_59 != true) {
                                unaff_EBX = 0x9f9;
                                goto LAB_08539c26;
                              }
                              *(undefined4 *)(this + (local_14 + 0x8ed0) * 4 + 0xc) = local_10;
                            }
                          }
                          else {
                            bVar3 = std::operator==(&local_58,"[gold card blank item]");
                            if (!bVar3) {
                              unaff_EBX = 0xa41;
                              goto LAB_08539c26;
                            }
                            *(undefined4 *)(this + 0x23b3c) = 0;
                            while (local_78 = ScanInt(&local_59), local_59 == true) {
                              local_74 = ScanInt(&local_59);
                              if (local_59 != true) {
                                unaff_EBX = 0xa08;
                                goto LAB_08539c26;
                              }
                              local_70 = ScanInt(&local_59);
                              if (local_59 != true) {
                                unaff_EBX = 0xa0b;
                                goto LAB_08539c26;
                              }
                              std::
                              vector<WongWork::CClearReward::stGoldCardBlankItemInfo_t,std::allocator<WongWork::CClearReward::stGoldCardBlankItemInfo_t>>
                              ::push_back((vector<WongWork::CClearReward::stGoldCardBlankItemInfo_t,std::allocator<WongWork::CClearReward::stGoldCardBlankItemInfo_t>>
                                           *)(this + 0x23b40),(stGoldCardBlankItemInfo_t *)&local_78
                                         );
                              *(int *)(this + 0x23b3c) = *(int *)(this + 0x23b3c) + local_78;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_0853930e;
      }
      uVar5 = ScanInt(&local_59);
      *(undefined4 *)(this + 0xa8) = uVar5;
      if (local_59 != true) {
        unaff_EBX = 0x97a;
        goto LAB_08539c26;
      }
      uVar5 = ScanInt(&local_59);
      *(undefined4 *)(this + 0xac) = uVar5;
    } while (local_59 == true);
    unaff_EBX = 0x97c;
LAB_08539c26:
    std::string::~string((string *)&local_58);
  }
  else {
    unaff_EBX = 0x943;
  }
  return unaff_EBX;
}
```
