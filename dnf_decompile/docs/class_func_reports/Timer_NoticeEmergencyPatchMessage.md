# Timer_NoticeEmergencyPatchMessage

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## RegistNextTimer

```asm
// === 0863b87e Timer_NoticeEmergencyPatchMessage::RegistNextTimer  [0x0863b87e-0x863b8c3] ===
 863b87e:	55                   	push   %ebp
 863b87f:	89 e5                	mov    %esp,%ebp
 863b881:	83 ec 28             	sub    $0x28,%esp
 863b884:	e8 f3 ab ab ff       	call   80f647c <_Z12G_TimerQueuev>
 863b889:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 863b890:	00 
 863b891:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 863b898:	00 
 863b899:	c7 44 24 10 3c 00 00 	movl   $0x3c,0x10(%esp)
 863b8a0:	00 
 863b8a1:	c7 44 24 0c a2 00 00 	movl   $0xa2,0xc(%esp)
 863b8a8:	00 
 863b8a9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 863b8b0:	00 
 863b8b1:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 863b8b8:	00 
 863b8b9:	89 04 24             	mov    %eax,(%esp)
 863b8bc:	e8 55 55 ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 863b8c1:	c9                   	leave
 863b8c2:	c3                   	ret
 863b8c3:	90                   	nop

```

```c
// Timer_NoticeEmergencyPatchMessage::RegistNextTimer @ 0x863b87e

/* Timer_NoticeEmergencyPatchMessage::RegistNextTimer() */

void Timer_NoticeEmergencyPatchMessage::RegistNextTimer(void)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,0,0xa2,0x3c,0,0);
  return;
}

```

---

## dispatch_sig

```asm
// === 0863b6c4 Timer_NoticeEmergencyPatchMessage::dispatch_sig  [0x0863b6c4-0x863b87d] ===
 863b6c4:	55                   	push   %ebp
 863b6c5:	89 e5                	mov    %esp,%ebp
 863b6c7:	57                   	push   %edi
 863b6c8:	56                   	push   %esi
 863b6c9:	53                   	push   %ebx
 863b6ca:	81 ec 3c 04 00 00    	sub    $0x43c,%esp
 863b6d0:	8d 45 c8             	lea    -0x38(%ebp),%eax
 863b6d3:	89 04 24             	mov    %eax,(%esp)
 863b6d6:	e8 71 26 f5 ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 863b6db:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 863b6e2:	00 
 863b6e3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 863b6ea:	00 
 863b6eb:	8d 45 c8             	lea    -0x38(%ebp),%eax
 863b6ee:	89 04 24             	mov    %eax,(%esp)
 863b6f1:	e8 06 02 a9 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 863b6f6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 863b6fd:	00 
 863b6fe:	8d 45 c8             	lea    -0x38(%ebp),%eax
 863b701:	89 04 24             	mov    %eax,(%esp)
 863b704:	e8 17 02 a9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 863b709:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 863b710:	00 
 863b711:	8d 45 c8             	lea    -0x38(%ebp),%eax
 863b714:	89 04 24             	mov    %eax,(%esp)
 863b717:	e8 88 e7 a9 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 863b71c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 863b723:	00 
 863b724:	8d 45 c8             	lea    -0x38(%ebp),%eax
 863b727:	89 04 24             	mov    %eax,(%esp)
 863b72a:	e8 f1 01 a9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 863b72f:	8d 9d c8 fb ff ff    	lea    -0x438(%ebp),%ebx
 863b735:	b8 00 00 00 00       	mov    $0x0,%eax
 863b73a:	ba 00 01 00 00       	mov    $0x100,%edx
 863b73f:	89 df                	mov    %ebx,%edi
 863b741:	89 d1                	mov    %edx,%ecx
 863b743:	f3 ab                	rep stos %eax,%es:(%edi)
 863b745:	e8 6e aa ab ff       	call   80f61b8 <_Z30GameserverDemonManagerInstancev>
 863b74a:	89 04 24             	mov    %eax,(%esp)
 863b74d:	e8 a4 08 00 00       	call   863bff6 <_ZN22GameServerDemonManager16GetNoticeMessageEv>
 863b752:	8b 55 08             	mov    0x8(%ebp),%edx
 863b755:	8b 52 04             	mov    0x4(%edx),%edx
 863b758:	89 44 24 0c          	mov    %eax,0xc(%esp)
 863b75c:	89 54 24 08          	mov    %edx,0x8(%esp)
 863b760:	c7 44 24 04 80 71 ce 	movl   $0x8ce7180,0x4(%esp)
 863b767:	08 
 863b768:	8d 85 c8 fb ff ff    	lea    -0x438(%ebp),%eax
 863b76e:	89 04 24             	mov    %eax,(%esp)
 863b771:	e8 ca 2c a4 ff       	call   807e440 <sprintf@plt>
 863b776:	8d 85 c8 fb ff ff    	lea    -0x438(%ebp),%eax
 863b77c:	89 04 24             	mov    %eax,(%esp)
 863b77f:	e8 2c 2c a4 ff       	call   807e3b0 <strlen@plt>
 863b784:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 863b787:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 863b78a:	89 44 24 04          	mov    %eax,0x4(%esp)
 863b78e:	8d 45 c8             	lea    -0x38(%ebp),%eax
 863b791:	89 04 24             	mov    %eax,(%esp)
 863b794:	e8 a3 01 a9 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 863b799:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 863b79c:	89 44 24 08          	mov    %eax,0x8(%esp)
 863b7a0:	8d 85 c8 fb ff ff    	lea    -0x438(%ebp),%eax
 863b7a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 863b7aa:	8d 45 c8             	lea    -0x38(%ebp),%eax
 863b7ad:	89 04 24             	mov    %eax,(%esp)
 863b7b0:	e8 2f bc b7 ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 863b7b5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 863b7bc:	00 
 863b7bd:	8d 45 c8             	lea    -0x38(%ebp),%eax
 863b7c0:	89 04 24             	mov    %eax,(%esp)
 863b7c3:	e8 90 01 a9 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 863b7c8:	e8 da eb a9 ff       	call   80da3a7 <_Z11G_GameWorldv>
 863b7cd:	8d 55 c8             	lea    -0x38(%ebp),%edx
 863b7d0:	89 54 24 04          	mov    %edx,0x4(%esp)
 863b7d4:	89 04 24             	mov    %eax,(%esp)
 863b7d7:	e8 38 d4 08 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 863b7dc:	8b 45 08             	mov    0x8(%ebp),%eax
 863b7df:	8b 40 04             	mov    0x4(%eax),%eax
 863b7e2:	8d 50 ff             	lea    -0x1(%eax),%edx
 863b7e5:	8b 45 08             	mov    0x8(%ebp),%eax
 863b7e8:	89 50 04             	mov    %edx,0x4(%eax)
 863b7eb:	8b 45 08             	mov    0x8(%ebp),%eax
 863b7ee:	8b 40 04             	mov    0x4(%eax),%eax
 863b7f1:	85 c0                	test   %eax,%eax
 863b7f3:	75 4a                	jne    863b83f <_ZN33Timer_NoticeEmergencyPatchMessage12dispatch_sigEiij+0x17b>
 863b7f5:	e8 c1 b7 c6 ff       	call   82a6fbb <_Z25GetInstanceShutdowManagerv>
 863b7fa:	89 04 24             	mov    %eax,(%esp)
 863b7fd:	e8 a4 7d c6 ff       	call   82a35a6 <_ZN15CShutdowManager18SendShutdownSignalEv>
 863b802:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 863b809:	00 
 863b80a:	c7 44 24 08 49 18 00 	movl   $0x1849,0x8(%esp)
 863b811:	00 
 863b812:	c7 44 24 04 c0 7e ce 	movl   $0x8ce7ec0,0x4(%esp)
 863b819:	08 
 863b81a:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 863b81d:	89 04 24             	mov    %eax,(%esp)
 863b820:	e8 f3 3e f1 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 863b825:	c7 44 24 04 a0 71 ce 	movl   $0x8ce71a0,0x4(%esp)
 863b82c:	08 
 863b82d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 863b830:	89 04 24             	mov    %eax,(%esp)
 863b833:	e8 50 3f f1 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 863b838:	bb 01 00 00 00       	mov    $0x1,%ebx
 863b83d:	eb 27                	jmp    863b866 <_ZN33Timer_NoticeEmergencyPatchMessage12dispatch_sigEiij+0x1a2>
 863b83f:	e8 3a 00 00 00       	call   863b87e <_ZN33Timer_NoticeEmergencyPatchMessage15RegistNextTimerEv>
 863b844:	bb 01 00 00 00       	mov    $0x1,%ebx
 863b849:	eb 1b                	jmp    863b866 <_ZN33Timer_NoticeEmergencyPatchMessage12dispatch_sigEiij+0x1a2>
 863b84b:	89 d3                	mov    %edx,%ebx
 863b84d:	89 c6                	mov    %eax,%esi
 863b84f:	8d 45 c8             	lea    -0x38(%ebp),%eax
 863b852:	89 04 24             	mov    %eax,(%esp)
 863b855:	e8 26 26 f5 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 863b85a:	89 f0                	mov    %esi,%eax
 863b85c:	89 da                	mov    %ebx,%edx
 863b85e:	89 04 24             	mov    %eax,(%esp)
 863b861:	e8 ea 7e 4a 00       	call   8ae3750 <_Unwind_Resume>
 863b866:	8d 45 c8             	lea    -0x38(%ebp),%eax
 863b869:	89 04 24             	mov    %eax,(%esp)
 863b86c:	e8 0f 26 f5 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 863b871:	89 d8                	mov    %ebx,%eax
 863b873:	81 c4 3c 04 00 00    	add    $0x43c,%esp
 863b879:	5b                   	pop    %ebx
 863b87a:	5e                   	pop    %esi
 863b87b:	5f                   	pop    %edi
 863b87c:	5d                   	pop    %ebp
 863b87d:	c3                   	ret

```

```c
// Timer_NoticeEmergencyPatchMessage::dispatch_sig @ 0x863b6c4

/* Timer_NoticeEmergencyPatchMessage::dispatch_sig(int, int, unsigned int) */

undefined4 Timer_NoticeEmergencyPatchMessage::dispatch_sig(int param_1,int param_2,uint param_3)

{
  GameServerDemonManager *this;
  undefined4 uVar1;
  GameWorld *this_00;
  int iVar2;
  char *pcVar3;
  byte bVar4;
  char local_43c [1024];
  PacketGuard local_3c [12];
  cMyTrace local_30 [16];
  size_t local_20;
  
  bVar4 = 0;
  PacketGuard::PacketGuard(local_3c);
                    /* try { // try from 0863b6f1 to 0863b843 has its CatchHandler @ 0863b84b */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,0,0xc);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,0);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_3c,0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,0);
  pcVar3 = local_43c;
  for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3 = pcVar3 + ((uint)bVar4 * -2 + 1) * 4;
  }
  this = (GameServerDemonManager *)GameserverDemonManagerInstance();
  uVar1 = GameServerDemonManager::GetNoticeMessage(this);
  sprintf(local_43c,&DAT_08ce7180,*(undefined4 *)(param_1 + 4),uVar1);
  local_20 = strlen(local_43c);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_3c,local_20);
  InterfacePacketBuf::put_str((InterfacePacketBuf *)local_3c,local_43c,local_20);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
  this_00 = (GameWorld *)G_GameWorld();
  GameWorld::send_all(this_00,local_3c);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  if (*(int *)(param_1 + 4) == 0) {
    GetInstanceShutdowManager();
    CShutdowManager::SendShutdownSignal();
    cMyTrace::cMyTrace(local_30,
                       "virtual bool Timer_NoticeEmergencyPatchMessage::dispatch_sig(int, int, memberIdentificationNumber_t)"
                       ,0x1849,0);
    cMyTrace::operator()(local_30,"Emergency Patch Message Received");
  }
  else {
    RegistNextTimer();
  }
  PacketGuard::~PacketGuard(local_3c);
  return 1;
}

```

