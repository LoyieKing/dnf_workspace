# DB_UpdateOntimeLastRecvIdx

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0844280a DB_UpdateOntimeLastRecvIdx::dispatch  [0x0844280a-0x8442965] ===
 844280a:	55                   	push   %ebp
 844280b:	89 e5                	mov    %esp,%ebp
 844280d:	56                   	push   %esi
 844280e:	53                   	push   %ebx
 844280f:	83 ec 40             	sub    $0x40,%esp
 8442812:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8442817:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 844281e:	00 
 844281f:	c7 44 24 04 0d 00 00 	movl   $0xd,0x4(%esp)
 8442826:	00 
 8442827:	89 04 24             	mov    %eax,(%esp)
 844282a:	e8 0f 2a fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 844282f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8442832:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8442839:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8442840:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8442843:	89 44 24 04          	mov    %eax,0x4(%esp)
 8442847:	8b 45 14             	mov    0x14(%ebp),%eax
 844284a:	89 04 24             	mov    %eax,(%esp)
 844284d:	e8 44 9f 1d 00       	call   861c796 <_ZN6StreamrsERj>
 8442852:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8442855:	89 44 24 04          	mov    %eax,0x4(%esp)
 8442859:	8b 45 14             	mov    0x14(%ebp),%eax
 844285c:	89 04 24             	mov    %eax,(%esp)
 844285f:	e8 60 9d 1d 00       	call   861c5c4 <_ZN6StreamrsERi>
 8442864:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 8442867:	ba cd cc cc cc       	mov    $0xcccccccd,%edx
 844286c:	89 c8                	mov    %ecx,%eax
 844286e:	f7 e2                	mul    %edx
 8442870:	c1 ea 03             	shr    $0x3,%edx
 8442873:	89 d0                	mov    %edx,%eax
 8442875:	c1 e0 02             	shl    $0x2,%eax
 8442878:	01 d0                	add    %edx,%eax
 844287a:	01 c0                	add    %eax,%eax
 844287c:	89 ca                	mov    %ecx,%edx
 844287e:	29 c2                	sub    %eax,%edx
 8442880:	89 55 f4             	mov    %edx,-0xc(%ebp)
 8442883:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8442886:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 844288d:	00 
 844288e:	89 04 24             	mov    %eax,(%esp)
 8442891:	e8 b5 67 cc ff       	call   810904b <_Z14NumberToStringji>
 8442896:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8442899:	89 44 24 10          	mov    %eax,0x10(%esp)
 844289d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84428a1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84428a4:	89 44 24 08          	mov    %eax,0x8(%esp)
 84428a8:	c7 44 24 04 c0 6a c5 	movl   $0x8c56ac0,0x4(%esp)
 84428af:	08 
 84428b0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84428b3:	89 04 24             	mov    %eax,(%esp)
 84428b6:	e8 05 19 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84428bb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84428c2:	00 
 84428c3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84428c6:	89 04 24             	mov    %eax,(%esp)
 84428c9:	e8 58 1a fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 84428ce:	83 f0 01             	xor    $0x1,%eax
 84428d1:	84 c0                	test   %al,%al
 84428d3:	75 11                	jne    84428e6 <_ZN26DB_UpdateOntimeLastRecvIdx8dispatchEiiP6Stream+0xdc>
 84428d5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84428d8:	89 04 24             	mov    %eax,(%esp)
 84428db:	e8 30 1a fb ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 84428e0:	09 d0                	or     %edx,%eax
 84428e2:	85 c0                	test   %eax,%eax
 84428e4:	75 07                	jne    84428ed <_ZN26DB_UpdateOntimeLastRecvIdx8dispatchEiiP6Stream+0xe3>
 84428e6:	b8 01 00 00 00       	mov    $0x1,%eax
 84428eb:	eb 05                	jmp    84428f2 <_ZN26DB_UpdateOntimeLastRecvIdx8dispatchEiiP6Stream+0xe8>
 84428ed:	b8 00 00 00 00       	mov    $0x0,%eax
 84428f2:	84 c0                	test   %al,%al
 84428f4:	74 64                	je     844295a <_ZN26DB_UpdateOntimeLastRecvIdx8dispatchEiiP6Stream+0x150>
 84428f6:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84428f9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8442900:	00 
 8442901:	89 04 24             	mov    %eax,(%esp)
 8442904:	e8 42 67 cc ff       	call   810904b <_Z14NumberToStringji>
 8442909:	89 c3                	mov    %eax,%ebx
 844290b:	8b 75 d8             	mov    -0x28(%ebp),%esi
 844290e:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8442915:	00 
 8442916:	c7 44 24 08 07 a4 00 	movl   $0xa407,0x8(%esp)
 844291d:	00 
 844291e:	c7 44 24 04 c0 b6 c5 	movl   $0x8c5b6c0,0x4(%esp)
 8442925:	08 
 8442926:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8442929:	89 04 24             	mov    %eax,(%esp)
 844292c:	e8 e7 cd 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8442931:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8442935:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8442939:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844293c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8442940:	c7 44 24 04 00 6b c5 	movl   $0x8c56b00,0x4(%esp)
 8442947:	08 
 8442948:	8d 45 e0             	lea    -0x20(%ebp),%eax
 844294b:	89 04 24             	mov    %eax,(%esp)
 844294e:	e8 35 ce 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8442953:	b8 00 00 00 00       	mov    $0x0,%eax
 8442958:	eb 05                	jmp    844295f <_ZN26DB_UpdateOntimeLastRecvIdx8dispatchEiiP6Stream+0x155>
 844295a:	b8 01 00 00 00       	mov    $0x1,%eax
 844295f:	83 c4 40             	add    $0x40,%esp
 8442962:	5b                   	pop    %ebx
 8442963:	5e                   	pop    %esi
 8442964:	5d                   	pop    %ebp
 8442965:	c3                   	ret

```

```c
// DB_UpdateOntimeLastRecvIdx::dispatch @ 0x844280a

/* DB_UpdateOntimeLastRecvIdx::dispatch(int, int, Stream*) */

bool DB_UpdateOntimeLastRecvIdx::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  Stream *in_stack_00000010;
  int local_2c;
  uint local_28;
  cMyTrace local_24 [16];
  MySQL *local_14;
  uint local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,0xd,0);
  local_28 = 0;
  local_2c = 0;
  Stream::operator>>(in_stack_00000010,&local_28);
  Stream::operator>>(in_stack_00000010,&local_2c);
  local_10 = local_28 % 10;
  uVar4 = NumberToString(local_28,0);
  MySQL::set_query(local_14,"upDate event_1112_ontime_user_%u set last_no=%u where m_id=%s",local_10
                   ,local_2c,uVar4);
  cVar3 = MySQL::exec(local_14,true);
  if ((cVar3 == '\x01') && (lVar5 = MySQL::getAffectedRowCount(local_14), lVar5 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar4 = NumberToString(local_28,0);
    iVar2 = local_2c;
    cMyTrace::cMyTrace(local_24,
                       "virtual bool DB_UpdateOntimeLastRecvIdx::dispatch(int, int, Stream*)",0xa407
                       ,5);
    cMyTrace::operator()
              (local_24,"upDate event_1112_ontime_user_%u set last_no=%u failed at m_id(%s)",
               local_10,iVar2,uVar4);
  }
  return !bVar1;
}

```

---

## makeRequest

```asm
// === 08442966 DB_UpdateOntimeLastRecvIdx::makeRequest  [0x08442966-0x8442a55] ===
 8442966:	55                   	push   %ebp
 8442967:	89 e5                	mov    %esp,%ebp
 8442969:	56                   	push   %esi
 844296a:	53                   	push   %ebx
 844296b:	83 ec 20             	sub    $0x20,%esp
 844296e:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8442973:	c7 44 24 08 0f a4 00 	movl   $0xa40f,0x8(%esp)
 844297a:	00 
 844297b:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8442982:	08 
 8442983:	89 04 24             	mov    %eax,(%esp)
 8442986:	e8 fb d0 e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 844298b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8442992:	00 
 8442993:	89 44 24 04          	mov    %eax,0x4(%esp)
 8442997:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844299a:	89 04 24             	mov    %eax,(%esp)
 844299d:	e8 84 62 c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 84429a2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84429a5:	89 04 24             	mov    %eax,(%esp)
 84429a8:	e8 99 62 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84429ad:	c7 44 24 04 97 02 00 	movl   $0x297,0x4(%esp)
 84429b4:	00 
 84429b5:	89 04 24             	mov    %eax,(%esp)
 84429b8:	e8 99 62 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84429bd:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84429c0:	89 04 24             	mov    %eax,(%esp)
 84429c3:	e8 7e 62 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84429c8:	8b 55 08             	mov    0x8(%ebp),%edx
 84429cb:	89 54 24 04          	mov    %edx,0x4(%esp)
 84429cf:	89 04 24             	mov    %eax,(%esp)
 84429d2:	e8 7f 62 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84429d7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84429da:	89 04 24             	mov    %eax,(%esp)
 84429dd:	e8 64 62 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84429e2:	8b 55 0c             	mov    0xc(%ebp),%edx
 84429e5:	89 54 24 04          	mov    %edx,0x4(%esp)
 84429e9:	89 04 24             	mov    %eax,(%esp)
 84429ec:	e8 a1 f8 c9 ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 84429f1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84429f4:	89 04 24             	mov    %eax,(%esp)
 84429f7:	e8 4a 62 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84429fc:	8b 55 10             	mov    0x10(%ebp),%edx
 84429ff:	89 54 24 04          	mov    %edx,0x4(%esp)
 8442a03:	89 04 24             	mov    %eax,(%esp)
 8442a06:	e8 4b 62 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8442a0b:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8442a10:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8442a13:	89 54 24 08          	mov    %edx,0x8(%esp)
 8442a17:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8442a1e:	00 
 8442a1f:	89 04 24             	mov    %eax,(%esp)
 8442a22:	e8 b7 e5 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8442a27:	eb 1b                	jmp    8442a44 <_ZN26DB_UpdateOntimeLastRecvIdx11makeRequestEiji+0xde>
 8442a29:	89 d3                	mov    %edx,%ebx
 8442a2b:	89 c6                	mov    %eax,%esi
 8442a2d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8442a30:	89 04 24             	mov    %eax,(%esp)
 8442a33:	e8 9a 9e 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8442a38:	89 f0                	mov    %esi,%eax
 8442a3a:	89 da                	mov    %ebx,%edx
 8442a3c:	89 04 24             	mov    %eax,(%esp)
 8442a3f:	e8 0c 0d 6a 00       	call   8ae3750 <_Unwind_Resume>
 8442a44:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8442a47:	89 04 24             	mov    %eax,(%esp)
 8442a4a:	e8 83 9e 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8442a4f:	83 c4 20             	add    $0x20,%esp
 8442a52:	5b                   	pop    %ebx
 8442a53:	5e                   	pop    %esi
 8442a54:	5d                   	pop    %ebp
 8442a55:	c3                   	ret

```

```c
// DB_UpdateOntimeLastRecvIdx::makeRequest @ 0x8442966

/* DB_UpdateOntimeLastRecvIdx::makeRequest(int, unsigned int, int) */

void DB_UpdateOntimeLastRecvIdx::makeRequest(int param_1,uint param_2,int param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",41999);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 084429b8 to 08442a26 has its CatchHandler @ 08442a29 */
  CStreamGuard::operator<<(pCVar2,0x297);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_3);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

