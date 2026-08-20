# ResetCurCharac

`_ZN5CUser14ResetCurCharacEv`

`CUser::ResetCurCharac()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0865851c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0865851c  _ZN5CUser14ResetCurCharacEv
#           CUser::ResetCurCharac()
# range [0x0865851c, 0x0865890f]
0865851c +0x000:  push   %ebp
0865851d +0x001:  mov    %esp,%ebp
0865851f +0x003:  push   %ebx
08658520 +0x004:  sub    $0x24,%esp
08658523 +0x007:  mov    0x8(%ebp),%eax
08658526 +0x00a:  mov    %eax,(%esp)
08658529 +0x00d:  call   084ebec4 <_GLOBAL__I__Z7getUserj+0x2e76>  ; global constructors keyed to getUser(unsigned int)+0x2e76
0865852e +0x012:  mov    %eax,(%esp)
08658531 +0x015:  call   085d5dc0 <_ZN13PvpResultType5ClearEv>  ; PvpResultType::Clear()
08658536 +0x01a:  mov    0x8(%ebp),%eax
08658539 +0x01d:  mov    %eax,(%esp)
0865853c +0x020:  call   0869620e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2a63>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2a63
08658541 +0x025:  mov    %eax,(%esp)
08658544 +0x028:  call   0869ae1c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7671>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7671
08658549 +0x02d:  mov    0x8(%ebp),%eax
0865854c +0x030:  add    $0x8cf80,%eax
08658551 +0x035:  mov    %eax,(%esp)
08658554 +0x038:  call   082357b8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xae62>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xae62
08658559 +0x03d:  mov    0x8(%ebp),%eax
0865855c +0x040:  mov    %eax,(%esp)
0865855f +0x043:  call   084b42cc <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x37f>  ; global constructors keyed to game_master::CMacro::Reset()+0x37f
08658564 +0x048:  mov    %eax,(%esp)
08658567 +0x04b:  call   08695972 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x21c7>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x21c7
0865856c +0x050:  mov    0x8(%ebp),%eax
0865856f +0x053:  movb   $0x0,0x796cc(%eax)
08658576 +0x05a:  mov    0x8(%ebp),%eax
08658579 +0x05d:  movl   $0x0,0x796d0(%eax)
08658583 +0x067:  mov    0x8(%ebp),%eax
08658586 +0x06a:  mov    %eax,(%esp)
08658589 +0x06d:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0865858e +0x072:  test   %eax,%eax
08658590 +0x074:  setne  %al
08658593 +0x077:  test   %al,%al
08658595 +0x079:  je     0865865e <+0x142>
0865859b +0x07f:  mov    0x8(%ebp),%eax
0865859e +0x082:  mov    %eax,(%esp)
086585a1 +0x085:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
086585a6 +0x08a:  mov    %eax,(%esp)
086585a9 +0x08d:  call   08110c6c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x17e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x17e
086585ae +0x092:  mov    %eax,(%esp)
086585b1 +0x095:  call   082f9ae4 <_ZN8WongWork14CAvatarItemMgr5ResetEv>  ; WongWork::CAvatarItemMgr::Reset()
086585b6 +0x09a:  mov    0x8(%ebp),%eax
086585b9 +0x09d:  mov    %eax,(%esp)
086585bc +0x0a0:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
086585c1 +0x0a5:  mov    %eax,(%esp)
086585c4 +0x0a8:  call   08604e08 <_ZN9SkillSlot21clear_all_skills_bothEv>  ; SkillSlot::clear_all_skills_both()
086585c9 +0x0ad:  mov    0x8(%ebp),%eax
086585cc +0x0b0:  mov    %eax,(%esp)
086585cf +0x0b3:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
086585d4 +0x0b8:  mov    %eax,(%esp)
086585d7 +0x0bb:  call   0850b0c2 <_ZN6CCargo5resetEv>  ; CCargo::reset()
086585dc +0x0c0:  mov    0x8(%ebp),%eax
086585df +0x0c3:  mov    %eax,(%esp)
086585e2 +0x0c6:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
086585e7 +0x0cb:  mov    %eax,(%esp)
086585ea +0x0ce:  call   086ab894 <_ZN9UserQuest5resetEv>  ; UserQuest::reset()
086585ef +0x0d3:  mov    0x8(%ebp),%eax
086585f2 +0x0d6:  mov    %eax,(%esp)
086585f5 +0x0d9:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
086585fa +0x0de:  mov    %eax,(%esp)
086585fd +0x0e1:  call   080dd568 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xb1>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xb1
08658602 +0x0e6:  mov    %eax,(%esp)
08658605 +0x0e9:  call   0833a45a <_ZN13user_creature12CCreatureMgr5ResetEv>  ; user_creature::CCreatureMgr::Reset()
0865860a +0x0ee:  mov    0x8(%ebp),%eax
0865860d +0x0f1:  mov    %eax,(%esp)
08658610 +0x0f4:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08658615 +0x0f9:  mov    %eax,(%esp)
08658618 +0x0fc:  call   080dd568 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xb1>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xb1
0865861d +0x101:  mov    0x8(%ebp),%edx
08658620 +0x104:  mov    %edx,0x4(%esp)
08658624 +0x108:  mov    %eax,(%esp)
08658627 +0x10b:  call   0822d39a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2a44>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2a44
0865862c +0x110:  mov    0x8(%ebp),%eax
0865862f +0x113:  mov    %eax,(%esp)
08658632 +0x116:  call   0822f8f6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4fa0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4fa0
08658637 +0x11b:  test   %al,%al
08658639 +0x11d:  je     0865865e <+0x142>
0865863b +0x11f:  mov    0x8(%ebp),%eax
0865863e +0x122:  movl   $0x0,0xc(%esp)
08658646 +0x12a:  movl   $0x0,0x8(%esp)
0865864e +0x132:  movl   $0x0,0x4(%esp)
08658656 +0x13a:  mov    %eax,(%esp)
08658659 +0x13d:  call   0822f91a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4fc4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4fc4
0865865e +0x142:  mov    0x8(%ebp),%eax
08658661 +0x145:  mov    %eax,(%esp)
08658664 +0x148:  call   08645c58 <_ZN15CUserCharacInfo20reset_guild_temp_expEv>  ; CUserCharacInfo::reset_guild_temp_exp()
08658669 +0x14d:  mov    0x8(%ebp),%eax
0865866c +0x150:  mov    %eax,(%esp)
0865866f +0x153:  call   08645cb4 <_ZN15CUserCharacInfo15reset_guild_expEv>  ; CUserCharacInfo::reset_guild_exp()
08658674 +0x158:  mov    0x8(%ebp),%eax
08658677 +0x15b:  mov    %eax,(%esp)
0865867a +0x15e:  call   08645d96 <_ZN15CUserCharacInfo26reset_level_before_dungeonEv>  ; CUserCharacInfo::reset_level_before_dungeon()
0865867f +0x163:  movl   $0x1,-0xc(%ebp)
08658686 +0x16a:  jmp    086586d4 <+0x1b8>
08658688 +0x16c:  mov    0x8(%ebp),%eax
0865868b +0x16f:  mov    %eax,(%esp)
0865868e +0x172:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08658693 +0x177:  mov    %eax,%ebx
08658695 +0x179:  mov    -0xc(%ebp),%eax
08658698 +0x17c:  mov    %eax,(%esp)
0865869b +0x17f:  call   082a774c <_GLOBAL__I__ZN4CLog5this_E+0x3b73>  ; global constructors keyed to CLog::this_+0x3b73
086586a0 +0x184:  mov    %ebx,0x4(%esp)
086586a4 +0x188:  mov    %eax,(%esp)
086586a7 +0x18b:  call   08468b4c <_ZN8WongWork18CDeathTowerRanking18unregistBestRecordEj>  ; WongWork::CDeathTowerRanking::unregistBestRecord(unsigned int)
086586ac +0x190:  mov    0x8(%ebp),%eax
086586af +0x193:  mov    %eax,(%esp)
086586b2 +0x196:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
086586b7 +0x19b:  mov    %eax,%ebx
086586b9 +0x19d:  mov    -0xc(%ebp),%eax
086586bc +0x1a0:  mov    %eax,(%esp)
086586bf +0x1a3:  call   082a774c <_GLOBAL__I__ZN4CLog5this_E+0x3b73>  ; global constructors keyed to CLog::this_+0x3b73
086586c4 +0x1a8:  mov    %ebx,0x4(%esp)
086586c8 +0x1ac:  mov    %eax,(%esp)
086586cb +0x1af:  call   08468552 <_ZN8WongWork18CDeathTowerRanking15unregistRankingEj>  ; WongWork::CDeathTowerRanking::unregistRanking(unsigned int)
086586d0 +0x1b4:  addl   $0x1,-0xc(%ebp)
086586d4 +0x1b8:  cmpl   $0x4,-0xc(%ebp)
086586d8 +0x1bc:  setle  %al
086586db +0x1bf:  test   %al,%al
086586dd +0x1c1:  jne    08658688 <+0x16c>
086586df +0x1c3:  mov    0x8(%ebp),%eax
086586e2 +0x1c6:  mov    %eax,(%esp)
086586e5 +0x1c9:  call   0869650c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2d61>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2d61
086586ea +0x1ce:  mov    0x8(%ebp),%eax
086586ed +0x1d1:  mov    %eax,(%esp)
086586f0 +0x1d4:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
086586f5 +0x1d9:  test   %eax,%eax
086586f7 +0x1db:  setne  %al
086586fa +0x1de:  test   %al,%al
086586fc +0x1e0:  je     08658721 <+0x205>
086586fe +0x1e2:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08658703 +0x1e7:  mov    %eax,%ebx
08658705 +0x1e9:  mov    0x8(%ebp),%eax
08658708 +0x1ec:  mov    %eax,(%esp)
0865870b +0x1ef:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08658710 +0x1f4:  lea    0x58(%eax),%edx
08658713 +0x1f7:  mov    0x4(%ebx,%edx,4),%edx
08658717 +0x1fb:  sub    $0x1,%edx
0865871a +0x1fe:  add    $0x58,%eax
0865871d +0x201:  mov    %edx,0x4(%ebx,%eax,4)
08658721 +0x205:  mov    0x8(%ebp),%eax
08658724 +0x208:  movl   $0x0,0x4(%esp)
0865872c +0x210:  mov    %eax,(%esp)
0865872f +0x213:  call   0864e25c <_ZN15CUserCharacInfo12setCurCharacEP12_Charac_info>  ; CUserCharacInfo::setCurCharac(_Charac_info*)
08658734 +0x218:  mov    0x8(%ebp),%eax
08658737 +0x21b:  movl   $0x0,0x4(%esp)
0865873f +0x223:  mov    %eax,(%esp)
08658742 +0x226:  call   0864e28e <_ZN15CUserCharacInfo12setTagCharacEP12_Charac_info>  ; CUserCharacInfo::setTagCharac(_Charac_info*)
08658747 +0x22b:  mov    0x8(%ebp),%eax
0865874a +0x22e:  movw   $0xffff,0x8d004(%eax)
08658753 +0x237:  mov    0x8(%ebp),%eax
08658756 +0x23a:  movw   $0xffff,0x8d002(%eax)
0865875f +0x243:  mov    0x8(%ebp),%eax
08658762 +0x246:  movw   $0xffff,0x8d006(%eax)
0865876b +0x24f:  mov    0x8(%ebp),%eax
0865876e +0x252:  movw   $0xffff,0x8d008(%eax)
08658777 +0x25b:  mov    0x8(%ebp),%eax
0865877a +0x25e:  movw   $0xffff,0x8d00c(%eax)
08658783 +0x267:  mov    0x8(%ebp),%eax
08658786 +0x26a:  movl   $0x0,0x8cfcc(%eax)
08658790 +0x274:  mov    0x8(%ebp),%eax
08658793 +0x277:  movb   $0x0,0x711d8(%eax)
0865879a +0x27e:  mov    0x8(%ebp),%eax
0865879d +0x281:  movb   $0x0,0x6ef68(%eax)
086587a4 +0x288:  mov    0x8(%ebp),%eax
086587a7 +0x28b:  movb   $0xff,0x6ef69(%eax)
086587ae +0x292:  mov    0x8(%ebp),%eax
086587b1 +0x295:  movb   $0x0,0x8d0df(%eax)
086587b8 +0x29c:  mov    0x8(%ebp),%eax
086587bb +0x29f:  movl   $0xffffffff,0x8cf04(%eax)
086587c5 +0x2a9:  mov    0x8(%ebp),%eax
086587c8 +0x2ac:  movb   $0x0,0x711e4(%eax)
086587cf +0x2b3:  mov    0x8(%ebp),%eax
086587d2 +0x2b6:  movl   $0x0,0x79648(%eax)
086587dc +0x2c0:  mov    0x8(%ebp),%eax
086587df +0x2c3:  movl   $0x0,0x79644(%eax)
086587e9 +0x2cd:  mov    0x8(%ebp),%eax
086587ec +0x2d0:  mov    0x71b98(%eax),%eax
086587f2 +0x2d6:  test   %eax,%eax
086587f4 +0x2d8:  je     08658807 <+0x2eb>
086587f6 +0x2da:  mov    0x8(%ebp),%eax
086587f9 +0x2dd:  mov    0x71b98(%eax),%eax
086587ff +0x2e3:  mov    %eax,(%esp)
08658802 +0x2e6:  call   08551d98 <_ZN8WongWork8CMailBox4InitEv>  ; WongWork::CMailBox::Init()
08658807 +0x2eb:  movl   $0x0,0x4(%esp)
0865880f +0x2f3:  mov    0x8(%ebp),%eax
08658812 +0x2f6:  mov    %eax,(%esp)
08658815 +0x2f9:  call   085dfa64 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x2eb>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x2eb
0865881a +0x2fe:  mov    0x8(%ebp),%eax
0865881d +0x301:  add    $0x8d020,%eax
08658822 +0x306:  movl   $0xbd,0x8(%esp)
0865882a +0x30e:  movl   $0x0,0x4(%esp)
08658832 +0x316:  mov    %eax,(%esp)
08658835 +0x319:  call   0807dcc0 <_init+0x5b8>
0865883a +0x31e:  mov    0x8(%ebp),%eax
0865883d +0x321:  add    $0x8d0dd,%eax
08658842 +0x326:  movl   $0x1,0x8(%esp)
0865884a +0x32e:  movl   $0x0,0x4(%esp)
08658852 +0x336:  mov    %eax,(%esp)
08658855 +0x339:  call   0807dcc0 <_init+0x5b8>
0865885a +0x33e:  mov    0x8(%ebp),%eax
0865885d +0x341:  mov    %eax,(%esp)
08658860 +0x344:  call   0822f48e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b38>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b38
08658865 +0x349:  mov    0x8(%ebp),%eax
08658868 +0x34c:  mov    %eax,(%esp)
0865886b +0x34f:  call   0822f4ac <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b56>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b56
08658870 +0x354:  mov    0x8(%ebp),%eax
08658873 +0x357:  mov    %eax,(%esp)
08658876 +0x35a:  call   0865cf6c <_ZN5CUser32reset_pvp_masterid_walkingout_meEv>  ; CUser::reset_pvp_masterid_walkingout_me()
0865887b +0x35f:  mov    0x8(%ebp),%eax
0865887e +0x362:  add    $0x8e3f0,%eax
08658883 +0x367:  mov    %eax,(%esp)
08658886 +0x36a:  call   08695058 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x18ad>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x18ad
0865888b +0x36f:  mov    0x8(%ebp),%eax
0865888e +0x372:  movl   $0x0,0x8d1dc(%eax)
08658898 +0x37c:  mov    0x8(%ebp),%eax
0865889b +0x37f:  movl   $0x0,0x8d1e0(%eax)
086588a5 +0x389:  mov    0x8(%ebp),%eax
086588a8 +0x38c:  movb   $0x0,0x8cef0(%eax)
086588af +0x393:  mov    0x8(%ebp),%eax
086588b2 +0x396:  movb   $0x0,0x8cef1(%eax)
086588b9 +0x39d:  mov    0x8(%ebp),%eax
086588bc +0x3a0:  add    $0x8d24d,%eax
086588c1 +0x3a5:  movl   $0x4,0x8(%esp)
086588c9 +0x3ad:  movl   $0x0,0x4(%esp)
086588d1 +0x3b5:  mov    %eax,(%esp)
086588d4 +0x3b8:  call   0807dcc0 <_init+0x5b8>
086588d9 +0x3bd:  movl   $0x0,0x4(%esp)
086588e1 +0x3c5:  mov    0x8(%ebp),%eax
086588e4 +0x3c8:  mov    %eax,(%esp)
086588e7 +0x3cb:  call   0868f6fa <_ZN5CUser16setForceDropFlagEb>  ; CUser::setForceDropFlag(bool)
086588ec +0x3d0:  mov    0x8(%ebp),%eax
086588ef +0x3d3:  movb   $0x1,0x6ef90(%eax)
086588f6 +0x3da:  mov    0x8(%ebp),%eax
086588f9 +0x3dd:  movb   $0x0,0x6ef91(%eax)
08658900 +0x3e4:  mov    0x8(%ebp),%eax
08658903 +0x3e7:  movb   $0x0,0x8ec29(%eax)
0865890a +0x3ee:  add    $0x24,%esp
0865890d +0x3f1:  pop    %ebx
0865890e +0x3f2:  pop    %ebp
0865890f +0x3f3:  ret
```

## 反编译 C

```c
// CUser::ResetCurCharac @ 0x865851c

/* CUser::ResetCurCharac() */

void __thiscall CUser::ResetCurCharac(CUser *this)

{
  char cVar1;
  PvpResultType *this_00;
  map<int,GameResultType,std::less<int>,std::allocator<std::pair<int_const,GameResultType>>>
  *this_01;
  CDungeonClear *this_02;
  int iVar2;
  CInventory *pCVar3;
  CAvatarItemMgr *this_03;
  SkillSlot *this_04;
  CCargo *this_05;
  UserQuest *this_06;
  CCreatureMgr *pCVar4;
  uint uVar5;
  int iVar6;
  uint local_10;
  
  this_00 = (PvpResultType *)CUserCharacInfo::getPVPResultRefW((CUserCharacInfo *)this);
  PvpResultType::Clear(this_00);
  this_01 = (map<int,GameResultType,std::less<int>,std::allocator<std::pair<int_const,GameResultType>>>
             *)CUserCharacInfo::getBattleRecordRefW((CUserCharacInfo *)this);
  std::map<int,GameResultType,std::less<int>,std::allocator<std::pair<int_const,GameResultType>>>::
  clear(this_01);
  std::list<int,std::allocator<int>>::clear((list<int,std::allocator<int>> *)(this + 0x8cf80));
  this_02 = (CDungeonClear *)CUserCharacInfo::getDungeonClearRefW((CUserCharacInfo *)this);
  WongWork::CDungeonClear::clear(this_02);
  this[0x796cc] = (CUser)0x0;
  *(undefined4 *)(this + 0x796d0) = 0;
  iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if (iVar2 != 0) {
    pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
    this_03 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrW(pCVar3);
    WongWork::CAvatarItemMgr::Reset(this_03);
    this_04 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
    SkillSlot::clear_all_skills_both(this_04);
    this_05 = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)this);
    CCargo::reset(this_05);
    this_06 = (UserQuest *)getCurCharacQuestR(this);
    UserQuest::reset(this_06);
    pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
    pCVar4 = (CCreatureMgr *)CInventory::GetCreatureMgrW(pCVar3);
    user_creature::CCreatureMgr::Reset(pCVar4);
    pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
    pCVar4 = (CCreatureMgr *)CInventory::GetCreatureMgrW(pCVar3);
    user_creature::CCreatureMgr::SetUser(pCVar4,this);
    cVar1 = CUserCharacInfo::isDisguiseCharac((CUserCharacInfo *)this);
    if (cVar1 != '\0') {
      CUserCharacInfo::setDisguiseCharac((CUserCharacInfo *)this,false,'\0',0);
    }
  }
  CUserCharacInfo::reset_guild_temp_exp((CUserCharacInfo *)this);
  CUserCharacInfo::reset_guild_exp((CUserCharacInfo *)this);
  CUserCharacInfo::reset_level_before_dungeon((CUserCharacInfo *)this);
  for (local_10 = 1; (int)local_10 < 5; local_10 = local_10 + 1) {
    CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
    uVar5 = WongWork::CDeathTowerRanking::getRankTable(local_10);
    WongWork::CDeathTowerRanking::unregistBestRecord(uVar5);
    CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
    uVar5 = WongWork::CDeathTowerRanking::getRankTable(local_10);
    WongWork::CDeathTowerRanking::unregistRanking(uVar5);
  }
  CUserCharacInfo::resetCurCharacSchoolPoint((CUserCharacInfo *)this);
  iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if (iVar2 != 0) {
    iVar2 = G_GameWorld();
    iVar6 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
    *(int *)(iVar2 + 4 + (iVar6 + 0x58) * 4) = *(int *)(iVar2 + 4 + (iVar6 + 0x58) * 4) + -1;
  }
  CUserCharacInfo::setCurCharac((CUserCharacInfo *)this,(_Charac_info *)0x0);
  CUserCharacInfo::setTagCharac((CUserCharacInfo *)this,(_Charac_info *)0x0);
  *(undefined2 *)(this + 0x8d004) = 0xffff;
  *(undefined2 *)(this + 0x8d002) = 0xffff;
  *(undefined2 *)(this + 0x8d006) = 0xffff;
  *(undefined2 *)(this + 0x8d008) = 0xffff;
  *(undefined2 *)(this + 0x8d00c) = 0xffff;
  *(undefined4 *)(this + 0x8cfcc) = 0;
  this[0x711d8] = (CUser)0x0;
  this[0x6ef68] = (CUser)0x0;
  this[0x6ef69] = (CUser)0xff;
  this[0x8d0df] = (CUser)0x0;
  *(undefined4 *)(this + 0x8cf04) = 0xffffffff;
  this[0x711e4] = (CUser)0x0;
  *(undefined4 *)(this + 0x79648) = 0;
  *(undefined4 *)(this + 0x79644) = 0;
  if (*(int *)(this + 0x71b98) != 0) {
    WongWork::CMailBox::Init(*(CMailBox **)(this + 0x71b98));
  }
  set_guildwar_point_per_pvpplay(this,0);
  memset(this + 0x8d020,0,0xbd);
  memset(this + 0x8d0dd,0,1);
  CUserCharacInfo::resetGuildCreateFlag((CUserCharacInfo *)this);
  CUserCharacInfo::resetTempGuildNameAddr((CUserCharacInfo *)this);
  reset_pvp_masterid_walkingout_me(this);
  WongWork::CMCAPManager::resetExposedCount((CMCAPManager *)(this + 0x8e3f0));
  *(undefined4 *)(this + 0x8d1dc) = 0;
  *(undefined4 *)(this + 0x8d1e0) = 0;
  this[0x8cef0] = (CUser)0x0;
  this[0x8cef1] = (CUser)0x0;
  memset(this + 0x8d24d,0,4);
  setForceDropFlag(this,false);
  this[0x6ef90] = (CUser)0x1;
  this[0x6ef91] = (CUser)0x0;
  this[0x8ec29] = (CUser)0x0;
  return;
}
```
