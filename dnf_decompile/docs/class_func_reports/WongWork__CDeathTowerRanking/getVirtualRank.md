# getVirtualRank

`_ZN8WongWork18CDeathTowerRanking14getVirtualRankEjjj`

`WongWork::CDeathTowerRanking::getVirtualRank(unsigned int, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTowerRanking` | `0x08468de0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08468de0  _ZN8WongWork18CDeathTowerRanking14getVirtualRankEjjj
#           WongWork::CDeathTowerRanking::getVirtualRank(unsigned int, unsigned int, unsigned int)
# range [0x08468de0, 0x0846966b]
08468de0 +0x000:  push   %ebp
08468de1 +0x001:  mov    %esp,%ebp
08468de3 +0x003:  push   %ebx
08468de4 +0x004:  sub    $0x144,%esp
08468dea +0x00a:  lea    -0x120(%ebp),%eax
08468df0 +0x010:  mov    %eax,(%esp)
08468df3 +0x013:  call   082a76c0 <_GLOBAL__I__ZN4CLog5this_E+0x3ae7>  ; global constructors keyed to CLog::this_+0x3ae7
08468df8 +0x018:  mov    0x10(%ebp),%eax
08468dfb +0x01b:  mov    %eax,-0x98(%ebp)
08468e01 +0x021:  mov    0x14(%ebp),%eax
08468e04 +0x024:  mov    %eax,-0x94(%ebp)
08468e0a +0x02a:  mov    0x8(%ebp),%eax
08468e0d +0x02d:  lea    0x7058(%eax),%edx
08468e13 +0x033:  lea    -0x120(%ebp),%eax
08468e19 +0x039:  mov    %eax,0x4(%esp)
08468e1d +0x03d:  mov    %edx,(%esp)
08468e20 +0x040:  call   08469ce4 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x3c7>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x3c7
08468e25 +0x045:  test   %al,%al
08468e27 +0x047:  je     08468e33 <+0x53>
08468e29 +0x049:  mov    $0xffffffff,%eax
08468e2e +0x04e:  jmp    08469667 <+0x887>
08468e33 +0x053:  mov    0x8(%ebp),%eax
08468e36 +0x056:  add    $0x7058,%eax
08468e3b +0x05b:  mov    %eax,0x4(%esp)
08468e3f +0x05f:  lea    -0x120(%ebp),%eax
08468e45 +0x065:  mov    %eax,(%esp)
08468e48 +0x068:  call   08469d30 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x413>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x413
08468e4d +0x06d:  test   %al,%al
08468e4f +0x06f:  je     08468e5f <+0x7f>
08468e51 +0x071:  mov    0x8(%ebp),%eax
08468e54 +0x074:  mov    0x70ec(%eax),%eax
08468e5a +0x07a:  jmp    08469667 <+0x887>
08468e5f +0x07f:  mov    0xc(%ebp),%eax
08468e62 +0x082:  imul   $0x390,%eax,%eax
08468e68 +0x088:  add    $0x98,%eax
08468e6d +0x08d:  add    0x8(%ebp),%eax
08468e70 +0x090:  mov    %eax,0x4(%esp)
08468e74 +0x094:  lea    -0x120(%ebp),%eax
08468e7a +0x09a:  mov    %eax,(%esp)
08468e7d +0x09d:  call   08469ce4 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x3c7>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x3c7
08468e82 +0x0a2:  test   %al,%al
08468e84 +0x0a4:  je     08468e90 <+0xb0>
08468e86 +0x0a6:  mov    $0x1,%eax
08468e8b +0x0ab:  jmp    08469667 <+0x887>
08468e90 +0x0b0:  movl   $0x0,-0x28(%ebp)
08468e97 +0x0b7:  movl   $0x0,-0x24(%ebp)
08468e9e +0x0be:  movl   $0x0,-0x20(%ebp)
08468ea5 +0x0c5:  lea    -0x80(%ebp),%eax
08468ea8 +0x0c8:  mov    %eax,(%esp)
08468eab +0x0cb:  call   08395ad2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25572>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25572
08468eb0 +0x0d0:  lea    -0x84(%ebp),%eax
08468eb6 +0x0d6:  mov    %eax,(%esp)
08468eb9 +0x0d9:  call   08395ad2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25572>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25572
08468ebe +0x0de:  movl   $0xffffffff,-0x1c(%ebp)
08468ec5 +0x0e5:  mov    0xc(%ebp),%ecx
08468ec8 +0x0e8:  mov    0x10(%ebp),%edx
08468ecb +0x0eb:  mov    %edx,%eax
08468ecd +0x0ed:  add    %eax,%eax
08468ecf +0x0ef:  add    %edx,%eax
08468ed1 +0x0f1:  shl    $0x3,%eax
08468ed4 +0x0f4:  imul   $0x12c0,%ecx,%edx
08468eda +0x0fa:  add    %edx,%eax
08468edc +0x0fc:  add    $0x1290,%eax
08468ee1 +0x101:  add    0x8(%ebp),%eax
08468ee4 +0x104:  add    $0x8,%eax
08468ee7 +0x107:  mov    %eax,(%esp)
08468eea +0x10a:  call   0846a224 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x907>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x907
08468eef +0x10f:  cmp    $0x1,%eax
08468ef2 +0x112:  seta   %al
08468ef5 +0x115:  test   %al,%al
08468ef7 +0x117:  je     08469274 <+0x494>
08468efd +0x11d:  mov    0xc(%ebp),%ecx
08468f00 +0x120:  mov    0x10(%ebp),%edx
08468f03 +0x123:  mov    %edx,%eax
08468f05 +0x125:  add    %eax,%eax
08468f07 +0x127:  add    %edx,%eax
08468f09 +0x129:  shl    $0x3,%eax
08468f0c +0x12c:  imul   $0x12c0,%ecx,%edx
08468f12 +0x132:  add    %edx,%eax
08468f14 +0x134:  add    $0x1290,%eax
08468f19 +0x139:  add    0x8(%ebp),%eax
08468f1c +0x13c:  lea    0x8(%eax),%edx
08468f1f +0x13f:  lea    -0x78(%ebp),%eax
08468f22 +0x142:  mov    %edx,0x4(%esp)
08468f26 +0x146:  mov    %eax,(%esp)
08468f29 +0x149:  call   0846a238 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x91b>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x91b
08468f2e +0x14e:  sub    $0x4,%esp
08468f31 +0x151:  lea    -0x78(%ebp),%eax
08468f34 +0x154:  mov    %eax,0x4(%esp)
08468f38 +0x158:  lea    -0x7c(%ebp),%eax
08468f3b +0x15b:  mov    %eax,(%esp)
08468f3e +0x15e:  call   0846a25e <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x941>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x941
08468f43 +0x163:  mov    -0x7c(%ebp),%eax
08468f46 +0x166:  mov    %eax,-0x84(%ebp)
08468f4c +0x16c:  mov    0xc(%ebp),%ecx
08468f4f +0x16f:  mov    0x10(%ebp),%edx
08468f52 +0x172:  mov    %edx,%eax
08468f54 +0x174:  add    %eax,%eax
08468f56 +0x176:  add    %edx,%eax
08468f58 +0x178:  shl    $0x3,%eax
08468f5b +0x17b:  imul   $0x12c0,%ecx,%edx
08468f61 +0x181:  add    %edx,%eax
08468f63 +0x183:  add    $0x1290,%eax
08468f68 +0x188:  add    0x8(%ebp),%eax
08468f6b +0x18b:  lea    0x8(%eax),%edx
08468f6e +0x18e:  lea    -0x70(%ebp),%eax
08468f71 +0x191:  mov    %edx,0x4(%esp)
08468f75 +0x195:  mov    %eax,(%esp)
08468f78 +0x198:  call   080e2622 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x3c8>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x3c8
08468f7d +0x19d:  sub    $0x4,%esp
08468f80 +0x1a0:  lea    -0x70(%ebp),%eax
08468f83 +0x1a3:  mov    %eax,0x4(%esp)
08468f87 +0x1a7:  lea    -0x74(%ebp),%eax
08468f8a +0x1aa:  mov    %eax,(%esp)
08468f8d +0x1ad:  call   0846a25e <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x941>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x941
08468f92 +0x1b2:  mov    -0x74(%ebp),%eax
08468f95 +0x1b5:  mov    %eax,-0x80(%ebp)
08468f98 +0x1b8:  lea    -0x80(%ebp),%eax
08468f9b +0x1bb:  mov    %eax,(%esp)
08468f9e +0x1be:  call   0846a26e <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x951>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x951
08468fa3 +0x1c3:  lea    -0x84(%ebp),%eax
08468fa9 +0x1c9:  mov    %eax,(%esp)
08468fac +0x1cc:  call   08395b46 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x255e6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x255e6
08468fb1 +0x1d1:  mov    (%eax),%edx
08468fb3 +0x1d3:  mov    0x14(%ebp),%eax
08468fb6 +0x1d6:  cmp    %eax,%edx
08468fb8 +0x1d8:  ja     08468fd5 <+0x1f5>
08468fba +0x1da:  lea    -0x80(%ebp),%eax
08468fbd +0x1dd:  mov    %eax,(%esp)
08468fc0 +0x1e0:  call   08395b46 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x255e6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x255e6
08468fc5 +0x1e5:  mov    (%eax),%edx
08468fc7 +0x1e7:  mov    0x14(%ebp),%eax
08468fca +0x1ea:  cmp    %eax,%edx
08468fcc +0x1ec:  jb     08468fd5 <+0x1f5>
08468fce +0x1ee:  mov    $0x1,%eax
08468fd3 +0x1f3:  jmp    08468fda <+0x1fa>
08468fd5 +0x1f5:  mov    $0x0,%eax
08468fda +0x1fa:  test   %al,%al
08468fdc +0x1fc:  je     08469274 <+0x494>
08468fe2 +0x202:  mov    0xc(%ebp),%ecx
08468fe5 +0x205:  mov    0x10(%ebp),%edx
08468fe8 +0x208:  mov    %edx,%eax
08468fea +0x20a:  add    %eax,%eax
08468fec +0x20c:  add    %edx,%eax
08468fee +0x20e:  shl    $0x3,%eax
08468ff1 +0x211:  imul   $0x12c0,%ecx,%edx
08468ff7 +0x217:  add    %edx,%eax
08468ff9 +0x219:  add    $0x1290,%eax
08468ffe +0x21e:  add    0x8(%ebp),%eax
08469001 +0x221:  lea    0x8(%eax),%ecx
08469004 +0x224:  lea    -0x68(%ebp),%eax
08469007 +0x227:  lea    0x14(%ebp),%edx
0846900a +0x22a:  mov    %edx,0x8(%esp)
0846900e +0x22e:  mov    %ecx,0x4(%esp)
08469012 +0x232:  mov    %eax,(%esp)
08469015 +0x235:  call   0846a28c <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x96f>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x96f
0846901a +0x23a:  sub    $0x4,%esp
0846901d +0x23d:  lea    -0x68(%ebp),%eax
08469020 +0x240:  mov    %eax,0x4(%esp)
08469024 +0x244:  lea    -0x6c(%ebp),%eax
08469027 +0x247:  mov    %eax,(%esp)
0846902a +0x24a:  call   0846a25e <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x941>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x941
0846902f +0x24f:  mov    -0x6c(%ebp),%eax
08469032 +0x252:  mov    %eax,-0x84(%ebp)
08469038 +0x258:  lea    -0x84(%ebp),%eax
0846903e +0x25e:  mov    %eax,(%esp)
08469041 +0x261:  call   08395b46 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x255e6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x255e6
08469046 +0x266:  mov    (%eax),%edx
08469048 +0x268:  mov    0x14(%ebp),%eax
0846904b +0x26b:  cmp    %eax,%edx
0846904d +0x26d:  jbe    084690b5 <+0x2d5>
0846904f +0x26f:  mov    0xc(%ebp),%ecx
08469052 +0x272:  mov    0x10(%ebp),%edx
08469055 +0x275:  mov    %edx,%eax
08469057 +0x277:  add    %eax,%eax
08469059 +0x279:  add    %edx,%eax
0846905b +0x27b:  shl    $0x3,%eax
0846905e +0x27e:  imul   $0x12c0,%ecx,%edx
08469064 +0x284:  add    %edx,%eax
08469066 +0x286:  add    $0x1290,%eax
0846906b +0x28b:  add    0x8(%ebp),%eax
0846906e +0x28e:  lea    0x8(%eax),%edx
08469071 +0x291:  lea    -0x60(%ebp),%eax
08469074 +0x294:  mov    %edx,0x4(%esp)
08469078 +0x298:  mov    %eax,(%esp)
0846907b +0x29b:  call   0846a238 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x91b>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x91b
08469080 +0x2a0:  sub    $0x4,%esp
08469083 +0x2a3:  lea    -0x60(%ebp),%eax
08469086 +0x2a6:  mov    %eax,0x4(%esp)
0846908a +0x2aa:  lea    -0x64(%ebp),%eax
0846908d +0x2ad:  mov    %eax,(%esp)
08469090 +0x2b0:  call   0846a25e <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x941>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x941
08469095 +0x2b5:  lea    -0x64(%ebp),%eax
08469098 +0x2b8:  mov    %eax,0x4(%esp)
0846909c +0x2bc:  lea    -0x84(%ebp),%eax
084690a2 +0x2c2:  mov    %eax,(%esp)
084690a5 +0x2c5:  call   08395b32 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x255d2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x255d2
084690aa +0x2ca:  test   %al,%al
084690ac +0x2cc:  je     084690b5 <+0x2d5>
084690ae +0x2ce:  mov    $0x1,%eax
084690b3 +0x2d3:  jmp    084690ba <+0x2da>
084690b5 +0x2d5:  mov    $0x0,%eax
084690ba +0x2da:  test   %al,%al
084690bc +0x2dc:  je     084690cc <+0x2ec>
084690be +0x2de:  lea    -0x84(%ebp),%eax
084690c4 +0x2e4:  mov    %eax,(%esp)
084690c7 +0x2e7:  call   0846a26e <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x951>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x951
084690cc +0x2ec:  mov    -0x84(%ebp),%eax
084690d2 +0x2f2:  mov    %eax,-0x80(%ebp)
084690d5 +0x2f5:  lea    -0x80(%ebp),%eax
084690d8 +0x2f8:  mov    %eax,(%esp)
084690db +0x2fb:  call   0846a2b8 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x99b>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x99b
084690e0 +0x300:  lea    -0x84(%ebp),%eax
084690e6 +0x306:  mov    %eax,(%esp)
084690e9 +0x309:  call   08395b46 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x255e6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x255e6
084690ee +0x30e:  mov    (%eax),%edx
084690f0 +0x310:  mov    0x14(%ebp),%eax
084690f3 +0x313:  cmp    %eax,%edx
084690f5 +0x315:  sete   %al
084690f8 +0x318:  test   %al,%al
084690fa +0x31a:  je     08469112 <+0x332>
084690fc +0x31c:  lea    -0x84(%ebp),%eax
08469102 +0x322:  mov    %eax,(%esp)
08469105 +0x325:  call   08395b46 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x255e6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x255e6
0846910a +0x32a:  mov    0x4(%eax),%eax
0846910d +0x32d:  jmp    08469667 <+0x887>
08469112 +0x332:  lea    -0x80(%ebp),%eax
08469115 +0x335:  mov    %eax,(%esp)
08469118 +0x338:  call   08395b46 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x255e6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x255e6
0846911d +0x33d:  mov    (%eax),%edx
0846911f +0x33f:  mov    0x14(%ebp),%eax
08469122 +0x342:  cmp    %eax,%edx
08469124 +0x344:  sete   %al
08469127 +0x347:  test   %al,%al
08469129 +0x349:  je     0846913e <+0x35e>
0846912b +0x34b:  lea    -0x80(%ebp),%eax
0846912e +0x34e:  mov    %eax,(%esp)
08469131 +0x351:  call   08395b46 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x255e6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x255e6
08469136 +0x356:  mov    0x4(%eax),%eax
08469139 +0x359:  jmp    08469667 <+0x887>
0846913e +0x35e:  lea    -0x80(%ebp),%eax
08469141 +0x361:  mov    %eax,(%esp)
08469144 +0x364:  call   08395b46 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x255e6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x255e6
08469149 +0x369:  mov    (%eax),%ebx
0846914b +0x36b:  lea    -0x84(%ebp),%eax
08469151 +0x371:  mov    %eax,(%esp)
08469154 +0x374:  call   08395b46 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x255e6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x255e6
08469159 +0x379:  mov    (%eax),%eax
0846915b +0x37b:  mov    %ebx,%edx
0846915d +0x37d:  sub    %eax,%edx
0846915f +0x37f:  mov    %edx,%eax
08469161 +0x381:  mov    %eax,-0x5c(%ebp)
08469164 +0x384:  movl   $0x1,-0x58(%ebp)
0846916b +0x38b:  lea    -0x5c(%ebp),%eax
0846916e +0x38e:  mov    %eax,0x4(%esp)
08469172 +0x392:  lea    -0x58(%ebp),%eax
08469175 +0x395:  mov    %eax,(%esp)
08469178 +0x398:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
0846917d +0x39d:  mov    (%eax),%eax
0846917f +0x39f:  mov    %eax,-0x24(%ebp)
08469182 +0x3a2:  lea    -0x80(%ebp),%eax
08469185 +0x3a5:  mov    %eax,(%esp)
08469188 +0x3a8:  call   08395b46 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x255e6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x255e6
0846918d +0x3ad:  mov    0x4(%eax),%ebx
08469190 +0x3b0:  lea    -0x84(%ebp),%eax
08469196 +0x3b6:  mov    %eax,(%esp)
08469199 +0x3b9:  call   08395b46 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x255e6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x255e6
0846919e +0x3be:  mov    0x4(%eax),%eax
084691a1 +0x3c1:  mov    %ebx,%ecx
084691a3 +0x3c3:  sub    %eax,%ecx
084691a5 +0x3c5:  mov    %ecx,%eax
084691a7 +0x3c7:  mov    %eax,%edx
084691a9 +0x3c9:  sar    $0x1f,%edx
084691ac +0x3cc:  xor    %edx,%eax
084691ae +0x3ce:  sub    %edx,%eax
084691b0 +0x3d0:  mov    %eax,-0x20(%ebp)
084691b3 +0x3d3:  mov    -0x20(%ebp),%eax
084691b6 +0x3d6:  mov    $0x0,%edx
084691bb +0x3db:  mov    %eax,-0x130(%ebp)
084691c1 +0x3e1:  mov    %edx,-0x12c(%ebp)
084691c7 +0x3e7:  fildll -0x130(%ebp)
084691cd +0x3ed:  mov    -0x24(%ebp),%eax
084691d0 +0x3f0:  mov    $0x0,%edx
084691d5 +0x3f5:  mov    %eax,-0x130(%ebp)
084691db +0x3fb:  mov    %edx,-0x12c(%ebp)
084691e1 +0x401:  fildll -0x130(%ebp)
084691e7 +0x407:  fdivrp %st,%st(1)
084691e9 +0x409:  fstps  -0x18(%ebp)
084691ec +0x40c:  mov    0x14(%ebp),%ebx
084691ef +0x40f:  lea    -0x84(%ebp),%eax
084691f5 +0x415:  mov    %eax,(%esp)
084691f8 +0x418:  call   08395b46 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x255e6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x255e6
084691fd +0x41d:  mov    (%eax),%eax
084691ff +0x41f:  mov    %ebx,%edx
08469201 +0x421:  sub    %eax,%edx
08469203 +0x423:  mov    %edx,%eax
08469205 +0x425:  mov    $0x0,%edx
0846920a +0x42a:  mov    %eax,-0x130(%ebp)
08469210 +0x430:  mov    %edx,-0x12c(%ebp)
08469216 +0x436:  fildll -0x130(%ebp)
0846921c +0x43c:  fmuls  -0x18(%ebp)
0846921f +0x43f:  fnstcw -0x132(%ebp)
08469225 +0x445:  movzwl -0x132(%ebp),%eax
0846922c +0x44c:  mov    $0xc,%ah
0846922e +0x44e:  mov    %ax,-0x134(%ebp)
08469235 +0x455:  fldcw  -0x134(%ebp)
0846923b +0x45b:  fistpll -0x130(%ebp)
08469241 +0x461:  fldcw  -0x132(%ebp)
08469247 +0x467:  mov    -0x130(%ebp),%eax
0846924d +0x46d:  mov    -0x12c(%ebp),%edx
08469253 +0x473:  mov    %eax,-0x54(%ebp)
08469256 +0x476:  movl   $0x1,-0x50(%ebp)
0846925d +0x47d:  lea    -0x54(%ebp),%eax
08469260 +0x480:  mov    %eax,0x4(%esp)
08469264 +0x484:  lea    -0x50(%ebp),%eax
08469267 +0x487:  mov    %eax,(%esp)
0846926a +0x48a:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
0846926f +0x48f:  mov    (%eax),%eax
08469271 +0x491:  mov    %eax,-0x1c(%ebp)
08469274 +0x494:  cmpl   $0x0,-0x24(%ebp)
08469278 +0x498:  jne    08469650 <+0x870>
0846927e +0x49e:  movl   $0x0,-0x14(%ebp)
08469285 +0x4a5:  movl   $0x0,-0x10(%ebp)
0846928c +0x4ac:  mov    0xc(%ebp),%ecx
0846928f +0x4af:  mov    0x10(%ebp),%edx
08469292 +0x4b2:  mov    %edx,%eax
08469294 +0x4b4:  add    %eax,%eax
08469296 +0x4b6:  add    %edx,%eax
08469298 +0x4b8:  shl    $0x3,%eax
0846929b +0x4bb:  imul   $0x12c0,%ecx,%edx
084692a1 +0x4c1:  add    %edx,%eax
084692a3 +0x4c3:  add    $0x1290,%eax
084692a8 +0x4c8:  add    0x8(%ebp),%eax
084692ab +0x4cb:  add    $0x8,%eax
084692ae +0x4ce:  mov    %eax,(%esp)
084692b1 +0x4d1:  call   0846a2d6 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x9b9>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x9b9
084692b6 +0x4d6:  xor    $0x1,%eax
084692b9 +0x4d9:  test   %al,%al
084692bb +0x4db:  je     08469374 <+0x594>
084692c1 +0x4e1:  mov    0xc(%ebp),%ecx
084692c4 +0x4e4:  mov    0x10(%ebp),%edx
084692c7 +0x4e7:  mov    %edx,%eax
084692c9 +0x4e9:  add    %eax,%eax
084692cb +0x4eb:  add    %edx,%eax
084692cd +0x4ed:  shl    $0x3,%eax
084692d0 +0x4f0:  imul   $0x12c0,%ecx,%edx
084692d6 +0x4f6:  add    %edx,%eax
084692d8 +0x4f8:  add    $0x1290,%eax
084692dd +0x4fd:  add    0x8(%ebp),%eax
084692e0 +0x500:  lea    0x8(%eax),%edx
084692e3 +0x503:  lea    -0x4c(%ebp),%eax
084692e6 +0x506:  mov    %edx,0x4(%esp)
084692ea +0x50a:  mov    %eax,(%esp)
084692ed +0x50d:  call   080e2622 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x3c8>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x3c8
084692f2 +0x512:  sub    $0x4,%esp
084692f5 +0x515:  lea    -0x4c(%ebp),%eax
084692f8 +0x518:  mov    %eax,0x4(%esp)
084692fc +0x51c:  lea    -0x88(%ebp),%eax
08469302 +0x522:  mov    %eax,(%esp)
08469305 +0x525:  call   0846a25e <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x941>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x941
0846930a +0x52a:  lea    -0x88(%ebp),%eax
08469310 +0x530:  mov    %eax,(%esp)
08469313 +0x533:  call   0846a26e <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x951>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x951
08469318 +0x538:  lea    -0x88(%ebp),%eax
0846931e +0x53e:  mov    %eax,(%esp)
08469321 +0x541:  call   08395b46 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x255e6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x255e6
08469326 +0x546:  mov    (%eax),%edx
08469328 +0x548:  mov    0x14(%ebp),%eax
0846932b +0x54b:  cmp    %eax,%edx
0846932d +0x54d:  sete   %al
08469330 +0x550:  test   %al,%al
08469332 +0x552:  je     0846934a <+0x56a>
08469334 +0x554:  lea    -0x88(%ebp),%eax
0846933a +0x55a:  mov    %eax,(%esp)
0846933d +0x55d:  call   08395b46 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x255e6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x255e6
08469342 +0x562:  mov    0x4(%eax),%eax
08469345 +0x565:  jmp    08469667 <+0x887>
0846934a +0x56a:  lea    -0x88(%ebp),%eax
08469350 +0x570:  mov    %eax,(%esp)
08469353 +0x573:  call   08395b46 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x255e6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x255e6
08469358 +0x578:  mov    (%eax),%edx
0846935a +0x57a:  mov    0x14(%ebp),%eax
0846935d +0x57d:  cmp    %eax,%edx
0846935f +0x57f:  setb   %al
08469362 +0x582:  test   %al,%al
08469364 +0x584:  je     0846936e <+0x58e>
08469366 +0x586:  mov    0x10(%ebp),%eax
08469369 +0x589:  mov    %eax,-0x10(%ebp)
0846936c +0x58c:  jmp    08469374 <+0x594>
0846936e +0x58e:  mov    0x10(%ebp),%eax
08469371 +0x591:  mov    %eax,-0x14(%ebp)
08469374 +0x594:  cmpl   $0x0,-0x14(%ebp)
08469378 +0x598:  jne    084693c8 <+0x5e8>
0846937a +0x59a:  mov    0x10(%ebp),%eax
0846937d +0x59d:  mov    %eax,-0x14(%ebp)
08469380 +0x5a0:  subl   $0x1,-0x14(%ebp)
08469384 +0x5a4:  cmpl   $0x1,-0x14(%ebp)
08469388 +0x5a8:  jbe    084693bf <+0x5df>
0846938a +0x5aa:  mov    0xc(%ebp),%ecx
0846938d +0x5ad:  mov    -0x14(%ebp),%edx
08469390 +0x5b0:  mov    %edx,%eax
08469392 +0x5b2:  add    %eax,%eax
08469394 +0x5b4:  add    %edx,%eax
08469396 +0x5b6:  shl    $0x3,%eax
08469399 +0x5b9:  imul   $0x12c0,%ecx,%edx
0846939f +0x5bf:  add    %edx,%eax
084693a1 +0x5c1:  add    $0x1290,%eax
084693a6 +0x5c6:  add    0x8(%ebp),%eax
084693a9 +0x5c9:  add    $0x8,%eax
084693ac +0x5cc:  mov    %eax,(%esp)
084693af +0x5cf:  call   0846a2d6 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x9b9>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x9b9
084693b4 +0x5d4:  test   %al,%al
084693b6 +0x5d6:  je     084693bf <+0x5df>
084693b8 +0x5d8:  mov    $0x1,%eax
084693bd +0x5dd:  jmp    084693c4 <+0x5e4>
084693bf +0x5df:  mov    $0x0,%eax
084693c4 +0x5e4:  test   %al,%al
084693c6 +0x5e6:  jne    08469380 <+0x5a0>
084693c8 +0x5e8:  cmpl   $0x0,-0x10(%ebp)
084693cc +0x5ec:  jne    0846941f <+0x63f>
084693ce +0x5ee:  mov    0x10(%ebp),%eax
084693d1 +0x5f1:  mov    %eax,-0x10(%ebp)
084693d4 +0x5f4:  addl   $0x1,-0x10(%ebp)
084693d8 +0x5f8:  cmpl   $0xc7,-0x10(%ebp)
084693df +0x5ff:  ja     08469416 <+0x636>
084693e1 +0x601:  mov    0xc(%ebp),%ecx
084693e4 +0x604:  mov    -0x10(%ebp),%edx
084693e7 +0x607:  mov    %edx,%eax
084693e9 +0x609:  add    %eax,%eax
084693eb +0x60b:  add    %edx,%eax
084693ed +0x60d:  shl    $0x3,%eax
084693f0 +0x610:  imul   $0x12c0,%ecx,%edx
084693f6 +0x616:  add    %edx,%eax
084693f8 +0x618:  add    $0x1290,%eax
084693fd +0x61d:  add    0x8(%ebp),%eax
08469400 +0x620:  add    $0x8,%eax
08469403 +0x623:  mov    %eax,(%esp)
08469406 +0x626:  call   0846a2d6 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x9b9>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x9b9
0846940b +0x62b:  test   %al,%al
0846940d +0x62d:  je     08469416 <+0x636>
0846940f +0x62f:  mov    $0x1,%eax
08469414 +0x634:  jmp    0846941b <+0x63b>
08469416 +0x636:  mov    $0x0,%eax
0846941b +0x63b:  test   %al,%al
0846941d +0x63d:  jne    084693d4 <+0x5f4>
0846941f +0x63f:  mov    0xc(%ebp),%ecx
08469422 +0x642:  mov    -0x14(%ebp),%edx
08469425 +0x645:  mov    %edx,%eax
08469427 +0x647:  add    %eax,%eax
08469429 +0x649:  add    %edx,%eax
0846942b +0x64b:  shl    $0x3,%eax
0846942e +0x64e:  imul   $0x12c0,%ecx,%edx
08469434 +0x654:  add    %edx,%eax
08469436 +0x656:  add    $0x1290,%eax
0846943b +0x65b:  add    0x8(%ebp),%eax
0846943e +0x65e:  add    $0x8,%eax
08469441 +0x661:  mov    %eax,(%esp)
08469444 +0x664:  call   0846a2d6 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x9b9>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x9b9
08469449 +0x669:  test   %al,%al
0846944b +0x66b:  jne    0846947b <+0x69b>
0846944d +0x66d:  mov    0xc(%ebp),%ecx
08469450 +0x670:  mov    -0x10(%ebp),%edx
08469453 +0x673:  mov    %edx,%eax
08469455 +0x675:  add    %eax,%eax
08469457 +0x677:  add    %edx,%eax
08469459 +0x679:  shl    $0x3,%eax
0846945c +0x67c:  imul   $0x12c0,%ecx,%edx
08469462 +0x682:  add    %edx,%eax
08469464 +0x684:  add    $0x1290,%eax
08469469 +0x689:  add    0x8(%ebp),%eax
0846946c +0x68c:  add    $0x8,%eax
0846946f +0x68f:  mov    %eax,(%esp)
08469472 +0x692:  call   0846a2d6 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x9b9>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x9b9
08469477 +0x697:  test   %al,%al
08469479 +0x699:  je     08469482 <+0x6a2>
0846947b +0x69b:  mov    $0x1,%eax
08469480 +0x6a0:  jmp    08469487 <+0x6a7>
08469482 +0x6a2:  mov    $0x0,%eax
08469487 +0x6a7:  test   %al,%al
08469489 +0x6a9:  je     08469495 <+0x6b5>
0846948b +0x6ab:  mov    $0xffffffff,%eax
08469490 +0x6b0:  jmp    08469667 <+0x887>
08469495 +0x6b5:  mov    0xc(%ebp),%ecx
08469498 +0x6b8:  mov    -0x14(%ebp),%edx
0846949b +0x6bb:  mov    %edx,%eax
0846949d +0x6bd:  add    %eax,%eax
0846949f +0x6bf:  add    %edx,%eax
084694a1 +0x6c1:  shl    $0x3,%eax
084694a4 +0x6c4:  imul   $0x12c0,%ecx,%edx
084694aa +0x6ca:  add    %edx,%eax
084694ac +0x6cc:  add    $0x1290,%eax
084694b1 +0x6d1:  add    0x8(%ebp),%eax
084694b4 +0x6d4:  lea    0x8(%eax),%edx
084694b7 +0x6d7:  lea    -0x44(%ebp),%eax
084694ba +0x6da:  mov    %edx,0x4(%esp)
084694be +0x6de:  mov    %eax,(%esp)
084694c1 +0x6e1:  call   0846a238 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x91b>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x91b
084694c6 +0x6e6:  sub    $0x4,%esp
084694c9 +0x6e9:  lea    -0x44(%ebp),%eax
084694cc +0x6ec:  mov    %eax,0x4(%esp)
084694d0 +0x6f0:  lea    -0x48(%ebp),%eax
084694d3 +0x6f3:  mov    %eax,(%esp)
084694d6 +0x6f6:  call   0846a25e <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x941>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x941
084694db +0x6fb:  mov    -0x48(%ebp),%eax
084694de +0x6fe:  mov    %eax,-0x80(%ebp)
084694e1 +0x701:  mov    0xc(%ebp),%ecx
084694e4 +0x704:  mov    -0x10(%ebp),%edx
084694e7 +0x707:  mov    %edx,%eax
084694e9 +0x709:  add    %eax,%eax
084694eb +0x70b:  add    %edx,%eax
084694ed +0x70d:  shl    $0x3,%eax
084694f0 +0x710:  imul   $0x12c0,%ecx,%edx
084694f6 +0x716:  add    %edx,%eax
084694f8 +0x718:  add    $0x1290,%eax
084694fd +0x71d:  add    0x8(%ebp),%eax
08469500 +0x720:  lea    0x8(%eax),%edx
08469503 +0x723:  lea    -0x3c(%ebp),%eax
08469506 +0x726:  mov    %edx,0x4(%esp)
0846950a +0x72a:  mov    %eax,(%esp)
0846950d +0x72d:  call   080e2622 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x3c8>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x3c8
08469512 +0x732:  sub    $0x4,%esp
08469515 +0x735:  lea    -0x3c(%ebp),%eax
08469518 +0x738:  mov    %eax,0x4(%esp)
0846951c +0x73c:  lea    -0x40(%ebp),%eax
0846951f +0x73f:  mov    %eax,(%esp)
08469522 +0x742:  call   0846a25e <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x941>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x941
08469527 +0x747:  mov    -0x40(%ebp),%eax
0846952a +0x74a:  mov    %eax,-0x84(%ebp)
08469530 +0x750:  lea    -0x84(%ebp),%eax
08469536 +0x756:  mov    %eax,(%esp)
08469539 +0x759:  call   0846a26e <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x951>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x951
0846953e +0x75e:  mov    -0x14(%ebp),%eax
08469541 +0x761:  mov    -0x10(%ebp),%edx
08469544 +0x764:  mov    %edx,%ecx
08469546 +0x766:  sub    %eax,%ecx
08469548 +0x768:  mov    %ecx,%eax
0846954a +0x76a:  mov    %eax,-0x38(%ebp)
0846954d +0x76d:  movl   $0x1,-0x34(%ebp)
08469554 +0x774:  lea    -0x38(%ebp),%eax
08469557 +0x777:  mov    %eax,0x4(%esp)
0846955b +0x77b:  lea    -0x34(%ebp),%eax
0846955e +0x77e:  mov    %eax,(%esp)
08469561 +0x781:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
08469566 +0x786:  mov    (%eax),%eax
08469568 +0x788:  mov    %eax,-0x28(%ebp)
0846956b +0x78b:  lea    -0x80(%ebp),%eax
0846956e +0x78e:  mov    %eax,(%esp)
08469571 +0x791:  call   08395b46 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x255e6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x255e6
08469576 +0x796:  mov    0x4(%eax),%ebx
08469579 +0x799:  lea    -0x84(%ebp),%eax
0846957f +0x79f:  mov    %eax,(%esp)
08469582 +0x7a2:  call   08395b46 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x255e6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x255e6
08469587 +0x7a7:  mov    0x4(%eax),%eax
0846958a +0x7aa:  mov    %ebx,%edx
0846958c +0x7ac:  sub    %eax,%edx
0846958e +0x7ae:  mov    %edx,%eax
08469590 +0x7b0:  mov    %eax,%edx
08469592 +0x7b2:  sar    $0x1f,%edx
08469595 +0x7b5:  xor    %edx,%eax
08469597 +0x7b7:  sub    %edx,%eax
08469599 +0x7b9:  mov    %eax,-0x20(%ebp)
0846959c +0x7bc:  mov    -0x20(%ebp),%eax
0846959f +0x7bf:  mov    $0x0,%edx
084695a4 +0x7c4:  mov    %eax,-0x130(%ebp)
084695aa +0x7ca:  mov    %edx,-0x12c(%ebp)
084695b0 +0x7d0:  fildll -0x130(%ebp)
084695b6 +0x7d6:  mov    -0x28(%ebp),%eax
084695b9 +0x7d9:  mov    $0x0,%edx
084695be +0x7de:  mov    %eax,-0x130(%ebp)
084695c4 +0x7e4:  mov    %edx,-0x12c(%ebp)
084695ca +0x7ea:  fildll -0x130(%ebp)
084695d0 +0x7f0:  fdivrp %st,%st(1)
084695d2 +0x7f2:  fstps  -0xc(%ebp)
084695d5 +0x7f5:  mov    0x10(%ebp),%eax
084695d8 +0x7f8:  mov    -0x10(%ebp),%edx
084695db +0x7fb:  mov    %edx,%ecx
084695dd +0x7fd:  sub    %eax,%ecx
084695df +0x7ff:  mov    %ecx,%eax
084695e1 +0x801:  mov    $0x0,%edx
084695e6 +0x806:  mov    %eax,-0x130(%ebp)
084695ec +0x80c:  mov    %edx,-0x12c(%ebp)
084695f2 +0x812:  fildll -0x130(%ebp)
084695f8 +0x818:  fmuls  -0xc(%ebp)
084695fb +0x81b:  fnstcw -0x132(%ebp)
08469601 +0x821:  movzwl -0x132(%ebp),%eax
08469608 +0x828:  mov    $0xc,%ah
0846960a +0x82a:  mov    %ax,-0x134(%ebp)
08469611 +0x831:  fldcw  -0x134(%ebp)
08469617 +0x837:  fistpll -0x130(%ebp)
0846961d +0x83d:  fldcw  -0x132(%ebp)
08469623 +0x843:  mov    -0x130(%ebp),%eax
08469629 +0x849:  mov    -0x12c(%ebp),%edx
0846962f +0x84f:  mov    %eax,-0x30(%ebp)
08469632 +0x852:  movl   $0x1,-0x2c(%ebp)
08469639 +0x859:  lea    -0x30(%ebp),%eax
0846963c +0x85c:  mov    %eax,0x4(%esp)
08469640 +0x860:  lea    -0x2c(%ebp),%eax
08469643 +0x863:  mov    %eax,(%esp)
08469646 +0x866:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
0846964b +0x86b:  mov    (%eax),%eax
0846964d +0x86d:  mov    %eax,-0x1c(%ebp)
08469650 +0x870:  lea    -0x84(%ebp),%eax
08469656 +0x876:  mov    %eax,(%esp)
08469659 +0x879:  call   08395b46 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x255e6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x255e6
0846965e +0x87e:  mov    0x4(%eax),%eax
08469661 +0x881:  add    %eax,-0x1c(%ebp)
08469664 +0x884:  mov    -0x1c(%ebp),%eax
08469667 +0x887:  mov    -0x4(%ebp),%ebx
0846966a +0x88a:  leave
0846966b +0x88b:  ret
```

## 反编译 C

```c
// WongWork::CDeathTowerRanking::getVirtualRank @ 0x8468de0

/* WongWork::CDeathTowerRanking::getVirtualRank(unsigned int, unsigned int, unsigned int) */

int __thiscall
WongWork::CDeathTowerRanking::getVirtualRank
          (CDeathTowerRanking *this,uint param_1,uint param_2,uint param_3)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int *piVar6;
  size_t *psVar7;
  int iVar8;
  longdouble lVar9;
  ulonglong local_134;
  stBestRecord_t local_124 [136];
  uint local_9c;
  uint local_98;
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> local_8c [4];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  local_7c [4];
  undefined4 local_78;
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  local_74 [4];
  undefined4 local_70;
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  local_6c [4];
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> local_68 [4];
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  local_64 [4];
  size_t local_60 [3];
  size_t local_54;
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  local_50 [4];
  undefined4 local_4c;
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  local_48 [4];
  undefined4 local_44;
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  local_40 [4];
  size_t local_3c [3];
  size_t local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  size_t local_20;
  float local_1c;
  uint local_18;
  uint local_14;
  float local_10;
  
  stBestRecord_t::stBestRecord_t(local_124);
  local_9c = param_2;
  local_98 = param_3;
  cVar2 = stBestRecord_t::operator>((stBestRecord_t *)(this + 0x7058),local_124);
  if (cVar2 != '\0') {
    return -1;
  }
  cVar2 = stBestRecord_t::operator==(local_124,(stBestRecord_t *)(this + 0x7058));
  if (cVar2 != '\0') {
    return *(int *)(this + 0x70ec);
  }
  cVar2 = stBestRecord_t::operator>(local_124,(stBestRecord_t *)(this + param_1 * 0x390 + 0x98));
  if (cVar2 != '\0') {
    return 1;
  }
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::_Rb_tree_const_iterator
            ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *)&local_84);
  std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::_Rb_tree_const_iterator
            ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *)&local_88);
  local_20 = 0xffffffff;
  uVar3 = std::
          map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
          ::size((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
                  *)(this + param_2 * 0x18 + param_1 * 0x12c0 + 0x1298));
  if (uVar3 < 2) goto LAB_08469274;
  std::
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  ::begin(local_7c);
  std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::_Rb_tree_const_iterator
            ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *)&local_80,
             (_Rb_tree_iterator *)local_7c);
  local_88 = local_80;
  std::
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  ::end(local_74);
  std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::_Rb_tree_const_iterator
            ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *)&local_78,
             (_Rb_tree_iterator *)local_74);
  local_84 = local_78;
  std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator--
            ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *)&local_84);
  puVar4 = (uint *)std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::
                   operator->((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *
                              )&local_88);
  if ((param_3 < *puVar4) ||
     (puVar4 = (uint *)std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::
                       operator->((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>
                                   *)&local_84), *puVar4 < param_3)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_08469274;
  std::
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  ::lower_bound(local_6c,(uint *)(this + param_2 * 0x18 + param_1 * 0x12c0 + 0x1298));
  std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::_Rb_tree_const_iterator
            ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *)&local_70,
             (_Rb_tree_iterator *)local_6c);
  local_88 = local_70;
  puVar4 = (uint *)std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::
                   operator->((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *
                              )&local_88);
  if (param_3 < *puVar4) {
    std::
    map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
    ::begin(local_64);
    std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::
    _Rb_tree_const_iterator(local_68,(_Rb_tree_iterator *)local_64);
    cVar2 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator!=
                      ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *)
                       &local_88,(_Rb_tree_const_iterator *)local_68);
    if (cVar2 == '\0') goto LAB_084690b5;
    bVar1 = true;
  }
  else {
LAB_084690b5:
    bVar1 = false;
  }
  if (bVar1) {
    std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator--
              ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *)&local_88);
  }
  local_84 = local_88;
  std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator++
            ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *)&local_84);
  puVar4 = (uint *)std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::
                   operator->((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *
                              )&local_88);
  if (*puVar4 == param_3) {
    iVar5 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *)
                       &local_88);
    return *(int *)(iVar5 + 4);
  }
  puVar4 = (uint *)std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::
                   operator->((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *
                              )&local_84);
  if (*puVar4 == param_3) {
    iVar5 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *)
                       &local_84);
    return *(int *)(iVar5 + 4);
  }
  piVar6 = (int *)std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::
                  operator->((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *)
                             &local_84);
  iVar5 = *piVar6;
  piVar6 = (int *)std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::
                  operator->((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *)
                             &local_88);
  local_60[0] = iVar5 - *piVar6;
  local_60[1] = 1;
  psVar7 = std::max<size_t>(local_60 + 1,local_60);
  local_28 = *psVar7;
  iVar5 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator->
                    ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *)
                     &local_84);
  iVar5 = *(int *)(iVar5 + 4);
  iVar8 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator->
                    ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *)
                     &local_88);
  uVar3 = iVar5 - *(int *)(iVar8 + 4);
  local_24 = (int)uVar3 >> 0x1f;
  local_24 = (uVar3 ^ local_24) - local_24;
  local_134 = (ulonglong)local_24;
  lVar9 = (longdouble)local_134;
  local_134 = (ulonglong)local_28;
  local_1c = (float)(lVar9 / (longdouble)local_134);
  piVar6 = (int *)std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::
                  operator->((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *)
                             &local_88);
  local_134 = (ulonglong)(param_3 - *piVar6);
  local_134._0_4_ = (undefined4)(longlong)ROUND((float)local_134 * local_1c);
  local_60[2] = (undefined4)local_134;
  local_54 = 1;
  psVar7 = std::max<size_t>(&local_54,local_60 + 2);
  local_20 = *psVar7;
LAB_08469274:
  if (local_28 == 0) {
    local_18 = 0;
    local_14 = 0;
    cVar2 = std::
            map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
            ::empty((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
                     *)(this + param_2 * 0x18 + param_1 * 0x12c0 + 0x1298));
    if (cVar2 != '\x01') {
      std::
      map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
      ::end(local_50);
      std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::
      _Rb_tree_const_iterator(local_8c,(_Rb_tree_iterator *)local_50);
      std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator--(local_8c)
      ;
      puVar4 = (uint *)std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::
                       operator->(local_8c);
      if (*puVar4 == param_3) {
        iVar5 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator->
                          (local_8c);
        return *(int *)(iVar5 + 4);
      }
      puVar4 = (uint *)std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::
                       operator->(local_8c);
      if (*puVar4 < param_3) {
        local_14 = param_2;
      }
      else {
        local_18 = param_2;
      }
    }
    if (local_18 == 0) {
      local_18 = param_2;
      do {
        local_18 = local_18 - 1;
        if ((local_18 < 2) ||
           (cVar2 = std::
                    map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
                    ::empty((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
                             *)(this + local_18 * 0x18 + param_1 * 0x12c0 + 0x1298)), cVar2 == '\0')
           ) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      } while (bVar1);
    }
    if (local_14 == 0) {
      local_14 = param_2;
      do {
        local_14 = local_14 + 1;
        if ((local_14 < 200) &&
           (cVar2 = std::
                    map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
                    ::empty((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
                             *)(this + local_14 * 0x18 + param_1 * 0x12c0 + 0x1298)), cVar2 != '\0')
           ) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
      } while (bVar1);
    }
    cVar2 = std::
            map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
            ::empty((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
                     *)(this + local_18 * 0x18 + param_1 * 0x12c0 + 0x1298));
    if ((cVar2 == '\0') &&
       (cVar2 = std::
                map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
                ::empty((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
                         *)(this + local_14 * 0x18 + param_1 * 0x12c0 + 0x1298)), cVar2 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return -1;
    }
    std::
    map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
    ::begin(local_48);
    std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::
    _Rb_tree_const_iterator
              ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *)&local_4c,
               (_Rb_tree_iterator *)local_48);
    local_84 = local_4c;
    std::
    map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
    ::end(local_40);
    std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::
    _Rb_tree_const_iterator
              ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *)&local_44,
               (_Rb_tree_iterator *)local_40);
    local_88 = local_44;
    std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator--
              ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *)&local_88);
    local_3c[0] = local_14 - local_18;
    local_3c[1] = 1;
    psVar7 = std::max<size_t>(local_3c + 1,local_3c);
    local_2c = *psVar7;
    iVar5 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *)
                       &local_84);
    iVar5 = *(int *)(iVar5 + 4);
    iVar8 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *)
                       &local_88);
    uVar3 = iVar5 - *(int *)(iVar8 + 4);
    local_24 = (int)uVar3 >> 0x1f;
    local_24 = (uVar3 ^ local_24) - local_24;
    local_134 = (ulonglong)local_24;
    lVar9 = (longdouble)local_134;
    local_134 = (ulonglong)local_2c;
    local_10 = (float)(lVar9 / (longdouble)local_134);
    local_134 = (ulonglong)(local_14 - param_2);
    local_134._0_4_ = (undefined4)(longlong)ROUND((float)local_134 * local_10);
    local_3c[2] = (undefined4)local_134;
    local_30 = 1;
    psVar7 = std::max<size_t>(&local_30,local_3c + 2);
    local_20 = *psVar7;
  }
  iVar5 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator->
                    ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *)
                     &local_88);
  return local_20 + *(int *)(iVar5 + 4);
}
```
