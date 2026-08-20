# kill_monster

`_ZN6CParty12kill_monsterEP5CUseritRK15MSG_MONSTER_DIEPi`

`CParty::kill_monster(CUser*, int, unsigned short, MSG_MONSTER_DIE const&, int*)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085a27e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085a27e8  _ZN6CParty12kill_monsterEP5CUseritRK15MSG_MONSTER_DIEPi
#           CParty::kill_monster(CUser*, int, unsigned short, MSG_MONSTER_DIE const&, int*)
# range [0x085a27e8, 0x085a3b69]
085a27e8 +0x0000:  push   %ebp
085a27e9 +0x0001:  mov    %esp,%ebp
085a27eb +0x0003:  push   %edi
085a27ec +0x0004:  push   %esi
085a27ed +0x0005:  push   %ebx
085a27ee +0x0006:  sub    $0x84c,%esp
085a27f4 +0x000c:  mov    0x14(%ebp),%eax
085a27f7 +0x000f:  mov    %ax,-0x7dc(%ebp)
085a27fe +0x0016:  lea    -0x7d0(%ebp),%eax
085a2804 +0x001c:  mov    %eax,(%esp)
085a2807 +0x001f:  call   081511c8 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xafd>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xafd
085a280c +0x0024:  lea    -0x3f0(%ebp),%eax
085a2812 +0x002a:  mov    %eax,(%esp)
085a2815 +0x002d:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085a281a +0x0032:  mov    0x8(%ebp),%eax
085a281d +0x0035:  mov    %eax,(%esp)
085a2820 +0x0038:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
085a2825 +0x003d:  mov    %eax,-0x84(%ebp)
085a282b +0x0043:  mov    0x8(%ebp),%eax
085a282e +0x0046:  mov    0xcac(%eax),%eax
085a2834 +0x004c:  test   %eax,%eax
085a2836 +0x004e:  je     085a2854 <+0x6c>
085a2838 +0x0050:  mov    0x8(%ebp),%eax
085a283b +0x0053:  mov    0xcac(%eax),%eax
085a2841 +0x0059:  mov    %eax,(%esp)
085a2844 +0x005c:  call   08365278 <_ZNK8CDungeon14IsEnterEachMapEv>  ; CDungeon::IsEnterEachMap() const
085a2849 +0x0061:  test   %al,%al
085a284b +0x0063:  je     085a2854 <+0x6c>
085a284d +0x0065:  mov    $0x1,%eax
085a2852 +0x006a:  jmp    085a2859 <+0x71>
085a2854 +0x006c:  mov    $0x0,%eax
085a2859 +0x0071:  test   %al,%al
085a285b +0x0073:  je     085a2884 <+0x9c>
085a285d +0x0075:  mov    0xc(%ebp),%eax
085a2860 +0x0078:  mov    %eax,0x4(%esp)
085a2864 +0x007c:  mov    0x8(%ebp),%eax
085a2867 +0x007f:  mov    %eax,(%esp)
085a286a +0x0082:  call   085a277a <_ZN6CParty16get_party_seatnoEP5CUser>  ; CParty::get_party_seatno(CUser*)
085a286f +0x0087:  mov    0x8(%ebp),%edx
085a2872 +0x008a:  add    $0xb24,%edx
085a2878 +0x0090:  mov    %eax,0x4(%esp)
085a287c +0x0094:  mov    %edx,(%esp)
085a287f +0x0097:  call   082a43cc <_GLOBAL__I__ZN4CLog5this_E+0x7f3>  ; global constructors keyed to CLog::this_+0x7f3
085a2884 +0x009c:  movl   $0x0,-0x80(%ebp)
085a288b +0x00a3:  movl   $0x0,-0x7c(%ebp)
085a2892 +0x00aa:  movl   $0x0,-0x78(%ebp)
085a2899 +0x00b1:  movl   $0x64,-0x3f8(%ebp)
085a28a3 +0x00bb:  movl   $0x0,-0x58(%ebp)
085a28aa +0x00c2:  jmp    085a2a1c <+0x234>
085a28af +0x00c7:  movl   $0x0,-0x54(%ebp)
085a28b6 +0x00ce:  mov    -0x58(%ebp),%eax
085a28b9 +0x00d1:  mov    %eax,0x4(%esp)
085a28bd +0x00d5:  mov    0x8(%ebp),%eax
085a28c0 +0x00d8:  mov    %eax,(%esp)
085a28c3 +0x00db:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085a28c8 +0x00e0:  xor    $0x1,%eax
085a28cb +0x00e3:  test   %al,%al
085a28cd +0x00e5:  jne    085a2a17 <+0x22f>
085a28d3 +0x00eb:  mov    -0x58(%ebp),%edx
085a28d6 +0x00ee:  mov    0x8(%ebp),%ecx
085a28d9 +0x00f1:  mov    %edx,%eax
085a28db +0x00f3:  add    %eax,%eax
085a28dd +0x00f5:  add    %edx,%eax
085a28df +0x00f7:  shl    $0x3,%eax
085a28e2 +0x00fa:  lea    (%ecx,%eax,1),%eax
085a28e5 +0x00fd:  add    $0x78,%eax
085a28e8 +0x0100:  mov    (%eax),%eax
085a28ea +0x0102:  mov    %eax,(%esp)
085a28ed +0x0105:  call   08101072 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x94>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x94
085a28f2 +0x010a:  mov    %eax,%esi
085a28f4 +0x010c:  mov    -0x58(%ebp),%edx
085a28f7 +0x010f:  mov    0x8(%ebp),%ecx
085a28fa +0x0112:  mov    %edx,%eax
085a28fc +0x0114:  add    %eax,%eax
085a28fe +0x0116:  add    %edx,%eax
085a2900 +0x0118:  shl    $0x3,%eax
085a2903 +0x011b:  lea    (%ecx,%eax,1),%eax
085a2906 +0x011e:  add    $0x78,%eax
085a2909 +0x0121:  mov    (%eax),%eax
085a290b +0x0123:  mov    %eax,(%esp)
085a290e +0x0126:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
085a2913 +0x012b:  mov    %eax,%ebx
085a2915 +0x012d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085a291a +0x0132:  mov    %esi,0x8(%esp)
085a291e +0x0136:  mov    %ebx,0x4(%esp)
085a2922 +0x013a:  mov    %eax,(%esp)
085a2925 +0x013d:  call   08360ce0 <_ZNK12CDataManager21GetMoneyLimitPerLevelEiPKc>  ; CDataManager::GetMoneyLimitPerLevel(int, char const*) const
085a292a +0x0142:  mov    %eax,-0x50(%ebp)
085a292d +0x0145:  cmpl   $0x0,-0x50(%ebp)
085a2931 +0x0149:  jg     085a2978 <+0x190>
085a2933 +0x014b:  movl   $0x5,0xc(%esp)
085a293b +0x0153:  movl   $0x1414,0x8(%esp)
085a2943 +0x015b:  movl   $&_ZZN6CParty12kill_monsterEP5CUseritRK15MSG_MONSTER_DIEPiE19__PRETTY_FUNCTION__,0x4(%esp)
085a294b +0x0163:  lea    -0x3e4(%ebp),%eax
085a2951 +0x0169:  mov    %eax,(%esp)
085a2954 +0x016c:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085a2959 +0x0171:  mov    -0x50(%ebp),%eax
085a295c +0x0174:  mov    %eax,0x8(%esp)
085a2960 +0x0178:  movl   $"WarField::HandleMonsterKill limitMoney(%d) is under 0",0x4(%esp)
085a2968 +0x0180:  lea    -0x3e4(%ebp),%eax
085a296e +0x0186:  mov    %eax,(%esp)
085a2971 +0x0189:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085a2976 +0x018e:  jmp    085a29af <+0x1c7>
085a2978 +0x0190:  mov    -0x58(%ebp),%edx
085a297b +0x0193:  mov    0x8(%ebp),%ecx
085a297e +0x0196:  mov    %edx,%eax
085a2980 +0x0198:  add    %eax,%eax
085a2982 +0x019a:  add    %edx,%eax
085a2984 +0x019c:  shl    $0x3,%eax
085a2987 +0x019f:  lea    (%ecx,%eax,1),%eax
085a298a +0x01a2:  add    $0x78,%eax
085a298d +0x01a5:  mov    (%eax),%eax
085a298f +0x01a7:  mov    %eax,(%esp)
085a2992 +0x01aa:  call   0817a188 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x206>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x206
085a2997 +0x01af:  imul   $0x64,%eax,%eax
085a299a +0x01b2:  mov    %eax,%edx
085a299c +0x01b4:  sar    $0x1f,%edx
085a299f +0x01b7:  idivl  -0x50(%ebp)
085a29a2 +0x01ba:  mov    %eax,-0x54(%ebp)
085a29a5 +0x01bd:  mov    -0x54(%ebp),%eax
085a29a8 +0x01c0:  add    %eax,-0x7c(%ebp)
085a29ab +0x01c3:  addl   $0x1,-0x78(%ebp)
085a29af +0x01c7:  call   081625e6 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x854>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x854
085a29b4 +0x01cc:  movl   $0x1,0x8(%esp)
085a29bc +0x01d4:  movl   $0x3,0x4(%esp)
085a29c4 +0x01dc:  mov    %eax,(%esp)
085a29c7 +0x01df:  call   0816e75e <_ZN22ServiceRestrictManager12isRestrictedEN16RestrictCategory4EnumEi>  ; ServiceRestrictManager::isRestricted(RestrictCategory::Enum, int)
085a29cc +0x01e4:  test   %al,%al
085a29ce +0x01e6:  je     085a2a18 <+0x230>
085a29d0 +0x01e8:  mov    -0x58(%ebp),%edx
085a29d3 +0x01eb:  mov    0x8(%ebp),%ecx
085a29d6 +0x01ee:  mov    %edx,%eax
085a29d8 +0x01f0:  add    %eax,%eax
085a29da +0x01f2:  add    %edx,%eax
085a29dc +0x01f4:  shl    $0x3,%eax
085a29df +0x01f7:  lea    (%ecx,%eax,1),%eax
085a29e2 +0x01fa:  add    $0x78,%eax
085a29e5 +0x01fd:  mov    (%eax),%eax
085a29e7 +0x01ff:  mov    %eax,(%esp)
085a29ea +0x0202:  call   084ecb28 <_GLOBAL__I__Z7getUserj+0x3ada>  ; global constructors keyed to getUser(unsigned int)+0x3ada
085a29ef +0x0207:  mov    %eax,-0x3d4(%ebp)
085a29f5 +0x020d:  lea    -0x3d4(%ebp),%eax
085a29fb +0x0213:  mov    %eax,0x4(%esp)
085a29ff +0x0217:  lea    -0x3f8(%ebp),%eax
085a2a05 +0x021d:  mov    %eax,(%esp)
085a2a08 +0x0220:  call   080df90e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x12a>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x12a
085a2a0d +0x0225:  mov    (%eax),%eax
085a2a0f +0x0227:  mov    %eax,-0x3f8(%ebp)
085a2a15 +0x022d:  jmp    085a2a18 <+0x230>
085a2a17 +0x022f:  nop
085a2a18 +0x0230:  addl   $0x1,-0x58(%ebp)
085a2a1c +0x0234:  cmpl   $0x3,-0x58(%ebp)
085a2a20 +0x0238:  setle  %al
085a2a23 +0x023b:  test   %al,%al
085a2a25 +0x023d:  jne    085a28af <+0xc7>
085a2a2b +0x0243:  cmpl   $0x0,-0x78(%ebp)
085a2a2f +0x0247:  je     085a2a3f <+0x257>
085a2a31 +0x0249:  mov    -0x7c(%ebp),%eax
085a2a34 +0x024c:  mov    %eax,%edx
085a2a36 +0x024e:  sar    $0x1f,%edx
085a2a39 +0x0251:  idivl  -0x78(%ebp)
085a2a3c +0x0254:  mov    %eax,-0x80(%ebp)
085a2a3f +0x0257:  lea    -0x410(%ebp),%eax
085a2a45 +0x025d:  mov    %eax,(%esp)
085a2a48 +0x0260:  call   085bf03a <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x598>  ; global constructors keyed to CParty::cMember::cMember()+0x598
085a2a4d +0x0265:  mov    0x10(%ebp),%eax
085a2a50 +0x0268:  mov    %ax,-0x410(%ebp)
085a2a57 +0x026f:  movzwl -0x7dc(%ebp),%eax
085a2a5e +0x0276:  mov    %ax,-0x40e(%ebp)
085a2a65 +0x027d:  mov    -0x84(%ebp),%eax
085a2a6b +0x0283:  mov    %al,-0x40c(%ebp)
085a2a71 +0x0289:  mov    -0x80(%ebp),%eax
085a2a74 +0x028c:  mov    %eax,-0x408(%ebp)
085a2a7a +0x0292:  mov    -0x3f8(%ebp),%eax
085a2a80 +0x0298:  mov    %eax,-0x404(%ebp)
085a2a86 +0x029e:  mov    0x18(%ebp),%eax
085a2a89 +0x02a1:  movzbl 0xa22(%eax),%eax
085a2a90 +0x02a8:  test   %al,%al
085a2a92 +0x02aa:  setne  %al
085a2a95 +0x02ad:  mov    %al,-0x400(%ebp)
085a2a9b +0x02b3:  mov    0x18(%ebp),%eax
085a2a9e +0x02b6:  movzbl 0xa23(%eax),%eax
085a2aa5 +0x02bd:  test   %al,%al
085a2aa7 +0x02bf:  setne  %al
085a2aaa +0x02c2:  mov    %al,-0x3ff(%ebp)
085a2ab0 +0x02c8:  mov    0x8(%ebp),%eax
085a2ab3 +0x02cb:  mov    %eax,0x4(%esp)
085a2ab7 +0x02cf:  lea    -0x418(%ebp),%eax
085a2abd +0x02d5:  mov    %eax,(%esp)
085a2ac0 +0x02d8:  call   08469976 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x59>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x59
085a2ac5 +0x02dd:  lea    -0x434(%ebp),%eax
085a2acb +0x02e3:  mov    %eax,(%esp)
085a2ace +0x02e6:  call   084699c6 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0xa9>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0xa9
085a2ad3 +0x02eb:  lea    -0x434(%ebp),%eax
085a2ad9 +0x02f1:  mov    %eax,0x10(%esp)
085a2add +0x02f5:  mov    -0x418(%ebp),%eax
085a2ae3 +0x02fb:  mov    -0x414(%ebp),%edx
085a2ae9 +0x0301:  mov    %eax,0x8(%esp)
085a2aed +0x0305:  mov    %edx,0xc(%esp)
085a2af1 +0x0309:  movl   $0x3,0x4(%esp)
085a2af9 +0x0311:  mov    0x8(%ebp),%eax
085a2afc +0x0314:  mov    %eax,(%esp)
085a2aff +0x0317:  call   0859b8fa <_ZN6CParty17set_random_rewardEN10QuickParty14RandomBuffTypeENS0_16RewardData_ParamERNS0_17RewardData_ResultE>  ; CParty::set_random_reward(QuickParty::RandomBuffType, QuickParty::RewardData_Param, QuickParty::RewardData_Result&)
085a2b04 +0x031c:  mov    -0x420(%ebp),%eax
085a2b0a +0x0322:  mov    %eax,-0x3fc(%ebp)
085a2b10 +0x0328:  mov    0x8(%ebp),%eax
085a2b13 +0x032b:  lea    0xb24(%eax),%edx
085a2b19 +0x0331:  lea    -0x410(%ebp),%eax
085a2b1f +0x0337:  mov    %eax,0x10(%esp)
085a2b23 +0x033b:  lea    -0x3f4(%ebp),%eax
085a2b29 +0x0341:  mov    %eax,0xc(%esp)
085a2b2d +0x0345:  lea    -0x7d0(%ebp),%eax
085a2b33 +0x034b:  mov    %eax,0x8(%esp)
085a2b37 +0x034f:  lea    -0x3f0(%ebp),%eax
085a2b3d +0x0355:  mov    %eax,0x4(%esp)
085a2b41 +0x0359:  mov    %edx,(%esp)
085a2b44 +0x035c:  call   0830bc78 <_ZN13CBattle_Field12kill_monsterER11PacketGuardR11map_monsterRjRK17STKillMonsterData>  ; CBattle_Field::kill_monster(PacketGuard&, map_monster&, unsigned int&, STKillMonsterData const&)
085a2b49 +0x0361:  xor    $0x1,%eax
085a2b4c +0x0364:  test   %al,%al
085a2b4e +0x0366:  je     085a2bd9 <+0x3f1>
085a2b54 +0x036c:  mov    0x8(%ebp),%eax
085a2b57 +0x036f:  mov    %eax,(%esp)
085a2b5a +0x0372:  call   0822d8f6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fa0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fa0
085a2b5f +0x0377:  xor    $0x1,%eax
085a2b62 +0x037a:  test   %al,%al
085a2b64 +0x037c:  je     085a2bcf <+0x3e7>
085a2b66 +0x037e:  mov    0x8(%ebp),%eax
085a2b69 +0x0381:  mov    %eax,(%esp)
085a2b6c +0x0384:  call   0822d88c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2f36>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2f36
085a2b71 +0x0389:  test   %al,%al
085a2b73 +0x038b:  jne    085a2b85 <+0x39d>
085a2b75 +0x038d:  mov    0x8(%ebp),%eax
085a2b78 +0x0390:  mov    %eax,(%esp)
085a2b7b +0x0393:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
085a2b80 +0x0398:  cmp    $0x1,%eax
085a2b83 +0x039b:  jne    085a2b8c <+0x3a4>
085a2b85 +0x039d:  mov    $0x1,%eax
085a2b8a +0x03a2:  jmp    085a2b91 <+0x3a9>
085a2b8c +0x03a4:  mov    $0x0,%eax
085a2b91 +0x03a9:  test   %al,%al
085a2b93 +0x03ab:  je     085a2bcf <+0x3e7>
085a2b95 +0x03ad:  mov    0xc(%ebp),%eax
085a2b98 +0x03b0:  mov    %eax,(%esp)
085a2b9b +0x03b3:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
085a2ba0 +0x03b8:  movl   $0x0,0x14(%esp)
085a2ba8 +0x03c0:  movl   $0x0,0x10(%esp)
085a2bb0 +0x03c8:  movl   $0x1,0xc(%esp)
085a2bb8 +0x03d0:  movl   $0xcf,0x8(%esp)
085a2bc0 +0x03d8:  mov    0xc(%ebp),%edx
085a2bc3 +0x03db:  mov    %edx,0x4(%esp)
085a2bc7 +0x03df:  mov    %eax,(%esp)
085a2bca +0x03e2:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
085a2bcf +0x03e7:  mov    $0x0,%ebx
085a2bd4 +0x03ec:  jmp    085a3b20 <+0x1338>
085a2bd9 +0x03f1:  cmpl   $0x0,0x1c(%ebp)
085a2bdd +0x03f5:  je     085a2bea <+0x402>
085a2bdf +0x03f7:  mov    -0x7c4(%ebp),%edx
085a2be5 +0x03fd:  mov    0x1c(%ebp),%eax
085a2be8 +0x0400:  mov    %edx,(%eax)
085a2bea +0x0402:  mov    -0x7b0(%ebp),%eax
085a2bf0 +0x0408:  test   %eax,%eax
085a2bf2 +0x040a:  jne    085a2c12 <+0x42a>
085a2bf4 +0x040c:  mov    0x8(%ebp),%eax
085a2bf7 +0x040f:  add    $0xb24,%eax
085a2bfc +0x0414:  mov    %eax,(%esp)
085a2bff +0x0417:  call   0822d08c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2736>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2736
085a2c04 +0x041c:  xor    $0x1,%eax
085a2c07 +0x041f:  test   %al,%al
085a2c09 +0x0421:  je     085a2c12 <+0x42a>
085a2c0b +0x0423:  mov    $0x1,%eax
085a2c10 +0x0428:  jmp    085a2c17 <+0x42f>
085a2c12 +0x042a:  mov    $0x0,%eax
085a2c17 +0x042f:  test   %al,%al
085a2c19 +0x0431:  je     085a2c55 <+0x46d>
085a2c1b +0x0433:  mov    0xc(%ebp),%eax
085a2c1e +0x0436:  mov    %eax,(%esp)
085a2c21 +0x0439:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
085a2c26 +0x043e:  movl   $0x0,0x14(%esp)
085a2c2e +0x0446:  movl   $0x0,0x10(%esp)
085a2c36 +0x044e:  movl   $0x1,0xc(%esp)
085a2c3e +0x0456:  movl   $0x25e,0x8(%esp)
085a2c46 +0x045e:  mov    0xc(%ebp),%edx
085a2c49 +0x0461:  mov    %edx,0x4(%esp)
085a2c4d +0x0465:  mov    %eax,(%esp)
085a2c50 +0x0468:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
085a2c55 +0x046d:  mov    -0x7ac(%ebp),%ebx
085a2c5b +0x0473:  lea    -0x7d0(%ebp),%eax
085a2c61 +0x0479:  add    $0x38,%eax
085a2c64 +0x047c:  mov    %eax,(%esp)
085a2c67 +0x047f:  call   085bedb0 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x30e>  ; global constructors keyed to CParty::cMember::cMember()+0x30e
085a2c6c +0x0484:  cmp    %eax,%ebx
085a2c6e +0x0486:  jge    085a2c8e <+0x4a6>
085a2c70 +0x0488:  mov    0x8(%ebp),%eax
085a2c73 +0x048b:  add    $0xb24,%eax
085a2c78 +0x0490:  mov    %eax,(%esp)
085a2c7b +0x0493:  call   0822d08c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2736>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2736
085a2c80 +0x0498:  xor    $0x1,%eax
085a2c83 +0x049b:  test   %al,%al
085a2c85 +0x049d:  je     085a2c8e <+0x4a6>
085a2c87 +0x049f:  mov    $0x1,%eax
085a2c8c +0x04a4:  jmp    085a2c93 <+0x4ab>
085a2c8e +0x04a6:  mov    $0x0,%eax
085a2c93 +0x04ab:  test   %al,%al
085a2c95 +0x04ad:  je     085a2cd1 <+0x4e9>
085a2c97 +0x04af:  mov    0xc(%ebp),%eax
085a2c9a +0x04b2:  mov    %eax,(%esp)
085a2c9d +0x04b5:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
085a2ca2 +0x04ba:  movl   $0x0,0x14(%esp)
085a2caa +0x04c2:  movl   $0x0,0x10(%esp)
085a2cb2 +0x04ca:  movl   $0x1,0xc(%esp)
085a2cba +0x04d2:  movl   $0x25f,0x8(%esp)
085a2cc2 +0x04da:  mov    0xc(%ebp),%edx
085a2cc5 +0x04dd:  mov    %edx,0x4(%esp)
085a2cc9 +0x04e1:  mov    %eax,(%esp)
085a2ccc +0x04e4:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
085a2cd1 +0x04e9:  lea    -0x7d0(%ebp),%eax
085a2cd7 +0x04ef:  mov    %eax,0x4(%esp)
085a2cdb +0x04f3:  lea    -0x3d0(%ebp),%eax
085a2ce1 +0x04f9:  mov    %eax,(%esp)
085a2ce4 +0x04fc:  call   08151aea <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x141f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x141f
085a2ce9 +0x0501:  mov    -0x7c4(%ebp),%eax
085a2cef +0x0507:  mov    0x18(%ebp),%edx
085a2cf2 +0x050a:  mov    %edx,0x10(%esp)
085a2cf6 +0x050e:  lea    -0x3d0(%ebp),%edx
085a2cfc +0x0514:  mov    %edx,0xc(%esp)
085a2d00 +0x0518:  mov    %eax,0x8(%esp)
085a2d04 +0x051c:  mov    0xc(%ebp),%eax
085a2d07 +0x051f:  mov    %eax,0x4(%esp)
085a2d0b +0x0523:  mov    0x8(%ebp),%eax
085a2d0e +0x0526:  mov    %eax,(%esp)
085a2d11 +0x0529:  call   085b5a4c <_ZN6CParty15OnKilledMonsterEP5CUseri11map_monsterRK15MSG_MONSTER_DIE>  ; CParty::OnKilledMonster(CUser*, int, map_monster, MSG_MONSTER_DIE const&)
085a2d16 +0x052e:  jmp    085a2d33 <+0x54b>
085a2d18 +0x0530:  mov    %edx,%ebx
085a2d1a +0x0532:  mov    %eax,%esi
085a2d1c +0x0534:  lea    -0x3d0(%ebp),%eax
085a2d22 +0x053a:  mov    %eax,(%esp)
085a2d25 +0x053d:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
085a2d2a +0x0542:  mov    %esi,%eax
085a2d2c +0x0544:  mov    %ebx,%edx
085a2d2e +0x0546:  jmp    085a3b08 <+0x1320>
085a2d33 +0x054b:  lea    -0x3d0(%ebp),%eax
085a2d39 +0x0551:  mov    %eax,(%esp)
085a2d3c +0x0554:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
085a2d41 +0x0559:  movzbl -0x7c8(%ebp),%eax
085a2d48 +0x0560:  movsbl %al,%eax
085a2d4b +0x0563:  mov    0x8(%ebp),%edx
085a2d4e +0x0566:  add    $0xb24,%edx
085a2d54 +0x056c:  mov    %eax,0x4(%esp)
085a2d58 +0x0570:  mov    %edx,(%esp)
085a2d5b +0x0573:  call   0830a812 <_ZNK13CBattle_Field34convertAPCRoleType2MonsterRoleTypeEc>  ; CBattle_Field::convertAPCRoleType2MonsterRoleType(char) const
085a2d60 +0x0578:  mov    %al,-0x71(%ebp)
085a2d63 +0x057b:  movsbl -0x71(%ebp),%eax
085a2d67 +0x057f:  cmp    $0x1,%eax
085a2d6a +0x0582:  je     085a2d73 <+0x58b>
085a2d6c +0x0584:  cmp    $0x3,%eax
085a2d6f +0x0587:  je     085a2d8d <+0x5a5>
085a2d71 +0x0589:  jmp    085a2da7 <+0x5bf>
085a2d73 +0x058b:  mov    0x8(%ebp),%eax
085a2d76 +0x058e:  mov    0x36c(%eax),%eax
085a2d7c +0x0594:  lea    0x1(%eax),%edx
085a2d7f +0x0597:  mov    0x8(%ebp),%eax
085a2d82 +0x059a:  mov    %edx,0x36c(%eax)
085a2d88 +0x05a0:  jmp    085a2e70 <+0x688>
085a2d8d +0x05a5:  mov    0x8(%ebp),%eax
085a2d90 +0x05a8:  mov    0x370(%eax),%eax
085a2d96 +0x05ae:  lea    0x1(%eax),%edx
085a2d99 +0x05b1:  mov    0x8(%ebp),%eax
085a2d9c +0x05b4:  mov    %edx,0x370(%eax)
085a2da2 +0x05ba:  jmp    085a2e70 <+0x688>
085a2da7 +0x05bf:  mov    0x8(%ebp),%eax
085a2daa +0x05c2:  mov    0x368(%eax),%eax
085a2db0 +0x05c8:  lea    0x1(%eax),%edx
085a2db3 +0x05cb:  mov    0x8(%ebp),%eax
085a2db6 +0x05ce:  mov    %edx,0x368(%eax)
085a2dbc +0x05d4:  mov    0x8(%ebp),%eax
085a2dbf +0x05d7:  mov    0x378(%eax),%eax
085a2dc5 +0x05dd:  lea    0x1(%eax),%edx
085a2dc8 +0x05e0:  mov    0x8(%ebp),%eax
085a2dcb +0x05e3:  mov    %edx,0x378(%eax)
085a2dd1 +0x05e9:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085a2dd6 +0x05ee:  mov    0x49d0(%eax),%eax
085a2ddc +0x05f4:  mov    %eax,-0x4c(%ebp)
085a2ddf +0x05f7:  mov    0x8(%ebp),%eax
085a2de2 +0x05fa:  add    $0xb24,%eax
085a2de7 +0x05ff:  mov    %eax,(%esp)
085a2dea +0x0602:  call   085bf28c <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x7ea>  ; global constructors keyed to CParty::cMember::cMember()+0x7ea
085a2def +0x0607:  test   %eax,%eax
085a2df1 +0x0609:  setne  %al
085a2df4 +0x060c:  test   %al,%al
085a2df6 +0x060e:  je     085a2e30 <+0x648>
085a2df8 +0x0610:  mov    0x8(%ebp),%eax
085a2dfb +0x0613:  add    $0xb24,%eax
085a2e00 +0x0618:  mov    %eax,(%esp)
085a2e03 +0x061b:  call   085bf28c <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x7ea>  ; global constructors keyed to CParty::cMember::cMember()+0x7ea
085a2e08 +0x0620:  mov    0xf0(%eax),%eax
085a2e0e +0x0626:  test   %eax,%eax
085a2e10 +0x0628:  setne  %al
085a2e13 +0x062b:  test   %al,%al
085a2e15 +0x062d:  je     085a2e30 <+0x648>
085a2e17 +0x062f:  mov    0x8(%ebp),%eax
085a2e1a +0x0632:  add    $0xb24,%eax
085a2e1f +0x0637:  mov    %eax,(%esp)
085a2e22 +0x063a:  call   085bf28c <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x7ea>  ; global constructors keyed to CParty::cMember::cMember()+0x7ea
085a2e27 +0x063f:  mov    0xf0(%eax),%eax
085a2e2d +0x0645:  mov    %eax,-0x4c(%ebp)
085a2e30 +0x0648:  cmpl   $0x0,-0x4c(%ebp)
085a2e34 +0x064c:  jne    085a2e4d <+0x665>
085a2e36 +0x064e:  mov    0x8(%ebp),%eax
085a2e39 +0x0651:  mov    0x374(%eax),%eax
085a2e3f +0x0657:  lea    0x1(%eax),%edx
085a2e42 +0x065a:  mov    0x8(%ebp),%eax
085a2e45 +0x065d:  mov    %edx,0x374(%eax)
085a2e4b +0x0663:  jmp    085a2e70 <+0x688>
085a2e4d +0x0665:  mov    0x8(%ebp),%eax
085a2e50 +0x0668:  mov    0x378(%eax),%eax
085a2e56 +0x066e:  cmp    -0x4c(%ebp),%eax
085a2e59 +0x0671:  jg     085a2e70 <+0x688>
085a2e5b +0x0673:  mov    0x8(%ebp),%eax
085a2e5e +0x0676:  mov    0x374(%eax),%eax
085a2e64 +0x067c:  lea    0x1(%eax),%edx
085a2e67 +0x067f:  mov    0x8(%ebp),%eax
085a2e6a +0x0682:  mov    %edx,0x374(%eax)
085a2e70 +0x0688:  mov    0x8(%ebp),%eax
085a2e73 +0x068b:  mov    0x74(%eax),%eax
085a2e76 +0x068e:  test   %eax,%eax
085a2e78 +0x0690:  je     085a2f60 <+0x778>
085a2e7e +0x0696:  movzwl -0x7dc(%ebp),%eax
085a2e85 +0x069d:  mov    0x8(%ebp),%edx
085a2e88 +0x06a0:  add    $0x210,%edx
085a2e8e +0x06a6:  mov    %eax,0x4(%esp)
085a2e92 +0x06aa:  mov    %edx,(%esp)
085a2e95 +0x06ad:  call   085bf628 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xb86>  ; global constructors keyed to CParty::cMember::cMember()+0xb86
085a2e9a +0x06b2:  mov    0x8(%ebp),%eax
085a2e9d +0x06b5:  add    $0xb24,%eax
085a2ea2 +0x06ba:  mov    %eax,(%esp)
085a2ea5 +0x06bd:  call   0830a0e8 <_ZN13CBattle_Field16check_grid_clearEv>  ; CBattle_Field::check_grid_clear()
085a2eaa +0x06c2:  test   %al,%al
085a2eac +0x06c4:  je     085a2f60 <+0x778>
085a2eb2 +0x06ca:  movl   $0x0,-0x444(%ebp)
085a2ebc +0x06d4:  movl   $0x0,-0x440(%ebp)
085a2ec6 +0x06de:  movl   $0x0,-0x43c(%ebp)
085a2ed0 +0x06e8:  movl   $0x0,-0x438(%ebp)
085a2eda +0x06f2:  mov    0x8(%ebp),%eax
085a2edd +0x06f5:  mov    0x74(%eax),%eax
085a2ee0 +0x06f8:  mov    %eax,-0x444(%ebp)
085a2ee6 +0x06fe:  mov    0x8(%ebp),%eax
085a2ee9 +0x0701:  mov    0x74(%eax),%eax
085a2eec +0x0704:  mov    0x8(%ebp),%edx
085a2eef +0x0707:  lea    0x210(%edx),%ecx
085a2ef5 +0x070d:  lea    -0x444(%ebp),%edx
085a2efb +0x0713:  mov    %edx,0x8(%esp)
085a2eff +0x0717:  mov    %eax,0x4(%esp)
085a2f03 +0x071b:  mov    %ecx,(%esp)
085a2f06 +0x071e:  call   08599a88 <_ZN16CTraceMobDieHack8traceEndEP5CUserPS1_>  ; CTraceMobDieHack::traceEnd(CUser*, CUser**)
085a2f0b +0x0723:  movl   $0x0,-0x48(%ebp)
085a2f12 +0x072a:  jmp    085a2f55 <+0x76d>
085a2f14 +0x072c:  mov    -0x48(%ebp),%eax
085a2f17 +0x072f:  mov    %eax,0x4(%esp)
085a2f1b +0x0733:  mov    0x8(%ebp),%eax
085a2f1e +0x0736:  mov    %eax,(%esp)
085a2f21 +0x0739:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085a2f26 +0x073e:  test   %al,%al
085a2f28 +0x0740:  je     085a2f51 <+0x769>
085a2f2a +0x0742:  mov    -0x48(%ebp),%edx
085a2f2d +0x0745:  mov    0x8(%ebp),%ecx
085a2f30 +0x0748:  mov    %edx,%eax
085a2f32 +0x074a:  add    %eax,%eax
085a2f34 +0x074c:  add    %edx,%eax
085a2f36 +0x074e:  shl    $0x3,%eax
085a2f39 +0x0751:  lea    (%ecx,%eax,1),%eax
085a2f3c +0x0754:  add    $0x78,%eax
085a2f3f +0x0757:  mov    (%eax),%eax
085a2f41 +0x0759:  movl   $0x1,0x4(%esp)
085a2f49 +0x0761:  mov    %eax,(%esp)
085a2f4c +0x0764:  call   086802b8 <_ZN5CUser24reqHumanCertify4ClearMapEb>  ; CUser::reqHumanCertify4ClearMap(bool)
085a2f51 +0x0769:  addl   $0x1,-0x48(%ebp)
085a2f55 +0x076d:  cmpl   $0x3,-0x48(%ebp)
085a2f59 +0x0771:  setle  %al
085a2f5c +0x0774:  test   %al,%al
085a2f5e +0x0776:  jne    085a2f14 <+0x72c>
085a2f60 +0x0778:  cmpb   $0x3,-0x71(%ebp)
085a2f64 +0x077c:  jne    085a2f76 <+0x78e>
085a2f66 +0x077e:  mov    0x8(%ebp),%eax
085a2f69 +0x0781:  add    $0xc7c,%eax
085a2f6e +0x0786:  mov    %eax,(%esp)
085a2f71 +0x0789:  call   082fee7a <_ZN19CDungeonClearTracer24IncrementKilledBossCountEv>  ; CDungeonClearTracer::IncrementKilledBossCount()
085a2f76 +0x078e:  mov    0x8(%ebp),%eax
085a2f79 +0x0791:  add    $0xc7c,%eax
085a2f7e +0x0796:  mov    %eax,(%esp)
085a2f81 +0x0799:  call   082fee8e <_ZN19CDungeonClearTracer27IncrementKilledMonsterCountEv>  ; CDungeonClearTracer::IncrementKilledMonsterCount()
085a2f86 +0x079e:  movl   $0x0,-0x44(%ebp)
085a2f8d +0x07a5:  jmp    085a3049 <+0x861>
085a2f92 +0x07aa:  mov    -0x44(%ebp),%eax
085a2f95 +0x07ad:  mov    %eax,0x4(%esp)
085a2f99 +0x07b1:  mov    0x8(%ebp),%eax
085a2f9c +0x07b4:  mov    %eax,(%esp)
085a2f9f +0x07b7:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085a2fa4 +0x07bc:  xor    $0x1,%eax
085a2fa7 +0x07bf:  test   %al,%al
085a2fa9 +0x07c1:  jne    085a303e <+0x856>
085a2faf +0x07c7:  mov    -0x44(%ebp),%eax
085a2fb2 +0x07ca:  mov    0x8(%ebp),%edx
085a2fb5 +0x07cd:  movzbl 0x380(%edx,%eax,1),%eax
085a2fbd +0x07d5:  xor    $0x1,%eax
085a2fc0 +0x07d8:  test   %al,%al
085a2fc2 +0x07da:  jne    085a3041 <+0x859>
085a2fc4 +0x07dc:  mov    0x8(%ebp),%eax
085a2fc7 +0x07df:  mov    0xcd8(%eax),%eax
085a2fcd +0x07e5:  cmp    $0x1,%eax
085a2fd0 +0x07e8:  je     085a3044 <+0x85c>
085a2fd2 +0x07ea:  movl   $0x1,-0x40(%ebp)
085a2fd9 +0x07f1:  movzbl -0x7c8(%ebp),%eax
085a2fe0 +0x07f8:  cmp    $0x4,%al
085a2fe2 +0x07fa:  jle    085a2ff6 <+0x80e>
085a2fe4 +0x07fc:  movzbl -0x7c8(%ebp),%eax
085a2feb +0x0803:  cmp    $0x8,%al
085a2fed +0x0805:  jg     085a2ff6 <+0x80e>
085a2fef +0x0807:  movl   $0x2,-0x40(%ebp)
085a2ff6 +0x080e:  mov    -0x7c4(%ebp),%ebx
085a2ffc +0x0814:  mov    0x8(%ebp),%eax
085a2fff +0x0817:  add    $0xb24,%eax
085a3004 +0x081c:  mov    %eax,(%esp)
085a3007 +0x081f:  call   0822d0d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2782>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2782
085a300c +0x0824:  mov    %eax,%ecx
085a300e +0x0826:  mov    -0x44(%ebp),%edx
085a3011 +0x0829:  mov    0x8(%ebp),%esi
085a3014 +0x082c:  mov    %edx,%eax
085a3016 +0x082e:  add    %eax,%eax
085a3018 +0x0830:  add    %edx,%eax
085a301a +0x0832:  shl    $0x3,%eax
085a301d +0x0835:  lea    (%esi,%eax,1),%eax
085a3020 +0x0838:  add    $0x78,%eax
085a3023 +0x083b:  mov    (%eax),%eax
085a3025 +0x083d:  mov    -0x40(%ebp),%edx
085a3028 +0x0840:  mov    %edx,0xc(%esp)
085a302c +0x0844:  mov    %ebx,0x8(%esp)
085a3030 +0x0848:  mov    %ecx,0x4(%esp)
085a3034 +0x084c:  mov    %eax,(%esp)
085a3037 +0x084f:  call   0866cb04 <_ZN5CUser17CheckQuestMonsterEii21ENUM_QUEST_ENEMY_TYPE>  ; CUser::CheckQuestMonster(int, int, ENUM_QUEST_ENEMY_TYPE)
085a303c +0x0854:  jmp    085a3045 <+0x85d>
085a303e +0x0856:  nop
085a303f +0x0857:  jmp    085a3045 <+0x85d>
085a3041 +0x0859:  nop
085a3042 +0x085a:  jmp    085a3045 <+0x85d>
085a3044 +0x085c:  nop
085a3045 +0x085d:  addl   $0x1,-0x44(%ebp)
085a3049 +0x0861:  cmpl   $0x3,-0x44(%ebp)
085a304d +0x0865:  setle  %al
085a3050 +0x0868:  test   %al,%al
085a3052 +0x086a:  jne    085a2f92 <+0x7aa>
085a3058 +0x0870:  movl   $0x0,-0x3c(%ebp)
085a305f +0x0877:  jmp    085a30b8 <+0x8d0>
085a3061 +0x0879:  mov    -0x3c(%ebp),%eax
085a3064 +0x087c:  mov    %eax,0x4(%esp)
085a3068 +0x0880:  mov    0x8(%ebp),%eax
085a306b +0x0883:  mov    %eax,(%esp)
085a306e +0x0886:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085a3073 +0x088b:  xor    $0x1,%eax
085a3076 +0x088e:  test   %al,%al
085a3078 +0x0890:  jne    085a30b3 <+0x8cb>
085a307a +0x0892:  mov    -0x3c(%ebp),%edx
085a307d +0x0895:  mov    0x8(%ebp),%ecx
085a3080 +0x0898:  mov    %edx,%eax
085a3082 +0x089a:  add    %eax,%eax
085a3084 +0x089c:  add    %edx,%eax
085a3086 +0x089e:  shl    $0x3,%eax
085a3089 +0x08a1:  lea    (%ecx,%eax,1),%eax
085a308c +0x08a4:  add    $0x78,%eax
085a308f +0x08a7:  mov    (%eax),%eax
085a3091 +0x08a9:  cmp    0xc(%ebp),%eax
085a3094 +0x08ac:  jne    085a30b4 <+0x8cc>
085a3096 +0x08ae:  mov    -0x7c4(%ebp),%edx
085a309c +0x08b4:  mov    0xc(%ebp),%eax
085a309f +0x08b7:  mov    0x796f8(%eax),%eax
085a30a5 +0x08bd:  mov    %edx,0x4(%esp)
085a30a9 +0x08c1:  mov    %eax,(%esp)
085a30ac +0x08c4:  call   084b9fb8 <_ZN10HistoryLog12WriteKillMobEP8_IO_FILEi>  ; HistoryLog::WriteKillMob(_IO_FILE*, int)
085a30b1 +0x08c9:  jmp    085a30b4 <+0x8cc>
085a30b3 +0x08cb:  nop
085a30b4 +0x08cc:  addl   $0x1,-0x3c(%ebp)
085a30b8 +0x08d0:  cmpl   $0x3,-0x3c(%ebp)
085a30bc +0x08d4:  setle  %al
085a30bf +0x08d7:  test   %al,%al
085a30c1 +0x08d9:  jne    085a3061 <+0x879>
085a30c3 +0x08db:  cmpl   $0x0,-0x84(%ebp)
085a30ca +0x08e2:  jle    085a30e6 <+0x8fe>
085a30cc +0x08e4:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085a30d1 +0x08e9:  mov    -0x84(%ebp),%edx
085a30d7 +0x08ef:  sub    $0x1,%edx
085a30da +0x08f2:  add    $0xf0,%edx
085a30e0 +0x08f8:  mov    0x10(%eax,%edx,4),%eax
085a30e4 +0x08fc:  jmp    085a30eb <+0x903>
085a30e6 +0x08fe:  mov    $0x3f800000,%eax
085a30eb +0x0903:  mov    %eax,-0x70(%ebp)
085a30ee +0x0906:  mov    0x8(%ebp),%eax
085a30f1 +0x0909:  mov    %eax,(%esp)
085a30f4 +0x090c:  call   085a21d4 <_ZN6CParty16isHelpAbusePartyEv>  ; CParty::isHelpAbuseParty()
085a30f9 +0x0911:  movzbl %al,%ebx
085a30fc +0x0914:  mov    &_ZN10GlobalData15s_event_managerE,%eax
085a3101 +0x0919:  movl   $0x18,0x4(%esp)
085a3109 +0x0921:  mov    %eax,(%esp)
085a310c +0x0924:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
085a3111 +0x0929:  mov    %ebx,0x8(%esp)
085a3115 +0x092d:  mov    -0x84(%ebp),%edx
085a311b +0x0933:  mov    %edx,0x4(%esp)
085a311f +0x0937:  mov    %eax,(%esp)
085a3122 +0x093a:  call   085bfe1a <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1378>  ; global constructors keyed to CParty::cMember::cMember()+0x1378
085a3127 +0x093f:  flds   -0x70(%ebp)
085a312a +0x0942:  faddp  %st,%st(1)
085a312c +0x0944:  fstps  -0x70(%ebp)
085a312f +0x0947:  lea    -0x7d0(%ebp),%eax
085a3135 +0x094d:  mov    %eax,(%esp)
085a3138 +0x0950:  call   08151182 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xab7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xab7
085a313d +0x0955:  movzbl %al,%ebx
085a3140 +0x0958:  mov    0x8(%ebp),%eax
085a3143 +0x095b:  mov    0xcac(%eax),%eax
085a3149 +0x0961:  mov    %eax,(%esp)
085a314c +0x0964:  call   085bed90 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x2ee>  ; global constructors keyed to CParty::cMember::cMember()+0x2ee
085a3151 +0x0969:  fstps  -0x80c(%ebp)
085a3157 +0x096f:  mov    0x8(%ebp),%eax
085a315a +0x0972:  add    $0xb24,%eax
085a315f +0x0977:  mov    %eax,(%esp)
085a3162 +0x097a:  call   080f981c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x28>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x28
085a3167 +0x097f:  movsbl -0x71(%ebp),%ecx
085a316b +0x0983:  mov    -0x3f4(%ebp),%edx
085a3171 +0x0989:  mov    %ebx,0x18(%esp)
085a3175 +0x098d:  mov    -0x70(%ebp),%ebx
085a3178 +0x0990:  mov    %ebx,0x14(%esp)
085a317c +0x0994:  flds   -0x80c(%ebp)
085a3182 +0x099a:  fstps  0x10(%esp)
085a3186 +0x099e:  mov    %eax,0xc(%esp)
085a318a +0x09a2:  mov    %ecx,0x8(%esp)
085a318e +0x09a6:  mov    %edx,0x4(%esp)
085a3192 +0x09aa:  mov    0x8(%ebp),%eax
085a3195 +0x09ad:  mov    %eax,(%esp)
085a3198 +0x09b0:  call   085a23dc <_ZN6CParty18getMonsterTotalExpEjciffb>  ; CParty::getMonsterTotalExp(unsigned int, char, int, float, float, bool)
085a319d +0x09b5:  mov    %eax,-0x6c(%ebp)
085a31a0 +0x09b8:  movl   $0x1,-0x68(%ebp)
085a31a7 +0x09bf:  mov    -0x6c(%ebp),%esi
085a31aa +0x09c2:  mov    0xc(%ebp),%eax
085a31ad +0x09c5:  mov    %eax,(%esp)
085a31b0 +0x09c8:  call   08151abe <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13f3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13f3
085a31b5 +0x09cd:  mov    %eax,%ecx
085a31b7 +0x09cf:  movzbl -0x7c8(%ebp),%eax
085a31be +0x09d6:  cmp    $0x5,%al
085a31c0 +0x09d8:  sete   %al
085a31c3 +0x09db:  movzbl %al,%eax
085a31c6 +0x09de:  mov    %eax,-0x808(%ebp)
085a31cc +0x09e4:  movzbl -0x7c8(%ebp),%eax
085a31d3 +0x09eb:  movsbl %al,%eax
085a31d6 +0x09ee:  mov    %eax,-0x804(%ebp)
085a31dc +0x09f4:  mov    0x18(%ebp),%eax
085a31df +0x09f7:  movzwl 0xa26(%eax),%eax
085a31e6 +0x09fe:  movzwl %ax,%eax
085a31e9 +0x0a01:  mov    %eax,-0x800(%ebp)
085a31ef +0x0a07:  mov    0x18(%ebp),%eax
085a31f2 +0x0a0a:  movzwl 0xa24(%eax),%eax
085a31f9 +0x0a11:  movzwl %ax,%eax
085a31fc +0x0a14:  mov    %eax,-0x7fc(%ebp)
085a3202 +0x0a1a:  mov    0x18(%ebp),%eax
085a3205 +0x0a1d:  mov    0xa1a(%eax),%eax
085a320b +0x0a23:  mov    %eax,-0x7f8(%ebp)
085a3211 +0x0a29:  mov    0x18(%ebp),%eax
085a3214 +0x0a2c:  mov    0xa1e(%eax),%edi
085a321a +0x0a32:  mov    -0x7c4(%ebp),%ebx
085a3220 +0x0a38:  mov    0xc(%ebp),%eax
085a3223 +0x0a3b:  lea    0x79700(%eax),%edx
085a3229 +0x0a41:  mov    -0x68(%ebp),%eax
085a322c +0x0a44:  mov    %eax,0x2c(%esp)
085a3230 +0x0a48:  mov    %esi,0x28(%esp)
085a3234 +0x0a4c:  mov    %ecx,0x24(%esp)
085a3238 +0x0a50:  mov    -0x808(%ebp),%eax
085a323e +0x0a56:  mov    %eax,0x20(%esp)
085a3242 +0x0a5a:  mov    -0x804(%ebp),%eax
085a3248 +0x0a60:  mov    %eax,0x1c(%esp)
085a324c +0x0a64:  mov    0x18(%ebp),%eax
085a324f +0x0a67:  mov    %eax,0x18(%esp)
085a3253 +0x0a6b:  mov    -0x800(%ebp),%eax
085a3259 +0x0a71:  mov    %eax,0x14(%esp)
085a325d +0x0a75:  mov    -0x7fc(%ebp),%eax
085a3263 +0x0a7b:  mov    %eax,0x10(%esp)
085a3267 +0x0a7f:  mov    -0x7f8(%ebp),%eax
085a326d +0x0a85:  mov    %eax,0xc(%esp)
085a3271 +0x0a89:  mov    %edi,0x8(%esp)
085a3275 +0x0a8d:  mov    %ebx,0x4(%esp)
085a3279 +0x0a91:  mov    %edx,(%esp)
085a327c +0x0a94:  call   086851ac <_ZN15cUserHistoryLog11KillMonsterEijjttRK15MSG_MONSTER_DIEcbii13eExpAddReason>  ; cUserHistoryLog::KillMonster(int, unsigned int, unsigned int, unsigned short, unsigned short, MSG_MONSTER_DIE const&, char, bool, int, int, eExpAddReason)
085a3281 +0x0a99:  mov    0x8(%ebp),%eax
085a3284 +0x0a9c:  mov    %eax,(%esp)
085a3287 +0x0a9f:  call   085b4ae2 <_ZN6CParty18_getMemberLevelGapEv>  ; CParty::_getMemberLevelGap()
085a328c +0x0aa4:  mov    %eax,-0x64(%ebp)
085a328f +0x0aa7:  movl   $0x0,-0x60(%ebp)
085a3296 +0x0aae:  movzbl -0x7c8(%ebp),%eax
085a329d +0x0ab5:  cmp    $0x4,%al
085a329f +0x0ab7:  jle    085a32ef <+0xb07>
085a32a1 +0x0ab9:  mov    -0x7c4(%ebp),%eax
085a32a7 +0x0abf:  mov    %eax,%ebx
085a32a9 +0x0ac1:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085a32ae +0x0ac6:  mov    0x869c(%eax),%eax
085a32b4 +0x0acc:  mov    %ebx,0x4(%esp)
085a32b8 +0x0ad0:  mov    %eax,(%esp)
085a32bb +0x0ad3:  call   0834a9d2 <_ZN16CAICharacterList3getEj>  ; CAICharacterList::get(unsigned int)
085a32c0 +0x0ad8:  mov    %eax,-0x38(%ebp)
085a32c3 +0x0adb:  cmpl   $0x0,-0x38(%ebp)
085a32c7 +0x0adf:  je     085a32ef <+0xb07>
085a32c9 +0x0ae1:  mov    -0x7a4(%ebp),%eax
085a32cf +0x0ae7:  cmp    $0x64,%eax
085a32d2 +0x0aea:  je     085a32e1 <+0xaf9>
085a32d4 +0x0aec:  mov    -0x7a4(%ebp),%eax
085a32da +0x0af2:  cmp    $0xc8,%eax
085a32df +0x0af7:  jne    085a32ef <+0xb07>
085a32e1 +0x0af9:  mov    -0x38(%ebp),%eax
085a32e4 +0x0afc:  mov    %eax,(%esp)
085a32e7 +0x0aff:  call   0834a240 <_ZNK12CAICharacter14getPvPWinPointEv>  ; CAICharacter::getPvPWinPoint() const
085a32ec +0x0b04:  mov    %eax,-0x60(%ebp)
085a32ef +0x0b07:  movl   $0x0,-0x34(%ebp)
085a32f6 +0x0b0e:  jmp    085a387c <+0x1094>
085a32fb +0x0b13:  mov    -0x34(%ebp),%eax
085a32fe +0x0b16:  mov    %eax,0x4(%esp)
085a3302 +0x0b1a:  mov    0x8(%ebp),%eax
085a3305 +0x0b1d:  mov    %eax,(%esp)
085a3308 +0x0b20:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085a330d +0x0b25:  xor    $0x1,%eax
085a3310 +0x0b28:  test   %al,%al
085a3312 +0x0b2a:  jne    085a3874 <+0x108c>
085a3318 +0x0b30:  mov    0x8(%ebp),%eax
085a331b +0x0b33:  mov    0xcd8(%eax),%eax
085a3321 +0x0b39:  cmp    $0x1,%eax
085a3324 +0x0b3c:  je     085a3877 <+0x108f>
085a332a +0x0b42:  mov    -0x34(%ebp),%eax
085a332d +0x0b45:  mov    0x8(%ebp),%edx
085a3330 +0x0b48:  movzbl 0x384(%edx,%eax,1),%eax
085a3338 +0x0b50:  xor    $0x1,%eax
085a333b +0x0b53:  test   %al,%al
085a333d +0x0b55:  je     085a3377 <+0xb8f>
085a333f +0x0b57:  mov    0x8(%ebp),%eax
085a3342 +0x0b5a:  mov    0xcac(%eax),%eax
085a3348 +0x0b60:  movzbl 0x89f(%eax),%eax
085a334f +0x0b67:  test   %al,%al
085a3351 +0x0b69:  jne    085a3377 <+0xb8f>
085a3353 +0x0b6b:  mov    -0x34(%ebp),%edx
085a3356 +0x0b6e:  mov    0x8(%ebp),%ecx
085a3359 +0x0b71:  mov    %edx,%eax
085a335b +0x0b73:  add    %eax,%eax
085a335d +0x0b75:  add    %edx,%eax
085a335f +0x0b77:  shl    $0x3,%eax
085a3362 +0x0b7a:  lea    (%ecx,%eax,1),%eax
085a3365 +0x0b7d:  add    $0x78,%eax
085a3368 +0x0b80:  mov    (%eax),%eax
085a336a +0x0b82:  mov    %eax,(%esp)
085a336d +0x0b85:  call   0867b9da <_ZN5CUser17SendZeroExpPacketEv>  ; CUser::SendZeroExpPacket()
085a3372 +0x0b8a:  jmp    085a3878 <+0x1090>
085a3377 +0x0b8f:  mov    -0x34(%ebp),%edx
085a337a +0x0b92:  mov    0x8(%ebp),%ecx
085a337d +0x0b95:  mov    %edx,%eax
085a337f +0x0b97:  add    %eax,%eax
085a3381 +0x0b99:  add    %edx,%eax
085a3383 +0x0b9b:  shl    $0x3,%eax
085a3386 +0x0b9e:  lea    (%ecx,%eax,1),%eax
085a3389 +0x0ba1:  add    $0x78,%eax
085a338c +0x0ba4:  mov    (%eax),%eax
085a338e +0x0ba6:  mov    %eax,(%esp)
085a3391 +0x0ba9:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
085a3396 +0x0bae:  mov    %eax,-0x30(%ebp)
085a3399 +0x0bb1:  movl   $0x0,-0x2c(%ebp)
085a33a0 +0x0bb8:  mov    0x8(%ebp),%eax
085a33a3 +0x0bbb:  mov    0xcac(%eax),%eax
085a33a9 +0x0bc1:  movzbl 0x89e(%eax),%eax
085a33b0 +0x0bc8:  test   %al,%al
085a33b2 +0x0bca:  jne    085a33c7 <+0xbdf>
085a33b4 +0x0bcc:  mov    0x8(%ebp),%eax
085a33b7 +0x0bcf:  movzwl 0xc4c(%eax),%eax
085a33be +0x0bd6:  test   %ax,%ax
085a33c1 +0x0bd9:  je     085a346b <+0xc83>
085a33c7 +0x0bdf:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085a33cc +0x0be4:  lea    -0x3f4(%ebp),%edx
085a33d2 +0x0bea:  mov    %edx,0x8(%esp)
085a33d6 +0x0bee:  mov    -0x30(%ebp),%edx
085a33d9 +0x0bf1:  mov    %edx,0x4(%esp)
085a33dd +0x0bf5:  mov    %eax,(%esp)
085a33e0 +0x0bf8:  call   08360a6e <_ZNK12CDataManager14get_mob_rewardEiRj>  ; CDataManager::get_mob_reward(int, unsigned int&) const
085a33e5 +0x0bfd:  mov    0x8(%ebp),%eax
085a33e8 +0x0c00:  mov    0xcac(%eax),%eax
085a33ee +0x0c06:  mov    %eax,(%esp)
085a33f1 +0x0c09:  call   085bed90 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x2ee>  ; global constructors keyed to CParty::cMember::cMember()+0x2ee
085a33f6 +0x0c0e:  fstps  -0x7f4(%ebp)
085a33fc +0x0c14:  mov    0x8(%ebp),%eax
085a33ff +0x0c17:  add    $0xb24,%eax
085a3404 +0x0c1c:  mov    %eax,(%esp)
085a3407 +0x0c1f:  call   080f981c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x28>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x28
085a340c +0x0c24:  movsbl -0x71(%ebp),%ecx
085a3410 +0x0c28:  mov    -0x3f4(%ebp),%edx
085a3416 +0x0c2e:  movl   $0x0,0x18(%esp)
085a341e +0x0c36:  mov    -0x70(%ebp),%ebx
085a3421 +0x0c39:  mov    %ebx,0x14(%esp)
085a3425 +0x0c3d:  flds   -0x7f4(%ebp)
085a342b +0x0c43:  fstps  0x10(%esp)
085a342f +0x0c47:  mov    %eax,0xc(%esp)
085a3433 +0x0c4b:  mov    %ecx,0x8(%esp)
085a3437 +0x0c4f:  mov    %edx,0x4(%esp)
085a343b +0x0c53:  mov    0x8(%ebp),%eax
085a343e +0x0c56:  mov    %eax,(%esp)
085a3441 +0x0c59:  call   085a23dc <_ZN6CParty18getMonsterTotalExpEjciffb>  ; CParty::getMonsterTotalExp(unsigned int, char, int, float, float, bool)
085a3446 +0x0c5e:  mov    %eax,-0x28(%ebp)
085a3449 +0x0c61:  mov    -0x84(%ebp),%eax
085a344f +0x0c67:  mov    %eax,-0x81c(%ebp)
085a3455 +0x0c6d:  mov    -0x28(%ebp),%eax
085a3458 +0x0c70:  mov    $0x0,%edx
085a345d +0x0c75:  divl   -0x81c(%ebp)
085a3463 +0x0c7b:  mov    %eax,-0x2c(%ebp)
085a3466 +0x0c7e:  jmp    085a35bd <+0xdd5>
085a346b +0x0c83:  mov    0x8(%ebp),%eax
085a346e +0x0c86:  mov    0xcac(%eax),%eax
085a3474 +0x0c8c:  mov    %eax,(%esp)
085a3477 +0x0c8f:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
085a347c +0x0c94:  cmp    $0x64,%eax
085a347f +0x0c97:  sete   %al
085a3482 +0x0c9a:  test   %al,%al
085a3484 +0x0c9c:  je     085a351b <+0xd33>
085a348a +0x0ca2:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085a348f +0x0ca7:  lea    -0x3f4(%ebp),%edx
085a3495 +0x0cad:  mov    %edx,0x8(%esp)
085a3499 +0x0cb1:  mov    -0x30(%ebp),%edx
085a349c +0x0cb4:  mov    %edx,0x4(%esp)
085a34a0 +0x0cb8:  mov    %eax,(%esp)
085a34a3 +0x0cbb:  call   08360a6e <_ZNK12CDataManager14get_mob_rewardEiRj>  ; CDataManager::get_mob_reward(int, unsigned int&) const
085a34a8 +0x0cc0:  mov    0x8(%ebp),%eax
085a34ab +0x0cc3:  mov    0xcac(%eax),%eax
085a34b1 +0x0cc9:  mov    %eax,(%esp)
085a34b4 +0x0ccc:  call   085bed90 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x2ee>  ; global constructors keyed to CParty::cMember::cMember()+0x2ee
085a34b9 +0x0cd1:  mov    0x8(%ebp),%eax
085a34bc +0x0cd4:  mov    0xcc4(%eax),%ecx
085a34c2 +0x0cda:  movsbl -0x71(%ebp),%edx
085a34c6 +0x0cde:  mov    -0x3f4(%ebp),%eax
085a34cc +0x0ce4:  movl   $0x0,0x18(%esp)
085a34d4 +0x0cec:  mov    -0x70(%ebp),%ebx
085a34d7 +0x0cef:  mov    %ebx,0x14(%esp)
085a34db +0x0cf3:  fstps  0x10(%esp)
085a34df +0x0cf7:  mov    %ecx,0xc(%esp)
085a34e3 +0x0cfb:  mov    %edx,0x8(%esp)
085a34e7 +0x0cff:  mov    %eax,0x4(%esp)
085a34eb +0x0d03:  mov    0x8(%ebp),%eax
085a34ee +0x0d06:  mov    %eax,(%esp)
085a34f1 +0x0d09:  call   085a23dc <_ZN6CParty18getMonsterTotalExpEjciffb>  ; CParty::getMonsterTotalExp(unsigned int, char, int, float, float, bool)
085a34f6 +0x0d0e:  mov    %eax,-0x24(%ebp)
085a34f9 +0x0d11:  mov    -0x84(%ebp),%eax
085a34ff +0x0d17:  mov    %eax,-0x81c(%ebp)
085a3505 +0x0d1d:  mov    -0x24(%ebp),%eax
085a3508 +0x0d20:  mov    $0x0,%edx
085a350d +0x0d25:  divl   -0x81c(%ebp)
085a3513 +0x0d2b:  mov    %eax,-0x2c(%ebp)
085a3516 +0x0d2e:  jmp    085a35bd <+0xdd5>
085a351b +0x0d33:  movzbl -0x7c0(%ebp),%eax
085a3522 +0x0d3a:  movzbl %al,%ebx
085a3525 +0x0d3d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085a352a +0x0d42:  mov    %ebx,0x8(%esp)
085a352e +0x0d46:  mov    -0x30(%ebp),%edx
085a3531 +0x0d49:  mov    %edx,0x4(%esp)
085a3535 +0x0d4d:  mov    %eax,(%esp)
085a3538 +0x0d50:  call   08360914 <_ZN12CDataManager14BaseExpPenaltyEii>  ; CDataManager::BaseExpPenalty(int, int)
085a353d +0x0d55:  fstps  -0x7f0(%ebp)
085a3543 +0x0d5b:  mov    0x8(%ebp),%eax
085a3546 +0x0d5e:  mov    %eax,(%esp)
085a3549 +0x0d61:  call   0859d70e <_ZN6CParty17MemberPenaltyRateEv>  ; CParty::MemberPenaltyRate()
085a354e +0x0d66:  mov    %eax,-0x7e0(%ebp)
085a3554 +0x0d6c:  fildl  -0x7e0(%ebp)
085a355a +0x0d72:  flds   -0x7f0(%ebp)
085a3560 +0x0d78:  fmulp  %st,%st(1)
085a3562 +0x0d7a:  mov    -0x6c(%ebp),%eax
085a3565 +0x0d7d:  mov    $0x0,%edx
085a356a +0x0d82:  mov    %eax,-0x7e8(%ebp)
085a3570 +0x0d88:  mov    %edx,-0x7e4(%ebp)
085a3576 +0x0d8e:  fildll -0x7e8(%ebp)
085a357c +0x0d94:  fmulp  %st,%st(1)
085a357e +0x0d96:  fildl  -0x84(%ebp)
085a3584 +0x0d9c:  fdivrp %st,%st(1)
085a3586 +0x0d9e:  fnstcw -0x7ea(%ebp)
085a358c +0x0da4:  movzwl -0x7ea(%ebp),%eax
085a3593 +0x0dab:  mov    $0xc,%ah
085a3595 +0x0dad:  mov    %ax,-0x7ec(%ebp)
085a359c +0x0db4:  fldcw  -0x7ec(%ebp)
085a35a2 +0x0dba:  fistpll -0x7e8(%ebp)
085a35a8 +0x0dc0:  fldcw  -0x7ea(%ebp)
085a35ae +0x0dc6:  mov    -0x7e8(%ebp),%eax
085a35b4 +0x0dcc:  mov    -0x7e4(%ebp),%edx
085a35ba +0x0dd2:  mov    %eax,-0x2c(%ebp)
085a35bd +0x0dd5:  mov    0x8(%ebp),%eax
085a35c0 +0x0dd8:  mov    %eax,0x4(%esp)
085a35c4 +0x0ddc:  lea    -0x44c(%ebp),%eax
085a35ca +0x0de2:  mov    %eax,(%esp)
085a35cd +0x0de5:  call   08469976 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x59>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x59
085a35d2 +0x0dea:  lea    -0x468(%ebp),%eax
085a35d8 +0x0df0:  mov    %eax,(%esp)
085a35db +0x0df3:  call   084699c6 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0xa9>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0xa9
085a35e0 +0x0df8:  mov    -0x2c(%ebp),%eax
085a35e3 +0x0dfb:  mov    %eax,-0x468(%ebp)
085a35e9 +0x0e01:  lea    -0x468(%ebp),%eax
085a35ef +0x0e07:  mov    %eax,0x10(%esp)
085a35f3 +0x0e0b:  mov    -0x44c(%ebp),%eax
085a35f9 +0x0e11:  mov    -0x448(%ebp),%edx
085a35ff +0x0e17:  mov    %eax,0x8(%esp)
085a3603 +0x0e1b:  mov    %edx,0xc(%esp)
085a3607 +0x0e1f:  movl   $0x0,0x4(%esp)
085a360f +0x0e27:  mov    0x8(%ebp),%eax
085a3612 +0x0e2a:  mov    %eax,(%esp)
085a3615 +0x0e2d:  call   0859b8fa <_ZN6CParty17set_random_rewardEN10QuickParty14RandomBuffTypeENS0_16RewardData_ParamERNS0_17RewardData_ResultE>  ; CParty::set_random_reward(QuickParty::RandomBuffType, QuickParty::RewardData_Param, QuickParty::RewardData_Result&)
085a361a +0x0e32:  mov    -0x468(%ebp),%eax
085a3620 +0x0e38:  mov    %eax,-0x2c(%ebp)
085a3623 +0x0e3b:  cmpl   $0x0,-0x60(%ebp)
085a3627 +0x0e3f:  je     085a3657 <+0xe6f>
085a3629 +0x0e41:  mov    -0x34(%ebp),%edx
085a362c +0x0e44:  mov    0x8(%ebp),%ecx
085a362f +0x0e47:  mov    %edx,%eax
085a3631 +0x0e49:  add    %eax,%eax
085a3633 +0x0e4b:  add    %edx,%eax
085a3635 +0x0e4d:  shl    $0x3,%eax
085a3638 +0x0e50:  lea    (%ecx,%eax,1),%eax
085a363b +0x0e53:  add    $0x78,%eax
085a363e +0x0e56:  mov    (%eax),%eax
085a3640 +0x0e58:  movl   $0x2,0x8(%esp)
085a3648 +0x0e60:  mov    -0x60(%ebp),%edx
085a364b +0x0e63:  mov    %edx,0x4(%esp)
085a364f +0x0e67:  mov    %eax,(%esp)
085a3652 +0x0e6a:  call   0864fd2c <_ZN5CUser12gainWinPointEi12eWPAddReason>  ; CUser::gainWinPoint(int, eWPAddReason)
085a3657 +0x0e6f:  lea    -0x470(%ebp),%eax
085a365d +0x0e75:  mov    %eax,(%esp)
085a3660 +0x0e78:  call   08151a56 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x138b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x138b
085a3665 +0x0e7d:  mov    -0x2c(%ebp),%eax
085a3668 +0x0e80:  mov    %eax,-0x470(%ebp)
085a366e +0x0e86:  mov    -0x70(%ebp),%eax
085a3671 +0x0e89:  mov    %eax,-0x46c(%ebp)
085a3677 +0x0e8f:  mov    -0x34(%ebp),%edx
085a367a +0x0e92:  mov    0x8(%ebp),%ecx
085a367d +0x0e95:  mov    %edx,%eax
085a367f +0x0e97:  add    %eax,%eax
085a3681 +0x0e99:  add    %edx,%eax
085a3683 +0x0e9b:  shl    $0x3,%eax
085a3686 +0x0e9e:  lea    (%ecx,%eax,1),%eax
085a3689 +0x0ea1:  add    $0x78,%eax
085a368c +0x0ea4:  mov    (%eax),%eax
085a368e +0x0ea6:  lea    -0x470(%ebp),%edx
085a3694 +0x0eac:  mov    %edx,0x8(%esp)
085a3698 +0x0eb0:  mov    %eax,0x4(%esp)
085a369c +0x0eb4:  mov    0x8(%ebp),%eax
085a369f +0x0eb7:  mov    %eax,(%esp)
085a36a2 +0x0eba:  call   085a2488 <_ZN6CParty16sumGainedEachExpEP5CUserRK19STGainedEachExpData>  ; CParty::sumGainedEachExp(CUser*, STGainedEachExpData const&)
085a36a7 +0x0ebf:  mov    %eax,-0x2c(%ebp)
085a36aa +0x0ec2:  mov    0x8(%ebp),%eax
085a36ad +0x0ec5:  mov    0xcac(%eax),%eax
085a36b3 +0x0ecb:  movzbl 0x89e(%eax),%eax
085a36ba +0x0ed2:  xor    $0x1,%eax
085a36bd +0x0ed5:  test   %al,%al
085a36bf +0x0ed7:  je     085a3723 <+0xf3b>
085a36c1 +0x0ed9:  mov    0x8(%ebp),%eax
085a36c4 +0x0edc:  movzwl 0xc4c(%eax),%eax
085a36cb +0x0ee3:  test   %ax,%ax
085a36ce +0x0ee6:  jne    085a3723 <+0xf3b>
085a36d0 +0x0ee8:  mov    -0x34(%ebp),%edx
085a36d3 +0x0eeb:  mov    0x8(%ebp),%ecx
085a36d6 +0x0eee:  mov    %edx,%eax
085a36d8 +0x0ef0:  add    %eax,%eax
085a36da +0x0ef2:  add    %edx,%eax
085a36dc +0x0ef4:  shl    $0x3,%eax
085a36df +0x0ef7:  lea    (%ecx,%eax,1),%eax
085a36e2 +0x0efa:  add    $0x78,%eax
085a36e5 +0x0efd:  mov    (%eax),%eax
085a36e7 +0x0eff:  mov    %eax,0x4(%esp)
085a36eb +0x0f03:  mov    0x8(%ebp),%eax
085a36ee +0x0f06:  mov    %eax,(%esp)
085a36f1 +0x0f09:  call   085a21ca <_ZN6CParty16isHelpAbusePartyEP5CUser>  ; CParty::isHelpAbuseParty(CUser*)
085a36f6 +0x0f0e:  movzbl %al,%ecx
085a36f9 +0x0f11:  mov    -0x34(%ebp),%edx
085a36fc +0x0f14:  mov    0x8(%ebp),%ebx
085a36ff +0x0f17:  mov    %edx,%eax
085a3701 +0x0f19:  add    %eax,%eax
085a3703 +0x0f1b:  add    %edx,%eax
085a3705 +0x0f1d:  shl    $0x3,%eax
085a3708 +0x0f20:  lea    (%ebx,%eax,1),%eax
085a370b +0x0f23:  add    $0x78,%eax
085a370e +0x0f26:  mov    (%eax),%eax
085a3710 +0x0f28:  mov    %ecx,0x8(%esp)
085a3714 +0x0f2c:  mov    -0x2c(%ebp),%edx
085a3717 +0x0f2f:  mov    %edx,0x4(%esp)
085a371b +0x0f33:  mov    %eax,(%esp)
085a371e +0x0f36:  call   0864e402 <_ZN15CUserCharacInfo18calcHelpAbuseRatioEjb>  ; CUserCharacInfo::calcHelpAbuseRatio(unsigned int, bool)
085a3723 +0x0f3b:  movl   $0x0,-0x474(%ebp)
085a372d +0x0f45:  mov    0x8(%ebp),%eax
085a3730 +0x0f48:  mov    0xcac(%eax),%eax
085a3736 +0x0f4e:  movzbl 0x89f(%eax),%eax
085a373d +0x0f55:  test   %al,%al
085a373f +0x0f57:  jne    085a3878 <+0x1090>
085a3745 +0x0f5d:  mov    -0x34(%ebp),%edx
085a3748 +0x0f60:  mov    0x8(%ebp),%ecx
085a374b +0x0f63:  mov    %edx,%eax
085a374d +0x0f65:  add    %eax,%eax
085a374f +0x0f67:  add    %edx,%eax
085a3751 +0x0f69:  shl    $0x3,%eax
085a3754 +0x0f6c:  lea    (%ecx,%eax,1),%eax
085a3757 +0x0f6f:  add    $0x78,%eax
085a375a +0x0f72:  mov    (%eax),%eax
085a375c +0x0f74:  mov    %eax,(%esp)
085a375f +0x0f77:  call   08690eca <_ZNK5CUser12getMoveSpaceEv>  ; CUser::getMoveSpace() const
085a3764 +0x0f7c:  cmp    $0x1,%eax
085a3767 +0x0f7f:  sete   %al
085a376a +0x0f82:  test   %al,%al
085a376c +0x0f84:  je     085a37d9 <+0xff1>
085a376e +0x0f86:  mov    -0x34(%ebp),%edx
085a3771 +0x0f89:  mov    0x8(%ebp),%ecx
085a3774 +0x0f8c:  mov    %edx,%eax
085a3776 +0x0f8e:  add    %eax,%eax
085a3778 +0x0f90:  add    %edx,%eax
085a377a +0x0f92:  shl    $0x3,%eax
085a377d +0x0f95:  lea    (%ecx,%eax,1),%eax
085a3780 +0x0f98:  add    $0x78,%eax
085a3783 +0x0f9b:  mov    (%eax),%eax
085a3785 +0x0f9d:  mov    %eax,(%esp)
085a3788 +0x0fa0:  call   086552e6 <_ZN5CUser13getBlueMarbleEv>  ; CUser::getBlueMarble()
085a378d +0x0fa5:  mov    %eax,-0x20(%ebp)
085a3790 +0x0fa8:  cmpl   $0x0,-0x20(%ebp)
085a3794 +0x0fac:  je     085a37d9 <+0xff1>
085a3796 +0x0fae:  mov    -0x34(%ebp),%edx
085a3799 +0x0fb1:  mov    0x8(%ebp),%ecx
085a379c +0x0fb4:  mov    %edx,%eax
085a379e +0x0fb6:  add    %eax,%eax
085a37a0 +0x0fb8:  add    %edx,%eax
085a37a2 +0x0fba:  shl    $0x3,%eax
085a37a5 +0x0fbd:  lea    (%ecx,%eax,1),%eax
085a37a8 +0x0fc0:  add    $0x78,%eax
085a37ab +0x0fc3:  mov    (%eax),%eax
085a37ad +0x0fc5:  movl   $0x0,0x8(%esp)
085a37b5 +0x0fcd:  mov    %eax,0x4(%esp)
085a37b9 +0x0fd1:  mov    -0x20(%ebp),%eax
085a37bc +0x0fd4:  mov    %eax,(%esp)
085a37bf +0x0fd7:  call   080d990e <_ZN10BlueMarble7getBuffEP5CUserN18BlueMarbleBuffType1TE>  ; BlueMarble::getBuff(CUser*, BlueMarbleBuffType::T)
085a37c4 +0x0fdc:  mov    %eax,-0x1c(%ebp)
085a37c7 +0x0fdf:  cmpl   $0x1,-0x1c(%ebp)
085a37cb +0x0fe3:  jle    085a37d9 <+0xff1>
085a37cd +0x0fe5:  mov    -0x1c(%ebp),%eax
085a37d0 +0x0fe8:  mov    -0x2c(%ebp),%edx
085a37d3 +0x0feb:  imul   %edx,%eax
085a37d6 +0x0fee:  mov    %eax,-0x2c(%ebp)
085a37d9 +0x0ff1:  movl   $0x0,-0x478(%ebp)
085a37e3 +0x0ffb:  mov    -0x7c4(%ebp),%ebx
085a37e9 +0x1001:  mov    -0x2c(%ebp),%ecx
085a37ec +0x1004:  mov    -0x34(%ebp),%edx
085a37ef +0x1007:  mov    0x8(%ebp),%esi
085a37f2 +0x100a:  mov    %edx,%eax
085a37f4 +0x100c:  add    %eax,%eax
085a37f6 +0x100e:  add    %edx,%eax
085a37f8 +0x1010:  shl    $0x3,%eax
085a37fb +0x1013:  lea    (%esi,%eax,1),%eax
085a37fe +0x1016:  add    $0x78,%eax
085a3801 +0x1019:  mov    (%eax),%eax
085a3803 +0x101b:  movl   $0x0,0x18(%esp)
085a380b +0x1023:  mov    %ebx,0x14(%esp)
085a380f +0x1027:  movl   $0x1,0x10(%esp)
085a3817 +0x102f:  lea    -0x478(%ebp),%edx
085a381d +0x1035:  mov    %edx,0xc(%esp)
085a3821 +0x1039:  lea    -0x474(%ebp),%edx
085a3827 +0x103f:  mov    %edx,0x8(%esp)
085a382b +0x1043:  mov    %ecx,0x4(%esp)
085a382f +0x1047:  mov    %eax,(%esp)
085a3832 +0x104a:  call   0866a3fe <_ZN5CUser11gain_exp_spEiRiS0_13eExpAddReasonib>  ; CUser::gain_exp_sp(int, int&, int&, eExpAddReason, int, bool)
085a3837 +0x104f:  test   %al,%al
085a3839 +0x1051:  je     085a3878 <+0x1090>
085a383b +0x1053:  mov    -0x34(%ebp),%edx
085a383e +0x1056:  mov    0x8(%ebp),%ecx
085a3841 +0x1059:  mov    %edx,%eax
085a3843 +0x105b:  add    %eax,%eax
085a3845 +0x105d:  add    %edx,%eax
085a3847 +0x105f:  shl    $0x3,%eax
085a384a +0x1062:  lea    (%ecx,%eax,1),%eax
085a384d +0x1065:  add    $0x78,%eax
085a3850 +0x1068:  mov    (%eax),%eax
085a3852 +0x106a:  movl   $0x1,0xc(%esp)
085a385a +0x1072:  movl   $0x2,0x8(%esp)
085a3862 +0x107a:  movl   $0x2,0x4(%esp)
085a386a +0x1082:  mov    %eax,(%esp)
085a386d +0x1085:  call   0867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>  ; CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)
085a3872 +0x108a:  jmp    085a3878 <+0x1090>
085a3874 +0x108c:  nop
085a3875 +0x108d:  jmp    085a3878 <+0x1090>
085a3877 +0x108f:  nop
085a3878 +0x1090:  addl   $0x1,-0x34(%ebp)
085a387c +0x1094:  cmpl   $0x3,-0x34(%ebp)
085a3880 +0x1098:  jg     085a3897 <+0x10af>
085a3882 +0x109a:  mov    0x18(%ebp),%eax
085a3885 +0x109d:  movzbl 0xa22(%eax),%eax
085a388c +0x10a4:  test   %al,%al
085a388e +0x10a6:  jne    085a3897 <+0x10af>
085a3890 +0x10a8:  mov    $0x1,%eax
085a3895 +0x10ad:  jmp    085a389c <+0x10b4>
085a3897 +0x10af:  mov    $0x0,%eax
085a389c +0x10b4:  test   %al,%al
085a389e +0x10b6:  jne    085a32fb <+0xb13>
085a38a4 +0x10bc:  lea    -0x7d0(%ebp),%eax
085a38aa +0x10c2:  mov    %eax,(%esp)
085a38ad +0x10c5:  call   08151182 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xab7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xab7
085a38b2 +0x10ca:  xor    $0x1,%eax
085a38b5 +0x10cd:  test   %al,%al
085a38b7 +0x10cf:  je     085a38cc <+0x10e4>
085a38b9 +0x10d1:  cmpb   $0x1,-0x71(%ebp)
085a38bd +0x10d5:  je     085a38cc <+0x10e4>
085a38bf +0x10d7:  cmpb   $0x3,-0x71(%ebp)
085a38c3 +0x10db:  je     085a38cc <+0x10e4>
085a38c5 +0x10dd:  mov    $0x1,%eax
085a38ca +0x10e2:  jmp    085a38d1 <+0x10e9>
085a38cc +0x10e4:  mov    $0x0,%eax
085a38d1 +0x10e9:  test   %al,%al
085a38d3 +0x10eb:  je     085a3966 <+0x117e>
085a38d9 +0x10f1:  mov    0x8(%ebp),%eax
085a38dc +0x10f4:  mov    0x1ab8(%eax),%eax
085a38e2 +0x10fa:  lea    0x1(%eax),%edx
085a38e5 +0x10fd:  mov    0x8(%ebp),%eax
085a38e8 +0x1100:  mov    %edx,0x1ab8(%eax)
085a38ee +0x1106:  mov    0x8(%ebp),%eax
085a38f1 +0x1109:  mov    0x1874(%eax),%ecx
085a38f7 +0x110f:  mov    0x8(%ebp),%eax
085a38fa +0x1112:  mov    0x1874(%eax),%edx
085a3900 +0x1118:  mov    0x8(%ebp),%eax
085a3903 +0x111b:  add    $0x678,%edx
085a3909 +0x1121:  mov    0xc(%eax,%edx,4),%eax
085a390d +0x1125:  mov    %eax,%edx
085a390f +0x1127:  mov    0x18(%ebp),%eax
085a3912 +0x112a:  mov    0xa1e(%eax),%eax
085a3918 +0x1130:  lea    (%edx,%eax,1),%eax
085a391b +0x1133:  mov    %eax,%edx
085a391d +0x1135:  mov    0x8(%ebp),%eax
085a3920 +0x1138:  add    $0x678,%ecx
085a3926 +0x113e:  mov    %edx,0xc(%eax,%ecx,4)
085a392a +0x1142:  mov    0x8(%ebp),%eax
085a392d +0x1145:  mov    0x1874(%eax),%ecx
085a3933 +0x114b:  mov    0x8(%ebp),%eax
085a3936 +0x114e:  mov    0x1874(%eax),%edx
085a393c +0x1154:  mov    0x8(%ebp),%eax
085a393f +0x1157:  add    $0x64c,%edx
085a3945 +0x115d:  mov    0x4(%eax,%edx,4),%eax
085a3949 +0x1161:  mov    %eax,%edx
085a394b +0x1163:  mov    0x18(%ebp),%eax
085a394e +0x1166:  mov    0xa1a(%eax),%eax
085a3954 +0x116c:  lea    (%edx,%eax,1),%eax
085a3957 +0x116f:  mov    %eax,%edx
085a3959 +0x1171:  mov    0x8(%ebp),%eax
085a395c +0x1174:  add    $0x64c,%ecx
085a3962 +0x117a:  mov    %edx,0x4(%eax,%ecx,4)
085a3966 +0x117e:  mov    0x18(%ebp),%eax
085a3969 +0x1181:  mov    0xa1e(%eax),%eax
085a396f +0x1187:  cmp    $0x9,%eax
085a3972 +0x118a:  jbe    085a39a4 <+0x11bc>
085a3974 +0x118c:  mov    0x18(%ebp),%eax
085a3977 +0x118f:  mov    0xa1e(%eax),%ecx
085a397d +0x1195:  mov    $0xcccccccd,%edx
085a3982 +0x119a:  mov    %ecx,%eax
085a3984 +0x119c:  mul    %edx
085a3986 +0x119e:  shr    $0x3,%edx
085a3989 +0x11a1:  mov    %edx,%eax
085a398b +0x11a3:  shl    $0x2,%eax
085a398e +0x11a6:  add    %edx,%eax
085a3990 +0x11a8:  add    %eax,%eax
085a3992 +0x11aa:  mov    %ecx,%edx
085a3994 +0x11ac:  sub    %eax,%edx
085a3996 +0x11ae:  test   %edx,%edx
085a3998 +0x11b0:  jne    085a39a4 <+0x11bc>
085a399a +0x11b2:  mov    0x8(%ebp),%eax
085a399d +0x11b5:  movb   $0x1,0x1aa0(%eax)
085a39a4 +0x11bc:  mov    0x8(%ebp),%eax
085a39a7 +0x11bf:  lea    0x1abc(%eax),%edx
085a39ad +0x11c5:  lea    -0x7d0(%ebp),%eax
085a39b3 +0x11cb:  mov    %eax,0x8(%esp)
085a39b7 +0x11cf:  mov    0x18(%ebp),%eax
085a39ba +0x11d2:  mov    %eax,0x4(%esp)
085a39be +0x11d6:  mov    %edx,(%esp)
085a39c1 +0x11d9:  call   0827a940 <_ZN24Secu_HackLogCheckByParty6DieMobEPK15MSG_MONSTER_DIEP11map_monster>  ; Secu_HackLogCheckByParty::DieMob(MSG_MONSTER_DIE const*, map_monster*)
085a39c6 +0x11de:  lea    -0x3f0(%ebp),%eax
085a39cc +0x11e4:  mov    %eax,0x4(%esp)
085a39d0 +0x11e8:  mov    0x8(%ebp),%eax
085a39d3 +0x11eb:  mov    %eax,(%esp)
085a39d6 +0x11ee:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
085a39db +0x11f3:  cmpb   $0x1,-0x71(%ebp)
085a39df +0x11f7:  jne    085a3a90 <+0x12a8>
085a39e5 +0x11fd:  lea    -0x484(%ebp),%eax
085a39eb +0x1203:  mov    %eax,(%esp)
085a39ee +0x1206:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085a39f3 +0x120b:  lea    -0x484(%ebp),%eax
085a39f9 +0x1211:  mov    %eax,(%esp)
085a39fc +0x1214:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
085a3a01 +0x1219:  movl   $0x32,0x8(%esp)
085a3a09 +0x1221:  movl   $0x0,0x4(%esp)
085a3a11 +0x1229:  lea    -0x484(%ebp),%eax
085a3a17 +0x122f:  mov    %eax,(%esp)
085a3a1a +0x1232:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085a3a1f +0x1237:  mov    0x8(%ebp),%eax
085a3a22 +0x123a:  mov    0xccc(%eax),%eax
085a3a28 +0x1240:  mov    %eax,0x4(%esp)
085a3a2c +0x1244:  lea    -0x484(%ebp),%eax
085a3a32 +0x124a:  mov    %eax,(%esp)
085a3a35 +0x124d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085a3a3a +0x1252:  movl   $0x1,0x4(%esp)
085a3a42 +0x125a:  lea    -0x484(%ebp),%eax
085a3a48 +0x1260:  mov    %eax,(%esp)
085a3a4b +0x1263:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085a3a50 +0x1268:  lea    -0x484(%ebp),%eax
085a3a56 +0x126e:  mov    %eax,0x4(%esp)
085a3a5a +0x1272:  mov    0x8(%ebp),%eax
085a3a5d +0x1275:  mov    %eax,(%esp)
085a3a60 +0x1278:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
085a3a65 +0x127d:  jmp    085a3a82 <+0x129a>
085a3a67 +0x127f:  mov    %edx,%ebx
085a3a69 +0x1281:  mov    %eax,%esi
085a3a6b +0x1283:  lea    -0x484(%ebp),%eax
085a3a71 +0x1289:  mov    %eax,(%esp)
085a3a74 +0x128c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085a3a79 +0x1291:  mov    %esi,%eax
085a3a7b +0x1293:  mov    %ebx,%edx
085a3a7d +0x1295:  jmp    085a3b08 <+0x1320>
085a3a82 +0x129a:  lea    -0x484(%ebp),%eax
085a3a88 +0x12a0:  mov    %eax,(%esp)
085a3a8b +0x12a3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085a3a90 +0x12a8:  mov    0x8(%ebp),%eax
085a3a93 +0x12ab:  mov    %eax,(%esp)
085a3a96 +0x12ae:  call   085aa39a <_ZN6CParty21prepare_dungeon_clearEv>  ; CParty::prepare_dungeon_clear()
085a3a9b +0x12b3:  movzbl -0x7c8(%ebp),%eax
085a3aa2 +0x12ba:  movsbl %al,%eax
085a3aa5 +0x12bd:  cmp    $0x3,%eax
085a3aa8 +0x12c0:  je     085a3ac0 <+0x12d8>
085a3aaa +0x12c2:  cmp    $0x3,%eax
085a3aad +0x12c5:  jl     085a3ac9 <+0x12e1>
085a3aaf +0x12c7:  sub    $0x5,%eax
085a3ab2 +0x12ca:  cmp    $0x3,%eax
085a3ab5 +0x12cd:  ja     085a3ac9 <+0x12e1>
085a3ab7 +0x12cf:  movl   $0x3,-0x5c(%ebp)
085a3abe +0x12d6:  jmp    085a3ad0 <+0x12e8>
085a3ac0 +0x12d8:  movl   $0x4,-0x5c(%ebp)
085a3ac7 +0x12df:  jmp    085a3ad0 <+0x12e8>
085a3ac9 +0x12e1:  movl   $0x2,-0x5c(%ebp)
085a3ad0 +0x12e8:  mov    -0x7c4(%ebp),%eax
085a3ad6 +0x12ee:  mov    0x8(%ebp),%edx
085a3ad9 +0x12f1:  add    $0xb24,%edx
085a3adf +0x12f7:  mov    %eax,0x8(%esp)
085a3ae3 +0x12fb:  mov    -0x5c(%ebp),%eax
085a3ae6 +0x12fe:  mov    %eax,0x4(%esp)
085a3aea +0x1302:  mov    %edx,(%esp)
085a3aed +0x1305:  call   085bf29a <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x7f8>  ; global constructors keyed to CParty::cMember::cMember()+0x7f8
085a3af2 +0x130a:  test   %al,%al
085a3af4 +0x130c:  je     085a3b01 <+0x1319>
085a3af6 +0x130e:  mov    0x8(%ebp),%eax
085a3af9 +0x1311:  mov    %eax,(%esp)
085a3afc +0x1314:  call   085a9330 <_ZN6CParty12ClearDungeonEv>  ; CParty::ClearDungeon()
085a3b01 +0x1319:  mov    $0x1,%ebx
085a3b06 +0x131e:  jmp    085a3b20 <+0x1338>
085a3b08 +0x1320:  mov    %edx,%ebx
085a3b0a +0x1322:  mov    %eax,%esi
085a3b0c +0x1324:  lea    -0x3f0(%ebp),%eax
085a3b12 +0x132a:  mov    %eax,(%esp)
085a3b15 +0x132d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085a3b1a +0x1332:  mov    %esi,%eax
085a3b1c +0x1334:  mov    %ebx,%edx
085a3b1e +0x1336:  jmp    085a3b30 <+0x1348>
085a3b20 +0x1338:  lea    -0x3f0(%ebp),%eax
085a3b26 +0x133e:  mov    %eax,(%esp)
085a3b29 +0x1341:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085a3b2e +0x1346:  jmp    085a3b4e <+0x1366>
085a3b30 +0x1348:  mov    %edx,%ebx
085a3b32 +0x134a:  mov    %eax,%esi
085a3b34 +0x134c:  lea    -0x7d0(%ebp),%eax
085a3b3a +0x1352:  mov    %eax,(%esp)
085a3b3d +0x1355:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
085a3b42 +0x135a:  mov    %esi,%eax
085a3b44 +0x135c:  mov    %ebx,%edx
085a3b46 +0x135e:  mov    %eax,(%esp)
085a3b49 +0x1361:  call   08ae3750 <_Unwind_Resume>
085a3b4e +0x1366:  lea    -0x7d0(%ebp),%eax
085a3b54 +0x136c:  mov    %eax,(%esp)
085a3b57 +0x136f:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
085a3b5c +0x1374:  mov    %ebx,%eax
085a3b5e +0x1376:  add    $0x84c,%esp
085a3b64 +0x137c:  pop    %ebx
085a3b65 +0x137d:  pop    %esi
085a3b66 +0x137e:  pop    %edi
085a3b67 +0x137f:  pop    %ebp
085a3b68 +0x1380:  ret
085a3b69 +0x1381:  nop
```

## 反编译 C

```c
// CParty::kill_monster @ 0x85a27e8

/* CParty::kill_monster(CUser*, int, unsigned short, MSG_MONSTER_DIE const&, int*) */

undefined4 __thiscall
CParty::kill_monster
          (CParty *this,CUser *param_1,int param_2,ushort param_3,MSG_MONSTER_DIE *param_4,
          int *param_5)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  ServiceRestrictManager *pSVar5;
  int *piVar6;
  CHackAnalyzer *pCVar7;
  CPartyExpBonusEvent *this_00;
  uint uVar8;
  CDataManager *pCVar9;
  undefined4 uVar10;
  longdouble lVar11;
  ulonglong local_7ec;
  map_monster local_7d4 [8];
  char local_7cc;
  uint local_7c8;
  byte local_7c4;
  int local_7b4;
  int local_7b0;
  int local_7a8;
  ActiveStaticInfo aAStack_79c [788];
  PacketGuard local_488 [12];
  undefined4 local_47c;
  undefined4 local_478;
  uint local_474;
  float local_470;
  uint local_46c [7];
  undefined4 local_450;
  undefined4 local_44c;
  CUser *local_448;
  undefined4 local_444;
  undefined4 local_440;
  undefined4 local_43c;
  RewardData_Result local_438 [20];
  undefined4 local_424;
  undefined4 local_41c;
  undefined4 local_418;
  undefined2 local_414;
  ushort local_412;
  undefined1 local_410;
  int local_40c;
  int local_408;
  undefined1 local_404;
  undefined1 local_403;
  undefined4 local_400;
  int local_3fc;
  uint local_3f8;
  PacketGuard local_3f4 [12];
  cMyTrace local_3e8 [16];
  int local_3d8;
  map_monster local_3d4 [844];
  uint local_88;
  int local_84;
  int local_80;
  int local_7c;
  char local_75;
  float local_74;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  undefined4 local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  undefined4 local_44;
  int local_40;
  CAICharacter *local_3c;
  int local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  BlueMarble *local_24;
  int local_20;
  
  map_monster::map_monster(local_7d4);
                    /* try { // try from 085a2815 to 085a2819 has its CatchHandler @ 085a3b30 */
  PacketGuard::PacketGuard(local_3f4);
                    /* try { // try from 085a2820 to 085a2ce8 has its CatchHandler @ 085a3b08 */
  local_88 = get_member_count(this);
  if ((*(int *)(this + 0xcac) == 0) ||
     (cVar1 = CDungeon::IsEnterEachMap(*(CDungeon **)(this + 0xcac)), cVar1 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    iVar3 = get_party_seatno(this,param_1);
    CBattle_Field::SetCurSeatNo((CBattle_Field *)(this + 0xb24),iVar3);
  }
  local_84 = 0;
  local_80 = 0;
  local_7c = 0;
  local_3fc = 100;
  for (local_5c = 0; local_5c < 4; local_5c = local_5c + 1) {
    local_58 = 0;
    cVar1 = _checkValidUser(this,local_5c);
    if (cVar1 == '\x01') {
      pcVar4 = (char *)CUser::get_acc_name(*(CUser **)(this + local_5c * 0x18 + 0x78));
      iVar3 = CUserCharacInfo::get_charac_level
                        (*(CUserCharacInfo **)(this + local_5c * 0x18 + 0x78));
      pCVar9 = (CDataManager *)G_CDataManager();
      local_54 = CDataManager::GetMoneyLimitPerLevel(pCVar9,iVar3,pcVar4);
      if (local_54 < 1) {
        cMyTrace::cMyTrace(local_3e8,
                           "bool CParty::kill_monster(CUser*, int, short unsigned int, const MSG_MONSTER_DIE&, int*)"
                           ,0x1414,5);
        cMyTrace::operator()
                  (local_3e8,"WarField::HandleMonsterKill limitMoney(%d) is under 0",local_54);
      }
      else {
        iVar3 = CUserCharacInfo::getCurCharacMoney
                          (*(CUserCharacInfo **)(this + local_5c * 0x18 + 0x78));
        local_58 = (iVar3 * 100) / local_54;
        local_80 = local_80 + local_58;
        local_7c = local_7c + 1;
      }
      pSVar5 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
      cVar1 = ServiceRestrictManager::isRestricted(pSVar5,3,1);
      if (cVar1 != '\0') {
        local_3d8 = CUser::getStdDropRate(*(CUser **)(this + local_5c * 0x18 + 0x78));
        piVar6 = std::min<int>(&local_3fc,&local_3d8);
        local_3fc = *piVar6;
      }
    }
  }
  if (local_7c != 0) {
    local_84 = local_80 / local_7c;
  }
  STKillMonsterData::STKillMonsterData((STKillMonsterData *)&local_414);
  local_414 = (undefined2)param_2;
  local_410 = (undefined1)local_88;
  local_40c = local_84;
  local_408 = local_3fc;
  local_404 = param_4[0xa22] != (MSG_MONSTER_DIE)0x0;
  local_403 = param_4[0xa23] != (MSG_MONSTER_DIE)0x0;
  local_412 = param_3;
  QuickParty::RewardData_Param::RewardData_Param((RewardData_Param *)&local_41c,this);
  QuickParty::RewardData_Result::RewardData_Result(local_438);
  set_random_reward(this,3,local_41c,local_418,local_438);
  local_400 = local_424;
  cVar1 = CBattle_Field::kill_monster
                    ((CBattle_Field *)(this + 0xb24),local_3f4,local_7d4,&local_3f8,
                     (STKillMonsterData *)&local_414);
  if (cVar1 == '\x01') {
    if (param_5 != (int *)0x0) {
      *param_5 = local_7c8;
    }
    if ((local_7b4 == 0) &&
       (cVar1 = CBattle_Field::IsClearDungeon((CBattle_Field *)(this + 0xb24)), cVar1 != '\x01')) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      pCVar7 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
      WongWork::CHackAnalyzer::addServerHackCnt(pCVar7,param_1,0x25e,1,0,0);
    }
    iVar3 = ActiveStaticInfo::getHpMax(aAStack_79c);
    if ((local_7b0 < iVar3) &&
       (cVar1 = CBattle_Field::IsClearDungeon((CBattle_Field *)(this + 0xb24)), cVar1 != '\x01')) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      pCVar7 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
      WongWork::CHackAnalyzer::addServerHackCnt(pCVar7,param_1,0x25f,1,0,0);
    }
    map_monster::map_monster(local_3d4,local_7d4);
                    /* try { // try from 085a2d11 to 085a2d15 has its CatchHandler @ 085a2d18 */
    OnKilledMonster(this,param_1,local_7c8,local_3d4,param_4);
                    /* try { // try from 085a2d3c to 085a39f2 has its CatchHandler @ 085a3b08 */
    map_monster::~map_monster(local_3d4);
    local_75 = CBattle_Field::convertAPCRoleType2MonsterRoleType
                         ((CBattle_Field *)(this + 0xb24),local_7cc);
    if (local_75 == '\x01') {
      *(int *)(this + 0x36c) = *(int *)(this + 0x36c) + 1;
    }
    else if (local_75 == '\x03') {
      *(int *)(this + 0x370) = *(int *)(this + 0x370) + 1;
    }
    else {
      *(int *)(this + 0x368) = *(int *)(this + 0x368) + 1;
      *(int *)(this + 0x378) = *(int *)(this + 0x378) + 1;
      iVar3 = G_CDataManager();
      local_50 = *(int *)(iVar3 + 0x49d0);
      iVar3 = CBattle_Field::GetCurrentMap((CBattle_Field *)(this + 0xb24));
      if ((iVar3 != 0) &&
         (iVar3 = CBattle_Field::GetCurrentMap((CBattle_Field *)(this + 0xb24)),
         *(int *)(iVar3 + 0xf0) != 0)) {
        iVar3 = CBattle_Field::GetCurrentMap((CBattle_Field *)(this + 0xb24));
        local_50 = *(int *)(iVar3 + 0xf0);
      }
      if (local_50 == 0) {
        *(int *)(this + 0x374) = *(int *)(this + 0x374) + 1;
      }
      else if (*(int *)(this + 0x378) <= local_50) {
        *(int *)(this + 0x374) = *(int *)(this + 0x374) + 1;
      }
    }
    if (*(int *)(this + 0x74) != 0) {
      CTraceMobDieHack::setMobKiller((int)(this + 0x210));
      cVar1 = CBattle_Field::check_grid_clear((CBattle_Field *)(this + 0xb24));
      if (cVar1 != '\0') {
        local_444 = 0;
        local_440 = 0;
        local_43c = 0;
        local_448 = *(CUser **)(this + 0x74);
        CTraceMobDieHack::traceEnd
                  ((CTraceMobDieHack *)(this + 0x210),*(CUser **)(this + 0x74),&local_448);
        for (local_4c = 0; local_4c < 4; local_4c = local_4c + 1) {
          cVar1 = _checkValidUser(this,local_4c);
          if (cVar1 != '\0') {
            CUser::reqHumanCertify4ClearMap(*(CUser **)(this + local_4c * 0x18 + 0x78),true);
          }
        }
      }
    }
    if (local_75 == '\x03') {
      CDungeonClearTracer::IncrementKilledBossCount((CDungeonClearTracer *)(this + 0xc7c));
    }
    CDungeonClearTracer::IncrementKilledMonsterCount((CDungeonClearTracer *)(this + 0xc7c));
    for (local_48 = 0; local_48 < 4; local_48 = local_48 + 1) {
      cVar1 = _checkValidUser(this,local_48);
      uVar8 = local_7c8;
      if (((cVar1 == '\x01') && (this[local_48 + 0x380] == (CParty)0x1)) &&
         (*(int *)(this + 0xcd8) != 1)) {
        local_44 = 1;
        if (('\x04' < local_7cc) && (local_7cc < '\t')) {
          local_44 = 2;
        }
        uVar10 = CBattle_Field::get_dungeon_index((CBattle_Field *)(this + 0xb24));
        CUser::CheckQuestMonster(*(CUser **)(this + local_48 * 0x18 + 0x78),uVar10,uVar8,local_44);
      }
    }
    for (local_40 = 0; local_40 < 4; local_40 = local_40 + 1) {
      cVar1 = _checkValidUser(this,local_40);
      if ((cVar1 == '\x01') && (*(CUser **)(this + local_40 * 0x18 + 0x78) == param_1)) {
        HistoryLog::WriteKillMob(*(_IO_FILE **)(param_1 + 0x796f8),local_7c8);
      }
    }
    if ((int)local_88 < 1) {
      local_74 = 1.0;
    }
    else {
      iVar3 = G_CDataManager();
      local_74 = *(float *)(iVar3 + 0x10 + (local_88 + 0xef) * 4);
    }
    bVar2 = (bool)isHelpAbuseParty(this);
    this_00 = (CPartyExpBonusEvent *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x18)
    ;
    lVar11 = (longdouble)CPartyExpBonusEvent::getBonusRate(this_00,local_88,bVar2);
    local_74 = (float)((longdouble)local_74 + lVar11);
    bVar2 = (bool)map_monster::isNamedMonster(local_7d4);
    lVar11 = (longdouble)CDungeon::get_exp_weight(*(CDungeon **)(this + 0xcac));
    iVar3 = CBattle_Field::get_dungeon_diff((CBattle_Field *)(this + 0xb24));
    uVar8 = getMonsterTotalExp(this,local_3f8,local_75,iVar3,(float)lVar11,local_74,bVar2);
    local_6c = 1;
    local_70 = uVar8;
    uVar10 = CUserCharacInfo::getCurCharacExp((CUserCharacInfo *)param_1);
    cUserHistoryLog::KillMonster
              ((cUserHistoryLog *)(param_1 + 0x79700),local_7c8,*(undefined4 *)(param_4 + 0xa1e),
               *(undefined4 *)(param_4 + 0xa1a),*(undefined2 *)(param_4 + 0xa24),
               *(undefined2 *)(param_4 + 0xa26),param_4,(int)local_7cc,local_7cc == '\x05',uVar10,
               uVar8,local_6c);
    local_68 = _getMemberLevelGap(this);
    uVar8 = local_7c8;
    local_64 = 0;
    if ('\x04' < local_7cc) {
      iVar3 = G_CDataManager();
      local_3c = (CAICharacter *)CAICharacterList::get(*(CAICharacterList **)(iVar3 + 0x869c),uVar8)
      ;
      if ((local_3c != (CAICharacter *)0x0) && ((local_7a8 == 100 || (local_7a8 == 200)))) {
        local_64 = CAICharacter::getPvPWinPoint(local_3c);
      }
    }
    local_38 = 0;
    while( true ) {
      if ((local_38 < 4) && (param_4[0xa22] == (MSG_MONSTER_DIE)0x0)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (!bVar2) break;
      cVar1 = _checkValidUser(this,local_38);
      if ((cVar1 == '\x01') && (*(int *)(this + 0xcd8) != 1)) {
        if ((this[local_38 + 900] == (CParty)0x1) ||
           (*(char *)(*(int *)(this + 0xcac) + 0x89f) != '\0')) {
          local_34 = CUserCharacInfo::get_charac_level
                               (*(CUserCharacInfo **)(this + local_38 * 0x18 + 0x78));
          local_30 = 0;
          if ((*(char *)(*(int *)(this + 0xcac) + 0x89e) == '\0') && (*(short *)(this + 0xc4c) == 0)
             ) {
            iVar3 = CDungeon::get_index(*(CDungeon **)(this + 0xcac));
            if (iVar3 == 100) {
              pCVar9 = (CDataManager *)G_CDataManager();
              CDataManager::get_mob_reward(pCVar9,local_34,&local_3f8);
              lVar11 = (longdouble)CDungeon::get_exp_weight(*(CDungeon **)(this + 0xcac));
              local_28 = getMonsterTotalExp(this,local_3f8,local_75,*(int *)(this + 0xcc4),
                                            (float)lVar11,local_74,false);
              local_30 = local_28 / local_88;
            }
            else {
              uVar8 = (uint)local_7c4;
              pCVar9 = (CDataManager *)G_CDataManager();
              lVar11 = (longdouble)CDataManager::BaseExpPenalty(pCVar9,local_34,uVar8);
              iVar3 = MemberPenaltyRate();
              local_7ec = (ulonglong)local_70;
              local_7ec._0_4_ =
                   (uint)(longlong)
                         ROUND(((float)local_7ec * (float)lVar11 * (float)iVar3) /
                               (float)(int)local_88);
              local_30 = (uint)local_7ec;
            }
          }
          else {
            pCVar9 = (CDataManager *)G_CDataManager();
            CDataManager::get_mob_reward(pCVar9,local_34,&local_3f8);
            lVar11 = (longdouble)CDungeon::get_exp_weight(*(CDungeon **)(this + 0xcac));
            iVar3 = CBattle_Field::get_dungeon_diff((CBattle_Field *)(this + 0xb24));
            local_2c = getMonsterTotalExp(this,local_3f8,local_75,iVar3,(float)lVar11,local_74,false
                                         );
            local_30 = local_2c / local_88;
          }
          QuickParty::RewardData_Param::RewardData_Param((RewardData_Param *)&local_450,this);
          QuickParty::RewardData_Result::RewardData_Result((RewardData_Result *)local_46c);
          local_46c[0] = local_30;
          set_random_reward(this,0,local_450,local_44c,local_46c);
          local_30 = local_46c[0];
          if (local_64 != 0) {
            CUser::gainWinPoint(*(CUser **)(this + local_38 * 0x18 + 0x78),local_64,2);
          }
          STGainedEachExpData::STGainedEachExpData((STGainedEachExpData *)&local_474);
          local_474 = local_30;
          local_470 = local_74;
          local_30 = sumGainedEachExp(this,*(CUser **)(this + local_38 * 0x18 + 0x78),
                                      (STGainedEachExpData *)&local_474);
          if ((*(char *)(*(int *)(this + 0xcac) + 0x89e) != '\x01') &&
             (*(short *)(this + 0xc4c) == 0)) {
            isHelpAbuseParty((CUser *)this);
            CUserCharacInfo::calcHelpAbuseRatio
                      (*(uint *)(this + local_38 * 0x18 + 0x78),SUB41(local_30,0));
          }
          local_478 = 0;
          if (*(char *)(*(int *)(this + 0xcac) + 0x89f) == '\0') {
            iVar3 = CUser::getMoveSpace(*(CUser **)(this + local_38 * 0x18 + 0x78));
            if (((iVar3 == 1) &&
                (local_24 = (BlueMarble *)
                            CUser::getBlueMarble(*(CUser **)(this + local_38 * 0x18 + 0x78)),
                local_24 != (BlueMarble *)0x0)) &&
               (local_20 = BlueMarble::getBuff(local_24,*(undefined4 *)
                                                         (this + local_38 * 0x18 + 0x78),0),
               1 < local_20)) {
              local_30 = local_20 * local_30;
            }
            local_47c = 0;
            cVar1 = CUser::gain_exp_sp(*(CUser **)(this + local_38 * 0x18 + 0x78),local_30,
                                       &local_478,&local_47c,1,local_7c8,0);
            if (cVar1 != '\0') {
              CUser::SendNotiPacket(*(CUser **)(this + local_38 * 0x18 + 0x78),2,2,1);
            }
          }
        }
        else {
          CUser::SendZeroExpPacket(*(CUser **)(this + local_38 * 0x18 + 0x78));
        }
      }
      local_38 = local_38 + 1;
    }
    cVar1 = map_monster::isNamedMonster(local_7d4);
    if (((cVar1 == '\x01') || (local_75 == '\x01')) || (local_75 == '\x03')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *(int *)(this + 0x1ab8) = *(int *)(this + 0x1ab8) + 1;
      *(int *)(this + (*(int *)(this + 0x1874) + 0x678) * 4 + 0xc) =
           *(int *)(this + (*(int *)(this + 0x1874) + 0x678) * 4 + 0xc) + *(int *)(param_4 + 0xa1e);
      *(int *)(this + (*(int *)(this + 0x1874) + 0x64c) * 4 + 4) =
           *(int *)(this + (*(int *)(this + 0x1874) + 0x64c) * 4 + 4) + *(int *)(param_4 + 0xa1a);
    }
    if ((9 < *(uint *)(param_4 + 0xa1e)) && (*(uint *)(param_4 + 0xa1e) % 10 == 0)) {
      this[0x1aa0] = (CParty)0x1;
    }
    Secu_HackLogCheckByParty::DieMob((Secu_HackLogCheckByParty *)(this + 0x1abc),param_4,local_7d4);
    send_to_party(this,local_3f4);
    if (local_75 == '\x01') {
      PacketGuard::PacketGuard(local_488);
                    /* try { // try from 085a39fc to 085a3a64 has its CatchHandler @ 085a3a67 */
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_488);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_488,0,0x32);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_488,*(int *)(this + 0xccc));
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_488,true);
      send_to_party(this,local_488);
                    /* try { // try from 085a3a8b to 085a3b00 has its CatchHandler @ 085a3b08 */
      PacketGuard::~PacketGuard(local_488);
    }
    prepare_dungeon_clear(this);
    iVar3 = (int)local_7cc;
    if (iVar3 == 3) {
      local_60 = 4;
    }
    else if ((iVar3 < 3) || (3 < iVar3 - 5U)) {
      local_60 = 2;
    }
    else {
      local_60 = 3;
    }
    cVar1 = CBattle_Field::ClearCondition((CBattle_Field *)(this + 0xb24),local_60,local_7c8);
    if (cVar1 != '\0') {
      ClearDungeon(this);
    }
    uVar10 = 1;
  }
  else {
    cVar1 = checkBossRoom(this);
    if (cVar1 != '\x01') {
      cVar1 = IsAutoCreated(this);
      if ((cVar1 == '\0') && (iVar3 = get_member_count(this), iVar3 != 1)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        pCVar7 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
        WongWork::CHackAnalyzer::addServerHackCnt(pCVar7,param_1,0xcf,1,0,0);
      }
    }
    uVar10 = 0;
  }
                    /* try { // try from 085a3b29 to 085a3b2d has its CatchHandler @ 085a3b30 */
  PacketGuard::~PacketGuard(local_3f4);
  map_monster::~map_monster(local_7d4);
  return uVar10;
}
```
