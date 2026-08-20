# dispatch

`_ZN16DB_LoadExpertJob8dispatchEiiP6Stream`

`DB_LoadExpertJob::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_LoadExpertJob` | `0x08436464` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08436464  _ZN16DB_LoadExpertJob8dispatchEiiP6Stream
#           DB_LoadExpertJob::dispatch(int, int, Stream*)
# range [0x08436464, 0x084367f3]
08436464 +0x000:  push   %ebp
08436465 +0x001:  mov    %esp,%ebp
08436467 +0x003:  push   %esi
08436468 +0x004:  push   %ebx
08436469 +0x005:  sub    $0x30,%esp
0843646c +0x008:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08436471 +0x00d:  movl   $0x0,0x8(%esp)
08436479 +0x015:  movl   $0x2,0x4(%esp)
08436481 +0x01d:  mov    %eax,(%esp)
08436484 +0x020:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08436489 +0x025:  mov    %eax,-0x14(%ebp)
0843648c +0x028:  movl   $0x0,-0x18(%ebp)
08436493 +0x02f:  lea    -0x18(%ebp),%eax
08436496 +0x032:  mov    %eax,0x4(%esp)
0843649a +0x036:  mov    0x14(%ebp),%eax
0843649d +0x039:  mov    %eax,(%esp)
084364a0 +0x03c:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
084364a5 +0x041:  mov    -0x18(%ebp),%eax
084364a8 +0x044:  mov    %eax,0x8(%esp)
084364ac +0x048:  movl   $"seLect expert_job_giveup_cnt, expert_job_info, expert_job_info_ex, recipe  from charac_expert_job where charac_no=%d",0x4(%esp)
084364b4 +0x050:  mov    -0x14(%ebp),%eax
084364b7 +0x053:  mov    %eax,(%esp)
084364ba +0x056:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084364bf +0x05b:  movl   $0x1,0x4(%esp)
084364c7 +0x063:  mov    -0x14(%ebp),%eax
084364ca +0x066:  mov    %eax,(%esp)
084364cd +0x069:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084364d2 +0x06e:  xor    $0x1,%eax
084364d5 +0x071:  test   %al,%al
084364d7 +0x073:  je     084364e3 <+0x7f>
084364d9 +0x075:  mov    $0x0,%ebx
084364de +0x07a:  jmp    084367eb <+0x387>
084364e3 +0x07f:  mov    -0x14(%ebp),%eax
084364e6 +0x082:  mov    %eax,(%esp)
084364e9 +0x085:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
084364ee +0x08a:  test   %eax,%eax
084364f0 +0x08c:  sete   %al
084364f3 +0x08f:  test   %al,%al
084364f5 +0x091:  je     084365e0 <+0x17c>
084364fb +0x097:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08436500 +0x09c:  movl   $0x81b2,0x8(%esp)
08436508 +0x0a4:  movl   $"DBThread.cpp",0x4(%esp)
08436510 +0x0ac:  mov    %eax,(%esp)
08436513 +0x0af:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08436518 +0x0b4:  movl   $0x1,0x8(%esp)
08436520 +0x0bc:  mov    %eax,0x4(%esp)
08436524 +0x0c0:  lea    -0x28(%ebp),%eax
08436527 +0x0c3:  mov    %eax,(%esp)
0843652a +0x0c6:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0843652f +0x0cb:  lea    -0x28(%ebp),%eax
08436532 +0x0ce:  mov    %eax,(%esp)
08436535 +0x0d1:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843653a +0x0d6:  mov    0xc(%ebp),%edx
0843653d +0x0d9:  mov    %edx,0x4(%esp)
08436541 +0x0dd:  mov    %eax,(%esp)
08436544 +0x0e0:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08436549 +0x0e5:  lea    -0x28(%ebp),%eax
0843654c +0x0e8:  mov    %eax,(%esp)
0843654f +0x0eb:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08436554 +0x0f0:  mov    0x10(%ebp),%edx
08436557 +0x0f3:  mov    %edx,0x4(%esp)
0843655b +0x0f7:  mov    %eax,(%esp)
0843655e +0x0fa:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08436563 +0x0ff:  lea    -0x28(%ebp),%eax
08436566 +0x102:  mov    %eax,(%esp)
08436569 +0x105:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0843656e +0x10a:  mov    %eax,(%esp)
08436571 +0x10d:  call   0832b87e <_GLOBAL__I__ZN10expert_job16CCharacExpertJob6_resetEv+0x1e4>  ; global constructors keyed to expert_job::CCharacExpertJob::_reset()+0x1e4
08436576 +0x112:  mov    %eax,-0xc(%ebp)
08436579 +0x115:  movl   $0x30,0x8(%esp)
08436581 +0x11d:  movl   $0x0,0x4(%esp)
08436589 +0x125:  mov    -0xc(%ebp),%eax
0843658c +0x128:  mov    %eax,(%esp)
0843658f +0x12b:  call   0807dcc0 <_init+0x5b8>
08436594 +0x130:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08436599 +0x135:  lea    -0x28(%ebp),%edx
0843659c +0x138:  mov    %edx,0x8(%esp)
084365a0 +0x13c:  movl   $0x1,0x4(%esp)
084365a8 +0x144:  mov    %eax,(%esp)
084365ab +0x147:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084365b0 +0x14c:  mov    $0x1,%ebx
084365b5 +0x151:  lea    -0x28(%ebp),%eax
084365b8 +0x154:  mov    %eax,(%esp)
084365bb +0x157:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084365c0 +0x15c:  jmp    084367eb <+0x387>
084365c5 +0x161:  mov    %edx,%ebx
084365c7 +0x163:  mov    %eax,%esi
084365c9 +0x165:  lea    -0x28(%ebp),%eax
084365cc +0x168:  mov    %eax,(%esp)
084365cf +0x16b:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084365d4 +0x170:  mov    %esi,%eax
084365d6 +0x172:  mov    %ebx,%edx
084365d8 +0x174:  mov    %eax,(%esp)
084365db +0x177:  call   08ae3750 <_Unwind_Resume>
084365e0 +0x17c:  mov    -0x14(%ebp),%eax
084365e3 +0x17f:  mov    %eax,(%esp)
084365e6 +0x182:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
084365eb +0x187:  xor    $0x1,%eax
084365ee +0x18a:  test   %al,%al
084365f0 +0x18c:  je     084365fc <+0x198>
084365f2 +0x18e:  mov    $0x0,%ebx
084365f7 +0x193:  jmp    084367eb <+0x387>
084365fc +0x198:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08436601 +0x19d:  movl   $0x81c2,0x8(%esp)
08436609 +0x1a5:  movl   $"DBThread.cpp",0x4(%esp)
08436611 +0x1ad:  mov    %eax,(%esp)
08436614 +0x1b0:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08436619 +0x1b5:  movl   $0x1,0x8(%esp)
08436621 +0x1bd:  mov    %eax,0x4(%esp)
08436625 +0x1c1:  lea    -0x20(%ebp),%eax
08436628 +0x1c4:  mov    %eax,(%esp)
0843662b +0x1c7:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08436630 +0x1cc:  lea    -0x20(%ebp),%eax
08436633 +0x1cf:  mov    %eax,(%esp)
08436636 +0x1d2:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843663b +0x1d7:  mov    0xc(%ebp),%edx
0843663e +0x1da:  mov    %edx,0x4(%esp)
08436642 +0x1de:  mov    %eax,(%esp)
08436645 +0x1e1:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843664a +0x1e6:  lea    -0x20(%ebp),%eax
0843664d +0x1e9:  mov    %eax,(%esp)
08436650 +0x1ec:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08436655 +0x1f1:  mov    0x10(%ebp),%edx
08436658 +0x1f4:  mov    %edx,0x4(%esp)
0843665c +0x1f8:  mov    %eax,(%esp)
0843665f +0x1fb:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08436664 +0x200:  lea    -0x20(%ebp),%eax
08436667 +0x203:  mov    %eax,(%esp)
0843666a +0x206:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0843666f +0x20b:  mov    %eax,(%esp)
08436672 +0x20e:  call   0832b87e <_GLOBAL__I__ZN10expert_job16CCharacExpertJob6_resetEv+0x1e4>  ; global constructors keyed to expert_job::CCharacExpertJob::_reset()+0x1e4
08436677 +0x213:  mov    %eax,-0x10(%ebp)
0843667a +0x216:  movl   $0x30,0x8(%esp)
08436682 +0x21e:  movl   $0x0,0x4(%esp)
0843668a +0x226:  mov    -0x10(%ebp),%eax
0843668d +0x229:  mov    %eax,(%esp)
08436690 +0x22c:  call   0807dcc0 <_init+0x5b8>
08436695 +0x231:  mov    -0x10(%ebp),%eax
08436698 +0x234:  add    $0x4,%eax
0843669b +0x237:  mov    %eax,0x8(%esp)
0843669f +0x23b:  movl   $0x0,0x4(%esp)
084366a7 +0x243:  mov    -0x14(%ebp),%eax
084366aa +0x246:  mov    %eax,(%esp)
084366ad +0x249:  call   08116990 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xa5>  ; global constructors keyed to CEventManager::CEventManager()+0xa5
084366b2 +0x24e:  xor    $0x1,%eax
084366b5 +0x251:  test   %al,%al
084366b7 +0x253:  je     084366d7 <+0x273>
084366b9 +0x255:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
084366be +0x25a:  lea    -0x20(%ebp),%edx
084366c1 +0x25d:  mov    %edx,0x4(%esp)
084366c5 +0x261:  mov    %eax,(%esp)
084366c8 +0x264:  call   08101080 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0xa2>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0xa2
084366cd +0x269:  mov    $0x0,%ebx
084366d2 +0x26e:  jmp    084367e0 <+0x37c>
084366d7 +0x273:  mov    -0x10(%ebp),%eax
084366da +0x276:  add    $0x8,%eax
084366dd +0x279:  mov    %eax,0x8(%esp)
084366e1 +0x27d:  movl   $0x1,0x4(%esp)
084366e9 +0x285:  mov    -0x14(%ebp),%eax
084366ec +0x288:  mov    %eax,(%esp)
084366ef +0x28b:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
084366f4 +0x290:  xor    $0x1,%eax
084366f7 +0x293:  test   %al,%al
084366f9 +0x295:  je     08436719 <+0x2b5>
084366fb +0x297:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08436700 +0x29c:  lea    -0x20(%ebp),%edx
08436703 +0x29f:  mov    %edx,0x4(%esp)
08436707 +0x2a3:  mov    %eax,(%esp)
0843670a +0x2a6:  call   08101080 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0xa2>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0xa2
0843670f +0x2ab:  mov    $0x0,%ebx
08436714 +0x2b0:  jmp    084367e0 <+0x37c>
08436719 +0x2b5:  mov    -0x10(%ebp),%eax
0843671c +0x2b8:  add    $0xc,%eax
0843671f +0x2bb:  mov    %eax,0x8(%esp)
08436723 +0x2bf:  movl   $0x2,0x4(%esp)
0843672b +0x2c7:  mov    -0x14(%ebp),%eax
0843672e +0x2ca:  mov    %eax,(%esp)
08436731 +0x2cd:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08436736 +0x2d2:  xor    $0x1,%eax
08436739 +0x2d5:  test   %al,%al
0843673b +0x2d7:  je     0843675b <+0x2f7>
0843673d +0x2d9:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08436742 +0x2de:  lea    -0x20(%ebp),%edx
08436745 +0x2e1:  mov    %edx,0x4(%esp)
08436749 +0x2e5:  mov    %eax,(%esp)
0843674c +0x2e8:  call   08101080 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0xa2>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0xa2
08436751 +0x2ed:  mov    $0x0,%ebx
08436756 +0x2f2:  jmp    084367e0 <+0x37c>
0843675b +0x2f7:  mov    -0x10(%ebp),%eax
0843675e +0x2fa:  add    $0x10,%eax
08436761 +0x2fd:  movl   $0x1e,0xc(%esp)
08436769 +0x305:  mov    %eax,0x8(%esp)
0843676d +0x309:  movl   $0x3,0x4(%esp)
08436775 +0x311:  mov    -0x14(%ebp),%eax
08436778 +0x314:  mov    %eax,(%esp)
0843677b +0x317:  call   0812531a <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x7d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x7d
08436780 +0x31c:  xor    $0x1,%eax
08436783 +0x31f:  test   %al,%al
08436785 +0x321:  je     084367a2 <+0x33e>
08436787 +0x323:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0843678c +0x328:  lea    -0x20(%ebp),%edx
0843678f +0x32b:  mov    %edx,0x4(%esp)
08436793 +0x32f:  mov    %eax,(%esp)
08436796 +0x332:  call   08101080 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0xa2>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0xa2
0843679b +0x337:  mov    $0x0,%ebx
084367a0 +0x33c:  jmp    084367e0 <+0x37c>
084367a2 +0x33e:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084367a7 +0x343:  lea    -0x20(%ebp),%edx
084367aa +0x346:  mov    %edx,0x8(%esp)
084367ae +0x34a:  movl   $0x1,0x4(%esp)
084367b6 +0x352:  mov    %eax,(%esp)
084367b9 +0x355:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084367be +0x35a:  mov    $0x1,%ebx
084367c3 +0x35f:  jmp    084367e0 <+0x37c>
084367c5 +0x361:  mov    %edx,%ebx
084367c7 +0x363:  mov    %eax,%esi
084367c9 +0x365:  lea    -0x20(%ebp),%eax
084367cc +0x368:  mov    %eax,(%esp)
084367cf +0x36b:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084367d4 +0x370:  mov    %esi,%eax
084367d6 +0x372:  mov    %ebx,%edx
084367d8 +0x374:  mov    %eax,(%esp)
084367db +0x377:  call   08ae3750 <_Unwind_Resume>
084367e0 +0x37c:  lea    -0x20(%ebp),%eax
084367e3 +0x37f:  mov    %eax,(%esp)
084367e6 +0x382:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084367eb +0x387:  mov    %ebx,%eax
084367ed +0x389:  add    $0x30,%esp
084367f0 +0x38c:  pop    %ebx
084367f1 +0x38d:  pop    %esi
084367f2 +0x38e:  pop    %ebp
084367f3 +0x38f:  ret
```

## 反编译 C

```c
// DB_LoadExpertJob::dispatch @ 0x8436464

/* DB_LoadExpertJob::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_LoadExpertJob::dispatch(DB_LoadExpertJob *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  int iVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  undefined4 uVar5;
  CStreamGuard local_2c [8];
  CStreamGuard local_24 [8];
  uint local_1c;
  MySQL *local_18;
  SIG_EXPERT_JOB *local_14;
  SIG_EXPERT_JOB *local_10;
  
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  local_1c = 0;
  Stream::operator>>(param_3,&local_1c);
  MySQL::set_query(local_18,
                   "seLect expert_job_giveup_cnt, expert_job_info, expert_job_info_ex, recipe  from charac_expert_job where charac_no=%d"
                   ,local_1c);
  cVar1 = MySQL::exec(local_18,true);
  if (cVar1 == '\x01') {
    iVar2 = MySQL::get_n_rows(local_18);
    if (iVar2 == 0) {
      pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x81b2);
      CStreamGuard::CStreamGuard(local_2c,pSVar3,true);
      pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_2c);
                    /* try { // try from 08436544 to 084365af has its CatchHandler @ 084365c5 */
      CStreamGuard::operator<<(pCVar4,param_1);
      pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_2c);
      CStreamGuard::operator<<(pCVar4,param_2);
      pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_2c);
      local_10 = CStreamGuard::GetInBuffer<SIG_EXPERT_JOB>(pCVar4);
      memset(local_10,0,0x30);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_2c);
      uVar5 = 1;
      CStreamGuard::~CStreamGuard(local_2c);
    }
    else {
      cVar1 = MySQL::fetch(local_18);
      if (cVar1 == '\x01') {
        pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x81c2);
        CStreamGuard::CStreamGuard(local_24,pSVar3,true);
        pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_24);
                    /* try { // try from 08436645 to 084367bd has its CatchHandler @ 084367c5 */
        CStreamGuard::operator<<(pCVar4,param_1);
        pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_24);
        CStreamGuard::operator<<(pCVar4,param_2);
        pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_24);
        local_14 = CStreamGuard::GetInBuffer<SIG_EXPERT_JOB>(pCVar4);
        memset(local_14,0,0x30);
        cVar1 = MySQL::get_ushort(local_18,0,(ushort *)(local_14 + 4));
        if (cVar1 == '\x01') {
          cVar1 = MySQL::get_int(local_18,1,(int *)(local_14 + 8));
          if (cVar1 == '\x01') {
            cVar1 = MySQL::get_int(local_18,2,(int *)(local_14 + 0xc));
            if (cVar1 == '\x01') {
              cVar1 = MySQL::get_binary(local_18,3,local_14 + 0x10,0x1e);
              if (cVar1 == '\x01') {
                MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_24);
                uVar5 = 1;
              }
              else {
                StreamPool::Free(GlobalData::s_stream_pool,local_24);
                uVar5 = 0;
              }
            }
            else {
              StreamPool::Free(GlobalData::s_stream_pool,local_24);
              uVar5 = 0;
            }
          }
          else {
            StreamPool::Free(GlobalData::s_stream_pool,local_24);
            uVar5 = 0;
          }
        }
        else {
          StreamPool::Free(GlobalData::s_stream_pool,local_24);
          uVar5 = 0;
        }
        CStreamGuard::~CStreamGuard(local_24);
      }
      else {
        uVar5 = 0;
      }
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}
```
