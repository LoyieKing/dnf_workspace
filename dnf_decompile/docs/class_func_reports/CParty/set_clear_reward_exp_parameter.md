# set_clear_reward_exp_parameter

`_ZN6CParty30set_clear_reward_exp_parameterEP5CUserjR27stClearRewardExpParameter_t`

`CParty::set_clear_reward_exp_parameter(CUser*, unsigned int, stClearRewardExpParameter_t&)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085adb00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085adb00  _ZN6CParty30set_clear_reward_exp_parameterEP5CUserjR27stClearRewardExpParameter_t
#           CParty::set_clear_reward_exp_parameter(CUser*, unsigned int, stClearRewardExpParameter_t&)
# range [0x085adb00, 0x085ae0d3]
085adb00 +0x000:  push   %ebp
085adb01 +0x001:  mov    %esp,%ebp
085adb03 +0x003:  push   %esi
085adb04 +0x004:  push   %ebx
085adb05 +0x005:  add    $0xffffff80,%esp
085adb08 +0x008:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085adb0d +0x00d:  mov    %eax,-0x38(%ebp)
085adb10 +0x010:  mov    0x8(%ebp),%eax
085adb13 +0x013:  add    $0xb24,%eax
085adb18 +0x018:  mov    %eax,(%esp)
085adb1b +0x01b:  call   0822d0d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2782>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2782
085adb20 +0x020:  mov    %eax,0x4(%esp)
085adb24 +0x024:  mov    -0x38(%ebp),%eax
085adb27 +0x027:  mov    %eax,(%esp)
085adb2a +0x02a:  call   0835f9f8 <_ZNK12CDataManager12find_dungeonEi>  ; CDataManager::find_dungeon(int) const
085adb2f +0x02f:  mov    %eax,-0x34(%ebp)
085adb32 +0x032:  mov    -0x38(%ebp),%eax
085adb35 +0x035:  add    $0x68,%eax
085adb38 +0x038:  mov    %eax,-0x30(%ebp)
085adb3b +0x03b:  cmpl   $0x0,-0x34(%ebp)
085adb3f +0x03f:  jne    085adb86 <+0x86>
085adb41 +0x041:  mov    0x8(%ebp),%eax
085adb44 +0x044:  add    $0xb24,%eax
085adb49 +0x049:  mov    %eax,(%esp)
085adb4c +0x04c:  call   0822d0d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2782>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2782
085adb51 +0x051:  mov    %eax,0x14(%esp)
085adb55 +0x055:  movl   $"Unknown Dungeon %d",0x10(%esp)
085adb5d +0x05d:  movl   $0x294a,0xc(%esp)
085adb65 +0x065:  movl   $&_ZZN6CParty30set_clear_reward_exp_parameterEP5CUserjR27stClearRewardExpParameter_tE19__PRETTY_FUNCTION__,0x8(%esp)
085adb6d +0x06d:  movl   $"party.cpp",0x4(%esp)
085adb75 +0x075:  movl   $0x1,(%esp)
085adb7c +0x07c:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085adb81 +0x081:  jmp    085ae0ca <+0x5ca>
085adb86 +0x086:  cmpl   $0x0,0xc(%ebp)
085adb8a +0x08a:  je     085ae0c9 <+0x5c9>
085adb90 +0x090:  mov    0x8(%ebp),%eax
085adb93 +0x093:  mov    %eax,(%esp)
085adb96 +0x096:  call   085acfde <_ZN6CParty15CalcAvatarBonusEv>  ; CParty::CalcAvatarBonus()
085adb9b +0x09b:  fstps  -0x2c(%ebp)
085adb9e +0x09e:  mov    $0x0,%eax
085adba3 +0x0a3:  mov    %eax,-0x28(%ebp)
085adba6 +0x0a6:  mov    $0x0,%eax
085adbab +0x0ab:  mov    %eax,-0x28(%ebp)
085adbae +0x0ae:  mov    &_ZN10GlobalData15s_event_managerE,%eax
085adbb3 +0x0b3:  movl   $0x8,0x4(%esp)
085adbbb +0x0bb:  mov    %eax,(%esp)
085adbbe +0x0be:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
085adbc3 +0x0c3:  mov    (%eax),%edx
085adbc5 +0x0c5:  add    $0x34,%edx
085adbc8 +0x0c8:  mov    (%edx),%ecx
085adbca +0x0ca:  mov    0xc(%ebp),%edx
085adbcd +0x0cd:  mov    %edx,0x4(%esp)
085adbd1 +0x0d1:  mov    %eax,(%esp)
085adbd4 +0x0d4:  call   *%ecx
085adbd6 +0x0d6:  test   %al,%al
085adbd8 +0x0d8:  je     085adc19 <+0x119>
085adbda +0x0da:  mov    &_ZN10GlobalData15s_event_managerE,%eax
085adbdf +0x0df:  movl   $0x8,0x4(%esp)
085adbe7 +0x0e7:  mov    %eax,(%esp)
085adbea +0x0ea:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
085adbef +0x0ef:  mov    %eax,(%esp)
085adbf2 +0x0f2:  call   0814aae4 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x883>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x883
085adbf7 +0x0f7:  mov    %eax,%ecx
085adbf9 +0x0f9:  mov    $0x51eb851f,%edx
085adbfe +0x0fe:  mov    %ecx,%eax
085adc00 +0x100:  imul   %edx
085adc02 +0x102:  sar    $0x5,%edx
085adc05 +0x105:  mov    %ecx,%eax
085adc07 +0x107:  sar    $0x1f,%eax
085adc0a +0x10a:  mov    %edx,%ecx
085adc0c +0x10c:  sub    %eax,%ecx
085adc0e +0x10e:  mov    %ecx,%eax
085adc10 +0x110:  mov    %eax,-0x60(%ebp)
085adc13 +0x113:  fildl  -0x60(%ebp)
085adc16 +0x116:  fstps  -0x28(%ebp)
085adc19 +0x119:  mov    $0x0,%eax
085adc1e +0x11e:  mov    %eax,-0x24(%ebp)
085adc21 +0x121:  mov    &_ZN10GlobalData15s_event_managerE,%eax
085adc26 +0x126:  movl   $0x3,0x4(%esp)
085adc2e +0x12e:  mov    %eax,(%esp)
085adc31 +0x131:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
085adc36 +0x136:  mov    (%eax),%edx
085adc38 +0x138:  add    $0x34,%edx
085adc3b +0x13b:  mov    (%edx),%edx
085adc3d +0x13d:  movl   $0x0,0x4(%esp)
085adc45 +0x145:  mov    %eax,(%esp)
085adc48 +0x148:  call   *%edx
085adc4a +0x14a:  test   %al,%al
085adc4c +0x14c:  je     085adc7c <+0x17c>
085adc4e +0x14e:  mov    &_ZN10GlobalData15s_event_managerE,%eax
085adc53 +0x153:  movl   $0x3,0x4(%esp)
085adc5b +0x15b:  mov    %eax,(%esp)
085adc5e +0x15e:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
085adc63 +0x163:  mov    %eax,(%esp)
085adc66 +0x166:  call   0814aad8 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x877>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x877
085adc6b +0x16b:  mov    %eax,-0x60(%ebp)
085adc6e +0x16e:  fildl  -0x60(%ebp)
085adc71 +0x171:  flds   ""
085adc77 +0x177:  fdivrp %st,%st(1)
085adc79 +0x179:  fstps  -0x24(%ebp)
085adc7c +0x17c:  mov    $0x0,%eax
085adc81 +0x181:  mov    %eax,-0x20(%ebp)
085adc84 +0x184:  mov    0xc(%ebp),%eax
085adc87 +0x187:  mov    %eax,(%esp)
085adc8a +0x18a:  call   085bfcf6 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1254>  ; global constructors keyed to CParty::cMember::cMember()+0x1254
085adc8f +0x18f:  test   %al,%al
085adc91 +0x191:  je     085adcb0 <+0x1b0>
085adc93 +0x193:  mov    0xc(%ebp),%eax
085adc96 +0x196:  mov    %eax,(%esp)
085adc99 +0x199:  call   08659cf0 <_ZN15CUserCharacInfo19EnablePeriodExpItemEv>  ; CUserCharacInfo::EnablePeriodExpItem()
085adc9e +0x19e:  test   %al,%al
085adca0 +0x1a0:  je     085adcb0 <+0x1b0>
085adca2 +0x1a2:  mov    0xc(%ebp),%eax
085adca5 +0x1a5:  mov    %eax,(%esp)
085adca8 +0x1a8:  call   085bfcca <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1228>  ; global constructors keyed to CParty::cMember::cMember()+0x1228
085adcad +0x1ad:  fstps  -0x20(%ebp)
085adcb0 +0x1b0:  mov    $0x0,%eax
085adcb5 +0x1b5:  mov    %eax,-0x1c(%ebp)
085adcb8 +0x1b8:  mov    0xc(%ebp),%eax
085adcbb +0x1bb:  mov    %eax,(%esp)
085adcbe +0x1be:  call   08110dc2 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x2d4>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x2d4
085adcc3 +0x1c3:  test   %eax,%eax
085adcc5 +0x1c5:  setne  %al
085adcc8 +0x1c8:  test   %al,%al
085adcca +0x1ca:  je     085adcf8 <+0x1f8>
085adccc +0x1cc:  mov    0xc(%ebp),%eax
085adccf +0x1cf:  mov    %eax,(%esp)
085adcd2 +0x1d2:  call   08110dc2 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x2d4>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x2d4
085adcd7 +0x1d7:  mov    %eax,0x4(%esp)
085adcdb +0x1db:  mov    0x8(%ebp),%eax
085adcde +0x1de:  mov    %eax,(%esp)
085adce1 +0x1e1:  call   085b67ca <_ZN6CParty19existSamePCRoomUserEj>  ; CParty::existSamePCRoomUser(unsigned int)
085adce6 +0x1e6:  test   %al,%al
085adce8 +0x1e8:  je     085adcf8 <+0x1f8>
085adcea +0x1ea:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085adcef +0x1ef:  mov    0x7d4(%eax),%eax
085adcf5 +0x1f5:  mov    %eax,-0x1c(%ebp)
085adcf8 +0x1f8:  mov    $0x0,%eax
085adcfd +0x1fd:  mov    %eax,-0x18(%ebp)
085add00 +0x200:  mov    0x8(%ebp),%eax
085add03 +0x203:  mov    %eax,(%esp)
085add06 +0x206:  call   085b9f50 <_ZN6CParty17IsReturnUserPartyEv>  ; CParty::IsReturnUserParty()
085add0b +0x20b:  test   %al,%al
085add0d +0x20d:  je     085add17 <+0x217>
085add0f +0x20f:  mov    $0x3e4ccccd,%eax
085add14 +0x214:  mov    %eax,-0x18(%ebp)
085add17 +0x217:  mov    0x14(%ebp),%eax
085add1a +0x21a:  mov    0x58(%eax),%eax
085add1d +0x21d:  mov    %eax,0x4(%esp)
085add21 +0x221:  mov    0x8(%ebp),%eax
085add24 +0x224:  mov    %eax,(%esp)
085add27 +0x227:  call   085ad9b4 <_ZN6CParty25calDeadUserDungeonPenaltyEi>  ; CParty::calDeadUserDungeonPenalty(int)
085add2c +0x22c:  mov    0x14(%ebp),%eax
085add2f +0x22f:  fstps  (%eax)
085add31 +0x231:  mov    0x14(%ebp),%eax
085add34 +0x234:  mov    0x5c(%eax),%eax
085add37 +0x237:  mov    %eax,0x4(%esp)
085add3b +0x23b:  mov    -0x30(%ebp),%eax
085add3e +0x23e:  mov    %eax,(%esp)
085add41 +0x241:  call   08a8c28c <_ZNK21ServerParameterScript17GetExpBonusWeightE15eRankBonusIndex>  ; ServerParameterScript::GetExpBonusWeight(eRankBonusIndex) const
085add46 +0x246:  mov    0x14(%ebp),%eax
085add49 +0x249:  fstps  0x4(%eax)
085add4c +0x24c:  mov    0x14(%ebp),%eax
085add4f +0x24f:  mov    -0x2c(%ebp),%edx
085add52 +0x252:  mov    %edx,0x8(%eax)
085add55 +0x255:  mov    0xc(%ebp),%eax
085add58 +0x258:  mov    %eax,0x4(%esp)
085add5c +0x25c:  mov    0x8(%ebp),%eax
085add5f +0x25f:  mov    %eax,(%esp)
085add62 +0x262:  call   085ad084 <_ZN6CParty17CalcCreatureBonusEP5CUser>  ; CParty::CalcCreatureBonus(CUser*)
085add67 +0x267:  mov    0x14(%ebp),%eax
085add6a +0x26a:  fstps  0xc(%eax)
085add6d +0x26d:  mov    0x14(%ebp),%eax
085add70 +0x270:  mov    -0x28(%ebp),%edx
085add73 +0x273:  mov    %edx,0x10(%eax)
085add76 +0x276:  mov    0x14(%ebp),%eax
085add79 +0x279:  mov    -0x24(%ebp),%edx
085add7c +0x27c:  mov    %edx,0x14(%eax)
085add7f +0x27f:  mov    &_ZN10GlobalData15s_event_managerE,%eax
085add84 +0x284:  movl   $0xf,0x4(%esp)
085add8c +0x28c:  mov    %eax,(%esp)
085add8f +0x28f:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
085add94 +0x294:  mov    %eax,-0x14(%ebp)
085add97 +0x297:  mov    -0x14(%ebp),%eax
085add9a +0x29a:  mov    (%eax),%eax
085add9c +0x29c:  add    $0x34,%eax
085add9f +0x29f:  mov    (%eax),%edx
085adda1 +0x2a1:  mov    -0x14(%ebp),%eax
085adda4 +0x2a4:  movl   $0x0,0x4(%esp)
085addac +0x2ac:  mov    %eax,(%esp)
085addaf +0x2af:  call   *%edx
085addb1 +0x2b1:  test   %al,%al
085addb3 +0x2b3:  je     085addd8 <+0x2d8>
085addb5 +0x2b5:  mov    0xc(%ebp),%eax
085addb8 +0x2b8:  mov    %eax,(%esp)
085addbb +0x2bb:  call   08110cba <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1cc>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1cc
085addc0 +0x2c0:  movzwl %ax,%eax
085addc3 +0x2c3:  mov    %eax,0x4(%esp)
085addc7 +0x2c7:  mov    -0x14(%ebp),%eax
085addca +0x2ca:  mov    %eax,(%esp)
085addcd +0x2cd:  call   0810a0ec <_ZNK20CBurningFatigueEvent15getBonusExpRateEt>  ; CBurningFatigueEvent::getBonusExpRate(unsigned short) const
085addd2 +0x2d2:  mov    0x14(%ebp),%edx
085addd5 +0x2d5:  mov    %eax,0x1c(%edx)
085addd8 +0x2d8:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085adddd +0x2dd:  mov    %eax,(%esp)
085adde0 +0x2e0:  call   0814a6f8 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x497>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x497
085adde5 +0x2e5:  mov    %eax,-0x10(%ebp)
085adde8 +0x2e8:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
085added +0x2ed:  mov    0x1a8(%eax),%eax
085addf3 +0x2f3:  cmp    $0x1,%eax
085addf6 +0x2f6:  je     085ade08 <+0x308>
085addf8 +0x2f8:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
085addfd +0x2fd:  mov    0x1a8(%eax),%eax
085ade03 +0x303:  cmp    $0x2,%eax
085ade06 +0x306:  jne    085ade0f <+0x30f>
085ade08 +0x308:  mov    $0x1,%eax
085ade0d +0x30d:  jmp    085ade14 <+0x314>
085ade0f +0x30f:  mov    $0x0,%eax
085ade14 +0x314:  test   %al,%al
085ade16 +0x316:  je     085ade50 <+0x350>
085ade18 +0x318:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
085ade1d +0x31d:  mov    %eax,(%esp)
085ade20 +0x320:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
085ade25 +0x325:  mov    %eax,%ebx
085ade27 +0x327:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
085ade2c +0x32c:  mov    0x378(%eax),%eax
085ade32 +0x332:  movzbl %al,%eax
085ade35 +0x335:  mov    %ebx,0x8(%esp)
085ade39 +0x339:  mov    %eax,0x4(%esp)
085ade3d +0x33d:  mov    -0x10(%ebp),%eax
085ade40 +0x340:  mov    %eax,(%esp)
085ade43 +0x343:  call   088dcee2 <_ZNK16channel_script_t23getBonusRateEventServerEhj>  ; channel_script_t::getBonusRateEventServer(unsigned char, unsigned int) const
085ade48 +0x348:  mov    0x14(%ebp),%eax
085ade4b +0x34b:  fstps  0x20(%eax)
085ade4e +0x34e:  jmp    085ade97 <+0x397>
085ade50 +0x350:  mov    -0x34(%ebp),%eax
085ade53 +0x353:  mov    %eax,(%esp)
085ade56 +0x356:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
085ade5b +0x35b:  mov    %eax,%esi
085ade5d +0x35d:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
085ade62 +0x362:  mov    %eax,(%esp)
085ade65 +0x365:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
085ade6a +0x36a:  mov    %eax,%ebx
085ade6c +0x36c:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
085ade71 +0x371:  mov    0x378(%eax),%eax
085ade77 +0x377:  movzbl %al,%eax
085ade7a +0x37a:  mov    %esi,0xc(%esp)
085ade7e +0x37e:  mov    %ebx,0x8(%esp)
085ade82 +0x382:  mov    %eax,0x4(%esp)
085ade86 +0x386:  mov    -0x10(%ebp),%eax
085ade89 +0x389:  mov    %eax,(%esp)
085ade8c +0x38c:  call   088dce3c <_ZNK16channel_script_t12getBonusRateEhjj>  ; channel_script_t::getBonusRate(unsigned char, unsigned int, unsigned int) const
085ade91 +0x391:  mov    0x14(%ebp),%eax
085ade94 +0x394:  fstps  0x20(%eax)
085ade97 +0x397:  mov    0xc(%ebp),%eax
085ade9a +0x39a:  mov    %eax,(%esp)
085ade9d +0x39d:  call   0812ce36 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0xb2>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0xb2
085adea2 +0x3a2:  test   %al,%al
085adea4 +0x3a4:  je     085adecd <+0x3cd>
085adea6 +0x3a6:  mov    0xc(%ebp),%eax
085adea9 +0x3a9:  mov    %eax,(%esp)
085adeac +0x3ac:  call   0812ce28 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0xa4>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0xa4
085adeb1 +0x3b1:  mov    %eax,(%esp)
085adeb4 +0x3b4:  call   0814aa08 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x7a7>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x7a7
085adeb9 +0x3b9:  mov    %eax,-0x60(%ebp)
085adebc +0x3bc:  fildl  -0x60(%ebp)
085adebf +0x3bf:  flds   ""
085adec5 +0x3c5:  fdivrp %st,%st(1)
085adec7 +0x3c7:  mov    0x14(%ebp),%eax
085adeca +0x3ca:  fstps  0x24(%eax)
085adecd +0x3cd:  call   0814a6e0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x47f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x47f
085aded2 +0x3d2:  mov    %eax,-0x60(%ebp)
085aded5 +0x3d5:  fildl  -0x60(%ebp)
085aded8 +0x3d8:  flds   ""
085adede +0x3de:  fdivrp %st,%st(1)
085adee0 +0x3e0:  mov    0x14(%ebp),%eax
085adee3 +0x3e3:  fstps  0x28(%eax)
085adee6 +0x3e6:  mov    &_ZN10GlobalData22s_globalEffectManager_E,%eax
085adeeb +0x3eb:  movl   $0x2,0x4(%esp)
085adef3 +0x3f3:  mov    %eax,(%esp)
085adef6 +0x3f6:  call   084b7d2c <_ZNK20CGlobalEffectManager16isAffectedEffectEj>  ; CGlobalEffectManager::isAffectedEffect(unsigned int) const
085adefb +0x3fb:  test   %al,%al
085adefd +0x3fd:  je     085adf1a <+0x41a>
085adeff +0x3ff:  mov    &_ZN10GlobalData22s_globalEffectManager_E,%eax
085adf04 +0x404:  movl   $0x2,0x4(%esp)
085adf0c +0x40c:  mov    %eax,(%esp)
085adf0f +0x40f:  call   084b7daa <_ZNK20CGlobalEffectManager14getEffectValueEj>  ; CGlobalEffectManager::getEffectValue(unsigned int) const
085adf14 +0x414:  mov    0x14(%ebp),%eax
085adf17 +0x417:  fstps  0x30(%eax)
085adf1a +0x41a:  mov    0x14(%ebp),%eax
085adf1d +0x41d:  mov    -0x1c(%ebp),%edx
085adf20 +0x420:  mov    %edx,0x34(%eax)
085adf23 +0x423:  mov    0x14(%ebp),%eax
085adf26 +0x426:  mov    -0x18(%ebp),%edx
085adf29 +0x429:  mov    %edx,0x38(%eax)
085adf2c +0x42c:  mov    0x8(%ebp),%eax
085adf2f +0x42f:  mov    %eax,(%esp)
085adf32 +0x432:  call   085b9fd4 <_ZN6CParty18IsEventCharacPartyEv>  ; CParty::IsEventCharacParty()
085adf37 +0x437:  test   %al,%al
085adf39 +0x439:  je     085adf6c <+0x46c>
085adf3b +0x43b:  mov    &_ZN10GlobalData15s_event_managerE,%eax
085adf40 +0x440:  movl   $0xa2,0x4(%esp)
085adf48 +0x448:  mov    %eax,(%esp)
085adf4b +0x44b:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
085adf50 +0x450:  mov    %eax,-0xc(%ebp)
085adf53 +0x453:  cmpl   $0x0,-0xc(%ebp)
085adf57 +0x457:  je     085adf77 <+0x477>
085adf59 +0x459:  mov    -0xc(%ebp),%eax
085adf5c +0x45c:  mov    %eax,(%esp)
085adf5f +0x45f:  call   0816bd06 <_ZN23EventNewCharacterReward13eventExpRatioEv>  ; EventNewCharacterReward::eventExpRatio()
085adf64 +0x464:  mov    0x14(%ebp),%eax
085adf67 +0x467:  fstps  0x48(%eax)
085adf6a +0x46a:  jmp    085adf77 <+0x477>
085adf6c +0x46c:  mov    0x14(%ebp),%eax
085adf6f +0x46f:  mov    $0x0,%edx
085adf74 +0x474:  mov    %edx,0x48(%eax)
085adf77 +0x477:  mov    0x10(%ebp),%eax
085adf7a +0x47a:  mov    %eax,0xc(%esp)
085adf7e +0x47e:  mov    0xc(%ebp),%eax
085adf81 +0x481:  mov    %eax,0x8(%esp)
085adf85 +0x485:  movl   $0x0,0x4(%esp)
085adf8d +0x48d:  mov    0x8(%ebp),%eax
085adf90 +0x490:  mov    %eax,(%esp)
085adf93 +0x493:  call   085ada30 <_ZN6CParty20CalcurateManageBonusEN15ManageBonusType1TEP5CUserj>  ; CParty::CalcurateManageBonus(ManageBonusType::T, CUser*, unsigned int)
085adf98 +0x498:  mov    0x14(%ebp),%eax
085adf9b +0x49b:  fstps  0x3c(%eax)
085adf9e +0x49e:  lea    -0x3c(%ebp),%eax
085adfa1 +0x4a1:  mov    %eax,(%esp)
085adfa4 +0x4a4:  call   085bed52 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x2b0>  ; global constructors keyed to CParty::cMember::cMember()+0x2b0
085adfa9 +0x4a9:  lea    -0x4c(%ebp),%eax
085adfac +0x4ac:  mov    0xc(%ebp),%edx
085adfaf +0x4af:  mov    %edx,0x4(%esp)
085adfb3 +0x4b3:  mov    %eax,(%esp)
085adfb6 +0x4b6:  call   0868dc64 <_ZN5CUser27get_growth_power_exp_rewardEv>  ; CUser::get_growth_power_exp_reward()
085adfbb +0x4bb:  sub    $0x4,%esp
085adfbe +0x4be:  mov    -0x4c(%ebp),%eax
085adfc1 +0x4c1:  mov    %eax,-0x3c(%ebp)
085adfc4 +0x4c4:  movzbl -0x3a(%ebp),%eax
085adfc8 +0x4c8:  movzbl %al,%eax
085adfcb +0x4cb:  mov    %ax,-0x5a(%ebp)
085adfcf +0x4cf:  filds  -0x5a(%ebp)
085adfd2 +0x4d2:  flds   ""
085adfd8 +0x4d8:  fdivrp %st,%st(1)
085adfda +0x4da:  mov    0x14(%ebp),%eax
085adfdd +0x4dd:  fstps  0x40(%eax)
085adfe0 +0x4e0:  movl   $0x4f,0x4(%esp)
085adfe8 +0x4e8:  mov    0xc(%ebp),%eax
085adfeb +0x4eb:  mov    %eax,(%esp)
085adfee +0x4ee:  call   080e600e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x144>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x144
085adff3 +0x4f3:  test   %al,%al
085adff5 +0x4f5:  je     085ae028 <+0x528>
085adff7 +0x4f7:  movl   $0x4f,0x4(%esp)
085adfff +0x4ff:  mov    0xc(%ebp),%eax
085ae002 +0x502:  mov    %eax,(%esp)
085ae005 +0x505:  call   085bfd76 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x12d4>  ; global constructors keyed to CParty::cMember::cMember()+0x12d4
085ae00a +0x50a:  mov    $0x0,%edx
085ae00f +0x50f:  mov    %eax,-0x58(%ebp)
085ae012 +0x512:  mov    %edx,-0x54(%ebp)
085ae015 +0x515:  fildll -0x58(%ebp)
085ae018 +0x518:  flds   ""
085ae01e +0x51e:  fdivrp %st,%st(1)
085ae020 +0x520:  mov    0x14(%ebp),%eax
085ae023 +0x523:  fstps  0x44(%eax)
085ae026 +0x526:  jmp    085ae033 <+0x533>
085ae028 +0x528:  mov    0x14(%ebp),%eax
085ae02b +0x52b:  mov    $0x0,%edx
085ae030 +0x530:  mov    %edx,0x44(%eax)
085ae033 +0x533:  mov    0x14(%ebp),%eax
085ae036 +0x536:  mov    -0x20(%ebp),%edx
085ae039 +0x539:  mov    %edx,0x2c(%eax)
085ae03c +0x53c:  mov    0x14(%ebp),%eax
085ae03f +0x53f:  flds   0x2c(%eax)
085ae042 +0x542:  fldz
085ae044 +0x544:  fxch   %st(1)
085ae046 +0x546:  fucompp
085ae048 +0x548:  fnstsw %ax
085ae04a +0x54a:  sahf
085ae04b +0x54b:  jp     085ae04f <+0x54f>
085ae04d +0x54d:  je     085ae067 <+0x567>
085ae04f +0x54f:  mov    &_ZN10GlobalData15s_event_managerE,%eax
085ae054 +0x554:  mov    %eax,(%esp)
085ae057 +0x557:  call   08116212 <_ZN13CEventManager30IsExistOverlappedExpBonusEventEv>  ; CEventManager::IsExistOverlappedExpBonusEvent()
085ae05c +0x55c:  test   %al,%al
085ae05e +0x55e:  je     085ae067 <+0x567>
085ae060 +0x560:  mov    $0x1,%eax
085ae065 +0x565:  jmp    085ae06c <+0x56c>
085ae067 +0x567:  mov    $0x0,%eax
085ae06c +0x56c:  test   %al,%al
085ae06e +0x56e:  je     085ae07b <+0x57b>
085ae070 +0x570:  mov    0x14(%ebp),%eax
085ae073 +0x573:  mov    $0x0,%edx
085ae078 +0x578:  mov    %edx,0x2c(%eax)
085ae07b +0x57b:  mov    0xc(%ebp),%eax
085ae07e +0x57e:  movl   $0x0,0x4(%esp)
085ae086 +0x586:  mov    %eax,(%esp)
085ae089 +0x589:  call   084699e6 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0xc9>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0xc9
085ae08e +0x58e:  mov    0xc(%ebp),%eax
085ae091 +0x591:  movl   $0x0,0x4(%esp)
085ae099 +0x599:  mov    %eax,(%esp)
085ae09c +0x59c:  call   08469a20 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x103>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x103
085ae0a1 +0x5a1:  mov    0xc(%ebp),%eax
085ae0a4 +0x5a4:  movl   $0x0,0x4(%esp)
085ae0ac +0x5ac:  mov    %eax,(%esp)
085ae0af +0x5af:  call   08469a02 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0xe5>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0xe5
085ae0b4 +0x5b4:  mov    0xc(%ebp),%eax
085ae0b7 +0x5b7:  movl   $0x0,0x4(%esp)
085ae0bf +0x5bf:  mov    %eax,(%esp)
085ae0c2 +0x5c2:  call   08469a3e <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x121>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x121
085ae0c7 +0x5c7:  jmp    085ae0ca <+0x5ca>
085ae0c9 +0x5c9:  nop
085ae0ca +0x5ca:  lea    -0x8(%ebp),%esp
085ae0cd +0x5cd:  add    $0x0,%esp
085ae0d0 +0x5d0:  pop    %ebx
085ae0d1 +0x5d1:  pop    %esi
085ae0d2 +0x5d2:  pop    %ebp
085ae0d3 +0x5d3:  ret
```

## 反编译 C

```c
// CParty::set_clear_reward_exp_parameter @ 0x85adb00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CParty::set_clear_reward_exp_parameter(CUser*, unsigned int, stClearRewardExpParameter_t&) */

void __thiscall
CParty::set_clear_reward_exp_parameter
          (CParty *this,CUser *param_1,uint param_2,stClearRewardExpParameter_t *param_3)

{
  bool bVar1;
  char cVar2;
  ushort uVar3;
  undefined4 uVar4;
  int *piVar5;
  CPCRoomBurningEvent *this_00;
  int iVar6;
  CExpDoubleEvent *this_01;
  uint uVar7;
  CDataManager *this_02;
  CEnvironment *pCVar8;
  uint uVar9;
  CUserPremium *this_03;
  longdouble lVar10;
  uint local_50;
  STExpReward local_40 [4];
  int local_3c;
  CDungeon *local_38;
  ServerParameterScript *local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  CBurningFatigueEvent *local_18;
  channel_script_t *local_14;
  EventNewCharacterReward *local_10;
  
  local_3c = G_CDataManager();
  CBattle_Field::get_dungeon_index((CBattle_Field *)(this + 0xb24));
  local_38 = (CDungeon *)CDataManager::find_dungeon(local_3c);
  local_34 = (ServerParameterScript *)(local_3c + 0x68);
  if (local_38 == (CDungeon *)0x0) {
    uVar4 = CBattle_Field::get_dungeon_index((CBattle_Field *)(this + 0xb24));
    LogManager::logFormat
              (1,"party.cpp",
               "void CParty::set_clear_reward_exp_parameter(CUser*, uint, stClearRewardExpParameter_t&)"
               ,0x294a,"Unknown Dungeon %d",uVar4);
  }
  else if (param_1 != (CUser *)0x0) {
    lVar10 = (longdouble)CalcAvatarBonus(this);
    local_30 = (float)lVar10;
    local_2c = 0.0;
    piVar5 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,8);
    cVar2 = (**(code **)(*piVar5 + 0x34))(piVar5,param_1);
    if (cVar2 != '\0') {
      this_00 = (CPCRoomBurningEvent *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,8);
      iVar6 = CPCRoomBurningEvent::GetExpFactor(this_00);
      local_2c = (float)(iVar6 / 100);
    }
    local_28 = 0.0;
    piVar5 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,3);
    cVar2 = (**(code **)(*piVar5 + 0x34))(piVar5,0);
    if (cVar2 != '\0') {
      this_01 = (CExpDoubleEvent *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,3);
      iVar6 = CExpDoubleEvent::GetExpFactor(this_01);
      local_28 = (float)iVar6 / _DAT_08cbbbcc;
    }
    local_24 = 0.0;
    cVar2 = CUserCharacInfo::IsExpItemAffected((CUserCharacInfo *)param_1);
    if ((cVar2 != '\0') &&
       (cVar2 = CUserCharacInfo::EnablePeriodExpItem((CUserCharacInfo *)param_1), cVar2 != '\0')) {
      lVar10 = (longdouble)CUserCharacInfo::GetExpAffectRate((CUserCharacInfo *)param_1);
      local_24 = (float)lVar10;
    }
    local_20 = 0;
    iVar6 = CUser::GetPCRoomNo(param_1);
    if (iVar6 != 0) {
      uVar7 = CUser::GetPCRoomNo(param_1);
      cVar2 = existSamePCRoomUser(this,uVar7);
      if (cVar2 != '\0') {
        iVar6 = G_CDataManager();
        local_20 = *(undefined4 *)(iVar6 + 0x7d4);
      }
    }
    local_1c = 0;
    cVar2 = IsReturnUserParty(this);
    if (cVar2 != '\0') {
      local_1c = 0x3e4ccccd;
    }
    lVar10 = (longdouble)calDeadUserDungeonPenalty(this,*(int *)(param_3 + 0x58));
    *(float *)param_3 = (float)lVar10;
    lVar10 = (longdouble)
             ServerParameterScript::GetExpBonusWeight(local_34,*(undefined4 *)(param_3 + 0x5c));
    *(float *)(param_3 + 4) = (float)lVar10;
    *(float *)(param_3 + 8) = local_30;
    lVar10 = (longdouble)CalcCreatureBonus(this,param_1);
    *(float *)(param_3 + 0xc) = (float)lVar10;
    *(float *)(param_3 + 0x10) = local_2c;
    *(float *)(param_3 + 0x14) = local_28;
    local_18 = (CBurningFatigueEvent *)
               CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0xf);
    cVar2 = (**(code **)(*(int *)local_18 + 0x34))(local_18,0);
    if (cVar2 != '\0') {
      uVar3 = CUserCharacInfo::getCurCharacUsedFatigue((CUserCharacInfo *)param_1);
      uVar4 = CBurningFatigueEvent::getBonusExpRate(local_18,uVar3);
      *(undefined4 *)(param_3 + 0x1c) = uVar4;
    }
    this_02 = (CDataManager *)G_CDataManager();
    local_14 = (channel_script_t *)CDataManager::GetChannelScript(this_02);
    iVar6 = G_CEnvironment();
    if ((*(int *)(iVar6 + 0x1a8) == 1) || (iVar6 = G_CEnvironment(), *(int *)(iVar6 + 0x1a8) == 2))
    {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      pCVar8 = (CEnvironment *)G_CEnvironment();
      uVar7 = CEnvironment::get_channel_no(pCVar8);
      iVar6 = G_CEnvironment();
      lVar10 = (longdouble)
               channel_script_t::getBonusRateEventServer
                         (local_14,(uchar)*(undefined4 *)(iVar6 + 0x378),uVar7);
      *(float *)(param_3 + 0x20) = (float)lVar10;
    }
    else {
      uVar7 = CDungeon::get_index(local_38);
      pCVar8 = (CEnvironment *)G_CEnvironment();
      uVar9 = CEnvironment::get_channel_no(pCVar8);
      iVar6 = G_CEnvironment();
      lVar10 = (longdouble)
               channel_script_t::getBonusRate
                         (local_14,(uchar)*(undefined4 *)(iVar6 + 0x378),uVar9,uVar7);
      *(float *)(param_3 + 0x20) = (float)lVar10;
    }
    cVar2 = CUser::IsHavePremiumAdvantage(param_1);
    if (cVar2 != '\0') {
      this_03 = (CUserPremium *)CUser::GetPremiumInfo(param_1);
      iVar6 = WongWork::CUserPremium::GetAdvantageExpRate(this_03);
      *(float *)(param_3 + 0x24) = (float)iVar6 / _DAT_08cbbbcc;
    }
    iVar6 = CServerEvent::GetExpRate();
    *(float *)(param_3 + 0x28) = (float)iVar6 / _DAT_08cbbbcc;
    cVar2 = CGlobalEffectManager::isAffectedEffect(GlobalData::s_globalEffectManager_,2);
    if (cVar2 != '\0') {
      lVar10 = (longdouble)
               CGlobalEffectManager::getEffectValue(GlobalData::s_globalEffectManager_,2);
      *(float *)(param_3 + 0x30) = (float)lVar10;
    }
    *(undefined4 *)(param_3 + 0x34) = local_20;
    *(undefined4 *)(param_3 + 0x38) = local_1c;
    cVar2 = IsEventCharacParty(this);
    if (cVar2 == '\0') {
      *(undefined4 *)(param_3 + 0x48) = 0;
    }
    else {
      local_10 = (EventNewCharacterReward *)
                 CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0xa2);
      if (local_10 != (EventNewCharacterReward *)0x0) {
        lVar10 = (longdouble)EventNewCharacterReward::eventExpRatio(local_10);
        *(float *)(param_3 + 0x48) = (float)lVar10;
      }
    }
    lVar10 = (longdouble)CalcurateManageBonus(this,0,param_1,param_2);
    *(float *)(param_3 + 0x3c) = (float)lVar10;
    STExpReward::STExpReward(local_40);
    CUser::get_growth_power_exp_reward();
    *(float *)(param_3 + 0x40) = (float)(local_50 >> 0x10 & 0xff) / _DAT_08cbbbcc;
    cVar2 = CUser::isAffectedPremium(param_1,0x4f);
    if (cVar2 == '\0') {
      *(undefined4 *)(param_3 + 0x44) = 0;
    }
    else {
      uVar7 = CUser::getAddExpRateFromPremium(param_1,0x4f);
      *(float *)(param_3 + 0x44) = (float)uVar7 / _DAT_08cbbbcc;
    }
    *(float *)(param_3 + 0x2c) = local_24;
    if ((*(float *)(param_3 + 0x2c) == 0.0) ||
       (cVar2 = CEventManager::IsExistOverlappedExpBonusEvent(), cVar2 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      *(undefined4 *)(param_3 + 0x2c) = 0;
    }
    CUserCharacInfo::set_charac_party_bonus_exp((CUserCharacInfo *)param_1,0);
    CUserCharacInfo::set_charac_member_bonus_exp((CUserCharacInfo *)param_1,0);
    CUserCharacInfo::set_charac_fatigue_buf_bonus_exp((CUserCharacInfo *)param_1,0);
    CUserCharacInfo::set_charac_seria_buf_bonus_exp((CUserCharacInfo *)param_1,0);
  }
  return;
}
```
