# ResetAllFatigue

`_ZN9GameWorld15ResetAllFatigueEv`

`GameWorld::ResetAllFatigue()`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086cc3ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086cc3ec  _ZN9GameWorld15ResetAllFatigueEv
#           GameWorld::ResetAllFatigue()
# range [0x086cc3ec, 0x086cc8ab]
086cc3ec +0x000:  push   %ebp
086cc3ed +0x001:  mov    %esp,%ebp
086cc3ef +0x003:  push   %edi
086cc3f0 +0x004:  push   %esi
086cc3f1 +0x005:  push   %ebx
086cc3f2 +0x006:  sub    $0x7c,%esp
086cc3f5 +0x009:  movl   $0x0,-0x46(%ebp)
086cc3fc +0x010:  movw   $0x0,-0x42(%ebp)
086cc402 +0x016:  mov    0x8(%ebp),%eax
086cc405 +0x019:  mov    %eax,(%esp)
086cc408 +0x01c:  call   086d12b2 <_ZN9GameWorld20SetWeekendBounsEventEv>  ; GameWorld::SetWeekendBounsEvent()
086cc40d +0x021:  mov    0x8(%ebp),%eax
086cc410 +0x024:  lea    0x134(%eax),%edx
086cc416 +0x02a:  lea    -0x4c(%ebp),%eax
086cc419 +0x02d:  mov    %edx,0x4(%esp)
086cc41d +0x031:  mov    %eax,(%esp)
086cc420 +0x034:  call   080f78a6 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xa3>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xa3
086cc425 +0x039:  sub    $0x4,%esp
086cc428 +0x03c:  jmp    086cc84e <+0x462>
086cc42d +0x041:  lea    -0x4c(%ebp),%eax
086cc430 +0x044:  mov    %eax,(%esp)
086cc433 +0x047:  call   080f7944 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x141>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x141
086cc438 +0x04c:  mov    0x4(%eax),%eax
086cc43b +0x04f:  mov    %eax,-0x20(%ebp)
086cc43e +0x052:  mov    -0x20(%ebp),%eax
086cc441 +0x055:  mov    %eax,(%esp)
086cc444 +0x058:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
086cc449 +0x05d:  cmp    $0x2,%eax
086cc44c +0x060:  setle  %al
086cc44f +0x063:  test   %al,%al
086cc451 +0x065:  jne    086cc830 <+0x444>
086cc457 +0x06b:  mov    &_ZN10GlobalData23s_fatigueBatteryHandle_E,%eax
086cc45c +0x070:  movl   $0x0,0x8(%esp)
086cc464 +0x078:  mov    -0x20(%ebp),%edx
086cc467 +0x07b:  mov    %edx,0x4(%esp)
086cc46b +0x07f:  mov    %eax,(%esp)
086cc46e +0x082:  call   084a8094 <_ZN21CFatigueBatteryHandle22ChargingFatigueBatteryEP5CUseri>  ; CFatigueBatteryHandle::ChargingFatigueBattery(CUser*, int)
086cc473 +0x087:  movswl %ax,%edx
086cc476 +0x08a:  mov    -0x20(%ebp),%eax
086cc479 +0x08d:  mov    %edx,0x4(%esp)
086cc47d +0x091:  mov    %eax,(%esp)
086cc480 +0x094:  call   086566e4 <_ZN15CUserCharacInfo25IncFatigueBatteryChargingEs>  ; CUserCharacInfo::IncFatigueBatteryCharging(short)
086cc485 +0x099:  mov    &_ZN10GlobalData23s_fatigueBatteryHandle_E,%eax
086cc48a +0x09e:  mov    -0x20(%ebp),%edx
086cc48d +0x0a1:  mov    %edx,0x4(%esp)
086cc491 +0x0a5:  mov    %eax,(%esp)
086cc494 +0x0a8:  call   084a83da <_ZN21CFatigueBatteryHandle20ActiveFatigueBatteryEP5CUser>  ; CFatigueBatteryHandle::ActiveFatigueBattery(CUser*)
086cc499 +0x0ad:  cwtl
086cc49a +0x0ae:  mov    %eax,-0x1c(%ebp)
086cc49d +0x0b1:  cmpl   $0x0,-0x1c(%ebp)
086cc4a1 +0x0b5:  je     086cc518 <+0x12c>
086cc4a3 +0x0b7:  mov    -0x1c(%ebp),%eax
086cc4a6 +0x0ba:  movswl %ax,%edx
086cc4a9 +0x0bd:  mov    -0x20(%ebp),%eax
086cc4ac +0x0c0:  mov    %edx,0x4(%esp)
086cc4b0 +0x0c4:  mov    %eax,(%esp)
086cc4b3 +0x0c7:  call   08656784 <_ZN15CUserCharacInfo25DecFatigueBatteryChargingEs>  ; CUserCharacInfo::DecFatigueBatteryCharging(short)
086cc4b8 +0x0cc:  mov    -0x20(%ebp),%eax
086cc4bb +0x0cf:  mov    %eax,(%esp)
086cc4be +0x0d2:  call   084a857e <_GLOBAL__I__ZN21CFatigueBatteryHandleC2Ev+0xe4>  ; global constructors keyed to CFatigueBatteryHandle::CFatigueBatteryHandle()+0xe4
086cc4c3 +0x0d7:  movswl %ax,%esi
086cc4c6 +0x0da:  mov    -0x20(%ebp),%eax
086cc4c9 +0x0dd:  mov    %eax,(%esp)
086cc4cc +0x0e0:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
086cc4d1 +0x0e5:  mov    %eax,%ebx
086cc4d3 +0x0e7:  movl   $0x0,0xc(%esp)
086cc4db +0x0ef:  movl   $0x1286,0x8(%esp)
086cc4e3 +0x0f7:  movl   $&_ZZN9GameWorld15ResetAllFatigueEvE19__PRETTY_FUNCTION__,0x4(%esp)
086cc4eb +0x0ff:  lea    -0x3c(%ebp),%eax
086cc4ee +0x102:  mov    %eax,(%esp)
086cc4f1 +0x105:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086cc4f6 +0x10a:  mov    %esi,0x10(%esp)
086cc4fa +0x10e:  mov    -0x1c(%ebp),%eax
086cc4fd +0x111:  mov    %eax,0xc(%esp)
086cc501 +0x115:  mov    %ebx,0x8(%esp)
086cc505 +0x119:  movl   $"FATIGUE BATTERY ACTIVE: charno(%d) , descFatigueAmount(%d), cur charging(%d)",0x4(%esp)
086cc50d +0x121:  lea    -0x3c(%ebp),%eax
086cc510 +0x124:  mov    %eax,(%esp)
086cc513 +0x127:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086cc518 +0x12c:  mov    -0x20(%ebp),%eax
086cc51b +0x12f:  mov    %eax,(%esp)
086cc51e +0x132:  call   08689494 <_ZNK5CUser17DBUpdateDBLogItemEv>  ; CUser::DBUpdateDBLogItem() const
086cc523 +0x137:  mov    -0x20(%ebp),%eax
086cc526 +0x13a:  mov    %eax,(%esp)
086cc529 +0x13d:  call   08697262 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3ab7>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3ab7
086cc52e +0x142:  movl   $0x0,0x4(%esp)
086cc536 +0x14a:  mov    -0x20(%ebp),%eax
086cc539 +0x14d:  mov    %eax,(%esp)
086cc53c +0x150:  call   08657ada <_ZN5CUser14RecoverFatigueEi>  ; CUser::RecoverFatigue(int)
086cc541 +0x155:  mov    -0x20(%ebp),%eax
086cc544 +0x158:  mov    %eax,(%esp)
086cc547 +0x15b:  call   08656540 <_ZN5CUser11SendFatigueEv>  ; CUser::SendFatigue()
086cc54c +0x160:  mov    -0x20(%ebp),%eax
086cc54f +0x163:  mov    %eax,(%esp)
086cc552 +0x166:  call   084ebf90 <_GLOBAL__I__Z7getUserj+0x2f42>  ; global constructors keyed to getUser(unsigned int)+0x2f42
086cc557 +0x16b:  mov    -0x20(%ebp),%eax
086cc55a +0x16e:  mov    %eax,(%esp)
086cc55d +0x171:  call   084ec812 <_GLOBAL__I__Z7getUserj+0x37c4>  ; global constructors keyed to getUser(unsigned int)+0x37c4
086cc562 +0x176:  mov    -0x20(%ebp),%eax
086cc565 +0x179:  mov    %eax,(%esp)
086cc568 +0x17c:  call   086d207c <_GLOBAL__I_MAX_VILLAGE_NUM+0x8ad>  ; global constructors keyed to MAX_VILLAGE_NUM+0x8ad
086cc56d +0x181:  lea    -0x46(%ebp),%eax
086cc570 +0x184:  mov    %eax,0x4(%esp)
086cc574 +0x188:  mov    -0x20(%ebp),%eax
086cc577 +0x18b:  mov    %eax,(%esp)
086cc57a +0x18e:  call   084eca54 <_GLOBAL__I__Z7getUserj+0x3a06>  ; global constructors keyed to getUser(unsigned int)+0x3a06
086cc57f +0x193:  mov    -0x20(%ebp),%eax
086cc582 +0x196:  mov    %eax,(%esp)
086cc585 +0x199:  call   086d20d0 <_GLOBAL__I_MAX_VILLAGE_NUM+0x901>  ; global constructors keyed to MAX_VILLAGE_NUM+0x901
086cc58a +0x19e:  movl   $0x11,0x4(%esp)
086cc592 +0x1a6:  mov    -0x20(%ebp),%eax
086cc595 +0x1a9:  mov    %eax,(%esp)
086cc598 +0x1ac:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
086cc59d +0x1b1:  movl   $0x0,0x8(%esp)
086cc5a5 +0x1b9:  mov    -0x20(%ebp),%edx
086cc5a8 +0x1bc:  mov    %edx,0x4(%esp)
086cc5ac +0x1c0:  mov    %eax,(%esp)
086cc5af +0x1c3:  call   080dd246 <_ZN12CBoosterGage9send_dataEP5CUseri>  ; CBoosterGage::send_data(CUser*, int)
086cc5b4 +0x1c8:  mov    -0x20(%ebp),%eax
086cc5b7 +0x1cb:  mov    %eax,(%esp)
086cc5ba +0x1ce:  call   08662528 <_ZN5CUser16send_MissionListEv>  ; CUser::send_MissionList()
086cc5bf +0x1d3:  mov    -0x20(%ebp),%eax
086cc5c2 +0x1d6:  mov    %eax,(%esp)
086cc5c5 +0x1d9:  call   084ec23a <_GLOBAL__I__Z7getUserj+0x31ec>  ; global constructors keyed to getUser(unsigned int)+0x31ec
086cc5ca +0x1de:  mov    -0x20(%ebp),%eax
086cc5cd +0x1e1:  mov    %eax,(%esp)
086cc5d0 +0x1e4:  call   084ec280 <_GLOBAL__I__Z7getUserj+0x3232>  ; global constructors keyed to getUser(unsigned int)+0x3232
086cc5d5 +0x1e9:  mov    -0x20(%ebp),%eax
086cc5d8 +0x1ec:  mov    %eax,(%esp)
086cc5db +0x1ef:  call   086818fc <_ZN5CUser22SendConditionEventInfoEv>  ; CUser::SendConditionEventInfo()
086cc5e0 +0x1f4:  mov    -0x20(%ebp),%eax
086cc5e3 +0x1f7:  mov    %eax,(%esp)
086cc5e6 +0x1fa:  call   084ec2c6 <_GLOBAL__I__Z7getUserj+0x3278>  ; global constructors keyed to getUser(unsigned int)+0x3278
086cc5eb +0x1ff:  mov    -0x20(%ebp),%eax
086cc5ee +0x202:  mov    %eax,(%esp)
086cc5f1 +0x205:  call   08681820 <_ZN5CUser27SendProperDungeonClearCountEv>  ; CUser::SendProperDungeonClearCount()
086cc5f6 +0x20a:  mov    -0x20(%ebp),%eax
086cc5f9 +0x20d:  mov    %eax,(%esp)
086cc5fc +0x210:  call   086d2052 <_GLOBAL__I_MAX_VILLAGE_NUM+0x883>  ; global constructors keyed to MAX_VILLAGE_NUM+0x883
086cc601 +0x215:  mov    -0x20(%ebp),%eax
086cc604 +0x218:  mov    %eax,(%esp)
086cc607 +0x21b:  call   08681218 <_ZN5CUser29resetNPCRelationShipDailyDataEv>  ; CUser::resetNPCRelationShipDailyData()
086cc60c +0x220:  mov    -0x20(%ebp),%eax
086cc60f +0x223:  mov    %eax,(%esp)
086cc612 +0x226:  call   0868121e <_ZN5CUser24sendNPCRelationShipFavorEv>  ; CUser::sendNPCRelationShipFavor()
086cc617 +0x22b:  mov    -0x20(%ebp),%eax
086cc61a +0x22e:  mov    %eax,(%esp)
086cc61d +0x231:  call   084ec86c <_GLOBAL__I__Z7getUserj+0x381e>  ; global constructors keyed to getUser(unsigned int)+0x381e
086cc622 +0x236:  mov    %eax,(%esp)
086cc625 +0x239:  call   0869704e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x38a3>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x38a3
086cc62a +0x23e:  mov    -0x20(%ebp),%eax
086cc62d +0x241:  add    $0x8d264,%eax
086cc632 +0x246:  mov    %eax,(%esp)
086cc635 +0x249:  call   08694bfc <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x1451>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x1451
086cc63a +0x24e:  mov    %eax,%ebx
086cc63c +0x250:  mov    -0x20(%ebp),%eax
086cc63f +0x253:  mov    %eax,(%esp)
086cc642 +0x256:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
086cc647 +0x25b:  movl   $0x1,0x8(%esp)
086cc64f +0x263:  mov    %ebx,0x4(%esp)
086cc653 +0x267:  mov    %eax,(%esp)
086cc656 +0x26a:  call   0812431c <_ZN8APSystem20DB_UpdateActionPoint11makeRequestEiRKNS_22_SIG_LOAD_ACTION_POINTEb>  ; APSystem::DB_UpdateActionPoint::makeRequest(int, APSystem::_SIG_LOAD_ACTION_POINT const&, bool)
086cc65b +0x26f:  mov    -0x20(%ebp),%eax
086cc65e +0x272:  mov    %eax,(%esp)
086cc661 +0x275:  call   0812238a <_ZN8APSystem9CUserProc33SetTodayActionAndCheckMedalRewardEP5CUser>  ; APSystem::CUserProc::SetTodayActionAndCheckMedalReward(CUser*)
086cc666 +0x27a:  mov    -0x20(%ebp),%eax
086cc669 +0x27d:  mov    %eax,(%esp)
086cc66c +0x280:  call   084ed008 <_GLOBAL__I__Z7getUserj+0x3fba>  ; global constructors keyed to getUser(unsigned int)+0x3fba
086cc671 +0x285:  movl   $0x0,0xc(%esp)
086cc679 +0x28d:  movl   $0x1,0x8(%esp)
086cc681 +0x295:  movl   $0x0,0x4(%esp)
086cc689 +0x29d:  mov    %eax,(%esp)
086cc68c +0x2a0:  call   082872ca <_ZN16Secu_GoldControl8SavetoDBEbbb>  ; Secu_GoldControl::SavetoDB(bool, bool, bool)
086cc691 +0x2a5:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086cc696 +0x2aa:  mov    %eax,(%esp)
086cc699 +0x2ad:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
086cc69e +0x2b2:  movl   $0x1,0x8(%esp)
086cc6a6 +0x2ba:  mov    -0x20(%ebp),%edx
086cc6a9 +0x2bd:  mov    %edx,0x4(%esp)
086cc6ad +0x2c1:  mov    %eax,(%esp)
086cc6b0 +0x2c4:  call   0810c40e <_ZN13EventClassify15CEventScriptMng20send_event_init_dataEP5CUserb>  ; EventClassify::CEventScriptMng::send_event_init_data(CUser*, bool)
086cc6b5 +0x2c9:  mov    -0x20(%ebp),%eax
086cc6b8 +0x2cc:  mov    %eax,(%esp)
086cc6bb +0x2cf:  call   08690ed8 <_ZN15CUserCharacInfo25resetBlueMarbleEnterCountEv>  ; CUserCharacInfo::resetBlueMarbleEnterCount()
086cc6c0 +0x2d4:  mov    -0x20(%ebp),%eax
086cc6c3 +0x2d7:  mov    %eax,(%esp)
086cc6c6 +0x2da:  call   08690fcc <_ZN5CUser24sendBlueMarbleEnterCountEv>  ; CUser::sendBlueMarbleEnterCount()
086cc6cb +0x2df:  mov    -0x20(%ebp),%eax
086cc6ce +0x2e2:  mov    %eax,(%esp)
086cc6d1 +0x2e5:  call   084ed086 <_GLOBAL__I__Z7getUserj+0x4038>  ; global constructors keyed to getUser(unsigned int)+0x4038
086cc6d6 +0x2ea:  mov    $0x0,%ebx
086cc6db +0x2ef:  mov    $0x0,%esi
086cc6e0 +0x2f4:  movzbl &_ZZN9GameWorld15ResetAllFatigueEvE7isFirst,%eax
086cc6e7 +0x2fb:  test   %al,%al
086cc6e9 +0x2fd:  je     086cc75b <+0x36f>
086cc6eb +0x2ff:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
086cc6f2 +0x306:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
086cc6f7 +0x30b:  mov    %eax,%edi
086cc6f9 +0x30d:  lea    -0x25(%ebp),%eax
086cc6fc +0x310:  mov    %eax,(%esp)
086cc6ff +0x313:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
086cc704 +0x318:  mov    $0x1,%ebx
086cc709 +0x31d:  lea    -0x25(%ebp),%eax
086cc70c +0x320:  mov    %eax,0x8(%esp)
086cc710 +0x324:  movl   $"Arad_EventPeriodDataManager",0x4(%esp)
086cc718 +0x32c:  lea    -0x2c(%ebp),%eax
086cc71b +0x32f:  mov    %eax,(%esp)
086cc71e +0x332:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
086cc723 +0x337:  mov    $0x1,%esi
086cc728 +0x33c:  call   08197efa <_GLOBAL__I__ZN4ARAD16CheckAccountItemEP5CUserjRN17PurchaseLimitItem4InfoE+0x105>  ; global constructors keyed to ARAD::CheckAccountItem(CUser*, unsigned int, PurchaseLimitItem::Info&)+0x105
086cc72d +0x341:  lea    -0x2c(%ebp),%edx
086cc730 +0x344:  mov    %edx,0x4(%esp)
086cc734 +0x348:  mov    %eax,(%esp)
086cc737 +0x34b:  call   081882ac <_ZN4ARAD16Arad_DataManager14findGameScriptESs>  ; ARAD::Arad_DataManager::findGameScript(std::basic_string<char, std::char_traits<char>, std::allocator<char> >)
086cc73c +0x350:  mov    %edi,0x8(%esp)
086cc740 +0x354:  movl   $0x8e,0x4(%esp)
086cc748 +0x35c:  mov    %eax,(%esp)
086cc74b +0x35f:  call   081956b0 <_ZN4ARAD27Arad_EventPeriodDataManager9isAppliedE22ENUM_REPEAT_EVENT_CODEj>  ; ARAD::Arad_EventPeriodDataManager::isApplied(ENUM_REPEAT_EVENT_CODE, unsigned int)
086cc750 +0x364:  test   %al,%al
086cc752 +0x366:  je     086cc75b <+0x36f>
086cc754 +0x368:  mov    $0x1,%eax
086cc759 +0x36d:  jmp    086cc760 <+0x374>
086cc75b +0x36f:  mov    $0x0,%eax
086cc760 +0x374:  mov    %eax,%edi
086cc762 +0x376:  mov    %esi,%eax
086cc764 +0x378:  test   %al,%al
086cc766 +0x37a:  jne    086cc787 <+0x39b>
086cc768 +0x37c:  jmp    086cc7b3 <+0x3c7>
086cc76a +0x37e:  mov    %edx,%edi
086cc76c +0x380:  mov    %eax,-0x5c(%ebp)
086cc76f +0x383:  mov    %esi,%eax
086cc771 +0x385:  test   %al,%al
086cc773 +0x387:  je     086cc780 <+0x394>
086cc775 +0x389:  lea    -0x2c(%ebp),%eax
086cc778 +0x38c:  mov    %eax,(%esp)
086cc77b +0x38f:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086cc780 +0x394:  mov    -0x5c(%ebp),%eax
086cc783 +0x397:  mov    %edi,%edx
086cc785 +0x399:  jmp    086cc794 <+0x3a8>
086cc787 +0x39b:  lea    -0x2c(%ebp),%eax
086cc78a +0x39e:  mov    %eax,(%esp)
086cc78d +0x3a1:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086cc792 +0x3a6:  jmp    086cc7b3 <+0x3c7>
086cc794 +0x3a8:  mov    %edx,%esi
086cc796 +0x3aa:  mov    %eax,%edi
086cc798 +0x3ac:  test   %bl,%bl
086cc79a +0x3ae:  je     086cc7a7 <+0x3bb>
086cc79c +0x3b0:  lea    -0x25(%ebp),%eax
086cc79f +0x3b3:  mov    %eax,(%esp)
086cc7a2 +0x3b6:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
086cc7a7 +0x3bb:  mov    %edi,%eax
086cc7a9 +0x3bd:  mov    %esi,%edx
086cc7ab +0x3bf:  mov    %eax,(%esp)
086cc7ae +0x3c2:  call   08ae3750 <_Unwind_Resume>
086cc7b3 +0x3c7:  test   %bl,%bl
086cc7b5 +0x3c9:  je     086cc7c2 <+0x3d6>
086cc7b7 +0x3cb:  lea    -0x25(%ebp),%eax
086cc7ba +0x3ce:  mov    %eax,(%esp)
086cc7bd +0x3d1:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
086cc7c2 +0x3d6:  mov    %edi,%eax
086cc7c4 +0x3d8:  test   %al,%al
086cc7c6 +0x3da:  je     086cc7f5 <+0x409>
086cc7c8 +0x3dc:  lea    -0x58(%ebp),%eax
086cc7cb +0x3df:  mov    %eax,(%esp)
086cc7ce +0x3e2:  call   08186652 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC2Ev+0x1c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()+0x1c
086cc7d3 +0x3e7:  lea    -0x58(%ebp),%eax
086cc7d6 +0x3ea:  mov    %eax,0xc(%esp)
086cc7da +0x3ee:  movl   $0x8e,0x8(%esp)
086cc7e2 +0x3f6:  movl   $0x0,0x4(%esp)
086cc7ea +0x3fe:  mov    -0x20(%ebp),%eax
086cc7ed +0x401:  mov    %eax,(%esp)
086cc7f0 +0x404:  call   081978dd <_ZN4ARAD23notifyOpenMessageDialogEP5CUseriiRK22AradServerStateMessage>  ; ARAD::notifyOpenMessageDialog(CUser*, int, int, AradServerStateMessage const&)
086cc7f5 +0x409:  mov    -0x20(%ebp),%eax
086cc7f8 +0x40c:  movb   $0x4,0x8ec32(%eax)
086cc7ff +0x413:  mov    -0x20(%ebp),%eax
086cc802 +0x416:  mov    %eax,(%esp)
086cc805 +0x419:  call   081618a6 <_ZN28InterSelectPcroomDailyReward10SendPacketEP5CUser>  ; InterSelectPcroomDailyReward::SendPacket(CUser*)
086cc80a +0x41e:  call   0811c9ce <_GLOBAL__I_events+0x1071>  ; global constructors keyed to events+0x1071
086cc80f +0x423:  movl   $0x0,0xc(%esp)
086cc817 +0x42b:  movl   $0x5,0x8(%esp)
086cc81f +0x433:  mov    -0x20(%ebp),%edx
086cc822 +0x436:  mov    %edx,0x4(%esp)
086cc826 +0x43a:  mov    %eax,(%esp)
086cc829 +0x43d:  call   081672be <_ZN16HeroMissionEvent14processMissionEP5CUserN20HeroMissionCondition9MissionNo1TEj>  ; HeroMissionEvent::processMission(CUser*, HeroMissionCondition::MissionNo::T, unsigned int)
086cc82e +0x442:  jmp    086cc831 <+0x445>
086cc830 +0x444:  nop
086cc831 +0x445:  lea    -0x24(%ebp),%eax
086cc834 +0x448:  movl   $0x0,0x8(%esp)
086cc83c +0x450:  lea    -0x4c(%ebp),%edx
086cc83f +0x453:  mov    %edx,0x4(%esp)
086cc843 +0x457:  mov    %eax,(%esp)
086cc846 +0x45a:  call   080f7906 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x103>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x103
086cc84b +0x45f:  sub    $0x4,%esp
086cc84e +0x462:  mov    0x8(%ebp),%eax
086cc851 +0x465:  lea    0x134(%eax),%edx
086cc857 +0x46b:  lea    -0x40(%ebp),%eax
086cc85a +0x46e:  mov    %edx,0x4(%esp)
086cc85e +0x472:  mov    %eax,(%esp)
086cc861 +0x475:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
086cc866 +0x47a:  sub    $0x4,%esp
086cc869 +0x47d:  lea    -0x40(%ebp),%eax
086cc86c +0x480:  mov    %eax,0x4(%esp)
086cc870 +0x484:  lea    -0x4c(%ebp),%eax
086cc873 +0x487:  mov    %eax,(%esp)
086cc876 +0x48a:  call   080f78f2 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xef>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xef
086cc87b +0x48f:  test   %al,%al
086cc87d +0x491:  jne    086cc42d <+0x41>
086cc883 +0x497:  mov    0x8(%ebp),%eax
086cc886 +0x49a:  add    $0x134,%eax
086cc88b +0x49f:  mov    %eax,(%esp)
086cc88e +0x4a2:  call   086d40da <_GLOBAL__I_MAX_VILLAGE_NUM+0x290b>  ; global constructors keyed to MAX_VILLAGE_NUM+0x290b
086cc893 +0x4a7:  xor    $0x1,%eax
086cc896 +0x4aa:  test   %al,%al
086cc898 +0x4ac:  je     086cc8a1 <+0x4b5>
086cc89a +0x4ae:  movb   $0x0,&_ZZN9GameWorld15ResetAllFatigueEvE7isFirst
086cc8a1 +0x4b5:  lea    -0xc(%ebp),%esp
086cc8a4 +0x4b8:  add    $0x0,%esp
086cc8a7 +0x4bb:  pop    %ebx
086cc8a8 +0x4bc:  pop    %esi
086cc8a9 +0x4bd:  pop    %edi
086cc8aa +0x4be:  pop    %ebp
086cc8ab +0x4bf:  ret
```

## 反编译 C

```c
// GameWorld::ResetAllFatigue @ 0x86cc3ec

/* GameWorld::ResetAllFatigue() */

void __thiscall GameWorld::ResetAllFatigue(GameWorld *this)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  undefined4 uVar7;
  CUser *pCVar8;
  CDungeonGainedGold *this_00;
  _SIG_LOAD_ACTION_POINT *p_Var9;
  Secu_GoldControl *this_01;
  CDataManager *this_02;
  CEventScriptMng *this_03;
  Arad_DataManager *this_04;
  Arad_EventPeriodDataManager *pAVar10;
  HeroMissionEvent *pHVar11;
  AradServerStateMessage local_5c [12];
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_50 [6];
  short local_4a [3];
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_44 [4];
  cMyTrace local_40 [16];
  string local_30 [7];
  allocator<char> local_29;
  _Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> local_28 [4];
  CUser *local_24;
  int local_20;
  
  local_4a[0] = 0;
  local_4a[1] = 0;
  local_4a[2] = 0;
  SetWeekendBounsEvent();
  std::
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  ::begin(local_50);
  do {
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::end(local_44);
    cVar4 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_50,
                       (_Rb_tree_iterator *)local_44);
    if (cVar4 == '\0') {
      cVar4 = std::
              map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
              ::empty((map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
                       *)(this + 0x134));
      if (cVar4 != '\x01') {
        ResetAllFatigue()::isFirst = '\0';
      }
      return;
    }
    iVar6 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_50);
    local_24 = *(CUser **)(iVar6 + 4);
    iVar6 = CUser::get_state(local_24);
    if (2 < iVar6) {
      sVar5 = CFatigueBatteryHandle::ChargingFatigueBattery
                        (GlobalData::s_fatigueBatteryHandle_,local_24,0);
      CUserCharacInfo::IncFatigueBatteryCharging((CUserCharacInfo *)local_24,sVar5);
      sVar5 = CFatigueBatteryHandle::ActiveFatigueBattery
                        (GlobalData::s_fatigueBatteryHandle_,local_24);
      local_20 = (int)sVar5;
      if (local_20 != 0) {
        CUserCharacInfo::DecFatigueBatteryCharging((CUserCharacInfo *)local_24,sVar5);
        sVar5 = CUserCharacInfo::GetFatigueBatteryCharging((CUserCharacInfo *)local_24);
        uVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)local_24);
        cMyTrace::cMyTrace(local_40,"void GameWorld::ResetAllFatigue()",0x1286,0);
        cMyTrace::operator()
                  (local_40,
                   "FATIGUE BATTERY ACTIVE: charno(%d) , descFatigueAmount(%d), cur charging(%d)",
                   uVar7,local_20,(int)sVar5);
      }
      CUser::DBUpdateDBLogItem(local_24);
      CUser::ResetDBLogItem(local_24);
      CUser::RecoverFatigue(local_24,0);
      CUser::SendFatigue(local_24);
      CUserCharacInfo::resetCurCharacMemberBonusFatigue((CUserCharacInfo *)local_24);
      CUser::resetAccountMemberBonusFatigue(local_24);
      CUser::resetAccountUsedFatigue(local_24);
      CUser::SetDailyBadge(local_24,local_4a);
      CUser::ResetDailyCharacExpandData(local_24);
      pCVar8 = (CUser *)CUser::GetCharacExpandData(local_24,0x11);
      CBoosterGage::send_data(pCVar8,(int)local_24);
      CUser::send_MissionList(local_24);
      CUserCharacInfo::ClearCurConditionEventStep((CUserCharacInfo *)local_24);
      CUserCharacInfo::ClearCurConditionEventRewardStep((CUserCharacInfo *)local_24);
      CUser::SendConditionEventInfo(local_24);
      CUserCharacInfo::ClearProperDungeonClearCount((CUserCharacInfo *)local_24);
      CUser::SendProperDungeonClearCount(local_24);
      CUserCharacInfo::ResetRevengeDungeonClear((CUserCharacInfo *)local_24);
      CUser::resetNPCRelationShipDailyData();
      CUser::sendNPCRelationShipFavor();
      this_00 = (CDungeonGainedGold *)CUser::getDungeonGainedGold(local_24);
      CDungeonGainedGold::reset(this_00);
      p_Var9 = (_SIG_LOAD_ACTION_POINT *)
               APSystem::CActionPointManager::GetActionPoint
                         ((CActionPointManager *)(local_24 + 0x8d264));
      iVar6 = CUser::GetUID(local_24);
      APSystem::DB_UpdateActionPoint::makeRequest(iVar6,p_Var9,true);
      APSystem::CUserProc::SetTodayActionAndCheckMedalReward(local_24);
      this_01 = (Secu_GoldControl *)CUser::GetGoldControl(local_24);
      Secu_GoldControl::SavetoDB(this_01,false,true,false);
      this_02 = (CDataManager *)G_CDataManager();
      this_03 = (CEventScriptMng *)CDataManager::get_event_script_mng(this_02);
      EventClassify::CEventScriptMng::send_event_init_data(this_03,local_24,true);
      CUserCharacInfo::resetBlueMarbleEnterCount((CUserCharacInfo *)local_24);
      CUser::sendBlueMarbleEnterCount(local_24);
      CUser::ResetCurCharacUsedGiftFatigueQuantity(local_24);
      bVar2 = false;
      bVar1 = false;
      if (ResetAllFatigue()::isFirst == '\0') {
LAB_086cc75b:
        bVar3 = false;
      }
      else {
        uVar7 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        std::allocator<char>::allocator();
        bVar2 = true;
                    /* try { // try from 086cc71e to 086cc74f has its CatchHandler @ 086cc76a */
        std::string::string(local_30,"Arad_EventPeriodDataManager",(allocator *)&local_29);
        bVar1 = true;
        this_04 = (Arad_DataManager *)ARAD::Singleton<ARAD::Arad_DataManager>::Get();
        pAVar10 = (Arad_EventPeriodDataManager *)
                  ARAD::Arad_DataManager::findGameScript(this_04,(string)local_30);
        cVar4 = ARAD::Arad_EventPeriodDataManager::isApplied(pAVar10,0x8e,uVar7);
        if (cVar4 == '\0') goto LAB_086cc75b;
        bVar3 = true;
      }
      if (bVar1) {
                    /* try { // try from 086cc78d to 086cc791 has its CatchHandler @ 086cc794 */
        std::string::~string(local_30);
      }
      if (bVar2) {
        std::allocator<char>::~allocator(&local_29);
      }
      if (bVar3) {
        AradServerStateMessage::AradServerStateMessage(local_5c);
        ARAD::notifyOpenMessageDialog(local_24,0,0x8e,local_5c);
      }
      local_24[0x8ec32] = (CUser)0x4;
      InterSelectPcroomDailyReward::SendPacket(local_24);
      pHVar11 = (HeroMissionEvent *)ARAD::Singleton<HeroMissionEvent>::Get();
      HeroMissionEvent::processMission(pHVar11,local_24,5,0);
    }
    std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
              (local_28,(int)local_50);
  } while( true );
}
```
