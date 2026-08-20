# GetUserQuest

`_ZN12DB_LoadQuest12GetUserQuestEP14SIG_LOAD_QUEST`

`DB_LoadQuest::GetUserQuest(SIG_LOAD_QUEST*)`

| 类 | 地址 |
|---|---|
| `DB_LoadQuest` | `0x0840e39a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0840e39a  _ZN12DB_LoadQuest12GetUserQuestEP14SIG_LOAD_QUEST
#           DB_LoadQuest::GetUserQuest(SIG_LOAD_QUEST*)
# range [0x0840e39a, 0x0840f48d]
0840e39a +0x0000:  push   %ebp
0840e39b +0x0001:  mov    %esp,%ebp
0840e39d +0x0003:  push   %esi
0840e39e +0x0004:  push   %ebx
0840e39f +0x0005:  sub    $0x8d00,%esp
0840e3a5 +0x000b:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0840e3aa +0x0010:  movl   $0x0,0x8(%esp)
0840e3b2 +0x0018:  movl   $0x2,0x4(%esp)
0840e3ba +0x0020:  mov    %eax,(%esp)
0840e3bd +0x0023:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0840e3c2 +0x0028:  mov    %eax,-0x18(%ebp)
0840e3c5 +0x002b:  mov    0xc(%ebp),%eax
0840e3c8 +0x002e:  mov    (%eax),%eax
0840e3ca +0x0030:  mov    %eax,0x8(%esp)
0840e3ce +0x0034:  movl   $"seLect charac_no, clear_quest,play_1, play_1_trigger, play_2, play_2_trigger, play_3, play_3_trigger, play_4, play_4_trigger, play_5, play_5_trigger,play_6, play_6_trigger, play_7, play_7_trigger, play_8, play_8_trigger, play_9, play_9_trigger, play_10, play_10_trigger,play_11, play_11_trigger, play_12, play_12_trigger, play_13, play_13_trigger, play_14, play_14_trigger, play_15, play_15_trigger,play_16, play_16_trigger, play_17, play_17_trigger, play_18, play_18_trigger, play_19, play_19_trigger, play_20, play_20_trigger,urgentQuestIndex,quest_notify from new_charac_quest  where charac_no=%u",0x4(%esp)
0840e3d6 +0x003c:  mov    -0x18(%ebp),%eax
0840e3d9 +0x003f:  mov    %eax,(%esp)
0840e3dc +0x0042:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0840e3e1 +0x0047:  lea    -0x8cdc(%ebp),%eax
0840e3e7 +0x004d:  mov    $0x8cac,%edx
0840e3ec +0x0052:  mov    %edx,0x8(%esp)
0840e3f0 +0x0056:  movl   $0x0,0x4(%esp)
0840e3f8 +0x005e:  mov    %eax,(%esp)
0840e3fb +0x0061:  call   0807dcc0 <_init+0x5b8>
0840e400 +0x0066:  movl   $0x8cac,-0x2c(%ebp)
0840e407 +0x006d:  movl   $0x0,-0x14(%ebp)
0840e40e +0x0074:  movl   $0x1,0x4(%esp)
0840e416 +0x007c:  mov    -0x18(%ebp),%eax
0840e419 +0x007f:  mov    %eax,(%esp)
0840e41c +0x0082:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0840e421 +0x0087:  xor    $0x1,%eax
0840e424 +0x008a:  test   %al,%al
0840e426 +0x008c:  je     0840e454 <+0xba>
0840e428 +0x008e:  movl   $0x4,(%esp)
0840e42f +0x0095:  call   08725800 <__cxa_allocate_exception>
0840e434 +0x009a:  mov    %eax,%edx
0840e436 +0x009c:  movl   $0x2a30,(%edx)
0840e43c +0x00a2:  movl   $0x0,0x8(%esp)
0840e444 +0x00aa:  movl   $&_ZTIi,0x4(%esp)
0840e44c +0x00b2:  mov    %eax,(%esp)
0840e44f +0x00b5:  call   08724c50 <__cxa_throw>
0840e454 +0x00ba:  mov    -0x18(%ebp),%eax
0840e457 +0x00bd:  mov    %eax,(%esp)
0840e45a +0x00c0:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0840e45f +0x00c5:  test   %eax,%eax
0840e461 +0x00c7:  sete   %al
0840e464 +0x00ca:  test   %al,%al
0840e466 +0x00cc:  je     0840e4d3 <+0x139>
0840e468 +0x00ce:  mov    0xc(%ebp),%eax
0840e46b +0x00d1:  mov    (%eax),%ebx
0840e46d +0x00d3:  movl   $0x5,0xc(%esp)
0840e475 +0x00db:  movl   $0x2a33,0x8(%esp)
0840e47d +0x00e3:  movl   $&_ZZN12DB_LoadQuest12GetUserQuestEP14SIG_LOAD_QUESTE19__PRETTY_FUNCTION__,0x4(%esp)
0840e485 +0x00eb:  lea    -0x28(%ebp),%eax
0840e488 +0x00ee:  mov    %eax,(%esp)
0840e48b +0x00f1:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840e490 +0x00f6:  mov    %ebx,0x8(%esp)
0840e494 +0x00fa:  movl   $"QUEST_EXPEND_LOG : NO QUEST DATA EXIST!! : CHARAC_NO(%u)",0x4(%esp)
0840e49c +0x0102:  lea    -0x28(%ebp),%eax
0840e49f +0x0105:  mov    %eax,(%esp)
0840e4a2 +0x0108:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840e4a7 +0x010d:  movl   $0x4,(%esp)
0840e4ae +0x0114:  call   08725800 <__cxa_allocate_exception>
0840e4b3 +0x0119:  mov    %eax,%edx
0840e4b5 +0x011b:  movl   $0x2a34,(%edx)
0840e4bb +0x0121:  movl   $0x0,0x8(%esp)
0840e4c3 +0x0129:  movl   $&_ZTIi,0x4(%esp)
0840e4cb +0x0131:  mov    %eax,(%esp)
0840e4ce +0x0134:  call   08724c50 <__cxa_throw>
0840e4d3 +0x0139:  mov    -0x18(%ebp),%eax
0840e4d6 +0x013c:  mov    %eax,(%esp)
0840e4d9 +0x013f:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0840e4de +0x0144:  xor    $0x1,%eax
0840e4e1 +0x0147:  test   %al,%al
0840e4e3 +0x0149:  je     0840e511 <+0x177>
0840e4e5 +0x014b:  movl   $0x4,(%esp)
0840e4ec +0x0152:  call   08725800 <__cxa_allocate_exception>
0840e4f1 +0x0157:  mov    %eax,%edx
0840e4f3 +0x0159:  movl   $0x2a36,(%edx)
0840e4f9 +0x015f:  movl   $0x0,0x8(%esp)
0840e501 +0x0167:  movl   $&_ZTIi,0x4(%esp)
0840e509 +0x016f:  mov    %eax,(%esp)
0840e50c +0x0172:  call   08724c50 <__cxa_throw>
0840e511 +0x0177:  movl   $0x0,-0x30(%ebp)
0840e518 +0x017e:  mov    -0x14(%ebp),%eax
0840e51b +0x0181:  addl   $0x1,-0x14(%ebp)
0840e51f +0x0185:  lea    -0x30(%ebp),%edx
0840e522 +0x0188:  mov    %edx,0x8(%esp)
0840e526 +0x018c:  mov    %eax,0x4(%esp)
0840e52a +0x0190:  mov    -0x18(%ebp),%eax
0840e52d +0x0193:  mov    %eax,(%esp)
0840e530 +0x0196:  call   080e22ae <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x54>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x54
0840e535 +0x019b:  xor    $0x1,%eax
0840e538 +0x019e:  test   %al,%al
0840e53a +0x01a0:  je     0840e568 <+0x1ce>
0840e53c +0x01a2:  movl   $0x4,(%esp)
0840e543 +0x01a9:  call   08725800 <__cxa_allocate_exception>
0840e548 +0x01ae:  mov    %eax,%edx
0840e54a +0x01b0:  movl   $0x2a39,(%edx)
0840e550 +0x01b6:  movl   $0x0,0x8(%esp)
0840e558 +0x01be:  movl   $&_ZTIi,0x4(%esp)
0840e560 +0x01c6:  mov    %eax,(%esp)
0840e563 +0x01c9:  call   08724c50 <__cxa_throw>
0840e568 +0x01ce:  mov    -0x14(%ebp),%eax
0840e56b +0x01d1:  mov    %eax,0x4(%esp)
0840e56f +0x01d5:  mov    -0x18(%ebp),%eax
0840e572 +0x01d8:  mov    %eax,(%esp)
0840e575 +0x01db:  call   081253de <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x141>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x141
0840e57a +0x01e0:  mov    %eax,-0x10(%ebp)
0840e57d +0x01e3:  mov    -0x2c(%ebp),%eax
0840e580 +0x01e6:  mov    %eax,%edx
0840e582 +0x01e8:  mov    -0x14(%ebp),%eax
0840e585 +0x01eb:  addl   $0x1,-0x14(%ebp)
0840e589 +0x01ef:  mov    %edx,0xc(%esp)
0840e58d +0x01f3:  lea    -0x8cdc(%ebp),%edx
0840e593 +0x01f9:  mov    %edx,0x8(%esp)
0840e597 +0x01fd:  mov    %eax,0x4(%esp)
0840e59b +0x0201:  mov    -0x18(%ebp),%eax
0840e59e +0x0204:  mov    %eax,(%esp)
0840e5a1 +0x0207:  call   0812531a <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x7d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x7d
0840e5a6 +0x020c:  xor    $0x1,%eax
0840e5a9 +0x020f:  test   %al,%al
0840e5ab +0x0211:  je     0840e5d9 <+0x23f>
0840e5ad +0x0213:  movl   $0x4,(%esp)
0840e5b4 +0x021a:  call   08725800 <__cxa_allocate_exception>
0840e5b9 +0x021f:  mov    %eax,%edx
0840e5bb +0x0221:  movl   $0x2a3c,(%edx)
0840e5c1 +0x0227:  movl   $0x0,0x8(%esp)
0840e5c9 +0x022f:  movl   $&_ZTIi,0x4(%esp)
0840e5d1 +0x0237:  mov    %eax,(%esp)
0840e5d4 +0x023a:  call   08724c50 <__cxa_throw>
0840e5d9 +0x023f:  mov    0xc(%ebp),%eax
0840e5dc +0x0242:  add    $0xb0,%eax
0840e5e1 +0x0247:  mov    -0x10(%ebp),%edx
0840e5e4 +0x024a:  mov    %edx,0xc(%esp)
0840e5e8 +0x024e:  lea    -0x8cdc(%ebp),%edx
0840e5ee +0x0254:  mov    %edx,0x8(%esp)
0840e5f2 +0x0258:  lea    -0x2c(%ebp),%edx
0840e5f5 +0x025b:  mov    %edx,0x4(%esp)
0840e5f9 +0x025f:  mov    %eax,(%esp)
0840e5fc +0x0262:  call   086b2102 <_Z14uncompress_zipPcRjPKcj>  ; uncompress_zip(char*, unsigned int&, char const*, unsigned int)
0840e601 +0x0267:  xor    $0x1,%eax
0840e604 +0x026a:  test   %al,%al
0840e606 +0x026c:  je     0840e634 <+0x29a>
0840e608 +0x026e:  movl   $0x4,(%esp)
0840e60f +0x0275:  call   08725800 <__cxa_allocate_exception>
0840e614 +0x027a:  mov    %eax,%edx
0840e616 +0x027c:  movl   $0x2a3d,(%edx)
0840e61c +0x0282:  movl   $0x0,0x8(%esp)
0840e624 +0x028a:  movl   $&_ZTIi,0x4(%esp)
0840e62c +0x0292:  mov    %eax,(%esp)
0840e62f +0x0295:  call   08724c50 <__cxa_throw>
0840e634 +0x029a:  nop
0840e635 +0x029b:  mov    0xc(%ebp),%eax
0840e638 +0x029e:  lea    0xc(%eax),%edx
0840e63b +0x02a1:  mov    -0x14(%ebp),%eax
0840e63e +0x02a4:  addl   $0x1,-0x14(%ebp)
0840e642 +0x02a8:  mov    %edx,0x8(%esp)
0840e646 +0x02ac:  mov    %eax,0x4(%esp)
0840e64a +0x02b0:  mov    -0x18(%ebp),%eax
0840e64d +0x02b3:  mov    %eax,(%esp)
0840e650 +0x02b6:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840e655 +0x02bb:  xor    $0x1,%eax
0840e658 +0x02be:  test   %al,%al
0840e65a +0x02c0:  je     0840e688 <+0x2ee>
0840e65c +0x02c2:  movl   $0x4,(%esp)
0840e663 +0x02c9:  call   08725800 <__cxa_allocate_exception>
0840e668 +0x02ce:  mov    %eax,%edx
0840e66a +0x02d0:  movl   $0x2a40,(%edx)
0840e670 +0x02d6:  movl   $0x0,0x8(%esp)
0840e678 +0x02de:  movl   $&_ZTIi,0x4(%esp)
0840e680 +0x02e6:  mov    %eax,(%esp)
0840e683 +0x02e9:  call   08724c50 <__cxa_throw>
0840e688 +0x02ee:  mov    0xc(%ebp),%eax
0840e68b +0x02f1:  lea    0x5c(%eax),%edx
0840e68e +0x02f4:  mov    -0x14(%ebp),%eax
0840e691 +0x02f7:  addl   $0x1,-0x14(%ebp)
0840e695 +0x02fb:  mov    %edx,0x8(%esp)
0840e699 +0x02ff:  mov    %eax,0x4(%esp)
0840e69d +0x0303:  mov    -0x18(%ebp),%eax
0840e6a0 +0x0306:  mov    %eax,(%esp)
0840e6a3 +0x0309:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840e6a8 +0x030e:  xor    $0x1,%eax
0840e6ab +0x0311:  test   %al,%al
0840e6ad +0x0313:  je     0840e6db <+0x341>
0840e6af +0x0315:  movl   $0x4,(%esp)
0840e6b6 +0x031c:  call   08725800 <__cxa_allocate_exception>
0840e6bb +0x0321:  mov    %eax,%edx
0840e6bd +0x0323:  movl   $0x2a41,(%edx)
0840e6c3 +0x0329:  movl   $0x0,0x8(%esp)
0840e6cb +0x0331:  movl   $&_ZTIi,0x4(%esp)
0840e6d3 +0x0339:  mov    %eax,(%esp)
0840e6d6 +0x033c:  call   08724c50 <__cxa_throw>
0840e6db +0x0341:  mov    0xc(%ebp),%eax
0840e6de +0x0344:  lea    0x10(%eax),%edx
0840e6e1 +0x0347:  mov    -0x14(%ebp),%eax
0840e6e4 +0x034a:  addl   $0x1,-0x14(%ebp)
0840e6e8 +0x034e:  mov    %edx,0x8(%esp)
0840e6ec +0x0352:  mov    %eax,0x4(%esp)
0840e6f0 +0x0356:  mov    -0x18(%ebp),%eax
0840e6f3 +0x0359:  mov    %eax,(%esp)
0840e6f6 +0x035c:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840e6fb +0x0361:  xor    $0x1,%eax
0840e6fe +0x0364:  test   %al,%al
0840e700 +0x0366:  je     0840e72e <+0x394>
0840e702 +0x0368:  movl   $0x4,(%esp)
0840e709 +0x036f:  call   08725800 <__cxa_allocate_exception>
0840e70e +0x0374:  mov    %eax,%edx
0840e710 +0x0376:  movl   $0x2a42,(%edx)
0840e716 +0x037c:  movl   $0x0,0x8(%esp)
0840e71e +0x0384:  movl   $&_ZTIi,0x4(%esp)
0840e726 +0x038c:  mov    %eax,(%esp)
0840e729 +0x038f:  call   08724c50 <__cxa_throw>
0840e72e +0x0394:  mov    0xc(%ebp),%eax
0840e731 +0x0397:  lea    0x60(%eax),%edx
0840e734 +0x039a:  mov    -0x14(%ebp),%eax
0840e737 +0x039d:  addl   $0x1,-0x14(%ebp)
0840e73b +0x03a1:  mov    %edx,0x8(%esp)
0840e73f +0x03a5:  mov    %eax,0x4(%esp)
0840e743 +0x03a9:  mov    -0x18(%ebp),%eax
0840e746 +0x03ac:  mov    %eax,(%esp)
0840e749 +0x03af:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840e74e +0x03b4:  xor    $0x1,%eax
0840e751 +0x03b7:  test   %al,%al
0840e753 +0x03b9:  je     0840e781 <+0x3e7>
0840e755 +0x03bb:  movl   $0x4,(%esp)
0840e75c +0x03c2:  call   08725800 <__cxa_allocate_exception>
0840e761 +0x03c7:  mov    %eax,%edx
0840e763 +0x03c9:  movl   $0x2a43,(%edx)
0840e769 +0x03cf:  movl   $0x0,0x8(%esp)
0840e771 +0x03d7:  movl   $&_ZTIi,0x4(%esp)
0840e779 +0x03df:  mov    %eax,(%esp)
0840e77c +0x03e2:  call   08724c50 <__cxa_throw>
0840e781 +0x03e7:  mov    0xc(%ebp),%eax
0840e784 +0x03ea:  lea    0x14(%eax),%edx
0840e787 +0x03ed:  mov    -0x14(%ebp),%eax
0840e78a +0x03f0:  addl   $0x1,-0x14(%ebp)
0840e78e +0x03f4:  mov    %edx,0x8(%esp)
0840e792 +0x03f8:  mov    %eax,0x4(%esp)
0840e796 +0x03fc:  mov    -0x18(%ebp),%eax
0840e799 +0x03ff:  mov    %eax,(%esp)
0840e79c +0x0402:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840e7a1 +0x0407:  xor    $0x1,%eax
0840e7a4 +0x040a:  test   %al,%al
0840e7a6 +0x040c:  je     0840e7d4 <+0x43a>
0840e7a8 +0x040e:  movl   $0x4,(%esp)
0840e7af +0x0415:  call   08725800 <__cxa_allocate_exception>
0840e7b4 +0x041a:  mov    %eax,%edx
0840e7b6 +0x041c:  movl   $0x2a44,(%edx)
0840e7bc +0x0422:  movl   $0x0,0x8(%esp)
0840e7c4 +0x042a:  movl   $&_ZTIi,0x4(%esp)
0840e7cc +0x0432:  mov    %eax,(%esp)
0840e7cf +0x0435:  call   08724c50 <__cxa_throw>
0840e7d4 +0x043a:  mov    0xc(%ebp),%eax
0840e7d7 +0x043d:  lea    0x64(%eax),%edx
0840e7da +0x0440:  mov    -0x14(%ebp),%eax
0840e7dd +0x0443:  addl   $0x1,-0x14(%ebp)
0840e7e1 +0x0447:  mov    %edx,0x8(%esp)
0840e7e5 +0x044b:  mov    %eax,0x4(%esp)
0840e7e9 +0x044f:  mov    -0x18(%ebp),%eax
0840e7ec +0x0452:  mov    %eax,(%esp)
0840e7ef +0x0455:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840e7f4 +0x045a:  xor    $0x1,%eax
0840e7f7 +0x045d:  test   %al,%al
0840e7f9 +0x045f:  je     0840e827 <+0x48d>
0840e7fb +0x0461:  movl   $0x4,(%esp)
0840e802 +0x0468:  call   08725800 <__cxa_allocate_exception>
0840e807 +0x046d:  mov    %eax,%edx
0840e809 +0x046f:  movl   $0x2a45,(%edx)
0840e80f +0x0475:  movl   $0x0,0x8(%esp)
0840e817 +0x047d:  movl   $&_ZTIi,0x4(%esp)
0840e81f +0x0485:  mov    %eax,(%esp)
0840e822 +0x0488:  call   08724c50 <__cxa_throw>
0840e827 +0x048d:  mov    0xc(%ebp),%eax
0840e82a +0x0490:  lea    0x18(%eax),%edx
0840e82d +0x0493:  mov    -0x14(%ebp),%eax
0840e830 +0x0496:  addl   $0x1,-0x14(%ebp)
0840e834 +0x049a:  mov    %edx,0x8(%esp)
0840e838 +0x049e:  mov    %eax,0x4(%esp)
0840e83c +0x04a2:  mov    -0x18(%ebp),%eax
0840e83f +0x04a5:  mov    %eax,(%esp)
0840e842 +0x04a8:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840e847 +0x04ad:  xor    $0x1,%eax
0840e84a +0x04b0:  test   %al,%al
0840e84c +0x04b2:  je     0840e87a <+0x4e0>
0840e84e +0x04b4:  movl   $0x4,(%esp)
0840e855 +0x04bb:  call   08725800 <__cxa_allocate_exception>
0840e85a +0x04c0:  mov    %eax,%edx
0840e85c +0x04c2:  movl   $0x2a46,(%edx)
0840e862 +0x04c8:  movl   $0x0,0x8(%esp)
0840e86a +0x04d0:  movl   $&_ZTIi,0x4(%esp)
0840e872 +0x04d8:  mov    %eax,(%esp)
0840e875 +0x04db:  call   08724c50 <__cxa_throw>
0840e87a +0x04e0:  mov    0xc(%ebp),%eax
0840e87d +0x04e3:  lea    0x68(%eax),%edx
0840e880 +0x04e6:  mov    -0x14(%ebp),%eax
0840e883 +0x04e9:  addl   $0x1,-0x14(%ebp)
0840e887 +0x04ed:  mov    %edx,0x8(%esp)
0840e88b +0x04f1:  mov    %eax,0x4(%esp)
0840e88f +0x04f5:  mov    -0x18(%ebp),%eax
0840e892 +0x04f8:  mov    %eax,(%esp)
0840e895 +0x04fb:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840e89a +0x0500:  xor    $0x1,%eax
0840e89d +0x0503:  test   %al,%al
0840e89f +0x0505:  je     0840e8cd <+0x533>
0840e8a1 +0x0507:  movl   $0x4,(%esp)
0840e8a8 +0x050e:  call   08725800 <__cxa_allocate_exception>
0840e8ad +0x0513:  mov    %eax,%edx
0840e8af +0x0515:  movl   $0x2a47,(%edx)
0840e8b5 +0x051b:  movl   $0x0,0x8(%esp)
0840e8bd +0x0523:  movl   $&_ZTIi,0x4(%esp)
0840e8c5 +0x052b:  mov    %eax,(%esp)
0840e8c8 +0x052e:  call   08724c50 <__cxa_throw>
0840e8cd +0x0533:  mov    0xc(%ebp),%eax
0840e8d0 +0x0536:  lea    0x1c(%eax),%edx
0840e8d3 +0x0539:  mov    -0x14(%ebp),%eax
0840e8d6 +0x053c:  addl   $0x1,-0x14(%ebp)
0840e8da +0x0540:  mov    %edx,0x8(%esp)
0840e8de +0x0544:  mov    %eax,0x4(%esp)
0840e8e2 +0x0548:  mov    -0x18(%ebp),%eax
0840e8e5 +0x054b:  mov    %eax,(%esp)
0840e8e8 +0x054e:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840e8ed +0x0553:  xor    $0x1,%eax
0840e8f0 +0x0556:  test   %al,%al
0840e8f2 +0x0558:  je     0840e920 <+0x586>
0840e8f4 +0x055a:  movl   $0x4,(%esp)
0840e8fb +0x0561:  call   08725800 <__cxa_allocate_exception>
0840e900 +0x0566:  mov    %eax,%edx
0840e902 +0x0568:  movl   $0x2a48,(%edx)
0840e908 +0x056e:  movl   $0x0,0x8(%esp)
0840e910 +0x0576:  movl   $&_ZTIi,0x4(%esp)
0840e918 +0x057e:  mov    %eax,(%esp)
0840e91b +0x0581:  call   08724c50 <__cxa_throw>
0840e920 +0x0586:  mov    0xc(%ebp),%eax
0840e923 +0x0589:  lea    0x6c(%eax),%edx
0840e926 +0x058c:  mov    -0x14(%ebp),%eax
0840e929 +0x058f:  addl   $0x1,-0x14(%ebp)
0840e92d +0x0593:  mov    %edx,0x8(%esp)
0840e931 +0x0597:  mov    %eax,0x4(%esp)
0840e935 +0x059b:  mov    -0x18(%ebp),%eax
0840e938 +0x059e:  mov    %eax,(%esp)
0840e93b +0x05a1:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840e940 +0x05a6:  xor    $0x1,%eax
0840e943 +0x05a9:  test   %al,%al
0840e945 +0x05ab:  je     0840e973 <+0x5d9>
0840e947 +0x05ad:  movl   $0x4,(%esp)
0840e94e +0x05b4:  call   08725800 <__cxa_allocate_exception>
0840e953 +0x05b9:  mov    %eax,%edx
0840e955 +0x05bb:  movl   $0x2a49,(%edx)
0840e95b +0x05c1:  movl   $0x0,0x8(%esp)
0840e963 +0x05c9:  movl   $&_ZTIi,0x4(%esp)
0840e96b +0x05d1:  mov    %eax,(%esp)
0840e96e +0x05d4:  call   08724c50 <__cxa_throw>
0840e973 +0x05d9:  mov    0xc(%ebp),%eax
0840e976 +0x05dc:  lea    0x20(%eax),%edx
0840e979 +0x05df:  mov    -0x14(%ebp),%eax
0840e97c +0x05e2:  addl   $0x1,-0x14(%ebp)
0840e980 +0x05e6:  mov    %edx,0x8(%esp)
0840e984 +0x05ea:  mov    %eax,0x4(%esp)
0840e988 +0x05ee:  mov    -0x18(%ebp),%eax
0840e98b +0x05f1:  mov    %eax,(%esp)
0840e98e +0x05f4:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840e993 +0x05f9:  xor    $0x1,%eax
0840e996 +0x05fc:  test   %al,%al
0840e998 +0x05fe:  je     0840e9c6 <+0x62c>
0840e99a +0x0600:  movl   $0x4,(%esp)
0840e9a1 +0x0607:  call   08725800 <__cxa_allocate_exception>
0840e9a6 +0x060c:  mov    %eax,%edx
0840e9a8 +0x060e:  movl   $0x2a4a,(%edx)
0840e9ae +0x0614:  movl   $0x0,0x8(%esp)
0840e9b6 +0x061c:  movl   $&_ZTIi,0x4(%esp)
0840e9be +0x0624:  mov    %eax,(%esp)
0840e9c1 +0x0627:  call   08724c50 <__cxa_throw>
0840e9c6 +0x062c:  mov    0xc(%ebp),%eax
0840e9c9 +0x062f:  lea    0x70(%eax),%edx
0840e9cc +0x0632:  mov    -0x14(%ebp),%eax
0840e9cf +0x0635:  addl   $0x1,-0x14(%ebp)
0840e9d3 +0x0639:  mov    %edx,0x8(%esp)
0840e9d7 +0x063d:  mov    %eax,0x4(%esp)
0840e9db +0x0641:  mov    -0x18(%ebp),%eax
0840e9de +0x0644:  mov    %eax,(%esp)
0840e9e1 +0x0647:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840e9e6 +0x064c:  xor    $0x1,%eax
0840e9e9 +0x064f:  test   %al,%al
0840e9eb +0x0651:  je     0840ea19 <+0x67f>
0840e9ed +0x0653:  movl   $0x4,(%esp)
0840e9f4 +0x065a:  call   08725800 <__cxa_allocate_exception>
0840e9f9 +0x065f:  mov    %eax,%edx
0840e9fb +0x0661:  movl   $0x2a4b,(%edx)
0840ea01 +0x0667:  movl   $0x0,0x8(%esp)
0840ea09 +0x066f:  movl   $&_ZTIi,0x4(%esp)
0840ea11 +0x0677:  mov    %eax,(%esp)
0840ea14 +0x067a:  call   08724c50 <__cxa_throw>
0840ea19 +0x067f:  mov    0xc(%ebp),%eax
0840ea1c +0x0682:  lea    0x24(%eax),%edx
0840ea1f +0x0685:  mov    -0x14(%ebp),%eax
0840ea22 +0x0688:  addl   $0x1,-0x14(%ebp)
0840ea26 +0x068c:  mov    %edx,0x8(%esp)
0840ea2a +0x0690:  mov    %eax,0x4(%esp)
0840ea2e +0x0694:  mov    -0x18(%ebp),%eax
0840ea31 +0x0697:  mov    %eax,(%esp)
0840ea34 +0x069a:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840ea39 +0x069f:  xor    $0x1,%eax
0840ea3c +0x06a2:  test   %al,%al
0840ea3e +0x06a4:  je     0840ea6c <+0x6d2>
0840ea40 +0x06a6:  movl   $0x4,(%esp)
0840ea47 +0x06ad:  call   08725800 <__cxa_allocate_exception>
0840ea4c +0x06b2:  mov    %eax,%edx
0840ea4e +0x06b4:  movl   $0x2a4c,(%edx)
0840ea54 +0x06ba:  movl   $0x0,0x8(%esp)
0840ea5c +0x06c2:  movl   $&_ZTIi,0x4(%esp)
0840ea64 +0x06ca:  mov    %eax,(%esp)
0840ea67 +0x06cd:  call   08724c50 <__cxa_throw>
0840ea6c +0x06d2:  mov    0xc(%ebp),%eax
0840ea6f +0x06d5:  lea    0x74(%eax),%edx
0840ea72 +0x06d8:  mov    -0x14(%ebp),%eax
0840ea75 +0x06db:  addl   $0x1,-0x14(%ebp)
0840ea79 +0x06df:  mov    %edx,0x8(%esp)
0840ea7d +0x06e3:  mov    %eax,0x4(%esp)
0840ea81 +0x06e7:  mov    -0x18(%ebp),%eax
0840ea84 +0x06ea:  mov    %eax,(%esp)
0840ea87 +0x06ed:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840ea8c +0x06f2:  xor    $0x1,%eax
0840ea8f +0x06f5:  test   %al,%al
0840ea91 +0x06f7:  je     0840eabf <+0x725>
0840ea93 +0x06f9:  movl   $0x4,(%esp)
0840ea9a +0x0700:  call   08725800 <__cxa_allocate_exception>
0840ea9f +0x0705:  mov    %eax,%edx
0840eaa1 +0x0707:  movl   $0x2a4d,(%edx)
0840eaa7 +0x070d:  movl   $0x0,0x8(%esp)
0840eaaf +0x0715:  movl   $&_ZTIi,0x4(%esp)
0840eab7 +0x071d:  mov    %eax,(%esp)
0840eaba +0x0720:  call   08724c50 <__cxa_throw>
0840eabf +0x0725:  mov    0xc(%ebp),%eax
0840eac2 +0x0728:  lea    0x28(%eax),%edx
0840eac5 +0x072b:  mov    -0x14(%ebp),%eax
0840eac8 +0x072e:  addl   $0x1,-0x14(%ebp)
0840eacc +0x0732:  mov    %edx,0x8(%esp)
0840ead0 +0x0736:  mov    %eax,0x4(%esp)
0840ead4 +0x073a:  mov    -0x18(%ebp),%eax
0840ead7 +0x073d:  mov    %eax,(%esp)
0840eada +0x0740:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840eadf +0x0745:  xor    $0x1,%eax
0840eae2 +0x0748:  test   %al,%al
0840eae4 +0x074a:  je     0840eb12 <+0x778>
0840eae6 +0x074c:  movl   $0x4,(%esp)
0840eaed +0x0753:  call   08725800 <__cxa_allocate_exception>
0840eaf2 +0x0758:  mov    %eax,%edx
0840eaf4 +0x075a:  movl   $0x2a4e,(%edx)
0840eafa +0x0760:  movl   $0x0,0x8(%esp)
0840eb02 +0x0768:  movl   $&_ZTIi,0x4(%esp)
0840eb0a +0x0770:  mov    %eax,(%esp)
0840eb0d +0x0773:  call   08724c50 <__cxa_throw>
0840eb12 +0x0778:  mov    0xc(%ebp),%eax
0840eb15 +0x077b:  lea    0x78(%eax),%edx
0840eb18 +0x077e:  mov    -0x14(%ebp),%eax
0840eb1b +0x0781:  addl   $0x1,-0x14(%ebp)
0840eb1f +0x0785:  mov    %edx,0x8(%esp)
0840eb23 +0x0789:  mov    %eax,0x4(%esp)
0840eb27 +0x078d:  mov    -0x18(%ebp),%eax
0840eb2a +0x0790:  mov    %eax,(%esp)
0840eb2d +0x0793:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840eb32 +0x0798:  xor    $0x1,%eax
0840eb35 +0x079b:  test   %al,%al
0840eb37 +0x079d:  je     0840eb65 <+0x7cb>
0840eb39 +0x079f:  movl   $0x4,(%esp)
0840eb40 +0x07a6:  call   08725800 <__cxa_allocate_exception>
0840eb45 +0x07ab:  mov    %eax,%edx
0840eb47 +0x07ad:  movl   $0x2a4f,(%edx)
0840eb4d +0x07b3:  movl   $0x0,0x8(%esp)
0840eb55 +0x07bb:  movl   $&_ZTIi,0x4(%esp)
0840eb5d +0x07c3:  mov    %eax,(%esp)
0840eb60 +0x07c6:  call   08724c50 <__cxa_throw>
0840eb65 +0x07cb:  mov    0xc(%ebp),%eax
0840eb68 +0x07ce:  lea    0x2c(%eax),%edx
0840eb6b +0x07d1:  mov    -0x14(%ebp),%eax
0840eb6e +0x07d4:  addl   $0x1,-0x14(%ebp)
0840eb72 +0x07d8:  mov    %edx,0x8(%esp)
0840eb76 +0x07dc:  mov    %eax,0x4(%esp)
0840eb7a +0x07e0:  mov    -0x18(%ebp),%eax
0840eb7d +0x07e3:  mov    %eax,(%esp)
0840eb80 +0x07e6:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840eb85 +0x07eb:  xor    $0x1,%eax
0840eb88 +0x07ee:  test   %al,%al
0840eb8a +0x07f0:  je     0840ebb8 <+0x81e>
0840eb8c +0x07f2:  movl   $0x4,(%esp)
0840eb93 +0x07f9:  call   08725800 <__cxa_allocate_exception>
0840eb98 +0x07fe:  mov    %eax,%edx
0840eb9a +0x0800:  movl   $0x2a50,(%edx)
0840eba0 +0x0806:  movl   $0x0,0x8(%esp)
0840eba8 +0x080e:  movl   $&_ZTIi,0x4(%esp)
0840ebb0 +0x0816:  mov    %eax,(%esp)
0840ebb3 +0x0819:  call   08724c50 <__cxa_throw>
0840ebb8 +0x081e:  mov    0xc(%ebp),%eax
0840ebbb +0x0821:  lea    0x7c(%eax),%edx
0840ebbe +0x0824:  mov    -0x14(%ebp),%eax
0840ebc1 +0x0827:  addl   $0x1,-0x14(%ebp)
0840ebc5 +0x082b:  mov    %edx,0x8(%esp)
0840ebc9 +0x082f:  mov    %eax,0x4(%esp)
0840ebcd +0x0833:  mov    -0x18(%ebp),%eax
0840ebd0 +0x0836:  mov    %eax,(%esp)
0840ebd3 +0x0839:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840ebd8 +0x083e:  xor    $0x1,%eax
0840ebdb +0x0841:  test   %al,%al
0840ebdd +0x0843:  je     0840ec0b <+0x871>
0840ebdf +0x0845:  movl   $0x4,(%esp)
0840ebe6 +0x084c:  call   08725800 <__cxa_allocate_exception>
0840ebeb +0x0851:  mov    %eax,%edx
0840ebed +0x0853:  movl   $0x2a51,(%edx)
0840ebf3 +0x0859:  movl   $0x0,0x8(%esp)
0840ebfb +0x0861:  movl   $&_ZTIi,0x4(%esp)
0840ec03 +0x0869:  mov    %eax,(%esp)
0840ec06 +0x086c:  call   08724c50 <__cxa_throw>
0840ec0b +0x0871:  mov    0xc(%ebp),%eax
0840ec0e +0x0874:  lea    0x30(%eax),%edx
0840ec11 +0x0877:  mov    -0x14(%ebp),%eax
0840ec14 +0x087a:  addl   $0x1,-0x14(%ebp)
0840ec18 +0x087e:  mov    %edx,0x8(%esp)
0840ec1c +0x0882:  mov    %eax,0x4(%esp)
0840ec20 +0x0886:  mov    -0x18(%ebp),%eax
0840ec23 +0x0889:  mov    %eax,(%esp)
0840ec26 +0x088c:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840ec2b +0x0891:  xor    $0x1,%eax
0840ec2e +0x0894:  test   %al,%al
0840ec30 +0x0896:  je     0840ec5e <+0x8c4>
0840ec32 +0x0898:  movl   $0x4,(%esp)
0840ec39 +0x089f:  call   08725800 <__cxa_allocate_exception>
0840ec3e +0x08a4:  mov    %eax,%edx
0840ec40 +0x08a6:  movl   $0x2a52,(%edx)
0840ec46 +0x08ac:  movl   $0x0,0x8(%esp)
0840ec4e +0x08b4:  movl   $&_ZTIi,0x4(%esp)
0840ec56 +0x08bc:  mov    %eax,(%esp)
0840ec59 +0x08bf:  call   08724c50 <__cxa_throw>
0840ec5e +0x08c4:  mov    0xc(%ebp),%eax
0840ec61 +0x08c7:  lea    0x80(%eax),%edx
0840ec67 +0x08cd:  mov    -0x14(%ebp),%eax
0840ec6a +0x08d0:  addl   $0x1,-0x14(%ebp)
0840ec6e +0x08d4:  mov    %edx,0x8(%esp)
0840ec72 +0x08d8:  mov    %eax,0x4(%esp)
0840ec76 +0x08dc:  mov    -0x18(%ebp),%eax
0840ec79 +0x08df:  mov    %eax,(%esp)
0840ec7c +0x08e2:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840ec81 +0x08e7:  xor    $0x1,%eax
0840ec84 +0x08ea:  test   %al,%al
0840ec86 +0x08ec:  je     0840ecb4 <+0x91a>
0840ec88 +0x08ee:  movl   $0x4,(%esp)
0840ec8f +0x08f5:  call   08725800 <__cxa_allocate_exception>
0840ec94 +0x08fa:  mov    %eax,%edx
0840ec96 +0x08fc:  movl   $0x2a53,(%edx)
0840ec9c +0x0902:  movl   $0x0,0x8(%esp)
0840eca4 +0x090a:  movl   $&_ZTIi,0x4(%esp)
0840ecac +0x0912:  mov    %eax,(%esp)
0840ecaf +0x0915:  call   08724c50 <__cxa_throw>
0840ecb4 +0x091a:  mov    0xc(%ebp),%eax
0840ecb7 +0x091d:  lea    0x34(%eax),%edx
0840ecba +0x0920:  mov    -0x14(%ebp),%eax
0840ecbd +0x0923:  addl   $0x1,-0x14(%ebp)
0840ecc1 +0x0927:  mov    %edx,0x8(%esp)
0840ecc5 +0x092b:  mov    %eax,0x4(%esp)
0840ecc9 +0x092f:  mov    -0x18(%ebp),%eax
0840eccc +0x0932:  mov    %eax,(%esp)
0840eccf +0x0935:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840ecd4 +0x093a:  xor    $0x1,%eax
0840ecd7 +0x093d:  test   %al,%al
0840ecd9 +0x093f:  je     0840ed07 <+0x96d>
0840ecdb +0x0941:  movl   $0x4,(%esp)
0840ece2 +0x0948:  call   08725800 <__cxa_allocate_exception>
0840ece7 +0x094d:  mov    %eax,%edx
0840ece9 +0x094f:  movl   $0x2a55,(%edx)
0840ecef +0x0955:  movl   $0x0,0x8(%esp)
0840ecf7 +0x095d:  movl   $&_ZTIi,0x4(%esp)
0840ecff +0x0965:  mov    %eax,(%esp)
0840ed02 +0x0968:  call   08724c50 <__cxa_throw>
0840ed07 +0x096d:  mov    0xc(%ebp),%eax
0840ed0a +0x0970:  lea    0x84(%eax),%edx
0840ed10 +0x0976:  mov    -0x14(%ebp),%eax
0840ed13 +0x0979:  addl   $0x1,-0x14(%ebp)
0840ed17 +0x097d:  mov    %edx,0x8(%esp)
0840ed1b +0x0981:  mov    %eax,0x4(%esp)
0840ed1f +0x0985:  mov    -0x18(%ebp),%eax
0840ed22 +0x0988:  mov    %eax,(%esp)
0840ed25 +0x098b:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840ed2a +0x0990:  xor    $0x1,%eax
0840ed2d +0x0993:  test   %al,%al
0840ed2f +0x0995:  je     0840ed5d <+0x9c3>
0840ed31 +0x0997:  movl   $0x4,(%esp)
0840ed38 +0x099e:  call   08725800 <__cxa_allocate_exception>
0840ed3d +0x09a3:  mov    %eax,%edx
0840ed3f +0x09a5:  movl   $0x2a56,(%edx)
0840ed45 +0x09ab:  movl   $0x0,0x8(%esp)
0840ed4d +0x09b3:  movl   $&_ZTIi,0x4(%esp)
0840ed55 +0x09bb:  mov    %eax,(%esp)
0840ed58 +0x09be:  call   08724c50 <__cxa_throw>
0840ed5d +0x09c3:  mov    0xc(%ebp),%eax
0840ed60 +0x09c6:  lea    0x38(%eax),%edx
0840ed63 +0x09c9:  mov    -0x14(%ebp),%eax
0840ed66 +0x09cc:  addl   $0x1,-0x14(%ebp)
0840ed6a +0x09d0:  mov    %edx,0x8(%esp)
0840ed6e +0x09d4:  mov    %eax,0x4(%esp)
0840ed72 +0x09d8:  mov    -0x18(%ebp),%eax
0840ed75 +0x09db:  mov    %eax,(%esp)
0840ed78 +0x09de:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840ed7d +0x09e3:  xor    $0x1,%eax
0840ed80 +0x09e6:  test   %al,%al
0840ed82 +0x09e8:  je     0840edb0 <+0xa16>
0840ed84 +0x09ea:  movl   $0x4,(%esp)
0840ed8b +0x09f1:  call   08725800 <__cxa_allocate_exception>
0840ed90 +0x09f6:  mov    %eax,%edx
0840ed92 +0x09f8:  movl   $0x2a57,(%edx)
0840ed98 +0x09fe:  movl   $0x0,0x8(%esp)
0840eda0 +0x0a06:  movl   $&_ZTIi,0x4(%esp)
0840eda8 +0x0a0e:  mov    %eax,(%esp)
0840edab +0x0a11:  call   08724c50 <__cxa_throw>
0840edb0 +0x0a16:  mov    0xc(%ebp),%eax
0840edb3 +0x0a19:  lea    0x88(%eax),%edx
0840edb9 +0x0a1f:  mov    -0x14(%ebp),%eax
0840edbc +0x0a22:  addl   $0x1,-0x14(%ebp)
0840edc0 +0x0a26:  mov    %edx,0x8(%esp)
0840edc4 +0x0a2a:  mov    %eax,0x4(%esp)
0840edc8 +0x0a2e:  mov    -0x18(%ebp),%eax
0840edcb +0x0a31:  mov    %eax,(%esp)
0840edce +0x0a34:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840edd3 +0x0a39:  xor    $0x1,%eax
0840edd6 +0x0a3c:  test   %al,%al
0840edd8 +0x0a3e:  je     0840ee06 <+0xa6c>
0840edda +0x0a40:  movl   $0x4,(%esp)
0840ede1 +0x0a47:  call   08725800 <__cxa_allocate_exception>
0840ede6 +0x0a4c:  mov    %eax,%edx
0840ede8 +0x0a4e:  movl   $0x2a58,(%edx)
0840edee +0x0a54:  movl   $0x0,0x8(%esp)
0840edf6 +0x0a5c:  movl   $&_ZTIi,0x4(%esp)
0840edfe +0x0a64:  mov    %eax,(%esp)
0840ee01 +0x0a67:  call   08724c50 <__cxa_throw>
0840ee06 +0x0a6c:  mov    0xc(%ebp),%eax
0840ee09 +0x0a6f:  lea    0x3c(%eax),%edx
0840ee0c +0x0a72:  mov    -0x14(%ebp),%eax
0840ee0f +0x0a75:  addl   $0x1,-0x14(%ebp)
0840ee13 +0x0a79:  mov    %edx,0x8(%esp)
0840ee17 +0x0a7d:  mov    %eax,0x4(%esp)
0840ee1b +0x0a81:  mov    -0x18(%ebp),%eax
0840ee1e +0x0a84:  mov    %eax,(%esp)
0840ee21 +0x0a87:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840ee26 +0x0a8c:  xor    $0x1,%eax
0840ee29 +0x0a8f:  test   %al,%al
0840ee2b +0x0a91:  je     0840ee59 <+0xabf>
0840ee2d +0x0a93:  movl   $0x4,(%esp)
0840ee34 +0x0a9a:  call   08725800 <__cxa_allocate_exception>
0840ee39 +0x0a9f:  mov    %eax,%edx
0840ee3b +0x0aa1:  movl   $0x2a59,(%edx)
0840ee41 +0x0aa7:  movl   $0x0,0x8(%esp)
0840ee49 +0x0aaf:  movl   $&_ZTIi,0x4(%esp)
0840ee51 +0x0ab7:  mov    %eax,(%esp)
0840ee54 +0x0aba:  call   08724c50 <__cxa_throw>
0840ee59 +0x0abf:  mov    0xc(%ebp),%eax
0840ee5c +0x0ac2:  lea    0x8c(%eax),%edx
0840ee62 +0x0ac8:  mov    -0x14(%ebp),%eax
0840ee65 +0x0acb:  addl   $0x1,-0x14(%ebp)
0840ee69 +0x0acf:  mov    %edx,0x8(%esp)
0840ee6d +0x0ad3:  mov    %eax,0x4(%esp)
0840ee71 +0x0ad7:  mov    -0x18(%ebp),%eax
0840ee74 +0x0ada:  mov    %eax,(%esp)
0840ee77 +0x0add:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840ee7c +0x0ae2:  xor    $0x1,%eax
0840ee7f +0x0ae5:  test   %al,%al
0840ee81 +0x0ae7:  je     0840eeaf <+0xb15>
0840ee83 +0x0ae9:  movl   $0x4,(%esp)
0840ee8a +0x0af0:  call   08725800 <__cxa_allocate_exception>
0840ee8f +0x0af5:  mov    %eax,%edx
0840ee91 +0x0af7:  movl   $0x2a5a,(%edx)
0840ee97 +0x0afd:  movl   $0x0,0x8(%esp)
0840ee9f +0x0b05:  movl   $&_ZTIi,0x4(%esp)
0840eea7 +0x0b0d:  mov    %eax,(%esp)
0840eeaa +0x0b10:  call   08724c50 <__cxa_throw>
0840eeaf +0x0b15:  mov    0xc(%ebp),%eax
0840eeb2 +0x0b18:  lea    0x40(%eax),%edx
0840eeb5 +0x0b1b:  mov    -0x14(%ebp),%eax
0840eeb8 +0x0b1e:  addl   $0x1,-0x14(%ebp)
0840eebc +0x0b22:  mov    %edx,0x8(%esp)
0840eec0 +0x0b26:  mov    %eax,0x4(%esp)
0840eec4 +0x0b2a:  mov    -0x18(%ebp),%eax
0840eec7 +0x0b2d:  mov    %eax,(%esp)
0840eeca +0x0b30:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840eecf +0x0b35:  xor    $0x1,%eax
0840eed2 +0x0b38:  test   %al,%al
0840eed4 +0x0b3a:  je     0840ef02 <+0xb68>
0840eed6 +0x0b3c:  movl   $0x4,(%esp)
0840eedd +0x0b43:  call   08725800 <__cxa_allocate_exception>
0840eee2 +0x0b48:  mov    %eax,%edx
0840eee4 +0x0b4a:  movl   $0x2a5b,(%edx)
0840eeea +0x0b50:  movl   $0x0,0x8(%esp)
0840eef2 +0x0b58:  movl   $&_ZTIi,0x4(%esp)
0840eefa +0x0b60:  mov    %eax,(%esp)
0840eefd +0x0b63:  call   08724c50 <__cxa_throw>
0840ef02 +0x0b68:  mov    0xc(%ebp),%eax
0840ef05 +0x0b6b:  lea    0x90(%eax),%edx
0840ef0b +0x0b71:  mov    -0x14(%ebp),%eax
0840ef0e +0x0b74:  addl   $0x1,-0x14(%ebp)
0840ef12 +0x0b78:  mov    %edx,0x8(%esp)
0840ef16 +0x0b7c:  mov    %eax,0x4(%esp)
0840ef1a +0x0b80:  mov    -0x18(%ebp),%eax
0840ef1d +0x0b83:  mov    %eax,(%esp)
0840ef20 +0x0b86:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840ef25 +0x0b8b:  xor    $0x1,%eax
0840ef28 +0x0b8e:  test   %al,%al
0840ef2a +0x0b90:  je     0840ef58 <+0xbbe>
0840ef2c +0x0b92:  movl   $0x4,(%esp)
0840ef33 +0x0b99:  call   08725800 <__cxa_allocate_exception>
0840ef38 +0x0b9e:  mov    %eax,%edx
0840ef3a +0x0ba0:  movl   $0x2a5c,(%edx)
0840ef40 +0x0ba6:  movl   $0x0,0x8(%esp)
0840ef48 +0x0bae:  movl   $&_ZTIi,0x4(%esp)
0840ef50 +0x0bb6:  mov    %eax,(%esp)
0840ef53 +0x0bb9:  call   08724c50 <__cxa_throw>
0840ef58 +0x0bbe:  mov    0xc(%ebp),%eax
0840ef5b +0x0bc1:  lea    0x44(%eax),%edx
0840ef5e +0x0bc4:  mov    -0x14(%ebp),%eax
0840ef61 +0x0bc7:  addl   $0x1,-0x14(%ebp)
0840ef65 +0x0bcb:  mov    %edx,0x8(%esp)
0840ef69 +0x0bcf:  mov    %eax,0x4(%esp)
0840ef6d +0x0bd3:  mov    -0x18(%ebp),%eax
0840ef70 +0x0bd6:  mov    %eax,(%esp)
0840ef73 +0x0bd9:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840ef78 +0x0bde:  xor    $0x1,%eax
0840ef7b +0x0be1:  test   %al,%al
0840ef7d +0x0be3:  je     0840efab <+0xc11>
0840ef7f +0x0be5:  movl   $0x4,(%esp)
0840ef86 +0x0bec:  call   08725800 <__cxa_allocate_exception>
0840ef8b +0x0bf1:  mov    %eax,%edx
0840ef8d +0x0bf3:  movl   $0x2a5d,(%edx)
0840ef93 +0x0bf9:  movl   $0x0,0x8(%esp)
0840ef9b +0x0c01:  movl   $&_ZTIi,0x4(%esp)
0840efa3 +0x0c09:  mov    %eax,(%esp)
0840efa6 +0x0c0c:  call   08724c50 <__cxa_throw>
0840efab +0x0c11:  mov    0xc(%ebp),%eax
0840efae +0x0c14:  lea    0x94(%eax),%edx
0840efb4 +0x0c1a:  mov    -0x14(%ebp),%eax
0840efb7 +0x0c1d:  addl   $0x1,-0x14(%ebp)
0840efbb +0x0c21:  mov    %edx,0x8(%esp)
0840efbf +0x0c25:  mov    %eax,0x4(%esp)
0840efc3 +0x0c29:  mov    -0x18(%ebp),%eax
0840efc6 +0x0c2c:  mov    %eax,(%esp)
0840efc9 +0x0c2f:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840efce +0x0c34:  xor    $0x1,%eax
0840efd1 +0x0c37:  test   %al,%al
0840efd3 +0x0c39:  je     0840f001 <+0xc67>
0840efd5 +0x0c3b:  movl   $0x4,(%esp)
0840efdc +0x0c42:  call   08725800 <__cxa_allocate_exception>
0840efe1 +0x0c47:  mov    %eax,%edx
0840efe3 +0x0c49:  movl   $0x2a5e,(%edx)
0840efe9 +0x0c4f:  movl   $0x0,0x8(%esp)
0840eff1 +0x0c57:  movl   $&_ZTIi,0x4(%esp)
0840eff9 +0x0c5f:  mov    %eax,(%esp)
0840effc +0x0c62:  call   08724c50 <__cxa_throw>
0840f001 +0x0c67:  mov    0xc(%ebp),%eax
0840f004 +0x0c6a:  lea    0x48(%eax),%edx
0840f007 +0x0c6d:  mov    -0x14(%ebp),%eax
0840f00a +0x0c70:  addl   $0x1,-0x14(%ebp)
0840f00e +0x0c74:  mov    %edx,0x8(%esp)
0840f012 +0x0c78:  mov    %eax,0x4(%esp)
0840f016 +0x0c7c:  mov    -0x18(%ebp),%eax
0840f019 +0x0c7f:  mov    %eax,(%esp)
0840f01c +0x0c82:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840f021 +0x0c87:  xor    $0x1,%eax
0840f024 +0x0c8a:  test   %al,%al
0840f026 +0x0c8c:  je     0840f054 <+0xcba>
0840f028 +0x0c8e:  movl   $0x4,(%esp)
0840f02f +0x0c95:  call   08725800 <__cxa_allocate_exception>
0840f034 +0x0c9a:  mov    %eax,%edx
0840f036 +0x0c9c:  movl   $0x2a5f,(%edx)
0840f03c +0x0ca2:  movl   $0x0,0x8(%esp)
0840f044 +0x0caa:  movl   $&_ZTIi,0x4(%esp)
0840f04c +0x0cb2:  mov    %eax,(%esp)
0840f04f +0x0cb5:  call   08724c50 <__cxa_throw>
0840f054 +0x0cba:  mov    0xc(%ebp),%eax
0840f057 +0x0cbd:  lea    0x98(%eax),%edx
0840f05d +0x0cc3:  mov    -0x14(%ebp),%eax
0840f060 +0x0cc6:  addl   $0x1,-0x14(%ebp)
0840f064 +0x0cca:  mov    %edx,0x8(%esp)
0840f068 +0x0cce:  mov    %eax,0x4(%esp)
0840f06c +0x0cd2:  mov    -0x18(%ebp),%eax
0840f06f +0x0cd5:  mov    %eax,(%esp)
0840f072 +0x0cd8:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840f077 +0x0cdd:  xor    $0x1,%eax
0840f07a +0x0ce0:  test   %al,%al
0840f07c +0x0ce2:  je     0840f0aa <+0xd10>
0840f07e +0x0ce4:  movl   $0x4,(%esp)
0840f085 +0x0ceb:  call   08725800 <__cxa_allocate_exception>
0840f08a +0x0cf0:  mov    %eax,%edx
0840f08c +0x0cf2:  movl   $0x2a60,(%edx)
0840f092 +0x0cf8:  movl   $0x0,0x8(%esp)
0840f09a +0x0d00:  movl   $&_ZTIi,0x4(%esp)
0840f0a2 +0x0d08:  mov    %eax,(%esp)
0840f0a5 +0x0d0b:  call   08724c50 <__cxa_throw>
0840f0aa +0x0d10:  mov    0xc(%ebp),%eax
0840f0ad +0x0d13:  lea    0x4c(%eax),%edx
0840f0b0 +0x0d16:  mov    -0x14(%ebp),%eax
0840f0b3 +0x0d19:  addl   $0x1,-0x14(%ebp)
0840f0b7 +0x0d1d:  mov    %edx,0x8(%esp)
0840f0bb +0x0d21:  mov    %eax,0x4(%esp)
0840f0bf +0x0d25:  mov    -0x18(%ebp),%eax
0840f0c2 +0x0d28:  mov    %eax,(%esp)
0840f0c5 +0x0d2b:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840f0ca +0x0d30:  xor    $0x1,%eax
0840f0cd +0x0d33:  test   %al,%al
0840f0cf +0x0d35:  je     0840f0fd <+0xd63>
0840f0d1 +0x0d37:  movl   $0x4,(%esp)
0840f0d8 +0x0d3e:  call   08725800 <__cxa_allocate_exception>
0840f0dd +0x0d43:  mov    %eax,%edx
0840f0df +0x0d45:  movl   $0x2a61,(%edx)
0840f0e5 +0x0d4b:  movl   $0x0,0x8(%esp)
0840f0ed +0x0d53:  movl   $&_ZTIi,0x4(%esp)
0840f0f5 +0x0d5b:  mov    %eax,(%esp)
0840f0f8 +0x0d5e:  call   08724c50 <__cxa_throw>
0840f0fd +0x0d63:  mov    0xc(%ebp),%eax
0840f100 +0x0d66:  lea    0x9c(%eax),%edx
0840f106 +0x0d6c:  mov    -0x14(%ebp),%eax
0840f109 +0x0d6f:  addl   $0x1,-0x14(%ebp)
0840f10d +0x0d73:  mov    %edx,0x8(%esp)
0840f111 +0x0d77:  mov    %eax,0x4(%esp)
0840f115 +0x0d7b:  mov    -0x18(%ebp),%eax
0840f118 +0x0d7e:  mov    %eax,(%esp)
0840f11b +0x0d81:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840f120 +0x0d86:  xor    $0x1,%eax
0840f123 +0x0d89:  test   %al,%al
0840f125 +0x0d8b:  je     0840f153 <+0xdb9>
0840f127 +0x0d8d:  movl   $0x4,(%esp)
0840f12e +0x0d94:  call   08725800 <__cxa_allocate_exception>
0840f133 +0x0d99:  mov    %eax,%edx
0840f135 +0x0d9b:  movl   $0x2a62,(%edx)
0840f13b +0x0da1:  movl   $0x0,0x8(%esp)
0840f143 +0x0da9:  movl   $&_ZTIi,0x4(%esp)
0840f14b +0x0db1:  mov    %eax,(%esp)
0840f14e +0x0db4:  call   08724c50 <__cxa_throw>
0840f153 +0x0db9:  mov    0xc(%ebp),%eax
0840f156 +0x0dbc:  lea    0x50(%eax),%edx
0840f159 +0x0dbf:  mov    -0x14(%ebp),%eax
0840f15c +0x0dc2:  addl   $0x1,-0x14(%ebp)
0840f160 +0x0dc6:  mov    %edx,0x8(%esp)
0840f164 +0x0dca:  mov    %eax,0x4(%esp)
0840f168 +0x0dce:  mov    -0x18(%ebp),%eax
0840f16b +0x0dd1:  mov    %eax,(%esp)
0840f16e +0x0dd4:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840f173 +0x0dd9:  xor    $0x1,%eax
0840f176 +0x0ddc:  test   %al,%al
0840f178 +0x0dde:  je     0840f1a6 <+0xe0c>
0840f17a +0x0de0:  movl   $0x4,(%esp)
0840f181 +0x0de7:  call   08725800 <__cxa_allocate_exception>
0840f186 +0x0dec:  mov    %eax,%edx
0840f188 +0x0dee:  movl   $0x2a63,(%edx)
0840f18e +0x0df4:  movl   $0x0,0x8(%esp)
0840f196 +0x0dfc:  movl   $&_ZTIi,0x4(%esp)
0840f19e +0x0e04:  mov    %eax,(%esp)
0840f1a1 +0x0e07:  call   08724c50 <__cxa_throw>
0840f1a6 +0x0e0c:  mov    0xc(%ebp),%eax
0840f1a9 +0x0e0f:  lea    0xa0(%eax),%edx
0840f1af +0x0e15:  mov    -0x14(%ebp),%eax
0840f1b2 +0x0e18:  addl   $0x1,-0x14(%ebp)
0840f1b6 +0x0e1c:  mov    %edx,0x8(%esp)
0840f1ba +0x0e20:  mov    %eax,0x4(%esp)
0840f1be +0x0e24:  mov    -0x18(%ebp),%eax
0840f1c1 +0x0e27:  mov    %eax,(%esp)
0840f1c4 +0x0e2a:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840f1c9 +0x0e2f:  xor    $0x1,%eax
0840f1cc +0x0e32:  test   %al,%al
0840f1ce +0x0e34:  je     0840f1fc <+0xe62>
0840f1d0 +0x0e36:  movl   $0x4,(%esp)
0840f1d7 +0x0e3d:  call   08725800 <__cxa_allocate_exception>
0840f1dc +0x0e42:  mov    %eax,%edx
0840f1de +0x0e44:  movl   $0x2a64,(%edx)
0840f1e4 +0x0e4a:  movl   $0x0,0x8(%esp)
0840f1ec +0x0e52:  movl   $&_ZTIi,0x4(%esp)
0840f1f4 +0x0e5a:  mov    %eax,(%esp)
0840f1f7 +0x0e5d:  call   08724c50 <__cxa_throw>
0840f1fc +0x0e62:  mov    0xc(%ebp),%eax
0840f1ff +0x0e65:  lea    0x54(%eax),%edx
0840f202 +0x0e68:  mov    -0x14(%ebp),%eax
0840f205 +0x0e6b:  addl   $0x1,-0x14(%ebp)
0840f209 +0x0e6f:  mov    %edx,0x8(%esp)
0840f20d +0x0e73:  mov    %eax,0x4(%esp)
0840f211 +0x0e77:  mov    -0x18(%ebp),%eax
0840f214 +0x0e7a:  mov    %eax,(%esp)
0840f217 +0x0e7d:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840f21c +0x0e82:  xor    $0x1,%eax
0840f21f +0x0e85:  test   %al,%al
0840f221 +0x0e87:  je     0840f24f <+0xeb5>
0840f223 +0x0e89:  movl   $0x4,(%esp)
0840f22a +0x0e90:  call   08725800 <__cxa_allocate_exception>
0840f22f +0x0e95:  mov    %eax,%edx
0840f231 +0x0e97:  movl   $0x2a65,(%edx)
0840f237 +0x0e9d:  movl   $0x0,0x8(%esp)
0840f23f +0x0ea5:  movl   $&_ZTIi,0x4(%esp)
0840f247 +0x0ead:  mov    %eax,(%esp)
0840f24a +0x0eb0:  call   08724c50 <__cxa_throw>
0840f24f +0x0eb5:  mov    0xc(%ebp),%eax
0840f252 +0x0eb8:  lea    0xa4(%eax),%edx
0840f258 +0x0ebe:  mov    -0x14(%ebp),%eax
0840f25b +0x0ec1:  addl   $0x1,-0x14(%ebp)
0840f25f +0x0ec5:  mov    %edx,0x8(%esp)
0840f263 +0x0ec9:  mov    %eax,0x4(%esp)
0840f267 +0x0ecd:  mov    -0x18(%ebp),%eax
0840f26a +0x0ed0:  mov    %eax,(%esp)
0840f26d +0x0ed3:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840f272 +0x0ed8:  xor    $0x1,%eax
0840f275 +0x0edb:  test   %al,%al
0840f277 +0x0edd:  je     0840f2a5 <+0xf0b>
0840f279 +0x0edf:  movl   $0x4,(%esp)
0840f280 +0x0ee6:  call   08725800 <__cxa_allocate_exception>
0840f285 +0x0eeb:  mov    %eax,%edx
0840f287 +0x0eed:  movl   $0x2a66,(%edx)
0840f28d +0x0ef3:  movl   $0x0,0x8(%esp)
0840f295 +0x0efb:  movl   $&_ZTIi,0x4(%esp)
0840f29d +0x0f03:  mov    %eax,(%esp)
0840f2a0 +0x0f06:  call   08724c50 <__cxa_throw>
0840f2a5 +0x0f0b:  mov    0xc(%ebp),%eax
0840f2a8 +0x0f0e:  lea    0x58(%eax),%edx
0840f2ab +0x0f11:  mov    -0x14(%ebp),%eax
0840f2ae +0x0f14:  addl   $0x1,-0x14(%ebp)
0840f2b2 +0x0f18:  mov    %edx,0x8(%esp)
0840f2b6 +0x0f1c:  mov    %eax,0x4(%esp)
0840f2ba +0x0f20:  mov    -0x18(%ebp),%eax
0840f2bd +0x0f23:  mov    %eax,(%esp)
0840f2c0 +0x0f26:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840f2c5 +0x0f2b:  xor    $0x1,%eax
0840f2c8 +0x0f2e:  test   %al,%al
0840f2ca +0x0f30:  je     0840f2f8 <+0xf5e>
0840f2cc +0x0f32:  movl   $0x4,(%esp)
0840f2d3 +0x0f39:  call   08725800 <__cxa_allocate_exception>
0840f2d8 +0x0f3e:  mov    %eax,%edx
0840f2da +0x0f40:  movl   $0x2a67,(%edx)
0840f2e0 +0x0f46:  movl   $0x0,0x8(%esp)
0840f2e8 +0x0f4e:  movl   $&_ZTIi,0x4(%esp)
0840f2f0 +0x0f56:  mov    %eax,(%esp)
0840f2f3 +0x0f59:  call   08724c50 <__cxa_throw>
0840f2f8 +0x0f5e:  mov    0xc(%ebp),%eax
0840f2fb +0x0f61:  lea    0xa8(%eax),%edx
0840f301 +0x0f67:  mov    -0x14(%ebp),%eax
0840f304 +0x0f6a:  addl   $0x1,-0x14(%ebp)
0840f308 +0x0f6e:  mov    %edx,0x8(%esp)
0840f30c +0x0f72:  mov    %eax,0x4(%esp)
0840f310 +0x0f76:  mov    -0x18(%ebp),%eax
0840f313 +0x0f79:  mov    %eax,(%esp)
0840f316 +0x0f7c:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840f31b +0x0f81:  xor    $0x1,%eax
0840f31e +0x0f84:  test   %al,%al
0840f320 +0x0f86:  je     0840f34e <+0xfb4>
0840f322 +0x0f88:  movl   $0x4,(%esp)
0840f329 +0x0f8f:  call   08725800 <__cxa_allocate_exception>
0840f32e +0x0f94:  mov    %eax,%edx
0840f330 +0x0f96:  movl   $0x2a68,(%edx)
0840f336 +0x0f9c:  movl   $0x0,0x8(%esp)
0840f33e +0x0fa4:  movl   $&_ZTIi,0x4(%esp)
0840f346 +0x0fac:  mov    %eax,(%esp)
0840f349 +0x0faf:  call   08724c50 <__cxa_throw>
0840f34e +0x0fb4:  mov    0xc(%ebp),%eax
0840f351 +0x0fb7:  lea    0xac(%eax),%edx
0840f357 +0x0fbd:  mov    -0x14(%ebp),%eax
0840f35a +0x0fc0:  addl   $0x1,-0x14(%ebp)
0840f35e +0x0fc4:  mov    %edx,0x8(%esp)
0840f362 +0x0fc8:  mov    %eax,0x4(%esp)
0840f366 +0x0fcc:  mov    -0x18(%ebp),%eax
0840f369 +0x0fcf:  mov    %eax,(%esp)
0840f36c +0x0fd2:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840f371 +0x0fd7:  xor    $0x1,%eax
0840f374 +0x0fda:  test   %al,%al
0840f376 +0x0fdc:  je     0840f3a4 <+0x100a>
0840f378 +0x0fde:  movl   $0x4,(%esp)
0840f37f +0x0fe5:  call   08725800 <__cxa_allocate_exception>
0840f384 +0x0fea:  mov    %eax,%edx
0840f386 +0x0fec:  movl   $0x2a6f,(%edx)
0840f38c +0x0ff2:  movl   $0x0,0x8(%esp)
0840f394 +0x0ffa:  movl   $&_ZTIi,0x4(%esp)
0840f39c +0x1002:  mov    %eax,(%esp)
0840f39f +0x1005:  call   08724c50 <__cxa_throw>
0840f3a4 +0x100a:  mov    0xc(%ebp),%eax
0840f3a7 +0x100d:  lea    0x75e0(%eax),%edx
0840f3ad +0x1013:  mov    -0x14(%ebp),%eax
0840f3b0 +0x1016:  addl   $0x1,-0x14(%ebp)
0840f3b4 +0x101a:  movl   $0x28,0xc(%esp)
0840f3bc +0x1022:  mov    %edx,0x8(%esp)
0840f3c0 +0x1026:  mov    %eax,0x4(%esp)
0840f3c4 +0x102a:  mov    -0x18(%ebp),%eax
0840f3c7 +0x102d:  mov    %eax,(%esp)
0840f3ca +0x1030:  call   0812531a <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x7d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x7d
0840f3cf +0x1035:  xor    $0x1,%eax
0840f3d2 +0x1038:  test   %al,%al
0840f3d4 +0x103a:  je     0840f47d <+0x10e3>
0840f3da +0x1040:  movl   $0x4,(%esp)
0840f3e1 +0x1047:  call   08725800 <__cxa_allocate_exception>
0840f3e6 +0x104c:  mov    %eax,%edx
0840f3e8 +0x104e:  movl   $0x2a7c,(%edx)
0840f3ee +0x1054:  movl   $0x0,0x8(%esp)
0840f3f6 +0x105c:  movl   $&_ZTIi,0x4(%esp)
0840f3fe +0x1064:  mov    %eax,(%esp)
0840f401 +0x1067:  call   08724c50 <__cxa_throw>
0840f406 +0x106c:  cmp    $0x1,%edx
0840f409 +0x106f:  je     0840f413 <+0x1079>
0840f40b +0x1071:  mov    %eax,(%esp)
0840f40e +0x1074:  call   08ae3750 <_Unwind_Resume>
0840f413 +0x1079:  mov    %eax,(%esp)
0840f416 +0x107c:  call   08725ce0 <__cxa_begin_catch>
0840f41b +0x1081:  mov    (%eax),%eax
0840f41d +0x1083:  mov    %eax,-0xc(%ebp)
0840f420 +0x1086:  mov    0xc(%ebp),%eax
0840f423 +0x1089:  mov    (%eax),%eax
0840f425 +0x108b:  mov    %eax,0x18(%esp)
0840f429 +0x108f:  mov    -0xc(%ebp),%eax
0840f42c +0x1092:  mov    %eax,0x14(%esp)
0840f430 +0x1096:  movl   $"3RD_EXPEND : DB_LoadQuest::GetUserQuest line(%d) charac_no(%u)",0x10(%esp)
0840f438 +0x109e:  movl   $0x2a81,0xc(%esp)
0840f440 +0x10a6:  movl   $&_ZZN12DB_LoadQuest12GetUserQuestEP14SIG_LOAD_QUESTE19__PRETTY_FUNCTION__,0x8(%esp)
0840f448 +0x10ae:  movl   $"DBThread.cpp",0x4(%esp)
0840f450 +0x10b6:  movl   $0x1,(%esp)
0840f457 +0x10bd:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0840f45c +0x10c2:  mov    $0x0,%ebx
0840f461 +0x10c7:  call   08725c30 <__cxa_end_catch>
0840f466 +0x10cc:  jmp    0840f482 <+0x10e8>
0840f468 +0x10ce:  mov    %edx,%ebx
0840f46a +0x10d0:  mov    %eax,%esi
0840f46c +0x10d2:  call   08725c30 <__cxa_end_catch>
0840f471 +0x10d7:  mov    %esi,%eax
0840f473 +0x10d9:  mov    %ebx,%edx
0840f475 +0x10db:  mov    %eax,(%esp)
0840f478 +0x10de:  call   08ae3750 <_Unwind_Resume>
0840f47d +0x10e3:  mov    $0x1,%ebx
0840f482 +0x10e8:  mov    %ebx,%eax
0840f484 +0x10ea:  add    $0x8d00,%esp
0840f48a +0x10f0:  pop    %ebx
0840f48b +0x10f1:  pop    %esi
0840f48c +0x10f2:  pop    %ebp
0840f48d +0x10f3:  ret
```

## 反编译 C

```c
// DB_LoadQuest::GetUserQuest @ 0x840e39a

/* DB_LoadQuest::GetUserQuest(SIG_LOAD_QUEST*) */

undefined4 __thiscall DB_LoadQuest::GetUserQuest(DB_LoadQuest *this,SIG_LOAD_QUEST *param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  char local_8ce0 [36012];
  uint local_34;
  uint local_30;
  cMyTrace local_2c [16];
  MySQL *local_1c;
  int local_18;
  uint local_14;
  
  local_1c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(local_1c,
                   "seLect charac_no, clear_quest,play_1, play_1_trigger, play_2, play_2_trigger, play_3, play_3_trigger, play_4, play_4_trigger, play_5, play_5_trigger,play_6, play_6_trigger, play_7, play_7_trigger, play_8, play_8_trigger, play_9, play_9_trigger, play_10, play_10_trigger,play_11, play_11_trigger, play_12, play_12_trigger, play_13, play_13_trigger, play_14, play_14_trigger, play_15, play_15_trigger,play_16, play_16_trigger, play_17, play_17_trigger, play_18, play_18_trigger, play_19, play_19_trigger, play_20, play_20_trigger,urgentQuestIndex,quest_notify from new_charac_quest  where charac_no=%u"
                   ,*(undefined4 *)param_1);
  memset(local_8ce0,0,0x8cac);
  local_30 = 0x8cac;
  local_18 = 0;
                    /* try { // try from 0840e41c to 0840f405 has its CatchHandler @ 0840f406 */
  cVar2 = MySQL::exec(local_1c,true);
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a30;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  iVar4 = MySQL::get_n_rows(local_1c);
  if (iVar4 == 0) {
    uVar1 = *(undefined4 *)param_1;
    cMyTrace::cMyTrace(local_2c,"bool DB_LoadQuest::GetUserQuest(SIG_LOAD_QUEST*)",0x2a33,5);
    cMyTrace::operator()(local_2c,"QUEST_EXPEND_LOG : NO QUEST DATA EXIST!! : CHARAC_NO(%u)",uVar1);
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a34;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  cVar2 = MySQL::fetch(local_1c);
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a36;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_34 = 0;
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,&local_34);
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a39;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_14 = MySQL::get_binary_length(local_1c,local_18);
  iVar4 = local_18;
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_binary(local_1c,iVar4,local_8ce0,local_30);
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a3c;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  cVar2 = uncompress_zip((char *)(param_1 + 0xb0),&local_30,local_8ce0,local_14);
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a3d;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0xc));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a40;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x5c));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a41;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x10));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a42;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x60));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a43;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x14));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a44;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 100));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a45;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x18));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a46;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x68));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a47;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x1c));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a48;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x6c));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a49;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x20));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a4a;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x70));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a4b;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x24));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a4c;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x74));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a4d;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x28));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a4e;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x78));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a4f;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x2c));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a50;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x7c));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a51;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x30));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a52;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x80));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a53;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x34));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a55;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x84));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a56;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x38));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a57;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x88));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a58;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x3c));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a59;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x8c));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a5a;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x40));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a5b;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x90));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a5c;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x44));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a5d;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x94));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a5e;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x48));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a5f;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x98));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a60;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x4c));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a61;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x9c));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a62;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x50));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a63;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0xa0));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a64;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x54));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a65;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0xa4));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a66;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x58));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a67;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0xa8));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a68;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0xac));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a6f;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_binary(local_1c,iVar4,param_1 + 0x75e0,0x28);
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a7c;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  return 1;
}
```
