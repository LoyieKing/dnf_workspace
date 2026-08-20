# set_map

`_ZN4CMap7set_mapE11STMapScript`

`CMap::set_map(STMapScript)`

| 类 | 地址 |
|---|---|
| `CMap` | `0x0834e18a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834e18a  _ZN4CMap7set_mapE11STMapScript
#           CMap::set_map(STMapScript)
# range [0x0834e18a, 0x0834e9a1]
0834e18a +0x000:  push   %ebp
0834e18b +0x001:  mov    %esp,%ebp
0834e18d +0x003:  push   %esi
0834e18e +0x004:  push   %ebx
0834e18f +0x005:  sub    $0x2f0,%esp
0834e195 +0x00b:  mov    0xc(%ebp),%eax
0834e198 +0x00e:  mov    (%eax),%edx
0834e19a +0x010:  mov    0x8(%ebp),%eax
0834e19d +0x013:  mov    %edx,0x4(%eax)
0834e1a0 +0x016:  mov    0xc(%ebp),%eax
0834e1a3 +0x019:  mov    0xc(%eax),%eax
0834e1a6 +0x01c:  mov    %eax,%edx
0834e1a8 +0x01e:  mov    0x8(%ebp),%eax
0834e1ab +0x021:  mov    %edx,0x8(%eax)
0834e1ae +0x024:  mov    0xc(%ebp),%eax
0834e1b1 +0x027:  mov    0x4c(%eax),%edx
0834e1b4 +0x02a:  mov    0x8(%ebp),%eax
0834e1b7 +0x02d:  mov    %edx,0x80(%eax)
0834e1bd +0x033:  mov    0xc(%ebp),%eax
0834e1c0 +0x036:  lea    0x10(%eax),%edx
0834e1c3 +0x039:  mov    0x8(%ebp),%eax
0834e1c6 +0x03c:  add    $0x84,%eax
0834e1cb +0x041:  mov    %edx,0x4(%esp)
0834e1cf +0x045:  mov    %eax,(%esp)
0834e1d2 +0x048:  call   0830f08c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0xc71>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0xc71
0834e1d7 +0x04d:  mov    0xc(%ebp),%eax
0834e1da +0x050:  lea    0x4(%eax),%edx
0834e1dd +0x053:  mov    0x8(%ebp),%eax
0834e1e0 +0x056:  add    $0x24,%eax
0834e1e3 +0x059:  mov    %edx,0x4(%esp)
0834e1e7 +0x05d:  mov    %eax,(%esp)
0834e1ea +0x060:  call   0838a9c4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a464>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a464
0834e1ef +0x065:  mov    0xc(%ebp),%eax
0834e1f2 +0x068:  lea    0x288(%eax),%edx
0834e1f8 +0x06e:  mov    0x8(%ebp),%eax
0834e1fb +0x071:  add    $0xb8,%eax
0834e200 +0x076:  mov    %edx,0x4(%esp)
0834e204 +0x07a:  mov    %eax,(%esp)
0834e207 +0x07d:  call   08310010 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1bf5>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1bf5
0834e20c +0x082:  mov    0xc(%ebp),%eax
0834e20f +0x085:  lea    0x294(%eax),%edx
0834e215 +0x08b:  mov    0x8(%ebp),%eax
0834e218 +0x08e:  add    $0xc4,%eax
0834e21d +0x093:  mov    %edx,0x4(%esp)
0834e221 +0x097:  mov    %eax,(%esp)
0834e224 +0x09a:  call   08310286 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1e6b>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1e6b
0834e229 +0x09f:  mov    0xc(%ebp),%eax
0834e22c +0x0a2:  mov    0x284(%eax),%edx
0834e232 +0x0a8:  mov    0x8(%ebp),%eax
0834e235 +0x0ab:  mov    %edx,0xb4(%eax)
0834e23b +0x0b1:  mov    0xc(%ebp),%eax
0834e23e +0x0b4:  lea    0x100(%eax),%edx
0834e244 +0x0ba:  mov    0x8(%ebp),%eax
0834e247 +0x0bd:  add    $0x2c,%eax
0834e24a +0x0c0:  movl   $0x20,0x8(%esp)
0834e252 +0x0c8:  mov    %edx,0x4(%esp)
0834e256 +0x0cc:  mov    %eax,(%esp)
0834e259 +0x0cf:  call   0807d8a0 <_init+0x198>
0834e25e +0x0d4:  mov    0xc(%ebp),%eax
0834e261 +0x0d7:  lea    0x120(%eax),%edx
0834e267 +0x0dd:  mov    0x8(%ebp),%eax
0834e26a +0x0e0:  add    $0x4c,%eax
0834e26d +0x0e3:  movl   $0x20,0x8(%esp)
0834e275 +0x0eb:  mov    %edx,0x4(%esp)
0834e279 +0x0ef:  mov    %eax,(%esp)
0834e27c +0x0f2:  call   0807d8a0 <_init+0x198>
0834e281 +0x0f7:  lea    -0x2b4(%ebp),%eax
0834e287 +0x0fd:  mov    %eax,(%esp)
0834e28a +0x100:  call   0836c5e0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x65ac>  ; global constructors keyed to CServerEvent::m_nExpRate+0x65ac
0834e28f +0x105:  lea    -0x240(%ebp),%eax
0834e295 +0x10b:  mov    %eax,(%esp)
0834e298 +0x10e:  call   0838aafe <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a59e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a59e
0834e29d +0x113:  mov    0xc(%ebp),%eax
0834e2a0 +0x116:  lea    0x34(%eax),%edx
0834e2a3 +0x119:  lea    -0x2bc(%ebp),%eax
0834e2a9 +0x11f:  mov    %edx,0x4(%esp)
0834e2ad +0x123:  mov    %eax,(%esp)
0834e2b0 +0x126:  call   0838ab0c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a5ac>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a5ac
0834e2b5 +0x12b:  sub    $0x4,%esp
0834e2b8 +0x12e:  mov    -0x2bc(%ebp),%eax
0834e2be +0x134:  mov    %eax,-0x240(%ebp)
0834e2c4 +0x13a:  jmp    0834e3ee <+0x264>
0834e2c9 +0x13f:  lea    -0x240(%ebp),%eax
0834e2cf +0x145:  mov    %eax,(%esp)
0834e2d2 +0x148:  call   0838ab82 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a622>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a622
0834e2d7 +0x14d:  mov    %eax,0x4(%esp)
0834e2db +0x151:  lea    -0x238(%ebp),%eax
0834e2e1 +0x157:  mov    %eax,(%esp)
0834e2e4 +0x15a:  call   08377696 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x7136>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x7136
0834e2e9 +0x15f:  lea    -0x238(%ebp),%eax
0834e2ef +0x165:  mov    %eax,0x4(%esp)
0834e2f3 +0x169:  lea    -0x2b4(%ebp),%eax
0834e2f9 +0x16f:  mov    %eax,(%esp)
0834e2fc +0x172:  call   083777f2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x7292>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x7292
0834e301 +0x177:  jmp    0834e31e <+0x194>
0834e303 +0x179:  mov    %edx,%ebx
0834e305 +0x17b:  mov    %eax,%esi
0834e307 +0x17d:  lea    -0x238(%ebp),%eax
0834e30d +0x183:  mov    %eax,(%esp)
0834e310 +0x186:  call   08377622 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x70c2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x70c2
0834e315 +0x18b:  mov    %esi,%eax
0834e317 +0x18d:  mov    %ebx,%edx
0834e319 +0x18f:  jmp    0834e988 <+0x7fe>
0834e31e +0x194:  lea    -0x238(%ebp),%eax
0834e324 +0x19a:  mov    %eax,(%esp)
0834e327 +0x19d:  call   08377622 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x70c2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x70c2
0834e32c +0x1a2:  mov    0x8(%ebp),%eax
0834e32f +0x1a5:  mov    0x8(%eax),%eax
0834e332 +0x1a8:  cmp    $0x2,%eax
0834e335 +0x1ab:  jne    0834e353 <+0x1c9>
0834e337 +0x1ad:  mov    -0x290(%ebp),%eax
0834e33d +0x1b3:  cmp    $0x3,%eax
0834e340 +0x1b6:  jne    0834e353 <+0x1c9>
0834e342 +0x1b8:  movl   $0x1,-0x290(%ebp)
0834e34c +0x1c2:  movb   $0x1,-0x260(%ebp)
0834e353 +0x1c9:  mov    -0x290(%ebp),%eax
0834e359 +0x1cf:  cmp    $0x3,%eax
0834e35c +0x1d2:  jne    0834e36b <+0x1e1>
0834e35e +0x1d4:  mov    0x8(%ebp),%eax
0834e361 +0x1d7:  mov    (%eax),%eax
0834e363 +0x1d9:  lea    0x1(%eax),%edx
0834e366 +0x1dc:  mov    0x8(%ebp),%eax
0834e369 +0x1df:  mov    %edx,(%eax)
0834e36b +0x1e1:  lea    -0x2b4(%ebp),%eax
0834e371 +0x1e7:  mov    %eax,0x4(%esp)
0834e375 +0x1eb:  lea    -0x1d0(%ebp),%eax
0834e37b +0x1f1:  mov    %eax,(%esp)
0834e37e +0x1f4:  call   08377696 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x7136>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x7136
0834e383 +0x1f9:  movl   $0xffffffff,0x8(%esp)
0834e38b +0x201:  lea    -0x1d0(%ebp),%eax
0834e391 +0x207:  mov    %eax,0x4(%esp)
0834e395 +0x20b:  mov    0x8(%ebp),%eax
0834e398 +0x20e:  mov    %eax,(%esp)
0834e39b +0x211:  call   0834e9d4 <_ZN4CMap14insert_monsterE15STAssignMonsteri>  ; CMap::insert_monster(STAssignMonster, int)
0834e3a0 +0x216:  jmp    0834e3bd <+0x233>
0834e3a2 +0x218:  mov    %edx,%ebx
0834e3a4 +0x21a:  mov    %eax,%esi
0834e3a6 +0x21c:  lea    -0x1d0(%ebp),%eax
0834e3ac +0x222:  mov    %eax,(%esp)
0834e3af +0x225:  call   08377622 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x70c2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x70c2
0834e3b4 +0x22a:  mov    %esi,%eax
0834e3b6 +0x22c:  mov    %ebx,%edx
0834e3b8 +0x22e:  jmp    0834e988 <+0x7fe>
0834e3bd +0x233:  lea    -0x1d0(%ebp),%eax
0834e3c3 +0x239:  mov    %eax,(%esp)
0834e3c6 +0x23c:  call   08377622 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x70c2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x70c2
0834e3cb +0x241:  lea    -0x168(%ebp),%eax
0834e3d1 +0x247:  movl   $0x0,0x8(%esp)
0834e3d9 +0x24f:  lea    -0x240(%ebp),%edx
0834e3df +0x255:  mov    %edx,0x4(%esp)
0834e3e3 +0x259:  mov    %eax,(%esp)
0834e3e6 +0x25c:  call   0838ae7c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a91c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a91c
0834e3eb +0x261:  sub    $0x4,%esp
0834e3ee +0x264:  mov    0xc(%ebp),%eax
0834e3f1 +0x267:  lea    0x34(%eax),%edx
0834e3f4 +0x26a:  lea    -0x23c(%ebp),%eax
0834e3fa +0x270:  mov    %edx,0x4(%esp)
0834e3fe +0x274:  mov    %eax,(%esp)
0834e401 +0x277:  call   0838ab30 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a5d0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a5d0
0834e406 +0x27c:  sub    $0x4,%esp
0834e409 +0x27f:  lea    -0x23c(%ebp),%eax
0834e40f +0x285:  mov    %eax,0x4(%esp)
0834e413 +0x289:  lea    -0x240(%ebp),%eax
0834e419 +0x28f:  mov    %eax,(%esp)
0834e41c +0x292:  call   0838ab56 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a5f6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a5f6
0834e421 +0x297:  test   %al,%al
0834e423 +0x299:  jne    0834e2c9 <+0x13f>
0834e429 +0x29f:  mov    0xc(%ebp),%eax
0834e42c +0x2a2:  lea    0x40(%eax),%edx
0834e42f +0x2a5:  lea    -0x2bc(%ebp),%eax
0834e435 +0x2ab:  mov    %edx,0x4(%esp)
0834e439 +0x2af:  mov    %eax,(%esp)
0834e43c +0x2b2:  call   0838ab0c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a5ac>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a5ac
0834e441 +0x2b7:  sub    $0x4,%esp
0834e444 +0x2ba:  mov    -0x2bc(%ebp),%eax
0834e44a +0x2c0:  mov    %eax,-0x240(%ebp)
0834e450 +0x2c6:  jmp    0834e533 <+0x3a9>
0834e455 +0x2cb:  lea    -0x240(%ebp),%eax
0834e45b +0x2d1:  mov    %eax,(%esp)
0834e45e +0x2d4:  call   0838ab82 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a622>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a622
0834e463 +0x2d9:  mov    %eax,0x4(%esp)
0834e467 +0x2dd:  lea    -0x160(%ebp),%eax
0834e46d +0x2e3:  mov    %eax,(%esp)
0834e470 +0x2e6:  call   08377696 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x7136>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x7136
0834e475 +0x2eb:  lea    -0x160(%ebp),%eax
0834e47b +0x2f1:  mov    %eax,0x4(%esp)
0834e47f +0x2f5:  lea    -0x2b4(%ebp),%eax
0834e485 +0x2fb:  mov    %eax,(%esp)
0834e488 +0x2fe:  call   083777f2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x7292>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x7292
0834e48d +0x303:  jmp    0834e4aa <+0x320>
0834e48f +0x305:  mov    %edx,%ebx
0834e491 +0x307:  mov    %eax,%esi
0834e493 +0x309:  lea    -0x160(%ebp),%eax
0834e499 +0x30f:  mov    %eax,(%esp)
0834e49c +0x312:  call   08377622 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x70c2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x70c2
0834e4a1 +0x317:  mov    %esi,%eax
0834e4a3 +0x319:  mov    %ebx,%edx
0834e4a5 +0x31b:  jmp    0834e988 <+0x7fe>
0834e4aa +0x320:  lea    -0x160(%ebp),%eax
0834e4b0 +0x326:  mov    %eax,(%esp)
0834e4b3 +0x329:  call   08377622 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x70c2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x70c2
0834e4b8 +0x32e:  lea    -0x2b4(%ebp),%eax
0834e4be +0x334:  mov    %eax,0x4(%esp)
0834e4c2 +0x338:  lea    -0xf8(%ebp),%eax
0834e4c8 +0x33e:  mov    %eax,(%esp)
0834e4cb +0x341:  call   08377696 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x7136>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x7136
0834e4d0 +0x346:  lea    -0xf8(%ebp),%eax
0834e4d6 +0x34c:  mov    %eax,0x4(%esp)
0834e4da +0x350:  mov    0x8(%ebp),%eax
0834e4dd +0x353:  mov    %eax,(%esp)
0834e4e0 +0x356:  call   0834ead4 <_ZN4CMap24insert_condition_monsterE15STAssignMonster>  ; CMap::insert_condition_monster(STAssignMonster)
0834e4e5 +0x35b:  jmp    0834e502 <+0x378>
0834e4e7 +0x35d:  mov    %edx,%ebx
0834e4e9 +0x35f:  mov    %eax,%esi
0834e4eb +0x361:  lea    -0xf8(%ebp),%eax
0834e4f1 +0x367:  mov    %eax,(%esp)
0834e4f4 +0x36a:  call   08377622 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x70c2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x70c2
0834e4f9 +0x36f:  mov    %esi,%eax
0834e4fb +0x371:  mov    %ebx,%edx
0834e4fd +0x373:  jmp    0834e988 <+0x7fe>
0834e502 +0x378:  lea    -0xf8(%ebp),%eax
0834e508 +0x37e:  mov    %eax,(%esp)
0834e50b +0x381:  call   08377622 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x70c2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x70c2
0834e510 +0x386:  lea    -0x90(%ebp),%eax
0834e516 +0x38c:  movl   $0x0,0x8(%esp)
0834e51e +0x394:  lea    -0x240(%ebp),%edx
0834e524 +0x39a:  mov    %edx,0x4(%esp)
0834e528 +0x39e:  mov    %eax,(%esp)
0834e52b +0x3a1:  call   0838ae7c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a91c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a91c
0834e530 +0x3a6:  sub    $0x4,%esp
0834e533 +0x3a9:  mov    0xc(%ebp),%eax
0834e536 +0x3ac:  lea    0x40(%eax),%edx
0834e539 +0x3af:  lea    -0x164(%ebp),%eax
0834e53f +0x3b5:  mov    %edx,0x4(%esp)
0834e543 +0x3b9:  mov    %eax,(%esp)
0834e546 +0x3bc:  call   0838ab30 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a5d0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a5d0
0834e54b +0x3c1:  sub    $0x4,%esp
0834e54e +0x3c4:  lea    -0x164(%ebp),%eax
0834e554 +0x3ca:  mov    %eax,0x4(%esp)
0834e558 +0x3ce:  lea    -0x240(%ebp),%eax
0834e55e +0x3d4:  mov    %eax,(%esp)
0834e561 +0x3d7:  call   0838ab56 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a5f6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a5f6
0834e566 +0x3dc:  test   %al,%al
0834e568 +0x3de:  jne    0834e455 <+0x2cb>
0834e56e +0x3e4:  movl   $0x0,-0x1c(%ebp)
0834e575 +0x3eb:  mov    0xc(%ebp),%eax
0834e578 +0x3ee:  add    $0x58,%eax
0834e57b +0x3f1:  mov    %eax,(%esp)
0834e57e +0x3f4:  call   0838aeb0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a950>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a950
0834e583 +0x3f9:  xor    $0x1,%eax
0834e586 +0x3fc:  test   %al,%al
0834e588 +0x3fe:  je     0834e7ae <+0x624>
0834e58e +0x404:  mov    0xc(%ebp),%eax
0834e591 +0x407:  lea    0x58(%eax),%edx
0834e594 +0x40a:  lea    -0x244(%ebp),%eax
0834e59a +0x410:  mov    %edx,0x4(%esp)
0834e59e +0x414:  mov    %eax,(%esp)
0834e5a1 +0x417:  call   0838aec2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a962>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a962
0834e5a6 +0x41c:  sub    $0x4,%esp
0834e5a9 +0x41f:  jmp    0834e773 <+0x5e9>
0834e5ae +0x424:  lea    -0x244(%ebp),%eax
0834e5b4 +0x42a:  mov    %eax,(%esp)
0834e5b7 +0x42d:  call   0838af58 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a9f8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a9f8
0834e5bc +0x432:  mov    %eax,-0x14(%ebp)
0834e5bf +0x435:  movl   $0x0,-0x10(%ebp)
0834e5c6 +0x43c:  jmp    0834e733 <+0x5a9>
0834e5cb +0x441:  mov    -0x14(%ebp),%eax
0834e5ce +0x444:  lea    0x10(%eax),%edx
0834e5d1 +0x447:  mov    -0x10(%ebp),%eax
0834e5d4 +0x44a:  mov    %eax,0x4(%esp)
0834e5d8 +0x44e:  mov    %edx,(%esp)
0834e5db +0x451:  call   0838af88 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1aa28>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1aa28
0834e5e0 +0x456:  mov    %eax,-0xc(%ebp)
0834e5e3 +0x459:  mov    -0xc(%ebp),%eax
0834e5e6 +0x45c:  mov    (%eax),%eax
0834e5e8 +0x45e:  test   %eax,%eax
0834e5ea +0x460:  jne    0834e6e6 <+0x55c>
0834e5f0 +0x466:  mov    -0xc(%ebp),%eax
0834e5f3 +0x469:  mov    0x10(%eax),%eax
0834e5f6 +0x46c:  test   %eax,%eax
0834e5f8 +0x46e:  je     0834e725 <+0x59b>
0834e5fe +0x474:  movl   $0x64,(%esp)
0834e605 +0x47b:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0834e60a +0x480:  mov    %eax,%ecx
0834e60c +0x482:  mov    -0xc(%ebp),%eax
0834e60f +0x485:  mov    0xc(%eax),%eax
0834e612 +0x488:  imul   $0x64,%eax,%eax
0834e615 +0x48b:  mov    -0xc(%ebp),%edx
0834e618 +0x48e:  mov    0x10(%edx),%edx
0834e61b +0x491:  mov    %edx,-0x2cc(%ebp)
0834e621 +0x497:  mov    %eax,%edx
0834e623 +0x499:  sar    $0x1f,%edx
0834e626 +0x49c:  idivl  -0x2cc(%ebp)
0834e62c +0x4a2:  cmp    %eax,%ecx
0834e62e +0x4a4:  setg   %al
0834e631 +0x4a7:  test   %al,%al
0834e633 +0x4a9:  jne    0834e728 <+0x59e>
0834e639 +0x4af:  mov    -0xc(%ebp),%eax
0834e63c +0x4b2:  mov    0x8(%eax),%eax
0834e63f +0x4b5:  cmp    $0xc8,%eax
0834e644 +0x4ba:  jg     0834e72b <+0x5a1>
0834e64a +0x4c0:  mov    -0xc(%ebp),%eax
0834e64d +0x4c3:  mov    0x8(%eax),%eax
0834e650 +0x4c6:  test   %eax,%eax
0834e652 +0x4c8:  jle    0834e72e <+0x5a4>
0834e658 +0x4ce:  lea    -0x2b4(%ebp),%eax
0834e65e +0x4d4:  mov    %eax,(%esp)
0834e661 +0x4d7:  call   0836c4fa <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x64c6>  ; global constructors keyed to CServerEvent::m_nExpRate+0x64c6
0834e666 +0x4dc:  mov    -0xc(%ebp),%eax
0834e669 +0x4df:  mov    0x4(%eax),%eax
0834e66c +0x4e2:  mov    %eax,-0x2b4(%ebp)
0834e672 +0x4e8:  mov    -0xc(%ebp),%eax
0834e675 +0x4eb:  mov    0x8(%eax),%eax
0834e678 +0x4ee:  mov    %eax,-0x2ac(%ebp)
0834e67e +0x4f4:  movb   $0x0,-0x2b0(%ebp)
0834e685 +0x4fb:  lea    -0x2b4(%ebp),%eax
0834e68b +0x501:  mov    %eax,0x4(%esp)
0834e68f +0x505:  lea    -0x88(%ebp),%eax
0834e695 +0x50b:  mov    %eax,(%esp)
0834e698 +0x50e:  call   08377696 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x7136>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x7136
0834e69d +0x513:  mov    -0x1c(%ebp),%eax
0834e6a0 +0x516:  mov    %eax,0x8(%esp)
0834e6a4 +0x51a:  lea    -0x88(%ebp),%eax
0834e6aa +0x520:  mov    %eax,0x4(%esp)
0834e6ae +0x524:  mov    0x8(%ebp),%eax
0834e6b1 +0x527:  mov    %eax,(%esp)
0834e6b4 +0x52a:  call   0834e9d4 <_ZN4CMap14insert_monsterE15STAssignMonsteri>  ; CMap::insert_monster(STAssignMonster, int)
0834e6b9 +0x52f:  jmp    0834e6d6 <+0x54c>
0834e6bb +0x531:  mov    %edx,%ebx
0834e6bd +0x533:  mov    %eax,%esi
0834e6bf +0x535:  lea    -0x88(%ebp),%eax
0834e6c5 +0x53b:  mov    %eax,(%esp)
0834e6c8 +0x53e:  call   08377622 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x70c2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x70c2
0834e6cd +0x543:  mov    %esi,%eax
0834e6cf +0x545:  mov    %ebx,%edx
0834e6d1 +0x547:  jmp    0834e988 <+0x7fe>
0834e6d6 +0x54c:  lea    -0x88(%ebp),%eax
0834e6dc +0x552:  mov    %eax,(%esp)
0834e6df +0x555:  call   08377622 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x70c2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x70c2
0834e6e4 +0x55a:  jmp    0834e72f <+0x5a5>
0834e6e6 +0x55c:  mov    -0xc(%ebp),%eax
0834e6e9 +0x55f:  mov    (%eax),%eax
0834e6eb +0x561:  cmp    $0x2,%eax
0834e6ee +0x564:  jne    0834e72f <+0x5a5>
0834e6f0 +0x566:  mov    -0x14(%ebp),%eax
0834e6f3 +0x569:  mov    0x1c(%eax),%ebx
0834e6f6 +0x56c:  mov    -0xc(%ebp),%eax
0834e6f9 +0x56f:  mov    0xc(%eax),%ecx
0834e6fc +0x572:  mov    -0xc(%ebp),%eax
0834e6ff +0x575:  mov    0x8(%eax),%edx
0834e702 +0x578:  mov    -0xc(%ebp),%eax
0834e705 +0x57b:  mov    0x4(%eax),%eax
0834e708 +0x57e:  mov    %ebx,0x10(%esp)
0834e70c +0x582:  mov    %ecx,0xc(%esp)
0834e710 +0x586:  mov    %edx,0x8(%esp)
0834e714 +0x58a:  mov    %eax,0x4(%esp)
0834e718 +0x58e:  mov    0x8(%ebp),%eax
0834e71b +0x591:  mov    %eax,(%esp)
0834e71e +0x594:  call   0834eb94 <_ZN4CMap11insert_itemEiiii>  ; CMap::insert_item(int, int, int, int)
0834e723 +0x599:  jmp    0834e72f <+0x5a5>
0834e725 +0x59b:  nop
0834e726 +0x59c:  jmp    0834e72f <+0x5a5>
0834e728 +0x59e:  nop
0834e729 +0x59f:  jmp    0834e72f <+0x5a5>
0834e72b +0x5a1:  nop
0834e72c +0x5a2:  jmp    0834e72f <+0x5a5>
0834e72e +0x5a4:  nop
0834e72f +0x5a5:  addl   $0x1,-0x10(%ebp)
0834e733 +0x5a9:  mov    -0x14(%ebp),%eax
0834e736 +0x5ac:  add    $0x10,%eax
0834e739 +0x5af:  mov    %eax,(%esp)
0834e73c +0x5b2:  call   0838af66 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1aa06>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1aa06
0834e741 +0x5b7:  cmp    -0x10(%ebp),%eax
0834e744 +0x5ba:  seta   %al
0834e747 +0x5bd:  test   %al,%al
0834e749 +0x5bf:  jne    0834e5cb <+0x441>
0834e74f +0x5c5:  addl   $0x1,-0x1c(%ebp)
0834e753 +0x5c9:  lea    -0x20(%ebp),%eax
0834e756 +0x5cc:  movl   $0x0,0x8(%esp)
0834e75e +0x5d4:  lea    -0x244(%ebp),%edx
0834e764 +0x5da:  mov    %edx,0x4(%esp)
0834e768 +0x5de:  mov    %eax,(%esp)
0834e76b +0x5e1:  call   0838af20 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a9c0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a9c0
0834e770 +0x5e6:  sub    $0x4,%esp
0834e773 +0x5e9:  mov    0xc(%ebp),%eax
0834e776 +0x5ec:  lea    0x58(%eax),%edx
0834e779 +0x5ef:  lea    -0x8c(%ebp),%eax
0834e77f +0x5f5:  mov    %edx,0x4(%esp)
0834e783 +0x5f9:  mov    %eax,(%esp)
0834e786 +0x5fc:  call   0838aee8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a988>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a988
0834e78b +0x601:  sub    $0x4,%esp
0834e78e +0x604:  lea    -0x8c(%ebp),%eax
0834e794 +0x60a:  mov    %eax,0x4(%esp)
0834e798 +0x60e:  lea    -0x244(%ebp),%eax
0834e79e +0x614:  mov    %eax,(%esp)
0834e7a1 +0x617:  call   0838af0c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a9ac>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a9ac
0834e7a6 +0x61c:  test   %al,%al
0834e7a8 +0x61e:  jne    0834e5ae <+0x424>
0834e7ae +0x624:  mov    0xc(%ebp),%eax
0834e7b1 +0x627:  lea    0x250(%eax),%edx
0834e7b7 +0x62d:  mov    0x8(%ebp),%eax
0834e7ba +0x630:  add    $0x90,%eax
0834e7bf +0x635:  mov    %edx,0x4(%esp)
0834e7c3 +0x639:  mov    %eax,(%esp)
0834e7c6 +0x63c:  call   0838afa2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1aa42>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1aa42
0834e7cb +0x641:  mov    0xc(%ebp),%eax
0834e7ce +0x644:  lea    0x278(%eax),%edx
0834e7d4 +0x64a:  mov    0x8(%ebp),%eax
0834e7d7 +0x64d:  add    $0x9c,%eax
0834e7dc +0x652:  mov    %edx,0x4(%esp)
0834e7e0 +0x656:  mov    %eax,(%esp)
0834e7e3 +0x659:  call   0838afa2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1aa42>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1aa42
0834e7e8 +0x65e:  mov    0xc(%ebp),%eax
0834e7eb +0x661:  mov    0x268(%eax),%edx
0834e7f1 +0x667:  mov    0x8(%ebp),%eax
0834e7f4 +0x66a:  mov    %edx,0x78(%eax)
0834e7f7 +0x66d:  mov    0xc(%ebp),%eax
0834e7fa +0x670:  lea    0x25c(%eax),%edx
0834e800 +0x676:  mov    0x8(%ebp),%eax
0834e803 +0x679:  add    $0x6c,%eax
0834e806 +0x67c:  mov    %edx,0x4(%esp)
0834e80a +0x680:  mov    %eax,(%esp)
0834e80d +0x683:  call   0838b214 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1acb4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1acb4
0834e812 +0x688:  mov    0xc(%ebp),%eax
0834e815 +0x68b:  add    $0x60,%eax
0834e818 +0x68e:  mov    %eax,(%esp)
0834e81b +0x691:  call   0838b49c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1af3c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1af3c
0834e820 +0x696:  mov    0x8(%ebp),%edx
0834e823 +0x699:  mov    %eax,0x7c(%edx)
0834e826 +0x69c:  mov    0xc(%ebp),%eax
0834e829 +0x69f:  add    $0x2c,%eax
0834e82c +0x6a2:  mov    %eax,(%esp)
0834e82f +0x6a5:  call   0838b4be <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1af5e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1af5e
0834e834 +0x6aa:  xor    $0x1,%eax
0834e837 +0x6ad:  test   %al,%al
0834e839 +0x6af:  je     0834e8c4 <+0x73a>
0834e83f +0x6b5:  mov    0xc(%ebp),%eax
0834e842 +0x6b8:  lea    0x2c(%eax),%edx
0834e845 +0x6bb:  lea    -0x248(%ebp),%eax
0834e84b +0x6c1:  mov    %edx,0x4(%esp)
0834e84f +0x6c5:  mov    %eax,(%esp)
0834e852 +0x6c8:  call   0838b4d0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1af70>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1af70
0834e857 +0x6cd:  sub    $0x4,%esp
0834e85a +0x6d0:  mov    0xc(%ebp),%eax
0834e85d +0x6d3:  lea    0x2c(%eax),%edx
0834e860 +0x6d6:  lea    -0x24c(%ebp),%eax
0834e866 +0x6dc:  mov    %edx,0x4(%esp)
0834e86a +0x6e0:  mov    %eax,(%esp)
0834e86d +0x6e3:  call   0838b4f6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1af96>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1af96
0834e872 +0x6e8:  sub    $0x4,%esp
0834e875 +0x6eb:  jmp    0834e8a8 <+0x71e>
0834e877 +0x6ed:  lea    -0x248(%ebp),%eax
0834e87d +0x6f3:  mov    %eax,(%esp)
0834e880 +0x6f6:  call   0838b542 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1afe2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1afe2
0834e885 +0x6fb:  mov    0x8(%ebp),%edx
0834e888 +0x6fe:  add    $0xa8,%edx
0834e88e +0x704:  mov    %eax,0x4(%esp)
0834e892 +0x708:  mov    %edx,(%esp)
0834e895 +0x70b:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
0834e89a +0x710:  lea    -0x248(%ebp),%eax
0834e8a0 +0x716:  mov    %eax,(%esp)
0834e8a3 +0x719:  call   0838b52e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1afce>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1afce
0834e8a8 +0x71e:  lea    -0x24c(%ebp),%eax
0834e8ae +0x724:  mov    %eax,0x4(%esp)
0834e8b2 +0x728:  lea    -0x248(%ebp),%eax
0834e8b8 +0x72e:  mov    %eax,(%esp)
0834e8bb +0x731:  call   0838b51a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1afba>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1afba
0834e8c0 +0x736:  test   %al,%al
0834e8c2 +0x738:  jne    0834e877 <+0x6ed>
0834e8c4 +0x73a:  mov    0xc(%ebp),%eax
0834e8c7 +0x73d:  mov    0x324(%eax),%edx
0834e8cd +0x743:  mov    0x8(%ebp),%eax
0834e8d0 +0x746:  mov    %edx,0xec(%eax)
0834e8d6 +0x74c:  mov    0xc(%ebp),%eax
0834e8d9 +0x74f:  mov    0x328(%eax),%edx
0834e8df +0x755:  mov    0x8(%ebp),%eax
0834e8e2 +0x758:  mov    %edx,0xf0(%eax)
0834e8e8 +0x75e:  mov    0xc(%ebp),%eax
0834e8eb +0x761:  lea    0x330(%eax),%edx
0834e8f1 +0x767:  mov    0x8(%ebp),%eax
0834e8f4 +0x76a:  add    $0xf4,%eax
0834e8f9 +0x76f:  mov    %edx,0x4(%esp)
0834e8fd +0x773:  mov    %eax,(%esp)
0834e900 +0x776:  call   08377940 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x73e0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x73e0
0834e905 +0x77b:  mov    0xc(%ebp),%eax
0834e908 +0x77e:  mov    0x178(%eax),%edx
0834e90e +0x784:  mov    0x8(%ebp),%eax
0834e911 +0x787:  mov    %edx,0x110(%eax)
0834e917 +0x78d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0834e91c +0x792:  lea    0x62e8(%eax),%edx
0834e922 +0x798:  mov    0x8(%ebp),%eax
0834e925 +0x79b:  add    $0xf4,%eax
0834e92a +0x7a0:  mov    %edx,0x4(%esp)
0834e92e +0x7a4:  mov    %eax,(%esp)
0834e931 +0x7a7:  call   0889a032 <_ZN12advancealtar22StageTimeLineParameter23checkAndSetActionDefineERNS_8TimeLineERKSt3mapIiNS_12ActionDefineESt4lessIiESaISt4pairIKiS4_EEE>  ; advancealtar::StageTimeLineParameter::checkAndSetActionDefine(advancealtar::TimeLine&, std::map<int, advancealtar::ActionDefine, std::less<int>, std::allocator<std::pair<int const, advancealtar::ActionDefine> > > const&)
0834e936 +0x7ac:  mov    %al,-0x15(%ebp)
0834e939 +0x7af:  mov    0xc(%ebp),%eax
0834e93c +0x7b2:  lea    0x2b8(%eax),%edx
0834e942 +0x7b8:  mov    0x8(%ebp),%eax
0834e945 +0x7bb:  add    $0x114,%eax
0834e94a +0x7c0:  mov    %edx,0x4(%esp)
0834e94e +0x7c4:  mov    %eax,(%esp)
0834e951 +0x7c7:  call   0838ba38 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1b4d8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1b4d8
0834e956 +0x7cc:  mov    0xc(%ebp),%eax
0834e959 +0x7cf:  movzbl 0x36e(%eax),%edx
0834e960 +0x7d6:  mov    0x8(%ebp),%eax
0834e963 +0x7d9:  mov    %dl,0x12c(%eax)
0834e969 +0x7df:  mov    $0x1,%ebx
0834e96e +0x7e4:  lea    -0x2b4(%ebp),%eax
0834e974 +0x7ea:  mov    %eax,(%esp)
0834e977 +0x7ed:  call   08377622 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x70c2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x70c2
0834e97c +0x7f2:  mov    %ebx,%eax
0834e97e +0x7f4:  lea    -0x8(%ebp),%esp
0834e981 +0x7f7:  add    $0x0,%esp
0834e984 +0x7fa:  pop    %ebx
0834e985 +0x7fb:  pop    %esi
0834e986 +0x7fc:  pop    %ebp
0834e987 +0x7fd:  ret
0834e988 +0x7fe:  mov    %edx,%ebx
0834e98a +0x800:  mov    %eax,%esi
0834e98c +0x802:  lea    -0x2b4(%ebp),%eax
0834e992 +0x808:  mov    %eax,(%esp)
0834e995 +0x80b:  call   08377622 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x70c2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x70c2
0834e99a +0x810:  mov    %esi,%eax
0834e99c +0x812:  mov    %ebx,%edx
0834e99e +0x814:  mov    %eax,(%esp)
0834e9a1 +0x817:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// CMap::set_map @ 0x834e18a

/* CMap::set_map(STMapScript) */

undefined4 __thiscall CMap::set_map(CMap *this,undefined4 *param_2)

{
  bool bVar1;
  char cVar2;
  STAssignMonster *pSVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int local_2b8;
  undefined1 local_2b4;
  int local_2b0;
  int local_294;
  undefined1 local_264;
  _List_iterator local_250 [4];
  _List_iterator<STAssignPassiveObject> local_24c [4];
  _List_iterator<STAssignSpecialPassiveObj> local_248 [4];
  __normal_iterator<STAssignMonster*,std::vector<STAssignMonster,std::allocator<STAssignMonster>>>
  local_244 [4];
  __normal_iterator local_240 [4];
  STAssignMonster local_23c [104];
  STAssignMonster local_1d4 [104];
  __normal_iterator<STAssignMonster*,std::vector<STAssignMonster,std::allocator<STAssignMonster>>>
  local_16c [4];
  __normal_iterator local_168 [4];
  STAssignMonster local_164 [104];
  STAssignMonster local_fc [104];
  __normal_iterator<STAssignMonster*,std::vector<STAssignMonster,std::allocator<STAssignMonster>>>
  local_94 [4];
  _List_iterator local_90 [4];
  STAssignMonster local_8c [104];
  _List_iterator<STAssignSpecialPassiveObj> local_24 [4];
  int local_20;
  undefined1 local_19;
  int local_18;
  uint local_14;
  int *local_10;
  
  *(undefined4 *)(this + 4) = *param_2;
  *(undefined4 *)(this + 8) = param_2[3];
  *(undefined4 *)(this + 0x80) = param_2[0x13];
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator=
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x84),
             (vector *)(param_2 + 4));
  std::list<int,std::allocator<int>>::operator=
            ((list<int,std::allocator<int>> *)(this + 0x24),(list *)(param_2 + 1));
  std::vector<STAssignBloodSystem,std::allocator<STAssignBloodSystem>>::operator=
            ((vector<STAssignBloodSystem,std::allocator<STAssignBloodSystem>> *)(this + 0xb8),
             (vector *)(param_2 + 0xa2));
  std::vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>>::operator=
            ((vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>> *)(this + 0xc4),
             (vector *)(param_2 + 0xa5));
  *(undefined4 *)(this + 0xb4) = param_2[0xa1];
  memcpy(this + 0x2c,param_2 + 0x40,0x20);
  memcpy(this + 0x4c,param_2 + 0x48,0x20);
  STAssignMonster::STAssignMonster((STAssignMonster *)&local_2b8);
  __gnu_cxx::
  __normal_iterator<STAssignMonster*,std::vector<STAssignMonster,std::allocator<STAssignMonster>>>::
  __normal_iterator(local_244);
                    /* try { // try from 0834e2b0 to 0834e2e8 has its CatchHandler @ 0834e988 */
  std::vector<STAssignMonster,std::allocator<STAssignMonster>>::begin();
  while( true ) {
    std::vector<STAssignMonster,std::allocator<STAssignMonster>>::end();
    bVar1 = __gnu_cxx::operator!=(local_244,local_240);
    if (!bVar1) break;
    pSVar3 = (STAssignMonster *)
             __gnu_cxx::
             __normal_iterator<STAssignMonster*,std::vector<STAssignMonster,std::allocator<STAssignMonster>>>
             ::operator*(local_244);
    STAssignMonster::STAssignMonster(local_23c,pSVar3);
                    /* try { // try from 0834e2fc to 0834e300 has its CatchHandler @ 0834e303 */
    STAssignMonster::operator=((STAssignMonster *)&local_2b8,local_23c);
                    /* try { // try from 0834e327 to 0834e382 has its CatchHandler @ 0834e988 */
    STAssignMonster::~STAssignMonster(local_23c);
    if ((*(int *)(this + 8) == 2) && (local_294 == 3)) {
      local_294 = 1;
      local_264 = 1;
    }
    if (local_294 == 3) {
      *(int *)this = *(int *)this + 1;
    }
    STAssignMonster::STAssignMonster(local_1d4,(STAssignMonster *)&local_2b8);
                    /* try { // try from 0834e39b to 0834e39f has its CatchHandler @ 0834e3a2 */
    insert_monster(this,local_1d4,0xffffffff);
                    /* try { // try from 0834e3c6 to 0834e474 has its CatchHandler @ 0834e988 */
    STAssignMonster::~STAssignMonster(local_1d4);
    __gnu_cxx::
    __normal_iterator<STAssignMonster*,std::vector<STAssignMonster,std::allocator<STAssignMonster>>>
    ::operator++(local_16c,(int)local_244);
  }
  std::vector<STAssignMonster,std::allocator<STAssignMonster>>::begin();
  while( true ) {
    std::vector<STAssignMonster,std::allocator<STAssignMonster>>::end();
    bVar1 = __gnu_cxx::operator!=(local_244,local_168);
    if (!bVar1) break;
    pSVar3 = (STAssignMonster *)
             __gnu_cxx::
             __normal_iterator<STAssignMonster*,std::vector<STAssignMonster,std::allocator<STAssignMonster>>>
             ::operator*(local_244);
    STAssignMonster::STAssignMonster(local_164,pSVar3);
                    /* try { // try from 0834e488 to 0834e48c has its CatchHandler @ 0834e48f */
    STAssignMonster::operator=((STAssignMonster *)&local_2b8,local_164);
                    /* try { // try from 0834e4b3 to 0834e4cf has its CatchHandler @ 0834e988 */
    STAssignMonster::~STAssignMonster(local_164);
    STAssignMonster::STAssignMonster(local_fc,(STAssignMonster *)&local_2b8);
                    /* try { // try from 0834e4e0 to 0834e4e4 has its CatchHandler @ 0834e4e7 */
    insert_condition_monster(this,local_fc);
                    /* try { // try from 0834e50b to 0834e69c has its CatchHandler @ 0834e988 */
    STAssignMonster::~STAssignMonster(local_fc);
    __gnu_cxx::
    __normal_iterator<STAssignMonster*,std::vector<STAssignMonster,std::allocator<STAssignMonster>>>
    ::operator++(local_94,(int)local_244);
  }
  local_20 = 0;
  cVar2 = std::list<STAssignSpecialPassiveObj,std::allocator<STAssignSpecialPassiveObj>>::empty
                    ((list<STAssignSpecialPassiveObj,std::allocator<STAssignSpecialPassiveObj>> *)
                     (param_2 + 0x16));
  if (cVar2 != '\x01') {
    std::list<STAssignSpecialPassiveObj,std::allocator<STAssignSpecialPassiveObj>>::begin();
    while( true ) {
      std::list<STAssignSpecialPassiveObj,std::allocator<STAssignSpecialPassiveObj>>::end();
      cVar2 = std::_List_iterator<STAssignSpecialPassiveObj>::operator!=(local_248,local_90);
      if (cVar2 == '\0') break;
      local_18 = std::_List_iterator<STAssignSpecialPassiveObj>::operator*(local_248);
      local_14 = 0;
      while (uVar4 = std::vector<SPOBJ_ACTION_DATAS,std::allocator<SPOBJ_ACTION_DATAS>>::size
                               ((vector<SPOBJ_ACTION_DATAS,std::allocator<SPOBJ_ACTION_DATAS>> *)
                                (local_18 + 0x10)), local_14 < uVar4) {
        local_10 = (int *)std::vector<SPOBJ_ACTION_DATAS,std::allocator<SPOBJ_ACTION_DATAS>>::
                          operator[]((vector<SPOBJ_ACTION_DATAS,std::allocator<SPOBJ_ACTION_DATAS>>
                                      *)(local_18 + 0x10),local_14);
        if (*local_10 == 0) {
          if ((((local_10[4] != 0) &&
               (iVar7 = get_rand_int(100), iVar7 <= (local_10[3] * 100) / local_10[4])) &&
              (local_10[2] < 0xc9)) && (0 < local_10[2])) {
            STAssignMonster::Clear((STAssignMonster *)&local_2b8);
            local_2b8 = local_10[1];
            local_2b0 = local_10[2];
            local_2b4 = 0;
            STAssignMonster::STAssignMonster(local_8c,(STAssignMonster *)&local_2b8);
                    /* try { // try from 0834e6b4 to 0834e6b8 has its CatchHandler @ 0834e6bb */
            insert_monster(this,local_8c,local_20);
                    /* try { // try from 0834e6df to 0834e955 has its CatchHandler @ 0834e988 */
            STAssignMonster::~STAssignMonster(local_8c);
          }
        }
        else if (*local_10 == 2) {
          insert_item(this,local_10[1],local_10[2],local_10[3],*(int *)(local_18 + 0x1c));
        }
        local_14 = local_14 + 1;
      }
      local_20 = local_20 + 1;
      std::_List_iterator<STAssignSpecialPassiveObj>::operator++(local_24,(int)local_248);
    }
  }
  std::vector<STRivalMapData,std::allocator<STRivalMapData>>::operator=
            ((vector<STRivalMapData,std::allocator<STRivalMapData>> *)(this + 0x90),
             (vector *)(param_2 + 0x94));
  std::vector<STRivalMapData,std::allocator<STRivalMapData>>::operator=
            ((vector<STRivalMapData,std::allocator<STRivalMapData>> *)(this + 0x9c),
             (vector *)(param_2 + 0x9e));
  *(undefined4 *)(this + 0x78) = param_2[0x9a];
  std::vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>>::operator=
            ((vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>> *)
             (this + 0x6c),(vector *)(param_2 + 0x97));
  uVar5 = std::vector<AssignNpc,std::allocator<AssignNpc>>::size
                    ((vector<AssignNpc,std::allocator<AssignNpc>> *)(param_2 + 0x18));
  *(undefined4 *)(this + 0x7c) = uVar5;
  cVar2 = std::list<STAssignPassiveObject,std::allocator<STAssignPassiveObject>>::empty
                    ((list<STAssignPassiveObject,std::allocator<STAssignPassiveObject>> *)
                     (param_2 + 0xb));
  if (cVar2 != '\x01') {
    std::list<STAssignPassiveObject,std::allocator<STAssignPassiveObject>>::begin();
    std::list<STAssignPassiveObject,std::allocator<STAssignPassiveObject>>::end();
    while (cVar2 = std::_List_iterator<STAssignPassiveObject>::operator!=(local_24c,local_250),
          cVar2 != '\0') {
      piVar6 = (int *)std::_List_iterator<STAssignPassiveObject>::operator*(local_24c);
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)(this + 0xa8),piVar6);
      std::_List_iterator<STAssignPassiveObject>::operator++(local_24c);
    }
  }
  *(undefined4 *)(this + 0xec) = param_2[0xc9];
  *(undefined4 *)(this + 0xf0) = param_2[0xca];
  advancealtar::TimeLine::operator=((TimeLine *)(this + 0xf4),(TimeLine *)(param_2 + 0xcc));
  *(undefined4 *)(this + 0x110) = param_2[0x5e];
  iVar7 = G_CDataManager();
  local_19 = advancealtar::StageTimeLineParameter::checkAndSetActionDefine
                       ((TimeLine *)(this + 0xf4),(map *)(iVar7 + 0x62e8));
  std::
  map<char,std::vector<TournamentMonster,std::allocator<TournamentMonster>>,std::less<char>,std::allocator<std::pair<char_const,std::vector<TournamentMonster,std::allocator<TournamentMonster>>>>>
  ::operator=((map<char,std::vector<TournamentMonster,std::allocator<TournamentMonster>>,std::less<char>,std::allocator<std::pair<char_const,std::vector<TournamentMonster,std::allocator<TournamentMonster>>>>>
               *)(this + 0x114),(map *)(param_2 + 0xae));
  this[300] = *(CMap *)((int)param_2 + 0x36e);
  STAssignMonster::~STAssignMonster((STAssignMonster *)&local_2b8);
  return 1;
}
```
