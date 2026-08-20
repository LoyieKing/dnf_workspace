# respond_special_item_package

`_ZN18SpecialItemHandler28respond_special_item_packageEiRK19STSpecailItem_ParamR20STSpecailItem_Result`

`SpecialItemHandler::respond_special_item_package(int, STSpecailItem_Param const&, STSpecailItem_Result&)`

| 类 | 地址 |
|---|---|
| `SpecialItemHandler` | `0x0827c204` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827c204  _ZN18SpecialItemHandler28respond_special_item_packageEiRK19STSpecailItem_ParamR20STSpecailItem_Result
#           SpecialItemHandler::respond_special_item_package(int, STSpecailItem_Param const&, STSpecailItem_Result&)
# range [0x0827c204, 0x0827ca49]
0827c204 +0x000:  push   %ebp
0827c205 +0x001:  mov    %esp,%ebp
0827c207 +0x003:  push   %edi
0827c208 +0x004:  push   %esi
0827c209 +0x005:  push   %ebx
0827c20a +0x006:  sub    $0xcc,%esp
0827c210 +0x00c:  mov    0x10(%ebp),%eax
0827c213 +0x00f:  mov    (%eax),%eax
0827c215 +0x011:  mov    %eax,-0x4c(%ebp)
0827c218 +0x014:  mov    0x10(%ebp),%eax
0827c21b +0x017:  mov    0x4(%eax),%eax
0827c21e +0x01a:  mov    %eax,-0x48(%ebp)
0827c221 +0x01d:  mov    0x10(%ebp),%eax
0827c224 +0x020:  mov    0xc(%eax),%eax
0827c227 +0x023:  mov    %eax,-0x44(%ebp)
0827c22a +0x026:  mov    0x10(%ebp),%eax
0827c22d +0x029:  mov    0x10(%eax),%eax
0827c230 +0x02c:  mov    %eax,-0x40(%ebp)
0827c233 +0x02f:  mov    0x10(%ebp),%eax
0827c236 +0x032:  mov    0x14(%eax),%eax
0827c239 +0x035:  mov    %eax,-0x3c(%ebp)
0827c23c +0x038:  mov    0x10(%ebp),%eax
0827c23f +0x03b:  mov    0x18(%eax),%eax
0827c242 +0x03e:  mov    %eax,-0x38(%ebp)
0827c245 +0x041:  cmpl   $0x1b,-0x48(%ebp)
0827c249 +0x045:  jne    0827c358 <+0x154>
0827c24f +0x04b:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0827c254 +0x050:  movl   $0xc3,0x8(%esp)
0827c25c +0x058:  movl   $"SpecialItemHandler.cpp",0x4(%esp)
0827c264 +0x060:  mov    %eax,(%esp)
0827c267 +0x063:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0827c26c +0x068:  movl   $0x1,0x8(%esp)
0827c274 +0x070:  mov    %eax,0x4(%esp)
0827c278 +0x074:  lea    -0x74(%ebp),%eax
0827c27b +0x077:  mov    %eax,(%esp)
0827c27e +0x07a:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0827c283 +0x07f:  lea    -0x74(%ebp),%eax
0827c286 +0x082:  mov    %eax,(%esp)
0827c289 +0x085:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0827c28e +0x08a:  movl   $0xb4,0x4(%esp)
0827c296 +0x092:  mov    %eax,(%esp)
0827c299 +0x095:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0827c29e +0x09a:  lea    -0x74(%ebp),%eax
0827c2a1 +0x09d:  mov    %eax,(%esp)
0827c2a4 +0x0a0:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0827c2a9 +0x0a5:  movl   $0xffffffff,0x4(%esp)
0827c2b1 +0x0ad:  mov    %eax,(%esp)
0827c2b4 +0x0b0:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0827c2b9 +0x0b5:  lea    -0x74(%ebp),%eax
0827c2bc +0x0b8:  mov    %eax,(%esp)
0827c2bf +0x0bb:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0827c2c4 +0x0c0:  mov    %eax,(%esp)
0827c2c7 +0x0c3:  call   0827dfa2 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0xc4>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0xc4
0827c2cc +0x0c8:  mov    %eax,-0x2c(%ebp)
0827c2cf +0x0cb:  mov    -0x2c(%ebp),%eax
0827c2d2 +0x0ce:  movl   $0x5,0x8(%esp)
0827c2da +0x0d6:  movl   $"0612",0x4(%esp)
0827c2e2 +0x0de:  mov    %eax,(%esp)
0827c2e5 +0x0e1:  call   0807d8a0 <_init+0x198>
0827c2ea +0x0e6:  mov    -0x4c(%ebp),%eax
0827c2ed +0x0e9:  mov    %eax,(%esp)
0827c2f0 +0x0ec:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0827c2f5 +0x0f1:  mov    -0x2c(%ebp),%edx
0827c2f8 +0x0f4:  mov    %eax,0x5(%edx)
0827c2fb +0x0f7:  movl   $0xffffffff,0x4(%esp)
0827c303 +0x0ff:  mov    -0x4c(%ebp),%eax
0827c306 +0x102:  mov    %eax,(%esp)
0827c309 +0x105:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
0827c30e +0x10a:  mov    -0x2c(%ebp),%edx
0827c311 +0x10d:  mov    %eax,0x9(%edx)
0827c314 +0x110:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0827c319 +0x115:  lea    -0x74(%ebp),%edx
0827c31c +0x118:  mov    %edx,0x8(%esp)
0827c320 +0x11c:  movl   $0x4,0x4(%esp)
0827c328 +0x124:  mov    %eax,(%esp)
0827c32b +0x127:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0827c330 +0x12c:  jmp    0827c34d <+0x149>
0827c332 +0x12e:  mov    %edx,%ebx
0827c334 +0x130:  mov    %eax,%esi
0827c336 +0x132:  lea    -0x74(%ebp),%eax
0827c339 +0x135:  mov    %eax,(%esp)
0827c33c +0x138:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0827c341 +0x13d:  mov    %esi,%eax
0827c343 +0x13f:  mov    %ebx,%edx
0827c345 +0x141:  mov    %eax,(%esp)
0827c348 +0x144:  call   08ae3750 <_Unwind_Resume>
0827c34d +0x149:  lea    -0x74(%ebp),%eax
0827c350 +0x14c:  mov    %eax,(%esp)
0827c353 +0x14f:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0827c358 +0x154:  mov    0x8(%ebp),%eax
0827c35b +0x157:  mov    (%eax),%eax
0827c35d +0x159:  mov    -0x48(%ebp),%edx
0827c360 +0x15c:  mov    %edx,0xc(%esp)
0827c364 +0x160:  movl   $0x5,0x8(%esp)
0827c36c +0x168:  mov    -0x4c(%ebp),%edx
0827c36f +0x16b:  mov    %edx,0x4(%esp)
0827c373 +0x16f:  mov    %eax,(%esp)
0827c376 +0x172:  call   08327454 <_ZN8WongWork9CCeraShop17_onBuySpecialItemEP5CUser21ENUM_CERA_SPECIALITEMm>  ; WongWork::CCeraShop::_onBuySpecialItem(CUser*, ENUM_CERA_SPECIALITEM, unsigned long)
0827c37b +0x177:  movl   $0x0,-0x34(%ebp)
0827c382 +0x17e:  mov    -0x48(%ebp),%ebx
0827c385 +0x181:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0827c38a +0x186:  mov    %ebx,0x4(%esp)
0827c38e +0x18a:  mov    %eax,(%esp)
0827c391 +0x18d:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0827c396 +0x192:  mov    %eax,-0x30(%ebp)
0827c399 +0x195:  mov    -0x30(%ebp),%eax
0827c39c +0x198:  add    $0x21c,%eax
0827c3a1 +0x19d:  mov    %eax,0x4(%esp)
0827c3a5 +0x1a1:  lea    -0x6c(%ebp),%eax
0827c3a8 +0x1a4:  mov    %eax,(%esp)
0827c3ab +0x1a7:  call   0827dfb8 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0xda>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0xda
0827c3b0 +0x1ac:  mov    -0x40(%ebp),%eax
0827c3b3 +0x1af:  add    $0xc,%eax
0827c3b6 +0x1b2:  mov    %eax,(%esp)
0827c3b9 +0x1b5:  call   0827e06c <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x18e>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x18e
0827c3be +0x1ba:  xor    $0x1,%eax
0827c3c1 +0x1bd:  test   %al,%al
0827c3c3 +0x1bf:  je     0827c70d <+0x509>
0827c3c9 +0x1c5:  mov    -0x30(%ebp),%eax
0827c3cc +0x1c8:  add    $0x234,%eax
0827c3d1 +0x1cd:  mov    %eax,-0x28(%ebp)
0827c3d4 +0x1d0:  mov    -0x40(%ebp),%eax
0827c3d7 +0x1d3:  add    $0xc,%eax
0827c3da +0x1d6:  mov    %eax,(%esp)
0827c3dd +0x1d9:  call   0817b1c6 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x1244>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x1244
0827c3e2 +0x1de:  cmp    $0x1,%eax
0827c3e5 +0x1e1:  seta   %al
0827c3e8 +0x1e4:  test   %al,%al
0827c3ea +0x1e6:  je     0827c4f7 <+0x2f3>
0827c3f0 +0x1ec:  mov    -0x40(%ebp),%eax
0827c3f3 +0x1ef:  lea    0xc(%eax),%edx
0827c3f6 +0x1f2:  lea    -0x7c(%ebp),%eax
0827c3f9 +0x1f5:  mov    %edx,0x4(%esp)
0827c3fd +0x1f9:  mov    %eax,(%esp)
0827c400 +0x1fc:  call   0817afde <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x105c>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x105c
0827c405 +0x201:  sub    $0x4,%esp
0827c408 +0x204:  jmp    0827c4c5 <+0x2c1>
0827c40d +0x209:  lea    -0x7c(%ebp),%eax
0827c410 +0x20c:  mov    %eax,(%esp)
0827c413 +0x20f:  call   0827e0dc <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x1fe>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x1fe
0827c418 +0x214:  movzwl 0x6(%eax),%eax
0827c41c +0x218:  movzwl %ax,%eax
0827c41f +0x21b:  mov    %eax,-0xa4(%ebp)
0827c425 +0x221:  lea    -0x7c(%ebp),%eax
0827c428 +0x224:  mov    %eax,(%esp)
0827c42b +0x227:  call   0827e0dc <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x1fe>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x1fe
0827c430 +0x22c:  movzwl 0x4(%eax),%eax
0827c434 +0x230:  movzwl %ax,%edi
0827c437 +0x233:  lea    -0x7c(%ebp),%eax
0827c43a +0x236:  mov    %eax,(%esp)
0827c43d +0x239:  call   0827e0dc <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x1fe>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x1fe
0827c442 +0x23e:  mov    (%eax),%esi
0827c444 +0x240:  movl   $0xffffffff,0x4(%esp)
0827c44c +0x248:  mov    -0x4c(%ebp),%eax
0827c44f +0x24b:  mov    %eax,(%esp)
0827c452 +0x24e:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
0827c457 +0x253:  mov    %eax,%ebx
0827c459 +0x255:  mov    -0x4c(%ebp),%eax
0827c45c +0x258:  mov    %eax,(%esp)
0827c45f +0x25b:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0827c464 +0x260:  movl   $0x0,0x4(%esp)
0827c46c +0x268:  mov    %eax,(%esp)
0827c46f +0x26b:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0827c474 +0x270:  mov    -0xa4(%ebp),%edx
0827c47a +0x276:  mov    %edx,0x24(%esp)
0827c47e +0x27a:  mov    %edi,0x20(%esp)
0827c482 +0x27e:  mov    %esi,0x1c(%esp)
0827c486 +0x282:  mov    %ebx,0x18(%esp)
0827c48a +0x286:  mov    %eax,0x14(%esp)
0827c48e +0x28a:  movl   $"kdd372418Log::Package Selection item error (%s,%d,%d,%d,%d)",0x10(%esp)
0827c496 +0x292:  movl   $0xdb,0xc(%esp)
0827c49e +0x29a:  movl   $&_ZZN18SpecialItemHandler28respond_special_item_packageEiRK19STSpecailItem_ParamR20STSpecailItem_ResultE19__PRETTY_FUNCTION__,0x8(%esp)
0827c4a6 +0x2a2:  movl   $"SpecialItemHandler.cpp",0x4(%esp)
0827c4ae +0x2aa:  movl   $0x1,(%esp)
0827c4b5 +0x2b1:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0827c4ba +0x2b6:  lea    -0x7c(%ebp),%eax
0827c4bd +0x2b9:  mov    %eax,(%esp)
0827c4c0 +0x2bc:  call   0827e0e6 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x208>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x208
0827c4c5 +0x2c1:  mov    -0x40(%ebp),%eax
0827c4c8 +0x2c4:  lea    0xc(%eax),%edx
0827c4cb +0x2c7:  lea    -0x60(%ebp),%eax
0827c4ce +0x2ca:  mov    %edx,0x4(%esp)
0827c4d2 +0x2ce:  mov    %eax,(%esp)
0827c4d5 +0x2d1:  call   0817aa72 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xaf0>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xaf0
0827c4da +0x2d6:  sub    $0x4,%esp
0827c4dd +0x2d9:  lea    -0x60(%ebp),%eax
0827c4e0 +0x2dc:  mov    %eax,0x4(%esp)
0827c4e4 +0x2e0:  lea    -0x7c(%ebp),%eax
0827c4e7 +0x2e3:  mov    %eax,(%esp)
0827c4ea +0x2e6:  call   0827e0b0 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x1d2>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x1d2
0827c4ef +0x2eb:  test   %al,%al
0827c4f1 +0x2ed:  jne    0827c40d <+0x209>
0827c4f7 +0x2f3:  mov    -0x40(%ebp),%eax
0827c4fa +0x2f6:  lea    0xc(%eax),%edx
0827c4fd +0x2f9:  lea    -0x78(%ebp),%eax
0827c500 +0x2fc:  mov    %edx,0x4(%esp)
0827c504 +0x300:  mov    %eax,(%esp)
0827c507 +0x303:  call   0817afde <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x105c>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x105c
0827c50c +0x308:  sub    $0x4,%esp
0827c50f +0x30b:  jmp    0827c6db <+0x4d7>
0827c514 +0x310:  lea    -0x78(%ebp),%eax
0827c517 +0x313:  mov    %eax,(%esp)
0827c51a +0x316:  call   0827e0dc <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x1fe>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x1fe
0827c51f +0x31b:  mov    (%eax),%eax
0827c521 +0x31d:  cmp    -0x48(%ebp),%eax
0827c524 +0x320:  sete   %al
0827c527 +0x323:  test   %al,%al
0827c529 +0x325:  je     0827c6d0 <+0x4cc>
0827c52f +0x32b:  lea    -0x78(%ebp),%eax
0827c532 +0x32e:  mov    %eax,(%esp)
0827c535 +0x331:  call   0827e0dc <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x1fe>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x1fe
0827c53a +0x336:  movzwl 0x4(%eax),%eax
0827c53e +0x33a:  movzwl %ax,%ebx
0827c541 +0x33d:  mov    -0x28(%ebp),%eax
0827c544 +0x340:  mov    %eax,(%esp)
0827c547 +0x343:  call   082380c8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd772>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd772
0827c54c +0x348:  cmp    %eax,%ebx
0827c54e +0x34a:  jae    0827c58f <+0x38b>
0827c550 +0x34c:  lea    -0x78(%ebp),%eax
0827c553 +0x34f:  mov    %eax,(%esp)
0827c556 +0x352:  call   0827e0dc <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x1fe>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x1fe
0827c55b +0x357:  movzwl 0x6(%eax),%eax
0827c55f +0x35b:  movzwl %ax,%ebx
0827c562 +0x35e:  lea    -0x78(%ebp),%eax
0827c565 +0x361:  mov    %eax,(%esp)
0827c568 +0x364:  call   0827e0dc <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x1fe>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x1fe
0827c56d +0x369:  movzwl 0x4(%eax),%eax
0827c571 +0x36d:  movzwl %ax,%eax
0827c574 +0x370:  mov    %eax,0x4(%esp)
0827c578 +0x374:  mov    -0x28(%ebp),%eax
0827c57b +0x377:  mov    %eax,(%esp)
0827c57e +0x37a:  call   0827e0fc <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x21e>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x21e
0827c583 +0x37f:  mov    %eax,(%esp)
0827c586 +0x382:  call   0823721a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc8c4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc8c4
0827c58b +0x387:  cmp    %eax,%ebx
0827c58d +0x389:  jb     0827c596 <+0x392>
0827c58f +0x38b:  mov    $0x1,%eax
0827c594 +0x390:  jmp    0827c59b <+0x397>
0827c596 +0x392:  mov    $0x0,%eax
0827c59b +0x397:  test   %al,%al
0827c59d +0x399:  je     0827c655 <+0x451>
0827c5a3 +0x39f:  lea    -0x78(%ebp),%eax
0827c5a6 +0x3a2:  mov    %eax,(%esp)
0827c5a9 +0x3a5:  call   0827e0dc <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x1fe>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x1fe
0827c5ae +0x3aa:  movzwl 0x6(%eax),%eax
0827c5b2 +0x3ae:  movzwl %ax,%eax
0827c5b5 +0x3b1:  mov    %eax,-0xa0(%ebp)
0827c5bb +0x3b7:  lea    -0x78(%ebp),%eax
0827c5be +0x3ba:  mov    %eax,(%esp)
0827c5c1 +0x3bd:  call   0827e0dc <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x1fe>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x1fe
0827c5c6 +0x3c2:  movzwl 0x4(%eax),%eax
0827c5ca +0x3c6:  movzwl %ax,%edi
0827c5cd +0x3c9:  lea    -0x78(%ebp),%eax
0827c5d0 +0x3cc:  mov    %eax,(%esp)
0827c5d3 +0x3cf:  call   0827e0dc <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x1fe>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x1fe
0827c5d8 +0x3d4:  mov    (%eax),%esi
0827c5da +0x3d6:  movl   $0xffffffff,0x4(%esp)
0827c5e2 +0x3de:  mov    -0x4c(%ebp),%eax
0827c5e5 +0x3e1:  mov    %eax,(%esp)
0827c5e8 +0x3e4:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
0827c5ed +0x3e9:  mov    %eax,%ebx
0827c5ef +0x3eb:  mov    -0x4c(%ebp),%eax
0827c5f2 +0x3ee:  mov    %eax,(%esp)
0827c5f5 +0x3f1:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0827c5fa +0x3f6:  movl   $0x0,0x4(%esp)
0827c602 +0x3fe:  mov    %eax,(%esp)
0827c605 +0x401:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0827c60a +0x406:  mov    -0xa0(%ebp),%edx
0827c610 +0x40c:  mov    %edx,0x24(%esp)
0827c614 +0x410:  mov    %edi,0x20(%esp)
0827c618 +0x414:  mov    %esi,0x1c(%esp)
0827c61c +0x418:  mov    %ebx,0x18(%esp)
0827c620 +0x41c:  mov    %eax,0x14(%esp)
0827c624 +0x420:  movl   $"Package Selection error (%s,%d,%d,%d,%d)",0x10(%esp)
0827c62c +0x428:  movl   $0xe7,0xc(%esp)
0827c634 +0x430:  movl   $&_ZZN18SpecialItemHandler28respond_special_item_packageEiRK19STSpecailItem_ParamR20STSpecailItem_ResultE19__PRETTY_FUNCTION__,0x8(%esp)
0827c63c +0x438:  movl   $"SpecialItemHandler.cpp",0x4(%esp)
0827c644 +0x440:  movl   $0x1,(%esp)
0827c64b +0x447:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0827c650 +0x44c:  jmp    0827c70d <+0x509>
0827c655 +0x451:  lea    -0x78(%ebp),%eax
0827c658 +0x454:  mov    %eax,(%esp)
0827c65b +0x457:  call   0827e0dc <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x1fe>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x1fe
0827c660 +0x45c:  movzwl 0x6(%eax),%eax
0827c664 +0x460:  movzwl %ax,%ebx
0827c667 +0x463:  lea    -0x78(%ebp),%eax
0827c66a +0x466:  mov    %eax,(%esp)
0827c66d +0x469:  call   0827e0dc <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x1fe>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x1fe
0827c672 +0x46e:  movzwl 0x4(%eax),%eax
0827c676 +0x472:  movzwl %ax,%eax
0827c679 +0x475:  mov    %eax,0x4(%esp)
0827c67d +0x479:  mov    -0x28(%ebp),%eax
0827c680 +0x47c:  mov    %eax,(%esp)
0827c683 +0x47f:  call   0827e0fc <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x21e>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x21e
0827c688 +0x484:  mov    %ebx,0x4(%esp)
0827c68c +0x488:  mov    %eax,(%esp)
0827c68f +0x48b:  call   08237236 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc8e0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc8e0
0827c694 +0x490:  mov    %eax,0x4(%esp)
0827c698 +0x494:  lea    -0x6c(%ebp),%eax
0827c69b +0x497:  mov    %eax,(%esp)
0827c69e +0x49a:  call   0827e116 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x238>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x238
0827c6a3 +0x49f:  mov    -0x40(%ebp),%eax
0827c6a6 +0x4a2:  lea    0xc(%eax),%ecx
0827c6a9 +0x4a5:  lea    -0x9c(%ebp),%eax
0827c6af +0x4ab:  mov    -0x78(%ebp),%edx
0827c6b2 +0x4ae:  mov    %edx,0x8(%esp)
0827c6b6 +0x4b2:  mov    %ecx,0x4(%esp)
0827c6ba +0x4b6:  mov    %eax,(%esp)
0827c6bd +0x4b9:  call   0827e18a <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x2ac>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x2ac
0827c6c2 +0x4be:  sub    $0x4,%esp
0827c6c5 +0x4c1:  mov    -0x9c(%ebp),%eax
0827c6cb +0x4c7:  mov    %eax,-0x78(%ebp)
0827c6ce +0x4ca:  jmp    0827c6db <+0x4d7>
0827c6d0 +0x4cc:  lea    -0x78(%ebp),%eax
0827c6d3 +0x4cf:  mov    %eax,(%esp)
0827c6d6 +0x4d2:  call   0827e0e6 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x208>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x208
0827c6db +0x4d7:  mov    -0x40(%ebp),%eax
0827c6de +0x4da:  lea    0xc(%eax),%edx
0827c6e1 +0x4dd:  lea    -0x5c(%ebp),%eax
0827c6e4 +0x4e0:  mov    %edx,0x4(%esp)
0827c6e8 +0x4e4:  mov    %eax,(%esp)
0827c6eb +0x4e7:  call   0817aa72 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xaf0>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xaf0
0827c6f0 +0x4ec:  sub    $0x4,%esp
0827c6f3 +0x4ef:  lea    -0x5c(%ebp),%eax
0827c6f6 +0x4f2:  mov    %eax,0x4(%esp)
0827c6fa +0x4f6:  lea    -0x78(%ebp),%eax
0827c6fd +0x4f9:  mov    %eax,(%esp)
0827c700 +0x4fc:  call   0827e0b0 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x1d2>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x1d2
0827c705 +0x501:  test   %al,%al
0827c707 +0x503:  jne    0827c514 <+0x310>
0827c70d +0x509:  lea    -0x58(%ebp),%eax
0827c710 +0x50c:  lea    -0x6c(%ebp),%edx
0827c713 +0x50f:  mov    %edx,0x4(%esp)
0827c717 +0x513:  mov    %eax,(%esp)
0827c71a +0x516:  call   0827e270 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x392>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x392
0827c71f +0x51b:  sub    $0x4,%esp
0827c722 +0x51e:  lea    -0x58(%ebp),%eax
0827c725 +0x521:  mov    %eax,0x4(%esp)
0827c729 +0x525:  lea    -0x80(%ebp),%eax
0827c72c +0x528:  mov    %eax,(%esp)
0827c72f +0x52b:  call   0827e294 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x3b6>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x3b6
0827c734 +0x530:  lea    -0x54(%ebp),%eax
0827c737 +0x533:  lea    -0x6c(%ebp),%edx
0827c73a +0x536:  mov    %edx,0x4(%esp)
0827c73e +0x53a:  mov    %eax,(%esp)
0827c741 +0x53d:  call   0827e2ae <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x3d0>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x3d0
0827c746 +0x542:  sub    $0x4,%esp
0827c749 +0x545:  lea    -0x54(%ebp),%eax
0827c74c +0x548:  mov    %eax,0x4(%esp)
0827c750 +0x54c:  lea    -0x84(%ebp),%eax
0827c756 +0x552:  mov    %eax,(%esp)
0827c759 +0x555:  call   0827e294 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x3b6>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x3b6
0827c75e +0x55a:  jmp    0827c982 <+0x77e>
0827c763 +0x55f:  movb   $0x0,-0x21(%ebp)
0827c767 +0x563:  mov    -0x40(%ebp),%eax
0827c76a +0x566:  mov    %eax,(%esp)
0827c76d +0x569:  call   0811119a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6ac>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6ac
0827c772 +0x56e:  xor    $0x1,%eax
0827c775 +0x571:  test   %al,%al
0827c777 +0x573:  je     0827c83a <+0x636>
0827c77d +0x579:  mov    -0x40(%ebp),%edx
0827c780 +0x57c:  lea    -0x88(%ebp),%eax
0827c786 +0x582:  mov    %edx,0x4(%esp)
0827c78a +0x586:  mov    %eax,(%esp)
0827c78d +0x589:  call   080dd5b2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xfb>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xfb
0827c792 +0x58e:  sub    $0x4,%esp
0827c795 +0x591:  mov    -0x40(%ebp),%edx
0827c798 +0x594:  lea    -0x8c(%ebp),%eax
0827c79e +0x59a:  mov    %edx,0x4(%esp)
0827c7a2 +0x59e:  mov    %eax,(%esp)
0827c7a5 +0x5a1:  call   080dd5d6 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x11f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x11f
0827c7aa +0x5a6:  sub    $0x4,%esp
0827c7ad +0x5a9:  jmp    0827c81a <+0x616>
0827c7af +0x5ab:  lea    -0x88(%ebp),%eax
0827c7b5 +0x5b1:  mov    %eax,(%esp)
0827c7b8 +0x5b4:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
0827c7bd +0x5b9:  mov    (%eax),%eax
0827c7bf +0x5bb:  mov    %eax,%ebx
0827c7c1 +0x5bd:  lea    -0x80(%ebp),%eax
0827c7c4 +0x5c0:  mov    %eax,(%esp)
0827c7c7 +0x5c3:  call   0827e316 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x438>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x438
0827c7cc +0x5c8:  mov    (%eax),%eax
0827c7ce +0x5ca:  cmp    %eax,%ebx
0827c7d0 +0x5cc:  sete   %al
0827c7d3 +0x5cf:  test   %al,%al
0827c7d5 +0x5d1:  je     0827c80c <+0x608>
0827c7d7 +0x5d3:  lea    -0x88(%ebp),%eax
0827c7dd +0x5d9:  mov    %eax,(%esp)
0827c7e0 +0x5dc:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
0827c7e5 +0x5e1:  mov    0x4(%eax),%eax
0827c7e8 +0x5e4:  mov    %al,-0x21(%ebp)
0827c7eb +0x5e7:  mov    -0x40(%ebp),%edx
0827c7ee +0x5ea:  lea    -0x50(%ebp),%eax
0827c7f1 +0x5ed:  mov    -0x88(%ebp),%ecx
0827c7f7 +0x5f3:  mov    %ecx,0x8(%esp)
0827c7fb +0x5f7:  mov    %edx,0x4(%esp)
0827c7ff +0x5fb:  mov    %eax,(%esp)
0827c802 +0x5fe:  call   0827e320 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x442>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x442
0827c807 +0x603:  sub    $0x4,%esp
0827c80a +0x606:  jmp    0827c83a <+0x636>
0827c80c +0x608:  lea    -0x88(%ebp),%eax
0827c812 +0x60e:  mov    %eax,(%esp)
0827c815 +0x611:  call   0811120a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x71c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x71c
0827c81a +0x616:  lea    -0x8c(%ebp),%eax
0827c820 +0x61c:  mov    %eax,0x4(%esp)
0827c824 +0x620:  lea    -0x88(%ebp),%eax
0827c82a +0x626:  mov    %eax,(%esp)
0827c82d +0x629:  call   081111de <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6f0>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6f0
0827c832 +0x62e:  test   %al,%al
0827c834 +0x630:  jne    0827c7af <+0x5ab>
0827c83a +0x636:  lea    -0x80(%ebp),%eax
0827c83d +0x639:  mov    %eax,(%esp)
0827c840 +0x63c:  call   0827e316 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x438>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x438
0827c845 +0x641:  mov    (%eax),%eax
0827c847 +0x643:  mov    %eax,%ebx
0827c849 +0x645:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0827c84e +0x64a:  mov    %ebx,0x4(%esp)
0827c852 +0x64e:  mov    %eax,(%esp)
0827c855 +0x651:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0827c85a +0x656:  mov    %eax,-0x20(%ebp)
0827c85d +0x659:  cmpl   $0x0,-0x20(%ebp)
0827c861 +0x65d:  je     0827c87c <+0x678>
0827c863 +0x65f:  mov    -0x20(%ebp),%eax
0827c866 +0x662:  mov    (%eax),%eax
0827c868 +0x664:  add    $0x60,%eax
0827c86b +0x667:  mov    (%eax),%edx
0827c86d +0x669:  mov    -0x48(%ebp),%eax
0827c870 +0x66c:  mov    %eax,0x4(%esp)
0827c874 +0x670:  mov    -0x20(%ebp),%eax
0827c877 +0x673:  mov    %eax,(%esp)
0827c87a +0x676:  call   *%edx
0827c87c +0x678:  movzbl -0x21(%ebp),%esi
0827c880 +0x67c:  lea    -0x80(%ebp),%eax
0827c883 +0x67f:  mov    %eax,(%esp)
0827c886 +0x682:  call   0827e316 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x438>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x438
0827c88b +0x687:  mov    0x4(%eax),%eax
0827c88e +0x68a:  movzwl %ax,%ebx
0827c891 +0x68d:  lea    -0x80(%ebp),%eax
0827c894 +0x690:  mov    %eax,(%esp)
0827c897 +0x693:  call   0827e316 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x438>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x438
0827c89c +0x698:  mov    (%eax),%edx
0827c89e +0x69a:  mov    0x8(%ebp),%eax
0827c8a1 +0x69d:  mov    (%eax),%eax
0827c8a3 +0x69f:  movl   $0x0,0x20(%esp)
0827c8ab +0x6a7:  mov    -0x40(%ebp),%ecx
0827c8ae +0x6aa:  mov    %ecx,0x1c(%esp)
0827c8b2 +0x6ae:  mov    -0x44(%ebp),%ecx
0827c8b5 +0x6b1:  mov    %ecx,0x18(%esp)
0827c8b9 +0x6b5:  movl   $0xff,0x14(%esp)
0827c8c1 +0x6bd:  mov    %esi,0x10(%esp)
0827c8c5 +0x6c1:  mov    %ebx,0xc(%esp)
0827c8c9 +0x6c5:  mov    %edx,0x8(%esp)
0827c8cd +0x6c9:  mov    -0x4c(%ebp),%edx
0827c8d0 +0x6cc:  mov    %edx,0x4(%esp)
0827c8d4 +0x6d0:  mov    %eax,(%esp)
0827c8d7 +0x6d3:  call   083267a2 <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh>  ; WongWork::CCeraShop::_processAdditionalItem(CUser*, unsigned long, unsigned short, unsigned char, unsigned char, std::vector<Inven_Item, std::allocator<Inven_Item> >&, WongWork::CCeraShop::stCeraShopItemParam_t&, unsigned char)
0827c8dc +0x6d8:  cmpl   $0x0,-0x20(%ebp)
0827c8e0 +0x6dc:  je     0827c8fc <+0x6f8>
0827c8e2 +0x6de:  mov    -0x20(%ebp),%eax
0827c8e5 +0x6e1:  mov    (%eax),%eax
0827c8e7 +0x6e3:  add    $0x60,%eax
0827c8ea +0x6e6:  mov    (%eax),%edx
0827c8ec +0x6e8:  movl   $0x0,0x4(%esp)
0827c8f4 +0x6f0:  mov    -0x20(%ebp),%eax
0827c8f7 +0x6f3:  mov    %eax,(%esp)
0827c8fa +0x6f6:  call   *%edx
0827c8fc +0x6f8:  movl   $0x0,-0x1c(%ebp)
0827c903 +0x6ff:  lea    -0x80(%ebp),%eax
0827c906 +0x702:  mov    %eax,(%esp)
0827c909 +0x705:  call   0827e316 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x438>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x438
0827c90e +0x70a:  mov    (%eax),%eax
0827c910 +0x70c:  cmp    $0x289749,%eax
0827c915 +0x711:  je     0827c95d <+0x759>
0827c917 +0x713:  cmp    $0x28982d,%eax
0827c91c +0x718:  je     0827c941 <+0x73d>
0827c91e +0x71a:  cmp    $0x380,%eax
0827c923 +0x71f:  jne    0827c977 <+0x773>
0827c925 +0x721:  movl   $0x0,-0x1c(%ebp)
0827c92c +0x728:  movl   $0x0,0x4(%esp)
0827c934 +0x730:  mov    -0x1c(%ebp),%eax
0827c937 +0x733:  mov    %eax,(%esp)
0827c93a +0x736:  call   08676826 <_ZN5CUser22SendRandomBoxStatisticEi26ENUM_RANDOMBOX_ACTION_KIND>  ; CUser::SendRandomBoxStatistic(int, ENUM_RANDOMBOX_ACTION_KIND)
0827c93f +0x73b:  jmp    0827c977 <+0x773>
0827c941 +0x73d:  movl   $0x1,-0x1c(%ebp)
0827c948 +0x744:  movl   $0x0,0x4(%esp)
0827c950 +0x74c:  mov    -0x1c(%ebp),%eax
0827c953 +0x74f:  mov    %eax,(%esp)
0827c956 +0x752:  call   08676826 <_ZN5CUser22SendRandomBoxStatisticEi26ENUM_RANDOMBOX_ACTION_KIND>  ; CUser::SendRandomBoxStatistic(int, ENUM_RANDOMBOX_ACTION_KIND)
0827c95b +0x757:  jmp    0827c977 <+0x773>
0827c95d +0x759:  movl   $0x2,-0x1c(%ebp)
0827c964 +0x760:  movl   $0x0,0x4(%esp)
0827c96c +0x768:  mov    -0x1c(%ebp),%eax
0827c96f +0x76b:  mov    %eax,(%esp)
0827c972 +0x76e:  call   08676826 <_ZN5CUser22SendRandomBoxStatisticEi26ENUM_RANDOMBOX_ACTION_KIND>  ; CUser::SendRandomBoxStatistic(int, ENUM_RANDOMBOX_ACTION_KIND)
0827c977 +0x773:  lea    -0x80(%ebp),%eax
0827c97a +0x776:  mov    %eax,(%esp)
0827c97d +0x779:  call   0827e300 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x422>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x422
0827c982 +0x77e:  lea    -0x84(%ebp),%eax
0827c988 +0x784:  mov    %eax,0x4(%esp)
0827c98c +0x788:  lea    -0x80(%ebp),%eax
0827c98f +0x78b:  mov    %eax,(%esp)
0827c992 +0x78e:  call   0827e2d4 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x3f6>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x3f6
0827c997 +0x793:  test   %al,%al
0827c999 +0x795:  jne    0827c763 <+0x55f>
0827c99f +0x79b:  mov    -0x48(%ebp),%ebx
0827c9a2 +0x79e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0827c9a7 +0x7a3:  mov    0xc(%eax),%eax
0827c9aa +0x7a6:  mov    %ebx,0x4(%esp)
0827c9ae +0x7aa:  mov    %eax,(%esp)
0827c9b1 +0x7ad:  call   0817a10c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x18a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x18a
0827c9b6 +0x7b2:  mov    %eax,-0x3c(%ebp)
0827c9b9 +0x7b5:  cmpl   $0x0,-0x3c(%ebp)
0827c9bd +0x7b9:  je     0827ca0b <+0x807>
0827c9bf +0x7bb:  mov    -0x3c(%ebp),%eax
0827c9c2 +0x7be:  mov    %eax,0x4(%esp)
0827c9c6 +0x7c2:  mov    -0x4c(%ebp),%eax
0827c9c9 +0x7c5:  mov    %eax,(%esp)
0827c9cc +0x7c8:  call   0864d878 <_ZN5CUser17IsRestrictedGoodsEi>  ; CUser::IsRestrictedGoods(int)
0827c9d1 +0x7cd:  xor    $0x1,%eax
0827c9d4 +0x7d0:  test   %al,%al
0827c9d6 +0x7d2:  je     0827ca0b <+0x807>
0827c9d8 +0x7d4:  mov    -0x3c(%ebp),%eax
0827c9db +0x7d7:  mov    %eax,0x4(%esp)
0827c9df +0x7db:  mov    -0x4c(%ebp),%eax
0827c9e2 +0x7de:  mov    %eax,(%esp)
0827c9e5 +0x7e1:  call   0864d84e <_ZN5CUser18SetRestrictedGoodsEi>  ; CUser::SetRestrictedGoods(int)
0827c9ea +0x7e6:  movl   $0x0,0xc(%esp)
0827c9f2 +0x7ee:  mov    -0x38(%ebp),%eax
0827c9f5 +0x7f1:  mov    %eax,0x8(%esp)
0827c9f9 +0x7f5:  mov    -0x3c(%ebp),%eax
0827c9fc +0x7f8:  mov    %eax,0x4(%esp)
0827ca00 +0x7fc:  mov    -0x4c(%ebp),%eax
0827ca03 +0x7ff:  mov    %eax,(%esp)
0827ca06 +0x802:  call   08325a30 <_ZN8WongWork9CCeraShop15SaveFeaturedIdxEP5CUseriii>  ; WongWork::CCeraShop::SaveFeaturedIdx(CUser*, int, int, int)
0827ca0b +0x807:  mov    -0x4c(%ebp),%eax
0827ca0e +0x80a:  mov    %eax,(%esp)
0827ca11 +0x80d:  call   0864fe52 <_ZN5CUser13SaveInventoryEv>  ; CUser::SaveInventory()
0827ca16 +0x812:  jmp    0827ca33 <+0x82f>
0827ca18 +0x814:  mov    %edx,%ebx
0827ca1a +0x816:  mov    %eax,%esi
0827ca1c +0x818:  lea    -0x6c(%ebp),%eax
0827ca1f +0x81b:  mov    %eax,(%esp)
0827ca22 +0x81e:  call   0827df44 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x66>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x66
0827ca27 +0x823:  mov    %esi,%eax
0827ca29 +0x825:  mov    %ebx,%edx
0827ca2b +0x827:  mov    %eax,(%esp)
0827ca2e +0x82a:  call   08ae3750 <_Unwind_Resume>
0827ca33 +0x82f:  lea    -0x6c(%ebp),%eax
0827ca36 +0x832:  mov    %eax,(%esp)
0827ca39 +0x835:  call   0827df44 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x66>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x66
0827ca3e +0x83a:  lea    -0xc(%ebp),%esp
0827ca41 +0x83d:  add    $0x0,%esp
0827ca44 +0x840:  pop    %ebx
0827ca45 +0x841:  pop    %esi
0827ca46 +0x842:  pop    %edi
0827ca47 +0x843:  pop    %ebp
0827ca48 +0x844:  ret
0827ca49 +0x845:  nop
```

## 反编译 C

```c
// SpecialItemHandler::respond_special_item_package @ 0x827c204

/* SpecialItemHandler::respond_special_item_package(int, STSpecailItem_Param const&,
   STSpecailItem_Result&) */

void SpecialItemHandler::respond_special_item_package
               (int param_1,STSpecailItem_Param *param_2,STSpecailItem_Result *param_3)

{
  ushort uVar1;
  ushort uVar2;
  uchar uVar3;
  char cVar4;
  bool bVar5;
  Stream *pSVar6;
  CStreamGuard *pCVar7;
  undefined4 uVar8;
  CDataManager *pCVar9;
  uint uVar10;
  vector<STStackablePackageData,std::allocator<STStackablePackageData>> *pvVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  STStackablePackageData *pSVar15;
  int *piVar16;
  int iVar17;
  ulong *puVar18;
  int iVar19;
  undefined4 local_a0 [4];
  __normal_iterator local_90 [4];
  undefined4 local_8c;
  __normal_iterator<STStackablePackageData_const*,std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>
  local_88 [4];
  __normal_iterator<STStackablePackageData_const*,std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>
  local_84 [4];
  __normal_iterator<tagPackageItemSelection*,std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>>
  local_80 [4];
  undefined4 local_7c;
  CStreamGuard local_78 [8];
  vector<STStackablePackageData,std::allocator<STStackablePackageData>> local_70 [12];
  __normal_iterator local_64 [4];
  __normal_iterator local_60 [4];
  __normal_iterator local_5c [4];
  __normal_iterator local_58 [4];
  undefined1 local_54 [4];
  CUser *local_50;
  int local_4c;
  vector *local_48;
  stCeraShopItemParam_t *local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  SIG_SAVE_CRAZY_LEVELUP_EVENT *local_30;
  vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>
  *local_2c;
  uchar local_25;
  int *local_24;
  undefined4 local_20;
  
  local_50 = *(CUser **)param_3;
  local_4c = *(int *)(param_3 + 4);
  local_48 = *(vector **)(param_3 + 0xc);
  local_44 = *(stCeraShopItemParam_t **)(param_3 + 0x10);
  local_40 = *(int *)(param_3 + 0x14);
  local_3c = *(int *)(param_3 + 0x18);
  if (local_4c == 0x1b) {
    pSVar6 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"SpecialItemHandler.cpp",0xc3);
    CStreamGuard::CStreamGuard(local_78,pSVar6,true);
    pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_78);
                    /* try { // try from 0827c299 to 0827c32f has its CatchHandler @ 0827c332 */
    CStreamGuard::operator<<(pCVar7,0xb4);
    pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_78);
    CStreamGuard::operator<<(pCVar7,-1);
    pCVar7 = (CStreamGuard *)CStreamGuard::operator->(local_78);
    local_30 = CStreamGuard::GetInBuffer<SIG_SAVE_CRAZY_LEVELUP_EVENT>(pCVar7);
    memcpy(local_30,&DAT_08c07e5a,5);
    uVar8 = CUser::get_acc_id(local_50);
    *(undefined4 *)(local_30 + 5) = uVar8;
    uVar8 = CUser::get_charac_no(local_50,-1);
    *(undefined4 *)(local_30 + 9) = uVar8;
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_78);
    CStreamGuard::~CStreamGuard(local_78);
  }
  WongWork::CCeraShop::_onBuySpecialItem(*(CCeraShop **)param_1,local_50,5,local_4c);
  iVar17 = local_4c;
  local_38 = 0;
  pCVar9 = (CDataManager *)G_CDataManager();
  local_34 = CDataManager::find_item(pCVar9,iVar17);
  std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>::vector
            (local_70,(vector *)(local_34 + 0x21c));
                    /* try { // try from 0827c3b9 to 0827ca15 has its CatchHandler @ 0827ca18 */
  cVar4 = std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>::empty();
  if (cVar4 != '\x01') {
    local_2c = (vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>
                *)(local_34 + 0x234);
    uVar10 = std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>::size
                       ((vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>> *)
                        (local_44 + 0xc));
    if (1 < uVar10) {
      std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>::begin();
      while( true ) {
        std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>::end();
        bVar5 = __gnu_cxx::operator!=(local_80,local_64);
        if (!bVar5) break;
        iVar17 = __gnu_cxx::
                 __normal_iterator<tagPackageItemSelection*,std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>>
                 ::operator->(local_80);
        uVar1 = *(ushort *)(iVar17 + 6);
        iVar17 = __gnu_cxx::
                 __normal_iterator<tagPackageItemSelection*,std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>>
                 ::operator->(local_80);
        uVar2 = *(ushort *)(iVar17 + 4);
        puVar12 = (undefined4 *)
                  __gnu_cxx::
                  __normal_iterator<tagPackageItemSelection*,std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>>
                  ::operator->(local_80);
        uVar8 = *puVar12;
        uVar13 = CUser::get_charac_no(local_50,-1);
        uVar10 = CUser::get_acc_id(local_50);
        uVar14 = NumberToString(uVar10,0);
        LogManager::logFormat
                  (1,"SpecialItemHandler.cpp",
                   "void SpecialItemHandler::respond_special_item_package(int, const STSpecailItem_Param&, STSpecailItem_Result&)"
                   ,0xdb,"kdd372418Log::Package Selection item error (%s,%d,%d,%d,%d)",uVar14,uVar13
                   ,uVar8,(uint)uVar2,(uint)uVar1);
        __gnu_cxx::
        __normal_iterator<tagPackageItemSelection*,std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>>
        ::operator++(local_80);
      }
    }
    std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>::begin();
    while( true ) {
      std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>::end();
      bVar5 = __gnu_cxx::operator!=((__normal_iterator *)&local_7c,local_60);
      if (!bVar5) break;
      piVar16 = (int *)__gnu_cxx::
                       __normal_iterator<tagPackageItemSelection*,std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>>
                       ::operator->((__normal_iterator<tagPackageItemSelection*,std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>>
                                     *)&local_7c);
      if (*piVar16 == local_4c) {
        iVar17 = __gnu_cxx::
                 __normal_iterator<tagPackageItemSelection*,std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>>
                 ::operator->((__normal_iterator<tagPackageItemSelection*,std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>>
                               *)&local_7c);
        uVar1 = *(ushort *)(iVar17 + 4);
        uVar10 = std::
                 vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>
                 ::size(local_2c);
        if (uVar1 < uVar10) {
          iVar17 = __gnu_cxx::
                   __normal_iterator<tagPackageItemSelection*,std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>>
                   ::operator->((__normal_iterator<tagPackageItemSelection*,std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>>
                                 *)&local_7c);
          uVar1 = *(ushort *)(iVar17 + 6);
          iVar17 = __gnu_cxx::
                   __normal_iterator<tagPackageItemSelection*,std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>>
                   ::operator->((__normal_iterator<tagPackageItemSelection*,std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>>
                                 *)&local_7c);
          pvVar11 = (vector<STStackablePackageData,std::allocator<STStackablePackageData>> *)
                    std::
                    vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>
                    ::operator[](local_2c,(uint)*(ushort *)(iVar17 + 4));
          uVar10 = std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>::size
                             (pvVar11);
          if (uVar10 <= uVar1) goto LAB_0827c58f;
          bVar5 = false;
        }
        else {
LAB_0827c58f:
          bVar5 = true;
        }
        if (bVar5) {
          iVar17 = __gnu_cxx::
                   __normal_iterator<tagPackageItemSelection*,std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>>
                   ::operator->((__normal_iterator<tagPackageItemSelection*,std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>>
                                 *)&local_7c);
          uVar1 = *(ushort *)(iVar17 + 6);
          iVar17 = __gnu_cxx::
                   __normal_iterator<tagPackageItemSelection*,std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>>
                   ::operator->((__normal_iterator<tagPackageItemSelection*,std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>>
                                 *)&local_7c);
          uVar2 = *(ushort *)(iVar17 + 4);
          puVar12 = (undefined4 *)
                    __gnu_cxx::
                    __normal_iterator<tagPackageItemSelection*,std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>>
                    ::operator->((__normal_iterator<tagPackageItemSelection*,std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>>
                                  *)&local_7c);
          uVar8 = *puVar12;
          uVar13 = CUser::get_charac_no(local_50,-1);
          uVar10 = CUser::get_acc_id(local_50);
          uVar14 = NumberToString(uVar10,0);
          LogManager::logFormat
                    (1,"SpecialItemHandler.cpp",
                     "void SpecialItemHandler::respond_special_item_package(int, const STSpecailItem_Param&, STSpecailItem_Result&)"
                     ,0xe7,"Package Selection error (%s,%d,%d,%d,%d)",uVar14,uVar13,uVar8,
                     (uint)uVar2,(uint)uVar1);
          break;
        }
        iVar17 = __gnu_cxx::
                 __normal_iterator<tagPackageItemSelection*,std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>>
                 ::operator->((__normal_iterator<tagPackageItemSelection*,std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>>
                               *)&local_7c);
        uVar1 = *(ushort *)(iVar17 + 6);
        iVar17 = __gnu_cxx::
                 __normal_iterator<tagPackageItemSelection*,std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>>
                 ::operator->((__normal_iterator<tagPackageItemSelection*,std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>>
                               *)&local_7c);
        pvVar11 = (vector<STStackablePackageData,std::allocator<STStackablePackageData>> *)
                  std::
                  vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>
                  ::operator[](local_2c,(uint)*(ushort *)(iVar17 + 4));
        pSVar15 = (STStackablePackageData *)
                  std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>::at
                            (pvVar11,(uint)uVar1);
        std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>::push_back
                  (local_70,pSVar15);
        std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>::erase
                  (local_a0,local_44 + 0xc,local_7c);
        local_7c = local_a0[0];
      }
      else {
        __gnu_cxx::
        __normal_iterator<tagPackageItemSelection*,std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>>
        ::operator++((__normal_iterator<tagPackageItemSelection*,std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>>
                      *)&local_7c);
      }
    }
  }
  std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>::begin();
  __gnu_cxx::
  __normal_iterator<STStackablePackageData_const*,std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>
  ::__normal_iterator<STStackablePackageData*>(local_84,local_5c);
  std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>::end();
  __gnu_cxx::
  __normal_iterator<STStackablePackageData_const*,std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>
  ::__normal_iterator<STStackablePackageData*>(local_88,local_58);
  do {
    bVar5 = __gnu_cxx::operator!=(local_84,local_88);
    iVar17 = local_4c;
    if (!bVar5) {
      iVar19 = G_CDataManager();
      local_40 = CItemList::GetRestrictCode(*(CItemList **)(iVar19 + 0xc),iVar17);
      if (local_40 != 0) {
        cVar4 = CUser::IsRestrictedGoods(local_50,local_40);
        if (cVar4 != '\x01') {
          CUser::SetRestrictedGoods(local_50,local_40);
          WongWork::CCeraShop::SaveFeaturedIdx(local_50,local_40,local_3c,0);
        }
      }
      CUser::SaveInventory(local_50);
      std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>::~vector(local_70);
      return;
    }
    local_25 = '\0';
    cVar4 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::empty();
    if (cVar4 != '\x01') {
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
      while( true ) {
        bVar5 = __gnu_cxx::operator!=((__normal_iterator *)&local_8c,local_90);
        if (!bVar5) break;
        piVar16 = (int *)__gnu_cxx::
                         __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                         ::operator->((__normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                                       *)&local_8c);
        iVar17 = *piVar16;
        piVar16 = (int *)__gnu_cxx::
                         __normal_iterator<STStackablePackageData_const*,std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>
                         ::operator->(local_84);
        if (iVar17 == *piVar16) {
          iVar17 = __gnu_cxx::
                   __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                   ::operator->((__normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                                 *)&local_8c);
          local_25 = (uchar)*(undefined4 *)(iVar17 + 4);
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::erase
                    (local_54,local_44,local_8c);
          break;
        }
        __gnu_cxx::
        __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
        ::operator++((__normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                      *)&local_8c);
      }
    }
    piVar16 = (int *)__gnu_cxx::
                     __normal_iterator<STStackablePackageData_const*,std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>
                     ::operator->(local_84);
    iVar17 = *piVar16;
    pCVar9 = (CDataManager *)G_CDataManager();
    local_24 = (int *)CDataManager::find_item(pCVar9,iVar17);
    if (local_24 != (int *)0x0) {
      (**(code **)(*local_24 + 0x60))(local_24,local_4c);
    }
    uVar3 = local_25;
    iVar17 = __gnu_cxx::
             __normal_iterator<STStackablePackageData_const*,std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>
             ::operator->(local_84);
    uVar8 = *(undefined4 *)(iVar17 + 4);
    puVar18 = (ulong *)__gnu_cxx::
                       __normal_iterator<STStackablePackageData_const*,std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>
                       ::operator->(local_84);
    WongWork::CCeraShop::_processAdditionalItem
              (*(CCeraShop **)param_1,local_50,*puVar18,(ushort)uVar8,uVar3,0xff,local_48,local_44,
               '\0');
    if (local_24 != (int *)0x0) {
      (**(code **)(*local_24 + 0x60))(local_24,0);
    }
    local_20 = 0;
    piVar16 = (int *)__gnu_cxx::
                     __normal_iterator<STStackablePackageData_const*,std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>
                     ::operator->(local_84);
    iVar17 = *piVar16;
    if (iVar17 == 0x289749) {
      local_20 = 2;
      CUser::SendRandomBoxStatistic(2,0);
    }
    else if (iVar17 == 0x28982d) {
      local_20 = 1;
      CUser::SendRandomBoxStatistic(1,0);
    }
    else if (iVar17 == 0x380) {
      local_20 = 0;
      CUser::SendRandomBoxStatistic(0,0);
    }
    __gnu_cxx::
    __normal_iterator<STStackablePackageData_const*,std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>
    ::operator++(local_84);
  } while( true );
}
```
