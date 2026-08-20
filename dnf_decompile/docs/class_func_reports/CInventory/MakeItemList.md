# MakeItemList

`_ZNK10CInventory12MakeItemListE10INVEN_TYPEPv`

`CInventory::MakeItemList(INVEN_TYPE, void*) const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x084fd7b6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084fd7b6  _ZNK10CInventory12MakeItemListE10INVEN_TYPEPv
#           CInventory::MakeItemList(INVEN_TYPE, void*) const
# range [0x084fd7b6, 0x084fe2e1]
084fd7b6 +0x000:  push   %ebp
084fd7b7 +0x001:  mov    %esp,%ebp
084fd7b9 +0x003:  push   %esi
084fd7ba +0x004:  push   %ebx
084fd7bb +0x005:  sub    $0x60,%esp
084fd7be +0x008:  mov    0x8(%ebp),%eax
084fd7c1 +0x00b:  mov    (%eax),%eax
084fd7c3 +0x00d:  test   %eax,%eax
084fd7c5 +0x00f:  jne    084fd807 <+0x51>
084fd7c7 +0x011:  movl   $0x5,0xc(%esp)
084fd7cf +0x019:  movl   $0xa6b,0x8(%esp)
084fd7d7 +0x021:  movl   $&_ZZNK10CInventory12MakeItemListE10INVEN_TYPEPvE19__PRETTY_FUNCTION__,0x4(%esp)
084fd7df +0x029:  lea    -0x44(%ebp),%eax
084fd7e2 +0x02c:  mov    %eax,(%esp)
084fd7e5 +0x02f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084fd7ea +0x034:  movl   $"inventory::MakeItemList m_pParent is NULL.",0x4(%esp)
084fd7f2 +0x03c:  lea    -0x44(%ebp),%eax
084fd7f5 +0x03f:  mov    %eax,(%esp)
084fd7f8 +0x042:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084fd7fd +0x047:  mov    $0x0,%eax
084fd802 +0x04c:  jmp    084fe2db <+0xb25>
084fd807 +0x051:  mov    0x10(%ebp),%eax
084fd80a +0x054:  mov    %eax,-0x34(%ebp)
084fd80d +0x057:  mov    -0x34(%ebp),%eax
084fd810 +0x05a:  movl   $0xd,0x8(%esp)
084fd818 +0x062:  movl   $0x0,0x4(%esp)
084fd820 +0x06a:  mov    %eax,(%esp)
084fd823 +0x06d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084fd828 +0x072:  mov    0xc(%ebp),%eax
084fd82b +0x075:  cmp    $0x2,%eax
084fd82e +0x078:  je     084fdd77 <+0x5c1>
084fd834 +0x07e:  cmp    $0x3,%eax
084fd837 +0x081:  je     084fe066 <+0x8b0>
084fd83d +0x087:  cmp    $0x1,%eax
084fd840 +0x08a:  jne    084fe2c3 <+0xb0d>
084fd846 +0x090:  mov    -0x34(%ebp),%eax
084fd849 +0x093:  movl   $0x0,0x4(%esp)
084fd851 +0x09b:  mov    %eax,(%esp)
084fd854 +0x09e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fd859 +0x0a3:  mov    0x8(%ebp),%eax
084fd85c +0x0a6:  mov    %eax,(%esp)
084fd85f +0x0a9:  call   0822d6fc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2da6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2da6
084fd864 +0x0ae:  mov    -0x34(%ebp),%edx
084fd867 +0x0b1:  mov    %eax,0x4(%esp)
084fd86b +0x0b5:  mov    %edx,(%esp)
084fd86e +0x0b8:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084fd873 +0x0bd:  mov    -0x34(%ebp),%eax
084fd876 +0x0c0:  mov    %eax,(%esp)
084fd879 +0x0c3:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
084fd87e +0x0c8:  mov    %eax,-0x48(%ebp)
084fd881 +0x0cb:  movl   $0x3,-0x30(%ebp)
084fd888 +0x0d2:  mov    -0x30(%ebp),%eax
084fd88b +0x0d5:  lea    0x3(%eax),%edx
084fd88e +0x0d8:  mov    -0x34(%ebp),%eax
084fd891 +0x0db:  mov    %edx,0x4(%esp)
084fd895 +0x0df:  mov    %eax,(%esp)
084fd898 +0x0e2:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084fd89d +0x0e7:  mov    -0x34(%ebp),%eax
084fd8a0 +0x0ea:  movl   $0x0,0x4(%esp)
084fd8a8 +0x0f2:  mov    %eax,(%esp)
084fd8ab +0x0f5:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084fd8b0 +0x0fa:  mov    -0x34(%ebp),%eax
084fd8b3 +0x0fd:  movl   $0x0,0x4(%esp)
084fd8bb +0x105:  mov    %eax,(%esp)
084fd8be +0x108:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fd8c3 +0x10d:  mov    0x8(%ebp),%eax
084fd8c6 +0x110:  mov    0x4(%eax),%edx
084fd8c9 +0x113:  mov    -0x34(%ebp),%eax
084fd8cc +0x116:  mov    %edx,0x4(%esp)
084fd8d0 +0x11a:  mov    %eax,(%esp)
084fd8d3 +0x11d:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fd8d8 +0x122:  mov    -0x34(%ebp),%eax
084fd8db +0x125:  movl   $0x0,0x4(%esp)
084fd8e3 +0x12d:  mov    %eax,(%esp)
084fd8e6 +0x130:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fd8eb +0x135:  mov    -0x34(%ebp),%eax
084fd8ee +0x138:  movl   $0x0,0x4(%esp)
084fd8f6 +0x140:  mov    %eax,(%esp)
084fd8f9 +0x143:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084fd8fe +0x148:  mov    -0x34(%ebp),%eax
084fd901 +0x14b:  movl   $0x0,0x4(%esp)
084fd909 +0x153:  mov    %eax,(%esp)
084fd90c +0x156:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fd911 +0x15b:  mov    -0x34(%ebp),%eax
084fd914 +0x15e:  movl   $0x0,0x4(%esp)
084fd91c +0x166:  mov    %eax,(%esp)
084fd91f +0x169:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fd924 +0x16e:  mov    -0x34(%ebp),%eax
084fd927 +0x171:  movl   $0x0,0x4(%esp)
084fd92f +0x179:  mov    %eax,(%esp)
084fd932 +0x17c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fd937 +0x181:  mov    -0x34(%ebp),%eax
084fd93a +0x184:  movl   $0x0,0x4(%esp)
084fd942 +0x18c:  mov    %eax,(%esp)
084fd945 +0x18f:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084fd94a +0x194:  mov    -0x34(%ebp),%eax
084fd94d +0x197:  movl   $0x0,0x4(%esp)
084fd955 +0x19f:  mov    %eax,(%esp)
084fd958 +0x1a2:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fd95d +0x1a7:  mov    -0x34(%ebp),%eax
084fd960 +0x1aa:  movl   $&g_emptySlot,0x4(%esp)
084fd968 +0x1b2:  mov    %eax,(%esp)
084fd96b +0x1b5:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
084fd970 +0x1ba:  mov    -0x34(%ebp),%eax
084fd973 +0x1bd:  movl   $0x1,0x4(%esp)
084fd97b +0x1c5:  mov    %eax,(%esp)
084fd97e +0x1c8:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084fd983 +0x1cd:  mov    -0x34(%ebp),%eax
084fd986 +0x1d0:  movl   $0x1,0x4(%esp)
084fd98e +0x1d8:  mov    %eax,(%esp)
084fd991 +0x1db:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fd996 +0x1e0:  mov    0x8(%ebp),%eax
084fd999 +0x1e3:  mov    0x8(%eax),%edx
084fd99c +0x1e6:  mov    0x8(%ebp),%eax
084fd99f +0x1e9:  mov    0xc(%eax),%eax
084fd9a2 +0x1ec:  add    %eax,%edx
084fd9a4 +0x1ee:  mov    0x8(%ebp),%eax
084fd9a7 +0x1f1:  mov    0x10(%eax),%eax
084fd9aa +0x1f4:  lea    (%edx,%eax,1),%eax
084fd9ad +0x1f7:  mov    %eax,%edx
084fd9af +0x1f9:  mov    -0x34(%ebp),%eax
084fd9b2 +0x1fc:  mov    %edx,0x4(%esp)
084fd9b6 +0x200:  mov    %eax,(%esp)
084fd9b9 +0x203:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fd9be +0x208:  mov    -0x34(%ebp),%eax
084fd9c1 +0x20b:  movl   $0x0,0x4(%esp)
084fd9c9 +0x213:  mov    %eax,(%esp)
084fd9cc +0x216:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fd9d1 +0x21b:  mov    -0x34(%ebp),%eax
084fd9d4 +0x21e:  movl   $0x0,0x4(%esp)
084fd9dc +0x226:  mov    %eax,(%esp)
084fd9df +0x229:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084fd9e4 +0x22e:  mov    -0x34(%ebp),%eax
084fd9e7 +0x231:  movl   $0x0,0x4(%esp)
084fd9ef +0x239:  mov    %eax,(%esp)
084fd9f2 +0x23c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fd9f7 +0x241:  mov    -0x34(%ebp),%eax
084fd9fa +0x244:  movl   $0x0,0x4(%esp)
084fda02 +0x24c:  mov    %eax,(%esp)
084fda05 +0x24f:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fda0a +0x254:  mov    -0x34(%ebp),%eax
084fda0d +0x257:  movl   $0x0,0x4(%esp)
084fda15 +0x25f:  mov    %eax,(%esp)
084fda18 +0x262:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fda1d +0x267:  mov    -0x34(%ebp),%eax
084fda20 +0x26a:  movl   $0x0,0x4(%esp)
084fda28 +0x272:  mov    %eax,(%esp)
084fda2b +0x275:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084fda30 +0x27a:  mov    -0x34(%ebp),%eax
084fda33 +0x27d:  movl   $0x0,0x4(%esp)
084fda3b +0x285:  mov    %eax,(%esp)
084fda3e +0x288:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fda43 +0x28d:  mov    -0x34(%ebp),%eax
084fda46 +0x290:  movl   $&g_emptySlot,0x4(%esp)
084fda4e +0x298:  mov    %eax,(%esp)
084fda51 +0x29b:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
084fda56 +0x2a0:  mov    -0x34(%ebp),%eax
084fda59 +0x2a3:  movl   $0x2,0x4(%esp)
084fda61 +0x2ab:  mov    %eax,(%esp)
084fda64 +0x2ae:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084fda69 +0x2b3:  mov    -0x34(%ebp),%eax
084fda6c +0x2b6:  movl   $0x2,0x4(%esp)
084fda74 +0x2be:  mov    %eax,(%esp)
084fda77 +0x2c1:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fda7c +0x2c6:  mov    0x8(%ebp),%eax
084fda7f +0x2c9:  mov    (%eax),%eax
084fda81 +0x2cb:  mov    %eax,(%esp)
084fda84 +0x2ce:  call   0817a17c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x1fa>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x1fa
084fda89 +0x2d3:  mov    %eax,%edx
084fda8b +0x2d5:  mov    -0x34(%ebp),%eax
084fda8e +0x2d8:  mov    %edx,0x4(%esp)
084fda92 +0x2dc:  mov    %eax,(%esp)
084fda95 +0x2df:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fda9a +0x2e4:  mov    -0x34(%ebp),%eax
084fda9d +0x2e7:  movl   $0x0,0x4(%esp)
084fdaa5 +0x2ef:  mov    %eax,(%esp)
084fdaa8 +0x2f2:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fdaad +0x2f7:  mov    -0x34(%ebp),%eax
084fdab0 +0x2fa:  movl   $0x0,0x4(%esp)
084fdab8 +0x302:  mov    %eax,(%esp)
084fdabb +0x305:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084fdac0 +0x30a:  mov    -0x34(%ebp),%eax
084fdac3 +0x30d:  movl   $0x0,0x4(%esp)
084fdacb +0x315:  mov    %eax,(%esp)
084fdace +0x318:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fdad3 +0x31d:  mov    -0x34(%ebp),%eax
084fdad6 +0x320:  movl   $0x0,0x4(%esp)
084fdade +0x328:  mov    %eax,(%esp)
084fdae1 +0x32b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fdae6 +0x330:  mov    -0x34(%ebp),%eax
084fdae9 +0x333:  movl   $0x0,0x4(%esp)
084fdaf1 +0x33b:  mov    %eax,(%esp)
084fdaf4 +0x33e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fdaf9 +0x343:  mov    -0x34(%ebp),%eax
084fdafc +0x346:  movl   $0x0,0x4(%esp)
084fdb04 +0x34e:  mov    %eax,(%esp)
084fdb07 +0x351:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084fdb0c +0x356:  mov    -0x34(%ebp),%eax
084fdb0f +0x359:  movl   $0x0,0x4(%esp)
084fdb17 +0x361:  mov    %eax,(%esp)
084fdb1a +0x364:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fdb1f +0x369:  mov    -0x34(%ebp),%eax
084fdb22 +0x36c:  movl   $&g_emptySlot,0x4(%esp)
084fdb2a +0x374:  mov    %eax,(%esp)
084fdb2d +0x377:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
084fdb32 +0x37c:  movl   $0x3,-0x2c(%ebp)
084fdb39 +0x383:  jmp    084fdd47 <+0x591>
084fdb3e +0x388:  mov    0x8(%ebp),%eax
084fdb41 +0x38b:  mov    0x650(%eax),%edx
084fdb47 +0x391:  mov    -0x2c(%ebp),%eax
084fdb4a +0x394:  imul   $0x3d,%eax,%eax
084fdb4d +0x397:  lea    (%edx,%eax,1),%eax
084fdb50 +0x39a:  mov    0x2(%eax),%eax
084fdb53 +0x39d:  test   %eax,%eax
084fdb55 +0x39f:  je     084fdd43 <+0x58d>
084fdb5b +0x3a5:  mov    -0x34(%ebp),%eax
084fdb5e +0x3a8:  mov    -0x2c(%ebp),%edx
084fdb61 +0x3ab:  mov    %edx,0x4(%esp)
084fdb65 +0x3af:  mov    %eax,(%esp)
084fdb68 +0x3b2:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084fdb6d +0x3b7:  mov    0x8(%ebp),%eax
084fdb70 +0x3ba:  mov    0x650(%eax),%edx
084fdb76 +0x3c0:  mov    -0x2c(%ebp),%eax
084fdb79 +0x3c3:  imul   $0x3d,%eax,%eax
084fdb7c +0x3c6:  lea    (%edx,%eax,1),%eax
084fdb7f +0x3c9:  mov    0x2(%eax),%eax
084fdb82 +0x3cc:  mov    %eax,%edx
084fdb84 +0x3ce:  mov    -0x34(%ebp),%eax
084fdb87 +0x3d1:  mov    %edx,0x4(%esp)
084fdb8b +0x3d5:  mov    %eax,(%esp)
084fdb8e +0x3d8:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fdb93 +0x3dd:  mov    0x8(%ebp),%eax
084fdb96 +0x3e0:  mov    0x650(%eax),%edx
084fdb9c +0x3e6:  mov    -0x2c(%ebp),%eax
084fdb9f +0x3e9:  imul   $0x3d,%eax,%eax
084fdba2 +0x3ec:  lea    (%edx,%eax,1),%eax
084fdba5 +0x3ef:  mov    0x7(%eax),%edx
084fdba8 +0x3f2:  mov    -0x34(%ebp),%eax
084fdbab +0x3f5:  mov    %edx,0x4(%esp)
084fdbaf +0x3f9:  mov    %eax,(%esp)
084fdbb2 +0x3fc:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fdbb7 +0x401:  mov    0x8(%ebp),%eax
084fdbba +0x404:  mov    0x650(%eax),%edx
084fdbc0 +0x40a:  mov    -0x2c(%ebp),%eax
084fdbc3 +0x40d:  imul   $0x3d,%eax,%eax
084fdbc6 +0x410:  add    %eax,%edx
084fdbc8 +0x412:  mov    -0x2c(%ebp),%eax
084fdbcb +0x415:  mov    %eax,0x8(%esp)
084fdbcf +0x419:  mov    0xc(%ebp),%eax
084fdbd2 +0x41c:  mov    %eax,0x4(%esp)
084fdbd6 +0x420:  mov    %edx,(%esp)
084fdbd9 +0x423:  call   084fc651 <_Z24GetIntegratedPvPItemAttrRK10Inven_Item10INVEN_TYPEi>  ; GetIntegratedPvPItemAttr(Inven_Item const&, INVEN_TYPE, int)
084fdbde +0x428:  movzbl %al,%edx
084fdbe1 +0x42b:  mov    -0x34(%ebp),%eax
084fdbe4 +0x42e:  mov    %edx,0x4(%esp)
084fdbe8 +0x432:  mov    %eax,(%esp)
084fdbeb +0x435:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fdbf0 +0x43a:  mov    0x8(%ebp),%eax
084fdbf3 +0x43d:  mov    0x650(%eax),%edx
084fdbf9 +0x443:  mov    -0x2c(%ebp),%eax
084fdbfc +0x446:  imul   $0x3d,%eax,%eax
084fdbff +0x449:  lea    (%edx,%eax,1),%eax
084fdc02 +0x44c:  movzwl 0xb(%eax),%eax
084fdc06 +0x450:  movzwl %ax,%edx
084fdc09 +0x453:  mov    -0x34(%ebp),%eax
084fdc0c +0x456:  mov    %edx,0x4(%esp)
084fdc10 +0x45a:  mov    %eax,(%esp)
084fdc13 +0x45d:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084fdc18 +0x462:  mov    0x8(%ebp),%eax
084fdc1b +0x465:  mov    0x650(%eax),%edx
084fdc21 +0x46b:  mov    -0x2c(%ebp),%eax
084fdc24 +0x46e:  imul   $0x3d,%eax,%eax
084fdc27 +0x471:  lea    (%edx,%eax,1),%eax
084fdc2a +0x474:  movzbl (%eax),%eax
084fdc2d +0x477:  movzbl %al,%edx
084fdc30 +0x47a:  mov    -0x34(%ebp),%eax
084fdc33 +0x47d:  mov    %edx,0x4(%esp)
084fdc37 +0x481:  mov    %eax,(%esp)
084fdc3a +0x484:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fdc3f +0x489:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084fdc44 +0x48e:  mov    %eax,(%esp)
084fdc47 +0x491:  call   082343fc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9aa6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9aa6
084fdc4c +0x496:  test   %al,%al
084fdc4e +0x498:  je     084fdc65 <+0x4af>
084fdc50 +0x49a:  mov    -0x34(%ebp),%eax
084fdc53 +0x49d:  movl   $0x0,0x4(%esp)
084fdc5b +0x4a5:  mov    %eax,(%esp)
084fdc5e +0x4a8:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fdc63 +0x4ad:  jmp    084fdc8b <+0x4d5>
084fdc65 +0x4af:  mov    0x8(%ebp),%eax
084fdc68 +0x4b2:  mov    0x650(%eax),%edx
084fdc6e +0x4b8:  mov    -0x2c(%ebp),%eax
084fdc71 +0x4bb:  imul   $0x3d,%eax,%eax
084fdc74 +0x4be:  lea    (%edx,%eax,1),%eax
084fdc77 +0x4c1:  mov    0xd(%eax),%eax
084fdc7a +0x4c4:  mov    %eax,%edx
084fdc7c +0x4c6:  mov    -0x34(%ebp),%eax
084fdc7f +0x4c9:  mov    %edx,0x4(%esp)
084fdc83 +0x4cd:  mov    %eax,(%esp)
084fdc86 +0x4d0:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fdc8b +0x4d5:  mov    0x8(%ebp),%eax
084fdc8e +0x4d8:  mov    0x650(%eax),%edx
084fdc94 +0x4de:  mov    -0x2c(%ebp),%eax
084fdc97 +0x4e1:  imul   $0x3d,%eax,%eax
084fdc9a +0x4e4:  lea    (%edx,%eax,1),%eax
084fdc9d +0x4e7:  add    $0x11,%eax
084fdca0 +0x4ea:  mov    %eax,(%esp)
084fdca3 +0x4ed:  call   08150732 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x67
084fdca8 +0x4f2:  movzbl %al,%edx
084fdcab +0x4f5:  mov    -0x34(%ebp),%eax
084fdcae +0x4f8:  mov    %edx,0x4(%esp)
084fdcb2 +0x4fc:  mov    %eax,(%esp)
084fdcb5 +0x4ff:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fdcba +0x504:  mov    0x8(%ebp),%eax
084fdcbd +0x507:  mov    0x650(%eax),%edx
084fdcc3 +0x50d:  mov    -0x2c(%ebp),%eax
084fdcc6 +0x510:  imul   $0x3d,%eax,%eax
084fdcc9 +0x513:  lea    (%edx,%eax,1),%eax
084fdccc +0x516:  add    $0x11,%eax
084fdccf +0x519:  mov    %eax,(%esp)
084fdcd2 +0x51c:  call   08150772 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xa7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xa7
084fdcd7 +0x521:  movzwl %ax,%edx
084fdcda +0x524:  mov    -0x34(%ebp),%eax
084fdcdd +0x527:  mov    %edx,0x4(%esp)
084fdce1 +0x52b:  mov    %eax,(%esp)
084fdce4 +0x52e:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084fdce9 +0x533:  mov    0x8(%ebp),%eax
084fdcec +0x536:  mov    0x650(%eax),%edx
084fdcf2 +0x53c:  mov    -0x2c(%ebp),%eax
084fdcf5 +0x53f:  imul   $0x3d,%eax,%eax
084fdcf8 +0x542:  lea    (%edx,%eax,1),%esi
084fdcfb +0x545:  mov    0x8(%ebp),%eax
084fdcfe +0x548:  mov    (%eax),%ebx
084fdd00 +0x54a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084fdd05 +0x54f:  mov    0x20(%eax),%eax
084fdd08 +0x552:  mov    -0x34(%ebp),%edx
084fdd0b +0x555:  mov    %edx,0xc(%esp)
084fdd0f +0x559:  mov    %esi,0x8(%esp)
084fdd13 +0x55d:  mov    %ebx,0x4(%esp)
084fdd17 +0x561:  mov    %eax,(%esp)
084fdd1a +0x564:  call   0854a9aa <_ZN8WongWork12CItemUpgrade22make3rdChroniclePacketEP5CUserRK10Inven_ItemP11PacketGuard>  ; WongWork::CItemUpgrade::make3rdChroniclePacket(CUser*, Inven_Item const&, PacketGuard*)
084fdd1f +0x569:  mov    0x8(%ebp),%eax
084fdd22 +0x56c:  mov    0x650(%eax),%edx
084fdd28 +0x572:  mov    -0x2c(%ebp),%eax
084fdd2b +0x575:  imul   $0x3d,%eax,%eax
084fdd2e +0x578:  add    %eax,%edx
084fdd30 +0x57a:  mov    -0x34(%ebp),%eax
084fdd33 +0x57d:  mov    %edx,0x4(%esp)
084fdd37 +0x581:  mov    %eax,(%esp)
084fdd3a +0x584:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
084fdd3f +0x589:  addl   $0x1,-0x30(%ebp)
084fdd43 +0x58d:  addl   $0x1,-0x2c(%ebp)
084fdd47 +0x591:  cmpl   $0x137,-0x2c(%ebp)
084fdd4e +0x598:  setle  %al
084fdd51 +0x59b:  test   %al,%al
084fdd53 +0x59d:  jne    084fdb3e <+0x388>
084fdd59 +0x5a3:  mov    -0x34(%ebp),%eax
084fdd5c +0x5a6:  mov    -0x30(%ebp),%edx
084fdd5f +0x5a9:  mov    %edx,0x8(%esp)
084fdd63 +0x5ad:  lea    -0x48(%ebp),%edx
084fdd66 +0x5b0:  mov    %edx,0x4(%esp)
084fdd6a +0x5b4:  mov    %eax,(%esp)
084fdd6d +0x5b7:  call   08116908 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x1d>  ; global constructors keyed to CEventManager::CEventManager()+0x1d
084fdd72 +0x5bc:  jmp    084fe2c3 <+0xb0d>
084fdd77 +0x5c1:  mov    -0x34(%ebp),%eax
084fdd7a +0x5c4:  movl   $0x1,0x4(%esp)
084fdd82 +0x5cc:  mov    %eax,(%esp)
084fdd85 +0x5cf:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fdd8a +0x5d4:  mov    -0x34(%ebp),%eax
084fdd8d +0x5d7:  mov    %eax,(%esp)
084fdd90 +0x5da:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
084fdd95 +0x5df:  mov    %eax,-0x4c(%ebp)
084fdd98 +0x5e2:  movl   $0x0,-0x28(%ebp)
084fdd9f +0x5e9:  mov    -0x34(%ebp),%eax
084fdda2 +0x5ec:  mov    -0x28(%ebp),%edx
084fdda5 +0x5ef:  mov    %edx,0x4(%esp)
084fdda9 +0x5f3:  mov    %eax,(%esp)
084fddac +0x5f6:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084fddb1 +0x5fb:  call   0858c802 <_ZN6OS_API15GetDateTimeTickEv>  ; OS_API::GetDateTimeTick()
084fddb6 +0x600:  mov    %eax,-0x24(%ebp)
084fddb9 +0x603:  movl   $0x0,-0x20(%ebp)
084fddc0 +0x60a:  jmp    084fe039 <+0x883>
084fddc5 +0x60f:  mov    0x8(%ebp),%eax
084fddc8 +0x612:  mov    0x654(%eax),%edx
084fddce +0x618:  mov    -0x20(%ebp),%eax
084fddd1 +0x61b:  imul   $0x3d,%eax,%eax
084fddd4 +0x61e:  lea    (%edx,%eax,1),%eax
084fddd7 +0x621:  mov    0x2(%eax),%eax
084fddda +0x624:  test   %eax,%eax
084fdddc +0x626:  je     084fe035 <+0x87f>
084fdde2 +0x62c:  mov    -0x34(%ebp),%eax
084fdde5 +0x62f:  mov    -0x20(%ebp),%edx
084fdde8 +0x632:  mov    %edx,0x4(%esp)
084fddec +0x636:  mov    %eax,(%esp)
084fddef +0x639:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084fddf4 +0x63e:  mov    0x8(%ebp),%eax
084fddf7 +0x641:  mov    0x654(%eax),%edx
084fddfd +0x647:  mov    -0x20(%ebp),%eax
084fde00 +0x64a:  imul   $0x3d,%eax,%eax
084fde03 +0x64d:  lea    (%edx,%eax,1),%eax
084fde06 +0x650:  mov    0x2(%eax),%eax
084fde09 +0x653:  mov    %eax,%edx
084fde0b +0x655:  mov    -0x34(%ebp),%eax
084fde0e +0x658:  mov    %edx,0x4(%esp)
084fde12 +0x65c:  mov    %eax,(%esp)
084fde15 +0x65f:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fde1a +0x664:  mov    0x8(%ebp),%eax
084fde1d +0x667:  mov    0x654(%eax),%edx
084fde23 +0x66d:  mov    -0x20(%ebp),%eax
084fde26 +0x670:  imul   $0x3d,%eax,%eax
084fde29 +0x673:  lea    (%edx,%eax,1),%eax
084fde2c +0x676:  mov    0x7(%eax),%eax
084fde2f +0x679:  mov    0x8(%ebp),%edx
084fde32 +0x67c:  lea    0x734(%edx),%ecx
084fde38 +0x682:  mov    -0x24(%ebp),%edx
084fde3b +0x685:  mov    %edx,0x8(%esp)
084fde3f +0x689:  mov    %eax,0x4(%esp)
084fde43 +0x68d:  mov    %ecx,(%esp)
084fde46 +0x690:  call   082f9850 <_ZNK8WongWork14CAvatarItemMgr13GetRemainDateEii>  ; WongWork::CAvatarItemMgr::GetRemainDate(int, int) const
084fde4b +0x695:  mov    -0x34(%ebp),%edx
084fde4e +0x698:  mov    %eax,0x4(%esp)
084fde52 +0x69c:  mov    %edx,(%esp)
084fde55 +0x69f:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fde5a +0x6a4:  mov    0x8(%ebp),%eax
084fde5d +0x6a7:  mov    0x654(%eax),%edx
084fde63 +0x6ad:  mov    -0x20(%ebp),%eax
084fde66 +0x6b0:  imul   $0x3d,%eax,%eax
084fde69 +0x6b3:  lea    (%edx,%eax,1),%eax
084fde6c +0x6b6:  mov    %eax,(%esp)
084fde6f +0x6b9:  call   081507dc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x111>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x111
084fde74 +0x6be:  movzbl %al,%edx
084fde77 +0x6c1:  mov    -0x34(%ebp),%eax
084fde7a +0x6c4:  mov    %edx,0x4(%esp)
084fde7e +0x6c8:  mov    %eax,(%esp)
084fde81 +0x6cb:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fde86 +0x6d0:  mov    0x8(%ebp),%eax
084fde89 +0x6d3:  mov    0x654(%eax),%edx
084fde8f +0x6d9:  mov    -0x20(%ebp),%eax
084fde92 +0x6dc:  imul   $0x3d,%eax,%eax
084fde95 +0x6df:  lea    (%edx,%eax,1),%eax
084fde98 +0x6e2:  movzwl 0xb(%eax),%eax
084fde9c +0x6e6:  movzwl %ax,%edx
084fde9f +0x6e9:  mov    -0x34(%ebp),%eax
084fdea2 +0x6ec:  mov    %edx,0x4(%esp)
084fdea6 +0x6f0:  mov    %eax,(%esp)
084fdea9 +0x6f3:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084fdeae +0x6f8:  mov    0x8(%ebp),%eax
084fdeb1 +0x6fb:  mov    0x654(%eax),%edx
084fdeb7 +0x701:  mov    -0x20(%ebp),%eax
084fdeba +0x704:  imul   $0x3d,%eax,%eax
084fdebd +0x707:  lea    (%edx,%eax,1),%eax
084fdec0 +0x70a:  movzbl (%eax),%eax
084fdec3 +0x70d:  movzbl %al,%edx
084fdec6 +0x710:  mov    -0x34(%ebp),%eax
084fdec9 +0x713:  mov    %edx,0x4(%esp)
084fdecd +0x717:  mov    %eax,(%esp)
084fded0 +0x71a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fded5 +0x71f:  mov    0x8(%ebp),%eax
084fded8 +0x722:  mov    0x654(%eax),%edx
084fdede +0x728:  mov    -0x20(%ebp),%eax
084fdee1 +0x72b:  imul   $0x3d,%eax,%eax
084fdee4 +0x72e:  lea    (%edx,%eax,1),%eax
084fdee7 +0x731:  mov    0xd(%eax),%eax
084fdeea +0x734:  mov    %eax,%edx
084fdeec +0x736:  mov    -0x34(%ebp),%eax
084fdeef +0x739:  mov    %edx,0x4(%esp)
084fdef3 +0x73d:  mov    %eax,(%esp)
084fdef6 +0x740:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fdefb +0x745:  mov    -0x34(%ebp),%eax
084fdefe +0x748:  movl   $0x0,0x4(%esp)
084fdf06 +0x750:  mov    %eax,(%esp)
084fdf09 +0x753:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fdf0e +0x758:  mov    -0x34(%ebp),%eax
084fdf11 +0x75b:  movl   $0x0,0x4(%esp)
084fdf19 +0x763:  mov    %eax,(%esp)
084fdf1c +0x766:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084fdf21 +0x76b:  addl   $0x1,-0x28(%ebp)
084fdf25 +0x76f:  mov    -0x34(%ebp),%eax
084fdf28 +0x772:  movl   $0x1e,0x4(%esp)
084fdf30 +0x77a:  mov    %eax,(%esp)
084fdf33 +0x77d:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fdf38 +0x782:  mov    0x8(%ebp),%eax
084fdf3b +0x785:  mov    0x654(%eax),%edx
084fdf41 +0x78b:  mov    -0x20(%ebp),%eax
084fdf44 +0x78e:  imul   $0x3d,%eax,%eax
084fdf47 +0x791:  lea    (%edx,%eax,1),%eax
084fdf4a +0x794:  mov    0x7(%eax),%eax
084fdf4d +0x797:  mov    0x8(%ebp),%edx
084fdf50 +0x79a:  add    $0x734,%edx
084fdf56 +0x7a0:  mov    %eax,0x4(%esp)
084fdf5a +0x7a4:  mov    %edx,(%esp)
084fdf5d +0x7a7:  call   082f98f8 <_ZNK8WongWork14CAvatarItemMgr18getJewelSocketDataEi>  ; WongWork::CAvatarItemMgr::getJewelSocketData(int) const
084fdf62 +0x7ac:  mov    %eax,%edx
084fdf64 +0x7ae:  mov    -0x34(%ebp),%eax
084fdf67 +0x7b1:  movl   $0x1e,0x8(%esp)
084fdf6f +0x7b9:  mov    %edx,0x4(%esp)
084fdf73 +0x7bd:  mov    %eax,(%esp)
084fdf76 +0x7c0:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
084fdf7b +0x7c5:  mov    0x8(%ebp),%eax
084fdf7e +0x7c8:  mov    0x654(%eax),%edx
084fdf84 +0x7ce:  mov    -0x20(%ebp),%eax
084fdf87 +0x7d1:  imul   $0x3d,%eax,%eax
084fdf8a +0x7d4:  lea    (%edx,%eax,1),%eax
084fdf8d +0x7d7:  mov    0x7(%eax),%eax
084fdf90 +0x7da:  mov    0x8(%ebp),%edx
084fdf93 +0x7dd:  add    $0x734,%edx
084fdf99 +0x7e3:  mov    %eax,0x4(%esp)
084fdf9d +0x7e7:  mov    %edx,(%esp)
084fdfa0 +0x7ea:  call   082f992e <_ZNK8WongWork14CAvatarItemMgr16GetExpansionInfoEi>  ; WongWork::CAvatarItemMgr::GetExpansionInfo(int) const
084fdfa5 +0x7ef:  mov    %eax,-0x1c(%ebp)
084fdfa8 +0x7f2:  mov    -0x34(%ebp),%eax
084fdfab +0x7f5:  movl   $0x4,0x4(%esp)
084fdfb3 +0x7fd:  mov    %eax,(%esp)
084fdfb6 +0x800:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fdfbb +0x805:  cmpl   $0x0,-0x1c(%ebp)
084fdfbf +0x809:  je     084fdfdd <+0x827>
084fdfc1 +0x80b:  mov    -0x1c(%ebp),%edx
084fdfc4 +0x80e:  mov    -0x34(%ebp),%eax
084fdfc7 +0x811:  movl   $0x4,0x8(%esp)
084fdfcf +0x819:  mov    %edx,0x4(%esp)
084fdfd3 +0x81d:  mov    %eax,(%esp)
084fdfd6 +0x820:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
084fdfdb +0x825:  jmp    084fe002 <+0x84c>
084fdfdd +0x827:  lea    -0x50(%ebp),%eax
084fdfe0 +0x82a:  mov    %eax,(%esp)
084fdfe3 +0x82d:  call   0833421e <_GLOBAL__I__ZN8WongWork15CCompoundAvatarC2Ev+0x1c>  ; global constructors keyed to WongWork::CCompoundAvatar::CCompoundAvatar()+0x1c
084fdfe8 +0x832:  lea    -0x50(%ebp),%edx
084fdfeb +0x835:  mov    -0x34(%ebp),%eax
084fdfee +0x838:  movl   $0x4,0x8(%esp)
084fdff6 +0x840:  mov    %edx,0x4(%esp)
084fdffa +0x844:  mov    %eax,(%esp)
084fdffd +0x847:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
084fe002 +0x84c:  mov    -0x34(%ebp),%eax
084fe005 +0x84f:  movl   $0x0,0x4(%esp)
084fe00d +0x857:  mov    %eax,(%esp)
084fe010 +0x85a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fe015 +0x85f:  mov    0x8(%ebp),%eax
084fe018 +0x862:  mov    0x654(%eax),%edx
084fe01e +0x868:  mov    -0x20(%ebp),%eax
084fe021 +0x86b:  imul   $0x3d,%eax,%eax
084fe024 +0x86e:  add    %eax,%edx
084fe026 +0x870:  mov    -0x34(%ebp),%eax
084fe029 +0x873:  mov    %edx,0x4(%esp)
084fe02d +0x877:  mov    %eax,(%esp)
084fe030 +0x87a:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
084fe035 +0x87f:  addl   $0x1,-0x20(%ebp)
084fe039 +0x883:  cmpl   $0x68,-0x20(%ebp)
084fe03d +0x887:  setle  %al
084fe040 +0x88a:  test   %al,%al
084fe042 +0x88c:  jne    084fddc5 <+0x60f>
084fe048 +0x892:  mov    -0x34(%ebp),%eax
084fe04b +0x895:  mov    -0x28(%ebp),%edx
084fe04e +0x898:  mov    %edx,0x8(%esp)
084fe052 +0x89c:  lea    -0x4c(%ebp),%edx
084fe055 +0x89f:  mov    %edx,0x4(%esp)
084fe059 +0x8a3:  mov    %eax,(%esp)
084fe05c +0x8a6:  call   08116908 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x1d>  ; global constructors keyed to CEventManager::CEventManager()+0x1d
084fe061 +0x8ab:  jmp    084fe2c3 <+0xb0d>
084fe066 +0x8b0:  mov    -0x34(%ebp),%eax
084fe069 +0x8b3:  movl   $0x7,0x4(%esp)
084fe071 +0x8bb:  mov    %eax,(%esp)
084fe074 +0x8be:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fe079 +0x8c3:  mov    -0x34(%ebp),%eax
084fe07c +0x8c6:  mov    %eax,(%esp)
084fe07f +0x8c9:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
084fe084 +0x8ce:  mov    %eax,-0x54(%ebp)
084fe087 +0x8d1:  movl   $0x0,-0x18(%ebp)
084fe08e +0x8d8:  mov    -0x34(%ebp),%eax
084fe091 +0x8db:  mov    -0x18(%ebp),%edx
084fe094 +0x8de:  mov    %edx,0x4(%esp)
084fe098 +0x8e2:  mov    %eax,(%esp)
084fe09b +0x8e5:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084fe0a0 +0x8ea:  movl   $0x0,-0x14(%ebp)
084fe0a7 +0x8f1:  jmp    084fe298 <+0xae2>
084fe0ac +0x8f6:  mov    0x8(%ebp),%eax
084fe0af +0x8f9:  mov    0x6e4(%eax),%edx
084fe0b5 +0x8ff:  mov    -0x14(%ebp),%eax
084fe0b8 +0x902:  imul   $0x3d,%eax,%eax
084fe0bb +0x905:  lea    (%edx,%eax,1),%eax
084fe0be +0x908:  mov    0x2(%eax),%eax
084fe0c1 +0x90b:  test   %eax,%eax
084fe0c3 +0x90d:  je     084fe294 <+0xade>
084fe0c9 +0x913:  mov    -0x34(%ebp),%eax
084fe0cc +0x916:  mov    -0x14(%ebp),%edx
084fe0cf +0x919:  mov    %edx,0x4(%esp)
084fe0d3 +0x91d:  mov    %eax,(%esp)
084fe0d6 +0x920:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084fe0db +0x925:  mov    0x8(%ebp),%eax
084fe0de +0x928:  mov    0x6e4(%eax),%edx
084fe0e4 +0x92e:  mov    -0x14(%ebp),%eax
084fe0e7 +0x931:  imul   $0x3d,%eax,%eax
084fe0ea +0x934:  lea    (%edx,%eax,1),%eax
084fe0ed +0x937:  mov    0x2(%eax),%eax
084fe0f0 +0x93a:  mov    %eax,%edx
084fe0f2 +0x93c:  mov    -0x34(%ebp),%eax
084fe0f5 +0x93f:  mov    %edx,0x4(%esp)
084fe0f9 +0x943:  mov    %eax,(%esp)
084fe0fc +0x946:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fe101 +0x94b:  mov    0x8(%ebp),%eax
084fe104 +0x94e:  mov    0x6e4(%eax),%edx
084fe10a +0x954:  mov    -0x14(%ebp),%eax
084fe10d +0x957:  imul   $0x3d,%eax,%eax
084fe110 +0x95a:  lea    (%edx,%eax,1),%eax
084fe113 +0x95d:  mov    0x7(%eax),%edx
084fe116 +0x960:  mov    -0x34(%ebp),%eax
084fe119 +0x963:  mov    %edx,0x4(%esp)
084fe11d +0x967:  mov    %eax,(%esp)
084fe120 +0x96a:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fe125 +0x96f:  mov    0x8(%ebp),%eax
084fe128 +0x972:  mov    0x6e4(%eax),%edx
084fe12e +0x978:  mov    -0x14(%ebp),%eax
084fe131 +0x97b:  imul   $0x3d,%eax,%eax
084fe134 +0x97e:  lea    (%edx,%eax,1),%eax
084fe137 +0x981:  mov    %eax,(%esp)
084fe13a +0x984:  call   081507dc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x111>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x111
084fe13f +0x989:  movzbl %al,%edx
084fe142 +0x98c:  mov    -0x34(%ebp),%eax
084fe145 +0x98f:  mov    %edx,0x4(%esp)
084fe149 +0x993:  mov    %eax,(%esp)
084fe14c +0x996:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fe151 +0x99b:  mov    0x8(%ebp),%eax
084fe154 +0x99e:  mov    0x6e4(%eax),%edx
084fe15a +0x9a4:  mov    -0x14(%ebp),%eax
084fe15d +0x9a7:  imul   $0x3d,%eax,%eax
084fe160 +0x9aa:  lea    (%edx,%eax,1),%eax
084fe163 +0x9ad:  movzwl 0xb(%eax),%eax
084fe167 +0x9b1:  movzwl %ax,%edx
084fe16a +0x9b4:  mov    -0x34(%ebp),%eax
084fe16d +0x9b7:  mov    %edx,0x4(%esp)
084fe171 +0x9bb:  mov    %eax,(%esp)
084fe174 +0x9be:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084fe179 +0x9c3:  mov    0x8(%ebp),%eax
084fe17c +0x9c6:  mov    0x6e4(%eax),%edx
084fe182 +0x9cc:  mov    -0x14(%ebp),%eax
084fe185 +0x9cf:  imul   $0x3d,%eax,%eax
084fe188 +0x9d2:  lea    (%edx,%eax,1),%eax
084fe18b +0x9d5:  movzbl (%eax),%eax
084fe18e +0x9d8:  movzbl %al,%edx
084fe191 +0x9db:  mov    -0x34(%ebp),%eax
084fe194 +0x9de:  mov    %edx,0x4(%esp)
084fe198 +0x9e2:  mov    %eax,(%esp)
084fe19b +0x9e5:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fe1a0 +0x9ea:  mov    0x8(%ebp),%eax
084fe1a3 +0x9ed:  mov    0x6e4(%eax),%edx
084fe1a9 +0x9f3:  mov    -0x14(%ebp),%eax
084fe1ac +0x9f6:  imul   $0x3d,%eax,%eax
084fe1af +0x9f9:  lea    (%edx,%eax,1),%eax
084fe1b2 +0x9fc:  mov    0xd(%eax),%eax
084fe1b5 +0x9ff:  mov    %eax,%edx
084fe1b7 +0xa01:  mov    -0x34(%ebp),%eax
084fe1ba +0xa04:  mov    %edx,0x4(%esp)
084fe1be +0xa08:  mov    %eax,(%esp)
084fe1c1 +0xa0b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fe1c6 +0xa10:  mov    -0x34(%ebp),%eax
084fe1c9 +0xa13:  movl   $0x0,0x4(%esp)
084fe1d1 +0xa1b:  mov    %eax,(%esp)
084fe1d4 +0xa1e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fe1d9 +0xa23:  mov    -0x34(%ebp),%eax
084fe1dc +0xa26:  movl   $0x0,0x4(%esp)
084fe1e4 +0xa2e:  mov    %eax,(%esp)
084fe1e7 +0xa31:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084fe1ec +0xa36:  mov    0x8(%ebp),%eax
084fe1ef +0xa39:  mov    0x6e4(%eax),%edx
084fe1f5 +0xa3f:  mov    -0x14(%ebp),%eax
084fe1f8 +0xa42:  imul   $0x3d,%eax,%eax
084fe1fb +0xa45:  lea    (%edx,%eax,1),%eax
084fe1fe +0xa48:  movzbl 0x1(%eax),%eax
084fe202 +0xa4c:  cmp    $0x5,%al
084fe204 +0xa4e:  jne    084fe25d <+0xaa7>
084fe206 +0xa50:  movl   $0x0,-0x10(%ebp)
084fe20d +0xa57:  call   0858c802 <_ZN6OS_API15GetDateTimeTickEv>  ; OS_API::GetDateTimeTick()
084fe212 +0xa5c:  mov    %eax,-0x10(%ebp)
084fe215 +0xa5f:  mov    0x8(%ebp),%eax
084fe218 +0xa62:  mov    0x6e4(%eax),%edx
084fe21e +0xa68:  mov    -0x14(%ebp),%eax
084fe221 +0xa6b:  imul   $0x3d,%eax,%eax
084fe224 +0xa6e:  lea    (%edx,%eax,1),%eax
084fe227 +0xa71:  mov    0x7(%eax),%ebx
084fe22a +0xa74:  mov    0x8(%ebp),%eax
084fe22d +0xa77:  mov    %eax,(%esp)
084fe230 +0xa7a:  call   081b7408 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x87>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x87
084fe235 +0xa7f:  mov    -0x10(%ebp),%edx
084fe238 +0xa82:  mov    %edx,0x8(%esp)
084fe23c +0xa86:  mov    %ebx,0x4(%esp)
084fe240 +0xa8a:  mov    %eax,(%esp)
084fe243 +0xa8d:  call   0833d78e <_ZNK13user_creature12CCreatureMgr13GetRemainDateEii>  ; user_creature::CCreatureMgr::GetRemainDate(int, int) const
084fe248 +0xa92:  mov    %eax,-0xc(%ebp)
084fe24b +0xa95:  mov    -0x34(%ebp),%eax
084fe24e +0xa98:  mov    -0xc(%ebp),%edx
084fe251 +0xa9b:  mov    %edx,0x4(%esp)
084fe255 +0xa9f:  mov    %eax,(%esp)
084fe258 +0xaa2:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fe25d +0xaa7:  mov    -0x34(%ebp),%eax
084fe260 +0xaaa:  movl   $0x0,0x4(%esp)
084fe268 +0xab2:  mov    %eax,(%esp)
084fe26b +0xab5:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fe270 +0xaba:  mov    0x8(%ebp),%eax
084fe273 +0xabd:  mov    0x6e4(%eax),%edx
084fe279 +0xac3:  mov    -0x14(%ebp),%eax
084fe27c +0xac6:  imul   $0x3d,%eax,%eax
084fe27f +0xac9:  add    %eax,%edx
084fe281 +0xacb:  mov    -0x34(%ebp),%eax
084fe284 +0xace:  mov    %edx,0x4(%esp)
084fe288 +0xad2:  mov    %eax,(%esp)
084fe28b +0xad5:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
084fe290 +0xada:  addl   $0x1,-0x18(%ebp)
084fe294 +0xade:  addl   $0x1,-0x14(%ebp)
084fe298 +0xae2:  cmpl   $0xf1,-0x14(%ebp)
084fe29f +0xae9:  setle  %al
084fe2a2 +0xaec:  test   %al,%al
084fe2a4 +0xaee:  jne    084fe0ac <+0x8f6>
084fe2aa +0xaf4:  mov    -0x34(%ebp),%eax
084fe2ad +0xaf7:  mov    -0x18(%ebp),%edx
084fe2b0 +0xafa:  mov    %edx,0x8(%esp)
084fe2b4 +0xafe:  lea    -0x54(%ebp),%edx
084fe2b7 +0xb01:  mov    %edx,0x4(%esp)
084fe2bb +0xb05:  mov    %eax,(%esp)
084fe2be +0xb08:  call   08116908 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x1d>  ; global constructors keyed to CEventManager::CEventManager()+0x1d
084fe2c3 +0xb0d:  mov    -0x34(%ebp),%eax
084fe2c6 +0xb10:  movl   $0x1,0x4(%esp)
084fe2ce +0xb18:  mov    %eax,(%esp)
084fe2d1 +0xb1b:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084fe2d6 +0xb20:  mov    $0x1,%eax
084fe2db +0xb25:  add    $0x60,%esp
084fe2de +0xb28:  pop    %ebx
084fe2df +0xb29:  pop    %esi
084fe2e0 +0xb2a:  pop    %ebp
084fe2e1 +0xb2b:  ret
```

## 反编译 C

```c
// CInventory::MakeItemList @ 0x84fd7b6

/* CInventory::MakeItemList(INVEN_TYPE, void*) const */

undefined4 __thiscall
CInventory::MakeItemList(CInventory *this,int param_2,InterfacePacketBuf *param_3)

{
  CUser *pCVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  GameWorld *this_00;
  int iVar6;
  int iVar7;
  char *pcVar8;
  CCreatureMgr *this_01;
  int local_58;
  stAvatarExpansionInfo_t local_54 [4];
  int local_50;
  int local_4c;
  cMyTrace local_48 [16];
  InterfacePacketBuf *local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  char *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  if (*(int *)this == 0) {
    cMyTrace::cMyTrace(local_48,"bool CInventory::MakeItemList(INVEN_TYPE, void*) const",0xa6b,5);
    cMyTrace::operator()(local_48,"inventory::MakeItemList m_pParent is NULL.");
    uVar3 = 0;
  }
  else {
    local_38 = param_3;
    InterfacePacketBuf::put_header(param_3,0,0xd);
    if (param_2 == 2) {
      InterfacePacketBuf::put_byte(local_38,1);
      local_50 = InterfacePacketBuf::get_index(local_38);
      local_2c = 0;
      InterfacePacketBuf::put_short(local_38,0);
      local_28 = OS_API::GetDateTimeTick();
      for (local_24 = 0; local_24 < 0x69; local_24 = local_24 + 1) {
        if (*(int *)(*(int *)(this + 0x654) + local_24 * 0x3d + 2) != 0) {
          InterfacePacketBuf::put_short(local_38,local_24);
          InterfacePacketBuf::put_int
                    (local_38,*(int *)(*(int *)(this + 0x654) + local_24 * 0x3d + 2));
          iVar4 = WongWork::CAvatarItemMgr::GetRemainDate
                            ((CAvatarItemMgr *)(this + 0x734),
                             *(int *)(*(int *)(this + 0x654) + local_24 * 0x3d + 7),local_28);
          InterfacePacketBuf::put_int(local_38,iVar4);
          uVar5 = Inven_Item::GetItemAttr((Inven_Item *)(*(int *)(this + 0x654) + local_24 * 0x3d));
          InterfacePacketBuf::put_byte(local_38,uVar5 & 0xff);
          InterfacePacketBuf::put_short
                    (local_38,(uint)*(ushort *)(*(int *)(this + 0x654) + local_24 * 0x3d + 0xb));
          InterfacePacketBuf::put_byte
                    (local_38,(uint)*(byte *)(*(int *)(this + 0x654) + local_24 * 0x3d));
          InterfacePacketBuf::put_int
                    (local_38,*(int *)(*(int *)(this + 0x654) + local_24 * 0x3d + 0xd));
          InterfacePacketBuf::put_byte(local_38,0);
          InterfacePacketBuf::put_short(local_38,0);
          local_2c = local_2c + 1;
          InterfacePacketBuf::put_int(local_38,0x1e);
          pcVar8 = (char *)WongWork::CAvatarItemMgr::getJewelSocketData
                                     ((CAvatarItemMgr *)(this + 0x734),
                                      *(int *)(*(int *)(this + 0x654) + local_24 * 0x3d + 7));
          InterfacePacketBuf::put_binary(local_38,pcVar8,0x1e);
          local_20 = (char *)WongWork::CAvatarItemMgr::GetExpansionInfo
                                       ((CAvatarItemMgr *)(this + 0x734),
                                        *(int *)(*(int *)(this + 0x654) + local_24 * 0x3d + 7));
          InterfacePacketBuf::put_int(local_38,4);
          if (local_20 == (char *)0x0) {
            stAvatarExpansionInfo_t::init(local_54);
            InterfacePacketBuf::put_binary(local_38,(char *)local_54,4);
          }
          else {
            InterfacePacketBuf::put_binary(local_38,local_20,4);
          }
          InterfacePacketBuf::put_byte(local_38,0);
          InterfacePacketBuf::put_packet
                    (local_38,(Inven_Item *)(*(int *)(this + 0x654) + local_24 * 0x3d));
        }
      }
      InterfacePacketBuf::put_short(local_38,&local_50,local_2c);
    }
    else if (param_2 == 3) {
      InterfacePacketBuf::put_byte(local_38,7);
      local_58 = InterfacePacketBuf::get_index(local_38);
      local_1c = 0;
      InterfacePacketBuf::put_short(local_38,0);
      for (local_18 = 0; local_18 < 0xf2; local_18 = local_18 + 1) {
        if (*(int *)(*(int *)(this + 0x6e4) + local_18 * 0x3d + 2) != 0) {
          InterfacePacketBuf::put_short(local_38,local_18);
          InterfacePacketBuf::put_int
                    (local_38,*(int *)(*(int *)(this + 0x6e4) + local_18 * 0x3d + 2));
          InterfacePacketBuf::put_int
                    (local_38,*(int *)(*(int *)(this + 0x6e4) + local_18 * 0x3d + 7));
          uVar5 = Inven_Item::GetItemAttr((Inven_Item *)(*(int *)(this + 0x6e4) + local_18 * 0x3d));
          InterfacePacketBuf::put_byte(local_38,uVar5 & 0xff);
          InterfacePacketBuf::put_short
                    (local_38,(uint)*(ushort *)(*(int *)(this + 0x6e4) + local_18 * 0x3d + 0xb));
          InterfacePacketBuf::put_byte
                    (local_38,(uint)*(byte *)(*(int *)(this + 0x6e4) + local_18 * 0x3d));
          InterfacePacketBuf::put_int
                    (local_38,*(int *)(*(int *)(this + 0x6e4) + local_18 * 0x3d + 0xd));
          InterfacePacketBuf::put_byte(local_38,0);
          InterfacePacketBuf::put_short(local_38,0);
          if (*(char *)(*(int *)(this + 0x6e4) + local_18 * 0x3d + 1) == '\x05') {
            local_14 = 0;
            local_14 = OS_API::GetDateTimeTick();
            iVar4 = *(int *)(*(int *)(this + 0x6e4) + local_18 * 0x3d + 7);
            this_01 = (CCreatureMgr *)GetCreatureMgrR(this);
            local_10 = user_creature::CCreatureMgr::GetRemainDate(this_01,iVar4,local_14);
            InterfacePacketBuf::put_int(local_38,local_10);
          }
          InterfacePacketBuf::put_byte(local_38,0);
          InterfacePacketBuf::put_packet
                    (local_38,(Inven_Item *)(*(int *)(this + 0x6e4) + local_18 * 0x3d));
          local_1c = local_1c + 1;
        }
      }
      InterfacePacketBuf::put_short(local_38,&local_58,local_1c);
    }
    else if (param_2 == 1) {
      InterfacePacketBuf::put_byte(local_38,0);
      iVar4 = get_inventory_capacity(this);
      InterfacePacketBuf::put_short(local_38,iVar4);
      local_4c = InterfacePacketBuf::get_index(local_38);
      local_34 = 3;
      InterfacePacketBuf::put_short(local_38,6);
      InterfacePacketBuf::put_short(local_38,0);
      InterfacePacketBuf::put_int(local_38,0);
      InterfacePacketBuf::put_int(local_38,*(int *)(this + 4));
      InterfacePacketBuf::put_byte(local_38,0);
      InterfacePacketBuf::put_short(local_38,0);
      InterfacePacketBuf::put_byte(local_38,0);
      InterfacePacketBuf::put_int(local_38,0);
      InterfacePacketBuf::put_byte(local_38,0);
      InterfacePacketBuf::put_short(local_38,0);
      InterfacePacketBuf::put_byte(local_38,0);
      InterfacePacketBuf::put_packet(local_38,(Inven_Item *)g_emptySlot);
      InterfacePacketBuf::put_short(local_38,1);
      InterfacePacketBuf::put_int(local_38,1);
      InterfacePacketBuf::put_int
                (local_38,*(int *)(this + 8) + *(int *)(this + 0xc) + *(int *)(this + 0x10));
      InterfacePacketBuf::put_byte(local_38,0);
      InterfacePacketBuf::put_short(local_38,0);
      InterfacePacketBuf::put_byte(local_38,0);
      InterfacePacketBuf::put_int(local_38,0);
      InterfacePacketBuf::put_byte(local_38,0);
      InterfacePacketBuf::put_short(local_38,0);
      InterfacePacketBuf::put_byte(local_38,0);
      InterfacePacketBuf::put_packet(local_38,(Inven_Item *)g_emptySlot);
      InterfacePacketBuf::put_short(local_38,2);
      InterfacePacketBuf::put_int(local_38,2);
      iVar4 = CUserCharacInfo::GetWinPoint(*(CUserCharacInfo **)this);
      InterfacePacketBuf::put_int(local_38,iVar4);
      InterfacePacketBuf::put_byte(local_38,0);
      InterfacePacketBuf::put_short(local_38,0);
      InterfacePacketBuf::put_byte(local_38,0);
      InterfacePacketBuf::put_int(local_38,0);
      InterfacePacketBuf::put_byte(local_38,0);
      InterfacePacketBuf::put_short(local_38,0);
      InterfacePacketBuf::put_byte(local_38,0);
      InterfacePacketBuf::put_packet(local_38,(Inven_Item *)g_emptySlot);
      for (local_30 = 3; local_30 < 0x138; local_30 = local_30 + 1) {
        if (*(int *)(*(int *)(this + 0x650) + local_30 * 0x3d + 2) != 0) {
          InterfacePacketBuf::put_short(local_38,local_30);
          InterfacePacketBuf::put_int
                    (local_38,*(int *)(*(int *)(this + 0x650) + local_30 * 0x3d + 2));
          InterfacePacketBuf::put_int
                    (local_38,*(int *)(*(int *)(this + 0x650) + local_30 * 0x3d + 7));
          uVar5 = GetIntegratedPvPItemAttr(*(int *)(this + 0x650) + local_30 * 0x3d,1,local_30);
          InterfacePacketBuf::put_byte(local_38,uVar5 & 0xff);
          InterfacePacketBuf::put_short
                    (local_38,(uint)*(ushort *)(*(int *)(this + 0x650) + local_30 * 0x3d + 0xb));
          InterfacePacketBuf::put_byte
                    (local_38,(uint)*(byte *)(*(int *)(this + 0x650) + local_30 * 0x3d));
          this_00 = (GameWorld *)G_GameWorld();
          cVar2 = GameWorld::IsEnchantRevisionChannel(this_00);
          if (cVar2 == '\0') {
            InterfacePacketBuf::put_int
                      (local_38,*(int *)(*(int *)(this + 0x650) + local_30 * 0x3d + 0xd));
          }
          else {
            InterfacePacketBuf::put_int(local_38,0);
          }
          uVar5 = stAmplifyOption_t::getAbilityType
                            ((stAmplifyOption_t *)(*(int *)(this + 0x650) + local_30 * 0x3d + 0x11))
          ;
          InterfacePacketBuf::put_byte(local_38,uVar5 & 0xff);
          uVar5 = stAmplifyOption_t::getAbilityValue
                            ((stAmplifyOption_t *)(*(int *)(this + 0x650) + local_30 * 0x3d + 0x11))
          ;
          InterfacePacketBuf::put_short(local_38,uVar5 & 0xffff);
          iVar4 = *(int *)(this + 0x650);
          iVar6 = local_30 * 0x3d;
          pCVar1 = *(CUser **)this;
          iVar7 = G_CDataManager();
          WongWork::CItemUpgrade::make3rdChroniclePacket
                    (*(CItemUpgrade **)(iVar7 + 0x20),pCVar1,(Inven_Item *)(iVar4 + iVar6),
                     (PacketGuard *)local_38);
          InterfacePacketBuf::put_packet
                    (local_38,(Inven_Item *)(*(int *)(this + 0x650) + local_30 * 0x3d));
          local_34 = local_34 + 1;
        }
      }
      InterfacePacketBuf::put_short(local_38,&local_4c,local_34);
    }
    InterfacePacketBuf::finalize(local_38,true);
    uVar3 = 1;
  }
  return uVar3;
}
```
