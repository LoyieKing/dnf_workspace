# processRouting

`_ZN26CSpecialItemRoutingManager14processRoutingEP6CParty`

`CSpecialItemRoutingManager::processRouting(CParty*)`

| 类 | 地址 |
|---|---|
| `CSpecialItemRoutingManager` | `0x0860ac6a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860ac6a  _ZN26CSpecialItemRoutingManager14processRoutingEP6CParty
#           CSpecialItemRoutingManager::processRouting(CParty*)
# range [0x0860ac6a, 0x0860b2c1]
0860ac6a +0x000:  push   %ebp
0860ac6b +0x001:  mov    %esp,%ebp
0860ac6d +0x003:  push   %esi
0860ac6e +0x004:  push   %ebx
0860ac6f +0x005:  sub    $0xd0,%esp
0860ac75 +0x00b:  mov    0xc(%ebp),%eax
0860ac78 +0x00e:  mov    %eax,(%esp)
0860ac7b +0x011:  call   0860b602 <_GLOBAL__I__ZN26CSpecialItemRoutingManagerC2Ev+0xe5>  ; global constructors keyed to CSpecialItemRoutingManager::CSpecialItemRoutingManager()+0xe5
0860ac80 +0x016:  mov    %eax,-0x38(%ebp)
0860ac83 +0x019:  mov    -0x38(%ebp),%eax
0860ac86 +0x01c:  mov    0x2(%eax),%eax
0860ac89 +0x01f:  test   %eax,%eax
0860ac8b +0x021:  jne    0860acac <+0x42>
0860ac8d +0x023:  movl   $0x0,0x8(%esp)
0860ac95 +0x02b:  mov    0xc(%ebp),%eax
0860ac98 +0x02e:  mov    %eax,0x4(%esp)
0860ac9c +0x032:  mov    0x8(%ebp),%eax
0860ac9f +0x035:  mov    %eax,(%esp)
0860aca2 +0x038:  call   0860b332 <_ZN26CSpecialItemRoutingManager14ProcessFailEtcEP6CPartyi>  ; CSpecialItemRoutingManager::ProcessFailEtc(CParty*, int)
0860aca7 +0x03d:  jmp    0860b2b7 <+0x64d>
0860acac +0x042:  mov    0xc(%ebp),%eax
0860acaf +0x045:  mov    %eax,(%esp)
0860acb2 +0x048:  call   0860b5ee <_GLOBAL__I__ZN26CSpecialItemRoutingManagerC2Ev+0xd1>  ; global constructors keyed to CSpecialItemRoutingManager::CSpecialItemRoutingManager()+0xd1
0860acb7 +0x04d:  mov    %eax,-0x34(%ebp)
0860acba +0x050:  mov    -0x34(%ebp),%ebx
0860acbd +0x053:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0860acc2 +0x058:  mov    %ebx,0x4(%esp)
0860acc6 +0x05c:  mov    %eax,(%esp)
0860acc9 +0x05f:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0860acce +0x064:  mov    %eax,-0x30(%ebp)
0860acd1 +0x067:  cmpl   $0x0,-0x30(%ebp)
0860acd5 +0x06b:  jne    0860acf6 <+0x8c>
0860acd7 +0x06d:  movl   $0x0,0x8(%esp)
0860acdf +0x075:  mov    0xc(%ebp),%eax
0860ace2 +0x078:  mov    %eax,0x4(%esp)
0860ace6 +0x07c:  mov    0x8(%ebp),%eax
0860ace9 +0x07f:  mov    %eax,(%esp)
0860acec +0x082:  call   0860b332 <_ZN26CSpecialItemRoutingManager14ProcessFailEtcEP6CPartyi>  ; CSpecialItemRoutingManager::ProcessFailEtc(CParty*, int)
0860acf1 +0x087:  jmp    0860b2b7 <+0x64d>
0860acf6 +0x08c:  mov    -0x30(%ebp),%eax
0860acf9 +0x08f:  mov    %eax,-0x2c(%ebp)
0860acfc +0x092:  lea    -0x4c(%ebp),%eax
0860acff +0x095:  mov    %eax,(%esp)
0860ad02 +0x098:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
0860ad07 +0x09d:  lea    -0x4c(%ebp),%eax
0860ad0a +0x0a0:  mov    %eax,(%esp)
0860ad0d +0x0a3:  call   0817a342 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x3c0>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x3c0
0860ad12 +0x0a8:  mov    -0x2c(%ebp),%eax
0860ad15 +0x0ab:  mov    %eax,0x8(%esp)
0860ad19 +0x0af:  lea    -0x4c(%ebp),%eax
0860ad1c +0x0b2:  mov    %eax,0x4(%esp)
0860ad20 +0x0b6:  mov    0xc(%ebp),%eax
0860ad23 +0x0b9:  mov    %eax,(%esp)
0860ad26 +0x0bc:  call   085ba294 <_ZN6CParty24GetRoutingDiceMemberListERSt6vectorISt4pairIiiESaIS2_EEP5CItem>  ; CParty::GetRoutingDiceMemberList(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, CItem*)
0860ad2b +0x0c1:  movl   $0x0,-0x28(%ebp)
0860ad32 +0x0c8:  movl   $0x0,-0x24(%ebp)
0860ad39 +0x0cf:  lea    -0x58(%ebp),%eax
0860ad3c +0x0d2:  mov    %eax,(%esp)
0860ad3f +0x0d5:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0860ad44 +0x0da:  movl   $0x11a,0x8(%esp)
0860ad4c +0x0e2:  movl   $0x0,0x4(%esp)
0860ad54 +0x0ea:  lea    -0x58(%ebp),%eax
0860ad57 +0x0ed:  mov    %eax,(%esp)
0860ad5a +0x0f0:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0860ad5f +0x0f5:  lea    -0x4c(%ebp),%eax
0860ad62 +0x0f8:  mov    %eax,(%esp)
0860ad65 +0x0fb:  call   0811119a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6ac>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6ac
0860ad6a +0x100:  xor    $0x1,%eax
0860ad6d +0x103:  test   %al,%al
0860ad6f +0x105:  je     0860ae83 <+0x219>
0860ad75 +0x10b:  lea    -0x4c(%ebp),%eax
0860ad78 +0x10e:  mov    %eax,(%esp)
0860ad7b +0x111:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
0860ad80 +0x116:  cmp    $0x1,%eax
0860ad83 +0x119:  sete   %al
0860ad86 +0x11c:  test   %al,%al
0860ad88 +0x11e:  je     0860adbc <+0x152>
0860ad8a +0x120:  movl   $0x0,0x4(%esp)
0860ad92 +0x128:  lea    -0x4c(%ebp),%eax
0860ad95 +0x12b:  mov    %eax,(%esp)
0860ad98 +0x12e:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
0860ad9d +0x133:  mov    (%eax),%eax
0860ad9f +0x135:  mov    %eax,-0x24(%ebp)
0860ada2 +0x138:  mov    -0x24(%ebp),%eax
0860ada5 +0x13b:  mov    %eax,0x4(%esp)
0860ada9 +0x13f:  mov    0xc(%ebp),%eax
0860adac +0x142:  mov    %eax,(%esp)
0860adaf +0x145:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
0860adb4 +0x14a:  mov    %eax,-0x28(%ebp)
0860adb7 +0x14d:  jmp    0860aec3 <+0x259>
0860adbc +0x152:  movl   $0xffffffff,-0x20(%ebp)
0860adc3 +0x159:  lea    -0x5c(%ebp),%eax
0860adc6 +0x15c:  lea    -0x4c(%ebp),%edx
0860adc9 +0x15f:  mov    %edx,0x4(%esp)
0860adcd +0x163:  mov    %eax,(%esp)
0860add0 +0x166:  call   080dd5b2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xfb>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xfb
0860add5 +0x16b:  sub    $0x4,%esp
0860add8 +0x16e:  jmp    0860ae52 <+0x1e8>
0860adda +0x170:  lea    -0x5c(%ebp),%eax
0860addd +0x173:  mov    %eax,(%esp)
0860ade0 +0x176:  call   080dd5fc <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x145>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x145
0860ade5 +0x17b:  mov    0x4(%eax),%edx
0860ade8 +0x17e:  mov    (%eax),%eax
0860adea +0x180:  mov    %eax,-0x64(%ebp)
0860aded +0x183:  mov    %edx,-0x60(%ebp)
0860adf0 +0x186:  movl   $0x64,(%esp)
0860adf7 +0x18d:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0860adfc +0x192:  mov    %eax,-0x1c(%ebp)
0860adff +0x195:  mov    -0x1c(%ebp),%eax
0860ae02 +0x198:  cmp    -0x20(%ebp),%eax
0860ae05 +0x19b:  jle    0860ae2a <+0x1c0>
0860ae07 +0x19d:  mov    -0x1c(%ebp),%eax
0860ae0a +0x1a0:  mov    %eax,-0x20(%ebp)
0860ae0d +0x1a3:  mov    -0x64(%ebp),%eax
0860ae10 +0x1a6:  mov    %eax,-0x24(%ebp)
0860ae13 +0x1a9:  mov    -0x24(%ebp),%eax
0860ae16 +0x1ac:  mov    %eax,0x4(%esp)
0860ae1a +0x1b0:  mov    0xc(%ebp),%eax
0860ae1d +0x1b3:  mov    %eax,(%esp)
0860ae20 +0x1b6:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
0860ae25 +0x1bb:  mov    %eax,-0x28(%ebp)
0860ae28 +0x1be:  jmp    0860ae32 <+0x1c8>
0860ae2a +0x1c0:  mov    -0x1c(%ebp),%eax
0860ae2d +0x1c3:  cmp    -0x20(%ebp),%eax
0860ae30 +0x1c6:  je     0860ae51 <+0x1e7>
0860ae32 +0x1c8:  lea    -0x3c(%ebp),%eax
0860ae35 +0x1cb:  movl   $0x0,0x8(%esp)
0860ae3d +0x1d3:  lea    -0x5c(%ebp),%edx
0860ae40 +0x1d6:  mov    %edx,0x4(%esp)
0860ae44 +0x1da:  mov    %eax,(%esp)
0860ae47 +0x1dd:  call   08388d9c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1883c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1883c
0860ae4c +0x1e2:  sub    $0x4,%esp
0860ae4f +0x1e5:  jmp    0860ae52 <+0x1e8>
0860ae51 +0x1e7:  nop
0860ae52 +0x1e8:  lea    -0x40(%ebp),%eax
0860ae55 +0x1eb:  lea    -0x4c(%ebp),%edx
0860ae58 +0x1ee:  mov    %edx,0x4(%esp)
0860ae5c +0x1f2:  mov    %eax,(%esp)
0860ae5f +0x1f5:  call   080dd5d6 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x11f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x11f
0860ae64 +0x1fa:  sub    $0x4,%esp
0860ae67 +0x1fd:  lea    -0x40(%ebp),%eax
0860ae6a +0x200:  mov    %eax,0x4(%esp)
0860ae6e +0x204:  lea    -0x5c(%ebp),%eax
0860ae71 +0x207:  mov    %eax,(%esp)
0860ae74 +0x20a:  call   081111de <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6f0>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6f0
0860ae79 +0x20f:  test   %al,%al
0860ae7b +0x211:  jne    0860adda <+0x170>
0860ae81 +0x217:  jmp    0860aec3 <+0x259>
0860ae83 +0x219:  movl   $0x0,0x4(%esp)
0860ae8b +0x221:  lea    -0x58(%ebp),%eax
0860ae8e +0x224:  mov    %eax,(%esp)
0860ae91 +0x227:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0860ae96 +0x22c:  movl   $0x0,0x4(%esp)
0860ae9e +0x234:  lea    -0x58(%ebp),%eax
0860aea1 +0x237:  mov    %eax,(%esp)
0860aea4 +0x23a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0860aea9 +0x23f:  mov    0xc(%ebp),%eax
0860aeac +0x242:  mov    %eax,(%esp)
0860aeaf +0x245:  call   0860b616 <_GLOBAL__I__ZN26CSpecialItemRoutingManagerC2Ev+0xf9>  ; global constructors keyed to CSpecialItemRoutingManager::CSpecialItemRoutingManager()+0xf9
0860aeb4 +0x24a:  mov    %eax,0x4(%esp)
0860aeb8 +0x24e:  lea    -0x58(%ebp),%eax
0860aebb +0x251:  mov    %eax,(%esp)
0860aebe +0x254:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0860aec3 +0x259:  cmpl   $0x0,-0x28(%ebp)
0860aec7 +0x25d:  je     0860b23f <+0x5d5>
0860aecd +0x263:  movl   $0x0,-0x18(%ebp)
0860aed4 +0x26a:  mov    -0x30(%ebp),%eax
0860aed7 +0x26d:  mov    %eax,(%esp)
0860aeda +0x270:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
0860aedf +0x275:  test   %al,%al
0860aee1 +0x277:  je     0860af08 <+0x29e>
0860aee3 +0x279:  mov    -0x30(%ebp),%eax
0860aee6 +0x27c:  mov    (%eax),%eax
0860aee8 +0x27e:  add    $0xc,%eax
0860aeeb +0x281:  mov    (%eax),%edx
0860aeed +0x283:  mov    -0x30(%ebp),%eax
0860aef0 +0x286:  mov    %eax,(%esp)
0860aef3 +0x289:  call   *%edx
0860aef5 +0x28b:  cmp    $0x9,%eax
0860aef8 +0x28e:  sete   %al
0860aefb +0x291:  test   %al,%al
0860aefd +0x293:  je     0860af4d <+0x2e3>
0860aeff +0x295:  movl   $0x7,-0x18(%ebp)
0860af06 +0x29c:  jmp    0860af4d <+0x2e3>
0860af08 +0x29e:  mov    -0x30(%ebp),%eax
0860af0b +0x2a1:  mov    (%eax),%eax
0860af0d +0x2a3:  add    $0x14,%eax
0860af10 +0x2a6:  mov    (%eax),%edx
0860af12 +0x2a8:  mov    -0x30(%ebp),%eax
0860af15 +0x2ab:  mov    %eax,(%esp)
0860af18 +0x2ae:  call   *%edx
0860af1a +0x2b0:  test   %al,%al
0860af1c +0x2b2:  je     0860af27 <+0x2bd>
0860af1e +0x2b4:  movl   $0x7,-0x18(%ebp)
0860af25 +0x2bb:  jmp    0860af4d <+0x2e3>
0860af27 +0x2bd:  mov    -0x30(%ebp),%eax
0860af2a +0x2c0:  mov    (%eax),%eax
0860af2c +0x2c2:  add    $0x10,%eax
0860af2f +0x2c5:  mov    (%eax),%edx
0860af31 +0x2c7:  mov    -0x30(%ebp),%eax
0860af34 +0x2ca:  mov    %eax,(%esp)
0860af37 +0x2cd:  call   *%edx
0860af39 +0x2cf:  test   %al,%al
0860af3b +0x2d1:  je     0860af46 <+0x2dc>
0860af3d +0x2d3:  movl   $0x1,-0x18(%ebp)
0860af44 +0x2da:  jmp    0860af4d <+0x2e3>
0860af46 +0x2dc:  movl   $0x0,-0x18(%ebp)
0860af4d +0x2e3:  movl   $0xffffffff,-0x14(%ebp)
0860af54 +0x2ea:  mov    -0x30(%ebp),%eax
0860af57 +0x2ed:  mov    (%eax),%eax
0860af59 +0x2ef:  add    $0x10,%eax
0860af5c +0x2f2:  mov    (%eax),%edx
0860af5e +0x2f4:  mov    -0x30(%ebp),%eax
0860af61 +0x2f7:  mov    %eax,(%esp)
0860af64 +0x2fa:  call   *%edx
0860af66 +0x2fc:  test   %al,%al
0860af68 +0x2fe:  je     0860afce <+0x364>
0860af6a +0x300:  mov    -0x28(%ebp),%eax
0860af6d +0x303:  mov    %eax,(%esp)
0860af70 +0x306:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0860af75 +0x30b:  lea    -0x7c(%ebp),%edx
0860af78 +0x30e:  mov    %edx,0x8(%esp)
0860af7c +0x312:  mov    %eax,0x4(%esp)
0860af80 +0x316:  movl   $0x5,(%esp)
0860af87 +0x31d:  call   084b7750 <_ZN8WongWork12CGenUniqueNo8genIPGNoENS0_15ENUM_IPGNO_TYPEEjPc>  ; WongWork::CGenUniqueNo::genIPGNo(WongWork::CGenUniqueNo::ENUM_IPGNO_TYPE, unsigned int, char*)
0860af8c +0x322:  mov    -0x38(%ebp),%eax
0860af8f +0x325:  movzwl 0xb(%eax),%eax
0860af93 +0x329:  movsbl %al,%edx
0860af96 +0x32c:  mov    -0x38(%ebp),%eax
0860af99 +0x32f:  mov    0x2(%eax),%eax
0860af9c +0x332:  movl   $0xf,0x14(%esp)
0860afa4 +0x33a:  lea    -0x7c(%ebp),%ecx
0860afa7 +0x33d:  mov    %ecx,0x10(%esp)
0860afab +0x341:  mov    %edx,0xc(%esp)
0860afaf +0x345:  movl   $0x0,0x8(%esp)
0860afb7 +0x34d:  mov    %eax,0x4(%esp)
0860afbb +0x351:  mov    -0x28(%ebp),%eax
0860afbe +0x354:  mov    %eax,(%esp)
0860afc1 +0x357:  call   08681224 <_ZN5CUser13addAvatarItemEmccPKc20eAvatarItemAddReason>  ; CUser::addAvatarItem(unsigned long, char, char, char const*, eAvatarItemAddReason)
0860afc6 +0x35c:  mov    %eax,-0x14(%ebp)
0860afc9 +0x35f:  jmp    0860b071 <+0x407>
0860afce +0x364:  mov    -0x28(%ebp),%eax
0860afd1 +0x367:  mov    %eax,(%esp)
0860afd4 +0x36a:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0860afd9 +0x36f:  mov    %eax,%edx
0860afdb +0x371:  movl   $0x1,0x4c(%esp)
0860afe3 +0x379:  movl   $0x1,0x48(%esp)
0860afeb +0x381:  movl   $0x4,0x44(%esp)
0860aff3 +0x389:  mov    -0x38(%ebp),%eax
0860aff6 +0x38c:  mov    (%eax),%ecx
0860aff8 +0x38e:  mov    %ecx,0x4(%esp)
0860affc +0x392:  mov    0x4(%eax),%ecx
0860afff +0x395:  mov    %ecx,0x8(%esp)
0860b003 +0x399:  mov    0x8(%eax),%ecx
0860b006 +0x39c:  mov    %ecx,0xc(%esp)
0860b00a +0x3a0:  mov    0xc(%eax),%ecx
0860b00d +0x3a3:  mov    %ecx,0x10(%esp)
0860b011 +0x3a7:  mov    0x10(%eax),%ecx
0860b014 +0x3aa:  mov    %ecx,0x14(%esp)
0860b018 +0x3ae:  mov    0x14(%eax),%ecx
0860b01b +0x3b1:  mov    %ecx,0x18(%esp)
0860b01f +0x3b5:  mov    0x18(%eax),%ecx
0860b022 +0x3b8:  mov    %ecx,0x1c(%esp)
0860b026 +0x3bc:  mov    0x1c(%eax),%ecx
0860b029 +0x3bf:  mov    %ecx,0x20(%esp)
0860b02d +0x3c3:  mov    0x20(%eax),%ecx
0860b030 +0x3c6:  mov    %ecx,0x24(%esp)
0860b034 +0x3ca:  mov    0x24(%eax),%ecx
0860b037 +0x3cd:  mov    %ecx,0x28(%esp)
0860b03b +0x3d1:  mov    0x28(%eax),%ecx
0860b03e +0x3d4:  mov    %ecx,0x2c(%esp)
0860b042 +0x3d8:  mov    0x2c(%eax),%ecx
0860b045 +0x3db:  mov    %ecx,0x30(%esp)
0860b049 +0x3df:  mov    0x30(%eax),%ecx
0860b04c +0x3e2:  mov    %ecx,0x34(%esp)
0860b050 +0x3e6:  mov    0x34(%eax),%ecx
0860b053 +0x3e9:  mov    %ecx,0x38(%esp)
0860b057 +0x3ed:  mov    0x38(%eax),%ecx
0860b05a +0x3f0:  mov    %ecx,0x3c(%esp)
0860b05e +0x3f4:  movzbl 0x3c(%eax),%eax
0860b062 +0x3f8:  mov    %al,0x40(%esp)
0860b066 +0x3fc:  mov    %edx,(%esp)
0860b069 +0x3ff:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
0860b06e +0x404:  mov    %eax,-0x14(%ebp)
0860b071 +0x407:  cmpl   $0xffffffff,-0x14(%ebp)
0860b075 +0x40b:  jne    0860b0bc <+0x452>
0860b077 +0x40d:  movl   $0x0,0x4(%esp)
0860b07f +0x415:  lea    -0x58(%ebp),%eax
0860b082 +0x418:  mov    %eax,(%esp)
0860b085 +0x41b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0860b08a +0x420:  movl   $0x1,0x4(%esp)
0860b092 +0x428:  lea    -0x58(%ebp),%eax
0860b095 +0x42b:  mov    %eax,(%esp)
0860b098 +0x42e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0860b09d +0x433:  mov    0xc(%ebp),%eax
0860b0a0 +0x436:  mov    %eax,(%esp)
0860b0a3 +0x439:  call   0860b616 <_GLOBAL__I__ZN26CSpecialItemRoutingManagerC2Ev+0xf9>  ; global constructors keyed to CSpecialItemRoutingManager::CSpecialItemRoutingManager()+0xf9
0860b0a8 +0x43e:  mov    %eax,0x4(%esp)
0860b0ac +0x442:  lea    -0x58(%ebp),%eax
0860b0af +0x445:  mov    %eax,(%esp)
0860b0b2 +0x448:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0860b0b7 +0x44d:  jmp    0860b23f <+0x5d5>
0860b0bc +0x452:  mov    -0x30(%ebp),%eax
0860b0bf +0x455:  mov    (%eax),%eax
0860b0c1 +0x457:  add    $0x4c,%eax
0860b0c4 +0x45a:  mov    (%eax),%edx
0860b0c6 +0x45c:  mov    -0x30(%ebp),%eax
0860b0c9 +0x45f:  mov    %eax,(%esp)
0860b0cc +0x462:  call   *%edx
0860b0ce +0x464:  test   %al,%al
0860b0d0 +0x466:  je     0860b11e <+0x4b4>
0860b0d2 +0x468:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0860b0d9 +0x46f:  call   0823445e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9b08>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9b08
0860b0de +0x474:  mov    %eax,%ebx
0860b0e0 +0x476:  mov    -0x28(%ebp),%eax
0860b0e3 +0x479:  mov    %eax,(%esp)
0860b0e6 +0x47c:  call   0822f3a0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4a4a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4a4a
0860b0eb +0x481:  mov    %ebx,0x18(%esp)
0860b0ef +0x485:  mov    %eax,0x14(%esp)
0860b0f3 +0x489:  movl   $"%d,'%s'",0x10(%esp)
0860b0fb +0x491:  movl   $0x1,0xc(%esp)
0860b103 +0x499:  movl   $"pick_cnt",0x8(%esp)
0860b10b +0x4a1:  movl   $"log_random_option",0x4(%esp)
0860b113 +0x4a9:  mov    -0x28(%ebp),%eax
0860b116 +0x4ac:  mov    %eax,(%esp)
0860b119 +0x4af:  call   0860fdd2 <_ZN14statistc_proxy3addEP5CUserPKcS3_jS3_z>  ; statistc_proxy::add(CUser*, char const*, char const*, unsigned int, char const*, ...)
0860b11e +0x4b4:  mov    0xc(%ebp),%eax
0860b121 +0x4b7:  mov    %eax,(%esp)
0860b124 +0x4ba:  call   0860b616 <_GLOBAL__I__ZN26CSpecialItemRoutingManagerC2Ev+0xf9>  ; global constructors keyed to CSpecialItemRoutingManager::CSpecialItemRoutingManager()+0xf9
0860b129 +0x4bf:  mov    %eax,-0x80(%ebp)
0860b12c +0x4c2:  movl   $0x0,-0x10(%ebp)
0860b133 +0x4c9:  mov    -0x28(%ebp),%eax
0860b136 +0x4cc:  mov    %eax,(%esp)
0860b139 +0x4cf:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0860b13e +0x4d4:  cmp    $0x5,%eax
0860b141 +0x4d7:  je     0860b176 <+0x50c>
0860b143 +0x4d9:  cmp    $0xc,%eax
0860b146 +0x4dc:  jne    0860b18e <+0x524>
0860b148 +0x4de:  mov    -0x28(%ebp),%eax
0860b14b +0x4e1:  mov    %eax,(%esp)
0860b14e +0x4e4:  call   08655220 <_ZN5CUser12getBossTowerEv>  ; CUser::getBossTower()
0860b153 +0x4e9:  mov    %eax,-0xc(%ebp)
0860b156 +0x4ec:  cmpl   $0x0,-0xc(%ebp)
0860b15a +0x4f0:  je     0860b18d <+0x523>
0860b15c +0x4f2:  mov    -0xc(%ebp),%eax
0860b15f +0x4f5:  lea    0xa18(%eax),%edx
0860b165 +0x4fb:  lea    -0x80(%ebp),%eax
0860b168 +0x4fe:  mov    %eax,0x4(%esp)
0860b16c +0x502:  mov    %edx,(%esp)
0860b16f +0x505:  call   08152c18 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x254d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x254d
0860b174 +0x50a:  jmp    0860b18e <+0x524>
0860b176 +0x50c:  mov    -0x80(%ebp),%eax
0860b179 +0x50f:  mov    %eax,0x4(%esp)
0860b17d +0x513:  mov    0xc(%ebp),%eax
0860b180 +0x516:  mov    %eax,(%esp)
0860b183 +0x519:  call   0860b62a <_GLOBAL__I__ZN26CSpecialItemRoutingManagerC2Ev+0x10d>  ; global constructors keyed to CSpecialItemRoutingManager::CSpecialItemRoutingManager()+0x10d
0860b188 +0x51e:  mov    %eax,-0x10(%ebp)
0860b18b +0x521:  jmp    0860b18e <+0x524>
0860b18d +0x523:  nop
0860b18e +0x524:  cmpl   $0x0,-0x10(%ebp)
0860b192 +0x528:  jle    0860b1c0 <+0x556>
0860b194 +0x52a:  movl   $"[EPIC ROUTING] DELETE DUNGEON ITEM FAIL",0x10(%esp)
0860b19c +0x532:  movl   $0x165,0xc(%esp)
0860b1a4 +0x53a:  movl   $&_ZZN26CSpecialItemRoutingManager14processRoutingEP6CPartyE19__PRETTY_FUNCTION__,0x8(%esp)
0860b1ac +0x542:  movl   $"SpecialItemRoutingManager.cpp",0x4(%esp)
0860b1b4 +0x54a:  movl   $0x1,(%esp)
0860b1bb +0x551:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0860b1c0 +0x556:  movl   $0x1,0x4(%esp)
0860b1c8 +0x55e:  lea    -0x58(%ebp),%eax
0860b1cb +0x561:  mov    %eax,(%esp)
0860b1ce +0x564:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0860b1d3 +0x569:  mov    -0x24(%ebp),%eax
0860b1d6 +0x56c:  mov    %eax,0x4(%esp)
0860b1da +0x570:  lea    -0x58(%ebp),%eax
0860b1dd +0x573:  mov    %eax,(%esp)
0860b1e0 +0x576:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0860b1e5 +0x57b:  mov    -0x80(%ebp),%eax
0860b1e8 +0x57e:  mov    %eax,0x4(%esp)
0860b1ec +0x582:  lea    -0x58(%ebp),%eax
0860b1ef +0x585:  mov    %eax,(%esp)
0860b1f2 +0x588:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0860b1f7 +0x58d:  mov    -0x18(%ebp),%eax
0860b1fa +0x590:  movsbl %al,%eax
0860b1fd +0x593:  mov    %eax,0x4(%esp)
0860b201 +0x597:  lea    -0x58(%ebp),%eax
0860b204 +0x59a:  mov    %eax,(%esp)
0860b207 +0x59d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0860b20c +0x5a2:  mov    -0x14(%ebp),%eax
0860b20f +0x5a5:  mov    %eax,0x4(%esp)
0860b213 +0x5a9:  lea    -0x58(%ebp),%eax
0860b216 +0x5ac:  mov    %eax,(%esp)
0860b219 +0x5af:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0860b21e +0x5b4:  mov    -0x18(%ebp),%eax
0860b221 +0x5b7:  mov    -0x14(%ebp),%edx
0860b224 +0x5ba:  mov    %edx,0xc(%esp)
0860b228 +0x5be:  mov    %eax,0x8(%esp)
0860b22c +0x5c2:  movl   $0x1,0x4(%esp)
0860b234 +0x5ca:  mov    -0x28(%ebp),%eax
0860b237 +0x5cd:  mov    %eax,(%esp)
0860b23a +0x5d0:  call   0867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItem(CUser::eSendTarget, ENUM_ITEMSPACE, int)
0860b23f +0x5d5:  movl   $0x1,0x4(%esp)
0860b247 +0x5dd:  lea    -0x58(%ebp),%eax
0860b24a +0x5e0:  mov    %eax,(%esp)
0860b24d +0x5e3:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0860b252 +0x5e8:  lea    -0x58(%ebp),%eax
0860b255 +0x5eb:  mov    %eax,0x4(%esp)
0860b259 +0x5ef:  mov    0xc(%ebp),%eax
0860b25c +0x5f2:  mov    %eax,(%esp)
0860b25f +0x5f5:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
0860b264 +0x5fa:  mov    0xc(%ebp),%eax
0860b267 +0x5fd:  mov    %eax,(%esp)
0860b26a +0x600:  call   085bf82a <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xd88>  ; global constructors keyed to CParty::cMember::cMember()+0xd88
0860b26f +0x605:  lea    -0x58(%ebp),%eax
0860b272 +0x608:  mov    %eax,(%esp)
0860b275 +0x60b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0860b27a +0x610:  jmp    0860b2ac <+0x642>
0860b27c +0x612:  mov    %edx,%ebx
0860b27e +0x614:  mov    %eax,%esi
0860b280 +0x616:  lea    -0x58(%ebp),%eax
0860b283 +0x619:  mov    %eax,(%esp)
0860b286 +0x61c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0860b28b +0x621:  mov    %esi,%eax
0860b28d +0x623:  mov    %ebx,%edx
0860b28f +0x625:  jmp    0860b291 <+0x627>
0860b291 +0x627:  mov    %edx,%ebx
0860b293 +0x629:  mov    %eax,%esi
0860b295 +0x62b:  lea    -0x4c(%ebp),%eax
0860b298 +0x62e:  mov    %eax,(%esp)
0860b29b +0x631:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0860b2a0 +0x636:  mov    %esi,%eax
0860b2a2 +0x638:  mov    %ebx,%edx
0860b2a4 +0x63a:  mov    %eax,(%esp)
0860b2a7 +0x63d:  call   08ae3750 <_Unwind_Resume>
0860b2ac +0x642:  lea    -0x4c(%ebp),%eax
0860b2af +0x645:  mov    %eax,(%esp)
0860b2b2 +0x648:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0860b2b7 +0x64d:  lea    -0x8(%ebp),%esp
0860b2ba +0x650:  add    $0x0,%esp
0860b2bd +0x653:  pop    %ebx
0860b2be +0x654:  pop    %esi
0860b2bf +0x655:  pop    %ebp
0860b2c0 +0x656:  ret
0860b2c1 +0x657:  nop
```

## 反编译 C

```c
// CSpecialItemRoutingManager::processRouting @ 0x860ac6a

/* CSpecialItemRoutingManager::processRouting(CParty*) */

void __thiscall
CSpecialItemRoutingManager::processRouting(CSpecialItemRoutingManager *this,CParty *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  CDataManager *this_00;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 local_80 [24];
  int local_68;
  int local_64;
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_60 [4];
  PacketGuard local_5c [12];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_50 [12];
  __normal_iterator local_44 [4];
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_40 [4];
  undefined4 *local_3c;
  int local_38;
  CItem *local_34;
  CItem *local_30;
  CUserCharacInfo *local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_3c = (undefined4 *)CParty::GetRoutingInvenItem(param_1);
  if (*(int *)((int)local_3c + 2) == 0) {
    ProcessFailEtc(this,param_1,0);
  }
  else {
    iVar3 = CParty::GetRoutingItemID(param_1);
    local_38 = iVar3;
    this_00 = (CDataManager *)G_CDataManager();
    local_34 = (CItem *)CDataManager::find_item(this_00,iVar3);
    if (local_34 == (CItem *)0x0) {
      ProcessFailEtc(this,param_1,0);
    }
    else {
      local_30 = local_34;
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_50);
                    /* try { // try from 0860ad0d to 0860ad43 has its CatchHandler @ 0860b291 */
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear(local_50);
      CParty::GetRoutingDiceMemberList(param_1,(vector *)local_50,local_30);
      local_2c = (CUserCharacInfo *)0x0;
      local_28 = 0;
      PacketGuard::PacketGuard(local_5c);
                    /* try { // try from 0860ad5a to 0860b263 has its CatchHandler @ 0860b27c */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_5c,0,0x11a);
      cVar1 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::empty();
      if (cVar1 == '\x01') {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_5c,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_5c,0);
        iVar3 = CParty::GetRoutingItemUniqueID(param_1);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_5c,iVar3);
      }
      else {
        iVar3 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size(local_50);
        if (iVar3 == 1) {
          piVar4 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                          operator[](local_50,0);
          local_28 = *piVar4;
          local_2c = (CUserCharacInfo *)CParty::get_user(param_1,local_28);
        }
        else {
          local_24 = -1;
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
LAB_0860ae52:
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
          bVar2 = __gnu_cxx::operator!=(local_60,local_44);
          if (bVar2) {
            piVar4 = (int *)__gnu_cxx::
                            __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                            ::operator*(local_60);
            local_64 = piVar4[1];
            local_68 = *piVar4;
            local_20 = get_rand_int(100);
            if (local_20 <= local_24) goto LAB_0860ae2a;
            local_28 = local_68;
            local_24 = local_20;
            local_2c = (CUserCharacInfo *)CParty::get_user(param_1,local_68);
            goto LAB_0860ae32;
          }
        }
      }
      if (local_2c != (CUserCharacInfo *)0x0) {
        local_1c = 0;
        cVar1 = CItem::is_stackable(local_34);
        if (cVar1 == '\0') {
          cVar1 = (**(code **)(*(int *)local_34 + 0x14))(local_34);
          if (cVar1 == '\0') {
            cVar1 = (**(code **)(*(int *)local_34 + 0x10))(local_34);
            if (cVar1 == '\0') {
              local_1c = 0;
            }
            else {
              local_1c = 1;
            }
          }
          else {
            local_1c = 7;
          }
        }
        else {
          iVar3 = (**(code **)(*(int *)local_34 + 0xc))(local_34);
          if (iVar3 == 9) {
            local_1c = 7;
          }
        }
        local_18 = 0xffffffff;
        cVar1 = (**(code **)(*(int *)local_34 + 0x10))(local_34);
        if (cVar1 == '\0') {
          uVar5 = CUserCharacInfo::getCurCharacInvenW(local_2c);
          local_18 = CInventory::insertItemIntoInventory
                               (uVar5,*local_3c,local_3c[1],local_3c[2],local_3c[3],local_3c[4],
                                local_3c[5],local_3c[6],local_3c[7],local_3c[8],local_3c[9],
                                local_3c[10],local_3c[0xb],local_3c[0xc],local_3c[0xd],local_3c[0xe]
                                ,*(undefined1 *)(local_3c + 0xf),4,1,1);
        }
        else {
          uVar5 = CUserCharacInfo::getCurCharacNo(local_2c);
          WongWork::CGenUniqueNo::genIPGNo(5,uVar5,local_80);
          local_18 = CUser::addAvatarItem
                               ((CUser *)local_2c,*(undefined4 *)((int)local_3c + 2),0,
                                (int)(char)*(undefined2 *)((int)local_3c + 0xb),local_80,0xf);
        }
        if (local_18 == -1) {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_5c,0);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_5c,1);
          iVar3 = CParty::GetRoutingItemUniqueID(param_1);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_5c,iVar3);
        }
        else {
          cVar1 = (**(code **)(*(int *)local_34 + 0x4c))(local_34);
          if (cVar1 != '\0') {
            uVar5 = CSystemTime::getCurDate((CSystemTime *)GlobalData::s_systemTime_);
            uVar6 = CUserCharacInfo::get_charac_10_level_section(local_2c);
            statistc_proxy::add((CUser *)local_2c,"log_random_option","pick_cnt",1,"%d,\'%s\'",uVar6
                                ,uVar5);
          }
          iVar3 = CParty::GetRoutingItemUniqueID(param_1);
          local_14 = 0;
          iVar7 = CUser::get_state((CUser *)local_2c);
          if (iVar7 == 5) {
            local_14 = CParty::DeleteDungeonDropItem((int)param_1);
          }
          else if ((iVar7 == 0xc) &&
                  (local_10 = CUser::getBossTower((CUser *)local_2c), local_10 != 0)) {
            std::map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>::
            erase((int *)(local_10 + 0xa18));
          }
          if (0 < local_14) {
            LogManager::logFormat
                      (1,"SpecialItemRoutingManager.cpp",
                       "void CSpecialItemRoutingManager::processRouting(CParty*)",0x165,
                       "[EPIC ROUTING] DELETE DUNGEON ITEM FAIL");
          }
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_5c,1);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_5c,local_28);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_5c,iVar3);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_5c,(int)(char)local_1c);
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_5c,local_18);
          CUser::SendUpdateItem((CUser *)local_2c,1,local_1c,local_18);
        }
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_5c,true);
      CParty::send_to_party(param_1,local_5c);
      CParty::SetEndRouting(param_1);
                    /* try { // try from 0860b275 to 0860b279 has its CatchHandler @ 0860b291 */
      PacketGuard::~PacketGuard(local_5c);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_50);
    }
  }
  return;
LAB_0860ae2a:
  if (local_20 != local_24) {
LAB_0860ae32:
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::operator++(local_40,(int)local_60);
  }
  goto LAB_0860ae52;
}
```
