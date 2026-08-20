# ArrangeATIEventItem

`_ZN8WongWork8EventATI19ArrangeATIEventItemEjj`

`WongWork::EventATI::ArrangeATIEventItem(unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `WongWork::EventATI` | `0x083fa1d3` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083fa1d3  _ZN8WongWork8EventATI19ArrangeATIEventItemEjj
#           WongWork::EventATI::ArrangeATIEventItem(unsigned int, unsigned int)
# range [0x083fa1d3, 0x083fa69b]
083fa1d3 +0x000:  push   %ebp
083fa1d4 +0x001:  mov    %esp,%ebp
083fa1d6 +0x003:  push   %ebx
083fa1d7 +0x004:  sub    $0x114,%esp
083fa1dd +0x00a:  movl   $0xa,-0x1c(%ebp)
083fa1e4 +0x011:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
083fa1e9 +0x016:  movl   $0x0,0x8(%esp)
083fa1f1 +0x01e:  movl   $0x1,0x4(%esp)
083fa1f9 +0x026:  mov    %eax,(%esp)
083fa1fc +0x029:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
083fa201 +0x02e:  mov    %eax,-0x18(%ebp)
083fa204 +0x031:  movl   $0x0,0x4(%esp)
083fa20c +0x039:  mov    0x8(%ebp),%eax
083fa20f +0x03c:  mov    %eax,(%esp)
083fa212 +0x03f:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
083fa217 +0x044:  movl   $0xa,0xc(%esp)
083fa21f +0x04c:  mov    %eax,0x8(%esp)
083fa223 +0x050:  movl   $"seLect id,cera,cera_check,item_no,item_server_id,item_charac_no,item_check,avata_no1,avata_no2,avata_server_id,avata_charac_no,avata_check1,avata_check2 from event_ati_info where m_id=%s and occ_check!=0 limit %d",0x4(%esp)
083fa22b +0x058:  mov    -0x18(%ebp),%eax
083fa22e +0x05b:  mov    %eax,(%esp)
083fa231 +0x05e:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
083fa236 +0x063:  movl   $0x1,0x4(%esp)
083fa23e +0x06b:  mov    -0x18(%ebp),%eax
083fa241 +0x06e:  mov    %eax,(%esp)
083fa244 +0x071:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
083fa249 +0x076:  xor    $0x1,%eax
083fa24c +0x079:  test   %al,%al
083fa24e +0x07b:  je     083fa2ac <+0xd9>
083fa250 +0x07d:  movl   $0x0,0x4(%esp)
083fa258 +0x085:  mov    0x8(%ebp),%eax
083fa25b +0x088:  mov    %eax,(%esp)
083fa25e +0x08b:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
083fa263 +0x090:  mov    %eax,%ebx
083fa265 +0x092:  movl   $0x5,0xc(%esp)
083fa26d +0x09a:  movl   $0xa1,0x8(%esp)
083fa275 +0x0a2:  movl   $&_ZZN8WongWork8EventATI19ArrangeATIEventItemEjjE19__PRETTY_FUNCTION__,0x4(%esp)
083fa27d +0x0aa:  lea    -0x2c(%ebp),%eax
083fa280 +0x0ad:  mov    %eax,(%esp)
083fa283 +0x0b0:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
083fa288 +0x0b5:  mov    %ebx,0xc(%esp)
083fa28c +0x0b9:  movl   $&_ZZN8WongWork8EventATI19ArrangeATIEventItemEjjE19__PRETTY_FUNCTION__,0x8(%esp)
083fa294 +0x0c1:  movl   $"%s, exec ERROR m_id=%s",0x4(%esp)
083fa29c +0x0c9:  lea    -0x2c(%ebp),%eax
083fa29f +0x0cc:  mov    %eax,(%esp)
083fa2a2 +0x0cf:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083fa2a7 +0x0d4:  jmp    083fa693 <+0x4c0>
083fa2ac +0x0d9:  movl   $0x0,-0x14(%ebp)
083fa2b3 +0x0e0:  movl   $0x0,-0x10(%ebp)
083fa2ba +0x0e7:  jmp    083fa5cf <+0x3fc>
083fa2bf +0x0ec:  mov    -0x18(%ebp),%eax
083fa2c2 +0x0ef:  mov    %eax,(%esp)
083fa2c5 +0x0f2:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
083fa2ca +0x0f7:  xor    $0x1,%eax
083fa2cd +0x0fa:  test   %al,%al
083fa2cf +0x0fc:  jne    083fa5ea <+0x417>
083fa2d5 +0x102:  movl   $0x0,-0x30(%ebp)
083fa2dc +0x109:  movl   $0x0,-0x34(%ebp)
083fa2e3 +0x110:  movl   $0x0,-0x38(%ebp)
083fa2ea +0x117:  movl   $0x0,-0x3c(%ebp)
083fa2f1 +0x11e:  movl   $0x0,-0x40(%ebp)
083fa2f8 +0x125:  movl   $0x0,-0x44(%ebp)
083fa2ff +0x12c:  movl   $0x0,-0x48(%ebp)
083fa306 +0x133:  movl   $0x0,-0x4c(%ebp)
083fa30d +0x13a:  movl   $0x0,-0x50(%ebp)
083fa314 +0x141:  movl   $0x0,-0x54(%ebp)
083fa31b +0x148:  movl   $0x0,-0x58(%ebp)
083fa322 +0x14f:  movl   $0x0,-0x5c(%ebp)
083fa329 +0x156:  movl   $0x0,-0x60(%ebp)
083fa330 +0x15d:  lea    -0x30(%ebp),%eax
083fa333 +0x160:  mov    %eax,0x8(%esp)
083fa337 +0x164:  movl   $0x0,0x4(%esp)
083fa33f +0x16c:  mov    -0x18(%ebp),%eax
083fa342 +0x16f:  mov    %eax,(%esp)
083fa345 +0x172:  call   080e22ae <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x54>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x54
083fa34a +0x177:  lea    -0x34(%ebp),%eax
083fa34d +0x17a:  mov    %eax,0x8(%esp)
083fa351 +0x17e:  movl   $0x1,0x4(%esp)
083fa359 +0x186:  mov    -0x18(%ebp),%eax
083fa35c +0x189:  mov    %eax,(%esp)
083fa35f +0x18c:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
083fa364 +0x191:  lea    -0x38(%ebp),%eax
083fa367 +0x194:  mov    %eax,0x8(%esp)
083fa36b +0x198:  movl   $0x2,0x4(%esp)
083fa373 +0x1a0:  mov    -0x18(%ebp),%eax
083fa376 +0x1a3:  mov    %eax,(%esp)
083fa379 +0x1a6:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
083fa37e +0x1ab:  lea    -0x3c(%ebp),%eax
083fa381 +0x1ae:  mov    %eax,0x8(%esp)
083fa385 +0x1b2:  movl   $0x3,0x4(%esp)
083fa38d +0x1ba:  mov    -0x18(%ebp),%eax
083fa390 +0x1bd:  mov    %eax,(%esp)
083fa393 +0x1c0:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
083fa398 +0x1c5:  lea    -0x40(%ebp),%eax
083fa39b +0x1c8:  mov    %eax,0x8(%esp)
083fa39f +0x1cc:  movl   $0x4,0x4(%esp)
083fa3a7 +0x1d4:  mov    -0x18(%ebp),%eax
083fa3aa +0x1d7:  mov    %eax,(%esp)
083fa3ad +0x1da:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
083fa3b2 +0x1df:  lea    -0x44(%ebp),%eax
083fa3b5 +0x1e2:  mov    %eax,0x8(%esp)
083fa3b9 +0x1e6:  movl   $0x5,0x4(%esp)
083fa3c1 +0x1ee:  mov    -0x18(%ebp),%eax
083fa3c4 +0x1f1:  mov    %eax,(%esp)
083fa3c7 +0x1f4:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
083fa3cc +0x1f9:  lea    -0x48(%ebp),%eax
083fa3cf +0x1fc:  mov    %eax,0x8(%esp)
083fa3d3 +0x200:  movl   $0x6,0x4(%esp)
083fa3db +0x208:  mov    -0x18(%ebp),%eax
083fa3de +0x20b:  mov    %eax,(%esp)
083fa3e1 +0x20e:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
083fa3e6 +0x213:  lea    -0x4c(%ebp),%eax
083fa3e9 +0x216:  mov    %eax,0x8(%esp)
083fa3ed +0x21a:  movl   $0x7,0x4(%esp)
083fa3f5 +0x222:  mov    -0x18(%ebp),%eax
083fa3f8 +0x225:  mov    %eax,(%esp)
083fa3fb +0x228:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
083fa400 +0x22d:  lea    -0x50(%ebp),%eax
083fa403 +0x230:  mov    %eax,0x8(%esp)
083fa407 +0x234:  movl   $0x8,0x4(%esp)
083fa40f +0x23c:  mov    -0x18(%ebp),%eax
083fa412 +0x23f:  mov    %eax,(%esp)
083fa415 +0x242:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
083fa41a +0x247:  lea    -0x54(%ebp),%eax
083fa41d +0x24a:  mov    %eax,0x8(%esp)
083fa421 +0x24e:  movl   $0x9,0x4(%esp)
083fa429 +0x256:  mov    -0x18(%ebp),%eax
083fa42c +0x259:  mov    %eax,(%esp)
083fa42f +0x25c:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
083fa434 +0x261:  lea    -0x58(%ebp),%eax
083fa437 +0x264:  mov    %eax,0x8(%esp)
083fa43b +0x268:  movl   $0xa,0x4(%esp)
083fa443 +0x270:  mov    -0x18(%ebp),%eax
083fa446 +0x273:  mov    %eax,(%esp)
083fa449 +0x276:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
083fa44e +0x27b:  lea    -0x5c(%ebp),%eax
083fa451 +0x27e:  mov    %eax,0x8(%esp)
083fa455 +0x282:  movl   $0xb,0x4(%esp)
083fa45d +0x28a:  mov    -0x18(%ebp),%eax
083fa460 +0x28d:  mov    %eax,(%esp)
083fa463 +0x290:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
083fa468 +0x295:  lea    -0x60(%ebp),%eax
083fa46b +0x298:  mov    %eax,0x8(%esp)
083fa46f +0x29c:  movl   $0xc,0x4(%esp)
083fa477 +0x2a4:  mov    -0x18(%ebp),%eax
083fa47a +0x2a7:  mov    %eax,(%esp)
083fa47d +0x2aa:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
083fa482 +0x2af:  mov    -0x48(%ebp),%eax
083fa485 +0x2b2:  test   %eax,%eax
083fa487 +0x2b4:  jne    083fa4f1 <+0x31e>
083fa489 +0x2b6:  mov    -0x40(%ebp),%eax
083fa48c +0x2b9:  cmp    0xc(%ebp),%eax
083fa48f +0x2bc:  jne    083fa4f1 <+0x31e>
083fa491 +0x2be:  mov    -0x14(%ebp),%edx
083fa494 +0x2c1:  mov    -0x30(%ebp),%eax
083fa497 +0x2c4:  shl    $0x4,%edx
083fa49a +0x2c7:  lea    -0x8(%ebp),%ecx
083fa49d +0x2ca:  lea    (%ecx,%edx,1),%edx
083fa4a0 +0x2cd:  sub    $0xf8,%edx
083fa4a6 +0x2d3:  mov    %eax,(%edx)
083fa4a8 +0x2d5:  mov    -0x14(%ebp),%edx
083fa4ab +0x2d8:  mov    -0x3c(%ebp),%eax
083fa4ae +0x2db:  shl    $0x4,%edx
083fa4b1 +0x2de:  lea    -0x8(%ebp),%ebx
083fa4b4 +0x2e1:  lea    (%ebx,%edx,1),%edx
083fa4b7 +0x2e4:  sub    $0xf0,%edx
083fa4bd +0x2ea:  mov    %eax,(%edx)
083fa4bf +0x2ec:  mov    -0x14(%ebp),%eax
083fa4c2 +0x2ef:  shl    $0x4,%eax
083fa4c5 +0x2f2:  lea    -0x8(%ebp),%edx
083fa4c8 +0x2f5:  lea    (%edx,%eax,1),%eax
083fa4cb +0x2f8:  sub    $0xec,%eax
083fa4d0 +0x2fd:  movl   $0x1,(%eax)
083fa4d6 +0x303:  mov    -0x14(%ebp),%edx
083fa4d9 +0x306:  mov    -0x44(%ebp),%eax
083fa4dc +0x309:  shl    $0x4,%edx
083fa4df +0x30c:  lea    -0x8(%ebp),%ecx
083fa4e2 +0x30f:  lea    (%ecx,%edx,1),%edx
083fa4e5 +0x312:  sub    $0xf4,%edx
083fa4eb +0x318:  mov    %eax,(%edx)
083fa4ed +0x31a:  addl   $0x1,-0x14(%ebp)
083fa4f1 +0x31e:  mov    -0x54(%ebp),%eax
083fa4f4 +0x321:  cmp    0xc(%ebp),%eax
083fa4f7 +0x324:  jne    083fa5cb <+0x3f8>
083fa4fd +0x32a:  mov    -0x5c(%ebp),%eax
083fa500 +0x32d:  test   %eax,%eax
083fa502 +0x32f:  jne    083fa564 <+0x391>
083fa504 +0x331:  mov    -0x14(%ebp),%edx
083fa507 +0x334:  mov    -0x30(%ebp),%eax
083fa50a +0x337:  shl    $0x4,%edx
083fa50d +0x33a:  lea    -0x8(%ebp),%ebx
083fa510 +0x33d:  lea    (%ebx,%edx,1),%edx
083fa513 +0x340:  sub    $0xf8,%edx
083fa519 +0x346:  mov    %eax,(%edx)
083fa51b +0x348:  mov    -0x14(%ebp),%edx
083fa51e +0x34b:  mov    -0x4c(%ebp),%eax
083fa521 +0x34e:  shl    $0x4,%edx
083fa524 +0x351:  lea    -0x8(%ebp),%ecx
083fa527 +0x354:  lea    (%ecx,%edx,1),%edx
083fa52a +0x357:  sub    $0xf0,%edx
083fa530 +0x35d:  mov    %eax,(%edx)
083fa532 +0x35f:  mov    -0x14(%ebp),%eax
083fa535 +0x362:  shl    $0x4,%eax
083fa538 +0x365:  lea    -0x8(%ebp),%ebx
083fa53b +0x368:  lea    (%ebx,%eax,1),%eax
083fa53e +0x36b:  sub    $0xec,%eax
083fa543 +0x370:  movl   $0x1,(%eax)
083fa549 +0x376:  mov    -0x14(%ebp),%edx
083fa54c +0x379:  mov    -0x58(%ebp),%eax
083fa54f +0x37c:  shl    $0x4,%edx
083fa552 +0x37f:  lea    -0x8(%ebp),%ecx
083fa555 +0x382:  lea    (%ecx,%edx,1),%edx
083fa558 +0x385:  sub    $0xf4,%edx
083fa55e +0x38b:  mov    %eax,(%edx)
083fa560 +0x38d:  addl   $0x1,-0x14(%ebp)
083fa564 +0x391:  mov    -0x60(%ebp),%eax
083fa567 +0x394:  test   %eax,%eax
083fa569 +0x396:  jne    083fa5cb <+0x3f8>
083fa56b +0x398:  mov    -0x14(%ebp),%edx
083fa56e +0x39b:  mov    -0x30(%ebp),%eax
083fa571 +0x39e:  shl    $0x4,%edx
083fa574 +0x3a1:  lea    -0x8(%ebp),%ebx
083fa577 +0x3a4:  lea    (%ebx,%edx,1),%edx
083fa57a +0x3a7:  sub    $0xf8,%edx
083fa580 +0x3ad:  mov    %eax,(%edx)
083fa582 +0x3af:  mov    -0x14(%ebp),%edx
083fa585 +0x3b2:  mov    -0x50(%ebp),%eax
083fa588 +0x3b5:  shl    $0x4,%edx
083fa58b +0x3b8:  lea    -0x8(%ebp),%ecx
083fa58e +0x3bb:  lea    (%ecx,%edx,1),%edx
083fa591 +0x3be:  sub    $0xf0,%edx
083fa597 +0x3c4:  mov    %eax,(%edx)
083fa599 +0x3c6:  mov    -0x14(%ebp),%eax
083fa59c +0x3c9:  shl    $0x4,%eax
083fa59f +0x3cc:  lea    -0x8(%ebp),%ebx
083fa5a2 +0x3cf:  lea    (%ebx,%eax,1),%eax
083fa5a5 +0x3d2:  sub    $0xec,%eax
083fa5aa +0x3d7:  movl   $0x1,(%eax)
083fa5b0 +0x3dd:  mov    -0x14(%ebp),%edx
083fa5b3 +0x3e0:  mov    -0x58(%ebp),%eax
083fa5b6 +0x3e3:  shl    $0x4,%edx
083fa5b9 +0x3e6:  lea    -0x8(%ebp),%ecx
083fa5bc +0x3e9:  lea    (%ecx,%edx,1),%edx
083fa5bf +0x3ec:  sub    $0xf4,%edx
083fa5c5 +0x3f2:  mov    %eax,(%edx)
083fa5c7 +0x3f4:  addl   $0x1,-0x14(%ebp)
083fa5cb +0x3f8:  addl   $0x1,-0x10(%ebp)
083fa5cf +0x3fc:  mov    -0x18(%ebp),%eax
083fa5d2 +0x3ff:  mov    %eax,(%esp)
083fa5d5 +0x402:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
083fa5da +0x407:  cmp    -0x10(%ebp),%eax
083fa5dd +0x40a:  seta   %al
083fa5e0 +0x40d:  test   %al,%al
083fa5e2 +0x40f:  jne    083fa2bf <+0xec>
083fa5e8 +0x415:  jmp    083fa5eb <+0x418>
083fa5ea +0x417:  nop
083fa5eb +0x418:  movl   $0x0,-0xc(%ebp)
083fa5f2 +0x41f:  jmp    083fa682 <+0x4af>
083fa5f7 +0x424:  mov    -0xc(%ebp),%eax
083fa5fa +0x427:  shl    $0x4,%eax
083fa5fd +0x42a:  lea    -0x8(%ebp),%ebx
083fa600 +0x42d:  lea    (%ebx,%eax,1),%eax
083fa603 +0x430:  sub    $0xf0,%eax
083fa608 +0x435:  mov    (%eax),%edx
083fa60a +0x437:  mov    -0xc(%ebp),%eax
083fa60d +0x43a:  shl    $0x4,%eax
083fa610 +0x43d:  lea    -0x8(%ebp),%ecx
083fa613 +0x440:  lea    (%ecx,%eax,1),%eax
083fa616 +0x443:  sub    $0xf8,%eax
083fa61b +0x448:  mov    (%eax),%eax
083fa61d +0x44a:  mov    %edx,0x4(%esp)
083fa621 +0x44e:  mov    %eax,(%esp)
083fa624 +0x451:  call   083fa0ad <_ZN8WongWork8EventATI18UpdateEventATIInfoEji>  ; WongWork::EventATI::UpdateEventATIInfo(unsigned int, int)
083fa629 +0x456:  mov    -0xc(%ebp),%eax
083fa62c +0x459:  shl    $0x4,%eax
083fa62f +0x45c:  lea    -0x8(%ebp),%ebx
083fa632 +0x45f:  lea    (%ebx,%eax,1),%eax
083fa635 +0x462:  sub    $0xec,%eax
083fa63a +0x467:  mov    (%eax),%eax
083fa63c +0x469:  mov    %eax,%ecx
083fa63e +0x46b:  mov    -0xc(%ebp),%eax
083fa641 +0x46e:  shl    $0x4,%eax
083fa644 +0x471:  lea    -0x8(%ebp),%edx
083fa647 +0x474:  lea    (%edx,%eax,1),%eax
083fa64a +0x477:  sub    $0xf0,%eax
083fa64f +0x47c:  mov    (%eax),%eax
083fa651 +0x47e:  mov    %eax,%edx
083fa653 +0x480:  mov    -0xc(%ebp),%eax
083fa656 +0x483:  shl    $0x4,%eax
083fa659 +0x486:  lea    -0x8(%ebp),%ebx
083fa65c +0x489:  lea    (%ebx,%eax,1),%eax
083fa65f +0x48c:  sub    $0xf4,%eax
083fa664 +0x491:  mov    (%eax),%eax
083fa666 +0x493:  movl   $0x2,0xc(%esp)
083fa66e +0x49b:  mov    %ecx,0x8(%esp)
083fa672 +0x49f:  mov    %edx,0x4(%esp)
083fa676 +0x4a3:  mov    %eax,(%esp)
083fa679 +0x4a6:  call   083f9b54 <_ZN8WongWork11EventCommon26InsertEventItem2EventTableEjjjj>  ; WongWork::EventCommon::InsertEventItem2EventTable(unsigned int, unsigned int, unsigned int, unsigned int)
083fa67e +0x4ab:  addl   $0x1,-0xc(%ebp)
083fa682 +0x4af:  mov    -0xc(%ebp),%eax
083fa685 +0x4b2:  cmp    -0x14(%ebp),%eax
083fa688 +0x4b5:  setl   %al
083fa68b +0x4b8:  test   %al,%al
083fa68d +0x4ba:  jne    083fa5f7 <+0x424>
083fa693 +0x4c0:  add    $0x114,%esp
083fa699 +0x4c6:  pop    %ebx
083fa69a +0x4c7:  pop    %ebp
083fa69b +0x4c8:  ret
```

## 反编译 C

```c
// WongWork::EventATI::ArrangeATIEventItem @ 0x83fa1d3

/* WongWork::EventATI::ArrangeATIEventItem(unsigned int, unsigned int) */

void WongWork::EventATI::ArrangeATIEventItem(uint param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint auStack_104 [40];
  int local_64;
  int local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  int local_4c;
  uint local_48;
  uint local_44;
  uint local_40 [4];
  cMyTrace local_30 [16];
  undefined4 local_20;
  MySQL *local_1c;
  int local_18;
  uint local_14;
  int local_10;
  
  local_20 = 10;
  local_1c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  uVar2 = NumberToString(param_1,0);
  MySQL::set_query(local_1c,
                   "seLect id,cera,cera_check,item_no,item_server_id,item_charac_no,item_check,avata_no1,avata_no2,avata_server_id,avata_charac_no,avata_check1,avata_check2 from event_ati_info where m_id=%s and occ_check!=0 limit %d"
                   ,uVar2,10);
  cVar1 = MySQL::exec(local_1c,true);
  if (cVar1 == '\x01') {
    local_18 = 0;
    local_14 = 0;
    while ((uVar3 = MySQL::get_n_rows(local_1c), local_14 < uVar3 &&
           (cVar1 = MySQL::fetch(local_1c), cVar1 == '\x01'))) {
      local_40[3] = 0;
      local_40[2] = 0;
      local_40[1] = 0;
      local_40[0] = 0;
      local_44 = 0;
      local_48 = 0;
      local_4c = 0;
      local_50 = 0;
      local_54 = 0;
      local_58 = 0;
      local_5c = 0;
      local_60 = 0;
      local_64 = 0;
      MySQL::get_int(local_1c,0,local_40 + 3);
      MySQL::get_int(local_1c,1,(int *)(local_40 + 2));
      MySQL::get_int(local_1c,2,(int *)(local_40 + 1));
      MySQL::get_int(local_1c,3,(int *)local_40);
      MySQL::get_int(local_1c,4,(int *)&local_44);
      MySQL::get_int(local_1c,5,(int *)&local_48);
      MySQL::get_int(local_1c,6,&local_4c);
      MySQL::get_int(local_1c,7,(int *)&local_50);
      MySQL::get_int(local_1c,8,(int *)&local_54);
      MySQL::get_int(local_1c,9,(int *)&local_58);
      MySQL::get_int(local_1c,10,(int *)&local_5c);
      MySQL::get_int(local_1c,0xb,&local_60);
      MySQL::get_int(local_1c,0xc,&local_64);
      if ((local_4c == 0) && (local_44 == param_2)) {
        auStack_104[local_18 * 4] = local_40[3];
        auStack_104[local_18 * 4 + 2] = local_40[0];
        auStack_104[local_18 * 4 + 3] = 1;
        auStack_104[local_18 * 4 + 1] = local_48;
        local_18 = local_18 + 1;
      }
      if (local_58 == param_2) {
        if (local_60 == 0) {
          auStack_104[local_18 * 4] = local_40[3];
          auStack_104[local_18 * 4 + 2] = local_50;
          auStack_104[local_18 * 4 + 3] = 1;
          auStack_104[local_18 * 4 + 1] = local_5c;
          local_18 = local_18 + 1;
        }
        if (local_64 == 0) {
          auStack_104[local_18 * 4] = local_40[3];
          auStack_104[local_18 * 4 + 2] = local_54;
          auStack_104[local_18 * 4 + 3] = 1;
          auStack_104[local_18 * 4 + 1] = local_5c;
          local_18 = local_18 + 1;
        }
      }
      local_14 = local_14 + 1;
    }
    for (local_10 = 0; local_10 < local_18; local_10 = local_10 + 1) {
      UpdateEventATIInfo(auStack_104[local_10 * 4],auStack_104[local_10 * 4 + 2]);
      EventCommon::InsertEventItem2EventTable
                (auStack_104[local_10 * 4 + 1],auStack_104[local_10 * 4 + 2],
                 auStack_104[local_10 * 4 + 3],2);
    }
  }
  else {
    uVar2 = NumberToString(param_1,0);
    cMyTrace::cMyTrace(local_30,
                       "void WongWork::EventATI::ArrangeATIEventItem(memberIdentificationNumber_t, unsigned int)"
                       ,0xa1,5);
    cMyTrace::operator()
              (local_30,"%s, exec ERROR m_id=%s",
               "void WongWork::EventATI::ArrangeATIEventItem(memberIdentificationNumber_t, unsigned int)"
               ,uVar2);
  }
  return;
}
```
