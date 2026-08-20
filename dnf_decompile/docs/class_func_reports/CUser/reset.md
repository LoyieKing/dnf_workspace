# reset

`_ZN5CUser5resetEv`

`CUser::reset()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08658030` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08658030  _ZN5CUser5resetEv
#           CUser::reset()
# range [0x08658030, 0x0865851b]
08658030 +0x000:  push   %ebp
08658031 +0x001:  mov    %esp,%ebp
08658033 +0x003:  push   %ebx
08658034 +0x004:  sub    $0x24,%esp
08658037 +0x007:  mov    0x8(%ebp),%eax
0865803a +0x00a:  mov    %eax,(%esp)
0865803d +0x00d:  call   0865851c <_ZN5CUser14ResetCurCharacEv>  ; CUser::ResetCurCharac()
08658042 +0x012:  mov    0x8(%ebp),%eax
08658045 +0x015:  movb   $0x0,0x796cc(%eax)
0865804c +0x01c:  mov    0x8(%ebp),%eax
0865804f +0x01f:  movl   $0x0,0x796d0(%eax)
08658059 +0x029:  mov    0x8(%ebp),%eax
0865805c +0x02c:  movl   $0x0,0x8cf00(%eax)
08658066 +0x036:  mov    0x8(%ebp),%eax
08658069 +0x039:  movb   $0x0,0x8ead8(%eax)
08658070 +0x040:  mov    0x8(%ebp),%eax
08658073 +0x043:  add    $0x7121c,%eax
08658078 +0x048:  mov    %eax,(%esp)
0865807b +0x04b:  call   086ad9e8 <_ZN8WongWork12CUserPremium11InitPremiumEv>  ; WongWork::CUserPremium::InitPremium()
08658080 +0x050:  mov    0x8(%ebp),%eax
08658083 +0x053:  add    $0x796e8,%eax
08658088 +0x058:  mov    %eax,(%esp)
0865808b +0x05b:  call   0869ac9c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x74f1>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x74f1
08658090 +0x060:  mov    0x8(%ebp),%eax
08658093 +0x063:  add    $0x796e8,%eax
08658098 +0x068:  movl   $0x8,0x4(%esp)
086580a0 +0x070:  mov    %eax,(%esp)
086580a3 +0x073:  call   0869acb8 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x750d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x750d
086580a8 +0x078:  mov    0x8(%ebp),%eax
086580ab +0x07b:  movb   $0x0,0x8d0df(%eax)
086580b2 +0x082:  mov    0x8(%ebp),%eax
086580b5 +0x085:  add    $0x796f4,%eax
086580ba +0x08a:  mov    %eax,(%esp)
086580bd +0x08d:  call   08697018 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x386d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x386d
086580c2 +0x092:  mov    0x8(%ebp),%eax
086580c5 +0x095:  add    $0x71bac,%eax
086580ca +0x09a:  mov    %eax,(%esp)
086580cd +0x09d:  call   080f81a6 <_ZN8WongWork13CHackAnalyzer13resetHackInfoEv>  ; WongWork::CHackAnalyzer::resetHackInfo()
086580d2 +0x0a2:  movl   $0x65,-0xc(%ebp)
086580d9 +0x0a9:  jmp    086580f9 <+0xc9>
086580db +0x0ab:  mov    -0xc(%ebp),%ebx
086580de +0x0ae:  mov    0x8(%ebp),%eax
086580e1 +0x0b1:  mov    %eax,(%esp)
086580e4 +0x0b4:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
086580e9 +0x0b9:  mov    %ebx,0x4(%esp)
086580ed +0x0bd:  mov    %eax,(%esp)
086580f0 +0x0c0:  call   086950b6 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x190b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x190b
086580f5 +0x0c5:  addl   $0x1,-0xc(%ebp)
086580f9 +0x0c9:  cmpl   $0xfa0,-0xc(%ebp)
08658100 +0x0d0:  setle  %al
08658103 +0x0d3:  test   %al,%al
08658105 +0x0d5:  jne    086580db <+0xab>
08658107 +0x0d7:  mov    0x8(%ebp),%eax
0865810a +0x0da:  add    $0x795e8,%eax
0865810f +0x0df:  mov    %eax,(%esp)
08658112 +0x0e2:  call   08278ab4 <_ZN19Secu_AccountHacking9resetInfoEv>  ; Secu_AccountHacking::resetInfo()
08658117 +0x0e7:  mov    0x8(%ebp),%eax
0865811a +0x0ea:  mov    0x71b98(%eax),%eax
08658120 +0x0f0:  test   %eax,%eax
08658122 +0x0f2:  je     08658142 <+0x112>
08658124 +0x0f4:  mov    0x8(%ebp),%eax
08658127 +0x0f7:  mov    0x71b98(%eax),%eax
0865812d +0x0fd:  mov    %eax,(%esp)
08658130 +0x100:  call   0869786a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x40bf>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x40bf
08658135 +0x105:  mov    0x8(%ebp),%eax
08658138 +0x108:  movl   $0x0,0x71b98(%eax)
08658142 +0x112:  mov    0x8(%ebp),%eax
08658145 +0x115:  add    $0x711ec,%eax
0865814a +0x11a:  mov    %eax,(%esp)
0865814d +0x11d:  call   082357b8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xae62>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xae62
08658152 +0x122:  mov    0x8(%ebp),%eax
08658155 +0x125:  mov    %eax,(%esp)
08658158 +0x128:  call   0864592a <_ZN15CUserCharacInfo15InitFinishPointEv>  ; CUserCharacInfo::InitFinishPoint()
0865815d +0x12d:  movl   $0x0,0x4(%esp)
08658165 +0x135:  mov    0x8(%ebp),%eax
08658168 +0x138:  mov    %eax,(%esp)
0865816b +0x13b:  call   085dfa64 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x2eb>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x2eb
08658170 +0x140:  mov    0x8(%ebp),%eax
08658173 +0x143:  add    $0x8d020,%eax
08658178 +0x148:  movl   $0xbd,0x8(%esp)
08658180 +0x150:  movl   $0x0,0x4(%esp)
08658188 +0x158:  mov    %eax,(%esp)
0865818b +0x15b:  call   0807dcc0 <_init+0x5b8>
08658190 +0x160:  mov    0x8(%ebp),%eax
08658193 +0x163:  add    $0x8d0dd,%eax
08658198 +0x168:  movl   $0x1,0x8(%esp)
086581a0 +0x170:  movl   $0x0,0x4(%esp)
086581a8 +0x178:  mov    %eax,(%esp)
086581ab +0x17b:  call   0807dcc0 <_init+0x5b8>
086581b0 +0x180:  mov    0x8(%ebp),%eax
086581b3 +0x183:  movb   $0x0,0x8d0de(%eax)
086581ba +0x18a:  mov    0x8(%ebp),%eax
086581bd +0x18d:  add    $0x795fc,%eax
086581c2 +0x192:  mov    %eax,(%esp)
086581c5 +0x195:  call   08575e74 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x38>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x38
086581ca +0x19a:  mov    0x8(%ebp),%eax
086581cd +0x19d:  movl   $0x0,0x4(%esp)
086581d5 +0x1a5:  mov    %eax,(%esp)
086581d8 +0x1a8:  call   084ec02e <_GLOBAL__I__Z7getUserj+0x2fe0>  ; global constructors keyed to getUser(unsigned int)+0x2fe0
086581dd +0x1ad:  mov    0x8(%ebp),%eax
086581e0 +0x1b0:  movl   $0x0,0x4(%esp)
086581e8 +0x1b8:  mov    %eax,(%esp)
086581eb +0x1bb:  call   084ec04a <_GLOBAL__I__Z7getUserj+0x2ffc>  ; global constructors keyed to getUser(unsigned int)+0x2ffc
086581f0 +0x1c0:  mov    0x8(%ebp),%eax
086581f3 +0x1c3:  movl   $0x0,0x4(%esp)
086581fb +0x1cb:  mov    %eax,(%esp)
086581fe +0x1ce:  call   084ebfe6 <_GLOBAL__I__Z7getUserj+0x2f98>  ; global constructors keyed to getUser(unsigned int)+0x2f98
08658203 +0x1d3:  mov    0x8(%ebp),%eax
08658206 +0x1d6:  add    $0x8cef4,%eax
0865820b +0x1db:  mov    %eax,(%esp)
0865820e +0x1de:  call   08557bb2 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x713>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x713
08658213 +0x1e3:  mov    0x8(%ebp),%eax
08658216 +0x1e6:  movb   $0x0,0x8d0f0(%eax)
0865821d +0x1ed:  mov    0x8(%ebp),%eax
08658220 +0x1f0:  movb   $0x0,0x8d0f1(%eax)
08658227 +0x1f7:  mov    0x8(%ebp),%eax
0865822a +0x1fa:  movb   $0x0,0x8d0f2(%eax)
08658231 +0x201:  mov    0x8(%ebp),%eax
08658234 +0x204:  movb   $0x0,0x8e074(%eax)
0865823b +0x20b:  mov    0x8(%ebp),%eax
0865823e +0x20e:  add    $0x8e034,%eax
08658243 +0x213:  mov    %eax,(%esp)
08658246 +0x216:  call   08486640 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x7a>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x7a
0865824b +0x21b:  mov    0x8(%ebp),%eax
0865824e +0x21e:  movl   $0x0,0x8d0f8(%eax)
08658258 +0x228:  mov    0x8(%ebp),%eax
0865825b +0x22b:  movl   $0x0,0x8d0f4(%eax)
08658265 +0x235:  mov    0x8(%ebp),%eax
08658268 +0x238:  add    $0x8d1a8,%eax
0865826d +0x23d:  mov    %eax,(%esp)
08658270 +0x240:  call   086454d8 <_ZN5CUser5._3795resetEv>  ; CUser::._379::reset()
08658275 +0x245:  movl   $0xffffffff,0x4(%esp)
0865827d +0x24d:  mov    0x8(%ebp),%eax
08658280 +0x250:  mov    %eax,(%esp)
08658283 +0x253:  call   084ec87a <_GLOBAL__I__Z7getUserj+0x382c>  ; global constructors keyed to getUser(unsigned int)+0x382c
08658288 +0x258:  movl   $0x0,0x4(%esp)
08658290 +0x260:  mov    0x8(%ebp),%eax
08658293 +0x263:  mov    %eax,(%esp)
08658296 +0x266:  call   084ec89a <_GLOBAL__I__Z7getUserj+0x384c>  ; global constructors keyed to getUser(unsigned int)+0x384c
0865829b +0x26b:  mov    0x8(%ebp),%eax
0865829e +0x26e:  add    $0x8cf64,%eax
086582a3 +0x273:  mov    %eax,(%esp)
086582a6 +0x276:  call   0869704e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x38a3>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x38a3
086582ab +0x27b:  mov    0x8(%ebp),%eax
086582ae +0x27e:  movb   $0x0,0x79640(%eax)
086582b5 +0x285:  mov    0x8(%ebp),%eax
086582b8 +0x288:  mov    $0x0,%edx
086582bd +0x28d:  mov    %edx,0x8e078(%eax)
086582c3 +0x293:  mov    0x8(%ebp),%eax
086582c6 +0x296:  movl   $0xffffffff,0x8cfc0(%eax)
086582d0 +0x2a0:  mov    0x8(%ebp),%eax
086582d3 +0x2a3:  movw   $0x0,0x79642(%eax)
086582dc +0x2ac:  mov    0x8(%ebp),%eax
086582df +0x2af:  add    $0x8d0e4,%eax
086582e4 +0x2b4:  mov    %eax,(%esp)
086582e7 +0x2b7:  call   08147be2 <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0xd5>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0xd5
086582ec +0x2bc:  mov    0x8(%ebp),%eax
086582ef +0x2bf:  add    $0x79744,%eax
086582f4 +0x2c4:  mov    %eax,(%esp)
086582f7 +0x2c7:  call   0832ad78 <_ZN13charac_expand8CDataMgr5resetEv>  ; charac_expand::CDataMgr::reset()
086582fc +0x2cc:  mov    0x8(%ebp),%eax
086582ff +0x2cf:  movb   $0x0,0x71ba8(%eax)
08658306 +0x2d6:  mov    0x8(%ebp),%eax
08658309 +0x2d9:  add    $0x8cf68,%eax
0865830e +0x2de:  mov    %eax,(%esp)
08658311 +0x2e1:  call   0869ade4 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7639>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7639
08658316 +0x2e6:  mov    0x8(%ebp),%eax
08658319 +0x2e9:  movb   $0x0,0x8cef0(%eax)
08658320 +0x2f0:  mov    0x8(%ebp),%eax
08658323 +0x2f3:  movl   $0x0,0x704ac(%eax)
0865832d +0x2fd:  mov    0x8(%ebp),%eax
08658330 +0x300:  movb   $0x0,0x79655(%eax)
08658337 +0x307:  mov    0x8(%ebp),%eax
0865833a +0x30a:  add    $0x6effc,%eax
0865833f +0x30f:  mov    %eax,(%esp)
08658342 +0x312:  call   0828986c <_ZN13CAccountCargo5ClearEv>  ; CAccountCargo::Clear()
08658347 +0x317:  mov    0x8(%ebp),%eax
0865834a +0x31a:  movb   $0x0,0x7965c(%eax)
08658351 +0x321:  mov    0x8(%ebp),%eax
08658354 +0x324:  movw   $0x0,0x7965e(%eax)
0865835d +0x32d:  mov    0x8(%ebp),%eax
08658360 +0x330:  movl   $0x0,0x79660(%eax)
0865836a +0x33a:  mov    0x8(%ebp),%eax
0865836d +0x33d:  movb   $0x0,0x7966c(%eax)
08658374 +0x344:  mov    0x8(%ebp),%eax
08658377 +0x347:  add    $0x79664,%eax
0865837c +0x34c:  mov    %eax,(%esp)
0865837f +0x34f:  call   08708dd0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x29e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x29e0
08658384 +0x354:  mov    0x8(%ebp),%eax
08658387 +0x357:  add    $0x79668,%eax
0865838c +0x35c:  mov    %eax,(%esp)
0865838f +0x35f:  call   08708dd0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x29e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x29e0
08658394 +0x364:  mov    0x8(%ebp),%eax
08658397 +0x367:  movl   $0x0,0x79658(%eax)
086583a1 +0x371:  mov    0x8(%ebp),%eax
086583a4 +0x374:  movb   $0x0,0x79656(%eax)
086583ab +0x37b:  mov    0x8(%ebp),%eax
086583ae +0x37e:  mov    %eax,(%esp)
086583b1 +0x381:  call   08697516 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3d6b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3d6b
086583b6 +0x386:  mov    0x8(%ebp),%eax
086583b9 +0x389:  mov    %eax,(%esp)
086583bc +0x38c:  call   08689494 <_ZNK5CUser17DBUpdateDBLogItemEv>  ; CUser::DBUpdateDBLogItem() const
086583c1 +0x391:  mov    0x8(%ebp),%eax
086583c4 +0x394:  mov    %eax,(%esp)
086583c7 +0x397:  call   08697262 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3ab7>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3ab7
086583cc +0x39c:  mov    0x8(%ebp),%eax
086583cf +0x39f:  add    $0x8d264,%eax
086583d4 +0x3a4:  mov    %eax,(%esp)
086583d7 +0x3a7:  call   08122af4 <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x67>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x67
086583dc +0x3ac:  mov    0x8(%ebp),%eax
086583df +0x3af:  mov    %eax,(%esp)
086583e2 +0x3b2:  call   080e0da4 <_ZN19CerashopAddRestrict7Manager20ClearBuyRestrictItemEP5CUser>  ; CerashopAddRestrict::Manager::ClearBuyRestrictItem(CUser*)
086583e7 +0x3b7:  mov    0x8(%ebp),%eax
086583ea +0x3ba:  mov    %eax,(%esp)
086583ed +0x3bd:  call   0868d476 <_ZN5CUser25reset_server_fatigue_dataEv>  ; CUser::reset_server_fatigue_data()
086583f2 +0x3c2:  mov    0x8(%ebp),%eax
086583f5 +0x3c5:  mov    %eax,(%esp)
086583f8 +0x3c8:  call   0868d750 <_ZN5CUser26reset_ingame_event_historyEv>  ; CUser::reset_ingame_event_history()
086583fd +0x3cd:  mov    0x8(%ebp),%eax
08658400 +0x3d0:  mov    %eax,(%esp)
08658403 +0x3d3:  call   0868d768 <_ZN5CUser33reset_ingame_event_history_updateEv>  ; CUser::reset_ingame_event_history_update()
08658408 +0x3d8:  mov    0x8(%ebp),%eax
0865840b +0x3db:  add    $0x6ef6c,%eax
08658410 +0x3e0:  mov    %eax,(%esp)
08658413 +0x3e3:  call   0869ae00 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7655>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7655
08658418 +0x3e8:  mov    0x8(%ebp),%eax
0865841b +0x3eb:  movb   $0x0,0x6ef68(%eax)
08658422 +0x3f2:  mov    0x8(%ebp),%eax
08658425 +0x3f5:  movb   $0xff,0x6ef69(%eax)
0865842c +0x3fc:  mov    0x8(%ebp),%eax
0865842f +0x3ff:  mov    %eax,(%esp)
08658432 +0x402:  call   08697182 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x39d7>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x39d7
08658437 +0x407:  mov    0x8(%ebp),%eax
0865843a +0x40a:  movb   $0x0,0x8d251(%eax)
08658441 +0x411:  mov    0x8(%ebp),%eax
08658444 +0x414:  movb   $0x0,0x8d252(%eax)
0865844b +0x41b:  mov    0x8(%ebp),%eax
0865844e +0x41e:  movb   $0xff,0x8ec28(%eax)
08658455 +0x425:  mov    0x8(%ebp),%eax
08658458 +0x428:  movb   $0x0,0x796d8(%eax)
0865845f +0x42f:  mov    0x8(%ebp),%eax
08658462 +0x432:  add    $0x858d4,%eax
08658467 +0x437:  mov    %eax,(%esp)
0865846a +0x43a:  call   086ab894 <_ZN9UserQuest5resetEv>  ; UserQuest::reset()
0865846f +0x43f:  mov    0x8(%ebp),%eax
08658472 +0x442:  movl   $0x0,0x8ebd8(%eax)
0865847c +0x44c:  mov    0x8(%ebp),%eax
0865847f +0x44f:  mov    0x8ebd8(%eax),%edx
08658485 +0x455:  mov    0x8(%ebp),%eax
08658488 +0x458:  mov    %edx,0x8ebd4(%eax)
0865848e +0x45e:  mov    0x8(%ebp),%eax
08658491 +0x461:  mov    0x8ebd4(%eax),%edx
08658497 +0x467:  mov    0x8(%ebp),%eax
0865849a +0x46a:  mov    %edx,0x8ebd0(%eax)
086584a0 +0x470:  mov    0x8(%ebp),%eax
086584a3 +0x473:  movb   $0x1,0x6ef90(%eax)
086584aa +0x47a:  mov    0x8(%ebp),%eax
086584ad +0x47d:  movb   $0x0,0x6ef91(%eax)
086584b4 +0x484:  mov    0x8(%ebp),%eax
086584b7 +0x487:  add    $0x8ebdc,%eax
086584bc +0x48c:  mov    %eax,(%esp)
086584bf +0x48f:  call   080cbc6c <_GLOBAL__I__ZN10BingoEventC2Ev+0xab9>  ; global constructors keyed to BingoEvent::BingoEvent()+0xab9
086584c4 +0x494:  mov    0x8(%ebp),%eax
086584c7 +0x497:  add    $0x8ec04,%eax
086584cc +0x49c:  mov    %eax,(%esp)
086584cf +0x49f:  call   08387e4e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x178ee>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x178ee
086584d4 +0x4a4:  mov    0x8(%ebp),%eax
086584d7 +0x4a7:  add    $0x8ebf8,%eax
086584dc +0x4ac:  mov    %eax,(%esp)
086584df +0x4af:  call   086982b6 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x4b0b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x4b0b
086584e4 +0x4b4:  mov    0x8(%ebp),%eax
086584e7 +0x4b7:  mov    %eax,(%esp)
086584ea +0x4ba:  call   0822fc4e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x52f8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x52f8
086584ef +0x4bf:  mov    %eax,(%esp)
086584f2 +0x4c2:  call   084b7282 <_ZN11CGameOption22reset_load_hotkey_flagEv>  ; CGameOption::reset_load_hotkey_flag()
086584f7 +0x4c7:  mov    0x8(%ebp),%eax
086584fa +0x4ca:  movb   $0x0,0x6effa(%eax)
08658501 +0x4d1:  mov    0x8(%ebp),%eax
08658504 +0x4d4:  movb   $0x0,0x8ec31(%eax)
0865850b +0x4db:  mov    0x8(%ebp),%eax
0865850e +0x4de:  movb   $0x0,0x8ec32(%eax)
08658515 +0x4e5:  add    $0x24,%esp
08658518 +0x4e8:  pop    %ebx
08658519 +0x4e9:  pop    %ebp
0865851a +0x4ea:  ret
0865851b +0x4eb:  nop
```

## 反编译 C

```c
// CUser::reset @ 0x8658030

/* CUser::reset() */

void __thiscall CUser::reset(CUser *this)

{
  CHackAnalyzer *pCVar1;
  CGameOption *this_00;
  int local_10;
  
  ResetCurCharac(this);
  this[0x796cc] = (CUser)0x0;
  *(undefined4 *)(this + 0x796d0) = 0;
  *(undefined4 *)(this + 0x8cf00) = 0;
  this[0x8ead8] = (CUser)0x0;
  WongWork::CUserPremium::InitPremium((CUserPremium *)(this + 0x7121c));
  std::vector<_Charac_info,std::allocator<_Charac_info>>::clear
            ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8));
  std::vector<_Charac_info,std::allocator<_Charac_info>>::reserve
            ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),8);
  this[0x8d0df] = (CUser)0x0;
  CCharacterView::reset((CCharacterView *)(this + 0x796f4));
  WongWork::CHackAnalyzer::resetHackInfo((CHackAnalyzer *)(this + 0x71bac));
  for (local_10 = 0x65; local_10 < 0xfa1; local_10 = local_10 + 1) {
    pCVar1 = (CHackAnalyzer *)getHackAnalyzer(this);
    WongWork::CHackAnalyzer::resetServerHackAccumulatedCnt(pCVar1,local_10);
  }
  Secu_AccountHacking::resetInfo((Secu_AccountHacking *)(this + 0x795e8));
  if (*(int *)(this + 0x71b98) != 0) {
    WongWork::CMailBoxHelper::FreeMailBox(*(CMailBox **)(this + 0x71b98));
    *(undefined4 *)(this + 0x71b98) = 0;
  }
  std::list<int,std::allocator<int>>::clear((list<int,std::allocator<int>> *)(this + 0x711ec));
  CUserCharacInfo::InitFinishPoint((CUserCharacInfo *)this);
  set_guildwar_point_per_pvpplay(this,0);
  memset(this + 0x8d020,0,0xbd);
  memset(this + 0x8d0dd,0,1);
  this[0x8d0de] = (CUser)0x0;
  CodeHackCheckStorage::reset((CodeHackCheckStorage *)(this + 0x795fc));
  CUserCharacInfo::SetReliablePerson((CUserCharacInfo *)this,false);
  CUserCharacInfo::SetOverTradeGoldCount((CUserCharacInfo *)this,0);
  CUserCharacInfo::setUserEventCharacterFlag((CUserCharacInfo *)this,'\0');
  std::vector<unsigned_int,std::allocator<unsigned_int>>::clear
            ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x8cef4));
  this[0x8d0f0] = (CUser)0x0;
  this[0x8d0f1] = (CUser)0x0;
  this[0x8d0f2] = (CUser)0x0;
  this[0x8e074] = (CUser)0x0;
  PlayInfo::Reset((PlayInfo *)(this + 0x8e034));
  *(undefined4 *)(this + 0x8d0f8) = 0;
  *(undefined4 *)(this + 0x8d0f4) = 0;
  ._379::reset((__379 *)(this + 0x8d1a8));
  setAntibotKey(this,-1);
  setClientVersion(this,0);
  CDungeonGainedGold::reset((CDungeonGainedGold *)(this + 0x8cf64));
  this[0x79640] = (CUser)0x0;
  *(undefined4 *)(this + 0x8e078) = 0;
  *(undefined4 *)(this + 0x8cfc0) = 0xffffffff;
  *(undefined2 *)(this + 0x79642) = 0;
  std::
  vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
  ::clear((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
           *)(this + 0x8d0e4));
  charac_expand::CDataMgr::reset((CDataMgr *)(this + 0x79744));
  this[0x71ba8] = (CUser)0x0;
  std::vector<LimitItemUsage,std::allocator<LimitItemUsage>>::clear
            ((vector<LimitItemUsage,std::allocator<LimitItemUsage>> *)(this + 0x8cf68));
  this[0x8cef0] = (CUser)0x0;
  *(undefined4 *)(this + 0x704ac) = 0;
  this[0x79655] = (CUser)0x0;
  CAccountCargo::Clear((CAccountCargo *)(this + 0x6effc));
  this[0x7965c] = (CUser)0x0;
  *(undefined2 *)(this + 0x7965e) = 0;
  *(undefined4 *)(this + 0x79660) = 0;
  this[0x7966c] = (CUser)0x0;
  std::string::clear((string *)(this + 0x79664));
  std::string::clear((string *)(this + 0x79668));
  *(undefined4 *)(this + 0x79658) = 0;
  this[0x79656] = (CUser)0x0;
  ResetUsedCoinInDungeon(this);
  DBUpdateDBLogItem(this);
  ResetDBLogItem(this);
  APSystem::CActionPointManager::Reset((CActionPointManager *)(this + 0x8d264));
  CerashopAddRestrict::Manager::ClearBuyRestrictItem(this);
  reset_server_fatigue_data(this);
  reset_ingame_event_history(this);
  reset_ingame_event_history_update(this);
  std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>::clear
            ((vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>> *)(this + 0x6ef6c)
            );
  this[0x6ef68] = (CUser)0x0;
  this[0x6ef69] = (CUser)0xff;
  resetMoneyLog(this);
  this[0x8d251] = (CUser)0x0;
  this[0x8d252] = (CUser)0x0;
  this[0x8ec28] = (CUser)0xff;
  this[0x796d8] = (CUser)0x0;
  UserQuest::reset((UserQuest *)(this + 0x858d4));
  *(undefined4 *)(this + 0x8ebd8) = 0;
  *(undefined4 *)(this + 0x8ebd4) = *(undefined4 *)(this + 0x8ebd8);
  *(undefined4 *)(this + 0x8ebd0) = *(undefined4 *)(this + 0x8ebd4);
  this[0x6ef90] = (CUser)0x1;
  this[0x6ef91] = (CUser)0x0;
  BingoData::clear((BingoData *)(this + 0x8ebdc));
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
             (this + 0x8ec04));
  std::
  vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>
  ::clear((vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>
           *)(this + 0x8ebf8));
  this_00 = (CGameOption *)GetGameOptionRef(this);
  CGameOption::reset_load_hotkey_flag(this_00);
  this[0x6effa] = (CUser)0x0;
  this[0x8ec31] = (CUser)0x0;
  this[0x8ec32] = (CUser)0x0;
  return;
}
```
