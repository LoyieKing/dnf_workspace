# _DoGetPackageItem

`_ZN8WongWork14CMailBoxHelper17_DoGetPackageItemEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR`

`WongWork::CMailBoxHelper::_DoGetPackageItem(CUser*, WongWork::CMailBox::CMail const*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, bool, ENUM_ERROR&)`

| 类 | 地址 |
|---|---|
| `WongWork::CMailBoxHelper` | `0x08553936` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08553936  _ZN8WongWork14CMailBoxHelper17_DoGetPackageItemEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR
#           WongWork::CMailBoxHelper::_DoGetPackageItem(CUser*, WongWork::CMailBox::CMail const*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, bool, ENUM_ERROR&)
# range [0x08553936, 0x0855419b]
08553936 +0x000:  push   %ebp
08553937 +0x001:  mov    %esp,%ebp
08553939 +0x003:  push   %esi
0855393a +0x004:  push   %ebx
0855393b +0x005:  sub    $0xca30,%esp
08553941 +0x00b:  mov    0x14(%ebp),%eax
08553944 +0x00e:  mov    %al,-0xc9dc(%ebp)
0855394a +0x014:  lea    -0xd9(%ebp),%eax
08553950 +0x01a:  mov    0xc(%ebp),%edx
08553953 +0x01d:  mov    %edx,0x4(%esp)
08553957 +0x021:  mov    %eax,(%esp)
0855395a +0x024:  call   08557522 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x83>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x83
0855395f +0x029:  sub    $0x4,%esp
08553962 +0x02c:  mov    -0xd7(%ebp),%eax
08553968 +0x032:  cmp    $0x28d287,%eax
0855396d +0x037:  jbe    085539b1 <+0x7b>
0855396f +0x039:  mov    -0xd7(%ebp),%eax
08553975 +0x03f:  cmp    $0x28d299,%eax
0855397a +0x044:  ja     085539b1 <+0x7b>
0855397c +0x046:  movzbl -0xc9dc(%ebp),%edx
08553983 +0x04d:  mov    -0xd7(%ebp),%eax
08553989 +0x053:  mov    0x18(%ebp),%ecx
0855398c +0x056:  mov    %ecx,0x10(%esp)
08553990 +0x05a:  mov    %edx,0xc(%esp)
08553994 +0x05e:  mov    0x10(%ebp),%edx
08553997 +0x061:  mov    %edx,0x8(%esp)
0855399b +0x065:  mov    %eax,0x4(%esp)
0855399f +0x069:  mov    0x8(%ebp),%eax
085539a2 +0x06c:  mov    %eax,(%esp)
085539a5 +0x06f:  call   086928c2 <_ZN5CUser13DoGetGoldItemEiRSt6vectorISt4pairIiiESaIS2_EEbR10ENUM_ERROR>  ; CUser::DoGetGoldItem(int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, bool, ENUM_ERROR&)
085539aa +0x074:  mov    %eax,%ebx
085539ac +0x076:  jmp    0855418f <+0x859>
085539b1 +0x07b:  mov    -0xd7(%ebp),%eax
085539b7 +0x081:  mov    %eax,(%esp)
085539ba +0x084:  call   08553912 <_ZN8WongWork14CMailBoxHelper15IsCeraPointItemEm>  ; WongWork::CMailBoxHelper::IsCeraPointItem(unsigned long)
085539bf +0x089:  test   %al,%al
085539c1 +0x08b:  je     08553a00 <+0xca>
085539c3 +0x08d:  mov    -0xd7(%ebp),%esi
085539c9 +0x093:  movzbl -0xc9dc(%ebp),%ebx
085539d0 +0x09a:  mov    0xc(%ebp),%eax
085539d3 +0x09d:  mov    %eax,(%esp)
085539d6 +0x0a0:  call   08557516 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x77>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x77
085539db +0x0a5:  mov    %esi,0x10(%esp)
085539df +0x0a9:  mov    0x18(%ebp),%edx
085539e2 +0x0ac:  mov    %edx,0xc(%esp)
085539e6 +0x0b0:  mov    %ebx,0x8(%esp)
085539ea +0x0b4:  mov    %eax,0x4(%esp)
085539ee +0x0b8:  mov    0x8(%ebp),%eax
085539f1 +0x0bb:  mov    %eax,(%esp)
085539f4 +0x0be:  call   08692a34 <_ZN5CUser18DoGetCeraPointItemEjbR10ENUM_ERRORm>  ; CUser::DoGetCeraPointItem(unsigned int, bool, ENUM_ERROR&, unsigned long)
085539f9 +0x0c3:  mov    %eax,%ebx
085539fb +0x0c5:  jmp    0855418f <+0x859>
08553a00 +0x0ca:  cmpb   $0x0,-0xc9dc(%ebp)
08553a07 +0x0d1:  je     08553d7c <+0x446>
08553a0d +0x0d7:  movl   $0x0,-0x48(%ebp)
08553a14 +0x0de:  movl   $0x0,-0x4c(%ebp)
08553a1b +0x0e5:  movb   $0x0,-0x4d(%ebp)
08553a1f +0x0e9:  mov    -0xd7(%ebp),%eax
08553a25 +0x0ef:  mov    %eax,%edx
08553a27 +0x0f1:  mov    &_ZN10GlobalData11s_pCeraShopE,%eax
08553a2c +0x0f6:  lea    -0x4d(%ebp),%ecx
08553a2f +0x0f9:  mov    %ecx,0x10(%esp)
08553a33 +0x0fd:  lea    -0x4c(%ebp),%ecx
08553a36 +0x100:  mov    %ecx,0xc(%esp)
08553a3a +0x104:  lea    -0x48(%ebp),%ecx
08553a3d +0x107:  mov    %ecx,0x8(%esp)
08553a41 +0x10b:  mov    %edx,0x4(%esp)
08553a45 +0x10f:  mov    %eax,(%esp)
08553a48 +0x112:  call   08324a1e <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb>  ; WongWork::CCeraShop::IsSpecialItem(int, int&, int&, bool&)
08553a4d +0x117:  test   %al,%al
08553a4f +0x119:  je     08553caa <+0x374>
08553a55 +0x11f:  mov    -0xd7(%ebp),%eax
08553a5b +0x125:  mov    %eax,%esi
08553a5d +0x127:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08553a62 +0x12c:  mov    %esi,0x4(%esp)
08553a66 +0x130:  mov    %eax,(%esp)
08553a69 +0x133:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08553a6e +0x138:  mov    %eax,-0x20(%ebp)
08553a71 +0x13b:  mov    -0x20(%ebp),%eax
08553a74 +0x13e:  mov    %eax,(%esp)
08553a77 +0x141:  call   085538c0 <_Z31_isUnusableSpecialItemInVillagePK5CItem>  ; _isUnusableSpecialItemInVillage(CItem const*)
08553a7c +0x146:  test   %al,%al
08553a7e +0x148:  je     08553caa <+0x374>
08553a84 +0x14e:  mov    -0x48(%ebp),%eax
08553a87 +0x151:  cmp    $0x1,%eax
08553a8a +0x154:  jne    08553ac2 <+0x18c>
08553a8c +0x156:  mov    0x8(%ebp),%eax
08553a8f +0x159:  mov    %eax,(%esp)
08553a92 +0x15c:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
08553a97 +0x161:  mov    %eax,(%esp)
08553a9a +0x164:  call   0822d708 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2db2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2db2
08553a9f +0x169:  mov    -0x4c(%ebp),%edx
08553aa2 +0x16c:  cmp    %edx,%eax
08553aa4 +0x16e:  setge  %al
08553aa7 +0x171:  test   %al,%al
08553aa9 +0x173:  je     08553ca0 <+0x36a>
08553aaf +0x179:  mov    0x18(%ebp),%eax
08553ab2 +0x17c:  movl   $0xd,(%eax)
08553ab8 +0x182:  mov    $0x0,%ebx
08553abd +0x187:  jmp    0855418f <+0x859>
08553ac2 +0x18c:  mov    -0x48(%ebp),%eax
08553ac5 +0x18f:  cmp    $0x5,%eax
08553ac8 +0x192:  jne    08553ca0 <+0x36a>
08553ace +0x198:  lea    -0x5c(%ebp),%eax
08553ad1 +0x19b:  mov    %eax,(%esp)
08553ad4 +0x19e:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
08553ad9 +0x1a3:  mov    -0xd7(%ebp),%eax
08553adf +0x1a9:  mov    %eax,%esi
08553ae1 +0x1ab:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08553ae6 +0x1b0:  mov    %esi,0x4(%esp)
08553aea +0x1b4:  mov    %eax,(%esp)
08553aed +0x1b7:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08553af2 +0x1bc:  mov    %eax,-0x1c(%ebp)
08553af5 +0x1bf:  mov    -0x1c(%ebp),%eax
08553af8 +0x1c2:  add    $0x21c,%eax
08553afd +0x1c7:  mov    %eax,-0x18(%ebp)
08553b00 +0x1ca:  lea    -0x60(%ebp),%eax
08553b03 +0x1cd:  mov    -0x18(%ebp),%edx
08553b06 +0x1d0:  mov    %edx,0x4(%esp)
08553b0a +0x1d4:  mov    %eax,(%esp)
08553b0d +0x1d7:  call   0827e5fc <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x71e>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x71e
08553b12 +0x1dc:  sub    $0x4,%esp
08553b15 +0x1df:  lea    -0x64(%ebp),%eax
08553b18 +0x1e2:  mov    -0x18(%ebp),%edx
08553b1b +0x1e5:  mov    %edx,0x4(%esp)
08553b1f +0x1e9:  mov    %eax,(%esp)
08553b22 +0x1ec:  call   0827e628 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x74a>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x74a
08553b27 +0x1f1:  sub    $0x4,%esp
08553b2a +0x1f4:  jmp    08553b8c <+0x256>
08553b2c +0x1f6:  lea    -0x60(%ebp),%eax
08553b2f +0x1f9:  mov    %eax,(%esp)
08553b32 +0x1fc:  call   0827e316 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x438>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x438
08553b37 +0x201:  lea    0x4(%eax),%esi
08553b3a +0x204:  lea    -0x60(%ebp),%eax
08553b3d +0x207:  mov    %eax,(%esp)
08553b40 +0x20a:  call   0827e316 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x438>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x438
08553b45 +0x20f:  mov    %eax,%edx
08553b47 +0x211:  lea    -0x3c(%ebp),%eax
08553b4a +0x214:  mov    %esi,0x8(%esp)
08553b4e +0x218:  mov    %edx,0x4(%esp)
08553b52 +0x21c:  mov    %eax,(%esp)
08553b55 +0x21f:  call   0855898c <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x14ed>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x14ed
08553b5a +0x224:  sub    $0x4,%esp
08553b5d +0x227:  lea    -0x3c(%ebp),%eax
08553b60 +0x22a:  mov    %eax,0x4(%esp)
08553b64 +0x22e:  lea    -0x44(%ebp),%eax
08553b67 +0x231:  mov    %eax,(%esp)
08553b6a +0x234:  call   085589ca <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x152b>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x152b
08553b6f +0x239:  lea    -0x44(%ebp),%eax
08553b72 +0x23c:  mov    %eax,0x4(%esp)
08553b76 +0x240:  lea    -0x5c(%ebp),%eax
08553b79 +0x243:  mov    %eax,(%esp)
08553b7c +0x246:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
08553b81 +0x24b:  lea    -0x60(%ebp),%eax
08553b84 +0x24e:  mov    %eax,(%esp)
08553b87 +0x251:  call   0827e300 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x422>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x422
08553b8c +0x256:  lea    -0x64(%ebp),%eax
08553b8f +0x259:  mov    %eax,0x4(%esp)
08553b93 +0x25d:  lea    -0x60(%ebp),%eax
08553b96 +0x260:  mov    %eax,(%esp)
08553b99 +0x263:  call   0827e2d4 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x3f6>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x3f6
08553b9e +0x268:  test   %al,%al
08553ba0 +0x26a:  jne    08553b2c <+0x1f6>
08553ba2 +0x26c:  lea    -0x894(%ebp),%eax
08553ba8 +0x272:  mov    %eax,(%esp)
08553bab +0x275:  call   0822d52c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2bd6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2bd6
08553bb0 +0x27a:  lea    -0xc9d3(%ebp),%eax
08553bb6 +0x280:  mov    %eax,(%esp)
08553bb9 +0x283:  call   0822d3b8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2a62>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2a62
08553bbe +0x288:  lea    -0xc9d3(%ebp),%eax
08553bc4 +0x28e:  mov    %eax,0x4(%esp)
08553bc8 +0x292:  lea    -0x894(%ebp),%eax
08553bce +0x298:  mov    %eax,(%esp)
08553bd1 +0x29b:  call   0822d4f6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ba0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ba0
08553bd6 +0x2a0:  mov    0x8(%ebp),%eax
08553bd9 +0x2a3:  mov    %eax,(%esp)
08553bdc +0x2a6:  call   081803ca <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x61>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x61
08553be1 +0x2ab:  mov    %eax,0x4(%esp)
08553be5 +0x2af:  lea    -0x894(%ebp),%eax
08553beb +0x2b5:  mov    %eax,(%esp)
08553bee +0x2b8:  call   084fa314 <_ZN10CInventory7setCopyERKS_>  ; CInventory::setCopy(CInventory const&)
08553bf3 +0x2bd:  lea    -0x5c(%ebp),%eax
08553bf6 +0x2c0:  mov    %eax,0x4(%esp)
08553bfa +0x2c4:  lea    -0x894(%ebp),%eax
08553c00 +0x2ca:  mov    %eax,(%esp)
08553c03 +0x2cd:  call   0850675e <_ZN10CInventory19tryInsertEventItemsERKSt6vectorISt4pairIiiESaIS2_EE>  ; CInventory::tryInsertEventItems(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)
08553c08 +0x2d2:  mov    %eax,%esi
08553c0a +0x2d4:  lea    -0x5c(%ebp),%eax
08553c0d +0x2d7:  mov    %eax,(%esp)
08553c10 +0x2da:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
08553c15 +0x2df:  cmp    %eax,%esi
08553c17 +0x2e1:  setne  %al
08553c1a +0x2e4:  test   %al,%al
08553c1c +0x2e6:  je     08553c33 <+0x2fd>
08553c1e +0x2e8:  mov    0x18(%ebp),%eax
08553c21 +0x2eb:  movl   $0x4,(%eax)
08553c27 +0x2f1:  mov    $0x0,%ebx
08553c2c +0x2f6:  mov    $0x0,%esi
08553c31 +0x2fb:  jmp    08553c52 <+0x31c>
08553c33 +0x2fd:  mov    $0x1,%esi
08553c38 +0x302:  jmp    08553c52 <+0x31c>
08553c3a +0x304:  mov    %edx,%ebx
08553c3c +0x306:  mov    %eax,%esi
08553c3e +0x308:  lea    -0x894(%ebp),%eax
08553c44 +0x30e:  mov    %eax,(%esp)
08553c47 +0x311:  call   0822d600 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2caa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2caa
08553c4c +0x316:  mov    %esi,%eax
08553c4e +0x318:  mov    %ebx,%edx
08553c50 +0x31a:  jmp    08553c72 <+0x33c>
08553c52 +0x31c:  lea    -0x894(%ebp),%eax
08553c58 +0x322:  mov    %eax,(%esp)
08553c5b +0x325:  call   0822d600 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2caa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2caa
08553c60 +0x32a:  test   %esi,%esi
08553c62 +0x32c:  jne    08553c6b <+0x335>
08553c64 +0x32e:  mov    $0x0,%esi
08553c69 +0x333:  jmp    08553c8d <+0x357>
08553c6b +0x335:  mov    $0x1,%esi
08553c70 +0x33a:  jmp    08553c8d <+0x357>
08553c72 +0x33c:  mov    %edx,%ebx
08553c74 +0x33e:  mov    %eax,%esi
08553c76 +0x340:  lea    -0x5c(%ebp),%eax
08553c79 +0x343:  mov    %eax,(%esp)
08553c7c +0x346:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08553c81 +0x34b:  mov    %esi,%eax
08553c83 +0x34d:  mov    %ebx,%edx
08553c85 +0x34f:  mov    %eax,(%esp)
08553c88 +0x352:  call   08ae3750 <_Unwind_Resume>
08553c8d +0x357:  lea    -0x5c(%ebp),%eax
08553c90 +0x35a:  mov    %eax,(%esp)
08553c93 +0x35d:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08553c98 +0x362:  test   %esi,%esi
08553c9a +0x364:  je     0855418f <+0x859>
08553ca0 +0x36a:  mov    $0x1,%ebx
08553ca5 +0x36f:  jmp    0855418f <+0x859>
08553caa +0x374:  mov    0x8(%ebp),%eax
08553cad +0x377:  mov    %eax,(%esp)
08553cb0 +0x37a:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08553cb5 +0x37f:  mov    -0xd9(%ebp),%edx
08553cbb +0x385:  mov    %edx,0x4(%esp)
08553cbf +0x389:  mov    -0xd5(%ebp),%edx
08553cc5 +0x38f:  mov    %edx,0x8(%esp)
08553cc9 +0x393:  mov    -0xd1(%ebp),%edx
08553ccf +0x399:  mov    %edx,0xc(%esp)
08553cd3 +0x39d:  mov    -0xcd(%ebp),%edx
08553cd9 +0x3a3:  mov    %edx,0x10(%esp)
08553cdd +0x3a7:  mov    -0xc9(%ebp),%edx
08553ce3 +0x3ad:  mov    %edx,0x14(%esp)
08553ce7 +0x3b1:  mov    -0xc5(%ebp),%edx
08553ced +0x3b7:  mov    %edx,0x18(%esp)
08553cf1 +0x3bb:  mov    -0xc1(%ebp),%edx
08553cf7 +0x3c1:  mov    %edx,0x1c(%esp)
08553cfb +0x3c5:  mov    -0xbd(%ebp),%edx
08553d01 +0x3cb:  mov    %edx,0x20(%esp)
08553d05 +0x3cf:  mov    -0xb9(%ebp),%edx
08553d0b +0x3d5:  mov    %edx,0x24(%esp)
08553d0f +0x3d9:  mov    -0xb5(%ebp),%edx
08553d15 +0x3df:  mov    %edx,0x28(%esp)
08553d19 +0x3e3:  mov    -0xb1(%ebp),%edx
08553d1f +0x3e9:  mov    %edx,0x2c(%esp)
08553d23 +0x3ed:  mov    -0xad(%ebp),%edx
08553d29 +0x3f3:  mov    %edx,0x30(%esp)
08553d2d +0x3f7:  mov    -0xa9(%ebp),%edx
08553d33 +0x3fd:  mov    %edx,0x34(%esp)
08553d37 +0x401:  mov    -0xa5(%ebp),%edx
08553d3d +0x407:  mov    %edx,0x38(%esp)
08553d41 +0x40b:  mov    -0xa1(%ebp),%edx
08553d47 +0x411:  mov    %edx,0x3c(%esp)
08553d4b +0x415:  movzbl -0x9d(%ebp),%edx
08553d52 +0x41c:  mov    %dl,0x40(%esp)
08553d56 +0x420:  mov    %eax,(%esp)
08553d59 +0x423:  call   08501eca <_ZNK10CInventory26tryInsertItemIntoInventoryE10Inven_Item>  ; CInventory::tryInsertItemIntoInventory(Inven_Item) const
08553d5e +0x428:  shr    $0x1f,%eax
08553d61 +0x42b:  test   %al,%al
08553d63 +0x42d:  je     0855418a <+0x854>
08553d69 +0x433:  mov    0x18(%ebp),%eax
08553d6c +0x436:  movl   $0x4,(%eax)
08553d72 +0x43c:  mov    $0x0,%ebx
08553d77 +0x441:  jmp    0855418f <+0x859>
08553d7c +0x446:  movl   $0x0,-0x68(%ebp)
08553d83 +0x44d:  movl   $0x0,-0x6c(%ebp)
08553d8a +0x454:  movb   $0x0,-0x6d(%ebp)
08553d8e +0x458:  mov    -0xd7(%ebp),%eax
08553d94 +0x45e:  mov    %eax,%edx
08553d96 +0x460:  mov    &_ZN10GlobalData11s_pCeraShopE,%eax
08553d9b +0x465:  lea    -0x6d(%ebp),%ecx
08553d9e +0x468:  mov    %ecx,0x10(%esp)
08553da2 +0x46c:  lea    -0x6c(%ebp),%ecx
08553da5 +0x46f:  mov    %ecx,0xc(%esp)
08553da9 +0x473:  lea    -0x68(%ebp),%ecx
08553dac +0x476:  mov    %ecx,0x8(%esp)
08553db0 +0x47a:  mov    %edx,0x4(%esp)
08553db4 +0x47e:  mov    %eax,(%esp)
08553db7 +0x481:  call   08324a1e <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb>  ; WongWork::CCeraShop::IsSpecialItem(int, int&, int&, bool&)
08553dbc +0x486:  test   %al,%al
08553dbe +0x488:  je     0855405c <+0x726>
08553dc4 +0x48e:  mov    -0xd7(%ebp),%eax
08553dca +0x494:  mov    %eax,%ebx
08553dcc +0x496:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08553dd1 +0x49b:  mov    %ebx,0x4(%esp)
08553dd5 +0x49f:  mov    %eax,(%esp)
08553dd8 +0x4a2:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08553ddd +0x4a7:  mov    %eax,-0x14(%ebp)
08553de0 +0x4aa:  mov    -0x14(%ebp),%eax
08553de3 +0x4ad:  mov    %eax,(%esp)
08553de6 +0x4b0:  call   085538c0 <_Z31_isUnusableSpecialItemInVillagePK5CItem>  ; _isUnusableSpecialItemInVillage(CItem const*)
08553deb +0x4b5:  test   %al,%al
08553ded +0x4b7:  je     0855405c <+0x726>
08553df3 +0x4bd:  movl   $0x0,-0x78(%ebp)
08553dfa +0x4c4:  mov    -0xd7(%ebp),%eax
08553e00 +0x4ca:  mov    %eax,%ebx
08553e02 +0x4cc:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08553e07 +0x4d1:  mov    0xc(%eax),%eax
08553e0a +0x4d4:  mov    %ebx,0x4(%esp)
08553e0e +0x4d8:  mov    %eax,(%esp)
08553e11 +0x4db:  call   0817a10c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x18a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x18a
08553e16 +0x4e0:  mov    %eax,-0x10(%ebp)
08553e19 +0x4e3:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08553e20 +0x4ea:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08553e25 +0x4ef:  mov    %eax,-0xc(%ebp)
08553e28 +0x4f2:  lea    -0x84(%ebp),%eax
08553e2e +0x4f8:  mov    %eax,(%esp)
08553e31 +0x4fb:  call   0814ac92 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa31>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa31
08553e36 +0x500:  lea    -0x9c(%ebp),%eax
08553e3c +0x506:  mov    %eax,(%esp)
08553e3f +0x509:  call   0817a244 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x2c2>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x2c2
08553e44 +0x50e:  mov    -0xd7(%ebp),%eax
08553e4a +0x514:  mov    %eax,%edx
08553e4c +0x516:  mov    &_ZN10GlobalData11s_pCeraShopE,%eax
08553e51 +0x51b:  movl   $0x1,0x30(%esp)
08553e59 +0x523:  movl   $0x0,0x2c(%esp)
08553e61 +0x52b:  movl   $0x0,0x28(%esp)
08553e69 +0x533:  movl   $0x0,0x24(%esp)
08553e71 +0x53b:  lea    -0x9c(%ebp),%ecx
08553e77 +0x541:  mov    %ecx,0x20(%esp)
08553e7b +0x545:  lea    -0x84(%ebp),%ecx
08553e81 +0x54b:  mov    %ecx,0x1c(%esp)
08553e85 +0x54f:  movl   $0x1,0x18(%esp)
08553e8d +0x557:  mov    -0xc(%ebp),%ecx
08553e90 +0x55a:  mov    %ecx,0x14(%esp)
08553e94 +0x55e:  lea    -0x78(%ebp),%ecx
08553e97 +0x561:  mov    %ecx,0x10(%esp)
08553e9b +0x565:  mov    -0x10(%ebp),%ecx
08553e9e +0x568:  mov    %ecx,0xc(%esp)
08553ea2 +0x56c:  mov    %edx,0x8(%esp)
08553ea6 +0x570:  mov    0x8(%ebp),%edx
08553ea9 +0x573:  mov    %edx,0x4(%esp)
08553ead +0x577:  mov    %eax,(%esp)
08553eb0 +0x57a:  call   0832587e <_ZN8WongWork9CCeraShop18ProcessSpecialItemEP5CUseriiRilbRSt6vectorI10Inven_ItemSaIS5_EERNS0_21stCeraShopItemParam_tEccbi>  ; WongWork::CCeraShop::ProcessSpecialItem(CUser*, int, int, int&, long, bool, std::vector<Inven_Item, std::allocator<Inven_Item> >&, WongWork::CCeraShop::stCeraShopItemParam_t&, char, char, bool, int)
08553eb5 +0x57f:  test   %al,%al
08553eb7 +0x581:  je     08553ffc <+0x6c6>
08553ebd +0x587:  mov    -0x78(%ebp),%eax
08553ec0 +0x58a:  test   %eax,%eax
08553ec2 +0x58c:  je     08553ece <+0x598>
08553ec4 +0x58e:  mov    $0x0,%ebx
08553ec9 +0x593:  jmp    0855401b <+0x6e5>
08553ece +0x598:  cmpl   $0x0,-0x10(%ebp)
08553ed2 +0x59c:  je     08553ef4 <+0x5be>
08553ed4 +0x59e:  mov    -0x10(%ebp),%eax
08553ed7 +0x5a1:  mov    %eax,0x4(%esp)
08553edb +0x5a5:  mov    0x8(%ebp),%eax
08553ede +0x5a8:  mov    %eax,(%esp)
08553ee1 +0x5ab:  call   0864d878 <_ZN5CUser17IsRestrictedGoodsEi>  ; CUser::IsRestrictedGoods(int)
08553ee6 +0x5b0:  xor    $0x1,%eax
08553ee9 +0x5b3:  test   %al,%al
08553eeb +0x5b5:  je     08553ef4 <+0x5be>
08553eed +0x5b7:  mov    $0x1,%eax
08553ef2 +0x5bc:  jmp    08553ef9 <+0x5c3>
08553ef4 +0x5be:  mov    $0x0,%eax
08553ef9 +0x5c3:  test   %al,%al
08553efb +0x5c5:  je     08553f4a <+0x614>
08553efd +0x5c7:  mov    -0x10(%ebp),%eax
08553f00 +0x5ca:  mov    %eax,0x4(%esp)
08553f04 +0x5ce:  mov    0x8(%ebp),%eax
08553f07 +0x5d1:  mov    %eax,(%esp)
08553f0a +0x5d4:  call   0864d84e <_ZN5CUser18SetRestrictedGoodsEi>  ; CUser::SetRestrictedGoods(int)
08553f0f +0x5d9:  movl   $0x0,0xc(%esp)
08553f17 +0x5e1:  mov    -0xc(%ebp),%eax
08553f1a +0x5e4:  mov    %eax,0x8(%esp)
08553f1e +0x5e8:  mov    -0x10(%ebp),%eax
08553f21 +0x5eb:  mov    %eax,0x4(%esp)
08553f25 +0x5ef:  mov    0x8(%ebp),%eax
08553f28 +0x5f2:  mov    %eax,(%esp)
08553f2b +0x5f5:  call   08325a30 <_ZN8WongWork9CCeraShop15SaveFeaturedIdxEP5CUseriii>  ; WongWork::CCeraShop::SaveFeaturedIdx(CUser*, int, int, int)
08553f30 +0x5fa:  mov    -0x10(%ebp),%eax
08553f33 +0x5fd:  mov    %eax,0x8(%esp)
08553f37 +0x601:  movl   $0x1,0x4(%esp)
08553f3f +0x609:  mov    0x8(%ebp),%eax
08553f42 +0x60c:  mov    %eax,(%esp)
08553f45 +0x60f:  call   0864d9a4 <_ZN5CUser19SendRestrictedGoodsEbi>  ; CUser::SendRestrictedGoods(bool, int)
08553f4a +0x614:  mov    -0xd7(%ebp),%eax
08553f50 +0x61a:  cmp    $0xc1,%eax
08553f55 +0x61f:  jne    08553ffc <+0x6c6>
08553f5b +0x625:  mov    &_ZN10GlobalData11s_pCeraShopE,%eax
08553f60 +0x62a:  movl   $0x1,0x30(%esp)
08553f68 +0x632:  movl   $0x0,0x2c(%esp)
08553f70 +0x63a:  movl   $0x0,0x28(%esp)
08553f78 +0x642:  movl   $0x0,0x24(%esp)
08553f80 +0x64a:  lea    -0x9c(%ebp),%edx
08553f86 +0x650:  mov    %edx,0x20(%esp)
08553f8a +0x654:  lea    -0x84(%ebp),%edx
08553f90 +0x65a:  mov    %edx,0x1c(%esp)
08553f94 +0x65e:  movl   $0x1,0x18(%esp)
08553f9c +0x666:  mov    -0xc(%ebp),%edx
08553f9f +0x669:  mov    %edx,0x14(%esp)
08553fa3 +0x66d:  lea    -0x78(%ebp),%edx
08553fa6 +0x670:  mov    %edx,0x10(%esp)
08553faa +0x674:  movl   $0xc352,0xc(%esp)
08553fb2 +0x67c:  movl   $0x10,0x8(%esp)
08553fba +0x684:  mov    0x8(%ebp),%edx
08553fbd +0x687:  mov    %edx,0x4(%esp)
08553fc1 +0x68b:  mov    %eax,(%esp)
08553fc4 +0x68e:  call   0832587e <_ZN8WongWork9CCeraShop18ProcessSpecialItemEP5CUseriiRilbRSt6vectorI10Inven_ItemSaIS5_EERNS0_21stCeraShopItemParam_tEccbi>  ; WongWork::CCeraShop::ProcessSpecialItem(CUser*, int, int, int&, long, bool, std::vector<Inven_Item, std::allocator<Inven_Item> >&, WongWork::CCeraShop::stCeraShopItemParam_t&, char, char, bool, int)
08553fc9 +0x693:  xor    $0x1,%eax
08553fcc +0x696:  test   %al,%al
08553fce +0x698:  je     08553ffc <+0x6c6>
08553fd0 +0x69a:  movl   $"AuctionVIP Error - Present to friend(add private-store)",0x10(%esp)
08553fd8 +0x6a2:  movl   $0x34c,0xc(%esp)
08553fe0 +0x6aa:  movl   $&_ZZN8WongWork14CMailBoxHelper17_DoGetPackageItemEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERRORE19__PRETTY_FUNCTION__,0x8(%esp)
08553fe8 +0x6b2:  movl   $"MailBox.cpp",0x4(%esp)
08553ff0 +0x6ba:  movl   $0x1,(%esp)
08553ff7 +0x6c1:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08553ffc +0x6c6:  mov    $0x1,%ebx
08554001 +0x6cb:  jmp    0855401b <+0x6e5>
08554003 +0x6cd:  mov    %edx,%ebx
08554005 +0x6cf:  mov    %eax,%esi
08554007 +0x6d1:  lea    -0x9c(%ebp),%eax
0855400d +0x6d7:  mov    %eax,(%esp)
08554010 +0x6da:  call   0817a2fc <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x37a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x37a
08554015 +0x6df:  mov    %esi,%eax
08554017 +0x6e1:  mov    %ebx,%edx
08554019 +0x6e3:  jmp    0855402b <+0x6f5>
0855401b +0x6e5:  lea    -0x9c(%ebp),%eax
08554021 +0x6eb:  mov    %eax,(%esp)
08554024 +0x6ee:  call   0817a2fc <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x37a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x37a
08554029 +0x6f3:  jmp    08554049 <+0x713>
0855402b +0x6f5:  mov    %edx,%ebx
0855402d +0x6f7:  mov    %eax,%esi
0855402f +0x6f9:  lea    -0x84(%ebp),%eax
08554035 +0x6ff:  mov    %eax,(%esp)
08554038 +0x702:  call   0814aca6 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa45>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa45
0855403d +0x707:  mov    %esi,%eax
0855403f +0x709:  mov    %ebx,%edx
08554041 +0x70b:  mov    %eax,(%esp)
08554044 +0x70e:  call   08ae3750 <_Unwind_Resume>
08554049 +0x713:  lea    -0x84(%ebp),%eax
0855404f +0x719:  mov    %eax,(%esp)
08554052 +0x71c:  call   0814aca6 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa45>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa45
08554057 +0x721:  jmp    0855418f <+0x859>
0855405c +0x726:  movl   $0x0,-0x74(%ebp)
08554063 +0x72d:  mov    0x8(%ebp),%eax
08554066 +0x730:  mov    %eax,(%esp)
08554069 +0x733:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0855406e +0x738:  movl   $0x0,0x4c(%esp)
08554076 +0x740:  movl   $0x1,0x48(%esp)
0855407e +0x748:  movl   $0x15,0x44(%esp)
08554086 +0x750:  mov    -0xd9(%ebp),%edx
0855408c +0x756:  mov    %edx,0x4(%esp)
08554090 +0x75a:  mov    -0xd5(%ebp),%edx
08554096 +0x760:  mov    %edx,0x8(%esp)
0855409a +0x764:  mov    -0xd1(%ebp),%edx
085540a0 +0x76a:  mov    %edx,0xc(%esp)
085540a4 +0x76e:  mov    -0xcd(%ebp),%edx
085540aa +0x774:  mov    %edx,0x10(%esp)
085540ae +0x778:  mov    -0xc9(%ebp),%edx
085540b4 +0x77e:  mov    %edx,0x14(%esp)
085540b8 +0x782:  mov    -0xc5(%ebp),%edx
085540be +0x788:  mov    %edx,0x18(%esp)
085540c2 +0x78c:  mov    -0xc1(%ebp),%edx
085540c8 +0x792:  mov    %edx,0x1c(%esp)
085540cc +0x796:  mov    -0xbd(%ebp),%edx
085540d2 +0x79c:  mov    %edx,0x20(%esp)
085540d6 +0x7a0:  mov    -0xb9(%ebp),%edx
085540dc +0x7a6:  mov    %edx,0x24(%esp)
085540e0 +0x7aa:  mov    -0xb5(%ebp),%edx
085540e6 +0x7b0:  mov    %edx,0x28(%esp)
085540ea +0x7b4:  mov    -0xb1(%ebp),%edx
085540f0 +0x7ba:  mov    %edx,0x2c(%esp)
085540f4 +0x7be:  mov    -0xad(%ebp),%edx
085540fa +0x7c4:  mov    %edx,0x30(%esp)
085540fe +0x7c8:  mov    -0xa9(%ebp),%edx
08554104 +0x7ce:  mov    %edx,0x34(%esp)
08554108 +0x7d2:  mov    -0xa5(%ebp),%edx
0855410e +0x7d8:  mov    %edx,0x38(%esp)
08554112 +0x7dc:  mov    -0xa1(%ebp),%edx
08554118 +0x7e2:  mov    %edx,0x3c(%esp)
0855411c +0x7e6:  movzbl -0x9d(%ebp),%edx
08554123 +0x7ed:  mov    %dl,0x40(%esp)
08554127 +0x7f1:  mov    %eax,(%esp)
0855412a +0x7f4:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
0855412f +0x7f9:  mov    %eax,-0x74(%ebp)
08554132 +0x7fc:  mov    -0x74(%ebp),%eax
08554135 +0x7ff:  shr    $0x1f,%eax
08554138 +0x802:  test   %al,%al
0855413a +0x804:  je     08554143 <+0x80d>
0855413c +0x806:  mov    $0x1,%ebx
08554141 +0x80b:  jmp    0855418f <+0x859>
08554143 +0x80d:  movl   $0x0,-0x24(%ebp)
0855414a +0x814:  lea    -0x2c(%ebp),%eax
0855414d +0x817:  lea    -0x74(%ebp),%edx
08554150 +0x81a:  mov    %edx,0x8(%esp)
08554154 +0x81e:  lea    -0x24(%ebp),%edx
08554157 +0x821:  mov    %edx,0x4(%esp)
0855415b +0x825:  mov    %eax,(%esp)
0855415e +0x828:  call   085589fe <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x155f>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x155f
08554163 +0x82d:  sub    $0x4,%esp
08554166 +0x830:  lea    -0x2c(%ebp),%eax
08554169 +0x833:  mov    %eax,0x4(%esp)
0855416d +0x837:  lea    -0x34(%ebp),%eax
08554170 +0x83a:  mov    %eax,(%esp)
08554173 +0x83d:  call   08558a44 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x15a5>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x15a5
08554178 +0x842:  lea    -0x34(%ebp),%eax
0855417b +0x845:  mov    %eax,0x4(%esp)
0855417f +0x849:  mov    0x10(%ebp),%eax
08554182 +0x84c:  mov    %eax,(%esp)
08554185 +0x84f:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
0855418a +0x854:  mov    $0x1,%ebx
0855418f +0x859:  mov    %ebx,%eax
08554191 +0x85b:  lea    -0x8(%ebp),%esp
08554194 +0x85e:  add    $0x0,%esp
08554197 +0x861:  pop    %ebx
08554198 +0x862:  pop    %esi
08554199 +0x863:  pop    %ebp
0855419a +0x864:  ret
0855419b +0x865:  nop
```

## 反编译 C

```c
// WongWork::CMailBoxHelper::_DoGetPackageItem @ 0x8553936

/* WongWork::CMailBoxHelper::_DoGetPackageItem(CUser*, WongWork::CMailBox::CMail const*,
   std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, bool, ENUM_ERROR&) */

undefined4
WongWork::CMailBoxHelper::_DoGetPackageItem
          (CUser *param_1,CMail *param_2,vector *param_3,bool param_4,ENUM_ERROR *param_5)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  CDataManager *pCVar5;
  CCargo *this;
  int iVar6;
  uint *puVar7;
  CInventory *pCVar8;
  int iVar9;
  undefined4 unaff_EBX;
  InventoryMemory local_c9d7 [49471];
  CInventory local_898 [1979];
  undefined2 local_dd;
  undefined2 uStack_db;
  undefined2 uStack_d9;
  undefined2 uStack_d7;
  undefined4 local_d5;
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
  stCeraShopItemParam_t local_a0 [24];
  vector<Inven_Item,std::allocator<Inven_Item>> local_88 [12];
  int local_7c;
  int local_78;
  bool local_71;
  int local_70 [2];
  __normal_iterator local_68 [4];
  __normal_iterator<STStackablePackageData_const*,std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>
  local_64 [4];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_60 [15];
  bool local_51;
  int local_50;
  int local_4c;
  pair<int,int> local_48 [8];
  uint local_40 [2];
  pair<int,int> local_38 [8];
  ENUM_ITEMSPACE local_30 [8];
  int local_28;
  CItem *local_24;
  int local_20;
  int local_1c;
  CItem *local_18;
  int local_14;
  long local_10;
  
  CMailBox::CMail::GetPackageItem();
  if ((0x28d287 < CONCAT22(uStack_d9,uStack_db)) && (CONCAT22(uStack_d9,uStack_db) < 0x28d29a)) {
    uVar3 = CUser::DoGetGoldItem(param_1,CONCAT22(uStack_d9,uStack_db),param_3,param_4,param_5);
    return uVar3;
  }
  cVar1 = IsCeraPointItem(CONCAT22(uStack_d9,uStack_db));
  if (cVar1 != '\0') {
    uVar4 = CMailBox::CMail::GetPackageMoney(param_2);
    uVar3 = CUser::DoGetCeraPointItem(param_1,uVar4,param_4,param_5,CONCAT22(uStack_d9,uStack_db));
    return uVar3;
  }
  if (param_4) {
    local_4c = 0;
    local_50 = 0;
    local_51 = false;
    cVar1 = CCeraShop::IsSpecialItem
                      (GlobalData::s_pCeraShop,CONCAT22(uStack_d9,uStack_db),&local_4c,&local_50,
                       &local_51);
    if (cVar1 != '\0') {
      iVar6 = CONCAT22(uStack_d9,uStack_db);
      pCVar5 = (CDataManager *)G_CDataManager();
      local_24 = (CItem *)CDataManager::find_item(pCVar5,iVar6);
      cVar1 = _isUnusableSpecialItemInVillage(local_24);
      if (cVar1 != '\0') {
        if (local_4c == 1) {
          this = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)param_1);
          iVar6 = CCargo::GetCapacity(this);
          if (local_50 <= iVar6) {
            *(undefined4 *)param_5 = 0xd;
            return 0;
          }
        }
        else if (local_4c == 5) {
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_60);
                    /* try { // try from 08553ae1 to 08553baf has its CatchHandler @ 08553c72 */
          pCVar5 = (CDataManager *)G_CDataManager();
          local_20 = CDataManager::find_item(pCVar5,CONCAT22(uStack_d9,uStack_db));
          local_1c = local_20 + 0x21c;
          std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>::begin();
          std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>::end();
          while (bVar2 = __gnu_cxx::operator!=(local_64,local_68), bVar2) {
            __gnu_cxx::
            __normal_iterator<STStackablePackageData_const*,std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>
            ::operator->(local_64);
            puVar7 = (uint *)__gnu_cxx::
                             __normal_iterator<STStackablePackageData_const*,std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>
                             ::operator->(local_64);
            std::make_pair<unsigned_int_const&,unsigned_int_const&>(local_40,puVar7);
            std::pair<int,int>::pair<unsigned_int,unsigned_int>(local_48,(pair *)local_40);
            std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                      (local_60,local_48);
            __gnu_cxx::
            __normal_iterator<STStackablePackageData_const*,std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>
            ::operator++(local_64);
          }
          CInventory::CInventory(local_898);
          InventoryMemory::InventoryMemory(local_c9d7);
          CInventory::SetInventoryMemory(local_898,local_c9d7);
          pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenRefR((CUserCharacInfo *)param_1);
                    /* try { // try from 08553bee to 08553c07 has its CatchHandler @ 08553c3a */
          CInventory::setCopy(local_898,pCVar8);
          iVar6 = CInventory::tryInsertEventItems(local_898,(vector *)local_60);
          iVar9 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size(local_60)
          ;
          if (iVar6 != iVar9) {
            *(undefined4 *)param_5 = 4;
            unaff_EBX = 0;
          }
                    /* try { // try from 08553c5b to 08553c5f has its CatchHandler @ 08553c72 */
          CInventory::~CInventory(local_898);
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_60);
          if (iVar6 != iVar9) {
            return unaff_EBX;
          }
        }
        return 1;
      }
    }
    uVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    iVar6 = CInventory::tryInsertItemIntoInventory
                      (uVar3,CONCAT22(uStack_db,local_dd),CONCAT22(uStack_d7,uStack_d9),local_d5,
                       local_d1,local_cd,local_c9,local_c5,local_c1,local_bd,local_b9,local_b5,
                       local_b1,local_ad,local_a9,local_a5,local_a1);
    if (iVar6 < 0) {
      *(undefined4 *)param_5 = 4;
      return 0;
    }
  }
  else {
    local_70[1] = 0;
    local_70[0] = 0;
    local_71 = false;
    cVar1 = CCeraShop::IsSpecialItem
                      (GlobalData::s_pCeraShop,CONCAT22(uStack_d9,uStack_db),local_70 + 1,local_70,
                       &local_71);
    if (cVar1 != '\0') {
      iVar6 = CONCAT22(uStack_d9,uStack_db);
      pCVar5 = (CDataManager *)G_CDataManager();
      local_18 = (CItem *)CDataManager::find_item(pCVar5,iVar6);
      cVar1 = _isUnusableSpecialItemInVillage(local_18);
      if (cVar1 != '\0') {
        local_7c = 0;
        iVar6 = CONCAT22(uStack_d9,uStack_db);
        iVar9 = G_CDataManager();
        local_14 = CItemList::GetRestrictCode(*(CItemList **)(iVar9 + 0xc),iVar6);
        local_10 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        std::vector<Inven_Item,std::allocator<Inven_Item>>::vector(local_88);
                    /* try { // try from 08553e3f to 08553e43 has its CatchHandler @ 0855402b */
        CCeraShop::stCeraShopItemParam_t::stCeraShopItemParam_t(local_a0);
                    /* try { // try from 08553eb0 to 08553ffb has its CatchHandler @ 08554003 */
        cVar1 = CCeraShop::ProcessSpecialItem
                          (GlobalData::s_pCeraShop,param_1,CONCAT22(uStack_d9,uStack_db),local_14,
                           &local_7c,local_10,true,(vector *)local_88,local_a0,'\0','\0',false,1);
        if (cVar1 != '\0') {
          if (local_7c != 0) {
            uVar3 = 0;
            goto LAB_0855401b;
          }
          if ((local_14 == 0) ||
             (cVar1 = CUser::IsRestrictedGoods(param_1,local_14), cVar1 == '\x01')) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            CUser::SetRestrictedGoods(param_1,local_14);
            CCeraShop::SaveFeaturedIdx(param_1,local_14,local_10,0);
            CUser::SendRestrictedGoods(param_1,true,local_14);
          }
          if ((CONCAT22(uStack_d9,uStack_db) == 0xc1) &&
             (cVar1 = CCeraShop::ProcessSpecialItem
                                (GlobalData::s_pCeraShop,param_1,0x10,0xc352,&local_7c,local_10,true
                                 ,(vector *)local_88,local_a0,'\0','\0',false,1), cVar1 != '\x01'))
          {
            LogManager::logFormat
                      (1,"MailBox.cpp",
                       "static bool WongWork::CMailBoxHelper::_DoGetPackageItem(CUser*, const WongWork::CMailBox::CMail*, WongWork::CMailBoxHelper::IntPairVector&, bool, ENUM_ERROR&)"
                       ,0x34c,"AuctionVIP Error - Present to friend(add private-store)");
          }
        }
        uVar3 = 1;
LAB_0855401b:
                    /* try { // try from 08554024 to 08554028 has its CatchHandler @ 0855402b */
        CCeraShop::stCeraShopItemParam_t::~stCeraShopItemParam_t(local_a0);
        std::vector<Inven_Item,std::allocator<Inven_Item>>::~vector(local_88);
        return uVar3;
      }
    }
    local_78 = 0;
    uVar3 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    local_78 = CInventory::insertItemIntoInventory
                         (uVar3,CONCAT22(uStack_db,local_dd),CONCAT22(uStack_d7,uStack_d9),local_d5,
                          local_d1,local_cd,local_c9,local_c5,local_c1,local_bd,local_b9,local_b5,
                          local_b1,local_ad,local_a9,local_a5,local_a1,0x15,1,0);
    if (local_78 < 0) {
      return 1;
    }
    local_28 = 0;
    std::make_pair<ENUM_ITEMSPACE,int&>(local_30,&local_28);
    std::pair<int,int>::pair<ENUM_ITEMSPACE,int>(local_38,local_30);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_3,local_38);
  }
  return 1;
}
```
