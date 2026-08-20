# VerifyPrivateStoreItem

`_ZN13private_store13CPrivateStore22VerifyPrivateStoreItemEii`

`private_store::CPrivateStore::VerifyPrivateStoreItem(int, int)`

| 类 | 地址 |
|---|---|
| `private_store::CPrivateStore` | `0x085c874c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c874c  _ZN13private_store13CPrivateStore22VerifyPrivateStoreItemEii
#           private_store::CPrivateStore::VerifyPrivateStoreItem(int, int)
# range [0x085c874c, 0x085c8dce]
085c874c +0x000:  push   %ebp
085c874d +0x001:  mov    %esp,%ebp
085c874f +0x003:  push   %esi
085c8750 +0x004:  push   %ebx
085c8751 +0x005:  sub    $0x50,%esp
085c8754 +0x008:  mov    0x8(%ebp),%eax
085c8757 +0x00b:  mov    0x30(%eax),%eax
085c875a +0x00e:  mov    0x8(%ebp),%edx
085c875d +0x011:  add    $0x14,%edx
085c8760 +0x014:  movl   $0x195,0xc(%esp)
085c8768 +0x01c:  movl   $0x1,0x8(%esp)
085c8770 +0x024:  mov    %eax,0x4(%esp)
085c8774 +0x028:  mov    %edx,(%esp)
085c8777 +0x02b:  call   085cb7a8 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x4be>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x4be
085c877c +0x030:  mov    0x8(%ebp),%eax
085c877f +0x033:  mov    0x30(%eax),%eax
085c8782 +0x036:  test   %eax,%eax
085c8784 +0x038:  jne    085c8790 <+0x44>
085c8786 +0x03a:  mov    $0x0,%ebx
085c878b +0x03f:  jmp    085c8dc6 <+0x67a>
085c8790 +0x044:  mov    0x8(%ebp),%eax
085c8793 +0x047:  mov    0x20(%eax),%eax
085c8796 +0x04a:  test   %eax,%eax
085c8798 +0x04c:  jne    085c87ba <+0x6e>
085c879a +0x04e:  mov    0x8(%ebp),%eax
085c879d +0x051:  add    $0x14,%eax
085c87a0 +0x054:  movl   $0x3a,0x4(%esp)
085c87a8 +0x05c:  mov    %eax,(%esp)
085c87ab +0x05f:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c87b0 +0x064:  mov    $0x0,%ebx
085c87b5 +0x069:  jmp    085c8dc6 <+0x67a>
085c87ba +0x06e:  mov    0x8(%ebp),%eax
085c87bd +0x071:  mov    0x30(%eax),%eax
085c87c0 +0x074:  mov    %eax,0x4(%esp)
085c87c4 +0x078:  mov    0x8(%ebp),%eax
085c87c7 +0x07b:  mov    %eax,(%esp)
085c87ca +0x07e:  call   085c91b6 <_ZN13private_store13CPrivateStore16IsExistBuyerListEP5CUser>  ; private_store::CPrivateStore::IsExistBuyerList(CUser*)
085c87cf +0x083:  xor    $0x1,%eax
085c87d2 +0x086:  test   %al,%al
085c87d4 +0x088:  je     085c87f6 <+0xaa>
085c87d6 +0x08a:  mov    0x8(%ebp),%eax
085c87d9 +0x08d:  add    $0x14,%eax
085c87dc +0x090:  movl   $0x15,0x4(%esp)
085c87e4 +0x098:  mov    %eax,(%esp)
085c87e7 +0x09b:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c87ec +0x0a0:  mov    $0x0,%ebx
085c87f1 +0x0a5:  jmp    085c8dc6 <+0x67a>
085c87f6 +0x0aa:  mov    0x8(%ebp),%eax
085c87f9 +0x0ad:  mov    0x30(%eax),%eax
085c87fc +0x0b0:  mov    %eax,(%esp)
085c87ff +0x0b3:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
085c8804 +0x0b8:  test   %eax,%eax
085c8806 +0x0ba:  sete   %al
085c8809 +0x0bd:  test   %al,%al
085c880b +0x0bf:  je     085c882d <+0xe1>
085c880d +0x0c1:  mov    0x8(%ebp),%eax
085c8810 +0x0c4:  add    $0x14,%eax
085c8813 +0x0c7:  movl   $0x1,0x4(%esp)
085c881b +0x0cf:  mov    %eax,(%esp)
085c881e +0x0d2:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c8823 +0x0d7:  mov    $0x0,%ebx
085c8828 +0x0dc:  jmp    085c8dc6 <+0x67a>
085c882d +0x0e1:  cmpl   $0x0,0xc(%ebp)
085c8831 +0x0e5:  js     085c8839 <+0xed>
085c8833 +0x0e7:  cmpl   $0xd,0xc(%ebp)
085c8837 +0x0eb:  jle    085c8859 <+0x10d>
085c8839 +0x0ed:  mov    0x8(%ebp),%eax
085c883c +0x0f0:  add    $0x14,%eax
085c883f +0x0f3:  movl   $0x39,0x4(%esp)
085c8847 +0x0fb:  mov    %eax,(%esp)
085c884a +0x0fe:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c884f +0x103:  mov    $0x0,%ebx
085c8854 +0x108:  jmp    085c8dc6 <+0x67a>
085c8859 +0x10d:  mov    0x8(%ebp),%eax
085c885c +0x110:  mov    0x2c(%eax),%eax
085c885f +0x113:  test   %eax,%eax
085c8861 +0x115:  je     085c8875 <+0x129>
085c8863 +0x117:  mov    0x8(%ebp),%eax
085c8866 +0x11a:  mov    0x2c(%eax),%eax
085c8869 +0x11d:  mov    %eax,(%esp)
085c886c +0x120:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
085c8871 +0x125:  test   %eax,%eax
085c8873 +0x127:  jne    085c887c <+0x130>
085c8875 +0x129:  mov    $0x1,%eax
085c887a +0x12e:  jmp    085c8881 <+0x135>
085c887c +0x130:  mov    $0x0,%eax
085c8881 +0x135:  test   %al,%al
085c8883 +0x137:  je     085c88a5 <+0x159>
085c8885 +0x139:  mov    0x8(%ebp),%eax
085c8888 +0x13c:  add    $0x14,%eax
085c888b +0x13f:  movl   $0x3a,0x4(%esp)
085c8893 +0x147:  mov    %eax,(%esp)
085c8896 +0x14a:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c889b +0x14f:  mov    $0x0,%ebx
085c88a0 +0x154:  jmp    085c8dc6 <+0x67a>
085c88a5 +0x159:  mov    0xc(%ebp),%eax
085c88a8 +0x15c:  mov    0x8(%ebp),%edx
085c88ab +0x15f:  add    $0x3c,%edx
085c88ae +0x162:  mov    %eax,0x4(%esp)
085c88b2 +0x166:  mov    %edx,(%esp)
085c88b5 +0x169:  call   085ccf06 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1c1c>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1c1c
085c88ba +0x16e:  movzbl 0x3d(%eax),%eax
085c88be +0x172:  cmp    $0x3,%al
085c88c0 +0x174:  setne  %al
085c88c3 +0x177:  test   %al,%al
085c88c5 +0x179:  je     085c88e7 <+0x19b>
085c88c7 +0x17b:  mov    0x8(%ebp),%eax
085c88ca +0x17e:  add    $0x14,%eax
085c88cd +0x181:  movl   $0x1,0x4(%esp)
085c88d5 +0x189:  mov    %eax,(%esp)
085c88d8 +0x18c:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c88dd +0x191:  mov    $0x0,%ebx
085c88e2 +0x196:  jmp    085c8dc6 <+0x67a>
085c88e7 +0x19b:  mov    0x8(%ebp),%eax
085c88ea +0x19e:  mov    0x30(%eax),%edx
085c88ed +0x1a1:  mov    0x8(%ebp),%eax
085c88f0 +0x1a4:  mov    0x20(%eax),%eax
085c88f3 +0x1a7:  mov    %edx,0x4(%esp)
085c88f7 +0x1ab:  mov    %eax,(%esp)
085c88fa +0x1ae:  call   085cad5e <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser>  ; private_store::CPrivateStoreMgr::IsBusyPrivateStore(CUser*)
085c88ff +0x1b3:  test   %al,%al
085c8901 +0x1b5:  je     085c8923 <+0x1d7>
085c8903 +0x1b7:  mov    0x8(%ebp),%eax
085c8906 +0x1ba:  add    $0x14,%eax
085c8909 +0x1bd:  movl   $0x3c,0x4(%esp)
085c8911 +0x1c5:  mov    %eax,(%esp)
085c8914 +0x1c8:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c8919 +0x1cd:  mov    $0x0,%ebx
085c891e +0x1d2:  jmp    085c8dc6 <+0x67a>
085c8923 +0x1d7:  movl   $0x0,-0x1c(%ebp)
085c892a +0x1de:  mov    0xc(%ebp),%eax
085c892d +0x1e1:  mov    0x8(%ebp),%edx
085c8930 +0x1e4:  add    $0x3c,%edx
085c8933 +0x1e7:  mov    %eax,0x4(%esp)
085c8937 +0x1eb:  mov    %edx,(%esp)
085c893a +0x1ee:  call   085ccf06 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1c1c>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1c1c
085c893f +0x1f3:  mov    %eax,-0x18(%ebp)
085c8942 +0x1f6:  mov    -0x18(%ebp),%eax
085c8945 +0x1f9:  mov    0x2(%eax),%eax
085c8948 +0x1fc:  mov    %eax,%ebx
085c894a +0x1fe:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085c894f +0x203:  mov    %ebx,0x4(%esp)
085c8953 +0x207:  mov    %eax,(%esp)
085c8956 +0x20a:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
085c895b +0x20f:  mov    %eax,-0x1c(%ebp)
085c895e +0x212:  cmpl   $0x0,-0x1c(%ebp)
085c8962 +0x216:  sete   %al
085c8965 +0x219:  test   %al,%al
085c8967 +0x21b:  je     085c8989 <+0x23d>
085c8969 +0x21d:  mov    0x8(%ebp),%eax
085c896c +0x220:  add    $0x14,%eax
085c896f +0x223:  movl   $0x11,0x4(%esp)
085c8977 +0x22b:  mov    %eax,(%esp)
085c897a +0x22e:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c897f +0x233:  mov    $0x0,%ebx
085c8984 +0x238:  jmp    085c8dc6 <+0x67a>
085c8989 +0x23d:  mov    -0x1c(%ebp),%eax
085c898c +0x240:  mov    %eax,(%esp)
085c898f +0x243:  call   080f12e2 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x364>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x364
085c8994 +0x248:  mov    %eax,-0x14(%ebp)
085c8997 +0x24b:  cmpl   $0x0,-0x14(%ebp)
085c899b +0x24f:  je     085c8a14 <+0x2c8>
085c899d +0x251:  cmpl   $0x3,-0x14(%ebp)
085c89a1 +0x255:  jne    085c89d0 <+0x284>
085c89a3 +0x257:  mov    -0x18(%ebp),%eax
085c89a6 +0x25a:  movzbl (%eax),%eax
085c89a9 +0x25d:  xor    $0x1,%eax
085c89ac +0x260:  test   %al,%al
085c89ae +0x262:  je     085c8a14 <+0x2c8>
085c89b0 +0x264:  mov    0x8(%ebp),%eax
085c89b3 +0x267:  add    $0x14,%eax
085c89b6 +0x26a:  movl   $0x11,0x4(%esp)
085c89be +0x272:  mov    %eax,(%esp)
085c89c1 +0x275:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c89c6 +0x27a:  mov    $0x0,%ebx
085c89cb +0x27f:  jmp    085c8dc6 <+0x67a>
085c89d0 +0x284:  cmpl   $0x7,-0x14(%ebp)
085c89d4 +0x288:  jne    085c89f4 <+0x2a8>
085c89d6 +0x28a:  mov    -0x18(%ebp),%eax
085c89d9 +0x28d:  mov    %eax,(%esp)
085c89dc +0x290:  call   08120422 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x48>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x48
085c89e1 +0x295:  test   %al,%al
085c89e3 +0x297:  sete   %al
085c89e6 +0x29a:  test   %al,%al
085c89e8 +0x29c:  je     085c8a14 <+0x2c8>
085c89ea +0x29e:  mov    $0x0,%ebx
085c89ef +0x2a3:  jmp    085c8dc6 <+0x67a>
085c89f4 +0x2a8:  mov    0x8(%ebp),%eax
085c89f7 +0x2ab:  add    $0x14,%eax
085c89fa +0x2ae:  movl   $0x11,0x4(%esp)
085c8a02 +0x2b6:  mov    %eax,(%esp)
085c8a05 +0x2b9:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c8a0a +0x2be:  mov    $0x0,%ebx
085c8a0f +0x2c3:  jmp    085c8dc6 <+0x67a>
085c8a14 +0x2c8:  mov    -0x18(%ebp),%eax
085c8a17 +0x2cb:  movzbl 0x1(%eax),%eax
085c8a1b +0x2cf:  movzbl %al,%eax
085c8a1e +0x2d2:  mov    %eax,(%esp)
085c8a21 +0x2d5:  call   0850d159 <_GLOBAL__I_g_emptySlot+0x8e>  ; global constructors keyed to g_emptySlot+0x8e
085c8a26 +0x2da:  test   %al,%al
085c8a28 +0x2dc:  je     085c8a4a <+0x2fe>
085c8a2a +0x2de:  mov    0x8(%ebp),%eax
085c8a2d +0x2e1:  add    $0x14,%eax
085c8a30 +0x2e4:  movl   $0x11,0x4(%esp)
085c8a38 +0x2ec:  mov    %eax,(%esp)
085c8a3b +0x2ef:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c8a40 +0x2f4:  mov    $0x0,%ebx
085c8a45 +0x2f9:  jmp    085c8dc6 <+0x67a>
085c8a4a +0x2fe:  lea    -0x24(%ebp),%eax
085c8a4d +0x301:  mov    %eax,0x18(%esp)
085c8a51 +0x305:  lea    -0x20(%ebp),%eax
085c8a54 +0x308:  mov    %eax,0x14(%esp)
085c8a58 +0x30c:  lea    -0x28(%ebp),%eax
085c8a5b +0x30f:  mov    %eax,0x10(%esp)
085c8a5f +0x313:  mov    0x10(%ebp),%eax
085c8a62 +0x316:  mov    %eax,0xc(%esp)
085c8a66 +0x31a:  mov    -0x18(%ebp),%eax
085c8a69 +0x31d:  mov    %eax,0x8(%esp)
085c8a6d +0x321:  mov    -0x1c(%ebp),%eax
085c8a70 +0x324:  mov    %eax,0x4(%esp)
085c8a74 +0x328:  mov    0x8(%ebp),%eax
085c8a77 +0x32b:  mov    %eax,(%esp)
085c8a7a +0x32e:  call   085c7d04 <_ZN13private_store13CPrivateStore12GetItemPriceEPK5CItemRNS_16PrivateStoreItemEiRiRjS7_>  ; private_store::CPrivateStore::GetItemPrice(CItem const*, private_store::PrivateStoreItem&, int, int&, unsigned int&, unsigned int&)
085c8a7f +0x333:  xor    $0x1,%eax
085c8a82 +0x336:  test   %al,%al
085c8a84 +0x338:  je     085c8a90 <+0x344>
085c8a86 +0x33a:  mov    $0x0,%ebx
085c8a8b +0x33f:  jmp    085c8dc6 <+0x67a>
085c8a90 +0x344:  mov    -0x24(%ebp),%ecx
085c8a93 +0x347:  mov    -0x20(%ebp),%edx
085c8a96 +0x34a:  mov    -0x28(%ebp),%eax
085c8a99 +0x34d:  mov    %ecx,0xc(%esp)
085c8a9d +0x351:  mov    %edx,0x8(%esp)
085c8aa1 +0x355:  mov    %eax,0x4(%esp)
085c8aa5 +0x359:  mov    0x8(%ebp),%eax
085c8aa8 +0x35c:  mov    %eax,(%esp)
085c8aab +0x35f:  call   085c7c0a <_ZN13private_store13CPrivateStore14IsPossibleDealEijj>  ; private_store::CPrivateStore::IsPossibleDeal(int, unsigned int, unsigned int)
085c8ab0 +0x364:  xor    $0x1,%eax
085c8ab3 +0x367:  test   %al,%al
085c8ab5 +0x369:  je     085c8ac1 <+0x375>
085c8ab7 +0x36b:  mov    $0x0,%ebx
085c8abc +0x370:  jmp    085c8dc6 <+0x67a>
085c8ac1 +0x375:  mov    0x8(%ebp),%eax
085c8ac4 +0x378:  mov    0x30(%eax),%eax
085c8ac7 +0x37b:  mov    %eax,(%esp)
085c8aca +0x37e:  call   0822f380 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4a2a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4a2a
085c8acf +0x383:  xor    $0x1,%eax
085c8ad2 +0x386:  test   %al,%al
085c8ad4 +0x388:  je     085c8b14 <+0x3c8>
085c8ad6 +0x38a:  mov    -0x28(%ebp),%eax
085c8ad9 +0x38d:  mov    %eax,%edx
085c8adb +0x38f:  mov    0x8(%ebp),%eax
085c8ade +0x392:  mov    0x30(%eax),%eax
085c8ae1 +0x395:  mov    %edx,0x4(%esp)
085c8ae5 +0x399:  mov    %eax,(%esp)
085c8ae8 +0x39c:  call   08646496 <_ZN15CUserCharacInfo34IsAvailableCurCharacTradeGoldDailyEj>  ; CUserCharacInfo::IsAvailableCurCharacTradeGoldDaily(unsigned int)
085c8aed +0x3a1:  xor    $0x1,%eax
085c8af0 +0x3a4:  test   %al,%al
085c8af2 +0x3a6:  je     085c8b14 <+0x3c8>
085c8af4 +0x3a8:  mov    0x8(%ebp),%eax
085c8af7 +0x3ab:  add    $0x14,%eax
085c8afa +0x3ae:  movl   $0x46,0x4(%esp)
085c8b02 +0x3b6:  mov    %eax,(%esp)
085c8b05 +0x3b9:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c8b0a +0x3be:  mov    $0x0,%ebx
085c8b0f +0x3c3:  jmp    085c8dc6 <+0x67a>
085c8b14 +0x3c8:  lea    -0x34(%ebp),%eax
085c8b17 +0x3cb:  mov    %eax,(%esp)
085c8b1a +0x3ce:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085c8b1f +0x3d3:  movl   $0x195,0x8(%esp)
085c8b27 +0x3db:  movl   $0x1,0x4(%esp)
085c8b2f +0x3e3:  lea    -0x34(%ebp),%eax
085c8b32 +0x3e6:  mov    %eax,(%esp)
085c8b35 +0x3e9:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085c8b3a +0x3ee:  movl   $0x1,0x4(%esp)
085c8b42 +0x3f6:  lea    -0x34(%ebp),%eax
085c8b45 +0x3f9:  mov    %eax,(%esp)
085c8b48 +0x3fc:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085c8b4d +0x401:  mov    0xc(%ebp),%eax
085c8b50 +0x404:  mov    %eax,0x4(%esp)
085c8b54 +0x408:  lea    -0x34(%ebp),%eax
085c8b57 +0x40b:  mov    %eax,(%esp)
085c8b5a +0x40e:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085c8b5f +0x413:  mov    -0x18(%ebp),%eax
085c8b62 +0x416:  mov    0x40(%eax),%eax
085c8b65 +0x419:  mov    %eax,0x4(%esp)
085c8b69 +0x41d:  lea    -0x34(%ebp),%eax
085c8b6c +0x420:  mov    %eax,(%esp)
085c8b6f +0x423:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085c8b74 +0x428:  mov    -0x18(%ebp),%eax
085c8b77 +0x42b:  mov    0x2(%eax),%eax
085c8b7a +0x42e:  mov    %eax,0x4(%esp)
085c8b7e +0x432:  lea    -0x34(%ebp),%eax
085c8b81 +0x435:  mov    %eax,(%esp)
085c8b84 +0x438:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085c8b89 +0x43d:  call   0858c802 <_ZN6OS_API15GetDateTimeTickEv>  ; OS_API::GetDateTimeTick()
085c8b8e +0x442:  mov    %eax,-0x10(%ebp)
085c8b91 +0x445:  mov    -0x18(%ebp),%eax
085c8b94 +0x448:  movzbl 0x1(%eax),%eax
085c8b98 +0x44c:  cmp    $0x8,%al
085c8b9a +0x44e:  jne    085c8bdc <+0x490>
085c8b9c +0x450:  mov    -0x18(%ebp),%eax
085c8b9f +0x453:  mov    0x7(%eax),%ebx
085c8ba2 +0x456:  mov    0x8(%ebp),%eax
085c8ba5 +0x459:  mov    0x2c(%eax),%eax
085c8ba8 +0x45c:  mov    %eax,(%esp)
085c8bab +0x45f:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085c8bb0 +0x464:  mov    %eax,(%esp)
085c8bb3 +0x467:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
085c8bb8 +0x46c:  mov    -0x10(%ebp),%edx
085c8bbb +0x46f:  mov    %edx,0x8(%esp)
085c8bbf +0x473:  mov    %ebx,0x4(%esp)
085c8bc3 +0x477:  mov    %eax,(%esp)
085c8bc6 +0x47a:  call   082f9850 <_ZNK8WongWork14CAvatarItemMgr13GetRemainDateEii>  ; WongWork::CAvatarItemMgr::GetRemainDate(int, int) const
085c8bcb +0x47f:  mov    %eax,0x4(%esp)
085c8bcf +0x483:  lea    -0x34(%ebp),%eax
085c8bd2 +0x486:  mov    %eax,(%esp)
085c8bd5 +0x489:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085c8bda +0x48e:  jmp    085c8bee <+0x4a2>
085c8bdc +0x490:  mov    0x10(%ebp),%eax
085c8bdf +0x493:  mov    %eax,0x4(%esp)
085c8be3 +0x497:  lea    -0x34(%ebp),%eax
085c8be6 +0x49a:  mov    %eax,(%esp)
085c8be9 +0x49d:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085c8bee +0x4a2:  mov    -0x18(%ebp),%eax
085c8bf1 +0x4a5:  mov    %eax,(%esp)
085c8bf4 +0x4a8:  call   081507dc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x111>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x111
085c8bf9 +0x4ad:  movzbl %al,%eax
085c8bfc +0x4b0:  mov    %eax,0x4(%esp)
085c8c00 +0x4b4:  lea    -0x34(%ebp),%eax
085c8c03 +0x4b7:  mov    %eax,(%esp)
085c8c06 +0x4ba:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085c8c0b +0x4bf:  mov    -0x18(%ebp),%eax
085c8c0e +0x4c2:  movzwl 0xb(%eax),%eax
085c8c12 +0x4c6:  movzwl %ax,%eax
085c8c15 +0x4c9:  mov    %eax,0x4(%esp)
085c8c19 +0x4cd:  lea    -0x34(%ebp),%eax
085c8c1c +0x4d0:  mov    %eax,(%esp)
085c8c1f +0x4d3:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085c8c24 +0x4d8:  mov    -0x18(%ebp),%eax
085c8c27 +0x4db:  mov    0xd(%eax),%eax
085c8c2a +0x4de:  mov    %eax,0x4(%esp)
085c8c2e +0x4e2:  lea    -0x34(%ebp),%eax
085c8c31 +0x4e5:  mov    %eax,(%esp)
085c8c34 +0x4e8:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085c8c39 +0x4ed:  mov    -0x18(%ebp),%eax
085c8c3c +0x4f0:  add    $0x11,%eax
085c8c3f +0x4f3:  mov    %eax,(%esp)
085c8c42 +0x4f6:  call   08150732 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x67
085c8c47 +0x4fb:  movzbl %al,%eax
085c8c4a +0x4fe:  mov    %eax,0x4(%esp)
085c8c4e +0x502:  lea    -0x34(%ebp),%eax
085c8c51 +0x505:  mov    %eax,(%esp)
085c8c54 +0x508:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085c8c59 +0x50d:  mov    -0x18(%ebp),%eax
085c8c5c +0x510:  add    $0x11,%eax
085c8c5f +0x513:  mov    %eax,(%esp)
085c8c62 +0x516:  call   08150772 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xa7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xa7
085c8c67 +0x51b:  movzwl %ax,%eax
085c8c6a +0x51e:  mov    %eax,0x4(%esp)
085c8c6e +0x522:  lea    -0x34(%ebp),%eax
085c8c71 +0x525:  mov    %eax,(%esp)
085c8c74 +0x528:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085c8c79 +0x52d:  mov    -0x18(%ebp),%eax
085c8c7c +0x530:  movzbl 0x1(%eax),%eax
085c8c80 +0x534:  cmp    $0x8,%al
085c8c82 +0x536:  jne    085c8d5f <+0x613>
085c8c88 +0x53c:  movl   $0x1e,0x4(%esp)
085c8c90 +0x544:  lea    -0x34(%ebp),%eax
085c8c93 +0x547:  mov    %eax,(%esp)
085c8c96 +0x54a:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085c8c9b +0x54f:  mov    -0x18(%ebp),%eax
085c8c9e +0x552:  mov    0x7(%eax),%ebx
085c8ca1 +0x555:  mov    0x8(%ebp),%eax
085c8ca4 +0x558:  mov    0x2c(%eax),%eax
085c8ca7 +0x55b:  mov    %eax,(%esp)
085c8caa +0x55e:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085c8caf +0x563:  mov    %eax,(%esp)
085c8cb2 +0x566:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
085c8cb7 +0x56b:  mov    %ebx,0x4(%esp)
085c8cbb +0x56f:  mov    %eax,(%esp)
085c8cbe +0x572:  call   082f98f8 <_ZNK8WongWork14CAvatarItemMgr18getJewelSocketDataEi>  ; WongWork::CAvatarItemMgr::getJewelSocketData(int) const
085c8cc3 +0x577:  movl   $0x1e,0x8(%esp)
085c8ccb +0x57f:  mov    %eax,0x4(%esp)
085c8ccf +0x583:  lea    -0x34(%ebp),%eax
085c8cd2 +0x586:  mov    %eax,(%esp)
085c8cd5 +0x589:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
085c8cda +0x58e:  mov    -0x18(%ebp),%eax
085c8cdd +0x591:  mov    0x7(%eax),%ebx
085c8ce0 +0x594:  mov    0x8(%ebp),%eax
085c8ce3 +0x597:  mov    0x2c(%eax),%eax
085c8ce6 +0x59a:  mov    %eax,(%esp)
085c8ce9 +0x59d:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085c8cee +0x5a2:  mov    %eax,(%esp)
085c8cf1 +0x5a5:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
085c8cf6 +0x5aa:  mov    %ebx,0x4(%esp)
085c8cfa +0x5ae:  mov    %eax,(%esp)
085c8cfd +0x5b1:  call   082f992e <_ZNK8WongWork14CAvatarItemMgr16GetExpansionInfoEi>  ; WongWork::CAvatarItemMgr::GetExpansionInfo(int) const
085c8d02 +0x5b6:  mov    %eax,-0xc(%ebp)
085c8d05 +0x5b9:  movl   $0x4,0x4(%esp)
085c8d0d +0x5c1:  lea    -0x34(%ebp),%eax
085c8d10 +0x5c4:  mov    %eax,(%esp)
085c8d13 +0x5c7:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085c8d18 +0x5cc:  cmpl   $0x0,-0xc(%ebp)
085c8d1c +0x5d0:  je     085c8d3a <+0x5ee>
085c8d1e +0x5d2:  mov    -0xc(%ebp),%eax
085c8d21 +0x5d5:  movl   $0x4,0x8(%esp)
085c8d29 +0x5dd:  mov    %eax,0x4(%esp)
085c8d2d +0x5e1:  lea    -0x34(%ebp),%eax
085c8d30 +0x5e4:  mov    %eax,(%esp)
085c8d33 +0x5e7:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
085c8d38 +0x5ec:  jmp    085c8d5f <+0x613>
085c8d3a +0x5ee:  lea    -0x38(%ebp),%eax
085c8d3d +0x5f1:  mov    %eax,(%esp)
085c8d40 +0x5f4:  call   0833421e <_GLOBAL__I__ZN8WongWork15CCompoundAvatarC2Ev+0x1c>  ; global constructors keyed to WongWork::CCompoundAvatar::CCompoundAvatar()+0x1c
085c8d45 +0x5f9:  lea    -0x38(%ebp),%eax
085c8d48 +0x5fc:  movl   $0x4,0x8(%esp)
085c8d50 +0x604:  mov    %eax,0x4(%esp)
085c8d54 +0x608:  lea    -0x34(%ebp),%eax
085c8d57 +0x60b:  mov    %eax,(%esp)
085c8d5a +0x60e:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
085c8d5f +0x613:  mov    -0x18(%ebp),%eax
085c8d62 +0x616:  mov    %eax,0x4(%esp)
085c8d66 +0x61a:  lea    -0x34(%ebp),%eax
085c8d69 +0x61d:  mov    %eax,(%esp)
085c8d6c +0x620:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
085c8d71 +0x625:  movl   $0x1,0x4(%esp)
085c8d79 +0x62d:  lea    -0x34(%ebp),%eax
085c8d7c +0x630:  mov    %eax,(%esp)
085c8d7f +0x633:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085c8d84 +0x638:  mov    0x8(%ebp),%eax
085c8d87 +0x63b:  mov    0x30(%eax),%eax
085c8d8a +0x63e:  lea    -0x34(%ebp),%edx
085c8d8d +0x641:  mov    %edx,0x4(%esp)
085c8d91 +0x645:  mov    %eax,(%esp)
085c8d94 +0x648:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085c8d99 +0x64d:  mov    $0x1,%ebx
085c8d9e +0x652:  lea    -0x34(%ebp),%eax
085c8da1 +0x655:  mov    %eax,(%esp)
085c8da4 +0x658:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085c8da9 +0x65d:  jmp    085c8dc6 <+0x67a>
085c8dab +0x65f:  mov    %edx,%ebx
085c8dad +0x661:  mov    %eax,%esi
085c8daf +0x663:  lea    -0x34(%ebp),%eax
085c8db2 +0x666:  mov    %eax,(%esp)
085c8db5 +0x669:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085c8dba +0x66e:  mov    %esi,%eax
085c8dbc +0x670:  mov    %ebx,%edx
085c8dbe +0x672:  mov    %eax,(%esp)
085c8dc1 +0x675:  call   08ae3750 <_Unwind_Resume>
085c8dc6 +0x67a:  mov    %ebx,%eax
085c8dc8 +0x67c:  add    $0x50,%esp
085c8dcb +0x67f:  pop    %ebx
085c8dcc +0x680:  pop    %esi
085c8dcd +0x681:  pop    %ebp
085c8dce +0x682:  ret
```

## 反编译 C

```c
// private_store::CPrivateStore::VerifyPrivateStoreItem @ 0x85c874c

/* private_store::CPrivateStore::VerifyPrivateStoreItem(int, int) */

undefined4 __thiscall
private_store::CPrivateStore::VerifyPrivateStoreItem(CPrivateStore *this,int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CDataManager *this_00;
  CInventory *pCVar4;
  CAvatarItemMgr *pCVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 uVar8;
  stAvatarExpansionInfo_t local_3c [4];
  PacketGuard local_38 [12];
  uint local_2c;
  uint local_28;
  uint local_24;
  CItem *local_20;
  Inven_Item *local_1c;
  int local_18;
  int local_14;
  char *local_10;
  
  CErrorHandler::Set((CErrorHandler *)(this + 0x14),*(CUser **)(this + 0x30),1,0x195);
  if (*(int *)(this + 0x30) == 0) {
    return 0;
  }
  if (*(int *)(this + 0x20) == 0) {
    CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x3a);
    return 0;
  }
  cVar2 = IsExistBuyerList((CUser *)this);
  if (cVar2 != '\x01') {
    CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x15);
    return 0;
  }
  iVar3 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + 0x30));
  if (iVar3 != 0) {
    if ((param_1 < 0) || (0xd < param_1)) {
      CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x39);
      return 0;
    }
    if ((*(int *)(this + 0x2c) == 0) ||
       (iVar3 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + 0x2c)), iVar3 == 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x3a);
      uVar8 = 0;
    }
    else {
      iVar3 = std::
              vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
              ::operator[]((vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                            *)(this + 0x3c),param_1);
      if (*(char *)(iVar3 + 0x3d) == '\x03') {
        cVar2 = CPrivateStoreMgr::IsBusyPrivateStore
                          (*(CPrivateStoreMgr **)(this + 0x20),*(CUser **)(this + 0x30));
        if (cVar2 == '\0') {
          local_20 = (CItem *)0x0;
          local_1c = (Inven_Item *)
                     std::
                     vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                     ::operator[]((vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                                   *)(this + 0x3c),param_1);
          iVar3 = *(int *)(local_1c + 2);
          this_00 = (CDataManager *)G_CDataManager();
          local_20 = (CItem *)CDataManager::find_item(this_00,iVar3);
          if (local_20 == (CItem *)0x0) {
            CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x11);
            uVar8 = 0;
          }
          else {
            local_18 = CItem::GetAttachType(local_20);
            if (local_18 != 0) {
              if (local_18 == 3) {
                if (*local_1c != (Inven_Item)0x1) {
                  CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x11);
                  return 0;
                }
              }
              else {
                if (local_18 != 7) {
                  CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x11);
                  return 0;
                }
                cVar2 = Inven_Item::GetTradeLimitCount(local_1c);
                if (cVar2 == '\0') {
                  return 0;
                }
              }
            }
            cVar2 = IsCreatureItemType((uint)(byte)local_1c[1]);
            if (cVar2 == '\0') {
              cVar2 = GetItemPrice(this,local_20,(PrivateStoreItem *)local_1c,param_2,
                                   (int *)&local_2c,&local_24,&local_28);
              if (cVar2 == '\x01') {
                cVar2 = IsPossibleDeal((int)this,local_2c,local_24);
                if (cVar2 == '\x01') {
                  cVar2 = CUserCharacInfo::GetReliablePerson(*(CUserCharacInfo **)(this + 0x30));
                  if ((cVar2 != '\x01') &&
                     (cVar2 = CUserCharacInfo::IsAvailableCurCharacTradeGoldDaily
                                        (*(CUserCharacInfo **)(this + 0x30),local_2c),
                     cVar2 != '\x01')) {
                    CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x46);
                    return 0;
                  }
                  PacketGuard::PacketGuard(local_38);
                    /* try { // try from 085c8b35 to 085c8d98 has its CatchHandler @ 085c8dab */
                  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_38,1,0x195);
                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,1);
                  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_38,param_1);
                  InterfacePacketBuf::put_int
                            ((InterfacePacketBuf *)local_38,*(int *)(local_1c + 0x40));
                  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_38,*(int *)(local_1c + 2))
                  ;
                  local_14 = OS_API::GetDateTimeTick();
                  if (*(PrivateStoreItem *)(local_1c + 1) == (PrivateStoreItem)0x8) {
                    iVar3 = *(int *)(local_1c + 7);
                    pCVar4 = (CInventory *)
                             CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 0x2c))
                    ;
                    pCVar5 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar4);
                    iVar3 = WongWork::CAvatarItemMgr::GetRemainDate(pCVar5,iVar3,local_14);
                    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_38,iVar3);
                  }
                  else {
                    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_38,param_2);
                  }
                  uVar6 = Inven_Item::GetItemAttr(local_1c);
                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,uVar6 & 0xff);
                  InterfacePacketBuf::put_short
                            ((InterfacePacketBuf *)local_38,(uint)*(ushort *)(local_1c + 0xb));
                  InterfacePacketBuf::put_int
                            ((InterfacePacketBuf *)local_38,*(int *)(local_1c + 0xd));
                  uVar6 = stAmplifyOption_t::getAbilityType((stAmplifyOption_t *)(local_1c + 0x11));
                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,uVar6 & 0xff);
                  uVar6 = stAmplifyOption_t::getAbilityValue((stAmplifyOption_t *)(local_1c + 0x11))
                  ;
                  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_38,uVar6 & 0xffff);
                  if (local_1c[1] == (Inven_Item)0x8) {
                    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_38,0x1e);
                    iVar3 = *(int *)(local_1c + 7);
                    pCVar4 = (CInventory *)
                             CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 0x2c))
                    ;
                    pCVar5 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar4);
                    pcVar7 = (char *)WongWork::CAvatarItemMgr::getJewelSocketData(pCVar5,iVar3);
                    InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_38,pcVar7,0x1e);
                    iVar3 = *(int *)(local_1c + 7);
                    pCVar4 = (CInventory *)
                             CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 0x2c))
                    ;
                    pCVar5 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar4);
                    local_10 = (char *)WongWork::CAvatarItemMgr::GetExpansionInfo(pCVar5,iVar3);
                    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_38,4);
                    if (local_10 == (char *)0x0) {
                      stAvatarExpansionInfo_t::init(local_3c);
                      InterfacePacketBuf::put_binary
                                ((InterfacePacketBuf *)local_38,(char *)local_3c,4);
                    }
                    else {
                      InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_38,local_10,4);
                    }
                  }
                  InterfacePacketBuf::put_packet((InterfacePacketBuf *)local_38,local_1c);
                  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_38,true);
                  CUser::Send(*(CUser **)(this + 0x30),local_38);
                  uVar8 = 1;
                  PacketGuard::~PacketGuard(local_38);
                }
                else {
                  uVar8 = 0;
                }
              }
              else {
                uVar8 = 0;
              }
            }
            else {
              CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x11);
              uVar8 = 0;
            }
          }
        }
        else {
          CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x3c);
          uVar8 = 0;
        }
      }
      else {
        CErrorHandler::Do((CErrorHandler *)(this + 0x14),1);
        uVar8 = 0;
      }
    }
    return uVar8;
  }
  CErrorHandler::Do((CErrorHandler *)(this + 0x14),1);
  return 0;
}
```
