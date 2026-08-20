# LoadScript

`_GLOBAL__I__ZN4ARAD26CeraShopPurcahseCountBonus10LoadScriptEv`

`global constructors keyed to ARAD::CeraShopPurcahseCountBonus::LoadScript()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to ARAD::CeraShopPurcahseCountBonus` | `0x081ac6f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ac6f4  _GLOBAL__I__ZN4ARAD26CeraShopPurcahseCountBonus10LoadScriptEv
#           global constructors keyed to ARAD::CeraShopPurcahseCountBonus::LoadScript()
# range [0x081ac6f4, 0x081acaab]
081ac6f4 +0x000:  push   %ebp
081ac6f5 +0x001:  mov    %esp,%ebp
081ac6f7 +0x003:  sub    $0x18,%esp
081ac6fa +0x006:  movl   $0xffff,0x4(%esp)
081ac702 +0x00e:  movl   $0x1,(%esp)
081ac709 +0x015:  call   081ac6b4 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
081ac70e +0x01a:  leave
081ac70f +0x01b:  ret
081ac710 +0x01c:  push   %ebp
081ac711 +0x01d:  mov    %esp,%ebp
081ac713 +0x01f:  mov    0x8(%ebp),%eax
081ac716 +0x022:  movb   $0x0,(%eax)
081ac719 +0x025:  mov    0x8(%ebp),%eax
081ac71c +0x028:  movl   $0x0,0x4(%eax)
081ac723 +0x02f:  mov    0x8(%ebp),%eax
081ac726 +0x032:  movw   $0x0,0x8(%eax)
081ac72c +0x038:  pop    %ebp
081ac72d +0x039:  ret
081ac72e +0x03a:  push   %ebp
081ac72f +0x03b:  mov    %esp,%ebp
081ac731 +0x03d:  mov    0x8(%ebp),%eax
081ac734 +0x040:  mov    0xc(%eax),%eax
081ac737 +0x043:  pop    %ebp
081ac738 +0x044:  ret
081ac739 +0x045:  nop
081ac73a +0x046:  push   %ebp
081ac73b +0x047:  mov    %esp,%ebp
081ac73d +0x049:  mov    0x8(%ebp),%eax
081ac740 +0x04c:  mov    0xc(%ebp),%edx
081ac743 +0x04f:  mov    %edx,0xc(%eax)
081ac746 +0x052:  pop    %ebp
081ac747 +0x053:  ret
081ac748 +0x054:  push   %ebp
081ac749 +0x055:  mov    %esp,%ebp
081ac74b +0x057:  push   %ebx
081ac74c +0x058:  sub    $0x14,%esp
081ac74f +0x05b:  mov    0x8(%ebp),%ebx
081ac752 +0x05e:  mov    0xc(%ebp),%eax
081ac755 +0x061:  mov    0x10(%ebp),%edx
081ac758 +0x064:  mov    %edx,0x8(%esp)
081ac75c +0x068:  mov    %eax,0x4(%esp)
081ac760 +0x06c:  mov    %ebx,(%esp)
081ac763 +0x06f:  call   081ac8a2 <+0x1ae>
081ac768 +0x074:  sub    $0x4,%esp
081ac76b +0x077:  mov    %ebx,%eax
081ac76d +0x079:  mov    -0x4(%ebp),%ebx
081ac770 +0x07c:  leave
081ac771 +0x07d:  ret    $0x4
081ac774 +0x080:  push   %ebp
081ac775 +0x081:  mov    %esp,%ebp
081ac777 +0x083:  mov    0x8(%ebp),%eax
081ac77a +0x086:  mov    (%eax),%eax
081ac77c +0x088:  add    $0x10,%eax
081ac77f +0x08b:  pop    %ebp
081ac780 +0x08c:  ret
081ac781 +0x08d:  nop
081ac782 +0x08e:  push   %ebp
081ac783 +0x08f:  mov    %esp,%ebp
081ac785 +0x091:  push   %ebx
081ac786 +0x092:  sub    $0x14,%esp
081ac789 +0x095:  mov    0x8(%ebp),%ebx
081ac78c +0x098:  mov    0xc(%ebp),%eax
081ac78f +0x09b:  mov    %eax,0x4(%esp)
081ac793 +0x09f:  mov    %ebx,(%esp)
081ac796 +0x0a2:  call   081ac960 <+0x26c>
081ac79b +0x0a7:  sub    $0x4,%esp
081ac79e +0x0aa:  mov    %ebx,%eax
081ac7a0 +0x0ac:  mov    -0x4(%ebp),%ebx
081ac7a3 +0x0af:  leave
081ac7a4 +0x0b0:  ret    $0x4
081ac7a7 +0x0b3:  nop
081ac7a8 +0x0b4:  push   %ebp
081ac7a9 +0x0b5:  mov    %esp,%ebp
081ac7ab +0x0b7:  mov    0x8(%ebp),%eax
081ac7ae +0x0ba:  mov    (%eax),%edx
081ac7b0 +0x0bc:  mov    0xc(%ebp),%eax
081ac7b3 +0x0bf:  mov    (%eax),%eax
081ac7b5 +0x0c1:  cmp    %eax,%edx
081ac7b7 +0x0c3:  sete   %al
081ac7ba +0x0c6:  pop    %ebp
081ac7bb +0x0c7:  ret
081ac7bc +0x0c8:  push   %ebp
081ac7bd +0x0c9:  mov    %esp,%ebp
081ac7bf +0x0cb:  push   %ebx
081ac7c0 +0x0cc:  sub    $0x24,%esp
081ac7c3 +0x0cf:  mov    0x8(%ebp),%ebx
081ac7c6 +0x0d2:  mov    0xc(%ebp),%eax
081ac7c9 +0x0d5:  mov    (%eax),%eax
081ac7cb +0x0d7:  mov    %eax,-0xc(%ebp)
081ac7ce +0x0da:  lea    -0xc(%ebp),%eax
081ac7d1 +0x0dd:  mov    %eax,0x4(%esp)
081ac7d5 +0x0e1:  mov    %ebx,(%esp)
081ac7d8 +0x0e4:  call   081ac986 <+0x292>
081ac7dd +0x0e9:  mov    %ebx,%eax
081ac7df +0x0eb:  add    $0x24,%esp
081ac7e2 +0x0ee:  pop    %ebx
081ac7e3 +0x0ef:  pop    %ebp
081ac7e4 +0x0f0:  ret    $0x4
081ac7e7 +0x0f3:  nop
081ac7e8 +0x0f4:  push   %ebp
081ac7e9 +0x0f5:  mov    %esp,%ebp
081ac7eb +0x0f7:  push   %ebx
081ac7ec +0x0f8:  sub    $0x24,%esp
081ac7ef +0x0fb:  mov    0x8(%ebp),%ebx
081ac7f2 +0x0fe:  mov    0xc(%ebp),%eax
081ac7f5 +0x101:  mov    0x4(%eax),%eax
081ac7f8 +0x104:  mov    %eax,-0xc(%ebp)
081ac7fb +0x107:  lea    -0xc(%ebp),%eax
081ac7fe +0x10a:  mov    %eax,0x4(%esp)
081ac802 +0x10e:  mov    %ebx,(%esp)
081ac805 +0x111:  call   081ac986 <+0x292>
081ac80a +0x116:  mov    %ebx,%eax
081ac80c +0x118:  add    $0x24,%esp
081ac80f +0x11b:  pop    %ebx
081ac810 +0x11c:  pop    %ebp
081ac811 +0x11d:  ret    $0x4
081ac814 +0x120:  push   %ebp
081ac815 +0x121:  mov    %esp,%ebp
081ac817 +0x123:  push   %ebx
081ac818 +0x124:  sub    $0x14,%esp
081ac81b +0x127:  mov    0x8(%ebp),%eax
081ac81e +0x12a:  mov    %eax,(%esp)
081ac821 +0x12d:  call   081ac996 <+0x2a2>
081ac826 +0x132:  mov    (%eax),%ebx
081ac828 +0x134:  mov    0xc(%ebp),%eax
081ac82b +0x137:  mov    %eax,(%esp)
081ac82e +0x13a:  call   081ac996 <+0x2a2>
081ac833 +0x13f:  mov    (%eax),%eax
081ac835 +0x141:  cmp    %eax,%ebx
081ac837 +0x143:  setne  %al
081ac83a +0x146:  add    $0x14,%esp
081ac83d +0x149:  pop    %ebx
081ac83e +0x14a:  pop    %ebp
081ac83f +0x14b:  ret
081ac840 +0x14c:  push   %ebp
081ac841 +0x14d:  mov    %esp,%ebp
081ac843 +0x14f:  mov    0x8(%ebp),%eax
081ac846 +0x152:  mov    (%eax),%eax
081ac848 +0x154:  lea    0xc(%eax),%edx
081ac84b +0x157:  mov    0x8(%ebp),%eax
081ac84e +0x15a:  mov    %edx,(%eax)
081ac850 +0x15c:  mov    0x8(%ebp),%eax
081ac853 +0x15f:  pop    %ebp
081ac854 +0x160:  ret
081ac855 +0x161:  nop
081ac856 +0x162:  push   %ebp
081ac857 +0x163:  mov    %esp,%ebp
081ac859 +0x165:  mov    0x8(%ebp),%eax
081ac85c +0x168:  mov    (%eax),%eax
081ac85e +0x16a:  pop    %ebp
081ac85f +0x16b:  ret
081ac860 +0x16c:  push   %ebp
081ac861 +0x16d:  mov    %esp,%ebp
081ac863 +0x16f:  push   %ebx
081ac864 +0x170:  sub    $0x14,%esp
081ac867 +0x173:  mov    0x8(%ebp),%eax
081ac86a +0x176:  mov    %eax,(%esp)
081ac86d +0x179:  call   081ac996 <+0x2a2>
081ac872 +0x17e:  mov    (%eax),%ebx
081ac874 +0x180:  mov    0xc(%ebp),%eax
081ac877 +0x183:  mov    %eax,(%esp)
081ac87a +0x186:  call   081ac996 <+0x2a2>
081ac87f +0x18b:  mov    (%eax),%eax
081ac881 +0x18d:  cmp    %eax,%ebx
081ac883 +0x18f:  sete   %al
081ac886 +0x192:  add    $0x14,%esp
081ac889 +0x195:  pop    %ebx
081ac88a +0x196:  pop    %ebp
081ac88b +0x197:  ret
081ac88c +0x198:  push   %ebp
081ac88d +0x199:  mov    %esp,%ebp
081ac88f +0x19b:  mov    0x8(%ebp),%eax
081ac892 +0x19e:  mov    (%eax),%eax
081ac894 +0x1a0:  pop    %ebp
081ac895 +0x1a1:  ret
081ac896 +0x1a2:  push   %ebp
081ac897 +0x1a3:  mov    %esp,%ebp
081ac899 +0x1a5:  mov    0x8(%ebp),%eax
081ac89c +0x1a8:  mov    0x8(%eax),%eax
081ac89f +0x1ab:  pop    %ebp
081ac8a0 +0x1ac:  ret
081ac8a1 +0x1ad:  nop
081ac8a2 +0x1ae:  push   %ebp
081ac8a3 +0x1af:  mov    %esp,%ebp
081ac8a5 +0x1b1:  push   %esi
081ac8a6 +0x1b2:  push   %ebx
081ac8a7 +0x1b3:  sub    $0x30,%esp
081ac8aa +0x1b6:  mov    0x8(%ebp),%ebx
081ac8ad +0x1b9:  mov    0xc(%ebp),%eax
081ac8b0 +0x1bc:  mov    %eax,(%esp)
081ac8b3 +0x1bf:  call   081ac9b4 <+0x2c0>
081ac8b8 +0x1c4:  mov    %eax,%esi
081ac8ba +0x1c6:  mov    0xc(%ebp),%eax
081ac8bd +0x1c9:  mov    %eax,(%esp)
081ac8c0 +0x1cc:  call   081ac896 <+0x1a2>
081ac8c5 +0x1d1:  lea    -0x10(%ebp),%edx
081ac8c8 +0x1d4:  mov    0x10(%ebp),%ecx
081ac8cb +0x1d7:  mov    %ecx,0x10(%esp)
081ac8cf +0x1db:  mov    %esi,0xc(%esp)
081ac8d3 +0x1df:  mov    %eax,0x8(%esp)
081ac8d7 +0x1e3:  mov    0xc(%ebp),%eax
081ac8da +0x1e6:  mov    %eax,0x4(%esp)
081ac8de +0x1ea:  mov    %edx,(%esp)
081ac8e1 +0x1ed:  call   081ac9c0 <+0x2cc>
081ac8e6 +0x1f2:  sub    $0x4,%esp
081ac8e9 +0x1f5:  lea    -0xc(%ebp),%eax
081ac8ec +0x1f8:  mov    0xc(%ebp),%edx
081ac8ef +0x1fb:  mov    %edx,0x4(%esp)
081ac8f3 +0x1ff:  mov    %eax,(%esp)
081ac8f6 +0x202:  call   081ac960 <+0x26c>
081ac8fb +0x207:  sub    $0x4,%esp
081ac8fe +0x20a:  lea    -0xc(%ebp),%eax
081ac901 +0x20d:  mov    %eax,0x4(%esp)
081ac905 +0x211:  lea    -0x10(%ebp),%eax
081ac908 +0x214:  mov    %eax,(%esp)
081ac90b +0x217:  call   081ac7a8 <+0xb4>
081ac910 +0x21c:  test   %al,%al
081ac912 +0x21e:  jne    081ac939 <+0x245>
081ac914 +0x220:  mov    -0x10(%ebp),%eax
081ac917 +0x223:  mov    %eax,(%esp)
081ac91a +0x226:  call   081aca3c <+0x348>
081ac91f +0x22b:  mov    0xc(%ebp),%edx
081ac922 +0x22e:  mov    %eax,0x8(%esp)
081ac926 +0x232:  mov    0x10(%ebp),%eax
081ac929 +0x235:  mov    %eax,0x4(%esp)
081ac92d +0x239:  mov    %edx,(%esp)
081ac930 +0x23c:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
081ac935 +0x241:  test   %al,%al
081ac937 +0x243:  je     081ac94d <+0x259>
081ac939 +0x245:  mov    0xc(%ebp),%eax
081ac93c +0x248:  mov    %eax,0x4(%esp)
081ac940 +0x24c:  mov    %ebx,(%esp)
081ac943 +0x24f:  call   081ac960 <+0x26c>
081ac948 +0x254:  sub    $0x4,%esp
081ac94b +0x257:  jmp    081ac952 <+0x25e>
081ac94d +0x259:  mov    -0x10(%ebp),%eax
081ac950 +0x25c:  mov    %eax,(%ebx)
081ac952 +0x25e:  mov    %ebx,%eax
081ac954 +0x260:  lea    -0x8(%ebp),%esp
081ac957 +0x263:  add    $0x0,%esp
081ac95a +0x266:  pop    %ebx
081ac95b +0x267:  pop    %esi
081ac95c +0x268:  pop    %ebp
081ac95d +0x269:  ret    $0x4
081ac960 +0x26c:  push   %ebp
081ac961 +0x26d:  mov    %esp,%ebp
081ac963 +0x26f:  push   %ebx
081ac964 +0x270:  sub    $0x14,%esp
081ac967 +0x273:  mov    0x8(%ebp),%ebx
081ac96a +0x276:  mov    0xc(%ebp),%eax
081ac96d +0x279:  add    $0x4,%eax
081ac970 +0x27c:  mov    %eax,0x4(%esp)
081ac974 +0x280:  mov    %ebx,(%esp)
081ac977 +0x283:  call   081aca5e <+0x36a>
081ac97c +0x288:  mov    %ebx,%eax
081ac97e +0x28a:  add    $0x14,%esp
081ac981 +0x28d:  pop    %ebx
081ac982 +0x28e:  pop    %ebp
081ac983 +0x28f:  ret    $0x4
081ac986 +0x292:  push   %ebp
081ac987 +0x293:  mov    %esp,%ebp
081ac989 +0x295:  mov    0xc(%ebp),%eax
081ac98c +0x298:  mov    (%eax),%edx
081ac98e +0x29a:  mov    0x8(%ebp),%eax
081ac991 +0x29d:  mov    %edx,(%eax)
081ac993 +0x29f:  pop    %ebp
081ac994 +0x2a0:  ret
081ac995 +0x2a1:  nop
081ac996 +0x2a2:  push   %ebp
081ac997 +0x2a3:  mov    %esp,%ebp
081ac999 +0x2a5:  mov    0x8(%ebp),%eax
081ac99c +0x2a8:  pop    %ebp
081ac99d +0x2a9:  ret
081ac99e +0x2aa:  push   %ebp
081ac99f +0x2ab:  mov    %esp,%ebp
081ac9a1 +0x2ad:  mov    0x8(%ebp),%eax
081ac9a4 +0x2b0:  mov    0xc(%eax),%eax
081ac9a7 +0x2b3:  pop    %ebp
081ac9a8 +0x2b4:  ret
081ac9a9 +0x2b5:  push   %ebp
081ac9aa +0x2b6:  mov    %esp,%ebp
081ac9ac +0x2b8:  mov    0x8(%ebp),%eax
081ac9af +0x2bb:  mov    0x8(%eax),%eax
081ac9b2 +0x2be:  pop    %ebp
081ac9b3 +0x2bf:  ret
081ac9b4 +0x2c0:  push   %ebp
081ac9b5 +0x2c1:  mov    %esp,%ebp
081ac9b7 +0x2c3:  mov    0x8(%ebp),%eax
081ac9ba +0x2c6:  add    $0x4,%eax
081ac9bd +0x2c9:  pop    %ebp
081ac9be +0x2ca:  ret
081ac9bf +0x2cb:  nop
081ac9c0 +0x2cc:  push   %ebp
081ac9c1 +0x2cd:  mov    %esp,%ebp
081ac9c3 +0x2cf:  push   %ebx
081ac9c4 +0x2d0:  sub    $0x14,%esp
081ac9c7 +0x2d3:  mov    0x8(%ebp),%ebx
081ac9ca +0x2d6:  jmp    081aca18 <+0x324>
081ac9cc +0x2d8:  mov    0x10(%ebp),%eax
081ac9cf +0x2db:  mov    %eax,(%esp)
081ac9d2 +0x2de:  call   081aca6b <+0x377>
081ac9d7 +0x2e3:  mov    0xc(%ebp),%edx
081ac9da +0x2e6:  mov    0x18(%ebp),%ecx
081ac9dd +0x2e9:  mov    %ecx,0x8(%esp)
081ac9e1 +0x2ed:  mov    %eax,0x4(%esp)
081ac9e5 +0x2f1:  mov    %edx,(%esp)
081ac9e8 +0x2f4:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
081ac9ed +0x2f9:  xor    $0x1,%eax
081ac9f0 +0x2fc:  test   %al,%al
081ac9f2 +0x2fe:  je     081aca0a <+0x316>
081ac9f4 +0x300:  mov    0x10(%ebp),%eax
081ac9f7 +0x303:  mov    %eax,0x14(%ebp)
081ac9fa +0x306:  mov    0x10(%ebp),%eax
081ac9fd +0x309:  mov    %eax,(%esp)
081aca00 +0x30c:  call   081ac9a9 <+0x2b5>
081aca05 +0x311:  mov    %eax,0x10(%ebp)
081aca08 +0x314:  jmp    081aca18 <+0x324>
081aca0a +0x316:  mov    0x10(%ebp),%eax
081aca0d +0x319:  mov    %eax,(%esp)
081aca10 +0x31c:  call   081ac99e <+0x2aa>
081aca15 +0x321:  mov    %eax,0x10(%ebp)
081aca18 +0x324:  cmpl   $0x0,0x10(%ebp)
081aca1c +0x328:  setne  %al
081aca1f +0x32b:  test   %al,%al
081aca21 +0x32d:  jne    081ac9cc <+0x2d8>
081aca23 +0x32f:  mov    0x14(%ebp),%eax
081aca26 +0x332:  mov    %eax,0x4(%esp)
081aca2a +0x336:  mov    %ebx,(%esp)
081aca2d +0x339:  call   081aca5e <+0x36a>
081aca32 +0x33e:  mov    %ebx,%eax
081aca34 +0x340:  add    $0x14,%esp
081aca37 +0x343:  pop    %ebx
081aca38 +0x344:  pop    %ebp
081aca39 +0x345:  ret    $0x4
081aca3c +0x348:  push   %ebp
081aca3d +0x349:  mov    %esp,%ebp
081aca3f +0x34b:  sub    $0x28,%esp
081aca42 +0x34e:  mov    0x8(%ebp),%eax
081aca45 +0x351:  mov    %eax,(%esp)
081aca48 +0x354:  call   081aca8d <+0x399>
081aca4d +0x359:  mov    %eax,0x4(%esp)
081aca51 +0x35d:  lea    -0x9(%ebp),%eax
081aca54 +0x360:  mov    %eax,(%esp)
081aca57 +0x363:  call   081aca98 <+0x3a4>
081aca5c +0x368:  leave
081aca5d +0x369:  ret
081aca5e +0x36a:  push   %ebp
081aca5f +0x36b:  mov    %esp,%ebp
081aca61 +0x36d:  mov    0xc(%ebp),%edx
081aca64 +0x370:  mov    0x8(%ebp),%eax
081aca67 +0x373:  mov    %edx,(%eax)
081aca69 +0x375:  pop    %ebp
081aca6a +0x376:  ret
081aca6b +0x377:  push   %ebp
081aca6c +0x378:  mov    %esp,%ebp
081aca6e +0x37a:  sub    $0x28,%esp
081aca71 +0x37d:  mov    0x8(%ebp),%eax
081aca74 +0x380:  mov    %eax,(%esp)
081aca77 +0x383:  call   081acaa0 <+0x3ac>
081aca7c +0x388:  mov    %eax,0x4(%esp)
081aca80 +0x38c:  lea    -0x9(%ebp),%eax
081aca83 +0x38f:  mov    %eax,(%esp)
081aca86 +0x392:  call   081aca98 <+0x3a4>
081aca8b +0x397:  leave
081aca8c +0x398:  ret
081aca8d +0x399:  push   %ebp
081aca8e +0x39a:  mov    %esp,%ebp
081aca90 +0x39c:  mov    0x8(%ebp),%eax
081aca93 +0x39f:  add    $0x10,%eax
081aca96 +0x3a2:  pop    %ebp
081aca97 +0x3a3:  ret
081aca98 +0x3a4:  push   %ebp
081aca99 +0x3a5:  mov    %esp,%ebp
081aca9b +0x3a7:  mov    0xc(%ebp),%eax
081aca9e +0x3aa:  pop    %ebp
081aca9f +0x3ab:  ret
081acaa0 +0x3ac:  push   %ebp
081acaa1 +0x3ad:  mov    %esp,%ebp
081acaa3 +0x3af:  mov    0x8(%ebp),%eax
081acaa6 +0x3b2:  add    $0x10,%eax
081acaa9 +0x3b5:  pop    %ebp
081acaaa +0x3b6:  ret
081acaab +0x3b7:  nop
```

## 反编译 C

```c
// <global>::global @ 0x81ac6f4

/* ARAD::CeraShopPurcahseCountBonus::LoadScript() */

void ARAD::CeraShopPurcahseCountBonus::_GLOBAL__I_LoadScript(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
