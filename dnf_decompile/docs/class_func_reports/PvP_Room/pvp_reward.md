# pvp_reward

`_ZN8PvP_Room10pvp_rewardEv`

`PvP_Room::pvp_reward()`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085da882` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085da882  _ZN8PvP_Room10pvp_rewardEv
#           PvP_Room::pvp_reward()
# range [0x085da882, 0x085db7f5]
085da882 +0x000:  push   %ebp
085da883 +0x001:  mov    %esp,%ebp
085da885 +0x003:  push   %edi
085da886 +0x004:  push   %esi
085da887 +0x005:  push   %ebx
085da888 +0x006:  sub    $0xfc,%esp
085da88e +0x00c:  lea    -0xd8(%ebp),%eax
085da894 +0x012:  mov    %eax,0x4(%esp)
085da898 +0x016:  mov    0x8(%ebp),%eax
085da89b +0x019:  mov    %eax,(%esp)
085da89e +0x01c:  call   085dc52c <_ZNK8PvP_Room10GetRankingEPi>  ; PvP_Room::GetRanking(int*) const
085da8a3 +0x021:  mov    %eax,-0x6c(%ebp)
085da8a6 +0x024:  mov    0x8(%ebp),%eax
085da8a9 +0x027:  mov    %eax,(%esp)
085da8ac +0x02a:  call   085dc64c <_ZNK8PvP_Room6GetAceEv>  ; PvP_Room::GetAce() const
085da8b1 +0x02f:  mov    %eax,-0x68(%ebp)
085da8b4 +0x032:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085da8b9 +0x037:  mov    %eax,(%esp)
085da8bc +0x03a:  call   081424e8 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x83c>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x83c
085da8c1 +0x03f:  test   %al,%al
085da8c3 +0x041:  je     085da8f5 <+0x73>
085da8c5 +0x043:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085da8ca +0x048:  mov    %eax,(%esp)
085da8cd +0x04b:  call   081a0ab2 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x1a1>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x1a1
085da8d2 +0x050:  xor    $0x1,%eax
085da8d5 +0x053:  test   %al,%al
085da8d7 +0x055:  je     085da8f5 <+0x73>
085da8d9 +0x057:  mov    -0x6c(%ebp),%eax
085da8dc +0x05a:  mov    %eax,0x8(%esp)
085da8e0 +0x05e:  lea    -0xd8(%ebp),%eax
085da8e6 +0x064:  mov    %eax,0x4(%esp)
085da8ea +0x068:  mov    0x8(%ebp),%eax
085da8ed +0x06b:  mov    %eax,(%esp)
085da8f0 +0x06e:  call   085da210 <_ZN8PvP_Room20CalcuateVictoryPointEPii>  ; PvP_Room::CalcuateVictoryPoint(int*, int)
085da8f5 +0x073:  movb   $0x1,-0x62(%ebp)
085da8f9 +0x077:  movl   $0x0,-0x60(%ebp)
085da900 +0x07e:  jmp    085da93d <+0xbb>
085da902 +0x080:  mov    -0x60(%ebp),%eax
085da905 +0x083:  mov    0x8(%ebp),%edx
085da908 +0x086:  movzbl 0x5c8(%edx,%eax,1),%eax
085da910 +0x08e:  test   %al,%al
085da912 +0x090:  je     085da939 <+0xb7>
085da914 +0x092:  mov    -0x60(%ebp),%eax
085da917 +0x095:  mov    %eax,0x4(%esp)
085da91b +0x099:  mov    0x8(%ebp),%eax
085da91e +0x09c:  mov    %eax,(%esp)
085da921 +0x09f:  call   085da046 <_ZN8PvP_Room13IsPvpObserverEi>  ; PvP_Room::IsPvpObserver(int)
085da926 +0x0a4:  xor    $0x1,%eax
085da929 +0x0a7:  test   %al,%al
085da92b +0x0a9:  je     085da939 <+0xb7>
085da92d +0x0ab:  mov    -0x60(%ebp),%eax
085da930 +0x0ae:  mov    %al,-0x61(%ebp)
085da933 +0x0b1:  movb   $0x0,-0x62(%ebp)
085da937 +0x0b5:  jmp    085da948 <+0xc6>
085da939 +0x0b7:  addl   $0x1,-0x60(%ebp)
085da93d +0x0bb:  cmpl   $0x7,-0x60(%ebp)
085da941 +0x0bf:  setle  %al
085da944 +0x0c2:  test   %al,%al
085da946 +0x0c4:  jne    085da902 <+0x80>
085da948 +0x0c6:  mov    0x8(%ebp),%eax
085da94b +0x0c9:  mov    %eax,(%esp)
085da94e +0x0cc:  call   085da7cc <_ZN8PvP_Room25check_acquire_guild_pointEv>  ; PvP_Room::check_acquire_guild_point()
085da953 +0x0d1:  mov    %al,-0x59(%ebp)
085da956 +0x0d4:  mov    0x8(%ebp),%eax
085da959 +0x0d7:  mov    0x6e4(%eax),%eax
085da95f +0x0dd:  mov    (%eax),%eax
085da961 +0x0df:  add    $0x4c,%eax
085da964 +0x0e2:  mov    (%eax),%esi
085da966 +0x0e4:  cmpb   $0x1,-0x62(%ebp)
085da96a +0x0e8:  sete   %al
085da96d +0x0eb:  movzbl %al,%ebx
085da970 +0x0ee:  movzbl -0x61(%ebp),%eax
085da974 +0x0f2:  mov    %eax,0x4(%esp)
085da978 +0x0f6:  mov    0x8(%ebp),%eax
085da97b +0x0f9:  mov    %eax,(%esp)
085da97e +0x0fc:  call   085d9272 <_ZN8PvP_Room8get_teamEi>  ; PvP_Room::get_team(int)
085da983 +0x101:  mov    0x8(%ebp),%edx
085da986 +0x104:  mov    0x6e4(%edx),%edx
085da98c +0x10a:  mov    %ebx,0xc(%esp)
085da990 +0x10e:  mov    %eax,0x8(%esp)
085da994 +0x112:  mov    0x8(%ebp),%eax
085da997 +0x115:  mov    %eax,0x4(%esp)
085da99b +0x119:  mov    %edx,(%esp)
085da99e +0x11c:  call   *%esi
085da9a0 +0x11e:  movl   $0x0,-0x58(%ebp)
085da9a7 +0x125:  jmp    085db76f <+0xeed>
085da9ac +0x12a:  mov    -0x58(%ebp),%edx
085da9af +0x12d:  mov    0x8(%ebp),%eax
085da9b2 +0x130:  add    $0xc,%edx
085da9b5 +0x133:  mov    (%eax,%edx,4),%eax
085da9b8 +0x136:  mov    %eax,-0x54(%ebp)
085da9bb +0x139:  cmpl   $0x0,-0x54(%ebp)
085da9bf +0x13d:  je     085db76a <+0xee8>
085da9c5 +0x143:  mov    -0x58(%ebp),%edx
085da9c8 +0x146:  mov    0x8(%ebp),%eax
085da9cb +0x149:  add    $0xc,%edx
085da9ce +0x14c:  mov    (%eax,%edx,4),%ebx
085da9d1 +0x14f:  call   082348df <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9f89>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9f89
085da9d6 +0x154:  mov    %ebx,0x4(%esp)
085da9da +0x158:  mov    %eax,(%esp)
085da9dd +0x15b:  call   0847236a <_ZN19disconnect_detecter19CDisconnectDetecter14UnregisterUserEP5CUser>  ; disconnect_detecter::CDisconnectDetecter::UnregisterUser(CUser*)
085da9e2 +0x160:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
085da9e9 +0x167:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
085da9ee +0x16c:  mov    0x8(%ebp),%edx
085da9f1 +0x16f:  mov    0x618(%edx),%edx
085da9f7 +0x175:  sub    %edx,%eax
085da9f9 +0x177:  movl   $0x1,0x8(%esp)
085daa01 +0x17f:  mov    %eax,0x4(%esp)
085daa05 +0x183:  mov    -0x54(%ebp),%eax
085daa08 +0x186:  mov    %eax,(%esp)
085daa0b +0x189:  call   0865d986 <_ZN5CUser17add_pvp_play_infoEjj>  ; CUser::add_pvp_play_info(unsigned int, unsigned int)
085daa10 +0x18e:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085daa15 +0x193:  mov    %eax,(%esp)
085daa18 +0x196:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
085daa1d +0x19b:  test   %al,%al
085daa1f +0x19d:  je     085daa6e <+0x1ec>
085daa21 +0x19f:  mov    &_ZN10GlobalData15s_event_managerE,%eax
085daa26 +0x1a4:  movl   $0x38,0x4(%esp)
085daa2e +0x1ac:  mov    %eax,(%esp)
085daa31 +0x1af:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
085daa36 +0x1b4:  mov    (%eax),%edx
085daa38 +0x1b6:  add    $0x34,%edx
085daa3b +0x1b9:  mov    (%edx),%edx
085daa3d +0x1bb:  movl   $0x0,0x4(%esp)
085daa45 +0x1c3:  mov    %eax,(%esp)
085daa48 +0x1c6:  call   *%edx
085daa4a +0x1c8:  test   %al,%al
085daa4c +0x1ca:  je     085daa6e <+0x1ec>
085daa4e +0x1cc:  mov    -0x58(%ebp),%eax
085daa51 +0x1cf:  mov    %eax,0x4(%esp)
085daa55 +0x1d3:  mov    0x8(%ebp),%eax
085daa58 +0x1d6:  mov    %eax,(%esp)
085daa5b +0x1d9:  call   085da046 <_ZN8PvP_Room13IsPvpObserverEi>  ; PvP_Room::IsPvpObserver(int)
085daa60 +0x1de:  xor    $0x1,%eax
085daa63 +0x1e1:  test   %al,%al
085daa65 +0x1e3:  je     085daa6e <+0x1ec>
085daa67 +0x1e5:  mov    $0x1,%eax
085daa6c +0x1ea:  jmp    085daa73 <+0x1f1>
085daa6e +0x1ec:  mov    $0x0,%eax
085daa73 +0x1f1:  test   %al,%al
085daa75 +0x1f3:  je     085dab07 <+0x285>
085daa7b +0x1f9:  mov    -0x54(%ebp),%eax
085daa7e +0x1fc:  mov    %eax,(%esp)
085daa81 +0x1ff:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
085daa86 +0x204:  test   %eax,%eax
085daa88 +0x206:  setne  %al
085daa8b +0x209:  test   %al,%al
085daa8d +0x20b:  je     085dab07 <+0x285>
085daa8f +0x20d:  lea    -0x9d(%ebp),%eax
085daa95 +0x213:  mov    %eax,(%esp)
085daa98 +0x216:  call   085df954 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x1db>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x1db
085daa9d +0x21b:  mov    -0x54(%ebp),%eax
085daaa0 +0x21e:  mov    %eax,(%esp)
085daaa3 +0x221:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
085daaa8 +0x226:  mov    %al,-0x93(%ebp)
085daaae +0x22c:  mov    -0x58(%ebp),%eax
085daab1 +0x22f:  mov    0x8(%ebp),%edx
085daab4 +0x232:  movzbl 0x5c8(%edx,%eax,1),%eax
085daabc +0x23a:  test   %al,%al
085daabe +0x23c:  je     085daac9 <+0x247>
085daac0 +0x23e:  movb   $0x1,-0x92(%ebp)
085daac7 +0x245:  jmp    085daad0 <+0x24e>
085daac9 +0x247:  movb   $0x1,-0x91(%ebp)
085daad0 +0x24e:  lea    -0x9d(%ebp),%ebx
085daad6 +0x254:  mov    -0x54(%ebp),%eax
085daad9 +0x257:  mov    %eax,(%esp)
085daadc +0x25a:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
085daae1 +0x25f:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%edx
085daae7 +0x265:  mov    %eax,0x4(%esp)
085daaeb +0x269:  mov    %edx,(%esp)
085daaee +0x26c:  call   08111cf8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x120a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x120a
085daaf3 +0x271:  movl   $0xd,0x8(%esp)
085daafb +0x279:  mov    %ebx,0x4(%esp)
085daaff +0x27d:  mov    %eax,(%esp)
085dab02 +0x280:  call   08472044 <_ZN21CStatisticServerProxy10SendPacketEPci>  ; CStatisticServerProxy::SendPacket(char*, int)
085dab07 +0x285:  movl   $0x0,-0x80(%ebp)
085dab0e +0x28c:  cmpb   $0x0,-0x59(%ebp)
085dab12 +0x290:  je     085dab46 <+0x2c4>
085dab14 +0x292:  mov    -0x58(%ebp),%eax
085dab17 +0x295:  mov    0x8(%ebp),%edx
085dab1a +0x298:  movzbl 0x5c8(%edx,%eax,1),%eax
085dab22 +0x2a0:  test   %al,%al
085dab24 +0x2a2:  je     085dab46 <+0x2c4>
085dab26 +0x2a4:  mov    -0x58(%ebp),%eax
085dab29 +0x2a7:  mov    %eax,0x4(%esp)
085dab2d +0x2ab:  mov    0x8(%ebp),%eax
085dab30 +0x2ae:  mov    %eax,(%esp)
085dab33 +0x2b1:  call   085da046 <_ZN8PvP_Room13IsPvpObserverEi>  ; PvP_Room::IsPvpObserver(int)
085dab38 +0x2b6:  xor    $0x1,%eax
085dab3b +0x2b9:  test   %al,%al
085dab3d +0x2bb:  je     085dab46 <+0x2c4>
085dab3f +0x2bd:  mov    $0x1,%eax
085dab44 +0x2c2:  jmp    085dab4b <+0x2c9>
085dab46 +0x2c4:  mov    $0x0,%eax
085dab4b +0x2c9:  test   %al,%al
085dab4d +0x2cb:  je     085dab5a <+0x2d8>
085dab4f +0x2cd:  mov    -0x54(%ebp),%eax
085dab52 +0x2d0:  mov    %eax,(%esp)
085dab55 +0x2d3:  call   0865ccc8 <_ZN5CUser20add_guild_point_itemEv>  ; CUser::add_guild_point_item()
085dab5a +0x2d8:  movl   $0x8,0x4(%esp)
085dab62 +0x2e0:  mov    -0x54(%ebp),%eax
085dab65 +0x2e3:  mov    %eax,(%esp)
085dab68 +0x2e6:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
085dab6d +0x2eb:  mov    %eax,-0x44(%ebp)
085dab70 +0x2ee:  mov    0x8(%ebp),%eax
085dab73 +0x2f1:  mov    0x4(%eax),%eax
085dab76 +0x2f4:  cmp    $0x2,%eax
085dab79 +0x2f7:  sete   %al
085dab7c +0x2fa:  movzbl %al,%edx
085dab7f +0x2fd:  mov    -0x58(%ebp),%eax
085dab82 +0x300:  mov    0x8(%ebp),%ecx
085dab85 +0x303:  movzbl 0x5c8(%ecx,%eax,1),%eax
085dab8d +0x30b:  movzbl %al,%eax
085dab90 +0x30e:  mov    %edx,0x8(%esp)
085dab94 +0x312:  mov    %eax,0x4(%esp)
085dab98 +0x316:  mov    -0x44(%ebp),%eax
085dab9b +0x319:  mov    %eax,(%esp)
085dab9e +0x31c:  call   085e51ce <_ZN19CMissionList_Charac8setIssueEbb>  ; CMissionList_Charac::setIssue(bool, bool)
085daba3 +0x321:  mov    0x8(%ebp),%eax
085daba6 +0x324:  mov    0x4(%eax),%eax
085daba9 +0x327:  mov    %eax,0x4(%esp)
085dabad +0x32b:  lea    -0xac(%ebp),%eax
085dabb3 +0x331:  mov    %eax,(%esp)
085dabb6 +0x334:  call   085e1a44 <_ZN31MissionClearCondition_ParameterC1E15PVP_BATTLE_MODE>  ; MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)
085dabbb +0x339:  mov    0x8(%ebp),%eax
085dabbe +0x33c:  mov    0x4(%eax),%eax
085dabc1 +0x33f:  cmp    $0x2,%eax
085dabc4 +0x342:  sete   %al
085dabc7 +0x345:  movzbl %al,%eax
085dabca +0x348:  mov    %eax,0x4(%esp)
085dabce +0x34c:  mov    -0x44(%ebp),%eax
085dabd1 +0x34f:  mov    %eax,(%esp)
085dabd4 +0x352:  call   085e5194 <_ZNK19CMissionList_Charac13getIssue_modeEb>  ; CMissionList_Charac::getIssue_mode(bool) const
085dabd9 +0x357:  mov    %ax,-0xab(%ebp)
085dabe0 +0x35e:  movb   $0x0,-0xad(%ebp)
085dabe7 +0x365:  lea    -0xad(%ebp),%eax
085dabed +0x36b:  mov    %eax,0xc(%esp)
085dabf1 +0x36f:  lea    -0xac(%ebp),%eax
085dabf7 +0x375:  mov    %eax,0x8(%esp)
085dabfb +0x379:  mov    -0x54(%ebp),%eax
085dabfe +0x37c:  mov    %eax,0x4(%esp)
085dac02 +0x380:  mov    -0x44(%ebp),%eax
085dac05 +0x383:  mov    %eax,(%esp)
085dac08 +0x386:  call   085e59f0 <_ZN19CMissionList_Charac16Update_Win_eventER5CUserRK31MissionClearCondition_ParameterRb>  ; CMissionList_Charac::Update_Win_event(CUser&, MissionClearCondition_Parameter const&, bool&)
085dac0d +0x38b:  movzbl -0xad(%ebp),%eax
085dac14 +0x392:  test   %al,%al
085dac16 +0x394:  je     085dac63 <+0x3e1>
085dac18 +0x396:  mov    -0x54(%ebp),%eax
085dac1b +0x399:  mov    %eax,(%esp)
085dac1e +0x39c:  call   0822f15e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4808>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4808
085dac23 +0x3a1:  mov    0x8(%eax),%edx
085dac26 +0x3a4:  mov    &_ZN10GlobalData15s_ref_pvp_gradeE,%eax
085dac2b +0x3a9:  mov    %edx,0x4(%esp)
085dac2f +0x3ad:  mov    %eax,(%esp)
085dac32 +0x3b0:  call   085d47ce <_ZNK11RefPvpGrade11GetPvpGradeEi>  ; RefPvpGrade::GetPvpGrade(int) const
085dac37 +0x3b5:  mov    %eax,-0x40(%ebp)
085dac3a +0x3b8:  mov    -0x54(%ebp),%eax
085dac3d +0x3bb:  mov    %eax,(%esp)
085dac40 +0x3be:  call   0822f15e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4808>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4808
085dac45 +0x3c3:  mov    0x14(%eax),%eax
085dac48 +0x3c6:  cmp    -0x40(%ebp),%eax
085dac4b +0x3c9:  setl   %al
085dac4e +0x3cc:  test   %al,%al
085dac50 +0x3ce:  je     085dac63 <+0x3e1>
085dac52 +0x3d0:  mov    -0x54(%ebp),%eax
085dac55 +0x3d3:  mov    %eax,(%esp)
085dac58 +0x3d6:  call   084ebec4 <_GLOBAL__I__Z7getUserj+0x2e76>  ; global constructors keyed to getUser(unsigned int)+0x2e76
085dac5d +0x3db:  mov    -0x40(%ebp),%edx
085dac60 +0x3de:  mov    %edx,0x14(%eax)
085dac63 +0x3e1:  mov    -0x54(%ebp),%eax
085dac66 +0x3e4:  mov    %eax,(%esp)
085dac69 +0x3e7:  call   08662528 <_ZN5CUser16send_MissionListEv>  ; CUser::send_MissionList()
085dac6e +0x3ec:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085dac73 +0x3f1:  mov    %eax,(%esp)
085dac76 +0x3f4:  call   081424e8 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x83c>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x83c
085dac7b +0x3f9:  test   %al,%al
085dac7d +0x3fb:  je     085dae4c <+0x5ca>
085dac83 +0x401:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085dac88 +0x406:  mov    %eax,(%esp)
085dac8b +0x409:  call   085dfa92 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x319>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x319
085dac90 +0x40e:  test   %al,%al
085dac92 +0x410:  je     085dada6 <+0x524>
085dac98 +0x416:  mov    -0x58(%ebp),%eax
085dac9b +0x419:  mov    0x8(%ebp),%edx
085dac9e +0x41c:  movzbl 0x5c8(%edx,%eax,1),%eax
085daca6 +0x424:  movzbl %al,%eax
085daca9 +0x427:  lea    -0x80(%ebp),%edx
085dacac +0x42a:  mov    %edx,0x8(%esp)
085dacb0 +0x42e:  mov    %eax,0x4(%esp)
085dacb4 +0x432:  mov    -0x54(%ebp),%eax
085dacb7 +0x435:  mov    %eax,(%esp)
085dacba +0x438:  call   0865c678 <_ZN5CUser14add_pvp_resultEbPj>  ; CUser::add_pvp_result(bool, unsigned int*)
085dacbf +0x43d:  mov    0x8(%ebp),%eax
085dacc2 +0x440:  mov    0x4(%eax),%eax
085dacc5 +0x443:  cmp    $0x4,%eax
085dacc8 +0x446:  je     085dacd5 <+0x453>
085dacca +0x448:  mov    0x8(%ebp),%eax
085daccd +0x44b:  mov    0x4(%eax),%eax
085dacd0 +0x44e:  cmp    $0x5,%eax
085dacd3 +0x451:  jne    085dacdc <+0x45a>
085dacd5 +0x453:  movl   $0x0,-0x80(%ebp)
085dacdc +0x45a:  mov    -0x58(%ebp),%eax
085dacdf +0x45d:  mov    0x8(%ebp),%edx
085dace2 +0x460:  movzbl 0x5c8(%edx,%eax,1),%eax
085dacea +0x468:  test   %al,%al
085dacec +0x46a:  je     085dae48 <+0x5c6>
085dacf2 +0x470:  mov    0x8(%ebp),%eax
085dacf5 +0x473:  mov    0x4(%eax),%eax
085dacf8 +0x476:  cmp    $0x1,%eax
085dacfb +0x479:  je     085dad08 <+0x486>
085dacfd +0x47b:  mov    0x8(%ebp),%eax
085dad00 +0x47e:  mov    0x4(%eax),%eax
085dad03 +0x481:  cmp    $0x4,%eax
085dad06 +0x484:  jne    085dad30 <+0x4ae>
085dad08 +0x486:  movl   $0x0,0xc(%esp)
085dad10 +0x48e:  movl   $0x0,0x8(%esp)
085dad18 +0x496:  movl   $0x12,0x4(%esp)
085dad20 +0x49e:  mov    -0x54(%ebp),%eax
085dad23 +0x4a1:  mov    %eax,(%esp)
085dad26 +0x4a4:  call   08122390 <_ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS>  ; APSystem::CUserProc::ClearActionAndSendtoUser(CUser*, APSystem::_ActionGroupIndex, int, ENUM_PACKETCLASS)
085dad2b +0x4a9:  jmp    085dae4c <+0x5ca>
085dad30 +0x4ae:  mov    0x8(%ebp),%eax
085dad33 +0x4b1:  mov    0x4(%eax),%eax
085dad36 +0x4b4:  cmp    $0x2,%eax
085dad39 +0x4b7:  je     085dad46 <+0x4c4>
085dad3b +0x4b9:  mov    0x8(%ebp),%eax
085dad3e +0x4bc:  mov    0x4(%eax),%eax
085dad41 +0x4bf:  cmp    $0x5,%eax
085dad44 +0x4c2:  jne    085dad6f <+0x4ed>
085dad46 +0x4c4:  movl   $0x0,0xc(%esp)
085dad4e +0x4cc:  movl   $0x0,0x8(%esp)
085dad56 +0x4d4:  movl   $0x13,0x4(%esp)
085dad5e +0x4dc:  mov    -0x54(%ebp),%eax
085dad61 +0x4df:  mov    %eax,(%esp)
085dad64 +0x4e2:  call   08122390 <_ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS>  ; APSystem::CUserProc::ClearActionAndSendtoUser(CUser*, APSystem::_ActionGroupIndex, int, ENUM_PACKETCLASS)
085dad69 +0x4e7:  nop
085dad6a +0x4e8:  jmp    085dae4c <+0x5ca>
085dad6f +0x4ed:  mov    0x8(%ebp),%eax
085dad72 +0x4f0:  mov    0x4(%eax),%eax
085dad75 +0x4f3:  cmp    $0x3,%eax
085dad78 +0x4f6:  jne    085dae4b <+0x5c9>
085dad7e +0x4fc:  movl   $0x0,0xc(%esp)
085dad86 +0x504:  movl   $0x0,0x8(%esp)
085dad8e +0x50c:  movl   $0x14,0x4(%esp)
085dad96 +0x514:  mov    -0x54(%ebp),%eax
085dad99 +0x517:  mov    %eax,(%esp)
085dad9c +0x51a:  call   08122390 <_ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS>  ; APSystem::CUserProc::ClearActionAndSendtoUser(CUser*, APSystem::_ActionGroupIndex, int, ENUM_PACKETCLASS)
085dada1 +0x51f:  jmp    085dae4c <+0x5ca>
085dada6 +0x524:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085dadab +0x529:  mov    %eax,(%esp)
085dadae +0x52c:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
085dadb3 +0x531:  cmp    $0x6,%eax
085dadb6 +0x534:  sete   %al
085dadb9 +0x537:  test   %al,%al
085dadbb +0x539:  je     085dae4c <+0x5ca>
085dadc1 +0x53f:  mov    -0x58(%ebp),%eax
085dadc4 +0x542:  mov    0x8(%ebp),%edx
085dadc7 +0x545:  movzbl 0x5c8(%edx,%eax,1),%eax
085dadcf +0x54d:  test   %al,%al
085dadd1 +0x54f:  je     085dae2a <+0x5a8>
085dadd3 +0x551:  mov    0x8(%ebp),%eax
085dadd6 +0x554:  mov    0x4(%eax),%eax
085dadd9 +0x557:  cmp    $0x2,%eax
085daddc +0x55a:  je     085dadf4 <+0x572>
085dadde +0x55c:  mov    0x8(%ebp),%eax
085dade1 +0x55f:  mov    0x4(%eax),%eax
085dade4 +0x562:  cmp    $0x3,%eax
085dade7 +0x565:  je     085dadf4 <+0x572>
085dade9 +0x567:  mov    0x8(%ebp),%eax
085dadec +0x56a:  mov    0x4(%eax),%eax
085dadef +0x56d:  cmp    $0x5,%eax
085dadf2 +0x570:  jne    085dadfe <+0x57c>
085dadf4 +0x572:  movl   $0x1,-0x3c(%ebp)
085dadfb +0x579:  nop
085dadfc +0x57a:  jmp    085dae34 <+0x5b2>
085dadfe +0x57c:  mov    0x8(%ebp),%eax
085dae01 +0x57f:  mov    %eax,(%esp)
085dae04 +0x582:  call   085da840 <_ZN8PvP_Room14count_pvp_userEv>  ; PvP_Room::count_pvp_user()
085dae09 +0x587:  mov    %eax,-0x38(%ebp)
085dae0c +0x58a:  cmpl   $0x3,-0x38(%ebp)
085dae10 +0x58e:  jg     085dae1b <+0x599>
085dae12 +0x590:  movl   $0x1,-0x3c(%ebp)
085dae19 +0x597:  jmp    085dae34 <+0x5b2>
085dae1b +0x599:  cmpl   $0x3,-0x38(%ebp)
085dae1f +0x59d:  jle    085dae33 <+0x5b1>
085dae21 +0x59f:  movl   $0x2,-0x3c(%ebp)
085dae28 +0x5a6:  jmp    085dae34 <+0x5b2>
085dae2a +0x5a8:  movl   $0xffffffff,-0x3c(%ebp)
085dae31 +0x5af:  jmp    085dae34 <+0x5b2>
085dae33 +0x5b1:  nop
085dae34 +0x5b2:  mov    -0x3c(%ebp),%eax
085dae37 +0x5b5:  mov    %eax,0x4(%esp)
085dae3b +0x5b9:  mov    -0x54(%ebp),%eax
085dae3e +0x5bc:  mov    %eax,(%esp)
085dae41 +0x5bf:  call   0865c936 <_ZN5CUser20add_guild_pvp_resultEi>  ; CUser::add_guild_pvp_result(int)
085dae46 +0x5c4:  jmp    085dae4c <+0x5ca>
085dae48 +0x5c6:  nop
085dae49 +0x5c7:  jmp    085dae4c <+0x5ca>
085dae4b +0x5c9:  nop
085dae4c +0x5ca:  movl   $0xffff,-0x50(%ebp)
085dae53 +0x5d1:  movl   $0x0,-0x4c(%ebp)
085dae5a +0x5d8:  movl   $0x0,-0x84(%ebp)
085dae64 +0x5e2:  mov    0x8(%ebp),%eax
085dae67 +0x5e5:  mov    0x4(%eax),%eax
085dae6a +0x5e8:  cmp    $0x3,%eax
085dae6d +0x5eb:  jne    085daec3 <+0x641>
085dae6f +0x5ed:  mov    0x8(%ebp),%eax
085dae72 +0x5f0:  lea    0x620(%eax),%edx
085dae78 +0x5f6:  lea    -0x84(%ebp),%eax
085dae7e +0x5fc:  mov    %eax,0x4(%esp)
085dae82 +0x600:  mov    %edx,(%esp)
085dae85 +0x603:  call   085ded74 <_ZN15CRelayBattleMgr19GetAllKillUserIndexEPi>  ; CRelayBattleMgr::GetAllKillUserIndex(int*)
085dae8a +0x608:  mov    %eax,-0x4c(%ebp)
085dae8d +0x60b:  cmpl   $0x0,-0x4c(%ebp)
085dae91 +0x60f:  js     085daec3 <+0x641>
085dae93 +0x611:  cmpl   $0x7,-0x4c(%ebp)
085dae97 +0x615:  jg     085daec3 <+0x641>
085dae99 +0x617:  mov    -0x4c(%ebp),%edx
085dae9c +0x61a:  mov    0x8(%ebp),%eax
085dae9f +0x61d:  add    $0xc,%edx
085daea2 +0x620:  mov    (%eax,%edx,4),%eax
085daea5 +0x623:  test   %eax,%eax
085daea7 +0x625:  je     085daec3 <+0x641>
085daea9 +0x627:  mov    -0x4c(%ebp),%edx
085daeac +0x62a:  mov    0x8(%ebp),%eax
085daeaf +0x62d:  add    $0xc,%edx
085daeb2 +0x630:  mov    (%eax,%edx,4),%eax
085daeb5 +0x633:  mov    %eax,(%esp)
085daeb8 +0x636:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
085daebd +0x63b:  movzwl %ax,%eax
085daec0 +0x63e:  mov    %eax,-0x50(%ebp)
085daec3 +0x641:  lea    -0x90(%ebp),%eax
085daec9 +0x647:  mov    %eax,(%esp)
085daecc +0x64a:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085daed1 +0x64f:  lea    -0x90(%ebp),%eax
085daed7 +0x655:  mov    %eax,(%esp)
085daeda +0x658:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
085daedf +0x65d:  movl   $0x2f,0x8(%esp)
085daee7 +0x665:  movl   $0x0,0x4(%esp)
085daeef +0x66d:  lea    -0x90(%ebp),%eax
085daef5 +0x673:  mov    %eax,(%esp)
085daef8 +0x676:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085daefd +0x67b:  movzbl -0x61(%ebp),%eax
085daf01 +0x67f:  mov    %eax,0x4(%esp)
085daf05 +0x683:  lea    -0x90(%ebp),%eax
085daf0b +0x689:  mov    %eax,(%esp)
085daf0e +0x68c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085daf13 +0x691:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085daf18 +0x696:  mov    %eax,(%esp)
085daf1b +0x699:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
085daf20 +0x69e:  cmp    $0xf,%eax
085daf23 +0x6a1:  sete   %al
085daf26 +0x6a4:  test   %al,%al
085daf28 +0x6a6:  je     085daf59 <+0x6d7>
085daf2a +0x6a8:  movl   $0x7,0x4(%esp)
085daf32 +0x6b0:  mov    -0x54(%ebp),%eax
085daf35 +0x6b3:  mov    %eax,(%esp)
085daf38 +0x6b6:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
085daf3d +0x6bb:  mov    %eax,(%esp)
085daf40 +0x6be:  call   085dfdac <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x633>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x633
085daf45 +0x6c3:  mov    %eax,0x4(%esp)
085daf49 +0x6c7:  lea    -0x90(%ebp),%eax
085daf4f +0x6cd:  mov    %eax,(%esp)
085daf52 +0x6d0:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085daf57 +0x6d5:  jmp    085dafd4 <+0x752>
085daf59 +0x6d7:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085daf5e +0x6dc:  mov    %eax,(%esp)
085daf61 +0x6df:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
085daf66 +0x6e4:  cmp    $0x10,%eax
085daf69 +0x6e7:  sete   %al
085daf6c +0x6ea:  test   %al,%al
085daf6e +0x6ec:  je     085daf88 <+0x706>
085daf70 +0x6ee:  movl   $0x0,0x4(%esp)
085daf78 +0x6f6:  lea    -0x90(%ebp),%eax
085daf7e +0x6fc:  mov    %eax,(%esp)
085daf81 +0x6ff:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085daf86 +0x704:  jmp    085dafd4 <+0x752>
085daf88 +0x706:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085daf8d +0x70b:  mov    %eax,(%esp)
085daf90 +0x70e:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
085daf95 +0x713:  cmp    $0xe,%eax
085daf98 +0x716:  sete   %al
085daf9b +0x719:  test   %al,%al
085daf9d +0x71b:  je     085dafb7 <+0x735>
085daf9f +0x71d:  movl   $0x0,0x4(%esp)
085dafa7 +0x725:  lea    -0x90(%ebp),%eax
085dafad +0x72b:  mov    %eax,(%esp)
085dafb0 +0x72e:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085dafb5 +0x733:  jmp    085dafd4 <+0x752>
085dafb7 +0x735:  mov    -0x54(%ebp),%eax
085dafba +0x738:  mov    %eax,(%esp)
085dafbd +0x73b:  call   0817a17c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x1fa>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x1fa
085dafc2 +0x740:  mov    %eax,0x4(%esp)
085dafc6 +0x744:  lea    -0x90(%ebp),%eax
085dafcc +0x74a:  mov    %eax,(%esp)
085dafcf +0x74d:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085dafd4 +0x752:  mov    -0x54(%ebp),%eax
085dafd7 +0x755:  mov    %eax,(%esp)
085dafda +0x758:  call   0819ee4a <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x86>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x86
085dafdf +0x75d:  mov    %eax,0x4(%esp)
085dafe3 +0x761:  lea    -0x90(%ebp),%eax
085dafe9 +0x767:  mov    %eax,(%esp)
085dafec +0x76a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085daff1 +0x76f:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085daff6 +0x774:  mov    %eax,(%esp)
085daff9 +0x777:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
085daffe +0x77c:  cmp    $0x6,%eax
085db001 +0x77f:  sete   %al
085db004 +0x782:  test   %al,%al
085db006 +0x784:  je     085db023 <+0x7a1>
085db008 +0x786:  movl   $0x0,0x4(%esp)
085db010 +0x78e:  lea    -0x90(%ebp),%eax
085db016 +0x794:  mov    %eax,(%esp)
085db019 +0x797:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085db01e +0x79c:  jmp    085db111 <+0x88f>
085db023 +0x7a1:  mov    -0x54(%ebp),%eax
085db026 +0x7a4:  mov    %eax,(%esp)
085db029 +0x7a7:  call   085df99a <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x221>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x221
085db02e +0x7ac:  mov    %eax,%ebx
085db030 +0x7ae:  mov    -0x54(%ebp),%eax
085db033 +0x7b1:  mov    %eax,(%esp)
085db036 +0x7b4:  call   085df9a6 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x22d>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x22d
085db03b +0x7b9:  mov    %ebx,%edx
085db03d +0x7bb:  sub    %eax,%edx
085db03f +0x7bd:  mov    %edx,%eax
085db041 +0x7bf:  mov    %eax,-0x34(%ebp)
085db044 +0x7c2:  cmpl   $0xffff,-0x50(%ebp)
085db04b +0x7c9:  je     085db0a1 <+0x81f>
085db04d +0x7cb:  mov    -0x58(%ebp),%edx
085db050 +0x7ce:  mov    0x8(%ebp),%eax
085db053 +0x7d1:  add    $0x14,%edx
085db056 +0x7d4:  mov    (%eax,%edx,4),%edx
085db059 +0x7d7:  mov    -0x84(%ebp),%eax
085db05f +0x7dd:  cmp    %eax,%edx
085db061 +0x7df:  jne    085db0a1 <+0x81f>
085db063 +0x7e1:  mov    -0x84(%ebp),%eax
085db069 +0x7e7:  mov    %eax,0x4(%esp)
085db06d +0x7eb:  mov    0x8(%ebp),%eax
085db070 +0x7ee:  mov    %eax,(%esp)
085db073 +0x7f1:  call   08568d22 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x6ec>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x6ec
085db078 +0x7f6:  mov    %eax,%edx
085db07a +0x7f8:  mov    %edx,%eax
085db07c +0x7fa:  shl    $0x2,%eax
085db07f +0x7fd:  add    %edx,%eax
085db081 +0x7ff:  mov    %eax,%ecx
085db083 +0x801:  imul   -0x34(%ebp),%ecx
085db087 +0x805:  mov    $0x51eb851f,%edx
085db08c +0x80a:  mov    %ecx,%eax
085db08e +0x80c:  imul   %edx
085db090 +0x80e:  sar    $0x5,%edx
085db093 +0x811:  mov    %ecx,%eax
085db095 +0x813:  sar    $0x1f,%eax
085db098 +0x816:  mov    %edx,%ecx
085db09a +0x818:  sub    %eax,%ecx
085db09c +0x81a:  mov    %ecx,%eax
085db09e +0x81c:  add    %eax,-0x34(%ebp)
085db0a1 +0x81f:  mov    -0x54(%ebp),%eax
085db0a4 +0x822:  mov    %eax,(%esp)
085db0a7 +0x825:  call   084ebec4 <_GLOBAL__I__Z7getUserj+0x2e76>  ; global constructors keyed to getUser(unsigned int)+0x2e76
085db0ac +0x82a:  mov    %eax,%ebx
085db0ae +0x82c:  mov    -0x54(%ebp),%eax
085db0b1 +0x82f:  mov    %eax,(%esp)
085db0b4 +0x832:  call   085df9a6 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x22d>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x22d
085db0b9 +0x837:  add    -0x34(%ebp),%eax
085db0bc +0x83a:  mov    %eax,0x8(%ebx)
085db0bf +0x83d:  mov    -0x34(%ebp),%eax
085db0c2 +0x840:  mov    %eax,0x4(%esp)
085db0c6 +0x844:  lea    -0x90(%ebp),%eax
085db0cc +0x84a:  mov    %eax,(%esp)
085db0cf +0x84d:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085db0d4 +0x852:  mov    -0x54(%ebp),%eax
085db0d7 +0x855:  mov    %eax,(%esp)
085db0da +0x858:  call   085df9a6 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x22d>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x22d
085db0df +0x85d:  mov    %eax,%ebx
085db0e1 +0x85f:  mov    -0x54(%ebp),%eax
085db0e4 +0x862:  mov    %eax,(%esp)
085db0e7 +0x865:  call   0822f15e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4808>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4808
085db0ec +0x86a:  mov    0x8(%eax),%eax
085db0ef +0x86d:  mov    -0x34(%ebp),%edx
085db0f2 +0x870:  mov    %edx,0x10(%esp)
085db0f6 +0x874:  mov    %ebx,0xc(%esp)
085db0fa +0x878:  mov    %eax,0x8(%esp)
085db0fe +0x87c:  movl   $"PvPExp,%d,%d,%d",0x4(%esp)
085db106 +0x884:  mov    -0x54(%ebp),%eax
085db109 +0x887:  mov    %eax,(%esp)
085db10c +0x88a:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
085db111 +0x88f:  mov    -0x54(%ebp),%eax
085db114 +0x892:  mov    %eax,(%esp)
085db117 +0x895:  call   0866270a <_ZNK5CUser18has_within_MissionEv>  ; CUser::has_within_Mission() const
085db11c +0x89a:  test   %ax,%ax
085db11f +0x89d:  sete   %al
085db122 +0x8a0:  test   %al,%al
085db124 +0x8a2:  je     085db131 <+0x8af>
085db126 +0x8a4:  mov    -0x54(%ebp),%eax
085db129 +0x8a7:  mov    %eax,(%esp)
085db12c +0x8aa:  call   08662774 <_ZNK5CUser25acceptable_within_missionEv>  ; CUser::acceptable_within_mission() const
085db131 +0x8af:  mov    -0x6c(%ebp),%eax
085db134 +0x8b2:  mov    %eax,0x4(%esp)
085db138 +0x8b6:  lea    -0x90(%ebp),%eax
085db13e +0x8bc:  mov    %eax,(%esp)
085db141 +0x8bf:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085db146 +0x8c4:  movl   $0x0,-0x30(%ebp)
085db14d +0x8cb:  jmp    085db381 <+0xaff>
085db152 +0x8d0:  mov    -0x30(%ebp),%eax
085db155 +0x8d3:  mov    -0xd8(%ebp,%eax,4),%eax
085db15c +0x8da:  mov    %eax,-0x2c(%ebp)
085db15f +0x8dd:  mov    -0x2c(%ebp),%edx
085db162 +0x8e0:  mov    0x8(%ebp),%eax
085db165 +0x8e3:  add    $0xc,%edx
085db168 +0x8e6:  mov    (%eax,%edx,4),%eax
085db16b +0x8e9:  test   %eax,%eax
085db16d +0x8eb:  je     085db37c <+0xafa>
085db173 +0x8f1:  mov    -0x2c(%ebp),%edx
085db176 +0x8f4:  mov    0x8(%ebp),%eax
085db179 +0x8f7:  add    $0xc,%edx
085db17c +0x8fa:  mov    (%eax,%edx,4),%eax
085db17f +0x8fd:  mov    %eax,(%esp)
085db182 +0x900:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
085db187 +0x905:  movzwl %ax,%eax
085db18a +0x908:  mov    %eax,0x4(%esp)
085db18e +0x90c:  lea    -0x90(%ebp),%eax
085db194 +0x912:  mov    %eax,(%esp)
085db197 +0x915:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085db19c +0x91a:  mov    -0x2c(%ebp),%edx
085db19f +0x91d:  mov    0x8(%ebp),%eax
085db1a2 +0x920:  add    $0x1c,%edx
085db1a5 +0x923:  mov    0x8(%eax,%edx,4),%eax
085db1a9 +0x927:  mov    %eax,0x4(%esp)
085db1ad +0x92b:  lea    -0x90(%ebp),%eax
085db1b3 +0x931:  mov    %eax,(%esp)
085db1b6 +0x934:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085db1bb +0x939:  mov    -0x2c(%ebp),%edx
085db1be +0x93c:  mov    0x8(%ebp),%eax
085db1c1 +0x93f:  add    $0xc,%edx
085db1c4 +0x942:  mov    (%eax,%edx,4),%eax
085db1c7 +0x945:  mov    %eax,(%esp)
085db1ca +0x948:  call   0819ee4a <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x86>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x86
085db1cf +0x94d:  mov    %eax,0x4(%esp)
085db1d3 +0x951:  lea    -0x90(%ebp),%eax
085db1d9 +0x957:  mov    %eax,(%esp)
085db1dc +0x95a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085db1e1 +0x95f:  mov    -0x2c(%ebp),%edx
085db1e4 +0x962:  mov    0x8(%ebp),%eax
085db1e7 +0x965:  add    $0xc,%edx
085db1ea +0x968:  mov    (%eax,%edx,4),%eax
085db1ed +0x96b:  mov    %eax,(%esp)
085db1f0 +0x96e:  call   085df99a <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x221>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x221
085db1f5 +0x973:  mov    %eax,0x4(%esp)
085db1f9 +0x977:  lea    -0x90(%ebp),%eax
085db1ff +0x97d:  mov    %eax,(%esp)
085db202 +0x980:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085db207 +0x985:  mov    -0x2c(%ebp),%edx
085db20a +0x988:  mov    0x8(%ebp),%eax
085db20d +0x98b:  add    $0xc,%edx
085db210 +0x98e:  mov    (%eax,%edx,4),%eax
085db213 +0x991:  mov    %eax,(%esp)
085db216 +0x994:  call   0819ee4a <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x86>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x86
085db21b +0x999:  mov    &_ZN10GlobalData15s_ref_pvp_gradeE,%edx
085db221 +0x99f:  mov    %eax,0x4(%esp)
085db225 +0x9a3:  mov    %edx,(%esp)
085db228 +0x9a6:  call   085d4880 <_ZNK11RefPvpGrade19GetPvpCurrRankPointEi>  ; RefPvpGrade::GetPvpCurrRankPoint(int) const
085db22d +0x9ab:  mov    %eax,0x4(%esp)
085db231 +0x9af:  lea    -0x90(%ebp),%eax
085db237 +0x9b5:  mov    %eax,(%esp)
085db23a +0x9b8:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085db23f +0x9bd:  mov    -0x2c(%ebp),%edx
085db242 +0x9c0:  mov    0x8(%ebp),%eax
085db245 +0x9c3:  add    $0xc,%edx
085db248 +0x9c6:  mov    (%eax,%edx,4),%eax
085db24b +0x9c9:  mov    %eax,(%esp)
085db24e +0x9cc:  call   0819ee4a <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x86>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x86
085db253 +0x9d1:  mov    &_ZN10GlobalData15s_ref_pvp_gradeE,%edx
085db259 +0x9d7:  mov    %eax,0x4(%esp)
085db25d +0x9db:  mov    %edx,(%esp)
085db260 +0x9de:  call   085d4860 <_ZNK11RefPvpGrade19GetPvpNextRankPointEi>  ; RefPvpGrade::GetPvpNextRankPoint(int) const
085db265 +0x9e3:  mov    %eax,0x4(%esp)
085db269 +0x9e7:  lea    -0x90(%ebp),%eax
085db26f +0x9ed:  mov    %eax,(%esp)
085db272 +0x9f0:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085db277 +0x9f5:  mov    0x8(%ebp),%eax
085db27a +0x9f8:  lea    0x69c(%eax),%edx
085db280 +0x9fe:  mov    -0x2c(%ebp),%eax
085db283 +0xa01:  mov    %eax,0x4(%esp)
085db287 +0xa05:  mov    %edx,(%esp)
085db28a +0xa08:  call   085df524 <_ZN20CDeathMatchBattleMgr12getKillCountEi>  ; CDeathMatchBattleMgr::getKillCount(int)
085db28f +0xa0d:  mov    %eax,-0x28(%ebp)
085db292 +0xa10:  mov    0x8(%ebp),%eax
085db295 +0xa13:  lea    0x69c(%eax),%edx
085db29b +0xa19:  mov    -0x2c(%ebp),%eax
085db29e +0xa1c:  mov    %eax,0x4(%esp)
085db2a2 +0xa20:  mov    %edx,(%esp)
085db2a5 +0xa23:  call   085df540 <_ZN20CDeathMatchBattleMgr13getDeathCountEi>  ; CDeathMatchBattleMgr::getDeathCount(int)
085db2aa +0xa28:  mov    %eax,-0x24(%ebp)
085db2ad +0xa2b:  mov    -0x28(%ebp),%eax
085db2b0 +0xa2e:  mov    %eax,0x4(%esp)
085db2b4 +0xa32:  lea    -0x90(%ebp),%eax
085db2ba +0xa38:  mov    %eax,(%esp)
085db2bd +0xa3b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085db2c2 +0xa40:  mov    -0x24(%ebp),%eax
085db2c5 +0xa43:  mov    %eax,0x4(%esp)
085db2c9 +0xa47:  lea    -0x90(%ebp),%eax
085db2cf +0xa4d:  mov    %eax,(%esp)
085db2d2 +0xa50:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085db2d7 +0xa55:  mov    0x8(%ebp),%eax
085db2da +0xa58:  mov    0x4(%eax),%eax
085db2dd +0xa5b:  cmp    $0x4,%eax
085db2e0 +0xa5e:  je     085db2f1 <+0xa6f>
085db2e2 +0xa60:  mov    0x8(%ebp),%eax
085db2e5 +0xa63:  mov    0x4(%eax),%eax
085db2e8 +0xa66:  cmp    $0x5,%eax
085db2eb +0xa69:  jne    085db37d <+0xafb>
085db2f1 +0xa6f:  mov    0x8(%ebp),%eax
085db2f4 +0xa72:  mov    0x4(%eax),%eax
085db2f7 +0xa75:  mov    %eax,%edi
085db2f9 +0xa77:  mov    -0x2c(%ebp),%edx
085db2fc +0xa7a:  mov    0x8(%ebp),%eax
085db2ff +0xa7d:  add    $0xc,%edx
085db302 +0xa80:  mov    (%eax,%edx,4),%eax
085db305 +0xa83:  mov    %eax,(%esp)
085db308 +0xa86:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
085db30d +0xa8b:  mov    %eax,%esi
085db30f +0xa8d:  mov    0x8(%ebp),%eax
085db312 +0xa90:  mov    %eax,(%esp)
085db315 +0xa93:  call   0822d994 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x303e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x303e
085db31a +0xa98:  mov    %eax,%ebx
085db31c +0xa9a:  movl   $0x0,0xc(%esp)
085db324 +0xaa2:  movl   $0xdab,0x8(%esp)
085db32c +0xaaa:  movl   $&_ZZN8PvP_Room10pvp_rewardEvE19__PRETTY_FUNCTION__,0x4(%esp)
085db334 +0xab2:  lea    -0x7c(%ebp),%eax
085db337 +0xab5:  mov    %eax,(%esp)
085db33a +0xab8:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085db33f +0xabd:  mov    -0x24(%ebp),%eax
085db342 +0xac0:  mov    %eax,0x20(%esp)
085db346 +0xac4:  mov    -0x28(%ebp),%eax
085db349 +0xac7:  mov    %eax,0x1c(%esp)
085db34d +0xacb:  mov    %edi,0x18(%esp)
085db351 +0xacf:  mov    %esi,0x14(%esp)
085db355 +0xad3:  mov    -0x2c(%ebp),%eax
085db358 +0xad6:  mov    %eax,0x10(%esp)
085db35c +0xada:  mov    -0x30(%ebp),%eax
085db35f +0xadd:  mov    %eax,0xc(%esp)
085db363 +0xae1:  mov    %ebx,0x8(%esp)
085db367 +0xae5:  movl   $"<PVP_REWARD> Room(%d), iRank(%d), iRankMember(%d), Player(%s), mode(%d), KillCnt(%d), DeathCnt(%d)",0x4(%esp)
085db36f +0xaed:  lea    -0x7c(%ebp),%eax
085db372 +0xaf0:  mov    %eax,(%esp)
085db375 +0xaf3:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085db37a +0xaf8:  jmp    085db37d <+0xafb>
085db37c +0xafa:  nop
085db37d +0xafb:  addl   $0x1,-0x30(%ebp)
085db381 +0xaff:  mov    -0x30(%ebp),%eax
085db384 +0xb02:  cmp    -0x6c(%ebp),%eax
085db387 +0xb05:  setl   %al
085db38a +0xb08:  test   %al,%al
085db38c +0xb0a:  jne    085db152 <+0x8d0>
085db392 +0xb10:  cmpl   $0x0,-0x6c(%ebp)
085db396 +0xb14:  je     085db3ef <+0xb6d>
085db398 +0xb16:  cmpl   $0xffffffff,-0x68(%ebp)
085db39c +0xb1a:  je     085db3d9 <+0xb57>
085db39e +0xb1c:  mov    -0x68(%ebp),%edx
085db3a1 +0xb1f:  mov    0x8(%ebp),%eax
085db3a4 +0xb22:  add    $0xc,%edx
085db3a7 +0xb25:  mov    (%eax,%edx,4),%eax
085db3aa +0xb28:  test   %eax,%eax
085db3ac +0xb2a:  je     085db3d9 <+0xb57>
085db3ae +0xb2c:  mov    -0x68(%ebp),%edx
085db3b1 +0xb2f:  mov    0x8(%ebp),%eax
085db3b4 +0xb32:  add    $0xc,%edx
085db3b7 +0xb35:  mov    (%eax,%edx,4),%eax
085db3ba +0xb38:  mov    %eax,(%esp)
085db3bd +0xb3b:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
085db3c2 +0xb40:  movzwl %ax,%eax
085db3c5 +0xb43:  mov    %eax,0x4(%esp)
085db3c9 +0xb47:  lea    -0x90(%ebp),%eax
085db3cf +0xb4d:  mov    %eax,(%esp)
085db3d2 +0xb50:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085db3d7 +0xb55:  jmp    085db3ef <+0xb6d>
085db3d9 +0xb57:  movl   $0x0,0x4(%esp)
085db3e1 +0xb5f:  lea    -0x90(%ebp),%eax
085db3e7 +0xb65:  mov    %eax,(%esp)
085db3ea +0xb68:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085db3ef +0xb6d:  mov    -0x50(%ebp),%eax
085db3f2 +0xb70:  mov    %eax,0x4(%esp)
085db3f6 +0xb74:  lea    -0x90(%ebp),%eax
085db3fc +0xb7a:  mov    %eax,(%esp)
085db3ff +0xb7d:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085db404 +0xb82:  mov    -0x80(%ebp),%eax
085db407 +0xb85:  mov    %eax,0x4(%esp)
085db40b +0xb89:  lea    -0x90(%ebp),%eax
085db411 +0xb8f:  mov    %eax,(%esp)
085db414 +0xb92:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085db419 +0xb97:  movzbl -0x62(%ebp),%eax
085db41d +0xb9b:  mov    %eax,0x4(%esp)
085db421 +0xb9f:  lea    -0x90(%ebp),%eax
085db427 +0xba5:  mov    %eax,(%esp)
085db42a +0xba8:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085db42f +0xbad:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085db434 +0xbb2:  mov    %eax,(%esp)
085db437 +0xbb5:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
085db43c +0xbba:  cmp    $0xf,%eax
085db43f +0xbbd:  sete   %al
085db442 +0xbc0:  test   %al,%al
085db444 +0xbc2:  je     085db4a2 <+0xc20>
085db446 +0xbc4:  movl   $0x7,0x4(%esp)
085db44e +0xbcc:  mov    -0x54(%ebp),%eax
085db451 +0xbcf:  mov    %eax,(%esp)
085db454 +0xbd2:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
085db459 +0xbd7:  mov    %eax,(%esp)
085db45c +0xbda:  call   085dfdbc <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x643>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x643
085db461 +0xbdf:  mov    %eax,0x4(%esp)
085db465 +0xbe3:  lea    -0x90(%ebp),%eax
085db46b +0xbe9:  mov    %eax,(%esp)
085db46e +0xbec:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085db473 +0xbf1:  movl   $0x7,0x4(%esp)
085db47b +0xbf9:  mov    -0x54(%ebp),%eax
085db47e +0xbfc:  mov    %eax,(%esp)
085db481 +0xbff:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
085db486 +0xc04:  mov    %eax,(%esp)
085db489 +0xc07:  call   085dfdcc <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x653>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x653
085db48e +0xc0c:  mov    %eax,0x4(%esp)
085db492 +0xc10:  lea    -0x90(%ebp),%eax
085db498 +0xc16:  mov    %eax,(%esp)
085db49b +0xc19:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085db4a0 +0xc1e:  jmp    085db4e5 <+0xc63>
085db4a2 +0xc20:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085db4a7 +0xc25:  mov    %eax,(%esp)
085db4aa +0xc28:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
085db4af +0xc2d:  cmp    $0x10,%eax
085db4b2 +0xc30:  sete   %al
085db4b5 +0xc33:  test   %al,%al
085db4b7 +0xc35:  je     085db4e5 <+0xc63>
085db4b9 +0xc37:  movl   $0x0,0x4(%esp)
085db4c1 +0xc3f:  lea    -0x90(%ebp),%eax
085db4c7 +0xc45:  mov    %eax,(%esp)
085db4ca +0xc48:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085db4cf +0xc4d:  movl   $0x0,0x4(%esp)
085db4d7 +0xc55:  lea    -0x90(%ebp),%eax
085db4dd +0xc5b:  mov    %eax,(%esp)
085db4e0 +0xc5e:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085db4e5 +0xc63:  mov    -0x54(%ebp),%eax
085db4e8 +0xc66:  mov    %eax,(%esp)
085db4eb +0xc69:  call   0866270a <_ZNK5CUser18has_within_MissionEv>  ; CUser::has_within_Mission() const
085db4f0 +0xc6e:  test   %ax,%ax
085db4f3 +0xc71:  je     085db4fc <+0xc7a>
085db4f5 +0xc73:  mov    $0x1,%eax
085db4fa +0xc78:  jmp    085db501 <+0xc7f>
085db4fc +0xc7a:  mov    $0x0,%eax
085db501 +0xc7f:  mov    %eax,0x4(%esp)
085db505 +0xc83:  lea    -0x90(%ebp),%eax
085db50b +0xc89:  mov    %eax,(%esp)
085db50e +0xc8c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085db513 +0xc91:  movb   $0xff,-0x45(%ebp)
085db517 +0xc95:  mov    0x8(%ebp),%eax
085db51a +0xc98:  mov    0x4(%eax),%eax
085db51d +0xc9b:  cmp    $0x3,%eax
085db520 +0xc9e:  jne    085db53d <+0xcbb>
085db522 +0xca0:  mov    0x8(%ebp),%eax
085db525 +0xca3:  lea    0x620(%eax),%edx
085db52b +0xca9:  mov    -0x58(%ebp),%eax
085db52e +0xcac:  mov    %eax,0x4(%esp)
085db532 +0xcb0:  mov    %edx,(%esp)
085db535 +0xcb3:  call   08568cee <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x6b8>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x6b8
085db53a +0xcb8:  mov    %al,-0x45(%ebp)
085db53d +0xcbb:  movzbl -0x45(%ebp),%eax
085db541 +0xcbf:  mov    %eax,0x4(%esp)
085db545 +0xcc3:  lea    -0x90(%ebp),%eax
085db54b +0xcc9:  mov    %eax,(%esp)
085db54e +0xccc:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085db553 +0xcd1:  movl   $0x1,0x4(%esp)
085db55b +0xcd9:  lea    -0x90(%ebp),%eax
085db561 +0xcdf:  mov    %eax,(%esp)
085db564 +0xce2:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085db569 +0xce7:  lea    -0x90(%ebp),%eax
085db56f +0xced:  mov    %eax,0x4(%esp)
085db573 +0xcf1:  mov    -0x54(%ebp),%eax
085db576 +0xcf4:  mov    %eax,(%esp)
085db579 +0xcf7:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085db57e +0xcfc:  mov    0x8(%ebp),%eax
085db581 +0xcff:  mov    %eax,(%esp)
085db584 +0xd02:  call   0822d9cc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3076>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3076
085db589 +0xd07:  cmp    $0x4,%eax
085db58c +0xd0a:  je     085db59e <+0xd1c>
085db58e +0xd0c:  mov    0x8(%ebp),%eax
085db591 +0xd0f:  mov    %eax,(%esp)
085db594 +0xd12:  call   0822d9cc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3076>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3076
085db599 +0xd17:  cmp    $0x5,%eax
085db59c +0xd1a:  jne    085db5ac <+0xd2a>
085db59e +0xd1c:  mov    -0x80(%ebp),%eax
085db5a1 +0xd1f:  test   %eax,%eax
085db5a3 +0xd21:  je     085db5ac <+0xd2a>
085db5a5 +0xd23:  mov    $0x1,%eax
085db5aa +0xd28:  jmp    085db5b1 <+0xd2f>
085db5ac +0xd2a:  mov    $0x0,%eax
085db5b1 +0xd2f:  test   %al,%al
085db5b3 +0xd31:  je     085db62e <+0xdac>
085db5b5 +0xd33:  movl   $0x0,-0xb4(%ebp)
085db5bf +0xd3d:  movl   $0x0,-0xb8(%ebp)
085db5c9 +0xd47:  mov    -0x80(%ebp),%eax
085db5cc +0xd4a:  movl   $0x0,0x18(%esp)
085db5d4 +0xd52:  movl   $0x0,0x14(%esp)
085db5dc +0xd5a:  movl   $0xa,0x10(%esp)
085db5e4 +0xd62:  lea    -0xb8(%ebp),%edx
085db5ea +0xd68:  mov    %edx,0xc(%esp)
085db5ee +0xd6c:  lea    -0xb4(%ebp),%edx
085db5f4 +0xd72:  mov    %edx,0x8(%esp)
085db5f8 +0xd76:  mov    %eax,0x4(%esp)
085db5fc +0xd7a:  mov    -0x54(%ebp),%eax
085db5ff +0xd7d:  mov    %eax,(%esp)
085db602 +0xd80:  call   0866a3fe <_ZN5CUser11gain_exp_spEiRiS0_13eExpAddReasonib>  ; CUser::gain_exp_sp(int, int&, int&, eExpAddReason, int, bool)
085db607 +0xd85:  test   %al,%al
085db609 +0xd87:  je     085db62e <+0xdac>
085db60b +0xd89:  movl   $0x1,0xc(%esp)
085db613 +0xd91:  movl   $0x2,0x8(%esp)
085db61b +0xd99:  movl   $0x2,0x4(%esp)
085db623 +0xda1:  mov    -0x54(%ebp),%eax
085db626 +0xda4:  mov    %eax,(%esp)
085db629 +0xda7:  call   0867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>  ; CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)
085db62e +0xdac:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
085db635 +0xdb3:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
085db63a +0xdb8:  mov    %eax,%ebx
085db63c +0xdba:  mov    -0x54(%ebp),%eax
085db63f +0xdbd:  mov    %eax,(%esp)
085db642 +0xdc0:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
085db647 +0xdc5:  mov    %ebx,0x4(%esp)
085db64b +0xdc9:  mov    %eax,(%esp)
085db64e +0xdcc:  call   085df98c <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x213>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x213
085db653 +0xdd1:  mov    &_ZN10GlobalData15s_event_managerE,%eax
085db658 +0xdd6:  movl   $0x37,0x4(%esp)
085db660 +0xdde:  mov    %eax,(%esp)
085db663 +0xde1:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
085db668 +0xde6:  mov    (%eax),%edx
085db66a +0xde8:  add    $0x34,%edx
085db66d +0xdeb:  mov    (%edx),%edx
085db66f +0xded:  movl   $0x0,0x4(%esp)
085db677 +0xdf5:  mov    %eax,(%esp)
085db67a +0xdf8:  call   *%edx
085db67c +0xdfa:  test   %al,%al
085db67e +0xdfc:  je     085db6a2 <+0xe20>
085db680 +0xdfe:  movl   $0x3,0x4(%esp)
085db688 +0xe06:  mov    -0x54(%ebp),%eax
085db68b +0xe09:  mov    %eax,(%esp)
085db68e +0xe0c:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
085db693 +0xe11:  mov    -0x54(%ebp),%edx
085db696 +0xe14:  mov    %edx,0x4(%esp)
085db69a +0xe18:  mov    %eax,(%esp)
085db69d +0xe1b:  call   0826921c <_ZN17CPvPLiveEventData17IncreasePlayCountEP5CUser>  ; CPvPLiveEventData::IncreasePlayCount(CUser*)
085db6a2 +0xe20:  mov    -0x54(%ebp),%eax
085db6a5 +0xe23:  mov    %eax,(%esp)
085db6a8 +0xe26:  call   0822f15e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4808>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4808
085db6ad +0xe2b:  mov    0x8(%eax),%edx
085db6b0 +0xe2e:  mov    &_ZN10GlobalData15s_ref_pvp_gradeE,%eax
085db6b5 +0xe33:  mov    %edx,0x4(%esp)
085db6b9 +0xe37:  mov    %eax,(%esp)
085db6bc +0xe3a:  call   085d47ce <_ZNK11RefPvpGrade11GetPvpGradeEi>  ; RefPvpGrade::GetPvpGrade(int) const
085db6c1 +0xe3f:  mov    %eax,-0x20(%ebp)
085db6c4 +0xe42:  cmpl   $0x0,-0x20(%ebp)
085db6c8 +0xe46:  jle    085db6e4 <+0xe62>
085db6ca +0xe48:  mov    -0x54(%ebp),%eax
085db6cd +0xe4b:  mov    %eax,(%esp)
085db6d0 +0xe4e:  call   0822f15e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4808>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4808
085db6d5 +0xe53:  mov    0x14(%eax),%eax
085db6d8 +0xe56:  cmp    -0x20(%ebp),%eax
085db6db +0xe59:  je     085db6e4 <+0xe62>
085db6dd +0xe5b:  mov    $0x1,%eax
085db6e2 +0xe60:  jmp    085db6e9 <+0xe67>
085db6e4 +0xe62:  mov    $0x0,%eax
085db6e9 +0xe67:  test   %al,%al
085db6eb +0xe69:  je     085db75a <+0xed8>
085db6ed +0xe6b:  mov    -0x54(%ebp),%eax
085db6f0 +0xe6e:  mov    %eax,(%esp)
085db6f3 +0xe71:  call   084ebec4 <_GLOBAL__I__Z7getUserj+0x2e76>  ; global constructors keyed to getUser(unsigned int)+0x2e76
085db6f8 +0xe76:  mov    -0x20(%ebp),%edx
085db6fb +0xe79:  mov    %edx,0x14(%eax)
085db6fe +0xe7c:  movl   $0x8,0x4(%esp)
085db706 +0xe84:  mov    -0x54(%ebp),%eax
085db709 +0xe87:  mov    %eax,(%esp)
085db70c +0xe8a:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
085db711 +0xe8f:  mov    %eax,-0x1c(%ebp)
085db714 +0xe92:  mov    -0x54(%ebp),%eax
085db717 +0xe95:  mov    %eax,0x4(%esp)
085db71b +0xe99:  mov    -0x1c(%ebp),%eax
085db71e +0xe9c:  mov    %eax,(%esp)
085db721 +0xe9f:  call   085e4e4c <_ZN19CMissionList_Charac26MakeMissionList_forOldUserERK5CUser>  ; CMissionList_Charac::MakeMissionList_forOldUser(CUser const&)
085db726 +0xea4:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085db72b +0xea9:  mov    -0x54(%ebp),%edx
085db72e +0xeac:  mov    %edx,0x4(%esp)
085db732 +0xeb0:  mov    %eax,(%esp)
085db735 +0xeb3:  call   086c83fc <_ZN9GameWorld17send_AllBasicInfoEP5CUser>  ; GameWorld::send_AllBasicInfo(CUser*)
085db73a +0xeb8:  jmp    085db75a <+0xed8>
085db73c +0xeba:  mov    %edx,%ebx
085db73e +0xebc:  mov    %eax,%esi
085db740 +0xebe:  lea    -0x90(%ebp),%eax
085db746 +0xec4:  mov    %eax,(%esp)
085db749 +0xec7:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085db74e +0xecc:  mov    %esi,%eax
085db750 +0xece:  mov    %ebx,%edx
085db752 +0xed0:  mov    %eax,(%esp)
085db755 +0xed3:  call   08ae3750 <_Unwind_Resume>
085db75a +0xed8:  lea    -0x90(%ebp),%eax
085db760 +0xede:  mov    %eax,(%esp)
085db763 +0xee1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085db768 +0xee6:  jmp    085db76b <+0xee9>
085db76a +0xee8:  nop
085db76b +0xee9:  addl   $0x1,-0x58(%ebp)
085db76f +0xeed:  cmpl   $0x7,-0x58(%ebp)
085db773 +0xef1:  setle  %al
085db776 +0xef4:  test   %al,%al
085db778 +0xef6:  jne    085da9ac <+0x12a>
085db77e +0xefc:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085db783 +0xf01:  mov    %eax,(%esp)
085db786 +0xf04:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
085db78b +0xf09:  cmp    $0x6,%eax
085db78e +0xf0c:  sete   %al
085db791 +0xf0f:  test   %al,%al
085db793 +0xf11:  je     085db7c6 <+0xf44>
085db795 +0xf13:  mov    0x8(%ebp),%eax
085db798 +0xf16:  lea    0x30(%eax),%ebx
085db79b +0xf19:  mov    0x8(%ebp),%eax
085db79e +0xf1c:  mov    0x4(%eax),%eax
085db7a1 +0xf1f:  movsbl %al,%edx
085db7a4 +0xf22:  mov    0x8(%ebp),%eax
085db7a7 +0xf25:  mov    (%eax),%eax
085db7a9 +0xf27:  mov    0x8(%ebp),%ecx
085db7ac +0xf2a:  add    $0xc4,%ecx
085db7b2 +0xf30:  mov    %ebx,0xc(%esp)
085db7b6 +0xf34:  mov    %edx,0x8(%esp)
085db7ba +0xf38:  mov    %eax,0x4(%esp)
085db7be +0xf3c:  mov    %ecx,(%esp)
085db7c1 +0xf3f:  call   085ddad0 <_ZN16PvP_GuildWar_Log19WriteGuildWarPvPLogEicPP5CUser>  ; PvP_GuildWar_Log::WriteGuildWarPvPLog(int, char, CUser**)
085db7c6 +0xf44:  mov    0x8(%ebp),%eax
085db7c9 +0xf47:  mov    0x6e4(%eax),%eax
085db7cf +0xf4d:  mov    (%eax),%eax
085db7d1 +0xf4f:  add    $0x50,%eax
085db7d4 +0xf52:  mov    (%eax),%ecx
085db7d6 +0xf54:  mov    0x8(%ebp),%eax
085db7d9 +0xf57:  mov    0x6e4(%eax),%eax
085db7df +0xf5d:  mov    0x8(%ebp),%edx
085db7e2 +0xf60:  mov    %edx,0x4(%esp)
085db7e6 +0xf64:  mov    %eax,(%esp)
085db7e9 +0xf67:  call   *%ecx
085db7eb +0xf69:  add    $0xfc,%esp
085db7f1 +0xf6f:  pop    %ebx
085db7f2 +0xf70:  pop    %esi
085db7f3 +0xf71:  pop    %edi
085db7f4 +0xf72:  pop    %ebp
085db7f5 +0xf73:  ret
```

## 反编译 C

```c
// PvP_Room::pvp_reward @ 0x85da882

/* PvP_Room::pvp_reward() */

void __thiscall PvP_Room::pvp_reward(PvP_Room *this)

{
  code *pcVar1;
  CUser *pCVar2;
  char cVar3;
  short sVar4;
  GameWorld *pGVar5;
  undefined4 uVar6;
  CDisconnectDetecter *this_00;
  int *piVar7;
  CStatisticServerProxy *this_01;
  CFairPvPScore *pCVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  long lVar13;
  CHackAnalyzer *this_02;
  CPvPLiveEventData *this_03;
  int iVar14;
  bool bVar15;
  int local_dc [8];
  undefined4 local_bc;
  undefined4 local_b8;
  bool local_b1;
  MissionClearCondition_Parameter local_b0;
  undefined2 local_af;
  Packet_Server_Match_data local_a1 [10];
  undefined1 local_97;
  undefined1 local_96;
  undefined1 local_95;
  PacketGuard local_94 [12];
  int local_88;
  uint local_84;
  cMyTrace local_80 [16];
  int local_70;
  int local_6c;
  byte local_66;
  byte local_65;
  int local_64;
  char local_5d;
  int local_5c;
  CUser *local_58;
  uint local_54;
  int local_50;
  byte local_49;
  CMissionList_Charac *local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  CMissionList_Charac *local_20;
  
  local_70 = GetRanking(this,local_dc);
  local_6c = GetAce(this);
  pGVar5 = (GameWorld *)G_GameWorld();
  cVar3 = GameWorld::IsPVPChannel(pGVar5);
  if (cVar3 != '\0') {
    pGVar5 = (GameWorld *)G_GameWorld();
    cVar3 = GameWorld::IsFreePvPChannel(pGVar5);
    if (cVar3 != '\x01') {
      CalcuateVictoryPoint(this,local_dc,local_70);
    }
  }
  local_66 = 1;
  for (local_64 = 0; local_64 < 8; local_64 = local_64 + 1) {
    if ((this[local_64 + 0x5c8] != (PvP_Room)0x0) &&
       (cVar3 = IsPvpObserver(this,local_64), cVar3 != '\x01')) {
      local_65 = (byte)local_64;
      local_66 = 0;
      break;
    }
  }
  local_5d = check_acquire_guild_point(this);
  pcVar1 = *(code **)(**(int **)(this + 0x6e4) + 0x4c);
  bVar15 = local_66 == 1;
  uVar6 = get_team(this,(uint)local_65);
  (*pcVar1)(*(undefined4 *)(this + 0x6e4),this,uVar6,bVar15);
  local_5c = 0;
  do {
    if (7 < local_5c) {
      pGVar5 = (GameWorld *)G_GameWorld();
      iVar14 = GameWorld::GetChannelType(pGVar5);
      if (iVar14 == 6) {
        PvP_GuildWar_Log::WriteGuildWarPvPLog
                  ((PvP_GuildWar_Log *)(this + 0xc4),*(int *)this,(char)*(undefined4 *)(this + 4),
                   (CUser **)(this + 0x30));
      }
      (**(code **)(**(int **)(this + 0x6e4) + 0x50))(*(undefined4 *)(this + 0x6e4),this);
      return;
    }
    local_58 = *(CUser **)(this + (local_5c + 0xc) * 4);
    if (local_58 != (CUser *)0x0) {
      pCVar2 = *(CUser **)(this + (local_5c + 0xc) * 4);
      this_00 = (CDisconnectDetecter *)disconnect_detecter::GetInstanceDisconnectDetecter();
      disconnect_detecter::CDisconnectDetecter::UnregisterUser(this_00,pCVar2);
      iVar14 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      CUser::add_pvp_play_info(local_58,iVar14 - *(int *)(this + 0x618),1);
      pGVar5 = (GameWorld *)G_GameWorld();
      cVar3 = GameWorld::IsIntegratedPvPBaseChannel(pGVar5);
      if (cVar3 == '\0') {
LAB_085daa6e:
        bVar15 = false;
      }
      else {
        piVar7 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x38);
        cVar3 = (**(code **)(*piVar7 + 0x34))(piVar7,0);
        if ((cVar3 == '\0') || (cVar3 = IsPvpObserver(this,local_5c), cVar3 == '\x01'))
        goto LAB_085daa6e;
        bVar15 = true;
      }
      if ((bVar15) && (iVar14 = CUser::GetServerGroup(local_58), iVar14 != 0)) {
        Packet_Server_Match_data::Packet_Server_Match_data(local_a1);
        local_97 = CUser::GetServerGroup(local_58);
        if (this[local_5c + 0x5c8] == (PvP_Room)0x0) {
          local_95 = 1;
        }
        else {
          local_96 = 1;
        }
        uVar6 = CUser::GetServerGroup(local_58);
        this_01 = (CStatisticServerProxy *)
                  CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                            (GlobalData::s_statistic_proxy_mgr,uVar6);
        CStatisticServerProxy::SendPacket(this_01,(char *)local_a1,0xd);
      }
      local_84 = 0;
      if (((local_5d == '\0') || (this[local_5c + 0x5c8] == (PvP_Room)0x0)) ||
         (cVar3 = IsPvpObserver(this,local_5c), cVar3 == '\x01')) {
        bVar15 = false;
      }
      else {
        bVar15 = true;
      }
      if (bVar15) {
        CUser::add_guild_point_item(local_58);
      }
      local_48 = (CMissionList_Charac *)CUser::GetCharacExpandData(local_58,8);
      CMissionList_Charac::setIssue(local_48,(bool)this[local_5c + 0x5c8],*(int *)(this + 4) == 2);
      MissionClearCondition_Parameter::MissionClearCondition_Parameter
                (&local_b0,*(undefined4 *)(this + 4));
      local_af = CMissionList_Charac::getIssue_mode(local_48,*(int *)(this + 4) == 2);
      local_b1 = false;
      CMissionList_Charac::Update_Win_event(local_48,local_58,&local_b0,&local_b1);
      if (local_b1 != false) {
        iVar14 = CUserCharacInfo::getPVPResultRefR((CUserCharacInfo *)local_58);
        local_44 = RefPvpGrade::GetPvpGrade(GlobalData::s_ref_pvp_grade,*(int *)(iVar14 + 8));
        iVar14 = CUserCharacInfo::getPVPResultRefR((CUserCharacInfo *)local_58);
        if (*(int *)(iVar14 + 0x14) < local_44) {
          iVar14 = CUserCharacInfo::getPVPResultRefW((CUserCharacInfo *)local_58);
          *(int *)(iVar14 + 0x14) = local_44;
        }
      }
      CUser::send_MissionList(local_58);
      pGVar5 = (GameWorld *)G_GameWorld();
      cVar3 = GameWorld::IsPVPChannel(pGVar5);
      if (cVar3 != '\0') {
        pGVar5 = (GameWorld *)G_GameWorld();
        cVar3 = GameWorld::IsWinPointPvPChannel(pGVar5);
        if (cVar3 == '\0') {
          pGVar5 = (GameWorld *)G_GameWorld();
          iVar14 = GameWorld::GetChannelType(pGVar5);
          if (iVar14 == 6) {
            if (this[local_5c + 0x5c8] == (PvP_Room)0x0) {
              local_40 = -1;
            }
            else if (((*(int *)(this + 4) == 2) || (*(int *)(this + 4) == 3)) ||
                    (*(int *)(this + 4) == 5)) {
              local_40 = 1;
            }
            else {
              local_3c = count_pvp_user(this);
              if (local_3c < 4) {
                local_40 = 1;
              }
              else if (3 < local_3c) {
                local_40 = 2;
              }
            }
            CUser::add_guild_pvp_result(local_58,local_40);
          }
        }
        else {
          CUser::add_pvp_result(local_58,(bool)this[local_5c + 0x5c8],&local_84);
          if ((*(int *)(this + 4) == 4) || (*(int *)(this + 4) == 5)) {
            local_84 = 0;
          }
          if (this[local_5c + 0x5c8] != (PvP_Room)0x0) {
            if ((*(int *)(this + 4) == 1) || (*(int *)(this + 4) == 4)) {
              APSystem::CUserProc::ClearActionAndSendtoUser(local_58,0x12,0,0);
            }
            else if ((*(int *)(this + 4) == 2) || (*(int *)(this + 4) == 5)) {
              APSystem::CUserProc::ClearActionAndSendtoUser(local_58,0x13,0,0);
            }
            else if (*(int *)(this + 4) == 3) {
              APSystem::CUserProc::ClearActionAndSendtoUser(local_58,0x14,0,0);
            }
          }
        }
      }
      local_54 = 0xffff;
      local_50 = 0;
      local_88 = 0;
      if ((((*(int *)(this + 4) == 3) &&
           (local_50 = CRelayBattleMgr::GetAllKillUserIndex
                                 ((CRelayBattleMgr *)(this + 0x620),&local_88), -1 < local_50)) &&
          (local_50 < 8)) && (*(int *)(this + (local_50 + 0xc) * 4) != 0)) {
        local_54 = CUser::get_unique_id(*(CUser **)(this + (local_50 + 0xc) * 4));
        local_54 = local_54 & 0xffff;
      }
      PacketGuard::PacketGuard(local_94);
                    /* try { // try from 085daeda to 085db739 has its CatchHandler @ 085db73c */
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_94);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_94,0,0x2f);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_94,(uint)local_65);
      pGVar5 = (GameWorld *)G_GameWorld();
      iVar14 = GameWorld::GetChannelType(pGVar5);
      if (iVar14 == 0xf) {
        pCVar8 = (CFairPvPScore *)CUser::GetCharacExpandData(local_58,7);
        iVar14 = fair_pvp::CFairPvPScore::GetLastTrainingSealCount(pCVar8);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_94,iVar14);
      }
      else {
        pGVar5 = (GameWorld *)G_GameWorld();
        iVar14 = GameWorld::GetChannelType(pGVar5);
        if (iVar14 == 0x10) {
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_94,0);
        }
        else {
          pGVar5 = (GameWorld *)G_GameWorld();
          iVar14 = GameWorld::GetChannelType(pGVar5);
          if (iVar14 == 0xe) {
            InterfacePacketBuf::put_int((InterfacePacketBuf *)local_94,0);
          }
          else {
            iVar14 = CUserCharacInfo::GetWinPoint((CUserCharacInfo *)local_58);
            InterfacePacketBuf::put_int((InterfacePacketBuf *)local_94,iVar14);
          }
        }
      }
      iVar14 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)local_58);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_94,iVar14);
      pGVar5 = (GameWorld *)G_GameWorld();
      iVar14 = GameWorld::GetChannelType(pGVar5);
      if (iVar14 == 6) {
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_94,0);
      }
      else {
        iVar14 = CUserCharacInfo::get_pvp_result_exp_point((CUserCharacInfo *)local_58);
        local_38 = CUserCharacInfo::get_pvp_result_oldexp_point((CUserCharacInfo *)local_58);
        local_38 = iVar14 - local_38;
        if ((local_54 != 0xffff) && (*(int *)(this + (local_5c + 0x14) * 4) == local_88)) {
          iVar14 = GetTeamCount(this,local_88);
          local_38 = local_38 + (iVar14 * 5 * local_38) / 100;
        }
        iVar14 = CUserCharacInfo::getPVPResultRefW((CUserCharacInfo *)local_58);
        iVar9 = CUserCharacInfo::get_pvp_result_oldexp_point((CUserCharacInfo *)local_58);
        *(int *)(iVar14 + 8) = iVar9 + local_38;
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_94,local_38);
        uVar6 = CUserCharacInfo::get_pvp_result_oldexp_point((CUserCharacInfo *)local_58);
        iVar14 = CUserCharacInfo::getPVPResultRefR((CUserCharacInfo *)local_58);
        CUser::LogHistory(local_58,"PvPExp,%d,%d,%d",*(undefined4 *)(iVar14 + 8),uVar6,local_38);
      }
      sVar4 = CUser::has_within_Mission(local_58);
      if (sVar4 == 0) {
        CUser::acceptable_within_mission(local_58);
      }
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_94,local_70);
      for (local_34 = 0; local_34 < local_70; local_34 = local_34 + 1) {
        local_30 = local_dc[local_34];
        if (*(int *)(this + (local_30 + 0xc) * 4) != 0) {
          uVar12 = CUser::get_unique_id(*(CUser **)(this + (local_30 + 0xc) * 4));
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_94,uVar12 & 0xffff);
          InterfacePacketBuf::put_int
                    ((InterfacePacketBuf *)local_94,*(int *)(this + (local_30 + 0x1c) * 4 + 8));
          iVar14 = CUserCharacInfo::get_pvp_grade
                             (*(CUserCharacInfo **)(this + (local_30 + 0xc) * 4));
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_94,iVar14);
          iVar14 = CUserCharacInfo::get_pvp_result_exp_point
                             (*(CUserCharacInfo **)(this + (local_30 + 0xc) * 4));
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_94,iVar14);
          iVar14 = CUserCharacInfo::get_pvp_grade
                             (*(CUserCharacInfo **)(this + (local_30 + 0xc) * 4));
          iVar14 = RefPvpGrade::GetPvpCurrRankPoint(GlobalData::s_ref_pvp_grade,iVar14);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_94,iVar14);
          iVar14 = CUserCharacInfo::get_pvp_grade
                             (*(CUserCharacInfo **)(this + (local_30 + 0xc) * 4));
          iVar14 = RefPvpGrade::GetPvpNextRankPoint(GlobalData::s_ref_pvp_grade,iVar14);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_94,iVar14);
          local_2c = CDeathMatchBattleMgr::getKillCount
                               ((CDeathMatchBattleMgr *)(this + 0x69c),local_30);
          local_28 = CDeathMatchBattleMgr::getDeathCount
                               ((CDeathMatchBattleMgr *)(this + 0x69c),local_30);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_94,local_2c);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_94,local_28);
          if ((*(int *)(this + 4) == 4) || (*(int *)(this + 4) == 5)) {
            uVar6 = *(undefined4 *)(this + 4);
            uVar10 = CUserCharacInfo::getCurCharacName
                               (*(CUserCharacInfo **)(this + (local_30 + 0xc) * 4));
            uVar11 = get_index(this);
            cMyTrace::cMyTrace(local_80,"void PvP_Room::pvp_reward()",0xdab,0);
            cMyTrace::operator()
                      (local_80,
                       "<PVP_REWARD> Room(%d), iRank(%d), iRankMember(%d), Player(%s), mode(%d), KillCnt(%d), DeathCnt(%d)"
                       ,uVar11,local_34,local_30,uVar10,uVar6,local_2c,local_28);
          }
        }
      }
      if (local_70 != 0) {
        if ((local_6c == -1) || (*(int *)(this + (local_6c + 0xc) * 4) == 0)) {
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_94,0);
        }
        else {
          uVar12 = CUser::get_unique_id(*(CUser **)(this + (local_6c + 0xc) * 4));
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_94,uVar12 & 0xffff);
        }
      }
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_94,local_54);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_94,local_84);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_94,(uint)local_66);
      pGVar5 = (GameWorld *)G_GameWorld();
      iVar14 = GameWorld::GetChannelType(pGVar5);
      if (iVar14 == 0xf) {
        pCVar8 = (CFairPvPScore *)CUser::GetCharacExpandData(local_58,7);
        iVar14 = fair_pvp::CFairPvPScore::GetLastTrainingSealBonusCount(pCVar8);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_94,iVar14);
        pCVar8 = (CFairPvPScore *)CUser::GetCharacExpandData(local_58,7);
        iVar14 = fair_pvp::CFairPvPScore::GetRemainBonusCount(pCVar8);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_94,iVar14);
      }
      else {
        pGVar5 = (GameWorld *)G_GameWorld();
        iVar14 = GameWorld::GetChannelType(pGVar5);
        if (iVar14 == 0x10) {
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_94,0);
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_94,0);
        }
      }
      sVar4 = CUser::has_within_Mission(local_58);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_94,(uint)(sVar4 != 0));
      local_49 = 0xff;
      if (*(int *)(this + 4) == 3) {
        local_49 = CRelayBattleMgr::GetKillCount((CRelayBattleMgr *)(this + 0x620),local_5c);
      }
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_94,(uint)local_49);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_94,true);
      CUser::Send(local_58,local_94);
      iVar14 = get_pvp_battle_mode(this);
      if (((iVar14 == 4) || (iVar14 = get_pvp_battle_mode(this), iVar14 == 5)) && (local_84 != 0)) {
        bVar15 = true;
      }
      else {
        bVar15 = false;
      }
      if (bVar15) {
        local_b8 = 0;
        local_bc = 0;
        cVar3 = CUser::gain_exp_sp(local_58,local_84,&local_b8,&local_bc,10,0,0);
        if (cVar3 != '\0') {
          CUser::SendNotiPacket(local_58,2,2,1);
        }
      }
      lVar13 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      this_02 = (CHackAnalyzer *)CUser::getHackAnalyzer(local_58);
      WongWork::CHackAnalyzer::setLastMonsterDeadTime(this_02,lVar13);
      piVar7 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x37);
      cVar3 = (**(code **)(*piVar7 + 0x34))(piVar7,0);
      if (cVar3 != '\0') {
        this_03 = (CPvPLiveEventData *)CUser::GetCharacExpandData(local_58,3);
        CPvPLiveEventData::IncreasePlayCount(this_03,local_58);
      }
      iVar14 = CUserCharacInfo::getPVPResultRefR((CUserCharacInfo *)local_58);
      local_24 = RefPvpGrade::GetPvpGrade(GlobalData::s_ref_pvp_grade,*(int *)(iVar14 + 8));
      if ((local_24 < 1) ||
         (iVar14 = CUserCharacInfo::getPVPResultRefR((CUserCharacInfo *)local_58),
         *(int *)(iVar14 + 0x14) == local_24)) {
        bVar15 = false;
      }
      else {
        bVar15 = true;
      }
      if (bVar15) {
        iVar14 = CUserCharacInfo::getPVPResultRefW((CUserCharacInfo *)local_58);
        *(int *)(iVar14 + 0x14) = local_24;
        local_20 = (CMissionList_Charac *)CUser::GetCharacExpandData(local_58,8);
        CMissionList_Charac::MakeMissionList_forOldUser(local_20,local_58);
        pGVar5 = (GameWorld *)G_GameWorld();
        GameWorld::send_AllBasicInfo(pGVar5,local_58);
      }
      PacketGuard::~PacketGuard(local_94);
    }
    local_5c = local_5c + 1;
  } while( true );
}
```
