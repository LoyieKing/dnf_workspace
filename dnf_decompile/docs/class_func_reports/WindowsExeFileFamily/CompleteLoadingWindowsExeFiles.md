# CompleteLoadingWindowsExeFiles

`_ZN20WindowsExeFileFamily30CompleteLoadingWindowsExeFilesEv`

`WindowsExeFileFamily::CompleteLoadingWindowsExeFiles()`

| 类 | 地址 |
|---|---|
| `WindowsExeFileFamily` | `0x08574736` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08574736  _ZN20WindowsExeFileFamily30CompleteLoadingWindowsExeFilesEv
#           WindowsExeFileFamily::CompleteLoadingWindowsExeFiles()
# range [0x08574736, 0x08574acd]
08574736 +0x000:  push   %ebp
08574737 +0x001:  mov    %esp,%ebp
08574739 +0x003:  push   %edi
0857473a +0x004:  push   %esi
0857473b +0x005:  push   %ebx
0857473c +0x006:  sub    $0x9c,%esp
08574742 +0x00c:  lea    -0x3c(%ebp),%eax
08574745 +0x00f:  mov    %eax,(%esp)
08574748 +0x012:  call   085766a6 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x86a>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x86a
0857474d +0x017:  lea    -0x40(%ebp),%eax
08574750 +0x01a:  mov    %eax,(%esp)
08574753 +0x01d:  call   08576460 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x624>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x624
08574758 +0x022:  lea    -0x4c(%ebp),%eax
0857475b +0x025:  mov    %eax,(%esp)
0857475e +0x028:  call   0857681e <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x9e2>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x9e2
08574763 +0x02d:  lea    -0x7c(%ebp),%ebx
08574766 +0x030:  mov    %ebx,%edi
08574768 +0x032:  mov    $0x2,%esi
0857476d +0x037:  jmp    0857477d <+0x47>
0857476f +0x039:  mov    %edi,(%esp)
08574772 +0x03c:  call   08575e9c <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x60>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x60
08574777 +0x041:  add    $0xc,%edi
0857477a +0x044:  sub    $0x1,%esi
0857477d +0x047:  cmp    $0xffffffff,%esi
08574780 +0x04a:  setne  %al
08574783 +0x04d:  test   %al,%al
08574785 +0x04f:  jne    0857476f <+0x39>
08574787 +0x051:  jmp    085747c8 <+0x92>
08574789 +0x053:  mov    %edx,%edi
0857478b +0x055:  mov    %eax,-0x90(%ebp)
08574791 +0x05b:  test   %ebx,%ebx
08574793 +0x05d:  je     085747bb <+0x85>
08574795 +0x05f:  mov    $0x2,%eax
0857479a +0x064:  sub    %esi,%eax
0857479c +0x066:  mov    %eax,%edx
0857479e +0x068:  mov    %edx,%eax
085747a0 +0x06a:  add    %eax,%eax
085747a2 +0x06c:  add    %edx,%eax
085747a4 +0x06e:  shl    $0x2,%eax
085747a7 +0x071:  lea    (%ebx,%eax,1),%esi
085747aa +0x074:  cmp    %ebx,%esi
085747ac +0x076:  je     085747bb <+0x85>
085747ae +0x078:  sub    $0xc,%esi
085747b1 +0x07b:  mov    %esi,(%esp)
085747b4 +0x07e:  call   08575eb0 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x74>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x74
085747b9 +0x083:  jmp    085747aa <+0x74>
085747bb +0x085:  mov    -0x90(%ebp),%eax
085747c1 +0x08b:  mov    %edi,%edx
085747c3 +0x08d:  jmp    08574a9b <+0x365>
085747c8 +0x092:  lea    -0x7c(%ebp),%eax
085747cb +0x095:  mov    %eax,-0x50(%ebp)
085747ce +0x098:  lea    -0x7c(%ebp),%eax
085747d1 +0x09b:  add    $0xc,%eax
085747d4 +0x09e:  mov    %eax,-0x54(%ebp)
085747d7 +0x0a1:  lea    -0x7c(%ebp),%eax
085747da +0x0a4:  add    $0x18,%eax
085747dd +0x0a7:  mov    %eax,-0x58(%ebp)
085747e0 +0x0aa:  movb   $0x1,-0x19(%ebp)
085747e4 +0x0ae:  mov    0x8(%ebp),%eax
085747e7 +0x0b1:  lea    0xc(%eax),%edx
085747ea +0x0b4:  lea    -0x8c(%ebp),%eax
085747f0 +0x0ba:  mov    %edx,0x4(%esp)
085747f4 +0x0be:  mov    %eax,(%esp)
085747f7 +0x0c1:  call   085766b4 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x878>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x878
085747fc +0x0c6:  sub    $0x4,%esp
085747ff +0x0c9:  mov    -0x8c(%ebp),%eax
08574805 +0x0cf:  mov    %eax,-0x3c(%ebp)
08574808 +0x0d2:  jmp    0857493b <+0x205>
0857480d +0x0d7:  lea    -0x3c(%ebp),%eax
08574810 +0x0da:  mov    %eax,(%esp)
08574813 +0x0dd:  call   08576740 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x904>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x904
08574818 +0x0e2:  mov    (%eax),%eax
0857481a +0x0e4:  mov    %eax,-0x24(%ebp)
0857481d +0x0e7:  mov    -0x54(%ebp),%eax
08574820 +0x0ea:  mov    %eax,(%esp)
08574823 +0x0ed:  call   08573366 <_ZN11IntervalSet5ClearEv>  ; IntervalSet::Clear()
08574828 +0x0f2:  mov    -0x24(%ebp),%eax
0857482b +0x0f5:  lea    0x8(%eax),%edx
0857482e +0x0f8:  lea    -0x8c(%ebp),%eax
08574834 +0x0fe:  mov    %edx,0x4(%esp)
08574838 +0x102:  mov    %eax,(%esp)
0857483b +0x105:  call   0857646e <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x632>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x632
08574840 +0x10a:  sub    $0x4,%esp
08574843 +0x10d:  mov    -0x8c(%ebp),%eax
08574849 +0x113:  mov    %eax,-0x40(%ebp)
0857484c +0x116:  jmp    0857489b <+0x165>
0857484e +0x118:  lea    -0x40(%ebp),%eax
08574851 +0x11b:  mov    %eax,(%esp)
08574854 +0x11e:  call   085764fa <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x6be>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x6be
08574859 +0x123:  mov    (%eax),%eax
0857485b +0x125:  mov    %eax,-0x20(%ebp)
0857485e +0x128:  mov    -0x20(%ebp),%eax
08574861 +0x12b:  mov    0x8(%eax),%eax
08574864 +0x12e:  mov    %eax,%edx
08574866 +0x130:  mov    -0x20(%ebp),%eax
08574869 +0x133:  mov    (%eax),%eax
0857486b +0x135:  mov    %edx,0x8(%esp)
0857486f +0x139:  mov    %eax,0x4(%esp)
08574873 +0x13d:  lea    -0x30(%ebp),%eax
08574876 +0x140:  mov    %eax,(%esp)
08574879 +0x143:  call   08575e5e <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x22>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x22
0857487e +0x148:  mov    -0x54(%ebp),%eax
08574881 +0x14b:  lea    -0x30(%ebp),%edx
08574884 +0x14e:  mov    %edx,0x4(%esp)
08574888 +0x152:  mov    %eax,(%esp)
0857488b +0x155:  call   0857337a <_ZN11IntervalSet11AddIntervalERK8Interval>  ; IntervalSet::AddInterval(Interval const&)
08574890 +0x15a:  lea    -0x40(%ebp),%eax
08574893 +0x15d:  mov    %eax,(%esp)
08574896 +0x160:  call   085764e4 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x6a8>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x6a8
0857489b +0x165:  mov    -0x24(%ebp),%eax
0857489e +0x168:  lea    0x8(%eax),%edx
085748a1 +0x16b:  lea    -0x34(%ebp),%eax
085748a4 +0x16e:  mov    %edx,0x4(%esp)
085748a8 +0x172:  mov    %eax,(%esp)
085748ab +0x175:  call   08576492 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x656>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x656
085748b0 +0x17a:  sub    $0x4,%esp
085748b3 +0x17d:  lea    -0x34(%ebp),%eax
085748b6 +0x180:  mov    %eax,0x4(%esp)
085748ba +0x184:  lea    -0x40(%ebp),%eax
085748bd +0x187:  mov    %eax,(%esp)
085748c0 +0x18a:  call   085764b8 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x67c>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x67c
085748c5 +0x18f:  test   %al,%al
085748c7 +0x191:  jne    0857484e <+0x118>
085748c9 +0x193:  cmpb   $0x0,-0x19(%ebp)
085748cd +0x197:  je     085748e7 <+0x1b1>
085748cf +0x199:  lea    -0x54(%ebp),%eax
085748d2 +0x19c:  mov    %eax,0x4(%esp)
085748d6 +0x1a0:  lea    -0x50(%ebp),%eax
085748d9 +0x1a3:  mov    %eax,(%esp)
085748dc +0x1a6:  call   0857688f <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0xa53>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0xa53
085748e1 +0x1ab:  movb   $0x0,-0x19(%ebp)
085748e5 +0x1af:  jmp    08574930 <+0x1fa>
085748e7 +0x1b1:  mov    -0x54(%ebp),%ecx
085748ea +0x1b4:  mov    -0x50(%ebp),%edx
085748ed +0x1b7:  mov    -0x58(%ebp),%eax
085748f0 +0x1ba:  mov    %ecx,0x8(%esp)
085748f4 +0x1be:  mov    %edx,0x4(%esp)
085748f8 +0x1c2:  mov    %eax,(%esp)
085748fb +0x1c5:  call   085731b2 <_Z20IntersectIntervalSetP11IntervalSetRKS_S2_>  ; IntersectIntervalSet(IntervalSet*, IntervalSet const&, IntervalSet const&)
08574900 +0x1ca:  mov    -0x58(%ebp),%eax
08574903 +0x1cd:  mov    %eax,(%esp)
08574906 +0x1d0:  call   085763c0 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x584>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x584
0857490b +0x1d5:  test   %eax,%eax
0857490d +0x1d7:  sete   %al
08574910 +0x1da:  test   %al,%al
08574912 +0x1dc:  je     0857491e <+0x1e8>
08574914 +0x1de:  mov    $0x0,%esi
08574919 +0x1e3:  jmp    08574a81 <+0x34b>
0857491e +0x1e8:  lea    -0x58(%ebp),%eax
08574921 +0x1eb:  mov    %eax,0x4(%esp)
08574925 +0x1ef:  lea    -0x50(%ebp),%eax
08574928 +0x1f2:  mov    %eax,(%esp)
0857492b +0x1f5:  call   0857688f <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0xa53>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0xa53
08574930 +0x1fa:  lea    -0x3c(%ebp),%eax
08574933 +0x1fd:  mov    %eax,(%esp)
08574936 +0x200:  call   0857672a <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x8ee>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x8ee
0857493b +0x205:  mov    0x8(%ebp),%eax
0857493e +0x208:  lea    0xc(%eax),%edx
08574941 +0x20b:  lea    -0x38(%ebp),%eax
08574944 +0x20e:  mov    %edx,0x4(%esp)
08574948 +0x212:  mov    %eax,(%esp)
0857494b +0x215:  call   085766d8 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x89c>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x89c
08574950 +0x21a:  sub    $0x4,%esp
08574953 +0x21d:  lea    -0x38(%ebp),%eax
08574956 +0x220:  mov    %eax,0x4(%esp)
0857495a +0x224:  lea    -0x3c(%ebp),%eax
0857495d +0x227:  mov    %eax,(%esp)
08574960 +0x22a:  call   085766fe <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x8c2>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x8c2
08574965 +0x22f:  test   %al,%al
08574967 +0x231:  jne    0857480d <+0xd7>
0857496d +0x237:  mov    -0x50(%ebp),%eax
08574970 +0x23a:  mov    %eax,(%esp)
08574973 +0x23d:  call   085763c0 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x584>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x584
08574978 +0x242:  test   %eax,%eax
0857497a +0x244:  sete   %al
0857497d +0x247:  test   %al,%al
0857497f +0x249:  je     0857498b <+0x255>
08574981 +0x24b:  mov    $0x0,%esi
08574986 +0x250:  jmp    08574a81 <+0x34b>
0857498b +0x255:  mov    -0x50(%ebp),%edx
0857498e +0x258:  mov    0x8(%ebp),%eax
08574991 +0x25b:  mov    %edx,0x4(%esp)
08574995 +0x25f:  mov    %eax,(%esp)
08574998 +0x262:  call   08575ec4 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x88>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x88
0857499d +0x267:  mov    0x8(%ebp),%eax
085749a0 +0x26a:  mov    %eax,(%esp)
085749a3 +0x26d:  call   085735dc <_ZN11IntervalSet4SortEv>  ; IntervalSet::Sort()
085749a8 +0x272:  mov    0x8(%ebp),%eax
085749ab +0x275:  lea    0xc(%eax),%edx
085749ae +0x278:  lea    -0x8c(%ebp),%eax
085749b4 +0x27e:  mov    %edx,0x4(%esp)
085749b8 +0x282:  mov    %eax,(%esp)
085749bb +0x285:  call   085766b4 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x878>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x878
085749c0 +0x28a:  sub    $0x4,%esp
085749c3 +0x28d:  mov    -0x8c(%ebp),%eax
085749c9 +0x293:  mov    %eax,-0x3c(%ebp)
085749cc +0x296:  jmp    085749fb <+0x2c5>
085749ce +0x298:  lea    -0x3c(%ebp),%eax
085749d1 +0x29b:  mov    %eax,(%esp)
085749d4 +0x29e:  call   08576740 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x904>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x904
085749d9 +0x2a3:  mov    (%eax),%eax
085749db +0x2a5:  mov    %eax,-0x24(%ebp)
085749de +0x2a8:  mov    0x8(%ebp),%eax
085749e1 +0x2ab:  mov    %eax,0x4(%esp)
085749e5 +0x2af:  mov    -0x24(%ebp),%eax
085749e8 +0x2b2:  mov    %eax,(%esp)
085749eb +0x2b5:  call   085741c6 <_ZN14WindowsExeFile36MakeCommonWindowsExeConstantSectionsERK11IntervalSet>  ; WindowsExeFile::MakeCommonWindowsExeConstantSections(IntervalSet const&)
085749f0 +0x2ba:  lea    -0x3c(%ebp),%eax
085749f3 +0x2bd:  mov    %eax,(%esp)
085749f6 +0x2c0:  call   0857672a <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x8ee>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x8ee
085749fb +0x2c5:  mov    0x8(%ebp),%eax
085749fe +0x2c8:  lea    0xc(%eax),%edx
08574a01 +0x2cb:  lea    -0x28(%ebp),%eax
08574a04 +0x2ce:  mov    %edx,0x4(%esp)
08574a08 +0x2d2:  mov    %eax,(%esp)
08574a0b +0x2d5:  call   085766d8 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x89c>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x89c
08574a10 +0x2da:  sub    $0x4,%esp
08574a13 +0x2dd:  lea    -0x28(%ebp),%eax
08574a16 +0x2e0:  mov    %eax,0x4(%esp)
08574a1a +0x2e4:  lea    -0x3c(%ebp),%eax
08574a1d +0x2e7:  mov    %eax,(%esp)
08574a20 +0x2ea:  call   085766fe <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x8c2>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x8c2
08574a25 +0x2ef:  test   %al,%al
08574a27 +0x2f1:  jne    085749ce <+0x298>
08574a29 +0x2f3:  mov    0x8(%ebp),%eax
08574a2c +0x2f6:  movl   $0x0,0x4(%esp)
08574a34 +0x2fe:  mov    %eax,(%esp)
08574a37 +0x301:  call   085763dc <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x5a0>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x5a0
08574a3c +0x306:  mov    (%eax),%eax
08574a3e +0x308:  mov    %eax,%edx
08574a40 +0x30a:  mov    0x8(%ebp),%eax
08574a43 +0x30d:  mov    %edx,0x120(%eax)
08574a49 +0x313:  mov    0x8(%ebp),%eax
08574a4c +0x316:  movl   $0x0,0x11c(%eax)
08574a56 +0x320:  mov    $0x1,%esi
08574a5b +0x325:  jmp    08574a81 <+0x34b>
08574a5d +0x327:  mov    %edx,%esi
08574a5f +0x329:  mov    %eax,%edi
08574a61 +0x32b:  lea    -0x7c(%ebp),%eax
08574a64 +0x32e:  lea    0x24(%eax),%ebx
08574a67 +0x331:  lea    -0x7c(%ebp),%eax
08574a6a +0x334:  cmp    %eax,%ebx
08574a6c +0x336:  je     08574a7b <+0x345>
08574a6e +0x338:  sub    $0xc,%ebx
08574a71 +0x33b:  mov    %ebx,(%esp)
08574a74 +0x33e:  call   08575eb0 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x74>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x74
08574a79 +0x343:  jmp    08574a67 <+0x331>
08574a7b +0x345:  mov    %edi,%eax
08574a7d +0x347:  mov    %esi,%edx
08574a7f +0x349:  jmp    08574a9b <+0x365>
08574a81 +0x34b:  lea    -0x7c(%ebp),%eax
08574a84 +0x34e:  lea    0x24(%eax),%ebx
08574a87 +0x351:  lea    -0x7c(%ebp),%eax
08574a8a +0x354:  cmp    %eax,%ebx
08574a8c +0x356:  je     08574ab6 <+0x380>
08574a8e +0x358:  sub    $0xc,%ebx
08574a91 +0x35b:  mov    %ebx,(%esp)
08574a94 +0x35e:  call   08575eb0 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x74>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x74
08574a99 +0x363:  jmp    08574a87 <+0x351>
08574a9b +0x365:  mov    %edx,%ebx
08574a9d +0x367:  mov    %eax,%esi
08574a9f +0x369:  lea    -0x4c(%ebp),%eax
08574aa2 +0x36c:  mov    %eax,(%esp)
08574aa5 +0x36f:  call   08576832 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x9f6>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x9f6
08574aaa +0x374:  mov    %esi,%eax
08574aac +0x376:  mov    %ebx,%edx
08574aae +0x378:  mov    %eax,(%esp)
08574ab1 +0x37b:  call   08ae3750 <_Unwind_Resume>
08574ab6 +0x380:  lea    -0x4c(%ebp),%eax
08574ab9 +0x383:  mov    %eax,(%esp)
08574abc +0x386:  call   08576832 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x9f6>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x9f6
08574ac1 +0x38b:  mov    %esi,%eax
08574ac3 +0x38d:  lea    -0xc(%ebp),%esp
08574ac6 +0x390:  add    $0x0,%esp
08574ac9 +0x393:  pop    %ebx
08574aca +0x394:  pop    %esi
08574acb +0x395:  pop    %edi
08574acc +0x396:  pop    %ebp
08574acd +0x397:  ret
```

## 反编译 C

```c
// WindowsExeFileFamily::CompleteLoadingWindowsExeFiles @ 0x8574736

/* WindowsExeFileFamily::CompleteLoadingWindowsExeFiles() */

undefined4 __thiscall
WindowsExeFileFamily::CompleteLoadingWindowsExeFiles(WindowsExeFileFamily *this)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  IntervalSet *pIVar4;
  int iVar5;
  undefined4 uVar6;
  IntervalSet local_80 [12];
  IntervalSet aIStack_74 [12];
  IntervalSet aIStack_68 [12];
  IntervalSet *local_5c;
  IntervalSet *local_58;
  IntervalSet *local_54;
  vector<IntervalSet*,std::allocator<IntervalSet*>> local_50 [12];
  __normal_iterator<WindowsExeConstantSection**,std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>>
  local_44 [4];
  __normal_iterator<WindowsExeFile**,std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>>
  local_40 [4];
  __normal_iterator local_3c [4];
  __normal_iterator local_38 [4];
  Interval local_34 [8];
  __normal_iterator local_2c [4];
  WindowsExeFile *local_28;
  long *local_24;
  char local_1d;
  
  __gnu_cxx::
  __normal_iterator<WindowsExeFile**,std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>>::
  __normal_iterator(local_40);
  __gnu_cxx::
  __normal_iterator<WindowsExeConstantSection**,std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>>
  ::__normal_iterator(local_44);
  std::vector<IntervalSet*,std::allocator<IntervalSet*>>::vector(local_50);
  pIVar4 = local_80;
  for (iVar5 = 2; iVar5 != -1; iVar5 = iVar5 + -1) {
                    /* try { // try from 08574772 to 08574776 has its CatchHandler @ 08574789 */
    IntervalSet::IntervalSet(pIVar4);
    pIVar4 = pIVar4 + 0xc;
  }
  local_54 = local_80;
  local_58 = aIStack_74;
  local_5c = aIStack_68;
  local_1d = '\x01';
                    /* try { // try from 085747f7 to 08574a24 has its CatchHandler @ 08574a5d */
  std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>::begin();
  do {
    std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>::end();
    bVar1 = __gnu_cxx::operator!=(local_40,local_3c);
    if (!bVar1) {
      iVar5 = std::vector<Interval,std::allocator<Interval>>::size
                        ((vector<Interval,std::allocator<Interval>> *)local_54);
      if (iVar5 == 0) {
        uVar6 = 0;
      }
      else {
        IntervalSet::operator=((IntervalSet *)this,local_54);
        IntervalSet::Sort((IntervalSet *)this);
        std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>::begin();
        while( true ) {
          std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>::end();
          bVar1 = __gnu_cxx::operator!=(local_40,local_2c);
          if (!bVar1) break;
          puVar3 = (undefined4 *)
                   __gnu_cxx::
                   __normal_iterator<WindowsExeFile**,std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>>
                   ::operator*(local_40);
          local_28 = (WindowsExeFile *)*puVar3;
          WindowsExeFile::MakeCommonWindowsExeConstantSections(local_28,(IntervalSet *)this);
          __gnu_cxx::
          __normal_iterator<WindowsExeFile**,std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>>
          ::operator++(local_40);
        }
        puVar3 = (undefined4 *)
                 std::vector<Interval,std::allocator<Interval>>::operator[]
                           ((vector<Interval,std::allocator<Interval>> *)this,0);
        *(undefined4 *)(this + 0x120) = *puVar3;
        *(undefined4 *)(this + 0x11c) = 0;
        uVar6 = 1;
      }
LAB_08574a81:
      pIVar4 = (IntervalSet *)&local_5c;
      while (pIVar4 != local_80) {
        pIVar4 = pIVar4 + -0xc;
                    /* try { // try from 08574a94 to 08574a98 has its CatchHandler @ 08574a9b */
        IntervalSet::~IntervalSet(pIVar4);
      }
      std::vector<IntervalSet*,std::allocator<IntervalSet*>>::~vector(local_50);
      return uVar6;
    }
    puVar3 = (undefined4 *)
             __gnu_cxx::
             __normal_iterator<WindowsExeFile**,std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>>
             ::operator*(local_40);
    local_28 = (WindowsExeFile *)*puVar3;
    IntervalSet::Clear(local_58);
    std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>::begin();
    while( true ) {
      std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>::end();
      bVar1 = __gnu_cxx::operator!=(local_44,local_38);
      if (!bVar1) break;
      piVar2 = (int *)__gnu_cxx::
                      __normal_iterator<WindowsExeConstantSection**,std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>>
                      ::operator*(local_44);
      local_24 = (long *)*piVar2;
      Interval::Interval(local_34,*local_24,local_24[2]);
      IntervalSet::AddInterval(local_58,local_34);
      __gnu_cxx::
      __normal_iterator<WindowsExeConstantSection**,std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>>
      ::operator++(local_44);
    }
    if (local_1d == '\0') {
      IntersectIntervalSet(local_5c,local_54,local_58);
      iVar5 = std::vector<Interval,std::allocator<Interval>>::size
                        ((vector<Interval,std::allocator<Interval>> *)local_5c);
      if (iVar5 == 0) {
        uVar6 = 0;
        goto LAB_08574a81;
      }
      swap_value<IntervalSet*>(&local_54,&local_5c);
    }
    else {
      swap_value<IntervalSet*>(&local_54,&local_58);
      local_1d = '\0';
    }
    __gnu_cxx::
    __normal_iterator<WindowsExeFile**,std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>>
    ::operator++(local_40);
  } while( true );
}
```
