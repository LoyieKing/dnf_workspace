# Load_Goods_File

`_ZN9CItemList15Load_Goods_FileEPKc`

`CItemList::Load_Goods_File(char const*)`

| 类 | 地址 |
|---|---|
| `CItemList` | `0x085123da` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085123da  _ZN9CItemList15Load_Goods_FileEPKc
#           CItemList::Load_Goods_File(char const*)
# range [0x085123da, 0x0851292f]
085123da +0x000:  push   %ebp
085123db +0x001:  mov    %esp,%ebp
085123dd +0x003:  push   %edi
085123de +0x004:  push   %esi
085123df +0x005:  push   %ebx
085123e0 +0x006:  sub    $0x13c,%esp
085123e6 +0x00c:  lea    -0x114(%ebp),%ebx
085123ec +0x012:  mov    %ebx,%edi
085123ee +0x014:  mov    $0xf,%esi
085123f3 +0x019:  jmp    08512403 <+0x29>
085123f5 +0x01b:  mov    %edi,(%esp)
085123f8 +0x01e:  call   08518b5e <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5193>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5193
085123fd +0x023:  add    $0xc,%edi
08512400 +0x026:  sub    $0x1,%esi
08512403 +0x029:  cmp    $0xffffffff,%esi
08512406 +0x02c:  setne  %al
08512409 +0x02f:  test   %al,%al
0851240b +0x031:  jne    085123f5 <+0x1b>
0851240d +0x033:  jmp    08512451 <+0x77>
0851240f +0x035:  mov    %edx,%edi
08512411 +0x037:  mov    %eax,-0x11c(%ebp)
08512417 +0x03d:  test   %ebx,%ebx
08512419 +0x03f:  je     08512441 <+0x67>
0851241b +0x041:  mov    $0xf,%eax
08512420 +0x046:  sub    %esi,%eax
08512422 +0x048:  mov    %eax,%edx
08512424 +0x04a:  mov    %edx,%eax
08512426 +0x04c:  add    %eax,%eax
08512428 +0x04e:  add    %edx,%eax
0851242a +0x050:  shl    $0x2,%eax
0851242d +0x053:  lea    (%ebx,%eax,1),%esi
08512430 +0x056:  cmp    %ebx,%esi
08512432 +0x058:  je     08512441 <+0x67>
08512434 +0x05a:  sub    $0xc,%esi
08512437 +0x05d:  mov    %esi,(%esp)
0851243a +0x060:  call   08518b72 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x51a7>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x51a7
0851243f +0x065:  jmp    08512430 <+0x56>
08512441 +0x067:  mov    -0x11c(%ebp),%eax
08512447 +0x06d:  mov    %edi,%edx
08512449 +0x06f:  mov    %eax,(%esp)
0851244c +0x072:  call   08ae3750 <_Unwind_Resume>
08512451 +0x077:  mov    0x8(%ebp),%eax
08512454 +0x07a:  add    $0x40,%eax
08512457 +0x07d:  movl   $0x0,0x18(%esp)
0851245f +0x085:  movl   $0x0,0x14(%esp)
08512467 +0x08d:  movl   $0x0,0x10(%esp)
0851246f +0x095:  movl   $0x0,0xc(%esp)
08512477 +0x09d:  mov    %eax,0x8(%esp)
0851247b +0x0a1:  lea    -0x114(%ebp),%eax
08512481 +0x0a7:  mov    %eax,0x4(%esp)
08512485 +0x0ab:  mov    0xc(%ebp),%eax
08512488 +0x0ae:  mov    %eax,(%esp)
0851248b +0x0b1:  call   088fdcb5 <_Z22importCashShopItemListPcPSt6vectorI14STCeraShopItemSaIS1_EERS0_I21stCeraShopBonusInfo_tSaIS5_EEPvPiPSt3mapIiS0_IS0_IiSaIiEESaISD_EESt4lessIiESaISt4pairIKiSF_EEEPSD_>  ; importCashShopItemList(char*, std::vector<STCeraShopItem, std::allocator<STCeraShopItem> >*, std::vector<stCeraShopBonusInfo_t, std::allocator<stCeraShopBonusInfo_t> >&, void*, int*, std::map<int, std::vector<std::vector<int, std::allocator<int> >, std::allocator<std::vector<int, std::allocator<int> > > >, std::less<int>, std::allocator<std::pair<int const, std::vector<std::vector<int, std::allocator<int> >, std::allocator<std::vector<int, std::allocator<int> > > > > > >*, std::vector<int, std::allocator<int> >*)
08512490 +0x0b6:  xor    $0x1,%eax
08512493 +0x0b9:  test   %al,%al
08512495 +0x0bb:  je     085124d4 <+0xfa>
08512497 +0x0bd:  mov    0xc(%ebp),%eax
0851249a +0x0c0:  mov    %eax,0x14(%esp)
0851249e +0x0c4:  movl   $"importCashShopItemList() fail file - %s",0x10(%esp)
085124a6 +0x0cc:  movl   $0xa76,0xc(%esp)
085124ae +0x0d4:  movl   $&_ZZN9CItemList15Load_Goods_FileEPKcE19__PRETTY_FUNCTION__,0x8(%esp)
085124b6 +0x0dc:  movl   $"item.cpp",0x4(%esp)
085124be +0x0e4:  movl   $0x1,(%esp)
085124c5 +0x0eb:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085124ca +0x0f0:  mov    $0x0,%esi
085124cf +0x0f5:  jmp    08512900 <+0x526>
085124d4 +0x0fa:  call   0861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>  ; sync_script::GetInstanceSyncScript()
085124d9 +0x0ff:  mov    %eax,(%esp)
085124dc +0x102:  call   08622a5a <_ZN11sync_script11CSyncScript25truncateCeraShopItemTableEv>  ; sync_script::CSyncScript::truncateCeraShopItemTable()
085124e1 +0x107:  movl   $0x0,-0x38(%ebp)
085124e8 +0x10e:  jmp    085128b7 <+0x4dd>
085124ed +0x113:  mov    -0x38(%ebp),%edx
085124f0 +0x116:  lea    -0x114(%ebp),%ecx
085124f6 +0x11c:  mov    %edx,%eax
085124f8 +0x11e:  add    %eax,%eax
085124fa +0x120:  add    %edx,%eax
085124fc +0x122:  shl    $0x2,%eax
085124ff +0x125:  lea    (%ecx,%eax,1),%eax
08512502 +0x128:  mov    %eax,(%esp)
08512505 +0x12b:  call   08518bd0 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5205>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5205
0851250a +0x130:  mov    %eax,-0x34(%ebp)
0851250d +0x133:  movl   $0x0,-0x30(%ebp)
08512514 +0x13a:  jmp    085128a2 <+0x4c8>
08512519 +0x13f:  mov    -0x30(%ebp),%ecx
0851251c +0x142:  mov    -0x38(%ebp),%edx
0851251f +0x145:  lea    -0x114(%ebp),%ebx
08512525 +0x14b:  mov    %edx,%eax
08512527 +0x14d:  add    %eax,%eax
08512529 +0x14f:  add    %edx,%eax
0851252b +0x151:  shl    $0x2,%eax
0851252e +0x154:  lea    (%ebx,%eax,1),%eax
08512531 +0x157:  mov    %ecx,0x4(%esp)
08512535 +0x15b:  mov    %eax,(%esp)
08512538 +0x15e:  call   08518bf2 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5227>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5227
0851253d +0x163:  mov    %eax,%esi
0851253f +0x165:  movl   $0x3c,(%esp)
08512546 +0x16c:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0851254b +0x171:  mov    %eax,%ebx
0851254d +0x173:  mov    %ebx,%eax
0851254f +0x175:  mov    %esi,0x4(%esp)
08512553 +0x179:  mov    %eax,(%esp)
08512556 +0x17c:  call   08514ea0 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x14d5>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x14d5
0851255b +0x181:  jmp    08512572 <+0x198>
0851255d +0x183:  mov    %edx,%esi
0851255f +0x185:  mov    %eax,%edi
08512561 +0x187:  mov    %ebx,(%esp)
08512564 +0x18a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08512569 +0x18f:  mov    %edi,%eax
0851256b +0x191:  mov    %esi,%edx
0851256d +0x193:  jmp    085128cd <+0x4f3>
08512572 +0x198:  mov    -0x30(%ebp),%ecx
08512575 +0x19b:  mov    -0x38(%ebp),%edx
08512578 +0x19e:  lea    -0x114(%ebp),%esi
0851257e +0x1a4:  mov    %edx,%eax
08512580 +0x1a6:  add    %eax,%eax
08512582 +0x1a8:  add    %edx,%eax
08512584 +0x1aa:  shl    $0x2,%eax
08512587 +0x1ad:  lea    (%esi,%eax,1),%eax
0851258a +0x1b0:  mov    %ecx,0x4(%esp)
0851258e +0x1b4:  mov    %eax,(%esp)
08512591 +0x1b7:  call   08518bf2 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5227>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5227
08512596 +0x1bc:  lea    0x8(%eax),%edx
08512599 +0x1bf:  mov    0x8(%ebp),%eax
0851259c +0x1c2:  add    $0x18,%eax
0851259f +0x1c5:  mov    %edx,0x4(%esp)
085125a3 +0x1c9:  mov    %eax,(%esp)
085125a6 +0x1cc:  call   08518c0c <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5241>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5241
085125ab +0x1d1:  mov    %ebx,%edx
085125ad +0x1d3:  mov    %edx,(%eax)
085125af +0x1d5:  mov    -0x30(%ebp),%ecx
085125b2 +0x1d8:  mov    -0x38(%ebp),%edx
085125b5 +0x1db:  lea    -0x114(%ebp),%ebx
085125bb +0x1e1:  mov    %edx,%eax
085125bd +0x1e3:  add    %eax,%eax
085125bf +0x1e5:  add    %edx,%eax
085125c1 +0x1e7:  shl    $0x2,%eax
085125c4 +0x1ea:  lea    (%ebx,%eax,1),%eax
085125c7 +0x1ed:  mov    %ecx,0x4(%esp)
085125cb +0x1f1:  mov    %eax,(%esp)
085125ce +0x1f4:  call   08518bf2 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5227>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5227
085125d3 +0x1f9:  mov    %eax,-0x2c(%ebp)
085125d6 +0x1fc:  movl   $0x0,-0x28(%ebp)
085125dd +0x203:  mov    -0x2c(%ebp),%eax
085125e0 +0x206:  mov    0x14(%eax),%eax
085125e3 +0x209:  cmp    $0x1,%eax
085125e6 +0x20c:  jne    085125f6 <+0x21c>
085125e8 +0x20e:  mov    -0x2c(%ebp),%eax
085125eb +0x211:  mov    0x38(%eax),%eax
085125ee +0x214:  mov    %eax,-0x28(%ebp)
085125f1 +0x217:  jmp    085126aa <+0x2d0>
085125f6 +0x21c:  mov    -0x30(%ebp),%ecx
085125f9 +0x21f:  mov    -0x38(%ebp),%edx
085125fc +0x222:  lea    -0x114(%ebp),%ebx
08512602 +0x228:  mov    %edx,%eax
08512604 +0x22a:  add    %eax,%eax
08512606 +0x22c:  add    %edx,%eax
08512608 +0x22e:  shl    $0x2,%eax
0851260b +0x231:  lea    (%ebx,%eax,1),%eax
0851260e +0x234:  mov    %ecx,0x4(%esp)
08512612 +0x238:  mov    %eax,(%esp)
08512615 +0x23b:  call   08518bf2 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5227>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5227
0851261a +0x240:  lea    0x8(%eax),%edx
0851261d +0x243:  mov    0x8(%ebp),%eax
08512620 +0x246:  add    $0x18,%eax
08512623 +0x249:  mov    %edx,0x4(%esp)
08512627 +0x24d:  mov    %eax,(%esp)
0851262a +0x250:  call   08518c0c <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5241>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5241
0851262f +0x255:  mov    (%eax),%eax
08512631 +0x257:  mov    %eax,(%esp)
08512634 +0x25a:  call   0817a06c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xea>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xea
08512639 +0x25f:  mov    %eax,-0x24(%ebp)
0851263c +0x262:  mov    -0x24(%ebp),%eax
0851263f +0x265:  mov    %eax,(%esp)
08512642 +0x268:  call   08150f28 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x85d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x85d
08512647 +0x26d:  mov    %eax,-0x20(%ebp)
0851264a +0x270:  mov    -0x2c(%ebp),%eax
0851264d +0x273:  mov    0x38(%eax),%eax
08512650 +0x276:  mov    %eax,-0x28(%ebp)
08512653 +0x279:  mov    -0x2c(%ebp),%eax
08512656 +0x27c:  mov    0xc(%eax),%eax
08512659 +0x27f:  test   %eax,%eax
0851265b +0x281:  jne    08512681 <+0x2a7>
0851265d +0x283:  mov    -0x2c(%ebp),%eax
08512660 +0x286:  mov    0x8(%eax),%eax
08512663 +0x289:  cmp    $0xffffffff,%eax
08512666 +0x28c:  je     08512681 <+0x2a7>
08512668 +0x28e:  mov    -0x20(%ebp),%eax
0851266b +0x291:  mov    %eax,(%esp)
0851266e +0x294:  call   081521b6 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1aeb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1aeb
08512673 +0x299:  xor    $0x1,%eax
08512676 +0x29c:  test   %al,%al
08512678 +0x29e:  je     08512681 <+0x2a7>
0851267a +0x2a0:  mov    $0x1,%eax
0851267f +0x2a5:  jmp    08512686 <+0x2ac>
08512681 +0x2a7:  mov    $0x0,%eax
08512686 +0x2ac:  test   %al,%al
08512688 +0x2ae:  je     085126aa <+0x2d0>
0851268a +0x2b0:  mov    -0x2c(%ebp),%eax
0851268d +0x2b3:  movzwl 0x22(%eax),%eax
08512691 +0x2b7:  cwtl
08512692 +0x2b8:  sub    $0x1,%eax
08512695 +0x2bb:  mov    %eax,0x4(%esp)
08512699 +0x2bf:  mov    -0x20(%ebp),%eax
0851269c +0x2c2:  mov    %eax,(%esp)
0851269f +0x2c5:  call   081522f6 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1c2b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1c2b
085126a4 +0x2ca:  mov    0xc(%eax),%eax
085126a7 +0x2cd:  mov    %eax,-0x28(%ebp)
085126aa +0x2d0:  cmpl   $0x0,-0x28(%ebp)
085126ae +0x2d4:  je     085127d5 <+0x3fb>
085126b4 +0x2da:  mov    -0x2c(%ebp),%eax
085126b7 +0x2dd:  movzwl 0x22(%eax),%eax
085126bb +0x2e1:  cmp    $0x1,%ax
085126bf +0x2e5:  je     085126d1 <+0x2f7>
085126c1 +0x2e7:  mov    -0x2c(%ebp),%eax
085126c4 +0x2ea:  movzwl 0x22(%eax),%eax
085126c8 +0x2ee:  test   %ax,%ax
085126cb +0x2f1:  jne    085127d5 <+0x3fb>
085126d1 +0x2f7:  mov    -0x2c(%ebp),%eax
085126d4 +0x2fa:  mov    0x14(%eax),%eax
085126d7 +0x2fd:  mov    %eax,%ebx
085126d9 +0x2ff:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085126de +0x304:  mov    %ebx,0x4(%esp)
085126e2 +0x308:  mov    %eax,(%esp)
085126e5 +0x30b:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
085126ea +0x310:  mov    %eax,-0x1c(%ebp)
085126ed +0x313:  cmpl   $0x0,-0x1c(%ebp)
085126f1 +0x317:  je     085127d5 <+0x3fb>
085126f7 +0x31d:  mov    -0x2c(%ebp),%eax
085126fa +0x320:  mov    0x8(%eax),%eax
085126fd +0x323:  cmp    $0xffffffff,%eax
08512700 +0x326:  je     085127d5 <+0x3fb>
08512706 +0x32c:  mov    -0x1c(%ebp),%eax
08512709 +0x32f:  mov    %eax,(%esp)
0851270c +0x332:  call   085143ec <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0xa21>  ; global constructors keyed to CItem::GetNeedMaterial() const+0xa21
08512711 +0x337:  mov    %eax,%esi
08512713 +0x339:  mov    -0x1c(%ebp),%eax
08512716 +0x33c:  mov    %eax,(%esp)
08512719 +0x33f:  call   0811ed82 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x7d>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x7d
0851271e +0x344:  mov    %eax,%ebx
08512720 +0x346:  mov    -0x2c(%ebp),%eax
08512723 +0x349:  movzwl 0x22(%eax),%eax
08512727 +0x34d:  cwtl
08512728 +0x34e:  mov    %eax,-0x128(%ebp)
0851272e +0x354:  mov    -0x2c(%ebp),%eax
08512731 +0x357:  mov    0x1c(%eax),%eax
08512734 +0x35a:  mov    %eax,-0x124(%ebp)
0851273a +0x360:  mov    -0x2c(%ebp),%eax
0851273d +0x363:  mov    0x14(%eax),%eax
08512740 +0x366:  mov    %eax,-0x120(%ebp)
08512746 +0x36c:  mov    -0x2c(%ebp),%eax
08512749 +0x36f:  mov    0x8(%eax),%eax
0851274c +0x372:  mov    %eax,%edi
0851274e +0x374:  call   0861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>  ; sync_script::GetInstanceSyncScript()
08512753 +0x379:  mov    %eax,%edx
08512755 +0x37b:  mov    %esi,0x1c(%esp)
08512759 +0x37f:  mov    %ebx,0x18(%esp)
0851275d +0x383:  mov    -0x128(%ebp),%eax
08512763 +0x389:  mov    %eax,0x14(%esp)
08512767 +0x38d:  mov    -0x28(%ebp),%eax
0851276a +0x390:  mov    %eax,0x10(%esp)
0851276e +0x394:  mov    -0x124(%ebp),%eax
08512774 +0x39a:  mov    %eax,0xc(%esp)
08512778 +0x39e:  mov    -0x120(%ebp),%eax
0851277e +0x3a4:  mov    %eax,0x8(%esp)
08512782 +0x3a8:  mov    %edi,0x4(%esp)
08512786 +0x3ac:  mov    %edx,(%esp)
08512789 +0x3af:  call   08622abc <_ZN11sync_script11CSyncScript24insertCeraShopItemIntoDBEjjiisPKcS2_>  ; sync_script::CSyncScript::insertCeraShopItemIntoDB(unsigned int, unsigned int, int, int, short, char const*, char const*)
0851278e +0x3b4:  xor    $0x1,%eax
08512791 +0x3b7:  test   %al,%al
08512793 +0x3b9:  je     085127d5 <+0x3fb>
08512795 +0x3bb:  mov    -0x2c(%ebp),%eax
08512798 +0x3be:  mov    0x8(%eax),%eax
0851279b +0x3c1:  mov    %eax,0x14(%esp)
0851279f +0x3c5:  movl   $"insertCeraShopItemIntoDB() fail IPG - %d",0x10(%esp)
085127a7 +0x3cd:  movl   $0xb01,0xc(%esp)
085127af +0x3d5:  movl   $&_ZZN9CItemList15Load_Goods_FileEPKcE19__PRETTY_FUNCTION__,0x8(%esp)
085127b7 +0x3dd:  movl   $"item.cpp",0x4(%esp)
085127bf +0x3e5:  movl   $0x1,(%esp)
085127c6 +0x3ec:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085127cb +0x3f1:  mov    $0x0,%esi
085127d0 +0x3f6:  jmp    08512900 <+0x526>
085127d5 +0x3fb:  mov    -0x30(%ebp),%ecx
085127d8 +0x3fe:  mov    -0x38(%ebp),%edx
085127db +0x401:  lea    -0x114(%ebp),%ebx
085127e1 +0x407:  mov    %edx,%eax
085127e3 +0x409:  add    %eax,%eax
085127e5 +0x40b:  add    %edx,%eax
085127e7 +0x40d:  shl    $0x2,%eax
085127ea +0x410:  lea    (%ebx,%eax,1),%eax
085127ed +0x413:  mov    %ecx,0x4(%esp)
085127f1 +0x417:  mov    %eax,(%esp)
085127f4 +0x41a:  call   08518bf2 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5227>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5227
085127f9 +0x41f:  mov    0x10(%eax),%eax
085127fc +0x422:  test   %eax,%eax
085127fe +0x424:  setne  %al
08512801 +0x427:  test   %al,%al
08512803 +0x429:  je     0851289e <+0x4c4>
08512809 +0x42f:  mov    -0x30(%ebp),%ecx
0851280c +0x432:  mov    -0x38(%ebp),%edx
0851280f +0x435:  lea    -0x114(%ebp),%ebx
08512815 +0x43b:  mov    %edx,%eax
08512817 +0x43d:  add    %eax,%eax
08512819 +0x43f:  add    %edx,%eax
0851281b +0x441:  shl    $0x2,%eax
0851281e +0x444:  lea    (%ebx,%eax,1),%eax
08512821 +0x447:  mov    %ecx,0x4(%esp)
08512825 +0x44b:  mov    %eax,(%esp)
08512828 +0x44e:  call   08518bf2 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5227>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5227
0851282d +0x453:  lea    0x10(%eax),%ebx
08512830 +0x456:  mov    -0x30(%ebp),%ecx
08512833 +0x459:  mov    -0x38(%ebp),%edx
08512836 +0x45c:  lea    -0x114(%ebp),%esi
0851283c +0x462:  mov    %edx,%eax
0851283e +0x464:  add    %eax,%eax
08512840 +0x466:  add    %edx,%eax
08512842 +0x468:  shl    $0x2,%eax
08512845 +0x46b:  lea    (%esi,%eax,1),%eax
08512848 +0x46e:  mov    %ecx,0x4(%esp)
0851284c +0x472:  mov    %eax,(%esp)
0851284f +0x475:  call   08518bf2 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5227>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5227
08512854 +0x47a:  lea    0x14(%eax),%edx
08512857 +0x47d:  lea    -0x40(%ebp),%eax
0851285a +0x480:  mov    %ebx,0x8(%esp)
0851285e +0x484:  mov    %edx,0x4(%esp)
08512862 +0x488:  mov    %eax,(%esp)
08512865 +0x48b:  call   08111a37 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xf49>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xf49
0851286a +0x490:  sub    $0x4,%esp
0851286d +0x493:  lea    -0x40(%ebp),%eax
08512870 +0x496:  mov    %eax,0x4(%esp)
08512874 +0x49a:  lea    -0x48(%ebp),%eax
08512877 +0x49d:  mov    %eax,(%esp)
0851287a +0x4a0:  call   08518c4a <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x527f>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x527f
0851287f +0x4a5:  mov    0x8(%ebp),%eax
08512882 +0x4a8:  lea    0x2c(%eax),%ecx
08512885 +0x4ab:  lea    -0x54(%ebp),%eax
08512888 +0x4ae:  lea    -0x48(%ebp),%edx
0851288b +0x4b1:  mov    %edx,0x8(%esp)
0851288f +0x4b5:  mov    %ecx,0x4(%esp)
08512893 +0x4b9:  mov    %eax,(%esp)
08512896 +0x4bc:  call   08518c7a <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x52af>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x52af
0851289b +0x4c1:  sub    $0x4,%esp
0851289e +0x4c4:  addl   $0x1,-0x30(%ebp)
085128a2 +0x4c8:  mov    -0x30(%ebp),%eax
085128a5 +0x4cb:  cmp    -0x34(%ebp),%eax
085128a8 +0x4ce:  setl   %al
085128ab +0x4d1:  test   %al,%al
085128ad +0x4d3:  jne    08512519 <+0x13f>
085128b3 +0x4d9:  addl   $0x1,-0x38(%ebp)
085128b7 +0x4dd:  cmpl   $0xf,-0x38(%ebp)
085128bb +0x4e1:  setle  %al
085128be +0x4e4:  test   %al,%al
085128c0 +0x4e6:  jne    085124ed <+0x113>
085128c6 +0x4ec:  mov    $0x1,%esi
085128cb +0x4f1:  jmp    08512900 <+0x526>
085128cd +0x4f3:  mov    %edx,%esi
085128cf +0x4f5:  mov    %eax,%edi
085128d1 +0x4f7:  lea    -0x114(%ebp),%eax
085128d7 +0x4fd:  lea    0xc0(%eax),%ebx
085128dd +0x503:  lea    -0x114(%ebp),%eax
085128e3 +0x509:  cmp    %eax,%ebx
085128e5 +0x50b:  je     085128f4 <+0x51a>
085128e7 +0x50d:  sub    $0xc,%ebx
085128ea +0x510:  mov    %ebx,(%esp)
085128ed +0x513:  call   08518b72 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x51a7>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x51a7
085128f2 +0x518:  jmp    085128dd <+0x503>
085128f4 +0x51a:  mov    %edi,%eax
085128f6 +0x51c:  mov    %esi,%edx
085128f8 +0x51e:  mov    %eax,(%esp)
085128fb +0x521:  call   08ae3750 <_Unwind_Resume>
08512900 +0x526:  lea    -0x114(%ebp),%eax
08512906 +0x52c:  lea    0xc0(%eax),%ebx
0851290c +0x532:  lea    -0x114(%ebp),%eax
08512912 +0x538:  cmp    %eax,%ebx
08512914 +0x53a:  je     08512923 <+0x549>
08512916 +0x53c:  sub    $0xc,%ebx
08512919 +0x53f:  mov    %ebx,(%esp)
0851291c +0x542:  call   08518b72 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x51a7>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x51a7
08512921 +0x547:  jmp    0851290c <+0x532>
08512923 +0x549:  mov    %esi,%eax
08512925 +0x54b:  lea    -0xc(%ebp),%esp
08512928 +0x54e:  add    $0x0,%esp
0851292b +0x551:  pop    %ebx
0851292c +0x552:  pop    %esi
0851292d +0x553:  pop    %edi
0851292e +0x554:  pop    %ebp
0851292f +0x555:  ret
```

## 反编译 C

```c
// CItemList::Load_Goods_File @ 0x85123da

/* CItemList::Load_Goods_File(char const*) */

undefined4 __thiscall CItemList::Load_Goods_File(CItemList *this,char *param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  CSyncScript *this_00;
  STCeraShopItem *pSVar6;
  CCeraShopGoods *this_01;
  undefined4 *puVar7;
  CDataManager *this_02;
  char *pcVar8;
  uint uVar9;
  vector<STCeraShopItem,std::allocator<STCeraShopItem>> *pvVar10;
  int iVar11;
  undefined4 uVar12;
  vector<STCeraShopItem,std::allocator<STCeraShopItem>> local_118 [192];
  hash_map<unsigned_int,int,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<int>>
  local_58 [12];
  pair<unsigned_int_const,int> local_4c [8];
  ulong local_44 [2];
  int local_3c;
  int local_38;
  uint local_34;
  int local_30;
  int local_2c;
  CEquipItem *local_28;
  vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>> *local_24;
  CItem *local_20;
  
  pvVar10 = local_118;
  for (iVar11 = 0xf; iVar11 != -1; iVar11 = iVar11 + -1) {
                    /* try { // try from 085123f8 to 085123fc has its CatchHandler @ 0851240f */
    std::vector<STCeraShopItem,std::allocator<STCeraShopItem>>::vector(pvVar10);
    pvVar10 = pvVar10 + 0xc;
  }
                    /* try { // try from 0851248b to 0851254a has its CatchHandler @ 085128cd */
  cVar5 = importCashShopItemList
                    (param_1,(vector *)local_118,(vector *)(this + 0x40),(void *)0x0,(int *)0x0,
                     (map *)0x0,(vector *)0x0);
  if (cVar5 == '\x01') {
    this_00 = (CSyncScript *)sync_script::GetInstanceSyncScript();
    sync_script::CSyncScript::truncateCeraShopItemTable(this_00);
    for (local_3c = 0; local_3c < 0x10; local_3c = local_3c + 1) {
      local_38 = std::vector<STCeraShopItem,std::allocator<STCeraShopItem>>::size
                           (local_118 + local_3c * 0xc);
      for (local_34 = 0; (int)local_34 < local_38; local_34 = local_34 + 1) {
        pSVar6 = (STCeraShopItem *)
                 std::vector<STCeraShopItem,std::allocator<STCeraShopItem>>::operator[]
                           (local_118 + local_3c * 0xc,local_34);
        this_01 = operator_new(0x3c);
                    /* try { // try from 08512556 to 0851255a has its CatchHandler @ 0851255d */
        CCeraShopGoods::CCeraShopGoods(this_01,pSVar6);
        iVar11 = std::vector<STCeraShopItem,std::allocator<STCeraShopItem>>::operator[]
                           (local_118 + local_3c * 0xc,local_34);
                    /* try { // try from 085125a6 to 0851289a has its CatchHandler @ 085128cd */
        puVar7 = (undefined4 *)
                 __gnu_cxx::
                 hash_map<int,CCeraShopGoods*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CCeraShopGoods*>>
                 ::operator[]((hash_map<int,CCeraShopGoods*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CCeraShopGoods*>>
                               *)(this + 0x18),(int *)(iVar11 + 8));
        *puVar7 = this_01;
        local_30 = std::vector<STCeraShopItem,std::allocator<STCeraShopItem>>::operator[]
                             (local_118 + local_3c * 0xc,local_34);
        local_2c = 0;
        if (*(int *)(local_30 + 0x14) == 1) {
          local_2c = *(int *)(local_30 + 0x38);
        }
        else {
          iVar11 = std::vector<STCeraShopItem,std::allocator<STCeraShopItem>>::operator[]
                             (local_118 + local_3c * 0xc,local_34);
          puVar7 = (undefined4 *)
                   __gnu_cxx::
                   hash_map<int,CCeraShopGoods*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CCeraShopGoods*>>
                   ::operator[]((hash_map<int,CCeraShopGoods*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CCeraShopGoods*>>
                                 *)(this + 0x18),(int *)(iVar11 + 8));
          local_28 = (CEquipItem *)CCeraShopGoods::GetRelatedItem((CCeraShopGoods *)*puVar7);
          local_24 = (vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>> *)
                     CEquipItem::getAvatarTypeSelect(local_28);
          local_2c = *(int *)(local_30 + 0x38);
          if ((*(int *)(local_30 + 0xc) == 0) && (*(int *)(local_30 + 8) != -1)) {
            cVar5 = std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>::empty();
            if (cVar5 == '\x01') goto LAB_08512681;
            bVar4 = true;
          }
          else {
LAB_08512681:
            bVar4 = false;
          }
          if (bVar4) {
            iVar11 = std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>::
                     operator[](local_24,(int)*(short *)(local_30 + 0x22) - 1);
            local_2c = *(int *)(iVar11 + 0xc);
          }
        }
        if ((local_2c != 0) &&
           ((*(short *)(local_30 + 0x22) == 1 || (*(short *)(local_30 + 0x22) == 0)))) {
          iVar11 = *(int *)(local_30 + 0x14);
          this_02 = (CDataManager *)G_CDataManager();
          local_20 = (CItem *)CDataManager::find_item(this_02,iVar11);
          if ((local_20 != (CItem *)0x0) && (*(int *)(local_30 + 8) != -1)) {
            uVar12 = CItem::GetItemIconName(local_20);
            pcVar8 = (char *)CItem::GetItemName(local_20);
            sVar1 = *(short *)(local_30 + 0x22);
            iVar11 = *(int *)(local_30 + 0x1c);
            iVar2 = *(int *)(local_30 + 0x14);
            uVar3 = *(uint *)(local_30 + 8);
            uVar9 = sync_script::GetInstanceSyncScript();
            cVar5 = sync_script::CSyncScript::insertCeraShopItemIntoDB
                              (uVar9,uVar3,iVar2,iVar11,(short)local_2c,(char *)(int)sVar1,pcVar8);
            if (cVar5 != '\x01') {
              LogManager::logFormat
                        (1,"item.cpp","bool CItemList::Load_Goods_File(const char*)",0xb01,
                         "insertCeraShopItemIntoDB() fail IPG - %d",*(undefined4 *)(local_30 + 8),
                         pcVar8,uVar12);
              uVar12 = 0;
              goto LAB_08512900;
            }
          }
        }
        iVar11 = std::vector<STCeraShopItem,std::allocator<STCeraShopItem>>::operator[]
                           (local_118 + local_3c * 0xc,local_34);
        if (*(int *)(iVar11 + 0x10) != 0) {
          std::vector<STCeraShopItem,std::allocator<STCeraShopItem>>::operator[]
                    (local_118 + local_3c * 0xc,local_34);
          iVar11 = std::vector<STCeraShopItem,std::allocator<STCeraShopItem>>::operator[]
                             (local_118 + local_3c * 0xc,local_34);
          std::make_pair<unsigned_long&,int&>(local_44,(int *)(iVar11 + 0x14));
          std::pair<unsigned_int_const,int>::pair<unsigned_long,int>(local_4c,(pair *)local_44);
          __gnu_cxx::
          hash_map<unsigned_int,int,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<int>>
          ::insert(local_58,this + 0x2c);
        }
      }
    }
    uVar12 = 1;
  }
  else {
    LogManager::logFormat
              (1,"item.cpp","bool CItemList::Load_Goods_File(const char*)",0xa76,
               "importCashShopItemList() fail file - %s",param_1);
    uVar12 = 0;
  }
LAB_08512900:
  pvVar10 = (vector<STCeraShopItem,std::allocator<STCeraShopItem>> *)local_58;
  while (pvVar10 != local_118) {
    pvVar10 = pvVar10 + -0xc;
    std::vector<STCeraShopItem,std::allocator<STCeraShopItem>>::~vector(pvVar10);
  }
  return uVar12;
}
```
