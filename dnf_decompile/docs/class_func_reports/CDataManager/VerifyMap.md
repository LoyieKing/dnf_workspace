# VerifyMap

`_ZNK12CDataManager9VerifyMapERK4CMapi`

`CDataManager::VerifyMap(CMap const&, int) const`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x083620ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083620ee  _ZNK12CDataManager9VerifyMapERK4CMapi
#           CDataManager::VerifyMap(CMap const&, int) const
# range [0x083620ee, 0x08362b43]
083620ee +0x000:  push   %ebp
083620ef +0x001:  mov    %esp,%ebp
083620f1 +0x003:  push   %esi
083620f2 +0x004:  push   %ebx
083620f3 +0x005:  sub    $0x130,%esp
083620f9 +0x00b:  mov    0xc(%ebp),%eax
083620fc +0x00e:  mov    %eax,(%esp)
083620ff +0x011:  call   0830e5c0 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1a5>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1a5
08362104 +0x016:  lea    -0xd0(%ebp),%eax
0836210a +0x01c:  mov    0xc(%ebp),%edx
0836210d +0x01f:  mov    %edx,0x4(%esp)
08362111 +0x023:  mov    %eax,(%esp)
08362114 +0x026:  call   08134796 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x39d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x39d
08362119 +0x02b:  sub    $0x4,%esp
0836211c +0x02e:  lea    -0xd0(%ebp),%eax
08362122 +0x034:  mov    %eax,-0x58(%ebp)
08362125 +0x037:  lea    -0xdc(%ebp),%eax
0836212b +0x03d:  mov    -0x58(%ebp),%edx
0836212e +0x040:  mov    %edx,0x4(%esp)
08362132 +0x044:  mov    %eax,(%esp)
08362135 +0x047:  call   08135d88 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x198f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x198f
0836213a +0x04c:  sub    $0x4,%esp
0836213d +0x04f:  jmp    08362186 <+0x98>
0836213f +0x051:  lea    -0xdc(%ebp),%eax
08362145 +0x057:  mov    %eax,(%esp)
08362148 +0x05a:  call   08139874 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x547b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x547b
0836214d +0x05f:  mov    %eax,-0x48(%ebp)
08362150 +0x062:  mov    -0x48(%ebp),%eax
08362153 +0x065:  movzbl 0x4(%eax),%eax
08362157 +0x069:  test   %al,%al
08362159 +0x06b:  jne    08362163 <+0x75>
0836215b +0x06d:  mov    -0x48(%ebp),%eax
0836215e +0x070:  mov    0x8(%eax),%eax
08362161 +0x073:  test   %eax,%eax
08362163 +0x075:  lea    -0xc4(%ebp),%eax
08362169 +0x07b:  movl   $0x0,0x8(%esp)
08362171 +0x083:  lea    -0xdc(%ebp),%edx
08362177 +0x089:  mov    %edx,0x4(%esp)
0836217b +0x08d:  mov    %eax,(%esp)
0836217e +0x090:  call   08135de6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x19ed>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x19ed
08362183 +0x095:  sub    $0x4,%esp
08362186 +0x098:  lea    -0xc8(%ebp),%eax
0836218c +0x09e:  mov    -0x58(%ebp),%edx
0836218f +0x0a1:  mov    %edx,0x4(%esp)
08362193 +0x0a5:  mov    %eax,(%esp)
08362196 +0x0a8:  call   08135dae <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x19b5>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x19b5
0836219b +0x0ad:  sub    $0x4,%esp
0836219e +0x0b0:  lea    -0xc8(%ebp),%eax
083621a4 +0x0b6:  mov    %eax,0x4(%esp)
083621a8 +0x0ba:  lea    -0xdc(%ebp),%eax
083621ae +0x0c0:  mov    %eax,(%esp)
083621b1 +0x0c3:  call   08135dd2 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x19d9>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x19d9
083621b6 +0x0c8:  test   %al,%al
083621b8 +0x0ca:  jne    0836213f <+0x51>
083621ba +0x0cc:  mov    0xc(%ebp),%eax
083621bd +0x0cf:  mov    %eax,(%esp)
083621c0 +0x0d2:  call   081508fc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x231>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x231
083621c5 +0x0d7:  mov    %eax,-0x54(%ebp)
083621c8 +0x0da:  mov    -0x54(%ebp),%eax
083621cb +0x0dd:  mov    %eax,(%esp)
083621ce +0x0e0:  call   081526de <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2013>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2013
083621d3 +0x0e5:  xor    $0x1,%eax
083621d6 +0x0e8:  test   %al,%al
083621d8 +0x0ea:  je     083622bd <+0x1cf>
083621de +0x0f0:  lea    -0xe0(%ebp),%eax
083621e4 +0x0f6:  mov    -0x54(%ebp),%edx
083621e7 +0x0f9:  mov    %edx,0x4(%esp)
083621eb +0x0fd:  mov    %eax,(%esp)
083621ee +0x100:  call   08152722 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2057>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2057
083621f3 +0x105:  sub    $0x4,%esp
083621f6 +0x108:  lea    -0xe4(%ebp),%eax
083621fc +0x10e:  mov    -0x54(%ebp),%edx
083621ff +0x111:  mov    %edx,0x4(%esp)
08362203 +0x115:  mov    %eax,(%esp)
08362206 +0x118:  call   0815274e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2083>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2083
0836220b +0x11d:  sub    $0x4,%esp
0836220e +0x120:  jmp    0836229d <+0x1af>
08362213 +0x125:  lea    -0xe0(%ebp),%eax
08362219 +0x12b:  mov    %eax,(%esp)
0836221c +0x12e:  call   081527bc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x20f1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x20f1
08362221 +0x133:  mov    %eax,-0x44(%ebp)
08362224 +0x136:  mov    -0x44(%ebp),%eax
08362227 +0x139:  mov    (%eax),%eax
08362229 +0x13b:  mov    %eax,%ebx
0836222b +0x13d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08362230 +0x142:  mov    0x869c(%eax),%eax
08362236 +0x148:  mov    %ebx,0x4(%esp)
0836223a +0x14c:  mov    %eax,(%esp)
0836223d +0x14f:  call   0834a9d2 <_ZN16CAICharacterList3getEj>  ; CAICharacterList::get(unsigned int)
08362242 +0x154:  mov    %eax,-0x40(%ebp)
08362245 +0x157:  cmpl   $0x0,-0x40(%ebp)
08362249 +0x15b:  jne    0836228f <+0x1a1>
0836224b +0x15d:  mov    0xc(%ebp),%eax
0836224e +0x160:  mov    %eax,(%esp)
08362251 +0x163:  call   08134776 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x37d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x37d
08362256 +0x168:  mov    -0x44(%ebp),%edx
08362259 +0x16b:  mov    (%edx),%edx
0836225b +0x16d:  mov    %eax,0x18(%esp)
0836225f +0x171:  mov    %edx,0x14(%esp)
08362263 +0x175:  movl   $"Unknown APC Type(%d). Map(%d)",0x10(%esp)
0836226b +0x17d:  movl   $0x2847,0xc(%esp)
08362273 +0x185:  movl   $&_ZZNK12CDataManager9VerifyMapERK4CMapiE19__PRETTY_FUNCTION__,0x8(%esp)
0836227b +0x18d:  movl   $"data_manager.cpp",0x4(%esp)
08362283 +0x195:  movl   $0x1,(%esp)
0836228a +0x19c:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0836228f +0x1a1:  lea    -0xe0(%ebp),%eax
08362295 +0x1a7:  mov    %eax,(%esp)
08362298 +0x1aa:  call   081527a6 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x20db>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x20db
0836229d +0x1af:  lea    -0xe4(%ebp),%eax
083622a3 +0x1b5:  mov    %eax,0x4(%esp)
083622a7 +0x1b9:  lea    -0xe0(%ebp),%eax
083622ad +0x1bf:  mov    %eax,(%esp)
083622b0 +0x1c2:  call   0815277a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x20af>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x20af
083622b5 +0x1c7:  test   %al,%al
083622b7 +0x1c9:  jne    08362213 <+0x125>
083622bd +0x1cf:  lea    -0xd8(%ebp),%eax
083622c3 +0x1d5:  mov    %eax,(%esp)
083622c6 +0x1d8:  call   082357d6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xae80>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xae80
083622cb +0x1dd:  mov    0x10(%ebp),%eax
083622ce +0x1e0:  cmp    $0xffffffff,%eax
083622d1 +0x1e3:  je     083622ea <+0x1fc>
083622d3 +0x1e5:  lea    0x10(%ebp),%eax
083622d6 +0x1e8:  mov    %eax,0x4(%esp)
083622da +0x1ec:  lea    -0xd8(%ebp),%eax
083622e0 +0x1f2:  mov    %eax,(%esp)
083622e3 +0x1f5:  call   0826cbae <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x147c>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x147c
083622e8 +0x1fa:  jmp    08362307 <+0x219>
083622ea +0x1fc:  mov    0xc(%ebp),%eax
083622ed +0x1ff:  mov    %eax,(%esp)
083622f0 +0x202:  call   08373f08 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xded4>  ; global constructors keyed to CServerEvent::m_nExpRate+0xded4
083622f5 +0x207:  mov    %eax,0x4(%esp)
083622f9 +0x20b:  lea    -0xd8(%ebp),%eax
083622ff +0x211:  mov    %eax,(%esp)
08362302 +0x214:  call   0838a9c4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a464>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a464
08362307 +0x219:  lea    -0xc0(%ebp),%eax
0836230d +0x21f:  mov    0xc(%ebp),%edx
08362310 +0x222:  mov    %edx,0x4(%esp)
08362314 +0x226:  mov    %eax,(%esp)
08362317 +0x229:  call   081508c6 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1fb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1fb
0836231c +0x22e:  sub    $0x4,%esp
0836231f +0x231:  lea    -0xc0(%ebp),%eax
08362325 +0x237:  mov    %eax,-0x50(%ebp)
08362328 +0x23a:  lea    -0xe8(%ebp),%eax
0836232e +0x240:  mov    -0x50(%ebp),%edx
08362331 +0x243:  mov    %edx,0x4(%esp)
08362335 +0x247:  mov    %eax,(%esp)
08362338 +0x24a:  call   08153046 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x297b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x297b
0836233d +0x24f:  sub    $0x4,%esp
08362340 +0x252:  jmp    083624e0 <+0x3f2>
08362345 +0x257:  lea    -0xe8(%ebp),%eax
0836234b +0x25d:  mov    %eax,(%esp)
0836234e +0x260:  call   08154454 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x3d89>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x3d89
08362353 +0x265:  mov    %eax,-0x3c(%ebp)
08362356 +0x268:  lea    -0xb4(%ebp),%eax
0836235c +0x26e:  lea    -0xd8(%ebp),%edx
08362362 +0x274:  mov    %edx,0x4(%esp)
08362366 +0x278:  mov    %eax,(%esp)
08362369 +0x27b:  call   082373c8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xca72>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xca72
0836236e +0x280:  sub    $0x4,%esp
08362371 +0x283:  lea    -0xb4(%ebp),%eax
08362377 +0x289:  mov    %eax,0x4(%esp)
0836237b +0x28d:  lea    -0xec(%ebp),%eax
08362381 +0x293:  mov    %eax,(%esp)
08362384 +0x296:  call   08394acc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2456c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2456c
08362389 +0x29b:  lea    -0xb0(%ebp),%eax
0836238f +0x2a1:  lea    -0xd8(%ebp),%edx
08362395 +0x2a7:  mov    %edx,0x4(%esp)
08362399 +0x2ab:  mov    %eax,(%esp)
0836239c +0x2ae:  call   0826c43e <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0xd0c>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0xd0c
083623a1 +0x2b3:  sub    $0x4,%esp
083623a4 +0x2b6:  lea    -0xb0(%ebp),%eax
083623aa +0x2bc:  mov    %eax,0x4(%esp)
083623ae +0x2c0:  lea    -0xf0(%ebp),%eax
083623b4 +0x2c6:  mov    %eax,(%esp)
083623b7 +0x2c9:  call   08394acc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2456c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2456c
083623bc +0x2ce:  jmp    0836249d <+0x3af>
083623c1 +0x2d3:  lea    -0xec(%ebp),%eax
083623c7 +0x2d9:  mov    %eax,(%esp)
083623ca +0x2dc:  call   0826cba0 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x146e>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x146e
083623cf +0x2e1:  mov    (%eax),%eax
083623d1 +0x2e3:  mov    %eax,0x4(%esp)
083623d5 +0x2e7:  mov    0x8(%ebp),%eax
083623d8 +0x2ea:  mov    %eax,(%esp)
083623db +0x2ed:  call   0835f9f8 <_ZNK12CDataManager12find_dungeonEi>  ; CDataManager::find_dungeon(int) const
083623e0 +0x2f2:  mov    %eax,-0x38(%ebp)
083623e3 +0x2f5:  mov    -0x38(%ebp),%eax
083623e6 +0x2f8:  mov    %eax,(%esp)
083623e9 +0x2fb:  call   08150914 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x249>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x249
083623ee +0x300:  mov    %eax,-0x34(%ebp)
083623f1 +0x303:  mov    -0x34(%ebp),%eax
083623f4 +0x306:  mov    %eax,(%esp)
083623f7 +0x309:  call   08154f70 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x48a5>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x48a5
083623fc +0x30e:  mov    -0x3c(%ebp),%edx
083623ff +0x311:  mov    (%edx),%edx
08362401 +0x313:  cmp    %edx,%eax
08362403 +0x315:  mov    -0x3c(%ebp),%eax
08362406 +0x318:  mov    (%eax),%eax
08362408 +0x31a:  cmp    $0xffffffff,%eax
0836240b +0x31d:  je     08362426 <+0x338>
0836240d +0x31f:  mov    -0x34(%ebp),%eax
08362410 +0x322:  mov    %eax,(%esp)
08362413 +0x325:  call   08394adc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2457c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2457c
08362418 +0x32a:  xor    $0x1,%eax
0836241b +0x32d:  test   %al,%al
0836241d +0x32f:  je     08362426 <+0x338>
0836241f +0x331:  mov    $0x1,%eax
08362424 +0x336:  jmp    0836242b <+0x33d>
08362426 +0x338:  mov    $0x0,%eax
0836242b +0x33d:  test   %al,%al
0836242d +0x33f:  je     0836248f <+0x3a1>
0836242f +0x341:  mov    -0x3c(%ebp),%eax
08362432 +0x344:  mov    (%eax),%eax
08362434 +0x346:  mov    %eax,0x4(%esp)
08362438 +0x34a:  mov    -0x34(%ebp),%eax
0836243b +0x34d:  mov    %eax,(%esp)
0836243e +0x350:  call   081528be <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x21f3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x21f3
08362443 +0x355:  mov    (%eax),%eax
08362445 +0x357:  test   %eax,%eax
08362447 +0x359:  jle    08362466 <+0x378>
08362449 +0x35b:  mov    -0x3c(%ebp),%eax
0836244c +0x35e:  mov    (%eax),%eax
0836244e +0x360:  mov    %eax,0x4(%esp)
08362452 +0x364:  mov    -0x34(%ebp),%eax
08362455 +0x367:  mov    %eax,(%esp)
08362458 +0x36a:  call   081528be <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x21f3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x21f3
0836245d +0x36f:  mov    (%eax),%eax
0836245f +0x371:  cmp    $0xc8,%eax
08362464 +0x376:  jle    0836246d <+0x37f>
08362466 +0x378:  mov    $0x1,%eax
0836246b +0x37d:  jmp    08362472 <+0x384>
0836246d +0x37f:  mov    $0x0,%eax
08362472 +0x384:  test   %al,%al
08362474 +0x386:  je     0836248f <+0x3a1>
08362476 +0x388:  mov    -0x3c(%ebp),%eax
08362479 +0x38b:  mov    (%eax),%eax
0836247b +0x38d:  mov    %eax,0x4(%esp)
0836247f +0x391:  mov    -0x34(%ebp),%eax
08362482 +0x394:  mov    %eax,(%esp)
08362485 +0x397:  call   081528be <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x21f3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x21f3
0836248a +0x39c:  mov    (%eax),%eax
0836248c +0x39e:  cmp    $0xffffffff,%eax
0836248f +0x3a1:  lea    -0xec(%ebp),%eax
08362495 +0x3a7:  mov    %eax,(%esp)
08362498 +0x3aa:  call   0823dfa2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x9120>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x9120
0836249d +0x3af:  lea    -0xf0(%ebp),%eax
083624a3 +0x3b5:  mov    %eax,0x4(%esp)
083624a7 +0x3b9:  lea    -0xec(%ebp),%eax
083624ad +0x3bf:  mov    %eax,(%esp)
083624b0 +0x3c2:  call   0823df8e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x910c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x910c
083624b5 +0x3c7:  test   %al,%al
083624b7 +0x3c9:  jne    083623c1 <+0x2d3>
083624bd +0x3cf:  lea    -0xac(%ebp),%eax
083624c3 +0x3d5:  movl   $0x0,0x8(%esp)
083624cb +0x3dd:  lea    -0xe8(%ebp),%edx
083624d1 +0x3e3:  mov    %edx,0x4(%esp)
083624d5 +0x3e7:  mov    %eax,(%esp)
083624d8 +0x3ea:  call   08394a94 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24534>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24534
083624dd +0x3ef:  sub    $0x4,%esp
083624e0 +0x3f2:  lea    -0xb8(%ebp),%eax
083624e6 +0x3f8:  mov    -0x50(%ebp),%edx
083624e9 +0x3fb:  mov    %edx,0x4(%esp)
083624ed +0x3ff:  mov    %eax,(%esp)
083624f0 +0x402:  call   0815306c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29a1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29a1
083624f5 +0x407:  sub    $0x4,%esp
083624f8 +0x40a:  lea    -0xb8(%ebp),%eax
083624fe +0x410:  mov    %eax,0x4(%esp)
08362502 +0x414:  lea    -0xe8(%ebp),%eax
08362508 +0x41a:  mov    %eax,(%esp)
0836250b +0x41d:  call   0815442c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x3d61>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x3d61
08362510 +0x422:  test   %al,%al
08362512 +0x424:  jne    08362345 <+0x257>
08362518 +0x42a:  movb   $0x0,-0x49(%ebp)
0836251c +0x42e:  lea    -0xd8(%ebp),%eax
08362522 +0x434:  mov    %eax,(%esp)
08362525 +0x437:  call   082373b6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xca60>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xca60
0836252a +0x43c:  test   %al,%al
0836252c +0x43e:  je     0836292a <+0x83c>
08362532 +0x444:  movb   $0x0,-0x2d(%ebp)
08362536 +0x448:  mov    0x8(%ebp),%eax
08362539 +0x44b:  mov    (%eax),%eax
0836253b +0x44d:  mov    %eax,%edx
0836253d +0x44f:  lea    -0xa8(%ebp),%eax
08362543 +0x455:  mov    %edx,0x4(%esp)
08362547 +0x459:  mov    %eax,(%esp)
0836254a +0x45c:  call   0838a74a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a1ea>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a1ea
0836254f +0x461:  sub    $0x4,%esp
08362552 +0x464:  lea    -0xa8(%ebp),%eax
08362558 +0x46a:  mov    %eax,0x4(%esp)
0836255c +0x46e:  lea    -0xf8(%ebp),%eax
08362562 +0x474:  mov    %eax,(%esp)
08362565 +0x477:  call   083945be <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2405e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2405e
0836256a +0x47c:  jmp    083628d3 <+0x7e5>
0836256f +0x481:  cmpb   $0x0,-0x2d(%ebp)
08362573 +0x485:  jne    08362929 <+0x83b>
08362579 +0x48b:  lea    -0x100(%ebp),%eax
0836257f +0x491:  mov    %eax,(%esp)
08362582 +0x494:  call   0822b49e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb48>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb48
08362587 +0x499:  mov    0xc(%ebp),%eax
0836258a +0x49c:  mov    %eax,(%esp)
0836258d +0x49f:  call   08134776 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x37d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x37d
08362592 +0x4a4:  cmp    $0xc350,%eax
08362597 +0x4a9:  jle    083625b2 <+0x4c4>
08362599 +0x4ab:  mov    0xc(%ebp),%eax
0836259c +0x4ae:  mov    %eax,(%esp)
0836259f +0x4b1:  call   08134776 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x37d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x37d
083625a4 +0x4b6:  cmp    $0xc738,%eax
083625a9 +0x4bb:  jg     083625b2 <+0x4c4>
083625ab +0x4bd:  mov    $0x1,%eax
083625b0 +0x4c2:  jmp    083625b7 <+0x4c9>
083625b2 +0x4c4:  mov    $0x0,%eax
083625b7 +0x4c9:  test   %al,%al
083625b9 +0x4cb:  je     083625c4 <+0x4d6>
083625bb +0x4cd:  movb   $0x1,-0x2d(%ebp)
083625bf +0x4d1:  jmp    0836292a <+0x83c>
083625c4 +0x4d6:  lea    -0xf8(%ebp),%eax
083625ca +0x4dc:  mov    %eax,(%esp)
083625cd +0x4df:  call   0838a90e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a3ae>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a3ae
083625d2 +0x4e4:  mov    0x4(%eax),%eax
083625d5 +0x4e7:  mov    %eax,-0x2c(%ebp)
083625d8 +0x4ea:  mov    -0x2c(%ebp),%eax
083625db +0x4ed:  mov    %eax,(%esp)
083625de +0x4f0:  call   0822b4c0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb6a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb6a
083625e3 +0x4f5:  cmp    $0x1,%eax
083625e6 +0x4f8:  sete   %al
083625e9 +0x4fb:  test   %al,%al
083625eb +0x4fd:  je     08362657 <+0x569>
083625ed +0x4ff:  movl   $0x1,-0x28(%ebp)
083625f4 +0x506:  jmp    0836262e <+0x540>
083625f6 +0x508:  mov    -0x28(%ebp),%eax
083625f9 +0x50b:  mov    -0x2c(%ebp),%edx
083625fc +0x50e:  add    $0x674,%edx
08362602 +0x514:  mov    %eax,0x4(%esp)
08362606 +0x518:  mov    %edx,(%esp)
08362609 +0x51b:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
0836260e +0x520:  mov    (%eax),%ebx
08362610 +0x522:  mov    0xc(%ebp),%eax
08362613 +0x525:  mov    %eax,(%esp)
08362616 +0x528:  call   08134776 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x37d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x37d
0836261b +0x52d:  cmp    %eax,%ebx
0836261d +0x52f:  sete   %al
08362620 +0x532:  test   %al,%al
08362622 +0x534:  je     0836262a <+0x53c>
08362624 +0x536:  movb   $0x1,-0x2d(%ebp)
08362628 +0x53a:  jmp    08362657 <+0x569>
0836262a +0x53c:  addl   $0x1,-0x28(%ebp)
0836262e +0x540:  mov    -0x2c(%ebp),%eax
08362631 +0x543:  mov    0x680(%eax),%eax
08362637 +0x549:  cmp    -0x28(%ebp),%eax
0836263a +0x54c:  jl     0836264e <+0x560>
0836263c +0x54e:  movzbl -0x2d(%ebp),%eax
08362640 +0x552:  xor    $0x1,%eax
08362643 +0x555:  test   %al,%al
08362645 +0x557:  je     0836264e <+0x560>
08362647 +0x559:  mov    $0x1,%eax
0836264c +0x55e:  jmp    08362653 <+0x565>
0836264e +0x560:  mov    $0x0,%eax
08362653 +0x565:  test   %al,%al
08362655 +0x567:  jne    083625f6 <+0x508>
08362657 +0x569:  movl   $0x0,-0x24(%ebp)
0836265e +0x570:  jmp    08362891 <+0x7a3>
08362663 +0x575:  mov    -0x2c(%ebp),%eax
08362666 +0x578:  lea    0x62c(%eax),%edx
0836266c +0x57e:  mov    -0x24(%ebp),%eax
0836266f +0x581:  mov    %eax,0x4(%esp)
08362673 +0x585:  mov    %edx,(%esp)
08362676 +0x588:  call   08394b20 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x245c0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x245c0
0836267b +0x58d:  mov    %eax,-0x20(%ebp)
0836267e +0x590:  mov    -0x20(%ebp),%eax
08362681 +0x593:  mov    0x2c(%eax),%ebx
08362684 +0x596:  mov    0xc(%ebp),%eax
08362687 +0x599:  mov    %eax,(%esp)
0836268a +0x59c:  call   08134776 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x37d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x37d
0836268f +0x5a1:  cmp    %eax,%ebx
08362691 +0x5a3:  sete   %al
08362694 +0x5a6:  test   %al,%al
08362696 +0x5a8:  je     083626a1 <+0x5b3>
08362698 +0x5aa:  movb   $0x1,-0x2d(%ebp)
0836269c +0x5ae:  jmp    083628c5 <+0x7d7>
083626a1 +0x5b3:  movl   $0x0,-0x1c(%ebp)
083626a8 +0x5ba:  jmp    08362863 <+0x775>
083626ad +0x5bf:  movl   $0x0,-0x18(%ebp)
083626b4 +0x5c6:  jmp    08362836 <+0x748>
083626b9 +0x5cb:  mov    -0x1c(%ebp),%eax
083626bc +0x5ce:  mov    %eax,0x8(%esp)
083626c0 +0x5d2:  mov    -0x18(%ebp),%eax
083626c3 +0x5d5:  mov    %eax,0x4(%esp)
083626c7 +0x5d9:  mov    -0x20(%ebp),%eax
083626ca +0x5dc:  mov    %eax,(%esp)
083626cd +0x5df:  call   0822adc2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x46c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x46c
083626d2 +0x5e4:  mov    %eax,-0x14(%ebp)
083626d5 +0x5e7:  mov    -0x14(%ebp),%eax
083626d8 +0x5ea:  mov    (%eax),%eax
083626da +0x5ec:  test   %eax,%eax
083626dc +0x5ee:  je     08362832 <+0x744>
083626e2 +0x5f4:  mov    -0x14(%ebp),%eax
083626e5 +0x5f7:  lea    0x4(%eax),%edx
083626e8 +0x5fa:  lea    -0x90(%ebp),%eax
083626ee +0x600:  mov    %edx,0x4(%esp)
083626f2 +0x604:  mov    %eax,(%esp)
083626f5 +0x607:  call   080cd37a <_GLOBAL__I__ZN10BingoEventC2Ev+0x21c7>  ; global constructors keyed to BingoEvent::BingoEvent()+0x21c7
083626fa +0x60c:  sub    $0x4,%esp
083626fd +0x60f:  mov    0xc(%ebp),%eax
08362700 +0x612:  mov    %eax,(%esp)
08362703 +0x615:  call   08134776 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x37d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x37d
08362708 +0x61a:  mov    %eax,-0x88(%ebp)
0836270e +0x620:  mov    -0x14(%ebp),%eax
08362711 +0x623:  lea    0x4(%eax),%edx
08362714 +0x626:  lea    -0x84(%ebp),%eax
0836271a +0x62c:  mov    %edx,0x4(%esp)
0836271e +0x630:  mov    %eax,(%esp)
08362721 +0x633:  call   080cd37a <_GLOBAL__I__ZN10BingoEventC2Ev+0x21c7>  ; global constructors keyed to BingoEvent::BingoEvent()+0x21c7
08362726 +0x638:  sub    $0x4,%esp
08362729 +0x63b:  mov    -0x14(%ebp),%eax
0836272c +0x63e:  lea    0x4(%eax),%edx
0836272f +0x641:  lea    -0x80(%ebp),%eax
08362732 +0x644:  mov    %edx,0x4(%esp)
08362736 +0x648:  mov    %eax,(%esp)
08362739 +0x64b:  call   080cd34e <_GLOBAL__I__ZN10BingoEventC2Ev+0x219b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x219b
0836273e +0x650:  sub    $0x4,%esp
08362741 +0x653:  lea    -0x8c(%ebp),%eax
08362747 +0x659:  lea    -0x88(%ebp),%edx
0836274d +0x65f:  mov    %edx,0xc(%esp)
08362751 +0x663:  mov    -0x84(%ebp),%edx
08362757 +0x669:  mov    %edx,0x8(%esp)
0836275b +0x66d:  mov    -0x80(%ebp),%edx
0836275e +0x670:  mov    %edx,0x4(%esp)
08362762 +0x674:  mov    %eax,(%esp)
08362765 +0x677:  call   08394b33 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x245d3>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x245d3
0836276a +0x67c:  sub    $0x4,%esp
0836276d +0x67f:  lea    -0x90(%ebp),%eax
08362773 +0x685:  mov    %eax,0x4(%esp)
08362777 +0x689:  lea    -0x8c(%ebp),%eax
0836277d +0x68f:  mov    %eax,(%esp)
08362780 +0x692:  call   080f9a26 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x232>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x232
08362785 +0x697:  test   %al,%al
08362787 +0x699:  jne    0836281c <+0x72e>
0836278d +0x69f:  mov    -0x14(%ebp),%eax
08362790 +0x6a2:  lea    0x10(%eax),%edx
08362793 +0x6a5:  lea    -0x7c(%ebp),%eax
08362796 +0x6a8:  mov    %edx,0x4(%esp)
0836279a +0x6ac:  mov    %eax,(%esp)
0836279d +0x6af:  call   080cd37a <_GLOBAL__I__ZN10BingoEventC2Ev+0x21c7>  ; global constructors keyed to BingoEvent::BingoEvent()+0x21c7
083627a2 +0x6b4:  sub    $0x4,%esp
083627a5 +0x6b7:  mov    0xc(%ebp),%eax
083627a8 +0x6ba:  mov    %eax,(%esp)
083627ab +0x6bd:  call   08134776 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x37d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x37d
083627b0 +0x6c2:  mov    %eax,-0x74(%ebp)
083627b3 +0x6c5:  mov    -0x14(%ebp),%eax
083627b6 +0x6c8:  lea    0x10(%eax),%edx
083627b9 +0x6cb:  lea    -0x70(%ebp),%eax
083627bc +0x6ce:  mov    %edx,0x4(%esp)
083627c0 +0x6d2:  mov    %eax,(%esp)
083627c3 +0x6d5:  call   080cd37a <_GLOBAL__I__ZN10BingoEventC2Ev+0x21c7>  ; global constructors keyed to BingoEvent::BingoEvent()+0x21c7
083627c8 +0x6da:  sub    $0x4,%esp
083627cb +0x6dd:  mov    -0x14(%ebp),%eax
083627ce +0x6e0:  lea    0x10(%eax),%edx
083627d1 +0x6e3:  lea    -0x6c(%ebp),%eax
083627d4 +0x6e6:  mov    %edx,0x4(%esp)
083627d8 +0x6ea:  mov    %eax,(%esp)
083627db +0x6ed:  call   080cd34e <_GLOBAL__I__ZN10BingoEventC2Ev+0x219b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x219b
083627e0 +0x6f2:  sub    $0x4,%esp
083627e3 +0x6f5:  lea    -0x78(%ebp),%eax
083627e6 +0x6f8:  lea    -0x74(%ebp),%edx
083627e9 +0x6fb:  mov    %edx,0xc(%esp)
083627ed +0x6ff:  mov    -0x70(%ebp),%edx
083627f0 +0x702:  mov    %edx,0x8(%esp)
083627f4 +0x706:  mov    -0x6c(%ebp),%edx
083627f7 +0x709:  mov    %edx,0x4(%esp)
083627fb +0x70d:  mov    %eax,(%esp)
083627fe +0x710:  call   08394b33 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x245d3>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x245d3
08362803 +0x715:  sub    $0x4,%esp
08362806 +0x718:  lea    -0x7c(%ebp),%eax
08362809 +0x71b:  mov    %eax,0x4(%esp)
0836280d +0x71f:  lea    -0x78(%ebp),%eax
08362810 +0x722:  mov    %eax,(%esp)
08362813 +0x725:  call   080f9a26 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x232>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x232
08362818 +0x72a:  test   %al,%al
0836281a +0x72c:  je     08362823 <+0x735>
0836281c +0x72e:  mov    $0x1,%eax
08362821 +0x733:  jmp    08362828 <+0x73a>
08362823 +0x735:  mov    $0x0,%eax
08362828 +0x73a:  test   %al,%al
0836282a +0x73c:  je     08362832 <+0x744>
0836282c +0x73e:  movb   $0x1,-0x2d(%ebp)
08362830 +0x742:  jmp    0836285f <+0x771>
08362832 +0x744:  addl   $0x1,-0x18(%ebp)
08362836 +0x748:  mov    -0x20(%ebp),%eax
08362839 +0x74b:  mov    (%eax),%eax
0836283b +0x74d:  cmp    -0x18(%ebp),%eax
0836283e +0x750:  jle    08362852 <+0x764>
08362840 +0x752:  movzbl -0x2d(%ebp),%eax
08362844 +0x756:  xor    $0x1,%eax
08362847 +0x759:  test   %al,%al
08362849 +0x75b:  je     08362852 <+0x764>
0836284b +0x75d:  mov    $0x1,%eax
08362850 +0x762:  jmp    08362857 <+0x769>
08362852 +0x764:  mov    $0x0,%eax
08362857 +0x769:  test   %al,%al
08362859 +0x76b:  jne    083626b9 <+0x5cb>
0836285f +0x771:  addl   $0x1,-0x1c(%ebp)
08362863 +0x775:  mov    -0x20(%ebp),%eax
08362866 +0x778:  mov    0x4(%eax),%eax
08362869 +0x77b:  cmp    -0x1c(%ebp),%eax
0836286c +0x77e:  jle    08362880 <+0x792>
0836286e +0x780:  movzbl -0x2d(%ebp),%eax
08362872 +0x784:  xor    $0x1,%eax
08362875 +0x787:  test   %al,%al
08362877 +0x789:  je     08362880 <+0x792>
08362879 +0x78b:  mov    $0x1,%eax
0836287e +0x790:  jmp    08362885 <+0x797>
08362880 +0x792:  mov    $0x0,%eax
08362885 +0x797:  test   %al,%al
08362887 +0x799:  jne    083626ad <+0x5bf>
0836288d +0x79f:  addl   $0x1,-0x24(%ebp)
08362891 +0x7a3:  mov    -0x2c(%ebp),%eax
08362894 +0x7a6:  add    $0x62c,%eax
08362899 +0x7ab:  mov    %eax,(%esp)
0836289c +0x7ae:  call   0838a192 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19c32>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19c32
083628a1 +0x7b3:  cmp    -0x24(%ebp),%eax
083628a4 +0x7b6:  jbe    083628b8 <+0x7ca>
083628a6 +0x7b8:  movzbl -0x2d(%ebp),%eax
083628aa +0x7bc:  xor    $0x1,%eax
083628ad +0x7bf:  test   %al,%al
083628af +0x7c1:  je     083628b8 <+0x7ca>
083628b1 +0x7c3:  mov    $0x1,%eax
083628b6 +0x7c8:  jmp    083628bd <+0x7cf>
083628b8 +0x7ca:  mov    $0x0,%eax
083628bd +0x7cf:  test   %al,%al
083628bf +0x7d1:  jne    08362663 <+0x575>
083628c5 +0x7d7:  lea    -0xf8(%ebp),%eax
083628cb +0x7dd:  mov    %eax,(%esp)
083628ce +0x7e0:  call   083949fc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2449c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2449c
083628d3 +0x7e5:  mov    0x8(%ebp),%eax
083628d6 +0x7e8:  mov    (%eax),%eax
083628d8 +0x7ea:  mov    %eax,%edx
083628da +0x7ec:  lea    -0x98(%ebp),%eax
083628e0 +0x7f2:  mov    %edx,0x4(%esp)
083628e4 +0x7f6:  mov    %eax,(%esp)
083628e7 +0x7f9:  call   0838a770 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a210>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a210
083628ec +0x7fe:  sub    $0x4,%esp
083628ef +0x801:  lea    -0x98(%ebp),%eax
083628f5 +0x807:  mov    %eax,0x4(%esp)
083628f9 +0x80b:  lea    -0xa0(%ebp),%eax
083628ff +0x811:  mov    %eax,(%esp)
08362902 +0x814:  call   083945be <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2405e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2405e
08362907 +0x819:  lea    -0xa0(%ebp),%eax
0836290d +0x81f:  mov    %eax,0x4(%esp)
08362911 +0x823:  lea    -0xf8(%ebp),%eax
08362917 +0x829:  mov    %eax,(%esp)
0836291a +0x82c:  call   0838a948 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a3e8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a3e8
0836291f +0x831:  test   %al,%al
08362921 +0x833:  jne    0836256f <+0x481>
08362927 +0x839:  jmp    0836292a <+0x83c>
08362929 +0x83b:  nop
0836292a +0x83c:  lea    -0x68(%ebp),%eax
0836292d +0x83f:  lea    -0xd8(%ebp),%edx
08362933 +0x845:  mov    %edx,0x4(%esp)
08362937 +0x849:  mov    %eax,(%esp)
0836293a +0x84c:  call   082373c8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xca72>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xca72
0836293f +0x851:  sub    $0x4,%esp
08362942 +0x854:  lea    -0x68(%ebp),%eax
08362945 +0x857:  mov    %eax,0x4(%esp)
08362949 +0x85b:  lea    -0x104(%ebp),%eax
0836294f +0x861:  mov    %eax,(%esp)
08362952 +0x864:  call   08394acc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2456c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2456c
08362957 +0x869:  lea    -0x64(%ebp),%eax
0836295a +0x86c:  lea    -0xd8(%ebp),%edx
08362960 +0x872:  mov    %edx,0x4(%esp)
08362964 +0x876:  mov    %eax,(%esp)
08362967 +0x879:  call   0826c43e <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0xd0c>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0xd0c
0836296c +0x87e:  sub    $0x4,%esp
0836296f +0x881:  lea    -0x64(%ebp),%eax
08362972 +0x884:  mov    %eax,0x4(%esp)
08362976 +0x888:  lea    -0x108(%ebp),%eax
0836297c +0x88e:  mov    %eax,(%esp)
0836297f +0x891:  call   08394acc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2456c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2456c
08362984 +0x896:  jmp    083629e9 <+0x8fb>
08362986 +0x898:  lea    -0x104(%ebp),%eax
0836298c +0x89e:  mov    %eax,(%esp)
0836298f +0x8a1:  call   0826cba0 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x146e>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x146e
08362994 +0x8a6:  mov    (%eax),%eax
08362996 +0x8a8:  mov    %eax,0x4(%esp)
0836299a +0x8ac:  mov    0x8(%ebp),%eax
0836299d +0x8af:  mov    %eax,(%esp)
083629a0 +0x8b2:  call   0835f9f8 <_ZNK12CDataManager12find_dungeonEi>  ; CDataManager::find_dungeon(int) const
083629a5 +0x8b7:  mov    %eax,-0x10(%ebp)
083629a8 +0x8ba:  cmpl   $0x0,-0x10(%ebp)
083629ac +0x8be:  jne    083629b2 <+0x8c4>
083629ae +0x8c0:  movb   $0x1,-0x49(%ebp)
083629b2 +0x8c4:  mov    -0x10(%ebp),%eax
083629b5 +0x8c7:  add    $0x690,%eax
083629ba +0x8cc:  mov    %eax,(%esp)
083629bd +0x8cf:  call   08394b88 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24628>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24628
083629c2 +0x8d4:  xor    $0x1,%eax
083629c5 +0x8d7:  test   %al,%al
083629c7 +0x8d9:  je     083629db <+0x8ed>
083629c9 +0x8db:  mov    0xc(%ebp),%eax
083629cc +0x8de:  add    $0x9c,%eax
083629d1 +0x8e3:  mov    %eax,(%esp)
083629d4 +0x8e6:  call   083108f6 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x24db>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x24db
083629d9 +0x8eb:  test   %al,%al
083629db +0x8ed:  lea    -0x104(%ebp),%eax
083629e1 +0x8f3:  mov    %eax,(%esp)
083629e4 +0x8f6:  call   0823dfa2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x9120>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x9120
083629e9 +0x8fb:  lea    -0x108(%ebp),%eax
083629ef +0x901:  mov    %eax,0x4(%esp)
083629f3 +0x905:  lea    -0x104(%ebp),%eax
083629f9 +0x90b:  mov    %eax,(%esp)
083629fc +0x90e:  call   0823df8e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x910c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x910c
08362a01 +0x913:  test   %al,%al
08362a03 +0x915:  jne    08362986 <+0x898>
08362a05 +0x917:  cmpb   $0x0,-0x49(%ebp)
08362a09 +0x91b:  je     08362a15 <+0x927>
08362a0b +0x91d:  mov    $0x0,%ebx
08362a10 +0x922:  jmp    08362ad4 <+0x9e6>
08362a15 +0x927:  mov    0xc(%ebp),%eax
08362a18 +0x92a:  lea    0x84(%eax),%edx
08362a1e +0x930:  lea    -0x10c(%ebp),%eax
08362a24 +0x936:  mov    %edx,0x4(%esp)
08362a28 +0x93a:  mov    %eax,(%esp)
08362a2b +0x93d:  call   08111220 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x732>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x732
08362a30 +0x942:  sub    $0x4,%esp
08362a33 +0x945:  jmp    08362a81 <+0x993>
08362a35 +0x947:  lea    -0x10c(%ebp),%eax
08362a3b +0x94d:  mov    %eax,(%esp)
08362a3e +0x950:  call   08235bba <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb264>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb264
08362a43 +0x955:  mov    %eax,-0xc(%ebp)
08362a46 +0x958:  mov    -0xc(%ebp),%eax
08362a49 +0x95b:  mov    (%eax),%eax
08362a4b +0x95d:  test   %eax,%eax
08362a4d +0x95f:  js     08362a61 <+0x973>
08362a4f +0x961:  mov    -0xc(%ebp),%eax
08362a52 +0x964:  mov    0x4(%eax),%eax
08362a55 +0x967:  test   %eax,%eax
08362a57 +0x969:  js     08362a61 <+0x973>
08362a59 +0x96b:  mov    -0xc(%ebp),%eax
08362a5c +0x96e:  mov    (%eax),%eax
08362a5e +0x970:  cmp    $0x64,%eax
08362a61 +0x973:  lea    -0x5c(%ebp),%eax
08362a64 +0x976:  movl   $0x0,0x8(%esp)
08362a6c +0x97e:  lea    -0x10c(%ebp),%edx
08362a72 +0x984:  mov    %edx,0x4(%esp)
08362a76 +0x988:  mov    %eax,(%esp)
08362a79 +0x98b:  call   08193472 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0xda>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0xda
08362a7e +0x990:  sub    $0x4,%esp
08362a81 +0x993:  mov    0xc(%ebp),%eax
08362a84 +0x996:  lea    0x84(%eax),%edx
08362a8a +0x99c:  lea    -0x60(%ebp),%eax
08362a8d +0x99f:  mov    %edx,0x4(%esp)
08362a91 +0x9a3:  mov    %eax,(%esp)
08362a94 +0x9a6:  call   0811124c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x75e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x75e
08362a99 +0x9ab:  sub    $0x4,%esp
08362a9c +0x9ae:  lea    -0x60(%ebp),%eax
08362a9f +0x9b1:  mov    %eax,0x4(%esp)
08362aa3 +0x9b5:  lea    -0x10c(%ebp),%eax
08362aa9 +0x9bb:  mov    %eax,(%esp)
08362aac +0x9be:  call   081938e5 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x54d>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x54d
08362ab1 +0x9c3:  test   %al,%al
08362ab3 +0x9c5:  jne    08362a35 <+0x947>
08362ab5 +0x9c7:  mov    $0x1,%ebx
08362aba +0x9cc:  jmp    08362ad4 <+0x9e6>
08362abc +0x9ce:  mov    %edx,%ebx
08362abe +0x9d0:  mov    %eax,%esi
08362ac0 +0x9d2:  lea    -0xc0(%ebp),%eax
08362ac6 +0x9d8:  mov    %eax,(%esp)
08362ac9 +0x9db:  call   081508b2 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1e7
08362ace +0x9e0:  mov    %esi,%eax
08362ad0 +0x9e2:  mov    %ebx,%edx
08362ad2 +0x9e4:  jmp    08362ae4 <+0x9f6>
08362ad4 +0x9e6:  lea    -0xc0(%ebp),%eax
08362ada +0x9ec:  mov    %eax,(%esp)
08362add +0x9ef:  call   081508b2 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1e7
08362ae2 +0x9f4:  jmp    08362afc <+0xa0e>
08362ae4 +0x9f6:  mov    %edx,%ebx
08362ae6 +0x9f8:  mov    %eax,%esi
08362ae8 +0x9fa:  lea    -0xd8(%ebp),%eax
08362aee +0xa00:  mov    %eax,(%esp)
08362af1 +0xa03:  call   0822ade8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x492>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x492
08362af6 +0xa08:  mov    %esi,%eax
08362af8 +0xa0a:  mov    %ebx,%edx
08362afa +0xa0c:  jmp    08362b0c <+0xa1e>
08362afc +0xa0e:  lea    -0xd8(%ebp),%eax
08362b02 +0xa14:  mov    %eax,(%esp)
08362b05 +0xa17:  call   0822ade8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x492>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x492
08362b0a +0xa1c:  jmp    08362b2a <+0xa3c>
08362b0c +0xa1e:  mov    %edx,%ebx
08362b0e +0xa20:  mov    %eax,%esi
08362b10 +0xa22:  lea    -0xd0(%ebp),%eax
08362b16 +0xa28:  mov    %eax,(%esp)
08362b19 +0xa2b:  call   08134782 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x389>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x389
08362b1e +0xa30:  mov    %esi,%eax
08362b20 +0xa32:  mov    %ebx,%edx
08362b22 +0xa34:  mov    %eax,(%esp)
08362b25 +0xa37:  call   08ae3750 <_Unwind_Resume>
08362b2a +0xa3c:  lea    -0xd0(%ebp),%eax
08362b30 +0xa42:  mov    %eax,(%esp)
08362b33 +0xa45:  call   08134782 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x389>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x389
08362b38 +0xa4a:  mov    %ebx,%eax
08362b3a +0xa4c:  lea    -0x8(%ebp),%esp
08362b3d +0xa4f:  add    $0x0,%esp
08362b40 +0xa52:  pop    %ebx
08362b41 +0xa53:  pop    %esi
08362b42 +0xa54:  pop    %ebp
08362b43 +0xa55:  ret
```

## 反编译 C

```c
// CDataManager::VerifyMap @ 0x83620ee

/* CDataManager::VerifyMap(CMap const&, int) const */

undefined4 __thiscall CDataManager::VerifyMap(CDataManager *this,CMap *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  list *plVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined1 local_110 [4];
  undefined1 local_10c [4];
  undefined1 local_108 [4];
  undefined1 local_104 [8];
  _Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
  local_fc [8];
  _List_const_iterator<int> local_f4 [4];
  _List_const_iterator<int> local_f0 [4];
  _List_const_iterator<_mapItem> local_ec [4];
  __normal_iterator local_e8 [4];
  __normal_iterator<STAICharacterMapArrangeData_const*,std::vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>>>
  local_e4 [4];
  _List_const_iterator<_mapMonster> local_e0 [4];
  list<int,std::allocator<int>> local_dc [8];
  undefined1 local_d4 [8];
  _List_const_iterator local_cc [4];
  _List_const_iterator<_mapMonster> local_c8 [4];
  undefined1 local_c4 [8];
  _List_const_iterator local_bc [4];
  _List_iterator local_b8 [4];
  _List_iterator local_b4 [4];
  _List_const_iterator<_mapItem> local_b0 [4];
  hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>
  local_ac [8];
  undefined1 local_a4 [8];
  undefined1 local_9c [8];
  undefined1 local_94 [4];
  undefined1 local_90 [4];
  undefined4 local_8c;
  int local_88;
  undefined4 local_84;
  undefined1 local_80 [4];
  undefined1 local_7c [4];
  undefined4 local_78;
  int local_74;
  undefined4 local_70;
  undefined1 local_6c [4];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  undefined1 local_60 [4];
  undefined1 *local_5c;
  undefined4 local_58;
  undefined1 *local_54;
  char local_4d;
  undefined4 local_4c;
  uint *local_48;
  int local_44;
  uint *local_40;
  CDungeon *local_3c;
  vector<stDungeonAssignItem_t,std::allocator<stDungeonAssignItem_t>> *local_38;
  char local_31;
  int local_30;
  int local_2c;
  uint local_28;
  int *local_24;
  int local_20;
  int local_1c;
  int *local_18;
  int local_14;
  undefined4 local_10;
  
  piVar8 = (int *)&stack0xfffffec4;
  CMap::get_map_type(param_1);
  CMap::get_monster_list();
  local_5c = local_d4;
                    /* try { // try from 08362135 to 083622ca has its CatchHandler @ 08362b0c */
  std::list<_mapMonster,std::allocator<_mapMonster>>::begin();
  while( true ) {
    std::list<_mapMonster,std::allocator<_mapMonster>>::end();
    cVar1 = std::_List_const_iterator<_mapMonster>::operator!=(local_e0,local_cc);
    if (cVar1 == '\0') break;
    local_4c = std::_List_const_iterator<_mapMonster>::operator*(local_e0);
    std::_List_const_iterator<_mapMonster>::operator++(local_c8,(int)local_e0);
  }
  local_58 = CMap::getAICharacters(param_1);
  cVar1 = std::vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>>::
          empty();
  if (cVar1 != '\x01') {
    std::vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>>::begin();
    std::vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>>::end();
    while (bVar2 = __gnu_cxx::operator!=(local_e4,local_e8), bVar2) {
      local_48 = (uint *)__gnu_cxx::
                         __normal_iterator<STAICharacterMapArrangeData_const*,std::vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>>>
                         ::operator*(local_e4);
      uVar7 = *local_48;
      iVar4 = G_CDataManager();
      local_44 = CAICharacterList::get(*(CAICharacterList **)(iVar4 + 0x869c),uVar7);
      if (local_44 == 0) {
        CMap::get_index(param_1);
        LogManager::logFormat
                  (1,"data_manager.cpp","bool CDataManager::VerifyMap(const CMap&, int) const",
                   0x2847,"Unknown APC Type(%d). Map(%d)");
      }
      __gnu_cxx::
      __normal_iterator<STAICharacterMapArrangeData_const*,std::vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>>>
      ::operator++(local_e4);
    }
  }
  std::list<int,std::allocator<int>>::list(local_dc);
  if (param_2 == -1) {
    plVar3 = (list *)CMap::getDungeonLists(param_1);
    std::list<int,std::allocator<int>>::operator=(local_dc,plVar3);
  }
  else {
                    /* try { // try from 083622e3 to 0836231b has its CatchHandler @ 08362ae4 */
    std::list<int,std::allocator<int>>::push_back(local_dc,&param_2);
  }
  CMap::get_item_list();
  local_54 = local_c4;
                    /* try { // try from 08362338 to 08362ab0 has its CatchHandler @ 08362abc */
  std::list<_mapItem,std::allocator<_mapItem>>::begin();
  while( true ) {
    std::list<_mapItem,std::allocator<_mapItem>>::end();
    cVar1 = std::_List_const_iterator<_mapItem>::operator!=(local_ec,local_bc);
    if (cVar1 == '\0') break;
    local_40 = (uint *)std::_List_const_iterator<_mapItem>::operator*(local_ec);
    std::list<int,std::allocator<int>>::begin();
    std::_List_const_iterator<int>::_List_const_iterator(local_f0,local_b8);
    std::list<int,std::allocator<int>>::end();
    std::_List_const_iterator<int>::_List_const_iterator(local_f4,local_b4);
    while (cVar1 = std::_List_const_iterator<int>::operator!=(local_f0,local_f4), cVar1 != '\0') {
      std::_List_const_iterator<int>::operator*(local_f0);
      local_3c = (CDungeon *)find_dungeon((int)this);
      local_38 = (vector<stDungeonAssignItem_t,std::allocator<stDungeonAssignItem_t>> *)
                 CDungeon::getSpecialPassiveObjectItems(local_3c);
      std::vector<stDungeonAssignItem_t,std::allocator<stDungeonAssignItem_t>>::size(local_38);
      if ((*local_40 == 0xffffffff) ||
         (cVar1 = std::vector<stDungeonAssignItem_t,std::allocator<stDungeonAssignItem_t>>::empty(),
         cVar1 == '\x01')) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        piVar5 = (int *)std::vector<stDungeonAssignItem_t,std::allocator<stDungeonAssignItem_t>>::at
                                  (local_38,*local_40);
        if ((*piVar5 < 1) ||
           (piVar5 = (int *)std::vector<stDungeonAssignItem_t,std::allocator<stDungeonAssignItem_t>>
                            ::at(local_38,*local_40), 200 < *piVar5)) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (bVar2) {
          std::vector<stDungeonAssignItem_t,std::allocator<stDungeonAssignItem_t>>::at
                    (local_38,*local_40);
        }
      }
      std::_List_const_iterator<int>::operator++(local_f0);
    }
    std::_List_const_iterator<_mapItem>::operator++(local_b0,(int)local_ec);
  }
  local_4d = '\0';
  cVar1 = std::list<int,std::allocator<int>>::empty(local_dc);
  piVar5 = (int *)&stack0xfffffec4;
  if (cVar1 == '\0') {
LAB_0836292a:
    piVar5[1] = (int)local_dc;
    *piVar5 = (int)local_6c;
    piVar5[-1] = 0x836293f;
    std::list<int,std::allocator<int>>::begin();
    piVar5[1] = (int)local_6c;
    *piVar5 = (int)local_108;
    piVar5[-1] = 0x8362957;
    std::_List_const_iterator<int>::_List_const_iterator
              ((_List_const_iterator<int> *)*piVar5,(_List_iterator *)piVar5[1]);
    piVar5[1] = (int)local_dc;
    *piVar5 = (int)local_68;
    piVar5[-1] = 0x836296c;
    std::list<int,std::allocator<int>>::end();
    piVar5[1] = (int)local_68;
    *piVar5 = (int)local_10c;
    piVar5[-1] = 0x8362984;
    std::_List_const_iterator<int>::_List_const_iterator
              ((_List_const_iterator<int> *)*piVar5,(_List_iterator *)piVar5[1]);
    while( true ) {
      piVar5[1] = (int)local_10c;
      *piVar5 = (int)local_108;
      piVar5[-1] = 0x8362a01;
      cVar1 = std::_List_const_iterator<int>::operator!=
                        ((_List_const_iterator<int> *)*piVar5,(_List_const_iterator *)piVar5[1]);
      if (cVar1 == '\0') break;
      *piVar5 = (int)local_108;
      piVar5[-1] = 0x8362994;
      piVar8 = (int *)std::_List_const_iterator<int>::operator*
                                ((_List_const_iterator<int> *)*piVar5);
      piVar5[1] = *piVar8;
      *piVar5 = (int)this;
      piVar5[-1] = 0x83629a5;
      local_14 = find_dungeon(*piVar5);
      if (local_14 == 0) {
        local_4d = '\x01';
      }
      *piVar5 = local_14 + 0x690;
      piVar5[-1] = 0x83629c2;
      cVar1 = std::vector<stEventMonster_t,std::allocator<stEventMonster_t>>::empty();
      if (cVar1 != '\x01') {
        *piVar5 = (int)(param_1 + 0x9c);
        piVar5[-1] = 0x83629d9;
        std::vector<STRivalMapData,std::allocator<STRivalMapData>>::empty();
      }
      *piVar5 = (int)local_108;
      piVar5[-1] = 0x83629e9;
      std::_List_const_iterator<int>::operator++((_List_const_iterator<int> *)*piVar5);
    }
    if (local_4d == '\0') {
      piVar5[1] = (int)(param_1 + 0x84);
      *piVar5 = (int)local_110;
      piVar5[-1] = 0x8362a30;
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
      while( true ) {
        piVar5[1] = (int)(param_1 + 0x84);
        *piVar5 = (int)local_64;
        piVar5[-1] = 0x8362a99;
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
        piVar5[1] = (int)local_64;
        *piVar5 = (int)local_110;
        piVar5[-1] = 0x8362ab1;
        bVar2 = __gnu_cxx::operator!=((__normal_iterator *)*piVar5,(__normal_iterator *)piVar5[1]);
        if (!bVar2) break;
        *piVar5 = (int)local_110;
        piVar5[-1] = 0x8362a43;
        local_10 = __gnu_cxx::
                   __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                   ::operator*((__normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                                *)*piVar5);
        piVar5[2] = 0;
        piVar5[1] = (int)local_110;
        *piVar5 = (int)local_60;
        piVar5[-1] = 0x8362a7e;
        __gnu_cxx::
        __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
        ::operator++((__normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                      *)*piVar5,piVar5[1]);
      }
      uVar9 = 1;
    }
    else {
      uVar9 = 0;
    }
    *piVar5 = (int)local_c4;
                    /* try { // try from 08362add to 08362ae1 has its CatchHandler @ 08362ae4 */
    piVar5[-1] = 0x8362ae2;
    std::list<_mapItem,std::allocator<_mapItem>>::~list
              ((list<_mapItem,std::allocator<_mapItem>> *)*piVar5);
    *piVar5 = (int)local_dc;
                    /* try { // try from 08362b05 to 08362b09 has its CatchHandler @ 08362b0c */
    piVar5[-1] = 0x8362b0a;
    std::list<int,std::allocator<int>>::~list((list<int,std::allocator<int>> *)*piVar5);
    *piVar5 = (int)local_d4;
    piVar5[-1] = 0x8362b38;
    std::list<_mapMonster,std::allocator<_mapMonster>>::~list
              ((list<_mapMonster,std::allocator<_mapMonster>> *)*piVar5);
    return uVar9;
  }
  local_31 = '\0';
  __gnu_cxx::
  hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>::begin
            (local_ac);
  __gnu_cxx::
  _Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
  ::_Hashtable_const_iterator(local_fc,(_Hashtable_iterator *)local_ac);
  do {
    piVar8[1] = *(int *)this;
    *piVar8 = (int)local_9c;
    piVar8[-1] = 0x83628ec;
    __gnu_cxx::
    hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>::end
              ((hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>
                *)*piVar8);
    piVar8[1] = (int)local_9c;
    *piVar8 = (int)local_a4;
    piVar8[-1] = 0x8362907;
    __gnu_cxx::
    _Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
    ::_Hashtable_const_iterator
              ((_Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
                *)*piVar8,(_Hashtable_iterator *)piVar8[1]);
    piVar8[1] = (int)local_a4;
    *piVar8 = (int)local_fc;
    piVar8[-1] = 0x836291f;
    cVar1 = __gnu_cxx::
            _Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
            ::operator!=((_Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
                          *)*piVar8,(_Hashtable_const_iterator *)piVar8[1]);
    piVar5 = piVar8;
    if ((cVar1 == '\0') || (local_31 != '\0')) goto LAB_0836292a;
    *piVar8 = (int)local_104;
    piVar8[-1] = 0x8362587;
    PvPMapInfo::PvPMapInfo((PvPMapInfo *)*piVar8);
    *piVar8 = (int)param_1;
    piVar8[-1] = 0x8362592;
    iVar4 = CMap::get_index((CMap *)*piVar8);
    if (iVar4 < 0xc351) {
LAB_083625b2:
      bVar2 = false;
    }
    else {
      *piVar8 = (int)param_1;
      piVar8[-1] = 0x83625a4;
      iVar4 = CMap::get_index((CMap *)*piVar8);
      if (51000 < iVar4) goto LAB_083625b2;
      bVar2 = true;
    }
    if (bVar2) {
      local_31 = '\x01';
      goto LAB_0836292a;
    }
    *piVar8 = (int)local_fc;
    piVar8[-1] = 0x83625d2;
    iVar4 = __gnu_cxx::
            _Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
            ::operator->((_Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
                          *)*piVar8);
    local_30 = *(int *)(iVar4 + 4);
    *piVar8 = *(int *)(iVar4 + 4);
    piVar8[-1] = 0x83625e3;
    iVar4 = CDungeon::getDungeonKind((CDungeon *)*piVar8);
    if (iVar4 == 1) {
      local_2c = 1;
      while( true ) {
        if ((*(int *)(local_30 + 0x680) < local_2c) || (local_31 == '\x01')) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_08362657;
        iVar4 = local_30 + 0x674;
        piVar8[1] = local_2c;
        *piVar8 = iVar4;
        piVar8[-1] = 0x836260e;
        piVar5 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                  ((vector<int,std::allocator<int>> *)*piVar8,piVar8[1]);
        iVar4 = *piVar5;
        *piVar8 = (int)param_1;
        piVar8[-1] = 0x836261b;
        iVar6 = CMap::get_index((CMap *)*piVar8);
        if (iVar4 == iVar6) break;
        local_2c = local_2c + 1;
      }
      local_31 = '\x01';
    }
LAB_08362657:
    local_28 = 0;
    while( true ) {
      *piVar8 = local_30 + 0x62c;
      piVar8[-1] = 0x83628a1;
      uVar7 = std::vector<MazeScript,std::allocator<MazeScript>>::size
                        ((vector<MazeScript,std::allocator<MazeScript>> *)*piVar8);
      if ((local_28 < uVar7) && (local_31 != '\x01')) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (!bVar2) goto LAB_083628c5;
      iVar4 = local_30 + 0x62c;
      piVar8[1] = local_28;
      *piVar8 = iVar4;
      piVar8[-1] = 0x836267b;
      local_24 = (int *)std::vector<MazeScript,std::allocator<MazeScript>>::operator[]
                                  ((vector<MazeScript,std::allocator<MazeScript>> *)*piVar8,
                                   piVar8[1]);
      iVar4 = local_24[0xb];
      *piVar8 = (int)param_1;
      piVar8[-1] = 0x836268f;
      iVar6 = CMap::get_index((CMap *)*piVar8);
      if (iVar4 == iVar6) break;
      local_20 = 0;
LAB_08362863:
      if ((local_20 < local_24[1]) && (local_31 != '\x01')) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        local_1c = 0;
        piVar5 = piVar8;
        do {
          if ((local_1c < *local_24) && (local_31 != '\x01')) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
          piVar8 = piVar5;
          if (!bVar2) goto LAB_0836285f;
          piVar5[2] = local_20;
          piVar5[1] = local_1c;
          *piVar5 = (int)local_24;
          piVar5[-1] = 0x83626d2;
          local_18 = (int *)MazeScript::getGridR((MazeScript *)*piVar5,piVar5[1],piVar5[2]);
          if (*local_18 != 0) {
            piVar5[1] = (int)(local_18 + 1);
            *piVar5 = (int)local_94;
            piVar5[-1] = 0x83626fa;
            std::vector<int,std::allocator<int>>::end();
            *piVar5 = (int)param_1;
            piVar5[-1] = 0x8362708;
            local_8c = CMap::get_index((CMap *)*piVar5);
            piVar5[1] = (int)(local_18 + 1);
            *piVar5 = (int)&local_88;
            piVar5[-1] = 0x8362726;
            std::vector<int,std::allocator<int>>::end();
            piVar5[1] = (int)(local_18 + 1);
            *piVar5 = (int)&local_84;
            piVar5[-1] = 0x836273e;
            std::vector<int,std::allocator<int>>::begin();
            piVar5[3] = (int)&local_8c;
            piVar5[2] = local_88;
            piVar5[1] = local_84;
            *piVar5 = (int)local_90;
            piVar5[-1] = 0x836276a;
            std::
            find<__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>,int>
                      ();
            piVar10 = piVar5 + -1;
            *piVar5 = (int)local_94;
            piVar5[-1] = (int)local_90;
            piVar5[-2] = 0x8362785;
            bVar2 = __gnu_cxx::operator!=
                              ((__normal_iterator *)piVar5[-1],(__normal_iterator *)*piVar5);
            if (bVar2) {
LAB_0836281c:
              bVar2 = true;
              piVar8 = piVar10;
            }
            else {
              *piVar5 = (int)(local_18 + 4);
              piVar5[-1] = (int)local_80;
              piVar5[-2] = 0x83627a2;
              std::vector<int,std::allocator<int>>::end();
              piVar5[-1] = (int)param_1;
              piVar5[-2] = 0x83627b0;
              local_78 = CMap::get_index((CMap *)piVar5[-1]);
              *piVar5 = (int)(local_18 + 4);
              piVar5[-1] = (int)&local_74;
              piVar5[-2] = 0x83627c8;
              std::vector<int,std::allocator<int>>::end();
              *piVar5 = (int)(local_18 + 4);
              piVar5[-1] = (int)&local_70;
              piVar5[-2] = 0x83627e0;
              std::vector<int,std::allocator<int>>::begin();
              piVar5[2] = (int)&local_78;
              piVar5[1] = local_74;
              *piVar5 = local_70;
              piVar5[-1] = (int)local_7c;
              piVar5[-2] = 0x8362803;
              std::
              find<__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>,int>
                        ();
              piVar8 = piVar5 + -2;
              piVar10 = piVar5 + -2;
              piVar5[-1] = (int)local_80;
              piVar5[-2] = (int)local_7c;
              piVar5[-3] = 0x8362818;
              bVar2 = __gnu_cxx::operator!=
                                ((__normal_iterator *)piVar5[-2],(__normal_iterator *)piVar5[-1]);
              if (bVar2) goto LAB_0836281c;
              bVar2 = false;
            }
            if (bVar2) goto code_r0x0836282c;
          }
          local_1c = local_1c + 1;
          piVar5 = piVar8;
        } while( true );
      }
      local_28 = local_28 + 1;
    }
    local_31 = '\x01';
LAB_083628c5:
    *piVar8 = (int)local_fc;
    piVar8[-1] = 0x83628d3;
    __gnu_cxx::
    _Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
    ::operator++((_Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
                  *)*piVar8);
  } while( true );
code_r0x0836282c:
  local_31 = '\x01';
LAB_0836285f:
  local_20 = local_20 + 1;
  goto LAB_08362863;
}
```
