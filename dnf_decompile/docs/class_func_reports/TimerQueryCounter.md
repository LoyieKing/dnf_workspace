# TimerQueryCounter

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## RegistNextTimer

```asm
// === 08635bdc TimerQueryCounter::RegistNextTimer  [0x08635bdc-0x8635c2b] ===
 8635bdc:	55                   	push   %ebp
 8635bdd:	89 e5                	mov    %esp,%ebp
 8635bdf:	83 ec 38             	sub    $0x38,%esp
 8635be2:	c7 45 f4 08 07 00 00 	movl   $0x708,-0xc(%ebp)
 8635be9:	e8 8e 08 ac ff       	call   80f647c <_Z12G_TimerQueuev>
 8635bee:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8635bf5:	00 
 8635bf6:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8635bfd:	00 
 8635bfe:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8635c01:	89 54 24 10          	mov    %edx,0x10(%esp)
 8635c05:	c7 44 24 0c 59 00 00 	movl   $0x59,0xc(%esp)
 8635c0c:	00 
 8635c0d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8635c14:	00 
 8635c15:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8635c1c:	00 
 8635c1d:	89 04 24             	mov    %eax,(%esp)
 8635c20:	e8 f1 b1 ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 8635c25:	b8 01 00 00 00       	mov    $0x1,%eax
 8635c2a:	c9                   	leave
 8635c2b:	c3                   	ret

```

```c
// TimerQueryCounter::RegistNextTimer @ 0x8635bdc

/* TimerQueryCounter::RegistNextTimer() */

undefined4 TimerQueryCounter::RegistNextTimer(void)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,0,0x59,0x708,0,0);
  return 1;
}

```

---

## dispatch_sig

```asm
// === 08635a60 TimerQueryCounter::dispatch_sig  [0x08635a60-0x8635bdb] ===
 8635a60:	55                   	push   %ebp
 8635a61:	89 e5                	mov    %esp,%ebp
 8635a63:	56                   	push   %esi
 8635a64:	53                   	push   %ebx
 8635a65:	83 ec 20             	sub    $0x20,%esp
 8635a68:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8635a6d:	c7 44 24 08 7b 09 00 	movl   $0x97b,0x8(%esp)
 8635a74:	00 
 8635a75:	c7 44 24 04 0e 6d ce 	movl   $0x8ce6d0e,0x4(%esp)
 8635a7c:	08 
 8635a7d:	89 04 24             	mov    %eax,(%esp)
 8635a80:	e8 01 a0 c5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8635a85:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8635a8c:	00 
 8635a8d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8635a91:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8635a94:	89 04 24             	mov    %eax,(%esp)
 8635a97:	e8 8a 31 a9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8635a9c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8635a9f:	89 04 24             	mov    %eax,(%esp)
 8635aa2:	e8 9f 31 a9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8635aa7:	c7 44 24 04 7b 00 00 	movl   $0x7b,0x4(%esp)
 8635aae:	00 
 8635aaf:	89 04 24             	mov    %eax,(%esp)
 8635ab2:	e8 9f 31 a9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8635ab7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8635aba:	89 04 24             	mov    %eax,(%esp)
 8635abd:	e8 84 31 a9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8635ac2:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8635ac9:	ff 
 8635aca:	89 04 24             	mov    %eax,(%esp)
 8635acd:	e8 84 31 a9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8635ad2:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8635ad7:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8635ada:	89 54 24 08          	mov    %edx,0x8(%esp)
 8635ade:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8635ae5:	00 
 8635ae6:	89 04 24             	mov    %eax,(%esp)
 8635ae9:	e8 f0 b4 f3 ff       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8635aee:	eb 1b                	jmp    8635b0b <_ZN17TimerQueryCounter12dispatch_sigEiij+0xab>
 8635af0:	89 d3                	mov    %edx,%ebx
 8635af2:	89 c6                	mov    %eax,%esi
 8635af4:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8635af7:	89 04 24             	mov    %eax,(%esp)
 8635afa:	e8 d3 6d fe ff       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8635aff:	89 f0                	mov    %esi,%eax
 8635b01:	89 da                	mov    %ebx,%edx
 8635b03:	89 04 24             	mov    %eax,(%esp)
 8635b06:	e8 45 dc 4a 00       	call   8ae3750 <_Unwind_Resume>
 8635b0b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8635b0e:	89 04 24             	mov    %eax,(%esp)
 8635b11:	e8 bc 6d fe ff       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8635b16:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8635b1b:	c7 44 24 08 81 09 00 	movl   $0x981,0x8(%esp)
 8635b22:	00 
 8635b23:	c7 44 24 04 0e 6d ce 	movl   $0x8ce6d0e,0x4(%esp)
 8635b2a:	08 
 8635b2b:	89 04 24             	mov    %eax,(%esp)
 8635b2e:	e8 53 9f c5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8635b33:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8635b3a:	00 
 8635b3b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8635b3f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8635b42:	89 04 24             	mov    %eax,(%esp)
 8635b45:	e8 dc 30 a9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8635b4a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8635b4d:	89 04 24             	mov    %eax,(%esp)
 8635b50:	e8 f1 30 a9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8635b55:	c7 44 24 04 7c 00 00 	movl   $0x7c,0x4(%esp)
 8635b5c:	00 
 8635b5d:	89 04 24             	mov    %eax,(%esp)
 8635b60:	e8 f1 30 a9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8635b65:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8635b68:	89 04 24             	mov    %eax,(%esp)
 8635b6b:	e8 d6 30 a9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8635b70:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8635b77:	ff 
 8635b78:	89 04 24             	mov    %eax,(%esp)
 8635b7b:	e8 d6 30 a9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8635b80:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8635b85:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8635b88:	89 54 24 08          	mov    %edx,0x8(%esp)
 8635b8c:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8635b93:	00 
 8635b94:	89 04 24             	mov    %eax,(%esp)
 8635b97:	e8 42 b4 f3 ff       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8635b9c:	eb 1b                	jmp    8635bb9 <_ZN17TimerQueryCounter12dispatch_sigEiij+0x159>
 8635b9e:	89 d3                	mov    %edx,%ebx
 8635ba0:	89 c6                	mov    %eax,%esi
 8635ba2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8635ba5:	89 04 24             	mov    %eax,(%esp)
 8635ba8:	e8 25 6d fe ff       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8635bad:	89 f0                	mov    %esi,%eax
 8635baf:	89 da                	mov    %ebx,%edx
 8635bb1:	89 04 24             	mov    %eax,(%esp)
 8635bb4:	e8 97 db 4a 00       	call   8ae3750 <_Unwind_Resume>
 8635bb9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8635bbc:	89 04 24             	mov    %eax,(%esp)
 8635bbf:	e8 0e 6d fe ff       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8635bc4:	8b 45 08             	mov    0x8(%ebp),%eax
 8635bc7:	89 04 24             	mov    %eax,(%esp)
 8635bca:	e8 0d 00 00 00       	call   8635bdc <_ZN17TimerQueryCounter15RegistNextTimerEv>
 8635bcf:	b8 01 00 00 00       	mov    $0x1,%eax
 8635bd4:	83 c4 20             	add    $0x20,%esp
 8635bd7:	5b                   	pop    %ebx
 8635bd8:	5e                   	pop    %esi
 8635bd9:	5d                   	pop    %ebp
 8635bda:	c3                   	ret
 8635bdb:	90                   	nop

```

```c
// TimerQueryCounter::dispatch_sig @ 0x8635a60

/* TimerQueryCounter::dispatch_sig(int, int, unsigned int) */

undefined4 TimerQueryCounter::dispatch_sig(int param_1,int param_2,uint param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_1c [8];
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"TimerDispatcher.cpp",0x97b);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08635ab2 to 08635aed has its CatchHandler @ 08635af0 */
  CStreamGuard::operator<<(pCVar2,0x7b);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"TimerDispatcher.cpp",0x981);
  CStreamGuard::CStreamGuard(local_1c,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 08635b60 to 08635b9b has its CatchHandler @ 08635b9e */
  CStreamGuard::operator<<(pCVar2,0x7c);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
  CStreamGuard::operator<<(pCVar2,-1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_1c);
  CStreamGuard::~CStreamGuard(local_1c);
  RegistNextTimer();
  return 1;
}

```

