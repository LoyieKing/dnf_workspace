# DB_UpdateAvatarJewelSlot

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0843077c DB_UpdateAvatarJewelSlot::dispatch  [0x0843077c-0x843081b] ===
 843077c:	55                   	push   %ebp
 843077d:	89 e5                	mov    %esp,%ebp
 843077f:	56                   	push   %esi
 8430780:	53                   	push   %ebx
 8430781:	83 ec 30             	sub    $0x30,%esp
 8430784:	8b 45 14             	mov    0x14(%ebp),%eax
 8430787:	89 04 24             	mov    %eax,(%esp)
 843078a:	e8 2b 26 02 00       	call   8452dba <_ZN6Stream12GetOutBufferI30SIG_UPDATE_AVATAR_JEWEL_SOCKETEEPT_v>
 843078f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8430792:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8430797:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 843079e:	00 
 843079f:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 84307a6:	00 
 84307a7:	89 04 24             	mov    %eax,(%esp)
 84307aa:	e8 8f 4a fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84307af:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84307b2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84307b5:	8b 30                	mov    (%eax),%esi
 84307b7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84307ba:	8b 58 04             	mov    0x4(%eax),%ebx
 84307bd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84307c0:	83 c0 08             	add    $0x8,%eax
 84307c3:	c7 44 24 0c 1e 00 00 	movl   $0x1e,0xc(%esp)
 84307ca:	00 
 84307cb:	89 44 24 08          	mov    %eax,0x8(%esp)
 84307cf:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84307d6:	00 
 84307d7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84307da:	89 04 24             	mov    %eax,(%esp)
 84307dd:	e8 48 3d fc ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 84307e2:	89 74 24 10          	mov    %esi,0x10(%esp)
 84307e6:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84307ea:	89 44 24 08          	mov    %eax,0x8(%esp)
 84307ee:	c7 44 24 04 3c 1a c5 	movl   $0x8c51a3c,0x4(%esp)
 84307f5:	08 
 84307f6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84307f9:	89 04 24             	mov    %eax,(%esp)
 84307fc:	e8 bf 39 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8430801:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8430808:	00 
 8430809:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843080c:	89 04 24             	mov    %eax,(%esp)
 843080f:	e8 12 3b fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 8430814:	83 c4 30             	add    $0x30,%esp
 8430817:	5b                   	pop    %ebx
 8430818:	5e                   	pop    %esi
 8430819:	5d                   	pop    %ebp
 843081a:	c3                   	ret
 843081b:	90                   	nop

```

```c
// DB_UpdateAvatarJewelSlot::dispatch @ 0x843077c

/* DB_UpdateAvatarJewelSlot::dispatch(int, int, Stream*) */

void DB_UpdateAvatarJewelSlot::dispatch(int param_1,int param_2,Stream *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  SIG_UPDATE_AVATAR_JEWEL_SOCKET *pSVar3;
  MySQL *this;
  undefined4 uVar4;
  Stream *in_stack_00000010;
  
  pSVar3 = Stream::GetOutBuffer<SIG_UPDATE_AVATAR_JEWEL_SOCKET>(in_stack_00000010);
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  uVar1 = *(undefined4 *)pSVar3;
  uVar2 = *(undefined4 *)(pSVar3 + 4);
  uVar4 = MySQL::blob_to_str(this,0,pSVar3 + 8,0x1e);
  MySQL::set_query(this,"upDate user_items set jewel_socket=\'%s\' where ui_id=%d and charac_no=%d",
                   uVar4,uVar2,uVar1);
  MySQL::exec(this,true);
  return;
}

```

---

## makeRequest

```asm
// === 0843081c DB_UpdateAvatarJewelSlot::makeRequest  [0x0843081c-0x843091d] ===
 843081c:	55                   	push   %ebp
 843081d:	89 e5                	mov    %esp,%ebp
 843081f:	56                   	push   %esi
 8430820:	53                   	push   %ebx
 8430821:	83 ec 20             	sub    $0x20,%esp
 8430824:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8430829:	c7 44 24 08 31 77 00 	movl   $0x7731,0x8(%esp)
 8430830:	00 
 8430831:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8430838:	08 
 8430839:	89 04 24             	mov    %eax,(%esp)
 843083c:	e8 45 f2 e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8430841:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8430848:	00 
 8430849:	89 44 24 04          	mov    %eax,0x4(%esp)
 843084d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8430850:	89 04 24             	mov    %eax,(%esp)
 8430853:	e8 ce 83 c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8430858:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843085b:	89 04 24             	mov    %eax,(%esp)
 843085e:	e8 e3 83 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8430863:	c7 44 24 04 39 01 00 	movl   $0x139,0x4(%esp)
 843086a:	00 
 843086b:	89 04 24             	mov    %eax,(%esp)
 843086e:	e8 e3 83 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8430873:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8430876:	89 04 24             	mov    %eax,(%esp)
 8430879:	e8 c8 83 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843087e:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8430885:	ff 
 8430886:	89 04 24             	mov    %eax,(%esp)
 8430889:	e8 c8 83 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843088e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8430891:	89 04 24             	mov    %eax,(%esp)
 8430894:	e8 b5 83 c9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8430899:	89 04 24             	mov    %eax,(%esp)
 843089c:	e8 6d 25 02 00       	call   8452e0e <_ZN12CStreamGuard11GetInBufferI30SIG_UPDATE_AVATAR_JEWEL_SOCKETEEPT_v>
 84308a1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84308a4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84308a7:	8b 55 08             	mov    0x8(%ebp),%edx
 84308aa:	89 10                	mov    %edx,(%eax)
 84308ac:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84308af:	8b 55 0c             	mov    0xc(%ebp),%edx
 84308b2:	89 50 04             	mov    %edx,0x4(%eax)
 84308b5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84308b8:	8d 50 08             	lea    0x8(%eax),%edx
 84308bb:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 84308c2:	00 
 84308c3:	8b 45 10             	mov    0x10(%ebp),%eax
 84308c6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84308ca:	89 14 24             	mov    %edx,(%esp)
 84308cd:	e8 ce cf c4 ff       	call   807d8a0 <memcpy@plt>
 84308d2:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84308d7:	8d 55 ec             	lea    -0x14(%ebp),%edx
 84308da:	89 54 24 08          	mov    %edx,0x8(%esp)
 84308de:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84308e5:	00 
 84308e6:	89 04 24             	mov    %eax,(%esp)
 84308e9:	e8 f0 06 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84308ee:	eb 1b                	jmp    843090b <_ZN24DB_UpdateAvatarJewelSlot11makeRequestEjjPK20stAvatarEmblemInfo_t+0xef>
 84308f0:	89 d3                	mov    %edx,%ebx
 84308f2:	89 c6                	mov    %eax,%esi
 84308f4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84308f7:	89 04 24             	mov    %eax,(%esp)
 84308fa:	e8 d3 bf 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84308ff:	89 f0                	mov    %esi,%eax
 8430901:	89 da                	mov    %ebx,%edx
 8430903:	89 04 24             	mov    %eax,(%esp)
 8430906:	e8 45 2e 6b 00       	call   8ae3750 <_Unwind_Resume>
 843090b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843090e:	89 04 24             	mov    %eax,(%esp)
 8430911:	e8 bc bf 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8430916:	83 c4 20             	add    $0x20,%esp
 8430919:	5b                   	pop    %ebx
 843091a:	5e                   	pop    %esi
 843091b:	5d                   	pop    %ebp
 843091c:	c3                   	ret
 843091d:	90                   	nop

```

```c
// DB_UpdateAvatarJewelSlot::makeRequest @ 0x843081c

/* DB_UpdateAvatarJewelSlot::makeRequest(unsigned int, unsigned int, stAvatarEmblemInfo_t const*) */

void DB_UpdateAvatarJewelSlot::makeRequest(uint param_1,uint param_2,stAvatarEmblemInfo_t *param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_UPDATE_AVATAR_JEWEL_SOCKET *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x7731);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0843086e to 084308ed has its CatchHandler @ 084308f0 */
  CStreamGuard::operator<<(pCVar2,0x139);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_UPDATE_AVATAR_JEWEL_SOCKET>(pCVar2);
  *(uint *)local_10 = param_1;
  *(uint *)(local_10 + 4) = param_2;
  memcpy(local_10 + 8,param_3,0x1e);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

