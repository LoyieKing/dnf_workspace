# ProcUpgrade

`_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP11MSG_ENCHANTP11PacketGuard`

`WongWork::CItemUpgrade::ProcUpgrade(CUser*, MSG_ENCHANT*, PacketGuard*)`

| 类 | 地址 |
|---|---|
| `WongWork::CItemUpgrade` | `0x0854a1ba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854a1ba  _ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP11MSG_ENCHANTP11PacketGuard
#           WongWork::CItemUpgrade::ProcUpgrade(CUser*, MSG_ENCHANT*, PacketGuard*)
# range [0x0854a1ba, 0x0854a915]
0854a1ba +0x000:  push   %ebp
0854a1bb +0x001:  mov    %esp,%ebp
0854a1bd +0x003:  push   %edi
0854a1be +0x004:  push   %esi
0854a1bf +0x005:  push   %ebx
0854a1c0 +0x006:  sub    $0x19c,%esp
0854a1c6 +0x00c:  mov    0xc(%ebp),%eax
0854a1c9 +0x00f:  mov    %eax,(%esp)
0854a1cc +0x012:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0854a1d1 +0x017:  mov    %eax,-0x30(%ebp)
0854a1d4 +0x01a:  mov    0x10(%ebp),%eax
0854a1d7 +0x01d:  movzwl 0xd(%eax),%eax
0854a1db +0x021:  movzwl %ax,%edx
0854a1de +0x024:  lea    -0xd9(%ebp),%eax
0854a1e4 +0x02a:  mov    %edx,0xc(%esp)
0854a1e8 +0x02e:  movl   $0x1,0x8(%esp)
0854a1f0 +0x036:  mov    -0x30(%ebp),%edx
0854a1f3 +0x039:  mov    %edx,0x4(%esp)
0854a1f7 +0x03d:  mov    %eax,(%esp)
0854a1fa +0x040:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0854a1ff +0x045:  sub    $0x4,%esp
0854a202 +0x048:  lea    -0xd9(%ebp),%eax
0854a208 +0x04e:  mov    %eax,(%esp)
0854a20b +0x051:  call   0811ed66 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x61>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x61
0854a210 +0x056:  test   %al,%al
0854a212 +0x058:  je     0854a21e <+0x64>
0854a214 +0x05a:  mov    $0x4,%eax
0854a219 +0x05f:  jmp    0854a90b <+0x751>
0854a21e +0x064:  mov    -0xd7(%ebp),%edx
0854a224 +0x06a:  mov    0x10(%ebp),%eax
0854a227 +0x06d:  mov    0xf(%eax),%eax
0854a22a +0x070:  cmp    %eax,%edx
0854a22c +0x072:  je     0854a238 <+0x7e>
0854a22e +0x074:  mov    $0x4,%eax
0854a233 +0x079:  jmp    0854a90b <+0x751>
0854a238 +0x07e:  lea    -0x116(%ebp),%eax
0854a23e +0x084:  mov    %eax,(%esp)
0854a241 +0x087:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0854a246 +0x08c:  mov    0x10(%ebp),%eax
0854a249 +0x08f:  movzwl 0x13(%eax),%eax
0854a24d +0x093:  movzwl %ax,%edx
0854a250 +0x096:  lea    -0x158(%ebp),%eax
0854a256 +0x09c:  mov    %edx,0xc(%esp)
0854a25a +0x0a0:  movl   $0x1,0x8(%esp)
0854a262 +0x0a8:  mov    -0x30(%ebp),%edx
0854a265 +0x0ab:  mov    %edx,0x4(%esp)
0854a269 +0x0af:  mov    %eax,(%esp)
0854a26c +0x0b2:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0854a271 +0x0b7:  sub    $0x4,%esp
0854a274 +0x0ba:  mov    -0x158(%ebp),%eax
0854a27a +0x0c0:  mov    %eax,-0x116(%ebp)
0854a280 +0x0c6:  mov    -0x154(%ebp),%eax
0854a286 +0x0cc:  mov    %eax,-0x112(%ebp)
0854a28c +0x0d2:  mov    -0x150(%ebp),%eax
0854a292 +0x0d8:  mov    %eax,-0x10e(%ebp)
0854a298 +0x0de:  mov    -0x14c(%ebp),%eax
0854a29e +0x0e4:  mov    %eax,-0x10a(%ebp)
0854a2a4 +0x0ea:  mov    -0x148(%ebp),%eax
0854a2aa +0x0f0:  mov    %eax,-0x106(%ebp)
0854a2b0 +0x0f6:  mov    -0x144(%ebp),%eax
0854a2b6 +0x0fc:  mov    %eax,-0x102(%ebp)
0854a2bc +0x102:  mov    -0x140(%ebp),%eax
0854a2c2 +0x108:  mov    %eax,-0xfe(%ebp)
0854a2c8 +0x10e:  mov    -0x13c(%ebp),%eax
0854a2ce +0x114:  mov    %eax,-0xfa(%ebp)
0854a2d4 +0x11a:  mov    -0x138(%ebp),%eax
0854a2da +0x120:  mov    %eax,-0xf6(%ebp)
0854a2e0 +0x126:  mov    -0x134(%ebp),%eax
0854a2e6 +0x12c:  mov    %eax,-0xf2(%ebp)
0854a2ec +0x132:  mov    -0x130(%ebp),%eax
0854a2f2 +0x138:  mov    %eax,-0xee(%ebp)
0854a2f8 +0x13e:  mov    -0x12c(%ebp),%eax
0854a2fe +0x144:  mov    %eax,-0xea(%ebp)
0854a304 +0x14a:  mov    -0x128(%ebp),%eax
0854a30a +0x150:  mov    %eax,-0xe6(%ebp)
0854a310 +0x156:  mov    -0x124(%ebp),%eax
0854a316 +0x15c:  mov    %eax,-0xe2(%ebp)
0854a31c +0x162:  mov    -0x120(%ebp),%eax
0854a322 +0x168:  mov    %eax,-0xde(%ebp)
0854a328 +0x16e:  movzbl -0x11c(%ebp),%eax
0854a32f +0x175:  mov    %al,-0xda(%ebp)
0854a335 +0x17b:  lea    -0x116(%ebp),%eax
0854a33b +0x181:  mov    %eax,(%esp)
0854a33e +0x184:  call   0811ed66 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x61>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x61
0854a343 +0x189:  test   %al,%al
0854a345 +0x18b:  je     0854a351 <+0x197>
0854a347 +0x18d:  mov    $0x16,%eax
0854a34c +0x192:  jmp    0854a90b <+0x751>
0854a351 +0x197:  movl   $0x0,-0x94(%ebp)
0854a35b +0x1a1:  movl   $0x0,-0x98(%ebp)
0854a365 +0x1ab:  lea    -0x98(%ebp),%eax
0854a36b +0x1b1:  mov    %eax,0xc(%esp)
0854a36f +0x1b5:  lea    -0x94(%ebp),%eax
0854a375 +0x1bb:  mov    %eax,0x8(%esp)
0854a379 +0x1bf:  movl   $0x0,0x4(%esp)
0854a381 +0x1c7:  mov    -0x30(%ebp),%eax
0854a384 +0x1ca:  mov    %eax,(%esp)
0854a387 +0x1cd:  call   0850185e <_ZNK10CInventory14getStartEndPosEN10Inven_Item9ITEM_TYPEERiS2_>  ; CInventory::getStartEndPos(Inven_Item::ITEM_TYPE, int&, int&) const
0854a38c +0x1d2:  mov    0x10(%ebp),%eax
0854a38f +0x1d5:  movzwl 0xd(%eax),%eax
0854a393 +0x1d9:  movzwl %ax,%edx
0854a396 +0x1dc:  mov    -0x94(%ebp),%eax
0854a39c +0x1e2:  cmp    %eax,%edx
0854a39e +0x1e4:  jl     0854a3be <+0x204>
0854a3a0 +0x1e6:  mov    0x10(%ebp),%eax
0854a3a3 +0x1e9:  movzwl 0xd(%eax),%eax
0854a3a7 +0x1ed:  movzwl %ax,%edx
0854a3aa +0x1f0:  mov    -0x98(%ebp),%eax
0854a3b0 +0x1f6:  cmp    %eax,%edx
0854a3b2 +0x1f8:  jg     0854a3be <+0x204>
0854a3b4 +0x1fa:  mov    $0x13,%eax
0854a3b9 +0x1ff:  jmp    0854a90b <+0x751>
0854a3be +0x204:  mov    -0xd7(%ebp),%eax
0854a3c4 +0x20a:  mov    %eax,%ebx
0854a3c6 +0x20c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0854a3cb +0x211:  mov    %ebx,0x4(%esp)
0854a3cf +0x215:  mov    %eax,(%esp)
0854a3d2 +0x218:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0854a3d7 +0x21d:  mov    %eax,-0x2c(%ebp)
0854a3da +0x220:  cmpl   $0x0,-0x2c(%ebp)
0854a3de +0x224:  jne    0854a3ea <+0x230>
0854a3e0 +0x226:  mov    $0x4,%eax
0854a3e5 +0x22b:  jmp    0854a90b <+0x751>
0854a3ea +0x230:  mov    -0x114(%ebp),%eax
0854a3f0 +0x236:  mov    %eax,%ebx
0854a3f2 +0x238:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0854a3f7 +0x23d:  mov    %ebx,0x4(%esp)
0854a3fb +0x241:  mov    %eax,(%esp)
0854a3fe +0x244:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0854a403 +0x249:  mov    %eax,-0x28(%ebp)
0854a406 +0x24c:  cmpl   $0x0,-0x28(%ebp)
0854a40a +0x250:  jne    0854a416 <+0x25c>
0854a40c +0x252:  mov    $0x4,%eax
0854a411 +0x257:  jmp    0854a90b <+0x751>
0854a416 +0x25c:  movl   $0x0,-0x24(%ebp)
0854a41d +0x263:  mov    0x10(%ebp),%eax
0854a420 +0x266:  movzbl 0x19(%eax),%eax
0854a424 +0x26a:  movzbl %al,%eax
0854a427 +0x26d:  mov    %eax,0x14(%esp)
0854a42b +0x271:  lea    -0x116(%ebp),%eax
0854a431 +0x277:  mov    %eax,0x10(%esp)
0854a435 +0x27b:  mov    -0x2c(%ebp),%eax
0854a438 +0x27e:  mov    %eax,0xc(%esp)
0854a43c +0x282:  lea    -0xd9(%ebp),%eax
0854a442 +0x288:  mov    %eax,0x8(%esp)
0854a446 +0x28c:  mov    0xc(%ebp),%eax
0854a449 +0x28f:  mov    %eax,0x4(%esp)
0854a44d +0x293:  mov    0x8(%ebp),%eax
0854a450 +0x296:  mov    %eax,(%esp)
0854a453 +0x299:  call   085497ea <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_h>  ; WongWork::CItemUpgrade::_CheckCondition(CUser const*, Inven_Item const&, CItem const*, Inven_Item const&, unsigned char)
0854a458 +0x29e:  mov    %eax,-0x24(%ebp)
0854a45b +0x2a1:  cmpl   $0x0,-0x24(%ebp)
0854a45f +0x2a5:  setne  %al
0854a462 +0x2a8:  test   %al,%al
0854a464 +0x2aa:  je     0854a4b0 <+0x2f6>
0854a466 +0x2ac:  mov    -0x24(%ebp),%ebx
0854a469 +0x2af:  mov    0xc(%ebp),%eax
0854a46c +0x2b2:  mov    %eax,(%esp)
0854a46f +0x2b5:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0854a474 +0x2ba:  mov    %ebx,0x18(%esp)
0854a478 +0x2be:  mov    %eax,0x14(%esp)
0854a47c +0x2c2:  movl   $"3RD_CHRONICLE_LOG : ENCHANT SYSTEM _CheckCondition() ERROR!! CHARAC NO(%u) ERROR(%u)",0x10(%esp)
0854a484 +0x2ca:  movl   $0x756,0xc(%esp)
0854a48c +0x2d2:  movl   $&_ZZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP11MSG_ENCHANTP11PacketGuardE19__PRETTY_FUNCTION__,0x8(%esp)
0854a494 +0x2da:  movl   $"ItemUpgrade.cpp",0x4(%esp)
0854a49c +0x2e2:  movl   $0x1,(%esp)
0854a4a3 +0x2e9:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0854a4a8 +0x2ee:  mov    -0x24(%ebp),%eax
0854a4ab +0x2f1:  jmp    0854a90b <+0x751>
0854a4b0 +0x2f6:  movb   $0x0,-0x1e(%ebp)
0854a4b4 +0x2fa:  mov    -0x28(%ebp),%eax
0854a4b7 +0x2fd:  add    $0x30d,%eax
0854a4bc +0x302:  mov    %eax,0x8(%esp)
0854a4c0 +0x306:  lea    -0xd9(%ebp),%eax
0854a4c6 +0x30c:  mov    %eax,0x4(%esp)
0854a4ca +0x310:  mov    0x8(%ebp),%eax
0854a4cd +0x313:  mov    %eax,(%esp)
0854a4d0 +0x316:  call   0854977a <_ZN8WongWork12CItemUpgrade11isDoEnchantERK10Inven_ItemPc>  ; WongWork::CItemUpgrade::isDoEnchant(Inven_Item const&, char*)
0854a4d5 +0x31b:  mov    %al,-0x1e(%ebp)
0854a4d8 +0x31e:  mov    0x10(%ebp),%eax
0854a4db +0x321:  movzwl 0x13(%eax),%eax
0854a4df +0x325:  movzwl %ax,%ebx
0854a4e2 +0x328:  mov    0xc(%ebp),%eax
0854a4e5 +0x32b:  mov    %eax,(%esp)
0854a4e8 +0x32e:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0854a4ed +0x333:  movl   $0x1,0x14(%esp)
0854a4f5 +0x33b:  movl   $0xc,0x10(%esp)
0854a4fd +0x343:  movl   $0x1,0xc(%esp)
0854a505 +0x34b:  mov    %ebx,0x8(%esp)
0854a509 +0x34f:  movl   $0x1,0x4(%esp)
0854a511 +0x357:  mov    %eax,(%esp)
0854a514 +0x35a:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
0854a519 +0x35f:  xor    $0x1,%eax
0854a51c +0x362:  test   %al,%al
0854a51e +0x364:  je     0854a52a <+0x370>
0854a520 +0x366:  mov    $0x11,%eax
0854a525 +0x36b:  jmp    0854a90b <+0x751>
0854a52a +0x370:  mov    0x14(%ebp),%eax
0854a52d +0x373:  movl   $0x1,0x4(%esp)
0854a535 +0x37b:  mov    %eax,(%esp)
0854a538 +0x37e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0854a53d +0x383:  mov    0x10(%ebp),%eax
0854a540 +0x386:  movzwl 0x13(%eax),%eax
0854a544 +0x38a:  movzwl %ax,%edx
0854a547 +0x38d:  mov    0x14(%ebp),%eax
0854a54a +0x390:  mov    %edx,0x4(%esp)
0854a54e +0x394:  mov    %eax,(%esp)
0854a551 +0x397:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0854a556 +0x39c:  mov    0x10(%ebp),%eax
0854a559 +0x39f:  movzwl 0x13(%eax),%eax
0854a55d +0x3a3:  movzwl %ax,%ebx
0854a560 +0x3a6:  mov    0xc(%ebp),%eax
0854a563 +0x3a9:  mov    %eax,(%esp)
0854a566 +0x3ac:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0854a56b +0x3b1:  lea    -0x8d(%ebp),%edx
0854a571 +0x3b7:  mov    %ebx,0xc(%esp)
0854a575 +0x3bb:  movl   $0x1,0x8(%esp)
0854a57d +0x3c3:  mov    %eax,0x4(%esp)
0854a581 +0x3c7:  mov    %edx,(%esp)
0854a584 +0x3ca:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0854a589 +0x3cf:  sub    $0x4,%esp
0854a58c +0x3d2:  lea    -0x8d(%ebp),%eax
0854a592 +0x3d8:  mov    %eax,(%esp)
0854a595 +0x3db:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0854a59a +0x3e0:  mov    0x14(%ebp),%edx
0854a59d +0x3e3:  mov    %eax,0x4(%esp)
0854a5a1 +0x3e7:  mov    %edx,(%esp)
0854a5a4 +0x3ea:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0854a5a9 +0x3ef:  cmpb   $0x0,-0x1e(%ebp)
0854a5ad +0x3f3:  je     0854a5c4 <+0x40a>
0854a5af +0x3f5:  mov    0x14(%ebp),%eax
0854a5b2 +0x3f8:  movl   $0x1,0x4(%esp)
0854a5ba +0x400:  mov    %eax,(%esp)
0854a5bd +0x403:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0854a5c2 +0x408:  jmp    0854a5d7 <+0x41d>
0854a5c4 +0x40a:  mov    0x14(%ebp),%eax
0854a5c7 +0x40d:  movl   $0x0,0x4(%esp)
0854a5cf +0x415:  mov    %eax,(%esp)
0854a5d2 +0x418:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0854a5d7 +0x41d:  movzbl -0x1e(%ebp),%eax
0854a5db +0x421:  xor    $0x1,%eax
0854a5de +0x424:  test   %al,%al
0854a5e0 +0x426:  je     0854a6fc <+0x542>
0854a5e6 +0x42c:  movl   $0x0,-0x9c(%ebp)
0854a5f0 +0x436:  mov    -0xd2(%ebp),%eax
0854a5f6 +0x43c:  movswl %ax,%ebx
0854a5f9 +0x43f:  call   08151add <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1412>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1412
0854a5fe +0x444:  lea    -0x9c(%ebp),%edx
0854a604 +0x44a:  mov    %edx,0x14(%esp)
0854a608 +0x44e:  movl   $0x0,0x10(%esp)
0854a610 +0x456:  mov    %ebx,0xc(%esp)
0854a614 +0x45a:  mov    -0x2c(%ebp),%edx
0854a617 +0x45d:  mov    %edx,0x8(%esp)
0854a61b +0x461:  lea    -0xd9(%ebp),%edx
0854a621 +0x467:  mov    %edx,0x4(%esp)
0854a625 +0x46b:  mov    %eax,(%esp)
0854a628 +0x46e:  call   08618ea0 <_ZN5Store16GetSellItemPriceER10Inven_ItemPK5CItemsbRi>  ; Store::GetSellItemPrice(Inven_Item&, CItem const*, short, bool, int&)
0854a62d +0x473:  mov    -0x9c(%ebp),%eax
0854a633 +0x479:  mov    %eax,%ebx
0854a635 +0x47b:  call   0860d5ef <_Z25GetInstanceValueStatisticv>  ; GetInstanceValueStatistic()
0854a63a +0x480:  mov    %ebx,0xc(%esp)
0854a63e +0x484:  mov    0xc(%ebp),%edx
0854a641 +0x487:  mov    %edx,0x8(%esp)
0854a645 +0x48b:  movl   $0xf,0x4(%esp)
0854a64d +0x493:  mov    %eax,(%esp)
0854a650 +0x496:  call   0860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>  ; CValueStatistic::AddValueStatistic(VALUE_STATISTIC_FIELD, CUser*, unsigned int)
0854a655 +0x49b:  movl   $0x0,-0x1c(%ebp)
0854a65c +0x4a2:  mov    0x10(%ebp),%eax
0854a65f +0x4a5:  movzwl 0xd(%eax),%eax
0854a663 +0x4a9:  movzwl %ax,%eax
0854a666 +0x4ac:  mov    0x14(%ebp),%edx
0854a669 +0x4af:  mov    %edx,0x14(%esp)
0854a66d +0x4b3:  mov    %eax,0x10(%esp)
0854a671 +0x4b7:  mov    -0x2c(%ebp),%eax
0854a674 +0x4ba:  mov    %eax,0xc(%esp)
0854a678 +0x4be:  lea    -0xd9(%ebp),%eax
0854a67e +0x4c4:  mov    %eax,0x8(%esp)
0854a682 +0x4c8:  mov    0xc(%ebp),%eax
0854a685 +0x4cb:  mov    %eax,0x4(%esp)
0854a689 +0x4cf:  mov    0x8(%ebp),%eax
0854a68c +0x4d2:  mov    %eax,(%esp)
0854a68f +0x4d5:  call   08549ac8 <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtP11PacketGuard>  ; WongWork::CItemUpgrade::_ProcPenalty(CUser*, Inven_Item*, CItem const*, unsigned short, PacketGuard*)
0854a694 +0x4da:  mov    %eax,-0x1c(%ebp)
0854a697 +0x4dd:  cmpl   $0x0,-0x1c(%ebp)
0854a69b +0x4e1:  setne  %al
0854a69e +0x4e4:  test   %al,%al
0854a6a0 +0x4e6:  je     0854a79b <+0x5e1>
0854a6a6 +0x4ec:  mov    0xc(%ebp),%eax
0854a6a9 +0x4ef:  mov    %eax,(%esp)
0854a6ac +0x4f2:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0854a6b1 +0x4f7:  mov    %eax,%ebx
0854a6b3 +0x4f9:  movl   $0x5,0xc(%esp)
0854a6bb +0x501:  movl   $0x77e,0x8(%esp)
0854a6c3 +0x509:  movl   $&_ZZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP11MSG_ENCHANTP11PacketGuardE19__PRETTY_FUNCTION__,0x4(%esp)
0854a6cb +0x511:  lea    -0x50(%ebp),%eax
0854a6ce +0x514:  mov    %eax,(%esp)
0854a6d1 +0x517:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0854a6d6 +0x51c:  mov    %ebx,0xc(%esp)
0854a6da +0x520:  mov    -0x1c(%ebp),%eax
0854a6dd +0x523:  mov    %eax,0x8(%esp)
0854a6e1 +0x527:  movl   $"3RD_CHRONICLE_LOG : ENCHANT SYSTEM _ProcPenalty() ERROR!! ERROR CODE(%d)!! CHARAC NO(%u)",0x4(%esp)
0854a6e9 +0x52f:  lea    -0x50(%ebp),%eax
0854a6ec +0x532:  mov    %eax,(%esp)
0854a6ef +0x535:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0854a6f4 +0x53a:  mov    -0x1c(%ebp),%eax
0854a6f7 +0x53d:  jmp    0854a90b <+0x751>
0854a6fc +0x542:  mov    0x10(%ebp),%eax
0854a6ff +0x545:  movzbl 0x19(%eax),%eax
0854a703 +0x549:  movzbl %al,%ebx
0854a706 +0x54c:  mov    -0x2c(%ebp),%eax
0854a709 +0x54f:  mov    (%eax),%eax
0854a70b +0x551:  add    $0xc,%eax
0854a70e +0x554:  mov    (%eax),%edx
0854a710 +0x556:  mov    -0x2c(%ebp),%eax
0854a713 +0x559:  mov    %eax,(%esp)
0854a716 +0x55c:  call   *%edx
0854a718 +0x55e:  mov    -0x28(%ebp),%edx
0854a71b +0x561:  mov    %edx,0x14(%esp)
0854a71f +0x565:  lea    -0xd9(%ebp),%edx
0854a725 +0x56b:  mov    %edx,0x10(%esp)
0854a729 +0x56f:  mov    %ebx,0xc(%esp)
0854a72d +0x573:  mov    %eax,0x8(%esp)
0854a731 +0x577:  mov    0xc(%ebp),%eax
0854a734 +0x57a:  mov    %eax,0x4(%esp)
0854a738 +0x57e:  mov    0x8(%ebp),%eax
0854a73b +0x581:  mov    %eax,(%esp)
0854a73e +0x584:  call   0854a006 <_ZN8WongWork12CItemUpgrade24ProcUpgrade_3rdChronicleEP5CUser18ENUM_EQUIPMENTTYPEhR10Inven_ItemPK5CItem>  ; WongWork::CItemUpgrade::ProcUpgrade_3rdChronicle(CUser*, ENUM_EQUIPMENTTYPE, unsigned char, Inven_Item&, CItem const*)
0854a743 +0x589:  xor    $0x1,%eax
0854a746 +0x58c:  test   %al,%al
0854a748 +0x58e:  je     0854a79b <+0x5e1>
0854a74a +0x590:  mov    0xc(%ebp),%eax
0854a74d +0x593:  mov    %eax,(%esp)
0854a750 +0x596:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0854a755 +0x59b:  mov    %eax,%ebx
0854a757 +0x59d:  movl   $0x5,0xc(%esp)
0854a75f +0x5a5:  movl   $0x786,0x8(%esp)
0854a767 +0x5ad:  movl   $&_ZZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP11MSG_ENCHANTP11PacketGuardE19__PRETTY_FUNCTION__,0x4(%esp)
0854a76f +0x5b5:  lea    -0x40(%ebp),%eax
0854a772 +0x5b8:  mov    %eax,(%esp)
0854a775 +0x5bb:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0854a77a +0x5c0:  mov    %ebx,0x8(%esp)
0854a77e +0x5c4:  movl   $"3RD_CHRONICLE_LOG : ENCHANT SYSTEM ProcUpgrade_3rdChronicle() ERROR!! CHARAC NO(%u)",0x4(%esp)
0854a786 +0x5cc:  lea    -0x40(%ebp),%eax
0854a789 +0x5cf:  mov    %eax,(%esp)
0854a78c +0x5d2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0854a791 +0x5d7:  mov    $0x1,%eax
0854a796 +0x5dc:  jmp    0854a90b <+0x751>
0854a79b +0x5e1:  mov    -0xd7(%ebp),%eax
0854a7a1 +0x5e7:  test   %eax,%eax
0854a7a3 +0x5e9:  je     0854a86b <+0x6b1>
0854a7a9 +0x5ef:  mov    0x10(%ebp),%eax
0854a7ac +0x5f2:  movzwl 0xd(%eax),%eax
0854a7b0 +0x5f6:  movzwl %ax,%eax
0854a7b3 +0x5f9:  mov    -0xd9(%ebp),%edx
0854a7b9 +0x5ff:  mov    %edx,0xc(%esp)
0854a7bd +0x603:  mov    -0xd5(%ebp),%edx
0854a7c3 +0x609:  mov    %edx,0x10(%esp)
0854a7c7 +0x60d:  mov    -0xd1(%ebp),%edx
0854a7cd +0x613:  mov    %edx,0x14(%esp)
0854a7d1 +0x617:  mov    -0xcd(%ebp),%edx
0854a7d7 +0x61d:  mov    %edx,0x18(%esp)
0854a7db +0x621:  mov    -0xc9(%ebp),%edx
0854a7e1 +0x627:  mov    %edx,0x1c(%esp)
0854a7e5 +0x62b:  mov    -0xc5(%ebp),%edx
0854a7eb +0x631:  mov    %edx,0x20(%esp)
0854a7ef +0x635:  mov    -0xc1(%ebp),%edx
0854a7f5 +0x63b:  mov    %edx,0x24(%esp)
0854a7f9 +0x63f:  mov    -0xbd(%ebp),%edx
0854a7ff +0x645:  mov    %edx,0x28(%esp)
0854a803 +0x649:  mov    -0xb9(%ebp),%edx
0854a809 +0x64f:  mov    %edx,0x2c(%esp)
0854a80d +0x653:  mov    -0xb5(%ebp),%edx
0854a813 +0x659:  mov    %edx,0x30(%esp)
0854a817 +0x65d:  mov    -0xb1(%ebp),%edx
0854a81d +0x663:  mov    %edx,0x34(%esp)
0854a821 +0x667:  mov    -0xad(%ebp),%edx
0854a827 +0x66d:  mov    %edx,0x38(%esp)
0854a82b +0x671:  mov    -0xa9(%ebp),%edx
0854a831 +0x677:  mov    %edx,0x3c(%esp)
0854a835 +0x67b:  mov    -0xa5(%ebp),%edx
0854a83b +0x681:  mov    %edx,0x40(%esp)
0854a83f +0x685:  mov    -0xa1(%ebp),%edx
0854a845 +0x68b:  mov    %edx,0x44(%esp)
0854a849 +0x68f:  movzbl -0x9d(%ebp),%edx
0854a850 +0x696:  mov    %dl,0x48(%esp)
0854a854 +0x69a:  mov    %eax,0x8(%esp)
0854a858 +0x69e:  movl   $0x1,0x4(%esp)
0854a860 +0x6a6:  mov    -0x30(%ebp),%eax
0854a863 +0x6a9:  mov    %eax,(%esp)
0854a866 +0x6ac:  call   085000ae <_ZN10CInventory11update_itemE10INVEN_TYPEi10Inven_Item>  ; CInventory::update_item(INVEN_TYPE, int, Inven_Item)
0854a86b +0x6b1:  mov    0x10(%ebp),%eax
0854a86e +0x6b4:  movzwl 0xd(%eax),%eax
0854a872 +0x6b8:  movzwl %ax,%eax
0854a875 +0x6bb:  mov    %eax,0xc(%esp)
0854a879 +0x6bf:  movl   $0x0,0x8(%esp)
0854a881 +0x6c7:  movl   $0x1,0x4(%esp)
0854a889 +0x6cf:  mov    0xc(%ebp),%eax
0854a88c +0x6d2:  mov    %eax,(%esp)
0854a88f +0x6d5:  call   0867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItem(CUser::eSendTarget, ENUM_ITEMSPACE, int)
0854a894 +0x6da:  movb   $0x0,-0x1d(%ebp)
0854a898 +0x6de:  movzbl -0xba(%ebp),%eax
0854a89f +0x6e5:  and    $0x1,%eax
0854a8a2 +0x6e8:  test   %al,%al
0854a8a4 +0x6ea:  je     0854a8bc <+0x702>
0854a8a6 +0x6ec:  addb   $0x1,-0x1d(%ebp)
0854a8aa +0x6f0:  movzbl -0xb9(%ebp),%eax
0854a8b1 +0x6f7:  and    $0x1,%eax
0854a8b4 +0x6fa:  test   %al,%al
0854a8b6 +0x6fc:  je     0854a8bc <+0x702>
0854a8b8 +0x6fe:  addb   $0x1,-0x1d(%ebp)
0854a8bc +0x702:  movsbl -0x1d(%ebp),%edi
0854a8c0 +0x706:  mov    0x10(%ebp),%eax
0854a8c3 +0x709:  movzbl 0x19(%eax),%eax
0854a8c7 +0x70d:  movzbl %al,%esi
0854a8ca +0x710:  mov    -0x114(%ebp),%eax
0854a8d0 +0x716:  mov    %eax,%ebx
0854a8d2 +0x718:  mov    -0x2c(%ebp),%eax
0854a8d5 +0x71b:  mov    %eax,(%esp)
0854a8d8 +0x71e:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
0854a8dd +0x723:  movzbl -0x1e(%ebp),%edx
0854a8e1 +0x727:  mov    0xc(%ebp),%ecx
0854a8e4 +0x72a:  add    $0x79700,%ecx
0854a8ea +0x730:  mov    %edi,0x14(%esp)
0854a8ee +0x734:  mov    %esi,0x10(%esp)
0854a8f2 +0x738:  mov    %ebx,0xc(%esp)
0854a8f6 +0x73c:  mov    %eax,0x8(%esp)
0854a8fa +0x740:  mov    %edx,0x4(%esp)
0854a8fe +0x744:  mov    %ecx,(%esp)
0854a901 +0x747:  call   08684c28 <_ZN15cUserHistoryLog23Enchant3rdChronicleItemEbiiii>  ; cUserHistoryLog::Enchant3rdChronicleItem(bool, int, int, int, int)
0854a906 +0x74c:  mov    $0x0,%eax
0854a90b +0x751:  lea    -0xc(%ebp),%esp
0854a90e +0x754:  add    $0x0,%esp
0854a911 +0x757:  pop    %ebx
0854a912 +0x758:  pop    %esi
0854a913 +0x759:  pop    %edi
0854a914 +0x75a:  pop    %ebp
0854a915 +0x75b:  ret
```

## 反编译 C

```c
// WongWork::CItemUpgrade::ProcUpgrade @ 0x854a1ba

/* WongWork::CItemUpgrade::ProcUpgrade(CUser*, MSG_ENCHANT*, PacketGuard*) */

int __thiscall
WongWork::CItemUpgrade::ProcUpgrade
          (CItemUpgrade *this,CUser *param_1,MSG_ENCHANT *param_2,PacketGuard *param_3)

{
  MSG_ENCHANT MVar1;
  undefined2 uVar2;
  char cVar3;
  short sVar4;
  CDataManager *pCVar5;
  int iVar6;
  undefined4 uVar7;
  CInventory *pCVar8;
  Store *this_00;
  CValueStatistic *pCVar9;
  int iVar10;
  int iVar11;
  undefined1 local_15c [8];
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined1 local_120;
  undefined2 local_11a;
  undefined2 uStack_118;
  undefined2 local_116;
  undefined2 uStack_114;
  undefined4 local_112;
  undefined4 local_10e;
  undefined4 local_10a;
  undefined4 local_106;
  undefined4 local_102;
  undefined4 local_fe;
  undefined4 local_fa;
  undefined4 local_f6;
  undefined4 local_f2;
  undefined4 local_ee;
  undefined4 local_ea;
  undefined4 local_e6;
  undefined4 local_e2;
  undefined1 local_de;
  undefined2 local_dd;
  undefined2 uStack_db;
  undefined2 uStack_d9;
  undefined1 uStack_d7;
  undefined1 uStack_d6;
  undefined3 uStack_d5;
  undefined1 uStack_d2;
  undefined4 local_d1;
  undefined4 local_cd;
  undefined4 local_c9;
  undefined4 local_c5;
  undefined4 local_c1;
  undefined4 local_bd;
  undefined4 local_b9;
  undefined4 local_b5;
  undefined4 local_b1;
  undefined4 local_ad;
  undefined4 local_a9;
  undefined4 local_a5;
  undefined1 local_a1;
  int local_a0;
  int local_9c;
  int local_98;
  Inven_Item local_91 [61];
  cMyTrace local_54 [16];
  cMyTrace local_44 [16];
  CInventory *local_34;
  CItem *local_30;
  int local_2c;
  int local_28;
  bool local_22;
  char local_21;
  int local_20;
  
  local_34 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
  CInventory::GetInvenSlot((int)&local_dd,(int)local_34);
  cVar3 = Inven_Item::isEmpty((Inven_Item *)&local_dd);
  if (cVar3 == '\0') {
    if (CONCAT22(uStack_d9,uStack_db) == *(int *)(param_2 + 0xf)) {
      Inven_Item::Inven_Item((Inven_Item *)&local_11a);
      CInventory::GetInvenSlot((int)local_15c,(int)local_34);
      local_11a = (undefined2)local_15c._0_4_;
      uStack_118 = SUB42(local_15c._0_4_,2);
      local_116 = (undefined2)local_15c._4_4_;
      uStack_114 = SUB42(local_15c._4_4_,2);
      local_112 = local_154;
      local_10e = local_150;
      local_10a = local_14c;
      local_106 = local_148;
      local_102 = local_144;
      local_fe = local_140;
      local_fa = local_13c;
      local_f6 = local_138;
      local_f2 = local_134;
      local_ee = local_130;
      local_ea = local_12c;
      local_e6 = local_128;
      local_e2 = local_124;
      local_de = local_120;
      cVar3 = Inven_Item::isEmpty((Inven_Item *)&local_11a);
      if (cVar3 == '\0') {
        local_98 = 0;
        local_9c = 0;
        CInventory::getStartEndPos(local_34,0,&local_98,&local_9c);
        if (((int)(uint)*(ushort *)(param_2 + 0xd) < local_98) ||
           (local_9c < (int)(uint)*(ushort *)(param_2 + 0xd))) {
          iVar6 = CONCAT22(uStack_d9,uStack_db);
          pCVar5 = (CDataManager *)G_CDataManager();
          local_30 = (CItem *)CDataManager::find_item(pCVar5,iVar6);
          if (local_30 == (CItem *)0x0) {
            local_28 = 4;
          }
          else {
            iVar6 = CONCAT22(local_116,uStack_118);
            pCVar5 = (CDataManager *)G_CDataManager();
            local_2c = CDataManager::find_item(pCVar5,iVar6);
            if (local_2c == 0) {
              local_28 = 4;
            }
            else {
              local_28 = 0;
              iVar6 = _CheckCondition(this,param_1,(Inven_Item *)&local_dd,local_30,
                                      (Inven_Item *)&local_11a,(uchar)param_2[0x19]);
              local_28 = iVar6;
              if (iVar6 == 0) {
                local_22 = false;
                local_22 = (bool)isDoEnchant(this,(Inven_Item *)&local_dd,(char *)(local_2c + 0x30d)
                                            );
                uVar2 = *(undefined2 *)(param_2 + 0x13);
                pCVar8 = (CInventory *)
                         CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                cVar3 = CInventory::delete_item(pCVar8,1,uVar2,1,0xc,1);
                if (cVar3 == '\x01') {
                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,1);
                  InterfacePacketBuf::put_short
                            ((InterfacePacketBuf *)param_3,(uint)*(ushort *)(param_2 + 0x13));
                  iVar6 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                  CInventory::GetInvenSlot((int)local_91,iVar6);
                  iVar6 = Inven_Item::get_add_info(local_91);
                  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_3,iVar6);
                  if (local_22 == false) {
                    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,0);
                  }
                  else {
                    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,1);
                  }
                  if (local_22 == true) {
                    MVar1 = param_2[0x19];
                    uVar7 = (**(code **)(*(int *)local_30 + 0xc))(local_30);
                    cVar3 = ProcUpgrade_3rdChronicle(this,param_1,uVar7,MVar1,&local_dd,local_2c);
                    if (cVar3 != '\x01') {
                      uVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                      cMyTrace::cMyTrace(local_44,
                                         "ENUM_ERROR WongWork::CItemUpgrade::ProcUpgrade(CUser*, MSG_ENCHANT*, PacketGuard*)"
                                         ,0x786,5);
                      cMyTrace::operator()
                                (local_44,
                                 "3RD_CHRONICLE_LOG : ENCHANT SYSTEM ProcUpgrade_3rdChronicle() ERROR!! CHARAC NO(%u)"
                                 ,uVar7);
                      return 1;
                    }
                  }
                  else {
                    local_a0 = 0;
                    sVar4 = (short)_uStack_d6;
                    this_00 = (Store *)G_Store();
                    Store::GetSellItemPrice
                              (this_00,(Inven_Item *)&local_dd,local_30,sVar4,false,&local_a0);
                    iVar6 = local_a0;
                    pCVar9 = (CValueStatistic *)GetInstanceValueStatistic();
                    CValueStatistic::AddValueStatistic(pCVar9,0xf,param_1,iVar6);
                    local_20 = 0;
                    local_20 = _ProcPenalty(this,param_1,(Inven_Item *)&local_dd,local_30,
                                            *(ushort *)(param_2 + 0xd),param_3);
                    if (local_20 != 0) {
                      uVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                      cMyTrace::cMyTrace(local_54,
                                         "ENUM_ERROR WongWork::CItemUpgrade::ProcUpgrade(CUser*, MSG_ENCHANT*, PacketGuard*)"
                                         ,0x77e,5);
                      cMyTrace::operator()
                                (local_54,
                                 "3RD_CHRONICLE_LOG : ENCHANT SYSTEM _ProcPenalty() ERROR!! ERROR CODE(%d)!! CHARAC NO(%u)"
                                 ,local_20,uVar7);
                      return local_20;
                    }
                  }
                  if (CONCAT22(uStack_d9,uStack_db) != 0) {
                    CInventory::update_item
                              (local_34,1,*(undefined2 *)(param_2 + 0xd),
                               CONCAT22(uStack_db,local_dd),
                               CONCAT13(uStack_d6,CONCAT12(uStack_d7,uStack_d9)),
                               CONCAT13(uStack_d2,uStack_d5),local_d1,local_cd,local_c9,local_c5,
                               local_c1,local_bd,local_b9,local_b5,local_b1,local_ad,local_a9,
                               local_a5,local_a1);
                  }
                  CUser::SendUpdateItem(param_1,1,0,*(undefined2 *)(param_2 + 0xd));
                  local_21 = '\0';
                  if (((local_c1._3_1_ & 1) != 0) && (local_21 = '\x01', ((byte)local_bd & 1) != 0))
                  {
                    local_21 = '\x02';
                  }
                  iVar11 = (int)local_21;
                  MVar1 = param_2[0x19];
                  iVar6 = CONCAT22(local_116,uStack_118);
                  iVar10 = CItem::get_index(local_30);
                  cUserHistoryLog::Enchant3rdChronicleItem
                            ((cUserHistoryLog *)(param_1 + 0x79700),local_22,iVar10,iVar6,
                             (uint)(byte)MVar1,iVar11);
                  local_28 = 0;
                }
                else {
                  local_28 = 0x11;
                }
              }
              else {
                uVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                LogManager::logFormat
                          (1,"ItemUpgrade.cpp",
                           "ENUM_ERROR WongWork::CItemUpgrade::ProcUpgrade(CUser*, MSG_ENCHANT*, PacketGuard*)"
                           ,0x756,
                           "3RD_CHRONICLE_LOG : ENCHANT SYSTEM _CheckCondition() ERROR!! CHARAC NO(%u) ERROR(%u)"
                           ,uVar7,iVar6);
              }
            }
          }
        }
        else {
          local_28 = 0x13;
        }
      }
      else {
        local_28 = 0x16;
      }
    }
    else {
      local_28 = 4;
    }
  }
  else {
    local_28 = 4;
  }
  return local_28;
}
```
