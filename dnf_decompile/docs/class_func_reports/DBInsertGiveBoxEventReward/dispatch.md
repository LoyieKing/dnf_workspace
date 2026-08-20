# dispatch

`_ZN26DBInsertGiveBoxEventReward8dispatchEiiP6Stream`

`DBInsertGiveBoxEventReward::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DBInsertGiveBoxEventReward` | `0x0815d3ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0815d3ee  _ZN26DBInsertGiveBoxEventReward8dispatchEiiP6Stream
#           DBInsertGiveBoxEventReward::dispatch(int, int, Stream*)
# range [0x0815d3ee, 0x0815d7a7]
0815d3ee +0x000:  push   %ebp
0815d3ef +0x001:  mov    %esp,%ebp
0815d3f1 +0x003:  push   %esi
0815d3f2 +0x004:  push   %ebx
0815d3f3 +0x005:  sub    $0xa0,%esp
0815d3f9 +0x00b:  mov    0x14(%ebp),%eax
0815d3fc +0x00e:  mov    %eax,(%esp)
0815d3ff +0x011:  call   0815ed1e <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0xf92>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0xf92
0815d404 +0x016:  mov    %eax,-0x20(%ebp)
0815d407 +0x019:  cmpl   $0x0,-0x20(%ebp)
0815d40b +0x01d:  jne    0815d439 <+0x4b>
0815d40d +0x01f:  movl   $0x4,(%esp)
0815d414 +0x026:  call   08725800 <__cxa_allocate_exception>
0815d419 +0x02b:  mov    %eax,%edx
0815d41b +0x02d:  movl   $"context null",(%edx)
0815d421 +0x033:  movl   $0x0,0x8(%esp)
0815d429 +0x03b:  movl   $&_ZTIPKc,0x4(%esp)
0815d431 +0x043:  mov    %eax,(%esp)
0815d434 +0x046:  call   08724c50 <__cxa_throw>
0815d439 +0x04b:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0815d43e +0x050:  movl   $0x0,0x8(%esp)
0815d446 +0x058:  movl   $0x9,0x4(%esp)
0815d44e +0x060:  mov    %eax,(%esp)
0815d451 +0x063:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0815d456 +0x068:  mov    %eax,-0x1c(%ebp)
0815d459 +0x06b:  cmpl   $0x0,-0x1c(%ebp)
0815d45d +0x06f:  jne    0815d48b <+0x9d>
0815d45f +0x071:  movl   $0x4,(%esp)
0815d466 +0x078:  call   08725800 <__cxa_allocate_exception>
0815d46b +0x07d:  mov    %eax,%edx
0815d46d +0x07f:  movl   $"handle null",(%edx)
0815d473 +0x085:  movl   $0x0,0x8(%esp)
0815d47b +0x08d:  movl   $&_ZTIPKc,0x4(%esp)
0815d483 +0x095:  mov    %eax,(%esp)
0815d486 +0x098:  call   08724c50 <__cxa_throw>
0815d48b +0x09d:  movl   $0x0,(%esp)
0815d492 +0x0a4:  call   0807d750 <_init+0x48>
0815d497 +0x0a9:  mov    %eax,-0x24(%ebp)
0815d49a +0x0ac:  lea    -0x58(%ebp),%eax
0815d49d +0x0af:  mov    %eax,0x4(%esp)
0815d4a1 +0x0b3:  lea    -0x24(%ebp),%eax
0815d4a4 +0x0b6:  mov    %eax,(%esp)
0815d4a7 +0x0b9:  call   0807e360 <_init+0xc58>
0815d4ac +0x0be:  mov    -0x58(%ebp),%eax
0815d4af +0x0c1:  mov    %eax,-0x84(%ebp)
0815d4b5 +0x0c7:  mov    -0x54(%ebp),%eax
0815d4b8 +0x0ca:  mov    %eax,-0x80(%ebp)
0815d4bb +0x0cd:  mov    -0x50(%ebp),%eax
0815d4be +0x0d0:  mov    %eax,-0x7c(%ebp)
0815d4c1 +0x0d3:  mov    -0x4c(%ebp),%eax
0815d4c4 +0x0d6:  mov    %eax,-0x78(%ebp)
0815d4c7 +0x0d9:  mov    -0x48(%ebp),%eax
0815d4ca +0x0dc:  mov    %eax,-0x74(%ebp)
0815d4cd +0x0df:  mov    -0x44(%ebp),%eax
0815d4d0 +0x0e2:  mov    %eax,-0x70(%ebp)
0815d4d3 +0x0e5:  mov    -0x40(%ebp),%eax
0815d4d6 +0x0e8:  mov    %eax,-0x6c(%ebp)
0815d4d9 +0x0eb:  mov    -0x3c(%ebp),%eax
0815d4dc +0x0ee:  mov    %eax,-0x68(%ebp)
0815d4df +0x0f1:  mov    -0x38(%ebp),%eax
0815d4e2 +0x0f4:  mov    %eax,-0x64(%ebp)
0815d4e5 +0x0f7:  mov    -0x34(%ebp),%eax
0815d4e8 +0x0fa:  mov    %eax,-0x60(%ebp)
0815d4eb +0x0fd:  mov    -0x30(%ebp),%eax
0815d4ee +0x100:  mov    %eax,-0x5c(%ebp)
0815d4f1 +0x103:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0815d4f6 +0x108:  mov    0x37c(%eax),%eax
0815d4fc +0x10e:  mov    %eax,-0x7c(%ebp)
0815d4ff +0x111:  movl   $0x0,-0x80(%ebp)
0815d506 +0x118:  movl   $0x0,-0x84(%ebp)
0815d510 +0x122:  lea    -0x84(%ebp),%eax
0815d516 +0x128:  mov    %eax,(%esp)
0815d519 +0x12b:  call   0807e820 <_init+0x1118>
0815d51e +0x130:  mov    %eax,-0x18(%ebp)
0815d521 +0x133:  mov    -0x50(%ebp),%edx
0815d524 +0x136:  mov    -0x7c(%ebp),%eax
0815d527 +0x139:  cmp    %eax,%edx
0815d529 +0x13b:  jge    0815d532 <+0x144>
0815d52b +0x13d:  subl   $&_ZL14gUnicodeBuffer+0xac54,-0x18(%ebp)
0815d532 +0x144:  mov    -0x20(%ebp),%eax
0815d535 +0x147:  mov    (%eax),%eax
0815d537 +0x149:  movl   $0x0,0x4(%esp)
0815d53f +0x151:  mov    %eax,(%esp)
0815d542 +0x154:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0815d547 +0x159:  mov    -0x18(%ebp),%edx
0815d54a +0x15c:  mov    %edx,0xc(%esp)
0815d54e +0x160:  mov    %eax,0x8(%esp)
0815d552 +0x164:  movl   $"seLect m_id from event_1306_account_reward_2nd where m_id=%s and occ_date > FROM_UNIXTIME(%d)",0x4(%esp)
0815d55a +0x16c:  mov    -0x1c(%ebp),%eax
0815d55d +0x16f:  mov    %eax,(%esp)
0815d560 +0x172:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0815d565 +0x177:  movl   $0x1,0x4(%esp)
0815d56d +0x17f:  mov    -0x1c(%ebp),%eax
0815d570 +0x182:  mov    %eax,(%esp)
0815d573 +0x185:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0815d578 +0x18a:  xor    $0x1,%eax
0815d57b +0x18d:  test   %al,%al
0815d57d +0x18f:  je     0815d5ab <+0x1bd>
0815d57f +0x191:  movl   $0x4,(%esp)
0815d586 +0x198:  call   08725800 <__cxa_allocate_exception>
0815d58b +0x19d:  mov    %eax,%edx
0815d58d +0x19f:  movl   $"select_exec",(%edx)
0815d593 +0x1a5:  movl   $0x0,0x8(%esp)
0815d59b +0x1ad:  movl   $&_ZTIPKc,0x4(%esp)
0815d5a3 +0x1b5:  mov    %eax,(%esp)
0815d5a6 +0x1b8:  call   08724c50 <__cxa_throw>
0815d5ab +0x1bd:  mov    -0x1c(%ebp),%eax
0815d5ae +0x1c0:  mov    %eax,(%esp)
0815d5b1 +0x1c3:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0815d5b6 +0x1c8:  mov    %eax,-0x14(%ebp)
0815d5b9 +0x1cb:  cmpl   $0x0,-0x14(%ebp)
0815d5bd +0x1cf:  jne    0815d797 <+0x3a9>
0815d5c3 +0x1d5:  mov    -0x20(%ebp),%eax
0815d5c6 +0x1d8:  mov    0x4(%eax),%ebx
0815d5c9 +0x1db:  mov    -0x20(%ebp),%eax
0815d5cc +0x1de:  mov    (%eax),%eax
0815d5ce +0x1e0:  movl   $0x0,0x4(%esp)
0815d5d6 +0x1e8:  mov    %eax,(%esp)
0815d5d9 +0x1eb:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0815d5de +0x1f0:  mov    %ebx,0xc(%esp)
0815d5e2 +0x1f4:  mov    %eax,0x8(%esp)
0815d5e6 +0x1f8:  movl   $"inSert into event_1306_account_reward_2nd (m_id , charac_no , occ_date ) values (%s , %u , now())",0x4(%esp)
0815d5ee +0x200:  mov    -0x1c(%ebp),%eax
0815d5f1 +0x203:  mov    %eax,(%esp)
0815d5f4 +0x206:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0815d5f9 +0x20b:  movl   $0x1,0x4(%esp)
0815d601 +0x213:  mov    -0x1c(%ebp),%eax
0815d604 +0x216:  mov    %eax,(%esp)
0815d607 +0x219:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0815d60c +0x21e:  xor    $0x1,%eax
0815d60f +0x221:  test   %al,%al
0815d611 +0x223:  je     0815d63f <+0x251>
0815d613 +0x225:  movl   $0x4,(%esp)
0815d61a +0x22c:  call   08725800 <__cxa_allocate_exception>
0815d61f +0x231:  mov    %eax,%edx
0815d621 +0x233:  movl   $"insert_exec",(%edx)
0815d627 +0x239:  movl   $0x0,0x8(%esp)
0815d62f +0x241:  movl   $&_ZTIPKc,0x4(%esp)
0815d637 +0x249:  mov    %eax,(%esp)
0815d63a +0x24c:  call   08724c50 <__cxa_throw>
0815d63f +0x251:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0815d644 +0x256:  movl   $0x3a5,0x8(%esp)
0815d64c +0x25e:  movl   $"localtaiwan/Dispatcher/Taiwan_DbThread.cpp",0x4(%esp)
0815d654 +0x266:  mov    %eax,(%esp)
0815d657 +0x269:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0815d65c +0x26e:  movl   $0x1,0x8(%esp)
0815d664 +0x276:  mov    %eax,0x4(%esp)
0815d668 +0x27a:  lea    -0x2c(%ebp),%eax
0815d66b +0x27d:  mov    %eax,(%esp)
0815d66e +0x280:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0815d673 +0x285:  mov    0x10(%ebp),%eax
0815d676 +0x288:  mov    %eax,0x8(%esp)
0815d67a +0x28c:  movl   $0x10,0x4(%esp)
0815d682 +0x294:  lea    -0x2c(%ebp),%eax
0815d685 +0x297:  mov    %eax,(%esp)
0815d688 +0x29a:  call   08163950 <_ZN6Taiwan15internal_streamER12CStreamGuardN18TaiwanInternalPack1TEi>  ; Taiwan::internal_stream(CStreamGuard&, TaiwanInternalPack::T, int)
0815d68d +0x29f:  lea    -0x2c(%ebp),%eax
0815d690 +0x2a2:  mov    %eax,(%esp)
0815d693 +0x2a5:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0815d698 +0x2aa:  mov    %eax,(%esp)
0815d69b +0x2ad:  call   0815ed08 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0xf7c>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0xf7c
0815d6a0 +0x2b2:  mov    %eax,-0x10(%ebp)
0815d6a3 +0x2b5:  cmpl   $0x0,-0x10(%ebp)
0815d6a7 +0x2b9:  jne    0815d6d5 <+0x2e7>
0815d6a9 +0x2bb:  movl   $0x4,(%esp)
0815d6b0 +0x2c2:  call   08725800 <__cxa_allocate_exception>
0815d6b5 +0x2c7:  mov    %eax,%edx
0815d6b7 +0x2c9:  movl   $"stream",(%edx)
0815d6bd +0x2cf:  movl   $0x0,0x8(%esp)
0815d6c5 +0x2d7:  movl   $&_ZTIPKc,0x4(%esp)
0815d6cd +0x2df:  mov    %eax,(%esp)
0815d6d0 +0x2e2:  call   08724c50 <__cxa_throw>
0815d6d5 +0x2e7:  mov    -0x20(%ebp),%eax
0815d6d8 +0x2ea:  mov    0x4(%eax),%edx
0815d6db +0x2ed:  mov    -0x10(%ebp),%eax
0815d6de +0x2f0:  mov    %edx,0x4(%eax)
0815d6e1 +0x2f3:  mov    -0x20(%ebp),%eax
0815d6e4 +0x2f6:  mov    (%eax),%edx
0815d6e6 +0x2f8:  mov    -0x10(%ebp),%eax
0815d6e9 +0x2fb:  mov    %edx,(%eax)
0815d6eb +0x2fd:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0815d6f0 +0x302:  lea    -0x2c(%ebp),%edx
0815d6f3 +0x305:  mov    %edx,0x8(%esp)
0815d6f7 +0x309:  movl   $0x1,0x4(%esp)
0815d6ff +0x311:  mov    %eax,(%esp)
0815d702 +0x314:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0815d707 +0x319:  jmp    0815d71e <+0x330>
0815d709 +0x31b:  mov    %edx,%ebx
0815d70b +0x31d:  mov    %eax,%esi
0815d70d +0x31f:  lea    -0x2c(%ebp),%eax
0815d710 +0x322:  mov    %eax,(%esp)
0815d713 +0x325:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0815d718 +0x32a:  mov    %esi,%eax
0815d71a +0x32c:  mov    %ebx,%edx
0815d71c +0x32e:  jmp    0815d72b <+0x33d>
0815d71e +0x330:  lea    -0x2c(%ebp),%eax
0815d721 +0x333:  mov    %eax,(%esp)
0815d724 +0x336:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0815d729 +0x33b:  jmp    0815d797 <+0x3a9>
0815d72b +0x33d:  cmp    $0x1,%edx
0815d72e +0x340:  je     0815d738 <+0x34a>
0815d730 +0x342:  mov    %eax,(%esp)
0815d733 +0x345:  call   08ae3750 <_Unwind_Resume>
0815d738 +0x34a:  mov    %eax,(%esp)
0815d73b +0x34d:  call   08725ce0 <__cxa_begin_catch>
0815d740 +0x352:  mov    %eax,-0xc(%ebp)
0815d743 +0x355:  mov    -0xc(%ebp),%eax
0815d746 +0x358:  mov    %eax,0x14(%esp)
0815d74a +0x35c:  movl   $"[Taiwan, GiveMeBox] GIVE_ME_BOX_EVENT. (error:%s)",0x10(%esp)
0815d752 +0x364:  movl   $0x3b4,0xc(%esp)
0815d75a +0x36c:  movl   $&_ZZN26DBInsertGiveBoxEventReward8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
0815d762 +0x374:  movl   $"localtaiwan/Dispatcher/Taiwan_DbThread.cpp",0x4(%esp)
0815d76a +0x37c:  movl   $0x1,(%esp)
0815d771 +0x383:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0815d776 +0x388:  mov    $0x0,%ebx
0815d77b +0x38d:  call   08725c30 <__cxa_end_catch>
0815d780 +0x392:  jmp    0815d79c <+0x3ae>
0815d782 +0x394:  mov    %edx,%ebx
0815d784 +0x396:  mov    %eax,%esi
0815d786 +0x398:  call   08725c30 <__cxa_end_catch>
0815d78b +0x39d:  mov    %esi,%eax
0815d78d +0x39f:  mov    %ebx,%edx
0815d78f +0x3a1:  mov    %eax,(%esp)
0815d792 +0x3a4:  call   08ae3750 <_Unwind_Resume>
0815d797 +0x3a9:  mov    $0x1,%ebx
0815d79c +0x3ae:  mov    %ebx,%eax
0815d79e +0x3b0:  add    $0xa0,%esp
0815d7a4 +0x3b6:  pop    %ebx
0815d7a5 +0x3b7:  pop    %esi
0815d7a6 +0x3b8:  pop    %ebp
0815d7a7 +0x3b9:  ret
```

## 反编译 C

```c
// DBInsertGiveBoxEventReward::dispatch @ 0x815d3ee

/* DBInsertGiveBoxEventReward::dispatch(int, int, Stream*) */

undefined4 __thiscall
DBInsertGiveBoxEventReward::dispatch
          (DBInsertGiveBoxEventReward *this,int param_1,int param_2,Stream *param_3)

{
  uint uVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  Stream *pSVar6;
  CStreamGuard *this_00;
  tm local_88;
  tm local_5c;
  CStreamGuard local_30 [8];
  time_t local_28;
  MSG *local_24;
  MySQL *local_20;
  int local_1c;
  int local_18;
  MSG *local_14;
  
                    /* try { // try from 0815d3ff to 0815d65b has its CatchHandler @ 0815d72b */
  local_24 = Stream::GetOutBuffer<DBInsertGiveBoxEventReward::MSG>(param_3);
  if (local_24 == (MSG *)0x0) {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = "context null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&char_const*::typeinfo,0);
  }
  local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  if (local_20 == (MySQL *)0x0) {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = "handle null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&char_const*::typeinfo,0);
  }
  local_28 = time((time_t *)0x0);
  localtime_r(&local_28,&local_5c);
  local_88.tm_sec = local_5c.tm_sec;
  local_88.tm_min = local_5c.tm_min;
  local_88.tm_hour = local_5c.tm_hour;
  local_88.tm_mday = local_5c.tm_mday;
  local_88.tm_mon = local_5c.tm_mon;
  local_88.tm_year = local_5c.tm_year;
  local_88.tm_wday = local_5c.tm_wday;
  local_88.tm_yday = local_5c.tm_yday;
  local_88.tm_isdst = local_5c.tm_isdst;
  local_88.tm_gmtoff = local_5c.tm_gmtoff;
  local_88.tm_zone = local_5c.tm_zone;
  iVar4 = G_CEnvironment();
  local_88.tm_hour = *(int *)(iVar4 + 0x37c);
  local_88.tm_min = 0;
  local_88.tm_sec = 0;
  local_1c = mktime(&local_88);
  if (local_5c.tm_hour < local_88.tm_hour) {
    local_1c = local_1c + -0x15180;
  }
  uVar5 = NumberToString(*(uint *)local_24,0);
  MySQL::set_query(local_20,
                   "seLect m_id from event_1306_account_reward_2nd where m_id=%s and occ_date > FROM_UNIXTIME(%d)"
                   ,uVar5,local_1c);
  cVar2 = MySQL::exec(local_20,true);
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = "select_exec";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&char_const*::typeinfo,0);
  }
  local_18 = MySQL::get_n_rows(local_20);
  if (local_18 == 0) {
    uVar1 = *(uint *)(local_24 + 4);
    uVar5 = NumberToString(*(uint *)local_24,0);
    MySQL::set_query(local_20,
                     "inSert into event_1306_account_reward_2nd (m_id , charac_no , occ_date ) values (%s , %u , now())"
                     ,uVar5,uVar1);
    cVar2 = MySQL::exec(local_20,true);
    if (cVar2 != '\x01') {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = "insert_exec";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&char_const*::typeinfo,0);
    }
    pSVar6 = (Stream *)
             StreamPool::Acquire(GlobalData::s_stream_pool,
                                 "localtaiwan/Dispatcher/Taiwan_DbThread.cpp",0x3a5);
    CStreamGuard::CStreamGuard(local_30,pSVar6,true);
                    /* try { // try from 0815d688 to 0815d706 has its CatchHandler @ 0815d709 */
    Taiwan::internal_stream(local_30,0x10,param_2);
    this_00 = (CStreamGuard *)CStreamGuard::operator->(local_30);
    local_14 = CStreamGuard::GetInBuffer<DBInsertGiveBoxEventReward::MSG>(this_00);
    if (local_14 == (MSG *)0x0) {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = "stream";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&char_const*::typeinfo,0);
    }
    *(uint *)(local_14 + 4) = *(uint *)(local_24 + 4);
    *(uint *)local_14 = *(uint *)local_24;
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_30);
                    /* try { // try from 0815d724 to 0815d728 has its CatchHandler @ 0815d72b */
    CStreamGuard::~CStreamGuard(local_30);
  }
  return 1;
}
```
