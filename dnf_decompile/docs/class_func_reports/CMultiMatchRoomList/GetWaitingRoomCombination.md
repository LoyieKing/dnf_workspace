# GetWaitingRoomCombination

`_ZN19CMultiMatchRoomList25GetWaitingRoomCombinationEP6IMatchiRSt6vectorIS1_SaIS1_EE`

`CMultiMatchRoomList::GetWaitingRoomCombination(IMatch*, int, std::vector<IMatch*, std::allocator<IMatch*> >&)`

| 类 | 地址 |
|---|---|
| `CMultiMatchRoomList` | `0x0856703c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0856703c  _ZN19CMultiMatchRoomList25GetWaitingRoomCombinationEP6IMatchiRSt6vectorIS1_SaIS1_EE
#           CMultiMatchRoomList::GetWaitingRoomCombination(IMatch*, int, std::vector<IMatch*, std::allocator<IMatch*> >&)
# range [0x0856703c, 0x085675cf]
0856703c +0x000:  push   %ebp
0856703d +0x001:  mov    %esp,%ebp
0856703f +0x003:  push   %edi
08567040 +0x004:  push   %esi
08567041 +0x005:  push   %ebx
08567042 +0x006:  sub    $0x13c,%esp
08567048 +0x00c:  movl   $0x0,-0x3c(%ebp)
0856704f +0x013:  lea    -0x98(%ebp),%ebx
08567055 +0x019:  mov    $0x0,%eax
0856705a +0x01e:  mov    $0xa,%edx
0856705f +0x023:  mov    %ebx,%edi
08567061 +0x025:  mov    %edx,%ecx
08567063 +0x027:  rep stos %eax,%es:(%edi)
08567065 +0x029:  lea    -0x110(%ebp),%ebx
0856706b +0x02f:  mov    %ebx,%edi
0856706d +0x031:  mov    $0x9,%esi
08567072 +0x036:  jmp    08567082 <+0x46>
08567074 +0x038:  mov    %edi,(%esp)
08567077 +0x03b:  call   08569768 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x1132>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x1132
0856707c +0x040:  add    $0xc,%edi
0856707f +0x043:  sub    $0x1,%esi
08567082 +0x046:  cmp    $0xffffffff,%esi
08567085 +0x049:  setne  %al
08567088 +0x04c:  test   %al,%al
0856708a +0x04e:  jne    08567074 <+0x38>
0856708c +0x050:  jmp    085670d0 <+0x94>
0856708e +0x052:  mov    %edx,%edi
08567090 +0x054:  mov    %eax,-0x120(%ebp)
08567096 +0x05a:  test   %ebx,%ebx
08567098 +0x05c:  je     085670c0 <+0x84>
0856709a +0x05e:  mov    $0x9,%eax
0856709f +0x063:  sub    %esi,%eax
085670a1 +0x065:  mov    %eax,%edx
085670a3 +0x067:  mov    %edx,%eax
085670a5 +0x069:  add    %eax,%eax
085670a7 +0x06b:  add    %edx,%eax
085670a9 +0x06d:  shl    $0x2,%eax
085670ac +0x070:  lea    (%ebx,%eax,1),%esi
085670af +0x073:  cmp    %ebx,%esi
085670b1 +0x075:  je     085670c0 <+0x84>
085670b3 +0x077:  sub    $0xc,%esi
085670b6 +0x07a:  mov    %esi,(%esp)
085670b9 +0x07d:  call   0856977c <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x1146>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x1146
085670be +0x082:  jmp    085670af <+0x73>
085670c0 +0x084:  mov    -0x120(%ebp),%eax
085670c6 +0x08a:  mov    %edi,%edx
085670c8 +0x08c:  mov    %eax,(%esp)
085670cb +0x08f:  call   08ae3750 <_Unwind_Resume>
085670d0 +0x094:  lea    -0x68(%ebp),%eax
085670d3 +0x097:  mov    %eax,(%esp)
085670d6 +0x09a:  call   085697da <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x11a4>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x11a4
085670db +0x09f:  movl   $0x0,-0x38(%ebp)
085670e2 +0x0a6:  movl   $0x0,-0x34(%ebp)
085670e9 +0x0ad:  jmp    08567401 <+0x3c5>
085670ee +0x0b2:  mov    0x10(%ebp),%ecx
085670f1 +0x0b5:  mov    -0x34(%ebp),%eax
085670f4 +0x0b8:  lea    (%eax,%eax,1),%edx
085670f7 +0x0bb:  lea    0x0(,%edx,8),%eax
085670fe +0x0c2:  sub    %edx,%eax
08567100 +0x0c4:  imul   $0x8c,%ecx,%edx
08567106 +0x0ca:  add    %edx,%eax
08567108 +0x0cc:  add    $&_ZZN19CMultiMatchRoomList25GetWaitingRoomCombinationEP6IMatchiRSt6vectorIS1_SaIS1_EEE16CombinationTable,%eax
0856710d +0x0d1:  movzbl (%eax),%eax
08567110 +0x0d4:  test   %al,%al
08567112 +0x0d6:  je     08567412 <+0x3d6>
08567118 +0x0dc:  movl   $0x0,-0x3c(%ebp)
0856711f +0x0e3:  movl   $0x0,-0x30(%ebp)
08567126 +0x0ea:  jmp    08567396 <+0x35a>
0856712b +0x0ef:  mov    0x10(%ebp),%ebx
0856712e +0x0f2:  mov    -0x34(%ebp),%edx
08567131 +0x0f5:  mov    -0x30(%ebp),%ecx
08567134 +0x0f8:  mov    %edx,%eax
08567136 +0x0fa:  shl    $0x3,%eax
08567139 +0x0fd:  sub    %edx,%eax
0856713b +0x0ff:  imul   $0x46,%ebx,%edx
0856713e +0x102:  add    %edx,%eax
08567140 +0x104:  add    %ecx,%eax
08567142 +0x106:  movzbl &_ZZN19CMultiMatchRoomList25GetWaitingRoomCombinationEP6IMatchiRSt6vectorIS1_SaIS1_EEE16CombinationTable(%eax,%eax,1),%eax
0856714a +0x10e:  test   %al,%al
0856714c +0x110:  je     085673a7 <+0x36b>
08567152 +0x116:  lea    -0x68(%ebp),%eax
08567155 +0x119:  mov    %eax,(%esp)
08567158 +0x11c:  call   08569854 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x121e>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x121e
0856715d +0x121:  mov    0x10(%ebp),%ebx
08567160 +0x124:  mov    -0x34(%ebp),%edx
08567163 +0x127:  mov    -0x30(%ebp),%ecx
08567166 +0x12a:  mov    %edx,%eax
08567168 +0x12c:  shl    $0x3,%eax
0856716b +0x12f:  sub    %edx,%eax
0856716d +0x131:  imul   $0x46,%ebx,%edx
08567170 +0x134:  add    %edx,%eax
08567172 +0x136:  add    %ecx,%eax
08567174 +0x138:  movzbl &_ZZN19CMultiMatchRoomList25GetWaitingRoomCombinationEP6IMatchiRSt6vectorIS1_SaIS1_EEE16CombinationTable(%eax,%eax,1),%eax
0856717c +0x140:  movzbl %al,%eax
0856717f +0x143:  mov    %eax,-0x50(%ebp)
08567182 +0x146:  mov    0x8(%ebp),%eax
08567185 +0x149:  lea    0x4(%eax),%ecx
08567188 +0x14c:  lea    -0x6c(%ebp),%eax
0856718b +0x14f:  lea    -0x50(%ebp),%edx
0856718e +0x152:  mov    %edx,0x8(%esp)
08567192 +0x156:  mov    %ecx,0x4(%esp)
08567196 +0x15a:  mov    %eax,(%esp)
08567199 +0x15d:  call   08569868 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x1232>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x1232
0856719e +0x162:  sub    $0x4,%esp
085671a1 +0x165:  lea    -0x6c(%ebp),%eax
085671a4 +0x168:  mov    %eax,(%esp)
085671a7 +0x16b:  call   08569894 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x125e>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x125e
085671ac +0x170:  lea    0x4(%eax),%edx
085671af +0x173:  lea    -0x68(%ebp),%eax
085671b2 +0x176:  mov    %eax,0x8(%esp)
085671b6 +0x17a:  mov    0xc(%ebp),%eax
085671b9 +0x17d:  mov    %eax,0x4(%esp)
085671bd +0x181:  mov    %edx,(%esp)
085671c0 +0x184:  call   08566d9c <_ZN16CWaitingRoomList7doMatchEP6IMatchRSt8multimapIfS1_St4lessIfESaISt4pairIKfS1_EEE>  ; CWaitingRoomList::doMatch(IMatch*, std::multimap<float, IMatch*, std::less<float>, std::allocator<std::pair<float const, IMatch*> > >&)
085671c5 +0x189:  xor    $0x1,%eax
085671c8 +0x18c:  test   %al,%al
085671ca +0x18e:  jne    085673aa <+0x36e>
085671d0 +0x194:  lea    -0x68(%ebp),%eax
085671d3 +0x197:  mov    %eax,(%esp)
085671d6 +0x19a:  call   085698a2 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x126c>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x126c
085671db +0x19f:  mov    %eax,%ecx
085671dd +0x1a1:  mov    0x10(%ebp),%esi
085671e0 +0x1a4:  mov    -0x34(%ebp),%edx
085671e3 +0x1a7:  mov    -0x30(%ebp),%ebx
085671e6 +0x1aa:  mov    %edx,%eax
085671e8 +0x1ac:  shl    $0x3,%eax
085671eb +0x1af:  sub    %edx,%eax
085671ed +0x1b1:  imul   $0x46,%esi,%edx
085671f0 +0x1b4:  add    %edx,%eax
085671f2 +0x1b6:  add    %ebx,%eax
085671f4 +0x1b8:  movzbl &_ZZN19CMultiMatchRoomList25GetWaitingRoomCombinationEP6IMatchiRSt6vectorIS1_SaIS1_EEE16CombinationTable+0x1(%eax,%eax,1),%eax
085671fc +0x1c0:  movzbl %al,%eax
085671ff +0x1c3:  cmp    %eax,%ecx
08567201 +0x1c5:  setb   %al
08567204 +0x1c8:  test   %al,%al
08567206 +0x1ca:  jne    085673ad <+0x371>
0856720c +0x1d0:  movl   $0x0,-0x2c(%ebp)
08567213 +0x1d7:  lea    -0x70(%ebp),%eax
08567216 +0x1da:  lea    -0x68(%ebp),%edx
08567219 +0x1dd:  mov    %edx,0x4(%esp)
0856721d +0x1e1:  mov    %eax,(%esp)
08567220 +0x1e4:  call   085698b6 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x1280>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x1280
08567225 +0x1e9:  sub    $0x4,%esp
08567228 +0x1ec:  jmp    0856732c <+0x2f0>
0856722d +0x1f1:  mov    -0x34(%ebp),%ebx
08567230 +0x1f4:  mov    -0x34(%ebp),%eax
08567233 +0x1f7:  flds   -0x98(%ebp,%eax,4)
0856723a +0x1fe:  fildl  -0x3c(%ebp)
0856723d +0x201:  fmulp  %st,%st(1)
0856723f +0x203:  fstps  -0x12c(%ebp)
08567245 +0x209:  lea    -0x70(%ebp),%eax
08567248 +0x20c:  mov    %eax,(%esp)
0856724b +0x20f:  call   08569934 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x12fe>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x12fe
08567250 +0x214:  flds   (%eax)
08567252 +0x216:  fstps  -0x128(%ebp)
08567258 +0x21c:  lea    -0x70(%ebp),%eax
0856725b +0x21f:  mov    %eax,(%esp)
0856725e +0x222:  call   08569934 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x12fe>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x12fe
08567263 +0x227:  mov    0x4(%eax),%eax
08567266 +0x22a:  mov    (%eax),%edx
08567268 +0x22c:  add    $0x84,%edx
0856726e +0x232:  mov    (%edx),%edx
08567270 +0x234:  mov    %eax,(%esp)
08567273 +0x237:  call   *%edx
08567275 +0x239:  mov    %eax,-0x11c(%ebp)
0856727b +0x23f:  fildl  -0x11c(%ebp)
08567281 +0x245:  fmuls  -0x128(%ebp)
08567287 +0x24b:  flds   -0x12c(%ebp)
0856728d +0x251:  faddp  %st,%st(1)
0856728f +0x253:  fstps  -0x124(%ebp)
08567295 +0x259:  lea    -0x70(%ebp),%eax
08567298 +0x25c:  mov    %eax,(%esp)
0856729b +0x25f:  call   08569934 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x12fe>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x12fe
085672a0 +0x264:  mov    0x4(%eax),%eax
085672a3 +0x267:  mov    (%eax),%edx
085672a5 +0x269:  add    $0x84,%edx
085672ab +0x26f:  mov    (%edx),%edx
085672ad +0x271:  mov    %eax,(%esp)
085672b0 +0x274:  call   *%edx
085672b2 +0x276:  add    -0x3c(%ebp),%eax
085672b5 +0x279:  mov    %eax,-0x11c(%ebp)
085672bb +0x27f:  fildl  -0x11c(%ebp)
085672c1 +0x285:  fdivrs -0x124(%ebp)
085672c7 +0x28b:  fstps  -0x98(%ebp,%ebx,4)
085672ce +0x292:  lea    -0x70(%ebp),%eax
085672d1 +0x295:  mov    %eax,(%esp)
085672d4 +0x298:  call   08569934 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x12fe>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x12fe
085672d9 +0x29d:  mov    0x4(%eax),%eax
085672dc +0x2a0:  mov    (%eax),%edx
085672de +0x2a2:  add    $0x84,%edx
085672e4 +0x2a8:  mov    (%edx),%edx
085672e6 +0x2aa:  mov    %eax,(%esp)
085672e9 +0x2ad:  call   *%edx
085672eb +0x2af:  add    %eax,-0x3c(%ebp)
085672ee +0x2b2:  lea    -0x70(%ebp),%eax
085672f1 +0x2b5:  mov    %eax,(%esp)
085672f4 +0x2b8:  call   08569934 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x12fe>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x12fe
085672f9 +0x2bd:  lea    0x4(%eax),%ecx
085672fc +0x2c0:  mov    -0x34(%ebp),%edx
085672ff +0x2c3:  lea    -0x110(%ebp),%ebx
08567305 +0x2c9:  mov    %edx,%eax
08567307 +0x2cb:  add    %eax,%eax
08567309 +0x2cd:  add    %edx,%eax
0856730b +0x2cf:  shl    $0x2,%eax
0856730e +0x2d2:  lea    (%ebx,%eax,1),%eax
08567311 +0x2d5:  mov    %ecx,0x4(%esp)
08567315 +0x2d9:  mov    %eax,(%esp)
08567318 +0x2dc:  call   08569942 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x130c>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x130c
0856731d +0x2e1:  lea    -0x70(%ebp),%eax
08567320 +0x2e4:  mov    %eax,(%esp)
08567323 +0x2e7:  call   08569916 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x12e0>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x12e0
08567328 +0x2ec:  addl   $0x1,-0x2c(%ebp)
0856732c +0x2f0:  lea    -0x4c(%ebp),%eax
0856732f +0x2f3:  lea    -0x68(%ebp),%edx
08567332 +0x2f6:  mov    %edx,0x4(%esp)
08567336 +0x2fa:  mov    %eax,(%esp)
08567339 +0x2fd:  call   085698dc <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x12a6>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x12a6
0856733e +0x302:  sub    $0x4,%esp
08567341 +0x305:  lea    -0x4c(%ebp),%eax
08567344 +0x308:  mov    %eax,0x4(%esp)
08567348 +0x30c:  lea    -0x70(%ebp),%eax
0856734b +0x30f:  mov    %eax,(%esp)
0856734e +0x312:  call   08569902 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x12cc>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x12cc
08567353 +0x317:  test   %al,%al
08567355 +0x319:  je     08567385 <+0x349>
08567357 +0x31b:  mov    0x10(%ebp),%ebx
0856735a +0x31e:  mov    -0x34(%ebp),%edx
0856735d +0x321:  mov    -0x30(%ebp),%ecx
08567360 +0x324:  mov    %edx,%eax
08567362 +0x326:  shl    $0x3,%eax
08567365 +0x329:  sub    %edx,%eax
08567367 +0x32b:  imul   $0x46,%ebx,%edx
0856736a +0x32e:  add    %edx,%eax
0856736c +0x330:  add    %ecx,%eax
0856736e +0x332:  movzbl &_ZZN19CMultiMatchRoomList25GetWaitingRoomCombinationEP6IMatchiRSt6vectorIS1_SaIS1_EEE16CombinationTable+0x1(%eax,%eax,1),%eax
08567376 +0x33a:  movzbl %al,%eax
08567379 +0x33d:  cmp    -0x2c(%ebp),%eax
0856737c +0x340:  jle    08567385 <+0x349>
0856737e +0x342:  mov    $0x1,%eax
08567383 +0x347:  jmp    0856738a <+0x34e>
08567385 +0x349:  mov    $0x0,%eax
0856738a +0x34e:  test   %al,%al
0856738c +0x350:  jne    0856722d <+0x1f1>
08567392 +0x356:  addl   $0x1,-0x30(%ebp)
08567396 +0x35a:  cmpl   $0x6,-0x30(%ebp)
0856739a +0x35e:  setle  %al
0856739d +0x361:  test   %al,%al
0856739f +0x363:  jne    0856712b <+0xef>
085673a5 +0x369:  jmp    085673ae <+0x372>
085673a7 +0x36b:  nop
085673a8 +0x36c:  jmp    085673ae <+0x372>
085673aa +0x36e:  nop
085673ab +0x36f:  jmp    085673ae <+0x372>
085673ad +0x371:  nop
085673ae +0x372:  mov    -0x34(%ebp),%edx
085673b1 +0x375:  lea    -0x110(%ebp),%ecx
085673b7 +0x37b:  mov    %edx,%eax
085673b9 +0x37d:  add    %eax,%eax
085673bb +0x37f:  add    %edx,%eax
085673bd +0x381:  shl    $0x2,%eax
085673c0 +0x384:  lea    (%ecx,%eax,1),%eax
085673c3 +0x387:  mov    %eax,(%esp)
085673c6 +0x38a:  call   085699b6 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x1380>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x1380
085673cb +0x38f:  xor    $0x1,%eax
085673ce +0x392:  test   %al,%al
085673d0 +0x394:  je     085673fd <+0x3c1>
085673d2 +0x396:  mov    -0x3c(%ebp),%eax
085673d5 +0x399:  cmp    0x10(%ebp),%eax
085673d8 +0x39c:  jne    085673e0 <+0x3a4>
085673da +0x39e:  addl   $0x1,-0x38(%ebp)
085673de +0x3a2:  jmp    085673fd <+0x3c1>
085673e0 +0x3a4:  mov    -0x34(%ebp),%edx
085673e3 +0x3a7:  lea    -0x110(%ebp),%ecx
085673e9 +0x3ad:  mov    %edx,%eax
085673eb +0x3af:  add    %eax,%eax
085673ed +0x3b1:  add    %edx,%eax
085673ef +0x3b3:  shl    $0x2,%eax
085673f2 +0x3b6:  lea    (%ecx,%eax,1),%eax
085673f5 +0x3b9:  mov    %eax,(%esp)
085673f8 +0x3bc:  call   085699fa <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x13c4>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x13c4
085673fd +0x3c1:  addl   $0x1,-0x34(%ebp)
08567401 +0x3c5:  cmpl   $0x9,-0x34(%ebp)
08567405 +0x3c9:  setle  %al
08567408 +0x3cc:  test   %al,%al
0856740a +0x3ce:  jne    085670ee <+0xb2>
08567410 +0x3d4:  jmp    08567413 <+0x3d7>
08567412 +0x3d6:  nop
08567413 +0x3d7:  cmpl   $0x0,-0x38(%ebp)
08567417 +0x3db:  je     0856754a <+0x50e>
0856741d +0x3e1:  movb   $0x0,-0x25(%ebp)
08567421 +0x3e5:  movl   $0x0,-0x24(%ebp)
08567428 +0x3ec:  mov    $0x0,%eax
0856742d +0x3f1:  mov    %eax,-0x20(%ebp)
08567430 +0x3f4:  movl   $0x0,-0x1c(%ebp)
08567437 +0x3fb:  jmp    085674b1 <+0x475>
08567439 +0x3fd:  mov    -0x1c(%ebp),%edx
0856743c +0x400:  lea    -0x110(%ebp),%ecx
08567442 +0x406:  mov    %edx,%eax
08567444 +0x408:  add    %eax,%eax
08567446 +0x40a:  add    %edx,%eax
08567448 +0x40c:  shl    $0x2,%eax
0856744b +0x40f:  lea    (%ecx,%eax,1),%eax
0856744e +0x412:  mov    %eax,(%esp)
08567451 +0x415:  call   085699b6 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x1380>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x1380
08567456 +0x41a:  test   %al,%al
08567458 +0x41c:  jne    085674ac <+0x470>
0856745a +0x41e:  movzbl -0x25(%ebp),%eax
0856745e +0x422:  xor    $0x1,%eax
08567461 +0x425:  test   %al,%al
08567463 +0x427:  je     0856747c <+0x440>
08567465 +0x429:  mov    -0x1c(%ebp),%eax
08567468 +0x42c:  mov    %eax,-0x24(%ebp)
0856746b +0x42f:  mov    -0x1c(%ebp),%eax
0856746e +0x432:  mov    -0x98(%ebp,%eax,4),%eax
08567475 +0x439:  mov    %eax,-0x20(%ebp)
08567478 +0x43c:  movb   $0x1,-0x25(%ebp)
0856747c +0x440:  mov    -0x1c(%ebp),%eax
0856747f +0x443:  flds   -0x98(%ebp,%eax,4)
08567486 +0x44a:  flds   -0x20(%ebp)
08567489 +0x44d:  fucompp
0856748b +0x44f:  fnstsw %ax
0856748d +0x451:  test   $0x45,%ah
08567490 +0x454:  sete   %al
08567493 +0x457:  test   %al,%al
08567495 +0x459:  je     085674ad <+0x471>
08567497 +0x45b:  mov    -0x1c(%ebp),%eax
0856749a +0x45e:  mov    -0x98(%ebp,%eax,4),%eax
085674a1 +0x465:  mov    %eax,-0x20(%ebp)
085674a4 +0x468:  mov    -0x1c(%ebp),%eax
085674a7 +0x46b:  mov    %eax,-0x24(%ebp)
085674aa +0x46e:  jmp    085674ad <+0x471>
085674ac +0x470:  nop
085674ad +0x471:  addl   $0x1,-0x1c(%ebp)
085674b1 +0x475:  cmpl   $0x9,-0x1c(%ebp)
085674b5 +0x479:  setle  %al
085674b8 +0x47c:  test   %al,%al
085674ba +0x47e:  jne    08567439 <+0x3fd>
085674c0 +0x484:  mov    -0x24(%ebp),%edx
085674c3 +0x487:  lea    -0x110(%ebp),%ecx
085674c9 +0x48d:  mov    %edx,%eax
085674cb +0x48f:  add    %eax,%eax
085674cd +0x491:  add    %edx,%eax
085674cf +0x493:  shl    $0x2,%eax
085674d2 +0x496:  lea    (%ecx,%eax,1),%edx
085674d5 +0x499:  lea    -0x48(%ebp),%eax
085674d8 +0x49c:  mov    %edx,0x4(%esp)
085674dc +0x4a0:  mov    %eax,(%esp)
085674df +0x4a3:  call   08569a16 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x13e0>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x13e0
085674e4 +0x4a8:  sub    $0x4,%esp
085674e7 +0x4ab:  mov    -0x24(%ebp),%edx
085674ea +0x4ae:  lea    -0x110(%ebp),%ecx
085674f0 +0x4b4:  mov    %edx,%eax
085674f2 +0x4b6:  add    %eax,%eax
085674f4 +0x4b8:  add    %edx,%eax
085674f6 +0x4ba:  shl    $0x2,%eax
085674f9 +0x4bd:  lea    (%ecx,%eax,1),%edx
085674fc +0x4c0:  lea    -0x44(%ebp),%eax
085674ff +0x4c3:  mov    %edx,0x4(%esp)
08567503 +0x4c7:  mov    %eax,(%esp)
08567506 +0x4ca:  call   08569a3c <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x1406>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x1406
0856750b +0x4cf:  sub    $0x4,%esp
0856750e +0x4d2:  lea    -0x40(%ebp),%eax
08567511 +0x4d5:  mov    0x14(%ebp),%edx
08567514 +0x4d8:  mov    %edx,0x4(%esp)
08567518 +0x4dc:  mov    %eax,(%esp)
0856751b +0x4df:  call   08569a16 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x13e0>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x13e0
08567520 +0x4e4:  sub    $0x4,%esp
08567523 +0x4e7:  mov    -0x48(%ebp),%eax
08567526 +0x4ea:  mov    %eax,0xc(%esp)
0856752a +0x4ee:  mov    -0x44(%ebp),%eax
0856752d +0x4f1:  mov    %eax,0x8(%esp)
08567531 +0x4f5:  mov    -0x40(%ebp),%eax
08567534 +0x4f8:  mov    %eax,0x4(%esp)
08567538 +0x4fc:  mov    0x14(%ebp),%eax
0856753b +0x4ff:  mov    %eax,(%esp)
0856753e +0x502:  call   08569a60 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x142a>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x142a
08567543 +0x507:  mov    $0x1,%esi
08567548 +0x50c:  jmp    08567566 <+0x52a>
0856754a +0x50e:  mov    $0x0,%esi
0856754f +0x513:  jmp    08567566 <+0x52a>
08567551 +0x515:  mov    %edx,%ebx
08567553 +0x517:  mov    %eax,%esi
08567555 +0x519:  lea    -0x68(%ebp),%eax
08567558 +0x51c:  mov    %eax,(%esp)
0856755b +0x51f:  call   085690a2 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0xa6c>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0xa6c
08567560 +0x524:  mov    %esi,%eax
08567562 +0x526:  mov    %ebx,%edx
08567564 +0x528:  jmp    08567573 <+0x537>
08567566 +0x52a:  lea    -0x68(%ebp),%eax
08567569 +0x52d:  mov    %eax,(%esp)
0856756c +0x530:  call   085690a2 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0xa6c>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0xa6c
08567571 +0x535:  jmp    085675a3 <+0x567>
08567573 +0x537:  mov    %edx,%esi
08567575 +0x539:  mov    %eax,%edi
08567577 +0x53b:  lea    -0x110(%ebp),%eax
0856757d +0x541:  lea    0x78(%eax),%ebx
08567580 +0x544:  lea    -0x110(%ebp),%eax
08567586 +0x54a:  cmp    %eax,%ebx
08567588 +0x54c:  je     08567597 <+0x55b>
0856758a +0x54e:  sub    $0xc,%ebx
0856758d +0x551:  mov    %ebx,(%esp)
08567590 +0x554:  call   0856977c <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x1146>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x1146
08567595 +0x559:  jmp    08567580 <+0x544>
08567597 +0x55b:  mov    %edi,%eax
08567599 +0x55d:  mov    %esi,%edx
0856759b +0x55f:  mov    %eax,(%esp)
0856759e +0x562:  call   08ae3750 <_Unwind_Resume>
085675a3 +0x567:  lea    -0x110(%ebp),%eax
085675a9 +0x56d:  lea    0x78(%eax),%ebx
085675ac +0x570:  lea    -0x110(%ebp),%eax
085675b2 +0x576:  cmp    %eax,%ebx
085675b4 +0x578:  je     085675c3 <+0x587>
085675b6 +0x57a:  sub    $0xc,%ebx
085675b9 +0x57d:  mov    %ebx,(%esp)
085675bc +0x580:  call   0856977c <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x1146>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x1146
085675c1 +0x585:  jmp    085675ac <+0x570>
085675c3 +0x587:  mov    %esi,%eax
085675c5 +0x589:  lea    -0xc(%ebp),%esp
085675c8 +0x58c:  add    $0x0,%esp
085675cb +0x58f:  pop    %ebx
085675cc +0x590:  pop    %esi
085675cd +0x591:  pop    %edi
085675ce +0x592:  pop    %ebp
085675cf +0x593:  ret
```

## 反编译 C

```c
// CMultiMatchRoomList::GetWaitingRoomCombination @ 0x856703c

/* CMultiMatchRoomList::GetWaitingRoomCombination(IMatch*, int, std::vector<IMatch*,
   std::allocator<IMatch*> >&) */

undefined4 __thiscall
CMultiMatchRoomList::GetWaitingRoomCombination
          (CMultiMatchRoomList *this,IMatch *param_1,int param_2,vector *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  vector<IMatch*,std::allocator<IMatch*>> *pvVar11;
  undefined4 uVar12;
  vector<IMatch*,std::allocator<IMatch*>> local_114 [120];
  vector<IMatch*,std::allocator<IMatch*>> local_9c [40];
  multimap<float,IMatch*,std::less<float>,std::allocator<std::pair<float_const,IMatch*>>>
  local_74 [4];
  _Rb_tree_iterator<std::pair<int_const,CWaitingRoomList>> local_70 [4];
  multimap<float,IMatch*,std::less<float>,std::allocator<std::pair<float_const,IMatch*>>>
  local_6c [24];
  uint local_54;
  multimap<float,IMatch*,std::less<float>,std::allocator<std::pair<float_const,IMatch*>>>
  local_50 [4];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  char local_29;
  int local_28;
  float local_24;
  int local_20;
  
  local_40 = 0;
  pvVar11 = local_9c;
  for (iVar10 = 10; iVar10 != 0; iVar10 = iVar10 + -1) {
    *(undefined4 *)pvVar11 = 0;
    pvVar11 = pvVar11 + 4;
  }
  pvVar11 = local_114;
  for (iVar10 = 9; iVar10 != -1; iVar10 = iVar10 + -1) {
                    /* try { // try from 08567077 to 0856707b has its CatchHandler @ 0856708e */
    std::vector<IMatch*,std::allocator<IMatch*>>::vector(pvVar11);
    pvVar11 = pvVar11 + 0xc;
  }
                    /* try { // try from 085670d6 to 085670da has its CatchHandler @ 08567573 */
  std::multimap<float,IMatch*,std::less<float>,std::allocator<std::pair<float_const,IMatch*>>>::
  multimap(local_6c);
  local_3c = 0;
  local_38 = 0;
  do {
    if ((9 < local_38) ||
       (GetWaitingRoomCombination(IMatch*,int,std::vector<IMatch*,std::allocator<IMatch*>>&)::
        CombinationTable[local_38 * 0xe + param_2 * 0x8c] == '\0')) {
      if (local_3c == 0) {
        uVar12 = 0;
      }
      else {
        local_29 = '\0';
        local_28 = 0;
        local_24 = 0.0;
        for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
          cVar5 = std::vector<IMatch*,std::allocator<IMatch*>>::empty();
          if (cVar5 == '\0') {
            if (local_29 != '\x01') {
              local_28 = local_20;
              local_24 = *(float *)(local_9c + local_20 * 4);
              local_29 = '\x01';
            }
            if (*(float *)(local_9c + local_20 * 4) < local_24) {
              local_24 = *(float *)(local_9c + local_20 * 4);
              local_28 = local_20;
            }
          }
        }
        std::vector<IMatch*,std::allocator<IMatch*>>::end();
        std::vector<IMatch*,std::allocator<IMatch*>>::begin();
        std::vector<IMatch*,std::allocator<IMatch*>>::end();
        std::vector<IMatch*,std::allocator<IMatch*>>::
        insert<__gnu_cxx::__normal_iterator<IMatch**,std::vector<IMatch*,std::allocator<IMatch*>>>>
                  (param_3,param_3,local_44,local_48,local_4c);
        uVar12 = 1;
      }
                    /* try { // try from 0856756c to 08567570 has its CatchHandler @ 08567573 */
      std::multimap<float,IMatch*,std::less<float>,std::allocator<std::pair<float_const,IMatch*>>>::
      ~multimap(local_6c);
      pvVar11 = local_9c;
      while (pvVar11 != local_114) {
        pvVar11 = pvVar11 + -0xc;
        std::vector<IMatch*,std::allocator<IMatch*>>::~vector(pvVar11);
      }
      return uVar12;
    }
    local_40 = 0;
    local_34 = 0;
    while ((local_34 < 7 &&
           (GetWaitingRoomCombination(IMatch*,int,std::vector<IMatch*,std::allocator<IMatch*>>&)::
            CombinationTable[(local_38 * 7 + param_2 * 0x46 + local_34) * 2] != '\0'))) {
                    /* try { // try from 08567158 to 08567542 has its CatchHandler @ 08567551 */
      std::multimap<float,IMatch*,std::less<float>,std::allocator<std::pair<float_const,IMatch*>>>::
      clear(local_6c);
      local_54 = (uint)(byte)GetWaitingRoomCombination(IMatch*,int,std::vector<IMatch*,std::allocator<IMatch*>>&)
                             ::CombinationTable[(local_38 * 7 + param_2 * 0x46 + local_34) * 2];
      std::
      map<int,CWaitingRoomList,std::less<int>,std::allocator<std::pair<int_const,CWaitingRoomList>>>
      ::find((int *)local_70);
      iVar10 = std::_Rb_tree_iterator<std::pair<int_const,CWaitingRoomList>>::operator->(local_70);
      cVar5 = CWaitingRoomList::doMatch
                        ((CWaitingRoomList *)(iVar10 + 4),param_1,(multimap *)local_6c);
      if ((cVar5 != '\x01') ||
         (uVar6 = std::
                  multimap<float,IMatch*,std::less<float>,std::allocator<std::pair<float_const,IMatch*>>>
                  ::size(local_6c),
         uVar6 < (byte)GetWaitingRoomCombination(IMatch*,int,std::vector<IMatch*,std::allocator<IMatch*>>&)
                       ::CombinationTable[(local_38 * 7 + param_2 * 0x46 + local_34) * 2 + 1]))
      break;
      local_30 = 0;
      std::multimap<float,IMatch*,std::less<float>,std::allocator<std::pair<float_const,IMatch*>>>::
      begin(local_74);
      while( true ) {
        std::multimap<float,IMatch*,std::less<float>,std::allocator<std::pair<float_const,IMatch*>>>
        ::end(local_50);
        cVar5 = std::_Rb_tree_iterator<std::pair<float_const,IMatch*>>::operator!=
                          ((_Rb_tree_iterator<std::pair<float_const,IMatch*>> *)local_74,
                           (_Rb_tree_iterator *)local_50);
        iVar10 = local_38;
        if ((cVar5 == '\0') ||
           ((int)(uint)(byte)GetWaitingRoomCombination(IMatch*,int,std::vector<IMatch*,std::allocator<IMatch*>>&)
                             ::CombinationTable[(local_38 * 7 + param_2 * 0x46 + local_34) * 2 + 1]
            <= local_30)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) break;
        fVar1 = *(float *)(local_9c + local_38 * 4);
        fVar3 = (float)local_40;
        pfVar7 = (float *)std::_Rb_tree_iterator<std::pair<float_const,IMatch*>>::operator->
                                    ((_Rb_tree_iterator<std::pair<float_const,IMatch*>> *)local_74);
        fVar2 = *pfVar7;
        iVar8 = std::_Rb_tree_iterator<std::pair<float_const,IMatch*>>::operator->
                          ((_Rb_tree_iterator<std::pair<float_const,IMatch*>> *)local_74);
        iVar8 = (**(code **)(**(int **)(iVar8 + 4) + 0x84))(*(int **)(iVar8 + 4));
        iVar9 = std::_Rb_tree_iterator<std::pair<float_const,IMatch*>>::operator->
                          ((_Rb_tree_iterator<std::pair<float_const,IMatch*>> *)local_74);
        iVar9 = (**(code **)(**(int **)(iVar9 + 4) + 0x84))(*(int **)(iVar9 + 4));
        *(float *)(local_9c + iVar10 * 4) =
             (fVar3 * fVar1 + (float)iVar8 * fVar2) / (float)(iVar9 + local_40);
        iVar10 = std::_Rb_tree_iterator<std::pair<float_const,IMatch*>>::operator->
                           ((_Rb_tree_iterator<std::pair<float_const,IMatch*>> *)local_74);
        iVar10 = (**(code **)(**(int **)(iVar10 + 4) + 0x84))(*(int **)(iVar10 + 4));
        local_40 = local_40 + iVar10;
        iVar10 = std::_Rb_tree_iterator<std::pair<float_const,IMatch*>>::operator->
                           ((_Rb_tree_iterator<std::pair<float_const,IMatch*>> *)local_74);
        std::vector<IMatch*,std::allocator<IMatch*>>::push_back
                  (local_114 + local_38 * 0xc,(IMatch **)(iVar10 + 4));
        std::_Rb_tree_iterator<std::pair<float_const,IMatch*>>::operator++
                  ((_Rb_tree_iterator<std::pair<float_const,IMatch*>> *)local_74);
        local_30 = local_30 + 1;
      }
      local_34 = local_34 + 1;
    }
    cVar5 = std::vector<IMatch*,std::allocator<IMatch*>>::empty();
    if (cVar5 != '\x01') {
      if (local_40 == param_2) {
        local_3c = local_3c + 1;
      }
      else {
        std::vector<IMatch*,std::allocator<IMatch*>>::clear(local_114 + local_38 * 0xc);
      }
    }
    local_38 = local_38 + 1;
  } while( true );
}
```
