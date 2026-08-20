# RecvInfoFromDB

`_ZN8WongWork9CWebEvent14RecvInfoFromDBEP5CUserjjjj`

`WongWork::CWebEvent::RecvInfoFromDB(CUser*, unsigned int, unsigned int, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `WongWork::CWebEvent` | `0x086c121e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c121e  _ZN8WongWork9CWebEvent14RecvInfoFromDBEP5CUserjjjj
#           WongWork::CWebEvent::RecvInfoFromDB(CUser*, unsigned int, unsigned int, unsigned int, unsigned int)
# range [0x086c121e, 0x086c190f]
086c121e +0x000:  push   %ebp
086c121f +0x001:  mov    %esp,%ebp
086c1221 +0x003:  push   %edi
086c1222 +0x004:  push   %esi
086c1223 +0x005:  push   %ebx
086c1224 +0x006:  sub    $0x13c,%esp
086c122a +0x00c:  cmpl   $0x1,0xc(%ebp)
086c122e +0x010:  jne    086c12ba <+0x9c>
086c1234 +0x016:  mov    0x8(%ebp),%eax
086c1237 +0x019:  mov    %eax,(%esp)
086c123a +0x01c:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
086c123f +0x021:  mov    %eax,(%esp)
086c1242 +0x024:  call   08110c7a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x18c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x18c
086c1247 +0x029:  mov    %eax,%ebx
086c1249 +0x02b:  add    0x10(%ebp),%ebx
086c124c +0x02e:  mov    0x8(%ebp),%eax
086c124f +0x031:  mov    %eax,(%esp)
086c1252 +0x034:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
086c1257 +0x039:  mov    %ebx,0x4(%esp)
086c125b +0x03d:  mov    %eax,(%esp)
086c125e +0x040:  call   08110c86 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x198>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x198
086c1263 +0x045:  mov    0x10(%ebp),%ebx
086c1266 +0x048:  mov    0x8(%ebp),%eax
086c1269 +0x04b:  mov    %eax,(%esp)
086c126c +0x04e:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
086c1271 +0x053:  mov    %eax,(%esp)
086c1274 +0x056:  call   08110c7a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x18c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x18c
086c1279 +0x05b:  mov    0x8(%ebp),%edx
086c127c +0x05e:  add    $0x79700,%edx
086c1282 +0x064:  movl   $0x2,0xc(%esp)
086c128a +0x06c:  mov    %ebx,0x8(%esp)
086c128e +0x070:  mov    %eax,0x4(%esp)
086c1292 +0x074:  mov    %edx,(%esp)
086c1295 +0x077:  call   08683c58 <_ZN15cUserHistoryLog12EventCoinAddEii14eCoinAddReason>  ; cUserHistoryLog::EventCoinAdd(int, int, eCoinAddReason)
086c129a +0x07c:  mov    0x8(%ebp),%eax
086c129d +0x07f:  mov    %eax,(%esp)
086c12a0 +0x082:  call   086504d8 <_ZN5CUser13SaveMoneyCoinEv>  ; CUser::SaveMoneyCoin()
086c12a5 +0x087:  mov    0x8(%ebp),%eax
086c12a8 +0x08a:  mov    %eax,(%esp)
086c12ab +0x08d:  call   08656808 <_ZN5CUser8SendCoinEv>  ; CUser::SendCoin()
086c12b0 +0x092:  mov    $0x1,%ebx
086c12b5 +0x097:  jmp    086c1902 <+0x6e4>
086c12ba +0x09c:  cmpl   $0x3e7,0xc(%ebp)
086c12c1 +0x0a3:  jne    086c142a <+0x20c>
086c12c7 +0x0a9:  mov    0x10(%ebp),%eax
086c12ca +0x0ac:  mov    %eax,0xc(%esp)
086c12ce +0x0b0:  movl   $"%d",0x8(%esp)
086c12d6 +0x0b8:  movl   $0xc,0x4(%esp)
086c12de +0x0c0:  lea    -0x58(%ebp),%eax
086c12e1 +0x0c3:  mov    %eax,(%esp)
086c12e4 +0x0c6:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
086c12e9 +0x0cb:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
086c12ee +0x0d0:  movl   $0x47,0x8(%esp)
086c12f6 +0x0d8:  movl   $"WebEvent.cpp",0x4(%esp)
086c12fe +0x0e0:  mov    %eax,(%esp)
086c1301 +0x0e3:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
086c1306 +0x0e8:  movl   $0x0,0x8(%esp)
086c130e +0x0f0:  mov    %eax,0x4(%esp)
086c1312 +0x0f4:  lea    -0x60(%ebp),%eax
086c1315 +0x0f7:  mov    %eax,(%esp)
086c1318 +0x0fa:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
086c131d +0x0ff:  mov    0x14(%ebp),%ebx
086c1320 +0x102:  lea    -0x60(%ebp),%eax
086c1323 +0x105:  mov    %eax,(%esp)
086c1326 +0x108:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
086c132b +0x10d:  mov    %ebx,0x4(%esp)
086c132f +0x111:  mov    %eax,(%esp)
086c1332 +0x114:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
086c1337 +0x119:  mov    0x18(%ebp),%ebx
086c133a +0x11c:  lea    -0x60(%ebp),%eax
086c133d +0x11f:  mov    %eax,(%esp)
086c1340 +0x122:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
086c1345 +0x127:  mov    %ebx,0x4(%esp)
086c1349 +0x12b:  mov    %eax,(%esp)
086c134c +0x12e:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
086c1351 +0x133:  mov    0x14(%ebp),%eax
086c1354 +0x136:  mov    %eax,(%esp)
086c1357 +0x139:  call   086c1bd4 <_ZN8WongWork9CWebEvent16_GetEventIPGCodeEi>  ; WongWork::CWebEvent::_GetEventIPGCode(int)
086c135c +0x13e:  mov    %eax,-0x30(%ebp)
086c135f +0x141:  cmpl   $0x0,-0x30(%ebp)
086c1363 +0x145:  jne    086c1383 <+0x165>
086c1365 +0x147:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
086c136a +0x14c:  lea    -0x60(%ebp),%edx
086c136d +0x14f:  mov    %edx,0x4(%esp)
086c1371 +0x153:  mov    %eax,(%esp)
086c1374 +0x156:  call   08101080 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0xa2>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0xa2
086c1379 +0x15b:  mov    $0x1,%ebx
086c137e +0x160:  jmp    086c141a <+0x1fc>
086c1383 +0x165:  mov    &_ZN10GlobalData12s_pIPGHelperE,%eax
086c1388 +0x16a:  mov    (%eax),%eax
086c138a +0x16c:  mov    (%eax),%eax
086c138c +0x16e:  mov    %eax,-0xec(%ebp)
086c1392 +0x174:  lea    -0x60(%ebp),%eax
086c1395 +0x177:  mov    %eax,(%esp)
086c1398 +0x17a:  call   08100ffa <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1c>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1c
086c139d +0x17f:  mov    %eax,%edi
086c139f +0x181:  mov    0x8(%ebp),%eax
086c13a2 +0x184:  mov    %eax,(%esp)
086c13a5 +0x187:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
086c13aa +0x18c:  mov    %eax,%esi
086c13ac +0x18e:  mov    0x14(%ebp),%eax
086c13af +0x191:  mov    %eax,(%esp)
086c13b2 +0x194:  call   086c1ba8 <_ZN8WongWork9CWebEvent15_GetEventStringEi>  ; WongWork::CWebEvent::_GetEventString(int)
086c13b7 +0x199:  mov    %eax,%ebx
086c13b9 +0x19b:  lea    -0x4c(%ebp),%eax
086c13bc +0x19e:  mov    %eax,(%esp)
086c13bf +0x1a1:  call   084b76d8 <_ZN8WongWork12CGenUniqueNo11GenUniqueNoEPc>  ; WongWork::CGenUniqueNo::GenUniqueNo(char*)
086c13c4 +0x1a6:  mov    &_ZN10GlobalData12s_pIPGHelperE,%edx
086c13ca +0x1ac:  mov    %edi,0x1c(%esp)
086c13ce +0x1b0:  mov    %esi,0x18(%esp)
086c13d2 +0x1b4:  mov    %ebx,0x14(%esp)
086c13d6 +0x1b8:  mov    %eax,0x10(%esp)
086c13da +0x1bc:  lea    -0x58(%ebp),%eax
086c13dd +0x1bf:  mov    %eax,0xc(%esp)
086c13e1 +0x1c3:  mov    -0x30(%ebp),%eax
086c13e4 +0x1c6:  mov    %eax,0x8(%esp)
086c13e8 +0x1ca:  mov    0x8(%ebp),%eax
086c13eb +0x1cd:  mov    %eax,0x4(%esp)
086c13ef +0x1d1:  mov    %edx,(%esp)
086c13f2 +0x1d4:  call   *-0xec(%ebp)
086c13f8 +0x1da:  mov    $0x0,%ebx
086c13fd +0x1df:  jmp    086c141a <+0x1fc>
086c13ff +0x1e1:  mov    %edx,%ebx
086c1401 +0x1e3:  mov    %eax,%esi
086c1403 +0x1e5:  lea    -0x60(%ebp),%eax
086c1406 +0x1e8:  mov    %eax,(%esp)
086c1409 +0x1eb:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
086c140e +0x1f0:  mov    %esi,%eax
086c1410 +0x1f2:  mov    %ebx,%edx
086c1412 +0x1f4:  mov    %eax,(%esp)
086c1415 +0x1f7:  call   08ae3750 <_Unwind_Resume>
086c141a +0x1fc:  lea    -0x60(%ebp),%eax
086c141d +0x1ff:  mov    %eax,(%esp)
086c1420 +0x202:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
086c1425 +0x207:  jmp    086c1902 <+0x6e4>
086c142a +0x20c:  mov    0xc(%ebp),%esi
086c142d +0x20f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086c1432 +0x214:  mov    %esi,0x4(%esp)
086c1436 +0x218:  mov    %eax,(%esp)
086c1439 +0x21b:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
086c143e +0x220:  mov    %eax,-0x38(%ebp)
086c1441 +0x223:  cmpl   $0x0,-0x38(%ebp)
086c1445 +0x227:  jne    086c1451 <+0x233>
086c1447 +0x229:  mov    $0x0,%ebx
086c144c +0x22e:  jmp    086c1902 <+0x6e4>
086c1451 +0x233:  lea    -0xe5(%ebp),%eax
086c1457 +0x239:  mov    %eax,(%esp)
086c145a +0x23c:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
086c145f +0x241:  mov    -0x38(%ebp),%eax
086c1462 +0x244:  mov    (%eax),%eax
086c1464 +0x246:  add    $0x8,%eax
086c1467 +0x249:  mov    (%eax),%edx
086c1469 +0x24b:  lea    -0xe5(%ebp),%eax
086c146f +0x251:  mov    %eax,0x4(%esp)
086c1473 +0x255:  mov    -0x38(%ebp),%eax
086c1476 +0x258:  mov    %eax,(%esp)
086c1479 +0x25b:  call   *%edx
086c147b +0x25d:  movzbl -0xe4(%ebp),%eax
086c1482 +0x264:  cmp    $0x1,%al
086c1484 +0x266:  je     086c1491 <+0x273>
086c1486 +0x268:  mov    0x10(%ebp),%eax
086c1489 +0x26b:  mov    %eax,-0xde(%ebp)
086c148f +0x271:  jmp    086c14a0 <+0x282>
086c1491 +0x273:  cmpl   $0x1,0x10(%ebp)
086c1495 +0x277:  jbe    086c14a0 <+0x282>
086c1497 +0x279:  mov    0x10(%ebp),%eax
086c149a +0x27c:  mov    %eax,-0xde(%ebp)
086c14a0 +0x282:  mov    0xc(%ebp),%eax
086c14a3 +0x285:  mov    %eax,-0xe3(%ebp)
086c14a9 +0x28b:  movl   $0xd,-0x34(%ebp)
086c14b0 +0x292:  cmpl   $&_ZL14gUnicodeBuffer+0xe175,0x14(%ebp)
086c14b7 +0x299:  jne    086c14c2 <+0x2a4>
086c14b9 +0x29b:  movl   $0xe,-0x34(%ebp)
086c14c0 +0x2a2:  jmp    086c14d2 <+0x2b4>
086c14c2 +0x2a4:  cmpl   $&_ZL14gUnicodeBuffer+0x2681a,0x14(%ebp)
086c14c9 +0x2ab:  jne    086c14d2 <+0x2b4>
086c14cb +0x2ad:  movl   $0x14,-0x34(%ebp)
086c14d2 +0x2b4:  mov    -0x38(%ebp),%eax
086c14d5 +0x2b7:  mov    (%eax),%eax
086c14d7 +0x2b9:  add    $0x10,%eax
086c14da +0x2bc:  mov    (%eax),%edx
086c14dc +0x2be:  mov    -0x38(%ebp),%eax
086c14df +0x2c1:  mov    %eax,(%esp)
086c14e2 +0x2c4:  call   *%edx
086c14e4 +0x2c6:  test   %al,%al
086c14e6 +0x2c8:  je     086c15ed <+0x3cf>
086c14ec +0x2ce:  mov    0xc(%ebp),%eax
086c14ef +0x2d1:  mov    %eax,(%esp)
086c14f2 +0x2d4:  call   086c1a2e <_ZN8WongWork9CWebEvent20_GetATIAvatarAbilityEi>  ; WongWork::CWebEvent::_GetATIAvatarAbility(int)
086c14f7 +0x2d9:  mov    %eax,-0x2c(%ebp)
086c14fa +0x2dc:  movl   $0x0,-0x74(%ebp)
086c1501 +0x2e3:  movl   $0x0,-0x70(%ebp)
086c1508 +0x2ea:  movl   $0x0,-0x6c(%ebp)
086c150f +0x2f1:  movl   $0x0,-0x68(%ebp)
086c1516 +0x2f8:  movl   $0x0,-0x64(%ebp)
086c151d +0x2ff:  mov    0x14(%ebp),%eax
086c1520 +0x302:  mov    %eax,(%esp)
086c1523 +0x305:  call   086c1ba8 <_ZN8WongWork9CWebEvent15_GetEventStringEi>  ; WongWork::CWebEvent::_GetEventString(int)
086c1528 +0x30a:  mov    %eax,0xc(%esp)
086c152c +0x30e:  movl   $"E_%s",0x8(%esp)
086c1534 +0x316:  movl   $0x14,0x4(%esp)
086c153c +0x31e:  lea    -0x74(%ebp),%eax
086c153f +0x321:  mov    %eax,(%esp)
086c1542 +0x324:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
086c1547 +0x329:  movl   $0xffffffff,-0x28(%ebp)
086c154e +0x330:  mov    -0x2c(%ebp),%eax
086c1551 +0x333:  movsbl %al,%esi
086c1554 +0x336:  mov    -0xe3(%ebp),%eax
086c155a +0x33c:  mov    %eax,%ebx
086c155c +0x33e:  mov    0x8(%ebp),%eax
086c155f +0x341:  mov    %eax,(%esp)
086c1562 +0x344:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
086c1567 +0x349:  movl   $0x0,0x24(%esp)
086c156f +0x351:  movl   $0x0,0x20(%esp)
086c1577 +0x359:  movl   $0x2,0x1c(%esp)
086c157f +0x361:  lea    -0x74(%ebp),%edx
086c1582 +0x364:  mov    %edx,0x18(%esp)
086c1586 +0x368:  movl   $0xffffffff,0x14(%esp)
086c158e +0x370:  mov    %esi,0x10(%esp)
086c1592 +0x374:  movl   $0x0,0xc(%esp)
086c159a +0x37c:  movl   $0x0,0x8(%esp)
086c15a2 +0x384:  mov    %ebx,0x4(%esp)
086c15a6 +0x388:  mov    %eax,(%esp)
086c15a9 +0x38b:  call   08509b9e <_ZN10CInventory13AddAvatarItemEiibccPKc20eAvatarItemAddReasonbt>  ; CInventory::AddAvatarItem(int, int, bool, char, char, char const*, eAvatarItemAddReason, bool, unsigned short)
086c15ae +0x390:  mov    %eax,-0x28(%ebp)
086c15b1 +0x393:  cmpl   $0xffffffff,-0x28(%ebp)
086c15b5 +0x397:  sete   %al
086c15b8 +0x39a:  test   %al,%al
086c15ba +0x39c:  je     086c15c6 <+0x3a8>
086c15bc +0x39e:  mov    $0x0,%ebx
086c15c1 +0x3a3:  jmp    086c1902 <+0x6e4>
086c15c6 +0x3a8:  mov    -0x28(%ebp),%eax
086c15c9 +0x3ab:  mov    %eax,0xc(%esp)
086c15cd +0x3af:  movl   $0x1,0x8(%esp)
086c15d5 +0x3b7:  movl   $0x1,0x4(%esp)
086c15dd +0x3bf:  mov    0x8(%ebp),%eax
086c15e0 +0x3c2:  mov    %eax,(%esp)
086c15e3 +0x3c5:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
086c15e8 +0x3ca:  jmp    086c18fd <+0x6df>
086c15ed +0x3cf:  movl   $0x0,-0x78(%ebp)
086c15f4 +0x3d6:  movl   $0x0,-0x7c(%ebp)
086c15fb +0x3dd:  movb   $0x0,-0x7d(%ebp)
086c15ff +0x3e1:  mov    -0xe3(%ebp),%eax
086c1605 +0x3e7:  mov    %eax,%edx
086c1607 +0x3e9:  mov    &_ZN10GlobalData11s_pCeraShopE,%eax
086c160c +0x3ee:  lea    -0x7d(%ebp),%ecx
086c160f +0x3f1:  mov    %ecx,0x10(%esp)
086c1613 +0x3f5:  lea    -0x7c(%ebp),%ecx
086c1616 +0x3f8:  mov    %ecx,0xc(%esp)
086c161a +0x3fc:  lea    -0x78(%ebp),%ecx
086c161d +0x3ff:  mov    %ecx,0x8(%esp)
086c1621 +0x403:  mov    %edx,0x4(%esp)
086c1625 +0x407:  mov    %eax,(%esp)
086c1628 +0x40a:  call   08324a1e <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb>  ; WongWork::CCeraShop::IsSpecialItem(int, int&, int&, bool&)
086c162d +0x40f:  test   %al,%al
086c162f +0x411:  je     086c17f4 <+0x5d6>
086c1635 +0x417:  movl   $0x0,-0x84(%ebp)
086c163f +0x421:  mov    -0xe3(%ebp),%eax
086c1645 +0x427:  mov    %eax,%esi
086c1647 +0x429:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086c164c +0x42e:  mov    0xc(%eax),%eax
086c164f +0x431:  mov    %esi,0x4(%esp)
086c1653 +0x435:  mov    %eax,(%esp)
086c1656 +0x438:  call   0817a10c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x18a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x18a
086c165b +0x43d:  mov    %eax,-0x24(%ebp)
086c165e +0x440:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
086c1665 +0x447:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
086c166a +0x44c:  mov    %eax,-0x20(%ebp)
086c166d +0x44f:  lea    -0x90(%ebp),%eax
086c1673 +0x455:  mov    %eax,(%esp)
086c1676 +0x458:  call   0814ac92 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa31>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa31
086c167b +0x45d:  lea    -0xa8(%ebp),%eax
086c1681 +0x463:  mov    %eax,(%esp)
086c1684 +0x466:  call   0817a244 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x2c2>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x2c2
086c1689 +0x46b:  mov    -0xe3(%ebp),%eax
086c168f +0x471:  mov    %eax,%edx
086c1691 +0x473:  mov    &_ZN10GlobalData11s_pCeraShopE,%eax
086c1696 +0x478:  movl   $0x1,0x30(%esp)
086c169e +0x480:  movl   $0x0,0x2c(%esp)
086c16a6 +0x488:  movl   $0x0,0x28(%esp)
086c16ae +0x490:  movl   $0x0,0x24(%esp)
086c16b6 +0x498:  lea    -0xa8(%ebp),%ecx
086c16bc +0x49e:  mov    %ecx,0x20(%esp)
086c16c0 +0x4a2:  lea    -0x90(%ebp),%ecx
086c16c6 +0x4a8:  mov    %ecx,0x1c(%esp)
086c16ca +0x4ac:  movl   $0x1,0x18(%esp)
086c16d2 +0x4b4:  mov    -0x20(%ebp),%ecx
086c16d5 +0x4b7:  mov    %ecx,0x14(%esp)
086c16d9 +0x4bb:  lea    -0x84(%ebp),%ecx
086c16df +0x4c1:  mov    %ecx,0x10(%esp)
086c16e3 +0x4c5:  mov    -0x24(%ebp),%ecx
086c16e6 +0x4c8:  mov    %ecx,0xc(%esp)
086c16ea +0x4cc:  mov    %edx,0x8(%esp)
086c16ee +0x4d0:  mov    0x8(%ebp),%edx
086c16f1 +0x4d3:  mov    %edx,0x4(%esp)
086c16f5 +0x4d7:  mov    %eax,(%esp)
086c16f8 +0x4da:  call   0832587e <_ZN8WongWork9CCeraShop18ProcessSpecialItemEP5CUseriiRilbRSt6vectorI10Inven_ItemSaIS5_EERNS0_21stCeraShopItemParam_tEccbi>  ; WongWork::CCeraShop::ProcessSpecialItem(CUser*, int, int, int&, long, bool, std::vector<Inven_Item, std::allocator<Inven_Item> >&, WongWork::CCeraShop::stCeraShopItemParam_t&, char, char, bool, int)
086c16fd +0x4df:  test   %al,%al
086c16ff +0x4e1:  je     086c177c <+0x55e>
086c1701 +0x4e3:  mov    -0x84(%ebp),%eax
086c1707 +0x4e9:  test   %eax,%eax
086c1709 +0x4eb:  je     086c171a <+0x4fc>
086c170b +0x4ed:  mov    $0x0,%ebx
086c1710 +0x4f2:  mov    $0x0,%esi
086c1715 +0x4f7:  jmp    086c179b <+0x57d>
086c171a +0x4fc:  cmpl   $0x0,-0x24(%ebp)
086c171e +0x500:  je     086c1740 <+0x522>
086c1720 +0x502:  mov    -0x24(%ebp),%eax
086c1723 +0x505:  mov    %eax,0x4(%esp)
086c1727 +0x509:  mov    0x8(%ebp),%eax
086c172a +0x50c:  mov    %eax,(%esp)
086c172d +0x50f:  call   0864d878 <_ZN5CUser17IsRestrictedGoodsEi>  ; CUser::IsRestrictedGoods(int)
086c1732 +0x514:  xor    $0x1,%eax
086c1735 +0x517:  test   %al,%al
086c1737 +0x519:  je     086c1740 <+0x522>
086c1739 +0x51b:  mov    $0x1,%eax
086c173e +0x520:  jmp    086c1745 <+0x527>
086c1740 +0x522:  mov    $0x0,%eax
086c1745 +0x527:  test   %al,%al
086c1747 +0x529:  je     086c177c <+0x55e>
086c1749 +0x52b:  mov    -0x24(%ebp),%eax
086c174c +0x52e:  mov    %eax,0x4(%esp)
086c1750 +0x532:  mov    0x8(%ebp),%eax
086c1753 +0x535:  mov    %eax,(%esp)
086c1756 +0x538:  call   0864d84e <_ZN5CUser18SetRestrictedGoodsEi>  ; CUser::SetRestrictedGoods(int)
086c175b +0x53d:  movl   $0x0,0xc(%esp)
086c1763 +0x545:  mov    -0x20(%ebp),%eax
086c1766 +0x548:  mov    %eax,0x8(%esp)
086c176a +0x54c:  mov    -0x24(%ebp),%eax
086c176d +0x54f:  mov    %eax,0x4(%esp)
086c1771 +0x553:  mov    0x8(%ebp),%eax
086c1774 +0x556:  mov    %eax,(%esp)
086c1777 +0x559:  call   08325a30 <_ZN8WongWork9CCeraShop15SaveFeaturedIdxEP5CUseriii>  ; WongWork::CCeraShop::SaveFeaturedIdx(CUser*, int, int, int)
086c177c +0x55e:  mov    $0x1,%esi
086c1781 +0x563:  jmp    086c179b <+0x57d>
086c1783 +0x565:  mov    %edx,%ebx
086c1785 +0x567:  mov    %eax,%esi
086c1787 +0x569:  lea    -0xa8(%ebp),%eax
086c178d +0x56f:  mov    %eax,(%esp)
086c1790 +0x572:  call   0817a2fc <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x37a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x37a
086c1795 +0x577:  mov    %esi,%eax
086c1797 +0x579:  mov    %ebx,%edx
086c1799 +0x57b:  jmp    086c17bb <+0x59d>
086c179b +0x57d:  lea    -0xa8(%ebp),%eax
086c17a1 +0x583:  mov    %eax,(%esp)
086c17a4 +0x586:  call   0817a2fc <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x37a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x37a
086c17a9 +0x58b:  test   %esi,%esi
086c17ab +0x58d:  jne    086c17b4 <+0x596>
086c17ad +0x58f:  mov    $0x0,%esi
086c17b2 +0x594:  jmp    086c17d9 <+0x5bb>
086c17b4 +0x596:  mov    $0x1,%esi
086c17b9 +0x59b:  jmp    086c17d9 <+0x5bb>
086c17bb +0x59d:  mov    %edx,%ebx
086c17bd +0x59f:  mov    %eax,%esi
086c17bf +0x5a1:  lea    -0x90(%ebp),%eax
086c17c5 +0x5a7:  mov    %eax,(%esp)
086c17c8 +0x5aa:  call   0814aca6 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa45>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa45
086c17cd +0x5af:  mov    %esi,%eax
086c17cf +0x5b1:  mov    %ebx,%edx
086c17d1 +0x5b3:  mov    %eax,(%esp)
086c17d4 +0x5b6:  call   08ae3750 <_Unwind_Resume>
086c17d9 +0x5bb:  lea    -0x90(%ebp),%eax
086c17df +0x5c1:  mov    %eax,(%esp)
086c17e2 +0x5c4:  call   0814aca6 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa45>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa45
086c17e7 +0x5c9:  test   %esi,%esi
086c17e9 +0x5cb:  je     086c1902 <+0x6e4>
086c17ef +0x5d1:  jmp    086c18fd <+0x6df>
086c17f4 +0x5d6:  movl   $0xffffffff,-0x1c(%ebp)
086c17fb +0x5dd:  mov    0x8(%ebp),%eax
086c17fe +0x5e0:  mov    %eax,(%esp)
086c1801 +0x5e3:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
086c1806 +0x5e8:  movl   $0x0,0x4c(%esp)
086c180e +0x5f0:  movl   $0x1,0x48(%esp)
086c1816 +0x5f8:  mov    -0x34(%ebp),%edx
086c1819 +0x5fb:  mov    %edx,0x44(%esp)
086c181d +0x5ff:  mov    -0xe5(%ebp),%edx
086c1823 +0x605:  mov    %edx,0x4(%esp)
086c1827 +0x609:  mov    -0xe1(%ebp),%edx
086c182d +0x60f:  mov    %edx,0x8(%esp)
086c1831 +0x613:  mov    -0xdd(%ebp),%edx
086c1837 +0x619:  mov    %edx,0xc(%esp)
086c183b +0x61d:  mov    -0xd9(%ebp),%edx
086c1841 +0x623:  mov    %edx,0x10(%esp)
086c1845 +0x627:  mov    -0xd5(%ebp),%edx
086c184b +0x62d:  mov    %edx,0x14(%esp)
086c184f +0x631:  mov    -0xd1(%ebp),%edx
086c1855 +0x637:  mov    %edx,0x18(%esp)
086c1859 +0x63b:  mov    -0xcd(%ebp),%edx
086c185f +0x641:  mov    %edx,0x1c(%esp)
086c1863 +0x645:  mov    -0xc9(%ebp),%edx
086c1869 +0x64b:  mov    %edx,0x20(%esp)
086c186d +0x64f:  mov    -0xc5(%ebp),%edx
086c1873 +0x655:  mov    %edx,0x24(%esp)
086c1877 +0x659:  mov    -0xc1(%ebp),%edx
086c187d +0x65f:  mov    %edx,0x28(%esp)
086c1881 +0x663:  mov    -0xbd(%ebp),%edx
086c1887 +0x669:  mov    %edx,0x2c(%esp)
086c188b +0x66d:  mov    -0xb9(%ebp),%edx
086c1891 +0x673:  mov    %edx,0x30(%esp)
086c1895 +0x677:  mov    -0xb5(%ebp),%edx
086c189b +0x67d:  mov    %edx,0x34(%esp)
086c189f +0x681:  mov    -0xb1(%ebp),%edx
086c18a5 +0x687:  mov    %edx,0x38(%esp)
086c18a9 +0x68b:  mov    -0xad(%ebp),%edx
086c18af +0x691:  mov    %edx,0x3c(%esp)
086c18b3 +0x695:  movzbl -0xa9(%ebp),%edx
086c18ba +0x69c:  mov    %dl,0x40(%esp)
086c18be +0x6a0:  mov    %eax,(%esp)
086c18c1 +0x6a3:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
086c18c6 +0x6a8:  mov    %eax,-0x1c(%ebp)
086c18c9 +0x6ab:  cmpl   $0xffffffff,-0x1c(%ebp)
086c18cd +0x6af:  sete   %al
086c18d0 +0x6b2:  test   %al,%al
086c18d2 +0x6b4:  je     086c18db <+0x6bd>
086c18d4 +0x6b6:  mov    $0x0,%ebx
086c18d9 +0x6bb:  jmp    086c1902 <+0x6e4>
086c18db +0x6bd:  mov    -0x1c(%ebp),%eax
086c18de +0x6c0:  mov    %eax,0xc(%esp)
086c18e2 +0x6c4:  movl   $0x0,0x8(%esp)
086c18ea +0x6cc:  movl   $0x1,0x4(%esp)
086c18f2 +0x6d4:  mov    0x8(%ebp),%eax
086c18f5 +0x6d7:  mov    %eax,(%esp)
086c18f8 +0x6da:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
086c18fd +0x6df:  mov    $0x1,%ebx
086c1902 +0x6e4:  mov    %ebx,%eax
086c1904 +0x6e6:  add    $0x13c,%esp
086c190a +0x6ec:  pop    %ebx
086c190b +0x6ed:  pop    %esi
086c190c +0x6ee:  pop    %edi
086c190d +0x6ef:  pop    %ebp
086c190e +0x6f0:  ret
086c190f +0x6f1:  nop
```

## 反编译 C

```c
// WongWork::CWebEvent::RecvInfoFromDB @ 0x86c121e

/* WongWork::CWebEvent::RecvInfoFromDB(CUser*, unsigned int, unsigned int, unsigned int, unsigned
   int) */

uint WongWork::CWebEvent::RecvInfoFromDB
               (CUser *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  code *pcVar1;
  uint uVar2;
  char cVar3;
  CInventory *pCVar4;
  int iVar5;
  undefined4 uVar6;
  Stream *pSVar7;
  CStreamGuard *pCVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  CDataManager *this;
  uint unaff_EBX;
  bool bVar12;
  Inven_Item local_e9;
  char cStack_e8;
  undefined4 uStack_e7;
  undefined1 uStack_e3;
  uint uStack_e2;
  undefined1 uStack_de;
  undefined4 local_dd;
  undefined4 local_d9;
  undefined4 local_d5;
  undefined4 local_d1;
  undefined4 local_cd;
  undefined4 local_c9;
  undefined4 local_c5;
  undefined4 local_c1;
  undefined4 local_bd;
  undefined4 local_b9;
  undefined4 local_b5;
  undefined4 local_b1;
  undefined1 local_ad;
  stCeraShopItemParam_t local_ac [24];
  vector<Inven_Item,std::allocator<Inven_Item>> local_94 [12];
  int local_88;
  bool local_81;
  int local_80 [2];
  char local_78 [20];
  CStreamGuard local_64 [8];
  char local_5c [12];
  char local_50 [20];
  int *local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  long local_24;
  int local_20;
  
  if (param_2 == 1) {
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    iVar5 = CInventory::GetEventCoin(pCVar4);
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    CInventory::SetEventCoin(pCVar4,iVar5 + param_3);
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    uVar6 = CInventory::GetEventCoin(pCVar4);
    cUserHistoryLog::EventCoinAdd((cUserHistoryLog *)(param_1 + 0x79700),uVar6,param_3,2);
    CUser::SaveMoneyCoin(param_1);
    CUser::SendCoin(param_1);
    return 1;
  }
  if (param_2 == 999) {
    OS_API::snprintf(local_5c,0xc,"%d",param_3);
    pSVar7 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"WebEvent.cpp",0x47);
    CStreamGuard::CStreamGuard(local_64,pSVar7,false);
    pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_64);
                    /* try { // try from 086c1332 to 086c13f7 has its CatchHandler @ 086c13ff */
    CStreamGuard::operator<<(pCVar8,param_4);
    pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_64);
    CStreamGuard::operator<<(pCVar8,param_5);
    local_34 = _GetEventIPGCode(param_4);
    bVar12 = local_34 != 0;
    if (bVar12) {
      pcVar1 = *(code **)*GlobalData::s_pIPGHelper;
      uVar6 = CStreamGuard::Get(local_64);
      uVar9 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
      uVar10 = _GetEventString(param_4);
      uVar11 = CGenUniqueNo::GenUniqueNo(local_50);
      (*pcVar1)(GlobalData::s_pIPGHelper,param_1,local_34,local_5c,uVar11,uVar10,uVar9,uVar6);
    }
    else {
      StreamPool::Free(GlobalData::s_stream_pool,local_64);
    }
    CStreamGuard::~CStreamGuard(local_64);
    return (uint)!bVar12;
  }
  this = (CDataManager *)G_CDataManager();
  local_3c = (int *)CDataManager::find_item(this,param_2);
  if (local_3c == (int *)0x0) {
    return 0;
  }
  Inven_Item::Inven_Item(&local_e9);
  (**(code **)(*local_3c + 8))(local_3c,&local_e9);
  if (cStack_e8 == '\x01') {
    if (1 < param_3) {
      uStack_e2 = param_3;
    }
  }
  else {
    uStack_e2 = param_3;
  }
  local_38 = 0xd;
  if (param_4 == 0x186a1) {
    local_38 = 0xe;
  }
  else if (param_4 == 0x30d46) {
    local_38 = 0x14;
  }
  uStack_e7 = param_2;
  cVar3 = (**(code **)(*local_3c + 0x10))(local_3c);
  if (cVar3 != '\0') {
    local_30 = _GetATIAvatarAbility(param_2);
    local_78[0] = '\0';
    local_78[1] = '\0';
    local_78[2] = '\0';
    local_78[3] = '\0';
    local_78[4] = '\0';
    local_78[5] = '\0';
    local_78[6] = '\0';
    local_78[7] = '\0';
    local_78[8] = '\0';
    local_78[9] = '\0';
    local_78[10] = '\0';
    local_78[0xb] = '\0';
    local_78[0xc] = '\0';
    local_78[0xd] = '\0';
    local_78[0xe] = '\0';
    local_78[0xf] = '\0';
    local_78[0x10] = '\0';
    local_78[0x11] = '\0';
    local_78[0x12] = '\0';
    local_78[0x13] = '\0';
    uVar6 = _GetEventString(param_4);
    OS_API::snprintf(local_78,0x14,"E_%s",uVar6);
    uVar2 = uStack_e7;
    local_2c = 0xffffffff;
    cVar3 = (char)local_30;
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    local_2c = CInventory::AddAvatarItem(pCVar4,uVar2,0,0,(int)cVar3,0xffffffff,local_78,2,0,0);
    if (local_2c != -1) {
      CUser::SendUpdateItemList(param_1,1,1,local_2c);
      return 1;
    }
    return 0;
  }
  local_80[1] = 0;
  local_80[0] = 0;
  local_81 = false;
  cVar3 = CCeraShop::IsSpecialItem
                    (GlobalData::s_pCeraShop,uStack_e7,local_80 + 1,local_80,&local_81);
  uVar2 = uStack_e7;
  if (cVar3 == '\0') {
    local_20 = 0xffffffff;
    uVar6 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    local_20 = CInventory::insertItemIntoInventory
                         (uVar6,CONCAT22((undefined2)uStack_e7,CONCAT11(cStack_e8,local_e9)),
                          CONCAT13((undefined1)uStack_e2,CONCAT12(uStack_e3,uStack_e7._2_2_)),
                          CONCAT13(uStack_de,uStack_e2._1_3_),local_dd,local_d9,local_d5,local_d1,
                          local_cd,local_c9,local_c5,local_c1,local_bd,local_b9,local_b5,local_b1,
                          local_ad,local_38,1,0);
    if (local_20 != -1) {
      CUser::SendUpdateItemList(param_1,1,0,local_20);
      return 1;
    }
    return 0;
  }
  local_88 = 0;
  iVar5 = G_CDataManager();
  local_28 = CItemList::GetRestrictCode(*(CItemList **)(iVar5 + 0xc),uVar2);
  local_24 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  std::vector<Inven_Item,std::allocator<Inven_Item>>::vector(local_94);
                    /* try { // try from 086c1684 to 086c1688 has its CatchHandler @ 086c17bb */
  CCeraShop::stCeraShopItemParam_t::stCeraShopItemParam_t(local_ac);
                    /* try { // try from 086c16f8 to 086c177b has its CatchHandler @ 086c1783 */
  cVar3 = CCeraShop::ProcessSpecialItem
                    (GlobalData::s_pCeraShop,param_1,uStack_e7,local_28,&local_88,local_24,true,
                     (vector *)local_94,local_ac,'\0','\0',false,1);
  if (cVar3 != '\0') {
    if (local_88 != 0) {
      unaff_EBX = 0;
      bVar12 = false;
      goto LAB_086c179b;
    }
    if (local_28 == 0) {
LAB_086c1740:
      bVar12 = false;
    }
    else {
      cVar3 = CUser::IsRestrictedGoods(param_1,local_28);
      if (cVar3 == '\x01') goto LAB_086c1740;
      bVar12 = true;
    }
    if (bVar12) {
      CUser::SetRestrictedGoods(param_1,local_28);
      CCeraShop::SaveFeaturedIdx(param_1,local_28,local_24,0);
    }
  }
  bVar12 = true;
LAB_086c179b:
                    /* try { // try from 086c17a4 to 086c17a8 has its CatchHandler @ 086c17bb */
  CCeraShop::stCeraShopItemParam_t::~stCeraShopItemParam_t(local_ac);
  std::vector<Inven_Item,std::allocator<Inven_Item>>::~vector(local_94);
  if (bVar12) {
    return 1;
  }
  return unaff_EBX;
}
```
