# RecallPrivateStoreItem

`_ZN13private_store13CPrivateStore22RecallPrivateStoreItemEv`

`private_store::CPrivateStore::RecallPrivateStoreItem()`

| 类 | 地址 |
|---|---|
| `private_store::CPrivateStore` | `0x085c63ca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c63ca  _ZN13private_store13CPrivateStore22RecallPrivateStoreItemEv
#           private_store::CPrivateStore::RecallPrivateStoreItem()
# range [0x085c63ca, 0x085c68b3]
085c63ca +0x000:  push   %ebp
085c63cb +0x001:  mov    %esp,%ebp
085c63cd +0x003:  push   %esi
085c63ce +0x004:  push   %ebx
085c63cf +0x005:  sub    $0x140,%esp
085c63d5 +0x00b:  movl   $0x0,-0x20(%ebp)
085c63dc +0x012:  movl   $0x0,-0x20(%ebp)
085c63e3 +0x019:  jmp    085c67c6 <+0x3fc>
085c63e8 +0x01e:  mov    -0x20(%ebp),%eax
085c63eb +0x021:  mov    0x8(%ebp),%edx
085c63ee +0x024:  add    $0x3c,%edx
085c63f1 +0x027:  mov    %eax,0x4(%esp)
085c63f5 +0x02b:  mov    %edx,(%esp)
085c63f8 +0x02e:  call   085ccf06 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1c1c>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1c1c
085c63fd +0x033:  mov    %eax,-0x1c(%ebp)
085c6400 +0x036:  mov    -0x1c(%ebp),%eax
085c6403 +0x039:  mov    %eax,(%esp)
085c6406 +0x03c:  call   085cb662 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x378>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x378
085c640b +0x041:  cmp    $0x3,%al
085c640d +0x043:  sete   %al
085c6410 +0x046:  test   %al,%al
085c6412 +0x048:  je     085c67c2 <+0x3f8>
085c6418 +0x04e:  movl   $0xffffffff,-0x18(%ebp)
085c641f +0x055:  mov    -0x1c(%ebp),%eax
085c6422 +0x058:  movzbl 0x1(%eax),%eax
085c6426 +0x05c:  cmp    $0x8,%al
085c6428 +0x05e:  jne    085c65be <+0x1f4>
085c642e +0x064:  mov    -0x1c(%ebp),%eax
085c6431 +0x067:  mov    (%eax),%edx
085c6433 +0x069:  mov    %edx,-0xaa(%ebp)
085c6439 +0x06f:  mov    0x4(%eax),%edx
085c643c +0x072:  mov    %edx,-0xa6(%ebp)
085c6442 +0x078:  mov    0x8(%eax),%edx
085c6445 +0x07b:  mov    %edx,-0xa2(%ebp)
085c644b +0x081:  mov    0xc(%eax),%edx
085c644e +0x084:  mov    %edx,-0x9e(%ebp)
085c6454 +0x08a:  mov    0x10(%eax),%edx
085c6457 +0x08d:  mov    %edx,-0x9a(%ebp)
085c645d +0x093:  mov    0x14(%eax),%edx
085c6460 +0x096:  mov    %edx,-0x96(%ebp)
085c6466 +0x09c:  mov    0x18(%eax),%edx
085c6469 +0x09f:  mov    %edx,-0x92(%ebp)
085c646f +0x0a5:  mov    0x1c(%eax),%edx
085c6472 +0x0a8:  mov    %edx,-0x8e(%ebp)
085c6478 +0x0ae:  mov    0x20(%eax),%edx
085c647b +0x0b1:  mov    %edx,-0x8a(%ebp)
085c6481 +0x0b7:  mov    0x24(%eax),%edx
085c6484 +0x0ba:  mov    %edx,-0x86(%ebp)
085c648a +0x0c0:  mov    0x28(%eax),%edx
085c648d +0x0c3:  mov    %edx,-0x82(%ebp)
085c6493 +0x0c9:  mov    0x2c(%eax),%edx
085c6496 +0x0cc:  mov    %edx,-0x7e(%ebp)
085c6499 +0x0cf:  mov    0x30(%eax),%edx
085c649c +0x0d2:  mov    %edx,-0x7a(%ebp)
085c649f +0x0d5:  mov    0x34(%eax),%edx
085c64a2 +0x0d8:  mov    %edx,-0x76(%ebp)
085c64a5 +0x0db:  mov    0x38(%eax),%edx
085c64a8 +0x0de:  mov    %edx,-0x72(%ebp)
085c64ab +0x0e1:  movzbl 0x3c(%eax),%eax
085c64af +0x0e5:  mov    %al,-0x6e(%ebp)
085c64b2 +0x0e8:  mov    0x8(%ebp),%eax
085c64b5 +0x0eb:  mov    0x2c(%eax),%eax
085c64b8 +0x0ee:  mov    %eax,(%esp)
085c64bb +0x0f1:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085c64c0 +0x0f6:  movl   $0x0,0x48(%esp)
085c64c8 +0x0fe:  movl   $0xa,0x44(%esp)
085c64d0 +0x106:  mov    -0xaa(%ebp),%edx
085c64d6 +0x10c:  mov    %edx,0x4(%esp)
085c64da +0x110:  mov    -0xa6(%ebp),%edx
085c64e0 +0x116:  mov    %edx,0x8(%esp)
085c64e4 +0x11a:  mov    -0xa2(%ebp),%edx
085c64ea +0x120:  mov    %edx,0xc(%esp)
085c64ee +0x124:  mov    -0x9e(%ebp),%edx
085c64f4 +0x12a:  mov    %edx,0x10(%esp)
085c64f8 +0x12e:  mov    -0x9a(%ebp),%edx
085c64fe +0x134:  mov    %edx,0x14(%esp)
085c6502 +0x138:  mov    -0x96(%ebp),%edx
085c6508 +0x13e:  mov    %edx,0x18(%esp)
085c650c +0x142:  mov    -0x92(%ebp),%edx
085c6512 +0x148:  mov    %edx,0x1c(%esp)
085c6516 +0x14c:  mov    -0x8e(%ebp),%edx
085c651c +0x152:  mov    %edx,0x20(%esp)
085c6520 +0x156:  mov    -0x8a(%ebp),%edx
085c6526 +0x15c:  mov    %edx,0x24(%esp)
085c652a +0x160:  mov    -0x86(%ebp),%edx
085c6530 +0x166:  mov    %edx,0x28(%esp)
085c6534 +0x16a:  mov    -0x82(%ebp),%edx
085c653a +0x170:  mov    %edx,0x2c(%esp)
085c653e +0x174:  mov    -0x7e(%ebp),%edx
085c6541 +0x177:  mov    %edx,0x30(%esp)
085c6545 +0x17b:  mov    -0x7a(%ebp),%edx
085c6548 +0x17e:  mov    %edx,0x34(%esp)
085c654c +0x182:  mov    -0x76(%ebp),%edx
085c654f +0x185:  mov    %edx,0x38(%esp)
085c6553 +0x189:  mov    -0x72(%ebp),%edx
085c6556 +0x18c:  mov    %edx,0x3c(%esp)
085c655a +0x190:  movzbl -0x6e(%ebp),%edx
085c655e +0x194:  mov    %dl,0x40(%esp)
085c6562 +0x198:  mov    %eax,(%esp)
085c6565 +0x19b:  call   0850367c <_ZN10CInventory25insertAvatarIntoInventoryE10Inven_Item20eAvatarItemAddReasonb>  ; CInventory::insertAvatarIntoInventory(Inven_Item, eAvatarItemAddReason, bool)
085c656a +0x1a0:  mov    %eax,-0x18(%ebp)
085c656d +0x1a3:  cmpl   $0x0,-0x18(%ebp)
085c6571 +0x1a7:  js     085c67d7 <+0x40d>
085c6577 +0x1ad:  mov    -0x18(%ebp),%eax
085c657a +0x1b0:  lea    0xa(%eax),%esi
085c657d +0x1b3:  mov    -0x1c(%ebp),%eax
085c6580 +0x1b6:  mov    0x7(%eax),%ebx
085c6583 +0x1b9:  mov    0x8(%ebp),%eax
085c6586 +0x1bc:  mov    0x2c(%eax),%eax
085c6589 +0x1bf:  mov    %eax,(%esp)
085c658c +0x1c2:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085c6591 +0x1c7:  movl   $0x0,0x14(%esp)
085c6599 +0x1cf:  mov    %esi,0x10(%esp)
085c659d +0x1d3:  movl   $0x0,0xc(%esp)
085c65a5 +0x1db:  mov    %ebx,0x8(%esp)
085c65a9 +0x1df:  movl   $0x36,0x4(%esp)
085c65b1 +0x1e7:  mov    %eax,(%esp)
085c65b4 +0x1ea:  call   08508c2e <_ZNK10CInventory15SendAvatarEventEiiiii>  ; CInventory::SendAvatarEvent(int, int, int, int, int) const
085c65b9 +0x1ef:  jmp    085c66c3 <+0x2f9>
085c65be +0x1f4:  mov    -0x1c(%ebp),%eax
085c65c1 +0x1f7:  mov    (%eax),%edx
085c65c3 +0x1f9:  mov    %edx,-0x6d(%ebp)
085c65c6 +0x1fc:  mov    0x4(%eax),%edx
085c65c9 +0x1ff:  mov    %edx,-0x69(%ebp)
085c65cc +0x202:  mov    0x8(%eax),%edx
085c65cf +0x205:  mov    %edx,-0x65(%ebp)
085c65d2 +0x208:  mov    0xc(%eax),%edx
085c65d5 +0x20b:  mov    %edx,-0x61(%ebp)
085c65d8 +0x20e:  mov    0x10(%eax),%edx
085c65db +0x211:  mov    %edx,-0x5d(%ebp)
085c65de +0x214:  mov    0x14(%eax),%edx
085c65e1 +0x217:  mov    %edx,-0x59(%ebp)
085c65e4 +0x21a:  mov    0x18(%eax),%edx
085c65e7 +0x21d:  mov    %edx,-0x55(%ebp)
085c65ea +0x220:  mov    0x1c(%eax),%edx
085c65ed +0x223:  mov    %edx,-0x51(%ebp)
085c65f0 +0x226:  mov    0x20(%eax),%edx
085c65f3 +0x229:  mov    %edx,-0x4d(%ebp)
085c65f6 +0x22c:  mov    0x24(%eax),%edx
085c65f9 +0x22f:  mov    %edx,-0x49(%ebp)
085c65fc +0x232:  mov    0x28(%eax),%edx
085c65ff +0x235:  mov    %edx,-0x45(%ebp)
085c6602 +0x238:  mov    0x2c(%eax),%edx
085c6605 +0x23b:  mov    %edx,-0x41(%ebp)
085c6608 +0x23e:  mov    0x30(%eax),%edx
085c660b +0x241:  mov    %edx,-0x3d(%ebp)
085c660e +0x244:  mov    0x34(%eax),%edx
085c6611 +0x247:  mov    %edx,-0x39(%ebp)
085c6614 +0x24a:  mov    0x38(%eax),%edx
085c6617 +0x24d:  mov    %edx,-0x35(%ebp)
085c661a +0x250:  movzbl 0x3c(%eax),%eax
085c661e +0x254:  mov    %al,-0x31(%ebp)
085c6621 +0x257:  mov    0x8(%ebp),%eax
085c6624 +0x25a:  mov    0x2c(%eax),%eax
085c6627 +0x25d:  mov    %eax,(%esp)
085c662a +0x260:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085c662f +0x265:  movl   $0x1,0x4c(%esp)
085c6637 +0x26d:  movl   $0x0,0x48(%esp)
085c663f +0x275:  movl   $0x12,0x44(%esp)
085c6647 +0x27d:  mov    -0x6d(%ebp),%edx
085c664a +0x280:  mov    %edx,0x4(%esp)
085c664e +0x284:  mov    -0x69(%ebp),%edx
085c6651 +0x287:  mov    %edx,0x8(%esp)
085c6655 +0x28b:  mov    -0x65(%ebp),%edx
085c6658 +0x28e:  mov    %edx,0xc(%esp)
085c665c +0x292:  mov    -0x61(%ebp),%edx
085c665f +0x295:  mov    %edx,0x10(%esp)
085c6663 +0x299:  mov    -0x5d(%ebp),%edx
085c6666 +0x29c:  mov    %edx,0x14(%esp)
085c666a +0x2a0:  mov    -0x59(%ebp),%edx
085c666d +0x2a3:  mov    %edx,0x18(%esp)
085c6671 +0x2a7:  mov    -0x55(%ebp),%edx
085c6674 +0x2aa:  mov    %edx,0x1c(%esp)
085c6678 +0x2ae:  mov    -0x51(%ebp),%edx
085c667b +0x2b1:  mov    %edx,0x20(%esp)
085c667f +0x2b5:  mov    -0x4d(%ebp),%edx
085c6682 +0x2b8:  mov    %edx,0x24(%esp)
085c6686 +0x2bc:  mov    -0x49(%ebp),%edx
085c6689 +0x2bf:  mov    %edx,0x28(%esp)
085c668d +0x2c3:  mov    -0x45(%ebp),%edx
085c6690 +0x2c6:  mov    %edx,0x2c(%esp)
085c6694 +0x2ca:  mov    -0x41(%ebp),%edx
085c6697 +0x2cd:  mov    %edx,0x30(%esp)
085c669b +0x2d1:  mov    -0x3d(%ebp),%edx
085c669e +0x2d4:  mov    %edx,0x34(%esp)
085c66a2 +0x2d8:  mov    -0x39(%ebp),%edx
085c66a5 +0x2db:  mov    %edx,0x38(%esp)
085c66a9 +0x2df:  mov    -0x35(%ebp),%edx
085c66ac +0x2e2:  mov    %edx,0x3c(%esp)
085c66b0 +0x2e6:  movzbl -0x31(%ebp),%edx
085c66b4 +0x2ea:  mov    %dl,0x40(%esp)
085c66b8 +0x2ee:  mov    %eax,(%esp)
085c66bb +0x2f1:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
085c66c0 +0x2f6:  mov    %eax,-0x18(%ebp)
085c66c3 +0x2f9:  cmpl   $0x0,-0x18(%ebp)
085c66c7 +0x2fd:  js     085c67da <+0x410>
085c66cd +0x303:  lea    -0xf8(%ebp),%eax
085c66d3 +0x309:  mov    %eax,(%esp)
085c66d6 +0x30c:  call   0823457c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c26>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c26
085c66db +0x311:  mov    -0x18(%ebp),%eax
085c66de +0x314:  mov    %ax,-0xb0(%ebp)
085c66e5 +0x31b:  mov    0x8(%ebp),%eax
085c66e8 +0x31e:  mov    0x2c(%eax),%eax
085c66eb +0x321:  lea    -0xf8(%ebp),%edx
085c66f1 +0x327:  mov    %edx,0x8(%esp)
085c66f5 +0x32b:  mov    %eax,0x4(%esp)
085c66f9 +0x32f:  mov    0x8(%ebp),%eax
085c66fc +0x332:  mov    %eax,(%esp)
085c66ff +0x335:  call   085c9f22 <_ZN13private_store13CPrivateStore11GetItemInfoEP5CUserRNS_16PrivateStoreItemE>  ; private_store::CPrivateStore::GetItemInfo(CUser*, private_store::PrivateStoreItem&)
085c6704 +0x33a:  movl   $0x0,-0x14(%ebp)
085c670b +0x341:  movl   $0x0,-0x10(%ebp)
085c6712 +0x348:  mov    -0x1c(%ebp),%eax
085c6715 +0x34b:  mov    %eax,(%esp)
085c6718 +0x34e:  call   08150812 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x147>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x147
085c671d +0x353:  test   %al,%al
085c671f +0x355:  je     085c6731 <+0x367>
085c6721 +0x357:  movl   $0x1,-0x14(%ebp)
085c6728 +0x35e:  movl   $0x1,-0x10(%ebp)
085c672f +0x365:  jmp    085c6750 <+0x386>
085c6731 +0x367:  lea    -0xf8(%ebp),%eax
085c6737 +0x36d:  mov    %eax,(%esp)
085c673a +0x370:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
085c673f +0x375:  mov    %eax,-0x14(%ebp)
085c6742 +0x378:  mov    -0x1c(%ebp),%eax
085c6745 +0x37b:  mov    %eax,(%esp)
085c6748 +0x37e:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
085c674d +0x383:  mov    %eax,-0x10(%ebp)
085c6750 +0x386:  mov    0x8(%ebp),%eax
085c6753 +0x389:  mov    0x2c(%eax),%eax
085c6756 +0x38c:  mov    %eax,(%esp)
085c6759 +0x38f:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
085c675e +0x394:  mov    %eax,%ebx
085c6760 +0x396:  mov    0x8(%ebp),%eax
085c6763 +0x399:  mov    0x2c(%eax),%eax
085c6766 +0x39c:  mov    %eax,(%esp)
085c6769 +0x39f:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
085c676e +0x3a4:  mov    -0x1c(%ebp),%edx
085c6771 +0x3a7:  mov    0x8(%ebp),%ecx
085c6774 +0x3aa:  mov    0x2c(%ecx),%ecx
085c6777 +0x3ad:  add    $0x79700,%ecx
085c677d +0x3b3:  mov    %ebx,0x1c(%esp)
085c6781 +0x3b7:  mov    %eax,0x18(%esp)
085c6785 +0x3bb:  movl   $0x12,0x14(%esp)
085c678d +0x3c3:  mov    -0x10(%ebp),%eax
085c6790 +0x3c6:  mov    %eax,0x10(%esp)
085c6794 +0x3ca:  mov    -0x14(%ebp),%eax
085c6797 +0x3cd:  mov    %eax,0xc(%esp)
085c679b +0x3d1:  mov    %edx,0x8(%esp)
085c679f +0x3d5:  movl   $0x1,0x4(%esp)
085c67a7 +0x3dd:  mov    %ecx,(%esp)
085c67aa +0x3e0:  call   0868433e <_ZN15cUserHistoryLog19PrivateStoreItemAddE10INVEN_TYPERK10Inven_Itemii14eItemAddReasonPKcS6_>  ; cUserHistoryLog::PrivateStoreItemAdd(INVEN_TYPE, Inven_Item const&, int, int, eItemAddReason, char const*, char const*)
085c67af +0x3e5:  mov    -0x18(%ebp),%eax
085c67b2 +0x3e8:  mov    %eax,%edx
085c67b4 +0x3ea:  mov    -0x1c(%ebp),%eax
085c67b7 +0x3ed:  mov    %dx,0x48(%eax)
085c67bb +0x3f1:  mov    -0x1c(%ebp),%eax
085c67be +0x3f4:  movb   $0x4,0x3d(%eax)
085c67c2 +0x3f8:  addl   $0x1,-0x20(%ebp)
085c67c6 +0x3fc:  cmpl   $0xd,-0x20(%ebp)
085c67ca +0x400:  setle  %al
085c67cd +0x403:  test   %al,%al
085c67cf +0x405:  jne    085c63e8 <+0x1e>
085c67d5 +0x40b:  jmp    085c67db <+0x411>
085c67d7 +0x40d:  nop
085c67d8 +0x40e:  jmp    085c67db <+0x411>
085c67da +0x410:  nop
085c67db +0x411:  cmpl   $0xe,-0x20(%ebp)
085c67df +0x415:  je     085c689a <+0x4d0>
085c67e5 +0x41b:  movl   $0x0,-0x20(%ebp)
085c67ec +0x422:  jmp    085c6884 <+0x4ba>
085c67f1 +0x427:  mov    -0x20(%ebp),%eax
085c67f4 +0x42a:  mov    0x8(%ebp),%edx
085c67f7 +0x42d:  add    $0x3c,%edx
085c67fa +0x430:  mov    %eax,0x4(%esp)
085c67fe +0x434:  mov    %edx,(%esp)
085c6801 +0x437:  call   085ccf06 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1c1c>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1c1c
085c6806 +0x43c:  mov    %eax,-0xc(%ebp)
085c6809 +0x43f:  mov    -0xc(%ebp),%eax
085c680c +0x442:  mov    %eax,(%esp)
085c680f +0x445:  call   085cb662 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x378>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x378
085c6814 +0x44a:  cmp    $0x4,%al
085c6816 +0x44c:  sete   %al
085c6819 +0x44f:  test   %al,%al
085c681b +0x451:  je     085c6880 <+0x4b6>
085c681d +0x453:  mov    -0xc(%ebp),%eax
085c6820 +0x456:  mov    %eax,0x4(%esp)
085c6824 +0x45a:  mov    0x8(%ebp),%eax
085c6827 +0x45d:  mov    %eax,(%esp)
085c682a +0x460:  call   085c68b4 <_ZN13private_store13CPrivateStore10DeleteItemERNS_16PrivateStoreItemE>  ; private_store::CPrivateStore::DeleteItem(private_store::PrivateStoreItem&)
085c682f +0x465:  test   %al,%al
085c6831 +0x467:  je     085c6879 <+0x4af>
085c6833 +0x469:  movl   $0x5,0xc(%esp)
085c683b +0x471:  movl   $0x4c9,0x8(%esp)
085c6843 +0x479:  movl   $&_ZZN13private_store13CPrivateStore22RecallPrivateStoreItemEvE19__PRETTY_FUNCTION__,0x4(%esp)
085c684b +0x481:  lea    -0x30(%ebp),%eax
085c684e +0x484:  mov    %eax,(%esp)
085c6851 +0x487:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085c6856 +0x48c:  movl   $0x4c9,0xc(%esp)
085c685e +0x494:  movl   $&_ZZN13private_store13CPrivateStore22RecallPrivateStoreItemEvE19__PRETTY_FUNCTION__,0x8(%esp)
085c6866 +0x49c:  movl   $"[%s][%d]",0x4(%esp)
085c686e +0x4a4:  lea    -0x30(%ebp),%eax
085c6871 +0x4a7:  mov    %eax,(%esp)
085c6874 +0x4aa:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085c6879 +0x4af:  mov    -0xc(%ebp),%eax
085c687c +0x4b2:  movb   $0x3,0x3d(%eax)
085c6880 +0x4b6:  addl   $0x1,-0x20(%ebp)
085c6884 +0x4ba:  cmpl   $0xd,-0x20(%ebp)
085c6888 +0x4be:  setle  %al
085c688b +0x4c1:  test   %al,%al
085c688d +0x4c3:  jne    085c67f1 <+0x427>
085c6893 +0x4c9:  mov    $0x0,%eax
085c6898 +0x4ce:  jmp    085c68aa <+0x4e0>
085c689a +0x4d0:  mov    0x8(%ebp),%eax
085c689d +0x4d3:  mov    %eax,(%esp)
085c68a0 +0x4d6:  call   085c4f52 <_ZN13private_store13CPrivateStore10ResetItemsEv>  ; private_store::CPrivateStore::ResetItems()
085c68a5 +0x4db:  mov    $0x1,%eax
085c68aa +0x4e0:  add    $0x140,%esp
085c68b0 +0x4e6:  pop    %ebx
085c68b1 +0x4e7:  pop    %esi
085c68b2 +0x4e8:  pop    %ebp
085c68b3 +0x4e9:  ret
```

## 反编译 C

```c
// private_store::CPrivateStore::RecallPrivateStoreItem @ 0x85c63ca

/* private_store::CPrivateStore::RecallPrivateStoreItem() */

undefined4 __thiscall private_store::CPrivateStore::RecallPrivateStoreItem(CPrivateStore *this)

{
  int iVar1;
  int iVar2;
  char cVar3;
  CInventory *this_00;
  undefined4 uVar4;
  undefined4 uVar5;
  PrivateStoreItem local_fc [72];
  undefined2 local_b4;
  undefined4 local_ae;
  undefined4 local_aa;
  undefined4 local_a6;
  undefined4 local_a2;
  undefined4 local_9e;
  undefined4 local_9a;
  undefined4 local_96;
  undefined4 local_92;
  undefined4 local_8e;
  undefined4 local_8a;
  undefined4 local_86;
  undefined4 local_82;
  undefined4 local_7e;
  undefined4 local_7a;
  undefined4 local_76;
  PrivateStoreItem local_72;
  undefined4 local_71;
  undefined4 local_6d;
  undefined4 local_69;
  undefined4 local_65;
  undefined4 local_61;
  undefined4 local_5d;
  undefined4 local_59;
  undefined4 local_55;
  undefined4 local_51;
  undefined4 local_4d;
  undefined4 local_49;
  undefined4 local_45;
  undefined4 local_41;
  undefined4 local_3d;
  undefined4 local_39;
  PrivateStoreItem local_35;
  cMyTrace local_34 [16];
  uint local_24;
  PrivateStoreItem *local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  PrivateStoreItem *local_10;
  
  for (local_24 = 0; (int)local_24 < 0xe; local_24 = local_24 + 1) {
    local_20 = (PrivateStoreItem *)
               std::
               vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
               ::operator[]((vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                             *)(this + 0x3c),local_24);
    cVar3 = PrivateStoreItem::GetState(local_20);
    if (cVar3 == '\x03') {
      local_1c = 0xffffffff;
      if (local_20[1] == (PrivateStoreItem)0x8) {
        local_ae = *(undefined4 *)local_20;
        local_aa = *(undefined4 *)(local_20 + 4);
        local_a6 = *(undefined4 *)(local_20 + 8);
        local_a2 = *(undefined4 *)(local_20 + 0xc);
        local_9e = *(undefined4 *)(local_20 + 0x10);
        local_9a = *(undefined4 *)(local_20 + 0x14);
        local_96 = *(undefined4 *)(local_20 + 0x18);
        local_92 = *(undefined4 *)(local_20 + 0x1c);
        local_8e = *(undefined4 *)(local_20 + 0x20);
        local_8a = *(undefined4 *)(local_20 + 0x24);
        local_86 = *(undefined4 *)(local_20 + 0x28);
        local_82 = *(undefined4 *)(local_20 + 0x2c);
        local_7e = *(undefined4 *)(local_20 + 0x30);
        local_7a = *(undefined4 *)(local_20 + 0x34);
        local_76 = *(undefined4 *)(local_20 + 0x38);
        local_72 = local_20[0x3c];
        uVar5 = CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)(this + 0x2c));
        local_1c = CInventory::insertAvatarIntoInventory
                             (uVar5,local_ae,local_aa,local_a6,local_a2,local_9e,local_9a,local_96,
                              local_92,local_8e,local_8a,local_86,local_82,local_7e,local_7a,
                              local_76,local_72,10,0);
        if (local_1c < 0) break;
        iVar1 = local_1c + 10;
        iVar2 = *(int *)(local_20 + 7);
        this_00 = (CInventory *)
                  CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 0x2c));
        CInventory::SendAvatarEvent(this_00,0x36,iVar2,0,iVar1,0);
      }
      else {
        local_71 = *(undefined4 *)local_20;
        local_6d = *(undefined4 *)(local_20 + 4);
        local_69 = *(undefined4 *)(local_20 + 8);
        local_65 = *(undefined4 *)(local_20 + 0xc);
        local_61 = *(undefined4 *)(local_20 + 0x10);
        local_5d = *(undefined4 *)(local_20 + 0x14);
        local_59 = *(undefined4 *)(local_20 + 0x18);
        local_55 = *(undefined4 *)(local_20 + 0x1c);
        local_51 = *(undefined4 *)(local_20 + 0x20);
        local_4d = *(undefined4 *)(local_20 + 0x24);
        local_49 = *(undefined4 *)(local_20 + 0x28);
        local_45 = *(undefined4 *)(local_20 + 0x2c);
        local_41 = *(undefined4 *)(local_20 + 0x30);
        local_3d = *(undefined4 *)(local_20 + 0x34);
        local_39 = *(undefined4 *)(local_20 + 0x38);
        local_35 = local_20[0x3c];
        uVar5 = CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)(this + 0x2c));
        local_1c = CInventory::insertItemIntoInventory
                             (uVar5,local_71,local_6d,local_69,local_65,local_61,local_5d,local_59,
                              local_55,local_51,local_4d,local_49,local_45,local_41,local_3d,
                              local_39,local_35,0x12,0,1);
      }
      if (local_1c < 0) break;
      PrivateStoreItem::PrivateStoreItem(local_fc);
      local_b4 = (undefined2)local_1c;
      GetItemInfo(this,*(CUser **)(this + 0x2c),local_fc);
      local_18 = 0;
      local_14 = 0;
      cVar3 = Inven_Item::isEquipableItemType((Inven_Item *)local_20);
      if (cVar3 == '\0') {
        local_18 = Inven_Item::get_add_info((Inven_Item *)local_fc);
        local_14 = Inven_Item::get_add_info((Inven_Item *)local_20);
      }
      else {
        local_18 = 1;
        local_14 = 1;
      }
      uVar5 = CUserCharacInfo::getCurCharacName(*(CUserCharacInfo **)(this + 0x2c));
      uVar4 = CUserCharacInfo::getCurCharacName(*(CUserCharacInfo **)(this + 0x2c));
      cUserHistoryLog::PrivateStoreItemAdd
                ((cUserHistoryLog *)(*(int *)(this + 0x2c) + 0x79700),1,local_20,local_18,local_14,
                 0x12,uVar4,uVar5);
      *(short *)(local_20 + 0x48) = (short)local_1c;
      local_20[0x3d] = (PrivateStoreItem)0x4;
    }
  }
  if (local_24 == 0xe) {
    ResetItems(this);
    uVar5 = 1;
  }
  else {
    for (local_24 = 0; (int)local_24 < 0xe; local_24 = local_24 + 1) {
      local_10 = (PrivateStoreItem *)
                 std::
                 vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                 ::operator[]((vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                               *)(this + 0x3c),local_24);
      cVar3 = PrivateStoreItem::GetState(local_10);
      if (cVar3 == '\x04') {
        cVar3 = DeleteItem(this,local_10);
        if (cVar3 != '\0') {
          cMyTrace::cMyTrace(local_34,"bool private_store::CPrivateStore::RecallPrivateStoreItem()",
                             0x4c9,5);
          cMyTrace::operator()
                    (local_34,"[%s][%d]",
                     "bool private_store::CPrivateStore::RecallPrivateStoreItem()",0x4c9);
        }
        local_10[0x3d] = (PrivateStoreItem)0x3;
      }
    }
    uVar5 = 0;
  }
  return uVar5;
}
```
