# ProcUpgradeChronicle

`_ZN8WongWork12CItemUpgrade20ProcUpgradeChronicleEP5CUsersjsjcRSt6vectorIiSaIiEE`

`WongWork::CItemUpgrade::ProcUpgradeChronicle(CUser*, short, unsigned int, short, unsigned int, char, std::vector<int, std::allocator<int> >&)`

| 类 | 地址 |
|---|---|
| `WongWork::CItemUpgrade` | `0x085491d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085491d6  _ZN8WongWork12CItemUpgrade20ProcUpgradeChronicleEP5CUsersjsjcRSt6vectorIiSaIiEE
#           WongWork::CItemUpgrade::ProcUpgradeChronicle(CUser*, short, unsigned int, short, unsigned int, char, std::vector<int, std::allocator<int> >&)
# range [0x085491d6, 0x08549779]
085491d6 +0x000:  push   %ebp
085491d7 +0x001:  mov    %esp,%ebp
085491d9 +0x003:  push   %esi
085491da +0x004:  push   %ebx
085491db +0x005:  sub    $0xca80,%esp
085491e1 +0x00b:  mov    0x10(%ebp),%ecx
085491e4 +0x00e:  mov    0x18(%ebp),%edx
085491e7 +0x011:  mov    0x20(%ebp),%eax
085491ea +0x014:  mov    %cx,-0xca1c(%ebp)
085491f1 +0x01b:  mov    %dx,-0xca20(%ebp)
085491f8 +0x022:  mov    %al,-0xca24(%ebp)
085491fe +0x028:  mov    0xc(%ebp),%eax
08549201 +0x02b:  mov    %eax,(%esp)
08549204 +0x02e:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08549209 +0x033:  mov    %eax,-0x40(%ebp)
0854920c +0x036:  movswl -0xca1c(%ebp),%edx
08549213 +0x03d:  lea    -0x99(%ebp),%eax
08549219 +0x043:  mov    %edx,0xc(%esp)
0854921d +0x047:  movl   $0x1,0x8(%esp)
08549225 +0x04f:  mov    -0x40(%ebp),%edx
08549228 +0x052:  mov    %edx,0x4(%esp)
0854922c +0x056:  mov    %eax,(%esp)
0854922f +0x059:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08549234 +0x05e:  sub    $0x4,%esp
08549237 +0x061:  movswl -0xca20(%ebp),%edx
0854923e +0x068:  lea    -0xd6(%ebp),%eax
08549244 +0x06e:  mov    %edx,0xc(%esp)
08549248 +0x072:  movl   $0x1,0x8(%esp)
08549250 +0x07a:  mov    -0x40(%ebp),%edx
08549253 +0x07d:  mov    %edx,0x4(%esp)
08549257 +0x081:  mov    %eax,(%esp)
0854925a +0x084:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0854925f +0x089:  sub    $0x4,%esp
08549262 +0x08c:  mov    -0x97(%ebp),%eax
08549268 +0x092:  mov    %eax,%ebx
0854926a +0x094:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0854926f +0x099:  mov    %ebx,0x4(%esp)
08549273 +0x09d:  mov    %eax,(%esp)
08549276 +0x0a0:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0854927b +0x0a5:  mov    %eax,-0x3c(%ebp)
0854927e +0x0a8:  mov    -0xd4(%ebp),%eax
08549284 +0x0ae:  mov    %eax,%ebx
08549286 +0x0b0:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0854928b +0x0b5:  mov    %ebx,0x4(%esp)
0854928f +0x0b9:  mov    %eax,(%esp)
08549292 +0x0bc:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08549297 +0x0c1:  mov    %eax,-0x38(%ebp)
0854929a +0x0c4:  mov    -0x38(%ebp),%eax
0854929d +0x0c7:  mov    %eax,(%esp)
085492a0 +0x0ca:  call   0854b528 <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x3b0>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x3b0
085492a5 +0x0cf:  mov    %eax,-0x34(%ebp)
085492a8 +0x0d2:  mov    0xc(%ebp),%eax
085492ab +0x0d5:  mov    %eax,(%esp)
085492ae +0x0d8:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085492b3 +0x0dd:  mov    -0x34(%ebp),%edx
085492b6 +0x0e0:  mov    %edx,0x4(%esp)
085492ba +0x0e4:  mov    %eax,(%esp)
085492bd +0x0e7:  call   08507acc <_ZNK10CInventory17CheckNeedItemListERKSt6vectorISt4pairIiiESaIS2_EE>  ; CInventory::CheckNeedItemList(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&) const
085492c2 +0x0ec:  xor    $0x1,%eax
085492c5 +0x0ef:  test   %al,%al
085492c7 +0x0f1:  je     085492d3 <+0xfd>
085492c9 +0x0f3:  mov    $0x16,%ebx
085492ce +0x0f8:  jmp    0854976d <+0x597>
085492d3 +0x0fd:  lea    -0x8cc(%ebp),%eax
085492d9 +0x103:  mov    %eax,(%esp)
085492dc +0x106:  call   0822d52c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2bd6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2bd6
085492e1 +0x10b:  lea    -0xca0b(%ebp),%eax
085492e7 +0x111:  mov    %eax,(%esp)
085492ea +0x114:  call   0822d3b8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2a62>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2a62
085492ef +0x119:  lea    -0xca0b(%ebp),%eax
085492f5 +0x11f:  mov    %eax,0x4(%esp)
085492f9 +0x123:  lea    -0x8cc(%ebp),%eax
085492ff +0x129:  mov    %eax,(%esp)
08549302 +0x12c:  call   0822d4f6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ba0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ba0
08549307 +0x131:  mov    0xc(%ebp),%eax
0854930a +0x134:  mov    %eax,(%esp)
0854930d +0x137:  call   081803ca <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x61>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x61
08549312 +0x13c:  mov    %eax,0x4(%esp)
08549316 +0x140:  lea    -0x8cc(%ebp),%eax
0854931c +0x146:  mov    %eax,(%esp)
0854931f +0x149:  call   084fa314 <_ZN10CInventory7setCopyERKS_>  ; CInventory::setCopy(CInventory const&)
08549324 +0x14e:  mov    -0x34(%ebp),%eax
08549327 +0x151:  mov    %eax,0x4(%esp)
0854932b +0x155:  lea    -0x8cc(%ebp),%eax
08549331 +0x15b:  mov    %eax,(%esp)
08549334 +0x15e:  call   085058da <_ZN10CInventory19tryDeleteEventItemsERKSt6vectorISt4pairIiiESaIS2_EE>  ; CInventory::tryDeleteEventItems(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)
08549339 +0x163:  xor    $0x1,%eax
0854933c +0x166:  test   %al,%al
0854933e +0x168:  je     0854934a <+0x174>
08549340 +0x16a:  mov    $0x11,%ebx
08549345 +0x16f:  jmp    0854975f <+0x589>
0854934a +0x174:  mov    0xc(%ebp),%eax
0854934d +0x177:  mov    %eax,(%esp)
08549350 +0x17a:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08549355 +0x17f:  movl   $0x0,0x18(%esp)
0854935d +0x187:  movl   $0xc,0x14(%esp)
08549365 +0x18f:  movl   $0xc,0x10(%esp)
0854936d +0x197:  lea    -0x45(%ebp),%edx
08549370 +0x19a:  mov    %edx,0xc(%esp)
08549374 +0x19e:  mov    0x24(%ebp),%edx
08549377 +0x1a1:  mov    %edx,0x8(%esp)
0854937b +0x1a5:  mov    -0x34(%ebp),%edx
0854937e +0x1a8:  mov    %edx,0x4(%esp)
08549382 +0x1ac:  mov    %eax,(%esp)
08549385 +0x1af:  call   08505db4 <_ZN10CInventory18delete_event_itemsERKSt6vectorISt4pairIiiESaIS2_EERS0_IiSaIiEERb15eMoneySubReason14eItemDelReasonb>  ; CInventory::delete_event_items(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, std::vector<int, std::allocator<int> >&, bool&, eMoneySubReason, eItemDelReason, bool)
0854938a +0x1b4:  mov    %eax,-0x30(%ebp)
0854938d +0x1b7:  movl   $0x0,-0x2c(%ebp)
08549394 +0x1be:  movl   $0x64,(%esp)
0854939b +0x1c5:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
085493a0 +0x1ca:  mov    %eax,-0x28(%ebp)
085493a3 +0x1cd:  cmpl   $0x0,-0x28(%ebp)
085493a7 +0x1d1:  js     085493f7 <+0x221>
085493a9 +0x1d3:  cmpl   $0x63,-0x28(%ebp)
085493ad +0x1d7:  jg     085493f7 <+0x221>
085493af +0x1d9:  cmpb   $0x0,-0xca24(%ebp)
085493b6 +0x1e0:  js     085493f7 <+0x221>
085493b8 +0x1e2:  cmpb   $0x4,-0xca24(%ebp)
085493bf +0x1e9:  jg     085493f7 <+0x221>
085493c1 +0x1eb:  mov    -0x28(%ebp),%ebx
085493c4 +0x1ee:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085493c9 +0x1f3:  mov    %eax,%ecx
085493cb +0x1f5:  movsbl -0xca24(%ebp),%edx
085493d2 +0x1fc:  mov    %edx,%eax
085493d4 +0x1fe:  add    %eax,%eax
085493d6 +0x200:  add    %edx,%eax
085493d8 +0x202:  shl    $0x2,%eax
085493db +0x205:  add    $0x4d50,%eax
085493e0 +0x20a:  lea    (%ecx,%eax,1),%eax
085493e3 +0x20d:  add    $0xc,%eax
085493e6 +0x210:  mov    %ebx,0x4(%esp)
085493ea +0x214:  mov    %eax,(%esp)
085493ed +0x217:  call   080e2564 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x30a>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x30a
085493f2 +0x21c:  mov    (%eax),%eax
085493f4 +0x21e:  mov    %eax,-0x2c(%ebp)
085493f7 +0x221:  mov    -0x3c(%ebp),%eax
085493fa +0x224:  mov    %eax,-0x24(%ebp)
085493fd +0x227:  mov    -0x24(%ebp),%eax
08549400 +0x22a:  mov    %eax,(%esp)
08549403 +0x22d:  call   0854b4e8 <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x370>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x370
08549408 +0x232:  cwtl
08549409 +0x233:  mov    %eax,-0x20(%ebp)
0854940c +0x236:  cmpl   $0x1,-0x20(%ebp)
08549410 +0x23a:  jne    08549450 <+0x27a>
08549412 +0x23c:  movswl -0xca20(%ebp),%ebx
08549419 +0x243:  mov    0xc(%ebp),%eax
0854941c +0x246:  mov    %eax,(%esp)
0854941f +0x249:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08549424 +0x24e:  lea    -0x54(%ebp),%edx
08549427 +0x251:  mov    %edx,0xc(%esp)
0854942b +0x255:  mov    %ebx,0x8(%esp)
0854942f +0x259:  movl   $0x1,0x4(%esp)
08549437 +0x261:  mov    %eax,(%esp)
0854943a +0x264:  call   085083d0 <_ZNK10CInventory27CheckEquipmentItemConditionE10INVEN_TYPEsR28stEquipConditionForChronicle>  ; CInventory::CheckEquipmentItemCondition(INVEN_TYPE, short, stEquipConditionForChronicle&) const
0854943f +0x269:  mov    %eax,-0xc(%ebp)
08549442 +0x26c:  cmpl   $0x0,-0xc(%ebp)
08549446 +0x270:  je     08549450 <+0x27a>
08549448 +0x272:  mov    -0xc(%ebp),%ebx
0854944b +0x275:  jmp    0854975f <+0x589>
08549450 +0x27a:  mov    -0x38(%ebp),%eax
08549453 +0x27d:  mov    %eax,(%esp)
08549456 +0x280:  call   0854b536 <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x3be>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x3be
0854945b +0x285:  mov    %eax,-0x1c(%ebp)
0854945e +0x288:  mov    -0x1c(%ebp),%eax
08549461 +0x28b:  mov    %eax,(%esp)
08549464 +0x28e:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
08549469 +0x293:  cmp    $0x1,%eax
0854946c +0x296:  seta   %al
0854946f +0x299:  test   %al,%al
08549471 +0x29b:  je     0854947d <+0x2a7>
08549473 +0x29d:  mov    $0x11,%ebx
08549478 +0x2a2:  jmp    0854975f <+0x589>
0854947d +0x2a7:  lea    -0x44(%ebp),%eax
08549480 +0x2aa:  mov    -0x1c(%ebp),%edx
08549483 +0x2ad:  mov    %edx,0x4(%esp)
08549487 +0x2b1:  mov    %eax,(%esp)
0854948a +0x2b4:  call   080dd5b2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xfb>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xfb
0854948f +0x2b9:  sub    $0x4,%esp
08549492 +0x2bc:  lea    -0x44(%ebp),%eax
08549495 +0x2bf:  mov    %eax,(%esp)
08549498 +0x2c2:  call   080dd5fc <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x145>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x145
0854949d +0x2c7:  mov    0x4(%eax),%edx
085494a0 +0x2ca:  mov    (%eax),%eax
085494a2 +0x2cc:  mov    %eax,-0x5c(%ebp)
085494a5 +0x2cf:  mov    %edx,-0x58(%ebp)
085494a8 +0x2d2:  mov    -0x5c(%ebp),%eax
085494ab +0x2d5:  mov    %eax,-0x18(%ebp)
085494ae +0x2d8:  mov    -0x58(%ebp),%eax
085494b1 +0x2db:  mov    %eax,-0x14(%ebp)
085494b4 +0x2de:  cmpl   $0x1,-0x14(%ebp)
085494b8 +0x2e2:  jbe    085494c4 <+0x2ee>
085494ba +0x2e4:  mov    $0x11,%ebx
085494bf +0x2e9:  jmp    0854975f <+0x589>
085494c4 +0x2ee:  movl   $0xb,-0x10(%ebp)
085494cb +0x2f5:  mov    -0x18(%ebp),%ebx
085494ce +0x2f8:  mov    0xc(%ebp),%eax
085494d1 +0x2fb:  mov    %eax,(%esp)
085494d4 +0x2fe:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085494d9 +0x303:  mov    %ebx,0x4(%esp)
085494dd +0x307:  mov    %eax,(%esp)
085494e0 +0x30a:  call   085018d2 <_ZNK10CInventory11GetItemTypeEi>  ; CInventory::GetItemType(int) const
085494e5 +0x30f:  mov    %eax,-0x10(%ebp)
085494e8 +0x312:  cmpl   $0x1,-0x10(%ebp)
085494ec +0x316:  je     085494f8 <+0x322>
085494ee +0x318:  mov    $0x11,%ebx
085494f3 +0x31d:  jmp    0854975f <+0x589>
085494f8 +0x322:  lea    -0x113(%ebp),%eax
085494fe +0x328:  mov    %eax,(%esp)
08549501 +0x32b:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08549506 +0x330:  mov    -0x18(%ebp),%eax
08549509 +0x333:  mov    %eax,-0x111(%ebp)
0854950f +0x339:  mov    -0x38(%ebp),%eax
08549512 +0x33c:  mov    (%eax),%eax
08549514 +0x33e:  add    $0x8,%eax
08549517 +0x341:  mov    (%eax),%edx
08549519 +0x343:  lea    -0x113(%ebp),%eax
0854951f +0x349:  mov    %eax,0x4(%esp)
08549523 +0x34d:  mov    -0x38(%ebp),%eax
08549526 +0x350:  mov    %eax,(%esp)
08549529 +0x353:  call   *%edx
0854952b +0x355:  cmpl   $0x1,-0x20(%ebp)
0854952f +0x359:  jne    08549592 <+0x3bc>
08549531 +0x35b:  movzbl -0x54(%ebp),%eax
08549535 +0x35f:  cmp    $0x1e,%al
08549537 +0x361:  ja     08549552 <+0x37c>
08549539 +0x363:  movzbl -0x54(%ebp),%eax
0854953d +0x367:  movzbl %al,%eax
08549540 +0x36a:  mov    %eax,0x4(%esp)
08549544 +0x36e:  lea    -0x113(%ebp),%eax
0854954a +0x374:  mov    %eax,(%esp)
0854954d +0x377:  call   080f0ffc <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x7e>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x7e
08549552 +0x37c:  movzbl -0x53(%ebp),%eax
08549556 +0x380:  test   %al,%al
08549558 +0x382:  je     08549589 <+0x3b3>
0854955a +0x384:  movzbl -0x52(%ebp),%eax
0854955e +0x388:  test   %al,%al
08549560 +0x38a:  je     08549589 <+0x3b3>
08549562 +0x38c:  movzwl -0x50(%ebp),%eax
08549566 +0x390:  movzwl %ax,%edx
08549569 +0x393:  movzbl -0x52(%ebp),%eax
0854956d +0x397:  movzbl %al,%eax
08549570 +0x39a:  mov    %edx,0x8(%esp)
08549574 +0x39e:  mov    %eax,0x4(%esp)
08549578 +0x3a2:  lea    -0x113(%ebp),%eax
0854957e +0x3a8:  add    $0x11,%eax
08549581 +0x3ab:  mov    %eax,(%esp)
08549584 +0x3ae:  call   084b40e4 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x197>  ; global constructors keyed to game_master::CMacro::Reset()+0x197
08549589 +0x3b3:  mov    -0x4c(%ebp),%eax
0854958c +0x3b6:  mov    %eax,-0x106(%ebp)
08549592 +0x3bc:  mov    -0x2c(%ebp),%eax
08549595 +0x3bf:  mov    %eax,-0x10c(%ebp)
0854959b +0x3c5:  movswl -0xca20(%ebp),%ebx
085495a2 +0x3cc:  mov    0xc(%ebp),%eax
085495a5 +0x3cf:  mov    %eax,(%esp)
085495a8 +0x3d2:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085495ad +0x3d7:  movl   $0x1,0x14(%esp)
085495b5 +0x3df:  movl   $0xc,0x10(%esp)
085495bd +0x3e7:  movl   $0x1,0xc(%esp)
085495c5 +0x3ef:  mov    %ebx,0x8(%esp)
085495c9 +0x3f3:  movl   $0x1,0x4(%esp)
085495d1 +0x3fb:  mov    %eax,(%esp)
085495d4 +0x3fe:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
085495d9 +0x403:  movswl -0xca20(%ebp),%eax
085495e0 +0x40a:  mov    %eax,0xc(%esp)
085495e4 +0x40e:  movl   $0x0,0x8(%esp)
085495ec +0x416:  movl   $0x1,0x4(%esp)
085495f4 +0x41e:  mov    0xc(%ebp),%eax
085495f7 +0x421:  mov    %eax,(%esp)
085495fa +0x424:  call   0867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItem(CUser::eSendTarget, ENUM_ITEMSPACE, int)
085495ff +0x429:  movswl -0xca1c(%ebp),%ebx
08549606 +0x430:  mov    0xc(%ebp),%eax
08549609 +0x433:  mov    %eax,(%esp)
0854960c +0x436:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08549611 +0x43b:  movl   $0x1,0x14(%esp)
08549619 +0x443:  movl   $0xc,0x10(%esp)
08549621 +0x44b:  movl   $0x1,0xc(%esp)
08549629 +0x453:  mov    %ebx,0x8(%esp)
0854962d +0x457:  movl   $0x1,0x4(%esp)
08549635 +0x45f:  mov    %eax,(%esp)
08549638 +0x462:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
0854963d +0x467:  movswl -0xca20(%ebp),%ebx
08549644 +0x46e:  mov    0xc(%ebp),%eax
08549647 +0x471:  mov    %eax,(%esp)
0854964a +0x474:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0854964f +0x479:  movl   $0x9,0x50(%esp)
08549657 +0x481:  movl   $0x7,0x4c(%esp)
0854965f +0x489:  mov    %ebx,0x48(%esp)
08549663 +0x48d:  movl   $0x1,0x44(%esp)
0854966b +0x495:  mov    -0x113(%ebp),%edx
08549671 +0x49b:  mov    %edx,0x4(%esp)
08549675 +0x49f:  mov    -0x10f(%ebp),%edx
0854967b +0x4a5:  mov    %edx,0x8(%esp)
0854967f +0x4a9:  mov    -0x10b(%ebp),%edx
08549685 +0x4af:  mov    %edx,0xc(%esp)
08549689 +0x4b3:  mov    -0x107(%ebp),%edx
0854968f +0x4b9:  mov    %edx,0x10(%esp)
08549693 +0x4bd:  mov    -0x103(%ebp),%edx
08549699 +0x4c3:  mov    %edx,0x14(%esp)
0854969d +0x4c7:  mov    -0xff(%ebp),%edx
085496a3 +0x4cd:  mov    %edx,0x18(%esp)
085496a7 +0x4d1:  mov    -0xfb(%ebp),%edx
085496ad +0x4d7:  mov    %edx,0x1c(%esp)
085496b1 +0x4db:  mov    -0xf7(%ebp),%edx
085496b7 +0x4e1:  mov    %edx,0x20(%esp)
085496bb +0x4e5:  mov    -0xf3(%ebp),%edx
085496c1 +0x4eb:  mov    %edx,0x24(%esp)
085496c5 +0x4ef:  mov    -0xef(%ebp),%edx
085496cb +0x4f5:  mov    %edx,0x28(%esp)
085496cf +0x4f9:  mov    -0xeb(%ebp),%edx
085496d5 +0x4ff:  mov    %edx,0x2c(%esp)
085496d9 +0x503:  mov    -0xe7(%ebp),%edx
085496df +0x509:  mov    %edx,0x30(%esp)
085496e3 +0x50d:  mov    -0xe3(%ebp),%edx
085496e9 +0x513:  mov    %edx,0x34(%esp)
085496ed +0x517:  mov    -0xdf(%ebp),%edx
085496f3 +0x51d:  mov    %edx,0x38(%esp)
085496f7 +0x521:  mov    -0xdb(%ebp),%edx
085496fd +0x527:  mov    %edx,0x3c(%esp)
08549701 +0x52b:  movzbl -0xd7(%ebp),%edx
08549708 +0x532:  mov    %dl,0x40(%esp)
0854970c +0x536:  mov    %eax,(%esp)
0854970f +0x539:  call   085039e8 <_ZN10CInventory24insert_item_special_slotE10Inven_Itemii15eMoneyAddReason14eItemAddReason>  ; CInventory::insert_item_special_slot(Inven_Item, int, int, eMoneyAddReason, eItemAddReason)
08549714 +0x53e:  movswl -0xca20(%ebp),%eax
0854971b +0x545:  mov    %eax,0xc(%esp)
0854971f +0x549:  movl   $0x0,0x8(%esp)
08549727 +0x551:  movl   $0x1,0x4(%esp)
0854972f +0x559:  mov    0xc(%ebp),%eax
08549732 +0x55c:  mov    %eax,(%esp)
08549735 +0x55f:  call   0867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItem(CUser::eSendTarget, ENUM_ITEMSPACE, int)
0854973a +0x564:  mov    $0x0,%ebx
0854973f +0x569:  jmp    0854975f <+0x589>
08549741 +0x56b:  mov    %edx,%ebx
08549743 +0x56d:  mov    %eax,%esi
08549745 +0x56f:  lea    -0x8cc(%ebp),%eax
0854974b +0x575:  mov    %eax,(%esp)
0854974e +0x578:  call   0822d600 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2caa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2caa
08549753 +0x57d:  mov    %esi,%eax
08549755 +0x57f:  mov    %ebx,%edx
08549757 +0x581:  mov    %eax,(%esp)
0854975a +0x584:  call   08ae3750 <_Unwind_Resume>
0854975f +0x589:  lea    -0x8cc(%ebp),%eax
08549765 +0x58f:  mov    %eax,(%esp)
08549768 +0x592:  call   0822d600 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2caa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2caa
0854976d +0x597:  mov    %ebx,%eax
0854976f +0x599:  lea    -0x8(%ebp),%esp
08549772 +0x59c:  add    $0x0,%esp
08549775 +0x59f:  pop    %ebx
08549776 +0x5a0:  pop    %esi
08549777 +0x5a1:  pop    %ebp
08549778 +0x5a2:  ret
08549779 +0x5a3:  nop
```

## 反编译 C

```c
// WongWork::CItemUpgrade::ProcUpgradeChronicle @ 0x85491d6

/* WongWork::CItemUpgrade::ProcUpgradeChronicle(CUser*, short, unsigned int, short, unsigned int,
   char, std::vector<int, std::allocator<int> >&) */

int __thiscall
WongWork::CItemUpgrade::ProcUpgradeChronicle
          (CItemUpgrade *this,CUser *param_1,short param_2,uint param_3,short param_4,uint param_5,
          char param_6,vector *param_7)

{
  char cVar1;
  short sVar2;
  CDataManager *pCVar3;
  CInventory *pCVar4;
  uint uVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  InventoryMemory local_ca0f [49471];
  CInventory local_8d0 [1977];
  undefined2 local_117;
  undefined2 uStack_115;
  undefined2 uStack_113;
  undefined1 uStack_111;
  undefined4 uStack_110;
  undefined1 uStack_10c;
  undefined4 uStack_10b;
  undefined4 uStack_107;
  undefined4 local_103;
  undefined4 local_ff;
  undefined4 local_fb;
  undefined4 local_f7;
  undefined4 local_f3;
  undefined4 local_ef;
  undefined4 local_eb;
  undefined4 local_e7;
  undefined4 local_e3;
  undefined4 local_df;
  undefined1 local_db;
  undefined1 local_da [2];
  int local_d8;
  undefined1 local_9d [2];
  int local_9b;
  int local_60;
  uint local_5c;
  byte local_58;
  char local_57;
  uchar local_56;
  ushort local_54;
  undefined4 local_50;
  undefined1 local_49;
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_48 [4];
  int local_44;
  CStackableItem *local_40;
  CEquipItem *local_3c;
  vector *local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  CStackableItem *local_28;
  int local_24;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *local_20;
  int local_1c;
  uint local_18;
  int local_14;
  int local_10;
  
  local_44 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
  CInventory::GetInvenSlot((int)local_9d,local_44);
  CInventory::GetInvenSlot((int)local_da,local_44);
  pCVar3 = (CDataManager *)G_CDataManager();
  local_40 = (CStackableItem *)CDataManager::find_item(pCVar3,local_9b);
  pCVar3 = (CDataManager *)G_CDataManager();
  local_3c = (CEquipItem *)CDataManager::find_item(pCVar3,local_d8);
  local_38 = (vector *)CEquipItem::GetEmancipateMaterialList(local_3c);
  pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  cVar1 = CInventory::CheckNeedItemList(pCVar4,local_38);
  if (cVar1 != '\x01') {
    return 0x16;
  }
  CInventory::CInventory(local_8d0);
  InventoryMemory::InventoryMemory(local_ca0f);
  CInventory::SetInventoryMemory(local_8d0,local_ca0f);
  pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenRefR((CUserCharacInfo *)param_1);
                    /* try { // try from 0854931f to 08549739 has its CatchHandler @ 08549741 */
  CInventory::setCopy(local_8d0,pCVar4);
  cVar1 = CInventory::tryDeleteEventItems(local_8d0,local_38);
  if (cVar1 == '\x01') {
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    local_34 = CInventory::delete_event_items(pCVar4,local_38,param_7,&local_49,0xc,0xc,0);
    local_30 = 0;
    uVar5 = get_rand_int(100);
    local_2c = uVar5;
    if ((((-1 < (int)uVar5) && ((int)uVar5 < 100)) && (-1 < param_6)) && (param_6 < '\x05')) {
      iVar9 = G_CDataManager();
      puVar6 = (undefined4 *)
               std::vector<unsigned_int,std::allocator<unsigned_int>>::operator[]
                         ((vector<unsigned_int,std::allocator<unsigned_int>> *)
                          (iVar9 + param_6 * 0xc + 0x4d5c),uVar5);
      local_30 = *puVar6;
    }
    local_28 = local_40;
    sVar2 = CStackableItem::GetEmancipate(local_40);
    local_24 = (int)sVar2;
    if (local_24 == 1) {
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      iVar9 = CInventory::CheckEquipmentItemCondition(pCVar4,1,(int)param_4,&local_58);
      local_10 = iVar9;
      if (iVar9 != 0) goto LAB_0854975f;
    }
    local_20 = (vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
               CEquipItem::GetEmancipateResultList(local_3c);
    uVar5 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size(local_20);
    if (uVar5 < 2) {
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
      piVar7 = (int *)__gnu_cxx::
                      __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                      ::operator*(local_48);
      local_5c = piVar7[1];
      iVar9 = *piVar7;
      local_60 = iVar9;
      local_1c = iVar9;
      local_18 = local_5c;
      if (local_5c < 2) {
        local_14 = 0xb;
        pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        local_14 = CInventory::GetItemType(pCVar4,iVar9);
        if (local_14 == 1) {
          Inven_Item::Inven_Item((Inven_Item *)&local_117);
          uStack_115 = (undefined2)local_1c;
          uStack_113 = (undefined2)((uint)local_1c >> 0x10);
          (**(code **)(*(int *)local_3c + 8))(local_3c,&local_117);
          if (local_24 == 1) {
            if (local_58 < 0x1f) {
              Inven_Item::SetUpgrade((Inven_Item *)&local_117,local_58);
            }
            if ((local_57 != '\0') && (local_56 != '\0')) {
              stAmplifyOption_t::assign
                        ((stAmplifyOption_t *)((int)&uStack_107 + 1),local_56,local_54);
            }
            uStack_10b._1_3_ = (undefined3)local_50;
            uStack_107._0_1_ = (undefined1)((uint)local_50 >> 0x18);
          }
          uStack_110 = local_30;
          pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
          CInventory::delete_item(pCVar4,1,(int)param_4,1,0xc,1);
          CUser::SendUpdateItem(param_1,1,0,(int)param_4);
          pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
          CInventory::delete_item(pCVar4,1,(int)param_2,1,0xc,1);
          uVar8 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
          CInventory::insert_item_special_slot
                    (uVar8,CONCAT22(uStack_115,local_117),
                     CONCAT13((undefined1)uStack_110,CONCAT12(uStack_111,uStack_113)),
                     CONCAT13(uStack_10c,uStack_110._1_3_),uStack_10b,uStack_107,local_103,local_ff,
                     local_fb,local_f7,local_f3,local_ef,local_eb,local_e7,local_e3,local_df,
                     local_db,1,(int)param_4,7,9);
          CUser::SendUpdateItem(param_1,1,0,(int)param_4);
          iVar9 = 0;
        }
        else {
          iVar9 = 0x11;
        }
      }
      else {
        iVar9 = 0x11;
      }
    }
    else {
      iVar9 = 0x11;
    }
  }
  else {
    iVar9 = 0x11;
  }
LAB_0854975f:
  CInventory::~CInventory(local_8d0);
  return iVar9;
}
```
