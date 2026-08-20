# set_grow_type

`_ZN5CUser13set_grow_typeEhhPc21eChangeGrowTypeReason`

`CUser::set_grow_type(unsigned char, unsigned char, char*, eChangeGrowTypeReason)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086787fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086787fc  _ZN5CUser13set_grow_typeEhhPc21eChangeGrowTypeReason
#           CUser::set_grow_type(unsigned char, unsigned char, char*, eChangeGrowTypeReason)
# range [0x086787fc, 0x08679259]
086787fc +0x000:  push   %ebp
086787fd +0x001:  mov    %esp,%ebp
086787ff +0x003:  push   %edi
08678800 +0x004:  push   %esi
08678801 +0x005:  push   %ebx
08678802 +0x006:  sub    $0x12c,%esp
08678808 +0x00c:  mov    0xc(%ebp),%edx
0867880b +0x00f:  mov    0x10(%ebp),%eax
0867880e +0x012:  mov    %dl,-0x10c(%ebp)
08678814 +0x018:  mov    %al,-0x110(%ebp)
0867881a +0x01e:  cmpb   $0x5,-0x10c(%ebp)
08678821 +0x025:  ja     0867882c <+0x30>
08678823 +0x027:  cmpb   $0x2,-0x110(%ebp)
0867882a +0x02e:  jbe    0867886c <+0x70>
0867882c +0x030:  mov    0x8(%ebp),%eax
0867882f +0x033:  mov    %eax,(%esp)
08678832 +0x036:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
08678837 +0x03b:  mov    %eax,0x14(%esp)
0867883b +0x03f:  movl   $"User %s - grow type < 1 || grow type >= GROW_TYPE_NUMBER",0x10(%esp)
08678843 +0x047:  movl   $0x713b,0xc(%esp)
0867884b +0x04f:  movl   $&_ZZN5CUser13set_grow_typeEhhPc21eChangeGrowTypeReasonE19__PRETTY_FUNCTION__,0x8(%esp)
08678853 +0x057:  movl   $"user.cpp",0x4(%esp)
0867885b +0x05f:  movl   $0x1,(%esp)
08678862 +0x066:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08678867 +0x06b:  jmp    0867924f <+0xa53>
0867886c +0x070:  cmpb   $0x0,-0x110(%ebp)
08678873 +0x077:  jne    086788b8 <+0xbc>
08678875 +0x079:  movl   $0x8,0x4(%esp)
0867887d +0x081:  mov    0x8(%ebp),%eax
08678880 +0x084:  mov    %eax,(%esp)
08678883 +0x087:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
08678888 +0x08c:  mov    %eax,-0x30(%ebp)
0867888b +0x08f:  movl   $0x1f,0x4(%esp)
08678893 +0x097:  mov    -0x30(%ebp),%eax
08678896 +0x09a:  mov    %eax,(%esp)
08678899 +0x09d:  call   085e4bec <_ZN19CMissionList_Charac14Remove_MissionEi>  ; CMissionList_Charac::Remove_Mission(int)
0867889e +0x0a2:  movl   $0x20,0x8(%esp)
086788a6 +0x0aa:  mov    0x8(%ebp),%eax
086788a9 +0x0ad:  mov    %eax,0x4(%esp)
086788ad +0x0b1:  mov    -0x30(%ebp),%eax
086788b0 +0x0b4:  mov    %eax,(%esp)
086788b3 +0x0b7:  call   085e4fba <_ZN19CMissionList_Charac24MakeMissionList_JustKindERK5CUserj>  ; CMissionList_Charac::MakeMissionList_JustKind(CUser const&, unsigned int)
086788b8 +0x0bc:  cmpl   $0x1,0x18(%ebp)
086788bc +0x0c0:  je     086788c7 <+0xcb>
086788be +0x0c2:  cmpb   $0x0,-0x110(%ebp)
086788c5 +0x0c9:  jne    0867890f <+0x113>
086788c7 +0x0cb:  movl   $0xb,0x4(%esp)
086788cf +0x0d3:  mov    0x8(%ebp),%eax
086788d2 +0x0d6:  mov    %eax,(%esp)
086788d5 +0x0d9:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
086788da +0x0de:  mov    %eax,-0x2c(%ebp)
086788dd +0x0e1:  cmpl   $0x0,-0x2c(%ebp)
086788e1 +0x0e5:  je     0867890f <+0x113>
086788e3 +0x0e7:  mov    0x8(%ebp),%eax
086788e6 +0x0ea:  mov    %eax,0x4(%esp)
086788ea +0x0ee:  mov    -0x2c(%ebp),%eax
086788ed +0x0f1:  mov    %eax,(%esp)
086788f0 +0x0f4:  call   085ef54c <_ZN10CQuestShop7clearQPEP5CUser>  ; CQuestShop::clearQP(CUser*)
086788f5 +0x0f9:  movl   $0x1,0x8(%esp)
086788fd +0x101:  mov    0x8(%ebp),%eax
08678900 +0x104:  mov    %eax,0x4(%esp)
08678904 +0x108:  mov    -0x2c(%ebp),%eax
08678907 +0x10b:  mov    %eax,(%esp)
0867890a +0x10e:  call   085ef6fc <_ZN10CQuestShop12sendCharacQpEP5CUserc>  ; CQuestShop::sendCharacQp(CUser*, char)
0867890f +0x113:  cmpb   $0x0,-0x110(%ebp)
08678916 +0x11a:  jne    08678978 <+0x17c>
08678918 +0x11c:  mov    0x8(%ebp),%eax
0867891b +0x11f:  mov    %eax,(%esp)
0867891e +0x122:  call   0815741c <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x7b>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x7b
08678923 +0x127:  movsbl %al,%edi
08678926 +0x12a:  movzbl -0x10c(%ebp),%esi
0867892d +0x131:  mov    0x8(%ebp),%eax
08678930 +0x134:  mov    %eax,(%esp)
08678933 +0x137:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
08678938 +0x13c:  movsbl %al,%ebx
0867893b +0x13f:  mov    0x8(%ebp),%eax
0867893e +0x142:  mov    %eax,(%esp)
08678941 +0x145:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08678946 +0x14a:  mov    0x8(%ebp),%edx
08678949 +0x14d:  lea    0x79700(%edx),%ecx
0867894f +0x153:  mov    0x18(%ebp),%edx
08678952 +0x156:  mov    %edx,0x18(%esp)
08678956 +0x15a:  movl   $0x1,0x14(%esp)
0867895e +0x162:  mov    %edi,0x10(%esp)
08678962 +0x166:  mov    %esi,0xc(%esp)
08678966 +0x16a:  mov    %ebx,0x8(%esp)
0867896a +0x16e:  mov    %eax,0x4(%esp)
0867896e +0x172:  mov    %ecx,(%esp)
08678971 +0x175:  call   0868460a <_ZN15cUserHistoryLog14ChangeGrowTypeEiiiii21eChangeGrowTypeReason>  ; cUserHistoryLog::ChangeGrowType(int, int, int, int, int, eChangeGrowTypeReason)
08678976 +0x17a:  jmp    086789d6 <+0x1da>
08678978 +0x17c:  mov    0x8(%ebp),%eax
0867897b +0x17f:  mov    %eax,(%esp)
0867897e +0x182:  call   0815741c <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x7b>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x7b
08678983 +0x187:  movsbl %al,%edi
08678986 +0x18a:  movzbl -0x110(%ebp),%esi
0867898d +0x191:  mov    0x8(%ebp),%eax
08678990 +0x194:  mov    %eax,(%esp)
08678993 +0x197:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
08678998 +0x19c:  movsbl %al,%ebx
0867899b +0x19f:  mov    0x8(%ebp),%eax
0867899e +0x1a2:  mov    %eax,(%esp)
086789a1 +0x1a5:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
086789a6 +0x1aa:  mov    0x8(%ebp),%edx
086789a9 +0x1ad:  lea    0x79700(%edx),%ecx
086789af +0x1b3:  mov    0x18(%ebp),%edx
086789b2 +0x1b6:  mov    %edx,0x18(%esp)
086789b6 +0x1ba:  movl   $0x2,0x14(%esp)
086789be +0x1c2:  mov    %edi,0x10(%esp)
086789c2 +0x1c6:  mov    %esi,0xc(%esp)
086789c6 +0x1ca:  mov    %ebx,0x8(%esp)
086789ca +0x1ce:  mov    %eax,0x4(%esp)
086789ce +0x1d2:  mov    %ecx,(%esp)
086789d1 +0x1d5:  call   0868460a <_ZN15cUserHistoryLog14ChangeGrowTypeEiiiii21eChangeGrowTypeReason>  ; cUserHistoryLog::ChangeGrowType(int, int, int, int, int, eChangeGrowTypeReason)
086789d6 +0x1da:  mov    0x14(%ebp),%eax
086789d9 +0x1dd:  mov    %eax,-0x44(%ebp)
086789dc +0x1e0:  movzbl -0x110(%ebp),%eax
086789e3 +0x1e7:  movsbl %al,%ecx
086789e6 +0x1ea:  movzbl -0x10c(%ebp),%eax
086789ed +0x1f1:  movsbl %al,%edx
086789f0 +0x1f4:  mov    0x8(%ebp),%eax
086789f3 +0x1f7:  mov    %ecx,0x8(%esp)
086789f7 +0x1fb:  mov    %edx,0x4(%esp)
086789fb +0x1ff:  mov    %eax,(%esp)
086789fe +0x202:  call   0864e2d8 <_ZN15CUserCharacInfo20setCurCharGrowthTypeEcc>  ; CUserCharacInfo::setCurCharGrowthType(char, char)
08678a03 +0x207:  mov    0x8(%ebp),%eax
08678a06 +0x20a:  add    $0x796f4,%eax
08678a0b +0x20f:  mov    %eax,(%esp)
08678a0e +0x212:  call   0822fbda <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5284>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5284
08678a13 +0x217:  cmpb   $0x0,-0x110(%ebp)
08678a1a +0x21e:  jne    08678afb <+0x2ff>
08678a20 +0x224:  mov    0x8(%ebp),%eax
08678a23 +0x227:  mov    %eax,(%esp)
08678a26 +0x22a:  call   08664766 <_ZN5CUser18adjust_charac_statEv>  ; CUser::adjust_charac_stat()
08678a2b +0x22f:  mov    0x8(%ebp),%eax
08678a2e +0x232:  mov    0x8cfc4(%eax),%eax
08678a34 +0x238:  cmp    $0x3,%eax
08678a37 +0x23b:  jne    08678afb <+0x2ff>
08678a3d +0x241:  lea    -0x64(%ebp),%eax
08678a40 +0x244:  mov    %eax,(%esp)
08678a43 +0x247:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08678a48 +0x24c:  lea    -0x64(%ebp),%eax
08678a4b +0x24f:  mov    %eax,(%esp)
08678a4e +0x252:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08678a53 +0x257:  movl   $0x2,0x8(%esp)
08678a5b +0x25f:  movl   $0x0,0x4(%esp)
08678a63 +0x267:  lea    -0x64(%ebp),%eax
08678a66 +0x26a:  mov    %eax,(%esp)
08678a69 +0x26d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08678a6e +0x272:  movl   $0x1,0x4(%esp)
08678a76 +0x27a:  lea    -0x64(%ebp),%eax
08678a79 +0x27d:  mov    %eax,(%esp)
08678a7c +0x280:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08678a81 +0x285:  movl   $0x1,0x4(%esp)
08678a89 +0x28d:  lea    -0x64(%ebp),%eax
08678a8c +0x290:  mov    %eax,(%esp)
08678a8f +0x293:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08678a94 +0x298:  lea    -0x64(%ebp),%eax
08678a97 +0x29b:  movl   $0x1,0x8(%esp)
08678a9f +0x2a3:  mov    %eax,0x4(%esp)
08678aa3 +0x2a7:  mov    0x8(%ebp),%eax
08678aa6 +0x2aa:  mov    %eax,(%esp)
08678aa9 +0x2ad:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
08678aae +0x2b2:  movl   $0x1,0x4(%esp)
08678ab6 +0x2ba:  lea    -0x64(%ebp),%eax
08678ab9 +0x2bd:  mov    %eax,(%esp)
08678abc +0x2c0:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08678ac1 +0x2c5:  lea    -0x64(%ebp),%eax
08678ac4 +0x2c8:  mov    %eax,0x4(%esp)
08678ac8 +0x2cc:  mov    0x8(%ebp),%eax
08678acb +0x2cf:  mov    %eax,(%esp)
08678ace +0x2d2:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08678ad3 +0x2d7:  jmp    08678af0 <+0x2f4>
08678ad5 +0x2d9:  mov    %edx,%ebx
08678ad7 +0x2db:  mov    %eax,%esi
08678ad9 +0x2dd:  lea    -0x64(%ebp),%eax
08678adc +0x2e0:  mov    %eax,(%esp)
08678adf +0x2e3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08678ae4 +0x2e8:  mov    %esi,%eax
08678ae6 +0x2ea:  mov    %ebx,%edx
08678ae8 +0x2ec:  mov    %eax,(%esp)
08678aeb +0x2ef:  call   08ae3750 <_Unwind_Resume>
08678af0 +0x2f4:  lea    -0x64(%ebp),%eax
08678af3 +0x2f7:  mov    %eax,(%esp)
08678af6 +0x2fa:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08678afb +0x2ff:  lea    -0x50(%ebp),%eax
08678afe +0x302:  mov    %eax,(%esp)
08678b01 +0x305:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
08678b06 +0x30a:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08678b0b +0x30f:  mov    %eax,(%esp)
08678b0e +0x312:  call   0823441e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9ac8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9ac8
08678b13 +0x317:  test   %al,%al
08678b15 +0x319:  je     08678b20 <+0x324>
08678b17 +0x31b:  movb   $0x1,-0x3d(%ebp)
08678b1b +0x31f:  jmp    08678d78 <+0x57c>
08678b20 +0x324:  cmpl   $0x2,0x18(%ebp)
08678b24 +0x328:  je     08678b30 <+0x334>
08678b26 +0x32a:  cmpl   $0x0,0x18(%ebp)
08678b2a +0x32e:  jne    08678cc5 <+0x4c9>
08678b30 +0x334:  cmpb   $0x0,-0x110(%ebp)
08678b37 +0x33b:  jne    08678c74 <+0x478>
08678b3d +0x341:  mov    0x8(%ebp),%eax
08678b40 +0x344:  mov    %eax,(%esp)
08678b43 +0x347:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
08678b48 +0x34c:  mov    %eax,(%esp)
08678b4b +0x34f:  call   08604e08 <_ZN9SkillSlot21clear_all_skills_bothEv>  ; SkillSlot::clear_all_skills_both()
08678b50 +0x354:  mov    0x8(%ebp),%eax
08678b53 +0x357:  mov    %eax,(%esp)
08678b56 +0x35a:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
08678b5b +0x35f:  mov    0x8(%ebp),%edx
08678b5e +0x362:  mov    %edx,0x4(%esp)
08678b62 +0x366:  mov    %eax,(%esp)
08678b65 +0x369:  call   0822ee2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x44d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x44d8
08678b6a +0x36e:  mov    0x8(%ebp),%eax
08678b6d +0x371:  mov    %eax,(%esp)
08678b70 +0x374:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08678b75 +0x379:  mov    %eax,%ebx
08678b77 +0x37b:  mov    0x8(%ebp),%eax
08678b7a +0x37e:  mov    %eax,(%esp)
08678b7d +0x381:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
08678b82 +0x386:  add    $0x46,%eax
08678b85 +0x389:  mov    %ebx,0x4(%esp)
08678b89 +0x38d:  mov    %eax,(%esp)
08678b8c +0x390:  call   08604fe2 <_Z25addSkillOnCreateCharacterP15_Mastered_skilli>  ; addSkillOnCreateCharacter(_Mastered_skill*, int)
08678b91 +0x395:  mov    0x8(%ebp),%eax
08678b94 +0x398:  mov    %eax,(%esp)
08678b97 +0x39b:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08678b9c +0x3a0:  mov    %eax,%ebx
08678b9e +0x3a2:  mov    0x8(%ebp),%eax
08678ba1 +0x3a5:  mov    %eax,(%esp)
08678ba4 +0x3a8:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
08678ba9 +0x3ad:  add    $0x1de,%eax
08678bae +0x3b2:  mov    %ebx,0x4(%esp)
08678bb2 +0x3b6:  mov    %eax,(%esp)
08678bb5 +0x3b9:  call   08604fe2 <_Z25addSkillOnCreateCharacterP15_Mastered_skilli>  ; addSkillOnCreateCharacter(_Mastered_skill*, int)
08678bba +0x3be:  lea    -0xfc(%ebp),%eax
08678bc0 +0x3c4:  mov    %eax,(%esp)
08678bc3 +0x3c7:  call   08234fbe <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa668>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa668
08678bc8 +0x3cc:  movl   $0x0,0xc(%esp)
08678bd0 +0x3d4:  movl   $0x0,0x8(%esp)
08678bd8 +0x3dc:  mov    0x8(%ebp),%eax
08678bdb +0x3df:  mov    %eax,0x4(%esp)
08678bdf +0x3e3:  lea    -0xfc(%ebp),%eax
08678be5 +0x3e9:  mov    %eax,(%esp)
08678be8 +0x3ec:  call   08609e90 <_ZN8WongWork13CSkillChanger15SkillInitializeEP5CUserib>  ; WongWork::CSkillChanger::SkillInitialize(CUser*, int, bool)
08678bed +0x3f1:  mov    0x8(%ebp),%eax
08678bf0 +0x3f4:  mov    %eax,(%esp)
08678bf3 +0x3f7:  call   0866c46a <_ZN5CUser15send_skill_infoEv>  ; CUser::send_skill_info()
08678bf8 +0x3fc:  jmp    08678c15 <+0x419>
08678bfa +0x3fe:  mov    %edx,%ebx
08678bfc +0x400:  mov    %eax,%esi
08678bfe +0x402:  lea    -0xfc(%ebp),%eax
08678c04 +0x408:  mov    %eax,(%esp)
08678c07 +0x40b:  call   08234fc4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa66e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa66e
08678c0c +0x410:  mov    %esi,%eax
08678c0e +0x412:  mov    %ebx,%edx
08678c10 +0x414:  jmp    08679229 <+0xa2d>
08678c15 +0x419:  lea    -0xfc(%ebp),%eax
08678c1b +0x41f:  mov    %eax,(%esp)
08678c1e +0x422:  call   08234fc4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa66e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa66e
08678c23 +0x427:  movzbl -0x110(%ebp),%esi
08678c2a +0x42e:  movzbl -0x10c(%ebp),%ebx
08678c31 +0x435:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08678c36 +0x43a:  mov    0x14(%eax),%edi
08678c39 +0x43d:  mov    0x8(%ebp),%eax
08678c3c +0x440:  mov    %eax,(%esp)
08678c3f +0x443:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08678c44 +0x448:  imul   $0x7dc,%eax,%eax
08678c4a +0x44e:  lea    (%edi,%eax,1),%edx
08678c4d +0x451:  movl   $0x1,0x10(%esp)
08678c55 +0x459:  lea    -0x50(%ebp),%eax
08678c58 +0x45c:  mov    %eax,0xc(%esp)
08678c5c +0x460:  mov    %esi,0x8(%esp)
08678c60 +0x464:  mov    %ebx,0x4(%esp)
08678c64 +0x468:  mov    %edx,(%esp)
08678c67 +0x46b:  call   08348798 <_ZNK10CCharacter14get_give_skillEiiRSt6vectorISt4pairIiiESaIS2_EEj>  ; CCharacter::get_give_skill(int, int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, unsigned int) const
08678c6c +0x470:  mov    %al,-0x3d(%ebp)
08678c6f +0x473:  jmp    08678d78 <+0x57c>
08678c74 +0x478:  movzbl -0x110(%ebp),%esi
08678c7b +0x47f:  movzbl -0x10c(%ebp),%ebx
08678c82 +0x486:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08678c87 +0x48b:  mov    0x14(%eax),%edi
08678c8a +0x48e:  mov    0x8(%ebp),%eax
08678c8d +0x491:  mov    %eax,(%esp)
08678c90 +0x494:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08678c95 +0x499:  imul   $0x7dc,%eax,%eax
08678c9b +0x49f:  lea    (%edi,%eax,1),%edx
08678c9e +0x4a2:  movl   $0x2,0x10(%esp)
08678ca6 +0x4aa:  lea    -0x50(%ebp),%eax
08678ca9 +0x4ad:  mov    %eax,0xc(%esp)
08678cad +0x4b1:  mov    %esi,0x8(%esp)
08678cb1 +0x4b5:  mov    %ebx,0x4(%esp)
08678cb5 +0x4b9:  mov    %edx,(%esp)
08678cb8 +0x4bc:  call   08348798 <_ZNK10CCharacter14get_give_skillEiiRSt6vectorISt4pairIiiESaIS2_EEj>  ; CCharacter::get_give_skill(int, int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, unsigned int) const
08678cbd +0x4c1:  mov    %al,-0x3d(%ebp)
08678cc0 +0x4c4:  jmp    08678d78 <+0x57c>
08678cc5 +0x4c9:  cmpl   $0x1,0x18(%ebp)
08678cc9 +0x4cd:  jne    08678d74 <+0x578>
08678ccf +0x4d3:  cmpb   $0x0,-0x110(%ebp)
08678cd6 +0x4da:  jne    08678d26 <+0x52a>
08678cd8 +0x4dc:  movzbl -0x110(%ebp),%esi
08678cdf +0x4e3:  movzbl -0x10c(%ebp),%ebx
08678ce6 +0x4ea:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08678ceb +0x4ef:  mov    0x14(%eax),%edi
08678cee +0x4f2:  mov    0x8(%ebp),%eax
08678cf1 +0x4f5:  mov    %eax,(%esp)
08678cf4 +0x4f8:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08678cf9 +0x4fd:  imul   $0x7dc,%eax,%eax
08678cff +0x503:  lea    (%edi,%eax,1),%edx
08678d02 +0x506:  movl   $0x1,0x10(%esp)
08678d0a +0x50e:  lea    -0x50(%ebp),%eax
08678d0d +0x511:  mov    %eax,0xc(%esp)
08678d11 +0x515:  mov    %esi,0x8(%esp)
08678d15 +0x519:  mov    %ebx,0x4(%esp)
08678d19 +0x51d:  mov    %edx,(%esp)
08678d1c +0x520:  call   08348798 <_ZNK10CCharacter14get_give_skillEiiRSt6vectorISt4pairIiiESaIS2_EEj>  ; CCharacter::get_give_skill(int, int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, unsigned int) const
08678d21 +0x525:  mov    %al,-0x3d(%ebp)
08678d24 +0x528:  jmp    08678d78 <+0x57c>
08678d26 +0x52a:  movzbl -0x110(%ebp),%esi
08678d2d +0x531:  movzbl -0x10c(%ebp),%ebx
08678d34 +0x538:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08678d39 +0x53d:  mov    0x14(%eax),%edi
08678d3c +0x540:  mov    0x8(%ebp),%eax
08678d3f +0x543:  mov    %eax,(%esp)
08678d42 +0x546:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08678d47 +0x54b:  imul   $0x7dc,%eax,%eax
08678d4d +0x551:  lea    (%edi,%eax,1),%edx
08678d50 +0x554:  movl   $0x0,0x10(%esp)
08678d58 +0x55c:  lea    -0x50(%ebp),%eax
08678d5b +0x55f:  mov    %eax,0xc(%esp)
08678d5f +0x563:  mov    %esi,0x8(%esp)
08678d63 +0x567:  mov    %ebx,0x4(%esp)
08678d67 +0x56b:  mov    %edx,(%esp)
08678d6a +0x56e:  call   08348798 <_ZNK10CCharacter14get_give_skillEiiRSt6vectorISt4pairIiiESaIS2_EEj>  ; CCharacter::get_give_skill(int, int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, unsigned int) const
08678d6f +0x573:  mov    %al,-0x3d(%ebp)
08678d72 +0x576:  jmp    08678d78 <+0x57c>
08678d74 +0x578:  movb   $0x0,-0x3d(%ebp)
08678d78 +0x57c:  movzbl -0x3d(%ebp),%eax
08678d7c +0x580:  xor    $0x1,%eax
08678d7f +0x583:  test   %al,%al
08678d81 +0x585:  je     08678dd9 <+0x5dd>
08678d83 +0x587:  movzbl -0x110(%ebp),%esi
08678d8a +0x58e:  movzbl -0x10c(%ebp),%ebx
08678d91 +0x595:  mov    0x8(%ebp),%eax
08678d94 +0x598:  mov    %eax,(%esp)
08678d97 +0x59b:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
08678d9c +0x5a0:  mov    %esi,0x1c(%esp)
08678da0 +0x5a4:  mov    %ebx,0x18(%esp)
08678da4 +0x5a8:  mov    %eax,0x14(%esp)
08678da8 +0x5ac:  movl   $"User %s - CUser::set_grow_type first_grow_type %d, second_grow_type %d",0x10(%esp)
08678db0 +0x5b4:  movl   $0x720c,0xc(%esp)
08678db8 +0x5bc:  movl   $&_ZZN5CUser13set_grow_typeEhhPc21eChangeGrowTypeReasonE19__PRETTY_FUNCTION__,0x8(%esp)
08678dc0 +0x5c4:  movl   $"user.cpp",0x4(%esp)
08678dc8 +0x5cc:  movl   $0x1,(%esp)
08678dcf +0x5d3:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08678dd4 +0x5d8:  jmp    08679244 <+0xa48>
08678dd9 +0x5dd:  lea    -0x58(%ebp),%eax
08678ddc +0x5e0:  mov    %eax,(%esp)
08678ddf +0x5e3:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
08678de4 +0x5e8:  cmpl   $0x0,-0x44(%ebp)
08678de8 +0x5ec:  je     08679013 <+0x817>
08678dee +0x5f2:  mov    -0x44(%ebp),%eax
08678df1 +0x5f5:  mov    %eax,(%esp)
08678df4 +0x5f8:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
08678df9 +0x5fd:  mov    %eax,-0x68(%ebp)
08678dfc +0x600:  movl   $0x0,-0x28(%ebp)
08678e03 +0x607:  mov    -0x44(%ebp),%eax
08678e06 +0x60a:  movl   $0x0,0x4(%esp)
08678e0e +0x612:  mov    %eax,(%esp)
08678e11 +0x615:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08678e16 +0x61a:  movl   $0x0,-0x24(%ebp)
08678e1d +0x621:  jmp    08678ecc <+0x6d0>
08678e22 +0x626:  mov    -0x24(%ebp),%eax
08678e25 +0x629:  mov    %eax,0x4(%esp)
08678e29 +0x62d:  lea    -0x50(%ebp),%eax
08678e2c +0x630:  mov    %eax,(%esp)
08678e2f +0x633:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
08678e34 +0x638:  mov    0x4(%eax),%edx
08678e37 +0x63b:  mov    (%eax),%eax
08678e39 +0x63d:  mov    %eax,-0x58(%ebp)
08678e3c +0x640:  mov    %edx,-0x54(%ebp)
08678e3f +0x643:  mov    -0x58(%ebp),%eax
08678e42 +0x646:  mov    %eax,-0x3c(%ebp)
08678e45 +0x649:  mov    -0x54(%ebp),%eax
08678e48 +0x64c:  mov    %eax,-0x38(%ebp)
08678e4b +0x64f:  mov    0x8(%ebp),%eax
08678e4e +0x652:  mov    %eax,(%esp)
08678e51 +0x655:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08678e56 +0x65a:  mov    %eax,%ebx
08678e58 +0x65c:  mov    0x8(%ebp),%eax
08678e5b +0x65f:  mov    %eax,(%esp)
08678e5e +0x662:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
08678e63 +0x667:  movl   $0x0,0x10(%esp)
08678e6b +0x66f:  mov    -0x38(%ebp),%edx
08678e6e +0x672:  mov    %edx,0xc(%esp)
08678e72 +0x676:  mov    -0x3c(%ebp),%edx
08678e75 +0x679:  mov    %edx,0x8(%esp)
08678e79 +0x67d:  mov    %ebx,0x4(%esp)
08678e7d +0x681:  mov    %eax,(%esp)
08678e80 +0x684:  call   086040bc <_ZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KIND>  ; SkillSlot::growtype_skill(int, int, int, ENUM_SKILL_TREE_KIND)
08678e85 +0x689:  mov    %eax,-0x34(%ebp)
08678e88 +0x68c:  cmpl   $0x0,-0x34(%ebp)
08678e8c +0x690:  jle    08678ec8 <+0x6cc>
08678e8e +0x692:  mov    -0x44(%ebp),%eax
08678e91 +0x695:  mov    -0x34(%ebp),%edx
08678e94 +0x698:  mov    %edx,0x4(%esp)
08678e98 +0x69c:  mov    %eax,(%esp)
08678e9b +0x69f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08678ea0 +0x6a4:  mov    -0x44(%ebp),%eax
08678ea3 +0x6a7:  mov    -0x3c(%ebp),%edx
08678ea6 +0x6aa:  mov    %edx,0x4(%esp)
08678eaa +0x6ae:  mov    %eax,(%esp)
08678ead +0x6b1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08678eb2 +0x6b6:  mov    -0x44(%ebp),%eax
08678eb5 +0x6b9:  mov    -0x38(%ebp),%edx
08678eb8 +0x6bc:  mov    %edx,0x4(%esp)
08678ebc +0x6c0:  mov    %eax,(%esp)
08678ebf +0x6c3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08678ec4 +0x6c8:  addl   $0x1,-0x28(%ebp)
08678ec8 +0x6cc:  addl   $0x1,-0x24(%ebp)
08678ecc +0x6d0:  lea    -0x50(%ebp),%eax
08678ecf +0x6d3:  mov    %eax,(%esp)
08678ed2 +0x6d6:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
08678ed7 +0x6db:  cmp    -0x24(%ebp),%eax
08678eda +0x6de:  setg   %al
08678edd +0x6e1:  test   %al,%al
08678edf +0x6e3:  jne    08678e22 <+0x626>
08678ee5 +0x6e9:  mov    -0x44(%ebp),%eax
08678ee8 +0x6ec:  mov    -0x28(%ebp),%edx
08678eeb +0x6ef:  mov    %edx,0x8(%esp)
08678eef +0x6f3:  lea    -0x68(%ebp),%edx
08678ef2 +0x6f6:  mov    %edx,0x4(%esp)
08678ef6 +0x6fa:  mov    %eax,(%esp)
08678ef9 +0x6fd:  call   08110b28 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x3a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x3a
08678efe +0x702:  mov    -0x44(%ebp),%eax
08678f01 +0x705:  mov    %eax,(%esp)
08678f04 +0x708:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
08678f09 +0x70d:  mov    %eax,-0x68(%ebp)
08678f0c +0x710:  movl   $0x0,-0x28(%ebp)
08678f13 +0x717:  mov    -0x44(%ebp),%eax
08678f16 +0x71a:  movl   $0x0,0x4(%esp)
08678f1e +0x722:  mov    %eax,(%esp)
08678f21 +0x725:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08678f26 +0x72a:  movl   $0x0,-0x20(%ebp)
08678f2d +0x731:  jmp    08678fdc <+0x7e0>
08678f32 +0x736:  mov    -0x20(%ebp),%eax
08678f35 +0x739:  mov    %eax,0x4(%esp)
08678f39 +0x73d:  lea    -0x50(%ebp),%eax
08678f3c +0x740:  mov    %eax,(%esp)
08678f3f +0x743:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
08678f44 +0x748:  mov    0x4(%eax),%edx
08678f47 +0x74b:  mov    (%eax),%eax
08678f49 +0x74d:  mov    %eax,-0x58(%ebp)
08678f4c +0x750:  mov    %edx,-0x54(%ebp)
08678f4f +0x753:  mov    -0x58(%ebp),%eax
08678f52 +0x756:  mov    %eax,-0x3c(%ebp)
08678f55 +0x759:  mov    -0x54(%ebp),%eax
08678f58 +0x75c:  mov    %eax,-0x38(%ebp)
08678f5b +0x75f:  mov    0x8(%ebp),%eax
08678f5e +0x762:  mov    %eax,(%esp)
08678f61 +0x765:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08678f66 +0x76a:  mov    %eax,%ebx
08678f68 +0x76c:  mov    0x8(%ebp),%eax
08678f6b +0x76f:  mov    %eax,(%esp)
08678f6e +0x772:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
08678f73 +0x777:  movl   $0x1,0x10(%esp)
08678f7b +0x77f:  mov    -0x38(%ebp),%edx
08678f7e +0x782:  mov    %edx,0xc(%esp)
08678f82 +0x786:  mov    -0x3c(%ebp),%edx
08678f85 +0x789:  mov    %edx,0x8(%esp)
08678f89 +0x78d:  mov    %ebx,0x4(%esp)
08678f8d +0x791:  mov    %eax,(%esp)
08678f90 +0x794:  call   086040bc <_ZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KIND>  ; SkillSlot::growtype_skill(int, int, int, ENUM_SKILL_TREE_KIND)
08678f95 +0x799:  mov    %eax,-0x34(%ebp)
08678f98 +0x79c:  cmpl   $0x0,-0x34(%ebp)
08678f9c +0x7a0:  jle    08678fd8 <+0x7dc>
08678f9e +0x7a2:  mov    -0x44(%ebp),%eax
08678fa1 +0x7a5:  mov    -0x34(%ebp),%edx
08678fa4 +0x7a8:  mov    %edx,0x4(%esp)
08678fa8 +0x7ac:  mov    %eax,(%esp)
08678fab +0x7af:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08678fb0 +0x7b4:  mov    -0x44(%ebp),%eax
08678fb3 +0x7b7:  mov    -0x3c(%ebp),%edx
08678fb6 +0x7ba:  mov    %edx,0x4(%esp)
08678fba +0x7be:  mov    %eax,(%esp)
08678fbd +0x7c1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08678fc2 +0x7c6:  mov    -0x44(%ebp),%eax
08678fc5 +0x7c9:  mov    -0x38(%ebp),%edx
08678fc8 +0x7cc:  mov    %edx,0x4(%esp)
08678fcc +0x7d0:  mov    %eax,(%esp)
08678fcf +0x7d3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08678fd4 +0x7d8:  addl   $0x1,-0x28(%ebp)
08678fd8 +0x7dc:  addl   $0x1,-0x20(%ebp)
08678fdc +0x7e0:  lea    -0x50(%ebp),%eax
08678fdf +0x7e3:  mov    %eax,(%esp)
08678fe2 +0x7e6:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
08678fe7 +0x7eb:  cmp    -0x20(%ebp),%eax
08678fea +0x7ee:  setg   %al
08678fed +0x7f1:  test   %al,%al
08678fef +0x7f3:  jne    08678f32 <+0x736>
08678ff5 +0x7f9:  mov    -0x44(%ebp),%eax
08678ff8 +0x7fc:  mov    -0x28(%ebp),%edx
08678ffb +0x7ff:  mov    %edx,0x8(%esp)
08678fff +0x803:  lea    -0x68(%ebp),%edx
08679002 +0x806:  mov    %edx,0x4(%esp)
08679006 +0x80a:  mov    %eax,(%esp)
08679009 +0x80d:  call   08110b28 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x3a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x3a
0867900e +0x812:  jmp    086790f6 <+0x8fa>
08679013 +0x817:  movl   $0x0,-0x1c(%ebp)
0867901a +0x81e:  jmp    086790dd <+0x8e1>
0867901f +0x823:  mov    -0x1c(%ebp),%eax
08679022 +0x826:  mov    %eax,0x4(%esp)
08679026 +0x82a:  lea    -0x50(%ebp),%eax
08679029 +0x82d:  mov    %eax,(%esp)
0867902c +0x830:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
08679031 +0x835:  mov    0x4(%eax),%edi
08679034 +0x838:  mov    -0x1c(%ebp),%eax
08679037 +0x83b:  mov    %eax,0x4(%esp)
0867903b +0x83f:  lea    -0x50(%ebp),%eax
0867903e +0x842:  mov    %eax,(%esp)
08679041 +0x845:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
08679046 +0x84a:  mov    (%eax),%esi
08679048 +0x84c:  mov    0x8(%ebp),%eax
0867904b +0x84f:  mov    %eax,(%esp)
0867904e +0x852:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08679053 +0x857:  mov    %eax,%ebx
08679055 +0x859:  mov    0x8(%ebp),%eax
08679058 +0x85c:  mov    %eax,(%esp)
0867905b +0x85f:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
08679060 +0x864:  movl   $0x0,0x10(%esp)
08679068 +0x86c:  mov    %edi,0xc(%esp)
0867906c +0x870:  mov    %esi,0x8(%esp)
08679070 +0x874:  mov    %ebx,0x4(%esp)
08679074 +0x878:  mov    %eax,(%esp)
08679077 +0x87b:  call   086040bc <_ZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KIND>  ; SkillSlot::growtype_skill(int, int, int, ENUM_SKILL_TREE_KIND)
0867907c +0x880:  mov    -0x1c(%ebp),%eax
0867907f +0x883:  mov    %eax,0x4(%esp)
08679083 +0x887:  lea    -0x50(%ebp),%eax
08679086 +0x88a:  mov    %eax,(%esp)
08679089 +0x88d:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
0867908e +0x892:  mov    0x4(%eax),%edi
08679091 +0x895:  mov    -0x1c(%ebp),%eax
08679094 +0x898:  mov    %eax,0x4(%esp)
08679098 +0x89c:  lea    -0x50(%ebp),%eax
0867909b +0x89f:  mov    %eax,(%esp)
0867909e +0x8a2:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
086790a3 +0x8a7:  mov    (%eax),%esi
086790a5 +0x8a9:  mov    0x8(%ebp),%eax
086790a8 +0x8ac:  mov    %eax,(%esp)
086790ab +0x8af:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
086790b0 +0x8b4:  mov    %eax,%ebx
086790b2 +0x8b6:  mov    0x8(%ebp),%eax
086790b5 +0x8b9:  mov    %eax,(%esp)
086790b8 +0x8bc:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
086790bd +0x8c1:  movl   $0x1,0x10(%esp)
086790c5 +0x8c9:  mov    %edi,0xc(%esp)
086790c9 +0x8cd:  mov    %esi,0x8(%esp)
086790cd +0x8d1:  mov    %ebx,0x4(%esp)
086790d1 +0x8d5:  mov    %eax,(%esp)
086790d4 +0x8d8:  call   086040bc <_ZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KIND>  ; SkillSlot::growtype_skill(int, int, int, ENUM_SKILL_TREE_KIND)
086790d9 +0x8dd:  addl   $0x1,-0x1c(%ebp)
086790dd +0x8e1:  lea    -0x50(%ebp),%eax
086790e0 +0x8e4:  mov    %eax,(%esp)
086790e3 +0x8e7:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
086790e8 +0x8ec:  cmp    -0x1c(%ebp),%eax
086790eb +0x8ef:  setg   %al
086790ee +0x8f2:  test   %al,%al
086790f0 +0x8f4:  jne    0867901f <+0x823>
086790f6 +0x8fa:  mov    0x8(%ebp),%eax
086790f9 +0x8fd:  mov    %eax,(%esp)
086790fc +0x900:  call   0867cd20 <_ZN5CUser21_UpdateUserInfo4GuildEv>  ; CUser::_UpdateUserInfo4Guild()
08679101 +0x905:  mov    0x8(%ebp),%eax
08679104 +0x908:  mov    %eax,(%esp)
08679107 +0x90b:  call   0815741c <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x7b>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x7b
0867910c +0x910:  movsbl %al,%eax
0867910f +0x913:  mov    %eax,-0x118(%ebp)
08679115 +0x919:  mov    0x8(%ebp),%eax
08679118 +0x91c:  mov    %eax,(%esp)
0867911b +0x91f:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08679120 +0x924:  movswl %ax,%edi
08679123 +0x927:  movl   $0xffffffff,0x4(%esp)
0867912b +0x92f:  mov    0x8(%ebp),%eax
0867912e +0x932:  mov    %eax,(%esp)
08679131 +0x935:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08679136 +0x93a:  mov    %eax,%esi
08679138 +0x93c:  mov    0x8(%ebp),%eax
0867913b +0x93f:  mov    %eax,(%esp)
0867913e +0x942:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08679143 +0x947:  mov    %eax,%ebx
08679145 +0x949:  mov    0x8(%ebp),%eax
08679148 +0x94c:  mov    %eax,(%esp)
0867914b +0x94f:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08679150 +0x954:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
08679156 +0x95a:  mov    %eax,0x4(%esp)
0867915a +0x95e:  mov    %edx,(%esp)
0867915d +0x961:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
08679162 +0x966:  mov    -0x118(%ebp),%edx
08679168 +0x96c:  mov    %edx,0x10(%esp)
0867916c +0x970:  mov    %edi,0xc(%esp)
08679170 +0x974:  mov    %esi,0x8(%esp)
08679174 +0x978:  mov    %ebx,0x4(%esp)
08679178 +0x97c:  mov    %eax,(%esp)
0867917b +0x97f:  call   0846da9a <_ZN17CGuildServerProxy21SendCharLevelGrowTypeEjjss>  ; CGuildServerProxy::SendCharLevelGrowType(unsigned int, unsigned int, short, short)
08679180 +0x984:  mov    0x8(%ebp),%eax
08679183 +0x987:  mov    %eax,(%esp)
08679186 +0x98a:  call   0815741c <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x7b>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x7b
0867918b +0x98f:  movsbl %al,%eax
0867918e +0x992:  mov    %eax,-0x114(%ebp)
08679194 +0x998:  mov    0x8(%ebp),%eax
08679197 +0x99b:  mov    %eax,(%esp)
0867919a +0x99e:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0867919f +0x9a3:  movswl %ax,%edi
086791a2 +0x9a6:  movl   $0xffffffff,0x4(%esp)
086791aa +0x9ae:  mov    0x8(%ebp),%eax
086791ad +0x9b1:  mov    %eax,(%esp)
086791b0 +0x9b4:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
086791b5 +0x9b9:  mov    %eax,%esi
086791b7 +0x9bb:  mov    0x8(%ebp),%eax
086791ba +0x9be:  mov    %eax,(%esp)
086791bd +0x9c1:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
086791c2 +0x9c6:  mov    %eax,%ebx
086791c4 +0x9c8:  mov    0x8(%ebp),%eax
086791c7 +0x9cb:  mov    %eax,(%esp)
086791ca +0x9ce:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
086791cf +0x9d3:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
086791d5 +0x9d9:  mov    %eax,0x4(%esp)
086791d9 +0x9dd:  mov    %edx,(%esp)
086791dc +0x9e0:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
086791e1 +0x9e5:  mov    -0x114(%ebp),%edx
086791e7 +0x9eb:  mov    %edx,0x10(%esp)
086791eb +0x9ef:  mov    %edi,0xc(%esp)
086791ef +0x9f3:  mov    %esi,0x8(%esp)
086791f3 +0x9f7:  mov    %ebx,0x4(%esp)
086791f7 +0x9fb:  mov    %eax,(%esp)
086791fa +0x9fe:  call   08470c04 <_ZN19CMonitorServerProxy21SendCharLevelGrowTypeEjjss>  ; CMonitorServerProxy::SendCharLevelGrowType(unsigned int, unsigned int, short, short)
086791ff +0xa03:  movzbl -0x110(%ebp),%edx
08679206 +0xa0a:  movzbl -0x10c(%ebp),%eax
0867920d +0xa11:  mov    0x18(%ebp),%ecx
08679210 +0xa14:  mov    %ecx,0xc(%esp)
08679214 +0xa18:  mov    %edx,0x8(%esp)
08679218 +0xa1c:  mov    %eax,0x4(%esp)
0867921c +0xa20:  mov    0x8(%ebp),%eax
0867921f +0xa23:  mov    %eax,(%esp)
08679222 +0xa26:  call   0867925a <_ZN5CUser20processGrowTypeEventEhh21eChangeGrowTypeReason>  ; CUser::processGrowTypeEvent(unsigned char, unsigned char, eChangeGrowTypeReason)
08679227 +0xa2b:  jmp    08679244 <+0xa48>
08679229 +0xa2d:  mov    %edx,%ebx
0867922b +0xa2f:  mov    %eax,%esi
0867922d +0xa31:  lea    -0x50(%ebp),%eax
08679230 +0xa34:  mov    %eax,(%esp)
08679233 +0xa37:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08679238 +0xa3c:  mov    %esi,%eax
0867923a +0xa3e:  mov    %ebx,%edx
0867923c +0xa40:  mov    %eax,(%esp)
0867923f +0xa43:  call   08ae3750 <_Unwind_Resume>
08679244 +0xa48:  lea    -0x50(%ebp),%eax
08679247 +0xa4b:  mov    %eax,(%esp)
0867924a +0xa4e:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0867924f +0xa53:  add    $0x12c,%esp
08679255 +0xa59:  pop    %ebx
08679256 +0xa5a:  pop    %esi
08679257 +0xa5b:  pop    %edi
08679258 +0xa5c:  pop    %ebp
08679259 +0xa5d:  ret
```

## 反编译 C

```c
// CUser::set_grow_type @ 0x86787fc

/* CUser::set_grow_type(unsigned char, unsigned char, char*, eChangeGrowTypeReason) */

void __thiscall
CUser::set_grow_type(CUser *this,byte param_1,byte param_2,InterfacePacketBuf *param_3,int param_5)

{
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  short sVar4;
  undefined4 uVar5;
  GameWorld *this_00;
  int iVar6;
  int iVar7;
  int *piVar8;
  SkillSlot *pSVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  CGuildServerProxy *this_01;
  CMonitorServerProxy *this_02;
  CSkillChanger local_100 [148];
  int local_6c;
  PacketGuard local_68 [12];
  int local_5c;
  int local_58;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_54 [12];
  InterfacePacketBuf *local_48;
  char local_41;
  int local_40;
  int local_3c;
  int local_38;
  CMissionList_Charac *local_34;
  CQuestShop *local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  
  if ((param_1 < 6) && (param_2 < 3)) {
    if (param_2 == 0) {
      local_34 = (CMissionList_Charac *)GetCharacExpandData(this,8);
      CMissionList_Charac::Remove_Mission(local_34,0x1f);
      CMissionList_Charac::MakeMissionList_JustKind(local_34,this,0x20);
    }
    if ((param_5 == 1) || (param_2 == 0)) {
      local_30 = (CQuestShop *)GetCharacExpandData(this,0xb);
      if (local_30 != (CQuestShop *)0x0) {
        CQuestShop::clearQP(local_30,this);
        CQuestShop::sendCharacQp(local_30,this,'\x01');
      }
    }
    if (param_2 == 0) {
      cVar2 = CUserCharacInfo::getCurCharacGrowType((CUserCharacInfo *)this);
      cVar3 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)this);
      uVar5 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
      cUserHistoryLog::ChangeGrowType
                ((cUserHistoryLog *)(this + 0x79700),uVar5,(int)cVar3,param_1,(int)cVar2,1,param_5);
    }
    else {
      cVar2 = CUserCharacInfo::getCurCharacGrowType((CUserCharacInfo *)this);
      cVar3 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)this);
      uVar5 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
      cUserHistoryLog::ChangeGrowType
                ((cUserHistoryLog *)(this + 0x79700),uVar5,(int)cVar3,param_2,(int)cVar2,2,param_5);
    }
    local_48 = param_3;
    CUserCharacInfo::setCurCharGrowthType((CUserCharacInfo *)this,param_1,param_2);
    CCharacterView::enableSaveCharacView((CCharacterView *)(this + 0x796f4));
    if (param_2 == 0) {
      adjust_charac_stat(this);
      if (*(int *)(this + 0x8cfc4) == 3) {
        PacketGuard::PacketGuard(local_68);
                    /* try { // try from 08678a4e to 08678ad2 has its CatchHandler @ 08678ad5 */
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_68);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_68,0,2);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_68,1);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_68,1);
        make_basic_info(this,(char *)local_68,'\x01');
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_68,true);
        Send(this,local_68);
        PacketGuard::~PacketGuard(local_68);
      }
    }
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_54);
                    /* try { // try from 08678b06 to 08678bb9 has its CatchHandler @ 08679229 */
    this_00 = (GameWorld *)G_GameWorld();
    cVar2 = GameWorld::IsPvPSkilTreeChannel(this_00);
    if (cVar2 == '\0') {
      if ((param_5 == 2) || (param_5 == 0)) {
        if (param_2 == 0) {
          pSVar9 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
          SkillSlot::clear_all_skills_both(pSVar9);
          pSVar9 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
          SkillSlot::set_parent(pSVar9,this);
          iVar7 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
          iVar6 = CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
          addSkillOnCreateCharacter((_Mastered_skill *)(iVar6 + 0x46),iVar7);
          iVar7 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
          iVar6 = CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
          addSkillOnCreateCharacter((_Mastered_skill *)(iVar6 + 0x1de),iVar7);
          WongWork::CSkillChanger::CSkillChanger(local_100);
                    /* try { // try from 08678be8 to 08678bf7 has its CatchHandler @ 08678bfa */
          WongWork::CSkillChanger::SkillInitialize(local_100,this,0,false);
          send_skill_info(this);
          WongWork::CSkillChanger::~CSkillChanger(local_100);
                    /* try { // try from 08678c31 to 08679226 has its CatchHandler @ 08679229 */
          iVar7 = G_CDataManager();
          iVar7 = *(int *)(iVar7 + 0x14);
          iVar6 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
          local_41 = CCharacter::get_give_skill
                               ((CCharacter *)(iVar7 + iVar6 * 0x7dc),(uint)param_1,0,
                                (vector *)local_54,1);
        }
        else {
          iVar7 = G_CDataManager();
          iVar7 = *(int *)(iVar7 + 0x14);
          iVar6 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
          local_41 = CCharacter::get_give_skill
                               ((CCharacter *)(iVar7 + iVar6 * 0x7dc),(uint)param_1,(uint)param_2,
                                (vector *)local_54,2);
        }
      }
      else if (param_5 == 1) {
        if (param_2 == 0) {
          iVar7 = G_CDataManager();
          iVar7 = *(int *)(iVar7 + 0x14);
          iVar6 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
          local_41 = CCharacter::get_give_skill
                               ((CCharacter *)(iVar7 + iVar6 * 0x7dc),(uint)param_1,0,
                                (vector *)local_54,1);
        }
        else {
          iVar7 = G_CDataManager();
          iVar7 = *(int *)(iVar7 + 0x14);
          iVar6 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
          local_41 = CCharacter::get_give_skill
                               ((CCharacter *)(iVar7 + iVar6 * 0x7dc),(uint)param_1,(uint)param_2,
                                (vector *)local_54,0);
        }
      }
      else {
        local_41 = '\0';
      }
    }
    else {
      local_41 = '\x01';
    }
    if (local_41 == '\x01') {
      std::pair<int,int>::pair((pair<int,int> *)&local_5c);
      if (local_48 == (InterfacePacketBuf *)0x0) {
        local_20 = 0;
        while( true ) {
          iVar7 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size(local_54)
          ;
          if (iVar7 <= (int)local_20) break;
          iVar7 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                            (local_54,local_20);
          uVar5 = *(undefined4 *)(iVar7 + 4);
          puVar10 = (undefined4 *)
                    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                              (local_54,local_20);
          uVar1 = *puVar10;
          uVar11 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
          pSVar9 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
          SkillSlot::growtype_skill(pSVar9,uVar11,uVar1,uVar5,0);
          iVar7 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                            (local_54,local_20);
          uVar5 = *(undefined4 *)(iVar7 + 4);
          puVar10 = (undefined4 *)
                    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                              (local_54,local_20);
          uVar1 = *puVar10;
          uVar11 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
          pSVar9 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
          SkillSlot::growtype_skill(pSVar9,uVar11,uVar1,uVar5,1);
          local_20 = local_20 + 1;
        }
      }
      else {
        local_6c = InterfacePacketBuf::get_index(local_48);
        local_2c = 0;
        InterfacePacketBuf::put_byte(local_48,0);
        local_28 = 0;
        while( true ) {
          iVar7 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size(local_54)
          ;
          if (iVar7 <= (int)local_28) break;
          piVar8 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                          operator[](local_54,local_28);
          local_58 = piVar8[1];
          local_5c = *piVar8;
          local_40 = local_5c;
          local_3c = local_58;
          uVar5 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
          pSVar9 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
          local_38 = SkillSlot::growtype_skill(pSVar9,uVar5,local_40,local_3c,0);
          if (0 < local_38) {
            InterfacePacketBuf::put_byte(local_48,local_38);
            InterfacePacketBuf::put_byte(local_48,local_40);
            InterfacePacketBuf::put_byte(local_48,local_3c);
            local_2c = local_2c + 1;
          }
          local_28 = local_28 + 1;
        }
        InterfacePacketBuf::put_byte(local_48,&local_6c,local_2c);
        local_6c = InterfacePacketBuf::get_index(local_48);
        local_2c = 0;
        InterfacePacketBuf::put_byte(local_48,0);
        local_24 = 0;
        while( true ) {
          iVar7 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size(local_54)
          ;
          if (iVar7 <= (int)local_24) break;
          piVar8 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                          operator[](local_54,local_24);
          local_58 = piVar8[1];
          local_5c = *piVar8;
          local_40 = local_5c;
          local_3c = local_58;
          uVar5 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
          pSVar9 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
          local_38 = SkillSlot::growtype_skill(pSVar9,uVar5,local_40,local_3c,1);
          if (0 < local_38) {
            InterfacePacketBuf::put_byte(local_48,local_38);
            InterfacePacketBuf::put_byte(local_48,local_40);
            InterfacePacketBuf::put_byte(local_48,local_3c);
            local_2c = local_2c + 1;
          }
          local_24 = local_24 + 1;
        }
        InterfacePacketBuf::put_byte(local_48,&local_6c,local_2c);
      }
      _UpdateUserInfo4Guild(this);
      cVar2 = CUserCharacInfo::getCurCharacGrowType((CUserCharacInfo *)this);
      sVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
      uVar12 = get_charac_no(this,-1);
      uVar13 = get_acc_id(this);
      uVar5 = GetServerGroup(this);
      this_01 = (CGuildServerProxy *)
                CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                          (GlobalData::s_guild_proxy_mgr,uVar5);
      CGuildServerProxy::SendCharLevelGrowType(this_01,uVar13,uVar12,sVar4,(short)cVar2);
      cVar2 = CUserCharacInfo::getCurCharacGrowType((CUserCharacInfo *)this);
      sVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
      uVar12 = get_charac_no(this,-1);
      uVar13 = get_acc_id(this);
      uVar5 = GetServerGroup(this);
      this_02 = (CMonitorServerProxy *)
                CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                          (GlobalData::s_monitor_proxy_mgr,uVar5);
      CMonitorServerProxy::SendCharLevelGrowType(this_02,uVar13,uVar12,sVar4,(short)cVar2);
      processGrowTypeEvent(this,param_1,param_2,param_5);
    }
    else {
      uVar5 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)this);
      LogManager::logFormat
                (1,"user.cpp",
                 "void CUser::set_grow_type(unsigned char, unsigned char, char*, eChangeGrowTypeReason)"
                 ,0x720c,"User %s - CUser::set_grow_type first_grow_type %d, second_grow_type %d",
                 uVar5,(uint)param_1,(uint)param_2);
    }
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_54);
  }
  else {
    uVar5 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)this);
    LogManager::logFormat
              (1,"user.cpp",
               "void CUser::set_grow_type(unsigned char, unsigned char, char*, eChangeGrowTypeReason)"
               ,0x713b,"User %s - grow type < 1 || grow type >= GROW_TYPE_NUMBER",uVar5);
  }
  return;
}
```
