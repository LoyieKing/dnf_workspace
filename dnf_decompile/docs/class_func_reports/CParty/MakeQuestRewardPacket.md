# MakeQuestRewardPacket

`_ZN6CParty21MakeQuestRewardPacketEP11PacketGuardP5CUser`

`CParty::MakeQuestRewardPacket(PacketGuard*, CUser*)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085bd7ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085bd7ae  _ZN6CParty21MakeQuestRewardPacketEP11PacketGuardP5CUser
#           CParty::MakeQuestRewardPacket(PacketGuard*, CUser*)
# range [0x085bd7ae, 0x085bdbff]
085bd7ae +0x000:  push   %ebp
085bd7af +0x001:  mov    %esp,%ebp
085bd7b1 +0x003:  push   %esi
085bd7b2 +0x004:  push   %ebx
085bd7b3 +0x005:  sub    $0xe0,%esp
085bd7b9 +0x00b:  movl   $0x0,-0x28(%ebp)
085bd7c0 +0x012:  movl   $0x0,-0x24(%ebp)
085bd7c7 +0x019:  mov    0xc(%ebp),%eax
085bd7ca +0x01c:  mov    %eax,(%esp)
085bd7cd +0x01f:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
085bd7d2 +0x024:  mov    %eax,-0x38(%ebp)
085bd7d5 +0x027:  mov    0xc(%ebp),%eax
085bd7d8 +0x02a:  movl   $0x0,0x4(%esp)
085bd7e0 +0x032:  mov    %eax,(%esp)
085bd7e3 +0x035:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085bd7e8 +0x03a:  movl   $0x0,-0x20(%ebp)
085bd7ef +0x041:  jmp    085bdbc7 <+0x419>
085bd7f4 +0x046:  mov    0x10(%ebp),%eax
085bd7f7 +0x049:  mov    %eax,(%esp)
085bd7fa +0x04c:  call   082604ec <_GLOBAL__I__ZN35Dispatcher_UseRightOfChangeGrowType4readER9PacketBufR8MSG_BASE+0x21c>  ; global constructors keyed to Dispatcher_UseRightOfChangeGrowType::read(PacketBuf&, MSG_BASE&)+0x21c
085bd7ff +0x051:  mov    %eax,-0x1c(%ebp)
085bd802 +0x054:  mov    -0x20(%ebp),%edx
085bd805 +0x057:  mov    -0x1c(%ebp),%eax
085bd808 +0x05a:  add    $0x1d4c,%edx
085bd80e +0x060:  mov    0x8(%eax,%edx,4),%eax
085bd812 +0x064:  test   %eax,%eax
085bd814 +0x066:  je     085bdbb9 <+0x40b>
085bd81a +0x06c:  mov    -0x20(%ebp),%edx
085bd81d +0x06f:  mov    -0x1c(%ebp),%eax
085bd820 +0x072:  add    $0x1d60,%edx
085bd826 +0x078:  mov    0x8(%eax,%edx,4),%eax
085bd82a +0x07c:  test   %eax,%eax
085bd82c +0x07e:  je     085bdbbc <+0x40e>
085bd832 +0x084:  mov    -0x20(%ebp),%edx
085bd835 +0x087:  mov    -0x1c(%ebp),%eax
085bd838 +0x08a:  add    $0x1d4c,%edx
085bd83e +0x090:  mov    0x8(%eax,%edx,4),%ebx
085bd842 +0x094:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085bd847 +0x099:  mov    %ebx,0x4(%esp)
085bd84b +0x09d:  mov    %eax,(%esp)
085bd84e +0x0a0:  call   0835fdc6 <_ZNK12CDataManager10find_questEi>  ; CDataManager::find_quest(int) const
085bd853 +0x0a5:  mov    %eax,-0x18(%ebp)
085bd856 +0x0a8:  cmpl   $0x0,-0x18(%ebp)
085bd85a +0x0ac:  je     085bdbbf <+0x411>
085bd860 +0x0b2:  mov    -0x1c(%ebp),%eax
085bd863 +0x0b5:  movzwl 0x75da(%eax),%eax
085bd86a +0x0bc:  movswl %ax,%ebx
085bd86d +0x0bf:  mov    0x8(%ebp),%eax
085bd870 +0x0c2:  add    $0xb24,%eax
085bd875 +0x0c7:  mov    %eax,(%esp)
085bd878 +0x0ca:  call   0822d0d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2782>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2782
085bd87d +0x0cf:  mov    %ebx,0x8(%esp)
085bd881 +0x0d3:  mov    %eax,0x4(%esp)
085bd885 +0x0d7:  mov    -0x18(%ebp),%eax
085bd888 +0x0da:  mov    %eax,(%esp)
085bd88b +0x0dd:  call   08353342 <_ZNK5Quest16check_clear_itemEii>  ; Quest::check_clear_item(int, int) const
085bd890 +0x0e2:  xor    $0x1,%eax
085bd893 +0x0e5:  test   %al,%al
085bd895 +0x0e7:  jne    085bdbc2 <+0x414>
085bd89b +0x0ed:  mov    -0x20(%ebp),%edx
085bd89e +0x0f0:  mov    -0x1c(%ebp),%eax
085bd8a1 +0x0f3:  add    $0x1d4c,%edx
085bd8a7 +0x0f9:  mov    0x8(%eax,%edx,4),%eax
085bd8ab +0x0fd:  mov    %eax,-0x24(%ebp)
085bd8ae +0x100:  cmpl   $0x0,-0x24(%ebp)
085bd8b2 +0x104:  jle    085bdbc3 <+0x415>
085bd8b8 +0x10a:  lea    -0x44(%ebp),%eax
085bd8bb +0x10d:  mov    %eax,(%esp)
085bd8be +0x110:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
085bd8c3 +0x115:  lea    -0x4c(%ebp),%eax
085bd8c6 +0x118:  mov    %eax,(%esp)
085bd8c9 +0x11b:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
085bd8ce +0x120:  cmpl   $0x0,-0x18(%ebp)
085bd8d2 +0x124:  je     085bdbac <+0x3fe>
085bd8d8 +0x12a:  mov    0x8(%ebp),%eax
085bd8db +0x12d:  add    $0xb24,%eax
085bd8e0 +0x132:  mov    %eax,(%esp)
085bd8e3 +0x135:  call   0822d0d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2782>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2782
085bd8e8 +0x13a:  lea    -0x34(%ebp),%edx
085bd8eb +0x13d:  mov    %eax,0x8(%esp)
085bd8ef +0x141:  mov    -0x18(%ebp),%eax
085bd8f2 +0x144:  mov    %eax,0x4(%esp)
085bd8f6 +0x148:  mov    %edx,(%esp)
085bd8f9 +0x14b:  call   08353404 <_ZNK5Quest18get_clear_itemlistEi>  ; Quest::get_clear_itemlist(int) const
085bd8fe +0x150:  sub    $0x4,%esp
085bd901 +0x153:  lea    -0x34(%ebp),%eax
085bd904 +0x156:  mov    %eax,0x4(%esp)
085bd908 +0x15a:  lea    -0x44(%ebp),%eax
085bd90b +0x15d:  mov    %eax,(%esp)
085bd90e +0x160:  call   085c0364 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x18c2>  ; global constructors keyed to CParty::cMember::cMember()+0x18c2
085bd913 +0x165:  jmp    085bd92d <+0x17f>
085bd915 +0x167:  mov    %edx,%ebx
085bd917 +0x169:  mov    %eax,%esi
085bd919 +0x16b:  lea    -0x34(%ebp),%eax
085bd91c +0x16e:  mov    %eax,(%esp)
085bd91f +0x171:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
085bd924 +0x176:  mov    %esi,%eax
085bd926 +0x178:  mov    %ebx,%edx
085bd928 +0x17a:  jmp    085bdb91 <+0x3e3>
085bd92d +0x17f:  lea    -0x34(%ebp),%eax
085bd930 +0x182:  mov    %eax,(%esp)
085bd933 +0x185:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
085bd938 +0x18a:  movl   $0x0,-0x14(%ebp)
085bd93f +0x191:  jmp    085bdb76 <+0x3c8>
085bd944 +0x196:  lea    -0x89(%ebp),%eax
085bd94a +0x19c:  mov    %eax,(%esp)
085bd94d +0x19f:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
085bd952 +0x1a4:  lea    -0x89(%ebp),%eax
085bd958 +0x1aa:  mov    %eax,(%esp)
085bd95b +0x1ad:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
085bd960 +0x1b2:  mov    -0x14(%ebp),%eax
085bd963 +0x1b5:  mov    %eax,0x4(%esp)
085bd967 +0x1b9:  lea    -0x44(%ebp),%eax
085bd96a +0x1bc:  mov    %eax,(%esp)
085bd96d +0x1bf:  call   080ec0b8 <_GLOBAL__I__ZN20CraneMinigameManagerC2Ev+0xaf>  ; global constructors keyed to CraneMinigameManager::CraneMinigameManager()+0xaf
085bd972 +0x1c4:  mov    0x4(%eax),%edx
085bd975 +0x1c7:  mov    (%eax),%eax
085bd977 +0x1c9:  mov    %eax,-0x4c(%ebp)
085bd97a +0x1cc:  mov    %edx,-0x48(%ebp)
085bd97d +0x1cf:  mov    -0x4c(%ebp),%eax
085bd980 +0x1d2:  mov    %eax,-0x87(%ebp)
085bd986 +0x1d8:  mov    -0x48(%ebp),%ebx
085bd989 +0x1db:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085bd98e +0x1e0:  mov    0xc(%eax),%eax
085bd991 +0x1e3:  mov    %ebx,0xc(%esp)
085bd995 +0x1e7:  lea    -0x89(%ebp),%edx
085bd99b +0x1ed:  mov    %edx,0x8(%esp)
085bd99f +0x1f1:  movl   $0x1,0x4(%esp)
085bd9a7 +0x1f9:  mov    %eax,(%esp)
085bd9aa +0x1fc:  call   08511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>  ; CItemList::create_item(ENUM_ITEM_CREATE_TYPE, Inven_Item&, int)
085bd9af +0x201:  mov    0x10(%ebp),%eax
085bd9b2 +0x204:  mov    %eax,(%esp)
085bd9b5 +0x207:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085bd9ba +0x20c:  movl   $0x1,0x4c(%esp)
085bd9c2 +0x214:  movl   $0x1,0x48(%esp)
085bd9ca +0x21c:  movl   $0xb,0x44(%esp)
085bd9d2 +0x224:  mov    -0x89(%ebp),%edx
085bd9d8 +0x22a:  mov    %edx,0x4(%esp)
085bd9dc +0x22e:  mov    -0x85(%ebp),%edx
085bd9e2 +0x234:  mov    %edx,0x8(%esp)
085bd9e6 +0x238:  mov    -0x81(%ebp),%edx
085bd9ec +0x23e:  mov    %edx,0xc(%esp)
085bd9f0 +0x242:  mov    -0x7d(%ebp),%edx
085bd9f3 +0x245:  mov    %edx,0x10(%esp)
085bd9f7 +0x249:  mov    -0x79(%ebp),%edx
085bd9fa +0x24c:  mov    %edx,0x14(%esp)
085bd9fe +0x250:  mov    -0x75(%ebp),%edx
085bda01 +0x253:  mov    %edx,0x18(%esp)
085bda05 +0x257:  mov    -0x71(%ebp),%edx
085bda08 +0x25a:  mov    %edx,0x1c(%esp)
085bda0c +0x25e:  mov    -0x6d(%ebp),%edx
085bda0f +0x261:  mov    %edx,0x20(%esp)
085bda13 +0x265:  mov    -0x69(%ebp),%edx
085bda16 +0x268:  mov    %edx,0x24(%esp)
085bda1a +0x26c:  mov    -0x65(%ebp),%edx
085bda1d +0x26f:  mov    %edx,0x28(%esp)
085bda21 +0x273:  mov    -0x61(%ebp),%edx
085bda24 +0x276:  mov    %edx,0x2c(%esp)
085bda28 +0x27a:  mov    -0x5d(%ebp),%edx
085bda2b +0x27d:  mov    %edx,0x30(%esp)
085bda2f +0x281:  mov    -0x59(%ebp),%edx
085bda32 +0x284:  mov    %edx,0x34(%esp)
085bda36 +0x288:  mov    -0x55(%ebp),%edx
085bda39 +0x28b:  mov    %edx,0x38(%esp)
085bda3d +0x28f:  mov    -0x51(%ebp),%edx
085bda40 +0x292:  mov    %edx,0x3c(%esp)
085bda44 +0x296:  movzbl -0x4d(%ebp),%edx
085bda48 +0x29a:  mov    %dl,0x40(%esp)
085bda4c +0x29e:  mov    %eax,(%esp)
085bda4f +0x2a1:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
085bda54 +0x2a6:  mov    %eax,-0x10(%ebp)
085bda57 +0x2a9:  cmpl   $0x0,-0x10(%ebp)
085bda5b +0x2ad:  js     085bdb71 <+0x3c3>
085bda61 +0x2b3:  mov    0xc(%ebp),%eax
085bda64 +0x2b6:  mov    -0x10(%ebp),%edx
085bda67 +0x2b9:  mov    %edx,0x4(%esp)
085bda6b +0x2bd:  mov    %eax,(%esp)
085bda6e +0x2c0:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085bda73 +0x2c5:  mov    -0x87(%ebp),%eax
085bda79 +0x2cb:  mov    %eax,%edx
085bda7b +0x2cd:  mov    0xc(%ebp),%eax
085bda7e +0x2d0:  mov    %edx,0x4(%esp)
085bda82 +0x2d4:  mov    %eax,(%esp)
085bda85 +0x2d7:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085bda8a +0x2dc:  lea    -0x89(%ebp),%eax
085bda90 +0x2e2:  mov    %eax,(%esp)
085bda93 +0x2e5:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
085bda98 +0x2ea:  mov    0xc(%ebp),%edx
085bda9b +0x2ed:  mov    %eax,0x4(%esp)
085bda9f +0x2f1:  mov    %edx,(%esp)
085bdaa2 +0x2f4:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085bdaa7 +0x2f9:  movzwl -0x7e(%ebp),%eax
085bdaab +0x2fd:  movzwl %ax,%edx
085bdaae +0x300:  mov    0xc(%ebp),%eax
085bdab1 +0x303:  mov    %edx,0x4(%esp)
085bdab5 +0x307:  mov    %eax,(%esp)
085bdab8 +0x30a:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085bdabd +0x30f:  lea    -0x89(%ebp),%eax
085bdac3 +0x315:  add    $0x11,%eax
085bdac6 +0x318:  mov    %eax,(%esp)
085bdac9 +0x31b:  call   08150732 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x67
085bdace +0x320:  movzbl %al,%edx
085bdad1 +0x323:  mov    0xc(%ebp),%eax
085bdad4 +0x326:  mov    %edx,0x4(%esp)
085bdad8 +0x32a:  mov    %eax,(%esp)
085bdadb +0x32d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085bdae0 +0x332:  lea    -0x89(%ebp),%eax
085bdae6 +0x338:  add    $0x11,%eax
085bdae9 +0x33b:  mov    %eax,(%esp)
085bdaec +0x33e:  call   08150772 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xa7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xa7
085bdaf1 +0x343:  movzwl %ax,%edx
085bdaf4 +0x346:  mov    0xc(%ebp),%eax
085bdaf7 +0x349:  mov    %edx,0x4(%esp)
085bdafb +0x34d:  mov    %eax,(%esp)
085bdafe +0x350:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085bdb03 +0x355:  addl   $0x1,-0x28(%ebp)
085bdb07 +0x359:  movzbl -0x88(%ebp),%eax
085bdb0e +0x360:  cmp    $0x1,%al
085bdb10 +0x362:  jne    085bdb72 <+0x3c4>
085bdb12 +0x364:  mov    -0x87(%ebp),%eax
085bdb18 +0x36a:  mov    %eax,%ebx
085bdb1a +0x36c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085bdb1f +0x371:  mov    %ebx,0x4(%esp)
085bdb23 +0x375:  mov    %eax,(%esp)
085bdb26 +0x378:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
085bdb2b +0x37d:  mov    %eax,-0xc(%ebp)
085bdb2e +0x380:  cmpl   $0x0,-0xc(%ebp)
085bdb32 +0x384:  je     085bdb72 <+0x3c4>
085bdb34 +0x386:  mov    -0xc(%ebp),%eax
085bdb37 +0x389:  mov    %eax,(%esp)
085bdb3a +0x38c:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
085bdb3f +0x391:  mov    %eax,%ebx
085bdb41 +0x393:  mov    -0xc(%ebp),%eax
085bdb44 +0x396:  mov    %eax,(%esp)
085bdb47 +0x399:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
085bdb4c +0x39e:  mov    %eax,%edx
085bdb4e +0x3a0:  movzbl -0x88(%ebp),%eax
085bdb55 +0x3a7:  movzbl %al,%eax
085bdb58 +0x3aa:  mov    %ebx,0xc(%esp)
085bdb5c +0x3ae:  mov    %edx,0x8(%esp)
085bdb60 +0x3b2:  mov    %eax,0x4(%esp)
085bdb64 +0x3b6:  mov    0x10(%ebp),%eax
085bdb67 +0x3b9:  mov    %eax,(%esp)
085bdb6a +0x3bc:  call   08550a84 <_ZN10CLuckPoint12UseLuckPointEP5CUseriii>  ; CLuckPoint::UseLuckPoint(CUser*, int, int, int)
085bdb6f +0x3c1:  jmp    085bdb72 <+0x3c4>
085bdb71 +0x3c3:  nop
085bdb72 +0x3c4:  addl   $0x1,-0x14(%ebp)
085bdb76 +0x3c8:  lea    -0x44(%ebp),%eax
085bdb79 +0x3cb:  mov    %eax,(%esp)
085bdb7c +0x3ce:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
085bdb81 +0x3d3:  cmp    -0x14(%ebp),%eax
085bdb84 +0x3d6:  setg   %al
085bdb87 +0x3d9:  test   %al,%al
085bdb89 +0x3db:  jne    085bd944 <+0x196>
085bdb8f +0x3e1:  jmp    085bdbac <+0x3fe>
085bdb91 +0x3e3:  mov    %edx,%ebx
085bdb93 +0x3e5:  mov    %eax,%esi
085bdb95 +0x3e7:  lea    -0x44(%ebp),%eax
085bdb98 +0x3ea:  mov    %eax,(%esp)
085bdb9b +0x3ed:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
085bdba0 +0x3f2:  mov    %esi,%eax
085bdba2 +0x3f4:  mov    %ebx,%edx
085bdba4 +0x3f6:  mov    %eax,(%esp)
085bdba7 +0x3f9:  call   08ae3750 <_Unwind_Resume>
085bdbac +0x3fe:  lea    -0x44(%ebp),%eax
085bdbaf +0x401:  mov    %eax,(%esp)
085bdbb2 +0x404:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
085bdbb7 +0x409:  jmp    085bdbc3 <+0x415>
085bdbb9 +0x40b:  nop
085bdbba +0x40c:  jmp    085bdbc3 <+0x415>
085bdbbc +0x40e:  nop
085bdbbd +0x40f:  jmp    085bdbc3 <+0x415>
085bdbbf +0x411:  nop
085bdbc0 +0x412:  jmp    085bdbc3 <+0x415>
085bdbc2 +0x414:  nop
085bdbc3 +0x415:  addl   $0x1,-0x20(%ebp)
085bdbc7 +0x419:  cmpl   $0x13,-0x20(%ebp)
085bdbcb +0x41d:  setle  %al
085bdbce +0x420:  test   %al,%al
085bdbd0 +0x422:  jne    085bd7f4 <+0x46>
085bdbd6 +0x428:  cmpl   $0x0,-0x28(%ebp)
085bdbda +0x42c:  je     085bdbf5 <+0x447>
085bdbdc +0x42e:  mov    0xc(%ebp),%eax
085bdbdf +0x431:  mov    -0x28(%ebp),%edx
085bdbe2 +0x434:  mov    %edx,0x8(%esp)
085bdbe6 +0x438:  lea    -0x38(%ebp),%edx
085bdbe9 +0x43b:  mov    %edx,0x4(%esp)
085bdbed +0x43f:  mov    %eax,(%esp)
085bdbf0 +0x442:  call   08110b28 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x3a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x3a
085bdbf5 +0x447:  lea    -0x8(%ebp),%esp
085bdbf8 +0x44a:  add    $0x0,%esp
085bdbfb +0x44d:  pop    %ebx
085bdbfc +0x44e:  pop    %esi
085bdbfd +0x44f:  pop    %ebp
085bdbfe +0x450:  ret
085bdbff +0x451:  nop
```

## 反编译 C

```c
// CParty::MakeQuestRewardPacket @ 0x85bd7ae

/* CParty::MakeQuestRewardPacket(PacketGuard*, CUser*) */

void __thiscall CParty::MakeQuestRewardPacket(CParty *this,PacketGuard *param_1,CUser *param_2)

{
  short sVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  CDataManager *this_00;
  int iVar7;
  Inven_Item local_8d;
  byte bStack_8c;
  undefined2 uStack_8b;
  undefined2 uStack_89;
  undefined2 uStack_87;
  undefined4 local_85;
  undefined4 uStack_81;
  undefined4 local_7d;
  undefined4 local_79;
  undefined4 local_75;
  undefined4 local_71;
  undefined4 local_6d;
  undefined4 local_69;
  undefined4 local_65;
  undefined4 local_61;
  undefined4 local_5d;
  undefined4 local_59;
  undefined4 local_55;
  undefined1 local_51;
  undefined4 local_50;
  undefined4 local_4c;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_48 [12];
  int local_3c;
  vector local_38 [12];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  Quest *local_1c;
  uint local_18;
  int local_14;
  CItem *local_10;
  
  local_2c = 0;
  local_28 = 0;
  local_3c = InterfacePacketBuf::get_index((InterfacePacketBuf *)param_1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,0);
  for (local_24 = 0; local_24 < 0x14; local_24 = local_24 + 1) {
    local_20 = CUser::getCurCharacQuestRefR(param_2);
    if ((*(int *)(local_20 + 8 + (local_24 + 0x1d4c) * 4) != 0) &&
       (*(int *)(local_20 + 8 + (local_24 + 0x1d60) * 4) != 0)) {
      iVar3 = G_CDataManager();
      local_1c = (Quest *)CDataManager::find_quest(iVar3);
      if (local_1c != (Quest *)0x0) {
        sVar1 = *(short *)(local_20 + 0x75da);
        iVar3 = CBattle_Field::get_dungeon_index((CBattle_Field *)(this + 0xb24));
        cVar2 = Quest::check_clear_item(local_1c,iVar3,(int)sVar1);
        if ((cVar2 == '\x01') &&
           (local_28 = *(int *)(local_20 + 8 + (local_24 + 0x1d4c) * 4), 0 < local_28)) {
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_48);
          std::pair<int,int>::pair((pair<int,int> *)&local_50);
          if (local_1c != (Quest *)0x0) {
            CBattle_Field::get_dungeon_index((CBattle_Field *)(this + 0xb24));
                    /* try { // try from 085bd8f9 to 085bd8fd has its CatchHandler @ 085bdb91 */
            Quest::get_clear_itemlist((int)local_38);
                    /* try { // try from 085bd90e to 085bd912 has its CatchHandler @ 085bd915 */
            std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator=
                      (local_48,local_38);
                    /* try { // try from 085bd933 to 085bdb6e has its CatchHandler @ 085bdb91 */
            std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)local_38);
            local_18 = 0;
            while (iVar3 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                                     (local_48), (int)local_18 < iVar3) {
              Inven_Item::Inven_Item(&local_8d);
              Inven_Item::reset(&local_8d);
              puVar4 = (undefined4 *)
                       std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::at
                                 (local_48,local_18);
              uVar5 = puVar4[1];
              local_50 = *puVar4;
              uStack_8b = (undefined2)local_50;
              uStack_89 = (undefined2)((uint)local_50 >> 0x10);
              local_4c = uVar5;
              iVar3 = G_CDataManager();
              CItemList::create_item(*(CItemList **)(iVar3 + 0xc),1,&local_8d,uVar5);
              uVar5 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
              local_14 = CInventory::insertItemIntoInventory
                                   (uVar5,CONCAT22(uStack_8b,CONCAT11(bStack_8c,local_8d)),
                                    CONCAT22(uStack_87,uStack_89),local_85,uStack_81,local_7d,
                                    local_79,local_75,local_71,local_6d,local_69,local_65,local_61,
                                    local_5d,local_59,local_55,local_51,0xb,1,1);
              if (-1 < local_14) {
                InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,local_14);
                InterfacePacketBuf::put_int
                          ((InterfacePacketBuf *)param_1,CONCAT22(uStack_89,uStack_8b));
                iVar3 = Inven_Item::get_add_info(&local_8d);
                InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,iVar3);
                InterfacePacketBuf::put_short
                          ((InterfacePacketBuf *)param_1,
                           (uint)CONCAT11((undefined1)uStack_81,local_85._3_1_));
                uVar6 = stAmplifyOption_t::getAbilityType((stAmplifyOption_t *)((int)&local_7d + 1))
                ;
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,uVar6 & 0xff);
                uVar6 = stAmplifyOption_t::getAbilityValue
                                  ((stAmplifyOption_t *)((int)&local_7d + 1));
                InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,uVar6 & 0xffff);
                local_2c = local_2c + 1;
                if (bStack_8c == 1) {
                  iVar3 = CONCAT22(uStack_89,uStack_8b);
                  this_00 = (CDataManager *)G_CDataManager();
                  local_10 = (CItem *)CDataManager::find_item(this_00,iVar3);
                  if (local_10 != (CItem *)0x0) {
                    iVar3 = CItem::get_grade(local_10);
                    iVar7 = CItem::get_rarity(local_10);
                    CLuckPoint::UseLuckPoint(param_2,(uint)bStack_8c,iVar7,iVar3);
                  }
                }
              }
              local_18 = local_18 + 1;
            }
          }
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_48);
        }
      }
    }
  }
  if (local_2c != 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,&local_3c,local_2c);
  }
  return;
}
```
