# ConsistMap

`_ZN8WarField10ConsistMapEPvPK8CDungeonPK4CMaphi`

`WarField::ConsistMap(void*, CDungeon const*, CMap const*, unsigned char, int)`

| 类 | 地址 |
|---|---|
| `WarField` | `0x086b8a38` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086b8a38  _ZN8WarField10ConsistMapEPvPK8CDungeonPK4CMaphi
#           WarField::ConsistMap(void*, CDungeon const*, CMap const*, unsigned char, int)
# range [0x086b8a38, 0x086b92e1]
086b8a38 +0x000:  push   %ebp
086b8a39 +0x001:  mov    %esp,%ebp
086b8a3b +0x003:  push   %esi
086b8a3c +0x004:  push   %ebx
086b8a3d +0x005:  sub    $0xb40,%esp
086b8a43 +0x00b:  mov    0x18(%ebp),%eax
086b8a46 +0x00e:  mov    %al,-0xb1c(%ebp)
086b8a4c +0x014:  cmpl   $0x0,0x1c(%ebp)
086b8a50 +0x018:  jne    086b8a93 <+0x5b>
086b8a52 +0x01a:  movl   $0x5,0xc(%esp)
086b8a5a +0x022:  movl   $0x3b,0x8(%esp)
086b8a62 +0x02a:  movl   $&_ZZN8WarField10ConsistMapEPvPK8CDungeonPK4CMaphiE19__PRETTY_FUNCTION__,0x4(%esp)
086b8a6a +0x032:  lea    -0x3b8(%ebp),%eax
086b8a70 +0x038:  mov    %eax,(%esp)
086b8a73 +0x03b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086b8a78 +0x040:  movl   $"WarField::ConsistMap playerCount is 0",0x4(%esp)
086b8a80 +0x048:  lea    -0x3b8(%ebp),%eax
086b8a86 +0x04e:  mov    %eax,(%esp)
086b8a89 +0x051:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086b8a8e +0x056:  jmp    086b92d7 <+0x89f>
086b8a93 +0x05b:  mov    0xc(%ebp),%eax
086b8a96 +0x05e:  mov    %eax,-0x38(%ebp)
086b8a99 +0x061:  mov    -0x38(%ebp),%eax
086b8a9c +0x064:  movl   $0x5b,0x8(%esp)
086b8aa4 +0x06c:  movl   $0x0,0x4(%esp)
086b8aac +0x074:  mov    %eax,(%esp)
086b8aaf +0x077:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086b8ab4 +0x07c:  mov    0x10(%ebp),%eax
086b8ab7 +0x07f:  mov    0x7cc(%eax),%edx
086b8abd +0x085:  mov    -0x38(%ebp),%eax
086b8ac0 +0x088:  mov    %edx,0x4(%esp)
086b8ac4 +0x08c:  mov    %eax,(%esp)
086b8ac7 +0x08f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086b8acc +0x094:  mov    -0x38(%ebp),%eax
086b8acf +0x097:  mov    %eax,(%esp)
086b8ad2 +0x09a:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
086b8ad7 +0x09f:  mov    %eax,-0x3bc(%ebp)
086b8add +0x0a5:  mov    -0x38(%ebp),%eax
086b8ae0 +0x0a8:  movl   $0x0,0x4(%esp)
086b8ae8 +0x0b0:  mov    %eax,(%esp)
086b8aeb +0x0b3:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086b8af0 +0x0b8:  mov    0x8(%ebp),%eax
086b8af3 +0x0bb:  mov    0x44(%eax),%eax
086b8af6 +0x0be:  mov    %eax,-0x34(%ebp)
086b8af9 +0x0c1:  mov    0x8(%ebp),%eax
086b8afc +0x0c4:  mov    0xf4(%eax),%edx
086b8b02 +0x0ca:  mov    0x10(%ebp),%eax
086b8b05 +0x0cd:  mov    0x744(%eax),%eax
086b8b0b +0x0d3:  cmp    %eax,%edx
086b8b0d +0x0d5:  mov    0x8(%ebp),%eax
086b8b10 +0x0d8:  mov    0xf4(%eax),%eax
086b8b16 +0x0de:  mov    0x10(%ebp),%edx
086b8b19 +0x0e1:  add    $0x738,%edx
086b8b1f +0x0e7:  mov    %eax,0x4(%esp)
086b8b23 +0x0eb:  mov    %edx,(%esp)
086b8b26 +0x0ee:  call   080ea574 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x1ad>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x1ad
086b8b2b +0x0f3:  mov    (%eax),%eax
086b8b2d +0x0f5:  mov    %eax,%ecx
086b8b2f +0x0f7:  imul   0x1c(%ebp),%ecx
086b8b33 +0x0fb:  mov    $0x2aaaaaab,%edx
086b8b38 +0x100:  mov    %ecx,%eax
086b8b3a +0x102:  imul   %edx
086b8b3c +0x104:  mov    %ecx,%eax
086b8b3e +0x106:  sar    $0x1f,%eax
086b8b41 +0x109:  mov    %edx,%ecx
086b8b43 +0x10b:  sub    %eax,%ecx
086b8b45 +0x10d:  mov    %ecx,%eax
086b8b47 +0x10f:  mov    %eax,-0x3c0(%ebp)
086b8b4d +0x115:  movl   $0xa,-0x3a8(%ebp)
086b8b57 +0x11f:  lea    -0x3a8(%ebp),%eax
086b8b5d +0x125:  mov    %eax,0x4(%esp)
086b8b61 +0x129:  lea    -0x3c0(%ebp),%eax
086b8b67 +0x12f:  mov    %eax,(%esp)
086b8b6a +0x132:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
086b8b6f +0x137:  mov    (%eax),%eax
086b8b71 +0x139:  mov    %eax,-0x3c0(%ebp)
086b8b77 +0x13f:  mov    0x8(%ebp),%eax
086b8b7a +0x142:  add    $0x14,%eax
086b8b7d +0x145:  mov    %eax,(%esp)
086b8b80 +0x148:  call   08152966 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x229b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x229b
086b8b85 +0x14d:  test   %eax,%eax
086b8b87 +0x14f:  setne  %al
086b8b8a +0x152:  test   %al,%al
086b8b8c +0x154:  je     086b9269 <+0x831>
086b8b92 +0x15a:  movl   $0x5,0xc(%esp)
086b8b9a +0x162:  movl   $0x53,0x8(%esp)
086b8ba2 +0x16a:  movl   $&_ZZN8WarField10ConsistMapEPvPK8CDungeonPK4CMaphiE19__PRETTY_FUNCTION__,0x4(%esp)
086b8baa +0x172:  lea    -0x3a4(%ebp),%eax
086b8bb0 +0x178:  mov    %eax,(%esp)
086b8bb3 +0x17b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086b8bb8 +0x180:  movl   $"WarField::ConsistMap, 이미 몬스터가 존재합니다.",0x4(%esp)
086b8bc0 +0x188:  lea    -0x3a4(%ebp),%eax
086b8bc6 +0x18e:  mov    %eax,(%esp)
086b8bc9 +0x191:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086b8bce +0x196:  mov    0x8(%ebp),%eax
086b8bd1 +0x199:  add    $0x8,%eax
086b8bd4 +0x19c:  mov    %eax,(%esp)
086b8bd7 +0x19f:  call   081514ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xde3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xde3
086b8bdc +0x1a4:  jmp    086b9269 <+0x831>
086b8be1 +0x1a9:  movl   $0x0,-0x30(%ebp)
086b8be8 +0x1b0:  movl   $0x0,-0x2c(%ebp)
086b8bef +0x1b7:  jmp    086b8c1c <+0x1e4>
086b8bf1 +0x1b9:  mov    0x8(%ebp),%eax
086b8bf4 +0x1bc:  mov    0xf4(%eax),%eax
086b8bfa +0x1c2:  mov    0x10(%ebp),%edx
086b8bfd +0x1c5:  add    $0x7a4,%edx
086b8c03 +0x1cb:  mov    %eax,0x4(%esp)
086b8c07 +0x1cf:  mov    %edx,(%esp)
086b8c0a +0x1d2:  call   086ba4a6 <_GLOBAL__I__ZN8WarField5ResetEv+0x1d>  ; global constructors keyed to WarField::Reset()+0x1d
086b8c0f +0x1d7:  mov    -0x2c(%ebp),%edx
086b8c12 +0x1da:  mov    (%eax,%edx,4),%eax
086b8c15 +0x1dd:  add    %eax,-0x30(%ebp)
086b8c18 +0x1e0:  addl   $0x1,-0x2c(%ebp)
086b8c1c +0x1e4:  cmpl   $0x3,-0x2c(%ebp)
086b8c20 +0x1e8:  setle  %al
086b8c23 +0x1eb:  test   %al,%al
086b8c25 +0x1ed:  jne    086b8bf1 <+0x1b9>
086b8c27 +0x1ef:  cmpl   $0x0,-0x30(%ebp)
086b8c2b +0x1f3:  jne    086b8c5e <+0x226>
086b8c2d +0x1f5:  movl   $"WARROOM::SpawnMonster : 몬스터타입확률의 총합이 0입니다",0x10(%esp)
086b8c35 +0x1fd:  movl   $0x65,0xc(%esp)
086b8c3d +0x205:  movl   $&_ZZN8WarField10ConsistMapEPvPK8CDungeonPK4CMaphiE19__PRETTY_FUNCTION__,0x8(%esp)
086b8c45 +0x20d:  movl   $"WarField.cpp",0x4(%esp)
086b8c4d +0x215:  movl   $0x1,(%esp)
086b8c54 +0x21c:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
086b8c59 +0x221:  jmp    086b92d7 <+0x89f>
086b8c5e +0x226:  mov    -0x30(%ebp),%eax
086b8c61 +0x229:  mov    %eax,(%esp)
086b8c64 +0x22c:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
086b8c69 +0x231:  mov    %eax,-0x28(%ebp)
086b8c6c +0x234:  movl   $0x0,-0x30(%ebp)
086b8c73 +0x23b:  movl   $0x0,-0x2c(%ebp)
086b8c7a +0x242:  jmp    086b8caf <+0x277>
086b8c7c +0x244:  mov    0x8(%ebp),%eax
086b8c7f +0x247:  mov    0xf4(%eax),%eax
086b8c85 +0x24d:  mov    0x10(%ebp),%edx
086b8c88 +0x250:  add    $0x7a4,%edx
086b8c8e +0x256:  mov    %eax,0x4(%esp)
086b8c92 +0x25a:  mov    %edx,(%esp)
086b8c95 +0x25d:  call   086ba4a6 <_GLOBAL__I__ZN8WarField5ResetEv+0x1d>  ; global constructors keyed to WarField::Reset()+0x1d
086b8c9a +0x262:  mov    -0x2c(%ebp),%edx
086b8c9d +0x265:  mov    (%eax,%edx,4),%eax
086b8ca0 +0x268:  add    %eax,-0x30(%ebp)
086b8ca3 +0x26b:  mov    -0x28(%ebp),%eax
086b8ca6 +0x26e:  cmp    -0x30(%ebp),%eax
086b8ca9 +0x271:  jl     086b8cbc <+0x284>
086b8cab +0x273:  addl   $0x1,-0x2c(%ebp)
086b8caf +0x277:  cmpl   $0x3,-0x2c(%ebp)
086b8cb3 +0x27b:  setle  %al
086b8cb6 +0x27e:  test   %al,%al
086b8cb8 +0x280:  jne    086b8c7c <+0x244>
086b8cba +0x282:  jmp    086b8cbd <+0x285>
086b8cbc +0x284:  nop
086b8cbd +0x285:  mov    -0x2c(%ebp),%eax
086b8cc0 +0x288:  mov    %eax,-0x24(%ebp)
086b8cc3 +0x28b:  movl   $0x0,-0x30(%ebp)
086b8cca +0x292:  mov    -0x24(%ebp),%edx
086b8ccd +0x295:  mov    %edx,%eax
086b8ccf +0x297:  add    %eax,%eax
086b8cd1 +0x299:  add    %edx,%eax
086b8cd3 +0x29b:  shl    $0x2,%eax
086b8cd6 +0x29e:  add    $0x700,%eax
086b8cdb +0x2a3:  add    0x10(%ebp),%eax
086b8cde +0x2a6:  add    $0x8,%eax
086b8ce1 +0x2a9:  mov    %eax,(%esp)
086b8ce4 +0x2ac:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
086b8ce9 +0x2b1:  mov    %eax,-0x20(%ebp)
086b8cec +0x2b4:  movl   $0x0,-0x2c(%ebp)
086b8cf3 +0x2bb:  jmp    086b8dbb <+0x383>
086b8cf8 +0x2c0:  mov    -0x2c(%ebp),%ecx
086b8cfb +0x2c3:  mov    -0x24(%ebp),%edx
086b8cfe +0x2c6:  mov    %edx,%eax
086b8d00 +0x2c8:  add    %eax,%eax
086b8d02 +0x2ca:  add    %edx,%eax
086b8d04 +0x2cc:  shl    $0x2,%eax
086b8d07 +0x2cf:  add    $0x700,%eax
086b8d0c +0x2d4:  add    0x10(%ebp),%eax
086b8d0f +0x2d7:  add    $0x8,%eax
086b8d12 +0x2da:  mov    %ecx,0x4(%esp)
086b8d16 +0x2de:  mov    %eax,(%esp)
086b8d19 +0x2e1:  call   083878f6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x17396>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x17396
086b8d1e +0x2e6:  mov    (%eax),%ebx
086b8d20 +0x2e8:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086b8d25 +0x2ed:  mov    %ebx,0x4(%esp)
086b8d29 +0x2f1:  mov    %eax,(%esp)
086b8d2c +0x2f4:  call   0835fd84 <_ZNK12CDataManager12find_monsterEi>  ; CDataManager::find_monster(int) const
086b8d31 +0x2f9:  mov    %eax,-0xc(%ebp)
086b8d34 +0x2fc:  cmpl   $0x0,-0xc(%ebp)
086b8d38 +0x300:  jne    086b8d97 <+0x35f>
086b8d3a +0x302:  mov    -0x2c(%ebp),%ecx
086b8d3d +0x305:  mov    -0x24(%ebp),%edx
086b8d40 +0x308:  mov    %edx,%eax
086b8d42 +0x30a:  add    %eax,%eax
086b8d44 +0x30c:  add    %edx,%eax
086b8d46 +0x30e:  shl    $0x2,%eax
086b8d49 +0x311:  add    $0x700,%eax
086b8d4e +0x316:  add    0x10(%ebp),%eax
086b8d51 +0x319:  add    $0x8,%eax
086b8d54 +0x31c:  mov    %ecx,0x4(%esp)
086b8d58 +0x320:  mov    %eax,(%esp)
086b8d5b +0x323:  call   083878f6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x17396>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x17396
086b8d60 +0x328:  mov    (%eax),%eax
086b8d62 +0x32a:  mov    %eax,0x14(%esp)
086b8d66 +0x32e:  movl   $"WARROOM Find Monster[%d] Error",0x10(%esp)
086b8d6e +0x336:  movl   $0x96,0xc(%esp)
086b8d76 +0x33e:  movl   $&_ZZN8WarField10ConsistMapEPvPK8CDungeonPK4CMaphiE19__PRETTY_FUNCTION__,0x8(%esp)
086b8d7e +0x346:  movl   $"WarField.cpp",0x4(%esp)
086b8d86 +0x34e:  movl   $0x1,(%esp)
086b8d8d +0x355:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
086b8d92 +0x35a:  jmp    086b92d7 <+0x89f>
086b8d97 +0x35f:  mov    -0x2c(%ebp),%eax
086b8d9a +0x362:  mov    -0xc(%ebp),%edx
086b8d9d +0x365:  mov    0x1d24(%edx),%edx
086b8da3 +0x36b:  mov    %edx,-0xb0c(%ebp,%eax,4)
086b8daa +0x372:  mov    -0x2c(%ebp),%eax
086b8dad +0x375:  mov    -0xb0c(%ebp,%eax,4),%eax
086b8db4 +0x37c:  add    %eax,-0x30(%ebp)
086b8db7 +0x37f:  addl   $0x1,-0x2c(%ebp)
086b8dbb +0x383:  mov    -0x20(%ebp),%eax
086b8dbe +0x386:  cmp    -0x2c(%ebp),%eax
086b8dc1 +0x389:  setg   %al
086b8dc4 +0x38c:  test   %al,%al
086b8dc6 +0x38e:  jne    086b8cf8 <+0x2c0>
086b8dcc +0x394:  cmpl   $0x0,-0x30(%ebp)
086b8dd0 +0x398:  jne    086b8e0a <+0x3d2>
086b8dd2 +0x39a:  mov    -0x24(%ebp),%eax
086b8dd5 +0x39d:  mov    %eax,0x14(%esp)
086b8dd9 +0x3a1:  movl   $"WARROOM::SpawnMonster : 타입(%d)의 몬스터리스트 확률의 총합이 0입니다",0x10(%esp)
086b8de1 +0x3a9:  movl   $0x9f,0xc(%esp)
086b8de9 +0x3b1:  movl   $&_ZZN8WarField10ConsistMapEPvPK8CDungeonPK4CMaphiE19__PRETTY_FUNCTION__,0x8(%esp)
086b8df1 +0x3b9:  movl   $"WarField.cpp",0x4(%esp)
086b8df9 +0x3c1:  movl   $0x1,(%esp)
086b8e00 +0x3c8:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
086b8e05 +0x3cd:  jmp    086b92d7 <+0x89f>
086b8e0a +0x3d2:  mov    -0x30(%ebp),%eax
086b8e0d +0x3d5:  mov    %eax,(%esp)
086b8e10 +0x3d8:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
086b8e15 +0x3dd:  mov    %eax,-0x28(%ebp)
086b8e18 +0x3e0:  movl   $0x0,-0x30(%ebp)
086b8e1f +0x3e7:  movl   $0x0,-0x2c(%ebp)
086b8e26 +0x3ee:  jmp    086b8e41 <+0x409>
086b8e28 +0x3f0:  mov    -0x2c(%ebp),%eax
086b8e2b +0x3f3:  mov    -0xb0c(%ebp,%eax,4),%eax
086b8e32 +0x3fa:  add    %eax,-0x30(%ebp)
086b8e35 +0x3fd:  mov    -0x28(%ebp),%eax
086b8e38 +0x400:  cmp    -0x30(%ebp),%eax
086b8e3b +0x403:  jl     086b8e50 <+0x418>
086b8e3d +0x405:  addl   $0x1,-0x2c(%ebp)
086b8e41 +0x409:  mov    -0x20(%ebp),%eax
086b8e44 +0x40c:  cmp    -0x2c(%ebp),%eax
086b8e47 +0x40f:  setg   %al
086b8e4a +0x412:  test   %al,%al
086b8e4c +0x414:  jne    086b8e28 <+0x3f0>
086b8e4e +0x416:  jmp    086b8e51 <+0x419>
086b8e50 +0x418:  nop
086b8e51 +0x419:  mov    -0x2c(%ebp),%eax
086b8e54 +0x41c:  mov    %eax,-0x1c(%ebp)
086b8e57 +0x41f:  mov    -0x2c(%ebp),%ecx
086b8e5a +0x422:  mov    -0x24(%ebp),%edx
086b8e5d +0x425:  mov    %edx,%eax
086b8e5f +0x427:  add    %eax,%eax
086b8e61 +0x429:  add    %edx,%eax
086b8e63 +0x42b:  shl    $0x2,%eax
086b8e66 +0x42e:  add    $0x700,%eax
086b8e6b +0x433:  add    0x10(%ebp),%eax
086b8e6e +0x436:  add    $0x8,%eax
086b8e71 +0x439:  mov    %ecx,0x4(%esp)
086b8e75 +0x43d:  mov    %eax,(%esp)
086b8e78 +0x440:  call   083878f6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x17396>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x17396
086b8e7d +0x445:  mov    (%eax),%ebx
086b8e7f +0x447:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086b8e84 +0x44c:  mov    %ebx,0x4(%esp)
086b8e88 +0x450:  mov    %eax,(%esp)
086b8e8b +0x453:  call   0835fd84 <_ZNK12CDataManager12find_monsterEi>  ; CDataManager::find_monster(int) const
086b8e90 +0x458:  mov    %eax,-0x18(%ebp)
086b8e93 +0x45b:  cmpl   $0x0,-0x18(%ebp)
086b8e97 +0x45f:  jne    086b8eca <+0x492>
086b8e99 +0x461:  movl   $"WARROOM::ConsistMap pMob is Null",0x10(%esp)
086b8ea1 +0x469:  movl   $0xbc,0xc(%esp)
086b8ea9 +0x471:  movl   $&_ZZN8WarField10ConsistMapEPvPK8CDungeonPK4CMaphiE19__PRETTY_FUNCTION__,0x8(%esp)
086b8eb1 +0x479:  movl   $"WarField.cpp",0x4(%esp)
086b8eb9 +0x481:  movl   $0x1,(%esp)
086b8ec0 +0x488:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
086b8ec5 +0x48d:  jmp    086b92d7 <+0x89f>
086b8eca +0x492:  movl   $0x0,-0x30(%ebp)
086b8ed1 +0x499:  movl   $0x0,-0x2c(%ebp)
086b8ed8 +0x4a0:  jmp    086b8efc <+0x4c4>
086b8eda +0x4a2:  mov    -0x2c(%ebp),%eax
086b8edd +0x4a5:  mov    0x14(%ebp),%edx
086b8ee0 +0x4a8:  add    $0x90,%edx
086b8ee6 +0x4ae:  mov    %eax,0x4(%esp)
086b8eea +0x4b2:  mov    %edx,(%esp)
086b8eed +0x4b5:  call   086ba4b8 <_GLOBAL__I__ZN8WarField5ResetEv+0x2f>  ; global constructors keyed to WarField::Reset()+0x2f
086b8ef2 +0x4ba:  mov    0x8(%eax),%eax
086b8ef5 +0x4bd:  add    %eax,-0x30(%ebp)
086b8ef8 +0x4c0:  addl   $0x1,-0x2c(%ebp)
086b8efc +0x4c4:  mov    0x14(%ebp),%eax
086b8eff +0x4c7:  add    $0x90,%eax
086b8f04 +0x4cc:  mov    %eax,(%esp)
086b8f07 +0x4cf:  call   0831093a <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x251f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x251f
086b8f0c +0x4d4:  cmp    -0x2c(%ebp),%eax
086b8f0f +0x4d7:  setg   %al
086b8f12 +0x4da:  test   %al,%al
086b8f14 +0x4dc:  jne    086b8eda <+0x4a2>
086b8f16 +0x4de:  cmpl   $0x0,-0x30(%ebp)
086b8f1a +0x4e2:  jne    086b8f4d <+0x515>
086b8f1c +0x4e4:  movl   $"WARROOM::SpawnMonster : 스폰위치확률의 총합이 0입니다",0x10(%esp)
086b8f24 +0x4ec:  movl   $0xd0,0xc(%esp)
086b8f2c +0x4f4:  movl   $&_ZZN8WarField10ConsistMapEPvPK8CDungeonPK4CMaphiE19__PRETTY_FUNCTION__,0x8(%esp)
086b8f34 +0x4fc:  movl   $"WarField.cpp",0x4(%esp)
086b8f3c +0x504:  movl   $0x1,(%esp)
086b8f43 +0x50b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
086b8f48 +0x510:  jmp    086b92d7 <+0x89f>
086b8f4d +0x515:  mov    -0x30(%ebp),%eax
086b8f50 +0x518:  mov    %eax,(%esp)
086b8f53 +0x51b:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
086b8f58 +0x520:  mov    %eax,-0x28(%ebp)
086b8f5b +0x523:  movl   $0x0,-0x30(%ebp)
086b8f62 +0x52a:  movl   $0x0,-0x2c(%ebp)
086b8f69 +0x531:  jmp    086b8f95 <+0x55d>
086b8f6b +0x533:  mov    -0x2c(%ebp),%eax
086b8f6e +0x536:  mov    0x14(%ebp),%edx
086b8f71 +0x539:  add    $0x90,%edx
086b8f77 +0x53f:  mov    %eax,0x4(%esp)
086b8f7b +0x543:  mov    %edx,(%esp)
086b8f7e +0x546:  call   086ba4b8 <_GLOBAL__I__ZN8WarField5ResetEv+0x2f>  ; global constructors keyed to WarField::Reset()+0x2f
086b8f83 +0x54b:  mov    0x8(%eax),%eax
086b8f86 +0x54e:  add    %eax,-0x30(%ebp)
086b8f89 +0x551:  mov    -0x28(%ebp),%eax
086b8f8c +0x554:  cmp    -0x30(%ebp),%eax
086b8f8f +0x557:  jl     086b8fb1 <+0x579>
086b8f91 +0x559:  addl   $0x1,-0x2c(%ebp)
086b8f95 +0x55d:  mov    0x14(%ebp),%eax
086b8f98 +0x560:  add    $0x90,%eax
086b8f9d +0x565:  mov    %eax,(%esp)
086b8fa0 +0x568:  call   0831093a <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x251f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x251f
086b8fa5 +0x56d:  cmp    -0x2c(%ebp),%eax
086b8fa8 +0x570:  setg   %al
086b8fab +0x573:  test   %al,%al
086b8fad +0x575:  jne    086b8f6b <+0x533>
086b8faf +0x577:  jmp    086b8fb2 <+0x57a>
086b8fb1 +0x579:  nop
086b8fb2 +0x57a:  mov    -0x2c(%ebp),%eax
086b8fb5 +0x57d:  mov    %eax,-0x14(%ebp)
086b8fb8 +0x580:  lea    -0x70c(%ebp),%eax
086b8fbe +0x586:  mov    %eax,(%esp)
086b8fc1 +0x589:  call   081511c8 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xafd>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xafd
086b8fc6 +0x58e:  mov    -0x34(%ebp),%eax
086b8fc9 +0x591:  mov    %eax,-0x708(%ebp)
086b8fcf +0x597:  addl   $0x1,-0x34(%ebp)
086b8fd3 +0x59b:  mov    -0x24(%ebp),%eax
086b8fd6 +0x59e:  mov    %al,-0x704(%ebp)
086b8fdc +0x5a4:  mov    -0x18(%ebp),%eax
086b8fdf +0x5a7:  mov    %eax,(%esp)
086b8fe2 +0x5aa:  call   083748ce <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xe89a>  ; global constructors keyed to CServerEvent::m_nExpRate+0xe89a
086b8fe7 +0x5af:  mov    %eax,-0x700(%ebp)
086b8fed +0x5b5:  movzbl -0xb1c(%ebp),%eax
086b8ff4 +0x5bc:  mov    %al,-0x6fc(%ebp)
086b8ffa +0x5c2:  movb   $0x1,-0x6fb(%ebp)
086b9001 +0x5c9:  movb   $0x1,-0x6fa(%ebp)
086b9008 +0x5d0:  mov    0x10(%ebp),%eax
086b900b +0x5d3:  flds   0x7b0(%eax)
086b9011 +0x5d9:  mov    $0x6,%eax
086b9016 +0x5de:  sub    0x1c(%ebp),%eax
086b9019 +0x5e1:  mov    %eax,-0xb20(%ebp)
086b901f +0x5e7:  fildl  -0xb20(%ebp)
086b9025 +0x5ed:  fmulp  %st,%st(1)
086b9027 +0x5ef:  fld1
086b9029 +0x5f1:  faddp  %st,%st(1)
086b902b +0x5f3:  fstps  -0x6f4(%ebp)
086b9031 +0x5f9:  mov    0x10(%ebp),%eax
086b9034 +0x5fc:  flds   0x7b4(%eax)
086b903a +0x602:  mov    $0x6,%eax
086b903f +0x607:  sub    0x1c(%ebp),%eax
086b9042 +0x60a:  mov    %eax,-0xb20(%ebp)
086b9048 +0x610:  fildl  -0xb20(%ebp)
086b904e +0x616:  fmulp  %st,%st(1)
086b9050 +0x618:  fld1
086b9052 +0x61a:  faddp  %st,%st(1)
086b9054 +0x61c:  fstps  -0x6e4(%ebp)
086b905a +0x622:  lea    -0x70c(%ebp),%eax
086b9060 +0x628:  mov    %eax,0x4(%esp)
086b9064 +0x62c:  lea    -0x394(%ebp),%eax
086b906a +0x632:  mov    %eax,(%esp)
086b906d +0x635:  call   08151aea <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x141f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x141f
086b9072 +0x63a:  mov    0x8(%ebp),%eax
086b9075 +0x63d:  lea    0x8(%eax),%edx
086b9078 +0x640:  lea    -0x394(%ebp),%eax
086b907e +0x646:  mov    %eax,0x4(%esp)
086b9082 +0x64a:  mov    %edx,(%esp)
086b9085 +0x64d:  call   08151612 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xf47>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xf47
086b908a +0x652:  jmp    086b90a7 <+0x66f>
086b908c +0x654:  mov    %edx,%ebx
086b908e +0x656:  mov    %eax,%esi
086b9090 +0x658:  lea    -0x394(%ebp),%eax
086b9096 +0x65e:  mov    %eax,(%esp)
086b9099 +0x661:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
086b909e +0x666:  mov    %esi,%eax
086b90a0 +0x668:  mov    %ebx,%edx
086b90a2 +0x66a:  jmp    086b923d <+0x805>
086b90a7 +0x66f:  lea    -0x394(%ebp),%eax
086b90ad +0x675:  mov    %eax,(%esp)
086b90b0 +0x678:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
086b90b5 +0x67d:  mov    -0x3c0(%ebp),%edx
086b90bb +0x683:  mov    -0x24(%ebp),%ecx
086b90be +0x686:  mov    0x10(%ebp),%eax
086b90c1 +0x689:  add    $0x1ec,%ecx
086b90c7 +0x68f:  mov    0x8(%eax,%ecx,4),%eax
086b90cb +0x693:  mov    %edx,%ecx
086b90cd +0x695:  sub    %eax,%ecx
086b90cf +0x697:  mov    %ecx,%eax
086b90d1 +0x699:  mov    %eax,-0x3c0(%ebp)
086b90d7 +0x69f:  mov    -0x708(%ebp),%edx
086b90dd +0x6a5:  mov    -0x38(%ebp),%eax
086b90e0 +0x6a8:  mov    %edx,0x4(%esp)
086b90e4 +0x6ac:  mov    %eax,(%esp)
086b90e7 +0x6af:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086b90ec +0x6b4:  mov    -0x38(%ebp),%eax
086b90ef +0x6b7:  mov    -0x24(%ebp),%edx
086b90f2 +0x6ba:  mov    %edx,0x4(%esp)
086b90f6 +0x6be:  mov    %eax,(%esp)
086b90f9 +0x6c1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086b90fe +0x6c6:  movzbl -0xb1c(%ebp),%edx
086b9105 +0x6cd:  mov    -0x38(%ebp),%eax
086b9108 +0x6d0:  mov    %edx,0x4(%esp)
086b910c +0x6d4:  mov    %eax,(%esp)
086b910f +0x6d7:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086b9114 +0x6dc:  mov    -0x38(%ebp),%eax
086b9117 +0x6df:  mov    -0x1c(%ebp),%edx
086b911a +0x6e2:  mov    %edx,0x4(%esp)
086b911e +0x6e6:  mov    %eax,(%esp)
086b9121 +0x6e9:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086b9126 +0x6ee:  mov    -0x38(%ebp),%eax
086b9129 +0x6f1:  mov    -0x14(%ebp),%edx
086b912c +0x6f4:  mov    %edx,0x4(%esp)
086b9130 +0x6f8:  mov    %eax,(%esp)
086b9133 +0x6fb:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086b9138 +0x700:  mov    0x10(%ebp),%eax
086b913b +0x703:  mov    0x7e0(%eax),%ebx
086b9141 +0x709:  mov    0x10(%ebp),%eax
086b9144 +0x70c:  mov    0x7e4(%eax),%eax
086b914a +0x712:  mov    %eax,(%esp)
086b914d +0x715:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
086b9152 +0x71a:  lea    (%ebx,%eax,1),%eax
086b9155 +0x71d:  mov    %eax,-0xb20(%ebp)
086b915b +0x723:  fildl  -0xb20(%ebp)
086b9161 +0x729:  mov    -0x24(%ebp),%edx
086b9164 +0x72c:  mov    0x10(%ebp),%eax
086b9167 +0x72f:  add    $0x1f0,%edx
086b916d +0x735:  flds   0x10(%eax,%edx,4)
086b9171 +0x739:  fmulp  %st,%st(1)
086b9173 +0x73b:  fnstcw -0xb22(%ebp)
086b9179 +0x741:  movzwl -0xb22(%ebp),%eax
086b9180 +0x748:  mov    $0xc,%ah
086b9182 +0x74a:  mov    %ax,-0xb24(%ebp)
086b9189 +0x751:  fldcw  -0xb24(%ebp)
086b918f +0x757:  fistpl -0x10(%ebp)
086b9192 +0x75a:  fldcw  -0xb22(%ebp)
086b9198 +0x760:  cmpl   $0x0,0x1c(%ebp)
086b919c +0x764:  jne    086b91f1 <+0x7b9>
086b919e +0x766:  movl   $0x5,0xc(%esp)
086b91a6 +0x76e:  movl   $0x107,0x8(%esp)
086b91ae +0x776:  movl   $&_ZZN8WarField10ConsistMapEPvPK8CDungeonPK4CMaphiE19__PRETTY_FUNCTION__,0x4(%esp)
086b91b6 +0x77e:  lea    -0x48(%ebp),%eax
086b91b9 +0x781:  mov    %eax,(%esp)
086b91bc +0x784:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086b91c1 +0x789:  movl   $"WarField::ConsistMap playerCount is 0",0x4(%esp)
086b91c9 +0x791:  lea    -0x48(%ebp),%eax
086b91cc +0x794:  mov    %eax,(%esp)
086b91cf +0x797:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086b91d4 +0x79c:  movl   $0x1,0x1c(%ebp)
086b91db +0x7a3:  fnstcw -0xb22(%ebp)
086b91e1 +0x7a9:  movzwl -0xb22(%ebp),%eax
086b91e8 +0x7b0:  mov    $0xc,%ah
086b91ea +0x7b2:  mov    %ax,-0xb24(%ebp)
086b91f1 +0x7b9:  fildl  -0x10(%ebp)
086b91f4 +0x7bc:  mov    0x1c(%ebp),%eax
086b91f7 +0x7bf:  sub    $0x1,%eax
086b91fa +0x7c2:  mov    %eax,-0xb20(%ebp)
086b9200 +0x7c8:  fildl  -0xb20(%ebp)
086b9206 +0x7ce:  fldl   &data#1cf1e2e6(.rodata)
086b920c +0x7d4:  fmulp  %st,%st(1)
086b920e +0x7d6:  fld1
086b9210 +0x7d8:  faddp  %st,%st(1)
086b9212 +0x7da:  fdivrp %st,%st(1)
086b9214 +0x7dc:  fldcw  -0xb24(%ebp)
086b921a +0x7e2:  fistpl -0xb20(%ebp)
086b9220 +0x7e8:  fldcw  -0xb22(%ebp)
086b9226 +0x7ee:  mov    -0xb20(%ebp),%edx
086b922c +0x7f4:  mov    -0x38(%ebp),%eax
086b922f +0x7f7:  mov    %edx,0x4(%esp)
086b9233 +0x7fb:  mov    %eax,(%esp)
086b9236 +0x7fe:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086b923b +0x803:  jmp    086b925b <+0x823>
086b923d +0x805:  mov    %edx,%ebx
086b923f +0x807:  mov    %eax,%esi
086b9241 +0x809:  lea    -0x70c(%ebp),%eax
086b9247 +0x80f:  mov    %eax,(%esp)
086b924a +0x812:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
086b924f +0x817:  mov    %esi,%eax
086b9251 +0x819:  mov    %ebx,%edx
086b9253 +0x81b:  mov    %eax,(%esp)
086b9256 +0x81e:  call   08ae3750 <_Unwind_Resume>
086b925b +0x823:  lea    -0x70c(%ebp),%eax
086b9261 +0x829:  mov    %eax,(%esp)
086b9264 +0x82c:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
086b9269 +0x831:  mov    -0x3c0(%ebp),%eax
086b926f +0x837:  cmp    $0x9,%eax
086b9272 +0x83a:  setg   %al
086b9275 +0x83d:  test   %al,%al
086b9277 +0x83f:  jne    086b8be1 <+0x1a9>
086b927d +0x845:  mov    0x8(%ebp),%eax
086b9280 +0x848:  mov    -0x34(%ebp),%edx
086b9283 +0x84b:  mov    %edx,0x44(%eax)
086b9286 +0x84e:  mov    0x8(%ebp),%eax
086b9289 +0x851:  mov    0xf4(%eax),%eax
086b928f +0x857:  lea    0x1(%eax),%edx
086b9292 +0x85a:  mov    0x8(%ebp),%eax
086b9295 +0x85d:  mov    %edx,0xf4(%eax)
086b929b +0x863:  mov    0x8(%ebp),%eax
086b929e +0x866:  add    $0x14,%eax
086b92a1 +0x869:  mov    %eax,(%esp)
086b92a4 +0x86c:  call   08152966 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x229b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x229b
086b92a9 +0x871:  mov    %eax,%edx
086b92ab +0x873:  mov    -0x38(%ebp),%eax
086b92ae +0x876:  mov    %edx,0x8(%esp)
086b92b2 +0x87a:  lea    -0x3bc(%ebp),%edx
086b92b8 +0x880:  mov    %edx,0x4(%esp)
086b92bc +0x884:  mov    %eax,(%esp)
086b92bf +0x887:  call   08116908 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x1d>  ; global constructors keyed to CEventManager::CEventManager()+0x1d
086b92c4 +0x88c:  mov    -0x38(%ebp),%eax
086b92c7 +0x88f:  movl   $0x1,0x4(%esp)
086b92cf +0x897:  mov    %eax,(%esp)
086b92d2 +0x89a:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086b92d7 +0x89f:  add    $0xb40,%esp
086b92dd +0x8a5:  pop    %ebx
086b92de +0x8a6:  pop    %esi
086b92df +0x8a7:  pop    %ebp
086b92e0 +0x8a8:  ret
086b92e1 +0x8a9:  nop
```

## 反编译 C

```c
// WarField::ConsistMap @ 0x86b8a38

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WarField::ConsistMap(void*, CDungeon const*, CMap const*, unsigned char, int) */

void __thiscall
WarField::ConsistMap
          (WarField *this,void *param_1,CDungeon *param_2,CMap *param_3,uchar param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int aiStack_b10 [256];
  map_monster local_710 [4];
  int local_70c;
  undefined1 local_708;
  undefined4 local_704;
  uchar local_700;
  undefined1 local_6ff;
  undefined1 local_6fe;
  float local_6f8;
  float local_6e8;
  int local_3c4;
  int local_3c0;
  cMyTrace local_3bc [16];
  int local_3ac;
  cMyTrace local_3a8 [16];
  map_monster local_398 [844];
  cMyTrace local_4c [16];
  InterfacePacketBuf *local_3c;
  int local_38;
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  CMonster *local_1c;
  uint local_18;
  int local_14;
  int local_10;
  
  if (param_5 == 0) {
    cMyTrace::cMyTrace(local_3bc,
                       "void WarField::ConsistMap(void*, const CDungeon*, const CMap*, byte, int)",
                       0x3b,5);
    cMyTrace::operator()(local_3bc,"WarField::ConsistMap playerCount is 0");
  }
  else {
    local_3c = param_1;
    InterfacePacketBuf::put_header(param_1,0,0x5b);
    InterfacePacketBuf::put_byte(local_3c,*(int *)(param_2 + 0x7cc));
    local_3c0 = InterfacePacketBuf::get_index(local_3c);
    InterfacePacketBuf::put_short(local_3c,0);
    local_38 = *(int *)(this + 0x44);
    piVar1 = (int *)std::vector<int,std::allocator<int>>::operator[]
                              ((vector<int,std::allocator<int>> *)(param_2 + 0x738),
                               *(uint *)(this + 0xf4));
    local_3c4 = (*piVar1 * param_5) / 6;
    local_3ac = 10;
    piVar1 = std::max<int>(&local_3c4,&local_3ac);
    local_3c4 = *piVar1;
    iVar2 = std::
            map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::
            size((map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>
                  *)(this + 0x14));
    if (iVar2 != 0) {
      cMyTrace::cMyTrace(local_3a8,
                         "void WarField::ConsistMap(void*, const CDungeon*, const CMap*, byte, int)"
                         ,0x53,5);
      cMyTrace::operator()(local_3a8,&DAT_08cf85a0);
      MapInfo::Clear((MapInfo *)(this + 8));
    }
    while (9 < local_3c4) {
      local_34 = 0;
      for (local_30 = 0; (int)local_30 < 4; local_30 = local_30 + 1) {
        iVar2 = std::vector<STMonsterTypeSpawnProb,std::allocator<STMonsterTypeSpawnProb>>::
                operator[]((vector<STMonsterTypeSpawnProb,std::allocator<STMonsterTypeSpawnProb>> *)
                           (param_2 + 0x7a4),*(uint *)(this + 0xf4));
        local_34 = local_34 + *(int *)(iVar2 + local_30 * 4);
      }
      if (local_34 == 0) {
        LogManager::logFormat
                  (1,"WarField.cpp",
                   "void WarField::ConsistMap(void*, const CDungeon*, const CMap*, byte, int)",0x65,
                   &DAT_08cf85d0);
        return;
      }
      local_2c = get_rand_int(local_34);
      local_34 = 0;
      for (local_30 = 0; (int)local_30 < 4; local_30 = local_30 + 1) {
        iVar2 = std::vector<STMonsterTypeSpawnProb,std::allocator<STMonsterTypeSpawnProb>>::
                operator[]((vector<STMonsterTypeSpawnProb,std::allocator<STMonsterTypeSpawnProb>> *)
                           (param_2 + 0x7a4),*(uint *)(this + 0xf4));
        local_34 = local_34 + *(int *)(iVar2 + local_30 * 4);
        if (local_2c < local_34) break;
      }
      local_28 = local_30;
      local_34 = 0;
      local_24 = std::vector<int,std::allocator<int>>::size
                           ((vector<int,std::allocator<int>> *)(param_2 + local_30 * 0xc + 0x708));
      for (local_30 = 0; (int)local_30 < local_24; local_30 = local_30 + 1) {
        std::vector<int,std::allocator<int>>::at
                  ((vector<int,std::allocator<int>> *)(param_2 + local_28 * 0xc + 0x708),local_30);
        iVar2 = G_CDataManager();
        local_10 = CDataManager::find_monster(iVar2);
        if (local_10 == 0) {
          puVar3 = (undefined4 *)
                   std::vector<int,std::allocator<int>>::at
                             ((vector<int,std::allocator<int>> *)(param_2 + local_28 * 0xc + 0x708),
                              local_30);
          LogManager::logFormat
                    (1,"WarField.cpp",
                     "void WarField::ConsistMap(void*, const CDungeon*, const CMap*, byte, int)",
                     0x96,"WARROOM Find Monster[%d] Error",*puVar3);
          return;
        }
        aiStack_b10[local_30] = *(int *)(local_10 + 0x1d24);
        local_34 = local_34 + aiStack_b10[local_30];
      }
      if (local_34 == 0) {
        LogManager::logFormat
                  (1,"WarField.cpp",
                   "void WarField::ConsistMap(void*, const CDungeon*, const CMap*, byte, int)",0x9f,
                   &DAT_08cf8638,local_28);
        return;
      }
      local_2c = get_rand_int(local_34);
      local_34 = 0;
      for (local_30 = 0;
          ((int)local_30 < local_24 &&
          (local_34 = local_34 + aiStack_b10[local_30], local_34 <= local_2c));
          local_30 = local_30 + 1) {
      }
      local_20 = local_30;
      std::vector<int,std::allocator<int>>::at
                ((vector<int,std::allocator<int>> *)(param_2 + local_28 * 0xc + 0x708),local_30);
      iVar2 = G_CDataManager();
      local_1c = (CMonster *)CDataManager::find_monster(iVar2);
      if (local_1c == (CMonster *)0x0) {
        LogManager::logFormat
                  (1,"WarField.cpp",
                   "void WarField::ConsistMap(void*, const CDungeon*, const CMap*, byte, int)",0xbc,
                   "WARROOM::ConsistMap pMob is Null");
        return;
      }
      local_34 = 0;
      local_30 = 0;
      while (iVar2 = std::vector<STRivalMapData,std::allocator<STRivalMapData>>::size
                               ((vector<STRivalMapData,std::allocator<STRivalMapData>> *)
                                (param_3 + 0x90)), (int)local_30 < iVar2) {
        iVar2 = std::vector<STRivalMapData,std::allocator<STRivalMapData>>::operator[]
                          ((vector<STRivalMapData,std::allocator<STRivalMapData>> *)(param_3 + 0x90)
                           ,local_30);
        local_34 = local_34 + *(int *)(iVar2 + 8);
        local_30 = local_30 + 1;
      }
      if (local_34 == 0) {
        LogManager::logFormat
                  (1,"WarField.cpp",
                   "void WarField::ConsistMap(void*, const CDungeon*, const CMap*, byte, int)",0xd0,
                   &DAT_08cf86a4);
        return;
      }
      local_2c = get_rand_int(local_34);
      local_34 = 0;
      local_30 = 0;
      while (iVar2 = std::vector<STRivalMapData,std::allocator<STRivalMapData>>::size
                               ((vector<STRivalMapData,std::allocator<STRivalMapData>> *)
                                (param_3 + 0x90)), (int)local_30 < iVar2) {
        iVar2 = std::vector<STRivalMapData,std::allocator<STRivalMapData>>::operator[]
                          ((vector<STRivalMapData,std::allocator<STRivalMapData>> *)(param_3 + 0x90)
                           ,local_30);
        local_34 = local_34 + *(int *)(iVar2 + 8);
        if (local_2c < local_34) break;
        local_30 = local_30 + 1;
      }
      local_18 = local_30;
      map_monster::map_monster(local_710);
      local_70c = local_38;
      local_38 = local_38 + 1;
      local_708 = (undefined1)local_28;
      local_704 = CMonster::get_index(local_1c);
      local_700 = param_4;
      local_6ff = 1;
      local_6fe = 1;
      local_6f8 = (float)(6 - param_5) * *(float *)(param_2 + 0x7b0) + 1.0;
      local_6e8 = (float)(6 - param_5) * *(float *)(param_2 + 0x7b4) + 1.0;
                    /* try { // try from 086b906d to 086b9071 has its CatchHandler @ 086b923d */
      map_monster::map_monster(local_398,local_710);
                    /* try { // try from 086b9085 to 086b9089 has its CatchHandler @ 086b908c */
      MapInfo::Add_Mob((MapInfo *)(this + 8),local_398);
                    /* try { // try from 086b90b0 to 086b923a has its CatchHandler @ 086b923d */
      map_monster::~map_monster(local_398);
      local_3c4 = local_3c4 - *(int *)(param_2 + (local_28 + 0x1ec) * 4 + 8);
      InterfacePacketBuf::put_short(local_3c,local_70c);
      InterfacePacketBuf::put_byte(local_3c,local_28);
      InterfacePacketBuf::put_byte(local_3c,(uint)param_4);
      InterfacePacketBuf::put_byte(local_3c,local_20);
      InterfacePacketBuf::put_byte(local_3c,local_18);
      iVar2 = *(int *)(param_2 + 0x7e0);
      iVar4 = get_rand_int(*(int *)(param_2 + 0x7e4));
      local_14 = (int)ROUND(*(float *)(param_2 + (local_28 + 0x1f0) * 4 + 0x10) *
                            (float)(iVar2 + iVar4));
      if (param_5 == 0) {
        cMyTrace::cMyTrace(local_4c,
                           "void WarField::ConsistMap(void*, const CDungeon*, const CMap*, byte, int)"
                           ,0x107,5);
        cMyTrace::operator()(local_4c,"WarField::ConsistMap playerCount is 0");
        param_5 = 1;
      }
      InterfacePacketBuf::put_short
                (local_3c,(int)ROUND((double)local_14 /
                                     (_DAT_08cf9458 * (double)(param_5 + -1) + 1.0)));
      map_monster::~map_monster(local_710);
    }
    *(int *)(this + 0x44) = local_38;
    *(int *)(this + 0xf4) = *(int *)(this + 0xf4) + 1;
    iVar2 = std::
            map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::
            size((map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>
                  *)(this + 0x14));
    InterfacePacketBuf::put_short(local_3c,&local_3c0,iVar2);
    InterfacePacketBuf::finalize(local_3c,true);
  }
  return;
}
```
