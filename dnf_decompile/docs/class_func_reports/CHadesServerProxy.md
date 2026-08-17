# CHadesServerProxy

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 11

---

## CHadesServerProxy

```asm
// === 08470510 CHadesServerProxy::CHadesServerProxy  [0x08470510-0x8470599] ===
 8470510:	55                   	push   %ebp
 8470511:	89 e5                	mov    %esp,%ebp
 8470513:	56                   	push   %esi
 8470514:	53                   	push   %ebx
 8470515:	83 ec 10             	sub    $0x10,%esp
 8470518:	8b 45 08             	mov    0x8(%ebp),%eax
 847051b:	c7 44 24 0c 60 92 c6 	movl   $0x8c69260,0xc(%esp)
 8470522:	08 
 8470523:	8b 55 10             	mov    0x10(%ebp),%edx
 8470526:	89 54 24 08          	mov    %edx,0x8(%esp)
 847052a:	8b 55 0c             	mov    0xc(%ebp),%edx
 847052d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8470531:	89 04 24             	mov    %eax,(%esp)
 8470534:	e8 17 ce e8 ff       	call   82fd350 <_ZN15BaseServerProxyC1EPciS0_>
 8470539:	8b 45 08             	mov    0x8(%ebp),%eax
 847053c:	c7 00 b0 9f c6 08    	movl   $0x8c69fb0,(%eax)
 8470542:	8b 45 08             	mov    0x8(%ebp),%eax
 8470545:	8b 55 14             	mov    0x14(%ebp),%edx
 8470548:	89 90 0c 0e 03 00    	mov    %edx,0x30e0c(%eax)
 847054e:	8b 45 08             	mov    0x8(%ebp),%eax
 8470551:	05 10 0e 03 00       	add    $0x30e10,%eax
 8470556:	89 04 24             	mov    %eax,(%esp)
 8470559:	e8 ba 2f 01 00       	call   8483518 <_ZN11CUdpHandlerC1Ev>
 847055e:	8b 45 08             	mov    0x8(%ebp),%eax
 8470561:	c7 80 18 0e 03 00 00 	movl   $0x0,0x30e18(%eax)
 8470568:	00 00 00 
 847056b:	8b 45 08             	mov    0x8(%ebp),%eax
 847056e:	89 04 24             	mov    %eax,(%esp)
 8470571:	e8 24 00 00 00       	call   847059a <_ZN17CHadesServerProxy12HadesSvrInitEv>
 8470576:	eb 1b                	jmp    8470593 <_ZN17CHadesServerProxyC1EPcii+0x83>
 8470578:	89 d3                	mov    %edx,%ebx
 847057a:	89 c6                	mov    %eax,%esi
 847057c:	8b 45 08             	mov    0x8(%ebp),%eax
 847057f:	89 04 24             	mov    %eax,(%esp)
 8470582:	e8 a3 a3 e3 ff       	call   82aa92a <_ZN15BaseServerProxyD1Ev>
 8470587:	89 f0                	mov    %esi,%eax
 8470589:	89 da                	mov    %ebx,%edx
 847058b:	89 04 24             	mov    %eax,(%esp)
 847058e:	e8 bd 31 67 00       	call   8ae3750 <_Unwind_Resume>
 8470593:	83 c4 10             	add    $0x10,%esp
 8470596:	5b                   	pop    %ebx
 8470597:	5e                   	pop    %esi
 8470598:	5d                   	pop    %ebp
 8470599:	c3                   	ret

```

```c
// CHadesServerProxy::CHadesServerProxy @ 0x8470510

/* CHadesServerProxy::CHadesServerProxy(char*, int, int) */

void __thiscall
CHadesServerProxy::CHadesServerProxy(CHadesServerProxy *this,char *param_1,int param_2,int param_3)

{
  BaseServerProxy::BaseServerProxy((BaseServerProxy *)this,param_1,param_2,"HadesSvr");
  *(undefined ***)this = &PTR_OnDisconnect_08c69fb0;
  *(int *)(this + 0x30e0c) = param_3;
                    /* try { // try from 08470559 to 08470575 has its CatchHandler @ 08470578 */
  CUdpHandler::CUdpHandler((CUdpHandler *)(this + 0x30e10));
  *(undefined4 *)(this + 0x30e18) = 0;
  HadesSvrInit(this);
  return;
}

```

---

## ConnTcpHadesSvr

```asm
// === 084705be CHadesServerProxy::ConnTcpHadesSvr  [0x084705be-0x84705fd] ===
 84705be:	55                   	push   %ebp
 84705bf:	89 e5                	mov    %esp,%ebp
 84705c1:	83 ec 18             	sub    $0x18,%esp
 84705c4:	8b 45 08             	mov    0x8(%ebp),%eax
 84705c7:	89 04 24             	mov    %eax,(%esp)
 84705ca:	e8 91 ce e8 ff       	call   82fd460 <_ZN15BaseServerProxy4InitEv>
 84705cf:	8b 45 08             	mov    0x8(%ebp),%eax
 84705d2:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84705d9:	00 
 84705da:	89 04 24             	mov    %eax,(%esp)
 84705dd:	e8 38 03 00 00       	call   847091a <_ZN15BaseServerProxy14SetSocketStateE17ENUM_SOCKET_STATE>
 84705e2:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84705e9:	e8 b0 b6 c5 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84705ee:	8b 55 08             	mov    0x8(%ebp),%edx
 84705f1:	89 82 18 0e 03 00    	mov    %eax,0x30e18(%edx)
 84705f7:	b8 01 00 00 00       	mov    $0x1,%eax
 84705fc:	c9                   	leave
 84705fd:	c3                   	ret

```

```c
// CHadesServerProxy::ConnTcpHadesSvr @ 0x84705be

/* CHadesServerProxy::ConnTcpHadesSvr() */

undefined4 __thiscall CHadesServerProxy::ConnTcpHadesSvr(CHadesServerProxy *this)

{
  undefined4 uVar1;
  
  BaseServerProxy::Init((BaseServerProxy *)this);
  BaseServerProxy::SetSocketState((BaseServerProxy *)this,2);
  uVar1 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  *(undefined4 *)(this + 0x30e18) = uVar1;
  return 1;
}

```

---

## HadesSvrInit

```asm
// === 0847059a CHadesServerProxy::HadesSvrInit  [0x0847059a-0x84705bd] ===
 847059a:	55                   	push   %ebp
 847059b:	89 e5                	mov    %esp,%ebp
 847059d:	83 ec 18             	sub    $0x18,%esp
 84705a0:	8b 45 08             	mov    0x8(%ebp),%eax
 84705a3:	89 04 24             	mov    %eax,(%esp)
 84705a6:	e8 13 00 00 00       	call   84705be <_ZN17CHadesServerProxy15ConnTcpHadesSvrEv>
 84705ab:	8b 45 08             	mov    0x8(%ebp),%eax
 84705ae:	89 04 24             	mov    %eax,(%esp)
 84705b1:	e8 72 00 00 00       	call   8470628 <_ZN17CHadesServerProxy7InitUdpEv>
 84705b6:	b8 01 00 00 00       	mov    $0x1,%eax
 84705bb:	c9                   	leave
 84705bc:	c3                   	ret
 84705bd:	90                   	nop

```

```c
// CHadesServerProxy::HadesSvrInit @ 0x847059a

/* CHadesServerProxy::HadesSvrInit() */

undefined4 __thiscall CHadesServerProxy::HadesSvrInit(CHadesServerProxy *this)

{
  ConnTcpHadesSvr(this);
  InitUdp(this);
  return 1;
}

```

---

## InitUdp

```asm
// === 08470628 CHadesServerProxy::InitUdp  [0x08470628-0x8470681] ===
 8470628:	55                   	push   %ebp
 8470629:	89 e5                	mov    %esp,%ebp
 847062b:	83 ec 28             	sub    $0x28,%esp
 847062e:	8b 45 08             	mov    0x8(%ebp),%eax
 8470631:	05 10 0e 03 00       	add    $0x30e10,%eax
 8470636:	89 04 24             	mov    %eax,(%esp)
 8470639:	e8 5c 30 01 00       	call   848369a <_ZN11CUdpHandler16InitClientSocketEv>
 847063e:	83 f8 ff             	cmp    $0xffffffff,%eax
 8470641:	0f 94 c0             	sete   %al
 8470644:	84 c0                	test   %al,%al
 8470646:	74 33                	je     847067b <_ZN17CHadesServerProxy7InitUdpEv+0x53>
 8470648:	c7 44 24 10 6c 92 c6 	movl   $0x8c6926c,0x10(%esp)
 847064f:	08 
 8470650:	c7 44 24 0c d5 00 00 	movl   $0xd5,0xc(%esp)
 8470657:	00 
 8470658:	c7 44 24 08 80 9f c6 	movl   $0x8c69f80,0x8(%esp)
 847065f:	08 
 8470660:	c7 44 24 04 a3 92 c6 	movl   $0x8c692a3,0x4(%esp)
 8470667:	08 
 8470668:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 847066f:	e8 96 35 66 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8470674:	b8 00 00 00 00       	mov    $0x0,%eax
 8470679:	eb 05                	jmp    8470680 <_ZN17CHadesServerProxy7InitUdpEv+0x58>
 847067b:	b8 01 00 00 00       	mov    $0x1,%eax
 8470680:	c9                   	leave
 8470681:	c3                   	ret

```

```c
// CHadesServerProxy::InitUdp @ 0x8470628

/* CHadesServerProxy::InitUdp() */

bool __thiscall CHadesServerProxy::InitUdp(CHadesServerProxy *this)

{
  int iVar1;
  
  iVar1 = CUdpHandler::InitClientSocket((CUdpHandler *)(this + 0x30e10));
  if (iVar1 == -1) {
    LogManager::logFormat
              (1,"DF_HadesServerProxy.cpp","bool CHadesServerProxy::InitUdp()",0xd5,
               "[CHadesServerProxy::Init] Can\'t init udp client socket");
  }
  return iVar1 != -1;
}

```

---

## IsConnect

```asm
// === 084705fe CHadesServerProxy::IsConnect  [0x084705fe-0x8470627] ===
 84705fe:	55                   	push   %ebp
 84705ff:	89 e5                	mov    %esp,%ebp
 8470601:	83 ec 18             	sub    $0x18,%esp
 8470604:	8b 45 08             	mov    0x8(%ebp),%eax
 8470607:	89 04 24             	mov    %eax,(%esp)
 847060a:	e8 1d 03 00 00       	call   847092c <_ZN15BaseServerProxy14GetSocketStateEv>
 847060f:	83 f8 02             	cmp    $0x2,%eax
 8470612:	0f 94 c0             	sete   %al
 8470615:	84 c0                	test   %al,%al
 8470617:	74 07                	je     8470620 <_ZN17CHadesServerProxy9IsConnectEv+0x22>
 8470619:	b8 01 00 00 00       	mov    $0x1,%eax
 847061e:	eb 05                	jmp    8470625 <_ZN17CHadesServerProxy9IsConnectEv+0x27>
 8470620:	b8 00 00 00 00       	mov    $0x0,%eax
 8470625:	c9                   	leave
 8470626:	c3                   	ret
 8470627:	90                   	nop

```

```c
// CHadesServerProxy::IsConnect @ 0x84705fe

/* CHadesServerProxy::IsConnect() */

bool __thiscall CHadesServerProxy::IsConnect(CHadesServerProxy *this)

{
  int iVar1;
  
  iVar1 = BaseServerProxy::GetSocketState((BaseServerProxy *)this);
  return iVar1 == 2;
}

```

---

## OnDisconnect

```asm
// === 084707b6 CHadesServerProxy::OnDisconnect  [0x084707b6-0x84707c9] ===
 84707b6:	55                   	push   %ebp
 84707b7:	89 e5                	mov    %esp,%ebp
 84707b9:	83 ec 18             	sub    $0x18,%esp
 84707bc:	8b 45 08             	mov    0x8(%ebp),%eax
 84707bf:	89 04 24             	mov    %eax,(%esp)
 84707c2:	e8 03 00 00 00       	call   84707ca <_ZN17CHadesServerProxy12RunConnTimerEv>
 84707c7:	c9                   	leave
 84707c8:	c3                   	ret
 84707c9:	90                   	nop

```

```c
// CHadesServerProxy::OnDisconnect @ 0x84707b6

/* CHadesServerProxy::OnDisconnect() */

void CHadesServerProxy::OnDisconnect(void)

{
  RunConnTimer();
  return;
}

```

---

## Parsing

```asm
// === 08470794 CHadesServerProxy::Parsing  [0x08470794-0x84707b5] ===
 8470794:	55                   	push   %ebp
 8470795:	89 e5                	mov    %esp,%ebp
 8470797:	83 ec 18             	sub    $0x18,%esp
 847079a:	8b 45 08             	mov    0x8(%ebp),%eax
 847079d:	89 04 24             	mov    %eax,(%esp)
 84707a0:	e8 31 77 e8 ff       	call   82f7ed6 <_ZN15BaseServerProxy13GetTcpHandlerEv>
 84707a5:	8b 55 0c             	mov    0xc(%ebp),%edx
 84707a8:	89 54 24 04          	mov    %edx,0x4(%esp)
 84707ac:	89 04 24             	mov    %eax,(%esp)
 84707af:	e8 9c c8 ff ff       	call   846d050 <_ZN8CNetworkILi100000ELi100000EE20Parsing_ServerPacketEi>
 84707b4:	c9                   	leave
 84707b5:	c3                   	ret

```

```c
// CHadesServerProxy::Parsing @ 0x8470794

/* CHadesServerProxy::Parsing(int) */

void __thiscall CHadesServerProxy::Parsing(CHadesServerProxy *this,int param_1)

{
  CNetwork<100000,100000> *this_00;
  
  this_00 = (CNetwork<100000,100000> *)BaseServerProxy::GetTcpHandler((BaseServerProxy *)this);
  CNetwork<100000,100000>::Parsing_ServerPacket(this_00,param_1);
  return;
}

```

---

## RunConnTimer

```asm
// === 084707ca CHadesServerProxy::RunConnTimer  [0x084707ca-0x8470886] ===
 84707ca:	55                   	push   %ebp
 84707cb:	89 e5                	mov    %esp,%ebp
 84707cd:	56                   	push   %esi
 84707ce:	53                   	push   %ebx
 84707cf:	83 ec 20             	sub    $0x20,%esp
 84707d2:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 84707d7:	c7 44 24 08 19 01 00 	movl   $0x119,0x8(%esp)
 84707de:	00 
 84707df:	c7 44 24 04 a3 92 c6 	movl   $0x8c692a3,0x4(%esp)
 84707e6:	08 
 84707e7:	89 04 24             	mov    %eax,(%esp)
 84707ea:	e8 97 f2 e1 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 84707ef:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84707f6:	00 
 84707f7:	89 44 24 04          	mov    %eax,0x4(%esp)
 84707fb:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84707fe:	89 04 24             	mov    %eax,(%esp)
 8470801:	e8 20 84 c5 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8470806:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8470809:	89 04 24             	mov    %eax,(%esp)
 847080c:	e8 35 84 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8470811:	c7 44 24 04 3a 02 00 	movl   $0x23a,0x4(%esp)
 8470818:	00 
 8470819:	89 04 24             	mov    %eax,(%esp)
 847081c:	e8 35 84 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8470821:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8470824:	89 04 24             	mov    %eax,(%esp)
 8470827:	e8 1a 84 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847082c:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8470833:	ff 
 8470834:	89 04 24             	mov    %eax,(%esp)
 8470837:	e8 1a 84 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847083c:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8470841:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8470844:	89 54 24 08          	mov    %edx,0x8(%esp)
 8470848:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847084f:	00 
 8470850:	89 04 24             	mov    %eax,(%esp)
 8470853:	e8 86 07 10 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8470858:	eb 1b                	jmp    8470875 <_ZN17CHadesServerProxy12RunConnTimerEv+0xab>
 847085a:	89 d3                	mov    %edx,%ebx
 847085c:	89 c6                	mov    %eax,%esi
 847085e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8470861:	89 04 24             	mov    %eax,(%esp)
 8470864:	e8 69 c0 1a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8470869:	89 f0                	mov    %esi,%eax
 847086b:	89 da                	mov    %ebx,%edx
 847086d:	89 04 24             	mov    %eax,(%esp)
 8470870:	e8 db 2e 67 00       	call   8ae3750 <_Unwind_Resume>
 8470875:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8470878:	89 04 24             	mov    %eax,(%esp)
 847087b:	e8 52 c0 1a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8470880:	83 c4 20             	add    $0x20,%esp
 8470883:	5b                   	pop    %ebx
 8470884:	5e                   	pop    %esi
 8470885:	5d                   	pop    %ebp
 8470886:	c3                   	ret

```

```c
// CHadesServerProxy::RunConnTimer @ 0x84707ca

/* CHadesServerProxy::RunConnTimer() */

void CHadesServerProxy::RunConnTimer(void)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DF_HadesServerProxy.cpp",0x119);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0847081c to 08470857 has its CatchHandler @ 0847085a */
  CStreamGuard::operator<<(pCVar2,0x23a);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

---

## SendHadesTcpPacket

```asm
// === 08470752 CHadesServerProxy::SendHadesTcpPacket  [0x08470752-0x8470793] ===
 8470752:	55                   	push   %ebp
 8470753:	89 e5                	mov    %esp,%ebp
 8470755:	83 ec 18             	sub    $0x18,%esp
 8470758:	8b 45 08             	mov    0x8(%ebp),%eax
 847075b:	89 04 24             	mov    %eax,(%esp)
 847075e:	e8 c9 01 00 00       	call   847092c <_ZN15BaseServerProxy14GetSocketStateEv>
 8470763:	83 f8 02             	cmp    $0x2,%eax
 8470766:	0f 94 c0             	sete   %al
 8470769:	84 c0                	test   %al,%al
 847076b:	74 20                	je     847078d <_ZN17CHadesServerProxy18SendHadesTcpPacketEPc+0x3b>
 847076d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8470770:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8470774:	0f b7 d0             	movzwl %ax,%edx
 8470777:	8b 45 08             	mov    0x8(%ebp),%eax
 847077a:	89 54 24 08          	mov    %edx,0x8(%esp)
 847077e:	8b 55 0c             	mov    0xc(%ebp),%edx
 8470781:	89 54 24 04          	mov    %edx,0x4(%esp)
 8470785:	89 04 24             	mov    %eax,(%esp)
 8470788:	e8 a3 d0 e8 ff       	call   82fd830 <_ZN15BaseServerProxy13SendTcpPacketEPci>
 847078d:	b8 01 00 00 00       	mov    $0x1,%eax
 8470792:	c9                   	leave
 8470793:	c3                   	ret

```

```c
// CHadesServerProxy::SendHadesTcpPacket @ 0x8470752

/* CHadesServerProxy::SendHadesTcpPacket(char*) */

undefined4 __thiscall CHadesServerProxy::SendHadesTcpPacket(CHadesServerProxy *this,char *param_1)

{
  int iVar1;
  
  iVar1 = BaseServerProxy::GetSocketState((BaseServerProxy *)this);
  if (iVar1 == 2) {
    BaseServerProxy::SendTcpPacket((BaseServerProxy *)this,param_1,(uint)*(ushort *)(param_1 + 2));
  }
  return 1;
}

```

---

## SendHadesUdpPacket

```asm
// === 084706be CHadesServerProxy::SendHadesUdpPacket  [0x084706be-0x8470751] ===
 84706be:	55                   	push   %ebp
 84706bf:	89 e5                	mov    %esp,%ebp
 84706c1:	56                   	push   %esi
 84706c2:	53                   	push   %ebx
 84706c3:	83 ec 30             	sub    $0x30,%esp
 84706c6:	8b 55 08             	mov    0x8(%ebp),%edx
 84706c9:	8d 45 f4             	lea    -0xc(%ebp),%eax
 84706cc:	89 54 24 04          	mov    %edx,0x4(%esp)
 84706d0:	89 04 24             	mov    %eax,(%esp)
 84706d3:	e8 62 02 00 00       	call   847093a <_ZN15BaseServerProxy11GetServerIPEv>
 84706d8:	83 ec 04             	sub    $0x4,%esp
 84706db:	8d 45 f4             	lea    -0xc(%ebp),%eax
 84706de:	89 04 24             	mov    %eax,(%esp)
 84706e1:	e8 0a 5e 29 00       	call   87064f0 <_ZNKSs5c_strEv>
 84706e6:	8b 55 08             	mov    0x8(%ebp),%edx
 84706e9:	8b 92 0c 0e 03 00    	mov    0x30e0c(%edx),%edx
 84706ef:	0f b7 ca             	movzwl %dx,%ecx
 84706f2:	8b 55 0c             	mov    0xc(%ebp),%edx
 84706f5:	0f b7 52 02          	movzwl 0x2(%edx),%edx
 84706f9:	0f b7 d2             	movzwl %dx,%edx
 84706fc:	8b 5d 08             	mov    0x8(%ebp),%ebx
 84706ff:	81 c3 10 0e 03 00    	add    $0x30e10,%ebx
 8470705:	89 44 24 10          	mov    %eax,0x10(%esp)
 8470709:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 847070d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8470711:	8b 45 0c             	mov    0xc(%ebp),%eax
 8470714:	89 44 24 04          	mov    %eax,0x4(%esp)
 8470718:	89 1c 24             	mov    %ebx,(%esp)
 847071b:	e8 48 34 01 00       	call   8483b68 <_ZNK11CUdpHandler12SendToServerEPcitPKc>
 8470720:	eb 1b                	jmp    847073d <_ZN17CHadesServerProxy18SendHadesUdpPacketEPc+0x7f>
 8470722:	89 d3                	mov    %edx,%ebx
 8470724:	89 c6                	mov    %eax,%esi
 8470726:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8470729:	89 04 24             	mov    %eax,(%esp)
 847072c:	e8 af 74 29 00       	call   8707be0 <_ZNSsD1Ev>
 8470731:	89 f0                	mov    %esi,%eax
 8470733:	89 da                	mov    %ebx,%edx
 8470735:	89 04 24             	mov    %eax,(%esp)
 8470738:	e8 13 30 67 00       	call   8ae3750 <_Unwind_Resume>
 847073d:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8470740:	89 04 24             	mov    %eax,(%esp)
 8470743:	e8 98 74 29 00       	call   8707be0 <_ZNSsD1Ev>
 8470748:	8d 65 f8             	lea    -0x8(%ebp),%esp
 847074b:	83 c4 00             	add    $0x0,%esp
 847074e:	5b                   	pop    %ebx
 847074f:	5e                   	pop    %esi
 8470750:	5d                   	pop    %ebp
 8470751:	c3                   	ret

```

```c
// CHadesServerProxy::SendHadesUdpPacket @ 0x84706be

/* CHadesServerProxy::SendHadesUdpPacket(char*) */

void __thiscall CHadesServerProxy::SendHadesUdpPacket(CHadesServerProxy *this,char *param_1)

{
  char *pcVar1;
  string local_10 [4];
  
  BaseServerProxy::GetServerIP();
                    /* try { // try from 084706e1 to 0847071f has its CatchHandler @ 08470722 */
  pcVar1 = (char *)std::string::c_str(local_10);
  CUdpHandler::SendToServer
            ((CUdpHandler *)(this + 0x30e10),param_1,(uint)*(ushort *)(param_1 + 2),
             (ushort)*(undefined4 *)(this + 0x30e0c),pcVar1);
  std::string::~string(local_10);
  return;
}

```

---

## SendHeartBeatPacket

```asm
// === 08470682 CHadesServerProxy::SendHeartBeatPacket  [0x08470682-0x84706bd] ===
 8470682:	55                   	push   %ebp
 8470683:	89 e5                	mov    %esp,%ebp
 8470685:	83 ec 38             	sub    $0x38,%esp
 8470688:	8b 45 0c             	mov    0xc(%ebp),%eax
 847068b:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 847068f:	8d 45 ea             	lea    -0x16(%ebp),%eax
 8470692:	89 04 24             	mov    %eax,(%esp)
 8470695:	e8 4a 02 00 00       	call   84708e4 <_ZN26Packet_Hades_Udp_HeartBeatC1Ev>
 847069a:	8b 45 10             	mov    0x10(%ebp),%eax
 847069d:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
 84706a1:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
 84706a5:	66 89 45 f4          	mov    %ax,-0xc(%ebp)
 84706a9:	8d 45 ea             	lea    -0x16(%ebp),%eax
 84706ac:	89 44 24 04          	mov    %eax,0x4(%esp)
 84706b0:	8b 45 08             	mov    0x8(%ebp),%eax
 84706b3:	89 04 24             	mov    %eax,(%esp)
 84706b6:	e8 03 00 00 00       	call   84706be <_ZN17CHadesServerProxy18SendHadesUdpPacketEPc>
 84706bb:	c9                   	leave
 84706bc:	c3                   	ret
 84706bd:	90                   	nop

```

```c
// CHadesServerProxy::SendHeartBeatPacket @ 0x8470682

/* CHadesServerProxy::SendHeartBeatPacket(unsigned short, int) */

void __thiscall
CHadesServerProxy::SendHeartBeatPacket(CHadesServerProxy *this,ushort param_1,int param_2)

{
  Packet_Hades_Udp_HeartBeat local_1a [10];
  ushort local_10;
  undefined2 local_e;
  
  Packet_Hades_Udp_HeartBeat::Packet_Hades_Udp_HeartBeat(local_1a);
  local_e = (undefined2)param_2;
  local_10 = param_1;
  SendHadesUdpPacket(this,(char *)local_1a);
  return;
}

```

