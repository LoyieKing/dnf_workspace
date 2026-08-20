# insert_game_world

`_ZN12CGameManager17insert_game_worldEP5CUser`

`CGameManager::insert_game_world(CUser*)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x08296d30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08296d30  _ZN12CGameManager17insert_game_worldEP5CUser
#           CGameManager::insert_game_world(CUser*)
# range [0x08296d30, 0x08297c13]
08296d30 +0x000:  push   %ebp
08296d31 +0x001:  mov    %esp,%ebp
08296d33 +0x003:  push   %edi
08296d34 +0x004:  push   %esi
08296d35 +0x005:  push   %ebx
08296d36 +0x006:  sub    $0x10c,%esp
08296d3c +0x00c:  cmpl   $0x0,0xc(%ebp)
08296d40 +0x010:  jne    08296d78 <+0x48>
08296d42 +0x012:  movl   $"insert_waiting_room pUser parameter is null.",0x10(%esp)
08296d4a +0x01a:  movl   $0xf20,0xc(%esp)
08296d52 +0x022:  movl   $&_ZZN12CGameManager17insert_game_worldEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
08296d5a +0x02a:  movl   $"App.cpp",0x4(%esp)
08296d62 +0x032:  movl   $0x1,(%esp)
08296d69 +0x039:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08296d6e +0x03e:  mov    $0x0,%ebx
08296d73 +0x043:  jmp    08297c06 <+0xed6>
08296d78 +0x048:  mov    0xc(%ebp),%eax
08296d7b +0x04b:  mov    %eax,(%esp)
08296d7e +0x04e:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08296d83 +0x053:  test   %eax,%eax
08296d85 +0x055:  sete   %al
08296d88 +0x058:  test   %al,%al
08296d8a +0x05a:  je     08296dc2 <+0x92>
08296d8c +0x05c:  movl   $"Not selected character(a reason is fast returning to character screen on client)",0x10(%esp)
08296d94 +0x064:  movl   $0xf27,0xc(%esp)
08296d9c +0x06c:  movl   $&_ZZN12CGameManager17insert_game_worldEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
08296da4 +0x074:  movl   $"App.cpp",0x4(%esp)
08296dac +0x07c:  movl   $0x1,(%esp)
08296db3 +0x083:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08296db8 +0x088:  mov    $0x0,%ebx
08296dbd +0x08d:  jmp    08297c06 <+0xed6>
08296dc2 +0x092:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08296dc9 +0x099:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08296dce +0x09e:  mov    %eax,-0x28(%ebp)
08296dd1 +0x0a1:  lea    -0x7c(%ebp),%eax
08296dd4 +0x0a4:  mov    %eax,(%esp)
08296dd7 +0x0a7:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
08296ddc +0x0ac:  lea    -0x88(%ebp),%eax
08296de2 +0x0b2:  mov    %eax,(%esp)
08296de5 +0x0b5:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
08296dea +0x0ba:  call   082a5a4c <_GLOBAL__I__ZN4CLog5this_E+0x1e73>  ; global constructors keyed to CLog::this_+0x1e73
08296def +0x0bf:  cmp    -0x28(%ebp),%eax
08296df2 +0x0c2:  jg     08296e11 <+0xe1>
08296df4 +0x0c4:  mov    0xc(%ebp),%eax
08296df7 +0x0c7:  mov    %eax,(%esp)
08296dfa +0x0ca:  call   082a66aa <_GLOBAL__I__ZN4CLog5this_E+0x2ad1>  ; global constructors keyed to CLog::this_+0x2ad1
08296dff +0x0cf:  mov    %eax,%ebx
08296e01 +0x0d1:  call   082a5a4c <_GLOBAL__I__ZN4CLog5this_E+0x1e73>  ; global constructors keyed to CLog::this_+0x1e73
08296e06 +0x0d6:  cmp    %eax,%ebx
08296e08 +0x0d8:  jge    08296e11 <+0xe1>
08296e0a +0x0da:  mov    $0x1,%eax
08296e0f +0x0df:  jmp    08296e16 <+0xe6>
08296e11 +0x0e1:  mov    $0x0,%eax
08296e16 +0x0e6:  test   %al,%al
08296e18 +0x0e8:  je     08296e56 <+0x126>
08296e1a +0x0ea:  movl   $0x0,-0x68(%ebp)
08296e21 +0x0f1:  movl   $0xc84,-0x64(%ebp)
08296e28 +0x0f8:  lea    -0x70(%ebp),%eax
08296e2b +0x0fb:  lea    -0x68(%ebp),%edx
08296e2e +0x0fe:  mov    %edx,0x8(%esp)
08296e32 +0x102:  lea    -0x64(%ebp),%edx
08296e35 +0x105:  mov    %edx,0x4(%esp)
08296e39 +0x109:  mov    %eax,(%esp)
08296e3c +0x10c:  call   081b8d41 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x548>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x548
08296e41 +0x111:  sub    $0x4,%esp
08296e44 +0x114:  lea    -0x70(%ebp),%eax
08296e47 +0x117:  mov    %eax,0x4(%esp)
08296e4b +0x11b:  lea    -0x7c(%ebp),%eax
08296e4e +0x11e:  mov    %eax,(%esp)
08296e51 +0x121:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
08296e56 +0x126:  mov    0xc(%ebp),%eax
08296e59 +0x129:  mov    %eax,(%esp)
08296e5c +0x12c:  call   082a66dc <_GLOBAL__I__ZN4CLog5this_E+0x2b03>  ; global constructors keyed to CLog::this_+0x2b03
08296e61 +0x131:  test   %al,%al
08296e63 +0x133:  setne  %al
08296e66 +0x136:  test   %al,%al
08296e68 +0x138:  je     08296f03 <+0x1d3>
08296e6e +0x13e:  movl   $0x0,-0x50(%ebp)
08296e75 +0x145:  movl   $0x4b0,-0x4c(%ebp)
08296e7c +0x14c:  lea    -0x58(%ebp),%eax
08296e7f +0x14f:  lea    -0x50(%ebp),%edx
08296e82 +0x152:  mov    %edx,0x8(%esp)
08296e86 +0x156:  lea    -0x4c(%ebp),%edx
08296e89 +0x159:  mov    %edx,0x4(%esp)
08296e8d +0x15d:  mov    %eax,(%esp)
08296e90 +0x160:  call   082b2c12 <_GLOBAL__I__ZN4CLog5this_E+0xf039>  ; global constructors keyed to CLog::this_+0xf039
08296e95 +0x165:  sub    $0x4,%esp
08296e98 +0x168:  lea    -0x58(%ebp),%eax
08296e9b +0x16b:  mov    %eax,0x4(%esp)
08296e9f +0x16f:  lea    -0x60(%ebp),%eax
08296ea2 +0x172:  mov    %eax,(%esp)
08296ea5 +0x175:  call   082b2c5c <_GLOBAL__I__ZN4CLog5this_E+0xf083>  ; global constructors keyed to CLog::this_+0xf083
08296eaa +0x17a:  lea    -0x60(%ebp),%eax
08296ead +0x17d:  mov    %eax,0x4(%esp)
08296eb1 +0x181:  lea    -0x7c(%ebp),%eax
08296eb4 +0x184:  mov    %eax,(%esp)
08296eb7 +0x187:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
08296ebc +0x18c:  mov    0xc(%ebp),%eax
08296ebf +0x18f:  movl   $0x0,0x4(%esp)
08296ec7 +0x197:  mov    %eax,(%esp)
08296eca +0x19a:  call   082a6700 <_GLOBAL__I__ZN4CLog5this_E+0x2b27>  ; global constructors keyed to CLog::this_+0x2b27
08296ecf +0x19f:  mov    0xc(%ebp),%eax
08296ed2 +0x1a2:  mov    %eax,(%esp)
08296ed5 +0x1a5:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08296eda +0x1aa:  mov    %eax,%ebx
08296edc +0x1ac:  movl   $0xffffffff,0x4(%esp)
08296ee4 +0x1b4:  mov    0xc(%ebp),%eax
08296ee7 +0x1b7:  mov    %eax,(%esp)
08296eea +0x1ba:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08296eef +0x1bf:  mov    %ebx,0x8(%esp)
08296ef3 +0x1c3:  movl   $0x0,0x4(%esp)
08296efb +0x1cb:  mov    %eax,(%esp)
08296efe +0x1ce:  call   0843c408 <_ZN21DB_GuildExpBookDelete11makeRequestEji17ENUM_SERVER_GROUP>  ; DB_GuildExpBookDelete::makeRequest(unsigned int, int, ENUM_SERVER_GROUP)
08296f03 +0x1d3:  lea    -0x7c(%ebp),%eax
08296f06 +0x1d6:  mov    %eax,0x4(%esp)
08296f0a +0x1da:  mov    0xc(%ebp),%eax
08296f0d +0x1dd:  mov    %eax,(%esp)
08296f10 +0x1e0:  call   08689010 <_ZN5CUser17ResetItemByScriptERSt6vectorISt4pairIiiESaIS2_EE>  ; CUser::ResetItemByScript(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
08296f15 +0x1e5:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08296f1c +0x1ec:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08296f21 +0x1f1:  mov    %eax,%ebx
08296f23 +0x1f3:  mov    0xc(%ebp),%eax
08296f26 +0x1f6:  mov    %eax,(%esp)
08296f29 +0x1f9:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08296f2e +0x1fe:  mov    0x7b(%eax),%esi
08296f31 +0x201:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08296f36 +0x206:  mov    0x37c(%eax),%eax
08296f3c +0x20c:  mov    %ebx,0x8(%esp)
08296f40 +0x210:  mov    %esi,0x4(%esp)
08296f44 +0x214:  mov    %eax,(%esp)
08296f47 +0x217:  call   0846c0a8 <_Z22CheckDailyScheduleTimeill>  ; CheckDailyScheduleTime(int, long, long)
08296f4c +0x21c:  test   %al,%al
08296f4e +0x21e:  je     08296fd7 <+0x2a7>
08296f54 +0x224:  lea    -0xa0(%ebp),%eax
08296f5a +0x22a:  mov    %eax,(%esp)
08296f5d +0x22d:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
08296f62 +0x232:  movl   $0x8,0xc(%esp)
08296f6a +0x23a:  movl   $0x3,0x8(%esp)
08296f72 +0x242:  lea    -0xa0(%ebp),%eax
08296f78 +0x248:  mov    %eax,0x4(%esp)
08296f7c +0x24c:  mov    0xc(%ebp),%eax
08296f7f +0x24f:  mov    %eax,(%esp)
08296f82 +0x252:  call   0867e734 <_ZN5CUser24deleteDailyStackableItemERSt6vectorISt4pairIiiESaIS2_EEii>  ; CUser::deleteDailyStackableItem(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, int, int)
08296f87 +0x257:  movl   $0x68,0xc(%esp)
08296f8f +0x25f:  movl   $0x39,0x8(%esp)
08296f97 +0x267:  lea    -0xa0(%ebp),%eax
08296f9d +0x26d:  mov    %eax,0x4(%esp)
08296fa1 +0x271:  mov    0xc(%ebp),%eax
08296fa4 +0x274:  mov    %eax,(%esp)
08296fa7 +0x277:  call   0867e734 <_ZN5CUser24deleteDailyStackableItemERSt6vectorISt4pairIiiESaIS2_EEii>  ; CUser::deleteDailyStackableItem(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, int, int)
08296fac +0x27c:  jmp    08296fc9 <+0x299>
08296fae +0x27e:  mov    %edx,%ebx
08296fb0 +0x280:  mov    %eax,%esi
08296fb2 +0x282:  lea    -0xa0(%ebp),%eax
08296fb8 +0x288:  mov    %eax,(%esp)
08296fbb +0x28b:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08296fc0 +0x290:  mov    %esi,%eax
08296fc2 +0x292:  mov    %ebx,%edx
08296fc4 +0x294:  jmp    08297bb8 <+0xe88>
08296fc9 +0x299:  lea    -0xa0(%ebp),%eax
08296fcf +0x29f:  mov    %eax,(%esp)
08296fd2 +0x2a2:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08296fd7 +0x2a7:  lea    -0x88(%ebp),%eax
08296fdd +0x2ad:  mov    %eax,0x8(%esp)
08296fe1 +0x2b1:  lea    -0x7c(%ebp),%eax
08296fe4 +0x2b4:  mov    %eax,0x4(%esp)
08296fe8 +0x2b8:  mov    0xc(%ebp),%eax
08296feb +0x2bb:  mov    %eax,(%esp)
08296fee +0x2be:  call   0867dba0 <_ZN5CUser18deleteSpecificItemERKSt6vectorISt4pairIiiESaIS2_EERS4_>  ; CUser::deleteSpecificItem(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
08296ff3 +0x2c3:  movl   $0xc,0x4(%esp)
08296ffb +0x2cb:  mov    0xc(%ebp),%eax
08296ffe +0x2ce:  mov    %eax,(%esp)
08297001 +0x2d1:  call   0865db6c <_ZN5CUser14send_itemspaceEi>  ; CUser::send_itemspace(int)
08297006 +0x2d6:  xor    $0x1,%eax
08297009 +0x2d9:  test   %al,%al
0829700b +0x2db:  je     08297062 <+0x332>
0829700d +0x2dd:  mov    0xc(%ebp),%eax
08297010 +0x2e0:  mov    %eax,(%esp)
08297013 +0x2e3:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08297018 +0x2e8:  movl   $0x0,0x4(%esp)
08297020 +0x2f0:  mov    %eax,(%esp)
08297023 +0x2f3:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08297028 +0x2f8:  mov    %eax,0x14(%esp)
0829702c +0x2fc:  movl   $"CGameManager::insert_game_world, pUser(%s)->send_itemspace( ENUM_ITEMSPACE_ACCOUNT_CARGO ) return FAILED",0x10(%esp)
08297034 +0x304:  movl   $0xf58,0xc(%esp)
0829703c +0x30c:  movl   $&_ZZN12CGameManager17insert_game_worldEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
08297044 +0x314:  movl   $"App.cpp",0x4(%esp)
0829704c +0x31c:  movl   $0x1,(%esp)
08297053 +0x323:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08297058 +0x328:  mov    $0x0,%ebx
0829705d +0x32d:  jmp    08297bd0 <+0xea0>
08297062 +0x332:  movl   $0x0,0x4(%esp)
0829706a +0x33a:  mov    0xc(%ebp),%eax
0829706d +0x33d:  mov    %eax,(%esp)
08297070 +0x340:  call   0865db6c <_ZN5CUser14send_itemspaceEi>  ; CUser::send_itemspace(int)
08297075 +0x345:  xor    $0x1,%eax
08297078 +0x348:  test   %al,%al
0829707a +0x34a:  je     082970d1 <+0x3a1>
0829707c +0x34c:  mov    0xc(%ebp),%eax
0829707f +0x34f:  mov    %eax,(%esp)
08297082 +0x352:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08297087 +0x357:  movl   $0x0,0x4(%esp)
0829708f +0x35f:  mov    %eax,(%esp)
08297092 +0x362:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08297097 +0x367:  mov    %eax,0x14(%esp)
0829709b +0x36b:  movl   $"CGameManager::insert_game_world, pUser(%s)->send_itemspace( ENUM_ITEMSPACE_INVENTORY ) return FAILED",0x10(%esp)
082970a3 +0x373:  movl   $0xf5f,0xc(%esp)
082970ab +0x37b:  movl   $&_ZZN12CGameManager17insert_game_worldEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
082970b3 +0x383:  movl   $"App.cpp",0x4(%esp)
082970bb +0x38b:  movl   $0x1,(%esp)
082970c2 +0x392:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
082970c7 +0x397:  mov    $0x0,%ebx
082970cc +0x39c:  jmp    08297bd0 <+0xea0>
082970d1 +0x3a1:  movl   $0x1,0x4(%esp)
082970d9 +0x3a9:  mov    0xc(%ebp),%eax
082970dc +0x3ac:  mov    %eax,(%esp)
082970df +0x3af:  call   0865db6c <_ZN5CUser14send_itemspaceEi>  ; CUser::send_itemspace(int)
082970e4 +0x3b4:  xor    $0x1,%eax
082970e7 +0x3b7:  test   %al,%al
082970e9 +0x3b9:  je     08297140 <+0x410>
082970eb +0x3bb:  mov    0xc(%ebp),%eax
082970ee +0x3be:  mov    %eax,(%esp)
082970f1 +0x3c1:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
082970f6 +0x3c6:  movl   $0x0,0x4(%esp)
082970fe +0x3ce:  mov    %eax,(%esp)
08297101 +0x3d1:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08297106 +0x3d6:  mov    %eax,0x14(%esp)
0829710a +0x3da:  movl   $"CGameManager::insert_game_world, pUser(%s)->send_itemspace( ENUM_ITEMSPACE_AVATAR ) return FAILED",0x10(%esp)
08297112 +0x3e2:  movl   $0xf64,0xc(%esp)
0829711a +0x3ea:  movl   $&_ZZN12CGameManager17insert_game_worldEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
08297122 +0x3f2:  movl   $"App.cpp",0x4(%esp)
0829712a +0x3fa:  movl   $0x1,(%esp)
08297131 +0x401:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08297136 +0x406:  mov    $0x0,%ebx
0829713b +0x40b:  jmp    08297bd0 <+0xea0>
08297140 +0x410:  movl   $0x2,0x4(%esp)
08297148 +0x418:  mov    0xc(%ebp),%eax
0829714b +0x41b:  mov    %eax,(%esp)
0829714e +0x41e:  call   0865db6c <_ZN5CUser14send_itemspaceEi>  ; CUser::send_itemspace(int)
08297153 +0x423:  xor    $0x1,%eax
08297156 +0x426:  test   %al,%al
08297158 +0x428:  je     082971af <+0x47f>
0829715a +0x42a:  mov    0xc(%ebp),%eax
0829715d +0x42d:  mov    %eax,(%esp)
08297160 +0x430:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08297165 +0x435:  movl   $0x0,0x4(%esp)
0829716d +0x43d:  mov    %eax,(%esp)
08297170 +0x440:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08297175 +0x445:  mov    %eax,0x14(%esp)
08297179 +0x449:  movl   $"CGameManager::insert_game_world, pUser(%s)->send_itemspace( ENUM_ITEMSPACE_CARGO ) return FAILED",0x10(%esp)
08297181 +0x451:  movl   $0xf69,0xc(%esp)
08297189 +0x459:  movl   $&_ZZN12CGameManager17insert_game_worldEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
08297191 +0x461:  movl   $"App.cpp",0x4(%esp)
08297199 +0x469:  movl   $0x1,(%esp)
082971a0 +0x470:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
082971a5 +0x475:  mov    $0x0,%ebx
082971aa +0x47a:  jmp    08297bd0 <+0xea0>
082971af +0x47f:  movl   $0x7,0x4(%esp)
082971b7 +0x487:  mov    0xc(%ebp),%eax
082971ba +0x48a:  mov    %eax,(%esp)
082971bd +0x48d:  call   0865db6c <_ZN5CUser14send_itemspaceEi>  ; CUser::send_itemspace(int)
082971c2 +0x492:  xor    $0x1,%eax
082971c5 +0x495:  test   %al,%al
082971c7 +0x497:  je     0829721e <+0x4ee>
082971c9 +0x499:  mov    0xc(%ebp),%eax
082971cc +0x49c:  mov    %eax,(%esp)
082971cf +0x49f:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
082971d4 +0x4a4:  movl   $0x0,0x4(%esp)
082971dc +0x4ac:  mov    %eax,(%esp)
082971df +0x4af:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
082971e4 +0x4b4:  mov    %eax,0x14(%esp)
082971e8 +0x4b8:  movl   $"CGameManager::insert_game_world, pUser(%s)->send_itemspace( ENUM_ITEMSPACE_CREATURE ) return FAILED",0x10(%esp)
082971f0 +0x4c0:  movl   $0xf7a,0xc(%esp)
082971f8 +0x4c8:  movl   $&_ZZN12CGameManager17insert_game_worldEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
08297200 +0x4d0:  movl   $"App.cpp",0x4(%esp)
08297208 +0x4d8:  movl   $0x1,(%esp)
0829720f +0x4df:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08297214 +0x4e4:  mov    $0x0,%ebx
08297219 +0x4e9:  jmp    08297bd0 <+0xea0>
0829721e +0x4ee:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08297223 +0x4f3:  mov    %eax,(%esp)
08297226 +0x4f6:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
0829722b +0x4fb:  cmp    $0xe,%eax
0829722e +0x4fe:  sete   %al
08297231 +0x501:  test   %al,%al
08297233 +0x503:  je     08297248 <+0x518>
08297235 +0x505:  mov    0xc(%ebp),%eax
08297238 +0x508:  movl   $0x0,0x4(%esp)
08297240 +0x510:  mov    %eax,(%esp)
08297243 +0x513:  call   082a671e <_GLOBAL__I__ZN4CLog5this_E+0x2b45>  ; global constructors keyed to CLog::this_+0x2b45
08297248 +0x518:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0829724d +0x51d:  mov    0xc(%ebp),%edx
08297250 +0x520:  mov    %edx,0x4(%esp)
08297254 +0x524:  mov    %eax,(%esp)
08297257 +0x527:  call   086c4e50 <_ZN9GameWorld16reach_game_worldEP5CUser>  ; GameWorld::reach_game_world(CUser*)
0829725c +0x52c:  xor    $0x1,%eax
0829725f +0x52f:  test   %al,%al
08297261 +0x531:  je     08297366 <+0x636>
08297267 +0x537:  mov    0xc(%ebp),%eax
0829726a +0x53a:  mov    %eax,(%esp)
0829726d +0x53d:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08297272 +0x542:  movl   $0x0,0x4(%esp)
0829727a +0x54a:  mov    %eax,(%esp)
0829727d +0x54d:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08297282 +0x552:  mov    %eax,%ebx
08297284 +0x554:  mov    0xc(%ebp),%eax
08297287 +0x557:  mov    %eax,(%esp)
0829728a +0x55a:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0829728f +0x55f:  movzwl %ax,%esi
08297292 +0x562:  movl   $0x0,0xc(%esp)
0829729a +0x56a:  movl   $0xfa2,0x8(%esp)
082972a2 +0x572:  movl   $&_ZZN12CGameManager17insert_game_worldEP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
082972aa +0x57a:  lea    -0x48(%ebp),%eax
082972ad +0x57d:  mov    %eax,(%esp)
082972b0 +0x580:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082972b5 +0x585:  mov    %ebx,0xc(%esp)
082972b9 +0x589:  mov    %esi,0x8(%esp)
082972bd +0x58d:  movl   $"CGameManager::insert_game_world , !G_GameWorld()->reach_game_world( pUser ) , USER : %d(%s)",0x4(%esp)
082972c5 +0x595:  lea    -0x48(%ebp),%eax
082972c8 +0x598:  mov    %eax,(%esp)
082972cb +0x59b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082972d0 +0x5a0:  movl   $0x4,0x8(%esp)
082972d8 +0x5a8:  movl   $0x1,0x4(%esp)
082972e0 +0x5b0:  mov    0xc(%ebp),%eax
082972e3 +0x5b3:  mov    %eax,(%esp)
082972e6 +0x5b6:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
082972eb +0x5bb:  mov    0xc(%ebp),%eax
082972ee +0x5be:  mov    %eax,(%esp)
082972f1 +0x5c1:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
082972f6 +0x5c6:  movzwl %ax,%esi
082972f9 +0x5c9:  mov    0xc(%ebp),%eax
082972fc +0x5cc:  mov    %eax,(%esp)
082972ff +0x5cf:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08297304 +0x5d4:  movl   $0x0,0x4(%esp)
0829730c +0x5dc:  mov    %eax,(%esp)
0829730f +0x5df:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08297314 +0x5e4:  mov    %eax,%ebx
08297316 +0x5e6:  movl   $0x0,0xc(%esp)
0829731e +0x5ee:  movl   $0xfab,0x8(%esp)
08297326 +0x5f6:  movl   $&_ZZN12CGameManager17insert_game_worldEP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
0829732e +0x5fe:  lea    -0x38(%ebp),%eax
08297331 +0x601:  mov    %eax,(%esp)
08297334 +0x604:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08297339 +0x609:  mov    %esi,0x10(%esp)
0829733d +0x60d:  mov    %ebx,0xc(%esp)
08297341 +0x611:  movl   $0x1,0x8(%esp)
08297349 +0x619:  movl   $"from (%d) m_id[%s] uid[%d]",0x4(%esp)
08297351 +0x621:  lea    -0x38(%ebp),%eax
08297354 +0x624:  mov    %eax,(%esp)
08297357 +0x627:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0829735c +0x62c:  mov    $0x0,%ebx
08297361 +0x631:  jmp    08297bd0 <+0xea0>
08297366 +0x636:  mov    0xc(%ebp),%eax
08297369 +0x639:  mov    %eax,(%esp)
0829736c +0x63c:  call   082a66b8 <_GLOBAL__I__ZN4CLog5this_E+0x2adf>  ; global constructors keyed to CLog::this_+0x2adf
08297371 +0x641:  movsbl %al,%eax
08297374 +0x644:  mov    %eax,-0x24(%ebp)
08297377 +0x647:  cmpl   $0x0,-0x24(%ebp)
0829737b +0x64b:  jle    08297399 <+0x669>
0829737d +0x64d:  call   0848e258 <_Z30CEventCharacterHandlerInstancev>  ; CEventCharacterHandlerInstance()
08297382 +0x652:  movl   $0x28,0x8(%esp)
0829738a +0x65a:  mov    0xc(%ebp),%edx
0829738d +0x65d:  mov    %edx,0x4(%esp)
08297391 +0x661:  mov    %eax,(%esp)
08297394 +0x664:  call   0848e2a4 <_ZN22CEventCharacterHandler19_makeEventCharacterEP5CUseri>  ; CEventCharacterHandler::_makeEventCharacter(CUser*, int)
08297399 +0x669:  movl   $0x9,0x4(%esp)
082973a1 +0x671:  mov    0xc(%ebp),%eax
082973a4 +0x674:  mov    %eax,(%esp)
082973a7 +0x677:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
082973ac +0x67c:  mov    %eax,-0x20(%ebp)
082973af +0x67f:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
082973b4 +0x684:  mov    %eax,(%esp)
082973b7 +0x687:  call   0823443e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9ae8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9ae8
082973bc +0x68c:  test   %al,%al
082973be +0x68e:  je     08297418 <+0x6e8>
082973c0 +0x690:  mov    0xc(%ebp),%eax
082973c3 +0x693:  mov    %eax,(%esp)
082973c6 +0x696:  call   0822fa7c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5126>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5126
082973cb +0x69b:  test   %al,%al
082973cd +0x69d:  sete   %al
082973d0 +0x6a0:  test   %al,%al
082973d2 +0x6a2:  je     0829746a <+0x73a>
082973d8 +0x6a8:  mov    0xc(%ebp),%eax
082973db +0x6ab:  mov    %eax,(%esp)
082973de +0x6ae:  call   0822faa0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x514a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x514a
082973e3 +0x6b3:  movsbl %al,%ebx
082973e6 +0x6b6:  mov    0xc(%ebp),%eax
082973e9 +0x6b9:  mov    %eax,(%esp)
082973ec +0x6bc:  call   0822fa7c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5126>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5126
082973f1 +0x6c1:  movsbl %al,%eax
082973f4 +0x6c4:  mov    %ebx,0x10(%esp)
082973f8 +0x6c8:  mov    %eax,0xc(%esp)
082973fc +0x6cc:  movl   $0x0,0x8(%esp)
08297404 +0x6d4:  mov    0xc(%ebp),%eax
08297407 +0x6d7:  mov    %eax,0x4(%esp)
0829740b +0x6db:  mov    -0x20(%ebp),%eax
0829740e +0x6de:  mov    %eax,(%esp)
08297411 +0x6e1:  call   0849943e <_ZN16CExpandEquipslot15EquipslotSwitchEP5CUserccc>  ; CExpandEquipslot::EquipslotSwitch(CUser*, char, char, char)
08297416 +0x6e6:  jmp    0829746a <+0x73a>
08297418 +0x6e8:  mov    0xc(%ebp),%eax
0829741b +0x6eb:  mov    %eax,(%esp)
0829741e +0x6ee:  call   0822fa7c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5126>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5126
08297423 +0x6f3:  cmp    $0x1,%al
08297425 +0x6f5:  sete   %al
08297428 +0x6f8:  test   %al,%al
0829742a +0x6fa:  je     0829746a <+0x73a>
0829742c +0x6fc:  mov    0xc(%ebp),%eax
0829742f +0x6ff:  mov    %eax,(%esp)
08297432 +0x702:  call   0822faa0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x514a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x514a
08297437 +0x707:  movsbl %al,%ebx
0829743a +0x70a:  mov    0xc(%ebp),%eax
0829743d +0x70d:  mov    %eax,(%esp)
08297440 +0x710:  call   0822fa7c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5126>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5126
08297445 +0x715:  movsbl %al,%eax
08297448 +0x718:  mov    %ebx,0x10(%esp)
0829744c +0x71c:  mov    %eax,0xc(%esp)
08297450 +0x720:  movl   $0x0,0x8(%esp)
08297458 +0x728:  mov    0xc(%ebp),%eax
0829745b +0x72b:  mov    %eax,0x4(%esp)
0829745f +0x72f:  mov    -0x20(%ebp),%eax
08297462 +0x732:  mov    %eax,(%esp)
08297465 +0x735:  call   0849943e <_ZN16CExpandEquipslot15EquipslotSwitchEP5CUserccc>  ; CExpandEquipslot::EquipslotSwitch(CUser*, char, char, char)
0829746a +0x73a:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0829746f +0x73f:  mov    %eax,(%esp)
08297472 +0x742:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
08297477 +0x747:  cmp    $0xf,%eax
0829747a +0x74a:  je     0829748e <+0x75e>
0829747c +0x74c:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08297481 +0x751:  mov    %eax,(%esp)
08297484 +0x754:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
08297489 +0x759:  cmp    $0x10,%eax
0829748c +0x75c:  jne    08297495 <+0x765>
0829748e +0x75e:  mov    $0x1,%eax
08297493 +0x763:  jmp    0829749a <+0x76a>
08297495 +0x765:  mov    $0x0,%eax
0829749a +0x76a:  test   %al,%al
0829749c +0x76c:  je     082974c6 <+0x796>
0829749e +0x76e:  movl   $0x8,0x4(%esp)
082974a6 +0x776:  mov    0xc(%ebp),%eax
082974a9 +0x779:  mov    %eax,(%esp)
082974ac +0x77c:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
082974b1 +0x781:  mov    %eax,-0x1c(%ebp)
082974b4 +0x784:  mov    0xc(%ebp),%eax
082974b7 +0x787:  mov    %eax,0x4(%esp)
082974bb +0x78b:  mov    -0x1c(%ebp),%eax
082974be +0x78e:  mov    %eax,(%esp)
082974c1 +0x791:  call   085e600a <_ZN19CMissionList_Charac23Update_EnterWorld_eventER5CUser>  ; CMissionList_Charac::Update_EnterWorld_event(CUser&)
082974c6 +0x796:  lea    -0x94(%ebp),%eax
082974cc +0x79c:  mov    %eax,(%esp)
082974cf +0x79f:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082974d4 +0x7a4:  movl   $0x2,0x8(%esp)
082974dc +0x7ac:  movl   $0x0,0x4(%esp)
082974e4 +0x7b4:  lea    -0x94(%ebp),%eax
082974ea +0x7ba:  mov    %eax,(%esp)
082974ed +0x7bd:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
082974f2 +0x7c2:  movl   $0x0,0x4(%esp)
082974fa +0x7ca:  lea    -0x94(%ebp),%eax
08297500 +0x7d0:  mov    %eax,(%esp)
08297503 +0x7d3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08297508 +0x7d8:  movl   $0x1,0x4(%esp)
08297510 +0x7e0:  lea    -0x94(%ebp),%eax
08297516 +0x7e6:  mov    %eax,(%esp)
08297519 +0x7e9:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0829751e +0x7ee:  lea    -0x94(%ebp),%eax
08297524 +0x7f4:  movl   $0x0,0x8(%esp)
0829752c +0x7fc:  mov    %eax,0x4(%esp)
08297530 +0x800:  mov    0xc(%ebp),%eax
08297533 +0x803:  mov    %eax,(%esp)
08297536 +0x806:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
0829753b +0x80b:  movl   $0x1,0x4(%esp)
08297543 +0x813:  lea    -0x94(%ebp),%eax
08297549 +0x819:  mov    %eax,(%esp)
0829754c +0x81c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08297551 +0x821:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08297556 +0x826:  mov    0xc(%ebp),%edx
08297559 +0x829:  mov    %edx,0x8(%esp)
0829755d +0x82d:  lea    -0x94(%ebp),%edx
08297563 +0x833:  mov    %edx,0x4(%esp)
08297567 +0x837:  mov    %eax,(%esp)
0829756a +0x83a:  call   0813495c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x563>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x563
0829756f +0x83f:  mov    0xc(%ebp),%eax
08297572 +0x842:  mov    %eax,(%esp)
08297575 +0x845:  call   0866c46a <_ZN5CUser15send_skill_infoEv>  ; CUser::send_skill_info()
0829757a +0x84a:  lea    -0x94(%ebp),%eax
08297580 +0x850:  mov    %eax,(%esp)
08297583 +0x853:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08297588 +0x858:  movl   $0x2,0x8(%esp)
08297590 +0x860:  movl   $0x0,0x4(%esp)
08297598 +0x868:  lea    -0x94(%ebp),%eax
0829759e +0x86e:  mov    %eax,(%esp)
082975a1 +0x871:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
082975a6 +0x876:  movl   $0x1,0x4(%esp)
082975ae +0x87e:  lea    -0x94(%ebp),%eax
082975b4 +0x884:  mov    %eax,(%esp)
082975b7 +0x887:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082975bc +0x88c:  movl   $0x1,0x4(%esp)
082975c4 +0x894:  lea    -0x94(%ebp),%eax
082975ca +0x89a:  mov    %eax,(%esp)
082975cd +0x89d:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
082975d2 +0x8a2:  lea    -0x94(%ebp),%eax
082975d8 +0x8a8:  movl   $0x1,0x8(%esp)
082975e0 +0x8b0:  mov    %eax,0x4(%esp)
082975e4 +0x8b4:  mov    0xc(%ebp),%eax
082975e7 +0x8b7:  mov    %eax,(%esp)
082975ea +0x8ba:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
082975ef +0x8bf:  movl   $0x1,0x4(%esp)
082975f7 +0x8c7:  lea    -0x94(%ebp),%eax
082975fd +0x8cd:  mov    %eax,(%esp)
08297600 +0x8d0:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08297605 +0x8d5:  lea    -0x94(%ebp),%eax
0829760b +0x8db:  mov    %eax,0x4(%esp)
0829760f +0x8df:  mov    0xc(%ebp),%eax
08297612 +0x8e2:  mov    %eax,(%esp)
08297615 +0x8e5:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0829761a +0x8ea:  mov    0xc(%ebp),%eax
0829761d +0x8ed:  mov    %eax,0x4(%esp)
08297621 +0x8f1:  mov    -0x20(%ebp),%eax
08297624 +0x8f4:  mov    %eax,(%esp)
08297627 +0x8f7:  call   0849a57c <_ZN16CExpandEquipslot22Send_Expand_Equip_InfoEP5CUser>  ; CExpandEquipslot::Send_Expand_Equip_Info(CUser*)
0829762c +0x8fc:  mov    0xc(%ebp),%eax
0829762f +0x8ff:  mov    %eax,(%esp)
08297632 +0x902:  call   08691e70 <_ZN5CUser31processReturnUserQuestAutoClearEv>  ; CUser::processReturnUserQuestAutoClear()
08297637 +0x907:  mov    0xc(%ebp),%eax
0829763a +0x90a:  mov    %eax,(%esp)
0829763d +0x90d:  call   0868b044 <_ZN5CUser21send_clear_quest_listEv>  ; CUser::send_clear_quest_list()
08297642 +0x912:  lea    -0x94(%ebp),%eax
08297648 +0x918:  mov    %eax,(%esp)
0829764b +0x91b:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08297650 +0x920:  lea    -0x94(%ebp),%ebx
08297656 +0x926:  mov    0xc(%ebp),%eax
08297659 +0x929:  mov    %eax,(%esp)
0829765c +0x92c:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
08297661 +0x931:  mov    %ebx,0x4(%esp)
08297665 +0x935:  mov    %eax,(%esp)
08297668 +0x938:  call   086abba8 <_ZNK9UserQuest14get_quest_infoEPc>  ; UserQuest::get_quest_info(char*) const
0829766d +0x93d:  lea    -0x94(%ebp),%eax
08297673 +0x943:  mov    %eax,0x4(%esp)
08297677 +0x947:  mov    0xc(%ebp),%eax
0829767a +0x94a:  mov    %eax,(%esp)
0829767d +0x94d:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08297682 +0x952:  movl   $0xe,0x4(%esp)
0829768a +0x95a:  mov    0xc(%ebp),%eax
0829768d +0x95d:  mov    %eax,(%esp)
08297690 +0x960:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
08297695 +0x965:  mov    %eax,(%esp)
08297698 +0x968:  call   08641704 <_ZN10CTitleBook8sendListEv>  ; CTitleBook::sendList()
0829769d +0x96d:  movl   $0xf,0x4(%esp)
082976a5 +0x975:  mov    0xc(%ebp),%eax
082976a8 +0x978:  mov    %eax,(%esp)
082976ab +0x97b:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
082976b0 +0x980:  mov    %eax,(%esp)
082976b3 +0x983:  call   0828c4de <_ZN12CAchievement8sendListEv>  ; CAchievement::sendList()
082976b8 +0x988:  movl   $0x2,0x4(%esp)
082976c0 +0x990:  mov    0xc(%ebp),%eax
082976c3 +0x993:  mov    %eax,(%esp)
082976c6 +0x996:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
082976cb +0x99b:  mov    0xc(%ebp),%edx
082976ce +0x99e:  mov    %edx,0x4(%esp)
082976d2 +0x9a2:  mov    %eax,(%esp)
082976d5 +0x9a5:  call   085427a0 <_ZN9item_lock9CItemLock16SendItemLockListEP5CUser>  ; item_lock::CItemLock::SendItemLockList(CUser*)
082976da +0x9aa:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
082976df +0x9af:  mov    %eax,(%esp)
082976e2 +0x9b2:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
082976e7 +0x9b7:  cmp    $0xf,%eax
082976ea +0x9ba:  setne  %al
082976ed +0x9bd:  test   %al,%al
082976ef +0x9bf:  je     08297703 <+0x9d3>
082976f1 +0x9c1:  mov    0xc(%ebp),%eax
082976f4 +0x9c4:  mov    %eax,0x4(%esp)
082976f8 +0x9c8:  mov    0x8(%ebp),%eax
082976fb +0x9cb:  mov    %eax,(%esp)
082976fe +0x9ce:  call   08296642 <_ZN12CGameManager11SendPvpListEP5CUser>  ; CGameManager::SendPvpList(CUser*)
08297703 +0x9d3:  mov    0xc(%ebp),%eax
08297706 +0x9d6:  mov    %eax,0x4(%esp)
0829770a +0x9da:  mov    0x8(%ebp),%eax
0829770d +0x9dd:  mov    %eax,(%esp)
08297710 +0x9e0:  call   082a2f94 <_ZN12CGameManager15SendWarRoomListEP5CUser>  ; CGameManager::SendWarRoomList(CUser*)
08297715 +0x9e5:  mov    0xc(%ebp),%eax
08297718 +0x9e8:  mov    %eax,(%esp)
0829771b +0x9eb:  call   0865cd52 <_ZN5CUser15send_pvp_recordEv>  ; CUser::send_pvp_record()
08297720 +0x9f0:  mov    0xc(%ebp),%eax
08297723 +0x9f3:  mov    %eax,0x4(%esp)
08297727 +0x9f7:  mov    0x8(%ebp),%eax
0829772a +0x9fa:  mov    %eax,(%esp)
0829772d +0x9fd:  call   08296792 <_ZN12CGameManager13SendPartyListEP5CUser>  ; CGameManager::SendPartyList(CUser*)
08297732 +0xa02:  mov    0xc(%ebp),%eax
08297735 +0xa05:  mov    %eax,(%esp)
08297738 +0xa08:  call   082a6888 <_GLOBAL__I__ZN4CLog5this_E+0x2caf>  ; global constructors keyed to CLog::this_+0x2caf
0829773d +0xa0d:  cmp    $0xe7,%ax
08297741 +0xa11:  je     08297754 <+0xa24>
08297743 +0xa13:  mov    0xc(%ebp),%eax
08297746 +0xa16:  mov    %eax,(%esp)
08297749 +0xa19:  call   082a6888 <_GLOBAL__I__ZN4CLog5this_E+0x2caf>  ; global constructors keyed to CLog::this_+0x2caf
0829774e +0xa1e:  cmp    $0xe8,%ax
08297752 +0xa22:  jne    0829775b <+0xa2b>
08297754 +0xa24:  mov    $0x1,%eax
08297759 +0xa29:  jmp    08297760 <+0xa30>
0829775b +0xa2b:  mov    $0x0,%eax
08297760 +0xa30:  test   %al,%al
08297762 +0xa32:  je     082977d9 <+0xaa9>
08297764 +0xa34:  lea    -0x94(%ebp),%eax
0829776a +0xa3a:  mov    %eax,(%esp)
0829776d +0xa3d:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08297772 +0xa42:  movl   $0xff,0x8(%esp)
0829777a +0xa4a:  movl   $0x0,0x4(%esp)
08297782 +0xa52:  lea    -0x94(%ebp),%eax
08297788 +0xa58:  mov    %eax,(%esp)
0829778b +0xa5b:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08297790 +0xa60:  mov    0xc(%ebp),%eax
08297793 +0xa63:  mov    %eax,(%esp)
08297796 +0xa66:  call   082a6888 <_GLOBAL__I__ZN4CLog5this_E+0x2caf>  ; global constructors keyed to CLog::this_+0x2caf
0829779b +0xa6b:  cwtl
0829779c +0xa6c:  mov    %eax,0x4(%esp)
082977a0 +0xa70:  lea    -0x94(%ebp),%eax
082977a6 +0xa76:  mov    %eax,(%esp)
082977a9 +0xa79:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
082977ae +0xa7e:  movl   $0x1,0x4(%esp)
082977b6 +0xa86:  lea    -0x94(%ebp),%eax
082977bc +0xa8c:  mov    %eax,(%esp)
082977bf +0xa8f:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
082977c4 +0xa94:  lea    -0x94(%ebp),%eax
082977ca +0xa9a:  mov    %eax,0x4(%esp)
082977ce +0xa9e:  mov    0xc(%ebp),%eax
082977d1 +0xaa1:  mov    %eax,(%esp)
082977d4 +0xaa4:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
082977d9 +0xaa9:  lea    -0x94(%ebp),%eax
082977df +0xaaf:  mov    %eax,(%esp)
082977e2 +0xab2:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
082977e7 +0xab7:  movl   $0x7c,0x8(%esp)
082977ef +0xabf:  movl   $0x0,0x4(%esp)
082977f7 +0xac7:  lea    -0x94(%ebp),%eax
082977fd +0xacd:  mov    %eax,(%esp)
08297800 +0xad0:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08297805 +0xad5:  movl   $0x1,0x4(%esp)
0829780d +0xadd:  lea    -0x94(%ebp),%eax
08297813 +0xae3:  mov    %eax,(%esp)
08297816 +0xae6:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0829781b +0xaeb:  lea    -0x94(%ebp),%eax
08297821 +0xaf1:  mov    %eax,0x4(%esp)
08297825 +0xaf5:  mov    0xc(%ebp),%eax
08297828 +0xaf8:  mov    %eax,(%esp)
0829782b +0xafb:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08297830 +0xb00:  mov    0xc(%ebp),%eax
08297833 +0xb03:  mov    %eax,(%esp)
08297836 +0xb06:  call   0827565a <_GLOBAL__I__Z16pi_2nd_print_binPcs+0x1c>  ; global constructors keyed to pi_2nd_print_bin(char*, short)+0x1c
0829783b +0xb0b:  mov    %eax,(%esp)
0829783e +0xb0e:  call   082b2c8e <_GLOBAL__I__ZN4CLog5this_E+0xf0b5>  ; global constructors keyed to CLog::this_+0xf0b5
08297843 +0xb13:  mov    0xc(%ebp),%eax
08297846 +0xb16:  mov    %eax,(%esp)
08297849 +0xb19:  call   08689a22 <_ZN5CUser22ReCalcChattingEmoticonEv>  ; CUser::ReCalcChattingEmoticon()
0829784e +0xb1e:  mov    0xc(%ebp),%eax
08297851 +0xb21:  mov    %eax,(%esp)
08297854 +0xb24:  call   08689b90 <_ZN5CUser20SendChattingEmoticonEv>  ; CUser::SendChattingEmoticon()
08297859 +0xb29:  lea    -0xdf(%ebp),%eax
0829785f +0xb2f:  mov    %eax,(%esp)
08297862 +0xb32:  call   082a3ffa <_GLOBAL__I__ZN4CLog5this_E+0x421>  ; global constructors keyed to CLog::this_+0x421
08297867 +0xb37:  mov    0xc(%ebp),%eax
0829786a +0xb3a:  mov    %eax,(%esp)
0829786d +0xb3d:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08297872 +0xb42:  mov    %eax,-0xd5(%ebp)
08297878 +0xb48:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0829787d +0xb4d:  mov    %eax,(%esp)
08297880 +0xb50:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
08297885 +0xb55:  mov    %al,-0xd1(%ebp)
0829788b +0xb5b:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08297890 +0xb60:  mov    %eax,(%esp)
08297893 +0xb63:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
08297898 +0xb68:  mov    %al,-0xa2(%ebp)
0829789e +0xb6e:  movl   $0xffffffff,0x4(%esp)
082978a6 +0xb76:  mov    0xc(%ebp),%eax
082978a9 +0xb79:  mov    %eax,(%esp)
082978ac +0xb7c:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
082978b1 +0xb81:  mov    %eax,-0xd0(%ebp)
082978b7 +0xb87:  mov    0xc(%ebp),%eax
082978ba +0xb8a:  mov    %eax,(%esp)
082978bd +0xb8d:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
082978c2 +0xb92:  mov    %eax,-0xcc(%ebp)
082978c8 +0xb98:  mov    0xc(%ebp),%eax
082978cb +0xb9b:  mov    %eax,(%esp)
082978ce +0xb9e:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
082978d3 +0xba3:  mov    %al,-0xc8(%ebp)
082978d9 +0xba9:  mov    0xc(%ebp),%eax
082978dc +0xbac:  mov    %eax,(%esp)
082978df +0xbaf:  call   0815741c <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x7b>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x7b
082978e4 +0xbb4:  mov    %al,-0xc7(%ebp)
082978ea +0xbba:  mov    0xc(%ebp),%eax
082978ed +0xbbd:  mov    %eax,(%esp)
082978f0 +0xbc0:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
082978f5 +0xbc5:  mov    %ax,-0xc6(%ebp)
082978fc +0xbcc:  mov    0xc(%ebp),%eax
082978ff +0xbcf:  mov    %eax,(%esp)
08297902 +0xbd2:  call   0822f5c4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4c6e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4c6e
08297907 +0xbd7:  mov    %eax,-0xc4(%ebp)
0829790d +0xbdd:  mov    0xc(%ebp),%eax
08297910 +0xbe0:  mov    %eax,(%esp)
08297913 +0xbe3:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
08297918 +0xbe8:  mov    %eax,(%esp)
0829791b +0xbeb:  call   0807e3b0 <_init+0xca8>
08297920 +0xbf0:  mov    %eax,%ebx
08297922 +0xbf2:  mov    0xc(%ebp),%eax
08297925 +0xbf5:  mov    %eax,(%esp)
08297928 +0xbf8:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0829792d +0xbfd:  mov    %ebx,0x8(%esp)
08297931 +0xc01:  mov    %eax,0x4(%esp)
08297935 +0xc05:  lea    -0xdf(%ebp),%eax
0829793b +0xc0b:  add    $0x1f,%eax
0829793e +0xc0e:  mov    %eax,(%esp)
08297941 +0xc11:  call   0807d8a0 <_init+0x198>
08297946 +0xc16:  mov    0xc(%ebp),%eax
08297949 +0xc19:  mov    %eax,(%esp)
0829794c +0xc1c:  call   082a6786 <_GLOBAL__I__ZN4CLog5this_E+0x2bad>  ; global constructors keyed to CLog::this_+0x2bad
08297951 +0xc21:  mov    %al,-0xa1(%ebp)
08297957 +0xc27:  lea    -0xdf(%ebp),%ebx
0829795d +0xc2d:  mov    0xc(%ebp),%eax
08297960 +0xc30:  mov    %eax,(%esp)
08297963 +0xc33:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08297968 +0xc38:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
0829796e +0xc3e:  mov    %eax,0x4(%esp)
08297972 +0xc42:  mov    %edx,(%esp)
08297975 +0xc45:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
0829797a +0xc4a:  movl   $0x3f,0x8(%esp)
08297982 +0xc52:  mov    %ebx,0x4(%esp)
08297986 +0xc56:  mov    %eax,(%esp)
08297989 +0xc59:  call   08470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>  ; CMonitorServerProxy::SendTcpPacket(char*, int)
0829798e +0xc5e:  lea    -0xdf(%ebp),%ebx
08297994 +0xc64:  mov    0xc(%ebp),%eax
08297997 +0xc67:  mov    %eax,(%esp)
0829799a +0xc6a:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0829799f +0xc6f:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
082979a5 +0xc75:  mov    %eax,0x4(%esp)
082979a9 +0xc79:  mov    %edx,(%esp)
082979ac +0xc7c:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
082979b1 +0xc81:  movl   $0x3f,0x8(%esp)
082979b9 +0xc89:  mov    %ebx,0x4(%esp)
082979bd +0xc8d:  mov    %eax,(%esp)
082979c0 +0xc90:  call   0846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>  ; CGuildServerProxy::SendTcpPacket(char*, int)
082979c5 +0xc95:  mov    0xc(%ebp),%eax
082979c8 +0xc98:  mov    %eax,0x4(%esp)
082979cc +0xc9c:  movl   $&g_schoolMgr,(%esp)
082979d3 +0xca3:  call   085683a0 <_ZN10CSchoolMgr7AddUserEP5CUser>  ; CSchoolMgr::AddUser(CUser*)
082979d8 +0xca8:  mov    0xc(%ebp),%eax
082979db +0xcab:  mov    %eax,(%esp)
082979de +0xcae:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
082979e3 +0xcb3:  test   %eax,%eax
082979e5 +0xcb5:  setne  %al
082979e8 +0xcb8:  test   %al,%al
082979ea +0xcba:  je     08297a07 <+0xcd7>
082979ec +0xcbc:  mov    0xc(%ebp),%eax
082979ef +0xcbf:  mov    %eax,(%esp)
082979f2 +0xcc2:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
082979f7 +0xcc7:  mov    %eax,0x4(%esp)
082979fb +0xccb:  movl   $&g_guildAgitMgr,(%esp)
08297a02 +0xcd2:  call   082aa41c <_GLOBAL__I__ZN4CLog5this_E+0x6843>  ; global constructors keyed to CLog::this_+0x6843
08297a07 +0xcd7:  mov    0xc(%ebp),%eax
08297a0a +0xcda:  mov    %eax,(%esp)
08297a0d +0xcdd:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08297a12 +0xce2:  mov    %eax,%edi
08297a14 +0xce4:  mov    0xc(%ebp),%eax
08297a17 +0xce7:  mov    %eax,(%esp)
08297a1a +0xcea:  call   0822f692 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4d3c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4d3c
08297a1f +0xcef:  mov    %eax,%esi
08297a21 +0xcf1:  mov    0xc(%ebp),%eax
08297a24 +0xcf4:  mov    %eax,(%esp)
08297a27 +0xcf7:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08297a2c +0xcfc:  mov    %eax,%ebx
08297a2e +0xcfe:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
08297a33 +0xd03:  mov    %edi,0x18(%esp)
08297a37 +0xd07:  mov    %esi,0x14(%esp)
08297a3b +0xd0b:  movl   $0x3c,0x10(%esp)
08297a43 +0xd13:  movl   $0x2,0xc(%esp)
08297a4b +0xd1b:  mov    %ebx,0x8(%esp)
08297a4f +0xd1f:  movl   $0x0,0x4(%esp)
08297a57 +0xd27:  mov    %eax,(%esp)
08297a5a +0xd2a:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
08297a5f +0xd2f:  mov    0xc(%ebp),%eax
08297a62 +0xd32:  mov    %eax,(%esp)
08297a65 +0xd35:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08297a6a +0xd3a:  mov    %eax,%edi
08297a6c +0xd3c:  mov    0xc(%ebp),%eax
08297a6f +0xd3f:  mov    %eax,(%esp)
08297a72 +0xd42:  call   0822f692 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4d3c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4d3c
08297a77 +0xd47:  mov    %eax,%esi
08297a79 +0xd49:  movl   $0x12c,(%esp)
08297a80 +0xd50:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
08297a85 +0xd55:  add    $0x258,%eax
08297a8a +0xd5a:  mov    %eax,-0xec(%ebp)
08297a90 +0xd60:  mov    0xc(%ebp),%eax
08297a93 +0xd63:  mov    %eax,(%esp)
08297a96 +0xd66:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08297a9b +0xd6b:  mov    %eax,%ebx
08297a9d +0xd6d:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
08297aa2 +0xd72:  mov    %edi,0x18(%esp)
08297aa6 +0xd76:  mov    %esi,0x14(%esp)
08297aaa +0xd7a:  mov    -0xec(%ebp),%edx
08297ab0 +0xd80:  mov    %edx,0x10(%esp)
08297ab4 +0xd84:  movl   $0x1,0xc(%esp)
08297abc +0xd8c:  mov    %ebx,0x8(%esp)
08297ac0 +0xd90:  movl   $0x0,0x4(%esp)
08297ac8 +0xd98:  mov    %eax,(%esp)
08297acb +0xd9b:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
08297ad0 +0xda0:  mov    0xc(%ebp),%eax
08297ad3 +0xda3:  mov    %eax,(%esp)
08297ad6 +0xda6:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08297adb +0xdab:  mov    %eax,%edi
08297add +0xdad:  mov    0xc(%ebp),%eax
08297ae0 +0xdb0:  mov    %eax,(%esp)
08297ae3 +0xdb3:  call   0822f692 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4d3c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4d3c
08297ae8 +0xdb8:  mov    %eax,%esi
08297aea +0xdba:  mov    0xc(%ebp),%eax
08297aed +0xdbd:  mov    %eax,(%esp)
08297af0 +0xdc0:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08297af5 +0xdc5:  mov    %eax,%ebx
08297af7 +0xdc7:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
08297afc +0xdcc:  mov    %edi,0x18(%esp)
08297b00 +0xdd0:  mov    %esi,0x14(%esp)
08297b04 +0xdd4:  movl   $0x12c,0x10(%esp)
08297b0c +0xddc:  movl   $0x5f,0xc(%esp)
08297b14 +0xde4:  mov    %ebx,0x8(%esp)
08297b18 +0xde8:  movl   $0x0,0x4(%esp)
08297b20 +0xdf0:  mov    %eax,(%esp)
08297b23 +0xdf3:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
08297b28 +0xdf8:  mov    0xc(%ebp),%eax
08297b2b +0xdfb:  mov    %eax,(%esp)
08297b2e +0xdfe:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08297b33 +0xe03:  mov    %eax,%edi
08297b35 +0xe05:  mov    0xc(%ebp),%eax
08297b38 +0xe08:  mov    %eax,(%esp)
08297b3b +0xe0b:  call   0822f692 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4d3c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4d3c
08297b40 +0xe10:  mov    %eax,%esi
08297b42 +0xe12:  mov    0xc(%ebp),%eax
08297b45 +0xe15:  mov    %eax,(%esp)
08297b48 +0xe18:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08297b4d +0xe1d:  mov    %eax,%ebx
08297b4f +0xe1f:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
08297b54 +0xe24:  mov    %edi,0x18(%esp)
08297b58 +0xe28:  mov    %esi,0x14(%esp)
08297b5c +0xe2c:  movl   $0x258,0x10(%esp)
08297b64 +0xe34:  movl   $0x60,0xc(%esp)
08297b6c +0xe3c:  mov    %ebx,0x8(%esp)
08297b70 +0xe40:  movl   $0x0,0x4(%esp)
08297b78 +0xe48:  mov    %eax,(%esp)
08297b7b +0xe4b:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
08297b80 +0xe50:  mov    0xc(%ebp),%eax
08297b83 +0xe53:  mov    %eax,(%esp)
08297b86 +0xe56:  call   0868c170 <_ZN5CUser31send_ontime_reward_start_notifyEv>  ; CUser::send_ontime_reward_start_notify()
08297b8b +0xe5b:  mov    $0x1,%ebx
08297b90 +0xe60:  lea    -0x94(%ebp),%eax
08297b96 +0xe66:  mov    %eax,(%esp)
08297b99 +0xe69:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08297b9e +0xe6e:  jmp    08297bd0 <+0xea0>
08297ba0 +0xe70:  mov    %edx,%ebx
08297ba2 +0xe72:  mov    %eax,%esi
08297ba4 +0xe74:  lea    -0x94(%ebp),%eax
08297baa +0xe7a:  mov    %eax,(%esp)
08297bad +0xe7d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08297bb2 +0xe82:  mov    %esi,%eax
08297bb4 +0xe84:  mov    %ebx,%edx
08297bb6 +0xe86:  jmp    08297bb8 <+0xe88>
08297bb8 +0xe88:  mov    %edx,%ebx
08297bba +0xe8a:  mov    %eax,%esi
08297bbc +0xe8c:  lea    -0x88(%ebp),%eax
08297bc2 +0xe92:  mov    %eax,(%esp)
08297bc5 +0xe95:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08297bca +0xe9a:  mov    %esi,%eax
08297bcc +0xe9c:  mov    %ebx,%edx
08297bce +0xe9e:  jmp    08297be0 <+0xeb0>
08297bd0 +0xea0:  lea    -0x88(%ebp),%eax
08297bd6 +0xea6:  mov    %eax,(%esp)
08297bd9 +0xea9:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08297bde +0xeae:  jmp    08297bfb <+0xecb>
08297be0 +0xeb0:  mov    %edx,%ebx
08297be2 +0xeb2:  mov    %eax,%esi
08297be4 +0xeb4:  lea    -0x7c(%ebp),%eax
08297be7 +0xeb7:  mov    %eax,(%esp)
08297bea +0xeba:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08297bef +0xebf:  mov    %esi,%eax
08297bf1 +0xec1:  mov    %ebx,%edx
08297bf3 +0xec3:  mov    %eax,(%esp)
08297bf6 +0xec6:  call   08ae3750 <_Unwind_Resume>
08297bfb +0xecb:  lea    -0x7c(%ebp),%eax
08297bfe +0xece:  mov    %eax,(%esp)
08297c01 +0xed1:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08297c06 +0xed6:  mov    %ebx,%eax
08297c08 +0xed8:  lea    -0xc(%ebp),%esp
08297c0b +0xedb:  add    $0x0,%esp
08297c0e +0xede:  pop    %ebx
08297c0f +0xedf:  pop    %esi
08297c10 +0xee0:  pop    %edi
08297c11 +0xee1:  pop    %ebp
08297c12 +0xee2:  ret
08297c13 +0xee3:  nop
```

## 反编译 C

```c
// CGameManager::insert_game_world @ 0x8296d30

/* CGameManager::insert_game_world(CUser*) */

undefined4 __thiscall CGameManager::insert_game_world(CGameManager *this,CUser *param_1)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long lVar10;
  uint uVar11;
  GameWorld *pGVar12;
  uint uVar13;
  CEventCharacterHandler *this_00;
  UserQuest *this_01;
  CTitleBook *this_02;
  CAchievement *this_03;
  CItemLock *this_04;
  map<std::pair<char,char>,int,std::less<std::pair<char,char>>,std::allocator<std::pair<std::pair<char,char>const,int>>>
  *this_05;
  CEnvironment *this_06;
  char *__s;
  size_t __n;
  void *__src;
  CMonitorServerProxy *this_07;
  CGuildServerProxy *this_08;
  undefined4 uVar14;
  TimerQueue *pTVar15;
  Packet_Monitor_Char_Info local_e3 [10];
  undefined4 local_d9;
  undefined1 local_d5;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined1 local_cc;
  undefined1 local_cb;
  undefined2 local_ca;
  undefined4 local_c8;
  undefined1 auStack_c4 [30];
  undefined1 local_a6;
  undefined1 local_a5;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_a4 [12];
  PacketGuard local_98 [12];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_8c [12];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_80 [12];
  int local_74 [2];
  undefined4 local_6c;
  int local_68;
  pair<int,int> local_64 [8];
  ENUM_HARDCODE_ITEM local_5c [8];
  undefined4 local_54;
  int local_50;
  cMyTrace local_4c [16];
  cMyTrace local_3c [16];
  int local_2c;
  int local_28;
  CExpandEquipslot *local_24;
  CMissionList_Charac *local_20;
  
  if (param_1 == (CUser *)0x0) {
    LogManager::logFormat
              (1,"App.cpp","bool CGameManager::insert_game_world(CUser*)",0xf20,
               "insert_waiting_room pUser parameter is null.");
    return 0;
  }
  iVar6 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar6 == 0) {
    LogManager::logFormat
              (1,"App.cpp","bool CGameManager::insert_game_world(CUser*)",0xf27,
               "Not selected character(a reason is fast returning to character screen on client)");
    return 0;
  }
  local_2c = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_80);
                    /* try { // try from 08296de5 to 08296de9 has its CatchHandler @ 08297be0 */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_8c);
  iVar6 = Inter_MonitorGuildPointDel::getLastDeleteTime();
  if (local_2c < iVar6) {
LAB_08296e11:
    bVar2 = false;
  }
  else {
    iVar6 = CUserCharacInfo::getCurCharacLastPlayTick((CUserCharacInfo *)param_1);
    iVar7 = Inter_MonitorGuildPointDel::getLastDeleteTime();
    if (iVar7 <= iVar6) goto LAB_08296e11;
    bVar2 = true;
  }
  if (bVar2) {
    local_6c = 0;
    local_68 = 0xc84;
                    /* try { // try from 08296e3c to 08296f61 has its CatchHandler @ 08297bb8 */
    std::make_pair<int,int>(local_74,&local_68);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              (local_80,(pair *)local_74);
  }
  cVar3 = CUserCharacInfo::getCurCharacGuildSecede((CUserCharacInfo *)param_1);
  if (cVar3 != '\0') {
    local_54 = 0;
    local_50 = 0x4b0;
    std::make_pair<ENUM_HARDCODE_ITEM,int>(local_5c,&local_50);
    std::pair<int,int>::pair<ENUM_HARDCODE_ITEM,int>(local_64,local_5c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back(local_80,local_64)
    ;
    CUserCharacInfo::setCurCharacGuildSecede((CUserCharacInfo *)param_1,'\0');
    uVar8 = CUser::GetServerGroup(param_1);
    uVar9 = CUser::get_charac_no(param_1,-1);
    DB_GuildExpBookDelete::makeRequest(uVar9,0,uVar8);
  }
  CUser::ResetItemByScript(param_1,(vector *)local_80);
  lVar10 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  iVar6 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  lVar1 = *(long *)(iVar6 + 0x7b);
  iVar6 = G_CEnvironment();
  cVar3 = CheckDailyScheduleTime(*(int *)(iVar6 + 0x37c),lVar1,lVar10);
  if (cVar3 != '\0') {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_a4);
                    /* try { // try from 08296f82 to 08296fab has its CatchHandler @ 08296fae */
    CUser::deleteDailyStackableItem(param_1,(vector *)local_a4,3,8);
    CUser::deleteDailyStackableItem(param_1,(vector *)local_a4,0x39,0x68);
                    /* try { // try from 08296fd2 to 082974d3 has its CatchHandler @ 08297bb8 */
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_a4);
  }
  CUser::deleteSpecificItem(param_1,(vector *)local_80,(vector *)local_8c);
  cVar3 = CUser::send_itemspace(param_1,0xc);
  if (cVar3 != '\x01') {
    uVar11 = CUser::get_acc_id(param_1);
    uVar8 = NumberToString(uVar11,0);
    LogManager::logFormat
              (1,"App.cpp","bool CGameManager::insert_game_world(CUser*)",0xf58,
               "CGameManager::insert_game_world, pUser(%s)->send_itemspace( ENUM_ITEMSPACE_ACCOUNT_CARGO ) return FAILED"
               ,uVar8);
    uVar8 = 0;
    goto LAB_08297bd0;
  }
  cVar3 = CUser::send_itemspace(param_1,0);
  if (cVar3 != '\x01') {
    uVar11 = CUser::get_acc_id(param_1);
    uVar8 = NumberToString(uVar11,0);
    LogManager::logFormat
              (1,"App.cpp","bool CGameManager::insert_game_world(CUser*)",0xf5f,
               "CGameManager::insert_game_world, pUser(%s)->send_itemspace( ENUM_ITEMSPACE_INVENTORY ) return FAILED"
               ,uVar8);
    uVar8 = 0;
    goto LAB_08297bd0;
  }
  cVar3 = CUser::send_itemspace(param_1,1);
  if (cVar3 != '\x01') {
    uVar11 = CUser::get_acc_id(param_1);
    uVar8 = NumberToString(uVar11,0);
    LogManager::logFormat
              (1,"App.cpp","bool CGameManager::insert_game_world(CUser*)",0xf64,
               "CGameManager::insert_game_world, pUser(%s)->send_itemspace( ENUM_ITEMSPACE_AVATAR ) return FAILED"
               ,uVar8);
    uVar8 = 0;
    goto LAB_08297bd0;
  }
  cVar3 = CUser::send_itemspace(param_1,2);
  if (cVar3 != '\x01') {
    uVar11 = CUser::get_acc_id(param_1);
    uVar8 = NumberToString(uVar11,0);
    LogManager::logFormat
              (1,"App.cpp","bool CGameManager::insert_game_world(CUser*)",0xf69,
               "CGameManager::insert_game_world, pUser(%s)->send_itemspace( ENUM_ITEMSPACE_CARGO ) return FAILED"
               ,uVar8);
    uVar8 = 0;
    goto LAB_08297bd0;
  }
  cVar3 = CUser::send_itemspace(param_1,7);
  if (cVar3 != '\x01') {
    uVar11 = CUser::get_acc_id(param_1);
    uVar8 = NumberToString(uVar11,0);
    LogManager::logFormat
              (1,"App.cpp","bool CGameManager::insert_game_world(CUser*)",0xf7a,
               "CGameManager::insert_game_world, pUser(%s)->send_itemspace( ENUM_ITEMSPACE_CREATURE ) return FAILED"
               ,uVar8);
    uVar8 = 0;
    goto LAB_08297bd0;
  }
  pGVar12 = (GameWorld *)G_GameWorld();
  iVar6 = GameWorld::GetChannelType(pGVar12);
  if (iVar6 == 0xe) {
    CUserCharacInfo::set_charac_guildkey((CUserCharacInfo *)param_1,0);
  }
  pGVar12 = (GameWorld *)G_GameWorld();
  cVar3 = GameWorld::reach_game_world(pGVar12,param_1);
  if (cVar3 != '\x01') {
    uVar11 = CUser::get_acc_id(param_1);
    uVar8 = NumberToString(uVar11,0);
    uVar11 = CUser::get_unique_id(param_1);
    cMyTrace::cMyTrace(local_4c,"bool CGameManager::insert_game_world(CUser*)",0xfa2,0);
    cMyTrace::operator()
              (local_4c,
               "CGameManager::insert_game_world , !G_GameWorld()->reach_game_world( pUser ) , USER : %d(%s)"
               ,uVar11 & 0xffff,uVar8);
    CUser::SendCmdErrorPacket(param_1,1,4);
    uVar11 = CUser::get_unique_id(param_1);
    uVar13 = CUser::get_acc_id(param_1);
    uVar8 = NumberToString(uVar13,0);
    cMyTrace::cMyTrace(local_3c,"bool CGameManager::insert_game_world(CUser*)",0xfab,0);
    cMyTrace::operator()(local_3c,"from (%d) m_id[%s] uid[%d]",1,uVar8,uVar11 & 0xffff);
    uVar8 = 0;
    goto LAB_08297bd0;
  }
  cVar3 = CUserCharacInfo::getCurCharacEventCharacterGrowtype((CUserCharacInfo *)param_1);
  local_28 = (int)cVar3;
  if (0 < local_28) {
    this_00 = (CEventCharacterHandler *)CEventCharacterHandlerInstance();
    CEventCharacterHandler::_makeEventCharacter(this_00,param_1,0x28);
  }
  local_24 = (CExpandEquipslot *)CUser::GetCharacExpandData(param_1,9);
  pGVar12 = (GameWorld *)G_GameWorld();
  cVar3 = GameWorld::IsEquipSlotSwitchChannel(pGVar12);
  if (cVar3 == '\0') {
    cVar3 = CUserCharacInfo::getCurChannelEquipslotSwitch((CUserCharacInfo *)param_1);
    if (cVar3 == '\x01') {
      cVar3 = CUserCharacInfo::getCurExpandEquipslotSwitch((CUserCharacInfo *)param_1);
      cVar4 = CUserCharacInfo::getCurChannelEquipslotSwitch((CUserCharacInfo *)param_1);
      CExpandEquipslot::EquipslotSwitch(local_24,param_1,'\0',cVar4,cVar3);
    }
  }
  else {
    cVar3 = CUserCharacInfo::getCurChannelEquipslotSwitch((CUserCharacInfo *)param_1);
    if (cVar3 == '\0') {
      cVar3 = CUserCharacInfo::getCurExpandEquipslotSwitch((CUserCharacInfo *)param_1);
      cVar4 = CUserCharacInfo::getCurChannelEquipslotSwitch((CUserCharacInfo *)param_1);
      CExpandEquipslot::EquipslotSwitch(local_24,param_1,'\0',cVar4,cVar3);
    }
  }
  pGVar12 = (GameWorld *)G_GameWorld();
  iVar6 = GameWorld::GetChannelType(pGVar12);
  if (iVar6 == 0xf) {
LAB_0829748e:
    bVar2 = true;
  }
  else {
    pGVar12 = (GameWorld *)G_GameWorld();
    iVar6 = GameWorld::GetChannelType(pGVar12);
    if (iVar6 == 0x10) goto LAB_0829748e;
    bVar2 = false;
  }
  if (bVar2) {
    local_20 = (CMissionList_Charac *)CUser::GetCharacExpandData(param_1,8);
    CMissionList_Charac::Update_EnterWorld_event(local_20,param_1);
  }
  PacketGuard::PacketGuard(local_98);
                    /* try { // try from 082974ed to 08297b8a has its CatchHandler @ 08297ba0 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_98,0,2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_98,0);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_98,1);
  CUser::make_basic_info(param_1,(char *)local_98,'\0');
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_98,true);
  pGVar12 = (GameWorld *)G_GameWorld();
  GameWorld::send_all(pGVar12,local_98,param_1);
  CUser::send_skill_info(param_1);
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_98);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_98,0,2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_98,1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_98,1);
  CUser::make_basic_info(param_1,(char *)local_98,'\x01');
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_98,true);
  CUser::Send(param_1,local_98);
  CExpandEquipslot::Send_Expand_Equip_Info(local_24,param_1);
  CUser::processReturnUserQuestAutoClear(param_1);
  CUser::send_clear_quest_list(param_1);
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_98);
  this_01 = (UserQuest *)CUser::getCurCharacQuestR(param_1);
  UserQuest::get_quest_info(this_01,(char *)local_98);
  CUser::Send(param_1,local_98);
  this_02 = (CTitleBook *)CUser::GetCharacExpandData(param_1,0xe);
  CTitleBook::sendList(this_02);
  this_03 = (CAchievement *)CUser::GetCharacExpandData(param_1,0xf);
  CAchievement::sendList(this_03);
  this_04 = (CItemLock *)CUser::GetCharacExpandData(param_1,2);
  item_lock::CItemLock::SendItemLockList(this_04,param_1);
  pGVar12 = (GameWorld *)G_GameWorld();
  iVar6 = GameWorld::GetChannelType(pGVar12);
  if (iVar6 != 0xf) {
    SendPvpList(this,param_1);
  }
  SendWarRoomList(this,param_1);
  CUser::send_pvp_record(param_1);
  SendPartyList(this,param_1);
  sVar5 = CUser::getPunishTradeAlert(param_1);
  if ((sVar5 == 0xe7) || (sVar5 = CUser::getPunishTradeAlert(param_1), sVar5 == 0xe8)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_98);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_98,0,0xff);
    sVar5 = CUser::getPunishTradeAlert(param_1);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_98,(int)sVar5);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_98,true);
    CUser::Send(param_1,local_98);
  }
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_98);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_98,0,0x7c);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_98,true);
  CUser::Send(param_1,local_98);
  this_05 = (map<std::pair<char,char>,int,std::less<std::pair<char,char>>,std::allocator<std::pair<std::pair<char,char>const,int>>>
             *)CUser::GetPICSMap(param_1);
  std::
  map<std::pair<char,char>,int,std::less<std::pair<char,char>>,std::allocator<std::pair<std::pair<char,char>const,int>>>
  ::clear(this_05);
  CUser::ReCalcChattingEmoticon(param_1);
  CUser::SendChattingEmoticon(param_1);
  Packet_Monitor_Char_Info::Packet_Monitor_Char_Info(local_e3);
  local_d9 = CUser::get_acc_id(param_1);
  this_06 = (CEnvironment *)G_CEnvironment();
  local_d5 = CEnvironment::get_channel_no(this_06);
  pGVar12 = (GameWorld *)G_GameWorld();
  local_a6 = GameWorld::GetChannelType(pGVar12);
  local_d4 = CUser::get_charac_no(param_1,-1);
  local_d0 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
  local_cc = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
  local_cb = CUserCharacInfo::getCurCharacGrowType((CUserCharacInfo *)param_1);
  local_ca = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  local_c8 = CUserCharacInfo::get_charac_memberkey((CUserCharacInfo *)param_1);
  __s = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
  __n = strlen(__s);
  __src = (void *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
  memcpy(auStack_c4,__src,__n);
  local_a5 = CUser::IsReturnUserFirstLogin(param_1);
  uVar8 = CUser::GetServerGroup(param_1);
  this_07 = (CMonitorServerProxy *)
            CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                      (GlobalData::s_monitor_proxy_mgr,uVar8);
  CMonitorServerProxy::SendTcpPacket(this_07,(char *)local_e3,0x3f);
  uVar8 = CUser::GetServerGroup(param_1);
  this_08 = (CGuildServerProxy *)
            CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,uVar8);
  CGuildServerProxy::SendTcpPacket(this_08,(char *)local_e3,0x3f);
  CSchoolMgr::AddUser((CSchoolMgr *)g_schoolMgr,param_1);
  iVar6 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
  if (iVar6 != 0) {
    uVar11 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
    CGuildAgitManager::AllocGuildAgitArea((CGuildAgitManager *)g_guildAgitMgr,uVar11);
  }
  uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  uVar9 = CUserCharacInfo::GetLoginTick((CUserCharacInfo *)param_1);
  uVar14 = CUser::GetUID(param_1);
  pTVar15 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar15,0,uVar14,2,0x3c,uVar9,uVar8);
  uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  uVar9 = CUserCharacInfo::GetLoginTick((CUserCharacInfo *)param_1);
  iVar6 = get_rand_int(300);
  uVar14 = CUser::GetUID(param_1);
  pTVar15 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar15,0,uVar14,1,iVar6 + 600,uVar9,uVar8);
  uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  uVar9 = CUserCharacInfo::GetLoginTick((CUserCharacInfo *)param_1);
  uVar14 = CUser::GetUID(param_1);
  pTVar15 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar15,0,uVar14,0x5f,300,uVar9,uVar8);
  uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  uVar9 = CUserCharacInfo::GetLoginTick((CUserCharacInfo *)param_1);
  uVar14 = CUser::GetUID(param_1);
  pTVar15 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar15,0,uVar14,0x60,600,uVar9,uVar8);
  CUser::send_ontime_reward_start_notify(param_1);
  uVar8 = 1;
                    /* try { // try from 08297b99 to 08297b9d has its CatchHandler @ 08297bb8 */
  PacketGuard::~PacketGuard(local_98);
LAB_08297bd0:
                    /* try { // try from 08297bd9 to 08297bdd has its CatchHandler @ 08297be0 */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_8c);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_80);
  return uVar8;
}
```
