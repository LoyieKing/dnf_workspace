# _M_initialize_moneypunct

`_ZNSt10moneypunctIwLb0EE24_M_initialize_moneypunctEP15__locale_structPKc`

`std::moneypunct<wchar_t, false>::_M_initialize_moneypunct(__locale_struct*, char const*)`

| 类 | 地址 |
|---|---|
| `std::moneypunct<wchar_t, false>` | `0x08720590` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08720590  _ZNSt10moneypunctIwLb0EE24_M_initialize_moneypunctEP15__locale_structPKc
#           std::moneypunct<wchar_t, false>::_M_initialize_moneypunct(__locale_struct*, char const*)
# range [0x08720590, 0x08720aff]
08720590 +0x000:  push   %ebp
08720591 +0x001:  mov    %esp,%ebp
08720593 +0x003:  push   %edi
08720594 +0x004:  push   %esi
08720595 +0x005:  push   %ebx
08720596 +0x006:  sub    $0x5c,%esp
08720599 +0x009:  mov    0x8(%ebp),%esi
0872059c +0x00c:  mov    %gs:0x14,%eax
087205a2 +0x012:  mov    %eax,-0x1c(%ebp)
087205a5 +0x015:  xor    %eax,%eax
087205a7 +0x017:  mov    0xc(%ebp),%ebx
087205aa +0x01a:  mov    0x8(%esi),%edi
087205ad +0x01d:  test   %edi,%edi
087205af +0x01f:  je     087209f8 <+0x468>
087205b5 +0x025:  test   %ebx,%ebx
087205b7 +0x027:  je     08720880 <+0x2f0>
087205bd +0x02d:  mov    %ebx,(%esp)
087205c0 +0x030:  call   0807de70 <_init+0x768>
087205c5 +0x035:  mov    %ebx,0x4(%esp)
087205c9 +0x039:  movl   $0x4002b,(%esp)
087205d0 +0x040:  mov    %eax,-0x4c(%ebp)
087205d3 +0x043:  call   0807de10 <_init+0x708>
087205d8 +0x048:  mov    0x8(%esi),%edx
087205db +0x04b:  mov    %eax,0x14(%edx)
087205de +0x04e:  mov    %ebx,0x4(%esp)
087205e2 +0x052:  movl   $0x4002c,(%esp)
087205e9 +0x059:  call   0807de10 <_init+0x708>
087205ee +0x05e:  mov    0x8(%esi),%edx
087205f1 +0x061:  test   %eax,%eax
087205f3 +0x063:  mov    %eax,0x18(%edx)
087205f6 +0x066:  jne    08720808 <+0x278>
087205fc +0x06c:  mov    0x14(%edx),%ecx
087205ff +0x06f:  movl   $&data#2fb52a47(.rodata),0x8(%edx)
08720606 +0x076:  movl   $0x0,0xc(%edx)
0872060d +0x07d:  movb   $0x0,0x10(%edx)
08720611 +0x081:  test   %ecx,%ecx
08720613 +0x083:  movl   $0x2c,0x18(%edx)
0872061a +0x08a:  jne    08720843 <+0x2b3>
08720620 +0x090:  movl   $0x0,0x34(%edx)
08720627 +0x097:  movl   $0x2e,0x14(%edx)
0872062e +0x09e:  mov    %ebx,0x4(%esp)
08720632 +0x0a2:  movl   $0x40005,(%esp)
08720639 +0x0a9:  call   0807de10 <_init+0x708>
0872063e +0x0ae:  mov    %ebx,0x4(%esp)
08720642 +0x0b2:  movl   $0x40006,(%esp)
08720649 +0x0b9:  mov    %eax,-0x28(%ebp)
0872064c +0x0bc:  call   0807de10 <_init+0x708>
08720651 +0x0c1:  mov    %ebx,0x4(%esp)
08720655 +0x0c5:  movl   $0x40001,(%esp)
0872065c +0x0cc:  mov    %eax,-0x2c(%ebp)
0872065f +0x0cf:  call   0807de10 <_init+0x708>
08720664 +0x0d4:  movl   $0x0,-0x40(%ebp)
0872066b +0x0db:  movl   $0x0,-0x44(%ebp)
08720672 +0x0e2:  mov    %ebx,0x4(%esp)
08720676 +0x0e6:  movl   $0x4000e,(%esp)
0872067d +0x0ed:  mov    %eax,-0x30(%ebp)
08720680 +0x0f0:  call   0807de10 <_init+0x708>
08720685 +0x0f5:  movzbl (%eax),%edi
08720688 +0x0f8:  mov    -0x28(%ebp),%eax
0872068b +0x0fb:  mov    %eax,(%esp)
0872068e +0x0fe:  call   0807e3b0 <_init+0xca8>
08720693 +0x103:  test   %eax,%eax
08720695 +0x105:  jne    08720958 <+0x3c8>
0872069b +0x10b:  mov    0x8(%esi),%edx
0872069e +0x10e:  movl   $"",0x24(%edx)
087206a5 +0x115:  mov    0x24(%edx),%eax
087206a8 +0x118:  mov    %edx,-0x50(%ebp)
087206ab +0x11b:  mov    %eax,(%esp)
087206ae +0x11e:  call   0807e130 <_init+0xa28>
087206b3 +0x123:  mov    -0x50(%ebp),%edx
087206b6 +0x126:  mov    %eax,0x28(%edx)
087206b9 +0x129:  mov    -0x2c(%ebp),%eax
087206bc +0x12c:  mov    %eax,(%esp)
087206bf +0x12f:  call   0807e3b0 <_init+0xca8>
087206c4 +0x134:  mov    %edi,%ecx
087206c6 +0x136:  mov    -0x50(%ebp),%edx
087206c9 +0x139:  test   %cl,%cl
087206cb +0x13b:  jne    08720868 <+0x2d8>
087206d1 +0x141:  movl   $"(",0x2c(%edx)
087206d8 +0x148:  mov    0x2c(%edx),%eax
087206db +0x14b:  mov    %edx,-0x50(%ebp)
087206de +0x14e:  mov    %eax,(%esp)
087206e1 +0x151:  call   0807e130 <_init+0xa28>
087206e6 +0x156:  mov    -0x50(%ebp),%edx
087206e9 +0x159:  mov    %eax,0x30(%edx)
087206ec +0x15c:  mov    -0x30(%ebp),%eax
087206ef +0x15f:  mov    %eax,(%esp)
087206f2 +0x162:  call   0807e3b0 <_init+0xca8>
087206f7 +0x167:  mov    -0x50(%ebp),%edx
087206fa +0x16a:  test   %eax,%eax
087206fc +0x16c:  jne    08720908 <+0x378>
08720702 +0x172:  movl   $"",0x1c(%edx)
08720709 +0x179:  mov    0x1c(%edx),%eax
0872070c +0x17c:  mov    %edx,-0x50(%ebp)
0872070f +0x17f:  mov    %eax,(%esp)
08720712 +0x182:  call   0807e130 <_init+0xa28>
08720717 +0x187:  mov    -0x50(%ebp),%edx
0872071a +0x18a:  mov    %eax,0x20(%edx)
0872071d +0x18d:  mov    %ebx,0x4(%esp)
08720721 +0x191:  movl   $0x40009,(%esp)
08720728 +0x198:  call   0807de10 <_init+0x708>
0872072d +0x19d:  movsbl (%eax),%eax
08720730 +0x1a0:  mov    %ebx,0x4(%esp)
08720734 +0x1a4:  movl   $0x4000a,(%esp)
0872073b +0x1ab:  mov    %eax,-0x44(%ebp)
0872073e +0x1ae:  call   0807de10 <_init+0x708>
08720743 +0x1b3:  movsbl (%eax),%eax
08720746 +0x1b6:  mov    %ebx,0x4(%esp)
0872074a +0x1ba:  movl   $0x4000d,(%esp)
08720751 +0x1c1:  mov    %eax,-0x40(%ebp)
08720754 +0x1c4:  call   0807de10 <_init+0x708>
08720759 +0x1c9:  mov    0x8(%esi),%ecx
0872075c +0x1cc:  lea    -0x3c(%ebp),%edx
0872075f +0x1cf:  movsbl (%eax),%eax
08720762 +0x1d2:  mov    %edx,(%esp)
08720765 +0x1d5:  mov    %edx,-0x50(%ebp)
08720768 +0x1d8:  mov    %ecx,-0x54(%ebp)
0872076b +0x1db:  mov    %eax,0xc(%esp)
0872076f +0x1df:  mov    -0x40(%ebp),%eax
08720772 +0x1e2:  mov    %eax,0x8(%esp)
08720776 +0x1e6:  mov    -0x44(%ebp),%eax
08720779 +0x1e9:  mov    %eax,0x4(%esp)
0872077d +0x1ed:  call   0871fa80 <_ZNSt10money_base20_S_construct_patternEccc>  ; std::money_base::_S_construct_pattern(char, char, char)
08720782 +0x1f2:  mov    -0x54(%ebp),%ecx
08720785 +0x1f5:  mov    -0x3c(%ebp),%eax
08720788 +0x1f8:  mov    %eax,0x38(%ecx)
0872078b +0x1fb:  sub    $0x4,%esp
0872078e +0x1fe:  mov    %ebx,0x4(%esp)
08720792 +0x202:  movl   $0x4000b,(%esp)
08720799 +0x209:  call   0807de10 <_init+0x708>
0872079e +0x20e:  movsbl (%eax),%eax
087207a1 +0x211:  mov    %ebx,0x4(%esp)
087207a5 +0x215:  movl   $0x4000c,(%esp)
087207ac +0x21c:  mov    %eax,-0x40(%ebp)
087207af +0x21f:  call   0807de10 <_init+0x708>
087207b4 +0x224:  mov    %edi,%ecx
087207b6 +0x226:  mov    0x8(%esi),%ebx
087207b9 +0x229:  movsbl %cl,%edi
087207bc +0x22c:  mov    -0x50(%ebp),%edx
087207bf +0x22f:  mov    %edi,0xc(%esp)
087207c3 +0x233:  movsbl (%eax),%eax
087207c6 +0x236:  mov    %edx,(%esp)
087207c9 +0x239:  mov    %eax,0x8(%esp)
087207cd +0x23d:  mov    -0x40(%ebp),%eax
087207d0 +0x240:  mov    %eax,0x4(%esp)
087207d4 +0x244:  call   0871fa80 <_ZNSt10money_base20_S_construct_patternEccc>  ; std::money_base::_S_construct_pattern(char, char, char)
087207d9 +0x249:  mov    -0x3c(%ebp),%eax
087207dc +0x24c:  mov    %eax,0x3c(%ebx)
087207df +0x24f:  mov    -0x4c(%ebp),%eax
087207e2 +0x252:  sub    $0x4,%esp
087207e5 +0x255:  mov    %eax,(%esp)
087207e8 +0x258:  call   0807de70 <_init+0x768>
087207ed +0x25d:  mov    -0x1c(%ebp),%eax
087207f0 +0x260:  xor    %gs:0x14,%eax
087207f7 +0x267:  jne    08720a8e <+0x4fe>
087207fd +0x26d:  lea    -0xc(%ebp),%esp
08720800 +0x270:  pop    %ebx
08720801 +0x271:  pop    %esi
08720802 +0x272:  pop    %edi
08720803 +0x273:  pop    %ebp
08720804 +0x274:  ret
08720805 +0x275:  lea    0x0(%esi),%esi
08720808 +0x278:  mov    %edx,-0x50(%ebp)
0872080b +0x27b:  mov    %ebx,0x4(%esp)
0872080f +0x27f:  movl   $0x40004,(%esp)
08720816 +0x286:  call   0807de10 <_init+0x708>
0872081b +0x28b:  mov    -0x50(%ebp),%edx
0872081e +0x28e:  mov    %eax,0x8(%edx)
08720821 +0x291:  mov    0x8(%esi),%edx
08720824 +0x294:  mov    0x8(%edx),%eax
08720827 +0x297:  mov    %edx,-0x50(%ebp)
0872082a +0x29a:  mov    %eax,(%esp)
0872082d +0x29d:  call   0807e3b0 <_init+0xca8>
08720832 +0x2a2:  mov    -0x50(%ebp),%edx
08720835 +0x2a5:  mov    0x14(%edx),%ecx
08720838 +0x2a8:  mov    %eax,0xc(%edx)
0872083b +0x2ab:  test   %ecx,%ecx
0872083d +0x2ad:  je     08720620 <+0x90>
08720843 +0x2b3:  mov    %edx,-0x50(%ebp)
08720846 +0x2b6:  mov    %ebx,0x4(%esp)
0872084a +0x2ba:  movl   $0x40008,(%esp)
08720851 +0x2c1:  call   0807de10 <_init+0x708>
08720856 +0x2c6:  mov    -0x50(%ebp),%edx
08720859 +0x2c9:  movsbl (%eax),%eax
0872085c +0x2cc:  mov    %eax,0x34(%edx)
0872085f +0x2cf:  jmp    0872062e <+0x9e>
08720864 +0x2d4:  lea    0x0(%esi,%eiz,1),%esi
08720868 +0x2d8:  test   %eax,%eax
0872086a +0x2da:  jne    087209a8 <+0x418>
08720870 +0x2e0:  movl   $"",0x2c(%edx)
08720877 +0x2e7:  jmp    087206d8 <+0x148>
0872087c +0x2ec:  lea    0x0(%esi,%eiz,1),%esi
08720880 +0x2f0:  mov    0x8(%esi),%eax
08720883 +0x2f3:  mov    &_ZNSt10money_base18_S_default_patternE,%edx
08720889 +0x2f9:  mov    &_ZNSt10money_base8_S_atomsE,%ebx
0872088f +0x2ff:  movl   $0x2e,0x14(%eax)
08720896 +0x306:  mov    %edx,0x38(%eax)
08720899 +0x309:  movl   $0x2c,0x18(%eax)
087208a0 +0x310:  movl   $&data#2fb52a47(.rodata),0x8(%eax)
087208a7 +0x317:  movl   $0x0,0xc(%eax)
087208ae +0x31e:  movb   $0x0,0x10(%eax)
087208b2 +0x322:  movl   $"",0x1c(%eax)
087208b9 +0x329:  movl   $0x0,0x20(%eax)
087208c0 +0x330:  movl   $"",0x24(%eax)
087208c7 +0x337:  movl   $0x0,0x28(%eax)
087208ce +0x33e:  movl   $"",0x2c(%eax)
087208d5 +0x345:  movl   $0x0,0x30(%eax)
087208dc +0x34c:  movl   $0x0,0x34(%eax)
087208e3 +0x353:  mov    0x8(%esi),%eax
087208e6 +0x356:  mov    %edx,0x3c(%eax)
087208e9 +0x359:  mov    0x8(%esi),%ecx
087208ec +0x35c:  xor    %eax,%eax
087208ee +0x35e:  xchg   %ax,%ax
087208f0 +0x360:  movsbl (%ebx,%eax,1),%edx
087208f4 +0x364:  mov    %edx,0x40(%ecx,%eax,4)
087208f8 +0x368:  add    $0x1,%eax
087208fb +0x36b:  cmp    $0xb,%eax
087208fe +0x36e:  jne    087208f0 <+0x360>
08720900 +0x370:  jmp    087207ed <+0x25d>
08720905 +0x375:  lea    0x0(%esi),%esi
08720908 +0x378:  add    $0x1,%eax
0872090b +0x37b:  mov    %eax,-0x48(%ebp)
0872090e +0x37e:  shl    $0x2,%eax
08720911 +0x381:  movl   $0x0,-0x24(%ebp)
08720918 +0x388:  movl   $0x0,-0x20(%ebp)
0872091f +0x38f:  mov    %eax,(%esp)
08720922 +0x392:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
08720927 +0x397:  mov    %eax,%ecx
08720929 +0x399:  lea    -0x24(%ebp),%eax
0872092c +0x39c:  mov    %eax,0xc(%esp)
08720930 +0x3a0:  mov    -0x48(%ebp),%eax
08720933 +0x3a3:  mov    %ecx,(%esp)
08720936 +0x3a6:  mov    %ecx,-0x54(%ebp)
08720939 +0x3a9:  mov    %eax,0x8(%esp)
0872093d +0x3ad:  lea    -0x30(%ebp),%eax
08720940 +0x3b0:  mov    %eax,0x4(%esp)
08720944 +0x3b4:  call   0807df10 <_init+0x808>
08720949 +0x3b9:  mov    0x8(%esi),%edx
0872094c +0x3bc:  mov    -0x54(%ebp),%ecx
0872094f +0x3bf:  mov    %ecx,0x1c(%edx)
08720952 +0x3c2:  jmp    08720709 <+0x179>
08720957 +0x3c7:  nop
08720958 +0x3c8:  add    $0x1,%eax
0872095b +0x3cb:  mov    %eax,-0x48(%ebp)
0872095e +0x3ce:  shl    $0x2,%eax
08720961 +0x3d1:  movl   $0x0,-0x24(%ebp)
08720968 +0x3d8:  movl   $0x0,-0x20(%ebp)
0872096f +0x3df:  mov    %eax,(%esp)
08720972 +0x3e2:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
08720977 +0x3e7:  mov    %eax,-0x40(%ebp)
0872097a +0x3ea:  lea    -0x24(%ebp),%eax
0872097d +0x3ed:  mov    -0x48(%ebp),%ecx
08720980 +0x3f0:  mov    %eax,0xc(%esp)
08720984 +0x3f4:  lea    -0x28(%ebp),%eax
08720987 +0x3f7:  mov    %eax,0x4(%esp)
0872098b +0x3fb:  mov    -0x40(%ebp),%eax
0872098e +0x3fe:  mov    %ecx,0x8(%esp)
08720992 +0x402:  mov    %eax,(%esp)
08720995 +0x405:  call   0807df10 <_init+0x808>
0872099a +0x40a:  mov    0x8(%esi),%edx
0872099d +0x40d:  mov    -0x40(%ebp),%ecx
087209a0 +0x410:  mov    %ecx,0x24(%edx)
087209a3 +0x413:  jmp    087206a5 <+0x115>
087209a8 +0x418:  add    $0x1,%eax
087209ab +0x41b:  mov    %eax,-0x48(%ebp)
087209ae +0x41e:  shl    $0x2,%eax
087209b1 +0x421:  movl   $0x0,-0x24(%ebp)
087209b8 +0x428:  movl   $0x0,-0x20(%ebp)
087209bf +0x42f:  mov    %eax,(%esp)
087209c2 +0x432:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
087209c7 +0x437:  mov    %eax,-0x44(%ebp)
087209ca +0x43a:  lea    -0x24(%ebp),%eax
087209cd +0x43d:  mov    -0x44(%ebp),%ecx
087209d0 +0x440:  mov    %eax,0xc(%esp)
087209d4 +0x444:  mov    -0x48(%ebp),%eax
087209d7 +0x447:  mov    %ecx,(%esp)
087209da +0x44a:  mov    %eax,0x8(%esp)
087209de +0x44e:  lea    -0x2c(%ebp),%eax
087209e1 +0x451:  mov    %eax,0x4(%esp)
087209e5 +0x455:  call   0807df10 <_init+0x808>
087209ea +0x45a:  mov    0x8(%esi),%edx
087209ed +0x45d:  mov    -0x44(%ebp),%eax
087209f0 +0x460:  mov    %eax,0x2c(%edx)
087209f3 +0x463:  jmp    087206d8 <+0x148>
087209f8 +0x468:  movl   $0x70,(%esp)
087209ff +0x46f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08720a04 +0x474:  movb   $0x0,0x38(%eax)
08720a08 +0x478:  movb   $0x0,0x39(%eax)
08720a0c +0x47c:  movb   $0x0,0x3a(%eax)
08720a10 +0x480:  movb   $0x0,0x3b(%eax)
08720a14 +0x484:  movb   $0x0,0x3c(%eax)
08720a18 +0x488:  movb   $0x0,0x3d(%eax)
08720a1c +0x48c:  movb   $0x0,0x3e(%eax)
08720a20 +0x490:  movb   $0x0,0x3f(%eax)
08720a24 +0x494:  movl   $0x0,0x4(%eax)
08720a2b +0x49b:  movl   $&_ZTVSt18__moneypunct_cacheIwLb0EE+0x8,(%eax)
08720a31 +0x4a1:  movl   $0x0,0x8(%eax)
08720a38 +0x4a8:  movl   $0x0,0xc(%eax)
08720a3f +0x4af:  movb   $0x0,0x10(%eax)
08720a43 +0x4b3:  movl   $0x0,0x14(%eax)
08720a4a +0x4ba:  movl   $0x0,0x18(%eax)
08720a51 +0x4c1:  movl   $0x0,0x1c(%eax)
08720a58 +0x4c8:  movl   $0x0,0x20(%eax)
08720a5f +0x4cf:  movl   $0x0,0x24(%eax)
08720a66 +0x4d6:  movl   $0x0,0x28(%eax)
08720a6d +0x4dd:  movl   $0x0,0x2c(%eax)
08720a74 +0x4e4:  movl   $0x0,0x30(%eax)
08720a7b +0x4eb:  movl   $0x0,0x34(%eax)
08720a82 +0x4f2:  movb   $0x0,0x6c(%eax)
08720a86 +0x4f6:  mov    %eax,0x8(%esi)
08720a89 +0x4f9:  jmp    087205b5 <+0x25>
08720a8e +0x4fe:  call   0807d980 <_init+0x278>
08720a93 +0x503:  mov    %eax,(%esp)
08720a96 +0x506:  call   08725ce0 <__cxa_begin_catch>
08720a9b +0x50b:  mov    0x8(%esi),%eax
08720a9e +0x50e:  test   %eax,%eax
08720aa0 +0x510:  je     08720aaa <+0x51a>
08720aa2 +0x512:  mov    (%eax),%edx
08720aa4 +0x514:  mov    %eax,(%esp)
08720aa7 +0x517:  call   *0x4(%edx)
08720aaa +0x51a:  cmpl   $0x0,-0x40(%ebp)
08720aae +0x51e:  movl   $0x0,0x8(%esi)
08720ab5 +0x525:  je     08720ac2 <+0x532>
08720ab7 +0x527:  mov    -0x40(%ebp),%ecx
08720aba +0x52a:  mov    %ecx,(%esp)
08720abd +0x52d:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
08720ac2 +0x532:  cmpl   $0x0,-0x44(%ebp)
08720ac6 +0x536:  je     08720ad3 <+0x543>
08720ac8 +0x538:  mov    -0x44(%ebp),%eax
08720acb +0x53b:  mov    %eax,(%esp)
08720ace +0x53e:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
08720ad3 +0x543:  mov    -0x4c(%ebp),%ecx
08720ad6 +0x546:  mov    %ecx,(%esp)
08720ad9 +0x549:  call   0807de70 <_init+0x768>
08720ade +0x54e:  call   08724be0 <__cxa_rethrow>
08720ae3 +0x553:  mov    %eax,%ebx
08720ae5 +0x555:  call   08725c30 <__cxa_end_catch>
08720aea +0x55a:  mov    %ebx,(%esp)
08720aed +0x55d:  call   08ae3750 <_Unwind_Resume>
08720af2 +0x562:  nop
08720af3 +0x563:  nop
08720af4 +0x564:  nop
08720af5 +0x565:  nop
08720af6 +0x566:  nop
08720af7 +0x567:  nop
08720af8 +0x568:  nop
08720af9 +0x569:  nop
08720afa +0x56a:  nop
08720afb +0x56b:  nop
08720afc +0x56c:  nop
08720afd +0x56d:  nop
08720afe +0x56e:  nop
08720aff +0x56f:  nop
```

## 反编译 C

```c
// std::moneypunct<wchar_t, @ 0x8720590

/* std::moneypunct<wchar_t, false>::_M_initialize_moneypunct(__locale_struct*, char const*) */

void std::moneypunct<wchar_t,false>::_M_initialize_moneypunct
               (__locale_struct *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  size_t sVar9;
  wchar_t *pwVar10;
  __locale_data *p_Var11;
  int in_GS_OFFSET;
  undefined4 local_40 [3];
  char *local_34;
  char *local_30;
  char *local_2c;
  mbstate_t local_28;
  int local_20;
  
  local_20 = *(int *)(in_GS_OFFSET + 0x14);
  if (param_1->__locales[2] == (__locale_data *)0x0) {
    p_Var11 = operator_new(0x70);
    p_Var11[0x38] = (__locale_data)0x0;
    p_Var11[0x39] = (__locale_data)0x0;
    p_Var11[0x3a] = (__locale_data)0x0;
    p_Var11[0x3b] = (__locale_data)0x0;
    p_Var11[0x3c] = (__locale_data)0x0;
    p_Var11[0x3d] = (__locale_data)0x0;
    p_Var11[0x3e] = (__locale_data)0x0;
    p_Var11[0x3f] = (__locale_data)0x0;
    *(undefined4 *)(p_Var11 + 4) = 0;
    *(undefined ***)p_Var11 = &PTR____moneypunct_cache_08d006b8;
    *(undefined4 *)(p_Var11 + 8) = 0;
    *(undefined4 *)(p_Var11 + 0xc) = 0;
    p_Var11[0x10] = (__locale_data)0x0;
    *(undefined4 *)(p_Var11 + 0x14) = 0;
    *(undefined4 *)(p_Var11 + 0x18) = 0;
    *(undefined4 *)(p_Var11 + 0x1c) = 0;
    *(undefined4 *)(p_Var11 + 0x20) = 0;
    *(undefined4 *)(p_Var11 + 0x24) = 0;
    *(undefined4 *)(p_Var11 + 0x28) = 0;
    *(undefined4 *)(p_Var11 + 0x2c) = 0;
    *(undefined4 *)(p_Var11 + 0x30) = 0;
    *(undefined4 *)(p_Var11 + 0x34) = 0;
    p_Var11[0x6c] = (__locale_data)0x0;
    param_1->__locales[2] = p_Var11;
  }
  puVar4 = money_base::_S_atoms;
  uVar5 = money_base::_S_default_pattern;
  if (param_2 == (char *)0x0) {
    p_Var11 = param_1->__locales[2];
    *(undefined4 *)(p_Var11 + 0x14) = 0x2e;
    *(undefined4 *)(p_Var11 + 0x38) = uVar5;
    *(undefined4 *)(p_Var11 + 0x18) = 0x2c;
    *(undefined1 **)(p_Var11 + 8) = &DAT_08d0c9a4;
    *(undefined4 *)(p_Var11 + 0xc) = 0;
    p_Var11[0x10] = (__locale_data)0x0;
    *(undefined **)(p_Var11 + 0x1c) = &DAT_08d01188;
    *(undefined4 *)(p_Var11 + 0x20) = 0;
    *(undefined **)(p_Var11 + 0x24) = &DAT_08d01188;
    *(undefined4 *)(p_Var11 + 0x28) = 0;
    *(undefined **)(p_Var11 + 0x2c) = &DAT_08d01188;
    *(undefined4 *)(p_Var11 + 0x30) = 0;
    *(undefined4 *)(p_Var11 + 0x34) = 0;
    *(undefined4 *)(param_1->__locales[2] + 0x3c) = uVar5;
    p_Var11 = param_1->__locales[2];
    iVar7 = 0;
    do {
      *(int *)(p_Var11 + iVar7 * 4 + 0x40) = (int)(char)puVar4[iVar7];
      iVar7 = iVar7 + 1;
    } while (iVar7 != 0xb);
    goto LAB_087207ed;
  }
  uVar5 = __uselocale(param_2);
  uVar6 = __nl_langinfo_l(0x4002b,param_2);
  *(undefined4 *)(param_1->__locales[2] + 0x14) = uVar6;
  iVar7 = __nl_langinfo_l(0x4002c,param_2);
  p_Var11 = param_1->__locales[2];
  *(int *)(p_Var11 + 0x18) = iVar7;
  if (iVar7 == 0) {
    *(undefined1 **)(p_Var11 + 8) = &DAT_08d0c9a4;
    *(undefined4 *)(p_Var11 + 0xc) = 0;
    p_Var11[0x10] = (__locale_data)0x0;
    *(undefined4 *)(p_Var11 + 0x18) = 0x2c;
    if (*(int *)(p_Var11 + 0x14) != 0) goto LAB_08720843;
LAB_08720620:
    *(undefined4 *)(p_Var11 + 0x34) = 0;
    *(undefined4 *)(p_Var11 + 0x14) = 0x2e;
  }
  else {
    uVar6 = __nl_langinfo_l(0x40004,param_2);
    *(undefined4 *)(p_Var11 + 8) = uVar6;
    p_Var11 = param_1->__locales[2];
    sVar9 = strlen(*(char **)(p_Var11 + 8));
    *(size_t *)(p_Var11 + 0xc) = sVar9;
    if (*(int *)(p_Var11 + 0x14) == 0) goto LAB_08720620;
LAB_08720843:
    pcVar8 = (char *)__nl_langinfo_l(0x40008,param_2);
    *(int *)(p_Var11 + 0x34) = (int)*pcVar8;
  }
  local_2c = (char *)__nl_langinfo_l(0x40005,param_2);
  local_30 = (char *)__nl_langinfo_l(0x40006,param_2);
  local_34 = (char *)__nl_langinfo_l(0x40001,param_2);
  pcVar8 = (char *)__nl_langinfo_l(0x4000e,param_2);
  cVar1 = *pcVar8;
  sVar9 = strlen(local_2c);
  if (sVar9 == 0) {
    p_Var11 = param_1->__locales[2];
    *(undefined **)(p_Var11 + 0x24) = &DAT_08d01188;
  }
  else {
    local_28.__count = 0;
    local_28.__value.__wch = 0;
    pwVar10 = operator_new__((sVar9 + 1) * 4);
    mbsrtowcs(pwVar10,&local_2c,sVar9 + 1,&local_28);
    p_Var11 = param_1->__locales[2];
    *(wchar_t **)(p_Var11 + 0x24) = pwVar10;
  }
  sVar9 = wcslen(*(wchar_t **)(p_Var11 + 0x24));
  *(size_t *)(p_Var11 + 0x28) = sVar9;
  sVar9 = strlen(local_30);
  if (cVar1 == '\0') {
    *(undefined **)(p_Var11 + 0x2c) = &DAT_08d01180;
  }
  else if (sVar9 == 0) {
    *(undefined **)(p_Var11 + 0x2c) = &DAT_08d01188;
  }
  else {
    local_28.__count = 0;
    local_28.__value.__wch = 0;
    pwVar10 = operator_new__((sVar9 + 1) * 4);
    mbsrtowcs(pwVar10,&local_30,sVar9 + 1,&local_28);
    p_Var11 = param_1->__locales[2];
    *(wchar_t **)(p_Var11 + 0x2c) = pwVar10;
  }
  sVar9 = wcslen(*(wchar_t **)(p_Var11 + 0x2c));
  *(size_t *)(p_Var11 + 0x30) = sVar9;
  sVar9 = strlen(local_34);
  if (sVar9 == 0) {
    *(undefined **)(p_Var11 + 0x1c) = &DAT_08d01188;
  }
  else {
    local_28.__count = 0;
    local_28.__value.__wch = 0;
                    /* try { // try from 08720922 to 087209c6 has its CatchHandler @ 08720a93 */
    pwVar10 = operator_new__((sVar9 + 1) * 4);
    mbsrtowcs(pwVar10,&local_34,sVar9 + 1,&local_28);
    p_Var11 = param_1->__locales[2];
    *(wchar_t **)(p_Var11 + 0x1c) = pwVar10;
  }
  sVar9 = wcslen(*(wchar_t **)(p_Var11 + 0x1c));
  *(size_t *)(p_Var11 + 0x20) = sVar9;
  pcVar8 = (char *)__nl_langinfo_l(0x40009,param_2);
  cVar2 = *pcVar8;
  pcVar8 = (char *)__nl_langinfo_l(0x4000a,param_2);
  cVar3 = *pcVar8;
  pcVar8 = (char *)__nl_langinfo_l(0x4000d,param_2);
  p_Var11 = param_1->__locales[2];
  money_base::_S_construct_pattern((money_base *)local_40,cVar2,cVar3,*pcVar8);
  *(undefined4 *)(p_Var11 + 0x38) = local_40[0];
  pcVar8 = (char *)__nl_langinfo_l(0x4000b,param_2);
  cVar2 = *pcVar8;
  pcVar8 = (char *)__nl_langinfo_l(0x4000c,param_2);
  p_Var11 = param_1->__locales[2];
  money_base::_S_construct_pattern((money_base *)local_40,cVar2,*pcVar8,cVar1);
  *(undefined4 *)(p_Var11 + 0x3c) = local_40[0];
  __uselocale(uVar5);
LAB_087207ed:
  if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}
```
