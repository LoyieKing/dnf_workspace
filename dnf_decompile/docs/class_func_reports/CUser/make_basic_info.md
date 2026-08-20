# make_basic_info

`_ZN5CUser15make_basic_infoEPcc`

`CUser::make_basic_info(char*, char)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0865a44e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0865a44e  _ZN5CUser15make_basic_infoEPcc
#           CUser::make_basic_info(char*, char)
# range [0x0865a44e, 0x0865c65b]
0865a44e +0x0000:  push   %ebp
0865a44f +0x0001:  mov    %esp,%ebp
0865a451 +0x0003:  push   %esi
0865a452 +0x0004:  push   %ebx
0865a453 +0x0005:  sub    $0x130,%esp
0865a459 +0x000b:  mov    0x10(%ebp),%eax
0865a45c +0x000e:  mov    %al,-0xfc(%ebp)
0865a462 +0x0014:  mov    0xc(%ebp),%eax
0865a465 +0x0017:  mov    %eax,-0x9c(%ebp)
0865a46b +0x001d:  movsbl -0xfc(%ebp),%eax
0865a472 +0x0024:  cmp    $0x1,%eax
0865a475 +0x0027:  je     0865b007 <+0xbb9>
0865a47b +0x002d:  cmp    $0x1,%eax
0865a47e +0x0030:  jg     0865a489 <+0x3b>
0865a480 +0x0032:  test   %eax,%eax
0865a482 +0x0034:  je     0865a4a0 <+0x52>
0865a484 +0x0036:  jmp    0865c64d <+0x21ff>
0865a489 +0x003b:  cmp    $0x2,%eax
0865a48c +0x003e:  je     0865be31 <+0x19e3>
0865a492 +0x0044:  cmp    $0x3,%eax
0865a495 +0x0047:  je     0865b6cd <+0x127f>
0865a49b +0x004d:  jmp    0865c64d <+0x21ff>
0865a4a0 +0x0052:  mov    0x8(%ebp),%eax
0865a4a3 +0x0055:  mov    %eax,(%esp)
0865a4a6 +0x0058:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0865a4ab +0x005d:  test   %eax,%eax
0865a4ad +0x005f:  sete   %al
0865a4b0 +0x0062:  test   %al,%al
0865a4b2 +0x0064:  je     0865a4ea <+0x9c>
0865a4b4 +0x0066:  movl   $"Error ENUM_USERINFO_MINIMUM, getCurCharacR() == 0",0x10(%esp)
0865a4bc +0x006e:  movl   $0x308c,0xc(%esp)
0865a4c4 +0x0076:  movl   $&_ZZN5CUser15make_basic_infoEPccE19__PRETTY_FUNCTION__,0x8(%esp)
0865a4cc +0x007e:  movl   $"user.cpp",0x4(%esp)
0865a4d4 +0x0086:  movl   $0x1,(%esp)
0865a4db +0x008d:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0865a4e0 +0x0092:  mov    $0x0,%eax
0865a4e5 +0x0097:  jmp    0865c652 <+0x2204>
0865a4ea +0x009c:  mov    0x8(%ebp),%eax
0865a4ed +0x009f:  mov    %eax,(%esp)
0865a4f0 +0x00a2:  call   0822fdb6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5460>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5460
0865a4f5 +0x00a7:  mov    0x8(%ebp),%eax
0865a4f8 +0x00aa:  mov    %eax,(%esp)
0865a4fb +0x00ad:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0865a500 +0x00b2:  movzwl %ax,%edx
0865a503 +0x00b5:  mov    -0x9c(%ebp),%eax
0865a509 +0x00bb:  mov    %edx,0x4(%esp)
0865a50d +0x00bf:  mov    %eax,(%esp)
0865a510 +0x00c2:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0865a515 +0x00c7:  mov    0x8(%ebp),%eax
0865a518 +0x00ca:  mov    %eax,(%esp)
0865a51b +0x00cd:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0865a520 +0x00d2:  mov    %eax,(%esp)
0865a523 +0x00d5:  call   0807e3b0 <_init+0xca8>
0865a528 +0x00da:  mov    %eax,%edx
0865a52a +0x00dc:  mov    -0x9c(%ebp),%eax
0865a530 +0x00e2:  mov    %edx,0x4(%esp)
0865a534 +0x00e6:  mov    %eax,(%esp)
0865a537 +0x00e9:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0865a53c +0x00ee:  mov    0x8(%ebp),%eax
0865a53f +0x00f1:  mov    %eax,(%esp)
0865a542 +0x00f4:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0865a547 +0x00f9:  mov    %eax,(%esp)
0865a54a +0x00fc:  call   0807e3b0 <_init+0xca8>
0865a54f +0x0101:  mov    %eax,%ebx
0865a551 +0x0103:  mov    0x8(%ebp),%eax
0865a554 +0x0106:  mov    %eax,(%esp)
0865a557 +0x0109:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0865a55c +0x010e:  mov    -0x9c(%ebp),%edx
0865a562 +0x0114:  mov    %ebx,0x8(%esp)
0865a566 +0x0118:  mov    %eax,0x4(%esp)
0865a56a +0x011c:  mov    %edx,(%esp)
0865a56d +0x011f:  call   0822b770 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe1a
0865a572 +0x0124:  mov    0x8(%ebp),%eax
0865a575 +0x0127:  mov    %eax,(%esp)
0865a578 +0x012a:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0865a57d +0x012f:  mov    -0x9c(%ebp),%edx
0865a583 +0x0135:  mov    %eax,0x4(%esp)
0865a587 +0x0139:  mov    %edx,(%esp)
0865a58a +0x013c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865a58f +0x0141:  mov    0x8(%ebp),%eax
0865a592 +0x0144:  mov    %eax,(%esp)
0865a595 +0x0147:  call   0815741c <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x7b>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x7b
0865a59a +0x014c:  movsbl %al,%edx
0865a59d +0x014f:  mov    -0x9c(%ebp),%eax
0865a5a3 +0x0155:  mov    %edx,0x4(%esp)
0865a5a7 +0x0159:  mov    %eax,(%esp)
0865a5aa +0x015c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865a5af +0x0161:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0865a5b4 +0x0166:  mov    %eax,(%esp)
0865a5b7 +0x0169:  call   084ed128 <_GLOBAL__I__Z7getUserj+0x40da>  ; global constructors keyed to getUser(unsigned int)+0x40da
0865a5bc +0x016e:  test   %al,%al
0865a5be +0x0170:  je     0865a5c7 <+0x179>
0865a5c0 +0x0172:  mov    $0x55,%eax
0865a5c5 +0x0177:  jmp    0865a5d2 <+0x184>
0865a5c7 +0x0179:  mov    0x8(%ebp),%eax
0865a5ca +0x017c:  mov    %eax,(%esp)
0865a5cd +0x017f:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0865a5d2 +0x0184:  mov    -0x9c(%ebp),%edx
0865a5d8 +0x018a:  mov    %eax,0x4(%esp)
0865a5dc +0x018e:  mov    %edx,(%esp)
0865a5df +0x0191:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865a5e4 +0x0196:  mov    0x8(%ebp),%eax
0865a5e7 +0x0199:  mov    %eax,(%esp)
0865a5ea +0x019c:  call   0819ee4a <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x86>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x86
0865a5ef +0x01a1:  mov    -0x9c(%ebp),%edx
0865a5f5 +0x01a7:  mov    %eax,0x4(%esp)
0865a5f9 +0x01ab:  mov    %edx,(%esp)
0865a5fc +0x01ae:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865a601 +0x01b3:  mov    0x8(%ebp),%eax
0865a604 +0x01b6:  mov    %eax,(%esp)
0865a607 +0x01b9:  call   0850d488 <_GLOBAL__I_g_emptySlot+0x3bd>  ; global constructors keyed to g_emptySlot+0x3bd
0865a60c +0x01be:  mov    0x5c(%eax),%edx
0865a60f +0x01c1:  mov    -0x9c(%ebp),%eax
0865a615 +0x01c7:  mov    %edx,0x4(%esp)
0865a619 +0x01cb:  mov    %eax,(%esp)
0865a61c +0x01ce:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865a621 +0x01d3:  mov    0x8(%ebp),%eax
0865a624 +0x01d6:  mov    %eax,(%esp)
0865a627 +0x01d9:  call   082f0e70 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0xbf4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0xbf4
0865a62c +0x01de:  mov    %eax,%edx
0865a62e +0x01e0:  mov    -0x9c(%ebp),%eax
0865a634 +0x01e6:  mov    %edx,0x4(%esp)
0865a638 +0x01ea:  mov    %eax,(%esp)
0865a63b +0x01ed:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865a640 +0x01f2:  movsbl -0xfc(%ebp),%ebx
0865a647 +0x01f9:  mov    0x8(%ebp),%eax
0865a64a +0x01fc:  mov    %eax,(%esp)
0865a64d +0x01ff:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0865a652 +0x0204:  movl   $0x0,0x10(%esp)
0865a65a +0x020c:  mov    %ebx,0xc(%esp)
0865a65e +0x0210:  movl   $0x0,0x8(%esp)
0865a666 +0x0218:  mov    -0x9c(%ebp),%edx
0865a66c +0x021e:  mov    %edx,0x4(%esp)
0865a670 +0x0222:  mov    %eax,(%esp)
0865a673 +0x0225:  call   084fe2e2 <_ZNK10CInventory13MakeEquipListEPvb13ENUM_USERINFO14ENUM_EQUIPSLOT>  ; CInventory::MakeEquipList(void*, bool, ENUM_USERINFO, ENUM_EQUIPSLOT) const
0865a678 +0x022a:  mov    0x8(%ebp),%eax
0865a67b +0x022d:  mov    %eax,(%esp)
0865a67e +0x0230:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0865a683 +0x0235:  mov    $0x0,%edx
0865a688 +0x023a:  mov    -0x9c(%ebp),%eax
0865a68e +0x0240:  mov    %edx,0x4(%esp)
0865a692 +0x0244:  mov    %eax,(%esp)
0865a695 +0x0247:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865a69a +0x024c:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0865a69f +0x0251:  mov    %eax,(%esp)
0865a6a2 +0x0254:  call   0844dc4e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x864>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x864
0865a6a7 +0x0259:  test   %al,%al
0865a6a9 +0x025b:  je     0865a6c1 <+0x273>
0865a6ab +0x025d:  mov    0x8(%ebp),%eax
0865a6ae +0x0260:  mov    %eax,(%esp)
0865a6b1 +0x0263:  call   0822fe02 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54ac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54ac
0865a6b6 +0x0268:  test   %eax,%eax
0865a6b8 +0x026a:  je     0865a6c1 <+0x273>
0865a6ba +0x026c:  mov    $0x1,%eax
0865a6bf +0x0271:  jmp    0865a6c6 <+0x278>
0865a6c1 +0x0273:  mov    $0x0,%eax
0865a6c6 +0x0278:  test   %al,%al
0865a6c8 +0x027a:  je     0865a6e9 <+0x29b>
0865a6ca +0x027c:  mov    0x8(%ebp),%eax
0865a6cd +0x027f:  mov    %eax,(%esp)
0865a6d0 +0x0282:  call   0822fe02 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54ac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54ac
0865a6d5 +0x0287:  mov    %eax,%edx
0865a6d7 +0x0289:  mov    -0x9c(%ebp),%eax
0865a6dd +0x028f:  mov    %edx,0x4(%esp)
0865a6e1 +0x0293:  mov    %eax,(%esp)
0865a6e4 +0x0296:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0865a6e9 +0x029b:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0865a6ee +0x02a0:  mov    %eax,(%esp)
0865a6f1 +0x02a3:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
0865a6f6 +0x02a8:  cmp    $0xe,%eax
0865a6f9 +0x02ab:  sete   %al
0865a6fc +0x02ae:  test   %al,%al
0865a6fe +0x02b0:  je     0865a71f <+0x2d1>
0865a700 +0x02b2:  mov    0x8(%ebp),%eax
0865a703 +0x02b5:  mov    %eax,(%esp)
0865a706 +0x02b8:  call   08645de2 <_ZNK15CUserCharacInfo35GetCurCharacOnlinePreliminaryTeamIdEv>  ; CUserCharacInfo::GetCurCharacOnlinePreliminaryTeamId() const
0865a70b +0x02bd:  mov    -0x9c(%ebp),%edx
0865a711 +0x02c3:  mov    %eax,0x4(%esp)
0865a715 +0x02c7:  mov    %edx,(%esp)
0865a718 +0x02ca:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0865a71d +0x02cf:  jmp    0865a73e <+0x2f0>
0865a71f +0x02d1:  mov    0x8(%ebp),%eax
0865a722 +0x02d4:  mov    %eax,(%esp)
0865a725 +0x02d7:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
0865a72a +0x02dc:  mov    %eax,%edx
0865a72c +0x02de:  mov    -0x9c(%ebp),%eax
0865a732 +0x02e4:  mov    %edx,0x4(%esp)
0865a736 +0x02e8:  mov    %eax,(%esp)
0865a739 +0x02eb:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0865a73e +0x02f0:  mov    0x8(%ebp),%eax
0865a741 +0x02f3:  mov    %eax,(%esp)
0865a744 +0x02f6:  call   0865c65c <_ZN5CUser24IsPermissionPrivateStoreEv>  ; CUser::IsPermissionPrivateStore()
0865a749 +0x02fb:  movzbl %al,%edx
0865a74c +0x02fe:  mov    -0x9c(%ebp),%eax
0865a752 +0x0304:  mov    %edx,0x4(%esp)
0865a756 +0x0308:  mov    %eax,(%esp)
0865a759 +0x030b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865a75e +0x0310:  mov    0x8(%ebp),%eax
0865a761 +0x0313:  mov    %eax,(%esp)
0865a764 +0x0316:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0865a769 +0x031b:  mov    %eax,(%esp)
0865a76c +0x031e:  call   081b7408 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x87>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x87
0865a771 +0x0323:  mov    %eax,(%esp)
0865a774 +0x0326:  call   0833a638 <_ZNK13user_creature12CCreatureMgr17GetCreatureItemIdEv>  ; user_creature::CCreatureMgr::GetCreatureItemId() const
0865a779 +0x032b:  mov    -0x9c(%ebp),%edx
0865a77f +0x0331:  mov    %eax,0x4(%esp)
0865a783 +0x0335:  mov    %edx,(%esp)
0865a786 +0x0338:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0865a78b +0x033d:  mov    0x8(%ebp),%eax
0865a78e +0x0340:  mov    %eax,(%esp)
0865a791 +0x0343:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0865a796 +0x0348:  mov    %eax,(%esp)
0865a799 +0x034b:  call   081b7408 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x87>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x87
0865a79e +0x0350:  mov    %eax,(%esp)
0865a7a1 +0x0353:  call   0833a688 <_ZNK13user_creature12CCreatureMgr15GetCreatureNameEv>  ; user_creature::CCreatureMgr::GetCreatureName() const
0865a7a6 +0x0358:  mov    %eax,-0x98(%ebp)
0865a7ac +0x035e:  mov    -0x98(%ebp),%eax
0865a7b2 +0x0364:  mov    %eax,(%esp)
0865a7b5 +0x0367:  call   0807e3b0 <_init+0xca8>
0865a7ba +0x036c:  mov    %eax,-0x94(%ebp)
0865a7c0 +0x0372:  mov    -0x9c(%ebp),%eax
0865a7c6 +0x0378:  mov    -0x94(%ebp),%edx
0865a7cc +0x037e:  mov    %edx,0x4(%esp)
0865a7d0 +0x0382:  mov    %eax,(%esp)
0865a7d3 +0x0385:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0865a7d8 +0x038a:  mov    -0x9c(%ebp),%eax
0865a7de +0x0390:  mov    -0x94(%ebp),%edx
0865a7e4 +0x0396:  mov    %edx,0x8(%esp)
0865a7e8 +0x039a:  mov    -0x98(%ebp),%edx
0865a7ee +0x03a0:  mov    %edx,0x4(%esp)
0865a7f2 +0x03a4:  mov    %eax,(%esp)
0865a7f5 +0x03a7:  call   0822b770 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe1a
0865a7fa +0x03ac:  mov    0x8(%ebp),%eax
0865a7fd +0x03af:  mov    %eax,(%esp)
0865a800 +0x03b2:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0865a805 +0x03b7:  mov    %eax,(%esp)
0865a808 +0x03ba:  call   081b7408 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x87>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x87
0865a80d +0x03bf:  mov    %eax,(%esp)
0865a810 +0x03c2:  call   0833a660 <_ZNK13user_creature12CCreatureMgr13IsDieCreatureEv>  ; user_creature::CCreatureMgr::IsDieCreature() const
0865a815 +0x03c7:  test   %al,%al
0865a817 +0x03c9:  je     0865a820 <+0x3d2>
0865a819 +0x03cb:  mov    $0x0,%eax
0865a81e +0x03d0:  jmp    0865a825 <+0x3d7>
0865a820 +0x03d2:  mov    $0x1,%eax
0865a825 +0x03d7:  mov    -0x9c(%ebp),%edx
0865a82b +0x03dd:  mov    %eax,0x4(%esp)
0865a82f +0x03e1:  mov    %edx,(%esp)
0865a832 +0x03e4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865a837 +0x03e9:  movl   $0xc,0x4(%esp)
0865a83f +0x03f1:  mov    0x8(%ebp),%eax
0865a842 +0x03f4:  mov    %eax,(%esp)
0865a845 +0x03f7:  call   080e600e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x144>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x144
0865a84a +0x03fc:  movzbl %al,%edx
0865a84d +0x03ff:  mov    -0x9c(%ebp),%eax
0865a853 +0x0405:  mov    %edx,0x4(%esp)
0865a857 +0x0409:  mov    %eax,(%esp)
0865a85a +0x040c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865a85f +0x0411:  mov    0x8(%ebp),%eax
0865a862 +0x0414:  mov    %eax,(%esp)
0865a865 +0x0417:  call   08110dc2 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x2d4>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x2d4
0865a86a +0x041c:  mov    %eax,%edx
0865a86c +0x041e:  mov    -0x9c(%ebp),%eax
0865a872 +0x0424:  mov    %edx,0x4(%esp)
0865a876 +0x0428:  mov    %eax,(%esp)
0865a879 +0x042b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0865a87e +0x0430:  mov    0x8(%ebp),%eax
0865a881 +0x0433:  mov    %eax,(%esp)
0865a884 +0x0436:  call   082f0960 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x6e4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x6e4
0865a889 +0x043b:  mov    %eax,-0x90(%ebp)
0865a88f +0x0441:  mov    -0x9c(%ebp),%eax
0865a895 +0x0447:  mov    -0x90(%ebp),%edx
0865a89b +0x044d:  mov    %edx,0x4(%esp)
0865a89f +0x0451:  mov    %eax,(%esp)
0865a8a2 +0x0454:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0865a8a7 +0x0459:  mov    0x8(%ebp),%eax
0865a8aa +0x045c:  mov    %eax,(%esp)
0865a8ad +0x045f:  call   08230164 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x580e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x580e
0865a8b2 +0x0464:  mov    %eax,-0x8c(%ebp)
0865a8b8 +0x046a:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0865a8bd +0x046f:  mov    %eax,(%esp)
0865a8c0 +0x0472:  call   0844dc4e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x864>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x864
0865a8c5 +0x0477:  test   %al,%al
0865a8c7 +0x0479:  je     0865a8df <+0x491>
0865a8c9 +0x047b:  mov    0x8(%ebp),%eax
0865a8cc +0x047e:  mov    %eax,(%esp)
0865a8cf +0x0481:  call   0822fe02 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54ac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54ac
0865a8d4 +0x0486:  test   %eax,%eax
0865a8d6 +0x0488:  je     0865a8df <+0x491>
0865a8d8 +0x048a:  mov    $0x1,%eax
0865a8dd +0x048f:  jmp    0865a8e4 <+0x496>
0865a8df +0x0491:  mov    $0x0,%eax
0865a8e4 +0x0496:  test   %al,%al
0865a8e6 +0x0498:  je     0865a963 <+0x515>
0865a8e8 +0x049a:  call   084ed37b <_GLOBAL__I__Z7getUserj+0x432d>  ; global constructors keyed to getUser(unsigned int)+0x432d
0865a8ed +0x049f:  movzbl %al,%edx
0865a8f0 +0x04a2:  mov    -0x9c(%ebp),%eax
0865a8f6 +0x04a8:  mov    %edx,0x4(%esp)
0865a8fa +0x04ac:  mov    %eax,(%esp)
0865a8fd +0x04af:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865a902 +0x04b4:  mov    0x8(%ebp),%eax
0865a905 +0x04b7:  add    $0x8e080,%eax
0865a90a +0x04bc:  mov    %eax,(%esp)
0865a90d +0x04bf:  call   08706670 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x280>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x280
0865a912 +0x04c4:  mov    %eax,%edx
0865a914 +0x04c6:  mov    -0x9c(%ebp),%eax
0865a91a +0x04cc:  mov    %edx,0x4(%esp)
0865a91e +0x04d0:  mov    %eax,(%esp)
0865a921 +0x04d3:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0865a926 +0x04d8:  mov    0x8(%ebp),%eax
0865a929 +0x04db:  add    $0x8e080,%eax
0865a92e +0x04e0:  mov    %eax,(%esp)
0865a931 +0x04e3:  call   08706670 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x280>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x280
0865a936 +0x04e8:  mov    %eax,%ebx
0865a938 +0x04ea:  mov    0x8(%ebp),%eax
0865a93b +0x04ed:  add    $0x8e080,%eax
0865a940 +0x04f2:  mov    %eax,(%esp)
0865a943 +0x04f5:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0865a948 +0x04fa:  mov    -0x9c(%ebp),%edx
0865a94e +0x0500:  mov    %ebx,0x8(%esp)
0865a952 +0x0504:  mov    %eax,0x4(%esp)
0865a956 +0x0508:  mov    %edx,(%esp)
0865a959 +0x050b:  call   0822b770 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe1a
0865a95e +0x0510:  jmp    0865aa57 <+0x609>
0865a963 +0x0515:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0865a968 +0x051a:  mov    %eax,(%esp)
0865a96b +0x051d:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
0865a970 +0x0522:  cmp    $0xe,%eax
0865a973 +0x0525:  sete   %al
0865a976 +0x0528:  test   %al,%al
0865a978 +0x052a:  je     0865a9f3 <+0x5a5>
0865a97a +0x052c:  call   0855fee8 <_ZN18online_preliminary18COnlinePreliminary22GetPlayCountPerOneTeamEv>  ; online_preliminary::COnlinePreliminary::GetPlayCountPerOneTeam()
0865a97f +0x0531:  movzbl %al,%edx
0865a982 +0x0534:  mov    -0x9c(%ebp),%eax
0865a988 +0x053a:  mov    %edx,0x4(%esp)
0865a98c +0x053e:  mov    %eax,(%esp)
0865a98f +0x0541:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865a994 +0x0546:  mov    0x8(%ebp),%eax
0865a997 +0x0549:  mov    %eax,(%esp)
0865a99a +0x054c:  call   08645e20 <_ZNK15CUserCharacInfo37GetCurCharacOnlinePreliminaryTeamNameEv>  ; CUserCharacInfo::GetCurCharacOnlinePreliminaryTeamName() const
0865a99f +0x0551:  mov    %eax,(%esp)
0865a9a2 +0x0554:  call   0807e3b0 <_init+0xca8>
0865a9a7 +0x0559:  mov    %eax,%edx
0865a9a9 +0x055b:  mov    -0x9c(%ebp),%eax
0865a9af +0x0561:  mov    %edx,0x4(%esp)
0865a9b3 +0x0565:  mov    %eax,(%esp)
0865a9b6 +0x0568:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0865a9bb +0x056d:  mov    0x8(%ebp),%eax
0865a9be +0x0570:  mov    %eax,(%esp)
0865a9c1 +0x0573:  call   08645e20 <_ZNK15CUserCharacInfo37GetCurCharacOnlinePreliminaryTeamNameEv>  ; CUserCharacInfo::GetCurCharacOnlinePreliminaryTeamName() const
0865a9c6 +0x0578:  mov    %eax,(%esp)
0865a9c9 +0x057b:  call   0807e3b0 <_init+0xca8>
0865a9ce +0x0580:  mov    %eax,%ebx
0865a9d0 +0x0582:  mov    0x8(%ebp),%eax
0865a9d3 +0x0585:  mov    %eax,(%esp)
0865a9d6 +0x0588:  call   08645e20 <_ZNK15CUserCharacInfo37GetCurCharacOnlinePreliminaryTeamNameEv>  ; CUserCharacInfo::GetCurCharacOnlinePreliminaryTeamName() const
0865a9db +0x058d:  mov    -0x9c(%ebp),%edx
0865a9e1 +0x0593:  mov    %ebx,0x8(%esp)
0865a9e5 +0x0597:  mov    %eax,0x4(%esp)
0865a9e9 +0x059b:  mov    %edx,(%esp)
0865a9ec +0x059e:  call   0822b770 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe1a
0865a9f1 +0x05a3:  jmp    0865aa57 <+0x609>
0865a9f3 +0x05a5:  mov    -0x8c(%ebp),%eax
0865a9f9 +0x05ab:  movzbl 0x1b(%eax),%eax
0865a9fd +0x05af:  movzbl %al,%edx
0865aa00 +0x05b2:  mov    -0x9c(%ebp),%eax
0865aa06 +0x05b8:  mov    %edx,0x4(%esp)
0865aa0a +0x05bc:  mov    %eax,(%esp)
0865aa0d +0x05bf:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865aa12 +0x05c4:  mov    -0x8c(%ebp),%eax
0865aa18 +0x05ca:  mov    %eax,(%esp)
0865aa1b +0x05cd:  call   0807e3b0 <_init+0xca8>
0865aa20 +0x05d2:  mov    %eax,-0x80(%ebp)
0865aa23 +0x05d5:  mov    -0x9c(%ebp),%eax
0865aa29 +0x05db:  mov    -0x80(%ebp),%edx
0865aa2c +0x05de:  mov    %edx,0x4(%esp)
0865aa30 +0x05e2:  mov    %eax,(%esp)
0865aa33 +0x05e5:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0865aa38 +0x05ea:  mov    -0x8c(%ebp),%edx
0865aa3e +0x05f0:  mov    -0x9c(%ebp),%eax
0865aa44 +0x05f6:  mov    -0x80(%ebp),%ecx
0865aa47 +0x05f9:  mov    %ecx,0x8(%esp)
0865aa4b +0x05fd:  mov    %edx,0x4(%esp)
0865aa4f +0x0601:  mov    %eax,(%esp)
0865aa52 +0x0604:  call   0822b770 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe1a
0865aa57 +0x0609:  mov    0x8(%ebp),%eax
0865aa5a +0x060c:  mov    %eax,(%esp)
0865aa5d +0x060f:  call   082f0ad8 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x85c>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x85c
0865aa62 +0x0614:  mov    -0x9c(%ebp),%edx
0865aa68 +0x061a:  mov    %eax,0x4(%esp)
0865aa6c +0x061e:  mov    %edx,(%esp)
0865aa6f +0x0621:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0865aa74 +0x0626:  mov    0x8(%ebp),%eax
0865aa77 +0x0629:  mov    %eax,(%esp)
0865aa7a +0x062c:  call   080fdf88 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x2b4>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x2b4
0865aa7f +0x0631:  cmp    $0xe,%eax
0865aa82 +0x0634:  seta   %al
0865aa85 +0x0637:  movzbl %al,%edx
0865aa88 +0x063a:  mov    -0x9c(%ebp),%eax
0865aa8e +0x0640:  mov    %edx,0x4(%esp)
0865aa92 +0x0644:  mov    %eax,(%esp)
0865aa95 +0x0647:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865aa9a +0x064c:  mov    0x8(%ebp),%eax
0865aa9d +0x064f:  mov    %eax,(%esp)
0865aaa0 +0x0652:  call   0822fcc6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5370>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5370
0865aaa5 +0x0657:  movsbl %al,%edx
0865aaa8 +0x065a:  mov    -0x9c(%ebp),%eax
0865aaae +0x0660:  mov    %edx,0x4(%esp)
0865aab2 +0x0664:  mov    %eax,(%esp)
0865aab5 +0x0667:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865aaba +0x066c:  mov    0x8(%ebp),%eax
0865aabd +0x066f:  mov    %eax,(%esp)
0865aac0 +0x0672:  call   082f09a0 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x724>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x724
0865aac5 +0x0677:  movsbl %al,%edx
0865aac8 +0x067a:  mov    -0x9c(%ebp),%eax
0865aace +0x0680:  mov    %edx,0x4(%esp)
0865aad2 +0x0684:  mov    %eax,(%esp)
0865aad5 +0x0687:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865aada +0x068c:  mov    0x8(%ebp),%eax
0865aadd +0x068f:  mov    %eax,(%esp)
0865aae0 +0x0692:  call   0822f894 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f3e
0865aae5 +0x0697:  mov    -0x9c(%ebp),%edx
0865aaeb +0x069d:  mov    %eax,0x4(%esp)
0865aaef +0x06a1:  mov    %edx,(%esp)
0865aaf2 +0x06a4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865aaf7 +0x06a9:  mov    0x8(%ebp),%eax
0865aafa +0x06ac:  mov    %eax,(%esp)
0865aafd +0x06af:  call   08375026 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeff2>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeff2
0865ab02 +0x06b4:  mov    -0x9c(%ebp),%edx
0865ab08 +0x06ba:  mov    %eax,0x4(%esp)
0865ab0c +0x06be:  mov    %edx,(%esp)
0865ab0f +0x06c1:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0865ab14 +0x06c6:  mov    0x8(%ebp),%eax
0865ab17 +0x06c9:  mov    %eax,(%esp)
0865ab1a +0x06cc:  call   08696ab6 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x330b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x330b
0865ab1f +0x06d1:  movzbl %al,%edx
0865ab22 +0x06d4:  mov    -0x9c(%ebp),%eax
0865ab28 +0x06da:  mov    %edx,0x4(%esp)
0865ab2c +0x06de:  mov    %eax,(%esp)
0865ab2f +0x06e1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865ab34 +0x06e6:  mov    0x8(%ebp),%eax
0865ab37 +0x06e9:  mov    %eax,(%esp)
0865ab3a +0x06ec:  call   08696ada <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x332f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x332f
0865ab3f +0x06f1:  movzwl %ax,%edx
0865ab42 +0x06f4:  mov    -0x9c(%ebp),%eax
0865ab48 +0x06fa:  mov    %edx,0x4(%esp)
0865ab4c +0x06fe:  mov    %eax,(%esp)
0865ab4f +0x0701:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0865ab54 +0x0706:  mov    0x8(%ebp),%eax
0865ab57 +0x0709:  mov    %eax,(%esp)
0865ab5a +0x070c:  call   0868bde4 <_ZN15CUserCharacInfo25get_charac_visible_valuesEv>  ; CUserCharacInfo::get_charac_visible_values()
0865ab5f +0x0711:  movsbl %al,%edx
0865ab62 +0x0714:  mov    -0x9c(%ebp),%eax
0865ab68 +0x071a:  mov    %edx,0x4(%esp)
0865ab6c +0x071e:  mov    %eax,(%esp)
0865ab6f +0x0721:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865ab74 +0x0726:  mov    0x8(%ebp),%eax
0865ab77 +0x0729:  mov    %eax,(%esp)
0865ab7a +0x072c:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0865ab7f +0x0731:  mov    %eax,%ebx
0865ab81 +0x0733:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0865ab86 +0x0738:  mov    %ebx,0x4(%esp)
0865ab8a +0x073c:  mov    %eax,(%esp)
0865ab8d +0x073f:  call   086cd908 <_ZN9GameWorld15IsForbiddenChatEPKc>  ; GameWorld::IsForbiddenChat(char const*)
0865ab92 +0x0744:  test   %al,%al
0865ab94 +0x0746:  je     0865acc3 <+0x875>
0865ab9a +0x074c:  movl   $0x0,-0x7c(%ebp)
0865aba1 +0x0753:  mov    0x8(%ebp),%eax
0865aba4 +0x0756:  mov    %eax,(%esp)
0865aba7 +0x0759:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0865abac +0x075e:  mov    %eax,%ebx
0865abae +0x0760:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0865abb3 +0x0765:  mov    %ebx,0x4(%esp)
0865abb7 +0x0769:  mov    %eax,(%esp)
0865abba +0x076c:  call   086ce73c <_ZN9GameWorld26GetLeftTimeOfForbiddenChatEPKc>  ; GameWorld::GetLeftTimeOfForbiddenChat(char const*)
0865abbf +0x0771:  mov    %eax,-0x7c(%ebp)
0865abc2 +0x0774:  cmpl   $0x0,-0x7c(%ebp)
0865abc6 +0x0778:  jne    0865abe6 <+0x798>
0865abc8 +0x077a:  mov    0x8(%ebp),%eax
0865abcb +0x077d:  mov    %eax,(%esp)
0865abce +0x0780:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0865abd3 +0x0785:  mov    %eax,%ebx
0865abd5 +0x0787:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0865abda +0x078c:  mov    %ebx,0x4(%esp)
0865abde +0x0790:  mov    %eax,(%esp)
0865abe1 +0x0793:  call   086cdc60 <_ZN9GameWorld10EnableChatEPKc>  ; GameWorld::EnableChat(char const*)
0865abe6 +0x0798:  mov    0x8(%ebp),%eax
0865abe9 +0x079b:  mov    %eax,(%esp)
0865abec +0x079e:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0865abf1 +0x07a3:  mov    %eax,%ebx
0865abf3 +0x07a5:  movl   $0x0,0xc(%esp)
0865abfb +0x07ad:  movl   $0x3154,0x8(%esp)
0865ac03 +0x07b5:  movl   $&_ZZN5CUser15make_basic_infoEPccE19__PRETTY_FUNCTION__,0x4(%esp)
0865ac0b +0x07bd:  lea    -0xdc(%ebp),%eax
0865ac11 +0x07c3:  mov    %eax,(%esp)
0865ac14 +0x07c6:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0865ac19 +0x07cb:  mov    -0x7c(%ebp),%eax
0865ac1c +0x07ce:  mov    %eax,0xc(%esp)
0865ac20 +0x07d2:  mov    %ebx,0x8(%esp)
0865ac24 +0x07d6:  movl   $"%s FCT1: %ld\n",0x4(%esp)
0865ac2c +0x07de:  lea    -0xdc(%ebp),%eax
0865ac32 +0x07e4:  mov    %eax,(%esp)
0865ac35 +0x07e7:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0865ac3a +0x07ec:  mov    -0x7c(%ebp),%eax
0865ac3d +0x07ef:  mov    %eax,-0x10c(%ebp)
0865ac43 +0x07f5:  mov    $0x45e7b273,%edx
0865ac48 +0x07fa:  mov    -0x10c(%ebp),%eax
0865ac4e +0x0800:  mul    %edx
0865ac50 +0x0802:  mov    %edx,%eax
0865ac52 +0x0804:  shr    $0xe,%eax
0865ac55 +0x0807:  mov    %eax,-0x7c(%ebp)
0865ac58 +0x080a:  mov    0x8(%ebp),%eax
0865ac5b +0x080d:  mov    %eax,(%esp)
0865ac5e +0x0810:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0865ac63 +0x0815:  mov    %eax,%ebx
0865ac65 +0x0817:  movl   $0x0,0xc(%esp)
0865ac6d +0x081f:  movl   $0x3156,0x8(%esp)
0865ac75 +0x0827:  movl   $&_ZZN5CUser15make_basic_infoEPccE19__PRETTY_FUNCTION__,0x4(%esp)
0865ac7d +0x082f:  lea    -0xcc(%ebp),%eax
0865ac83 +0x0835:  mov    %eax,(%esp)
0865ac86 +0x0838:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0865ac8b +0x083d:  mov    -0x7c(%ebp),%eax
0865ac8e +0x0840:  mov    %eax,0xc(%esp)
0865ac92 +0x0844:  mov    %ebx,0x8(%esp)
0865ac96 +0x0848:  movl   $"%s FCT2: %ld\n",0x4(%esp)
0865ac9e +0x0850:  lea    -0xcc(%ebp),%eax
0865aca4 +0x0856:  mov    %eax,(%esp)
0865aca7 +0x0859:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0865acac +0x085e:  mov    -0x7c(%ebp),%edx
0865acaf +0x0861:  mov    -0x9c(%ebp),%eax
0865acb5 +0x0867:  mov    %edx,0x4(%esp)
0865acb9 +0x086b:  mov    %eax,(%esp)
0865acbc +0x086e:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0865acc1 +0x0873:  jmp    0865acd9 <+0x88b>
0865acc3 +0x0875:  mov    -0x9c(%ebp),%eax
0865acc9 +0x087b:  movl   $0x0,0x4(%esp)
0865acd1 +0x0883:  mov    %eax,(%esp)
0865acd4 +0x0886:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0865acd9 +0x088b:  mov    0x8(%ebp),%eax
0865acdc +0x088e:  mov    %eax,(%esp)
0865acdf +0x0891:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0865ace4 +0x0896:  mov    %eax,%ebx
0865ace6 +0x0898:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0865aceb +0x089d:  mov    %ebx,0x4(%esp)
0865acef +0x08a1:  mov    %eax,(%esp)
0865acf2 +0x08a4:  call   086cdab4 <_ZN9GameWorld15IsForbiddenMoveEPKc>  ; GameWorld::IsForbiddenMove(char const*)
0865acf7 +0x08a9:  test   %al,%al
0865acf9 +0x08ab:  je     0865ae28 <+0x9da>
0865acff +0x08b1:  movl   $0x0,-0x78(%ebp)
0865ad06 +0x08b8:  mov    0x8(%ebp),%eax
0865ad09 +0x08bb:  mov    %eax,(%esp)
0865ad0c +0x08be:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0865ad11 +0x08c3:  mov    %eax,%ebx
0865ad13 +0x08c5:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0865ad18 +0x08ca:  mov    %ebx,0x4(%esp)
0865ad1c +0x08ce:  mov    %eax,(%esp)
0865ad1f +0x08d1:  call   086ce958 <_ZN9GameWorld26GetLeftTimeOfForbiddenMoveEPKc>  ; GameWorld::GetLeftTimeOfForbiddenMove(char const*)
0865ad24 +0x08d6:  mov    %eax,-0x78(%ebp)
0865ad27 +0x08d9:  cmpl   $0x0,-0x78(%ebp)
0865ad2b +0x08dd:  jne    0865ad4b <+0x8fd>
0865ad2d +0x08df:  mov    0x8(%ebp),%eax
0865ad30 +0x08e2:  mov    %eax,(%esp)
0865ad33 +0x08e5:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0865ad38 +0x08ea:  mov    %eax,%ebx
0865ad3a +0x08ec:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0865ad3f +0x08f1:  mov    %ebx,0x4(%esp)
0865ad43 +0x08f5:  mov    %eax,(%esp)
0865ad46 +0x08f8:  call   086cde5a <_ZN9GameWorld10EnableMoveEPKc>  ; GameWorld::EnableMove(char const*)
0865ad4b +0x08fd:  mov    0x8(%ebp),%eax
0865ad4e +0x0900:  mov    %eax,(%esp)
0865ad51 +0x0903:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0865ad56 +0x0908:  mov    %eax,%ebx
0865ad58 +0x090a:  movl   $0x0,0xc(%esp)
0865ad60 +0x0912:  movl   $0x3163,0x8(%esp)
0865ad68 +0x091a:  movl   $&_ZZN5CUser15make_basic_infoEPccE19__PRETTY_FUNCTION__,0x4(%esp)
0865ad70 +0x0922:  lea    -0xbc(%ebp),%eax
0865ad76 +0x0928:  mov    %eax,(%esp)
0865ad79 +0x092b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0865ad7e +0x0930:  mov    -0x78(%ebp),%eax
0865ad81 +0x0933:  mov    %eax,0xc(%esp)
0865ad85 +0x0937:  mov    %ebx,0x8(%esp)
0865ad89 +0x093b:  movl   $"%s FMT1: %ld\n",0x4(%esp)
0865ad91 +0x0943:  lea    -0xbc(%ebp),%eax
0865ad97 +0x0949:  mov    %eax,(%esp)
0865ad9a +0x094c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0865ad9f +0x0951:  mov    -0x78(%ebp),%ecx
0865ada2 +0x0954:  mov    %ecx,-0x10c(%ebp)
0865ada8 +0x095a:  mov    $0x45e7b273,%edx
0865adad +0x095f:  mov    -0x10c(%ebp),%eax
0865adb3 +0x0965:  mul    %edx
0865adb5 +0x0967:  mov    %edx,%eax
0865adb7 +0x0969:  shr    $0xe,%eax
0865adba +0x096c:  mov    %eax,-0x78(%ebp)
0865adbd +0x096f:  mov    0x8(%ebp),%eax
0865adc0 +0x0972:  mov    %eax,(%esp)
0865adc3 +0x0975:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0865adc8 +0x097a:  mov    %eax,%ebx
0865adca +0x097c:  movl   $0x0,0xc(%esp)
0865add2 +0x0984:  movl   $0x3165,0x8(%esp)
0865adda +0x098c:  movl   $&_ZZN5CUser15make_basic_infoEPccE19__PRETTY_FUNCTION__,0x4(%esp)
0865ade2 +0x0994:  lea    -0xac(%ebp),%eax
0865ade8 +0x099a:  mov    %eax,(%esp)
0865adeb +0x099d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0865adf0 +0x09a2:  mov    -0x78(%ebp),%eax
0865adf3 +0x09a5:  mov    %eax,0xc(%esp)
0865adf7 +0x09a9:  mov    %ebx,0x8(%esp)
0865adfb +0x09ad:  movl   $"%s FMT2: %ld\n",0x4(%esp)
0865ae03 +0x09b5:  lea    -0xac(%ebp),%eax
0865ae09 +0x09bb:  mov    %eax,(%esp)
0865ae0c +0x09be:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0865ae11 +0x09c3:  mov    -0x78(%ebp),%edx
0865ae14 +0x09c6:  mov    -0x9c(%ebp),%eax
0865ae1a +0x09cc:  mov    %edx,0x4(%esp)
0865ae1e +0x09d0:  mov    %eax,(%esp)
0865ae21 +0x09d3:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0865ae26 +0x09d8:  jmp    0865ae3e <+0x9f0>
0865ae28 +0x09da:  mov    -0x9c(%ebp),%eax
0865ae2e +0x09e0:  movl   $0x0,0x4(%esp)
0865ae36 +0x09e8:  mov    %eax,(%esp)
0865ae39 +0x09eb:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0865ae3e +0x09f0:  mov    0x8(%ebp),%eax
0865ae41 +0x09f3:  mov    %eax,(%esp)
0865ae44 +0x09f6:  call   0850d494 <_GLOBAL__I_g_emptySlot+0x3c9>  ; global constructors keyed to g_emptySlot+0x3c9
0865ae49 +0x09fb:  mov    %eax,%edx
0865ae4b +0x09fd:  mov    -0x9c(%ebp),%eax
0865ae51 +0x0a03:  mov    %edx,0x4(%esp)
0865ae55 +0x0a07:  mov    %eax,(%esp)
0865ae58 +0x0a0a:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0865ae5d +0x0a0f:  mov    0x8(%ebp),%eax
0865ae60 +0x0a12:  mov    %eax,(%esp)
0865ae63 +0x0a15:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0865ae68 +0x0a1a:  movzbl 0x75(%eax),%eax
0865ae6c +0x0a1e:  movzbl %al,%edx
0865ae6f +0x0a21:  mov    -0x9c(%ebp),%eax
0865ae75 +0x0a27:  mov    %edx,0x4(%esp)
0865ae79 +0x0a2b:  mov    %eax,(%esp)
0865ae7c +0x0a2e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865ae81 +0x0a33:  mov    0x8(%ebp),%eax
0865ae84 +0x0a36:  mov    %eax,(%esp)
0865ae87 +0x0a39:  call   08110cba <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1cc>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1cc
0865ae8c +0x0a3e:  movzwl %ax,%edx
0865ae8f +0x0a41:  mov    -0x9c(%ebp),%eax
0865ae95 +0x0a47:  mov    %edx,0x4(%esp)
0865ae99 +0x0a4b:  mov    %eax,(%esp)
0865ae9c +0x0a4e:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0865aea1 +0x0a53:  mov    0x8(%ebp),%eax
0865aea4 +0x0a56:  mov    %eax,(%esp)
0865aea7 +0x0a59:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0865aeac +0x0a5e:  mov    %eax,%edx
0865aeae +0x0a60:  mov    -0x9c(%ebp),%eax
0865aeb4 +0x0a66:  mov    %edx,0x4(%esp)
0865aeb8 +0x0a6a:  mov    %eax,(%esp)
0865aebb +0x0a6d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865aec0 +0x0a72:  mov    0x8(%ebp),%eax
0865aec3 +0x0a75:  mov    %eax,(%esp)
0865aec6 +0x0a78:  call   0822f9c8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5072>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5072
0865aecb +0x0a7d:  movswl %ax,%edx
0865aece +0x0a80:  mov    -0x9c(%ebp),%eax
0865aed4 +0x0a86:  mov    %edx,0x4(%esp)
0865aed8 +0x0a8a:  mov    %eax,(%esp)
0865aedb +0x0a8d:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0865aee0 +0x0a92:  mov    0x8(%ebp),%eax
0865aee3 +0x0a95:  mov    %eax,(%esp)
0865aee6 +0x0a98:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0865aeeb +0x0a9d:  mov    &_ZN10GlobalData15s_power_managerE,%edx
0865aef1 +0x0aa3:  mov    %eax,0x4(%esp)
0865aef5 +0x0aa7:  mov    %edx,(%esp)
0865aef8 +0x0aaa:  call   0847eba0 <_ZN13CPowerManager20GetRankingByCharacNoEj>  ; CPowerManager::GetRankingByCharacNo(unsigned int)
0865aefd +0x0aaf:  mov    %eax,-0x88(%ebp)
0865af03 +0x0ab5:  mov    -0x88(%ebp),%edx
0865af09 +0x0abb:  mov    -0x9c(%ebp),%eax
0865af0f +0x0ac1:  mov    %edx,0x4(%esp)
0865af13 +0x0ac5:  mov    %eax,(%esp)
0865af16 +0x0ac8:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865af1b +0x0acd:  mov    0x8(%ebp),%eax
0865af1e +0x0ad0:  mov    %eax,(%esp)
0865af21 +0x0ad3:  call   08696952 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x31a7>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x31a7
0865af26 +0x0ad8:  mov    %ax,-0x84(%ebp)
0865af2d +0x0adf:  movswl -0x84(%ebp),%edx
0865af34 +0x0ae6:  mov    -0x9c(%ebp),%eax
0865af3a +0x0aec:  mov    %edx,0x4(%esp)
0865af3e +0x0af0:  mov    %eax,(%esp)
0865af41 +0x0af3:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0865af46 +0x0af8:  mov    0x8(%ebp),%eax
0865af49 +0x0afb:  mov    %eax,(%esp)
0865af4c +0x0afe:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
0865af51 +0x0b03:  mov    %al,-0x82(%ebp)
0865af57 +0x0b09:  movsbl -0x82(%ebp),%edx
0865af5e +0x0b10:  mov    -0x9c(%ebp),%eax
0865af64 +0x0b16:  mov    %edx,0x4(%esp)
0865af68 +0x0b1a:  mov    %eax,(%esp)
0865af6b +0x0b1d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865af70 +0x0b22:  mov    0x8(%ebp),%eax
0865af73 +0x0b25:  mov    %eax,(%esp)
0865af76 +0x0b28:  call   085bfd66 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x12c4>  ; global constructors keyed to CParty::cMember::cMember()+0x12c4
0865af7b +0x0b2d:  test   %al,%al
0865af7d +0x0b2f:  je     0865af97 <+0xb49>
0865af7f +0x0b31:  mov    -0x9c(%ebp),%eax
0865af85 +0x0b37:  movl   $0x1,0x4(%esp)
0865af8d +0x0b3f:  mov    %eax,(%esp)
0865af90 +0x0b42:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865af95 +0x0b47:  jmp    0865afad <+0xb5f>
0865af97 +0x0b49:  mov    -0x9c(%ebp),%eax
0865af9d +0x0b4f:  movl   $0x0,0x4(%esp)
0865afa5 +0x0b57:  mov    %eax,(%esp)
0865afa8 +0x0b5a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865afad +0x0b5f:  mov    0x8(%ebp),%eax
0865afb0 +0x0b62:  mov    %eax,(%esp)
0865afb3 +0x0b65:  call   08696b4a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x339f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x339f
0865afb8 +0x0b6a:  mov    %al,-0x81(%ebp)
0865afbe +0x0b70:  mov    0x8(%ebp),%eax
0865afc1 +0x0b73:  mov    %eax,(%esp)
0865afc4 +0x0b76:  call   084ec474 <_GLOBAL__I__Z7getUserj+0x3426>  ; global constructors keyed to getUser(unsigned int)+0x3426
0865afc9 +0x0b7b:  movsbl %al,%edx
0865afcc +0x0b7e:  mov    -0x9c(%ebp),%eax
0865afd2 +0x0b84:  mov    %edx,0x4(%esp)
0865afd6 +0x0b88:  mov    %eax,(%esp)
0865afd9 +0x0b8b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865afde +0x0b90:  movsbl -0x81(%ebp),%edx
0865afe5 +0x0b97:  mov    -0x9c(%ebp),%eax
0865afeb +0x0b9d:  mov    %edx,0x4(%esp)
0865afef +0x0ba1:  mov    %eax,(%esp)
0865aff2 +0x0ba4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865aff7 +0x0ba9:  mov    0x8(%ebp),%eax
0865affa +0x0bac:  mov    %eax,(%esp)
0865affd +0x0baf:  call   0822fdce <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5478>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5478
0865b002 +0x0bb4:  jmp    0865c64d <+0x21ff>
0865b007 +0x0bb9:  mov    0x8(%ebp),%eax
0865b00a +0x0bbc:  mov    %eax,(%esp)
0865b00d +0x0bbf:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0865b012 +0x0bc4:  test   %eax,%eax
0865b014 +0x0bc6:  sete   %al
0865b017 +0x0bc9:  test   %al,%al
0865b019 +0x0bcb:  je     0865b051 <+0xc03>
0865b01b +0x0bcd:  movl   $"Error ENUM_USERINFO_ADDITION, getCurCharacR() == 0",0x10(%esp)
0865b023 +0x0bd5:  movl   $0x31c3,0xc(%esp)
0865b02b +0x0bdd:  movl   $&_ZZN5CUser15make_basic_infoEPccE19__PRETTY_FUNCTION__,0x8(%esp)
0865b033 +0x0be5:  movl   $"user.cpp",0x4(%esp)
0865b03b +0x0bed:  movl   $0x1,(%esp)
0865b042 +0x0bf4:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0865b047 +0x0bf9:  mov    $0x0,%eax
0865b04c +0x0bfe:  jmp    0865c652 <+0x2204>
0865b051 +0x0c03:  mov    0x8(%ebp),%eax
0865b054 +0x0c06:  mov    %eax,(%esp)
0865b057 +0x0c09:  call   0822fdb6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5460>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5460
0865b05c +0x0c0e:  mov    0x8(%ebp),%eax
0865b05f +0x0c11:  movzwl 0x704a8(%eax),%eax
0865b066 +0x0c18:  movzwl %ax,%edx
0865b069 +0x0c1b:  mov    -0x9c(%ebp),%eax
0865b06f +0x0c21:  mov    %edx,0x4(%esp)
0865b073 +0x0c25:  mov    %eax,(%esp)
0865b076 +0x0c28:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0865b07b +0x0c2d:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0865b080 +0x0c32:  mov    %eax,(%esp)
0865b083 +0x0c35:  call   084ed128 <_GLOBAL__I__Z7getUserj+0x40da>  ; global constructors keyed to getUser(unsigned int)+0x40da
0865b088 +0x0c3a:  test   %al,%al
0865b08a +0x0c3c:  je     0865b0a3 <+0xc55>
0865b08c +0x0c3e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0865b091 +0x0c43:  movl   $0x55,0x4(%esp)
0865b099 +0x0c4b:  mov    %eax,(%esp)
0865b09c +0x0c4e:  call   08360442 <_ZNK12CDataManager13get_level_expEi>  ; CDataManager::get_level_exp(int) const
0865b0a1 +0x0c53:  jmp    0865b0ae <+0xc60>
0865b0a3 +0x0c55:  mov    0x8(%ebp),%eax
0865b0a6 +0x0c58:  mov    %eax,(%esp)
0865b0a9 +0x0c5b:  call   084ec05c <_GLOBAL__I__Z7getUserj+0x300e>  ; global constructors keyed to getUser(unsigned int)+0x300e
0865b0ae +0x0c60:  mov    -0x9c(%ebp),%edx
0865b0b4 +0x0c66:  mov    %eax,0x4(%esp)
0865b0b8 +0x0c6a:  mov    %edx,(%esp)
0865b0bb +0x0c6d:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0865b0c0 +0x0c72:  mov    -0x9c(%ebp),%eax
0865b0c6 +0x0c78:  mov    %eax,0x4(%esp)
0865b0ca +0x0c7c:  mov    0x8(%ebp),%eax
0865b0cd +0x0c7f:  mov    %eax,(%esp)
0865b0d0 +0x0c82:  call   08659faa <_ZN5CUser16make_charac_statER11PacketGuard>  ; CUser::make_charac_stat(PacketGuard&)
0865b0d5 +0x0c87:  mov    0x8(%ebp),%eax
0865b0d8 +0x0c8a:  mov    %eax,(%esp)
0865b0db +0x0c8d:  call   08696afe <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3353>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3353
0865b0e0 +0x0c92:  movzbl %al,%edx
0865b0e3 +0x0c95:  mov    -0x9c(%ebp),%eax
0865b0e9 +0x0c9b:  mov    %edx,0x4(%esp)
0865b0ed +0x0c9f:  mov    %eax,(%esp)
0865b0f0 +0x0ca2:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865b0f5 +0x0ca7:  movsbl -0xfc(%ebp),%ebx
0865b0fc +0x0cae:  mov    0x8(%ebp),%eax
0865b0ff +0x0cb1:  mov    %eax,(%esp)
0865b102 +0x0cb4:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0865b107 +0x0cb9:  movl   $0x0,0x10(%esp)
0865b10f +0x0cc1:  mov    %ebx,0xc(%esp)
0865b113 +0x0cc5:  movl   $0x1,0x8(%esp)
0865b11b +0x0ccd:  mov    -0x9c(%ebp),%edx
0865b121 +0x0cd3:  mov    %edx,0x4(%esp)
0865b125 +0x0cd7:  mov    %eax,(%esp)
0865b128 +0x0cda:  call   084fe2e2 <_ZNK10CInventory13MakeEquipListEPvb13ENUM_USERINFO14ENUM_EQUIPSLOT>  ; CInventory::MakeEquipList(void*, bool, ENUM_USERINFO, ENUM_EQUIPSLOT) const
0865b12d +0x0cdf:  mov    0x8(%ebp),%eax
0865b130 +0x0ce2:  mov    %eax,(%esp)
0865b133 +0x0ce5:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
0865b138 +0x0cea:  mov    %eax,%edx
0865b13a +0x0cec:  mov    -0x9c(%ebp),%eax
0865b140 +0x0cf2:  mov    %edx,0x4(%esp)
0865b144 +0x0cf6:  mov    %eax,(%esp)
0865b147 +0x0cf9:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865b14c +0x0cfe:  mov    0x8(%ebp),%eax
0865b14f +0x0d01:  mov    %eax,(%esp)
0865b152 +0x0d04:  call   08230164 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x580e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x580e
0865b157 +0x0d09:  mov    %eax,-0x74(%ebp)
0865b15a +0x0d0c:  mov    -0x74(%ebp),%eax
0865b15d +0x0d0f:  movzbl 0x44(%eax),%eax
0865b161 +0x0d13:  movzbl %al,%eax
0865b164 +0x0d16:  mov    %eax,-0x70(%ebp)
0865b167 +0x0d19:  mov    -0x9c(%ebp),%eax
0865b16d +0x0d1f:  mov    %eax,(%esp)
0865b170 +0x0d22:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
0865b175 +0x0d27:  mov    %eax,-0xe0(%ebp)
0865b17b +0x0d2d:  movl   $0x0,-0x6c(%ebp)
0865b182 +0x0d34:  mov    -0x9c(%ebp),%eax
0865b188 +0x0d3a:  movl   $0x0,0x4(%esp)
0865b190 +0x0d42:  mov    %eax,(%esp)
0865b193 +0x0d45:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865b198 +0x0d4a:  movl   $0x0,-0x64(%ebp)
0865b19f +0x0d51:  jmp    0865b21e <+0xdd0>
0865b1a1 +0x0d53:  mov    0x8(%ebp),%eax
0865b1a4 +0x0d56:  mov    %eax,(%esp)
0865b1a7 +0x0d59:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0865b1ac +0x0d5e:  mov    -0x64(%ebp),%edx
0865b1af +0x0d61:  add    $0x20,%edx
0865b1b2 +0x0d64:  movzbl 0x6(%eax,%edx,2),%eax
0865b1b7 +0x0d69:  test   %al,%al
0865b1b9 +0x0d6b:  setne  %al
0865b1bc +0x0d6e:  test   %al,%al
0865b1be +0x0d70:  je     0865b21a <+0xdcc>
0865b1c0 +0x0d72:  mov    0x8(%ebp),%eax
0865b1c3 +0x0d75:  mov    %eax,(%esp)
0865b1c6 +0x0d78:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0865b1cb +0x0d7d:  mov    -0x64(%ebp),%edx
0865b1ce +0x0d80:  add    $0x20,%edx
0865b1d1 +0x0d83:  movzbl 0x6(%eax,%edx,2),%eax
0865b1d6 +0x0d88:  movzbl %al,%edx
0865b1d9 +0x0d8b:  mov    -0x9c(%ebp),%eax
0865b1df +0x0d91:  mov    %edx,0x4(%esp)
0865b1e3 +0x0d95:  mov    %eax,(%esp)
0865b1e6 +0x0d98:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865b1eb +0x0d9d:  mov    0x8(%ebp),%eax
0865b1ee +0x0da0:  mov    %eax,(%esp)
0865b1f1 +0x0da3:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0865b1f6 +0x0da8:  mov    -0x64(%ebp),%edx
0865b1f9 +0x0dab:  add    $0x20,%edx
0865b1fc +0x0dae:  movzbl 0x7(%eax,%edx,2),%eax
0865b201 +0x0db3:  movsbl %al,%edx
0865b204 +0x0db6:  mov    -0x9c(%ebp),%eax
0865b20a +0x0dbc:  mov    %edx,0x4(%esp)
0865b20e +0x0dc0:  mov    %eax,(%esp)
0865b211 +0x0dc3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865b216 +0x0dc8:  addl   $0x1,-0x6c(%ebp)
0865b21a +0x0dcc:  addl   $0x1,-0x64(%ebp)
0865b21e +0x0dd0:  cmpl   $0xcb,-0x64(%ebp)
0865b225 +0x0dd7:  setle  %al
0865b228 +0x0dda:  test   %al,%al
0865b22a +0x0ddc:  jne    0865b1a1 <+0xd53>
0865b230 +0x0de2:  movl   $0x0,-0x60(%ebp)
0865b237 +0x0de9:  jmp    0865b2e2 <+0xe94>
0865b23c +0x0dee:  mov    0x8(%ebp),%eax
0865b23f +0x0df1:  mov    %eax,(%esp)
0865b242 +0x0df4:  call   0822f548 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4bf2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4bf2
0865b247 +0x0df9:  test   %al,%al
0865b249 +0x0dfb:  je     0865b27e <+0xe30>
0865b24b +0x0dfd:  mov    0x8(%ebp),%eax
0865b24e +0x0e00:  mov    %eax,(%esp)
0865b251 +0x0e03:  call   0822f548 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4bf2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4bf2
0865b256 +0x0e08:  test   %al,%al
0865b258 +0x0e0a:  je     0865b27e <+0xe30>
0865b25a +0x0e0c:  mov    -0x60(%ebp),%edx
0865b25d +0x0e0f:  mov    -0x74(%ebp),%ecx
0865b260 +0x0e12:  mov    %edx,%eax
0865b262 +0x0e14:  shl    $0x2,%eax
0865b265 +0x0e17:  add    %edx,%eax
0865b267 +0x0e19:  lea    (%ecx,%eax,1),%eax
0865b26a +0x0e1c:  add    $0x40,%eax
0865b26d +0x0e1f:  mov    0x5(%eax),%eax
0865b270 +0x0e22:  cmp    $0xc7,%eax
0865b275 +0x0e27:  jle    0865b27e <+0xe30>
0865b277 +0x0e29:  mov    $0x1,%eax
0865b27c +0x0e2e:  jmp    0865b283 <+0xe35>
0865b27e +0x0e30:  mov    $0x0,%eax
0865b283 +0x0e35:  test   %al,%al
0865b285 +0x0e37:  je     0865b2de <+0xe90>
0865b287 +0x0e39:  mov    -0x60(%ebp),%edx
0865b28a +0x0e3c:  mov    -0x74(%ebp),%ecx
0865b28d +0x0e3f:  mov    %edx,%eax
0865b28f +0x0e41:  shl    $0x2,%eax
0865b292 +0x0e44:  add    %edx,%eax
0865b294 +0x0e46:  lea    (%ecx,%eax,1),%eax
0865b297 +0x0e49:  add    $0x40,%eax
0865b29a +0x0e4c:  mov    0x5(%eax),%edx
0865b29d +0x0e4f:  mov    -0x9c(%ebp),%eax
0865b2a3 +0x0e55:  mov    %edx,0x4(%esp)
0865b2a7 +0x0e59:  mov    %eax,(%esp)
0865b2aa +0x0e5c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865b2af +0x0e61:  mov    -0x60(%ebp),%edx
0865b2b2 +0x0e64:  mov    -0x74(%ebp),%ecx
0865b2b5 +0x0e67:  mov    %edx,%eax
0865b2b7 +0x0e69:  shl    $0x2,%eax
0865b2ba +0x0e6c:  add    %edx,%eax
0865b2bc +0x0e6e:  lea    (%ecx,%eax,1),%eax
0865b2bf +0x0e71:  add    $0x49,%eax
0865b2c2 +0x0e74:  movzbl (%eax),%eax
0865b2c5 +0x0e77:  movsbl %al,%edx
0865b2c8 +0x0e7a:  mov    -0x9c(%ebp),%eax
0865b2ce +0x0e80:  mov    %edx,0x4(%esp)
0865b2d2 +0x0e84:  mov    %eax,(%esp)
0865b2d5 +0x0e87:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865b2da +0x0e8c:  addl   $0x1,-0x6c(%ebp)
0865b2de +0x0e90:  addl   $0x1,-0x60(%ebp)
0865b2e2 +0x0e94:  mov    -0x60(%ebp),%eax
0865b2e5 +0x0e97:  cmp    -0x70(%ebp),%eax
0865b2e8 +0x0e9a:  setl   %al
0865b2eb +0x0e9d:  test   %al,%al
0865b2ed +0x0e9f:  jne    0865b23c <+0xdee>
0865b2f3 +0x0ea5:  mov    -0x9c(%ebp),%eax
0865b2f9 +0x0eab:  mov    -0x6c(%ebp),%edx
0865b2fc +0x0eae:  mov    %edx,0x8(%esp)
0865b300 +0x0eb2:  lea    -0xe0(%ebp),%edx
0865b306 +0x0eb8:  mov    %edx,0x4(%esp)
0865b30a +0x0ebc:  mov    %eax,(%esp)
0865b30d +0x0ebf:  call   08110b28 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x3a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x3a
0865b312 +0x0ec4:  mov    -0x9c(%ebp),%eax
0865b318 +0x0eca:  mov    %eax,(%esp)
0865b31b +0x0ecd:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
0865b320 +0x0ed2:  mov    %eax,-0xe0(%ebp)
0865b326 +0x0ed8:  movl   $0x0,-0x6c(%ebp)
0865b32d +0x0edf:  mov    -0x9c(%ebp),%eax
0865b333 +0x0ee5:  movl   $0x0,0x4(%esp)
0865b33b +0x0eed:  mov    %eax,(%esp)
0865b33e +0x0ef0:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865b343 +0x0ef5:  movl   $0x0,-0x5c(%ebp)
0865b34a +0x0efc:  jmp    0865b3d5 <+0xf87>
0865b34f +0x0f01:  mov    0x8(%ebp),%eax
0865b352 +0x0f04:  mov    %eax,(%esp)
0865b355 +0x0f07:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0865b35a +0x0f0c:  mov    -0x5c(%ebp),%edx
0865b35d +0x0f0f:  add    $0xe8,%edx
0865b363 +0x0f15:  movzbl 0xe(%eax,%edx,2),%eax
0865b368 +0x0f1a:  test   %al,%al
0865b36a +0x0f1c:  setne  %al
0865b36d +0x0f1f:  test   %al,%al
0865b36f +0x0f21:  je     0865b3d1 <+0xf83>
0865b371 +0x0f23:  mov    0x8(%ebp),%eax
0865b374 +0x0f26:  mov    %eax,(%esp)
0865b377 +0x0f29:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0865b37c +0x0f2e:  mov    -0x5c(%ebp),%edx
0865b37f +0x0f31:  add    $0xe8,%edx
0865b385 +0x0f37:  movzbl 0xe(%eax,%edx,2),%eax
0865b38a +0x0f3c:  movzbl %al,%edx
0865b38d +0x0f3f:  mov    -0x9c(%ebp),%eax
0865b393 +0x0f45:  mov    %edx,0x4(%esp)
0865b397 +0x0f49:  mov    %eax,(%esp)
0865b39a +0x0f4c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865b39f +0x0f51:  mov    0x8(%ebp),%eax
0865b3a2 +0x0f54:  mov    %eax,(%esp)
0865b3a5 +0x0f57:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0865b3aa +0x0f5c:  mov    -0x5c(%ebp),%edx
0865b3ad +0x0f5f:  add    $0xe8,%edx
0865b3b3 +0x0f65:  movzbl 0xf(%eax,%edx,2),%eax
0865b3b8 +0x0f6a:  movsbl %al,%edx
0865b3bb +0x0f6d:  mov    -0x9c(%ebp),%eax
0865b3c1 +0x0f73:  mov    %edx,0x4(%esp)
0865b3c5 +0x0f77:  mov    %eax,(%esp)
0865b3c8 +0x0f7a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865b3cd +0x0f7f:  addl   $0x1,-0x6c(%ebp)
0865b3d1 +0x0f83:  addl   $0x1,-0x5c(%ebp)
0865b3d5 +0x0f87:  cmpl   $0xcb,-0x5c(%ebp)
0865b3dc +0x0f8e:  setle  %al
0865b3df +0x0f91:  test   %al,%al
0865b3e1 +0x0f93:  jne    0865b34f <+0xf01>
0865b3e7 +0x0f99:  movl   $0x0,-0x58(%ebp)
0865b3ee +0x0fa0:  jmp    0865b499 <+0x104b>
0865b3f3 +0x0fa5:  mov    0x8(%ebp),%eax
0865b3f6 +0x0fa8:  mov    %eax,(%esp)
0865b3f9 +0x0fab:  call   0822f548 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4bf2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4bf2
0865b3fe +0x0fb0:  test   %al,%al
0865b400 +0x0fb2:  je     0865b435 <+0xfe7>
0865b402 +0x0fb4:  mov    0x8(%ebp),%eax
0865b405 +0x0fb7:  mov    %eax,(%esp)
0865b408 +0x0fba:  call   0822f548 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4bf2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4bf2
0865b40d +0x0fbf:  test   %al,%al
0865b40f +0x0fc1:  je     0865b435 <+0xfe7>
0865b411 +0x0fc3:  mov    -0x58(%ebp),%edx
0865b414 +0x0fc6:  mov    -0x74(%ebp),%ecx
0865b417 +0x0fc9:  mov    %edx,%eax
0865b419 +0x0fcb:  shl    $0x2,%eax
0865b41c +0x0fce:  add    %edx,%eax
0865b41e +0x0fd0:  lea    (%ecx,%eax,1),%eax
0865b421 +0x0fd3:  add    $0x40,%eax
0865b424 +0x0fd6:  mov    0x5(%eax),%eax
0865b427 +0x0fd9:  cmp    $0xc7,%eax
0865b42c +0x0fde:  jle    0865b435 <+0xfe7>
0865b42e +0x0fe0:  mov    $0x1,%eax
0865b433 +0x0fe5:  jmp    0865b43a <+0xfec>
0865b435 +0x0fe7:  mov    $0x0,%eax
0865b43a +0x0fec:  test   %al,%al
0865b43c +0x0fee:  je     0865b495 <+0x1047>
0865b43e +0x0ff0:  mov    -0x58(%ebp),%edx
0865b441 +0x0ff3:  mov    -0x74(%ebp),%ecx
0865b444 +0x0ff6:  mov    %edx,%eax
0865b446 +0x0ff8:  shl    $0x2,%eax
0865b449 +0x0ffb:  add    %edx,%eax
0865b44b +0x0ffd:  lea    (%ecx,%eax,1),%eax
0865b44e +0x1000:  add    $0x40,%eax
0865b451 +0x1003:  mov    0x5(%eax),%edx
0865b454 +0x1006:  mov    -0x9c(%ebp),%eax
0865b45a +0x100c:  mov    %edx,0x4(%esp)
0865b45e +0x1010:  mov    %eax,(%esp)
0865b461 +0x1013:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865b466 +0x1018:  mov    -0x58(%ebp),%edx
0865b469 +0x101b:  mov    -0x74(%ebp),%ecx
0865b46c +0x101e:  mov    %edx,%eax
0865b46e +0x1020:  shl    $0x2,%eax
0865b471 +0x1023:  add    %edx,%eax
0865b473 +0x1025:  lea    (%ecx,%eax,1),%eax
0865b476 +0x1028:  add    $0x49,%eax
0865b479 +0x102b:  movzbl (%eax),%eax
0865b47c +0x102e:  movsbl %al,%edx
0865b47f +0x1031:  mov    -0x9c(%ebp),%eax
0865b485 +0x1037:  mov    %edx,0x4(%esp)
0865b489 +0x103b:  mov    %eax,(%esp)
0865b48c +0x103e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865b491 +0x1043:  addl   $0x1,-0x6c(%ebp)
0865b495 +0x1047:  addl   $0x1,-0x58(%ebp)
0865b499 +0x104b:  mov    -0x58(%ebp),%eax
0865b49c +0x104e:  cmp    -0x70(%ebp),%eax
0865b49f +0x1051:  setl   %al
0865b4a2 +0x1054:  test   %al,%al
0865b4a4 +0x1056:  jne    0865b3f3 <+0xfa5>
0865b4aa +0x105c:  mov    -0x9c(%ebp),%eax
0865b4b0 +0x1062:  mov    -0x6c(%ebp),%edx
0865b4b3 +0x1065:  mov    %edx,0x8(%esp)
0865b4b7 +0x1069:  lea    -0xe0(%ebp),%edx
0865b4bd +0x106f:  mov    %edx,0x4(%esp)
0865b4c1 +0x1073:  mov    %eax,(%esp)
0865b4c4 +0x1076:  call   08110b28 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x3a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x3a
0865b4c9 +0x107b:  mov    0x8(%ebp),%eax
0865b4cc +0x107e:  mov    %eax,(%esp)
0865b4cf +0x1081:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0865b4d4 +0x1086:  mov    %eax,(%esp)
0865b4d7 +0x1089:  call   081b7408 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x87>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x87
0865b4dc +0x108e:  mov    %eax,(%esp)
0865b4df +0x1091:  call   0833a6b0 <_ZNK13user_creature12CCreatureMgr23GetEquipedCreatureLevelEv>  ; user_creature::CCreatureMgr::GetEquipedCreatureLevel() const
0865b4e4 +0x1096:  mov    -0x9c(%ebp),%edx
0865b4ea +0x109c:  mov    %eax,0x4(%esp)
0865b4ee +0x10a0:  mov    %edx,(%esp)
0865b4f1 +0x10a3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865b4f6 +0x10a8:  mov    -0x9c(%ebp),%eax
0865b4fc +0x10ae:  movl   $0x6,0x4(%esp)
0865b504 +0x10b6:  mov    %eax,(%esp)
0865b507 +0x10b9:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865b50c +0x10be:  movl   $0x0,-0x54(%ebp)
0865b513 +0x10c5:  jmp    0865b543 <+0x10f5>
0865b515 +0x10c7:  mov    -0x54(%ebp),%eax
0865b518 +0x10ca:  movsbl %al,%edx
0865b51b +0x10cd:  mov    0x8(%ebp),%eax
0865b51e +0x10d0:  mov    %edx,0x4(%esp)
0865b522 +0x10d4:  mov    %eax,(%esp)
0865b525 +0x10d7:  call   085bf9d8 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xf36>  ; global constructors keyed to CParty::cMember::cMember()+0xf36
0865b52a +0x10dc:  movsbl %al,%edx
0865b52d +0x10df:  mov    -0x9c(%ebp),%eax
0865b533 +0x10e5:  mov    %edx,0x4(%esp)
0865b537 +0x10e9:  mov    %eax,(%esp)
0865b53a +0x10ec:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865b53f +0x10f1:  addl   $0x1,-0x54(%ebp)
0865b543 +0x10f5:  cmpl   $0x5,-0x54(%ebp)
0865b547 +0x10f9:  setle  %al
0865b54a +0x10fc:  test   %al,%al
0865b54c +0x10fe:  jne    0865b515 <+0x10c7>
0865b54e +0x1100:  mov    &_ZN10GlobalData19s_revengeDungeonMgrE,%eax
0865b553 +0x1105:  mov    %eax,(%esp)
0865b556 +0x1108:  call   08234ff6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa6a0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa6a0
0865b55b +0x110d:  test   %al,%al
0865b55d +0x110f:  je     0865b581 <+0x1133>
0865b55f +0x1111:  mov    0x8(%ebp),%eax
0865b562 +0x1114:  mov    %eax,(%esp)
0865b565 +0x1117:  call   0822f78a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4e34>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4e34
0865b56a +0x111c:  movzbl %al,%edx
0865b56d +0x111f:  mov    -0x9c(%ebp),%eax
0865b573 +0x1125:  mov    %edx,0x4(%esp)
0865b577 +0x1129:  mov    %eax,(%esp)
0865b57a +0x112c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865b57f +0x1131:  jmp    0865b597 <+0x1149>
0865b581 +0x1133:  mov    -0x9c(%ebp),%eax
0865b587 +0x1139:  movl   $0x0,0x4(%esp)
0865b58f +0x1141:  mov    %eax,(%esp)
0865b592 +0x1144:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865b597 +0x1149:  mov    0x8(%ebp),%eax
0865b59a +0x114c:  movl   $0x2,0x4(%esp)
0865b5a2 +0x1154:  mov    %eax,(%esp)
0865b5a5 +0x1157:  call   08696176 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x29cb>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x29cb
0865b5aa +0x115c:  movsbl %al,%edx
0865b5ad +0x115f:  mov    -0x9c(%ebp),%eax
0865b5b3 +0x1165:  mov    %edx,0x4(%esp)
0865b5b7 +0x1169:  mov    %eax,(%esp)
0865b5ba +0x116c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865b5bf +0x1171:  movl   $0xd,0x4(%esp)
0865b5c7 +0x1179:  mov    0x8(%ebp),%eax
0865b5ca +0x117c:  mov    %eax,(%esp)
0865b5cd +0x117f:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
0865b5d2 +0x1184:  mov    %eax,-0x50(%ebp)
0865b5d5 +0x1187:  mov    -0x50(%ebp),%eax
0865b5d8 +0x118a:  mov    %eax,(%esp)
0865b5db +0x118d:  call   08643872 <_ZNK13TOD_UserState13getEnterCountEv>  ; TOD_UserState::getEnterCount() const
0865b5e0 +0x1192:  mov    -0x9c(%ebp),%edx
0865b5e6 +0x1198:  mov    %eax,0x4(%esp)
0865b5ea +0x119c:  mov    %edx,(%esp)
0865b5ed +0x119f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865b5f2 +0x11a4:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0865b5f7 +0x11a9:  movl   $0x1,0x4(%esp)
0865b5ff +0x11b1:  mov    %eax,(%esp)
0865b602 +0x11b4:  call   0822b638 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xce2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xce2
0865b607 +0x11b9:  movsbl %al,%eax
0865b60a +0x11bc:  mov    %eax,-0x4c(%ebp)
0865b60d +0x11bf:  movl   $0x1,0x4(%esp)
0865b615 +0x11c7:  mov    0x8(%ebp),%eax
0865b618 +0x11ca:  mov    %eax,(%esp)
0865b61b +0x11cd:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
0865b620 +0x11d2:  mov    %eax,(%esp)
0865b623 +0x11d5:  call   085bfe88 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x13e6>  ; global constructors keyed to CParty::cMember::cMember()+0x13e6
0865b628 +0x11da:  mov    %eax,-0x48(%ebp)
0865b62b +0x11dd:  mov    -0x48(%ebp),%eax
0865b62e +0x11e0:  mov    -0x4c(%ebp),%edx
0865b631 +0x11e3:  mov    %edx,%ecx
0865b633 +0x11e5:  sub    %eax,%ecx
0865b635 +0x11e7:  mov    %ecx,%eax
0865b637 +0x11e9:  test   %eax,%eax
0865b639 +0x11eb:  js     0865b657 <+0x1209>
0865b63b +0x11ed:  mov    -0x48(%ebp),%eax
0865b63e +0x11f0:  mov    -0x4c(%ebp),%edx
0865b641 +0x11f3:  sub    %eax,%edx
0865b643 +0x11f5:  mov    -0x9c(%ebp),%eax
0865b649 +0x11fb:  mov    %edx,0x4(%esp)
0865b64d +0x11ff:  mov    %eax,(%esp)
0865b650 +0x1202:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865b655 +0x1207:  jmp    0865b66d <+0x121f>
0865b657 +0x1209:  mov    -0x9c(%ebp),%eax
0865b65d +0x120f:  movl   $0x0,0x4(%esp)
0865b665 +0x1217:  mov    %eax,(%esp)
0865b668 +0x121a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865b66d +0x121f:  movl   $0xb,0x4(%esp)
0865b675 +0x1227:  mov    0x8(%ebp),%eax
0865b678 +0x122a:  mov    %eax,(%esp)
0865b67b +0x122d:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
0865b680 +0x1232:  mov    %eax,-0x68(%ebp)
0865b683 +0x1235:  movl   $0x0,0x8(%esp)
0865b68b +0x123d:  mov    -0x9c(%ebp),%eax
0865b691 +0x1243:  mov    %eax,0x4(%esp)
0865b695 +0x1247:  mov    -0x68(%ebp),%eax
0865b698 +0x124a:  mov    %eax,(%esp)
0865b69b +0x124d:  call   085ef5dc <_ZN10CQuestShop27makePacket_BuyingStatusListER11PacketGuardb>  ; CQuestShop::makePacket_BuyingStatusList(PacketGuard&, bool)
0865b6a0 +0x1252:  mov    0x8(%ebp),%eax
0865b6a3 +0x1255:  mov    %eax,(%esp)
0865b6a6 +0x1258:  call   0868fe02 <_ZN5CUser14GetManageLevelEv>  ; CUser::GetManageLevel()
0865b6ab +0x125d:  mov    -0x9c(%ebp),%edx
0865b6b1 +0x1263:  mov    %eax,0x4(%esp)
0865b6b5 +0x1267:  mov    %edx,(%esp)
0865b6b8 +0x126a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865b6bd +0x126f:  mov    0x8(%ebp),%eax
0865b6c0 +0x1272:  mov    %eax,(%esp)
0865b6c3 +0x1275:  call   0822fdce <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5478>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5478
0865b6c8 +0x127a:  jmp    0865c64d <+0x21ff>
0865b6cd +0x127f:  mov    0x8(%ebp),%eax
0865b6d0 +0x1282:  mov    %eax,(%esp)
0865b6d3 +0x1285:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0865b6d8 +0x128a:  test   %eax,%eax
0865b6da +0x128c:  sete   %al
0865b6dd +0x128f:  test   %al,%al
0865b6df +0x1291:  je     0865b717 <+0x12c9>
0865b6e1 +0x1293:  movl   $"Error ENUM_USERINFO_OTHER_CHARACTER, getCurCharacR() == 0",0x10(%esp)
0865b6e9 +0x129b:  movl   $0x328c,0xc(%esp)
0865b6f1 +0x12a3:  movl   $&_ZZN5CUser15make_basic_infoEPccE19__PRETTY_FUNCTION__,0x8(%esp)
0865b6f9 +0x12ab:  movl   $"user.cpp",0x4(%esp)
0865b701 +0x12b3:  movl   $0x1,(%esp)
0865b708 +0x12ba:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0865b70d +0x12bf:  mov    $0x0,%eax
0865b712 +0x12c4:  jmp    0865c652 <+0x2204>
0865b717 +0x12c9:  mov    0x8(%ebp),%eax
0865b71a +0x12cc:  mov    %eax,(%esp)
0865b71d +0x12cf:  call   0822fdb6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5460>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5460
0865b722 +0x12d4:  mov    0x8(%ebp),%eax
0865b725 +0x12d7:  movzwl 0x704a8(%eax),%eax
0865b72c +0x12de:  movzwl %ax,%edx
0865b72f +0x12e1:  mov    -0x9c(%ebp),%eax
0865b735 +0x12e7:  mov    %edx,0x4(%esp)
0865b739 +0x12eb:  mov    %eax,(%esp)
0865b73c +0x12ee:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0865b741 +0x12f3:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0865b746 +0x12f8:  mov    %eax,(%esp)
0865b749 +0x12fb:  call   084ed128 <_GLOBAL__I__Z7getUserj+0x40da>  ; global constructors keyed to getUser(unsigned int)+0x40da
0865b74e +0x1300:  test   %al,%al
0865b750 +0x1302:  je     0865b769 <+0x131b>
0865b752 +0x1304:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0865b757 +0x1309:  movl   $0x55,0x4(%esp)
0865b75f +0x1311:  mov    %eax,(%esp)
0865b762 +0x1314:  call   08360442 <_ZNK12CDataManager13get_level_expEi>  ; CDataManager::get_level_exp(int) const
0865b767 +0x1319:  jmp    0865b774 <+0x1326>
0865b769 +0x131b:  mov    0x8(%ebp),%eax
0865b76c +0x131e:  mov    %eax,(%esp)
0865b76f +0x1321:  call   084ec05c <_GLOBAL__I__Z7getUserj+0x300e>  ; global constructors keyed to getUser(unsigned int)+0x300e
0865b774 +0x1326:  mov    -0x9c(%ebp),%edx
0865b77a +0x132c:  mov    %eax,0x4(%esp)
0865b77e +0x1330:  mov    %edx,(%esp)
0865b781 +0x1333:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0865b786 +0x1338:  mov    -0x9c(%ebp),%eax
0865b78c +0x133e:  mov    %eax,0x4(%esp)
0865b790 +0x1342:  mov    0x8(%ebp),%eax
0865b793 +0x1345:  mov    %eax,(%esp)
0865b796 +0x1348:  call   08659faa <_ZN5CUser16make_charac_statER11PacketGuard>  ; CUser::make_charac_stat(PacketGuard&)
0865b79b +0x134d:  mov    0x8(%ebp),%eax
0865b79e +0x1350:  mov    %eax,(%esp)
0865b7a1 +0x1353:  call   08696afe <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3353>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3353
0865b7a6 +0x1358:  movzbl %al,%edx
0865b7a9 +0x135b:  mov    -0x9c(%ebp),%eax
0865b7af +0x1361:  mov    %edx,0x4(%esp)
0865b7b3 +0x1365:  mov    %eax,(%esp)
0865b7b6 +0x1368:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865b7bb +0x136d:  movsbl -0xfc(%ebp),%ebx
0865b7c2 +0x1374:  mov    0x8(%ebp),%eax
0865b7c5 +0x1377:  mov    %eax,(%esp)
0865b7c8 +0x137a:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0865b7cd +0x137f:  movl   $0x0,0x10(%esp)
0865b7d5 +0x1387:  mov    %ebx,0xc(%esp)
0865b7d9 +0x138b:  movl   $0x1,0x8(%esp)
0865b7e1 +0x1393:  mov    -0x9c(%ebp),%edx
0865b7e7 +0x1399:  mov    %edx,0x4(%esp)
0865b7eb +0x139d:  mov    %eax,(%esp)
0865b7ee +0x13a0:  call   084fe2e2 <_ZNK10CInventory13MakeEquipListEPvb13ENUM_USERINFO14ENUM_EQUIPSLOT>  ; CInventory::MakeEquipList(void*, bool, ENUM_USERINFO, ENUM_EQUIPSLOT) const
0865b7f3 +0x13a5:  mov    0x8(%ebp),%eax
0865b7f6 +0x13a8:  mov    %eax,(%esp)
0865b7f9 +0x13ab:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
0865b7fe +0x13b0:  mov    %eax,%edx
0865b800 +0x13b2:  mov    -0x9c(%ebp),%eax
0865b806 +0x13b8:  mov    %edx,0x4(%esp)
0865b80a +0x13bc:  mov    %eax,(%esp)
0865b80d +0x13bf:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865b812 +0x13c4:  mov    0x8(%ebp),%eax
0865b815 +0x13c7:  mov    %eax,(%esp)
0865b818 +0x13ca:  call   08230164 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x580e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x580e
0865b81d +0x13cf:  mov    %eax,-0x44(%ebp)
0865b820 +0x13d2:  mov    -0x44(%ebp),%eax
0865b823 +0x13d5:  movzbl 0x44(%eax),%eax
0865b827 +0x13d9:  movzbl %al,%eax
0865b82a +0x13dc:  mov    %eax,-0x40(%ebp)
0865b82d +0x13df:  mov    -0x9c(%ebp),%eax
0865b833 +0x13e5:  mov    %eax,(%esp)
0865b836 +0x13e8:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
0865b83b +0x13ed:  mov    %eax,-0xe4(%ebp)
0865b841 +0x13f3:  movl   $0x0,-0x3c(%ebp)
0865b848 +0x13fa:  mov    -0x9c(%ebp),%eax
0865b84e +0x1400:  movl   $0x0,0x4(%esp)
0865b856 +0x1408:  mov    %eax,(%esp)
0865b859 +0x140b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865b85e +0x1410:  movl   $0x0,-0x30(%ebp)
0865b865 +0x1417:  jmp    0865b8e4 <+0x1496>
0865b867 +0x1419:  mov    0x8(%ebp),%eax
0865b86a +0x141c:  mov    %eax,(%esp)
0865b86d +0x141f:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0865b872 +0x1424:  mov    -0x30(%ebp),%edx
0865b875 +0x1427:  add    $0x20,%edx
0865b878 +0x142a:  movzbl 0x6(%eax,%edx,2),%eax
0865b87d +0x142f:  test   %al,%al
0865b87f +0x1431:  setne  %al
0865b882 +0x1434:  test   %al,%al
0865b884 +0x1436:  je     0865b8e0 <+0x1492>
0865b886 +0x1438:  mov    0x8(%ebp),%eax
0865b889 +0x143b:  mov    %eax,(%esp)
0865b88c +0x143e:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0865b891 +0x1443:  mov    -0x30(%ebp),%edx
0865b894 +0x1446:  add    $0x20,%edx
0865b897 +0x1449:  movzbl 0x6(%eax,%edx,2),%eax
0865b89c +0x144e:  movzbl %al,%edx
0865b89f +0x1451:  mov    -0x9c(%ebp),%eax
0865b8a5 +0x1457:  mov    %edx,0x4(%esp)
0865b8a9 +0x145b:  mov    %eax,(%esp)
0865b8ac +0x145e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865b8b1 +0x1463:  mov    0x8(%ebp),%eax
0865b8b4 +0x1466:  mov    %eax,(%esp)
0865b8b7 +0x1469:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0865b8bc +0x146e:  mov    -0x30(%ebp),%edx
0865b8bf +0x1471:  add    $0x20,%edx
0865b8c2 +0x1474:  movzbl 0x7(%eax,%edx,2),%eax
0865b8c7 +0x1479:  movsbl %al,%edx
0865b8ca +0x147c:  mov    -0x9c(%ebp),%eax
0865b8d0 +0x1482:  mov    %edx,0x4(%esp)
0865b8d4 +0x1486:  mov    %eax,(%esp)
0865b8d7 +0x1489:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865b8dc +0x148e:  addl   $0x1,-0x3c(%ebp)
0865b8e0 +0x1492:  addl   $0x1,-0x30(%ebp)
0865b8e4 +0x1496:  cmpl   $0xcb,-0x30(%ebp)
0865b8eb +0x149d:  setle  %al
0865b8ee +0x14a0:  test   %al,%al
0865b8f0 +0x14a2:  jne    0865b867 <+0x1419>
0865b8f6 +0x14a8:  movl   $0x0,-0x2c(%ebp)
0865b8fd +0x14af:  jmp    0865b9a8 <+0x155a>
0865b902 +0x14b4:  mov    0x8(%ebp),%eax
0865b905 +0x14b7:  mov    %eax,(%esp)
0865b908 +0x14ba:  call   0822f548 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4bf2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4bf2
0865b90d +0x14bf:  test   %al,%al
0865b90f +0x14c1:  je     0865b944 <+0x14f6>
0865b911 +0x14c3:  mov    0x8(%ebp),%eax
0865b914 +0x14c6:  mov    %eax,(%esp)
0865b917 +0x14c9:  call   0822f548 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4bf2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4bf2
0865b91c +0x14ce:  test   %al,%al
0865b91e +0x14d0:  je     0865b944 <+0x14f6>
0865b920 +0x14d2:  mov    -0x2c(%ebp),%edx
0865b923 +0x14d5:  mov    -0x44(%ebp),%ecx
0865b926 +0x14d8:  mov    %edx,%eax
0865b928 +0x14da:  shl    $0x2,%eax
0865b92b +0x14dd:  add    %edx,%eax
0865b92d +0x14df:  lea    (%ecx,%eax,1),%eax
0865b930 +0x14e2:  add    $0x40,%eax
0865b933 +0x14e5:  mov    0x5(%eax),%eax
0865b936 +0x14e8:  cmp    $0xc7,%eax
0865b93b +0x14ed:  jle    0865b944 <+0x14f6>
0865b93d +0x14ef:  mov    $0x1,%eax
0865b942 +0x14f4:  jmp    0865b949 <+0x14fb>
0865b944 +0x14f6:  mov    $0x0,%eax
0865b949 +0x14fb:  test   %al,%al
0865b94b +0x14fd:  je     0865b9a4 <+0x1556>
0865b94d +0x14ff:  mov    -0x2c(%ebp),%edx
0865b950 +0x1502:  mov    -0x44(%ebp),%ecx
0865b953 +0x1505:  mov    %edx,%eax
0865b955 +0x1507:  shl    $0x2,%eax
0865b958 +0x150a:  add    %edx,%eax
0865b95a +0x150c:  lea    (%ecx,%eax,1),%eax
0865b95d +0x150f:  add    $0x40,%eax
0865b960 +0x1512:  mov    0x5(%eax),%edx
0865b963 +0x1515:  mov    -0x9c(%ebp),%eax
0865b969 +0x151b:  mov    %edx,0x4(%esp)
0865b96d +0x151f:  mov    %eax,(%esp)
0865b970 +0x1522:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865b975 +0x1527:  mov    -0x2c(%ebp),%edx
0865b978 +0x152a:  mov    -0x44(%ebp),%ecx
0865b97b +0x152d:  mov    %edx,%eax
0865b97d +0x152f:  shl    $0x2,%eax
0865b980 +0x1532:  add    %edx,%eax
0865b982 +0x1534:  lea    (%ecx,%eax,1),%eax
0865b985 +0x1537:  add    $0x49,%eax
0865b988 +0x153a:  movzbl (%eax),%eax
0865b98b +0x153d:  movsbl %al,%edx
0865b98e +0x1540:  mov    -0x9c(%ebp),%eax
0865b994 +0x1546:  mov    %edx,0x4(%esp)
0865b998 +0x154a:  mov    %eax,(%esp)
0865b99b +0x154d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865b9a0 +0x1552:  addl   $0x1,-0x3c(%ebp)
0865b9a4 +0x1556:  addl   $0x1,-0x2c(%ebp)
0865b9a8 +0x155a:  mov    -0x2c(%ebp),%eax
0865b9ab +0x155d:  cmp    -0x40(%ebp),%eax
0865b9ae +0x1560:  setl   %al
0865b9b1 +0x1563:  test   %al,%al
0865b9b3 +0x1565:  jne    0865b902 <+0x14b4>
0865b9b9 +0x156b:  mov    -0x9c(%ebp),%eax
0865b9bf +0x1571:  mov    -0x3c(%ebp),%edx
0865b9c2 +0x1574:  mov    %edx,0x8(%esp)
0865b9c6 +0x1578:  lea    -0xe4(%ebp),%edx
0865b9cc +0x157e:  mov    %edx,0x4(%esp)
0865b9d0 +0x1582:  mov    %eax,(%esp)
0865b9d3 +0x1585:  call   08110b28 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x3a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x3a
0865b9d8 +0x158a:  mov    -0x9c(%ebp),%eax
0865b9de +0x1590:  mov    %eax,(%esp)
0865b9e1 +0x1593:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
0865b9e6 +0x1598:  mov    %eax,-0xe4(%ebp)
0865b9ec +0x159e:  movl   $0x0,-0x3c(%ebp)
0865b9f3 +0x15a5:  mov    -0x9c(%ebp),%eax
0865b9f9 +0x15ab:  movl   $0x0,0x4(%esp)
0865ba01 +0x15b3:  mov    %eax,(%esp)
0865ba04 +0x15b6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865ba09 +0x15bb:  movl   $0x0,-0x28(%ebp)
0865ba10 +0x15c2:  jmp    0865ba9b <+0x164d>
0865ba15 +0x15c7:  mov    0x8(%ebp),%eax
0865ba18 +0x15ca:  mov    %eax,(%esp)
0865ba1b +0x15cd:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0865ba20 +0x15d2:  mov    -0x28(%ebp),%edx
0865ba23 +0x15d5:  add    $0xe8,%edx
0865ba29 +0x15db:  movzbl 0xe(%eax,%edx,2),%eax
0865ba2e +0x15e0:  test   %al,%al
0865ba30 +0x15e2:  setne  %al
0865ba33 +0x15e5:  test   %al,%al
0865ba35 +0x15e7:  je     0865ba97 <+0x1649>
0865ba37 +0x15e9:  mov    0x8(%ebp),%eax
0865ba3a +0x15ec:  mov    %eax,(%esp)
0865ba3d +0x15ef:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0865ba42 +0x15f4:  mov    -0x28(%ebp),%edx
0865ba45 +0x15f7:  add    $0xe8,%edx
0865ba4b +0x15fd:  movzbl 0xe(%eax,%edx,2),%eax
0865ba50 +0x1602:  movzbl %al,%edx
0865ba53 +0x1605:  mov    -0x9c(%ebp),%eax
0865ba59 +0x160b:  mov    %edx,0x4(%esp)
0865ba5d +0x160f:  mov    %eax,(%esp)
0865ba60 +0x1612:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865ba65 +0x1617:  mov    0x8(%ebp),%eax
0865ba68 +0x161a:  mov    %eax,(%esp)
0865ba6b +0x161d:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0865ba70 +0x1622:  mov    -0x28(%ebp),%edx
0865ba73 +0x1625:  add    $0xe8,%edx
0865ba79 +0x162b:  movzbl 0xf(%eax,%edx,2),%eax
0865ba7e +0x1630:  movsbl %al,%edx
0865ba81 +0x1633:  mov    -0x9c(%ebp),%eax
0865ba87 +0x1639:  mov    %edx,0x4(%esp)
0865ba8b +0x163d:  mov    %eax,(%esp)
0865ba8e +0x1640:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865ba93 +0x1645:  addl   $0x1,-0x3c(%ebp)
0865ba97 +0x1649:  addl   $0x1,-0x28(%ebp)
0865ba9b +0x164d:  cmpl   $0xcb,-0x28(%ebp)
0865baa2 +0x1654:  setle  %al
0865baa5 +0x1657:  test   %al,%al
0865baa7 +0x1659:  jne    0865ba15 <+0x15c7>
0865baad +0x165f:  movl   $0x0,-0x24(%ebp)
0865bab4 +0x1666:  jmp    0865bb5f <+0x1711>
0865bab9 +0x166b:  mov    0x8(%ebp),%eax
0865babc +0x166e:  mov    %eax,(%esp)
0865babf +0x1671:  call   0822f548 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4bf2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4bf2
0865bac4 +0x1676:  test   %al,%al
0865bac6 +0x1678:  je     0865bafb <+0x16ad>
0865bac8 +0x167a:  mov    0x8(%ebp),%eax
0865bacb +0x167d:  mov    %eax,(%esp)
0865bace +0x1680:  call   0822f548 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4bf2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4bf2
0865bad3 +0x1685:  test   %al,%al
0865bad5 +0x1687:  je     0865bafb <+0x16ad>
0865bad7 +0x1689:  mov    -0x24(%ebp),%edx
0865bada +0x168c:  mov    -0x44(%ebp),%ecx
0865badd +0x168f:  mov    %edx,%eax
0865badf +0x1691:  shl    $0x2,%eax
0865bae2 +0x1694:  add    %edx,%eax
0865bae4 +0x1696:  lea    (%ecx,%eax,1),%eax
0865bae7 +0x1699:  add    $0x40,%eax
0865baea +0x169c:  mov    0x5(%eax),%eax
0865baed +0x169f:  cmp    $0xc7,%eax
0865baf2 +0x16a4:  jle    0865bafb <+0x16ad>
0865baf4 +0x16a6:  mov    $0x1,%eax
0865baf9 +0x16ab:  jmp    0865bb00 <+0x16b2>
0865bafb +0x16ad:  mov    $0x0,%eax
0865bb00 +0x16b2:  test   %al,%al
0865bb02 +0x16b4:  je     0865bb5b <+0x170d>
0865bb04 +0x16b6:  mov    -0x24(%ebp),%edx
0865bb07 +0x16b9:  mov    -0x44(%ebp),%ecx
0865bb0a +0x16bc:  mov    %edx,%eax
0865bb0c +0x16be:  shl    $0x2,%eax
0865bb0f +0x16c1:  add    %edx,%eax
0865bb11 +0x16c3:  lea    (%ecx,%eax,1),%eax
0865bb14 +0x16c6:  add    $0x40,%eax
0865bb17 +0x16c9:  mov    0x5(%eax),%edx
0865bb1a +0x16cc:  mov    -0x9c(%ebp),%eax
0865bb20 +0x16d2:  mov    %edx,0x4(%esp)
0865bb24 +0x16d6:  mov    %eax,(%esp)
0865bb27 +0x16d9:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865bb2c +0x16de:  mov    -0x24(%ebp),%edx
0865bb2f +0x16e1:  mov    -0x44(%ebp),%ecx
0865bb32 +0x16e4:  mov    %edx,%eax
0865bb34 +0x16e6:  shl    $0x2,%eax
0865bb37 +0x16e9:  add    %edx,%eax
0865bb39 +0x16eb:  lea    (%ecx,%eax,1),%eax
0865bb3c +0x16ee:  add    $0x49,%eax
0865bb3f +0x16f1:  movzbl (%eax),%eax
0865bb42 +0x16f4:  movsbl %al,%edx
0865bb45 +0x16f7:  mov    -0x9c(%ebp),%eax
0865bb4b +0x16fd:  mov    %edx,0x4(%esp)
0865bb4f +0x1701:  mov    %eax,(%esp)
0865bb52 +0x1704:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865bb57 +0x1709:  addl   $0x1,-0x3c(%ebp)
0865bb5b +0x170d:  addl   $0x1,-0x24(%ebp)
0865bb5f +0x1711:  mov    -0x24(%ebp),%eax
0865bb62 +0x1714:  cmp    -0x40(%ebp),%eax
0865bb65 +0x1717:  setl   %al
0865bb68 +0x171a:  test   %al,%al
0865bb6a +0x171c:  jne    0865bab9 <+0x166b>
0865bb70 +0x1722:  mov    -0x9c(%ebp),%eax
0865bb76 +0x1728:  mov    -0x3c(%ebp),%edx
0865bb79 +0x172b:  mov    %edx,0x8(%esp)
0865bb7d +0x172f:  lea    -0xe4(%ebp),%edx
0865bb83 +0x1735:  mov    %edx,0x4(%esp)
0865bb87 +0x1739:  mov    %eax,(%esp)
0865bb8a +0x173c:  call   08110b28 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x3a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x3a
0865bb8f +0x1741:  mov    0x8(%ebp),%eax
0865bb92 +0x1744:  mov    %eax,(%esp)
0865bb95 +0x1747:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0865bb9a +0x174c:  mov    %eax,(%esp)
0865bb9d +0x174f:  call   081b7408 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x87>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x87
0865bba2 +0x1754:  mov    %eax,(%esp)
0865bba5 +0x1757:  call   0833a6b0 <_ZNK13user_creature12CCreatureMgr23GetEquipedCreatureLevelEv>  ; user_creature::CCreatureMgr::GetEquipedCreatureLevel() const
0865bbaa +0x175c:  mov    -0x9c(%ebp),%edx
0865bbb0 +0x1762:  mov    %eax,0x4(%esp)
0865bbb4 +0x1766:  mov    %edx,(%esp)
0865bbb7 +0x1769:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865bbbc +0x176e:  mov    0x8(%ebp),%eax
0865bbbf +0x1771:  mov    %eax,(%esp)
0865bbc2 +0x1774:  call   0850d488 <_GLOBAL__I_g_emptySlot+0x3bd>  ; global constructors keyed to g_emptySlot+0x3bd
0865bbc7 +0x1779:  mov    (%eax),%edx
0865bbc9 +0x177b:  mov    -0x9c(%ebp),%eax
0865bbcf +0x1781:  mov    %edx,0x4(%esp)
0865bbd3 +0x1785:  mov    %eax,(%esp)
0865bbd6 +0x1788:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0865bbdb +0x178d:  mov    0x8(%ebp),%eax
0865bbde +0x1790:  mov    %eax,(%esp)
0865bbe1 +0x1793:  call   0850d488 <_GLOBAL__I_g_emptySlot+0x3bd>  ; global constructors keyed to g_emptySlot+0x3bd
0865bbe6 +0x1798:  mov    0x4(%eax),%edx
0865bbe9 +0x179b:  mov    -0x9c(%ebp),%eax
0865bbef +0x17a1:  mov    %edx,0x4(%esp)
0865bbf3 +0x17a5:  mov    %eax,(%esp)
0865bbf6 +0x17a8:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0865bbfb +0x17ad:  mov    0x8(%ebp),%eax
0865bbfe +0x17b0:  mov    %eax,(%esp)
0865bc01 +0x17b3:  call   0850d488 <_GLOBAL__I_g_emptySlot+0x3bd>  ; global constructors keyed to g_emptySlot+0x3bd
0865bc06 +0x17b8:  mov    0x14(%eax),%edx
0865bc09 +0x17bb:  mov    -0x9c(%ebp),%eax
0865bc0f +0x17c1:  mov    %edx,0x4(%esp)
0865bc13 +0x17c5:  mov    %eax,(%esp)
0865bc16 +0x17c8:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0865bc1b +0x17cd:  mov    0x8(%ebp),%eax
0865bc1e +0x17d0:  mov    %eax,(%esp)
0865bc21 +0x17d3:  call   0850d488 <_GLOBAL__I_g_emptySlot+0x3bd>  ; global constructors keyed to g_emptySlot+0x3bd
0865bc26 +0x17d8:  mov    0x5c(%eax),%edx
0865bc29 +0x17db:  mov    -0x9c(%ebp),%eax
0865bc2f +0x17e1:  mov    %edx,0x4(%esp)
0865bc33 +0x17e5:  mov    %eax,(%esp)
0865bc36 +0x17e8:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865bc3b +0x17ed:  mov    0x8(%ebp),%eax
0865bc3e +0x17f0:  mov    %eax,(%esp)
0865bc41 +0x17f3:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0865bc46 +0x17f8:  movzbl 0x39(%eax),%eax
0865bc4a +0x17fc:  movsbl %al,%edx
0865bc4d +0x17ff:  mov    -0x9c(%ebp),%eax
0865bc53 +0x1805:  mov    %edx,0x4(%esp)
0865bc57 +0x1809:  mov    %eax,(%esp)
0865bc5a +0x180c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865bc5f +0x1811:  mov    0x8(%ebp),%eax
0865bc62 +0x1814:  mov    %eax,(%esp)
0865bc65 +0x1817:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0865bc6a +0x181c:  movzbl 0x3a(%eax),%eax
0865bc6e +0x1820:  movsbl %al,%edx
0865bc71 +0x1823:  mov    -0x9c(%ebp),%eax
0865bc77 +0x1829:  mov    %edx,0x4(%esp)
0865bc7b +0x182d:  mov    %eax,(%esp)
0865bc7e +0x1830:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865bc83 +0x1835:  mov    0x8(%ebp),%eax
0865bc86 +0x1838:  mov    %eax,(%esp)
0865bc89 +0x183b:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0865bc8e +0x1840:  movzbl 0x3b(%eax),%eax
0865bc92 +0x1844:  movsbl %al,%edx
0865bc95 +0x1847:  mov    -0x9c(%ebp),%eax
0865bc9b +0x184d:  mov    %edx,0x4(%esp)
0865bc9f +0x1851:  mov    %eax,(%esp)
0865bca2 +0x1854:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865bca7 +0x1859:  mov    0x8(%ebp),%eax
0865bcaa +0x185c:  mov    %eax,(%esp)
0865bcad +0x185f:  call   0850d494 <_GLOBAL__I_g_emptySlot+0x3c9>  ; global constructors keyed to g_emptySlot+0x3c9
0865bcb2 +0x1864:  mov    %eax,%edx
0865bcb4 +0x1866:  mov    -0x9c(%ebp),%eax
0865bcba +0x186c:  mov    %edx,0x4(%esp)
0865bcbe +0x1870:  mov    %eax,(%esp)
0865bcc1 +0x1873:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0865bcc6 +0x1878:  mov    0x8(%ebp),%eax
0865bcc9 +0x187b:  mov    %eax,(%esp)
0865bccc +0x187e:  call   0822f9c8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5072>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5072
0865bcd1 +0x1883:  movswl %ax,%edx
0865bcd4 +0x1886:  mov    -0x9c(%ebp),%eax
0865bcda +0x188c:  mov    %edx,0x4(%esp)
0865bcde +0x1890:  mov    %eax,(%esp)
0865bce1 +0x1893:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0865bce6 +0x1898:  mov    0x8(%ebp),%eax
0865bce9 +0x189b:  mov    %eax,(%esp)
0865bcec +0x189e:  call   082301ae <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5858>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5858
0865bcf1 +0x18a3:  mov    %eax,%edx
0865bcf3 +0x18a5:  mov    -0x9c(%ebp),%eax
0865bcf9 +0x18ab:  mov    %edx,0x4(%esp)
0865bcfd +0x18af:  mov    %eax,(%esp)
0865bd00 +0x18b2:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0865bd05 +0x18b7:  mov    0x8(%ebp),%eax
0865bd08 +0x18ba:  mov    %eax,(%esp)
0865bd0b +0x18bd:  call   0869742a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3c7f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3c7f
0865bd10 +0x18c2:  mov    %eax,(%esp)
0865bd13 +0x18c5:  call   0807e3b0 <_init+0xca8>
0865bd18 +0x18ca:  mov    %eax,-0x38(%ebp)
0865bd1b +0x18cd:  mov    -0x9c(%ebp),%eax
0865bd21 +0x18d3:  mov    -0x38(%ebp),%edx
0865bd24 +0x18d6:  mov    %edx,0x4(%esp)
0865bd28 +0x18da:  mov    %eax,(%esp)
0865bd2b +0x18dd:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0865bd30 +0x18e2:  mov    0x8(%ebp),%eax
0865bd33 +0x18e5:  mov    %eax,(%esp)
0865bd36 +0x18e8:  call   0869742a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3c7f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3c7f
0865bd3b +0x18ed:  mov    -0x9c(%ebp),%edx
0865bd41 +0x18f3:  mov    -0x38(%ebp),%ecx
0865bd44 +0x18f6:  mov    %ecx,0x8(%esp)
0865bd48 +0x18fa:  mov    %eax,0x4(%esp)
0865bd4c +0x18fe:  mov    %edx,(%esp)
0865bd4f +0x1901:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
0865bd54 +0x1906:  mov    0x8(%ebp),%eax
0865bd57 +0x1909:  mov    %eax,(%esp)
0865bd5a +0x190c:  call   08697438 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3c8d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3c8d
0865bd5f +0x1911:  movzbl %al,%edx
0865bd62 +0x1914:  mov    -0x9c(%ebp),%eax
0865bd68 +0x191a:  mov    %edx,0x4(%esp)
0865bd6c +0x191e:  mov    %eax,(%esp)
0865bd6f +0x1921:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865bd74 +0x1926:  mov    0x8(%ebp),%eax
0865bd77 +0x1929:  mov    %eax,(%esp)
0865bd7a +0x192c:  call   0822fcc6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5370>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5370
0865bd7f +0x1931:  movsbl %al,%edx
0865bd82 +0x1934:  mov    -0x9c(%ebp),%eax
0865bd88 +0x193a:  mov    %edx,0x4(%esp)
0865bd8c +0x193e:  mov    %eax,(%esp)
0865bd8f +0x1941:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865bd94 +0x1946:  mov    0x8(%ebp),%eax
0865bd97 +0x1949:  mov    %eax,(%esp)
0865bd9a +0x194c:  call   082301d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5882>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5882
0865bd9f +0x1951:  test   %al,%al
0865bda1 +0x1953:  je     0865bdbb <+0x196d>
0865bda3 +0x1955:  mov    -0x9c(%ebp),%eax
0865bda9 +0x195b:  movl   $0x1,0x4(%esp)
0865bdb1 +0x1963:  mov    %eax,(%esp)
0865bdb4 +0x1966:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865bdb9 +0x196b:  jmp    0865bdd1 <+0x1983>
0865bdbb +0x196d:  mov    -0x9c(%ebp),%eax
0865bdc1 +0x1973:  movl   $0x0,0x4(%esp)
0865bdc9 +0x197b:  mov    %eax,(%esp)
0865bdcc +0x197e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865bdd1 +0x1983:  movl   $0xb,0x4(%esp)
0865bdd9 +0x198b:  mov    0x8(%ebp),%eax
0865bddc +0x198e:  mov    %eax,(%esp)
0865bddf +0x1991:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
0865bde4 +0x1996:  mov    %eax,-0x34(%ebp)
0865bde7 +0x1999:  movl   $0x0,0x8(%esp)
0865bdef +0x19a1:  mov    -0x9c(%ebp),%eax
0865bdf5 +0x19a7:  mov    %eax,0x4(%esp)
0865bdf9 +0x19ab:  mov    -0x34(%ebp),%eax
0865bdfc +0x19ae:  mov    %eax,(%esp)
0865bdff +0x19b1:  call   085ef5dc <_ZN10CQuestShop27makePacket_BuyingStatusListER11PacketGuardb>  ; CQuestShop::makePacket_BuyingStatusList(PacketGuard&, bool)
0865be04 +0x19b6:  mov    0x8(%ebp),%eax
0865be07 +0x19b9:  mov    %eax,(%esp)
0865be0a +0x19bc:  call   0868fe02 <_ZN5CUser14GetManageLevelEv>  ; CUser::GetManageLevel()
0865be0f +0x19c1:  mov    -0x9c(%ebp),%edx
0865be15 +0x19c7:  mov    %eax,0x4(%esp)
0865be19 +0x19cb:  mov    %edx,(%esp)
0865be1c +0x19ce:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865be21 +0x19d3:  mov    0x8(%ebp),%eax
0865be24 +0x19d6:  mov    %eax,(%esp)
0865be27 +0x19d9:  call   0822fdce <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5478>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5478
0865be2c +0x19de:  jmp    0865c64d <+0x21ff>
0865be31 +0x19e3:  mov    0x8(%ebp),%eax
0865be34 +0x19e6:  mov    %eax,(%esp)
0865be37 +0x19e9:  call   0822fdb6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5460>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5460
0865be3c +0x19ee:  mov    0x8(%ebp),%eax
0865be3f +0x19f1:  mov    %eax,(%esp)
0865be42 +0x19f4:  call   08230860 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5f0a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5f0a
0865be47 +0x19f9:  movzbl %al,%edx
0865be4a +0x19fc:  mov    -0x9c(%ebp),%eax
0865be50 +0x1a02:  mov    %edx,0x4(%esp)
0865be54 +0x1a06:  mov    %eax,(%esp)
0865be57 +0x1a09:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865be5c +0x1a0e:  mov    0x8(%ebp),%eax
0865be5f +0x1a11:  mov    %eax,(%esp)
0865be62 +0x1a14:  call   08230870 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5f1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5f1a
0865be67 +0x1a19:  movzbl %al,%edx
0865be6a +0x1a1c:  mov    -0x9c(%ebp),%eax
0865be70 +0x1a22:  mov    %edx,0x4(%esp)
0865be74 +0x1a26:  mov    %eax,(%esp)
0865be77 +0x1a29:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865be7c +0x1a2e:  mov    0x8(%ebp),%eax
0865be7f +0x1a31:  mov    %eax,(%esp)
0865be82 +0x1a34:  call   0868fe02 <_ZN5CUser14GetManageLevelEv>  ; CUser::GetManageLevel()
0865be87 +0x1a39:  mov    -0x9c(%ebp),%edx
0865be8d +0x1a3f:  mov    %eax,0x4(%esp)
0865be91 +0x1a43:  mov    %edx,(%esp)
0865be94 +0x1a46:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865be99 +0x1a4b:  mov    0x8(%ebp),%eax
0865be9c +0x1a4e:  mov    %eax,(%esp)
0865be9f +0x1a51:  call   0868fe10 <_ZN5CUser14GetManagePointEv>  ; CUser::GetManagePoint()
0865bea4 +0x1a56:  mov    -0x9c(%ebp),%edx
0865beaa +0x1a5c:  mov    %eax,0x4(%esp)
0865beae +0x1a60:  mov    %edx,(%esp)
0865beb1 +0x1a63:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0865beb6 +0x1a68:  movl   $0x0,-0x20(%ebp)
0865bebd +0x1a6f:  mov    -0x9c(%ebp),%eax
0865bec3 +0x1a75:  mov    %eax,(%esp)
0865bec6 +0x1a78:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
0865becb +0x1a7d:  mov    %eax,-0xe8(%ebp)
0865bed1 +0x1a83:  mov    -0x9c(%ebp),%eax
0865bed7 +0x1a89:  mov    -0x20(%ebp),%edx
0865beda +0x1a8c:  mov    %edx,0x4(%esp)
0865bede +0x1a90:  mov    %eax,(%esp)
0865bee1 +0x1a93:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0865bee6 +0x1a98:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0865beed +0x1a9f:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0865bef2 +0x1aa4:  mov    %eax,-0x1c(%ebp)
0865bef5 +0x1aa7:  movl   $0x0,-0x18(%ebp)
0865befc +0x1aae:  jmp    0865c605 <+0x21b7>
0865bf01 +0x1ab3:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0865bf06 +0x1ab8:  mov    %eax,(%esp)
0865bf09 +0x1abb:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
0865bf0e +0x1ac0:  cmp    $0xe,%eax
0865bf11 +0x1ac3:  sete   %al
0865bf14 +0x1ac6:  test   %al,%al
0865bf16 +0x1ac8:  je     0865bf4a <+0x1afc>
0865bf18 +0x1aca:  mov    -0x18(%ebp),%eax
0865bf1b +0x1acd:  mov    0x8(%ebp),%edx
0865bf1e +0x1ad0:  add    $0x796e8,%edx
0865bf24 +0x1ad6:  mov    %eax,0x4(%esp)
0865bf28 +0x1ada:  mov    %edx,(%esp)
0865bf2b +0x1add:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0865bf30 +0x1ae2:  mov    (%eax),%ebx
0865bf32 +0x1ae4:  mov    0x8(%ebp),%eax
0865bf35 +0x1ae7:  mov    %eax,(%esp)
0865bf38 +0x1aea:  call   0822fcaa <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5354>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5354
0865bf3d +0x1aef:  cmp    %eax,%ebx
0865bf3f +0x1af1:  setne  %al
0865bf42 +0x1af4:  test   %al,%al
0865bf44 +0x1af6:  jne    0865c600 <+0x21b2>
0865bf4a +0x1afc:  mov    -0x20(%ebp),%edx
0865bf4d +0x1aff:  addl   $0x1,-0x20(%ebp)
0865bf51 +0x1b03:  mov    -0x9c(%ebp),%eax
0865bf57 +0x1b09:  mov    %edx,0x4(%esp)
0865bf5b +0x1b0d:  mov    %eax,(%esp)
0865bf5e +0x1b10:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0865bf63 +0x1b15:  mov    -0x18(%ebp),%eax
0865bf66 +0x1b18:  mov    0x8(%ebp),%edx
0865bf69 +0x1b1b:  add    $0x796e8,%edx
0865bf6f +0x1b21:  mov    %eax,0x4(%esp)
0865bf73 +0x1b25:  mov    %edx,(%esp)
0865bf76 +0x1b28:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0865bf7b +0x1b2d:  add    $0x4,%eax
0865bf7e +0x1b30:  mov    %eax,(%esp)
0865bf81 +0x1b33:  call   0807e3b0 <_init+0xca8>
0865bf86 +0x1b38:  mov    %eax,%edx
0865bf88 +0x1b3a:  mov    -0x9c(%ebp),%eax
0865bf8e +0x1b40:  mov    %edx,0x4(%esp)
0865bf92 +0x1b44:  mov    %eax,(%esp)
0865bf95 +0x1b47:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0865bf9a +0x1b4c:  mov    -0x18(%ebp),%eax
0865bf9d +0x1b4f:  mov    0x8(%ebp),%edx
0865bfa0 +0x1b52:  add    $0x796e8,%edx
0865bfa6 +0x1b58:  mov    %eax,0x4(%esp)
0865bfaa +0x1b5c:  mov    %edx,(%esp)
0865bfad +0x1b5f:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0865bfb2 +0x1b64:  add    $0x4,%eax
0865bfb5 +0x1b67:  mov    %eax,(%esp)
0865bfb8 +0x1b6a:  call   0807e3b0 <_init+0xca8>
0865bfbd +0x1b6f:  mov    %eax,%ebx
0865bfbf +0x1b71:  mov    -0x18(%ebp),%eax
0865bfc2 +0x1b74:  mov    0x8(%ebp),%edx
0865bfc5 +0x1b77:  add    $0x796e8,%edx
0865bfcb +0x1b7d:  mov    %eax,0x4(%esp)
0865bfcf +0x1b81:  mov    %edx,(%esp)
0865bfd2 +0x1b84:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0865bfd7 +0x1b89:  add    $0x4,%eax
0865bfda +0x1b8c:  mov    %eax,%edx
0865bfdc +0x1b8e:  mov    -0x9c(%ebp),%eax
0865bfe2 +0x1b94:  mov    %ebx,0x8(%esp)
0865bfe6 +0x1b98:  mov    %edx,0x4(%esp)
0865bfea +0x1b9c:  mov    %eax,(%esp)
0865bfed +0x1b9f:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
0865bff2 +0x1ba4:  mov    -0x18(%ebp),%eax
0865bff5 +0x1ba7:  mov    0x8(%ebp),%edx
0865bff8 +0x1baa:  add    $0x796e8,%edx
0865bffe +0x1bb0:  mov    %eax,0x4(%esp)
0865c002 +0x1bb4:  mov    %edx,(%esp)
0865c005 +0x1bb7:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0865c00a +0x1bbc:  add    $0x4,%eax
0865c00d +0x1bbf:  mov    %eax,(%esp)
0865c010 +0x1bc2:  call   0829efae <_Z16checkSpecialCharPc>  ; checkSpecialChar(char*)
0865c015 +0x1bc7:  test   %al,%al
0865c017 +0x1bc9:  jne    0865c040 <+0x1bf2>
0865c019 +0x1bcb:  mov    -0x18(%ebp),%eax
0865c01c +0x1bce:  mov    0x8(%ebp),%edx
0865c01f +0x1bd1:  add    $0x796e8,%edx
0865c025 +0x1bd7:  mov    %eax,0x4(%esp)
0865c029 +0x1bdb:  mov    %edx,(%esp)
0865c02c +0x1bde:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0865c031 +0x1be3:  add    $0x4,%eax
0865c034 +0x1be6:  mov    %eax,(%esp)
0865c037 +0x1be9:  call   0829f01f <_Z20checkSpecialCharNamePc>  ; checkSpecialCharName(char*)
0865c03c +0x1bee:  test   %al,%al
0865c03e +0x1bf0:  je     0865c047 <+0x1bf9>
0865c040 +0x1bf2:  mov    $0x1,%eax
0865c045 +0x1bf7:  jmp    0865c04c <+0x1bfe>
0865c047 +0x1bf9:  mov    $0x0,%eax
0865c04c +0x1bfe:  mov    %al,-0x12(%ebp)
0865c04f +0x1c01:  movzbl -0x12(%ebp),%edx
0865c053 +0x1c05:  mov    -0x9c(%ebp),%eax
0865c059 +0x1c0b:  mov    %edx,0x4(%esp)
0865c05d +0x1c0f:  mov    %eax,(%esp)
0865c060 +0x1c12:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865c065 +0x1c17:  mov    -0x18(%ebp),%eax
0865c068 +0x1c1a:  mov    0x8(%ebp),%edx
0865c06b +0x1c1d:  add    $0x796e8,%edx
0865c071 +0x1c23:  mov    %eax,0x4(%esp)
0865c075 +0x1c27:  mov    %edx,(%esp)
0865c078 +0x1c2a:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0865c07d +0x1c2f:  movzbl 0x26(%eax),%eax
0865c081 +0x1c33:  movsbl %al,%edx
0865c084 +0x1c36:  mov    -0x9c(%ebp),%eax
0865c08a +0x1c3c:  mov    %edx,0x4(%esp)
0865c08e +0x1c40:  mov    %eax,(%esp)
0865c091 +0x1c43:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865c096 +0x1c48:  mov    -0x18(%ebp),%eax
0865c099 +0x1c4b:  mov    0x8(%ebp),%edx
0865c09c +0x1c4e:  add    $0x796e8,%edx
0865c0a2 +0x1c54:  mov    %eax,0x4(%esp)
0865c0a6 +0x1c58:  mov    %edx,(%esp)
0865c0a9 +0x1c5b:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0865c0ae +0x1c60:  movzbl 0x29(%eax),%eax
0865c0b2 +0x1c64:  movsbl %al,%edx
0865c0b5 +0x1c67:  mov    -0x9c(%ebp),%eax
0865c0bb +0x1c6d:  mov    %edx,0x4(%esp)
0865c0bf +0x1c71:  mov    %eax,(%esp)
0865c0c2 +0x1c74:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865c0c7 +0x1c79:  mov    -0x18(%ebp),%eax
0865c0ca +0x1c7c:  mov    0x8(%ebp),%edx
0865c0cd +0x1c7f:  add    $0x796e8,%edx
0865c0d3 +0x1c85:  mov    %eax,0x4(%esp)
0865c0d7 +0x1c89:  mov    %edx,(%esp)
0865c0da +0x1c8c:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0865c0df +0x1c91:  movzwl 0x27(%eax),%eax
0865c0e3 +0x1c95:  movswl %ax,%edx
0865c0e6 +0x1c98:  mov    -0x9c(%ebp),%eax
0865c0ec +0x1c9e:  mov    %edx,0x4(%esp)
0865c0f0 +0x1ca2:  mov    %eax,(%esp)
0865c0f3 +0x1ca5:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865c0f8 +0x1caa:  mov    -0x9c(%ebp),%eax
0865c0fe +0x1cb0:  movl   $0x0,0x4(%esp)
0865c106 +0x1cb8:  mov    %eax,(%esp)
0865c109 +0x1cbb:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865c10e +0x1cc0:  mov    -0x18(%ebp),%eax
0865c111 +0x1cc3:  mov    0x8(%ebp),%edx
0865c114 +0x1cc6:  add    $0x796e8,%edx
0865c11a +0x1ccc:  mov    %eax,0x4(%esp)
0865c11e +0x1cd0:  mov    %edx,(%esp)
0865c121 +0x1cd3:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0865c126 +0x1cd8:  mov    0x12ad(%eax),%eax
0865c12c +0x1cde:  cmp    -0x1c(%ebp),%eax
0865c12f +0x1ce1:  setle  %al
0865c132 +0x1ce4:  test   %al,%al
0865c134 +0x1ce6:  je     0865c157 <+0x1d09>
0865c136 +0x1ce8:  mov    -0x18(%ebp),%eax
0865c139 +0x1ceb:  mov    0x8(%ebp),%edx
0865c13c +0x1cee:  add    $0x796e8,%edx
0865c142 +0x1cf4:  mov    %eax,0x4(%esp)
0865c146 +0x1cf8:  mov    %edx,(%esp)
0865c149 +0x1cfb:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0865c14e +0x1d00:  movb   $0x0,0xe66(%eax)
0865c155 +0x1d07:  jmp    0865c176 <+0x1d28>
0865c157 +0x1d09:  mov    -0x18(%ebp),%eax
0865c15a +0x1d0c:  mov    0x8(%ebp),%edx
0865c15d +0x1d0f:  add    $0x796e8,%edx
0865c163 +0x1d15:  mov    %eax,0x4(%esp)
0865c167 +0x1d19:  mov    %edx,(%esp)
0865c16a +0x1d1c:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0865c16f +0x1d21:  movb   $0x1,0xe66(%eax)
0865c176 +0x1d28:  mov    -0x18(%ebp),%eax
0865c179 +0x1d2b:  mov    0x8(%ebp),%edx
0865c17c +0x1d2e:  add    $0x796e8,%edx
0865c182 +0x1d34:  mov    %eax,0x4(%esp)
0865c186 +0x1d38:  mov    %edx,(%esp)
0865c189 +0x1d3b:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0865c18e +0x1d40:  mov    0x14c6(%eax),%eax
0865c194 +0x1d46:  cmp    $0xff,%eax
0865c199 +0x1d4b:  sete   %al
0865c19c +0x1d4e:  test   %al,%al
0865c19e +0x1d50:  je     0865c1b8 <+0x1d6a>
0865c1a0 +0x1d52:  mov    -0x9c(%ebp),%eax
0865c1a6 +0x1d58:  movl   $0x8,0x4(%esp)
0865c1ae +0x1d60:  mov    %eax,(%esp)
0865c1b1 +0x1d63:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865c1b6 +0x1d68:  jmp    0865c209 <+0x1dbb>
0865c1b8 +0x1d6a:  mov    -0x18(%ebp),%eax
0865c1bb +0x1d6d:  mov    0x8(%ebp),%edx
0865c1be +0x1d70:  add    $0x796e8,%edx
0865c1c4 +0x1d76:  mov    %eax,0x4(%esp)
0865c1c8 +0x1d7a:  mov    %edx,(%esp)
0865c1cb +0x1d7d:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0865c1d0 +0x1d82:  movzbl 0xe66(%eax),%eax
0865c1d7 +0x1d89:  test   %al,%al
0865c1d9 +0x1d8b:  je     0865c1f3 <+0x1da5>
0865c1db +0x1d8d:  mov    -0x9c(%ebp),%eax
0865c1e1 +0x1d93:  movl   $0x4,0x4(%esp)
0865c1e9 +0x1d9b:  mov    %eax,(%esp)
0865c1ec +0x1d9e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865c1f1 +0x1da3:  jmp    0865c209 <+0x1dbb>
0865c1f3 +0x1da5:  mov    -0x9c(%ebp),%eax
0865c1f9 +0x1dab:  movl   $0x0,0x4(%esp)
0865c201 +0x1db3:  mov    %eax,(%esp)
0865c204 +0x1db6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865c209 +0x1dbb:  movsbl -0xfc(%ebp),%ebx
0865c210 +0x1dc2:  mov    -0x18(%ebp),%eax
0865c213 +0x1dc5:  mov    0x8(%ebp),%edx
0865c216 +0x1dc8:  add    $0x796e8,%edx
0865c21c +0x1dce:  mov    %eax,0x4(%esp)
0865c220 +0x1dd2:  mov    %edx,(%esp)
0865c223 +0x1dd5:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0865c228 +0x1dda:  lea    0xda(%eax),%edx
0865c22e +0x1de0:  movl   $0x0,0x10(%esp)
0865c236 +0x1de8:  mov    %ebx,0xc(%esp)
0865c23a +0x1dec:  movl   $0x0,0x8(%esp)
0865c242 +0x1df4:  mov    -0x9c(%ebp),%eax
0865c248 +0x1dfa:  mov    %eax,0x4(%esp)
0865c24c +0x1dfe:  mov    %edx,(%esp)
0865c24f +0x1e01:  call   084fe2e2 <_ZNK10CInventory13MakeEquipListEPvb13ENUM_USERINFO14ENUM_EQUIPSLOT>  ; CInventory::MakeEquipList(void*, bool, ENUM_USERINFO, ENUM_EQUIPSLOT) const
0865c254 +0x1e06:  mov    0x8(%ebp),%eax
0865c257 +0x1e09:  mov    %eax,(%esp)
0865c25a +0x1e0c:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0865c25f +0x1e11:  mov    $0x0,%edx
0865c264 +0x1e16:  mov    -0x9c(%ebp),%eax
0865c26a +0x1e1c:  mov    %edx,0x4(%esp)
0865c26e +0x1e20:  mov    %eax,(%esp)
0865c271 +0x1e23:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865c276 +0x1e28:  mov    0x8(%ebp),%eax
0865c279 +0x1e2b:  mov    %eax,(%esp)
0865c27c +0x1e2e:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
0865c281 +0x1e33:  mov    %eax,%edx
0865c283 +0x1e35:  mov    -0x9c(%ebp),%eax
0865c289 +0x1e3b:  mov    %edx,0x4(%esp)
0865c28d +0x1e3f:  mov    %eax,(%esp)
0865c290 +0x1e42:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0865c295 +0x1e47:  mov    0x8(%ebp),%eax
0865c298 +0x1e4a:  mov    %eax,(%esp)
0865c29b +0x1e4d:  call   0865c65c <_ZN5CUser24IsPermissionPrivateStoreEv>  ; CUser::IsPermissionPrivateStore()
0865c2a0 +0x1e52:  movzbl %al,%edx
0865c2a3 +0x1e55:  mov    -0x9c(%ebp),%eax
0865c2a9 +0x1e5b:  mov    %edx,0x4(%esp)
0865c2ad +0x1e5f:  mov    %eax,(%esp)
0865c2b0 +0x1e62:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865c2b5 +0x1e67:  movl   $0xc,0x4(%esp)
0865c2bd +0x1e6f:  mov    0x8(%ebp),%eax
0865c2c0 +0x1e72:  mov    %eax,(%esp)
0865c2c3 +0x1e75:  call   080e600e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x144>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x144
0865c2c8 +0x1e7a:  movzbl %al,%edx
0865c2cb +0x1e7d:  mov    -0x9c(%ebp),%eax
0865c2d1 +0x1e83:  mov    %edx,0x4(%esp)
0865c2d5 +0x1e87:  mov    %eax,(%esp)
0865c2d8 +0x1e8a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865c2dd +0x1e8f:  mov    0x8(%ebp),%eax
0865c2e0 +0x1e92:  mov    %eax,(%esp)
0865c2e3 +0x1e95:  call   08110dc2 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x2d4>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x2d4
0865c2e8 +0x1e9a:  mov    %eax,%edx
0865c2ea +0x1e9c:  mov    -0x9c(%ebp),%eax
0865c2f0 +0x1ea2:  mov    %edx,0x4(%esp)
0865c2f4 +0x1ea6:  mov    %eax,(%esp)
0865c2f7 +0x1ea9:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0865c2fc +0x1eae:  mov    -0x18(%ebp),%eax
0865c2ff +0x1eb1:  mov    0x8(%ebp),%edx
0865c302 +0x1eb4:  add    $0x796e8,%edx
0865c308 +0x1eba:  mov    %eax,0x4(%esp)
0865c30c +0x1ebe:  mov    %edx,(%esp)
0865c30f +0x1ec1:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0865c314 +0x1ec6:  movzbl 0xe40(%eax),%eax
0865c31b +0x1ecd:  movsbl %al,%edx
0865c31e +0x1ed0:  mov    -0x9c(%ebp),%eax
0865c324 +0x1ed6:  mov    %edx,0x4(%esp)
0865c328 +0x1eda:  mov    %eax,(%esp)
0865c32b +0x1edd:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865c330 +0x1ee2:  mov    -0x18(%ebp),%eax
0865c333 +0x1ee5:  mov    0x8(%ebp),%edx
0865c336 +0x1ee8:  add    $0x796e8,%edx
0865c33c +0x1eee:  mov    %eax,0x4(%esp)
0865c340 +0x1ef2:  mov    %edx,(%esp)
0865c343 +0x1ef5:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0865c348 +0x1efa:  movzbl 0x1240(%eax),%eax
0865c34f +0x1f01:  movzbl %al,%edx
0865c352 +0x1f04:  mov    -0x9c(%ebp),%eax
0865c358 +0x1f0a:  mov    %edx,0x4(%esp)
0865c35c +0x1f0e:  mov    %eax,(%esp)
0865c35f +0x1f11:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865c364 +0x1f16:  mov    -0x18(%ebp),%eax
0865c367 +0x1f19:  mov    0x8(%ebp),%edx
0865c36a +0x1f1c:  add    $0x796e8,%edx
0865c370 +0x1f22:  mov    %eax,0x4(%esp)
0865c374 +0x1f26:  mov    %edx,(%esp)
0865c377 +0x1f29:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0865c37c +0x1f2e:  movzbl 0x1246(%eax),%eax
0865c383 +0x1f35:  mov    %al,-0x11(%ebp)
0865c386 +0x1f38:  movsbl -0x11(%ebp),%edx
0865c38a +0x1f3c:  mov    -0x9c(%ebp),%eax
0865c390 +0x1f42:  mov    %edx,0x4(%esp)
0865c394 +0x1f46:  mov    %eax,(%esp)
0865c397 +0x1f49:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865c39c +0x1f4e:  mov    -0x18(%ebp),%eax
0865c39f +0x1f51:  mov    0x8(%ebp),%edx
0865c3a2 +0x1f54:  add    $0x796e8,%edx
0865c3a8 +0x1f5a:  mov    %eax,0x4(%esp)
0865c3ac +0x1f5e:  mov    %edx,(%esp)
0865c3af +0x1f61:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0865c3b4 +0x1f66:  movzbl 0x83(%eax),%eax
0865c3bb +0x1f6d:  test   %al,%al
0865c3bd +0x1f6f:  je     0865c5e8 <+0x219a>
0865c3c3 +0x1f75:  mov    -0x18(%ebp),%eax
0865c3c6 +0x1f78:  mov    0x8(%ebp),%edx
0865c3c9 +0x1f7b:  add    $0x796e8,%edx
0865c3cf +0x1f81:  mov    %eax,0x4(%esp)
0865c3d3 +0x1f85:  mov    %edx,(%esp)
0865c3d6 +0x1f88:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0865c3db +0x1f8d:  mov    0x84(%eax),%eax
0865c3e1 +0x1f93:  test   %eax,%eax
0865c3e3 +0x1f95:  setg   %al
0865c3e6 +0x1f98:  test   %al,%al
0865c3e8 +0x1f9a:  je     0865c462 <+0x2014>
0865c3ea +0x1f9c:  mov    -0x18(%ebp),%eax
0865c3ed +0x1f9f:  mov    0x8(%ebp),%edx
0865c3f0 +0x1fa2:  add    $0x796e8,%edx
0865c3f6 +0x1fa8:  mov    %eax,0x4(%esp)
0865c3fa +0x1fac:  mov    %edx,(%esp)
0865c3fd +0x1faf:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0865c402 +0x1fb4:  mov    0x84(%eax),%ecx
0865c408 +0x1fba:  mov    $0xc22e4507,%edx
0865c40d +0x1fbf:  mov    %ecx,%eax
0865c40f +0x1fc1:  imul   %edx
0865c411 +0x1fc3:  lea    (%edx,%ecx,1),%eax
0865c414 +0x1fc6:  mov    %eax,%edx
0865c416 +0x1fc8:  sar    $0x10,%edx
0865c419 +0x1fcb:  mov    %ecx,%eax
0865c41b +0x1fcd:  sar    $0x1f,%eax
0865c41e +0x1fd0:  mov    %edx,%ecx
0865c420 +0x1fd2:  sub    %eax,%ecx
0865c422 +0x1fd4:  mov    %ecx,%eax
0865c424 +0x1fd6:  mov    %eax,-0x10(%ebp)
0865c427 +0x1fd9:  cmpl   $0x0,-0x10(%ebp)
0865c42b +0x1fdd:  jg     0865c448 <+0x1ffa>
0865c42d +0x1fdf:  mov    -0x9c(%ebp),%eax
0865c433 +0x1fe5:  movl   $0x1,0x4(%esp)
0865c43b +0x1fed:  mov    %eax,(%esp)
0865c43e +0x1ff0:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0865c443 +0x1ff5:  jmp    0865c601 <+0x21b3>
0865c448 +0x1ffa:  mov    -0x9c(%ebp),%eax
0865c44e +0x2000:  mov    -0x10(%ebp),%edx
0865c451 +0x2003:  mov    %edx,0x4(%esp)
0865c455 +0x2007:  mov    %eax,(%esp)
0865c458 +0x200a:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0865c45d +0x200f:  jmp    0865c601 <+0x21b3>
0865c462 +0x2014:  mov    -0x9c(%ebp),%eax
0865c468 +0x201a:  movl   $0x0,0x4(%esp)
0865c470 +0x2022:  mov    %eax,(%esp)
0865c473 +0x2025:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0865c478 +0x202a:  mov    -0x18(%ebp),%eax
0865c47b +0x202d:  mov    0x8(%ebp),%edx
0865c47e +0x2030:  add    $0x796e8,%edx
0865c484 +0x2036:  mov    %eax,0x4(%esp)
0865c488 +0x203a:  mov    %edx,(%esp)
0865c48b +0x203d:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0865c490 +0x2042:  movb   $0x0,0x83(%eax)
0865c497 +0x2049:  mov    -0x18(%ebp),%eax
0865c49a +0x204c:  mov    0x8(%ebp),%edx
0865c49d +0x204f:  add    $0x796e8,%edx
0865c4a3 +0x2055:  mov    %eax,0x4(%esp)
0865c4a7 +0x2059:  mov    %edx,(%esp)
0865c4aa +0x205c:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0865c4af +0x2061:  movl   $0x0,0x84(%eax)
0865c4b9 +0x206b:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0865c4be +0x2070:  movl   $0x344c,0x8(%esp)
0865c4c6 +0x2078:  movl   $"user.cpp",0x4(%esp)
0865c4ce +0x2080:  mov    %eax,(%esp)
0865c4d1 +0x2083:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0865c4d6 +0x2088:  movl   $0x1,0x8(%esp)
0865c4de +0x2090:  mov    %eax,0x4(%esp)
0865c4e2 +0x2094:  lea    -0xf0(%ebp),%eax
0865c4e8 +0x209a:  mov    %eax,(%esp)
0865c4eb +0x209d:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0865c4f0 +0x20a2:  lea    -0xf0(%ebp),%eax
0865c4f6 +0x20a8:  mov    %eax,(%esp)
0865c4f9 +0x20ab:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0865c4fe +0x20b0:  movl   $0x93,0x4(%esp)
0865c506 +0x20b8:  mov    %eax,(%esp)
0865c509 +0x20bb:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0865c50e +0x20c0:  mov    0x8(%ebp),%eax
0865c511 +0x20c3:  mov    %eax,(%esp)
0865c514 +0x20c6:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0865c519 +0x20cb:  mov    %eax,%ebx
0865c51b +0x20cd:  lea    -0xf0(%ebp),%eax
0865c521 +0x20d3:  mov    %eax,(%esp)
0865c524 +0x20d6:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0865c529 +0x20db:  mov    %ebx,0x4(%esp)
0865c52d +0x20df:  mov    %eax,(%esp)
0865c530 +0x20e2:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0865c535 +0x20e7:  lea    -0xf0(%ebp),%eax
0865c53b +0x20ed:  mov    %eax,(%esp)
0865c53e +0x20f0:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0865c543 +0x20f5:  mov    %eax,(%esp)
0865c546 +0x20f8:  call   082378d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcf82>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcf82
0865c54b +0x20fd:  mov    %eax,-0xc(%ebp)
0865c54e +0x2100:  movl   $0x9,0x8(%esp)
0865c556 +0x2108:  movl   $0x0,0x4(%esp)
0865c55e +0x2110:  mov    -0xc(%ebp),%eax
0865c561 +0x2113:  mov    %eax,(%esp)
0865c564 +0x2116:  call   0807dcc0 <_init+0x5b8>
0865c569 +0x211b:  mov    -0x18(%ebp),%eax
0865c56c +0x211e:  mov    0x8(%ebp),%edx
0865c56f +0x2121:  add    $0x796e8,%edx
0865c575 +0x2127:  mov    %eax,0x4(%esp)
0865c579 +0x212b:  mov    %edx,(%esp)
0865c57c +0x212e:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0865c581 +0x2133:  mov    (%eax),%edx
0865c583 +0x2135:  mov    -0xc(%ebp),%eax
0865c586 +0x2138:  mov    %edx,(%eax)
0865c588 +0x213a:  mov    -0xc(%ebp),%eax
0865c58b +0x213d:  movb   $0x0,0x4(%eax)
0865c58f +0x2141:  mov    -0xc(%ebp),%eax
0865c592 +0x2144:  movl   $0x0,0x5(%eax)
0865c599 +0x214b:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0865c59e +0x2150:  lea    -0xf0(%ebp),%edx
0865c5a4 +0x2156:  mov    %edx,0x8(%esp)
0865c5a8 +0x215a:  movl   $0x2,0x4(%esp)
0865c5b0 +0x2162:  mov    %eax,(%esp)
0865c5b3 +0x2165:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0865c5b8 +0x216a:  jmp    0865c5d8 <+0x218a>
0865c5ba +0x216c:  mov    %edx,%ebx
0865c5bc +0x216e:  mov    %eax,%esi
0865c5be +0x2170:  lea    -0xf0(%ebp),%eax
0865c5c4 +0x2176:  mov    %eax,(%esp)
0865c5c7 +0x2179:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0865c5cc +0x217e:  mov    %esi,%eax
0865c5ce +0x2180:  mov    %ebx,%edx
0865c5d0 +0x2182:  mov    %eax,(%esp)
0865c5d3 +0x2185:  call   08ae3750 <_Unwind_Resume>
0865c5d8 +0x218a:  lea    -0xf0(%ebp),%eax
0865c5de +0x2190:  mov    %eax,(%esp)
0865c5e1 +0x2193:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0865c5e6 +0x2198:  jmp    0865c601 <+0x21b3>
0865c5e8 +0x219a:  mov    -0x9c(%ebp),%eax
0865c5ee +0x21a0:  movl   $0x0,0x4(%esp)
0865c5f6 +0x21a8:  mov    %eax,(%esp)
0865c5f9 +0x21ab:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0865c5fe +0x21b0:  jmp    0865c601 <+0x21b3>
0865c600 +0x21b2:  nop
0865c601 +0x21b3:  addl   $0x1,-0x18(%ebp)
0865c605 +0x21b7:  mov    0x8(%ebp),%eax
0865c608 +0x21ba:  add    $0x796e8,%eax
0865c60d +0x21bf:  mov    %eax,(%esp)
0865c610 +0x21c2:  call   081a0b9a <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x289>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x289
0865c615 +0x21c7:  cmp    -0x18(%ebp),%eax
0865c618 +0x21ca:  setg   %al
0865c61b +0x21cd:  test   %al,%al
0865c61d +0x21cf:  jne    0865bf01 <+0x1ab3>
0865c623 +0x21d5:  mov    -0x9c(%ebp),%eax
0865c629 +0x21db:  mov    -0x20(%ebp),%edx
0865c62c +0x21de:  mov    %edx,0x8(%esp)
0865c630 +0x21e2:  lea    -0xe8(%ebp),%edx
0865c636 +0x21e8:  mov    %edx,0x4(%esp)
0865c63a +0x21ec:  mov    %eax,(%esp)
0865c63d +0x21ef:  call   08116908 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x1d>  ; global constructors keyed to CEventManager::CEventManager()+0x1d
0865c642 +0x21f4:  mov    0x8(%ebp),%eax
0865c645 +0x21f7:  mov    %eax,(%esp)
0865c648 +0x21fa:  call   0822fdce <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5478>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5478
0865c64d +0x21ff:  mov    $0x1,%eax
0865c652 +0x2204:  add    $0x130,%esp
0865c658 +0x220a:  pop    %ebx
0865c659 +0x220b:  pop    %esi
0865c65a +0x220c:  pop    %ebp
0865c65b +0x220d:  ret
```

## 反编译 C

```c
// CUser::make_basic_info @ 0x865a44e

/* CUser::make_basic_info(char*, char) */

undefined4 __thiscall CUser::make_basic_info(CUser *this,char *param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  size_t sVar7;
  GameWorld *pGVar8;
  CInventory *pCVar9;
  CCreatureMgr *pCVar10;
  undefined4 uVar11;
  CCharacBloodDungeon *this_00;
  CDataManager *pCVar12;
  int *piVar13;
  int iVar14;
  Stream *pSVar15;
  CStreamGuard *pCVar16;
  undefined4 *puVar17;
  CStreamGuard local_f4 [8];
  int local_ec;
  int local_e8;
  int local_e4;
  cMyTrace local_e0 [16];
  cMyTrace local_d0 [16];
  cMyTrace local_c0 [16];
  cMyTrace local_b0 [16];
  InterfacePacketBuf *local_a0;
  char *local_9c;
  size_t local_98;
  int local_94;
  char *local_90;
  int local_8c;
  short local_88;
  char local_86;
  char local_85;
  size_t local_84;
  uint local_80;
  uint local_7c;
  int local_78;
  uint local_74;
  int local_70;
  CQuestShop *local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  TOD_UserState *local_54;
  int local_50;
  int local_4c;
  int local_48;
  uint local_44;
  int local_40;
  size_t local_3c;
  CQuestShop *local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  byte local_16;
  char local_15;
  int local_14;
  SIG_FORBID_USER_TO_PLAY *local_10;
  
  local_a0 = (InterfacePacketBuf *)param_1;
  if (param_2 == '\x01') {
    iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
    if (iVar4 == 0) {
      LogManager::logFormat
                (1,"user.cpp","bool CUser::make_basic_info(char*, char)",0x31c3,
                 "Error ENUM_USERINFO_ADDITION, getCurCharacR() == 0");
      return 0;
    }
    lock(this);
    InterfacePacketBuf::put_short(local_a0,(uint)*(ushort *)(this + 0x704a8));
    pGVar8 = (GameWorld *)G_GameWorld();
    cVar2 = GameWorld::IsCharacterLevelRevisionChannel(pGVar8);
    if (cVar2 == '\0') {
      iVar4 = CUserCharacInfo::get_charac_exp((CUserCharacInfo *)this);
    }
    else {
      pCVar12 = (CDataManager *)G_CDataManager();
      iVar4 = CDataManager::get_level_exp(pCVar12,0x55);
    }
    InterfacePacketBuf::put_int(local_a0,iVar4);
    make_charac_stat(this,(PacketGuard *)local_a0);
    uVar5 = CUserCharacInfo::GetCurExEquipSlotStat((CUserCharacInfo *)this);
    InterfacePacketBuf::put_byte(local_a0,uVar5 & 0xff);
    pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
    CInventory::MakeEquipList(pCVar9,local_a0,1,1,0);
    iVar4 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)this);
    InterfacePacketBuf::put_byte(local_a0,iVar4);
    local_78 = GetGuildDBInfo(this);
    local_74 = (uint)*(byte *)(local_78 + 0x44);
    local_e4 = InterfacePacketBuf::get_index(local_a0);
    local_70 = 0;
    InterfacePacketBuf::put_byte(local_a0,0);
    for (local_68 = 0; local_68 < 0xcc; local_68 = local_68 + 1) {
      iVar4 = CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
      if (*(char *)(iVar4 + 6 + (local_68 + 0x20) * 2) != '\0') {
        iVar4 = CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
        InterfacePacketBuf::put_byte(local_a0,(uint)*(byte *)(iVar4 + 6 + (local_68 + 0x20) * 2));
        iVar4 = CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
        InterfacePacketBuf::put_byte(local_a0,(int)*(char *)(iVar4 + 7 + (local_68 + 0x20) * 2));
        local_70 = local_70 + 1;
      }
    }
    for (local_64 = 0; local_64 < (int)local_74; local_64 = local_64 + 1) {
      cVar2 = CUserCharacInfo::getGuildMemberGrade((CUserCharacInfo *)this);
      if (((cVar2 == '\0') ||
          (cVar2 = CUserCharacInfo::getGuildMemberGrade((CUserCharacInfo *)this), cVar2 == '\0')) ||
         (*(int *)(local_78 + local_64 * 5 + 0x45) < 200)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        InterfacePacketBuf::put_byte(local_a0,*(int *)(local_78 + local_64 * 5 + 0x45));
        InterfacePacketBuf::put_byte(local_a0,(int)*(char *)(local_78 + local_64 * 5 + 0x49));
        local_70 = local_70 + 1;
      }
    }
    InterfacePacketBuf::put_byte(local_a0,&local_e4,local_70);
    local_e4 = InterfacePacketBuf::get_index(local_a0);
    local_70 = 0;
    InterfacePacketBuf::put_byte(local_a0,0);
    for (local_60 = 0; local_60 < 0xcc; local_60 = local_60 + 1) {
      iVar4 = CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
      if (*(char *)(iVar4 + 0xe + (local_60 + 0xe8) * 2) != '\0') {
        iVar4 = CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
        InterfacePacketBuf::put_byte(local_a0,(uint)*(byte *)(iVar4 + 0xe + (local_60 + 0xe8) * 2));
        iVar4 = CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
        InterfacePacketBuf::put_byte(local_a0,(int)*(char *)(iVar4 + 0xf + (local_60 + 0xe8) * 2));
        local_70 = local_70 + 1;
      }
    }
    for (local_5c = 0; local_5c < (int)local_74; local_5c = local_5c + 1) {
      cVar2 = CUserCharacInfo::getGuildMemberGrade((CUserCharacInfo *)this);
      if (((cVar2 == '\0') ||
          (cVar2 = CUserCharacInfo::getGuildMemberGrade((CUserCharacInfo *)this), cVar2 == '\0')) ||
         (*(int *)(local_78 + local_5c * 5 + 0x45) < 200)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        InterfacePacketBuf::put_byte(local_a0,*(int *)(local_78 + local_5c * 5 + 0x45));
        InterfacePacketBuf::put_byte(local_a0,(int)*(char *)(local_78 + local_5c * 5 + 0x49));
        local_70 = local_70 + 1;
      }
    }
    InterfacePacketBuf::put_byte(local_a0,&local_e4,local_70);
    pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
    pCVar10 = (CCreatureMgr *)CInventory::GetCreatureMgrR(pCVar9);
    iVar4 = user_creature::CCreatureMgr::GetEquipedCreatureLevel(pCVar10);
    InterfacePacketBuf::put_byte(local_a0,iVar4);
    InterfacePacketBuf::put_byte(local_a0,6);
    for (local_58 = 0; local_58 < 6; local_58 = local_58 + 1) {
      cVar2 = CUserCharacInfo::getDemensionInoutValue((CUserCharacInfo *)this,(char)local_58);
      InterfacePacketBuf::put_byte(local_a0,(int)cVar2);
    }
    cVar2 = village_attacked::CRevengeDungeon::IsOpenRevengeDungeon(GlobalData::s_revengeDungeonMgr)
    ;
    if (cVar2 == '\0') {
      InterfacePacketBuf::put_byte(local_a0,0);
    }
    else {
      uVar5 = CUserCharacInfo::GetCurRevengeDungeonCount((CUserCharacInfo *)this);
      InterfacePacketBuf::put_byte(local_a0,uVar5 & 0xff);
    }
    cVar2 = CUserCharacInfo::getUltimateInoutValue((CUserCharacInfo *)this,'\x02');
    InterfacePacketBuf::put_byte(local_a0,(int)cVar2);
    local_54 = (TOD_UserState *)GetCharacExpandData(this,0xd);
    iVar4 = TOD_UserState::getEnterCount(local_54);
    InterfacePacketBuf::put_byte(local_a0,iVar4);
    pCVar12 = (CDataManager *)G_CDataManager();
    cVar2 = CDataManager::get_limit_inout_count(pCVar12,1);
    local_50 = (int)cVar2;
    this_00 = (CCharacBloodDungeon *)GetCharacExpandData(this,1);
    local_4c = CCharacBloodDungeon::GetEnterCount(this_00);
    if (local_50 - local_4c < 0) {
      InterfacePacketBuf::put_byte(local_a0,0);
    }
    else {
      InterfacePacketBuf::put_byte(local_a0,local_50 - local_4c);
    }
    local_6c = (CQuestShop *)GetCharacExpandData(this,0xb);
    CQuestShop::makePacket_BuyingStatusList(local_6c,(PacketGuard *)local_a0,false);
    iVar4 = GetManageLevel(this);
    InterfacePacketBuf::put_byte(local_a0,iVar4);
    unlock(this);
  }
  else if (param_2 < '\x02') {
    if (param_2 == '\0') {
      iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
      if (iVar4 == 0) {
        LogManager::logFormat
                  (1,"user.cpp","bool CUser::make_basic_info(char*, char)",0x308c,
                   "Error ENUM_USERINFO_MINIMUM, getCurCharacR() == 0");
        return 0;
      }
      lock(this);
      uVar5 = get_unique_id(this);
      InterfacePacketBuf::put_short(local_a0,uVar5 & 0xffff);
      pcVar6 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)this);
      sVar7 = strlen(pcVar6);
      InterfacePacketBuf::put_int(local_a0,sVar7);
      pcVar6 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)this);
      sVar7 = strlen(pcVar6);
      pcVar6 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)this);
      InterfacePacketBuf::put_str(local_a0,pcVar6,sVar7);
      iVar4 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
      InterfacePacketBuf::put_byte(local_a0,iVar4);
      cVar2 = CUserCharacInfo::getCurCharacGrowType((CUserCharacInfo *)this);
      InterfacePacketBuf::put_byte(local_a0,(int)cVar2);
      pGVar8 = (GameWorld *)G_GameWorld();
      cVar2 = GameWorld::IsCharacterLevelRevisionChannel(pGVar8);
      if (cVar2 == '\0') {
        iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
      }
      else {
        iVar4 = 0x55;
      }
      InterfacePacketBuf::put_byte(local_a0,iVar4);
      iVar4 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)this);
      InterfacePacketBuf::put_byte(local_a0,iVar4);
      iVar4 = CUserCharacInfo::getPVPResultR((CUserCharacInfo *)this);
      InterfacePacketBuf::put_byte(local_a0,*(int *)(iVar4 + 0x5c));
      iVar4 = GetUserState(this);
      InterfacePacketBuf::put_byte(local_a0,iVar4);
      pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
      CInventory::MakeEquipList(pCVar9,local_a0,0,0,0);
      get_acc_id(this);
      InterfacePacketBuf::put_byte(local_a0,0);
      pGVar8 = (GameWorld *)G_GameWorld();
      cVar2 = GameWorld::IsSchoolPvPChannel(pGVar8);
      if ((cVar2 == '\0') || (iVar4 = GetSchoolNo(this), iVar4 == 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        iVar4 = GetSchoolNo(this);
        InterfacePacketBuf::put_int(local_a0,iVar4);
      }
      pGVar8 = (GameWorld *)G_GameWorld();
      iVar4 = GameWorld::GetChannelType(pGVar8);
      if (iVar4 == 0xe) {
        iVar4 = CUserCharacInfo::GetCurCharacOnlinePreliminaryTeamId((CUserCharacInfo *)this);
        InterfacePacketBuf::put_int(local_a0,iVar4);
      }
      else {
        iVar4 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)this);
        InterfacePacketBuf::put_int(local_a0,iVar4);
      }
      uVar5 = IsPermissionPrivateStore(this);
      InterfacePacketBuf::put_byte(local_a0,uVar5 & 0xff);
      pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
      pCVar10 = (CCreatureMgr *)CInventory::GetCreatureMgrR(pCVar9);
      iVar4 = user_creature::CCreatureMgr::GetCreatureItemId(pCVar10);
      InterfacePacketBuf::put_int(local_a0,iVar4);
      pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
      pCVar10 = (CCreatureMgr *)CInventory::GetCreatureMgrR(pCVar9);
      local_9c = (char *)user_creature::CCreatureMgr::GetCreatureName(pCVar10);
      local_98 = strlen(local_9c);
      InterfacePacketBuf::put_int(local_a0,local_98);
      InterfacePacketBuf::put_str(local_a0,local_9c,local_98);
      pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
      pCVar10 = (CCreatureMgr *)CInventory::GetCreatureMgrR(pCVar9);
      cVar2 = user_creature::CCreatureMgr::IsDieCreature(pCVar10);
      InterfacePacketBuf::put_byte(local_a0,(uint)(cVar2 == '\0'));
      uVar5 = isAffectedPremium(this,0xc);
      InterfacePacketBuf::put_byte(local_a0,uVar5 & 0xff);
      iVar4 = GetPCRoomNo(this);
      InterfacePacketBuf::put_int(local_a0,iVar4);
      local_94 = CUserCharacInfo::getCurrCharacBlackCount((CUserCharacInfo *)this);
      InterfacePacketBuf::put_int(local_a0,local_94);
      local_90 = (char *)GetGuildDBInfo(this);
      pGVar8 = (GameWorld *)G_GameWorld();
      cVar2 = GameWorld::IsSchoolPvPChannel(pGVar8);
      if ((cVar2 == '\0') || (iVar4 = GetSchoolNo(this), iVar4 == 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        uVar5 = CLeagueMatch::GetPlayCountPerOneTeam();
        InterfacePacketBuf::put_byte(local_a0,uVar5 & 0xff);
        iVar4 = std::string::length((string *)(this + 0x8e080));
        InterfacePacketBuf::put_int(local_a0,iVar4);
        iVar4 = std::string::length((string *)(this + 0x8e080));
        pcVar6 = (char *)std::string::c_str((string *)(this + 0x8e080));
        InterfacePacketBuf::put_str(local_a0,pcVar6,iVar4);
      }
      else {
        pGVar8 = (GameWorld *)G_GameWorld();
        iVar4 = GameWorld::GetChannelType(pGVar8);
        if (iVar4 == 0xe) {
          uVar5 = online_preliminary::COnlinePreliminary::GetPlayCountPerOneTeam();
          InterfacePacketBuf::put_byte(local_a0,uVar5 & 0xff);
          pcVar6 = (char *)CUserCharacInfo::GetCurCharacOnlinePreliminaryTeamName
                                     ((CUserCharacInfo *)this);
          sVar7 = strlen(pcVar6);
          InterfacePacketBuf::put_int(local_a0,sVar7);
          pcVar6 = (char *)CUserCharacInfo::GetCurCharacOnlinePreliminaryTeamName
                                     ((CUserCharacInfo *)this);
          sVar7 = strlen(pcVar6);
          pcVar6 = (char *)CUserCharacInfo::GetCurCharacOnlinePreliminaryTeamName
                                     ((CUserCharacInfo *)this);
          InterfacePacketBuf::put_str(local_a0,pcVar6,sVar7);
        }
        else {
          InterfacePacketBuf::put_byte(local_a0,(uint)(byte)local_90[0x1b]);
          local_84 = strlen(local_90);
          InterfacePacketBuf::put_int(local_a0,local_84);
          InterfacePacketBuf::put_str(local_a0,local_90,local_84);
        }
      }
      iVar4 = CUserCharacInfo::GetCurCharacChaosPoint((CUserCharacInfo *)this);
      InterfacePacketBuf::put_int(local_a0,iVar4);
      uVar5 = GetAge(this);
      InterfacePacketBuf::put_byte(local_a0,(uint)(0xe < uVar5));
      cVar2 = getPowerSide(this);
      InterfacePacketBuf::put_byte(local_a0,(int)cVar2);
      cVar2 = CUserCharacInfo::isJoinPowerWar((CUserCharacInfo *)this);
      InterfacePacketBuf::put_byte(local_a0,(int)cVar2);
      iVar4 = CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)this);
      InterfacePacketBuf::put_byte(local_a0,iVar4);
      iVar4 = CUserCharacInfo::GetCurCharacExpertJobExp((CUserCharacInfo *)this);
      InterfacePacketBuf::put_int(local_a0,iVar4);
      uVar5 = CUserCharacInfo::getDisguiseKind((CUserCharacInfo *)this);
      InterfacePacketBuf::put_byte(local_a0,uVar5 & 0xff);
      uVar5 = CUserCharacInfo::getDisguiseIndex((CUserCharacInfo *)this);
      InterfacePacketBuf::put_short(local_a0,uVar5 & 0xffff);
      cVar2 = CUserCharacInfo::get_charac_visible_values((CUserCharacInfo *)this);
      InterfacePacketBuf::put_byte(local_a0,(int)cVar2);
      pcVar6 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)this);
      pGVar8 = (GameWorld *)G_GameWorld();
      cVar2 = GameWorld::IsForbiddenChat(pGVar8,pcVar6);
      if (cVar2 == '\0') {
        InterfacePacketBuf::put_int(local_a0,0);
      }
      else {
        local_80 = 0;
        pcVar6 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)this);
        pGVar8 = (GameWorld *)G_GameWorld();
        local_80 = GameWorld::GetLeftTimeOfForbiddenChat(pGVar8,pcVar6);
        if (local_80 == 0) {
          pcVar6 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)this);
          pGVar8 = (GameWorld *)G_GameWorld();
          GameWorld::EnableChat(pGVar8,pcVar6);
        }
        uVar11 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)this);
        cMyTrace::cMyTrace(local_e0,"bool CUser::make_basic_info(char*, char)",0x3154,0);
        cMyTrace::operator()(local_e0,"%s FCT1: %ld\n",uVar11,local_80);
        local_80 = local_80 / 60000;
        uVar11 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)this);
        cMyTrace::cMyTrace(local_d0,"bool CUser::make_basic_info(char*, char)",0x3156,0);
        cMyTrace::operator()(local_d0,"%s FCT2: %ld\n",uVar11,local_80);
        InterfacePacketBuf::put_int(local_a0,local_80);
      }
      pcVar6 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)this);
      pGVar8 = (GameWorld *)G_GameWorld();
      cVar2 = GameWorld::IsForbiddenMove(pGVar8,pcVar6);
      if (cVar2 == '\0') {
        InterfacePacketBuf::put_int(local_a0,0);
      }
      else {
        local_7c = 0;
        pcVar6 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)this);
        pGVar8 = (GameWorld *)G_GameWorld();
        local_7c = GameWorld::GetLeftTimeOfForbiddenMove(pGVar8,pcVar6);
        if (local_7c == 0) {
          pcVar6 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)this);
          pGVar8 = (GameWorld *)G_GameWorld();
          GameWorld::EnableMove(pGVar8,pcVar6);
        }
        uVar11 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)this);
        cMyTrace::cMyTrace(local_c0,"bool CUser::make_basic_info(char*, char)",0x3163,0);
        cMyTrace::operator()(local_c0,"%s FMT1: %ld\n",uVar11,local_7c);
        local_7c = local_7c / 60000;
        uVar11 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)this);
        cMyTrace::cMyTrace(local_b0,"bool CUser::make_basic_info(char*, char)",0x3165,0);
        cMyTrace::operator()(local_b0,"%s FMT2: %ld\n",uVar11,local_7c);
        InterfacePacketBuf::put_int(local_a0,local_7c);
      }
      iVar4 = CUserCharacInfo::getCurCharacHelpAbuseComputedRatio((CUserCharacInfo *)this);
      InterfacePacketBuf::put_int(local_a0,iVar4);
      iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
      InterfacePacketBuf::put_byte(local_a0,(uint)*(byte *)(iVar4 + 0x75));
      uVar5 = CUserCharacInfo::getCurCharacUsedFatigue((CUserCharacInfo *)this);
      InterfacePacketBuf::put_short(local_a0,uVar5 & 0xffff);
      iVar4 = GetServerGroup(this);
      InterfacePacketBuf::put_byte(local_a0,iVar4);
      sVar3 = CUserCharacInfo::GetUserPowerWarPoint((CUserCharacInfo *)this);
      InterfacePacketBuf::put_short(local_a0,(int)sVar3);
      uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
      local_8c = CPowerManager::GetRankingByCharacNo(GlobalData::s_power_manager,uVar5);
      InterfacePacketBuf::put_byte(local_a0,local_8c);
      local_88 = CUserCharacInfo::GetCurCharacEmotion((CUserCharacInfo *)this);
      InterfacePacketBuf::put_short(local_a0,(int)local_88);
      local_86 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)this);
      InterfacePacketBuf::put_byte(local_a0,(int)local_86);
      cVar2 = IsReturnUser(this);
      if (cVar2 == '\0') {
        InterfacePacketBuf::put_byte(local_a0,0);
      }
      else {
        InterfacePacketBuf::put_byte(local_a0,1);
      }
      local_85 = CUserCharacInfo::getCharacLinkType((CUserCharacInfo *)this);
      cVar2 = CUserCharacInfo::getLinkCharacSlotIndex((CUserCharacInfo *)this);
      InterfacePacketBuf::put_byte(local_a0,(int)cVar2);
      InterfacePacketBuf::put_byte(local_a0,(int)local_85);
      unlock(this);
    }
  }
  else if (param_2 == '\x02') {
    lock(this);
    uVar5 = getCharacSlotLimit(this);
    InterfacePacketBuf::put_byte(local_a0,uVar5 & 0xff);
    uVar5 = getSlotEffectCount(this);
    InterfacePacketBuf::put_byte(local_a0,uVar5 & 0xff);
    iVar4 = GetManageLevel(this);
    InterfacePacketBuf::put_byte(local_a0,iVar4);
    iVar4 = GetManagePoint(this);
    InterfacePacketBuf::put_int(local_a0,iVar4);
    local_24 = 0;
    local_ec = InterfacePacketBuf::get_index(local_a0);
    InterfacePacketBuf::put_short(local_a0,local_24);
    local_20 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    local_1c = 0;
    while (iVar4 = std::vector<_Charac_info,std::allocator<_Charac_info>>::size
                             ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8))
          , (int)local_1c < iVar4) {
      pGVar8 = (GameWorld *)G_GameWorld();
      iVar4 = GameWorld::GetChannelType(pGVar8);
      if (iVar4 == 0xe) {
        piVar13 = (int *)std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                                   ((vector<_Charac_info,std::allocator<_Charac_info>> *)
                                    (this + 0x796e8),local_1c);
        iVar4 = *piVar13;
        iVar14 = getOnlinePreliminaryCharacNo(this);
        if (iVar4 == iVar14) goto LAB_0865bf4a;
      }
      else {
LAB_0865bf4a:
        iVar4 = local_24;
        local_24 = local_24 + 1;
        InterfacePacketBuf::put_short(local_a0,iVar4);
        iVar4 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                          ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                           local_1c);
        sVar7 = strlen((char *)(iVar4 + 4));
        InterfacePacketBuf::put_int(local_a0,sVar7);
        iVar4 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                          ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                           local_1c);
        sVar7 = strlen((char *)(iVar4 + 4));
        iVar4 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                          ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                           local_1c);
        InterfacePacketBuf::put_str(local_a0,(char *)(iVar4 + 4),sVar7);
        iVar4 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                          ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                           local_1c);
        cVar2 = checkSpecialChar((char *)(iVar4 + 4));
        if (cVar2 == '\0') {
          iVar4 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                            ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                             local_1c);
          cVar2 = checkSpecialCharName((char *)(iVar4 + 4));
          if (cVar2 != '\0') goto LAB_0865c040;
          local_16 = 0;
        }
        else {
LAB_0865c040:
          local_16 = 1;
        }
        InterfacePacketBuf::put_byte(local_a0,(uint)local_16);
        iVar4 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                          ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                           local_1c);
        InterfacePacketBuf::put_byte(local_a0,(int)*(char *)(iVar4 + 0x26));
        iVar4 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                          ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                           local_1c);
        InterfacePacketBuf::put_byte(local_a0,(int)*(char *)(iVar4 + 0x29));
        iVar4 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                          ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                           local_1c);
        InterfacePacketBuf::put_byte(local_a0,(int)*(short *)(iVar4 + 0x27));
        InterfacePacketBuf::put_byte(local_a0,0);
        iVar4 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                          ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                           local_1c);
        if (local_20 < *(int *)(iVar4 + 0x12ad)) {
          iVar4 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                            ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                             local_1c);
          *(undefined1 *)(iVar4 + 0xe66) = 1;
        }
        else {
          iVar4 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                            ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                             local_1c);
          *(undefined1 *)(iVar4 + 0xe66) = 0;
        }
        iVar4 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                          ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                           local_1c);
        if (*(int *)(iVar4 + 0x14c6) == 0xff) {
          InterfacePacketBuf::put_byte(local_a0,8);
        }
        else {
          iVar4 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                            ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                             local_1c);
          if (*(char *)(iVar4 + 0xe66) == '\0') {
            InterfacePacketBuf::put_byte(local_a0,0);
          }
          else {
            InterfacePacketBuf::put_byte(local_a0,4);
          }
        }
        iVar4 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                          ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                           local_1c);
        CInventory::MakeEquipList((CInventory *)(iVar4 + 0xda),local_a0,0,2,0);
        get_acc_id(this);
        InterfacePacketBuf::put_byte(local_a0,0);
        iVar4 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)this);
        InterfacePacketBuf::put_int(local_a0,iVar4);
        uVar5 = IsPermissionPrivateStore(this);
        InterfacePacketBuf::put_byte(local_a0,uVar5 & 0xff);
        uVar5 = isAffectedPremium(this,0xc);
        InterfacePacketBuf::put_byte(local_a0,uVar5 & 0xff);
        iVar4 = GetPCRoomNo(this);
        InterfacePacketBuf::put_int(local_a0,iVar4);
        iVar4 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                          ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                           local_1c);
        InterfacePacketBuf::put_byte(local_a0,(int)*(char *)(iVar4 + 0xe40));
        iVar4 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                          ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                           local_1c);
        InterfacePacketBuf::put_byte(local_a0,(uint)*(byte *)(iVar4 + 0x1240));
        iVar4 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                          ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                           local_1c);
        local_15 = *(char *)(iVar4 + 0x1246);
        InterfacePacketBuf::put_byte(local_a0,(int)local_15);
        iVar4 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                          ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                           local_1c);
        if (*(char *)(iVar4 + 0x83) == '\0') {
          InterfacePacketBuf::put_int(local_a0,0);
        }
        else {
          iVar4 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                            ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                             local_1c);
          if (*(int *)(iVar4 + 0x84) < 1) {
            InterfacePacketBuf::put_int(local_a0,0);
            iVar4 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                              ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8)
                               ,local_1c);
            *(undefined1 *)(iVar4 + 0x83) = 0;
            iVar4 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                              ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8)
                               ,local_1c);
            *(undefined4 *)(iVar4 + 0x84) = 0;
            pSVar15 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"user.cpp",0x344c);
            CStreamGuard::CStreamGuard(local_f4,pSVar15,true);
            pCVar16 = (CStreamGuard *)CStreamGuard::operator*(local_f4);
                    /* try { // try from 0865c509 to 0865c5b7 has its CatchHandler @ 0865c5ba */
            CStreamGuard::operator<<(pCVar16,0x93);
            iVar4 = GetUID(this);
            pCVar16 = (CStreamGuard *)CStreamGuard::operator*(local_f4);
            CStreamGuard::operator<<(pCVar16,iVar4);
            pCVar16 = (CStreamGuard *)CStreamGuard::operator->(local_f4);
            local_10 = CStreamGuard::GetInBuffer<SIG_FORBID_USER_TO_PLAY>(pCVar16);
            memset(local_10,0,9);
            puVar17 = (undefined4 *)
                      std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                                ((vector<_Charac_info,std::allocator<_Charac_info>> *)
                                 (this + 0x796e8),local_1c);
            *(undefined4 *)local_10 = *puVar17;
            local_10[4] = (SIG_FORBID_USER_TO_PLAY)0x0;
            *(undefined4 *)(local_10 + 5) = 0;
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_f4);
            CStreamGuard::~CStreamGuard(local_f4);
          }
          else {
            iVar4 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                              ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8)
                               ,local_1c);
            local_14 = *(int *)(iVar4 + 0x84) / 0x15180;
            if (local_14 < 1) {
              InterfacePacketBuf::put_int(local_a0,1);
            }
            else {
              InterfacePacketBuf::put_int(local_a0,local_14);
            }
          }
        }
      }
      local_1c = local_1c + 1;
    }
    InterfacePacketBuf::put_short(local_a0,&local_ec,local_24);
    unlock(this);
  }
  else if (param_2 == '\x03') {
    iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
    if (iVar4 == 0) {
      LogManager::logFormat
                (1,"user.cpp","bool CUser::make_basic_info(char*, char)",0x328c,
                 "Error ENUM_USERINFO_OTHER_CHARACTER, getCurCharacR() == 0");
      return 0;
    }
    lock(this);
    InterfacePacketBuf::put_short(local_a0,(uint)*(ushort *)(this + 0x704a8));
    pGVar8 = (GameWorld *)G_GameWorld();
    cVar2 = GameWorld::IsCharacterLevelRevisionChannel(pGVar8);
    if (cVar2 == '\0') {
      iVar4 = CUserCharacInfo::get_charac_exp((CUserCharacInfo *)this);
    }
    else {
      pCVar12 = (CDataManager *)G_CDataManager();
      iVar4 = CDataManager::get_level_exp(pCVar12,0x55);
    }
    InterfacePacketBuf::put_int(local_a0,iVar4);
    make_charac_stat(this,(PacketGuard *)local_a0);
    uVar5 = CUserCharacInfo::GetCurExEquipSlotStat((CUserCharacInfo *)this);
    InterfacePacketBuf::put_byte(local_a0,uVar5 & 0xff);
    pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
    CInventory::MakeEquipList(pCVar9,local_a0,1,3,0);
    iVar4 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)this);
    InterfacePacketBuf::put_byte(local_a0,iVar4);
    local_48 = GetGuildDBInfo(this);
    local_44 = (uint)*(byte *)(local_48 + 0x44);
    local_e8 = InterfacePacketBuf::get_index(local_a0);
    local_40 = 0;
    InterfacePacketBuf::put_byte(local_a0,0);
    for (local_34 = 0; local_34 < 0xcc; local_34 = local_34 + 1) {
      iVar4 = CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
      if (*(char *)(iVar4 + 6 + (local_34 + 0x20) * 2) != '\0') {
        iVar4 = CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
        InterfacePacketBuf::put_byte(local_a0,(uint)*(byte *)(iVar4 + 6 + (local_34 + 0x20) * 2));
        iVar4 = CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
        InterfacePacketBuf::put_byte(local_a0,(int)*(char *)(iVar4 + 7 + (local_34 + 0x20) * 2));
        local_40 = local_40 + 1;
      }
    }
    for (local_30 = 0; local_30 < (int)local_44; local_30 = local_30 + 1) {
      cVar2 = CUserCharacInfo::getGuildMemberGrade((CUserCharacInfo *)this);
      if (((cVar2 == '\0') ||
          (cVar2 = CUserCharacInfo::getGuildMemberGrade((CUserCharacInfo *)this), cVar2 == '\0')) ||
         (*(int *)(local_48 + local_30 * 5 + 0x45) < 200)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        InterfacePacketBuf::put_byte(local_a0,*(int *)(local_48 + local_30 * 5 + 0x45));
        InterfacePacketBuf::put_byte(local_a0,(int)*(char *)(local_48 + local_30 * 5 + 0x49));
        local_40 = local_40 + 1;
      }
    }
    InterfacePacketBuf::put_byte(local_a0,&local_e8,local_40);
    local_e8 = InterfacePacketBuf::get_index(local_a0);
    local_40 = 0;
    InterfacePacketBuf::put_byte(local_a0,0);
    for (local_2c = 0; local_2c < 0xcc; local_2c = local_2c + 1) {
      iVar4 = CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
      if (*(char *)(iVar4 + 0xe + (local_2c + 0xe8) * 2) != '\0') {
        iVar4 = CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
        InterfacePacketBuf::put_byte(local_a0,(uint)*(byte *)(iVar4 + 0xe + (local_2c + 0xe8) * 2));
        iVar4 = CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
        InterfacePacketBuf::put_byte(local_a0,(int)*(char *)(iVar4 + 0xf + (local_2c + 0xe8) * 2));
        local_40 = local_40 + 1;
      }
    }
    for (local_28 = 0; local_28 < (int)local_44; local_28 = local_28 + 1) {
      cVar2 = CUserCharacInfo::getGuildMemberGrade((CUserCharacInfo *)this);
      if (((cVar2 == '\0') ||
          (cVar2 = CUserCharacInfo::getGuildMemberGrade((CUserCharacInfo *)this), cVar2 == '\0')) ||
         (*(int *)(local_48 + local_28 * 5 + 0x45) < 200)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        InterfacePacketBuf::put_byte(local_a0,*(int *)(local_48 + local_28 * 5 + 0x45));
        InterfacePacketBuf::put_byte(local_a0,(int)*(char *)(local_48 + local_28 * 5 + 0x49));
        local_40 = local_40 + 1;
      }
    }
    InterfacePacketBuf::put_byte(local_a0,&local_e8,local_40);
    pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
    pCVar10 = (CCreatureMgr *)CInventory::GetCreatureMgrR(pCVar9);
    iVar4 = user_creature::CCreatureMgr::GetEquipedCreatureLevel(pCVar10);
    InterfacePacketBuf::put_byte(local_a0,iVar4);
    piVar13 = (int *)CUserCharacInfo::getPVPResultR((CUserCharacInfo *)this);
    InterfacePacketBuf::put_int(local_a0,*piVar13);
    iVar4 = CUserCharacInfo::getPVPResultR((CUserCharacInfo *)this);
    InterfacePacketBuf::put_int(local_a0,*(int *)(iVar4 + 4));
    iVar4 = CUserCharacInfo::getPVPResultR((CUserCharacInfo *)this);
    InterfacePacketBuf::put_int(local_a0,*(int *)(iVar4 + 0x14));
    iVar4 = CUserCharacInfo::getPVPResultR((CUserCharacInfo *)this);
    InterfacePacketBuf::put_byte(local_a0,*(int *)(iVar4 + 0x5c));
    iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
    InterfacePacketBuf::put_byte(local_a0,(int)*(char *)(iVar4 + 0x39));
    iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
    InterfacePacketBuf::put_byte(local_a0,(int)*(char *)(iVar4 + 0x3a));
    iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
    InterfacePacketBuf::put_byte(local_a0,(int)*(char *)(iVar4 + 0x3b));
    iVar4 = CUserCharacInfo::getCurCharacHelpAbuseComputedRatio((CUserCharacInfo *)this);
    InterfacePacketBuf::put_int(local_a0,iVar4);
    sVar3 = CUserCharacInfo::GetUserPowerWarPoint((CUserCharacInfo *)this);
    InterfacePacketBuf::put_short(local_a0,(int)sVar3);
    iVar4 = GetGuildPowerWarPoint(this);
    InterfacePacketBuf::put_int(local_a0,iVar4);
    pcVar6 = (char *)GetGuildName(this);
    local_3c = strlen(pcVar6);
    InterfacePacketBuf::put_int(local_a0,local_3c);
    pcVar6 = (char *)GetGuildName(this);
    InterfacePacketBuf::put_str(local_a0,pcVar6,local_3c);
    uVar5 = GetGuildLevel(this);
    InterfacePacketBuf::put_byte(local_a0,uVar5 & 0xff);
    cVar2 = getPowerSide(this);
    InterfacePacketBuf::put_byte(local_a0,(int)cVar2);
    cVar2 = IsExistGuildAgit(this);
    if (cVar2 == '\0') {
      InterfacePacketBuf::put_byte(local_a0,0);
    }
    else {
      InterfacePacketBuf::put_byte(local_a0,1);
    }
    local_38 = (CQuestShop *)GetCharacExpandData(this,0xb);
    CQuestShop::makePacket_BuyingStatusList(local_38,(PacketGuard *)local_a0,false);
    iVar4 = GetManageLevel(this);
    InterfacePacketBuf::put_byte(local_a0,iVar4);
    unlock(this);
  }
  return 1;
}
```
