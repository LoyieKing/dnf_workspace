# init

`_ZN9GameWorld4initEv`

`GameWorld::init()`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c4134` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c4134  _ZN9GameWorld4initEv
#           GameWorld::init()
# range [0x086c4134, 0x086c454f]
086c4134 +0x000:  push   %ebp
086c4135 +0x001:  mov    %esp,%ebp
086c4137 +0x003:  push   %edi
086c4138 +0x004:  push   %esi
086c4139 +0x005:  push   %ebx
086c413a +0x006:  sub    $0xac,%esp
086c4140 +0x00c:  call   0861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>  ; sync_script::GetInstanceSyncScript()
086c4145 +0x011:  mov    %eax,(%esp)
086c4148 +0x014:  call   0862653a <_ZN11sync_script11CSyncScript24truncate_town_info_tableEv>  ; sync_script::CSyncScript::truncate_town_info_table()
086c414d +0x019:  xor    $0x1,%eax
086c4150 +0x01c:  test   %al,%al
086c4152 +0x01e:  je     086c416a <+0x36>
086c4154 +0x020:  movl   $"Fail truncate_town_info_tablef",(%esp)
086c415b +0x027:  call   0807e570 <_init+0xe68>
086c4160 +0x02c:  mov    $0x0,%ebx
086c4165 +0x031:  jmp    086c4542 <+0x40e>
086c416a +0x036:  mov    0x8(%ebp),%eax
086c416d +0x039:  movw   $0x0,0x24(%eax)
086c4173 +0x03f:  movl   $"Town.lst",0x4(%esp)
086c417b +0x047:  movl   $"Town/",(%esp)
086c4182 +0x04e:  call   08aad9ec <_Z14initTownScriptPcS_>  ; initTownScript(char*, char*)
086c4187 +0x053:  lea    -0x78(%ebp),%eax
086c418a +0x056:  mov    %eax,(%esp)
086c418d +0x059:  call   086d1f04 <_GLOBAL__I_MAX_VILLAGE_NUM+0x735>  ; global constructors keyed to MAX_VILLAGE_NUM+0x735
086c4192 +0x05e:  movl   $0x0,-0x24(%ebp)
086c4199 +0x065:  movl   $&g_townScriptFileList,(%esp)
086c41a0 +0x06c:  call   086d2cd8 <_GLOBAL__I_MAX_VILLAGE_NUM+0x1509>  ; global constructors keyed to MAX_VILLAGE_NUM+0x1509
086c41a5 +0x071:  mov    %eax,-0x20(%ebp)
086c41a8 +0x074:  mov    -0x20(%ebp),%eax
086c41ab +0x077:  add    $0x1,%eax
086c41ae +0x07a:  mov    %eax,&MAX_VILLAGE_NUM
086c41b3 +0x07f:  mov    &MAX_VILLAGE_NUM,%eax
086c41b8 +0x084:  mov    %eax,%ebx
086c41ba +0x086:  mov    %ebx,%eax
086c41bc +0x088:  add    %eax,%eax
086c41be +0x08a:  add    %ebx,%eax
086c41c0 +0x08c:  shl    $0x2,%eax
086c41c3 +0x08f:  add    %ebx,%eax
086c41c5 +0x091:  add    $0x1,%eax
086c41c8 +0x094:  shl    $0x2,%eax
086c41cb +0x097:  mov    %eax,(%esp)
086c41ce +0x09a:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
086c41d3 +0x09f:  mov    %eax,%esi
086c41d5 +0x0a1:  mov    %esi,%eax
086c41d7 +0x0a3:  mov    %ebx,(%eax)
086c41d9 +0x0a5:  mov    %esi,%eax
086c41db +0x0a7:  lea    0x4(%eax),%edi
086c41de +0x0aa:  mov    %edi,-0x8c(%ebp)
086c41e4 +0x0b0:  lea    -0x1(%ebx),%eax
086c41e7 +0x0b3:  mov    %eax,-0x88(%ebp)
086c41ed +0x0b9:  jmp    086c420b <+0xd7>
086c41ef +0x0bb:  mov    -0x8c(%ebp),%eax
086c41f5 +0x0c1:  mov    %eax,(%esp)
086c41f8 +0x0c4:  call   086c32e0 <_ZN7VillageC1Ev>  ; Village::Village()
086c41fd +0x0c9:  addl   $0x34,-0x8c(%ebp)
086c4204 +0x0d0:  subl   $0x1,-0x88(%ebp)
086c420b +0x0d7:  cmpl   $0xffffffff,-0x88(%ebp)
086c4212 +0x0de:  setne  %al
086c4215 +0x0e1:  test   %al,%al
086c4217 +0x0e3:  jne    086c41ef <+0xbb>
086c4219 +0x0e5:  jmp    086c4266 <+0x132>
086c421b +0x0e7:  mov    %edx,-0x80(%ebp)
086c421e +0x0ea:  mov    %eax,-0x84(%ebp)
086c4224 +0x0f0:  test   %edi,%edi
086c4226 +0x0f2:  je     086c4248 <+0x114>
086c4228 +0x0f4:  lea    -0x1(%ebx),%eax
086c422b +0x0f7:  sub    -0x88(%ebp),%eax
086c4231 +0x0fd:  imul   $0x34,%eax,%eax
086c4234 +0x100:  lea    (%edi,%eax,1),%ebx
086c4237 +0x103:  cmp    %edi,%ebx
086c4239 +0x105:  je     086c4248 <+0x114>
086c423b +0x107:  sub    $0x34,%ebx
086c423e +0x10a:  mov    %ebx,(%esp)
086c4241 +0x10d:  call   086c3300 <_ZN7VillageD1Ev>  ; Village::~Village()
086c4246 +0x112:  jmp    086c4237 <+0x103>
086c4248 +0x114:  mov    -0x84(%ebp),%eax
086c424e +0x11a:  mov    -0x80(%ebp),%edx
086c4251 +0x11d:  mov    %edx,%ebx
086c4253 +0x11f:  mov    %eax,%edi
086c4255 +0x121:  mov    %esi,(%esp)
086c4258 +0x124:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
086c425d +0x129:  mov    %edi,%eax
086c425f +0x12b:  mov    %ebx,%edx
086c4261 +0x12d:  jmp    086c451c <+0x3e8>
086c4266 +0x132:  mov    %esi,%eax
086c4268 +0x134:  lea    0x4(%eax),%edx
086c426b +0x137:  mov    0x8(%ebp),%eax
086c426e +0x13a:  mov    %edx,0x1c(%eax)
086c4271 +0x13d:  mov    0x8(%ebp),%eax
086c4274 +0x140:  mov    -0x20(%ebp),%edx
086c4277 +0x143:  mov    %edx,0x18(%eax)
086c427a +0x146:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
086c427f +0x14b:  mov    %eax,(%esp)
086c4282 +0x14e:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
086c4287 +0x153:  test   %al,%al
086c4289 +0x155:  je     086c4300 <+0x1cc>
086c428b +0x157:  movl   $0x0,-0x34(%ebp)
086c4292 +0x15e:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%eax
086c4297 +0x163:  mov    %eax,(%esp)
086c429a +0x166:  call   082b44ba <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x63b5>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x63b5
086c429f +0x16b:  mov    %eax,-0x1c(%ebp)
086c42a2 +0x16e:  jmp    086c42e5 <+0x1b1>
086c42a4 +0x170:  mov    -0x1c(%ebp),%ebx
086c42a7 +0x173:  mov    -0x1c(%ebp),%esi
086c42aa +0x176:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
086c42af +0x17b:  mov    %esi,0x4(%esp)
086c42b3 +0x17f:  mov    %eax,(%esp)
086c42b6 +0x182:  call   08234524 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9bce>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9bce
086c42bb +0x187:  mov    %ebx,0x8(%esp)
086c42bf +0x18b:  mov    %eax,0x4(%esp)
086c42c3 +0x18f:  mov    0x8(%ebp),%eax
086c42c6 +0x192:  mov    %eax,(%esp)
086c42c9 +0x195:  call   086cb88a <_ZN9GameWorld13InsertChannelEi17ENUM_SERVER_GROUP>  ; GameWorld::InsertChannel(int, ENUM_SERVER_GROUP)
086c42ce +0x19a:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%eax
086c42d3 +0x19f:  lea    -0x34(%ebp),%edx
086c42d6 +0x1a2:  mov    %edx,0x4(%esp)
086c42da +0x1a6:  mov    %eax,(%esp)
086c42dd +0x1a9:  call   082b44f2 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x63ed>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x63ed
086c42e2 +0x1ae:  mov    %eax,-0x1c(%ebp)
086c42e5 +0x1b1:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%eax
086c42ea +0x1b6:  mov    %eax,(%esp)
086c42ed +0x1b9:  call   082b44e6 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x63e1>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x63e1
086c42f2 +0x1be:  mov    -0x34(%ebp),%edx
086c42f5 +0x1c1:  cmp    %edx,%eax
086c42f7 +0x1c3:  setg   %al
086c42fa +0x1c6:  test   %al,%al
086c42fc +0x1c8:  jne    086c42a4 <+0x170>
086c42fe +0x1ca:  jmp    086c4322 <+0x1ee>
086c4300 +0x1cc:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
086c4305 +0x1d1:  mov    0x198(%eax),%eax
086c430b +0x1d7:  movl   $0x0,0x8(%esp)
086c4313 +0x1df:  mov    %eax,0x4(%esp)
086c4317 +0x1e3:  mov    0x8(%ebp),%eax
086c431a +0x1e6:  mov    %eax,(%esp)
086c431d +0x1e9:  call   086cb88a <_ZN9GameWorld13InsertChannelEi17ENUM_SERVER_GROUP>  ; GameWorld::InsertChannel(int, ENUM_SERVER_GROUP)
086c4322 +0x1ee:  lea    -0x30(%ebp),%eax
086c4325 +0x1f1:  mov    %eax,(%esp)
086c4328 +0x1f4:  call   082b3cd8 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x5bd3>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x5bd3
086c432d +0x1f9:  lea    -0x7c(%ebp),%eax
086c4330 +0x1fc:  movl   $&g_townScriptFileList,0x4(%esp)
086c4338 +0x204:  mov    %eax,(%esp)
086c433b +0x207:  call   080e60f2 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x228>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x228
086c4340 +0x20c:  sub    $0x4,%esp
086c4343 +0x20f:  mov    -0x7c(%ebp),%eax
086c4346 +0x212:  mov    %eax,-0x30(%ebp)
086c4349 +0x215:  jmp    086c44d5 <+0x3a1>
086c434e +0x21a:  lea    -0x30(%ebp),%eax
086c4351 +0x21d:  mov    %eax,(%esp)
086c4354 +0x220:  call   080e61b8 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x2ee>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x2ee
086c4359 +0x225:  add    $0x4,%eax
086c435c +0x228:  mov    %eax,(%esp)
086c435f +0x22b:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
086c4364 +0x230:  mov    %eax,-0x24(%ebp)
086c4367 +0x233:  cmpl   $0x0,-0x24(%ebp)
086c436b +0x237:  je     086c4507 <+0x3d3>
086c4371 +0x23d:  mov    -0x24(%ebp),%eax
086c4374 +0x240:  mov    %eax,0x4(%esp)
086c4378 +0x244:  lea    -0x78(%ebp),%eax
086c437b +0x247:  mov    %eax,(%esp)
086c437e +0x24a:  call   08aadaa8 <_Z16importTownScriptP10TownScriptPKc>  ; importTownScript(TownScript*, char const*)
086c4383 +0x24f:  xor    $0x1,%eax
086c4386 +0x252:  test   %al,%al
086c4388 +0x254:  je     086c43c7 <+0x293>
086c438a +0x256:  mov    -0x24(%ebp),%eax
086c438d +0x259:  mov    %eax,0x14(%esp)
086c4391 +0x25d:  movl   $"importTownScript() fail - filename(%s)",0x10(%esp)
086c4399 +0x265:  movl   $0x3d4,0xc(%esp)
086c43a1 +0x26d:  movl   $&_ZZN9GameWorld4initEvE19__PRETTY_FUNCTION__,0x8(%esp)
086c43a9 +0x275:  movl   $"world.cpp",0x4(%esp)
086c43b1 +0x27d:  movl   $0x1,(%esp)
086c43b8 +0x284:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
086c43bd +0x289:  mov    $0x0,%ebx
086c43c2 +0x28e:  jmp    086c4537 <+0x403>
086c43c7 +0x293:  call   0861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>  ; sync_script::GetInstanceSyncScript()
086c43cc +0x298:  lea    -0x78(%ebp),%edx
086c43cf +0x29b:  mov    %edx,0x4(%esp)
086c43d3 +0x29f:  mov    %eax,(%esp)
086c43d6 +0x2a2:  call   086265be <_ZN11sync_script11CSyncScript22insert_town_info_to_dbERK10TownScript>  ; sync_script::CSyncScript::insert_town_info_to_db(TownScript const&)
086c43db +0x2a7:  xor    $0x1,%eax
086c43de +0x2aa:  test   %al,%al
086c43e0 +0x2ac:  je     086c43ff <+0x2cb>
086c43e2 +0x2ae:  mov    -0x24(%ebp),%eax
086c43e5 +0x2b1:  mov    %eax,0x4(%esp)
086c43e9 +0x2b5:  movl   $"insert_town_category Error: %s\n",(%esp)
086c43f0 +0x2bc:  call   0807db60 <_init+0x458>
086c43f5 +0x2c1:  mov    $0x0,%ebx
086c43fa +0x2c6:  jmp    086c4537 <+0x403>
086c43ff +0x2cb:  mov    -0x78(%ebp),%edx
086c4402 +0x2ce:  mov    0x8(%ebp),%eax
086c4405 +0x2d1:  mov    0x18(%eax),%eax
086c4408 +0x2d4:  cmp    %eax,%edx
086c440a +0x2d6:  jle    086c445a <+0x326>
086c440c +0x2d8:  mov    0x8(%ebp),%eax
086c440f +0x2db:  mov    0x18(%eax),%edx
086c4412 +0x2de:  mov    -0x78(%ebp),%eax
086c4415 +0x2e1:  mov    -0x24(%ebp),%ecx
086c4418 +0x2e4:  mov    %ecx,0x1c(%esp)
086c441c +0x2e8:  mov    %edx,0x18(%esp)
086c4420 +0x2ec:  mov    %eax,0x14(%esp)
086c4424 +0x2f0:  movl   $"tempTown.townIndex_(%d) > m_iVillCount(%d) - file(%s)",0x10(%esp)
086c442c +0x2f8:  movl   $0x3e3,0xc(%esp)
086c4434 +0x300:  movl   $&_ZZN9GameWorld4initEvE19__PRETTY_FUNCTION__,0x8(%esp)
086c443c +0x308:  movl   $"world.cpp",0x4(%esp)
086c4444 +0x310:  movl   $0x1,(%esp)
086c444b +0x317:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
086c4450 +0x31c:  mov    $0x0,%ebx
086c4455 +0x321:  jmp    086c4537 <+0x403>
086c445a +0x326:  mov    0x8(%ebp),%eax
086c445d +0x329:  mov    0x1c(%eax),%edx
086c4460 +0x32c:  mov    -0x78(%ebp),%eax
086c4463 +0x32f:  imul   $0x34,%eax,%eax
086c4466 +0x332:  add    %eax,%edx
086c4468 +0x334:  lea    -0x78(%ebp),%eax
086c446b +0x337:  mov    %eax,0x4(%esp)
086c446f +0x33b:  mov    %edx,(%esp)
086c4472 +0x33e:  call   086c33b8 <_ZN7Village11set_villageER10TownScript>  ; Village::set_village(TownScript&)
086c4477 +0x343:  xor    $0x1,%eax
086c447a +0x346:  test   %al,%al
086c447c +0x348:  je     086c44b8 <+0x384>
086c447e +0x34a:  mov    -0x24(%ebp),%eax
086c4481 +0x34d:  mov    %eax,0x14(%esp)
086c4485 +0x351:  movl   $"m_pVill[tempTown.townIndex_].set_village() fail - file(%s)",0x10(%esp)
086c448d +0x359:  movl   $0x3e9,0xc(%esp)
086c4495 +0x361:  movl   $&_ZZN9GameWorld4initEvE19__PRETTY_FUNCTION__,0x8(%esp)
086c449d +0x369:  movl   $"world.cpp",0x4(%esp)
086c44a5 +0x371:  movl   $0x1,(%esp)
086c44ac +0x378:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
086c44b1 +0x37d:  mov    $0x0,%ebx
086c44b6 +0x382:  jmp    086c4537 <+0x403>
086c44b8 +0x384:  lea    -0x28(%ebp),%eax
086c44bb +0x387:  movl   $0x0,0x8(%esp)
086c44c3 +0x38f:  lea    -0x30(%ebp),%edx
086c44c6 +0x392:  mov    %edx,0x4(%esp)
086c44ca +0x396:  mov    %eax,(%esp)
086c44cd +0x399:  call   083416e4 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x37b1>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x37b1
086c44d2 +0x39e:  sub    $0x4,%esp
086c44d5 +0x3a1:  lea    -0x2c(%ebp),%eax
086c44d8 +0x3a4:  movl   $&g_townScriptFileList,0x4(%esp)
086c44e0 +0x3ac:  mov    %eax,(%esp)
086c44e3 +0x3af:  call   080e6118 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x24e>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x24e
086c44e8 +0x3b4:  sub    $0x4,%esp
086c44eb +0x3b7:  lea    -0x2c(%ebp),%eax
086c44ee +0x3ba:  mov    %eax,0x4(%esp)
086c44f2 +0x3be:  lea    -0x30(%ebp),%eax
086c44f5 +0x3c1:  mov    %eax,(%esp)
086c44f8 +0x3c4:  call   080e613e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x274>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x274
086c44fd +0x3c9:  test   %al,%al
086c44ff +0x3cb:  jne    086c434e <+0x21a>
086c4505 +0x3d1:  jmp    086c4508 <+0x3d4>
086c4507 +0x3d3:  nop
086c4508 +0x3d4:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086c450d +0x3d9:  mov    %eax,(%esp)
086c4510 +0x3dc:  call   08357e9e <_ZN12CDataManager18GetPvPChannelGradeEv>  ; CDataManager::GetPvPChannelGrade()
086c4515 +0x3e1:  mov    $0x1,%ebx
086c451a +0x3e6:  jmp    086c4537 <+0x403>
086c451c +0x3e8:  mov    %edx,%ebx
086c451e +0x3ea:  mov    %eax,%esi
086c4520 +0x3ec:  lea    -0x78(%ebp),%eax
086c4523 +0x3ef:  mov    %eax,(%esp)
086c4526 +0x3f2:  call   086d2ab8 <_GLOBAL__I_MAX_VILLAGE_NUM+0x12e9>  ; global constructors keyed to MAX_VILLAGE_NUM+0x12e9
086c452b +0x3f7:  mov    %esi,%eax
086c452d +0x3f9:  mov    %ebx,%edx
086c452f +0x3fb:  mov    %eax,(%esp)
086c4532 +0x3fe:  call   08ae3750 <_Unwind_Resume>
086c4537 +0x403:  lea    -0x78(%ebp),%eax
086c453a +0x406:  mov    %eax,(%esp)
086c453d +0x409:  call   086d2ab8 <_GLOBAL__I_MAX_VILLAGE_NUM+0x12e9>  ; global constructors keyed to MAX_VILLAGE_NUM+0x12e9
086c4542 +0x40e:  mov    %ebx,%eax
086c4544 +0x410:  lea    -0xc(%ebp),%esp
086c4547 +0x413:  add    $0x0,%esp
086c454a +0x416:  pop    %ebx
086c454b +0x417:  pop    %esi
086c454c +0x418:  pop    %edi
086c454d +0x419:  pop    %ebp
086c454e +0x41a:  ret
086c454f +0x41b:  nop
```

## 反编译 C

```c
// GameWorld::init @ 0x86c4134

/* GameWorld::init() */

undefined4 __thiscall GameWorld::init(GameWorld *this)

{
  char cVar1;
  CSyncScript *pCVar2;
  int iVar3;
  int *piVar4;
  GameWorld *this_00;
  CEnvironment *pCVar5;
  undefined4 uVar6;
  CDataManager *this_01;
  undefined4 uVar7;
  Village *local_90;
  int local_8c;
  undefined4 local_80;
  int local_7c [17];
  int local_38;
  undefined4 local_34;
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_30 [4];
  _Rb_tree_iterator<std::pair<int_const,std::string>> local_2c [4];
  char *local_28;
  int local_24;
  undefined4 local_20;
  
  pCVar2 = (CSyncScript *)sync_script::GetInstanceSyncScript();
  cVar1 = sync_script::CSyncScript::truncate_town_info_table(pCVar2);
  if (cVar1 == '\x01') {
    *(undefined2 *)(this + 0x24) = 0;
    initTownScript("Town/","Town.lst");
    TownScript::TownScript((TownScript *)local_7c);
    local_28 = (char *)0x0;
                    /* try { // try from 086c41a0 to 086c41d2 has its CatchHandler @ 086c451c */
    local_8c = std::
               map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>
               ::size((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>
                       *)g_townScriptFileList);
    iVar3 = local_8c + 1;
    MAX_VILLAGE_NUM = iVar3;
    local_24 = local_8c;
    piVar4 = operator_new__((iVar3 * 0xd + 1) * 4);
    *piVar4 = iVar3;
    local_90 = (Village *)(piVar4 + 1);
    for (; local_8c != -1; local_8c = local_8c + -1) {
                    /* try { // try from 086c41f8 to 086c41fc has its CatchHandler @ 086c421b */
      Village::Village(local_90);
      local_90 = local_90 + 0x34;
    }
    *(int **)(this + 0x1c) = piVar4 + 1;
    *(int *)(this + 0x18) = local_24;
                    /* try { // try from 086c427a to 086c4514 has its CatchHandler @ 086c451c */
    this_00 = (GameWorld *)G_GameWorld();
    cVar1 = IsIntegratedPvPBaseChannel(this_00);
    if (cVar1 == '\0') {
      iVar3 = G_CEnvironment();
      InsertChannel(this,*(undefined4 *)(iVar3 + 0x198),0);
    }
    else {
      local_38 = 0;
      local_20 = CServerProxyMgr<CStatisticServerProxy>::GetStartIndex
                           (GlobalData::s_statistic_proxy_mgr);
      while (iVar3 = CServerProxyMgr<CStatisticServerProxy>::GetEndIndex
                               (GlobalData::s_statistic_proxy_mgr), uVar7 = local_20,
            local_38 < iVar3) {
        pCVar5 = (CEnvironment *)G_CEnvironment();
        uVar6 = CEnvironment::get_gc_no_hardcode(pCVar5,uVar7);
        InsertChannel(this,uVar6,uVar7);
        local_20 = CServerProxyMgr<CStatisticServerProxy>::GetNextIndex
                             (GlobalData::s_statistic_proxy_mgr,&local_38);
      }
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::string>>::_Rb_tree_iterator
              ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_34);
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::begin
              ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>
                *)&local_80);
    local_34 = local_80;
    while( true ) {
      std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
                (local_30);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_34,
                         (_Rb_tree_iterator *)local_30);
      if (cVar1 == '\0') break;
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_34);
      local_28 = (char *)std::string::c_str((string *)(iVar3 + 4));
      if (local_28 == (char *)0x0) break;
      cVar1 = importTownScript((TownScript *)local_7c,local_28);
      if (cVar1 != '\x01') {
        LogManager::logFormat
                  (1,"world.cpp","bool GameWorld::init()",0x3d4,
                   "importTownScript() fail - filename(%s)",local_28);
        uVar7 = 0;
        goto LAB_086c4537;
      }
      pCVar2 = (CSyncScript *)sync_script::GetInstanceSyncScript();
      cVar1 = sync_script::CSyncScript::insert_town_info_to_db(pCVar2,(TownScript *)local_7c);
      if (cVar1 != '\x01') {
        printf("insert_town_category Error: %s\n",local_28);
        uVar7 = 0;
        goto LAB_086c4537;
      }
      if (*(int *)(this + 0x18) < local_7c[0]) {
        LogManager::logFormat
                  (1,"world.cpp","bool GameWorld::init()",0x3e3,
                   "tempTown.townIndex_(%d) > m_iVillCount(%d) - file(%s)",local_7c[0],
                   *(undefined4 *)(this + 0x18),local_28);
        uVar7 = 0;
        goto LAB_086c4537;
      }
      cVar1 = Village::set_village
                        ((Village *)(*(int *)(this + 0x1c) + local_7c[0] * 0x34),
                         (TownScript *)local_7c);
      if (cVar1 != '\x01') {
        LogManager::logFormat
                  (1,"world.cpp","bool GameWorld::init()",0x3e9,
                   "m_pVill[tempTown.townIndex_].set_village() fail - file(%s)",local_28);
        uVar7 = 0;
        goto LAB_086c4537;
      }
      std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator++(local_2c,(int)&local_34);
    }
    this_01 = (CDataManager *)G_CDataManager();
    CDataManager::GetPvPChannelGrade(this_01);
    uVar7 = 1;
LAB_086c4537:
    TownScript::~TownScript((TownScript *)local_7c);
  }
  else {
    puts("Fail truncate_town_info_tablef");
    uVar7 = 0;
  }
  return uVar7;
}
```
