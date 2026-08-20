# dispatch_sig

`_ZN18TimerStatisticsLog12dispatch_sigEiij`

`TimerStatisticsLog::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerStatisticsLog` | `0x08633f1c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08633f1c  _ZN18TimerStatisticsLog12dispatch_sigEiij
#           TimerStatisticsLog::dispatch_sig(int, int, unsigned int)
# range [0x08633f1c, 0x086340b3]
08633f1c +0x000:  push   %ebp
08633f1d +0x001:  mov    %esp,%ebp
08633f1f +0x003:  push   %edi
08633f20 +0x004:  push   %esi
08633f21 +0x005:  push   %ebx
08633f22 +0x006:  sub    $0x5c,%esp
08633f25 +0x009:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08633f2a +0x00e:  movl   $0x62f,0x8(%esp)
08633f32 +0x016:  movl   $"TimerDispatcher.cpp",0x4(%esp)
08633f3a +0x01e:  mov    %eax,(%esp)
08633f3d +0x021:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08633f42 +0x026:  movl   $0x1,0x8(%esp)
08633f4a +0x02e:  mov    %eax,0x4(%esp)
08633f4e +0x032:  lea    -0x34(%ebp),%eax
08633f51 +0x035:  mov    %eax,(%esp)
08633f54 +0x038:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08633f59 +0x03d:  lea    -0x34(%ebp),%eax
08633f5c +0x040:  mov    %eax,(%esp)
08633f5f +0x043:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08633f64 +0x048:  movl   $0xcd,0x4(%esp)
08633f6c +0x050:  mov    %eax,(%esp)
08633f6f +0x053:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08633f74 +0x058:  lea    -0x34(%ebp),%eax
08633f77 +0x05b:  mov    %eax,(%esp)
08633f7a +0x05e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08633f7f +0x063:  movl   $0xffffffff,0x4(%esp)
08633f87 +0x06b:  mov    %eax,(%esp)
08633f8a +0x06e:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08633f8f +0x073:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08633f94 +0x078:  lea    -0x34(%ebp),%edx
08633f97 +0x07b:  mov    %edx,0x8(%esp)
08633f9b +0x07f:  movl   $0x4,0x4(%esp)
08633fa3 +0x087:  mov    %eax,(%esp)
08633fa6 +0x08a:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08633fab +0x08f:  jmp    08633fc8 <+0xac>
08633fad +0x091:  mov    %edx,%ebx
08633faf +0x093:  mov    %eax,%esi
08633fb1 +0x095:  lea    -0x34(%ebp),%eax
08633fb4 +0x098:  mov    %eax,(%esp)
08633fb7 +0x09b:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08633fbc +0x0a0:  mov    %esi,%eax
08633fbe +0x0a2:  mov    %ebx,%edx
08633fc0 +0x0a4:  mov    %eax,(%esp)
08633fc3 +0x0a7:  call   08ae3750 <_Unwind_Resume>
08633fc8 +0x0ac:  lea    -0x34(%ebp),%eax
08633fcb +0x0af:  mov    %eax,(%esp)
08633fce +0x0b2:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08633fd3 +0x0b7:  call   0823470f <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9db9>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9db9
08633fd8 +0x0bc:  mov    %eax,(%esp)
08633fdb +0x0bf:  call   0863bfea <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x4fb>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x4fb
08633fe0 +0x0c4:  mov    %eax,-0x44(%ebp)
08633fe3 +0x0c7:  call   0823470f <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9db9>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9db9
08633fe8 +0x0cc:  mov    %eax,(%esp)
08633feb +0x0cf:  call   0863bfde <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x4ef>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x4ef
08633ff0 +0x0d4:  mov    %eax,-0x40(%ebp)
08633ff3 +0x0d7:  call   0823470f <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9db9>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9db9
08633ff8 +0x0dc:  mov    %eax,(%esp)
08633ffb +0x0df:  call   0863bfd2 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x4e3>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x4e3
08634000 +0x0e4:  mov    %eax,-0x3c(%ebp)
08634003 +0x0e7:  call   0823470f <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9db9>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9db9
08634008 +0x0ec:  mov    %eax,(%esp)
0863400b +0x0ef:  call   0863bfba <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x4cb>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x4cb
08634010 +0x0f4:  mov    %eax,%edi
08634012 +0x0f6:  call   0823470f <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9db9>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9db9
08634017 +0x0fb:  mov    %eax,(%esp)
0863401a +0x0fe:  call   0863bfc6 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x4d7>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x4d7
0863401f +0x103:  mov    %eax,%esi
08634021 +0x105:  call   0823470f <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9db9>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9db9
08634026 +0x10a:  mov    %eax,(%esp)
08634029 +0x10d:  call   0863bfb0 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x4c1>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x4c1
0863402e +0x112:  mov    %eax,%ebx
08634030 +0x114:  movl   $0x0,0xc(%esp)
08634038 +0x11c:  movl   $0x637,0x8(%esp)
08634040 +0x124:  movl   $&_ZZN18TimerStatisticsLog12dispatch_sigEiijE19__PRETTY_FUNCTION__,0x4(%esp)
08634048 +0x12c:  lea    -0x2c(%ebp),%eax
0863404b +0x12f:  mov    %eax,(%esp)
0863404e +0x132:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08634053 +0x137:  mov    -0x44(%ebp),%eax
08634056 +0x13a:  mov    %eax,0x1c(%esp)
0863405a +0x13e:  mov    -0x40(%ebp),%eax
0863405d +0x141:  mov    %eax,0x18(%esp)
08634061 +0x145:  mov    -0x3c(%ebp),%eax
08634064 +0x148:  mov    %eax,0x14(%esp)
08634068 +0x14c:  mov    %edi,0x10(%esp)
0863406c +0x150:  mov    %esi,0xc(%esp)
08634070 +0x154:  mov    %ebx,0x8(%esp)
08634074 +0x158:  movl   $"EXCHANGE_SERVER_HIT_RATE : db count(%u), overflow db count(%u), cache count(%u), overflow cache count(%u), cache fail count(%u), overflow cache fail count(%u)",0x4(%esp)
0863407c +0x160:  lea    -0x2c(%ebp),%eax
0863407f +0x163:  mov    %eax,(%esp)
08634082 +0x166:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08634087 +0x16b:  mov    0x8(%ebp),%eax
0863408a +0x16e:  mov    %eax,(%esp)
0863408d +0x171:  call   086340b4 <_ZN18TimerStatisticsLog15RegistNextTimerEv>  ; TimerStatisticsLog::RegistNextTimer()
08634092 +0x176:  mov    %al,-0x19(%ebp)
08634095 +0x179:  movzbl -0x19(%ebp),%eax
08634099 +0x17d:  xor    $0x1,%eax
0863409c +0x180:  test   %al,%al
0863409e +0x182:  je     086340a7 <+0x18b>
086340a0 +0x184:  mov    $0x0,%eax
086340a5 +0x189:  jmp    086340ac <+0x190>
086340a7 +0x18b:  mov    $0x1,%eax
086340ac +0x190:  add    $0x5c,%esp
086340af +0x193:  pop    %ebx
086340b0 +0x194:  pop    %esi
086340b1 +0x195:  pop    %edi
086340b2 +0x196:  pop    %ebp
086340b3 +0x197:  ret
```

## 反编译 C

```c
// TimerStatisticsLog::dispatch_sig @ 0x8633f1c

/* TimerStatisticsLog::dispatch_sig(int, int, unsigned int) */

bool TimerStatisticsLog::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  CExchangeServerHitRate *pCVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  CStreamGuard local_38 [8];
  cMyTrace local_30 [32];
  
  pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"TimerDispatcher.cpp",0x62f);
  CStreamGuard::CStreamGuard(local_38,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_38);
                    /* try { // try from 08633f6f to 08633faa has its CatchHandler @ 08633fad */
  CStreamGuard::operator<<(pCVar3,0xcd);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_38);
  CStreamGuard::operator<<(pCVar3,-1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_38);
  CStreamGuard::~CStreamGuard(local_38);
  pCVar4 = (CExchangeServerHitRate *)exchange_server::GetInstanceExchangeServerHitRate();
  uVar5 = exchange_server::CExchangeServerHitRate::GetCacheLoadFailOverflowCount(pCVar4);
  pCVar4 = (CExchangeServerHitRate *)exchange_server::GetInstanceExchangeServerHitRate();
  uVar6 = exchange_server::CExchangeServerHitRate::GetCacheLoadFailCount(pCVar4);
  pCVar4 = (CExchangeServerHitRate *)exchange_server::GetInstanceExchangeServerHitRate();
  uVar7 = exchange_server::CExchangeServerHitRate::GetCacheLoadOverflowCount(pCVar4);
  pCVar4 = (CExchangeServerHitRate *)exchange_server::GetInstanceExchangeServerHitRate();
  uVar8 = exchange_server::CExchangeServerHitRate::GetCacheLoadCount(pCVar4);
  pCVar4 = (CExchangeServerHitRate *)exchange_server::GetInstanceExchangeServerHitRate();
  uVar9 = exchange_server::CExchangeServerHitRate::GetDBLoadOverflowCount(pCVar4);
  pCVar4 = (CExchangeServerHitRate *)exchange_server::GetInstanceExchangeServerHitRate();
  uVar10 = exchange_server::CExchangeServerHitRate::GetDBLoadCount(pCVar4);
  cMyTrace::cMyTrace(local_30,
                     "virtual bool TimerStatisticsLog::dispatch_sig(int, int, memberIdentificationNumber_t)"
                     ,0x637,0);
  cMyTrace::operator()
            (local_30,
             "EXCHANGE_SERVER_HIT_RATE : db count(%u), overflow db count(%u), cache count(%u), overflow cache count(%u), cache fail count(%u), overflow cache fail count(%u)"
             ,uVar10,uVar9,uVar8,uVar7,uVar6,uVar5);
  cVar1 = RegistNextTimer();
  return cVar1 == '\x01';
}
```
