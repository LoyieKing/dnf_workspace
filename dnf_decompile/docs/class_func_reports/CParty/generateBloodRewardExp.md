# generateBloodRewardExp

`_ZN6CParty22generateBloodRewardExpEiijs`

`CParty::generateBloodRewardExp(int, int, unsigned int, short)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b7ea2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b7ea2  _ZN6CParty22generateBloodRewardExpEiijs
#           CParty::generateBloodRewardExp(int, int, unsigned int, short)
# range [0x085b7ea2, 0x085b840d]
085b7ea2 +0x000:  push   %ebp
085b7ea3 +0x001:  mov    %esp,%ebp
085b7ea5 +0x003:  push   %esi
085b7ea6 +0x004:  push   %ebx
085b7ea7 +0x005:  sub    $0x140,%esp
085b7ead +0x00b:  mov    0x18(%ebp),%eax
085b7eb0 +0x00e:  mov    %ax,-0xcc(%ebp)
085b7eb7 +0x015:  mov    0xc(%ebp),%eax
085b7eba +0x018:  mov    %eax,0x4(%esp)
085b7ebe +0x01c:  mov    0x8(%ebp),%eax
085b7ec1 +0x01f:  mov    %eax,(%esp)
085b7ec4 +0x022:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
085b7ec9 +0x027:  mov    %eax,-0x18(%ebp)
085b7ecc +0x02a:  movl   $0x0,-0x1c(%ebp)
085b7ed3 +0x031:  mov    0x8(%ebp),%eax
085b7ed6 +0x034:  mov    0xcac(%eax),%eax
085b7edc +0x03a:  movzbl 0x89f(%eax),%eax
085b7ee3 +0x041:  cmp    $0x2,%al
085b7ee5 +0x043:  jne    085b7f66 <+0xc4>
085b7ee7 +0x045:  mov    0x10(%ebp),%eax
085b7eea +0x048:  imul   0x14(%ebp),%eax
085b7eee +0x04c:  mov    $0x0,%edx
085b7ef3 +0x051:  mov    %eax,-0xd8(%ebp)
085b7ef9 +0x057:  mov    %edx,-0xd4(%ebp)
085b7eff +0x05d:  fildll -0xd8(%ebp)
085b7f05 +0x063:  fstps  -0xf4(%ebp)
085b7f0b +0x069:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085b7f10 +0x06e:  mov    0x10(%ebp),%edx
085b7f13 +0x071:  add    $0x178c,%edx
085b7f19 +0x077:  flds   (%eax,%edx,4)
085b7f1c +0x07a:  fmuls  -0xf4(%ebp)
085b7f22 +0x080:  flds   &data#450ca4e0(.rodata)
085b7f28 +0x086:  fmulp  %st,%st(1)
085b7f2a +0x088:  fnstcw -0xda(%ebp)
085b7f30 +0x08e:  movzwl -0xda(%ebp),%eax
085b7f37 +0x095:  mov    $0xc,%ah
085b7f39 +0x097:  mov    %ax,-0xdc(%ebp)
085b7f40 +0x09e:  fldcw  -0xdc(%ebp)
085b7f46 +0x0a4:  fistpll -0xd8(%ebp)
085b7f4c +0x0aa:  fldcw  -0xda(%ebp)
085b7f52 +0x0b0:  mov    -0xd8(%ebp),%eax
085b7f58 +0x0b6:  mov    -0xd4(%ebp),%edx
085b7f5e +0x0bc:  mov    %eax,-0x1c(%ebp)
085b7f61 +0x0bf:  jmp    085b8005 <+0x163>
085b7f66 +0x0c4:  mov    0x10(%ebp),%eax
085b7f69 +0x0c7:  imul   0x14(%ebp),%eax
085b7f6d +0x0cb:  mov    $0x0,%edx
085b7f72 +0x0d0:  mov    %eax,-0xd8(%ebp)
085b7f78 +0x0d6:  mov    %edx,-0xd4(%ebp)
085b7f7e +0x0dc:  fildll -0xd8(%ebp)
085b7f84 +0x0e2:  fstps  -0xf0(%ebp)
085b7f8a +0x0e8:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085b7f8f +0x0ed:  mov    0x10(%ebp),%edx
085b7f92 +0x0f0:  add    $0x178c,%edx
085b7f98 +0x0f6:  flds   (%eax,%edx,4)
085b7f9b +0x0f9:  flds   -0xf0(%ebp)
085b7fa1 +0x0ff:  fmulp  %st,%st(1)
085b7fa3 +0x101:  fstps  -0xec(%ebp)
085b7fa9 +0x107:  movswl -0xcc(%ebp),%ebx
085b7fb0 +0x10e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085b7fb5 +0x113:  add    $0x6164,%eax
085b7fba +0x118:  mov    %ebx,0x4(%esp)
085b7fbe +0x11c:  mov    %eax,(%esp)
085b7fc1 +0x11f:  call   082f110a <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0xe8e>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0xe8e
085b7fc6 +0x124:  flds   (%eax)
085b7fc8 +0x126:  fmuls  -0xec(%ebp)
085b7fce +0x12c:  fnstcw -0xda(%ebp)
085b7fd4 +0x132:  movzwl -0xda(%ebp),%eax
085b7fdb +0x139:  mov    $0xc,%ah
085b7fdd +0x13b:  mov    %ax,-0xdc(%ebp)
085b7fe4 +0x142:  fldcw  -0xdc(%ebp)
085b7fea +0x148:  fistpll -0xd8(%ebp)
085b7ff0 +0x14e:  fldcw  -0xda(%ebp)
085b7ff6 +0x154:  mov    -0xd8(%ebp),%eax
085b7ffc +0x15a:  mov    -0xd4(%ebp),%edx
085b8002 +0x160:  mov    %eax,-0x1c(%ebp)
085b8005 +0x163:  mov    -0x1c(%ebp),%eax
085b8008 +0x166:  cmp    $0xf4240,%eax
085b800d +0x16b:  jbe    085b80a3 <+0x201>
085b8013 +0x171:  movswl -0xcc(%ebp),%ebx
085b801a +0x178:  movswl -0xcc(%ebp),%esi
085b8021 +0x17f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085b8026 +0x184:  add    $0x6164,%eax
085b802b +0x189:  mov    %esi,0x4(%esp)
085b802f +0x18d:  mov    %eax,(%esp)
085b8032 +0x190:  call   082f110a <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0xe8e>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0xe8e
085b8037 +0x195:  flds   (%eax)
085b8039 +0x197:  fstpl  -0xe8(%ebp)
085b803f +0x19d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085b8044 +0x1a2:  mov    0x10(%ebp),%edx
085b8047 +0x1a5:  add    $0x178c,%edx
085b804d +0x1ab:  flds   (%eax,%edx,4)
085b8050 +0x1ae:  mov    -0x1c(%ebp),%eax
085b8053 +0x1b1:  mov    %ebx,0x30(%esp)
085b8057 +0x1b5:  mov    0x10(%ebp),%edx
085b805a +0x1b8:  mov    %edx,0x2c(%esp)
085b805e +0x1bc:  fldl   -0xe8(%ebp)
085b8064 +0x1c2:  fstpl  0x24(%esp)
085b8068 +0x1c6:  fstpl  0x1c(%esp)
085b806c +0x1ca:  mov    0x14(%ebp),%edx
085b806f +0x1cd:  mov    %edx,0x18(%esp)
085b8073 +0x1d1:  mov    %eax,0x14(%esp)
085b8077 +0x1d5:  movl   $"BLOOD_LOG : EROOR BLOOD CLEAR REWARD EXP(%u), BASE EXP (%u), EXP_WEIGHT(%f), EXP_INOUT_WEIGHT(%f), LAST_ROUND(%d), INOUT_CNT(%d)\n",0x10(%esp)
085b807f +0x1dd:  movl   $0x3cec,0xc(%esp)
085b8087 +0x1e5:  movl   $&_ZZN6CParty22generateBloodRewardExpEiijsE19__PRETTY_FUNCTION__,0x8(%esp)
085b808f +0x1ed:  movl   $"party.cpp",0x4(%esp)
085b8097 +0x1f5:  movl   $0x1,(%esp)
085b809e +0x1fc:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085b80a3 +0x201:  lea    -0x64(%ebp),%eax
085b80a6 +0x204:  mov    %eax,(%esp)
085b80a9 +0x207:  call   0814a800 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x59f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x59f
085b80ae +0x20c:  lea    -0xc4(%ebp),%eax
085b80b4 +0x212:  mov    %eax,(%esp)
085b80b7 +0x215:  call   0814a8b8 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x657>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x657
085b80bc +0x21a:  mov    0x8(%ebp),%eax
085b80bf +0x21d:  mov    %eax,(%esp)
085b80c2 +0x220:  call   0814a9c2 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x761>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x761
085b80c7 +0x225:  fstps  -0xbc(%ebp)
085b80cd +0x22b:  mov    -0x18(%ebp),%eax
085b80d0 +0x22e:  mov    %eax,0x4(%esp)
085b80d4 +0x232:  mov    0x8(%ebp),%eax
085b80d7 +0x235:  mov    %eax,(%esp)
085b80da +0x238:  call   0814a9e2 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x781>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x781
085b80df +0x23d:  fstps  -0xb8(%ebp)
085b80e5 +0x243:  mov    &_ZN10GlobalData15s_event_managerE,%eax
085b80ea +0x248:  movl   $0x8,0x4(%esp)
085b80f2 +0x250:  mov    %eax,(%esp)
085b80f5 +0x253:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
085b80fa +0x258:  mov    (%eax),%edx
085b80fc +0x25a:  add    $0x34,%edx
085b80ff +0x25d:  mov    (%edx),%ecx
085b8101 +0x25f:  mov    -0x18(%ebp),%edx
085b8104 +0x262:  mov    %edx,0x4(%esp)
085b8108 +0x266:  mov    %eax,(%esp)
085b810b +0x269:  call   *%ecx
085b810d +0x26b:  test   %al,%al
085b810f +0x26d:  je     085b8159 <+0x2b7>
085b8111 +0x26f:  mov    &_ZN10GlobalData15s_event_managerE,%eax
085b8116 +0x274:  movl   $0x8,0x4(%esp)
085b811e +0x27c:  mov    %eax,(%esp)
085b8121 +0x27f:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
085b8126 +0x284:  mov    %eax,(%esp)
085b8129 +0x287:  call   0814aae4 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x883>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x883
085b812e +0x28c:  mov    %eax,%ecx
085b8130 +0x28e:  mov    $0x51eb851f,%edx
085b8135 +0x293:  mov    %ecx,%eax
085b8137 +0x295:  imul   %edx
085b8139 +0x297:  sar    $0x5,%edx
085b813c +0x29a:  mov    %ecx,%eax
085b813e +0x29c:  sar    $0x1f,%eax
085b8141 +0x29f:  mov    %edx,%ecx
085b8143 +0x2a1:  sub    %eax,%ecx
085b8145 +0x2a3:  mov    %ecx,%eax
085b8147 +0x2a5:  mov    %eax,-0xd0(%ebp)
085b814d +0x2ab:  fildl  -0xd0(%ebp)
085b8153 +0x2b1:  fstps  -0xb4(%ebp)
085b8159 +0x2b7:  mov    &_ZN10GlobalData15s_event_managerE,%eax
085b815e +0x2bc:  movl   $0x3,0x4(%esp)
085b8166 +0x2c4:  mov    %eax,(%esp)
085b8169 +0x2c7:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
085b816e +0x2cc:  mov    (%eax),%edx
085b8170 +0x2ce:  add    $0x34,%edx
085b8173 +0x2d1:  mov    (%edx),%edx
085b8175 +0x2d3:  movl   $0x0,0x4(%esp)
085b817d +0x2db:  mov    %eax,(%esp)
085b8180 +0x2de:  call   *%edx
085b8182 +0x2e0:  test   %al,%al
085b8184 +0x2e2:  je     085b81bd <+0x31b>
085b8186 +0x2e4:  mov    &_ZN10GlobalData15s_event_managerE,%eax
085b818b +0x2e9:  movl   $0x3,0x4(%esp)
085b8193 +0x2f1:  mov    %eax,(%esp)
085b8196 +0x2f4:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
085b819b +0x2f9:  mov    %eax,(%esp)
085b819e +0x2fc:  call   0814aad8 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x877>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x877
085b81a3 +0x301:  mov    %eax,-0xd0(%ebp)
085b81a9 +0x307:  fildl  -0xd0(%ebp)
085b81af +0x30d:  flds   ""
085b81b5 +0x313:  fdivrp %st,%st(1)
085b81b7 +0x315:  fstps  -0xb0(%ebp)
085b81bd +0x31b:  mov    &_ZN10GlobalData15s_event_managerE,%eax
085b81c2 +0x320:  movl   $0xf,0x4(%esp)
085b81ca +0x328:  mov    %eax,(%esp)
085b81cd +0x32b:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
085b81d2 +0x330:  mov    %eax,-0x14(%ebp)
085b81d5 +0x333:  mov    -0x14(%ebp),%eax
085b81d8 +0x336:  mov    (%eax),%eax
085b81da +0x338:  add    $0x34,%eax
085b81dd +0x33b:  mov    (%eax),%edx
085b81df +0x33d:  mov    -0x14(%ebp),%eax
085b81e2 +0x340:  movl   $0x0,0x4(%esp)
085b81ea +0x348:  mov    %eax,(%esp)
085b81ed +0x34b:  call   *%edx
085b81ef +0x34d:  test   %al,%al
085b81f1 +0x34f:  je     085b8216 <+0x374>
085b81f3 +0x351:  mov    -0x18(%ebp),%eax
085b81f6 +0x354:  mov    %eax,(%esp)
085b81f9 +0x357:  call   08110cba <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1cc>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1cc
085b81fe +0x35c:  movzwl %ax,%eax
085b8201 +0x35f:  mov    %eax,0x4(%esp)
085b8205 +0x363:  mov    -0x14(%ebp),%eax
085b8208 +0x366:  mov    %eax,(%esp)
085b820b +0x369:  call   0810a0ec <_ZNK20CBurningFatigueEvent15getBonusExpRateEt>  ; CBurningFatigueEvent::getBonusExpRate(unsigned short) const
085b8210 +0x36e:  mov    %eax,-0xa8(%ebp)
085b8216 +0x374:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085b821b +0x379:  mov    %eax,(%esp)
085b821e +0x37c:  call   0814a6f8 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x497>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x497
085b8223 +0x381:  mov    %eax,-0xc(%ebp)
085b8226 +0x384:  mov    0x8(%ebp),%eax
085b8229 +0x387:  mov    0xcac(%eax),%eax
085b822f +0x38d:  mov    %eax,(%esp)
085b8232 +0x390:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
085b8237 +0x395:  mov    %eax,%esi
085b8239 +0x397:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
085b823e +0x39c:  mov    %eax,(%esp)
085b8241 +0x39f:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
085b8246 +0x3a4:  mov    %eax,%ebx
085b8248 +0x3a6:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
085b824d +0x3ab:  mov    0x378(%eax),%eax
085b8253 +0x3b1:  movzbl %al,%eax
085b8256 +0x3b4:  mov    %esi,0xc(%esp)
085b825a +0x3b8:  mov    %ebx,0x8(%esp)
085b825e +0x3bc:  mov    %eax,0x4(%esp)
085b8262 +0x3c0:  mov    -0xc(%ebp),%eax
085b8265 +0x3c3:  mov    %eax,(%esp)
085b8268 +0x3c6:  call   088dce3c <_ZNK16channel_script_t12getBonusRateEhjj>  ; channel_script_t::getBonusRate(unsigned char, unsigned int, unsigned int) const
085b826d +0x3cb:  fstps  -0xa4(%ebp)
085b8273 +0x3d1:  mov    -0x18(%ebp),%eax
085b8276 +0x3d4:  mov    %eax,(%esp)
085b8279 +0x3d7:  call   0812ce36 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0xb2>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0xb2
085b827e +0x3dc:  test   %al,%al
085b8280 +0x3de:  je     085b82af <+0x40d>
085b8282 +0x3e0:  mov    -0x18(%ebp),%eax
085b8285 +0x3e3:  mov    %eax,(%esp)
085b8288 +0x3e6:  call   0812ce28 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0xa4>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0xa4
085b828d +0x3eb:  mov    %eax,(%esp)
085b8290 +0x3ee:  call   0814aa08 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x7a7>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x7a7
085b8295 +0x3f3:  mov    %eax,-0xd0(%ebp)
085b829b +0x3f9:  fildl  -0xd0(%ebp)
085b82a1 +0x3ff:  flds   ""
085b82a7 +0x405:  fdivrp %st,%st(1)
085b82a9 +0x407:  fstps  -0xa0(%ebp)
085b82af +0x40d:  call   0814a6e0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x47f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x47f
085b82b4 +0x412:  mov    %eax,-0xd0(%ebp)
085b82ba +0x418:  fildl  -0xd0(%ebp)
085b82c0 +0x41e:  flds   ""
085b82c6 +0x424:  fdivrp %st,%st(1)
085b82c8 +0x426:  fstps  -0x9c(%ebp)
085b82ce +0x42c:  mov    -0x1c(%ebp),%eax
085b82d1 +0x42f:  mov    %eax,0xc(%esp)
085b82d5 +0x433:  mov    -0x18(%ebp),%eax
085b82d8 +0x436:  mov    %eax,0x8(%esp)
085b82dc +0x43a:  movl   $0x0,0x4(%esp)
085b82e4 +0x442:  mov    0x8(%ebp),%eax
085b82e7 +0x445:  mov    %eax,(%esp)
085b82ea +0x448:  call   085ada30 <_ZN6CParty20CalcurateManageBonusEN15ManageBonusType1TEP5CUserj>  ; CParty::CalcurateManageBonus(ManageBonusType::T, CUser*, unsigned int)
085b82ef +0x44d:  fstps  -0x88(%ebp)
085b82f5 +0x453:  lea    -0x64(%ebp),%eax
085b82f8 +0x456:  mov    %eax,0x10(%esp)
085b82fc +0x45a:  lea    -0xc4(%ebp),%eax
085b8302 +0x460:  mov    %eax,0xc(%esp)
085b8306 +0x464:  lea    -0x1c(%ebp),%eax
085b8309 +0x467:  mov    %eax,0x8(%esp)
085b830d +0x46b:  mov    -0x18(%ebp),%eax
085b8310 +0x46e:  mov    %eax,0x4(%esp)
085b8314 +0x472:  mov    0x8(%ebp),%eax
085b8317 +0x475:  mov    %eax,(%esp)
085b831a +0x478:  call   085ad278 <_ZN6CParty22getClearRewardBonusExpEP5CUserRjRK27stClearRewardExpParameter_tR23stClearRewardBonusExp_t>  ; CParty::getClearRewardBonusExp(CUser*, unsigned int&, stClearRewardExpParameter_t const&, stClearRewardBonusExp_t&)
085b831f +0x47d:  mov    %eax,-0x10(%ebp)
085b8322 +0x480:  cmpl   $0xf4240,-0x10(%ebp)
085b8329 +0x487:  jbe    085b83e4 <+0x542>
085b832f +0x48d:  mov    -0x10(%ebp),%eax
085b8332 +0x490:  mov    %eax,0x14(%esp)
085b8336 +0x494:  movl   $"BLOOD_LOG : EROOR BLOOD CLEAR REWARD EXP!! (%u)\n",0x10(%esp)
085b833e +0x49c:  movl   $0x3d12,0xc(%esp)
085b8346 +0x4a4:  movl   $&_ZZN6CParty22generateBloodRewardExpEiijsE19__PRETTY_FUNCTION__,0x8(%esp)
085b834e +0x4ac:  movl   $"party.cpp",0x4(%esp)
085b8356 +0x4b4:  movl   $0x1,(%esp)
085b835d +0x4bb:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085b8362 +0x4c0:  mov    -0xa8(%ebp),%eax
085b8368 +0x4c6:  flds   -0x9c(%ebp)
085b836e +0x4cc:  flds   -0xa0(%ebp)
085b8374 +0x4d2:  flds   -0xa4(%ebp)
085b837a +0x4d8:  flds   -0xb0(%ebp)
085b8380 +0x4de:  flds   -0xb4(%ebp)
085b8386 +0x4e4:  flds   -0xb8(%ebp)
085b838c +0x4ea:  flds   -0xbc(%ebp)
085b8392 +0x4f0:  fxch   %st(6)
085b8394 +0x4f2:  mov    %eax,0x4c(%esp)
085b8398 +0x4f6:  fstpl  0x44(%esp)
085b839c +0x4fa:  fxch   %st(4)
085b839e +0x4fc:  fstpl  0x3c(%esp)
085b83a2 +0x500:  fxch   %st(2)
085b83a4 +0x502:  fstpl  0x34(%esp)
085b83a8 +0x506:  fstpl  0x2c(%esp)
085b83ac +0x50a:  fstpl  0x24(%esp)
085b83b0 +0x50e:  fstpl  0x1c(%esp)
085b83b4 +0x512:  fstpl  0x14(%esp)
085b83b8 +0x516:  movl   $"BLOOD_LOG : EXP PARAMETER : %f, %f, %f, %f, %f, %f, %f, %d\n",0x10(%esp)
085b83c0 +0x51e:  movl   $0x3d1c,0xc(%esp)
085b83c8 +0x526:  movl   $&_ZZN6CParty22generateBloodRewardExpEiijsE19__PRETTY_FUNCTION__,0x8(%esp)
085b83d0 +0x52e:  movl   $"party.cpp",0x4(%esp)
085b83d8 +0x536:  movl   $0x1,(%esp)
085b83df +0x53d:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085b83e4 +0x542:  mov    0x8(%ebp),%eax
085b83e7 +0x545:  lea    0xddc(%eax),%edx
085b83ed +0x54b:  mov    -0x10(%ebp),%eax
085b83f0 +0x54e:  mov    %eax,0x8(%esp)
085b83f4 +0x552:  mov    0xc(%ebp),%eax
085b83f7 +0x555:  mov    %eax,0x4(%esp)
085b83fb +0x559:  mov    %edx,(%esp)
085b83fe +0x55c:  call   085bf144 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x6a2>  ; global constructors keyed to CParty::cMember::cMember()+0x6a2
085b8403 +0x561:  add    $0x140,%esp
085b8409 +0x567:  pop    %ebx
085b840a +0x568:  pop    %esi
085b840b +0x569:  pop    %ebp
085b840c +0x56a:  ret
085b840d +0x56b:  nop
```

## 反编译 C

```c
// CParty::generateBloodRewardExp @ 0x85b7ea2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CParty::generateBloodRewardExp(int, int, unsigned int, short) */

void __thiscall
CParty::generateBloodRewardExp(CParty *this,int param_1,int param_2,uint param_3,short param_4)

{
  float fVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  float *pfVar5;
  int *piVar6;
  CPCRoomBurningEvent *this_00;
  CExpDoubleEvent *this_01;
  CDataManager *this_02;
  uint uVar7;
  CEnvironment *this_03;
  uint uVar8;
  CUserPremium *this_04;
  longdouble lVar9;
  ulonglong local_dc;
  stClearRewardExpParameter_t local_c8 [8];
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  undefined4 local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_8c;
  stClearRewardBonusExp_t local_68 [72];
  uint local_20;
  CUser *local_1c;
  CBurningFatigueEvent *local_18;
  uint local_14;
  channel_script_t *local_10;
  
  local_1c = (CUser *)get_user(this,param_1);
  local_20 = 0;
  if (*(char *)(*(int *)(this + 0xcac) + 0x89f) == '\x02') {
    local_dc = (ulonglong)(param_2 * param_3);
    iVar4 = G_CDataManager();
    local_dc._0_4_ =
         (uint)(longlong)
               ROUND(_DAT_08cbbbf8 * *(float *)(iVar4 + (param_2 + 0x178c) * 4) * (float)local_dc);
    local_20 = (uint)local_dc;
  }
  else {
    local_dc = (ulonglong)(param_2 * param_3);
    iVar4 = G_CDataManager();
    fVar1 = *(float *)(iVar4 + (param_2 + 0x178c) * 4);
    iVar4 = G_CDataManager();
    pfVar5 = (float *)std::vector<float,std::allocator<float>>::operator[]
                                ((vector<float,std::allocator<float>> *)(iVar4 + 0x6164),
                                 (int)param_4);
    local_dc._0_4_ = (uint)(longlong)ROUND(*pfVar5 * (float)local_dc * fVar1);
    local_20 = (uint)local_dc;
  }
  if (1000000 < local_20) {
    iVar4 = G_CDataManager();
    pfVar5 = (float *)std::vector<float,std::allocator<float>>::operator[]
                                ((vector<float,std::allocator<float>> *)(iVar4 + 0x6164),
                                 (int)param_4);
    fVar1 = *pfVar5;
    iVar4 = G_CDataManager();
    LogManager::logFormat
              (1,"party.cpp",
               "void CParty::generateBloodRewardExp(int, int, unsigned int, short int)",0x3cec,
               "BLOOD_LOG : EROOR BLOOD CLEAR REWARD EXP(%u), BASE EXP (%u), EXP_WEIGHT(%f), EXP_INOUT_WEIGHT(%f), LAST_ROUND(%d), INOUT_CNT(%d)\n"
               ,local_20,param_3,(double)*(float *)(iVar4 + (param_2 + 0x178c) * 4),(double)fVar1,
               param_2,(int)param_4);
  }
  stClearRewardBonusExp_t::stClearRewardBonusExp_t(local_68);
  stClearRewardExpParameter_t::stClearRewardExpParameter_t(local_c8);
  lVar9 = (longdouble)getAvatarBonus(this);
  local_c0 = (float)lVar9;
  lVar9 = (longdouble)getCreatureBonus(this,local_1c);
  local_bc = (float)lVar9;
  piVar6 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,8);
  cVar2 = (**(code **)(*piVar6 + 0x34))(piVar6,local_1c);
  if (cVar2 != '\0') {
    this_00 = (CPCRoomBurningEvent *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,8);
    iVar4 = CPCRoomBurningEvent::GetExpFactor(this_00);
    local_b8 = (float)(iVar4 / 100);
  }
  piVar6 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,3);
  cVar2 = (**(code **)(*piVar6 + 0x34))(piVar6,0);
  if (cVar2 != '\0') {
    this_01 = (CExpDoubleEvent *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,3);
    iVar4 = CExpDoubleEvent::GetExpFactor(this_01);
    local_b4 = (float)iVar4 / _DAT_08cbbbcc;
  }
  local_18 = (CBurningFatigueEvent *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0xf);
  cVar2 = (**(code **)(*(int *)local_18 + 0x34))(local_18,0);
  if (cVar2 != '\0') {
    uVar3 = CUserCharacInfo::getCurCharacUsedFatigue((CUserCharacInfo *)local_1c);
    local_ac = CBurningFatigueEvent::getBonusExpRate(local_18,uVar3);
  }
  this_02 = (CDataManager *)G_CDataManager();
  local_10 = (channel_script_t *)CDataManager::GetChannelScript(this_02);
  uVar7 = CDungeon::get_index(*(CDungeon **)(this + 0xcac));
  this_03 = (CEnvironment *)G_CEnvironment();
  uVar8 = CEnvironment::get_channel_no(this_03);
  iVar4 = G_CEnvironment();
  lVar9 = (longdouble)
          channel_script_t::getBonusRate(local_10,(uchar)*(undefined4 *)(iVar4 + 0x378),uVar8,uVar7)
  ;
  local_a8 = (float)lVar9;
  cVar2 = CUser::IsHavePremiumAdvantage(local_1c);
  if (cVar2 != '\0') {
    this_04 = (CUserPremium *)CUser::GetPremiumInfo(local_1c);
    iVar4 = WongWork::CUserPremium::GetAdvantageExpRate(this_04);
    local_a4 = (float)iVar4 / _DAT_08cbbbcc;
  }
  iVar4 = CServerEvent::GetExpRate();
  local_a0 = (float)iVar4 / _DAT_08cbbbcc;
  lVar9 = (longdouble)CalcurateManageBonus(this,0,local_1c,local_20);
  local_8c = (float)lVar9;
  local_14 = getClearRewardBonusExp(this,local_1c,&local_20,local_c8,local_68);
  if (1000000 < local_14) {
    LogManager::logFormat
              (1,"party.cpp",
               "void CParty::generateBloodRewardExp(int, int, unsigned int, short int)",0x3d12,
               "BLOOD_LOG : EROOR BLOOD CLEAR REWARD EXP!! (%u)\n",local_14);
    LogManager::logFormat
              (1,"party.cpp",
               "void CParty::generateBloodRewardExp(int, int, unsigned int, short int)",0x3d1c,
               "BLOOD_LOG : EXP PARAMETER : %f, %f, %f, %f, %f, %f, %f, %d\n",(double)local_c0,
               (double)local_bc,(double)local_b8,(double)local_b4,(double)local_a8,(double)local_a4,
               (double)local_a0,local_ac);
  }
  CBattle_Field::CBloodClearRewardData::setRewardExp
            ((CBloodClearRewardData *)(this + 0xddc),param_1,local_14);
  return;
}
```
