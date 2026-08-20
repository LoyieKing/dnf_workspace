# get_data

`_ZN18DisPatcher_BuyItem8get_dataEP5CUserR12MSG_BUY_ITEMR12BuyItemParam`

`DisPatcher_BuyItem::get_data(CUser*, MSG_BUY_ITEM&, BuyItemParam&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_BuyItem` | `0x081be658` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081be658  _ZN18DisPatcher_BuyItem8get_dataEP5CUserR12MSG_BUY_ITEMR12BuyItemParam
#           DisPatcher_BuyItem::get_data(CUser*, MSG_BUY_ITEM&, BuyItemParam&)
# range [0x081be658, 0x081beaaf]
081be658 +0x000:  push   %ebp
081be659 +0x001:  mov    %esp,%ebp
081be65b +0x003:  push   %esi
081be65c +0x004:  push   %ebx
081be65d +0x005:  sub    $0x20,%esp
081be660 +0x008:  mov    0x10(%ebp),%eax
081be663 +0x00b:  mov    0xd(%eax),%eax
081be666 +0x00e:  mov    %eax,%ebx
081be668 +0x010:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081be66d +0x015:  mov    %ebx,0x4(%esp)
081be671 +0x019:  mov    %eax,(%esp)
081be674 +0x01c:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081be679 +0x021:  mov    0x14(%ebp),%edx
081be67c +0x024:  mov    %eax,0xa8(%edx)
081be682 +0x02a:  mov    0x14(%ebp),%eax
081be685 +0x02d:  mov    0xa8(%eax),%eax
081be68b +0x033:  test   %eax,%eax
081be68d +0x035:  jne    081be699 <+0x41>
081be68f +0x037:  mov    $0x11,%eax
081be694 +0x03c:  jmp    081beaa8 <+0x450>
081be699 +0x041:  mov    0x14(%ebp),%eax
081be69c +0x044:  mov    0xa8(%eax),%eax
081be6a2 +0x04a:  mov    %eax,(%esp)
081be6a5 +0x04d:  call   0850d6f4 <_ZNK5CItem15GetNeedMaterialEv>  ; CItem::GetNeedMaterial() const
081be6aa +0x052:  mov    0x14(%ebp),%ecx
081be6ad +0x055:  mov    0x4(%eax),%edx
081be6b0 +0x058:  mov    (%eax),%eax
081be6b2 +0x05a:  mov    %eax,0x98(%ecx)
081be6b8 +0x060:  mov    %edx,0x9c(%ecx)
081be6be +0x066:  mov    0x14(%ebp),%eax
081be6c1 +0x069:  mov    0x98(%eax),%eax
081be6c7 +0x06f:  cmp    $0xffffffff,%eax
081be6ca +0x072:  je     081be765 <+0x10d>
081be6d0 +0x078:  mov    0x14(%ebp),%eax
081be6d3 +0x07b:  lea    0x41(%eax),%esi
081be6d6 +0x07e:  mov    0x14(%ebp),%eax
081be6d9 +0x081:  mov    0x98(%eax),%ebx
081be6df +0x087:  mov    0xc(%ebp),%eax
081be6e2 +0x08a:  mov    %eax,(%esp)
081be6e5 +0x08d:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081be6ea +0x092:  mov    %esi,0x8(%esp)
081be6ee +0x096:  mov    %ebx,0x4(%esp)
081be6f2 +0x09a:  mov    %eax,(%esp)
081be6f5 +0x09d:  call   084fbf2c <_ZNK10CInventory12GetInvenDataEiR10Inven_Item>  ; CInventory::GetInvenData(int, Inven_Item&) const
081be6fa +0x0a2:  mov    0x14(%ebp),%edx
081be6fd +0x0a5:  mov    %eax,0xa4(%edx)
081be703 +0x0ab:  mov    0x14(%ebp),%eax
081be706 +0x0ae:  mov    0x98(%eax),%ebx
081be70c +0x0b4:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081be711 +0x0b9:  mov    %ebx,0x4(%esp)
081be715 +0x0bd:  mov    %eax,(%esp)
081be718 +0x0c0:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081be71d +0x0c5:  mov    0x14(%ebp),%edx
081be720 +0x0c8:  mov    %eax,0xac(%edx)
081be726 +0x0ce:  mov    0x14(%ebp),%eax
081be729 +0x0d1:  mov    0xac(%eax),%eax
081be72f +0x0d7:  test   %eax,%eax
081be731 +0x0d9:  je     081be74b <+0xf3>
081be733 +0x0db:  mov    0x14(%ebp),%eax
081be736 +0x0de:  mov    0xac(%eax),%eax
081be73c +0x0e4:  mov    %eax,(%esp)
081be73f +0x0e7:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
081be744 +0x0ec:  xor    $0x1,%eax
081be747 +0x0ef:  test   %al,%al
081be749 +0x0f1:  je     081be752 <+0xfa>
081be74b +0x0f3:  mov    $0x1,%eax
081be750 +0x0f8:  jmp    081be757 <+0xff>
081be752 +0x0fa:  mov    $0x0,%eax
081be757 +0x0ff:  test   %al,%al
081be759 +0x101:  je     081be765 <+0x10d>
081be75b +0x103:  mov    $0x1,%eax
081be760 +0x108:  jmp    081beaa8 <+0x450>
081be765 +0x10d:  mov    0x14(%ebp),%eax
081be768 +0x110:  mov    0xa8(%eax),%eax
081be76e +0x116:  mov    %eax,(%esp)
081be771 +0x119:  call   0822c84a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x1ef4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x1ef4
081be776 +0x11e:  mov    %eax,%edx
081be778 +0x120:  mov    0x14(%ebp),%eax
081be77b +0x123:  mov    %edx,0x80(%eax)
081be781 +0x129:  mov    0x14(%ebp),%eax
081be784 +0x12c:  mov    0xa8(%eax),%eax
081be78a +0x132:  mov    %eax,(%esp)
081be78d +0x135:  call   0822c856 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x1f00>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x1f00
081be792 +0x13a:  mov    %eax,%edx
081be794 +0x13c:  mov    0x14(%ebp),%eax
081be797 +0x13f:  mov    %edx,0x84(%eax)
081be79d +0x145:  mov    0x14(%ebp),%eax
081be7a0 +0x148:  mov    0xa8(%eax),%eax
081be7a6 +0x14e:  mov    %eax,(%esp)
081be7a9 +0x151:  call   0822c862 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x1f0c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x1f0c
081be7ae +0x156:  mov    %eax,%edx
081be7b0 +0x158:  mov    0x14(%ebp),%eax
081be7b3 +0x15b:  mov    %edx,0x88(%eax)
081be7b9 +0x161:  mov    0x14(%ebp),%eax
081be7bc +0x164:  mov    0xa8(%eax),%eax
081be7c2 +0x16a:  mov    %eax,(%esp)
081be7c5 +0x16d:  call   0822c83e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x1ee8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x1ee8
081be7ca +0x172:  mov    %eax,%edx
081be7cc +0x174:  mov    0x14(%ebp),%eax
081be7cf +0x177:  mov    %edx,0x8c(%eax)
081be7d5 +0x17d:  mov    0x14(%ebp),%eax
081be7d8 +0x180:  mov    0xa8(%eax),%eax
081be7de +0x186:  mov    (%eax),%eax
081be7e0 +0x188:  add    $0x28,%eax
081be7e3 +0x18b:  mov    (%eax),%edx
081be7e5 +0x18d:  mov    0x14(%ebp),%eax
081be7e8 +0x190:  mov    0xa8(%eax),%eax
081be7ee +0x196:  mov    %eax,(%esp)
081be7f1 +0x199:  call   *%edx
081be7f3 +0x19b:  mov    %eax,%edx
081be7f5 +0x19d:  mov    0x14(%ebp),%eax
081be7f8 +0x1a0:  mov    %edx,0x90(%eax)
081be7fe +0x1a6:  mov    0x14(%ebp),%eax
081be801 +0x1a9:  mov    0xa8(%eax),%eax
081be807 +0x1af:  mov    (%eax),%eax
081be809 +0x1b1:  add    $0x2c,%eax
081be80c +0x1b4:  mov    (%eax),%edx
081be80e +0x1b6:  mov    0x14(%ebp),%eax
081be811 +0x1b9:  mov    0xa8(%eax),%eax
081be817 +0x1bf:  mov    %eax,(%esp)
081be81a +0x1c2:  call   *%edx
081be81c +0x1c4:  mov    %eax,%edx
081be81e +0x1c6:  mov    0x14(%ebp),%eax
081be821 +0x1c9:  mov    %edx,0x94(%eax)
081be827 +0x1cf:  mov    0x14(%ebp),%eax
081be82a +0x1d2:  mov    0xa8(%eax),%eax
081be830 +0x1d8:  mov    %eax,(%esp)
081be833 +0x1db:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
081be838 +0x1e0:  test   %al,%al
081be83a +0x1e2:  je     081be959 <+0x301>
081be840 +0x1e8:  mov    0x10(%ebp),%eax
081be843 +0x1eb:  mov    0x11(%eax),%eax
081be846 +0x1ee:  test   %eax,%eax
081be848 +0x1f0:  jne    081be854 <+0x1fc>
081be84a +0x1f2:  mov    $0x1,%eax
081be84f +0x1f7:  jmp    081beaa8 <+0x450>
081be854 +0x1fc:  mov    0x10(%ebp),%eax
081be857 +0x1ff:  mov    0x11(%eax),%eax
081be85a +0x202:  cmp    $0x1,%eax
081be85d +0x205:  jbe    081be97d <+0x325>
081be863 +0x20b:  mov    0x14(%ebp),%eax
081be866 +0x20e:  mov    %eax,0x8(%esp)
081be86a +0x212:  mov    0xc(%ebp),%eax
081be86d +0x215:  mov    %eax,0x4(%esp)
081be871 +0x219:  mov    0x8(%ebp),%eax
081be874 +0x21c:  mov    %eax,(%esp)
081be877 +0x21f:  call   081beab0 <_ZN18DisPatcher_BuyItem20get_nMaxBuyableCountEP5CUserR12BuyItemParam>  ; DisPatcher_BuyItem::get_nMaxBuyableCount(CUser*, BuyItemParam&)
081be87c +0x224:  mov    %eax,-0xc(%ebp)
081be87f +0x227:  mov    -0xc(%ebp),%edx
081be882 +0x22a:  mov    0x10(%ebp),%eax
081be885 +0x22d:  mov    0x11(%eax),%eax
081be888 +0x230:  cmp    %eax,%edx
081be88a +0x232:  jae    081be896 <+0x23e>
081be88c +0x234:  mov    $0xa,%eax
081be891 +0x239:  jmp    081beaa8 <+0x450>
081be896 +0x23e:  mov    0x14(%ebp),%eax
081be899 +0x241:  mov    0x80(%eax),%edx
081be89f +0x247:  mov    0x10(%ebp),%eax
081be8a2 +0x24a:  mov    0x11(%eax),%eax
081be8a5 +0x24d:  imul   %eax,%edx
081be8a8 +0x250:  mov    0x14(%ebp),%eax
081be8ab +0x253:  mov    %edx,0x80(%eax)
081be8b1 +0x259:  mov    0x14(%ebp),%eax
081be8b4 +0x25c:  mov    0x84(%eax),%edx
081be8ba +0x262:  mov    0x10(%ebp),%eax
081be8bd +0x265:  mov    0x11(%eax),%eax
081be8c0 +0x268:  imul   %eax,%edx
081be8c3 +0x26b:  mov    0x14(%ebp),%eax
081be8c6 +0x26e:  mov    %edx,0x84(%eax)
081be8cc +0x274:  mov    0x14(%ebp),%eax
081be8cf +0x277:  mov    0x88(%eax),%edx
081be8d5 +0x27d:  mov    0x10(%ebp),%eax
081be8d8 +0x280:  mov    0x11(%eax),%eax
081be8db +0x283:  imul   %eax,%edx
081be8de +0x286:  mov    0x14(%ebp),%eax
081be8e1 +0x289:  mov    %edx,0x88(%eax)
081be8e7 +0x28f:  mov    0x14(%ebp),%eax
081be8ea +0x292:  mov    0x8c(%eax),%edx
081be8f0 +0x298:  mov    0x10(%ebp),%eax
081be8f3 +0x29b:  mov    0x11(%eax),%eax
081be8f6 +0x29e:  imul   %eax,%edx
081be8f9 +0x2a1:  mov    0x14(%ebp),%eax
081be8fc +0x2a4:  mov    %edx,0x8c(%eax)
081be902 +0x2aa:  mov    0x14(%ebp),%eax
081be905 +0x2ad:  mov    0x90(%eax),%edx
081be90b +0x2b3:  mov    0x10(%ebp),%eax
081be90e +0x2b6:  mov    0x11(%eax),%eax
081be911 +0x2b9:  imul   %eax,%edx
081be914 +0x2bc:  mov    0x14(%ebp),%eax
081be917 +0x2bf:  mov    %edx,0x90(%eax)
081be91d +0x2c5:  mov    0x14(%ebp),%eax
081be920 +0x2c8:  mov    0x94(%eax),%edx
081be926 +0x2ce:  mov    0x10(%ebp),%eax
081be929 +0x2d1:  mov    0x11(%eax),%eax
081be92c +0x2d4:  imul   %eax,%edx
081be92f +0x2d7:  mov    0x14(%ebp),%eax
081be932 +0x2da:  mov    %edx,0x94(%eax)
081be938 +0x2e0:  mov    0x14(%ebp),%eax
081be93b +0x2e3:  mov    0x9c(%eax),%eax
081be941 +0x2e9:  mov    %eax,%edx
081be943 +0x2eb:  mov    0x10(%ebp),%eax
081be946 +0x2ee:  mov    0x11(%eax),%eax
081be949 +0x2f1:  imul   %edx,%eax
081be94c +0x2f4:  mov    %eax,%edx
081be94e +0x2f6:  mov    0x14(%ebp),%eax
081be951 +0x2f9:  mov    %edx,0x9c(%eax)
081be957 +0x2ff:  jmp    081be97d <+0x325>
081be959 +0x301:  mov    0x10(%ebp),%eax
081be95c +0x304:  mov    0x11(%eax),%ebx
081be95f +0x307:  mov    0xc(%ebp),%eax
081be962 +0x30a:  mov    %eax,(%esp)
081be965 +0x30d:  call   0822fdf4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x549e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x549e
081be96a +0x312:  cmp    %eax,%ebx
081be96c +0x314:  setne  %al
081be96f +0x317:  test   %al,%al
081be971 +0x319:  je     081be97d <+0x325>
081be973 +0x31b:  mov    $0x1,%eax
081be978 +0x320:  jmp    081beaa8 <+0x450>
081be97d +0x325:  mov    0xc(%ebp),%eax
081be980 +0x328:  mov    %eax,(%esp)
081be983 +0x32b:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081be988 +0x330:  mov    %eax,(%esp)
081be98b +0x333:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
081be990 +0x338:  mov    0x14(%ebp),%edx
081be993 +0x33b:  mov    0x80(%edx),%edx
081be999 +0x341:  cmp    %edx,%eax
081be99b +0x343:  jl     081bea41 <+0x3e9>
081be9a1 +0x349:  mov    0xc(%ebp),%eax
081be9a4 +0x34c:  mov    %eax,(%esp)
081be9a7 +0x34f:  call   080fdf7a <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x2a6>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x2a6
081be9ac +0x354:  mov    0x14(%ebp),%edx
081be9af +0x357:  mov    0x84(%edx),%edx
081be9b5 +0x35d:  cmp    %edx,%eax
081be9b7 +0x35f:  jb     081bea41 <+0x3e9>
081be9bd +0x365:  mov    0xc(%ebp),%eax
081be9c0 +0x368:  mov    %eax,(%esp)
081be9c3 +0x36b:  call   0817a17c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x1fa>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x1fa
081be9c8 +0x370:  mov    0x14(%ebp),%edx
081be9cb +0x373:  mov    0x88(%edx),%edx
081be9d1 +0x379:  cmp    %edx,%eax
081be9d3 +0x37b:  jb     081bea41 <+0x3e9>
081be9d5 +0x37d:  mov    0xc(%ebp),%eax
081be9d8 +0x380:  mov    %eax,(%esp)
081be9db +0x383:  call   08645764 <_ZN15CUserCharacInfo14GetFinishPointEv>  ; CUserCharacInfo::GetFinishPoint()
081be9e0 +0x388:  mov    %eax,%edx
081be9e2 +0x38a:  mov    0x14(%ebp),%eax
081be9e5 +0x38d:  mov    0x8c(%eax),%eax
081be9eb +0x393:  cmp    %eax,%edx
081be9ed +0x395:  jb     081bea41 <+0x3e9>
081be9ef +0x397:  mov    0x14(%ebp),%eax
081be9f2 +0x39a:  mov    0x98(%eax),%eax
081be9f8 +0x3a0:  cmp    $0xffffffff,%eax
081be9fb +0x3a3:  je     081bea10 <+0x3b8>
081be9fd +0x3a5:  mov    0x14(%ebp),%eax
081bea00 +0x3a8:  mov    0x48(%eax),%edx
081bea03 +0x3ab:  mov    0x14(%ebp),%eax
081bea06 +0x3ae:  mov    0x9c(%eax),%eax
081bea0c +0x3b4:  cmp    %eax,%edx
081bea0e +0x3b6:  jl     081bea41 <+0x3e9>
081bea10 +0x3b8:  mov    0xc(%ebp),%eax
081bea13 +0x3bb:  mov    %eax,(%esp)
081bea16 +0x3be:  call   082301ae <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5858>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5858
081bea1b +0x3c3:  mov    0x14(%ebp),%edx
081bea1e +0x3c6:  mov    0x90(%edx),%edx
081bea24 +0x3cc:  cmp    %edx,%eax
081bea26 +0x3ce:  jb     081bea41 <+0x3e9>
081bea28 +0x3d0:  mov    0xc(%ebp),%eax
081bea2b +0x3d3:  mov    %eax,(%esp)
081bea2e +0x3d6:  call   0822f9c8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5072>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5072
081bea33 +0x3db:  mov    0x14(%ebp),%edx
081bea36 +0x3de:  mov    0x94(%edx),%edx
081bea3c +0x3e4:  cmp    %dx,%ax
081bea3f +0x3e7:  jge    081bea48 <+0x3f0>
081bea41 +0x3e9:  mov    $0x1,%eax
081bea46 +0x3ee:  jmp    081bea4d <+0x3f5>
081bea48 +0x3f0:  mov    $0x0,%eax
081bea4d +0x3f5:  test   %al,%al
081bea4f +0x3f7:  je     081bea58 <+0x400>
081bea51 +0x3f9:  mov    $0xa,%eax
081bea56 +0x3fe:  jmp    081beaa8 <+0x450>
081bea58 +0x400:  mov    0x14(%ebp),%eax
081bea5b +0x403:  mov    0xa8(%eax),%eax
081bea61 +0x409:  mov    (%eax),%eax
081bea63 +0x40b:  add    $0x28,%eax
081bea66 +0x40e:  mov    (%eax),%edx
081bea68 +0x410:  mov    0x14(%ebp),%eax
081bea6b +0x413:  mov    0xa8(%eax),%eax
081bea71 +0x419:  mov    %eax,(%esp)
081bea74 +0x41c:  call   *%edx
081bea76 +0x41e:  test   %eax,%eax
081bea78 +0x420:  je     081bea93 <+0x43b>
081bea7a +0x422:  mov    0xc(%ebp),%eax
081bea7d +0x425:  mov    %eax,(%esp)
081bea80 +0x428:  call   08230172 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x581c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x581c
081bea85 +0x42d:  xor    $0x1,%eax
081bea88 +0x430:  test   %al,%al
081bea8a +0x432:  je     081bea93 <+0x43b>
081bea8c +0x434:  mov    $0x1,%eax
081bea91 +0x439:  jmp    081bea98 <+0x440>
081bea93 +0x43b:  mov    $0x0,%eax
081bea98 +0x440:  test   %al,%al
081bea9a +0x442:  je     081beaa3 <+0x44b>
081bea9c +0x444:  mov    $0x24,%eax
081beaa1 +0x449:  jmp    081beaa8 <+0x450>
081beaa3 +0x44b:  mov    $0x0,%eax
081beaa8 +0x450:  add    $0x20,%esp
081beaab +0x453:  pop    %ebx
081beaac +0x454:  pop    %esi
081beaad +0x455:  pop    %ebp
081beaae +0x456:  ret
081beaaf +0x457:  nop
```

## 反编译 C

```c
// DisPatcher_BuyItem::get_data @ 0x81be658

/* DisPatcher_BuyItem::get_data(CUser*, MSG_BUY_ITEM&, BuyItemParam&) */

undefined4 __thiscall
DisPatcher_BuyItem::get_data
          (DisPatcher_BuyItem *this,CUser *param_1,MSG_BUY_ITEM *param_2,BuyItemParam *param_3)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  CDataManager *pCVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  CInventory *pCVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  iVar10 = *(int *)(param_2 + 0xd);
  pCVar4 = (CDataManager *)G_CDataManager();
  uVar5 = CDataManager::find_item(pCVar4,iVar10);
  *(undefined4 *)(param_3 + 0xa8) = uVar5;
  if (*(int *)(param_3 + 0xa8) == 0) {
    return 0x11;
  }
  puVar6 = (undefined4 *)CItem::GetNeedMaterial(*(CItem **)(param_3 + 0xa8));
  uVar5 = puVar6[1];
  *(undefined4 *)(param_3 + 0x98) = *puVar6;
  *(undefined4 *)(param_3 + 0x9c) = uVar5;
  if (*(int *)(param_3 + 0x98) != -1) {
    iVar10 = *(int *)(param_3 + 0x98);
    pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    uVar5 = CInventory::GetInvenData(pCVar7,iVar10,(Inven_Item *)(param_3 + 0x41));
    *(undefined4 *)(param_3 + 0xa4) = uVar5;
    iVar10 = *(int *)(param_3 + 0x98);
    pCVar4 = (CDataManager *)G_CDataManager();
    uVar5 = CDataManager::find_item(pCVar4,iVar10);
    *(undefined4 *)(param_3 + 0xac) = uVar5;
    if ((*(int *)(param_3 + 0xac) == 0) ||
       (cVar2 = CItem::is_stackable(*(CItem **)(param_3 + 0xac)), cVar2 != '\x01')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      return 1;
    }
  }
  uVar5 = CItem::get_price(*(CItem **)(param_3 + 0xa8));
  *(undefined4 *)(param_3 + 0x80) = uVar5;
  uVar5 = CItem::GetCashPrice(*(CItem **)(param_3 + 0xa8));
  *(undefined4 *)(param_3 + 0x84) = uVar5;
  uVar5 = CItem::GetMedalPrice(*(CItem **)(param_3 + 0xa8));
  *(undefined4 *)(param_3 + 0x88) = uVar5;
  uVar5 = CItem::GetFinishPointPrice(*(CItem **)(param_3 + 0xa8));
  *(undefined4 *)(param_3 + 0x8c) = uVar5;
  uVar5 = (**(code **)(**(int **)(param_3 + 0xa8) + 0x28))(*(undefined4 *)(param_3 + 0xa8));
  *(undefined4 *)(param_3 + 0x90) = uVar5;
  uVar5 = (**(code **)(**(int **)(param_3 + 0xa8) + 0x2c))(*(undefined4 *)(param_3 + 0xa8));
  *(undefined4 *)(param_3 + 0x94) = uVar5;
  cVar2 = CItem::is_stackable(*(CItem **)(param_3 + 0xa8));
  if (cVar2 == '\0') {
    iVar10 = *(int *)(param_2 + 0x11);
    iVar9 = CUser::GetSeedFromDate(param_1);
    if (iVar10 != iVar9) {
      return 1;
    }
  }
  else {
    if (*(int *)(param_2 + 0x11) == 0) {
      return 1;
    }
    if (1 < *(uint *)(param_2 + 0x11)) {
      uVar8 = get_nMaxBuyableCount(this,param_1,param_3);
      if (uVar8 < *(uint *)(param_2 + 0x11)) {
        return 10;
      }
      *(int *)(param_3 + 0x80) = *(int *)(param_3 + 0x80) * *(int *)(param_2 + 0x11);
      *(int *)(param_3 + 0x84) = *(int *)(param_3 + 0x84) * *(int *)(param_2 + 0x11);
      *(int *)(param_3 + 0x88) = *(int *)(param_3 + 0x88) * *(int *)(param_2 + 0x11);
      *(int *)(param_3 + 0x8c) = *(int *)(param_3 + 0x8c) * *(int *)(param_2 + 0x11);
      *(int *)(param_3 + 0x90) = *(int *)(param_3 + 0x90) * *(int *)(param_2 + 0x11);
      *(int *)(param_3 + 0x94) = *(int *)(param_3 + 0x94) * *(int *)(param_2 + 0x11);
      *(int *)(param_3 + 0x9c) = *(int *)(param_2 + 0x11) * *(int *)(param_3 + 0x9c);
    }
  }
  pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  iVar10 = CInventory::get_money(pCVar7);
  if (((((iVar10 < *(int *)(param_3 + 0x80)) ||
        (uVar8 = CUser::GetCera(param_1), uVar8 < *(uint *)(param_3 + 0x84))) ||
       (uVar8 = CUserCharacInfo::GetWinPoint((CUserCharacInfo *)param_1),
       uVar8 < *(uint *)(param_3 + 0x88))) ||
      (uVar8 = CUserCharacInfo::GetFinishPoint((CUserCharacInfo *)param_1),
      uVar8 < *(uint *)(param_3 + 0x8c))) ||
     (((*(int *)(param_3 + 0x98) != -1 && (*(int *)(param_3 + 0x48) < *(int *)(param_3 + 0x9c))) ||
      ((uVar8 = CUser::GetGuildPowerWarPoint(param_1), uVar8 < *(uint *)(param_3 + 0x90) ||
       (sVar3 = CUserCharacInfo::GetUserPowerWarPoint((CUserCharacInfo *)param_1),
       sVar3 < (short)*(undefined4 *)(param_3 + 0x94))))))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    iVar10 = (**(code **)(**(int **)(param_3 + 0xa8) + 0x28))(*(undefined4 *)(param_3 + 0xa8));
    if ((iVar10 == 0) || (cVar2 = CUser::IsGuildMaster(param_1), cVar2 == '\x01')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar5 = 0x24;
    }
    else {
      uVar5 = 0;
    }
    return uVar5;
  }
  return 10;
}
```
