# DB_UpdateCharacPlayTime

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0843f75a DB_UpdateCharacPlayTime::dispatch  [0x0843f75a-0x843f7ed] ===
 843f75a:	55                   	push   %ebp
 843f75b:	89 e5                	mov    %esp,%ebp
 843f75d:	83 ec 28             	sub    $0x28,%esp
 843f760:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 843f767:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 843f76e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843f771:	89 44 24 04          	mov    %eax,0x4(%esp)
 843f775:	8b 45 14             	mov    0x14(%ebp),%eax
 843f778:	89 04 24             	mov    %eax,(%esp)
 843f77b:	e8 44 ce 1d 00       	call   861c5c4 <_ZN6StreamrsERi>
 843f780:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843f783:	89 44 24 04          	mov    %eax,0x4(%esp)
 843f787:	8b 45 14             	mov    0x14(%ebp),%eax
 843f78a:	89 04 24             	mov    %eax,(%esp)
 843f78d:	e8 32 ce 1d 00       	call   861c5c4 <_ZN6StreamrsERi>
 843f792:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 843f797:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 843f79e:	00 
 843f79f:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843f7a6:	00 
 843f7a7:	89 04 24             	mov    %eax,(%esp)
 843f7aa:	e8 8f 5a fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 843f7af:	89 45 f4             	mov    %eax,-0xc(%ebp)
 843f7b2:	8b 55 f0             	mov    -0x10(%ebp),%edx
 843f7b5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 843f7b8:	89 54 24 0c          	mov    %edx,0xc(%esp)
 843f7bc:	89 44 24 08          	mov    %eax,0x8(%esp)
 843f7c0:	c7 44 24 04 28 5a c5 	movl   $0x8c55a28,0x4(%esp)
 843f7c7:	08 
 843f7c8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843f7cb:	89 04 24             	mov    %eax,(%esp)
 843f7ce:	e8 ed 49 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843f7d3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843f7da:	00 
 843f7db:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843f7de:	89 04 24             	mov    %eax,(%esp)
 843f7e1:	e8 40 4b fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843f7e6:	b8 01 00 00 00       	mov    $0x1,%eax
 843f7eb:	c9                   	leave
 843f7ec:	c3                   	ret
 843f7ed:	90                   	nop

```

```c
// DB_UpdateCharacPlayTime::dispatch @ 0x843f75a

/* DB_UpdateCharacPlayTime::dispatch(int, int, Stream*) */

undefined4 DB_UpdateCharacPlayTime::dispatch(int param_1,int param_2,Stream *param_3)

{
  Stream *in_stack_00000010;
  int local_18;
  int local_14;
  MySQL *local_10;
  
  local_14 = 0;
  local_18 = 0;
  Stream::operator>>(in_stack_00000010,&local_14);
  Stream::operator>>(in_stack_00000010,&local_18);
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(local_10,
                   "upDate charac_stat set total_play_time=total_play_time + %d where charac_no = %d"
                   ,local_18,local_14);
  MySQL::exec(local_10,true);
  return 1;
}

```

---

## makeRequest

```asm
// === 0843f7ee DB_UpdateCharacPlayTime::makeRequest  [0x0843f7ee-0x843f8f9] ===
 843f7ee:	55                   	push   %ebp
 843f7ef:	89 e5                	mov    %esp,%ebp
 843f7f1:	56                   	push   %esi
 843f7f2:	53                   	push   %ebx
 843f7f3:	83 ec 20             	sub    $0x20,%esp
 843f7f6:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
 843f7fa:	0f 84 ee 00 00 00    	je     843f8ee <_ZN23DB_UpdateCharacPlayTime11makeRequestEil+0x100>
 843f800:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 843f804:	0f 84 e7 00 00 00    	je     843f8f1 <_ZN23DB_UpdateCharacPlayTime11makeRequestEil+0x103>
 843f80a:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 843f80f:	c7 44 24 08 a6 99 00 	movl   $0x99a6,0x8(%esp)
 843f816:	00 
 843f817:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 843f81e:	08 
 843f81f:	89 04 24             	mov    %eax,(%esp)
 843f822:	e8 5f 02 e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 843f827:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 843f82e:	00 
 843f82f:	89 44 24 04          	mov    %eax,0x4(%esp)
 843f833:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843f836:	89 04 24             	mov    %eax,(%esp)
 843f839:	e8 e8 93 c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 843f83e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843f841:	89 04 24             	mov    %eax,(%esp)
 843f844:	e8 fd 93 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843f849:	c7 44 24 04 4e 02 00 	movl   $0x24e,0x4(%esp)
 843f850:	00 
 843f851:	89 04 24             	mov    %eax,(%esp)
 843f854:	e8 fd 93 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843f859:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843f85c:	89 04 24             	mov    %eax,(%esp)
 843f85f:	e8 e2 93 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843f864:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 843f86b:	ff 
 843f86c:	89 04 24             	mov    %eax,(%esp)
 843f86f:	e8 e2 93 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843f874:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843f877:	89 04 24             	mov    %eax,(%esp)
 843f87a:	e8 c7 93 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843f87f:	8b 55 08             	mov    0x8(%ebp),%edx
 843f882:	89 54 24 04          	mov    %edx,0x4(%esp)
 843f886:	89 04 24             	mov    %eax,(%esp)
 843f889:	e8 c8 93 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843f88e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843f891:	89 04 24             	mov    %eax,(%esp)
 843f894:	e8 ad 93 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843f899:	8b 55 0c             	mov    0xc(%ebp),%edx
 843f89c:	89 54 24 04          	mov    %edx,0x4(%esp)
 843f8a0:	89 04 24             	mov    %eax,(%esp)
 843f8a3:	e8 ce 29 ca ff       	call   80e2276 <_ZN12CStreamGuardlsEl>
 843f8a8:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 843f8ad:	8d 55 f0             	lea    -0x10(%ebp),%edx
 843f8b0:	89 54 24 08          	mov    %edx,0x8(%esp)
 843f8b4:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843f8bb:	00 
 843f8bc:	89 04 24             	mov    %eax,(%esp)
 843f8bf:	e8 1a 17 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 843f8c4:	eb 1b                	jmp    843f8e1 <_ZN23DB_UpdateCharacPlayTime11makeRequestEil+0xf3>
 843f8c6:	89 d3                	mov    %edx,%ebx
 843f8c8:	89 c6                	mov    %eax,%esi
 843f8ca:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843f8cd:	89 04 24             	mov    %eax,(%esp)
 843f8d0:	e8 fd cf 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843f8d5:	89 f0                	mov    %esi,%eax
 843f8d7:	89 da                	mov    %ebx,%edx
 843f8d9:	89 04 24             	mov    %eax,(%esp)
 843f8dc:	e8 6f 3e 6a 00       	call   8ae3750 <_Unwind_Resume>
 843f8e1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843f8e4:	89 04 24             	mov    %eax,(%esp)
 843f8e7:	e8 e6 cf 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843f8ec:	eb 04                	jmp    843f8f2 <_ZN23DB_UpdateCharacPlayTime11makeRequestEil+0x104>
 843f8ee:	90                   	nop
 843f8ef:	eb 01                	jmp    843f8f2 <_ZN23DB_UpdateCharacPlayTime11makeRequestEil+0x104>
 843f8f1:	90                   	nop
 843f8f2:	83 c4 20             	add    $0x20,%esp
 843f8f5:	5b                   	pop    %ebx
 843f8f6:	5e                   	pop    %esi
 843f8f7:	5d                   	pop    %ebp
 843f8f8:	c3                   	ret
 843f8f9:	90                   	nop

```

```c
// DB_UpdateCharacPlayTime::makeRequest @ 0x843f7ee

/* DB_UpdateCharacPlayTime::makeRequest(int, long) */

void DB_UpdateCharacPlayTime::makeRequest(int param_1,long param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  if ((param_1 != 0) && (param_2 != 0)) {
    pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x99a6);
    CStreamGuard::CStreamGuard(local_14,pSVar1,true);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0843f854 to 0843f8c3 has its CatchHandler @ 0843f8c6 */
    CStreamGuard::operator<<(pCVar2,0x24e);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
    CStreamGuard::operator<<(pCVar2,-1);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
    CStreamGuard::operator<<(pCVar2,param_1);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
    CStreamGuard::operator<<(pCVar2,param_2);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
    CStreamGuard::~CStreamGuard(local_14);
  }
  return;
}

```

