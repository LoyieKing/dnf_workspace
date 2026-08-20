# dispatch

`_ZN34DB_LoadAutoMarketConditionsControl8dispatchEiiP6Stream`

`DB_LoadAutoMarketConditionsControl::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_LoadAutoMarketConditionsControl` | `0x084335dc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084335dc  _ZN34DB_LoadAutoMarketConditionsControl8dispatchEiiP6Stream
#           DB_LoadAutoMarketConditionsControl::dispatch(int, int, Stream*)
# range [0x084335dc, 0x08433ad9]
084335dc +0x000:  push   %ebp
084335dd +0x001:  mov    %esp,%ebp
084335df +0x003:  push   %esi
084335e0 +0x004:  push   %ebx
084335e1 +0x005:  sub    $0xb0,%esp
084335e7 +0x00b:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084335ec +0x010:  movl   $0x0,0x8(%esp)
084335f4 +0x018:  movl   $0x2,0x4(%esp)
084335fc +0x020:  mov    %eax,(%esp)
084335ff +0x023:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08433604 +0x028:  mov    %eax,-0x18(%ebp)
08433607 +0x02b:  movb   $0x0,-0x29(%ebp)
0843360b +0x02f:  lea    -0x29(%ebp),%eax
0843360e +0x032:  mov    %eax,0x4(%esp)
08433612 +0x036:  mov    0x14(%ebp),%eax
08433615 +0x039:  mov    %eax,(%esp)
08433618 +0x03c:  call   0861c47c <_ZN6StreamrsERb>  ; Stream::operator>>(bool&)
0843361d +0x041:  movl   $0x0,-0x14(%ebp)
08433624 +0x048:  movl   $0x6c,0x8(%esp)
0843362c +0x050:  movl   $0x0,0x4(%esp)
08433634 +0x058:  lea    -0xa0(%ebp),%eax
0843363a +0x05e:  mov    %eax,(%esp)
0843363d +0x061:  call   0807dcc0 <_init+0x5b8>
08433642 +0x066:  movl   $"seLect optimum_gold_supply, over_gold from auto_market_condition_ctrl limit 1",0x4(%esp)
0843364a +0x06e:  mov    -0x18(%ebp),%eax
0843364d +0x071:  mov    %eax,(%esp)
08433650 +0x074:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08433655 +0x079:  movl   $0x1,0x4(%esp)
0843365d +0x081:  mov    -0x18(%ebp),%eax
08433660 +0x084:  mov    %eax,(%esp)
08433663 +0x087:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08433668 +0x08c:  xor    $0x1,%eax
0843366b +0x08f:  test   %al,%al
0843366d +0x091:  je     08433679 <+0x9d>
0843366f +0x093:  mov    $0x0,%ebx
08433674 +0x098:  jmp    08433acd <+0x4f1>
08433679 +0x09d:  mov    -0x18(%ebp),%eax
0843367c +0x0a0:  mov    %eax,(%esp)
0843367f +0x0a3:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08433684 +0x0a8:  mov    %eax,-0x14(%ebp)
08433687 +0x0ab:  cmpl   $0x0,-0x14(%ebp)
0843368b +0x0af:  je     08433708 <+0x12c>
0843368d +0x0b1:  mov    -0x18(%ebp),%eax
08433690 +0x0b4:  mov    %eax,(%esp)
08433693 +0x0b7:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08433698 +0x0bc:  xor    $0x1,%eax
0843369b +0x0bf:  test   %al,%al
0843369d +0x0c1:  je     084336a9 <+0xcd>
0843369f +0x0c3:  mov    $0x0,%ebx
084336a4 +0x0c8:  jmp    08433acd <+0x4f1>
084336a9 +0x0cd:  lea    -0xa0(%ebp),%eax
084336af +0x0d3:  add    $0x8,%eax
084336b2 +0x0d6:  mov    %eax,0x8(%esp)
084336b6 +0x0da:  movl   $0x0,0x4(%esp)
084336be +0x0e2:  mov    -0x18(%ebp),%eax
084336c1 +0x0e5:  mov    %eax,(%esp)
084336c4 +0x0e8:  call   081754c8 <_GLOBAL__I__ZN6Taiwan10TaiwanCashC2Ehs+0x1c>  ; global constructors keyed to Taiwan::TaiwanCash::TaiwanCash(unsigned char, short)+0x1c
084336c9 +0x0ed:  xor    $0x1,%eax
084336cc +0x0f0:  test   %al,%al
084336ce +0x0f2:  je     084336da <+0xfe>
084336d0 +0x0f4:  mov    $0x0,%ebx
084336d5 +0x0f9:  jmp    08433acd <+0x4f1>
084336da +0x0fe:  lea    -0xa0(%ebp),%eax
084336e0 +0x104:  mov    %eax,0x8(%esp)
084336e4 +0x108:  movl   $0x1,0x4(%esp)
084336ec +0x110:  mov    -0x18(%ebp),%eax
084336ef +0x113:  mov    %eax,(%esp)
084336f2 +0x116:  call   081754c8 <_GLOBAL__I__ZN6Taiwan10TaiwanCashC2Ehs+0x1c>  ; global constructors keyed to Taiwan::TaiwanCash::TaiwanCash(unsigned char, short)+0x1c
084336f7 +0x11b:  xor    $0x1,%eax
084336fa +0x11e:  test   %al,%al
084336fc +0x120:  je     08433708 <+0x12c>
084336fe +0x122:  mov    $0x0,%ebx
08433703 +0x127:  jmp    08433acd <+0x4f1>
08433708 +0x12c:  movl   $"seLect total_gold, auction_gold, optimum_gold_supply, over_gold, gold_phase, item_phase, durability_phase from auto_market_condition_ctrl_daily where occ_time >= DATE_SUB(CURDATE(), INTERVAL 1 DAY) order by occ_time limit 2",0x4(%esp)
08433710 +0x134:  mov    -0x18(%ebp),%eax
08433713 +0x137:  mov    %eax,(%esp)
08433716 +0x13a:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843371b +0x13f:  movl   $0x1,0x4(%esp)
08433723 +0x147:  mov    -0x18(%ebp),%eax
08433726 +0x14a:  mov    %eax,(%esp)
08433729 +0x14d:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843372e +0x152:  xor    $0x1,%eax
08433731 +0x155:  test   %al,%al
08433733 +0x157:  je     0843373f <+0x163>
08433735 +0x159:  mov    $0x0,%ebx
0843373a +0x15e:  jmp    08433acd <+0x4f1>
0843373f +0x163:  mov    -0x18(%ebp),%eax
08433742 +0x166:  mov    %eax,(%esp)
08433745 +0x169:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0843374a +0x16e:  mov    %eax,-0x14(%ebp)
0843374d +0x171:  cmpl   $0x2,-0x14(%ebp)
08433751 +0x175:  je     084337a0 <+0x1c4>
08433753 +0x177:  cmpl   $0x1,-0x14(%ebp)
08433757 +0x17b:  je     084337a0 <+0x1c4>
08433759 +0x17d:  movl   $0x0,0xc(%esp)
08433761 +0x185:  movl   $0x7c0c,0x8(%esp)
08433769 +0x18d:  movl   $&_ZZN34DB_LoadAutoMarketConditionsControl8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
08433771 +0x195:  lea    -0x28(%ebp),%eax
08433774 +0x198:  mov    %eax,(%esp)
08433777 +0x19b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0843377c +0x1a0:  mov    -0x14(%ebp),%eax
0843377f +0x1a3:  mov    %eax,0x8(%esp)
08433783 +0x1a7:  movl   $"DB_LoadAutoMarketConditionsControl error %d",0x4(%esp)
0843378b +0x1af:  lea    -0x28(%ebp),%eax
0843378e +0x1b2:  mov    %eax,(%esp)
08433791 +0x1b5:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08433796 +0x1ba:  mov    $0x0,%ebx
0843379b +0x1bf:  jmp    08433acd <+0x4f1>
084337a0 +0x1c4:  movl   $0x0,-0xc(%ebp)
084337a7 +0x1cb:  jmp    08433967 <+0x38b>
084337ac +0x1d0:  mov    -0x18(%ebp),%eax
084337af +0x1d3:  mov    %eax,(%esp)
084337b2 +0x1d6:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
084337b7 +0x1db:  xor    $0x1,%eax
084337ba +0x1de:  test   %al,%al
084337bc +0x1e0:  je     084337c8 <+0x1ec>
084337be +0x1e2:  mov    $0x0,%ebx
084337c3 +0x1e7:  jmp    08433acd <+0x4f1>
084337c8 +0x1ec:  mov    -0xc(%ebp),%edx
084337cb +0x1ef:  lea    -0xa0(%ebp),%eax
084337d1 +0x1f5:  imul   $0x2c,%edx,%edx
084337d4 +0x1f8:  add    $0x10,%edx
084337d7 +0x1fb:  add    %edx,%eax
084337d9 +0x1fd:  mov    %eax,0x8(%esp)
084337dd +0x201:  movl   $0x0,0x4(%esp)
084337e5 +0x209:  mov    -0x18(%ebp),%eax
084337e8 +0x20c:  mov    %eax,(%esp)
084337eb +0x20f:  call   081754c8 <_GLOBAL__I__ZN6Taiwan10TaiwanCashC2Ehs+0x1c>  ; global constructors keyed to Taiwan::TaiwanCash::TaiwanCash(unsigned char, short)+0x1c
084337f0 +0x214:  xor    $0x1,%eax
084337f3 +0x217:  test   %al,%al
084337f5 +0x219:  je     08433801 <+0x225>
084337f7 +0x21b:  mov    $0x0,%ebx
084337fc +0x220:  jmp    08433acd <+0x4f1>
08433801 +0x225:  mov    -0xc(%ebp),%edx
08433804 +0x228:  lea    -0xa0(%ebp),%eax
0843380a +0x22e:  imul   $0x2c,%edx,%edx
0843380d +0x231:  add    $0x10,%edx
08433810 +0x234:  add    %edx,%eax
08433812 +0x236:  add    $0x8,%eax
08433815 +0x239:  mov    %eax,0x8(%esp)
08433819 +0x23d:  movl   $0x1,0x4(%esp)
08433821 +0x245:  mov    -0x18(%ebp),%eax
08433824 +0x248:  mov    %eax,(%esp)
08433827 +0x24b:  call   081754c8 <_GLOBAL__I__ZN6Taiwan10TaiwanCashC2Ehs+0x1c>  ; global constructors keyed to Taiwan::TaiwanCash::TaiwanCash(unsigned char, short)+0x1c
0843382c +0x250:  xor    $0x1,%eax
0843382f +0x253:  test   %al,%al
08433831 +0x255:  je     0843383d <+0x261>
08433833 +0x257:  mov    $0x0,%ebx
08433838 +0x25c:  jmp    08433acd <+0x4f1>
0843383d +0x261:  mov    -0xc(%ebp),%edx
08433840 +0x264:  lea    -0xa0(%ebp),%eax
08433846 +0x26a:  imul   $0x2c,%edx,%edx
08433849 +0x26d:  add    $0x20,%edx
0843384c +0x270:  add    %edx,%eax
0843384e +0x272:  add    $0x8,%eax
08433851 +0x275:  mov    %eax,0x8(%esp)
08433855 +0x279:  movl   $0x2,0x4(%esp)
0843385d +0x281:  mov    -0x18(%ebp),%eax
08433860 +0x284:  mov    %eax,(%esp)
08433863 +0x287:  call   081754c8 <_GLOBAL__I__ZN6Taiwan10TaiwanCashC2Ehs+0x1c>  ; global constructors keyed to Taiwan::TaiwanCash::TaiwanCash(unsigned char, short)+0x1c
08433868 +0x28c:  xor    $0x1,%eax
0843386b +0x28f:  test   %al,%al
0843386d +0x291:  je     08433879 <+0x29d>
0843386f +0x293:  mov    $0x0,%ebx
08433874 +0x298:  jmp    08433acd <+0x4f1>
08433879 +0x29d:  mov    -0xc(%ebp),%edx
0843387c +0x2a0:  lea    -0xa0(%ebp),%eax
08433882 +0x2a6:  imul   $0x2c,%edx,%edx
08433885 +0x2a9:  add    $0x20,%edx
08433888 +0x2ac:  add    %edx,%eax
0843388a +0x2ae:  mov    %eax,0x8(%esp)
0843388e +0x2b2:  movl   $0x3,0x4(%esp)
08433896 +0x2ba:  mov    -0x18(%ebp),%eax
08433899 +0x2bd:  mov    %eax,(%esp)
0843389c +0x2c0:  call   081754c8 <_GLOBAL__I__ZN6Taiwan10TaiwanCashC2Ehs+0x1c>  ; global constructors keyed to Taiwan::TaiwanCash::TaiwanCash(unsigned char, short)+0x1c
084338a1 +0x2c5:  xor    $0x1,%eax
084338a4 +0x2c8:  test   %al,%al
084338a6 +0x2ca:  je     084338b2 <+0x2d6>
084338a8 +0x2cc:  mov    $0x0,%ebx
084338ad +0x2d1:  jmp    08433acd <+0x4f1>
084338b2 +0x2d6:  mov    -0xc(%ebp),%edx
084338b5 +0x2d9:  lea    -0xa0(%ebp),%eax
084338bb +0x2df:  imul   $0x2c,%edx,%edx
084338be +0x2e2:  add    $0x30,%edx
084338c1 +0x2e5:  add    %edx,%eax
084338c3 +0x2e7:  mov    %eax,0x8(%esp)
084338c7 +0x2eb:  movl   $0x4,0x4(%esp)
084338cf +0x2f3:  mov    -0x18(%ebp),%eax
084338d2 +0x2f6:  mov    %eax,(%esp)
084338d5 +0x2f9:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
084338da +0x2fe:  xor    $0x1,%eax
084338dd +0x301:  test   %al,%al
084338df +0x303:  je     084338eb <+0x30f>
084338e1 +0x305:  mov    $0x0,%ebx
084338e6 +0x30a:  jmp    08433acd <+0x4f1>
084338eb +0x30f:  mov    -0xc(%ebp),%edx
084338ee +0x312:  lea    -0xa0(%ebp),%eax
084338f4 +0x318:  imul   $0x2c,%edx,%edx
084338f7 +0x31b:  add    $0x30,%edx
084338fa +0x31e:  add    %edx,%eax
084338fc +0x320:  add    $0x4,%eax
084338ff +0x323:  mov    %eax,0x8(%esp)
08433903 +0x327:  movl   $0x5,0x4(%esp)
0843390b +0x32f:  mov    -0x18(%ebp),%eax
0843390e +0x332:  mov    %eax,(%esp)
08433911 +0x335:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08433916 +0x33a:  xor    $0x1,%eax
08433919 +0x33d:  test   %al,%al
0843391b +0x33f:  je     08433927 <+0x34b>
0843391d +0x341:  mov    $0x0,%ebx
08433922 +0x346:  jmp    08433acd <+0x4f1>
08433927 +0x34b:  mov    -0xc(%ebp),%edx
0843392a +0x34e:  lea    -0xa0(%ebp),%eax
08433930 +0x354:  imul   $0x2c,%edx,%edx
08433933 +0x357:  add    $0x30,%edx
08433936 +0x35a:  add    %edx,%eax
08433938 +0x35c:  add    $0x8,%eax
0843393b +0x35f:  mov    %eax,0x8(%esp)
0843393f +0x363:  movl   $0x6,0x4(%esp)
08433947 +0x36b:  mov    -0x18(%ebp),%eax
0843394a +0x36e:  mov    %eax,(%esp)
0843394d +0x371:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08433952 +0x376:  xor    $0x1,%eax
08433955 +0x379:  test   %al,%al
08433957 +0x37b:  je     08433963 <+0x387>
08433959 +0x37d:  mov    $0x0,%ebx
0843395e +0x382:  jmp    08433acd <+0x4f1>
08433963 +0x387:  addl   $0x1,-0xc(%ebp)
08433967 +0x38b:  mov    -0xc(%ebp),%eax
0843396a +0x38e:  cmp    -0x14(%ebp),%eax
0843396d +0x391:  jge    0843397c <+0x3a0>
0843396f +0x393:  cmpl   $0x1,-0xc(%ebp)
08433973 +0x397:  jg     0843397c <+0x3a0>
08433975 +0x399:  mov    $0x1,%eax
0843397a +0x39e:  jmp    08433981 <+0x3a5>
0843397c +0x3a0:  mov    $0x0,%eax
08433981 +0x3a5:  test   %al,%al
08433983 +0x3a7:  jne    084337ac <+0x1d0>
08433989 +0x3ad:  cmpl   $0x1,-0x14(%ebp)
0843398d +0x3b1:  jne    084339dd <+0x401>
0843398f +0x3b3:  mov    -0x90(%ebp),%eax
08433995 +0x3b9:  mov    %eax,-0x64(%ebp)
08433998 +0x3bc:  mov    -0x8c(%ebp),%eax
0843399e +0x3c2:  mov    %eax,-0x60(%ebp)
084339a1 +0x3c5:  mov    -0x88(%ebp),%eax
084339a7 +0x3cb:  mov    %eax,-0x5c(%ebp)
084339aa +0x3ce:  mov    -0x84(%ebp),%eax
084339b0 +0x3d4:  mov    %eax,-0x58(%ebp)
084339b3 +0x3d7:  mov    -0x80(%ebp),%eax
084339b6 +0x3da:  mov    %eax,-0x54(%ebp)
084339b9 +0x3dd:  mov    -0x7c(%ebp),%eax
084339bc +0x3e0:  mov    %eax,-0x50(%ebp)
084339bf +0x3e3:  mov    -0x78(%ebp),%eax
084339c2 +0x3e6:  mov    %eax,-0x4c(%ebp)
084339c5 +0x3e9:  mov    -0x74(%ebp),%eax
084339c8 +0x3ec:  mov    %eax,-0x48(%ebp)
084339cb +0x3ef:  mov    -0x70(%ebp),%eax
084339ce +0x3f2:  mov    %eax,-0x44(%ebp)
084339d1 +0x3f5:  mov    -0x6c(%ebp),%eax
084339d4 +0x3f8:  mov    %eax,-0x40(%ebp)
084339d7 +0x3fb:  mov    -0x68(%ebp),%eax
084339da +0x3fe:  mov    %eax,-0x3c(%ebp)
084339dd +0x401:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
084339e2 +0x406:  movl   $0x7c30,0x8(%esp)
084339ea +0x40e:  movl   $"DBThread.cpp",0x4(%esp)
084339f2 +0x416:  mov    %eax,(%esp)
084339f5 +0x419:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
084339fa +0x41e:  movl   $0x1,0x8(%esp)
08433a02 +0x426:  mov    %eax,0x4(%esp)
08433a06 +0x42a:  lea    -0x34(%ebp),%eax
08433a09 +0x42d:  mov    %eax,(%esp)
08433a0c +0x430:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08433a11 +0x435:  lea    -0x34(%ebp),%eax
08433a14 +0x438:  mov    %eax,(%esp)
08433a17 +0x43b:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08433a1c +0x440:  movl   $0x15a,0x4(%esp)
08433a24 +0x448:  mov    %eax,(%esp)
08433a27 +0x44b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08433a2c +0x450:  lea    -0x34(%ebp),%eax
08433a2f +0x453:  mov    %eax,(%esp)
08433a32 +0x456:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08433a37 +0x45b:  movl   $0xffffffff,0x4(%esp)
08433a3f +0x463:  mov    %eax,(%esp)
08433a42 +0x466:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08433a47 +0x46b:  lea    -0x34(%ebp),%eax
08433a4a +0x46e:  mov    %eax,(%esp)
08433a4d +0x471:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08433a52 +0x476:  mov    %eax,(%esp)
08433a55 +0x479:  call   0845305e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x5c74>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x5c74
08433a5a +0x47e:  mov    %eax,-0x10(%ebp)
08433a5d +0x481:  movl   $0x6c,0x8(%esp)
08433a65 +0x489:  lea    -0xa0(%ebp),%eax
08433a6b +0x48f:  mov    %eax,0x4(%esp)
08433a6f +0x493:  mov    -0x10(%ebp),%eax
08433a72 +0x496:  mov    %eax,(%esp)
08433a75 +0x499:  call   0807d8a0 <_init+0x198>
08433a7a +0x49e:  movzbl -0x29(%ebp),%edx
08433a7e +0x4a2:  mov    -0x10(%ebp),%eax
08433a81 +0x4a5:  mov    %dl,0x68(%eax)
08433a84 +0x4a8:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08433a89 +0x4ad:  lea    -0x34(%ebp),%edx
08433a8c +0x4b0:  mov    %edx,0x8(%esp)
08433a90 +0x4b4:  movl   $0x1,0x4(%esp)
08433a98 +0x4bc:  mov    %eax,(%esp)
08433a9b +0x4bf:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08433aa0 +0x4c4:  mov    $0x1,%ebx
08433aa5 +0x4c9:  lea    -0x34(%ebp),%eax
08433aa8 +0x4cc:  mov    %eax,(%esp)
08433aab +0x4cf:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08433ab0 +0x4d4:  jmp    08433acd <+0x4f1>
08433ab2 +0x4d6:  mov    %edx,%ebx
08433ab4 +0x4d8:  mov    %eax,%esi
08433ab6 +0x4da:  lea    -0x34(%ebp),%eax
08433ab9 +0x4dd:  mov    %eax,(%esp)
08433abc +0x4e0:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08433ac1 +0x4e5:  mov    %esi,%eax
08433ac3 +0x4e7:  mov    %ebx,%edx
08433ac5 +0x4e9:  mov    %eax,(%esp)
08433ac8 +0x4ec:  call   08ae3750 <_Unwind_Resume>
08433acd +0x4f1:  mov    %ebx,%eax
08433acf +0x4f3:  add    $0xb0,%esp
08433ad5 +0x4f9:  pop    %ebx
08433ad6 +0x4fa:  pop    %esi
08433ad7 +0x4fb:  pop    %ebp
08433ad8 +0x4fc:  ret
08433ad9 +0x4fd:  nop
```

## 反编译 C

```c
// DB_LoadAutoMarketConditionsControl::dispatch @ 0x84335dc

/* DB_LoadAutoMarketConditionsControl::dispatch(int, int, Stream*) */

undefined4 DB_LoadAutoMarketConditionsControl::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  Stream *in_stack_00000010;
  ulonglong local_a4;
  ulonglong uStack_9c;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74 [4];
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  CStreamGuard local_38 [11];
  SIG_AUTO_MARKET_CONDITIONS_CONTROL local_2d;
  cMyTrace local_2c [16];
  MySQL *local_1c;
  int local_18;
  SIG_AUTO_MARKET_CONDITIONS_CONTROL *local_14;
  int local_10;
  
  local_1c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  local_2d = (SIG_AUTO_MARKET_CONDITIONS_CONTROL)0x0;
  Stream::operator>>(in_stack_00000010,(bool *)&local_2d);
  local_18 = 0;
  memset(&local_a4,0,0x6c);
  MySQL::set_query(local_1c,
                   "seLect optimum_gold_supply, over_gold from auto_market_condition_ctrl limit 1");
  cVar2 = MySQL::exec(local_1c,true);
  if (cVar2 != '\x01') {
    return 0;
  }
  local_18 = MySQL::get_n_rows(local_1c);
  if (local_18 != 0) {
    cVar2 = MySQL::fetch(local_1c);
    if (cVar2 != '\x01') {
      return 0;
    }
    cVar2 = MySQL::get_ulonglong(local_1c,0,&uStack_9c);
    if (cVar2 != '\x01') {
      return 0;
    }
    cVar2 = MySQL::get_ulonglong(local_1c,1,&local_a4);
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  MySQL::set_query(local_1c,
                   "seLect total_gold, auction_gold, optimum_gold_supply, over_gold, gold_phase, item_phase, durability_phase from auto_market_condition_ctrl_daily where occ_time >= DATE_SUB(CURDATE(), INTERVAL 1 DAY) order by occ_time limit 2"
                  );
  cVar2 = MySQL::exec(local_1c,true);
  if (cVar2 == '\x01') {
    local_18 = MySQL::get_n_rows(local_1c);
    if ((local_18 == 2) || (local_18 == 1)) {
      local_10 = 0;
      while( true ) {
        if ((local_10 < local_18) && (local_10 < 2)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (!bVar1) {
          if (local_18 == 1) {
            local_74[3] = local_94;
            local_64 = local_90;
            local_60 = local_8c;
            local_5c = local_88;
            local_58 = local_84;
            local_54 = local_80;
            local_50 = local_7c;
            local_4c = local_78;
            local_48 = local_74[0];
            local_44 = local_74[1];
            local_40 = local_74[2];
          }
          pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x7c30);
          CStreamGuard::CStreamGuard(local_38,pSVar3,true);
          pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_38);
                    /* try { // try from 08433a27 to 08433a9f has its CatchHandler @ 08433ab2 */
          CStreamGuard::operator<<(pCVar4,0x15a);
          pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_38);
          CStreamGuard::operator<<(pCVar4,-1);
          pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_38);
          local_14 = CStreamGuard::GetInBuffer<SIG_AUTO_MARKET_CONDITIONS_CONTROL>(pCVar4);
          memcpy(local_14,&local_a4,0x6c);
          local_14[0x68] = local_2d;
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_38);
          CStreamGuard::~CStreamGuard(local_38);
          return 1;
        }
        cVar2 = MySQL::fetch(local_1c);
        if (cVar2 != '\x01') {
          return 0;
        }
        cVar2 = MySQL::get_ulonglong(local_1c,0,(ulonglong *)(&local_94 + local_10 * 0xb));
        if (cVar2 != '\x01') {
          return 0;
        }
        cVar2 = MySQL::get_ulonglong(local_1c,1,(ulonglong *)(&local_8c + local_10 * 0xb));
        if (cVar2 != '\x01') {
          return 0;
        }
        cVar2 = MySQL::get_ulonglong(local_1c,2,(ulonglong *)(&local_7c + local_10 * 0xb));
        if (cVar2 != '\x01') {
          return 0;
        }
        cVar2 = MySQL::get_ulonglong(local_1c,3,(ulonglong *)(&local_84 + local_10 * 0xb));
        if (cVar2 != '\x01') {
          return 0;
        }
        cVar2 = MySQL::get_int(local_1c,4,local_74 + local_10 * 0xb);
        if (cVar2 != '\x01') {
          return 0;
        }
        cVar2 = MySQL::get_int(local_1c,5,local_74 + local_10 * 0xb + 1);
        if (cVar2 != '\x01') {
          return 0;
        }
        cVar2 = MySQL::get_int(local_1c,6,local_74 + local_10 * 0xb + 2);
        if (cVar2 != '\x01') break;
        local_10 = local_10 + 1;
      }
    }
    else {
      cMyTrace::cMyTrace(local_2c,
                         "virtual bool DB_LoadAutoMarketConditionsControl::dispatch(int, int, Stream*)"
                         ,0x7c0c,0);
      cMyTrace::operator()(local_2c,"DB_LoadAutoMarketConditionsControl error %d",local_18);
    }
  }
  return 0;
}
```
