# FatigueUp

`_ZN5CUser9FatigueUpEi`

`CUser::FatigueUp(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08655c60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08655c60  _ZN5CUser9FatigueUpEi
#           CUser::FatigueUp(int)
# range [0x08655c60, 0x086564ff]
08655c60 +0x000:  push   %ebp
08655c61 +0x001:  mov    %esp,%ebp
08655c63 +0x003:  push   %ebx
08655c64 +0x004:  sub    $0x54,%esp
08655c67 +0x007:  cmpl   $0x0,0xc(%ebp)
08655c6b +0x00b:  jne    08655c74 <+0x14>
08655c6d +0x00d:  movl   $0x1,0xc(%ebp)
08655c74 +0x014:  mov    0x8(%ebp),%eax
08655c77 +0x017:  mov    %eax,(%esp)
08655c7a +0x01a:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08655c7f +0x01f:  test   %eax,%eax
08655c81 +0x021:  setne  %al
08655c84 +0x024:  test   %al,%al
08655c86 +0x026:  je     08655cd4 <+0x74>
08655c88 +0x028:  mov    0x8(%ebp),%eax
08655c8b +0x02b:  mov    %eax,(%esp)
08655c8e +0x02e:  call   084ec6ba <_GLOBAL__I__Z7getUserj+0x366c>  ; global constructors keyed to getUser(unsigned int)+0x366c
08655c93 +0x033:  mov    %eax,-0xc(%ebp)
08655c96 +0x036:  cmpl   $0x0,-0xc(%ebp)
08655c9a +0x03a:  jle    08655cd4 <+0x74>
08655c9c +0x03c:  mov    0x8(%ebp),%eax
08655c9f +0x03f:  mov    -0xc(%ebp),%edx
08655ca2 +0x042:  mov    %edx,0x4(%esp)
08655ca6 +0x046:  mov    %eax,(%esp)
08655ca9 +0x049:  call   0822f84a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4ef4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4ef4
08655cae +0x04e:  movl   $0x0,0x4(%esp)
08655cb6 +0x056:  mov    0x8(%ebp),%eax
08655cb9 +0x059:  mov    %eax,(%esp)
08655cbc +0x05c:  call   084ec6c8 <_GLOBAL__I__Z7getUserj+0x367a>  ; global constructors keyed to getUser(unsigned int)+0x367a
08655cc1 +0x061:  movl   $0x1,0x4(%esp)
08655cc9 +0x069:  mov    0x8(%ebp),%eax
08655ccc +0x06c:  mov    %eax,(%esp)
08655ccf +0x06f:  call   086971ee <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3a43>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3a43
08655cd4 +0x074:  mov    0xc(%ebp),%ebx
08655cd7 +0x077:  mov    0x8(%ebp),%eax
08655cda +0x07a:  mov    %eax,(%esp)
08655cdd +0x07d:  call   08230800 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5eaa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5eaa
08655ce2 +0x082:  mov    %ebx,0x4(%esp)
08655ce6 +0x086:  mov    %eax,(%esp)
08655ce9 +0x089:  call   084b9552 <_ZN8XNuclear6CHades10UseFatigueEj>  ; XNuclear::CHades::UseFatigue(unsigned int)
08655cee +0x08e:  mov    0x8(%ebp),%eax
08655cf1 +0x091:  mov    %eax,(%esp)
08655cf4 +0x094:  call   084ed008 <_GLOBAL__I__Z7getUserj+0x3fba>  ; global constructors keyed to getUser(unsigned int)+0x3fba
08655cf9 +0x099:  mov    0xc(%ebp),%edx
08655cfc +0x09c:  mov    %edx,0x4(%esp)
08655d00 +0x0a0:  mov    %eax,(%esp)
08655d03 +0x0a3:  call   08287552 <_ZN16Secu_GoldControl10UseFatigueEi>  ; Secu_GoldControl::UseFatigue(int)
08655d08 +0x0a8:  mov    0x8(%ebp),%eax
08655d0b +0x0ab:  mov    %eax,(%esp)
08655d0e +0x0ae:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08655d13 +0x0b3:  cmp    $0x5,%eax
08655d16 +0x0b6:  sete   %al
08655d19 +0x0b9:  test   %al,%al
08655d1b +0x0bb:  je     08655d8e <+0x12e>
08655d1d +0x0bd:  mov    0x8(%ebp),%eax
08655d20 +0x0c0:  mov    %eax,(%esp)
08655d23 +0x0c3:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08655d28 +0x0c8:  test   %eax,%eax
08655d2a +0x0ca:  setne  %al
08655d2d +0x0cd:  test   %al,%al
08655d2f +0x0cf:  je     08655d8e <+0x12e>
08655d31 +0x0d1:  mov    0x8(%ebp),%eax
08655d34 +0x0d4:  mov    %eax,(%esp)
08655d37 +0x0d7:  call   086969da <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x322f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x322f
08655d3c +0x0dc:  mov    0x8(%ebp),%eax
08655d3f +0x0df:  mov    %eax,(%esp)
08655d42 +0x0e2:  call   086969b8 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x320d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x320d
08655d47 +0x0e7:  cmp    $0x1,%eax
08655d4a +0x0ea:  setg   %al
08655d4d +0x0ed:  test   %al,%al
08655d4f +0x0ef:  je     08655d8e <+0x12e>
08655d51 +0x0f1:  mov    0x8(%ebp),%eax
08655d54 +0x0f4:  movl   $0x1,0x4(%esp)
08655d5c +0x0fc:  mov    %eax,(%esp)
08655d5f +0x0ff:  call   08645fb8 <_ZN15CUserCharacInfo22SubCurCharacChaosPointEi>  ; CUserCharacInfo::SubCurCharacChaosPoint(int)
08655d64 +0x104:  mov    0x8(%ebp),%eax
08655d67 +0x107:  movl   $0x0,0x4(%esp)
08655d6f +0x10f:  mov    %eax,(%esp)
08655d72 +0x112:  call   0869699a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x31ef>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x31ef
08655d77 +0x117:  mov    0x8(%ebp),%eax
08655d7a +0x11a:  mov    0x8e064(%eax),%eax
08655d80 +0x120:  mov    %eax,%edx
08655d82 +0x122:  add    0xc(%ebp),%edx
08655d85 +0x125:  mov    0x8(%ebp),%eax
08655d88 +0x128:  mov    %edx,0x8e064(%eax)
08655d8e +0x12e:  mov    0x8(%ebp),%eax
08655d91 +0x131:  mov    0xc(%ebp),%edx
08655d94 +0x134:  mov    %edx,0x8e08c(%eax)
08655d9a +0x13a:  mov    0x8(%ebp),%eax
08655d9d +0x13d:  mov    %eax,(%esp)
08655da0 +0x140:  call   08110cba <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1cc>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1cc
08655da5 +0x145:  movzwl %ax,%eax
08655da8 +0x148:  mov    %eax,-0x2c(%ebp)
08655dab +0x14b:  mov    0xc(%ebp),%eax
08655dae +0x14e:  movzwl %ax,%edx
08655db1 +0x151:  mov    0x8(%ebp),%eax
08655db4 +0x154:  mov    %edx,0x4(%esp)
08655db8 +0x158:  mov    %eax,(%esp)
08655dbb +0x15b:  call   08696422 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2c77>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2c77
08655dc0 +0x160:  mov    0x8(%ebp),%eax
08655dc3 +0x163:  mov    %eax,(%esp)
08655dc6 +0x166:  call   08110cba <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1cc>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1cc
08655dcb +0x16b:  mov    %eax,%ecx
08655dcd +0x16d:  mov    %ecx,%eax
08655dcf +0x16f:  shr    %ax
08655dd2 +0x172:  movzwl %ax,%eax
08655dd5 +0x175:  imul   $0x147b,%eax,%eax
08655ddb +0x17b:  shr    $0x10,%eax
08655dde +0x17e:  mov    %eax,%edx
08655de0 +0x180:  shr    %dx
08655de3 +0x183:  mov    %edx,%eax
08655de5 +0x185:  shl    $0x2,%eax
08655de8 +0x188:  add    %edx,%eax
08655dea +0x18a:  lea    0x0(,%eax,4),%edx
08655df1 +0x191:  add    %edx,%eax
08655df3 +0x193:  add    %eax,%eax
08655df5 +0x195:  mov    %ecx,%edx
08655df7 +0x197:  sub    %ax,%dx
08655dfa +0x19a:  test   %dx,%dx
08655dfd +0x19d:  sete   %al
08655e00 +0x1a0:  test   %al,%al
08655e02 +0x1a2:  je     08655e3e <+0x1de>
08655e04 +0x1a4:  mov    0x8(%ebp),%eax
08655e07 +0x1a7:  mov    %eax,(%esp)
08655e0a +0x1aa:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
08655e0f +0x1af:  movl   $0x0,0x14(%esp)
08655e17 +0x1b7:  movl   $0x0,0x10(%esp)
08655e1f +0x1bf:  movl   $0x1,0xc(%esp)
08655e27 +0x1c7:  movl   $0x263,0x8(%esp)
08655e2f +0x1cf:  mov    0x8(%ebp),%edx
08655e32 +0x1d2:  mov    %edx,0x4(%esp)
08655e36 +0x1d6:  mov    %eax,(%esp)
08655e39 +0x1d9:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
08655e3e +0x1de:  movl   $0x9c,-0x28(%ebp)
08655e45 +0x1e5:  mov    0x8(%ebp),%eax
08655e48 +0x1e8:  mov    %eax,(%esp)
08655e4b +0x1eb:  call   08110cba <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1cc>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1cc
08655e50 +0x1f0:  cmp    $0x9c,%ax
08655e54 +0x1f4:  sete   %al
08655e57 +0x1f7:  test   %al,%al
08655e59 +0x1f9:  je     08655e7e <+0x21e>
08655e5b +0x1fb:  movl   $0x0,0xc(%esp)
08655e63 +0x203:  movl   $0x0,0x8(%esp)
08655e6b +0x20b:  movl   $0x16,0x4(%esp)
08655e73 +0x213:  mov    0x8(%ebp),%eax
08655e76 +0x216:  mov    %eax,(%esp)
08655e79 +0x219:  call   08122390 <_ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS>  ; APSystem::CUserProc::ClearActionAndSendtoUser(CUser*, APSystem::_ActionGroupIndex, int, ENUM_PACKETCLASS)
08655e7e +0x21e:  mov    0x8(%ebp),%eax
08655e81 +0x221:  mov    %eax,(%esp)
08655e84 +0x224:  call   08110cba <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1cc>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1cc
08655e89 +0x229:  cmp    $0x32,%ax
08655e8d +0x22d:  sete   %al
08655e90 +0x230:  test   %al,%al
08655e92 +0x232:  je     08655eb9 <+0x259>
08655e94 +0x234:  movl   $0x0,0xc(%esp)
08655e9c +0x23c:  movl   $0x0,0x8(%esp)
08655ea4 +0x244:  movl   $0x28,0x4(%esp)
08655eac +0x24c:  mov    0x8(%ebp),%eax
08655eaf +0x24f:  mov    %eax,(%esp)
08655eb2 +0x252:  call   08122390 <_ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS>  ; APSystem::CUserProc::ClearActionAndSendtoUser(CUser*, APSystem::_ActionGroupIndex, int, ENUM_PACKETCLASS)
08655eb7 +0x257:  jmp    08655ef2 <+0x292>
08655eb9 +0x259:  mov    0x8(%ebp),%eax
08655ebc +0x25c:  mov    %eax,(%esp)
08655ebf +0x25f:  call   08110cba <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1cc>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1cc
08655ec4 +0x264:  cmp    $0x64,%ax
08655ec8 +0x268:  sete   %al
08655ecb +0x26b:  test   %al,%al
08655ecd +0x26d:  je     08655ef2 <+0x292>
08655ecf +0x26f:  movl   $0x0,0xc(%esp)
08655ed7 +0x277:  movl   $0x0,0x8(%esp)
08655edf +0x27f:  movl   $0x2a,0x4(%esp)
08655ee7 +0x287:  mov    0x8(%ebp),%eax
08655eea +0x28a:  mov    %eax,(%esp)
08655eed +0x28d:  call   08122390 <_ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS>  ; APSystem::CUserProc::ClearActionAndSendtoUser(CUser*, APSystem::_ActionGroupIndex, int, ENUM_PACKETCLASS)
08655ef2 +0x292:  mov    0xc(%ebp),%ebx
08655ef5 +0x295:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08655efa +0x29a:  mov    %eax,(%esp)
08655efd +0x29d:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
08655f02 +0x2a2:  mov    %ebx,0x8(%esp)
08655f06 +0x2a6:  mov    0x8(%ebp),%edx
08655f09 +0x2a9:  mov    %edx,0x4(%esp)
08655f0d +0x2ad:  mov    %eax,(%esp)
08655f10 +0x2b0:  call   0810c152 <_ZN13EventClassify15CEventScriptMng16inc_user_fatigueEP5CUserj>  ; EventClassify::CEventScriptMng::inc_user_fatigue(CUser*, unsigned int)
08655f15 +0x2b5:  mov    0xc(%ebp),%ebx
08655f18 +0x2b8:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08655f1d +0x2bd:  mov    %eax,(%esp)
08655f20 +0x2c0:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
08655f25 +0x2c5:  mov    %ebx,0x8(%esp)
08655f29 +0x2c9:  mov    0x8(%ebp),%edx
08655f2c +0x2cc:  mov    %edx,0x4(%esp)
08655f30 +0x2d0:  mov    %eax,(%esp)
08655f33 +0x2d3:  call   0810c1ea <_ZN13EventClassify15CEventScriptMng22send_gift_fatigue_itemEP5CUserj>  ; EventClassify::CEventScriptMng::send_gift_fatigue_item(CUser*, unsigned int)
08655f38 +0x2d8:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08655f3d +0x2dd:  mov    %eax,(%esp)
08655f40 +0x2e0:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
08655f45 +0x2e5:  movl   $0x19b,0x4(%esp)
08655f4d +0x2ed:  mov    %eax,(%esp)
08655f50 +0x2f0:  call   0810ba36 <_ZN13EventClassify15CEventScriptMng11is_eventingEi>  ; EventClassify::CEventScriptMng::is_eventing(int)
08655f55 +0x2f5:  test   %al,%al
08655f57 +0x2f7:  je     08655f7c <+0x31c>
08655f59 +0x2f9:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08655f5e +0x2fe:  mov    %eax,(%esp)
08655f61 +0x301:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
08655f66 +0x306:  mov    0xc(%ebp),%edx
08655f69 +0x309:  mov    %edx,0x8(%esp)
08655f6d +0x30d:  mov    0x8(%ebp),%edx
08655f70 +0x310:  mov    %edx,0x4(%esp)
08655f74 +0x314:  mov    %eax,(%esp)
08655f77 +0x317:  call   0810c33a <_ZN13EventClassify15CEventScriptMng26send_bring_up_item_fatigueEP5CUseri>  ; EventClassify::CEventScriptMng::send_bring_up_item_fatigue(CUser*, int)
08655f7c +0x31c:  mov    0x8(%ebp),%eax
08655f7f +0x31f:  mov    %eax,(%esp)
08655f82 +0x322:  call   0869721a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3a6f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3a6f
08655f87 +0x327:  test   %al,%al
08655f89 +0x329:  je     08655f9d <+0x33d>
08655f8b +0x32b:  mov    0x8(%ebp),%eax
08655f8e +0x32e:  mov    -0x2c(%ebp),%edx
08655f91 +0x331:  mov    %edx,0x4(%esp)
08655f95 +0x335:  mov    %eax,(%esp)
08655f98 +0x338:  call   08655bce <_ZN15CUserCharacInfo24calcCurCharacSchoolPointEi>  ; CUserCharacInfo::calcCurCharacSchoolPoint(int)
08655f9d +0x33d:  mov    0xc(%ebp),%ebx
08655fa0 +0x340:  call   0811c9ce <_GLOBAL__I_events+0x1071>  ; global constructors keyed to events+0x1071
08655fa5 +0x345:  mov    %ebx,0xc(%esp)
08655fa9 +0x349:  movl   $0x2,0x8(%esp)
08655fb1 +0x351:  mov    0x8(%ebp),%edx
08655fb4 +0x354:  mov    %edx,0x4(%esp)
08655fb8 +0x358:  mov    %eax,(%esp)
08655fbb +0x35b:  call   081672be <_ZN16HeroMissionEvent14processMissionEP5CUserN20HeroMissionCondition9MissionNo1TEj>  ; HeroMissionEvent::processMission(CUser*, HeroMissionCondition::MissionNo::T, unsigned int)
08655fc0 +0x360:  mov    &_ZN10GlobalData15s_event_managerE,%eax
08655fc5 +0x365:  movl   $0x29,0x4(%esp)
08655fcd +0x36d:  mov    %eax,(%esp)
08655fd0 +0x370:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
08655fd5 +0x375:  mov    %eax,-0x24(%ebp)
08655fd8 +0x378:  cmpl   $0x0,-0x24(%ebp)
08655fdc +0x37c:  je     08656037 <+0x3d7>
08655fde +0x37e:  mov    -0x24(%ebp),%eax
08655fe1 +0x381:  mov    (%eax),%eax
08655fe3 +0x383:  add    $0x34,%eax
08655fe6 +0x386:  mov    (%eax),%edx
08655fe8 +0x388:  mov    -0x24(%ebp),%eax
08655feb +0x38b:  movl   $0x0,0x4(%esp)
08655ff3 +0x393:  mov    %eax,(%esp)
08655ff6 +0x396:  call   *%edx
08655ff8 +0x398:  test   %al,%al
08655ffa +0x39a:  je     08656037 <+0x3d7>
08655ffc +0x39c:  mov    0x8(%ebp),%eax
08655fff +0x39f:  mov    %eax,(%esp)
08656002 +0x3a2:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08656007 +0x3a7:  mov    %eax,%ebx
08656009 +0x3a9:  mov    -0x24(%ebp),%eax
0865600c +0x3ac:  mov    %eax,(%esp)
0865600f +0x3af:  call   08697886 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x40db>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x40db
08656014 +0x3b4:  cwtl
08656015 +0x3b5:  cmp    %eax,%ebx
08656017 +0x3b7:  sete   %al
0865601a +0x3ba:  test   %al,%al
0865601c +0x3bc:  je     08656037 <+0x3d7>
0865601e +0x3be:  mov    0xc(%ebp),%edx
08656021 +0x3c1:  mov    -0x2c(%ebp),%eax
08656024 +0x3c4:  mov    %edx,0x8(%esp)
08656028 +0x3c8:  mov    %eax,0x4(%esp)
0865602c +0x3cc:  mov    0x8(%ebp),%eax
0865602f +0x3cf:  mov    %eax,(%esp)
08656032 +0x3d2:  call   08659490 <_ZN5CUser25_processCharacterDayEventEjj>  ; CUser::_processCharacterDayEvent(unsigned int, unsigned int)
08656037 +0x3d7:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0865603c +0x3dc:  movl   $0x2b,0x4(%esp)
08656044 +0x3e4:  mov    %eax,(%esp)
08656047 +0x3e7:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0865604c +0x3ec:  mov    %eax,-0x20(%ebp)
0865604f +0x3ef:  cmpl   $0x0,-0x20(%ebp)
08656053 +0x3f3:  je     0865608c <+0x42c>
08656055 +0x3f5:  mov    -0x20(%ebp),%eax
08656058 +0x3f8:  mov    (%eax),%eax
0865605a +0x3fa:  add    $0x34,%eax
0865605d +0x3fd:  mov    (%eax),%edx
0865605f +0x3ff:  mov    -0x20(%ebp),%eax
08656062 +0x402:  movl   $0x0,0x4(%esp)
0865606a +0x40a:  mov    %eax,(%esp)
0865606d +0x40d:  call   *%edx
0865606f +0x40f:  test   %al,%al
08656071 +0x411:  je     0865608c <+0x42c>
08656073 +0x413:  mov    0xc(%ebp),%edx
08656076 +0x416:  mov    -0x2c(%ebp),%eax
08656079 +0x419:  mov    %edx,0x8(%esp)
0865607d +0x41d:  mov    %eax,0x4(%esp)
08656081 +0x421:  mov    0x8(%ebp),%eax
08656084 +0x424:  mov    %eax,(%esp)
08656087 +0x427:  call   086598ba <_ZN5CUser24_processFatigueBuffEventEjj>  ; CUser::_processFatigueBuffEvent(unsigned int, unsigned int)
0865608c +0x42c:  call   081935a2 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x20a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x20a
08656091 +0x431:  mov    0xc(%ebp),%edx
08656094 +0x434:  mov    %edx,0x8(%esp)
08656098 +0x438:  mov    0x8(%ebp),%edx
0865609b +0x43b:  mov    %edx,0x4(%esp)
0865609f +0x43f:  mov    %eax,(%esp)
086560a2 +0x442:  call   0819049a <_ZN20AvatarRechargeServer14CalcDurabilityEP5CUseri>  ; AvatarRechargeServer::CalcDurability(CUser*, int)
086560a7 +0x447:  mov    0x8(%ebp),%eax
086560aa +0x44a:  movzwl 0x79642(%eax),%edx
086560b1 +0x451:  mov    0xc(%ebp),%eax
086560b4 +0x454:  add    %eax,%edx
086560b6 +0x456:  mov    0x8(%ebp),%eax
086560b9 +0x459:  mov    %dx,0x79642(%eax)
086560c0 +0x460:  mov    0x8(%ebp),%eax
086560c3 +0x463:  mov    %eax,(%esp)
086560c6 +0x466:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
086560cb +0x46b:  test   %eax,%eax
086560cd +0x46d:  setne  %al
086560d0 +0x470:  test   %al,%al
086560d2 +0x472:  je     0865611f <+0x4bf>
086560d4 +0x474:  mov    0x8(%ebp),%eax
086560d7 +0x477:  mov    %eax,(%esp)
086560da +0x47a:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
086560df +0x47f:  mov    %eax,%ebx
086560e1 +0x481:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086560e6 +0x486:  add    $0xa50c,%eax
086560eb +0x48b:  mov    %ebx,0x4(%esp)
086560ef +0x48f:  mov    %eax,(%esp)
086560f2 +0x492:  call   089795de <_ZN20GuildParameterScript17getGuildExpWeightEi>  ; GuildParameterScript::getGuildExpWeight(int)
086560f7 +0x497:  mov    %eax,%ecx
086560f9 +0x499:  imul   0xc(%ebp),%ecx
086560fd +0x49d:  mov    $0x51eb851f,%edx
08656102 +0x4a2:  mov    %ecx,%eax
08656104 +0x4a4:  imul   %edx
08656106 +0x4a6:  sar    $0x5,%edx
08656109 +0x4a9:  mov    %ecx,%eax
0865610b +0x4ab:  sar    $0x1f,%eax
0865610e +0x4ae:  sub    %eax,%edx
08656110 +0x4b0:  mov    0x8(%ebp),%eax
08656113 +0x4b3:  mov    %edx,0x4(%esp)
08656117 +0x4b7:  mov    %eax,(%esp)
0865611a +0x4ba:  call   08645c18 <_ZN15CUserCharacInfo18add_guild_temp_expEi>  ; CUserCharacInfo::add_guild_temp_exp(int)
0865611f +0x4bf:  mov    0xc(%ebp),%edx
08656122 +0x4c2:  mov    0x8(%ebp),%eax
08656125 +0x4c5:  mov    %edx,0x4(%esp)
08656129 +0x4c9:  mov    %eax,(%esp)
0865612c +0x4cc:  call   08696326 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2b7b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2b7b
08656131 +0x4d1:  mov    0x8(%ebp),%eax
08656134 +0x4d4:  movzbl 0x8d03b(%eax),%eax
0865613b +0x4db:  movzbl %al,%eax
0865613e +0x4de:  add    $0x1,%eax
08656141 +0x4e1:  cmp    $0x10,%eax
08656144 +0x4e4:  jle    08656151 <+0x4f1>
08656146 +0x4e6:  mov    0x8(%ebp),%eax
08656149 +0x4e9:  mov    %eax,(%esp)
0865614c +0x4ec:  call   08645c58 <_ZN15CUserCharacInfo20reset_guild_temp_expEv>  ; CUserCharacInfo::reset_guild_temp_exp()
08656151 +0x4f1:  mov    0xc(%ebp),%eax
08656154 +0x4f4:  mov    %eax,0x4(%esp)
08656158 +0x4f8:  mov    0x8(%ebp),%eax
0865615b +0x4fb:  mov    %eax,(%esp)
0865615e +0x4fe:  call   086925c4 <_ZN5CUser20processFatigueCharacEi>  ; CUser::processFatigueCharac(int)
08656163 +0x503:  mov    0x8(%ebp),%eax
08656166 +0x506:  add    $0x7121c,%eax
0865616b +0x50b:  mov    %eax,(%esp)
0865616e +0x50e:  call   08694a54 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x12a9>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x12a9
08656173 +0x513:  test   %al,%al
08656175 +0x515:  je     0865618a <+0x52a>
08656177 +0x517:  mov    0x8(%ebp),%eax
0865617a +0x51a:  mov    %eax,(%esp)
0865617d +0x51d:  call   08657766 <_ZNK5CUser24getCurCharacTotalFatigueEv>  ; CUser::getCurCharacTotalFatigue() const
08656182 +0x522:  movzwl %ax,%eax
08656185 +0x525:  jmp    086564f9 <+0x899>
0865618a +0x52a:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0865618f +0x52f:  movl   $0x1,0x4(%esp)
08656197 +0x537:  mov    %eax,(%esp)
0865619a +0x53a:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0865619f +0x53f:  mov    (%eax),%edx
086561a1 +0x541:  add    $0x34,%edx
086561a4 +0x544:  mov    (%edx),%edx
086561a6 +0x546:  movl   $0x0,0x4(%esp)
086561ae +0x54e:  mov    %eax,(%esp)
086561b1 +0x551:  call   *%edx
086561b3 +0x553:  test   %al,%al
086561b5 +0x555:  je     086561ea <+0x58a>
086561b7 +0x557:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086561bc +0x55c:  mov    0xe4(%eax),%eax
086561c2 +0x562:  mov    %eax,%edx
086561c4 +0x564:  imul   0xc(%ebp),%edx
086561c8 +0x568:  mov    0x8(%ebp),%eax
086561cb +0x56b:  mov    %edx,0x4(%esp)
086561cf +0x56f:  mov    %eax,(%esp)
086561d2 +0x572:  call   0822f84a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4ef4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4ef4
086561d7 +0x577:  mov    0x8(%ebp),%eax
086561da +0x57a:  mov    %eax,(%esp)
086561dd +0x57d:  call   08657766 <_ZNK5CUser24getCurCharacTotalFatigueEv>  ; CUser::getCurCharacTotalFatigue() const
086561e2 +0x582:  movzwl %ax,%eax
086561e5 +0x585:  jmp    086564f9 <+0x899>
086561ea +0x58a:  mov    &_ZN10GlobalData15s_event_managerE,%eax
086561ef +0x58f:  movl   $0xa,0x4(%esp)
086561f7 +0x597:  mov    %eax,(%esp)
086561fa +0x59a:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
086561ff +0x59f:  mov    (%eax),%edx
08656201 +0x5a1:  add    $0x34,%edx
08656204 +0x5a4:  mov    (%edx),%ecx
08656206 +0x5a6:  mov    0x8(%ebp),%edx
08656209 +0x5a9:  mov    %edx,0x4(%esp)
0865620d +0x5ad:  mov    %eax,(%esp)
08656210 +0x5b0:  call   *%ecx
08656212 +0x5b2:  test   %al,%al
08656214 +0x5b4:  je     08656229 <+0x5c9>
08656216 +0x5b6:  mov    0x8(%ebp),%eax
08656219 +0x5b9:  mov    %eax,(%esp)
0865621c +0x5bc:  call   08657766 <_ZNK5CUser24getCurCharacTotalFatigueEv>  ; CUser::getCurCharacTotalFatigue() const
08656221 +0x5c1:  movzwl %ax,%eax
08656224 +0x5c4:  jmp    086564f9 <+0x899>
08656229 +0x5c9:  mov    0x8(%ebp),%eax
0865622c +0x5cc:  mov    %eax,(%esp)
0865622f +0x5cf:  call   0822f2ae <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4958>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4958
08656234 +0x5d4:  cmp    $0xffff,%ax
08656238 +0x5d8:  sete   %al
0865623b +0x5db:  test   %al,%al
0865623d +0x5dd:  je     08656252 <+0x5f2>
0865623f +0x5df:  mov    0x8(%ebp),%eax
08656242 +0x5e2:  mov    %eax,(%esp)
08656245 +0x5e5:  call   0822f2ae <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4958>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4958
0865624a +0x5ea:  movzwl %ax,%eax
0865624d +0x5ed:  jmp    086564f9 <+0x899>
08656252 +0x5f2:  movl   $0x0,-0x1c(%ebp)
08656259 +0x5f9:  mov    0x8(%ebp),%eax
0865625c +0x5fc:  mov    %eax,(%esp)
0865625f +0x5ff:  call   0822f5c4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4c6e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4c6e
08656264 +0x604:  test   %eax,%eax
08656266 +0x606:  je     0865627e <+0x61e>
08656268 +0x608:  mov    0x8(%ebp),%eax
0865626b +0x60b:  mov    %eax,(%esp)
0865626e +0x60e:  call   0822f5e6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4c90>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4c90
08656273 +0x613:  test   %al,%al
08656275 +0x615:  je     0865627e <+0x61e>
08656277 +0x617:  mov    $0x1,%eax
0865627c +0x61c:  jmp    08656283 <+0x623>
0865627e +0x61e:  mov    $0x0,%eax
08656283 +0x623:  test   %al,%al
08656285 +0x625:  je     08656299 <+0x639>
08656287 +0x627:  mov    0x8(%ebp),%eax
0865628a +0x62a:  mov    0xc(%ebp),%edx
0865628d +0x62d:  mov    %edx,0x4(%esp)
08656291 +0x631:  mov    %eax,(%esp)
08656294 +0x634:  call   086968f8 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x314d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x314d
08656299 +0x639:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0865629e +0x63e:  mov    %eax,(%esp)
086562a1 +0x641:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
086562a6 +0x646:  mov    0xc(%ebp),%edx
086562a9 +0x649:  mov    %edx,0x8(%esp)
086562ad +0x64d:  mov    0x8(%ebp),%edx
086562b0 +0x650:  mov    %edx,0x4(%esp)
086562b4 +0x654:  mov    %eax,(%esp)
086562b7 +0x657:  call   0810c110 <_ZN13EventClassify15CEventScriptMng25process_add_fatigue_countEP5CUseri>  ; EventClassify::CEventScriptMng::process_add_fatigue_count(CUser*, int)
086562bc +0x65c:  movw   $0x0,-0x16(%ebp)
086562c2 +0x662:  mov    &_ZN10GlobalData15s_event_managerE,%eax
086562c7 +0x667:  movl   $0xf,0x4(%esp)
086562cf +0x66f:  mov    %eax,(%esp)
086562d2 +0x672:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
086562d7 +0x677:  mov    %eax,-0x14(%ebp)
086562da +0x67a:  mov    -0x14(%ebp),%eax
086562dd +0x67d:  mov    (%eax),%eax
086562df +0x67f:  add    $0x34,%eax
086562e2 +0x682:  mov    (%eax),%edx
086562e4 +0x684:  mov    -0x14(%ebp),%eax
086562e7 +0x687:  movl   $0x0,0x4(%esp)
086562ef +0x68f:  mov    %eax,(%esp)
086562f2 +0x692:  call   *%edx
086562f4 +0x694:  test   %al,%al
086562f6 +0x696:  je     08656323 <+0x6c3>
086562f8 +0x698:  mov    0xc(%ebp),%eax
086562fb +0x69b:  movzwl %ax,%ebx
086562fe +0x69e:  mov    0x8(%ebp),%eax
08656301 +0x6a1:  mov    %eax,(%esp)
08656304 +0x6a4:  call   08110cba <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1cc>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1cc
08656309 +0x6a9:  movzwl %ax,%eax
0865630c +0x6ac:  mov    %ebx,0x8(%esp)
08656310 +0x6b0:  mov    %eax,0x4(%esp)
08656314 +0x6b4:  mov    -0x14(%ebp),%eax
08656317 +0x6b7:  mov    %eax,(%esp)
0865631a +0x6ba:  call   0810a166 <_ZNK20CBurningFatigueEvent16getRefillFatigueEtt>  ; CBurningFatigueEvent::getRefillFatigue(unsigned short, unsigned short) const
0865631f +0x6bf:  mov    %ax,-0x16(%ebp)
08656323 +0x6c3:  mov    0x8(%ebp),%eax
08656326 +0x6c6:  mov    %eax,(%esp)
08656329 +0x6c9:  call   0812ce36 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0xb2>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0xb2
0865632e +0x6ce:  test   %al,%al
08656330 +0x6d0:  je     0865643b <+0x7db>
08656336 +0x6d6:  mov    0x8(%ebp),%eax
08656339 +0x6d9:  mov    %eax,(%esp)
0865633c +0x6dc:  call   086963b0 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2c05>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2c05
08656341 +0x6e1:  movzwl %ax,%eax
08656344 +0x6e4:  mov    %eax,-0x1c(%ebp)
08656347 +0x6e7:  mov    0xc(%ebp),%eax
0865634a +0x6ea:  mov    -0x1c(%ebp),%edx
0865634d +0x6ed:  lea    (%edx,%eax,1),%ebx
08656350 +0x6f0:  mov    0x8(%ebp),%eax
08656353 +0x6f3:  mov    %eax,(%esp)
08656356 +0x6f6:  call   08696402 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2c57>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2c57
0865635b +0x6fb:  movzwl %ax,%eax
0865635e +0x6fe:  cmp    %eax,%ebx
08656360 +0x700:  setle  %al
08656363 +0x703:  test   %al,%al
08656365 +0x705:  je     086563dc <+0x77c>
08656367 +0x707:  mov    -0x1c(%ebp),%eax
0865636a +0x70a:  mov    %eax,%edx
0865636c +0x70c:  mov    0xc(%ebp),%eax
0865636f +0x70f:  lea    (%edx,%eax,1),%eax
08656372 +0x712:  movzwl %ax,%edx
08656375 +0x715:  mov    0x8(%ebp),%eax
08656378 +0x718:  mov    %edx,0x4(%esp)
0865637c +0x71c:  mov    %eax,(%esp)
0865637f +0x71f:  call   086963d0 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2c25>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2c25
08656384 +0x724:  cmpw   $0x0,-0x16(%ebp)
08656389 +0x729:  je     086563a9 <+0x749>
0865638b +0x72b:  movzwl -0x16(%ebp),%eax
0865638f +0x72f:  mov    %eax,0x4(%esp)
08656393 +0x733:  mov    0x8(%ebp),%eax
08656396 +0x736:  mov    %eax,(%esp)
08656399 +0x739:  call   0864f7fe <_ZN5CUser20gainCurCharacFatigueEi>  ; CUser::gainCurCharacFatigue(int)
0865639e +0x73e:  mov    0x8(%ebp),%eax
086563a1 +0x741:  mov    %eax,(%esp)
086563a4 +0x744:  call   08656540 <_ZN5CUser11SendFatigueEv>  ; CUser::SendFatigue()
086563a9 +0x749:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086563ae +0x74e:  mov    0xe4(%eax),%eax
086563b4 +0x754:  mov    %eax,%edx
086563b6 +0x756:  imul   0xc(%ebp),%edx
086563ba +0x75a:  mov    0x8(%ebp),%eax
086563bd +0x75d:  mov    %edx,0x4(%esp)
086563c1 +0x761:  mov    %eax,(%esp)
086563c4 +0x764:  call   0822f84a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4ef4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4ef4
086563c9 +0x769:  mov    0x8(%ebp),%eax
086563cc +0x76c:  mov    %eax,(%esp)
086563cf +0x76f:  call   08657766 <_ZNK5CUser24getCurCharacTotalFatigueEv>  ; CUser::getCurCharacTotalFatigue() const
086563d4 +0x774:  movzwl %ax,%eax
086563d7 +0x777:  jmp    086564f9 <+0x899>
086563dc +0x77c:  mov    0x8(%ebp),%eax
086563df +0x77f:  mov    %eax,(%esp)
086563e2 +0x782:  call   086963b0 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2c05>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2c05
086563e7 +0x787:  mov    %eax,%ebx
086563e9 +0x789:  mov    0x8(%ebp),%eax
086563ec +0x78c:  mov    %eax,(%esp)
086563ef +0x78f:  call   08696402 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2c57>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2c57
086563f4 +0x794:  cmp    %ax,%bx
086563f7 +0x797:  setb   %al
086563fa +0x79a:  test   %al,%al
086563fc +0x79c:  je     0865643b <+0x7db>
086563fe +0x79e:  mov    0x8(%ebp),%eax
08656401 +0x7a1:  mov    %eax,(%esp)
08656404 +0x7a4:  call   08696402 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2c57>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2c57
08656409 +0x7a9:  movzwl %ax,%edx
0865640c +0x7ac:  mov    0x8(%ebp),%eax
0865640f +0x7af:  mov    %edx,0x4(%esp)
08656413 +0x7b3:  mov    %eax,(%esp)
08656416 +0x7b6:  call   086963d0 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2c25>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2c25
0865641b +0x7bb:  mov    0xc(%ebp),%eax
0865641e +0x7be:  mov    -0x1c(%ebp),%edx
08656421 +0x7c1:  lea    (%edx,%eax,1),%ebx
08656424 +0x7c4:  mov    0x8(%ebp),%eax
08656427 +0x7c7:  mov    %eax,(%esp)
0865642a +0x7ca:  call   08696402 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2c57>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2c57
0865642f +0x7cf:  movzwl %ax,%eax
08656432 +0x7d2:  mov    %ebx,%edx
08656434 +0x7d4:  sub    %eax,%edx
08656436 +0x7d6:  mov    %edx,%eax
08656438 +0x7d8:  mov    %eax,0xc(%ebp)
0865643b +0x7db:  mov    0x8(%ebp),%eax
0865643e +0x7de:  mov    %eax,(%esp)
08656441 +0x7e1:  call   0822f2ae <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4958>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4958
08656446 +0x7e6:  movzwl %ax,%eax
08656449 +0x7e9:  mov    %eax,-0x1c(%ebp)
0865644c +0x7ec:  mov    -0x1c(%ebp),%eax
0865644f +0x7ef:  mov    %eax,-0x10(%ebp)
08656452 +0x7f2:  mov    0xc(%ebp),%eax
08656455 +0x7f5:  mov    -0x1c(%ebp),%edx
08656458 +0x7f8:  lea    (%edx,%eax,1),%ebx
0865645b +0x7fb:  mov    0x8(%ebp),%eax
0865645e +0x7fe:  mov    %eax,(%esp)
08656461 +0x801:  call   0812cdd6 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0x52>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0x52
08656466 +0x806:  movzwl %ax,%eax
08656469 +0x809:  cmp    %eax,%ebx
0865646b +0x80b:  setg   %al
0865646e +0x80e:  test   %al,%al
08656470 +0x810:  je     08656485 <+0x825>
08656472 +0x812:  mov    0x8(%ebp),%eax
08656475 +0x815:  mov    %eax,(%esp)
08656478 +0x818:  call   0812cdd6 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0x52>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0x52
0865647d +0x81d:  movzwl %ax,%eax
08656480 +0x820:  mov    %eax,-0x1c(%ebp)
08656483 +0x823:  jmp    0865648b <+0x82b>
08656485 +0x825:  mov    0xc(%ebp),%eax
08656488 +0x828:  add    %eax,-0x1c(%ebp)
0865648b +0x82b:  mov    0x8(%ebp),%eax
0865648e +0x82e:  mov    -0x1c(%ebp),%edx
08656491 +0x831:  mov    %edx,0x4(%esp)
08656495 +0x835:  mov    %eax,(%esp)
08656498 +0x838:  call   0822f2ce <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4978>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4978
0865649d +0x83d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086564a2 +0x842:  mov    0xe0(%eax),%eax
086564a8 +0x848:  mov    -0x10(%ebp),%edx
086564ab +0x84b:  mov    -0x1c(%ebp),%ecx
086564ae +0x84e:  mov    %ecx,%ebx
086564b0 +0x850:  sub    %edx,%ebx
086564b2 +0x852:  mov    %ebx,%edx
086564b4 +0x854:  imul   %eax,%edx
086564b7 +0x857:  mov    0x8(%ebp),%eax
086564ba +0x85a:  mov    %edx,0x4(%esp)
086564be +0x85e:  mov    %eax,(%esp)
086564c1 +0x861:  call   0822f84a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4ef4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4ef4
086564c6 +0x866:  cmpw   $0x0,-0x16(%ebp)
086564cb +0x86b:  je     086564eb <+0x88b>
086564cd +0x86d:  movzwl -0x16(%ebp),%eax
086564d1 +0x871:  mov    %eax,0x4(%esp)
086564d5 +0x875:  mov    0x8(%ebp),%eax
086564d8 +0x878:  mov    %eax,(%esp)
086564db +0x87b:  call   0864f7fe <_ZN5CUser20gainCurCharacFatigueEi>  ; CUser::gainCurCharacFatigue(int)
086564e0 +0x880:  mov    0x8(%ebp),%eax
086564e3 +0x883:  mov    %eax,(%esp)
086564e6 +0x886:  call   08656540 <_ZN5CUser11SendFatigueEv>  ; CUser::SendFatigue()
086564eb +0x88b:  mov    0x8(%ebp),%eax
086564ee +0x88e:  mov    %eax,(%esp)
086564f1 +0x891:  call   0822f2ae <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4958>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4958
086564f6 +0x896:  movzwl %ax,%eax
086564f9 +0x899:  add    $0x54,%esp
086564fc +0x89c:  pop    %ebx
086564fd +0x89d:  pop    %ebp
086564fe +0x89e:  ret
086564ff +0x89f:  nop
```

## 反编译 C

```c
// CUser::FatigueUp @ 0x8655c60

/* CUser::FatigueUp(int) */

undefined2 __thiscall CUser::FatigueUp(CUser *this,int param_1)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  undefined2 uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  Secu_GoldControl *this_00;
  uint uVar10;
  CHackAnalyzer *pCVar11;
  CDataManager *pCVar12;
  CEventScriptMng *pCVar13;
  HeroMissionEvent *pHVar14;
  CCharacterDayEvent *this_01;
  int *piVar15;
  AvatarRechargeServer *this_02;
  CBurningFatigueEvent *this_03;
  uint local_20;
  ushort local_1a;
  
  if (param_1 == 0) {
    param_1 = 1;
  }
  iVar8 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if ((iVar8 != 0) && (iVar8 = getUserBreakAwayRewardLuckPoint(this), 0 < iVar8)) {
    CUserCharacInfo::IncCurCharacLuckPoint((CUserCharacInfo *)this,iVar8);
    setUserBreakAwayRewardLuckPoint(this,0);
    setUsedBreakAwayLuckPoint(this,true);
  }
  uVar9 = getHades(this);
  XNuclear::CHades::UseFatigue(uVar9);
  this_00 = (Secu_GoldControl *)GetGoldControl(this);
  Secu_GoldControl::UseFatigue(this_00,param_1);
  iVar8 = get_state(this);
  if ((iVar8 == 5) && (iVar8 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this), iVar8 != 0))
  {
    CUserCharacInfo::IncCurCharacAssaultFatigueCount((CUserCharacInfo *)this);
    iVar8 = CUserCharacInfo::GetCurCharacAssaultFatigueCount((CUserCharacInfo *)this);
    if (1 < iVar8) {
      CUserCharacInfo::SubCurCharacChaosPoint((CUserCharacInfo *)this,1);
      CUserCharacInfo::SetCurCharacAssaultFatigueCount((CUserCharacInfo *)this,0);
      *(int *)(this + 0x8e064) = *(int *)(this + 0x8e064) + param_1;
    }
  }
  *(int *)(this + 0x8e08c) = param_1;
  uVar9 = CUserCharacInfo::getCurCharacUsedFatigue((CUserCharacInfo *)this);
  uVar9 = uVar9 & 0xffff;
  uVar6 = (ushort)param_1;
  CUserCharacInfo::incCurCharacUsedFatigue((CUserCharacInfo *)this,uVar6);
  uVar10 = CUserCharacInfo::getCurCharacUsedFatigue((CUserCharacInfo *)this);
  if ((short)((short)uVar10 + (short)((uVar10 >> 1 & 0x7fff) / 0x19) * -0x32) == 0) {
    pCVar11 = (CHackAnalyzer *)getHackAnalyzer(this);
    WongWork::CHackAnalyzer::addServerHackCnt(pCVar11,this,0x263,1,0,0);
  }
  sVar3 = CUserCharacInfo::getCurCharacUsedFatigue((CUserCharacInfo *)this);
  if (sVar3 == 0x9c) {
    APSystem::CUserProc::ClearActionAndSendtoUser(this,0x16,0,0);
  }
  sVar3 = CUserCharacInfo::getCurCharacUsedFatigue((CUserCharacInfo *)this);
  if (sVar3 == 0x32) {
    APSystem::CUserProc::ClearActionAndSendtoUser(this,0x28,0,0);
  }
  else {
    sVar3 = CUserCharacInfo::getCurCharacUsedFatigue((CUserCharacInfo *)this);
    if (sVar3 == 100) {
      APSystem::CUserProc::ClearActionAndSendtoUser(this,0x2a,0,0);
    }
  }
  pCVar12 = (CDataManager *)G_CDataManager();
  pCVar13 = (CEventScriptMng *)CDataManager::get_event_script_mng(pCVar12);
  EventClassify::CEventScriptMng::inc_user_fatigue(pCVar13,this,param_1);
  pCVar12 = (CDataManager *)G_CDataManager();
  pCVar13 = (CEventScriptMng *)CDataManager::get_event_script_mng(pCVar12);
  EventClassify::CEventScriptMng::send_gift_fatigue_item(pCVar13,this,param_1);
  pCVar12 = (CDataManager *)G_CDataManager();
  pCVar13 = (CEventScriptMng *)CDataManager::get_event_script_mng(pCVar12);
  cVar2 = EventClassify::CEventScriptMng::is_eventing(pCVar13,0x19b);
  if (cVar2 != '\0') {
    pCVar12 = (CDataManager *)G_CDataManager();
    pCVar13 = (CEventScriptMng *)CDataManager::get_event_script_mng(pCVar12);
    EventClassify::CEventScriptMng::send_bring_up_item_fatigue(pCVar13,this,param_1);
  }
  cVar2 = isJoinedSchoolPointEvent(this);
  if (cVar2 != '\0') {
    CUserCharacInfo::calcCurCharacSchoolPoint((CUserCharacInfo *)this,uVar9);
  }
  pHVar14 = (HeroMissionEvent *)ARAD::Singleton<HeroMissionEvent>::Get();
  HeroMissionEvent::processMission(pHVar14,this,2,param_1);
  this_01 = (CCharacterDayEvent *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x29);
  if ((this_01 != (CCharacterDayEvent *)0x0) &&
     (cVar2 = (**(code **)(*(int *)this_01 + 0x34))(this_01,0), cVar2 != '\0')) {
    iVar8 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
    sVar3 = CCharacterDayEvent::GetEventJob(this_01);
    if (iVar8 == sVar3) {
      _processCharacterDayEvent(this,uVar9,param_1);
    }
  }
  piVar15 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x2b);
  if ((piVar15 != (int *)0x0) && (cVar2 = (**(code **)(*piVar15 + 0x34))(piVar15,0), cVar2 != '\0'))
  {
    _processFatigueBuffEvent(this,uVar9,param_1);
  }
  this_02 = (AvatarRechargeServer *)ARAD::Singleton<AvatarRechargeServer>::Get();
  AvatarRechargeServer::CalcDurability(this_02,this,param_1);
  *(ushort *)(this + 0x79642) = *(short *)(this + 0x79642) + uVar6;
  iVar8 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
  if (iVar8 != 0) {
    CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
    iVar8 = G_CDataManager();
    iVar8 = GuildParameterScript::getGuildExpWeight(iVar8 + 0xa50c);
    CUserCharacInfo::add_guild_temp_exp((CUserCharacInfo *)this,(iVar8 * param_1) / 100);
  }
  CUserCharacInfo::decCurCharacFatigueGrownUpBuff((CUserCharacInfo *)this,param_1);
  if (0x10 < (byte)this[0x8d03b] + 1) {
    CUserCharacInfo::reset_guild_temp_exp((CUserCharacInfo *)this);
  }
  processFatigueCharac(this,param_1);
  cVar2 = WongWork::CUserPremium::isAffectedUnlimitFatigue((CUserPremium *)(this + 0x7121c));
  if (cVar2 != '\0') {
    uVar4 = getCurCharacTotalFatigue(this);
    return uVar4;
  }
  piVar15 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,1);
  cVar2 = (**(code **)(*piVar15 + 0x34))(piVar15,0);
  if (cVar2 != '\0') {
    iVar8 = G_CDataManager();
    CUserCharacInfo::IncCurCharacLuckPoint((CUserCharacInfo *)this,*(int *)(iVar8 + 0xe4) * param_1)
    ;
    uVar4 = getCurCharacTotalFatigue(this);
    return uVar4;
  }
  piVar15 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,10);
  cVar2 = (**(code **)(*piVar15 + 0x34))(piVar15,this);
  if (cVar2 == '\0') {
    sVar3 = CUserCharacInfo::getCurCharacFatigue((CUserCharacInfo *)this);
    if (sVar3 == -1) {
      uVar4 = CUserCharacInfo::getCurCharacFatigue((CUserCharacInfo *)this);
      return uVar4;
    }
    iVar8 = CUserCharacInfo::get_charac_memberkey((CUserCharacInfo *)this);
    if ((iVar8 == 0) ||
       (cVar2 = CUserCharacInfo::is_connect_upper_member((CUserCharacInfo *)this), cVar2 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      CUserCharacInfo::add_member_pay_tex_fatigue_to_upper((CUserCharacInfo *)this,param_1);
    }
    pCVar12 = (CDataManager *)G_CDataManager();
    pCVar13 = (CEventScriptMng *)CDataManager::get_event_script_mng(pCVar12);
    EventClassify::CEventScriptMng::process_add_fatigue_count(pCVar13,this,param_1);
    local_1a = 0;
    this_03 = (CBurningFatigueEvent *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0xf)
    ;
    cVar2 = (**(code **)(*(int *)this_03 + 0x34))(this_03,0);
    if (cVar2 != '\0') {
      uVar5 = CUserCharacInfo::getCurCharacUsedFatigue((CUserCharacInfo *)this);
      local_1a = CBurningFatigueEvent::getRefillFatigue(this_03,uVar5,uVar6);
    }
    cVar2 = IsHavePremiumAdvantage(this);
    if (cVar2 != '\0') {
      uVar5 = CUserCharacInfo::getCurCharacPremiumFatigue((CUserCharacInfo *)this);
      uVar9 = CUserCharacInfo::getCurCharacMaxPremiumFatigue((CUserCharacInfo *)this);
      if ((int)((uint)uVar5 + param_1) <= (int)(uVar9 & 0xffff)) {
        CUserCharacInfo::setCurCharacPremiumFatigue((CUserCharacInfo *)this,uVar5 + uVar6);
        if (local_1a != 0) {
          gainCurCharacFatigue(this,(uint)local_1a);
          SendFatigue(this);
        }
        iVar8 = G_CDataManager();
        CUserCharacInfo::IncCurCharacLuckPoint
                  ((CUserCharacInfo *)this,*(int *)(iVar8 + 0xe4) * param_1);
        uVar4 = getCurCharacTotalFatigue(this);
        return uVar4;
      }
      uVar6 = CUserCharacInfo::getCurCharacPremiumFatigue((CUserCharacInfo *)this);
      uVar7 = CUserCharacInfo::getCurCharacMaxPremiumFatigue((CUserCharacInfo *)this);
      if (uVar6 < uVar7) {
        uVar6 = CUserCharacInfo::getCurCharacMaxPremiumFatigue((CUserCharacInfo *)this);
        CUserCharacInfo::setCurCharacPremiumFatigue((CUserCharacInfo *)this,uVar6);
        uVar9 = CUserCharacInfo::getCurCharacMaxPremiumFatigue((CUserCharacInfo *)this);
        param_1 = ((uint)uVar5 + param_1) - (uVar9 & 0xffff);
      }
    }
    uVar9 = CUserCharacInfo::getCurCharacFatigue((CUserCharacInfo *)this);
    uVar9 = uVar9 & 0xffff;
    uVar10 = CUserCharacInfo::getCurCharacMaxFatigue((CUserCharacInfo *)this);
    if ((int)(uVar10 & 0xffff) < (int)(uVar9 + param_1)) {
      local_20 = CUserCharacInfo::getCurCharacMaxFatigue((CUserCharacInfo *)this);
      local_20 = local_20 & 0xffff;
    }
    else {
      local_20 = uVar9 + param_1;
    }
    CUserCharacInfo::setCurCharacFatigue((CUserCharacInfo *)this,local_20);
    iVar8 = G_CDataManager();
    CUserCharacInfo::IncCurCharacLuckPoint
              ((CUserCharacInfo *)this,(local_20 - uVar9) * *(int *)(iVar8 + 0xe0));
    if (local_1a != 0) {
      gainCurCharacFatigue(this,(uint)local_1a);
      SendFatigue(this);
    }
    uVar4 = CUserCharacInfo::getCurCharacFatigue((CUserCharacInfo *)this);
    return uVar4;
  }
  uVar4 = getCurCharacTotalFatigue(this);
  return uVar4;
}
```
