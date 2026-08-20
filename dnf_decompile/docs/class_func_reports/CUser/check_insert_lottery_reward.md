# check_insert_lottery_reward

`_ZN5CUser27check_insert_lottery_rewardEPK5CItemRSt6vectorISt4pairI10Inven_ItembESaIS6_EES9_`

`CUser::check_insert_lottery_reward(CItem const*, std::vector<std::pair<Inven_Item, bool>, std::allocator<std::pair<Inven_Item, bool> > >&, std::vector<std::pair<Inven_Item, bool>, std::allocator<std::pair<Inven_Item, bool> > >&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08676296` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08676296  _ZN5CUser27check_insert_lottery_rewardEPK5CItemRSt6vectorISt4pairI10Inven_ItembESaIS6_EES9_
#           CUser::check_insert_lottery_reward(CItem const*, std::vector<std::pair<Inven_Item, bool>, std::allocator<std::pair<Inven_Item, bool> > >&, std::vector<std::pair<Inven_Item, bool>, std::allocator<std::pair<Inven_Item, bool> > >&)
# range [0x08676296, 0x086767d1]
08676296 +0x000:  push   %ebp
08676297 +0x001:  mov    %esp,%ebp
08676299 +0x003:  push   %ebx
0867629a +0x004:  sub    $0x114,%esp
086762a0 +0x00a:  lea    -0x30(%ebp),%eax
086762a3 +0x00d:  mov    0x10(%ebp),%edx
086762a6 +0x010:  mov    %edx,0x4(%esp)
086762aa +0x014:  mov    %eax,(%esp)
086762ad +0x017:  call   080fe240 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x56c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x56c
086762b2 +0x01c:  sub    $0x4,%esp
086762b5 +0x01f:  jmp    0867637a <+0xe4>
086762ba +0x024:  lea    -0x30(%ebp),%eax
086762bd +0x027:  mov    %eax,(%esp)
086762c0 +0x02a:  call   080fe2b6 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x5e2>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x5e2
086762c5 +0x02f:  mov    (%eax),%edx
086762c7 +0x031:  mov    %edx,-0x6e(%ebp)
086762ca +0x034:  mov    0x4(%eax),%edx
086762cd +0x037:  mov    %edx,-0x6a(%ebp)
086762d0 +0x03a:  mov    0x8(%eax),%edx
086762d3 +0x03d:  mov    %edx,-0x66(%ebp)
086762d6 +0x040:  mov    0xc(%eax),%edx
086762d9 +0x043:  mov    %edx,-0x62(%ebp)
086762dc +0x046:  mov    0x10(%eax),%edx
086762df +0x049:  mov    %edx,-0x5e(%ebp)
086762e2 +0x04c:  mov    0x14(%eax),%edx
086762e5 +0x04f:  mov    %edx,-0x5a(%ebp)
086762e8 +0x052:  mov    0x18(%eax),%edx
086762eb +0x055:  mov    %edx,-0x56(%ebp)
086762ee +0x058:  mov    0x1c(%eax),%edx
086762f1 +0x05b:  mov    %edx,-0x52(%ebp)
086762f4 +0x05e:  mov    0x20(%eax),%edx
086762f7 +0x061:  mov    %edx,-0x4e(%ebp)
086762fa +0x064:  mov    0x24(%eax),%edx
086762fd +0x067:  mov    %edx,-0x4a(%ebp)
08676300 +0x06a:  mov    0x28(%eax),%edx
08676303 +0x06d:  mov    %edx,-0x46(%ebp)
08676306 +0x070:  mov    0x2c(%eax),%edx
08676309 +0x073:  mov    %edx,-0x42(%ebp)
0867630c +0x076:  mov    0x30(%eax),%edx
0867630f +0x079:  mov    %edx,-0x3e(%ebp)
08676312 +0x07c:  mov    0x34(%eax),%edx
08676315 +0x07f:  mov    %edx,-0x3a(%ebp)
08676318 +0x082:  mov    0x38(%eax),%edx
0867631b +0x085:  mov    %edx,-0x36(%ebp)
0867631e +0x088:  movzwl 0x3c(%eax),%eax
08676322 +0x08c:  mov    %ax,-0x32(%ebp)
08676326 +0x090:  movzbl -0x6d(%ebp),%eax
0867632a +0x094:  movzbl %al,%ebx
0867632d +0x097:  mov    0x8(%ebp),%eax
08676330 +0x09a:  mov    %eax,(%esp)
08676333 +0x09d:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08676338 +0x0a2:  movl   $0x1,0x8(%esp)
08676340 +0x0aa:  mov    %ebx,0x4(%esp)
08676344 +0x0ae:  mov    %eax,(%esp)
08676347 +0x0b1:  call   08504f64 <_ZNK10CInventory17check_empty_countEN10Inven_Item9ITEM_TYPEEi>  ; CInventory::check_empty_count(Inven_Item::ITEM_TYPE, int) const
0867634c +0x0b6:  xor    $0x1,%eax
0867634f +0x0b9:  test   %al,%al
08676351 +0x0bb:  je     0867635d <+0xc7>
08676353 +0x0bd:  mov    $0x4,%eax
08676358 +0x0c2:  jmp    086767cc <+0x536>
0867635d +0x0c7:  lea    -0x28(%ebp),%eax
08676360 +0x0ca:  movl   $0x0,0x8(%esp)
08676368 +0x0d2:  lea    -0x30(%ebp),%edx
0867636b +0x0d5:  mov    %edx,0x4(%esp)
0867636f +0x0d9:  mov    %eax,(%esp)
08676372 +0x0dc:  call   080fe2c0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x5ec>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x5ec
08676377 +0x0e1:  sub    $0x4,%esp
0867637a +0x0e4:  lea    -0x2c(%ebp),%eax
0867637d +0x0e7:  mov    0x10(%ebp),%edx
08676380 +0x0ea:  mov    %edx,0x4(%esp)
08676384 +0x0ee:  mov    %eax,(%esp)
08676387 +0x0f1:  call   080fe264 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x590>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x590
0867638c +0x0f6:  sub    $0x4,%esp
0867638f +0x0f9:  lea    -0x2c(%ebp),%eax
08676392 +0x0fc:  mov    %eax,0x4(%esp)
08676396 +0x100:  lea    -0x30(%ebp),%eax
08676399 +0x103:  mov    %eax,(%esp)
0867639c +0x106:  call   080fe28a <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x5b6>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x5b6
086763a1 +0x10b:  test   %al,%al
086763a3 +0x10d:  jne    086762ba <+0x24>
086763a9 +0x113:  lea    -0xbc(%ebp),%eax
086763af +0x119:  mov    0x10(%ebp),%edx
086763b2 +0x11c:  mov    %edx,0x4(%esp)
086763b6 +0x120:  mov    %eax,(%esp)
086763b9 +0x123:  call   080fe240 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x56c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x56c
086763be +0x128:  sub    $0x4,%esp
086763c1 +0x12b:  mov    -0xbc(%ebp),%eax
086763c7 +0x131:  mov    %eax,-0x30(%ebp)
086763ca +0x134:  jmp    08676798 <+0x502>
086763cf +0x139:  lea    -0x30(%ebp),%eax
086763d2 +0x13c:  mov    %eax,(%esp)
086763d5 +0x13f:  call   080fe2b6 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x5e2>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x5e2
086763da +0x144:  mov    (%eax),%edx
086763dc +0x146:  mov    %edx,-0xac(%ebp)
086763e2 +0x14c:  mov    0x4(%eax),%edx
086763e5 +0x14f:  mov    %edx,-0xa8(%ebp)
086763eb +0x155:  mov    0x8(%eax),%edx
086763ee +0x158:  mov    %edx,-0xa4(%ebp)
086763f4 +0x15e:  mov    0xc(%eax),%edx
086763f7 +0x161:  mov    %edx,-0xa0(%ebp)
086763fd +0x167:  mov    0x10(%eax),%edx
08676400 +0x16a:  mov    %edx,-0x9c(%ebp)
08676406 +0x170:  mov    0x14(%eax),%edx
08676409 +0x173:  mov    %edx,-0x98(%ebp)
0867640f +0x179:  mov    0x18(%eax),%edx
08676412 +0x17c:  mov    %edx,-0x94(%ebp)
08676418 +0x182:  mov    0x1c(%eax),%edx
0867641b +0x185:  mov    %edx,-0x90(%ebp)
08676421 +0x18b:  mov    0x20(%eax),%edx
08676424 +0x18e:  mov    %edx,-0x8c(%ebp)
0867642a +0x194:  mov    0x24(%eax),%edx
0867642d +0x197:  mov    %edx,-0x88(%ebp)
08676433 +0x19d:  mov    0x28(%eax),%edx
08676436 +0x1a0:  mov    %edx,-0x84(%ebp)
0867643c +0x1a6:  mov    0x2c(%eax),%edx
0867643f +0x1a9:  mov    %edx,-0x80(%ebp)
08676442 +0x1ac:  mov    0x30(%eax),%edx
08676445 +0x1af:  mov    %edx,-0x7c(%ebp)
08676448 +0x1b2:  mov    0x34(%eax),%edx
0867644b +0x1b5:  mov    %edx,-0x78(%ebp)
0867644e +0x1b8:  mov    0x38(%eax),%edx
08676451 +0x1bb:  mov    %edx,-0x74(%ebp)
08676454 +0x1be:  movzwl 0x3c(%eax),%eax
08676458 +0x1c2:  mov    %ax,-0x70(%ebp)
0867645c +0x1c6:  movl   $0xffffffff,-0x14(%ebp)
08676463 +0x1cd:  movl   $0x0,-0x10(%ebp)
0867646a +0x1d4:  mov    -0xaa(%ebp),%eax
08676470 +0x1da:  cmp    $0x1,%eax
08676473 +0x1dd:  jne    086764ac <+0x216>
08676475 +0x1df:  lea    -0xac(%ebp),%eax
0867647b +0x1e5:  mov    %eax,0x4(%esp)
0867647f +0x1e9:  mov    0x14(%ebp),%eax
08676482 +0x1ec:  mov    %eax,(%esp)
08676485 +0x1ef:  call   08517774 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x3da9>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x3da9
0867648a +0x1f4:  lea    -0x20(%ebp),%eax
0867648d +0x1f7:  movl   $0x0,0x8(%esp)
08676495 +0x1ff:  lea    -0x30(%ebp),%edx
08676498 +0x202:  mov    %edx,0x4(%esp)
0867649c +0x206:  mov    %eax,(%esp)
0867649f +0x209:  call   080fe2c0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x5ec>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x5ec
086764a4 +0x20e:  sub    $0x4,%esp
086764a7 +0x211:  jmp    08676798 <+0x502>
086764ac +0x216:  mov    -0xaa(%ebp),%eax
086764b2 +0x21c:  mov    %eax,%ebx
086764b4 +0x21e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086764b9 +0x223:  mov    %ebx,0x4(%esp)
086764bd +0x227:  mov    %eax,(%esp)
086764c0 +0x22a:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
086764c5 +0x22f:  mov    %eax,-0xc(%ebp)
086764c8 +0x232:  cmpl   $0x0,-0xc(%ebp)
086764cc +0x236:  jne    086764d8 <+0x242>
086764ce +0x238:  mov    $0x11,%eax
086764d3 +0x23d:  jmp    086767cc <+0x536>
086764d8 +0x242:  cmpl   $0x0,-0xc(%ebp)
086764dc +0x246:  je     086764fb <+0x265>
086764de +0x248:  mov    -0xc(%ebp),%eax
086764e1 +0x24b:  mov    (%eax),%eax
086764e3 +0x24d:  add    $0x10,%eax
086764e6 +0x250:  mov    (%eax),%edx
086764e8 +0x252:  mov    -0xc(%ebp),%eax
086764eb +0x255:  mov    %eax,(%esp)
086764ee +0x258:  call   *%edx
086764f0 +0x25a:  test   %al,%al
086764f2 +0x25c:  je     086764fb <+0x265>
086764f4 +0x25e:  mov    $0x1,%eax
086764f9 +0x263:  jmp    08676500 <+0x26a>
086764fb +0x265:  mov    $0x0,%eax
08676500 +0x26a:  test   %al,%al
08676502 +0x26c:  je     0867653e <+0x2a8>
08676504 +0x26e:  mov    0x8(%ebp),%eax
08676507 +0x271:  mov    %eax,(%esp)
0867650a +0x274:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0867650f +0x279:  movl   $0x0,0x8(%esp)
08676517 +0x281:  movl   $0x2,0x4(%esp)
0867651f +0x289:  mov    %eax,(%esp)
08676522 +0x28c:  call   084fb67a <_ZNK10CInventory17GetRemainCapacityE10INVEN_TYPEN10Inven_Item9ITEM_TYPEE>  ; CInventory::GetRemainCapacity(INVEN_TYPE, Inven_Item::ITEM_TYPE) const
08676527 +0x291:  test   %eax,%eax
08676529 +0x293:  setle  %al
0867652c +0x296:  test   %al,%al
0867652e +0x298:  je     08676766 <+0x4d0>
08676534 +0x29e:  mov    $0x4,%eax
08676539 +0x2a3:  jmp    086767cc <+0x536>
0867653e +0x2a8:  mov    -0xc(%ebp),%eax
08676541 +0x2ab:  mov    (%eax),%eax
08676543 +0x2ad:  add    $0x14,%eax
08676546 +0x2b0:  mov    (%eax),%edx
08676548 +0x2b2:  mov    -0xc(%ebp),%eax
0867654b +0x2b5:  mov    %eax,(%esp)
0867654e +0x2b8:  call   *%edx
08676550 +0x2ba:  test   %al,%al
08676552 +0x2bc:  je     08676572 <+0x2dc>
08676554 +0x2be:  mov    -0xc(%ebp),%eax
08676557 +0x2c1:  mov    (%eax),%eax
08676559 +0x2c3:  add    $0xc,%eax
0867655c +0x2c6:  mov    (%eax),%edx
0867655e +0x2c8:  mov    -0xc(%ebp),%eax
08676561 +0x2cb:  mov    %eax,(%esp)
08676564 +0x2ce:  call   *%edx
08676566 +0x2d0:  cmp    $0x16,%eax
08676569 +0x2d3:  jne    08676572 <+0x2dc>
0867656b +0x2d5:  mov    $0x1,%eax
08676570 +0x2da:  jmp    08676577 <+0x2e1>
08676572 +0x2dc:  mov    $0x0,%eax
08676577 +0x2e1:  test   %al,%al
08676579 +0x2e3:  je     08676673 <+0x3dd>
0867657f +0x2e9:  movzbl -0xab(%ebp),%eax
08676586 +0x2f0:  cmp    $0x5,%al
08676588 +0x2f2:  jne    08676669 <+0x3d3>
0867658e +0x2f8:  lea    -0xac(%ebp),%eax
08676594 +0x2fe:  mov    %eax,(%esp)
08676597 +0x301:  call   08336eae <_ZN13user_creature22CCreatureItemConverter10SetEggItemEP10Inven_Item>  ; user_creature::CCreatureItemConverter::SetEggItem(Inven_Item*)
0867659c +0x306:  xor    $0x1,%eax
0867659f +0x309:  test   %al,%al
086765a1 +0x30b:  je     086765ad <+0x317>
086765a3 +0x30d:  mov    $0x11,%eax
086765a8 +0x312:  jmp    086767cc <+0x536>
086765ad +0x317:  mov    0x8(%ebp),%eax
086765b0 +0x31a:  mov    %eax,(%esp)
086765b3 +0x31d:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
086765b8 +0x322:  mov    -0xac(%ebp),%edx
086765be +0x328:  mov    %edx,0x4(%esp)
086765c2 +0x32c:  mov    -0xa8(%ebp),%edx
086765c8 +0x332:  mov    %edx,0x8(%esp)
086765cc +0x336:  mov    -0xa4(%ebp),%edx
086765d2 +0x33c:  mov    %edx,0xc(%esp)
086765d6 +0x340:  mov    -0xa0(%ebp),%edx
086765dc +0x346:  mov    %edx,0x10(%esp)
086765e0 +0x34a:  mov    -0x9c(%ebp),%edx
086765e6 +0x350:  mov    %edx,0x14(%esp)
086765ea +0x354:  mov    -0x98(%ebp),%edx
086765f0 +0x35a:  mov    %edx,0x18(%esp)
086765f4 +0x35e:  mov    -0x94(%ebp),%edx
086765fa +0x364:  mov    %edx,0x1c(%esp)
086765fe +0x368:  mov    -0x90(%ebp),%edx
08676604 +0x36e:  mov    %edx,0x20(%esp)
08676608 +0x372:  mov    -0x8c(%ebp),%edx
0867660e +0x378:  mov    %edx,0x24(%esp)
08676612 +0x37c:  mov    -0x88(%ebp),%edx
08676618 +0x382:  mov    %edx,0x28(%esp)
0867661c +0x386:  mov    -0x84(%ebp),%edx
08676622 +0x38c:  mov    %edx,0x2c(%esp)
08676626 +0x390:  mov    -0x80(%ebp),%edx
08676629 +0x393:  mov    %edx,0x30(%esp)
0867662d +0x397:  mov    -0x7c(%ebp),%edx
08676630 +0x39a:  mov    %edx,0x34(%esp)
08676634 +0x39e:  mov    -0x78(%ebp),%edx
08676637 +0x3a1:  mov    %edx,0x38(%esp)
0867663b +0x3a5:  mov    -0x74(%ebp),%edx
0867663e +0x3a8:  mov    %edx,0x3c(%esp)
08676642 +0x3ac:  movzbl -0x70(%ebp),%edx
08676646 +0x3b0:  mov    %dl,0x40(%esp)
0867664a +0x3b4:  mov    %eax,(%esp)
0867664d +0x3b7:  call   08501eca <_ZNK10CInventory26tryInsertItemIntoInventoryE10Inven_Item>  ; CInventory::tryInsertItemIntoInventory(Inven_Item) const
08676652 +0x3bc:  mov    %eax,-0x14(%ebp)
08676655 +0x3bf:  cmpl   $0xffffffff,-0x14(%ebp)
08676659 +0x3c3:  jne    08676766 <+0x4d0>
0867665f +0x3c9:  mov    $0x4,%eax
08676664 +0x3ce:  jmp    086767cc <+0x536>
08676669 +0x3d3:  mov    $0x11,%eax
0867666e +0x3d8:  jmp    086767cc <+0x536>
08676673 +0x3dd:  movl   $0xffffffff,-0x14(%ebp)
0867667a +0x3e4:  mov    0x8(%ebp),%eax
0867667d +0x3e7:  mov    %eax,(%esp)
08676680 +0x3ea:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08676685 +0x3ef:  mov    -0xac(%ebp),%edx
0867668b +0x3f5:  mov    %edx,0x4(%esp)
0867668f +0x3f9:  mov    -0xa8(%ebp),%edx
08676695 +0x3ff:  mov    %edx,0x8(%esp)
08676699 +0x403:  mov    -0xa4(%ebp),%edx
0867669f +0x409:  mov    %edx,0xc(%esp)
086766a3 +0x40d:  mov    -0xa0(%ebp),%edx
086766a9 +0x413:  mov    %edx,0x10(%esp)
086766ad +0x417:  mov    -0x9c(%ebp),%edx
086766b3 +0x41d:  mov    %edx,0x14(%esp)
086766b7 +0x421:  mov    -0x98(%ebp),%edx
086766bd +0x427:  mov    %edx,0x18(%esp)
086766c1 +0x42b:  mov    -0x94(%ebp),%edx
086766c7 +0x431:  mov    %edx,0x1c(%esp)
086766cb +0x435:  mov    -0x90(%ebp),%edx
086766d1 +0x43b:  mov    %edx,0x20(%esp)
086766d5 +0x43f:  mov    -0x8c(%ebp),%edx
086766db +0x445:  mov    %edx,0x24(%esp)
086766df +0x449:  mov    -0x88(%ebp),%edx
086766e5 +0x44f:  mov    %edx,0x28(%esp)
086766e9 +0x453:  mov    -0x84(%ebp),%edx
086766ef +0x459:  mov    %edx,0x2c(%esp)
086766f3 +0x45d:  mov    -0x80(%ebp),%edx
086766f6 +0x460:  mov    %edx,0x30(%esp)
086766fa +0x464:  mov    -0x7c(%ebp),%edx
086766fd +0x467:  mov    %edx,0x34(%esp)
08676701 +0x46b:  mov    -0x78(%ebp),%edx
08676704 +0x46e:  mov    %edx,0x38(%esp)
08676708 +0x472:  mov    -0x74(%ebp),%edx
0867670b +0x475:  mov    %edx,0x3c(%esp)
0867670f +0x479:  movzbl -0x70(%ebp),%edx
08676713 +0x47d:  mov    %dl,0x40(%esp)
08676717 +0x481:  mov    %eax,(%esp)
0867671a +0x484:  call   08501eca <_ZNK10CInventory26tryInsertItemIntoInventoryE10Inven_Item>  ; CInventory::tryInsertItemIntoInventory(Inven_Item) const
0867671f +0x489:  mov    %eax,-0x14(%ebp)
08676722 +0x48c:  cmpl   $0xffffffff,-0x14(%ebp)
08676726 +0x490:  jne    08676759 <+0x4c3>
08676728 +0x492:  mov    0xc(%ebp),%eax
0867672b +0x495:  mov    0x14(%ebp),%edx
0867672e +0x498:  mov    %edx,0x4(%esp)
08676732 +0x49c:  mov    %eax,(%esp)
08676735 +0x49f:  call   0850f136 <_ZN14CStackableItem25get_multibox_default_itemEPSt6vectorISt4pairI10Inven_ItembESaIS3_EE>  ; CStackableItem::get_multibox_default_item(std::vector<std::pair<Inven_Item, bool>, std::allocator<std::pair<Inven_Item, bool> > >*)
0867673a +0x4a4:  lea    -0x1c(%ebp),%eax
0867673d +0x4a7:  movl   $0x0,0x8(%esp)
08676745 +0x4af:  lea    -0x30(%ebp),%edx
08676748 +0x4b2:  mov    %edx,0x4(%esp)
0867674c +0x4b6:  mov    %eax,(%esp)
0867674f +0x4b9:  call   080fe2c0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x5ec>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x5ec
08676754 +0x4be:  sub    $0x4,%esp
08676757 +0x4c1:  jmp    08676798 <+0x502>
08676759 +0x4c3:  cmpl   $0x0,-0xc(%ebp)
0867675d +0x4c7:  jne    08676766 <+0x4d0>
0867675f +0x4c9:  mov    $0x4,%eax
08676764 +0x4ce:  jmp    086767cc <+0x536>
08676766 +0x4d0:  lea    -0xac(%ebp),%eax
0867676c +0x4d6:  mov    %eax,0x4(%esp)
08676770 +0x4da:  mov    0x14(%ebp),%eax
08676773 +0x4dd:  mov    %eax,(%esp)
08676776 +0x4e0:  call   08517774 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x3da9>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x3da9
0867677b +0x4e5:  lea    -0x18(%ebp),%eax
0867677e +0x4e8:  movl   $0x0,0x8(%esp)
08676786 +0x4f0:  lea    -0x30(%ebp),%edx
08676789 +0x4f3:  mov    %edx,0x4(%esp)
0867678d +0x4f7:  mov    %eax,(%esp)
08676790 +0x4fa:  call   080fe2c0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x5ec>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x5ec
08676795 +0x4ff:  sub    $0x4,%esp
08676798 +0x502:  lea    -0x24(%ebp),%eax
0867679b +0x505:  mov    0x10(%ebp),%edx
0867679e +0x508:  mov    %edx,0x4(%esp)
086767a2 +0x50c:  mov    %eax,(%esp)
086767a5 +0x50f:  call   080fe264 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x590>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x590
086767aa +0x514:  sub    $0x4,%esp
086767ad +0x517:  lea    -0x24(%ebp),%eax
086767b0 +0x51a:  mov    %eax,0x4(%esp)
086767b4 +0x51e:  lea    -0x30(%ebp),%eax
086767b7 +0x521:  mov    %eax,(%esp)
086767ba +0x524:  call   080fe28a <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x5b6>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x5b6
086767bf +0x529:  test   %al,%al
086767c1 +0x52b:  jne    086763cf <+0x139>
086767c7 +0x531:  mov    $0x0,%eax
086767cc +0x536:  mov    -0x4(%ebp),%ebx
086767cf +0x539:  leave
086767d0 +0x53a:  ret
086767d1 +0x53b:  nop
```

## 反编译 C

```c
// CUser::check_insert_lottery_reward @ 0x8676296

/* CUser::check_insert_lottery_reward(CItem const*, std::vector<std::pair<Inven_Item, bool>,
   std::allocator<std::pair<Inven_Item, bool> > >&, std::vector<std::pair<Inven_Item, bool>,
   std::allocator<std::pair<Inven_Item, bool> > >&) */

undefined4 __thiscall
CUser::check_insert_lottery_reward(CUser *this,CItem *param_1,vector *param_2,vector *param_3)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  uint *puVar4;
  undefined4 *puVar5;
  CDataManager *this_00;
  CInventory *pCVar6;
  int iVar7;
  undefined4 uVar8;
  Inven_Item local_b0;
  char cStack_af;
  undefined2 uStack_ae;
  undefined2 local_ac;
  undefined2 uStack_aa;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined2 local_74;
  uint local_72;
  uint local_6e;
  uint local_6a;
  uint local_66;
  uint local_62;
  uint local_5e;
  uint local_5a;
  uint local_56;
  uint local_52;
  uint local_4e;
  uint local_4a;
  uint local_46;
  uint local_42;
  uint local_3e;
  uint local_3a;
  undefined2 local_36;
  __normal_iterator<std::pair<Inven_Item,bool>*,std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>>
  local_34 [4];
  __normal_iterator local_30 [4];
  __normal_iterator<std::pair<Inven_Item,bool>*,std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>>
  local_2c [4];
  __normal_iterator local_28 [4];
  __normal_iterator<std::pair<Inven_Item,bool>*,std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>>
  local_24 [4];
  __normal_iterator<std::pair<Inven_Item,bool>*,std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>>
  local_20 [4];
  __normal_iterator<std::pair<Inven_Item,bool>*,std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>>
  local_1c [4];
  int local_18;
  undefined4 local_14;
  int *local_10;
  
  std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>::begin();
  while( true ) {
    std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>::end();
    bVar2 = __gnu_cxx::operator!=(local_34,local_30);
    if (!bVar2) break;
    puVar4 = (uint *)__gnu_cxx::
                     __normal_iterator<std::pair<Inven_Item,bool>*,std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>>
                     ::operator*(local_34);
    local_72 = *puVar4;
    local_6e = puVar4[1];
    local_6a = puVar4[2];
    local_66 = puVar4[3];
    local_62 = puVar4[4];
    local_5e = puVar4[5];
    local_5a = puVar4[6];
    local_56 = puVar4[7];
    local_52 = puVar4[8];
    local_4e = puVar4[9];
    local_4a = puVar4[10];
    local_46 = puVar4[0xb];
    local_42 = puVar4[0xc];
    local_3e = puVar4[0xd];
    local_3a = puVar4[0xe];
    local_36 = (undefined2)puVar4[0xf];
    uVar1 = local_72 >> 8;
    pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
    cVar3 = CInventory::check_empty_count(pCVar6,uVar1 & 0xff,1);
    if (cVar3 != '\x01') {
      return 4;
    }
    __gnu_cxx::
    __normal_iterator<std::pair<Inven_Item,bool>*,std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>>
    ::operator++(local_2c,(int)local_34);
  }
  std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>::begin();
  do {
    while( true ) {
      while( true ) {
        std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>::end();
        bVar2 = __gnu_cxx::operator!=(local_34,local_28);
        if (!bVar2) {
          return 0;
        }
        puVar5 = (undefined4 *)
                 __gnu_cxx::
                 __normal_iterator<std::pair<Inven_Item,bool>*,std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>>
                 ::operator*(local_34);
        uVar8 = *puVar5;
        local_b0 = SUB41(uVar8,0);
        cStack_af = (char)((uint)uVar8 >> 8);
        uStack_ae = (undefined2)((uint)uVar8 >> 0x10);
        local_ac = (undefined2)puVar5[1];
        uStack_aa = (undefined2)((uint)puVar5[1] >> 0x10);
        local_a8 = puVar5[2];
        local_a4 = puVar5[3];
        local_a0 = puVar5[4];
        local_9c = puVar5[5];
        local_98 = puVar5[6];
        local_94 = puVar5[7];
        local_90 = puVar5[8];
        local_8c = puVar5[9];
        local_88 = puVar5[10];
        local_84 = puVar5[0xb];
        local_80 = puVar5[0xc];
        local_7c = puVar5[0xd];
        local_78 = puVar5[0xe];
        local_74 = *(undefined2 *)(puVar5 + 0xf);
        local_18 = -1;
        local_14 = 0;
        if (CONCAT22(local_ac,uStack_ae) != 1) break;
        std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>::
        push_back((vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>> *)
                  param_3,&local_b0);
        __gnu_cxx::
        __normal_iterator<std::pair<Inven_Item,bool>*,std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>>
        ::operator++(local_24,(int)local_34);
      }
      iVar7 = CONCAT22(local_ac,uStack_ae);
      this_00 = (CDataManager *)G_CDataManager();
      local_10 = (int *)CDataManager::find_item(this_00,iVar7);
      if (local_10 == (int *)0x0) {
        return 0x11;
      }
      if ((local_10 == (int *)0x0) ||
         (cVar3 = (**(code **)(*local_10 + 0x10))(local_10), cVar3 == '\0')) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) break;
      pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
      iVar7 = CInventory::GetRemainCapacity(pCVar6,2,0);
      if (iVar7 < 1) {
        return 4;
      }
LAB_08676766:
      std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>::push_back
                ((vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>> *)
                 param_3,&local_b0);
      __gnu_cxx::
      __normal_iterator<std::pair<Inven_Item,bool>*,std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>>
      ::operator++(local_1c,(int)local_34);
    }
    cVar3 = (**(code **)(*local_10 + 0x14))(local_10);
    if ((cVar3 == '\0') || (iVar7 = (**(code **)(*local_10 + 0xc))(local_10), iVar7 != 0x16)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if (cStack_af != '\x05') {
        return 0x11;
      }
      cVar3 = user_creature::CCreatureItemConverter::SetEggItem(&local_b0);
      if (cVar3 != '\x01') {
        return 0x11;
      }
      uVar8 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
      local_18 = CInventory::tryInsertItemIntoInventory
                           (uVar8,CONCAT22(uStack_ae,CONCAT11(cStack_af,local_b0)),
                            CONCAT22(uStack_aa,local_ac),local_a8,local_a4,local_a0,local_9c,
                            local_98,local_94,local_90,local_8c,local_88,local_84,local_80,local_7c,
                            local_78,(undefined1)local_74);
      if (local_18 == -1) {
        return 4;
      }
      goto LAB_08676766;
    }
    local_18 = 0xffffffff;
    uVar8 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
    local_18 = CInventory::tryInsertItemIntoInventory
                         (uVar8,CONCAT22(uStack_ae,CONCAT11(cStack_af,local_b0)),
                          CONCAT22(uStack_aa,local_ac),local_a8,local_a4,local_a0,local_9c,local_98,
                          local_94,local_90,local_8c,local_88,local_84,local_80,local_7c,local_78,
                          (undefined1)local_74);
    if (local_18 != -1) {
      if (local_10 == (int *)0x0) {
        return 4;
      }
      goto LAB_08676766;
    }
    CStackableItem::get_multibox_default_item((CStackableItem *)param_1,param_3);
    __gnu_cxx::
    __normal_iterator<std::pair<Inven_Item,bool>*,std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>>
    ::operator++(local_20,(int)local_34);
  } while( true );
}
```
