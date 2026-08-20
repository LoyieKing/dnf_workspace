# ChooseRandomMap

`_ZNK8CDungeon15ChooseRandomMapEiii`

`CDungeon::ChooseRandomMap(int, int, int) const`

| 类 | 地址 |
|---|---|
| `CDungeon` | `0x0834bf56` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834bf56  _ZNK8CDungeon15ChooseRandomMapEiii
#           CDungeon::ChooseRandomMap(int, int, int) const
# range [0x0834bf56, 0x0834c759]
0834bf56 +0x000:  push   %ebp
0834bf57 +0x001:  mov    %esp,%ebp
0834bf59 +0x003:  push   %ebx
0834bf5a +0x004:  sub    $0xa4,%esp
0834bf60 +0x00a:  cmpl   $0x0,0xc(%ebp)
0834bf64 +0x00e:  js     0834bf73 <+0x1d>
0834bf66 +0x010:  cmpl   $0x0,0x10(%ebp)
0834bf6a +0x014:  js     0834bf73 <+0x1d>
0834bf6c +0x016:  mov    0x14(%ebp),%eax
0834bf6f +0x019:  test   %eax,%eax
0834bf71 +0x01b:  jns    0834bfc8 <+0x72>
0834bf73 +0x01d:  mov    0x14(%ebp),%edx
0834bf76 +0x020:  mov    0x8(%ebp),%eax
0834bf79 +0x023:  mov    0x8(%eax),%eax
0834bf7c +0x026:  mov    %edx,0x20(%esp)
0834bf80 +0x02a:  mov    0x10(%ebp),%edx
0834bf83 +0x02d:  mov    %edx,0x1c(%esp)
0834bf87 +0x031:  mov    0xc(%ebp),%edx
0834bf8a +0x034:  mov    %edx,0x18(%esp)
0834bf8e +0x038:  mov    %eax,0x14(%esp)
0834bf92 +0x03c:  movl   $"CDungeon::ChooseRandomMap [1](Dungeon Index(%d))(map_type(%d) < 0 || direction(%d) < 0 || entrance(%d) < 0)==false",0x10(%esp)
0834bf9a +0x044:  movl   $0x71b,0xc(%esp)
0834bfa2 +0x04c:  movl   $&_ZZNK8CDungeon15ChooseRandomMapEiiiE19__PRETTY_FUNCTION__,0x8(%esp)
0834bfaa +0x054:  movl   $"data_manager.cpp",0x4(%esp)
0834bfb2 +0x05c:  movl   $0x1,(%esp)
0834bfb9 +0x063:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0834bfbe +0x068:  mov    $0xffffffff,%eax
0834bfc3 +0x06d:  jmp    0834c754 <+0x7fe>
0834bfc8 +0x072:  movl   $0x0,-0x20(%ebp)
0834bfcf +0x079:  lea    -0x50(%ebp),%eax
0834bfd2 +0x07c:  mov    %eax,(%esp)
0834bfd5 +0x07f:  call   0838a1c8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19c68>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19c68
0834bfda +0x084:  lea    -0x54(%ebp),%eax
0834bfdd +0x087:  mov    %eax,(%esp)
0834bfe0 +0x08a:  call   0838a1ea <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19c8a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19c8a
0834bfe5 +0x08f:  movl   $0x0,-0x1c(%ebp)
0834bfec +0x096:  cmpl   $0x1,0xc(%ebp)
0834bff0 +0x09a:  jne    0834c209 <+0x2b3>
0834bff6 +0x0a0:  mov    0x14(%ebp),%eax
0834bff9 +0x0a3:  test   %eax,%eax
0834bffb +0x0a5:  jne    0834c199 <+0x243>
0834c001 +0x0ab:  mov    0x10(%ebp),%edx
0834c004 +0x0ae:  mov    %edx,%eax
0834c006 +0x0b0:  add    %eax,%eax
0834c008 +0x0b2:  add    %edx,%eax
0834c00a +0x0b4:  shl    $0x3,%eax
0834c00d +0x0b7:  add    $0x320,%eax
0834c012 +0x0bc:  add    0x8(%ebp),%eax
0834c015 +0x0bf:  add    $0x4,%eax
0834c018 +0x0c2:  mov    %eax,(%esp)
0834c01b +0x0c5:  call   0838a1f8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19c98>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19c98
0834c020 +0x0ca:  test   %eax,%eax
0834c022 +0x0cc:  sete   %al
0834c025 +0x0cf:  test   %al,%al
0834c027 +0x0d1:  je     0834c07e <+0x128>
0834c029 +0x0d3:  mov    0x14(%ebp),%edx
0834c02c +0x0d6:  mov    0x8(%ebp),%eax
0834c02f +0x0d9:  mov    0x8(%eax),%eax
0834c032 +0x0dc:  mov    %edx,0x20(%esp)
0834c036 +0x0e0:  mov    0x10(%ebp),%edx
0834c039 +0x0e3:  mov    %edx,0x1c(%esp)
0834c03d +0x0e7:  mov    0xc(%ebp),%edx
0834c040 +0x0ea:  mov    %edx,0x18(%esp)
0834c044 +0x0ee:  mov    %eax,0x14(%esp)
0834c048 +0x0f2:  movl   $"CDungeon::ChooseRandomMap (boss_maplist_[direction].size()==0)(Dungeon Index(%d))(map_type(%d),direction(%d),entrance(%d)",0x10(%esp)
0834c050 +0x0fa:  movl   $0x72c,0xc(%esp)
0834c058 +0x102:  movl   $&_ZZNK8CDungeon15ChooseRandomMapEiiiE19__PRETTY_FUNCTION__,0x8(%esp)
0834c060 +0x10a:  movl   $"data_manager.cpp",0x4(%esp)
0834c068 +0x112:  movl   $0x1,(%esp)
0834c06f +0x119:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0834c074 +0x11e:  mov    $0xffffffff,%eax
0834c079 +0x123:  jmp    0834c754 <+0x7fe>
0834c07e +0x128:  mov    0x10(%ebp),%edx
0834c081 +0x12b:  mov    %edx,%eax
0834c083 +0x12d:  add    %eax,%eax
0834c085 +0x12f:  add    %edx,%eax
0834c087 +0x131:  shl    $0x3,%eax
0834c08a +0x134:  add    $0x320,%eax
0834c08f +0x139:  add    0x8(%ebp),%eax
0834c092 +0x13c:  lea    0x4(%eax),%edx
0834c095 +0x13f:  lea    -0x5c(%ebp),%eax
0834c098 +0x142:  mov    %edx,0x4(%esp)
0834c09c +0x146:  mov    %eax,(%esp)
0834c09f +0x149:  call   0838a20c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19cac>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19cac
0834c0a4 +0x14e:  sub    $0x4,%esp
0834c0a7 +0x151:  mov    -0x5c(%ebp),%eax
0834c0aa +0x154:  mov    %eax,-0x54(%ebp)
0834c0ad +0x157:  movl   $0x0,-0x18(%ebp)
0834c0b4 +0x15e:  jmp    0834c0d7 <+0x181>
0834c0b6 +0x160:  lea    -0x48(%ebp),%eax
0834c0b9 +0x163:  movl   $0x0,0x8(%esp)
0834c0c1 +0x16b:  lea    -0x54(%ebp),%edx
0834c0c4 +0x16e:  mov    %edx,0x4(%esp)
0834c0c8 +0x172:  mov    %eax,(%esp)
0834c0cb +0x175:  call   0838a232 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19cd2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19cd2
0834c0d0 +0x17a:  sub    $0x4,%esp
0834c0d3 +0x17d:  addl   $0x1,-0x18(%ebp)
0834c0d7 +0x181:  call   0807dca0 <_init+0x598>
0834c0dc +0x186:  mov    %eax,%ebx
0834c0de +0x188:  mov    0x10(%ebp),%edx
0834c0e1 +0x18b:  mov    %edx,%eax
0834c0e3 +0x18d:  add    %eax,%eax
0834c0e5 +0x18f:  add    %edx,%eax
0834c0e7 +0x191:  shl    $0x3,%eax
0834c0ea +0x194:  add    $0x320,%eax
0834c0ef +0x199:  add    0x8(%ebp),%eax
0834c0f2 +0x19c:  add    $0x4,%eax
0834c0f5 +0x19f:  mov    %eax,(%esp)
0834c0f8 +0x1a2:  call   0838a1f8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19c98>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19c98
0834c0fd +0x1a7:  mov    %eax,-0x6c(%ebp)
0834c100 +0x1aa:  mov    %ebx,%eax
0834c102 +0x1ac:  mov    $0x0,%edx
0834c107 +0x1b1:  divl   -0x6c(%ebp)
0834c10a +0x1b4:  mov    %edx,%ecx
0834c10c +0x1b6:  mov    %ecx,%eax
0834c10e +0x1b8:  cmp    -0x18(%ebp),%eax
0834c111 +0x1bb:  seta   %al
0834c114 +0x1be:  test   %al,%al
0834c116 +0x1c0:  jne    0834c0b6 <+0x160>
0834c118 +0x1c2:  lea    -0x54(%ebp),%eax
0834c11b +0x1c5:  mov    %eax,(%esp)
0834c11e +0x1c8:  call   0838a270 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19d10>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19d10
0834c123 +0x1cd:  mov    0x4(%eax),%eax
0834c126 +0x1d0:  mov    %eax,-0x20(%ebp)
0834c129 +0x1d3:  mov    -0x20(%ebp),%eax
0834c12c +0x1d6:  mov    %eax,(%esp)
0834c12f +0x1d9:  call   08134776 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x37d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x37d
0834c134 +0x1de:  cmp    $0xffffffff,%eax
0834c137 +0x1e1:  sete   %al
0834c13a +0x1e4:  test   %al,%al
0834c13c +0x1e6:  je     0834c189 <+0x233>
0834c13e +0x1e8:  mov    0x14(%ebp),%edx
0834c141 +0x1eb:  mov    0x8(%ebp),%eax
0834c144 +0x1ee:  mov    0x8(%eax),%eax
0834c147 +0x1f1:  mov    %edx,0x20(%esp)
0834c14b +0x1f5:  mov    0x10(%ebp),%edx
0834c14e +0x1f8:  mov    %edx,0x1c(%esp)
0834c152 +0x1fc:  mov    0xc(%ebp),%edx
0834c155 +0x1ff:  mov    %edx,0x18(%esp)
0834c159 +0x203:  mov    %eax,0x14(%esp)
0834c15d +0x207:  movl   $"CDungeon::ChooseRandomMap (p_map->get_index()==-1)[1](Dungeon Index(%d))(map_type(%d),direction(%d),entrance(%d)",0x10(%esp)
0834c165 +0x20f:  movl   $0x736,0xc(%esp)
0834c16d +0x217:  movl   $&_ZZNK8CDungeon15ChooseRandomMapEiiiE19__PRETTY_FUNCTION__,0x8(%esp)
0834c175 +0x21f:  movl   $"data_manager.cpp",0x4(%esp)
0834c17d +0x227:  movl   $0x1,(%esp)
0834c184 +0x22e:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0834c189 +0x233:  mov    -0x20(%ebp),%eax
0834c18c +0x236:  mov    %eax,(%esp)
0834c18f +0x239:  call   08134776 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x37d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x37d
0834c194 +0x23e:  jmp    0834c754 <+0x7fe>
0834c199 +0x243:  mov    0x10(%ebp),%edx
0834c19c +0x246:  mov    %edx,%eax
0834c19e +0x248:  add    %eax,%eax
0834c1a0 +0x24a:  add    %edx,%eax
0834c1a2 +0x24c:  shl    $0x3,%eax
0834c1a5 +0x24f:  add    $0x320,%eax
0834c1aa +0x254:  add    0x8(%ebp),%eax
0834c1ad +0x257:  lea    0x4(%eax),%ecx
0834c1b0 +0x25a:  lea    -0x44(%ebp),%eax
0834c1b3 +0x25d:  lea    0x14(%ebp),%edx
0834c1b6 +0x260:  mov    %edx,0x8(%esp)
0834c1ba +0x264:  mov    %ecx,0x4(%esp)
0834c1be +0x268:  mov    %eax,(%esp)
0834c1c1 +0x26b:  call   0838a27e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19d1e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19d1e
0834c1c6 +0x270:  sub    $0x4,%esp
0834c1c9 +0x273:  lea    -0x44(%ebp),%eax
0834c1cc +0x276:  mov    %eax,0x4(%esp)
0834c1d0 +0x27a:  lea    -0x50(%ebp),%eax
0834c1d3 +0x27d:  mov    %eax,(%esp)
0834c1d6 +0x280:  call   0838a2aa <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19d4a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19d4a
0834c1db +0x285:  mov    0x10(%ebp),%edx
0834c1de +0x288:  mov    %edx,%eax
0834c1e0 +0x28a:  add    %eax,%eax
0834c1e2 +0x28c:  add    %edx,%eax
0834c1e4 +0x28e:  shl    $0x3,%eax
0834c1e7 +0x291:  add    $0x320,%eax
0834c1ec +0x296:  add    0x8(%ebp),%eax
0834c1ef +0x299:  lea    0x4(%eax),%edx
0834c1f2 +0x29c:  lea    0x14(%ebp),%eax
0834c1f5 +0x29f:  mov    %eax,0x4(%esp)
0834c1f9 +0x2a3:  mov    %edx,(%esp)
0834c1fc +0x2a6:  call   0838a2de <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19d7e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19d7e
0834c201 +0x2ab:  mov    %eax,-0x1c(%ebp)
0834c204 +0x2ae:  jmp    0834c634 <+0x6de>
0834c209 +0x2b3:  cmpl   $0x2,0xc(%ebp)
0834c20d +0x2b7:  jne    0834c426 <+0x4d0>
0834c213 +0x2bd:  mov    0x14(%ebp),%eax
0834c216 +0x2c0:  test   %eax,%eax
0834c218 +0x2c2:  jne    0834c3b6 <+0x460>
0834c21e +0x2c8:  mov    0x10(%ebp),%edx
0834c221 +0x2cb:  mov    %edx,%eax
0834c223 +0x2cd:  add    %eax,%eax
0834c225 +0x2cf:  add    %edx,%eax
0834c227 +0x2d1:  shl    $0x3,%eax
0834c22a +0x2d4:  add    $0x4a0,%eax
0834c22f +0x2d9:  add    0x8(%ebp),%eax
0834c232 +0x2dc:  add    $0x4,%eax
0834c235 +0x2df:  mov    %eax,(%esp)
0834c238 +0x2e2:  call   0838a1f8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19c98>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19c98
0834c23d +0x2e7:  test   %eax,%eax
0834c23f +0x2e9:  sete   %al
0834c242 +0x2ec:  test   %al,%al
0834c244 +0x2ee:  je     0834c29b <+0x345>
0834c246 +0x2f0:  mov    0x14(%ebp),%edx
0834c249 +0x2f3:  mov    0x8(%ebp),%eax
0834c24c +0x2f6:  mov    0x8(%eax),%eax
0834c24f +0x2f9:  mov    %edx,0x20(%esp)
0834c253 +0x2fd:  mov    0x10(%ebp),%edx
0834c256 +0x300:  mov    %edx,0x1c(%esp)
0834c25a +0x304:  mov    0xc(%ebp),%edx
0834c25d +0x307:  mov    %edx,0x18(%esp)
0834c261 +0x30b:  mov    %eax,0x14(%esp)
0834c265 +0x30f:  movl   $"CDungeon::ChooseRandomMap (dummy_maplist_[direction].size()==0)(Dungeon Index(%d))(map_type(%d),direction(%d),entrance(%d)",0x10(%esp)
0834c26d +0x317:  movl   $0x745,0xc(%esp)
0834c275 +0x31f:  movl   $&_ZZNK8CDungeon15ChooseRandomMapEiiiE19__PRETTY_FUNCTION__,0x8(%esp)
0834c27d +0x327:  movl   $"data_manager.cpp",0x4(%esp)
0834c285 +0x32f:  movl   $0x1,(%esp)
0834c28c +0x336:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0834c291 +0x33b:  mov    $0xffffffff,%eax
0834c296 +0x340:  jmp    0834c754 <+0x7fe>
0834c29b +0x345:  mov    0x10(%ebp),%edx
0834c29e +0x348:  mov    %edx,%eax
0834c2a0 +0x34a:  add    %eax,%eax
0834c2a2 +0x34c:  add    %edx,%eax
0834c2a4 +0x34e:  shl    $0x3,%eax
0834c2a7 +0x351:  add    $0x4a0,%eax
0834c2ac +0x356:  add    0x8(%ebp),%eax
0834c2af +0x359:  lea    0x4(%eax),%edx
0834c2b2 +0x35c:  lea    -0x5c(%ebp),%eax
0834c2b5 +0x35f:  mov    %edx,0x4(%esp)
0834c2b9 +0x363:  mov    %eax,(%esp)
0834c2bc +0x366:  call   0838a20c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19cac>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19cac
0834c2c1 +0x36b:  sub    $0x4,%esp
0834c2c4 +0x36e:  mov    -0x5c(%ebp),%eax
0834c2c7 +0x371:  mov    %eax,-0x54(%ebp)
0834c2ca +0x374:  movl   $0x0,-0x14(%ebp)
0834c2d1 +0x37b:  jmp    0834c2f4 <+0x39e>
0834c2d3 +0x37d:  lea    -0x3c(%ebp),%eax
0834c2d6 +0x380:  movl   $0x0,0x8(%esp)
0834c2de +0x388:  lea    -0x54(%ebp),%edx
0834c2e1 +0x38b:  mov    %edx,0x4(%esp)
0834c2e5 +0x38f:  mov    %eax,(%esp)
0834c2e8 +0x392:  call   0838a232 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19cd2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19cd2
0834c2ed +0x397:  sub    $0x4,%esp
0834c2f0 +0x39a:  addl   $0x1,-0x14(%ebp)
0834c2f4 +0x39e:  call   0807dca0 <_init+0x598>
0834c2f9 +0x3a3:  mov    %eax,%ebx
0834c2fb +0x3a5:  mov    0x10(%ebp),%edx
0834c2fe +0x3a8:  mov    %edx,%eax
0834c300 +0x3aa:  add    %eax,%eax
0834c302 +0x3ac:  add    %edx,%eax
0834c304 +0x3ae:  shl    $0x3,%eax
0834c307 +0x3b1:  add    $0x4a0,%eax
0834c30c +0x3b6:  add    0x8(%ebp),%eax
0834c30f +0x3b9:  add    $0x4,%eax
0834c312 +0x3bc:  mov    %eax,(%esp)
0834c315 +0x3bf:  call   0838a1f8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19c98>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19c98
0834c31a +0x3c4:  mov    %eax,-0x6c(%ebp)
0834c31d +0x3c7:  mov    %ebx,%eax
0834c31f +0x3c9:  mov    $0x0,%edx
0834c324 +0x3ce:  divl   -0x6c(%ebp)
0834c327 +0x3d1:  mov    %edx,%ecx
0834c329 +0x3d3:  mov    %ecx,%eax
0834c32b +0x3d5:  cmp    -0x14(%ebp),%eax
0834c32e +0x3d8:  seta   %al
0834c331 +0x3db:  test   %al,%al
0834c333 +0x3dd:  jne    0834c2d3 <+0x37d>
0834c335 +0x3df:  lea    -0x54(%ebp),%eax
0834c338 +0x3e2:  mov    %eax,(%esp)
0834c33b +0x3e5:  call   0838a270 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19d10>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19d10
0834c340 +0x3ea:  mov    0x4(%eax),%eax
0834c343 +0x3ed:  mov    %eax,-0x20(%ebp)
0834c346 +0x3f0:  mov    -0x20(%ebp),%eax
0834c349 +0x3f3:  mov    %eax,(%esp)
0834c34c +0x3f6:  call   08134776 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x37d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x37d
0834c351 +0x3fb:  cmp    $0xffffffff,%eax
0834c354 +0x3fe:  sete   %al
0834c357 +0x401:  test   %al,%al
0834c359 +0x403:  je     0834c3a6 <+0x450>
0834c35b +0x405:  mov    0x14(%ebp),%edx
0834c35e +0x408:  mov    0x8(%ebp),%eax
0834c361 +0x40b:  mov    0x8(%eax),%eax
0834c364 +0x40e:  mov    %edx,0x20(%esp)
0834c368 +0x412:  mov    0x10(%ebp),%edx
0834c36b +0x415:  mov    %edx,0x1c(%esp)
0834c36f +0x419:  mov    0xc(%ebp),%edx
0834c372 +0x41c:  mov    %edx,0x18(%esp)
0834c376 +0x420:  mov    %eax,0x14(%esp)
0834c37a +0x424:  movl   $"CDungeon::ChooseRandomMap (p_map->get_index()==-1)[1](Dungeon Index(%d))(map_type(%d),direction(%d),entrance(%d)",0x10(%esp)
0834c382 +0x42c:  movl   $0x74f,0xc(%esp)
0834c38a +0x434:  movl   $&_ZZNK8CDungeon15ChooseRandomMapEiiiE19__PRETTY_FUNCTION__,0x8(%esp)
0834c392 +0x43c:  movl   $"data_manager.cpp",0x4(%esp)
0834c39a +0x444:  movl   $0x1,(%esp)
0834c3a1 +0x44b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0834c3a6 +0x450:  mov    -0x20(%ebp),%eax
0834c3a9 +0x453:  mov    %eax,(%esp)
0834c3ac +0x456:  call   08134776 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x37d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x37d
0834c3b1 +0x45b:  jmp    0834c754 <+0x7fe>
0834c3b6 +0x460:  mov    0x10(%ebp),%edx
0834c3b9 +0x463:  mov    %edx,%eax
0834c3bb +0x465:  add    %eax,%eax
0834c3bd +0x467:  add    %edx,%eax
0834c3bf +0x469:  shl    $0x3,%eax
0834c3c2 +0x46c:  add    $0x4a0,%eax
0834c3c7 +0x471:  add    0x8(%ebp),%eax
0834c3ca +0x474:  lea    0x4(%eax),%ecx
0834c3cd +0x477:  lea    -0x38(%ebp),%eax
0834c3d0 +0x47a:  lea    0x14(%ebp),%edx
0834c3d3 +0x47d:  mov    %edx,0x8(%esp)
0834c3d7 +0x481:  mov    %ecx,0x4(%esp)
0834c3db +0x485:  mov    %eax,(%esp)
0834c3de +0x488:  call   0838a27e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19d1e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19d1e
0834c3e3 +0x48d:  sub    $0x4,%esp
0834c3e6 +0x490:  lea    -0x38(%ebp),%eax
0834c3e9 +0x493:  mov    %eax,0x4(%esp)
0834c3ed +0x497:  lea    -0x50(%ebp),%eax
0834c3f0 +0x49a:  mov    %eax,(%esp)
0834c3f3 +0x49d:  call   0838a2aa <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19d4a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19d4a
0834c3f8 +0x4a2:  mov    0x10(%ebp),%edx
0834c3fb +0x4a5:  mov    %edx,%eax
0834c3fd +0x4a7:  add    %eax,%eax
0834c3ff +0x4a9:  add    %edx,%eax
0834c401 +0x4ab:  shl    $0x3,%eax
0834c404 +0x4ae:  add    $0x4a0,%eax
0834c409 +0x4b3:  add    0x8(%ebp),%eax
0834c40c +0x4b6:  lea    0x4(%eax),%edx
0834c40f +0x4b9:  lea    0x14(%ebp),%eax
0834c412 +0x4bc:  mov    %eax,0x4(%esp)
0834c416 +0x4c0:  mov    %edx,(%esp)
0834c419 +0x4c3:  call   0838a2de <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19d7e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19d7e
0834c41e +0x4c8:  mov    %eax,-0x1c(%ebp)
0834c421 +0x4cb:  jmp    0834c634 <+0x6de>
0834c426 +0x4d0:  mov    0x14(%ebp),%eax
0834c429 +0x4d3:  test   %eax,%eax
0834c42b +0x4d5:  jne    0834c5c9 <+0x673>
0834c431 +0x4db:  mov    0x10(%ebp),%edx
0834c434 +0x4de:  mov    %edx,%eax
0834c436 +0x4e0:  add    %eax,%eax
0834c438 +0x4e2:  add    %edx,%eax
0834c43a +0x4e4:  shl    $0x3,%eax
0834c43d +0x4e7:  add    $0x1a0,%eax
0834c442 +0x4ec:  add    0x8(%ebp),%eax
0834c445 +0x4ef:  add    $0x4,%eax
0834c448 +0x4f2:  mov    %eax,(%esp)
0834c44b +0x4f5:  call   0838a1f8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19c98>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19c98
0834c450 +0x4fa:  test   %eax,%eax
0834c452 +0x4fc:  sete   %al
0834c455 +0x4ff:  test   %al,%al
0834c457 +0x501:  je     0834c4ae <+0x558>
0834c459 +0x503:  mov    0x14(%ebp),%edx
0834c45c +0x506:  mov    0x8(%ebp),%eax
0834c45f +0x509:  mov    0x8(%eax),%eax
0834c462 +0x50c:  mov    %edx,0x20(%esp)
0834c466 +0x510:  mov    0x10(%ebp),%edx
0834c469 +0x513:  mov    %edx,0x1c(%esp)
0834c46d +0x517:  mov    0xc(%ebp),%edx
0834c470 +0x51a:  mov    %edx,0x18(%esp)
0834c474 +0x51e:  mov    %eax,0x14(%esp)
0834c478 +0x522:  movl   $"CDungeon::ChooseRandomMap (maplist_[direction].size()==0)(Dungeon Index(%d))(map_type(%d),direction(%d),entrance(%d)",0x10(%esp)
0834c480 +0x52a:  movl   $0x75e,0xc(%esp)
0834c488 +0x532:  movl   $&_ZZNK8CDungeon15ChooseRandomMapEiiiE19__PRETTY_FUNCTION__,0x8(%esp)
0834c490 +0x53a:  movl   $"data_manager.cpp",0x4(%esp)
0834c498 +0x542:  movl   $0x1,(%esp)
0834c49f +0x549:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0834c4a4 +0x54e:  mov    $0xffffffff,%eax
0834c4a9 +0x553:  jmp    0834c754 <+0x7fe>
0834c4ae +0x558:  mov    0x10(%ebp),%edx
0834c4b1 +0x55b:  mov    %edx,%eax
0834c4b3 +0x55d:  add    %eax,%eax
0834c4b5 +0x55f:  add    %edx,%eax
0834c4b7 +0x561:  shl    $0x3,%eax
0834c4ba +0x564:  add    $0x1a0,%eax
0834c4bf +0x569:  add    0x8(%ebp),%eax
0834c4c2 +0x56c:  lea    0x4(%eax),%edx
0834c4c5 +0x56f:  lea    -0x5c(%ebp),%eax
0834c4c8 +0x572:  mov    %edx,0x4(%esp)
0834c4cc +0x576:  mov    %eax,(%esp)
0834c4cf +0x579:  call   0838a20c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19cac>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19cac
0834c4d4 +0x57e:  sub    $0x4,%esp
0834c4d7 +0x581:  mov    -0x5c(%ebp),%eax
0834c4da +0x584:  mov    %eax,-0x54(%ebp)
0834c4dd +0x587:  movl   $0x0,-0x10(%ebp)
0834c4e4 +0x58e:  jmp    0834c507 <+0x5b1>
0834c4e6 +0x590:  lea    -0x30(%ebp),%eax
0834c4e9 +0x593:  movl   $0x0,0x8(%esp)
0834c4f1 +0x59b:  lea    -0x54(%ebp),%edx
0834c4f4 +0x59e:  mov    %edx,0x4(%esp)
0834c4f8 +0x5a2:  mov    %eax,(%esp)
0834c4fb +0x5a5:  call   0838a232 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19cd2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19cd2
0834c500 +0x5aa:  sub    $0x4,%esp
0834c503 +0x5ad:  addl   $0x1,-0x10(%ebp)
0834c507 +0x5b1:  call   0807dca0 <_init+0x598>
0834c50c +0x5b6:  mov    %eax,%ebx
0834c50e +0x5b8:  mov    0x10(%ebp),%edx
0834c511 +0x5bb:  mov    %edx,%eax
0834c513 +0x5bd:  add    %eax,%eax
0834c515 +0x5bf:  add    %edx,%eax
0834c517 +0x5c1:  shl    $0x3,%eax
0834c51a +0x5c4:  add    $0x1a0,%eax
0834c51f +0x5c9:  add    0x8(%ebp),%eax
0834c522 +0x5cc:  add    $0x4,%eax
0834c525 +0x5cf:  mov    %eax,(%esp)
0834c528 +0x5d2:  call   0838a1f8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19c98>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19c98
0834c52d +0x5d7:  mov    %eax,-0x6c(%ebp)
0834c530 +0x5da:  mov    %ebx,%eax
0834c532 +0x5dc:  mov    $0x0,%edx
0834c537 +0x5e1:  divl   -0x6c(%ebp)
0834c53a +0x5e4:  mov    %edx,%ecx
0834c53c +0x5e6:  mov    %ecx,%eax
0834c53e +0x5e8:  cmp    -0x10(%ebp),%eax
0834c541 +0x5eb:  seta   %al
0834c544 +0x5ee:  test   %al,%al
0834c546 +0x5f0:  jne    0834c4e6 <+0x590>
0834c548 +0x5f2:  lea    -0x54(%ebp),%eax
0834c54b +0x5f5:  mov    %eax,(%esp)
0834c54e +0x5f8:  call   0838a270 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19d10>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19d10
0834c553 +0x5fd:  mov    0x4(%eax),%eax
0834c556 +0x600:  mov    %eax,-0x20(%ebp)
0834c559 +0x603:  mov    -0x20(%ebp),%eax
0834c55c +0x606:  mov    %eax,(%esp)
0834c55f +0x609:  call   08134776 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x37d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x37d
0834c564 +0x60e:  cmp    $0xffffffff,%eax
0834c567 +0x611:  sete   %al
0834c56a +0x614:  test   %al,%al
0834c56c +0x616:  je     0834c5b9 <+0x663>
0834c56e +0x618:  mov    0x14(%ebp),%edx
0834c571 +0x61b:  mov    0x8(%ebp),%eax
0834c574 +0x61e:  mov    0x8(%eax),%eax
0834c577 +0x621:  mov    %edx,0x20(%esp)
0834c57b +0x625:  mov    0x10(%ebp),%edx
0834c57e +0x628:  mov    %edx,0x1c(%esp)
0834c582 +0x62c:  mov    0xc(%ebp),%edx
0834c585 +0x62f:  mov    %edx,0x18(%esp)
0834c589 +0x633:  mov    %eax,0x14(%esp)
0834c58d +0x637:  movl   $"CDungeon::ChooseRandomMap (p_map->get_index()==-1)[2](Dungeon Index(%d))(map_type(%d),direction(%d),entrance(%d)",0x10(%esp)
0834c595 +0x63f:  movl   $0x768,0xc(%esp)
0834c59d +0x647:  movl   $&_ZZNK8CDungeon15ChooseRandomMapEiiiE19__PRETTY_FUNCTION__,0x8(%esp)
0834c5a5 +0x64f:  movl   $"data_manager.cpp",0x4(%esp)
0834c5ad +0x657:  movl   $0x1,(%esp)
0834c5b4 +0x65e:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0834c5b9 +0x663:  mov    -0x20(%ebp),%eax
0834c5bc +0x666:  mov    %eax,(%esp)
0834c5bf +0x669:  call   08134776 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x37d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x37d
0834c5c4 +0x66e:  jmp    0834c754 <+0x7fe>
0834c5c9 +0x673:  mov    0x10(%ebp),%edx
0834c5cc +0x676:  mov    %edx,%eax
0834c5ce +0x678:  add    %eax,%eax
0834c5d0 +0x67a:  add    %edx,%eax
0834c5d2 +0x67c:  shl    $0x3,%eax
0834c5d5 +0x67f:  add    $0x1a0,%eax
0834c5da +0x684:  add    0x8(%ebp),%eax
0834c5dd +0x687:  lea    0x4(%eax),%ecx
0834c5e0 +0x68a:  lea    -0x2c(%ebp),%eax
0834c5e3 +0x68d:  lea    0x14(%ebp),%edx
0834c5e6 +0x690:  mov    %edx,0x8(%esp)
0834c5ea +0x694:  mov    %ecx,0x4(%esp)
0834c5ee +0x698:  mov    %eax,(%esp)
0834c5f1 +0x69b:  call   0838a27e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19d1e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19d1e
0834c5f6 +0x6a0:  sub    $0x4,%esp
0834c5f9 +0x6a3:  lea    -0x2c(%ebp),%eax
0834c5fc +0x6a6:  mov    %eax,0x4(%esp)
0834c600 +0x6aa:  lea    -0x50(%ebp),%eax
0834c603 +0x6ad:  mov    %eax,(%esp)
0834c606 +0x6b0:  call   0838a2aa <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19d4a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19d4a
0834c60b +0x6b5:  mov    0x10(%ebp),%edx
0834c60e +0x6b8:  mov    %edx,%eax
0834c610 +0x6ba:  add    %eax,%eax
0834c612 +0x6bc:  add    %edx,%eax
0834c614 +0x6be:  shl    $0x3,%eax
0834c617 +0x6c1:  add    $0x1a0,%eax
0834c61c +0x6c6:  add    0x8(%ebp),%eax
0834c61f +0x6c9:  lea    0x4(%eax),%edx
0834c622 +0x6cc:  lea    0x14(%ebp),%eax
0834c625 +0x6cf:  mov    %eax,0x4(%esp)
0834c629 +0x6d3:  mov    %edx,(%esp)
0834c62c +0x6d6:  call   0838a2de <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19d7e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19d7e
0834c631 +0x6db:  mov    %eax,-0x1c(%ebp)
0834c634 +0x6de:  cmpl   $0x0,-0x1c(%ebp)
0834c638 +0x6e2:  jne    0834c68f <+0x739>
0834c63a +0x6e4:  mov    0x14(%ebp),%edx
0834c63d +0x6e7:  mov    0x8(%ebp),%eax
0834c640 +0x6ea:  mov    0x8(%eax),%eax
0834c643 +0x6ed:  mov    %edx,0x20(%esp)
0834c647 +0x6f1:  mov    0x10(%ebp),%edx
0834c64a +0x6f4:  mov    %edx,0x1c(%esp)
0834c64e +0x6f8:  mov    0xc(%ebp),%edx
0834c651 +0x6fb:  mov    %edx,0x18(%esp)
0834c655 +0x6ff:  mov    %eax,0x14(%esp)
0834c659 +0x703:  movl   $"CDungeon::ChooseRandomMap (Key count is zero! : plz check map script)(Dungeon Index(%d))(map_type(%d),direction(%d),entrance(%d)",0x10(%esp)
0834c661 +0x70b:  movl   $0x77b,0xc(%esp)
0834c669 +0x713:  movl   $&_ZZNK8CDungeon15ChooseRandomMapEiiiE19__PRETTY_FUNCTION__,0x8(%esp)
0834c671 +0x71b:  movl   $"data_manager.cpp",0x4(%esp)
0834c679 +0x723:  movl   $0x1,(%esp)
0834c680 +0x72a:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0834c685 +0x72f:  mov    $0xffffffff,%eax
0834c68a +0x734:  jmp    0834c754 <+0x7fe>
0834c68f +0x739:  mov    -0x50(%ebp),%eax
0834c692 +0x73c:  mov    %eax,-0x58(%ebp)
0834c695 +0x73f:  movl   $0x0,-0xc(%ebp)
0834c69c +0x746:  jmp    0834c6bf <+0x769>
0834c69e +0x748:  lea    -0x24(%ebp),%eax
0834c6a1 +0x74b:  movl   $0x0,0x8(%esp)
0834c6a9 +0x753:  lea    -0x58(%ebp),%edx
0834c6ac +0x756:  mov    %edx,0x4(%esp)
0834c6b0 +0x75a:  mov    %eax,(%esp)
0834c6b3 +0x75d:  call   0838a232 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19cd2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19cd2
0834c6b8 +0x762:  sub    $0x4,%esp
0834c6bb +0x765:  addl   $0x1,-0xc(%ebp)
0834c6bf +0x769:  call   0807dca0 <_init+0x598>
0834c6c4 +0x76e:  mov    %eax,%edx
0834c6c6 +0x770:  sar    $0x1f,%edx
0834c6c9 +0x773:  idivl  -0x1c(%ebp)
0834c6cc +0x776:  mov    %edx,%eax
0834c6ce +0x778:  cmp    -0xc(%ebp),%eax
0834c6d1 +0x77b:  setg   %al
0834c6d4 +0x77e:  test   %al,%al
0834c6d6 +0x780:  jne    0834c69e <+0x748>
0834c6d8 +0x782:  lea    -0x58(%ebp),%eax
0834c6db +0x785:  mov    %eax,(%esp)
0834c6de +0x788:  call   0838a270 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19d10>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19d10
0834c6e3 +0x78d:  mov    0x4(%eax),%eax
0834c6e6 +0x790:  mov    %eax,-0x20(%ebp)
0834c6e9 +0x793:  mov    -0x20(%ebp),%eax
0834c6ec +0x796:  mov    %eax,(%esp)
0834c6ef +0x799:  call   08134776 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x37d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x37d
0834c6f4 +0x79e:  cmp    $0xffffffff,%eax
0834c6f7 +0x7a1:  sete   %al
0834c6fa +0x7a4:  test   %al,%al
0834c6fc +0x7a6:  je     0834c749 <+0x7f3>
0834c6fe +0x7a8:  mov    0x14(%ebp),%edx
0834c701 +0x7ab:  mov    0x8(%ebp),%eax
0834c704 +0x7ae:  mov    0x8(%eax),%eax
0834c707 +0x7b1:  mov    %edx,0x20(%esp)
0834c70b +0x7b5:  mov    0x10(%ebp),%edx
0834c70e +0x7b8:  mov    %edx,0x1c(%esp)
0834c712 +0x7bc:  mov    0xc(%ebp),%edx
0834c715 +0x7bf:  mov    %edx,0x18(%esp)
0834c719 +0x7c3:  mov    %eax,0x14(%esp)
0834c71d +0x7c7:  movl   $"CDungeon::ChooseRandomMap (p_map->get_index()==-1)[3](Dungeon Index(%d))(map_type(%d),direction(%d),entrance(%d)",0x10(%esp)
0834c725 +0x7cf:  movl   $0x786,0xc(%esp)
0834c72d +0x7d7:  movl   $&_ZZNK8CDungeon15ChooseRandomMapEiiiE19__PRETTY_FUNCTION__,0x8(%esp)
0834c735 +0x7df:  movl   $"data_manager.cpp",0x4(%esp)
0834c73d +0x7e7:  movl   $0x1,(%esp)
0834c744 +0x7ee:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0834c749 +0x7f3:  mov    -0x20(%ebp),%eax
0834c74c +0x7f6:  mov    %eax,(%esp)
0834c74f +0x7f9:  call   08134776 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x37d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x37d
0834c754 +0x7fe:  mov    -0x4(%ebp),%ebx
0834c757 +0x801:  leave
0834c758 +0x802:  ret
0834c759 +0x803:  nop
```

## 反编译 C

```c
// CDungeon::ChooseRandomMap @ 0x834bf56

/* CDungeon::ChooseRandomMap(int, int, int) const */

undefined4 __thiscall CDungeon::ChooseRandomMap(CDungeon *this,int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54 [2];
  _Rb_tree_const_iterator<std::pair<int_const,CMap*>> local_4c [4];
  int local_48 [2];
  _Rb_tree_const_iterator<std::pair<int_const,CMap*>> local_40 [4];
  int local_3c [2];
  _Rb_tree_const_iterator<std::pair<int_const,CMap*>> local_34 [4];
  int local_30 [2];
  _Rb_tree_const_iterator<std::pair<int_const,CMap*>> local_28 [4];
  CMap *local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  
  if (((param_1 < 0) || (param_2 < 0)) || (param_3 < 0)) {
    LogManager::logFormat
              (1,"data_manager.cpp","int CDungeon::ChooseRandomMap(int, int, int) const",0x71b,
               "CDungeon::ChooseRandomMap [1](Dungeon Index(%d))(map_type(%d) < 0 || direction(%d) < 0 || entrance(%d) < 0)==false"
               ,*(undefined4 *)(this + 8),param_1,param_2,param_3);
    uVar1 = 0xffffffff;
  }
  else {
    local_24 = (CMap *)0x0;
    std::
    pair<std::_Rb_tree_const_iterator<std::pair<int_const,CMap*>>,std::_Rb_tree_const_iterator<std::pair<int_const,CMap*>>>
    ::pair((pair<std::_Rb_tree_const_iterator<std::pair<int_const,CMap*>>,std::_Rb_tree_const_iterator<std::pair<int_const,CMap*>>>
            *)local_54);
    std::_Rb_tree_const_iterator<std::pair<int_const,CMap*>>::_Rb_tree_const_iterator
              ((_Rb_tree_const_iterator<std::pair<int_const,CMap*>> *)&local_58);
    local_20 = 0;
    if (param_1 == 1) {
      if (param_3 == 0) {
        iVar2 = std::multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>::
                size((multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>
                      *)(this + param_2 * 0x18 + 0x324));
        if (iVar2 == 0) {
          LogManager::logFormat
                    (1,"data_manager.cpp","int CDungeon::ChooseRandomMap(int, int, int) const",0x72c
                     ,
                     "CDungeon::ChooseRandomMap (boss_maplist_[direction].size()==0)(Dungeon Index(%d))(map_type(%d),direction(%d),entrance(%d)"
                     ,*(undefined4 *)(this + 8),1,param_2,param_3);
          return 0xffffffff;
        }
        std::multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>::begin
                  ((multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>> *)
                   &local_60);
        local_58 = local_60;
        local_1c = 0;
        while( true ) {
          uVar3 = rand();
          uVar4 = std::multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>
                  ::size((multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>
                          *)(this + param_2 * 0x18 + 0x324));
          if (uVar3 % uVar4 <= local_1c) break;
          std::_Rb_tree_const_iterator<std::pair<int_const,CMap*>>::operator++
                    (local_4c,(int)&local_58);
          local_1c = local_1c + 1;
        }
        iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,CMap*>>::operator->
                          ((_Rb_tree_const_iterator<std::pair<int_const,CMap*>> *)&local_58);
        local_24 = *(CMap **)(iVar2 + 4);
        iVar2 = CMap::get_index(local_24);
        if (iVar2 == -1) {
          LogManager::logFormat
                    (1,"data_manager.cpp","int CDungeon::ChooseRandomMap(int, int, int) const",0x736
                     ,
                     "CDungeon::ChooseRandomMap (p_map->get_index()==-1)[1](Dungeon Index(%d))(map_type(%d),direction(%d),entrance(%d)"
                     ,*(undefined4 *)(this + 8),1,param_2,param_3);
        }
        uVar1 = CMap::get_index(local_24);
        return uVar1;
      }
      std::multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>::
      equal_range(local_48);
      std::
      pair<std::_Rb_tree_const_iterator<std::pair<int_const,CMap*>>,std::_Rb_tree_const_iterator<std::pair<int_const,CMap*>>>
      ::operator=((pair<std::_Rb_tree_const_iterator<std::pair<int_const,CMap*>>,std::_Rb_tree_const_iterator<std::pair<int_const,CMap*>>>
                   *)local_54,(pair *)local_48);
      local_20 = std::multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>
                 ::count((multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>
                          *)(this + param_2 * 0x18 + 0x324),&param_3);
    }
    else if (param_1 == 2) {
      if (param_3 == 0) {
        iVar2 = std::multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>::
                size((multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>
                      *)(this + param_2 * 0x18 + 0x4a4));
        if (iVar2 == 0) {
          LogManager::logFormat
                    (1,"data_manager.cpp","int CDungeon::ChooseRandomMap(int, int, int) const",0x745
                     ,
                     "CDungeon::ChooseRandomMap (dummy_maplist_[direction].size()==0)(Dungeon Index(%d))(map_type(%d),direction(%d),entrance(%d)"
                     ,*(undefined4 *)(this + 8),2,param_2,param_3);
          return 0xffffffff;
        }
        std::multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>::begin
                  ((multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>> *)
                   &local_60);
        local_58 = local_60;
        local_18 = 0;
        while( true ) {
          uVar3 = rand();
          uVar4 = std::multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>
                  ::size((multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>
                          *)(this + param_2 * 0x18 + 0x4a4));
          if (uVar3 % uVar4 <= local_18) break;
          std::_Rb_tree_const_iterator<std::pair<int_const,CMap*>>::operator++
                    (local_40,(int)&local_58);
          local_18 = local_18 + 1;
        }
        iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,CMap*>>::operator->
                          ((_Rb_tree_const_iterator<std::pair<int_const,CMap*>> *)&local_58);
        local_24 = *(CMap **)(iVar2 + 4);
        iVar2 = CMap::get_index(local_24);
        if (iVar2 == -1) {
          LogManager::logFormat
                    (1,"data_manager.cpp","int CDungeon::ChooseRandomMap(int, int, int) const",0x74f
                     ,
                     "CDungeon::ChooseRandomMap (p_map->get_index()==-1)[1](Dungeon Index(%d))(map_type(%d),direction(%d),entrance(%d)"
                     ,*(undefined4 *)(this + 8),2,param_2,param_3);
        }
        uVar1 = CMap::get_index(local_24);
        return uVar1;
      }
      std::multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>::
      equal_range(local_3c);
      std::
      pair<std::_Rb_tree_const_iterator<std::pair<int_const,CMap*>>,std::_Rb_tree_const_iterator<std::pair<int_const,CMap*>>>
      ::operator=((pair<std::_Rb_tree_const_iterator<std::pair<int_const,CMap*>>,std::_Rb_tree_const_iterator<std::pair<int_const,CMap*>>>
                   *)local_54,(pair *)local_3c);
      local_20 = std::multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>
                 ::count((multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>
                          *)(this + param_2 * 0x18 + 0x4a4),&param_3);
    }
    else {
      if (param_3 == 0) {
        iVar2 = std::multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>::
                size((multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>
                      *)(this + param_2 * 0x18 + 0x1a4));
        if (iVar2 == 0) {
          LogManager::logFormat
                    (1,"data_manager.cpp","int CDungeon::ChooseRandomMap(int, int, int) const",0x75e
                     ,
                     "CDungeon::ChooseRandomMap (maplist_[direction].size()==0)(Dungeon Index(%d))(map_type(%d),direction(%d),entrance(%d)"
                     ,*(undefined4 *)(this + 8),param_1,param_2,param_3);
          return 0xffffffff;
        }
        std::multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>::begin
                  ((multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>> *)
                   &local_60);
        local_58 = local_60;
        local_14 = 0;
        while( true ) {
          uVar3 = rand();
          uVar4 = std::multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>
                  ::size((multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>
                          *)(this + param_2 * 0x18 + 0x1a4));
          if (uVar3 % uVar4 <= local_14) break;
          std::_Rb_tree_const_iterator<std::pair<int_const,CMap*>>::operator++
                    (local_34,(int)&local_58);
          local_14 = local_14 + 1;
        }
        iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,CMap*>>::operator->
                          ((_Rb_tree_const_iterator<std::pair<int_const,CMap*>> *)&local_58);
        local_24 = *(CMap **)(iVar2 + 4);
        iVar2 = CMap::get_index(local_24);
        if (iVar2 == -1) {
          LogManager::logFormat
                    (1,"data_manager.cpp","int CDungeon::ChooseRandomMap(int, int, int) const",0x768
                     ,
                     "CDungeon::ChooseRandomMap (p_map->get_index()==-1)[2](Dungeon Index(%d))(map_type(%d),direction(%d),entrance(%d)"
                     ,*(undefined4 *)(this + 8),param_1,param_2,param_3);
        }
        uVar1 = CMap::get_index(local_24);
        return uVar1;
      }
      std::multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>::
      equal_range(local_30);
      std::
      pair<std::_Rb_tree_const_iterator<std::pair<int_const,CMap*>>,std::_Rb_tree_const_iterator<std::pair<int_const,CMap*>>>
      ::operator=((pair<std::_Rb_tree_const_iterator<std::pair<int_const,CMap*>>,std::_Rb_tree_const_iterator<std::pair<int_const,CMap*>>>
                   *)local_54,(pair *)local_30);
      local_20 = std::multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>
                 ::count((multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>
                          *)(this + param_2 * 0x18 + 0x1a4),&param_3);
    }
    if (local_20 == 0) {
      LogManager::logFormat
                (1,"data_manager.cpp","int CDungeon::ChooseRandomMap(int, int, int) const",0x77b,
                 "CDungeon::ChooseRandomMap (Key count is zero! : plz check map script)(Dungeon Index(%d))(map_type(%d),direction(%d),entrance(%d)"
                 ,*(undefined4 *)(this + 8),param_1,param_2,param_3);
      uVar1 = 0xffffffff;
    }
    else {
      local_5c = local_54[0];
      local_10 = 0;
      while (iVar2 = rand(), local_10 < iVar2 % local_20) {
        std::_Rb_tree_const_iterator<std::pair<int_const,CMap*>>::operator++
                  (local_28,(int)&local_5c);
        local_10 = local_10 + 1;
      }
      iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,CMap*>>::operator->
                        ((_Rb_tree_const_iterator<std::pair<int_const,CMap*>> *)&local_5c);
      local_24 = *(CMap **)(iVar2 + 4);
      iVar2 = CMap::get_index(local_24);
      if (iVar2 == -1) {
        LogManager::logFormat
                  (1,"data_manager.cpp","int CDungeon::ChooseRandomMap(int, int, int) const",0x786,
                   "CDungeon::ChooseRandomMap (p_map->get_index()==-1)[3](Dungeon Index(%d))(map_type(%d),direction(%d),entrance(%d)"
                   ,*(undefined4 *)(this + 8),param_1,param_2,param_3);
      }
      uVar1 = CMap::get_index(local_24);
    }
  }
  return uVar1;
}
```
