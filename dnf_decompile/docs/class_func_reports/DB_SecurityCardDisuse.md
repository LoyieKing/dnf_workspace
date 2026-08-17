# DB_SecurityCardDisuse

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0842b6e6 DB_SecurityCardDisuse::dispatch  [0x0842b6e6-0x842b78f] ===
 842b6e6:	55                   	push   %ebp
 842b6e7:	89 e5                	mov    %esp,%ebp
 842b6e9:	83 ec 28             	sub    $0x28,%esp
 842b6ec:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 842b6f1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842b6f8:	00 
 842b6f9:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 842b700:	00 
 842b701:	89 04 24             	mov    %eax,(%esp)
 842b704:	e8 35 9b fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 842b709:	89 45 f0             	mov    %eax,-0x10(%ebp)
 842b70c:	8b 45 14             	mov    0x14(%ebp),%eax
 842b70f:	89 04 24             	mov    %eax,(%esp)
 842b712:	e8 07 6f 02 00       	call   845261e <_ZN6Stream12GetOutBufferI24SIG_SECURITY_CARD_DISUSEEEPT_v>
 842b717:	89 45 f4             	mov    %eax,-0xc(%ebp)
 842b71a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842b71d:	8b 00                	mov    (%eax),%eax
 842b71f:	89 44 24 04          	mov    %eax,0x4(%esp)
 842b723:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842b726:	89 04 24             	mov    %eax,(%esp)
 842b729:	e8 e4 f7 ff ff       	call   842af12 <_Z19turnOffSecurityFlagP5MySQLj>
 842b72e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842b731:	8b 00                	mov    (%eax),%eax
 842b733:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842b73a:	00 
 842b73b:	89 04 24             	mov    %eax,(%esp)
 842b73e:	e8 08 d9 cd ff       	call   810904b <_Z14NumberToStringji>
 842b743:	89 44 24 08          	mov    %eax,0x8(%esp)
 842b747:	c7 44 24 04 48 ff c4 	movl   $0x8c4ff48,0x4(%esp)
 842b74e:	08 
 842b74f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842b752:	89 04 24             	mov    %eax,(%esp)
 842b755:	e8 66 8a fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842b75a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842b761:	00 
 842b762:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842b765:	89 04 24             	mov    %eax,(%esp)
 842b768:	e8 b9 8b fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842b76d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842b770:	8b 00                	mov    (%eax),%eax
 842b772:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 842b779:	00 
 842b77a:	89 44 24 04          	mov    %eax,0x4(%esp)
 842b77e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842b781:	89 04 24             	mov    %eax,(%esp)
 842b784:	e8 b6 f6 ff ff       	call   842ae3f <_Z23saveSecurityCardHistoryP5MySQLj26ENUM_SECURITYCARD_MOD_TYPE>
 842b789:	b8 01 00 00 00       	mov    $0x1,%eax
 842b78e:	c9                   	leave
 842b78f:	c3                   	ret

```

```c
// DB_SecurityCardDisuse::dispatch @ 0x842b6e6

/* DB_SecurityCardDisuse::dispatch(int, int, Stream*) */

undefined4 DB_SecurityCardDisuse::dispatch(int param_1,int param_2,Stream *param_3)

{
  MySQL *this;
  SIG_SECURITY_CARD_DISUSE *pSVar1;
  undefined4 uVar2;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  pSVar1 = Stream::GetOutBuffer<SIG_SECURITY_CARD_DISUSE>(in_stack_00000010);
  turnOffSecurityFlag(this,*(uint *)pSVar1);
  uVar2 = NumberToString(*(uint *)pSVar1,0);
  MySQL::set_query(this,"upDate member_security_card set apply_flag=0 where m_id=%s",uVar2);
  MySQL::exec(this,true);
  saveSecurityCardHistory(this,*(undefined4 *)pSVar1,2);
  return 1;
}

```

---

## makeRequest

```asm
// === 0842b790 DB_SecurityCardDisuse::makeRequest  [0x0842b790-0x842b86b] ===
 842b790:	55                   	push   %ebp
 842b791:	89 e5                	mov    %esp,%ebp
 842b793:	56                   	push   %esi
 842b794:	53                   	push   %ebx
 842b795:	83 ec 20             	sub    $0x20,%esp
 842b798:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 842b79d:	c7 44 24 08 2d 6e 00 	movl   $0x6e2d,0x8(%esp)
 842b7a4:	00 
 842b7a5:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 842b7ac:	08 
 842b7ad:	89 04 24             	mov    %eax,(%esp)
 842b7b0:	e8 d1 42 e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 842b7b5:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 842b7bc:	00 
 842b7bd:	89 44 24 04          	mov    %eax,0x4(%esp)
 842b7c1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842b7c4:	89 04 24             	mov    %eax,(%esp)
 842b7c7:	e8 5a d4 c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 842b7cc:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842b7cf:	89 04 24             	mov    %eax,(%esp)
 842b7d2:	e8 6f d4 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842b7d7:	c7 44 24 04 fe 00 00 	movl   $0xfe,0x4(%esp)
 842b7de:	00 
 842b7df:	89 04 24             	mov    %eax,(%esp)
 842b7e2:	e8 6f d4 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842b7e7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842b7ea:	89 04 24             	mov    %eax,(%esp)
 842b7ed:	e8 54 d4 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842b7f2:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 842b7f9:	ff 
 842b7fa:	89 04 24             	mov    %eax,(%esp)
 842b7fd:	e8 54 d4 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842b802:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842b805:	89 04 24             	mov    %eax,(%esp)
 842b808:	e8 41 d4 c9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 842b80d:	89 04 24             	mov    %eax,(%esp)
 842b810:	e8 5d 6e 02 00       	call   8452672 <_ZN12CStreamGuard11GetInBufferI24SIG_SECURITY_CARD_DISUSEEEPT_v>
 842b815:	89 45 f4             	mov    %eax,-0xc(%ebp)
 842b818:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842b81b:	8b 55 08             	mov    0x8(%ebp),%edx
 842b81e:	89 10                	mov    %edx,(%eax)
 842b820:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 842b825:	8d 55 ec             	lea    -0x14(%ebp),%edx
 842b828:	89 54 24 08          	mov    %edx,0x8(%esp)
 842b82c:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 842b833:	00 
 842b834:	89 04 24             	mov    %eax,(%esp)
 842b837:	e8 a2 57 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 842b83c:	eb 1b                	jmp    842b859 <_ZN21DB_SecurityCardDisuse11makeRequestEj+0xc9>
 842b83e:	89 d3                	mov    %edx,%ebx
 842b840:	89 c6                	mov    %eax,%esi
 842b842:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842b845:	89 04 24             	mov    %eax,(%esp)
 842b848:	e8 85 10 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842b84d:	89 f0                	mov    %esi,%eax
 842b84f:	89 da                	mov    %ebx,%edx
 842b851:	89 04 24             	mov    %eax,(%esp)
 842b854:	e8 f7 7e 6b 00       	call   8ae3750 <_Unwind_Resume>
 842b859:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842b85c:	89 04 24             	mov    %eax,(%esp)
 842b85f:	e8 6e 10 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842b864:	83 c4 20             	add    $0x20,%esp
 842b867:	5b                   	pop    %ebx
 842b868:	5e                   	pop    %esi
 842b869:	5d                   	pop    %ebp
 842b86a:	c3                   	ret
 842b86b:	90                   	nop

```

```c
// DB_SecurityCardDisuse::makeRequest @ 0x842b790

/* DB_SecurityCardDisuse::makeRequest(unsigned int) */

void DB_SecurityCardDisuse::makeRequest(uint param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_SECURITY_CARD_DISUSE *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x6e2d);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0842b7e2 to 0842b83b has its CatchHandler @ 0842b83e */
  CStreamGuard::operator<<(pCVar2,0xfe);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_SECURITY_CARD_DISUSE>(pCVar2);
  *(uint *)local_10 = param_1;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

