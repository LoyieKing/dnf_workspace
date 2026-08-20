# ReadPeHeader

`_ZN14WindowsExeFile12ReadPeHeaderEv`

`WindowsExeFile::ReadPeHeader()`

| 类 | 地址 |
|---|---|
| `WindowsExeFile` | `0x085738f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085738f6  _ZN14WindowsExeFile12ReadPeHeaderEv
#           WindowsExeFile::ReadPeHeader()
# range [0x085738f6, 0x085740dd]
085738f6 +0x000:  push   %ebp
085738f7 +0x001:  mov    %esp,%ebp
085738f9 +0x003:  push   %esi
085738fa +0x004:  push   %ebx
085738fb +0x005:  sub    $0x100,%esp
08573901 +0x00b:  mov    0x8(%ebp),%eax
08573904 +0x00e:  mov    0x4(%eax),%eax
08573907 +0x011:  test   %eax,%eax
08573909 +0x013:  jne    08573915 <+0x1f>
0857390b +0x015:  mov    $0x0,%eax
08573910 +0x01a:  jmp    085740d4 <+0x7de>
08573915 +0x01f:  mov    0x8(%ebp),%eax
08573918 +0x022:  mov    0x4(%eax),%eax
0857391b +0x025:  mov    %eax,-0x68(%ebp)
0857391e +0x028:  mov    -0x68(%ebp),%eax
08573921 +0x02b:  mov    %eax,-0x60(%ebp)
08573924 +0x02e:  mov    -0x60(%ebp),%eax
08573927 +0x031:  mov    %eax,-0x5c(%ebp)
0857392a +0x034:  mov    -0x5c(%ebp),%eax
0857392d +0x037:  mov    0x3c(%eax),%eax
08573930 +0x03a:  add    -0x68(%ebp),%eax
08573933 +0x03d:  mov    %eax,-0x60(%ebp)
08573936 +0x040:  mov    -0x60(%ebp),%eax
08573939 +0x043:  mov    (%eax),%eax
0857393b +0x045:  mov    %eax,-0x64(%ebp)
0857393e +0x048:  addl   $0x4,-0x60(%ebp)
08573942 +0x04c:  mov    -0x60(%ebp),%eax
08573945 +0x04f:  mov    %eax,-0x58(%ebp)
08573948 +0x052:  addl   $0x14,-0x60(%ebp)
0857394c +0x056:  mov    -0x60(%ebp),%eax
0857394f +0x059:  mov    %eax,-0x54(%ebp)
08573952 +0x05c:  addl   $0xe0,-0x60(%ebp)
08573959 +0x063:  movl   $0x0,-0x70(%ebp)
08573960 +0x06a:  jmp    085740b7 <+0x7c1>
08573965 +0x06f:  mov    -0x60(%ebp),%eax
08573968 +0x072:  mov    %eax,-0x50(%ebp)
0857396b +0x075:  addl   $0x28,-0x60(%ebp)
0857396f +0x079:  mov    -0x50(%ebp),%eax
08573972 +0x07c:  mov    0x14(%eax),%edx
08573975 +0x07f:  mov    -0x50(%ebp),%eax
08573978 +0x082:  mov    0xc(%eax),%eax
0857397b +0x085:  mov    %edx,%ecx
0857397d +0x087:  sub    %eax,%ecx
0857397f +0x089:  mov    %ecx,%eax
08573981 +0x08b:  mov    %eax,-0x4c(%ebp)
08573984 +0x08e:  mov    -0x50(%ebp),%eax
08573987 +0x091:  mov    0x24(%eax),%eax
0857398a +0x094:  test   %eax,%eax
0857398c +0x096:  js     085740b3 <+0x7bd>
08573992 +0x09c:  mov    -0x50(%ebp),%eax
08573995 +0x09f:  mov    0x24(%eax),%eax
08573998 +0x0a2:  and    $0x40000000,%eax
0857399d +0x0a7:  test   %eax,%eax
0857399f +0x0a9:  je     085740b3 <+0x7bd>
085739a5 +0x0af:  mov    -0x50(%ebp),%eax
085739a8 +0x0b2:  mov    0x8(%eax),%edx
085739ab +0x0b5:  mov    -0x50(%ebp),%eax
085739ae +0x0b8:  mov    0x10(%eax),%eax
085739b1 +0x0bb:  cmp    %eax,%edx
085739b3 +0x0bd:  jae    085739c0 <+0xca>
085739b5 +0x0bf:  mov    -0x50(%ebp),%eax
085739b8 +0x0c2:  mov    0x8(%eax),%eax
085739bb +0x0c5:  mov    %eax,-0x48(%ebp)
085739be +0x0c8:  jmp    085739c9 <+0xd3>
085739c0 +0x0ca:  mov    -0x50(%ebp),%eax
085739c3 +0x0cd:  mov    0x10(%eax),%eax
085739c6 +0x0d0:  mov    %eax,-0x48(%ebp)
085739c9 +0x0d3:  mov    -0x50(%ebp),%eax
085739cc +0x0d6:  mov    0x24(%eax),%eax
085739cf +0x0d9:  and    $0x20000000,%eax
085739d4 +0x0de:  test   %eax,%eax
085739d6 +0x0e0:  je     08573ba4 <+0x2ae>
085739dc +0x0e6:  lea    -0xc0(%ebp),%eax
085739e2 +0x0ec:  mov    %eax,(%esp)
085739e5 +0x0ef:  call   08575e9c <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x60>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x60
085739ea +0x0f4:  mov    -0x48(%ebp),%edx
085739ed +0x0f7:  mov    -0x50(%ebp),%eax
085739f0 +0x0fa:  mov    0xc(%eax),%eax
085739f3 +0x0fd:  mov    %edx,0x8(%esp)
085739f7 +0x101:  mov    %eax,0x4(%esp)
085739fb +0x105:  lea    -0xb0(%ebp),%eax
08573a01 +0x10b:  mov    %eax,(%esp)
08573a04 +0x10e:  call   08575e5e <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x22>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x22
08573a09 +0x113:  lea    -0xb0(%ebp),%eax
08573a0f +0x119:  mov    %eax,0x4(%esp)
08573a13 +0x11d:  lea    -0xc0(%ebp),%eax
08573a19 +0x123:  mov    %eax,(%esp)
08573a1c +0x126:  call   0857337a <_ZN11IntervalSet11AddIntervalERK8Interval>  ; IntervalSet::AddInterval(Interval const&)
08573a21 +0x12b:  mov    -0x54(%ebp),%eax
08573a24 +0x12e:  mov    0x10(%eax),%eax
08573a27 +0x131:  movl   $0xa,0x8(%esp)
08573a2f +0x139:  mov    %eax,0x4(%esp)
08573a33 +0x13d:  lea    -0xa8(%ebp),%eax
08573a39 +0x143:  mov    %eax,(%esp)
08573a3c +0x146:  call   08575e5e <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x22>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x22
08573a41 +0x14b:  lea    -0xa8(%ebp),%eax
08573a47 +0x151:  mov    %eax,0x4(%esp)
08573a4b +0x155:  lea    -0xc0(%ebp),%eax
08573a51 +0x15b:  mov    %eax,(%esp)
08573a54 +0x15e:  call   08573394 <_ZN11IntervalSet13MinusIntervalERK8Interval>  ; IntervalSet::MinusInterval(Interval const&)
08573a59 +0x163:  lea    -0xc4(%ebp),%eax
08573a5f +0x169:  mov    %eax,(%esp)
08573a62 +0x16c:  call   085760d4 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x298>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x298
08573a67 +0x171:  lea    -0xcc(%ebp),%eax
08573a6d +0x177:  mov    %eax,(%esp)
08573a70 +0x17a:  call   08575e58 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x1c>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x1c
08573a75 +0x17f:  lea    -0xec(%ebp),%eax
08573a7b +0x185:  lea    -0xc0(%ebp),%edx
08573a81 +0x18b:  mov    %edx,0x4(%esp)
08573a85 +0x18f:  mov    %eax,(%esp)
08573a88 +0x192:  call   085760e2 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x2a6>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x2a6
08573a8d +0x197:  sub    $0x4,%esp
08573a90 +0x19a:  mov    -0xec(%ebp),%eax
08573a96 +0x1a0:  mov    %eax,-0xc4(%ebp)
08573a9c +0x1a6:  jmp    08573b36 <+0x240>
08573aa1 +0x1ab:  lea    -0xc4(%ebp),%eax
08573aa7 +0x1b1:  mov    %eax,(%esp)
08573aaa +0x1b4:  call   08576158 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x31c>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x31c
08573aaf +0x1b9:  mov    0x4(%eax),%edx
08573ab2 +0x1bc:  mov    (%eax),%eax
08573ab4 +0x1be:  mov    %eax,-0xcc(%ebp)
08573aba +0x1c4:  mov    %edx,-0xc8(%ebp)
08573ac0 +0x1ca:  movl   $0x10,(%esp)
08573ac7 +0x1d1:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08573acc +0x1d6:  mov    %eax,-0xb4(%ebp)
08573ad2 +0x1dc:  mov    -0xb4(%ebp),%eax
08573ad8 +0x1e2:  mov    -0xcc(%ebp),%edx
08573ade +0x1e8:  mov    %edx,(%eax)
08573ae0 +0x1ea:  mov    -0xb4(%ebp),%eax
08573ae6 +0x1f0:  mov    -0xcc(%ebp),%edx
08573aec +0x1f6:  add    -0x4c(%ebp),%edx
08573aef +0x1f9:  mov    %edx,0x4(%eax)
08573af2 +0x1fc:  mov    -0xb4(%ebp),%eax
08573af8 +0x202:  mov    -0xc8(%ebp),%edx
08573afe +0x208:  mov    %edx,0x8(%eax)
08573b01 +0x20b:  mov    -0xb4(%ebp),%eax
08573b07 +0x211:  mov    -0x50(%ebp),%edx
08573b0a +0x214:  mov    0x24(%edx),%edx
08573b0d +0x217:  mov    %edx,0xc(%eax)
08573b10 +0x21a:  mov    0x8(%ebp),%eax
08573b13 +0x21d:  lea    0x8(%eax),%edx
08573b16 +0x220:  lea    -0xb4(%ebp),%eax
08573b1c +0x226:  mov    %eax,0x4(%esp)
08573b20 +0x22a:  mov    %edx,(%esp)
08573b23 +0x22d:  call   08576592 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x756>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x756
08573b28 +0x232:  lea    -0xc4(%ebp),%eax
08573b2e +0x238:  mov    %eax,(%esp)
08573b31 +0x23b:  call   085763aa <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x56e>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x56e
08573b36 +0x240:  lea    -0xa0(%ebp),%eax
08573b3c +0x246:  lea    -0xc0(%ebp),%edx
08573b42 +0x24c:  mov    %edx,0x4(%esp)
08573b46 +0x250:  mov    %eax,(%esp)
08573b49 +0x253:  call   08576106 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x2ca>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x2ca
08573b4e +0x258:  sub    $0x4,%esp
08573b51 +0x25b:  lea    -0xa0(%ebp),%eax
08573b57 +0x261:  mov    %eax,0x4(%esp)
08573b5b +0x265:  lea    -0xc4(%ebp),%eax
08573b61 +0x26b:  mov    %eax,(%esp)
08573b64 +0x26e:  call   0857612c <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x2f0>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x2f0
08573b69 +0x273:  test   %al,%al
08573b6b +0x275:  jne    08573aa1 <+0x1ab>
08573b71 +0x27b:  jmp    08573b91 <+0x29b>
08573b73 +0x27d:  mov    %edx,%ebx
08573b75 +0x27f:  mov    %eax,%esi
08573b77 +0x281:  lea    -0xc0(%ebp),%eax
08573b7d +0x287:  mov    %eax,(%esp)
08573b80 +0x28a:  call   08575eb0 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x74>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x74
08573b85 +0x28f:  mov    %esi,%eax
08573b87 +0x291:  mov    %ebx,%edx
08573b89 +0x293:  mov    %eax,(%esp)
08573b8c +0x296:  call   08ae3750 <_Unwind_Resume>
08573b91 +0x29b:  lea    -0xc0(%ebp),%eax
08573b97 +0x2a1:  mov    %eax,(%esp)
08573b9a +0x2a4:  call   08575eb0 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x74>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x74
08573b9f +0x2a9:  jmp    085740b3 <+0x7bd>
08573ba4 +0x2ae:  lea    -0xd8(%ebp),%eax
08573baa +0x2b4:  mov    %eax,(%esp)
08573bad +0x2b7:  call   08575e9c <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x60>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x60
08573bb2 +0x2bc:  mov    -0x48(%ebp),%edx
08573bb5 +0x2bf:  mov    -0x50(%ebp),%eax
08573bb8 +0x2c2:  mov    0xc(%eax),%eax
08573bbb +0x2c5:  mov    %edx,0x8(%esp)
08573bbf +0x2c9:  mov    %eax,0x4(%esp)
08573bc3 +0x2cd:  lea    -0x9c(%ebp),%eax
08573bc9 +0x2d3:  mov    %eax,(%esp)
08573bcc +0x2d6:  call   08575e5e <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x22>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x22
08573bd1 +0x2db:  lea    -0x9c(%ebp),%eax
08573bd7 +0x2e1:  mov    %eax,0x4(%esp)
08573bdb +0x2e5:  lea    -0xd8(%ebp),%eax
08573be1 +0x2eb:  mov    %eax,(%esp)
08573be4 +0x2ee:  call   0857337a <_ZN11IntervalSet11AddIntervalERK8Interval>  ; IntervalSet::AddInterval(Interval const&)
08573be9 +0x2f3:  movl   $0x2,-0x44(%ebp)
08573bf0 +0x2fa:  movl   $0x6,-0x40(%ebp)
08573bf7 +0x301:  movl   $0x0,-0x6c(%ebp)
08573bfe +0x308:  jmp    08573c9f <+0x3a9>
08573c03 +0x30d:  mov    -0x6c(%ebp),%edx
08573c06 +0x310:  mov    -0x54(%ebp),%eax
08573c09 +0x313:  add    $0xc,%edx
08573c0c +0x316:  mov    0x4(%eax,%edx,8),%eax
08573c10 +0x31a:  mov    %eax,%ebx
08573c12 +0x31c:  mov    -0x6c(%ebp),%edx
08573c15 +0x31f:  mov    -0x54(%ebp),%eax
08573c18 +0x322:  add    $0xc,%edx
08573c1b +0x325:  mov    (%eax,%edx,8),%eax
08573c1e +0x328:  mov    %eax,%ecx
08573c20 +0x32a:  mov    -0x50(%ebp),%eax
08573c23 +0x32d:  mov    0x8(%eax),%eax
08573c26 +0x330:  mov    %eax,%edx
08573c28 +0x332:  mov    -0x50(%ebp),%eax
08573c2b +0x335:  mov    0xc(%eax),%eax
08573c2e +0x338:  mov    %ebx,0xc(%esp)
08573c32 +0x33c:  mov    %ecx,0x8(%esp)
08573c36 +0x340:  mov    %edx,0x4(%esp)
08573c3a +0x344:  mov    %eax,(%esp)
08573c3d +0x347:  call   0857302c <_Z20IsOverlappedIntervalllll>  ; IsOverlappedInterval(long, long, long, long)
08573c42 +0x34c:  test   %al,%al
08573c44 +0x34e:  je     08573c9b <+0x3a5>
08573c46 +0x350:  cmpl   $0x2,-0x6c(%ebp)
08573c4a +0x354:  je     08573c9b <+0x3a5>
08573c4c +0x356:  cmpl   $0x6,-0x6c(%ebp)
08573c50 +0x35a:  je     08573c9b <+0x3a5>
08573c52 +0x35c:  mov    -0x6c(%ebp),%edx
08573c55 +0x35f:  mov    -0x54(%ebp),%eax
08573c58 +0x362:  add    $0xc,%edx
08573c5b +0x365:  mov    0x4(%eax,%edx,8),%eax
08573c5f +0x369:  mov    %eax,%edx
08573c61 +0x36b:  mov    -0x6c(%ebp),%ecx
08573c64 +0x36e:  mov    -0x54(%ebp),%eax
08573c67 +0x371:  add    $0xc,%ecx
08573c6a +0x374:  mov    (%eax,%ecx,8),%eax
08573c6d +0x377:  mov    %edx,0x8(%esp)
08573c71 +0x37b:  mov    %eax,0x4(%esp)
08573c75 +0x37f:  lea    -0x94(%ebp),%eax
08573c7b +0x385:  mov    %eax,(%esp)
08573c7e +0x388:  call   08575e5e <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x22>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x22
08573c83 +0x38d:  lea    -0x94(%ebp),%eax
08573c89 +0x393:  mov    %eax,0x4(%esp)
08573c8d +0x397:  lea    -0xd8(%ebp),%eax
08573c93 +0x39d:  mov    %eax,(%esp)
08573c96 +0x3a0:  call   08573394 <_ZN11IntervalSet13MinusIntervalERK8Interval>  ; IntervalSet::MinusInterval(Interval const&)
08573c9b +0x3a5:  addl   $0x1,-0x6c(%ebp)
08573c9f +0x3a9:  mov    -0x54(%ebp),%eax
08573ca2 +0x3ac:  mov    0x5c(%eax),%eax
08573ca5 +0x3af:  cmp    -0x6c(%ebp),%eax
08573ca8 +0x3b2:  setg   %al
08573cab +0x3b5:  test   %al,%al
08573cad +0x3b7:  jne    08573c03 <+0x30d>
08573cb3 +0x3bd:  movl   $0x1,-0x3c(%ebp)
08573cba +0x3c4:  mov    -0x54(%ebp),%eax
08573cbd +0x3c7:  mov    0x5c(%eax),%eax
08573cc0 +0x3ca:  cmp    $0x1,%eax
08573cc3 +0x3cd:  jbe    08573d02 <+0x40c>
08573cc5 +0x3cf:  mov    -0x54(%ebp),%eax
08573cc8 +0x3d2:  mov    0x6c(%eax),%eax
08573ccb +0x3d5:  mov    %eax,%ebx
08573ccd +0x3d7:  mov    -0x54(%ebp),%eax
08573cd0 +0x3da:  mov    0x68(%eax),%eax
08573cd3 +0x3dd:  mov    %eax,%ecx
08573cd5 +0x3df:  mov    -0x50(%ebp),%eax
08573cd8 +0x3e2:  mov    0x8(%eax),%eax
08573cdb +0x3e5:  mov    %eax,%edx
08573cdd +0x3e7:  mov    -0x50(%ebp),%eax
08573ce0 +0x3ea:  mov    0xc(%eax),%eax
08573ce3 +0x3ed:  mov    %ebx,0xc(%esp)
08573ce7 +0x3f1:  mov    %ecx,0x8(%esp)
08573ceb +0x3f5:  mov    %edx,0x4(%esp)
08573cef +0x3f9:  mov    %eax,(%esp)
08573cf2 +0x3fc:  call   0857302c <_Z20IsOverlappedIntervalllll>  ; IsOverlappedInterval(long, long, long, long)
08573cf7 +0x401:  test   %al,%al
08573cf9 +0x403:  je     08573d02 <+0x40c>
08573cfb +0x405:  mov    $0x1,%eax
08573d00 +0x40a:  jmp    08573d07 <+0x411>
08573d02 +0x40c:  mov    $0x0,%eax
08573d07 +0x411:  test   %al,%al
08573d09 +0x413:  je     08573f73 <+0x67d>
08573d0f +0x419:  mov    0x8(%ebp),%eax
08573d12 +0x41c:  mov    0x4(%eax),%eax
08573d15 +0x41f:  mov    %eax,%edx
08573d17 +0x421:  mov    -0x54(%ebp),%eax
08573d1a +0x424:  mov    0x68(%eax),%eax
08573d1d +0x427:  lea    (%edx,%eax,1),%eax
08573d20 +0x42a:  mov    %eax,-0x38(%ebp)
08573d23 +0x42d:  movl   $0x0,-0x6c(%ebp)
08573d2a +0x434:  mov    -0x6c(%ebp),%edx
08573d2d +0x437:  mov    %edx,%eax
08573d2f +0x439:  shl    $0x2,%eax
08573d32 +0x43c:  add    %edx,%eax
08573d34 +0x43e:  shl    $0x2,%eax
08573d37 +0x441:  add    -0x38(%ebp),%eax
08573d3a +0x444:  mov    (%eax),%eax
08573d3c +0x446:  test   %eax,%eax
08573d3e +0x448:  jne    08573d5b <+0x465>
08573d40 +0x44a:  mov    -0x6c(%ebp),%edx
08573d43 +0x44d:  mov    %edx,%eax
08573d45 +0x44f:  shl    $0x2,%eax
08573d48 +0x452:  add    %edx,%eax
08573d4a +0x454:  shl    $0x2,%eax
08573d4d +0x457:  add    -0x38(%ebp),%eax
08573d50 +0x45a:  mov    0x10(%eax),%eax
08573d53 +0x45d:  test   %eax,%eax
08573d55 +0x45f:  je     08573f72 <+0x67c>
08573d5b +0x465:  mov    -0x6c(%ebp),%edx
08573d5e +0x468:  mov    %edx,%eax
08573d60 +0x46a:  shl    $0x2,%eax
08573d63 +0x46d:  add    %edx,%eax
08573d65 +0x46f:  shl    $0x2,%eax
08573d68 +0x472:  add    -0x38(%ebp),%eax
08573d6b +0x475:  mov    (%eax),%edx
08573d6d +0x477:  mov    -0x4c(%ebp),%eax
08573d70 +0x47a:  lea    (%edx,%eax,1),%eax
08573d73 +0x47d:  mov    %eax,-0x34(%ebp)
08573d76 +0x480:  mov    0x8(%ebp),%eax
08573d79 +0x483:  mov    0x4(%eax),%eax
08573d7c +0x486:  add    -0x34(%ebp),%eax
08573d7f +0x489:  mov    %eax,-0x30(%ebp)
08573d82 +0x48c:  movl   $0x0,-0x2c(%ebp)
08573d89 +0x493:  jmp    08573e60 <+0x56a>
08573d8e +0x498:  mov    -0x2c(%ebp),%eax
08573d91 +0x49b:  shl    $0x2,%eax
08573d94 +0x49e:  add    -0x30(%ebp),%eax
08573d97 +0x4a1:  mov    (%eax),%eax
08573d99 +0x4a3:  test   %eax,%eax
08573d9b +0x4a5:  jns    08573db1 <+0x4bb>
08573d9d +0x4a7:  mov    -0x2c(%ebp),%eax
08573da0 +0x4aa:  shl    $0x2,%eax
08573da3 +0x4ad:  add    -0x30(%ebp),%eax
08573da6 +0x4b0:  mov    (%eax),%eax
08573da8 +0x4b2:  mov    %ax,-0x26(%ebp)
08573dac +0x4b6:  jmp    08573e5c <+0x566>
08573db1 +0x4bb:  movl   $0x0,-0x20(%ebp)
08573db8 +0x4c2:  mov    -0x2c(%ebp),%eax
08573dbb +0x4c5:  shl    $0x2,%eax
08573dbe +0x4c8:  add    -0x30(%ebp),%eax
08573dc1 +0x4cb:  mov    (%eax),%edx
08573dc3 +0x4cd:  mov    -0x4c(%ebp),%eax
08573dc6 +0x4d0:  lea    (%edx,%eax,1),%eax
08573dc9 +0x4d3:  mov    %eax,-0x24(%ebp)
08573dcc +0x4d6:  mov    0x8(%ebp),%eax
08573dcf +0x4d9:  mov    0x4(%eax),%eax
08573dd2 +0x4dc:  add    -0x24(%ebp),%eax
08573dd5 +0x4df:  movzwl (%eax),%eax
08573dd8 +0x4e2:  mov    %ax,-0x1a(%ebp)
08573ddc +0x4e6:  addl   $0x2,-0x20(%ebp)
08573de0 +0x4ea:  mov    0x8(%ebp),%eax
08573de3 +0x4ed:  mov    0x4(%eax),%eax
08573de6 +0x4f0:  mov    -0x24(%ebp),%edx
08573de9 +0x4f3:  add    $0x2,%edx
08573dec +0x4f6:  add    %edx,%eax
08573dee +0x4f8:  mov    %eax,-0x18(%ebp)
08573df1 +0x4fb:  cmpl   $0x0,-0x18(%ebp)
08573df5 +0x4ff:  je     08573e5c <+0x566>
08573df7 +0x501:  mov    -0x18(%ebp),%eax
08573dfa +0x504:  mov    %eax,(%esp)
08573dfd +0x507:  call   0807e3b0 <_init+0xca8>
08573e02 +0x50c:  mov    %eax,-0x14(%ebp)
08573e05 +0x50f:  addl   $0x1,-0x14(%ebp)
08573e09 +0x513:  mov    -0x14(%ebp),%eax
08573e0c +0x516:  add    -0x24(%ebp),%eax
08573e0f +0x519:  and    $0x1,%eax
08573e12 +0x51c:  test   %al,%al
08573e14 +0x51e:  je     08573e1a <+0x524>
08573e16 +0x520:  addl   $0x1,-0x14(%ebp)
08573e1a +0x524:  mov    -0x14(%ebp),%eax
08573e1d +0x527:  add    %eax,-0x20(%ebp)
08573e20 +0x52a:  mov    -0x20(%ebp),%edx
08573e23 +0x52d:  mov    -0x2c(%ebp),%eax
08573e26 +0x530:  shl    $0x2,%eax
08573e29 +0x533:  add    -0x30(%ebp),%eax
08573e2c +0x536:  mov    (%eax),%eax
08573e2e +0x538:  mov    %edx,0x8(%esp)
08573e32 +0x53c:  mov    %eax,0x4(%esp)
08573e36 +0x540:  lea    -0x8c(%ebp),%eax
08573e3c +0x546:  mov    %eax,(%esp)
08573e3f +0x549:  call   08575e5e <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x22>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x22
08573e44 +0x54e:  lea    -0x8c(%ebp),%eax
08573e4a +0x554:  mov    %eax,0x4(%esp)
08573e4e +0x558:  lea    -0xd8(%ebp),%eax
08573e54 +0x55e:  mov    %eax,(%esp)
08573e57 +0x561:  call   08573394 <_ZN11IntervalSet13MinusIntervalERK8Interval>  ; IntervalSet::MinusInterval(Interval const&)
08573e5c +0x566:  addl   $0x1,-0x2c(%ebp)
08573e60 +0x56a:  mov    -0x2c(%ebp),%eax
08573e63 +0x56d:  shl    $0x2,%eax
08573e66 +0x570:  add    -0x30(%ebp),%eax
08573e69 +0x573:  mov    (%eax),%eax
08573e6b +0x575:  test   %eax,%eax
08573e6d +0x577:  setne  %al
08573e70 +0x57a:  test   %al,%al
08573e72 +0x57c:  jne    08573d8e <+0x498>
08573e78 +0x582:  mov    -0x6c(%ebp),%edx
08573e7b +0x585:  mov    %edx,%eax
08573e7d +0x587:  shl    $0x2,%eax
08573e80 +0x58a:  add    %edx,%eax
08573e82 +0x58c:  shl    $0x2,%eax
08573e85 +0x58f:  add    -0x38(%ebp),%eax
08573e88 +0x592:  mov    0xc(%eax),%eax
08573e8b +0x595:  test   %eax,%eax
08573e8d +0x597:  je     08573f22 <+0x62c>
08573e93 +0x59d:  movl   $0x0,-0x10(%ebp)
08573e9a +0x5a4:  mov    0x8(%ebp),%eax
08573e9d +0x5a7:  mov    0x4(%eax),%eax
08573ea0 +0x5aa:  mov    %eax,%ecx
08573ea2 +0x5ac:  mov    -0x6c(%ebp),%edx
08573ea5 +0x5af:  mov    %edx,%eax
08573ea7 +0x5b1:  shl    $0x2,%eax
08573eaa +0x5b4:  add    %edx,%eax
08573eac +0x5b6:  shl    $0x2,%eax
08573eaf +0x5b9:  add    -0x38(%ebp),%eax
08573eb2 +0x5bc:  mov    0xc(%eax),%eax
08573eb5 +0x5bf:  lea    (%ecx,%eax,1),%eax
08573eb8 +0x5c2:  mov    %eax,-0xc(%ebp)
08573ebb +0x5c5:  mov    -0xc(%ebp),%eax
08573ebe +0x5c8:  mov    %eax,(%esp)
08573ec1 +0x5cb:  call   0807e3b0 <_init+0xca8>
08573ec6 +0x5d0:  mov    %eax,-0x10(%ebp)
08573ec9 +0x5d3:  addl   $0x1,-0x10(%ebp)
08573ecd +0x5d7:  mov    -0x10(%ebp),%eax
08573ed0 +0x5da:  add    -0x34(%ebp),%eax
08573ed3 +0x5dd:  and    $0x1,%eax
08573ed6 +0x5e0:  test   %al,%al
08573ed8 +0x5e2:  je     08573ede <+0x5e8>
08573eda +0x5e4:  addl   $0x1,-0x10(%ebp)
08573ede +0x5e8:  mov    -0x6c(%ebp),%edx
08573ee1 +0x5eb:  mov    %edx,%eax
08573ee3 +0x5ed:  shl    $0x2,%eax
08573ee6 +0x5f0:  add    %edx,%eax
08573ee8 +0x5f2:  shl    $0x2,%eax
08573eeb +0x5f5:  add    -0x38(%ebp),%eax
08573eee +0x5f8:  mov    0xc(%eax),%eax
08573ef1 +0x5fb:  mov    -0x10(%ebp),%edx
08573ef4 +0x5fe:  mov    %edx,0x8(%esp)
08573ef8 +0x602:  mov    %eax,0x4(%esp)
08573efc +0x606:  lea    -0x84(%ebp),%eax
08573f02 +0x60c:  mov    %eax,(%esp)
08573f05 +0x60f:  call   08575e5e <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x22>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x22
08573f0a +0x614:  lea    -0x84(%ebp),%eax
08573f10 +0x61a:  mov    %eax,0x4(%esp)
08573f14 +0x61e:  lea    -0xd8(%ebp),%eax
08573f1a +0x624:  mov    %eax,(%esp)
08573f1d +0x627:  call   08573394 <_ZN11IntervalSet13MinusIntervalERK8Interval>  ; IntervalSet::MinusInterval(Interval const&)
08573f22 +0x62c:  mov    -0x2c(%ebp),%eax
08573f25 +0x62f:  add    $0x1,%eax
08573f28 +0x632:  lea    0x0(,%eax,4),%ecx
08573f2f +0x639:  mov    -0x6c(%ebp),%edx
08573f32 +0x63c:  mov    %edx,%eax
08573f34 +0x63e:  shl    $0x2,%eax
08573f37 +0x641:  add    %edx,%eax
08573f39 +0x643:  shl    $0x2,%eax
08573f3c +0x646:  add    -0x38(%ebp),%eax
08573f3f +0x649:  mov    (%eax),%eax
08573f41 +0x64b:  mov    %ecx,0x8(%esp)
08573f45 +0x64f:  mov    %eax,0x4(%esp)
08573f49 +0x653:  lea    -0x7c(%ebp),%eax
08573f4c +0x656:  mov    %eax,(%esp)
08573f4f +0x659:  call   08575e5e <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x22>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x22
08573f54 +0x65e:  lea    -0x7c(%ebp),%eax
08573f57 +0x661:  mov    %eax,0x4(%esp)
08573f5b +0x665:  lea    -0xd8(%ebp),%eax
08573f61 +0x66b:  mov    %eax,(%esp)
08573f64 +0x66e:  call   08573394 <_ZN11IntervalSet13MinusIntervalERK8Interval>  ; IntervalSet::MinusInterval(Interval const&)
08573f69 +0x673:  addl   $0x1,-0x6c(%ebp)
08573f6d +0x677:  jmp    08573d2a <+0x434>
08573f72 +0x67c:  nop
08573f73 +0x67d:  lea    -0xdc(%ebp),%eax
08573f79 +0x683:  mov    %eax,(%esp)
08573f7c +0x686:  call   085760d4 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x298>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x298
08573f81 +0x68b:  lea    -0xe4(%ebp),%eax
08573f87 +0x691:  mov    %eax,(%esp)
08573f8a +0x694:  call   08575e58 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x1c>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x1c
08573f8f +0x699:  lea    -0xec(%ebp),%eax
08573f95 +0x69f:  lea    -0xd8(%ebp),%edx
08573f9b +0x6a5:  mov    %edx,0x4(%esp)
08573f9f +0x6a9:  mov    %eax,(%esp)
08573fa2 +0x6ac:  call   085760e2 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x2a6>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x2a6
08573fa7 +0x6b1:  sub    $0x4,%esp
08573faa +0x6b4:  mov    -0xec(%ebp),%eax
08573fb0 +0x6ba:  mov    %eax,-0xdc(%ebp)
08573fb6 +0x6c0:  jmp    08574050 <+0x75a>
08573fbb +0x6c5:  lea    -0xdc(%ebp),%eax
08573fc1 +0x6cb:  mov    %eax,(%esp)
08573fc4 +0x6ce:  call   08576158 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x31c>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x31c
08573fc9 +0x6d3:  mov    0x4(%eax),%edx
08573fcc +0x6d6:  mov    (%eax),%eax
08573fce +0x6d8:  mov    %eax,-0xe4(%ebp)
08573fd4 +0x6de:  mov    %edx,-0xe0(%ebp)
08573fda +0x6e4:  movl   $0x10,(%esp)
08573fe1 +0x6eb:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08573fe6 +0x6f0:  mov    %eax,-0xb4(%ebp)
08573fec +0x6f6:  mov    -0xb4(%ebp),%eax
08573ff2 +0x6fc:  mov    -0xe4(%ebp),%edx
08573ff8 +0x702:  mov    %edx,(%eax)
08573ffa +0x704:  mov    -0xb4(%ebp),%eax
08574000 +0x70a:  mov    -0xe4(%ebp),%edx
08574006 +0x710:  add    -0x4c(%ebp),%edx
08574009 +0x713:  mov    %edx,0x4(%eax)
0857400c +0x716:  mov    -0xb4(%ebp),%eax
08574012 +0x71c:  mov    -0xe0(%ebp),%edx
08574018 +0x722:  mov    %edx,0x8(%eax)
0857401b +0x725:  mov    -0xb4(%ebp),%eax
08574021 +0x72b:  mov    -0x50(%ebp),%edx
08574024 +0x72e:  mov    0x24(%edx),%edx
08574027 +0x731:  mov    %edx,0xc(%eax)
0857402a +0x734:  mov    0x8(%ebp),%eax
0857402d +0x737:  lea    0x8(%eax),%edx
08574030 +0x73a:  lea    -0xb4(%ebp),%eax
08574036 +0x740:  mov    %eax,0x4(%esp)
0857403a +0x744:  mov    %edx,(%esp)
0857403d +0x747:  call   08576592 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x756>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x756
08574042 +0x74c:  lea    -0xdc(%ebp),%eax
08574048 +0x752:  mov    %eax,(%esp)
0857404b +0x755:  call   085763aa <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x56e>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x56e
08574050 +0x75a:  lea    -0x74(%ebp),%eax
08574053 +0x75d:  lea    -0xd8(%ebp),%edx
08574059 +0x763:  mov    %edx,0x4(%esp)
0857405d +0x767:  mov    %eax,(%esp)
08574060 +0x76a:  call   08576106 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x2ca>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x2ca
08574065 +0x76f:  sub    $0x4,%esp
08574068 +0x772:  lea    -0x74(%ebp),%eax
0857406b +0x775:  mov    %eax,0x4(%esp)
0857406f +0x779:  lea    -0xdc(%ebp),%eax
08574075 +0x77f:  mov    %eax,(%esp)
08574078 +0x782:  call   0857612c <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x2f0>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x2f0
0857407d +0x787:  test   %al,%al
0857407f +0x789:  jne    08573fbb <+0x6c5>
08574085 +0x78f:  jmp    085740a5 <+0x7af>
08574087 +0x791:  mov    %edx,%ebx
08574089 +0x793:  mov    %eax,%esi
0857408b +0x795:  lea    -0xd8(%ebp),%eax
08574091 +0x79b:  mov    %eax,(%esp)
08574094 +0x79e:  call   08575eb0 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x74>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x74
08574099 +0x7a3:  mov    %esi,%eax
0857409b +0x7a5:  mov    %ebx,%edx
0857409d +0x7a7:  mov    %eax,(%esp)
085740a0 +0x7aa:  call   08ae3750 <_Unwind_Resume>
085740a5 +0x7af:  lea    -0xd8(%ebp),%eax
085740ab +0x7b5:  mov    %eax,(%esp)
085740ae +0x7b8:  call   08575eb0 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x74>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x74
085740b3 +0x7bd:  addl   $0x1,-0x70(%ebp)
085740b7 +0x7c1:  mov    -0x58(%ebp),%eax
085740ba +0x7c4:  movzwl 0x2(%eax),%eax
085740be +0x7c8:  movzwl %ax,%eax
085740c1 +0x7cb:  cmp    -0x70(%ebp),%eax
085740c4 +0x7ce:  setg   %al
085740c7 +0x7d1:  test   %al,%al
085740c9 +0x7d3:  jne    08573965 <+0x6f>
085740cf +0x7d9:  mov    $0x1,%eax
085740d4 +0x7de:  lea    -0x8(%ebp),%esp
085740d7 +0x7e1:  add    $0x0,%esp
085740da +0x7e4:  pop    %ebx
085740db +0x7e5:  pop    %esi
085740dc +0x7e6:  pop    %ebp
085740dd +0x7e7:  ret
```

## 反编译 C

```c
// WindowsExeFile::ReadPeHeader @ 0x85738f6

/* WindowsExeFile::ReadPeHeader() */

undefined4 __thiscall WindowsExeFile::ReadPeHeader(WindowsExeFile *this)

{
  undefined4 *puVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int *piVar5;
  size_t sVar6;
  int local_e8;
  int local_e4;
  __normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>> local_e0 [4];
  IntervalSet local_dc [12];
  int local_d0;
  int local_cc;
  __normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>> local_c8 [4];
  IntervalSet local_c4 [12];
  WindowsExeConstantSection *local_b8;
  Interval local_b4 [8];
  Interval local_ac [8];
  __normal_iterator local_a4 [4];
  Interval local_a0 [8];
  Interval local_98 [8];
  Interval local_90 [8];
  Interval local_88 [8];
  Interval local_80 [8];
  __normal_iterator local_78 [4];
  int local_74;
  int local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 *local_64;
  int local_60;
  undefined4 *local_5c;
  undefined4 *local_58;
  undefined4 *local_54;
  int local_50;
  long local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined2 local_2a;
  int local_28;
  int local_24;
  undefined2 local_1e;
  char *local_1c;
  int local_18;
  long local_14;
  char *local_10;
  
  if (*(int *)(this + 4) == 0) {
    uVar4 = 0;
  }
  else {
    local_6c = *(int *)(this + 4);
    local_64 = (undefined4 *)(*(int *)(local_6c + 0x3c) + local_6c);
    local_68 = *local_64;
    local_5c = local_64 + 1;
    local_58 = local_64 + 6;
    local_64 = local_64 + 0x3e;
    local_60 = local_6c;
    for (local_74 = 0; local_74 < (int)(uint)*(ushort *)((int)local_5c + 2); local_74 = local_74 + 1
        ) {
      local_54 = local_64;
      puVar1 = local_64 + 10;
      local_50 = local_64[5] - local_64[3];
      if ((-1 < (int)local_64[9]) && ((local_64[9] & 0x40000000) != 0)) {
        if ((uint)local_64[2] < (uint)local_64[4]) {
          local_4c = local_64[2];
        }
        else {
          local_4c = local_64[4];
        }
        if ((local_64[9] & 0x20000000) == 0) {
          local_64 = puVar1;
          IntervalSet::IntervalSet(local_dc);
          Interval::Interval(local_a0,local_54[3],local_4c);
                    /* try { // try from 08573be4 to 0857407c has its CatchHandler @ 08574087 */
          IntervalSet::AddInterval(local_dc,local_a0);
          local_48 = 2;
          local_44 = 6;
          for (local_70 = 0; local_70 < (int)local_58[0x17]; local_70 = local_70 + 1) {
            cVar3 = IsOverlappedInterval
                              (local_54[3],local_54[2],local_58[(local_70 + 0xc) * 2],
                               local_58[(local_70 + 0xc) * 2 + 1]);
            if (((cVar3 != '\0') && (local_70 != 2)) && (local_70 != 6)) {
              Interval::Interval(local_98,local_58[(local_70 + 0xc) * 2],
                                 local_58[(local_70 + 0xc) * 2 + 1]);
              IntervalSet::MinusInterval(local_dc,local_98);
            }
          }
          local_40 = 1;
          if ((uint)local_58[0x17] < 2) {
LAB_08573d02:
            bVar2 = false;
          }
          else {
            cVar3 = IsOverlappedInterval(local_54[3],local_54[2],local_58[0x1a],local_58[0x1b]);
            if (cVar3 == '\0') goto LAB_08573d02;
            bVar2 = true;
          }
          if (bVar2) {
            local_3c = *(int *)(this + 4) + local_58[0x1a];
            local_70 = 0;
            while ((*(int *)(local_70 * 0x14 + local_3c) != 0 ||
                   (*(int *)(local_70 * 0x14 + local_3c + 0x10) != 0))) {
              local_38 = *(int *)(local_70 * 0x14 + local_3c) + local_50;
              local_34 = *(int *)(this + 4) + local_38;
              for (local_30 = 0; *(int *)(local_30 * 4 + local_34) != 0; local_30 = local_30 + 1) {
                if (*(int *)(local_30 * 4 + local_34) < 0) {
                  local_2a = (undefined2)*(undefined4 *)(local_30 * 4 + local_34);
                }
                else {
                  local_28 = *(int *)(local_30 * 4 + local_34) + local_50;
                  local_1e = *(undefined2 *)(*(int *)(this + 4) + local_28);
                  local_24 = 2;
                  local_1c = (char *)(*(int *)(this + 4) + local_28 + 2);
                  if (local_1c != (char *)0x0) {
                    sVar6 = strlen(local_1c);
                    local_18 = sVar6 + 1;
                    if (((char)local_18 + (char)local_28 & 1U) != 0) {
                      local_18 = sVar6 + 2;
                    }
                    local_24 = local_24 + local_18;
                    Interval::Interval(local_90,*(long *)(local_30 * 4 + local_34),local_24);
                    IntervalSet::MinusInterval(local_dc,local_90);
                  }
                }
              }
              if (*(int *)(local_70 * 0x14 + local_3c + 0xc) != 0) {
                local_14 = 0;
                local_10 = (char *)(*(int *)(this + 4) + *(int *)(local_70 * 0x14 + local_3c + 0xc))
                ;
                sVar6 = strlen(local_10);
                local_14 = sVar6 + 1;
                if (((char)local_14 + (char)local_38 & 1U) != 0) {
                  local_14 = sVar6 + 2;
                }
                Interval::Interval(local_88,*(long *)(local_70 * 0x14 + local_3c + 0xc),local_14);
                IntervalSet::MinusInterval(local_dc,local_88);
              }
              Interval::Interval(local_80,*(long *)(local_70 * 0x14 + local_3c),(local_30 + 1) * 4);
              IntervalSet::MinusInterval(local_dc,local_80);
              local_70 = local_70 + 1;
            }
          }
          __gnu_cxx::__normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>>::
          __normal_iterator(local_e0);
          Interval::Interval((Interval *)&local_e8);
          std::vector<Interval,std::allocator<Interval>>::begin();
          while( true ) {
            std::vector<Interval,std::allocator<Interval>>::end();
            bVar2 = __gnu_cxx::operator!=(local_e0,local_78);
            if (!bVar2) break;
            piVar5 = (int *)__gnu_cxx::
                            __normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>>
                            ::operator*(local_e0);
            local_e4 = piVar5[1];
            local_e8 = *piVar5;
            local_b8 = operator_new(0x10);
            *(int *)local_b8 = local_e8;
            *(int *)(local_b8 + 4) = local_e8 + local_50;
            *(int *)(local_b8 + 8) = local_e4;
            *(undefined4 *)(local_b8 + 0xc) = local_54[9];
            std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>::
            push_back((vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>
                       *)(this + 8),&local_b8);
            __gnu_cxx::__normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>>::
            operator++(local_e0);
          }
          IntervalSet::~IntervalSet(local_dc);
          puVar1 = local_64;
        }
        else {
          local_64 = puVar1;
          IntervalSet::IntervalSet(local_c4);
          Interval::Interval(local_b4,local_54[3],local_4c);
                    /* try { // try from 08573a1c to 08573b68 has its CatchHandler @ 08573b73 */
          IntervalSet::AddInterval(local_c4,local_b4);
          Interval::Interval(local_ac,local_58[4],10);
          IntervalSet::MinusInterval(local_c4,local_ac);
          __gnu_cxx::__normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>>::
          __normal_iterator(local_c8);
          Interval::Interval((Interval *)&local_d0);
          std::vector<Interval,std::allocator<Interval>>::begin();
          while( true ) {
            std::vector<Interval,std::allocator<Interval>>::end();
            bVar2 = __gnu_cxx::operator!=(local_c8,local_a4);
            if (!bVar2) break;
            piVar5 = (int *)__gnu_cxx::
                            __normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>>
                            ::operator*(local_c8);
            local_cc = piVar5[1];
            local_d0 = *piVar5;
            local_b8 = operator_new(0x10);
            *(int *)local_b8 = local_d0;
            *(int *)(local_b8 + 4) = local_d0 + local_50;
            *(int *)(local_b8 + 8) = local_cc;
            *(undefined4 *)(local_b8 + 0xc) = local_54[9];
            std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>::
            push_back((vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>
                       *)(this + 8),&local_b8);
            __gnu_cxx::__normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>>::
            operator++(local_c8);
          }
          IntervalSet::~IntervalSet(local_c4);
          puVar1 = local_64;
        }
      }
      local_64 = puVar1;
    }
    uVar4 = 1;
  }
  return uVar4;
}
```
