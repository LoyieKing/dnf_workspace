# TimerStatisticsLog

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## RegistNextTimer

```asm
// === 086340b4 TimerStatisticsLog::RegistNextTimer  [0x086340b4-0x8634103] ===
 86340b4:	55                   	push   %ebp
 86340b5:	89 e5                	mov    %esp,%ebp
 86340b7:	83 ec 38             	sub    $0x38,%esp
 86340ba:	c7 45 f4 08 07 00 00 	movl   $0x708,-0xc(%ebp)
 86340c1:	e8 b6 23 ac ff       	call   80f647c <_Z12G_TimerQueuev>
 86340c6:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 86340cd:	00 
 86340ce:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 86340d5:	00 
 86340d6:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86340d9:	89 54 24 10          	mov    %edx,0x10(%esp)
 86340dd:	c7 44 24 0c 52 00 00 	movl   $0x52,0xc(%esp)
 86340e4:	00 
 86340e5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86340ec:	00 
 86340ed:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 86340f4:	00 
 86340f5:	89 04 24             	mov    %eax,(%esp)
 86340f8:	e8 19 cd ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 86340fd:	b8 01 00 00 00       	mov    $0x1,%eax
 8634102:	c9                   	leave
 8634103:	c3                   	ret

```

```c
// TimerStatisticsLog::RegistNextTimer @ 0x86340b4

/* TimerStatisticsLog::RegistNextTimer() */

undefined4 TimerStatisticsLog::RegistNextTimer(void)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,0,0x52,0x708,0,0);
  return 1;
}

```

---

## dispatch_sig

```asm
// === 08633f1c TimerStatisticsLog::dispatch_sig  [0x08633f1c-0x86340b3] ===
 8633f1c:	55                   	push   %ebp
 8633f1d:	89 e5                	mov    %esp,%ebp
 8633f1f:	57                   	push   %edi
 8633f20:	56                   	push   %esi
 8633f21:	53                   	push   %ebx
 8633f22:	83 ec 5c             	sub    $0x5c,%esp
 8633f25:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8633f2a:	c7 44 24 08 2f 06 00 	movl   $0x62f,0x8(%esp)
 8633f31:	00 
 8633f32:	c7 44 24 04 0e 6d ce 	movl   $0x8ce6d0e,0x4(%esp)
 8633f39:	08 
 8633f3a:	89 04 24             	mov    %eax,(%esp)
 8633f3d:	e8 44 bb c5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8633f42:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8633f49:	00 
 8633f4a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8633f4e:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8633f51:	89 04 24             	mov    %eax,(%esp)
 8633f54:	e8 cd 4c a9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8633f59:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8633f5c:	89 04 24             	mov    %eax,(%esp)
 8633f5f:	e8 e2 4c a9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8633f64:	c7 44 24 04 cd 00 00 	movl   $0xcd,0x4(%esp)
 8633f6b:	00 
 8633f6c:	89 04 24             	mov    %eax,(%esp)
 8633f6f:	e8 e2 4c a9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8633f74:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8633f77:	89 04 24             	mov    %eax,(%esp)
 8633f7a:	e8 c7 4c a9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8633f7f:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8633f86:	ff 
 8633f87:	89 04 24             	mov    %eax,(%esp)
 8633f8a:	e8 c7 4c a9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8633f8f:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8633f94:	8d 55 cc             	lea    -0x34(%ebp),%edx
 8633f97:	89 54 24 08          	mov    %edx,0x8(%esp)
 8633f9b:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8633fa2:	00 
 8633fa3:	89 04 24             	mov    %eax,(%esp)
 8633fa6:	e8 33 d0 f3 ff       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8633fab:	eb 1b                	jmp    8633fc8 <_ZN18TimerStatisticsLog12dispatch_sigEiij+0xac>
 8633fad:	89 d3                	mov    %edx,%ebx
 8633faf:	89 c6                	mov    %eax,%esi
 8633fb1:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8633fb4:	89 04 24             	mov    %eax,(%esp)
 8633fb7:	e8 16 89 fe ff       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8633fbc:	89 f0                	mov    %esi,%eax
 8633fbe:	89 da                	mov    %ebx,%edx
 8633fc0:	89 04 24             	mov    %eax,(%esp)
 8633fc3:	e8 88 f7 4a 00       	call   8ae3750 <_Unwind_Resume>
 8633fc8:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8633fcb:	89 04 24             	mov    %eax,(%esp)
 8633fce:	e8 ff 88 fe ff       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8633fd3:	e8 37 07 c0 ff       	call   823470f <_ZN15exchange_server32GetInstanceExchangeServerHitRateEv>
 8633fd8:	89 04 24             	mov    %eax,(%esp)
 8633fdb:	e8 0a 80 00 00       	call   863bfea <_ZN15exchange_server22CExchangeServerHitRate29GetCacheLoadFailOverflowCountEv>
 8633fe0:	89 45 bc             	mov    %eax,-0x44(%ebp)
 8633fe3:	e8 27 07 c0 ff       	call   823470f <_ZN15exchange_server32GetInstanceExchangeServerHitRateEv>
 8633fe8:	89 04 24             	mov    %eax,(%esp)
 8633feb:	e8 ee 7f 00 00       	call   863bfde <_ZN15exchange_server22CExchangeServerHitRate21GetCacheLoadFailCountEv>
 8633ff0:	89 45 c0             	mov    %eax,-0x40(%ebp)
 8633ff3:	e8 17 07 c0 ff       	call   823470f <_ZN15exchange_server32GetInstanceExchangeServerHitRateEv>
 8633ff8:	89 04 24             	mov    %eax,(%esp)
 8633ffb:	e8 d2 7f 00 00       	call   863bfd2 <_ZN15exchange_server22CExchangeServerHitRate25GetCacheLoadOverflowCountEv>
 8634000:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8634003:	e8 07 07 c0 ff       	call   823470f <_ZN15exchange_server32GetInstanceExchangeServerHitRateEv>
 8634008:	89 04 24             	mov    %eax,(%esp)
 863400b:	e8 aa 7f 00 00       	call   863bfba <_ZN15exchange_server22CExchangeServerHitRate17GetCacheLoadCountEv>
 8634010:	89 c7                	mov    %eax,%edi
 8634012:	e8 f8 06 c0 ff       	call   823470f <_ZN15exchange_server32GetInstanceExchangeServerHitRateEv>
 8634017:	89 04 24             	mov    %eax,(%esp)
 863401a:	e8 a7 7f 00 00       	call   863bfc6 <_ZN15exchange_server22CExchangeServerHitRate22GetDBLoadOverflowCountEv>
 863401f:	89 c6                	mov    %eax,%esi
 8634021:	e8 e9 06 c0 ff       	call   823470f <_ZN15exchange_server32GetInstanceExchangeServerHitRateEv>
 8634026:	89 04 24             	mov    %eax,(%esp)
 8634029:	e8 82 7f 00 00       	call   863bfb0 <_ZN15exchange_server22CExchangeServerHitRate14GetDBLoadCountEv>
 863402e:	89 c3                	mov    %eax,%ebx
 8634030:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8634037:	00 
 8634038:	c7 44 24 08 37 06 00 	movl   $0x637,0x8(%esp)
 863403f:	00 
 8634040:	c7 44 24 04 60 84 ce 	movl   $0x8ce8460,0x4(%esp)
 8634047:	08 
 8634048:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 863404b:	89 04 24             	mov    %eax,(%esp)
 863404e:	e8 c5 b6 f1 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8634053:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8634056:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 863405a:	8b 45 c0             	mov    -0x40(%ebp),%eax
 863405d:	89 44 24 18          	mov    %eax,0x18(%esp)
 8634061:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8634064:	89 44 24 14          	mov    %eax,0x14(%esp)
 8634068:	89 7c 24 10          	mov    %edi,0x10(%esp)
 863406c:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8634070:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8634074:	c7 44 24 04 74 6d ce 	movl   $0x8ce6d74,0x4(%esp)
 863407b:	08 
 863407c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 863407f:	89 04 24             	mov    %eax,(%esp)
 8634082:	e8 01 b7 f1 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8634087:	8b 45 08             	mov    0x8(%ebp),%eax
 863408a:	89 04 24             	mov    %eax,(%esp)
 863408d:	e8 22 00 00 00       	call   86340b4 <_ZN18TimerStatisticsLog15RegistNextTimerEv>
 8634092:	88 45 e7             	mov    %al,-0x19(%ebp)
 8634095:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
 8634099:	83 f0 01             	xor    $0x1,%eax
 863409c:	84 c0                	test   %al,%al
 863409e:	74 07                	je     86340a7 <_ZN18TimerStatisticsLog12dispatch_sigEiij+0x18b>
 86340a0:	b8 00 00 00 00       	mov    $0x0,%eax
 86340a5:	eb 05                	jmp    86340ac <_ZN18TimerStatisticsLog12dispatch_sigEiij+0x190>
 86340a7:	b8 01 00 00 00       	mov    $0x1,%eax
 86340ac:	83 c4 5c             	add    $0x5c,%esp
 86340af:	5b                   	pop    %ebx
 86340b0:	5e                   	pop    %esi
 86340b1:	5f                   	pop    %edi
 86340b2:	5d                   	pop    %ebp
 86340b3:	c3                   	ret

```

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

