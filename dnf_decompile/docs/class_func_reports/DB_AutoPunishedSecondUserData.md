# DB_AutoPunishedSecondUserData

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0843a462 DB_AutoPunishedSecondUserData::dispatch  [0x0843a462-0x843a78f] ===
 843a462:	55                   	push   %ebp
 843a463:	89 e5                	mov    %esp,%ebp
 843a465:	56                   	push   %esi
 843a466:	53                   	push   %ebx
 843a467:	83 ec 40             	sub    $0x40,%esp
 843a46a:	c6 45 e7 00          	movb   $0x0,-0x19(%ebp)
 843a46e:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 843a473:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 843a47a:	00 
 843a47b:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 843a482:	00 
 843a483:	89 04 24             	mov    %eax,(%esp)
 843a486:	e8 b3 ad fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 843a48b:	89 45 e8             	mov    %eax,-0x18(%ebp)
 843a48e:	8b 45 14             	mov    0x14(%ebp),%eax
 843a491:	89 04 24             	mov    %eax,(%esp)
 843a494:	e8 77 94 01 00       	call   8453910 <_ZN6Stream12GetOutBufferI20SIG_SECOND_USER_DATAEEPT_v>
 843a499:	89 45 ec             	mov    %eax,-0x14(%ebp)
 843a49c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 843a49f:	8b 00                	mov    (%eax),%eax
 843a4a1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843a4a8:	00 
 843a4a9:	89 04 24             	mov    %eax,(%esp)
 843a4ac:	e8 9a eb cc ff       	call   810904b <_Z14NumberToStringji>
 843a4b1:	89 44 24 08          	mov    %eax,0x8(%esp)
 843a4b5:	c7 44 24 04 24 4c c5 	movl   $0x8c54c24,0x4(%esp)
 843a4bc:	08 
 843a4bd:	8b 45 e8             	mov    -0x18(%ebp),%eax
 843a4c0:	89 04 24             	mov    %eax,(%esp)
 843a4c3:	e8 f8 9c fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843a4c8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843a4cf:	00 
 843a4d0:	8b 45 e8             	mov    -0x18(%ebp),%eax
 843a4d3:	89 04 24             	mov    %eax,(%esp)
 843a4d6:	e8 4b 9e fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843a4db:	83 f0 01             	xor    $0x1,%eax
 843a4de:	84 c0                	test   %al,%al
 843a4e0:	75 0f                	jne    843a4f1 <_ZN29DB_AutoPunishedSecondUserData8dispatchEiiP6Stream+0x8f>
 843a4e2:	8b 45 e8             	mov    -0x18(%ebp),%eax
 843a4e5:	89 04 24             	mov    %eax,(%esp)
 843a4e8:	e8 7f 7e ca ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 843a4ed:	85 c0                	test   %eax,%eax
 843a4ef:	75 07                	jne    843a4f8 <_ZN29DB_AutoPunishedSecondUserData8dispatchEiiP6Stream+0x96>
 843a4f1:	b8 01 00 00 00       	mov    $0x1,%eax
 843a4f6:	eb 05                	jmp    843a4fd <_ZN29DB_AutoPunishedSecondUserData8dispatchEiiP6Stream+0x9b>
 843a4f8:	b8 00 00 00 00       	mov    $0x0,%eax
 843a4fd:	84 c0                	test   %al,%al
 843a4ff:	0f 84 23 01 00 00    	je     843a628 <_ZN29DB_AutoPunishedSecondUserData8dispatchEiiP6Stream+0x1c6>
 843a505:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 843a50a:	c7 44 24 08 f1 88 00 	movl   $0x88f1,0x8(%esp)
 843a511:	00 
 843a512:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 843a519:	08 
 843a51a:	89 04 24             	mov    %eax,(%esp)
 843a51d:	e8 64 55 e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 843a522:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 843a529:	00 
 843a52a:	89 44 24 04          	mov    %eax,0x4(%esp)
 843a52e:	8d 45 c8             	lea    -0x38(%ebp),%eax
 843a531:	89 04 24             	mov    %eax,(%esp)
 843a534:	e8 ed e6 c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 843a539:	8d 45 c8             	lea    -0x38(%ebp),%eax
 843a53c:	89 04 24             	mov    %eax,(%esp)
 843a53f:	e8 02 e7 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843a544:	c7 44 24 04 ca 01 00 	movl   $0x1ca,0x4(%esp)
 843a54b:	00 
 843a54c:	89 04 24             	mov    %eax,(%esp)
 843a54f:	e8 02 e7 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843a554:	8b 45 ec             	mov    -0x14(%ebp),%eax
 843a557:	8b 40 0c             	mov    0xc(%eax),%eax
 843a55a:	89 c3                	mov    %eax,%ebx
 843a55c:	8d 45 c8             	lea    -0x38(%ebp),%eax
 843a55f:	89 04 24             	mov    %eax,(%esp)
 843a562:	e8 df e6 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843a567:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 843a56b:	89 04 24             	mov    %eax,(%esp)
 843a56e:	e8 e3 e6 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843a573:	8d 45 c8             	lea    -0x38(%ebp),%eax
 843a576:	89 04 24             	mov    %eax,(%esp)
 843a579:	e8 d0 e6 c8 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 843a57e:	89 04 24             	mov    %eax,(%esp)
 843a581:	e8 de 93 01 00       	call   8453964 <_ZN12CStreamGuard11GetInBufferI24SIG_SECOND_USER_DATA_SETEEPT_v>
 843a586:	89 45 f4             	mov    %eax,-0xc(%ebp)
 843a589:	c7 44 24 08 18 00 00 	movl   $0x18,0x8(%esp)
 843a590:	00 
 843a591:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843a598:	00 
 843a599:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843a59c:	89 04 24             	mov    %eax,(%esp)
 843a59f:	e8 1c 37 c4 ff       	call   807dcc0 <memset@plt>
 843a5a4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 843a5a7:	8b 50 10             	mov    0x10(%eax),%edx
 843a5aa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843a5ad:	89 50 14             	mov    %edx,0x14(%eax)
 843a5b0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 843a5b3:	8b 50 08             	mov    0x8(%eax),%edx
 843a5b6:	8b 40 04             	mov    0x4(%eax),%eax
 843a5b9:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 843a5bc:	89 01                	mov    %eax,(%ecx)
 843a5be:	89 51 04             	mov    %edx,0x4(%ecx)
 843a5c1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843a5c4:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 843a5cb:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 843a5d2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843a5d5:	c7 40 10 01 00 00 00 	movl   $0x1,0x10(%eax)
 843a5dc:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 843a5e1:	8d 55 c8             	lea    -0x38(%ebp),%edx
 843a5e4:	89 54 24 08          	mov    %edx,0x8(%esp)
 843a5e8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843a5ef:	00 
 843a5f0:	89 04 24             	mov    %eax,(%esp)
 843a5f3:	e8 e6 69 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 843a5f8:	bb 00 00 00 00       	mov    $0x0,%ebx
 843a5fd:	8d 45 c8             	lea    -0x38(%ebp),%eax
 843a600:	89 04 24             	mov    %eax,(%esp)
 843a603:	e8 ca 22 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843a608:	e9 7a 01 00 00       	jmp    843a787 <_ZN29DB_AutoPunishedSecondUserData8dispatchEiiP6Stream+0x325>
 843a60d:	89 d3                	mov    %edx,%ebx
 843a60f:	89 c6                	mov    %eax,%esi
 843a611:	8d 45 c8             	lea    -0x38(%ebp),%eax
 843a614:	89 04 24             	mov    %eax,(%esp)
 843a617:	e8 b6 22 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843a61c:	89 f0                	mov    %esi,%eax
 843a61e:	89 da                	mov    %ebx,%edx
 843a620:	89 04 24             	mov    %eax,(%esp)
 843a623:	e8 28 91 6a 00       	call   8ae3750 <_Unwind_Resume>
 843a628:	8b 45 e8             	mov    -0x18(%ebp),%eax
 843a62b:	89 04 24             	mov    %eax,(%esp)
 843a62e:	e8 89 9e fb ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 843a633:	8d 45 e0             	lea    -0x20(%ebp),%eax
 843a636:	89 44 24 08          	mov    %eax,0x8(%esp)
 843a63a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843a641:	00 
 843a642:	8b 45 e8             	mov    -0x18(%ebp),%eax
 843a645:	89 04 24             	mov    %eax,(%esp)
 843a648:	e8 a5 7c ca ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 843a64d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 843a650:	89 44 24 08          	mov    %eax,0x8(%esp)
 843a654:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843a65b:	00 
 843a65c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 843a65f:	89 04 24             	mov    %eax,(%esp)
 843a662:	e8 61 ae d3 ff       	call   81754c8 <_ZN5MySQL13get_ulonglongEiRy>
 843a667:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 843a66c:	c7 44 24 08 01 89 00 	movl   $0x8901,0x8(%esp)
 843a673:	00 
 843a674:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 843a67b:	08 
 843a67c:	89 04 24             	mov    %eax,(%esp)
 843a67f:	e8 02 54 e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 843a684:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 843a68b:	00 
 843a68c:	89 44 24 04          	mov    %eax,0x4(%esp)
 843a690:	8d 45 d0             	lea    -0x30(%ebp),%eax
 843a693:	89 04 24             	mov    %eax,(%esp)
 843a696:	e8 8b e5 c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 843a69b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 843a69e:	89 04 24             	mov    %eax,(%esp)
 843a6a1:	e8 a0 e5 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843a6a6:	c7 44 24 04 ca 01 00 	movl   $0x1ca,0x4(%esp)
 843a6ad:	00 
 843a6ae:	89 04 24             	mov    %eax,(%esp)
 843a6b1:	e8 a0 e5 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843a6b6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 843a6b9:	8b 40 0c             	mov    0xc(%eax),%eax
 843a6bc:	89 c3                	mov    %eax,%ebx
 843a6be:	8d 45 d0             	lea    -0x30(%ebp),%eax
 843a6c1:	89 04 24             	mov    %eax,(%esp)
 843a6c4:	e8 7d e5 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843a6c9:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 843a6cd:	89 04 24             	mov    %eax,(%esp)
 843a6d0:	e8 81 e5 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843a6d5:	8d 45 d0             	lea    -0x30(%ebp),%eax
 843a6d8:	89 04 24             	mov    %eax,(%esp)
 843a6db:	e8 6e e5 c8 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 843a6e0:	89 04 24             	mov    %eax,(%esp)
 843a6e3:	e8 7c 92 01 00       	call   8453964 <_ZN12CStreamGuard11GetInBufferI24SIG_SECOND_USER_DATA_SETEEPT_v>
 843a6e8:	89 45 f0             	mov    %eax,-0x10(%ebp)
 843a6eb:	c7 44 24 08 18 00 00 	movl   $0x18,0x8(%esp)
 843a6f2:	00 
 843a6f3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843a6fa:	00 
 843a6fb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843a6fe:	89 04 24             	mov    %eax,(%esp)
 843a701:	e8 ba 35 c4 ff       	call   807dcc0 <memset@plt>
 843a706:	8b 45 ec             	mov    -0x14(%ebp),%eax
 843a709:	8b 50 10             	mov    0x10(%eax),%edx
 843a70c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843a70f:	89 50 14             	mov    %edx,0x14(%eax)
 843a712:	8b 45 ec             	mov    -0x14(%ebp),%eax
 843a715:	8b 50 08             	mov    0x8(%eax),%edx
 843a718:	8b 40 04             	mov    0x4(%eax),%eax
 843a71b:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 843a71e:	89 01                	mov    %eax,(%ecx)
 843a720:	89 51 04             	mov    %edx,0x4(%ecx)
 843a723:	8b 45 d8             	mov    -0x28(%ebp),%eax
 843a726:	8b 55 dc             	mov    -0x24(%ebp),%edx
 843a729:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 843a72c:	89 41 08             	mov    %eax,0x8(%ecx)
 843a72f:	89 51 0c             	mov    %edx,0xc(%ecx)
 843a732:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843a735:	8d 50 01             	lea    0x1(%eax),%edx
 843a738:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843a73b:	89 50 10             	mov    %edx,0x10(%eax)
 843a73e:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 843a743:	8d 55 d0             	lea    -0x30(%ebp),%edx
 843a746:	89 54 24 08          	mov    %edx,0x8(%esp)
 843a74a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843a751:	00 
 843a752:	89 04 24             	mov    %eax,(%esp)
 843a755:	e8 84 68 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 843a75a:	bb 01 00 00 00       	mov    $0x1,%ebx
 843a75f:	8d 45 d0             	lea    -0x30(%ebp),%eax
 843a762:	89 04 24             	mov    %eax,(%esp)
 843a765:	e8 68 21 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843a76a:	eb 1b                	jmp    843a787 <_ZN29DB_AutoPunishedSecondUserData8dispatchEiiP6Stream+0x325>
 843a76c:	89 d3                	mov    %edx,%ebx
 843a76e:	89 c6                	mov    %eax,%esi
 843a770:	8d 45 d0             	lea    -0x30(%ebp),%eax
 843a773:	89 04 24             	mov    %eax,(%esp)
 843a776:	e8 57 21 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843a77b:	89 f0                	mov    %esi,%eax
 843a77d:	89 da                	mov    %ebx,%edx
 843a77f:	89 04 24             	mov    %eax,(%esp)
 843a782:	e8 c9 8f 6a 00       	call   8ae3750 <_Unwind_Resume>
 843a787:	89 d8                	mov    %ebx,%eax
 843a789:	83 c4 40             	add    $0x40,%esp
 843a78c:	5b                   	pop    %ebx
 843a78d:	5e                   	pop    %esi
 843a78e:	5d                   	pop    %ebp
 843a78f:	c3                   	ret

```

```c
// DB_AutoPunishedSecondUserData::dispatch @ 0x843a462

/* DB_AutoPunishedSecondUserData::dispatch(int, int, Stream*) */

bool DB_AutoPunishedSecondUserData::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  Stream *pSVar5;
  CStreamGuard *pCVar6;
  Stream *in_stack_00000010;
  CStreamGuard local_3c [8];
  CStreamGuard local_34 [8];
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_1d;
  MySQL *local_1c;
  SIG_SECOND_USER_DATA *local_18;
  SIG_SECOND_USER_DATA_SET *local_14;
  SIG_SECOND_USER_DATA_SET *local_10;
  
  local_1d = 0;
  local_1c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_18 = Stream::GetOutBuffer<SIG_SECOND_USER_DATA>(in_stack_00000010);
  uVar3 = NumberToString(*(uint *)local_18,0);
  MySQL::set_query(local_1c,"seLect trade_cnt,trade_gold from auto_punish_second_user where m_id=%s"
                   ,uVar3);
  cVar2 = MySQL::exec(local_1c,true);
  if (cVar2 == '\x01') {
    iVar4 = MySQL::get_n_rows(local_1c);
    if (iVar4 != 0) {
      bVar1 = false;
      goto LAB_0843a4fd;
    }
  }
  bVar1 = true;
LAB_0843a4fd:
  if (!bVar1) {
    MySQL::fetch(local_1c);
    MySQL::get_uint(local_1c,0,&local_24);
    MySQL::get_ulonglong(local_1c,1,(ulonglong *)&local_2c);
    pSVar5 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x8901);
    CStreamGuard::CStreamGuard(local_34,pSVar5,true);
    pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_34);
                    /* try { // try from 0843a6b1 to 0843a759 has its CatchHandler @ 0843a76c */
    CStreamGuard::operator<<(pCVar6,0x1ca);
    iVar4 = *(int *)(local_18 + 0xc);
    pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_34);
    CStreamGuard::operator<<(pCVar6,iVar4);
    pCVar6 = (CStreamGuard *)CStreamGuard::operator->(local_34);
    local_14 = CStreamGuard::GetInBuffer<SIG_SECOND_USER_DATA_SET>(pCVar6);
    memset(local_14,0,0x18);
    *(undefined4 *)(local_14 + 0x14) = *(undefined4 *)(local_18 + 0x10);
    uVar3 = *(undefined4 *)(local_18 + 8);
    *(undefined4 *)local_14 = *(undefined4 *)(local_18 + 4);
    *(undefined4 *)(local_14 + 4) = uVar3;
    *(undefined4 *)(local_14 + 8) = local_2c;
    *(undefined4 *)(local_14 + 0xc) = local_28;
    *(uint *)(local_14 + 0x10) = local_24 + 1;
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_34);
    CStreamGuard::~CStreamGuard(local_34);
  }
  else {
    pSVar5 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x88f1);
    CStreamGuard::CStreamGuard(local_3c,pSVar5,true);
    pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_3c);
                    /* try { // try from 0843a54f to 0843a5f7 has its CatchHandler @ 0843a60d */
    CStreamGuard::operator<<(pCVar6,0x1ca);
    iVar4 = *(int *)(local_18 + 0xc);
    pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_3c);
    CStreamGuard::operator<<(pCVar6,iVar4);
    pCVar6 = (CStreamGuard *)CStreamGuard::operator->(local_3c);
    local_10 = CStreamGuard::GetInBuffer<SIG_SECOND_USER_DATA_SET>(pCVar6);
    memset(local_10,0,0x18);
    *(undefined4 *)(local_10 + 0x14) = *(undefined4 *)(local_18 + 0x10);
    uVar3 = *(undefined4 *)(local_18 + 8);
    *(undefined4 *)local_10 = *(undefined4 *)(local_18 + 4);
    *(undefined4 *)(local_10 + 4) = uVar3;
    *(undefined4 *)(local_10 + 8) = 0;
    *(undefined4 *)(local_10 + 0xc) = 0;
    *(undefined4 *)(local_10 + 0x10) = 1;
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_3c);
    CStreamGuard::~CStreamGuard(local_3c);
  }
  return !bVar1;
}

```

---

## makeRequest

```asm
// === 0843a790 DB_AutoPunishedSecondUserData::makeRequest  [0x0843a790-0x843a8b1] ===
 843a790:	55                   	push   %ebp
 843a791:	89 e5                	mov    %esp,%ebp
 843a793:	56                   	push   %esi
 843a794:	53                   	push   %ebx
 843a795:	83 ec 30             	sub    $0x30,%esp
 843a798:	8b 45 0c             	mov    0xc(%ebp),%eax
 843a79b:	89 45 e0             	mov    %eax,-0x20(%ebp)
 843a79e:	8b 45 10             	mov    0x10(%ebp),%eax
 843a7a1:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 843a7a4:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 843a7a9:	c7 44 24 08 12 89 00 	movl   $0x8912,0x8(%esp)
 843a7b0:	00 
 843a7b1:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 843a7b8:	08 
 843a7b9:	89 04 24             	mov    %eax,(%esp)
 843a7bc:	e8 c5 52 e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 843a7c1:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 843a7c8:	00 
 843a7c9:	89 44 24 04          	mov    %eax,0x4(%esp)
 843a7cd:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843a7d0:	89 04 24             	mov    %eax,(%esp)
 843a7d3:	e8 4e e4 c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 843a7d8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843a7db:	89 04 24             	mov    %eax,(%esp)
 843a7de:	e8 63 e4 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843a7e3:	c7 44 24 04 ca 01 00 	movl   $0x1ca,0x4(%esp)
 843a7ea:	00 
 843a7eb:	89 04 24             	mov    %eax,(%esp)
 843a7ee:	e8 63 e4 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843a7f3:	8b 5d 14             	mov    0x14(%ebp),%ebx
 843a7f6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843a7f9:	89 04 24             	mov    %eax,(%esp)
 843a7fc:	e8 45 e4 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843a801:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 843a805:	89 04 24             	mov    %eax,(%esp)
 843a808:	e8 49 e4 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843a80d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843a810:	89 04 24             	mov    %eax,(%esp)
 843a813:	e8 36 e4 c8 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 843a818:	89 04 24             	mov    %eax,(%esp)
 843a81b:	e8 5a 91 01 00       	call   845397a <_ZN12CStreamGuard11GetInBufferI20SIG_SECOND_USER_DATAEEPT_v>
 843a820:	89 45 f4             	mov    %eax,-0xc(%ebp)
 843a823:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 843a82a:	00 
 843a82b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843a832:	00 
 843a833:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843a836:	89 04 24             	mov    %eax,(%esp)
 843a839:	e8 82 34 c4 ff       	call   807dcc0 <memset@plt>
 843a83e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843a841:	8b 55 08             	mov    0x8(%ebp),%edx
 843a844:	89 10                	mov    %edx,(%eax)
 843a846:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 843a849:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843a84c:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 843a84f:	89 41 04             	mov    %eax,0x4(%ecx)
 843a852:	89 51 08             	mov    %edx,0x8(%ecx)
 843a855:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843a858:	8b 55 14             	mov    0x14(%ebp),%edx
 843a85b:	89 50 0c             	mov    %edx,0xc(%eax)
 843a85e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843a861:	8b 55 18             	mov    0x18(%ebp),%edx
 843a864:	89 50 10             	mov    %edx,0x10(%eax)
 843a867:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 843a86c:	8d 55 ec             	lea    -0x14(%ebp),%edx
 843a86f:	89 54 24 08          	mov    %edx,0x8(%esp)
 843a873:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843a87a:	00 
 843a87b:	89 04 24             	mov    %eax,(%esp)
 843a87e:	e8 5b 67 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 843a883:	eb 1b                	jmp    843a8a0 <_ZN29DB_AutoPunishedSecondUserData11makeRequestEjyjj+0x110>
 843a885:	89 d3                	mov    %edx,%ebx
 843a887:	89 c6                	mov    %eax,%esi
 843a889:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843a88c:	89 04 24             	mov    %eax,(%esp)
 843a88f:	e8 3e 20 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843a894:	89 f0                	mov    %esi,%eax
 843a896:	89 da                	mov    %ebx,%edx
 843a898:	89 04 24             	mov    %eax,(%esp)
 843a89b:	e8 b0 8e 6a 00       	call   8ae3750 <_Unwind_Resume>
 843a8a0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843a8a3:	89 04 24             	mov    %eax,(%esp)
 843a8a6:	e8 27 20 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843a8ab:	83 c4 30             	add    $0x30,%esp
 843a8ae:	5b                   	pop    %ebx
 843a8af:	5e                   	pop    %esi
 843a8b0:	5d                   	pop    %ebp
 843a8b1:	c3                   	ret

```

```c
// DB_AutoPunishedSecondUserData::makeRequest @ 0x843a790

/* DB_AutoPunishedSecondUserData::makeRequest(unsigned int, unsigned long long, unsigned int,
   unsigned int) */

void __thiscall
DB_AutoPunishedSecondUserData::makeRequest
          (DB_AutoPunishedSecondUserData *this,uint param_1,ulonglong param_2,uint param_3,
          uint param_4)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_SECOND_USER_DATA *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x8912);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0843a7ee to 0843a882 has its CatchHandler @ 0843a885 */
  CStreamGuard::operator<<(pCVar2,0x1ca);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_2._4_4_);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_SECOND_USER_DATA>(pCVar2);
  memset(local_10,0,0x14);
  *(DB_AutoPunishedSecondUserData **)local_10 = this;
  *(uint *)(local_10 + 4) = param_1;
  *(ulonglong *)(local_10 + 8) = param_2;
  *(uint *)(local_10 + 0x10) = param_3;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

