# _CheckCondition

`_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK15upgrade_table_tRK14upgrade_info_t`

`WongWork::CItemUpgrade::_CheckCondition(CUser const*, Inven_Item const&, CItem const*, Inven_Item const&, upgrade_table_t const&, upgrade_info_t const&)`

| 类 | 地址 |
|---|---|
| `WongWork::CItemUpgrade` | `0x08546342` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08546342  _ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK15upgrade_table_tRK14upgrade_info_t
#           WongWork::CItemUpgrade::_CheckCondition(CUser const*, Inven_Item const&, CItem const*, Inven_Item const&, upgrade_table_t const&, upgrade_info_t const&)
# range [0x08546342, 0x08546789]
08546342 +0x000:  push   %ebp
08546343 +0x001:  mov    %esp,%ebp
08546345 +0x003:  push   %ebx
08546346 +0x004:  sub    $0x84,%esp
0854634c +0x00a:  mov    0x10(%ebp),%eax
0854634f +0x00d:  add    $0x11,%eax
08546352 +0x010:  mov    %eax,(%esp)
08546355 +0x013:  call   081507bc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xf1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xf1
0854635a +0x018:  xor    $0x1,%eax
0854635d +0x01b:  test   %al,%al
0854635f +0x01d:  je     0854636b <+0x29>
08546361 +0x01f:  mov    $0xae,%eax
08546366 +0x024:  jmp    08546785 <+0x443>
0854636b +0x029:  mov    0x18(%ebp),%eax
0854636e +0x02c:  mov    0x2(%eax),%edx
08546371 +0x02f:  mov    0x20(%ebp),%eax
08546374 +0x032:  mov    0x2c(%eax),%eax
08546377 +0x035:  cmp    %eax,%edx
08546379 +0x037:  je     08546385 <+0x43>
0854637b +0x039:  mov    $0x16,%eax
08546380 +0x03e:  jmp    08546785 <+0x443>
08546385 +0x043:  mov    0x18(%ebp),%eax
08546388 +0x046:  mov    0x7(%eax),%edx
0854638b +0x049:  mov    0x20(%ebp),%eax
0854638e +0x04c:  mov    0x30(%eax),%eax
08546391 +0x04f:  cmp    %eax,%edx
08546393 +0x051:  jge    0854639f <+0x5d>
08546395 +0x053:  mov    $0x16,%eax
0854639a +0x058:  jmp    08546785 <+0x443>
0854639f +0x05d:  movl   $0x0,-0x20(%ebp)
085463a6 +0x064:  mov    &_ZN10GlobalData15s_event_managerE,%eax
085463ab +0x069:  movl   $0x32,0x4(%esp)
085463b3 +0x071:  mov    %eax,(%esp)
085463b6 +0x074:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
085463bb +0x079:  mov    (%eax),%edx
085463bd +0x07b:  add    $0x34,%edx
085463c0 +0x07e:  mov    (%edx),%edx
085463c2 +0x080:  movl   $0x0,0x4(%esp)
085463ca +0x088:  mov    %eax,(%esp)
085463cd +0x08b:  call   *%edx
085463cf +0x08d:  test   %al,%al
085463d1 +0x08f:  je     085463ef <+0xad>
085463d3 +0x091:  mov    0x10(%ebp),%eax
085463d6 +0x094:  add    $0x11,%eax
085463d9 +0x097:  mov    %eax,(%esp)
085463dc +0x09a:  call   081507cc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x101>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x101
085463e1 +0x09f:  xor    $0x1,%eax
085463e4 +0x0a2:  test   %al,%al
085463e6 +0x0a4:  je     085463ef <+0xad>
085463e8 +0x0a6:  mov    $0x1,%eax
085463ed +0x0ab:  jmp    085463f4 <+0xb2>
085463ef +0x0ad:  mov    $0x0,%eax
085463f4 +0x0b2:  test   %al,%al
085463f6 +0x0b4:  je     0854645f <+0x11d>
085463f8 +0x0b6:  mov    &_ZN10GlobalData15s_event_managerE,%eax
085463fd +0x0bb:  movl   $0x32,0x4(%esp)
08546405 +0x0c3:  mov    %eax,(%esp)
08546408 +0x0c6:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0854640d +0x0cb:  mov    %eax,(%esp)
08546410 +0x0ce:  call   0854b56e <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x3f6>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x3f6
08546415 +0x0d3:  mov    %eax,-0x10(%ebp)
08546418 +0x0d6:  cmpl   $0x0,-0x10(%ebp)
0854641c +0x0da:  jle    08546468 <+0x126>
0854641e +0x0dc:  mov    0x20(%ebp),%eax
08546421 +0x0df:  mov    0x34(%eax),%ebx
08546424 +0x0e2:  mov    0x20(%ebp),%eax
08546427 +0x0e5:  mov    0x34(%eax),%eax
0854642a +0x0e8:  mov    %eax,%ecx
0854642c +0x0ea:  imul   -0x10(%ebp),%ecx
08546430 +0x0ee:  mov    $0x51eb851f,%edx
08546435 +0x0f3:  mov    %ecx,%eax
08546437 +0x0f5:  imul   %edx
08546439 +0x0f7:  sar    $0x5,%edx
0854643c +0x0fa:  mov    %ecx,%eax
0854643e +0x0fc:  sar    $0x1f,%eax
08546441 +0x0ff:  mov    %edx,%ecx
08546443 +0x101:  sub    %eax,%ecx
08546445 +0x103:  mov    %ecx,%eax
08546447 +0x105:  mov    %ebx,%edx
08546449 +0x107:  sub    %eax,%edx
0854644b +0x109:  mov    %edx,%eax
0854644d +0x10b:  mov    %eax,-0x20(%ebp)
08546450 +0x10e:  cmpl   $0x0,-0x20(%ebp)
08546454 +0x112:  jns    08546468 <+0x126>
08546456 +0x114:  movl   $0x0,-0x20(%ebp)
0854645d +0x11b:  jmp    08546468 <+0x126>
0854645f +0x11d:  mov    0x20(%ebp),%eax
08546462 +0x120:  mov    0x34(%eax),%eax
08546465 +0x123:  mov    %eax,-0x20(%ebp)
08546468 +0x126:  mov    0xc(%ebp),%eax
0854646b +0x129:  mov    %eax,(%esp)
0854646e +0x12c:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08546473 +0x131:  lea    -0x5d(%ebp),%edx
08546476 +0x134:  movl   $0xb,0xc(%esp)
0854647e +0x13c:  movl   $0x0,0x8(%esp)
08546486 +0x144:  mov    %eax,0x4(%esp)
0854648a +0x148:  mov    %edx,(%esp)
0854648d +0x14b:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08546492 +0x150:  sub    $0x4,%esp
08546495 +0x153:  mov    -0x5b(%ebp),%eax
08546498 +0x156:  mov    %eax,-0x1c(%ebp)
0854649b +0x159:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085464a0 +0x15e:  mov    -0x1c(%ebp),%edx
085464a3 +0x161:  mov    %edx,0x4(%esp)
085464a7 +0x165:  mov    %eax,(%esp)
085464aa +0x168:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
085464af +0x16d:  mov    %eax,-0x18(%ebp)
085464b2 +0x170:  cmpl   $0x0,-0x18(%ebp)
085464b6 +0x174:  je     085464f3 <+0x1b1>
085464b8 +0x176:  fildl  -0x20(%ebp)
085464bb +0x179:  fstps  -0x74(%ebp)
085464be +0x17c:  fildl  -0x20(%ebp)
085464c1 +0x17f:  fstps  -0x70(%ebp)
085464c4 +0x182:  mov    -0x18(%ebp),%eax
085464c7 +0x185:  mov    %eax,(%esp)
085464ca +0x188:  call   0822ca80 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x212a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x212a
085464cf +0x18d:  fmuls  -0x70(%ebp)
085464d2 +0x190:  flds   ""
085464d8 +0x196:  fdivrp %st,%st(1)
085464da +0x198:  fadds  -0x74(%ebp)
085464dd +0x19b:  fnstcw -0x6a(%ebp)
085464e0 +0x19e:  movzwl -0x6a(%ebp),%eax
085464e4 +0x1a2:  mov    $0xc,%ah
085464e6 +0x1a4:  mov    %ax,-0x6c(%ebp)
085464ea +0x1a8:  fldcw  -0x6c(%ebp)
085464ed +0x1ab:  fistpl -0x20(%ebp)
085464f0 +0x1ae:  fldcw  -0x6a(%ebp)
085464f3 +0x1b1:  mov    0xc(%ebp),%eax
085464f6 +0x1b4:  mov    %eax,(%esp)
085464f9 +0x1b7:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085464fe +0x1bc:  mov    %eax,(%esp)
08546501 +0x1bf:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
08546506 +0x1c4:  cmp    -0x20(%ebp),%eax
08546509 +0x1c7:  setl   %al
0854650c +0x1ca:  test   %al,%al
0854650e +0x1cc:  je     0854651a <+0x1d8>
08546510 +0x1ce:  mov    $0xa,%eax
08546515 +0x1d3:  jmp    08546785 <+0x443>
0854651a +0x1d8:  mov    0x1c(%ebp),%eax
0854651d +0x1db:  mov    %eax,(%esp)
08546520 +0x1de:  call   0854b602 <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x48a>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x48a
08546525 +0x1e3:  mov    %eax,%ebx
08546527 +0x1e5:  mov    0x10(%ebp),%eax
0854652a +0x1e8:  mov    %eax,(%esp)
0854652d +0x1eb:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
08546532 +0x1f0:  movzbl %al,%eax
08546535 +0x1f3:  cmp    %eax,%ebx
08546537 +0x1f5:  setbe  %al
0854653a +0x1f8:  test   %al,%al
0854653c +0x1fa:  je     08546548 <+0x206>
0854653e +0x1fc:  mov    $0xd,%eax
08546543 +0x201:  jmp    08546785 <+0x443>
08546548 +0x206:  mov    0x10(%ebp),%eax
0854654b +0x209:  movzbl 0x1(%eax),%eax
0854654f +0x20d:  cmp    $0x1,%al
08546551 +0x20f:  je     0854655d <+0x21b>
08546553 +0x211:  mov    $0x13,%eax
08546558 +0x216:  jmp    08546785 <+0x443>
0854655d +0x21b:  mov    0x14(%ebp),%eax
08546560 +0x21e:  mov    (%eax),%eax
08546562 +0x220:  add    $0xc,%eax
08546565 +0x223:  mov    (%eax),%edx
08546567 +0x225:  mov    0x14(%ebp),%eax
0854656a +0x228:  mov    %eax,(%esp)
0854656d +0x22b:  call   *%edx
0854656f +0x22d:  cmp    $0x9,%eax
08546572 +0x230:  jle    0854658b <+0x249>
08546574 +0x232:  mov    0x14(%ebp),%eax
08546577 +0x235:  mov    (%eax),%eax
08546579 +0x237:  add    $0xc,%eax
0854657c +0x23a:  mov    (%eax),%edx
0854657e +0x23c:  mov    0x14(%ebp),%eax
08546581 +0x23f:  mov    %eax,(%esp)
08546584 +0x242:  call   *%edx
08546586 +0x244:  cmp    $0x15,%eax
08546589 +0x247:  jle    08546592 <+0x250>
0854658b +0x249:  mov    $0x1,%eax
08546590 +0x24e:  jmp    08546597 <+0x255>
08546592 +0x250:  mov    $0x0,%eax
08546597 +0x255:  test   %al,%al
08546599 +0x257:  je     085465a5 <+0x263>
0854659b +0x259:  mov    $0x13,%eax
085465a0 +0x25e:  jmp    08546785 <+0x443>
085465a5 +0x263:  mov    0x14(%ebp),%eax
085465a8 +0x266:  mov    (%eax),%eax
085465aa +0x268:  add    $0xc,%eax
085465ad +0x26b:  mov    (%eax),%edx
085465af +0x26d:  mov    0x14(%ebp),%eax
085465b2 +0x270:  mov    %eax,(%esp)
085465b5 +0x273:  call   *%edx
085465b7 +0x275:  cmp    $0xb,%eax
085465ba +0x278:  sete   %al
085465bd +0x27b:  test   %al,%al
085465bf +0x27d:  je     085465cb <+0x289>
085465c1 +0x27f:  mov    $0x13,%eax
085465c6 +0x284:  jmp    08546785 <+0x443>
085465cb +0x289:  mov    0x10(%ebp),%eax
085465ce +0x28c:  movzwl 0xb(%eax),%eax
085465d2 +0x290:  movzwl %ax,%ebx
085465d5 +0x293:  mov    0x14(%ebp),%eax
085465d8 +0x296:  mov    %eax,(%esp)
085465db +0x299:  call   0811ed98 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x93>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x93
085465e0 +0x29e:  cmp    %eax,%ebx
085465e2 +0x2a0:  setne  %al
085465e5 +0x2a3:  test   %al,%al
085465e7 +0x2a5:  je     085465f3 <+0x2b1>
085465e9 +0x2a7:  mov    $0x7,%eax
085465ee +0x2ac:  jmp    08546785 <+0x443>
085465f3 +0x2b1:  mov    0x14(%ebp),%eax
085465f6 +0x2b4:  mov    %eax,(%esp)
085465f9 +0x2b7:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
085465fe +0x2bc:  mov    %eax,%edx
08546600 +0x2be:  mov    0x1c(%ebp),%eax
08546603 +0x2c1:  add    $0x104,%edx
08546609 +0x2c7:  mov    0xc(%eax,%edx,4),%eax
0854660d +0x2cb:  cmp    $0xffffffff,%eax
08546610 +0x2ce:  setne  %al
08546613 +0x2d1:  test   %al,%al
08546615 +0x2d3:  je     08546652 <+0x310>
08546617 +0x2d5:  mov    0x10(%ebp),%eax
0854661a +0x2d8:  mov    %eax,(%esp)
0854661d +0x2db:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
08546622 +0x2e0:  movzbl %al,%ebx
08546625 +0x2e3:  mov    0x14(%ebp),%eax
08546628 +0x2e6:  mov    %eax,(%esp)
0854662b +0x2e9:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
08546630 +0x2ee:  mov    %eax,%edx
08546632 +0x2f0:  mov    0x1c(%ebp),%eax
08546635 +0x2f3:  add    $0x104,%edx
0854663b +0x2f9:  mov    0xc(%eax,%edx,4),%eax
0854663f +0x2fd:  cmp    %eax,%ebx
08546641 +0x2ff:  setge  %al
08546644 +0x302:  test   %al,%al
08546646 +0x304:  je     08546652 <+0x310>
08546648 +0x306:  mov    $0x5f,%eax
0854664d +0x30b:  jmp    08546785 <+0x443>
08546652 +0x310:  mov    0x14(%ebp),%eax
08546655 +0x313:  mov    %eax,(%esp)
08546658 +0x316:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
0854665d +0x31b:  mov    %eax,%ebx
0854665f +0x31d:  mov    0x10(%ebp),%eax
08546662 +0x320:  mov    %eax,(%esp)
08546665 +0x323:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
0854666a +0x328:  movzbl %al,%eax
0854666d +0x32b:  mov    0x20(%ebp),%edx
08546670 +0x32e:  mov    %edx,0xc(%esp)
08546674 +0x332:  mov    %ebx,0x8(%esp)
08546678 +0x336:  mov    %eax,0x4(%esp)
0854667c +0x33a:  mov    0x1c(%ebp),%eax
0854667f +0x33d:  mov    %eax,(%esp)
08546682 +0x340:  call   089003ee <_ZNK15upgrade_table_t14GetPenaltyTypeEh11ENUM_RARITYPK14upgrade_info_t>  ; upgrade_table_t::GetPenaltyType(unsigned char, ENUM_RARITY, upgrade_info_t const*) const
08546687 +0x345:  cmp    $0x3,%eax
0854668a +0x348:  sete   %al
0854668d +0x34b:  test   %al,%al
0854668f +0x34d:  je     08546728 <+0x3e6>
08546695 +0x353:  mov    0x14(%ebp),%eax
08546698 +0x356:  mov    %eax,(%esp)
0854669b +0x359:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
085466a0 +0x35e:  mov    %eax,%ebx
085466a2 +0x360:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085466a7 +0x365:  mov    0x1c(%eax),%eax
085466aa +0x368:  mov    %ebx,0x4(%esp)
085466ae +0x36c:  mov    %eax,(%esp)
085466b1 +0x36f:  call   08473148 <_ZNK8DisJoint29getPredictResultItemTypeCountEi>  ; DisJoint::getPredictResultItemTypeCount(int) const
085466b6 +0x374:  mov    %eax,-0xc(%ebp)
085466b9 +0x377:  addl   $0x1,-0xc(%ebp)
085466bd +0x37b:  mov    0x10(%ebp),%eax
085466c0 +0x37e:  add    $0x11,%eax
085466c3 +0x381:  mov    %eax,(%esp)
085466c6 +0x384:  call   081507cc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x101>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x101
085466cb +0x389:  test   %al,%al
085466cd +0x38b:  je     085466d3 <+0x391>
085466cf +0x38d:  addl   $0x1,-0xc(%ebp)
085466d3 +0x391:  cmpl   $0x0,-0xc(%ebp)
085466d7 +0x395:  je     08546718 <+0x3d6>
085466d9 +0x397:  mov    0xc(%ebp),%eax
085466dc +0x39a:  mov    %eax,(%esp)
085466df +0x39d:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085466e4 +0x3a2:  movl   $0x3,0x4(%esp)
085466ec +0x3aa:  mov    %eax,(%esp)
085466ef +0x3ad:  call   08505080 <_ZNK10CInventory15InvenEmptycountEN10Inven_Item9ITEM_TYPEE>  ; CInventory::InvenEmptycount(Inven_Item::ITEM_TYPE) const
085466f4 +0x3b2:  mov    %eax,%ebx
085466f6 +0x3b4:  mov    0xc(%ebp),%eax
085466f9 +0x3b7:  mov    %eax,(%esp)
085466fc +0x3ba:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08546701 +0x3bf:  mov    %eax,(%esp)
08546704 +0x3c2:  call   08505038 <_ZNK10CInventory15QuickEmptyCountEv>  ; CInventory::QuickEmptyCount() const
08546709 +0x3c7:  lea    (%ebx,%eax,1),%eax
0854670c +0x3ca:  cmp    -0xc(%ebp),%eax
0854670f +0x3cd:  jae    08546718 <+0x3d6>
08546711 +0x3cf:  mov    $0x1,%eax
08546716 +0x3d4:  jmp    0854671d <+0x3db>
08546718 +0x3d6:  mov    $0x0,%eax
0854671d +0x3db:  test   %al,%al
0854671f +0x3dd:  je     08546728 <+0x3e6>
08546721 +0x3df:  mov    $0x15,%eax
08546726 +0x3e4:  jmp    08546785 <+0x443>
08546728 +0x3e6:  movl   $0x0,-0x14(%ebp)
0854672f +0x3ed:  mov    0x10(%ebp),%eax
08546732 +0x3f0:  add    $0x11,%eax
08546735 +0x3f3:  mov    %eax,(%esp)
08546738 +0x3f6:  call   081507cc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x101>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x101
0854673d +0x3fb:  test   %al,%al
0854673f +0x3fd:  je     0854674a <+0x408>
08546741 +0x3ff:  movl   $0x2,-0x14(%ebp)
08546748 +0x406:  jmp    08546751 <+0x40f>
0854674a +0x408:  movl   $0x1,-0x14(%ebp)
08546751 +0x40f:  mov    0xc(%ebp),%eax
08546754 +0x412:  mov    %eax,(%esp)
08546757 +0x415:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0854675c +0x41a:  mov    -0x14(%ebp),%ecx
0854675f +0x41d:  mov    0x14(%ebp),%edx
08546762 +0x420:  mov    %eax,0x8(%esp)
08546766 +0x424:  mov    %ecx,0x4(%esp)
0854676a +0x428:  mov    %edx,(%esp)
0854676d +0x42b:  call   085136ec <_ZN10CEquipItem17isUpgradableLevelEN15ItemUpgradeType1TEi>  ; CEquipItem::isUpgradableLevel(ItemUpgradeType::T, int)
08546772 +0x430:  xor    $0x1,%eax
08546775 +0x433:  test   %al,%al
08546777 +0x435:  je     08546780 <+0x43e>
08546779 +0x437:  mov    $0x13,%eax
0854677e +0x43c:  jmp    08546785 <+0x443>
08546780 +0x43e:  mov    $0x0,%eax
08546785 +0x443:  mov    -0x4(%ebp),%ebx
08546788 +0x446:  leave
08546789 +0x447:  ret
```

## 反编译 C

```c
// WongWork::CItemUpgrade::_CheckCondition @ 0x8546342

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WongWork::CItemUpgrade::_CheckCondition(CUser const*, Inven_Item const&, CItem const*, Inven_Item
   const&, upgrade_table_t const&, upgrade_info_t const&) */

undefined4 __thiscall
WongWork::CItemUpgrade::_CheckCondition
          (CItemUpgrade *this,CUser *param_1,Inven_Item *param_2,CItem *param_3,Inven_Item *param_4,
          upgrade_table_t *param_5,upgrade_info_t *param_6)

{
  ushort uVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  int *piVar5;
  CReduceUpgradeItemPay *this_00;
  int iVar6;
  CDataManager *this_01;
  CInventory *pCVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  longdouble lVar12;
  undefined1 local_61 [2];
  int local_5f;
  int local_24;
  int local_20;
  CEquipItem *local_1c;
  undefined4 local_18;
  int local_14;
  uint local_10;
  
  cVar3 = stAmplifyOption_t::isIdentified((stAmplifyOption_t *)(param_2 + 0x11));
  if (cVar3 != '\x01') {
    return 0xae;
  }
  if (*(int *)(param_4 + 2) != *(int *)(param_6 + 0x2c)) {
    return 0x16;
  }
  if (*(int *)(param_4 + 7) < *(int *)(param_6 + 0x30)) {
    return 0x16;
  }
  local_24 = 0;
  piVar5 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x32);
  cVar3 = (**(code **)(*piVar5 + 0x34))(piVar5,0);
  if ((cVar3 == '\0') ||
     (cVar3 = stAmplifyOption_t::hasAbility((stAmplifyOption_t *)(param_2 + 0x11)), cVar3 == '\x01')
     ) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    this_00 = (CReduceUpgradeItemPay *)
              CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x32);
    local_14 = CReduceUpgradeItemPay::GetReduceRate(this_00);
    if ((0 < local_14) &&
       (local_24 = *(int *)(param_6 + 0x34) - (*(int *)(param_6 + 0x34) * local_14) / 100,
       local_24 < 0)) {
      local_24 = 0;
    }
  }
  else {
    local_24 = *(int *)(param_6 + 0x34);
  }
  iVar6 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  CInventory::GetInvenSlot((int)local_61,iVar6);
  local_20 = local_5f;
  this_01 = (CDataManager *)G_CDataManager();
  local_1c = (CEquipItem *)CDataManager::find_item(this_01,local_20);
  iVar6 = local_24;
  if (local_1c != (CEquipItem *)0x0) {
    lVar12 = (longdouble)CEquipItem::getUpgradeCostDiscount(local_1c);
    local_24 = (int)ROUND((lVar12 * (longdouble)iVar6) / (longdouble)_DAT_08c9d304 +
                          (longdouble)iVar6);
  }
  pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  iVar6 = CInventory::get_money(pCVar7);
  if (iVar6 < local_24) {
    return 10;
  }
  uVar8 = std::vector<upgrade_info_t,std::allocator<upgrade_info_t>>::size
                    ((vector<upgrade_info_t,std::allocator<upgrade_info_t>> *)param_5);
  uVar9 = Inven_Item::GetUpgrade(param_2);
  if (uVar8 <= (uVar9 & 0xff)) {
    return 0xd;
  }
  if (param_2[1] != (Inven_Item)0x1) {
    return 0x13;
  }
  iVar6 = (**(code **)(*(int *)param_3 + 0xc))(param_3);
  if ((iVar6 < 10) || (iVar6 = (**(code **)(*(int *)param_3 + 0xc))(param_3), 0x15 < iVar6)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    return 0x13;
  }
  iVar6 = (**(code **)(*(int *)param_3 + 0xc))(param_3);
  if (iVar6 == 0xb) {
    return 0x13;
  }
  uVar1 = *(ushort *)(param_2 + 0xb);
  uVar8 = CEquipItem::get_endurance((CEquipItem *)param_3);
  if (uVar1 != uVar8) {
    return 7;
  }
  iVar6 = CItem::get_rarity(param_3);
  if (*(int *)(param_5 + (iVar6 + 0x104) * 4 + 0xc) != -1) {
    uVar8 = Inven_Item::GetUpgrade(param_2);
    iVar6 = CItem::get_rarity(param_3);
    if (*(int *)(param_5 + (iVar6 + 0x104) * 4 + 0xc) <= (int)(uVar8 & 0xff)) {
      return 0x5f;
    }
  }
  uVar10 = CItem::get_rarity(param_3);
  uVar4 = Inven_Item::GetUpgrade(param_2);
  iVar6 = upgrade_table_t::GetPenaltyType(param_5,uVar4,uVar10,param_6);
  if (iVar6 != 3) goto LAB_08546728;
  iVar6 = CItem::get_rarity(param_3);
  iVar11 = G_CDataManager();
  iVar6 = DisJoint::getPredictResultItemTypeCount(*(DisJoint **)(iVar11 + 0x1c),iVar6);
  local_10 = iVar6 + 1;
  cVar3 = stAmplifyOption_t::hasAbility((stAmplifyOption_t *)(param_2 + 0x11));
  if (cVar3 != '\0') {
    local_10 = local_10 + 1;
  }
  if (local_10 == 0) {
LAB_08546718:
    bVar2 = false;
  }
  else {
    pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    iVar6 = CInventory::InvenEmptycount(pCVar7,3);
    pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    iVar11 = CInventory::QuickEmptyCount(pCVar7);
    if (local_10 <= (uint)(iVar6 + iVar11)) goto LAB_08546718;
    bVar2 = true;
  }
  if (bVar2) {
    return 0x15;
  }
LAB_08546728:
  local_18 = 0;
  cVar3 = stAmplifyOption_t::hasAbility((stAmplifyOption_t *)(param_2 + 0x11));
  if (cVar3 == '\0') {
    local_18 = 1;
  }
  else {
    local_18 = 2;
  }
  uVar10 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  cVar3 = CEquipItem::isUpgradableLevel((CEquipItem *)param_3,local_18,uVar10);
  if (cVar3 == '\x01') {
    uVar10 = 0;
  }
  else {
    uVar10 = 0x13;
  }
  return uVar10;
}
```
