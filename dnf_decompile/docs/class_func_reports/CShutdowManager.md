# CShutdowManager

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## OnAllUserLogout

```asm
// === 082a36bc CShutdowManager::OnAllUserLogout  [0x082a36bc-0x82a37c7] ===
 82a36bc:	55                   	push   %ebp
 82a36bd:	89 e5                	mov    %esp,%ebp
 82a36bf:	56                   	push   %esi
 82a36c0:	53                   	push   %ebx
 82a36c1:	83 ec 30             	sub    $0x30,%esp
 82a36c4:	8b 45 08             	mov    0x8(%ebp),%eax
 82a36c7:	0f b6 00             	movzbl (%eax),%eax
 82a36ca:	83 f0 01             	xor    $0x1,%eax
 82a36cd:	84 c0                	test   %al,%al
 82a36cf:	0f 85 eb 00 00 00    	jne    82a37c0 <_ZN15CShutdowManager15OnAllUserLogoutEv+0x104>
 82a36d5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82a36dc:	00 
 82a36dd:	c7 44 24 08 3b 32 00 	movl   $0x323b,0x8(%esp)
 82a36e4:	00 
 82a36e5:	c7 44 24 04 e0 9d c1 	movl   $0x8c19de0,0x4(%esp)
 82a36ec:	08 
 82a36ed:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82a36f0:	89 04 24             	mov    %eax,(%esp)
 82a36f3:	e8 20 c0 2a 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82a36f8:	c7 44 24 04 1e 8d c1 	movl   $0x8c18d1e,0x4(%esp)
 82a36ff:	08 
 82a3700:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82a3703:	89 04 24             	mov    %eax,(%esp)
 82a3706:	e8 7d c0 2a 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82a370b:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 82a3710:	c7 44 24 08 3d 32 00 	movl   $0x323d,0x8(%esp)
 82a3717:	00 
 82a3718:	c7 44 24 04 88 62 c1 	movl   $0x8c16288,0x4(%esp)
 82a371f:	08 
 82a3720:	89 04 24             	mov    %eax,(%esp)
 82a3723:	e8 5e c3 fe ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 82a3728:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 82a372f:	00 
 82a3730:	89 44 24 04          	mov    %eax,0x4(%esp)
 82a3734:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82a3737:	89 04 24             	mov    %eax,(%esp)
 82a373a:	e8 e7 54 e2 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 82a373f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82a3742:	89 04 24             	mov    %eax,(%esp)
 82a3745:	e8 fc 54 e2 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 82a374a:	c7 44 24 04 3f 00 00 	movl   $0x3f,0x4(%esp)
 82a3751:	00 
 82a3752:	89 04 24             	mov    %eax,(%esp)
 82a3755:	e8 fc 54 e2 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 82a375a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82a375d:	89 04 24             	mov    %eax,(%esp)
 82a3760:	e8 e1 54 e2 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 82a3765:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 82a376c:	ff 
 82a376d:	89 04 24             	mov    %eax,(%esp)
 82a3770:	e8 e1 54 e2 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 82a3775:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 82a377a:	8d 55 e0             	lea    -0x20(%ebp),%edx
 82a377d:	89 54 24 08          	mov    %edx,0x8(%esp)
 82a3781:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 82a3788:	00 
 82a3789:	89 04 24             	mov    %eax,(%esp)
 82a378c:	e8 4d d8 2c 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 82a3791:	c6 05 64 bd 40 09 01 	movb   $0x1,0x940bd64
 82a3798:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82a379b:	89 04 24             	mov    %eax,(%esp)
 82a379e:	e8 2f 91 37 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 82a37a3:	eb 1c                	jmp    82a37c1 <_ZN15CShutdowManager15OnAllUserLogoutEv+0x105>
 82a37a5:	89 d3                	mov    %edx,%ebx
 82a37a7:	89 c6                	mov    %eax,%esi
 82a37a9:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82a37ac:	89 04 24             	mov    %eax,(%esp)
 82a37af:	e8 1e 91 37 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 82a37b4:	89 f0                	mov    %esi,%eax
 82a37b6:	89 da                	mov    %ebx,%edx
 82a37b8:	89 04 24             	mov    %eax,(%esp)
 82a37bb:	e8 90 ff 83 00       	call   8ae3750 <_Unwind_Resume>
 82a37c0:	90                   	nop
 82a37c1:	83 c4 30             	add    $0x30,%esp
 82a37c4:	5b                   	pop    %ebx
 82a37c5:	5e                   	pop    %esi
 82a37c6:	5d                   	pop    %ebp
 82a37c7:	c3                   	ret

```

```c
// CShutdowManager::OnAllUserLogout @ 0x82a36bc

/* CShutdowManager::OnAllUserLogout() */

void __thiscall CShutdowManager::OnAllUserLogout(CShutdowManager *this)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_24 [8];
  cMyTrace local_1c [16];
  
  if (*this == (CShutdowManager)0x1) {
    cMyTrace::cMyTrace(local_1c,"void CShutdowManager::OnAllUserLogout()",0x323b,0);
    cMyTrace::operator()(local_1c,"ALL USER LOGOUT COMPLETE\n");
    pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"App.cpp",0x323d);
    CStreamGuard::CStreamGuard(local_24,pSVar1,true);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_24);
                    /* try { // try from 082a3755 to 082a3790 has its CatchHandler @ 082a37a5 */
    CStreamGuard::operator<<(pCVar2,0x3f);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_24);
    CStreamGuard::operator<<(pCVar2,-1);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_24);
    GlobalData::s_server_stop = 1;
    CStreamGuard::~CStreamGuard(local_24);
  }
  return;
}

```

---

## SendLastMsgDBQueue

```asm
// === 082a37c8 CShutdowManager::SendLastMsgDBQueue  [0x082a37c8-0x82a396d] ===
 82a37c8:	55                   	push   %ebp
 82a37c9:	89 e5                	mov    %esp,%ebp
 82a37cb:	56                   	push   %esi
 82a37cc:	53                   	push   %ebx
 82a37cd:	83 ec 20             	sub    $0x20,%esp
 82a37d0:	8b 45 08             	mov    0x8(%ebp),%eax
 82a37d3:	0f b6 00             	movzbl (%eax),%eax
 82a37d6:	83 f0 01             	xor    $0x1,%eax
 82a37d9:	84 c0                	test   %al,%al
 82a37db:	74 0a                	je     82a37e7 <_ZN15CShutdowManager18SendLastMsgDBQueueEP5CUser+0x1f>
 82a37dd:	b8 01 00 00 00       	mov    $0x1,%eax
 82a37e2:	e9 7f 01 00 00       	jmp    82a3966 <_ZN15CShutdowManager18SendLastMsgDBQueueEP5CUser+0x19e>
 82a37e7:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 82a37ec:	c7 44 24 08 4c 32 00 	movl   $0x324c,0x8(%esp)
 82a37f3:	00 
 82a37f4:	c7 44 24 04 88 62 c1 	movl   $0x8c16288,0x4(%esp)
 82a37fb:	08 
 82a37fc:	89 04 24             	mov    %eax,(%esp)
 82a37ff:	e8 82 c2 fe ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 82a3804:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 82a380b:	00 
 82a380c:	89 44 24 04          	mov    %eax,0x4(%esp)
 82a3810:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82a3813:	89 04 24             	mov    %eax,(%esp)
 82a3816:	e8 0b 54 e2 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 82a381b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82a381e:	89 04 24             	mov    %eax,(%esp)
 82a3821:	e8 20 54 e2 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 82a3826:	c7 44 24 04 95 00 00 	movl   $0x95,0x4(%esp)
 82a382d:	00 
 82a382e:	89 04 24             	mov    %eax,(%esp)
 82a3831:	e8 20 54 e2 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 82a3836:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82a3839:	89 04 24             	mov    %eax,(%esp)
 82a383c:	e8 05 54 e2 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 82a3841:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 82a3848:	ff 
 82a3849:	89 04 24             	mov    %eax,(%esp)
 82a384c:	e8 05 54 e2 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 82a3851:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 82a3856:	8d 55 f0             	lea    -0x10(%ebp),%edx
 82a3859:	89 54 24 08          	mov    %edx,0x8(%esp)
 82a385d:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 82a3864:	00 
 82a3865:	89 04 24             	mov    %eax,(%esp)
 82a3868:	e8 71 d7 2c 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 82a386d:	eb 1b                	jmp    82a388a <_ZN15CShutdowManager18SendLastMsgDBQueueEP5CUser+0xc2>
 82a386f:	89 d3                	mov    %edx,%ebx
 82a3871:	89 c6                	mov    %eax,%esi
 82a3873:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82a3876:	89 04 24             	mov    %eax,(%esp)
 82a3879:	e8 54 90 37 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 82a387e:	89 f0                	mov    %esi,%eax
 82a3880:	89 da                	mov    %ebx,%edx
 82a3882:	89 04 24             	mov    %eax,(%esp)
 82a3885:	e8 c6 fe 83 00       	call   8ae3750 <_Unwind_Resume>
 82a388a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82a388d:	89 04 24             	mov    %eax,(%esp)
 82a3890:	e8 3d 90 37 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 82a3895:	8b 45 08             	mov    0x8(%ebp),%eax
 82a3898:	8b 40 04             	mov    0x4(%eax),%eax
 82a389b:	8d 50 01             	lea    0x1(%eax),%edx
 82a389e:	8b 45 08             	mov    0x8(%ebp),%eax
 82a38a1:	89 50 04             	mov    %edx,0x4(%eax)
 82a38a4:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 82a38a9:	c7 44 24 08 57 32 00 	movl   $0x3257,0x8(%esp)
 82a38b0:	00 
 82a38b1:	c7 44 24 04 88 62 c1 	movl   $0x8c16288,0x4(%esp)
 82a38b8:	08 
 82a38b9:	89 04 24             	mov    %eax,(%esp)
 82a38bc:	e8 c5 c1 fe ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 82a38c1:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 82a38c8:	00 
 82a38c9:	89 44 24 04          	mov    %eax,0x4(%esp)
 82a38cd:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82a38d0:	89 04 24             	mov    %eax,(%esp)
 82a38d3:	e8 4e 53 e2 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 82a38d8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82a38db:	89 04 24             	mov    %eax,(%esp)
 82a38de:	e8 63 53 e2 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 82a38e3:	c7 44 24 04 96 00 00 	movl   $0x96,0x4(%esp)
 82a38ea:	00 
 82a38eb:	89 04 24             	mov    %eax,(%esp)
 82a38ee:	e8 63 53 e2 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 82a38f3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82a38f6:	89 04 24             	mov    %eax,(%esp)
 82a38f9:	e8 48 53 e2 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 82a38fe:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 82a3905:	ff 
 82a3906:	89 04 24             	mov    %eax,(%esp)
 82a3909:	e8 48 53 e2 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 82a390e:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 82a3913:	8d 55 e8             	lea    -0x18(%ebp),%edx
 82a3916:	89 54 24 08          	mov    %edx,0x8(%esp)
 82a391a:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 82a3921:	00 
 82a3922:	89 04 24             	mov    %eax,(%esp)
 82a3925:	e8 b4 d6 2c 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 82a392a:	eb 1b                	jmp    82a3947 <_ZN15CShutdowManager18SendLastMsgDBQueueEP5CUser+0x17f>
 82a392c:	89 d3                	mov    %edx,%ebx
 82a392e:	89 c6                	mov    %eax,%esi
 82a3930:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82a3933:	89 04 24             	mov    %eax,(%esp)
 82a3936:	e8 97 8f 37 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 82a393b:	89 f0                	mov    %esi,%eax
 82a393d:	89 da                	mov    %ebx,%edx
 82a393f:	89 04 24             	mov    %eax,(%esp)
 82a3942:	e8 09 fe 83 00       	call   8ae3750 <_Unwind_Resume>
 82a3947:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82a394a:	89 04 24             	mov    %eax,(%esp)
 82a394d:	e8 80 8f 37 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 82a3952:	8b 45 08             	mov    0x8(%ebp),%eax
 82a3955:	8b 40 04             	mov    0x4(%eax),%eax
 82a3958:	8d 50 01             	lea    0x1(%eax),%edx
 82a395b:	8b 45 08             	mov    0x8(%ebp),%eax
 82a395e:	89 50 04             	mov    %edx,0x4(%eax)
 82a3961:	b8 01 00 00 00       	mov    $0x1,%eax
 82a3966:	83 c4 20             	add    $0x20,%esp
 82a3969:	5b                   	pop    %ebx
 82a396a:	5e                   	pop    %esi
 82a396b:	5d                   	pop    %ebp
 82a396c:	c3                   	ret
 82a396d:	90                   	nop

```

```c
// CShutdowManager::SendLastMsgDBQueue @ 0x82a37c8

/* CShutdowManager::SendLastMsgDBQueue(CUser*) */

undefined4 CShutdowManager::SendLastMsgDBQueue(CUser *param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_1c [8];
  CStreamGuard local_14 [8];
  
  if (*param_1 == (CUser)0x1) {
    pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"App.cpp",0x324c);
    CStreamGuard::CStreamGuard(local_14,pSVar1,true);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 082a3831 to 082a386c has its CatchHandler @ 082a386f */
    CStreamGuard::operator<<(pCVar2,0x95);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
    CStreamGuard::operator<<(pCVar2,-1);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
    CStreamGuard::~CStreamGuard(local_14);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"App.cpp",0x3257);
    CStreamGuard::CStreamGuard(local_1c,pSVar1,true);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 082a38ee to 082a3929 has its CatchHandler @ 082a392c */
    CStreamGuard::operator<<(pCVar2,0x96);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
    CStreamGuard::operator<<(pCVar2,-1);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_1c);
    CStreamGuard::~CStreamGuard(local_1c);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  return 1;
}

```

---

## SendShutdownSignal

```asm
// === 082a35a6 CShutdowManager::SendShutdownSignal  [0x082a35a6-0x82a36bb] ===
 82a35a6:	55                   	push   %ebp
 82a35a7:	89 e5                	mov    %esp,%ebp
 82a35a9:	83 ec 48             	sub    $0x48,%esp
 82a35ac:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 82a35b3:	00 
 82a35b4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82a35bb:	00 
 82a35bc:	8d 45 ce             	lea    -0x32(%ebp),%eax
 82a35bf:	89 04 24             	mov    %eax,(%esp)
 82a35c2:	e8 f9 a6 dd ff       	call   807dcc0 <memset@plt>
 82a35c7:	e8 b5 8b e2 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 82a35cc:	89 04 24             	mov    %eax,(%esp)
 82a35cf:	e8 c6 6d e3 ff       	call   80da39a <_ZN12CEnvironment13get_file_nameEv>
 82a35d4:	89 44 24 08          	mov    %eax,0x8(%esp)
 82a35d8:	c7 44 24 04 77 81 c1 	movl   $0x8c18177,0x4(%esp)
 82a35df:	08 
 82a35e0:	8d 45 ce             	lea    -0x32(%ebp),%eax
 82a35e3:	89 04 24             	mov    %eax,(%esp)
 82a35e6:	e8 55 ae dd ff       	call   807e440 <sprintf@plt>
 82a35eb:	c7 44 24 04 82 81 c1 	movl   $0x8c18182,0x4(%esp)
 82a35f2:	08 
 82a35f3:	8d 45 ce             	lea    -0x32(%ebp),%eax
 82a35f6:	89 04 24             	mov    %eax,(%esp)
 82a35f9:	e8 72 b1 dd ff       	call   807e770 <fopen@plt>
 82a35fe:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82a3601:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 82a3605:	75 18                	jne    82a361f <_ZN15CShutdowManager18SendShutdownSignalEv+0x79>
 82a3607:	8d 45 ce             	lea    -0x32(%ebp),%eax
 82a360a:	89 44 24 04          	mov    %eax,0x4(%esp)
 82a360e:	c7 04 24 84 81 c1 08 	movl   $0x8c18184,(%esp)
 82a3615:	e8 46 a5 dd ff       	call   807db60 <printf@plt>
 82a361a:	e9 9b 00 00 00       	jmp    82a36ba <_ZN15CShutdowManager18SendShutdownSignalEv+0x114>
 82a361f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82a3622:	89 44 24 08          	mov    %eax,0x8(%esp)
 82a3626:	c7 44 24 04 5e 7e c1 	movl   $0x8c17e5e,0x4(%esp)
 82a362d:	08 
 82a362e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82a3631:	89 04 24             	mov    %eax,(%esp)
 82a3634:	e8 b7 b2 dd ff       	call   807e8f0 <fscanf@plt>
 82a3639:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82a363c:	85 c0                	test   %eax,%eax
 82a363e:	7f 20                	jg     82a3660 <_ZN15CShutdowManager18SendShutdownSignalEv+0xba>
 82a3640:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82a3643:	89 04 24             	mov    %eax,(%esp)
 82a3646:	e8 55 a8 dd ff       	call   807dea0 <fclose@plt>
 82a364b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82a364e:	89 44 24 04          	mov    %eax,0x4(%esp)
 82a3652:	c7 04 24 a2 81 c1 08 	movl   $0x8c181a2,(%esp)
 82a3659:	e8 02 a5 dd ff       	call   807db60 <printf@plt>
 82a365e:	eb 5a                	jmp    82a36ba <_ZN15CShutdowManager18SendShutdownSignalEv+0x114>
 82a3660:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82a3663:	c7 44 24 04 0c 00 00 	movl   $0xc,0x4(%esp)
 82a366a:	00 
 82a366b:	89 04 24             	mov    %eax,(%esp)
 82a366e:	e8 0d ad dd ff       	call   807e380 <kill@plt>
 82a3673:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82a3676:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 82a367a:	79 20                	jns    82a369c <_ZN15CShutdowManager18SendShutdownSignalEv+0xf6>
 82a367c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82a367f:	89 04 24             	mov    %eax,(%esp)
 82a3682:	e8 19 a8 dd ff       	call   807dea0 <fclose@plt>
 82a3687:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82a368a:	89 44 24 04          	mov    %eax,0x4(%esp)
 82a368e:	c7 04 24 bc 81 c1 08 	movl   $0x8c181bc,(%esp)
 82a3695:	e8 c6 a4 dd ff       	call   807db60 <printf@plt>
 82a369a:	eb 1e                	jmp    82a36ba <_ZN15CShutdowManager18SendShutdownSignalEv+0x114>
 82a369c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82a369f:	89 44 24 04          	mov    %eax,0x4(%esp)
 82a36a3:	c7 04 24 02 8d c1 08 	movl   $0x8c18d02,(%esp)
 82a36aa:	e8 b1 a4 dd ff       	call   807db60 <printf@plt>
 82a36af:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82a36b2:	89 04 24             	mov    %eax,(%esp)
 82a36b5:	e8 e6 a7 dd ff       	call   807dea0 <fclose@plt>
 82a36ba:	c9                   	leave
 82a36bb:	c3                   	ret

```

```c
// CShutdowManager::SendShutdownSignal @ 0x82a35a6

/* CShutdowManager::SendShutdownSignal() */

void CShutdowManager::SendShutdownSignal(void)

{
  CEnvironment *this;
  undefined4 uVar1;
  char local_36 [30];
  int local_18;
  int local_14;
  FILE *local_10;
  
  memset(local_36,0,0x1e);
  this = (CEnvironment *)G_CEnvironment();
  uVar1 = CEnvironment::get_file_name(this);
  sprintf(local_36,"pid/%s.pid",uVar1);
  local_10 = fopen(local_36,"r");
  if (local_10 == (FILE *)0x0) {
    printf(&DAT_08c18184,local_36);
  }
  else {
    fscanf(local_10,"%d",&local_18);
    if (local_18 < 1) {
      fclose(local_10);
      printf(&DAT_08c181a2,local_18);
    }
    else {
      local_14 = kill(local_18,0xc);
      if (local_14 < 0) {
        fclose(local_10);
        printf(&DAT_08c181bc,local_18);
      }
      else {
        printf("SEND SHUTDOWN SIGNAL TO %d\n",local_18);
        fclose(local_10);
      }
    }
  }
  return;
}

```

---

## WaitUntilExitThread

```asm
// === 082a396e CShutdowManager::WaitUntilExitThread  [0x082a396e-0x82a3a59] ===
 82a396e:	55                   	push   %ebp
 82a396f:	89 e5                	mov    %esp,%ebp
 82a3971:	83 ec 18             	sub    $0x18,%esp
 82a3974:	8b 45 08             	mov    0x8(%ebp),%eax
 82a3977:	0f b6 00             	movzbl (%eax),%eax
 82a397a:	0f b6 c0             	movzbl %al,%eax
 82a397d:	89 44 24 04          	mov    %eax,0x4(%esp)
 82a3981:	c7 04 24 38 8d c1 08 	movl   $0x8c18d38,(%esp)
 82a3988:	e8 d3 a1 dd ff       	call   807db60 <printf@plt>
 82a398d:	8b 45 08             	mov    0x8(%ebp),%eax
 82a3990:	0f b6 00             	movzbl (%eax),%eax
 82a3993:	83 f0 01             	xor    $0x1,%eax
 82a3996:	84 c0                	test   %al,%al
 82a3998:	74 0a                	je     82a39a4 <_ZN15CShutdowManager19WaitUntilExitThreadEv+0x36>
 82a399a:	b8 01 00 00 00       	mov    $0x1,%eax
 82a399f:	e9 b4 00 00 00       	jmp    82a3a58 <_ZN15CShutdowManager19WaitUntilExitThreadEv+0xea>
 82a39a4:	a1 b8 bd 40 09       	mov    0x940bdb8,%eax
 82a39a9:	89 04 24             	mov    %eax,(%esp)
 82a39ac:	e8 95 d2 38 00       	call   8630c46 <_ZN15ThreadInterface4joinEv>
 82a39b1:	c7 04 24 52 8d c1 08 	movl   $0x8c18d52,(%esp)
 82a39b8:	e8 b3 ab dd ff       	call   807e570 <puts@plt>
 82a39bd:	a1 c0 bd 40 09       	mov    0x940bdc0,%eax
 82a39c2:	89 04 24             	mov    %eax,(%esp)
 82a39c5:	e8 7c d2 38 00       	call   8630c46 <_ZN15ThreadInterface4joinEv>
 82a39ca:	c7 04 24 67 8d c1 08 	movl   $0x8c18d67,(%esp)
 82a39d1:	e8 9a ab dd ff       	call   807e570 <puts@plt>
 82a39d6:	a1 c8 bd 40 09       	mov    0x940bdc8,%eax
 82a39db:	89 04 24             	mov    %eax,(%esp)
 82a39de:	e8 63 d2 38 00       	call   8630c46 <_ZN15ThreadInterface4joinEv>
 82a39e3:	c7 04 24 77 8d c1 08 	movl   $0x8c18d77,(%esp)
 82a39ea:	e8 81 ab dd ff       	call   807e570 <puts@plt>
 82a39ef:	a1 b0 bd 40 09       	mov    0x940bdb0,%eax
 82a39f4:	89 04 24             	mov    %eax,(%esp)
 82a39f7:	e8 4a d2 38 00       	call   8630c46 <_ZN15ThreadInterface4joinEv>
 82a39fc:	c7 04 24 8f 8d c1 08 	movl   $0x8c18d8f,(%esp)
 82a3a03:	e8 68 ab dd ff       	call   807e570 <puts@plt>
 82a3a08:	a1 b4 bd 40 09       	mov    0x940bdb4,%eax
 82a3a0d:	89 04 24             	mov    %eax,(%esp)
 82a3a10:	e8 31 d2 38 00       	call   8630c46 <_ZN15ThreadInterface4joinEv>
 82a3a15:	c7 04 24 9e 8d c1 08 	movl   $0x8c18d9e,(%esp)
 82a3a1c:	e8 4f ab dd ff       	call   807e570 <puts@plt>
 82a3a21:	a1 c4 bd 40 09       	mov    0x940bdc4,%eax
 82a3a26:	89 04 24             	mov    %eax,(%esp)
 82a3a29:	e8 18 d2 38 00       	call   8630c46 <_ZN15ThreadInterface4joinEv>
 82a3a2e:	c7 04 24 b1 8d c1 08 	movl   $0x8c18db1,(%esp)
 82a3a35:	e8 36 ab dd ff       	call   807e570 <puts@plt>
 82a3a3a:	a1 bc bd 40 09       	mov    0x940bdbc,%eax
 82a3a3f:	89 04 24             	mov    %eax,(%esp)
 82a3a42:	e8 ff d1 38 00       	call   8630c46 <_ZN15ThreadInterface4joinEv>
 82a3a47:	c7 04 24 c4 8d c1 08 	movl   $0x8c18dc4,(%esp)
 82a3a4e:	e8 1d ab dd ff       	call   807e570 <puts@plt>
 82a3a53:	b8 01 00 00 00       	mov    $0x1,%eax
 82a3a58:	c9                   	leave
 82a3a59:	c3                   	ret

```

```c
// CShutdowManager::WaitUntilExitThread @ 0x82a396e

/* CShutdowManager::WaitUntilExitThread() */

undefined4 __thiscall CShutdowManager::WaitUntilExitThread(CShutdowManager *this)

{
  printf("WaitUntilExitThread (%d)\n",(uint)(byte)*this);
  if (*this == (CShutdowManager)0x1) {
    ThreadInterface::join(GlobalData::s_dispatch_thr);
    puts("dispatch thread join");
    ThreadInterface::join(GlobalData::s_udp_thr);
    puts("udp thread join");
    ThreadInterface::join(GlobalData::s_monitor_tcp_thr);
    puts("monitor tcp thread join");
    ThreadInterface::join(GlobalData::s_db_thr);
    puts("db thread join");
    ThreadInterface::join(GlobalData::s_db_thr_for_logDB);
    puts("log db thread join");
    ThreadInterface::join(GlobalData::s_accept_thr);
    puts("accept thread join");
    ThreadInterface::join(GlobalData::s_net_thr);
    puts("net thread join");
  }
  return 1;
}

```

