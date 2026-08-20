# accept_quest

`_ZN9UserQuest12accept_questEiPcRi`

`UserQuest::accept_quest(int, char*, int&)`

| 类 | 地址 |
|---|---|
| `UserQuest` | `0x086abf38` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086abf38  _ZN9UserQuest12accept_questEiPcRi
#           UserQuest::accept_quest(int, char*, int&)
# range [0x086abf38, 0x086ac531]
086abf38 +0x000:  push   %ebp
086abf39 +0x001:  mov    %esp,%ebp
086abf3b +0x003:  push   %edi
086abf3c +0x004:  push   %esi
086abf3d +0x005:  push   %ebx
086abf3e +0x006:  sub    $0xcc,%esp
086abf44 +0x00c:  mov    0x8(%ebp),%eax
086abf47 +0x00f:  mov    (%eax),%eax
086abf49 +0x011:  test   %eax,%eax
086abf4b +0x013:  jne    086abf83 <+0x4b>
086abf4d +0x015:  movl   $"user is null",0x10(%esp)
086abf55 +0x01d:  movl   $0x1e8,0xc(%esp)
086abf5d +0x025:  movl   $&_ZZN9UserQuest12accept_questEiPcRiE19__PRETTY_FUNCTION__,0x8(%esp)
086abf65 +0x02d:  movl   $"user_quest.cpp",0x4(%esp)
086abf6d +0x035:  movl   $0x1,(%esp)
086abf74 +0x03c:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
086abf79 +0x041:  mov    $0x1,%ebx
086abf7e +0x046:  jmp    086ac525 <+0x5ed>
086abf83 +0x04b:  mov    0x8(%ebp),%eax
086abf86 +0x04e:  mov    (%eax),%eax
086abf88 +0x050:  mov    %eax,(%esp)
086abf8b +0x053:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
086abf90 +0x058:  test   %eax,%eax
086abf92 +0x05a:  sete   %al
086abf95 +0x05d:  test   %al,%al
086abf97 +0x05f:  je     086abfd9 <+0xa1>
086abf99 +0x061:  movl   $0x5,0xc(%esp)
086abfa1 +0x069:  movl   $0x1ef,0x8(%esp)
086abfa9 +0x071:  movl   $&_ZZN9UserQuest12accept_questEiPcRiE19__PRETTY_FUNCTION__,0x4(%esp)
086abfb1 +0x079:  lea    -0x5c(%ebp),%eax
086abfb4 +0x07c:  mov    %eax,(%esp)
086abfb7 +0x07f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086abfbc +0x084:  movl   $"UserQuest::accept_quest user->m_selected is null",0x4(%esp)
086abfc4 +0x08c:  lea    -0x5c(%ebp),%eax
086abfc7 +0x08f:  mov    %eax,(%esp)
086abfca +0x092:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086abfcf +0x097:  mov    $0x1,%ebx
086abfd4 +0x09c:  jmp    086ac525 <+0x5ed>
086abfd9 +0x0a1:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086abfde +0x0a6:  mov    0xc(%ebp),%edx
086abfe1 +0x0a9:  mov    %edx,0x4(%esp)
086abfe5 +0x0ad:  mov    %eax,(%esp)
086abfe8 +0x0b0:  call   0835fdc6 <_ZNK12CDataManager10find_questEi>  ; CDataManager::find_quest(int) const
086abfed +0x0b5:  mov    %eax,-0x3c(%ebp)
086abff0 +0x0b8:  cmpl   $0x0,-0x3c(%ebp)
086abff4 +0x0bc:  jne    086ac033 <+0xfb>
086abff6 +0x0be:  mov    0xc(%ebp),%eax
086abff9 +0x0c1:  mov    %eax,0x14(%esp)
086abffd +0x0c5:  movl   $"G_CDataManager()->find_quest(%d)",0x10(%esp)
086ac005 +0x0cd:  movl   $0x1f8,0xc(%esp)
086ac00d +0x0d5:  movl   $&_ZZN9UserQuest12accept_questEiPcRiE19__PRETTY_FUNCTION__,0x8(%esp)
086ac015 +0x0dd:  movl   $"user_quest.cpp",0x4(%esp)
086ac01d +0x0e5:  movl   $0x1,(%esp)
086ac024 +0x0ec:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
086ac029 +0x0f1:  mov    $0x1,%ebx
086ac02e +0x0f6:  jmp    086ac525 <+0x5ed>
086ac033 +0x0fb:  movl   $0x0,-0x34(%ebp)
086ac03a +0x102:  jmp    086ac05f <+0x127>
086ac03c +0x104:  mov    -0x34(%ebp),%edx
086ac03f +0x107:  mov    0x8(%ebp),%eax
086ac042 +0x10a:  add    $0x1d4c,%edx
086ac048 +0x110:  mov    0x8(%eax,%edx,4),%eax
086ac04c +0x114:  cmp    0xc(%ebp),%eax
086ac04f +0x117:  jne    086ac05b <+0x123>
086ac051 +0x119:  mov    $0x12,%ebx
086ac056 +0x11e:  jmp    086ac525 <+0x5ed>
086ac05b +0x123:  addl   $0x1,-0x34(%ebp)
086ac05f +0x127:  cmpl   $0x13,-0x34(%ebp)
086ac063 +0x12b:  setle  %al
086ac066 +0x12e:  test   %al,%al
086ac068 +0x130:  jne    086ac03c <+0x104>
086ac06a +0x132:  mov    0x8(%ebp),%eax
086ac06d +0x135:  mov    (%eax),%eax
086ac06f +0x137:  mov    %eax,(%esp)
086ac072 +0x13a:  call   0811edee <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0xe9>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0xe9
086ac077 +0x13f:  xor    $0x1,%eax
086ac07a +0x142:  test   %al,%al
086ac07c +0x144:  je     086ac0b3 <+0x17b>
086ac07e +0x146:  mov    -0x3c(%ebp),%eax
086ac081 +0x149:  mov    %eax,(%esp)
086ac084 +0x14c:  call   08352bee <_ZNK5Quest17isRepeatableQuestEv>  ; Quest::isRepeatableQuest() const
086ac089 +0x151:  xor    $0x1,%eax
086ac08c +0x154:  test   %al,%al
086ac08e +0x156:  je     086ac0b3 <+0x17b>
086ac090 +0x158:  mov    0xc(%ebp),%eax
086ac093 +0x15b:  mov    0x8(%ebp),%edx
086ac096 +0x15e:  add    $0x4,%edx
086ac099 +0x161:  mov    %eax,0x4(%esp)
086ac09d +0x165:  mov    %edx,(%esp)
086ac0a0 +0x168:  call   0808bae0 <_ZNK8WongWork11CQuestClear14isClearedQuestEj>  ; WongWork::CQuestClear::isClearedQuest(unsigned int) const
086ac0a5 +0x16d:  test   %al,%al
086ac0a7 +0x16f:  je     086ac0b3 <+0x17b>
086ac0a9 +0x171:  mov    $0x12,%ebx
086ac0ae +0x176:  jmp    086ac525 <+0x5ed>
086ac0b3 +0x17b:  mov    0x8(%ebp),%eax
086ac0b6 +0x17e:  mov    (%eax),%eax
086ac0b8 +0x180:  mov    %eax,(%esp)
086ac0bb +0x183:  call   0811edee <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0xe9>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0xe9
086ac0c0 +0x188:  xor    $0x1,%eax
086ac0c3 +0x18b:  test   %al,%al
086ac0c5 +0x18d:  je     086ac15a <+0x222>
086ac0cb +0x193:  mov    0x8(%ebp),%eax
086ac0ce +0x196:  mov    (%eax),%eax
086ac0d0 +0x198:  mov    %eax,0x4(%esp)
086ac0d4 +0x19c:  lea    -0xb0(%ebp),%eax
086ac0da +0x1a2:  mov    %eax,(%esp)
086ac0dd +0x1a5:  call   083480b4 <_ZN18stSelectQuestParamC1EP5CUser>  ; stSelectQuestParam::stSelectQuestParam(CUser*)
086ac0e2 +0x1aa:  mov    0x8(%ebp),%eax
086ac0e5 +0x1ad:  mov    (%eax),%eax
086ac0e7 +0x1af:  mov    %eax,(%esp)
086ac0ea +0x1b2:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
086ac0ef +0x1b7:  lea    0x4(%eax),%edx
086ac0f2 +0x1ba:  lea    -0xb0(%ebp),%eax
086ac0f8 +0x1c0:  mov    %eax,0x8(%esp)
086ac0fc +0x1c4:  mov    %edx,0x4(%esp)
086ac100 +0x1c8:  mov    -0x3c(%ebp),%eax
086ac103 +0x1cb:  mov    %eax,(%esp)
086ac106 +0x1ce:  call   086abe31 <_Z20checkAcceptableQuestPK5QuestRKN8WongWork11CQuestClearERK18stSelectQuestParam>  ; checkAcceptableQuest(Quest const*, WongWork::CQuestClear const&, stSelectQuestParam const&)
086ac10b +0x1d3:  xor    $0x1,%eax
086ac10e +0x1d6:  test   %al,%al
086ac110 +0x1d8:  je     086ac15a <+0x222>
086ac112 +0x1da:  mov    0x8(%ebp),%eax
086ac115 +0x1dd:  mov    (%eax),%ebx
086ac117 +0x1df:  mov    0x8(%ebp),%eax
086ac11a +0x1e2:  mov    (%eax),%eax
086ac11c +0x1e4:  mov    %eax,(%esp)
086ac11f +0x1e7:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
086ac124 +0x1ec:  movl   $0x0,0x14(%esp)
086ac12c +0x1f4:  movl   $0x0,0x10(%esp)
086ac134 +0x1fc:  movl   $0x1,0xc(%esp)
086ac13c +0x204:  movl   $0x191,0x8(%esp)
086ac144 +0x20c:  mov    %ebx,0x4(%esp)
086ac148 +0x210:  mov    %eax,(%esp)
086ac14b +0x213:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
086ac150 +0x218:  mov    $0x1,%ebx
086ac155 +0x21d:  jmp    086ac525 <+0x5ed>
086ac15a +0x222:  lea    -0x68(%ebp),%eax
086ac15d +0x225:  mov    %eax,(%esp)
086ac160 +0x228:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
086ac165 +0x22d:  lea    -0x74(%ebp),%eax
086ac168 +0x230:  mov    %eax,(%esp)
086ac16b +0x233:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
086ac170 +0x238:  mov    -0x3c(%ebp),%eax
086ac173 +0x23b:  add    $0x70,%eax
086ac176 +0x23e:  mov    %eax,0x4(%esp)
086ac17a +0x242:  lea    -0x68(%ebp),%eax
086ac17d +0x245:  mov    %eax,(%esp)
086ac180 +0x248:  call   0830f08c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0xc71>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0xc71
086ac185 +0x24d:  mov    0x8(%ebp),%eax
086ac188 +0x250:  mov    (%eax),%eax
086ac18a +0x252:  mov    %eax,(%esp)
086ac18d +0x255:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
086ac192 +0x25a:  lea    -0x74(%ebp),%edx
086ac195 +0x25d:  mov    %edx,0x8(%esp)
086ac199 +0x261:  lea    -0x68(%ebp),%edx
086ac19c +0x264:  mov    %edx,0x4(%esp)
086ac1a0 +0x268:  mov    %eax,(%esp)
086ac1a3 +0x26b:  call   085056ca <_ZN10CInventory19erase_repeated_itemERKSt6vectorISt4pairIiiESaIS2_EERS4_>  ; CInventory::erase_repeated_item(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
086ac1a8 +0x270:  mov    %eax,-0x38(%ebp)
086ac1ab +0x273:  cmpl   $0x0,-0x38(%ebp)
086ac1af +0x277:  jle    086ac275 <+0x33d>
086ac1b5 +0x27d:  lea    -0xb0(%ebp),%ebx
086ac1bb +0x283:  mov    $0x0,%eax
086ac1c0 +0x288:  mov    $0xb,%edx
086ac1c5 +0x28d:  mov    %ebx,%edi
086ac1c7 +0x28f:  mov    %edx,%ecx
086ac1c9 +0x291:  rep stos %eax,%es:(%edi)
086ac1cb +0x293:  mov    0x8(%ebp),%eax
086ac1ce +0x296:  mov    (%eax),%eax
086ac1d0 +0x298:  mov    %eax,(%esp)
086ac1d3 +0x29b:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
086ac1d8 +0x2a0:  lea    -0x74(%ebp),%edx
086ac1db +0x2a3:  mov    %edx,0x8(%esp)
086ac1df +0x2a7:  lea    -0xb0(%ebp),%edx
086ac1e5 +0x2ad:  mov    %edx,0x4(%esp)
086ac1e9 +0x2b1:  mov    %eax,(%esp)
086ac1ec +0x2b4:  call   0850891a <_ZNK10CInventory11CalNeedSlotEPiRKSt6vectorISt4pairIiiESaIS3_EE>  ; CInventory::CalNeedSlot(int*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&) const
086ac1f1 +0x2b9:  mov    0x8(%ebp),%eax
086ac1f4 +0x2bc:  mov    (%eax),%eax
086ac1f6 +0x2be:  mov    %eax,(%esp)
086ac1f9 +0x2c1:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
086ac1fe +0x2c6:  mov    %eax,(%esp)
086ac201 +0x2c9:  call   08505038 <_ZNK10CInventory15QuickEmptyCountEv>  ; CInventory::QuickEmptyCount() const
086ac206 +0x2ce:  mov    %eax,-0x30(%ebp)
086ac209 +0x2d1:  movl   $0x1,-0x2c(%ebp)
086ac210 +0x2d8:  jmp    086ac26a <+0x332>
086ac212 +0x2da:  mov    -0x2c(%ebp),%ebx
086ac215 +0x2dd:  mov    0x8(%ebp),%eax
086ac218 +0x2e0:  mov    (%eax),%eax
086ac21a +0x2e2:  mov    %eax,(%esp)
086ac21d +0x2e5:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
086ac222 +0x2ea:  mov    %ebx,0x4(%esp)
086ac226 +0x2ee:  mov    %eax,(%esp)
086ac229 +0x2f1:  call   08505080 <_ZNK10CInventory15InvenEmptycountEN10Inven_Item9ITEM_TYPEE>  ; CInventory::InvenEmptycount(Inven_Item::ITEM_TYPE) const
086ac22e +0x2f6:  mov    %eax,-0x28(%ebp)
086ac231 +0x2f9:  mov    -0x2c(%ebp),%eax
086ac234 +0x2fc:  mov    -0xb0(%ebp,%eax,4),%eax
086ac23b +0x303:  cmp    -0x28(%ebp),%eax
086ac23e +0x306:  jle    086ac266 <+0x32e>
086ac240 +0x308:  mov    -0x2c(%ebp),%eax
086ac243 +0x30b:  mov    -0xb0(%ebp,%eax,4),%eax
086ac24a +0x312:  mov    -0x28(%ebp),%edx
086ac24d +0x315:  mov    %edx,%ecx
086ac24f +0x317:  sub    %eax,%ecx
086ac251 +0x319:  mov    %ecx,%eax
086ac253 +0x31b:  add    %eax,-0x30(%ebp)
086ac256 +0x31e:  cmpl   $0x0,-0x30(%ebp)
086ac25a +0x322:  jns    086ac266 <+0x32e>
086ac25c +0x324:  mov    $0x11,%ebx
086ac261 +0x329:  jmp    086ac4f2 <+0x5ba>
086ac266 +0x32e:  addl   $0x1,-0x2c(%ebp)
086ac26a +0x332:  cmpl   $0xa,-0x2c(%ebp)
086ac26e +0x336:  setle  %al
086ac271 +0x339:  test   %al,%al
086ac273 +0x33b:  jne    086ac212 <+0x2da>
086ac275 +0x33d:  mov    -0x3c(%ebp),%eax
086ac278 +0x340:  mov    %eax,(%esp)
086ac27b +0x343:  call   083530d6 <_ZNK5Quest16get_init_triggerEv>  ; Quest::get_init_trigger() const
086ac280 +0x348:  mov    0x14(%ebp),%edx
086ac283 +0x34b:  mov    %eax,(%edx)
086ac285 +0x34d:  movl   $0x0,-0x24(%ebp)
086ac28c +0x354:  jmp    086ac4c7 <+0x58f>
086ac291 +0x359:  mov    -0x24(%ebp),%edx
086ac294 +0x35c:  mov    0x8(%ebp),%eax
086ac297 +0x35f:  add    $0x1d4c,%edx
086ac29d +0x365:  mov    0x8(%eax,%edx,4),%eax
086ac2a1 +0x369:  test   %eax,%eax
086ac2a3 +0x36b:  jne    086ac4c3 <+0x58b>
086ac2a9 +0x371:  mov    0xc(%ebp),%eax
086ac2ac +0x374:  mov    0x8(%ebp),%edx
086ac2af +0x377:  add    $0x4,%edx
086ac2b2 +0x37a:  mov    %eax,0x4(%esp)
086ac2b6 +0x37e:  mov    %edx,(%esp)
086ac2b9 +0x381:  call   0808baac <_ZN8WongWork11CQuestClear18resetClearedQuestsEj>  ; WongWork::CQuestClear::resetClearedQuests(unsigned int)
086ac2be +0x386:  mov    -0x24(%ebp),%edx
086ac2c1 +0x389:  mov    0x8(%ebp),%eax
086ac2c4 +0x38c:  lea    0x1d4c(%edx),%ecx
086ac2ca +0x392:  mov    0xc(%ebp),%edx
086ac2cd +0x395:  mov    %edx,0x8(%eax,%ecx,4)
086ac2d1 +0x399:  mov    -0x24(%ebp),%ecx
086ac2d4 +0x39c:  mov    0x14(%ebp),%eax
086ac2d7 +0x39f:  mov    (%eax),%edx
086ac2d9 +0x3a1:  mov    0x8(%ebp),%eax
086ac2dc +0x3a4:  add    $0x1d60,%ecx
086ac2e2 +0x3aa:  mov    %edx,0x8(%eax,%ecx,4)
086ac2e6 +0x3ae:  mov    0x10(%ebp),%eax
086ac2e9 +0x3b1:  mov    %eax,-0x20(%ebp)
086ac2ec +0x3b4:  mov    -0x20(%ebp),%eax
086ac2ef +0x3b7:  movl   $0x1,0x4(%esp)
086ac2f7 +0x3bf:  mov    %eax,(%esp)
086ac2fa +0x3c2:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086ac2ff +0x3c7:  mov    -0x20(%ebp),%eax
086ac302 +0x3ca:  mov    0xc(%ebp),%edx
086ac305 +0x3cd:  mov    %edx,0x4(%esp)
086ac309 +0x3d1:  mov    %eax,(%esp)
086ac30c +0x3d4:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086ac311 +0x3d9:  mov    0x14(%ebp),%eax
086ac314 +0x3dc:  mov    (%eax),%edx
086ac316 +0x3de:  mov    -0x20(%ebp),%eax
086ac319 +0x3e1:  mov    %edx,0x4(%esp)
086ac31d +0x3e5:  mov    %eax,(%esp)
086ac320 +0x3e8:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086ac325 +0x3ed:  lea    -0x80(%ebp),%eax
086ac328 +0x3f0:  mov    %eax,(%esp)
086ac32b +0x3f3:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
086ac330 +0x3f8:  mov    0x8(%ebp),%eax
086ac333 +0x3fb:  mov    (%eax),%eax
086ac335 +0x3fd:  mov    %eax,(%esp)
086ac338 +0x400:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
086ac33d +0x405:  movl   $"",0x1c(%esp)
086ac345 +0x40d:  movl   $"",0x18(%esp)
086ac34d +0x415:  movl   $0x0,0x14(%esp)
086ac355 +0x41d:  movl   $0x8,0x10(%esp)
086ac35d +0x425:  movl   $0x3,0xc(%esp)
086ac365 +0x42d:  lea    -0x80(%ebp),%edx
086ac368 +0x430:  mov    %edx,0x8(%esp)
086ac36c +0x434:  lea    -0x74(%ebp),%edx
086ac36f +0x437:  mov    %edx,0x4(%esp)
086ac373 +0x43b:  mov    %eax,(%esp)
086ac376 +0x43e:  call   08506bb2 <_ZN10CInventory18insert_event_itemsERKSt6vectorISt4pairIiiESaIS2_EERS0_IiSaIiEE15eMoneyAddReason14eItemAddReasonbPKcSD_>  ; CInventory::insert_event_items(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, std::vector<int, std::allocator<int> >&, eMoneyAddReason, eItemAddReason, bool, char const*, char const*)
086ac37b +0x443:  mov    %eax,-0x1c(%ebp)
086ac37e +0x446:  mov    -0x20(%ebp),%eax
086ac381 +0x449:  mov    -0x1c(%ebp),%edx
086ac384 +0x44c:  mov    %edx,0x4(%esp)
086ac388 +0x450:  mov    %eax,(%esp)
086ac38b +0x453:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086ac390 +0x458:  lea    -0x84(%ebp),%eax
086ac396 +0x45e:  lea    -0x80(%ebp),%edx
086ac399 +0x461:  mov    %edx,0x4(%esp)
086ac39d +0x465:  mov    %eax,(%esp)
086ac3a0 +0x468:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
086ac3a5 +0x46d:  sub    $0x4,%esp
086ac3a8 +0x470:  jmp    086ac46a <+0x532>
086ac3ad +0x475:  lea    -0x84(%ebp),%eax
086ac3b3 +0x47b:  mov    %eax,(%esp)
086ac3b6 +0x47e:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
086ac3bb +0x483:  mov    (%eax),%edx
086ac3bd +0x485:  mov    -0x20(%ebp),%eax
086ac3c0 +0x488:  mov    %edx,0x4(%esp)
086ac3c4 +0x48c:  mov    %eax,(%esp)
086ac3c7 +0x48f:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086ac3cc +0x494:  lea    -0x48(%ebp),%eax
086ac3cf +0x497:  movl   $0x0,0x8(%esp)
086ac3d7 +0x49f:  lea    -0x84(%ebp),%edx
086ac3dd +0x4a5:  mov    %edx,0x4(%esp)
086ac3e1 +0x4a9:  mov    %eax,(%esp)
086ac3e4 +0x4ac:  call   08341906 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x39d3>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x39d3
086ac3e9 +0x4b1:  sub    $0x4,%esp
086ac3ec +0x4b4:  lea    -0x84(%ebp),%eax
086ac3f2 +0x4ba:  mov    %eax,(%esp)
086ac3f5 +0x4bd:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
086ac3fa +0x4c2:  mov    (%eax),%edx
086ac3fc +0x4c4:  mov    -0x20(%ebp),%eax
086ac3ff +0x4c7:  mov    %edx,0x4(%esp)
086ac403 +0x4cb:  mov    %eax,(%esp)
086ac406 +0x4ce:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086ac40b +0x4d3:  lea    -0x44(%ebp),%eax
086ac40e +0x4d6:  movl   $0x0,0x8(%esp)
086ac416 +0x4de:  lea    -0x84(%ebp),%edx
086ac41c +0x4e4:  mov    %edx,0x4(%esp)
086ac420 +0x4e8:  mov    %eax,(%esp)
086ac423 +0x4eb:  call   08341906 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x39d3>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x39d3
086ac428 +0x4f0:  sub    $0x4,%esp
086ac42b +0x4f3:  lea    -0x84(%ebp),%eax
086ac431 +0x4f9:  mov    %eax,(%esp)
086ac434 +0x4fc:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
086ac439 +0x501:  mov    (%eax),%edx
086ac43b +0x503:  mov    -0x20(%ebp),%eax
086ac43e +0x506:  mov    %edx,0x4(%esp)
086ac442 +0x50a:  mov    %eax,(%esp)
086ac445 +0x50d:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086ac44a +0x512:  lea    -0x40(%ebp),%eax
086ac44d +0x515:  movl   $0x0,0x8(%esp)
086ac455 +0x51d:  lea    -0x84(%ebp),%edx
086ac45b +0x523:  mov    %edx,0x4(%esp)
086ac45f +0x527:  mov    %eax,(%esp)
086ac462 +0x52a:  call   08341906 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x39d3>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x39d3
086ac467 +0x52f:  sub    $0x4,%esp
086ac46a +0x532:  lea    -0x4c(%ebp),%eax
086ac46d +0x535:  lea    -0x80(%ebp),%edx
086ac470 +0x538:  mov    %edx,0x4(%esp)
086ac474 +0x53c:  mov    %eax,(%esp)
086ac477 +0x53f:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
086ac47c +0x544:  sub    $0x4,%esp
086ac47f +0x547:  lea    -0x4c(%ebp),%eax
086ac482 +0x54a:  mov    %eax,0x4(%esp)
086ac486 +0x54e:  lea    -0x84(%ebp),%eax
086ac48c +0x554:  mov    %eax,(%esp)
086ac48f +0x557:  call   080ea462 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x9b>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x9b
086ac494 +0x55c:  test   %al,%al
086ac496 +0x55e:  jne    086ac3ad <+0x475>
086ac49c +0x564:  mov    $0x0,%ebx
086ac4a1 +0x569:  lea    -0x80(%ebp),%eax
086ac4a4 +0x56c:  mov    %eax,(%esp)
086ac4a7 +0x56f:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
086ac4ac +0x574:  jmp    086ac4f2 <+0x5ba>
086ac4ae +0x576:  mov    %edx,%ebx
086ac4b0 +0x578:  mov    %eax,%esi
086ac4b2 +0x57a:  lea    -0x80(%ebp),%eax
086ac4b5 +0x57d:  mov    %eax,(%esp)
086ac4b8 +0x580:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
086ac4bd +0x585:  mov    %esi,%eax
086ac4bf +0x587:  mov    %ebx,%edx
086ac4c1 +0x589:  jmp    086ac4dd <+0x5a5>
086ac4c3 +0x58b:  addl   $0x1,-0x24(%ebp)
086ac4c7 +0x58f:  cmpl   $0x13,-0x24(%ebp)
086ac4cb +0x593:  setle  %al
086ac4ce +0x596:  test   %al,%al
086ac4d0 +0x598:  jne    086ac291 <+0x359>
086ac4d6 +0x59e:  mov    $0x4,%ebx
086ac4db +0x5a3:  jmp    086ac4f2 <+0x5ba>
086ac4dd +0x5a5:  mov    %edx,%ebx
086ac4df +0x5a7:  mov    %eax,%esi
086ac4e1 +0x5a9:  lea    -0x74(%ebp),%eax
086ac4e4 +0x5ac:  mov    %eax,(%esp)
086ac4e7 +0x5af:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
086ac4ec +0x5b4:  mov    %esi,%eax
086ac4ee +0x5b6:  mov    %ebx,%edx
086ac4f0 +0x5b8:  jmp    086ac4ff <+0x5c7>
086ac4f2 +0x5ba:  lea    -0x74(%ebp),%eax
086ac4f5 +0x5bd:  mov    %eax,(%esp)
086ac4f8 +0x5c0:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
086ac4fd +0x5c5:  jmp    086ac51a <+0x5e2>
086ac4ff +0x5c7:  mov    %edx,%ebx
086ac501 +0x5c9:  mov    %eax,%esi
086ac503 +0x5cb:  lea    -0x68(%ebp),%eax
086ac506 +0x5ce:  mov    %eax,(%esp)
086ac509 +0x5d1:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
086ac50e +0x5d6:  mov    %esi,%eax
086ac510 +0x5d8:  mov    %ebx,%edx
086ac512 +0x5da:  mov    %eax,(%esp)
086ac515 +0x5dd:  call   08ae3750 <_Unwind_Resume>
086ac51a +0x5e2:  lea    -0x68(%ebp),%eax
086ac51d +0x5e5:  mov    %eax,(%esp)
086ac520 +0x5e8:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
086ac525 +0x5ed:  mov    %ebx,%eax
086ac527 +0x5ef:  lea    -0xc(%ebp),%esp
086ac52a +0x5f2:  add    $0x0,%esp
086ac52d +0x5f5:  pop    %ebx
086ac52e +0x5f6:  pop    %esi
086ac52f +0x5f7:  pop    %edi
086ac530 +0x5f8:  pop    %ebp
086ac531 +0x5f9:  ret
```

## 反编译 C

```c
// UserQuest::accept_quest @ 0x86abf38

/* UserQuest::accept_quest(int, char*, int&) */

undefined4 __thiscall
UserQuest::accept_quest(UserQuest *this,int param_1,char *param_2,int *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  CHackAnalyzer *pCVar4;
  CInventory *pCVar5;
  int *piVar6;
  undefined4 uVar7;
  stSelectQuestParam *psVar8;
  byte bVar9;
  stSelectQuestParam local_b4 [44];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_88 [4];
  vector<int,std::allocator<int>> local_84 [12];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_78 [12];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_6c [12];
  cMyTrace local_60 [16];
  __normal_iterator local_50 [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_4c [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_48 [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_44 [4];
  Quest *local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  InterfacePacketBuf *local_24;
  int local_20;
  
  bVar9 = 0;
  if (*(int *)this == 0) {
    LogManager::logFormat
              (1,"user_quest.cpp","int UserQuest::accept_quest(int, char*, int&)",0x1e8,
               "user is null");
    uVar7 = 1;
  }
  else {
    iVar3 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)this);
    if (iVar3 == 0) {
      cMyTrace::cMyTrace(local_60,"int UserQuest::accept_quest(int, char*, int&)",0x1ef,5);
      cMyTrace::operator()(local_60,"UserQuest::accept_quest user->m_selected is null");
      uVar7 = 1;
    }
    else {
      iVar3 = G_CDataManager();
      local_40 = (Quest *)CDataManager::find_quest(iVar3);
      if (local_40 == (Quest *)0x0) {
        LogManager::logFormat
                  (1,"user_quest.cpp","int UserQuest::accept_quest(int, char*, int&)",0x1f8,
                   "G_CDataManager()->find_quest(%d)",param_1);
        uVar7 = 1;
      }
      else {
        for (local_38 = 0; local_38 < 0x14; local_38 = local_38 + 1) {
          if (*(int *)(this + (local_38 + 0x1d4c) * 4 + 8) == param_1) {
            return 0x12;
          }
        }
        cVar1 = CUser::IsGameMasterMode(*(CUser **)this);
        if (((cVar1 != '\x01') && (cVar1 = Quest::isRepeatableQuest(local_40), cVar1 != '\x01')) &&
           (cVar1 = WongWork::CQuestClear::isClearedQuest((CQuestClear *)(this + 4),param_1),
           cVar1 != '\0')) {
          return 0x12;
        }
        cVar1 = CUser::IsGameMasterMode(*(CUser **)this);
        if (cVar1 != '\x01') {
          stSelectQuestParam::stSelectQuestParam(local_b4,*(CUser **)this);
          iVar3 = CUser::getCurCharacQuestR(*(CUser **)this);
          cVar1 = checkAcceptableQuest(local_40,(CQuestClear *)(iVar3 + 4),local_b4);
          if (cVar1 != '\x01') {
            uVar7 = *(undefined4 *)this;
            pCVar4 = (CHackAnalyzer *)CUser::getHackAnalyzer(*(CUser **)this);
            WongWork::CHackAnalyzer::addServerHackCnt(pCVar4,uVar7,0x191,1,0,0);
            return 1;
          }
        }
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_6c);
                    /* try { // try from 086ac16b to 086ac16f has its CatchHandler @ 086ac4ff */
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_78);
                    /* try { // try from 086ac180 to 086ac32f has its CatchHandler @ 086ac4dd */
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator=
                  (local_6c,(vector *)(local_40 + 0x70));
        pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)this);
        local_3c = CInventory::erase_repeated_item(pCVar5,(vector *)local_6c,(vector *)local_78);
        if (0 < local_3c) {
          psVar8 = local_b4;
          for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
            *(undefined4 *)psVar8 = 0;
            psVar8 = psVar8 + ((uint)bVar9 * -2 + 1) * 4;
          }
          pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)this);
          CInventory::CalNeedSlot(pCVar5,(int *)local_b4,(vector *)local_78);
          pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)this);
          local_34 = CInventory::QuickEmptyCount(pCVar5);
          for (local_30 = 1; iVar3 = local_30, local_30 < 0xb; local_30 = local_30 + 1) {
            pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)this);
            local_2c = CInventory::InvenEmptycount(pCVar5,iVar3);
            if ((local_2c < *(int *)(local_b4 + local_30 * 4)) &&
               (local_34 = local_34 + (local_2c - *(int *)(local_b4 + local_30 * 4)), local_34 < 0))
            {
              uVar7 = 0x11;
              goto LAB_086ac4f2;
            }
          }
        }
        iVar3 = Quest::get_init_trigger(local_40);
        *param_3 = iVar3;
        local_28 = 0;
LAB_086ac4c7:
        if (local_28 < 0x14) {
          if (*(int *)(this + (local_28 + 0x1d4c) * 4 + 8) != 0) goto LAB_086ac4c3;
          WongWork::CQuestClear::resetClearedQuests((CQuestClear *)(this + 4),param_1);
          *(int *)(this + (local_28 + 0x1d4c) * 4 + 8) = param_1;
          *(int *)(this + (local_28 + 0x1d60) * 4 + 8) = *param_3;
          local_24 = (InterfacePacketBuf *)param_2;
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_2,1);
          InterfacePacketBuf::put_short(local_24,param_1);
          InterfacePacketBuf::put_int(local_24,*param_3);
          std::vector<int,std::allocator<int>>::vector(local_84);
          pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)this);
                    /* try { // try from 086ac376 to 086ac493 has its CatchHandler @ 086ac4ae */
          local_20 = CInventory::insert_event_items
                               (pCVar5,local_78,local_84,3,8,0,&DAT_08cf3a85,&DAT_08cf3a85);
          InterfacePacketBuf::put_byte(local_24,local_20);
          std::vector<int,std::allocator<int>>::begin();
          while( true ) {
            std::vector<int,std::allocator<int>>::end();
            bVar2 = __gnu_cxx::operator!=(local_88,local_50);
            if (!bVar2) break;
            piVar6 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>
                            ::operator*(local_88);
            InterfacePacketBuf::put_short(local_24,*piVar6);
            __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                      (local_4c,(int)local_88);
            piVar6 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>
                            ::operator*(local_88);
            InterfacePacketBuf::put_int(local_24,*piVar6);
            __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                      (local_48,(int)local_88);
            piVar6 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>
                            ::operator*(local_88);
            InterfacePacketBuf::put_int(local_24,*piVar6);
            __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                      (local_44,(int)local_88);
          }
          uVar7 = 0;
                    /* try { // try from 086ac4a7 to 086ac4ab has its CatchHandler @ 086ac4dd */
          std::vector<int,std::allocator<int>>::~vector(local_84);
        }
        else {
          uVar7 = 4;
        }
LAB_086ac4f2:
                    /* try { // try from 086ac4f8 to 086ac4fc has its CatchHandler @ 086ac4ff */
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_78);
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_6c);
      }
    }
  }
  return uVar7;
LAB_086ac4c3:
  local_28 = local_28 + 1;
  goto LAB_086ac4c7;
}
```
