# dispatch_sig

`_ZN15DisPatcher_Exit12dispatch_sigEP5CUserR9PacketBuf`

`DisPatcher_Exit::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_Exit` | `0x081ed948` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ed948  _ZN15DisPatcher_Exit12dispatch_sigEP5CUserR9PacketBuf
#           DisPatcher_Exit::dispatch_sig(CUser*, PacketBuf&)
# range [0x081ed948, 0x081eddeb]
081ed948 +0x000:  push   %ebp
081ed949 +0x001:  mov    %esp,%ebp
081ed94b +0x003:  push   %esi
081ed94c +0x004:  push   %ebx
081ed94d +0x005:  sub    $0x60,%esp
081ed950 +0x008:  movl   $0x0,-0x44(%ebp)
081ed957 +0x00f:  movl   $0x0,-0x40(%ebp)
081ed95e +0x016:  movl   $0x0,-0x3c(%ebp)
081ed965 +0x01d:  movl   $0x0,-0x38(%ebp)
081ed96c +0x024:  mov    0xc(%ebp),%eax
081ed96f +0x027:  lea    0xe0(%eax),%edx
081ed975 +0x02d:  movl   $0x10,0x8(%esp)
081ed97d +0x035:  lea    -0x44(%ebp),%eax
081ed980 +0x038:  mov    %eax,0x4(%esp)
081ed984 +0x03c:  mov    %edx,(%esp)
081ed987 +0x03f:  call   0816282e <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0xa9c>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0xa9c
081ed98c +0x044:  movb   $0x0,-0x45(%ebp)
081ed990 +0x048:  lea    -0x45(%ebp),%eax
081ed993 +0x04b:  mov    %eax,0x4(%esp)
081ed997 +0x04f:  mov    0x10(%ebp),%eax
081ed99a +0x052:  mov    %eax,(%esp)
081ed99d +0x055:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081ed9a2 +0x05a:  xor    $0x1,%eax
081ed9a5 +0x05d:  test   %al,%al
081ed9a7 +0x05f:  je     081ed9ad <+0x65>
081ed9a9 +0x061:  movb   $0x0,-0x45(%ebp)
081ed9ad +0x065:  cmpl   $0x0,0xc(%ebp)
081ed9b1 +0x069:  je     081ed9c9 <+0x81>
081ed9b3 +0x06b:  movzbl -0x45(%ebp),%eax
081ed9b7 +0x06f:  movzbl %al,%eax
081ed9ba +0x072:  mov    %eax,0x4(%esp)
081ed9be +0x076:  mov    0xc(%ebp),%eax
081ed9c1 +0x079:  mov    %eax,(%esp)
081ed9c4 +0x07c:  call   0822fe22 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54cc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54cc
081ed9c9 +0x081:  mov    0xc(%ebp),%eax
081ed9cc +0x084:  add    $0x8e3f0,%eax
081ed9d1 +0x089:  mov    %eax,(%esp)
081ed9d4 +0x08c:  call   0822eede <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4588>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4588
081ed9d9 +0x091:  test   %al,%al
081ed9db +0x093:  je     081eda16 <+0xce>
081ed9dd +0x095:  mov    0xc(%ebp),%eax
081ed9e0 +0x098:  mov    %eax,(%esp)
081ed9e3 +0x09b:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081ed9e8 +0x0a0:  mov    %eax,%ebx
081ed9ea +0x0a2:  mov    0xc(%ebp),%eax
081ed9ed +0x0a5:  add    $0x8e3f0,%eax
081ed9f2 +0x0aa:  mov    %eax,(%esp)
081ed9f5 +0x0ad:  call   0822eea4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x454e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x454e
081ed9fa +0x0b2:  mov    %ebx,0x4(%esp)
081ed9fe +0x0b6:  mov    %eax,(%esp)
081eda01 +0x0b9:  call   08432fe2 <_ZN20DB_SaveCleanpadPoint11makeRequestEji>  ; DB_SaveCleanpadPoint::makeRequest(unsigned int, int)
081eda06 +0x0be:  mov    0xc(%ebp),%eax
081eda09 +0x0c1:  add    $0x8e3f0,%eax
081eda0e +0x0c6:  mov    %eax,(%esp)
081eda11 +0x0c9:  call   0822eeea <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4594>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4594
081eda16 +0x0ce:  mov    0xc(%ebp),%eax
081eda19 +0x0d1:  mov    %eax,(%esp)
081eda1c +0x0d4:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081eda21 +0x0d9:  cmp    $0x2,%eax
081eda24 +0x0dc:  setg   %al
081eda27 +0x0df:  test   %al,%al
081eda29 +0x0e1:  je     081edaa4 <+0x15c>
081eda2b +0x0e3:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081eda30 +0x0e8:  mov    %eax,(%esp)
081eda33 +0x0eb:  call   0823443e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9ae8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9ae8
081eda38 +0x0f0:  test   %al,%al
081eda3a +0x0f2:  je     081edaa4 <+0x15c>
081eda3c +0x0f4:  mov    0xc(%ebp),%eax
081eda3f +0x0f7:  mov    %eax,(%esp)
081eda42 +0x0fa:  call   0822fa7c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5126>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5126
081eda47 +0x0ff:  cmp    $0x1,%al
081eda49 +0x101:  sete   %al
081eda4c +0x104:  test   %al,%al
081eda4e +0x106:  je     081edaa4 <+0x15c>
081eda50 +0x108:  movl   $0x9,0x4(%esp)
081eda58 +0x110:  mov    0xc(%ebp),%eax
081eda5b +0x113:  mov    %eax,(%esp)
081eda5e +0x116:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
081eda63 +0x11b:  mov    %eax,-0x1c(%ebp)
081eda66 +0x11e:  mov    0xc(%ebp),%eax
081eda69 +0x121:  mov    %eax,(%esp)
081eda6c +0x124:  call   0822faa0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x514a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x514a
081eda71 +0x129:  movsbl %al,%ebx
081eda74 +0x12c:  mov    0xc(%ebp),%eax
081eda77 +0x12f:  mov    %eax,(%esp)
081eda7a +0x132:  call   0822fa7c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5126>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5126
081eda7f +0x137:  movsbl %al,%eax
081eda82 +0x13a:  mov    %ebx,0x10(%esp)
081eda86 +0x13e:  mov    %eax,0xc(%esp)
081eda8a +0x142:  movl   $0x0,0x8(%esp)
081eda92 +0x14a:  mov    0xc(%ebp),%eax
081eda95 +0x14d:  mov    %eax,0x4(%esp)
081eda99 +0x151:  mov    -0x1c(%ebp),%eax
081eda9c +0x154:  mov    %eax,(%esp)
081eda9f +0x157:  call   0849943e <_ZN16CExpandEquipslot15EquipslotSwitchEP5CUserccc>  ; CExpandEquipslot::EquipslotSwitch(CUser*, char, char, char)
081edaa4 +0x15c:  lea    -0x2d(%ebp),%eax
081edaa7 +0x15f:  mov    %eax,(%esp)
081edaaa +0x162:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
081edaaf +0x167:  lea    -0x2d(%ebp),%eax
081edab2 +0x16a:  mov    %eax,0x8(%esp)
081edab6 +0x16e:  movl   $"Arad_EventPeriodDataManager",0x4(%esp)
081edabe +0x176:  lea    -0x34(%ebp),%eax
081edac1 +0x179:  mov    %eax,(%esp)
081edac4 +0x17c:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
081edac9 +0x181:  call   08197efa <_GLOBAL__I__ZN4ARAD16CheckAccountItemEP5CUserjRN17PurchaseLimitItem4InfoE+0x105>  ; global constructors keyed to ARAD::CheckAccountItem(CUser*, unsigned int, PurchaseLimitItem::Info&)+0x105
081edace +0x186:  lea    -0x34(%ebp),%edx
081edad1 +0x189:  mov    %edx,0x4(%esp)
081edad5 +0x18d:  mov    %eax,(%esp)
081edad8 +0x190:  call   081882ac <_ZN4ARAD16Arad_DataManager14findGameScriptESs>  ; ARAD::Arad_DataManager::findGameScript(std::basic_string<char, std::char_traits<char>, std::allocator<char> >)
081edadd +0x195:  mov    0xc(%ebp),%edx
081edae0 +0x198:  mov    %edx,0x4(%esp)
081edae4 +0x19c:  mov    %eax,(%esp)
081edae7 +0x19f:  call   08195b06 <_ZN4ARAD27Arad_EventPeriodDataManager17delUserRewardDataEP5CUser>  ; ARAD::Arad_EventPeriodDataManager::delUserRewardData(CUser*)
081edaec +0x1a4:  jmp    081edb03 <+0x1bb>
081edaee +0x1a6:  mov    %edx,%ebx
081edaf0 +0x1a8:  mov    %eax,%esi
081edaf2 +0x1aa:  lea    -0x34(%ebp),%eax
081edaf5 +0x1ad:  mov    %eax,(%esp)
081edaf8 +0x1b0:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081edafd +0x1b5:  mov    %esi,%eax
081edaff +0x1b7:  mov    %ebx,%edx
081edb01 +0x1b9:  jmp    081edb10 <+0x1c8>
081edb03 +0x1bb:  lea    -0x34(%ebp),%eax
081edb06 +0x1be:  mov    %eax,(%esp)
081edb09 +0x1c1:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081edb0e +0x1c6:  jmp    081edb2b <+0x1e3>
081edb10 +0x1c8:  mov    %edx,%ebx
081edb12 +0x1ca:  mov    %eax,%esi
081edb14 +0x1cc:  lea    -0x2d(%ebp),%eax
081edb17 +0x1cf:  mov    %eax,(%esp)
081edb1a +0x1d2:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
081edb1f +0x1d7:  mov    %esi,%eax
081edb21 +0x1d9:  mov    %ebx,%edx
081edb23 +0x1db:  mov    %eax,(%esp)
081edb26 +0x1de:  call   08ae3750 <_Unwind_Resume>
081edb2b +0x1e3:  lea    -0x2d(%ebp),%eax
081edb2e +0x1e6:  mov    %eax,(%esp)
081edb31 +0x1e9:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
081edb36 +0x1ee:  mov    0xc(%ebp),%eax
081edb39 +0x1f1:  mov    %eax,(%esp)
081edb3c +0x1f4:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081edb41 +0x1f9:  test   %eax,%eax
081edb43 +0x1fb:  setne  %al
081edb46 +0x1fe:  test   %al,%al
081edb48 +0x200:  je     081edddf <+0x497>
081edb4e +0x206:  mov    0xc(%ebp),%eax
081edb51 +0x209:  mov    %eax,(%esp)
081edb54 +0x20c:  call   08652f0c <_ZN5CUser14WorkPerFiveMinEv>  ; CUser::WorkPerFiveMin()
081edb59 +0x211:  mov    0xc(%ebp),%eax
081edb5c +0x214:  mov    %eax,(%esp)
081edb5f +0x217:  call   0822f5c4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4c6e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4c6e
081edb64 +0x21c:  test   %eax,%eax
081edb66 +0x21e:  setne  %al
081edb69 +0x221:  test   %al,%al
081edb6b +0x223:  je     081edc15 <+0x2cd>
081edb71 +0x229:  mov    0xc(%ebp),%eax
081edb74 +0x22c:  mov    %eax,(%esp)
081edb77 +0x22f:  call   0822f612 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4cbc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4cbc
081edb7c +0x234:  mov    %eax,-0x10(%ebp)
081edb7f +0x237:  mov    0xc(%ebp),%eax
081edb82 +0x23a:  mov    %eax,(%esp)
081edb85 +0x23d:  call   0822f652 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4cfc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4cfc
081edb8a +0x242:  mov    %eax,-0xc(%ebp)
081edb8d +0x245:  mov    0xc(%ebp),%eax
081edb90 +0x248:  mov    %eax,(%esp)
081edb93 +0x24b:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081edb98 +0x250:  mov    %eax,%ebx
081edb9a +0x252:  mov    0xc(%ebp),%eax
081edb9d +0x255:  mov    %eax,(%esp)
081edba0 +0x258:  call   0822f5e6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4c90>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4c90
081edba5 +0x25d:  movzbl %al,%esi
081edba8 +0x260:  mov    0xc(%ebp),%eax
081edbab +0x263:  mov    %eax,(%esp)
081edbae +0x266:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
081edbb3 +0x26b:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
081edbb9 +0x271:  mov    %eax,0x4(%esp)
081edbbd +0x275:  mov    %edx,(%esp)
081edbc0 +0x278:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
081edbc5 +0x27d:  mov    -0xc(%ebp),%edx
081edbc8 +0x280:  mov    %edx,0x10(%esp)
081edbcc +0x284:  mov    -0x10(%ebp),%edx
081edbcf +0x287:  mov    %edx,0xc(%esp)
081edbd3 +0x28b:  mov    %ebx,0x8(%esp)
081edbd7 +0x28f:  mov    %esi,0x4(%esp)
081edbdb +0x293:  mov    %eax,(%esp)
081edbde +0x296:  call   08470fb4 <_ZN19CMonitorServerProxy16SendMemberPayTaxEbjii>  ; CMonitorServerProxy::SendMemberPayTax(bool, unsigned int, int, int)
081edbe3 +0x29b:  cmpl   $0x0,-0x10(%ebp)
081edbe7 +0x29f:  jle    081edbfc <+0x2b4>
081edbe9 +0x2a1:  mov    0xc(%ebp),%eax
081edbec +0x2a4:  movl   $0x0,0x4(%esp)
081edbf4 +0x2ac:  mov    %eax,(%esp)
081edbf7 +0x2af:  call   0822f634 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4cde>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4cde
081edbfc +0x2b4:  cmpl   $0x0,-0xc(%ebp)
081edc00 +0x2b8:  jle    081edc15 <+0x2cd>
081edc02 +0x2ba:  mov    0xc(%ebp),%eax
081edc05 +0x2bd:  movl   $0x0,0x4(%esp)
081edc0d +0x2c5:  mov    %eax,(%esp)
081edc10 +0x2c8:  call   0822f674 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4d1e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4d1e
081edc15 +0x2cd:  mov    0xc(%ebp),%eax
081edc18 +0x2d0:  mov    %eax,(%esp)
081edc1b +0x2d3:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081edc20 +0x2d8:  movl   $0x0,0x4(%esp)
081edc28 +0x2e0:  mov    %eax,(%esp)
081edc2b +0x2e3:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
081edc30 +0x2e8:  mov    %eax,%ebx
081edc32 +0x2ea:  movl   $0x0,0xc(%esp)
081edc3a +0x2f2:  movl   $0x706d,0x8(%esp)
081edc42 +0x2fa:  movl   $&_ZZN15DisPatcher_Exit12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081edc4a +0x302:  lea    -0x2c(%ebp),%eax
081edc4d +0x305:  mov    %eax,(%esp)
081edc50 +0x308:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081edc55 +0x30d:  mov    %ebx,0x8(%esp)
081edc59 +0x311:  movl   $"[USER LOGOUT (Normal)] DB ID : %s\n",0x4(%esp)
081edc61 +0x319:  lea    -0x2c(%ebp),%eax
081edc64 +0x31c:  mov    %eax,(%esp)
081edc67 +0x31f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081edc6c +0x324:  call   085c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>  ; private_store::GetInstancePrivateStoreMgr()
081edc71 +0x329:  mov    (%eax),%edx
081edc73 +0x32b:  mov    (%edx),%ecx
081edc75 +0x32d:  mov    0xc(%ebp),%edx
081edc78 +0x330:  mov    %edx,0x4(%esp)
081edc7c +0x334:  mov    %eax,(%esp)
081edc7f +0x337:  call   *%ecx
081edc81 +0x339:  call   082350a0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa74a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa74a
081edc86 +0x33e:  movl   $0x1,0x8(%esp)
081edc8e +0x346:  mov    0xc(%ebp),%edx
081edc91 +0x349:  mov    %edx,0x4(%esp)
081edc95 +0x34d:  mov    %eax,(%esp)
081edc98 +0x350:  call   082ef176 <_ZN11pvp_assault11CAssaultMgr19OnLeaveAssaultPlaceEP5CUserb>  ; pvp_assault::CAssaultMgr::OnLeaveAssaultPlace(CUser*, bool)
081edc9d +0x355:  mov    &_ZN10GlobalData14s_ExpertJobMgrE,%eax
081edca2 +0x35a:  mov    0xc(%ebp),%edx
081edca5 +0x35d:  mov    %edx,0x4(%esp)
081edca9 +0x361:  mov    %eax,(%esp)
081edcac +0x364:  call   0849e214 <_ZN10expert_job13CExpertJobMgr11OnLeaveUserEP5CUser>  ; expert_job::CExpertJobMgr::OnLeaveUser(CUser*)
081edcb1 +0x369:  mov    &_ZN10GlobalData26s_onlinePreliminaryTeamMgrE,%eax
081edcb6 +0x36e:  mov    0xc(%ebp),%edx
081edcb9 +0x371:  mov    %edx,0x4(%esp)
081edcbd +0x375:  mov    %eax,(%esp)
081edcc0 +0x378:  call   08588ae8 <_ZN18online_preliminary25COnlinePreliminaryTeamMgr11OnLeaveUserEP5CUser>  ; online_preliminary::COnlinePreliminaryTeamMgr::OnLeaveUser(CUser*)
081edcc5 +0x37d:  mov    0xc(%ebp),%eax
081edcc8 +0x380:  mov    %eax,(%esp)
081edccb +0x383:  call   08658a3e <_ZN5CUser20checkLogOutCorrectlyEv>  ; CUser::checkLogOutCorrectly()
081edcd0 +0x388:  mov    0xc(%ebp),%eax
081edcd3 +0x38b:  mov    %eax,(%esp)
081edcd6 +0x38e:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081edcdb +0x393:  mov    %eax,-0x18(%ebp)
081edcde +0x396:  mov    0xc(%ebp),%eax
081edce1 +0x399:  mov    %eax,(%esp)
081edce4 +0x39c:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
081edce9 +0x3a1:  mov    %eax,-0x14(%ebp)
081edcec +0x3a4:  mov    0xc(%ebp),%eax
081edcef +0x3a7:  mov    %eax,(%esp)
081edcf2 +0x3aa:  call   08645538 <_ZN15CUserCharacInfo17GetCharacPlayTickEv>  ; CUserCharacInfo::GetCharacPlayTick()
081edcf7 +0x3af:  mov    %eax,%ebx
081edcf9 +0x3b1:  movl   $0xffffffff,0x4(%esp)
081edd01 +0x3b9:  mov    0xc(%ebp),%eax
081edd04 +0x3bc:  mov    %eax,(%esp)
081edd07 +0x3bf:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
081edd0c +0x3c4:  mov    %ebx,0x4(%esp)
081edd10 +0x3c8:  mov    %eax,(%esp)
081edd13 +0x3cb:  call   0843f7ee <_ZN23DB_UpdateCharacPlayTime11makeRequestEil>  ; DB_UpdateCharacPlayTime::makeRequest(int, long)
081edd18 +0x3d0:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
081edd1d +0x3d5:  mov    0xc(%ebp),%edx
081edd20 +0x3d8:  mov    %edx,0x4(%esp)
081edd24 +0x3dc:  mov    %eax,(%esp)
081edd27 +0x3df:  call   082985a8 <_ZN12CGameManager9user_exitEP5CUser>  ; CGameManager::user_exit(CUser*)
081edd2c +0x3e4:  movzbl -0x45(%ebp),%eax
081edd30 +0x3e8:  test   %al,%al
081edd32 +0x3ea:  jne    081edd53 <+0x40b>
081edd34 +0x3ec:  mov    -0x14(%ebp),%eax
081edd37 +0x3ef:  mov    %eax,0x8(%esp)
081edd3b +0x3f3:  movl   $0x1,0x4(%esp)
081edd43 +0x3fb:  mov    -0x18(%ebp),%eax
081edd46 +0x3fe:  mov    %eax,(%esp)
081edd49 +0x401:  call   0842ad30 <_ZN23DB_ArrangeUserLoginInfo11makeRequestEjbj>  ; DB_ArrangeUserLoginInfo::makeRequest(unsigned int, bool, unsigned int)
081edd4e +0x406:  jmp    081edddf <+0x497>
081edd53 +0x40b:  mov    -0x14(%ebp),%eax
081edd56 +0x40e:  mov    %eax,0x8(%esp)
081edd5a +0x412:  movl   $0x0,0x4(%esp)
081edd62 +0x41a:  mov    -0x18(%ebp),%eax
081edd65 +0x41d:  mov    %eax,(%esp)
081edd68 +0x420:  call   0842ad30 <_ZN23DB_ArrangeUserLoginInfo11makeRequestEjbj>  ; DB_ArrangeUserLoginInfo::makeRequest(unsigned int, bool, unsigned int)
081edd6d +0x425:  mov    0xc(%ebp),%eax
081edd70 +0x428:  mov    %eax,(%esp)
081edd73 +0x42b:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
081edd78 +0x430:  mov    %eax,(%esp)
081edd7b +0x433:  call   0822ef1a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x45c4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x45c4
081edd80 +0x438:  test   %al,%al
081edd82 +0x43a:  je     081edda6 <+0x45e>
081edd84 +0x43c:  lea    -0x44(%ebp),%eax
081edd87 +0x43f:  mov    %eax,0xc(%esp)
081edd8b +0x443:  movl   $0x8,0x8(%esp)
081edd93 +0x44b:  movl   $0xb4,0x4(%esp)
081edd9b +0x453:  mov    -0x18(%ebp),%eax
081edd9e +0x456:  mov    %eax,(%esp)
081edda1 +0x459:  call   0843a34e <_ZN32DB_SecuServiceUpdateValidityTime11makeRequestEjjtPc>  ; DB_SecuServiceUpdateValidityTime::makeRequest(unsigned int, unsigned int, unsigned short, char*)
081edda6 +0x45e:  mov    0xc(%ebp),%eax
081edda9 +0x461:  mov    %eax,(%esp)
081eddac +0x464:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
081eddb1 +0x469:  mov    %eax,(%esp)
081eddb4 +0x46c:  call   0822efe6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4690>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4690
081eddb9 +0x471:  test   %al,%al
081eddbb +0x473:  je     081edddf <+0x497>
081eddbd +0x475:  lea    -0x44(%ebp),%eax
081eddc0 +0x478:  mov    %eax,0xc(%esp)
081eddc4 +0x47c:  movl   $0x10,0x8(%esp)
081eddcc +0x484:  movl   $0xb4,0x4(%esp)
081eddd4 +0x48c:  mov    -0x18(%ebp),%eax
081eddd7 +0x48f:  mov    %eax,(%esp)
081eddda +0x492:  call   0843a34e <_ZN32DB_SecuServiceUpdateValidityTime11makeRequestEjjtPc>  ; DB_SecuServiceUpdateValidityTime::makeRequest(unsigned int, unsigned int, unsigned short, char*)
081edddf +0x497:  mov    $0x0,%eax
081edde4 +0x49c:  add    $0x60,%esp
081edde7 +0x49f:  pop    %ebx
081edde8 +0x4a0:  pop    %esi
081edde9 +0x4a1:  pop    %ebp
081eddea +0x4a2:  ret
081eddeb +0x4a3:  nop
```

## 反编译 C

```c
// DisPatcher_Exit::dispatch_sig @ 0x81ed948

/* DisPatcher_Exit::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_Exit::dispatch_sig(DisPatcher_Exit *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  GameWorld *this_00;
  Arad_DataManager *this_01;
  Arad_EventPeriodDataManager *this_02;
  undefined4 uVar6;
  CMonitorServerProxy *this_03;
  undefined4 *puVar7;
  CAssaultMgr *this_04;
  long lVar8;
  CGameManager *this_05;
  CSecurityCard *this_06;
  CPad *this_07;
  uchar local_49;
  char local_48 [16];
  string local_38 [7];
  allocator<char> local_31;
  cMyTrace local_30 [16];
  CExpandEquipslot *local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  int local_10;
  
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_48[8] = '\0';
  local_48[9] = '\0';
  local_48[10] = '\0';
  local_48[0xb] = '\0';
  local_48[0xc] = '\0';
  local_48[0xd] = '\0';
  local_48[0xe] = '\0';
  local_48[0xf] = '\0';
  CNetwork<4096,450000>::GetPeerIP2((CNetwork<4096,450000> *)(param_1 + 0xe0),local_48,0x10);
  local_49 = '\0';
  cVar1 = PacketBuf::get_byte(param_2,&local_49);
  if (cVar1 != '\x01') {
    local_49 = '\0';
  }
  if (param_1 != (CUser *)0x0) {
    CUser::SetLogInOutState(param_1,local_49);
  }
  cVar1 = WongWork::CMCAPManager::IsSaveCleanPadPoint((CMCAPManager *)(param_1 + 0x8e3f0));
  if (cVar1 != '\0') {
    iVar4 = CUser::get_acc_id(param_1);
    uVar5 = WongWork::CMCAPManager::getPoint((CMCAPManager *)(param_1 + 0x8e3f0));
    DB_SaveCleanpadPoint::makeRequest(uVar5,iVar4);
    WongWork::CMCAPManager::disableCleanPadPoint((CMCAPManager *)(param_1 + 0x8e3f0));
  }
  iVar4 = CUser::get_state(param_1);
  if (2 < iVar4) {
    this_00 = (GameWorld *)G_GameWorld();
    cVar1 = GameWorld::IsEquipSlotSwitchChannel(this_00);
    if (cVar1 != '\0') {
      cVar1 = CUserCharacInfo::getCurChannelEquipslotSwitch((CUserCharacInfo *)param_1);
      if (cVar1 == '\x01') {
        local_20 = (CExpandEquipslot *)CUser::GetCharacExpandData(param_1,9);
        cVar1 = CUserCharacInfo::getCurExpandEquipslotSwitch((CUserCharacInfo *)param_1);
        cVar2 = CUserCharacInfo::getCurChannelEquipslotSwitch((CUserCharacInfo *)param_1);
        CExpandEquipslot::EquipslotSwitch(local_20,param_1,'\0',cVar2,cVar1);
      }
    }
  }
  std::allocator<char>::allocator();
                    /* try { // try from 081edac4 to 081edac8 has its CatchHandler @ 081edb10 */
  std::string::string(local_38,"Arad_EventPeriodDataManager",(allocator *)&local_31);
                    /* try { // try from 081edac9 to 081edaeb has its CatchHandler @ 081edaee */
  this_01 = (Arad_DataManager *)ARAD::Singleton<ARAD::Arad_DataManager>::Get();
  this_02 = (Arad_EventPeriodDataManager *)
            ARAD::Arad_DataManager::findGameScript(this_01,(string)local_38);
  ARAD::Arad_EventPeriodDataManager::delUserRewardData(this_02,param_1);
                    /* try { // try from 081edb09 to 081edb0d has its CatchHandler @ 081edb10 */
  std::string::~string(local_38);
  std::allocator<char>::~allocator(&local_31);
  iVar4 = CUser::get_state(param_1);
  if (iVar4 != 0) {
    CUser::WorkPerFiveMin(param_1);
    iVar4 = CUserCharacInfo::get_charac_memberkey((CUserCharacInfo *)param_1);
    if (iVar4 != 0) {
      local_14 = CUserCharacInfo::get_member_pay_tex_money_to_upper((CUserCharacInfo *)param_1);
      local_10 = CUserCharacInfo::get_member_pay_tex_fatigue_to_upper((CUserCharacInfo *)param_1);
      uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      bVar3 = (bool)CUserCharacInfo::is_connect_upper_member((CUserCharacInfo *)param_1);
      uVar6 = CUser::GetServerGroup(param_1);
      this_03 = (CMonitorServerProxy *)
                CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                          (GlobalData::s_monitor_proxy_mgr,uVar6);
      CMonitorServerProxy::SendMemberPayTax(this_03,bVar3,uVar5,local_14,local_10);
      if (0 < local_14) {
        CUserCharacInfo::set_member_pay_tex_money_to_upper((CUserCharacInfo *)param_1,0);
      }
      if (0 < local_10) {
        CUserCharacInfo::set_member_pay_tex_fatigue_to_upper((CUserCharacInfo *)param_1,0);
      }
    }
    uVar5 = CUser::get_acc_id(param_1);
    uVar6 = NumberToString(uVar5,0);
    cMyTrace::cMyTrace(local_30,"virtual int DisPatcher_Exit::dispatch_sig(CUser*, PacketBuf&)",
                       0x706d,0);
    cMyTrace::operator()(local_30,"[USER LOGOUT (Normal)] DB ID : %s\n",uVar6);
    puVar7 = (undefined4 *)private_store::GetInstancePrivateStoreMgr();
    (**(code **)*puVar7)(puVar7,param_1);
    this_04 = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
    pvp_assault::CAssaultMgr::OnLeaveAssaultPlace(this_04,param_1,true);
    expert_job::CExpertJobMgr::OnLeaveUser(GlobalData::s_ExpertJobMgr,param_1);
    online_preliminary::COnlinePreliminaryTeamMgr::OnLeaveUser
              (GlobalData::s_onlinePreliminaryTeamMgr,param_1);
    CUser::checkLogOutCorrectly(param_1);
    local_1c = CUser::get_acc_id(param_1);
    local_18 = CUser::GetUID(param_1);
    lVar8 = CUserCharacInfo::GetCharacPlayTick((CUserCharacInfo *)param_1);
    iVar4 = CUser::get_charac_no(param_1,-1);
    DB_UpdateCharacPlayTime::makeRequest(iVar4,lVar8);
    this_05 = (CGameManager *)G_CGameManager();
    CGameManager::user_exit(this_05,param_1);
    if (local_49 == '\0') {
      DB_ArrangeUserLoginInfo::makeRequest(local_1c,true,local_18);
    }
    else {
      DB_ArrangeUserLoginInfo::makeRequest(local_1c,false,local_18);
      this_06 = (CSecurityCard *)CUser::getSecurityCard(param_1);
      cVar1 = WongWork::CSecurityCard::isCertified(this_06);
      if (cVar1 != '\0') {
        DB_SecuServiceUpdateValidityTime::makeRequest(local_1c,0xb4,8,local_48);
      }
      this_07 = (CPad *)CUser::getPad(param_1);
      cVar1 = Sanicova::CPad::isCertified(this_07);
      if (cVar1 != '\0') {
        DB_SecuServiceUpdateValidityTime::makeRequest(local_1c,0xb4,0x10,local_48);
      }
    }
  }
  return 0;
}
```
