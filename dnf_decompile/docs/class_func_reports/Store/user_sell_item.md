# user_sell_item

`_ZN5Store14user_sell_itemEP5CUsercss`

`Store::user_sell_item(CUser*, char, short, short)`

| 类 | 地址 |
|---|---|
| `Store` | `0x086193f8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086193f8  _ZN5Store14user_sell_itemEP5CUsercss
#           Store::user_sell_item(CUser*, char, short, short)
# range [0x086193f8, 0x08619ceb]
086193f8 +0x000:  push   %ebp
086193f9 +0x001:  mov    %esp,%ebp
086193fb +0x003:  push   %edi
086193fc +0x004:  push   %esi
086193fd +0x005:  push   %ebx
086193fe +0x006:  sub    $0x13c,%esp
08619404 +0x00c:  mov    0x10(%ebp),%ecx
08619407 +0x00f:  mov    0x14(%ebp),%edx
0861940a +0x012:  mov    0x18(%ebp),%eax
0861940d +0x015:  mov    %cl,-0xcc(%ebp)
08619413 +0x01b:  mov    %dx,-0xd0(%ebp)
0861941a +0x022:  mov    %ax,-0xd4(%ebp)
08619421 +0x029:  mov    0xc(%ebp),%eax
08619424 +0x02c:  mov    %eax,(%esp)
08619427 +0x02f:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
0861942c +0x034:  test   %al,%al
0861942e +0x036:  je     0861943a <+0x42>
08619430 +0x038:  mov    $0x13,%ebx
08619435 +0x03d:  jmp    08619cdf <+0x8e7>
0861943a +0x042:  movl   $0x0,-0x74(%ebp)
08619441 +0x049:  movl   $0x0,-0x20(%ebp)
08619448 +0x050:  movl   $0x0,-0x78(%ebp)
0861944f +0x057:  mov    0xc(%ebp),%eax
08619452 +0x05a:  mov    %eax,(%esp)
08619455 +0x05d:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0861945a +0x062:  cmp    $0x5,%eax
0861945d +0x065:  sete   %al
08619460 +0x068:  movzbl %al,%ebx
08619463 +0x06b:  movswl -0xd4(%ebp),%ecx
0861946a +0x072:  movswl -0xd0(%ebp),%edx
08619471 +0x079:  movsbl -0xcc(%ebp),%eax
08619478 +0x080:  lea    -0x78(%ebp),%esi
0861947b +0x083:  mov    %esi,0x1c(%esp)
0861947f +0x087:  lea    -0x74(%ebp),%esi
08619482 +0x08a:  mov    %esi,0x18(%esp)
08619486 +0x08e:  mov    %ebx,0x14(%esp)
0861948a +0x092:  mov    %ecx,0x10(%esp)
0861948e +0x096:  mov    %edx,0xc(%esp)
08619492 +0x09a:  mov    %eax,0x8(%esp)
08619496 +0x09e:  mov    0xc(%ebp),%eax
08619499 +0x0a1:  mov    %eax,0x4(%esp)
0861949d +0x0a5:  mov    0x8(%ebp),%eax
086194a0 +0x0a8:  mov    %eax,(%esp)
086194a3 +0x0ab:  call   08619008 <_ZN5Store16GetSellItemPriceEP5CUsercssbRiS2_>  ; Store::GetSellItemPrice(CUser*, char, short, short, bool, int&, int&)
086194a8 +0x0b0:  mov    %eax,-0x20(%ebp)
086194ab +0x0b3:  cmpl   $0x0,-0x20(%ebp)
086194af +0x0b7:  je     086194b9 <+0xc1>
086194b1 +0x0b9:  mov    -0x20(%ebp),%ebx
086194b4 +0x0bc:  jmp    08619cdf <+0x8e7>
086194b9 +0x0c1:  mov    -0x78(%ebp),%eax
086194bc +0x0c4:  mov    %eax,0x4(%esp)
086194c0 +0x0c8:  mov    0xc(%ebp),%eax
086194c3 +0x0cb:  mov    %eax,(%esp)
086194c6 +0x0ce:  call   0866af1c <_ZN5CUser10CheckMoneyEi>  ; CUser::CheckMoney(int)
086194cb +0x0d3:  xor    $0x1,%eax
086194ce +0x0d6:  test   %al,%al
086194d0 +0x0d8:  je     086194dc <+0xe4>
086194d2 +0x0da:  mov    $0x16,%ebx
086194d7 +0x0df:  jmp    08619cdf <+0x8e7>
086194dc +0x0e4:  lea    -0xc1(%ebp),%eax
086194e2 +0x0ea:  mov    %eax,(%esp)
086194e5 +0x0ed:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
086194ea +0x0f2:  movsbl -0xcc(%ebp),%eax
086194f1 +0x0f9:  cmp    $0x2,%eax
086194f4 +0x0fc:  je     0861961c <+0x224>
086194fa +0x102:  cmp    $0x2,%eax
086194fd +0x105:  jg     08619508 <+0x110>
086194ff +0x107:  test   %eax,%eax
08619501 +0x109:  je     08619516 <+0x11e>
08619503 +0x10b:  jmp    08619708 <+0x310>
08619508 +0x110:  cmp    $0x3,%eax
0861950b +0x113:  je     08619516 <+0x11e>
0861950d +0x115:  cmp    $0x7,%eax
08619510 +0x118:  jne    08619708 <+0x310>
08619516 +0x11e:  movswl -0xd0(%ebp),%esi
0861951d +0x125:  movsbl -0xcc(%ebp),%eax
08619524 +0x12c:  mov    %eax,(%esp)
08619527 +0x12f:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
0861952c +0x134:  mov    %eax,%ebx
0861952e +0x136:  mov    0xc(%ebp),%eax
08619531 +0x139:  mov    %eax,(%esp)
08619534 +0x13c:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08619539 +0x141:  lea    -0x118(%ebp),%edx
0861953f +0x147:  mov    %esi,0xc(%esp)
08619543 +0x14b:  mov    %ebx,0x8(%esp)
08619547 +0x14f:  mov    %eax,0x4(%esp)
0861954b +0x153:  mov    %edx,(%esp)
0861954e +0x156:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08619553 +0x15b:  sub    $0x4,%esp
08619556 +0x15e:  mov    -0x118(%ebp),%eax
0861955c +0x164:  mov    %eax,-0xc1(%ebp)
08619562 +0x16a:  mov    -0x114(%ebp),%eax
08619568 +0x170:  mov    %eax,-0xbd(%ebp)
0861956e +0x176:  mov    -0x110(%ebp),%eax
08619574 +0x17c:  mov    %eax,-0xb9(%ebp)
0861957a +0x182:  mov    -0x10c(%ebp),%eax
08619580 +0x188:  mov    %eax,-0xb5(%ebp)
08619586 +0x18e:  mov    -0x108(%ebp),%eax
0861958c +0x194:  mov    %eax,-0xb1(%ebp)
08619592 +0x19a:  mov    -0x104(%ebp),%eax
08619598 +0x1a0:  mov    %eax,-0xad(%ebp)
0861959e +0x1a6:  mov    -0x100(%ebp),%eax
086195a4 +0x1ac:  mov    %eax,-0xa9(%ebp)
086195aa +0x1b2:  mov    -0xfc(%ebp),%eax
086195b0 +0x1b8:  mov    %eax,-0xa5(%ebp)
086195b6 +0x1be:  mov    -0xf8(%ebp),%eax
086195bc +0x1c4:  mov    %eax,-0xa1(%ebp)
086195c2 +0x1ca:  mov    -0xf4(%ebp),%eax
086195c8 +0x1d0:  mov    %eax,-0x9d(%ebp)
086195ce +0x1d6:  mov    -0xf0(%ebp),%eax
086195d4 +0x1dc:  mov    %eax,-0x99(%ebp)
086195da +0x1e2:  mov    -0xec(%ebp),%eax
086195e0 +0x1e8:  mov    %eax,-0x95(%ebp)
086195e6 +0x1ee:  mov    -0xe8(%ebp),%eax
086195ec +0x1f4:  mov    %eax,-0x91(%ebp)
086195f2 +0x1fa:  mov    -0xe4(%ebp),%eax
086195f8 +0x200:  mov    %eax,-0x8d(%ebp)
086195fe +0x206:  mov    -0xe0(%ebp),%eax
08619604 +0x20c:  mov    %eax,-0x89(%ebp)
0861960a +0x212:  movzbl -0xdc(%ebp),%eax
08619611 +0x219:  mov    %al,-0x85(%ebp)
08619617 +0x21f:  jmp    08619708 <+0x310>
0861961c +0x224:  movswl -0xd0(%ebp),%ebx
08619623 +0x22b:  mov    0xc(%ebp),%eax
08619626 +0x22e:  mov    %eax,(%esp)
08619629 +0x231:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
0861962e +0x236:  lea    -0x118(%ebp),%edx
08619634 +0x23c:  mov    %ebx,0x8(%esp)
08619638 +0x240:  mov    %eax,0x4(%esp)
0861963c +0x244:  mov    %edx,(%esp)
0861963f +0x247:  call   0850b2b4 <_ZNK6CCargo14get_cargo_slotEi>  ; CCargo::get_cargo_slot(int) const
08619644 +0x24c:  sub    $0x4,%esp
08619647 +0x24f:  mov    -0x118(%ebp),%eax
0861964d +0x255:  mov    %eax,-0xc1(%ebp)
08619653 +0x25b:  mov    -0x114(%ebp),%eax
08619659 +0x261:  mov    %eax,-0xbd(%ebp)
0861965f +0x267:  mov    -0x110(%ebp),%eax
08619665 +0x26d:  mov    %eax,-0xb9(%ebp)
0861966b +0x273:  mov    -0x10c(%ebp),%eax
08619671 +0x279:  mov    %eax,-0xb5(%ebp)
08619677 +0x27f:  mov    -0x108(%ebp),%eax
0861967d +0x285:  mov    %eax,-0xb1(%ebp)
08619683 +0x28b:  mov    -0x104(%ebp),%eax
08619689 +0x291:  mov    %eax,-0xad(%ebp)
0861968f +0x297:  mov    -0x100(%ebp),%eax
08619695 +0x29d:  mov    %eax,-0xa9(%ebp)
0861969b +0x2a3:  mov    -0xfc(%ebp),%eax
086196a1 +0x2a9:  mov    %eax,-0xa5(%ebp)
086196a7 +0x2af:  mov    -0xf8(%ebp),%eax
086196ad +0x2b5:  mov    %eax,-0xa1(%ebp)
086196b3 +0x2bb:  mov    -0xf4(%ebp),%eax
086196b9 +0x2c1:  mov    %eax,-0x9d(%ebp)
086196bf +0x2c7:  mov    -0xf0(%ebp),%eax
086196c5 +0x2cd:  mov    %eax,-0x99(%ebp)
086196cb +0x2d3:  mov    -0xec(%ebp),%eax
086196d1 +0x2d9:  mov    %eax,-0x95(%ebp)
086196d7 +0x2df:  mov    -0xe8(%ebp),%eax
086196dd +0x2e5:  mov    %eax,-0x91(%ebp)
086196e3 +0x2eb:  mov    -0xe4(%ebp),%eax
086196e9 +0x2f1:  mov    %eax,-0x8d(%ebp)
086196ef +0x2f7:  mov    -0xe0(%ebp),%eax
086196f5 +0x2fd:  mov    %eax,-0x89(%ebp)
086196fb +0x303:  movzbl -0xdc(%ebp),%eax
08619702 +0x30a:  mov    %al,-0x85(%ebp)
08619708 +0x310:  movsbl -0xcc(%ebp),%eax
0861970f +0x317:  cmp    $0x2,%eax
08619712 +0x31a:  je     086197f0 <+0x3f8>
08619718 +0x320:  cmp    $0x2,%eax
0861971b +0x323:  jg     08619726 <+0x32e>
0861971d +0x325:  test   %eax,%eax
0861971f +0x327:  je     0861973d <+0x345>
08619721 +0x329:  jmp    08619a02 <+0x60a>
08619726 +0x32e:  cmp    $0x3,%eax
08619729 +0x331:  je     08619893 <+0x49b>
0861972f +0x337:  cmp    $0x7,%eax
08619732 +0x33a:  je     0861994f <+0x557>
08619738 +0x340:  jmp    08619a02 <+0x60a>
0861973d +0x345:  movswl -0xd4(%ebp),%esi
08619744 +0x34c:  movswl -0xd0(%ebp),%ebx
0861974b +0x353:  mov    0xc(%ebp),%eax
0861974e +0x356:  mov    %eax,(%esp)
08619751 +0x359:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08619756 +0x35e:  movl   $0x1,0x14(%esp)
0861975e +0x366:  movl   $0x0,0x10(%esp)
08619766 +0x36e:  mov    %esi,0xc(%esp)
0861976a +0x372:  mov    %ebx,0x8(%esp)
0861976e +0x376:  movl   $0x1,0x4(%esp)
08619776 +0x37e:  mov    %eax,(%esp)
08619779 +0x381:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
0861977e +0x386:  xor    $0x1,%eax
08619781 +0x389:  test   %al,%al
08619783 +0x38b:  je     086199fe <+0x606>
08619789 +0x391:  movswl -0xd4(%ebp),%edi
08619790 +0x398:  movswl -0xd0(%ebp),%esi
08619797 +0x39f:  mov    0xc(%ebp),%eax
0861979a +0x3a2:  mov    %eax,(%esp)
0861979d +0x3a5:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
086197a2 +0x3aa:  mov    %eax,%ebx
086197a4 +0x3ac:  movl   $0x5,0xc(%esp)
086197ac +0x3b4:  movl   $0x136,0x8(%esp)
086197b4 +0x3bc:  movl   $&_ZZN5Store14user_sell_itemEP5CUsercssE19__PRETTY_FUNCTION__,0x4(%esp)
086197bc +0x3c4:  lea    -0x70(%ebp),%eax
086197bf +0x3c7:  mov    %eax,(%esp)
086197c2 +0x3ca:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086197c7 +0x3cf:  mov    %edi,0x10(%esp)
086197cb +0x3d3:  mov    %esi,0xc(%esp)
086197cf +0x3d7:  mov    %ebx,0x8(%esp)
086197d3 +0x3db:  movl   $"Store::user_sell_item, delete_item failed , User ch=%d , %d %d",0x4(%esp)
086197db +0x3e3:  lea    -0x70(%ebp),%eax
086197de +0x3e6:  mov    %eax,(%esp)
086197e1 +0x3e9:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086197e6 +0x3ee:  mov    $0x11,%ebx
086197eb +0x3f3:  jmp    08619cdf <+0x8e7>
086197f0 +0x3f8:  movswl -0xd4(%ebp),%esi
086197f7 +0x3ff:  movswl -0xd0(%ebp),%ebx
086197fe +0x406:  mov    0xc(%ebp),%eax
08619801 +0x409:  mov    %eax,(%esp)
08619804 +0x40c:  call   08151a94 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13c9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13c9
08619809 +0x411:  movl   $0x0,0xc(%esp)
08619811 +0x419:  mov    %esi,0x8(%esp)
08619815 +0x41d:  mov    %ebx,0x4(%esp)
08619819 +0x421:  mov    %eax,(%esp)
0861981c +0x424:  call   0850b794 <_ZN6CCargo11delete_itemEii14eItemDelReason>  ; CCargo::delete_item(int, int, eItemDelReason)
08619821 +0x429:  xor    $0x1,%eax
08619824 +0x42c:  test   %al,%al
08619826 +0x42e:  je     08619a01 <+0x609>
0861982c +0x434:  movswl -0xd4(%ebp),%edi
08619833 +0x43b:  movswl -0xd0(%ebp),%esi
0861983a +0x442:  mov    0xc(%ebp),%eax
0861983d +0x445:  mov    %eax,(%esp)
08619840 +0x448:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08619845 +0x44d:  mov    %eax,%ebx
08619847 +0x44f:  movl   $0x5,0xc(%esp)
0861984f +0x457:  movl   $0x141,0x8(%esp)
08619857 +0x45f:  movl   $&_ZZN5Store14user_sell_itemEP5CUsercssE19__PRETTY_FUNCTION__,0x4(%esp)
0861985f +0x467:  lea    -0x60(%ebp),%eax
08619862 +0x46a:  mov    %eax,(%esp)
08619865 +0x46d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0861986a +0x472:  mov    %edi,0x10(%esp)
0861986e +0x476:  mov    %esi,0xc(%esp)
08619872 +0x47a:  mov    %ebx,0x8(%esp)
08619876 +0x47e:  movl   $"Store::user_sell_item, delete_item failed 2, User ch=%d , %d %d",0x4(%esp)
0861987e +0x486:  lea    -0x60(%ebp),%eax
08619881 +0x489:  mov    %eax,(%esp)
08619884 +0x48c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08619889 +0x491:  mov    $0x11,%ebx
0861988e +0x496:  jmp    08619cdf <+0x8e7>
08619893 +0x49b:  movswl -0xd0(%ebp),%ebx
0861989a +0x4a2:  mov    0xc(%ebp),%eax
0861989d +0x4a5:  mov    %eax,(%esp)
086198a0 +0x4a8:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
086198a5 +0x4ad:  movl   $0x1,0x14(%esp)
086198ad +0x4b5:  movl   $0x0,0x10(%esp)
086198b5 +0x4bd:  movl   $0x1,0xc(%esp)
086198bd +0x4c5:  mov    %ebx,0x8(%esp)
086198c1 +0x4c9:  movl   $0x0,0x4(%esp)
086198c9 +0x4d1:  mov    %eax,(%esp)
086198cc +0x4d4:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
086198d1 +0x4d9:  xor    $0x1,%eax
086198d4 +0x4dc:  test   %al,%al
086198d6 +0x4de:  je     08619934 <+0x53c>
086198d8 +0x4e0:  movswl -0xd0(%ebp),%esi
086198df +0x4e7:  mov    0xc(%ebp),%eax
086198e2 +0x4ea:  mov    %eax,(%esp)
086198e5 +0x4ed:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
086198ea +0x4f2:  mov    %eax,%ebx
086198ec +0x4f4:  movl   $0x5,0xc(%esp)
086198f4 +0x4fc:  movl   $0x14d,0x8(%esp)
086198fc +0x504:  movl   $&_ZZN5Store14user_sell_itemEP5CUsercssE19__PRETTY_FUNCTION__,0x4(%esp)
08619904 +0x50c:  lea    -0x50(%ebp),%eax
08619907 +0x50f:  mov    %eax,(%esp)
0861990a +0x512:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0861990f +0x517:  mov    %esi,0xc(%esp)
08619913 +0x51b:  mov    %ebx,0x8(%esp)
08619917 +0x51f:  movl   $"Store::user_sell_item, delete_item failed 3, User ch=%d , %d",0x4(%esp)
0861991f +0x527:  lea    -0x50(%ebp),%eax
08619922 +0x52a:  mov    %eax,(%esp)
08619925 +0x52d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0861992a +0x532:  mov    $0x11,%ebx
0861992f +0x537:  jmp    08619cdf <+0x8e7>
08619934 +0x53c:  movswl -0xd0(%ebp),%eax
0861993b +0x543:  mov    %eax,0x4(%esp)
0861993f +0x547:  mov    0xc(%ebp),%eax
08619942 +0x54a:  mov    %eax,(%esp)
08619945 +0x54d:  call   0865dd14 <_ZN5CUser10send_equipEi>  ; CUser::send_equip(int)
0861994a +0x552:  jmp    08619a02 <+0x60a>
0861994f +0x557:  movswl -0xd4(%ebp),%esi
08619956 +0x55e:  movswl -0xd0(%ebp),%ebx
0861995d +0x565:  mov    0xc(%ebp),%eax
08619960 +0x568:  mov    %eax,(%esp)
08619963 +0x56b:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08619968 +0x570:  movl   $0x1,0x14(%esp)
08619970 +0x578:  movl   $0x0,0x10(%esp)
08619978 +0x580:  mov    %esi,0xc(%esp)
0861997c +0x584:  mov    %ebx,0x8(%esp)
08619980 +0x588:  movl   $0x3,0x4(%esp)
08619988 +0x590:  mov    %eax,(%esp)
0861998b +0x593:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
08619990 +0x598:  xor    $0x1,%eax
08619993 +0x59b:  test   %al,%al
08619995 +0x59d:  je     08619a02 <+0x60a>
08619997 +0x59f:  movswl -0xd4(%ebp),%edi
0861999e +0x5a6:  movswl -0xd0(%ebp),%esi
086199a5 +0x5ad:  mov    0xc(%ebp),%eax
086199a8 +0x5b0:  mov    %eax,(%esp)
086199ab +0x5b3:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
086199b0 +0x5b8:  mov    %eax,%ebx
086199b2 +0x5ba:  movl   $0x5,0xc(%esp)
086199ba +0x5c2:  movl   $0x167,0x8(%esp)
086199c2 +0x5ca:  movl   $&_ZZN5Store14user_sell_itemEP5CUsercssE19__PRETTY_FUNCTION__,0x4(%esp)
086199ca +0x5d2:  lea    -0x40(%ebp),%eax
086199cd +0x5d5:  mov    %eax,(%esp)
086199d0 +0x5d8:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086199d5 +0x5dd:  mov    %edi,0x10(%esp)
086199d9 +0x5e1:  mov    %esi,0xc(%esp)
086199dd +0x5e5:  mov    %ebx,0x8(%esp)
086199e1 +0x5e9:  movl   $"Store::user_sell_item, delete_item failed 4, User ch=%d , %d %d",0x4(%esp)
086199e9 +0x5f1:  lea    -0x40(%ebp),%eax
086199ec +0x5f4:  mov    %eax,(%esp)
086199ef +0x5f7:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086199f4 +0x5fc:  mov    $0x11,%ebx
086199f9 +0x601:  jmp    08619cdf <+0x8e7>
086199fe +0x606:  nop
086199ff +0x607:  jmp    08619a02 <+0x60a>
08619a01 +0x609:  nop
08619a02 +0x60a:  mov    -0x78(%ebp),%eax
08619a05 +0x60d:  cmp    $0x7a11f,%eax
08619a0a +0x612:  jle    08619ab7 <+0x6bf>
08619a10 +0x618:  mov    0xc(%ebp),%eax
08619a13 +0x61b:  mov    %eax,(%esp)
08619a16 +0x61e:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08619a1b +0x623:  mov    %eax,(%esp)
08619a1e +0x626:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
08619a23 +0x62b:  mov    %eax,%edi
08619a25 +0x62d:  mov    -0x74(%ebp),%eax
08619a28 +0x630:  mov    %eax,-0x120(%ebp)
08619a2e +0x636:  mov    -0x78(%ebp),%eax
08619a31 +0x639:  mov    %eax,-0x11c(%ebp)
08619a37 +0x63f:  mov    0xc(%ebp),%eax
08619a3a +0x642:  mov    %eax,(%esp)
08619a3d +0x645:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
08619a42 +0x64a:  mov    %eax,%esi
08619a44 +0x64c:  mov    0xc(%ebp),%eax
08619a47 +0x64f:  mov    %eax,(%esp)
08619a4a +0x652:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08619a4f +0x657:  movl   $0x0,0x4(%esp)
08619a57 +0x65f:  mov    %eax,(%esp)
08619a5a +0x662:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08619a5f +0x667:  mov    %eax,%ebx
08619a61 +0x669:  movl   $0x4,0xc(%esp)
08619a69 +0x671:  movl   $0x172,0x8(%esp)
08619a71 +0x679:  movl   $&_ZZN5Store14user_sell_itemEP5CUsercssE19__PRETTY_FUNCTION__,0x4(%esp)
08619a79 +0x681:  lea    -0x30(%ebp),%eax
08619a7c +0x684:  mov    %eax,(%esp)
08619a7f +0x687:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08619a84 +0x68c:  mov    %edi,0x18(%esp)
08619a88 +0x690:  mov    -0x120(%ebp),%eax
08619a8e +0x696:  mov    %eax,0x14(%esp)
08619a92 +0x69a:  mov    -0x11c(%ebp),%eax
08619a98 +0x6a0:  mov    %eax,0x10(%esp)
08619a9c +0x6a4:  mov    %esi,0xc(%esp)
08619aa0 +0x6a8:  mov    %ebx,0x8(%esp)
08619aa4 +0x6ac:  movl   $"User(%s) Charac(%s) gain money(%d) by selling item(%d), old money is %d.",0x4(%esp)
08619aac +0x6b4:  lea    -0x30(%ebp),%eax
08619aaf +0x6b7:  mov    %eax,(%esp)
08619ab2 +0x6ba:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08619ab7 +0x6bf:  mov    -0x78(%ebp),%ebx
08619aba +0x6c2:  mov    0xc(%ebp),%eax
08619abd +0x6c5:  mov    %eax,(%esp)
08619ac0 +0x6c8:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08619ac5 +0x6cd:  movl   $0x0,0x10(%esp)
08619acd +0x6d5:  movl   $0x1,0xc(%esp)
08619ad5 +0x6dd:  movl   $0x0,0x8(%esp)
08619add +0x6e5:  mov    %ebx,0x4(%esp)
08619ae1 +0x6e9:  mov    %eax,(%esp)
08619ae4 +0x6ec:  call   084ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>  ; CInventory::gain_money(int, eMoneyAddReason, bool, int)
08619ae9 +0x6f1:  lea    -0xc1(%ebp),%eax
08619aef +0x6f7:  mov    %eax,(%esp)
08619af2 +0x6fa:  call   0811ed66 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x61>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x61
08619af7 +0x6ff:  xor    $0x1,%eax
08619afa +0x702:  test   %al,%al
08619afc +0x704:  je     08619b60 <+0x768>
08619afe +0x706:  mov    -0xbf(%ebp),%eax
08619b04 +0x70c:  mov    %eax,%ebx
08619b06 +0x70e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08619b0b +0x713:  mov    %ebx,0x4(%esp)
08619b0f +0x717:  mov    %eax,(%esp)
08619b12 +0x71a:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08619b17 +0x71f:  mov    %eax,-0x1c(%ebp)
08619b1a +0x722:  cmpl   $0x0,-0x1c(%ebp)
08619b1e +0x726:  je     08619b3c <+0x744>
08619b20 +0x728:  mov    -0x1c(%ebp),%eax
08619b23 +0x72b:  mov    %eax,(%esp)
08619b26 +0x72e:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
08619b2b +0x733:  test   %al,%al
08619b2d +0x735:  je     08619b3c <+0x744>
08619b2f +0x737:  movswl -0xd4(%ebp),%eax
08619b36 +0x73e:  mov    %eax,-0xba(%ebp)
08619b3c +0x744:  mov    -0x78(%ebp),%eax
08619b3f +0x747:  movl   $0x1,0xc(%esp)
08619b47 +0x74f:  mov    %eax,0x8(%esp)
08619b4b +0x753:  lea    -0xc1(%ebp),%eax
08619b51 +0x759:  mov    %eax,0x4(%esp)
08619b55 +0x75d:  mov    0xc(%ebp),%eax
08619b58 +0x760:  mov    %eax,(%esp)
08619b5b +0x763:  call   086472c0 <_ZN5CUser14Add_RedeemInfoERK10Inven_Itemib>  ; CUser::Add_RedeemInfo(Inven_Item const&, int, bool)
08619b60 +0x768:  lea    -0x84(%ebp),%eax
08619b66 +0x76e:  mov    %eax,(%esp)
08619b69 +0x771:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08619b6e +0x776:  movl   $0x18,0x8(%esp)
08619b76 +0x77e:  movl   $0x1,0x4(%esp)
08619b7e +0x786:  lea    -0x84(%ebp),%eax
08619b84 +0x78c:  mov    %eax,(%esp)
08619b87 +0x78f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08619b8c +0x794:  movl   $0x1,0x4(%esp)
08619b94 +0x79c:  lea    -0x84(%ebp),%eax
08619b9a +0x7a2:  mov    %eax,(%esp)
08619b9d +0x7a5:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08619ba2 +0x7aa:  mov    0xc(%ebp),%eax
08619ba5 +0x7ad:  mov    %eax,(%esp)
08619ba8 +0x7b0:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08619bad +0x7b5:  mov    %eax,(%esp)
08619bb0 +0x7b8:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
08619bb5 +0x7bd:  mov    %eax,0x4(%esp)
08619bb9 +0x7c1:  lea    -0x84(%ebp),%eax
08619bbf +0x7c7:  mov    %eax,(%esp)
08619bc2 +0x7ca:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08619bc7 +0x7cf:  movsbl -0xcc(%ebp),%eax
08619bce +0x7d6:  mov    %eax,0x4(%esp)
08619bd2 +0x7da:  lea    -0x84(%ebp),%eax
08619bd8 +0x7e0:  mov    %eax,(%esp)
08619bdb +0x7e3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08619be0 +0x7e8:  movswl -0xd0(%ebp),%eax
08619be7 +0x7ef:  mov    %eax,0x4(%esp)
08619beb +0x7f3:  lea    -0x84(%ebp),%eax
08619bf1 +0x7f9:  mov    %eax,(%esp)
08619bf4 +0x7fc:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08619bf9 +0x801:  movswl -0xd4(%ebp),%eax
08619c00 +0x808:  mov    %eax,0x4(%esp)
08619c04 +0x80c:  lea    -0x84(%ebp),%eax
08619c0a +0x812:  mov    %eax,(%esp)
08619c0d +0x815:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08619c12 +0x81a:  movl   $0x1,0x4(%esp)
08619c1a +0x822:  lea    -0x84(%ebp),%eax
08619c20 +0x828:  mov    %eax,(%esp)
08619c23 +0x82b:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08619c28 +0x830:  lea    -0x84(%ebp),%eax
08619c2e +0x836:  mov    %eax,0x4(%esp)
08619c32 +0x83a:  mov    0xc(%ebp),%eax
08619c35 +0x83d:  mov    %eax,(%esp)
08619c38 +0x840:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08619c3d +0x845:  mov    -0x74(%ebp),%eax
08619c40 +0x848:  mov    %eax,(%esp)
08619c43 +0x84b:  call   082866d0 <_ZN33CHackLog_InvitationPaperSellToNPC17IsInvitationPaperEi>  ; CHackLog_InvitationPaperSellToNPC::IsInvitationPaper(int)
08619c48 +0x850:  test   %al,%al
08619c4a +0x852:  je     08619c89 <+0x891>
08619c4c +0x854:  call   08286714 <_ZN33CHackLog_InvitationPaperSellToNPC11GetHackTypeEv>  ; CHackLog_InvitationPaperSellToNPC::GetHackType()
08619c51 +0x859:  mov    %eax,%ebx
08619c53 +0x85b:  mov    0xc(%ebp),%eax
08619c56 +0x85e:  mov    %eax,(%esp)
08619c59 +0x861:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
08619c5e +0x866:  movl   $0x0,0x14(%esp)
08619c66 +0x86e:  movl   $0x0,0x10(%esp)
08619c6e +0x876:  movl   $0x1,0xc(%esp)
08619c76 +0x87e:  mov    %ebx,0x8(%esp)
08619c7a +0x882:  mov    0xc(%ebp),%edx
08619c7d +0x885:  mov    %edx,0x4(%esp)
08619c81 +0x889:  mov    %eax,(%esp)
08619c84 +0x88c:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
08619c89 +0x891:  movswl -0xd4(%ebp),%ecx
08619c90 +0x898:  mov    -0x74(%ebp),%edx
08619c93 +0x89b:  mov    0xc(%ebp),%eax
08619c96 +0x89e:  mov    0x796f8(%eax),%eax
08619c9c +0x8a4:  mov    %ecx,0x8(%esp)
08619ca0 +0x8a8:  mov    %edx,0x4(%esp)
08619ca4 +0x8ac:  mov    %eax,(%esp)
08619ca7 +0x8af:  call   084ba23a <_ZN10HistoryLog13WriteSellItemEP8_IO_FILEii>  ; HistoryLog::WriteSellItem(_IO_FILE*, int, int)
08619cac +0x8b4:  mov    $0x0,%ebx
08619cb1 +0x8b9:  lea    -0x84(%ebp),%eax
08619cb7 +0x8bf:  mov    %eax,(%esp)
08619cba +0x8c2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08619cbf +0x8c7:  jmp    08619cdf <+0x8e7>
08619cc1 +0x8c9:  mov    %edx,%ebx
08619cc3 +0x8cb:  mov    %eax,%esi
08619cc5 +0x8cd:  lea    -0x84(%ebp),%eax
08619ccb +0x8d3:  mov    %eax,(%esp)
08619cce +0x8d6:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08619cd3 +0x8db:  mov    %esi,%eax
08619cd5 +0x8dd:  mov    %ebx,%edx
08619cd7 +0x8df:  mov    %eax,(%esp)
08619cda +0x8e2:  call   08ae3750 <_Unwind_Resume>
08619cdf +0x8e7:  mov    %ebx,%eax
08619ce1 +0x8e9:  lea    -0xc(%ebp),%esp
08619ce4 +0x8ec:  add    $0x0,%esp
08619ce7 +0x8ef:  pop    %ebx
08619ce8 +0x8f0:  pop    %esi
08619ce9 +0x8f1:  pop    %edi
08619cea +0x8f2:  pop    %ebp
08619ceb +0x8f3:  ret
```

## 反编译 C

```c
// Store::user_sell_item @ 0x86193f8

/* Store::user_sell_item(CUser*, char, short, short) */

int __thiscall
Store::user_sell_item(Store *this,CUser *param_1,char param_2,short param_3,short param_4)

{
  char cVar1;
  int iVar2;
  CCargo *pCVar3;
  CInventory *pCVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  CDataManager *this_00;
  CHackAnalyzer *pCVar9;
  int iVar10;
  undefined1 local_11c [12];
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 local_e0;
  short local_d8;
  short local_d4;
  char local_d0;
  undefined2 local_c5;
  undefined2 uStack_c3;
  undefined2 uStack_c1;
  undefined1 uStack_bf;
  int iStack_be;
  undefined1 uStack_ba;
  undefined4 local_b9;
  undefined4 local_b5;
  undefined4 local_b1;
  undefined4 local_ad;
  undefined4 local_a9;
  undefined4 local_a5;
  undefined4 local_a1;
  undefined4 local_9d;
  undefined4 local_99;
  undefined4 local_95;
  undefined4 local_91;
  undefined4 local_8d;
  undefined1 local_89;
  PacketGuard local_88 [12];
  int local_7c;
  int local_78;
  cMyTrace local_74 [16];
  cMyTrace local_64 [16];
  cMyTrace local_54 [16];
  cMyTrace local_44 [16];
  cMyTrace local_34 [16];
  int local_24;
  CItem *local_20;
  
  local_d0 = param_2;
  local_d4 = param_3;
  local_d8 = param_4;
  cVar1 = CUser::CheckInTrade(param_1);
  if (cVar1 != '\0') {
    return 0x13;
  }
  local_78 = 0;
  local_24 = 0;
  local_7c = 0;
  iVar2 = CUser::get_state(param_1);
  local_24 = GetSellItemPrice(this,param_1,local_d0,local_d4,local_d8,iVar2 == 5,&local_78,&local_7c
                             );
  if (local_24 != 0) {
    return local_24;
  }
  cVar1 = CUser::CheckMoney(param_1,local_7c);
  if (cVar1 != '\x01') {
    return 0x16;
  }
  Inven_Item::Inven_Item((Inven_Item *)&local_c5);
  if (local_d0 == '\x02') {
    CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)param_1);
    CCargo::get_cargo_slot((int)local_11c);
    local_c5 = (undefined2)local_11c._0_4_;
    uStack_c3 = SUB42(local_11c._0_4_,2);
    uStack_c1 = (undefined2)local_11c._4_4_;
    uStack_bf = SUB41(local_11c._4_4_,2);
    iStack_be._1_3_ = (undefined3)local_11c._8_4_;
    iStack_be = CONCAT31(iStack_be._1_3_,SUB41(local_11c._4_4_,3));
    uStack_ba = SUB41(local_11c._8_4_,3);
    local_b9 = local_110;
    local_b5 = local_10c;
    local_b1 = local_108;
    local_ad = local_104;
    local_a9 = local_100;
    local_a5 = local_fc;
    local_a1 = local_f8;
    local_9d = local_f4;
    local_99 = local_f0;
    local_95 = local_ec;
    local_91 = local_e8;
    local_8d = local_e4;
    local_89 = local_e0;
  }
  else {
    if (local_d0 < '\x03') {
      if (local_d0 != '\0') goto LAB_08619708;
    }
    else if ((local_d0 != '\x03') && (local_d0 != '\a')) goto LAB_08619708;
    GetInvenTypeFromItemSpace((int)local_d0);
    iVar2 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    CInventory::GetInvenSlot((int)local_11c,iVar2);
    local_c5 = (undefined2)local_11c._0_4_;
    uStack_c3 = SUB42(local_11c._0_4_,2);
    uStack_c1 = (undefined2)local_11c._4_4_;
    uStack_bf = SUB41(local_11c._4_4_,2);
    iStack_be._1_3_ = (undefined3)local_11c._8_4_;
    iStack_be = CONCAT31(iStack_be._1_3_,SUB41(local_11c._4_4_,3));
    uStack_ba = SUB41(local_11c._8_4_,3);
    local_b9 = local_110;
    local_b5 = local_10c;
    local_b1 = local_108;
    local_ad = local_104;
    local_a9 = local_100;
    local_a5 = local_fc;
    local_a1 = local_f8;
    local_9d = local_f4;
    local_99 = local_f0;
    local_95 = local_ec;
    local_91 = local_e8;
    local_8d = local_e4;
    local_89 = local_e0;
  }
LAB_08619708:
  if (local_d0 == '\x02') {
    iVar10 = (int)local_d8;
    iVar2 = (int)local_d4;
    pCVar3 = (CCargo *)CUserCharacInfo::getCurCharacCargoW((CUserCharacInfo *)param_1);
    cVar1 = CCargo::delete_item(pCVar3,iVar2,iVar10,0);
    if (cVar1 != '\x01') {
      iVar10 = (int)local_d8;
      iVar2 = (int)local_d4;
      uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      cMyTrace::cMyTrace(local_64,"int Store::user_sell_item(CUser*, char, short int, short int)",
                         0x141,5);
      cMyTrace::operator()
                (local_64,"Store::user_sell_item, delete_item failed 2, User ch=%d , %d %d",uVar5,
                 iVar2,iVar10);
      return 0x11;
    }
  }
  else if (local_d0 < '\x03') {
    if (local_d0 == '\0') {
      iVar10 = (int)local_d8;
      iVar2 = (int)local_d4;
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      cVar1 = CInventory::delete_item(pCVar4,1,iVar2,iVar10,0,1);
      if (cVar1 != '\x01') {
        iVar10 = (int)local_d8;
        iVar2 = (int)local_d4;
        uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        cMyTrace::cMyTrace(local_74,"int Store::user_sell_item(CUser*, char, short int, short int)",
                           0x136,5);
        cMyTrace::operator()
                  (local_74,"Store::user_sell_item, delete_item failed , User ch=%d , %d %d",uVar5,
                   iVar2,iVar10);
        return 0x11;
      }
    }
  }
  else if (local_d0 == '\x03') {
    iVar2 = (int)local_d4;
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    cVar1 = CInventory::delete_item(pCVar4,0,iVar2,1,0,1);
    if (cVar1 != '\x01') {
      iVar2 = (int)local_d4;
      uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      cMyTrace::cMyTrace(local_54,"int Store::user_sell_item(CUser*, char, short int, short int)",
                         0x14d,5);
      cMyTrace::operator()
                (local_54,"Store::user_sell_item, delete_item failed 3, User ch=%d , %d",uVar5,iVar2
                );
      return 0x11;
    }
    CUser::send_equip(param_1,(int)local_d4);
  }
  else if (local_d0 == '\a') {
    iVar10 = (int)local_d8;
    iVar2 = (int)local_d4;
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    cVar1 = CInventory::delete_item(pCVar4,3,iVar2,iVar10,0,1);
    if (cVar1 != '\x01') {
      iVar10 = (int)local_d8;
      iVar2 = (int)local_d4;
      uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      cMyTrace::cMyTrace(local_44,"int Store::user_sell_item(CUser*, char, short int, short int)",
                         0x167,5);
      cMyTrace::operator()
                (local_44,"Store::user_sell_item, delete_item failed 4, User ch=%d , %d %d",uVar5,
                 iVar2,iVar10);
      return 0x11;
    }
  }
  if (499999 < local_7c) {
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    uVar5 = CInventory::get_money(pCVar4);
    iVar10 = local_78;
    iVar2 = local_7c;
    uVar6 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    uVar7 = CUser::get_acc_id(param_1);
    uVar8 = NumberToString(uVar7,0);
    cMyTrace::cMyTrace(local_34,"int Store::user_sell_item(CUser*, char, short int, short int)",
                       0x172,4);
    cMyTrace::operator()
              (local_34,"User(%s) Charac(%s) gain money(%d) by selling item(%d), old money is %d.",
               uVar8,uVar6,iVar2,iVar10,uVar5);
  }
  iVar2 = local_7c;
  pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
  CInventory::gain_money(pCVar4,iVar2,0,1,0);
  cVar1 = Inven_Item::isEmpty((Inven_Item *)&local_c5);
  if (cVar1 != '\x01') {
    iVar2 = CONCAT22(uStack_c1,uStack_c3);
    this_00 = (CDataManager *)G_CDataManager();
    local_20 = (CItem *)CDataManager::find_item(this_00,iVar2);
    if ((local_20 != (CItem *)0x0) && (cVar1 = CItem::is_stackable(local_20), cVar1 != '\0')) {
      iStack_be = (int)local_d8;
    }
    CUser::Add_RedeemInfo(param_1,(Inven_Item *)&local_c5,local_7c,true);
  }
  PacketGuard::PacketGuard(local_88);
                    /* try { // try from 08619b87 to 08619cab has its CatchHandler @ 08619cc1 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_88,1,0x18);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_88,1);
  pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  iVar2 = CInventory::get_money(pCVar4);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_88,iVar2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_88,(int)local_d0);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_88,(int)local_d4);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_88,(int)local_d8);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_88,true);
  CUser::Send(param_1,local_88);
  cVar1 = CHackLog_InvitationPaperSellToNPC::IsInvitationPaper(local_78);
  if (cVar1 != '\0') {
    uVar5 = CHackLog_InvitationPaperSellToNPC::GetHackType();
    pCVar9 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
    WongWork::CHackAnalyzer::addServerHackCnt(pCVar9,param_1,uVar5,1,0,0);
  }
  HistoryLog::WriteSellItem(*(_IO_FILE **)(param_1 + 0x796f8),local_78,(int)local_d8);
  PacketGuard::~PacketGuard(local_88);
  return 0;
}
```
