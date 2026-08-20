# OnRequestAssault

`_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi`

`pvp_assault::CAssaultMgr::OnRequestAssault(CUser*, CUser*, int*)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultMgr` | `0x082edfba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082edfba  _ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi
#           pvp_assault::CAssaultMgr::OnRequestAssault(CUser*, CUser*, int*)
# range [0x082edfba, 0x082ef175]
082edfba +0x0000:  push   %ebp
082edfbb +0x0001:  mov    %esp,%ebp
082edfbd +0x0003:  push   %edi
082edfbe +0x0004:  push   %esi
082edfbf +0x0005:  push   %ebx
082edfc0 +0x0006:  sub    $0xdc,%esp
082edfc6 +0x000c:  movl   $0x0,-0x94(%ebp)
082edfd0 +0x0016:  movl   $0x0,-0x98(%ebp)
082edfda +0x0020:  movl   $0x0,-0x9c(%ebp)
082edfe4 +0x002a:  mov    0xc(%ebp),%eax
082edfe7 +0x002d:  mov    %eax,(%esp)
082edfea +0x0030:  call   0868e9c0 <_ZNK5CUser22isCompetitionMercenaryEv>  ; CUser::isCompetitionMercenary() const
082edfef +0x0035:  test   %al,%al
082edff1 +0x0037:  je     082ee01f <+0x65>
082edff3 +0x0039:  movl   $0x4,(%esp)
082edffa +0x0040:  call   08725800 <__cxa_allocate_exception>
082edfff +0x0045:  mov    %eax,%edx
082ee001 +0x0047:  movl   $0xea,(%edx)
082ee007 +0x004d:  movl   $0x0,0x8(%esp)
082ee00f +0x0055:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082ee017 +0x005d:  mov    %eax,(%esp)
082ee01a +0x0060:  call   08724c50 <__cxa_throw>
082ee01f +0x0065:  mov    0x10(%ebp),%eax
082ee022 +0x0068:  mov    %eax,(%esp)
082ee025 +0x006b:  call   0868e9c0 <_ZNK5CUser22isCompetitionMercenaryEv>  ; CUser::isCompetitionMercenary() const
082ee02a +0x0070:  test   %al,%al
082ee02c +0x0072:  je     082ee05a <+0xa0>
082ee02e +0x0074:  movl   $0x4,(%esp)
082ee035 +0x007b:  call   08725800 <__cxa_allocate_exception>
082ee03a +0x0080:  mov    %eax,%edx
082ee03c +0x0082:  movl   $0x15,(%edx)
082ee042 +0x0088:  movl   $0x0,0x8(%esp)
082ee04a +0x0090:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082ee052 +0x0098:  mov    %eax,(%esp)
082ee055 +0x009b:  call   08724c50 <__cxa_throw>
082ee05a +0x00a0:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082ee05f +0x00a5:  mov    %eax,(%esp)
082ee062 +0x00a8:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
082ee067 +0x00ad:  xor    $0x1,%eax
082ee06a +0x00b0:  test   %al,%al
082ee06c +0x00b2:  je     082ee0e8 <+0x12e>
082ee06e +0x00b4:  mov    0xc(%ebp),%eax
082ee071 +0x00b7:  mov    %eax,(%esp)
082ee074 +0x00ba:  call   0868ef60 <_ZN15CUserCharacInfo27GetCurCharacAssaultedUserIdEv>  ; CUserCharacInfo::GetCurCharacAssaultedUserId()
082ee079 +0x00bf:  mov    %eax,%ebx
082ee07b +0x00c1:  mov    0x10(%ebp),%eax
082ee07e +0x00c4:  mov    %eax,(%esp)
082ee081 +0x00c7:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
082ee086 +0x00cc:  cmp    %ax,%bx
082ee089 +0x00cf:  setne  %al
082ee08c +0x00d2:  test   %al,%al
082ee08e +0x00d4:  je     082ee0e8 <+0x12e>
082ee090 +0x00d6:  movl   $"CAssaultMgr::OnRequestAssault ERROR - pAssaultedUser Unique ID is invalid",0x10(%esp)
082ee098 +0x00de:  movl   $0x1291,0xc(%esp)
082ee0a0 +0x00e6:  movl   $&_ZZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_PiE19__PRETTY_FUNCTION__,0x8(%esp)
082ee0a8 +0x00ee:  movl   $"Assault.cpp",0x4(%esp)
082ee0b0 +0x00f6:  movl   $0x1,(%esp)
082ee0b7 +0x00fd:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
082ee0bc +0x0102:  movl   $0x4,(%esp)
082ee0c3 +0x0109:  call   08725800 <__cxa_allocate_exception>
082ee0c8 +0x010e:  mov    %eax,%edx
082ee0ca +0x0110:  movl   $0x13,(%edx)
082ee0d0 +0x0116:  movl   $0x0,0x8(%esp)
082ee0d8 +0x011e:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082ee0e0 +0x0126:  mov    %eax,(%esp)
082ee0e3 +0x0129:  call   08724c50 <__cxa_throw>
082ee0e8 +0x012e:  movb   $0x0,-0x9d(%ebp)
082ee0ef +0x0135:  lea    -0x9d(%ebp),%eax
082ee0f5 +0x013b:  mov    %eax,0x4(%esp)
082ee0f9 +0x013f:  mov    0xc(%ebp),%eax
082ee0fc +0x0142:  mov    %eax,(%esp)
082ee0ff +0x0145:  call   085d137c <_ZN10expert_job10CAlchemist17GetAssaultPreventEP5CUserPb>  ; expert_job::CAlchemist::GetAssaultPrevent(CUser*, bool*)
082ee104 +0x014a:  test   %al,%al
082ee106 +0x014c:  je     082ee1fb <+0x241>
082ee10c +0x0152:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082ee111 +0x0157:  mov    %eax,(%esp)
082ee114 +0x015a:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
082ee119 +0x015f:  test   %al,%al
082ee11b +0x0161:  je     082ee198 <+0x1de>
082ee11d +0x0163:  mov    0xc(%ebp),%eax
082ee120 +0x0166:  mov    %eax,(%esp)
082ee123 +0x0169:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
082ee128 +0x016e:  cmp    $0x7,%al
082ee12a +0x0170:  setne  %al
082ee12d +0x0173:  test   %al,%al
082ee12f +0x0175:  je     082ee1fb <+0x241>
082ee135 +0x017b:  movzbl -0x9d(%ebp),%eax
082ee13c +0x0182:  test   %al,%al
082ee13e +0x0184:  je     082ee16c <+0x1b2>
082ee140 +0x0186:  movl   $0x4,(%esp)
082ee147 +0x018d:  call   08725800 <__cxa_allocate_exception>
082ee14c +0x0192:  mov    %eax,%edx
082ee14e +0x0194:  movl   $0xfd,(%edx)
082ee154 +0x019a:  movl   $0x0,0x8(%esp)
082ee15c +0x01a2:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082ee164 +0x01aa:  mov    %eax,(%esp)
082ee167 +0x01ad:  call   08724c50 <__cxa_throw>
082ee16c +0x01b2:  movl   $0x4,(%esp)
082ee173 +0x01b9:  call   08725800 <__cxa_allocate_exception>
082ee178 +0x01be:  mov    %eax,%edx
082ee17a +0x01c0:  movl   $0xfb,(%edx)
082ee180 +0x01c6:  movl   $0x0,0x8(%esp)
082ee188 +0x01ce:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082ee190 +0x01d6:  mov    %eax,(%esp)
082ee193 +0x01d9:  call   08724c50 <__cxa_throw>
082ee198 +0x01de:  movzbl -0x9d(%ebp),%eax
082ee19f +0x01e5:  test   %al,%al
082ee1a1 +0x01e7:  je     082ee1cf <+0x215>
082ee1a3 +0x01e9:  movl   $0x4,(%esp)
082ee1aa +0x01f0:  call   08725800 <__cxa_allocate_exception>
082ee1af +0x01f5:  mov    %eax,%edx
082ee1b1 +0x01f7:  movl   $0xfd,(%edx)
082ee1b7 +0x01fd:  movl   $0x0,0x8(%esp)
082ee1bf +0x0205:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082ee1c7 +0x020d:  mov    %eax,(%esp)
082ee1ca +0x0210:  call   08724c50 <__cxa_throw>
082ee1cf +0x0215:  movl   $0x4,(%esp)
082ee1d6 +0x021c:  call   08725800 <__cxa_allocate_exception>
082ee1db +0x0221:  mov    %eax,%edx
082ee1dd +0x0223:  movl   $0xfb,(%edx)
082ee1e3 +0x0229:  movl   $0x0,0x8(%esp)
082ee1eb +0x0231:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082ee1f3 +0x0239:  mov    %eax,(%esp)
082ee1f6 +0x023c:  call   08724c50 <__cxa_throw>
082ee1fb +0x0241:  mov    &_ZN10GlobalData19s_villageMonsterMgrE,%eax
082ee200 +0x0246:  mov    %eax,(%esp)
082ee203 +0x0249:  call   082f0f44 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0xcc8>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0xcc8
082ee208 +0x024e:  test   %al,%al
082ee20a +0x0250:  je     082ee238 <+0x27e>
082ee20c +0x0252:  movl   $0x4,(%esp)
082ee213 +0x0259:  call   08725800 <__cxa_allocate_exception>
082ee218 +0x025e:  mov    %eax,%edx
082ee21a +0x0260:  movl   $0xd9,(%edx)
082ee220 +0x0266:  movl   $0x0,0x8(%esp)
082ee228 +0x026e:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082ee230 +0x0276:  mov    %eax,(%esp)
082ee233 +0x0279:  call   08724c50 <__cxa_throw>
082ee238 +0x027e:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082ee23d +0x0283:  mov    %eax,(%esp)
082ee240 +0x0286:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
082ee245 +0x028b:  test   %al,%al
082ee247 +0x028d:  je     082ee265 <+0x2ab>
082ee249 +0x028f:  mov    0xc(%ebp),%eax
082ee24c +0x0292:  mov    %eax,(%esp)
082ee24f +0x0295:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
082ee254 +0x029a:  cmp    $0x7,%al
082ee256 +0x029c:  jne    082ee265 <+0x2ab>
082ee258 +0x029e:  cmpl   $0x0,0x14(%ebp)
082ee25c +0x02a2:  jne    082ee265 <+0x2ab>
082ee25e +0x02a4:  mov    $0x1,%eax
082ee263 +0x02a9:  jmp    082ee26a <+0x2b0>
082ee265 +0x02ab:  mov    $0x0,%eax
082ee26a +0x02b0:  test   %al,%al
082ee26c +0x02b2:  je     082ee283 <+0x2c9>
082ee26e +0x02b4:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082ee273 +0x02b9:  mov    %eax,(%esp)
082ee276 +0x02bc:  call   082f0906 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x68a>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x68a
082ee27b +0x02c1:  mov    %eax,(%esp)
082ee27e +0x02c4:  call   082f082a <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x5ae>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x5ae
082ee283 +0x02c9:  mov    &_ZN10GlobalData15s_event_managerE,%eax
082ee288 +0x02ce:  movl   $0x2a,0x4(%esp)
082ee290 +0x02d6:  mov    %eax,(%esp)
082ee293 +0x02d9:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
082ee298 +0x02de:  mov    (%eax),%edx
082ee29a +0x02e0:  add    $0x34,%edx
082ee29d +0x02e3:  mov    (%edx),%edx
082ee29f +0x02e5:  movl   $0x0,0x4(%esp)
082ee2a7 +0x02ed:  mov    %eax,(%esp)
082ee2aa +0x02f0:  call   *%edx
082ee2ac +0x02f2:  test   %al,%al
082ee2ae +0x02f4:  je     082ee2dc <+0x322>
082ee2b0 +0x02f6:  movl   $0x4,(%esp)
082ee2b7 +0x02fd:  call   08725800 <__cxa_allocate_exception>
082ee2bc +0x0302:  mov    %eax,%edx
082ee2be +0x0304:  movl   $0xb2,(%edx)
082ee2c4 +0x030a:  movl   $0x0,0x8(%esp)
082ee2cc +0x0312:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082ee2d4 +0x031a:  mov    %eax,(%esp)
082ee2d7 +0x031d:  call   08724c50 <__cxa_throw>
082ee2dc +0x0322:  mov    0xc(%ebp),%eax
082ee2df +0x0325:  mov    %eax,(%esp)
082ee2e2 +0x0328:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
082ee2e7 +0x032d:  cmp    $0x8,%al
082ee2e9 +0x032f:  sete   %al
082ee2ec +0x0332:  test   %al,%al
082ee2ee +0x0334:  je     082ee31c <+0x362>
082ee2f0 +0x0336:  movl   $0x4,(%esp)
082ee2f7 +0x033d:  call   08725800 <__cxa_allocate_exception>
082ee2fc +0x0342:  mov    %eax,%edx
082ee2fe +0x0344:  movl   $0x13,(%edx)
082ee304 +0x034a:  movl   $0x0,0x8(%esp)
082ee30c +0x0352:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082ee314 +0x035a:  mov    %eax,(%esp)
082ee317 +0x035d:  call   08724c50 <__cxa_throw>
082ee31c +0x0362:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082ee321 +0x0367:  mov    %eax,(%esp)
082ee324 +0x036a:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
082ee329 +0x036f:  test   %al,%al
082ee32b +0x0371:  je     082ee4f4 <+0x53a>
082ee331 +0x0377:  mov    0xc(%ebp),%eax
082ee334 +0x037a:  mov    %eax,(%esp)
082ee337 +0x037d:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
082ee33c +0x0382:  cmp    $0x7,%al
082ee33e +0x0384:  sete   %al
082ee341 +0x0387:  test   %al,%al
082ee343 +0x0389:  je     082ee4c8 <+0x50e>
082ee349 +0x038f:  movl   $0x0,0x4(%esp)
082ee351 +0x0397:  mov    0xc(%ebp),%eax
082ee354 +0x039a:  mov    %eax,(%esp)
082ee357 +0x039d:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
082ee35c +0x03a2:  mov    %eax,%ebx
082ee35e +0x03a4:  mov    0xc(%ebp),%eax
082ee361 +0x03a7:  mov    %eax,(%esp)
082ee364 +0x03aa:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
082ee369 +0x03af:  movsbl %al,%edi
082ee36c +0x03b2:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
082ee371 +0x03b7:  mov    %ebx,0x8(%esp)
082ee375 +0x03bb:  mov    %edi,0x4(%esp)
082ee379 +0x03bf:  mov    %eax,(%esp)
082ee37c +0x03c2:  call   086c59de <_ZN9GameWorld18IsPowerWarSafeZoneEii>  ; GameWorld::IsPowerWarSafeZone(int, int)
082ee381 +0x03c7:  test   %al,%al
082ee383 +0x03c9:  je     082ee3b1 <+0x3f7>
082ee385 +0x03cb:  movl   $0x4,(%esp)
082ee38c +0x03d2:  call   08725800 <__cxa_allocate_exception>
082ee391 +0x03d7:  mov    %eax,%edx
082ee393 +0x03d9:  movl   $0x13,(%edx)
082ee399 +0x03df:  movl   $0x0,0x8(%esp)
082ee3a1 +0x03e7:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082ee3a9 +0x03ef:  mov    %eax,(%esp)
082ee3ac +0x03f2:  call   08724c50 <__cxa_throw>
082ee3b1 +0x03f7:  mov    0xc(%ebp),%eax
082ee3b4 +0x03fa:  mov    %eax,(%esp)
082ee3b7 +0x03fd:  call   0822fcc6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5370>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5370
082ee3bc +0x0402:  mov    %eax,%ebx
082ee3be +0x0404:  mov    0x10(%ebp),%eax
082ee3c1 +0x0407:  mov    %eax,(%esp)
082ee3c4 +0x040a:  call   0822fcc6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5370>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5370
082ee3c9 +0x040f:  cmp    %al,%bl
082ee3cb +0x0411:  je     082ee3eb <+0x431>
082ee3cd +0x0413:  mov    0xc(%ebp),%eax
082ee3d0 +0x0416:  mov    %eax,(%esp)
082ee3d3 +0x0419:  call   082f09a0 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x724>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x724
082ee3d8 +0x041e:  test   %al,%al
082ee3da +0x0420:  je     082ee3eb <+0x431>
082ee3dc +0x0422:  mov    0x10(%ebp),%eax
082ee3df +0x0425:  mov    %eax,(%esp)
082ee3e2 +0x0428:  call   082f09a0 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x724>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x724
082ee3e7 +0x042d:  test   %al,%al
082ee3e9 +0x042f:  jne    082ee3f2 <+0x438>
082ee3eb +0x0431:  mov    $0x1,%eax
082ee3f0 +0x0436:  jmp    082ee3f7 <+0x43d>
082ee3f2 +0x0438:  mov    $0x0,%eax
082ee3f7 +0x043d:  test   %al,%al
082ee3f9 +0x043f:  je     082ee427 <+0x46d>
082ee3fb +0x0441:  movl   $0x4,(%esp)
082ee402 +0x0448:  call   08725800 <__cxa_allocate_exception>
082ee407 +0x044d:  mov    %eax,%edx
082ee409 +0x044f:  movl   $0x13,(%edx)
082ee40f +0x0455:  movl   $0x0,0x8(%esp)
082ee417 +0x045d:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082ee41f +0x0465:  mov    %eax,(%esp)
082ee422 +0x0468:  call   08724c50 <__cxa_throw>
082ee427 +0x046d:  mov    0xc(%ebp),%eax
082ee42a +0x0470:  mov    %eax,(%esp)
082ee42d +0x0473:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
082ee432 +0x0478:  mov    %eax,-0x30(%ebp)
082ee435 +0x047b:  cmpl   $0x0,-0x30(%ebp)
082ee439 +0x047f:  je     082ee454 <+0x49a>
082ee43b +0x0481:  mov    -0x30(%ebp),%eax
082ee43e +0x0484:  mov    %eax,(%esp)
082ee441 +0x0487:  call   0859a318 <_ZN6CParty28CanDoPartyActionAssalutStateEv>  ; CParty::CanDoPartyActionAssalutState()
082ee446 +0x048c:  xor    $0x1,%eax
082ee449 +0x048f:  test   %al,%al
082ee44b +0x0491:  je     082ee454 <+0x49a>
082ee44d +0x0493:  mov    $0x1,%eax
082ee452 +0x0498:  jmp    082ee459 <+0x49f>
082ee454 +0x049a:  mov    $0x0,%eax
082ee459 +0x049f:  test   %al,%al
082ee45b +0x04a1:  je     082ee489 <+0x4cf>
082ee45d +0x04a3:  movl   $0x4,(%esp)
082ee464 +0x04aa:  call   08725800 <__cxa_allocate_exception>
082ee469 +0x04af:  mov    %eax,%edx
082ee46b +0x04b1:  movl   $0x13,(%edx)
082ee471 +0x04b7:  movl   $0x0,0x8(%esp)
082ee479 +0x04bf:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082ee481 +0x04c7:  mov    %eax,(%esp)
082ee484 +0x04ca:  call   08724c50 <__cxa_throw>
082ee489 +0x04cf:  mov    0x10(%ebp),%eax
082ee48c +0x04d2:  mov    %eax,(%esp)
082ee48f +0x04d5:  call   0822f6f4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4d9e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4d9e
082ee494 +0x04da:  test   %al,%al
082ee496 +0x04dc:  je     082ee534 <+0x57a>
082ee49c +0x04e2:  movl   $0x4,(%esp)
082ee4a3 +0x04e9:  call   08725800 <__cxa_allocate_exception>
082ee4a8 +0x04ee:  mov    %eax,%edx
082ee4aa +0x04f0:  movl   $0x13,(%edx)
082ee4b0 +0x04f6:  movl   $0x0,0x8(%esp)
082ee4b8 +0x04fe:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082ee4c0 +0x0506:  mov    %eax,(%esp)
082ee4c3 +0x0509:  call   08724c50 <__cxa_throw>
082ee4c8 +0x050e:  movl   $0x4,(%esp)
082ee4cf +0x0515:  call   08725800 <__cxa_allocate_exception>
082ee4d4 +0x051a:  mov    %eax,%edx
082ee4d6 +0x051c:  movl   $0xfc,(%edx)
082ee4dc +0x0522:  movl   $0x0,0x8(%esp)
082ee4e4 +0x052a:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082ee4ec +0x0532:  mov    %eax,(%esp)
082ee4ef +0x0535:  call   08724c50 <__cxa_throw>
082ee4f4 +0x053a:  mov    0xc(%ebp),%eax
082ee4f7 +0x053d:  mov    %eax,(%esp)
082ee4fa +0x0540:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
082ee4ff +0x0545:  cmp    $0x7,%al
082ee501 +0x0547:  sete   %al
082ee504 +0x054a:  test   %al,%al
082ee506 +0x054c:  je     082ee534 <+0x57a>
082ee508 +0x054e:  movl   $0x4,(%esp)
082ee50f +0x0555:  call   08725800 <__cxa_allocate_exception>
082ee514 +0x055a:  mov    %eax,%edx
082ee516 +0x055c:  movl   $0x13,(%edx)
082ee51c +0x0562:  movl   $0x0,0x8(%esp)
082ee524 +0x056a:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082ee52c +0x0572:  mov    %eax,(%esp)
082ee52f +0x0575:  call   08724c50 <__cxa_throw>
082ee534 +0x057a:  movl   $0x0,0x4(%esp)
082ee53c +0x0582:  mov    0x10(%ebp),%eax
082ee53f +0x0585:  mov    %eax,(%esp)
082ee542 +0x0588:  call   085d137c <_ZN10expert_job10CAlchemist17GetAssaultPreventEP5CUserPb>  ; expert_job::CAlchemist::GetAssaultPrevent(CUser*, bool*)
082ee547 +0x058d:  test   %al,%al
082ee549 +0x058f:  je     082ee566 <+0x5ac>
082ee54b +0x0591:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082ee550 +0x0596:  mov    %eax,(%esp)
082ee553 +0x0599:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
082ee558 +0x059e:  xor    $0x1,%eax
082ee55b +0x05a1:  test   %al,%al
082ee55d +0x05a3:  je     082ee566 <+0x5ac>
082ee55f +0x05a5:  mov    $0x1,%eax
082ee564 +0x05aa:  jmp    082ee56b <+0x5b1>
082ee566 +0x05ac:  mov    $0x0,%eax
082ee56b +0x05b1:  test   %al,%al
082ee56d +0x05b3:  je     082ee59b <+0x5e1>
082ee56f +0x05b5:  movl   $0x4,(%esp)
082ee576 +0x05bc:  call   08725800 <__cxa_allocate_exception>
082ee57b +0x05c1:  mov    %eax,%edx
082ee57d +0x05c3:  movl   $0x11,(%edx)
082ee583 +0x05c9:  movl   $0x0,0x8(%esp)
082ee58b +0x05d1:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082ee593 +0x05d9:  mov    %eax,(%esp)
082ee596 +0x05dc:  call   08724c50 <__cxa_throw>
082ee59b +0x05e1:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
082ee5a0 +0x05e6:  mov    0x378(%eax),%eax
082ee5a6 +0x05ec:  cmp    $0x3,%eax
082ee5a9 +0x05ef:  sete   %al
082ee5ac +0x05f2:  test   %al,%al
082ee5ae +0x05f4:  je     082ee610 <+0x656>
082ee5b0 +0x05f6:  mov    0x10(%ebp),%eax
082ee5b3 +0x05f9:  mov    %eax,(%esp)
082ee5b6 +0x05fc:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
082ee5bb +0x0601:  cmp    $0x1eaa0d,%eax
082ee5c0 +0x0606:  je     082ee5d4 <+0x61a>
082ee5c2 +0x0608:  mov    0x10(%ebp),%eax
082ee5c5 +0x060b:  mov    %eax,(%esp)
082ee5c8 +0x060e:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
082ee5cd +0x0613:  cmp    $0x2c55a8,%eax
082ee5d2 +0x0618:  jne    082ee5db <+0x621>
082ee5d4 +0x061a:  mov    $0x1,%eax
082ee5d9 +0x061f:  jmp    082ee5e0 <+0x626>
082ee5db +0x0621:  mov    $0x0,%eax
082ee5e0 +0x0626:  test   %al,%al
082ee5e2 +0x0628:  je     082ee610 <+0x656>
082ee5e4 +0x062a:  movl   $0x4,(%esp)
082ee5eb +0x0631:  call   08725800 <__cxa_allocate_exception>
082ee5f0 +0x0636:  mov    %eax,%edx
082ee5f2 +0x0638:  movl   $0x13,(%edx)
082ee5f8 +0x063e:  movl   $0x0,0x8(%esp)
082ee600 +0x0646:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082ee608 +0x064e:  mov    %eax,(%esp)
082ee60b +0x0651:  call   08724c50 <__cxa_throw>
082ee610 +0x0656:  mov    0x8(%ebp),%eax
082ee613 +0x0659:  movzbl (%eax),%eax
082ee616 +0x065c:  xor    $0x1,%eax
082ee619 +0x065f:  test   %al,%al
082ee61b +0x0661:  je     082ee678 <+0x6be>
082ee61d +0x0663:  mov    0x10(%ebp),%eax
082ee620 +0x0666:  mov    %eax,(%esp)
082ee623 +0x0669:  call   082f0960 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x6e4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x6e4
082ee628 +0x066e:  cmp    $0x63,%eax
082ee62b +0x0671:  ja     082ee643 <+0x689>
082ee62d +0x0673:  mov    0x10(%ebp),%eax
082ee630 +0x0676:  mov    %eax,(%esp)
082ee633 +0x0679:  call   082f0ad8 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x85c>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x85c
082ee638 +0x067e:  test   %eax,%eax
082ee63a +0x0680:  jne    082ee643 <+0x689>
082ee63c +0x0682:  mov    $0x1,%eax
082ee641 +0x0687:  jmp    082ee648 <+0x68e>
082ee643 +0x0689:  mov    $0x0,%eax
082ee648 +0x068e:  test   %al,%al
082ee64a +0x0690:  je     082ee678 <+0x6be>
082ee64c +0x0692:  movl   $0x4,(%esp)
082ee653 +0x0699:  call   08725800 <__cxa_allocate_exception>
082ee658 +0x069e:  mov    %eax,%edx
082ee65a +0x06a0:  movl   $0x8,(%edx)
082ee660 +0x06a6:  movl   $0x0,0x8(%esp)
082ee668 +0x06ae:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082ee670 +0x06b6:  mov    %eax,(%esp)
082ee673 +0x06b9:  call   08724c50 <__cxa_throw>
082ee678 +0x06be:  mov    0xc(%ebp),%eax
082ee67b +0x06c1:  mov    %eax,(%esp)
082ee67e +0x06c4:  call   0822f6d2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4d7c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4d7c
082ee683 +0x06c9:  test   %eax,%eax
082ee685 +0x06cb:  setne  %al
082ee688 +0x06ce:  test   %al,%al
082ee68a +0x06d0:  je     082ee6b8 <+0x6fe>
082ee68c +0x06d2:  movl   $0x4,(%esp)
082ee693 +0x06d9:  call   08725800 <__cxa_allocate_exception>
082ee698 +0x06de:  mov    %eax,%edx
082ee69a +0x06e0:  movl   $0x13,(%edx)
082ee6a0 +0x06e6:  movl   $0x0,0x8(%esp)
082ee6a8 +0x06ee:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082ee6b0 +0x06f6:  mov    %eax,(%esp)
082ee6b3 +0x06f9:  call   08724c50 <__cxa_throw>
082ee6b8 +0x06fe:  mov    0x10(%ebp),%eax
082ee6bb +0x0701:  mov    %eax,(%esp)
082ee6be +0x0704:  call   0822f6d2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4d7c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4d7c
082ee6c3 +0x0709:  test   %eax,%eax
082ee6c5 +0x070b:  setne  %al
082ee6c8 +0x070e:  test   %al,%al
082ee6ca +0x0710:  je     082ee6f8 <+0x73e>
082ee6cc +0x0712:  movl   $0x4,(%esp)
082ee6d3 +0x0719:  call   08725800 <__cxa_allocate_exception>
082ee6d8 +0x071e:  mov    %eax,%edx
082ee6da +0x0720:  movl   $0x12,(%edx)
082ee6e0 +0x0726:  movl   $0x0,0x8(%esp)
082ee6e8 +0x072e:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082ee6f0 +0x0736:  mov    %eax,(%esp)
082ee6f3 +0x0739:  call   08724c50 <__cxa_throw>
082ee6f8 +0x073e:  mov    0xc(%ebp),%eax
082ee6fb +0x0741:  mov    %eax,(%esp)
082ee6fe +0x0744:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
082ee703 +0x0749:  test   %eax,%eax
082ee705 +0x074b:  sete   %al
082ee708 +0x074e:  test   %al,%al
082ee70a +0x0750:  je     082ee738 <+0x77e>
082ee70c +0x0752:  movl   $0x4,(%esp)
082ee713 +0x0759:  call   08725800 <__cxa_allocate_exception>
082ee718 +0x075e:  mov    %eax,%edx
082ee71a +0x0760:  movl   $0x13,(%edx)
082ee720 +0x0766:  movl   $0x0,0x8(%esp)
082ee728 +0x076e:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082ee730 +0x0776:  mov    %eax,(%esp)
082ee733 +0x0779:  call   08724c50 <__cxa_throw>
082ee738 +0x077e:  mov    0xc(%ebp),%eax
082ee73b +0x0781:  mov    %eax,(%esp)
082ee73e +0x0784:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
082ee743 +0x0789:  test   %eax,%eax
082ee745 +0x078b:  sete   %al
082ee748 +0x078e:  test   %al,%al
082ee74a +0x0790:  je     082ee778 <+0x7be>
082ee74c +0x0792:  movl   $0x4,(%esp)
082ee753 +0x0799:  call   08725800 <__cxa_allocate_exception>
082ee758 +0x079e:  mov    %eax,%edx
082ee75a +0x07a0:  movl   $0x13,(%edx)
082ee760 +0x07a6:  movl   $0x0,0x8(%esp)
082ee768 +0x07ae:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082ee770 +0x07b6:  mov    %eax,(%esp)
082ee773 +0x07b9:  call   08724c50 <__cxa_throw>
082ee778 +0x07be:  mov    0xc(%ebp),%eax
082ee77b +0x07c1:  mov    %eax,(%esp)
082ee77e +0x07c4:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
082ee783 +0x07c9:  mov    %eax,%ebx
082ee785 +0x07cb:  mov    0x10(%ebp),%eax
082ee788 +0x07ce:  mov    %eax,(%esp)
082ee78b +0x07d1:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
082ee790 +0x07d6:  cmp    %eax,%ebx
082ee792 +0x07d8:  sete   %al
082ee795 +0x07db:  test   %al,%al
082ee797 +0x07dd:  je     082ee7c5 <+0x80b>
082ee799 +0x07df:  movl   $0x4,(%esp)
082ee7a0 +0x07e6:  call   08725800 <__cxa_allocate_exception>
082ee7a5 +0x07eb:  mov    %eax,%edx
082ee7a7 +0x07ed:  movl   $0x13,(%edx)
082ee7ad +0x07f3:  movl   $0x0,0x8(%esp)
082ee7b5 +0x07fb:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082ee7bd +0x0803:  mov    %eax,(%esp)
082ee7c0 +0x0806:  call   08724c50 <__cxa_throw>
082ee7c5 +0x080b:  mov    0xc(%ebp),%eax
082ee7c8 +0x080e:  mov    %eax,(%esp)
082ee7cb +0x0811:  call   0813492c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x533>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x533
082ee7d0 +0x0816:  movzwl %ax,%ebx
082ee7d3 +0x0819:  mov    0x10(%ebp),%eax
082ee7d6 +0x081c:  mov    %eax,(%esp)
082ee7d9 +0x081f:  call   0813492c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x533>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x533
082ee7de +0x0824:  movzwl %ax,%eax
082ee7e1 +0x0827:  mov    %ebx,%edx
082ee7e3 +0x0829:  sub    %eax,%edx
082ee7e5 +0x082b:  mov    %edx,%eax
082ee7e7 +0x082d:  mov    %eax,%edx
082ee7e9 +0x082f:  sar    $0x1f,%edx
082ee7ec +0x0832:  xor    %edx,%eax
082ee7ee +0x0834:  sub    %edx,%eax
082ee7f0 +0x0836:  cmp    $0x64,%eax
082ee7f3 +0x0839:  jg     082ee825 <+0x86b>
082ee7f5 +0x083b:  mov    0xc(%ebp),%eax
082ee7f8 +0x083e:  mov    %eax,(%esp)
082ee7fb +0x0841:  call   0813493c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x543>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x543
082ee800 +0x0846:  movzwl %ax,%ebx
082ee803 +0x0849:  mov    0x10(%ebp),%eax
082ee806 +0x084c:  mov    %eax,(%esp)
082ee809 +0x084f:  call   0813493c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x543>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x543
082ee80e +0x0854:  movzwl %ax,%eax
082ee811 +0x0857:  mov    %ebx,%edx
082ee813 +0x0859:  sub    %eax,%edx
082ee815 +0x085b:  mov    %edx,%eax
082ee817 +0x085d:  mov    %eax,%edx
082ee819 +0x085f:  sar    $0x1f,%edx
082ee81c +0x0862:  xor    %edx,%eax
082ee81e +0x0864:  sub    %edx,%eax
082ee820 +0x0866:  cmp    $0x64,%eax
082ee823 +0x0869:  jle    082ee82c <+0x872>
082ee825 +0x086b:  mov    $0x1,%eax
082ee82a +0x0870:  jmp    082ee831 <+0x877>
082ee82c +0x0872:  mov    $0x0,%eax
082ee831 +0x0877:  test   %al,%al
082ee833 +0x0879:  je     082ee861 <+0x8a7>
082ee835 +0x087b:  movl   $0x4,(%esp)
082ee83c +0x0882:  call   08725800 <__cxa_allocate_exception>
082ee841 +0x0887:  mov    %eax,%edx
082ee843 +0x0889:  movl   $0x63,(%edx)
082ee849 +0x088f:  movl   $0x0,0x8(%esp)
082ee851 +0x0897:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082ee859 +0x089f:  mov    %eax,(%esp)
082ee85c +0x08a2:  call   08724c50 <__cxa_throw>
082ee861 +0x08a7:  mov    0xc(%ebp),%eax
082ee864 +0x08aa:  mov    %eax,(%esp)
082ee867 +0x08ad:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
082ee86c +0x08b2:  mov    %eax,%ebx
082ee86e +0x08b4:  mov    0x10(%ebp),%eax
082ee871 +0x08b7:  mov    %eax,(%esp)
082ee874 +0x08ba:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
082ee879 +0x08bf:  cmp    %al,%bl
082ee87b +0x08c1:  jne    082ee8a9 <+0x8ef>
082ee87d +0x08c3:  movl   $0x0,0x4(%esp)
082ee885 +0x08cb:  mov    0xc(%ebp),%eax
082ee888 +0x08ce:  mov    %eax,(%esp)
082ee88b +0x08d1:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
082ee890 +0x08d6:  mov    %eax,%ebx
082ee892 +0x08d8:  movl   $0x0,0x4(%esp)
082ee89a +0x08e0:  mov    0x10(%ebp),%eax
082ee89d +0x08e3:  mov    %eax,(%esp)
082ee8a0 +0x08e6:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
082ee8a5 +0x08eb:  cmp    %eax,%ebx
082ee8a7 +0x08ed:  je     082ee8b0 <+0x8f6>
082ee8a9 +0x08ef:  mov    $0x1,%eax
082ee8ae +0x08f4:  jmp    082ee8b5 <+0x8fb>
082ee8b0 +0x08f6:  mov    $0x0,%eax
082ee8b5 +0x08fb:  test   %al,%al
082ee8b7 +0x08fd:  je     082ee8e5 <+0x92b>
082ee8b9 +0x08ff:  movl   $0x4,(%esp)
082ee8c0 +0x0906:  call   08725800 <__cxa_allocate_exception>
082ee8c5 +0x090b:  mov    %eax,%edx
082ee8c7 +0x090d:  movl   $0x13,(%edx)
082ee8cd +0x0913:  movl   $0x0,0x8(%esp)
082ee8d5 +0x091b:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082ee8dd +0x0923:  mov    %eax,(%esp)
082ee8e0 +0x0926:  call   08724c50 <__cxa_throw>
082ee8e5 +0x092b:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082ee8ea +0x0930:  mov    %eax,(%esp)
082ee8ed +0x0933:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
082ee8f2 +0x0938:  xor    $0x1,%eax
082ee8f5 +0x093b:  test   %al,%al
082ee8f7 +0x093d:  je     082ee953 <+0x999>
082ee8f9 +0x093f:  mov    0xc(%ebp),%eax
082ee8fc +0x0942:  mov    %eax,(%esp)
082ee8ff +0x0945:  call   082edc05 <_Z10IsStayGateP5CUser>  ; IsStayGate(CUser*)
082ee904 +0x094a:  test   %al,%al
082ee906 +0x094c:  jne    082ee917 <+0x95d>
082ee908 +0x094e:  mov    0x10(%ebp),%eax
082ee90b +0x0951:  mov    %eax,(%esp)
082ee90e +0x0954:  call   082edc05 <_Z10IsStayGateP5CUser>  ; IsStayGate(CUser*)
082ee913 +0x0959:  test   %al,%al
082ee915 +0x095b:  je     082ee91e <+0x964>
082ee917 +0x095d:  mov    $0x1,%eax
082ee91c +0x0962:  jmp    082ee923 <+0x969>
082ee91e +0x0964:  mov    $0x0,%eax
082ee923 +0x0969:  test   %al,%al
082ee925 +0x096b:  je     082ee953 <+0x999>
082ee927 +0x096d:  movl   $0x4,(%esp)
082ee92e +0x0974:  call   08725800 <__cxa_allocate_exception>
082ee933 +0x0979:  mov    %eax,%edx
082ee935 +0x097b:  movl   $0x13,(%edx)
082ee93b +0x0981:  movl   $0x0,0x8(%esp)
082ee943 +0x0989:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082ee94b +0x0991:  mov    %eax,(%esp)
082ee94e +0x0994:  call   08724c50 <__cxa_throw>
082ee953 +0x0999:  movl   $0x0,-0x38(%ebp)
082ee95a +0x09a0:  call   085c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>  ; private_store::GetInstancePrivateStoreMgr()
082ee95f +0x09a5:  mov    0xc(%ebp),%edx
082ee962 +0x09a8:  mov    %edx,0x4(%esp)
082ee966 +0x09ac:  mov    %eax,(%esp)
082ee969 +0x09af:  call   085ca358 <_ZN13private_store16CPrivateStoreMgr15FindStoreSellerEP5CUser>  ; private_store::CPrivateStoreMgr::FindStoreSeller(CUser*)
082ee96e +0x09b4:  mov    %eax,-0x38(%ebp)
082ee971 +0x09b7:  cmpl   $0x0,-0x38(%ebp)
082ee975 +0x09bb:  setne  %al
082ee978 +0x09be:  test   %al,%al
082ee97a +0x09c0:  je     082ee9ba <+0xa00>
082ee97c +0x09c2:  mov    -0x38(%ebp),%eax
082ee97f +0x09c5:  mov    %eax,(%esp)
082ee982 +0x09c8:  call   082345e4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c8e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c8e
082ee987 +0x09cd:  xor    $0x1,%eax
082ee98a +0x09d0:  test   %al,%al
082ee98c +0x09d2:  je     082ee9ba <+0xa00>
082ee98e +0x09d4:  movl   $0x4,(%esp)
082ee995 +0x09db:  call   08725800 <__cxa_allocate_exception>
082ee99a +0x09e0:  mov    %eax,%edx
082ee99c +0x09e2:  movl   $0x3c,(%edx)
082ee9a2 +0x09e8:  movl   $0x0,0x8(%esp)
082ee9aa +0x09f0:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082ee9b2 +0x09f8:  mov    %eax,(%esp)
082ee9b5 +0x09fb:  call   08724c50 <__cxa_throw>
082ee9ba +0x0a00:  call   085c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>  ; private_store::GetInstancePrivateStoreMgr()
082ee9bf +0x0a05:  mov    0x10(%ebp),%edx
082ee9c2 +0x0a08:  mov    %edx,0x4(%esp)
082ee9c6 +0x0a0c:  mov    %eax,(%esp)
082ee9c9 +0x0a0f:  call   085ca358 <_ZN13private_store16CPrivateStoreMgr15FindStoreSellerEP5CUser>  ; private_store::CPrivateStoreMgr::FindStoreSeller(CUser*)
082ee9ce +0x0a14:  mov    %eax,-0x38(%ebp)
082ee9d1 +0x0a17:  cmpl   $0x0,-0x38(%ebp)
082ee9d5 +0x0a1b:  setne  %al
082ee9d8 +0x0a1e:  test   %al,%al
082ee9da +0x0a20:  je     082eea1a <+0xa60>
082ee9dc +0x0a22:  mov    -0x38(%ebp),%eax
082ee9df +0x0a25:  mov    %eax,(%esp)
082ee9e2 +0x0a28:  call   082345e4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c8e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c8e
082ee9e7 +0x0a2d:  xor    $0x1,%eax
082ee9ea +0x0a30:  test   %al,%al
082ee9ec +0x0a32:  je     082eea1a <+0xa60>
082ee9ee +0x0a34:  movl   $0x4,(%esp)
082ee9f5 +0x0a3b:  call   08725800 <__cxa_allocate_exception>
082ee9fa +0x0a40:  mov    %eax,%edx
082ee9fc +0x0a42:  movl   $0x3c,(%edx)
082eea02 +0x0a48:  movl   $0x0,0x8(%esp)
082eea0a +0x0a50:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082eea12 +0x0a58:  mov    %eax,(%esp)
082eea15 +0x0a5b:  call   08724c50 <__cxa_throw>
082eea1a +0x0a60:  movl   $0x0,-0x34(%ebp)
082eea21 +0x0a67:  mov    0xc(%ebp),%eax
082eea24 +0x0a6a:  mov    %eax,(%esp)
082eea27 +0x0a6d:  call   080da314 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x4b1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x4b1
082eea2c +0x0a72:  test   %al,%al
082eea2e +0x0a74:  je     082eea3e <+0xa84>
082eea30 +0x0a76:  mov    0xc(%ebp),%eax
082eea33 +0x0a79:  mov    %eax,(%esp)
082eea36 +0x0a7c:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
082eea3b +0x0a81:  mov    %eax,-0x34(%ebp)
082eea3e +0x0a84:  cmpl   $0x0,-0x34(%ebp)
082eea42 +0x0a88:  je     082eea86 <+0xacc>
082eea44 +0x0a8a:  mov    0x10(%ebp),%eax
082eea47 +0x0a8d:  mov    %eax,0x4(%esp)
082eea4b +0x0a91:  mov    -0x34(%ebp),%eax
082eea4e +0x0a94:  mov    %eax,(%esp)
082eea51 +0x0a97:  call   082f07a4 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x528>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x528
082eea56 +0x0a9c:  test   %al,%al
082eea58 +0x0a9e:  je     082eea86 <+0xacc>
082eea5a +0x0aa0:  movl   $0x4,(%esp)
082eea61 +0x0aa7:  call   08725800 <__cxa_allocate_exception>
082eea66 +0x0aac:  mov    %eax,%edx
082eea68 +0x0aae:  movl   $0x13,(%edx)
082eea6e +0x0ab4:  movl   $0x0,0x8(%esp)
082eea76 +0x0abc:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082eea7e +0x0ac4:  mov    %eax,(%esp)
082eea81 +0x0ac7:  call   08724c50 <__cxa_throw>
082eea86 +0x0acc:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082eea8b +0x0ad1:  mov    %eax,(%esp)
082eea8e +0x0ad4:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
082eea93 +0x0ad9:  test   %al,%al
082eea95 +0x0adb:  je     082eeaad <+0xaf3>
082eea97 +0x0add:  mov    0x10(%ebp),%eax
082eea9a +0x0ae0:  mov    %eax,(%esp)
082eea9d +0x0ae3:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
082eeaa2 +0x0ae8:  cmp    $0x7,%al
082eeaa4 +0x0aea:  jne    082eeaad <+0xaf3>
082eeaa6 +0x0aec:  mov    $0x1,%eax
082eeaab +0x0af1:  jmp    082eeab2 <+0xaf8>
082eeaad +0x0af3:  mov    $0x0,%eax
082eeab2 +0x0af8:  test   %al,%al
082eeab4 +0x0afa:  je     082eeb05 <+0xb4b>
082eeab6 +0x0afc:  mov    0x10(%ebp),%eax
082eeab9 +0x0aff:  mov    %eax,(%esp)
082eeabc +0x0b02:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
082eeac1 +0x0b07:  mov    %eax,-0x2c(%ebp)
082eeac4 +0x0b0a:  cmpl   $0x0,-0x2c(%ebp)
082eeac8 +0x0b0e:  je     082eeb05 <+0xb4b>
082eeaca +0x0b10:  mov    -0x2c(%ebp),%eax
082eeacd +0x0b13:  mov    %eax,(%esp)
082eead0 +0x0b16:  call   085b8fa6 <_ZN6CParty19IsThereGhostInPartyEv>  ; CParty::IsThereGhostInParty()
082eead5 +0x0b1b:  test   %al,%al
082eead7 +0x0b1d:  je     082eeb05 <+0xb4b>
082eead9 +0x0b1f:  movl   $0x4,(%esp)
082eeae0 +0x0b26:  call   08725800 <__cxa_allocate_exception>
082eeae5 +0x0b2b:  mov    %eax,%edx
082eeae7 +0x0b2d:  movl   $0x13,(%edx)
082eeaed +0x0b33:  movl   $0x0,0x8(%esp)
082eeaf5 +0x0b3b:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082eeafd +0x0b43:  mov    %eax,(%esp)
082eeb00 +0x0b46:  call   08724c50 <__cxa_throw>
082eeb05 +0x0b4b:  mov    0xc(%ebp),%eax
082eeb08 +0x0b4e:  mov    %eax,0x4(%esp)
082eeb0c +0x0b52:  mov    0xc(%ebp),%eax
082eeb0f +0x0b55:  mov    %eax,(%esp)
082eeb12 +0x0b58:  call   082f0022 <_ZN11pvp_assault11CAssaultMgr16AvailableAssaultEP5CUserPKS1_>  ; pvp_assault::CAssaultMgr::AvailableAssault(CUser*, CUser const*)
082eeb17 +0x0b5d:  mov    0xc(%ebp),%eax
082eeb1a +0x0b60:  mov    %eax,0x4(%esp)
082eeb1e +0x0b64:  mov    0x10(%ebp),%eax
082eeb21 +0x0b67:  mov    %eax,(%esp)
082eeb24 +0x0b6a:  call   082f0022 <_ZN11pvp_assault11CAssaultMgr16AvailableAssaultEP5CUserPKS1_>  ; pvp_assault::CAssaultMgr::AvailableAssault(CUser*, CUser const*)
082eeb29 +0x0b6f:  mov    0xc(%ebp),%eax
082eeb2c +0x0b72:  mov    %eax,(%esp)
082eeb2f +0x0b75:  call   0868ef20 <_ZN15CUserCharacInfo24GetCurCharacAssaultMoneyEv>  ; CUserCharacInfo::GetCurCharacAssaultMoney()
082eeb34 +0x0b7a:  mov    %eax,-0x9c(%ebp)
082eeb3a +0x0b80:  mov    0xc(%ebp),%eax
082eeb3d +0x0b83:  mov    %eax,(%esp)
082eeb40 +0x0b86:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
082eeb45 +0x0b8b:  mov    %eax,(%esp)
082eeb48 +0x0b8e:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
082eeb4d +0x0b93:  mov    -0x9c(%ebp),%edx
082eeb53 +0x0b99:  cmp    %edx,%eax
082eeb55 +0x0b9b:  setl   %al
082eeb58 +0x0b9e:  test   %al,%al
082eeb5a +0x0ba0:  je     082eebad <+0xbf3>
082eeb5c +0x0ba2:  mov    -0x9c(%ebp),%ebx
082eeb62 +0x0ba8:  mov    0xc(%ebp),%eax
082eeb65 +0x0bab:  mov    %eax,(%esp)
082eeb68 +0x0bae:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
082eeb6d +0x0bb3:  mov    %eax,(%esp)
082eeb70 +0x0bb6:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
082eeb75 +0x0bbb:  mov    %ebx,%edx
082eeb77 +0x0bbd:  sub    %eax,%edx
082eeb79 +0x0bbf:  mov    %edx,%eax
082eeb7b +0x0bc1:  mov    %eax,-0x9c(%ebp)
082eeb81 +0x0bc7:  movl   $0x4,(%esp)
082eeb88 +0x0bce:  call   08725800 <__cxa_allocate_exception>
082eeb8d +0x0bd3:  mov    %eax,%edx
082eeb8f +0x0bd5:  movl   $0xa,(%edx)
082eeb95 +0x0bdb:  movl   $0x0,0x8(%esp)
082eeb9d +0x0be3:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082eeba5 +0x0beb:  mov    %eax,(%esp)
082eeba8 +0x0bee:  call   08724c50 <__cxa_throw>
082eebad +0x0bf3:  cmpl   $0x0,0x14(%ebp)
082eebb1 +0x0bf7:  jne    082ef163 <+0x11a9>
082eebb7 +0x0bfd:  call   082f0fa9 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0xd2d>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0xd2d
082eebbc +0x0c02:  mov    %eax,(%esp)
082eebbf +0x0c05:  call   082f0f54 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0xcd8>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0xcd8
082eebc4 +0x0c0a:  mov    %eax,-0x94(%ebp)
082eebca +0x0c10:  mov    -0x94(%ebp),%eax
082eebd0 +0x0c16:  test   %eax,%eax
082eebd2 +0x0c18:  jne    082eec00 <+0xc46>
082eebd4 +0x0c1a:  movl   $0x4,(%esp)
082eebdb +0x0c21:  call   08725800 <__cxa_allocate_exception>
082eebe0 +0x0c26:  mov    %eax,%edx
082eebe2 +0x0c28:  movl   $0x16,(%edx)
082eebe8 +0x0c2e:  movl   $0x0,0x8(%esp)
082eebf0 +0x0c36:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082eebf8 +0x0c3e:  mov    %eax,(%esp)
082eebfb +0x0c41:  call   08724c50 <__cxa_throw>
082eec00 +0x0c46:  mov    -0x94(%ebp),%eax
082eec06 +0x0c4c:  mov    %eax,(%esp)
082eec09 +0x0c4f:  call   082e6ab8 <_ZN11pvp_assault13CAssaultPlace5ResetEv>  ; pvp_assault::CAssaultPlace::Reset()
082eec0e +0x0c54:  mov    0x8(%ebp),%eax
082eec11 +0x0c57:  mov    %eax,(%esp)
082eec14 +0x0c5a:  call   082ed976 <_ZN11pvp_assault11CAssaultMgr22_GetNextAssaultPlaceIdEv>  ; pvp_assault::CAssaultMgr::_GetNextAssaultPlaceId()
082eec19 +0x0c5f:  mov    %eax,-0x98(%ebp)
082eec1f +0x0c65:  mov    -0x98(%ebp),%edx
082eec25 +0x0c6b:  mov    -0x94(%ebp),%eax
082eec2b +0x0c71:  mov    %edx,0x4(%esp)
082eec2f +0x0c75:  mov    %eax,(%esp)
082eec32 +0x0c78:  call   082f068e <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x412>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x412
082eec37 +0x0c7d:  mov    -0x94(%ebp),%eax
082eec3d +0x0c83:  lea    -0x9c(%ebp),%edx
082eec43 +0x0c89:  mov    %edx,0xc(%esp)
082eec47 +0x0c8d:  mov    0x10(%ebp),%edx
082eec4a +0x0c90:  mov    %edx,0x8(%esp)
082eec4e +0x0c94:  mov    0xc(%ebp),%edx
082eec51 +0x0c97:  mov    %edx,0x4(%esp)
082eec55 +0x0c9b:  mov    %eax,(%esp)
082eec58 +0x0c9e:  call   082e7d0a <_ZN11pvp_assault13CAssaultPlace8MakeTeamEP5CUserS2_Ri>  ; pvp_assault::CAssaultPlace::MakeTeam(CUser*, CUser*, int&)
082eec5d +0x0ca3:  lea    -0x80(%ebp),%eax
082eec60 +0x0ca6:  lea    -0x94(%ebp),%edx
082eec66 +0x0cac:  mov    %edx,0x8(%esp)
082eec6a +0x0cb0:  lea    -0x98(%ebp),%edx
082eec70 +0x0cb6:  mov    %edx,0x4(%esp)
082eec74 +0x0cba:  mov    %eax,(%esp)
082eec77 +0x0cbd:  call   082f1cf8 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1a7c>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1a7c
082eec7c +0x0cc2:  sub    $0x4,%esp
082eec7f +0x0cc5:  lea    -0x80(%ebp),%eax
082eec82 +0x0cc8:  mov    %eax,0x4(%esp)
082eec86 +0x0ccc:  lea    -0x88(%ebp),%eax
082eec8c +0x0cd2:  mov    %eax,(%esp)
082eec8f +0x0cd5:  call   082f1d36 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1aba>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1aba
082eec94 +0x0cda:  mov    0x8(%ebp),%eax
082eec97 +0x0cdd:  lea    0x8(%eax),%ecx
082eec9a +0x0ce0:  lea    -0x90(%ebp),%eax
082eeca0 +0x0ce6:  lea    -0x88(%ebp),%edx
082eeca6 +0x0cec:  mov    %edx,0x8(%esp)
082eecaa +0x0cf0:  mov    %ecx,0x4(%esp)
082eecae +0x0cf4:  mov    %eax,(%esp)
082eecb1 +0x0cf7:  call   082f1d66 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1aea>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1aea
082eecb6 +0x0cfc:  sub    $0x4,%esp
082eecb9 +0x0cff:  mov    -0x94(%ebp),%eax
082eecbf +0x0d05:  mov    %eax,(%esp)
082eecc2 +0x0d08:  call   082f06a0 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x424>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x424
082eecc7 +0x0d0d:  mov    %eax,%ebx
082eecc9 +0x0d0f:  mov    -0x94(%ebp),%eax
082eeccf +0x0d15:  mov    %eax,(%esp)
082eecd2 +0x0d18:  call   082f0680 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x404>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x404
082eecd7 +0x0d1d:  mov    %ebx,0x8(%esp)
082eecdb +0x0d21:  mov    %eax,0x4(%esp)
082eecdf +0x0d25:  movl   $0x3c,(%esp)
082eece6 +0x0d2c:  call   0863755a <_ZN31TimerCompleteLoadAssaultTimeout15registNextTimerElii>  ; TimerCompleteLoadAssaultTimeout::registNextTimer(long, int, int)
082eeceb +0x0d31:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082eecf0 +0x0d36:  mov    %eax,(%esp)
082eecf3 +0x0d39:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
082eecf8 +0x0d3e:  test   %al,%al
082eecfa +0x0d40:  je     082eed12 <+0xd58>
082eecfc +0x0d42:  mov    0xc(%ebp),%eax
082eecff +0x0d45:  mov    %eax,(%esp)
082eed02 +0x0d48:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
082eed07 +0x0d4d:  cmp    $0x7,%al
082eed09 +0x0d4f:  jne    082eed12 <+0xd58>
082eed0b +0x0d51:  mov    $0x1,%eax
082eed10 +0x0d56:  jmp    082eed17 <+0xd5d>
082eed12 +0x0d58:  mov    $0x0,%eax
082eed17 +0x0d5d:  test   %al,%al
082eed19 +0x0d5f:  je     082eed25 <+0xd6b>
082eed1b +0x0d61:  movl   $0x0,-0x9c(%ebp)
082eed25 +0x0d6b:  mov    -0x9c(%ebp),%eax
082eed2b +0x0d71:  test   %eax,%eax
082eed2d +0x0d73:  jle    082eee5d <+0xea3>
082eed33 +0x0d79:  mov    0xc(%ebp),%eax
082eed36 +0x0d7c:  mov    %eax,(%esp)
082eed39 +0x0d7f:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
082eed3e +0x0d84:  lea    -0x75(%ebp),%edx
082eed41 +0x0d87:  movl   $0xb,0xc(%esp)
082eed49 +0x0d8f:  movl   $0x0,0x8(%esp)
082eed51 +0x0d97:  mov    %eax,0x4(%esp)
082eed55 +0x0d9b:  mov    %edx,(%esp)
082eed58 +0x0d9e:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
082eed5d +0x0da3:  sub    $0x4,%esp
082eed60 +0x0da6:  mov    -0x73(%ebp),%eax
082eed63 +0x0da9:  mov    %eax,-0x28(%ebp)
082eed66 +0x0dac:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082eed6b +0x0db1:  mov    -0x28(%ebp),%edx
082eed6e +0x0db4:  mov    %edx,0x4(%esp)
082eed72 +0x0db8:  mov    %eax,(%esp)
082eed75 +0x0dbb:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
082eed7a +0x0dc0:  mov    %eax,-0x24(%ebp)
082eed7d +0x0dc3:  cmpl   $0x0,-0x24(%ebp)
082eed81 +0x0dc7:  je     082eee0a <+0xe50>
082eed87 +0x0dcd:  mov    -0x9c(%ebp),%eax
082eed8d +0x0dd3:  mov    %eax,-0xbc(%ebp)
082eed93 +0x0dd9:  fildl  -0xbc(%ebp)
082eed99 +0x0ddf:  fstps  -0xc8(%ebp)
082eed9f +0x0de5:  mov    -0x9c(%ebp),%eax
082eeda5 +0x0deb:  mov    %eax,-0xbc(%ebp)
082eedab +0x0df1:  fildl  -0xbc(%ebp)
082eedb1 +0x0df7:  fstps  -0xc4(%ebp)
082eedb7 +0x0dfd:  mov    -0x24(%ebp),%eax
082eedba +0x0e00:  mov    %eax,(%esp)
082eedbd +0x0e03:  call   0822ca80 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x212a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x212a
082eedc2 +0x0e08:  fmuls  -0xc4(%ebp)
082eedc8 +0x0e0e:  flds   ""
082eedce +0x0e14:  fdivrp %st,%st(1)
082eedd0 +0x0e16:  fadds  -0xc8(%ebp)
082eedd6 +0x0e1c:  fnstcw -0xbe(%ebp)
082eeddc +0x0e22:  movzwl -0xbe(%ebp),%eax
082eede3 +0x0e29:  mov    $0xc,%ah
082eede5 +0x0e2b:  mov    %ax,-0xc0(%ebp)
082eedec +0x0e32:  fldcw  -0xc0(%ebp)
082eedf2 +0x0e38:  fistpl -0xbc(%ebp)
082eedf8 +0x0e3e:  fldcw  -0xbe(%ebp)
082eedfe +0x0e44:  mov    -0xbc(%ebp),%eax
082eee04 +0x0e4a:  mov    %eax,-0x9c(%ebp)
082eee0a +0x0e50:  mov    -0x9c(%ebp),%ebx
082eee10 +0x0e56:  mov    0xc(%ebp),%eax
082eee13 +0x0e59:  mov    %eax,(%esp)
082eee16 +0x0e5c:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
082eee1b +0x0e61:  movl   $0x1,0xc(%esp)
082eee23 +0x0e69:  movl   $0x15,0x8(%esp)
082eee2b +0x0e71:  mov    %ebx,0x4(%esp)
082eee2f +0x0e75:  mov    %eax,(%esp)
082eee32 +0x0e78:  call   084ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>  ; CInventory::use_money(int, eMoneySubReason, bool)
082eee37 +0x0e7d:  mov    0xc(%ebp),%eax
082eee3a +0x0e80:  movl   $0x0,0x4(%esp)
082eee42 +0x0e88:  mov    %eax,(%esp)
082eee45 +0x0e8b:  call   0868ef42 <_ZN15CUserCharacInfo24SetCurCharacAssaultMoneyEi>  ; CUserCharacInfo::SetCurCharacAssaultMoney(int)
082eee4a +0x0e90:  mov    0xc(%ebp),%eax
082eee4d +0x0e93:  movl   $0x0,0x4(%esp)
082eee55 +0x0e9b:  mov    %eax,(%esp)
082eee58 +0x0e9e:  call   0868ef84 <_ZN15CUserCharacInfo27SetCurCharacAssaultedUserIdEt>  ; CUserCharacInfo::SetCurCharacAssaultedUserId(unsigned short)
082eee5d +0x0ea3:  mov    0xc(%ebp),%eax
082eee60 +0x0ea6:  mov    %eax,(%esp)
082eee63 +0x0ea9:  call   082f0cf4 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0xa78>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0xa78
082eee68 +0x0eae:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082eee6d +0x0eb3:  mov    %eax,(%esp)
082eee70 +0x0eb6:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
082eee75 +0x0ebb:  test   %al,%al
082eee77 +0x0ebd:  je     082eee8f <+0xed5>
082eee79 +0x0ebf:  mov    0xc(%ebp),%eax
082eee7c +0x0ec2:  mov    %eax,(%esp)
082eee7f +0x0ec5:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
082eee84 +0x0eca:  cmp    $0x7,%al
082eee86 +0x0ecc:  jne    082eee8f <+0xed5>
082eee88 +0x0ece:  mov    $0x1,%eax
082eee8d +0x0ed3:  jmp    082eee94 <+0xeda>
082eee8f +0x0ed5:  mov    $0x0,%eax
082eee94 +0x0eda:  test   %al,%al
082eee96 +0x0edc:  je     082eeeda <+0xf20>
082eee98 +0x0ede:  mov    -0x94(%ebp),%eax
082eee9e +0x0ee4:  mov    %eax,(%esp)
082eeea1 +0x0ee7:  call   082f06dc <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x460>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x460
082eeea6 +0x0eec:  mov    %eax,-0x20(%ebp)
082eeea9 +0x0eef:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082eeeae +0x0ef4:  mov    %eax,(%esp)
082eeeb1 +0x0ef7:  call   082f0906 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x68a>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x68a
082eeeb6 +0x0efc:  mov    -0x20(%ebp),%edx
082eeeb9 +0x0eff:  mov    %edx,0x4(%esp)
082eeebd +0x0f03:  mov    %eax,(%esp)
082eeec0 +0x0f06:  call   082f08dc <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x660>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x660
082eeec5 +0x0f0b:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082eeeca +0x0f10:  mov    %eax,(%esp)
082eeecd +0x0f13:  call   082f0906 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x68a>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x68a
082eeed2 +0x0f18:  mov    %eax,(%esp)
082eeed5 +0x0f1b:  call   082f083c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x5c0>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x5c0
082eeeda +0x0f20:  mov    0x10(%ebp),%eax
082eeedd +0x0f23:  mov    %eax,0x8(%esp)
082eeee1 +0x0f27:  mov    0xc(%ebp),%eax
082eeee4 +0x0f2a:  mov    %eax,0x4(%esp)
082eeee8 +0x0f2e:  mov    0x8(%ebp),%eax
082eeeeb +0x0f31:  mov    %eax,(%esp)
082eeeee +0x0f34:  call   082efcb2 <_ZN11pvp_assault11CAssaultMgr16_SendVictoryInfoEP5CUserS2_>  ; pvp_assault::CAssaultMgr::_SendVictoryInfo(CUser*, CUser*)
082eeef3 +0x0f39:  lea    -0xac(%ebp),%eax
082eeef9 +0x0f3f:  mov    %eax,(%esp)
082eeefc +0x0f42:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082eef01 +0x0f47:  movl   $0x8,0x8(%esp)
082eef09 +0x0f4f:  movl   $0x0,0x4(%esp)
082eef11 +0x0f57:  lea    -0xac(%ebp),%eax
082eef17 +0x0f5d:  mov    %eax,(%esp)
082eef1a +0x0f60:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
082eef1f +0x0f65:  mov    0x10(%ebp),%eax
082eef22 +0x0f68:  mov    %eax,(%esp)
082eef25 +0x0f6b:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
082eef2a +0x0f70:  movzwl %ax,%eax
082eef2d +0x0f73:  mov    %eax,0x4(%esp)
082eef31 +0x0f77:  lea    -0xac(%ebp),%eax
082eef37 +0x0f7d:  mov    %eax,(%esp)
082eef3a +0x0f80:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
082eef3f +0x0f85:  movl   $0x4,0x4(%esp)
082eef47 +0x0f8d:  lea    -0xac(%ebp),%eax
082eef4d +0x0f93:  mov    %eax,(%esp)
082eef50 +0x0f96:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082eef55 +0x0f9b:  mov    -0x9c(%ebp),%eax
082eef5b +0x0fa1:  mov    %eax,0x4(%esp)
082eef5f +0x0fa5:  lea    -0xac(%ebp),%eax
082eef65 +0x0fab:  mov    %eax,(%esp)
082eef68 +0x0fae:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
082eef6d +0x0fb3:  movl   $0x1,0x4(%esp)
082eef75 +0x0fbb:  lea    -0xac(%ebp),%eax
082eef7b +0x0fc1:  mov    %eax,(%esp)
082eef7e +0x0fc4:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
082eef83 +0x0fc9:  lea    -0xac(%ebp),%eax
082eef89 +0x0fcf:  mov    %eax,0x4(%esp)
082eef8d +0x0fd3:  mov    0xc(%ebp),%eax
082eef90 +0x0fd6:  mov    %eax,(%esp)
082eef93 +0x0fd9:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
082eef98 +0x0fde:  jmp    082eefb2 <+0xff8>
082eef9a +0x0fe0:  mov    %edx,%ebx
082eef9c +0x0fe2:  mov    %eax,%edi
082eef9e +0x0fe4:  lea    -0xac(%ebp),%eax
082eefa4 +0x0fea:  mov    %eax,(%esp)
082eefa7 +0x0fed:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082eefac +0x0ff2:  mov    %edi,%eax
082eefae +0x0ff4:  mov    %ebx,%edx
082eefb0 +0x0ff6:  jmp    082eefc5 <+0x100b>
082eefb2 +0x0ff8:  lea    -0xac(%ebp),%eax
082eefb8 +0x0ffe:  mov    %eax,(%esp)
082eefbb +0x1001:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082eefc0 +0x1006:  jmp    082ef163 <+0x11a9>
082eefc5 +0x100b:  cmp    $0x1,%edx
082eefc8 +0x100e:  je     082eefd2 <+0x1018>
082eefca +0x1010:  mov    %eax,(%esp)
082eefcd +0x1013:  call   08ae3750 <_Unwind_Resume>
082eefd2 +0x1018:  mov    %eax,(%esp)
082eefd5 +0x101b:  call   08725ce0 <__cxa_begin_catch>
082eefda +0x1020:  mov    (%eax),%eax
082eefdc +0x1022:  mov    %eax,-0x1c(%ebp)
082eefdf +0x1025:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082eefe4 +0x102a:  mov    %eax,(%esp)
082eefe7 +0x102d:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
082eefec +0x1032:  test   %al,%al
082eefee +0x1034:  je     082ef00c <+0x1052>
082eeff0 +0x1036:  mov    0xc(%ebp),%eax
082eeff3 +0x1039:  mov    %eax,(%esp)
082eeff6 +0x103c:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
082eeffb +0x1041:  cmp    $0x7,%al
082eeffd +0x1043:  jne    082ef00c <+0x1052>
082eefff +0x1045:  cmpl   $0x0,0x14(%ebp)
082ef003 +0x1049:  jne    082ef00c <+0x1052>
082ef005 +0x104b:  mov    $0x1,%eax
082ef00a +0x1050:  jmp    082ef011 <+0x1057>
082ef00c +0x1052:  mov    $0x0,%eax
082ef011 +0x1057:  test   %al,%al
082ef013 +0x1059:  je     082ef02a <+0x1070>
082ef015 +0x105b:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082ef01a +0x1060:  mov    %eax,(%esp)
082ef01d +0x1063:  call   082f0906 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x68a>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x68a
082ef022 +0x1068:  mov    %eax,(%esp)
082ef025 +0x106b:  call   082f0850 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x5d4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x5d4
082ef02a +0x1070:  cmpl   $0x0,0x14(%ebp)
082ef02e +0x1074:  je     082ef047 <+0x108d>
082ef030 +0x1076:  mov    -0x1c(%ebp),%edx
082ef033 +0x1079:  mov    0x14(%ebp),%eax
082ef036 +0x107c:  mov    %edx,(%eax)
082ef038 +0x107e:  mov    $0x0,%esi
082ef03d +0x1083:  mov    $0x0,%ebx
082ef042 +0x1088:  jmp    082ef15a <+0x11a0>
082ef047 +0x108d:  mov    -0x94(%ebp),%edx
082ef04d +0x1093:  mov    -0x98(%ebp),%eax
082ef053 +0x1099:  mov    %edx,0x8(%esp)
082ef057 +0x109d:  mov    %eax,0x4(%esp)
082ef05b +0x10a1:  mov    0x8(%ebp),%eax
082ef05e +0x10a4:  mov    %eax,(%esp)
082ef061 +0x10a7:  call   082edb6a <_ZN11pvp_assault11CAssaultMgr16FreeAssaultPlaceEiPNS_13CAssaultPlaceE>  ; pvp_assault::CAssaultMgr::FreeAssaultPlace(int, pvp_assault::CAssaultPlace*)
082ef066 +0x10ac:  lea    -0xb8(%ebp),%eax
082ef06c +0x10b2:  mov    %eax,(%esp)
082ef06f +0x10b5:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082ef074 +0x10ba:  movl   $0xa,0x8(%esp)
082ef07c +0x10c2:  movl   $0x1,0x4(%esp)
082ef084 +0x10ca:  lea    -0xb8(%ebp),%eax
082ef08a +0x10d0:  mov    %eax,(%esp)
082ef08d +0x10d3:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
082ef092 +0x10d8:  movl   $0x0,0x4(%esp)
082ef09a +0x10e0:  lea    -0xb8(%ebp),%eax
082ef0a0 +0x10e6:  mov    %eax,(%esp)
082ef0a3 +0x10e9:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082ef0a8 +0x10ee:  mov    -0x1c(%ebp),%eax
082ef0ab +0x10f1:  mov    %eax,0x4(%esp)
082ef0af +0x10f5:  lea    -0xb8(%ebp),%eax
082ef0b5 +0x10fb:  mov    %eax,(%esp)
082ef0b8 +0x10fe:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082ef0bd +0x1103:  movl   $0x4,0x4(%esp)
082ef0c5 +0x110b:  lea    -0xb8(%ebp),%eax
082ef0cb +0x1111:  mov    %eax,(%esp)
082ef0ce +0x1114:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082ef0d3 +0x1119:  mov    -0x9c(%ebp),%eax
082ef0d9 +0x111f:  mov    %eax,0x4(%esp)
082ef0dd +0x1123:  lea    -0xb8(%ebp),%eax
082ef0e3 +0x1129:  mov    %eax,(%esp)
082ef0e6 +0x112c:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
082ef0eb +0x1131:  movl   $0x1,0x4(%esp)
082ef0f3 +0x1139:  lea    -0xb8(%ebp),%eax
082ef0f9 +0x113f:  mov    %eax,(%esp)
082ef0fc +0x1142:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
082ef101 +0x1147:  lea    -0xb8(%ebp),%eax
082ef107 +0x114d:  mov    %eax,0x4(%esp)
082ef10b +0x1151:  mov    0xc(%ebp),%eax
082ef10e +0x1154:  mov    %eax,(%esp)
082ef111 +0x1157:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
082ef116 +0x115c:  jmp    082ef130 <+0x1176>
082ef118 +0x115e:  mov    %edx,%ebx
082ef11a +0x1160:  mov    %eax,%esi
082ef11c +0x1162:  lea    -0xb8(%ebp),%eax
082ef122 +0x1168:  mov    %eax,(%esp)
082ef125 +0x116b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082ef12a +0x1170:  mov    %esi,%eax
082ef12c +0x1172:  mov    %ebx,%edx
082ef12e +0x1174:  jmp    082ef145 <+0x118b>
082ef130 +0x1176:  lea    -0xb8(%ebp),%eax
082ef136 +0x117c:  mov    %eax,(%esp)
082ef139 +0x117f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082ef13e +0x1184:  mov    $0x1,%ebx
082ef143 +0x1189:  jmp    082ef15a <+0x11a0>
082ef145 +0x118b:  mov    %edx,%ebx
082ef147 +0x118d:  mov    %eax,%esi
082ef149 +0x118f:  call   08725c30 <__cxa_end_catch>
082ef14e +0x1194:  mov    %esi,%eax
082ef150 +0x1196:  mov    %ebx,%edx
082ef152 +0x1198:  mov    %eax,(%esp)
082ef155 +0x119b:  call   08ae3750 <_Unwind_Resume>
082ef15a +0x11a0:  call   08725c30 <__cxa_end_catch>
082ef15f +0x11a5:  test   %ebx,%ebx
082ef161 +0x11a7:  je     082ef168 <+0x11ae>
082ef163 +0x11a9:  mov    $0x1,%esi
082ef168 +0x11ae:  mov    %esi,%eax
082ef16a +0x11b0:  lea    -0xc(%ebp),%esp
082ef16d +0x11b3:  add    $0x0,%esp
082ef170 +0x11b6:  pop    %ebx
082ef171 +0x11b7:  pop    %esi
082ef172 +0x11b8:  pop    %edi
082ef173 +0x11b9:  pop    %ebp
082ef174 +0x11ba:  ret
082ef175 +0x11bb:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultMgr::OnRequestAssault @ 0x82edfba

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* pvp_assault::CAssaultMgr::OnRequestAssault(CUser*, CUser*, int*) */

undefined4 __thiscall
pvp_assault::CAssaultMgr::OnRequestAssault
          (CAssaultMgr *this,CUser *param_1,CUser *param_2,int *param_3)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  undefined4 *puVar6;
  CPowerWarLog *pCVar7;
  int *piVar8;
  int iVar9;
  GameWorld *this_00;
  uint uVar10;
  int iVar11;
  uint uVar12;
  CPrivateStoreMgr *pCVar13;
  CInventory *pCVar14;
  CAssaultPlaceFactory *this_01;
  CDataManager *this_02;
  longdouble lVar15;
  PacketGuard local_b0 [15];
  bool local_a1;
  int local_a0;
  CAssaultPlace *local_9c;
  CAssaultPlace *local_98;
  pair local_94 [8];
  pair<unsigned_int_const,pvp_assault::CAssaultPlace*> local_8c [8];
  uint local_84 [2];
  undefined1 local_79 [2];
  int local_77;
  CPrivateStore *local_3c;
  CParty *local_38;
  CParty *local_34;
  CParty *local_30;
  int local_2c;
  CEquipItem *local_28;
  int local_24;
  
  local_98 = (CAssaultPlace *)0x0;
  local_9c = (CAssaultPlace *)0x0;
  local_a0 = 0;
                    /* try { // try from 082edfea to 082eef00 has its CatchHandler @ 082eefc5 */
  cVar2 = CUser::isCompetitionMercenary(param_1);
  if (cVar2 != '\0') {
    puVar6 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar6 = 0xea;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
  }
  cVar2 = CUser::isCompetitionMercenary(param_2);
  if (cVar2 != '\0') {
    puVar6 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar6 = 0x15;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
  }
  cVar2 = CPowerManager::IsPowerWarEventOn();
  if (cVar2 != '\x01') {
    sVar4 = CUserCharacInfo::GetCurCharacAssaultedUserId((CUserCharacInfo *)param_1);
    sVar5 = CUser::get_unique_id(param_2);
    if (sVar4 != sVar5) {
      LogManager::logFormat
                (1,"Assault.cpp",
                 "bool pvp_assault::CAssaultMgr::OnRequestAssault(CUser*, CUser*, int*)",0x1291,
                 "CAssaultMgr::OnRequestAssault ERROR - pAssaultedUser Unique ID is invalid");
      puVar6 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar6 = 0x13;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
    }
  }
  local_a1 = false;
  cVar2 = expert_job::CAlchemist::GetAssaultPrevent(param_1,&local_a1);
  if (cVar2 != '\0') {
    cVar2 = CPowerManager::IsPowerWarEventOn();
    if (cVar2 == '\0') {
      if (local_a1 == false) {
        puVar6 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar6 = 0xfb;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
      }
      puVar6 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar6 = 0xfd;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
    }
    cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
    if (cVar2 != '\a') {
      if (local_a1 == false) {
        puVar6 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar6 = 0xfb;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
      }
      puVar6 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar6 = 0xfd;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
    }
  }
  cVar2 = village_attacked::CVillageMonsterMgr::OnEvent(GlobalData::s_villageMonsterMgr);
  if (cVar2 != '\0') {
    puVar6 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar6 = 0xd9;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
  }
  cVar2 = CPowerManager::IsPowerWarEventOn();
  if (((cVar2 == '\0') ||
      (cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1), cVar2 != '\a')) ||
     (param_3 != (int *)0x0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    pCVar7 = (CPowerWarLog *)CPowerManager::GetPowerWarLog(GlobalData::s_power_manager);
    CPowerWarLog::IncAssaultAttemptCount(pCVar7);
  }
  piVar8 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x2a);
  cVar2 = (**(code **)(*piVar8 + 0x34))(piVar8,0);
  if (cVar2 != '\0') {
    puVar6 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar6 = 0xb2;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
  }
  cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
  if (cVar2 == '\b') {
    puVar6 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar6 = 0x13;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
  }
  cVar2 = CPowerManager::IsPowerWarEventOn();
  if (cVar2 == '\0') {
    cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
    if (cVar2 == '\a') {
      puVar6 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar6 = 0x13;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
    }
  }
  else {
    cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
    if (cVar2 != '\a') {
      puVar6 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar6 = 0xfc;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
    }
    iVar9 = CUser::get_area(param_1,false);
    cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
    this_00 = (GameWorld *)G_GameWorld();
    cVar2 = GameWorld::IsPowerWarSafeZone(this_00,(int)cVar2,iVar9);
    if (cVar2 != '\0') {
      puVar6 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar6 = 0x13;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
    }
    cVar2 = CUser::getPowerSide(param_1);
    cVar3 = CUser::getPowerSide(param_2);
    if (((cVar2 == cVar3) ||
        (cVar2 = CUserCharacInfo::isJoinPowerWar((CUserCharacInfo *)param_1), cVar2 == '\0')) ||
       (cVar2 = CUserCharacInfo::isJoinPowerWar((CUserCharacInfo *)param_2), cVar2 == '\0')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      puVar6 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar6 = 0x13;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
    }
    local_34 = (CParty *)CUser::GetParty(param_1);
    if ((local_34 == (CParty *)0x0) ||
       (cVar2 = CParty::CanDoPartyActionAssalutState(local_34), cVar2 == '\x01')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      puVar6 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar6 = 0x13;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
    }
    cVar2 = CUserCharacInfo::GetCurCharacSuperState((CUserCharacInfo *)param_2);
    if (cVar2 != '\0') {
      puVar6 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar6 = 0x13;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
    }
  }
  cVar2 = expert_job::CAlchemist::GetAssaultPrevent(param_2,(bool *)0x0);
  if ((cVar2 == '\0') || (cVar2 = CPowerManager::IsPowerWarEventOn(), cVar2 == '\x01')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    puVar6 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar6 = 0x11;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
  }
  iVar9 = G_CEnvironment();
  if (*(int *)(iVar9 + 0x378) == 3) {
    iVar9 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
    if ((iVar9 == 0x1eaa0d) ||
       (iVar9 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2), iVar9 == 0x2c55a8)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      puVar6 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar6 = 0x13;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
    }
  }
  if (*this != (CAssaultMgr)0x1) {
    uVar10 = CUserCharacInfo::getCurrCharacBlackCount((CUserCharacInfo *)param_2);
    if ((uVar10 < 100) &&
       (iVar9 = CUserCharacInfo::GetCurCharacChaosPoint((CUserCharacInfo *)param_2), iVar9 == 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      puVar6 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar6 = 8;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
    }
  }
  iVar9 = CUserCharacInfo::GetAssaultPlace((CUserCharacInfo *)param_1);
  if (iVar9 != 0) {
    puVar6 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar6 = 0x13;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
  }
  iVar9 = CUserCharacInfo::GetAssaultPlace((CUserCharacInfo *)param_2);
  if (iVar9 != 0) {
    puVar6 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar6 = 0x12;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
  }
  iVar9 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar9 == 0) {
    puVar6 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar6 = 0x13;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
  }
  iVar9 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  if (iVar9 == 0) {
    puVar6 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar6 = 0x13;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
  }
  iVar9 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  iVar11 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
  if (iVar9 == iVar11) {
    puVar6 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar6 = 0x13;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
  }
  uVar10 = CUser::get_posX(param_1);
  uVar12 = CUser::get_posX(param_2);
  uVar10 = (uVar10 & 0xffff) - (uVar12 & 0xffff);
  uVar12 = (int)uVar10 >> 0x1f;
  if ((int)((uVar10 ^ uVar12) - uVar12) < 0x65) {
    uVar10 = CUser::get_posY(param_1);
    uVar12 = CUser::get_posY(param_2);
    uVar10 = (uVar10 & 0xffff) - (uVar12 & 0xffff);
    uVar12 = (int)uVar10 >> 0x1f;
    if (100 < (int)((uVar10 ^ uVar12) - uVar12)) goto LAB_082ee825;
    bVar1 = false;
  }
  else {
LAB_082ee825:
    bVar1 = true;
  }
  if (bVar1) {
    puVar6 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar6 = 99;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
  }
  cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
  cVar3 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_2);
  if (cVar2 == cVar3) {
    iVar9 = CUser::get_area(param_1,false);
    iVar11 = CUser::get_area(param_2,false);
    if (iVar9 == iVar11) {
      bVar1 = false;
      goto LAB_082ee8b5;
    }
  }
  bVar1 = true;
LAB_082ee8b5:
  if (bVar1) {
    puVar6 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar6 = 0x13;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
  }
  cVar2 = CPowerManager::IsPowerWarEventOn();
  if (cVar2 != '\x01') {
    cVar2 = IsStayGate(param_1);
    if ((cVar2 == '\0') && (cVar2 = IsStayGate(param_2), cVar2 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      puVar6 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar6 = 0x13;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
    }
  }
  local_3c = (CPrivateStore *)0x0;
  pCVar13 = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
  local_3c = (CPrivateStore *)private_store::CPrivateStoreMgr::FindStoreSeller(pCVar13,param_1);
  if ((local_3c != (CPrivateStore *)0x0) &&
     (cVar2 = private_store::CPrivateStore::isDollCreated(local_3c), cVar2 != '\x01')) {
    puVar6 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar6 = 0x3c;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
  }
  pCVar13 = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
  local_3c = (CPrivateStore *)private_store::CPrivateStoreMgr::FindStoreSeller(pCVar13,param_2);
  if ((local_3c != (CPrivateStore *)0x0) &&
     (cVar2 = private_store::CPrivateStore::isDollCreated(local_3c), cVar2 != '\x01')) {
    puVar6 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar6 = 0x3c;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
  }
  local_38 = (CParty *)0x0;
  cVar2 = CUser::CheckInParty(param_1);
  if (cVar2 != '\0') {
    local_38 = (CParty *)CUser::GetParty(param_1);
  }
  if ((local_38 != (CParty *)0x0) && (cVar2 = CParty::IsExistUser(local_38,param_2), cVar2 != '\0'))
  {
    puVar6 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar6 = 0x13;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
  }
  cVar2 = CPowerManager::IsPowerWarEventOn();
  if ((cVar2 == '\0') ||
     (cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_2), cVar2 != '\a')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (((bVar1) && (local_30 = (CParty *)CUser::GetParty(param_2), local_30 != (CParty *)0x0)) &&
     (cVar2 = CParty::IsThereGhostInParty(local_30), cVar2 != '\0')) {
    puVar6 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar6 = 0x13;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
  }
  AvailableAssault(param_1,param_1);
  AvailableAssault(param_2,param_1);
  local_a0 = CUserCharacInfo::GetCurCharacAssaultMoney((CUserCharacInfo *)param_1);
  pCVar14 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  iVar11 = CInventory::get_money(pCVar14);
  iVar9 = local_a0;
  if (iVar11 < local_a0) {
    pCVar14 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    local_a0 = CInventory::get_money(pCVar14);
    local_a0 = iVar9 - local_a0;
    puVar6 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar6 = 10;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
  }
  if (param_3 == (int *)0x0) {
    this_01 = (CAssaultPlaceFactory *)GetInstanceAssaultPlaceFactory();
    local_98 = (CAssaultPlace *)CAssaultPlaceFactory::AcquireAssaultPlace(this_01);
    if (local_98 != (CAssaultPlace *)0x0) {
      CAssaultPlace::Reset(local_98);
      local_9c = (CAssaultPlace *)_GetNextAssaultPlaceId(this);
      CAssaultPlace::SetAssaultPlaceId(local_98,(uint)local_9c);
      CAssaultPlace::MakeTeam((CUser *)local_98,param_1,(int *)param_2);
      std::make_pair<unsigned_int&,pvp_assault::CAssaultPlace*&>(local_84,&local_9c);
      std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>::
      pair<unsigned_int,pvp_assault::CAssaultPlace*>(local_8c,(pair *)local_84);
      std::
      map<unsigned_int,pvp_assault::CAssaultPlace*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>>
      ::insert(local_94);
      iVar9 = CAssaultPlace::GetAuthenValue(local_98);
      iVar11 = CAssaultPlace::GetAssaultPlaceId(local_98);
      TimerCompleteLoadAssaultTimeout::registNextTimer(0x3c,iVar11,iVar9);
      cVar2 = CPowerManager::IsPowerWarEventOn();
      if ((cVar2 == '\0') ||
         (cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1), cVar2 != '\a')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        local_a0 = 0;
      }
      if (0 < local_a0) {
        iVar9 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        CInventory::GetInvenSlot((int)local_79,iVar9);
        local_2c = local_77;
        this_02 = (CDataManager *)G_CDataManager();
        local_28 = (CEquipItem *)CDataManager::find_item(this_02,local_2c);
        iVar9 = local_a0;
        if (local_28 != (CEquipItem *)0x0) {
          lVar15 = (longdouble)CEquipItem::getUpgradeCostDiscount(local_28);
          local_a0 = (int)ROUND((lVar15 * (longdouble)iVar9) / (longdouble)_DAT_08c1d18c +
                                (longdouble)iVar9);
        }
        iVar9 = local_a0;
        pCVar14 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        CInventory::use_money(pCVar14,iVar9,0x15,1);
        CUserCharacInfo::SetCurCharacAssaultMoney((CUserCharacInfo *)param_1,0);
        CUserCharacInfo::SetCurCharacAssaultedUserId((CUserCharacInfo *)param_1,0);
      }
      CUserCharacInfo::IncCurCharacAssaultCount((CUserCharacInfo *)param_1);
      cVar2 = CPowerManager::IsPowerWarEventOn();
      if ((cVar2 == '\0') ||
         (cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1), cVar2 != '\a')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        local_24 = CAssaultPlace::GetAssaulterCount(local_98);
        pCVar7 = (CPowerWarLog *)CPowerManager::GetPowerWarLog(GlobalData::s_power_manager);
        CPowerWarLog::IncTotalJoinAssaultUser(pCVar7,local_24);
        pCVar7 = (CPowerWarLog *)CPowerManager::GetPowerWarLog(GlobalData::s_power_manager);
        CPowerWarLog::IncAssaultAttemptSuccessCount(pCVar7);
      }
      _SendVictoryInfo(this,param_1,param_2);
      PacketGuard::PacketGuard(local_b0);
                    /* try { // try from 082eef1a to 082eef97 has its CatchHandler @ 082eef9a */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_b0,0,8);
      uVar10 = CUser::get_unique_id(param_2);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_b0,uVar10 & 0xffff);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,4);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_b0,local_a0);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_b0,true);
      CUser::Send(param_1,local_b0);
                    /* try { // try from 082eefbb to 082eefbf has its CatchHandler @ 082eefc5 */
      PacketGuard::~PacketGuard(local_b0);
      return 1;
    }
    puVar6 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar6 = 0x16;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
  }
  return 1;
}
```
