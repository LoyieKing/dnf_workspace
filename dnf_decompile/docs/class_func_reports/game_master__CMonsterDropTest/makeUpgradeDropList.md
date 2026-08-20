# makeUpgradeDropList

`_ZN11game_master16CMonsterDropTest19makeUpgradeDropListERSt4listI8map_itemSaIS2_EERSt3mapIiS6_IiiSt4lessIiESaISt4pairIKiiEEES8_SaIS9_ISA_SD_EEE`

`game_master::CMonsterDropTest::makeUpgradeDropList(std::list<map_item, std::allocator<map_item> >&, std::map<int, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >, std::less<int>, std::allocator<std::pair<int const, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > > > > >&)`

| 类 | 地址 |
|---|---|
| `game_master::CMonsterDropTest` | `0x084ae14c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ae14c  _ZN11game_master16CMonsterDropTest19makeUpgradeDropListERSt4listI8map_itemSaIS2_EERSt3mapIiS6_IiiSt4lessIiESaISt4pairIKiiEEES8_SaIS9_ISA_SD_EEE
#           game_master::CMonsterDropTest::makeUpgradeDropList(std::list<map_item, std::allocator<map_item> >&, std::map<int, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >, std::less<int>, std::allocator<std::pair<int const, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > > > > >&)
# range [0x084ae14c, 0x084ae733]
084ae14c +0x000:  push   %ebp
084ae14d +0x001:  mov    %esp,%ebp
084ae14f +0x003:  push   %esi
084ae150 +0x004:  push   %ebx
084ae151 +0x005:  sub    $0x130,%esp
084ae157 +0x00b:  lea    -0xf8(%ebp),%eax
084ae15d +0x011:  mov    0xc(%ebp),%edx
084ae160 +0x014:  mov    %edx,0x4(%esp)
084ae164 +0x018:  mov    %eax,(%esp)
084ae167 +0x01b:  call   08152b88 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x24bd>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x24bd
084ae16c +0x020:  sub    $0x4,%esp
084ae16f +0x023:  jmp    084ae6f1 <+0x5a5>
084ae174 +0x028:  lea    -0xf8(%ebp),%eax
084ae17a +0x02e:  mov    %eax,(%esp)
084ae17d +0x031:  call   084b48aa <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x95d>  ; global constructors keyed to game_master::CMacro::Reset()+0x95d
084ae182 +0x036:  mov    0x12(%eax),%eax
084ae185 +0x039:  test   %eax,%eax
084ae187 +0x03b:  sete   %al
084ae18a +0x03e:  test   %al,%al
084ae18c +0x040:  jne    084ae6df <+0x593>
084ae192 +0x046:  lea    -0xf8(%ebp),%eax
084ae198 +0x04c:  mov    %eax,(%esp)
084ae19b +0x04f:  call   084b48aa <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x95d>  ; global constructors keyed to game_master::CMacro::Reset()+0x95d
084ae1a0 +0x054:  mov    0x12(%eax),%eax
084ae1a3 +0x057:  mov    %eax,%ebx
084ae1a5 +0x059:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084ae1aa +0x05e:  mov    %ebx,0x4(%esp)
084ae1ae +0x062:  mov    %eax,(%esp)
084ae1b1 +0x065:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084ae1b6 +0x06a:  mov    %eax,-0x14(%ebp)
084ae1b9 +0x06d:  mov    -0x14(%ebp),%eax
084ae1bc +0x070:  mov    %eax,(%esp)
084ae1bf +0x073:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
084ae1c4 +0x078:  test   %al,%al
084ae1c6 +0x07a:  jne    084ae6e2 <+0x596>
084ae1cc +0x080:  lea    -0xf8(%ebp),%eax
084ae1d2 +0x086:  mov    %eax,(%esp)
084ae1d5 +0x089:  call   084b48aa <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x95d>  ; global constructors keyed to game_master::CMacro::Reset()+0x95d
084ae1da +0x08e:  mov    0x17(%eax),%eax
084ae1dd +0x091:  mov    %eax,-0x10(%ebp)
084ae1e0 +0x094:  movl   $0x0,-0xc(%ebp)
084ae1e7 +0x09b:  mov    -0x10(%ebp),%eax
084ae1ea +0x09e:  cmp    $0x5df0,%eax
084ae1ef +0x0a3:  je     084ae233 <+0xe7>
084ae1f1 +0x0a5:  cmp    $0x5df0,%eax
084ae1f6 +0x0aa:  jg     084ae208 <+0xbc>
084ae1f8 +0x0ac:  cmp    $0xfa6,%eax
084ae1fd +0x0b1:  je     084ae221 <+0xd5>
084ae1ff +0x0b3:  cmp    $0x5aa7,%eax
084ae204 +0x0b8:  je     084ae218 <+0xcc>
084ae206 +0x0ba:  jmp    084ae243 <+0xf7>
084ae208 +0x0bc:  cmp    $0x6a23,%eax
084ae20d +0x0c1:  je     084ae22a <+0xde>
084ae20f +0x0c3:  cmp    $0x7270,%eax
084ae214 +0x0c8:  je     084ae23c <+0xf0>
084ae216 +0x0ca:  jmp    084ae243 <+0xf7>
084ae218 +0x0cc:  movl   $0x1,-0xc(%ebp)
084ae21f +0x0d3:  jmp    084ae243 <+0xf7>
084ae221 +0x0d5:  movl   $0x2,-0xc(%ebp)
084ae228 +0x0dc:  jmp    084ae243 <+0xf7>
084ae22a +0x0de:  movl   $0x3,-0xc(%ebp)
084ae231 +0x0e5:  jmp    084ae243 <+0xf7>
084ae233 +0x0e7:  movl   $0x4,-0xc(%ebp)
084ae23a +0x0ee:  jmp    084ae243 <+0xf7>
084ae23c +0x0f0:  movl   $0x5,-0xc(%ebp)
084ae243 +0x0f7:  mov    -0x14(%ebp),%eax
084ae246 +0x0fa:  mov    %eax,(%esp)
084ae249 +0x0fd:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
084ae24e +0x102:  mov    %eax,-0xf0(%ebp)
084ae254 +0x108:  lea    -0xfc(%ebp),%eax
084ae25a +0x10e:  lea    -0xf0(%ebp),%edx
084ae260 +0x114:  mov    %edx,0x8(%esp)
084ae264 +0x118:  mov    0x10(%ebp),%edx
084ae267 +0x11b:  mov    %edx,0x4(%esp)
084ae26b +0x11f:  mov    %eax,(%esp)
084ae26e +0x122:  call   084b48b8 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x96b>  ; global constructors keyed to game_master::CMacro::Reset()+0x96b
084ae273 +0x127:  sub    $0x4,%esp
084ae276 +0x12a:  lea    -0xec(%ebp),%eax
084ae27c +0x130:  mov    0x10(%ebp),%edx
084ae27f +0x133:  mov    %edx,0x4(%esp)
084ae283 +0x137:  mov    %eax,(%esp)
084ae286 +0x13a:  call   08393224 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22cc4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22cc4
084ae28b +0x13f:  sub    $0x4,%esp
084ae28e +0x142:  lea    -0xec(%ebp),%eax
084ae294 +0x148:  mov    %eax,0x4(%esp)
084ae298 +0x14c:  lea    -0xfc(%ebp),%eax
084ae29e +0x152:  mov    %eax,(%esp)
084ae2a1 +0x155:  call   0839324a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22cea>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22cea
084ae2a6 +0x15a:  test   %al,%al
084ae2a8 +0x15c:  je     084ae526 <+0x3da>
084ae2ae +0x162:  lea    -0xf8(%ebp),%eax
084ae2b4 +0x168:  mov    %eax,(%esp)
084ae2b7 +0x16b:  call   084b48aa <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x95d>  ; global constructors keyed to game_master::CMacro::Reset()+0x95d
084ae2bc +0x170:  add    $0x10,%eax
084ae2bf +0x173:  mov    %eax,(%esp)
084ae2c2 +0x176:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
084ae2c7 +0x17b:  movzbl %al,%eax
084ae2ca +0x17e:  mov    %eax,-0xe8(%ebp)
084ae2d0 +0x184:  lea    -0xfc(%ebp),%eax
084ae2d6 +0x18a:  mov    %eax,(%esp)
084ae2d9 +0x18d:  call   0839327c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22d1c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22d1c
084ae2de +0x192:  lea    0x4(%eax),%ecx
084ae2e1 +0x195:  lea    -0x100(%ebp),%eax
084ae2e7 +0x19b:  lea    -0xe8(%ebp),%edx
084ae2ed +0x1a1:  mov    %edx,0x8(%esp)
084ae2f1 +0x1a5:  mov    %ecx,0x4(%esp)
084ae2f5 +0x1a9:  mov    %eax,(%esp)
084ae2f8 +0x1ac:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
084ae2fd +0x1b1:  sub    $0x4,%esp
084ae300 +0x1b4:  lea    -0xfc(%ebp),%eax
084ae306 +0x1ba:  mov    %eax,(%esp)
084ae309 +0x1bd:  call   0839327c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22d1c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22d1c
084ae30e +0x1c2:  lea    0x4(%eax),%edx
084ae311 +0x1c5:  lea    -0xe4(%ebp),%eax
084ae317 +0x1cb:  mov    %edx,0x4(%esp)
084ae31b +0x1cf:  mov    %eax,(%esp)
084ae31e +0x1d2:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
084ae323 +0x1d7:  sub    $0x4,%esp
084ae326 +0x1da:  lea    -0xe4(%ebp),%eax
084ae32c +0x1e0:  mov    %eax,0x4(%esp)
084ae330 +0x1e4:  lea    -0x100(%ebp),%eax
084ae336 +0x1ea:  mov    %eax,(%esp)
084ae339 +0x1ed:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
084ae33e +0x1f2:  test   %al,%al
084ae340 +0x1f4:  je     084ae35e <+0x212>
084ae342 +0x1f6:  lea    -0x100(%ebp),%eax
084ae348 +0x1fc:  mov    %eax,(%esp)
084ae34b +0x1ff:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
084ae350 +0x204:  mov    0x4(%eax),%edx
084ae353 +0x207:  add    $0x1,%edx
084ae356 +0x20a:  mov    %edx,0x4(%eax)
084ae359 +0x20d:  jmp    084ae3f4 <+0x2a8>
084ae35e +0x212:  movl   $0x1,-0xc8(%ebp)
084ae368 +0x21c:  lea    -0xf8(%ebp),%eax
084ae36e +0x222:  mov    %eax,(%esp)
084ae371 +0x225:  call   084b48aa <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x95d>  ; global constructors keyed to game_master::CMacro::Reset()+0x95d
084ae376 +0x22a:  add    $0x10,%eax
084ae379 +0x22d:  mov    %eax,(%esp)
084ae37c +0x230:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
084ae381 +0x235:  mov    %al,-0xc1(%ebp)
084ae387 +0x23b:  lea    -0xd0(%ebp),%eax
084ae38d +0x241:  lea    -0xc8(%ebp),%edx
084ae393 +0x247:  mov    %edx,0x8(%esp)
084ae397 +0x24b:  lea    -0xc1(%ebp),%edx
084ae39d +0x251:  mov    %edx,0x4(%esp)
084ae3a1 +0x255:  mov    %eax,(%esp)
084ae3a4 +0x258:  call   084b48e4 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x997>  ; global constructors keyed to game_master::CMacro::Reset()+0x997
084ae3a9 +0x25d:  sub    $0x4,%esp
084ae3ac +0x260:  lea    -0xd0(%ebp),%eax
084ae3b2 +0x266:  mov    %eax,0x4(%esp)
084ae3b6 +0x26a:  lea    -0xd8(%ebp),%eax
084ae3bc +0x270:  mov    %eax,(%esp)
084ae3bf +0x273:  call   084b4930 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x9e3>  ; global constructors keyed to game_master::CMacro::Reset()+0x9e3
084ae3c4 +0x278:  lea    -0xfc(%ebp),%eax
084ae3ca +0x27e:  mov    %eax,(%esp)
084ae3cd +0x281:  call   0839327c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22d1c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22d1c
084ae3d2 +0x286:  lea    0x4(%eax),%ecx
084ae3d5 +0x289:  lea    -0xe0(%ebp),%eax
084ae3db +0x28f:  lea    -0xd8(%ebp),%edx
084ae3e1 +0x295:  mov    %edx,0x8(%esp)
084ae3e5 +0x299:  mov    %ecx,0x4(%esp)
084ae3e9 +0x29d:  mov    %eax,(%esp)
084ae3ec +0x2a0:  call   080c6d50 <_GLOBAL__I_g_ServerString_+0x2bb>  ; global constructors keyed to g_ServerString_+0x2bb
084ae3f1 +0x2a5:  sub    $0x4,%esp
084ae3f4 +0x2a8:  mov    -0xc(%ebp),%eax
084ae3f7 +0x2ab:  add    $0x3e8,%eax
084ae3fc +0x2b0:  mov    %eax,-0xc0(%ebp)
084ae402 +0x2b6:  lea    -0xfc(%ebp),%eax
084ae408 +0x2bc:  mov    %eax,(%esp)
084ae40b +0x2bf:  call   0839327c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22d1c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22d1c
084ae410 +0x2c4:  lea    0x4(%eax),%ecx
084ae413 +0x2c7:  lea    -0x11c(%ebp),%eax
084ae419 +0x2cd:  lea    -0xc0(%ebp),%edx
084ae41f +0x2d3:  mov    %edx,0x8(%esp)
084ae423 +0x2d7:  mov    %ecx,0x4(%esp)
084ae427 +0x2db:  mov    %eax,(%esp)
084ae42a +0x2de:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
084ae42f +0x2e3:  sub    $0x4,%esp
084ae432 +0x2e6:  mov    -0x11c(%ebp),%eax
084ae438 +0x2ec:  mov    %eax,-0x100(%ebp)
084ae43e +0x2f2:  lea    -0xfc(%ebp),%eax
084ae444 +0x2f8:  mov    %eax,(%esp)
084ae447 +0x2fb:  call   0839327c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22d1c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22d1c
084ae44c +0x300:  lea    0x4(%eax),%edx
084ae44f +0x303:  lea    -0xbc(%ebp),%eax
084ae455 +0x309:  mov    %edx,0x4(%esp)
084ae459 +0x30d:  mov    %eax,(%esp)
084ae45c +0x310:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
084ae461 +0x315:  sub    $0x4,%esp
084ae464 +0x318:  lea    -0xbc(%ebp),%eax
084ae46a +0x31e:  mov    %eax,0x4(%esp)
084ae46e +0x322:  lea    -0x100(%ebp),%eax
084ae474 +0x328:  mov    %eax,(%esp)
084ae477 +0x32b:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
084ae47c +0x330:  test   %al,%al
084ae47e +0x332:  je     084ae49c <+0x350>
084ae480 +0x334:  lea    -0x100(%ebp),%eax
084ae486 +0x33a:  mov    %eax,(%esp)
084ae489 +0x33d:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
084ae48e +0x342:  mov    0x4(%eax),%edx
084ae491 +0x345:  add    $0x1,%edx
084ae494 +0x348:  mov    %edx,0x4(%eax)
084ae497 +0x34b:  jmp    084ae6e3 <+0x597>
084ae49c +0x350:  movl   $0x1,-0xa0(%ebp)
084ae4a6 +0x35a:  mov    -0xc(%ebp),%eax
084ae4a9 +0x35d:  add    $0x3e8,%eax
084ae4ae +0x362:  mov    %eax,-0x9c(%ebp)
084ae4b4 +0x368:  lea    -0xa8(%ebp),%eax
084ae4ba +0x36e:  lea    -0xa0(%ebp),%edx
084ae4c0 +0x374:  mov    %edx,0x8(%esp)
084ae4c4 +0x378:  lea    -0x9c(%ebp),%edx
084ae4ca +0x37e:  mov    %edx,0x4(%esp)
084ae4ce +0x382:  mov    %eax,(%esp)
084ae4d1 +0x385:  call   081b8d41 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x548>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x548
084ae4d6 +0x38a:  sub    $0x4,%esp
084ae4d9 +0x38d:  lea    -0xa8(%ebp),%eax
084ae4df +0x393:  mov    %eax,0x4(%esp)
084ae4e3 +0x397:  lea    -0xb0(%ebp),%eax
084ae4e9 +0x39d:  mov    %eax,(%esp)
084ae4ec +0x3a0:  call   080c6d20 <_GLOBAL__I_g_ServerString_+0x28b>  ; global constructors keyed to g_ServerString_+0x28b
084ae4f1 +0x3a5:  lea    -0xfc(%ebp),%eax
084ae4f7 +0x3ab:  mov    %eax,(%esp)
084ae4fa +0x3ae:  call   0839327c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22d1c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22d1c
084ae4ff +0x3b3:  lea    0x4(%eax),%ecx
084ae502 +0x3b6:  lea    -0xb8(%ebp),%eax
084ae508 +0x3bc:  lea    -0xb0(%ebp),%edx
084ae50e +0x3c2:  mov    %edx,0x8(%esp)
084ae512 +0x3c6:  mov    %ecx,0x4(%esp)
084ae516 +0x3ca:  mov    %eax,(%esp)
084ae519 +0x3cd:  call   080c6d50 <_GLOBAL__I_g_ServerString_+0x2bb>  ; global constructors keyed to g_ServerString_+0x2bb
084ae51e +0x3d2:  sub    $0x4,%esp
084ae521 +0x3d5:  jmp    084ae6e3 <+0x597>
084ae526 +0x3da:  lea    -0x118(%ebp),%eax
084ae52c +0x3e0:  mov    %eax,(%esp)
084ae52f +0x3e3:  call   080c6c64 <_GLOBAL__I_g_ServerString_+0x1cf>  ; global constructors keyed to g_ServerString_+0x1cf
084ae534 +0x3e8:  movl   $0x1,-0x80(%ebp)
084ae53b +0x3ef:  lea    -0xf8(%ebp),%eax
084ae541 +0x3f5:  mov    %eax,(%esp)
084ae544 +0x3f8:  call   084b48aa <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x95d>  ; global constructors keyed to game_master::CMacro::Reset()+0x95d
084ae549 +0x3fd:  add    $0x10,%eax
084ae54c +0x400:  mov    %eax,(%esp)
084ae54f +0x403:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
084ae554 +0x408:  mov    %al,-0x79(%ebp)
084ae557 +0x40b:  lea    -0x88(%ebp),%eax
084ae55d +0x411:  lea    -0x80(%ebp),%edx
084ae560 +0x414:  mov    %edx,0x8(%esp)
084ae564 +0x418:  lea    -0x79(%ebp),%edx
084ae567 +0x41b:  mov    %edx,0x4(%esp)
084ae56b +0x41f:  mov    %eax,(%esp)
084ae56e +0x422:  call   084b48e4 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x997>  ; global constructors keyed to game_master::CMacro::Reset()+0x997
084ae573 +0x427:  sub    $0x4,%esp
084ae576 +0x42a:  lea    -0x88(%ebp),%eax
084ae57c +0x430:  mov    %eax,0x4(%esp)
084ae580 +0x434:  lea    -0x90(%ebp),%eax
084ae586 +0x43a:  mov    %eax,(%esp)
084ae589 +0x43d:  call   084b4930 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x9e3>  ; global constructors keyed to game_master::CMacro::Reset()+0x9e3
084ae58e +0x442:  lea    -0x98(%ebp),%eax
084ae594 +0x448:  lea    -0x90(%ebp),%edx
084ae59a +0x44e:  mov    %edx,0x8(%esp)
084ae59e +0x452:  lea    -0x118(%ebp),%edx
084ae5a4 +0x458:  mov    %edx,0x4(%esp)
084ae5a8 +0x45c:  mov    %eax,(%esp)
084ae5ab +0x45f:  call   080c6d50 <_GLOBAL__I_g_ServerString_+0x2bb>  ; global constructors keyed to g_ServerString_+0x2bb
084ae5b0 +0x464:  sub    $0x4,%esp
084ae5b3 +0x467:  movl   $0x1,-0x60(%ebp)
084ae5ba +0x46e:  mov    -0xc(%ebp),%eax
084ae5bd +0x471:  add    $0x3e8,%eax
084ae5c2 +0x476:  mov    %eax,-0x5c(%ebp)
084ae5c5 +0x479:  lea    -0x68(%ebp),%eax
084ae5c8 +0x47c:  lea    -0x60(%ebp),%edx
084ae5cb +0x47f:  mov    %edx,0x8(%esp)
084ae5cf +0x483:  lea    -0x5c(%ebp),%edx
084ae5d2 +0x486:  mov    %edx,0x4(%esp)
084ae5d6 +0x48a:  mov    %eax,(%esp)
084ae5d9 +0x48d:  call   081b8d41 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x548>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x548
084ae5de +0x492:  sub    $0x4,%esp
084ae5e1 +0x495:  lea    -0x68(%ebp),%eax
084ae5e4 +0x498:  mov    %eax,0x4(%esp)
084ae5e8 +0x49c:  lea    -0x70(%ebp),%eax
084ae5eb +0x49f:  mov    %eax,(%esp)
084ae5ee +0x4a2:  call   080c6d20 <_GLOBAL__I_g_ServerString_+0x28b>  ; global constructors keyed to g_ServerString_+0x28b
084ae5f3 +0x4a7:  lea    -0x78(%ebp),%eax
084ae5f6 +0x4aa:  lea    -0x70(%ebp),%edx
084ae5f9 +0x4ad:  mov    %edx,0x8(%esp)
084ae5fd +0x4b1:  lea    -0x118(%ebp),%edx
084ae603 +0x4b7:  mov    %edx,0x4(%esp)
084ae607 +0x4bb:  mov    %eax,(%esp)
084ae60a +0x4be:  call   080c6d50 <_GLOBAL__I_g_ServerString_+0x2bb>  ; global constructors keyed to g_ServerString_+0x2bb
084ae60f +0x4c3:  sub    $0x4,%esp
084ae612 +0x4c6:  mov    -0x14(%ebp),%eax
084ae615 +0x4c9:  mov    %eax,(%esp)
084ae618 +0x4cc:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
084ae61d +0x4d1:  mov    %eax,-0x18(%ebp)
084ae620 +0x4d4:  lea    -0x34(%ebp),%eax
084ae623 +0x4d7:  lea    -0x118(%ebp),%edx
084ae629 +0x4dd:  mov    %edx,0x8(%esp)
084ae62d +0x4e1:  lea    -0x18(%ebp),%edx
084ae630 +0x4e4:  mov    %edx,0x4(%esp)
084ae634 +0x4e8:  mov    %eax,(%esp)
084ae637 +0x4eb:  call   084b4964 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0xa17>  ; global constructors keyed to game_master::CMacro::Reset()+0xa17
084ae63c +0x4f0:  sub    $0x4,%esp
084ae63f +0x4f3:  lea    -0x34(%ebp),%eax
084ae642 +0x4f6:  mov    %eax,0x4(%esp)
084ae646 +0x4fa:  lea    -0x50(%ebp),%eax
084ae649 +0x4fd:  mov    %eax,(%esp)
084ae64c +0x500:  call   084b49b0 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0xa63>  ; global constructors keyed to game_master::CMacro::Reset()+0xa63
084ae651 +0x505:  lea    -0x58(%ebp),%eax
084ae654 +0x508:  lea    -0x50(%ebp),%edx
084ae657 +0x50b:  mov    %edx,0x8(%esp)
084ae65b +0x50f:  mov    0x10(%ebp),%edx
084ae65e +0x512:  mov    %edx,0x4(%esp)
084ae662 +0x516:  mov    %eax,(%esp)
084ae665 +0x519:  call   084b49ea <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0xa9d>  ; global constructors keyed to game_master::CMacro::Reset()+0xa9d
084ae66a +0x51e:  sub    $0x4,%esp
084ae66d +0x521:  lea    -0x50(%ebp),%eax
084ae670 +0x524:  mov    %eax,(%esp)
084ae673 +0x527:  call   083ce248 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x68214>  ; global constructors keyed to CServerEvent::m_nExpRate+0x68214
084ae678 +0x52c:  jmp    084ae6a4 <+0x558>
084ae67a +0x52e:  mov    %edx,%ebx
084ae67c +0x530:  mov    %eax,%esi
084ae67e +0x532:  lea    -0x50(%ebp),%eax
084ae681 +0x535:  mov    %eax,(%esp)
084ae684 +0x538:  call   083ce248 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x68214>  ; global constructors keyed to CServerEvent::m_nExpRate+0x68214
084ae689 +0x53d:  mov    %esi,%eax
084ae68b +0x53f:  mov    %ebx,%edx
084ae68d +0x541:  jmp    084ae68f <+0x543>
084ae68f +0x543:  mov    %edx,%ebx
084ae691 +0x545:  mov    %eax,%esi
084ae693 +0x547:  lea    -0x34(%ebp),%eax
084ae696 +0x54a:  mov    %eax,(%esp)
084ae699 +0x54d:  call   084b4450 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x503>  ; global constructors keyed to game_master::CMacro::Reset()+0x503
084ae69e +0x552:  mov    %esi,%eax
084ae6a0 +0x554:  mov    %ebx,%edx
084ae6a2 +0x556:  jmp    084ae6b1 <+0x565>
084ae6a4 +0x558:  lea    -0x34(%ebp),%eax
084ae6a7 +0x55b:  mov    %eax,(%esp)
084ae6aa +0x55e:  call   084b4450 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x503>  ; global constructors keyed to game_master::CMacro::Reset()+0x503
084ae6af +0x563:  jmp    084ae6cf <+0x583>
084ae6b1 +0x565:  mov    %edx,%ebx
084ae6b3 +0x567:  mov    %eax,%esi
084ae6b5 +0x569:  lea    -0x118(%ebp),%eax
084ae6bb +0x56f:  mov    %eax,(%esp)
084ae6be +0x572:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
084ae6c3 +0x577:  mov    %esi,%eax
084ae6c5 +0x579:  mov    %ebx,%edx
084ae6c7 +0x57b:  mov    %eax,(%esp)
084ae6ca +0x57e:  call   08ae3750 <_Unwind_Resume>
084ae6cf +0x583:  lea    -0x118(%ebp),%eax
084ae6d5 +0x589:  mov    %eax,(%esp)
084ae6d8 +0x58c:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
084ae6dd +0x591:  jmp    084ae6e3 <+0x597>
084ae6df +0x593:  nop
084ae6e0 +0x594:  jmp    084ae6e3 <+0x597>
084ae6e2 +0x596:  nop
084ae6e3 +0x597:  lea    -0xf8(%ebp),%eax
084ae6e9 +0x59d:  mov    %eax,(%esp)
084ae6ec +0x5a0:  call   084b4896 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x949>  ; global constructors keyed to game_master::CMacro::Reset()+0x949
084ae6f1 +0x5a5:  lea    -0xf4(%ebp),%eax
084ae6f7 +0x5ab:  mov    0xc(%ebp),%edx
084ae6fa +0x5ae:  mov    %edx,0x4(%esp)
084ae6fe +0x5b2:  mov    %eax,(%esp)
084ae701 +0x5b5:  call   08152bbe <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x24f3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x24f3
084ae706 +0x5ba:  sub    $0x4,%esp
084ae709 +0x5bd:  lea    -0xf4(%ebp),%eax
084ae70f +0x5c3:  mov    %eax,0x4(%esp)
084ae713 +0x5c7:  lea    -0xf8(%ebp),%eax
084ae719 +0x5cd:  mov    %eax,(%esp)
084ae71c +0x5d0:  call   08311e70 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3a55>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3a55
084ae721 +0x5d5:  test   %al,%al
084ae723 +0x5d7:  jne    084ae174 <+0x28>
084ae729 +0x5dd:  lea    -0x8(%ebp),%esp
084ae72c +0x5e0:  add    $0x0,%esp
084ae72f +0x5e3:  pop    %ebx
084ae730 +0x5e4:  pop    %esi
084ae731 +0x5e5:  pop    %ebp
084ae732 +0x5e6:  ret
084ae733 +0x5e7:  nop
```

## 反编译 C

```c
// game_master::CMonsterDropTest::makeUpgradeDropList @ 0x84ae14c

/* game_master::CMonsterDropTest::makeUpgradeDropList(std::list<map_item, std::allocator<map_item>
   >&, std::map<int, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> >
   >, std::less<int>, std::allocator<std::pair<int const, std::map<int, int, std::less<int>,
   std::allocator<std::pair<int const, int> > > > > >&) */

void game_master::CMonsterDropTest::makeUpgradeDropList(list *param_1,map *param_2)

{
  char cVar1;
  int iVar2;
  CDataManager *this;
  int local_120;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_11c [24];
  int local_104;
  _Rb_tree_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
  local_100 [4];
  _List_iterator<map_item> local_fc [4];
  _List_iterator local_f8 [4];
  undefined4 local_f4;
  map<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>>
  local_f0 [4];
  uint local_ec;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_e8 [4];
  pair local_e4 [8];
  pair<int_const,int> local_dc [8];
  uchar local_d4 [8];
  undefined4 local_cc;
  undefined1 local_c5;
  int local_c4;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_c0 [4];
  pair local_bc [8];
  pair<int_const,int> local_b4 [8];
  int local_ac [2];
  undefined4 local_a4;
  int local_a0;
  pair local_9c [8];
  pair<int_const,int> local_94 [8];
  uchar local_8c [8];
  undefined4 local_84;
  undefined1 local_7d;
  pair local_7c [8];
  pair<int_const,int> local_74 [8];
  int local_6c [2];
  undefined4 local_64;
  int local_60;
  pair local_5c [8];
  pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>
  local_54 [28];
  pair<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>> local_38 [28];
  undefined4 local_1c;
  CItem *local_18;
  int local_14;
  int local_10;
  
  std::list<map_item,std::allocator<map_item>>::begin();
  while( true ) {
    std::list<map_item,std::allocator<map_item>>::end();
    cVar1 = std::_List_iterator<map_item>::operator!=(local_fc,local_f8);
    if (cVar1 == '\0') break;
    iVar2 = std::_List_iterator<map_item>::operator->(local_fc);
    if (*(int *)(iVar2 + 0x12) != 0) {
      iVar2 = std::_List_iterator<map_item>::operator->(local_fc);
      iVar2 = *(int *)(iVar2 + 0x12);
      this = (CDataManager *)G_CDataManager();
      local_18 = (CItem *)CDataManager::find_item(this,iVar2);
      cVar1 = CItem::is_stackable(local_18);
      if (cVar1 == '\0') {
        iVar2 = std::_List_iterator<map_item>::operator->(local_fc);
        local_14 = *(int *)(iVar2 + 0x17);
        local_10 = 0;
        if (local_14 == 0x5df0) {
          local_10 = 4;
        }
        else if (local_14 < 0x5df1) {
          if (local_14 == 0xfa6) {
            local_10 = 2;
          }
          else if (local_14 == 0x5aa7) {
            local_10 = 1;
          }
        }
        else if (local_14 == 0x6a23) {
          local_10 = 3;
        }
        else if (local_14 == 0x7270) {
          local_10 = 5;
        }
        local_f4 = CItem::get_grade(local_18);
        std::
        map<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>>
        ::find((int *)local_100);
        std::
        map<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>>
        ::end(local_f0);
        cVar1 = std::
                _Rb_tree_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
                ::operator!=(local_100,(_Rb_tree_iterator *)local_f0);
        if (cVar1 == '\0') {
          std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map(local_11c);
          local_84 = 1;
          iVar2 = std::_List_iterator<map_item>::operator->(local_fc);
          local_7d = Inven_Item::GetUpgrade((Inven_Item *)(iVar2 + 0x10));
                    /* try { // try from 084ae56e to 084ae63b has its CatchHandler @ 084ae6b1 */
          std::make_pair<unsigned_char,int>(local_8c,(int *)&local_7d);
          std::pair<int_const,int>::pair<unsigned_char,int>(local_94,local_8c);
          std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert
                    (local_9c);
          local_64 = 1;
          local_60 = local_10 + 1000;
          std::make_pair<int,int>(local_6c,&local_60);
          std::pair<int_const,int>::pair<int,int>(local_74,(pair *)local_6c);
          std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert
                    (local_7c);
          local_1c = CItem::get_grade(local_18);
          std::
          make_pair<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>&>
                    ((int *)local_38,(map *)&local_1c);
                    /* try { // try from 084ae64c to 084ae650 has its CatchHandler @ 084ae68f */
          std::
          pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>
          ::pair<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>
                    (local_54,local_38);
                    /* try { // try from 084ae665 to 084ae669 has its CatchHandler @ 084ae67a */
          std::
          map<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>>
          ::insert(local_5c);
                    /* try { // try from 084ae673 to 084ae677 has its CatchHandler @ 084ae68f */
          std::
          pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>
          ::~pair(local_54);
                    /* try { // try from 084ae6aa to 084ae6ae has its CatchHandler @ 084ae6b1 */
          std::pair<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>::
          ~pair(local_38);
          std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map(local_11c)
          ;
        }
        else {
          iVar2 = std::_List_iterator<map_item>::operator->(local_fc);
          local_ec = Inven_Item::GetUpgrade((Inven_Item *)(iVar2 + 0x10));
          local_ec = local_ec & 0xff;
          std::
          _Rb_tree_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
          ::operator->(local_100);
          std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                    (&local_104);
          std::
          _Rb_tree_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
          ::operator->(local_100);
          std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_e8);
          cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                            ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_104,
                             (_Rb_tree_iterator *)local_e8);
          if (cVar1 == '\0') {
            local_cc = 1;
            iVar2 = std::_List_iterator<map_item>::operator->(local_fc);
            local_c5 = Inven_Item::GetUpgrade((Inven_Item *)(iVar2 + 0x10));
            std::make_pair<unsigned_char,int>(local_d4,(int *)&local_c5);
            std::pair<int_const,int>::pair<unsigned_char,int>(local_dc,local_d4);
            std::
            _Rb_tree_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
            ::operator->(local_100);
            std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert
                      (local_e4);
          }
          else {
            iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                              ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_104);
            *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
          }
          local_c4 = local_10 + 1000;
          std::
          _Rb_tree_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
          ::operator->(local_100);
          std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                    (&local_120);
          local_104 = local_120;
          std::
          _Rb_tree_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
          ::operator->(local_100);
          std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_c0);
          cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                            ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_104,
                             (_Rb_tree_iterator *)local_c0);
          if (cVar1 == '\0') {
            local_a4 = 1;
            local_a0 = local_10 + 1000;
            std::make_pair<int,int>(local_ac,&local_a0);
            std::pair<int_const,int>::pair<int,int>(local_b4,(pair *)local_ac);
            std::
            _Rb_tree_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
            ::operator->(local_100);
            std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert
                      (local_bc);
          }
          else {
            iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                              ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_104);
            *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
          }
        }
      }
    }
    std::_List_iterator<map_item>::operator++(local_fc);
  }
  return;
}
```
