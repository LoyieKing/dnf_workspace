# CAppLoadChecker

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## CAppLoadChecker

```asm
// === 085ffc6a CAppLoadChecker::CAppLoadChecker  [0x085ffc6a-0x85ffcb1] ===
 85ffc6a:	55                   	push   %ebp
 85ffc6b:	89 e5                	mov    %esp,%ebp
 85ffc6d:	8b 45 08             	mov    0x8(%ebp),%eax
 85ffc70:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 85ffc76:	8b 45 08             	mov    0x8(%ebp),%eax
 85ffc79:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 85ffc80:	8b 45 08             	mov    0x8(%ebp),%eax
 85ffc83:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 85ffc8a:	8b 45 08             	mov    0x8(%ebp),%eax
 85ffc8d:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 85ffc94:	8b 45 08             	mov    0x8(%ebp),%eax
 85ffc97:	c6 40 10 00          	movb   $0x0,0x10(%eax)
 85ffc9b:	8b 45 08             	mov    0x8(%ebp),%eax
 85ffc9e:	c6 40 11 00          	movb   $0x0,0x11(%eax)
 85ffca2:	8b 45 08             	mov    0x8(%ebp),%eax
 85ffca5:	c6 40 12 00          	movb   $0x0,0x12(%eax)
 85ffca9:	8b 45 08             	mov    0x8(%ebp),%eax
 85ffcac:	c6 40 13 00          	movb   $0x0,0x13(%eax)
 85ffcb0:	5d                   	pop    %ebp
 85ffcb1:	c3                   	ret

```

```c
// CAppLoadChecker::CAppLoadChecker @ 0x85ffc6a

/* CAppLoadChecker::CAppLoadChecker() */

void __thiscall CAppLoadChecker::CAppLoadChecker(CAppLoadChecker *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  this[0x10] = (CAppLoadChecker)0x0;
  this[0x11] = (CAppLoadChecker)0x0;
  this[0x12] = (CAppLoadChecker)0x0;
  this[0x13] = (CAppLoadChecker)0x0;
  return;
}

```

---

## CheckLoad

```asm
// === 086004d8 CAppLoadChecker::CheckLoad  [0x086004d8-0x860057f] ===
 86004d8:	55                   	push   %ebp
 86004d9:	89 e5                	mov    %esp,%ebp
 86004db:	83 ec 24             	sub    $0x24,%esp
 86004de:	8b 45 0c             	mov    0xc(%ebp),%eax
 86004e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 86004e5:	8b 45 08             	mov    0x8(%ebp),%eax
 86004e8:	89 04 24             	mov    %eax,(%esp)
 86004eb:	e8 c2 f7 ff ff       	call   85ffcb2 <_ZN15CAppLoadChecker13checkLoad_dbqEi>
 86004f0:	88 45 fc             	mov    %al,-0x4(%ebp)
 86004f3:	8b 45 10             	mov    0x10(%ebp),%eax
 86004f6:	89 44 24 04          	mov    %eax,0x4(%esp)
 86004fa:	8b 45 08             	mov    0x8(%ebp),%eax
 86004fd:	89 04 24             	mov    %eax,(%esp)
 8600500:	e8 ab f9 ff ff       	call   85ffeb0 <_ZN15CAppLoadChecker16checkLoad_logdbqEi>
 8600505:	88 45 fd             	mov    %al,-0x3(%ebp)
 8600508:	8b 45 14             	mov    0x14(%ebp),%eax
 860050b:	89 44 24 04          	mov    %eax,0x4(%esp)
 860050f:	8b 45 08             	mov    0x8(%ebp),%eax
 8600512:	89 04 24             	mov    %eax,(%esp)
 8600515:	e8 96 fb ff ff       	call   86000b0 <_ZN15CAppLoadChecker16checkLoad_timerqEi>
 860051a:	88 45 fe             	mov    %al,-0x2(%ebp)
 860051d:	8b 45 18             	mov    0x18(%ebp),%eax
 8600520:	89 44 24 04          	mov    %eax,0x4(%esp)
 8600524:	8b 45 08             	mov    0x8(%ebp),%eax
 8600527:	89 04 24             	mov    %eax,(%esp)
 860052a:	e8 81 fd ff ff       	call   86002b0 <_ZN15CAppLoadChecker17checkLoad_packetqEi>
 860052f:	88 45 ff             	mov    %al,-0x1(%ebp)
 8600532:	80 7d fc 00          	cmpb   $0x0,-0x4(%ebp)
 8600536:	75 12                	jne    860054a <_ZN15CAppLoadChecker9CheckLoadEiiii+0x72>
 8600538:	80 7d fd 00          	cmpb   $0x0,-0x3(%ebp)
 860053c:	75 0c                	jne    860054a <_ZN15CAppLoadChecker9CheckLoadEiiii+0x72>
 860053e:	80 7d fe 00          	cmpb   $0x0,-0x2(%ebp)
 8600542:	75 06                	jne    860054a <_ZN15CAppLoadChecker9CheckLoadEiiii+0x72>
 8600544:	80 7d ff 00          	cmpb   $0x0,-0x1(%ebp)
 8600548:	74 2e                	je     8600578 <_ZN15CAppLoadChecker9CheckLoadEiiii+0xa0>
 860054a:	8b 45 18             	mov    0x18(%ebp),%eax
 860054d:	89 44 24 10          	mov    %eax,0x10(%esp)
 8600551:	8b 45 14             	mov    0x14(%ebp),%eax
 8600554:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8600558:	8b 45 10             	mov    0x10(%ebp),%eax
 860055b:	89 44 24 08          	mov    %eax,0x8(%esp)
 860055f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8600562:	89 44 24 04          	mov    %eax,0x4(%esp)
 8600566:	8b 45 08             	mov    0x8(%ebp),%eax
 8600569:	89 04 24             	mov    %eax,(%esp)
 860056c:	e8 3f ff ff ff       	call   86004b0 <_ZN15CAppLoadChecker8setQueueEiiii>
 8600571:	b8 01 00 00 00       	mov    $0x1,%eax
 8600576:	eb 05                	jmp    860057d <_ZN15CAppLoadChecker9CheckLoadEiiii+0xa5>
 8600578:	b8 00 00 00 00       	mov    $0x0,%eax
 860057d:	c9                   	leave
 860057e:	c3                   	ret
 860057f:	90                   	nop

```

```c
// CAppLoadChecker::CheckLoad @ 0x86004d8

/* CAppLoadChecker::CheckLoad(int, int, int, int) */

undefined4 __thiscall
CAppLoadChecker::CheckLoad(CAppLoadChecker *this,int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  undefined4 uVar5;
  
  cVar1 = checkLoad_dbq(this,param_1);
  cVar2 = checkLoad_logdbq(this,param_2);
  cVar3 = checkLoad_timerq(this,param_3);
  cVar4 = checkLoad_packetq(this,param_4);
  if ((((cVar1 == '\0') && (cVar2 == '\0')) && (cVar3 == '\0')) && (cVar4 == '\0')) {
    uVar5 = 0;
  }
  else {
    setQueue(this,param_1,param_2,param_3,param_4);
    uVar5 = 1;
  }
  return uVar5;
}

```

---

## RequestDB

```asm
// === 08600580 CAppLoadChecker::RequestDB  [0x08600580-0x86006ab] ===
 8600580:	55                   	push   %ebp
 8600581:	89 e5                	mov    %esp,%ebp
 8600583:	56                   	push   %esi
 8600584:	53                   	push   %ebx
 8600585:	83 ec 20             	sub    $0x20,%esp
 8600588:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 860058d:	c7 44 24 08 b5 01 00 	movl   $0x1b5,0x8(%esp)
 8600594:	00 
 8600595:	c7 44 24 04 a3 77 cd 	movl   $0x8cd77a3,0x4(%esp)
 860059c:	08 
 860059d:	89 04 24             	mov    %eax,(%esp)
 86005a0:	e8 e1 f4 c8 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 86005a5:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 86005ac:	00 
 86005ad:	89 44 24 04          	mov    %eax,0x4(%esp)
 86005b1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86005b4:	89 04 24             	mov    %eax,(%esp)
 86005b7:	e8 6a 86 ac ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 86005bc:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86005bf:	89 04 24             	mov    %eax,(%esp)
 86005c2:	e8 7f 86 ac ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 86005c7:	c7 44 24 04 83 01 00 	movl   $0x183,0x4(%esp)
 86005ce:	00 
 86005cf:	89 04 24             	mov    %eax,(%esp)
 86005d2:	e8 7f 86 ac ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 86005d7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86005da:	89 04 24             	mov    %eax,(%esp)
 86005dd:	e8 64 86 ac ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 86005e2:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 86005e9:	ff 
 86005ea:	89 04 24             	mov    %eax,(%esp)
 86005ed:	e8 64 86 ac ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 86005f2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86005f5:	89 04 24             	mov    %eax,(%esp)
 86005f8:	e8 51 86 ac ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 86005fd:	89 04 24             	mov    %eax,(%esp)
 8600600:	e8 03 01 00 00       	call   8600708 <_ZN12CStreamGuard11GetInBufferI32SIG_INSERT_SERVER_LOAD_STATISTICEEPT_v>
 8600605:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8600608:	e8 74 bb ac ff       	call   80cc181 <_Z14G_CEnvironmentv>
 860060d:	89 04 24             	mov    %eax,(%esp)
 8600610:	e8 cb 66 b0 ff       	call   8106ce0 <_ZN12CEnvironment16get_server_groupEv>
 8600615:	89 c2                	mov    %eax,%edx
 8600617:	8b 45 f4             	mov    -0xc(%ebp),%eax
 860061a:	88 10                	mov    %dl,(%eax)
 860061c:	e8 60 bb ac ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8600621:	89 04 24             	mov    %eax,(%esp)
 8600624:	e8 a1 a4 b4 ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 8600629:	89 c2                	mov    %eax,%edx
 860062b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 860062e:	88 50 01             	mov    %dl,0x1(%eax)
 8600631:	8b 45 0c             	mov    0xc(%ebp),%eax
 8600634:	89 c2                	mov    %eax,%edx
 8600636:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8600639:	66 89 50 02          	mov    %dx,0x2(%eax)
 860063d:	8b 45 10             	mov    0x10(%ebp),%eax
 8600640:	89 c2                	mov    %eax,%edx
 8600642:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8600645:	66 89 50 04          	mov    %dx,0x4(%eax)
 8600649:	8b 45 14             	mov    0x14(%ebp),%eax
 860064c:	89 c2                	mov    %eax,%edx
 860064e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8600651:	66 89 50 06          	mov    %dx,0x6(%eax)
 8600655:	8b 45 18             	mov    0x18(%ebp),%eax
 8600658:	89 c2                	mov    %eax,%edx
 860065a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 860065d:	66 89 50 08          	mov    %dx,0x8(%eax)
 8600661:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8600666:	8d 55 ec             	lea    -0x14(%ebp),%edx
 8600669:	89 54 24 08          	mov    %edx,0x8(%esp)
 860066d:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8600674:	00 
 8600675:	89 04 24             	mov    %eax,(%esp)
 8600678:	e8 61 09 f7 ff       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 860067d:	eb 1b                	jmp    860069a <_ZN15CAppLoadChecker9RequestDBEiiii+0x11a>
 860067f:	89 d3                	mov    %edx,%ebx
 8600681:	89 c6                	mov    %eax,%esi
 8600683:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8600686:	89 04 24             	mov    %eax,(%esp)
 8600689:	e8 44 c2 01 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 860068e:	89 f0                	mov    %esi,%eax
 8600690:	89 da                	mov    %ebx,%edx
 8600692:	89 04 24             	mov    %eax,(%esp)
 8600695:	e8 b6 30 4e 00       	call   8ae3750 <_Unwind_Resume>
 860069a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860069d:	89 04 24             	mov    %eax,(%esp)
 86006a0:	e8 2d c2 01 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 86006a5:	83 c4 20             	add    $0x20,%esp
 86006a8:	5b                   	pop    %ebx
 86006a9:	5e                   	pop    %esi
 86006aa:	5d                   	pop    %ebp
 86006ab:	c3                   	ret

```

```c
// CAppLoadChecker::RequestDB @ 0x8600580

/* CAppLoadChecker::RequestDB(int, int, int, int) */

void __thiscall
CAppLoadChecker::RequestDB(CAppLoadChecker *this,int param_1,int param_2,int param_3,int param_4)

{
  SIG_INSERT_SERVER_LOAD_STATISTIC SVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  CEnvironment *pCVar4;
  CStreamGuard local_18 [8];
  SIG_INSERT_SERVER_LOAD_STATISTIC *local_10;
  
  pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"ServerLoadChecker.cpp",0x1b5);
  CStreamGuard::CStreamGuard(local_18,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 086005d2 to 0860067c has its CatchHandler @ 0860067f */
  CStreamGuard::operator<<(pCVar3,0x183);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar3,-1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_INSERT_SERVER_LOAD_STATISTIC>(pCVar3);
  pCVar4 = (CEnvironment *)G_CEnvironment();
  SVar1 = (SIG_INSERT_SERVER_LOAD_STATISTIC)CEnvironment::get_server_group(pCVar4);
  *local_10 = SVar1;
  pCVar4 = (CEnvironment *)G_CEnvironment();
  SVar1 = (SIG_INSERT_SERVER_LOAD_STATISTIC)CEnvironment::get_channel_no(pCVar4);
  local_10[1] = SVar1;
  *(short *)(local_10 + 2) = (short)param_1;
  *(short *)(local_10 + 4) = (short)param_2;
  *(short *)(local_10 + 6) = (short)param_3;
  *(short *)(local_10 + 8) = (short)param_4;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

---

## checkLoad_dbq

```asm
// === 085ffcb2 CAppLoadChecker::checkLoad_dbq  [0x085ffcb2-0x85ffeaf] ===
 85ffcb2:	55                   	push   %ebp
 85ffcb3:	89 e5                	mov    %esp,%ebp
 85ffcb5:	83 ec 10             	sub    $0x10,%esp
 85ffcb8:	8b 45 08             	mov    0x8(%ebp),%eax
 85ffcbb:	8b 00                	mov    (%eax),%eax
 85ffcbd:	8b 55 0c             	mov    0xc(%ebp),%edx
 85ffcc0:	89 d1                	mov    %edx,%ecx
 85ffcc2:	29 c1                	sub    %eax,%ecx
 85ffcc4:	89 c8                	mov    %ecx,%eax
 85ffcc6:	89 45 f8             	mov    %eax,-0x8(%ebp)
 85ffcc9:	8b 45 08             	mov    0x8(%ebp),%eax
 85ffccc:	8b 00                	mov    (%eax),%eax
 85ffcce:	2b 45 0c             	sub    0xc(%ebp),%eax
 85ffcd1:	89 45 fc             	mov    %eax,-0x4(%ebp)
 85ffcd4:	8b 45 08             	mov    0x8(%ebp),%eax
 85ffcd7:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 85ffcdb:	84 c0                	test   %al,%al
 85ffcdd:	7f 17                	jg     85ffcf6 <_ZN15CAppLoadChecker13checkLoad_dbqEi+0x44>
 85ffcdf:	83 7d f8 0a          	cmpl   $0xa,-0x8(%ebp)
 85ffce3:	7e 11                	jle    85ffcf6 <_ZN15CAppLoadChecker13checkLoad_dbqEi+0x44>
 85ffce5:	8b 45 08             	mov    0x8(%ebp),%eax
 85ffce8:	c6 40 10 01          	movb   $0x1,0x10(%eax)
 85ffcec:	b8 01 00 00 00       	mov    $0x1,%eax
 85ffcf1:	e9 b7 01 00 00       	jmp    85ffead <_ZN15CAppLoadChecker13checkLoad_dbqEi+0x1fb>
 85ffcf6:	8b 45 08             	mov    0x8(%ebp),%eax
 85ffcf9:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 85ffcfd:	3c 01                	cmp    $0x1,%al
 85ffcff:	7f 17                	jg     85ffd18 <_ZN15CAppLoadChecker13checkLoad_dbqEi+0x66>
 85ffd01:	83 7d f8 19          	cmpl   $0x19,-0x8(%ebp)
 85ffd05:	7e 11                	jle    85ffd18 <_ZN15CAppLoadChecker13checkLoad_dbqEi+0x66>
 85ffd07:	8b 45 08             	mov    0x8(%ebp),%eax
 85ffd0a:	c6 40 10 02          	movb   $0x2,0x10(%eax)
 85ffd0e:	b8 01 00 00 00       	mov    $0x1,%eax
 85ffd13:	e9 95 01 00 00       	jmp    85ffead <_ZN15CAppLoadChecker13checkLoad_dbqEi+0x1fb>
 85ffd18:	8b 45 08             	mov    0x8(%ebp),%eax
 85ffd1b:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 85ffd1f:	3c 02                	cmp    $0x2,%al
 85ffd21:	7f 17                	jg     85ffd3a <_ZN15CAppLoadChecker13checkLoad_dbqEi+0x88>
 85ffd23:	83 7d f8 28          	cmpl   $0x28,-0x8(%ebp)
 85ffd27:	7e 11                	jle    85ffd3a <_ZN15CAppLoadChecker13checkLoad_dbqEi+0x88>
 85ffd29:	8b 45 08             	mov    0x8(%ebp),%eax
 85ffd2c:	c6 40 10 03          	movb   $0x3,0x10(%eax)
 85ffd30:	b8 01 00 00 00       	mov    $0x1,%eax
 85ffd35:	e9 73 01 00 00       	jmp    85ffead <_ZN15CAppLoadChecker13checkLoad_dbqEi+0x1fb>
 85ffd3a:	8b 45 08             	mov    0x8(%ebp),%eax
 85ffd3d:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 85ffd41:	3c 03                	cmp    $0x3,%al
 85ffd43:	7f 17                	jg     85ffd5c <_ZN15CAppLoadChecker13checkLoad_dbqEi+0xaa>
 85ffd45:	83 7d f8 50          	cmpl   $0x50,-0x8(%ebp)
 85ffd49:	7e 11                	jle    85ffd5c <_ZN15CAppLoadChecker13checkLoad_dbqEi+0xaa>
 85ffd4b:	8b 45 08             	mov    0x8(%ebp),%eax
 85ffd4e:	c6 40 10 04          	movb   $0x4,0x10(%eax)
 85ffd52:	b8 01 00 00 00       	mov    $0x1,%eax
 85ffd57:	e9 51 01 00 00       	jmp    85ffead <_ZN15CAppLoadChecker13checkLoad_dbqEi+0x1fb>
 85ffd5c:	8b 45 08             	mov    0x8(%ebp),%eax
 85ffd5f:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 85ffd63:	3c 04                	cmp    $0x4,%al
 85ffd65:	7f 1a                	jg     85ffd81 <_ZN15CAppLoadChecker13checkLoad_dbqEi+0xcf>
 85ffd67:	81 7d f8 96 00 00 00 	cmpl   $0x96,-0x8(%ebp)
 85ffd6e:	7e 11                	jle    85ffd81 <_ZN15CAppLoadChecker13checkLoad_dbqEi+0xcf>
 85ffd70:	8b 45 08             	mov    0x8(%ebp),%eax
 85ffd73:	c6 40 10 05          	movb   $0x5,0x10(%eax)
 85ffd77:	b8 01 00 00 00       	mov    $0x1,%eax
 85ffd7c:	e9 2c 01 00 00       	jmp    85ffead <_ZN15CAppLoadChecker13checkLoad_dbqEi+0x1fb>
 85ffd81:	8b 45 08             	mov    0x8(%ebp),%eax
 85ffd84:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 85ffd88:	3c 05                	cmp    $0x5,%al
 85ffd8a:	7f 1a                	jg     85ffda6 <_ZN15CAppLoadChecker13checkLoad_dbqEi+0xf4>
 85ffd8c:	81 7d f8 fa 00 00 00 	cmpl   $0xfa,-0x8(%ebp)
 85ffd93:	7e 11                	jle    85ffda6 <_ZN15CAppLoadChecker13checkLoad_dbqEi+0xf4>
 85ffd95:	8b 45 08             	mov    0x8(%ebp),%eax
 85ffd98:	c6 40 10 06          	movb   $0x6,0x10(%eax)
 85ffd9c:	b8 01 00 00 00       	mov    $0x1,%eax
 85ffda1:	e9 07 01 00 00       	jmp    85ffead <_ZN15CAppLoadChecker13checkLoad_dbqEi+0x1fb>
 85ffda6:	8b 45 08             	mov    0x8(%ebp),%eax
 85ffda9:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 85ffdad:	3c 06                	cmp    $0x6,%al
 85ffdaf:	75 13                	jne    85ffdc4 <_ZN15CAppLoadChecker13checkLoad_dbqEi+0x112>
 85ffdb1:	81 7d f8 fa 00 00 00 	cmpl   $0xfa,-0x8(%ebp)
 85ffdb8:	7e 0a                	jle    85ffdc4 <_ZN15CAppLoadChecker13checkLoad_dbqEi+0x112>
 85ffdba:	b8 01 00 00 00       	mov    $0x1,%eax
 85ffdbf:	e9 e9 00 00 00       	jmp    85ffead <_ZN15CAppLoadChecker13checkLoad_dbqEi+0x1fb>
 85ffdc4:	8b 45 08             	mov    0x8(%ebp),%eax
 85ffdc7:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 85ffdcb:	84 c0                	test   %al,%al
 85ffdcd:	78 17                	js     85ffde6 <_ZN15CAppLoadChecker13checkLoad_dbqEi+0x134>
 85ffdcf:	83 7d fc 0a          	cmpl   $0xa,-0x4(%ebp)
 85ffdd3:	7e 11                	jle    85ffde6 <_ZN15CAppLoadChecker13checkLoad_dbqEi+0x134>
 85ffdd5:	8b 45 08             	mov    0x8(%ebp),%eax
 85ffdd8:	c6 40 10 ff          	movb   $0xff,0x10(%eax)
 85ffddc:	b8 01 00 00 00       	mov    $0x1,%eax
 85ffde1:	e9 c7 00 00 00       	jmp    85ffead <_ZN15CAppLoadChecker13checkLoad_dbqEi+0x1fb>
 85ffde6:	8b 45 08             	mov    0x8(%ebp),%eax
 85ffde9:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 85ffded:	3c ff                	cmp    $0xff,%al
 85ffdef:	7c 17                	jl     85ffe08 <_ZN15CAppLoadChecker13checkLoad_dbqEi+0x156>
 85ffdf1:	83 7d fc 19          	cmpl   $0x19,-0x4(%ebp)
 85ffdf5:	7e 11                	jle    85ffe08 <_ZN15CAppLoadChecker13checkLoad_dbqEi+0x156>
 85ffdf7:	8b 45 08             	mov    0x8(%ebp),%eax
 85ffdfa:	c6 40 10 fe          	movb   $0xfe,0x10(%eax)
 85ffdfe:	b8 01 00 00 00       	mov    $0x1,%eax
 85ffe03:	e9 a5 00 00 00       	jmp    85ffead <_ZN15CAppLoadChecker13checkLoad_dbqEi+0x1fb>
 85ffe08:	8b 45 08             	mov    0x8(%ebp),%eax
 85ffe0b:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 85ffe0f:	3c fe                	cmp    $0xfe,%al
 85ffe11:	7c 17                	jl     85ffe2a <_ZN15CAppLoadChecker13checkLoad_dbqEi+0x178>
 85ffe13:	83 7d fc 28          	cmpl   $0x28,-0x4(%ebp)
 85ffe17:	7e 11                	jle    85ffe2a <_ZN15CAppLoadChecker13checkLoad_dbqEi+0x178>
 85ffe19:	8b 45 08             	mov    0x8(%ebp),%eax
 85ffe1c:	c6 40 10 fd          	movb   $0xfd,0x10(%eax)
 85ffe20:	b8 01 00 00 00       	mov    $0x1,%eax
 85ffe25:	e9 83 00 00 00       	jmp    85ffead <_ZN15CAppLoadChecker13checkLoad_dbqEi+0x1fb>
 85ffe2a:	8b 45 08             	mov    0x8(%ebp),%eax
 85ffe2d:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 85ffe31:	3c fd                	cmp    $0xfd,%al
 85ffe33:	7c 14                	jl     85ffe49 <_ZN15CAppLoadChecker13checkLoad_dbqEi+0x197>
 85ffe35:	83 7d fc 50          	cmpl   $0x50,-0x4(%ebp)
 85ffe39:	7e 0e                	jle    85ffe49 <_ZN15CAppLoadChecker13checkLoad_dbqEi+0x197>
 85ffe3b:	8b 45 08             	mov    0x8(%ebp),%eax
 85ffe3e:	c6 40 10 fc          	movb   $0xfc,0x10(%eax)
 85ffe42:	b8 01 00 00 00       	mov    $0x1,%eax
 85ffe47:	eb 64                	jmp    85ffead <_ZN15CAppLoadChecker13checkLoad_dbqEi+0x1fb>
 85ffe49:	8b 45 08             	mov    0x8(%ebp),%eax
 85ffe4c:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 85ffe50:	3c fc                	cmp    $0xfc,%al
 85ffe52:	7c 17                	jl     85ffe6b <_ZN15CAppLoadChecker13checkLoad_dbqEi+0x1b9>
 85ffe54:	81 7d fc 96 00 00 00 	cmpl   $0x96,-0x4(%ebp)
 85ffe5b:	7e 0e                	jle    85ffe6b <_ZN15CAppLoadChecker13checkLoad_dbqEi+0x1b9>
 85ffe5d:	8b 45 08             	mov    0x8(%ebp),%eax
 85ffe60:	c6 40 10 fb          	movb   $0xfb,0x10(%eax)
 85ffe64:	b8 01 00 00 00       	mov    $0x1,%eax
 85ffe69:	eb 42                	jmp    85ffead <_ZN15CAppLoadChecker13checkLoad_dbqEi+0x1fb>
 85ffe6b:	8b 45 08             	mov    0x8(%ebp),%eax
 85ffe6e:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 85ffe72:	3c fb                	cmp    $0xfb,%al
 85ffe74:	7c 17                	jl     85ffe8d <_ZN15CAppLoadChecker13checkLoad_dbqEi+0x1db>
 85ffe76:	81 7d fc fa 00 00 00 	cmpl   $0xfa,-0x4(%ebp)
 85ffe7d:	7e 0e                	jle    85ffe8d <_ZN15CAppLoadChecker13checkLoad_dbqEi+0x1db>
 85ffe7f:	8b 45 08             	mov    0x8(%ebp),%eax
 85ffe82:	c6 40 10 fa          	movb   $0xfa,0x10(%eax)
 85ffe86:	b8 01 00 00 00       	mov    $0x1,%eax
 85ffe8b:	eb 20                	jmp    85ffead <_ZN15CAppLoadChecker13checkLoad_dbqEi+0x1fb>
 85ffe8d:	8b 45 08             	mov    0x8(%ebp),%eax
 85ffe90:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 85ffe94:	3c fa                	cmp    $0xfa,%al
 85ffe96:	75 10                	jne    85ffea8 <_ZN15CAppLoadChecker13checkLoad_dbqEi+0x1f6>
 85ffe98:	81 7d fc fa 00 00 00 	cmpl   $0xfa,-0x4(%ebp)
 85ffe9f:	7e 07                	jle    85ffea8 <_ZN15CAppLoadChecker13checkLoad_dbqEi+0x1f6>
 85ffea1:	b8 01 00 00 00       	mov    $0x1,%eax
 85ffea6:	eb 05                	jmp    85ffead <_ZN15CAppLoadChecker13checkLoad_dbqEi+0x1fb>
 85ffea8:	b8 00 00 00 00       	mov    $0x0,%eax
 85ffead:	c9                   	leave
 85ffeae:	c3                   	ret
 85ffeaf:	90                   	nop

```

```c
// CAppLoadChecker::checkLoad_dbq @ 0x85ffcb2

/* CAppLoadChecker::checkLoad_dbq(int) */

undefined4 __thiscall CAppLoadChecker::checkLoad_dbq(CAppLoadChecker *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = param_1 - *(int *)this;
  iVar1 = *(int *)this - param_1;
  if (((char)this[0x10] < '\x01') && (10 < iVar3)) {
    this[0x10] = (CAppLoadChecker)0x1;
    uVar2 = 1;
  }
  else if (((char)this[0x10] < '\x02') && (0x19 < iVar3)) {
    this[0x10] = (CAppLoadChecker)0x2;
    uVar2 = 1;
  }
  else if (((char)this[0x10] < '\x03') && (0x28 < iVar3)) {
    this[0x10] = (CAppLoadChecker)0x3;
    uVar2 = 1;
  }
  else if (((char)this[0x10] < '\x04') && (0x50 < iVar3)) {
    this[0x10] = (CAppLoadChecker)0x4;
    uVar2 = 1;
  }
  else if (((char)this[0x10] < '\x05') && (0x96 < iVar3)) {
    this[0x10] = (CAppLoadChecker)0x5;
    uVar2 = 1;
  }
  else if (((char)this[0x10] < '\x06') && (0xfa < iVar3)) {
    this[0x10] = (CAppLoadChecker)0x6;
    uVar2 = 1;
  }
  else if ((this[0x10] == (CAppLoadChecker)0x6) && (0xfa < iVar3)) {
    uVar2 = 1;
  }
  else if (((char)this[0x10] < '\0') || (iVar1 < 0xb)) {
    if (((char)this[0x10] < -1) || (iVar1 < 0x1a)) {
      if (((char)this[0x10] < -2) || (iVar1 < 0x29)) {
        if (((char)this[0x10] < -3) || (iVar1 < 0x51)) {
          if (((char)this[0x10] < -4) || (iVar1 < 0x97)) {
            if (((char)this[0x10] < -5) || (iVar1 < 0xfb)) {
              if ((this[0x10] == (CAppLoadChecker)0xfa) && (0xfa < iVar1)) {
                uVar2 = 1;
              }
              else {
                uVar2 = 0;
              }
            }
            else {
              this[0x10] = (CAppLoadChecker)0xfa;
              uVar2 = 1;
            }
          }
          else {
            this[0x10] = (CAppLoadChecker)0xfb;
            uVar2 = 1;
          }
        }
        else {
          this[0x10] = (CAppLoadChecker)0xfc;
          uVar2 = 1;
        }
      }
      else {
        this[0x10] = (CAppLoadChecker)0xfd;
        uVar2 = 1;
      }
    }
    else {
      this[0x10] = (CAppLoadChecker)0xfe;
      uVar2 = 1;
    }
  }
  else {
    this[0x10] = (CAppLoadChecker)0xff;
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## checkLoad_logdbq

```asm
// === 085ffeb0 CAppLoadChecker::checkLoad_logdbq  [0x085ffeb0-0x86000af] ===
 85ffeb0:	55                   	push   %ebp
 85ffeb1:	89 e5                	mov    %esp,%ebp
 85ffeb3:	83 ec 10             	sub    $0x10,%esp
 85ffeb6:	8b 45 08             	mov    0x8(%ebp),%eax
 85ffeb9:	8b 40 04             	mov    0x4(%eax),%eax
 85ffebc:	8b 55 0c             	mov    0xc(%ebp),%edx
 85ffebf:	89 d1                	mov    %edx,%ecx
 85ffec1:	29 c1                	sub    %eax,%ecx
 85ffec3:	89 c8                	mov    %ecx,%eax
 85ffec5:	89 45 f8             	mov    %eax,-0x8(%ebp)
 85ffec8:	8b 45 08             	mov    0x8(%ebp),%eax
 85ffecb:	8b 40 04             	mov    0x4(%eax),%eax
 85ffece:	2b 45 0c             	sub    0xc(%ebp),%eax
 85ffed1:	89 45 fc             	mov    %eax,-0x4(%ebp)
 85ffed4:	8b 45 08             	mov    0x8(%ebp),%eax
 85ffed7:	0f b6 40 11          	movzbl 0x11(%eax),%eax
 85ffedb:	84 c0                	test   %al,%al
 85ffedd:	7f 17                	jg     85ffef6 <_ZN15CAppLoadChecker16checkLoad_logdbqEi+0x46>
 85ffedf:	83 7d f8 0a          	cmpl   $0xa,-0x8(%ebp)
 85ffee3:	7e 11                	jle    85ffef6 <_ZN15CAppLoadChecker16checkLoad_logdbqEi+0x46>
 85ffee5:	8b 45 08             	mov    0x8(%ebp),%eax
 85ffee8:	c6 40 11 01          	movb   $0x1,0x11(%eax)
 85ffeec:	b8 01 00 00 00       	mov    $0x1,%eax
 85ffef1:	e9 b7 01 00 00       	jmp    86000ad <_ZN15CAppLoadChecker16checkLoad_logdbqEi+0x1fd>
 85ffef6:	8b 45 08             	mov    0x8(%ebp),%eax
 85ffef9:	0f b6 40 11          	movzbl 0x11(%eax),%eax
 85ffefd:	3c 01                	cmp    $0x1,%al
 85ffeff:	7f 17                	jg     85fff18 <_ZN15CAppLoadChecker16checkLoad_logdbqEi+0x68>
 85fff01:	83 7d f8 19          	cmpl   $0x19,-0x8(%ebp)
 85fff05:	7e 11                	jle    85fff18 <_ZN15CAppLoadChecker16checkLoad_logdbqEi+0x68>
 85fff07:	8b 45 08             	mov    0x8(%ebp),%eax
 85fff0a:	c6 40 11 02          	movb   $0x2,0x11(%eax)
 85fff0e:	b8 01 00 00 00       	mov    $0x1,%eax
 85fff13:	e9 95 01 00 00       	jmp    86000ad <_ZN15CAppLoadChecker16checkLoad_logdbqEi+0x1fd>
 85fff18:	8b 45 08             	mov    0x8(%ebp),%eax
 85fff1b:	0f b6 40 11          	movzbl 0x11(%eax),%eax
 85fff1f:	3c 02                	cmp    $0x2,%al
 85fff21:	7f 17                	jg     85fff3a <_ZN15CAppLoadChecker16checkLoad_logdbqEi+0x8a>
 85fff23:	83 7d f8 28          	cmpl   $0x28,-0x8(%ebp)
 85fff27:	7e 11                	jle    85fff3a <_ZN15CAppLoadChecker16checkLoad_logdbqEi+0x8a>
 85fff29:	8b 45 08             	mov    0x8(%ebp),%eax
 85fff2c:	c6 40 11 03          	movb   $0x3,0x11(%eax)
 85fff30:	b8 01 00 00 00       	mov    $0x1,%eax
 85fff35:	e9 73 01 00 00       	jmp    86000ad <_ZN15CAppLoadChecker16checkLoad_logdbqEi+0x1fd>
 85fff3a:	8b 45 08             	mov    0x8(%ebp),%eax
 85fff3d:	0f b6 40 11          	movzbl 0x11(%eax),%eax
 85fff41:	3c 03                	cmp    $0x3,%al
 85fff43:	7f 17                	jg     85fff5c <_ZN15CAppLoadChecker16checkLoad_logdbqEi+0xac>
 85fff45:	83 7d f8 50          	cmpl   $0x50,-0x8(%ebp)
 85fff49:	7e 11                	jle    85fff5c <_ZN15CAppLoadChecker16checkLoad_logdbqEi+0xac>
 85fff4b:	8b 45 08             	mov    0x8(%ebp),%eax
 85fff4e:	c6 40 11 04          	movb   $0x4,0x11(%eax)
 85fff52:	b8 01 00 00 00       	mov    $0x1,%eax
 85fff57:	e9 51 01 00 00       	jmp    86000ad <_ZN15CAppLoadChecker16checkLoad_logdbqEi+0x1fd>
 85fff5c:	8b 45 08             	mov    0x8(%ebp),%eax
 85fff5f:	0f b6 40 11          	movzbl 0x11(%eax),%eax
 85fff63:	3c 04                	cmp    $0x4,%al
 85fff65:	7f 1a                	jg     85fff81 <_ZN15CAppLoadChecker16checkLoad_logdbqEi+0xd1>
 85fff67:	81 7d f8 96 00 00 00 	cmpl   $0x96,-0x8(%ebp)
 85fff6e:	7e 11                	jle    85fff81 <_ZN15CAppLoadChecker16checkLoad_logdbqEi+0xd1>
 85fff70:	8b 45 08             	mov    0x8(%ebp),%eax
 85fff73:	c6 40 11 05          	movb   $0x5,0x11(%eax)
 85fff77:	b8 01 00 00 00       	mov    $0x1,%eax
 85fff7c:	e9 2c 01 00 00       	jmp    86000ad <_ZN15CAppLoadChecker16checkLoad_logdbqEi+0x1fd>
 85fff81:	8b 45 08             	mov    0x8(%ebp),%eax
 85fff84:	0f b6 40 11          	movzbl 0x11(%eax),%eax
 85fff88:	3c 05                	cmp    $0x5,%al
 85fff8a:	7f 1a                	jg     85fffa6 <_ZN15CAppLoadChecker16checkLoad_logdbqEi+0xf6>
 85fff8c:	81 7d f8 fa 00 00 00 	cmpl   $0xfa,-0x8(%ebp)
 85fff93:	7e 11                	jle    85fffa6 <_ZN15CAppLoadChecker16checkLoad_logdbqEi+0xf6>
 85fff95:	8b 45 08             	mov    0x8(%ebp),%eax
 85fff98:	c6 40 11 06          	movb   $0x6,0x11(%eax)
 85fff9c:	b8 01 00 00 00       	mov    $0x1,%eax
 85fffa1:	e9 07 01 00 00       	jmp    86000ad <_ZN15CAppLoadChecker16checkLoad_logdbqEi+0x1fd>
 85fffa6:	8b 45 08             	mov    0x8(%ebp),%eax
 85fffa9:	0f b6 40 11          	movzbl 0x11(%eax),%eax
 85fffad:	3c 06                	cmp    $0x6,%al
 85fffaf:	75 13                	jne    85fffc4 <_ZN15CAppLoadChecker16checkLoad_logdbqEi+0x114>
 85fffb1:	81 7d f8 fa 00 00 00 	cmpl   $0xfa,-0x8(%ebp)
 85fffb8:	7e 0a                	jle    85fffc4 <_ZN15CAppLoadChecker16checkLoad_logdbqEi+0x114>
 85fffba:	b8 01 00 00 00       	mov    $0x1,%eax
 85fffbf:	e9 e9 00 00 00       	jmp    86000ad <_ZN15CAppLoadChecker16checkLoad_logdbqEi+0x1fd>
 85fffc4:	8b 45 08             	mov    0x8(%ebp),%eax
 85fffc7:	0f b6 40 11          	movzbl 0x11(%eax),%eax
 85fffcb:	84 c0                	test   %al,%al
 85fffcd:	78 17                	js     85fffe6 <_ZN15CAppLoadChecker16checkLoad_logdbqEi+0x136>
 85fffcf:	83 7d fc 0a          	cmpl   $0xa,-0x4(%ebp)
 85fffd3:	7e 11                	jle    85fffe6 <_ZN15CAppLoadChecker16checkLoad_logdbqEi+0x136>
 85fffd5:	8b 45 08             	mov    0x8(%ebp),%eax
 85fffd8:	c6 40 11 ff          	movb   $0xff,0x11(%eax)
 85fffdc:	b8 01 00 00 00       	mov    $0x1,%eax
 85fffe1:	e9 c7 00 00 00       	jmp    86000ad <_ZN15CAppLoadChecker16checkLoad_logdbqEi+0x1fd>
 85fffe6:	8b 45 08             	mov    0x8(%ebp),%eax
 85fffe9:	0f b6 40 11          	movzbl 0x11(%eax),%eax
 85fffed:	3c ff                	cmp    $0xff,%al
 85fffef:	7c 17                	jl     8600008 <_ZN15CAppLoadChecker16checkLoad_logdbqEi+0x158>
 85ffff1:	83 7d fc 19          	cmpl   $0x19,-0x4(%ebp)
 85ffff5:	7e 11                	jle    8600008 <_ZN15CAppLoadChecker16checkLoad_logdbqEi+0x158>
 85ffff7:	8b 45 08             	mov    0x8(%ebp),%eax
 85ffffa:	c6 40 11 fe          	movb   $0xfe,0x11(%eax)
 85ffffe:	b8 01 00 00 00       	mov    $0x1,%eax
 8600003:	e9 a5 00 00 00       	jmp    86000ad <_ZN15CAppLoadChecker16checkLoad_logdbqEi+0x1fd>
 8600008:	8b 45 08             	mov    0x8(%ebp),%eax
 860000b:	0f b6 40 11          	movzbl 0x11(%eax),%eax
 860000f:	3c fe                	cmp    $0xfe,%al
 8600011:	7c 17                	jl     860002a <_ZN15CAppLoadChecker16checkLoad_logdbqEi+0x17a>
 8600013:	83 7d fc 28          	cmpl   $0x28,-0x4(%ebp)
 8600017:	7e 11                	jle    860002a <_ZN15CAppLoadChecker16checkLoad_logdbqEi+0x17a>
 8600019:	8b 45 08             	mov    0x8(%ebp),%eax
 860001c:	c6 40 11 fd          	movb   $0xfd,0x11(%eax)
 8600020:	b8 01 00 00 00       	mov    $0x1,%eax
 8600025:	e9 83 00 00 00       	jmp    86000ad <_ZN15CAppLoadChecker16checkLoad_logdbqEi+0x1fd>
 860002a:	8b 45 08             	mov    0x8(%ebp),%eax
 860002d:	0f b6 40 11          	movzbl 0x11(%eax),%eax
 8600031:	3c fd                	cmp    $0xfd,%al
 8600033:	7c 14                	jl     8600049 <_ZN15CAppLoadChecker16checkLoad_logdbqEi+0x199>
 8600035:	83 7d fc 50          	cmpl   $0x50,-0x4(%ebp)
 8600039:	7e 0e                	jle    8600049 <_ZN15CAppLoadChecker16checkLoad_logdbqEi+0x199>
 860003b:	8b 45 08             	mov    0x8(%ebp),%eax
 860003e:	c6 40 11 fc          	movb   $0xfc,0x11(%eax)
 8600042:	b8 01 00 00 00       	mov    $0x1,%eax
 8600047:	eb 64                	jmp    86000ad <_ZN15CAppLoadChecker16checkLoad_logdbqEi+0x1fd>
 8600049:	8b 45 08             	mov    0x8(%ebp),%eax
 860004c:	0f b6 40 11          	movzbl 0x11(%eax),%eax
 8600050:	3c fc                	cmp    $0xfc,%al
 8600052:	7c 17                	jl     860006b <_ZN15CAppLoadChecker16checkLoad_logdbqEi+0x1bb>
 8600054:	81 7d fc 96 00 00 00 	cmpl   $0x96,-0x4(%ebp)
 860005b:	7e 0e                	jle    860006b <_ZN15CAppLoadChecker16checkLoad_logdbqEi+0x1bb>
 860005d:	8b 45 08             	mov    0x8(%ebp),%eax
 8600060:	c6 40 11 fb          	movb   $0xfb,0x11(%eax)
 8600064:	b8 01 00 00 00       	mov    $0x1,%eax
 8600069:	eb 42                	jmp    86000ad <_ZN15CAppLoadChecker16checkLoad_logdbqEi+0x1fd>
 860006b:	8b 45 08             	mov    0x8(%ebp),%eax
 860006e:	0f b6 40 11          	movzbl 0x11(%eax),%eax
 8600072:	3c fb                	cmp    $0xfb,%al
 8600074:	7c 17                	jl     860008d <_ZN15CAppLoadChecker16checkLoad_logdbqEi+0x1dd>
 8600076:	81 7d fc fa 00 00 00 	cmpl   $0xfa,-0x4(%ebp)
 860007d:	7e 0e                	jle    860008d <_ZN15CAppLoadChecker16checkLoad_logdbqEi+0x1dd>
 860007f:	8b 45 08             	mov    0x8(%ebp),%eax
 8600082:	c6 40 11 fa          	movb   $0xfa,0x11(%eax)
 8600086:	b8 01 00 00 00       	mov    $0x1,%eax
 860008b:	eb 20                	jmp    86000ad <_ZN15CAppLoadChecker16checkLoad_logdbqEi+0x1fd>
 860008d:	8b 45 08             	mov    0x8(%ebp),%eax
 8600090:	0f b6 40 11          	movzbl 0x11(%eax),%eax
 8600094:	3c fa                	cmp    $0xfa,%al
 8600096:	75 10                	jne    86000a8 <_ZN15CAppLoadChecker16checkLoad_logdbqEi+0x1f8>
 8600098:	81 7d fc fa 00 00 00 	cmpl   $0xfa,-0x4(%ebp)
 860009f:	7e 07                	jle    86000a8 <_ZN15CAppLoadChecker16checkLoad_logdbqEi+0x1f8>
 86000a1:	b8 01 00 00 00       	mov    $0x1,%eax
 86000a6:	eb 05                	jmp    86000ad <_ZN15CAppLoadChecker16checkLoad_logdbqEi+0x1fd>
 86000a8:	b8 00 00 00 00       	mov    $0x0,%eax
 86000ad:	c9                   	leave
 86000ae:	c3                   	ret
 86000af:	90                   	nop

```

```c
// CAppLoadChecker::checkLoad_logdbq @ 0x85ffeb0

/* CAppLoadChecker::checkLoad_logdbq(int) */

undefined4 __thiscall CAppLoadChecker::checkLoad_logdbq(CAppLoadChecker *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = param_1 - *(int *)(this + 4);
  iVar1 = *(int *)(this + 4) - param_1;
  if (((char)this[0x11] < '\x01') && (10 < iVar3)) {
    this[0x11] = (CAppLoadChecker)0x1;
    uVar2 = 1;
  }
  else if (((char)this[0x11] < '\x02') && (0x19 < iVar3)) {
    this[0x11] = (CAppLoadChecker)0x2;
    uVar2 = 1;
  }
  else if (((char)this[0x11] < '\x03') && (0x28 < iVar3)) {
    this[0x11] = (CAppLoadChecker)0x3;
    uVar2 = 1;
  }
  else if (((char)this[0x11] < '\x04') && (0x50 < iVar3)) {
    this[0x11] = (CAppLoadChecker)0x4;
    uVar2 = 1;
  }
  else if (((char)this[0x11] < '\x05') && (0x96 < iVar3)) {
    this[0x11] = (CAppLoadChecker)0x5;
    uVar2 = 1;
  }
  else if (((char)this[0x11] < '\x06') && (0xfa < iVar3)) {
    this[0x11] = (CAppLoadChecker)0x6;
    uVar2 = 1;
  }
  else if ((this[0x11] == (CAppLoadChecker)0x6) && (0xfa < iVar3)) {
    uVar2 = 1;
  }
  else if (((char)this[0x11] < '\0') || (iVar1 < 0xb)) {
    if (((char)this[0x11] < -1) || (iVar1 < 0x1a)) {
      if (((char)this[0x11] < -2) || (iVar1 < 0x29)) {
        if (((char)this[0x11] < -3) || (iVar1 < 0x51)) {
          if (((char)this[0x11] < -4) || (iVar1 < 0x97)) {
            if (((char)this[0x11] < -5) || (iVar1 < 0xfb)) {
              if ((this[0x11] == (CAppLoadChecker)0xfa) && (0xfa < iVar1)) {
                uVar2 = 1;
              }
              else {
                uVar2 = 0;
              }
            }
            else {
              this[0x11] = (CAppLoadChecker)0xfa;
              uVar2 = 1;
            }
          }
          else {
            this[0x11] = (CAppLoadChecker)0xfb;
            uVar2 = 1;
          }
        }
        else {
          this[0x11] = (CAppLoadChecker)0xfc;
          uVar2 = 1;
        }
      }
      else {
        this[0x11] = (CAppLoadChecker)0xfd;
        uVar2 = 1;
      }
    }
    else {
      this[0x11] = (CAppLoadChecker)0xfe;
      uVar2 = 1;
    }
  }
  else {
    this[0x11] = (CAppLoadChecker)0xff;
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## checkLoad_packetq

```asm
// === 086002b0 CAppLoadChecker::checkLoad_packetq  [0x086002b0-0x86004af] ===
 86002b0:	55                   	push   %ebp
 86002b1:	89 e5                	mov    %esp,%ebp
 86002b3:	83 ec 10             	sub    $0x10,%esp
 86002b6:	8b 45 08             	mov    0x8(%ebp),%eax
 86002b9:	8b 40 0c             	mov    0xc(%eax),%eax
 86002bc:	8b 55 0c             	mov    0xc(%ebp),%edx
 86002bf:	89 d1                	mov    %edx,%ecx
 86002c1:	29 c1                	sub    %eax,%ecx
 86002c3:	89 c8                	mov    %ecx,%eax
 86002c5:	89 45 f8             	mov    %eax,-0x8(%ebp)
 86002c8:	8b 45 08             	mov    0x8(%ebp),%eax
 86002cb:	8b 40 0c             	mov    0xc(%eax),%eax
 86002ce:	2b 45 0c             	sub    0xc(%ebp),%eax
 86002d1:	89 45 fc             	mov    %eax,-0x4(%ebp)
 86002d4:	8b 45 08             	mov    0x8(%ebp),%eax
 86002d7:	0f b6 40 13          	movzbl 0x13(%eax),%eax
 86002db:	84 c0                	test   %al,%al
 86002dd:	7f 17                	jg     86002f6 <_ZN15CAppLoadChecker17checkLoad_packetqEi+0x46>
 86002df:	83 7d f8 0a          	cmpl   $0xa,-0x8(%ebp)
 86002e3:	7e 11                	jle    86002f6 <_ZN15CAppLoadChecker17checkLoad_packetqEi+0x46>
 86002e5:	8b 45 08             	mov    0x8(%ebp),%eax
 86002e8:	c6 40 13 01          	movb   $0x1,0x13(%eax)
 86002ec:	b8 01 00 00 00       	mov    $0x1,%eax
 86002f1:	e9 b7 01 00 00       	jmp    86004ad <_ZN15CAppLoadChecker17checkLoad_packetqEi+0x1fd>
 86002f6:	8b 45 08             	mov    0x8(%ebp),%eax
 86002f9:	0f b6 40 13          	movzbl 0x13(%eax),%eax
 86002fd:	3c 01                	cmp    $0x1,%al
 86002ff:	7f 17                	jg     8600318 <_ZN15CAppLoadChecker17checkLoad_packetqEi+0x68>
 8600301:	83 7d f8 19          	cmpl   $0x19,-0x8(%ebp)
 8600305:	7e 11                	jle    8600318 <_ZN15CAppLoadChecker17checkLoad_packetqEi+0x68>
 8600307:	8b 45 08             	mov    0x8(%ebp),%eax
 860030a:	c6 40 13 02          	movb   $0x2,0x13(%eax)
 860030e:	b8 01 00 00 00       	mov    $0x1,%eax
 8600313:	e9 95 01 00 00       	jmp    86004ad <_ZN15CAppLoadChecker17checkLoad_packetqEi+0x1fd>
 8600318:	8b 45 08             	mov    0x8(%ebp),%eax
 860031b:	0f b6 40 13          	movzbl 0x13(%eax),%eax
 860031f:	3c 02                	cmp    $0x2,%al
 8600321:	7f 17                	jg     860033a <_ZN15CAppLoadChecker17checkLoad_packetqEi+0x8a>
 8600323:	83 7d f8 28          	cmpl   $0x28,-0x8(%ebp)
 8600327:	7e 11                	jle    860033a <_ZN15CAppLoadChecker17checkLoad_packetqEi+0x8a>
 8600329:	8b 45 08             	mov    0x8(%ebp),%eax
 860032c:	c6 40 13 03          	movb   $0x3,0x13(%eax)
 8600330:	b8 01 00 00 00       	mov    $0x1,%eax
 8600335:	e9 73 01 00 00       	jmp    86004ad <_ZN15CAppLoadChecker17checkLoad_packetqEi+0x1fd>
 860033a:	8b 45 08             	mov    0x8(%ebp),%eax
 860033d:	0f b6 40 13          	movzbl 0x13(%eax),%eax
 8600341:	3c 03                	cmp    $0x3,%al
 8600343:	7f 17                	jg     860035c <_ZN15CAppLoadChecker17checkLoad_packetqEi+0xac>
 8600345:	83 7d f8 50          	cmpl   $0x50,-0x8(%ebp)
 8600349:	7e 11                	jle    860035c <_ZN15CAppLoadChecker17checkLoad_packetqEi+0xac>
 860034b:	8b 45 08             	mov    0x8(%ebp),%eax
 860034e:	c6 40 13 04          	movb   $0x4,0x13(%eax)
 8600352:	b8 01 00 00 00       	mov    $0x1,%eax
 8600357:	e9 51 01 00 00       	jmp    86004ad <_ZN15CAppLoadChecker17checkLoad_packetqEi+0x1fd>
 860035c:	8b 45 08             	mov    0x8(%ebp),%eax
 860035f:	0f b6 40 13          	movzbl 0x13(%eax),%eax
 8600363:	3c 04                	cmp    $0x4,%al
 8600365:	7f 1a                	jg     8600381 <_ZN15CAppLoadChecker17checkLoad_packetqEi+0xd1>
 8600367:	81 7d f8 96 00 00 00 	cmpl   $0x96,-0x8(%ebp)
 860036e:	7e 11                	jle    8600381 <_ZN15CAppLoadChecker17checkLoad_packetqEi+0xd1>
 8600370:	8b 45 08             	mov    0x8(%ebp),%eax
 8600373:	c6 40 13 05          	movb   $0x5,0x13(%eax)
 8600377:	b8 01 00 00 00       	mov    $0x1,%eax
 860037c:	e9 2c 01 00 00       	jmp    86004ad <_ZN15CAppLoadChecker17checkLoad_packetqEi+0x1fd>
 8600381:	8b 45 08             	mov    0x8(%ebp),%eax
 8600384:	0f b6 40 13          	movzbl 0x13(%eax),%eax
 8600388:	3c 05                	cmp    $0x5,%al
 860038a:	7f 1a                	jg     86003a6 <_ZN15CAppLoadChecker17checkLoad_packetqEi+0xf6>
 860038c:	81 7d f8 fa 00 00 00 	cmpl   $0xfa,-0x8(%ebp)
 8600393:	7e 11                	jle    86003a6 <_ZN15CAppLoadChecker17checkLoad_packetqEi+0xf6>
 8600395:	8b 45 08             	mov    0x8(%ebp),%eax
 8600398:	c6 40 13 06          	movb   $0x6,0x13(%eax)
 860039c:	b8 01 00 00 00       	mov    $0x1,%eax
 86003a1:	e9 07 01 00 00       	jmp    86004ad <_ZN15CAppLoadChecker17checkLoad_packetqEi+0x1fd>
 86003a6:	8b 45 08             	mov    0x8(%ebp),%eax
 86003a9:	0f b6 40 13          	movzbl 0x13(%eax),%eax
 86003ad:	3c 06                	cmp    $0x6,%al
 86003af:	75 13                	jne    86003c4 <_ZN15CAppLoadChecker17checkLoad_packetqEi+0x114>
 86003b1:	81 7d f8 fa 00 00 00 	cmpl   $0xfa,-0x8(%ebp)
 86003b8:	7e 0a                	jle    86003c4 <_ZN15CAppLoadChecker17checkLoad_packetqEi+0x114>
 86003ba:	b8 01 00 00 00       	mov    $0x1,%eax
 86003bf:	e9 e9 00 00 00       	jmp    86004ad <_ZN15CAppLoadChecker17checkLoad_packetqEi+0x1fd>
 86003c4:	8b 45 08             	mov    0x8(%ebp),%eax
 86003c7:	0f b6 40 13          	movzbl 0x13(%eax),%eax
 86003cb:	84 c0                	test   %al,%al
 86003cd:	78 17                	js     86003e6 <_ZN15CAppLoadChecker17checkLoad_packetqEi+0x136>
 86003cf:	83 7d fc 0a          	cmpl   $0xa,-0x4(%ebp)
 86003d3:	7e 11                	jle    86003e6 <_ZN15CAppLoadChecker17checkLoad_packetqEi+0x136>
 86003d5:	8b 45 08             	mov    0x8(%ebp),%eax
 86003d8:	c6 40 13 ff          	movb   $0xff,0x13(%eax)
 86003dc:	b8 01 00 00 00       	mov    $0x1,%eax
 86003e1:	e9 c7 00 00 00       	jmp    86004ad <_ZN15CAppLoadChecker17checkLoad_packetqEi+0x1fd>
 86003e6:	8b 45 08             	mov    0x8(%ebp),%eax
 86003e9:	0f b6 40 13          	movzbl 0x13(%eax),%eax
 86003ed:	3c ff                	cmp    $0xff,%al
 86003ef:	7c 17                	jl     8600408 <_ZN15CAppLoadChecker17checkLoad_packetqEi+0x158>
 86003f1:	83 7d fc 19          	cmpl   $0x19,-0x4(%ebp)
 86003f5:	7e 11                	jle    8600408 <_ZN15CAppLoadChecker17checkLoad_packetqEi+0x158>
 86003f7:	8b 45 08             	mov    0x8(%ebp),%eax
 86003fa:	c6 40 13 fe          	movb   $0xfe,0x13(%eax)
 86003fe:	b8 01 00 00 00       	mov    $0x1,%eax
 8600403:	e9 a5 00 00 00       	jmp    86004ad <_ZN15CAppLoadChecker17checkLoad_packetqEi+0x1fd>
 8600408:	8b 45 08             	mov    0x8(%ebp),%eax
 860040b:	0f b6 40 13          	movzbl 0x13(%eax),%eax
 860040f:	3c fe                	cmp    $0xfe,%al
 8600411:	7c 17                	jl     860042a <_ZN15CAppLoadChecker17checkLoad_packetqEi+0x17a>
 8600413:	83 7d fc 28          	cmpl   $0x28,-0x4(%ebp)
 8600417:	7e 11                	jle    860042a <_ZN15CAppLoadChecker17checkLoad_packetqEi+0x17a>
 8600419:	8b 45 08             	mov    0x8(%ebp),%eax
 860041c:	c6 40 13 fd          	movb   $0xfd,0x13(%eax)
 8600420:	b8 01 00 00 00       	mov    $0x1,%eax
 8600425:	e9 83 00 00 00       	jmp    86004ad <_ZN15CAppLoadChecker17checkLoad_packetqEi+0x1fd>
 860042a:	8b 45 08             	mov    0x8(%ebp),%eax
 860042d:	0f b6 40 13          	movzbl 0x13(%eax),%eax
 8600431:	3c fd                	cmp    $0xfd,%al
 8600433:	7c 14                	jl     8600449 <_ZN15CAppLoadChecker17checkLoad_packetqEi+0x199>
 8600435:	83 7d fc 50          	cmpl   $0x50,-0x4(%ebp)
 8600439:	7e 0e                	jle    8600449 <_ZN15CAppLoadChecker17checkLoad_packetqEi+0x199>
 860043b:	8b 45 08             	mov    0x8(%ebp),%eax
 860043e:	c6 40 13 fc          	movb   $0xfc,0x13(%eax)
 8600442:	b8 01 00 00 00       	mov    $0x1,%eax
 8600447:	eb 64                	jmp    86004ad <_ZN15CAppLoadChecker17checkLoad_packetqEi+0x1fd>
 8600449:	8b 45 08             	mov    0x8(%ebp),%eax
 860044c:	0f b6 40 13          	movzbl 0x13(%eax),%eax
 8600450:	3c fc                	cmp    $0xfc,%al
 8600452:	7c 17                	jl     860046b <_ZN15CAppLoadChecker17checkLoad_packetqEi+0x1bb>
 8600454:	81 7d fc 96 00 00 00 	cmpl   $0x96,-0x4(%ebp)
 860045b:	7e 0e                	jle    860046b <_ZN15CAppLoadChecker17checkLoad_packetqEi+0x1bb>
 860045d:	8b 45 08             	mov    0x8(%ebp),%eax
 8600460:	c6 40 13 fb          	movb   $0xfb,0x13(%eax)
 8600464:	b8 01 00 00 00       	mov    $0x1,%eax
 8600469:	eb 42                	jmp    86004ad <_ZN15CAppLoadChecker17checkLoad_packetqEi+0x1fd>
 860046b:	8b 45 08             	mov    0x8(%ebp),%eax
 860046e:	0f b6 40 13          	movzbl 0x13(%eax),%eax
 8600472:	3c fb                	cmp    $0xfb,%al
 8600474:	7c 17                	jl     860048d <_ZN15CAppLoadChecker17checkLoad_packetqEi+0x1dd>
 8600476:	81 7d fc fa 00 00 00 	cmpl   $0xfa,-0x4(%ebp)
 860047d:	7e 0e                	jle    860048d <_ZN15CAppLoadChecker17checkLoad_packetqEi+0x1dd>
 860047f:	8b 45 08             	mov    0x8(%ebp),%eax
 8600482:	c6 40 13 fa          	movb   $0xfa,0x13(%eax)
 8600486:	b8 01 00 00 00       	mov    $0x1,%eax
 860048b:	eb 20                	jmp    86004ad <_ZN15CAppLoadChecker17checkLoad_packetqEi+0x1fd>
 860048d:	8b 45 08             	mov    0x8(%ebp),%eax
 8600490:	0f b6 40 13          	movzbl 0x13(%eax),%eax
 8600494:	3c fa                	cmp    $0xfa,%al
 8600496:	75 10                	jne    86004a8 <_ZN15CAppLoadChecker17checkLoad_packetqEi+0x1f8>
 8600498:	81 7d fc fa 00 00 00 	cmpl   $0xfa,-0x4(%ebp)
 860049f:	7e 07                	jle    86004a8 <_ZN15CAppLoadChecker17checkLoad_packetqEi+0x1f8>
 86004a1:	b8 01 00 00 00       	mov    $0x1,%eax
 86004a6:	eb 05                	jmp    86004ad <_ZN15CAppLoadChecker17checkLoad_packetqEi+0x1fd>
 86004a8:	b8 00 00 00 00       	mov    $0x0,%eax
 86004ad:	c9                   	leave
 86004ae:	c3                   	ret
 86004af:	90                   	nop

```

```c
// CAppLoadChecker::checkLoad_packetq @ 0x86002b0

/* CAppLoadChecker::checkLoad_packetq(int) */

undefined4 __thiscall CAppLoadChecker::checkLoad_packetq(CAppLoadChecker *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = param_1 - *(int *)(this + 0xc);
  iVar1 = *(int *)(this + 0xc) - param_1;
  if (((char)this[0x13] < '\x01') && (10 < iVar3)) {
    this[0x13] = (CAppLoadChecker)0x1;
    uVar2 = 1;
  }
  else if (((char)this[0x13] < '\x02') && (0x19 < iVar3)) {
    this[0x13] = (CAppLoadChecker)0x2;
    uVar2 = 1;
  }
  else if (((char)this[0x13] < '\x03') && (0x28 < iVar3)) {
    this[0x13] = (CAppLoadChecker)0x3;
    uVar2 = 1;
  }
  else if (((char)this[0x13] < '\x04') && (0x50 < iVar3)) {
    this[0x13] = (CAppLoadChecker)0x4;
    uVar2 = 1;
  }
  else if (((char)this[0x13] < '\x05') && (0x96 < iVar3)) {
    this[0x13] = (CAppLoadChecker)0x5;
    uVar2 = 1;
  }
  else if (((char)this[0x13] < '\x06') && (0xfa < iVar3)) {
    this[0x13] = (CAppLoadChecker)0x6;
    uVar2 = 1;
  }
  else if ((this[0x13] == (CAppLoadChecker)0x6) && (0xfa < iVar3)) {
    uVar2 = 1;
  }
  else if (((char)this[0x13] < '\0') || (iVar1 < 0xb)) {
    if (((char)this[0x13] < -1) || (iVar1 < 0x1a)) {
      if (((char)this[0x13] < -2) || (iVar1 < 0x29)) {
        if (((char)this[0x13] < -3) || (iVar1 < 0x51)) {
          if (((char)this[0x13] < -4) || (iVar1 < 0x97)) {
            if (((char)this[0x13] < -5) || (iVar1 < 0xfb)) {
              if ((this[0x13] == (CAppLoadChecker)0xfa) && (0xfa < iVar1)) {
                uVar2 = 1;
              }
              else {
                uVar2 = 0;
              }
            }
            else {
              this[0x13] = (CAppLoadChecker)0xfa;
              uVar2 = 1;
            }
          }
          else {
            this[0x13] = (CAppLoadChecker)0xfb;
            uVar2 = 1;
          }
        }
        else {
          this[0x13] = (CAppLoadChecker)0xfc;
          uVar2 = 1;
        }
      }
      else {
        this[0x13] = (CAppLoadChecker)0xfd;
        uVar2 = 1;
      }
    }
    else {
      this[0x13] = (CAppLoadChecker)0xfe;
      uVar2 = 1;
    }
  }
  else {
    this[0x13] = (CAppLoadChecker)0xff;
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## checkLoad_timerq

```asm
// === 086000b0 CAppLoadChecker::checkLoad_timerq  [0x086000b0-0x86002af] ===
 86000b0:	55                   	push   %ebp
 86000b1:	89 e5                	mov    %esp,%ebp
 86000b3:	83 ec 10             	sub    $0x10,%esp
 86000b6:	8b 45 08             	mov    0x8(%ebp),%eax
 86000b9:	8b 40 08             	mov    0x8(%eax),%eax
 86000bc:	8b 55 0c             	mov    0xc(%ebp),%edx
 86000bf:	89 d1                	mov    %edx,%ecx
 86000c1:	29 c1                	sub    %eax,%ecx
 86000c3:	89 c8                	mov    %ecx,%eax
 86000c5:	89 45 f8             	mov    %eax,-0x8(%ebp)
 86000c8:	8b 45 08             	mov    0x8(%ebp),%eax
 86000cb:	8b 40 08             	mov    0x8(%eax),%eax
 86000ce:	2b 45 0c             	sub    0xc(%ebp),%eax
 86000d1:	89 45 fc             	mov    %eax,-0x4(%ebp)
 86000d4:	8b 45 08             	mov    0x8(%ebp),%eax
 86000d7:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 86000db:	84 c0                	test   %al,%al
 86000dd:	7f 17                	jg     86000f6 <_ZN15CAppLoadChecker16checkLoad_timerqEi+0x46>
 86000df:	83 7d f8 0a          	cmpl   $0xa,-0x8(%ebp)
 86000e3:	7e 11                	jle    86000f6 <_ZN15CAppLoadChecker16checkLoad_timerqEi+0x46>
 86000e5:	8b 45 08             	mov    0x8(%ebp),%eax
 86000e8:	c6 40 12 01          	movb   $0x1,0x12(%eax)
 86000ec:	b8 01 00 00 00       	mov    $0x1,%eax
 86000f1:	e9 b7 01 00 00       	jmp    86002ad <_ZN15CAppLoadChecker16checkLoad_timerqEi+0x1fd>
 86000f6:	8b 45 08             	mov    0x8(%ebp),%eax
 86000f9:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 86000fd:	3c 01                	cmp    $0x1,%al
 86000ff:	7f 17                	jg     8600118 <_ZN15CAppLoadChecker16checkLoad_timerqEi+0x68>
 8600101:	83 7d f8 19          	cmpl   $0x19,-0x8(%ebp)
 8600105:	7e 11                	jle    8600118 <_ZN15CAppLoadChecker16checkLoad_timerqEi+0x68>
 8600107:	8b 45 08             	mov    0x8(%ebp),%eax
 860010a:	c6 40 12 02          	movb   $0x2,0x12(%eax)
 860010e:	b8 01 00 00 00       	mov    $0x1,%eax
 8600113:	e9 95 01 00 00       	jmp    86002ad <_ZN15CAppLoadChecker16checkLoad_timerqEi+0x1fd>
 8600118:	8b 45 08             	mov    0x8(%ebp),%eax
 860011b:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 860011f:	3c 02                	cmp    $0x2,%al
 8600121:	7f 17                	jg     860013a <_ZN15CAppLoadChecker16checkLoad_timerqEi+0x8a>
 8600123:	83 7d f8 28          	cmpl   $0x28,-0x8(%ebp)
 8600127:	7e 11                	jle    860013a <_ZN15CAppLoadChecker16checkLoad_timerqEi+0x8a>
 8600129:	8b 45 08             	mov    0x8(%ebp),%eax
 860012c:	c6 40 12 03          	movb   $0x3,0x12(%eax)
 8600130:	b8 01 00 00 00       	mov    $0x1,%eax
 8600135:	e9 73 01 00 00       	jmp    86002ad <_ZN15CAppLoadChecker16checkLoad_timerqEi+0x1fd>
 860013a:	8b 45 08             	mov    0x8(%ebp),%eax
 860013d:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 8600141:	3c 03                	cmp    $0x3,%al
 8600143:	7f 17                	jg     860015c <_ZN15CAppLoadChecker16checkLoad_timerqEi+0xac>
 8600145:	83 7d f8 50          	cmpl   $0x50,-0x8(%ebp)
 8600149:	7e 11                	jle    860015c <_ZN15CAppLoadChecker16checkLoad_timerqEi+0xac>
 860014b:	8b 45 08             	mov    0x8(%ebp),%eax
 860014e:	c6 40 12 04          	movb   $0x4,0x12(%eax)
 8600152:	b8 01 00 00 00       	mov    $0x1,%eax
 8600157:	e9 51 01 00 00       	jmp    86002ad <_ZN15CAppLoadChecker16checkLoad_timerqEi+0x1fd>
 860015c:	8b 45 08             	mov    0x8(%ebp),%eax
 860015f:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 8600163:	3c 04                	cmp    $0x4,%al
 8600165:	7f 1a                	jg     8600181 <_ZN15CAppLoadChecker16checkLoad_timerqEi+0xd1>
 8600167:	81 7d f8 96 00 00 00 	cmpl   $0x96,-0x8(%ebp)
 860016e:	7e 11                	jle    8600181 <_ZN15CAppLoadChecker16checkLoad_timerqEi+0xd1>
 8600170:	8b 45 08             	mov    0x8(%ebp),%eax
 8600173:	c6 40 12 05          	movb   $0x5,0x12(%eax)
 8600177:	b8 01 00 00 00       	mov    $0x1,%eax
 860017c:	e9 2c 01 00 00       	jmp    86002ad <_ZN15CAppLoadChecker16checkLoad_timerqEi+0x1fd>
 8600181:	8b 45 08             	mov    0x8(%ebp),%eax
 8600184:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 8600188:	3c 05                	cmp    $0x5,%al
 860018a:	7f 1a                	jg     86001a6 <_ZN15CAppLoadChecker16checkLoad_timerqEi+0xf6>
 860018c:	81 7d f8 fa 00 00 00 	cmpl   $0xfa,-0x8(%ebp)
 8600193:	7e 11                	jle    86001a6 <_ZN15CAppLoadChecker16checkLoad_timerqEi+0xf6>
 8600195:	8b 45 08             	mov    0x8(%ebp),%eax
 8600198:	c6 40 12 06          	movb   $0x6,0x12(%eax)
 860019c:	b8 01 00 00 00       	mov    $0x1,%eax
 86001a1:	e9 07 01 00 00       	jmp    86002ad <_ZN15CAppLoadChecker16checkLoad_timerqEi+0x1fd>
 86001a6:	8b 45 08             	mov    0x8(%ebp),%eax
 86001a9:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 86001ad:	3c 06                	cmp    $0x6,%al
 86001af:	75 13                	jne    86001c4 <_ZN15CAppLoadChecker16checkLoad_timerqEi+0x114>
 86001b1:	81 7d f8 fa 00 00 00 	cmpl   $0xfa,-0x8(%ebp)
 86001b8:	7e 0a                	jle    86001c4 <_ZN15CAppLoadChecker16checkLoad_timerqEi+0x114>
 86001ba:	b8 01 00 00 00       	mov    $0x1,%eax
 86001bf:	e9 e9 00 00 00       	jmp    86002ad <_ZN15CAppLoadChecker16checkLoad_timerqEi+0x1fd>
 86001c4:	8b 45 08             	mov    0x8(%ebp),%eax
 86001c7:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 86001cb:	84 c0                	test   %al,%al
 86001cd:	78 17                	js     86001e6 <_ZN15CAppLoadChecker16checkLoad_timerqEi+0x136>
 86001cf:	83 7d fc 0a          	cmpl   $0xa,-0x4(%ebp)
 86001d3:	7e 11                	jle    86001e6 <_ZN15CAppLoadChecker16checkLoad_timerqEi+0x136>
 86001d5:	8b 45 08             	mov    0x8(%ebp),%eax
 86001d8:	c6 40 12 ff          	movb   $0xff,0x12(%eax)
 86001dc:	b8 01 00 00 00       	mov    $0x1,%eax
 86001e1:	e9 c7 00 00 00       	jmp    86002ad <_ZN15CAppLoadChecker16checkLoad_timerqEi+0x1fd>
 86001e6:	8b 45 08             	mov    0x8(%ebp),%eax
 86001e9:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 86001ed:	3c ff                	cmp    $0xff,%al
 86001ef:	7c 17                	jl     8600208 <_ZN15CAppLoadChecker16checkLoad_timerqEi+0x158>
 86001f1:	83 7d fc 19          	cmpl   $0x19,-0x4(%ebp)
 86001f5:	7e 11                	jle    8600208 <_ZN15CAppLoadChecker16checkLoad_timerqEi+0x158>
 86001f7:	8b 45 08             	mov    0x8(%ebp),%eax
 86001fa:	c6 40 12 fe          	movb   $0xfe,0x12(%eax)
 86001fe:	b8 01 00 00 00       	mov    $0x1,%eax
 8600203:	e9 a5 00 00 00       	jmp    86002ad <_ZN15CAppLoadChecker16checkLoad_timerqEi+0x1fd>
 8600208:	8b 45 08             	mov    0x8(%ebp),%eax
 860020b:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 860020f:	3c fe                	cmp    $0xfe,%al
 8600211:	7c 17                	jl     860022a <_ZN15CAppLoadChecker16checkLoad_timerqEi+0x17a>
 8600213:	83 7d fc 28          	cmpl   $0x28,-0x4(%ebp)
 8600217:	7e 11                	jle    860022a <_ZN15CAppLoadChecker16checkLoad_timerqEi+0x17a>
 8600219:	8b 45 08             	mov    0x8(%ebp),%eax
 860021c:	c6 40 12 fd          	movb   $0xfd,0x12(%eax)
 8600220:	b8 01 00 00 00       	mov    $0x1,%eax
 8600225:	e9 83 00 00 00       	jmp    86002ad <_ZN15CAppLoadChecker16checkLoad_timerqEi+0x1fd>
 860022a:	8b 45 08             	mov    0x8(%ebp),%eax
 860022d:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 8600231:	3c fd                	cmp    $0xfd,%al
 8600233:	7c 14                	jl     8600249 <_ZN15CAppLoadChecker16checkLoad_timerqEi+0x199>
 8600235:	83 7d fc 50          	cmpl   $0x50,-0x4(%ebp)
 8600239:	7e 0e                	jle    8600249 <_ZN15CAppLoadChecker16checkLoad_timerqEi+0x199>
 860023b:	8b 45 08             	mov    0x8(%ebp),%eax
 860023e:	c6 40 12 fc          	movb   $0xfc,0x12(%eax)
 8600242:	b8 01 00 00 00       	mov    $0x1,%eax
 8600247:	eb 64                	jmp    86002ad <_ZN15CAppLoadChecker16checkLoad_timerqEi+0x1fd>
 8600249:	8b 45 08             	mov    0x8(%ebp),%eax
 860024c:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 8600250:	3c fc                	cmp    $0xfc,%al
 8600252:	7c 17                	jl     860026b <_ZN15CAppLoadChecker16checkLoad_timerqEi+0x1bb>
 8600254:	81 7d fc 96 00 00 00 	cmpl   $0x96,-0x4(%ebp)
 860025b:	7e 0e                	jle    860026b <_ZN15CAppLoadChecker16checkLoad_timerqEi+0x1bb>
 860025d:	8b 45 08             	mov    0x8(%ebp),%eax
 8600260:	c6 40 12 fb          	movb   $0xfb,0x12(%eax)
 8600264:	b8 01 00 00 00       	mov    $0x1,%eax
 8600269:	eb 42                	jmp    86002ad <_ZN15CAppLoadChecker16checkLoad_timerqEi+0x1fd>
 860026b:	8b 45 08             	mov    0x8(%ebp),%eax
 860026e:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 8600272:	3c fb                	cmp    $0xfb,%al
 8600274:	7c 17                	jl     860028d <_ZN15CAppLoadChecker16checkLoad_timerqEi+0x1dd>
 8600276:	81 7d fc fa 00 00 00 	cmpl   $0xfa,-0x4(%ebp)
 860027d:	7e 0e                	jle    860028d <_ZN15CAppLoadChecker16checkLoad_timerqEi+0x1dd>
 860027f:	8b 45 08             	mov    0x8(%ebp),%eax
 8600282:	c6 40 12 fa          	movb   $0xfa,0x12(%eax)
 8600286:	b8 01 00 00 00       	mov    $0x1,%eax
 860028b:	eb 20                	jmp    86002ad <_ZN15CAppLoadChecker16checkLoad_timerqEi+0x1fd>
 860028d:	8b 45 08             	mov    0x8(%ebp),%eax
 8600290:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 8600294:	3c fa                	cmp    $0xfa,%al
 8600296:	75 10                	jne    86002a8 <_ZN15CAppLoadChecker16checkLoad_timerqEi+0x1f8>
 8600298:	81 7d fc fa 00 00 00 	cmpl   $0xfa,-0x4(%ebp)
 860029f:	7e 07                	jle    86002a8 <_ZN15CAppLoadChecker16checkLoad_timerqEi+0x1f8>
 86002a1:	b8 01 00 00 00       	mov    $0x1,%eax
 86002a6:	eb 05                	jmp    86002ad <_ZN15CAppLoadChecker16checkLoad_timerqEi+0x1fd>
 86002a8:	b8 00 00 00 00       	mov    $0x0,%eax
 86002ad:	c9                   	leave
 86002ae:	c3                   	ret
 86002af:	90                   	nop

```

```c
// CAppLoadChecker::checkLoad_timerq @ 0x86000b0

/* CAppLoadChecker::checkLoad_timerq(int) */

undefined4 __thiscall CAppLoadChecker::checkLoad_timerq(CAppLoadChecker *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = param_1 - *(int *)(this + 8);
  iVar1 = *(int *)(this + 8) - param_1;
  if (((char)this[0x12] < '\x01') && (10 < iVar3)) {
    this[0x12] = (CAppLoadChecker)0x1;
    uVar2 = 1;
  }
  else if (((char)this[0x12] < '\x02') && (0x19 < iVar3)) {
    this[0x12] = (CAppLoadChecker)0x2;
    uVar2 = 1;
  }
  else if (((char)this[0x12] < '\x03') && (0x28 < iVar3)) {
    this[0x12] = (CAppLoadChecker)0x3;
    uVar2 = 1;
  }
  else if (((char)this[0x12] < '\x04') && (0x50 < iVar3)) {
    this[0x12] = (CAppLoadChecker)0x4;
    uVar2 = 1;
  }
  else if (((char)this[0x12] < '\x05') && (0x96 < iVar3)) {
    this[0x12] = (CAppLoadChecker)0x5;
    uVar2 = 1;
  }
  else if (((char)this[0x12] < '\x06') && (0xfa < iVar3)) {
    this[0x12] = (CAppLoadChecker)0x6;
    uVar2 = 1;
  }
  else if ((this[0x12] == (CAppLoadChecker)0x6) && (0xfa < iVar3)) {
    uVar2 = 1;
  }
  else if (((char)this[0x12] < '\0') || (iVar1 < 0xb)) {
    if (((char)this[0x12] < -1) || (iVar1 < 0x1a)) {
      if (((char)this[0x12] < -2) || (iVar1 < 0x29)) {
        if (((char)this[0x12] < -3) || (iVar1 < 0x51)) {
          if (((char)this[0x12] < -4) || (iVar1 < 0x97)) {
            if (((char)this[0x12] < -5) || (iVar1 < 0xfb)) {
              if ((this[0x12] == (CAppLoadChecker)0xfa) && (0xfa < iVar1)) {
                uVar2 = 1;
              }
              else {
                uVar2 = 0;
              }
            }
            else {
              this[0x12] = (CAppLoadChecker)0xfa;
              uVar2 = 1;
            }
          }
          else {
            this[0x12] = (CAppLoadChecker)0xfb;
            uVar2 = 1;
          }
        }
        else {
          this[0x12] = (CAppLoadChecker)0xfc;
          uVar2 = 1;
        }
      }
      else {
        this[0x12] = (CAppLoadChecker)0xfd;
        uVar2 = 1;
      }
    }
    else {
      this[0x12] = (CAppLoadChecker)0xfe;
      uVar2 = 1;
    }
  }
  else {
    this[0x12] = (CAppLoadChecker)0xff;
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## setQueue

```asm
// === 086004b0 CAppLoadChecker::setQueue  [0x086004b0-0x86004d7] ===
 86004b0:	55                   	push   %ebp
 86004b1:	89 e5                	mov    %esp,%ebp
 86004b3:	8b 45 08             	mov    0x8(%ebp),%eax
 86004b6:	8b 55 0c             	mov    0xc(%ebp),%edx
 86004b9:	89 10                	mov    %edx,(%eax)
 86004bb:	8b 45 08             	mov    0x8(%ebp),%eax
 86004be:	8b 55 10             	mov    0x10(%ebp),%edx
 86004c1:	89 50 04             	mov    %edx,0x4(%eax)
 86004c4:	8b 45 08             	mov    0x8(%ebp),%eax
 86004c7:	8b 55 14             	mov    0x14(%ebp),%edx
 86004ca:	89 50 08             	mov    %edx,0x8(%eax)
 86004cd:	8b 45 08             	mov    0x8(%ebp),%eax
 86004d0:	8b 55 18             	mov    0x18(%ebp),%edx
 86004d3:	89 50 0c             	mov    %edx,0xc(%eax)
 86004d6:	5d                   	pop    %ebp
 86004d7:	c3                   	ret

```

```c
// CAppLoadChecker::setQueue @ 0x86004b0

/* CAppLoadChecker::setQueue(int, int, int, int) */

void __thiscall
CAppLoadChecker::setQueue(CAppLoadChecker *this,int param_1,int param_2,int param_3,int param_4)

{
  *(int *)this = param_1;
  *(int *)(this + 4) = param_2;
  *(int *)(this + 8) = param_3;
  *(int *)(this + 0xc) = param_4;
  return;
}

```

