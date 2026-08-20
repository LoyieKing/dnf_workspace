# ReturnToSelectCharacList

`_ZN5CUser24ReturnToSelectCharacListEb`

`CUser::ReturnToSelectCharacList(bool)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08686fee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08686fee  _ZN5CUser24ReturnToSelectCharacListEb
#           CUser::ReturnToSelectCharacList(bool)
# range [0x08686fee, 0x0868745d]
08686fee +0x000:  push   %ebp
08686fef +0x001:  mov    %esp,%ebp
08686ff1 +0x003:  push   %esi
08686ff2 +0x004:  push   %ebx
08686ff3 +0x005:  sub    $0x60,%esp
08686ff6 +0x008:  mov    0xc(%ebp),%eax
08686ff9 +0x00b:  mov    %al,-0x3c(%ebp)
08686ffc +0x00e:  mov    0x8(%ebp),%eax
08686fff +0x011:  mov    %eax,(%esp)
08687002 +0x014:  call   08651628 <_ZN5CUser40UpdateCurCharacVisibleToCharacViewMemoryEv>  ; CUser::UpdateCurCharacVisibleToCharacViewMemory()
08687007 +0x019:  mov    0x8(%ebp),%eax
0868700a +0x01c:  mov    %eax,(%esp)
0868700d +0x01f:  call   08652f0c <_ZN5CUser14WorkPerFiveMinEv>  ; CUser::WorkPerFiveMin()
08687012 +0x024:  mov    0x8(%ebp),%eax
08687015 +0x027:  mov    %eax,(%esp)
08687018 +0x02a:  call   0822f5c4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4c6e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4c6e
0868701d +0x02f:  test   %eax,%eax
0868701f +0x031:  setne  %al
08687022 +0x034:  test   %al,%al
08687024 +0x036:  je     086870ce <+0xe0>
0868702a +0x03c:  mov    0x8(%ebp),%eax
0868702d +0x03f:  mov    %eax,(%esp)
08687030 +0x042:  call   0822f612 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4cbc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4cbc
08687035 +0x047:  mov    %eax,-0x10(%ebp)
08687038 +0x04a:  mov    0x8(%ebp),%eax
0868703b +0x04d:  mov    %eax,(%esp)
0868703e +0x050:  call   0822f652 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4cfc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4cfc
08687043 +0x055:  mov    %eax,-0xc(%ebp)
08687046 +0x058:  mov    0x8(%ebp),%eax
08687049 +0x05b:  mov    %eax,(%esp)
0868704c +0x05e:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08687051 +0x063:  mov    %eax,%ebx
08687053 +0x065:  mov    0x8(%ebp),%eax
08687056 +0x068:  mov    %eax,(%esp)
08687059 +0x06b:  call   0822f5e6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4c90>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4c90
0868705e +0x070:  movzbl %al,%esi
08687061 +0x073:  mov    0x8(%ebp),%eax
08687064 +0x076:  mov    %eax,(%esp)
08687067 +0x079:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0868706c +0x07e:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
08687072 +0x084:  mov    %eax,0x4(%esp)
08687076 +0x088:  mov    %edx,(%esp)
08687079 +0x08b:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
0868707e +0x090:  mov    -0xc(%ebp),%edx
08687081 +0x093:  mov    %edx,0x10(%esp)
08687085 +0x097:  mov    -0x10(%ebp),%edx
08687088 +0x09a:  mov    %edx,0xc(%esp)
0868708c +0x09e:  mov    %ebx,0x8(%esp)
08687090 +0x0a2:  mov    %esi,0x4(%esp)
08687094 +0x0a6:  mov    %eax,(%esp)
08687097 +0x0a9:  call   08470fb4 <_ZN19CMonitorServerProxy16SendMemberPayTaxEbjii>  ; CMonitorServerProxy::SendMemberPayTax(bool, unsigned int, int, int)
0868709c +0x0ae:  cmpl   $0x0,-0x10(%ebp)
086870a0 +0x0b2:  jle    086870b5 <+0xc7>
086870a2 +0x0b4:  mov    0x8(%ebp),%eax
086870a5 +0x0b7:  movl   $0x0,0x4(%esp)
086870ad +0x0bf:  mov    %eax,(%esp)
086870b0 +0x0c2:  call   0822f634 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4cde>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4cde
086870b5 +0x0c7:  cmpl   $0x0,-0xc(%ebp)
086870b9 +0x0cb:  jle    086870ce <+0xe0>
086870bb +0x0cd:  mov    0x8(%ebp),%eax
086870be +0x0d0:  movl   $0x0,0x4(%esp)
086870c6 +0x0d8:  mov    %eax,(%esp)
086870c9 +0x0db:  call   0822f674 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4d1e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4d1e
086870ce +0x0e0:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
086870d3 +0x0e5:  mov    %eax,-0x1c(%ebp)
086870d6 +0x0e8:  mov    0x8(%ebp),%eax
086870d9 +0x0eb:  movl   $0x0,0x4(%esp)
086870e1 +0x0f3:  mov    %eax,(%esp)
086870e4 +0x0f6:  call   08645b80 <_ZN15CUserCharacInfo25set_uppermember_exp_levelEh>  ; CUserCharacInfo::set_uppermember_exp_level(unsigned char)
086870e9 +0x0fb:  mov    0x8(%ebp),%eax
086870ec +0x0fe:  movl   $0x0,0x4(%esp)
086870f4 +0x106:  mov    %eax,(%esp)
086870f7 +0x109:  call   084ec0fa <_GLOBAL__I__Z7getUserj+0x30ac>  ; global constructors keyed to getUser(unsigned int)+0x30ac
086870fc +0x10e:  mov    0x8(%ebp),%eax
086870ff +0x111:  mov    %eax,0x4(%esp)
08687103 +0x115:  mov    -0x1c(%ebp),%eax
08687106 +0x118:  mov    %eax,(%esp)
08687109 +0x11b:  call   08297c14 <_ZN12CGameManager13CheckOutTradeEP5CUser>  ; CGameManager::CheckOutTrade(CUser*)
0868710e +0x120:  movl   $0x0,0x8(%esp)
08687116 +0x128:  mov    0x8(%ebp),%eax
08687119 +0x12b:  mov    %eax,0x4(%esp)
0868711d +0x12f:  mov    -0x1c(%ebp),%eax
08687120 +0x132:  mov    %eax,(%esp)
08687123 +0x135:  call   08297c76 <_ZN12CGameManager13CheckOutPartyEP5CUserb>  ; CGameManager::CheckOutParty(CUser*, bool)
08687128 +0x13a:  movl   $0x0,0x8(%esp)
08687130 +0x142:  mov    0x8(%ebp),%eax
08687133 +0x145:  mov    %eax,0x4(%esp)
08687137 +0x149:  mov    -0x1c(%ebp),%eax
0868713a +0x14c:  mov    %eax,(%esp)
0868713d +0x14f:  call   08297eaa <_ZN12CGameManager11CheckOutPvpEP5CUserb>  ; CGameManager::CheckOutPvp(CUser*, bool)
08687142 +0x154:  mov    0x8(%ebp),%eax
08687145 +0x157:  mov    %eax,0x4(%esp)
08687149 +0x15b:  mov    -0x1c(%ebp),%eax
0868714c +0x15e:  mov    %eax,(%esp)
0868714f +0x161:  call   08297df8 <_ZN12CGameManager15CheckOutWarRoomEP5CUser>  ; CGameManager::CheckOutWarRoom(CUser*)
08687154 +0x166:  mov    0x8(%ebp),%eax
08687157 +0x169:  mov    %eax,0x4(%esp)
0868715b +0x16d:  mov    -0x1c(%ebp),%eax
0868715e +0x170:  mov    %eax,(%esp)
08687161 +0x173:  call   0829844a <_ZN12CGameManager18checkOutBlueMarbleEP5CUser>  ; CGameManager::checkOutBlueMarble(CUser*)
08687166 +0x178:  call   085c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>  ; private_store::GetInstancePrivateStoreMgr()
0868716b +0x17d:  mov    (%eax),%edx
0868716d +0x17f:  mov    (%edx),%ecx
0868716f +0x181:  mov    0x8(%ebp),%edx
08687172 +0x184:  mov    %edx,0x4(%esp)
08687176 +0x188:  mov    %eax,(%esp)
08687179 +0x18b:  call   *%ecx
0868717b +0x18d:  call   082350a0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa74a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa74a
08687180 +0x192:  movl   $0x1,0x8(%esp)
08687188 +0x19a:  mov    0x8(%ebp),%edx
0868718b +0x19d:  mov    %edx,0x4(%esp)
0868718f +0x1a1:  mov    %eax,(%esp)
08687192 +0x1a4:  call   082ef176 <_ZN11pvp_assault11CAssaultMgr19OnLeaveAssaultPlaceEP5CUserb>  ; pvp_assault::CAssaultMgr::OnLeaveAssaultPlace(CUser*, bool)
08687197 +0x1a9:  mov    &_ZN10GlobalData14s_ExpertJobMgrE,%eax
0868719c +0x1ae:  mov    0x8(%ebp),%edx
0868719f +0x1b1:  mov    %edx,0x4(%esp)
086871a3 +0x1b5:  mov    %eax,(%esp)
086871a6 +0x1b8:  call   0849e214 <_ZN10expert_job13CExpertJobMgr11OnLeaveUserEP5CUser>  ; expert_job::CExpertJobMgr::OnLeaveUser(CUser*)
086871ab +0x1bd:  mov    0x8(%ebp),%eax
086871ae +0x1c0:  mov    %eax,(%esp)
086871b1 +0x1c3:  call   08645538 <_ZN15CUserCharacInfo17GetCharacPlayTickEv>  ; CUserCharacInfo::GetCharacPlayTick()
086871b6 +0x1c8:  mov    %eax,%ebx
086871b8 +0x1ca:  movl   $0xffffffff,0x4(%esp)
086871c0 +0x1d2:  mov    0x8(%ebp),%eax
086871c3 +0x1d5:  mov    %eax,(%esp)
086871c6 +0x1d8:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
086871cb +0x1dd:  mov    %ebx,0x4(%esp)
086871cf +0x1e1:  mov    %eax,(%esp)
086871d2 +0x1e4:  call   0843f7ee <_ZN23DB_UpdateCharacPlayTime11makeRequestEil>  ; DB_UpdateCharacPlayTime::makeRequest(int, long)
086871d7 +0x1e9:  mov    &_ZN10GlobalData26s_onlinePreliminaryTeamMgrE,%eax
086871dc +0x1ee:  mov    0x8(%ebp),%edx
086871df +0x1f1:  mov    %edx,0x4(%esp)
086871e3 +0x1f5:  mov    %eax,(%esp)
086871e6 +0x1f8:  call   08588ae8 <_ZN18online_preliminary25COnlinePreliminaryTeamMgr11OnLeaveUserEP5CUser>  ; online_preliminary::COnlinePreliminaryTeamMgr::OnLeaveUser(CUser*)
086871eb +0x1fd:  mov    0x8(%ebp),%eax
086871ee +0x200:  mov    %eax,(%esp)
086871f1 +0x203:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
086871f6 +0x208:  mov    %eax,-0x18(%ebp)
086871f9 +0x20b:  mov    0x8(%ebp),%eax
086871fc +0x20e:  mov    %eax,(%esp)
086871ff +0x211:  call   084ec216 <_GLOBAL__I__Z7getUserj+0x31c8>  ; global constructors keyed to getUser(unsigned int)+0x31c8
08687204 +0x216:  mov    %al,-0x12(%ebp)
08687207 +0x219:  mov    0x8(%ebp),%eax
0868720a +0x21c:  mov    %eax,(%esp)
0868720d +0x21f:  call   0822f78a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4e34>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4e34
08687212 +0x224:  mov    %al,-0x11(%ebp)
08687215 +0x227:  mov    0x8(%ebp),%eax
08687218 +0x22a:  mov    %eax,(%esp)
0868721b +0x22d:  call   08696976 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x31cb>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x31cb
08687220 +0x232:  test   %al,%al
08687222 +0x234:  je     0868723f <+0x251>
08687224 +0x236:  movzbl -0x11(%ebp),%edx
08687228 +0x23a:  movzbl -0x12(%ebp),%eax
0868722c +0x23e:  mov    %edx,0x8(%esp)
08687230 +0x242:  mov    %eax,0x4(%esp)
08687234 +0x246:  mov    -0x18(%ebp),%eax
08687237 +0x249:  mov    %eax,(%esp)
0868723a +0x24c:  call   0843f232 <_ZN20DB_UpdateRevengeData11makeRequestEjhh>  ; DB_UpdateRevengeData::makeRequest(unsigned int, unsigned char, unsigned char)
0868723f +0x251:  mov    0x8(%ebp),%eax
08687242 +0x254:  mov    %eax,(%esp)
08687245 +0x257:  call   08689494 <_ZNK5CUser17DBUpdateDBLogItemEv>  ; CUser::DBUpdateDBLogItem() const
0868724a +0x25c:  mov    0x8(%ebp),%eax
0868724d +0x25f:  mov    %eax,(%esp)
08687250 +0x262:  call   08697262 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3ab7>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3ab7
08687255 +0x267:  mov    0x8(%ebp),%eax
08687258 +0x26a:  mov    %eax,(%esp)
0868725b +0x26d:  call   08653270 <_ZN5CUser10UpdateDataEv>  ; CUser::UpdateData()
08687260 +0x272:  movl   $0x1,0x4(%esp)
08687268 +0x27a:  mov    0x8(%ebp),%eax
0868726b +0x27d:  mov    %eax,(%esp)
0868726e +0x280:  call   0864cb66 <_ZN5CUser21LogoutCachedCharacterEh>  ; CUser::LogoutCachedCharacter(unsigned char)
08687273 +0x285:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08687278 +0x28a:  mov    0x8(%ebp),%edx
0868727b +0x28d:  mov    %edx,0x4(%esp)
0868727f +0x291:  mov    %eax,(%esp)
08687282 +0x294:  call   086c5288 <_ZN9GameWorld16leave_game_worldEP5CUser>  ; GameWorld::leave_game_world(CUser*)
08687287 +0x299:  mov    0x8(%ebp),%eax
0868728a +0x29c:  mov    %eax,(%esp)
0868728d +0x29f:  call   0869724a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3a9f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3a9f
08687292 +0x2a4:  lea    -0x1d(%ebp),%eax
08687295 +0x2a7:  mov    %eax,(%esp)
08687298 +0x2aa:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
0868729d +0x2af:  lea    -0x1d(%ebp),%eax
086872a0 +0x2b2:  mov    %eax,0x8(%esp)
086872a4 +0x2b6:  movl   $"Arad_EventPeriodDataManager",0x4(%esp)
086872ac +0x2be:  lea    -0x24(%ebp),%eax
086872af +0x2c1:  mov    %eax,(%esp)
086872b2 +0x2c4:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
086872b7 +0x2c9:  call   08197efa <_GLOBAL__I__ZN4ARAD16CheckAccountItemEP5CUserjRN17PurchaseLimitItem4InfoE+0x105>  ; global constructors keyed to ARAD::CheckAccountItem(CUser*, unsigned int, PurchaseLimitItem::Info&)+0x105
086872bc +0x2ce:  lea    -0x24(%ebp),%edx
086872bf +0x2d1:  mov    %edx,0x4(%esp)
086872c3 +0x2d5:  mov    %eax,(%esp)
086872c6 +0x2d8:  call   081882ac <_ZN4ARAD16Arad_DataManager14findGameScriptESs>  ; ARAD::Arad_DataManager::findGameScript(std::basic_string<char, std::char_traits<char>, std::allocator<char> >)
086872cb +0x2dd:  mov    0x8(%ebp),%edx
086872ce +0x2e0:  mov    %edx,0x4(%esp)
086872d2 +0x2e4:  mov    %eax,(%esp)
086872d5 +0x2e7:  call   08195b06 <_ZN4ARAD27Arad_EventPeriodDataManager17delUserRewardDataEP5CUser>  ; ARAD::Arad_EventPeriodDataManager::delUserRewardData(CUser*)
086872da +0x2ec:  jmp    086872f1 <+0x303>
086872dc +0x2ee:  mov    %edx,%ebx
086872de +0x2f0:  mov    %eax,%esi
086872e0 +0x2f2:  lea    -0x24(%ebp),%eax
086872e3 +0x2f5:  mov    %eax,(%esp)
086872e6 +0x2f8:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086872eb +0x2fd:  mov    %esi,%eax
086872ed +0x2ff:  mov    %ebx,%edx
086872ef +0x301:  jmp    086872fe <+0x310>
086872f1 +0x303:  lea    -0x24(%ebp),%eax
086872f4 +0x306:  mov    %eax,(%esp)
086872f7 +0x309:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086872fc +0x30e:  jmp    08687319 <+0x32b>
086872fe +0x310:  mov    %edx,%ebx
08687300 +0x312:  mov    %eax,%esi
08687302 +0x314:  lea    -0x1d(%ebp),%eax
08687305 +0x317:  mov    %eax,(%esp)
08687308 +0x31a:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0868730d +0x31f:  mov    %esi,%eax
0868730f +0x321:  mov    %ebx,%edx
08687311 +0x323:  mov    %eax,(%esp)
08687314 +0x326:  call   08ae3750 <_Unwind_Resume>
08687319 +0x32b:  lea    -0x1d(%ebp),%eax
0868731c +0x32e:  mov    %eax,(%esp)
0868731f +0x331:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08687324 +0x336:  mov    0x8(%ebp),%eax
08687327 +0x339:  mov    %eax,(%esp)
0868732a +0x33c:  call   0865851c <_ZN5CUser14ResetCurCharacEv>  ; CUser::ResetCurCharac()
0868732f +0x341:  mov    0x8(%ebp),%eax
08687332 +0x344:  mov    %eax,(%esp)
08687335 +0x347:  call   0864e1f2 <_ZN15CUserCharacInfo14resetSaveFlagsEv>  ; CUserCharacInfo::resetSaveFlags()
0868733a +0x34c:  movl   $0x2,0x4(%esp)
08687342 +0x354:  mov    0x8(%ebp),%eax
08687345 +0x357:  mov    %eax,(%esp)
08687348 +0x35a:  call   0867edb2 <_ZN5CUser9set_stateE8ch_state>  ; CUser::set_state(ch_state)
0868734d +0x35f:  mov    0x8(%ebp),%eax
08687350 +0x362:  mov    %eax,(%esp)
08687353 +0x365:  call   08652c8e <_ZN5CUser22doLinkCharacDisconnectEv>  ; CUser::doLinkCharacDisconnect()
08687358 +0x36a:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0868735d +0x36f:  mov    0x8(%ebp),%edx
08687360 +0x372:  mov    %edx,0x4(%esp)
08687364 +0x376:  mov    %eax,(%esp)
08687367 +0x379:  call   086cf59c <_ZN9GameWorld15InsertLoginUserEP5CUser>  ; GameWorld::InsertLoginUser(CUser*)
0868736c +0x37e:  mov    0x8(%ebp),%eax
0868736f +0x381:  add    $0x79794,%eax
08687374 +0x386:  mov    %eax,(%esp)
08687377 +0x389:  call   0822d472 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2b1c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2b1c
0868737c +0x38e:  mov    0x8(%ebp),%eax
0868737f +0x391:  add    $0x858d4,%eax
08687384 +0x396:  mov    %eax,(%esp)
08687387 +0x399:  call   086ab894 <_ZN9UserQuest5resetEv>  ; UserQuest::reset()
0868738c +0x39e:  movl   $0x0,(%esp)
08687393 +0x3a5:  call   0807d750 <_init+0x48>
08687398 +0x3aa:  mov    %eax,%ebx
0868739a +0x3ac:  mov    0x8(%ebp),%eax
0868739d +0x3af:  mov    %eax,(%esp)
086873a0 +0x3b2:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
086873a5 +0x3b7:  mov    %ebx,0x4(%esp)
086873a9 +0x3bb:  mov    %eax,(%esp)
086873ac +0x3be:  call   084ebe20 <_GLOBAL__I__Z7getUserj+0x2dd2>  ; global constructors keyed to getUser(unsigned int)+0x2dd2
086873b1 +0x3c3:  mov    0x8(%ebp),%eax
086873b4 +0x3c6:  mov    %eax,(%esp)
086873b7 +0x3c9:  call   080e0da4 <_ZN19CerashopAddRestrict7Manager20ClearBuyRestrictItemEP5CUser>  ; CerashopAddRestrict::Manager::ClearBuyRestrictItem(CUser*)
086873bc +0x3ce:  mov    0x8(%ebp),%eax
086873bf +0x3d1:  mov    %eax,(%esp)
086873c2 +0x3d4:  call   086af96e <_ZN8WongWork14CHandlePremium23handleReturn2CharacViewEP5CUser>  ; WongWork::CHandlePremium::handleReturn2CharacView(CUser*)
086873c7 +0x3d9:  cmpb   $0x0,-0x3c(%ebp)
086873cb +0x3dd:  je     08687457 <+0x469>
086873d1 +0x3e3:  lea    -0x30(%ebp),%eax
086873d4 +0x3e6:  mov    %eax,(%esp)
086873d7 +0x3e9:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086873dc +0x3ee:  movl   $0x7,0x8(%esp)
086873e4 +0x3f6:  movl   $0x1,0x4(%esp)
086873ec +0x3fe:  lea    -0x30(%ebp),%eax
086873ef +0x401:  mov    %eax,(%esp)
086873f2 +0x404:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086873f7 +0x409:  movl   $0x1,0x4(%esp)
086873ff +0x411:  lea    -0x30(%ebp),%eax
08687402 +0x414:  mov    %eax,(%esp)
08687405 +0x417:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0868740a +0x41c:  movl   $0x1,0x4(%esp)
08687412 +0x424:  lea    -0x30(%ebp),%eax
08687415 +0x427:  mov    %eax,(%esp)
08687418 +0x42a:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0868741d +0x42f:  lea    -0x30(%ebp),%eax
08687420 +0x432:  mov    %eax,0x4(%esp)
08687424 +0x436:  mov    0x8(%ebp),%eax
08687427 +0x439:  mov    %eax,(%esp)
0868742a +0x43c:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0868742f +0x441:  jmp    0868744c <+0x45e>
08687431 +0x443:  mov    %edx,%ebx
08687433 +0x445:  mov    %eax,%esi
08687435 +0x447:  lea    -0x30(%ebp),%eax
08687438 +0x44a:  mov    %eax,(%esp)
0868743b +0x44d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08687440 +0x452:  mov    %esi,%eax
08687442 +0x454:  mov    %ebx,%edx
08687444 +0x456:  mov    %eax,(%esp)
08687447 +0x459:  call   08ae3750 <_Unwind_Resume>
0868744c +0x45e:  lea    -0x30(%ebp),%eax
0868744f +0x461:  mov    %eax,(%esp)
08687452 +0x464:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08687457 +0x469:  add    $0x60,%esp
0868745a +0x46c:  pop    %ebx
0868745b +0x46d:  pop    %esi
0868745c +0x46e:  pop    %ebp
0868745d +0x46f:  ret
```

## 反编译 C

```c
// CUser::ReturnToSelectCharacList @ 0x8686fee

/* CUser::ReturnToSelectCharacList(bool) */

void __thiscall CUser::ReturnToSelectCharacList(CUser *this,bool param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  CMonitorServerProxy *this_00;
  undefined4 *puVar6;
  CAssaultMgr *this_01;
  long lVar7;
  GameWorld *pGVar8;
  Arad_DataManager *this_02;
  Arad_EventPeriodDataManager *this_03;
  time_t tVar9;
  CPad *this_04;
  PacketGuard local_34 [12];
  string local_28 [7];
  allocator<char> local_21;
  CGameManager *local_20;
  uint local_1c;
  uchar local_16;
  uchar local_15;
  int local_14;
  int local_10;
  
  UpdateCurCharacVisibleToCharacViewMemory(this);
  WorkPerFiveMin(this);
  iVar3 = CUserCharacInfo::get_charac_memberkey((CUserCharacInfo *)this);
  if (iVar3 != 0) {
    local_14 = CUserCharacInfo::get_member_pay_tex_money_to_upper((CUserCharacInfo *)this);
    local_10 = CUserCharacInfo::get_member_pay_tex_fatigue_to_upper((CUserCharacInfo *)this);
    uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
    bVar1 = (bool)CUserCharacInfo::is_connect_upper_member((CUserCharacInfo *)this);
    uVar5 = GetServerGroup(this);
    this_00 = (CMonitorServerProxy *)
              CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                        (GlobalData::s_monitor_proxy_mgr,uVar5);
    CMonitorServerProxy::SendMemberPayTax(this_00,bVar1,uVar4,local_14,local_10);
    if (0 < local_14) {
      CUserCharacInfo::set_member_pay_tex_money_to_upper((CUserCharacInfo *)this,0);
    }
    if (0 < local_10) {
      CUserCharacInfo::set_member_pay_tex_fatigue_to_upper((CUserCharacInfo *)this,0);
    }
  }
  local_20 = (CGameManager *)G_CGameManager();
  CUserCharacInfo::set_uppermember_exp_level((CUserCharacInfo *)this,'\0');
  CUserCharacInfo::set_connect_upper_member((CUserCharacInfo *)this,0);
  CGameManager::CheckOutTrade(local_20,this);
  CGameManager::CheckOutParty((CUser *)local_20,SUB41(this,0));
  CGameManager::CheckOutPvp(local_20,this,false);
  CGameManager::CheckOutWarRoom(local_20,this);
  CGameManager::checkOutBlueMarble(local_20,this);
  puVar6 = (undefined4 *)private_store::GetInstancePrivateStoreMgr();
  (**(code **)*puVar6)(puVar6,this);
  this_01 = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
  pvp_assault::CAssaultMgr::OnLeaveAssaultPlace(this_01,this,true);
  expert_job::CExpertJobMgr::OnLeaveUser(GlobalData::s_ExpertJobMgr,this);
  lVar7 = CUserCharacInfo::GetCharacPlayTick((CUserCharacInfo *)this);
  iVar3 = get_charac_no(this,-1);
  DB_UpdateCharacPlayTime::makeRequest(iVar3,lVar7);
  online_preliminary::COnlinePreliminaryTeamMgr::OnLeaveUser
            (GlobalData::s_onlinePreliminaryTeamMgr,this);
  local_1c = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
  local_16 = CUserCharacInfo::GetCurVillageAttackCount((CUserCharacInfo *)this);
  local_15 = CUserCharacInfo::GetCurRevengeDungeonCount((CUserCharacInfo *)this);
  cVar2 = CUserCharacInfo::IsVillageAttackDBUpdate((CUserCharacInfo *)this);
  if (cVar2 != '\0') {
    DB_UpdateRevengeData::makeRequest(local_1c,local_16,local_15);
  }
  DBUpdateDBLogItem(this);
  ResetDBLogItem(this);
  UpdateData(this);
  LogoutCachedCharacter(this,'\x01');
  pGVar8 = (GameWorld *)G_GameWorld();
  GameWorld::leave_game_world(pGVar8,this);
  ResetCharacExpandData(this);
  std::allocator<char>::allocator();
                    /* try { // try from 086872b2 to 086872b6 has its CatchHandler @ 086872fe */
  std::string::string(local_28,"Arad_EventPeriodDataManager",(allocator *)&local_21);
                    /* try { // try from 086872b7 to 086872d9 has its CatchHandler @ 086872dc */
  this_02 = (Arad_DataManager *)ARAD::Singleton<ARAD::Arad_DataManager>::Get();
  this_03 = (Arad_EventPeriodDataManager *)
            ARAD::Arad_DataManager::findGameScript(this_02,(string)local_28);
  ARAD::Arad_EventPeriodDataManager::delUserRewardData(this_03,this);
                    /* try { // try from 086872f7 to 086872fb has its CatchHandler @ 086872fe */
  std::string::~string(local_28);
  std::allocator<char>::~allocator(&local_21);
  ResetCurCharac(this);
  CUserCharacInfo::resetSaveFlags((CUserCharacInfo *)this);
  set_state(this,2);
  doLinkCharacDisconnect(this);
  pGVar8 = (GameWorld *)G_GameWorld();
  GameWorld::InsertLoginUser(pGVar8,this);
  InventoryMemory::reset((InventoryMemory *)(this + 0x79794));
  UserQuest::reset((UserQuest *)(this + 0x858d4));
  tVar9 = time((time_t *)0x0);
  this_04 = (CPad *)getPad(this);
  Sanicova::CPad::setCheckTime(this_04,tVar9);
  CerashopAddRestrict::Manager::ClearBuyRestrictItem(this);
  WongWork::CHandlePremium::handleReturn2CharacView(this);
  if (param_1) {
    PacketGuard::PacketGuard(local_34);
                    /* try { // try from 086873f2 to 0868742e has its CatchHandler @ 08687431 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,1,7);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,1);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
    Send(this,local_34);
    PacketGuard::~PacketGuard(local_34);
  }
  return;
}
```
