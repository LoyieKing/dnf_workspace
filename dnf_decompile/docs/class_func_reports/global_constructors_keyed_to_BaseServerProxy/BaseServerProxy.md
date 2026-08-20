# BaseServerProxy

`_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_`

`global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to BaseServerProxy` | `0x082fdd4f` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082fdd4f  _GLOBAL__I__ZN15BaseServerProxyC2EPciS0_
#           global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)
# range [0x082fdd4f, 0x082fe687]
082fdd4f +0x000:  push   %ebp
082fdd50 +0x001:  mov    %esp,%ebp
082fdd52 +0x003:  sub    $0x18,%esp
082fdd55 +0x006:  movl   $0xffff,0x4(%esp)
082fdd5d +0x00e:  movl   $0x1,(%esp)
082fdd64 +0x015:  call   082fdd0f <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
082fdd69 +0x01a:  leave
082fdd6a +0x01b:  ret
082fdd6b +0x01c:  nop
082fdd6c +0x01d:  push   %ebp
082fdd6d +0x01e:  mov    %esp,%ebp
082fdd6f +0x020:  push   %ebx
082fdd70 +0x021:  sub    $0x14,%esp
082fdd73 +0x024:  mov    0x8(%ebp),%ebx
082fdd76 +0x027:  mov    %ebx,%eax
082fdd78 +0x029:  mov    0xc(%ebp),%edx
082fdd7b +0x02c:  add    $&_ZL14gUnicodeBuffer+0x268dc,%edx
082fdd81 +0x032:  mov    %edx,0x4(%esp)
082fdd85 +0x036:  mov    %eax,(%esp)
082fdd88 +0x039:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
082fdd8d +0x03e:  mov    %ebx,%eax
082fdd8f +0x040:  mov    %ebx,%eax
082fdd91 +0x042:  add    $0x14,%esp
082fdd94 +0x045:  pop    %ebx
082fdd95 +0x046:  pop    %ebp
082fdd96 +0x047:  ret    $0x4
082fdd99 +0x04a:  push   %ebp
082fdd9a +0x04b:  mov    %esp,%ebp
082fdd9c +0x04d:  sub    $0x38,%esp
082fdd9f +0x050:  movl   $0x0,-0xc(%ebp)
082fdda6 +0x057:  movl   $0x0,0x8(%esp)
082fddae +0x05f:  movl   $0x1,0x4(%esp)
082fddb6 +0x067:  movl   $0x2,(%esp)
082fddbd +0x06e:  call   0807dab0 <_init+0x3a8>
082fddc2 +0x073:  mov    0x8(%ebp),%edx
082fddc5 +0x076:  mov    %eax,(%edx)
082fddc7 +0x078:  mov    0x8(%ebp),%eax
082fddca +0x07b:  mov    (%eax),%eax
082fddcc +0x07d:  test   %eax,%eax
082fddce +0x07f:  jns    082fddda <+0x8b>
082fddd0 +0x081:  mov    $0x1,%eax
082fddd5 +0x086:  jmp    082fde99 <+0x14a>
082fddda +0x08b:  mov    0x8(%ebp),%eax
082fdddd +0x08e:  mov    (%eax),%eax
082fdddf +0x090:  mov    %eax,(%esp)
082fdde2 +0x093:  call   082fe5fd <+0x8ae>
082fdde7 +0x098:  xor    $0x1,%eax
082fddea +0x09b:  test   %al,%al
082fddec +0x09d:  je     082fddf8 <+0xa9>
082fddee +0x09f:  mov    $0x2,%eax
082fddf3 +0x0a4:  jmp    082fde99 <+0x14a>
082fddf8 +0x0a9:  movl   $0x10,0x8(%esp)
082fde00 +0x0b1:  movl   $0x0,0x4(%esp)
082fde08 +0x0b9:  lea    -0x1c(%ebp),%eax
082fde0b +0x0bc:  mov    %eax,(%esp)
082fde0e +0x0bf:  call   0807dcc0 <_init+0x5b8>
082fde13 +0x0c4:  movw   $0x2,-0x1c(%ebp)
082fde19 +0x0ca:  mov    0xc(%ebp),%eax
082fde1c +0x0cd:  mov    %eax,(%esp)
082fde1f +0x0d0:  call   0807e530 <_init+0xe28>
082fde24 +0x0d5:  mov    %eax,-0x18(%ebp)
082fde27 +0x0d8:  mov    0x10(%ebp),%eax
082fde2a +0x0db:  movzwl %ax,%eax
082fde2d +0x0de:  mov    %eax,(%esp)
082fde30 +0x0e1:  call   0807e680 <_init+0xf78>
082fde35 +0x0e6:  mov    %ax,-0x1a(%ebp)
082fde39 +0x0ea:  lea    -0x1c(%ebp),%edx
082fde3c +0x0ed:  mov    0x8(%ebp),%eax
082fde3f +0x0f0:  mov    (%eax),%eax
082fde41 +0x0f2:  movl   $0x10,0x8(%esp)
082fde49 +0x0fa:  mov    %edx,0x4(%esp)
082fde4d +0x0fe:  mov    %eax,(%esp)
082fde50 +0x101:  call   0807e230 <_init+0xb28>
082fde55 +0x106:  mov    %eax,-0xc(%ebp)
082fde58 +0x109:  cmpl   $0x0,-0xc(%ebp)
082fde5c +0x10d:  jns    082fde94 <+0x145>
082fde5e +0x10f:  call   0807dd70 <_init+0x668>
082fde63 +0x114:  mov    (%eax),%eax
082fde65 +0x116:  cmp    $0x73,%eax
082fde68 +0x119:  je     082fde94 <+0x145>
082fde6a +0x11b:  call   0807dd70 <_init+0x668>
082fde6f +0x120:  mov    (%eax),%eax
082fde71 +0x122:  cmp    $0xb,%eax
082fde74 +0x125:  je     082fde94 <+0x145>
082fde76 +0x127:  call   0807dd70 <_init+0x668>
082fde7b +0x12c:  mov    (%eax),%eax
082fde7d +0x12e:  cmp    $0x4,%eax
082fde80 +0x131:  je     082fde94 <+0x145>
082fde82 +0x133:  call   0807dd70 <_init+0x668>
082fde87 +0x138:  mov    (%eax),%eax
082fde89 +0x13a:  test   %eax,%eax
082fde8b +0x13c:  je     082fde94 <+0x145>
082fde8d +0x13e:  mov    $0x3,%eax
082fde92 +0x143:  jmp    082fde99 <+0x14a>
082fde94 +0x145:  mov    $0x0,%eax
082fde99 +0x14a:  leave
082fde9a +0x14b:  ret
082fde9b +0x14c:  push   %ebp
082fde9c +0x14d:  mov    %esp,%ebp
082fde9e +0x14f:  sub    $0x38,%esp
082fdea1 +0x152:  movl   $0x0,-0xc(%ebp)
082fdea8 +0x159:  movl   $0x0,0x8(%esp)
082fdeb0 +0x161:  movl   $0x1,0x4(%esp)
082fdeb8 +0x169:  movl   $0x2,(%esp)
082fdebf +0x170:  call   0807dab0 <_init+0x3a8>
082fdec4 +0x175:  mov    0x8(%ebp),%edx
082fdec7 +0x178:  mov    %eax,(%edx)
082fdec9 +0x17a:  mov    0x8(%ebp),%eax
082fdecc +0x17d:  mov    (%eax),%eax
082fdece +0x17f:  test   %eax,%eax
082fded0 +0x181:  jns    082fded9 <+0x18a>
082fded2 +0x183:  mov    $0x1,%eax
082fded7 +0x188:  jmp    082fdf4b <+0x1fc>
082fded9 +0x18a:  movl   $0x10,0x8(%esp)
082fdee1 +0x192:  movl   $0x0,0x4(%esp)
082fdee9 +0x19a:  lea    -0x1c(%ebp),%eax
082fdeec +0x19d:  mov    %eax,(%esp)
082fdeef +0x1a0:  call   0807dcc0 <_init+0x5b8>
082fdef4 +0x1a5:  movw   $0x2,-0x1c(%ebp)
082fdefa +0x1ab:  mov    0xc(%ebp),%eax
082fdefd +0x1ae:  mov    %eax,(%esp)
082fdf00 +0x1b1:  call   0807e530 <_init+0xe28>
082fdf05 +0x1b6:  mov    %eax,-0x18(%ebp)
082fdf08 +0x1b9:  mov    0x10(%ebp),%eax
082fdf0b +0x1bc:  movzwl %ax,%eax
082fdf0e +0x1bf:  mov    %eax,(%esp)
082fdf11 +0x1c2:  call   0807e680 <_init+0xf78>
082fdf16 +0x1c7:  mov    %ax,-0x1a(%ebp)
082fdf1a +0x1cb:  lea    -0x1c(%ebp),%edx
082fdf1d +0x1ce:  mov    0x8(%ebp),%eax
082fdf20 +0x1d1:  mov    (%eax),%eax
082fdf22 +0x1d3:  movl   $0x10,0x8(%esp)
082fdf2a +0x1db:  mov    %edx,0x4(%esp)
082fdf2e +0x1df:  mov    %eax,(%esp)
082fdf31 +0x1e2:  call   0807e230 <_init+0xb28>
082fdf36 +0x1e7:  mov    %eax,-0xc(%ebp)
082fdf39 +0x1ea:  cmpl   $0x0,-0xc(%ebp)
082fdf3d +0x1ee:  jns    082fdf46 <+0x1f7>
082fdf3f +0x1f0:  mov    $0x3,%eax
082fdf44 +0x1f5:  jmp    082fdf4b <+0x1fc>
082fdf46 +0x1f7:  mov    $0x0,%eax
082fdf4b +0x1fc:  leave
082fdf4c +0x1fd:  ret
082fdf4d +0x1fe:  nop
082fdf4e +0x1ff:  push   %ebp
082fdf4f +0x200:  mov    %esp,%ebp
082fdf51 +0x202:  mov    0x8(%ebp),%eax
082fdf54 +0x205:  mov    (%eax),%eax
082fdf56 +0x207:  pop    %ebp
082fdf57 +0x208:  ret
082fdf58 +0x209:  push   %ebp
082fdf59 +0x20a:  mov    %esp,%ebp
082fdf5b +0x20c:  sub    $0x18,%esp
082fdf5e +0x20f:  mov    0x8(%ebp),%eax
082fdf61 +0x212:  movl   $0x0,0x4(%eax)
082fdf68 +0x219:  movl   $0x0,0x8(%eax)
082fdf6f +0x220:  mov    0x8(%ebp),%eax
082fdf72 +0x223:  mov    (%eax),%eax
082fdf74 +0x225:  movl   $0x0,0x4(%esp)
082fdf7c +0x22d:  mov    %eax,(%esp)
082fdf7f +0x230:  call   0807dd90 <_init+0x688>
082fdf84 +0x235:  mov    0x8(%ebp),%eax
082fdf87 +0x238:  mov    (%eax),%eax
082fdf89 +0x23a:  mov    %eax,(%esp)
082fdf8c +0x23d:  call   0807d860 <_init+0x158>
082fdf91 +0x242:  mov    0x8(%ebp),%eax
082fdf94 +0x245:  movl   $0xffffffff,(%eax)
082fdf9a +0x24b:  mov    0x8(%ebp),%eax
082fdf9d +0x24e:  movb   $0x0,&_ZL14gUnicodeBuffer+0x2684c(%eax)
082fdfa4 +0x255:  mov    0x8(%ebp),%eax
082fdfa7 +0x258:  movl   $0x0,&_ZL14gUnicodeBuffer+0x26850(%eax)
082fdfb1 +0x262:  mov    0x8(%ebp),%eax
082fdfb4 +0x265:  movw   $0x0,&_ZL14gUnicodeBuffer+0x26864(%eax)
082fdfbd +0x26e:  mov    0x8(%ebp),%eax
082fdfc0 +0x271:  movl   $0x0,&_ZL14gUnicodeBuffer+0x2686c(%eax)
082fdfca +0x27b:  leave
082fdfcb +0x27c:  ret
082fdfcc +0x27d:  push   %ebp
082fdfcd +0x27e:  mov    %esp,%ebp
082fdfcf +0x280:  sub    $0x38,%esp
082fdfd2 +0x283:  mov    0x8(%ebp),%eax
082fdfd5 +0x286:  mov    (%eax),%eax
082fdfd7 +0x288:  test   %eax,%eax
082fdfd9 +0x28a:  jns    082fdfe5 <+0x296>
082fdfdb +0x28c:  mov    $0xffffffff,%eax
082fdfe0 +0x291:  jmp    082fe1fc <+0x4ad>
082fdfe5 +0x296:  cmpl   $0x0,0x10(%ebp)
082fdfe9 +0x29a:  jg     082fe045 <+0x2f6>
082fdfeb +0x29c:  mov    0xc(%ebp),%eax
082fdfee +0x29f:  add    $0x1,%eax
082fdff1 +0x2a2:  movzbl (%eax),%eax
082fdff4 +0x2a5:  movsbl %al,%edx
082fdff7 +0x2a8:  mov    0xc(%ebp),%eax
082fdffa +0x2ab:  movzbl (%eax),%eax
082fdffd +0x2ae:  movsbl %al,%eax
082fe000 +0x2b1:  mov    0x10(%ebp),%ecx
082fe003 +0x2b4:  mov    %ecx,0x1c(%esp)
082fe007 +0x2b8:  mov    %edx,0x18(%esp)
082fe00b +0x2bc:  mov    %eax,0x14(%esp)
082fe00f +0x2c0:  movl   $"!!!Send Packet[(%d,%d) Size(%d) Error\n",0x10(%esp)
082fe017 +0x2c8:  movl   $0x25b,0xc(%esp)
082fe01f +0x2d0:  movl   $&_ZZN8CNetworkILi100000ELi100000EE11send_packetEPciE12__FUNCTION__,0x8(%esp)
082fe027 +0x2d8:  movl   $"Network.h",0x4(%esp)
082fe02f +0x2e0:  movl   $0x1,(%esp)
082fe036 +0x2e7:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
082fe03b +0x2ec:  mov    $0xffffffff,%eax
082fe040 +0x2f1:  jmp    082fe1fc <+0x4ad>
082fe045 +0x2f6:  movl   $0x0,-0xc(%ebp)
082fe04c +0x2fd:  call   0807dd70 <_init+0x668>
082fe051 +0x302:  movl   $0x0,(%eax)
082fe057 +0x308:  mov    0x8(%ebp),%eax
082fe05a +0x30b:  mov    %eax,(%esp)
082fe05d +0x30e:  call   082fe656 <+0x907>
082fe062 +0x313:  mov    0x8(%ebp),%eax
082fe065 +0x316:  mov    &_ZL14gUnicodeBuffer+0xe1a4(%eax),%edx
082fe06b +0x31c:  mov    0x10(%ebp),%eax
082fe06e +0x31f:  add    %eax,%edx
082fe070 +0x321:  mov    0x8(%ebp),%eax
082fe073 +0x324:  mov    %edx,&_ZL14gUnicodeBuffer+0xe1a4(%eax)
082fe079 +0x32a:  mov    0x8(%ebp),%eax
082fe07c +0x32d:  mov    &_ZL14gUnicodeBuffer+0xe1a4(%eax),%eax
082fe082 +0x333:  cmp    $&_ZL14gUnicodeBuffer+0xe174,%eax
082fe087 +0x338:  jbe    082fe105 <+0x3b6>
082fe089 +0x33a:  mov    0x8(%ebp),%eax
082fe08c +0x33d:  mov    &_ZL14gUnicodeBuffer+0xe1a4(%eax),%edx
082fe092 +0x343:  mov    0x10(%ebp),%eax
082fe095 +0x346:  sub    %eax,%edx
082fe097 +0x348:  mov    0x8(%ebp),%eax
082fe09a +0x34b:  mov    %edx,&_ZL14gUnicodeBuffer+0xe1a4(%eax)
082fe0a0 +0x351:  mov    0x8(%ebp),%eax
082fe0a3 +0x354:  mov    &_ZL14gUnicodeBuffer+0xe1a4(%eax),%edx
082fe0a9 +0x35a:  mov    0xc(%ebp),%eax
082fe0ac +0x35d:  add    $0x1,%eax
082fe0af +0x360:  movzbl (%eax),%eax
082fe0b2 +0x363:  movsbl %al,%eax
082fe0b5 +0x366:  mov    0x10(%ebp),%ecx
082fe0b8 +0x369:  mov    %ecx,0x1c(%esp)
082fe0bc +0x36d:  mov    %edx,0x18(%esp)
082fe0c0 +0x371:  mov    %eax,0x14(%esp)
082fe0c4 +0x375:  movl   $"!!!Send Packet Overflow P_TYPE[%d] Size:Remain[%d] Last[%d]",0x10(%esp)
082fe0cc +0x37d:  movl   $0x26e,0xc(%esp)
082fe0d4 +0x385:  movl   $&_ZZN8CNetworkILi100000ELi100000EE11send_packetEPciE12__FUNCTION__,0x8(%esp)
082fe0dc +0x38d:  movl   $"Network.h",0x4(%esp)
082fe0e4 +0x395:  movl   $0x1,(%esp)
082fe0eb +0x39c:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
082fe0f0 +0x3a1:  mov    0x8(%ebp),%eax
082fe0f3 +0x3a4:  mov    %eax,(%esp)
082fe0f6 +0x3a7:  call   082fe66e <+0x91f>
082fe0fb +0x3ac:  mov    $0xffffffff,%eax
082fe100 +0x3b1:  jmp    082fe1fc <+0x4ad>
082fe105 +0x3b6:  mov    0x8(%ebp),%eax
082fe108 +0x3b9:  mov    &_ZL14gUnicodeBuffer+0xe1a8(%eax),%eax
082fe10e +0x3bf:  mov    0x8(%ebp),%edx
082fe111 +0x3c2:  add    $&_ZL14gUnicodeBuffer+0xe1ac,%edx
082fe117 +0x3c8:  cmp    %edx,%eax
082fe119 +0x3ca:  jb     082fe137 <+0x3e8>
082fe11b +0x3cc:  mov    0x8(%ebp),%eax
082fe11e +0x3cf:  mov    &_ZL14gUnicodeBuffer+0xe1a8(%eax),%eax
082fe124 +0x3d5:  mov    0x8(%ebp),%edx
082fe127 +0x3d8:  add    $&_ZL14gUnicodeBuffer+0xe1ac,%edx
082fe12d +0x3de:  add    $&_ZL14gUnicodeBuffer+0xe174,%edx
082fe133 +0x3e4:  cmp    %edx,%eax
082fe135 +0x3e6:  jb     082fe1b0 <+0x461>
082fe137 +0x3e8:  mov    0x8(%ebp),%eax
082fe13a +0x3eb:  mov    &_ZL14gUnicodeBuffer+0xe1a4(%eax),%edx
082fe140 +0x3f1:  mov    0x10(%ebp),%eax
082fe143 +0x3f4:  sub    %eax,%edx
082fe145 +0x3f6:  mov    0x8(%ebp),%eax
082fe148 +0x3f9:  mov    %edx,&_ZL14gUnicodeBuffer+0xe1a4(%eax)
082fe14e +0x3ff:  mov    0x8(%ebp),%eax
082fe151 +0x402:  mov    &_ZL14gUnicodeBuffer+0xe1a4(%eax),%edx
082fe157 +0x408:  mov    0xc(%ebp),%eax
082fe15a +0x40b:  add    $0x1,%eax
082fe15d +0x40e:  movzbl (%eax),%eax
082fe160 +0x411:  movsbl %al,%eax
082fe163 +0x414:  mov    0x10(%ebp),%ecx
082fe166 +0x417:  mov    %ecx,0x1c(%esp)
082fe16a +0x41b:  mov    %edx,0x18(%esp)
082fe16e +0x41f:  mov    %eax,0x14(%esp)
082fe172 +0x423:  movl   $"!!!Send Packet Buffer error P_TYPE[%d] Size:Remain[%d] Last[%d]",0x10(%esp)
082fe17a +0x42b:  movl   $0x277,0xc(%esp)
082fe182 +0x433:  movl   $&_ZZN8CNetworkILi100000ELi100000EE11send_packetEPciE12__FUNCTION__,0x8(%esp)
082fe18a +0x43b:  movl   $"Network.h",0x4(%esp)
082fe192 +0x443:  movl   $0x1,(%esp)
082fe199 +0x44a:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
082fe19e +0x44f:  mov    0x8(%ebp),%eax
082fe1a1 +0x452:  mov    %eax,(%esp)
082fe1a4 +0x455:  call   082fe66e <+0x91f>
082fe1a9 +0x45a:  mov    $0xffffffff,%eax
082fe1ae +0x45f:  jmp    082fe1fc <+0x4ad>
082fe1b0 +0x461:  mov    0x10(%ebp),%edx
082fe1b3 +0x464:  mov    0x8(%ebp),%eax
082fe1b6 +0x467:  mov    &_ZL14gUnicodeBuffer+0xe1a8(%eax),%eax
082fe1bc +0x46d:  mov    %edx,0x8(%esp)
082fe1c0 +0x471:  mov    0xc(%ebp),%edx
082fe1c3 +0x474:  mov    %edx,0x4(%esp)
082fe1c7 +0x478:  mov    %eax,(%esp)
082fe1ca +0x47b:  call   0807d8a0 <_init+0x198>
082fe1cf +0x480:  mov    0x8(%ebp),%eax
082fe1d2 +0x483:  mov    &_ZL14gUnicodeBuffer+0xe1a8(%eax),%edx
082fe1d8 +0x489:  mov    0x10(%ebp),%eax
082fe1db +0x48c:  add    %eax,%edx
082fe1dd +0x48e:  mov    0x8(%ebp),%eax
082fe1e0 +0x491:  mov    %edx,&_ZL14gUnicodeBuffer+0xe1a8(%eax)
082fe1e6 +0x497:  mov    0x8(%ebp),%eax
082fe1e9 +0x49a:  mov    %eax,(%esp)
082fe1ec +0x49d:  call   082fe66e <+0x91f>
082fe1f1 +0x4a2:  mov    0x8(%ebp),%eax
082fe1f4 +0x4a5:  mov    %eax,(%esp)
082fe1f7 +0x4a8:  call   082fe352 <+0x603>
082fe1fc +0x4ad:  leave
082fe1fd +0x4ae:  ret
082fe1fe +0x4af:  push   %ebp
082fe1ff +0x4b0:  mov    %esp,%ebp
082fe201 +0x4b2:  push   %edi
082fe202 +0x4b3:  push   %esi
082fe203 +0x4b4:  push   %ebx
082fe204 +0x4b5:  sub    $0x4c,%esp
082fe207 +0x4b8:  mov    0x8(%ebp),%eax
082fe20a +0x4bb:  mov    (%eax),%eax
082fe20c +0x4bd:  test   %eax,%eax
082fe20e +0x4bf:  jns    082fe21a <+0x4cb>
082fe210 +0x4c1:  mov    $0x0,%eax
082fe215 +0x4c6:  jmp    082fe34a <+0x5fb>
082fe21a +0x4cb:  call   0807dd70 <_init+0x668>
082fe21f +0x4d0:  movl   $0x0,(%eax)
082fe225 +0x4d6:  mov    0x8(%ebp),%eax
082fe228 +0x4d9:  mov    0x18(%eax),%eax
082fe22b +0x4dc:  mov    $&_ZL14gUnicodeBuffer+0xe174,%edx
082fe230 +0x4e1:  mov    %edx,%ecx
082fe232 +0x4e3:  sub    %eax,%ecx
082fe234 +0x4e5:  mov    %ecx,%eax
082fe236 +0x4e7:  mov    %eax,-0x20(%ebp)
082fe239 +0x4ea:  cmpl   $0x0,-0x20(%ebp)
082fe23d +0x4ee:  jne    082fe263 <+0x514>
082fe23f +0x4f0:  mov    0x8(%ebp),%eax
082fe242 +0x4f3:  lea    0x30(%eax),%edx
082fe245 +0x4f6:  mov    0x8(%ebp),%eax
082fe248 +0x4f9:  mov    %edx,0x2c(%eax)
082fe24b +0x4fc:  mov    0x8(%ebp),%eax
082fe24e +0x4ff:  movl   $0x0,0x18(%eax)
082fe255 +0x506:  movl   $&_ZL14gUnicodeBuffer+0xe174,-0x20(%ebp)
082fe25c +0x50d:  mov    0x8(%ebp),%eax
082fe25f +0x510:  movb   $0x0,0x29(%eax)
082fe263 +0x514:  mov    -0x20(%ebp),%ecx
082fe266 +0x517:  mov    0x8(%ebp),%eax
082fe269 +0x51a:  mov    0x2c(%eax),%edx
082fe26c +0x51d:  mov    0x8(%ebp),%eax
082fe26f +0x520:  mov    (%eax),%eax
082fe271 +0x522:  mov    %ecx,0x8(%esp)
082fe275 +0x526:  mov    %edx,0x4(%esp)
082fe279 +0x52a:  mov    %eax,(%esp)
082fe27c +0x52d:  call   0807de60 <_init+0x758>
082fe281 +0x532:  mov    %eax,-0x1c(%ebp)
082fe284 +0x535:  mov    -0x1c(%ebp),%eax
082fe287 +0x538:  shr    $0x1f,%eax
082fe28a +0x53b:  test   %al,%al
082fe28c +0x53d:  je     082fe33a <+0x5eb>
082fe292 +0x543:  call   0807dd70 <_init+0x668>
082fe297 +0x548:  mov    (%eax),%eax
082fe299 +0x54a:  cmp    $0xb,%eax
082fe29c +0x54d:  je     082fe2cd <+0x57e>
082fe29e +0x54f:  call   0807dd70 <_init+0x668>
082fe2a3 +0x554:  mov    (%eax),%eax
082fe2a5 +0x556:  cmp    $0x4,%eax
082fe2a8 +0x559:  je     082fe2cd <+0x57e>
082fe2aa +0x55b:  call   0807dd70 <_init+0x668>
082fe2af +0x560:  mov    (%eax),%eax
082fe2b1 +0x562:  cmp    $0xb,%eax
082fe2b4 +0x565:  je     082fe2cd <+0x57e>
082fe2b6 +0x567:  call   0807dd70 <_init+0x668>
082fe2bb +0x56c:  mov    (%eax),%eax
082fe2bd +0x56e:  test   %eax,%eax
082fe2bf +0x570:  je     082fe2cd <+0x57e>
082fe2c1 +0x572:  call   0807dd70 <_init+0x668>
082fe2c6 +0x577:  mov    (%eax),%eax
082fe2c8 +0x579:  cmp    $0x73,%eax
082fe2cb +0x57c:  jne    082fe2d4 <+0x585>
082fe2cd +0x57e:  mov    $0x0,%eax
082fe2d2 +0x583:  jmp    082fe34a <+0x5fb>
082fe2d4 +0x585:  call   0807dd70 <_init+0x668>
082fe2d9 +0x58a:  mov    (%eax),%eax
082fe2db +0x58c:  mov    %eax,(%esp)
082fe2de +0x58f:  call   0807d730 <_init+0x28>
082fe2e3 +0x594:  mov    %eax,%ebx
082fe2e5 +0x596:  call   0807dd70 <_init+0x668>
082fe2ea +0x59b:  mov    (%eax),%edi
082fe2ec +0x59d:  mov    0x8(%ebp),%eax
082fe2ef +0x5a0:  mov    (%eax),%esi
082fe2f1 +0x5a2:  movl   $0x0,0xc(%esp)
082fe2f9 +0x5aa:  movl   $0x210,0x8(%esp)
082fe301 +0x5b2:  movl   $&_ZZN8CNetworkILi100000ELi100000EE11recv_packetEvE12__FUNCTION__,0x4(%esp)
082fe309 +0x5ba:  lea    -0x30(%ebp),%eax
082fe30c +0x5bd:  mov    %eax,(%esp)
082fe30f +0x5c0:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082fe314 +0x5c5:  mov    %ebx,0x10(%esp)
082fe318 +0x5c9:  mov    %edi,0xc(%esp)
082fe31c +0x5cd:  mov    %esi,0x8(%esp)
082fe320 +0x5d1:  movl   $"RECV ERROR DISCONNNECT NOW FD[%d] : %d(%s)",0x4(%esp)
082fe328 +0x5d9:  lea    -0x30(%ebp),%eax
082fe32b +0x5dc:  mov    %eax,(%esp)
082fe32e +0x5df:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082fe333 +0x5e4:  mov    $0xffffffff,%eax
082fe338 +0x5e9:  jmp    082fe34a <+0x5fb>
082fe33a +0x5eb:  cmpl   $0x0,-0x1c(%ebp)
082fe33e +0x5ef:  jne    082fe347 <+0x5f8>
082fe340 +0x5f1:  mov    $0xffffffff,%eax
082fe345 +0x5f6:  jmp    082fe34a <+0x5fb>
082fe347 +0x5f8:  mov    -0x1c(%ebp),%eax
082fe34a +0x5fb:  add    $0x4c,%esp
082fe34d +0x5fe:  pop    %ebx
082fe34e +0x5ff:  pop    %esi
082fe34f +0x600:  pop    %edi
082fe350 +0x601:  pop    %ebp
082fe351 +0x602:  ret
082fe352 +0x603:  push   %ebp
082fe353 +0x604:  mov    %esp,%ebp
082fe355 +0x606:  push   %edi
082fe356 +0x607:  push   %esi
082fe357 +0x608:  push   %ebx
082fe358 +0x609:  sub    $0x4c,%esp
082fe35b +0x60c:  movl   $0x0,-0x1c(%ebp)
082fe362 +0x613:  mov    0x8(%ebp),%eax
082fe365 +0x616:  mov    &_ZL14gUnicodeBuffer+0xe1a4(%eax),%eax
082fe36b +0x61c:  test   %eax,%eax
082fe36d +0x61e:  jne    082fe379 <+0x62a>
082fe36f +0x620:  mov    $0x0,%eax
082fe374 +0x625:  jmp    082fe5f5 <+0x8a6>
082fe379 +0x62a:  mov    0x8(%ebp),%eax
082fe37c +0x62d:  mov    %eax,(%esp)
082fe37f +0x630:  call   082fe656 <+0x907>
082fe384 +0x635:  mov    0x8(%ebp),%eax
082fe387 +0x638:  mov    &_ZL14gUnicodeBuffer+0xe1a4(%eax),%edx
082fe38d +0x63e:  mov    0x8(%ebp),%eax
082fe390 +0x641:  lea    &_ZL14gUnicodeBuffer+0xe1ac(%eax),%ecx
082fe396 +0x647:  mov    0x8(%ebp),%eax
082fe399 +0x64a:  mov    (%eax),%eax
082fe39b +0x64c:  mov    %edx,0x8(%esp)
082fe39f +0x650:  mov    %ecx,0x4(%esp)
082fe3a3 +0x654:  mov    %eax,(%esp)
082fe3a6 +0x657:  call   0807e830 <_init+0x1128>
082fe3ab +0x65c:  mov    %eax,-0x1c(%ebp)
082fe3ae +0x65f:  cmpl   $0x0,-0x1c(%ebp)
082fe3b2 +0x663:  setle  %al
082fe3b5 +0x666:  test   %al,%al
082fe3b7 +0x668:  je     082fe481 <+0x732>
082fe3bd +0x66e:  call   0807dd70 <_init+0x668>
082fe3c2 +0x673:  mov    (%eax),%eax
082fe3c4 +0x675:  cmp    $0xb,%eax
082fe3c7 +0x678:  je     082fe3f8 <+0x6a9>
082fe3c9 +0x67a:  call   0807dd70 <_init+0x668>
082fe3ce +0x67f:  mov    (%eax),%eax
082fe3d0 +0x681:  cmp    $0x4,%eax
082fe3d3 +0x684:  je     082fe3f8 <+0x6a9>
082fe3d5 +0x686:  call   0807dd70 <_init+0x668>
082fe3da +0x68b:  mov    (%eax),%eax
082fe3dc +0x68d:  cmp    $0xb,%eax
082fe3df +0x690:  je     082fe3f8 <+0x6a9>
082fe3e1 +0x692:  call   0807dd70 <_init+0x668>
082fe3e6 +0x697:  mov    (%eax),%eax
082fe3e8 +0x699:  test   %eax,%eax
082fe3ea +0x69b:  je     082fe3f8 <+0x6a9>
082fe3ec +0x69d:  call   0807dd70 <_init+0x668>
082fe3f1 +0x6a2:  mov    (%eax),%eax
082fe3f3 +0x6a4:  cmp    $0x73,%eax
082fe3f6 +0x6a7:  jne    082fe40d <+0x6be>
082fe3f8 +0x6a9:  mov    0x8(%ebp),%eax
082fe3fb +0x6ac:  mov    %eax,(%esp)
082fe3fe +0x6af:  call   082fe66e <+0x91f>
082fe403 +0x6b4:  mov    $0x0,%eax
082fe408 +0x6b9:  jmp    082fe5f5 <+0x8a6>
082fe40d +0x6be:  call   0807dd70 <_init+0x668>
082fe412 +0x6c3:  mov    (%eax),%eax
082fe414 +0x6c5:  mov    %eax,(%esp)
082fe417 +0x6c8:  call   0807d730 <_init+0x28>
082fe41c +0x6cd:  mov    %eax,%ebx
082fe41e +0x6cf:  call   0807dd70 <_init+0x668>
082fe423 +0x6d4:  mov    (%eax),%edi
082fe425 +0x6d6:  mov    0x8(%ebp),%eax
082fe428 +0x6d9:  mov    (%eax),%esi
082fe42a +0x6db:  movl   $0x0,0xc(%esp)
082fe432 +0x6e3:  movl   $0x2af,0x8(%esp)
082fe43a +0x6eb:  movl   $&_ZZN8CNetworkILi100000ELi100000EE11send_packetEvE12__FUNCTION__,0x4(%esp)
082fe442 +0x6f3:  lea    -0x2c(%ebp),%eax
082fe445 +0x6f6:  mov    %eax,(%esp)
082fe448 +0x6f9:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082fe44d +0x6fe:  mov    %ebx,0x10(%esp)
082fe451 +0x702:  mov    %edi,0xc(%esp)
082fe455 +0x706:  mov    %esi,0x8(%esp)
082fe459 +0x70a:  movl   $"SEND ERROR DISCONNNECT NOW FD[%d] : %d(%s)",0x4(%esp)
082fe461 +0x712:  lea    -0x2c(%ebp),%eax
082fe464 +0x715:  mov    %eax,(%esp)
082fe467 +0x718:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082fe46c +0x71d:  mov    0x8(%ebp),%eax
082fe46f +0x720:  mov    %eax,(%esp)
082fe472 +0x723:  call   082fe66e <+0x91f>
082fe477 +0x728:  mov    $0xffffffff,%eax
082fe47c +0x72d:  jmp    082fe5f5 <+0x8a6>
082fe481 +0x732:  cmpl   $0x0,-0x1c(%ebp)
082fe485 +0x736:  jle    082fe5e7 <+0x898>
082fe48b +0x73c:  mov    0x8(%ebp),%eax
082fe48e +0x73f:  mov    &_ZL14gUnicodeBuffer+0xe1a4(%eax),%eax
082fe494 +0x745:  cmp    -0x1c(%ebp),%eax
082fe497 +0x748:  jle    082fe568 <+0x819>
082fe49d +0x74e:  mov    0x8(%ebp),%eax
082fe4a0 +0x751:  lea    &_ZL14gUnicodeBuffer+0xe1ac(%eax),%edx
082fe4a6 +0x757:  mov    -0x1c(%ebp),%eax
082fe4a9 +0x75a:  add    %eax,%edx
082fe4ab +0x75c:  mov    0x8(%ebp),%eax
082fe4ae +0x75f:  mov    %edx,&_ZL14gUnicodeBuffer+0xe1a8(%eax)
082fe4b4 +0x765:  mov    0x8(%ebp),%eax
082fe4b7 +0x768:  mov    &_ZL14gUnicodeBuffer+0xe1a4(%eax),%edx
082fe4bd +0x76e:  mov    -0x1c(%ebp),%eax
082fe4c0 +0x771:  sub    %eax,%edx
082fe4c2 +0x773:  mov    0x8(%ebp),%eax
082fe4c5 +0x776:  mov    %edx,&_ZL14gUnicodeBuffer+0xe1a4(%eax)
082fe4cb +0x77c:  mov    0x8(%ebp),%eax
082fe4ce +0x77f:  mov    &_ZL14gUnicodeBuffer+0xe1a4(%eax),%eax
082fe4d4 +0x785:  cmp    $&_ZL14gUnicodeBuffer+0xe174,%eax
082fe4d9 +0x78a:  jbe    082fe51e <+0x7cf>
082fe4db +0x78c:  mov    0x8(%ebp),%eax
082fe4de +0x78f:  mov    &_ZL14gUnicodeBuffer+0xe1a4(%eax),%eax
082fe4e4 +0x795:  mov    %eax,0x14(%esp)
082fe4e8 +0x799:  movl   $"m_remain_sendlen < MAX_SEND_BUF :  m_remain_sendlen:%d]",0x10(%esp)
082fe4f0 +0x7a1:  movl   $0x2d1,0xc(%esp)
082fe4f8 +0x7a9:  movl   $&_ZZN8CNetworkILi100000ELi100000EE11send_packetEvE12__FUNCTION__,0x8(%esp)
082fe500 +0x7b1:  movl   $"Network.h",0x4(%esp)
082fe508 +0x7b9:  movl   $0x1,(%esp)
082fe50f +0x7c0:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
082fe514 +0x7c5:  mov    $0xffffffff,%eax
082fe519 +0x7ca:  jmp    082fe5f5 <+0x8a6>
082fe51e +0x7cf:  mov    0x8(%ebp),%eax
082fe521 +0x7d2:  mov    &_ZL14gUnicodeBuffer+0xe1a4(%eax),%edx
082fe527 +0x7d8:  mov    0x8(%ebp),%eax
082fe52a +0x7db:  mov    &_ZL14gUnicodeBuffer+0xe1a8(%eax),%eax
082fe530 +0x7e1:  mov    0x8(%ebp),%ecx
082fe533 +0x7e4:  add    $&_ZL14gUnicodeBuffer+0xe1ac,%ecx
082fe539 +0x7ea:  mov    %edx,0x8(%esp)
082fe53d +0x7ee:  mov    %eax,0x4(%esp)
082fe541 +0x7f2:  mov    %ecx,(%esp)
082fe544 +0x7f5:  call   0807d880 <_init+0x178>
082fe549 +0x7fa:  mov    0x8(%ebp),%eax
082fe54c +0x7fd:  lea    &_ZL14gUnicodeBuffer+0xe1ac(%eax),%edx
082fe552 +0x803:  mov    0x8(%ebp),%eax
082fe555 +0x806:  mov    &_ZL14gUnicodeBuffer+0xe1a4(%eax),%eax
082fe55b +0x80c:  add    %eax,%edx
082fe55d +0x80e:  mov    0x8(%ebp),%eax
082fe560 +0x811:  mov    %edx,&_ZL14gUnicodeBuffer+0xe1a8(%eax)
082fe566 +0x817:  jmp    082fe5e7 <+0x898>
082fe568 +0x819:  mov    0x8(%ebp),%eax
082fe56b +0x81c:  mov    &_ZL14gUnicodeBuffer+0xe1a4(%eax),%eax
082fe571 +0x822:  cmp    -0x1c(%ebp),%eax
082fe574 +0x825:  jge    082fe5c8 <+0x879>
082fe576 +0x827:  mov    0x8(%ebp),%eax
082fe579 +0x82a:  mov    &_ZL14gUnicodeBuffer+0xe1a4(%eax),%eax
082fe57f +0x830:  mov    -0x1c(%ebp),%edx
082fe582 +0x833:  mov    %edx,0x18(%esp)
082fe586 +0x837:  mov    %eax,0x14(%esp)
082fe58a +0x83b:  movl   $"offset error[Remain_Data: %d Send:%d]",0x10(%esp)
082fe592 +0x843:  movl   $0x2db,0xc(%esp)
082fe59a +0x84b:  movl   $&_ZZN8CNetworkILi100000ELi100000EE11send_packetEvE12__FUNCTION__,0x8(%esp)
082fe5a2 +0x853:  movl   $"Network.h",0x4(%esp)
082fe5aa +0x85b:  movl   $0x1,(%esp)
082fe5b1 +0x862:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
082fe5b6 +0x867:  mov    0x8(%ebp),%eax
082fe5b9 +0x86a:  mov    %eax,(%esp)
082fe5bc +0x86d:  call   082fe66e <+0x91f>
082fe5c1 +0x872:  mov    $0xffffffff,%eax
082fe5c6 +0x877:  jmp    082fe5f5 <+0x8a6>
082fe5c8 +0x879:  mov    0x8(%ebp),%eax
082fe5cb +0x87c:  lea    &_ZL14gUnicodeBuffer+0xe1ac(%eax),%edx
082fe5d1 +0x882:  mov    0x8(%ebp),%eax
082fe5d4 +0x885:  mov    %edx,&_ZL14gUnicodeBuffer+0xe1a8(%eax)
082fe5da +0x88b:  mov    0x8(%ebp),%eax
082fe5dd +0x88e:  movl   $0x0,&_ZL14gUnicodeBuffer+0xe1a4(%eax)
082fe5e7 +0x898:  mov    0x8(%ebp),%eax
082fe5ea +0x89b:  mov    %eax,(%esp)
082fe5ed +0x89e:  call   082fe66e <+0x91f>
082fe5f2 +0x8a3:  mov    -0x1c(%ebp),%eax
082fe5f5 +0x8a6:  add    $0x4c,%esp
082fe5f8 +0x8a9:  pop    %ebx
082fe5f9 +0x8aa:  pop    %esi
082fe5fa +0x8ab:  pop    %edi
082fe5fb +0x8ac:  pop    %ebp
082fe5fc +0x8ad:  ret
082fe5fd +0x8ae:  push   %ebp
082fe5fe +0x8af:  mov    %esp,%ebp
082fe600 +0x8b1:  sub    $0x28,%esp
082fe603 +0x8b4:  movl   $0x0,0x8(%esp)
082fe60b +0x8bc:  movl   $0x3,0x4(%esp)
082fe613 +0x8c4:  mov    0x8(%ebp),%eax
082fe616 +0x8c7:  mov    %eax,(%esp)
082fe619 +0x8ca:  call   0807e470 <_init+0xd68>
082fe61e +0x8cf:  mov    %eax,-0x10(%ebp)
082fe621 +0x8d2:  mov    -0x10(%ebp),%eax
082fe624 +0x8d5:  or     $0x8,%ah
082fe627 +0x8d8:  mov    %eax,0x8(%esp)
082fe62b +0x8dc:  movl   $0x4,0x4(%esp)
082fe633 +0x8e4:  mov    0x8(%ebp),%eax
082fe636 +0x8e7:  mov    %eax,(%esp)
082fe639 +0x8ea:  call   0807e470 <_init+0xd68>
082fe63e +0x8ef:  mov    %eax,-0xc(%ebp)
082fe641 +0x8f2:  cmpl   $0x0,-0xc(%ebp)
082fe645 +0x8f6:  jns    082fe64e <+0x8ff>
082fe647 +0x8f8:  mov    $0x0,%eax
082fe64c +0x8fd:  jmp    082fe653 <+0x904>
082fe64e +0x8ff:  mov    $0x1,%eax
082fe653 +0x904:  leave
082fe654 +0x905:  ret
082fe655 +0x906:  nop
082fe656 +0x907:  push   %ebp
082fe657 +0x908:  mov    %esp,%ebp
082fe659 +0x90a:  sub    $0x18,%esp
082fe65c +0x90d:  mov    0x8(%ebp),%eax
082fe65f +0x910:  add    $&_ZL14gUnicodeBuffer+0x268b4,%eax
082fe664 +0x915:  mov    %eax,(%esp)
082fe667 +0x918:  call   0810539e <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0x1d>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0x1d
082fe66c +0x91d:  leave
082fe66d +0x91e:  ret
082fe66e +0x91f:  push   %ebp
082fe66f +0x920:  mov    %esp,%ebp
082fe671 +0x922:  sub    $0x18,%esp
082fe674 +0x925:  mov    0x8(%ebp),%eax
082fe677 +0x928:  add    $&_ZL14gUnicodeBuffer+0x268b4,%eax
082fe67c +0x92d:  mov    %eax,(%esp)
082fe67f +0x930:  call   081053b2 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0x31>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0x31
082fe684 +0x935:  leave
082fe685 +0x936:  ret
082fe686 +0x937:  nop
082fe687 +0x938:  nop
```

## 反编译 C

```c
// <global>::global @ 0x82fdd4f

/* BaseServerProxy::BaseServerProxy(char*, int, char*) */

void BaseServerProxy::_GLOBAL__I_BaseServerProxy(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
