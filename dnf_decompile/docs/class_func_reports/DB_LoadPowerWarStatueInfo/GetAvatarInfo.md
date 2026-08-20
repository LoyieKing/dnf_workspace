# GetAvatarInfo

`_ZN25DB_LoadPowerWarStatueInfo13GetAvatarInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj`

`DB_LoadPowerWarStatueInfo::GetAvatarInfo(SIG_LOAD_POWER_WAR_STATUE_INFO*, unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_LoadPowerWarStatueInfo` | `0x08434d36` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08434d36  _ZN25DB_LoadPowerWarStatueInfo13GetAvatarInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj
#           DB_LoadPowerWarStatueInfo::GetAvatarInfo(SIG_LOAD_POWER_WAR_STATUE_INFO*, unsigned int)
# range [0x08434d36, 0x084354d9]
08434d36 +0x000:  push   %ebp
08434d37 +0x001:  mov    %esp,%ebp
08434d39 +0x003:  push   %edi
08434d3a +0x004:  push   %esi
08434d3b +0x005:  push   %ebx
08434d3c +0x006:  sub    $0xeec,%esp
08434d42 +0x00c:  lea    -0x432(%ebp),%edx
08434d48 +0x012:  mov    $0x37a,%ebx
08434d4d +0x017:  mov    $0x0,%eax
08434d52 +0x01c:  mov    %edx,%ecx
08434d54 +0x01e:  and    $0x2,%ecx
08434d57 +0x021:  test   %ecx,%ecx
08434d59 +0x023:  je     08434d64 <+0x2e>
08434d5b +0x025:  mov    %ax,(%edx)
08434d5e +0x028:  add    $0x2,%edx
08434d61 +0x02b:  sub    $0x2,%ebx
08434d64 +0x02e:  mov    %ebx,%ecx
08434d66 +0x030:  shr    $0x2,%ecx
08434d69 +0x033:  mov    %edx,%edi
08434d6b +0x035:  rep stos %eax,%es:(%edi)
08434d6d +0x037:  mov    %edi,%edx
08434d6f +0x039:  mov    %ebx,%ecx
08434d71 +0x03b:  and    $0x2,%ecx
08434d74 +0x03e:  test   %ecx,%ecx
08434d76 +0x040:  je     08434d7e <+0x48>
08434d78 +0x042:  mov    %ax,(%edx)
08434d7b +0x045:  add    $0x2,%edx
08434d7e +0x048:  mov    %ebx,%ecx
08434d80 +0x04a:  and    $0x1,%ecx
08434d83 +0x04d:  test   %ecx,%ecx
08434d85 +0x04f:  je     08434d8c <+0x56>
08434d87 +0x051:  mov    %al,(%edx)
08434d89 +0x053:  add    $0x1,%edx
08434d8c +0x056:  movl   $0x37a,-0xb8(%ebp)
08434d96 +0x060:  mov    -0xb8(%ebp),%eax
08434d9c +0x066:  mov    %eax,-0x34(%ebp)
08434d9f +0x069:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08434da4 +0x06e:  movl   $0x0,0x8(%esp)
08434dac +0x076:  movl   $0x3,0x4(%esp)
08434db4 +0x07e:  mov    %eax,(%esp)
08434db7 +0x081:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08434dbc +0x086:  mov    %eax,-0x30(%ebp)
08434dbf +0x089:  mov    0x10(%ebp),%eax
08434dc2 +0x08c:  mov    %eax,0x8(%esp)
08434dc6 +0x090:  movl   $"seLect equipslot from inventory where charac_no=%u",0x4(%esp)
08434dce +0x098:  mov    -0x30(%ebp),%eax
08434dd1 +0x09b:  mov    %eax,(%esp)
08434dd4 +0x09e:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08434dd9 +0x0a3:  movl   $0x1,0x4(%esp)
08434de1 +0x0ab:  mov    -0x30(%ebp),%eax
08434de4 +0x0ae:  mov    %eax,(%esp)
08434de7 +0x0b1:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08434dec +0x0b6:  xor    $0x1,%eax
08434def +0x0b9:  test   %al,%al
08434df1 +0x0bb:  jne    08434e05 <+0xcf>
08434df3 +0x0bd:  mov    -0x30(%ebp),%eax
08434df6 +0x0c0:  mov    %eax,(%esp)
08434df9 +0x0c3:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08434dfe +0x0c8:  xor    $0x1,%eax
08434e01 +0x0cb:  test   %al,%al
08434e03 +0x0cd:  je     08434e0c <+0xd6>
08434e05 +0x0cf:  mov    $0x1,%eax
08434e0a +0x0d4:  jmp    08434e11 <+0xdb>
08434e0c +0x0d6:  mov    $0x0,%eax
08434e11 +0x0db:  test   %al,%al
08434e13 +0x0dd:  je     08434e62 <+0x12c>
08434e15 +0x0df:  movl   $0x5,0xc(%esp)
08434e1d +0x0e7:  movl   $0x7f09,0x8(%esp)
08434e25 +0x0ef:  movl   $&_ZZN25DB_LoadPowerWarStatueInfo13GetAvatarInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOjE19__PRETTY_FUNCTION__,0x4(%esp)
08434e2d +0x0f7:  lea    -0xb4(%ebp),%eax
08434e33 +0x0fd:  mov    %eax,(%esp)
08434e36 +0x100:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08434e3b +0x105:  mov    0x10(%ebp),%eax
08434e3e +0x108:  mov    %eax,0x8(%esp)
08434e42 +0x10c:  movl   $"DB_LoadPowerWarStatueInfo::GetAvatarInfo, exec() or fetch() ERROR charac_no=%u",0x4(%esp)
08434e4a +0x114:  lea    -0xb4(%ebp),%eax
08434e50 +0x11a:  mov    %eax,(%esp)
08434e53 +0x11d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08434e58 +0x122:  mov    $0x0,%ebx
08434e5d +0x127:  jmp    084354cd <+0x797>
08434e62 +0x12c:  movl   $0x73,-0x2c(%ebp)
08434e69 +0x133:  lea    -0x970(%ebp),%eax
08434e6f +0x139:  mov    %eax,%ebx
08434e71 +0x13b:  mov    $0x15,%esi
08434e76 +0x140:  jmp    08434e86 <+0x150>
08434e78 +0x142:  mov    %ebx,(%esp)
08434e7b +0x145:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08434e80 +0x14a:  add    $0x3d,%ebx
08434e83 +0x14d:  sub    $0x1,%esi
08434e86 +0x150:  cmp    $0xffffffff,%esi
08434e89 +0x153:  setne  %al
08434e8c +0x156:  test   %al,%al
08434e8e +0x158:  jne    08434e78 <+0x142>
08434e90 +0x15a:  movl   $0x564,0x8(%esp)
08434e98 +0x162:  movl   $0x0,0x4(%esp)
08434ea0 +0x16a:  lea    -0xed4(%ebp),%eax
08434ea6 +0x170:  mov    %eax,(%esp)
08434ea9 +0x173:  call   0807dcc0 <_init+0x5b8>
08434eae +0x178:  movl   $0x0,0x4(%esp)
08434eb6 +0x180:  mov    -0x30(%ebp),%eax
08434eb9 +0x183:  mov    %eax,(%esp)
08434ebc +0x186:  call   081253de <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x141>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x141
08434ec1 +0x18b:  mov    %eax,-0x34(%ebp)
08434ec4 +0x18e:  mov    -0xb8(%ebp),%eax
08434eca +0x194:  mov    %eax,0xc(%esp)
08434ece +0x198:  lea    -0x432(%ebp),%eax
08434ed4 +0x19e:  mov    %eax,0x8(%esp)
08434ed8 +0x1a2:  movl   $0x0,0x4(%esp)
08434ee0 +0x1aa:  mov    -0x30(%ebp),%eax
08434ee3 +0x1ad:  mov    %eax,(%esp)
08434ee6 +0x1b0:  call   0812531a <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x7d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x7d
08434eeb +0x1b5:  xor    $0x1,%eax
08434eee +0x1b8:  test   %al,%al
08434ef0 +0x1ba:  je     08434f3f <+0x209>
08434ef2 +0x1bc:  movl   $0x5,0xc(%esp)
08434efa +0x1c4:  movl   $0x7f15,0x8(%esp)
08434f02 +0x1cc:  movl   $&_ZZN25DB_LoadPowerWarStatueInfo13GetAvatarInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOjE19__PRETTY_FUNCTION__,0x4(%esp)
08434f0a +0x1d4:  lea    -0xa4(%ebp),%eax
08434f10 +0x1da:  mov    %eax,(%esp)
08434f13 +0x1dd:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08434f18 +0x1e2:  mov    0x10(%ebp),%eax
08434f1b +0x1e5:  mov    %eax,0x8(%esp)
08434f1f +0x1e9:  movl   $"DB_LoadPowerWarStatueInfo::GetAvatarInfo, get_binary(0) ERROR charac_no=%u",0x4(%esp)
08434f27 +0x1f1:  lea    -0xa4(%ebp),%eax
08434f2d +0x1f7:  mov    %eax,(%esp)
08434f30 +0x1fa:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08434f35 +0x1ff:  mov    $0x0,%ebx
08434f3a +0x204:  jmp    084354cd <+0x797>
08434f3f +0x209:  mov    -0xb8(%ebp),%eax
08434f45 +0x20f:  cmp    %eax,-0x34(%ebp)
08434f48 +0x212:  jbe    08434f76 <+0x240>
08434f4a +0x214:  movl   $0x4,(%esp)
08434f51 +0x21b:  call   08725800 <__cxa_allocate_exception>
08434f56 +0x220:  mov    %eax,%edx
08434f58 +0x222:  movl   $0x7f1c,(%edx)
08434f5e +0x228:  movl   $0x0,0x8(%esp)
08434f66 +0x230:  movl   $&_ZTIj,0x4(%esp)
08434f6e +0x238:  mov    %eax,(%esp)
08434f71 +0x23b:  call   08724c50 <__cxa_throw>
08434f76 +0x240:  lea    -0x970(%ebp),%eax
08434f7c +0x246:  lea    0x262(%eax),%edx
08434f82 +0x24c:  mov    -0x34(%ebp),%eax
08434f85 +0x24f:  mov    %eax,0xc(%esp)
08434f89 +0x253:  lea    -0x432(%ebp),%eax
08434f8f +0x259:  mov    %eax,0x8(%esp)
08434f93 +0x25d:  lea    -0xb8(%ebp),%eax
08434f99 +0x263:  mov    %eax,0x4(%esp)
08434f9d +0x267:  mov    %edx,(%esp)
08434fa0 +0x26a:  call   086b2102 <_Z14uncompress_zipPcRjPKcj>  ; uncompress_zip(char*, unsigned int&, char const*, unsigned int)
08434fa5 +0x26f:  xor    $0x1,%eax
08434fa8 +0x272:  test   %al,%al
08434faa +0x274:  je     08434fd8 <+0x2a2>
08434fac +0x276:  movl   $0x4,(%esp)
08434fb3 +0x27d:  call   08725800 <__cxa_allocate_exception>
08434fb8 +0x282:  mov    %eax,%edx
08434fba +0x284:  movl   $0x7f1e,(%edx)
08434fc0 +0x28a:  movl   $0x0,0x8(%esp)
08434fc8 +0x292:  movl   $&_ZTIj,0x4(%esp)
08434fd0 +0x29a:  mov    %eax,(%esp)
08434fd3 +0x29d:  call   08724c50 <__cxa_throw>
08434fd8 +0x2a2:  mov    -0xb8(%ebp),%ecx
08434fde +0x2a8:  mov    $0x4325c53f,%edx
08434fe3 +0x2ad:  mov    %ecx,%eax
08434fe5 +0x2af:  mul    %edx
08434fe7 +0x2b1:  mov    %edx,%eax
08434fe9 +0x2b3:  shr    $0x4,%eax
08434fec +0x2b6:  imul   $0x3d,%eax,%eax
08434fef +0x2b9:  mov    %ecx,%edx
08434ff1 +0x2bb:  sub    %eax,%edx
08434ff3 +0x2bd:  mov    %edx,%eax
08434ff5 +0x2bf:  test   %eax,%eax
08434ff7 +0x2c1:  je     084350df <+0x3a9>
08434ffd +0x2c7:  mov    -0xb8(%ebp),%eax
08435003 +0x2cd:  test   %eax,%eax
08435005 +0x2cf:  je     084350df <+0x3a9>
0843500b +0x2d5:  movl   $0x5,0xc(%esp)
08435013 +0x2dd:  movl   $0x7f23,0x8(%esp)
0843501b +0x2e5:  movl   $&_ZZN25DB_LoadPowerWarStatueInfo13GetAvatarInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOjE19__PRETTY_FUNCTION__,0x4(%esp)
08435023 +0x2ed:  lea    -0x94(%ebp),%eax
08435029 +0x2f3:  mov    %eax,(%esp)
0843502c +0x2f6:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08435031 +0x2fb:  mov    -0x34(%ebp),%eax
08435034 +0x2fe:  mov    %eax,0x10(%esp)
08435038 +0x302:  movl   $0x53e,0xc(%esp)
08435040 +0x30a:  mov    0x10(%ebp),%eax
08435043 +0x30d:  mov    %eax,0x8(%esp)
08435047 +0x311:  movl   $"incorrect equipment size charac_no(%d), equipment, original_size(%d), db_size(%d)\n",0x4(%esp)
0843504f +0x319:  lea    -0x94(%ebp),%eax
08435055 +0x31f:  mov    %eax,(%esp)
08435058 +0x322:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0843505d +0x327:  mov    $0x0,%ebx
08435062 +0x32c:  jmp    084354cd <+0x797>
08435067 +0x331:  cmp    $0x1,%edx
0843506a +0x334:  je     08435074 <+0x33e>
0843506c +0x336:  mov    %eax,(%esp)
0843506f +0x339:  call   08ae3750 <_Unwind_Resume>
08435074 +0x33e:  mov    %eax,(%esp)
08435077 +0x341:  call   08725ce0 <__cxa_begin_catch>
0843507c +0x346:  mov    (%eax),%eax
0843507e +0x348:  mov    %eax,-0x24(%ebp)
08435081 +0x34b:  mov    -0x24(%ebp),%eax
08435084 +0x34e:  mov    %eax,0x18(%esp)
08435088 +0x352:  mov    0x10(%ebp),%eax
0843508b +0x355:  mov    %eax,0x14(%esp)
0843508f +0x359:  movl   $"Uncompress failed. charac_no(%d)(%d)",0x10(%esp)
08435097 +0x361:  movl   $0x7f29,0xc(%esp)
0843509f +0x369:  movl   $&_ZZN25DB_LoadPowerWarStatueInfo13GetAvatarInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOjE19__PRETTY_FUNCTION__,0x8(%esp)
084350a7 +0x371:  movl   $"DBThread.cpp",0x4(%esp)
084350af +0x379:  movl   $0x1,(%esp)
084350b6 +0x380:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084350bb +0x385:  mov    $0x0,%ebx
084350c0 +0x38a:  call   08725c30 <__cxa_end_catch>
084350c5 +0x38f:  jmp    084354cd <+0x797>
084350ca +0x394:  mov    %edx,%ebx
084350cc +0x396:  mov    %eax,%esi
084350ce +0x398:  call   08725c30 <__cxa_end_catch>
084350d3 +0x39d:  mov    %esi,%eax
084350d5 +0x39f:  mov    %ebx,%edx
084350d7 +0x3a1:  mov    %eax,(%esp)
084350da +0x3a4:  call   08ae3750 <_Unwind_Resume>
084350df +0x3a9:  mov    -0x70c(%ebp),%edx
084350e5 +0x3af:  mov    0xc(%ebp),%eax
084350e8 +0x3b2:  mov    %edx,0x7c(%eax)
084350eb +0x3b5:  movl   $0x73,0xc(%esp)
084350f3 +0x3bd:  mov    0x10(%ebp),%eax
084350f6 +0x3c0:  mov    %eax,0x8(%esp)
084350fa +0x3c4:  movl   $"seLect slot,it_id,clear_avatar_id from user_items where charac_no=%u and expire_date>now() and stat=0 limit %d",0x4(%esp)
08435102 +0x3cc:  mov    -0x30(%ebp),%eax
08435105 +0x3cf:  mov    %eax,(%esp)
08435108 +0x3d2:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843510d +0x3d7:  movl   $0x1,0x4(%esp)
08435115 +0x3df:  mov    -0x30(%ebp),%eax
08435118 +0x3e2:  mov    %eax,(%esp)
0843511b +0x3e5:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08435120 +0x3ea:  xor    $0x1,%eax
08435123 +0x3ed:  test   %al,%al
08435125 +0x3ef:  je     08435174 <+0x43e>
08435127 +0x3f1:  movl   $0x5,0xc(%esp)
0843512f +0x3f9:  movl   $0x7f35,0x8(%esp)
08435137 +0x401:  movl   $&_ZZN25DB_LoadPowerWarStatueInfo13GetAvatarInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOjE19__PRETTY_FUNCTION__,0x4(%esp)
0843513f +0x409:  lea    -0x84(%ebp),%eax
08435145 +0x40f:  mov    %eax,(%esp)
08435148 +0x412:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0843514d +0x417:  mov    0x10(%ebp),%eax
08435150 +0x41a:  mov    %eax,0x8(%esp)
08435154 +0x41e:  movl   $"DB_LoadPowerWarStatueInfo::GetAvatarInfo, exec() ERROR charac_no=%u",0x4(%esp)
0843515c +0x426:  lea    -0x84(%ebp),%eax
08435162 +0x42c:  mov    %eax,(%esp)
08435165 +0x42f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0843516a +0x434:  mov    $0x0,%ebx
0843516f +0x439:  jmp    084354cd <+0x797>
08435174 +0x43e:  mov    -0x30(%ebp),%eax
08435177 +0x441:  mov    %eax,(%esp)
0843517a +0x444:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0843517f +0x449:  mov    %eax,-0x28(%ebp)
08435182 +0x44c:  movl   $0x0,-0x20(%ebp)
08435189 +0x453:  jmp    084353d3 <+0x69d>
0843518e +0x458:  mov    -0x30(%ebp),%eax
08435191 +0x45b:  mov    %eax,(%esp)
08435194 +0x45e:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08435199 +0x463:  xor    $0x1,%eax
0843519c +0x466:  test   %al,%al
0843519e +0x468:  je     084351e2 <+0x4ac>
084351a0 +0x46a:  movl   $0x5,0xc(%esp)
084351a8 +0x472:  movl   $0x7f3f,0x8(%esp)
084351b0 +0x47a:  movl   $&_ZZN25DB_LoadPowerWarStatueInfo13GetAvatarInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOjE19__PRETTY_FUNCTION__,0x4(%esp)
084351b8 +0x482:  lea    -0x74(%ebp),%eax
084351bb +0x485:  mov    %eax,(%esp)
084351be +0x488:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084351c3 +0x48d:  mov    0x10(%ebp),%eax
084351c6 +0x490:  mov    %eax,0x8(%esp)
084351ca +0x494:  movl   $"DB_LoadPowerWarStatueInfo::GetAvatarInfo, exec() ERROR charac_no=%u",0x4(%esp)
084351d2 +0x49c:  lea    -0x74(%ebp),%eax
084351d5 +0x49f:  mov    %eax,(%esp)
084351d8 +0x4a2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084351dd +0x4a7:  jmp    084353e4 <+0x6ae>
084351e2 +0x4ac:  mov    -0x20(%ebp),%edx
084351e5 +0x4af:  lea    -0xed4(%ebp),%ecx
084351eb +0x4b5:  mov    %edx,%eax
084351ed +0x4b7:  add    %eax,%eax
084351ef +0x4b9:  add    %edx,%eax
084351f1 +0x4bb:  shl    $0x2,%eax
084351f4 +0x4be:  lea    (%ecx,%eax,1),%eax
084351f7 +0x4c1:  mov    %eax,0x8(%esp)
084351fb +0x4c5:  movl   $0x0,0x4(%esp)
08435203 +0x4cd:  mov    -0x30(%ebp),%eax
08435206 +0x4d0:  mov    %eax,(%esp)
08435209 +0x4d3:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0843520e +0x4d8:  xor    $0x1,%eax
08435211 +0x4db:  test   %al,%al
08435213 +0x4dd:  je     0843525c <+0x526>
08435215 +0x4df:  movl   $0x5,0xc(%esp)
0843521d +0x4e7:  movl   $0x7f45,0x8(%esp)
08435225 +0x4ef:  movl   $&_ZZN25DB_LoadPowerWarStatueInfo13GetAvatarInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOjE19__PRETTY_FUNCTION__,0x4(%esp)
0843522d +0x4f7:  lea    -0x64(%ebp),%eax
08435230 +0x4fa:  mov    %eax,(%esp)
08435233 +0x4fd:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08435238 +0x502:  mov    0x10(%ebp),%eax
0843523b +0x505:  mov    %eax,0x8(%esp)
0843523f +0x509:  movl   $"DB_LoadPowerWarStatueInfo::GetAvatarInfo, get_int(0) ERROR charac_no=%u",0x4(%esp)
08435247 +0x511:  lea    -0x64(%ebp),%eax
0843524a +0x514:  mov    %eax,(%esp)
0843524d +0x517:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08435252 +0x51c:  mov    $0x0,%ebx
08435257 +0x521:  jmp    084354cd <+0x797>
0843525c +0x526:  mov    -0x20(%ebp),%edx
0843525f +0x529:  lea    -0xed4(%ebp),%ecx
08435265 +0x52f:  mov    %edx,%eax
08435267 +0x531:  add    %eax,%eax
08435269 +0x533:  add    %edx,%eax
0843526b +0x535:  shl    $0x2,%eax
0843526e +0x538:  lea    (%ecx,%eax,1),%eax
08435271 +0x53b:  add    $0x4,%eax
08435274 +0x53e:  mov    %eax,0x8(%esp)
08435278 +0x542:  movl   $0x1,0x4(%esp)
08435280 +0x54a:  mov    -0x30(%ebp),%eax
08435283 +0x54d:  mov    %eax,(%esp)
08435286 +0x550:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0843528b +0x555:  xor    $0x1,%eax
0843528e +0x558:  test   %al,%al
08435290 +0x55a:  je     084352d9 <+0x5a3>
08435292 +0x55c:  movl   $0x5,0xc(%esp)
0843529a +0x564:  movl   $0x7f4b,0x8(%esp)
084352a2 +0x56c:  movl   $&_ZZN25DB_LoadPowerWarStatueInfo13GetAvatarInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOjE19__PRETTY_FUNCTION__,0x4(%esp)
084352aa +0x574:  lea    -0x54(%ebp),%eax
084352ad +0x577:  mov    %eax,(%esp)
084352b0 +0x57a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084352b5 +0x57f:  mov    0x10(%ebp),%eax
084352b8 +0x582:  mov    %eax,0x8(%esp)
084352bc +0x586:  movl   $"DB_LoadPowerWarStatueInfo::GetAvatarInfo, get_int(1) ERROR charac_no=%u",0x4(%esp)
084352c4 +0x58e:  lea    -0x54(%ebp),%eax
084352c7 +0x591:  mov    %eax,(%esp)
084352ca +0x594:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084352cf +0x599:  mov    $0x0,%ebx
084352d4 +0x59e:  jmp    084354cd <+0x797>
084352d9 +0x5a3:  mov    -0x20(%ebp),%edx
084352dc +0x5a6:  lea    -0xed4(%ebp),%ecx
084352e2 +0x5ac:  mov    %edx,%eax
084352e4 +0x5ae:  add    %eax,%eax
084352e6 +0x5b0:  add    %edx,%eax
084352e8 +0x5b2:  shl    $0x2,%eax
084352eb +0x5b5:  lea    (%ecx,%eax,1),%eax
084352ee +0x5b8:  add    $0x8,%eax
084352f1 +0x5bb:  mov    %eax,0x8(%esp)
084352f5 +0x5bf:  movl   $0x2,0x4(%esp)
084352fd +0x5c7:  mov    -0x30(%ebp),%eax
08435300 +0x5ca:  mov    %eax,(%esp)
08435303 +0x5cd:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08435308 +0x5d2:  xor    $0x1,%eax
0843530b +0x5d5:  test   %al,%al
0843530d +0x5d7:  je     08435356 <+0x620>
0843530f +0x5d9:  movl   $0x5,0xc(%esp)
08435317 +0x5e1:  movl   $0x7f51,0x8(%esp)
0843531f +0x5e9:  movl   $&_ZZN25DB_LoadPowerWarStatueInfo13GetAvatarInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOjE19__PRETTY_FUNCTION__,0x4(%esp)
08435327 +0x5f1:  lea    -0x44(%ebp),%eax
0843532a +0x5f4:  mov    %eax,(%esp)
0843532d +0x5f7:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08435332 +0x5fc:  mov    0x10(%ebp),%eax
08435335 +0x5ff:  mov    %eax,0x8(%esp)
08435339 +0x603:  movl   $"DB_LoadPowerWarStatueInfo::GetAvatarInfo, get_int(2) ERROR charac_no=%u",0x4(%esp)
08435341 +0x60b:  lea    -0x44(%ebp),%eax
08435344 +0x60e:  mov    %eax,(%esp)
08435347 +0x611:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0843534c +0x616:  mov    $0x0,%ebx
08435351 +0x61b:  jmp    084354cd <+0x797>
08435356 +0x620:  mov    -0x20(%ebp),%edx
08435359 +0x623:  mov    %edx,%eax
0843535b +0x625:  add    %eax,%eax
0843535d +0x627:  add    %edx,%eax
0843535f +0x629:  shl    $0x2,%eax
08435362 +0x62c:  lea    -0x18(%ebp),%edi
08435365 +0x62f:  lea    (%edi,%eax,1),%eax
08435368 +0x632:  sub    $0xebc,%eax
0843536d +0x637:  mov    (%eax),%eax
0843536f +0x639:  test   %eax,%eax
08435371 +0x63b:  js     084353cf <+0x699>
08435373 +0x63d:  mov    -0x20(%ebp),%edx
08435376 +0x640:  mov    %edx,%eax
08435378 +0x642:  add    %eax,%eax
0843537a +0x644:  add    %edx,%eax
0843537c +0x646:  shl    $0x2,%eax
0843537f +0x649:  lea    -0x18(%ebp),%edx
08435382 +0x64c:  lea    (%edx,%eax,1),%eax
08435385 +0x64f:  sub    $0xebc,%eax
0843538a +0x654:  mov    (%eax),%eax
0843538c +0x656:  cmp    $0x9,%eax
0843538f +0x659:  jg     084353cf <+0x699>
08435391 +0x65b:  mov    -0x20(%ebp),%edx
08435394 +0x65e:  mov    %edx,%eax
08435396 +0x660:  add    %eax,%eax
08435398 +0x662:  add    %edx,%eax
0843539a +0x664:  shl    $0x2,%eax
0843539d +0x667:  lea    -0x18(%ebp),%edi
084353a0 +0x66a:  lea    (%edi,%eax,1),%eax
084353a3 +0x66d:  sub    $0xebc,%eax
084353a8 +0x672:  mov    (%eax),%ecx
084353aa +0x674:  mov    -0x20(%ebp),%edx
084353ad +0x677:  mov    %edx,%eax
084353af +0x679:  add    %eax,%eax
084353b1 +0x67b:  add    %edx,%eax
084353b3 +0x67d:  shl    $0x2,%eax
084353b6 +0x680:  lea    -0x18(%ebp),%edx
084353b9 +0x683:  lea    (%edx,%eax,1),%eax
084353bc +0x686:  sub    $0xeb8,%eax
084353c1 +0x68b:  mov    (%eax),%eax
084353c3 +0x68d:  mov    %eax,%edx
084353c5 +0x68f:  mov    0xc(%ebp),%eax
084353c8 +0x692:  add    $0x14,%ecx
084353cb +0x695:  mov    %edx,0x4(%eax,%ecx,4)
084353cf +0x699:  addl   $0x1,-0x20(%ebp)
084353d3 +0x69d:  mov    -0x20(%ebp),%eax
084353d6 +0x6a0:  cmp    -0x28(%ebp),%eax
084353d9 +0x6a3:  setl   %al
084353dc +0x6a6:  test   %al,%al
084353de +0x6a8:  jne    0843518e <+0x458>
084353e4 +0x6ae:  movl   $0x0,-0x1c(%ebp)
084353eb +0x6b5:  jmp    084354b7 <+0x781>
084353f0 +0x6ba:  mov    -0x1c(%ebp),%edx
084353f3 +0x6bd:  mov    %edx,%eax
084353f5 +0x6bf:  add    %eax,%eax
084353f7 +0x6c1:  add    %edx,%eax
084353f9 +0x6c3:  shl    $0x2,%eax
084353fc +0x6c6:  lea    -0x18(%ebp),%edi
084353ff +0x6c9:  lea    (%edi,%eax,1),%eax
08435402 +0x6cc:  sub    $0xeb4,%eax
08435407 +0x6d1:  mov    (%eax),%eax
08435409 +0x6d3:  test   %eax,%eax
0843540b +0x6d5:  je     084354b3 <+0x77d>
08435411 +0x6db:  mov    -0x1c(%ebp),%edx
08435414 +0x6de:  mov    %edx,%eax
08435416 +0x6e0:  add    %eax,%eax
08435418 +0x6e2:  add    %edx,%eax
0843541a +0x6e4:  shl    $0x2,%eax
0843541d +0x6e7:  lea    -0x18(%ebp),%edx
08435420 +0x6ea:  lea    (%edx,%eax,1),%eax
08435423 +0x6ed:  sub    $0xeb4,%eax
08435428 +0x6f2:  mov    (%eax),%eax
0843542a +0x6f4:  mov    %eax,0x8(%esp)
0843542e +0x6f8:  movl   $"seLect it_id from user_items where ui_id=%d",0x4(%esp)
08435436 +0x700:  mov    -0x30(%ebp),%eax
08435439 +0x703:  mov    %eax,(%esp)
0843543c +0x706:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08435441 +0x70b:  movl   $0x1,0x4(%esp)
08435449 +0x713:  mov    -0x30(%ebp),%eax
0843544c +0x716:  mov    %eax,(%esp)
0843544f +0x719:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08435454 +0x71e:  test   %al,%al
08435456 +0x720:  je     0843546e <+0x738>
08435458 +0x722:  mov    -0x30(%ebp),%eax
0843545b +0x725:  mov    %eax,(%esp)
0843545e +0x728:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08435463 +0x72d:  test   %al,%al
08435465 +0x72f:  je     0843546e <+0x738>
08435467 +0x731:  mov    $0x1,%eax
0843546c +0x736:  jmp    08435473 <+0x73d>
0843546e +0x738:  mov    $0x0,%eax
08435473 +0x73d:  test   %al,%al
08435475 +0x73f:  je     084354b3 <+0x77d>
08435477 +0x741:  mov    -0x1c(%ebp),%edx
0843547a +0x744:  mov    %edx,%eax
0843547c +0x746:  add    %eax,%eax
0843547e +0x748:  add    %edx,%eax
08435480 +0x74a:  shl    $0x2,%eax
08435483 +0x74d:  lea    -0x18(%ebp),%edi
08435486 +0x750:  lea    (%edi,%eax,1),%eax
08435489 +0x753:  sub    $0xebc,%eax
0843548e +0x758:  mov    (%eax),%eax
08435490 +0x75a:  add    $0x14,%eax
08435493 +0x75d:  shl    $0x2,%eax
08435496 +0x760:  add    0xc(%ebp),%eax
08435499 +0x763:  add    $0x4,%eax
0843549c +0x766:  mov    %eax,0x8(%esp)
084354a0 +0x76a:  movl   $0x0,0x4(%esp)
084354a8 +0x772:  mov    -0x30(%ebp),%eax
084354ab +0x775:  mov    %eax,(%esp)
084354ae +0x778:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
084354b3 +0x77d:  addl   $0x1,-0x1c(%ebp)
084354b7 +0x781:  mov    -0x1c(%ebp),%eax
084354ba +0x784:  cmp    -0x28(%ebp),%eax
084354bd +0x787:  setl   %al
084354c0 +0x78a:  test   %al,%al
084354c2 +0x78c:  jne    084353f0 <+0x6ba>
084354c8 +0x792:  mov    $0x1,%ebx
084354cd +0x797:  mov    %ebx,%eax
084354cf +0x799:  add    $0xeec,%esp
084354d5 +0x79f:  pop    %ebx
084354d6 +0x7a0:  pop    %esi
084354d7 +0x7a1:  pop    %edi
084354d8 +0x7a2:  pop    %ebp
084354d9 +0x7a3:  ret
```

## 反编译 C

```c
// DB_LoadPowerWarStatueInfo::GetAvatarInfo @ 0x8434d36

/* WARNING: Removing unreachable block (ram,0x08434d87) */
/* DB_LoadPowerWarStatueInfo::GetAvatarInfo(SIG_LOAD_POWER_WAR_STATUE_INFO*, unsigned int) */

undefined4 __thiscall
DB_LoadPowerWarStatueInfo::GetAvatarInfo
          (DB_LoadPowerWarStatueInfo *this,SIG_LOAD_POWER_WAR_STATUE_INFO *param_1,uint param_2)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  Inven_Item *this_00;
  int iVar6;
  bool bVar7;
  int local_ed8 [345];
  Inven_Item local_974 [610];
  char local_712 [2];
  undefined4 local_710;
  char local_436 [890];
  uint local_bc;
  cMyTrace local_b8 [16];
  cMyTrace local_a8 [16];
  cMyTrace local_98 [16];
  cMyTrace local_88 [16];
  cMyTrace local_78 [16];
  cMyTrace local_68 [16];
  cMyTrace local_58 [16];
  cMyTrace local_48 [16];
  uint local_38;
  MySQL *local_34;
  undefined4 local_30;
  int local_2c;
  int local_24;
  int local_20;
  
  pcVar3 = local_436;
  uVar4 = 0x37a;
  bVar7 = ((uint)pcVar3 & 2) != 0;
  if (bVar7) {
    local_436[0] = '\0';
    local_436[1] = '\0';
    pcVar3 = local_436 + 2;
    uVar4 = 0x378;
  }
  for (uVar4 = uVar4 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3 = pcVar3 + 4;
  }
  if (!bVar7) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
  }
  local_bc = 0x37a;
  local_38 = 0x37a;
  local_34 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  MySQL::set_query(local_34,"seLect equipslot from inventory where charac_no=%u",param_2);
  cVar1 = MySQL::exec(local_34,true);
  if ((cVar1 == '\x01') && (cVar1 = MySQL::fetch(local_34), cVar1 == '\x01')) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if (bVar7) {
    cMyTrace::cMyTrace(local_b8,
                       "bool DB_LoadPowerWarStatueInfo::GetAvatarInfo(SIG_LOAD_POWER_WAR_STATUE_INFO*, unsigned int)"
                       ,0x7f09,5);
    cMyTrace::operator()
              (local_b8,
               "DB_LoadPowerWarStatueInfo::GetAvatarInfo, exec() or fetch() ERROR charac_no=%u",
               param_2);
    uVar5 = 0;
  }
  else {
    local_30 = 0x73;
    this_00 = local_974;
    for (iVar6 = 0x15; iVar6 != -1; iVar6 = iVar6 + -1) {
      Inven_Item::Inven_Item(this_00);
      this_00 = this_00 + 0x3d;
    }
    memset(local_ed8,0,0x564);
    local_38 = MySQL::get_binary_length(local_34,0);
    cVar1 = MySQL::get_binary(local_34,0,local_436,local_bc);
    if (cVar1 == '\x01') {
      if (local_bc < local_38) {
        puVar2 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar2 = 0x7f1c;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08434f71 to 0843505c has its CatchHandler @ 08435067 */
        __cxa_throw(puVar2,&unsigned_int::typeinfo,0);
      }
      cVar1 = uncompress_zip(local_712,&local_bc,local_436,local_38);
      if (cVar1 != '\x01') {
        puVar2 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar2 = 0x7f1e;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar2,&unsigned_int::typeinfo,0);
      }
      if ((local_bc == (local_bc / 0x3d) * 0x3d) || (local_bc == 0)) {
        *(undefined4 *)(param_1 + 0x7c) = local_710;
        MySQL::set_query(local_34,
                         "seLect slot,it_id,clear_avatar_id from user_items where charac_no=%u and expire_date>now() and stat=0 limit %d"
                         ,param_2,0x73);
        cVar1 = MySQL::exec(local_34,true);
        if (cVar1 == '\x01') {
          local_2c = MySQL::get_n_rows(local_34);
          for (local_24 = 0; local_24 < local_2c; local_24 = local_24 + 1) {
            cVar1 = MySQL::fetch(local_34);
            if (cVar1 != '\x01') {
              cMyTrace::cMyTrace(local_78,
                                 "bool DB_LoadPowerWarStatueInfo::GetAvatarInfo(SIG_LOAD_POWER_WAR_STATUE_INFO*, unsigned int)"
                                 ,0x7f3f,5);
              cMyTrace::operator()
                        (local_78,
                         "DB_LoadPowerWarStatueInfo::GetAvatarInfo, exec() ERROR charac_no=%u",
                         param_2);
              break;
            }
            cVar1 = MySQL::get_int(local_34,0,local_ed8 + local_24 * 3);
            if (cVar1 != '\x01') {
              cMyTrace::cMyTrace(local_68,
                                 "bool DB_LoadPowerWarStatueInfo::GetAvatarInfo(SIG_LOAD_POWER_WAR_STATUE_INFO*, unsigned int)"
                                 ,0x7f45,5);
              cMyTrace::operator()
                        (local_68,
                         "DB_LoadPowerWarStatueInfo::GetAvatarInfo, get_int(0) ERROR charac_no=%u",
                         param_2);
              return 0;
            }
            cVar1 = MySQL::get_int(local_34,1,local_ed8 + local_24 * 3 + 1);
            if (cVar1 != '\x01') {
              cMyTrace::cMyTrace(local_58,
                                 "bool DB_LoadPowerWarStatueInfo::GetAvatarInfo(SIG_LOAD_POWER_WAR_STATUE_INFO*, unsigned int)"
                                 ,0x7f4b,5);
              cMyTrace::operator()
                        (local_58,
                         "DB_LoadPowerWarStatueInfo::GetAvatarInfo, get_int(1) ERROR charac_no=%u",
                         param_2);
              return 0;
            }
            cVar1 = MySQL::get_int(local_34,2,local_ed8 + local_24 * 3 + 2);
            if (cVar1 != '\x01') {
              cMyTrace::cMyTrace(local_48,
                                 "bool DB_LoadPowerWarStatueInfo::GetAvatarInfo(SIG_LOAD_POWER_WAR_STATUE_INFO*, unsigned int)"
                                 ,0x7f51,5);
              cMyTrace::operator()
                        (local_48,
                         "DB_LoadPowerWarStatueInfo::GetAvatarInfo, get_int(2) ERROR charac_no=%u",
                         param_2);
              return 0;
            }
            if ((-1 < local_ed8[local_24 * 3]) && (local_ed8[local_24 * 3] < 10)) {
              *(int *)(param_1 + (local_ed8[local_24 * 3] + 0x14) * 4 + 4) =
                   local_ed8[local_24 * 3 + 1];
            }
          }
          for (local_20 = 0; local_20 < local_2c; local_20 = local_20 + 1) {
            if (local_ed8[local_20 * 3 + 2] != 0) {
              MySQL::set_query(local_34,"seLect it_id from user_items where ui_id=%d",
                               local_ed8[local_20 * 3 + 2]);
              cVar1 = MySQL::exec(local_34,true);
              if ((cVar1 == '\0') || (cVar1 = MySQL::fetch(local_34), cVar1 == '\0')) {
                bVar7 = false;
              }
              else {
                bVar7 = true;
              }
              if (bVar7) {
                MySQL::get_int(local_34,0,
                               (int *)(param_1 + (local_ed8[local_20 * 3] + 0x14) * 4 + 4));
              }
            }
          }
          uVar5 = 1;
        }
        else {
          cMyTrace::cMyTrace(local_88,
                             "bool DB_LoadPowerWarStatueInfo::GetAvatarInfo(SIG_LOAD_POWER_WAR_STATUE_INFO*, unsigned int)"
                             ,0x7f35,5);
          cMyTrace::operator()
                    (local_88,"DB_LoadPowerWarStatueInfo::GetAvatarInfo, exec() ERROR charac_no=%u",
                     param_2);
          uVar5 = 0;
        }
      }
      else {
        cMyTrace::cMyTrace(local_98,
                           "bool DB_LoadPowerWarStatueInfo::GetAvatarInfo(SIG_LOAD_POWER_WAR_STATUE_INFO*, unsigned int)"
                           ,0x7f23,5);
        cMyTrace::operator()
                  (local_98,
                   "incorrect equipment size charac_no(%d), equipment, original_size(%d), db_size(%d)\n"
                   ,param_2,0x53e,local_38);
        uVar5 = 0;
      }
    }
    else {
      cMyTrace::cMyTrace(local_a8,
                         "bool DB_LoadPowerWarStatueInfo::GetAvatarInfo(SIG_LOAD_POWER_WAR_STATUE_INFO*, unsigned int)"
                         ,0x7f15,5);
      cMyTrace::operator()
                (local_a8,
                 "DB_LoadPowerWarStatueInfo::GetAvatarInfo, get_binary(0) ERROR charac_no=%u",
                 param_2);
      uVar5 = 0;
    }
  }
  return uVar5;
}
```
