# TimerQueueSizeLog

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## RegistNextTimer

```asm
// === 08636348 TimerQueueSizeLog::RegistNextTimer  [0x08636348-0x8636397] ===
 8636348:	55                   	push   %ebp
 8636349:	89 e5                	mov    %esp,%ebp
 863634b:	83 ec 38             	sub    $0x38,%esp
 863634e:	c7 45 f4 3c 00 00 00 	movl   $0x3c,-0xc(%ebp)
 8636355:	e8 22 01 ac ff       	call   80f647c <_Z12G_TimerQueuev>
 863635a:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8636361:	00 
 8636362:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8636369:	00 
 863636a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 863636d:	89 54 24 10          	mov    %edx,0x10(%esp)
 8636371:	c7 44 24 0c 61 00 00 	movl   $0x61,0xc(%esp)
 8636378:	00 
 8636379:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8636380:	00 
 8636381:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8636388:	00 
 8636389:	89 04 24             	mov    %eax,(%esp)
 863638c:	e8 85 aa ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 8636391:	b8 01 00 00 00       	mov    $0x1,%eax
 8636396:	c9                   	leave
 8636397:	c3                   	ret

```

```c
// TimerQueueSizeLog::RegistNextTimer @ 0x8636348

/* TimerQueueSizeLog::RegistNextTimer() */

undefined4 TimerQueueSizeLog::RegistNextTimer(void)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,0,0x61,0x3c,0,0);
  return 1;
}

```

---

## dispatch_sig

```asm
// === 08636204 TimerQueueSizeLog::dispatch_sig  [0x08636204-0x8636347] ===
 8636204:	55                   	push   %ebp
 8636205:	89 e5                	mov    %esp,%ebp
 8636207:	56                   	push   %esi
 8636208:	53                   	push   %ebx
 8636209:	83 ec 20             	sub    $0x20,%esp
 863620c:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8636211:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8636218:	00 
 8636219:	89 04 24             	mov    %eax,(%esp)
 863621c:	e8 c3 af f3 ff       	call   85711e4 <_ZN11MsgQueueMgr6remainENS_9QUEUE_IDXE>
 8636221:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8636224:	83 7d f0 0a          	cmpl   $0xa,-0x10(%ebp)
 8636228:	0f 8e ee 00 00 00    	jle    863631c <_ZN17TimerQueueSizeLog12dispatch_sigEiij+0x118>
 863622e:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8636233:	c7 44 24 08 7f 0a 00 	movl   $0xa7f,0x8(%esp)
 863623a:	00 
 863623b:	c7 44 24 04 0e 6d ce 	movl   $0x8ce6d0e,0x4(%esp)
 8636242:	08 
 8636243:	89 04 24             	mov    %eax,(%esp)
 8636246:	e8 3b 98 c5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 863624b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8636252:	00 
 8636253:	89 44 24 04          	mov    %eax,0x4(%esp)
 8636257:	8d 45 e8             	lea    -0x18(%ebp),%eax
 863625a:	89 04 24             	mov    %eax,(%esp)
 863625d:	e8 c4 29 a9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8636262:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8636265:	89 04 24             	mov    %eax,(%esp)
 8636268:	e8 d9 29 a9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 863626d:	c7 44 24 04 9b 00 00 	movl   $0x9b,0x4(%esp)
 8636274:	00 
 8636275:	89 04 24             	mov    %eax,(%esp)
 8636278:	e8 d9 29 a9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 863627d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8636280:	89 04 24             	mov    %eax,(%esp)
 8636283:	e8 be 29 a9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8636288:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 863628f:	ff 
 8636290:	89 04 24             	mov    %eax,(%esp)
 8636293:	e8 be 29 a9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8636298:	8d 45 e8             	lea    -0x18(%ebp),%eax
 863629b:	89 04 24             	mov    %eax,(%esp)
 863629e:	e8 a3 29 a9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 86362a3:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86362a6:	89 54 24 04          	mov    %edx,0x4(%esp)
 86362aa:	89 04 24             	mov    %eax,(%esp)
 86362ad:	e8 a4 29 a9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 86362b2:	e8 ca 5e a9 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 86362b7:	89 04 24             	mov    %eax,(%esp)
 86362ba:	e8 0b 48 b1 ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 86362bf:	89 c3                	mov    %eax,%ebx
 86362c1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86362c4:	89 04 24             	mov    %eax,(%esp)
 86362c7:	e8 7a 29 a9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 86362cc:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86362d0:	89 04 24             	mov    %eax,(%esp)
 86362d3:	e8 7e 29 a9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 86362d8:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 86362dd:	8d 55 e8             	lea    -0x18(%ebp),%edx
 86362e0:	89 54 24 08          	mov    %edx,0x8(%esp)
 86362e4:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 86362eb:	00 
 86362ec:	89 04 24             	mov    %eax,(%esp)
 86362ef:	e8 ea ac f3 ff       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 86362f4:	eb 1b                	jmp    8636311 <_ZN17TimerQueueSizeLog12dispatch_sigEiij+0x10d>
 86362f6:	89 d3                	mov    %edx,%ebx
 86362f8:	89 c6                	mov    %eax,%esi
 86362fa:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86362fd:	89 04 24             	mov    %eax,(%esp)
 8636300:	e8 cd 65 fe ff       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8636305:	89 f0                	mov    %esi,%eax
 8636307:	89 da                	mov    %ebx,%edx
 8636309:	89 04 24             	mov    %eax,(%esp)
 863630c:	e8 3f d4 4a 00       	call   8ae3750 <_Unwind_Resume>
 8636311:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8636314:	89 04 24             	mov    %eax,(%esp)
 8636317:	e8 b6 65 fe ff       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 863631c:	8b 45 08             	mov    0x8(%ebp),%eax
 863631f:	89 04 24             	mov    %eax,(%esp)
 8636322:	e8 21 00 00 00       	call   8636348 <_ZN17TimerQueueSizeLog15RegistNextTimerEv>
 8636327:	88 45 f7             	mov    %al,-0x9(%ebp)
 863632a:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 863632e:	83 f0 01             	xor    $0x1,%eax
 8636331:	84 c0                	test   %al,%al
 8636333:	74 07                	je     863633c <_ZN17TimerQueueSizeLog12dispatch_sigEiij+0x138>
 8636335:	b8 00 00 00 00       	mov    $0x0,%eax
 863633a:	eb 05                	jmp    8636341 <_ZN17TimerQueueSizeLog12dispatch_sigEiij+0x13d>
 863633c:	b8 01 00 00 00       	mov    $0x1,%eax
 8636341:	83 c4 20             	add    $0x20,%esp
 8636344:	5b                   	pop    %ebx
 8636345:	5e                   	pop    %esi
 8636346:	5d                   	pop    %ebp
 8636347:	c3                   	ret

```

```c
// TimerQueueSizeLog::dispatch_sig @ 0x8636204

/* TimerQueueSizeLog::dispatch_sig(int, int, unsigned int) */

bool TimerQueueSizeLog::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  CEnvironment *this;
  int iVar4;
  CStreamGuard local_1c [8];
  int local_14;
  
  local_14 = MsgQueueMgr::remain(GlobalData::s_msgq_mgr,2);
  if (10 < local_14) {
    pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"TimerDispatcher.cpp",0xa7f);
    CStreamGuard::CStreamGuard(local_1c,pSVar2,true);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 08636278 to 086362f3 has its CatchHandler @ 086362f6 */
    CStreamGuard::operator<<(pCVar3,0x9b);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
    CStreamGuard::operator<<(pCVar3,-1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
    CStreamGuard::operator<<(pCVar3,local_14);
    this = (CEnvironment *)G_CEnvironment();
    iVar4 = CEnvironment::get_channel_no(this);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
    CStreamGuard::operator<<(pCVar3,iVar4);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_1c);
    CStreamGuard::~CStreamGuard(local_1c);
  }
  cVar1 = RegistNextTimer();
  return cVar1 == '\x01';
}

```

