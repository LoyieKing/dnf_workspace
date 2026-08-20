# dispatch

`_ZN10DB_LoadEtc8dispatchEiiP6Stream`

`DB_LoadEtc::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_LoadEtc` | `0x08403bee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08403bee  _ZN10DB_LoadEtc8dispatchEiiP6Stream
#           DB_LoadEtc::dispatch(int, int, Stream*)
# range [0x08403bee, 0x084040b3]
08403bee +0x000:  push   %ebp
08403bef +0x001:  mov    %esp,%ebp
08403bf1 +0x003:  push   %esi
08403bf2 +0x004:  push   %ebx
08403bf3 +0x005:  sub    $0x40,%esp
08403bf6 +0x008:  mov    0x8(%ebp),%eax
08403bf9 +0x00b:  mov    0x14(%ebp),%edx
08403bfc +0x00e:  mov    %edx,0xc(%esp)
08403c00 +0x012:  mov    0x10(%ebp),%edx
08403c03 +0x015:  mov    %edx,0x8(%esp)
08403c07 +0x019:  mov    0xc(%ebp),%edx
08403c0a +0x01c:  mov    %edx,0x4(%esp)
08403c0e +0x020:  mov    %eax,(%esp)
08403c11 +0x023:  call   083fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>  ; DBDispatcher::dispatch(int, int, Stream*)
08403c16 +0x028:  xor    $0x1,%eax
08403c19 +0x02b:  test   %al,%al
08403c1b +0x02d:  je     08403c27 <+0x39>
08403c1d +0x02f:  mov    $0x0,%eax
08403c22 +0x034:  jmp    084040ac <+0x4be>
08403c27 +0x039:  mov    0x14(%ebp),%eax
08403c2a +0x03c:  mov    %eax,(%esp)
08403c2d +0x03f:  call   0845063c <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3252>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3252
08403c32 +0x044:  mov    %eax,-0xc(%ebp)
08403c35 +0x047:  cmpl   $0x0,-0xc(%ebp)
08403c39 +0x04b:  jne    08403c45 <+0x57>
08403c3b +0x04d:  mov    $0x0,%eax
08403c40 +0x052:  jmp    084040ac <+0x4be>
08403c45 +0x057:  mov    -0xc(%ebp),%eax
08403c48 +0x05a:  mov    %eax,0x4(%esp)
08403c4c +0x05e:  mov    0x8(%ebp),%eax
08403c4f +0x061:  mov    %eax,(%esp)
08403c52 +0x064:  call   084075c4 <_ZN10DB_LoadEtc13GetUserRecordEP12SIG_LOAD_ETC>  ; DB_LoadEtc::GetUserRecord(SIG_LOAD_ETC*)
08403c57 +0x069:  mov    -0xc(%ebp),%eax
08403c5a +0x06c:  mov    %eax,0x4(%esp)
08403c5e +0x070:  mov    0x8(%ebp),%eax
08403c61 +0x073:  mov    %eax,(%esp)
08403c64 +0x076:  call   08407dc2 <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC>  ; DB_LoadEtc::GetUserPvp(SIG_LOAD_ETC*)
08403c69 +0x07b:  test   %eax,%eax
08403c6b +0x07d:  je     08403cd8 <+0xea>
08403c6d +0x07f:  cmp    $0x1,%eax
08403c70 +0x082:  je     08403c7c <+0x8e>
08403c72 +0x084:  cmp    $0xffffffff,%eax
08403c75 +0x087:  je     08403cc6 <+0xd8>
08403c77 +0x089:  jmp    08403d15 <+0x127>
08403c7c +0x08e:  lea    -0x24(%ebp),%eax
08403c7f +0x091:  mov    %eax,(%esp)
08403c82 +0x094:  call   08400cc2 <_ZN15DB_CreateCharacC1Ev>  ; DB_CreateCharac::DB_CreateCharac()
08403c87 +0x099:  mov    -0xc(%ebp),%eax
08403c8a +0x09c:  mov    0x4(%eax),%eax
08403c8d +0x09f:  mov    %eax,0x4(%esp)
08403c91 +0x0a3:  lea    -0x24(%ebp),%eax
08403c94 +0x0a6:  mov    %eax,(%esp)
08403c97 +0x0a9:  call   084026ec <_ZN15DB_CreateCharac9CreatePvPEj>  ; DB_CreateCharac::CreatePvP(unsigned int)
08403c9c +0x0ae:  jmp    08403cb9 <+0xcb>
08403c9e +0x0b0:  mov    %edx,%ebx
08403ca0 +0x0b2:  mov    %eax,%esi
08403ca2 +0x0b4:  lea    -0x24(%ebp),%eax
08403ca5 +0x0b7:  mov    %eax,(%esp)
08403ca8 +0x0ba:  call   08400cde <_ZN15DB_CreateCharacD1Ev>  ; DB_CreateCharac::~DB_CreateCharac()
08403cad +0x0bf:  mov    %esi,%eax
08403caf +0x0c1:  mov    %ebx,%edx
08403cb1 +0x0c3:  mov    %eax,(%esp)
08403cb4 +0x0c6:  call   08ae3750 <_Unwind_Resume>
08403cb9 +0x0cb:  lea    -0x24(%ebp),%eax
08403cbc +0x0ce:  mov    %eax,(%esp)
08403cbf +0x0d1:  call   08400cde <_ZN15DB_CreateCharacD1Ev>  ; DB_CreateCharac::~DB_CreateCharac()
08403cc4 +0x0d6:  jmp    08403d15 <+0x127>
08403cc6 +0x0d8:  mov    -0xc(%ebp),%eax
08403cc9 +0x0db:  add    $0x340,%eax
08403cce +0x0e0:  mov    %eax,(%esp)
08403cd1 +0x0e3:  call   085d5dc0 <_ZN13PvpResultType5ClearEv>  ; PvpResultType::Clear()
08403cd6 +0x0e8:  jmp    08403d15 <+0x127>
08403cd8 +0x0ea:  mov    -0xc(%ebp),%eax
08403cdb +0x0ed:  mov    %eax,0x4(%esp)
08403cdf +0x0f1:  mov    0x8(%ebp),%eax
08403ce2 +0x0f4:  mov    %eax,(%esp)
08403ce5 +0x0f7:  call   08407db4 <_ZN10DB_LoadEtc14GetUserPvpBaseEP12SIG_LOAD_ETC>  ; DB_LoadEtc::GetUserPvpBase(SIG_LOAD_ETC*)
08403cea +0x0fc:  cmp    $0xffffffff,%eax
08403ced +0x0ff:  je     08403cf6 <+0x108>
08403cef +0x101:  cmp    $0x1,%eax
08403cf2 +0x104:  je     08403d08 <+0x11a>
08403cf4 +0x106:  jmp    08403d15 <+0x127>
08403cf6 +0x108:  mov    -0xc(%ebp),%eax
08403cf9 +0x10b:  add    $0x340,%eax
08403cfe +0x110:  mov    %eax,(%esp)
08403d01 +0x113:  call   085d5dc0 <_ZN13PvpResultType5ClearEv>  ; PvpResultType::Clear()
08403d06 +0x118:  jmp    08403d15 <+0x127>
08403d08 +0x11a:  mov    -0xc(%ebp),%eax
08403d0b +0x11d:  movl   $0xffffffff,0x350(%eax)
08403d15 +0x127:  mov    -0xc(%ebp),%eax
08403d18 +0x12a:  mov    %eax,0x4(%esp)
08403d1c +0x12e:  mov    0x8(%ebp),%eax
08403d1f +0x131:  mov    %eax,(%esp)
08403d22 +0x134:  call   08445660 <_ZN10DB_LoadEtc18LoadCharacItemStatEP12SIG_LOAD_ETC>  ; DB_LoadEtc::LoadCharacItemStat(SIG_LOAD_ETC*)
08403d27 +0x139:  xor    $0x1,%eax
08403d2a +0x13c:  test   %al,%al
08403d2c +0x13e:  je     08403d64 <+0x176>
08403d2e +0x140:  movl   $"DB_LoadETC ERROR : LoadCharacItemStat Fail",0x10(%esp)
08403d36 +0x148:  movl   $0x14c6,0xc(%esp)
08403d3e +0x150:  movl   $&_ZZN10DB_LoadEtc8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
08403d46 +0x158:  movl   $"DBThread.cpp",0x4(%esp)
08403d4e +0x160:  movl   $0x1,(%esp)
08403d55 +0x167:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08403d5a +0x16c:  mov    $0x0,%eax
08403d5f +0x171:  jmp    084040ac <+0x4be>
08403d64 +0x176:  mov    -0xc(%ebp),%eax
08403d67 +0x179:  mov    %eax,0x4(%esp)
08403d6b +0x17d:  mov    0x8(%ebp),%eax
08403d6e +0x180:  mov    %eax,(%esp)
08403d71 +0x183:  call   08405c60 <_ZN10DB_LoadEtc14LoadLitmitItemEP12SIG_LOAD_ETC>  ; DB_LoadEtc::LoadLitmitItem(SIG_LOAD_ETC*)
08403d76 +0x188:  xor    $0x1,%eax
08403d79 +0x18b:  test   %al,%al
08403d7b +0x18d:  je     08403dc7 <+0x1d9>
08403d7d +0x18f:  mov    -0xc(%ebp),%eax
08403d80 +0x192:  mov    0x4(%eax),%ebx
08403d83 +0x195:  movl   $0x0,0xc(%esp)
08403d8b +0x19d:  movl   $0x14db,0x8(%esp)
08403d93 +0x1a5:  movl   $&_ZZN10DB_LoadEtc8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
08403d9b +0x1ad:  lea    -0x20(%ebp),%eax
08403d9e +0x1b0:  mov    %eax,(%esp)
08403da1 +0x1b3:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08403da6 +0x1b8:  mov    %ebx,0x8(%esp)
08403daa +0x1bc:  movl   $"LoadLimitItem middle fetch <charac:%d>",0x4(%esp)
08403db2 +0x1c4:  lea    -0x20(%ebp),%eax
08403db5 +0x1c7:  mov    %eax,(%esp)
08403db8 +0x1ca:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08403dbd +0x1cf:  mov    $0x0,%eax
08403dc2 +0x1d4:  jmp    084040ac <+0x4be>
08403dc7 +0x1d9:  mov    -0xc(%ebp),%eax
08403dca +0x1dc:  mov    %eax,0x4(%esp)
08403dce +0x1e0:  mov    0x8(%ebp),%eax
08403dd1 +0x1e3:  mov    %eax,(%esp)
08403dd4 +0x1e6:  call   084075d2 <_ZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETC>  ; DB_LoadEtc::GetUserSkill(SIG_LOAD_ETC*)
08403dd9 +0x1eb:  xor    $0x1,%eax
08403ddc +0x1ee:  test   %al,%al
08403dde +0x1f0:  je     08403e16 <+0x228>
08403de0 +0x1f2:  movl   $"DB_LoadETC ERROR : GetUserSkill Fail",0x10(%esp)
08403de8 +0x1fa:  movl   $0x14e3,0xc(%esp)
08403df0 +0x202:  movl   $&_ZZN10DB_LoadEtc8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
08403df8 +0x20a:  movl   $"DBThread.cpp",0x4(%esp)
08403e00 +0x212:  movl   $0x1,(%esp)
08403e07 +0x219:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08403e0c +0x21e:  mov    -0xc(%ebp),%eax
08403e0f +0x221:  movl   $0x1,0x8(%eax)
08403e16 +0x228:  mov    &_ZN10GlobalData15s_event_managerE,%eax
08403e1b +0x22d:  movl   $0x71,0x4(%esp)
08403e23 +0x235:  mov    %eax,(%esp)
08403e26 +0x238:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
08403e2b +0x23d:  mov    (%eax),%edx
08403e2d +0x23f:  add    $0x34,%edx
08403e30 +0x242:  mov    (%edx),%edx
08403e32 +0x244:  movl   $0x0,0x4(%esp)
08403e3a +0x24c:  mov    %eax,(%esp)
08403e3d +0x24f:  call   *%edx
08403e3f +0x251:  test   %al,%al
08403e41 +0x253:  je     08403e55 <+0x267>
08403e43 +0x255:  mov    -0xc(%ebp),%eax
08403e46 +0x258:  mov    %eax,0x4(%esp)
08403e4a +0x25c:  mov    0x8(%ebp),%eax
08403e4d +0x25f:  mov    %eax,(%esp)
08403e50 +0x262:  call   08407296 <_ZN10DB_LoadEtc22LoadConditionEventInfoEP12SIG_LOAD_ETC>  ; DB_LoadEtc::LoadConditionEventInfo(SIG_LOAD_ETC*)
08403e55 +0x267:  mov    -0xc(%ebp),%eax
08403e58 +0x26a:  mov    %eax,0x4(%esp)
08403e5c +0x26e:  mov    0x8(%ebp),%eax
08403e5f +0x271:  mov    %eax,(%esp)
08403e62 +0x274:  call   084073aa <_ZN10DB_LoadEtc27LoadProperDungeonClearCountEP12SIG_LOAD_ETC>  ; DB_LoadEtc::LoadProperDungeonClearCount(SIG_LOAD_ETC*)
08403e67 +0x279:  mov    -0xc(%ebp),%eax
08403e6a +0x27c:  mov    %eax,0x4(%esp)
08403e6e +0x280:  mov    0x8(%ebp),%eax
08403e71 +0x283:  mov    %eax,(%esp)
08403e74 +0x286:  call   08406a6a <_ZN10DB_LoadEtc14LoadRedeemItemEP12SIG_LOAD_ETC>  ; DB_LoadEtc::LoadRedeemItem(SIG_LOAD_ETC*)
08403e79 +0x28b:  mov    -0xc(%ebp),%eax
08403e7c +0x28e:  mov    %eax,0x4(%esp)
08403e80 +0x292:  mov    0x8(%ebp),%eax
08403e83 +0x295:  mov    %eax,(%esp)
08403e86 +0x298:  call   08406cce <_ZN10DB_LoadEtc18LoadPvPMissionListEP12SIG_LOAD_ETC>  ; DB_LoadEtc::LoadPvPMissionList(SIG_LOAD_ETC*)
08403e8b +0x29d:  mov    -0xc(%ebp),%eax
08403e8e +0x2a0:  mov    %eax,0x4(%esp)
08403e92 +0x2a4:  mov    0x8(%ebp),%eax
08403e95 +0x2a7:  mov    %eax,(%esp)
08403e98 +0x2aa:  call   08406eec <_ZN10DB_LoadEtc16LoadTODUserStateEP12SIG_LOAD_ETC>  ; DB_LoadEtc::LoadTODUserState(SIG_LOAD_ETC*)
08403e9d +0x2af:  mov    -0xc(%ebp),%eax
08403ea0 +0x2b2:  mov    %eax,0x4(%esp)
08403ea4 +0x2b6:  mov    0x8(%ebp),%eax
08403ea7 +0x2b9:  mov    %eax,(%esp)
08403eaa +0x2bc:  call   0843f038 <_ZN10DB_LoadEtc21LoadVillageAttackInfoEP12SIG_LOAD_ETC>  ; DB_LoadEtc::LoadVillageAttackInfo(SIG_LOAD_ETC*)
08403eaf +0x2c1:  movl   $0x191,0x8(%esp)
08403eb7 +0x2c9:  mov    -0xc(%ebp),%eax
08403eba +0x2cc:  mov    %eax,0x4(%esp)
08403ebe +0x2d0:  mov    0x8(%ebp),%eax
08403ec1 +0x2d3:  mov    %eax,(%esp)
08403ec4 +0x2d6:  call   08405c6e <_ZN10DB_LoadEtc21LoadAccountFirstLoginEP12SIG_LOAD_ETCi>  ; DB_LoadEtc::LoadAccountFirstLogin(SIG_LOAD_ETC*, int)
08403ec9 +0x2db:  movl   $0x192,0x8(%esp)
08403ed1 +0x2e3:  mov    -0xc(%ebp),%eax
08403ed4 +0x2e6:  mov    %eax,0x4(%esp)
08403ed8 +0x2ea:  mov    0x8(%ebp),%eax
08403edb +0x2ed:  mov    %eax,(%esp)
08403ede +0x2f0:  call   08405c6e <_ZN10DB_LoadEtc21LoadAccountFirstLoginEP12SIG_LOAD_ETCi>  ; DB_LoadEtc::LoadAccountFirstLogin(SIG_LOAD_ETC*, int)
08403ee3 +0x2f5:  movl   $0x19c,0x8(%esp)
08403eeb +0x2fd:  mov    -0xc(%ebp),%eax
08403eee +0x300:  mov    %eax,0x4(%esp)
08403ef2 +0x304:  mov    0x8(%ebp),%eax
08403ef5 +0x307:  mov    %eax,(%esp)
08403ef8 +0x30a:  call   08405e0a <_ZN10DB_LoadEtc26LoadAccountFirstLoginDailyEP12SIG_LOAD_ETCi>  ; DB_LoadEtc::LoadAccountFirstLoginDaily(SIG_LOAD_ETC*, int)
08403efd +0x30f:  mov    -0xc(%ebp),%eax
08403f00 +0x312:  mov    %eax,0x4(%esp)
08403f04 +0x316:  mov    0x8(%ebp),%eax
08403f07 +0x319:  mov    %eax,(%esp)
08403f0a +0x31c:  call   08404290 <_ZN10DB_LoadEtc16LoadFairPvPScoreEP12SIG_LOAD_ETC>  ; DB_LoadEtc::LoadFairPvPScore(SIG_LOAD_ETC*)
08403f0f +0x321:  mov    -0xc(%ebp),%eax
08403f12 +0x324:  mov    %eax,0x4(%esp)
08403f16 +0x328:  mov    0x8(%ebp),%eax
08403f19 +0x32b:  mov    %eax,(%esp)
08403f1c +0x32e:  call   084040b4 <_ZN10DB_LoadEtc19LoadItemMakingSkillEP12SIG_LOAD_ETC>  ; DB_LoadEtc::LoadItemMakingSkill(SIG_LOAD_ETC*)
08403f21 +0x333:  xor    $0x1,%eax
08403f24 +0x336:  test   %al,%al
08403f26 +0x338:  je     08403f5e <+0x370>
08403f28 +0x33a:  movl   $"DB_LoadETC ERROR : LoadItemMakingSkill Fail",0x10(%esp)
08403f30 +0x342:  movl   $0x1566,0xc(%esp)
08403f38 +0x34a:  movl   $&_ZZN10DB_LoadEtc8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
08403f40 +0x352:  movl   $"DBThread.cpp",0x4(%esp)
08403f48 +0x35a:  movl   $0x1,(%esp)
08403f4f +0x361:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08403f54 +0x366:  mov    $0x0,%eax
08403f59 +0x36b:  jmp    084040ac <+0x4be>
08403f5e +0x370:  mov    -0xc(%ebp),%eax
08403f61 +0x373:  mov    %eax,0x4(%esp)
08403f65 +0x377:  mov    0x8(%ebp),%eax
08403f68 +0x37a:  mov    %eax,(%esp)
08403f6b +0x37d:  call   08404a68 <_ZN10DB_LoadEtc13LoadQuestShopEP12SIG_LOAD_ETC>  ; DB_LoadEtc::LoadQuestShop(SIG_LOAD_ETC*)
08403f70 +0x382:  mov    -0xc(%ebp),%eax
08403f73 +0x385:  mov    %eax,0x4(%esp)
08403f77 +0x389:  mov    0x8(%ebp),%eax
08403f7a +0x38c:  mov    %eax,(%esp)
08403f7d +0x38f:  call   08406092 <_ZN10DB_LoadEtc13LoadTitleBookEP12SIG_LOAD_ETC>  ; DB_LoadEtc::LoadTitleBook(SIG_LOAD_ETC*)
08403f82 +0x394:  mov    -0xc(%ebp),%eax
08403f85 +0x397:  mov    %eax,0x4(%esp)
08403f89 +0x39b:  mov    0x8(%ebp),%eax
08403f8c +0x39e:  mov    %eax,(%esp)
08403f8f +0x3a1:  call   08406422 <_ZN10DB_LoadEtc15LoadAchievementEP12SIG_LOAD_ETC>  ; DB_LoadEtc::LoadAchievement(SIG_LOAD_ETC*)
08403f94 +0x3a6:  mov    -0xc(%ebp),%eax
08403f97 +0x3a9:  mov    %eax,0x4(%esp)
08403f9b +0x3ad:  mov    0x8(%ebp),%eax
08403f9e +0x3b0:  mov    %eax,(%esp)
08403fa1 +0x3b3:  call   08406600 <_ZN10DB_LoadEtc24LoadOnceGiveAvengerTitleEP12SIG_LOAD_ETC>  ; DB_LoadEtc::LoadOnceGiveAvengerTitle(SIG_LOAD_ETC*)
08403fa6 +0x3b8:  mov    -0xc(%ebp),%eax
08403fa9 +0x3bb:  mov    %eax,0x4(%esp)
08403fad +0x3bf:  mov    0x8(%ebp),%eax
08403fb0 +0x3c2:  mov    %eax,(%esp)
08403fb3 +0x3c5:  call   0840838e <_ZN10DB_LoadEtc20LoadAuraAvatarOptionEP12SIG_LOAD_ETC>  ; DB_LoadEtc::LoadAuraAvatarOption(SIG_LOAD_ETC*)
08403fb8 +0x3ca:  mov    -0xc(%ebp),%eax
08403fbb +0x3cd:  mov    %eax,0xc(%esp)
08403fbf +0x3d1:  mov    0x10(%ebp),%eax
08403fc2 +0x3d4:  mov    %eax,0x8(%esp)
08403fc6 +0x3d8:  mov    0xc(%ebp),%eax
08403fc9 +0x3db:  mov    %eax,0x4(%esp)
08403fcd +0x3df:  mov    0x8(%ebp),%eax
08403fd0 +0x3e2:  mov    %eax,(%esp)
08403fd3 +0x3e5:  call   084084e0 <_ZN10DB_LoadEtc16LoadCharacOptionEiiP12SIG_LOAD_ETC>  ; DB_LoadEtc::LoadCharacOption(int, int, SIG_LOAD_ETC*)
08403fd8 +0x3ea:  mov    -0xc(%ebp),%eax
08403fdb +0x3ed:  mov    %eax,0x4(%esp)
08403fdf +0x3f1:  mov    0x8(%ebp),%eax
08403fe2 +0x3f4:  mov    %eax,(%esp)
08403fe5 +0x3f7:  call   08446d9e <_ZN10DB_LoadEtc15LoadBoosterGageEP12SIG_LOAD_ETC>  ; DB_LoadEtc::LoadBoosterGage(SIG_LOAD_ETC*)
08403fea +0x3fc:  mov    -0xc(%ebp),%eax
08403fed +0x3ff:  mov    %eax,0x4(%esp)
08403ff1 +0x403:  mov    0x8(%ebp),%eax
08403ff4 +0x406:  mov    %eax,(%esp)
08403ff7 +0x409:  call   084066ae <_ZN10DB_LoadEtc22LoadPcRoomPlayTimeInfoEP12SIG_LOAD_ETC>  ; DB_LoadEtc::LoadPcRoomPlayTimeInfo(SIG_LOAD_ETC*)
08403ffc +0x40e:  mov    -0xc(%ebp),%eax
08403fff +0x411:  mov    %eax,0x4(%esp)
08404003 +0x415:  mov    0x8(%ebp),%eax
08404006 +0x418:  mov    %eax,(%esp)
08404009 +0x41b:  call   08406810 <_ZN10DB_LoadEtc23LoadUsedGiftFatigueInfoEP12SIG_LOAD_ETC>  ; DB_LoadEtc::LoadUsedGiftFatigueInfo(SIG_LOAD_ETC*)
0840400e +0x420:  mov    -0xc(%ebp),%eax
08404011 +0x423:  mov    (%eax),%eax
08404013 +0x425:  mov    -0xc(%ebp),%edx
08404016 +0x428:  add    $&_ZL14gUnicodeBuffer+0xa56d,%edx
0840401c +0x42e:  mov    %eax,0x8(%esp)
08404020 +0x432:  mov    %edx,0x4(%esp)
08404024 +0x436:  mov    0x8(%ebp),%eax
08404027 +0x439:  mov    %eax,(%esp)
0840402a +0x43c:  call   08448944 <_ZN10DB_LoadEtc18LoadAttendanceInfoEP20SIG_ATTENDANCE_EVENTj>  ; DB_LoadEtc::LoadAttendanceInfo(SIG_ATTENDANCE_EVENT*, unsigned int)
0840402f +0x441:  mov    -0xc(%ebp),%eax
08404032 +0x444:  mov    %eax,0x4(%esp)
08404036 +0x448:  mov    0x8(%ebp),%eax
08404039 +0x44b:  mov    %eax,(%esp)
0840403c +0x44e:  call   0844a3b2 <_ZN10DB_LoadEtc18LoadComboSkillInfoEP12SIG_LOAD_ETC>  ; DB_LoadEtc::LoadComboSkillInfo(SIG_LOAD_ETC*)
08404041 +0x453:  mov    -0xc(%ebp),%eax
08404044 +0x456:  mov    %eax,0x4(%esp)
08404048 +0x45a:  mov    0x8(%ebp),%eax
0840404b +0x45d:  mov    %eax,(%esp)
0840404e +0x460:  call   0844a20a <_ZN10DB_LoadEtc20LoadSeriaRoomAniDecoEP12SIG_LOAD_ETC>  ; DB_LoadEtc::LoadSeriaRoomAniDeco(SIG_LOAD_ETC*)
08404053 +0x465:  mov    -0xc(%ebp),%eax
08404056 +0x468:  mov    %eax,0xc(%esp)
0840405a +0x46c:  mov    0x10(%ebp),%eax
0840405d +0x46f:  mov    %eax,0x8(%esp)
08404061 +0x473:  mov    0xc(%ebp),%eax
08404064 +0x476:  mov    %eax,0x4(%esp)
08404068 +0x47a:  mov    0x8(%ebp),%eax
0840406b +0x47d:  mov    %eax,(%esp)
0840406e +0x480:  call   08408766 <_ZN10DB_LoadEtc10SendResultEiiP12SIG_LOAD_ETC>  ; DB_LoadEtc::SendResult(int, int, SIG_LOAD_ETC*)
08404073 +0x485:  mov    %al,-0xd(%ebp)
08404076 +0x488:  movzbl -0xd(%ebp),%eax
0840407a +0x48c:  xor    $0x1,%eax
0840407d +0x48f:  test   %al,%al
0840407f +0x491:  je     08404088 <+0x49a>
08404081 +0x493:  mov    $0x0,%eax
08404086 +0x498:  jmp    084040ac <+0x4be>
08404088 +0x49a:  mov    -0xc(%ebp),%eax
0840408b +0x49d:  mov    0x4(%eax),%edx
0840408e +0x4a0:  mov    -0xc(%ebp),%eax
08404091 +0x4a3:  mov    (%eax),%eax
08404093 +0x4a5:  movl   $0x0,0x8(%esp)
0840409b +0x4ad:  mov    %edx,0x4(%esp)
0840409f +0x4b1:  mov    %eax,(%esp)
084040a2 +0x4b4:  call   083f9c7b <_ZN8WongWork11EventCommon19LoadCharacEventItemEjjj>  ; WongWork::EventCommon::LoadCharacEventItem(unsigned int, unsigned int, unsigned int)
084040a7 +0x4b9:  mov    $0x1,%eax
084040ac +0x4be:  add    $0x40,%esp
084040af +0x4c1:  pop    %ebx
084040b0 +0x4c2:  pop    %esi
084040b1 +0x4c3:  pop    %ebp
084040b2 +0x4c4:  ret
084040b3 +0x4c5:  nop
```

## 反编译 C

```c
// DB_LoadEtc::dispatch @ 0x8403bee

/* DB_LoadEtc::dispatch(int, int, Stream*) */

undefined4 __thiscall DB_LoadEtc::dispatch(DB_LoadEtc *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  DB_CreateCharac local_28 [4];
  cMyTrace local_24 [19];
  char local_11;
  SIG_LOAD_ETC *local_10;
  
  cVar1 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar1 == '\x01') {
    local_10 = Stream::GetOutBuffer<SIG_LOAD_ETC>(param_3);
    if (local_10 == (SIG_LOAD_ETC *)0x0) {
      uVar2 = 0;
    }
    else {
      GetUserRecord((SIG_LOAD_ETC *)this);
      iVar3 = GetUserPvp(this,local_10);
      if (iVar3 == 0) {
        iVar3 = GetUserPvpBase((SIG_LOAD_ETC *)this);
        if (iVar3 == -1) {
          PvpResultType::Clear((PvpResultType *)(local_10 + 0x340));
        }
        else if (iVar3 == 1) {
          *(undefined4 *)(local_10 + 0x350) = 0xffffffff;
        }
      }
      else if (iVar3 == 1) {
        DB_CreateCharac::DB_CreateCharac(local_28);
                    /* try { // try from 08403c97 to 08403c9b has its CatchHandler @ 08403c9e */
        DB_CreateCharac::CreatePvP(local_28,*(uint *)(local_10 + 4));
        DB_CreateCharac::~DB_CreateCharac(local_28);
      }
      else if (iVar3 == -1) {
        PvpResultType::Clear((PvpResultType *)(local_10 + 0x340));
      }
      cVar1 = LoadCharacItemStat(this,local_10);
      if (cVar1 == '\x01') {
        cVar1 = LoadLitmitItem((SIG_LOAD_ETC *)this);
        if (cVar1 == '\x01') {
          cVar1 = GetUserSkill(this,local_10);
          if (cVar1 != '\x01') {
            LogManager::logFormat
                      (1,"DBThread.cpp","virtual bool DB_LoadEtc::dispatch(int, int, Stream*)",
                       0x14e3,"DB_LoadETC ERROR : GetUserSkill Fail");
            *(undefined4 *)(local_10 + 8) = 1;
          }
          piVar4 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x71);
          cVar1 = (**(code **)(*piVar4 + 0x34))(piVar4,0);
          if (cVar1 != '\0') {
            LoadConditionEventInfo(this,local_10);
          }
          LoadProperDungeonClearCount(this,local_10);
          LoadRedeemItem(this,local_10);
          LoadPvPMissionList(this,local_10);
          LoadTODUserState(this,local_10);
          LoadVillageAttackInfo(this,local_10);
          LoadAccountFirstLogin(this,local_10,0x191);
          LoadAccountFirstLogin(this,local_10,0x192);
          LoadAccountFirstLoginDaily(this,local_10,0x19c);
          LoadFairPvPScore(this,local_10);
          cVar1 = LoadItemMakingSkill(this,local_10);
          if (cVar1 == '\x01') {
            LoadQuestShop(this,local_10);
            LoadTitleBook(this,local_10);
            LoadAchievement(this,local_10);
            LoadOnceGiveAvengerTitle(this,local_10);
            LoadAuraAvatarOption(this,local_10);
            LoadCharacOption((int)this,param_1,(SIG_LOAD_ETC *)param_2);
            LoadBoosterGage(this,local_10);
            LoadPcRoomPlayTimeInfo(this,local_10);
            LoadUsedGiftFatigueInfo(this,local_10);
            LoadAttendanceInfo(this,(SIG_ATTENDANCE_EVENT *)(local_10 + 0x14a99),*(uint *)local_10);
            LoadComboSkillInfo(this,local_10);
            LoadSeriaRoomAniDeco(this,local_10);
            local_11 = SendResult(this,param_1,param_2,local_10);
            if (local_11 == '\x01') {
              WongWork::EventCommon::LoadCharacEventItem
                        (*(uint *)local_10,*(uint *)(local_10 + 4),0);
              uVar2 = 1;
            }
            else {
              uVar2 = 0;
            }
          }
          else {
            LogManager::logFormat
                      (1,"DBThread.cpp","virtual bool DB_LoadEtc::dispatch(int, int, Stream*)",
                       0x1566,"DB_LoadETC ERROR : LoadItemMakingSkill Fail");
            uVar2 = 0;
          }
        }
        else {
          uVar2 = *(undefined4 *)(local_10 + 4);
          cMyTrace::cMyTrace(local_24,"virtual bool DB_LoadEtc::dispatch(int, int, Stream*)",0x14db,
                             0);
          cMyTrace::operator()(local_24,"LoadLimitItem middle fetch <charac:%d>",uVar2);
          uVar2 = 0;
        }
      }
      else {
        LogManager::logFormat
                  (1,"DBThread.cpp","virtual bool DB_LoadEtc::dispatch(int, int, Stream*)",0x14c6,
                   "DB_LoadETC ERROR : LoadCharacItemStat Fail");
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
