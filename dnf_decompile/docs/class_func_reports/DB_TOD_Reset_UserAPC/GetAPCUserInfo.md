# GetAPCUserInfo

`_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo`

`DB_TOD_Reset_UserAPC::GetAPCUserInfo(_APCInfo&)`

| 类 | 地址 |
|---|---|
| `DB_TOD_Reset_UserAPC` | `0x08440548` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08440548  _ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo
#           DB_TOD_Reset_UserAPC::GetAPCUserInfo(_APCInfo&)
# range [0x08440548, 0x08440f3d]
08440548 +0x000:  push   %ebp
08440549 +0x001:  mov    %esp,%ebp
0844054b +0x003:  push   %edi
0844054c +0x004:  push   %esi
0844054d +0x005:  push   %ebx
0844054e +0x006:  sub    $0xefc,%esp
08440554 +0x00c:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08440559 +0x011:  movl   $0x0,0x8(%esp)
08440561 +0x019:  movl   $0x2,0x4(%esp)
08440569 +0x021:  mov    %eax,(%esp)
0844056c +0x024:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08440571 +0x029:  mov    %eax,-0x44(%ebp)
08440574 +0x02c:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08440579 +0x031:  movl   $0x0,0x8(%esp)
08440581 +0x039:  movl   $0x8,0x4(%esp)
08440589 +0x041:  mov    %eax,(%esp)
0844058c +0x044:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08440591 +0x049:  mov    %eax,-0x40(%ebp)
08440594 +0x04c:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08440599 +0x051:  movl   $0x0,0x8(%esp)
084405a1 +0x059:  movl   $0x3,0x4(%esp)
084405a9 +0x061:  mov    %eax,(%esp)
084405ac +0x064:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084405b1 +0x069:  mov    %eax,-0x3c(%ebp)
084405b4 +0x06c:  mov    0xc(%ebp),%eax
084405b7 +0x06f:  mov    (%eax),%eax
084405b9 +0x071:  mov    %eax,0x8(%esp)
084405bd +0x075:  movl   $"seLect charac_name,lev,job,grow_type,guild_id from charac_info where charac_no=%d",0x4(%esp)
084405c5 +0x07d:  mov    -0x44(%ebp),%eax
084405c8 +0x080:  mov    %eax,(%esp)
084405cb +0x083:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084405d0 +0x088:  movl   $0x1,0x4(%esp)
084405d8 +0x090:  mov    -0x44(%ebp),%eax
084405db +0x093:  mov    %eax,(%esp)
084405de +0x096:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084405e3 +0x09b:  movl   $0x1,0x4(%esp)
084405eb +0x0a3:  mov    -0x44(%ebp),%eax
084405ee +0x0a6:  mov    %eax,(%esp)
084405f1 +0x0a9:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084405f6 +0x0ae:  xor    $0x1,%eax
084405f9 +0x0b1:  test   %al,%al
084405fb +0x0b3:  jne    0844060f <+0xc7>
084405fd +0x0b5:  mov    -0x44(%ebp),%eax
08440600 +0x0b8:  mov    %eax,(%esp)
08440603 +0x0bb:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08440608 +0x0c0:  xor    $0x1,%eax
0844060b +0x0c3:  test   %al,%al
0844060d +0x0c5:  je     08440616 <+0xce>
0844060f +0x0c7:  mov    $0x1,%eax
08440614 +0x0cc:  jmp    0844061b <+0xd3>
08440616 +0x0ce:  mov    $0x0,%eax
0844061b +0x0d3:  test   %al,%al
0844061d +0x0d5:  je     08440629 <+0xe1>
0844061f +0x0d7:  mov    $0x0,%eax
08440624 +0x0dc:  jmp    08440f33 <+0x9eb>
08440629 +0x0e1:  mov    -0x44(%ebp),%eax
0844062c +0x0e4:  mov    %eax,(%esp)
0844062f +0x0e7:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08440634 +0x0ec:  cmp    $0x1,%eax
08440637 +0x0ef:  setne  %al
0844063a +0x0f2:  test   %al,%al
0844063c +0x0f4:  je     08440648 <+0x100>
0844063e +0x0f6:  mov    $0x0,%eax
08440643 +0x0fb:  jmp    08440f33 <+0x9eb>
08440648 +0x100:  movl   $0x0,-0x38(%ebp)
0844064f +0x107:  mov    0xc(%ebp),%eax
08440652 +0x10a:  lea    0x4(%eax),%edx
08440655 +0x10d:  mov    -0x38(%ebp),%eax
08440658 +0x110:  addl   $0x1,-0x38(%ebp)
0844065c +0x114:  movl   $0x1e,0xc(%esp)
08440664 +0x11c:  mov    %edx,0x8(%esp)
08440668 +0x120:  mov    %eax,0x4(%esp)
0844066c +0x124:  mov    -0x44(%ebp),%eax
0844066f +0x127:  mov    %eax,(%esp)
08440672 +0x12a:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
08440677 +0x12f:  xor    $0x1,%eax
0844067a +0x132:  test   %al,%al
0844067c +0x134:  je     08440688 <+0x140>
0844067e +0x136:  mov    $0x0,%eax
08440683 +0x13b:  jmp    08440f33 <+0x9eb>
08440688 +0x140:  mov    0xc(%ebp),%eax
0844068b +0x143:  lea    0x24(%eax),%edx
0844068e +0x146:  mov    -0x38(%ebp),%eax
08440691 +0x149:  addl   $0x1,-0x38(%ebp)
08440695 +0x14d:  mov    %edx,0x8(%esp)
08440699 +0x151:  mov    %eax,0x4(%esp)
0844069d +0x155:  mov    -0x44(%ebp),%eax
084406a0 +0x158:  mov    %eax,(%esp)
084406a3 +0x15b:  call   0844d73a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x350>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x350
084406a8 +0x160:  xor    $0x1,%eax
084406ab +0x163:  test   %al,%al
084406ad +0x165:  je     084406b9 <+0x171>
084406af +0x167:  mov    $0x0,%eax
084406b4 +0x16c:  jmp    08440f33 <+0x9eb>
084406b9 +0x171:  mov    0xc(%ebp),%eax
084406bc +0x174:  lea    0x28(%eax),%edx
084406bf +0x177:  mov    -0x38(%ebp),%eax
084406c2 +0x17a:  addl   $0x1,-0x38(%ebp)
084406c6 +0x17e:  mov    %edx,0x8(%esp)
084406ca +0x182:  mov    %eax,0x4(%esp)
084406ce +0x186:  mov    -0x44(%ebp),%eax
084406d1 +0x189:  mov    %eax,(%esp)
084406d4 +0x18c:  call   0844d73a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x350>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x350
084406d9 +0x191:  xor    $0x1,%eax
084406dc +0x194:  test   %al,%al
084406de +0x196:  je     084406ea <+0x1a2>
084406e0 +0x198:  mov    $0x0,%eax
084406e5 +0x19d:  jmp    08440f33 <+0x9eb>
084406ea +0x1a2:  mov    0xc(%ebp),%eax
084406ed +0x1a5:  lea    0x2c(%eax),%edx
084406f0 +0x1a8:  mov    -0x38(%ebp),%eax
084406f3 +0x1ab:  addl   $0x1,-0x38(%ebp)
084406f7 +0x1af:  mov    %edx,0x8(%esp)
084406fb +0x1b3:  mov    %eax,0x4(%esp)
084406ff +0x1b7:  mov    -0x44(%ebp),%eax
08440702 +0x1ba:  mov    %eax,(%esp)
08440705 +0x1bd:  call   0844d73a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x350>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x350
0844070a +0x1c2:  xor    $0x1,%eax
0844070d +0x1c5:  test   %al,%al
0844070f +0x1c7:  je     0844071b <+0x1d3>
08440711 +0x1c9:  mov    $0x0,%eax
08440716 +0x1ce:  jmp    08440f33 <+0x9eb>
0844071b +0x1d3:  mov    0xc(%ebp),%eax
0844071e +0x1d6:  add    $0xb8,%eax
08440723 +0x1db:  mov    %eax,%edx
08440725 +0x1dd:  mov    -0x38(%ebp),%eax
08440728 +0x1e0:  addl   $0x1,-0x38(%ebp)
0844072c +0x1e4:  mov    %edx,0x8(%esp)
08440730 +0x1e8:  mov    %eax,0x4(%esp)
08440734 +0x1ec:  mov    -0x44(%ebp),%eax
08440737 +0x1ef:  mov    %eax,(%esp)
0844073a +0x1f2:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0844073f +0x1f7:  xor    $0x1,%eax
08440742 +0x1fa:  test   %al,%al
08440744 +0x1fc:  je     08440750 <+0x208>
08440746 +0x1fe:  mov    $0x0,%eax
0844074b +0x203:  jmp    08440f33 <+0x9eb>
08440750 +0x208:  mov    0xc(%ebp),%eax
08440753 +0x20b:  mov    0xb8(%eax),%eax
08440759 +0x211:  test   %eax,%eax
0844075b +0x213:  je     084408b0 <+0x368>
08440761 +0x219:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08440766 +0x21e:  mov    0x378(%eax),%eax
0844076c +0x224:  mov    %eax,-0x24(%ebp)
0844076f +0x227:  mov    0xc(%ebp),%eax
08440772 +0x22a:  mov    0xb8(%eax),%eax
08440778 +0x230:  mov    %eax,0x8(%esp)
0844077c +0x234:  movl   $"seLect guild_name from guild_info where guild_id=%d",0x4(%esp)
08440784 +0x23c:  mov    -0x40(%ebp),%eax
08440787 +0x23f:  mov    %eax,(%esp)
0844078a +0x242:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0844078f +0x247:  movl   $0x1,0x4(%esp)
08440797 +0x24f:  mov    -0x40(%ebp),%eax
0844079a +0x252:  mov    %eax,(%esp)
0844079d +0x255:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084407a2 +0x25a:  xor    $0x1,%eax
084407a5 +0x25d:  test   %al,%al
084407a7 +0x25f:  jne    084407bb <+0x273>
084407a9 +0x261:  mov    -0x40(%ebp),%eax
084407ac +0x264:  mov    %eax,(%esp)
084407af +0x267:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
084407b4 +0x26c:  xor    $0x1,%eax
084407b7 +0x26f:  test   %al,%al
084407b9 +0x271:  je     084407c2 <+0x27a>
084407bb +0x273:  mov    $0x1,%eax
084407c0 +0x278:  jmp    084407c7 <+0x27f>
084407c2 +0x27a:  mov    $0x0,%eax
084407c7 +0x27f:  test   %al,%al
084407c9 +0x281:  je     08440820 <+0x2d8>
084407cb +0x283:  mov    0xc(%ebp),%eax
084407ce +0x286:  mov    0xb8(%eax),%ebx
084407d4 +0x28c:  movl   $0x5,0xc(%esp)
084407dc +0x294:  movl   $0x9f46,0x8(%esp)
084407e4 +0x29c:  movl   $&_ZZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfoE19__PRETTY_FUNCTION__,0x4(%esp)
084407ec +0x2a4:  lea    -0xd4(%ebp),%eax
084407f2 +0x2aa:  mov    %eax,(%esp)
084407f5 +0x2ad:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084407fa +0x2b2:  mov    -0x24(%ebp),%eax
084407fd +0x2b5:  mov    %eax,0xc(%esp)
08440801 +0x2b9:  mov    %ebx,0x8(%esp)
08440805 +0x2bd:  movl   $"TOD:select guild db fail, guild_id:%d, server_id:%d",0x4(%esp)
0844080d +0x2c5:  lea    -0xd4(%ebp),%eax
08440813 +0x2cb:  mov    %eax,(%esp)
08440816 +0x2ce:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0844081b +0x2d3:  jmp    084408b0 <+0x368>
08440820 +0x2d8:  mov    -0x40(%ebp),%eax
08440823 +0x2db:  mov    %eax,(%esp)
08440826 +0x2de:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0844082b +0x2e3:  test   %eax,%eax
0844082d +0x2e5:  setne  %al
08440830 +0x2e8:  test   %al,%al
08440832 +0x2ea:  je     084408b0 <+0x368>
08440834 +0x2ec:  mov    0xc(%ebp),%eax
08440837 +0x2ef:  add    $0x30,%eax
0844083a +0x2f2:  movl   $0x16,0xc(%esp)
08440842 +0x2fa:  mov    %eax,0x8(%esp)
08440846 +0x2fe:  movl   $0x0,0x4(%esp)
0844084e +0x306:  mov    -0x40(%ebp),%eax
08440851 +0x309:  mov    %eax,(%esp)
08440854 +0x30c:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
08440859 +0x311:  xor    $0x1,%eax
0844085c +0x314:  test   %al,%al
0844085e +0x316:  je     084408b0 <+0x368>
08440860 +0x318:  mov    0xc(%ebp),%eax
08440863 +0x31b:  mov    0xb8(%eax),%ebx
08440869 +0x321:  movl   $0x5,0xc(%esp)
08440871 +0x329:  movl   $0x9f4e,0x8(%esp)
08440879 +0x331:  movl   $&_ZZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfoE19__PRETTY_FUNCTION__,0x4(%esp)
08440881 +0x339:  lea    -0xc4(%ebp),%eax
08440887 +0x33f:  mov    %eax,(%esp)
0844088a +0x342:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0844088f +0x347:  mov    -0x24(%ebp),%eax
08440892 +0x34a:  mov    %eax,0xc(%esp)
08440896 +0x34e:  mov    %ebx,0x8(%esp)
0844089a +0x352:  movl   $"TOD:select guild db fail, guild_id:%d, server_id:%d",0x4(%esp)
084408a2 +0x35a:  lea    -0xc4(%ebp),%eax
084408a8 +0x360:  mov    %eax,(%esp)
084408ab +0x363:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084408b0 +0x368:  movl   $0x73,-0x34(%ebp)
084408b7 +0x36f:  movl   $0x564,0x8(%esp)
084408bf +0x377:  movl   $0x0,0x4(%esp)
084408c7 +0x37f:  lea    -0xef4(%ebp),%eax
084408cd +0x385:  mov    %eax,(%esp)
084408d0 +0x388:  call   0807dcc0 <_init+0x5b8>
084408d5 +0x38d:  mov    0xc(%ebp),%eax
084408d8 +0x390:  mov    (%eax),%eax
084408da +0x392:  movl   $0x73,0xc(%esp)
084408e2 +0x39a:  mov    %eax,0x8(%esp)
084408e6 +0x39e:  movl   $"seLect slot,it_id,clear_avatar_id from user_items where charac_no=%u and expire_date>now() and stat=0 limit %d",0x4(%esp)
084408ee +0x3a6:  mov    -0x3c(%ebp),%eax
084408f1 +0x3a9:  mov    %eax,(%esp)
084408f4 +0x3ac:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084408f9 +0x3b1:  movl   $0x1,0x4(%esp)
08440901 +0x3b9:  mov    -0x3c(%ebp),%eax
08440904 +0x3bc:  mov    %eax,(%esp)
08440907 +0x3bf:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0844090c +0x3c4:  xor    $0x1,%eax
0844090f +0x3c7:  test   %al,%al
08440911 +0x3c9:  je     08440962 <+0x41a>
08440913 +0x3cb:  mov    0xc(%ebp),%eax
08440916 +0x3ce:  mov    (%eax),%ebx
08440918 +0x3d0:  movl   $0x5,0xc(%esp)
08440920 +0x3d8:  movl   $0x9f5d,0x8(%esp)
08440928 +0x3e0:  movl   $&_ZZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfoE19__PRETTY_FUNCTION__,0x4(%esp)
08440930 +0x3e8:  lea    -0xb4(%ebp),%eax
08440936 +0x3ee:  mov    %eax,(%esp)
08440939 +0x3f1:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0844093e +0x3f6:  mov    %ebx,0x8(%esp)
08440942 +0x3fa:  movl   $"DB_LoadPowerWarStatueInfo::GetAvatarInfo, exec() ERROR charac_no=%u",0x4(%esp)
0844094a +0x402:  lea    -0xb4(%ebp),%eax
08440950 +0x408:  mov    %eax,(%esp)
08440953 +0x40b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08440958 +0x410:  mov    $0x0,%eax
0844095d +0x415:  jmp    08440f33 <+0x9eb>
08440962 +0x41a:  mov    -0x3c(%ebp),%eax
08440965 +0x41d:  mov    %eax,(%esp)
08440968 +0x420:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0844096d +0x425:  mov    %eax,-0x30(%ebp)
08440970 +0x428:  movl   $0x0,-0x20(%ebp)
08440977 +0x42f:  jmp    08440bdb <+0x693>
0844097c +0x434:  mov    -0x3c(%ebp),%eax
0844097f +0x437:  mov    %eax,(%esp)
08440982 +0x43a:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08440987 +0x43f:  xor    $0x1,%eax
0844098a +0x442:  test   %al,%al
0844098c +0x444:  je     084409d8 <+0x490>
0844098e +0x446:  mov    0xc(%ebp),%eax
08440991 +0x449:  mov    (%eax),%ebx
08440993 +0x44b:  movl   $0x5,0xc(%esp)
0844099b +0x453:  movl   $0x9f67,0x8(%esp)
084409a3 +0x45b:  movl   $&_ZZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfoE19__PRETTY_FUNCTION__,0x4(%esp)
084409ab +0x463:  lea    -0xa4(%ebp),%eax
084409b1 +0x469:  mov    %eax,(%esp)
084409b4 +0x46c:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084409b9 +0x471:  mov    %ebx,0x8(%esp)
084409bd +0x475:  movl   $"DB_LoadPowerWarStatueInfo::GetAvatarInfo, exec() ERROR charac_no=%u",0x4(%esp)
084409c5 +0x47d:  lea    -0xa4(%ebp),%eax
084409cb +0x483:  mov    %eax,(%esp)
084409ce +0x486:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084409d3 +0x48b:  jmp    08440bec <+0x6a4>
084409d8 +0x490:  mov    -0x20(%ebp),%edx
084409db +0x493:  lea    -0xef4(%ebp),%ecx
084409e1 +0x499:  mov    %edx,%eax
084409e3 +0x49b:  add    %eax,%eax
084409e5 +0x49d:  add    %edx,%eax
084409e7 +0x49f:  shl    $0x2,%eax
084409ea +0x4a2:  lea    (%ecx,%eax,1),%eax
084409ed +0x4a5:  mov    %eax,0x8(%esp)
084409f1 +0x4a9:  movl   $0x0,0x4(%esp)
084409f9 +0x4b1:  mov    -0x3c(%ebp),%eax
084409fc +0x4b4:  mov    %eax,(%esp)
084409ff +0x4b7:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08440a04 +0x4bc:  xor    $0x1,%eax
08440a07 +0x4bf:  test   %al,%al
08440a09 +0x4c1:  je     08440a5a <+0x512>
08440a0b +0x4c3:  mov    0xc(%ebp),%eax
08440a0e +0x4c6:  mov    (%eax),%ebx
08440a10 +0x4c8:  movl   $0x5,0xc(%esp)
08440a18 +0x4d0:  movl   $0x9f6d,0x8(%esp)
08440a20 +0x4d8:  movl   $&_ZZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfoE19__PRETTY_FUNCTION__,0x4(%esp)
08440a28 +0x4e0:  lea    -0x94(%ebp),%eax
08440a2e +0x4e6:  mov    %eax,(%esp)
08440a31 +0x4e9:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08440a36 +0x4ee:  mov    %ebx,0x8(%esp)
08440a3a +0x4f2:  movl   $"DB_LoadPowerWarStatueInfo::GetAvatarInfo, get_int(0) ERROR charac_no=%u",0x4(%esp)
08440a42 +0x4fa:  lea    -0x94(%ebp),%eax
08440a48 +0x500:  mov    %eax,(%esp)
08440a4b +0x503:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08440a50 +0x508:  mov    $0x0,%eax
08440a55 +0x50d:  jmp    08440f33 <+0x9eb>
08440a5a +0x512:  mov    -0x20(%ebp),%edx
08440a5d +0x515:  lea    -0xef4(%ebp),%ecx
08440a63 +0x51b:  mov    %edx,%eax
08440a65 +0x51d:  add    %eax,%eax
08440a67 +0x51f:  add    %edx,%eax
08440a69 +0x521:  shl    $0x2,%eax
08440a6c +0x524:  lea    (%ecx,%eax,1),%eax
08440a6f +0x527:  add    $0x4,%eax
08440a72 +0x52a:  mov    %eax,0x8(%esp)
08440a76 +0x52e:  movl   $0x1,0x4(%esp)
08440a7e +0x536:  mov    -0x3c(%ebp),%eax
08440a81 +0x539:  mov    %eax,(%esp)
08440a84 +0x53c:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08440a89 +0x541:  xor    $0x1,%eax
08440a8c +0x544:  test   %al,%al
08440a8e +0x546:  je     08440adf <+0x597>
08440a90 +0x548:  mov    0xc(%ebp),%eax
08440a93 +0x54b:  mov    (%eax),%ebx
08440a95 +0x54d:  movl   $0x5,0xc(%esp)
08440a9d +0x555:  movl   $0x9f73,0x8(%esp)
08440aa5 +0x55d:  movl   $&_ZZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfoE19__PRETTY_FUNCTION__,0x4(%esp)
08440aad +0x565:  lea    -0x84(%ebp),%eax
08440ab3 +0x56b:  mov    %eax,(%esp)
08440ab6 +0x56e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08440abb +0x573:  mov    %ebx,0x8(%esp)
08440abf +0x577:  movl   $"DB_LoadPowerWarStatueInfo::GetAvatarInfo, get_int(1) ERROR charac_no=%u",0x4(%esp)
08440ac7 +0x57f:  lea    -0x84(%ebp),%eax
08440acd +0x585:  mov    %eax,(%esp)
08440ad0 +0x588:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08440ad5 +0x58d:  mov    $0x0,%eax
08440ada +0x592:  jmp    08440f33 <+0x9eb>
08440adf +0x597:  mov    -0x20(%ebp),%edx
08440ae2 +0x59a:  lea    -0xef4(%ebp),%ecx
08440ae8 +0x5a0:  mov    %edx,%eax
08440aea +0x5a2:  add    %eax,%eax
08440aec +0x5a4:  add    %edx,%eax
08440aee +0x5a6:  shl    $0x2,%eax
08440af1 +0x5a9:  lea    (%ecx,%eax,1),%eax
08440af4 +0x5ac:  add    $0x8,%eax
08440af7 +0x5af:  mov    %eax,0x8(%esp)
08440afb +0x5b3:  movl   $0x2,0x4(%esp)
08440b03 +0x5bb:  mov    -0x3c(%ebp),%eax
08440b06 +0x5be:  mov    %eax,(%esp)
08440b09 +0x5c1:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08440b0e +0x5c6:  xor    $0x1,%eax
08440b11 +0x5c9:  test   %al,%al
08440b13 +0x5cb:  je     08440b5e <+0x616>
08440b15 +0x5cd:  mov    0xc(%ebp),%eax
08440b18 +0x5d0:  mov    (%eax),%ebx
08440b1a +0x5d2:  movl   $0x5,0xc(%esp)
08440b22 +0x5da:  movl   $0x9f79,0x8(%esp)
08440b2a +0x5e2:  movl   $&_ZZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfoE19__PRETTY_FUNCTION__,0x4(%esp)
08440b32 +0x5ea:  lea    -0x74(%ebp),%eax
08440b35 +0x5ed:  mov    %eax,(%esp)
08440b38 +0x5f0:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08440b3d +0x5f5:  mov    %ebx,0x8(%esp)
08440b41 +0x5f9:  movl   $"DB_LoadPowerWarStatueInfo::GetAvatarInfo, get_int(2) ERROR charac_no=%u",0x4(%esp)
08440b49 +0x601:  lea    -0x74(%ebp),%eax
08440b4c +0x604:  mov    %eax,(%esp)
08440b4f +0x607:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08440b54 +0x60c:  mov    $0x0,%eax
08440b59 +0x611:  jmp    08440f33 <+0x9eb>
08440b5e +0x616:  mov    -0x20(%ebp),%edx
08440b61 +0x619:  mov    %edx,%eax
08440b63 +0x61b:  add    %eax,%eax
08440b65 +0x61d:  add    %edx,%eax
08440b67 +0x61f:  shl    $0x2,%eax
08440b6a +0x622:  lea    -0x18(%ebp),%edx
08440b6d +0x625:  lea    (%edx,%eax,1),%eax
08440b70 +0x628:  sub    $0xedc,%eax
08440b75 +0x62d:  mov    (%eax),%eax
08440b77 +0x62f:  test   %eax,%eax
08440b79 +0x631:  js     08440bd7 <+0x68f>
08440b7b +0x633:  mov    -0x20(%ebp),%edx
08440b7e +0x636:  mov    %edx,%eax
08440b80 +0x638:  add    %eax,%eax
08440b82 +0x63a:  add    %edx,%eax
08440b84 +0x63c:  shl    $0x2,%eax
08440b87 +0x63f:  lea    -0x18(%ebp),%edi
08440b8a +0x642:  lea    (%edi,%eax,1),%eax
08440b8d +0x645:  sub    $0xedc,%eax
08440b92 +0x64a:  mov    (%eax),%eax
08440b94 +0x64c:  cmp    $0x9,%eax
08440b97 +0x64f:  jg     08440bd7 <+0x68f>
08440b99 +0x651:  mov    -0x20(%ebp),%edx
08440b9c +0x654:  mov    %edx,%eax
08440b9e +0x656:  add    %eax,%eax
08440ba0 +0x658:  add    %edx,%eax
08440ba2 +0x65a:  shl    $0x2,%eax
08440ba5 +0x65d:  lea    -0x18(%ebp),%edx
08440ba8 +0x660:  lea    (%edx,%eax,1),%eax
08440bab +0x663:  sub    $0xedc,%eax
08440bb0 +0x668:  mov    (%eax),%ecx
08440bb2 +0x66a:  mov    -0x20(%ebp),%edx
08440bb5 +0x66d:  mov    %edx,%eax
08440bb7 +0x66f:  add    %eax,%eax
08440bb9 +0x671:  add    %edx,%eax
08440bbb +0x673:  shl    $0x2,%eax
08440bbe +0x676:  lea    -0x18(%ebp),%edi
08440bc1 +0x679:  lea    (%edi,%eax,1),%eax
08440bc4 +0x67c:  sub    $0xed8,%eax
08440bc9 +0x681:  mov    (%eax),%eax
08440bcb +0x683:  mov    %eax,%edx
08440bcd +0x685:  mov    0xc(%ebp),%eax
08440bd0 +0x688:  add    $0x10,%ecx
08440bd3 +0x68b:  mov    %edx,0xc(%eax,%ecx,4)
08440bd7 +0x68f:  addl   $0x1,-0x20(%ebp)
08440bdb +0x693:  mov    -0x20(%ebp),%eax
08440bde +0x696:  cmp    -0x30(%ebp),%eax
08440be1 +0x699:  setl   %al
08440be4 +0x69c:  test   %al,%al
08440be6 +0x69e:  jne    0844097c <+0x434>
08440bec +0x6a4:  movl   $0x0,-0x1c(%ebp)
08440bf3 +0x6ab:  jmp    08440cbf <+0x777>
08440bf8 +0x6b0:  mov    -0x1c(%ebp),%edx
08440bfb +0x6b3:  mov    %edx,%eax
08440bfd +0x6b5:  add    %eax,%eax
08440bff +0x6b7:  add    %edx,%eax
08440c01 +0x6b9:  shl    $0x2,%eax
08440c04 +0x6bc:  lea    -0x18(%ebp),%edx
08440c07 +0x6bf:  lea    (%edx,%eax,1),%eax
08440c0a +0x6c2:  sub    $0xed4,%eax
08440c0f +0x6c7:  mov    (%eax),%eax
08440c11 +0x6c9:  test   %eax,%eax
08440c13 +0x6cb:  je     08440cbb <+0x773>
08440c19 +0x6d1:  mov    -0x1c(%ebp),%edx
08440c1c +0x6d4:  mov    %edx,%eax
08440c1e +0x6d6:  add    %eax,%eax
08440c20 +0x6d8:  add    %edx,%eax
08440c22 +0x6da:  shl    $0x2,%eax
08440c25 +0x6dd:  lea    -0x18(%ebp),%edi
08440c28 +0x6e0:  lea    (%edi,%eax,1),%eax
08440c2b +0x6e3:  sub    $0xed4,%eax
08440c30 +0x6e8:  mov    (%eax),%eax
08440c32 +0x6ea:  mov    %eax,0x8(%esp)
08440c36 +0x6ee:  movl   $"seLect it_id from user_items where ui_id=%d",0x4(%esp)
08440c3e +0x6f6:  mov    -0x3c(%ebp),%eax
08440c41 +0x6f9:  mov    %eax,(%esp)
08440c44 +0x6fc:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08440c49 +0x701:  movl   $0x1,0x4(%esp)
08440c51 +0x709:  mov    -0x3c(%ebp),%eax
08440c54 +0x70c:  mov    %eax,(%esp)
08440c57 +0x70f:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08440c5c +0x714:  test   %al,%al
08440c5e +0x716:  je     08440c76 <+0x72e>
08440c60 +0x718:  mov    -0x3c(%ebp),%eax
08440c63 +0x71b:  mov    %eax,(%esp)
08440c66 +0x71e:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08440c6b +0x723:  test   %al,%al
08440c6d +0x725:  je     08440c76 <+0x72e>
08440c6f +0x727:  mov    $0x1,%eax
08440c74 +0x72c:  jmp    08440c7b <+0x733>
08440c76 +0x72e:  mov    $0x0,%eax
08440c7b +0x733:  test   %al,%al
08440c7d +0x735:  je     08440cbb <+0x773>
08440c7f +0x737:  mov    -0x1c(%ebp),%edx
08440c82 +0x73a:  mov    %edx,%eax
08440c84 +0x73c:  add    %eax,%eax
08440c86 +0x73e:  add    %edx,%eax
08440c88 +0x740:  shl    $0x2,%eax
08440c8b +0x743:  lea    -0x18(%ebp),%edx
08440c8e +0x746:  lea    (%edx,%eax,1),%eax
08440c91 +0x749:  sub    $0xedc,%eax
08440c96 +0x74e:  mov    (%eax),%eax
08440c98 +0x750:  add    $0x10,%eax
08440c9b +0x753:  shl    $0x2,%eax
08440c9e +0x756:  add    0xc(%ebp),%eax
08440ca1 +0x759:  add    $0xc,%eax
08440ca4 +0x75c:  mov    %eax,0x8(%esp)
08440ca8 +0x760:  movl   $0x0,0x4(%esp)
08440cb0 +0x768:  mov    -0x3c(%ebp),%eax
08440cb3 +0x76b:  mov    %eax,(%esp)
08440cb6 +0x76e:  call   080e22ae <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x54>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x54
08440cbb +0x773:  addl   $0x1,-0x1c(%ebp)
08440cbf +0x777:  mov    -0x1c(%ebp),%eax
08440cc2 +0x77a:  cmp    -0x30(%ebp),%eax
08440cc5 +0x77d:  setl   %al
08440cc8 +0x780:  test   %al,%al
08440cca +0x782:  jne    08440bf8 <+0x6b0>
08440cd0 +0x788:  lea    -0x452(%ebp),%edx
08440cd6 +0x78e:  mov    $0x37a,%ebx
08440cdb +0x793:  mov    $0x0,%eax
08440ce0 +0x798:  mov    %edx,%ecx
08440ce2 +0x79a:  and    $0x2,%ecx
08440ce5 +0x79d:  test   %ecx,%ecx
08440ce7 +0x79f:  je     08440cf2 <+0x7aa>
08440ce9 +0x7a1:  mov    %ax,(%edx)
08440cec +0x7a4:  add    $0x2,%edx
08440cef +0x7a7:  sub    $0x2,%ebx
08440cf2 +0x7aa:  mov    %ebx,%ecx
08440cf4 +0x7ac:  shr    $0x2,%ecx
08440cf7 +0x7af:  mov    %edx,%edi
08440cf9 +0x7b1:  rep stos %eax,%es:(%edi)
08440cfb +0x7b3:  mov    %edi,%edx
08440cfd +0x7b5:  mov    %ebx,%ecx
08440cff +0x7b7:  and    $0x2,%ecx
08440d02 +0x7ba:  test   %ecx,%ecx
08440d04 +0x7bc:  je     08440d0c <+0x7c4>
08440d06 +0x7be:  mov    %ax,(%edx)
08440d09 +0x7c1:  add    $0x2,%edx
08440d0c +0x7c4:  mov    %ebx,%ecx
08440d0e +0x7c6:  and    $0x1,%ecx
08440d11 +0x7c9:  test   %ecx,%ecx
08440d13 +0x7cb:  je     08440d1a <+0x7d2>
08440d15 +0x7cd:  mov    %al,(%edx)
08440d17 +0x7cf:  add    $0x1,%edx
08440d1a +0x7d2:  movl   $0x37a,-0xd8(%ebp)
08440d24 +0x7dc:  mov    -0xd8(%ebp),%eax
08440d2a +0x7e2:  mov    %eax,-0x2c(%ebp)
08440d2d +0x7e5:  mov    0xc(%ebp),%eax
08440d30 +0x7e8:  mov    (%eax),%eax
08440d32 +0x7ea:  mov    %eax,0x8(%esp)
08440d36 +0x7ee:  movl   $"seLect equipslot from inventory where charac_no=%u",0x4(%esp)
08440d3e +0x7f6:  mov    -0x3c(%ebp),%eax
08440d41 +0x7f9:  mov    %eax,(%esp)
08440d44 +0x7fc:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08440d49 +0x801:  movl   $0x1,0x4(%esp)
08440d51 +0x809:  mov    -0x3c(%ebp),%eax
08440d54 +0x80c:  mov    %eax,(%esp)
08440d57 +0x80f:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08440d5c +0x814:  mov    -0x3c(%ebp),%eax
08440d5f +0x817:  mov    %eax,(%esp)
08440d62 +0x81a:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08440d67 +0x81f:  movl   $0x0,0x4(%esp)
08440d6f +0x827:  mov    -0x3c(%ebp),%eax
08440d72 +0x82a:  mov    %eax,(%esp)
08440d75 +0x82d:  call   081253de <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x141>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x141
08440d7a +0x832:  mov    %eax,-0x2c(%ebp)
08440d7d +0x835:  mov    -0xd8(%ebp),%eax
08440d83 +0x83b:  mov    %eax,0xc(%esp)
08440d87 +0x83f:  lea    -0x452(%ebp),%eax
08440d8d +0x845:  mov    %eax,0x8(%esp)
08440d91 +0x849:  movl   $0x0,0x4(%esp)
08440d99 +0x851:  mov    -0x3c(%ebp),%eax
08440d9c +0x854:  mov    %eax,(%esp)
08440d9f +0x857:  call   0812531a <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x7d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x7d
08440da4 +0x85c:  mov    %al,-0x25(%ebp)
08440da7 +0x85f:  movzbl -0x25(%ebp),%eax
08440dab +0x863:  xor    $0x1,%eax
08440dae +0x866:  test   %al,%al
08440db0 +0x868:  je     08440dfb <+0x8b3>
08440db2 +0x86a:  mov    0xc(%ebp),%eax
08440db5 +0x86d:  mov    (%eax),%ebx
08440db7 +0x86f:  movl   $0x5,0xc(%esp)
08440dbf +0x877:  movl   $0x9f9d,0x8(%esp)
08440dc7 +0x87f:  movl   $&_ZZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfoE19__PRETTY_FUNCTION__,0x4(%esp)
08440dcf +0x887:  lea    -0x64(%ebp),%eax
08440dd2 +0x88a:  mov    %eax,(%esp)
08440dd5 +0x88d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08440dda +0x892:  mov    %ebx,0x8(%esp)
08440dde +0x896:  movl   $"DB_LoadInventory::GetUserInven, get_binary(3) ERROR charac_no=%u",0x4(%esp)
08440de6 +0x89e:  lea    -0x64(%ebp),%eax
08440de9 +0x8a1:  mov    %eax,(%esp)
08440dec +0x8a4:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08440df1 +0x8a9:  mov    $0x0,%eax
08440df6 +0x8ae:  jmp    08440f33 <+0x9eb>
08440dfb +0x8b3:  lea    -0x990(%ebp),%eax
08440e01 +0x8b9:  mov    %eax,%ebx
08440e03 +0x8bb:  mov    $0x15,%esi
08440e08 +0x8c0:  jmp    08440e18 <+0x8d0>
08440e0a +0x8c2:  mov    %ebx,(%esp)
08440e0d +0x8c5:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08440e12 +0x8ca:  add    $0x3d,%ebx
08440e15 +0x8cd:  sub    $0x1,%esi
08440e18 +0x8d0:  cmp    $0xffffffff,%esi
08440e1b +0x8d3:  setne  %al
08440e1e +0x8d6:  test   %al,%al
08440e20 +0x8d8:  jne    08440e0a <+0x8c2>
08440e22 +0x8da:  lea    -0x990(%ebp),%eax
08440e28 +0x8e0:  lea    0x262(%eax),%edx
08440e2e +0x8e6:  mov    -0x2c(%ebp),%eax
08440e31 +0x8e9:  mov    %eax,0xc(%esp)
08440e35 +0x8ed:  lea    -0x452(%ebp),%eax
08440e3b +0x8f3:  mov    %eax,0x8(%esp)
08440e3f +0x8f7:  lea    -0xd8(%ebp),%eax
08440e45 +0x8fd:  mov    %eax,0x4(%esp)
08440e49 +0x901:  mov    %edx,(%esp)
08440e4c +0x904:  call   086b2102 <_Z14uncompress_zipPcRjPKcj>  ; uncompress_zip(char*, unsigned int&, char const*, unsigned int)
08440e51 +0x909:  xor    $0x1,%eax
08440e54 +0x90c:  test   %al,%al
08440e56 +0x90e:  je     08440e62 <+0x91a>
08440e58 +0x910:  mov    $0x0,%eax
08440e5d +0x915:  jmp    08440f33 <+0x9eb>
08440e62 +0x91a:  mov    -0x72c(%ebp),%edx
08440e68 +0x920:  mov    0xc(%ebp),%eax
08440e6b +0x923:  mov    %edx,0x74(%eax)
08440e6e +0x926:  mov    0xc(%ebp),%eax
08440e71 +0x929:  mov    (%eax),%eax
08440e73 +0x92b:  mov    %eax,0x8(%esp)
08440e77 +0x92f:  movl   $"seLect it_id,name from creature_items where slot=238 and charac_no=%u and expire_date > now()",0x4(%esp)
08440e7f +0x937:  mov    -0x3c(%ebp),%eax
08440e82 +0x93a:  mov    %eax,(%esp)
08440e85 +0x93d:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08440e8a +0x942:  movl   $0x1,0x4(%esp)
08440e92 +0x94a:  mov    -0x3c(%ebp),%eax
08440e95 +0x94d:  mov    %eax,(%esp)
08440e98 +0x950:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08440e9d +0x955:  test   %al,%al
08440e9f +0x957:  je     08440ef8 <+0x9b0>
08440ea1 +0x959:  mov    -0x3c(%ebp),%eax
08440ea4 +0x95c:  mov    %eax,(%esp)
08440ea7 +0x95f:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08440eac +0x964:  test   %al,%al
08440eae +0x966:  je     08440f2e <+0x9e6>
08440eb0 +0x968:  mov    0xc(%ebp),%eax
08440eb3 +0x96b:  add    $0xb4,%eax
08440eb8 +0x970:  mov    %eax,0x8(%esp)
08440ebc +0x974:  movl   $0x0,0x4(%esp)
08440ec4 +0x97c:  mov    -0x3c(%ebp),%eax
08440ec7 +0x97f:  mov    %eax,(%esp)
08440eca +0x982:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08440ecf +0x987:  mov    0xc(%ebp),%eax
08440ed2 +0x98a:  add    $0xa4,%eax
08440ed7 +0x98f:  movl   $0xc,0xc(%esp)
08440edf +0x997:  mov    %eax,0x8(%esp)
08440ee3 +0x99b:  movl   $0x1,0x4(%esp)
08440eeb +0x9a3:  mov    -0x3c(%ebp),%eax
08440eee +0x9a6:  mov    %eax,(%esp)
08440ef1 +0x9a9:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
08440ef6 +0x9ae:  jmp    08440f2e <+0x9e6>
08440ef8 +0x9b0:  movl   $0x5,0xc(%esp)
08440f00 +0x9b8:  movl   $0x9fbf,0x8(%esp)
08440f08 +0x9c0:  movl   $&_ZZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfoE19__PRETTY_FUNCTION__,0x4(%esp)
08440f10 +0x9c8:  lea    -0x54(%ebp),%eax
08440f13 +0x9cb:  mov    %eax,(%esp)
08440f16 +0x9ce:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08440f1b +0x9d3:  movl   $"TOD: read DB creature_items error",0x4(%esp)
08440f23 +0x9db:  lea    -0x54(%ebp),%eax
08440f26 +0x9de:  mov    %eax,(%esp)
08440f29 +0x9e1:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08440f2e +0x9e6:  mov    $0x1,%eax
08440f33 +0x9eb:  add    $0xefc,%esp
08440f39 +0x9f1:  pop    %ebx
08440f3a +0x9f2:  pop    %esi
08440f3b +0x9f3:  pop    %edi
08440f3c +0x9f4:  pop    %ebp
08440f3d +0x9f5:  ret
```

## 反编译 C

```c
// DB_TOD_Reset_UserAPC::GetAPCUserInfo @ 0x8440548

/* WARNING: Removing unreachable block (ram,0x08440d15) */
/* DB_TOD_Reset_UserAPC::GetAPCUserInfo(_APCInfo&) */

undefined4 __thiscall
DB_TOD_Reset_UserAPC::GetAPCUserInfo(DB_TOD_Reset_UserAPC *this,_APCInfo *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  Inven_Item *this_00;
  bool bVar6;
  byte bVar7;
  int local_ef8 [345];
  Inven_Item local_994 [610];
  char local_732 [2];
  undefined4 local_730;
  char local_456 [890];
  uint local_dc;
  cMyTrace local_d8 [16];
  cMyTrace local_c8 [16];
  cMyTrace local_b8 [16];
  cMyTrace local_a8 [16];
  cMyTrace local_98 [16];
  cMyTrace local_88 [16];
  cMyTrace local_78 [16];
  cMyTrace local_68 [16];
  cMyTrace local_58 [16];
  MySQL *local_48;
  MySQL *local_44;
  MySQL *local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  uint local_30;
  char local_29;
  undefined4 local_28;
  int local_24;
  int local_20;
  
  bVar7 = 0;
  local_48 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  local_44 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,8,0);
  local_40 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  MySQL::set_query(local_48,
                   "seLect charac_name,lev,job,grow_type,guild_id from charac_info where charac_no=%d"
                   ,*(undefined4 *)param_1);
  MySQL::exec(local_48,true);
  cVar1 = MySQL::exec(local_48,true);
  if ((cVar1 == '\x01') && (cVar1 = MySQL::fetch(local_48), cVar1 == '\x01')) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (bVar6) {
    uVar2 = 0;
  }
  else {
    iVar3 = MySQL::get_n_rows(local_48);
    if (iVar3 == 1) {
      local_3c = 1;
      cVar1 = MySQL::get_str(local_48,0,(char *)(param_1 + 4),0x1e);
      iVar3 = local_3c;
      if (cVar1 == '\x01') {
        local_3c = local_3c + 1;
        cVar1 = MySQL::get_byte(local_48,iVar3,(int *)(param_1 + 0x24));
        iVar3 = local_3c;
        if (cVar1 == '\x01') {
          local_3c = local_3c + 1;
          cVar1 = MySQL::get_byte(local_48,iVar3,(int *)(param_1 + 0x28));
          iVar3 = local_3c;
          if (cVar1 == '\x01') {
            local_3c = local_3c + 1;
            cVar1 = MySQL::get_byte(local_48,iVar3,(int *)(param_1 + 0x2c));
            iVar3 = local_3c;
            if (cVar1 == '\x01') {
              local_3c = local_3c + 1;
              cVar1 = MySQL::get_uint(local_48,iVar3,(uint *)(param_1 + 0xb8));
              if (cVar1 == '\x01') {
                if (*(int *)(param_1 + 0xb8) != 0) {
                  iVar3 = G_CEnvironment();
                  local_28 = *(undefined4 *)(iVar3 + 0x378);
                  MySQL::set_query(local_44,"seLect guild_name from guild_info where guild_id=%d",
                                   *(undefined4 *)(param_1 + 0xb8));
                  cVar1 = MySQL::exec(local_44,true);
                  if ((cVar1 == '\x01') && (cVar1 = MySQL::fetch(local_44), cVar1 == '\x01')) {
                    bVar6 = false;
                  }
                  else {
                    bVar6 = true;
                  }
                  if (bVar6) {
                    uVar2 = *(undefined4 *)(param_1 + 0xb8);
                    cMyTrace::cMyTrace(local_d8,
                                       "bool DB_TOD_Reset_UserAPC::GetAPCUserInfo(_APCInfo&)",0x9f46
                                       ,5);
                    cMyTrace::operator()
                              (local_d8,"TOD:select guild db fail, guild_id:%d, server_id:%d",uVar2,
                               local_28);
                  }
                  else {
                    iVar3 = MySQL::get_n_rows(local_44);
                    if ((iVar3 != 0) &&
                       (cVar1 = MySQL::get_str(local_44,0,(char *)(param_1 + 0x30),0x16),
                       cVar1 != '\x01')) {
                      uVar2 = *(undefined4 *)(param_1 + 0xb8);
                      cMyTrace::cMyTrace(local_c8,
                                         "bool DB_TOD_Reset_UserAPC::GetAPCUserInfo(_APCInfo&)",
                                         0x9f4e,5);
                      cMyTrace::operator()
                                (local_c8,"TOD:select guild db fail, guild_id:%d, server_id:%d",
                                 uVar2,local_28);
                    }
                  }
                }
                local_38 = 0x73;
                memset(local_ef8,0,0x564);
                MySQL::set_query(local_40,
                                 "seLect slot,it_id,clear_avatar_id from user_items where charac_no=%u and expire_date>now() and stat=0 limit %d"
                                 ,*(undefined4 *)param_1,0x73);
                cVar1 = MySQL::exec(local_40,true);
                if (cVar1 == '\x01') {
                  local_34 = MySQL::get_n_rows(local_40);
                  for (local_24 = 0; local_24 < local_34; local_24 = local_24 + 1) {
                    cVar1 = MySQL::fetch(local_40);
                    if (cVar1 != '\x01') {
                      uVar2 = *(undefined4 *)param_1;
                      cMyTrace::cMyTrace(local_a8,
                                         "bool DB_TOD_Reset_UserAPC::GetAPCUserInfo(_APCInfo&)",
                                         0x9f67,5);
                      cMyTrace::operator()
                                (local_a8,
                                 "DB_LoadPowerWarStatueInfo::GetAvatarInfo, exec() ERROR charac_no=%u"
                                 ,uVar2);
                      break;
                    }
                    cVar1 = MySQL::get_int(local_40,0,local_ef8 + local_24 * 3);
                    if (cVar1 != '\x01') {
                      uVar2 = *(undefined4 *)param_1;
                      cMyTrace::cMyTrace(local_98,
                                         "bool DB_TOD_Reset_UserAPC::GetAPCUserInfo(_APCInfo&)",
                                         0x9f6d,5);
                      cMyTrace::operator()
                                (local_98,
                                 "DB_LoadPowerWarStatueInfo::GetAvatarInfo, get_int(0) ERROR charac_no=%u"
                                 ,uVar2);
                      return 0;
                    }
                    cVar1 = MySQL::get_int(local_40,1,local_ef8 + local_24 * 3 + 1);
                    if (cVar1 != '\x01') {
                      uVar2 = *(undefined4 *)param_1;
                      cMyTrace::cMyTrace(local_88,
                                         "bool DB_TOD_Reset_UserAPC::GetAPCUserInfo(_APCInfo&)",
                                         0x9f73,5);
                      cMyTrace::operator()
                                (local_88,
                                 "DB_LoadPowerWarStatueInfo::GetAvatarInfo, get_int(1) ERROR charac_no=%u"
                                 ,uVar2);
                      return 0;
                    }
                    cVar1 = MySQL::get_int(local_40,2,local_ef8 + local_24 * 3 + 2);
                    if (cVar1 != '\x01') {
                      uVar2 = *(undefined4 *)param_1;
                      cMyTrace::cMyTrace(local_78,
                                         "bool DB_TOD_Reset_UserAPC::GetAPCUserInfo(_APCInfo&)",
                                         0x9f79,5);
                      cMyTrace::operator()
                                (local_78,
                                 "DB_LoadPowerWarStatueInfo::GetAvatarInfo, get_int(2) ERROR charac_no=%u"
                                 ,uVar2);
                      return 0;
                    }
                    if ((-1 < local_ef8[local_24 * 3]) && (local_ef8[local_24 * 3] < 10)) {
                      *(int *)(param_1 + (local_ef8[local_24 * 3] + 0x10) * 4 + 0xc) =
                           local_ef8[local_24 * 3 + 1];
                    }
                  }
                  for (local_20 = 0; local_20 < local_34; local_20 = local_20 + 1) {
                    if (local_ef8[local_20 * 3 + 2] != 0) {
                      MySQL::set_query(local_40,"seLect it_id from user_items where ui_id=%d",
                                       local_ef8[local_20 * 3 + 2]);
                      cVar1 = MySQL::exec(local_40,true);
                      if ((cVar1 == '\0') || (cVar1 = MySQL::fetch(local_40), cVar1 == '\0')) {
                        bVar6 = false;
                      }
                      else {
                        bVar6 = true;
                      }
                      if (bVar6) {
                        MySQL::get_int(local_40,0,
                                       (uint *)(param_1 + (local_ef8[local_20 * 3] + 0x10) * 4 + 0xc
                                               ));
                      }
                    }
                  }
                  pcVar4 = local_456;
                  uVar5 = 0x37a;
                  bVar6 = ((uint)pcVar4 & 2) != 0;
                  if (bVar6) {
                    local_456[0] = '\0';
                    local_456[1] = '\0';
                    pcVar4 = local_456 + 2;
                    uVar5 = 0x378;
                  }
                  for (uVar5 = uVar5 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                    pcVar4[0] = '\0';
                    pcVar4[1] = '\0';
                    pcVar4[2] = '\0';
                    pcVar4[3] = '\0';
                    pcVar4 = pcVar4 + ((uint)bVar7 * -2 + 1) * 4;
                  }
                  if (!bVar6) {
                    pcVar4[0] = '\0';
                    pcVar4[1] = '\0';
                  }
                  local_dc = 0x37a;
                  local_30 = 0x37a;
                  MySQL::set_query(local_40,"seLect equipslot from inventory where charac_no=%u",
                                   *(undefined4 *)param_1);
                  MySQL::exec(local_40,true);
                  MySQL::fetch(local_40);
                  local_30 = MySQL::get_binary_length(local_40,0);
                  local_29 = MySQL::get_binary(local_40,0,local_456,local_dc);
                  if (local_29 == '\x01') {
                    this_00 = local_994;
                    local_29 = 1;
                    for (iVar3 = 0x15; iVar3 != -1; iVar3 = iVar3 + -1) {
                      Inven_Item::Inven_Item(this_00);
                      this_00 = this_00 + 0x3d;
                    }
                    cVar1 = uncompress_zip(local_732,&local_dc,local_456,local_30);
                    if (cVar1 == '\x01') {
                      *(undefined4 *)(param_1 + 0x74) = local_730;
                      MySQL::set_query(local_40,
                                       "seLect it_id,name from creature_items where slot=238 and charac_no=%u and expire_date > now()"
                                       ,*(undefined4 *)param_1);
                      cVar1 = MySQL::exec(local_40,true);
                      if (cVar1 == '\0') {
                        cMyTrace::cMyTrace(local_58,
                                           "bool DB_TOD_Reset_UserAPC::GetAPCUserInfo(_APCInfo&)",
                                           0x9fbf,5);
                        cMyTrace::operator()(local_58,"TOD: read DB creature_items error");
                      }
                      else {
                        cVar1 = MySQL::fetch(local_40);
                        if (cVar1 != '\0') {
                          MySQL::get_int(local_40,0,(int *)(param_1 + 0xb4));
                          MySQL::get_str(local_40,1,(char *)(param_1 + 0xa4),0xc);
                        }
                      }
                      uVar2 = 1;
                    }
                    else {
                      uVar2 = 0;
                    }
                  }
                  else {
                    uVar2 = *(undefined4 *)param_1;
                    cMyTrace::cMyTrace(local_68,
                                       "bool DB_TOD_Reset_UserAPC::GetAPCUserInfo(_APCInfo&)",0x9f9d
                                       ,5);
                    cMyTrace::operator()
                              (local_68,
                               "DB_LoadInventory::GetUserInven, get_binary(3) ERROR charac_no=%u",
                               uVar2);
                    uVar2 = 0;
                  }
                }
                else {
                  uVar2 = *(undefined4 *)param_1;
                  cMyTrace::cMyTrace(local_b8,"bool DB_TOD_Reset_UserAPC::GetAPCUserInfo(_APCInfo&)"
                                     ,0x9f5d,5);
                  cMyTrace::operator()
                            (local_b8,
                             "DB_LoadPowerWarStatueInfo::GetAvatarInfo, exec() ERROR charac_no=%u",
                             uVar2);
                  uVar2 = 0;
                }
              }
              else {
                uVar2 = 0;
              }
            }
            else {
              uVar2 = 0;
            }
          }
          else {
            uVar2 = 0;
          }
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
