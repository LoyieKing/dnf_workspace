# dispatch

`_ZN26DB_LoadBreakAwayRewardData8dispatchEiiP6Stream`

`DB_LoadBreakAwayRewardData::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_LoadBreakAwayRewardData` | `0x084392dc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084392dc  _ZN26DB_LoadBreakAwayRewardData8dispatchEiiP6Stream
#           DB_LoadBreakAwayRewardData::dispatch(int, int, Stream*)
# range [0x084392dc, 0x0843982b]
084392dc +0x000:  push   %ebp
084392dd +0x001:  mov    %esp,%ebp
084392df +0x003:  push   %edi
084392e0 +0x004:  push   %esi
084392e1 +0x005:  push   %ebx
084392e2 +0x006:  sub    $0xdc,%esp
084392e8 +0x00c:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084392ed +0x011:  movl   $0x0,0x8(%esp)
084392f5 +0x019:  movl   $0x6,0x4(%esp)
084392fd +0x021:  mov    %eax,(%esp)
08439300 +0x024:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08439305 +0x029:  mov    %eax,-0x24(%ebp)
08439308 +0x02c:  movl   $0x0,-0x48(%ebp)
0843930f +0x033:  movl   $0x0,-0x4c(%ebp)
08439316 +0x03a:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0843931b +0x03f:  mov    0x378(%eax),%eax
08439321 +0x045:  mov    %eax,-0x20(%ebp)
08439324 +0x048:  movl   $0x0,-0x50(%ebp)
0843932b +0x04f:  movl   $0x0,-0x54(%ebp)
08439332 +0x056:  movl   $0x0,-0x58(%ebp)
08439339 +0x05d:  movl   $0x0,-0x5c(%ebp)
08439340 +0x064:  movl   $0x0,-0x60(%ebp)
08439347 +0x06b:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0843934e +0x072:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08439353 +0x077:  mov    %eax,-0x64(%ebp)
08439356 +0x07a:  lea    -0xa0(%ebp),%eax
0843935c +0x080:  mov    %eax,0x4(%esp)
08439360 +0x084:  lea    -0x64(%ebp),%eax
08439363 +0x087:  mov    %eax,(%esp)
08439366 +0x08a:  call   0807e360 <_init+0xc58>
0843936b +0x08f:  movl   $0x0,-0x6b(%ebp)
08439372 +0x096:  movw   $0x0,-0x67(%ebp)
08439378 +0x09c:  movb   $0x0,-0x65(%ebp)
0843937c +0x0a0:  mov    -0x90(%ebp),%eax
08439382 +0x0a6:  lea    0x1(%eax),%edx
08439385 +0x0a9:  mov    -0x8c(%ebp),%eax
0843938b +0x0af:  add    $0x76c,%eax
08439390 +0x0b4:  mov    %edx,0xc(%esp)
08439394 +0x0b8:  mov    %eax,0x8(%esp)
08439398 +0x0bc:  movl   $"%d%02d",0x4(%esp)
084393a0 +0x0c4:  lea    -0x6b(%ebp),%eax
084393a3 +0x0c7:  mov    %eax,(%esp)
084393a6 +0x0ca:  call   0807e440 <_init+0xd38>
084393ab +0x0cf:  lea    -0x48(%ebp),%eax
084393ae +0x0d2:  mov    %eax,0x4(%esp)
084393b2 +0x0d6:  mov    0x14(%ebp),%eax
084393b5 +0x0d9:  mov    %eax,(%esp)
084393b8 +0x0dc:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
084393bd +0x0e1:  lea    -0x4c(%ebp),%eax
084393c0 +0x0e4:  mov    %eax,0x4(%esp)
084393c4 +0x0e8:  mov    0x14(%ebp),%eax
084393c7 +0x0eb:  mov    %eax,(%esp)
084393ca +0x0ee:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
084393cf +0x0f3:  lea    -0x50(%ebp),%eax
084393d2 +0x0f6:  mov    %eax,0x4(%esp)
084393d6 +0x0fa:  mov    0x14(%ebp),%eax
084393d9 +0x0fd:  mov    %eax,(%esp)
084393dc +0x100:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
084393e1 +0x105:  lea    -0x54(%ebp),%eax
084393e4 +0x108:  mov    %eax,0x4(%esp)
084393e8 +0x10c:  mov    0x14(%ebp),%eax
084393eb +0x10f:  mov    %eax,(%esp)
084393ee +0x112:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
084393f3 +0x117:  lea    -0x58(%ebp),%eax
084393f6 +0x11a:  mov    %eax,0x4(%esp)
084393fa +0x11e:  mov    0x14(%ebp),%eax
084393fd +0x121:  mov    %eax,(%esp)
08439400 +0x124:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
08439405 +0x129:  lea    -0x5c(%ebp),%eax
08439408 +0x12c:  mov    %eax,0x4(%esp)
0843940c +0x130:  mov    0x14(%ebp),%eax
0843940f +0x133:  mov    %eax,(%esp)
08439412 +0x136:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
08439417 +0x13b:  lea    -0x60(%ebp),%eax
0843941a +0x13e:  mov    %eax,0x4(%esp)
0843941e +0x142:  mov    0x14(%ebp),%eax
08439421 +0x145:  mov    %eax,(%esp)
08439424 +0x148:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
08439429 +0x14d:  mov    -0x5c(%ebp),%eax
0843942c +0x150:  test   %eax,%eax
0843942e +0x152:  jne    08439489 <+0x1ad>
08439430 +0x154:  mov    -0x48(%ebp),%eax
08439433 +0x157:  movl   $0x0,0x4(%esp)
0843943b +0x15f:  mov    %eax,(%esp)
0843943e +0x162:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08439443 +0x167:  mov    -0x58(%ebp),%ebx
08439446 +0x16a:  mov    -0x64(%ebp),%edx
08439449 +0x16d:  lea    &_ZL14gUnicodeBuffer+0xac54(%edx),%esi
0843944f +0x173:  mov    -0x64(%ebp),%ecx
08439452 +0x176:  mov    -0x64(%ebp),%edx
08439455 +0x179:  mov    %eax,0x1c(%esp)
08439459 +0x17d:  movl   $0x3,0x18(%esp)
08439461 +0x185:  mov    %ebx,0x14(%esp)
08439465 +0x189:  mov    %esi,0x10(%esp)
08439469 +0x18d:  mov    %ecx,0xc(%esp)
0843946d +0x191:  mov    %edx,0x8(%esp)
08439471 +0x195:  movl   $"upDate churn_member_info set last_reward_time =%u, first_reward_time = %u, quest_time =%u, luck_point=%d, add_info=%d where m_id=%s",0x4(%esp)
08439479 +0x19d:  mov    -0x24(%ebp),%eax
0843947c +0x1a0:  mov    %eax,(%esp)
0843947f +0x1a3:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08439484 +0x1a8:  jmp    084395b5 <+0x2d9>
08439489 +0x1ad:  mov    -0x5c(%ebp),%eax
0843948c +0x1b0:  cmp    $0x1,%eax
0843948f +0x1b3:  jne    084394be <+0x1e2>
08439491 +0x1b5:  mov    -0x48(%ebp),%ecx
08439494 +0x1b8:  mov    -0x58(%ebp),%edx
08439497 +0x1bb:  mov    -0x64(%ebp),%eax
0843949a +0x1be:  mov    %ecx,0x10(%esp)
0843949e +0x1c2:  mov    %edx,0xc(%esp)
084394a2 +0x1c6:  mov    %eax,0x8(%esp)
084394a6 +0x1ca:  movl   $"upDate churn_member_info set last_reward_time =%u, luck_point=%d where m_id=%u",0x4(%esp)
084394ae +0x1d2:  mov    -0x24(%ebp),%eax
084394b1 +0x1d5:  mov    %eax,(%esp)
084394b4 +0x1d8:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084394b9 +0x1dd:  jmp    084395b5 <+0x2d9>
084394be +0x1e2:  mov    -0x5c(%ebp),%eax
084394c1 +0x1e5:  cmp    $0x2,%eax
084394c4 +0x1e8:  jne    0843951f <+0x243>
084394c6 +0x1ea:  mov    -0x48(%ebp),%eax
084394c9 +0x1ed:  movl   $0x0,0x4(%esp)
084394d1 +0x1f5:  mov    %eax,(%esp)
084394d4 +0x1f8:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084394d9 +0x1fd:  mov    -0x58(%ebp),%ebx
084394dc +0x200:  mov    -0x64(%ebp),%edx
084394df +0x203:  lea    &_ZL14gUnicodeBuffer+0xac54(%edx),%esi
084394e5 +0x209:  mov    -0x64(%ebp),%ecx
084394e8 +0x20c:  mov    -0x64(%ebp),%edx
084394eb +0x20f:  mov    %eax,0x1c(%esp)
084394ef +0x213:  movl   $0x3,0x18(%esp)
084394f7 +0x21b:  mov    %ebx,0x14(%esp)
084394fb +0x21f:  mov    %esi,0x10(%esp)
084394ff +0x223:  mov    %ecx,0xc(%esp)
08439503 +0x227:  mov    %edx,0x8(%esp)
08439507 +0x22b:  movl   $"upDate churn_member_info set last_reward_time =%u, second_reward_time = %u, quest_time =%u, luck_point=%d, add_info=%d where m_id=%s",0x4(%esp)
0843950f +0x233:  mov    -0x24(%ebp),%eax
08439512 +0x236:  mov    %eax,(%esp)
08439515 +0x239:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843951a +0x23e:  jmp    084395b5 <+0x2d9>
0843951f +0x243:  mov    -0x5c(%ebp),%eax
08439522 +0x246:  cmp    $0x3,%eax
08439525 +0x249:  jne    08439561 <+0x285>
08439527 +0x24b:  mov    -0x48(%ebp),%eax
0843952a +0x24e:  movl   $0x0,0x4(%esp)
08439532 +0x256:  mov    %eax,(%esp)
08439535 +0x259:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0843953a +0x25e:  mov    -0x58(%ebp),%ecx
0843953d +0x261:  mov    -0x64(%ebp),%edx
08439540 +0x264:  mov    %eax,0x10(%esp)
08439544 +0x268:  mov    %ecx,0xc(%esp)
08439548 +0x26c:  mov    %edx,0x8(%esp)
0843954c +0x270:  movl   $"upDate churn_member_info set last_reward_time =%u, luck_point=%d where m_id=%s",0x4(%esp)
08439554 +0x278:  mov    -0x24(%ebp),%eax
08439557 +0x27b:  mov    %eax,(%esp)
0843955a +0x27e:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843955f +0x283:  jmp    084395b5 <+0x2d9>
08439561 +0x285:  mov    -0x5c(%ebp),%eax
08439564 +0x288:  cmp    $0x4,%eax
08439567 +0x28b:  jne    084395ab <+0x2cf>
08439569 +0x28d:  mov    -0x48(%ebp),%eax
0843956c +0x290:  movl   $0x0,0x4(%esp)
08439574 +0x298:  mov    %eax,(%esp)
08439577 +0x29b:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0843957c +0x2a0:  mov    -0x58(%ebp),%ecx
0843957f +0x2a3:  mov    -0x64(%ebp),%edx
08439582 +0x2a6:  mov    %eax,0x14(%esp)
08439586 +0x2aa:  movl   $0xffffffff,0x10(%esp)
0843958e +0x2b2:  mov    %ecx,0xc(%esp)
08439592 +0x2b6:  mov    %edx,0x8(%esp)
08439596 +0x2ba:  movl   $"upDate churn_member_info set last_reward_time =%u, luck_point=%d, add_info=%d where m_id=%s",0x4(%esp)
0843959e +0x2c2:  mov    -0x24(%ebp),%eax
084395a1 +0x2c5:  mov    %eax,(%esp)
084395a4 +0x2c8:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084395a9 +0x2cd:  jmp    084395b5 <+0x2d9>
084395ab +0x2cf:  mov    $0x0,%ebx
084395b0 +0x2d4:  jmp    0843981f <+0x543>
084395b5 +0x2d9:  movl   $0x1,0x4(%esp)
084395bd +0x2e1:  mov    -0x24(%ebp),%eax
084395c0 +0x2e4:  mov    %eax,(%esp)
084395c3 +0x2e7:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084395c8 +0x2ec:  xor    $0x1,%eax
084395cb +0x2ef:  test   %al,%al
084395cd +0x2f1:  jne    084395e0 <+0x304>
084395cf +0x2f3:  mov    -0x24(%ebp),%eax
084395d2 +0x2f6:  mov    %eax,(%esp)
084395d5 +0x2f9:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
084395da +0x2fe:  or     %edx,%eax
084395dc +0x300:  test   %eax,%eax
084395de +0x302:  jne    084395e7 <+0x30b>
084395e0 +0x304:  mov    $0x1,%eax
084395e5 +0x309:  jmp    084395ec <+0x310>
084395e7 +0x30b:  mov    $0x0,%eax
084395ec +0x310:  test   %al,%al
084395ee +0x312:  je     08439630 <+0x354>
084395f0 +0x314:  movl   $0x5,0xc(%esp)
084395f8 +0x31c:  movl   $0x871e,0x8(%esp)
08439600 +0x324:  movl   $&_ZZN26DB_LoadBreakAwayRewardData8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
08439608 +0x32c:  lea    -0x44(%ebp),%eax
0843960b +0x32f:  mov    %eax,(%esp)
0843960e +0x332:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08439613 +0x337:  movl   $"BREAK_AWAY : ABNORMAL DB_LoadBreakAwayRewardData REWARD!!",0x4(%esp)
0843961b +0x33f:  lea    -0x44(%ebp),%eax
0843961e +0x342:  mov    %eax,(%esp)
08439621 +0x345:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08439626 +0x34a:  mov    $0x0,%ebx
0843962b +0x34f:  jmp    0843981f <+0x543>
08439630 +0x354:  mov    -0x5c(%ebp),%ebx
08439633 +0x357:  mov    -0x60(%ebp),%eax
08439636 +0x35a:  mov    %eax,-0xb8(%ebp)
0843963c +0x360:  mov    -0x58(%ebp),%eax
0843963f +0x363:  mov    %eax,-0xb4(%ebp)
08439645 +0x369:  mov    -0x54(%ebp),%eax
08439648 +0x36c:  mov    %eax,-0xb0(%ebp)
0843964e +0x372:  mov    -0x50(%ebp),%eax
08439651 +0x375:  mov    %eax,-0xac(%ebp)
08439657 +0x37b:  mov    -0x4c(%ebp),%edi
0843965a +0x37e:  mov    -0x64(%ebp),%esi
0843965d +0x381:  mov    -0x48(%ebp),%eax
08439660 +0x384:  movl   $0x0,0x4(%esp)
08439668 +0x38c:  mov    %eax,(%esp)
0843966b +0x38f:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08439670 +0x394:  mov    %eax,%edx
08439672 +0x396:  mov    %ebx,0x2c(%esp)
08439676 +0x39a:  mov    -0xb8(%ebp),%eax
0843967c +0x3a0:  mov    %eax,0x28(%esp)
08439680 +0x3a4:  mov    -0xb4(%ebp),%eax
08439686 +0x3aa:  mov    %eax,0x24(%esp)
0843968a +0x3ae:  mov    -0xb0(%ebp),%eax
08439690 +0x3b4:  mov    %eax,0x20(%esp)
08439694 +0x3b8:  mov    -0xac(%ebp),%eax
0843969a +0x3be:  mov    %eax,0x1c(%esp)
0843969e +0x3c2:  mov    %edi,0x18(%esp)
084396a2 +0x3c6:  mov    -0x20(%ebp),%eax
084396a5 +0x3c9:  mov    %eax,0x14(%esp)
084396a9 +0x3cd:  mov    %esi,0x10(%esp)
084396ad +0x3d1:  mov    %edx,0xc(%esp)
084396b1 +0x3d5:  lea    -0x6b(%ebp),%eax
084396b4 +0x3d8:  mov    %eax,0x8(%esp)
084396b8 +0x3dc:  movl   $"inSert into churn_reward_history_%s(m_id,occ_time,server_id,charac_no,item_id,add_info,luck_point,cera,reward_order) values(%s, from_unixtime(%u), %d, %u, %u, %d, %d, %u, %d)",0x4(%esp)
084396c0 +0x3e4:  mov    -0x24(%ebp),%eax
084396c3 +0x3e7:  mov    %eax,(%esp)
084396c6 +0x3ea:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084396cb +0x3ef:  movl   $0x1,0x4(%esp)
084396d3 +0x3f7:  mov    -0x24(%ebp),%eax
084396d6 +0x3fa:  mov    %eax,(%esp)
084396d9 +0x3fd:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084396de +0x402:  xor    $0x1,%eax
084396e1 +0x405:  test   %al,%al
084396e3 +0x407:  je     08439725 <+0x449>
084396e5 +0x409:  movl   $0x5,0xc(%esp)
084396ed +0x411:  movl   $0x8740,0x8(%esp)
084396f5 +0x419:  movl   $&_ZZN26DB_LoadBreakAwayRewardData8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
084396fd +0x421:  lea    -0x34(%ebp),%eax
08439700 +0x424:  mov    %eax,(%esp)
08439703 +0x427:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08439708 +0x42c:  movl   $"BREAK_AWAY : ABNORMAL DB_LoadBreakAwayRewardData LOG!!",0x4(%esp)
08439710 +0x434:  lea    -0x34(%ebp),%eax
08439713 +0x437:  mov    %eax,(%esp)
08439716 +0x43a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0843971b +0x43f:  mov    $0x0,%ebx
08439720 +0x444:  jmp    0843981f <+0x543>
08439725 +0x449:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0843972a +0x44e:  movl   $0x8745,0x8(%esp)
08439732 +0x456:  movl   $"DBThread.cpp",0x4(%esp)
0843973a +0x45e:  mov    %eax,(%esp)
0843973d +0x461:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08439742 +0x466:  movl   $0x1,0x8(%esp)
0843974a +0x46e:  mov    %eax,0x4(%esp)
0843974e +0x472:  lea    -0x74(%ebp),%eax
08439751 +0x475:  mov    %eax,(%esp)
08439754 +0x478:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08439759 +0x47d:  lea    -0x74(%ebp),%eax
0843975c +0x480:  mov    %eax,(%esp)
0843975f +0x483:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08439764 +0x488:  movl   $0x143,0x4(%esp)
0843976c +0x490:  mov    %eax,(%esp)
0843976f +0x493:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08439774 +0x498:  lea    -0x74(%ebp),%eax
08439777 +0x49b:  mov    %eax,(%esp)
0843977a +0x49e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843977f +0x4a3:  mov    0x10(%ebp),%edx
08439782 +0x4a6:  mov    %edx,0x4(%esp)
08439786 +0x4aa:  mov    %eax,(%esp)
08439789 +0x4ad:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843978e +0x4b2:  lea    -0x74(%ebp),%eax
08439791 +0x4b5:  mov    %eax,(%esp)
08439794 +0x4b8:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08439799 +0x4bd:  mov    %eax,(%esp)
0843979c +0x4c0:  call   08453752 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6368>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6368
084397a1 +0x4c5:  mov    %eax,-0x1c(%ebp)
084397a4 +0x4c8:  mov    -0x5c(%ebp),%eax
084397a7 +0x4cb:  test   %eax,%eax
084397a9 +0x4cd:  je     084397b3 <+0x4d7>
084397ab +0x4cf:  mov    -0x5c(%ebp),%eax
084397ae +0x4d2:  cmp    $0x2,%eax
084397b1 +0x4d5:  jne    084397cd <+0x4f1>
084397b3 +0x4d7:  mov    -0x5c(%ebp),%edx
084397b6 +0x4da:  mov    -0x1c(%ebp),%eax
084397b9 +0x4dd:  mov    %edx,0x4(%eax)
084397bc +0x4e0:  mov    -0x64(%ebp),%eax
084397bf +0x4e3:  add    $&_ZL14gUnicodeBuffer+0xac54,%eax
084397c4 +0x4e8:  mov    %eax,%edx
084397c6 +0x4ea:  mov    -0x1c(%ebp),%eax
084397c9 +0x4ed:  mov    %edx,(%eax)
084397cb +0x4ef:  jmp    084397d6 <+0x4fa>
084397cd +0x4f1:  mov    -0x5c(%ebp),%edx
084397d0 +0x4f4:  mov    -0x1c(%ebp),%eax
084397d3 +0x4f7:  mov    %edx,0x4(%eax)
084397d6 +0x4fa:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084397db +0x4ff:  lea    -0x74(%ebp),%edx
084397de +0x502:  mov    %edx,0x8(%esp)
084397e2 +0x506:  movl   $0x1,0x4(%esp)
084397ea +0x50e:  mov    %eax,(%esp)
084397ed +0x511:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084397f2 +0x516:  mov    $0x1,%ebx
084397f7 +0x51b:  lea    -0x74(%ebp),%eax
084397fa +0x51e:  mov    %eax,(%esp)
084397fd +0x521:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08439802 +0x526:  jmp    0843981f <+0x543>
08439804 +0x528:  mov    %edx,%ebx
08439806 +0x52a:  mov    %eax,%esi
08439808 +0x52c:  lea    -0x74(%ebp),%eax
0843980b +0x52f:  mov    %eax,(%esp)
0843980e +0x532:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08439813 +0x537:  mov    %esi,%eax
08439815 +0x539:  mov    %ebx,%edx
08439817 +0x53b:  mov    %eax,(%esp)
0843981a +0x53e:  call   08ae3750 <_Unwind_Resume>
0843981f +0x543:  mov    %ebx,%eax
08439821 +0x545:  add    $0xdc,%esp
08439827 +0x54b:  pop    %ebx
08439828 +0x54c:  pop    %esi
08439829 +0x54d:  pop    %edi
0843982a +0x54e:  pop    %ebp
0843982b +0x54f:  ret
```

## 反编译 C

```c
// DB_LoadBreakAwayRewardData::dispatch @ 0x84392dc

/* DB_LoadBreakAwayRewardData::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_LoadBreakAwayRewardData::dispatch
          (DB_LoadBreakAwayRewardData *this,int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  int iVar9;
  undefined4 uVar10;
  Stream *pSVar11;
  CStreamGuard *pCVar12;
  longlong lVar13;
  tm local_a4;
  CStreamGuard local_78 [9];
  char local_6f [7];
  int local_68;
  uint local_64;
  int local_60;
  int local_5c;
  int local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  cMyTrace local_48 [16];
  cMyTrace local_38 [16];
  MySQL *local_28;
  undefined4 local_24;
  SIG_BREAK_AWAY_PREVENT_MESSAGE *local_20;
  
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_4c = 0;
  local_50 = 0;
  iVar9 = G_CEnvironment();
  local_24 = *(undefined4 *)(iVar9 + 0x378);
  local_54 = 0;
  local_58 = 0;
  local_5c = 0;
  local_60 = 0;
  local_64 = 0;
  local_68 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  localtime_r(&local_68,&local_a4);
  local_6f[0] = '\0';
  local_6f[1] = '\0';
  local_6f[2] = '\0';
  local_6f[3] = '\0';
  local_6f[4] = '\0';
  local_6f[5] = '\0';
  local_6f[6] = 0;
  sprintf(local_6f,"%d%02d",local_a4.tm_year + 0x76c,local_a4.tm_mon + 1);
  Stream::operator>>(param_3,&local_4c);
  Stream::operator>>(param_3,&local_50);
  Stream::operator>>(param_3,&local_54);
  Stream::operator>>(param_3,&local_58);
  Stream::operator>>(param_3,&local_5c);
  Stream::operator>>(param_3,&local_60);
  Stream::operator>>(param_3,&local_64);
  if (local_60 == 0) {
    uVar10 = NumberToString(local_4c,0);
    MySQL::set_query(local_28,
                     "upDate churn_member_info set last_reward_time =%u, first_reward_time = %u, quest_time =%u, luck_point=%d, add_info=%d where m_id=%s"
                     ,local_68,local_68,local_68 + 0x15180,local_5c,3,uVar10);
  }
  else if (local_60 == 1) {
    MySQL::set_query(local_28,
                     "upDate churn_member_info set last_reward_time =%u, luck_point=%d where m_id=%u"
                     ,local_68,local_5c,local_4c);
  }
  else if (local_60 == 2) {
    uVar10 = NumberToString(local_4c,0);
    MySQL::set_query(local_28,
                     "upDate churn_member_info set last_reward_time =%u, second_reward_time = %u, quest_time =%u, luck_point=%d, add_info=%d where m_id=%s"
                     ,local_68,local_68,local_68 + 0x15180,local_5c,3,uVar10);
  }
  else if (local_60 == 3) {
    uVar10 = NumberToString(local_4c,0);
    MySQL::set_query(local_28,
                     "upDate churn_member_info set last_reward_time =%u, luck_point=%d where m_id=%s"
                     ,local_68,local_5c,uVar10);
  }
  else {
    if (local_60 != 4) {
      return 0;
    }
    uVar10 = NumberToString(local_4c,0);
    MySQL::set_query(local_28,
                     "upDate churn_member_info set last_reward_time =%u, luck_point=%d, add_info=%d where m_id=%s"
                     ,local_68,local_5c,0xffffffff,uVar10);
  }
  cVar8 = MySQL::exec(local_28,true);
  if ((cVar8 == '\x01') && (lVar13 = MySQL::getAffectedRowCount(local_28), lVar13 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  uVar7 = local_50;
  uVar6 = local_54;
  iVar5 = local_58;
  iVar4 = local_5c;
  iVar3 = local_60;
  uVar2 = local_64;
  iVar9 = local_68;
  if (bVar1) {
    cMyTrace::cMyTrace(local_48,
                       "virtual bool DB_LoadBreakAwayRewardData::dispatch(int, int, Stream*)",0x871e
                       ,5);
    cMyTrace::operator()(local_48,"BREAK_AWAY : ABNORMAL DB_LoadBreakAwayRewardData REWARD!!");
    uVar10 = 0;
  }
  else {
    uVar10 = NumberToString(local_4c,0);
    MySQL::set_query(local_28,
                     "inSert into churn_reward_history_%s(m_id,occ_time,server_id,charac_no,item_id,add_info,luck_point,cera,reward_order) values(%s, from_unixtime(%u), %d, %u, %u, %d, %d, %u, %d)"
                     ,local_6f,uVar10,iVar9,local_24,uVar7,uVar6,iVar5,iVar4,uVar2,iVar3);
    cVar8 = MySQL::exec(local_28,true);
    if (cVar8 == '\x01') {
      pSVar11 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x8745);
      CStreamGuard::CStreamGuard(local_78,pSVar11,true);
      pCVar12 = (CStreamGuard *)CStreamGuard::operator*(local_78);
                    /* try { // try from 0843976f to 084397f1 has its CatchHandler @ 08439804 */
      CStreamGuard::operator<<(pCVar12,0x143);
      pCVar12 = (CStreamGuard *)CStreamGuard::operator*(local_78);
      CStreamGuard::operator<<(pCVar12,param_2);
      pCVar12 = (CStreamGuard *)CStreamGuard::operator->(local_78);
      local_20 = CStreamGuard::GetInBuffer<SIG_BREAK_AWAY_PREVENT_MESSAGE>(pCVar12);
      if ((local_60 == 0) || (local_60 == 2)) {
        *(int *)(local_20 + 4) = local_60;
        *(int *)local_20 = local_68 + 0x15180;
      }
      else {
        *(int *)(local_20 + 4) = local_60;
      }
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_78);
      uVar10 = 1;
      CStreamGuard::~CStreamGuard(local_78);
    }
    else {
      cMyTrace::cMyTrace(local_38,
                         "virtual bool DB_LoadBreakAwayRewardData::dispatch(int, int, Stream*)",
                         0x8740,5);
      cMyTrace::operator()(local_38,"BREAK_AWAY : ABNORMAL DB_LoadBreakAwayRewardData LOG!!");
      uVar10 = 0;
    }
  }
  return uVar10;
}
```
