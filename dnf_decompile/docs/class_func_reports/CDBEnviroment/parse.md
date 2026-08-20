# parse

`_ZN13CDBEnviroment5parseEPc`

`CDBEnviroment::parse(char*)`

| 类 | 地址 |
|---|---|
| `CDBEnviroment` | `0x0829d8e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0829d8e8  _ZN13CDBEnviroment5parseEPc
#           CDBEnviroment::parse(char*)
# range [0x0829d8e8, 0x0829dd81]
0829d8e8 +0x000:  push   %ebp
0829d8e9 +0x001:  mov    %esp,%ebp
0829d8eb +0x003:  push   %esi
0829d8ec +0x004:  push   %ebx
0829d8ed +0x005:  sub    $0x70,%esp
0829d8f0 +0x008:  movl   $"=",-0x10(%ebp)
0829d8f7 +0x00f:  mov    -0x10(%ebp),%eax
0829d8fa +0x012:  mov    %eax,0x4(%esp)
0829d8fe +0x016:  mov    0xc(%ebp),%eax
0829d901 +0x019:  mov    %eax,(%esp)
0829d904 +0x01c:  call   0807d8f0 <_init+0x1e8>
0829d909 +0x021:  mov    %eax,-0x48(%ebp)
0829d90c +0x024:  mov    -0x10(%ebp),%eax
0829d90f +0x027:  mov    %eax,0x4(%esp)
0829d913 +0x02b:  movl   $0x0,(%esp)
0829d91a +0x032:  call   0807d8f0 <_init+0x1e8>
0829d91f +0x037:  mov    %eax,-0x4c(%ebp)
0829d922 +0x03a:  mov    -0x48(%ebp),%eax
0829d925 +0x03d:  mov    %eax,(%esp)
0829d928 +0x040:  call   0829f0ef <_Z4trimPc>  ; trim(char*)
0829d92d +0x045:  mov    -0x4c(%ebp),%eax
0829d930 +0x048:  mov    %eax,(%esp)
0829d933 +0x04b:  call   0829f0ef <_Z4trimPc>  ; trim(char*)
0829d938 +0x050:  mov    -0x48(%ebp),%eax
0829d93b +0x053:  movl   $"game_db_type",0x4(%esp)
0829d943 +0x05b:  mov    %eax,(%esp)
0829d946 +0x05e:  call   0807e4e0 <_init+0xdd8>
0829d94b +0x063:  test   %eax,%eax
0829d94d +0x065:  jne    0829dc8e <+0x3a6>
0829d953 +0x06b:  mov    -0x4c(%ebp),%eax
0829d956 +0x06e:  movl   $"cain",0x4(%esp)
0829d95e +0x076:  mov    %eax,(%esp)
0829d961 +0x079:  call   0807e4e0 <_init+0xdd8>
0829d966 +0x07e:  test   %eax,%eax
0829d968 +0x080:  jne    0829d97c <+0x94>
0829d96a +0x082:  mov    0x8(%ebp),%eax
0829d96d +0x085:  movl   $0x1,0x3e0(%eax)
0829d977 +0x08f:  jmp    0829dc24 <+0x33c>
0829d97c +0x094:  mov    -0x4c(%ebp),%eax
0829d97f +0x097:  movl   $"diregie",0x4(%esp)
0829d987 +0x09f:  mov    %eax,(%esp)
0829d98a +0x0a2:  call   0807e4e0 <_init+0xdd8>
0829d98f +0x0a7:  test   %eax,%eax
0829d991 +0x0a9:  jne    0829d9a5 <+0xbd>
0829d993 +0x0ab:  mov    0x8(%ebp),%eax
0829d996 +0x0ae:  movl   $0x2,0x3e0(%eax)
0829d9a0 +0x0b8:  jmp    0829dc24 <+0x33c>
0829d9a5 +0x0bd:  mov    -0x4c(%ebp),%eax
0829d9a8 +0x0c0:  movl   $"siroco",0x4(%esp)
0829d9b0 +0x0c8:  mov    %eax,(%esp)
0829d9b3 +0x0cb:  call   0807e4e0 <_init+0xdd8>
0829d9b8 +0x0d0:  test   %eax,%eax
0829d9ba +0x0d2:  jne    0829d9ce <+0xe6>
0829d9bc +0x0d4:  mov    0x8(%ebp),%eax
0829d9bf +0x0d7:  movl   $0x3,0x3e0(%eax)
0829d9c9 +0x0e1:  jmp    0829dc24 <+0x33c>
0829d9ce +0x0e6:  mov    -0x4c(%ebp),%eax
0829d9d1 +0x0e9:  movl   $"prey",0x4(%esp)
0829d9d9 +0x0f1:  mov    %eax,(%esp)
0829d9dc +0x0f4:  call   0807e4e0 <_init+0xdd8>
0829d9e1 +0x0f9:  test   %eax,%eax
0829d9e3 +0x0fb:  jne    0829d9f7 <+0x10f>
0829d9e5 +0x0fd:  mov    0x8(%ebp),%eax
0829d9e8 +0x100:  movl   $0x4,0x3e0(%eax)
0829d9f2 +0x10a:  jmp    0829dc24 <+0x33c>
0829d9f7 +0x10f:  mov    -0x4c(%ebp),%eax
0829d9fa +0x112:  movl   $"casillas",0x4(%esp)
0829da02 +0x11a:  mov    %eax,(%esp)
0829da05 +0x11d:  call   0807e4e0 <_init+0xdd8>
0829da0a +0x122:  test   %eax,%eax
0829da0c +0x124:  jne    0829da20 <+0x138>
0829da0e +0x126:  mov    0x8(%ebp),%eax
0829da11 +0x129:  movl   $0x5,0x3e0(%eax)
0829da1b +0x133:  jmp    0829dc24 <+0x33c>
0829da20 +0x138:  mov    -0x4c(%ebp),%eax
0829da23 +0x13b:  movl   $"hilder",0x4(%esp)
0829da2b +0x143:  mov    %eax,(%esp)
0829da2e +0x146:  call   0807e4e0 <_init+0xdd8>
0829da33 +0x14b:  test   %eax,%eax
0829da35 +0x14d:  jne    0829da49 <+0x161>
0829da37 +0x14f:  mov    0x8(%ebp),%eax
0829da3a +0x152:  movl   $0x6,0x3e0(%eax)
0829da44 +0x15c:  jmp    0829dc24 <+0x33c>
0829da49 +0x161:  mov    -0x4c(%ebp),%eax
0829da4c +0x164:  movl   $"ruke",0x4(%esp)
0829da54 +0x16c:  mov    %eax,(%esp)
0829da57 +0x16f:  call   0807e4e0 <_init+0xdd8>
0829da5c +0x174:  test   %eax,%eax
0829da5e +0x176:  jne    0829da72 <+0x18a>
0829da60 +0x178:  mov    0x8(%ebp),%eax
0829da63 +0x17b:  movl   $0x7,0x3e0(%eax)
0829da6d +0x185:  jmp    0829dc24 <+0x33c>
0829da72 +0x18a:  mov    -0x4c(%ebp),%eax
0829da75 +0x18d:  movl   $"seria",0x4(%esp)
0829da7d +0x195:  mov    %eax,(%esp)
0829da80 +0x198:  call   0807e4e0 <_init+0xdd8>
0829da85 +0x19d:  test   %eax,%eax
0829da87 +0x19f:  jne    0829da9b <+0x1b3>
0829da89 +0x1a1:  mov    0x8(%ebp),%eax
0829da8c +0x1a4:  movl   $0x8,0x3e0(%eax)
0829da96 +0x1ae:  jmp    0829dc24 <+0x33c>
0829da9b +0x1b3:  mov    -0x4c(%ebp),%eax
0829da9e +0x1b6:  movl   $"anton",0x4(%esp)
0829daa6 +0x1be:  mov    %eax,(%esp)
0829daa9 +0x1c1:  call   0807e4e0 <_init+0xdd8>
0829daae +0x1c6:  test   %eax,%eax
0829dab0 +0x1c8:  jne    0829dac4 <+0x1dc>
0829dab2 +0x1ca:  mov    0x8(%ebp),%eax
0829dab5 +0x1cd:  movl   $0x9,0x3e0(%eax)
0829dabf +0x1d7:  jmp    0829dc24 <+0x33c>
0829dac4 +0x1dc:  mov    -0x4c(%ebp),%eax
0829dac7 +0x1df:  movl   $"roxy",0x4(%esp)
0829dacf +0x1e7:  mov    %eax,(%esp)
0829dad2 +0x1ea:  call   0807e4e0 <_init+0xdd8>
0829dad7 +0x1ef:  test   %eax,%eax
0829dad9 +0x1f1:  jne    0829daed <+0x205>
0829dadb +0x1f3:  mov    0x8(%ebp),%eax
0829dade +0x1f6:  movl   $0xa,0x3e0(%eax)
0829dae8 +0x200:  jmp    0829dc24 <+0x33c>
0829daed +0x205:  mov    -0x4c(%ebp),%eax
0829daf0 +0x208:  movl   $"bakal",0x4(%esp)
0829daf8 +0x210:  mov    %eax,(%esp)
0829dafb +0x213:  call   0807e4e0 <_init+0xdd8>
0829db00 +0x218:  test   %eax,%eax
0829db02 +0x21a:  jne    0829db16 <+0x22e>
0829db04 +0x21c:  mov    0x8(%ebp),%eax
0829db07 +0x21f:  movl   $0xb,0x3e0(%eax)
0829db11 +0x229:  jmp    0829dc24 <+0x33c>
0829db16 +0x22e:  mov    -0x4c(%ebp),%eax
0829db19 +0x231:  movl   $"ozma",0x4(%esp)
0829db21 +0x239:  mov    %eax,(%esp)
0829db24 +0x23c:  call   0807e4e0 <_init+0xdd8>
0829db29 +0x241:  test   %eax,%eax
0829db2b +0x243:  jne    0829db3f <+0x257>
0829db2d +0x245:  mov    0x8(%ebp),%eax
0829db30 +0x248:  movl   $0xc,0x3e0(%eax)
0829db3a +0x252:  jmp    0829dc24 <+0x33c>
0829db3f +0x257:  mov    -0x4c(%ebp),%eax
0829db42 +0x25a:  movl   $"khazan",0x4(%esp)
0829db4a +0x262:  mov    %eax,(%esp)
0829db4d +0x265:  call   0807e4e0 <_init+0xdd8>
0829db52 +0x26a:  test   %eax,%eax
0829db54 +0x26c:  jne    0829db68 <+0x280>
0829db56 +0x26e:  mov    0x8(%ebp),%eax
0829db59 +0x271:  movl   $0xd,0x3e0(%eax)
0829db63 +0x27b:  jmp    0829dc24 <+0x33c>
0829db68 +0x280:  mov    -0x4c(%ebp),%eax
0829db6b +0x283:  movl   $"first1",0x4(%esp)
0829db73 +0x28b:  mov    %eax,(%esp)
0829db76 +0x28e:  call   0807e4e0 <_init+0xdd8>
0829db7b +0x293:  test   %eax,%eax
0829db7d +0x295:  jne    0829db91 <+0x2a9>
0829db7f +0x297:  mov    0x8(%ebp),%eax
0829db82 +0x29a:  movl   $0x63,0x3e0(%eax)
0829db8c +0x2a4:  jmp    0829dc24 <+0x33c>
0829db91 +0x2a9:  mov    -0x4c(%ebp),%eax
0829db94 +0x2ac:  movl   $"first2",0x4(%esp)
0829db9c +0x2b4:  mov    %eax,(%esp)
0829db9f +0x2b7:  call   0807e4e0 <_init+0xdd8>
0829dba4 +0x2bc:  test   %eax,%eax
0829dba6 +0x2be:  jne    0829dbb7 <+0x2cf>
0829dba8 +0x2c0:  mov    0x8(%ebp),%eax
0829dbab +0x2c3:  movl   $0x64,0x3e0(%eax)
0829dbb5 +0x2cd:  jmp    0829dc24 <+0x33c>
0829dbb7 +0x2cf:  mov    -0x4c(%ebp),%eax
0829dbba +0x2d2:  movl   $"starter_server",0x4(%esp)
0829dbc2 +0x2da:  mov    %eax,(%esp)
0829dbc5 +0x2dd:  call   0807e4e0 <_init+0xdd8>
0829dbca +0x2e2:  test   %eax,%eax
0829dbcc +0x2e4:  jne    0829dbdd <+0x2f5>
0829dbce +0x2e6:  mov    0x8(%ebp),%eax
0829dbd1 +0x2e9:  movl   $0x11,0x3e0(%eax)
0829dbdb +0x2f3:  jmp    0829dc24 <+0x33c>
0829dbdd +0x2f5:  mov    -0x4c(%ebp),%ebx
0829dbe0 +0x2f8:  movl   $0x5,0xc(%esp)
0829dbe8 +0x300:  movl   $0x2032,0x8(%esp)
0829dbf0 +0x308:  movl   $&_ZZN13CDBEnviroment5parseEPcE19__PRETTY_FUNCTION__,0x4(%esp)
0829dbf8 +0x310:  lea    -0x44(%ebp),%eax
0829dbfb +0x313:  mov    %eax,(%esp)
0829dbfe +0x316:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0829dc03 +0x31b:  mov    %ebx,0x8(%esp)
0829dc07 +0x31f:  movl   $"Unknown value (%s)",0x4(%esp)
0829dc0f +0x327:  lea    -0x44(%ebp),%eax
0829dc12 +0x32a:  mov    %eax,(%esp)
0829dc15 +0x32d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0829dc1a +0x332:  mov    $0x0,%eax
0829dc1f +0x337:  jmp    0829dd77 <+0x48f>
0829dc24 +0x33c:  lea    -0x64(%ebp),%eax
0829dc27 +0x33f:  mov    %eax,(%esp)
0829dc2a +0x342:  call   082b353e <_GLOBAL__I__ZN4CLog5this_E+0xf965>  ; global constructors keyed to CLog::this_+0xf965
0829dc2f +0x347:  mov    0x8(%ebp),%eax
0829dc32 +0x34a:  mov    0x3e0(%eax),%eax
0829dc38 +0x350:  mov    %eax,-0x34(%ebp)
0829dc3b +0x353:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0829dc40 +0x358:  lea    0x50(%eax),%edx
0829dc43 +0x35b:  lea    -0x34(%ebp),%eax
0829dc46 +0x35e:  mov    %eax,0x4(%esp)
0829dc4a +0x362:  mov    %edx,(%esp)
0829dc4d +0x365:  call   082b3552 <_GLOBAL__I__ZN4CLog5this_E+0xf979>  ; global constructors keyed to CLog::this_+0xf979
0829dc52 +0x36a:  lea    -0x64(%ebp),%edx
0829dc55 +0x36d:  mov    %edx,0x4(%esp)
0829dc59 +0x371:  mov    %eax,(%esp)
0829dc5c +0x374:  call   082b369e <_GLOBAL__I__ZN4CLog5this_E+0xfac5>  ; global constructors keyed to CLog::this_+0xfac5
0829dc61 +0x379:  jmp    0829dc7e <+0x396>
0829dc63 +0x37b:  mov    %edx,%ebx
0829dc65 +0x37d:  mov    %eax,%esi
0829dc67 +0x37f:  lea    -0x64(%ebp),%eax
0829dc6a +0x382:  mov    %eax,(%esp)
0829dc6d +0x385:  call   080d2714 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7561>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7561
0829dc72 +0x38a:  mov    %esi,%eax
0829dc74 +0x38c:  mov    %ebx,%edx
0829dc76 +0x38e:  mov    %eax,(%esp)
0829dc79 +0x391:  call   08ae3750 <_Unwind_Resume>
0829dc7e +0x396:  lea    -0x64(%ebp),%eax
0829dc81 +0x399:  mov    %eax,(%esp)
0829dc84 +0x39c:  call   080d2714 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7561>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7561
0829dc89 +0x3a1:  jmp    0829dd72 <+0x48a>
0829dc8e +0x3a6:  mov    0x8(%ebp),%eax
0829dc91 +0x3a9:  mov    0x3e0(%eax),%eax
0829dc97 +0x3af:  mov    %eax,-0x30(%ebp)
0829dc9a +0x3b2:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0829dc9f +0x3b7:  lea    0x50(%eax),%ecx
0829dca2 +0x3ba:  lea    -0x68(%ebp),%eax
0829dca5 +0x3bd:  lea    -0x30(%ebp),%edx
0829dca8 +0x3c0:  mov    %edx,0x8(%esp)
0829dcac +0x3c4:  mov    %ecx,0x4(%esp)
0829dcb0 +0x3c8:  mov    %eax,(%esp)
0829dcb3 +0x3cb:  call   082b36bc <_GLOBAL__I__ZN4CLog5this_E+0xfae3>  ; global constructors keyed to CLog::this_+0xfae3
0829dcb8 +0x3d0:  sub    $0x4,%esp
0829dcbb +0x3d3:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0829dcc0 +0x3d8:  lea    0x50(%eax),%edx
0829dcc3 +0x3db:  lea    -0x2c(%ebp),%eax
0829dcc6 +0x3de:  mov    %edx,0x4(%esp)
0829dcca +0x3e2:  mov    %eax,(%esp)
0829dccd +0x3e5:  call   082b36e8 <_GLOBAL__I__ZN4CLog5this_E+0xfb0f>  ; global constructors keyed to CLog::this_+0xfb0f
0829dcd2 +0x3ea:  sub    $0x4,%esp
0829dcd5 +0x3ed:  lea    -0x2c(%ebp),%eax
0829dcd8 +0x3f0:  mov    %eax,0x4(%esp)
0829dcdc +0x3f4:  lea    -0x68(%ebp),%eax
0829dcdf +0x3f7:  mov    %eax,(%esp)
0829dce2 +0x3fa:  call   082b370e <_GLOBAL__I__ZN4CLog5this_E+0xfb35>  ; global constructors keyed to CLog::this_+0xfb35
0829dce7 +0x3ff:  test   %al,%al
0829dce9 +0x401:  je     0829dd72 <+0x48a>
0829dcef +0x407:  lea    -0x68(%ebp),%eax
0829dcf2 +0x40a:  mov    %eax,(%esp)
0829dcf5 +0x40d:  call   082b3722 <_GLOBAL__I__ZN4CLog5this_E+0xfb49>  ; global constructors keyed to CLog::this_+0xfb49
0829dcfa +0x412:  add    $0x4,%eax
0829dcfd +0x415:  mov    %eax,-0xc(%ebp)
0829dd00 +0x418:  lea    -0x18(%ebp),%eax
0829dd03 +0x41b:  lea    -0x4c(%ebp),%edx
0829dd06 +0x41e:  mov    %edx,0x8(%esp)
0829dd0a +0x422:  lea    -0x48(%ebp),%edx
0829dd0d +0x425:  mov    %edx,0x4(%esp)
0829dd11 +0x429:  mov    %eax,(%esp)
0829dd14 +0x42c:  call   082b372f <_GLOBAL__I__ZN4CLog5this_E+0xfb56>  ; global constructors keyed to CLog::this_+0xfb56
0829dd19 +0x431:  sub    $0x4,%esp
0829dd1c +0x434:  lea    -0x18(%ebp),%eax
0829dd1f +0x437:  mov    %eax,0x4(%esp)
0829dd23 +0x43b:  lea    -0x20(%ebp),%eax
0829dd26 +0x43e:  mov    %eax,(%esp)
0829dd29 +0x441:  call   082b376e <_GLOBAL__I__ZN4CLog5this_E+0xfb95>  ; global constructors keyed to CLog::this_+0xfb95
0829dd2e +0x446:  lea    -0x28(%ebp),%eax
0829dd31 +0x449:  lea    -0x20(%ebp),%edx
0829dd34 +0x44c:  mov    %edx,0x8(%esp)
0829dd38 +0x450:  mov    -0xc(%ebp),%edx
0829dd3b +0x453:  mov    %edx,0x4(%esp)
0829dd3f +0x457:  mov    %eax,(%esp)
0829dd42 +0x45a:  call   082b3842 <_GLOBAL__I__ZN4CLog5this_E+0xfc69>  ; global constructors keyed to CLog::this_+0xfc69
0829dd47 +0x45f:  sub    $0x4,%esp
0829dd4a +0x462:  lea    -0x20(%ebp),%eax
0829dd4d +0x465:  mov    %eax,(%esp)
0829dd50 +0x468:  call   080d6398 <_GLOBAL__I__ZN10BingoEventC2Ev+0xb1e5>  ; global constructors keyed to BingoEvent::BingoEvent()+0xb1e5
0829dd55 +0x46d:  jmp    0829dd72 <+0x48a>
0829dd57 +0x46f:  mov    %edx,%ebx
0829dd59 +0x471:  mov    %eax,%esi
0829dd5b +0x473:  lea    -0x20(%ebp),%eax
0829dd5e +0x476:  mov    %eax,(%esp)
0829dd61 +0x479:  call   080d6398 <_GLOBAL__I__ZN10BingoEventC2Ev+0xb1e5>  ; global constructors keyed to BingoEvent::BingoEvent()+0xb1e5
0829dd66 +0x47e:  mov    %esi,%eax
0829dd68 +0x480:  mov    %ebx,%edx
0829dd6a +0x482:  mov    %eax,(%esp)
0829dd6d +0x485:  call   08ae3750 <_Unwind_Resume>
0829dd72 +0x48a:  mov    $0x1,%eax
0829dd77 +0x48f:  lea    -0x8(%ebp),%esp
0829dd7a +0x492:  add    $0x0,%esp
0829dd7d +0x495:  pop    %ebx
0829dd7e +0x496:  pop    %esi
0829dd7f +0x497:  pop    %ebp
0829dd80 +0x498:  ret
0829dd81 +0x499:  nop
```

## 反编译 C

```c
// CDBEnviroment::parse @ 0x829d8e8

/* CDBEnviroment::parse(char*) */

undefined4 __thiscall CDBEnviroment::parse(CDBEnviroment *this,char *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  *this_00;
  _Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>>>
  local_6c [4];
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  local_68 [24];
  char *local_50;
  char *local_4c;
  cMyTrace local_48 [16];
  undefined4 local_38;
  undefined4 local_34;
  map<ENUM_SERVER_GROUP,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>>>>
  local_30 [4];
  pair local_2c [8];
  pair<std::string_const,std::string> local_24 [8];
  char *local_1c [2];
  char *local_14;
  int local_10;
  
  local_14 = "=";
  local_4c = strtok(param_1,"=");
  local_50 = strtok((char *)0x0,local_14);
  trim(local_4c);
  trim(local_50);
  iVar3 = strcmp(local_4c,"game_db_type");
  if (iVar3 == 0) {
    iVar3 = strcmp(local_50,"cain");
    if (iVar3 == 0) {
      *(undefined4 *)(this + 0x3e0) = 1;
    }
    else {
      iVar3 = strcmp(local_50,"diregie");
      if (iVar3 == 0) {
        *(undefined4 *)(this + 0x3e0) = 2;
      }
      else {
        iVar3 = strcmp(local_50,"siroco");
        if (iVar3 == 0) {
          *(undefined4 *)(this + 0x3e0) = 3;
        }
        else {
          iVar3 = strcmp(local_50,"prey");
          if (iVar3 == 0) {
            *(undefined4 *)(this + 0x3e0) = 4;
          }
          else {
            iVar3 = strcmp(local_50,"casillas");
            if (iVar3 == 0) {
              *(undefined4 *)(this + 0x3e0) = 5;
            }
            else {
              iVar3 = strcmp(local_50,"hilder");
              if (iVar3 == 0) {
                *(undefined4 *)(this + 0x3e0) = 6;
              }
              else {
                iVar3 = strcmp(local_50,"ruke");
                if (iVar3 == 0) {
                  *(undefined4 *)(this + 0x3e0) = 7;
                }
                else {
                  iVar3 = strcmp(local_50,"seria");
                  if (iVar3 == 0) {
                    *(undefined4 *)(this + 0x3e0) = 8;
                  }
                  else {
                    iVar3 = strcmp(local_50,"anton");
                    if (iVar3 == 0) {
                      *(undefined4 *)(this + 0x3e0) = 9;
                    }
                    else {
                      iVar3 = strcmp(local_50,"roxy");
                      if (iVar3 == 0) {
                        *(undefined4 *)(this + 0x3e0) = 10;
                      }
                      else {
                        iVar3 = strcmp(local_50,"bakal");
                        if (iVar3 == 0) {
                          *(undefined4 *)(this + 0x3e0) = 0xb;
                        }
                        else {
                          iVar3 = strcmp(local_50,"ozma");
                          if (iVar3 == 0) {
                            *(undefined4 *)(this + 0x3e0) = 0xc;
                          }
                          else {
                            iVar3 = strcmp(local_50,"khazan");
                            if (iVar3 == 0) {
                              *(undefined4 *)(this + 0x3e0) = 0xd;
                            }
                            else {
                              iVar3 = strcmp(local_50,"first1");
                              if (iVar3 == 0) {
                                *(undefined4 *)(this + 0x3e0) = 99;
                              }
                              else {
                                iVar3 = strcmp(local_50,"first2");
                                if (iVar3 == 0) {
                                  *(undefined4 *)(this + 0x3e0) = 100;
                                }
                                else {
                                  iVar3 = strcmp(local_50,"starter_server");
                                  pcVar1 = local_50;
                                  if (iVar3 != 0) {
                                    cMyTrace::cMyTrace(local_48,
                                                  "virtual bool CDBEnviroment::parse(char*)",0x2032,
                                                  5);
                                    cMyTrace::operator()(local_48,"Unknown value (%s)",pcVar1);
                                    return 0;
                                  }
                                  *(undefined4 *)(this + 0x3e0) = 0x11;
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
          }
        }
      }
    }
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::map(local_68);
    local_38 = *(undefined4 *)(this + 0x3e0);
                    /* try { // try from 0829dc3b to 0829dc60 has its CatchHandler @ 0829dc63 */
    iVar3 = G_CEnvironment();
    this_00 = (map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
               *)std::
                 map<ENUM_SERVER_GROUP,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>>>>
                 ::operator[]((map<ENUM_SERVER_GROUP,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>>>>
                               *)(iVar3 + 0x50),(ENUM_SERVER_GROUP *)&local_38);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::operator=(this_00,(map *)local_68);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map(local_68);
  }
  else {
    local_34 = *(undefined4 *)(this + 0x3e0);
    G_CEnvironment();
    std::
    map<ENUM_SERVER_GROUP,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>>>>
    ::find(local_6c);
    G_CEnvironment();
    std::
    map<ENUM_SERVER_GROUP,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>>>>
    ::end(local_30);
    cVar2 = std::
            _Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>>>
            ::operator!=(local_6c,(_Rb_tree_iterator *)local_30);
    if (cVar2 != '\0') {
      local_10 = std::
                 _Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>>>
                 ::operator->(local_6c);
      local_10 = local_10 + 4;
      std::make_pair<char*&,char*&>(local_1c,&local_4c);
      std::pair<std::string_const,std::string>::pair<char*,char*>(local_24,(pair *)local_1c);
                    /* try { // try from 0829dd42 to 0829dd46 has its CatchHandler @ 0829dd57 */
      std::
      map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
      ::insert(local_2c);
      std::pair<std::string_const,std::string>::~pair(local_24);
    }
  }
  return 1;
}
```
