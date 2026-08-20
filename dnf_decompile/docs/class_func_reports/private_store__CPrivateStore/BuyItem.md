# BuyItem

`_ZN13private_store13CPrivateStore7BuyItemEiR10Inven_ItemiiiRi`

`private_store::CPrivateStore::BuyItem(int, Inven_Item&, int, int, int, int&)`

| 类 | 地址 |
|---|---|
| `private_store::CPrivateStore` | `0x085c924c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c924c  _ZN13private_store13CPrivateStore7BuyItemEiR10Inven_ItemiiiRi
#           private_store::CPrivateStore::BuyItem(int, Inven_Item&, int, int, int, int&)
# range [0x085c924c, 0x085c97e1]
085c924c +0x000:  push   %ebp
085c924d +0x001:  mov    %esp,%ebp
085c924f +0x003:  push   %edi
085c9250 +0x004:  push   %esi
085c9251 +0x005:  push   %ebx
085c9252 +0x006:  sub    $0xec,%esp
085c9258 +0x00c:  mov    0x10(%ebp),%eax
085c925b +0x00f:  mov    %eax,(%esp)
085c925e +0x012:  call   0822b456 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb00>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb00
085c9263 +0x017:  movzbl %al,%eax
085c9266 +0x01a:  mov    %eax,-0xa4(%ebp)
085c926c +0x020:  mov    0x10(%ebp),%eax
085c926f +0x023:  mov    %eax,(%esp)
085c9272 +0x026:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
085c9277 +0x02b:  movzbl %al,%eax
085c927a +0x02e:  mov    %eax,-0xa0(%ebp)
085c9280 +0x034:  mov    0x10(%ebp),%eax
085c9283 +0x037:  mov    0x7(%eax),%eax
085c9286 +0x03a:  mov    %eax,-0x9c(%ebp)
085c928c +0x040:  mov    0x10(%ebp),%eax
085c928f +0x043:  mov    0x2(%eax),%edi
085c9292 +0x046:  mov    0x8(%ebp),%eax
085c9295 +0x049:  mov    0x30(%eax),%eax
085c9298 +0x04c:  mov    %eax,(%esp)
085c929b +0x04f:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
085c92a0 +0x054:  mov    %eax,%esi
085c92a2 +0x056:  mov    0x8(%ebp),%eax
085c92a5 +0x059:  mov    0x2c(%eax),%eax
085c92a8 +0x05c:  mov    %eax,(%esp)
085c92ab +0x05f:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
085c92b0 +0x064:  mov    %eax,%ebx
085c92b2 +0x066:  movl   $0x0,0xc(%esp)
085c92ba +0x06e:  movl   $0xa63,0x8(%esp)
085c92c2 +0x076:  movl   $&_ZZN13private_store13CPrivateStore7BuyItemEiR10Inven_ItemiiiRiE19__PRETTY_FUNCTION__,0x4(%esp)
085c92ca +0x07e:  lea    -0x34(%ebp),%eax
085c92cd +0x081:  mov    %eax,(%esp)
085c92d0 +0x084:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085c92d5 +0x089:  mov    0x14(%ebp),%eax
085c92d8 +0x08c:  mov    %eax,0x20(%esp)
085c92dc +0x090:  mov    -0xa4(%ebp),%eax
085c92e2 +0x096:  mov    %eax,0x1c(%esp)
085c92e6 +0x09a:  mov    -0xa0(%ebp),%eax
085c92ec +0x0a0:  mov    %eax,0x18(%esp)
085c92f0 +0x0a4:  mov    -0x9c(%ebp),%eax
085c92f6 +0x0aa:  mov    %eax,0x14(%esp)
085c92fa +0x0ae:  mov    %edi,0x10(%esp)
085c92fe +0x0b2:  mov    %esi,0xc(%esp)
085c9302 +0x0b6:  mov    %ebx,0x8(%esp)
085c9306 +0x0ba:  movl   $"PrivateStore buy seller_charac_name(%s), buyer_charac_name(%s), item_id(%d), add_info(%d), upgrade(%d), reseal_count(%d), sell_price(%d)",0x4(%esp)
085c930e +0x0c2:  lea    -0x34(%ebp),%eax
085c9311 +0x0c5:  mov    %eax,(%esp)
085c9314 +0x0c8:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085c9319 +0x0cd:  mov    0x10(%ebp),%eax
085c931c +0x0d0:  movzbl 0x1(%eax),%eax
085c9320 +0x0d4:  cmp    $0x8,%al
085c9322 +0x0d6:  jne    085c9569 <+0x31d>
085c9328 +0x0dc:  mov    0x8(%ebp),%eax
085c932b +0x0df:  mov    0x30(%eax),%eax
085c932e +0x0e2:  mov    %eax,(%esp)
085c9331 +0x0e5:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085c9336 +0x0ea:  mov    %eax,%edx
085c9338 +0x0ec:  mov    0x10(%ebp),%eax
085c933b +0x0ef:  mov    (%eax),%ecx
085c933d +0x0f1:  mov    %ecx,0x4(%esp)
085c9341 +0x0f5:  mov    0x4(%eax),%ecx
085c9344 +0x0f8:  mov    %ecx,0x8(%esp)
085c9348 +0x0fc:  mov    0x8(%eax),%ecx
085c934b +0x0ff:  mov    %ecx,0xc(%esp)
085c934f +0x103:  mov    0xc(%eax),%ecx
085c9352 +0x106:  mov    %ecx,0x10(%esp)
085c9356 +0x10a:  mov    0x10(%eax),%ecx
085c9359 +0x10d:  mov    %ecx,0x14(%esp)
085c935d +0x111:  mov    0x14(%eax),%ecx
085c9360 +0x114:  mov    %ecx,0x18(%esp)
085c9364 +0x118:  mov    0x18(%eax),%ecx
085c9367 +0x11b:  mov    %ecx,0x1c(%esp)
085c936b +0x11f:  mov    0x1c(%eax),%ecx
085c936e +0x122:  mov    %ecx,0x20(%esp)
085c9372 +0x126:  mov    0x20(%eax),%ecx
085c9375 +0x129:  mov    %ecx,0x24(%esp)
085c9379 +0x12d:  mov    0x24(%eax),%ecx
085c937c +0x130:  mov    %ecx,0x28(%esp)
085c9380 +0x134:  mov    0x28(%eax),%ecx
085c9383 +0x137:  mov    %ecx,0x2c(%esp)
085c9387 +0x13b:  mov    0x2c(%eax),%ecx
085c938a +0x13e:  mov    %ecx,0x30(%esp)
085c938e +0x142:  mov    0x30(%eax),%ecx
085c9391 +0x145:  mov    %ecx,0x34(%esp)
085c9395 +0x149:  mov    0x34(%eax),%ecx
085c9398 +0x14c:  mov    %ecx,0x38(%esp)
085c939c +0x150:  mov    0x38(%eax),%ecx
085c939f +0x153:  mov    %ecx,0x3c(%esp)
085c93a3 +0x157:  movzbl 0x3c(%eax),%eax
085c93a7 +0x15b:  mov    %al,0x40(%esp)
085c93ab +0x15f:  mov    %edx,(%esp)
085c93ae +0x162:  call   085035f4 <_ZNK10CInventory28tryInsertAvatarIntoInventoryE10Inven_Item>  ; CInventory::tryInsertAvatarIntoInventory(Inven_Item) const
085c93b3 +0x167:  mov    %eax,-0x24(%ebp)
085c93b6 +0x16a:  cmpl   $0x0,-0x24(%ebp)
085c93ba +0x16e:  js     085c960f <+0x3c3>
085c93c0 +0x174:  mov    0x10(%ebp),%eax
085c93c3 +0x177:  mov    0x7(%eax),%ebx
085c93c6 +0x17a:  mov    0x8(%ebp),%eax
085c93c9 +0x17d:  mov    0x2c(%eax),%eax
085c93cc +0x180:  mov    %eax,(%esp)
085c93cf +0x183:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085c93d4 +0x188:  mov    %eax,(%esp)
085c93d7 +0x18b:  call   08110c6c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x17e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x17e
085c93dc +0x190:  mov    %ebx,0x4(%esp)
085c93e0 +0x194:  mov    %eax,(%esp)
085c93e3 +0x197:  call   082f9a42 <_ZN8WongWork14CAvatarItemMgr15EraseAvatarItemEi>  ; WongWork::CAvatarItemMgr::EraseAvatarItem(int)
085c93e8 +0x19c:  mov    %eax,-0x20(%ebp)
085c93eb +0x19f:  cmpl   $0x0,-0x20(%ebp)
085c93ef +0x1a3:  jne    085c93fb <+0x1af>
085c93f1 +0x1a5:  mov    $0xffffffff,%eax
085c93f6 +0x1aa:  jmp    085c97d6 <+0x58a>
085c93fb +0x1af:  mov    0x8(%ebp),%eax
085c93fe +0x1b2:  mov    0x30(%eax),%eax
085c9401 +0x1b5:  mov    %eax,(%esp)
085c9404 +0x1b8:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085c9409 +0x1bd:  mov    %eax,%edx
085c940b +0x1bf:  movl   $0x0,0x4c(%esp)
085c9413 +0x1c7:  movl   $0xb,0x48(%esp)
085c941b +0x1cf:  mov    -0x24(%ebp),%eax
085c941e +0x1d2:  mov    %eax,0x44(%esp)
085c9422 +0x1d6:  mov    0x10(%ebp),%eax
085c9425 +0x1d9:  mov    (%eax),%ecx
085c9427 +0x1db:  mov    %ecx,0x4(%esp)
085c942b +0x1df:  mov    0x4(%eax),%ecx
085c942e +0x1e2:  mov    %ecx,0x8(%esp)
085c9432 +0x1e6:  mov    0x8(%eax),%ecx
085c9435 +0x1e9:  mov    %ecx,0xc(%esp)
085c9439 +0x1ed:  mov    0xc(%eax),%ecx
085c943c +0x1f0:  mov    %ecx,0x10(%esp)
085c9440 +0x1f4:  mov    0x10(%eax),%ecx
085c9443 +0x1f7:  mov    %ecx,0x14(%esp)
085c9447 +0x1fb:  mov    0x14(%eax),%ecx
085c944a +0x1fe:  mov    %ecx,0x18(%esp)
085c944e +0x202:  mov    0x18(%eax),%ecx
085c9451 +0x205:  mov    %ecx,0x1c(%esp)
085c9455 +0x209:  mov    0x1c(%eax),%ecx
085c9458 +0x20c:  mov    %ecx,0x20(%esp)
085c945c +0x210:  mov    0x20(%eax),%ecx
085c945f +0x213:  mov    %ecx,0x24(%esp)
085c9463 +0x217:  mov    0x24(%eax),%ecx
085c9466 +0x21a:  mov    %ecx,0x28(%esp)
085c946a +0x21e:  mov    0x28(%eax),%ecx
085c946d +0x221:  mov    %ecx,0x2c(%esp)
085c9471 +0x225:  mov    0x2c(%eax),%ecx
085c9474 +0x228:  mov    %ecx,0x30(%esp)
085c9478 +0x22c:  mov    0x30(%eax),%ecx
085c947b +0x22f:  mov    %ecx,0x34(%esp)
085c947f +0x233:  mov    0x34(%eax),%ecx
085c9482 +0x236:  mov    %ecx,0x38(%esp)
085c9486 +0x23a:  mov    0x38(%eax),%ecx
085c9489 +0x23d:  mov    %ecx,0x3c(%esp)
085c948d +0x241:  movzbl 0x3c(%eax),%eax
085c9491 +0x245:  mov    %al,0x40(%esp)
085c9495 +0x249:  mov    %edx,(%esp)
085c9498 +0x24c:  call   085037d8 <_ZN10CInventory28insertAvatarIntoSpecificSlotE10Inven_Itemi20eAvatarItemAddReasonb>  ; CInventory::insertAvatarIntoSpecificSlot(Inven_Item, int, eAvatarItemAddReason, bool)
085c949d +0x251:  mov    %eax,-0x24(%ebp)
085c94a0 +0x254:  cmpl   $0xffffffff,-0x24(%ebp)
085c94a4 +0x258:  sete   %al
085c94a7 +0x25b:  test   %al,%al
085c94a9 +0x25d:  je     085c94b5 <+0x269>
085c94ab +0x25f:  mov    $0xffffffff,%eax
085c94b0 +0x264:  jmp    085c97d6 <+0x58a>
085c94b5 +0x269:  mov    0x10(%ebp),%eax
085c94b8 +0x26c:  mov    0x7(%eax),%ebx
085c94bb +0x26f:  mov    0x8(%ebp),%eax
085c94be +0x272:  mov    0x30(%eax),%eax
085c94c1 +0x275:  mov    %eax,(%esp)
085c94c4 +0x278:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085c94c9 +0x27d:  mov    %eax,(%esp)
085c94cc +0x280:  call   08110c6c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x17e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x17e
085c94d1 +0x285:  mov    -0x20(%ebp),%edx
085c94d4 +0x288:  mov    %edx,0x8(%esp)
085c94d8 +0x28c:  mov    %ebx,0x4(%esp)
085c94dc +0x290:  mov    %eax,(%esp)
085c94df +0x293:  call   082f99d6 <_ZN8WongWork14CAvatarItemMgr13AddAvatarItemEiPNS_11Avatar_ItemE>  ; WongWork::CAvatarItemMgr::AddAvatarItem(int, WongWork::Avatar_Item*)
085c94e4 +0x298:  mov    -0x24(%ebp),%eax
085c94e7 +0x29b:  movzbl %al,%esi
085c94ea +0x29e:  mov    0x8(%ebp),%eax
085c94ed +0x2a1:  mov    0x30(%eax),%eax
085c94f0 +0x2a4:  mov    %eax,(%esp)
085c94f3 +0x2a7:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
085c94f8 +0x2ac:  mov    %eax,%ebx
085c94fa +0x2ae:  mov    0x8(%ebp),%eax
085c94fd +0x2b1:  mov    0x2c(%eax),%eax
085c9500 +0x2b4:  mov    %eax,(%esp)
085c9503 +0x2b7:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
085c9508 +0x2bc:  mov    0x10(%ebp),%edx
085c950b +0x2bf:  mov    0x7(%edx),%edx
085c950e +0x2c2:  mov    %esi,0xc(%esp)
085c9512 +0x2c6:  mov    %ebx,0x8(%esp)
085c9516 +0x2ca:  mov    %eax,0x4(%esp)
085c951a +0x2ce:  mov    %edx,(%esp)
085c951d +0x2d1:  call   0840055c <_ZN20DB_AvatarChangeOwner11makeRequestEjjjh>  ; DB_AvatarChangeOwner::makeRequest(unsigned int, unsigned int, unsigned int, unsigned char)
085c9522 +0x2d6:  mov    -0x24(%ebp),%eax
085c9525 +0x2d9:  lea    0xa(%eax),%esi
085c9528 +0x2dc:  mov    0x10(%ebp),%eax
085c952b +0x2df:  mov    0x7(%eax),%ebx
085c952e +0x2e2:  mov    0x8(%ebp),%eax
085c9531 +0x2e5:  mov    0x30(%eax),%eax
085c9534 +0x2e8:  mov    %eax,(%esp)
085c9537 +0x2eb:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085c953c +0x2f0:  movl   $0x0,0x14(%esp)
085c9544 +0x2f8:  mov    %esi,0x10(%esp)
085c9548 +0x2fc:  movl   $0x0,0xc(%esp)
085c9550 +0x304:  mov    %ebx,0x8(%esp)
085c9554 +0x308:  movl   $0x36,0x4(%esp)
085c955c +0x310:  mov    %eax,(%esp)
085c955f +0x313:  call   08508c2e <_ZNK10CInventory15SendAvatarEventEiiiii>  ; CInventory::SendAvatarEvent(int, int, int, int, int) const
085c9564 +0x318:  jmp    085c960f <+0x3c3>
085c9569 +0x31d:  mov    0x8(%ebp),%eax
085c956c +0x320:  mov    0x30(%eax),%eax
085c956f +0x323:  mov    %eax,(%esp)
085c9572 +0x326:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085c9577 +0x32b:  mov    %eax,%edx
085c9579 +0x32d:  movl   $0x0,0x4c(%esp)
085c9581 +0x335:  movl   $0x0,0x48(%esp)
085c9589 +0x33d:  movl   $0x11,0x44(%esp)
085c9591 +0x345:  mov    0x10(%ebp),%eax
085c9594 +0x348:  mov    (%eax),%ecx
085c9596 +0x34a:  mov    %ecx,0x4(%esp)
085c959a +0x34e:  mov    0x4(%eax),%ecx
085c959d +0x351:  mov    %ecx,0x8(%esp)
085c95a1 +0x355:  mov    0x8(%eax),%ecx
085c95a4 +0x358:  mov    %ecx,0xc(%esp)
085c95a8 +0x35c:  mov    0xc(%eax),%ecx
085c95ab +0x35f:  mov    %ecx,0x10(%esp)
085c95af +0x363:  mov    0x10(%eax),%ecx
085c95b2 +0x366:  mov    %ecx,0x14(%esp)
085c95b6 +0x36a:  mov    0x14(%eax),%ecx
085c95b9 +0x36d:  mov    %ecx,0x18(%esp)
085c95bd +0x371:  mov    0x18(%eax),%ecx
085c95c0 +0x374:  mov    %ecx,0x1c(%esp)
085c95c4 +0x378:  mov    0x1c(%eax),%ecx
085c95c7 +0x37b:  mov    %ecx,0x20(%esp)
085c95cb +0x37f:  mov    0x20(%eax),%ecx
085c95ce +0x382:  mov    %ecx,0x24(%esp)
085c95d2 +0x386:  mov    0x24(%eax),%ecx
085c95d5 +0x389:  mov    %ecx,0x28(%esp)
085c95d9 +0x38d:  mov    0x28(%eax),%ecx
085c95dc +0x390:  mov    %ecx,0x2c(%esp)
085c95e0 +0x394:  mov    0x2c(%eax),%ecx
085c95e3 +0x397:  mov    %ecx,0x30(%esp)
085c95e7 +0x39b:  mov    0x30(%eax),%ecx
085c95ea +0x39e:  mov    %ecx,0x34(%esp)
085c95ee +0x3a2:  mov    0x34(%eax),%ecx
085c95f1 +0x3a5:  mov    %ecx,0x38(%esp)
085c95f5 +0x3a9:  mov    0x38(%eax),%ecx
085c95f8 +0x3ac:  mov    %ecx,0x3c(%esp)
085c95fc +0x3b0:  movzbl 0x3c(%eax),%eax
085c9600 +0x3b4:  mov    %al,0x40(%esp)
085c9604 +0x3b8:  mov    %edx,(%esp)
085c9607 +0x3bb:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
085c960c +0x3c0:  mov    %eax,-0x24(%ebp)
085c960f +0x3c3:  cmpl   $0x0,-0x24(%ebp)
085c9613 +0x3c7:  jns    085c961d <+0x3d1>
085c9615 +0x3c9:  mov    -0x24(%ebp),%eax
085c9618 +0x3cc:  jmp    085c97d6 <+0x58a>
085c961d +0x3d1:  lea    -0x90(%ebp),%eax
085c9623 +0x3d7:  mov    %eax,(%esp)
085c9626 +0x3da:  call   0823457c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c26>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c26
085c962b +0x3df:  mov    -0x24(%ebp),%eax
085c962e +0x3e2:  mov    %ax,-0x48(%ebp)
085c9632 +0x3e6:  mov    0x8(%ebp),%eax
085c9635 +0x3e9:  mov    0x30(%eax),%eax
085c9638 +0x3ec:  lea    -0x90(%ebp),%edx
085c963e +0x3f2:  mov    %edx,0x8(%esp)
085c9642 +0x3f6:  mov    %eax,0x4(%esp)
085c9646 +0x3fa:  mov    0x8(%ebp),%eax
085c9649 +0x3fd:  mov    %eax,(%esp)
085c964c +0x400:  call   085c9f22 <_ZN13private_store13CPrivateStore11GetItemInfoEP5CUserRNS_16PrivateStoreItemE>  ; private_store::CPrivateStore::GetItemInfo(CUser*, private_store::PrivateStoreItem&)
085c9651 +0x405:  movl   $0x0,-0x1c(%ebp)
085c9658 +0x40c:  mov    0x10(%ebp),%eax
085c965b +0x40f:  mov    %eax,(%esp)
085c965e +0x412:  call   08150812 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x147>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x147
085c9663 +0x417:  test   %al,%al
085c9665 +0x419:  je     085c9679 <+0x42d>
085c9667 +0x41b:  mov    0x20(%ebp),%eax
085c966a +0x41e:  movl   $0x1,(%eax)
085c9670 +0x424:  movl   $0x1,-0x1c(%ebp)
085c9677 +0x42b:  jmp    085c969a <+0x44e>
085c9679 +0x42d:  lea    -0x90(%ebp),%eax
085c967f +0x433:  mov    %eax,(%esp)
085c9682 +0x436:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
085c9687 +0x43b:  mov    0x20(%ebp),%edx
085c968a +0x43e:  mov    %eax,(%edx)
085c968c +0x440:  mov    0x10(%ebp),%eax
085c968f +0x443:  mov    %eax,(%esp)
085c9692 +0x446:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
085c9697 +0x44b:  mov    %eax,-0x1c(%ebp)
085c969a +0x44e:  mov    0x8(%ebp),%eax
085c969d +0x451:  mov    0x30(%eax),%eax
085c96a0 +0x454:  mov    %eax,(%esp)
085c96a3 +0x457:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
085c96a8 +0x45c:  mov    %eax,%ebx
085c96aa +0x45e:  mov    0x8(%ebp),%eax
085c96ad +0x461:  mov    0x2c(%eax),%eax
085c96b0 +0x464:  mov    %eax,(%esp)
085c96b3 +0x467:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
085c96b8 +0x46c:  mov    0x20(%ebp),%edx
085c96bb +0x46f:  mov    (%edx),%edx
085c96bd +0x471:  mov    0x8(%ebp),%ecx
085c96c0 +0x474:  mov    0x30(%ecx),%ecx
085c96c3 +0x477:  add    $0x79700,%ecx
085c96c9 +0x47d:  mov    %ebx,0x1c(%esp)
085c96cd +0x481:  mov    %eax,0x18(%esp)
085c96d1 +0x485:  movl   $0x11,0x14(%esp)
085c96d9 +0x48d:  mov    -0x1c(%ebp),%eax
085c96dc +0x490:  mov    %eax,0x10(%esp)
085c96e0 +0x494:  mov    %edx,0xc(%esp)
085c96e4 +0x498:  mov    0x10(%ebp),%eax
085c96e7 +0x49b:  mov    %eax,0x8(%esp)
085c96eb +0x49f:  movl   $0x1,0x4(%esp)
085c96f3 +0x4a7:  mov    %ecx,(%esp)
085c96f6 +0x4aa:  call   0868433e <_ZN15cUserHistoryLog19PrivateStoreItemAddE10INVEN_TYPERK10Inven_Itemii14eItemAddReasonPKcS6_>  ; cUserHistoryLog::PrivateStoreItemAdd(INVEN_TYPE, Inven_Item const&, int, int, eItemAddReason, char const*, char const*)
085c96fb +0x4af:  mov    0x8(%ebp),%eax
085c96fe +0x4b2:  mov    0x2c(%eax),%eax
085c9701 +0x4b5:  mov    %eax,(%esp)
085c9704 +0x4b8:  call   08230800 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5eaa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5eaa
085c9709 +0x4bd:  lea    -0x44(%ebp),%edx
085c970c +0x4c0:  mov    %edx,0x4(%esp)
085c9710 +0x4c4:  mov    %eax,(%esp)
085c9713 +0x4c7:  call   084b9774 <_ZN8XNuclear6CHades5GetIPEPc>  ; XNuclear::CHades::GetIP(char*)
085c9718 +0x4cc:  mov    0x8(%ebp),%eax
085c971b +0x4cf:  mov    0x30(%eax),%eax
085c971e +0x4d2:  mov    %eax,(%esp)
085c9721 +0x4d5:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085c9726 +0x4da:  mov    %eax,(%esp)
085c9729 +0x4dd:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
085c972e +0x4e2:  mov    %eax,%edi
085c9730 +0x4e4:  mov    0x14(%ebp),%esi
085c9733 +0x4e7:  mov    0x8(%ebp),%eax
085c9736 +0x4ea:  mov    0x2c(%eax),%eax
085c9739 +0x4ed:  mov    %eax,(%esp)
085c973c +0x4f0:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
085c9741 +0x4f5:  mov    %eax,%ebx
085c9743 +0x4f7:  mov    0x8(%ebp),%eax
085c9746 +0x4fa:  mov    0x30(%eax),%eax
085c9749 +0x4fd:  mov    %eax,(%esp)
085c974c +0x500:  call   084ecb1a <_GLOBAL__I__Z7getUserj+0x3acc>  ; global constructors keyed to getUser(unsigned int)+0x3acc
085c9751 +0x505:  lea    -0x44(%ebp),%edx
085c9754 +0x508:  mov    %edx,0x18(%esp)
085c9758 +0x50c:  movl   $0x1,0x14(%esp)
085c9760 +0x514:  mov    %edi,0x10(%esp)
085c9764 +0x518:  mov    %esi,0xc(%esp)
085c9768 +0x51c:  mov    %ebx,0x8(%esp)
085c976c +0x520:  movl   $0x0,0x4(%esp)
085c9774 +0x528:  mov    %eax,(%esp)
085c9777 +0x52b:  call   08278cce <_ZN19Secu_AccountHacking8sendGoldEPKcjjjhPc>  ; Secu_AccountHacking::sendGold(char const*, unsigned int, unsigned int, unsigned int, unsigned char, char*)
085c977c +0x530:  mov    0x8(%ebp),%eax
085c977f +0x533:  mov    0x30(%eax),%eax
085c9782 +0x536:  mov    %eax,(%esp)
085c9785 +0x539:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085c978a +0x53e:  movl   $0x1,0xc(%esp)
085c9792 +0x546:  movl   $0xe,0x8(%esp)
085c979a +0x54e:  mov    0x14(%ebp),%edx
085c979d +0x551:  mov    %edx,0x4(%esp)
085c97a1 +0x555:  mov    %eax,(%esp)
085c97a4 +0x558:  call   084ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>  ; CInventory::use_money(int, eMoneySubReason, bool)
085c97a9 +0x55d:  mov    0x10(%ebp),%eax
085c97ac +0x560:  mov    0x7(%eax),%ecx
085c97af +0x563:  mov    0x10(%ebp),%eax
085c97b2 +0x566:  mov    0x2(%eax),%eax
085c97b5 +0x569:  mov    %eax,%edx
085c97b7 +0x56b:  mov    0x8(%ebp),%eax
085c97ba +0x56e:  mov    0x30(%eax),%eax
085c97bd +0x571:  mov    0x796f8(%eax),%eax
085c97c3 +0x577:  mov    %ecx,0x8(%esp)
085c97c7 +0x57b:  mov    %edx,0x4(%esp)
085c97cb +0x57f:  mov    %eax,(%esp)
085c97ce +0x582:  call   084ba1f4 <_ZN10HistoryLog12WriteBuyItemEP8_IO_FILEii>  ; HistoryLog::WriteBuyItem(_IO_FILE*, int, int)
085c97d3 +0x587:  mov    -0x24(%ebp),%eax
085c97d6 +0x58a:  add    $0xec,%esp
085c97dc +0x590:  pop    %ebx
085c97dd +0x591:  pop    %esi
085c97de +0x592:  pop    %edi
085c97df +0x593:  pop    %ebp
085c97e0 +0x594:  ret
085c97e1 +0x595:  nop
```

## 反编译 C

```c
// private_store::CPrivateStore::BuyItem @ 0x85c924c

/* private_store::CPrivateStore::BuyItem(int, Inven_Item&, int, int, int, int&) */

int __thiscall
private_store::CPrivateStore::BuyItem
          (CPrivateStore *this,int param_1,Inven_Item *param_2,int param_3,int param_4,int param_5,
          int *param_6)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  CInventory *pCVar8;
  int iVar9;
  CAvatarItemMgr *this_00;
  undefined4 uVar10;
  CHades *this_01;
  Secu_AccountHacking *this_02;
  PrivateStoreItem local_94 [72];
  undefined2 local_4c;
  char local_48 [16];
  cMyTrace local_38 [16];
  int local_28;
  Avatar_Item *local_24;
  undefined4 local_20;
  
  uVar3 = Inven_Item::GetReSealCount(param_2);
  uVar4 = Inven_Item::GetUpgrade(param_2);
  uVar7 = *(undefined4 *)(param_2 + 7);
  uVar10 = *(undefined4 *)(param_2 + 2);
  uVar5 = CUserCharacInfo::getCurCharacName(*(CUserCharacInfo **)(this + 0x30));
  uVar6 = CUserCharacInfo::getCurCharacName(*(CUserCharacInfo **)(this + 0x2c));
  cMyTrace::cMyTrace(local_38,
                     "int private_store::CPrivateStore::BuyItem(int, Inven_Item&, int, int, int, int&)"
                     ,0xa63,0);
  cMyTrace::operator()
            (local_38,
             "PrivateStore buy seller_charac_name(%s), buyer_charac_name(%s), item_id(%d), add_info(%d), upgrade(%d), reseal_count(%d), sell_price(%d)"
             ,uVar6,uVar5,uVar10,uVar7,uVar4 & 0xff,uVar3 & 0xff,param_3);
  if (param_2[1] == (Inven_Item)0x8) {
    uVar7 = CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)(this + 0x30));
    local_28 = CInventory::tryInsertAvatarIntoInventory
                         (uVar7,*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4),
                          *(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),
                          *(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),
                          *(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),
                          *(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24),
                          *(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x2c),
                          *(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x34),
                          *(undefined4 *)(param_2 + 0x38),param_2[0x3c]);
    if (-1 < local_28) {
      pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)(this + 0x2c))
      ;
      iVar9 = CInventory::GetAvatarItemMgrW(pCVar8);
      local_24 = (Avatar_Item *)WongWork::CAvatarItemMgr::EraseAvatarItem(iVar9);
      if (local_24 == (Avatar_Item *)0x0) {
        return -1;
      }
      uVar7 = CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)(this + 0x30));
      local_28 = CInventory::insertAvatarIntoSpecificSlot
                           (uVar7,*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4),
                            *(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),
                            *(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),
                            *(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),
                            *(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24),
                            *(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x2c),
                            *(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x34),
                            *(undefined4 *)(param_2 + 0x38),param_2[0x3c],local_28,0xb,0);
      if (local_28 == -1) {
        return -1;
      }
      iVar9 = *(int *)(param_2 + 7);
      pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)(this + 0x30))
      ;
      this_00 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrW(pCVar8);
      WongWork::CAvatarItemMgr::AddAvatarItem(this_00,iVar9,local_24);
      iVar9 = local_28;
      uVar3 = CUserCharacInfo::getCurCharacNo(*(CUserCharacInfo **)(this + 0x30));
      uVar4 = CUserCharacInfo::getCurCharacNo(*(CUserCharacInfo **)(this + 0x2c));
      DB_AvatarChangeOwner::makeRequest(*(uint *)(param_2 + 7),uVar4,uVar3,(uchar)iVar9);
      iVar9 = local_28 + 10;
      iVar1 = *(int *)(param_2 + 7);
      pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 0x30))
      ;
      CInventory::SendAvatarEvent(pCVar8,0x36,iVar1,0,iVar9,0);
    }
  }
  else {
    uVar7 = CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)(this + 0x30));
    local_28 = CInventory::insertItemIntoInventory
                         (uVar7,*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4),
                          *(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),
                          *(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),
                          *(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),
                          *(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24),
                          *(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x2c),
                          *(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x34),
                          *(undefined4 *)(param_2 + 0x38),param_2[0x3c],0x11,0,0);
  }
  if (-1 < local_28) {
    PrivateStoreItem::PrivateStoreItem(local_94);
    local_4c = (undefined2)local_28;
    GetItemInfo(this,*(CUser **)(this + 0x30),local_94);
    local_20 = 0;
    cVar2 = Inven_Item::isEquipableItemType(param_2);
    if (cVar2 == '\0') {
      iVar9 = Inven_Item::get_add_info((Inven_Item *)local_94);
      *param_6 = iVar9;
      local_20 = Inven_Item::get_add_info(param_2);
    }
    else {
      *param_6 = 1;
      local_20 = 1;
    }
    uVar7 = CUserCharacInfo::getCurCharacName(*(CUserCharacInfo **)(this + 0x30));
    uVar10 = CUserCharacInfo::getCurCharacName(*(CUserCharacInfo **)(this + 0x2c));
    cUserHistoryLog::PrivateStoreItemAdd
              ((cUserHistoryLog *)(*(int *)(this + 0x30) + 0x79700),1,param_2,*param_6,local_20,0x11
               ,uVar10,uVar7);
    this_01 = (CHades *)CUser::getHades(*(CUser **)(this + 0x2c));
    XNuclear::CHades::GetIP(this_01,local_48);
    pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 0x30));
    uVar3 = CInventory::get_money(pCVar8);
    uVar4 = CUser::get_acc_id(*(CUser **)(this + 0x2c));
    this_02 = (Secu_AccountHacking *)CUser::getAcccountHackInfo(*(CUser **)(this + 0x30));
    Secu_AccountHacking::sendGold(this_02,(char *)0x0,uVar4,param_3,uVar3,'\x01',local_48);
    pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)(this + 0x30));
    CInventory::use_money(pCVar8,param_3,0xe,1);
    HistoryLog::WriteBuyItem
              (*(_IO_FILE **)(*(int *)(this + 0x30) + 0x796f8),*(int *)(param_2 + 2),
               *(int *)(param_2 + 7));
  }
  return local_28;
}
```
