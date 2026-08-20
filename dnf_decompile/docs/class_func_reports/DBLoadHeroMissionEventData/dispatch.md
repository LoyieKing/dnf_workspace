# dispatch

`_ZN26DBLoadHeroMissionEventData8dispatchEiiP6Stream`

`DBLoadHeroMissionEventData::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DBLoadHeroMissionEventData` | `0x0815d7a8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0815d7a8  _ZN26DBLoadHeroMissionEventData8dispatchEiiP6Stream
#           DBLoadHeroMissionEventData::dispatch(int, int, Stream*)
# range [0x0815d7a8, 0x0815db97]
0815d7a8 +0x000:  push   %ebp
0815d7a9 +0x001:  mov    %esp,%ebp
0815d7ab +0x003:  push   %esi
0815d7ac +0x004:  push   %ebx
0815d7ad +0x005:  sub    $0x140,%esp
0815d7b3 +0x00b:  mov    0x14(%ebp),%eax
0815d7b6 +0x00e:  mov    %eax,(%esp)
0815d7b9 +0x011:  call   0815ed72 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0xfe6>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0xfe6
0815d7be +0x016:  mov    %eax,-0x18(%ebp)
0815d7c1 +0x019:  cmpl   $0x0,-0x18(%ebp)
0815d7c5 +0x01d:  jne    0815d7f3 <+0x4b>
0815d7c7 +0x01f:  movl   $0x4,(%esp)
0815d7ce +0x026:  call   08725800 <__cxa_allocate_exception>
0815d7d3 +0x02b:  mov    %eax,%edx
0815d7d5 +0x02d:  movl   $"context_null",(%edx)
0815d7db +0x033:  movl   $0x0,0x8(%esp)
0815d7e3 +0x03b:  movl   $&_ZTIPKc,0x4(%esp)
0815d7eb +0x043:  mov    %eax,(%esp)
0815d7ee +0x046:  call   08724c50 <__cxa_throw>
0815d7f3 +0x04b:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0815d7f8 +0x050:  movl   $0x0,0x8(%esp)
0815d800 +0x058:  movl   $0x9,0x4(%esp)
0815d808 +0x060:  mov    %eax,(%esp)
0815d80b +0x063:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0815d810 +0x068:  mov    %eax,-0x14(%ebp)
0815d813 +0x06b:  cmpl   $0x0,-0x14(%ebp)
0815d817 +0x06f:  jne    0815d845 <+0x9d>
0815d819 +0x071:  movl   $0x4,(%esp)
0815d820 +0x078:  call   08725800 <__cxa_allocate_exception>
0815d825 +0x07d:  mov    %eax,%edx
0815d827 +0x07f:  movl   $"handle_null",(%edx)
0815d82d +0x085:  movl   $0x0,0x8(%esp)
0815d835 +0x08d:  movl   $&_ZTIPKc,0x4(%esp)
0815d83d +0x095:  mov    %eax,(%esp)
0815d840 +0x098:  call   08724c50 <__cxa_throw>
0815d845 +0x09d:  mov    -0x18(%ebp),%eax
0815d848 +0x0a0:  mov    (%eax),%ebx
0815d84a +0x0a2:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0815d84f +0x0a7:  mov    %eax,(%esp)
0815d852 +0x0aa:  call   08106ce0 <_GLOBAL__I__ZN15CmmChannelProxyC2ESsi+0x162>  ; global constructors keyed to CmmChannelProxy::CmmChannelProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x162
0815d857 +0x0af:  mov    %ebx,0xc(%esp)
0815d85b +0x0b3:  mov    %eax,0x8(%esp)
0815d85f +0x0b7:  movl   $"seLect mission from event_hero_mission_data where server_group=%d and charac_no=%u",0x4(%esp)
0815d867 +0x0bf:  mov    -0x14(%ebp),%eax
0815d86a +0x0c2:  mov    %eax,(%esp)
0815d86d +0x0c5:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0815d872 +0x0ca:  movl   $0x1,0x4(%esp)
0815d87a +0x0d2:  mov    -0x14(%ebp),%eax
0815d87d +0x0d5:  mov    %eax,(%esp)
0815d880 +0x0d8:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0815d885 +0x0dd:  xor    $0x1,%eax
0815d888 +0x0e0:  test   %al,%al
0815d88a +0x0e2:  je     0815d8b8 <+0x110>
0815d88c +0x0e4:  movl   $0x4,(%esp)
0815d893 +0x0eb:  call   08725800 <__cxa_allocate_exception>
0815d898 +0x0f0:  mov    %eax,%edx
0815d89a +0x0f2:  movl   $"exec_select",(%edx)
0815d8a0 +0x0f8:  movl   $0x0,0x8(%esp)
0815d8a8 +0x100:  movl   $&_ZTIPKc,0x4(%esp)
0815d8b0 +0x108:  mov    %eax,(%esp)
0815d8b3 +0x10b:  call   08724c50 <__cxa_throw>
0815d8b8 +0x110:  lea    -0x124(%ebp),%eax
0815d8be +0x116:  mov    %eax,(%esp)
0815d8c1 +0x119:  call   081639f0 <_ZN6Taiwan22SigLoadHeroMissionDataC1Ev>  ; Taiwan::SigLoadHeroMissionData::SigLoadHeroMissionData()
0815d8c6 +0x11e:  lea    -0x124(%ebp),%eax
0815d8cc +0x124:  mov    %eax,(%esp)
0815d8cf +0x127:  call   08163a04 <_ZN6Taiwan22SigLoadHeroMissionData4initEv>  ; Taiwan::SigLoadHeroMissionData::init()
0815d8d4 +0x12c:  mov    -0x18(%ebp),%eax
0815d8d7 +0x12f:  mov    (%eax),%eax
0815d8d9 +0x131:  mov    %eax,-0x124(%ebp)
0815d8df +0x137:  mov    -0x14(%ebp),%eax
0815d8e2 +0x13a:  mov    %eax,(%esp)
0815d8e5 +0x13d:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0815d8ea +0x142:  test   %eax,%eax
0815d8ec +0x144:  sete   %al
0815d8ef +0x147:  test   %al,%al
0815d8f1 +0x149:  je     0815d990 <+0x1e8>
0815d8f7 +0x14f:  mov    -0x18(%ebp),%eax
0815d8fa +0x152:  mov    (%eax),%ebx
0815d8fc +0x154:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0815d901 +0x159:  mov    %eax,(%esp)
0815d904 +0x15c:  call   08106ce0 <_GLOBAL__I__ZN15CmmChannelProxyC2ESsi+0x162>  ; global constructors keyed to CmmChannelProxy::CmmChannelProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x162
0815d909 +0x161:  mov    %ebx,0xc(%esp)
0815d90d +0x165:  mov    %eax,0x8(%esp)
0815d911 +0x169:  movl   $"inSert into event_hero_mission_data values(%d,%u,'',now())",0x4(%esp)
0815d919 +0x171:  mov    -0x14(%ebp),%eax
0815d91c +0x174:  mov    %eax,(%esp)
0815d91f +0x177:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0815d924 +0x17c:  movl   $0x1,0x4(%esp)
0815d92c +0x184:  mov    -0x14(%ebp),%eax
0815d92f +0x187:  mov    %eax,(%esp)
0815d932 +0x18a:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0815d937 +0x18f:  xor    $0x1,%eax
0815d93a +0x192:  test   %al,%al
0815d93c +0x194:  je     0815d96a <+0x1c2>
0815d93e +0x196:  movl   $0x4,(%esp)
0815d945 +0x19d:  call   08725800 <__cxa_allocate_exception>
0815d94a +0x1a2:  mov    %eax,%edx
0815d94c +0x1a4:  movl   $"exec_insert",(%edx)
0815d952 +0x1aa:  movl   $0x0,0x8(%esp)
0815d95a +0x1b2:  movl   $&_ZTIPKc,0x4(%esp)
0815d962 +0x1ba:  mov    %eax,(%esp)
0815d965 +0x1bd:  call   08724c50 <__cxa_throw>
0815d96a +0x1c2:  movl   $0x100,0x8(%esp)
0815d972 +0x1ca:  movl   $0x0,0x4(%esp)
0815d97a +0x1d2:  lea    -0x124(%ebp),%eax
0815d980 +0x1d8:  add    $0x4,%eax
0815d983 +0x1db:  mov    %eax,(%esp)
0815d986 +0x1de:  call   0807dcc0 <_init+0x5b8>
0815d98b +0x1e3:  jmp    0815da29 <+0x281>
0815d990 +0x1e8:  mov    -0x14(%ebp),%eax
0815d993 +0x1eb:  mov    %eax,(%esp)
0815d996 +0x1ee:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0815d99b +0x1f3:  xor    $0x1,%eax
0815d99e +0x1f6:  test   %al,%al
0815d9a0 +0x1f8:  je     0815d9ce <+0x226>
0815d9a2 +0x1fa:  movl   $0x4,(%esp)
0815d9a9 +0x201:  call   08725800 <__cxa_allocate_exception>
0815d9ae +0x206:  mov    %eax,%edx
0815d9b0 +0x208:  movl   $"fetch",(%edx)
0815d9b6 +0x20e:  movl   $0x0,0x8(%esp)
0815d9be +0x216:  movl   $&_ZTIPKc,0x4(%esp)
0815d9c6 +0x21e:  mov    %eax,(%esp)
0815d9c9 +0x221:  call   08724c50 <__cxa_throw>
0815d9ce +0x226:  movl   $0x100,0xc(%esp)
0815d9d6 +0x22e:  lea    -0x124(%ebp),%eax
0815d9dc +0x234:  add    $0x4,%eax
0815d9df +0x237:  mov    %eax,0x8(%esp)
0815d9e3 +0x23b:  movl   $0x0,0x4(%esp)
0815d9eb +0x243:  mov    -0x14(%ebp),%eax
0815d9ee +0x246:  mov    %eax,(%esp)
0815d9f1 +0x249:  call   0812531a <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x7d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x7d
0815d9f6 +0x24e:  xor    $0x1,%eax
0815d9f9 +0x251:  test   %al,%al
0815d9fb +0x253:  je     0815da29 <+0x281>
0815d9fd +0x255:  movl   $0x4,(%esp)
0815da04 +0x25c:  call   08725800 <__cxa_allocate_exception>
0815da09 +0x261:  mov    %eax,%edx
0815da0b +0x263:  movl   $"get_binary",(%edx)
0815da11 +0x269:  movl   $0x0,0x8(%esp)
0815da19 +0x271:  movl   $&_ZTIPKc,0x4(%esp)
0815da21 +0x279:  mov    %eax,(%esp)
0815da24 +0x27c:  call   08724c50 <__cxa_throw>
0815da29 +0x281:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0815da2e +0x286:  movl   $0x3ea,0x8(%esp)
0815da36 +0x28e:  movl   $"localtaiwan/Dispatcher/Taiwan_DbThread.cpp",0x4(%esp)
0815da3e +0x296:  mov    %eax,(%esp)
0815da41 +0x299:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0815da46 +0x29e:  movl   $0x1,0x8(%esp)
0815da4e +0x2a6:  mov    %eax,0x4(%esp)
0815da52 +0x2aa:  lea    -0x20(%ebp),%eax
0815da55 +0x2ad:  mov    %eax,(%esp)
0815da58 +0x2b0:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0815da5d +0x2b5:  mov    0x10(%ebp),%eax
0815da60 +0x2b8:  mov    %eax,0x8(%esp)
0815da64 +0x2bc:  movl   $0x12,0x4(%esp)
0815da6c +0x2c4:  lea    -0x20(%ebp),%eax
0815da6f +0x2c7:  mov    %eax,(%esp)
0815da72 +0x2ca:  call   08163950 <_ZN6Taiwan15internal_streamER12CStreamGuardN18TaiwanInternalPack1TEi>  ; Taiwan::internal_stream(CStreamGuard&, TaiwanInternalPack::T, int)
0815da77 +0x2cf:  lea    -0x20(%ebp),%eax
0815da7a +0x2d2:  mov    %eax,(%esp)
0815da7d +0x2d5:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0815da82 +0x2da:  mov    %eax,(%esp)
0815da85 +0x2dd:  call   0815edc6 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x103a>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x103a
0815da8a +0x2e2:  mov    %eax,-0x10(%ebp)
0815da8d +0x2e5:  cmpl   $0x0,-0x10(%ebp)
0815da91 +0x2e9:  jne    0815dabf <+0x317>
0815da93 +0x2eb:  movl   $0x4,(%esp)
0815da9a +0x2f2:  call   08725800 <__cxa_allocate_exception>
0815da9f +0x2f7:  mov    %eax,%edx
0815daa1 +0x2f9:  movl   $"stream_alloc",(%edx)
0815daa7 +0x2ff:  movl   $0x0,0x8(%esp)
0815daaf +0x307:  movl   $&_ZTIPKc,0x4(%esp)
0815dab7 +0x30f:  mov    %eax,(%esp)
0815daba +0x312:  call   08724c50 <__cxa_throw>
0815dabf +0x317:  movl   $0x104,0x8(%esp)
0815dac7 +0x31f:  lea    -0x124(%ebp),%eax
0815dacd +0x325:  mov    %eax,0x4(%esp)
0815dad1 +0x329:  mov    -0x10(%ebp),%eax
0815dad4 +0x32c:  mov    %eax,(%esp)
0815dad7 +0x32f:  call   0807d8a0 <_init+0x198>
0815dadc +0x334:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0815dae1 +0x339:  lea    -0x20(%ebp),%edx
0815dae4 +0x33c:  mov    %edx,0x8(%esp)
0815dae8 +0x340:  movl   $0x1,0x4(%esp)
0815daf0 +0x348:  mov    %eax,(%esp)
0815daf3 +0x34b:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0815daf8 +0x350:  mov    %eax,%ebx
0815dafa +0x352:  lea    -0x20(%ebp),%eax
0815dafd +0x355:  mov    %eax,(%esp)
0815db00 +0x358:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0815db05 +0x35d:  jmp    0815db8b <+0x3e3>
0815db0a +0x362:  mov    %edx,%ebx
0815db0c +0x364:  mov    %eax,%esi
0815db0e +0x366:  lea    -0x20(%ebp),%eax
0815db11 +0x369:  mov    %eax,(%esp)
0815db14 +0x36c:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0815db19 +0x371:  mov    %esi,%eax
0815db1b +0x373:  mov    %ebx,%edx
0815db1d +0x375:  jmp    0815db1f <+0x377>
0815db1f +0x377:  cmp    $0x1,%edx
0815db22 +0x37a:  je     0815db2c <+0x384>
0815db24 +0x37c:  mov    %eax,(%esp)
0815db27 +0x37f:  call   08ae3750 <_Unwind_Resume>
0815db2c +0x384:  mov    %eax,(%esp)
0815db2f +0x387:  call   08725ce0 <__cxa_begin_catch>
0815db34 +0x38c:  mov    %eax,-0xc(%ebp)
0815db37 +0x38f:  mov    -0xc(%ebp),%eax
0815db3a +0x392:  mov    %eax,0x14(%esp)
0815db3e +0x396:  movl   $"[HeroMission] Error load hero mission. (msg:%s)",0x10(%esp)
0815db46 +0x39e:  movl   $0x3f5,0xc(%esp)
0815db4e +0x3a6:  movl   $&_ZZN26DBLoadHeroMissionEventData8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
0815db56 +0x3ae:  movl   $"localtaiwan/Dispatcher/Taiwan_DbThread.cpp",0x4(%esp)
0815db5e +0x3b6:  movl   $0x1,(%esp)
0815db65 +0x3bd:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0815db6a +0x3c2:  mov    $0x0,%ebx
0815db6f +0x3c7:  call   08725c30 <__cxa_end_catch>
0815db74 +0x3cc:  jmp    0815db8b <+0x3e3>
0815db76 +0x3ce:  mov    %edx,%ebx
0815db78 +0x3d0:  mov    %eax,%esi
0815db7a +0x3d2:  call   08725c30 <__cxa_end_catch>
0815db7f +0x3d7:  mov    %esi,%eax
0815db81 +0x3d9:  mov    %ebx,%edx
0815db83 +0x3db:  mov    %eax,(%esp)
0815db86 +0x3de:  call   08ae3750 <_Unwind_Resume>
0815db8b +0x3e3:  mov    %ebx,%eax
0815db8d +0x3e5:  add    $0x140,%esp
0815db93 +0x3eb:  pop    %ebx
0815db94 +0x3ec:  pop    %esi
0815db95 +0x3ed:  pop    %ebp
0815db96 +0x3ee:  ret
0815db97 +0x3ef:  nop
```

## 反编译 C

```c
// DBLoadHeroMissionEventData::dispatch @ 0x815d7a8

/* DBLoadHeroMissionEventData::dispatch(int, int, Stream*) */

undefined4 __thiscall
DBLoadHeroMissionEventData::dispatch
          (DBLoadHeroMissionEventData *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  CEnvironment *pCVar3;
  undefined4 uVar4;
  int iVar5;
  Stream *pSVar6;
  CStreamGuard *this_00;
  undefined4 uVar7;
  undefined4 local_128;
  undefined1 auStack_124 [256];
  CStreamGuard local_24 [8];
  SigLoadHeroMissionData *local_1c;
  MySQL *local_18;
  SigLoadHeroMissionData *local_14;
  
                    /* try { // try from 0815d7b9 to 0815da45 has its CatchHandler @ 0815db1f */
  local_1c = Stream::GetOutBuffer<Taiwan::SigLoadHeroMissionData>(param_3);
  if (local_1c == (SigLoadHeroMissionData *)0x0) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "context_null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  if (local_18 == (MySQL *)0x0) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "handle_null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  uVar7 = *(undefined4 *)local_1c;
  pCVar3 = (CEnvironment *)G_CEnvironment();
  uVar4 = CEnvironment::get_server_group(pCVar3);
  MySQL::set_query(local_18,
                   "seLect mission from event_hero_mission_data where server_group=%d and charac_no=%u"
                   ,uVar4,uVar7);
  cVar1 = MySQL::exec(local_18,true);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "exec_select";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  Taiwan::SigLoadHeroMissionData::SigLoadHeroMissionData((SigLoadHeroMissionData *)&local_128);
  Taiwan::SigLoadHeroMissionData::init((SigLoadHeroMissionData *)&local_128);
  local_128 = *(undefined4 *)local_1c;
  iVar5 = MySQL::get_n_rows(local_18);
  if (iVar5 == 0) {
    uVar7 = *(undefined4 *)local_1c;
    pCVar3 = (CEnvironment *)G_CEnvironment();
    uVar4 = CEnvironment::get_server_group(pCVar3);
    MySQL::set_query(local_18,"inSert into event_hero_mission_data values(%d,%u,\'\',now())",uVar4,
                     uVar7);
    cVar1 = MySQL::exec(local_18,true);
    if (cVar1 != '\x01') {
      puVar2 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar2 = "exec_insert";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar2,&char_const*::typeinfo,0);
    }
    memset(auStack_124,0,0x100);
  }
  else {
    cVar1 = MySQL::fetch(local_18);
    if (cVar1 != '\x01') {
      puVar2 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar2 = "fetch";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar2,&char_const*::typeinfo,0);
    }
    cVar1 = MySQL::get_binary(local_18,0,auStack_124,0x100);
    if (cVar1 != '\x01') {
      puVar2 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar2 = "get_binary";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar2,&char_const*::typeinfo,0);
    }
  }
  pSVar6 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,
                               "localtaiwan/Dispatcher/Taiwan_DbThread.cpp",0x3ea);
  CStreamGuard::CStreamGuard(local_24,pSVar6,true);
                    /* try { // try from 0815da72 to 0815daf7 has its CatchHandler @ 0815db0a */
  Taiwan::internal_stream(local_24,0x12,param_2);
  this_00 = (CStreamGuard *)CStreamGuard::operator->(local_24);
  local_14 = CStreamGuard::GetInBuffer<Taiwan::SigLoadHeroMissionData>(this_00);
  if (local_14 == (SigLoadHeroMissionData *)0x0) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "stream_alloc";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  memcpy(local_14,&local_128,0x104);
  uVar7 = MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_24);
                    /* try { // try from 0815db00 to 0815db04 has its CatchHandler @ 0815db1f */
  CStreamGuard::~CStreamGuard(local_24);
  return uVar7;
}
```
