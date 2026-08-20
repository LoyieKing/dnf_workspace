# use_item

`_ZN10CInventory8use_itemEiii`

`CInventory::use_item(int, int, int)`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x084ff8de` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ff8de  _ZN10CInventory8use_itemEiii
#           CInventory::use_item(int, int, int)
# range [0x084ff8de, 0x084fffb9]
084ff8de +0x000:  push   %ebp
084ff8df +0x001:  mov    %esp,%ebp
084ff8e1 +0x003:  push   %esi
084ff8e2 +0x004:  push   %ebx
084ff8e3 +0x005:  sub    $0x40,%esp
084ff8e6 +0x008:  cmpl   $0x0,0x10(%ebp)
084ff8ea +0x00c:  jns    084ff929 <+0x4b>
084ff8ec +0x00e:  mov    0x10(%ebp),%eax
084ff8ef +0x011:  mov    %eax,0x14(%esp)
084ff8f3 +0x015:  movl   $"count(%d) < 0",0x10(%esp)
084ff8fb +0x01d:  movl   $0xf91,0xc(%esp)
084ff903 +0x025:  movl   $&_ZZN10CInventory8use_itemEiiiE19__PRETTY_FUNCTION__,0x8(%esp)
084ff90b +0x02d:  movl   $"inventory.cpp",0x4(%esp)
084ff913 +0x035:  movl   $0x1,(%esp)
084ff91a +0x03c:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084ff91f +0x041:  mov    $0x1,%eax
084ff924 +0x046:  jmp    084fffb2 <+0x6d4>
084ff929 +0x04b:  cmpl   $0x7,0x14(%ebp)
084ff92d +0x04f:  jne    084ffc51 <+0x373>
084ff933 +0x055:  mov    0x8(%ebp),%eax
084ff936 +0x058:  mov    0x6e4(%eax),%edx
084ff93c +0x05e:  mov    0xc(%ebp),%eax
084ff93f +0x061:  imul   $0x3d,%eax,%eax
084ff942 +0x064:  lea    (%edx,%eax,1),%eax
084ff945 +0x067:  mov    0x2(%eax),%eax
084ff948 +0x06a:  test   %eax,%eax
084ff94a +0x06c:  jne    084ff956 <+0x78>
084ff94c +0x06e:  mov    $0x17,%eax
084ff951 +0x073:  jmp    084fffb2 <+0x6d4>
084ff956 +0x078:  mov    0x8(%ebp),%eax
084ff959 +0x07b:  mov    (%eax),%eax
084ff95b +0x07d:  test   %eax,%eax
084ff95d +0x07f:  je     084ffa05 <+0x127>
084ff963 +0x085:  mov    0x8(%ebp),%eax
084ff966 +0x088:  mov    0x6e4(%eax),%edx
084ff96c +0x08e:  mov    0xc(%ebp),%eax
084ff96f +0x091:  imul   $0x3d,%eax,%eax
084ff972 +0x094:  lea    (%edx,%eax,1),%eax
084ff975 +0x097:  mov    0x2(%eax),%eax
084ff978 +0x09a:  mov    %eax,%ebx
084ff97a +0x09c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084ff97f +0x0a1:  mov    %ebx,0x4(%esp)
084ff983 +0x0a5:  mov    %eax,(%esp)
084ff986 +0x0a8:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084ff98b +0x0ad:  mov    %eax,-0x1c(%ebp)
084ff98e +0x0b0:  cmpl   $0x0,-0x1c(%ebp)
084ff992 +0x0b4:  je     084ffa05 <+0x127>
084ff994 +0x0b6:  movl   $0x0,-0x24(%ebp)
084ff99b +0x0bd:  mov    0x10(%ebp),%eax
084ff99e +0x0c0:  movswl %ax,%ebx
084ff9a1 +0x0c3:  mov    0x8(%ebp),%eax
084ff9a4 +0x0c6:  mov    0x6e4(%eax),%edx
084ff9aa +0x0cc:  mov    0xc(%ebp),%eax
084ff9ad +0x0cf:  imul   $0x3d,%eax,%eax
084ff9b0 +0x0d2:  lea    (%edx,%eax,1),%esi
084ff9b3 +0x0d5:  call   08151add <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1412>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1412
084ff9b8 +0x0da:  lea    -0x24(%ebp),%edx
084ff9bb +0x0dd:  mov    %edx,0x14(%esp)
084ff9bf +0x0e1:  movl   $0x0,0x10(%esp)
084ff9c7 +0x0e9:  mov    %ebx,0xc(%esp)
084ff9cb +0x0ed:  mov    -0x1c(%ebp),%edx
084ff9ce +0x0f0:  mov    %edx,0x8(%esp)
084ff9d2 +0x0f4:  mov    %esi,0x4(%esp)
084ff9d6 +0x0f8:  mov    %eax,(%esp)
084ff9d9 +0x0fb:  call   08618ea0 <_ZN5Store16GetSellItemPriceER10Inven_ItemPK5CItemsbRi>  ; Store::GetSellItemPrice(Inven_Item&, CItem const*, short, bool, int&)
084ff9de +0x100:  mov    -0x24(%ebp),%eax
084ff9e1 +0x103:  mov    %eax,%esi
084ff9e3 +0x105:  mov    0x8(%ebp),%eax
084ff9e6 +0x108:  mov    (%eax),%ebx
084ff9e8 +0x10a:  call   0860d5ef <_Z25GetInstanceValueStatisticv>  ; GetInstanceValueStatistic()
084ff9ed +0x10f:  mov    %esi,0xc(%esp)
084ff9f1 +0x113:  mov    %ebx,0x8(%esp)
084ff9f5 +0x117:  movl   $0x15,0x4(%esp)
084ff9fd +0x11f:  mov    %eax,(%esp)
084ffa00 +0x122:  call   0860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>  ; CValueStatistic::AddValueStatistic(VALUE_STATISTIC_FIELD, CUser*, unsigned int)
084ffa05 +0x127:  mov    0x8(%ebp),%eax
084ffa08 +0x12a:  mov    0x6e4(%eax),%edx
084ffa0e +0x130:  mov    0xc(%ebp),%eax
084ffa11 +0x133:  imul   $0x3d,%eax,%eax
084ffa14 +0x136:  lea    (%edx,%eax,1),%eax
084ffa17 +0x139:  mov    0x7(%eax),%eax
084ffa1a +0x13c:  cmp    0x10(%ebp),%eax
084ffa1d +0x13f:  jne    084ffad2 <+0x1f4>
084ffa23 +0x145:  mov    0x8(%ebp),%eax
084ffa26 +0x148:  mov    0x6e4(%eax),%edx
084ffa2c +0x14e:  mov    0xc(%ebp),%eax
084ffa2f +0x151:  imul   $0x3d,%eax,%eax
084ffa32 +0x154:  lea    (%edx,%eax,1),%ecx
084ffa35 +0x157:  mov    0x8(%ebp),%eax
084ffa38 +0x15a:  lea    0x6e8(%eax),%edx
084ffa3e +0x160:  mov    0xc(%ebp),%eax
084ffa41 +0x163:  mov    %eax,0x8(%esp)
084ffa45 +0x167:  mov    %ecx,0x4(%esp)
084ffa49 +0x16b:  mov    %edx,(%esp)
084ffa4c +0x16e:  call   0833a5bc <_ZN13user_creature12CCreatureMgr7UseItemEP10Inven_Itemi>  ; user_creature::CCreatureMgr::UseItem(Inven_Item*, int)
084ffa51 +0x173:  mov    %eax,-0x18(%ebp)
084ffa54 +0x176:  cmpl   $0x0,-0x18(%ebp)
084ffa58 +0x17a:  je     084ffa62 <+0x184>
084ffa5a +0x17c:  mov    -0x18(%ebp),%eax
084ffa5d +0x17f:  jmp    084fffb2 <+0x6d4>
084ffa62 +0x184:  mov    0x8(%ebp),%eax
084ffa65 +0x187:  mov    (%eax),%eax
084ffa67 +0x189:  test   %eax,%eax
084ffa69 +0x18b:  je     084ffab3 <+0x1d5>
084ffa6b +0x18d:  mov    0x8(%ebp),%eax
084ffa6e +0x190:  mov    0x6e4(%eax),%edx
084ffa74 +0x196:  mov    0xc(%ebp),%eax
084ffa77 +0x199:  imul   $0x3d,%eax,%eax
084ffa7a +0x19c:  lea    (%edx,%eax,1),%ecx
084ffa7d +0x19f:  mov    0x8(%ebp),%eax
084ffa80 +0x1a2:  mov    (%eax),%eax
084ffa82 +0x1a4:  lea    0x79700(%eax),%edx
084ffa88 +0x1aa:  movl   $0x3,0x14(%esp)
084ffa90 +0x1b2:  mov    %ecx,0x10(%esp)
084ffa94 +0x1b6:  mov    0x10(%ebp),%eax
084ffa97 +0x1b9:  mov    %eax,0xc(%esp)
084ffa9b +0x1bd:  movl   $0x0,0x8(%esp)
084ffaa3 +0x1c5:  movl   $0x3,0x4(%esp)
084ffaab +0x1cd:  mov    %edx,(%esp)
084ffaae +0x1d0:  call   0868340a <_ZN15cUserHistoryLog7ItemDelE10INVEN_TYPEiiRK10Inven_Item14eItemDelReason>  ; cUserHistoryLog::ItemDel(INVEN_TYPE, int, int, Inven_Item const&, eItemDelReason)
084ffab3 +0x1d5:  mov    0x8(%ebp),%eax
084ffab6 +0x1d8:  mov    0x6e4(%eax),%edx
084ffabc +0x1de:  mov    0xc(%ebp),%eax
084ffabf +0x1e1:  imul   $0x3d,%eax,%eax
084ffac2 +0x1e4:  lea    (%edx,%eax,1),%eax
084ffac5 +0x1e7:  mov    %eax,(%esp)
084ffac8 +0x1ea:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
084ffacd +0x1ef:  jmp    084ffc47 <+0x369>
084ffad2 +0x1f4:  mov    0x8(%ebp),%eax
084ffad5 +0x1f7:  mov    0x6e4(%eax),%edx
084ffadb +0x1fd:  mov    0xc(%ebp),%eax
084ffade +0x200:  imul   $0x3d,%eax,%eax
084ffae1 +0x203:  lea    (%edx,%eax,1),%eax
084ffae4 +0x206:  mov    0x7(%eax),%eax
084ffae7 +0x209:  cmp    0x10(%ebp),%eax
084ffaea +0x20c:  jle    084ffbc6 <+0x2e8>
084ffaf0 +0x212:  mov    0x8(%ebp),%eax
084ffaf3 +0x215:  mov    0x6e4(%eax),%edx
084ffaf9 +0x21b:  mov    0xc(%ebp),%eax
084ffafc +0x21e:  imul   $0x3d,%eax,%eax
084ffaff +0x221:  lea    (%edx,%eax,1),%ecx
084ffb02 +0x224:  mov    0x8(%ebp),%eax
084ffb05 +0x227:  lea    0x6e8(%eax),%edx
084ffb0b +0x22d:  mov    0xc(%ebp),%eax
084ffb0e +0x230:  mov    %eax,0x8(%esp)
084ffb12 +0x234:  mov    %ecx,0x4(%esp)
084ffb16 +0x238:  mov    %edx,(%esp)
084ffb19 +0x23b:  call   0833a5bc <_ZN13user_creature12CCreatureMgr7UseItemEP10Inven_Itemi>  ; user_creature::CCreatureMgr::UseItem(Inven_Item*, int)
084ffb1e +0x240:  mov    %eax,-0x14(%ebp)
084ffb21 +0x243:  cmpl   $0x0,-0x14(%ebp)
084ffb25 +0x247:  je     084ffb2f <+0x251>
084ffb27 +0x249:  mov    -0x14(%ebp),%eax
084ffb2a +0x24c:  jmp    084fffb2 <+0x6d4>
084ffb2f +0x251:  mov    0x8(%ebp),%eax
084ffb32 +0x254:  mov    0x6e4(%eax),%edx
084ffb38 +0x25a:  mov    0xc(%ebp),%eax
084ffb3b +0x25d:  imul   $0x3d,%eax,%eax
084ffb3e +0x260:  add    %eax,%edx
084ffb40 +0x262:  mov    0x8(%ebp),%eax
084ffb43 +0x265:  mov    0x6e4(%eax),%ecx
084ffb49 +0x26b:  mov    0xc(%ebp),%eax
084ffb4c +0x26e:  imul   $0x3d,%eax,%eax
084ffb4f +0x271:  lea    (%ecx,%eax,1),%eax
084ffb52 +0x274:  mov    0x7(%eax),%eax
084ffb55 +0x277:  sub    0x10(%ebp),%eax
084ffb58 +0x27a:  mov    %eax,0x7(%edx)
084ffb5b +0x27d:  mov    0x8(%ebp),%eax
084ffb5e +0x280:  mov    (%eax),%eax
084ffb60 +0x282:  test   %eax,%eax
084ffb62 +0x284:  je     084ffc47 <+0x369>
084ffb68 +0x28a:  mov    0x8(%ebp),%eax
084ffb6b +0x28d:  mov    0x6e4(%eax),%edx
084ffb71 +0x293:  mov    0xc(%ebp),%eax
084ffb74 +0x296:  imul   $0x3d,%eax,%eax
084ffb77 +0x299:  lea    (%edx,%eax,1),%ebx
084ffb7a +0x29c:  mov    0x8(%ebp),%eax
084ffb7d +0x29f:  mov    0x6e4(%eax),%edx
084ffb83 +0x2a5:  mov    0xc(%ebp),%eax
084ffb86 +0x2a8:  imul   $0x3d,%eax,%eax
084ffb89 +0x2ab:  lea    (%edx,%eax,1),%eax
084ffb8c +0x2ae:  mov    0x7(%eax),%eax
084ffb8f +0x2b1:  mov    0x8(%ebp),%edx
084ffb92 +0x2b4:  mov    (%edx),%edx
084ffb94 +0x2b6:  lea    0x79700(%edx),%ecx
084ffb9a +0x2bc:  movl   $0x3,0x14(%esp)
084ffba2 +0x2c4:  mov    %ebx,0x10(%esp)
084ffba6 +0x2c8:  mov    0x10(%ebp),%edx
084ffba9 +0x2cb:  mov    %edx,0xc(%esp)
084ffbad +0x2cf:  mov    %eax,0x8(%esp)
084ffbb1 +0x2d3:  movl   $0x3,0x4(%esp)
084ffbb9 +0x2db:  mov    %ecx,(%esp)
084ffbbc +0x2de:  call   0868340a <_ZN15cUserHistoryLog7ItemDelE10INVEN_TYPEiiRK10Inven_Item14eItemDelReason>  ; cUserHistoryLog::ItemDel(INVEN_TYPE, int, int, Inven_Item const&, eItemDelReason)
084ffbc1 +0x2e3:  jmp    084ffc47 <+0x369>
084ffbc6 +0x2e8:  mov    0x8(%ebp),%eax
084ffbc9 +0x2eb:  mov    0x6e4(%eax),%edx
084ffbcf +0x2f1:  mov    0xc(%ebp),%eax
084ffbd2 +0x2f4:  imul   $0x3d,%eax,%eax
084ffbd5 +0x2f7:  lea    (%edx,%eax,1),%eax
084ffbd8 +0x2fa:  mov    %eax,(%esp)
084ffbdb +0x2fd:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
084ffbe0 +0x302:  mov    0x8(%ebp),%eax
084ffbe3 +0x305:  mov    0x6e4(%eax),%edx
084ffbe9 +0x30b:  mov    0xc(%ebp),%eax
084ffbec +0x30e:  imul   $0x3d,%eax,%eax
084ffbef +0x311:  lea    (%edx,%eax,1),%eax
084ffbf2 +0x314:  mov    0x7(%eax),%ebx
084ffbf5 +0x317:  mov    0x8(%ebp),%eax
084ffbf8 +0x31a:  mov    (%eax),%eax
084ffbfa +0x31c:  mov    %eax,(%esp)
084ffbfd +0x31f:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
084ffc02 +0x324:  mov    0x10(%ebp),%edx
084ffc05 +0x327:  mov    %edx,0x1c(%esp)
084ffc09 +0x32b:  mov    %ebx,0x18(%esp)
084ffc0d +0x32f:  mov    %eax,0x14(%esp)
084ffc11 +0x333:  movl   $"%s - m_CreatureSlot[slot_no].add_info(%d) < count(%d)",0x10(%esp)
084ffc19 +0x33b:  movl   $0xfd5,0xc(%esp)
084ffc21 +0x343:  movl   $&_ZZN10CInventory8use_itemEiiiE19__PRETTY_FUNCTION__,0x8(%esp)
084ffc29 +0x34b:  movl   $"inventory.cpp",0x4(%esp)
084ffc31 +0x353:  movl   $0x1,(%esp)
084ffc38 +0x35a:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084ffc3d +0x35f:  mov    $0x1,%eax
084ffc42 +0x364:  jmp    084fffb2 <+0x6d4>
084ffc47 +0x369:  mov    $0x0,%eax
084ffc4c +0x36e:  jmp    084fffb2 <+0x6d4>
084ffc51 +0x373:  cmpl   $0x2,0xc(%ebp)
084ffc55 +0x377:  jle    084ffc5d <+0x37f>
084ffc57 +0x379:  cmpl   $0x8,0xc(%ebp)
084ffc5b +0x37d:  jle    084ffc73 <+0x395>
084ffc5d +0x37f:  cmpl   $0x38,0xc(%ebp)
084ffc61 +0x383:  jle    084ffc69 <+0x38b>
084ffc63 +0x385:  cmpl   $0x68,0xc(%ebp)
084ffc67 +0x389:  jle    084ffc73 <+0x395>
084ffc69 +0x38b:  mov    $0x4,%eax
084ffc6e +0x390:  jmp    084fffb2 <+0x6d4>
084ffc73 +0x395:  mov    0x8(%ebp),%eax
084ffc76 +0x398:  mov    0x650(%eax),%edx
084ffc7c +0x39e:  mov    0xc(%ebp),%eax
084ffc7f +0x3a1:  imul   $0x3d,%eax,%eax
084ffc82 +0x3a4:  lea    (%edx,%eax,1),%eax
084ffc85 +0x3a7:  mov    0x2(%eax),%eax
084ffc88 +0x3aa:  test   %eax,%eax
084ffc8a +0x3ac:  jne    084ffc96 <+0x3b8>
084ffc8c +0x3ae:  mov    $0x17,%eax
084ffc91 +0x3b3:  jmp    084fffb2 <+0x6d4>
084ffc96 +0x3b8:  mov    0x8(%ebp),%eax
084ffc99 +0x3bb:  mov    0x650(%eax),%edx
084ffc9f +0x3c1:  mov    0xc(%ebp),%eax
084ffca2 +0x3c4:  imul   $0x3d,%eax,%eax
084ffca5 +0x3c7:  lea    (%edx,%eax,1),%eax
084ffca8 +0x3ca:  mov    0x2(%eax),%eax
084ffcab +0x3cd:  mov    %eax,%ebx
084ffcad +0x3cf:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084ffcb2 +0x3d4:  mov    %ebx,0x4(%esp)
084ffcb6 +0x3d8:  mov    %eax,(%esp)
084ffcb9 +0x3db:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084ffcbe +0x3e0:  mov    %eax,-0x20(%ebp)
084ffcc1 +0x3e3:  cmpl   $0x0,-0x20(%ebp)
084ffcc5 +0x3e7:  jne    084ffcd1 <+0x3f3>
084ffcc7 +0x3e9:  mov    $0x1,%eax
084ffccc +0x3ee:  jmp    084fffb2 <+0x6d4>
084ffcd1 +0x3f3:  mov    -0x20(%ebp),%eax
084ffcd4 +0x3f6:  mov    (%eax),%eax
084ffcd6 +0x3f8:  add    $0xc,%eax
084ffcd9 +0x3fb:  mov    (%eax),%edx
084ffcdb +0x3fd:  mov    -0x20(%ebp),%eax
084ffcde +0x400:  mov    %eax,(%esp)
084ffce1 +0x403:  call   *%edx
084ffce3 +0x405:  cmp    $0x12,%eax
084ffce6 +0x408:  sete   %al
084ffce9 +0x40b:  test   %al,%al
084ffceb +0x40d:  je     084ffcf7 <+0x419>
084ffced +0x40f:  mov    $0x0,%eax
084ffcf2 +0x414:  jmp    084fffb2 <+0x6d4>
084ffcf7 +0x419:  mov    0x8(%ebp),%eax
084ffcfa +0x41c:  mov    (%eax),%eax
084ffcfc +0x41e:  test   %eax,%eax
084ffcfe +0x420:  je     084ffd71 <+0x493>
084ffd00 +0x422:  movl   $0x0,-0x28(%ebp)
084ffd07 +0x429:  mov    0x10(%ebp),%eax
084ffd0a +0x42c:  movswl %ax,%ebx
084ffd0d +0x42f:  mov    0x8(%ebp),%eax
084ffd10 +0x432:  mov    0x650(%eax),%edx
084ffd16 +0x438:  mov    0xc(%ebp),%eax
084ffd19 +0x43b:  imul   $0x3d,%eax,%eax
084ffd1c +0x43e:  lea    (%edx,%eax,1),%esi
084ffd1f +0x441:  call   08151add <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1412>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1412
084ffd24 +0x446:  lea    -0x28(%ebp),%edx
084ffd27 +0x449:  mov    %edx,0x14(%esp)
084ffd2b +0x44d:  movl   $0x0,0x10(%esp)
084ffd33 +0x455:  mov    %ebx,0xc(%esp)
084ffd37 +0x459:  mov    -0x20(%ebp),%edx
084ffd3a +0x45c:  mov    %edx,0x8(%esp)
084ffd3e +0x460:  mov    %esi,0x4(%esp)
084ffd42 +0x464:  mov    %eax,(%esp)
084ffd45 +0x467:  call   08618ea0 <_ZN5Store16GetSellItemPriceER10Inven_ItemPK5CItemsbRi>  ; Store::GetSellItemPrice(Inven_Item&, CItem const*, short, bool, int&)
084ffd4a +0x46c:  mov    -0x28(%ebp),%eax
084ffd4d +0x46f:  mov    %eax,%esi
084ffd4f +0x471:  mov    0x8(%ebp),%eax
084ffd52 +0x474:  mov    (%eax),%ebx
084ffd54 +0x476:  call   0860d5ef <_Z25GetInstanceValueStatisticv>  ; GetInstanceValueStatistic()
084ffd59 +0x47b:  mov    %esi,0xc(%esp)
084ffd5d +0x47f:  mov    %ebx,0x8(%esp)
084ffd61 +0x483:  movl   $0x15,0x4(%esp)
084ffd69 +0x48b:  mov    %eax,(%esp)
084ffd6c +0x48e:  call   0860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>  ; CValueStatistic::AddValueStatistic(VALUE_STATISTIC_FIELD, CUser*, unsigned int)
084ffd71 +0x493:  mov    0x8(%ebp),%eax
084ffd74 +0x496:  mov    0x650(%eax),%edx
084ffd7a +0x49c:  mov    0xc(%ebp),%eax
084ffd7d +0x49f:  imul   $0x3d,%eax,%eax
084ffd80 +0x4a2:  lea    (%edx,%eax,1),%eax
084ffd83 +0x4a5:  mov    0x7(%eax),%eax
084ffd86 +0x4a8:  cmp    0x10(%ebp),%eax
084ffd89 +0x4ab:  jne    084ffe3e <+0x560>
084ffd8f +0x4b1:  mov    0x8(%ebp),%eax
084ffd92 +0x4b4:  mov    0x650(%eax),%edx
084ffd98 +0x4ba:  mov    0xc(%ebp),%eax
084ffd9b +0x4bd:  imul   $0x3d,%eax,%eax
084ffd9e +0x4c0:  lea    (%edx,%eax,1),%ecx
084ffda1 +0x4c3:  mov    0x8(%ebp),%eax
084ffda4 +0x4c6:  lea    0x6e8(%eax),%edx
084ffdaa +0x4cc:  mov    0xc(%ebp),%eax
084ffdad +0x4cf:  mov    %eax,0x8(%esp)
084ffdb1 +0x4d3:  mov    %ecx,0x4(%esp)
084ffdb5 +0x4d7:  mov    %edx,(%esp)
084ffdb8 +0x4da:  call   0833a5bc <_ZN13user_creature12CCreatureMgr7UseItemEP10Inven_Itemi>  ; user_creature::CCreatureMgr::UseItem(Inven_Item*, int)
084ffdbd +0x4df:  mov    %eax,-0x10(%ebp)
084ffdc0 +0x4e2:  cmpl   $0x0,-0x10(%ebp)
084ffdc4 +0x4e6:  je     084ffdce <+0x4f0>
084ffdc6 +0x4e8:  mov    -0x10(%ebp),%eax
084ffdc9 +0x4eb:  jmp    084fffb2 <+0x6d4>
084ffdce +0x4f0:  mov    0x8(%ebp),%eax
084ffdd1 +0x4f3:  mov    (%eax),%eax
084ffdd3 +0x4f5:  test   %eax,%eax
084ffdd5 +0x4f7:  je     084ffe1f <+0x541>
084ffdd7 +0x4f9:  mov    0x8(%ebp),%eax
084ffdda +0x4fc:  mov    0x650(%eax),%edx
084ffde0 +0x502:  mov    0xc(%ebp),%eax
084ffde3 +0x505:  imul   $0x3d,%eax,%eax
084ffde6 +0x508:  lea    (%edx,%eax,1),%ecx
084ffde9 +0x50b:  mov    0x8(%ebp),%eax
084ffdec +0x50e:  mov    (%eax),%eax
084ffdee +0x510:  lea    0x79700(%eax),%edx
084ffdf4 +0x516:  movl   $0x3,0x14(%esp)
084ffdfc +0x51e:  mov    %ecx,0x10(%esp)
084ffe00 +0x522:  mov    0x10(%ebp),%eax
084ffe03 +0x525:  mov    %eax,0xc(%esp)
084ffe07 +0x529:  movl   $0x0,0x8(%esp)
084ffe0f +0x531:  movl   $0x1,0x4(%esp)
084ffe17 +0x539:  mov    %edx,(%esp)
084ffe1a +0x53c:  call   0868340a <_ZN15cUserHistoryLog7ItemDelE10INVEN_TYPEiiRK10Inven_Item14eItemDelReason>  ; cUserHistoryLog::ItemDel(INVEN_TYPE, int, int, Inven_Item const&, eItemDelReason)
084ffe1f +0x541:  mov    0x8(%ebp),%eax
084ffe22 +0x544:  mov    0x650(%eax),%edx
084ffe28 +0x54a:  mov    0xc(%ebp),%eax
084ffe2b +0x54d:  imul   $0x3d,%eax,%eax
084ffe2e +0x550:  lea    (%edx,%eax,1),%eax
084ffe31 +0x553:  mov    %eax,(%esp)
084ffe34 +0x556:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
084ffe39 +0x55b:  jmp    084fffad <+0x6cf>
084ffe3e +0x560:  mov    0x8(%ebp),%eax
084ffe41 +0x563:  mov    0x650(%eax),%edx
084ffe47 +0x569:  mov    0xc(%ebp),%eax
084ffe4a +0x56c:  imul   $0x3d,%eax,%eax
084ffe4d +0x56f:  lea    (%edx,%eax,1),%eax
084ffe50 +0x572:  mov    0x7(%eax),%eax
084ffe53 +0x575:  cmp    0x10(%ebp),%eax
084ffe56 +0x578:  jle    084fff2f <+0x651>
084ffe5c +0x57e:  mov    0x8(%ebp),%eax
084ffe5f +0x581:  mov    0x650(%eax),%edx
084ffe65 +0x587:  mov    0xc(%ebp),%eax
084ffe68 +0x58a:  imul   $0x3d,%eax,%eax
084ffe6b +0x58d:  lea    (%edx,%eax,1),%ecx
084ffe6e +0x590:  mov    0x8(%ebp),%eax
084ffe71 +0x593:  lea    0x6e8(%eax),%edx
084ffe77 +0x599:  mov    0xc(%ebp),%eax
084ffe7a +0x59c:  mov    %eax,0x8(%esp)
084ffe7e +0x5a0:  mov    %ecx,0x4(%esp)
084ffe82 +0x5a4:  mov    %edx,(%esp)
084ffe85 +0x5a7:  call   0833a5bc <_ZN13user_creature12CCreatureMgr7UseItemEP10Inven_Itemi>  ; user_creature::CCreatureMgr::UseItem(Inven_Item*, int)
084ffe8a +0x5ac:  mov    %eax,-0xc(%ebp)
084ffe8d +0x5af:  cmpl   $0x0,-0xc(%ebp)
084ffe91 +0x5b3:  je     084ffe9b <+0x5bd>
084ffe93 +0x5b5:  mov    -0xc(%ebp),%eax
084ffe96 +0x5b8:  jmp    084fffb2 <+0x6d4>
084ffe9b +0x5bd:  mov    0x8(%ebp),%eax
084ffe9e +0x5c0:  mov    0x650(%eax),%edx
084ffea4 +0x5c6:  mov    0xc(%ebp),%eax
084ffea7 +0x5c9:  imul   $0x3d,%eax,%eax
084ffeaa +0x5cc:  add    %eax,%edx
084ffeac +0x5ce:  mov    0x8(%ebp),%eax
084ffeaf +0x5d1:  mov    0x650(%eax),%ecx
084ffeb5 +0x5d7:  mov    0xc(%ebp),%eax
084ffeb8 +0x5da:  imul   $0x3d,%eax,%eax
084ffebb +0x5dd:  lea    (%ecx,%eax,1),%eax
084ffebe +0x5e0:  mov    0x7(%eax),%eax
084ffec1 +0x5e3:  sub    0x10(%ebp),%eax
084ffec4 +0x5e6:  mov    %eax,0x7(%edx)
084ffec7 +0x5e9:  mov    0x8(%ebp),%eax
084ffeca +0x5ec:  mov    (%eax),%eax
084ffecc +0x5ee:  test   %eax,%eax
084ffece +0x5f0:  je     084fffad <+0x6cf>
084ffed4 +0x5f6:  mov    0x8(%ebp),%eax
084ffed7 +0x5f9:  mov    0x650(%eax),%edx
084ffedd +0x5ff:  mov    0xc(%ebp),%eax
084ffee0 +0x602:  imul   $0x3d,%eax,%eax
084ffee3 +0x605:  lea    (%edx,%eax,1),%ebx
084ffee6 +0x608:  mov    0x8(%ebp),%eax
084ffee9 +0x60b:  mov    0x650(%eax),%edx
084ffeef +0x611:  mov    0xc(%ebp),%eax
084ffef2 +0x614:  imul   $0x3d,%eax,%eax
084ffef5 +0x617:  lea    (%edx,%eax,1),%eax
084ffef8 +0x61a:  mov    0x7(%eax),%eax
084ffefb +0x61d:  mov    0x8(%ebp),%edx
084ffefe +0x620:  mov    (%edx),%edx
084fff00 +0x622:  lea    0x79700(%edx),%ecx
084fff06 +0x628:  movl   $0x3,0x14(%esp)
084fff0e +0x630:  mov    %ebx,0x10(%esp)
084fff12 +0x634:  mov    0x10(%ebp),%edx
084fff15 +0x637:  mov    %edx,0xc(%esp)
084fff19 +0x63b:  mov    %eax,0x8(%esp)
084fff1d +0x63f:  movl   $0x1,0x4(%esp)
084fff25 +0x647:  mov    %ecx,(%esp)
084fff28 +0x64a:  call   0868340a <_ZN15cUserHistoryLog7ItemDelE10INVEN_TYPEiiRK10Inven_Item14eItemDelReason>  ; cUserHistoryLog::ItemDel(INVEN_TYPE, int, int, Inven_Item const&, eItemDelReason)
084fff2d +0x64f:  jmp    084fffad <+0x6cf>
084fff2f +0x651:  mov    0x8(%ebp),%eax
084fff32 +0x654:  mov    0x650(%eax),%edx
084fff38 +0x65a:  mov    0xc(%ebp),%eax
084fff3b +0x65d:  imul   $0x3d,%eax,%eax
084fff3e +0x660:  lea    (%edx,%eax,1),%eax
084fff41 +0x663:  mov    %eax,(%esp)
084fff44 +0x666:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
084fff49 +0x66b:  mov    0x8(%ebp),%eax
084fff4c +0x66e:  mov    0x650(%eax),%edx
084fff52 +0x674:  mov    0xc(%ebp),%eax
084fff55 +0x677:  imul   $0x3d,%eax,%eax
084fff58 +0x67a:  lea    (%edx,%eax,1),%eax
084fff5b +0x67d:  mov    0x7(%eax),%ebx
084fff5e +0x680:  mov    0x8(%ebp),%eax
084fff61 +0x683:  mov    (%eax),%eax
084fff63 +0x685:  mov    %eax,(%esp)
084fff66 +0x688:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
084fff6b +0x68d:  mov    0x10(%ebp),%edx
084fff6e +0x690:  mov    %edx,0x1c(%esp)
084fff72 +0x694:  mov    %ebx,0x18(%esp)
084fff76 +0x698:  mov    %eax,0x14(%esp)
084fff7a +0x69c:  movl   $"%s - m_InvenSlot[slot_no].add_info(%d) < count(%d)",0x10(%esp)
084fff82 +0x6a4:  movl   $0x1021,0xc(%esp)
084fff8a +0x6ac:  movl   $&_ZZN10CInventory8use_itemEiiiE19__PRETTY_FUNCTION__,0x8(%esp)
084fff92 +0x6b4:  movl   $"inventory.cpp",0x4(%esp)
084fff9a +0x6bc:  movl   $0x1,(%esp)
084fffa1 +0x6c3:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084fffa6 +0x6c8:  mov    $0x1,%eax
084fffab +0x6cd:  jmp    084fffb2 <+0x6d4>
084fffad +0x6cf:  mov    $0x0,%eax
084fffb2 +0x6d4:  add    $0x40,%esp
084fffb5 +0x6d7:  pop    %ebx
084fffb6 +0x6d8:  pop    %esi
084fffb7 +0x6d9:  pop    %ebp
084fffb8 +0x6da:  ret
084fffb9 +0x6db:  nop
```

## 反编译 C

```c
// CInventory::use_item @ 0x84ff8de

/* CInventory::use_item(int, int, int) */

int __thiscall CInventory::use_item(CInventory *this,int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  CDataManager *pCVar2;
  Store *pSVar3;
  CValueStatistic *pCVar4;
  undefined4 uVar5;
  int iVar6;
  int local_2c;
  int local_28;
  CItem *local_24;
  CItem *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  if (param_2 < 0) {
    LogManager::logFormat
              (1,"inventory.cpp","int CInventory::use_item(int, int, int)",0xf91,"count(%d) < 0",
               param_2);
    return 1;
  }
  if (param_3 == 7) {
    if (*(int *)(*(int *)(this + 0x6e4) + param_1 * 0x3d + 2) == 0) {
      return 0x17;
    }
    if (*(int *)this != 0) {
      iVar6 = *(int *)(*(int *)(this + 0x6e4) + param_1 * 0x3d + 2);
      pCVar2 = (CDataManager *)G_CDataManager();
      local_20 = (CItem *)CDataManager::find_item(pCVar2,iVar6);
      if (local_20 != (CItem *)0x0) {
        local_28 = 0;
        iVar6 = *(int *)(this + 0x6e4);
        pSVar3 = (Store *)G_Store();
        Store::GetSellItemPrice
                  (pSVar3,(Inven_Item *)(iVar6 + param_1 * 0x3d),local_20,(short)param_2,false,
                   &local_28);
        iVar6 = local_28;
        uVar1 = *(undefined4 *)this;
        pCVar4 = (CValueStatistic *)GetInstanceValueStatistic();
        CValueStatistic::AddValueStatistic(pCVar4,0x15,uVar1,iVar6);
      }
    }
    if (*(int *)(*(int *)(this + 0x6e4) + param_1 * 0x3d + 7) == param_2) {
      local_1c = user_creature::CCreatureMgr::UseItem
                           ((Inven_Item *)(this + 0x6e8),*(int *)(this + 0x6e4) + param_1 * 0x3d);
      if (local_1c != 0) {
        return local_1c;
      }
      if (*(int *)this != 0) {
        cUserHistoryLog::ItemDel
                  ((cUserHistoryLog *)(*(int *)this + 0x79700),3,0,param_2,
                   *(int *)(this + 0x6e4) + param_1 * 0x3d,3);
      }
      Inven_Item::reset((Inven_Item *)(*(int *)(this + 0x6e4) + param_1 * 0x3d));
    }
    else {
      if (*(int *)(*(int *)(this + 0x6e4) + param_1 * 0x3d + 7) <= param_2) {
        Inven_Item::reset((Inven_Item *)(*(int *)(this + 0x6e4) + param_1 * 0x3d));
        uVar1 = *(undefined4 *)(*(int *)(this + 0x6e4) + param_1 * 0x3d + 7);
        uVar5 = CUserCharacInfo::getCurCharacName(*(CUserCharacInfo **)this);
        LogManager::logFormat
                  (1,"inventory.cpp","int CInventory::use_item(int, int, int)",0xfd5,
                   "%s - m_CreatureSlot[slot_no].add_info(%d) < count(%d)",uVar5,uVar1,param_2);
        return 1;
      }
      local_18 = user_creature::CCreatureMgr::UseItem
                           ((Inven_Item *)(this + 0x6e8),*(int *)(this + 0x6e4) + param_1 * 0x3d);
      if (local_18 != 0) {
        return local_18;
      }
      *(int *)(*(int *)(this + 0x6e4) + param_1 * 0x3d + 7) =
           *(int *)(*(int *)(this + 0x6e4) + param_1 * 0x3d + 7) - param_2;
      if (*(int *)this != 0) {
        cUserHistoryLog::ItemDel
                  ((cUserHistoryLog *)(*(int *)this + 0x79700),3,
                   *(undefined4 *)(*(int *)(this + 0x6e4) + param_1 * 0x3d + 7),param_2,
                   *(int *)(this + 0x6e4) + param_1 * 0x3d,3);
      }
    }
    return 0;
  }
  if (((param_1 < 3) || (8 < param_1)) && ((param_1 < 0x39 || (0x68 < param_1)))) {
    return 4;
  }
  if (*(int *)(*(int *)(this + 0x650) + param_1 * 0x3d + 2) == 0) {
    return 0x17;
  }
  iVar6 = *(int *)(*(int *)(this + 0x650) + param_1 * 0x3d + 2);
  pCVar2 = (CDataManager *)G_CDataManager();
  local_24 = (CItem *)CDataManager::find_item(pCVar2,iVar6);
  if (local_24 == (CItem *)0x0) {
    return 1;
  }
  iVar6 = (**(code **)(*(int *)local_24 + 0xc))(local_24);
  if (iVar6 == 0x12) {
    return 0;
  }
  if (*(int *)this != 0) {
    local_2c = 0;
    iVar6 = *(int *)(this + 0x650);
    pSVar3 = (Store *)G_Store();
    Store::GetSellItemPrice
              (pSVar3,(Inven_Item *)(iVar6 + param_1 * 0x3d),local_24,(short)param_2,false,&local_2c
              );
    iVar6 = local_2c;
    uVar1 = *(undefined4 *)this;
    pCVar4 = (CValueStatistic *)GetInstanceValueStatistic();
    CValueStatistic::AddValueStatistic(pCVar4,0x15,uVar1,iVar6);
  }
  if (*(int *)(*(int *)(this + 0x650) + param_1 * 0x3d + 7) == param_2) {
    local_14 = user_creature::CCreatureMgr::UseItem
                         ((Inven_Item *)(this + 0x6e8),*(int *)(this + 0x650) + param_1 * 0x3d);
    if (local_14 != 0) {
      return local_14;
    }
    if (*(int *)this != 0) {
      cUserHistoryLog::ItemDel
                ((cUserHistoryLog *)(*(int *)this + 0x79700),1,0,param_2,
                 *(int *)(this + 0x650) + param_1 * 0x3d,3);
    }
    Inven_Item::reset((Inven_Item *)(*(int *)(this + 0x650) + param_1 * 0x3d));
  }
  else {
    if (*(int *)(*(int *)(this + 0x650) + param_1 * 0x3d + 7) <= param_2) {
      Inven_Item::reset((Inven_Item *)(*(int *)(this + 0x650) + param_1 * 0x3d));
      uVar1 = *(undefined4 *)(*(int *)(this + 0x650) + param_1 * 0x3d + 7);
      uVar5 = CUserCharacInfo::getCurCharacName(*(CUserCharacInfo **)this);
      LogManager::logFormat
                (1,"inventory.cpp","int CInventory::use_item(int, int, int)",0x1021,
                 "%s - m_InvenSlot[slot_no].add_info(%d) < count(%d)",uVar5,uVar1,param_2);
      return 1;
    }
    local_10 = user_creature::CCreatureMgr::UseItem
                         ((Inven_Item *)(this + 0x6e8),*(int *)(this + 0x650) + param_1 * 0x3d);
    if (local_10 != 0) {
      return local_10;
    }
    *(int *)(*(int *)(this + 0x650) + param_1 * 0x3d + 7) =
         *(int *)(*(int *)(this + 0x650) + param_1 * 0x3d + 7) - param_2;
    if (*(int *)this != 0) {
      cUserHistoryLog::ItemDel
                ((cUserHistoryLog *)(*(int *)this + 0x79700),1,
                 *(undefined4 *)(*(int *)(this + 0x650) + param_1 * 0x3d + 7),param_2,
                 *(int *)(this + 0x650) + param_1 * 0x3d,3);
    }
  }
  return 0;
}
```
