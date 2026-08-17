# DB_LoadExpertJob

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 08436464 DB_LoadExpertJob::dispatch  [0x08436464-0x84367f3] ===
 8436464:	55                   	push   %ebp
 8436465:	89 e5                	mov    %esp,%ebp
 8436467:	56                   	push   %esi
 8436468:	53                   	push   %ebx
 8436469:	83 ec 30             	sub    $0x30,%esp
 843646c:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8436471:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8436478:	00 
 8436479:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8436480:	00 
 8436481:	89 04 24             	mov    %eax,(%esp)
 8436484:	e8 b5 ed fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8436489:	89 45 ec             	mov    %eax,-0x14(%ebp)
 843648c:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8436493:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8436496:	89 44 24 04          	mov    %eax,0x4(%esp)
 843649a:	8b 45 14             	mov    0x14(%ebp),%eax
 843649d:	89 04 24             	mov    %eax,(%esp)
 84364a0:	e8 f1 62 1e 00       	call   861c796 <_ZN6StreamrsERj>
 84364a5:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84364a8:	89 44 24 08          	mov    %eax,0x8(%esp)
 84364ac:	c7 44 24 04 54 35 c5 	movl   $0x8c53554,0x4(%esp)
 84364b3:	08 
 84364b4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84364b7:	89 04 24             	mov    %eax,(%esp)
 84364ba:	e8 01 dd fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84364bf:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84364c6:	00 
 84364c7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84364ca:	89 04 24             	mov    %eax,(%esp)
 84364cd:	e8 54 de fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 84364d2:	83 f0 01             	xor    $0x1,%eax
 84364d5:	84 c0                	test   %al,%al
 84364d7:	74 0a                	je     84364e3 <_ZN16DB_LoadExpertJob8dispatchEiiP6Stream+0x7f>
 84364d9:	bb 00 00 00 00       	mov    $0x0,%ebx
 84364de:	e9 08 03 00 00       	jmp    84367eb <_ZN16DB_LoadExpertJob8dispatchEiiP6Stream+0x387>
 84364e3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84364e6:	89 04 24             	mov    %eax,(%esp)
 84364e9:	e8 7e be ca ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 84364ee:	85 c0                	test   %eax,%eax
 84364f0:	0f 94 c0             	sete   %al
 84364f3:	84 c0                	test   %al,%al
 84364f5:	0f 84 e5 00 00 00    	je     84365e0 <_ZN16DB_LoadExpertJob8dispatchEiiP6Stream+0x17c>
 84364fb:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8436500:	c7 44 24 08 b2 81 00 	movl   $0x81b2,0x8(%esp)
 8436507:	00 
 8436508:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 843650f:	08 
 8436510:	89 04 24             	mov    %eax,(%esp)
 8436513:	e8 6e 95 e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8436518:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 843651f:	00 
 8436520:	89 44 24 04          	mov    %eax,0x4(%esp)
 8436524:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8436527:	89 04 24             	mov    %eax,(%esp)
 843652a:	e8 f7 26 c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 843652f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8436532:	89 04 24             	mov    %eax,(%esp)
 8436535:	e8 0c 27 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843653a:	8b 55 0c             	mov    0xc(%ebp),%edx
 843653d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8436541:	89 04 24             	mov    %eax,(%esp)
 8436544:	e8 0d 27 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8436549:	8d 45 d8             	lea    -0x28(%ebp),%eax
 843654c:	89 04 24             	mov    %eax,(%esp)
 843654f:	e8 f2 26 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8436554:	8b 55 10             	mov    0x10(%ebp),%edx
 8436557:	89 54 24 04          	mov    %edx,0x4(%esp)
 843655b:	89 04 24             	mov    %eax,(%esp)
 843655e:	e8 f3 26 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8436563:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8436566:	89 04 24             	mov    %eax,(%esp)
 8436569:	e8 e0 26 c9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 843656e:	89 04 24             	mov    %eax,(%esp)
 8436571:	e8 08 53 ef ff       	call   832b87e <_ZN12CStreamGuard11GetInBufferI14SIG_EXPERT_JOBEEPT_v>
 8436576:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8436579:	c7 44 24 08 30 00 00 	movl   $0x30,0x8(%esp)
 8436580:	00 
 8436581:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8436588:	00 
 8436589:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843658c:	89 04 24             	mov    %eax,(%esp)
 843658f:	e8 2c 77 c4 ff       	call   807dcc0 <memset@plt>
 8436594:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8436599:	8d 55 d8             	lea    -0x28(%ebp),%edx
 843659c:	89 54 24 08          	mov    %edx,0x8(%esp)
 84365a0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84365a7:	00 
 84365a8:	89 04 24             	mov    %eax,(%esp)
 84365ab:	e8 2e aa 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84365b0:	bb 01 00 00 00       	mov    $0x1,%ebx
 84365b5:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84365b8:	89 04 24             	mov    %eax,(%esp)
 84365bb:	e8 12 63 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84365c0:	e9 26 02 00 00       	jmp    84367eb <_ZN16DB_LoadExpertJob8dispatchEiiP6Stream+0x387>
 84365c5:	89 d3                	mov    %edx,%ebx
 84365c7:	89 c6                	mov    %eax,%esi
 84365c9:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84365cc:	89 04 24             	mov    %eax,(%esp)
 84365cf:	e8 fe 62 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84365d4:	89 f0                	mov    %esi,%eax
 84365d6:	89 da                	mov    %ebx,%edx
 84365d8:	89 04 24             	mov    %eax,(%esp)
 84365db:	e8 70 d1 6a 00       	call   8ae3750 <_Unwind_Resume>
 84365e0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84365e3:	89 04 24             	mov    %eax,(%esp)
 84365e6:	e8 d1 de fb ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 84365eb:	83 f0 01             	xor    $0x1,%eax
 84365ee:	84 c0                	test   %al,%al
 84365f0:	74 0a                	je     84365fc <_ZN16DB_LoadExpertJob8dispatchEiiP6Stream+0x198>
 84365f2:	bb 00 00 00 00       	mov    $0x0,%ebx
 84365f7:	e9 ef 01 00 00       	jmp    84367eb <_ZN16DB_LoadExpertJob8dispatchEiiP6Stream+0x387>
 84365fc:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8436601:	c7 44 24 08 c2 81 00 	movl   $0x81c2,0x8(%esp)
 8436608:	00 
 8436609:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8436610:	08 
 8436611:	89 04 24             	mov    %eax,(%esp)
 8436614:	e8 6d 94 e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8436619:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8436620:	00 
 8436621:	89 44 24 04          	mov    %eax,0x4(%esp)
 8436625:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8436628:	89 04 24             	mov    %eax,(%esp)
 843662b:	e8 f6 25 c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8436630:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8436633:	89 04 24             	mov    %eax,(%esp)
 8436636:	e8 0b 26 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843663b:	8b 55 0c             	mov    0xc(%ebp),%edx
 843663e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8436642:	89 04 24             	mov    %eax,(%esp)
 8436645:	e8 0c 26 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843664a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 843664d:	89 04 24             	mov    %eax,(%esp)
 8436650:	e8 f1 25 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8436655:	8b 55 10             	mov    0x10(%ebp),%edx
 8436658:	89 54 24 04          	mov    %edx,0x4(%esp)
 843665c:	89 04 24             	mov    %eax,(%esp)
 843665f:	e8 f2 25 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8436664:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8436667:	89 04 24             	mov    %eax,(%esp)
 843666a:	e8 df 25 c9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 843666f:	89 04 24             	mov    %eax,(%esp)
 8436672:	e8 07 52 ef ff       	call   832b87e <_ZN12CStreamGuard11GetInBufferI14SIG_EXPERT_JOBEEPT_v>
 8436677:	89 45 f0             	mov    %eax,-0x10(%ebp)
 843667a:	c7 44 24 08 30 00 00 	movl   $0x30,0x8(%esp)
 8436681:	00 
 8436682:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8436689:	00 
 843668a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843668d:	89 04 24             	mov    %eax,(%esp)
 8436690:	e8 2b 76 c4 ff       	call   807dcc0 <memset@plt>
 8436695:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8436698:	83 c0 04             	add    $0x4,%eax
 843669b:	89 44 24 08          	mov    %eax,0x8(%esp)
 843669f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84366a6:	00 
 84366a7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84366aa:	89 04 24             	mov    %eax,(%esp)
 84366ad:	e8 de 02 ce ff       	call   8116990 <_ZN5MySQL10get_ushortEiRt>
 84366b2:	83 f0 01             	xor    $0x1,%eax
 84366b5:	84 c0                	test   %al,%al
 84366b7:	74 1e                	je     84366d7 <_ZN16DB_LoadExpertJob8dispatchEiiP6Stream+0x273>
 84366b9:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 84366be:	8d 55 e0             	lea    -0x20(%ebp),%edx
 84366c1:	89 54 24 04          	mov    %edx,0x4(%esp)
 84366c5:	89 04 24             	mov    %eax,(%esp)
 84366c8:	e8 b3 a9 cc ff       	call   8101080 <_ZN10StreamPool4FreeER12CStreamGuard>
 84366cd:	bb 00 00 00 00       	mov    $0x0,%ebx
 84366d2:	e9 09 01 00 00       	jmp    84367e0 <_ZN16DB_LoadExpertJob8dispatchEiiP6Stream+0x37c>
 84366d7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84366da:	83 c0 08             	add    $0x8,%eax
 84366dd:	89 44 24 08          	mov    %eax,0x8(%esp)
 84366e1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84366e8:	00 
 84366e9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84366ec:	89 04 24             	mov    %eax,(%esp)
 84366ef:	e8 38 02 ce ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 84366f4:	83 f0 01             	xor    $0x1,%eax
 84366f7:	84 c0                	test   %al,%al
 84366f9:	74 1e                	je     8436719 <_ZN16DB_LoadExpertJob8dispatchEiiP6Stream+0x2b5>
 84366fb:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8436700:	8d 55 e0             	lea    -0x20(%ebp),%edx
 8436703:	89 54 24 04          	mov    %edx,0x4(%esp)
 8436707:	89 04 24             	mov    %eax,(%esp)
 843670a:	e8 71 a9 cc ff       	call   8101080 <_ZN10StreamPool4FreeER12CStreamGuard>
 843670f:	bb 00 00 00 00       	mov    $0x0,%ebx
 8436714:	e9 c7 00 00 00       	jmp    84367e0 <_ZN16DB_LoadExpertJob8dispatchEiiP6Stream+0x37c>
 8436719:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843671c:	83 c0 0c             	add    $0xc,%eax
 843671f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8436723:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843672a:	00 
 843672b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 843672e:	89 04 24             	mov    %eax,(%esp)
 8436731:	e8 f6 01 ce ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8436736:	83 f0 01             	xor    $0x1,%eax
 8436739:	84 c0                	test   %al,%al
 843673b:	74 1e                	je     843675b <_ZN16DB_LoadExpertJob8dispatchEiiP6Stream+0x2f7>
 843673d:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8436742:	8d 55 e0             	lea    -0x20(%ebp),%edx
 8436745:	89 54 24 04          	mov    %edx,0x4(%esp)
 8436749:	89 04 24             	mov    %eax,(%esp)
 843674c:	e8 2f a9 cc ff       	call   8101080 <_ZN10StreamPool4FreeER12CStreamGuard>
 8436751:	bb 00 00 00 00       	mov    $0x0,%ebx
 8436756:	e9 85 00 00 00       	jmp    84367e0 <_ZN16DB_LoadExpertJob8dispatchEiiP6Stream+0x37c>
 843675b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843675e:	83 c0 10             	add    $0x10,%eax
 8436761:	c7 44 24 0c 1e 00 00 	movl   $0x1e,0xc(%esp)
 8436768:	00 
 8436769:	89 44 24 08          	mov    %eax,0x8(%esp)
 843676d:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8436774:	00 
 8436775:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8436778:	89 04 24             	mov    %eax,(%esp)
 843677b:	e8 9a eb ce ff       	call   812531a <_ZN5MySQL10get_binaryEiPvi>
 8436780:	83 f0 01             	xor    $0x1,%eax
 8436783:	84 c0                	test   %al,%al
 8436785:	74 1b                	je     84367a2 <_ZN16DB_LoadExpertJob8dispatchEiiP6Stream+0x33e>
 8436787:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 843678c:	8d 55 e0             	lea    -0x20(%ebp),%edx
 843678f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8436793:	89 04 24             	mov    %eax,(%esp)
 8436796:	e8 e5 a8 cc ff       	call   8101080 <_ZN10StreamPool4FreeER12CStreamGuard>
 843679b:	bb 00 00 00 00       	mov    $0x0,%ebx
 84367a0:	eb 3e                	jmp    84367e0 <_ZN16DB_LoadExpertJob8dispatchEiiP6Stream+0x37c>
 84367a2:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84367a7:	8d 55 e0             	lea    -0x20(%ebp),%edx
 84367aa:	89 54 24 08          	mov    %edx,0x8(%esp)
 84367ae:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84367b5:	00 
 84367b6:	89 04 24             	mov    %eax,(%esp)
 84367b9:	e8 20 a8 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84367be:	bb 01 00 00 00       	mov    $0x1,%ebx
 84367c3:	eb 1b                	jmp    84367e0 <_ZN16DB_LoadExpertJob8dispatchEiiP6Stream+0x37c>
 84367c5:	89 d3                	mov    %edx,%ebx
 84367c7:	89 c6                	mov    %eax,%esi
 84367c9:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84367cc:	89 04 24             	mov    %eax,(%esp)
 84367cf:	e8 fe 60 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84367d4:	89 f0                	mov    %esi,%eax
 84367d6:	89 da                	mov    %ebx,%edx
 84367d8:	89 04 24             	mov    %eax,(%esp)
 84367db:	e8 70 cf 6a 00       	call   8ae3750 <_Unwind_Resume>
 84367e0:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84367e3:	89 04 24             	mov    %eax,(%esp)
 84367e6:	e8 e7 60 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84367eb:	89 d8                	mov    %ebx,%eax
 84367ed:	83 c4 30             	add    $0x30,%esp
 84367f0:	5b                   	pop    %ebx
 84367f1:	5e                   	pop    %esi
 84367f2:	5d                   	pop    %ebp
 84367f3:	c3                   	ret

```

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

