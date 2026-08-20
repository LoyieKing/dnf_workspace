# compound_item

`_ZN5CUser13compound_itemEibti`

`CUser::compound_item(int, bool, unsigned short, int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867218c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867218c  _ZN5CUser13compound_itemEibti
#           CUser::compound_item(int, bool, unsigned short, int)
# range [0x0867218c, 0x0867306d]
0867218c +0x000:  push   %ebp
0867218d +0x001:  mov    %esp,%ebp
0867218f +0x003:  push   %edi
08672190 +0x004:  push   %esi
08672191 +0x005:  push   %ebx
08672192 +0x006:  sub    $0xcb4c,%esp
08672198 +0x00c:  mov    0x10(%ebp),%edx
0867219b +0x00f:  mov    0x14(%ebp),%eax
0867219e +0x012:  mov    %dl,-0xcafc(%ebp)
086721a4 +0x018:  mov    %ax,-0xcb00(%ebp)
086721ab +0x01f:  movl   $0x0,-0x7c(%ebp)
086721b2 +0x026:  movzbl -0xcafc(%ebp),%edx
086721b9 +0x02d:  mov    0xc(%ebp),%eax
086721bc +0x030:  lea    -0x7c(%ebp),%ecx
086721bf +0x033:  mov    %ecx,0xc(%esp)
086721c3 +0x037:  mov    %edx,0x8(%esp)
086721c7 +0x03b:  mov    %eax,0x4(%esp)
086721cb +0x03f:  mov    0x8(%ebp),%eax
086721ce +0x042:  mov    %eax,(%esp)
086721d1 +0x045:  call   08670e38 <_ZN5CUser14_GetRecipeItemEmbRi>  ; CUser::_GetRecipeItem(unsigned long, bool, int&)
086721d6 +0x04a:  mov    %eax,-0x58(%ebp)
086721d9 +0x04d:  cmpl   $0x0,-0x58(%ebp)
086721dd +0x051:  jne    086721e9 <+0x5d>
086721df +0x053:  mov    $0x11,%ebx
086721e4 +0x058:  jmp    08673060 <+0xed4>
086721e9 +0x05d:  mov    -0x58(%ebp),%eax
086721ec +0x060:  add    $0x180,%eax
086721f1 +0x065:  mov    %eax,0x4(%esp)
086721f5 +0x069:  mov    0x8(%ebp),%eax
086721f8 +0x06c:  mov    %eax,(%esp)
086721fb +0x06f:  call   0868c45e <_ZN5CUser27is_recipe_items_avatar_typeERKSt6vectorISt4pairIiiESaIS2_EE>  ; CUser::is_recipe_items_avatar_type(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)
08672200 +0x074:  test   %al,%al
08672202 +0x076:  je     08672241 <+0xb5>
08672204 +0x078:  movzwl -0xcb00(%ebp),%edx
0867220b +0x07f:  movzbl -0xcafc(%ebp),%eax
08672212 +0x086:  mov    -0x58(%ebp),%ecx
08672215 +0x089:  mov    %ecx,0x14(%esp)
08672219 +0x08d:  mov    0x18(%ebp),%ecx
0867221c +0x090:  mov    %ecx,0x10(%esp)
08672220 +0x094:  mov    %edx,0xc(%esp)
08672224 +0x098:  mov    %eax,0x8(%esp)
08672228 +0x09c:  mov    0xc(%ebp),%eax
0867222b +0x09f:  mov    %eax,0x4(%esp)
0867222f +0x0a3:  mov    0x8(%ebp),%eax
08672232 +0x0a6:  mov    %eax,(%esp)
08672235 +0x0a9:  call   0868c4f4 <_ZN5CUser27process_recipe_avatar_itemsEibtiPK14CStackableItem>  ; CUser::process_recipe_avatar_items(int, bool, unsigned short, int, CStackableItem const*)
0867223a +0x0ae:  mov    %eax,%ebx
0867223c +0x0b0:  jmp    08673060 <+0xed4>
08672241 +0x0b5:  movzbl -0xcafc(%ebp),%eax
08672248 +0x0bc:  mov    %eax,0x8(%esp)
0867224c +0x0c0:  mov    -0x58(%ebp),%eax
0867224f +0x0c3:  mov    %eax,0x4(%esp)
08672253 +0x0c7:  mov    0x8(%ebp),%eax
08672256 +0x0ca:  mov    %eax,(%esp)
08672259 +0x0cd:  call   08670f1e <_ZN5CUser19_CheckCompoundSkillEPK14CStackableItemb>  ; CUser::_CheckCompoundSkill(CStackableItem const*, bool)
0867225e +0x0d2:  xor    $0x1,%eax
08672261 +0x0d5:  test   %al,%al
08672263 +0x0d7:  je     0867226f <+0xe3>
08672265 +0x0d9:  mov    $0x16,%ebx
0867226a +0x0de:  jmp    08673060 <+0xed4>
0867226f +0x0e3:  lea    -0x120(%ebp),%esi
08672275 +0x0e9:  mov    $0x0,%eax
0867227a +0x0ee:  mov    $0xb,%edx
0867227f +0x0f3:  mov    %esi,%edi
08672281 +0x0f5:  mov    %edx,%ecx
08672283 +0x0f7:  rep stos %eax,%es:(%edi)
08672285 +0x0f9:  lea    -0x14c(%ebp),%esi
0867228b +0x0ff:  mov    $0x0,%eax
08672290 +0x104:  mov    $0xb,%edx
08672295 +0x109:  mov    %esi,%edi
08672297 +0x10b:  mov    %edx,%ecx
08672299 +0x10d:  rep stos %eax,%es:(%edi)
0867229b +0x10f:  mov    0x8(%ebp),%eax
0867229e +0x112:  mov    %eax,(%esp)
086722a1 +0x115:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
086722a6 +0x11a:  mov    %eax,(%esp)
086722a9 +0x11d:  call   08505038 <_ZNK10CInventory15QuickEmptyCountEv>  ; CInventory::QuickEmptyCount() const
086722ae +0x122:  mov    %eax,-0x54(%ebp)
086722b1 +0x125:  lea    -0x178(%ebp),%esi
086722b7 +0x12b:  mov    $0x0,%eax
086722bc +0x130:  mov    $0xb,%edx
086722c1 +0x135:  mov    %esi,%edi
086722c3 +0x137:  mov    %edx,%ecx
086722c5 +0x139:  rep stos %eax,%es:(%edi)
086722c7 +0x13b:  mov    -0x58(%ebp),%eax
086722ca +0x13e:  add    $0x174,%eax
086722cf +0x143:  mov    %eax,0x4(%esp)
086722d3 +0x147:  lea    -0x88(%ebp),%eax
086722d9 +0x14d:  mov    %eax,(%esp)
086722dc +0x150:  call   08237302 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc9ac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc9ac
086722e1 +0x155:  mov    -0x58(%ebp),%eax
086722e4 +0x158:  add    $0x19c,%eax
086722e9 +0x15d:  mov    %eax,(%esp)
086722ec +0x160:  call   0811119a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6ac>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6ac
086722f1 +0x165:  xor    $0x1,%eax
086722f4 +0x168:  test   %al,%al
086722f6 +0x16a:  je     08672369 <+0x1dd>
086722f8 +0x16c:  mov    -0x58(%ebp),%eax
086722fb +0x16f:  lea    0x19c(%eax),%edx
08672301 +0x175:  lea    -0x78(%ebp),%eax
08672304 +0x178:  mov    %edx,0x4(%esp)
08672308 +0x17c:  mov    %eax,(%esp)
0867230b +0x17f:  call   0811124c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x75e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x75e
08672310 +0x184:  sub    $0x4,%esp
08672313 +0x187:  mov    -0x58(%ebp),%eax
08672316 +0x18a:  lea    0x19c(%eax),%edx
0867231c +0x190:  lea    -0x74(%ebp),%eax
0867231f +0x193:  mov    %edx,0x4(%esp)
08672323 +0x197:  mov    %eax,(%esp)
08672326 +0x19a:  call   08111220 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x732>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x732
0867232b +0x19f:  sub    $0x4,%esp
0867232e +0x1a2:  lea    -0x70(%ebp),%eax
08672331 +0x1a5:  lea    -0x88(%ebp),%edx
08672337 +0x1ab:  mov    %edx,0x4(%esp)
0867233b +0x1af:  mov    %eax,(%esp)
0867233e +0x1b2:  call   080dd5d6 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x11f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x11f
08672343 +0x1b7:  sub    $0x4,%esp
08672346 +0x1ba:  mov    -0x78(%ebp),%eax
08672349 +0x1bd:  mov    %eax,0xc(%esp)
0867234d +0x1c1:  mov    -0x74(%ebp),%eax
08672350 +0x1c4:  mov    %eax,0x8(%esp)
08672354 +0x1c8:  mov    -0x70(%ebp),%eax
08672357 +0x1cb:  mov    %eax,0x4(%esp)
0867235b +0x1cf:  lea    -0x88(%ebp),%eax
08672361 +0x1d5:  mov    %eax,(%esp)
08672364 +0x1d8:  call   084a6516 <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x4fe>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x4fe
08672369 +0x1dd:  lea    -0x88(%ebp),%eax
0867236f +0x1e3:  mov    %eax,0x4(%esp)
08672373 +0x1e7:  lea    -0x94(%ebp),%eax
08672379 +0x1ed:  mov    %eax,(%esp)
0867237c +0x1f0:  call   08237302 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc9ac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc9ac
08672381 +0x1f5:  cmpl   $0xf2,0x18(%ebp)
08672388 +0x1fc:  jne    0867239f <+0x213>
0867238a +0x1fe:  lea    -0x94(%ebp),%eax
08672390 +0x204:  mov    %eax,0x4(%esp)
08672394 +0x208:  mov    0x8(%ebp),%eax
08672397 +0x20b:  mov    %eax,(%esp)
0867239a +0x20e:  call   0868ba58 <_ZN5CUser27CalculateExpertJobMaterialsERSt6vectorISt4pairIiiESaIS2_EE>  ; CUser::CalculateExpertJobMaterials(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
0867239f +0x213:  mov    -0x58(%ebp),%eax
086723a2 +0x216:  add    $0x180,%eax
086723a7 +0x21b:  mov    %eax,0x4(%esp)
086723ab +0x21f:  lea    -0xa0(%ebp),%eax
086723b1 +0x225:  mov    %eax,(%esp)
086723b4 +0x228:  call   08237302 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc9ac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc9ac
086723b9 +0x22d:  movzwl -0xcb00(%ebp),%eax
086723c0 +0x234:  mov    %eax,0x8(%esp)
086723c4 +0x238:  lea    -0x94(%ebp),%eax
086723ca +0x23e:  mov    %eax,0x4(%esp)
086723ce +0x242:  mov    0x8(%ebp),%eax
086723d1 +0x245:  mov    %eax,(%esp)
086723d4 +0x248:  call   08672042 <_ZN5CUser23_CalcItemVectorMultiplyERSt6vectorISt4pairIiiESaIS2_EEi>  ; CUser::_CalcItemVectorMultiply(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, int)
086723d9 +0x24d:  movzwl -0xcb00(%ebp),%eax
086723e0 +0x254:  mov    %eax,0x8(%esp)
086723e4 +0x258:  lea    -0xa0(%ebp),%eax
086723ea +0x25e:  mov    %eax,0x4(%esp)
086723ee +0x262:  mov    0x8(%ebp),%eax
086723f1 +0x265:  mov    %eax,(%esp)
086723f4 +0x268:  call   08672042 <_ZN5CUser23_CalcItemVectorMultiplyERSt6vectorISt4pairIiiESaIS2_EEi>  ; CUser::_CalcItemVectorMultiply(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, int)
086723f9 +0x26d:  lea    -0xa0(%ebp),%eax
086723ff +0x273:  mov    %eax,0x4(%esp)
08672403 +0x277:  mov    0x8(%ebp),%eax
08672406 +0x27a:  mov    %eax,(%esp)
08672409 +0x27d:  call   086720d0 <_ZN5CUser27_IsCompoundResult2MoreEquipERKSt6vectorISt4pairIiiESaIS2_EE>  ; CUser::_IsCompoundResult2MoreEquip(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)
0867240e +0x282:  test   %al,%al
08672410 +0x284:  je     0867241c <+0x290>
08672412 +0x286:  mov    $0x17,%ebx
08672417 +0x28b:  jmp    08672ffc <+0xe70>
0867241c +0x290:  mov    0x8(%ebp),%eax
0867241f +0x293:  mov    %eax,(%esp)
08672422 +0x296:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08672427 +0x29b:  lea    -0x94(%ebp),%edx
0867242d +0x2a1:  mov    %edx,0x4(%esp)
08672431 +0x2a5:  mov    %eax,(%esp)
08672434 +0x2a8:  call   08507acc <_ZNK10CInventory17CheckNeedItemListERKSt6vectorISt4pairIiiESaIS2_EE>  ; CInventory::CheckNeedItemList(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&) const
08672439 +0x2ad:  xor    $0x1,%eax
0867243c +0x2b0:  test   %al,%al
0867243e +0x2b2:  je     0867244a <+0x2be>
08672440 +0x2b4:  mov    $0x15,%ebx
08672445 +0x2b9:  jmp    08672ffc <+0xe70>
0867244a +0x2be:  lea    -0xa8(%ebp),%eax
08672450 +0x2c4:  mov    %eax,(%esp)
08672453 +0x2c7:  call   086937d6 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2b
08672458 +0x2cc:  lea    -0x1b5(%ebp),%eax
0867245e +0x2d2:  mov    %eax,(%esp)
08672461 +0x2d5:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08672466 +0x2da:  mov    0x8(%ebp),%eax
08672469 +0x2dd:  mov    %eax,(%esp)
0867246c +0x2e0:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08672471 +0x2e5:  lea    -0x1b5(%ebp),%edx
08672477 +0x2eb:  mov    %edx,0xc(%esp)
0867247b +0x2ef:  lea    -0xa8(%ebp),%edx
08672481 +0x2f5:  mov    %edx,0x8(%esp)
08672485 +0x2f9:  lea    -0x94(%ebp),%edx
0867248b +0x2ff:  mov    %edx,0x4(%esp)
0867248f +0x303:  mov    %eax,(%esp)
08672492 +0x306:  call   08507f1a <_ZNK10CInventory27CheckEquipmentItemConditionERKSt6vectorISt4pairIiiESaIS2_EER16stEquipConditionR10Inven_Item>  ; CInventory::CheckEquipmentItemCondition(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, stEquipCondition&, Inven_Item&) const
08672497 +0x30b:  mov    %eax,-0x50(%ebp)
0867249a +0x30e:  cmpl   $0x0,-0x50(%ebp)
0867249e +0x312:  je     086724a8 <+0x31c>
086724a0 +0x314:  mov    -0x50(%ebp),%ebx
086724a3 +0x317:  jmp    08672ffc <+0xe70>
086724a8 +0x31c:  mov    0x8(%ebp),%eax
086724ab +0x31f:  mov    %eax,(%esp)
086724ae +0x322:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
086724b3 +0x327:  lea    -0x94(%ebp),%edx
086724b9 +0x32d:  mov    %edx,0x8(%esp)
086724bd +0x331:  lea    -0x120(%ebp),%edx
086724c3 +0x337:  mov    %edx,0x4(%esp)
086724c7 +0x33b:  mov    %eax,(%esp)
086724ca +0x33e:  call   08508536 <_ZNK10CInventory12CalBlankSlotEPiRKSt6vectorISt4pairIiiESaIS3_EE>  ; CInventory::CalBlankSlot(int*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&) const
086724cf +0x343:  movzbl -0xcafc(%ebp),%eax
086724d6 +0x34a:  xor    $0x1,%eax
086724d9 +0x34d:  test   %al,%al
086724db +0x34f:  je     086724f4 <+0x368>
086724dd +0x351:  mov    -0x7c(%ebp),%eax
086724e0 +0x354:  cmp    $0x1,%eax
086724e3 +0x357:  jne    086724f4 <+0x368>
086724e5 +0x359:  mov    -0x118(%ebp),%eax
086724eb +0x35f:  add    $0x1,%eax
086724ee +0x362:  mov    %eax,-0x118(%ebp)
086724f4 +0x368:  mov    0x8(%ebp),%eax
086724f7 +0x36b:  mov    %eax,(%esp)
086724fa +0x36e:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
086724ff +0x373:  lea    -0x88(%ebp),%edx
08672505 +0x379:  mov    %edx,0x8(%esp)
08672509 +0x37d:  lea    -0x14c(%ebp),%edx
0867250f +0x383:  mov    %edx,0x4(%esp)
08672513 +0x387:  mov    %eax,(%esp)
08672516 +0x38a:  call   0850891a <_ZNK10CInventory11CalNeedSlotEPiRKSt6vectorISt4pairIiiESaIS3_EE>  ; CInventory::CalNeedSlot(int*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&) const
0867251b +0x38f:  mov    -0x120(%ebp),%eax
08672521 +0x395:  add    %eax,-0x54(%ebp)
08672524 +0x398:  movl   $0x1,-0x44(%ebp)
0867252b +0x39f:  jmp    08672590 <+0x404>
0867252d +0x3a1:  mov    -0x44(%ebp),%eax
08672530 +0x3a4:  mov    -0x14c(%ebp,%eax,4),%edx
08672537 +0x3ab:  mov    -0x44(%ebp),%eax
0867253a +0x3ae:  mov    -0x178(%ebp,%eax,4),%ecx
08672541 +0x3b5:  mov    -0x44(%ebp),%eax
08672544 +0x3b8:  mov    -0x120(%ebp,%eax,4),%eax
0867254b +0x3bf:  lea    (%ecx,%eax,1),%eax
0867254e +0x3c2:  cmp    %eax,%edx
08672550 +0x3c4:  jle    0867258c <+0x400>
08672552 +0x3c6:  mov    -0x44(%ebp),%eax
08672555 +0x3c9:  mov    -0x120(%ebp,%eax,4),%edx
0867255c +0x3d0:  mov    -0x44(%ebp),%eax
0867255f +0x3d3:  mov    -0x178(%ebp,%eax,4),%ecx
08672566 +0x3da:  mov    -0x44(%ebp),%eax
08672569 +0x3dd:  mov    -0x14c(%ebp,%eax,4),%eax
08672570 +0x3e4:  mov    %ecx,%esi
08672572 +0x3e6:  sub    %eax,%esi
08672574 +0x3e8:  mov    %esi,%eax
08672576 +0x3ea:  lea    (%edx,%eax,1),%eax
08672579 +0x3ed:  add    %eax,-0x54(%ebp)
0867257c +0x3f0:  cmpl   $0x0,-0x54(%ebp)
08672580 +0x3f4:  jns    0867258c <+0x400>
08672582 +0x3f6:  mov    $0x4,%ebx
08672587 +0x3fb:  jmp    08672ffc <+0xe70>
0867258c +0x400:  addl   $0x1,-0x44(%ebp)
08672590 +0x404:  cmpl   $0xa,-0x44(%ebp)
08672594 +0x408:  setle  %al
08672597 +0x40b:  test   %al,%al
08672599 +0x40d:  jne    0867252d <+0x3a1>
0867259b +0x40f:  mov    0x8(%ebp),%eax
0867259e +0x412:  mov    %eax,(%esp)
086725a1 +0x415:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
086725a6 +0x41a:  mov    %eax,-0x4c(%ebp)
086725a9 +0x41d:  lea    -0xb0(%ebp),%eax
086725af +0x423:  mov    %eax,(%esp)
086725b2 +0x426:  call   0850d0e8 <_GLOBAL__I_g_emptySlot+0x1d>  ; global constructors keyed to g_emptySlot+0x1d
086725b7 +0x42b:  mov    0x8(%ebp),%eax
086725ba +0x42e:  mov    %eax,(%esp)
086725bd +0x431:  call   08375026 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeff2>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeff2
086725c2 +0x436:  mov    %eax,0x4(%esp)
086725c6 +0x43a:  mov    0x8(%ebp),%eax
086725c9 +0x43d:  mov    %eax,(%esp)
086725cc +0x440:  call   0868bc7c <_ZN5CUser20GetCurExpertJobLevelEi>  ; CUser::GetCurExpertJobLevel(int)
086725d1 +0x445:  mov    %eax,%esi
086725d3 +0x447:  mov    0x8(%ebp),%eax
086725d6 +0x44a:  mov    %eax,(%esp)
086725d9 +0x44d:  call   0822f894 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f3e
086725de +0x452:  lea    -0xb0(%ebp),%edx
086725e4 +0x458:  mov    %edx,0xc(%esp)
086725e8 +0x45c:  mov    %esi,0x8(%esp)
086725ec +0x460:  mov    %eax,0x4(%esp)
086725f0 +0x464:  mov    -0x4c(%ebp),%eax
086725f3 +0x467:  mov    %eax,(%esp)
086725f6 +0x46a:  call   0850ca0c <_ZNK10CInventory35GetExpertJobCompoundResultVariationE20ENUM_EXPERT_JOB_TYPEiRN12STItemScript10SEXPERTJOB31stExpertCompoundResultVariationE>  ; CInventory::GetExpertJobCompoundResultVariation(ENUM_EXPERT_JOB_TYPE, int, STItemScript::SEXPERTJOB::stExpertCompoundResultVariation&) const
086725fb +0x46f:  movb   $0x0,-0x45(%ebp)
086725ff +0x473:  lea    -0x9ac(%ebp),%eax
08672605 +0x479:  mov    %eax,(%esp)
08672608 +0x47c:  call   0822d52c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2bd6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2bd6
0867260d +0x481:  lea    -0xcaeb(%ebp),%eax
08672613 +0x487:  mov    %eax,(%esp)
08672616 +0x48a:  call   0822d3b8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2a62>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2a62
0867261b +0x48f:  lea    -0xcaeb(%ebp),%eax
08672621 +0x495:  mov    %eax,0x4(%esp)
08672625 +0x499:  lea    -0x9ac(%ebp),%eax
0867262b +0x49f:  mov    %eax,(%esp)
0867262e +0x4a2:  call   0822d4f6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ba0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ba0
08672633 +0x4a7:  mov    0x8(%ebp),%eax
08672636 +0x4aa:  mov    %eax,(%esp)
08672639 +0x4ad:  call   081803ca <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x61>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x61
0867263e +0x4b2:  mov    %eax,0x4(%esp)
08672642 +0x4b6:  lea    -0x9ac(%ebp),%eax
08672648 +0x4bc:  mov    %eax,(%esp)
0867264b +0x4bf:  call   084fa314 <_ZN10CInventory7setCopyERKS_>  ; CInventory::setCopy(CInventory const&)
08672650 +0x4c4:  lea    -0x94(%ebp),%eax
08672656 +0x4ca:  mov    %eax,0x4(%esp)
0867265a +0x4ce:  lea    -0x9ac(%ebp),%eax
08672660 +0x4d4:  mov    %eax,(%esp)
08672663 +0x4d7:  call   085058da <_ZN10CInventory19tryDeleteEventItemsERKSt6vectorISt4pairIiiESaIS2_EE>  ; CInventory::tryDeleteEventItems(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)
08672668 +0x4dc:  xor    $0x1,%eax
0867266b +0x4df:  test   %al,%al
0867266d +0x4e1:  je     0867267e <+0x4f2>
0867266f +0x4e3:  mov    $0x11,%ebx
08672674 +0x4e8:  mov    $0x0,%esi
08672679 +0x4ed:  jmp    08672917 <+0x78b>
0867267e +0x4f2:  movzbl -0xcafc(%ebp),%eax
08672685 +0x4f9:  xor    $0x1,%eax
08672688 +0x4fc:  test   %al,%al
0867268a +0x4fe:  je     086726e1 <+0x555>
0867268c +0x500:  movzwl -0xcb00(%ebp),%eax
08672693 +0x507:  movl   $0x0,0x14(%esp)
0867269b +0x50f:  movl   $0x8,0x10(%esp)
086726a3 +0x517:  mov    %eax,0xc(%esp)
086726a7 +0x51b:  mov    0xc(%ebp),%eax
086726aa +0x51e:  mov    %eax,0x8(%esp)
086726ae +0x522:  movl   $0x1,0x4(%esp)
086726b6 +0x52a:  lea    -0x9ac(%ebp),%eax
086726bc +0x530:  mov    %eax,(%esp)
086726bf +0x533:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
086726c4 +0x538:  mov    %al,-0x3d(%ebp)
086726c7 +0x53b:  movzbl -0x3d(%ebp),%eax
086726cb +0x53f:  xor    $0x1,%eax
086726ce +0x542:  test   %al,%al
086726d0 +0x544:  je     086726e1 <+0x555>
086726d2 +0x546:  mov    $0x11,%ebx
086726d7 +0x54b:  mov    $0x0,%esi
086726dc +0x550:  jmp    08672917 <+0x78b>
086726e1 +0x555:  flds   -0xac(%ebp)
086726e7 +0x55b:  fldz
086726e9 +0x55d:  fxch   %st(1)
086726eb +0x55f:  fucompp
086726ed +0x561:  fnstsw %ax
086726ef +0x563:  sahf
086726f0 +0x564:  seta   %al
086726f3 +0x567:  test   %al,%al
086726f5 +0x569:  je     086728c8 <+0x73c>
086726fb +0x56f:  lea    -0xa0(%ebp),%eax
08672701 +0x575:  mov    %eax,0x4(%esp)
08672705 +0x579:  lea    -0xd8(%ebp),%eax
0867270b +0x57f:  mov    %eax,(%esp)
0867270e +0x582:  call   08237302 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc9ac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc9ac
08672713 +0x587:  lea    -0xdc(%ebp),%eax
08672719 +0x58d:  lea    -0xd8(%ebp),%edx
0867271f +0x593:  mov    %edx,0x4(%esp)
08672723 +0x597:  mov    %eax,(%esp)
08672726 +0x59a:  call   080dd5b2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xfb>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xfb
0867272b +0x59f:  sub    $0x4,%esp
0867272e +0x5a2:  jmp    0867281c <+0x690>
08672733 +0x5a7:  lea    -0xdc(%ebp),%eax
08672739 +0x5ad:  mov    %eax,(%esp)
0867273c +0x5b0:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
08672741 +0x5b5:  mov    (%eax),%esi
08672743 +0x5b7:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08672748 +0x5bc:  mov    %esi,0x4(%esp)
0867274c +0x5c0:  mov    %eax,(%esp)
0867274f +0x5c3:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08672754 +0x5c8:  mov    %eax,-0x3c(%ebp)
08672757 +0x5cb:  cmpl   $0x0,-0x3c(%ebp)
0867275b +0x5cf:  je     0867278e <+0x602>
0867275d +0x5d1:  mov    -0x3c(%ebp),%eax
08672760 +0x5d4:  mov    %eax,(%esp)
08672763 +0x5d7:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
08672768 +0x5dc:  xor    $0x1,%eax
0867276b +0x5df:  test   %al,%al
0867276d +0x5e1:  je     08672775 <+0x5e9>
0867276f +0x5e3:  movb   $0x1,-0x45(%ebp)
08672773 +0x5e7:  jmp    0867278e <+0x602>
08672775 +0x5e9:  mov    -0x3c(%ebp),%eax
08672778 +0x5ec:  mov    %eax,(%esp)
0867277b +0x5ef:  call   0822c9fc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x20a6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x20a6
08672780 +0x5f4:  cmp    $0x1,%eax
08672783 +0x5f7:  sete   %al
08672786 +0x5fa:  test   %al,%al
08672788 +0x5fc:  je     0867278e <+0x602>
0867278a +0x5fe:  movb   $0x1,-0x45(%ebp)
0867278e +0x602:  movzbl -0x45(%ebp),%eax
08672792 +0x606:  xor    $0x1,%eax
08672795 +0x609:  test   %al,%al
08672797 +0x60b:  je     086727fc <+0x670>
08672799 +0x60d:  lea    -0xdc(%ebp),%eax
0867279f +0x613:  mov    %eax,(%esp)
086727a2 +0x616:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
086727a7 +0x61b:  mov    %eax,%esi
086727a9 +0x61d:  lea    -0xdc(%ebp),%eax
086727af +0x623:  mov    %eax,(%esp)
086727b2 +0x626:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
086727b7 +0x62b:  mov    0x4(%eax),%edx
086727ba +0x62e:  flds   -0xac(%ebp)
086727c0 +0x634:  flds   ""
086727c6 +0x63a:  fdivrp %st,%st(1)
086727c8 +0x63c:  fnstcw -0xcb02(%ebp)
086727ce +0x642:  movzwl -0xcb02(%ebp),%eax
086727d5 +0x649:  mov    $0xc,%ah
086727d7 +0x64b:  mov    %ax,-0xcb04(%ebp)
086727de +0x652:  fldcw  -0xcb04(%ebp)
086727e4 +0x658:  fistpl -0xcb08(%ebp)
086727ea +0x65e:  fldcw  -0xcb02(%ebp)
086727f0 +0x664:  mov    -0xcb08(%ebp),%eax
086727f6 +0x66a:  imul   %edx,%eax
086727f9 +0x66d:  mov    %eax,0x4(%esi)
086727fc +0x670:  lea    -0x68(%ebp),%eax
086727ff +0x673:  movl   $0x0,0x8(%esp)
08672807 +0x67b:  lea    -0xdc(%ebp),%edx
0867280d +0x681:  mov    %edx,0x4(%esp)
08672811 +0x685:  mov    %eax,(%esp)
08672814 +0x688:  call   08388d9c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1883c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1883c
08672819 +0x68d:  sub    $0x4,%esp
0867281c +0x690:  lea    -0x6c(%ebp),%eax
0867281f +0x693:  lea    -0xd8(%ebp),%edx
08672825 +0x699:  mov    %edx,0x4(%esp)
08672829 +0x69d:  mov    %eax,(%esp)
0867282c +0x6a0:  call   080dd5d6 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x11f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x11f
08672831 +0x6a5:  sub    $0x4,%esp
08672834 +0x6a8:  lea    -0x6c(%ebp),%eax
08672837 +0x6ab:  mov    %eax,0x4(%esp)
0867283b +0x6af:  lea    -0xdc(%ebp),%eax
08672841 +0x6b5:  mov    %eax,(%esp)
08672844 +0x6b8:  call   081111de <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6f0>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6f0
08672849 +0x6bd:  test   %al,%al
0867284b +0x6bf:  jne    08672733 <+0x5a7>
08672851 +0x6c5:  lea    -0xd8(%ebp),%eax
08672857 +0x6cb:  mov    %eax,0x4(%esp)
0867285b +0x6cf:  lea    -0x9ac(%ebp),%eax
08672861 +0x6d5:  mov    %eax,(%esp)
08672864 +0x6d8:  call   0850675e <_ZN10CInventory19tryInsertEventItemsERKSt6vectorISt4pairIiiESaIS2_EE>  ; CInventory::tryInsertEventItems(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)
08672869 +0x6dd:  test   %eax,%eax
0867286b +0x6df:  sete   %al
0867286e +0x6e2:  test   %al,%al
08672870 +0x6e4:  je     08672890 <+0x704>
08672872 +0x6e6:  cmpb   $0x0,-0x45(%ebp)
08672876 +0x6ea:  je     08672884 <+0x6f8>
08672878 +0x6ec:  mov    $0x4,%ebx
0867287d +0x6f1:  mov    $0x0,%esi
08672882 +0x6f6:  jmp    086728af <+0x723>
08672884 +0x6f8:  mov    $0x64,%ebx
08672889 +0x6fd:  mov    $0x0,%esi
0867288e +0x702:  jmp    086728af <+0x723>
08672890 +0x704:  mov    $0x1,%esi
08672895 +0x709:  jmp    086728af <+0x723>
08672897 +0x70b:  mov    %edx,%ebx
08672899 +0x70d:  mov    %eax,%esi
0867289b +0x70f:  lea    -0xd8(%ebp),%eax
086728a1 +0x715:  mov    %eax,(%esp)
086728a4 +0x718:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
086728a9 +0x71d:  mov    %esi,%eax
086728ab +0x71f:  mov    %ebx,%edx
086728ad +0x721:  jmp    086728fc <+0x770>
086728af +0x723:  lea    -0xd8(%ebp),%eax
086728b5 +0x729:  mov    %eax,(%esp)
086728b8 +0x72c:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
086728bd +0x731:  test   %esi,%esi
086728bf +0x733:  jne    086728f5 <+0x769>
086728c1 +0x735:  mov    $0x0,%esi
086728c6 +0x73a:  jmp    08672917 <+0x78b>
086728c8 +0x73c:  lea    -0xa0(%ebp),%eax
086728ce +0x742:  mov    %eax,0x4(%esp)
086728d2 +0x746:  lea    -0x9ac(%ebp),%eax
086728d8 +0x74c:  mov    %eax,(%esp)
086728db +0x74f:  call   0850675e <_ZN10CInventory19tryInsertEventItemsERKSt6vectorISt4pairIiiESaIS2_EE>  ; CInventory::tryInsertEventItems(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)
086728e0 +0x754:  test   %eax,%eax
086728e2 +0x756:  sete   %al
086728e5 +0x759:  test   %al,%al
086728e7 +0x75b:  je     086728f5 <+0x769>
086728e9 +0x75d:  mov    $0x4,%ebx
086728ee +0x762:  mov    $0x0,%esi
086728f3 +0x767:  jmp    08672917 <+0x78b>
086728f5 +0x769:  mov    $0x1,%esi
086728fa +0x76e:  jmp    08672917 <+0x78b>
086728fc +0x770:  mov    %edx,%ebx
086728fe +0x772:  mov    %eax,%esi
08672900 +0x774:  lea    -0x9ac(%ebp),%eax
08672906 +0x77a:  mov    %eax,(%esp)
08672909 +0x77d:  call   0822d600 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2caa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2caa
0867290e +0x782:  mov    %esi,%eax
08672910 +0x784:  mov    %ebx,%edx
08672912 +0x786:  jmp    08672fe4 <+0xe58>
08672917 +0x78b:  lea    -0x9ac(%ebp),%eax
0867291d +0x791:  mov    %eax,(%esp)
08672920 +0x794:  call   0822d600 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2caa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2caa
08672925 +0x799:  test   %esi,%esi
08672927 +0x79b:  je     08672ffc <+0xe70>
0867292d +0x7a1:  movb   $0x0,-0xb1(%ebp)
08672934 +0x7a8:  lea    -0xc0(%ebp),%eax
0867293a +0x7ae:  mov    %eax,(%esp)
0867293d +0x7b1:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08672942 +0x7b6:  mov    0x18(%ebp),%eax
08672945 +0x7b9:  mov    %eax,0x8(%esp)
08672949 +0x7bd:  movl   $0x1,0x4(%esp)
08672951 +0x7c5:  lea    -0xc0(%ebp),%eax
08672957 +0x7cb:  mov    %eax,(%esp)
0867295a +0x7ce:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0867295f +0x7d3:  movl   $0x1,0x4(%esp)
08672967 +0x7db:  lea    -0xc0(%ebp),%eax
0867296d +0x7e1:  mov    %eax,(%esp)
08672970 +0x7e4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08672975 +0x7e9:  mov    -0x58(%ebp),%eax
08672978 +0x7ec:  movzbl 0x199(%eax),%eax
0867297f +0x7f3:  test   %al,%al
08672981 +0x7f5:  je     08672d0c <+0xb80>
08672987 +0x7fb:  mov    -0x58(%ebp),%eax
0867298a +0x7fe:  add    $0x180,%eax
0867298f +0x803:  mov    %eax,(%esp)
08672992 +0x806:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
08672997 +0x80b:  mov    %eax,0x4(%esp)
0867299b +0x80f:  lea    -0xc0(%ebp),%eax
086729a1 +0x815:  mov    %eax,(%esp)
086729a4 +0x818:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086729a9 +0x81d:  mov    -0x58(%ebp),%eax
086729ac +0x820:  lea    0x180(%eax),%edx
086729b2 +0x826:  lea    -0xe0(%ebp),%eax
086729b8 +0x82c:  mov    %edx,0x4(%esp)
086729bc +0x830:  mov    %eax,(%esp)
086729bf +0x833:  call   08111220 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x732>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x732
086729c4 +0x838:  sub    $0x4,%esp
086729c7 +0x83b:  mov    -0x58(%ebp),%eax
086729ca +0x83e:  lea    0x180(%eax),%edx
086729d0 +0x844:  lea    -0xe4(%ebp),%eax
086729d6 +0x84a:  mov    %edx,0x4(%esp)
086729da +0x84e:  mov    %eax,(%esp)
086729dd +0x851:  call   0811124c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x75e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x75e
086729e2 +0x856:  sub    $0x4,%esp
086729e5 +0x859:  jmp    08672a3a <+0x8ae>
086729e7 +0x85b:  lea    -0xe0(%ebp),%eax
086729ed +0x861:  mov    %eax,(%esp)
086729f0 +0x864:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
086729f5 +0x869:  mov    (%eax),%eax
086729f7 +0x86b:  mov    %eax,0x4(%esp)
086729fb +0x86f:  lea    -0xc0(%ebp),%eax
08672a01 +0x875:  mov    %eax,(%esp)
08672a04 +0x878:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08672a09 +0x87d:  lea    -0xe0(%ebp),%eax
08672a0f +0x883:  mov    %eax,(%esp)
08672a12 +0x886:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
08672a17 +0x88b:  mov    0x4(%eax),%eax
08672a1a +0x88e:  mov    %eax,0x4(%esp)
08672a1e +0x892:  lea    -0xc0(%ebp),%eax
08672a24 +0x898:  mov    %eax,(%esp)
08672a27 +0x89b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08672a2c +0x8a0:  lea    -0xe0(%ebp),%eax
08672a32 +0x8a6:  mov    %eax,(%esp)
08672a35 +0x8a9:  call   0823dcd0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x8e4e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x8e4e
08672a3a +0x8ae:  lea    -0xe4(%ebp),%eax
08672a40 +0x8b4:  mov    %eax,0x4(%esp)
08672a44 +0x8b8:  lea    -0xe0(%ebp),%eax
08672a4a +0x8be:  mov    %eax,(%esp)
08672a4d +0x8c1:  call   081938e5 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x54d>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x54d
08672a52 +0x8c6:  test   %al,%al
08672a54 +0x8c8:  jne    086729e7 <+0x85b>
08672a56 +0x8ca:  movl   $0x0,-0xe8(%ebp)
08672a60 +0x8d4:  movl   $0x0,-0x38(%ebp)
08672a67 +0x8db:  movl   $0x0,-0x34(%ebp)
08672a6e +0x8e2:  movl   $0x0,-0x30(%ebp)
08672a75 +0x8e9:  flds   -0xac(%ebp)
08672a7b +0x8ef:  flds   ""
08672a81 +0x8f5:  fdivrp %st,%st(1)
08672a83 +0x8f7:  fstps  -0x2c(%ebp)
08672a86 +0x8fa:  movl   $0x0,-0x28(%ebp)
08672a8d +0x901:  jmp    08672afb <+0x96f>
08672a8f +0x903:  lea    -0xe8(%ebp),%eax
08672a95 +0x909:  mov    %eax,0x8(%esp)
08672a99 +0x90d:  mov    -0x58(%ebp),%eax
08672a9c +0x910:  mov    %eax,0x4(%esp)
08672aa0 +0x914:  mov    0x8(%ebp),%eax
08672aa3 +0x917:  mov    %eax,(%esp)
08672aa6 +0x91a:  call   0849b462 <_ZN10expert_job10CExpertJob9IsSuccessEP5CUserPK14CStackableItemRi>  ; expert_job::CExpertJob::IsSuccess(CUser*, CStackableItem const*, int&)
08672aab +0x91f:  test   %al,%al
08672aad +0x921:  je     08672af7 <+0x96b>
08672aaf +0x923:  mov    -0xe8(%ebp),%eax
08672ab5 +0x929:  add    %eax,-0x34(%ebp)
08672ab8 +0x92c:  movl   $0x64,(%esp)
08672abf +0x933:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
08672ac4 +0x938:  mov    %eax,-0xcb08(%ebp)
08672aca +0x93e:  fildl  -0xcb08(%ebp)
08672ad0 +0x944:  flds   -0xb0(%ebp)
08672ad6 +0x94a:  fucompp
08672ad8 +0x94c:  fnstsw %ax
08672ada +0x94e:  test   $0x45,%ah
08672add +0x951:  sete   %al
08672ae0 +0x954:  test   %al,%al
08672ae2 +0x956:  je     08672af3 <+0x967>
08672ae4 +0x958:  movzbl -0x45(%ebp),%eax
08672ae8 +0x95c:  xor    $0x1,%eax
08672aeb +0x95f:  test   %al,%al
08672aed +0x961:  je     08672af3 <+0x967>
08672aef +0x963:  addl   $0x1,-0x30(%ebp)
08672af3 +0x967:  addl   $0x1,-0x38(%ebp)
08672af7 +0x96b:  addl   $0x1,-0x28(%ebp)
08672afb +0x96f:  movzwl -0xcb00(%ebp),%eax
08672b02 +0x976:  cmp    -0x28(%ebp),%eax
08672b05 +0x979:  setg   %al
08672b08 +0x97c:  test   %al,%al
08672b0a +0x97e:  jne    08672a8f <+0x903>
08672b0c +0x980:  cmpl   $0x0,-0x38(%ebp)
08672b10 +0x984:  jle    08672caa <+0xb1e>
08672b16 +0x98a:  mov    0x8(%ebp),%eax
08672b19 +0x98d:  mov    %eax,(%esp)
08672b1c +0x990:  call   08375026 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeff2>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeff2
08672b21 +0x995:  add    -0x34(%ebp),%eax
08672b24 +0x998:  mov    %eax,0x4(%esp)
08672b28 +0x99c:  mov    0x8(%ebp),%eax
08672b2b +0x99f:  mov    %eax,(%esp)
08672b2e +0x9a2:  call   0849ae40 <_ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri>  ; expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)
08672b33 +0x9a7:  lea    -0xec(%ebp),%eax
08672b39 +0x9ad:  lea    -0xa0(%ebp),%edx
08672b3f +0x9b3:  mov    %edx,0x4(%esp)
08672b43 +0x9b7:  mov    %eax,(%esp)
08672b46 +0x9ba:  call   080dd5b2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xfb>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xfb
08672b4b +0x9bf:  sub    $0x4,%esp
08672b4e +0x9c2:  lea    -0xf0(%ebp),%eax
08672b54 +0x9c8:  lea    -0xa0(%ebp),%edx
08672b5a +0x9ce:  mov    %edx,0x4(%esp)
08672b5e +0x9d2:  mov    %eax,(%esp)
08672b61 +0x9d5:  call   080dd5d6 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x11f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x11f
08672b66 +0x9da:  sub    $0x4,%esp
08672b69 +0x9dd:  jmp    08672c88 <+0xafc>
08672b6e +0x9e2:  lea    -0xec(%ebp),%eax
08672b74 +0x9e8:  mov    %eax,(%esp)
08672b77 +0x9eb:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
08672b7c +0x9f0:  mov    0x4(%eax),%eax
08672b7f +0x9f3:  movzwl -0xcb00(%ebp),%edi
08672b86 +0x9fa:  mov    %edi,-0xcb0c(%ebp)
08672b8c +0xa00:  mov    %eax,%edx
08672b8e +0xa02:  sar    $0x1f,%edx
08672b91 +0xa05:  idivl  -0xcb0c(%ebp)
08672b97 +0xa0b:  mov    %eax,-0x24(%ebp)
08672b9a +0xa0e:  lea    -0xec(%ebp),%eax
08672ba0 +0xa14:  mov    %eax,(%esp)
08672ba3 +0xa17:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
08672ba8 +0xa1c:  mov    %eax,%ebx
08672baa +0xa1e:  lea    -0xec(%ebp),%eax
08672bb0 +0xa24:  mov    %eax,(%esp)
08672bb3 +0xa27:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
08672bb8 +0xa2c:  mov    0x4(%eax),%eax
08672bbb +0xa2f:  movzwl -0xcb00(%ebp),%ecx
08672bc2 +0xa36:  mov    %ecx,-0xcb0c(%ebp)
08672bc8 +0xa3c:  mov    %eax,%edx
08672bca +0xa3e:  sar    $0x1f,%edx
08672bcd +0xa41:  idivl  -0xcb0c(%ebp)
08672bd3 +0xa47:  imul   -0x38(%ebp),%eax
08672bd7 +0xa4b:  mov    %eax,0x4(%ebx)
08672bda +0xa4e:  cmpl   $0x0,-0x30(%ebp)
08672bde +0xa52:  jle    08672c31 <+0xaa5>
08672be0 +0xa54:  fildl  -0x24(%ebp)
08672be3 +0xa57:  fmuls  -0x2c(%ebp)
08672be6 +0xa5a:  fildl  -0x24(%ebp)
08672be9 +0xa5d:  fsubrp %st,%st(1)
08672beb +0xa5f:  fnstcw -0xcb02(%ebp)
08672bf1 +0xa65:  movzwl -0xcb02(%ebp),%eax
08672bf8 +0xa6c:  mov    $0xc,%ah
08672bfa +0xa6e:  mov    %ax,-0xcb04(%ebp)
08672c01 +0xa75:  fldcw  -0xcb04(%ebp)
08672c07 +0xa7b:  fistpl -0x20(%ebp)
08672c0a +0xa7e:  fldcw  -0xcb02(%ebp)
08672c10 +0xa84:  mov    -0x20(%ebp),%eax
08672c13 +0xa87:  imul   -0x30(%ebp),%eax
08672c17 +0xa8b:  mov    %eax,-0x20(%ebp)
08672c1a +0xa8e:  lea    -0xec(%ebp),%eax
08672c20 +0xa94:  mov    %eax,(%esp)
08672c23 +0xa97:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
08672c28 +0xa9c:  mov    0x4(%eax),%edx
08672c2b +0xa9f:  add    -0x20(%ebp),%edx
08672c2e +0xaa2:  mov    %edx,0x4(%eax)
08672c31 +0xaa5:  lea    -0xec(%ebp),%eax
08672c37 +0xaab:  mov    %eax,(%esp)
08672c3a +0xaae:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
08672c3f +0xab3:  mov    0x4(%eax),%edi
08672c42 +0xab6:  lea    -0xec(%ebp),%eax
08672c48 +0xabc:  mov    %eax,(%esp)
08672c4b +0xabf:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
08672c50 +0xac4:  mov    (%eax),%eax
08672c52 +0xac6:  mov    %eax,%esi
08672c54 +0xac8:  mov    0x8(%ebp),%eax
08672c57 +0xacb:  mov    %eax,(%esp)
08672c5a +0xace:  call   0822f894 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f3e
08672c5f +0xad3:  mov    %eax,%ebx
08672c61 +0xad5:  call   0860f940 <_Z29GetInstanceExpertJobStatisticv>  ; GetInstanceExpertJobStatistic()
08672c66 +0xada:  mov    %edi,0xc(%esp)
08672c6a +0xade:  mov    %esi,0x8(%esp)
08672c6e +0xae2:  mov    %ebx,0x4(%esp)
08672c72 +0xae6:  mov    %eax,(%esp)
08672c75 +0xae9:  call   0860f9d4 <_ZN19CExpertJobStatistic17increaseItemCountE20ENUM_EXPERT_JOB_TYPEmi>  ; CExpertJobStatistic::increaseItemCount(ENUM_EXPERT_JOB_TYPE, unsigned long, int)
08672c7a +0xaee:  lea    -0xec(%ebp),%eax
08672c80 +0xaf4:  mov    %eax,(%esp)
08672c83 +0xaf7:  call   0811120a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x71c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x71c
08672c88 +0xafc:  lea    -0xf0(%ebp),%eax
08672c8e +0xb02:  mov    %eax,0x4(%esp)
08672c92 +0xb06:  lea    -0xec(%ebp),%eax
08672c98 +0xb0c:  mov    %eax,(%esp)
08672c9b +0xb0f:  call   081111de <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6f0>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6f0
08672ca0 +0xb14:  test   %al,%al
08672ca2 +0xb16:  jne    08672b6e <+0x9e2>
08672ca8 +0xb1c:  jmp    08672cb8 <+0xb2c>
08672caa +0xb1e:  lea    -0xa0(%ebp),%eax
08672cb0 +0xb24:  mov    %eax,(%esp)
08672cb3 +0xb27:  call   0817a342 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x3c0>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x3c0
08672cb8 +0xb2c:  mov    -0x38(%ebp),%eax
08672cbb +0xb2f:  mov    %eax,0x4(%esp)
08672cbf +0xb33:  lea    -0xc0(%ebp),%eax
08672cc5 +0xb39:  mov    %eax,(%esp)
08672cc8 +0xb3c:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08672ccd +0xb41:  movzwl -0xcb00(%ebp),%eax
08672cd4 +0xb48:  sub    -0x38(%ebp),%eax
08672cd7 +0xb4b:  mov    %eax,0x4(%esp)
08672cdb +0xb4f:  lea    -0xc0(%ebp),%eax
08672ce1 +0xb55:  mov    %eax,(%esp)
08672ce4 +0xb58:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08672ce9 +0xb5d:  mov    -0x58(%ebp),%eax
08672cec +0xb60:  movzbl 0x199(%eax),%eax
08672cf3 +0xb67:  test   %al,%al
08672cf5 +0xb69:  je     08672d0c <+0xb80>
08672cf7 +0xb6b:  mov    -0x30(%ebp),%eax
08672cfa +0xb6e:  mov    %eax,0x4(%esp)
08672cfe +0xb72:  lea    -0xc0(%ebp),%eax
08672d04 +0xb78:  mov    %eax,(%esp)
08672d07 +0xb7b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08672d0c +0xb80:  lea    -0xcc(%ebp),%eax
08672d12 +0xb86:  mov    %eax,(%esp)
08672d15 +0xb89:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
08672d1a +0xb8e:  lea    -0xcc(%ebp),%eax
08672d20 +0xb94:  mov    %eax,(%esp)
08672d23 +0xb97:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
08672d28 +0xb9c:  movzwl -0xcb00(%ebp),%ebx
08672d2f +0xba3:  movzbl -0xcafc(%ebp),%ecx
08672d36 +0xbaa:  lea    -0x1b5(%ebp),%eax
08672d3c +0xbb0:  mov    %eax,0x30(%esp)
08672d40 +0xbb4:  mov    -0x58(%ebp),%eax
08672d43 +0xbb7:  mov    %eax,0x2c(%esp)
08672d47 +0xbbb:  mov    -0xa8(%ebp),%eax
08672d4d +0xbc1:  mov    -0xa4(%ebp),%edx
08672d53 +0xbc7:  mov    %eax,0x24(%esp)
08672d57 +0xbcb:  mov    %edx,0x28(%esp)
08672d5b +0xbcf:  mov    %ebx,0x20(%esp)
08672d5f +0xbd3:  lea    -0xb1(%ebp),%eax
08672d65 +0xbd9:  mov    %eax,0x1c(%esp)
08672d69 +0xbdd:  lea    -0xc0(%ebp),%eax
08672d6f +0xbe3:  mov    %eax,0x18(%esp)
08672d73 +0xbe7:  mov    %ecx,0x14(%esp)
08672d77 +0xbeb:  mov    0xc(%ebp),%eax
08672d7a +0xbee:  mov    %eax,0x10(%esp)
08672d7e +0xbf2:  lea    -0xcc(%ebp),%eax
08672d84 +0xbf8:  mov    %eax,0xc(%esp)
08672d88 +0xbfc:  lea    -0xa0(%ebp),%eax
08672d8e +0xc02:  mov    %eax,0x8(%esp)
08672d92 +0xc06:  lea    -0x94(%ebp),%eax
08672d98 +0xc0c:  mov    %eax,0x4(%esp)
08672d9c +0xc10:  mov    0x8(%ebp),%eax
08672d9f +0xc13:  mov    %eax,(%esp)
08672da2 +0xc16:  call   08671102 <_ZN5CUser17_ProcCompoundCoreERKSt6vectorISt4pairIiiESaIS2_EERS4_RS0_IiSaIiEEibP11PacketGuardRbt16stEquipConditionP14CStackableItemR10Inven_Item>  ; CUser::_ProcCompoundCore(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, std::vector<int, std::allocator<int> >&, int, bool, PacketGuard*, bool&, unsigned short, stEquipCondition, CStackableItem*, Inven_Item&)
08672da7 +0xc1b:  xor    $0x1,%eax
08672daa +0xc1e:  test   %al,%al
08672dac +0xc20:  je     08672db8 <+0xc2c>
08672dae +0xc22:  mov    $0x11,%ebx
08672db3 +0xc27:  jmp    08672fac <+0xe20>
08672db8 +0xc2c:  movl   $0x1,0x4(%esp)
08672dc0 +0xc34:  lea    -0xc0(%ebp),%eax
08672dc6 +0xc3a:  mov    %eax,(%esp)
08672dc9 +0xc3d:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08672dce +0xc42:  lea    -0xc0(%ebp),%eax
08672dd4 +0xc48:  mov    %eax,0x4(%esp)
08672dd8 +0xc4c:  mov    0x8(%ebp),%eax
08672ddb +0xc4f:  mov    %eax,(%esp)
08672dde +0xc52:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08672de3 +0xc57:  lea    -0xcc(%ebp),%eax
08672de9 +0xc5d:  mov    %eax,(%esp)
08672dec +0xc60:  call   0811c960 <_GLOBAL__I_events+0x1003>  ; global constructors keyed to events+0x1003
08672df1 +0xc65:  xor    $0x1,%eax
08672df4 +0xc68:  test   %al,%al
08672df6 +0xc6a:  je     08672ef8 <+0xd6c>
08672dfc +0xc70:  lea    -0x64(%ebp),%eax
08672dff +0xc73:  lea    -0xcc(%ebp),%edx
08672e05 +0xc79:  mov    %edx,0x4(%esp)
08672e09 +0xc7d:  mov    %eax,(%esp)
08672e0c +0xc80:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
08672e11 +0xc85:  sub    $0x4,%esp
08672e14 +0xc88:  lea    -0x64(%ebp),%eax
08672e17 +0xc8b:  mov    %eax,0x4(%esp)
08672e1b +0xc8f:  lea    -0xf4(%ebp),%eax
08672e21 +0xc95:  mov    %eax,(%esp)
08672e24 +0xc98:  call   080f99ec <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1f8>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1f8
08672e29 +0xc9d:  jmp    08672ec3 <+0xd37>
08672e2e +0xca2:  lea    -0xf4(%ebp),%eax
08672e34 +0xca8:  mov    %eax,(%esp)
08672e37 +0xcab:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
08672e3c +0xcb0:  mov    (%eax),%eax
08672e3e +0xcb2:  mov    %eax,-0x1c(%ebp)
08672e41 +0xcb5:  cmpl   $0x0,-0x1c(%ebp)
08672e45 +0xcb9:  js     08672ea3 <+0xd17>
08672e47 +0xcbb:  mov    0x8(%ebp),%eax
08672e4a +0xcbe:  mov    %eax,(%esp)
08672e4d +0xcc1:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08672e52 +0xcc6:  lea    -0x1f2(%ebp),%edx
08672e58 +0xccc:  mov    -0x1c(%ebp),%ecx
08672e5b +0xccf:  mov    %ecx,0xc(%esp)
08672e5f +0xcd3:  movl   $0x1,0x8(%esp)
08672e67 +0xcdb:  mov    %eax,0x4(%esp)
08672e6b +0xcdf:  mov    %edx,(%esp)
08672e6e +0xce2:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08672e73 +0xce7:  sub    $0x4,%esp
08672e76 +0xcea:  movzbl -0x1f1(%ebp),%eax
08672e7d +0xcf1:  cmp    $0x1,%al
08672e7f +0xcf3:  jne    08672ea3 <+0xd17>
08672e81 +0xcf5:  mov    -0x1c(%ebp),%eax
08672e84 +0xcf8:  mov    %eax,0xc(%esp)
08672e88 +0xcfc:  movl   $0x0,0x8(%esp)
08672e90 +0xd04:  movl   $0x1,0x4(%esp)
08672e98 +0xd0c:  mov    0x8(%ebp),%eax
08672e9b +0xd0f:  mov    %eax,(%esp)
08672e9e +0xd12:  call   0867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItem(CUser::eSendTarget, ENUM_ITEMSPACE, int)
08672ea3 +0xd17:  lea    -0x5c(%ebp),%eax
08672ea6 +0xd1a:  movl   $0x0,0x8(%esp)
08672eae +0xd22:  lea    -0xf4(%ebp),%edx
08672eb4 +0xd28:  mov    %edx,0x4(%esp)
08672eb8 +0xd2c:  mov    %eax,(%esp)
08672ebb +0xd2f:  call   081938b2 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x51a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x51a
08672ec0 +0xd34:  sub    $0x4,%esp
08672ec3 +0xd37:  lea    -0x60(%ebp),%eax
08672ec6 +0xd3a:  lea    -0xcc(%ebp),%edx
08672ecc +0xd40:  mov    %edx,0x4(%esp)
08672ed0 +0xd44:  mov    %eax,(%esp)
08672ed3 +0xd47:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
08672ed8 +0xd4c:  sub    $0x4,%esp
08672edb +0xd4f:  lea    -0x60(%ebp),%eax
08672ede +0xd52:  mov    %eax,0x4(%esp)
08672ee2 +0xd56:  lea    -0xf4(%ebp),%eax
08672ee8 +0xd5c:  mov    %eax,(%esp)
08672eeb +0xd5f:  call   08193428 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x90>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x90
08672ef0 +0xd64:  test   %al,%al
08672ef2 +0xd66:  jne    08672e2e <+0xca2>
08672ef8 +0xd6c:  movzbl -0xb1(%ebp),%eax
08672eff +0xd73:  test   %al,%al
08672f01 +0xd75:  je     08672f16 <+0xd8a>
08672f03 +0xd77:  movl   $0x16,0x4(%esp)
08672f0b +0xd7f:  mov    0x8(%ebp),%eax
08672f0e +0xd82:  mov    %eax,(%esp)
08672f11 +0xd85:  call   0865dd14 <_ZN5CUser10send_equipEi>  ; CUser::send_equip(int)
08672f16 +0xd8a:  mov    -0x58(%ebp),%eax
08672f19 +0xd8d:  mov    %eax,(%esp)
08672f1c +0xd90:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
08672f21 +0xd95:  mov    %eax,0x4(%esp)
08672f25 +0xd99:  mov    0x8(%ebp),%eax
08672f28 +0xd9c:  mov    %eax,(%esp)
08672f2b +0xd9f:  call   086646c2 <_ZN5CUser15_onCompoundItemEi>  ; CUser::_onCompoundItem(int)
08672f30 +0xda4:  mov    -0x58(%ebp),%eax
08672f33 +0xda7:  mov    %eax,(%esp)
08672f36 +0xdaa:  call   08545fda <_GLOBAL__I__ZN16CItemMakingSkillC2Ev+0x2b>  ; global constructors keyed to CItemMakingSkill::CItemMakingSkill()+0x2b
08672f3b +0xdaf:  test   %eax,%eax
08672f3d +0xdb1:  setne  %al
08672f40 +0xdb4:  test   %al,%al
08672f42 +0xdb6:  je     08672f6d <+0xde1>
08672f44 +0xdb8:  movl   $0xa,0x4(%esp)
08672f4c +0xdc0:  mov    0x8(%ebp),%eax
08672f4f +0xdc3:  mov    %eax,(%esp)
08672f52 +0xdc6:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
08672f57 +0xdcb:  mov    0x8(%ebp),%edx
08672f5a +0xdce:  mov    %edx,0x8(%esp)
08672f5e +0xdd2:  mov    -0x58(%ebp),%edx
08672f61 +0xdd5:  mov    %edx,0x4(%esp)
08672f65 +0xdd9:  mov    %eax,(%esp)
08672f68 +0xddc:  call   085453e0 <_ZN16CItemMakingSkill24GainItemMakingSkillPointEPK14CStackableItemP5CUser>  ; CItemMakingSkill::GainItemMakingSkillPoint(CStackableItem const*, CUser*)
08672f6d +0xde1:  mov    -0x58(%ebp),%eax
08672f70 +0xde4:  mov    %eax,(%esp)
08672f73 +0xde7:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
08672f78 +0xdec:  mov    0x8(%ebp),%edx
08672f7b +0xdef:  mov    0x796f8(%edx),%edx
08672f81 +0xdf5:  mov    %eax,0x4(%esp)
08672f85 +0xdf9:  mov    %edx,(%esp)
08672f88 +0xdfc:  call   084ba174 <_ZN10HistoryLog16WriteCompositionEP8_IO_FILEi>  ; HistoryLog::WriteComposition(_IO_FILE*, int)
08672f8d +0xe01:  mov    $0x0,%ebx
08672f92 +0xe06:  jmp    08672fac <+0xe20>
08672f94 +0xe08:  mov    %edx,%ebx
08672f96 +0xe0a:  mov    %eax,%esi
08672f98 +0xe0c:  lea    -0xcc(%ebp),%eax
08672f9e +0xe12:  mov    %eax,(%esp)
08672fa1 +0xe15:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08672fa6 +0xe1a:  mov    %esi,%eax
08672fa8 +0xe1c:  mov    %ebx,%edx
08672faa +0xe1e:  jmp    08672fbc <+0xe30>
08672fac +0xe20:  lea    -0xcc(%ebp),%eax
08672fb2 +0xe26:  mov    %eax,(%esp)
08672fb5 +0xe29:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08672fba +0xe2e:  jmp    08672fd4 <+0xe48>
08672fbc +0xe30:  mov    %edx,%ebx
08672fbe +0xe32:  mov    %eax,%esi
08672fc0 +0xe34:  lea    -0xc0(%ebp),%eax
08672fc6 +0xe3a:  mov    %eax,(%esp)
08672fc9 +0xe3d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08672fce +0xe42:  mov    %esi,%eax
08672fd0 +0xe44:  mov    %ebx,%edx
08672fd2 +0xe46:  jmp    08672fe4 <+0xe58>
08672fd4 +0xe48:  lea    -0xc0(%ebp),%eax
08672fda +0xe4e:  mov    %eax,(%esp)
08672fdd +0xe51:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08672fe2 +0xe56:  jmp    08672ffc <+0xe70>
08672fe4 +0xe58:  mov    %edx,%ebx
08672fe6 +0xe5a:  mov    %eax,%esi
08672fe8 +0xe5c:  lea    -0xa0(%ebp),%eax
08672fee +0xe62:  mov    %eax,(%esp)
08672ff1 +0xe65:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08672ff6 +0xe6a:  mov    %esi,%eax
08672ff8 +0xe6c:  mov    %ebx,%edx
08672ffa +0xe6e:  jmp    0867300c <+0xe80>
08672ffc +0xe70:  lea    -0xa0(%ebp),%eax
08673002 +0xe76:  mov    %eax,(%esp)
08673005 +0xe79:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0867300a +0xe7e:  jmp    08673024 <+0xe98>
0867300c +0xe80:  mov    %edx,%ebx
0867300e +0xe82:  mov    %eax,%esi
08673010 +0xe84:  lea    -0x94(%ebp),%eax
08673016 +0xe8a:  mov    %eax,(%esp)
08673019 +0xe8d:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0867301e +0xe92:  mov    %esi,%eax
08673020 +0xe94:  mov    %ebx,%edx
08673022 +0xe96:  jmp    08673034 <+0xea8>
08673024 +0xe98:  lea    -0x94(%ebp),%eax
0867302a +0xe9e:  mov    %eax,(%esp)
0867302d +0xea1:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08673032 +0xea6:  jmp    08673052 <+0xec6>
08673034 +0xea8:  mov    %edx,%ebx
08673036 +0xeaa:  mov    %eax,%esi
08673038 +0xeac:  lea    -0x88(%ebp),%eax
0867303e +0xeb2:  mov    %eax,(%esp)
08673041 +0xeb5:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08673046 +0xeba:  mov    %esi,%eax
08673048 +0xebc:  mov    %ebx,%edx
0867304a +0xebe:  mov    %eax,(%esp)
0867304d +0xec1:  call   08ae3750 <_Unwind_Resume>
08673052 +0xec6:  lea    -0x88(%ebp),%eax
08673058 +0xecc:  mov    %eax,(%esp)
0867305b +0xecf:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08673060 +0xed4:  mov    %ebx,%eax
08673062 +0xed6:  lea    -0xc(%ebp),%esp
08673065 +0xed9:  add    $0x0,%esp
08673068 +0xedc:  pop    %ebx
08673069 +0xedd:  pop    %esi
0867306a +0xede:  pop    %edi
0867306b +0xedf:  pop    %ebp
0867306c +0xee0:  ret
0867306d +0xee1:  nop
```

## 反编译 C

```c
// CUser::compound_item @ 0x867218c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CUser::compound_item(int, bool, unsigned short, int) */

int __thiscall CUser::compound_item(CUser *this,int param_1,bool param_2,ushort param_3,int param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  CInventory *pCVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  CDataManager *this_00;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  CExpertJobStatistic *pCVar10;
  int *piVar11;
  CItemMakingSkill *this_01;
  int unaff_EBX;
  byte bVar12;
  InventoryMemory local_caef [49471];
  CInventory local_9b0 [1978];
  undefined1 local_1f6;
  char local_1f5;
  Inven_Item local_1b9 [61];
  int local_17c [11];
  int local_150 [11];
  int local_124 [11];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_f8 [4];
  __normal_iterator local_f4 [4];
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_f0 [4];
  int local_ec;
  __normal_iterator local_e8 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_e4 [4];
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_e0 [4];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_dc [12];
  vector<int,std::allocator<int>> local_d0 [12];
  PacketGuard local_c4 [15];
  char local_b5;
  float local_b4;
  float local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_a4 [12];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_98 [12];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_8c [12];
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  __normal_iterator local_70 [4];
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_6c [4];
  __normal_iterator local_68 [4];
  __normal_iterator local_64 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_60 [4];
  CStackableItem *local_5c;
  int local_58;
  int local_54;
  CInventory *local_50;
  char local_49;
  int local_48;
  char local_41;
  CStackableItem *local_40;
  int local_3c;
  int local_38;
  int local_34;
  float local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  bVar12 = 0;
  local_80 = 0;
  local_5c = (CStackableItem *)_GetRecipeItem(this,param_1,param_2,&local_80);
  if (local_5c == (CStackableItem *)0x0) {
    return 0x11;
  }
  cVar1 = is_recipe_items_avatar_type(this,(vector *)(local_5c + 0x180));
  if (cVar1 != '\0') {
    iVar3 = process_recipe_avatar_items(this,param_1,param_2,param_3,param_4,local_5c);
    return iVar3;
  }
  cVar1 = _CheckCompoundSkill(this,local_5c,param_2);
  if (cVar1 != '\x01') {
    return 0x16;
  }
  piVar11 = local_124;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar11 = 0;
    piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
  }
  piVar11 = local_150;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar11 = 0;
    piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
  }
  pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
  local_58 = CInventory::QuickEmptyCount(pCVar4);
  piVar11 = local_17c;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar11 = 0;
    piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
  }
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
            (local_8c,(vector *)(local_5c + 0x174));
                    /* try { // try from 086722ec to 08672380 has its CatchHandler @ 08673034 */
  cVar1 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::empty();
  if (cVar1 != '\x01') {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
    insert<__gnu_cxx::__normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>
              (local_8c,local_8c,local_74,local_78,local_7c);
  }
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
            (local_98,(vector *)local_8c);
  if (param_4 == 0xf2) {
                    /* try { // try from 0867239a to 086723b8 has its CatchHandler @ 0867300c */
    CalculateExpertJobMaterials(this,(vector *)local_98);
  }
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
            (local_a4,(vector *)(local_5c + 0x180));
                    /* try { // try from 086723d4 to 0867260c has its CatchHandler @ 08672fe4 */
  _CalcItemVectorMultiply(this,(vector *)local_98,(uint)param_3);
  _CalcItemVectorMultiply(this,(vector *)local_a4,(uint)param_3);
  cVar1 = _IsCompoundResult2MoreEquip((vector *)this);
  if (cVar1 != '\0') {
    iVar3 = 0x17;
    goto LAB_08672ffc;
  }
  pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
  cVar1 = CInventory::CheckNeedItemList(pCVar4,(vector *)local_98);
  if (cVar1 != '\x01') {
    iVar3 = 0x15;
    goto LAB_08672ffc;
  }
  stEquipCondition::stEquipCondition((stEquipCondition *)&local_ac);
  Inven_Item::Inven_Item(local_1b9);
  pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
  iVar3 = CInventory::CheckEquipmentItemCondition
                    (pCVar4,(vector *)local_98,(stEquipCondition *)&local_ac,local_1b9);
  local_54 = iVar3;
  if (iVar3 != 0) goto LAB_08672ffc;
  pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
  CInventory::CalBlankSlot(pCVar4,local_124,(vector *)local_98);
  if ((!param_2) && (local_80 == 1)) {
    local_124[2] = local_124[2] + 1;
  }
  pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
  CInventory::CalNeedSlot(pCVar4,local_150,(vector *)local_8c);
  local_58 = local_58 + local_124[0];
  for (local_48 = 1; local_48 < 0xb; local_48 = local_48 + 1) {
    if ((local_17c[local_48] + local_124[local_48] < local_150[local_48]) &&
       (local_58 = local_58 + local_124[local_48] + (local_17c[local_48] - local_150[local_48]),
       local_58 < 0)) {
      iVar3 = 4;
      goto LAB_08672ffc;
    }
  }
  local_50 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
  STItemScript::SEXPERTJOB::stExpertCompoundResultVariation::stExpertCompoundResultVariation
            ((stExpertCompoundResultVariation *)&local_b4);
  iVar3 = CUserCharacInfo::GetCurCharacExpertJobExp((CUserCharacInfo *)this);
  uVar5 = GetCurExpertJobLevel(this,iVar3);
  uVar6 = CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)this);
  CInventory::GetExpertJobCompoundResultVariation(local_50,uVar6,uVar5,&local_b4);
  local_49 = '\0';
  CInventory::CInventory(local_9b0);
  InventoryMemory::InventoryMemory(local_caef);
  CInventory::SetInventoryMemory(local_9b0,local_caef);
  pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenRefR((CUserCharacInfo *)this);
                    /* try { // try from 0867264b to 08672712 has its CatchHandler @ 086728fc */
  CInventory::setCopy(local_9b0,pCVar4);
  cVar1 = CInventory::tryDeleteEventItems(local_9b0,(vector *)local_98);
  if (cVar1 == '\x01') {
    if ((param_2) ||
       (local_41 = CInventory::delete_item(local_9b0,1,param_1,param_3,8,0), local_41 == '\x01')) {
      if (local_b0 <= 0.0) {
        iVar3 = CInventory::tryInsertEventItems(local_9b0,(vector *)local_a4);
        if (iVar3 != 0) goto LAB_086728f5;
        unaff_EBX = 4;
        bVar2 = false;
      }
      else {
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
                  (local_dc,(vector *)local_a4);
                    /* try { // try from 08672726 to 08672868 has its CatchHandler @ 08672897 */
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
        while( true ) {
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
          bVar2 = __gnu_cxx::operator!=(local_e0,local_70);
          if (!bVar2) break;
          piVar11 = (int *)__gnu_cxx::
                           __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                           ::operator->(local_e0);
          iVar3 = *piVar11;
          this_00 = (CDataManager *)G_CDataManager();
          local_40 = (CStackableItem *)CDataManager::find_item(this_00,iVar3);
          if (local_40 != (CStackableItem *)0x0) {
            cVar1 = CItem::is_stackable((CItem *)local_40);
            if (cVar1 == '\x01') {
              iVar3 = CStackableItem::getStackableLimit(local_40);
              if (iVar3 == 1) {
                local_49 = '\x01';
              }
            }
            else {
              local_49 = '\x01';
            }
          }
          if (local_49 != '\x01') {
            iVar3 = __gnu_cxx::
                    __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                    ::operator->(local_e0);
            iVar7 = __gnu_cxx::
                    __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                    ::operator->(local_e0);
            *(int *)(iVar3 + 4) = (int)ROUND(local_b0 / _DAT_08cf3954) * *(int *)(iVar7 + 4);
          }
          __gnu_cxx::
          __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
          ::operator++(local_6c,(int)local_e0);
        }
        iVar3 = CInventory::tryInsertEventItems(local_9b0,(vector *)local_dc);
        if (iVar3 == 0) {
          if (local_49 == '\0') {
            unaff_EBX = 100;
            bVar2 = false;
          }
          else {
            unaff_EBX = 4;
            bVar2 = false;
          }
        }
        else {
          bVar2 = true;
        }
                    /* try { // try from 086728b8 to 086728df has its CatchHandler @ 086728fc */
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_dc);
        if (bVar2) {
LAB_086728f5:
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
      }
    }
    else {
      unaff_EBX = 0x11;
      bVar2 = false;
    }
  }
  else {
    unaff_EBX = 0x11;
    bVar2 = false;
  }
                    /* try { // try from 08672920 to 08672941 has its CatchHandler @ 08672fe4 */
  CInventory::~CInventory(local_9b0);
  iVar3 = unaff_EBX;
  if (bVar2) {
    local_b5 = '\0';
    PacketGuard::PacketGuard(local_c4);
                    /* try { // try from 0867295a to 08672d19 has its CatchHandler @ 08672fbc */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_c4,1,param_4);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_c4,1);
    if (local_5c[0x199] != (CStackableItem)0x0) {
      iVar3 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                        ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                         (local_5c + 0x180));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_c4,iVar3);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
      while (bVar2 = __gnu_cxx::operator!=(local_e4,local_e8), bVar2) {
        piVar11 = (int *)__gnu_cxx::
                         __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                         ::operator->(local_e4);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_c4,*piVar11);
        iVar3 = __gnu_cxx::
                __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                ::operator->(local_e4);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_c4,*(int *)(iVar3 + 4));
        __gnu_cxx::
        __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
        ::operator++(local_e4);
      }
      local_ec = 0;
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
      local_30 = local_b0 / _DAT_08cf3954;
      for (local_2c = 0; local_2c < (int)(uint)param_3; local_2c = local_2c + 1) {
        cVar1 = expert_job::CExpertJob::IsSuccess(this,local_5c,&local_ec);
        if (cVar1 != '\0') {
          local_38 = local_38 + local_ec;
          iVar3 = get_rand_int(100);
          if (((float)iVar3 < local_b4) && (local_49 != '\x01')) {
            local_34 = local_34 + 1;
          }
          local_3c = local_3c + 1;
        }
      }
      if (local_3c < 1) {
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear(local_a4);
      }
      else {
        iVar3 = CUserCharacInfo::GetCurCharacExpertJobExp((CUserCharacInfo *)this);
        expert_job::CExpertJob::IncreaseExpertJobExp(this,iVar3 + local_38);
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
        while (bVar2 = __gnu_cxx::operator!=(local_f0,local_f4), bVar2) {
          iVar3 = __gnu_cxx::
                  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                  ::operator->(local_f0);
          local_28 = *(int *)(iVar3 + 4) / (int)(uint)param_3;
          iVar3 = __gnu_cxx::
                  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                  ::operator->(local_f0);
          iVar7 = __gnu_cxx::
                  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                  ::operator->(local_f0);
          *(int *)(iVar3 + 4) = (*(int *)(iVar7 + 4) / (int)(uint)param_3) * local_3c;
          if (0 < local_34) {
            local_24 = (int)ROUND((float)local_28 * local_30 - (float)local_28) * local_34;
            iVar3 = __gnu_cxx::
                    __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                    ::operator->(local_f0);
            *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + local_24;
          }
          iVar3 = __gnu_cxx::
                  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                  ::operator->(local_f0);
          uVar5 = *(undefined4 *)(iVar3 + 4);
          puVar8 = (undefined4 *)
                   __gnu_cxx::
                   __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                   ::operator->(local_f0);
          uVar6 = *puVar8;
          uVar9 = CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)this);
          pCVar10 = (CExpertJobStatistic *)GetInstanceExpertJobStatistic();
          CExpertJobStatistic::increaseItemCount(pCVar10,uVar9,uVar6,uVar5);
          __gnu_cxx::
          __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
          ::operator++(local_f0);
        }
      }
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_c4,local_3c);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_c4,(uint)param_3 - local_3c);
      if (local_5c[0x199] != (CStackableItem)0x0) {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_c4,local_34);
      }
    }
    std::vector<int,std::allocator<int>>::vector(local_d0);
                    /* try { // try from 08672d23 to 08672f8c has its CatchHandler @ 08672f94 */
    std::vector<int,std::allocator<int>>::clear(local_d0);
    cVar1 = _ProcCompoundCore(this,local_98,local_a4,local_d0,param_1,param_2,local_c4,&local_b5,
                              param_3,local_ac,local_a8,local_5c,local_1b9);
    if (cVar1 == '\x01') {
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_c4,true);
      Send(this,local_c4);
      cVar1 = std::vector<int,std::allocator<int>>::empty();
      if (cVar1 != '\x01') {
        std::vector<int,std::allocator<int>>::begin();
        __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
        __normal_iterator<int*>(local_f8,local_68);
        while( true ) {
          std::vector<int,std::allocator<int>>::end();
          bVar2 = __gnu_cxx::operator!=(local_f8,local_64);
          if (!bVar2) break;
          piVar11 = (int *)__gnu_cxx::
                           __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                           operator*(local_f8);
          local_20 = *piVar11;
          if (-1 < local_20) {
            iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
            CInventory::GetInvenSlot((int)&local_1f6,iVar3);
            if (local_1f5 == '\x01') {
              SendUpdateItem(this,1,0,local_20);
            }
          }
          __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                    (local_60,(int)local_f8);
        }
      }
      if (local_b5 != '\0') {
        send_equip(this,0x16);
      }
      CItem::get_index((CItem *)local_5c);
      _onCompoundItem((int)this);
      iVar3 = CItem::GetNeedLevel((CItem *)local_5c);
      if (iVar3 != 0) {
        this_01 = (CItemMakingSkill *)GetCharacExpandData(this,10);
        CItemMakingSkill::GainItemMakingSkillPoint(this_01,local_5c,this);
      }
      iVar3 = CItem::get_index((CItem *)local_5c);
      HistoryLog::WriteComposition(*(_IO_FILE **)(this + 0x796f8),iVar3);
      iVar3 = 0;
    }
    else {
      iVar3 = 0x11;
    }
                    /* try { // try from 08672fb5 to 08672fb9 has its CatchHandler @ 08672fbc */
    std::vector<int,std::allocator<int>>::~vector(local_d0);
                    /* try { // try from 08672fdd to 08672fe1 has its CatchHandler @ 08672fe4 */
    PacketGuard::~PacketGuard(local_c4);
  }
LAB_08672ffc:
                    /* try { // try from 08673005 to 08673009 has its CatchHandler @ 0867300c */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_a4);
                    /* try { // try from 0867302d to 08673031 has its CatchHandler @ 08673034 */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_98);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_8c);
  return iVar3;
}
```
