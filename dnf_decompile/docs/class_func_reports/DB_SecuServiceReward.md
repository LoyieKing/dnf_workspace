# DB_SecuServiceReward

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 08437764 DB_SecuServiceReward::dispatch  [0x08437764-0x8437843] ===
 8437764:	55                   	push   %ebp
 8437765:	89 e5                	mov    %esp,%ebp
 8437767:	83 ec 38             	sub    $0x38,%esp
 843776a:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 843776f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8437776:	00 
 8437777:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843777e:	00 
 843777f:	89 04 24             	mov    %eax,(%esp)
 8437782:	e8 b7 da fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8437787:	89 45 f0             	mov    %eax,-0x10(%ebp)
 843778a:	8b 45 14             	mov    0x14(%ebp),%eax
 843778d:	89 04 24             	mov    %eax,(%esp)
 8437790:	e8 e9 bd 01 00       	call   845357e <_ZN6Stream12GetOutBufferI23SIG_SECU_SERVICE_REWARDEEPT_v>
 8437795:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8437798:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843779b:	8b 00                	mov    (%eax),%eax
 843779d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84377a4:	00 
 84377a5:	89 04 24             	mov    %eax,(%esp)
 84377a8:	e8 9e 18 cd ff       	call   810904b <_Z14NumberToStringji>
 84377ad:	89 44 24 08          	mov    %eax,0x8(%esp)
 84377b1:	c7 44 24 04 64 3e c5 	movl   $0x8c53e64,0x4(%esp)
 84377b8:	08 
 84377b9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84377bc:	89 04 24             	mov    %eax,(%esp)
 84377bf:	e8 fc c9 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84377c4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84377cb:	00 
 84377cc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84377cf:	89 04 24             	mov    %eax,(%esp)
 84377d2:	e8 4f cb fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 84377d7:	83 f0 01             	xor    $0x1,%eax
 84377da:	84 c0                	test   %al,%al
 84377dc:	75 11                	jne    84377ef <_ZN20DB_SecuServiceReward8dispatchEiiP6Stream+0x8b>
 84377de:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84377e1:	89 04 24             	mov    %eax,(%esp)
 84377e4:	e8 27 cb fb ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 84377e9:	09 d0                	or     %edx,%eax
 84377eb:	85 c0                	test   %eax,%eax
 84377ed:	75 07                	jne    84377f6 <_ZN20DB_SecuServiceReward8dispatchEiiP6Stream+0x92>
 84377ef:	b8 01 00 00 00       	mov    $0x1,%eax
 84377f4:	eb 05                	jmp    84377fb <_ZN20DB_SecuServiceReward8dispatchEiiP6Stream+0x97>
 84377f6:	b8 00 00 00 00       	mov    $0x0,%eax
 84377fb:	84 c0                	test   %al,%al
 84377fd:	74 3d                	je     843783c <_ZN20DB_SecuServiceReward8dispatchEiiP6Stream+0xd8>
 84377ff:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8437806:	00 
 8437807:	c7 44 24 08 61 84 00 	movl   $0x8461,0x8(%esp)
 843780e:	00 
 843780f:	c7 44 24 04 40 bd c5 	movl   $0x8c5bd40,0x4(%esp)
 8437816:	08 
 8437817:	8d 45 e0             	lea    -0x20(%ebp),%eax
 843781a:	89 04 24             	mov    %eax,(%esp)
 843781d:	e8 f6 7e 11 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8437822:	c7 44 24 04 ac 3e c5 	movl   $0x8c53eac,0x4(%esp)
 8437829:	08 
 843782a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 843782d:	89 04 24             	mov    %eax,(%esp)
 8437830:	e8 53 7f 11 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8437835:	b8 00 00 00 00       	mov    $0x0,%eax
 843783a:	eb 05                	jmp    8437841 <_ZN20DB_SecuServiceReward8dispatchEiiP6Stream+0xdd>
 843783c:	b8 01 00 00 00       	mov    $0x1,%eax
 8437841:	c9                   	leave
 8437842:	c3                   	ret
 8437843:	90                   	nop

```

```c
// DB_SecuServiceReward::dispatch @ 0x8437764

/* DB_SecuServiceReward::dispatch(int, int, Stream*) */

bool DB_SecuServiceReward::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  Stream *in_stack_00000010;
  cMyTrace local_24 [16];
  MySQL *local_14;
  SIG_SECU_SERVICE_REWARD *local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  local_10 = Stream::GetOutBuffer<SIG_SECU_SERVICE_REWARD>(in_stack_00000010);
  uVar3 = NumberToString(*(uint *)local_10,0);
  MySQL::set_query(local_14,"upDate member_security_grade set last_check_time=now() where m_id=%s",
                   uVar3);
  cVar2 = MySQL::exec(local_14,true);
  if ((cVar2 == '\x01') && (lVar4 = MySQL::getAffectedRowCount(local_14), lVar4 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    cMyTrace::cMyTrace(local_24,"virtual bool DB_SecuServiceReward::dispatch(int, int, Stream*)",
                       0x8461,0);
    cMyTrace::operator()(local_24,"DB_SecuServiceReward Update Error");
  }
  return !bVar1;
}

```

---

## makeRequest

```asm
// === 08437844 DB_SecuServiceReward::makeRequest  [0x08437844-0x843792f] ===
 8437844:	55                   	push   %ebp
 8437845:	89 e5                	mov    %esp,%ebp
 8437847:	56                   	push   %esi
 8437848:	53                   	push   %ebx
 8437849:	83 ec 30             	sub    $0x30,%esp
 843784c:	8b 45 0c             	mov    0xc(%ebp),%eax
 843784f:	88 45 e4             	mov    %al,-0x1c(%ebp)
 8437852:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8437857:	c7 44 24 08 7c 84 00 	movl   $0x847c,0x8(%esp)
 843785e:	00 
 843785f:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8437866:	08 
 8437867:	89 04 24             	mov    %eax,(%esp)
 843786a:	e8 17 82 e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 843786f:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8437876:	00 
 8437877:	89 44 24 04          	mov    %eax,0x4(%esp)
 843787b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843787e:	89 04 24             	mov    %eax,(%esp)
 8437881:	e8 a0 13 c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8437886:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8437889:	89 04 24             	mov    %eax,(%esp)
 843788c:	e8 b5 13 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8437891:	c7 44 24 04 9d 01 00 	movl   $0x19d,0x4(%esp)
 8437898:	00 
 8437899:	89 04 24             	mov    %eax,(%esp)
 843789c:	e8 b5 13 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84378a1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84378a4:	89 04 24             	mov    %eax,(%esp)
 84378a7:	e8 9a 13 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84378ac:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84378b3:	ff 
 84378b4:	89 04 24             	mov    %eax,(%esp)
 84378b7:	e8 9a 13 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84378bc:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84378bf:	89 04 24             	mov    %eax,(%esp)
 84378c2:	e8 87 13 c9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84378c7:	89 04 24             	mov    %eax,(%esp)
 84378ca:	e8 03 bd 01 00       	call   84535d2 <_ZN12CStreamGuard11GetInBufferI23SIG_SECU_SERVICE_REWARDEEPT_v>
 84378cf:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84378d2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84378d5:	8b 55 08             	mov    0x8(%ebp),%edx
 84378d8:	89 10                	mov    %edx,(%eax)
 84378da:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84378dd:	0f b6 55 e4          	movzbl -0x1c(%ebp),%edx
 84378e1:	88 50 04             	mov    %dl,0x4(%eax)
 84378e4:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84378e9:	8d 55 ec             	lea    -0x14(%ebp),%edx
 84378ec:	89 54 24 08          	mov    %edx,0x8(%esp)
 84378f0:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84378f7:	00 
 84378f8:	89 04 24             	mov    %eax,(%esp)
 84378fb:	e8 de 96 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8437900:	eb 1b                	jmp    843791d <_ZN20DB_SecuServiceReward11makeRequestEjc+0xd9>
 8437902:	89 d3                	mov    %edx,%ebx
 8437904:	89 c6                	mov    %eax,%esi
 8437906:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8437909:	89 04 24             	mov    %eax,(%esp)
 843790c:	e8 c1 4f 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8437911:	89 f0                	mov    %esi,%eax
 8437913:	89 da                	mov    %ebx,%edx
 8437915:	89 04 24             	mov    %eax,(%esp)
 8437918:	e8 33 be 6a 00       	call   8ae3750 <_Unwind_Resume>
 843791d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8437920:	89 04 24             	mov    %eax,(%esp)
 8437923:	e8 aa 4f 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8437928:	83 c4 30             	add    $0x30,%esp
 843792b:	5b                   	pop    %ebx
 843792c:	5e                   	pop    %esi
 843792d:	5d                   	pop    %ebp
 843792e:	c3                   	ret
 843792f:	90                   	nop

```

```c
// DB_SecuServiceReward::makeRequest @ 0x8437844

/* DB_SecuServiceReward::makeRequest(unsigned int, char) */

void DB_SecuServiceReward::makeRequest(uint param_1,char param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_SECU_SERVICE_REWARD *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x847c);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0843789c to 084378ff has its CatchHandler @ 08437902 */
  CStreamGuard::operator<<(pCVar2,0x19d);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_SECU_SERVICE_REWARD>(pCVar2);
  *(uint *)local_10 = param_1;
  local_10[4] = (SIG_SECU_SERVICE_REWARD)param_2;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

