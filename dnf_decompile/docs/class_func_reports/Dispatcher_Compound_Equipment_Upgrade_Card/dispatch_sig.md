# dispatch_sig

`_ZN42Dispatcher_Compound_Equipment_Upgrade_Card12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_Compound_Equipment_Upgrade_Card::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Compound_Equipment_Upgrade_Card` | `0x08227e00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08227e00  _ZN42Dispatcher_Compound_Equipment_Upgrade_Card12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_Compound_Equipment_Upgrade_Card::dispatch_sig(CUser*, PacketBuf&)
# range [0x08227e00, 0x08228a2d]
08227e00 +0x000:  push   %ebp
08227e01 +0x001:  mov    %esp,%ebp
08227e03 +0x003:  push   %esi
08227e04 +0x004:  push   %ebx
08227e05 +0x005:  sub    $0x1e0,%esp
08227e0b +0x00b:  mov    0xc(%ebp),%eax
08227e0e +0x00e:  mov    %eax,(%esp)
08227e11 +0x011:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08227e16 +0x016:  cmp    $0x3,%eax
08227e19 +0x019:  jne    08227e2a <+0x2a>
08227e1b +0x01b:  mov    0xc(%ebp),%eax
08227e1e +0x01e:  mov    %eax,(%esp)
08227e21 +0x021:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08227e26 +0x026:  test   %eax,%eax
08227e28 +0x028:  jne    08227e31 <+0x31>
08227e2a +0x02a:  mov    $0x1,%eax
08227e2f +0x02f:  jmp    08227e36 <+0x36>
08227e31 +0x031:  mov    $0x0,%eax
08227e36 +0x036:  test   %al,%al
08227e38 +0x038:  je     08227e44 <+0x44>
08227e3a +0x03a:  mov    $0x0,%ebx
08227e3f +0x03f:  jmp    08228a21 <+0xc21>
08227e44 +0x044:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08227e49 +0x049:  mov    %eax,(%esp)
08227e4c +0x04c:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
08227e51 +0x051:  cmp    $0x7,%eax
08227e54 +0x054:  sete   %al
08227e57 +0x057:  test   %al,%al
08227e59 +0x059:  je     08227e86 <+0x86>
08227e5b +0x05b:  movl   $0x0,0xc(%esp)
08227e63 +0x063:  movl   $0x0,0x8(%esp)
08227e6b +0x06b:  movl   $&_ZZN42Dispatcher_Compound_Equipment_Upgrade_Card12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08227e73 +0x073:  movl   $0xe4c3,(%esp)
08227e7a +0x07a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08227e7f +0x07f:  mov    %eax,%ebx
08227e81 +0x081:  jmp    08228a21 <+0xc21>
08227e86 +0x086:  lea    -0x2c(%ebp),%eax
08227e89 +0x089:  mov    %eax,0x4(%esp)
08227e8d +0x08d:  mov    0x10(%ebp),%eax
08227e90 +0x090:  mov    %eax,(%esp)
08227e93 +0x093:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
08227e98 +0x098:  lea    -0x2c(%ebp),%eax
08227e9b +0x09b:  add    $0x2,%eax
08227e9e +0x09e:  mov    %eax,0x4(%esp)
08227ea2 +0x0a2:  mov    0x10(%ebp),%eax
08227ea5 +0x0a5:  mov    %eax,(%esp)
08227ea8 +0x0a8:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
08227ead +0x0ad:  lea    -0x2e(%ebp),%eax
08227eb0 +0x0b0:  mov    %eax,0x4(%esp)
08227eb4 +0x0b4:  mov    0x10(%ebp),%eax
08227eb7 +0x0b7:  mov    %eax,(%esp)
08227eba +0x0ba:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
08227ebf +0x0bf:  lea    -0x154(%ebp),%eax
08227ec5 +0x0c5:  mov    %eax,%ebx
08227ec7 +0x0c7:  mov    $0x1,%esi
08227ecc +0x0cc:  jmp    08227edc <+0xdc>
08227ece +0x0ce:  mov    %ebx,(%esp)
08227ed1 +0x0d1:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08227ed6 +0x0d6:  add    $0x3d,%ebx
08227ed9 +0x0d9:  sub    $0x1,%esi
08227edc +0x0dc:  cmp    $0xffffffff,%esi
08227edf +0x0df:  setne  %al
08227ee2 +0x0e2:  test   %al,%al
08227ee4 +0x0e4:  jne    08227ece <+0xce>
08227ee6 +0x0e6:  movzwl -0x2c(%ebp),%eax
08227eea +0x0ea:  movzwl %ax,%ebx
08227eed +0x0ed:  mov    0xc(%ebp),%eax
08227ef0 +0x0f0:  mov    %eax,(%esp)
08227ef3 +0x0f3:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08227ef8 +0x0f8:  lea    -0x198(%ebp),%edx
08227efe +0x0fe:  mov    %ebx,0xc(%esp)
08227f02 +0x102:  movl   $0x1,0x8(%esp)
08227f0a +0x10a:  mov    %eax,0x4(%esp)
08227f0e +0x10e:  mov    %edx,(%esp)
08227f11 +0x111:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08227f16 +0x116:  sub    $0x4,%esp
08227f19 +0x119:  mov    -0x198(%ebp),%eax
08227f1f +0x11f:  mov    %eax,-0x154(%ebp)
08227f25 +0x125:  mov    -0x194(%ebp),%eax
08227f2b +0x12b:  mov    %eax,-0x150(%ebp)
08227f31 +0x131:  mov    -0x190(%ebp),%eax
08227f37 +0x137:  mov    %eax,-0x14c(%ebp)
08227f3d +0x13d:  mov    -0x18c(%ebp),%eax
08227f43 +0x143:  mov    %eax,-0x148(%ebp)
08227f49 +0x149:  mov    -0x188(%ebp),%eax
08227f4f +0x14f:  mov    %eax,-0x144(%ebp)
08227f55 +0x155:  mov    -0x184(%ebp),%eax
08227f5b +0x15b:  mov    %eax,-0x140(%ebp)
08227f61 +0x161:  mov    -0x180(%ebp),%eax
08227f67 +0x167:  mov    %eax,-0x13c(%ebp)
08227f6d +0x16d:  mov    -0x17c(%ebp),%eax
08227f73 +0x173:  mov    %eax,-0x138(%ebp)
08227f79 +0x179:  mov    -0x178(%ebp),%eax
08227f7f +0x17f:  mov    %eax,-0x134(%ebp)
08227f85 +0x185:  mov    -0x174(%ebp),%eax
08227f8b +0x18b:  mov    %eax,-0x130(%ebp)
08227f91 +0x191:  mov    -0x170(%ebp),%eax
08227f97 +0x197:  mov    %eax,-0x12c(%ebp)
08227f9d +0x19d:  mov    -0x16c(%ebp),%eax
08227fa3 +0x1a3:  mov    %eax,-0x128(%ebp)
08227fa9 +0x1a9:  mov    -0x168(%ebp),%eax
08227faf +0x1af:  mov    %eax,-0x124(%ebp)
08227fb5 +0x1b5:  mov    -0x164(%ebp),%eax
08227fbb +0x1bb:  mov    %eax,-0x120(%ebp)
08227fc1 +0x1c1:  mov    -0x160(%ebp),%eax
08227fc7 +0x1c7:  mov    %eax,-0x11c(%ebp)
08227fcd +0x1cd:  movzbl -0x15c(%ebp),%eax
08227fd4 +0x1d4:  mov    %al,-0x118(%ebp)
08227fda +0x1da:  movzwl -0x2a(%ebp),%eax
08227fde +0x1de:  movzwl %ax,%ebx
08227fe1 +0x1e1:  mov    0xc(%ebp),%eax
08227fe4 +0x1e4:  mov    %eax,(%esp)
08227fe7 +0x1e7:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08227fec +0x1ec:  lea    -0x198(%ebp),%edx
08227ff2 +0x1f2:  mov    %ebx,0xc(%esp)
08227ff6 +0x1f6:  movl   $0x1,0x8(%esp)
08227ffe +0x1fe:  mov    %eax,0x4(%esp)
08228002 +0x202:  mov    %edx,(%esp)
08228005 +0x205:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0822800a +0x20a:  sub    $0x4,%esp
0822800d +0x20d:  mov    -0x198(%ebp),%eax
08228013 +0x213:  mov    %eax,-0x117(%ebp)
08228019 +0x219:  mov    -0x194(%ebp),%eax
0822801f +0x21f:  mov    %eax,-0x113(%ebp)
08228025 +0x225:  mov    -0x190(%ebp),%eax
0822802b +0x22b:  mov    %eax,-0x10f(%ebp)
08228031 +0x231:  mov    -0x18c(%ebp),%eax
08228037 +0x237:  mov    %eax,-0x10b(%ebp)
0822803d +0x23d:  mov    -0x188(%ebp),%eax
08228043 +0x243:  mov    %eax,-0x107(%ebp)
08228049 +0x249:  mov    -0x184(%ebp),%eax
0822804f +0x24f:  mov    %eax,-0x103(%ebp)
08228055 +0x255:  mov    -0x180(%ebp),%eax
0822805b +0x25b:  mov    %eax,-0xff(%ebp)
08228061 +0x261:  mov    -0x17c(%ebp),%eax
08228067 +0x267:  mov    %eax,-0xfb(%ebp)
0822806d +0x26d:  mov    -0x178(%ebp),%eax
08228073 +0x273:  mov    %eax,-0xf7(%ebp)
08228079 +0x279:  mov    -0x174(%ebp),%eax
0822807f +0x27f:  mov    %eax,-0xf3(%ebp)
08228085 +0x285:  mov    -0x170(%ebp),%eax
0822808b +0x28b:  mov    %eax,-0xef(%ebp)
08228091 +0x291:  mov    -0x16c(%ebp),%eax
08228097 +0x297:  mov    %eax,-0xeb(%ebp)
0822809d +0x29d:  mov    -0x168(%ebp),%eax
082280a3 +0x2a3:  mov    %eax,-0xe7(%ebp)
082280a9 +0x2a9:  mov    -0x164(%ebp),%eax
082280af +0x2af:  mov    %eax,-0xe3(%ebp)
082280b5 +0x2b5:  mov    -0x160(%ebp),%eax
082280bb +0x2bb:  mov    %eax,-0xdf(%ebp)
082280c1 +0x2c1:  movzbl -0x15c(%ebp),%eax
082280c8 +0x2c8:  mov    %al,-0xdb(%ebp)
082280ce +0x2ce:  mov    &_ZN10GlobalData20s_pEvent_UpGrade_JarE,%eax
082280d3 +0x2d3:  lea    -0x154(%ebp),%edx
082280d9 +0x2d9:  add    $0x3f,%edx
082280dc +0x2dc:  mov    %edx,0x8(%esp)
082280e0 +0x2e0:  lea    -0x154(%ebp),%edx
082280e6 +0x2e6:  add    $0x2,%edx
082280e9 +0x2e9:  mov    %edx,0x4(%esp)
082280ed +0x2ed:  mov    %eax,(%esp)
082280f0 +0x2f0:  call   080f4a0a <_ZN17Event_Upgrade_Jar34getBoosterIndex_byUpgradeCardIndexERmS0_>  ; Event_Upgrade_Jar::getBoosterIndex_byUpgradeCardIndex(unsigned long&, unsigned long&)
082280f5 +0x2f5:  mov    %eax,-0x18(%ebp)
082280f8 +0x2f8:  cmpl   $0x0,-0x18(%ebp)
082280fc +0x2fc:  je     08228112 <+0x312>
082280fe +0x2fe:  mov    -0x14d(%ebp),%eax
08228104 +0x304:  test   %eax,%eax
08228106 +0x306:  jle    08228112 <+0x312>
08228108 +0x308:  mov    -0x110(%ebp),%eax
0822810e +0x30e:  test   %eax,%eax
08228110 +0x310:  jg     08228137 <+0x337>
08228112 +0x312:  movl   $0x13,0x8(%esp)
0822811a +0x31a:  movl   $0x169,0x4(%esp)
08228122 +0x322:  mov    0xc(%ebp),%eax
08228125 +0x325:  mov    %eax,(%esp)
08228128 +0x328:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0822812d +0x32d:  mov    $0x0,%ebx
08228132 +0x332:  jmp    08228a21 <+0xc21>
08228137 +0x337:  movzwl -0x2e(%ebp),%eax
0822813b +0x33b:  movzwl %ax,%ebx
0822813e +0x33e:  mov    0xc(%ebp),%eax
08228141 +0x341:  mov    %eax,(%esp)
08228144 +0x344:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08228149 +0x349:  lea    -0x9d(%ebp),%edx
0822814f +0x34f:  mov    %ebx,0xc(%esp)
08228153 +0x353:  movl   $0x1,0x8(%esp)
0822815b +0x35b:  mov    %eax,0x4(%esp)
0822815f +0x35f:  mov    %edx,(%esp)
08228162 +0x362:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08228167 +0x367:  sub    $0x4,%esp
0822816a +0x36a:  mov    &_ZN10GlobalData20s_pEvent_UpGrade_JarE,%eax
0822816f +0x36f:  lea    -0x9d(%ebp),%edx
08228175 +0x375:  mov    %edx,0x4(%esp)
08228179 +0x379:  mov    %eax,(%esp)
0822817c +0x37c:  call   080f4bb0 <_ZNK17Event_Upgrade_Jar20check_requiredRecipeERK10Inven_Item>  ; Event_Upgrade_Jar::check_requiredRecipe(Inven_Item const&) const
08228181 +0x381:  xor    $0x1,%eax
08228184 +0x384:  test   %al,%al
08228186 +0x386:  je     08228192 <+0x392>
08228188 +0x388:  mov    $0x0,%ebx
0822818d +0x38d:  jmp    08228a21 <+0xc21>
08228192 +0x392:  mov    -0x18(%ebp),%ebx
08228195 +0x395:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0822819a +0x39a:  mov    %ebx,0x4(%esp)
0822819e +0x39e:  mov    %eax,(%esp)
082281a1 +0x3a1:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
082281a6 +0x3a6:  mov    %eax,-0x14(%ebp)
082281a9 +0x3a9:  cmpl   $0x0,-0x14(%ebp)
082281ad +0x3ad:  je     082281c6 <+0x3c6>
082281af +0x3af:  mov    -0x14(%ebp),%eax
082281b2 +0x3b2:  mov    (%eax),%eax
082281b4 +0x3b4:  add    $0xc,%eax
082281b7 +0x3b7:  mov    (%eax),%edx
082281b9 +0x3b9:  mov    -0x14(%ebp),%eax
082281bc +0x3bc:  mov    %eax,(%esp)
082281bf +0x3bf:  call   *%edx
082281c1 +0x3c1:  cmp    $0xf,%eax
082281c4 +0x3c4:  je     082281cd <+0x3cd>
082281c6 +0x3c6:  mov    $0x1,%eax
082281cb +0x3cb:  jmp    082281d2 <+0x3d2>
082281cd +0x3cd:  mov    $0x0,%eax
082281d2 +0x3d2:  test   %al,%al
082281d4 +0x3d4:  je     082281e0 <+0x3e0>
082281d6 +0x3d6:  mov    $0x0,%ebx
082281db +0x3db:  jmp    08228a21 <+0xc21>
082281e0 +0x3e0:  lea    -0x3c(%ebp),%eax
082281e3 +0x3e3:  mov    %eax,(%esp)
082281e6 +0x3e6:  call   08111aa8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xfba>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xfba
082281eb +0x3eb:  mov    -0x14(%ebp),%eax
082281ee +0x3ee:  lea    -0x3c(%ebp),%edx
082281f1 +0x3f1:  mov    %edx,0x4(%esp)
082281f5 +0x3f5:  mov    %eax,(%esp)
082281f8 +0x3f8:  call   0850f75e <_ZNK14CStackableItem14getBoosterItemERSt6vectorI28stStackableBoosterItemInfo_tSaIS1_EE>  ; CStackableItem::getBoosterItem(std::vector<stStackableBoosterItemInfo_t, std::allocator<stStackableBoosterItemInfo_t> >&) const
082281fd +0x3fd:  lea    -0x48(%ebp),%eax
08228200 +0x400:  mov    %eax,(%esp)
08228203 +0x403:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08228208 +0x408:  movl   $0x169,0x8(%esp)
08228210 +0x410:  movl   $0x1,0x4(%esp)
08228218 +0x418:  lea    -0x48(%ebp),%eax
0822821b +0x41b:  mov    %eax,(%esp)
0822821e +0x41e:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08228223 +0x423:  lea    -0x54(%ebp),%eax
08228226 +0x426:  mov    %eax,(%esp)
08228229 +0x429:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
0822822e +0x42e:  lea    -0x3c(%ebp),%eax
08228231 +0x431:  mov    %eax,(%esp)
08228234 +0x434:  call   08237a26 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd0d0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd0d0
08228239 +0x439:  test   %al,%al
0822823b +0x43b:  jne    0822824d <+0x44d>
0822823d +0x43d:  lea    -0x3c(%ebp),%eax
08228240 +0x440:  mov    %eax,(%esp)
08228243 +0x443:  call   08237a6a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd114>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd114
08228248 +0x448:  cmp    $0x1,%eax
0822824b +0x44b:  jbe    08228254 <+0x454>
0822824d +0x44d:  mov    $0x1,%eax
08228252 +0x452:  jmp    08228259 <+0x459>
08228254 +0x454:  mov    $0x0,%eax
08228259 +0x459:  test   %al,%al
0822825b +0x45b:  je     08228288 <+0x488>
0822825d +0x45d:  movl   $0x0,0x4(%esp)
08228265 +0x465:  lea    -0x48(%ebp),%eax
08228268 +0x468:  mov    %eax,(%esp)
0822826b +0x46b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08228270 +0x470:  movl   $0x13,0x4(%esp)
08228278 +0x478:  lea    -0x48(%ebp),%eax
0822827b +0x47b:  mov    %eax,(%esp)
0822827e +0x47e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08228283 +0x483:  jmp    08228914 <+0xb14>
08228288 +0x488:  movzwl -0x2e(%ebp),%eax
0822828c +0x48c:  movzwl %ax,%ebx
0822828f +0x48f:  mov    0xc(%ebp),%eax
08228292 +0x492:  mov    %eax,(%esp)
08228295 +0x495:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0822829a +0x49a:  movl   $0x1,0x14(%esp)
082282a2 +0x4a2:  movl   $0x29,0x10(%esp)
082282aa +0x4aa:  movl   $0x1,0xc(%esp)
082282b2 +0x4b2:  mov    %ebx,0x8(%esp)
082282b6 +0x4b6:  movl   $0x1,0x4(%esp)
082282be +0x4be:  mov    %eax,(%esp)
082282c1 +0x4c1:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
082282c6 +0x4c6:  movzwl -0x2c(%ebp),%eax
082282ca +0x4ca:  movzwl %ax,%ebx
082282cd +0x4cd:  mov    0xc(%ebp),%eax
082282d0 +0x4d0:  mov    %eax,(%esp)
082282d3 +0x4d3:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
082282d8 +0x4d8:  movl   $0x1,0x14(%esp)
082282e0 +0x4e0:  movl   $0x29,0x10(%esp)
082282e8 +0x4e8:  movl   $0x1,0xc(%esp)
082282f0 +0x4f0:  mov    %ebx,0x8(%esp)
082282f4 +0x4f4:  movl   $0x1,0x4(%esp)
082282fc +0x4fc:  mov    %eax,(%esp)
082282ff +0x4ff:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
08228304 +0x504:  movzwl -0x2a(%ebp),%eax
08228308 +0x508:  movzwl %ax,%ebx
0822830b +0x50b:  mov    0xc(%ebp),%eax
0822830e +0x50e:  mov    %eax,(%esp)
08228311 +0x511:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08228316 +0x516:  movl   $0x1,0x14(%esp)
0822831e +0x51e:  movl   $0x29,0x10(%esp)
08228326 +0x526:  movl   $0x1,0xc(%esp)
0822832e +0x52e:  mov    %ebx,0x8(%esp)
08228332 +0x532:  movl   $0x1,0x4(%esp)
0822833a +0x53a:  mov    %eax,(%esp)
0822833d +0x53d:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
08228342 +0x542:  movzwl -0x2e(%ebp),%eax
08228346 +0x546:  movzwl %ax,%ebx
08228349 +0x549:  mov    0xc(%ebp),%eax
0822834c +0x54c:  mov    %eax,(%esp)
0822834f +0x54f:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08228354 +0x554:  lea    -0x198(%ebp),%edx
0822835a +0x55a:  mov    %ebx,0xc(%esp)
0822835e +0x55e:  movl   $0x1,0x8(%esp)
08228366 +0x566:  mov    %eax,0x4(%esp)
0822836a +0x56a:  mov    %edx,(%esp)
0822836d +0x56d:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08228372 +0x572:  sub    $0x4,%esp
08228375 +0x575:  mov    -0x198(%ebp),%eax
0822837b +0x57b:  mov    %eax,-0x9d(%ebp)
08228381 +0x581:  mov    -0x194(%ebp),%eax
08228387 +0x587:  mov    %eax,-0x99(%ebp)
0822838d +0x58d:  mov    -0x190(%ebp),%eax
08228393 +0x593:  mov    %eax,-0x95(%ebp)
08228399 +0x599:  mov    -0x18c(%ebp),%eax
0822839f +0x59f:  mov    %eax,-0x91(%ebp)
082283a5 +0x5a5:  mov    -0x188(%ebp),%eax
082283ab +0x5ab:  mov    %eax,-0x8d(%ebp)
082283b1 +0x5b1:  mov    -0x184(%ebp),%eax
082283b7 +0x5b7:  mov    %eax,-0x89(%ebp)
082283bd +0x5bd:  mov    -0x180(%ebp),%eax
082283c3 +0x5c3:  mov    %eax,-0x85(%ebp)
082283c9 +0x5c9:  mov    -0x17c(%ebp),%eax
082283cf +0x5cf:  mov    %eax,-0x81(%ebp)
082283d5 +0x5d5:  mov    -0x178(%ebp),%eax
082283db +0x5db:  mov    %eax,-0x7d(%ebp)
082283de +0x5de:  mov    -0x174(%ebp),%eax
082283e4 +0x5e4:  mov    %eax,-0x79(%ebp)
082283e7 +0x5e7:  mov    -0x170(%ebp),%eax
082283ed +0x5ed:  mov    %eax,-0x75(%ebp)
082283f0 +0x5f0:  mov    -0x16c(%ebp),%eax
082283f6 +0x5f6:  mov    %eax,-0x71(%ebp)
082283f9 +0x5f9:  mov    -0x168(%ebp),%eax
082283ff +0x5ff:  mov    %eax,-0x6d(%ebp)
08228402 +0x602:  mov    -0x164(%ebp),%eax
08228408 +0x608:  mov    %eax,-0x69(%ebp)
0822840b +0x60b:  mov    -0x160(%ebp),%eax
08228411 +0x611:  mov    %eax,-0x65(%ebp)
08228414 +0x614:  movzbl -0x15c(%ebp),%eax
0822841b +0x61b:  mov    %al,-0x61(%ebp)
0822841e +0x61e:  movzwl -0x2c(%ebp),%eax
08228422 +0x622:  movzwl %ax,%ebx
08228425 +0x625:  mov    0xc(%ebp),%eax
08228428 +0x628:  mov    %eax,(%esp)
0822842b +0x62b:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08228430 +0x630:  lea    -0x198(%ebp),%edx
08228436 +0x636:  mov    %ebx,0xc(%esp)
0822843a +0x63a:  movl   $0x1,0x8(%esp)
08228442 +0x642:  mov    %eax,0x4(%esp)
08228446 +0x646:  mov    %edx,(%esp)
08228449 +0x649:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0822844e +0x64e:  sub    $0x4,%esp
08228451 +0x651:  mov    -0x198(%ebp),%eax
08228457 +0x657:  mov    %eax,-0x154(%ebp)
0822845d +0x65d:  mov    -0x194(%ebp),%eax
08228463 +0x663:  mov    %eax,-0x150(%ebp)
08228469 +0x669:  mov    -0x190(%ebp),%eax
0822846f +0x66f:  mov    %eax,-0x14c(%ebp)
08228475 +0x675:  mov    -0x18c(%ebp),%eax
0822847b +0x67b:  mov    %eax,-0x148(%ebp)
08228481 +0x681:  mov    -0x188(%ebp),%eax
08228487 +0x687:  mov    %eax,-0x144(%ebp)
0822848d +0x68d:  mov    -0x184(%ebp),%eax
08228493 +0x693:  mov    %eax,-0x140(%ebp)
08228499 +0x699:  mov    -0x180(%ebp),%eax
0822849f +0x69f:  mov    %eax,-0x13c(%ebp)
082284a5 +0x6a5:  mov    -0x17c(%ebp),%eax
082284ab +0x6ab:  mov    %eax,-0x138(%ebp)
082284b1 +0x6b1:  mov    -0x178(%ebp),%eax
082284b7 +0x6b7:  mov    %eax,-0x134(%ebp)
082284bd +0x6bd:  mov    -0x174(%ebp),%eax
082284c3 +0x6c3:  mov    %eax,-0x130(%ebp)
082284c9 +0x6c9:  mov    -0x170(%ebp),%eax
082284cf +0x6cf:  mov    %eax,-0x12c(%ebp)
082284d5 +0x6d5:  mov    -0x16c(%ebp),%eax
082284db +0x6db:  mov    %eax,-0x128(%ebp)
082284e1 +0x6e1:  mov    -0x168(%ebp),%eax
082284e7 +0x6e7:  mov    %eax,-0x124(%ebp)
082284ed +0x6ed:  mov    -0x164(%ebp),%eax
082284f3 +0x6f3:  mov    %eax,-0x120(%ebp)
082284f9 +0x6f9:  mov    -0x160(%ebp),%eax
082284ff +0x6ff:  mov    %eax,-0x11c(%ebp)
08228505 +0x705:  movzbl -0x15c(%ebp),%eax
0822850c +0x70c:  mov    %al,-0x118(%ebp)
08228512 +0x712:  movzwl -0x2a(%ebp),%eax
08228516 +0x716:  movzwl %ax,%ebx
08228519 +0x719:  mov    0xc(%ebp),%eax
0822851c +0x71c:  mov    %eax,(%esp)
0822851f +0x71f:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08228524 +0x724:  lea    -0x198(%ebp),%edx
0822852a +0x72a:  mov    %ebx,0xc(%esp)
0822852e +0x72e:  movl   $0x1,0x8(%esp)
08228536 +0x736:  mov    %eax,0x4(%esp)
0822853a +0x73a:  mov    %edx,(%esp)
0822853d +0x73d:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08228542 +0x742:  sub    $0x4,%esp
08228545 +0x745:  mov    -0x198(%ebp),%eax
0822854b +0x74b:  mov    %eax,-0x117(%ebp)
08228551 +0x751:  mov    -0x194(%ebp),%eax
08228557 +0x757:  mov    %eax,-0x113(%ebp)
0822855d +0x75d:  mov    -0x190(%ebp),%eax
08228563 +0x763:  mov    %eax,-0x10f(%ebp)
08228569 +0x769:  mov    -0x18c(%ebp),%eax
0822856f +0x76f:  mov    %eax,-0x10b(%ebp)
08228575 +0x775:  mov    -0x188(%ebp),%eax
0822857b +0x77b:  mov    %eax,-0x107(%ebp)
08228581 +0x781:  mov    -0x184(%ebp),%eax
08228587 +0x787:  mov    %eax,-0x103(%ebp)
0822858d +0x78d:  mov    -0x180(%ebp),%eax
08228593 +0x793:  mov    %eax,-0xff(%ebp)
08228599 +0x799:  mov    -0x17c(%ebp),%eax
0822859f +0x79f:  mov    %eax,-0xfb(%ebp)
082285a5 +0x7a5:  mov    -0x178(%ebp),%eax
082285ab +0x7ab:  mov    %eax,-0xf7(%ebp)
082285b1 +0x7b1:  mov    -0x174(%ebp),%eax
082285b7 +0x7b7:  mov    %eax,-0xf3(%ebp)
082285bd +0x7bd:  mov    -0x170(%ebp),%eax
082285c3 +0x7c3:  mov    %eax,-0xef(%ebp)
082285c9 +0x7c9:  mov    -0x16c(%ebp),%eax
082285cf +0x7cf:  mov    %eax,-0xeb(%ebp)
082285d5 +0x7d5:  mov    -0x168(%ebp),%eax
082285db +0x7db:  mov    %eax,-0xe7(%ebp)
082285e1 +0x7e1:  mov    -0x164(%ebp),%eax
082285e7 +0x7e7:  mov    %eax,-0xe3(%ebp)
082285ed +0x7ed:  mov    -0x160(%ebp),%eax
082285f3 +0x7f3:  mov    %eax,-0xdf(%ebp)
082285f9 +0x7f9:  movzbl -0x15c(%ebp),%eax
08228600 +0x800:  mov    %al,-0xdb(%ebp)
08228606 +0x806:  movl   $0x1,0x4(%esp)
0822860e +0x80e:  lea    -0x48(%ebp),%eax
08228611 +0x811:  mov    %eax,(%esp)
08228614 +0x814:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08228619 +0x819:  mov    -0x96(%ebp),%edx
0822861f +0x81f:  movzwl -0x2e(%ebp),%eax
08228623 +0x823:  movzwl %ax,%eax
08228626 +0x826:  mov    %edx,0xc(%esp)
0822862a +0x82a:  mov    %eax,0x8(%esp)
0822862e +0x82e:  lea    -0x48(%ebp),%eax
08228631 +0x831:  mov    %eax,0x4(%esp)
08228635 +0x835:  mov    0x8(%ebp),%eax
08228638 +0x838:  mov    %eax,(%esp)
0822863b +0x83b:  call   08228a2e <_ZNK42Dispatcher_Compound_Equipment_Upgrade_Card20set_ReturnSendPacketER11PacketGuardti>  ; Dispatcher_Compound_Equipment_Upgrade_Card::set_ReturnSendPacket(PacketGuard&, unsigned short, int) const
08228640 +0x840:  mov    -0x14d(%ebp),%edx
08228646 +0x846:  movzwl -0x2c(%ebp),%eax
0822864a +0x84a:  movzwl %ax,%eax
0822864d +0x84d:  mov    %edx,0xc(%esp)
08228651 +0x851:  mov    %eax,0x8(%esp)
08228655 +0x855:  lea    -0x48(%ebp),%eax
08228658 +0x858:  mov    %eax,0x4(%esp)
0822865c +0x85c:  mov    0x8(%ebp),%eax
0822865f +0x85f:  mov    %eax,(%esp)
08228662 +0x862:  call   08228a2e <_ZNK42Dispatcher_Compound_Equipment_Upgrade_Card20set_ReturnSendPacketER11PacketGuardti>  ; Dispatcher_Compound_Equipment_Upgrade_Card::set_ReturnSendPacket(PacketGuard&, unsigned short, int) const
08228667 +0x867:  mov    -0x110(%ebp),%edx
0822866d +0x86d:  movzwl -0x2a(%ebp),%eax
08228671 +0x871:  movzwl %ax,%eax
08228674 +0x874:  mov    %edx,0xc(%esp)
08228678 +0x878:  mov    %eax,0x8(%esp)
0822867c +0x87c:  lea    -0x48(%ebp),%eax
0822867f +0x87f:  mov    %eax,0x4(%esp)
08228683 +0x883:  mov    0x8(%ebp),%eax
08228686 +0x886:  mov    %eax,(%esp)
08228689 +0x889:  call   08228a2e <_ZNK42Dispatcher_Compound_Equipment_Upgrade_Card20set_ReturnSendPacketER11PacketGuardti>  ; Dispatcher_Compound_Equipment_Upgrade_Card::set_ReturnSendPacket(PacketGuard&, unsigned short, int) const
0822868e +0x88e:  lea    -0x28(%ebp),%eax
08228691 +0x891:  lea    -0x3c(%ebp),%edx
08228694 +0x894:  mov    %edx,0x4(%esp)
08228698 +0x898:  mov    %eax,(%esp)
0822869b +0x89b:  call   08111b1a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x102c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x102c
082286a0 +0x8a0:  sub    $0x4,%esp
082286a3 +0x8a3:  lea    -0x28(%ebp),%eax
082286a6 +0x8a6:  mov    %eax,0x4(%esp)
082286aa +0x8aa:  lea    -0x58(%ebp),%eax
082286ad +0x8ad:  mov    %eax,(%esp)
082286b0 +0x8b0:  call   08111b3e <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1050>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1050
082286b5 +0x8b5:  lea    -0x24(%ebp),%eax
082286b8 +0x8b8:  lea    -0x3c(%ebp),%edx
082286bb +0x8bb:  mov    %edx,0x4(%esp)
082286bf +0x8bf:  mov    %eax,(%esp)
082286c2 +0x8c2:  call   08111b58 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x106a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x106a
082286c7 +0x8c7:  sub    $0x4,%esp
082286ca +0x8ca:  lea    -0x24(%ebp),%eax
082286cd +0x8cd:  mov    %eax,0x4(%esp)
082286d1 +0x8d1:  lea    -0x5c(%ebp),%eax
082286d4 +0x8d4:  mov    %eax,(%esp)
082286d7 +0x8d7:  call   08111b3e <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1050>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1050
082286dc +0x8dc:  jmp    082288fa <+0xafa>
082286e1 +0x8e1:  lea    -0x58(%ebp),%eax
082286e4 +0x8e4:  mov    %eax,(%esp)
082286e7 +0x8e7:  call   08111bc0 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x10d2>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x10d2
082286ec +0x8ec:  mov    (%eax),%eax
082286ee +0x8ee:  mov    %eax,%ebx
082286f0 +0x8f0:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082286f5 +0x8f5:  mov    %ebx,0x4(%esp)
082286f9 +0x8f9:  mov    %eax,(%esp)
082286fc +0x8fc:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08228701 +0x901:  mov    %eax,-0x10(%ebp)
08228704 +0x904:  cmpl   $0x0,-0x10(%ebp)
08228708 +0x908:  je     082288ee <+0xaee>
0822870e +0x90e:  lea    -0xda(%ebp),%eax
08228714 +0x914:  mov    %eax,(%esp)
08228717 +0x917:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0822871c +0x91c:  lea    -0x58(%ebp),%eax
0822871f +0x91f:  mov    %eax,(%esp)
08228722 +0x922:  call   08111bc0 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x10d2>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x10d2
08228727 +0x927:  mov    (%eax),%eax
08228729 +0x929:  mov    %eax,-0xd8(%ebp)
0822872f +0x92f:  mov    -0x10(%ebp),%eax
08228732 +0x932:  mov    (%eax),%eax
08228734 +0x934:  add    $0x8,%eax
08228737 +0x937:  mov    (%eax),%edx
08228739 +0x939:  lea    -0xda(%ebp),%eax
0822873f +0x93f:  mov    %eax,0x4(%esp)
08228743 +0x943:  mov    -0x10(%ebp),%eax
08228746 +0x946:  mov    %eax,(%esp)
08228749 +0x949:  call   *%edx
0822874b +0x94b:  lea    -0x58(%ebp),%eax
0822874e +0x94e:  mov    %eax,(%esp)
08228751 +0x951:  call   08111bc0 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x10d2>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x10d2
08228756 +0x956:  movzwl 0x8(%eax),%eax
0822875a +0x95a:  movzwl %ax,%eax
0822875d +0x95d:  mov    %eax,0x4(%esp)
08228761 +0x961:  lea    -0xda(%ebp),%eax
08228767 +0x967:  mov    %eax,(%esp)
0822876a +0x96a:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
0822876f +0x96f:  mov    0xc(%ebp),%eax
08228772 +0x972:  mov    %eax,(%esp)
08228775 +0x975:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0822877a +0x97a:  movl   $0x1,0x4c(%esp)
08228782 +0x982:  movl   $0x1,0x48(%esp)
0822878a +0x98a:  movl   $0x2b,0x44(%esp)
08228792 +0x992:  mov    -0xda(%ebp),%edx
08228798 +0x998:  mov    %edx,0x4(%esp)
0822879c +0x99c:  mov    -0xd6(%ebp),%edx
082287a2 +0x9a2:  mov    %edx,0x8(%esp)
082287a6 +0x9a6:  mov    -0xd2(%ebp),%edx
082287ac +0x9ac:  mov    %edx,0xc(%esp)
082287b0 +0x9b0:  mov    -0xce(%ebp),%edx
082287b6 +0x9b6:  mov    %edx,0x10(%esp)
082287ba +0x9ba:  mov    -0xca(%ebp),%edx
082287c0 +0x9c0:  mov    %edx,0x14(%esp)
082287c4 +0x9c4:  mov    -0xc6(%ebp),%edx
082287ca +0x9ca:  mov    %edx,0x18(%esp)
082287ce +0x9ce:  mov    -0xc2(%ebp),%edx
082287d4 +0x9d4:  mov    %edx,0x1c(%esp)
082287d8 +0x9d8:  mov    -0xbe(%ebp),%edx
082287de +0x9de:  mov    %edx,0x20(%esp)
082287e2 +0x9e2:  mov    -0xba(%ebp),%edx
082287e8 +0x9e8:  mov    %edx,0x24(%esp)
082287ec +0x9ec:  mov    -0xb6(%ebp),%edx
082287f2 +0x9f2:  mov    %edx,0x28(%esp)
082287f6 +0x9f6:  mov    -0xb2(%ebp),%edx
082287fc +0x9fc:  mov    %edx,0x2c(%esp)
08228800 +0xa00:  mov    -0xae(%ebp),%edx
08228806 +0xa06:  mov    %edx,0x30(%esp)
0822880a +0xa0a:  mov    -0xaa(%ebp),%edx
08228810 +0xa10:  mov    %edx,0x34(%esp)
08228814 +0xa14:  mov    -0xa6(%ebp),%edx
0822881a +0xa1a:  mov    %edx,0x38(%esp)
0822881e +0xa1e:  mov    -0xa2(%ebp),%edx
08228824 +0xa24:  mov    %edx,0x3c(%esp)
08228828 +0xa28:  movzbl -0x9e(%ebp),%edx
0822882f +0xa2f:  mov    %dl,0x40(%esp)
08228833 +0xa33:  mov    %eax,(%esp)
08228836 +0xa36:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
0822883b +0xa3b:  mov    %ax,-0xa(%ebp)
0822883f +0xa3f:  movzwl -0xa(%ebp),%eax
08228843 +0xa43:  not    %eax
08228845 +0xa45:  shr    $0xf,%ax
08228849 +0xa49:  test   %al,%al
0822884b +0xa4b:  je     08228868 <+0xa68>
0822884d +0xa4d:  movswl -0xa(%ebp),%eax
08228851 +0xa51:  mov    %eax,-0x20(%ebp)
08228854 +0xa54:  lea    -0x20(%ebp),%eax
08228857 +0xa57:  mov    %eax,0x4(%esp)
0822885b +0xa5b:  lea    -0x54(%ebp),%eax
0822885e +0xa5e:  mov    %eax,(%esp)
08228861 +0xa61:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
08228866 +0xa66:  jmp    082288d7 <+0xad7>
08228868 +0xa68:  mov    0xc(%ebp),%eax
0822886b +0xa6b:  mov    %eax,(%esp)
0822886e +0xa6e:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08228873 +0xa73:  mov    %eax,%esi
08228875 +0xa75:  mov    0xc(%ebp),%eax
08228878 +0xa78:  mov    %eax,(%esp)
0822887b +0xa7b:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08228880 +0xa80:  mov    %eax,%ebx
08228882 +0xa82:  mov    0xc(%ebp),%eax
08228885 +0xa85:  mov    %eax,(%esp)
08228888 +0xa88:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0822888d +0xa8d:  movl   $0x0,0x24(%esp)
08228895 +0xa95:  movl   $0x0,0x20(%esp)
0822889d +0xa9d:  mov    %esi,0x1c(%esp)
082288a1 +0xaa1:  movl   $0x0,0x18(%esp)
082288a9 +0xaa9:  movl   $0x0,0x14(%esp)
082288b1 +0xab1:  movl   $0x0,0x10(%esp)
082288b9 +0xab9:  mov    %ebx,0xc(%esp)
082288bd +0xabd:  movl   $0x0,0x8(%esp)
082288c5 +0xac5:  lea    -0xda(%ebp),%edx
082288cb +0xacb:  mov    %edx,0x4(%esp)
082288cf +0xacf:  mov    %eax,(%esp)
082288d2 +0xad2:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
082288d7 +0xad7:  mov    -0xd8(%ebp),%eax
082288dd +0xadd:  mov    %eax,0x4(%esp)
082288e1 +0xae1:  lea    -0x48(%ebp),%eax
082288e4 +0xae4:  mov    %eax,(%esp)
082288e7 +0xae7:  call   0822b794 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe3e
082288ec +0xaec:  jmp    082288ef <+0xaef>
082288ee +0xaee:  nop
082288ef +0xaef:  lea    -0x58(%ebp),%eax
082288f2 +0xaf2:  mov    %eax,(%esp)
082288f5 +0xaf5:  call   08111baa <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x10bc>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x10bc
082288fa +0xafa:  lea    -0x5c(%ebp),%eax
082288fd +0xafd:  mov    %eax,0x4(%esp)
08228901 +0xb01:  lea    -0x58(%ebp),%eax
08228904 +0xb04:  mov    %eax,(%esp)
08228907 +0xb07:  call   08237c2d <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd2d7>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd2d7
0822890c +0xb0c:  test   %al,%al
0822890e +0xb0e:  jne    082286e1 <+0x8e1>
08228914 +0xb14:  movl   $0x1,0x4(%esp)
0822891c +0xb1c:  lea    -0x48(%ebp),%eax
0822891f +0xb1f:  mov    %eax,(%esp)
08228922 +0xb22:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08228927 +0xb27:  lea    -0x48(%ebp),%eax
0822892a +0xb2a:  mov    %eax,0x4(%esp)
0822892e +0xb2e:  mov    0xc(%ebp),%eax
08228931 +0xb31:  mov    %eax,(%esp)
08228934 +0xb34:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08228939 +0xb39:  lea    -0x60(%ebp),%eax
0822893c +0xb3c:  lea    -0x54(%ebp),%edx
0822893f +0xb3f:  mov    %edx,0x4(%esp)
08228943 +0xb43:  mov    %eax,(%esp)
08228946 +0xb46:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
0822894b +0xb4b:  sub    $0x4,%esp
0822894e +0xb4e:  jmp    08228987 <+0xb87>
08228950 +0xb50:  lea    -0x60(%ebp),%eax
08228953 +0xb53:  mov    %eax,(%esp)
08228956 +0xb56:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
0822895b +0xb5b:  mov    (%eax),%eax
0822895d +0xb5d:  mov    %eax,0xc(%esp)
08228961 +0xb61:  movl   $0x0,0x8(%esp)
08228969 +0xb69:  movl   $0x1,0x4(%esp)
08228971 +0xb71:  mov    0xc(%ebp),%eax
08228974 +0xb74:  mov    %eax,(%esp)
08228977 +0xb77:  call   0867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItem(CUser::eSendTarget, ENUM_ITEMSPACE, int)
0822897c +0xb7c:  lea    -0x60(%ebp),%eax
0822897f +0xb7f:  mov    %eax,(%esp)
08228982 +0xb82:  call   080ea98c <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x5c5>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x5c5
08228987 +0xb87:  lea    -0x1c(%ebp),%eax
0822898a +0xb8a:  lea    -0x54(%ebp),%edx
0822898d +0xb8d:  mov    %edx,0x4(%esp)
08228991 +0xb91:  mov    %eax,(%esp)
08228994 +0xb94:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
08228999 +0xb99:  sub    $0x4,%esp
0822899c +0xb9c:  lea    -0x1c(%ebp),%eax
0822899f +0xb9f:  mov    %eax,0x4(%esp)
082289a3 +0xba3:  lea    -0x60(%ebp),%eax
082289a6 +0xba6:  mov    %eax,(%esp)
082289a9 +0xba9:  call   080ea462 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x9b>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x9b
082289ae +0xbae:  test   %al,%al
082289b0 +0xbb0:  jne    08228950 <+0xb50>
082289b2 +0xbb2:  mov    $0x0,%ebx
082289b7 +0xbb7:  lea    -0x54(%ebp),%eax
082289ba +0xbba:  mov    %eax,(%esp)
082289bd +0xbbd:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
082289c2 +0xbc2:  jmp    082289ee <+0xbee>
082289c4 +0xbc4:  mov    %edx,%ebx
082289c6 +0xbc6:  mov    %eax,%esi
082289c8 +0xbc8:  lea    -0x54(%ebp),%eax
082289cb +0xbcb:  mov    %eax,(%esp)
082289ce +0xbce:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
082289d3 +0xbd3:  mov    %esi,%eax
082289d5 +0xbd5:  mov    %ebx,%edx
082289d7 +0xbd7:  jmp    082289d9 <+0xbd9>
082289d9 +0xbd9:  mov    %edx,%ebx
082289db +0xbdb:  mov    %eax,%esi
082289dd +0xbdd:  lea    -0x48(%ebp),%eax
082289e0 +0xbe0:  mov    %eax,(%esp)
082289e3 +0xbe3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082289e8 +0xbe8:  mov    %esi,%eax
082289ea +0xbea:  mov    %ebx,%edx
082289ec +0xbec:  jmp    082289fb <+0xbfb>
082289ee +0xbee:  lea    -0x48(%ebp),%eax
082289f1 +0xbf1:  mov    %eax,(%esp)
082289f4 +0xbf4:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082289f9 +0xbf9:  jmp    08228a16 <+0xc16>
082289fb +0xbfb:  mov    %edx,%ebx
082289fd +0xbfd:  mov    %eax,%esi
082289ff +0xbff:  lea    -0x3c(%ebp),%eax
08228a02 +0xc02:  mov    %eax,(%esp)
08228a05 +0xc05:  call   08111abc <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xfce>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xfce
08228a0a +0xc0a:  mov    %esi,%eax
08228a0c +0xc0c:  mov    %ebx,%edx
08228a0e +0xc0e:  mov    %eax,(%esp)
08228a11 +0xc11:  call   08ae3750 <_Unwind_Resume>
08228a16 +0xc16:  lea    -0x3c(%ebp),%eax
08228a19 +0xc19:  mov    %eax,(%esp)
08228a1c +0xc1c:  call   08111abc <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xfce>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xfce
08228a21 +0xc21:  mov    %ebx,%eax
08228a23 +0xc23:  lea    -0x8(%ebp),%esp
08228a26 +0xc26:  add    $0x0,%esp
08228a29 +0xc29:  pop    %ebx
08228a2a +0xc2a:  pop    %esi
08228a2b +0xc2b:  pop    %ebp
08228a2c +0xc2c:  ret
08228a2d +0xc2d:  nop
```

## 反编译 C

```c
// Dispatcher_Compound_Equipment_Upgrade_Card::dispatch_sig @ 0x8227e00

/* Dispatcher_Compound_Equipment_Upgrade_Card::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_Compound_Equipment_Upgrade_Card::dispatch_sig
          (Dispatcher_Compound_Equipment_Upgrade_Card *this,CUser *param_1,PacketBuf *param_2)

{
  ushort uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  GameWorld *this_00;
  undefined4 uVar5;
  CDataManager *pCVar6;
  CInventory *pCVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  Inven_Item *this_01;
  uint uVar12;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined1 local_160;
  undefined1 local_158 [4];
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined1 local_11c;
  undefined4 local_11b;
  undefined4 local_117;
  undefined4 local_113;
  undefined4 local_10f;
  undefined4 local_10b;
  undefined4 local_107;
  undefined4 local_103;
  undefined4 local_ff;
  undefined4 local_fb;
  undefined4 local_f7;
  undefined4 local_f3;
  undefined4 local_ef;
  undefined4 local_eb;
  undefined4 local_e7;
  undefined4 local_e3;
  undefined1 local_df;
  undefined2 local_de;
  undefined2 uStack_dc;
  undefined2 uStack_da;
  undefined2 uStack_d8;
  undefined4 local_d6;
  undefined4 local_d2;
  undefined4 local_ce;
  undefined4 local_ca;
  undefined4 local_c6;
  undefined4 local_c2;
  undefined4 local_be;
  undefined4 local_ba;
  undefined4 local_b6;
  undefined4 local_b2;
  undefined4 local_ae;
  undefined4 local_aa;
  undefined4 local_a6;
  undefined1 local_a2;
  undefined4 local_a1;
  undefined4 local_9d;
  undefined4 local_99;
  undefined4 local_95;
  undefined4 local_91;
  undefined4 local_8d;
  undefined4 local_89;
  undefined4 local_85;
  undefined4 local_81;
  undefined4 local_7d;
  undefined4 local_79;
  undefined4 local_75;
  undefined4 local_71;
  undefined4 local_6d;
  undefined4 local_69;
  undefined1 local_65;
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_64 [4];
  __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
  local_60 [4];
  __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
  local_5c [4];
  vector<int,std::allocator<int>> local_58 [12];
  PacketGuard local_4c [12];
  vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>> local_40 [14];
  ushort local_32;
  ushort local_30;
  ushort local_2e;
  __normal_iterator local_2c [4];
  __normal_iterator local_28 [4];
  int local_24;
  __normal_iterator local_20 [4];
  int local_1c;
  CStackableItem *local_18;
  int *local_14;
  short local_e;
  
  iVar4 = CUser::get_state(param_1);
  if ((iVar4 == 3) &&
     (iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar4 != 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    return 0;
  }
  this_00 = (GameWorld *)G_GameWorld();
  iVar4 = GameWorld::GetChannelType(this_00);
  if (iVar4 == 7) {
    uVar5 = LineFunc(0xe4c3,
                     "virtual int Dispatcher_Compound_Equipment_Upgrade_Card::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar5;
  }
  PacketBuf::get_short(param_2,&local_30);
  PacketBuf::get_short(param_2,&local_2e);
  PacketBuf::get_short(param_2,&local_32);
  this_01 = (Inven_Item *)local_158;
  for (iVar4 = 1; iVar4 != -1; iVar4 = iVar4 + -1) {
    Inven_Item::Inven_Item(this_01);
    this_01 = this_01 + 0x3d;
  }
  iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  CInventory::GetInvenSlot((int)&local_19c,iVar4);
  local_158 = (undefined1  [4])local_19c;
  local_154 = local_198;
  local_150 = local_194;
  local_14c = local_190;
  local_148 = local_18c;
  local_144 = local_188;
  local_140 = local_184;
  local_13c = local_180;
  local_138 = local_17c;
  local_134 = local_178;
  local_130 = local_174;
  local_12c = local_170;
  local_128 = local_16c;
  local_124 = local_168;
  local_120 = local_164;
  local_11c = local_160;
  uVar12 = (uint)local_2e;
  iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  CInventory::GetInvenSlot((int)&local_19c,iVar4);
  local_11b = local_19c;
  local_117 = local_198;
  local_113 = local_194;
  local_10f = local_190;
  local_10b = local_18c;
  local_107 = local_188;
  local_103 = local_184;
  local_ff = local_180;
  local_fb = local_17c;
  local_f7 = local_178;
  local_f3 = local_174;
  local_ef = local_170;
  local_eb = local_16c;
  local_e7 = local_168;
  local_e3 = local_164;
  local_df = local_160;
  local_1c = Event_Upgrade_Jar::getBoosterIndex_byUpgradeCardIndex
                       ((ulong *)GlobalData::s_pEvent_UpGrade_Jar,(ulong *)(local_158 + 2));
  if (local_1c != 0) {
    if (0 < CONCAT31((undefined3)local_150,local_154._3_1_)) {
      if (0 < CONCAT31((undefined3)local_113,local_117._3_1_)) {
        uVar12 = (uint)local_32;
        iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        uVar5 = 1;
        CInventory::GetInvenSlot((int)&local_a1,iVar4);
        cVar2 = Event_Upgrade_Jar::check_requiredRecipe
                          (GlobalData::s_pEvent_UpGrade_Jar,(Inven_Item *)&local_a1);
        iVar4 = local_1c;
        if (cVar2 != '\x01') {
          return 0;
        }
        pCVar6 = (CDataManager *)G_CDataManager();
        local_18 = (CStackableItem *)CDataManager::find_item(pCVar6,iVar4);
        if ((local_18 == (CStackableItem *)0x0) ||
           (iVar4 = (**(code **)(*(int *)local_18 + 0xc))(local_18,iVar4,uVar5,uVar12), iVar4 != 0xf
           )) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if (!bVar3) {
          std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::
          vector(local_40);
                    /* try { // try from 082281f8 to 08228207 has its CatchHandler @ 082289fb */
          CStackableItem::getBoosterItem(local_18,(vector *)local_40);
          PacketGuard::PacketGuard(local_4c);
                    /* try { // try from 0822821e to 0822822d has its CatchHandler @ 082289d9 */
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_4c,1,0x169);
          std::vector<int,std::allocator<int>>::vector(local_58);
                    /* try { // try from 08228234 to 082289ad has its CatchHandler @ 082289c4 */
          cVar2 = std::
                  vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>
                  ::empty();
          if ((cVar2 == '\0') &&
             (uVar12 = std::
                       vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>
                       ::size(local_40), uVar12 < 2)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          uVar1 = local_32;
          if (bVar3) {
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_4c,0);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_4c,0x13);
          }
          else {
            pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
            CInventory::delete_item(pCVar7,1,uVar1,1,0x29,1);
            uVar1 = local_30;
            pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
            CInventory::delete_item(pCVar7,1,uVar1,1,0x29,1);
            uVar1 = local_2e;
            pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
            CInventory::delete_item(pCVar7,1,uVar1,1,0x29,1);
            iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
            CInventory::GetInvenSlot((int)&local_19c,iVar4);
            local_a1 = local_19c;
            local_9d = local_198;
            local_99 = local_194;
            local_95 = local_190;
            local_91 = local_18c;
            local_8d = local_188;
            local_89 = local_184;
            local_85 = local_180;
            local_81 = local_17c;
            local_7d = local_178;
            local_79 = local_174;
            local_75 = local_170;
            local_71 = local_16c;
            local_6d = local_168;
            local_69 = local_164;
            local_65 = local_160;
            iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
            CInventory::GetInvenSlot((int)&local_19c,iVar4);
            local_158 = (undefined1  [4])local_19c;
            local_154 = local_198;
            local_150 = local_194;
            local_14c = local_190;
            local_148 = local_18c;
            local_144 = local_188;
            local_140 = local_184;
            local_13c = local_180;
            local_138 = local_17c;
            local_134 = local_178;
            local_130 = local_174;
            local_12c = local_170;
            local_128 = local_16c;
            local_124 = local_168;
            local_120 = local_164;
            local_11c = local_160;
            iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
            CInventory::GetInvenSlot((int)&local_19c,iVar4);
            local_11b = local_19c;
            local_117 = local_198;
            local_113 = local_194;
            local_10f = local_190;
            local_10b = local_18c;
            local_107 = local_188;
            local_103 = local_184;
            local_ff = local_180;
            local_fb = local_17c;
            local_f7 = local_178;
            local_f3 = local_174;
            local_ef = local_170;
            local_eb = local_16c;
            local_e7 = local_168;
            local_e3 = local_164;
            local_df = local_160;
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_4c,1);
            set_ReturnSendPacket
                      (this,local_4c,local_32,CONCAT31((undefined3)local_99,local_9d._3_1_));
            set_ReturnSendPacket
                      (this,local_4c,local_30,CONCAT31((undefined3)local_150,local_154._3_1_));
            set_ReturnSendPacket
                      (this,local_4c,local_2e,CONCAT31((undefined3)local_113,local_117._3_1_));
            std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::
            begin();
            __gnu_cxx::
            __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
            ::__normal_iterator<stStackableBoosterItemInfo_t*>(local_5c,local_2c);
            std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::
            end();
            __gnu_cxx::
            __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
            ::__normal_iterator<stStackableBoosterItemInfo_t*>(local_60,local_28);
            while (bVar3 = __gnu_cxx::operator!=(local_5c,local_60), bVar3) {
              piVar8 = (int *)__gnu_cxx::
                              __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                              ::operator->(local_5c);
              iVar4 = *piVar8;
              pCVar6 = (CDataManager *)G_CDataManager();
              local_14 = (int *)CDataManager::find_item(pCVar6,iVar4);
              if (local_14 != (int *)0x0) {
                Inven_Item::Inven_Item((Inven_Item *)&local_de);
                puVar11 = (undefined4 *)
                          __gnu_cxx::
                          __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                          ::operator->(local_5c);
                uStack_dc = (undefined2)*puVar11;
                uStack_da = (undefined2)((uint)*puVar11 >> 0x10);
                (**(code **)(*local_14 + 8))(local_14,&local_de);
                iVar4 = __gnu_cxx::
                        __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                        ::operator->(local_5c);
                Inven_Item::set_add_info((Inven_Item *)&local_de,(uint)*(ushort *)(iVar4 + 8));
                uVar5 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                local_e = CInventory::insertItemIntoInventory
                                    (uVar5,CONCAT22(uStack_dc,local_de),
                                     CONCAT22(uStack_d8,uStack_da),local_d6,local_d2,local_ce,
                                     local_ca,local_c6,local_c2,local_be,local_ba,local_b6,local_b2,
                                     local_ae,local_aa,local_a6,local_a2,0x2b,1,1);
                if (local_e < 0) {
                  uVar5 = CUser::GetServerGroup(param_1);
                  uVar9 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                  uVar10 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
                  WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                            (uVar10,&local_de,0,uVar9,0,0,0,uVar5,0,0);
                }
                else {
                  local_24 = (int)local_e;
                  std::vector<int,std::allocator<int>>::push_back(local_58,&local_24);
                }
                InterfacePacketBuf::put_item_idx
                          ((InterfacePacketBuf *)local_4c,CONCAT22(uStack_da,uStack_dc));
              }
              __gnu_cxx::
              __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
              ::operator++(local_5c);
            }
          }
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_4c,true);
          CUser::Send(param_1,local_4c);
          std::vector<int,std::allocator<int>>::begin();
          while( true ) {
            std::vector<int,std::allocator<int>>::end();
            bVar3 = __gnu_cxx::operator!=(local_64,local_20);
            if (!bVar3) break;
            puVar11 = (undefined4 *)
                      __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                      operator*(local_64);
            CUser::SendUpdateItem(param_1,1,0,*puVar11);
            __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                      (local_64);
          }
                    /* try { // try from 082289bd to 082289c1 has its CatchHandler @ 082289d9 */
          std::vector<int,std::allocator<int>>::~vector(local_58);
                    /* try { // try from 082289f4 to 082289f8 has its CatchHandler @ 082289fb */
          PacketGuard::~PacketGuard(local_4c);
          std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::
          ~vector(local_40);
          return 0;
        }
        return 0;
      }
    }
  }
  CUser::SendCmdErrorPacket(param_1,0x169,0x13,uVar12);
  return 0;
}
```
