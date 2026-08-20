# loadGMAccounts

`_GLOBAL__I__ZN8WongWork11CGMAccounts14loadGMAccountsEPKc`

`global constructors keyed to WongWork::CGMAccounts::loadGMAccounts(char const*)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to WongWork::CGMAccounts` | `0x081095f3` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081095f3  _GLOBAL__I__ZN8WongWork11CGMAccounts14loadGMAccountsEPKc
#           global constructors keyed to WongWork::CGMAccounts::loadGMAccounts(char const*)
# range [0x081095f3, 0x08109b8f]
081095f3 +0x000:  push   %ebp
081095f4 +0x001:  mov    %esp,%ebp
081095f6 +0x003:  sub    $0x18,%esp
081095f9 +0x006:  movl   $0xffff,0x4(%esp)
08109601 +0x00e:  movl   $0x1,(%esp)
08109608 +0x015:  call   081095b3 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0810960d +0x01a:  leave
0810960e +0x01b:  ret
0810960f +0x01c:  nop
08109610 +0x01d:  push   %ebp
08109611 +0x01e:  mov    %esp,%ebp
08109613 +0x020:  mov    0x8(%ebp),%eax
08109616 +0x023:  mov    (%eax),%edx
08109618 +0x025:  mov    0xc(%ebp),%eax
0810961b +0x028:  mov    (%eax),%eax
0810961d +0x02a:  cmp    %eax,%edx
0810961f +0x02c:  sete   %al
08109622 +0x02f:  pop    %ebp
08109623 +0x030:  ret
08109624 +0x031:  push   %ebp
08109625 +0x032:  mov    %esp,%ebp
08109627 +0x034:  push   %ebx
08109628 +0x035:  sub    $0x14,%esp
0810962b +0x038:  mov    0x8(%ebp),%ebx
0810962e +0x03b:  mov    0xc(%ebp),%eax
08109631 +0x03e:  mov    (%eax),%eax
08109633 +0x040:  mov    %eax,0x4(%esp)
08109637 +0x044:  mov    %ebx,(%esp)
0810963a +0x047:  call   08109846 <+0x253>
0810963f +0x04c:  mov    %ebx,%eax
08109641 +0x04e:  add    $0x14,%esp
08109644 +0x051:  pop    %ebx
08109645 +0x052:  pop    %ebp
08109646 +0x053:  ret    $0x4
08109649 +0x056:  nop
0810964a +0x057:  push   %ebp
0810964b +0x058:  mov    %esp,%ebp
0810964d +0x05a:  push   %ebx
0810964e +0x05b:  sub    $0x14,%esp
08109651 +0x05e:  mov    0x8(%ebp),%ebx
08109654 +0x061:  mov    0xc(%ebp),%eax
08109657 +0x064:  mov    %eax,0x4(%esp)
0810965b +0x068:  mov    %ebx,(%esp)
0810965e +0x06b:  call   08109846 <+0x253>
08109663 +0x070:  mov    %ebx,%eax
08109665 +0x072:  add    $0x14,%esp
08109668 +0x075:  pop    %ebx
08109669 +0x076:  pop    %ebp
0810966a +0x077:  ret    $0x4
0810966d +0x07a:  push   %ebp
0810966e +0x07b:  mov    %esp,%ebp
08109670 +0x07d:  push   %esi
08109671 +0x07e:  push   %ebx
08109672 +0x07f:  sub    $0x30,%esp
08109675 +0x082:  mov    0x8(%ebp),%ebx
08109678 +0x085:  lea    -0x9(%ebp),%eax
0810967b +0x088:  lea    0xc(%ebp),%edx
0810967e +0x08b:  mov    %edx,0x4(%esp)
08109682 +0x08f:  mov    %eax,(%esp)
08109685 +0x092:  call   08109853 <+0x260>
0810968a +0x097:  sub    $0x4,%esp
0810968d +0x09a:  mov    %esi,%eax
0810968f +0x09c:  mov    %al,0x10(%esp)
08109693 +0x0a0:  mov    0x14(%ebp),%eax
08109696 +0x0a3:  mov    %eax,0xc(%esp)
0810969a +0x0a7:  mov    0x10(%ebp),%eax
0810969d +0x0aa:  mov    %eax,0x8(%esp)
081096a1 +0x0ae:  mov    0xc(%ebp),%eax
081096a4 +0x0b1:  mov    %eax,0x4(%esp)
081096a8 +0x0b5:  mov    %ebx,(%esp)
081096ab +0x0b8:  call   0810985d <+0x26a>
081096b0 +0x0bd:  sub    $0x4,%esp
081096b3 +0x0c0:  mov    %ebx,%eax
081096b5 +0x0c2:  lea    -0x8(%ebp),%esp
081096b8 +0x0c5:  add    $0x0,%esp
081096bb +0x0c8:  pop    %ebx
081096bc +0x0c9:  pop    %esi
081096bd +0x0ca:  pop    %ebp
081096be +0x0cb:  ret    $0x4
081096c1 +0x0ce:  nop
081096c2 +0x0cf:  push   %ebp
081096c3 +0x0d0:  mov    %esp,%ebp
081096c5 +0x0d2:  mov    0x8(%ebp),%eax
081096c8 +0x0d5:  mov    (%eax),%edx
081096ca +0x0d7:  mov    0xc(%ebp),%eax
081096cd +0x0da:  mov    (%eax),%eax
081096cf +0x0dc:  cmp    %eax,%edx
081096d1 +0x0de:  setne  %al
081096d4 +0x0e1:  pop    %ebp
081096d5 +0x0e2:  ret
081096d6 +0x0e3:  push   %ebp
081096d7 +0x0e4:  mov    %esp,%ebp
081096d9 +0x0e6:  sub    $0x28,%esp
081096dc +0x0e9:  lea    -0xc(%ebp),%eax
081096df +0x0ec:  mov    0x8(%ebp),%edx
081096e2 +0x0ef:  mov    %edx,0x4(%esp)
081096e6 +0x0f3:  mov    %eax,(%esp)
081096e9 +0x0f6:  call   0810964a <+0x57>
081096ee +0x0fb:  sub    $0x4,%esp
081096f1 +0x0fe:  mov    0xc(%ebp),%eax
081096f4 +0x101:  mov    %eax,0x8(%esp)
081096f8 +0x105:  mov    -0xc(%ebp),%eax
081096fb +0x108:  mov    %eax,0x4(%esp)
081096ff +0x10c:  mov    0x8(%ebp),%eax
08109702 +0x10f:  mov    %eax,(%esp)
08109705 +0x112:  call   081098ca <+0x2d7>
0810970a +0x117:  leave
0810970b +0x118:  ret
0810970c +0x119:  push   %ebp
0810970d +0x11a:  mov    %esp,%ebp
0810970f +0x11c:  push   %ebx
08109710 +0x11d:  sub    $0x14,%esp
08109713 +0x120:  mov    0x8(%ebp),%ebx
08109716 +0x123:  mov    0xc(%ebp),%eax
08109719 +0x126:  mov    (%eax),%eax
0810971b +0x128:  mov    %eax,0x4(%esp)
0810971f +0x12c:  mov    %ebx,(%esp)
08109722 +0x12f:  call   08109902 <+0x30f>
08109727 +0x134:  mov    %ebx,%eax
08109729 +0x136:  add    $0x14,%esp
0810972c +0x139:  pop    %ebx
0810972d +0x13a:  pop    %ebp
0810972e +0x13b:  ret    $0x4
08109731 +0x13e:  nop
08109732 +0x13f:  push   %ebp
08109733 +0x140:  mov    %esp,%ebp
08109735 +0x142:  push   %ebx
08109736 +0x143:  sub    $0x14,%esp
08109739 +0x146:  mov    0x8(%ebp),%ebx
0810973c +0x149:  mov    0xc(%ebp),%eax
0810973f +0x14c:  mov    %eax,0x4(%esp)
08109743 +0x150:  mov    %ebx,(%esp)
08109746 +0x153:  call   08109902 <+0x30f>
0810974b +0x158:  mov    %ebx,%eax
0810974d +0x15a:  add    $0x14,%esp
08109750 +0x15d:  pop    %ebx
08109751 +0x15e:  pop    %ebp
08109752 +0x15f:  ret    $0x4
08109755 +0x162:  push   %ebp
08109756 +0x163:  mov    %esp,%ebp
08109758 +0x165:  push   %esi
08109759 +0x166:  push   %ebx
0810975a +0x167:  sub    $0x30,%esp
0810975d +0x16a:  mov    0x8(%ebp),%ebx
08109760 +0x16d:  lea    -0x9(%ebp),%eax
08109763 +0x170:  lea    0xc(%ebp),%edx
08109766 +0x173:  mov    %edx,0x4(%esp)
0810976a +0x177:  mov    %eax,(%esp)
0810976d +0x17a:  call   0810990f <+0x31c>
08109772 +0x17f:  sub    $0x4,%esp
08109775 +0x182:  mov    %esi,%eax
08109777 +0x184:  mov    %al,0x10(%esp)
0810977b +0x188:  mov    0x14(%ebp),%eax
0810977e +0x18b:  mov    %eax,0xc(%esp)
08109782 +0x18f:  mov    0x10(%ebp),%eax
08109785 +0x192:  mov    %eax,0x8(%esp)
08109789 +0x196:  mov    0xc(%ebp),%eax
0810978c +0x199:  mov    %eax,0x4(%esp)
08109790 +0x19d:  mov    %ebx,(%esp)
08109793 +0x1a0:  call   08109919 <+0x326>
08109798 +0x1a5:  sub    $0x4,%esp
0810979b +0x1a8:  mov    %ebx,%eax
0810979d +0x1aa:  lea    -0x8(%ebp),%esp
081097a0 +0x1ad:  add    $0x0,%esp
081097a3 +0x1b0:  pop    %ebx
081097a4 +0x1b1:  pop    %esi
081097a5 +0x1b2:  pop    %ebp
081097a6 +0x1b3:  ret    $0x4
081097a9 +0x1b6:  nop
081097aa +0x1b7:  push   %ebp
081097ab +0x1b8:  mov    %esp,%ebp
081097ad +0x1ba:  mov    0x8(%ebp),%eax
081097b0 +0x1bd:  mov    (%eax),%edx
081097b2 +0x1bf:  mov    0xc(%ebp),%eax
081097b5 +0x1c2:  mov    (%eax),%eax
081097b7 +0x1c4:  cmp    %eax,%edx
081097b9 +0x1c6:  setne  %al
081097bc +0x1c9:  pop    %ebp
081097bd +0x1ca:  ret
081097be +0x1cb:  push   %ebp
081097bf +0x1cc:  mov    %esp,%ebp
081097c1 +0x1ce:  mov    0x8(%ebp),%eax
081097c4 +0x1d1:  mov    (%eax),%eax
081097c6 +0x1d3:  add    $0x8,%eax
081097c9 +0x1d6:  pop    %ebp
081097ca +0x1d7:  ret
081097cb +0x1d8:  nop
081097cc +0x1d9:  push   %ebp
081097cd +0x1da:  mov    %esp,%ebp
081097cf +0x1dc:  sub    $0x18,%esp
081097d2 +0x1df:  mov    0x8(%ebp),%eax
081097d5 +0x1e2:  mov    %eax,(%esp)
081097d8 +0x1e5:  call   081097ea <+0x1f7>
081097dd +0x1ea:  mov    0x8(%ebp),%eax
081097e0 +0x1ed:  mov    %eax,(%esp)
081097e3 +0x1f0:  call   08109986 <+0x393>
081097e8 +0x1f5:  leave
081097e9 +0x1f6:  ret
081097ea +0x1f7:  push   %ebp
081097eb +0x1f8:  mov    %esp,%ebp
081097ed +0x1fa:  sub    $0x28,%esp
081097f0 +0x1fd:  mov    0x8(%ebp),%eax
081097f3 +0x200:  mov    (%eax),%eax
081097f5 +0x202:  mov    %eax,-0x10(%ebp)
081097f8 +0x205:  jmp    08109834 <+0x241>
081097fa +0x207:  mov    -0x10(%ebp),%eax
081097fd +0x20a:  mov    %eax,-0xc(%ebp)
08109800 +0x20d:  mov    -0x10(%ebp),%eax
08109803 +0x210:  mov    (%eax),%eax
08109805 +0x212:  mov    %eax,-0x10(%ebp)
08109808 +0x215:  mov    0x8(%ebp),%eax
0810980b +0x218:  mov    %eax,(%esp)
0810980e +0x21b:  call   0810999c <+0x3a9>
08109813 +0x220:  mov    -0xc(%ebp),%edx
08109816 +0x223:  mov    %edx,0x4(%esp)
0810981a +0x227:  mov    %eax,(%esp)
0810981d +0x22a:  call   081099aa <+0x3b7>
08109822 +0x22f:  mov    -0xc(%ebp),%eax
08109825 +0x232:  mov    %eax,0x4(%esp)
08109829 +0x236:  mov    0x8(%ebp),%eax
0810982c +0x239:  mov    %eax,(%esp)
0810982f +0x23c:  call   081099be <+0x3cb>
08109834 +0x241:  mov    0x8(%ebp),%edx
08109837 +0x244:  mov    -0x10(%ebp),%eax
0810983a +0x247:  cmp    %eax,%edx
0810983c +0x249:  setne  %al
0810983f +0x24c:  test   %al,%al
08109841 +0x24e:  jne    081097fa <+0x207>
08109843 +0x250:  leave
08109844 +0x251:  ret
08109845 +0x252:  nop
08109846 +0x253:  push   %ebp
08109847 +0x254:  mov    %esp,%ebp
08109849 +0x256:  mov    0x8(%ebp),%eax
0810984c +0x259:  mov    0xc(%ebp),%edx
0810984f +0x25c:  mov    %edx,(%eax)
08109851 +0x25e:  pop    %ebp
08109852 +0x25f:  ret
08109853 +0x260:  push   %ebp
08109854 +0x261:  mov    %esp,%ebp
08109856 +0x263:  mov    0x8(%ebp),%eax
08109859 +0x266:  pop    %ebp
0810985a +0x267:  ret    $0x4
0810985d +0x26a:  push   %ebp
0810985e +0x26b:  mov    %esp,%ebp
08109860 +0x26d:  push   %ebx
08109861 +0x26e:  sub    $0x14,%esp
08109864 +0x271:  mov    0x8(%ebp),%ebx
08109867 +0x274:  jmp    08109874 <+0x281>
08109869 +0x276:  lea    0xc(%ebp),%eax
0810986c +0x279:  mov    %eax,(%esp)
0810986f +0x27c:  call   081099ee <+0x3fb>
08109874 +0x281:  lea    0x10(%ebp),%eax
08109877 +0x284:  mov    %eax,0x4(%esp)
0810987b +0x288:  lea    0xc(%ebp),%eax
0810987e +0x28b:  mov    %eax,(%esp)
08109881 +0x28e:  call   081096c2 <+0xcf>
08109886 +0x293:  test   %al,%al
08109888 +0x295:  je     081098b2 <+0x2bf>
0810988a +0x297:  lea    0xc(%ebp),%eax
0810988d +0x29a:  mov    %eax,(%esp)
08109890 +0x29d:  call   081099e0 <+0x3ed>
08109895 +0x2a2:  mov    0x14(%ebp),%edx
08109898 +0x2a5:  mov    %edx,0x4(%esp)
0810989c +0x2a9:  mov    %eax,(%esp)
0810989f +0x2ac:  call   08109610 <+0x1d>
081098a4 +0x2b1:  xor    $0x1,%eax
081098a7 +0x2b4:  test   %al,%al
081098a9 +0x2b6:  je     081098b2 <+0x2bf>
081098ab +0x2b8:  mov    $0x1,%eax
081098b0 +0x2bd:  jmp    081098b7 <+0x2c4>
081098b2 +0x2bf:  mov    $0x0,%eax
081098b7 +0x2c4:  test   %al,%al
081098b9 +0x2c6:  jne    08109869 <+0x276>
081098bb +0x2c8:  mov    0xc(%ebp),%eax
081098be +0x2cb:  mov    %eax,(%ebx)
081098c0 +0x2cd:  mov    %ebx,%eax
081098c2 +0x2cf:  add    $0x14,%esp
081098c5 +0x2d2:  pop    %ebx
081098c6 +0x2d3:  pop    %ebp
081098c7 +0x2d4:  ret    $0x4
081098ca +0x2d7:  push   %ebp
081098cb +0x2d8:  mov    %esp,%ebp
081098cd +0x2da:  sub    $0x28,%esp
081098d0 +0x2dd:  mov    0x10(%ebp),%eax
081098d3 +0x2e0:  mov    %eax,(%esp)
081098d6 +0x2e3:  call   08109a02 <+0x40f>
081098db +0x2e8:  mov    %eax,0x4(%esp)
081098df +0x2ec:  mov    0x8(%ebp),%eax
081098e2 +0x2ef:  mov    %eax,(%esp)
081098e5 +0x2f2:  call   08109a0a <+0x417>
081098ea +0x2f7:  mov    %eax,-0xc(%ebp)
081098ed +0x2fa:  mov    0xc(%ebp),%edx
081098f0 +0x2fd:  mov    -0xc(%ebp),%eax
081098f3 +0x300:  mov    %edx,0x4(%esp)
081098f7 +0x304:  mov    %eax,(%esp)
081098fa +0x307:  call   086dad20 <_ZNSt15_List_node_base4hookEPS_>  ; std::_List_node_base::hook(std::_List_node_base*)
081098ff +0x30c:  leave
08109900 +0x30d:  ret
08109901 +0x30e:  nop
08109902 +0x30f:  push   %ebp
08109903 +0x310:  mov    %esp,%ebp
08109905 +0x312:  mov    0x8(%ebp),%eax
08109908 +0x315:  mov    0xc(%ebp),%edx
0810990b +0x318:  mov    %edx,(%eax)
0810990d +0x31a:  pop    %ebp
0810990e +0x31b:  ret
0810990f +0x31c:  push   %ebp
08109910 +0x31d:  mov    %esp,%ebp
08109912 +0x31f:  mov    0x8(%ebp),%eax
08109915 +0x322:  pop    %ebp
08109916 +0x323:  ret    $0x4
08109919 +0x326:  push   %ebp
0810991a +0x327:  mov    %esp,%ebp
0810991c +0x329:  push   %ebx
0810991d +0x32a:  sub    $0x14,%esp
08109920 +0x32d:  mov    0x8(%ebp),%ebx
08109923 +0x330:  jmp    08109930 <+0x33d>
08109925 +0x332:  lea    0xc(%ebp),%eax
08109928 +0x335:  mov    %eax,(%esp)
0810992b +0x338:  call   08109a8c <+0x499>
08109930 +0x33d:  lea    0x10(%ebp),%eax
08109933 +0x340:  mov    %eax,0x4(%esp)
08109937 +0x344:  lea    0xc(%ebp),%eax
0810993a +0x347:  mov    %eax,(%esp)
0810993d +0x34a:  call   081097aa <+0x1b7>
08109942 +0x34f:  test   %al,%al
08109944 +0x351:  je     0810996e <+0x37b>
08109946 +0x353:  lea    0xc(%ebp),%eax
08109949 +0x356:  mov    %eax,(%esp)
0810994c +0x359:  call   081097be <+0x1cb>
08109951 +0x35e:  mov    0x14(%ebp),%edx
08109954 +0x361:  mov    %edx,0x4(%esp)
08109958 +0x365:  mov    %eax,(%esp)
0810995b +0x368:  call   08109610 <+0x1d>
08109960 +0x36d:  xor    $0x1,%eax
08109963 +0x370:  test   %al,%al
08109965 +0x372:  je     0810996e <+0x37b>
08109967 +0x374:  mov    $0x1,%eax
0810996c +0x379:  jmp    08109973 <+0x380>
0810996e +0x37b:  mov    $0x0,%eax
08109973 +0x380:  test   %al,%al
08109975 +0x382:  jne    08109925 <+0x332>
08109977 +0x384:  mov    0xc(%ebp),%eax
0810997a +0x387:  mov    %eax,(%ebx)
0810997c +0x389:  mov    %ebx,%eax
0810997e +0x38b:  add    $0x14,%esp
08109981 +0x38e:  pop    %ebx
08109982 +0x38f:  pop    %ebp
08109983 +0x390:  ret    $0x4
08109986 +0x393:  push   %ebp
08109987 +0x394:  mov    %esp,%ebp
08109989 +0x396:  mov    0x8(%ebp),%edx
0810998c +0x399:  mov    0x8(%ebp),%eax
0810998f +0x39c:  mov    %edx,(%eax)
08109991 +0x39e:  mov    0x8(%ebp),%edx
08109994 +0x3a1:  mov    0x8(%ebp),%eax
08109997 +0x3a4:  mov    %edx,0x4(%eax)
0810999a +0x3a7:  pop    %ebp
0810999b +0x3a8:  ret
0810999c +0x3a9:  push   %ebp
0810999d +0x3aa:  mov    %esp,%ebp
0810999f +0x3ac:  mov    0x8(%ebp),%eax
081099a2 +0x3af:  pop    %ebp
081099a3 +0x3b0:  ret
081099a4 +0x3b1:  push   %ebp
081099a5 +0x3b2:  mov    %esp,%ebp
081099a7 +0x3b4:  pop    %ebp
081099a8 +0x3b5:  ret
081099a9 +0x3b6:  nop
081099aa +0x3b7:  push   %ebp
081099ab +0x3b8:  mov    %esp,%ebp
081099ad +0x3ba:  sub    $0x18,%esp
081099b0 +0x3bd:  mov    0xc(%ebp),%eax
081099b3 +0x3c0:  mov    %eax,(%esp)
081099b6 +0x3c3:  call   081099a4 <+0x3b1>
081099bb +0x3c8:  leave
081099bc +0x3c9:  ret
081099bd +0x3ca:  nop
081099be +0x3cb:  push   %ebp
081099bf +0x3cc:  mov    %esp,%ebp
081099c1 +0x3ce:  sub    $0x18,%esp
081099c4 +0x3d1:  mov    0x8(%ebp),%eax
081099c7 +0x3d4:  movl   $0x1,0x8(%esp)
081099cf +0x3dc:  mov    0xc(%ebp),%edx
081099d2 +0x3df:  mov    %edx,0x4(%esp)
081099d6 +0x3e3:  mov    %eax,(%esp)
081099d9 +0x3e6:  call   08109aa0 <+0x4ad>
081099de +0x3eb:  leave
081099df +0x3ec:  ret
081099e0 +0x3ed:  push   %ebp
081099e1 +0x3ee:  mov    %esp,%ebp
081099e3 +0x3f0:  mov    0x8(%ebp),%eax
081099e6 +0x3f3:  mov    (%eax),%eax
081099e8 +0x3f5:  add    $0x8,%eax
081099eb +0x3f8:  pop    %ebp
081099ec +0x3f9:  ret
081099ed +0x3fa:  nop
081099ee +0x3fb:  push   %ebp
081099ef +0x3fc:  mov    %esp,%ebp
081099f1 +0x3fe:  mov    0x8(%ebp),%eax
081099f4 +0x401:  mov    (%eax),%eax
081099f6 +0x403:  mov    (%eax),%edx
081099f8 +0x405:  mov    0x8(%ebp),%eax
081099fb +0x408:  mov    %edx,(%eax)
081099fd +0x40a:  mov    0x8(%ebp),%eax
08109a00 +0x40d:  pop    %ebp
08109a01 +0x40e:  ret
08109a02 +0x40f:  push   %ebp
08109a03 +0x410:  mov    %esp,%ebp
08109a05 +0x412:  mov    0x8(%ebp),%eax
08109a08 +0x415:  pop    %ebp
08109a09 +0x416:  ret
08109a0a +0x417:  push   %ebp
08109a0b +0x418:  mov    %esp,%ebp
08109a0d +0x41a:  push   %esi
08109a0e +0x41b:  push   %ebx
08109a0f +0x41c:  sub    $0x20,%esp
08109a12 +0x41f:  mov    0x8(%ebp),%eax
08109a15 +0x422:  mov    %eax,(%esp)
08109a18 +0x425:  call   08109ab4 <+0x4c1>
08109a1d +0x42a:  mov    %eax,-0xc(%ebp)
08109a20 +0x42d:  mov    0xc(%ebp),%eax
08109a23 +0x430:  mov    %eax,(%esp)
08109a26 +0x433:  call   08109a02 <+0x40f>
08109a2b +0x438:  mov    %eax,%ebx
08109a2d +0x43a:  mov    0x8(%ebp),%eax
08109a30 +0x43d:  mov    %eax,(%esp)
08109a33 +0x440:  call   0810999c <+0x3a9>
08109a38 +0x445:  mov    %ebx,0x8(%esp)
08109a3c +0x449:  mov    -0xc(%ebp),%edx
08109a3f +0x44c:  mov    %edx,0x4(%esp)
08109a43 +0x450:  mov    %eax,(%esp)
08109a46 +0x453:  call   08109ad8 <+0x4e5>
08109a4b +0x458:  jmp    08109a81 <+0x48e>
08109a4d +0x45a:  mov    %eax,(%esp)
08109a50 +0x45d:  call   08725ce0 <__cxa_begin_catch>
08109a55 +0x462:  mov    0x8(%ebp),%eax
08109a58 +0x465:  mov    -0xc(%ebp),%edx
08109a5b +0x468:  mov    %edx,0x4(%esp)
08109a5f +0x46c:  mov    %eax,(%esp)
08109a62 +0x46f:  call   081099be <+0x3cb>
08109a67 +0x474:  call   08724be0 <__cxa_rethrow>
08109a6c +0x479:  mov    %edx,%ebx
08109a6e +0x47b:  mov    %eax,%esi
08109a70 +0x47d:  call   08725c30 <__cxa_end_catch>
08109a75 +0x482:  mov    %esi,%eax
08109a77 +0x484:  mov    %ebx,%edx
08109a79 +0x486:  mov    %eax,(%esp)
08109a7c +0x489:  call   08ae3750 <_Unwind_Resume>
08109a81 +0x48e:  mov    -0xc(%ebp),%eax
08109a84 +0x491:  add    $0x20,%esp
08109a87 +0x494:  pop    %ebx
08109a88 +0x495:  pop    %esi
08109a89 +0x496:  pop    %ebp
08109a8a +0x497:  ret
08109a8b +0x498:  nop
08109a8c +0x499:  push   %ebp
08109a8d +0x49a:  mov    %esp,%ebp
08109a8f +0x49c:  mov    0x8(%ebp),%eax
08109a92 +0x49f:  mov    (%eax),%eax
08109a94 +0x4a1:  mov    (%eax),%edx
08109a96 +0x4a3:  mov    0x8(%ebp),%eax
08109a99 +0x4a6:  mov    %edx,(%eax)
08109a9b +0x4a8:  mov    0x8(%ebp),%eax
08109a9e +0x4ab:  pop    %ebp
08109a9f +0x4ac:  ret
08109aa0 +0x4ad:  push   %ebp
08109aa1 +0x4ae:  mov    %esp,%ebp
08109aa3 +0x4b0:  sub    $0x18,%esp
08109aa6 +0x4b3:  mov    0xc(%ebp),%eax
08109aa9 +0x4b6:  mov    %eax,(%esp)
08109aac +0x4b9:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08109ab1 +0x4be:  leave
08109ab2 +0x4bf:  ret
08109ab3 +0x4c0:  nop
08109ab4 +0x4c1:  push   %ebp
08109ab5 +0x4c2:  mov    %esp,%ebp
08109ab7 +0x4c4:  sub    $0x18,%esp
08109aba +0x4c7:  mov    0x8(%ebp),%eax
08109abd +0x4ca:  movl   $0x0,0x8(%esp)
08109ac5 +0x4d2:  movl   $0x1,0x4(%esp)
08109acd +0x4da:  mov    %eax,(%esp)
08109ad0 +0x4dd:  call   08109b18 <+0x525>
08109ad5 +0x4e2:  leave
08109ad6 +0x4e3:  ret
08109ad7 +0x4e4:  nop
08109ad8 +0x4e5:  push   %ebp
08109ad9 +0x4e6:  mov    %esp,%ebp
08109adb +0x4e8:  push   %ebx
08109adc +0x4e9:  sub    $0x14,%esp
08109adf +0x4ec:  mov    0x10(%ebp),%eax
08109ae2 +0x4ef:  mov    %eax,(%esp)
08109ae5 +0x4f2:  call   08109a02 <+0x40f>
08109aea +0x4f7:  mov    %eax,%ebx
08109aec +0x4f9:  mov    0xc(%ebp),%eax
08109aef +0x4fc:  mov    %eax,0x4(%esp)
08109af3 +0x500:  movl   $0x10,(%esp)
08109afa +0x507:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08109aff +0x50c:  mov    %eax,%edx
08109b01 +0x50e:  test   %edx,%edx
08109b03 +0x510:  je     08109b11 <+0x51e>
08109b05 +0x512:  mov    %ebx,0x4(%esp)
08109b09 +0x516:  mov    %eax,(%esp)
08109b0c +0x519:  call   08109b50 <+0x55d>
08109b11 +0x51e:  add    $0x14,%esp
08109b14 +0x521:  pop    %ebx
08109b15 +0x522:  pop    %ebp
08109b16 +0x523:  ret
08109b17 +0x524:  nop
08109b18 +0x525:  push   %ebp
08109b19 +0x526:  mov    %esp,%ebp
08109b1b +0x528:  sub    $0x18,%esp
08109b1e +0x52b:  mov    0x8(%ebp),%eax
08109b21 +0x52e:  mov    %eax,(%esp)
08109b24 +0x531:  call   08109b84 <+0x591>
08109b29 +0x536:  cmp    0xc(%ebp),%eax
08109b2c +0x539:  setb   %al
08109b2f +0x53c:  movzbl %al,%eax
08109b32 +0x53f:  test   %eax,%eax
08109b34 +0x541:  setne  %al
08109b37 +0x544:  test   %al,%al
08109b39 +0x546:  je     08109b40 <+0x54d>
08109b3b +0x548:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
08109b40 +0x54d:  mov    0xc(%ebp),%eax
08109b43 +0x550:  shl    $0x4,%eax
08109b46 +0x553:  mov    %eax,(%esp)
08109b49 +0x556:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08109b4e +0x55b:  leave
08109b4f +0x55c:  ret
08109b50 +0x55d:  push   %ebp
08109b51 +0x55e:  mov    %esp,%ebp
08109b53 +0x560:  sub    $0x18,%esp
08109b56 +0x563:  mov    0x8(%ebp),%eax
08109b59 +0x566:  movl   $0x0,(%eax)
08109b5f +0x56c:  mov    0x8(%ebp),%eax
08109b62 +0x56f:  movl   $0x0,0x4(%eax)
08109b69 +0x576:  mov    0xc(%ebp),%eax
08109b6c +0x579:  mov    %eax,(%esp)
08109b6f +0x57c:  call   08109a02 <+0x40f>
08109b74 +0x581:  mov    0x8(%ebp),%ecx
08109b77 +0x584:  mov    0x4(%eax),%edx
08109b7a +0x587:  mov    (%eax),%eax
08109b7c +0x589:  mov    %eax,0x8(%ecx)
08109b7f +0x58c:  mov    %edx,0xc(%ecx)
08109b82 +0x58f:  leave
08109b83 +0x590:  ret
08109b84 +0x591:  push   %ebp
08109b85 +0x592:  mov    %esp,%ebp
08109b87 +0x594:  mov    $0xfffffff,%eax
08109b8c +0x599:  pop    %ebp
08109b8d +0x59a:  ret
08109b8e +0x59b:  nop
08109b8f +0x59c:  nop
```

## 反编译 C

```c
// <global>::global @ 0x81095f3

/* WongWork::CGMAccounts::loadGMAccounts(char const*) */

void WongWork::CGMAccounts::_GLOBAL__I_loadGMAccounts(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
