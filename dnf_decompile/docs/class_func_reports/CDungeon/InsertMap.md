# InsertMap

`_ZN8CDungeon9InsertMapEiiP4CMap`

`CDungeon::InsertMap(int, int, CMap*)`

| 类 | 地址 |
|---|---|
| `CDungeon` | `0x0834b988` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834b988  _ZN8CDungeon9InsertMapEiiP4CMap
#           CDungeon::InsertMap(int, int, CMap*)
# range [0x0834b988, 0x0834be59]
0834b988 +0x000:  push   %ebp
0834b989 +0x001:  mov    %esp,%ebp
0834b98b +0x003:  sub    $0xd8,%esp
0834b991 +0x009:  mov    0x14(%ebp),%eax
0834b994 +0x00c:  mov    %eax,(%esp)
0834b997 +0x00f:  call   0830e5c0 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1a5>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1a5
0834b99c +0x014:  test   %eax,%eax
0834b99e +0x016:  sete   %al
0834b9a1 +0x019:  test   %al,%al
0834b9a3 +0x01b:  je     0834bb56 <+0x1ce>
0834b9a9 +0x021:  mov    0x10(%ebp),%eax
0834b9ac +0x024:  and    $0x1,%eax
0834b9af +0x027:  test   %al,%al
0834b9b1 +0x029:  je     0834ba12 <+0x8a>
0834b9b3 +0x02b:  movl   $0x1,-0xbc(%ebp)
0834b9bd +0x035:  lea    0x14(%ebp),%eax
0834b9c0 +0x038:  mov    %eax,0x8(%esp)
0834b9c4 +0x03c:  lea    -0xbc(%ebp),%eax
0834b9ca +0x042:  mov    %eax,0x4(%esp)
0834b9ce +0x046:  lea    -0xc4(%ebp),%eax
0834b9d4 +0x04c:  mov    %eax,(%esp)
0834b9d7 +0x04f:  call   0838a0dc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19b7c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19b7c
0834b9dc +0x054:  mov    0xc(%ebp),%edx
0834b9df +0x057:  mov    %edx,%eax
0834b9e1 +0x059:  add    %eax,%eax
0834b9e3 +0x05b:  add    %edx,%eax
0834b9e5 +0x05d:  shl    $0x3,%eax
0834b9e8 +0x060:  add    $0x1a0,%eax
0834b9ed +0x065:  add    0x8(%ebp),%eax
0834b9f0 +0x068:  lea    0x4(%eax),%ecx
0834b9f3 +0x06b:  lea    -0xc8(%ebp),%eax
0834b9f9 +0x071:  lea    -0xc4(%ebp),%edx
0834b9ff +0x077:  mov    %edx,0x8(%esp)
0834ba03 +0x07b:  mov    %ecx,0x4(%esp)
0834ba07 +0x07f:  mov    %eax,(%esp)
0834ba0a +0x082:  call   0838a10c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19bac>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19bac
0834ba0f +0x087:  sub    $0x4,%esp
0834ba12 +0x08a:  mov    0x10(%ebp),%eax
0834ba15 +0x08d:  and    $0x2,%eax
0834ba18 +0x090:  test   %eax,%eax
0834ba1a +0x092:  je     0834ba7b <+0xf3>
0834ba1c +0x094:  movl   $0x2,-0xac(%ebp)
0834ba26 +0x09e:  lea    0x14(%ebp),%eax
0834ba29 +0x0a1:  mov    %eax,0x8(%esp)
0834ba2d +0x0a5:  lea    -0xac(%ebp),%eax
0834ba33 +0x0ab:  mov    %eax,0x4(%esp)
0834ba37 +0x0af:  lea    -0xb4(%ebp),%eax
0834ba3d +0x0b5:  mov    %eax,(%esp)
0834ba40 +0x0b8:  call   0838a0dc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19b7c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19b7c
0834ba45 +0x0bd:  mov    0xc(%ebp),%edx
0834ba48 +0x0c0:  mov    %edx,%eax
0834ba4a +0x0c2:  add    %eax,%eax
0834ba4c +0x0c4:  add    %edx,%eax
0834ba4e +0x0c6:  shl    $0x3,%eax
0834ba51 +0x0c9:  add    $0x1a0,%eax
0834ba56 +0x0ce:  add    0x8(%ebp),%eax
0834ba59 +0x0d1:  lea    0x4(%eax),%ecx
0834ba5c +0x0d4:  lea    -0xb8(%ebp),%eax
0834ba62 +0x0da:  lea    -0xb4(%ebp),%edx
0834ba68 +0x0e0:  mov    %edx,0x8(%esp)
0834ba6c +0x0e4:  mov    %ecx,0x4(%esp)
0834ba70 +0x0e8:  mov    %eax,(%esp)
0834ba73 +0x0eb:  call   0838a10c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19bac>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19bac
0834ba78 +0x0f0:  sub    $0x4,%esp
0834ba7b +0x0f3:  mov    0x10(%ebp),%eax
0834ba7e +0x0f6:  and    $0x4,%eax
0834ba81 +0x0f9:  test   %eax,%eax
0834ba83 +0x0fb:  je     0834bae4 <+0x15c>
0834ba85 +0x0fd:  movl   $0x4,-0x9c(%ebp)
0834ba8f +0x107:  lea    0x14(%ebp),%eax
0834ba92 +0x10a:  mov    %eax,0x8(%esp)
0834ba96 +0x10e:  lea    -0x9c(%ebp),%eax
0834ba9c +0x114:  mov    %eax,0x4(%esp)
0834baa0 +0x118:  lea    -0xa4(%ebp),%eax
0834baa6 +0x11e:  mov    %eax,(%esp)
0834baa9 +0x121:  call   0838a0dc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19b7c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19b7c
0834baae +0x126:  mov    0xc(%ebp),%edx
0834bab1 +0x129:  mov    %edx,%eax
0834bab3 +0x12b:  add    %eax,%eax
0834bab5 +0x12d:  add    %edx,%eax
0834bab7 +0x12f:  shl    $0x3,%eax
0834baba +0x132:  add    $0x1a0,%eax
0834babf +0x137:  add    0x8(%ebp),%eax
0834bac2 +0x13a:  lea    0x4(%eax),%ecx
0834bac5 +0x13d:  lea    -0xa8(%ebp),%eax
0834bacb +0x143:  lea    -0xa4(%ebp),%edx
0834bad1 +0x149:  mov    %edx,0x8(%esp)
0834bad5 +0x14d:  mov    %ecx,0x4(%esp)
0834bad9 +0x151:  mov    %eax,(%esp)
0834badc +0x154:  call   0838a10c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19bac>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19bac
0834bae1 +0x159:  sub    $0x4,%esp
0834bae4 +0x15c:  mov    0x10(%ebp),%eax
0834bae7 +0x15f:  and    $0x8,%eax
0834baea +0x162:  test   %eax,%eax
0834baec +0x164:  je     0834be57 <+0x4cf>
0834baf2 +0x16a:  movl   $0x8,-0x8c(%ebp)
0834bafc +0x174:  lea    0x14(%ebp),%eax
0834baff +0x177:  mov    %eax,0x8(%esp)
0834bb03 +0x17b:  lea    -0x8c(%ebp),%eax
0834bb09 +0x181:  mov    %eax,0x4(%esp)
0834bb0d +0x185:  lea    -0x94(%ebp),%eax
0834bb13 +0x18b:  mov    %eax,(%esp)
0834bb16 +0x18e:  call   0838a0dc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19b7c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19b7c
0834bb1b +0x193:  mov    0xc(%ebp),%edx
0834bb1e +0x196:  mov    %edx,%eax
0834bb20 +0x198:  add    %eax,%eax
0834bb22 +0x19a:  add    %edx,%eax
0834bb24 +0x19c:  shl    $0x3,%eax
0834bb27 +0x19f:  add    $0x1a0,%eax
0834bb2c +0x1a4:  add    0x8(%ebp),%eax
0834bb2f +0x1a7:  lea    0x4(%eax),%ecx
0834bb32 +0x1aa:  lea    -0x98(%ebp),%eax
0834bb38 +0x1b0:  lea    -0x94(%ebp),%edx
0834bb3e +0x1b6:  mov    %edx,0x8(%esp)
0834bb42 +0x1ba:  mov    %ecx,0x4(%esp)
0834bb46 +0x1be:  mov    %eax,(%esp)
0834bb49 +0x1c1:  call   0838a10c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19bac>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19bac
0834bb4e +0x1c6:  sub    $0x4,%esp
0834bb51 +0x1c9:  jmp    0834be57 <+0x4cf>
0834bb56 +0x1ce:  mov    0x14(%ebp),%eax
0834bb59 +0x1d1:  mov    %eax,(%esp)
0834bb5c +0x1d4:  call   0830e5c0 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1a5>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1a5
0834bb61 +0x1d9:  cmp    $0x2,%eax
0834bb64 +0x1dc:  sete   %al
0834bb67 +0x1df:  test   %al,%al
0834bb69 +0x1e1:  je     0834bcef <+0x367>
0834bb6f +0x1e7:  mov    0x10(%ebp),%eax
0834bb72 +0x1ea:  and    $0x1,%eax
0834bb75 +0x1ed:  test   %al,%al
0834bb77 +0x1ef:  je     0834bbd2 <+0x24a>
0834bb79 +0x1f1:  movl   $0x1,-0x7c(%ebp)
0834bb80 +0x1f8:  lea    0x14(%ebp),%eax
0834bb83 +0x1fb:  mov    %eax,0x8(%esp)
0834bb87 +0x1ff:  lea    -0x7c(%ebp),%eax
0834bb8a +0x202:  mov    %eax,0x4(%esp)
0834bb8e +0x206:  lea    -0x84(%ebp),%eax
0834bb94 +0x20c:  mov    %eax,(%esp)
0834bb97 +0x20f:  call   0838a0dc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19b7c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19b7c
0834bb9c +0x214:  mov    0xc(%ebp),%edx
0834bb9f +0x217:  mov    %edx,%eax
0834bba1 +0x219:  add    %eax,%eax
0834bba3 +0x21b:  add    %edx,%eax
0834bba5 +0x21d:  shl    $0x3,%eax
0834bba8 +0x220:  add    $0x4a0,%eax
0834bbad +0x225:  add    0x8(%ebp),%eax
0834bbb0 +0x228:  lea    0x4(%eax),%ecx
0834bbb3 +0x22b:  lea    -0x88(%ebp),%eax
0834bbb9 +0x231:  lea    -0x84(%ebp),%edx
0834bbbf +0x237:  mov    %edx,0x8(%esp)
0834bbc3 +0x23b:  mov    %ecx,0x4(%esp)
0834bbc7 +0x23f:  mov    %eax,(%esp)
0834bbca +0x242:  call   0838a10c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19bac>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19bac
0834bbcf +0x247:  sub    $0x4,%esp
0834bbd2 +0x24a:  mov    0x10(%ebp),%eax
0834bbd5 +0x24d:  and    $0x2,%eax
0834bbd8 +0x250:  test   %eax,%eax
0834bbda +0x252:  je     0834bc2c <+0x2a4>
0834bbdc +0x254:  movl   $0x2,-0x6c(%ebp)
0834bbe3 +0x25b:  lea    0x14(%ebp),%eax
0834bbe6 +0x25e:  mov    %eax,0x8(%esp)
0834bbea +0x262:  lea    -0x6c(%ebp),%eax
0834bbed +0x265:  mov    %eax,0x4(%esp)
0834bbf1 +0x269:  lea    -0x74(%ebp),%eax
0834bbf4 +0x26c:  mov    %eax,(%esp)
0834bbf7 +0x26f:  call   0838a0dc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19b7c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19b7c
0834bbfc +0x274:  mov    0xc(%ebp),%edx
0834bbff +0x277:  mov    %edx,%eax
0834bc01 +0x279:  add    %eax,%eax
0834bc03 +0x27b:  add    %edx,%eax
0834bc05 +0x27d:  shl    $0x3,%eax
0834bc08 +0x280:  add    $0x4a0,%eax
0834bc0d +0x285:  add    0x8(%ebp),%eax
0834bc10 +0x288:  lea    0x4(%eax),%ecx
0834bc13 +0x28b:  lea    -0x78(%ebp),%eax
0834bc16 +0x28e:  lea    -0x74(%ebp),%edx
0834bc19 +0x291:  mov    %edx,0x8(%esp)
0834bc1d +0x295:  mov    %ecx,0x4(%esp)
0834bc21 +0x299:  mov    %eax,(%esp)
0834bc24 +0x29c:  call   0838a10c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19bac>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19bac
0834bc29 +0x2a1:  sub    $0x4,%esp
0834bc2c +0x2a4:  mov    0x10(%ebp),%eax
0834bc2f +0x2a7:  and    $0x4,%eax
0834bc32 +0x2aa:  test   %eax,%eax
0834bc34 +0x2ac:  je     0834bc86 <+0x2fe>
0834bc36 +0x2ae:  movl   $0x4,-0x5c(%ebp)
0834bc3d +0x2b5:  lea    0x14(%ebp),%eax
0834bc40 +0x2b8:  mov    %eax,0x8(%esp)
0834bc44 +0x2bc:  lea    -0x5c(%ebp),%eax
0834bc47 +0x2bf:  mov    %eax,0x4(%esp)
0834bc4b +0x2c3:  lea    -0x64(%ebp),%eax
0834bc4e +0x2c6:  mov    %eax,(%esp)
0834bc51 +0x2c9:  call   0838a0dc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19b7c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19b7c
0834bc56 +0x2ce:  mov    0xc(%ebp),%edx
0834bc59 +0x2d1:  mov    %edx,%eax
0834bc5b +0x2d3:  add    %eax,%eax
0834bc5d +0x2d5:  add    %edx,%eax
0834bc5f +0x2d7:  shl    $0x3,%eax
0834bc62 +0x2da:  add    $0x4a0,%eax
0834bc67 +0x2df:  add    0x8(%ebp),%eax
0834bc6a +0x2e2:  lea    0x4(%eax),%ecx
0834bc6d +0x2e5:  lea    -0x68(%ebp),%eax
0834bc70 +0x2e8:  lea    -0x64(%ebp),%edx
0834bc73 +0x2eb:  mov    %edx,0x8(%esp)
0834bc77 +0x2ef:  mov    %ecx,0x4(%esp)
0834bc7b +0x2f3:  mov    %eax,(%esp)
0834bc7e +0x2f6:  call   0838a10c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19bac>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19bac
0834bc83 +0x2fb:  sub    $0x4,%esp
0834bc86 +0x2fe:  mov    0x10(%ebp),%eax
0834bc89 +0x301:  and    $0x8,%eax
0834bc8c +0x304:  test   %eax,%eax
0834bc8e +0x306:  je     0834bce0 <+0x358>
0834bc90 +0x308:  movl   $0x8,-0x4c(%ebp)
0834bc97 +0x30f:  lea    0x14(%ebp),%eax
0834bc9a +0x312:  mov    %eax,0x8(%esp)
0834bc9e +0x316:  lea    -0x4c(%ebp),%eax
0834bca1 +0x319:  mov    %eax,0x4(%esp)
0834bca5 +0x31d:  lea    -0x54(%ebp),%eax
0834bca8 +0x320:  mov    %eax,(%esp)
0834bcab +0x323:  call   0838a0dc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19b7c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19b7c
0834bcb0 +0x328:  mov    0xc(%ebp),%edx
0834bcb3 +0x32b:  mov    %edx,%eax
0834bcb5 +0x32d:  add    %eax,%eax
0834bcb7 +0x32f:  add    %edx,%eax
0834bcb9 +0x331:  shl    $0x3,%eax
0834bcbc +0x334:  add    $0x4a0,%eax
0834bcc1 +0x339:  add    0x8(%ebp),%eax
0834bcc4 +0x33c:  lea    0x4(%eax),%ecx
0834bcc7 +0x33f:  lea    -0x58(%ebp),%eax
0834bcca +0x342:  lea    -0x54(%ebp),%edx
0834bccd +0x345:  mov    %edx,0x8(%esp)
0834bcd1 +0x349:  mov    %ecx,0x4(%esp)
0834bcd5 +0x34d:  mov    %eax,(%esp)
0834bcd8 +0x350:  call   0838a10c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19bac>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19bac
0834bcdd +0x355:  sub    $0x4,%esp
0834bce0 +0x358:  mov    0x8(%ebp),%eax
0834bce3 +0x35b:  movb   $0x1,0x624(%eax)
0834bcea +0x362:  jmp    0834be57 <+0x4cf>
0834bcef +0x367:  mov    0x10(%ebp),%eax
0834bcf2 +0x36a:  and    $0x1,%eax
0834bcf5 +0x36d:  test   %al,%al
0834bcf7 +0x36f:  je     0834bd49 <+0x3c1>
0834bcf9 +0x371:  movl   $0x1,-0x3c(%ebp)
0834bd00 +0x378:  lea    0x14(%ebp),%eax
0834bd03 +0x37b:  mov    %eax,0x8(%esp)
0834bd07 +0x37f:  lea    -0x3c(%ebp),%eax
0834bd0a +0x382:  mov    %eax,0x4(%esp)
0834bd0e +0x386:  lea    -0x44(%ebp),%eax
0834bd11 +0x389:  mov    %eax,(%esp)
0834bd14 +0x38c:  call   0838a0dc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19b7c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19b7c
0834bd19 +0x391:  mov    0xc(%ebp),%edx
0834bd1c +0x394:  mov    %edx,%eax
0834bd1e +0x396:  add    %eax,%eax
0834bd20 +0x398:  add    %edx,%eax
0834bd22 +0x39a:  shl    $0x3,%eax
0834bd25 +0x39d:  add    $0x320,%eax
0834bd2a +0x3a2:  add    0x8(%ebp),%eax
0834bd2d +0x3a5:  lea    0x4(%eax),%ecx
0834bd30 +0x3a8:  lea    -0x48(%ebp),%eax
0834bd33 +0x3ab:  lea    -0x44(%ebp),%edx
0834bd36 +0x3ae:  mov    %edx,0x8(%esp)
0834bd3a +0x3b2:  mov    %ecx,0x4(%esp)
0834bd3e +0x3b6:  mov    %eax,(%esp)
0834bd41 +0x3b9:  call   0838a10c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19bac>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19bac
0834bd46 +0x3be:  sub    $0x4,%esp
0834bd49 +0x3c1:  mov    0x10(%ebp),%eax
0834bd4c +0x3c4:  and    $0x2,%eax
0834bd4f +0x3c7:  test   %eax,%eax
0834bd51 +0x3c9:  je     0834bda3 <+0x41b>
0834bd53 +0x3cb:  movl   $0x2,-0x2c(%ebp)
0834bd5a +0x3d2:  lea    0x14(%ebp),%eax
0834bd5d +0x3d5:  mov    %eax,0x8(%esp)
0834bd61 +0x3d9:  lea    -0x2c(%ebp),%eax
0834bd64 +0x3dc:  mov    %eax,0x4(%esp)
0834bd68 +0x3e0:  lea    -0x34(%ebp),%eax
0834bd6b +0x3e3:  mov    %eax,(%esp)
0834bd6e +0x3e6:  call   0838a0dc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19b7c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19b7c
0834bd73 +0x3eb:  mov    0xc(%ebp),%edx
0834bd76 +0x3ee:  mov    %edx,%eax
0834bd78 +0x3f0:  add    %eax,%eax
0834bd7a +0x3f2:  add    %edx,%eax
0834bd7c +0x3f4:  shl    $0x3,%eax
0834bd7f +0x3f7:  add    $0x320,%eax
0834bd84 +0x3fc:  add    0x8(%ebp),%eax
0834bd87 +0x3ff:  lea    0x4(%eax),%ecx
0834bd8a +0x402:  lea    -0x38(%ebp),%eax
0834bd8d +0x405:  lea    -0x34(%ebp),%edx
0834bd90 +0x408:  mov    %edx,0x8(%esp)
0834bd94 +0x40c:  mov    %ecx,0x4(%esp)
0834bd98 +0x410:  mov    %eax,(%esp)
0834bd9b +0x413:  call   0838a10c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19bac>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19bac
0834bda0 +0x418:  sub    $0x4,%esp
0834bda3 +0x41b:  mov    0x10(%ebp),%eax
0834bda6 +0x41e:  and    $0x4,%eax
0834bda9 +0x421:  test   %eax,%eax
0834bdab +0x423:  je     0834bdfd <+0x475>
0834bdad +0x425:  movl   $0x4,-0x1c(%ebp)
0834bdb4 +0x42c:  lea    0x14(%ebp),%eax
0834bdb7 +0x42f:  mov    %eax,0x8(%esp)
0834bdbb +0x433:  lea    -0x1c(%ebp),%eax
0834bdbe +0x436:  mov    %eax,0x4(%esp)
0834bdc2 +0x43a:  lea    -0x24(%ebp),%eax
0834bdc5 +0x43d:  mov    %eax,(%esp)
0834bdc8 +0x440:  call   0838a0dc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19b7c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19b7c
0834bdcd +0x445:  mov    0xc(%ebp),%edx
0834bdd0 +0x448:  mov    %edx,%eax
0834bdd2 +0x44a:  add    %eax,%eax
0834bdd4 +0x44c:  add    %edx,%eax
0834bdd6 +0x44e:  shl    $0x3,%eax
0834bdd9 +0x451:  add    $0x320,%eax
0834bdde +0x456:  add    0x8(%ebp),%eax
0834bde1 +0x459:  lea    0x4(%eax),%ecx
0834bde4 +0x45c:  lea    -0x28(%ebp),%eax
0834bde7 +0x45f:  lea    -0x24(%ebp),%edx
0834bdea +0x462:  mov    %edx,0x8(%esp)
0834bdee +0x466:  mov    %ecx,0x4(%esp)
0834bdf2 +0x46a:  mov    %eax,(%esp)
0834bdf5 +0x46d:  call   0838a10c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19bac>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19bac
0834bdfa +0x472:  sub    $0x4,%esp
0834bdfd +0x475:  mov    0x10(%ebp),%eax
0834be00 +0x478:  and    $0x8,%eax
0834be03 +0x47b:  test   %eax,%eax
0834be05 +0x47d:  je     0834be57 <+0x4cf>
0834be07 +0x47f:  movl   $0x8,-0xc(%ebp)
0834be0e +0x486:  lea    0x14(%ebp),%eax
0834be11 +0x489:  mov    %eax,0x8(%esp)
0834be15 +0x48d:  lea    -0xc(%ebp),%eax
0834be18 +0x490:  mov    %eax,0x4(%esp)
0834be1c +0x494:  lea    -0x14(%ebp),%eax
0834be1f +0x497:  mov    %eax,(%esp)
0834be22 +0x49a:  call   0838a0dc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19b7c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19b7c
0834be27 +0x49f:  mov    0xc(%ebp),%edx
0834be2a +0x4a2:  mov    %edx,%eax
0834be2c +0x4a4:  add    %eax,%eax
0834be2e +0x4a6:  add    %edx,%eax
0834be30 +0x4a8:  shl    $0x3,%eax
0834be33 +0x4ab:  add    $0x320,%eax
0834be38 +0x4b0:  add    0x8(%ebp),%eax
0834be3b +0x4b3:  lea    0x4(%eax),%ecx
0834be3e +0x4b6:  lea    -0x18(%ebp),%eax
0834be41 +0x4b9:  lea    -0x14(%ebp),%edx
0834be44 +0x4bc:  mov    %edx,0x8(%esp)
0834be48 +0x4c0:  mov    %ecx,0x4(%esp)
0834be4c +0x4c4:  mov    %eax,(%esp)
0834be4f +0x4c7:  call   0838a10c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19bac>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19bac
0834be54 +0x4cc:  sub    $0x4,%esp
0834be57 +0x4cf:  leave
0834be58 +0x4d0:  ret
0834be59 +0x4d1:  nop
```

## 反编译 C

```c
// CDungeon::InsertMap @ 0x834b988

/* CDungeon::InsertMap(int, int, CMap*) */

void __thiscall CDungeon::InsertMap(CDungeon *this,int param_1,int param_2,CMap *param_3)

{
  int iVar1;
  pair local_cc [4];
  pair<int_const,CMap*> local_c8 [8];
  undefined4 local_c0;
  pair local_bc [4];
  pair<int_const,CMap*> local_b8 [8];
  undefined4 local_b0;
  pair local_ac [4];
  pair<int_const,CMap*> local_a8 [8];
  undefined4 local_a0;
  pair local_9c [4];
  pair<int_const,CMap*> local_98 [8];
  undefined4 local_90;
  pair local_8c [4];
  pair<int_const,CMap*> local_88 [8];
  undefined4 local_80;
  pair local_7c [4];
  pair<int_const,CMap*> local_78 [8];
  undefined4 local_70;
  pair local_6c [4];
  pair<int_const,CMap*> local_68 [8];
  undefined4 local_60;
  pair local_5c [4];
  pair<int_const,CMap*> local_58 [8];
  undefined4 local_50;
  pair local_4c [4];
  pair<int_const,CMap*> local_48 [8];
  undefined4 local_40;
  pair local_3c [4];
  pair<int_const,CMap*> local_38 [8];
  undefined4 local_30;
  pair local_2c [4];
  pair<int_const,CMap*> local_28 [8];
  undefined4 local_20;
  pair local_1c [4];
  pair<int_const,CMap*> local_18 [8];
  undefined4 local_10 [3];
  
  iVar1 = CMap::get_map_type(param_3);
  if (iVar1 == 0) {
    if ((param_2 & 1U) != 0) {
      local_c0 = 1;
      std::pair<int_const,CMap*>::pair<PATH_DIRECTION,CMap*&>
                (local_c8,(PATH_DIRECTION *)&local_c0,&param_3);
      std::multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>::insert
                (local_cc);
    }
    if ((param_2 & 2U) != 0) {
      local_b0 = 2;
      std::pair<int_const,CMap*>::pair<PATH_DIRECTION,CMap*&>
                (local_b8,(PATH_DIRECTION *)&local_b0,&param_3);
      std::multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>::insert
                (local_bc);
    }
    if ((param_2 & 4U) != 0) {
      local_a0 = 4;
      std::pair<int_const,CMap*>::pair<PATH_DIRECTION,CMap*&>
                (local_a8,(PATH_DIRECTION *)&local_a0,&param_3);
      std::multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>::insert
                (local_ac);
    }
    if ((param_2 & 8U) != 0) {
      local_90 = 8;
      std::pair<int_const,CMap*>::pair<PATH_DIRECTION,CMap*&>
                (local_98,(PATH_DIRECTION *)&local_90,&param_3);
      std::multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>::insert
                (local_9c);
    }
  }
  else {
    iVar1 = CMap::get_map_type(param_3);
    if (iVar1 == 2) {
      if ((param_2 & 1U) != 0) {
        local_80 = 1;
        std::pair<int_const,CMap*>::pair<PATH_DIRECTION,CMap*&>
                  (local_88,(PATH_DIRECTION *)&local_80,&param_3);
        std::multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>::insert
                  (local_8c);
      }
      if ((param_2 & 2U) != 0) {
        local_70 = 2;
        std::pair<int_const,CMap*>::pair<PATH_DIRECTION,CMap*&>
                  (local_78,(PATH_DIRECTION *)&local_70,&param_3);
        std::multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>::insert
                  (local_7c);
      }
      if ((param_2 & 4U) != 0) {
        local_60 = 4;
        std::pair<int_const,CMap*>::pair<PATH_DIRECTION,CMap*&>
                  (local_68,(PATH_DIRECTION *)&local_60,&param_3);
        std::multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>::insert
                  (local_6c);
      }
      if ((param_2 & 8U) != 0) {
        local_50 = 8;
        std::pair<int_const,CMap*>::pair<PATH_DIRECTION,CMap*&>
                  (local_58,(PATH_DIRECTION *)&local_50,&param_3);
        std::multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>::insert
                  (local_5c);
      }
      this[0x624] = (CDungeon)0x1;
    }
    else {
      if ((param_2 & 1U) != 0) {
        local_40 = 1;
        std::pair<int_const,CMap*>::pair<PATH_DIRECTION,CMap*&>
                  (local_48,(PATH_DIRECTION *)&local_40,&param_3);
        std::multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>::insert
                  (local_4c);
      }
      if ((param_2 & 2U) != 0) {
        local_30 = 2;
        std::pair<int_const,CMap*>::pair<PATH_DIRECTION,CMap*&>
                  (local_38,(PATH_DIRECTION *)&local_30,&param_3);
        std::multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>::insert
                  (local_3c);
      }
      if ((param_2 & 4U) != 0) {
        local_20 = 4;
        std::pair<int_const,CMap*>::pair<PATH_DIRECTION,CMap*&>
                  (local_28,(PATH_DIRECTION *)&local_20,&param_3);
        std::multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>::insert
                  (local_2c);
      }
      if ((param_2 & 8U) != 0) {
        local_10[0] = 8;
        std::pair<int_const,CMap*>::pair<PATH_DIRECTION,CMap*&>
                  (local_18,(PATH_DIRECTION *)local_10,&param_3);
        std::multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>::insert
                  (local_1c);
      }
    }
  }
  return;
}
```
