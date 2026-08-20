# putRidableInfoToPacket

`_ZN12advancealtar22putRidableInfoToPacketER11PacketGuardRKNS_16AdvanceAltarDataE`

`advancealtar::putRidableInfoToPacket(PacketGuard&, advancealtar::AdvanceAltarData const&)`

| 类 | 地址 |
|---|---|
| `advancealtar` | `0x08141781` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08141781  _ZN12advancealtar22putRidableInfoToPacketER11PacketGuardRKNS_16AdvanceAltarDataE
#           advancealtar::putRidableInfoToPacket(PacketGuard&, advancealtar::AdvanceAltarData const&)
# range [0x08141781, 0x08141c6b]
08141781 +0x000:  push   %ebp
08141782 +0x001:  mov    %esp,%ebp
08141784 +0x003:  sub    $0x78,%esp
08141787 +0x006:  mov    0xc(%ebp),%eax
0814178a +0x009:  mov    %eax,%edx
0814178c +0x00b:  mov    0x8(%ebp),%eax
0814178f +0x00e:  movl   $0x21,0x8(%esp)
08141797 +0x016:  mov    %edx,0x4(%esp)
0814179b +0x01a:  mov    %eax,(%esp)
0814179e +0x01d:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
081417a3 +0x022:  mov    0xc(%ebp),%eax
081417a6 +0x025:  add    $0x24,%eax
081417a9 +0x028:  mov    %eax,(%esp)
081417ac +0x02b:  call   08142888 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0xbdc>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0xbdc
081417b1 +0x030:  mov    %eax,%edx
081417b3 +0x032:  mov    0x8(%ebp),%eax
081417b6 +0x035:  mov    %edx,0x4(%esp)
081417ba +0x039:  mov    %eax,(%esp)
081417bd +0x03c:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081417c2 +0x041:  mov    0xc(%ebp),%eax
081417c5 +0x044:  lea    0x24(%eax),%edx
081417c8 +0x047:  lea    -0x4c(%ebp),%eax
081417cb +0x04a:  mov    %edx,0x4(%esp)
081417cf +0x04e:  mov    %eax,(%esp)
081417d2 +0x051:  call   08135ed8 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1adf>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1adf
081417d7 +0x056:  sub    $0x4,%esp
081417da +0x059:  jmp    08141820 <+0x9f>
081417dc +0x05b:  lea    -0x4c(%ebp),%eax
081417df +0x05e:  mov    %eax,(%esp)
081417e2 +0x061:  call   08135f76 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1b7d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1b7d
081417e7 +0x066:  add    $0x4,%eax
081417ea +0x069:  mov    %eax,%edx
081417ec +0x06b:  mov    0x8(%ebp),%eax
081417ef +0x06e:  movl   $0x8,0x8(%esp)
081417f7 +0x076:  mov    %edx,0x4(%esp)
081417fb +0x07a:  mov    %eax,(%esp)
081417fe +0x07d:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
08141803 +0x082:  lea    -0x44(%ebp),%eax
08141806 +0x085:  movl   $0x0,0x8(%esp)
0814180e +0x08d:  lea    -0x4c(%ebp),%edx
08141811 +0x090:  mov    %edx,0x4(%esp)
08141815 +0x094:  mov    %eax,(%esp)
08141818 +0x097:  call   08135f38 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1b3f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1b3f
0814181d +0x09c:  sub    $0x4,%esp
08141820 +0x09f:  mov    0xc(%ebp),%eax
08141823 +0x0a2:  lea    0x24(%eax),%edx
08141826 +0x0a5:  lea    -0x48(%ebp),%eax
08141829 +0x0a8:  mov    %edx,0x4(%esp)
0814182d +0x0ac:  mov    %eax,(%esp)
08141830 +0x0af:  call   08135efe <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1b05>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1b05
08141835 +0x0b4:  sub    $0x4,%esp
08141838 +0x0b7:  lea    -0x48(%ebp),%eax
0814183b +0x0ba:  mov    %eax,0x4(%esp)
0814183f +0x0be:  lea    -0x4c(%ebp),%eax
08141842 +0x0c1:  mov    %eax,(%esp)
08141845 +0x0c4:  call   08135f24 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1b2b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1b2b
0814184a +0x0c9:  test   %al,%al
0814184c +0x0cb:  jne    081417dc <+0x5b>
0814184e +0x0cd:  movl   $0x0,-0x10(%ebp)
08141855 +0x0d4:  mov    0xc(%ebp),%eax
08141858 +0x0d7:  add    $0x3c,%eax
0814185b +0x0da:  mov    %eax,-0x10(%ebp)
0814185e +0x0dd:  mov    -0x10(%ebp),%eax
08141861 +0x0e0:  mov    %eax,(%esp)
08141864 +0x0e3:  call   08135ea2 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1aa9>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1aa9
08141869 +0x0e8:  mov    %eax,%edx
0814186b +0x0ea:  mov    0x8(%ebp),%eax
0814186e +0x0ed:  mov    %edx,0x4(%esp)
08141872 +0x0f1:  mov    %eax,(%esp)
08141875 +0x0f4:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0814187a +0x0f9:  lea    -0x50(%ebp),%eax
0814187d +0x0fc:  mov    -0x10(%ebp),%edx
08141880 +0x0ff:  mov    %edx,0x4(%esp)
08141884 +0x103:  mov    %eax,(%esp)
08141887 +0x106:  call   0814289c <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0xbf0>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0xbf0
0814188c +0x10b:  sub    $0x4,%esp
0814188f +0x10e:  jmp    081418d5 <+0x154>
08141891 +0x110:  lea    -0x50(%ebp),%eax
08141894 +0x113:  mov    %eax,(%esp)
08141897 +0x116:  call   081363b6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1fbd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1fbd
0814189c +0x11b:  add    $0x4,%eax
0814189f +0x11e:  mov    %eax,%edx
081418a1 +0x120:  mov    0x8(%ebp),%eax
081418a4 +0x123:  movl   $0xc,0x8(%esp)
081418ac +0x12b:  mov    %edx,0x4(%esp)
081418b0 +0x12f:  mov    %eax,(%esp)
081418b3 +0x132:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
081418b8 +0x137:  lea    -0x3c(%ebp),%eax
081418bb +0x13a:  movl   $0x0,0x8(%esp)
081418c3 +0x142:  lea    -0x50(%ebp),%edx
081418c6 +0x145:  mov    %edx,0x4(%esp)
081418ca +0x149:  mov    %eax,(%esp)
081418cd +0x14c:  call   081428c2 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0xc16>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0xc16
081418d2 +0x151:  sub    $0x4,%esp
081418d5 +0x154:  lea    -0x40(%ebp),%eax
081418d8 +0x157:  mov    -0x10(%ebp),%edx
081418db +0x15a:  mov    %edx,0x4(%esp)
081418df +0x15e:  mov    %eax,(%esp)
081418e2 +0x161:  call   08136188 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1d8f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1d8f
081418e7 +0x166:  sub    $0x4,%esp
081418ea +0x169:  lea    -0x40(%ebp),%eax
081418ed +0x16c:  mov    %eax,0x4(%esp)
081418f1 +0x170:  lea    -0x50(%ebp),%eax
081418f4 +0x173:  mov    %eax,(%esp)
081418f7 +0x176:  call   081363a2 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1fa9>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1fa9
081418fc +0x17b:  test   %al,%al
081418fe +0x17d:  jne    08141891 <+0x110>
08141900 +0x17f:  mov    0xc(%ebp),%eax
08141903 +0x182:  add    $0x54,%eax
08141906 +0x185:  mov    %eax,-0x10(%ebp)
08141909 +0x188:  mov    -0x10(%ebp),%eax
0814190c +0x18b:  mov    %eax,(%esp)
0814190f +0x18e:  call   08135ea2 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1aa9>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1aa9
08141914 +0x193:  mov    %eax,%edx
08141916 +0x195:  mov    0x8(%ebp),%eax
08141919 +0x198:  mov    %edx,0x4(%esp)
0814191d +0x19c:  mov    %eax,(%esp)
08141920 +0x19f:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08141925 +0x1a4:  lea    -0x54(%ebp),%eax
08141928 +0x1a7:  mov    -0x10(%ebp),%edx
0814192b +0x1aa:  mov    %edx,0x4(%esp)
0814192f +0x1ae:  mov    %eax,(%esp)
08141932 +0x1b1:  call   0814289c <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0xbf0>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0xbf0
08141937 +0x1b6:  sub    $0x4,%esp
0814193a +0x1b9:  jmp    08141980 <+0x1ff>
0814193c +0x1bb:  lea    -0x54(%ebp),%eax
0814193f +0x1be:  mov    %eax,(%esp)
08141942 +0x1c1:  call   081363b6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1fbd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1fbd
08141947 +0x1c6:  add    $0x4,%eax
0814194a +0x1c9:  mov    %eax,%edx
0814194c +0x1cb:  mov    0x8(%ebp),%eax
0814194f +0x1ce:  movl   $0xc,0x8(%esp)
08141957 +0x1d6:  mov    %edx,0x4(%esp)
0814195b +0x1da:  mov    %eax,(%esp)
0814195e +0x1dd:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
08141963 +0x1e2:  lea    -0x34(%ebp),%eax
08141966 +0x1e5:  movl   $0x0,0x8(%esp)
0814196e +0x1ed:  lea    -0x54(%ebp),%edx
08141971 +0x1f0:  mov    %edx,0x4(%esp)
08141975 +0x1f4:  mov    %eax,(%esp)
08141978 +0x1f7:  call   081428c2 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0xc16>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0xc16
0814197d +0x1fc:  sub    $0x4,%esp
08141980 +0x1ff:  lea    -0x38(%ebp),%eax
08141983 +0x202:  mov    -0x10(%ebp),%edx
08141986 +0x205:  mov    %edx,0x4(%esp)
0814198a +0x209:  mov    %eax,(%esp)
0814198d +0x20c:  call   08136188 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1d8f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1d8f
08141992 +0x211:  sub    $0x4,%esp
08141995 +0x214:  lea    -0x38(%ebp),%eax
08141998 +0x217:  mov    %eax,0x4(%esp)
0814199c +0x21b:  lea    -0x54(%ebp),%eax
0814199f +0x21e:  mov    %eax,(%esp)
081419a2 +0x221:  call   081363a2 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1fa9>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1fa9
081419a7 +0x226:  test   %al,%al
081419a9 +0x228:  jne    0814193c <+0x1bb>
081419ab +0x22a:  mov    0xc(%ebp),%eax
081419ae +0x22d:  add    $0x6c,%eax
081419b1 +0x230:  mov    %eax,-0x10(%ebp)
081419b4 +0x233:  mov    -0x10(%ebp),%eax
081419b7 +0x236:  mov    %eax,(%esp)
081419ba +0x239:  call   08135ea2 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1aa9>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1aa9
081419bf +0x23e:  mov    %eax,%edx
081419c1 +0x240:  mov    0x8(%ebp),%eax
081419c4 +0x243:  mov    %edx,0x4(%esp)
081419c8 +0x247:  mov    %eax,(%esp)
081419cb +0x24a:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081419d0 +0x24f:  lea    -0x58(%ebp),%eax
081419d3 +0x252:  mov    -0x10(%ebp),%edx
081419d6 +0x255:  mov    %edx,0x4(%esp)
081419da +0x259:  mov    %eax,(%esp)
081419dd +0x25c:  call   0814289c <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0xbf0>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0xbf0
081419e2 +0x261:  sub    $0x4,%esp
081419e5 +0x264:  jmp    08141a2b <+0x2aa>
081419e7 +0x266:  lea    -0x58(%ebp),%eax
081419ea +0x269:  mov    %eax,(%esp)
081419ed +0x26c:  call   081363b6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1fbd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1fbd
081419f2 +0x271:  add    $0x4,%eax
081419f5 +0x274:  mov    %eax,%edx
081419f7 +0x276:  mov    0x8(%ebp),%eax
081419fa +0x279:  movl   $0xc,0x8(%esp)
08141a02 +0x281:  mov    %edx,0x4(%esp)
08141a06 +0x285:  mov    %eax,(%esp)
08141a09 +0x288:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
08141a0e +0x28d:  lea    -0x2c(%ebp),%eax
08141a11 +0x290:  movl   $0x0,0x8(%esp)
08141a19 +0x298:  lea    -0x58(%ebp),%edx
08141a1c +0x29b:  mov    %edx,0x4(%esp)
08141a20 +0x29f:  mov    %eax,(%esp)
08141a23 +0x2a2:  call   081428c2 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0xc16>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0xc16
08141a28 +0x2a7:  sub    $0x4,%esp
08141a2b +0x2aa:  lea    -0x30(%ebp),%eax
08141a2e +0x2ad:  mov    -0x10(%ebp),%edx
08141a31 +0x2b0:  mov    %edx,0x4(%esp)
08141a35 +0x2b4:  mov    %eax,(%esp)
08141a38 +0x2b7:  call   08136188 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1d8f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1d8f
08141a3d +0x2bc:  sub    $0x4,%esp
08141a40 +0x2bf:  lea    -0x30(%ebp),%eax
08141a43 +0x2c2:  mov    %eax,0x4(%esp)
08141a47 +0x2c6:  lea    -0x58(%ebp),%eax
08141a4a +0x2c9:  mov    %eax,(%esp)
08141a4d +0x2cc:  call   081363a2 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1fa9>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1fa9
08141a52 +0x2d1:  test   %al,%al
08141a54 +0x2d3:  jne    081419e7 <+0x266>
08141a56 +0x2d5:  movl   $0x0,-0xc(%ebp)
08141a5d +0x2dc:  mov    0xc(%ebp),%eax
08141a60 +0x2df:  add    $0x84,%eax
08141a65 +0x2e4:  mov    %eax,-0xc(%ebp)
08141a68 +0x2e7:  mov    -0xc(%ebp),%eax
08141a6b +0x2ea:  mov    %eax,(%esp)
08141a6e +0x2ed:  call   08142900 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0xc54>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0xc54
08141a73 +0x2f2:  mov    %eax,%edx
08141a75 +0x2f4:  mov    0x8(%ebp),%eax
08141a78 +0x2f7:  mov    %edx,0x4(%esp)
08141a7c +0x2fb:  mov    %eax,(%esp)
08141a7f +0x2fe:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08141a84 +0x303:  lea    -0x5c(%ebp),%eax
08141a87 +0x306:  mov    -0xc(%ebp),%edx
08141a8a +0x309:  mov    %edx,0x4(%esp)
08141a8e +0x30d:  mov    %eax,(%esp)
08141a91 +0x310:  call   081362f6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1efd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1efd
08141a96 +0x315:  sub    $0x4,%esp
08141a99 +0x318:  jmp    08141adf <+0x35e>
08141a9b +0x31a:  lea    -0x5c(%ebp),%eax
08141a9e +0x31d:  mov    %eax,(%esp)
08141aa1 +0x320:  call   08136394 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1f9b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1f9b
08141aa6 +0x325:  add    $0x1,%eax
08141aa9 +0x328:  mov    %eax,%edx
08141aab +0x32a:  mov    0x8(%ebp),%eax
08141aae +0x32d:  movl   $0xa,0x8(%esp)
08141ab6 +0x335:  mov    %edx,0x4(%esp)
08141aba +0x339:  mov    %eax,(%esp)
08141abd +0x33c:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
08141ac2 +0x341:  lea    -0x24(%ebp),%eax
08141ac5 +0x344:  movl   $0x0,0x8(%esp)
08141acd +0x34c:  lea    -0x5c(%ebp),%edx
08141ad0 +0x34f:  mov    %edx,0x4(%esp)
08141ad4 +0x353:  mov    %eax,(%esp)
08141ad7 +0x356:  call   08136356 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1f5d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1f5d
08141adc +0x35b:  sub    $0x4,%esp
08141adf +0x35e:  lea    -0x28(%ebp),%eax
08141ae2 +0x361:  mov    -0xc(%ebp),%edx
08141ae5 +0x364:  mov    %edx,0x4(%esp)
08141ae9 +0x368:  mov    %eax,(%esp)
08141aec +0x36b:  call   0813631c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1f23>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1f23
08141af1 +0x370:  sub    $0x4,%esp
08141af4 +0x373:  lea    -0x28(%ebp),%eax
08141af7 +0x376:  mov    %eax,0x4(%esp)
08141afb +0x37a:  lea    -0x5c(%ebp),%eax
08141afe +0x37d:  mov    %eax,(%esp)
08141b01 +0x380:  call   08136342 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1f49>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1f49
08141b06 +0x385:  test   %al,%al
08141b08 +0x387:  jne    08141a9b <+0x31a>
08141b0a +0x389:  mov    0xc(%ebp),%eax
08141b0d +0x38c:  add    $0x9c,%eax
08141b12 +0x391:  mov    %eax,-0xc(%ebp)
08141b15 +0x394:  mov    -0xc(%ebp),%eax
08141b18 +0x397:  mov    %eax,(%esp)
08141b1b +0x39a:  call   08142900 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0xc54>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0xc54
08141b20 +0x39f:  mov    %eax,%edx
08141b22 +0x3a1:  mov    0x8(%ebp),%eax
08141b25 +0x3a4:  mov    %edx,0x4(%esp)
08141b29 +0x3a8:  mov    %eax,(%esp)
08141b2c +0x3ab:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08141b31 +0x3b0:  lea    -0x60(%ebp),%eax
08141b34 +0x3b3:  mov    -0xc(%ebp),%edx
08141b37 +0x3b6:  mov    %edx,0x4(%esp)
08141b3b +0x3ba:  mov    %eax,(%esp)
08141b3e +0x3bd:  call   081362f6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1efd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1efd
08141b43 +0x3c2:  sub    $0x4,%esp
08141b46 +0x3c5:  jmp    08141b8c <+0x40b>
08141b48 +0x3c7:  lea    -0x60(%ebp),%eax
08141b4b +0x3ca:  mov    %eax,(%esp)
08141b4e +0x3cd:  call   08136394 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1f9b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1f9b
08141b53 +0x3d2:  add    $0x1,%eax
08141b56 +0x3d5:  mov    %eax,%edx
08141b58 +0x3d7:  mov    0x8(%ebp),%eax
08141b5b +0x3da:  movl   $0xa,0x8(%esp)
08141b63 +0x3e2:  mov    %edx,0x4(%esp)
08141b67 +0x3e6:  mov    %eax,(%esp)
08141b6a +0x3e9:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
08141b6f +0x3ee:  lea    -0x1c(%ebp),%eax
08141b72 +0x3f1:  movl   $0x0,0x8(%esp)
08141b7a +0x3f9:  lea    -0x60(%ebp),%edx
08141b7d +0x3fc:  mov    %edx,0x4(%esp)
08141b81 +0x400:  mov    %eax,(%esp)
08141b84 +0x403:  call   08136356 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1f5d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1f5d
08141b89 +0x408:  sub    $0x4,%esp
08141b8c +0x40b:  lea    -0x20(%ebp),%eax
08141b8f +0x40e:  mov    -0xc(%ebp),%edx
08141b92 +0x411:  mov    %edx,0x4(%esp)
08141b96 +0x415:  mov    %eax,(%esp)
08141b99 +0x418:  call   0813631c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1f23>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1f23
08141b9e +0x41d:  sub    $0x4,%esp
08141ba1 +0x420:  lea    -0x20(%ebp),%eax
08141ba4 +0x423:  mov    %eax,0x4(%esp)
08141ba8 +0x427:  lea    -0x60(%ebp),%eax
08141bab +0x42a:  mov    %eax,(%esp)
08141bae +0x42d:  call   08136342 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1f49>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1f49
08141bb3 +0x432:  test   %al,%al
08141bb5 +0x434:  jne    08141b48 <+0x3c7>
08141bb7 +0x436:  mov    0xc(%ebp),%eax
08141bba +0x439:  add    $0xb4,%eax
08141bbf +0x43e:  mov    %eax,(%esp)
08141bc2 +0x441:  call   081358fa <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1501>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1501
08141bc7 +0x446:  mov    %eax,%edx
08141bc9 +0x448:  mov    0x8(%ebp),%eax
08141bcc +0x44b:  mov    %edx,0x4(%esp)
08141bd0 +0x44f:  mov    %eax,(%esp)
08141bd3 +0x452:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08141bd8 +0x457:  mov    0xc(%ebp),%eax
08141bdb +0x45a:  lea    0xb4(%eax),%edx
08141be1 +0x460:  lea    -0x64(%ebp),%eax
08141be4 +0x463:  mov    %edx,0x4(%esp)
08141be8 +0x467:  mov    %eax,(%esp)
08141beb +0x46a:  call   0813590e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1515>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1515
08141bf0 +0x46f:  sub    $0x4,%esp
08141bf3 +0x472:  jmp    08141c39 <+0x4b8>
08141bf5 +0x474:  lea    -0x64(%ebp),%eax
08141bf8 +0x477:  mov    %eax,(%esp)
08141bfb +0x47a:  call   081359ac <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x15b3>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x15b3
08141c00 +0x47f:  add    $0x4,%eax
08141c03 +0x482:  mov    %eax,%edx
08141c05 +0x484:  mov    0x8(%ebp),%eax
08141c08 +0x487:  movl   $0x5,0x8(%esp)
08141c10 +0x48f:  mov    %edx,0x4(%esp)
08141c14 +0x493:  mov    %eax,(%esp)
08141c17 +0x496:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
08141c1c +0x49b:  lea    -0x14(%ebp),%eax
08141c1f +0x49e:  movl   $0x0,0x8(%esp)
08141c27 +0x4a6:  lea    -0x64(%ebp),%edx
08141c2a +0x4a9:  mov    %edx,0x4(%esp)
08141c2e +0x4ad:  mov    %eax,(%esp)
08141c31 +0x4b0:  call   0813596e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1575>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1575
08141c36 +0x4b5:  sub    $0x4,%esp
08141c39 +0x4b8:  mov    0xc(%ebp),%eax
08141c3c +0x4bb:  lea    0xb4(%eax),%edx
08141c42 +0x4c1:  lea    -0x18(%ebp),%eax
08141c45 +0x4c4:  mov    %edx,0x4(%esp)
08141c49 +0x4c8:  mov    %eax,(%esp)
08141c4c +0x4cb:  call   08135934 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x153b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x153b
08141c51 +0x4d0:  sub    $0x4,%esp
08141c54 +0x4d3:  lea    -0x18(%ebp),%eax
08141c57 +0x4d6:  mov    %eax,0x4(%esp)
08141c5b +0x4da:  lea    -0x64(%ebp),%eax
08141c5e +0x4dd:  mov    %eax,(%esp)
08141c61 +0x4e0:  call   0813595a <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1561>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1561
08141c66 +0x4e5:  test   %al,%al
08141c68 +0x4e7:  jne    08141bf5 <+0x474>
08141c6a +0x4e9:  leave
08141c6b +0x4ea:  ret
```

## 反编译 C

```c
// advancealtar::putRidableInfoToPacket @ 0x8141781

/* advancealtar::putRidableInfoToPacket(PacketGuard&, advancealtar::AdvanceAltarData const&) */

void advancealtar::putRidableInfoToPacket(PacketGuard *param_1,AdvanceAltarData *param_2)

{
  char cVar1;
  int iVar2;
  map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
  local_68 [4];
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  local_64 [4];
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  local_60 [4];
  map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
  local_5c [4];
  map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
  local_58 [4];
  map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
  local_54 [4];
  map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
  local_50 [4];
  map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
  local_4c [4];
  _Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>> local_48 [4];
  map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
  local_44 [4];
  _Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>> local_40 [4];
  map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
  local_3c [4];
  _Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>> local_38 [4];
  map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
  local_34 [4];
  _Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>> local_30 [4];
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  local_2c [4];
  _Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> local_28 [4];
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  local_24 [4];
  _Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> local_20 [4];
  map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
  local_1c [4];
  _Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Reward>> local_18 [4];
  map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
  *local_14;
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  *local_10;
  
  InterfacePacketBuf::put_binary((InterfacePacketBuf *)param_1,(char *)param_2,0x21);
  iVar2 = std::
          map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
          ::size((map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
                  *)(param_2 + 0x24));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,iVar2);
  std::
  map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
  ::begin(local_50);
  while( true ) {
    std::
    map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
    ::end(local_4c);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>>::operator!=
                      ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>> *)
                       local_50,(_Rb_tree_const_iterator *)local_4c);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>> *)
                       local_50);
    InterfacePacketBuf::put_binary((InterfacePacketBuf *)param_1,(char *)(iVar2 + 4),8);
    std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>>::operator++
              (local_48,(int)local_50);
  }
  local_14 = (map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
              *)(param_2 + 0x3c);
  iVar2 = std::
          map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
          ::size(local_14);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,iVar2);
  std::
  map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
  ::begin(local_54);
  while( true ) {
    std::
    map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
    ::end(local_44);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>>::operator!=
                      ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>> *)
                       local_54,(_Rb_tree_const_iterator *)local_44);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>> *)
                       local_54);
    InterfacePacketBuf::put_binary((InterfacePacketBuf *)param_1,(char *)(iVar2 + 4),0xc);
    std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>>::operator++
              (local_40,(int)local_54);
  }
  local_14 = (map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
              *)(param_2 + 0x54);
  iVar2 = std::
          map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
          ::size(local_14);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,iVar2);
  std::
  map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
  ::begin(local_58);
  while( true ) {
    std::
    map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
    ::end(local_3c);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>>::operator!=
                      ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>> *)
                       local_58,(_Rb_tree_const_iterator *)local_3c);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>> *)
                       local_58);
    InterfacePacketBuf::put_binary((InterfacePacketBuf *)param_1,(char *)(iVar2 + 4),0xc);
    std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>>::operator++
              (local_38,(int)local_58);
  }
  local_14 = (map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
              *)(param_2 + 0x6c);
  iVar2 = std::
          map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
          ::size(local_14);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,iVar2);
  std::
  map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
  ::begin(local_5c);
  while( true ) {
    std::
    map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
    ::end(local_34);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>>::operator!=
                      ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>> *)
                       local_5c,(_Rb_tree_const_iterator *)local_34);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>> *)
                       local_5c);
    InterfacePacketBuf::put_binary((InterfacePacketBuf *)param_1,(char *)(iVar2 + 4),0xc);
    std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>>::operator++
              (local_30,(int)local_5c);
  }
  local_10 = (map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
              *)(param_2 + 0x84);
  iVar2 = std::
          map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
          ::size(local_10);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,iVar2);
  std::
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  ::begin(local_60);
  while( true ) {
    std::
    map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
    ::end(local_2c);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::
            operator!=((_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>
                        *)local_60,(_Rb_tree_const_iterator *)local_2c);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::
            operator->((_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>
                        *)local_60);
    InterfacePacketBuf::put_binary((InterfacePacketBuf *)param_1,(char *)(iVar2 + 1),10);
    std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::operator++
              (local_28,(int)local_60);
  }
  local_10 = (map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
              *)(param_2 + 0x9c);
  iVar2 = std::
          map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
          ::size(local_10);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,iVar2);
  std::
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  ::begin(local_64);
  while( true ) {
    std::
    map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
    ::end(local_24);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::
            operator!=((_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>
                        *)local_64,(_Rb_tree_const_iterator *)local_24);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::
            operator->((_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>
                        *)local_64);
    InterfacePacketBuf::put_binary((InterfacePacketBuf *)param_1,(char *)(iVar2 + 1),10);
    std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::operator++
              (local_20,(int)local_64);
  }
  iVar2 = std::
          map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
          ::size((map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
                  *)(param_2 + 0xb4));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,iVar2);
  std::
  map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
  ::begin(local_68);
  while( true ) {
    std::
    map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
    ::end(local_1c);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Reward>>::operator!=
                      ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Reward>> *)
                       local_68,(_Rb_tree_const_iterator *)local_1c);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Reward>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Reward>> *)
                       local_68);
    InterfacePacketBuf::put_binary((InterfacePacketBuf *)param_1,(char *)(iVar2 + 4),5);
    std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Reward>>::operator++
              (local_18,(int)local_68);
  }
  return;
}
```
