# dispatch_sig

`_ZN17TimerFatigueReset12dispatch_sigEiij`

`TimerFatigueReset::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerFatigueReset` | `0x08633750` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08633750  _ZN17TimerFatigueReset12dispatch_sigEiij
#           TimerFatigueReset::dispatch_sig(int, int, unsigned int)
# range [0x08633750, 0x086339f9]
08633750 +0x000:  push   %ebp
08633751 +0x001:  mov    %esp,%ebp
08633753 +0x003:  push   %esi
08633754 +0x004:  push   %ebx
08633755 +0x005:  sub    $0x30,%esp
08633758 +0x008:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0863375d +0x00d:  mov    0x37c(%eax),%ebx
08633763 +0x013:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08633768 +0x018:  mov    %eax,(%esp)
0863376b +0x01b:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
08633770 +0x020:  mov    %ebx,0x4(%esp)
08633774 +0x024:  mov    %eax,(%esp)
08633777 +0x027:  call   0810c5d2 <_ZN13EventClassify15CEventScriptMng18update_time_valuesEi>  ; EventClassify::CEventScriptMng::update_time_values(int)
0863377c +0x02c:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08633781 +0x031:  mov    %eax,(%esp)
08633784 +0x034:  call   086cc3ec <_ZN9GameWorld15ResetAllFatigueEv>  ; GameWorld::ResetAllFatigue()
08633789 +0x039:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0863378e +0x03e:  mov    %eax,(%esp)
08633791 +0x041:  call   086ccb22 <_ZN9GameWorld13ResetAllCoinsEv>  ; GameWorld::ResetAllCoins()
08633796 +0x046:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0863379b +0x04b:  mov    %eax,(%esp)
0863379e +0x04e:  call   086cd004 <_ZN9GameWorld16DailyEventModifyEv>  ; GameWorld::DailyEventModify()
086337a3 +0x053:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
086337a8 +0x058:  mov    %eax,(%esp)
086337ab +0x05b:  call   086ccc78 <_ZN9GameWorld17ResetAllEventDataEv>  ; GameWorld::ResetAllEventData()
086337b0 +0x060:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
086337b5 +0x065:  mov    %eax,(%esp)
086337b8 +0x068:  call   086cd010 <_ZN9GameWorld18ReselectDailyQuestEv>  ; GameWorld::ReselectDailyQuest()
086337bd +0x06d:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
086337c2 +0x072:  mov    %eax,(%esp)
086337c5 +0x075:  call   086ccc8e <_ZN9GameWorld15DeleteDailyItemEv>  ; GameWorld::DeleteDailyItem()
086337ca +0x07a:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
086337cf +0x07f:  mov    %eax,(%esp)
086337d2 +0x082:  call   086cc8ac <_ZN9GameWorld21ResetAllCleadpadPointEv>  ; GameWorld::ResetAllCleadpadPoint()
086337d7 +0x087:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
086337dc +0x08c:  mov    %eax,(%esp)
086337df +0x08f:  call   086cc992 <_ZN9GameWorld24ResetAllPassPadFailCountEv>  ; GameWorld::ResetAllPassPadFailCount()
086337e4 +0x094:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
086337e9 +0x099:  mov    %eax,(%esp)
086337ec +0x09c:  call   086ccdce <_ZN9GameWorld12AddDailyItemEv>  ; GameWorld::AddDailyItem()
086337f1 +0x0a1:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
086337f6 +0x0a6:  mov    %eax,(%esp)
086337f9 +0x0a9:  call   086ccf58 <_ZN9GameWorld14resetDailyDataEv>  ; GameWorld::resetDailyData()
086337fe +0x0ae:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08633803 +0x0b3:  mov    %eax,(%esp)
08633806 +0x0b6:  call   086ceb08 <_ZN9GameWorld25ResetEntireReliablePersonEv>  ; GameWorld::ResetEntireReliablePerson()
0863380b +0x0bb:  call   0860e15b <_Z29GetInstanceDungeonEntranceLogv>  ; GetInstanceDungeonEntranceLog()
08633810 +0x0c0:  mov    %eax,(%esp)
08633813 +0x0c3:  call   0860e59c <_ZN19CDungeonEntranceLog21InsertDungeonEntranceEv>  ; CDungeonEntranceLog::InsertDungeonEntrance()
08633818 +0x0c8:  call   0860e765 <_Z30GetInstanceCommonStatisticsMgrv>  ; GetInstanceCommonStatisticsMgr()
0863381d +0x0cd:  mov    %eax,(%esp)
08633820 +0x0d0:  call   0860e86e <_ZN20CCommonStatisticsMgr14InsertDatabaseEv>  ; CCommonStatisticsMgr::InsertDatabase()
08633825 +0x0d5:  mov    &_ZN10GlobalData14s_statisticMgrE,%eax
0863382a +0x0da:  mov    %eax,(%esp)
0863382d +0x0dd:  call   0860edf4 <_ZN26CLevelDungeonPlayStatistic14InsertDatabaseEv>  ; CLevelDungeonPlayStatistic::InsertDatabase()
08633832 +0x0e2:  mov    &_ZN10GlobalData14s_statisticMgrE,%eax
08633837 +0x0e7:  add    $0x18,%eax
0863383a +0x0ea:  mov    %eax,(%esp)
0863383d +0x0ed:  call   0860f110 <_ZN20CDungeonExpStatistic14InsertDatabaseEv>  ; CDungeonExpStatistic::InsertDatabase()
08633842 +0x0f2:  call   0860f940 <_Z29GetInstanceExpertJobStatisticv>  ; GetInstanceExpertJobStatistic()
08633847 +0x0f7:  mov    %eax,(%esp)
0863384a +0x0fa:  call   0860faca <_ZN19CExpertJobStatistic15UpdateExpertJobEv>  ; CExpertJobStatistic::UpdateExpertJob()
0863384f +0x0ff:  call   08133e30 <_ZN12advancealtar10HistoryLog16updateStatisticsEv>  ; advancealtar::HistoryLog::updateStatistics()
08633854 +0x104:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08633859 +0x109:  movl   $0x512,0x8(%esp)
08633861 +0x111:  movl   $"TimerDispatcher.cpp",0x4(%esp)
08633869 +0x119:  mov    %eax,(%esp)
0863386c +0x11c:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08633871 +0x121:  movl   $0x1,0x8(%esp)
08633879 +0x129:  mov    %eax,0x4(%esp)
0863387d +0x12d:  lea    -0x14(%ebp),%eax
08633880 +0x130:  mov    %eax,(%esp)
08633883 +0x133:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08633888 +0x138:  lea    -0x14(%ebp),%eax
0863388b +0x13b:  mov    %eax,(%esp)
0863388e +0x13e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08633893 +0x143:  movl   $0x4e,0x4(%esp)
0863389b +0x14b:  mov    %eax,(%esp)
0863389e +0x14e:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
086338a3 +0x153:  lea    -0x14(%ebp),%eax
086338a6 +0x156:  mov    %eax,(%esp)
086338a9 +0x159:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
086338ae +0x15e:  movl   $0xffffffff,0x4(%esp)
086338b6 +0x166:  mov    %eax,(%esp)
086338b9 +0x169:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
086338be +0x16e:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
086338c3 +0x173:  lea    -0x14(%ebp),%edx
086338c6 +0x176:  mov    %edx,0x8(%esp)
086338ca +0x17a:  movl   $0x2,0x4(%esp)
086338d2 +0x182:  mov    %eax,(%esp)
086338d5 +0x185:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
086338da +0x18a:  jmp    086338f7 <+0x1a7>
086338dc +0x18c:  mov    %edx,%ebx
086338de +0x18e:  mov    %eax,%esi
086338e0 +0x190:  lea    -0x14(%ebp),%eax
086338e3 +0x193:  mov    %eax,(%esp)
086338e6 +0x196:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
086338eb +0x19b:  mov    %esi,%eax
086338ed +0x19d:  mov    %ebx,%edx
086338ef +0x19f:  mov    %eax,(%esp)
086338f2 +0x1a2:  call   08ae3750 <_Unwind_Resume>
086338f7 +0x1a7:  lea    -0x14(%ebp),%eax
086338fa +0x1aa:  mov    %eax,(%esp)
086338fd +0x1ad:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08633902 +0x1b2:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08633907 +0x1b7:  movl   $0x51c,0x8(%esp)
0863390f +0x1bf:  movl   $"TimerDispatcher.cpp",0x4(%esp)
08633917 +0x1c7:  mov    %eax,(%esp)
0863391a +0x1ca:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0863391f +0x1cf:  movl   $0x1,0x8(%esp)
08633927 +0x1d7:  mov    %eax,0x4(%esp)
0863392b +0x1db:  lea    -0x1c(%ebp),%eax
0863392e +0x1de:  mov    %eax,(%esp)
08633931 +0x1e1:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08633936 +0x1e6:  lea    -0x1c(%ebp),%eax
08633939 +0x1e9:  mov    %eax,(%esp)
0863393c +0x1ec:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08633941 +0x1f1:  movl   $0x50,0x4(%esp)
08633949 +0x1f9:  mov    %eax,(%esp)
0863394c +0x1fc:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08633951 +0x201:  lea    -0x1c(%ebp),%eax
08633954 +0x204:  mov    %eax,(%esp)
08633957 +0x207:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0863395c +0x20c:  movl   $0xffffffff,0x4(%esp)
08633964 +0x214:  mov    %eax,(%esp)
08633967 +0x217:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0863396c +0x21c:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08633971 +0x221:  lea    -0x1c(%ebp),%edx
08633974 +0x224:  mov    %edx,0x8(%esp)
08633978 +0x228:  movl   $0x4,0x4(%esp)
08633980 +0x230:  mov    %eax,(%esp)
08633983 +0x233:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08633988 +0x238:  jmp    086339a5 <+0x255>
0863398a +0x23a:  mov    %edx,%ebx
0863398c +0x23c:  mov    %eax,%esi
0863398e +0x23e:  lea    -0x1c(%ebp),%eax
08633991 +0x241:  mov    %eax,(%esp)
08633994 +0x244:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08633999 +0x249:  mov    %esi,%eax
0863399b +0x24b:  mov    %ebx,%edx
0863399d +0x24d:  mov    %eax,(%esp)
086339a0 +0x250:  call   08ae3750 <_Unwind_Resume>
086339a5 +0x255:  lea    -0x1c(%ebp),%eax
086339a8 +0x258:  mov    %eax,(%esp)
086339ab +0x25b:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
086339b0 +0x260:  movl   $0x0,(%esp)
086339b7 +0x267:  call   08433ada <_ZN34DB_LoadAutoMarketConditionsControl11makeRequestEb>  ; DB_LoadAutoMarketConditionsControl::makeRequest(bool)
086339bc +0x26c:  call   08401864 <_ZN15DB_CreateCharac30makeRequestResetLimitCreateMidEv>  ; DB_CreateCharac::makeRequestResetLimitCreateMid()
086339c1 +0x271:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
086339c6 +0x276:  mov    %eax,(%esp)
086339c9 +0x279:  call   086cf7f8 <_ZN9GameWorld20ResetOneADayItemShopEv>  ; GameWorld::ResetOneADayItemShop()
086339ce +0x27e:  mov    0x8(%ebp),%eax
086339d1 +0x281:  mov    %eax,(%esp)
086339d4 +0x284:  call   08633a04 <_ZN17TimerFatigueReset15RegistNextTimerEv>  ; TimerFatigueReset::RegistNextTimer()
086339d9 +0x289:  mov    %al,-0x9(%ebp)
086339dc +0x28c:  movzbl -0x9(%ebp),%eax
086339e0 +0x290:  xor    $0x1,%eax
086339e3 +0x293:  test   %al,%al
086339e5 +0x295:  je     086339ee <+0x29e>
086339e7 +0x297:  mov    $0x0,%eax
086339ec +0x29c:  jmp    086339f3 <+0x2a3>
086339ee +0x29e:  mov    $0x1,%eax
086339f3 +0x2a3:  add    $0x30,%esp
086339f6 +0x2a6:  pop    %ebx
086339f7 +0x2a7:  pop    %esi
086339f8 +0x2a8:  pop    %ebp
086339f9 +0x2a9:  ret
```

## 反编译 C

```c
// TimerFatigueReset::dispatch_sig @ 0x8633750

/* TimerFatigueReset::dispatch_sig(int, int, unsigned int) */

bool TimerFatigueReset::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  CDataManager *this;
  CEventScriptMng *this_00;
  GameWorld *pGVar3;
  CDungeonEntranceLog *this_01;
  CCommonStatisticsMgr *this_02;
  CExpertJobStatistic *this_03;
  Stream *pSVar4;
  CStreamGuard *pCVar5;
  CStreamGuard local_20 [8];
  CStreamGuard local_18 [12];
  
  iVar2 = G_CEnvironment();
  iVar2 = *(int *)(iVar2 + 0x37c);
  this = (CDataManager *)G_CDataManager();
  this_00 = (CEventScriptMng *)CDataManager::get_event_script_mng(this);
  EventClassify::CEventScriptMng::update_time_values(this_00,iVar2);
  pGVar3 = (GameWorld *)G_GameWorld();
  GameWorld::ResetAllFatigue(pGVar3);
  G_GameWorld();
  GameWorld::ResetAllCoins();
  G_GameWorld();
  GameWorld::DailyEventModify();
  G_GameWorld();
  GameWorld::ResetAllEventData();
  G_GameWorld();
  GameWorld::ReselectDailyQuest();
  pGVar3 = (GameWorld *)G_GameWorld();
  GameWorld::DeleteDailyItem(pGVar3);
  G_GameWorld();
  GameWorld::ResetAllCleadpadPoint();
  G_GameWorld();
  GameWorld::ResetAllPassPadFailCount();
  G_GameWorld();
  GameWorld::AddDailyItem();
  G_GameWorld();
  GameWorld::resetDailyData();
  G_GameWorld();
  GameWorld::ResetEntireReliablePerson();
  this_01 = (CDungeonEntranceLog *)GetInstanceDungeonEntranceLog();
  CDungeonEntranceLog::InsertDungeonEntrance(this_01);
  this_02 = (CCommonStatisticsMgr *)GetInstanceCommonStatisticsMgr();
  CCommonStatisticsMgr::InsertDatabase(this_02);
  CLevelDungeonPlayStatistic::InsertDatabase(GlobalData::s_statisticMgr);
  CDungeonExpStatistic::InsertDatabase((CDungeonExpStatistic *)(GlobalData::s_statisticMgr + 0x18));
  this_03 = (CExpertJobStatistic *)GetInstanceExpertJobStatistic();
  CExpertJobStatistic::UpdateExpertJob(this_03);
  advancealtar::HistoryLog::updateStatistics();
  pSVar4 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"TimerDispatcher.cpp",0x512);
  CStreamGuard::CStreamGuard(local_18,pSVar4,true);
  pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0863389e to 086338d9 has its CatchHandler @ 086338dc */
  CStreamGuard::operator<<(pCVar5,0x4e);
  pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar5,-1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  pSVar4 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"TimerDispatcher.cpp",0x51c);
  CStreamGuard::CStreamGuard(local_20,pSVar4,true);
  pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_20);
                    /* try { // try from 0863394c to 08633987 has its CatchHandler @ 0863398a */
  CStreamGuard::operator<<(pCVar5,0x50);
  pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_20);
  CStreamGuard::operator<<(pCVar5,-1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_20);
  CStreamGuard::~CStreamGuard(local_20);
  DB_LoadAutoMarketConditionsControl::makeRequest(false);
  DB_CreateCharac::makeRequestResetLimitCreateMid();
  G_GameWorld();
  GameWorld::ResetOneADayItemShop();
  cVar1 = RegistNextTimer();
  return cVar1 == '\x01';
}
```
