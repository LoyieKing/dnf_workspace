# giveLotteryCountItem

`_ZN5CUser20giveLotteryCountItemEib`

`CUser::giveLotteryCountItem(int, bool)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0869154a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0869154a  _ZN5CUser20giveLotteryCountItemEib
#           CUser::giveLotteryCountItem(int, bool)
# range [0x0869154a, 0x08691bad]
0869154a +0x000:  push   %ebp
0869154b +0x001:  mov    %esp,%ebp
0869154d +0x003:  push   %edi
0869154e +0x004:  push   %esi
0869154f +0x005:  push   %ebx
08691550 +0x006:  sub    $0x1fc,%esp
08691556 +0x00c:  mov    0x10(%ebp),%eax
08691559 +0x00f:  mov    %al,-0x1ac(%ebp)
0869155f +0x015:  mov    0x8(%ebp),%eax
08691562 +0x018:  mov    %eax,(%esp)
08691565 +0x01b:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0869156a +0x020:  test   %eax,%eax
0869156c +0x022:  sete   %al
0869156f +0x025:  test   %al,%al
08691571 +0x027:  je     086915e3 <+0x99>
08691573 +0x029:  cmpb   $0x0,-0x1ac(%ebp)
0869157a +0x030:  je     08691583 <+0x39>
0869157c +0x032:  mov    $0x1,%ebx
08691581 +0x037:  jmp    08691588 <+0x3e>
08691583 +0x039:  mov    $0x0,%ebx
08691588 +0x03e:  mov    0x8(%ebp),%eax
0869158b +0x041:  mov    %eax,(%esp)
0869158e +0x044:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08691593 +0x049:  movl   $0x0,0x4(%esp)
0869159b +0x051:  mov    %eax,(%esp)
0869159e +0x054:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
086915a3 +0x059:  mov    %ebx,0x1c(%esp)
086915a7 +0x05d:  mov    0xc(%ebp),%edx
086915aa +0x060:  mov    %edx,0x18(%esp)
086915ae +0x064:  mov    %eax,0x14(%esp)
086915b2 +0x068:  movl   $"giveLotteryCountItem curchar = null id(%s) item_no(%u) match(%d)",0x10(%esp)
086915ba +0x070:  movl   $0xb45f,0xc(%esp)
086915c2 +0x078:  movl   $&_ZZN5CUser20giveLotteryCountItemEibE19__PRETTY_FUNCTION__,0x8(%esp)
086915ca +0x080:  movl   $"user.cpp",0x4(%esp)
086915d2 +0x088:  movl   $0x1,(%esp)
086915d9 +0x08f:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
086915de +0x094:  jmp    08691ba3 <+0x659>
086915e3 +0x099:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086915e8 +0x09e:  mov    0xc(%ebp),%edx
086915eb +0x0a1:  mov    %edx,0x4(%esp)
086915ef +0x0a5:  mov    %eax,(%esp)
086915f2 +0x0a8:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
086915f7 +0x0ad:  mov    %eax,-0x38(%ebp)
086915fa +0x0b0:  cmpl   $0x0,-0x38(%ebp)
086915fe +0x0b4:  je     08691b9f <+0x655>
08691604 +0x0ba:  mov    -0x38(%ebp),%eax
08691607 +0x0bd:  mov    %eax,0x8(%esp)
0869160b +0x0c1:  movl   $0x36,0x4(%esp)
08691613 +0x0c9:  mov    0x8(%ebp),%eax
08691616 +0x0cc:  mov    %eax,(%esp)
08691619 +0x0cf:  call   0868f60e <_ZN5CUser26verifyStackableItemProcessEN15StackableAction4TypeEPK5CItem>  ; CUser::verifyStackableItemProcess(StackableAction::Type, CItem const*)
0869161e +0x0d4:  xor    $0x1,%eax
08691621 +0x0d7:  test   %al,%al
08691623 +0x0d9:  jne    08691ba2 <+0x658>
08691629 +0x0df:  lea    -0x50(%ebp),%eax
0869162c +0x0e2:  mov    %eax,(%esp)
0869162f +0x0e5:  call   0814ac92 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa31>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa31
08691634 +0x0ea:  mov    -0x38(%ebp),%eax
08691637 +0x0ed:  mov    %eax,-0x34(%ebp)
0869163a +0x0f0:  movl   $0x0,-0x30(%ebp)
08691641 +0x0f7:  jmp    0869195a <+0x410>
08691646 +0x0fc:  lea    -0x9a(%ebp),%eax
0869164c +0x102:  mov    %eax,(%esp)
0869164f +0x105:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08691654 +0x10a:  mov    -0x30(%ebp),%eax
08691657 +0x10d:  addl   $0x1,-0x30(%ebp)
0869165b +0x111:  mov    -0x34(%ebp),%edx
0869165e +0x114:  add    $0x3a0,%edx
08691664 +0x11a:  mov    %eax,0x4(%esp)
08691668 +0x11e:  mov    %edx,(%esp)
0869166b +0x121:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
08691670 +0x126:  mov    (%eax),%eax
08691672 +0x128:  mov    %eax,-0x98(%ebp)
08691678 +0x12e:  mov    -0x30(%ebp),%eax
0869167b +0x131:  addl   $0x1,-0x30(%ebp)
0869167f +0x135:  mov    -0x34(%ebp),%edx
08691682 +0x138:  add    $0x3a0,%edx
08691688 +0x13e:  mov    %eax,0x4(%esp)
0869168c +0x142:  mov    %edx,(%esp)
0869168f +0x145:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
08691694 +0x14a:  mov    (%eax),%eax
08691696 +0x14c:  mov    %eax,-0x93(%ebp)
0869169c +0x152:  lea    -0x9a(%ebp),%eax
086916a2 +0x158:  mov    %eax,0x4(%esp)
086916a6 +0x15c:  lea    -0x50(%ebp),%eax
086916a9 +0x15f:  mov    %eax,(%esp)
086916ac +0x162:  call   08237262 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc90c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc90c
086916b1 +0x167:  mov    -0x98(%ebp),%eax
086916b7 +0x16d:  cmp    $0x1,%eax
086916ba +0x170:  jne    08691756 <+0x20c>
086916c0 +0x176:  mov    -0x93(%ebp),%eax
086916c6 +0x17c:  test   %eax,%eax
086916c8 +0x17e:  js     08691756 <+0x20c>
086916ce +0x184:  mov    0x8(%ebp),%eax
086916d1 +0x187:  mov    %eax,(%esp)
086916d4 +0x18a:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
086916d9 +0x18f:  mov    %eax,(%esp)
086916dc +0x192:  call   08110c7a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x18c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x18c
086916e1 +0x197:  mov    -0x93(%ebp),%edx
086916e7 +0x19d:  lea    (%eax,%edx,1),%ebx
086916ea +0x1a0:  mov    0x8(%ebp),%eax
086916ed +0x1a3:  mov    %eax,(%esp)
086916f0 +0x1a6:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
086916f5 +0x1ab:  mov    %ebx,0x4(%esp)
086916f9 +0x1af:  mov    %eax,(%esp)
086916fc +0x1b2:  call   08110c86 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x198>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x198
08691701 +0x1b7:  mov    -0x93(%ebp),%ebx
08691707 +0x1bd:  mov    0x8(%ebp),%eax
0869170a +0x1c0:  mov    %eax,(%esp)
0869170d +0x1c3:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08691712 +0x1c8:  mov    %eax,(%esp)
08691715 +0x1cb:  call   08110c7a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x18c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x18c
0869171a +0x1d0:  mov    0x8(%ebp),%edx
0869171d +0x1d3:  add    $0x79700,%edx
08691723 +0x1d9:  movl   $0x2,0xc(%esp)
0869172b +0x1e1:  mov    %ebx,0x8(%esp)
0869172f +0x1e5:  mov    %eax,0x4(%esp)
08691733 +0x1e9:  mov    %edx,(%esp)
08691736 +0x1ec:  call   08683c58 <_ZN15cUserHistoryLog12EventCoinAddEii14eCoinAddReason>  ; cUserHistoryLog::EventCoinAdd(int, int, eCoinAddReason)
0869173b +0x1f1:  mov    0x8(%ebp),%eax
0869173e +0x1f4:  mov    %eax,(%esp)
08691741 +0x1f7:  call   086504d8 <_ZN5CUser13SaveMoneyCoinEv>  ; CUser::SaveMoneyCoin()
08691746 +0x1fc:  mov    0x8(%ebp),%eax
08691749 +0x1ff:  mov    %eax,(%esp)
0869174c +0x202:  call   08656808 <_ZN5CUser8SendCoinEv>  ; CUser::SendCoin()
08691751 +0x207:  jmp    0869195a <+0x410>
08691756 +0x20c:  mov    -0x93(%ebp),%ebx
0869175c +0x212:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08691761 +0x217:  mov    0xc(%eax),%eax
08691764 +0x21a:  mov    %ebx,0xc(%esp)
08691768 +0x21e:  lea    -0x9a(%ebp),%edx
0869176e +0x224:  mov    %edx,0x8(%esp)
08691772 +0x228:  movl   $0x2,0x4(%esp)
0869177a +0x230:  mov    %eax,(%esp)
0869177d +0x233:  call   08511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>  ; CItemList::create_item(ENUM_ITEM_CREATE_TYPE, Inven_Item&, int)
08691782 +0x238:  mov    -0x98(%ebp),%eax
08691788 +0x23e:  test   %eax,%eax
0869178a +0x240:  jne    0869179e <+0x254>
0869178c +0x242:  lea    -0x9a(%ebp),%eax
08691792 +0x248:  mov    %eax,(%esp)
08691795 +0x24b:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0869179a +0x250:  test   %eax,%eax
0869179c +0x252:  je     086917a5 <+0x25b>
0869179e +0x254:  mov    $0x1,%eax
086917a3 +0x259:  jmp    086917aa <+0x260>
086917a5 +0x25b:  mov    $0x0,%eax
086917aa +0x260:  test   %al,%al
086917ac +0x262:  je     0869195a <+0x410>
086917b2 +0x268:  movl   $0xffffffff,-0x2c(%ebp)
086917b9 +0x26f:  mov    0x8(%ebp),%eax
086917bc +0x272:  mov    %eax,(%esp)
086917bf +0x275:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
086917c4 +0x27a:  movl   $0x1,0x4c(%esp)
086917cc +0x282:  movl   $0x1,0x48(%esp)
086917d4 +0x28a:  movl   $0xd,0x44(%esp)
086917dc +0x292:  mov    -0x9a(%ebp),%edx
086917e2 +0x298:  mov    %edx,0x4(%esp)
086917e6 +0x29c:  mov    -0x96(%ebp),%edx
086917ec +0x2a2:  mov    %edx,0x8(%esp)
086917f0 +0x2a6:  mov    -0x92(%ebp),%edx
086917f6 +0x2ac:  mov    %edx,0xc(%esp)
086917fa +0x2b0:  mov    -0x8e(%ebp),%edx
08691800 +0x2b6:  mov    %edx,0x10(%esp)
08691804 +0x2ba:  mov    -0x8a(%ebp),%edx
0869180a +0x2c0:  mov    %edx,0x14(%esp)
0869180e +0x2c4:  mov    -0x86(%ebp),%edx
08691814 +0x2ca:  mov    %edx,0x18(%esp)
08691818 +0x2ce:  mov    -0x82(%ebp),%edx
0869181e +0x2d4:  mov    %edx,0x1c(%esp)
08691822 +0x2d8:  mov    -0x7e(%ebp),%edx
08691825 +0x2db:  mov    %edx,0x20(%esp)
08691829 +0x2df:  mov    -0x7a(%ebp),%edx
0869182c +0x2e2:  mov    %edx,0x24(%esp)
08691830 +0x2e6:  mov    -0x76(%ebp),%edx
08691833 +0x2e9:  mov    %edx,0x28(%esp)
08691837 +0x2ed:  mov    -0x72(%ebp),%edx
0869183a +0x2f0:  mov    %edx,0x2c(%esp)
0869183e +0x2f4:  mov    -0x6e(%ebp),%edx
08691841 +0x2f7:  mov    %edx,0x30(%esp)
08691845 +0x2fb:  mov    -0x6a(%ebp),%edx
08691848 +0x2fe:  mov    %edx,0x34(%esp)
0869184c +0x302:  mov    -0x66(%ebp),%edx
0869184f +0x305:  mov    %edx,0x38(%esp)
08691853 +0x309:  mov    -0x62(%ebp),%edx
08691856 +0x30c:  mov    %edx,0x3c(%esp)
0869185a +0x310:  movzbl -0x5e(%ebp),%edx
0869185e +0x314:  mov    %dl,0x40(%esp)
08691862 +0x318:  mov    %eax,(%esp)
08691865 +0x31b:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
0869186a +0x320:  mov    %eax,-0x2c(%ebp)
0869186d +0x323:  mov    -0x2c(%ebp),%eax
08691870 +0x326:  shr    $0x1f,%eax
08691873 +0x329:  test   %al,%al
08691875 +0x32b:  je     08691938 <+0x3ee>
0869187b +0x331:  movl   $0x0,0xc(%esp)
08691883 +0x339:  movl   $"game_server_msg_104",0x8(%esp)
0869188b +0x341:  movl   $0x4,0x4(%esp)
08691893 +0x349:  movl   $&g_scriptStringManager_,(%esp)
0869189a +0x350:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
0869189f +0x355:  movl   $0xff,0x8(%esp)
086918a7 +0x35d:  mov    %eax,0x4(%esp)
086918ab +0x361:  lea    -0x19a(%ebp),%eax
086918b1 +0x367:  mov    %eax,(%esp)
086918b4 +0x36a:  call   0807d8d0 <_init+0x1c8>
086918b9 +0x36f:  mov    0x8(%ebp),%eax
086918bc +0x372:  mov    %eax,(%esp)
086918bf +0x375:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
086918c4 +0x37a:  mov    %eax,%esi
086918c6 +0x37c:  lea    -0x19a(%ebp),%eax
086918cc +0x382:  mov    %eax,(%esp)
086918cf +0x385:  call   0807e3b0 <_init+0xca8>
086918d4 +0x38a:  mov    %eax,%edi
086918d6 +0x38c:  mov    0x8(%ebp),%eax
086918d9 +0x38f:  mov    %eax,(%esp)
086918dc +0x392:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
086918e1 +0x397:  mov    %eax,%ebx
086918e3 +0x399:  mov    0x8(%ebp),%eax
086918e6 +0x39c:  mov    %eax,(%esp)
086918e9 +0x39f:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
086918ee +0x3a4:  movl   $0x0,0x24(%esp)
086918f6 +0x3ac:  movl   $0x0,0x20(%esp)
086918fe +0x3b4:  mov    %esi,0x1c(%esp)
08691902 +0x3b8:  movl   $0x0,0x18(%esp)
0869190a +0x3c0:  mov    %edi,0x14(%esp)
0869190e +0x3c4:  lea    -0x19a(%ebp),%edx
08691914 +0x3ca:  mov    %edx,0x10(%esp)
08691918 +0x3ce:  mov    %ebx,0xc(%esp)
0869191c +0x3d2:  movl   $0x0,0x8(%esp)
08691924 +0x3da:  lea    -0x9a(%ebp),%edx
0869192a +0x3e0:  mov    %edx,0x4(%esp)
0869192e +0x3e4:  mov    %eax,(%esp)
08691931 +0x3e7:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
08691936 +0x3ec:  jmp    0869195a <+0x410>
08691938 +0x3ee:  mov    -0x2c(%ebp),%eax
0869193b +0x3f1:  mov    %eax,0xc(%esp)
0869193f +0x3f5:  movl   $0x0,0x8(%esp)
08691947 +0x3fd:  movl   $0x1,0x4(%esp)
0869194f +0x405:  mov    0x8(%ebp),%eax
08691952 +0x408:  mov    %eax,(%esp)
08691955 +0x40b:  call   0867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItem(CUser::eSendTarget, ENUM_ITEMSPACE, int)
0869195a +0x410:  mov    -0x34(%ebp),%eax
0869195d +0x413:  add    $0x3a0,%eax
08691962 +0x418:  mov    %eax,(%esp)
08691965 +0x41b:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
0869196a +0x420:  cmp    -0x30(%ebp),%eax
0869196d +0x423:  setg   %al
08691970 +0x426:  test   %al,%al
08691972 +0x428:  jne    08691646 <+0xfc>
08691978 +0x42e:  lea    -0x5c(%ebp),%eax
0869197b +0x431:  mov    %eax,(%esp)
0869197e +0x434:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08691983 +0x439:  movl   $0x1d0,0x8(%esp)
0869198b +0x441:  movl   $0x0,0x4(%esp)
08691993 +0x449:  lea    -0x5c(%ebp),%eax
08691996 +0x44c:  mov    %eax,(%esp)
08691999 +0x44f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0869199e +0x454:  lea    -0x50(%ebp),%eax
086919a1 +0x457:  mov    %eax,(%esp)
086919a4 +0x45a:  call   0817a65e <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x6dc>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x6dc
086919a9 +0x45f:  movsbl %al,%eax
086919ac +0x462:  mov    %eax,0x4(%esp)
086919b0 +0x466:  lea    -0x5c(%ebp),%eax
086919b3 +0x469:  mov    %eax,(%esp)
086919b6 +0x46c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086919bb +0x471:  mov    $0x0,%edx
086919c0 +0x476:  lea    -0x44(%ebp),%eax
086919c3 +0x479:  mov    %edx,0x8(%esp)
086919c7 +0x47d:  lea    -0x50(%ebp),%edx
086919ca +0x480:  mov    %edx,0x4(%esp)
086919ce +0x484:  mov    %eax,(%esp)
086919d1 +0x487:  call   0869cb9f <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x93f4>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x93f4
086919d6 +0x48c:  sub    $0x4,%esp
086919d9 +0x48f:  lea    -0x44(%ebp),%eax
086919dc +0x492:  mov    %eax,-0x28(%ebp)
086919df +0x495:  mov    -0x28(%ebp),%eax
086919e2 +0x498:  mov    %eax,(%esp)
086919e5 +0x49b:  call   080ccf1a <_GLOBAL__I__ZN10BingoEventC2Ev+0x1d67>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1d67
086919ea +0x4a0:  test   %al,%al
086919ec +0x4a2:  jne    08691b2e <+0x5e4>
086919f2 +0x4a8:  mov    $0x0,%edx
086919f7 +0x4ad:  lea    -0x40(%ebp),%eax
086919fa +0x4b0:  mov    %edx,0xc(%esp)
086919fe +0x4b4:  movl   $0x0,0x8(%esp)
08691a06 +0x4bc:  mov    -0x28(%ebp),%edx
08691a09 +0x4bf:  mov    %edx,0x4(%esp)
08691a0d +0x4c3:  mov    %eax,(%esp)
08691a10 +0x4c6:  call   0869cbd0 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x9425>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x9425
08691a15 +0x4cb:  sub    $0x4,%esp
08691a18 +0x4ce:  lea    -0x40(%ebp),%eax
08691a1b +0x4d1:  mov    %eax,-0x24(%ebp)
08691a1e +0x4d4:  mov    -0x24(%ebp),%eax
08691a21 +0x4d7:  mov    %eax,(%esp)
08691a24 +0x4da:  call   080ccf1a <_GLOBAL__I__ZN10BingoEventC2Ev+0x1d67>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1d67
08691a29 +0x4df:  test   %al,%al
08691a2b +0x4e1:  jne    08691b2e <+0x5e4>
08691a31 +0x4e7:  mov    $0x0,%edx
08691a36 +0x4ec:  lea    -0x3c(%ebp),%eax
08691a39 +0x4ef:  mov    %edx,0xc(%esp)
08691a3d +0x4f3:  movl   $0x0,0x8(%esp)
08691a45 +0x4fb:  mov    -0x28(%ebp),%edx
08691a48 +0x4fe:  mov    %edx,0x4(%esp)
08691a4c +0x502:  mov    %eax,(%esp)
08691a4f +0x505:  call   0869cc19 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x946e>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x946e
08691a54 +0x50a:  sub    $0x4,%esp
08691a57 +0x50d:  lea    -0x3c(%ebp),%eax
08691a5a +0x510:  mov    %eax,-0x20(%ebp)
08691a5d +0x513:  mov    -0x20(%ebp),%eax
08691a60 +0x516:  mov    %eax,(%esp)
08691a63 +0x519:  call   080ccf1a <_GLOBAL__I__ZN10BingoEventC2Ev+0x1d67>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1d67
08691a68 +0x51e:  test   %al,%al
08691a6a +0x520:  jne    08691b2e <+0x5e4>
08691a70 +0x526:  movb   $0x1,-0x5d(%ebp)
08691a74 +0x52a:  jmp    08691af1 <+0x5a7>
08691a76 +0x52c:  lea    -0x5d(%ebp),%eax
08691a79 +0x52f:  mov    %eax,(%esp)
08691a7c +0x532:  call   080ccf24 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1d71>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1d71
08691a81 +0x537:  test   %al,%al
08691a83 +0x539:  jne    08691ad6 <+0x58c>
08691a85 +0x53b:  movl   $0x0,0x4(%esp)
08691a8d +0x543:  mov    -0x24(%ebp),%eax
08691a90 +0x546:  mov    %eax,(%esp)
08691a93 +0x549:  call   0869ccae <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x9503>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x9503
08691a98 +0x54e:  mov    %eax,-0x1c(%ebp)
08691a9b +0x551:  jmp    08691acb <+0x581>
08691a9d +0x553:  mov    -0x1c(%ebp),%eax
08691aa0 +0x556:  mov    0x2(%eax),%eax
08691aa3 +0x559:  mov    %eax,0x4(%esp)
08691aa7 +0x55d:  lea    -0x5c(%ebp),%eax
08691aaa +0x560:  mov    %eax,(%esp)
08691aad +0x563:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08691ab2 +0x568:  mov    -0x1c(%ebp),%eax
08691ab5 +0x56b:  mov    0x7(%eax),%eax
08691ab8 +0x56e:  mov    %eax,0x4(%esp)
08691abc +0x572:  lea    -0x5c(%ebp),%eax
08691abf +0x575:  mov    %eax,(%esp)
08691ac2 +0x578:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08691ac7 +0x57d:  movb   $0x1,-0x5d(%ebp)
08691acb +0x581:  movzbl -0x5d(%ebp),%eax
08691acf +0x585:  xor    $0x1,%eax
08691ad2 +0x588:  test   %al,%al
08691ad4 +0x58a:  jne    08691a9d <+0x553>
08691ad6 +0x58c:  movzbl -0x5d(%ebp),%eax
08691ada +0x590:  test   %al,%al
08691adc +0x592:  je     08691af1 <+0x5a7>
08691ade +0x594:  movl   $0x0,0x4(%esp)
08691ae6 +0x59c:  mov    -0x24(%ebp),%eax
08691ae9 +0x59f:  mov    %eax,(%esp)
08691aec +0x5a2:  call   0869cc93 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x94e8>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x94e8
08691af1 +0x5a7:  movzbl -0x5d(%ebp),%eax
08691af5 +0x5ab:  test   %al,%al
08691af7 +0x5ad:  je     08691b21 <+0x5d7>
08691af9 +0x5af:  movl   $0x0,0x8(%esp)
08691b01 +0x5b7:  mov    -0x20(%ebp),%eax
08691b04 +0x5ba:  mov    %eax,0x4(%esp)
08691b08 +0x5be:  mov    -0x24(%ebp),%eax
08691b0b +0x5c1:  mov    %eax,(%esp)
08691b0e +0x5c4:  call   0869cc62 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x94b7>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x94b7
08691b13 +0x5c9:  xor    $0x1,%eax
08691b16 +0x5cc:  test   %al,%al
08691b18 +0x5ce:  je     08691b21 <+0x5d7>
08691b1a +0x5d0:  mov    $0x1,%eax
08691b1f +0x5d5:  jmp    08691b26 <+0x5dc>
08691b21 +0x5d7:  mov    $0x0,%eax
08691b26 +0x5dc:  test   %al,%al
08691b28 +0x5de:  jne    08691a76 <+0x52c>
08691b2e +0x5e4:  movl   $0x1,0x4(%esp)
08691b36 +0x5ec:  lea    -0x5c(%ebp),%eax
08691b39 +0x5ef:  mov    %eax,(%esp)
08691b3c +0x5f2:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08691b41 +0x5f7:  lea    -0x5c(%ebp),%eax
08691b44 +0x5fa:  mov    %eax,0x4(%esp)
08691b48 +0x5fe:  mov    0x8(%ebp),%eax
08691b4b +0x601:  mov    %eax,(%esp)
08691b4e +0x604:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08691b53 +0x609:  jmp    08691b6a <+0x620>
08691b55 +0x60b:  mov    %edx,%ebx
08691b57 +0x60d:  mov    %eax,%esi
08691b59 +0x60f:  lea    -0x5c(%ebp),%eax
08691b5c +0x612:  mov    %eax,(%esp)
08691b5f +0x615:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08691b64 +0x61a:  mov    %esi,%eax
08691b66 +0x61c:  mov    %ebx,%edx
08691b68 +0x61e:  jmp    08691b77 <+0x62d>
08691b6a +0x620:  lea    -0x5c(%ebp),%eax
08691b6d +0x623:  mov    %eax,(%esp)
08691b70 +0x626:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08691b75 +0x62b:  jmp    08691b92 <+0x648>
08691b77 +0x62d:  mov    %edx,%ebx
08691b79 +0x62f:  mov    %eax,%esi
08691b7b +0x631:  lea    -0x50(%ebp),%eax
08691b7e +0x634:  mov    %eax,(%esp)
08691b81 +0x637:  call   0814aca6 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa45>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa45
08691b86 +0x63c:  mov    %esi,%eax
08691b88 +0x63e:  mov    %ebx,%edx
08691b8a +0x640:  mov    %eax,(%esp)
08691b8d +0x643:  call   08ae3750 <_Unwind_Resume>
08691b92 +0x648:  lea    -0x50(%ebp),%eax
08691b95 +0x64b:  mov    %eax,(%esp)
08691b98 +0x64e:  call   0814aca6 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa45>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa45
08691b9d +0x653:  jmp    08691ba3 <+0x659>
08691b9f +0x655:  nop
08691ba0 +0x656:  jmp    08691ba3 <+0x659>
08691ba2 +0x658:  nop
08691ba3 +0x659:  lea    -0xc(%ebp),%esp
08691ba6 +0x65c:  add    $0x0,%esp
08691ba9 +0x65f:  pop    %ebx
08691baa +0x660:  pop    %esi
08691bab +0x661:  pop    %edi
08691bac +0x662:  pop    %ebp
08691bad +0x663:  ret
```

## 反编译 C

```c
// CUser::giveLotteryCountItem @ 0x869154a

/* CUser::giveLotteryCountItem(int, bool) */

void __thiscall CUser::giveLotteryCountItem(CUser *this,int param_1,bool param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  CDataManager *this_00;
  undefined4 *puVar6;
  int *piVar7;
  CInventory *pCVar8;
  int iVar9;
  char *__src;
  size_t sVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  char local_19e [256];
  undefined2 local_9e;
  undefined2 uStack_9c;
  undefined2 uStack_9a;
  undefined1 uStack_98;
  int iStack_97;
  undefined1 uStack_93;
  undefined4 local_92;
  undefined4 local_8e;
  undefined4 local_8a;
  undefined4 local_86;
  undefined4 local_82;
  undefined4 local_7e;
  undefined4 local_7a;
  undefined4 local_76;
  undefined4 local_72;
  undefined4 local_6e;
  undefined4 local_6a;
  undefined4 local_66;
  undefined1 local_62;
  bool local_61;
  PacketGuard local_60 [12];
  vector<Inven_Item,std::allocator<Inven_Item>> local_54 [12];
  vector local_48 [4];
  auto_any_base local_44 [4];
  auto_any_base local_40 [4];
  int local_3c;
  int local_38;
  uint local_34;
  int local_30;
  type2type *local_2c;
  auto_any_base *local_28;
  auto_any_base *local_24;
  int local_20;
  
  iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if (iVar3 == 0) {
    uVar4 = get_acc_id(this);
    uVar5 = NumberToString(uVar4,0);
    LogManager::logFormat
              (1,"user.cpp","void CUser::giveLotteryCountItem(int, bool)",0xb45f,
               "giveLotteryCountItem curchar = null id(%s) item_no(%u) match(%d)",uVar5,param_1,
               (uint)param_2);
  }
  else {
    this_00 = (CDataManager *)G_CDataManager();
    local_3c = CDataManager::find_item(this_00,param_1);
    if ((local_3c != 0) && (cVar1 = verifyStackableItemProcess(this,0x36,local_3c), cVar1 == '\x01')
       ) {
      std::vector<Inven_Item,std::allocator<Inven_Item>>::vector(local_54);
      local_38 = local_3c;
      local_34 = 0;
      while (iVar3 = std::vector<int,std::allocator<int>>::size
                               ((vector<int,std::allocator<int>> *)(local_38 + 0x3a0)),
            (int)local_34 < iVar3) {
        Inven_Item::Inven_Item((Inven_Item *)&local_9e);
        uVar4 = local_34;
        local_34 = local_34 + 1;
        puVar6 = (undefined4 *)
                 std::vector<int,std::allocator<int>>::operator[]
                           ((vector<int,std::allocator<int>> *)(local_38 + 0x3a0),uVar4);
        uVar4 = local_34;
        uStack_9c = (undefined2)*puVar6;
        uStack_9a = (undefined2)((uint)*puVar6 >> 0x10);
        local_34 = local_34 + 1;
        piVar7 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                  ((vector<int,std::allocator<int>> *)(local_38 + 0x3a0),uVar4);
        iStack_97 = *piVar7;
                    /* try { // try from 086916ac to 08691982 has its CatchHandler @ 08691b77 */
        std::vector<Inven_Item,std::allocator<Inven_Item>>::push_back
                  (local_54,(Inven_Item *)&local_9e);
        iVar3 = iStack_97;
        if ((CONCAT22(uStack_9a,uStack_9c) == 1) && (-1 < iStack_97)) {
          pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
          iVar3 = CInventory::GetEventCoin(pCVar8);
          uVar4 = iVar3 + iStack_97;
          pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
          CInventory::SetEventCoin(pCVar8,uVar4);
          iVar3 = iStack_97;
          pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
          uVar5 = CInventory::GetEventCoin(pCVar8);
          cUserHistoryLog::EventCoinAdd((cUserHistoryLog *)(this + 0x79700),uVar5,iVar3,2);
          SaveMoneyCoin(this);
          SendCoin(this);
        }
        else {
          iVar9 = G_CDataManager();
          CItemList::create_item(*(CItemList **)(iVar9 + 0xc),2,&local_9e,iVar3);
          if ((CONCAT22(uStack_9a,uStack_9c) == 0) &&
             (iVar3 = Inven_Item::get_add_info((Inven_Item *)&local_9e), iVar3 == 0)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            local_30 = 0xffffffff;
            uVar5 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
            local_30 = CInventory::insertItemIntoInventory
                                 (uVar5,CONCAT22(uStack_9c,local_9e),
                                  CONCAT13((undefined1)iStack_97,CONCAT12(uStack_98,uStack_9a)),
                                  CONCAT13(uStack_93,iStack_97._1_3_),local_92,local_8e,local_8a,
                                  local_86,local_82,local_7e,local_7a,local_76,local_72,local_6e,
                                  local_6a,local_66,local_62,0xd,1,1);
            if (local_30 < 0) {
              __src = (char *)RDARScriptStringManager::findString
                                        ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                         "game_server_msg_104",(bool *)0x0);
              strncpy(local_19e,__src,0xff);
              uVar5 = GetServerGroup(this);
              sVar10 = strlen(local_19e);
              uVar11 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
              uVar12 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)this);
              WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                        (uVar12,&local_9e,0,uVar11,local_19e,sVar10,0,uVar5,0,0);
            }
            else {
              SendUpdateItem(this,1,0,local_30);
            }
          }
        }
      }
      PacketGuard::PacketGuard(local_60);
                    /* try { // try from 08691999 to 08691b52 has its CatchHandler @ 08691b55 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_60,0,0x1d0);
      cVar1 = std::vector<Inven_Item,std::allocator<Inven_Item>>::size(local_54);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_60,(int)cVar1);
      boost::foreach_detail_::contain<std::vector<Inven_Item,std::allocator<Inven_Item>>>
                (local_48,(bool_ *)local_54);
      local_2c = (type2type *)local_48;
      bVar2 = boost::foreach_detail_::auto_any_base::operator_cast_to_bool
                        ((auto_any_base *)local_2c);
      if (!bVar2) {
        boost::foreach_detail_::
        begin<std::vector<Inven_Item,std::allocator<Inven_Item>>,mpl_::bool_<false>>
                  (local_44,local_2c,(bool_ *)0x0);
        local_28 = local_44;
        bVar2 = boost::foreach_detail_::auto_any_base::operator_cast_to_bool(local_28);
        if (!bVar2) {
          boost::foreach_detail_::
          end<std::vector<Inven_Item,std::allocator<Inven_Item>>,mpl_::bool_<false>>
                    (local_40,local_2c,(bool_ *)0x0);
          local_24 = local_40;
          bVar2 = boost::foreach_detail_::auto_any_base::operator_cast_to_bool(local_24);
          if (!bVar2) {
            local_61 = true;
            while( true ) {
              if ((local_61 == false) ||
                 (bVar2 = boost::foreach_detail_::
                          done<std::vector<Inven_Item,std::allocator<Inven_Item>>,mpl_::bool_<false>>
                                    (local_28,local_24,(type2type *)0x0), bVar2)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (!bVar2) break;
              cVar1 = boost::foreach_detail_::set_false(&local_61);
              if (cVar1 == '\0') {
                local_20 = boost::foreach_detail_::
                           deref<std::vector<Inven_Item,std::allocator<Inven_Item>>,mpl_::bool_<false>>
                                     (local_28,(type2type *)0x0);
                while (local_61 != true) {
                  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_60,*(int *)(local_20 + 2))
                  ;
                  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_60,*(int *)(local_20 + 7))
                  ;
                  local_61 = true;
                }
              }
              if (local_61 != false) {
                boost::foreach_detail_::
                next<std::vector<Inven_Item,std::allocator<Inven_Item>>,mpl_::bool_<false>>
                          (local_28,(type2type *)0x0);
              }
            }
          }
        }
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_60,true);
      Send(this,local_60);
                    /* try { // try from 08691b70 to 08691b74 has its CatchHandler @ 08691b77 */
      PacketGuard::~PacketGuard(local_60);
      std::vector<Inven_Item,std::allocator<Inven_Item>>::~vector(local_54);
    }
  }
  return;
}
```
