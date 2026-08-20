# getBreakAwayMemberData

`_ZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATA`

`DB_Login::getBreakAwayMemberData(SIG_LOGIN_DATA*)`

| 类 | 地址 |
|---|---|
| `DB_Login` | `0x084101ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084101ae  _ZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATA
#           DB_Login::getBreakAwayMemberData(SIG_LOGIN_DATA*)
# range [0x084101ae, 0x0841090b]
084101ae +0x000:  push   %ebp
084101af +0x001:  mov    %esp,%ebp
084101b1 +0x003:  push   %esi
084101b2 +0x004:  push   %ebx
084101b3 +0x005:  add    $0xffffff80,%esp
084101b6 +0x008:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084101bb +0x00d:  movl   $0x0,0x8(%esp)
084101c3 +0x015:  movl   $0x6,0x4(%esp)
084101cb +0x01d:  mov    %eax,(%esp)
084101ce +0x020:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084101d3 +0x025:  mov    %eax,-0x14(%ebp)
084101d6 +0x028:  mov    0xc(%ebp),%eax
084101d9 +0x02b:  mov    0xc0(%eax),%eax
084101df +0x031:  movl   $0x0,0x4(%esp)
084101e7 +0x039:  mov    %eax,(%esp)
084101ea +0x03c:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084101ef +0x041:  mov    %eax,0x8(%esp)
084101f3 +0x045:  movl   $"seLect accrue_cera, play_info, last_reward_time, first_reward_time, luck_point, last_update_time, add_info, second_reward_time, quest_time from churn_member_info where m_id=%s",0x4(%esp)
084101fb +0x04d:  mov    -0x14(%ebp),%eax
084101fe +0x050:  mov    %eax,(%esp)
08410201 +0x053:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08410206 +0x058:  movl   $0x1,0x4(%esp)
0841020e +0x060:  mov    -0x14(%ebp),%eax
08410211 +0x063:  mov    %eax,(%esp)
08410214 +0x066:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08410219 +0x06b:  xor    $0x1,%eax
0841021c +0x06e:  test   %al,%al
0841021e +0x070:  je     08410256 <+0xa8>
08410220 +0x072:  movl   $"BREAK_AWAY : churn_member_info DB ERROR!!",0x10(%esp)
08410228 +0x07a:  movl   $0x307b,0xc(%esp)
08410230 +0x082:  movl   $&_ZZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x8(%esp)
08410238 +0x08a:  movl   $"DBThread.cpp",0x4(%esp)
08410240 +0x092:  movl   $0x1,(%esp)
08410247 +0x099:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0841024c +0x09e:  mov    $0x0,%eax
08410251 +0x0a3:  jmp    08410904 <+0x756>
08410256 +0x0a8:  mov    -0x14(%ebp),%eax
08410259 +0x0ab:  mov    %eax,(%esp)
0841025c +0x0ae:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08410261 +0x0b3:  test   %eax,%eax
08410263 +0x0b5:  sete   %al
08410266 +0x0b8:  test   %al,%al
08410268 +0x0ba:  je     08410404 <+0x256>
0841026e +0x0c0:  lea    -0x5b(%ebp),%eax
08410271 +0x0c3:  mov    $0x1f,%edx
08410276 +0x0c8:  mov    $0x0,%ecx
0841027b +0x0cd:  mov    %eax,%ebx
0841027d +0x0cf:  and    $0x1,%ebx
08410280 +0x0d2:  test   %ebx,%ebx
08410282 +0x0d4:  je     0841028c <+0xde>
08410284 +0x0d6:  mov    %cl,(%eax)
08410286 +0x0d8:  add    $0x1,%eax
08410289 +0x0db:  sub    $0x1,%edx
0841028c +0x0de:  mov    %eax,%ebx
0841028e +0x0e0:  and    $0x2,%ebx
08410291 +0x0e3:  test   %ebx,%ebx
08410293 +0x0e5:  je     0841029e <+0xf0>
08410295 +0x0e7:  mov    %cx,(%eax)
08410298 +0x0ea:  add    $0x2,%eax
0841029b +0x0ed:  sub    $0x2,%edx
0841029e +0x0f0:  mov    %edx,%esi
084102a0 +0x0f2:  and    $0xfffffffc,%esi
084102a3 +0x0f5:  mov    $0x0,%ebx
084102a8 +0x0fa:  mov    %ecx,(%eax,%ebx,1)
084102ab +0x0fd:  add    $0x4,%ebx
084102ae +0x100:  cmp    %esi,%ebx
084102b0 +0x102:  jb     084102a8 <+0xfa>
084102b2 +0x104:  add    %ebx,%eax
084102b4 +0x106:  mov    %edx,%ebx
084102b6 +0x108:  and    $0x2,%ebx
084102b9 +0x10b:  test   %ebx,%ebx
084102bb +0x10d:  je     084102c3 <+0x115>
084102bd +0x10f:  mov    %cx,(%eax)
084102c0 +0x112:  add    $0x2,%eax
084102c3 +0x115:  and    $0x1,%edx
084102c6 +0x118:  test   %edx,%edx
084102c8 +0x11a:  je     084102cf <+0x121>
084102ca +0x11c:  mov    %cl,(%eax)
084102cc +0x11e:  add    $0x1,%eax
084102cf +0x121:  movl   $0x1e,0x8(%esp)
084102d7 +0x129:  movl   $0x30,0x4(%esp)
084102df +0x131:  lea    -0x5b(%ebp),%eax
084102e2 +0x134:  mov    %eax,(%esp)
084102e5 +0x137:  call   0807dcc0 <_init+0x5b8>
084102ea +0x13c:  movb   $0x31,-0x3e(%ebp)
084102ee +0x140:  mov    0xc(%ebp),%eax
084102f1 +0x143:  mov    0xc0(%eax),%eax
084102f7 +0x149:  movl   $0x0,0x4(%esp)
084102ff +0x151:  mov    %eax,(%esp)
08410302 +0x154:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08410307 +0x159:  lea    -0x5b(%ebp),%edx
0841030a +0x15c:  mov    %edx,0xc(%esp)
0841030e +0x160:  mov    %eax,0x8(%esp)
08410312 +0x164:  movl   $"inSert into churn_member_info(m_id,accrue_cera,play_info,last_reward_time,first_reward_time,server_id,charac_no,item_id,add_info,luck_point,last_update_time,second_reward_time) values(%s,0,'%s',0,0,0,0,0,0,0,0,0)",0x4(%esp)
0841031a +0x16c:  mov    -0x14(%ebp),%eax
0841031d +0x16f:  mov    %eax,(%esp)
08410320 +0x172:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08410325 +0x177:  movl   $0x1,0x4(%esp)
0841032d +0x17f:  mov    -0x14(%ebp),%eax
08410330 +0x182:  mov    %eax,(%esp)
08410333 +0x185:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08410338 +0x18a:  xor    $0x1,%eax
0841033b +0x18d:  test   %al,%al
0841033d +0x18f:  je     08410375 <+0x1c7>
0841033f +0x191:  movl   $"BREAK_AWAY : churn_member_info DB INSERT FAIL!!",0x10(%esp)
08410347 +0x199:  movl   $0x308c,0xc(%esp)
0841034f +0x1a1:  movl   $&_ZZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x8(%esp)
08410357 +0x1a9:  movl   $"DBThread.cpp",0x4(%esp)
0841035f +0x1b1:  movl   $0x1,(%esp)
08410366 +0x1b8:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0841036b +0x1bd:  mov    $0x0,%eax
08410370 +0x1c2:  jmp    08410904 <+0x756>
08410375 +0x1c7:  mov    0xc(%ebp),%eax
08410378 +0x1ca:  mov    0xc0(%eax),%eax
0841037e +0x1d0:  movl   $0x0,0x4(%esp)
08410386 +0x1d8:  mov    %eax,(%esp)
08410389 +0x1db:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0841038e +0x1e0:  mov    %eax,%ebx
08410390 +0x1e2:  movl   $0x0,0xc(%esp)
08410398 +0x1ea:  movl   $0x308f,0x8(%esp)
084103a0 +0x1f2:  movl   $&_ZZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x4(%esp)
084103a8 +0x1fa:  lea    -0x3c(%ebp),%eax
084103ab +0x1fd:  mov    %eax,(%esp)
084103ae +0x200:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084103b3 +0x205:  mov    %ebx,0x8(%esp)
084103b7 +0x209:  movl   $"BREAK_AWAY : churn_member_info MEMBER INSERT!! M_ID(%s)",0x4(%esp)
084103bf +0x211:  lea    -0x3c(%ebp),%eax
084103c2 +0x214:  mov    %eax,(%esp)
084103c5 +0x217:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084103ca +0x21c:  mov    0xc(%ebp),%eax
084103cd +0x21f:  add    $0x3f18,%eax
084103d2 +0x224:  mov    %eax,(%esp)
084103d5 +0x227:  call   0844d584 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x19a>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x19a
084103da +0x22c:  mov    0xc(%ebp),%eax
084103dd +0x22f:  lea    0x3f1c(%eax),%edx
084103e3 +0x235:  movl   $0x1f,0x8(%esp)
084103eb +0x23d:  lea    -0x5b(%ebp),%eax
084103ee +0x240:  mov    %eax,0x4(%esp)
084103f2 +0x244:  mov    %edx,(%esp)
084103f5 +0x247:  call   0807d8a0 <_init+0x198>
084103fa +0x24c:  mov    $0x1,%eax
084103ff +0x251:  jmp    08410904 <+0x756>
08410404 +0x256:  mov    -0x14(%ebp),%eax
08410407 +0x259:  mov    %eax,(%esp)
0841040a +0x25c:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0841040f +0x261:  xor    $0x1,%eax
08410412 +0x264:  test   %al,%al
08410414 +0x266:  je     08410475 <+0x2c7>
08410416 +0x268:  mov    0xc(%ebp),%eax
08410419 +0x26b:  mov    0xc0(%eax),%eax
0841041f +0x271:  movl   $0x0,0x4(%esp)
08410427 +0x279:  mov    %eax,(%esp)
0841042a +0x27c:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0841042f +0x281:  mov    %eax,%ebx
08410431 +0x283:  movl   $0x5,0xc(%esp)
08410439 +0x28b:  movl   $0x309a,0x8(%esp)
08410441 +0x293:  movl   $&_ZZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x4(%esp)
08410449 +0x29b:  lea    -0x2c(%ebp),%eax
0841044c +0x29e:  mov    %eax,(%esp)
0841044f +0x2a1:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08410454 +0x2a6:  mov    %ebx,0x8(%esp)
08410458 +0x2aa:  movl   $"BREAK_AWAY : churn_member_info NO MEMBER USER!! M_ID(%s)",0x4(%esp)
08410460 +0x2b2:  lea    -0x2c(%ebp),%eax
08410463 +0x2b5:  mov    %eax,(%esp)
08410466 +0x2b8:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0841046b +0x2bd:  mov    $0x0,%eax
08410470 +0x2c2:  jmp    08410904 <+0x756>
08410475 +0x2c7:  mov    0xc(%ebp),%eax
08410478 +0x2ca:  add    $0x3f18,%eax
0841047d +0x2cf:  mov    %eax,0x8(%esp)
08410481 +0x2d3:  movl   $0x0,0x4(%esp)
08410489 +0x2db:  mov    -0x14(%ebp),%eax
0841048c +0x2de:  mov    %eax,(%esp)
0841048f +0x2e1:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08410494 +0x2e6:  xor    $0x1,%eax
08410497 +0x2e9:  test   %al,%al
08410499 +0x2eb:  je     084104a5 <+0x2f7>
0841049b +0x2ed:  mov    $0x0,%eax
084104a0 +0x2f2:  jmp    08410904 <+0x756>
084104a5 +0x2f7:  mov    0xc(%ebp),%eax
084104a8 +0x2fa:  add    $0x3f1c,%eax
084104ad +0x2ff:  movl   $0x1f,0xc(%esp)
084104b5 +0x307:  mov    %eax,0x8(%esp)
084104b9 +0x30b:  movl   $0x1,0x4(%esp)
084104c1 +0x313:  mov    -0x14(%ebp),%eax
084104c4 +0x316:  mov    %eax,(%esp)
084104c7 +0x319:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
084104cc +0x31e:  xor    $0x1,%eax
084104cf +0x321:  test   %al,%al
084104d1 +0x323:  je     084104dd <+0x32f>
084104d3 +0x325:  mov    $0x0,%eax
084104d8 +0x32a:  jmp    08410904 <+0x756>
084104dd +0x32f:  mov    0xc(%ebp),%eax
084104e0 +0x332:  add    $0x3f1c,%eax
084104e5 +0x337:  movzbl (%eax),%eax
084104e8 +0x33a:  test   %al,%al
084104ea +0x33c:  jne    0841053f <+0x391>
084104ec +0x33e:  mov    0xc(%ebp),%eax
084104ef +0x341:  mov    0xc0(%eax),%eax
084104f5 +0x347:  movl   $0x0,0x4(%esp)
084104fd +0x34f:  mov    %eax,(%esp)
08410500 +0x352:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08410505 +0x357:  mov    %eax,0x14(%esp)
08410509 +0x35b:  movl   $"BREAK_AWAY : ABNOMAL PLAY_INFO DATA!! M_ID(%s)",0x10(%esp)
08410511 +0x363:  movl   $0x30ab,0xc(%esp)
08410519 +0x36b:  movl   $&_ZZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x8(%esp)
08410521 +0x373:  movl   $"DBThread.cpp",0x4(%esp)
08410529 +0x37b:  movl   $0x1,(%esp)
08410530 +0x382:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08410535 +0x387:  mov    $0x0,%eax
0841053a +0x38c:  jmp    08410904 <+0x756>
0841053f +0x391:  mov    0xc(%ebp),%eax
08410542 +0x394:  add    $0x3f3c,%eax
08410547 +0x399:  mov    %eax,0x8(%esp)
0841054b +0x39d:  movl   $0x2,0x4(%esp)
08410553 +0x3a5:  mov    -0x14(%ebp),%eax
08410556 +0x3a8:  mov    %eax,(%esp)
08410559 +0x3ab:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0841055e +0x3b0:  xor    $0x1,%eax
08410561 +0x3b3:  test   %al,%al
08410563 +0x3b5:  je     0841056f <+0x3c1>
08410565 +0x3b7:  mov    $0x0,%eax
0841056a +0x3bc:  jmp    08410904 <+0x756>
0841056f +0x3c1:  mov    0xc(%ebp),%eax
08410572 +0x3c4:  add    $0x3f40,%eax
08410577 +0x3c9:  mov    %eax,0x8(%esp)
0841057b +0x3cd:  movl   $0x3,0x4(%esp)
08410583 +0x3d5:  mov    -0x14(%ebp),%eax
08410586 +0x3d8:  mov    %eax,(%esp)
08410589 +0x3db:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0841058e +0x3e0:  xor    $0x1,%eax
08410591 +0x3e3:  test   %al,%al
08410593 +0x3e5:  je     0841059f <+0x3f1>
08410595 +0x3e7:  mov    $0x0,%eax
0841059a +0x3ec:  jmp    08410904 <+0x756>
0841059f +0x3f1:  mov    0xc(%ebp),%eax
084105a2 +0x3f4:  add    $0x3f54,%eax
084105a7 +0x3f9:  mov    %eax,0x8(%esp)
084105ab +0x3fd:  movl   $0x4,0x4(%esp)
084105b3 +0x405:  mov    -0x14(%ebp),%eax
084105b6 +0x408:  mov    %eax,(%esp)
084105b9 +0x40b:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
084105be +0x410:  xor    $0x1,%eax
084105c1 +0x413:  test   %al,%al
084105c3 +0x415:  je     084105cf <+0x421>
084105c5 +0x417:  mov    $0x0,%eax
084105ca +0x41c:  jmp    08410904 <+0x756>
084105cf +0x421:  mov    0xc(%ebp),%eax
084105d2 +0x424:  add    $0x3f50,%eax
084105d7 +0x429:  mov    %eax,0x8(%esp)
084105db +0x42d:  movl   $0x5,0x4(%esp)
084105e3 +0x435:  mov    -0x14(%ebp),%eax
084105e6 +0x438:  mov    %eax,(%esp)
084105e9 +0x43b:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
084105ee +0x440:  xor    $0x1,%eax
084105f1 +0x443:  test   %al,%al
084105f3 +0x445:  je     084105ff <+0x451>
084105f5 +0x447:  mov    $0x0,%eax
084105fa +0x44c:  jmp    08410904 <+0x756>
084105ff +0x451:  mov    0xc(%ebp),%eax
08410602 +0x454:  add    $0x3f48,%eax
08410607 +0x459:  mov    %eax,0x8(%esp)
0841060b +0x45d:  movl   $0x6,0x4(%esp)
08410613 +0x465:  mov    -0x14(%ebp),%eax
08410616 +0x468:  mov    %eax,(%esp)
08410619 +0x46b:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0841061e +0x470:  xor    $0x1,%eax
08410621 +0x473:  test   %al,%al
08410623 +0x475:  je     0841062f <+0x481>
08410625 +0x477:  mov    $0x0,%eax
0841062a +0x47c:  jmp    08410904 <+0x756>
0841062f +0x481:  mov    0xc(%ebp),%eax
08410632 +0x484:  add    $0x3f44,%eax
08410637 +0x489:  mov    %eax,0x8(%esp)
0841063b +0x48d:  movl   $0x7,0x4(%esp)
08410643 +0x495:  mov    -0x14(%ebp),%eax
08410646 +0x498:  mov    %eax,(%esp)
08410649 +0x49b:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0841064e +0x4a0:  xor    $0x1,%eax
08410651 +0x4a3:  test   %al,%al
08410653 +0x4a5:  je     0841065f <+0x4b1>
08410655 +0x4a7:  mov    $0x0,%eax
0841065a +0x4ac:  jmp    08410904 <+0x756>
0841065f +0x4b1:  mov    0xc(%ebp),%eax
08410662 +0x4b4:  add    $0x3f4c,%eax
08410667 +0x4b9:  mov    %eax,0x8(%esp)
0841066b +0x4bd:  movl   $0x8,0x4(%esp)
08410673 +0x4c5:  mov    -0x14(%ebp),%eax
08410676 +0x4c8:  mov    %eax,(%esp)
08410679 +0x4cb:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0841067e +0x4d0:  xor    $0x1,%eax
08410681 +0x4d3:  test   %al,%al
08410683 +0x4d5:  je     0841068f <+0x4e1>
08410685 +0x4d7:  mov    $0x0,%eax
0841068a +0x4dc:  jmp    08410904 <+0x756>
0841068f +0x4e1:  mov    0xc(%ebp),%eax
08410692 +0x4e4:  mov    0x3f3c(%eax),%eax
08410698 +0x4ea:  test   %eax,%eax
0841069a +0x4ec:  je     084107e0 <+0x632>
084106a0 +0x4f2:  mov    0xc(%ebp),%eax
084106a3 +0x4f5:  mov    0x3f3c(%eax),%eax
084106a9 +0x4fb:  mov    %eax,0x4(%esp)
084106ad +0x4ff:  movl   $0x0,(%esp)
084106b4 +0x506:  call   0846c2e9 <_Z19getPrevScheduleTimeil>  ; getPrevScheduleTime(int, long)
084106b9 +0x50b:  mov    %eax,-0x10(%ebp)
084106bc +0x50e:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084106c3 +0x515:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084106c8 +0x51a:  mov    %eax,%ecx
084106ca +0x51c:  sub    -0x10(%ebp),%ecx
084106cd +0x51f:  mov    $0xc22e4507,%edx
084106d2 +0x524:  mov    %ecx,%eax
084106d4 +0x526:  imul   %edx
084106d6 +0x528:  lea    (%edx,%ecx,1),%eax
084106d9 +0x52b:  mov    %eax,%edx
084106db +0x52d:  sar    $0x10,%edx
084106de +0x530:  mov    %ecx,%eax
084106e0 +0x532:  sar    $0x1f,%eax
084106e3 +0x535:  mov    %edx,%ecx
084106e5 +0x537:  sub    %eax,%ecx
084106e7 +0x539:  mov    %ecx,%eax
084106e9 +0x53b:  mov    %eax,-0x1c(%ebp)
084106ec +0x53e:  movl   $0x0,-0x18(%ebp)
084106f3 +0x545:  lea    -0x1c(%ebp),%eax
084106f6 +0x548:  mov    %eax,0x4(%esp)
084106fa +0x54c:  lea    -0x18(%ebp),%eax
084106fd +0x54f:  mov    %eax,(%esp)
08410700 +0x552:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
08410705 +0x557:  mov    (%eax),%eax
08410707 +0x559:  mov    %eax,-0xc(%ebp)
0841070a +0x55c:  cmpl   $0x0,-0xc(%ebp)
0841070e +0x560:  je     084107e0 <+0x632>
08410714 +0x566:  mov    0xc(%ebp),%eax
08410717 +0x569:  mov    0x3f54(%eax),%eax
0841071d +0x56f:  test   %eax,%eax
0841071f +0x571:  je     084107e0 <+0x632>
08410725 +0x577:  mov    0xc(%ebp),%eax
08410728 +0x57a:  movl   $0x0,0x3f54(%eax)
08410732 +0x584:  mov    0xc(%ebp),%eax
08410735 +0x587:  mov    0xc0(%eax),%eax
0841073b +0x58d:  movl   $0x0,0x4(%esp)
08410743 +0x595:  mov    %eax,(%esp)
08410746 +0x598:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0841074b +0x59d:  mov    0xc(%ebp),%edx
0841074e +0x5a0:  mov    0x3f54(%edx),%edx
08410754 +0x5a6:  mov    %eax,0xc(%esp)
08410758 +0x5aa:  mov    %edx,0x8(%esp)
0841075c +0x5ae:  movl   $"upDate churn_member_info set luck_point=%d where m_id=%s",0x4(%esp)
08410764 +0x5b6:  mov    -0x14(%ebp),%eax
08410767 +0x5b9:  mov    %eax,(%esp)
0841076a +0x5bc:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841076f +0x5c1:  movl   $0x1,0x4(%esp)
08410777 +0x5c9:  mov    -0x14(%ebp),%eax
0841077a +0x5cc:  mov    %eax,(%esp)
0841077d +0x5cf:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08410782 +0x5d4:  xor    $0x1,%eax
08410785 +0x5d7:  test   %al,%al
08410787 +0x5d9:  jne    0841079a <+0x5ec>
08410789 +0x5db:  mov    -0x14(%ebp),%eax
0841078c +0x5de:  mov    %eax,(%esp)
0841078f +0x5e1:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08410794 +0x5e6:  or     %edx,%eax
08410796 +0x5e8:  test   %eax,%eax
08410798 +0x5ea:  jne    084107a1 <+0x5f3>
0841079a +0x5ec:  mov    $0x1,%eax
0841079f +0x5f1:  jmp    084107a6 <+0x5f8>
084107a1 +0x5f3:  mov    $0x0,%eax
084107a6 +0x5f8:  test   %al,%al
084107a8 +0x5fa:  je     084107e0 <+0x632>
084107aa +0x5fc:  movl   $"BREAK_AWAY : LUCK POINT UPDATE ERROR!!",0x10(%esp)
084107b2 +0x604:  movl   $0x30d1,0xc(%esp)
084107ba +0x60c:  movl   $&_ZZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x8(%esp)
084107c2 +0x614:  movl   $"DBThread.cpp",0x4(%esp)
084107ca +0x61c:  movl   $0x1,(%esp)
084107d1 +0x623:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084107d6 +0x628:  mov    $0x0,%eax
084107db +0x62d:  jmp    08410904 <+0x756>
084107e0 +0x632:  mov    0xc(%ebp),%eax
084107e3 +0x635:  mov    0x3f4c(%eax),%eax
084107e9 +0x63b:  test   %eax,%eax
084107eb +0x63d:  je     084108ff <+0x751>
084107f1 +0x643:  mov    0xc(%ebp),%eax
084107f4 +0x646:  mov    0x3f4c(%eax),%ebx
084107fa +0x64c:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08410801 +0x653:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08410806 +0x658:  cmp    %eax,%ebx
08410808 +0x65a:  jae    0841083d <+0x68f>
0841080a +0x65c:  mov    0xc(%ebp),%eax
0841080d +0x65f:  mov    0x3f3c(%eax),%edx
08410813 +0x665:  mov    0xc(%ebp),%eax
08410816 +0x668:  mov    0x3f40(%eax),%eax
0841081c +0x66e:  cmp    %eax,%edx
0841081e +0x670:  je     08410836 <+0x688>
08410820 +0x672:  mov    0xc(%ebp),%eax
08410823 +0x675:  mov    0x3f3c(%eax),%edx
08410829 +0x67b:  mov    0xc(%ebp),%eax
0841082c +0x67e:  mov    0x3f44(%eax),%eax
08410832 +0x684:  cmp    %eax,%edx
08410834 +0x686:  jne    0841083d <+0x68f>
08410836 +0x688:  mov    $0x1,%eax
0841083b +0x68d:  jmp    08410842 <+0x694>
0841083d +0x68f:  mov    $0x0,%eax
08410842 +0x694:  test   %al,%al
08410844 +0x696:  je     084108ff <+0x751>
0841084a +0x69c:  mov    0xc(%ebp),%eax
0841084d +0x69f:  movl   $0xffffffff,0x3f48(%eax)
08410857 +0x6a9:  mov    0xc(%ebp),%eax
0841085a +0x6ac:  movl   $0x0,0x3f4c(%eax)
08410864 +0x6b6:  mov    0xc(%ebp),%eax
08410867 +0x6b9:  mov    0xc0(%eax),%edx
0841086d +0x6bf:  mov    0xc(%ebp),%eax
08410870 +0x6c2:  mov    0x3f48(%eax),%eax
08410876 +0x6c8:  mov    %edx,0xc(%esp)
0841087a +0x6cc:  mov    %eax,0x8(%esp)
0841087e +0x6d0:  movl   $"upDate churn_member_info set add_info=%d, quest_time=0 where m_id=%u",0x4(%esp)
08410886 +0x6d8:  mov    -0x14(%ebp),%eax
08410889 +0x6db:  mov    %eax,(%esp)
0841088c +0x6de:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08410891 +0x6e3:  movl   $0x1,0x4(%esp)
08410899 +0x6eb:  mov    -0x14(%ebp),%eax
0841089c +0x6ee:  mov    %eax,(%esp)
0841089f +0x6f1:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084108a4 +0x6f6:  xor    $0x1,%eax
084108a7 +0x6f9:  test   %al,%al
084108a9 +0x6fb:  jne    084108bc <+0x70e>
084108ab +0x6fd:  mov    -0x14(%ebp),%eax
084108ae +0x700:  mov    %eax,(%esp)
084108b1 +0x703:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
084108b6 +0x708:  or     %edx,%eax
084108b8 +0x70a:  test   %eax,%eax
084108ba +0x70c:  jne    084108c3 <+0x715>
084108bc +0x70e:  mov    $0x1,%eax
084108c1 +0x713:  jmp    084108c8 <+0x71a>
084108c3 +0x715:  mov    $0x0,%eax
084108c8 +0x71a:  test   %al,%al
084108ca +0x71c:  je     084108ff <+0x751>
084108cc +0x71e:  movl   $"BREAK_AWAY : ADD INFO UPDATE ERROR!!",0x10(%esp)
084108d4 +0x726:  movl   $0x30e6,0xc(%esp)
084108dc +0x72e:  movl   $&_ZZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x8(%esp)
084108e4 +0x736:  movl   $"DBThread.cpp",0x4(%esp)
084108ec +0x73e:  movl   $0x1,(%esp)
084108f3 +0x745:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084108f8 +0x74a:  mov    $0x0,%eax
084108fd +0x74f:  jmp    08410904 <+0x756>
084108ff +0x751:  mov    $0x1,%eax
08410904 +0x756:  sub    $0xffffff80,%esp
08410907 +0x759:  pop    %ebx
08410908 +0x75a:  pop    %esi
08410909 +0x75b:  pop    %ebp
0841090a +0x75c:  ret
0841090b +0x75d:  nop
```

## 反编译 C

```c
// DB_Login::getBreakAwayMemberData @ 0x84101ae

/* DB_Login::getBreakAwayMemberData(SIG_LOGIN_DATA*) */

undefined4 __thiscall DB_Login::getBreakAwayMemberData(DB_Login *this,SIG_LOGIN_DATA *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 *puVar4;
  size_t *psVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  longlong lVar9;
  undefined1 local_5f [29];
  undefined1 local_42;
  cMyTrace local_40 [16];
  cMyTrace local_30 [16];
  size_t local_20 [2];
  MySQL *local_18;
  int local_14;
  size_t local_10;
  
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  uVar2 = NumberToString(*(uint *)(param_1 + 0xc0),0);
  MySQL::set_query(local_18,
                   "seLect accrue_cera, play_info, last_reward_time, first_reward_time, luck_point, last_update_time, add_info, second_reward_time, quest_time from churn_member_info where m_id=%s"
                   ,uVar2);
  cVar1 = MySQL::exec(local_18,true);
  if (cVar1 != '\x01') {
    LogManager::logFormat
              (1,"DBThread.cpp","bool DB_Login::getBreakAwayMemberData(SIG_LOGIN_DATA*)",0x307b,
               "BREAK_AWAY : churn_member_info DB ERROR!!");
    return 0;
  }
  iVar3 = MySQL::get_n_rows(local_18);
  if (iVar3 == 0) {
    puVar4 = (undefined2 *)local_5f;
    uVar6 = 0x1f;
    bVar8 = ((uint)puVar4 & 1) != 0;
    if (bVar8) {
      local_5f[0] = 0;
      puVar4 = (undefined2 *)(local_5f + 1);
      uVar6 = 0x1e;
    }
    if (((uint)puVar4 & 2) != 0) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
      uVar6 = uVar6 - 2;
    }
    uVar7 = 0;
    do {
      *(undefined4 *)((int)puVar4 + uVar7) = 0;
      uVar7 = uVar7 + 4;
    } while (uVar7 < (uVar6 & 0xfffffffc));
    puVar4 = (undefined2 *)((int)puVar4 + uVar7);
    if ((uVar6 & 2) != 0) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    if (!bVar8) {
      *(undefined1 *)puVar4 = 0;
    }
    memset(local_5f,0x30,0x1e);
    local_42 = 0x31;
    uVar2 = NumberToString(*(uint *)(param_1 + 0xc0),0);
    MySQL::set_query(local_18,
                     "inSert into churn_member_info(m_id,accrue_cera,play_info,last_reward_time,first_reward_time,server_id,charac_no,item_id,add_info,luck_point,last_update_time,second_reward_time) values(%s,0,\'%s\',0,0,0,0,0,0,0,0,0)"
                     ,uVar2,local_5f);
    cVar1 = MySQL::exec(local_18,true);
    if (cVar1 != '\x01') {
      LogManager::logFormat
                (1,"DBThread.cpp","bool DB_Login::getBreakAwayMemberData(SIG_LOGIN_DATA*)",0x308c,
                 "BREAK_AWAY : churn_member_info DB INSERT FAIL!!");
      return 0;
    }
    uVar2 = NumberToString(*(uint *)(param_1 + 0xc0),0);
    cMyTrace::cMyTrace(local_40,"bool DB_Login::getBreakAwayMemberData(SIG_LOGIN_DATA*)",0x308f,0);
    cMyTrace::operator()(local_40,"BREAK_AWAY : churn_member_info MEMBER INSERT!! M_ID(%s)",uVar2);
    STBreakAwayMemberData::clear((STBreakAwayMemberData *)(param_1 + 0x3f18));
    memcpy(param_1 + 0x3f1c,local_5f,0x1f);
    return 1;
  }
  cVar1 = MySQL::fetch(local_18);
  if (cVar1 != '\x01') {
    uVar2 = NumberToString(*(uint *)(param_1 + 0xc0),0);
    cMyTrace::cMyTrace(local_30,"bool DB_Login::getBreakAwayMemberData(SIG_LOGIN_DATA*)",0x309a,5);
    cMyTrace::operator()(local_30,"BREAK_AWAY : churn_member_info NO MEMBER USER!! M_ID(%s)",uVar2);
    return 0;
  }
  cVar1 = MySQL::get_int(local_18,0,(int *)(param_1 + 0x3f18));
  if (cVar1 != '\x01') {
    return 0;
  }
  cVar1 = MySQL::get_str(local_18,1,(char *)(param_1 + 0x3f1c),0x1f);
  if (cVar1 != '\x01') {
    return 0;
  }
  if (param_1[0x3f1c] == (SIG_LOGIN_DATA)0x0) {
    uVar2 = NumberToString(*(uint *)(param_1 + 0xc0),0);
    LogManager::logFormat
              (1,"DBThread.cpp","bool DB_Login::getBreakAwayMemberData(SIG_LOGIN_DATA*)",0x30ab,
               "BREAK_AWAY : ABNOMAL PLAY_INFO DATA!! M_ID(%s)",uVar2);
    return 0;
  }
  cVar1 = MySQL::get_uint(local_18,2,(uint *)(param_1 + 0x3f3c));
  if (cVar1 != '\x01') {
    return 0;
  }
  cVar1 = MySQL::get_uint(local_18,3,(uint *)(param_1 + 0x3f40));
  if (cVar1 == '\x01') {
    cVar1 = MySQL::get_int(local_18,4,(int *)(param_1 + 0x3f54));
    if (cVar1 != '\x01') {
      return 0;
    }
    cVar1 = MySQL::get_uint(local_18,5,(uint *)(param_1 + 0x3f50));
    if (cVar1 != '\x01') {
      return 0;
    }
    cVar1 = MySQL::get_int(local_18,6,(int *)(param_1 + 0x3f48));
    if (cVar1 != '\x01') {
      return 0;
    }
    cVar1 = MySQL::get_uint(local_18,7,(uint *)(param_1 + 0x3f44));
    if (cVar1 == '\x01') {
      cVar1 = MySQL::get_uint(local_18,8,(uint *)(param_1 + 0x3f4c));
      if (cVar1 != '\x01') {
        return 0;
      }
      if (*(int *)(param_1 + 0x3f3c) != 0) {
        local_14 = getPrevScheduleTime(0,*(long *)(param_1 + 0x3f3c));
        iVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        local_20[0] = (iVar3 - local_14) / 0x15180;
        local_20[1] = 0;
        psVar5 = std::max<size_t>(local_20 + 1,local_20);
        local_10 = *psVar5;
        if ((local_10 != 0) && (*(int *)(param_1 + 0x3f54) != 0)) {
          *(undefined4 *)(param_1 + 0x3f54) = 0;
          uVar2 = NumberToString(*(uint *)(param_1 + 0xc0),0);
          MySQL::set_query(local_18,"upDate churn_member_info set luck_point=%d where m_id=%s",
                           *(undefined4 *)(param_1 + 0x3f54),uVar2);
          cVar1 = MySQL::exec(local_18,true);
          if ((cVar1 == '\x01') && (lVar9 = MySQL::getAffectedRowCount(local_18), lVar9 != 0)) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          if (bVar8) {
            LogManager::logFormat
                      (1,"DBThread.cpp","bool DB_Login::getBreakAwayMemberData(SIG_LOGIN_DATA*)",
                       0x30d1,"BREAK_AWAY : LUCK POINT UPDATE ERROR!!");
            return 0;
          }
        }
      }
      if (*(int *)(param_1 + 0x3f4c) != 0) {
        uVar6 = *(uint *)(param_1 + 0x3f4c);
        uVar7 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        if ((uVar6 < uVar7) &&
           ((*(int *)(param_1 + 0x3f3c) == *(int *)(param_1 + 0x3f40) ||
            (*(int *)(param_1 + 0x3f3c) == *(int *)(param_1 + 0x3f44))))) {
          bVar8 = true;
        }
        else {
          bVar8 = false;
        }
        if (bVar8) {
          *(undefined4 *)(param_1 + 0x3f48) = 0xffffffff;
          *(undefined4 *)(param_1 + 0x3f4c) = 0;
          MySQL::set_query(local_18,
                           "upDate churn_member_info set add_info=%d, quest_time=0 where m_id=%u",
                           *(undefined4 *)(param_1 + 0x3f48),*(undefined4 *)(param_1 + 0xc0));
          cVar1 = MySQL::exec(local_18,true);
          if ((cVar1 == '\x01') && (lVar9 = MySQL::getAffectedRowCount(local_18), lVar9 != 0)) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          if (bVar8) {
            LogManager::logFormat
                      (1,"DBThread.cpp","bool DB_Login::getBreakAwayMemberData(SIG_LOGIN_DATA*)",
                       0x30e6,"BREAK_AWAY : ADD INFO UPDATE ERROR!!");
            return 0;
          }
        }
      }
      return 1;
    }
    return 0;
  }
  return 0;
}
```
