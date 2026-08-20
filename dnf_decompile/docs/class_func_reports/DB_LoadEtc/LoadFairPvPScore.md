# LoadFairPvPScore

`_ZN10DB_LoadEtc16LoadFairPvPScoreEP12SIG_LOAD_ETC`

`DB_LoadEtc::LoadFairPvPScore(SIG_LOAD_ETC*)`

| 类 | 地址 |
|---|---|
| `DB_LoadEtc` | `0x08404290` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08404290  _ZN10DB_LoadEtc16LoadFairPvPScoreEP12SIG_LOAD_ETC
#           DB_LoadEtc::LoadFairPvPScore(SIG_LOAD_ETC*)
# range [0x08404290, 0x08404a67]
08404290 +0x000:  push   %ebp
08404291 +0x001:  mov    %esp,%ebp
08404293 +0x003:  push   %ebx
08404294 +0x004:  sub    $0x104,%esp
0840429a +0x00a:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0840429f +0x00f:  movl   $0x0,0x8(%esp)
084042a7 +0x017:  movl   $0x3,0x4(%esp)
084042af +0x01f:  mov    %eax,(%esp)
084042b2 +0x022:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084042b7 +0x027:  mov    %eax,-0x14(%ebp)
084042ba +0x02a:  mov    0xc(%ebp),%eax
084042bd +0x02d:  mov    0x4(%eax),%eax
084042c0 +0x030:  mov    %eax,0x8(%esp)
084042c4 +0x034:  movl   $"seLect private_win,private_lose,private_draw,relay_battle_win, relay_battle_lose, relay_battle_draw,relay_battle_2kill, relay_battle_3kill, successive_win, max_successive_win, job_score,daily_play_count, unix_timestamp(last_play_time), give_item from fair_pvp_score where charac_no=%u",0x4(%esp)
084042cc +0x03c:  mov    -0x14(%ebp),%eax
084042cf +0x03f:  mov    %eax,(%esp)
084042d2 +0x042:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084042d7 +0x047:  movl   $0x1,0x4(%esp)
084042df +0x04f:  mov    -0x14(%ebp),%eax
084042e2 +0x052:  mov    %eax,(%esp)
084042e5 +0x055:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084042ea +0x05a:  mov    %al,-0x15(%ebp)
084042ed +0x05d:  movzbl -0x15(%ebp),%eax
084042f1 +0x061:  xor    $0x1,%eax
084042f4 +0x064:  test   %al,%al
084042f6 +0x066:  je     08404348 <+0xb8>
084042f8 +0x068:  mov    0xc(%ebp),%eax
084042fb +0x06b:  mov    0x4(%eax),%ebx
084042fe +0x06e:  movl   $0x5,0xc(%esp)
08404306 +0x076:  movl   $0x1618,0x8(%esp)
0840430e +0x07e:  movl   $&_ZZN10DB_LoadEtc16LoadFairPvPScoreEP12SIG_LOAD_ETCE19__PRETTY_FUNCTION__,0x4(%esp)
08404316 +0x086:  lea    -0xe8(%ebp),%eax
0840431c +0x08c:  mov    %eax,(%esp)
0840431f +0x08f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08404324 +0x094:  mov    %ebx,0x8(%esp)
08404328 +0x098:  movl   $"DB_LoadSkill::LoadFairPvPScore, exec() ERROR charac_no=%u",0x4(%esp)
08404330 +0x0a0:  lea    -0xe8(%ebp),%eax
08404336 +0x0a6:  mov    %eax,(%esp)
08404339 +0x0a9:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840433e +0x0ae:  mov    $0x0,%eax
08404343 +0x0b3:  jmp    08404a5f <+0x7cf>
08404348 +0x0b8:  mov    -0x14(%ebp),%eax
0840434b +0x0bb:  mov    %eax,(%esp)
0840434e +0x0be:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08404353 +0x0c3:  test   %eax,%eax
08404355 +0x0c5:  sete   %al
08404358 +0x0c8:  test   %al,%al
0840435a +0x0ca:  je     084043f8 <+0x168>
08404360 +0x0d0:  mov    0xc(%ebp),%eax
08404363 +0x0d3:  mov    0x4(%eax),%eax
08404366 +0x0d6:  mov    %eax,0x8(%esp)
0840436a +0x0da:  movl   $"inSert into fair_pvp_score (charac_no) values(%u)",0x4(%esp)
08404372 +0x0e2:  mov    -0x14(%ebp),%eax
08404375 +0x0e5:  mov    %eax,(%esp)
08404378 +0x0e8:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0840437d +0x0ed:  movl   $0x1,0x4(%esp)
08404385 +0x0f5:  mov    -0x14(%ebp),%eax
08404388 +0x0f8:  mov    %eax,(%esp)
0840438b +0x0fb:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08404390 +0x100:  mov    %al,-0x15(%ebp)
08404393 +0x103:  movzbl -0x15(%ebp),%eax
08404397 +0x107:  xor    $0x1,%eax
0840439a +0x10a:  test   %al,%al
0840439c +0x10c:  je     084043ee <+0x15e>
0840439e +0x10e:  mov    0xc(%ebp),%eax
084043a1 +0x111:  mov    0x4(%eax),%ebx
084043a4 +0x114:  movl   $0x5,0xc(%esp)
084043ac +0x11c:  movl   $0x1625,0x8(%esp)
084043b4 +0x124:  movl   $&_ZZN10DB_LoadEtc16LoadFairPvPScoreEP12SIG_LOAD_ETCE19__PRETTY_FUNCTION__,0x4(%esp)
084043bc +0x12c:  lea    -0xd8(%ebp),%eax
084043c2 +0x132:  mov    %eax,(%esp)
084043c5 +0x135:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084043ca +0x13a:  mov    %ebx,0x8(%esp)
084043ce +0x13e:  movl   $"DB_LoadEtc::LoadFairPvPScore insert, exec() ERROR charac_no=%u",0x4(%esp)
084043d6 +0x146:  lea    -0xd8(%ebp),%eax
084043dc +0x14c:  mov    %eax,(%esp)
084043df +0x14f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084043e4 +0x154:  mov    $0x0,%eax
084043e9 +0x159:  jmp    08404a5f <+0x7cf>
084043ee +0x15e:  mov    $0x1,%eax
084043f3 +0x163:  jmp    08404a5f <+0x7cf>
084043f8 +0x168:  mov    -0x14(%ebp),%eax
084043fb +0x16b:  mov    %eax,(%esp)
084043fe +0x16e:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08404403 +0x173:  mov    %al,-0x15(%ebp)
08404406 +0x176:  movzbl -0x15(%ebp),%eax
0840440a +0x17a:  xor    $0x1,%eax
0840440d +0x17d:  test   %al,%al
0840440f +0x17f:  je     08404461 <+0x1d1>
08404411 +0x181:  mov    0xc(%ebp),%eax
08404414 +0x184:  mov    0x4(%eax),%ebx
08404417 +0x187:  movl   $0x5,0xc(%esp)
0840441f +0x18f:  movl   $0x162f,0x8(%esp)
08404427 +0x197:  movl   $&_ZZN10DB_LoadEtc16LoadFairPvPScoreEP12SIG_LOAD_ETCE19__PRETTY_FUNCTION__,0x4(%esp)
0840442f +0x19f:  lea    -0xc8(%ebp),%eax
08404435 +0x1a5:  mov    %eax,(%esp)
08404438 +0x1a8:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840443d +0x1ad:  mov    %ebx,0x8(%esp)
08404441 +0x1b1:  movl   $"DB_LoadEtc::LoadFairPvPScore, fetch() ERROR charac_no=%u",0x4(%esp)
08404449 +0x1b9:  lea    -0xc8(%ebp),%eax
0840444f +0x1bf:  mov    %eax,(%esp)
08404452 +0x1c2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08404457 +0x1c7:  mov    $0x0,%eax
0840445c +0x1cc:  jmp    08404a5f <+0x7cf>
08404461 +0x1d1:  movl   $0x0,-0x10(%ebp)
08404468 +0x1d8:  movl   $0x0,-0xc(%ebp)
0840446f +0x1df:  jmp    0840463a <+0x3aa>
08404474 +0x1e4:  mov    -0xc(%ebp),%edx
08404477 +0x1e7:  mov    %edx,%eax
08404479 +0x1e9:  add    %eax,%eax
0840447b +0x1eb:  add    %edx,%eax
0840447d +0x1ed:  shl    $0x2,%eax
08404480 +0x1f0:  add    $0xcf10,%eax
08404485 +0x1f5:  add    0xc(%ebp),%eax
08404488 +0x1f8:  lea    0x13(%eax),%edx
0840448b +0x1fb:  mov    -0x10(%ebp),%eax
0840448e +0x1fe:  addl   $0x1,-0x10(%ebp)
08404492 +0x202:  mov    %edx,0x8(%esp)
08404496 +0x206:  mov    %eax,0x4(%esp)
0840449a +0x20a:  mov    -0x14(%ebp),%eax
0840449d +0x20d:  mov    %eax,(%esp)
084044a0 +0x210:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
084044a5 +0x215:  mov    %al,-0x15(%ebp)
084044a8 +0x218:  movzbl -0x15(%ebp),%eax
084044ac +0x21c:  xor    $0x1,%eax
084044af +0x21f:  test   %al,%al
084044b1 +0x221:  je     0840450a <+0x27a>
084044b3 +0x223:  mov    0xc(%ebp),%eax
084044b6 +0x226:  mov    0x4(%eax),%ebx
084044b9 +0x229:  movl   $0x5,0xc(%esp)
084044c1 +0x231:  movl   $0x1638,0x8(%esp)
084044c9 +0x239:  movl   $&_ZZN10DB_LoadEtc16LoadFairPvPScoreEP12SIG_LOAD_ETCE19__PRETTY_FUNCTION__,0x4(%esp)
084044d1 +0x241:  lea    -0xb8(%ebp),%eax
084044d7 +0x247:  mov    %eax,(%esp)
084044da +0x24a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084044df +0x24f:  mov    %ebx,0xc(%esp)
084044e3 +0x253:  mov    -0x10(%ebp),%eax
084044e6 +0x256:  mov    %eax,0x8(%esp)
084044ea +0x25a:  movl   $"DB_LoadEtc::LoadFairPvPScore, get(%d) ERROR charac_no=%u",0x4(%esp)
084044f2 +0x262:  lea    -0xb8(%ebp),%eax
084044f8 +0x268:  mov    %eax,(%esp)
084044fb +0x26b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08404500 +0x270:  mov    $0x0,%eax
08404505 +0x275:  jmp    08404a5f <+0x7cf>
0840450a +0x27a:  mov    -0xc(%ebp),%edx
0840450d +0x27d:  mov    %edx,%eax
0840450f +0x27f:  add    %eax,%eax
08404511 +0x281:  add    %edx,%eax
08404513 +0x283:  shl    $0x2,%eax
08404516 +0x286:  add    $0xcf10,%eax
0840451b +0x28b:  add    0xc(%ebp),%eax
0840451e +0x28e:  lea    0x17(%eax),%edx
08404521 +0x291:  mov    -0x10(%ebp),%eax
08404524 +0x294:  addl   $0x1,-0x10(%ebp)
08404528 +0x298:  mov    %edx,0x8(%esp)
0840452c +0x29c:  mov    %eax,0x4(%esp)
08404530 +0x2a0:  mov    -0x14(%ebp),%eax
08404533 +0x2a3:  mov    %eax,(%esp)
08404536 +0x2a6:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0840453b +0x2ab:  mov    %al,-0x15(%ebp)
0840453e +0x2ae:  movzbl -0x15(%ebp),%eax
08404542 +0x2b2:  xor    $0x1,%eax
08404545 +0x2b5:  test   %al,%al
08404547 +0x2b7:  je     084045a0 <+0x310>
08404549 +0x2b9:  mov    0xc(%ebp),%eax
0840454c +0x2bc:  mov    0x4(%eax),%ebx
0840454f +0x2bf:  movl   $0x5,0xc(%esp)
08404557 +0x2c7:  movl   $0x163f,0x8(%esp)
0840455f +0x2cf:  movl   $&_ZZN10DB_LoadEtc16LoadFairPvPScoreEP12SIG_LOAD_ETCE19__PRETTY_FUNCTION__,0x4(%esp)
08404567 +0x2d7:  lea    -0xa8(%ebp),%eax
0840456d +0x2dd:  mov    %eax,(%esp)
08404570 +0x2e0:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08404575 +0x2e5:  mov    %ebx,0xc(%esp)
08404579 +0x2e9:  mov    -0x10(%ebp),%eax
0840457c +0x2ec:  mov    %eax,0x8(%esp)
08404580 +0x2f0:  movl   $"DB_LoadEtc::LoadFairPvPScore, get(%d) ERROR charac_no=%u",0x4(%esp)
08404588 +0x2f8:  lea    -0xa8(%ebp),%eax
0840458e +0x2fe:  mov    %eax,(%esp)
08404591 +0x301:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08404596 +0x306:  mov    $0x0,%eax
0840459b +0x30b:  jmp    08404a5f <+0x7cf>
084045a0 +0x310:  mov    -0xc(%ebp),%edx
084045a3 +0x313:  mov    %edx,%eax
084045a5 +0x315:  add    %eax,%eax
084045a7 +0x317:  add    %edx,%eax
084045a9 +0x319:  shl    $0x2,%eax
084045ac +0x31c:  add    $0xcf10,%eax
084045b1 +0x321:  add    0xc(%ebp),%eax
084045b4 +0x324:  lea    0x1b(%eax),%edx
084045b7 +0x327:  mov    -0x10(%ebp),%eax
084045ba +0x32a:  addl   $0x1,-0x10(%ebp)
084045be +0x32e:  mov    %edx,0x8(%esp)
084045c2 +0x332:  mov    %eax,0x4(%esp)
084045c6 +0x336:  mov    -0x14(%ebp),%eax
084045c9 +0x339:  mov    %eax,(%esp)
084045cc +0x33c:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
084045d1 +0x341:  mov    %al,-0x15(%ebp)
084045d4 +0x344:  movzbl -0x15(%ebp),%eax
084045d8 +0x348:  xor    $0x1,%eax
084045db +0x34b:  test   %al,%al
084045dd +0x34d:  je     08404636 <+0x3a6>
084045df +0x34f:  mov    0xc(%ebp),%eax
084045e2 +0x352:  mov    0x4(%eax),%ebx
084045e5 +0x355:  movl   $0x5,0xc(%esp)
084045ed +0x35d:  movl   $0x1646,0x8(%esp)
084045f5 +0x365:  movl   $&_ZZN10DB_LoadEtc16LoadFairPvPScoreEP12SIG_LOAD_ETCE19__PRETTY_FUNCTION__,0x4(%esp)
084045fd +0x36d:  lea    -0x98(%ebp),%eax
08404603 +0x373:  mov    %eax,(%esp)
08404606 +0x376:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840460b +0x37b:  mov    %ebx,0xc(%esp)
0840460f +0x37f:  mov    -0x10(%ebp),%eax
08404612 +0x382:  mov    %eax,0x8(%esp)
08404616 +0x386:  movl   $"DB_LoadEtc::LoadFairPvPScore, get(%d) ERROR charac_no=%u",0x4(%esp)
0840461e +0x38e:  lea    -0x98(%ebp),%eax
08404624 +0x394:  mov    %eax,(%esp)
08404627 +0x397:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840462c +0x39c:  mov    $0x0,%eax
08404631 +0x3a1:  jmp    08404a5f <+0x7cf>
08404636 +0x3a6:  addl   $0x1,-0xc(%ebp)
0840463a +0x3aa:  cmpl   $0x1,-0xc(%ebp)
0840463e +0x3ae:  setle  %al
08404641 +0x3b1:  test   %al,%al
08404643 +0x3b3:  jne    08404474 <+0x1e4>
08404649 +0x3b9:  mov    0xc(%ebp),%eax
0840464c +0x3bc:  lea    0xcf3b(%eax),%edx
08404652 +0x3c2:  mov    -0x10(%ebp),%eax
08404655 +0x3c5:  addl   $0x1,-0x10(%ebp)
08404659 +0x3c9:  mov    %edx,0x8(%esp)
0840465d +0x3cd:  mov    %eax,0x4(%esp)
08404661 +0x3d1:  mov    -0x14(%ebp),%eax
08404664 +0x3d4:  mov    %eax,(%esp)
08404667 +0x3d7:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0840466c +0x3dc:  mov    %al,-0x15(%ebp)
0840466f +0x3df:  movzbl -0x15(%ebp),%eax
08404673 +0x3e3:  xor    $0x1,%eax
08404676 +0x3e6:  test   %al,%al
08404678 +0x3e8:  je     084046d1 <+0x441>
0840467a +0x3ea:  mov    0xc(%ebp),%eax
0840467d +0x3ed:  mov    0x4(%eax),%ebx
08404680 +0x3f0:  movl   $0x5,0xc(%esp)
08404688 +0x3f8:  movl   $0x1667,0x8(%esp)
08404690 +0x400:  movl   $&_ZZN10DB_LoadEtc16LoadFairPvPScoreEP12SIG_LOAD_ETCE19__PRETTY_FUNCTION__,0x4(%esp)
08404698 +0x408:  lea    -0x88(%ebp),%eax
0840469e +0x40e:  mov    %eax,(%esp)
084046a1 +0x411:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084046a6 +0x416:  mov    %ebx,0xc(%esp)
084046aa +0x41a:  mov    -0x10(%ebp),%eax
084046ad +0x41d:  mov    %eax,0x8(%esp)
084046b1 +0x421:  movl   $"DB_LoadEtc::LoadFairPvPScore, get(%d) ERROR charac_no=%u",0x4(%esp)
084046b9 +0x429:  lea    -0x88(%ebp),%eax
084046bf +0x42f:  mov    %eax,(%esp)
084046c2 +0x432:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084046c7 +0x437:  mov    $0x0,%eax
084046cc +0x43c:  jmp    08404a5f <+0x7cf>
084046d1 +0x441:  mov    0xc(%ebp),%eax
084046d4 +0x444:  lea    0xcf3f(%eax),%edx
084046da +0x44a:  mov    -0x10(%ebp),%eax
084046dd +0x44d:  addl   $0x1,-0x10(%ebp)
084046e1 +0x451:  mov    %edx,0x8(%esp)
084046e5 +0x455:  mov    %eax,0x4(%esp)
084046e9 +0x459:  mov    -0x14(%ebp),%eax
084046ec +0x45c:  mov    %eax,(%esp)
084046ef +0x45f:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
084046f4 +0x464:  mov    %al,-0x15(%ebp)
084046f7 +0x467:  movzbl -0x15(%ebp),%eax
084046fb +0x46b:  xor    $0x1,%eax
084046fe +0x46e:  test   %al,%al
08404700 +0x470:  je     08404753 <+0x4c3>
08404702 +0x472:  mov    0xc(%ebp),%eax
08404705 +0x475:  mov    0x4(%eax),%ebx
08404708 +0x478:  movl   $0x5,0xc(%esp)
08404710 +0x480:  movl   $0x166e,0x8(%esp)
08404718 +0x488:  movl   $&_ZZN10DB_LoadEtc16LoadFairPvPScoreEP12SIG_LOAD_ETCE19__PRETTY_FUNCTION__,0x4(%esp)
08404720 +0x490:  lea    -0x78(%ebp),%eax
08404723 +0x493:  mov    %eax,(%esp)
08404726 +0x496:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840472b +0x49b:  mov    %ebx,0xc(%esp)
0840472f +0x49f:  mov    -0x10(%ebp),%eax
08404732 +0x4a2:  mov    %eax,0x8(%esp)
08404736 +0x4a6:  movl   $"DB_LoadEtc::LoadFairPvPScore, get(%d) ERROR charac_no=%u",0x4(%esp)
0840473e +0x4ae:  lea    -0x78(%ebp),%eax
08404741 +0x4b1:  mov    %eax,(%esp)
08404744 +0x4b4:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08404749 +0x4b9:  mov    $0x0,%eax
0840474e +0x4be:  jmp    08404a5f <+0x7cf>
08404753 +0x4c3:  mov    0xc(%ebp),%eax
08404756 +0x4c6:  lea    0xcf43(%eax),%edx
0840475c +0x4cc:  mov    -0x10(%ebp),%eax
0840475f +0x4cf:  addl   $0x1,-0x10(%ebp)
08404763 +0x4d3:  mov    %edx,0x8(%esp)
08404767 +0x4d7:  mov    %eax,0x4(%esp)
0840476b +0x4db:  mov    -0x14(%ebp),%eax
0840476e +0x4de:  mov    %eax,(%esp)
08404771 +0x4e1:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08404776 +0x4e6:  mov    %al,-0x15(%ebp)
08404779 +0x4e9:  movzbl -0x15(%ebp),%eax
0840477d +0x4ed:  xor    $0x1,%eax
08404780 +0x4f0:  test   %al,%al
08404782 +0x4f2:  je     084047d5 <+0x545>
08404784 +0x4f4:  mov    0xc(%ebp),%eax
08404787 +0x4f7:  mov    0x4(%eax),%ebx
0840478a +0x4fa:  movl   $0x5,0xc(%esp)
08404792 +0x502:  movl   $0x1675,0x8(%esp)
0840479a +0x50a:  movl   $&_ZZN10DB_LoadEtc16LoadFairPvPScoreEP12SIG_LOAD_ETCE19__PRETTY_FUNCTION__,0x4(%esp)
084047a2 +0x512:  lea    -0x68(%ebp),%eax
084047a5 +0x515:  mov    %eax,(%esp)
084047a8 +0x518:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084047ad +0x51d:  mov    %ebx,0xc(%esp)
084047b1 +0x521:  mov    -0x10(%ebp),%eax
084047b4 +0x524:  mov    %eax,0x8(%esp)
084047b8 +0x528:  movl   $"DB_LoadEtc::LoadFairPvPScore, get(%d) ERROR charac_no=%u",0x4(%esp)
084047c0 +0x530:  lea    -0x68(%ebp),%eax
084047c3 +0x533:  mov    %eax,(%esp)
084047c6 +0x536:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084047cb +0x53b:  mov    $0x0,%eax
084047d0 +0x540:  jmp    08404a5f <+0x7cf>
084047d5 +0x545:  mov    0xc(%ebp),%eax
084047d8 +0x548:  lea    0xcf47(%eax),%edx
084047de +0x54e:  mov    -0x10(%ebp),%eax
084047e1 +0x551:  addl   $0x1,-0x10(%ebp)
084047e5 +0x555:  mov    %edx,0x8(%esp)
084047e9 +0x559:  mov    %eax,0x4(%esp)
084047ed +0x55d:  mov    -0x14(%ebp),%eax
084047f0 +0x560:  mov    %eax,(%esp)
084047f3 +0x563:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
084047f8 +0x568:  mov    %al,-0x15(%ebp)
084047fb +0x56b:  movzbl -0x15(%ebp),%eax
084047ff +0x56f:  xor    $0x1,%eax
08404802 +0x572:  test   %al,%al
08404804 +0x574:  je     08404857 <+0x5c7>
08404806 +0x576:  mov    0xc(%ebp),%eax
08404809 +0x579:  mov    0x4(%eax),%ebx
0840480c +0x57c:  movl   $0x5,0xc(%esp)
08404814 +0x584:  movl   $0x167c,0x8(%esp)
0840481c +0x58c:  movl   $&_ZZN10DB_LoadEtc16LoadFairPvPScoreEP12SIG_LOAD_ETCE19__PRETTY_FUNCTION__,0x4(%esp)
08404824 +0x594:  lea    -0x58(%ebp),%eax
08404827 +0x597:  mov    %eax,(%esp)
0840482a +0x59a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840482f +0x59f:  mov    %ebx,0xc(%esp)
08404833 +0x5a3:  mov    -0x10(%ebp),%eax
08404836 +0x5a6:  mov    %eax,0x8(%esp)
0840483a +0x5aa:  movl   $"DB_LoadEtc::LoadFairPvPScore, get(%d) ERROR charac_no=%u",0x4(%esp)
08404842 +0x5b2:  lea    -0x58(%ebp),%eax
08404845 +0x5b5:  mov    %eax,(%esp)
08404848 +0x5b8:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840484d +0x5bd:  mov    $0x0,%eax
08404852 +0x5c2:  jmp    08404a5f <+0x7cf>
08404857 +0x5c7:  mov    0xc(%ebp),%eax
0840485a +0x5ca:  add    $0xcf4b,%eax
0840485f +0x5cf:  mov    %eax,%edx
08404861 +0x5d1:  mov    -0x10(%ebp),%eax
08404864 +0x5d4:  addl   $0x1,-0x10(%ebp)
08404868 +0x5d8:  movl   $0x0,0x10(%esp)
08404870 +0x5e0:  movl   $0x650,0xc(%esp)
08404878 +0x5e8:  mov    %edx,0x8(%esp)
0840487c +0x5ec:  mov    %eax,0x4(%esp)
08404880 +0x5f0:  mov    -0x14(%ebp),%eax
08404883 +0x5f3:  mov    %eax,(%esp)
08404886 +0x5f6:  call   083fbc79 <_Z24get_compressed_blob_dataP5MySQLiPcii>  ; get_compressed_blob_data(MySQL*, int, char*, int, int)
0840488b +0x5fb:  xor    $0x1,%eax
0840488e +0x5fe:  test   %al,%al
08404890 +0x600:  je     0840489c <+0x60c>
08404892 +0x602:  mov    $0x0,%eax
08404897 +0x607:  jmp    08404a5f <+0x7cf>
0840489c +0x60c:  mov    0xc(%ebp),%eax
0840489f +0x60f:  lea    0xd59b(%eax),%edx
084048a5 +0x615:  mov    -0x10(%ebp),%eax
084048a8 +0x618:  addl   $0x1,-0x10(%ebp)
084048ac +0x61c:  mov    %edx,0x8(%esp)
084048b0 +0x620:  mov    %eax,0x4(%esp)
084048b4 +0x624:  mov    -0x14(%ebp),%eax
084048b7 +0x627:  mov    %eax,(%esp)
084048ba +0x62a:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
084048bf +0x62f:  mov    %al,-0x15(%ebp)
084048c2 +0x632:  movzbl -0x15(%ebp),%eax
084048c6 +0x636:  xor    $0x1,%eax
084048c9 +0x639:  test   %al,%al
084048cb +0x63b:  je     0840491e <+0x68e>
084048cd +0x63d:  mov    0xc(%ebp),%eax
084048d0 +0x640:  mov    0x4(%eax),%ebx
084048d3 +0x643:  movl   $0x5,0xc(%esp)
084048db +0x64b:  movl   $0x1689,0x8(%esp)
084048e3 +0x653:  movl   $&_ZZN10DB_LoadEtc16LoadFairPvPScoreEP12SIG_LOAD_ETCE19__PRETTY_FUNCTION__,0x4(%esp)
084048eb +0x65b:  lea    -0x48(%ebp),%eax
084048ee +0x65e:  mov    %eax,(%esp)
084048f1 +0x661:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084048f6 +0x666:  mov    %ebx,0xc(%esp)
084048fa +0x66a:  mov    -0x10(%ebp),%eax
084048fd +0x66d:  mov    %eax,0x8(%esp)
08404901 +0x671:  movl   $"DB_LoadEtc::LoadFairPvPScore, get(%d) ERROR charac_no=%u",0x4(%esp)
08404909 +0x679:  lea    -0x48(%ebp),%eax
0840490c +0x67c:  mov    %eax,(%esp)
0840490f +0x67f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08404914 +0x684:  mov    $0x0,%eax
08404919 +0x689:  jmp    08404a5f <+0x7cf>
0840491e +0x68e:  mov    0xc(%ebp),%eax
08404921 +0x691:  lea    0xd59f(%eax),%edx
08404927 +0x697:  mov    -0x10(%ebp),%eax
0840492a +0x69a:  addl   $0x1,-0x10(%ebp)
0840492e +0x69e:  mov    %edx,0x8(%esp)
08404932 +0x6a2:  mov    %eax,0x4(%esp)
08404936 +0x6a6:  mov    -0x14(%ebp),%eax
08404939 +0x6a9:  mov    %eax,(%esp)
0840493c +0x6ac:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08404941 +0x6b1:  mov    %al,-0x15(%ebp)
08404944 +0x6b4:  movzbl -0x15(%ebp),%eax
08404948 +0x6b8:  xor    $0x1,%eax
0840494b +0x6bb:  test   %al,%al
0840494d +0x6bd:  je     084049a0 <+0x710>
0840494f +0x6bf:  mov    0xc(%ebp),%eax
08404952 +0x6c2:  mov    0x4(%eax),%ebx
08404955 +0x6c5:  movl   $0x5,0xc(%esp)
0840495d +0x6cd:  movl   $0x1690,0x8(%esp)
08404965 +0x6d5:  movl   $&_ZZN10DB_LoadEtc16LoadFairPvPScoreEP12SIG_LOAD_ETCE19__PRETTY_FUNCTION__,0x4(%esp)
0840496d +0x6dd:  lea    -0x38(%ebp),%eax
08404970 +0x6e0:  mov    %eax,(%esp)
08404973 +0x6e3:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08404978 +0x6e8:  mov    %ebx,0xc(%esp)
0840497c +0x6ec:  mov    -0x10(%ebp),%eax
0840497f +0x6ef:  mov    %eax,0x8(%esp)
08404983 +0x6f3:  movl   $"DB_LoadEtc::LoadFairPvPScore, get(%d) ERROR charac_no=%u",0x4(%esp)
0840498b +0x6fb:  lea    -0x38(%ebp),%eax
0840498e +0x6fe:  mov    %eax,(%esp)
08404991 +0x701:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08404996 +0x706:  mov    $0x0,%eax
0840499b +0x70b:  jmp    08404a5f <+0x7cf>
084049a0 +0x710:  mov    0xc(%ebp),%eax
084049a3 +0x713:  mov    0xd59f(%eax),%ebx
084049a9 +0x719:  movl   $0x0,0x8(%esp)
084049b1 +0x721:  movl   $0x0,0x4(%esp)
084049b9 +0x729:  movl   $0x6,(%esp)
084049c0 +0x730:  call   086b1f5a <_Z22getDailyInitializeTimeiii>  ; getDailyInitializeTime(int, int, int)
084049c5 +0x735:  cmp    %eax,%ebx
084049c7 +0x737:  setl   %al
084049ca +0x73a:  test   %al,%al
084049cc +0x73c:  je     084049db <+0x74b>
084049ce +0x73e:  mov    0xc(%ebp),%eax
084049d1 +0x741:  movl   $0x0,0xd59b(%eax)
084049db +0x74b:  mov    0xc(%ebp),%eax
084049de +0x74e:  lea    0xd5a3(%eax),%edx
084049e4 +0x754:  mov    -0x10(%ebp),%eax
084049e7 +0x757:  addl   $0x1,-0x10(%ebp)
084049eb +0x75b:  mov    %edx,0x8(%esp)
084049ef +0x75f:  mov    %eax,0x4(%esp)
084049f3 +0x763:  mov    -0x14(%ebp),%eax
084049f6 +0x766:  mov    %eax,(%esp)
084049f9 +0x769:  call   080fdeba <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1e6>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1e6
084049fe +0x76e:  mov    %al,-0x15(%ebp)
08404a01 +0x771:  movzbl -0x15(%ebp),%eax
08404a05 +0x775:  xor    $0x1,%eax
08404a08 +0x778:  test   %al,%al
08404a0a +0x77a:  je     08404a5a <+0x7ca>
08404a0c +0x77c:  mov    0xc(%ebp),%eax
08404a0f +0x77f:  mov    0x4(%eax),%ebx
08404a12 +0x782:  movl   $0x5,0xc(%esp)
08404a1a +0x78a:  movl   $0x16a5,0x8(%esp)
08404a22 +0x792:  movl   $&_ZZN10DB_LoadEtc16LoadFairPvPScoreEP12SIG_LOAD_ETCE19__PRETTY_FUNCTION__,0x4(%esp)
08404a2a +0x79a:  lea    -0x28(%ebp),%eax
08404a2d +0x79d:  mov    %eax,(%esp)
08404a30 +0x7a0:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08404a35 +0x7a5:  mov    %ebx,0xc(%esp)
08404a39 +0x7a9:  mov    -0x10(%ebp),%eax
08404a3c +0x7ac:  mov    %eax,0x8(%esp)
08404a40 +0x7b0:  movl   $"DB_LoadEtc::LoadFairPvPScore, get(%d) ERROR charac_no=%u",0x4(%esp)
08404a48 +0x7b8:  lea    -0x28(%ebp),%eax
08404a4b +0x7bb:  mov    %eax,(%esp)
08404a4e +0x7be:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08404a53 +0x7c3:  mov    $0x0,%eax
08404a58 +0x7c8:  jmp    08404a5f <+0x7cf>
08404a5a +0x7ca:  mov    $0x1,%eax
08404a5f +0x7cf:  add    $0x104,%esp
08404a65 +0x7d5:  pop    %ebx
08404a66 +0x7d6:  pop    %ebp
08404a67 +0x7d7:  ret
```

## 反编译 C

```c
// DB_LoadEtc::LoadFairPvPScore @ 0x8404290

/* DB_LoadEtc::LoadFairPvPScore(SIG_LOAD_ETC*) */

undefined4 __thiscall DB_LoadEtc::LoadFairPvPScore(DB_LoadEtc *this,SIG_LOAD_ETC *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  cMyTrace local_ec [16];
  cMyTrace local_dc [16];
  cMyTrace local_cc [16];
  cMyTrace local_bc [16];
  cMyTrace local_ac [16];
  cMyTrace local_9c [16];
  cMyTrace local_8c [16];
  cMyTrace local_7c [16];
  cMyTrace local_6c [16];
  cMyTrace local_5c [16];
  cMyTrace local_4c [16];
  cMyTrace local_3c [16];
  cMyTrace local_2c [19];
  char local_19;
  MySQL *local_18;
  int local_14;
  int local_10;
  
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  MySQL::set_query(local_18,
                   "seLect private_win,private_lose,private_draw,relay_battle_win, relay_battle_lose, relay_battle_draw,relay_battle_2kill, relay_battle_3kill, successive_win, max_successive_win, job_score,daily_play_count, unix_timestamp(last_play_time), give_item from fair_pvp_score where charac_no=%u"
                   ,*(undefined4 *)(param_1 + 4));
  local_19 = MySQL::exec(local_18,true);
  if (local_19 == '\x01') {
    iVar4 = MySQL::get_n_rows(local_18);
    if (iVar4 == 0) {
      MySQL::set_query(local_18,"inSert into fair_pvp_score (charac_no) values(%u)",
                       *(undefined4 *)(param_1 + 4));
      local_19 = MySQL::exec(local_18,true);
      if (local_19 == '\x01') {
        uVar3 = 1;
      }
      else {
        uVar3 = *(undefined4 *)(param_1 + 4);
        cMyTrace::cMyTrace(local_dc,"bool DB_LoadEtc::LoadFairPvPScore(SIG_LOAD_ETC*)",0x1625,5);
        cMyTrace::operator()
                  (local_dc,"DB_LoadEtc::LoadFairPvPScore insert, exec() ERROR charac_no=%u",uVar3);
        uVar3 = 0;
      }
    }
    else {
      local_19 = MySQL::fetch(local_18);
      if (local_19 == '\x01') {
        local_14 = 0;
        for (local_10 = 0; iVar4 = local_14, local_19 = 1, local_10 < 2; local_10 = local_10 + 1) {
          local_14 = local_14 + 1;
          local_19 = MySQL::get_uint(local_18,iVar4,(uint *)(param_1 + local_10 * 0xc + 0xcf23));
          iVar4 = local_14;
          if (local_19 != '\x01') {
            uVar3 = *(undefined4 *)(param_1 + 4);
            cMyTrace::cMyTrace(local_bc,"bool DB_LoadEtc::LoadFairPvPScore(SIG_LOAD_ETC*)",0x1638,5)
            ;
            cMyTrace::operator()
                      (local_bc,"DB_LoadEtc::LoadFairPvPScore, get(%d) ERROR charac_no=%u",local_14,
                       uVar3);
            return 0;
          }
          local_14 = local_14 + 1;
          local_19 = MySQL::get_uint(local_18,iVar4,(uint *)(param_1 + local_10 * 0xc + 0xcf27));
          iVar4 = local_14;
          if (local_19 != '\x01') {
            uVar3 = *(undefined4 *)(param_1 + 4);
            cMyTrace::cMyTrace(local_ac,"bool DB_LoadEtc::LoadFairPvPScore(SIG_LOAD_ETC*)",0x163f,5)
            ;
            cMyTrace::operator()
                      (local_ac,"DB_LoadEtc::LoadFairPvPScore, get(%d) ERROR charac_no=%u",local_14,
                       uVar3);
            return 0;
          }
          local_14 = local_14 + 1;
          local_19 = MySQL::get_uint(local_18,iVar4,(uint *)(param_1 + local_10 * 0xc + 0xcf2b));
          if (local_19 != '\x01') {
            uVar3 = *(undefined4 *)(param_1 + 4);
            cMyTrace::cMyTrace(local_9c,"bool DB_LoadEtc::LoadFairPvPScore(SIG_LOAD_ETC*)",0x1646,5)
            ;
            cMyTrace::operator()
                      (local_9c,"DB_LoadEtc::LoadFairPvPScore, get(%d) ERROR charac_no=%u",local_14,
                       uVar3);
            return 0;
          }
        }
        local_14 = local_14 + 1;
        local_19 = MySQL::get_uint(local_18,iVar4,(uint *)(param_1 + 0xcf3b));
        iVar4 = local_14;
        if (local_19 == '\x01') {
          local_14 = local_14 + 1;
          local_19 = MySQL::get_uint(local_18,iVar4,(uint *)(param_1 + 0xcf3f));
          iVar4 = local_14;
          if (local_19 == '\x01') {
            local_14 = local_14 + 1;
            local_19 = MySQL::get_uint(local_18,iVar4,(uint *)(param_1 + 0xcf43));
            iVar4 = local_14;
            if (local_19 == '\x01') {
              local_14 = local_14 + 1;
              local_19 = MySQL::get_uint(local_18,iVar4,(uint *)(param_1 + 0xcf47));
              iVar4 = local_14;
              if (local_19 == '\x01') {
                local_14 = local_14 + 1;
                cVar2 = get_compressed_blob_data(local_18,iVar4,(char *)(param_1 + 0xcf4b),0x650,0);
                iVar4 = local_14;
                if (cVar2 == '\x01') {
                  local_14 = local_14 + 1;
                  local_19 = MySQL::get_uint(local_18,iVar4,(uint *)(param_1 + 0xd59b));
                  iVar4 = local_14;
                  if (local_19 == '\x01') {
                    local_14 = local_14 + 1;
                    local_19 = MySQL::get_int(local_18,iVar4,(int *)(param_1 + 0xd59f));
                    if (local_19 == '\x01') {
                      iVar4 = *(int *)(param_1 + 0xd59f);
                      iVar5 = getDailyInitializeTime(6,0,0);
                      iVar1 = local_14;
                      if (iVar4 < iVar5) {
                        *(undefined4 *)(param_1 + 0xd59b) = 0;
                      }
                      local_14 = local_14 + 1;
                      local_19 = MySQL::get_ubyte(local_18,iVar1,(uchar *)(param_1 + 0xd5a3));
                      if (local_19 == '\x01') {
                        uVar3 = 1;
                      }
                      else {
                        uVar3 = *(undefined4 *)(param_1 + 4);
                        cMyTrace::cMyTrace(local_2c,
                                           "bool DB_LoadEtc::LoadFairPvPScore(SIG_LOAD_ETC*)",0x16a5
                                           ,5);
                        cMyTrace::operator()
                                  (local_2c,
                                   "DB_LoadEtc::LoadFairPvPScore, get(%d) ERROR charac_no=%u",
                                   local_14,uVar3);
                        uVar3 = 0;
                      }
                    }
                    else {
                      uVar3 = *(undefined4 *)(param_1 + 4);
                      cMyTrace::cMyTrace(local_3c,"bool DB_LoadEtc::LoadFairPvPScore(SIG_LOAD_ETC*)"
                                         ,0x1690,5);
                      cMyTrace::operator()
                                (local_3c,"DB_LoadEtc::LoadFairPvPScore, get(%d) ERROR charac_no=%u"
                                 ,local_14,uVar3);
                      uVar3 = 0;
                    }
                  }
                  else {
                    uVar3 = *(undefined4 *)(param_1 + 4);
                    cMyTrace::cMyTrace(local_4c,"bool DB_LoadEtc::LoadFairPvPScore(SIG_LOAD_ETC*)",
                                       0x1689,5);
                    cMyTrace::operator()
                              (local_4c,"DB_LoadEtc::LoadFairPvPScore, get(%d) ERROR charac_no=%u",
                               local_14,uVar3);
                    uVar3 = 0;
                  }
                }
                else {
                  uVar3 = 0;
                }
              }
              else {
                uVar3 = *(undefined4 *)(param_1 + 4);
                cMyTrace::cMyTrace(local_5c,"bool DB_LoadEtc::LoadFairPvPScore(SIG_LOAD_ETC*)",
                                   0x167c,5);
                cMyTrace::operator()
                          (local_5c,"DB_LoadEtc::LoadFairPvPScore, get(%d) ERROR charac_no=%u",
                           local_14,uVar3);
                uVar3 = 0;
              }
            }
            else {
              uVar3 = *(undefined4 *)(param_1 + 4);
              cMyTrace::cMyTrace(local_6c,"bool DB_LoadEtc::LoadFairPvPScore(SIG_LOAD_ETC*)",0x1675,
                                 5);
              cMyTrace::operator()
                        (local_6c,"DB_LoadEtc::LoadFairPvPScore, get(%d) ERROR charac_no=%u",
                         local_14,uVar3);
              uVar3 = 0;
            }
          }
          else {
            uVar3 = *(undefined4 *)(param_1 + 4);
            cMyTrace::cMyTrace(local_7c,"bool DB_LoadEtc::LoadFairPvPScore(SIG_LOAD_ETC*)",0x166e,5)
            ;
            cMyTrace::operator()
                      (local_7c,"DB_LoadEtc::LoadFairPvPScore, get(%d) ERROR charac_no=%u",local_14,
                       uVar3);
            uVar3 = 0;
          }
        }
        else {
          uVar3 = *(undefined4 *)(param_1 + 4);
          cMyTrace::cMyTrace(local_8c,"bool DB_LoadEtc::LoadFairPvPScore(SIG_LOAD_ETC*)",0x1667,5);
          cMyTrace::operator()
                    (local_8c,"DB_LoadEtc::LoadFairPvPScore, get(%d) ERROR charac_no=%u",local_14,
                     uVar3);
          uVar3 = 0;
        }
      }
      else {
        uVar3 = *(undefined4 *)(param_1 + 4);
        cMyTrace::cMyTrace(local_cc,"bool DB_LoadEtc::LoadFairPvPScore(SIG_LOAD_ETC*)",0x162f,5);
        cMyTrace::operator()
                  (local_cc,"DB_LoadEtc::LoadFairPvPScore, fetch() ERROR charac_no=%u",uVar3);
        uVar3 = 0;
      }
    }
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 4);
    cMyTrace::cMyTrace(local_ec,"bool DB_LoadEtc::LoadFairPvPScore(SIG_LOAD_ETC*)",0x1618,5);
    cMyTrace::operator()(local_ec,"DB_LoadSkill::LoadFairPvPScore, exec() ERROR charac_no=%u",uVar3)
    ;
    uVar3 = 0;
  }
  return uVar3;
}
```
