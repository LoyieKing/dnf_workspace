# _CalcGunner

`_ZN8WongWork15CCalcCharacStat11_CalcGunnerEP15_Additioal_infoii`

`WongWork::CCalcCharacStat::_CalcGunner(_Additioal_info*, int, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CCalcCharacStat` | `0x0831f75c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0831f75c  _ZN8WongWork15CCalcCharacStat11_CalcGunnerEP15_Additioal_infoii
#           WongWork::CCalcCharacStat::_CalcGunner(_Additioal_info*, int, int)
# range [0x0831f75c, 0x0831fc39]
0831f75c +0x000:  push   %ebp
0831f75d +0x001:  mov    %esp,%ebp
0831f75f +0x003:  cmpl   $0x4,0xc(%ebp)
0831f763 +0x007:  ja     0831fc35 <+0x4d9>
0831f769 +0x00d:  mov    0xc(%ebp),%eax
0831f76c +0x010:  shl    $0x2,%eax
0831f76f +0x013:  mov    &data#6c903a7a(.rodata)(%eax),%eax
0831f775 +0x019:  jmp    *%eax
0831f777 +0x01b:  mov    0x10(%ebp),%eax
0831f77a +0x01e:  sub    $0x1,%eax
0831f77d +0x021:  imul   $0x190,%eax,%eax
0831f783 +0x027:  add    $0x4e2,%eax
0831f788 +0x02c:  mov    %eax,%edx
0831f78a +0x02e:  mov    0x8(%ebp),%eax
0831f78d +0x031:  mov    %edx,(%eax)
0831f78f +0x033:  mov    0x10(%ebp),%eax
0831f792 +0x036:  sub    $0x1,%eax
0831f795 +0x039:  imul   $0x12c,%eax,%eax
0831f79b +0x03f:  add    $0x708,%eax
0831f7a0 +0x044:  mov    %eax,%edx
0831f7a2 +0x046:  mov    0x8(%ebp),%eax
0831f7a5 +0x049:  mov    %edx,0x4(%eax)
0831f7a8 +0x04c:  mov    0x10(%ebp),%eax
0831f7ab +0x04f:  sub    $0x1,%eax
0831f7ae +0x052:  mov    %eax,%edx
0831f7b0 +0x054:  mov    %edx,%eax
0831f7b2 +0x056:  shl    $0x2,%eax
0831f7b5 +0x059:  add    %edx,%eax
0831f7b7 +0x05b:  lea    0x0(,%eax,4),%edx
0831f7be +0x062:  add    %edx,%eax
0831f7c0 +0x064:  lea    0x28(%eax),%edx
0831f7c3 +0x067:  mov    0x8(%ebp),%eax
0831f7c6 +0x06a:  mov    %dx,0x8(%eax)
0831f7ca +0x06e:  mov    0x10(%ebp),%eax
0831f7cd +0x071:  sub    $0x1,%eax
0831f7d0 +0x074:  mov    %eax,%edx
0831f7d2 +0x076:  mov    %edx,%eax
0831f7d4 +0x078:  add    %eax,%eax
0831f7d6 +0x07a:  add    %edx,%eax
0831f7d8 +0x07c:  shl    $0x3,%eax
0831f7db +0x07f:  sub    %dx,%ax
0831f7de +0x082:  lea    0x28(%eax),%edx
0831f7e1 +0x085:  mov    0x8(%ebp),%eax
0831f7e4 +0x088:  mov    %dx,0xa(%eax)
0831f7e8 +0x08c:  mov    0x10(%ebp),%eax
0831f7eb +0x08f:  sub    $0x1,%eax
0831f7ee +0x092:  mov    %eax,%edx
0831f7f0 +0x094:  mov    %edx,%eax
0831f7f2 +0x096:  shl    $0x3,%eax
0831f7f5 +0x099:  add    %edx,%eax
0831f7f7 +0x09b:  shl    $0x2,%eax
0831f7fa +0x09e:  add    %edx,%eax
0831f7fc +0x0a0:  lea    0x46(%eax),%edx
0831f7ff +0x0a3:  mov    0x8(%ebp),%eax
0831f802 +0x0a6:  mov    %dx,0xc(%eax)
0831f806 +0x0aa:  mov    0x10(%ebp),%eax
0831f809 +0x0ad:  sub    $0x1,%eax
0831f80c +0x0b0:  mov    %eax,%edx
0831f80e +0x0b2:  mov    %edx,%eax
0831f810 +0x0b4:  shl    $0x2,%eax
0831f813 +0x0b7:  add    %edx,%eax
0831f815 +0x0b9:  lea    0x0(,%eax,8),%edx
0831f81c +0x0c0:  mov    %edx,%ecx
0831f81e +0x0c2:  sub    %ax,%cx
0831f821 +0x0c5:  mov    %ecx,%eax
0831f823 +0x0c7:  lea    0x3c(%eax),%edx
0831f826 +0x0ca:  mov    0x8(%ebp),%eax
0831f829 +0x0cd:  mov    %dx,0xe(%eax)
0831f82d +0x0d1:  mov    0x10(%ebp),%eax
0831f830 +0x0d4:  sub    $0x1,%eax
0831f833 +0x0d7:  imul   $0xbb8,%eax,%eax
0831f839 +0x0dd:  lea    0x50910(%eax),%edx
0831f83f +0x0e3:  mov    0x8(%ebp),%eax
0831f842 +0x0e6:  mov    %edx,0x3a(%eax)
0831f845 +0x0e9:  mov    0x10(%ebp),%eax
0831f848 +0x0ec:  sub    $0x1,%eax
0831f84b +0x0ef:  mov    %eax,%edx
0831f84d +0x0f1:  mov    %edx,%eax
0831f84f +0x0f3:  shl    $0x2,%eax
0831f852 +0x0f6:  add    %edx,%eax
0831f854 +0x0f8:  shl    $0x2,%eax
0831f857 +0x0fb:  add    $0x1770,%ax
0831f85b +0x0ff:  mov    %eax,%edx
0831f85d +0x101:  mov    0x8(%ebp),%eax
0831f860 +0x104:  mov    %dx,0x4a(%eax)
0831f864 +0x108:  jmp    0831fc35 <+0x4d9>
0831f869 +0x10d:  mov    0x10(%ebp),%eax
0831f86c +0x110:  imul   $0x15e,%eax,%eax
0831f872 +0x116:  add    $0x6d6,%eax
0831f877 +0x11b:  mov    %eax,%edx
0831f879 +0x11d:  mov    0x8(%ebp),%eax
0831f87c +0x120:  mov    %edx,(%eax)
0831f87e +0x122:  mov    0x10(%ebp),%eax
0831f881 +0x125:  imul   $0x15e,%eax,%eax
0831f887 +0x12b:  add    $0x258,%eax
0831f88c +0x130:  mov    %eax,%edx
0831f88e +0x132:  mov    0x8(%ebp),%eax
0831f891 +0x135:  mov    %edx,0x4(%eax)
0831f894 +0x138:  mov    0x10(%ebp),%eax
0831f897 +0x13b:  mov    %eax,%edx
0831f899 +0x13d:  mov    %edx,%eax
0831f89b +0x13f:  shl    $0x2,%eax
0831f89e +0x142:  add    %edx,%eax
0831f8a0 +0x144:  lea    0x0(,%eax,8),%edx
0831f8a7 +0x14b:  mov    %edx,%ecx
0831f8a9 +0x14d:  sub    %ax,%cx
0831f8ac +0x150:  mov    %ecx,%eax
0831f8ae +0x152:  lea    -0xa5(%eax),%edx
0831f8b4 +0x158:  mov    0x8(%ebp),%eax
0831f8b7 +0x15b:  mov    %dx,0x8(%eax)
0831f8bb +0x15f:  mov    0x10(%ebp),%eax
0831f8be +0x162:  mov    %eax,%edx
0831f8c0 +0x164:  mov    %edx,%eax
0831f8c2 +0x166:  shl    $0x2,%eax
0831f8c5 +0x169:  add    %edx,%eax
0831f8c7 +0x16b:  lea    0x0(,%eax,4),%edx
0831f8ce +0x172:  add    %edx,%eax
0831f8d0 +0x174:  lea    -0x13(%eax),%edx
0831f8d3 +0x177:  mov    0x8(%ebp),%eax
0831f8d6 +0x17a:  mov    %dx,0xa(%eax)
0831f8da +0x17e:  mov    0x10(%ebp),%eax
0831f8dd +0x181:  add    %eax,%eax
0831f8df +0x183:  mov    %eax,%edx
0831f8e1 +0x185:  shl    $0x4,%edx
0831f8e4 +0x188:  mov    %edx,%ecx
0831f8e6 +0x18a:  sub    %ax,%cx
0831f8e9 +0x18d:  mov    %ecx,%eax
0831f8eb +0x18f:  lea    0x9f(%eax),%edx
0831f8f1 +0x195:  mov    0x8(%ebp),%eax
0831f8f4 +0x198:  mov    %dx,0xc(%eax)
0831f8f8 +0x19c:  mov    0x10(%ebp),%eax
0831f8fb +0x19f:  add    %eax,%eax
0831f8fd +0x1a1:  mov    %eax,%edx
0831f8ff +0x1a3:  shl    $0x4,%edx
0831f902 +0x1a6:  mov    %edx,%ecx
0831f904 +0x1a8:  sub    %ax,%cx
0831f907 +0x1ab:  mov    %ecx,%eax
0831f909 +0x1ad:  lea    0x73(%eax),%edx
0831f90c +0x1b0:  mov    0x8(%ebp),%eax
0831f90f +0x1b3:  mov    %dx,0xe(%eax)
0831f913 +0x1b7:  mov    0x10(%ebp),%eax
0831f916 +0x1ba:  sub    $0x1,%eax
0831f919 +0x1bd:  imul   $0xbb8,%eax,%eax
0831f91f +0x1c3:  lea    0x50910(%eax),%edx
0831f925 +0x1c9:  mov    0x8(%ebp),%eax
0831f928 +0x1cc:  mov    %edx,0x3a(%eax)
0831f92b +0x1cf:  mov    0x10(%ebp),%eax
0831f92e +0x1d2:  mov    %eax,%edx
0831f930 +0x1d4:  mov    %edx,%eax
0831f932 +0x1d6:  shl    $0x2,%eax
0831f935 +0x1d9:  add    %edx,%eax
0831f937 +0x1db:  add    %eax,%eax
0831f939 +0x1dd:  lea    0x2468(%eax),%edx
0831f93f +0x1e3:  mov    0x8(%ebp),%eax
0831f942 +0x1e6:  mov    %dx,0x46(%eax)
0831f946 +0x1ea:  mov    0x10(%ebp),%edx
0831f949 +0x1ed:  mov    %edx,%eax
0831f94b +0x1ef:  shl    $0x2,%eax
0831f94e +0x1f2:  add    %edx,%eax
0831f950 +0x1f4:  add    %eax,%eax
0831f952 +0x1f6:  add    $0x1f54,%eax
0831f957 +0x1fb:  mov    %eax,%edx
0831f959 +0x1fd:  mov    0x8(%ebp),%eax
0831f95c +0x200:  mov    %edx,0x42(%eax)
0831f95f +0x203:  mov    0x10(%ebp),%eax
0831f962 +0x206:  mov    %eax,%edx
0831f964 +0x208:  mov    %edx,%eax
0831f966 +0x20a:  shl    $0x2,%eax
0831f969 +0x20d:  add    %edx,%eax
0831f96b +0x20f:  shl    $0x3,%eax
0831f96e +0x212:  add    $0x15f4,%ax
0831f972 +0x216:  mov    %eax,%edx
0831f974 +0x218:  mov    0x8(%ebp),%eax
0831f977 +0x21b:  mov    %dx,0x4a(%eax)
0831f97b +0x21f:  jmp    0831fc35 <+0x4d9>
0831f980 +0x224:  mov    0x10(%ebp),%eax
0831f983 +0x227:  imul   $0x1a9,%eax,%eax
0831f989 +0x22d:  add    $0x190,%eax
0831f98e +0x232:  mov    %eax,%edx
0831f990 +0x234:  mov    0x8(%ebp),%eax
0831f993 +0x237:  mov    %edx,(%eax)
0831f995 +0x239:  mov    0x10(%ebp),%eax
0831f998 +0x23c:  imul   $0x113,%eax,%eax
0831f99e +0x242:  add    $0x79e,%eax
0831f9a3 +0x247:  mov    %eax,%edx
0831f9a5 +0x249:  mov    0x8(%ebp),%eax
0831f9a8 +0x24c:  mov    %edx,0x4(%eax)
0831f9ab +0x24f:  mov    0x10(%ebp),%eax
0831f9ae +0x252:  mov    %eax,%edx
0831f9b0 +0x254:  mov    %edx,%eax
0831f9b2 +0x256:  shl    $0x2,%eax
0831f9b5 +0x259:  add    %edx,%eax
0831f9b7 +0x25b:  shl    $0x3,%eax
0831f9ba +0x25e:  lea    -0xff(%eax),%edx
0831f9c0 +0x264:  mov    0x8(%ebp),%eax
0831f9c3 +0x267:  mov    %dx,0x8(%eax)
0831f9c7 +0x26b:  mov    0x10(%ebp),%eax
0831f9ca +0x26e:  mov    %eax,%edx
0831f9cc +0x270:  mov    %edx,%eax
0831f9ce +0x272:  add    %eax,%eax
0831f9d0 +0x274:  add    %edx,%eax
0831f9d2 +0x276:  mov    %eax,%edx
0831f9d4 +0x278:  shl    $0x4,%edx
0831f9d7 +0x27b:  mov    %edx,%ecx
0831f9d9 +0x27d:  sub    %ax,%cx
0831f9dc +0x280:  mov    %ecx,%eax
0831f9de +0x282:  lea    -0x17b(%eax),%edx
0831f9e4 +0x288:  mov    0x8(%ebp),%eax
0831f9e7 +0x28b:  mov    %dx,0xa(%eax)
0831f9eb +0x28f:  mov    0x10(%ebp),%eax
0831f9ee +0x292:  mov    %eax,%edx
0831f9f0 +0x294:  mov    %edx,%eax
0831f9f2 +0x296:  shl    $0x4,%eax
0831f9f5 +0x299:  sub    %dx,%ax
0831f9f8 +0x29c:  lea    0x1ad(%eax),%edx
0831f9fe +0x2a2:  mov    0x8(%ebp),%eax
0831fa01 +0x2a5:  mov    %dx,0xc(%eax)
0831fa05 +0x2a9:  mov    0x10(%ebp),%eax
0831fa08 +0x2ac:  mov    %eax,%edx
0831fa0a +0x2ae:  mov    %edx,%eax
0831fa0c +0x2b0:  shl    $0x2,%eax
0831fa0f +0x2b3:  add    %edx,%eax
0831fa11 +0x2b5:  shl    $0x2,%eax
0831fa14 +0x2b8:  lea    0x127(%eax),%edx
0831fa1a +0x2be:  mov    0x8(%ebp),%eax
0831fa1d +0x2c1:  mov    %dx,0xe(%eax)
0831fa21 +0x2c5:  mov    0x10(%ebp),%eax
0831fa24 +0x2c8:  sub    $0x1,%eax
0831fa27 +0x2cb:  imul   $0xbb8,%eax,%eax
0831fa2d +0x2d1:  lea    0x50910(%eax),%edx
0831fa33 +0x2d7:  mov    0x8(%ebp),%eax
0831fa36 +0x2da:  mov    %edx,0x3a(%eax)
0831fa39 +0x2dd:  mov    0x10(%ebp),%eax
0831fa3c +0x2e0:  add    %eax,%eax
0831fa3e +0x2e2:  mov    %eax,%edx
0831fa40 +0x2e4:  shl    $0x4,%edx
0831fa43 +0x2e7:  mov    %edx,%ecx
0831fa45 +0x2e9:  sub    %ax,%cx
0831fa48 +0x2ec:  mov    %ecx,%eax
0831fa4a +0x2ee:  add    $0x16a8,%ax
0831fa4e +0x2f2:  mov    %eax,%edx
0831fa50 +0x2f4:  mov    0x8(%ebp),%eax
0831fa53 +0x2f7:  mov    %dx,0x4a(%eax)
0831fa57 +0x2fb:  jmp    0831fc35 <+0x4d9>
0831fa5c +0x300:  mov    0x10(%ebp),%eax
0831fa5f +0x303:  imul   $0x12c,%eax,%eax
0831fa65 +0x309:  add    $0xa5a,%eax
0831fa6a +0x30e:  mov    %eax,%edx
0831fa6c +0x310:  mov    0x8(%ebp),%eax
0831fa6f +0x313:  mov    %edx,(%eax)
0831fa71 +0x315:  mov    0x10(%ebp),%eax
0831fa74 +0x318:  imul   $0x190,%eax,%eax
0831fa7a +0x31e:  sub    $0x12c,%eax
0831fa7f +0x323:  mov    %eax,%edx
0831fa81 +0x325:  mov    0x8(%ebp),%eax
0831fa84 +0x328:  mov    %edx,0x4(%eax)
0831fa87 +0x32b:  mov    0x10(%ebp),%eax
0831fa8a +0x32e:  mov    %eax,%edx
0831fa8c +0x330:  mov    %edx,%eax
0831fa8e +0x332:  shl    $0x2,%eax
0831fa91 +0x335:  add    %edx,%eax
0831fa93 +0x337:  shl    $0x2,%eax
0831fa96 +0x33a:  lea    0x69(%eax),%edx
0831fa99 +0x33d:  mov    0x8(%ebp),%eax
0831fa9c +0x340:  mov    %dx,0x8(%eax)
0831faa0 +0x344:  mov    0x10(%ebp),%eax
0831faa3 +0x347:  mov    %eax,%edx
0831faa5 +0x349:  mov    %edx,%eax
0831faa7 +0x34b:  shl    $0x2,%eax
0831faaa +0x34e:  add    %edx,%eax
0831faac +0x350:  shl    $0x2,%eax
0831faaf +0x353:  lea    0x47(%eax),%edx
0831fab2 +0x356:  mov    0x8(%ebp),%eax
0831fab5 +0x359:  mov    %dx,0xa(%eax)
0831fab9 +0x35d:  mov    0x10(%ebp),%eax
0831fabc +0x360:  mov    %eax,%edx
0831fabe +0x362:  mov    %edx,%eax
0831fac0 +0x364:  shl    $0x2,%eax
0831fac3 +0x367:  add    %edx,%eax
0831fac5 +0x369:  shl    $0x3,%eax
0831fac8 +0x36c:  lea    -0x15(%eax),%edx
0831facb +0x36f:  mov    0x8(%ebp),%eax
0831face +0x372:  mov    %dx,0xc(%eax)
0831fad2 +0x376:  mov    0x10(%ebp),%eax
0831fad5 +0x379:  mov    %eax,%edx
0831fad7 +0x37b:  mov    %edx,%eax
0831fad9 +0x37d:  shl    $0x2,%eax
0831fadc +0x380:  add    %edx,%eax
0831fade +0x382:  shl    $0x3,%eax
0831fae1 +0x385:  lea    -0x41(%eax),%edx
0831fae4 +0x388:  mov    0x8(%ebp),%eax
0831fae7 +0x38b:  mov    %dx,0xe(%eax)
0831faeb +0x38f:  mov    0x10(%ebp),%eax
0831faee +0x392:  sub    $0x1,%eax
0831faf1 +0x395:  imul   $0xbb8,%eax,%eax
0831faf7 +0x39b:  lea    0x50910(%eax),%edx
0831fafd +0x3a1:  mov    0x8(%ebp),%eax
0831fb00 +0x3a4:  mov    %edx,0x3a(%eax)
0831fb03 +0x3a7:  mov    0x10(%ebp),%eax
0831fb06 +0x3aa:  mov    %eax,%edx
0831fb08 +0x3ac:  mov    %edx,%eax
0831fb0a +0x3ae:  shl    $0x2,%eax
0831fb0d +0x3b1:  add    %edx,%eax
0831fb0f +0x3b3:  shl    $0x2,%eax
0831fb12 +0x3b6:  sub    $0xb9,%ax
0831fb16 +0x3ba:  mov    %eax,%edx
0831fb18 +0x3bc:  mov    0x8(%ebp),%eax
0831fb1b +0x3bf:  mov    %dx,0x40(%eax)
0831fb1f +0x3c3:  mov    0x10(%ebp),%eax
0831fb22 +0x3c6:  mov    %eax,%edx
0831fb24 +0x3c8:  mov    %edx,%eax
0831fb26 +0x3ca:  shl    $0x2,%eax
0831fb29 +0x3cd:  add    %edx,%eax
0831fb2b +0x3cf:  shl    $0x2,%eax
0831fb2e +0x3d2:  lea    0x1dd8(%eax),%edx
0831fb34 +0x3d8:  mov    0x8(%ebp),%eax
0831fb37 +0x3db:  mov    %dx,0x48(%eax)
0831fb3b +0x3df:  mov    0x10(%ebp),%eax
0831fb3e +0x3e2:  mov    %eax,%edx
0831fb40 +0x3e4:  mov    %edx,%eax
0831fb42 +0x3e6:  shl    $0x2,%eax
0831fb45 +0x3e9:  add    %edx,%eax
0831fb47 +0x3eb:  add    %eax,%eax
0831fb49 +0x3ed:  add    $0x1810,%ax
0831fb4d +0x3f1:  mov    %eax,%edx
0831fb4f +0x3f3:  mov    0x8(%ebp),%eax
0831fb52 +0x3f6:  mov    %dx,0x4a(%eax)
0831fb56 +0x3fa:  jmp    0831fc35 <+0x4d9>
0831fb5b +0x3ff:  mov    0x10(%ebp),%eax
0831fb5e +0x402:  imul   $0x190,%eax,%eax
0831fb64 +0x408:  add    $0x352,%eax
0831fb69 +0x40d:  mov    %eax,%edx
0831fb6b +0x40f:  mov    0x8(%ebp),%eax
0831fb6e +0x412:  mov    %edx,(%eax)
0831fb70 +0x414:  mov    0x10(%ebp),%eax
0831fb73 +0x417:  imul   $0x12c,%eax,%eax
0831fb79 +0x41d:  add    $0x5dc,%eax
0831fb7e +0x422:  mov    %eax,%edx
0831fb80 +0x424:  mov    0x8(%ebp),%eax
0831fb83 +0x427:  mov    %edx,0x4(%eax)
0831fb86 +0x42a:  mov    0x10(%ebp),%eax
0831fb89 +0x42d:  add    %eax,%eax
0831fb8b +0x42f:  mov    %eax,%edx
0831fb8d +0x431:  shl    $0x4,%edx
0831fb90 +0x434:  mov    %edx,%ecx
0831fb92 +0x436:  sub    %ax,%cx
0831fb95 +0x439:  mov    %ecx,%eax
0831fb97 +0x43b:  lea    -0x4b(%eax),%edx
0831fb9a +0x43e:  mov    0x8(%ebp),%eax
0831fb9d +0x441:  mov    %dx,0x8(%eax)
0831fba1 +0x445:  mov    0x10(%ebp),%eax
0831fba4 +0x448:  mov    %eax,%edx
0831fba6 +0x44a:  mov    %edx,%eax
0831fba8 +0x44c:  shl    $0x2,%eax
0831fbab +0x44f:  add    %edx,%eax
0831fbad +0x451:  lea    0x0(,%eax,4),%edx
0831fbb4 +0x458:  add    %edx,%eax
0831fbb6 +0x45a:  lea    -0x13(%eax),%edx
0831fbb9 +0x45d:  mov    0x8(%ebp),%eax
0831fbbc +0x460:  mov    %dx,0xa(%eax)
0831fbc0 +0x464:  mov    0x10(%ebp),%eax
0831fbc3 +0x467:  mov    %eax,%edx
0831fbc5 +0x469:  mov    %edx,%eax
0831fbc7 +0x46b:  shl    $0x2,%eax
0831fbca +0x46e:  add    %edx,%eax
0831fbcc +0x470:  lea    0x0(,%eax,8),%edx
0831fbd3 +0x477:  mov    %edx,%ecx
0831fbd5 +0x479:  sub    %ax,%cx
0831fbd8 +0x47c:  mov    %ecx,%eax
0831fbda +0x47e:  lea    0x45(%eax),%edx
0831fbdd +0x481:  mov    0x8(%ebp),%eax
0831fbe0 +0x484:  mov    %dx,0xc(%eax)
0831fbe4 +0x488:  mov    0x10(%ebp),%eax
0831fbe7 +0x48b:  add    %eax,%eax
0831fbe9 +0x48d:  mov    %eax,%edx
0831fbeb +0x48f:  shl    $0x4,%edx
0831fbee +0x492:  mov    %edx,%ecx
0831fbf0 +0x494:  sub    %ax,%cx
0831fbf3 +0x497:  mov    %ecx,%eax
0831fbf5 +0x499:  lea    0x73(%eax),%edx
0831fbf8 +0x49c:  mov    0x8(%ebp),%eax
0831fbfb +0x49f:  mov    %dx,0xe(%eax)
0831fbff +0x4a3:  mov    0x10(%ebp),%eax
0831fc02 +0x4a6:  sub    $0x1,%eax
0831fc05 +0x4a9:  imul   $0xbb8,%eax,%eax
0831fc0b +0x4af:  lea    0x50910(%eax),%edx
0831fc11 +0x4b5:  mov    0x8(%ebp),%eax
0831fc14 +0x4b8:  mov    %edx,0x3a(%eax)
0831fc17 +0x4bb:  mov    0x10(%ebp),%eax
0831fc1a +0x4be:  add    %eax,%eax
0831fc1c +0x4c0:  mov    %eax,%edx
0831fc1e +0x4c2:  shl    $0x4,%edx
0831fc21 +0x4c5:  mov    %edx,%ecx
0831fc23 +0x4c7:  sub    %ax,%cx
0831fc26 +0x4ca:  mov    %ecx,%eax
0831fc28 +0x4cc:  add    $0x16a8,%ax
0831fc2c +0x4d0:  mov    %eax,%edx
0831fc2e +0x4d2:  mov    0x8(%ebp),%eax
0831fc31 +0x4d5:  mov    %dx,0x4a(%eax)
0831fc35 +0x4d9:  mov    0x8(%ebp),%eax
0831fc38 +0x4dc:  pop    %ebp
0831fc39 +0x4dd:  ret
```

## 反编译 C

```c
// WongWork::CCalcCharacStat::_CalcGunner @ 0x831f75c

/* WongWork::CCalcCharacStat::_CalcGunner(_Additioal_info*, int, int) */

_Additioal_info *
WongWork::CCalcCharacStat::_CalcGunner(_Additioal_info *param_1,int param_2,int param_3)

{
  short sVar1;
  
  sVar1 = (short)param_3;
  switch(param_2) {
  case 0:
    *(int *)param_1 = (param_3 + -1) * 400 + 0x4e2;
    *(int *)(param_1 + 4) = (param_3 + -1) * 300 + 0x708;
    *(short *)(param_1 + 8) = (sVar1 + -1) * 0x19 + 0x28;
    *(short *)(param_1 + 10) = (sVar1 + -1) * 0x17 + 0x28;
    *(short *)(param_1 + 0xc) = (sVar1 + -1) * 0x25 + 0x46;
    *(short *)(param_1 + 0xe) = (sVar1 + -1) * 0x23 + 0x3c;
    *(int *)(param_1 + 0x3a) = (param_3 + -1) * 3000 + 330000;
    *(short *)(param_1 + 0x4a) = (sVar1 + -1) * 0x14 + 6000;
    break;
  case 1:
    *(int *)param_1 = param_3 * 0x15e + 0x6d6;
    *(int *)(param_1 + 4) = param_3 * 0x15e + 600;
    *(short *)(param_1 + 8) = sVar1 * 0x23 + -0xa5;
    *(short *)(param_1 + 10) = sVar1 * 0x19 + -0x13;
    *(short *)(param_1 + 0xc) = (short)(param_3 << 5) + sVar1 * -2 + 0x9f;
    *(short *)(param_1 + 0xe) = (short)(param_3 << 5) + sVar1 * -2 + 0x73;
    *(int *)(param_1 + 0x3a) = (param_3 + -1) * 3000 + 330000;
    *(short *)(param_1 + 0x46) = sVar1 * 10 + 0x2468;
    *(int *)(param_1 + 0x42) = param_3 * 10 + 0x1f54;
    *(short *)(param_1 + 0x4a) = ((short)(param_3 << 2) + sVar1) * 8 + 0x15f4;
    break;
  case 2:
    *(int *)param_1 = param_3 * 0x1a9 + 400;
    *(int *)(param_1 + 4) = param_3 * 0x113 + 0x79e;
    *(short *)(param_1 + 8) = ((short)(param_3 << 2) + sVar1) * 8 + -0xff;
    *(short *)(param_1 + 10) = sVar1 * 0x2d + -0x17b;
    *(short *)(param_1 + 0xc) = ((short)(param_3 << 4) - sVar1) + 0x1ad;
    *(short *)(param_1 + 0xe) = ((short)(param_3 << 2) + sVar1) * 4 + 0x127;
    *(int *)(param_1 + 0x3a) = (param_3 + -1) * 3000 + 330000;
    *(short *)(param_1 + 0x4a) = (short)(param_3 << 5) + sVar1 * -2 + 0x16a8;
    break;
  case 3:
    *(int *)param_1 = param_3 * 300 + 0xa5a;
    *(int *)(param_1 + 4) = param_3 * 400 + -300;
    *(short *)(param_1 + 8) = ((short)(param_3 << 2) + sVar1) * 4 + 0x69;
    *(short *)(param_1 + 10) = ((short)(param_3 << 2) + sVar1) * 4 + 0x47;
    *(short *)(param_1 + 0xc) = ((short)(param_3 << 2) + sVar1) * 8 + -0x15;
    *(short *)(param_1 + 0xe) = ((short)(param_3 << 2) + sVar1) * 8 + -0x41;
    *(int *)(param_1 + 0x3a) = (param_3 + -1) * 3000 + 330000;
    *(short *)(param_1 + 0x40) = ((short)(param_3 << 2) + sVar1) * 4 + -0xb9;
    *(short *)(param_1 + 0x48) = ((short)(param_3 << 2) + sVar1) * 4 + 0x1dd8;
    *(short *)(param_1 + 0x4a) = ((short)(param_3 << 2) + sVar1) * 2 + 0x1810;
    break;
  case 4:
    *(int *)param_1 = param_3 * 400 + 0x352;
    *(int *)(param_1 + 4) = param_3 * 300 + 0x5dc;
    *(short *)(param_1 + 8) = (short)(param_3 << 5) + sVar1 * -2 + -0x4b;
    *(short *)(param_1 + 10) = sVar1 * 0x19 + -0x13;
    *(short *)(param_1 + 0xc) = sVar1 * 0x23 + 0x45;
    *(short *)(param_1 + 0xe) = (short)(param_3 << 5) + sVar1 * -2 + 0x73;
    *(int *)(param_1 + 0x3a) = (param_3 + -1) * 3000 + 330000;
    *(short *)(param_1 + 0x4a) = (short)(param_3 << 5) + sVar1 * -2 + 0x16a8;
  }
  return param_1;
}
```
