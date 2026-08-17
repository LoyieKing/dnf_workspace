# DB_UpdateGMData

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0843990a DB_UpdateGMData::dispatch  [0x0843990a-0x8439939] ===
 843990a:	55                   	push   %ebp
 843990b:	89 e5                	mov    %esp,%ebp
 843990d:	83 ec 28             	sub    $0x28,%esp
 8439910:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 8439914:	8d 45 f7             	lea    -0x9(%ebp),%eax
 8439917:	89 44 24 04          	mov    %eax,0x4(%esp)
 843991b:	8b 45 14             	mov    0x14(%ebp),%eax
 843991e:	89 04 24             	mov    %eax,(%esp)
 8439921:	e8 56 2b 1e 00       	call   861c47c <_ZN6StreamrsERb>
 8439926:	a1 70 f7 41 09       	mov    0x941f770,%eax
 843992b:	89 04 24             	mov    %eax,(%esp)
 843992e:	e8 39 00 e6 ff       	call   829996c <_ZN7Gm_List16LoadGmListFromDbEv>
 8439933:	b8 01 00 00 00       	mov    $0x1,%eax
 8439938:	c9                   	leave
 8439939:	c3                   	ret

```

```c
// DB_UpdateGMData::dispatch @ 0x843990a

/* DB_UpdateGMData::dispatch(int, int, Stream*) */

undefined4 DB_UpdateGMData::dispatch(int param_1,int param_2,Stream *param_3)

{
  Stream *in_stack_00000010;
  bool local_d [9];
  
  local_d[0] = false;
  Stream::operator>>(in_stack_00000010,local_d);
  Gm_List::LoadGmListFromDb(GlobalData::gmList);
  return 1;
}

```

---

## makeRequest

```asm
// === 0843982c DB_UpdateGMData::makeRequest  [0x0843982c-0x8439909] ===
 843982c:	55                   	push   %ebp
 843982d:	89 e5                	mov    %esp,%ebp
 843982f:	56                   	push   %esi
 8439830:	53                   	push   %ebx
 8439831:	83 ec 30             	sub    $0x30,%esp
 8439834:	8b 45 08             	mov    0x8(%ebp),%eax
 8439837:	88 45 e4             	mov    %al,-0x1c(%ebp)
 843983a:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 843983f:	c7 44 24 08 61 87 00 	movl   $0x8761,0x8(%esp)
 8439846:	00 
 8439847:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 843984e:	08 
 843984f:	89 04 24             	mov    %eax,(%esp)
 8439852:	e8 2f 62 e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8439857:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 843985e:	00 
 843985f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8439863:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8439866:	89 04 24             	mov    %eax,(%esp)
 8439869:	e8 b8 f3 c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 843986e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8439871:	89 04 24             	mov    %eax,(%esp)
 8439874:	e8 cd f3 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8439879:	c7 44 24 04 4a 01 00 	movl   $0x14a,0x4(%esp)
 8439880:	00 
 8439881:	89 04 24             	mov    %eax,(%esp)
 8439884:	e8 cd f3 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8439889:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843988c:	89 04 24             	mov    %eax,(%esp)
 843988f:	e8 b2 f3 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8439894:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 843989b:	ff 
 843989c:	89 04 24             	mov    %eax,(%esp)
 843989f:	e8 b2 f3 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84398a4:	0f b6 5d e4          	movzbl -0x1c(%ebp),%ebx
 84398a8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84398ab:	89 04 24             	mov    %eax,(%esp)
 84398ae:	e8 93 f3 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84398b3:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84398b7:	89 04 24             	mov    %eax,(%esp)
 84398ba:	e8 71 3b 01 00       	call   844d430 <_ZN12CStreamGuardlsEb>
 84398bf:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84398c4:	8d 55 f0             	lea    -0x10(%ebp),%edx
 84398c7:	89 54 24 08          	mov    %edx,0x8(%esp)
 84398cb:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84398d2:	00 
 84398d3:	89 04 24             	mov    %eax,(%esp)
 84398d6:	e8 03 77 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84398db:	eb 1b                	jmp    84398f8 <_ZN15DB_UpdateGMData11makeRequestEb+0xcc>
 84398dd:	89 d3                	mov    %edx,%ebx
 84398df:	89 c6                	mov    %eax,%esi
 84398e1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84398e4:	89 04 24             	mov    %eax,(%esp)
 84398e7:	e8 e6 2f 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84398ec:	89 f0                	mov    %esi,%eax
 84398ee:	89 da                	mov    %ebx,%edx
 84398f0:	89 04 24             	mov    %eax,(%esp)
 84398f3:	e8 58 9e 6a 00       	call   8ae3750 <_Unwind_Resume>
 84398f8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84398fb:	89 04 24             	mov    %eax,(%esp)
 84398fe:	e8 cf 2f 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8439903:	83 c4 30             	add    $0x30,%esp
 8439906:	5b                   	pop    %ebx
 8439907:	5e                   	pop    %esi
 8439908:	5d                   	pop    %ebp
 8439909:	c3                   	ret

```

```c
// DB_UpdateGMData::makeRequest @ 0x843982c

/* DB_UpdateGMData::makeRequest(bool) */

void DB_UpdateGMData::makeRequest(bool param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x8761);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08439884 to 084398da has its CatchHandler @ 084398dd */
  CStreamGuard::operator<<(pCVar2,0x14a);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

