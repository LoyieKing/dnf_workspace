# respond_special_item_premium

`_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result`

`SpecialItemHandler::respond_special_item_premium(int, STSpecailItem_Param const&, STSpecailItem_Result&)`

| 类 | 地址 |
|---|---|
| `SpecialItemHandler` | `0x0827d3dc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827d3dc  _ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result
#           SpecialItemHandler::respond_special_item_premium(int, STSpecailItem_Param const&, STSpecailItem_Result&)
# range [0x0827d3dc, 0x0827de4d]
0827d3dc +0x000:  push   %ebp
0827d3dd +0x001:  mov    %esp,%ebp
0827d3df +0x003:  push   %esi
0827d3e0 +0x004:  push   %ebx
0827d3e1 +0x005:  sub    $0xc0,%esp
0827d3e7 +0x00b:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0827d3ec +0x010:  mov    %eax,(%esp)
0827d3ef +0x013:  call   08298e88 <_ZN12CGameManager22GetPremiumLetheManagerEv>  ; CGameManager::GetPremiumLetheManager()
0827d3f4 +0x018:  mov    %eax,-0x44(%ebp)
0827d3f7 +0x01b:  mov    0x10(%ebp),%eax
0827d3fa +0x01e:  mov    (%eax),%eax
0827d3fc +0x020:  mov    %eax,-0x40(%ebp)
0827d3ff +0x023:  mov    0x10(%ebp),%eax
0827d402 +0x026:  mov    0x4(%eax),%eax
0827d405 +0x029:  mov    %eax,-0x9c(%ebp)
0827d40b +0x02f:  mov    0x10(%ebp),%eax
0827d40e +0x032:  mov    0x14(%eax),%eax
0827d411 +0x035:  mov    %eax,-0x3c(%ebp)
0827d414 +0x038:  mov    0x10(%ebp),%eax
0827d417 +0x03b:  movzbl 0x1c(%eax),%eax
0827d41b +0x03f:  mov    %al,-0x35(%ebp)
0827d41e +0x042:  mov    0x10(%ebp),%eax
0827d421 +0x045:  mov    0x18(%eax),%eax
0827d424 +0x048:  mov    %eax,-0x34(%ebp)
0827d427 +0x04b:  mov    -0x34(%ebp),%eax
0827d42a +0x04e:  mov    %eax,-0x30(%ebp)
0827d42d +0x051:  mov    -0x30(%ebp),%eax
0827d430 +0x054:  mov    %eax,-0xa0(%ebp)
0827d436 +0x05a:  lea    -0xa4(%ebp),%eax
0827d43c +0x060:  lea    -0x9c(%ebp),%edx
0827d442 +0x066:  mov    %edx,0x8(%esp)
0827d446 +0x06a:  movl   $&g_map_premium_item_data,0x4(%esp)
0827d44e +0x072:  mov    %eax,(%esp)
0827d451 +0x075:  call   0827e406 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x528>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x528
0827d456 +0x07a:  sub    $0x4,%esp
0827d459 +0x07d:  lea    -0x98(%ebp),%eax
0827d45f +0x083:  movl   $&g_map_premium_item_data,0x4(%esp)
0827d467 +0x08b:  mov    %eax,(%esp)
0827d46a +0x08e:  call   0827e432 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x554>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x554
0827d46f +0x093:  sub    $0x4,%esp
0827d472 +0x096:  lea    -0x98(%ebp),%eax
0827d478 +0x09c:  mov    %eax,0x4(%esp)
0827d47c +0x0a0:  lea    -0xa4(%ebp),%eax
0827d482 +0x0a6:  mov    %eax,(%esp)
0827d485 +0x0a9:  call   0827e458 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x57a>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x57a
0827d48a +0x0ae:  test   %al,%al
0827d48c +0x0b0:  je     0827d4c9 <+0xed>
0827d48e +0x0b2:  mov    -0x9c(%ebp),%eax
0827d494 +0x0b8:  mov    %eax,0x14(%esp)
0827d498 +0x0bc:  movl   $"PREMIUM_ERROR : NO PREMIUM ITEM!! : ITEM_ID (%u)",0x10(%esp)
0827d4a0 +0x0c4:  movl   $0x2ff,0xc(%esp)
0827d4a8 +0x0cc:  movl   $&_ZZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_ResultE19__PRETTY_FUNCTION__,0x8(%esp)
0827d4b0 +0x0d4:  movl   $"SpecialItemHandler.cpp",0x4(%esp)
0827d4b8 +0x0dc:  movl   $0x1,(%esp)
0827d4bf +0x0e3:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0827d4c4 +0x0e8:  jmp    0827de44 <+0xa68>
0827d4c9 +0x0ed:  lea    -0xa4(%ebp),%eax
0827d4cf +0x0f3:  mov    %eax,(%esp)
0827d4d2 +0x0f6:  call   0827e46c <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x58e>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x58e
0827d4d7 +0x0fb:  mov    0x4(%eax),%eax
0827d4da +0x0fe:  mov    %eax,-0x2c(%ebp)
0827d4dd +0x101:  lea    -0xa4(%ebp),%eax
0827d4e3 +0x107:  mov    %eax,(%esp)
0827d4e6 +0x10a:  call   0827e46c <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x58e>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x58e
0827d4eb +0x10f:  movzbl 0x8(%eax),%eax
0827d4ef +0x113:  movsbl %al,%eax
0827d4f2 +0x116:  mov    %eax,-0x28(%ebp)
0827d4f5 +0x119:  lea    -0xa4(%ebp),%eax
0827d4fb +0x11f:  mov    %eax,(%esp)
0827d4fe +0x122:  call   0827e46c <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x58e>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x58e
0827d503 +0x127:  movzbl 0x9(%eax),%eax
0827d507 +0x12b:  movzbl %al,%eax
0827d50a +0x12e:  mov    %eax,-0x24(%ebp)
0827d50d +0x131:  lea    -0xa4(%ebp),%eax
0827d513 +0x137:  mov    %eax,(%esp)
0827d516 +0x13a:  call   0827e46c <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x58e>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x58e
0827d51b +0x13f:  mov    0xc(%eax),%eax
0827d51e +0x142:  mov    %eax,-0x20(%ebp)
0827d521 +0x145:  mov    0x10(%ebp),%eax
0827d524 +0x148:  mov    0x20(%eax),%edx
0827d527 +0x14b:  mov    0x10(%ebp),%eax
0827d52a +0x14e:  movzbl 0x1f(%eax),%eax
0827d52e +0x152:  movzbl %al,%eax
0827d531 +0x155:  mov    %edx,0x8(%esp)
0827d535 +0x159:  mov    %eax,0x4(%esp)
0827d539 +0x15d:  mov    -0x28(%ebp),%eax
0827d53c +0x160:  mov    %eax,(%esp)
0827d53f +0x163:  call   0827cff0 <_ZN23premium_helper_function16cal_premium_termEibi>  ; premium_helper_function::cal_premium_term(int, bool, int)
0827d544 +0x168:  mov    %eax,-0x1c(%ebp)
0827d547 +0x16b:  cmpl   $0x5c,-0x2c(%ebp)
0827d54b +0x16f:  ja     0827dc4b <+0x86f>
0827d551 +0x175:  mov    -0x2c(%ebp),%eax
0827d554 +0x178:  shl    $0x2,%eax
0827d557 +0x17b:  mov    &data#7ef3a1b0(.rodata)(%eax),%eax
0827d55d +0x181:  jmp    *%eax
0827d55f +0x183:  movb   $0x1,-0x35(%ebp)
0827d563 +0x187:  jmp    0827dc88 <+0x8ac>
0827d568 +0x18c:  mov    -0x9c(%ebp),%eax
0827d56e +0x192:  cmp    $0xc8,%eax
0827d573 +0x197:  jne    0827d57e <+0x1a2>
0827d575 +0x199:  movl   $0x1e,-0x1c(%ebp)
0827d57c +0x1a0:  jmp    0827d5be <+0x1e2>
0827d57e +0x1a2:  mov    -0x9c(%ebp),%eax
0827d584 +0x1a8:  cmp    $0xcb,%eax
0827d589 +0x1ad:  jne    0827d594 <+0x1b8>
0827d58b +0x1af:  movl   $0x3,-0x1c(%ebp)
0827d592 +0x1b6:  jmp    0827d5be <+0x1e2>
0827d594 +0x1b8:  mov    -0x9c(%ebp),%eax
0827d59a +0x1be:  cmp    $0xcc,%eax
0827d59f +0x1c3:  jne    0827d5aa <+0x1ce>
0827d5a1 +0x1c5:  movl   $0x7,-0x1c(%ebp)
0827d5a8 +0x1cc:  jmp    0827d5be <+0x1e2>
0827d5aa +0x1ce:  mov    -0x9c(%ebp),%eax
0827d5b0 +0x1d4:  cmp    $0xcd,%eax
0827d5b5 +0x1d9:  jne    0827d5be <+0x1e2>
0827d5b7 +0x1db:  movl   $0xe,-0x1c(%ebp)
0827d5be +0x1e2:  mov    -0x40(%ebp),%eax
0827d5c1 +0x1e5:  mov    %eax,(%esp)
0827d5c4 +0x1e8:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0827d5c9 +0x1ed:  mov    %eax,(%esp)
0827d5cc +0x1f0:  call   0822d68a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2d34>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2d34
0827d5d1 +0x1f5:  cmp    $0x2,%eax
0827d5d4 +0x1f8:  setbe  %al
0827d5d7 +0x1fb:  test   %al,%al
0827d5d9 +0x1fd:  je     0827dc72 <+0x896>
0827d5df +0x203:  mov    -0x40(%ebp),%eax
0827d5e2 +0x206:  mov    %eax,(%esp)
0827d5e5 +0x209:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0827d5ea +0x20e:  mov    %eax,(%esp)
0827d5ed +0x211:  call   0822d68a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2d34>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2d34
0827d5f2 +0x216:  mov    %eax,%ebx
0827d5f4 +0x218:  mov    -0x40(%ebp),%eax
0827d5f7 +0x21b:  mov    %eax,(%esp)
0827d5fa +0x21e:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0827d5ff +0x223:  mov    %eax,(%esp)
0827d602 +0x226:  call   081ac72e <_GLOBAL__I__ZN4ARAD26CeraShopPurcahseCountBonus10LoadScriptEv+0x3a>  ; global constructors keyed to ARAD::CeraShopPurcahseCountBonus::LoadScript()+0x3a
0827d607 +0x22b:  add    %eax,%ebx
0827d609 +0x22d:  mov    -0x40(%ebp),%eax
0827d60c +0x230:  mov    %eax,(%esp)
0827d60f +0x233:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0827d614 +0x238:  mov    %eax,(%esp)
0827d617 +0x23b:  call   08110c7a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x18c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x18c
0827d61c +0x240:  lea    (%ebx,%eax,1),%eax
0827d61f +0x243:  mov    %eax,-0x18(%ebp)
0827d622 +0x246:  movl   $0x3,-0x14(%ebp)
0827d629 +0x24d:  mov    -0x14(%ebp),%eax
0827d62c +0x250:  mov    -0x18(%ebp),%edx
0827d62f +0x253:  lea    (%edx,%eax,1),%eax
0827d632 +0x256:  cmp    $&_ZL14gUnicodeBuffer+0xe174,%eax
0827d637 +0x25b:  jle    0827d644 <+0x268>
0827d639 +0x25d:  mov    $&_ZL14gUnicodeBuffer+0xe174,%eax
0827d63e +0x262:  sub    -0x18(%ebp),%eax
0827d641 +0x265:  mov    %eax,-0x14(%ebp)
0827d644 +0x268:  cmpl   $0x0,-0x14(%ebp)
0827d648 +0x26c:  jle    0827dc75 <+0x899>
0827d64e +0x272:  mov    -0x40(%ebp),%eax
0827d651 +0x275:  mov    %eax,(%esp)
0827d654 +0x278:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0827d659 +0x27d:  mov    -0x14(%ebp),%edx
0827d65c +0x280:  mov    %edx,0x4(%esp)
0827d660 +0x284:  mov    %eax,(%esp)
0827d663 +0x287:  call   084ff8b4 <_ZN10CInventory15UpdateDailyCoinEi>  ; CInventory::UpdateDailyCoin(int)
0827d668 +0x28c:  mov    -0x40(%ebp),%eax
0827d66b +0x28f:  mov    %eax,(%esp)
0827d66e +0x292:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0827d673 +0x297:  mov    %eax,(%esp)
0827d676 +0x29a:  call   0822d68a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2d34>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2d34
0827d67b +0x29f:  mov    -0x40(%ebp),%edx
0827d67e +0x2a2:  lea    0x79700(%edx),%ecx
0827d684 +0x2a8:  movl   $0x4,0xc(%esp)
0827d68c +0x2b0:  mov    -0x14(%ebp),%edx
0827d68f +0x2b3:  mov    %edx,0x8(%esp)
0827d693 +0x2b7:  mov    %eax,0x4(%esp)
0827d697 +0x2bb:  mov    %ecx,(%esp)
0827d69a +0x2be:  call   08683b90 <_ZN15cUserHistoryLog7CoinAddEii14eCoinAddReason>  ; cUserHistoryLog::CoinAdd(int, int, eCoinAddReason)
0827d69f +0x2c3:  jmp    0827dc88 <+0x8ac>
0827d6a4 +0x2c8:  call   0848f078 <_ZN8WongWork9CEventMgr22GetPremiumServiceBonusEv>  ; WongWork::CEventMgr::GetPremiumServiceBonus()
0827d6a9 +0x2cd:  mov    -0x1c(%ebp),%edx
0827d6ac +0x2d0:  add    %edx,%eax
0827d6ae +0x2d2:  add    $0x1,%eax
0827d6b1 +0x2d5:  mov    %eax,-0x1c(%ebp)
0827d6b4 +0x2d8:  jmp    0827dc88 <+0x8ac>
0827d6b9 +0x2dd:  movl   $0xd,0x4(%esp)
0827d6c1 +0x2e5:  mov    -0x40(%ebp),%eax
0827d6c4 +0x2e8:  mov    %eax,(%esp)
0827d6c7 +0x2eb:  call   080e600e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x144>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x144
0827d6cc +0x2f0:  xor    $0x1,%eax
0827d6cf +0x2f3:  test   %al,%al
0827d6d1 +0x2f5:  je     0827d6f1 <+0x315>
0827d6d3 +0x2f7:  movl   $0xe,0x4(%esp)
0827d6db +0x2ff:  mov    -0x40(%ebp),%eax
0827d6de +0x302:  mov    %eax,(%esp)
0827d6e1 +0x305:  call   080e600e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x144>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x144
0827d6e6 +0x30a:  test   %al,%al
0827d6e8 +0x30c:  je     0827d6f1 <+0x315>
0827d6ea +0x30e:  mov    $0x1,%eax
0827d6ef +0x313:  jmp    0827d6f6 <+0x31a>
0827d6f1 +0x315:  mov    $0x0,%eax
0827d6f6 +0x31a:  test   %al,%al
0827d6f8 +0x31c:  je     0827dc78 <+0x89c>
0827d6fe +0x322:  mov    -0x40(%ebp),%eax
0827d701 +0x325:  mov    %eax,(%esp)
0827d704 +0x328:  call   0812ce28 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0xa4>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0xa4
0827d709 +0x32d:  movl   $0xe,0x4(%esp)
0827d711 +0x335:  mov    %eax,(%esp)
0827d714 +0x338:  call   086adf52 <_ZNK8WongWork12CUserPremium14GetPremiumInfoEi>  ; WongWork::CUserPremium::GetPremiumInfo(int) const
0827d719 +0x33d:  mov    %eax,-0x10(%ebp)
0827d71c +0x340:  mov    -0x10(%ebp),%eax
0827d71f +0x343:  mov    (%eax),%eax
0827d721 +0x345:  cmp    $0xe,%eax
0827d724 +0x348:  jne    0827dc7b <+0x89f>
0827d72a +0x34e:  mov    -0x10(%ebp),%eax
0827d72d +0x351:  mov    0x8(%eax),%eax
0827d730 +0x354:  mov    %eax,-0x30(%ebp)
0827d733 +0x357:  mov    -0x30(%ebp),%eax
0827d736 +0x35a:  mov    %eax,-0xa0(%ebp)
0827d73c +0x360:  jmp    0827dc88 <+0x8ac>
0827d741 +0x365:  movl   $0xd,0x4(%esp)
0827d749 +0x36d:  mov    -0x40(%ebp),%eax
0827d74c +0x370:  mov    %eax,(%esp)
0827d74f +0x373:  call   080e600e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x144>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x144
0827d754 +0x378:  test   %al,%al
0827d756 +0x37a:  je     0827dc7e <+0x8a2>
0827d75c +0x380:  mov    -0x9c(%ebp),%eax
0827d762 +0x386:  mov    %eax,%ebx
0827d764 +0x388:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0827d769 +0x38d:  mov    0xc(%eax),%eax
0827d76c +0x390:  mov    %ebx,0x4(%esp)
0827d770 +0x394:  mov    %eax,(%esp)
0827d773 +0x397:  call   0817a10c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x18a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x18a
0827d778 +0x39c:  mov    %eax,-0x3c(%ebp)
0827d77b +0x39f:  movl   $0xd,-0x2c(%ebp)
0827d782 +0x3a6:  jmp    0827dc88 <+0x8ac>
0827d787 +0x3ab:  mov    -0x20(%ebp),%ebx
0827d78a +0x3ae:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0827d78f +0x3b3:  mov    0xc(%eax),%eax
0827d792 +0x3b6:  mov    %ebx,0x4(%esp)
0827d796 +0x3ba:  mov    %eax,(%esp)
0827d799 +0x3bd:  call   0817a10c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x18a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x18a
0827d79e +0x3c2:  mov    %eax,-0x3c(%ebp)
0827d7a1 +0x3c5:  movb   $0x1,-0x35(%ebp)
0827d7a5 +0x3c9:  jmp    0827dc88 <+0x8ac>
0827d7aa +0x3ce:  mov    -0x20(%ebp),%ebx
0827d7ad +0x3d1:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0827d7b2 +0x3d6:  mov    0xc(%eax),%eax
0827d7b5 +0x3d9:  mov    %ebx,0x4(%esp)
0827d7b9 +0x3dd:  mov    %eax,(%esp)
0827d7bc +0x3e0:  call   0817a10c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x18a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x18a
0827d7c1 +0x3e5:  mov    %eax,-0x3c(%ebp)
0827d7c4 +0x3e8:  movb   $0x1,-0x35(%ebp)
0827d7c8 +0x3ec:  jmp    0827dc88 <+0x8ac>
0827d7cd +0x3f1:  mov    -0x20(%ebp),%ebx
0827d7d0 +0x3f4:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0827d7d5 +0x3f9:  mov    0xc(%eax),%eax
0827d7d8 +0x3fc:  mov    %ebx,0x4(%esp)
0827d7dc +0x400:  mov    %eax,(%esp)
0827d7df +0x403:  call   0817a10c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x18a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x18a
0827d7e4 +0x408:  mov    %eax,-0x3c(%ebp)
0827d7e7 +0x40b:  movb   $0x1,-0x35(%ebp)
0827d7eb +0x40f:  jmp    0827dc88 <+0x8ac>
0827d7f0 +0x414:  cmpl   $0x0,-0x24(%ebp)
0827d7f4 +0x418:  jne    0827d874 <+0x498>
0827d7f6 +0x41a:  cmpl   $0x0,-0x3c(%ebp)
0827d7fa +0x41e:  je     0827d874 <+0x498>
0827d7fc +0x420:  mov    -0x3c(%ebp),%eax
0827d7ff +0x423:  mov    %eax,0x4(%esp)
0827d803 +0x427:  mov    -0x40(%ebp),%eax
0827d806 +0x42a:  mov    %eax,(%esp)
0827d809 +0x42d:  call   0864d878 <_ZN5CUser17IsRestrictedGoodsEi>  ; CUser::IsRestrictedGoods(int)
0827d80e +0x432:  xor    $0x1,%eax
0827d811 +0x435:  test   %al,%al
0827d813 +0x437:  je     0827d874 <+0x498>
0827d815 +0x439:  mov    -0x3c(%ebp),%eax
0827d818 +0x43c:  mov    %eax,0x4(%esp)
0827d81c +0x440:  mov    -0x40(%ebp),%eax
0827d81f +0x443:  mov    %eax,(%esp)
0827d822 +0x446:  call   0864d84e <_ZN5CUser18SetRestrictedGoodsEi>  ; CUser::SetRestrictedGoods(int)
0827d827 +0x44b:  movl   $0x0,-0xc(%ebp)
0827d82e +0x452:  mov    -0x2c(%ebp),%edx
0827d831 +0x455:  mov    %edx,%eax
0827d833 +0x457:  shl    $0x3,%eax
0827d836 +0x45a:  add    %edx,%eax
0827d838 +0x45c:  shl    $0x5,%eax
0827d83b +0x45f:  mov    &g_SPremiumInfo+0x5c(%eax),%eax
0827d841 +0x465:  cmp    $0x1,%eax
0827d844 +0x468:  jne    0827d854 <+0x478>
0827d846 +0x46a:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0827d84b +0x46f:  mov    0x378(%eax),%eax
0827d851 +0x475:  mov    %eax,-0xc(%ebp)
0827d854 +0x478:  mov    -0xc(%ebp),%eax
0827d857 +0x47b:  mov    %eax,0xc(%esp)
0827d85b +0x47f:  mov    -0x34(%ebp),%eax
0827d85e +0x482:  mov    %eax,0x8(%esp)
0827d862 +0x486:  mov    -0x3c(%ebp),%eax
0827d865 +0x489:  mov    %eax,0x4(%esp)
0827d869 +0x48d:  mov    -0x40(%ebp),%eax
0827d86c +0x490:  mov    %eax,(%esp)
0827d86f +0x493:  call   08325a30 <_ZN8WongWork9CCeraShop15SaveFeaturedIdxEP5CUseriii>  ; WongWork::CCeraShop::SaveFeaturedIdx(CUser*, int, int, int)
0827d874 +0x498:  mov    -0x20(%ebp),%ebx
0827d877 +0x49b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0827d87c +0x4a0:  mov    0xc(%eax),%eax
0827d87f +0x4a3:  mov    %ebx,0x4(%esp)
0827d883 +0x4a7:  mov    %eax,(%esp)
0827d886 +0x4aa:  call   0817a10c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x18a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x18a
0827d88b +0x4af:  mov    %eax,-0x3c(%ebp)
0827d88e +0x4b2:  movb   $0x1,-0x35(%ebp)
0827d892 +0x4b6:  mov    -0x40(%ebp),%eax
0827d895 +0x4b9:  mov    %eax,(%esp)
0827d898 +0x4bc:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0827d89d +0x4c1:  mov    %eax,%esi
0827d89f +0x4c3:  mov    -0x40(%ebp),%eax
0827d8a2 +0x4c6:  mov    %eax,(%esp)
0827d8a5 +0x4c9:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0827d8aa +0x4ce:  mov    %eax,%ebx
0827d8ac +0x4d0:  movl   $0x0,0xc(%esp)
0827d8b4 +0x4d8:  movl   $0x3a5,0x8(%esp)
0827d8bc +0x4e0:  movl   $&_ZZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_ResultE19__PRETTY_FUNCTION__,0x4(%esp)
0827d8c4 +0x4e8:  lea    -0x94(%ebp),%eax
0827d8ca +0x4ee:  mov    %eax,(%esp)
0827d8cd +0x4f1:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0827d8d2 +0x4f6:  mov    %esi,0xc(%esp)
0827d8d6 +0x4fa:  mov    %ebx,0x8(%esp)
0827d8da +0x4fe:  movl   $"ONE_DAY_LETHE : BUY_RESTRICTED_PREMIUM, char(%s), char_no(%d)",0x4(%esp)
0827d8e2 +0x506:  lea    -0x94(%ebp),%eax
0827d8e8 +0x50c:  mov    %eax,(%esp)
0827d8eb +0x50f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0827d8f0 +0x514:  cmpl   $0x0,-0x44(%ebp)
0827d8f4 +0x518:  je     0827dc81 <+0x8a5>
0827d8fa +0x51e:  mov    -0x40(%ebp),%eax
0827d8fd +0x521:  mov    %eax,(%esp)
0827d900 +0x524:  call   0827defa <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x1c>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x1c
0827d905 +0x529:  xor    $0x1,%eax
0827d908 +0x52c:  test   %al,%al
0827d90a +0x52e:  je     0827d940 <+0x564>
0827d90c +0x530:  movl   $0x0,0x8(%esp)
0827d914 +0x538:  mov    -0x40(%ebp),%eax
0827d917 +0x53b:  mov    %eax,0x4(%esp)
0827d91b +0x53f:  mov    -0x44(%ebp),%eax
0827d91e +0x542:  mov    %eax,(%esp)
0827d921 +0x545:  call   085c46e8 <_ZN20CPremiumLetheManager11BackupSkillEP5CUser20ENUM_SKILL_TREE_KIND>  ; CPremiumLetheManager::BackupSkill(CUser*, ENUM_SKILL_TREE_KIND)
0827d926 +0x54a:  movl   $0x1,0x8(%esp)
0827d92e +0x552:  mov    -0x40(%ebp),%eax
0827d931 +0x555:  mov    %eax,0x4(%esp)
0827d935 +0x559:  mov    -0x44(%ebp),%eax
0827d938 +0x55c:  mov    %eax,(%esp)
0827d93b +0x55f:  call   085c46e8 <_ZN20CPremiumLetheManager11BackupSkillEP5CUser20ENUM_SKILL_TREE_KIND>  ; CPremiumLetheManager::BackupSkill(CUser*, ENUM_SKILL_TREE_KIND)
0827d940 +0x564:  mov    -0x40(%ebp),%eax
0827d943 +0x567:  lea    0x79700(%eax),%edx
0827d949 +0x56d:  movl   $0x0,0x8(%esp)
0827d951 +0x575:  mov    -0x40(%ebp),%eax
0827d954 +0x578:  mov    %eax,0x4(%esp)
0827d958 +0x57c:  mov    %edx,(%esp)
0827d95b +0x57f:  call   08686188 <_ZN15cUserHistoryLog15SkillSPInfoSaveEP5CUser22eSkillSPInfoSaveReason>  ; cUserHistoryLog::SkillSPInfoSave(CUser*, eSkillSPInfoSaveReason)
0827d960 +0x584:  mov    -0x40(%ebp),%eax
0827d963 +0x587:  mov    %eax,(%esp)
0827d966 +0x58a:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0827d96b +0x58f:  mov    %eax,%ebx
0827d96d +0x591:  mov    -0x40(%ebp),%eax
0827d970 +0x594:  mov    %eax,(%esp)
0827d973 +0x597:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0827d978 +0x59c:  lea    0x46(%eax),%edx
0827d97b +0x59f:  mov    -0x40(%ebp),%eax
0827d97e +0x5a2:  add    $0x79700,%eax
0827d983 +0x5a7:  movl   $0x0,0x10(%esp)
0827d98b +0x5af:  movl   $0x0,0xc(%esp)
0827d993 +0x5b7:  mov    %ebx,0x8(%esp)
0827d997 +0x5bb:  mov    %edx,0x4(%esp)
0827d99b +0x5bf:  mov    %eax,(%esp)
0827d99e +0x5c2:  call   08685dce <_ZN15cUserHistoryLog9SkillSaveEPK15_Mastered_skillji16eSkillSaveReason>  ; cUserHistoryLog::SkillSave(_Mastered_skill const*, unsigned int, int, eSkillSaveReason)
0827d9a3 +0x5c7:  mov    -0x40(%ebp),%eax
0827d9a6 +0x5ca:  mov    %eax,(%esp)
0827d9a9 +0x5cd:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0827d9ae +0x5d2:  mov    %eax,%ebx
0827d9b0 +0x5d4:  mov    -0x40(%ebp),%eax
0827d9b3 +0x5d7:  mov    %eax,(%esp)
0827d9b6 +0x5da:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0827d9bb +0x5df:  lea    0x1de(%eax),%edx
0827d9c1 +0x5e5:  mov    -0x40(%ebp),%eax
0827d9c4 +0x5e8:  add    $0x79700,%eax
0827d9c9 +0x5ed:  movl   $0x0,0x10(%esp)
0827d9d1 +0x5f5:  movl   $0x1,0xc(%esp)
0827d9d9 +0x5fd:  mov    %ebx,0x8(%esp)
0827d9dd +0x601:  mov    %edx,0x4(%esp)
0827d9e1 +0x605:  mov    %eax,(%esp)
0827d9e4 +0x608:  call   08685dce <_ZN15cUserHistoryLog9SkillSaveEPK15_Mastered_skillji16eSkillSaveReason>  ; cUserHistoryLog::SkillSave(_Mastered_skill const*, unsigned int, int, eSkillSaveReason)
0827d9e9 +0x60d:  jmp    0827dc88 <+0x8ac>
0827d9ee +0x612:  mov    -0x20(%ebp),%ebx
0827d9f1 +0x615:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0827d9f6 +0x61a:  mov    0xc(%eax),%eax
0827d9f9 +0x61d:  mov    %ebx,0x4(%esp)
0827d9fd +0x621:  mov    %eax,(%esp)
0827da00 +0x624:  call   0817a10c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x18a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x18a
0827da05 +0x629:  mov    %eax,-0x3c(%ebp)
0827da08 +0x62c:  movb   $0x1,-0x35(%ebp)
0827da0c +0x630:  mov    -0x40(%ebp),%eax
0827da0f +0x633:  mov    %eax,(%esp)
0827da12 +0x636:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0827da17 +0x63b:  mov    %eax,%esi
0827da19 +0x63d:  mov    -0x40(%ebp),%eax
0827da1c +0x640:  mov    %eax,(%esp)
0827da1f +0x643:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0827da24 +0x648:  mov    %eax,%ebx
0827da26 +0x64a:  movl   $0x0,0xc(%esp)
0827da2e +0x652:  movl   $0x3cb,0x8(%esp)
0827da36 +0x65a:  movl   $&_ZZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_ResultE19__PRETTY_FUNCTION__,0x4(%esp)
0827da3e +0x662:  lea    -0x84(%ebp),%eax
0827da44 +0x668:  mov    %eax,(%esp)
0827da47 +0x66b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0827da4c +0x670:  mov    %esi,0xc(%esp)
0827da50 +0x674:  mov    %ebx,0x8(%esp)
0827da54 +0x678:  movl   $"GROWTH_CONTRACT : BUY_PREMIUM, char(%s), char_no(%d)",0x4(%esp)
0827da5c +0x680:  lea    -0x84(%ebp),%eax
0827da62 +0x686:  mov    %eax,(%esp)
0827da65 +0x689:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0827da6a +0x68e:  jmp    0827dc88 <+0x8ac>
0827da6f +0x693:  mov    -0x20(%ebp),%ebx
0827da72 +0x696:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0827da77 +0x69b:  mov    0xc(%eax),%eax
0827da7a +0x69e:  mov    %ebx,0x4(%esp)
0827da7e +0x6a2:  mov    %eax,(%esp)
0827da81 +0x6a5:  call   0817a10c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x18a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x18a
0827da86 +0x6aa:  mov    %eax,-0x3c(%ebp)
0827da89 +0x6ad:  movb   $0x1,-0x35(%ebp)
0827da8d +0x6b1:  mov    -0x40(%ebp),%eax
0827da90 +0x6b4:  mov    %eax,(%esp)
0827da93 +0x6b7:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0827da98 +0x6bc:  mov    %eax,%esi
0827da9a +0x6be:  mov    -0x40(%ebp),%eax
0827da9d +0x6c1:  mov    %eax,(%esp)
0827daa0 +0x6c4:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0827daa5 +0x6c9:  mov    %eax,%ebx
0827daa7 +0x6cb:  movl   $0x0,0xc(%esp)
0827daaf +0x6d3:  movl   $0x3d3,0x8(%esp)
0827dab7 +0x6db:  movl   $&_ZZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_ResultE19__PRETTY_FUNCTION__,0x4(%esp)
0827dabf +0x6e3:  lea    -0x74(%ebp),%eax
0827dac2 +0x6e6:  mov    %eax,(%esp)
0827dac5 +0x6e9:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0827daca +0x6ee:  mov    %esi,0xc(%esp)
0827dace +0x6f2:  mov    %ebx,0x8(%esp)
0827dad2 +0x6f6:  movl   $"EMOTICON_CONTRACT : BUY_PREMIUM, char(%s), char_no(%d)",0x4(%esp)
0827dada +0x6fe:  lea    -0x74(%ebp),%eax
0827dadd +0x701:  mov    %eax,(%esp)
0827dae0 +0x704:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0827dae5 +0x709:  movl   $0x57,0x4(%esp)
0827daed +0x711:  mov    -0x40(%ebp),%eax
0827daf0 +0x714:  mov    %eax,(%esp)
0827daf3 +0x717:  call   080e600e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x144>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x144
0827daf8 +0x71c:  test   %al,%al
0827dafa +0x71e:  je     0827dc84 <+0x8a8>
0827db00 +0x724:  mov    0x8(%ebp),%eax
0827db03 +0x727:  mov    (%eax),%eax
0827db05 +0x729:  movl   $0x57,0x8(%esp)
0827db0d +0x731:  mov    -0x40(%ebp),%edx
0827db10 +0x734:  mov    %edx,0x4(%esp)
0827db14 +0x738:  mov    %eax,(%esp)
0827db17 +0x73b:  call   08327bb6 <_ZN8WongWork9CCeraShop13_ClosePremiumEP5CUseri>  ; WongWork::CCeraShop::_ClosePremium(CUser*, int)
0827db1c +0x740:  jmp    0827dc88 <+0x8ac>
0827db21 +0x745:  mov    -0x20(%ebp),%ebx
0827db24 +0x748:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0827db29 +0x74d:  mov    0xc(%eax),%eax
0827db2c +0x750:  mov    %ebx,0x4(%esp)
0827db30 +0x754:  mov    %eax,(%esp)
0827db33 +0x757:  call   0817a10c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x18a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x18a
0827db38 +0x75c:  mov    %eax,-0x3c(%ebp)
0827db3b +0x75f:  movb   $0x1,-0x35(%ebp)
0827db3f +0x763:  mov    -0x40(%ebp),%eax
0827db42 +0x766:  mov    %eax,(%esp)
0827db45 +0x769:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0827db4a +0x76e:  mov    %eax,%esi
0827db4c +0x770:  mov    -0x40(%ebp),%eax
0827db4f +0x773:  mov    %eax,(%esp)
0827db52 +0x776:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0827db57 +0x77b:  mov    %eax,%ebx
0827db59 +0x77d:  movl   $0x0,0xc(%esp)
0827db61 +0x785:  movl   $0x3db,0x8(%esp)
0827db69 +0x78d:  movl   $&_ZZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_ResultE19__PRETTY_FUNCTION__,0x4(%esp)
0827db71 +0x795:  lea    -0x64(%ebp),%eax
0827db74 +0x798:  mov    %eax,(%esp)
0827db77 +0x79b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0827db7c +0x7a0:  mov    %esi,0xc(%esp)
0827db80 +0x7a4:  mov    %ebx,0x8(%esp)
0827db84 +0x7a8:  movl   $"EMOTICON_CONTRACT : BUY_PREMIUM, char(%s), char_no(%d)",0x4(%esp)
0827db8c +0x7b0:  lea    -0x64(%ebp),%eax
0827db8f +0x7b3:  mov    %eax,(%esp)
0827db92 +0x7b6:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0827db97 +0x7bb:  movl   $0x53,0x4(%esp)
0827db9f +0x7c3:  mov    -0x40(%ebp),%eax
0827dba2 +0x7c6:  mov    %eax,(%esp)
0827dba5 +0x7c9:  call   080e600e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x144>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x144
0827dbaa +0x7ce:  test   %al,%al
0827dbac +0x7d0:  je     0827dc87 <+0x8ab>
0827dbb2 +0x7d6:  mov    0x8(%ebp),%eax
0827dbb5 +0x7d9:  mov    (%eax),%eax
0827dbb7 +0x7db:  movl   $0x53,0x8(%esp)
0827dbbf +0x7e3:  mov    -0x40(%ebp),%edx
0827dbc2 +0x7e6:  mov    %edx,0x4(%esp)
0827dbc6 +0x7ea:  mov    %eax,(%esp)
0827dbc9 +0x7ed:  call   08327bb6 <_ZN8WongWork9CCeraShop13_ClosePremiumEP5CUseri>  ; WongWork::CCeraShop::_ClosePremium(CUser*, int)
0827dbce +0x7f2:  jmp    0827dc88 <+0x8ac>
0827dbd3 +0x7f7:  mov    -0x20(%ebp),%ebx
0827dbd6 +0x7fa:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0827dbdb +0x7ff:  mov    0xc(%eax),%eax
0827dbde +0x802:  mov    %ebx,0x4(%esp)
0827dbe2 +0x806:  mov    %eax,(%esp)
0827dbe5 +0x809:  call   0817a10c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x18a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x18a
0827dbea +0x80e:  mov    %eax,-0x3c(%ebp)
0827dbed +0x811:  movb   $0x1,-0x35(%ebp)
0827dbf1 +0x815:  mov    -0x40(%ebp),%eax
0827dbf4 +0x818:  mov    %eax,(%esp)
0827dbf7 +0x81b:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0827dbfc +0x820:  mov    %eax,%esi
0827dbfe +0x822:  mov    -0x40(%ebp),%eax
0827dc01 +0x825:  mov    %eax,(%esp)
0827dc04 +0x828:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0827dc09 +0x82d:  mov    %eax,%ebx
0827dc0b +0x82f:  movl   $0x0,0xc(%esp)
0827dc13 +0x837:  movl   $0x3e5,0x8(%esp)
0827dc1b +0x83f:  movl   $&_ZZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_ResultE19__PRETTY_FUNCTION__,0x4(%esp)
0827dc23 +0x847:  lea    -0x54(%ebp),%eax
0827dc26 +0x84a:  mov    %eax,(%esp)
0827dc29 +0x84d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0827dc2e +0x852:  mov    %esi,0xc(%esp)
0827dc32 +0x856:  mov    %ebx,0x8(%esp)
0827dc36 +0x85a:  movl   $"CUBE_CONTRACT : BUY_PREMIUM, char(%s), char_no(%d)",0x4(%esp)
0827dc3e +0x862:  lea    -0x54(%ebp),%eax
0827dc41 +0x865:  mov    %eax,(%esp)
0827dc44 +0x868:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0827dc49 +0x86d:  jmp    0827dc88 <+0x8ac>
0827dc4b +0x86f:  cmpl   $0x0,-0x3c(%ebp)
0827dc4f +0x873:  jne    0827dc88 <+0x8ac>
0827dc51 +0x875:  mov    -0x9c(%ebp),%eax
0827dc57 +0x87b:  mov    %eax,%ebx
0827dc59 +0x87d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0827dc5e +0x882:  mov    0xc(%eax),%eax
0827dc61 +0x885:  mov    %ebx,0x4(%esp)
0827dc65 +0x889:  mov    %eax,(%esp)
0827dc68 +0x88c:  call   0817a10c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x18a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x18a
0827dc6d +0x891:  mov    %eax,-0x3c(%ebp)
0827dc70 +0x894:  jmp    0827dc88 <+0x8ac>
0827dc72 +0x896:  nop
0827dc73 +0x897:  jmp    0827dc88 <+0x8ac>
0827dc75 +0x899:  nop
0827dc76 +0x89a:  jmp    0827dc88 <+0x8ac>
0827dc78 +0x89c:  nop
0827dc79 +0x89d:  jmp    0827dc88 <+0x8ac>
0827dc7b +0x89f:  nop
0827dc7c +0x8a0:  jmp    0827dc88 <+0x8ac>
0827dc7e +0x8a2:  nop
0827dc7f +0x8a3:  jmp    0827dc88 <+0x8ac>
0827dc81 +0x8a5:  nop
0827dc82 +0x8a6:  jmp    0827dc88 <+0x8ac>
0827dc84 +0x8a8:  nop
0827dc85 +0x8a9:  jmp    0827dc88 <+0x8ac>
0827dc87 +0x8ab:  nop
0827dc88 +0x8ac:  cmpl   $0x0,-0x3c(%ebp)
0827dc8c +0x8b0:  je     0827dce1 <+0x905>
0827dc8e +0x8b2:  mov    -0x3c(%ebp),%eax
0827dc91 +0x8b5:  mov    %eax,0x4(%esp)
0827dc95 +0x8b9:  mov    -0x40(%ebp),%eax
0827dc98 +0x8bc:  mov    %eax,(%esp)
0827dc9b +0x8bf:  call   0864d878 <_ZN5CUser17IsRestrictedGoodsEi>  ; CUser::IsRestrictedGoods(int)
0827dca0 +0x8c4:  xor    $0x1,%eax
0827dca3 +0x8c7:  test   %al,%al
0827dca5 +0x8c9:  je     0827dce1 <+0x905>
0827dca7 +0x8cb:  mov    -0x3c(%ebp),%eax
0827dcaa +0x8ce:  mov    %eax,0x4(%esp)
0827dcae +0x8d2:  mov    -0x40(%ebp),%eax
0827dcb1 +0x8d5:  mov    %eax,(%esp)
0827dcb4 +0x8d8:  call   0864d84e <_ZN5CUser18SetRestrictedGoodsEi>  ; CUser::SetRestrictedGoods(int)
0827dcb9 +0x8dd:  mov    -0x2c(%ebp),%eax
0827dcbc +0x8e0:  mov    %eax,(%esp)
0827dcbf +0x8e3:  call   0827d0f5 <_ZN23premium_helper_function17get_target_serverEi>  ; premium_helper_function::get_target_server(int)
0827dcc4 +0x8e8:  mov    %eax,0xc(%esp)
0827dcc8 +0x8ec:  mov    -0x34(%ebp),%eax
0827dccb +0x8ef:  mov    %eax,0x8(%esp)
0827dccf +0x8f3:  mov    -0x3c(%ebp),%eax
0827dcd2 +0x8f6:  mov    %eax,0x4(%esp)
0827dcd6 +0x8fa:  mov    -0x40(%ebp),%eax
0827dcd9 +0x8fd:  mov    %eax,(%esp)
0827dcdc +0x900:  call   08325a30 <_ZN8WongWork9CCeraShop15SaveFeaturedIdxEP5CUseriii>  ; WongWork::CCeraShop::SaveFeaturedIdx(CUser*, int, int, int)
0827dce1 +0x905:  mov    -0x2c(%ebp),%edx
0827dce4 +0x908:  mov    %edx,%eax
0827dce6 +0x90a:  shl    $0x3,%eax
0827dce9 +0x90d:  add    %edx,%eax
0827dceb +0x90f:  shl    $0x5,%eax
0827dcee +0x912:  movzbl &g_SPremiumInfo+0x40(%eax),%eax
0827dcf5 +0x919:  test   %al,%al
0827dcf7 +0x91b:  je     0827dd12 <+0x936>
0827dcf9 +0x91d:  mov    -0x40(%ebp),%eax
0827dcfc +0x920:  mov    %eax,(%esp)
0827dcff +0x923:  call   08656500 <_ZN5CUser12CheckFatigueEv>  ; CUser::CheckFatigue()
0827dd04 +0x928:  xor    $0x1,%eax
0827dd07 +0x92b:  test   %al,%al
0827dd09 +0x92d:  je     0827dd12 <+0x936>
0827dd0b +0x92f:  mov    $0x1,%eax
0827dd10 +0x934:  jmp    0827dd17 <+0x93b>
0827dd12 +0x936:  mov    $0x0,%eax
0827dd17 +0x93b:  test   %al,%al
0827dd19 +0x93d:  je     0827dd2e <+0x952>
0827dd1b +0x93f:  movl   $0x1,0x4(%esp)
0827dd23 +0x947:  mov    -0x40(%ebp),%eax
0827dd26 +0x94a:  mov    %eax,(%esp)
0827dd29 +0x94d:  call   0864f7fe <_ZN5CUser20gainCurCharacFatigueEi>  ; CUser::gainCurCharacFatigue(int)
0827dd2e +0x952:  movl   $0x0,-0xa8(%ebp)
0827dd38 +0x95c:  movzbl -0x35(%ebp),%eax
0827dd3c +0x960:  mov    -0x1c(%ebp),%edx
0827dd3f +0x963:  mov    %edx,0x18(%esp)
0827dd43 +0x967:  mov    %eax,0x14(%esp)
0827dd47 +0x96b:  mov    -0x2c(%ebp),%eax
0827dd4a +0x96e:  mov    %eax,0x10(%esp)
0827dd4e +0x972:  mov    -0x30(%ebp),%eax
0827dd51 +0x975:  mov    %eax,0xc(%esp)
0827dd55 +0x979:  lea    -0xa8(%ebp),%eax
0827dd5b +0x97f:  mov    %eax,0x8(%esp)
0827dd5f +0x983:  lea    -0xa0(%ebp),%eax
0827dd65 +0x989:  mov    %eax,0x4(%esp)
0827dd69 +0x98d:  mov    -0x40(%ebp),%eax
0827dd6c +0x990:  mov    %eax,(%esp)
0827dd6f +0x993:  call   0827d024 <_ZN23premium_helper_function12cal_end_timeEP5CUserRlS2_libi>  ; premium_helper_function::cal_end_time(CUser*, long&, long&, long, int, bool, int)
0827dd74 +0x998:  mov    -0xa8(%ebp),%edx
0827dd7a +0x99e:  mov    -0xa0(%ebp),%eax
0827dd80 +0x9a4:  mov    -0x3c(%ebp),%ecx
0827dd83 +0x9a7:  mov    %ecx,0x10(%esp)
0827dd87 +0x9ab:  mov    %edx,0xc(%esp)
0827dd8b +0x9af:  mov    %eax,0x8(%esp)
0827dd8f +0x9b3:  mov    -0x2c(%ebp),%eax
0827dd92 +0x9b6:  mov    %eax,0x4(%esp)
0827dd96 +0x9ba:  mov    -0x40(%ebp),%eax
0827dd99 +0x9bd:  mov    %eax,(%esp)
0827dd9c +0x9c0:  call   0827d127 <_ZN23premium_helper_function7send_dbEP5CUserilli>  ; premium_helper_function::send_db(CUser*, int, long, long, int)
0827dda1 +0x9c5:  mov    -0xa8(%ebp),%ecx
0827dda7 +0x9cb:  mov    -0xa0(%ebp),%edx
0827ddad +0x9d1:  mov    -0x2c(%ebp),%eax
0827ddb0 +0x9d4:  movl   $0x1,0x14(%esp)
0827ddb8 +0x9dc:  mov    -0x3c(%ebp),%ebx
0827ddbb +0x9df:  mov    %ebx,0x10(%esp)
0827ddbf +0x9e3:  mov    %ecx,0xc(%esp)
0827ddc3 +0x9e7:  mov    %edx,0x8(%esp)
0827ddc7 +0x9eb:  mov    %eax,0x4(%esp)
0827ddcb +0x9ef:  mov    -0x40(%ebp),%eax
0827ddce +0x9f2:  mov    %eax,(%esp)
0827ddd1 +0x9f5:  call   086af7e8 <_ZN8WongWork14CHandlePremium20handleSetUserPremiumEP5CUser17ENUM_PREMIUM_TYPEllib>  ; WongWork::CHandlePremium::handleSetUserPremium(CUser*, ENUM_PREMIUM_TYPE, long, long, int, bool)
0827ddd6 +0x9fa:  mov    -0x2c(%ebp),%eax
0827ddd9 +0x9fd:  mov    %eax,0x4(%esp)
0827dddd +0xa01:  mov    -0x40(%ebp),%eax
0827dde0 +0xa04:  mov    %eax,(%esp)
0827dde3 +0xa07:  call   086afc32 <_ZN8WongWork14CHandlePremium19handlePremiumEffectEP5CUser17ENUM_PREMIUM_TYPE>  ; WongWork::CHandlePremium::handlePremiumEffect(CUser*, ENUM_PREMIUM_TYPE)
0827dde8 +0xa0c:  mov    -0x2c(%ebp),%eax
0827ddeb +0xa0f:  mov    %eax,0x4(%esp)
0827ddef +0xa13:  mov    -0x40(%ebp),%eax
0827ddf2 +0xa16:  mov    %eax,(%esp)
0827ddf5 +0xa19:  call   0827d29d <_ZN23premium_helper_function9is_notifyEP5CUseri>  ; premium_helper_function::is_notify(CUser*, int)
0827ddfa +0xa1e:  xor    $0x1,%eax
0827ddfd +0xa21:  test   %al,%al
0827ddff +0xa23:  je     0827de32 <+0xa56>
0827de01 +0xa25:  mov    -0xa8(%ebp),%eax
0827de07 +0xa2b:  mov    %eax,%edx
0827de09 +0xa2d:  sub    -0x30(%ebp),%edx
0827de0c +0xa30:  mov    0x8(%ebp),%eax
0827de0f +0xa33:  mov    (%eax),%eax
0827de11 +0xa35:  mov    %edx,0x10(%esp)
0827de15 +0xa39:  mov    -0x2c(%ebp),%edx
0827de18 +0xa3c:  mov    %edx,0xc(%esp)
0827de1c +0xa40:  mov    0xc(%ebp),%edx
0827de1f +0xa43:  mov    %edx,0x8(%esp)
0827de23 +0xa47:  mov    -0x40(%ebp),%edx
0827de26 +0xa4a:  mov    %edx,0x4(%esp)
0827de2a +0xa4e:  mov    %eax,(%esp)
0827de2d +0xa51:  call   083277dc <_ZN8WongWork9CCeraShop18_sendPremiumPacketEP5CUseriii>  ; WongWork::CCeraShop::_sendPremiumPacket(CUser*, int, int, int)
0827de32 +0xa56:  mov    -0x2c(%ebp),%eax
0827de35 +0xa59:  mov    %eax,0x4(%esp)
0827de39 +0xa5d:  mov    -0x40(%ebp),%eax
0827de3c +0xa60:  mov    %eax,(%esp)
0827de3f +0xa63:  call   0827d2df <_ZN23premium_helper_function9write_logEP5CUseri>  ; premium_helper_function::write_log(CUser*, int)
0827de44 +0xa68:  lea    -0x8(%ebp),%esp
0827de47 +0xa6b:  add    $0x0,%esp
0827de4a +0xa6e:  pop    %ebx
0827de4b +0xa6f:  pop    %esi
0827de4c +0xa70:  pop    %ebp
0827de4d +0xa71:  ret
```

## 反编译 C

```c
// SpecialItemHandler::respond_special_item_premium @ 0x827d3dc

/* SpecialItemHandler::respond_special_item_premium(int, STSpecailItem_Param const&,
   STSpecailItem_Result&) */

void SpecialItemHandler::respond_special_item_premium
               (int param_1,STSpecailItem_Param *param_2,STSpecailItem_Result *param_3)

{
  bool bVar1;
  char cVar2;
  CGameManager *this;
  int iVar3;
  CInventory *pCVar4;
  uint uVar5;
  CUserPremium *this_00;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  long local_ac;
  _Rb_tree_iterator<std::pair<unsigned_long_const,STPremiumItemData>> local_a8 [4];
  int local_a4;
  int local_a0;
  map<unsigned_long,STPremiumItemData,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,STPremiumItemData>>>
  local_9c [4];
  cMyTrace local_98 [16];
  cMyTrace local_88 [16];
  cMyTrace local_78 [16];
  cMyTrace local_68 [16];
  cMyTrace local_58 [16];
  CPremiumLetheManager *local_48;
  CUser *local_44;
  int local_40;
  STSpecailItem_Result local_39;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int *local_14;
  int local_10;
  
  this = (CGameManager *)G_CGameManager();
  local_48 = (CPremiumLetheManager *)CGameManager::GetPremiumLetheManager(this);
  local_44 = *(CUser **)param_3;
  local_a0 = *(int *)(param_3 + 4);
  local_40 = *(int *)(param_3 + 0x14);
  local_39 = param_3[0x1c];
  local_a4 = *(int *)(param_3 + 0x18);
  local_38 = local_a4;
  local_34 = local_a4;
  std::
  map<unsigned_long,STPremiumItemData,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,STPremiumItemData>>>
  ::find((ulong *)local_a8);
  std::
  map<unsigned_long,STPremiumItemData,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,STPremiumItemData>>>
  ::end(local_9c);
  cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_long_const,STPremiumItemData>>::operator==
                    (local_a8,(_Rb_tree_iterator *)local_9c);
  if (cVar2 == '\0') {
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_long_const,STPremiumItemData>>::operator->
                      (local_a8);
    local_30 = *(int *)(iVar3 + 4);
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_long_const,STPremiumItemData>>::operator->
                      (local_a8);
    local_2c = (int)*(char *)(iVar3 + 8);
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_long_const,STPremiumItemData>>::operator->
                      (local_a8);
    local_28 = (uint)*(byte *)(iVar3 + 9);
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_long_const,STPremiumItemData>>::operator->
                      (local_a8);
    local_24 = *(int *)(iVar3 + 0xc);
    local_20 = premium_helper_function::cal_premium_term
                         (local_2c,(bool)param_3[0x1f],*(int *)(param_3 + 0x20));
    iVar8 = local_24;
    iVar3 = local_a0;
    switch(local_30) {
    default:
      if (local_40 == 0) {
        iVar8 = G_CDataManager();
        local_40 = CItemList::GetRestrictCode(*(CItemList **)(iVar8 + 0xc),iVar3);
      }
      break;
    case 1:
    case 3:
      iVar3 = WongWork::CEventMgr::GetPremiumServiceBonus();
      local_20 = iVar3 + local_20 + 1;
      break;
    case 8:
      local_39 = (STSpecailItem_Result)0x1;
      break;
    case 0xd:
      cVar2 = CUser::isAffectedPremium(local_44,0xd);
      if ((cVar2 == '\x01') || (cVar2 = CUser::isAffectedPremium(local_44,0xe), cVar2 == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        this_00 = (CUserPremium *)CUser::GetPremiumInfo(local_44);
        local_14 = (int *)WongWork::CUserPremium::GetPremiumInfo(this_00,0xe);
        if (*local_14 == 0xe) {
          local_a4 = local_14[2];
          local_34 = local_a4;
        }
      }
      break;
    case 0xe:
      cVar2 = CUser::isAffectedPremium(local_44,0xd);
      iVar3 = local_a0;
      if (cVar2 != '\0') {
        iVar8 = G_CDataManager();
        local_40 = CItemList::GetRestrictCode(*(CItemList **)(iVar8 + 0xc),iVar3);
        local_30 = 0xd;
      }
      break;
    case 0xf:
      if (local_a0 == 200) {
        local_20 = 0x1e;
      }
      else if (local_a0 == 0xcb) {
        local_20 = 3;
      }
      else if (local_a0 == 0xcc) {
        local_20 = 7;
      }
      else if (local_a0 == 0xcd) {
        local_20 = 0xe;
      }
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)local_44);
      uVar5 = CInventory::GetCoin(pCVar4);
      if (uVar5 < 3) {
        pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)local_44);
        iVar3 = CInventory::GetCoin(pCVar4);
        pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)local_44);
        iVar8 = CInventory::GetPayCoin(pCVar4);
        pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)local_44);
        local_1c = CInventory::GetEventCoin(pCVar4);
        local_1c = iVar3 + iVar8 + local_1c;
        local_18 = 3;
        if (100000 < local_1c + 3) {
          local_18 = 100000 - local_1c;
        }
        if (0 < local_18) {
          pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)local_44);
          CInventory::UpdateDailyCoin(pCVar4,local_18);
          pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)local_44);
          uVar6 = CInventory::GetCoin(pCVar4);
          cUserHistoryLog::CoinAdd((cUserHistoryLog *)(local_44 + 0x79700),uVar6,local_18,4);
        }
      }
      break;
    case 0x16:
      iVar3 = G_CDataManager();
      local_40 = CItemList::GetRestrictCode(*(CItemList **)(iVar3 + 0xc),iVar8);
      local_39 = (STSpecailItem_Result)0x1;
      break;
    case 0x1b:
      iVar3 = G_CDataManager();
      local_40 = CItemList::GetRestrictCode(*(CItemList **)(iVar3 + 0xc),iVar8);
      local_39 = (STSpecailItem_Result)0x1;
      break;
    case 0x1d:
      iVar3 = G_CDataManager();
      local_40 = CItemList::GetRestrictCode(*(CItemList **)(iVar3 + 0xc),iVar8);
      local_39 = (STSpecailItem_Result)0x1;
      break;
    case 0x21:
      if (((local_28 == 0) && (local_40 != 0)) &&
         (cVar2 = CUser::IsRestrictedGoods(local_44,local_40), cVar2 != '\x01')) {
        CUser::SetRestrictedGoods(local_44,local_40);
        local_10 = 0;
        if (*(int *)(g_SPremiumInfo + local_30 * 0x120 + 0x5c) == 1) {
          iVar3 = G_CEnvironment();
          local_10 = *(int *)(iVar3 + 0x378);
        }
        WongWork::CCeraShop::SaveFeaturedIdx(local_44,local_40,local_38,local_10);
      }
      iVar3 = local_24;
      iVar8 = G_CDataManager();
      local_40 = CItemList::GetRestrictCode(*(CItemList **)(iVar8 + 0xc),iVar3);
      local_39 = (STSpecailItem_Result)0x1;
      uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)local_44);
      uVar7 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)local_44);
      cMyTrace::cMyTrace(local_98,
                         "void SpecialItemHandler::respond_special_item_premium(int, const STSpecailItem_Param&, STSpecailItem_Result&)"
                         ,0x3a5,0);
      cMyTrace::operator()
                (local_98,"ONE_DAY_LETHE : BUY_RESTRICTED_PREMIUM, char(%s), char_no(%d)",uVar7,
                 uVar6);
      if (local_48 != (CPremiumLetheManager *)0x0) {
        cVar2 = CUserCharacInfo::IsEndLetheAtLogin((CUserCharacInfo *)local_44);
        if (cVar2 != '\x01') {
          CPremiumLetheManager::BackupSkill(local_48,local_44,0);
          CPremiumLetheManager::BackupSkill(local_48,local_44,1);
        }
        cUserHistoryLog::SkillSPInfoSave((cUserHistoryLog *)(local_44 + 0x79700),local_44,0);
        uVar6 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)local_44);
        iVar3 = CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)local_44);
        cUserHistoryLog::SkillSave((cUserHistoryLog *)(local_44 + 0x79700),iVar3 + 0x46,uVar6,0,0);
        uVar6 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)local_44);
        iVar3 = CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)local_44);
        cUserHistoryLog::SkillSave((cUserHistoryLog *)(local_44 + 0x79700),iVar3 + 0x1de,uVar6,1,0);
      }
      break;
    case 0x4f:
      iVar3 = G_CDataManager();
      local_40 = CItemList::GetRestrictCode(*(CItemList **)(iVar3 + 0xc),iVar8);
      local_39 = (STSpecailItem_Result)0x1;
      uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)local_44);
      uVar7 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)local_44);
      cMyTrace::cMyTrace(local_88,
                         "void SpecialItemHandler::respond_special_item_premium(int, const STSpecailItem_Param&, STSpecailItem_Result&)"
                         ,0x3cb,0);
      cMyTrace::operator()
                (local_88,"GROWTH_CONTRACT : BUY_PREMIUM, char(%s), char_no(%d)",uVar7,uVar6);
      break;
    case 0x53:
      iVar3 = G_CDataManager();
      local_40 = CItemList::GetRestrictCode(*(CItemList **)(iVar3 + 0xc),iVar8);
      local_39 = (STSpecailItem_Result)0x1;
      uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)local_44);
      uVar7 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)local_44);
      cMyTrace::cMyTrace(local_78,
                         "void SpecialItemHandler::respond_special_item_premium(int, const STSpecailItem_Param&, STSpecailItem_Result&)"
                         ,0x3d3,0);
      cMyTrace::operator()
                (local_78,"EMOTICON_CONTRACT : BUY_PREMIUM, char(%s), char_no(%d)",uVar7,uVar6);
      cVar2 = CUser::isAffectedPremium(local_44,0x57);
      if (cVar2 != '\0') {
        WongWork::CCeraShop::_ClosePremium(*(CCeraShop **)param_1,local_44,0x57);
      }
      break;
    case 0x57:
      iVar3 = G_CDataManager();
      local_40 = CItemList::GetRestrictCode(*(CItemList **)(iVar3 + 0xc),iVar8);
      local_39 = (STSpecailItem_Result)0x1;
      uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)local_44);
      uVar7 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)local_44);
      cMyTrace::cMyTrace(local_68,
                         "void SpecialItemHandler::respond_special_item_premium(int, const STSpecailItem_Param&, STSpecailItem_Result&)"
                         ,0x3db,0);
      cMyTrace::operator()
                (local_68,"EMOTICON_CONTRACT : BUY_PREMIUM, char(%s), char_no(%d)",uVar7,uVar6);
      cVar2 = CUser::isAffectedPremium(local_44,0x53);
      if (cVar2 != '\0') {
        WongWork::CCeraShop::_ClosePremium(*(CCeraShop **)param_1,local_44,0x53);
      }
      break;
    case 0x5c:
      iVar3 = G_CDataManager();
      local_40 = CItemList::GetRestrictCode(*(CItemList **)(iVar3 + 0xc),iVar8);
      local_39 = (STSpecailItem_Result)0x1;
      uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)local_44);
      uVar7 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)local_44);
      cMyTrace::cMyTrace(local_58,
                         "void SpecialItemHandler::respond_special_item_premium(int, const STSpecailItem_Param&, STSpecailItem_Result&)"
                         ,0x3e5,0);
      cMyTrace::operator()
                (local_58,"CUBE_CONTRACT : BUY_PREMIUM, char(%s), char_no(%d)",uVar7,uVar6);
    }
    if ((local_40 != 0) && (cVar2 = CUser::IsRestrictedGoods(local_44,local_40), cVar2 != '\x01')) {
      CUser::SetRestrictedGoods(local_44,local_40);
      iVar3 = premium_helper_function::get_target_server(local_30);
      WongWork::CCeraShop::SaveFeaturedIdx(local_44,local_40,local_38,iVar3);
    }
    if ((g_SPremiumInfo[local_30 * 0x120 + 0x40] == '\0') ||
       (cVar2 = CUser::CheckFatigue(local_44), cVar2 == '\x01')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      CUser::gainCurCharacFatigue(local_44,1);
    }
    local_ac = 0;
    premium_helper_function::cal_end_time
              (local_44,&local_a4,&local_ac,local_34,local_30,(bool)local_39,local_20);
    premium_helper_function::send_db(local_44,local_30,local_a4,local_ac,local_40);
    WongWork::CHandlePremium::handleSetUserPremium(local_44,local_30,local_a4,local_ac,local_40,1);
    WongWork::CHandlePremium::handlePremiumEffect(local_44,local_30);
    cVar2 = premium_helper_function::is_notify(local_44,local_30);
    if (cVar2 != '\x01') {
      WongWork::CCeraShop::_sendPremiumPacket
                (*(CCeraShop **)param_1,local_44,(int)param_2,local_30,local_ac - local_34);
    }
    premium_helper_function::write_log(local_44,local_30);
  }
  else {
    LogManager::logFormat
              (1,"SpecialItemHandler.cpp",
               "void SpecialItemHandler::respond_special_item_premium(int, const STSpecailItem_Param&, STSpecailItem_Result&)"
               ,0x2ff,"PREMIUM_ERROR : NO PREMIUM ITEM!! : ITEM_ID (%u)",local_a0);
  }
  return;
}
```
