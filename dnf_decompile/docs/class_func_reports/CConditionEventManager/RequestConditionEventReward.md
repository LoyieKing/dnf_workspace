# RequestConditionEventReward

`_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE`

`CConditionEventManager::RequestConditionEventReward(CUser*, short, char, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&)`

| 类 | 地址 |
|---|---|
| `CConditionEventManager` | `0x08334850` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08334850  _ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE
#           CConditionEventManager::RequestConditionEventReward(CUser*, short, char, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&)
# range [0x08334850, 0x08335263]
08334850 +0x000:  push   %ebp
08334851 +0x001:  mov    %esp,%ebp
08334853 +0x003:  push   %edi
08334854 +0x004:  push   %esi
08334855 +0x005:  push   %ebx
08334856 +0x006:  sub    $0x24c,%esp
0833485c +0x00c:  mov    0x10(%ebp),%edx
0833485f +0x00f:  mov    0x14(%ebp),%eax
08334862 +0x012:  mov    %dx,-0x1fc(%ebp)
08334869 +0x019:  mov    %al,-0x200(%ebp)
0833486f +0x01f:  mov    &_ZN10GlobalData15s_event_managerE,%eax
08334874 +0x024:  movl   $0x71,0x4(%esp)
0833487c +0x02c:  mov    %eax,(%esp)
0833487f +0x02f:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
08334884 +0x034:  mov    (%eax),%edx
08334886 +0x036:  add    $0x34,%edx
08334889 +0x039:  mov    (%edx),%edx
0833488b +0x03b:  movl   $0x0,0x4(%esp)
08334893 +0x043:  mov    %eax,(%esp)
08334896 +0x046:  call   *%edx
08334898 +0x048:  xor    $0x1,%eax
0833489b +0x04b:  test   %al,%al
0833489d +0x04d:  je     083348a9 <+0x59>
0833489f +0x04f:  mov    $0x0,%ebx
083348a4 +0x054:  jmp    08335257 <+0xa07>
083348a9 +0x059:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
083348ae +0x05e:  mov    0x4d98(%eax),%eax
083348b4 +0x064:  mov    %eax,-0x34(%ebp)
083348b7 +0x067:  movswl -0x1fc(%ebp),%eax
083348be +0x06e:  cmp    -0x34(%ebp),%eax
083348c1 +0x071:  je     083348cd <+0x7d>
083348c3 +0x073:  mov    $0x1,%ebx
083348c8 +0x078:  jmp    08335257 <+0xa07>
083348cd +0x07d:  cmpb   $0x0,-0x200(%ebp)
083348d4 +0x084:  jg     083348e0 <+0x90>
083348d6 +0x086:  mov    $0x13,%ebx
083348db +0x08b:  jmp    08335257 <+0xa07>
083348e0 +0x090:  mov    0xc(%ebp),%eax
083348e3 +0x093:  mov    %eax,(%esp)
083348e6 +0x096:  call   08335ba8 <_GLOBAL__I__ZN22CConditionEventManagerC2Ev+0x4e>  ; global constructors keyed to CConditionEventManager::CConditionEventManager()+0x4e
083348eb +0x09b:  mov    %ax,-0x30(%ebp)
083348ef +0x09f:  movsbw -0x200(%ebp),%ax
083348f7 +0x0a7:  cmp    -0x30(%ebp),%ax
083348fb +0x0ab:  jle    08334907 <+0xb7>
083348fd +0x0ad:  mov    $0x13,%ebx
08334902 +0x0b2:  jmp    08335257 <+0xa07>
08334907 +0x0b7:  mov    0xc(%ebp),%eax
0833490a +0x0ba:  mov    %eax,(%esp)
0833490d +0x0bd:  call   08335c14 <_GLOBAL__I__ZN22CConditionEventManagerC2Ev+0xba>  ; global constructors keyed to CConditionEventManager::CConditionEventManager()+0xba
08334912 +0x0c2:  mov    %ax,-0x2e(%ebp)
08334916 +0x0c6:  movswl -0x2e(%ebp),%eax
0833491a +0x0ca:  movsbl -0x200(%ebp),%edx
08334921 +0x0d1:  sub    $0x1,%edx
08334924 +0x0d4:  cmp    %edx,%eax
08334926 +0x0d6:  je     08334932 <+0xe2>
08334928 +0x0d8:  mov    $0x13,%ebx
0833492d +0x0dd:  jmp    08335257 <+0xa07>
08334932 +0x0e2:  lea    -0x44(%ebp),%eax
08334935 +0x0e5:  mov    %eax,(%esp)
08334938 +0x0e8:  call   08335cc8 <_GLOBAL__I__ZN22CConditionEventManagerC2Ev+0x16e>  ; global constructors keyed to CConditionEventManager::CConditionEventManager()+0x16e
0833493d +0x0ed:  movsbl -0x200(%ebp),%edx
08334944 +0x0f4:  movswl -0x1fc(%ebp),%eax
0833494b +0x0fb:  mov    %edx,0x10(%esp)
0833494f +0x0ff:  mov    %eax,0xc(%esp)
08334953 +0x103:  lea    -0x44(%ebp),%eax
08334956 +0x106:  mov    %eax,0x8(%esp)
0833495a +0x10a:  movl   $0x0,0x4(%esp)
08334962 +0x112:  mov    0x8(%ebp),%eax
08334965 +0x115:  mov    %eax,(%esp)
08334968 +0x118:  call   083353a0 <_ZN22CConditionEventManager22GetConditionRewardInfoEcRSt6vectorI26stConditionEventRewardInfoSaIS1_EEsc>  ; CConditionEventManager::GetConditionRewardInfo(char, std::vector<stConditionEventRewardInfo, std::allocator<stConditionEventRewardInfo> >&, short, char)
0833496d +0x11d:  mov    0x18(%ebp),%eax
08334970 +0x120:  mov    %eax,0x8(%esp)
08334974 +0x124:  lea    -0x44(%ebp),%eax
08334977 +0x127:  mov    %eax,0x4(%esp)
0833497b +0x12b:  mov    0x8(%ebp),%eax
0833497e +0x12e:  mov    %eax,(%esp)
08334981 +0x131:  call   08335264 <_ZN22CConditionEventManager30ConditionRewardSameItemCombineERSt6vectorI26stConditionEventRewardInfoSaIS1_EERSt3mapIiiSt4lessIiESaISt4pairIKiiEEE>  ; CConditionEventManager::ConditionRewardSameItemCombine(std::vector<stConditionEventRewardInfo, std::allocator<stConditionEventRewardInfo> >&, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&)
08334986 +0x136:  mov    0x18(%ebp),%eax
08334989 +0x139:  mov    %eax,(%esp)
0833498c +0x13c:  call   082fa3c0 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x1f2>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x1f2
08334991 +0x141:  xor    $0x1,%eax
08334994 +0x144:  test   %al,%al
08334996 +0x146:  je     0833521f <+0x9cf>
0833499c +0x14c:  lea    -0x48(%ebp),%eax
0833499f +0x14f:  mov    0x18(%ebp),%edx
083349a2 +0x152:  mov    %edx,0x4(%esp)
083349a6 +0x156:  mov    %eax,(%esp)
083349a9 +0x159:  call   08151fa0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18d5>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18d5
083349ae +0x15e:  sub    $0x4,%esp
083349b1 +0x161:  jmp    083351f0 <+0x9a0>
083349b6 +0x166:  lea    -0x48(%ebp),%eax
083349b9 +0x169:  mov    %eax,(%esp)
083349bc +0x16c:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
083349c1 +0x171:  mov    (%eax),%eax
083349c3 +0x173:  cmp    $0x1,%eax
083349c6 +0x176:  jne    083349e1 <+0x191>
083349c8 +0x178:  lea    -0x48(%ebp),%eax
083349cb +0x17b:  mov    %eax,(%esp)
083349ce +0x17e:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
083349d3 +0x183:  mov    0x4(%eax),%eax
083349d6 +0x186:  test   %eax,%eax
083349d8 +0x188:  js     083349e1 <+0x191>
083349da +0x18a:  mov    $0x1,%eax
083349df +0x18f:  jmp    083349e6 <+0x196>
083349e1 +0x191:  mov    $0x0,%eax
083349e6 +0x196:  test   %al,%al
083349e8 +0x198:  je     08334a87 <+0x237>
083349ee +0x19e:  mov    0xc(%ebp),%eax
083349f1 +0x1a1:  mov    %eax,(%esp)
083349f4 +0x1a4:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
083349f9 +0x1a9:  mov    %eax,(%esp)
083349fc +0x1ac:  call   08110c7a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x18c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x18c
08334a01 +0x1b1:  mov    %eax,%esi
08334a03 +0x1b3:  lea    -0x48(%ebp),%eax
08334a06 +0x1b6:  mov    %eax,(%esp)
08334a09 +0x1b9:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
08334a0e +0x1be:  mov    0x4(%eax),%eax
08334a11 +0x1c1:  add    %eax,%esi
08334a13 +0x1c3:  mov    0xc(%ebp),%eax
08334a16 +0x1c6:  mov    %eax,(%esp)
08334a19 +0x1c9:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08334a1e +0x1ce:  mov    %esi,0x4(%esp)
08334a22 +0x1d2:  mov    %eax,(%esp)
08334a25 +0x1d5:  call   08110c86 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x198>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x198
08334a2a +0x1da:  lea    -0x48(%ebp),%eax
08334a2d +0x1dd:  mov    %eax,(%esp)
08334a30 +0x1e0:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
08334a35 +0x1e5:  mov    0x4(%eax),%esi
08334a38 +0x1e8:  mov    0xc(%ebp),%eax
08334a3b +0x1eb:  mov    %eax,(%esp)
08334a3e +0x1ee:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08334a43 +0x1f3:  mov    %eax,(%esp)
08334a46 +0x1f6:  call   08110c7a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x18c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x18c
08334a4b +0x1fb:  mov    0xc(%ebp),%edx
08334a4e +0x1fe:  add    $0x79700,%edx
08334a54 +0x204:  movl   $0x2,0xc(%esp)
08334a5c +0x20c:  mov    %esi,0x8(%esp)
08334a60 +0x210:  mov    %eax,0x4(%esp)
08334a64 +0x214:  mov    %edx,(%esp)
08334a67 +0x217:  call   08683c58 <_ZN15cUserHistoryLog12EventCoinAddEii14eCoinAddReason>  ; cUserHistoryLog::EventCoinAdd(int, int, eCoinAddReason)
08334a6c +0x21c:  mov    0xc(%ebp),%eax
08334a6f +0x21f:  mov    %eax,(%esp)
08334a72 +0x222:  call   086504d8 <_ZN5CUser13SaveMoneyCoinEv>  ; CUser::SaveMoneyCoin()
08334a77 +0x227:  mov    0xc(%ebp),%eax
08334a7a +0x22a:  mov    %eax,(%esp)
08334a7d +0x22d:  call   08656808 <_ZN5CUser8SendCoinEv>  ; CUser::SendCoin()
08334a82 +0x232:  jmp    083351e5 <+0x995>
08334a87 +0x237:  lea    -0x48(%ebp),%eax
08334a8a +0x23a:  mov    %eax,(%esp)
08334a8d +0x23d:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
08334a92 +0x242:  mov    (%eax),%esi
08334a94 +0x244:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08334a99 +0x249:  mov    %esi,0x4(%esp)
08334a9d +0x24d:  mov    %eax,(%esp)
08334aa0 +0x250:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08334aa5 +0x255:  mov    %eax,-0x2c(%ebp)
08334aa8 +0x258:  cmpl   $0x0,-0x2c(%ebp)
08334aac +0x25c:  je     083351de <+0x98e>
08334ab2 +0x262:  lea    -0xf5(%ebp),%eax
08334ab8 +0x268:  mov    %eax,(%esp)
08334abb +0x26b:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08334ac0 +0x270:  lea    -0x48(%ebp),%eax
08334ac3 +0x273:  mov    %eax,(%esp)
08334ac6 +0x276:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
08334acb +0x27b:  mov    (%eax),%eax
08334acd +0x27d:  mov    %eax,-0xf3(%ebp)
08334ad3 +0x283:  lea    -0x48(%ebp),%eax
08334ad6 +0x286:  mov    %eax,(%esp)
08334ad9 +0x289:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
08334ade +0x28e:  mov    0x4(%eax),%esi
08334ae1 +0x291:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08334ae6 +0x296:  mov    0xc(%eax),%eax
08334ae9 +0x299:  mov    %esi,0xc(%esp)
08334aed +0x29d:  lea    -0xf5(%ebp),%edx
08334af3 +0x2a3:  mov    %edx,0x8(%esp)
08334af7 +0x2a7:  movl   $0x0,0x4(%esp)
08334aff +0x2af:  mov    %eax,(%esp)
08334b02 +0x2b2:  call   08511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>  ; CItemList::create_item(ENUM_ITEM_CREATE_TYPE, Inven_Item&, int)
08334b07 +0x2b7:  mov    -0xf3(%ebp),%eax
08334b0d +0x2bd:  test   %eax,%eax
08334b0f +0x2bf:  je     08334b2a <+0x2da>
08334b11 +0x2c1:  lea    -0xf5(%ebp),%eax
08334b17 +0x2c7:  mov    %eax,(%esp)
08334b1a +0x2ca:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08334b1f +0x2cf:  test   %eax,%eax
08334b21 +0x2d1:  je     08334b2a <+0x2da>
08334b23 +0x2d3:  mov    $0x1,%eax
08334b28 +0x2d8:  jmp    08334b2f <+0x2df>
08334b2a +0x2da:  mov    $0x0,%eax
08334b2f +0x2df:  test   %al,%al
08334b31 +0x2e1:  je     083351e5 <+0x995>
08334b37 +0x2e7:  movl   $0x0,-0x4c(%ebp)
08334b3e +0x2ee:  movl   $0x0,-0x50(%ebp)
08334b45 +0x2f5:  movb   $0x0,-0x51(%ebp)
08334b49 +0x2f9:  mov    -0xf3(%ebp),%eax
08334b4f +0x2ff:  mov    %eax,%edx
08334b51 +0x301:  mov    &_ZN10GlobalData11s_pCeraShopE,%eax
08334b56 +0x306:  lea    -0x51(%ebp),%ecx
08334b59 +0x309:  mov    %ecx,0x10(%esp)
08334b5d +0x30d:  lea    -0x50(%ebp),%ecx
08334b60 +0x310:  mov    %ecx,0xc(%esp)
08334b64 +0x314:  lea    -0x4c(%ebp),%ecx
08334b67 +0x317:  mov    %ecx,0x8(%esp)
08334b6b +0x31b:  mov    %edx,0x4(%esp)
08334b6f +0x31f:  mov    %eax,(%esp)
08334b72 +0x322:  call   08324a1e <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb>  ; WongWork::CCeraShop::IsSpecialItem(int, int&, int&, bool&)
08334b77 +0x327:  test   %al,%al
08334b79 +0x329:  je     08334f9e <+0x74e>
08334b7f +0x32f:  mov    -0x2c(%ebp),%eax
08334b82 +0x332:  mov    (%eax),%eax
08334b84 +0x334:  add    $0xc,%eax
08334b87 +0x337:  mov    (%eax),%edx
08334b89 +0x339:  mov    -0x2c(%ebp),%eax
08334b8c +0x33c:  mov    %eax,(%esp)
08334b8f +0x33f:  call   *%edx
08334b91 +0x341:  cmp    $0x10,%eax
08334b94 +0x344:  je     08334ba8 <+0x358>
08334b96 +0x346:  mov    -0xf3(%ebp),%eax
08334b9c +0x34c:  cmp    $0x1,%eax
08334b9f +0x34f:  je     08334ba8 <+0x358>
08334ba1 +0x351:  mov    $0x1,%eax
08334ba6 +0x356:  jmp    08334bad <+0x35d>
08334ba8 +0x358:  mov    $0x0,%eax
08334bad +0x35d:  test   %al,%al
08334baf +0x35f:  je     08334d6e <+0x51e>
08334bb5 +0x365:  movl   $0x0,-0x58(%ebp)
08334bbc +0x36c:  mov    -0xf3(%ebp),%eax
08334bc2 +0x372:  mov    %eax,%esi
08334bc4 +0x374:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08334bc9 +0x379:  mov    0xc(%eax),%eax
08334bcc +0x37c:  mov    %esi,0x4(%esp)
08334bd0 +0x380:  mov    %eax,(%esp)
08334bd3 +0x383:  call   0817a10c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x18a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x18a
08334bd8 +0x388:  mov    %eax,-0x28(%ebp)
08334bdb +0x38b:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08334be2 +0x392:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08334be7 +0x397:  mov    %eax,-0x24(%ebp)
08334bea +0x39a:  lea    -0x64(%ebp),%eax
08334bed +0x39d:  mov    %eax,(%esp)
08334bf0 +0x3a0:  call   0814ac92 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa31>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa31
08334bf5 +0x3a5:  lea    -0x7c(%ebp),%eax
08334bf8 +0x3a8:  mov    %eax,(%esp)
08334bfb +0x3ab:  call   0817a244 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x2c2>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x2c2
08334c00 +0x3b0:  mov    -0xf3(%ebp),%eax
08334c06 +0x3b6:  mov    %eax,%edx
08334c08 +0x3b8:  mov    &_ZN10GlobalData11s_pCeraShopE,%eax
08334c0d +0x3bd:  movl   $0x1,0x30(%esp)
08334c15 +0x3c5:  movl   $0x0,0x2c(%esp)
08334c1d +0x3cd:  movl   $0x0,0x28(%esp)
08334c25 +0x3d5:  movl   $0x0,0x24(%esp)
08334c2d +0x3dd:  lea    -0x7c(%ebp),%ecx
08334c30 +0x3e0:  mov    %ecx,0x20(%esp)
08334c34 +0x3e4:  lea    -0x64(%ebp),%ecx
08334c37 +0x3e7:  mov    %ecx,0x1c(%esp)
08334c3b +0x3eb:  movl   $0x1,0x18(%esp)
08334c43 +0x3f3:  mov    -0x24(%ebp),%ecx
08334c46 +0x3f6:  mov    %ecx,0x14(%esp)
08334c4a +0x3fa:  lea    -0x58(%ebp),%ecx
08334c4d +0x3fd:  mov    %ecx,0x10(%esp)
08334c51 +0x401:  mov    -0x28(%ebp),%ecx
08334c54 +0x404:  mov    %ecx,0xc(%esp)
08334c58 +0x408:  mov    %edx,0x8(%esp)
08334c5c +0x40c:  mov    0xc(%ebp),%edx
08334c5f +0x40f:  mov    %edx,0x4(%esp)
08334c63 +0x413:  mov    %eax,(%esp)
08334c66 +0x416:  call   0832587e <_ZN8WongWork9CCeraShop18ProcessSpecialItemEP5CUseriiRilbRSt6vectorI10Inven_ItemSaIS5_EERNS0_21stCeraShopItemParam_tEccbi>  ; WongWork::CCeraShop::ProcessSpecialItem(CUser*, int, int, int&, long, bool, std::vector<Inven_Item, std::allocator<Inven_Item> >&, WongWork::CCeraShop::stCeraShopItemParam_t&, char, char, bool, int)
08334c6b +0x41b:  test   %al,%al
08334c6d +0x41d:  je     08334d05 <+0x4b5>
08334c73 +0x423:  mov    -0x58(%ebp),%eax
08334c76 +0x426:  test   %eax,%eax
08334c78 +0x428:  je     08334c89 <+0x439>
08334c7a +0x42a:  mov    $0x11,%ebx
08334c7f +0x42f:  mov    $0x0,%esi
08334c84 +0x434:  jmp    08334d21 <+0x4d1>
08334c89 +0x439:  cmpl   $0x0,-0x28(%ebp)
08334c8d +0x43d:  je     08334caf <+0x45f>
08334c8f +0x43f:  mov    -0x28(%ebp),%eax
08334c92 +0x442:  mov    %eax,0x4(%esp)
08334c96 +0x446:  mov    0xc(%ebp),%eax
08334c99 +0x449:  mov    %eax,(%esp)
08334c9c +0x44c:  call   0864d878 <_ZN5CUser17IsRestrictedGoodsEi>  ; CUser::IsRestrictedGoods(int)
08334ca1 +0x451:  xor    $0x1,%eax
08334ca4 +0x454:  test   %al,%al
08334ca6 +0x456:  je     08334caf <+0x45f>
08334ca8 +0x458:  mov    $0x1,%eax
08334cad +0x45d:  jmp    08334cb4 <+0x464>
08334caf +0x45f:  mov    $0x0,%eax
08334cb4 +0x464:  test   %al,%al
08334cb6 +0x466:  je     08334d05 <+0x4b5>
08334cb8 +0x468:  mov    -0x28(%ebp),%eax
08334cbb +0x46b:  mov    %eax,0x4(%esp)
08334cbf +0x46f:  mov    0xc(%ebp),%eax
08334cc2 +0x472:  mov    %eax,(%esp)
08334cc5 +0x475:  call   0864d84e <_ZN5CUser18SetRestrictedGoodsEi>  ; CUser::SetRestrictedGoods(int)
08334cca +0x47a:  movl   $0x0,0xc(%esp)
08334cd2 +0x482:  mov    -0x24(%ebp),%eax
08334cd5 +0x485:  mov    %eax,0x8(%esp)
08334cd9 +0x489:  mov    -0x28(%ebp),%eax
08334cdc +0x48c:  mov    %eax,0x4(%esp)
08334ce0 +0x490:  mov    0xc(%ebp),%eax
08334ce3 +0x493:  mov    %eax,(%esp)
08334ce6 +0x496:  call   08325a30 <_ZN8WongWork9CCeraShop15SaveFeaturedIdxEP5CUseriii>  ; WongWork::CCeraShop::SaveFeaturedIdx(CUser*, int, int, int)
08334ceb +0x49b:  mov    -0x28(%ebp),%eax
08334cee +0x49e:  mov    %eax,0x8(%esp)
08334cf2 +0x4a2:  movl   $0x1,0x4(%esp)
08334cfa +0x4aa:  mov    0xc(%ebp),%eax
08334cfd +0x4ad:  mov    %eax,(%esp)
08334d00 +0x4b0:  call   0864d9a4 <_ZN5CUser19SendRestrictedGoodsEbi>  ; CUser::SendRestrictedGoods(bool, int)
08334d05 +0x4b5:  mov    $0x1,%esi
08334d0a +0x4ba:  jmp    08334d21 <+0x4d1>
08334d0c +0x4bc:  mov    %edx,%ebx
08334d0e +0x4be:  mov    %eax,%esi
08334d10 +0x4c0:  lea    -0x7c(%ebp),%eax
08334d13 +0x4c3:  mov    %eax,(%esp)
08334d16 +0x4c6:  call   0817a2fc <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x37a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x37a
08334d1b +0x4cb:  mov    %esi,%eax
08334d1d +0x4cd:  mov    %ebx,%edx
08334d1f +0x4cf:  jmp    08334d3e <+0x4ee>
08334d21 +0x4d1:  lea    -0x7c(%ebp),%eax
08334d24 +0x4d4:  mov    %eax,(%esp)
08334d27 +0x4d7:  call   0817a2fc <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x37a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x37a
08334d2c +0x4dc:  test   %esi,%esi
08334d2e +0x4de:  jne    08334d37 <+0x4e7>
08334d30 +0x4e0:  mov    $0x0,%esi
08334d35 +0x4e5:  jmp    08334d56 <+0x506>
08334d37 +0x4e7:  mov    $0x1,%esi
08334d3c +0x4ec:  jmp    08334d56 <+0x506>
08334d3e +0x4ee:  mov    %edx,%ebx
08334d40 +0x4f0:  mov    %eax,%esi
08334d42 +0x4f2:  lea    -0x64(%ebp),%eax
08334d45 +0x4f5:  mov    %eax,(%esp)
08334d48 +0x4f8:  call   0814aca6 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa45>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa45
08334d4d +0x4fd:  mov    %esi,%eax
08334d4f +0x4ff:  mov    %ebx,%edx
08334d51 +0x501:  jmp    08335231 <+0x9e1>
08334d56 +0x506:  lea    -0x64(%ebp),%eax
08334d59 +0x509:  mov    %eax,(%esp)
08334d5c +0x50c:  call   0814aca6 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa45>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa45
08334d61 +0x511:  test   %esi,%esi
08334d63 +0x513:  je     0833524c <+0x9fc>
08334d69 +0x519:  jmp    083351e5 <+0x995>
08334d6e +0x51e:  mov    -0x2c(%ebp),%eax
08334d71 +0x521:  mov    (%eax),%eax
08334d73 +0x523:  add    $0xc,%eax
08334d76 +0x526:  mov    (%eax),%edx
08334d78 +0x528:  mov    -0x2c(%ebp),%eax
08334d7b +0x52b:  mov    %eax,(%esp)
08334d7e +0x52e:  call   *%edx
08334d80 +0x530:  cmp    $0x10,%eax
08334d83 +0x533:  sete   %al
08334d86 +0x536:  test   %al,%al
08334d88 +0x538:  je     083351e5 <+0x995>
08334d8e +0x53e:  movl   $0xffffffff,-0x20(%ebp)
08334d95 +0x545:  mov    0xc(%ebp),%eax
08334d98 +0x548:  mov    %eax,(%esp)
08334d9b +0x54b:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08334da0 +0x550:  movl   $0x1,0x4c(%esp)
08334da8 +0x558:  movl   $0x1,0x48(%esp)
08334db0 +0x560:  movl   $0x25,0x44(%esp)
08334db8 +0x568:  mov    -0xf5(%ebp),%edx
08334dbe +0x56e:  mov    %edx,0x4(%esp)
08334dc2 +0x572:  mov    -0xf1(%ebp),%edx
08334dc8 +0x578:  mov    %edx,0x8(%esp)
08334dcc +0x57c:  mov    -0xed(%ebp),%edx
08334dd2 +0x582:  mov    %edx,0xc(%esp)
08334dd6 +0x586:  mov    -0xe9(%ebp),%edx
08334ddc +0x58c:  mov    %edx,0x10(%esp)
08334de0 +0x590:  mov    -0xe5(%ebp),%edx
08334de6 +0x596:  mov    %edx,0x14(%esp)
08334dea +0x59a:  mov    -0xe1(%ebp),%edx
08334df0 +0x5a0:  mov    %edx,0x18(%esp)
08334df4 +0x5a4:  mov    -0xdd(%ebp),%edx
08334dfa +0x5aa:  mov    %edx,0x1c(%esp)
08334dfe +0x5ae:  mov    -0xd9(%ebp),%edx
08334e04 +0x5b4:  mov    %edx,0x20(%esp)
08334e08 +0x5b8:  mov    -0xd5(%ebp),%edx
08334e0e +0x5be:  mov    %edx,0x24(%esp)
08334e12 +0x5c2:  mov    -0xd1(%ebp),%edx
08334e18 +0x5c8:  mov    %edx,0x28(%esp)
08334e1c +0x5cc:  mov    -0xcd(%ebp),%edx
08334e22 +0x5d2:  mov    %edx,0x2c(%esp)
08334e26 +0x5d6:  mov    -0xc9(%ebp),%edx
08334e2c +0x5dc:  mov    %edx,0x30(%esp)
08334e30 +0x5e0:  mov    -0xc5(%ebp),%edx
08334e36 +0x5e6:  mov    %edx,0x34(%esp)
08334e3a +0x5ea:  mov    -0xc1(%ebp),%edx
08334e40 +0x5f0:  mov    %edx,0x38(%esp)
08334e44 +0x5f4:  mov    -0xbd(%ebp),%edx
08334e4a +0x5fa:  mov    %edx,0x3c(%esp)
08334e4e +0x5fe:  movzbl -0xb9(%ebp),%edx
08334e55 +0x605:  mov    %dl,0x40(%esp)
08334e59 +0x609:  mov    %eax,(%esp)
08334e5c +0x60c:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
08334e61 +0x611:  mov    %eax,-0x20(%ebp)
08334e64 +0x614:  mov    -0x20(%ebp),%eax
08334e67 +0x617:  shr    $0x1f,%eax
08334e6a +0x61a:  test   %al,%al
08334e6c +0x61c:  je     08334f77 <+0x727>
08334e72 +0x622:  movl   $0x0,0xc(%esp)
08334e7a +0x62a:  movl   $"game_server_msg_80",0x8(%esp)
08334e82 +0x632:  movl   $0x4,0x4(%esp)
08334e8a +0x63a:  movl   $&g_scriptStringManager_,(%esp)
08334e91 +0x641:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08334e96 +0x646:  movl   $0x1d,0x8(%esp)
08334e9e +0x64e:  mov    %eax,0x4(%esp)
08334ea2 +0x652:  lea    -0x9a(%ebp),%eax
08334ea8 +0x658:  mov    %eax,(%esp)
08334eab +0x65b:  call   0807d8d0 <_init+0x1c8>
08334eb0 +0x660:  movl   $0x0,0xc(%esp)
08334eb8 +0x668:  movl   $"game_server_msg_81",0x8(%esp)
08334ec0 +0x670:  movl   $0x4,0x4(%esp)
08334ec8 +0x678:  movl   $&g_scriptStringManager_,(%esp)
08334ecf +0x67f:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08334ed4 +0x684:  movl   $0xff,0x8(%esp)
08334edc +0x68c:  mov    %eax,0x4(%esp)
08334ee0 +0x690:  lea    -0x1f5(%ebp),%eax
08334ee6 +0x696:  mov    %eax,(%esp)
08334ee9 +0x699:  call   0807d8d0 <_init+0x1c8>
08334eee +0x69e:  mov    0xc(%ebp),%eax
08334ef1 +0x6a1:  mov    %eax,(%esp)
08334ef4 +0x6a4:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08334ef9 +0x6a9:  mov    %eax,%esi
08334efb +0x6ab:  lea    -0x1f5(%ebp),%eax
08334f01 +0x6b1:  mov    %eax,(%esp)
08334f04 +0x6b4:  call   0807e3b0 <_init+0xca8>
08334f09 +0x6b9:  mov    %eax,%edi
08334f0b +0x6bb:  mov    0xc(%ebp),%eax
08334f0e +0x6be:  mov    %eax,(%esp)
08334f11 +0x6c1:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08334f16 +0x6c6:  movl   $0x0,0x24(%esp)
08334f1e +0x6ce:  movl   $0x0,0x20(%esp)
08334f26 +0x6d6:  mov    %esi,0x1c(%esp)
08334f2a +0x6da:  movl   $0x0,0x18(%esp)
08334f32 +0x6e2:  mov    %edi,0x14(%esp)
08334f36 +0x6e6:  lea    -0x1f5(%ebp),%edx
08334f3c +0x6ec:  mov    %edx,0x10(%esp)
08334f40 +0x6f0:  mov    %eax,0xc(%esp)
08334f44 +0x6f4:  movl   $0x0,0x8(%esp)
08334f4c +0x6fc:  lea    -0xf5(%ebp),%eax
08334f52 +0x702:  mov    %eax,0x4(%esp)
08334f56 +0x706:  lea    -0x9a(%ebp),%eax
08334f5c +0x70c:  mov    %eax,(%esp)
08334f5f +0x70f:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
08334f64 +0x714:  lea    -0xf5(%ebp),%eax
08334f6a +0x71a:  mov    %eax,(%esp)
08334f6d +0x71d:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
08334f72 +0x722:  jmp    083351e5 <+0x995>
08334f77 +0x727:  mov    -0x20(%ebp),%eax
08334f7a +0x72a:  mov    %eax,0xc(%esp)
08334f7e +0x72e:  movl   $0x0,0x8(%esp)
08334f86 +0x736:  movl   $0x1,0x4(%esp)
08334f8e +0x73e:  mov    0xc(%ebp),%eax
08334f91 +0x741:  mov    %eax,(%esp)
08334f94 +0x744:  call   0867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItem(CUser::eSendTarget, ENUM_ITEMSPACE, int)
08334f99 +0x749:  jmp    083351e5 <+0x995>
08334f9e +0x74e:  movl   $0xffffffff,-0x1c(%ebp)
08334fa5 +0x755:  mov    0xc(%ebp),%eax
08334fa8 +0x758:  mov    %eax,(%esp)
08334fab +0x75b:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08334fb0 +0x760:  movl   $0x1,0x4c(%esp)
08334fb8 +0x768:  movl   $0x1,0x48(%esp)
08334fc0 +0x770:  movl   $0x25,0x44(%esp)
08334fc8 +0x778:  mov    -0xf5(%ebp),%edx
08334fce +0x77e:  mov    %edx,0x4(%esp)
08334fd2 +0x782:  mov    -0xf1(%ebp),%edx
08334fd8 +0x788:  mov    %edx,0x8(%esp)
08334fdc +0x78c:  mov    -0xed(%ebp),%edx
08334fe2 +0x792:  mov    %edx,0xc(%esp)
08334fe6 +0x796:  mov    -0xe9(%ebp),%edx
08334fec +0x79c:  mov    %edx,0x10(%esp)
08334ff0 +0x7a0:  mov    -0xe5(%ebp),%edx
08334ff6 +0x7a6:  mov    %edx,0x14(%esp)
08334ffa +0x7aa:  mov    -0xe1(%ebp),%edx
08335000 +0x7b0:  mov    %edx,0x18(%esp)
08335004 +0x7b4:  mov    -0xdd(%ebp),%edx
0833500a +0x7ba:  mov    %edx,0x1c(%esp)
0833500e +0x7be:  mov    -0xd9(%ebp),%edx
08335014 +0x7c4:  mov    %edx,0x20(%esp)
08335018 +0x7c8:  mov    -0xd5(%ebp),%edx
0833501e +0x7ce:  mov    %edx,0x24(%esp)
08335022 +0x7d2:  mov    -0xd1(%ebp),%edx
08335028 +0x7d8:  mov    %edx,0x28(%esp)
0833502c +0x7dc:  mov    -0xcd(%ebp),%edx
08335032 +0x7e2:  mov    %edx,0x2c(%esp)
08335036 +0x7e6:  mov    -0xc9(%ebp),%edx
0833503c +0x7ec:  mov    %edx,0x30(%esp)
08335040 +0x7f0:  mov    -0xc5(%ebp),%edx
08335046 +0x7f6:  mov    %edx,0x34(%esp)
0833504a +0x7fa:  mov    -0xc1(%ebp),%edx
08335050 +0x800:  mov    %edx,0x38(%esp)
08335054 +0x804:  mov    -0xbd(%ebp),%edx
0833505a +0x80a:  mov    %edx,0x3c(%esp)
0833505e +0x80e:  movzbl -0xb9(%ebp),%edx
08335065 +0x815:  mov    %dl,0x40(%esp)
08335069 +0x819:  mov    %eax,(%esp)
0833506c +0x81c:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
08335071 +0x821:  mov    %eax,-0x1c(%ebp)
08335074 +0x824:  mov    -0x1c(%ebp),%eax
08335077 +0x827:  shr    $0x1f,%eax
0833507a +0x82a:  test   %al,%al
0833507c +0x82c:  je     08335184 <+0x934>
08335082 +0x832:  movl   $0x0,0xc(%esp)
0833508a +0x83a:  movl   $"game_server_msg_80",0x8(%esp)
08335092 +0x842:  movl   $0x4,0x4(%esp)
0833509a +0x84a:  movl   $&g_scriptStringManager_,(%esp)
083350a1 +0x851:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
083350a6 +0x856:  movl   $0x1d,0x8(%esp)
083350ae +0x85e:  mov    %eax,0x4(%esp)
083350b2 +0x862:  lea    -0xb8(%ebp),%eax
083350b8 +0x868:  mov    %eax,(%esp)
083350bb +0x86b:  call   0807d8d0 <_init+0x1c8>
083350c0 +0x870:  movl   $0x0,0xc(%esp)
083350c8 +0x878:  movl   $"game_server_msg_81",0x8(%esp)
083350d0 +0x880:  movl   $0x4,0x4(%esp)
083350d8 +0x888:  movl   $&g_scriptStringManager_,(%esp)
083350df +0x88f:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
083350e4 +0x894:  movl   $0xff,0x8(%esp)
083350ec +0x89c:  mov    %eax,0x4(%esp)
083350f0 +0x8a0:  lea    -0x1f5(%ebp),%eax
083350f6 +0x8a6:  mov    %eax,(%esp)
083350f9 +0x8a9:  call   0807d8d0 <_init+0x1c8>
083350fe +0x8ae:  mov    0xc(%ebp),%eax
08335101 +0x8b1:  mov    %eax,(%esp)
08335104 +0x8b4:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08335109 +0x8b9:  mov    %eax,%esi
0833510b +0x8bb:  lea    -0x1f5(%ebp),%eax
08335111 +0x8c1:  mov    %eax,(%esp)
08335114 +0x8c4:  call   0807e3b0 <_init+0xca8>
08335119 +0x8c9:  mov    %eax,%edi
0833511b +0x8cb:  mov    0xc(%ebp),%eax
0833511e +0x8ce:  mov    %eax,(%esp)
08335121 +0x8d1:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08335126 +0x8d6:  movl   $0x0,0x24(%esp)
0833512e +0x8de:  movl   $0x0,0x20(%esp)
08335136 +0x8e6:  mov    %esi,0x1c(%esp)
0833513a +0x8ea:  movl   $0x0,0x18(%esp)
08335142 +0x8f2:  mov    %edi,0x14(%esp)
08335146 +0x8f6:  lea    -0x1f5(%ebp),%edx
0833514c +0x8fc:  mov    %edx,0x10(%esp)
08335150 +0x900:  mov    %eax,0xc(%esp)
08335154 +0x904:  movl   $0x0,0x8(%esp)
0833515c +0x90c:  lea    -0xf5(%ebp),%eax
08335162 +0x912:  mov    %eax,0x4(%esp)
08335166 +0x916:  lea    -0xb8(%ebp),%eax
0833516c +0x91c:  mov    %eax,(%esp)
0833516f +0x91f:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
08335174 +0x924:  lea    -0xf5(%ebp),%eax
0833517a +0x92a:  mov    %eax,(%esp)
0833517d +0x92d:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
08335182 +0x932:  jmp    083351e5 <+0x995>
08335184 +0x934:  lea    -0xf5(%ebp),%eax
0833518a +0x93a:  mov    %eax,(%esp)
0833518d +0x93d:  call   08335b76 <_GLOBAL__I__ZN22CConditionEventManagerC2Ev+0x1c>  ; global constructors keyed to CConditionEventManager::CConditionEventManager()+0x1c
08335192 +0x942:  test   %al,%al
08335194 +0x944:  je     083351ba <+0x96a>
08335196 +0x946:  mov    -0x1c(%ebp),%eax
08335199 +0x949:  mov    %eax,0xc(%esp)
0833519d +0x94d:  movl   $0x7,0x8(%esp)
083351a5 +0x955:  movl   $0x1,0x4(%esp)
083351ad +0x95d:  mov    0xc(%ebp),%eax
083351b0 +0x960:  mov    %eax,(%esp)
083351b3 +0x963:  call   0867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItem(CUser::eSendTarget, ENUM_ITEMSPACE, int)
083351b8 +0x968:  jmp    083351e5 <+0x995>
083351ba +0x96a:  mov    -0x1c(%ebp),%eax
083351bd +0x96d:  mov    %eax,0xc(%esp)
083351c1 +0x971:  movl   $0x0,0x8(%esp)
083351c9 +0x979:  movl   $0x1,0x4(%esp)
083351d1 +0x981:  mov    0xc(%ebp),%eax
083351d4 +0x984:  mov    %eax,(%esp)
083351d7 +0x987:  call   0867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItem(CUser::eSendTarget, ENUM_ITEMSPACE, int)
083351dc +0x98c:  jmp    083351e5 <+0x995>
083351de +0x98e:  mov    $0x11,%ebx
083351e3 +0x993:  jmp    0833524c <+0x9fc>
083351e5 +0x995:  lea    -0x48(%ebp),%eax
083351e8 +0x998:  mov    %eax,(%esp)
083351eb +0x99b:  call   080da746 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x8e3>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x8e3
083351f0 +0x9a0:  lea    -0x38(%ebp),%eax
083351f3 +0x9a3:  mov    0x18(%ebp),%edx
083351f6 +0x9a6:  mov    %edx,0x4(%esp)
083351fa +0x9aa:  mov    %eax,(%esp)
083351fd +0x9ad:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
08335202 +0x9b2:  sub    $0x4,%esp
08335205 +0x9b5:  lea    -0x38(%ebp),%eax
08335208 +0x9b8:  mov    %eax,0x4(%esp)
0833520c +0x9bc:  lea    -0x48(%ebp),%eax
0833520f +0x9bf:  mov    %eax,(%esp)
08335212 +0x9c2:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
08335217 +0x9c7:  test   %al,%al
08335219 +0x9c9:  jne    083349b6 <+0x166>
0833521f +0x9cf:  mov    0xc(%ebp),%eax
08335222 +0x9d2:  mov    %eax,(%esp)
08335225 +0x9d5:  call   08335c38 <_GLOBAL__I__ZN22CConditionEventManagerC2Ev+0xde>  ; global constructors keyed to CConditionEventManager::CConditionEventManager()+0xde
0833522a +0x9da:  mov    $0x0,%ebx
0833522f +0x9df:  jmp    0833524c <+0x9fc>
08335231 +0x9e1:  mov    %edx,%ebx
08335233 +0x9e3:  mov    %eax,%esi
08335235 +0x9e5:  lea    -0x44(%ebp),%eax
08335238 +0x9e8:  mov    %eax,(%esp)
0833523b +0x9eb:  call   08335cdc <_GLOBAL__I__ZN22CConditionEventManagerC2Ev+0x182>  ; global constructors keyed to CConditionEventManager::CConditionEventManager()+0x182
08335240 +0x9f0:  mov    %esi,%eax
08335242 +0x9f2:  mov    %ebx,%edx
08335244 +0x9f4:  mov    %eax,(%esp)
08335247 +0x9f7:  call   08ae3750 <_Unwind_Resume>
0833524c +0x9fc:  lea    -0x44(%ebp),%eax
0833524f +0x9ff:  mov    %eax,(%esp)
08335252 +0xa02:  call   08335cdc <_GLOBAL__I__ZN22CConditionEventManagerC2Ev+0x182>  ; global constructors keyed to CConditionEventManager::CConditionEventManager()+0x182
08335257 +0xa07:  mov    %ebx,%eax
08335259 +0xa09:  lea    -0xc(%ebp),%esp
0833525c +0xa0c:  add    $0x0,%esp
0833525f +0xa0f:  pop    %ebx
08335260 +0xa10:  pop    %esi
08335261 +0xa11:  pop    %edi
08335262 +0xa12:  pop    %ebp
08335263 +0xa13:  ret
```

## 反编译 C

```c
// CConditionEventManager::RequestConditionEventReward @ 0x8334850

/* CConditionEventManager::RequestConditionEventReward(CUser*, short, char, std::map<int, int,
   std::less<int>, std::allocator<std::pair<int const, int> > >&) */

undefined4 __thiscall
CConditionEventManager::RequestConditionEventReward
          (CConditionEventManager *this,CUser *param_1,short param_2,char param_3,map *param_4)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  CInventory *pCVar5;
  int iVar6;
  undefined4 uVar7;
  CDataManager *this_00;
  undefined4 *puVar8;
  undefined4 uVar9;
  char *pcVar10;
  size_t sVar11;
  undefined4 unaff_EBX;
  char local_1f9 [256];
  undefined2 local_f9;
  undefined2 uStack_f7;
  undefined2 uStack_f5;
  undefined2 uStack_f3;
  undefined4 local_f1;
  undefined4 local_ed;
  undefined4 local_e9;
  undefined4 local_e5;
  undefined4 local_e1;
  undefined4 local_dd;
  undefined4 local_d9;
  undefined4 local_d5;
  undefined4 local_d1;
  undefined4 local_cd;
  undefined4 local_c9;
  undefined4 local_c5;
  undefined4 local_c1;
  undefined1 local_bd;
  char local_bc [30];
  char local_9e [30];
  stCeraShopItemParam_t local_80 [24];
  vector<Inven_Item,std::allocator<Inven_Item>> local_68 [12];
  int local_5c;
  bool local_55;
  int local_54 [2];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_4c [4];
  vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>> local_48 [12];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_3c [4];
  int local_38;
  short local_34;
  short local_32;
  int *local_30;
  int local_2c;
  long local_28;
  int local_24;
  int local_20;
  
  piVar3 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x71);
  cVar2 = (**(code **)(*piVar3 + 0x34))(piVar3,0);
  if (cVar2 == '\x01') {
    iVar4 = G_CDataManager();
    local_38 = *(int *)(iVar4 + 0x4d98);
    if (param_2 == local_38) {
      if (param_3 < '\x01') {
        unaff_EBX = 0x13;
      }
      else {
        local_34 = CUserCharacInfo::GetCurConditionEventStep((CUserCharacInfo *)param_1);
        if (local_34 < param_3) {
          unaff_EBX = 0x13;
        }
        else {
          local_32 = CUserCharacInfo::GetCurConditionEventRewardStep((CUserCharacInfo *)param_1);
          if ((int)local_32 == param_3 + -1) {
            std::vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>>::
            vector(local_48);
                    /* try { // try from 08334968 to 08334bf4 has its CatchHandler @ 08335231 */
            GetConditionRewardInfo(this,'\0',(vector *)local_48,param_2,param_3);
            ConditionRewardSameItemCombine((vector *)this,(map *)local_48);
            cVar2 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::empty
                              ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                *)param_4);
            if (cVar2 != '\x01') {
              std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin
                        (local_4c);
              while( true ) {
                std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end
                          (local_3c);
                cVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                                  ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_4c,
                                   (_Rb_tree_iterator *)local_3c);
                if (cVar2 == '\0') break;
                piVar3 = (int *)std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                                          ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_4c);
                if ((*piVar3 == 1) &&
                   (iVar4 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_4c),
                   -1 < *(int *)(iVar4 + 4))) {
                  bVar1 = true;
                }
                else {
                  bVar1 = false;
                }
                if (bVar1) {
                  pCVar5 = (CInventory *)
                           CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                  iVar6 = CInventory::GetEventCoin(pCVar5);
                  iVar4 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                                    ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_4c);
                  iVar4 = *(int *)(iVar4 + 4);
                  pCVar5 = (CInventory *)
                           CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                  CInventory::SetEventCoin(pCVar5,iVar6 + iVar4);
                  iVar4 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                                    ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_4c);
                  uVar9 = *(undefined4 *)(iVar4 + 4);
                  pCVar5 = (CInventory *)
                           CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                  uVar7 = CInventory::GetEventCoin(pCVar5);
                  cUserHistoryLog::EventCoinAdd
                            ((cUserHistoryLog *)(param_1 + 0x79700),uVar7,uVar9,2);
                  CUser::SaveMoneyCoin(param_1);
                  CUser::SendCoin(param_1);
                  goto LAB_083351e5;
                }
                piVar3 = (int *)std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                                          ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_4c);
                iVar4 = *piVar3;
                this_00 = (CDataManager *)G_CDataManager();
                local_30 = (int *)CDataManager::find_item(this_00,iVar4);
                if (local_30 == (int *)0x0) {
                  unaff_EBX = 0x11;
                  goto LAB_0833524c;
                }
                Inven_Item::Inven_Item((Inven_Item *)&local_f9);
                puVar8 = (undefined4 *)
                         std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                                   ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_4c);
                uStack_f7 = (undefined2)*puVar8;
                uStack_f5 = (undefined2)((uint)*puVar8 >> 0x10);
                iVar4 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                                  ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_4c);
                uVar9 = *(undefined4 *)(iVar4 + 4);
                iVar4 = G_CDataManager();
                CItemList::create_item(*(CItemList **)(iVar4 + 0xc),0,&local_f9,uVar9);
                if ((CONCAT22(uStack_f5,uStack_f7) == 0) ||
                   (iVar4 = Inven_Item::get_add_info((Inven_Item *)&local_f9), iVar4 == 0)) {
                  bVar1 = false;
                }
                else {
                  bVar1 = true;
                }
                if (bVar1) {
                  local_54[1] = 0;
                  local_54[0] = 0;
                  local_55 = false;
                  cVar2 = WongWork::CCeraShop::IsSpecialItem
                                    (GlobalData::s_pCeraShop,CONCAT22(uStack_f5,uStack_f7),
                                     local_54 + 1,local_54,&local_55);
                  if (cVar2 == '\0') {
                    local_20 = 0xffffffff;
                    uVar9 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                    local_20 = CInventory::insertItemIntoInventory
                                         (uVar9,CONCAT22(uStack_f7,local_f9),
                                          CONCAT22(uStack_f3,uStack_f5),local_f1,local_ed,local_e9,
                                          local_e5,local_e1,local_dd,local_d9,local_d5,local_d1,
                                          local_cd,local_c9,local_c5,local_c1,local_bd,0x25,1,1);
                    if (local_20 < 0) {
                      pcVar10 = (char *)RDARScriptStringManager::findString
                                                  ((RDARScriptStringManager *)g_scriptStringManager_
                                                   ,4,"game_server_msg_80",(bool *)0x0);
                      strncpy(local_bc,pcVar10,0x1d);
                      pcVar10 = (char *)RDARScriptStringManager::findString
                                                  ((RDARScriptStringManager *)g_scriptStringManager_
                                                   ,4,"game_server_msg_81",(bool *)0x0);
                      strncpy(local_1f9,pcVar10,0xff);
                      uVar9 = CUser::GetServerGroup(param_1);
                      sVar11 = strlen(local_1f9);
                      uVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                      WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                                (local_bc,&local_f9,0,uVar7,local_1f9,sVar11,0,uVar9,0,0);
                      Inven_Item::reset((Inven_Item *)&local_f9);
                    }
                    else {
                      cVar2 = Inven_Item::IsCreatureItemType((Inven_Item *)&local_f9);
                      if (cVar2 == '\0') {
                        CUser::SendUpdateItem(param_1,1,0,local_20);
                      }
                      else {
                        CUser::SendUpdateItem(param_1,1,7,local_20);
                      }
                    }
                  }
                  else {
                    iVar4 = (**(code **)(*local_30 + 0xc))(local_30);
                    if ((iVar4 == 0x10) || (CONCAT22(uStack_f5,uStack_f7) == 1)) {
                      bVar1 = false;
                    }
                    else {
                      bVar1 = true;
                    }
                    if (bVar1) {
                      local_5c = 0;
                      iVar4 = CONCAT22(uStack_f5,uStack_f7);
                      iVar6 = G_CDataManager();
                      local_2c = CItemList::GetRestrictCode(*(CItemList **)(iVar6 + 0xc),iVar4);
                      local_28 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
                      std::vector<Inven_Item,std::allocator<Inven_Item>>::vector(local_68);
                    /* try { // try from 08334bfb to 08334bff has its CatchHandler @ 08334d3e */
                      WongWork::CCeraShop::stCeraShopItemParam_t::stCeraShopItemParam_t(local_80);
                    /* try { // try from 08334c66 to 08334d04 has its CatchHandler @ 08334d0c */
                      cVar2 = WongWork::CCeraShop::ProcessSpecialItem
                                        (GlobalData::s_pCeraShop,param_1,
                                         CONCAT22(uStack_f5,uStack_f7),local_2c,&local_5c,local_28,
                                         true,(vector *)local_68,local_80,'\0','\0',false,1);
                      if (cVar2 == '\0') {
LAB_08334d05:
                        bVar1 = true;
                      }
                      else {
                        if (local_5c == 0) {
                          if ((local_2c == 0) ||
                             (cVar2 = CUser::IsRestrictedGoods(param_1,local_2c), cVar2 == '\x01'))
                          {
                            bVar1 = false;
                          }
                          else {
                            bVar1 = true;
                          }
                          if (bVar1) {
                            CUser::SetRestrictedGoods(param_1,local_2c);
                            WongWork::CCeraShop::SaveFeaturedIdx(param_1,local_2c,local_28,0);
                            CUser::SendRestrictedGoods(param_1,true,local_2c);
                          }
                          goto LAB_08334d05;
                        }
                        unaff_EBX = 0x11;
                        bVar1 = false;
                      }
                    /* try { // try from 08334d27 to 08334d2b has its CatchHandler @ 08334d3e */
                      WongWork::CCeraShop::stCeraShopItemParam_t::~stCeraShopItemParam_t(local_80);
                    /* try { // try from 08334d5c to 08335201 has its CatchHandler @ 08335231 */
                      std::vector<Inven_Item,std::allocator<Inven_Item>>::~vector(local_68);
                      if (!bVar1) goto LAB_0833524c;
                    }
                    else {
                      iVar4 = (**(code **)(*local_30 + 0xc))(local_30);
                      if (iVar4 == 0x10) {
                        local_24 = 0xffffffff;
                        uVar9 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                        local_24 = CInventory::insertItemIntoInventory
                                             (uVar9,CONCAT22(uStack_f7,local_f9),
                                              CONCAT22(uStack_f3,uStack_f5),local_f1,local_ed,
                                              local_e9,local_e5,local_e1,local_dd,local_d9,local_d5,
                                              local_d1,local_cd,local_c9,local_c5,local_c1,local_bd,
                                              0x25,1,1);
                        if (local_24 < 0) {
                          pcVar10 = (char *)RDARScriptStringManager::findString
                                                      ((RDARScriptStringManager *)
                                                       g_scriptStringManager_,4,"game_server_msg_80"
                                                       ,(bool *)0x0);
                          strncpy(local_9e,pcVar10,0x1d);
                          pcVar10 = (char *)RDARScriptStringManager::findString
                                                      ((RDARScriptStringManager *)
                                                       g_scriptStringManager_,4,"game_server_msg_81"
                                                       ,(bool *)0x0);
                          strncpy(local_1f9,pcVar10,0xff);
                          uVar9 = CUser::GetServerGroup(param_1);
                          sVar11 = strlen(local_1f9);
                          uVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                          WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                                    (local_9e,&local_f9,0,uVar7,local_1f9,sVar11,0,uVar9,0,0);
                          Inven_Item::reset((Inven_Item *)&local_f9);
                        }
                        else {
                          CUser::SendUpdateItem(param_1,1,0,local_24);
                        }
                      }
                    }
                  }
                }
LAB_083351e5:
                std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++
                          ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_4c);
              }
            }
            CUserCharacInfo::IncCurConditionEventRewardStep((CUserCharacInfo *)param_1);
            unaff_EBX = 0;
LAB_0833524c:
            std::vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>>::
            ~vector(local_48);
          }
          else {
            unaff_EBX = 0x13;
          }
        }
      }
    }
    else {
      unaff_EBX = 1;
    }
  }
  else {
    unaff_EBX = 0;
  }
  return unaff_EBX;
}
```
