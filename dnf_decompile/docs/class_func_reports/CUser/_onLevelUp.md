# _onLevelUp

`_ZN5CUser10_onLevelUpEv`

`CUser::_onLevelUp()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0866311a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0866311a  _ZN5CUser10_onLevelUpEv
#           CUser::_onLevelUp()
# range [0x0866311a, 0x08663cbf]
0866311a +0x000:  push   %ebp
0866311b +0x001:  mov    %esp,%ebp
0866311d +0x003:  push   %edi
0866311e +0x004:  push   %esi
0866311f +0x005:  push   %ebx
08663120 +0x006:  sub    $0x2ac,%esp
08663126 +0x00c:  mov    0x8(%ebp),%eax
08663129 +0x00f:  mov    %eax,(%esp)
0866312c +0x012:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08663131 +0x017:  cmp    $0xf,%eax
08663134 +0x01a:  jne    08663162 <+0x48>
08663136 +0x01c:  mov    0x8(%ebp),%eax
08663139 +0x01f:  mov    %eax,(%esp)
0866313c +0x022:  call   0822f202 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48ac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48ac
08663141 +0x027:  cmp    $0x47bc94cf,%eax
08663146 +0x02c:  jle    08663162 <+0x48>
08663148 +0x02e:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0866314f +0x035:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08663154 +0x03a:  cmp    $0x47d3fb70,%eax
08663159 +0x03f:  jg     08663162 <+0x48>
0866315b +0x041:  mov    $0x1,%eax
08663160 +0x046:  jmp    08663167 <+0x4d>
08663162 +0x048:  mov    $0x0,%eax
08663167 +0x04d:  test   %al,%al
08663169 +0x04f:  je     086631a0 <+0x86>
0866316b +0x051:  mov    0x8(%ebp),%eax
0866316e +0x054:  mov    %eax,(%esp)
08663171 +0x057:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
08663176 +0x05c:  mov    %eax,%esi
08663178 +0x05e:  mov    0x8(%ebp),%eax
0866317b +0x061:  mov    %eax,(%esp)
0866317e +0x064:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08663183 +0x069:  mov    %eax,%ebx
08663185 +0x06b:  mov    0x8(%ebp),%eax
08663188 +0x06e:  mov    %eax,(%esp)
0866318b +0x071:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08663190 +0x076:  mov    %esi,0x8(%esp)
08663194 +0x07a:  mov    %ebx,0x4(%esp)
08663198 +0x07e:  mov    %eax,(%esp)
0866319b +0x081:  call   0842ebd0 <_ZN26DB_InsertUnlimitSupportLog11makeRequestEjjPKc>  ; DB_InsertUnlimitSupportLog::makeRequest(unsigned int, unsigned int, char const*)
086631a0 +0x086:  mov    0x8(%ebp),%eax
086631a3 +0x089:  mov    %eax,(%esp)
086631a6 +0x08c:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
086631ab +0x091:  movsbl %al,%esi
086631ae +0x094:  mov    0x8(%ebp),%eax
086631b1 +0x097:  mov    %eax,(%esp)
086631b4 +0x09a:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
086631b9 +0x09f:  mov    %eax,%ebx
086631bb +0x0a1:  mov    0x8(%ebp),%eax
086631be +0x0a4:  mov    %eax,(%esp)
086631c1 +0x0a7:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
086631c6 +0x0ac:  mov    %esi,0xc(%esp)
086631ca +0x0b0:  mov    %ebx,0x8(%esp)
086631ce +0x0b4:  mov    %eax,0x4(%esp)
086631d2 +0x0b8:  mov    0x8(%ebp),%eax
086631d5 +0x0bb:  mov    %eax,(%esp)
086631d8 +0x0be:  call   0868745e <_ZN5CUser19_processLevelRewardEjjc>  ; CUser::_processLevelReward(unsigned int, unsigned int, char)
086631dd +0x0c3:  mov    &_ZN10GlobalData15s_event_managerE,%eax
086631e2 +0x0c8:  movl   $0x15,0x4(%esp)
086631ea +0x0d0:  mov    %eax,(%esp)
086631ed +0x0d3:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
086631f2 +0x0d8:  mov    (%eax),%edx
086631f4 +0x0da:  add    $0x34,%edx
086631f7 +0x0dd:  mov    (%edx),%edx
086631f9 +0x0df:  movl   $0x0,0x4(%esp)
08663201 +0x0e7:  mov    %eax,(%esp)
08663204 +0x0ea:  call   *%edx
08663206 +0x0ec:  test   %al,%al
08663208 +0x0ee:  je     08663290 <+0x176>
0866320e +0x0f4:  mov    0x8(%ebp),%eax
08663211 +0x0f7:  mov    %eax,(%esp)
08663214 +0x0fa:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08663219 +0x0ff:  cmp    $0x12,%eax
0866321c +0x102:  sete   %al
0866321f +0x105:  test   %al,%al
08663221 +0x107:  je     0866324f <+0x135>
08663223 +0x109:  mov    0x8(%ebp),%eax
08663226 +0x10c:  mov    %eax,(%esp)
08663229 +0x10f:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0866322e +0x114:  mov    %eax,%ebx
08663230 +0x116:  mov    0x8(%ebp),%eax
08663233 +0x119:  mov    %eax,(%esp)
08663236 +0x11c:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0866323b +0x121:  movl   $0x1,0x8(%esp)
08663243 +0x129:  mov    %ebx,0x4(%esp)
08663247 +0x12d:  mov    %eax,(%esp)
0866324a +0x130:  call   0842e856 <_ZN25DB_InsertArchieveEventLog11makeRequestEjjN24SIG_INSERT_ACHIEVE_EVENT17ENUM_ACHIEVE_TYPEE>  ; DB_InsertArchieveEventLog::makeRequest(unsigned int, unsigned int, SIG_INSERT_ACHIEVE_EVENT::ENUM_ACHIEVE_TYPE)
0866324f +0x135:  mov    0x8(%ebp),%eax
08663252 +0x138:  mov    %eax,(%esp)
08663255 +0x13b:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0866325a +0x140:  cmp    $0x30,%eax
0866325d +0x143:  sete   %al
08663260 +0x146:  test   %al,%al
08663262 +0x148:  je     08663290 <+0x176>
08663264 +0x14a:  mov    0x8(%ebp),%eax
08663267 +0x14d:  mov    %eax,(%esp)
0866326a +0x150:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0866326f +0x155:  mov    %eax,%ebx
08663271 +0x157:  mov    0x8(%ebp),%eax
08663274 +0x15a:  mov    %eax,(%esp)
08663277 +0x15d:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0866327c +0x162:  movl   $0x2,0x8(%esp)
08663284 +0x16a:  mov    %ebx,0x4(%esp)
08663288 +0x16e:  mov    %eax,(%esp)
0866328b +0x171:  call   0842e856 <_ZN25DB_InsertArchieveEventLog11makeRequestEjjN24SIG_INSERT_ACHIEVE_EVENT17ENUM_ACHIEVE_TYPEE>  ; DB_InsertArchieveEventLog::makeRequest(unsigned int, unsigned int, SIG_INSERT_ACHIEVE_EVENT::ENUM_ACHIEVE_TYPE)
08663290 +0x176:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08663295 +0x17b:  mov    0x378(%eax),%eax
0866329b +0x181:  cmp    $0xa,%eax
0866329e +0x184:  jne    086632ba <+0x1a0>
086632a0 +0x186:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
086632a7 +0x18d:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
086632ac +0x192:  cmp    $0x478e7050,%eax
086632b1 +0x197:  ja     086632ba <+0x1a0>
086632b3 +0x199:  mov    $0x1,%eax
086632b8 +0x19e:  jmp    086632bf <+0x1a5>
086632ba +0x1a0:  mov    $0x0,%eax
086632bf +0x1a5:  test   %al,%al
086632c1 +0x1a7:  je     086634e8 <+0x3ce>
086632c7 +0x1ad:  mov    0x8(%ebp),%eax
086632ca +0x1b0:  mov    %eax,(%esp)
086632cd +0x1b3:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
086632d2 +0x1b8:  cmp    $0x1e,%eax
086632d5 +0x1bb:  je     086632e7 <+0x1cd>
086632d7 +0x1bd:  mov    0x8(%ebp),%eax
086632da +0x1c0:  mov    %eax,(%esp)
086632dd +0x1c3:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
086632e2 +0x1c8:  cmp    $0x28,%eax
086632e5 +0x1cb:  jne    086632ee <+0x1d4>
086632e7 +0x1cd:  mov    $0x1,%eax
086632ec +0x1d2:  jmp    086632f3 <+0x1d9>
086632ee +0x1d4:  mov    $0x0,%eax
086632f3 +0x1d9:  test   %al,%al
086632f5 +0x1db:  je     086634e8 <+0x3ce>
086632fb +0x1e1:  lea    -0xb1(%ebp),%eax
08663301 +0x1e7:  mov    %eax,(%esp)
08663304 +0x1ea:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08663309 +0x1ef:  mov    0x8(%ebp),%eax
0866330c +0x1f2:  mov    %eax,(%esp)
0866330f +0x1f5:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08663314 +0x1fa:  cmp    $0x1e,%eax
08663317 +0x1fd:  sete   %al
0866331a +0x200:  test   %al,%al
0866331c +0x202:  je     086633fb <+0x2e1>
08663322 +0x208:  movl   $0x0,0xc(%esp)
0866332a +0x210:  movl   $"game_server_msg_11",0x8(%esp)
08663332 +0x218:  movl   $0x4,0x4(%esp)
0866333a +0x220:  movl   $&g_scriptStringManager_,(%esp)
08663341 +0x227:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08663346 +0x22c:  movl   $0xff,0x8(%esp)
0866334e +0x234:  mov    %eax,0x4(%esp)
08663352 +0x238:  lea    -0x268(%ebp),%eax
08663358 +0x23e:  mov    %eax,(%esp)
0866335b +0x241:  call   0807d8d0 <_init+0x1c8>
08663360 +0x246:  mov    0x8(%ebp),%eax
08663363 +0x249:  mov    %eax,(%esp)
08663366 +0x24c:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0866336b +0x251:  mov    %eax,%esi
0866336d +0x253:  lea    -0x268(%ebp),%eax
08663373 +0x259:  mov    %eax,(%esp)
08663376 +0x25c:  call   0807e3b0 <_init+0xca8>
0866337b +0x261:  mov    %eax,%edi
0866337d +0x263:  mov    0x8(%ebp),%eax
08663380 +0x266:  mov    %eax,(%esp)
08663383 +0x269:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08663388 +0x26e:  mov    %eax,%ebx
0866338a +0x270:  movl   $0x0,0xc(%esp)
08663392 +0x278:  movl   $"game_server_msg_09",0x8(%esp)
0866339a +0x280:  movl   $0x4,0x4(%esp)
086633a2 +0x288:  movl   $&g_scriptStringManager_,(%esp)
086633a9 +0x28f:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
086633ae +0x294:  movl   $0x0,0x24(%esp)
086633b6 +0x29c:  movl   $0x0,0x20(%esp)
086633be +0x2a4:  mov    %esi,0x1c(%esp)
086633c2 +0x2a8:  movl   $0x0,0x18(%esp)
086633ca +0x2b0:  mov    %edi,0x14(%esp)
086633ce +0x2b4:  lea    -0x268(%ebp),%edx
086633d4 +0x2ba:  mov    %edx,0x10(%esp)
086633d8 +0x2be:  mov    %ebx,0xc(%esp)
086633dc +0x2c2:  movl   $0x7a120,0x8(%esp)
086633e4 +0x2ca:  lea    -0xb1(%ebp),%edx
086633ea +0x2d0:  mov    %edx,0x4(%esp)
086633ee +0x2d4:  mov    %eax,(%esp)
086633f1 +0x2d7:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
086633f6 +0x2dc:  jmp    086634e8 <+0x3ce>
086633fb +0x2e1:  mov    0x8(%ebp),%eax
086633fe +0x2e4:  mov    %eax,(%esp)
08663401 +0x2e7:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08663406 +0x2ec:  cmp    $0x28,%eax
08663409 +0x2ef:  sete   %al
0866340c +0x2f2:  test   %al,%al
0866340e +0x2f4:  je     086634e8 <+0x3ce>
08663414 +0x2fa:  movl   $0x0,0xc(%esp)
0866341c +0x302:  movl   $"game_server_msg_12",0x8(%esp)
08663424 +0x30a:  movl   $0x4,0x4(%esp)
0866342c +0x312:  movl   $&g_scriptStringManager_,(%esp)
08663433 +0x319:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08663438 +0x31e:  movl   $0xff,0x8(%esp)
08663440 +0x326:  mov    %eax,0x4(%esp)
08663444 +0x32a:  lea    -0x268(%ebp),%eax
0866344a +0x330:  mov    %eax,(%esp)
0866344d +0x333:  call   0807d8d0 <_init+0x1c8>
08663452 +0x338:  mov    0x8(%ebp),%eax
08663455 +0x33b:  mov    %eax,(%esp)
08663458 +0x33e:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0866345d +0x343:  mov    %eax,%esi
0866345f +0x345:  lea    -0x268(%ebp),%eax
08663465 +0x34b:  mov    %eax,(%esp)
08663468 +0x34e:  call   0807e3b0 <_init+0xca8>
0866346d +0x353:  mov    %eax,%edi
0866346f +0x355:  mov    0x8(%ebp),%eax
08663472 +0x358:  mov    %eax,(%esp)
08663475 +0x35b:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0866347a +0x360:  mov    %eax,%ebx
0866347c +0x362:  movl   $0x0,0xc(%esp)
08663484 +0x36a:  movl   $"game_server_msg_09",0x8(%esp)
0866348c +0x372:  movl   $0x4,0x4(%esp)
08663494 +0x37a:  movl   $&g_scriptStringManager_,(%esp)
0866349b +0x381:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
086634a0 +0x386:  movl   $0x0,0x24(%esp)
086634a8 +0x38e:  movl   $0x0,0x20(%esp)
086634b0 +0x396:  mov    %esi,0x1c(%esp)
086634b4 +0x39a:  movl   $0x0,0x18(%esp)
086634bc +0x3a2:  mov    %edi,0x14(%esp)
086634c0 +0x3a6:  lea    -0x268(%ebp),%edx
086634c6 +0x3ac:  mov    %edx,0x10(%esp)
086634ca +0x3b0:  mov    %ebx,0xc(%esp)
086634ce +0x3b4:  movl   $0xf4240,0x8(%esp)
086634d6 +0x3bc:  lea    -0xb1(%ebp),%edx
086634dc +0x3c2:  mov    %edx,0x4(%esp)
086634e0 +0x3c6:  mov    %eax,(%esp)
086634e3 +0x3c9:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
086634e8 +0x3ce:  lea    -0x48(%ebp),%eax
086634eb +0x3d1:  mov    %eax,(%esp)
086634ee +0x3d4:  call   082357d6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xae80>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xae80
086634f3 +0x3d9:  mov    0x8(%ebp),%eax
086634f6 +0x3dc:  mov    %eax,0x4(%esp)
086634fa +0x3e0:  lea    -0x74(%ebp),%eax
086634fd +0x3e3:  mov    %eax,(%esp)
08663500 +0x3e6:  call   083480b4 <_ZN18stSelectQuestParamC1EP5CUser>  ; stSelectQuestParam::stSelectQuestParam(CUser*)
08663505 +0x3eb:  mov    0x8(%ebp),%eax
08663508 +0x3ee:  mov    %eax,(%esp)
0866350b +0x3f1:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
08663510 +0x3f6:  lea    -0x74(%ebp),%edx
08663513 +0x3f9:  mov    %edx,0x8(%esp)
08663517 +0x3fd:  lea    -0x48(%ebp),%edx
0866351a +0x400:  mov    %edx,0x4(%esp)
0866351e +0x404:  mov    %eax,(%esp)
08663521 +0x407:  call   086abd7a <_ZNK9UserQuest19get_mail_quest_infoERSt4listIiSaIiEERK18stSelectQuestParam>  ; UserQuest::get_mail_quest_info(std::list<int, std::allocator<int> >&, stSelectQuestParam const&) const
08663526 +0x40c:  test   %al,%al
08663528 +0x40e:  je     086635ef <+0x4d5>
0866352e +0x414:  lea    -0x4c(%ebp),%eax
08663531 +0x417:  lea    -0x48(%ebp),%edx
08663534 +0x41a:  mov    %edx,0x4(%esp)
08663538 +0x41e:  mov    %eax,(%esp)
0866353b +0x421:  call   082373c8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xca72>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xca72
08663540 +0x426:  sub    $0x4,%esp
08663543 +0x429:  jmp    086635c0 <+0x4a6>
08663545 +0x42b:  lea    -0x4c(%ebp),%eax
08663548 +0x42e:  mov    %eax,(%esp)
0866354b +0x431:  call   0823742a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcad4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcad4
08663550 +0x436:  mov    (%eax),%eax
08663552 +0x438:  mov    %eax,-0x2c(%ebp)
08663555 +0x43b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0866355a +0x440:  mov    -0x2c(%ebp),%edx
0866355d +0x443:  mov    %edx,0x4(%esp)
08663561 +0x447:  mov    %eax,(%esp)
08663564 +0x44a:  call   0835fdc6 <_ZNK12CDataManager10find_questEi>  ; CDataManager::find_quest(int) const
08663569 +0x44f:  mov    %eax,-0x28(%ebp)
0866356c +0x452:  cmpl   $0x0,-0x28(%ebp)
08663570 +0x456:  je     086635ae <+0x494>
08663572 +0x458:  mov    -0x28(%ebp),%eax
08663575 +0x45b:  movzbl 0x108(%eax),%eax
0866357c +0x462:  test   %al,%al
0866357e +0x464:  jne    086635b1 <+0x497>
08663580 +0x466:  mov    0x8(%ebp),%eax
08663583 +0x469:  mov    %eax,(%esp)
08663586 +0x46c:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0866358b +0x471:  mov    -0x28(%ebp),%edx
0866358e +0x474:  mov    0x20(%edx),%edx
08663591 +0x477:  cmp    %edx,%eax
08663593 +0x479:  setne  %al
08663596 +0x47c:  test   %al,%al
08663598 +0x47e:  jne    086635b4 <+0x49a>
0866359a +0x480:  mov    -0x28(%ebp),%eax
0866359d +0x483:  mov    %eax,0x4(%esp)
086635a1 +0x487:  mov    0x8(%ebp),%eax
086635a4 +0x48a:  mov    %eax,(%esp)
086635a7 +0x48d:  call   086689ee <_ZN5CUser21_postQuestTriggerItemEPK5Quest>  ; CUser::_postQuestTriggerItem(Quest const*)
086635ac +0x492:  jmp    086635b5 <+0x49b>
086635ae +0x494:  nop
086635af +0x495:  jmp    086635b5 <+0x49b>
086635b1 +0x497:  nop
086635b2 +0x498:  jmp    086635b5 <+0x49b>
086635b4 +0x49a:  nop
086635b5 +0x49b:  lea    -0x4c(%ebp),%eax
086635b8 +0x49e:  mov    %eax,(%esp)
086635bb +0x4a1:  call   0823d3de <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x855c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x855c
086635c0 +0x4a6:  lea    -0x40(%ebp),%eax
086635c3 +0x4a9:  lea    -0x48(%ebp),%edx
086635c6 +0x4ac:  mov    %edx,0x4(%esp)
086635ca +0x4b0:  mov    %eax,(%esp)
086635cd +0x4b3:  call   0826c43e <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0xd0c>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0xd0c
086635d2 +0x4b8:  sub    $0x4,%esp
086635d5 +0x4bb:  lea    -0x40(%ebp),%eax
086635d8 +0x4be:  mov    %eax,0x4(%esp)
086635dc +0x4c2:  lea    -0x4c(%ebp),%eax
086635df +0x4c5:  mov    %eax,(%esp)
086635e2 +0x4c8:  call   0826c462 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0xd30>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0xd30
086635e7 +0x4cd:  test   %al,%al
086635e9 +0x4cf:  jne    08663545 <+0x42b>
086635ef +0x4d5:  movl   $0x10,0x4(%esp)
086635f7 +0x4dd:  mov    0x8(%ebp),%eax
086635fa +0x4e0:  mov    %eax,(%esp)
086635fd +0x4e3:  call   080e600e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x144>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x144
08663602 +0x4e8:  test   %al,%al
08663604 +0x4ea:  je     08663620 <+0x506>
08663606 +0x4ec:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0866360d +0x4f3:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08663612 +0x4f8:  cmp    $0x46e1bbd0,%eax
08663617 +0x4fd:  ja     08663620 <+0x506>
08663619 +0x4ff:  mov    $0x1,%eax
0866361e +0x504:  jmp    08663625 <+0x50b>
08663620 +0x506:  mov    $0x0,%eax
08663625 +0x50b:  test   %al,%al
08663627 +0x50d:  je     086638c0 <+0x7a6>
0866362d +0x513:  mov    0x8(%ebp),%eax
08663630 +0x516:  mov    %eax,(%esp)
08663633 +0x519:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08663638 +0x51e:  movl   $0xb,0x8(%esp)
08663640 +0x526:  movl   $0x0,0x4(%esp)
08663648 +0x52e:  mov    %eax,(%esp)
0866364b +0x531:  call   084fc1de <_ZNK10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int) const
08663650 +0x536:  mov    0x2(%eax),%eax
08663653 +0x539:  sub    $0x65d6,%eax
08663658 +0x53e:  cmp    $0x4,%eax
0866365b +0x541:  ja     086638c0 <+0x7a6>
08663661 +0x547:  mov    0x8(%ebp),%eax
08663664 +0x54a:  mov    %eax,(%esp)
08663667 +0x54d:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0866366c +0x552:  cmp    $0x1e,%eax
0866366f +0x555:  sete   %al
08663672 +0x558:  test   %al,%al
08663674 +0x55a:  je     08663793 <+0x679>
0866367a +0x560:  movl   $0x0,0xc(%esp)
08663682 +0x568:  movl   $"game_server_msg_05",0x8(%esp)
0866368a +0x570:  movl   $0x4,0x4(%esp)
08663692 +0x578:  movl   $&g_scriptStringManager_,(%esp)
08663699 +0x57f:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
0866369e +0x584:  movl   $0xff,0x8(%esp)
086636a6 +0x58c:  mov    %eax,0x4(%esp)
086636aa +0x590:  lea    -0x268(%ebp),%eax
086636b0 +0x596:  mov    %eax,(%esp)
086636b3 +0x599:  call   0807d8d0 <_init+0x1c8>
086636b8 +0x59e:  lea    -0xee(%ebp),%eax
086636be +0x5a4:  mov    %eax,(%esp)
086636c1 +0x5a7:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
086636c6 +0x5ac:  movl   $0xf,-0xec(%ebp)
086636d0 +0x5b6:  movb   $0x2,-0xed(%ebp)
086636d7 +0x5bd:  movl   $0x5,-0xe7(%ebp)
086636e1 +0x5c7:  movw   $0x0,-0xe3(%ebp)
086636ea +0x5d0:  lea    -0xee(%ebp),%eax
086636f0 +0x5d6:  mov    %eax,(%esp)
086636f3 +0x5d9:  call   080cb892 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6df>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6df
086636f8 +0x5de:  mov    0x8(%ebp),%eax
086636fb +0x5e1:  mov    %eax,(%esp)
086636fe +0x5e4:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08663703 +0x5e9:  mov    %eax,%esi
08663705 +0x5eb:  lea    -0x268(%ebp),%eax
0866370b +0x5f1:  mov    %eax,(%esp)
0866370e +0x5f4:  call   0807e3b0 <_init+0xca8>
08663713 +0x5f9:  mov    %eax,%edi
08663715 +0x5fb:  mov    0x8(%ebp),%eax
08663718 +0x5fe:  mov    %eax,(%esp)
0866371b +0x601:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08663720 +0x606:  mov    %eax,%ebx
08663722 +0x608:  movl   $0x0,0xc(%esp)
0866372a +0x610:  movl   $"game_server_msg_08",0x8(%esp)
08663732 +0x618:  movl   $0x4,0x4(%esp)
0866373a +0x620:  movl   $&g_scriptStringManager_,(%esp)
08663741 +0x627:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08663746 +0x62c:  movl   $0x0,0x24(%esp)
0866374e +0x634:  movl   $0x0,0x20(%esp)
08663756 +0x63c:  mov    %esi,0x1c(%esp)
0866375a +0x640:  movl   $0x0,0x18(%esp)
08663762 +0x648:  mov    %edi,0x14(%esp)
08663766 +0x64c:  lea    -0x268(%ebp),%edx
0866376c +0x652:  mov    %edx,0x10(%esp)
08663770 +0x656:  mov    %ebx,0xc(%esp)
08663774 +0x65a:  movl   $0x0,0x8(%esp)
0866377c +0x662:  lea    -0xee(%ebp),%edx
08663782 +0x668:  mov    %edx,0x4(%esp)
08663786 +0x66c:  mov    %eax,(%esp)
08663789 +0x66f:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
0866378e +0x674:  jmp    086638c0 <+0x7a6>
08663793 +0x679:  mov    0x8(%ebp),%eax
08663796 +0x67c:  mov    %eax,(%esp)
08663799 +0x67f:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0866379e +0x684:  cmp    $0x28,%eax
086637a1 +0x687:  sete   %al
086637a4 +0x68a:  test   %al,%al
086637a6 +0x68c:  je     086638c0 <+0x7a6>
086637ac +0x692:  movl   $0x0,0xc(%esp)
086637b4 +0x69a:  movl   $"game_server_msg_06",0x8(%esp)
086637bc +0x6a2:  movl   $0x4,0x4(%esp)
086637c4 +0x6aa:  movl   $&g_scriptStringManager_,(%esp)
086637cb +0x6b1:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
086637d0 +0x6b6:  movl   $0xff,0x8(%esp)
086637d8 +0x6be:  mov    %eax,0x4(%esp)
086637dc +0x6c2:  lea    -0x268(%ebp),%eax
086637e2 +0x6c8:  mov    %eax,(%esp)
086637e5 +0x6cb:  call   0807d8d0 <_init+0x1c8>
086637ea +0x6d0:  lea    -0x12b(%ebp),%eax
086637f0 +0x6d6:  mov    %eax,(%esp)
086637f3 +0x6d9:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
086637f8 +0x6de:  movl   $0x24,-0x129(%ebp)
08663802 +0x6e8:  movb   $0x2,-0x12a(%ebp)
08663809 +0x6ef:  movl   $0x5,-0x124(%ebp)
08663813 +0x6f9:  movw   $0x0,-0x120(%ebp)
0866381c +0x702:  lea    -0x12b(%ebp),%eax
08663822 +0x708:  mov    %eax,(%esp)
08663825 +0x70b:  call   080cb892 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6df>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6df
0866382a +0x710:  mov    0x8(%ebp),%eax
0866382d +0x713:  mov    %eax,(%esp)
08663830 +0x716:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08663835 +0x71b:  mov    %eax,%esi
08663837 +0x71d:  lea    -0x268(%ebp),%eax
0866383d +0x723:  mov    %eax,(%esp)
08663840 +0x726:  call   0807e3b0 <_init+0xca8>
08663845 +0x72b:  mov    %eax,%edi
08663847 +0x72d:  mov    0x8(%ebp),%eax
0866384a +0x730:  mov    %eax,(%esp)
0866384d +0x733:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08663852 +0x738:  mov    %eax,%ebx
08663854 +0x73a:  movl   $0x0,0xc(%esp)
0866385c +0x742:  movl   $"game_server_msg_08",0x8(%esp)
08663864 +0x74a:  movl   $0x4,0x4(%esp)
0866386c +0x752:  movl   $&g_scriptStringManager_,(%esp)
08663873 +0x759:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08663878 +0x75e:  movl   $0x0,0x24(%esp)
08663880 +0x766:  movl   $0x0,0x20(%esp)
08663888 +0x76e:  mov    %esi,0x1c(%esp)
0866388c +0x772:  movl   $0x0,0x18(%esp)
08663894 +0x77a:  mov    %edi,0x14(%esp)
08663898 +0x77e:  lea    -0x268(%ebp),%edx
0866389e +0x784:  mov    %edx,0x10(%esp)
086638a2 +0x788:  mov    %ebx,0xc(%esp)
086638a6 +0x78c:  movl   $0x0,0x8(%esp)
086638ae +0x794:  lea    -0x12b(%ebp),%edx
086638b4 +0x79a:  mov    %edx,0x4(%esp)
086638b8 +0x79e:  mov    %eax,(%esp)
086638bb +0x7a1:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
086638c0 +0x7a6:  mov    0x8(%ebp),%eax
086638c3 +0x7a9:  mov    %eax,(%esp)
086638c6 +0x7ac:  call   0866407a <_ZN5CUser23processNPCGiftOnLevelUpEv>  ; CUser::processNPCGiftOnLevelUp()
086638cb +0x7b1:  movl   $0x0,0x4(%esp)
086638d3 +0x7b9:  mov    0x8(%ebp),%eax
086638d6 +0x7bc:  mov    %eax,(%esp)
086638d9 +0x7bf:  call   08663cc0 <_ZN5CUser25processLevelUpEventRewardEb>  ; CUser::processLevelUpEventReward(bool)
086638de +0x7c4:  mov    0x8(%ebp),%eax
086638e1 +0x7c7:  mov    %eax,(%esp)
086638e4 +0x7ca:  call   0869115a <_ZN5CUser19processLevelUpEventEv>  ; CUser::processLevelUpEvent()
086638e9 +0x7cf:  mov    0x8(%ebp),%eax
086638ec +0x7d2:  mov    %eax,(%esp)
086638ef +0x7d5:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
086638f4 +0x7da:  cmp    $0x55,%eax
086638f7 +0x7dd:  sete   %al
086638fa +0x7e0:  test   %al,%al
086638fc +0x7e2:  je     08663995 <+0x87b>
08663902 +0x7e8:  mov    &_ZN10GlobalData23s_fatigueBatteryHandle_E,%eax
08663907 +0x7ed:  mov    0x8(%ebp),%edx
0866390a +0x7f0:  mov    %edx,0x4(%esp)
0866390e +0x7f4:  mov    %eax,(%esp)
08663911 +0x7f7:  call   084a81f4 <_ZN21CFatigueBatteryHandle29ActiveFatigueBattery_EndLevelEP5CUser>  ; CFatigueBatteryHandle::ActiveFatigueBattery_EndLevel(CUser*)
08663916 +0x7fc:  cwtl
08663917 +0x7fd:  mov    %eax,-0x24(%ebp)
0866391a +0x800:  cmpl   $0x0,-0x24(%ebp)
0866391e +0x804:  je     08663995 <+0x87b>
08663920 +0x806:  mov    -0x24(%ebp),%eax
08663923 +0x809:  movswl %ax,%edx
08663926 +0x80c:  mov    0x8(%ebp),%eax
08663929 +0x80f:  mov    %edx,0x4(%esp)
0866392d +0x813:  mov    %eax,(%esp)
08663930 +0x816:  call   08656784 <_ZN15CUserCharacInfo25DecFatigueBatteryChargingEs>  ; CUserCharacInfo::DecFatigueBatteryCharging(short)
08663935 +0x81b:  mov    0x8(%ebp),%eax
08663938 +0x81e:  mov    %eax,(%esp)
0866393b +0x821:  call   084a857e <_GLOBAL__I__ZN21CFatigueBatteryHandleC2Ev+0xe4>  ; global constructors keyed to CFatigueBatteryHandle::CFatigueBatteryHandle()+0xe4
08663940 +0x826:  movswl %ax,%esi
08663943 +0x829:  mov    0x8(%ebp),%eax
08663946 +0x82c:  mov    %eax,(%esp)
08663949 +0x82f:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0866394e +0x834:  mov    %eax,%ebx
08663950 +0x836:  movl   $0x0,0xc(%esp)
08663958 +0x83e:  movl   $0x4290,0x8(%esp)
08663960 +0x846:  movl   $&_ZZN5CUser10_onLevelUpEvE19__PRETTY_FUNCTION__,0x4(%esp)
08663968 +0x84e:  lea    -0x3c(%ebp),%eax
0866396b +0x851:  mov    %eax,(%esp)
0866396e +0x854:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08663973 +0x859:  mov    %esi,0x10(%esp)
08663977 +0x85d:  mov    -0x24(%ebp),%eax
0866397a +0x860:  mov    %eax,0xc(%esp)
0866397e +0x864:  mov    %ebx,0x8(%esp)
08663982 +0x868:  movl   $"FATIGUE BATTERY ACTIVE END_LEVEL: charno(%d) , descFatigueAmount(%d), cur charging(%d)",0x4(%esp)
0866398a +0x870:  lea    -0x3c(%ebp),%eax
0866398d +0x873:  mov    %eax,(%esp)
08663990 +0x876:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08663995 +0x87b:  mov    0x8(%ebp),%eax
08663998 +0x87e:  mov    %eax,(%esp)
0866399b +0x881:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
086639a0 +0x886:  cmp    $0x14,%eax
086639a3 +0x889:  sete   %al
086639a6 +0x88c:  test   %al,%al
086639a8 +0x88e:  je     08663c68 <+0xb4e>
086639ae +0x894:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086639b3 +0x899:  movl   $0x1057,0x4(%esp)
086639bb +0x8a1:  mov    %eax,(%esp)
086639be +0x8a4:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
086639c3 +0x8a9:  mov    %eax,-0x20(%ebp)
086639c6 +0x8ac:  cmpl   $0x0,-0x20(%ebp)
086639ca +0x8b0:  je     08663c68 <+0xb4e>
086639d0 +0x8b6:  lea    -0x168(%ebp),%eax
086639d6 +0x8bc:  mov    %eax,(%esp)
086639d9 +0x8bf:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
086639de +0x8c4:  mov    0x8(%ebp),%eax
086639e1 +0x8c7:  mov    %eax,(%esp)
086639e4 +0x8ca:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
086639e9 +0x8cf:  lea    -0x168(%ebp),%edx
086639ef +0x8d5:  mov    %edx,0x8(%esp)
086639f3 +0x8d9:  movl   $0x1057,0x4(%esp)
086639fb +0x8e1:  mov    %eax,(%esp)
086639fe +0x8e4:  call   084fbf2c <_ZNK10CInventory12GetInvenDataEiR10Inven_Item>  ; CInventory::GetInvenData(int, Inven_Item&) const
08663a03 +0x8e9:  mov    %eax,-0x1c(%ebp)
08663a06 +0x8ec:  cmpl   $0x0,-0x1c(%ebp)
08663a0a +0x8f0:  jns    08663b14 <+0x9fa>
08663a10 +0x8f6:  mov    -0x20(%ebp),%eax
08663a13 +0x8f9:  mov    (%eax),%eax
08663a15 +0x8fb:  add    $0x8,%eax
08663a18 +0x8fe:  mov    (%eax),%edx
08663a1a +0x900:  lea    -0x168(%ebp),%eax
08663a20 +0x906:  mov    %eax,0x4(%esp)
08663a24 +0x90a:  mov    -0x20(%ebp),%eax
08663a27 +0x90d:  mov    %eax,(%esp)
08663a2a +0x910:  call   *%edx
08663a2c +0x912:  movl   $0x3,-0x161(%ebp)
08663a36 +0x91c:  movl   $0x1057,-0x166(%ebp)
08663a40 +0x926:  mov    0x8(%ebp),%eax
08663a43 +0x929:  mov    %eax,(%esp)
08663a46 +0x92c:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08663a4b +0x931:  movl   $0x0,0x4c(%esp)
08663a53 +0x939:  movl   $0x1,0x48(%esp)
08663a5b +0x941:  movl   $0xd,0x44(%esp)
08663a63 +0x949:  mov    -0x168(%ebp),%edx
08663a69 +0x94f:  mov    %edx,0x4(%esp)
08663a6d +0x953:  mov    -0x164(%ebp),%edx
08663a73 +0x959:  mov    %edx,0x8(%esp)
08663a77 +0x95d:  mov    -0x160(%ebp),%edx
08663a7d +0x963:  mov    %edx,0xc(%esp)
08663a81 +0x967:  mov    -0x15c(%ebp),%edx
08663a87 +0x96d:  mov    %edx,0x10(%esp)
08663a8b +0x971:  mov    -0x158(%ebp),%edx
08663a91 +0x977:  mov    %edx,0x14(%esp)
08663a95 +0x97b:  mov    -0x154(%ebp),%edx
08663a9b +0x981:  mov    %edx,0x18(%esp)
08663a9f +0x985:  mov    -0x150(%ebp),%edx
08663aa5 +0x98b:  mov    %edx,0x1c(%esp)
08663aa9 +0x98f:  mov    -0x14c(%ebp),%edx
08663aaf +0x995:  mov    %edx,0x20(%esp)
08663ab3 +0x999:  mov    -0x148(%ebp),%edx
08663ab9 +0x99f:  mov    %edx,0x24(%esp)
08663abd +0x9a3:  mov    -0x144(%ebp),%edx
08663ac3 +0x9a9:  mov    %edx,0x28(%esp)
08663ac7 +0x9ad:  mov    -0x140(%ebp),%edx
08663acd +0x9b3:  mov    %edx,0x2c(%esp)
08663ad1 +0x9b7:  mov    -0x13c(%ebp),%edx
08663ad7 +0x9bd:  mov    %edx,0x30(%esp)
08663adb +0x9c1:  mov    -0x138(%ebp),%edx
08663ae1 +0x9c7:  mov    %edx,0x34(%esp)
08663ae5 +0x9cb:  mov    -0x134(%ebp),%edx
08663aeb +0x9d1:  mov    %edx,0x38(%esp)
08663aef +0x9d5:  mov    -0x130(%ebp),%edx
08663af5 +0x9db:  mov    %edx,0x3c(%esp)
08663af9 +0x9df:  movzbl -0x12c(%ebp),%edx
08663b00 +0x9e6:  mov    %dl,0x40(%esp)
08663b04 +0x9ea:  mov    %eax,(%esp)
08663b07 +0x9ed:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
08663b0c +0x9f2:  mov    %eax,-0x1c(%ebp)
08663b0f +0x9f5:  jmp    08663c40 <+0xb26>
08663b14 +0x9fa:  mov    -0x161(%ebp),%eax
08663b1a +0xa00:  cmp    $0x2,%eax
08663b1d +0xa03:  jg     08663c40 <+0xb26>
08663b23 +0xa09:  lea    -0x168(%ebp),%eax
08663b29 +0xa0f:  mov    %eax,(%esp)
08663b2c +0xa12:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08663b31 +0xa17:  mov    -0x161(%ebp),%edx
08663b37 +0xa1d:  mov    $0x3,%ecx
08663b3c +0xa22:  mov    %ecx,%ebx
08663b3e +0xa24:  sub    %edx,%ebx
08663b40 +0xa26:  mov    0x8(%ebp),%edx
08663b43 +0xa29:  lea    0x79700(%edx),%ecx
08663b49 +0xa2f:  movl   $0xd,0x14(%esp)
08663b51 +0xa37:  lea    -0x168(%ebp),%edx
08663b57 +0xa3d:  mov    %edx,0x10(%esp)
08663b5b +0xa41:  mov    %eax,0xc(%esp)
08663b5f +0xa45:  mov    %ebx,0x8(%esp)
08663b63 +0xa49:  movl   $0x1,0x4(%esp)
08663b6b +0xa51:  mov    %ecx,(%esp)
08663b6e +0xa54:  call   08682e84 <_ZN15cUserHistoryLog7ItemAddE10INVEN_TYPEiiRK10Inven_Item14eItemAddReason>  ; cUserHistoryLog::ItemAdd(INVEN_TYPE, int, int, Inven_Item const&, eItemAddReason)
08663b73 +0xa59:  movl   $0x3,-0x161(%ebp)
08663b7d +0xa63:  mov    0x8(%ebp),%eax
08663b80 +0xa66:  mov    %eax,(%esp)
08663b83 +0xa69:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08663b88 +0xa6e:  mov    -0x168(%ebp),%edx
08663b8e +0xa74:  mov    %edx,0xc(%esp)
08663b92 +0xa78:  mov    -0x164(%ebp),%edx
08663b98 +0xa7e:  mov    %edx,0x10(%esp)
08663b9c +0xa82:  mov    -0x160(%ebp),%edx
08663ba2 +0xa88:  mov    %edx,0x14(%esp)
08663ba6 +0xa8c:  mov    -0x15c(%ebp),%edx
08663bac +0xa92:  mov    %edx,0x18(%esp)
08663bb0 +0xa96:  mov    -0x158(%ebp),%edx
08663bb6 +0xa9c:  mov    %edx,0x1c(%esp)
08663bba +0xaa0:  mov    -0x154(%ebp),%edx
08663bc0 +0xaa6:  mov    %edx,0x20(%esp)
08663bc4 +0xaaa:  mov    -0x150(%ebp),%edx
08663bca +0xab0:  mov    %edx,0x24(%esp)
08663bce +0xab4:  mov    -0x14c(%ebp),%edx
08663bd4 +0xaba:  mov    %edx,0x28(%esp)
08663bd8 +0xabe:  mov    -0x148(%ebp),%edx
08663bde +0xac4:  mov    %edx,0x2c(%esp)
08663be2 +0xac8:  mov    -0x144(%ebp),%edx
08663be8 +0xace:  mov    %edx,0x30(%esp)
08663bec +0xad2:  mov    -0x140(%ebp),%edx
08663bf2 +0xad8:  mov    %edx,0x34(%esp)
08663bf6 +0xadc:  mov    -0x13c(%ebp),%edx
08663bfc +0xae2:  mov    %edx,0x38(%esp)
08663c00 +0xae6:  mov    -0x138(%ebp),%edx
08663c06 +0xaec:  mov    %edx,0x3c(%esp)
08663c0a +0xaf0:  mov    -0x134(%ebp),%edx
08663c10 +0xaf6:  mov    %edx,0x40(%esp)
08663c14 +0xafa:  mov    -0x130(%ebp),%edx
08663c1a +0xb00:  mov    %edx,0x44(%esp)
08663c1e +0xb04:  movzbl -0x12c(%ebp),%edx
08663c25 +0xb0b:  mov    %dl,0x48(%esp)
08663c29 +0xb0f:  mov    -0x1c(%ebp),%edx
08663c2c +0xb12:  mov    %edx,0x8(%esp)
08663c30 +0xb16:  movl   $0x1,0x4(%esp)
08663c38 +0xb1e:  mov    %eax,(%esp)
08663c3b +0xb21:  call   085000ae <_ZN10CInventory11update_itemE10INVEN_TYPEi10Inven_Item>  ; CInventory::update_item(INVEN_TYPE, int, Inven_Item)
08663c40 +0xb26:  cmpl   $0x0,-0x1c(%ebp)
08663c44 +0xb2a:  js     08663c68 <+0xb4e>
08663c46 +0xb2c:  mov    -0x1c(%ebp),%eax
08663c49 +0xb2f:  mov    %eax,0xc(%esp)
08663c4d +0xb33:  movl   $0x0,0x8(%esp)
08663c55 +0xb3b:  movl   $0x1,0x4(%esp)
08663c5d +0xb43:  mov    0x8(%ebp),%eax
08663c60 +0xb46:  mov    %eax,(%esp)
08663c63 +0xb49:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
08663c68 +0xb4e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08663c6d +0xb53:  mov    %eax,(%esp)
08663c70 +0xb56:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
08663c75 +0xb5b:  movl   $0x0,0x8(%esp)
08663c7d +0xb63:  mov    0x8(%ebp),%edx
08663c80 +0xb66:  mov    %edx,0x4(%esp)
08663c84 +0xb6a:  mov    %eax,(%esp)
08663c87 +0xb6d:  call   0810bf56 <_ZN13EventClassify15CEventScriptMng23process_level_up_rewardEP5CUserb>  ; EventClassify::CEventScriptMng::process_level_up_reward(CUser*, bool)
08663c8c +0xb72:  jmp    08663ca9 <+0xb8f>
08663c8e +0xb74:  mov    %edx,%ebx
08663c90 +0xb76:  mov    %eax,%esi
08663c92 +0xb78:  lea    -0x48(%ebp),%eax
08663c95 +0xb7b:  mov    %eax,(%esp)
08663c98 +0xb7e:  call   0822ade8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x492>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x492
08663c9d +0xb83:  mov    %esi,%eax
08663c9f +0xb85:  mov    %ebx,%edx
08663ca1 +0xb87:  mov    %eax,(%esp)
08663ca4 +0xb8a:  call   08ae3750 <_Unwind_Resume>
08663ca9 +0xb8f:  lea    -0x48(%ebp),%eax
08663cac +0xb92:  mov    %eax,(%esp)
08663caf +0xb95:  call   0822ade8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x492>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x492
08663cb4 +0xb9a:  lea    -0xc(%ebp),%esp
08663cb7 +0xb9d:  add    $0x0,%esp
08663cba +0xba0:  pop    %ebx
08663cbb +0xba1:  pop    %esi
08663cbc +0xba2:  pop    %edi
08663cbd +0xba3:  pop    %ebp
08663cbe +0xba4:  ret
08663cbf +0xba5:  nop
```

## 反编译 C

```c
// CUser::_onLevelUp @ 0x866311a

/* CUser::_onLevelUp() */

void __thiscall CUser::_onLevelUp(CUser *this)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  size_t sVar11;
  undefined4 uVar12;
  UserQuest *this_00;
  undefined4 *puVar13;
  CInventory *pCVar14;
  CDataManager *pCVar15;
  CEventScriptMng *this_01;
  char local_26c [256];
  undefined2 local_16c;
  undefined2 uStack_16a;
  undefined2 uStack_168;
  undefined1 uStack_166;
  int iStack_165;
  undefined1 uStack_161;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined1 local_130;
  Inven_Item local_12f;
  undefined1 local_12e;
  undefined4 local_12d;
  undefined4 local_128;
  undefined2 local_124;
  Inven_Item local_f2;
  undefined1 local_f1;
  undefined4 local_f0;
  undefined4 local_eb;
  undefined2 local_e7;
  Inven_Item local_b5 [61];
  stSelectQuestParam local_78 [40];
  _List_iterator<int> local_50 [4];
  list<int,std::allocator<int>> local_4c [8];
  _List_iterator local_44 [4];
  cMyTrace local_40 [16];
  undefined4 local_30;
  Quest *local_2c;
  int local_28;
  int *local_24;
  int local_20;
  
  iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
  if (((iVar4 == 0xf) &&
      (iVar4 = CUserCharacInfo::getCurCharacCreateTime((CUserCharacInfo *)this), 0x47bc94cf < iVar4)
      ) && (iVar4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_),
           iVar4 < 0x47d3fb71)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    pcVar5 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)this);
    uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
    uVar7 = get_acc_id(this);
    DB_InsertUnlimitSupportLog::makeRequest(uVar7,uVar6,pcVar5);
  }
  cVar2 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
  uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
  uVar7 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
  _processLevelReward(this,uVar7,uVar6,cVar2);
  piVar8 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x15);
  cVar2 = (**(code **)(*piVar8 + 0x34))(piVar8,0);
  if (cVar2 != '\0') {
    iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
    if (iVar4 == 0x12) {
      uVar9 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
      uVar10 = get_acc_id(this);
      DB_InsertArchieveEventLog::makeRequest(uVar10,uVar9,1);
    }
    iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
    if (iVar4 == 0x30) {
      uVar9 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
      uVar10 = get_acc_id(this);
      DB_InsertArchieveEventLog::makeRequest(uVar10,uVar9,2);
    }
  }
  iVar4 = G_CEnvironment();
  if ((*(int *)(iVar4 + 0x378) == 10) &&
     (uVar6 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_), uVar6 < 0x478e7051))
  {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
    if ((iVar4 == 0x1e) ||
       (iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this), iVar4 == 0x28)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      Inven_Item::Inven_Item(local_b5);
      iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
      if (iVar4 == 0x1e) {
        pcVar5 = (char *)RDARScriptStringManager::findString
                                   ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                    "game_server_msg_11",(bool *)0x0);
        strncpy(local_26c,pcVar5,0xff);
        uVar9 = GetServerGroup(this);
        sVar11 = strlen(local_26c);
        uVar10 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
        uVar12 = RDARScriptStringManager::findString
                           ((RDARScriptStringManager *)g_scriptStringManager_,4,"game_server_msg_09"
                            ,(bool *)0x0);
        WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                  (uVar12,local_b5,500000,uVar10,local_26c,sVar11,0,uVar9,0,0);
      }
      else {
        iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
        if (iVar4 == 0x28) {
          pcVar5 = (char *)RDARScriptStringManager::findString
                                     ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                      "game_server_msg_12",(bool *)0x0);
          strncpy(local_26c,pcVar5,0xff);
          uVar9 = GetServerGroup(this);
          sVar11 = strlen(local_26c);
          uVar10 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
          uVar12 = RDARScriptStringManager::findString
                             ((RDARScriptStringManager *)g_scriptStringManager_,4,
                              "game_server_msg_09",(bool *)0x0);
          WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                    (uVar12,local_b5,1000000,uVar10,local_26c,sVar11,0,uVar9,0,0);
        }
      }
    }
  }
  std::list<int,std::allocator<int>>::list(local_4c);
                    /* try { // try from 08663500 to 08663c8b has its CatchHandler @ 08663c8e */
  stSelectQuestParam::stSelectQuestParam(local_78,this);
  this_00 = (UserQuest *)getCurCharacQuestR(this);
  cVar2 = UserQuest::get_mail_quest_info(this_00,(list *)local_4c,local_78);
  if (cVar2 != '\0') {
    std::list<int,std::allocator<int>>::begin();
    while( true ) {
      std::list<int,std::allocator<int>>::end();
      cVar2 = std::_List_iterator<int>::operator!=(local_50,local_44);
      if (cVar2 == '\0') break;
      puVar13 = (undefined4 *)std::_List_iterator<int>::operator*(local_50);
      local_30 = *puVar13;
      iVar4 = G_CDataManager();
      local_2c = (Quest *)CDataManager::find_quest(iVar4);
      if (((local_2c != (Quest *)0x0) && (local_2c[0x108] == (Quest)0x0)) &&
         (iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this),
         iVar4 == *(int *)(local_2c + 0x20))) {
        _postQuestTriggerItem(this,local_2c);
      }
      std::_List_iterator<int>::operator++(local_50);
    }
  }
  cVar2 = isAffectedPremium(this,0x10);
  if ((cVar2 == '\0') ||
     (uVar6 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_), 0x46e1bbd0 < uVar6))
  {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    pCVar14 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
    iVar4 = CInventory::GetInvenRef(pCVar14,0,0xb);
    if (*(int *)(iVar4 + 2) - 0x65d6U < 5) {
      iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
      if (iVar4 == 0x1e) {
        pcVar5 = (char *)RDARScriptStringManager::findString
                                   ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                    "game_server_msg_05",(bool *)0x0);
        strncpy(local_26c,pcVar5,0xff);
        Inven_Item::Inven_Item(&local_f2);
        local_f0 = 0xf;
        local_f1 = 2;
        local_eb = 5;
        local_e7 = 0;
        Inven_Item::ResetItemAttr(&local_f2);
        uVar9 = GetServerGroup(this);
        sVar11 = strlen(local_26c);
        uVar10 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
        uVar12 = RDARScriptStringManager::findString
                           ((RDARScriptStringManager *)g_scriptStringManager_,4,"game_server_msg_08"
                            ,(bool *)0x0);
        WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                  (uVar12,&local_f2,0,uVar10,local_26c,sVar11,0,uVar9,0,0);
      }
      else {
        iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
        if (iVar4 == 0x28) {
          pcVar5 = (char *)RDARScriptStringManager::findString
                                     ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                      "game_server_msg_06",(bool *)0x0);
          strncpy(local_26c,pcVar5,0xff);
          Inven_Item::Inven_Item(&local_12f);
          local_12d = 0x24;
          local_12e = 2;
          local_128 = 5;
          local_124 = 0;
          Inven_Item::ResetItemAttr(&local_12f);
          uVar9 = GetServerGroup(this);
          sVar11 = strlen(local_26c);
          uVar10 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
          uVar12 = RDARScriptStringManager::findString
                             ((RDARScriptStringManager *)g_scriptStringManager_,4,
                              "game_server_msg_08",(bool *)0x0);
          WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                    (uVar12,&local_12f,0,uVar10,local_26c,sVar11,0,uVar9,0,0);
        }
      }
    }
  }
  processNPCGiftOnLevelUp();
  processLevelUpEventReward(this,false);
  processLevelUpEvent(this);
  iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
  if (iVar4 == 0x55) {
    sVar3 = CFatigueBatteryHandle::ActiveFatigueBattery_EndLevel
                      (GlobalData::s_fatigueBatteryHandle_,this);
    local_28 = (int)sVar3;
    if (local_28 != 0) {
      CUserCharacInfo::DecFatigueBatteryCharging((CUserCharacInfo *)this,sVar3);
      sVar3 = CUserCharacInfo::GetFatigueBatteryCharging((CUserCharacInfo *)this);
      uVar9 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
      cMyTrace::cMyTrace(local_40,"void CUser::_onLevelUp()",0x4290,0);
      cMyTrace::operator()
                (local_40,
                 "FATIGUE BATTERY ACTIVE END_LEVEL: charno(%d) , descFatigueAmount(%d), cur charging(%d)"
                 ,uVar9,local_28,(int)sVar3);
    }
  }
  iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
  if (iVar4 == 0x14) {
    pCVar15 = (CDataManager *)G_CDataManager();
    local_24 = (int *)CDataManager::find_item(pCVar15,0x1057);
    if (local_24 != (int *)0x0) {
      Inven_Item::Inven_Item((Inven_Item *)&local_16c);
      pCVar14 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
      local_20 = CInventory::GetInvenData(pCVar14,0x1057,(Inven_Item *)&local_16c);
      if (local_20 < 0) {
        (**(code **)(*local_24 + 8))(local_24,&local_16c);
        iStack_165 = 3;
        uStack_16a = 0x1057;
        uStack_168 = 0;
        uVar9 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
        local_20 = CInventory::insertItemIntoInventory
                             (uVar9,CONCAT22(uStack_16a,local_16c),
                              CONCAT13((undefined1)iStack_165,CONCAT12(uStack_166,uStack_168)),
                              CONCAT13(uStack_161,iStack_165._1_3_),local_160,local_15c,local_158,
                              local_154,local_150,local_14c,local_148,local_144,local_140,local_13c,
                              local_138,local_134,local_130,0xd,1,0);
      }
      else if (iStack_165 < 3) {
        uVar9 = Inven_Item::get_add_info((Inven_Item *)&local_16c);
        cUserHistoryLog::ItemAdd
                  ((cUserHistoryLog *)(this + 0x79700),1,3 - iStack_165,uVar9,&local_16c,0xd);
        iStack_165 = 3;
        uVar9 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
        CInventory::update_item
                  (uVar9,1,local_20,CONCAT22(uStack_16a,local_16c),
                   CONCAT13((undefined1)iStack_165,CONCAT12(uStack_166,uStack_168)),
                   CONCAT13(uStack_161,iStack_165._1_3_),local_160,local_15c,local_158,local_154,
                   local_150,local_14c,local_148,local_144,local_140,local_13c,local_138,local_134,
                   local_130);
      }
      if (-1 < local_20) {
        SendUpdateItemList(this,1,0,local_20);
      }
    }
  }
  pCVar15 = (CDataManager *)G_CDataManager();
  this_01 = (CEventScriptMng *)CDataManager::get_event_script_mng(pCVar15);
  EventClassify::CEventScriptMng::process_level_up_reward(this_01,this,false);
  std::list<int,std::allocator<int>>::~list(local_4c);
  return;
}
```
