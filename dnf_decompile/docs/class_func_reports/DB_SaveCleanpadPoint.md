# DB_SaveCleanpadPoint

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 08432f3e DB_SaveCleanpadPoint::dispatch  [0x08432f3e-0x8432fe1] ===
 8432f3e:	55                   	push   %ebp
 8432f3f:	89 e5                	mov    %esp,%ebp
 8432f41:	83 ec 28             	sub    $0x28,%esp
 8432f44:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8432f47:	89 44 24 04          	mov    %eax,0x4(%esp)
 8432f4b:	8b 45 14             	mov    0x14(%ebp),%eax
 8432f4e:	89 04 24             	mov    %eax,(%esp)
 8432f51:	e8 40 98 1e 00       	call   861c796 <_ZN6StreamrsERj>
 8432f56:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8432f59:	89 44 24 04          	mov    %eax,0x4(%esp)
 8432f5d:	8b 45 14             	mov    0x14(%ebp),%eax
 8432f60:	89 04 24             	mov    %eax,(%esp)
 8432f63:	e8 2e 98 1e 00       	call   861c796 <_ZN6StreamrsERj>
 8432f68:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8432f6d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8432f74:	00 
 8432f75:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 8432f7c:	00 
 8432f7d:	89 04 24             	mov    %eax,(%esp)
 8432f80:	e8 b9 22 fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8432f85:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8432f88:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8432f8b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8432f92:	00 
 8432f93:	89 04 24             	mov    %eax,(%esp)
 8432f96:	e8 b0 60 cd ff       	call   810904b <_Z14NumberToStringji>
 8432f9b:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8432f9e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8432fa2:	89 54 24 08          	mov    %edx,0x8(%esp)
 8432fa6:	c7 44 24 04 ac 26 c5 	movl   $0x8c526ac,0x4(%esp)
 8432fad:	08 
 8432fae:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8432fb1:	89 04 24             	mov    %eax,(%esp)
 8432fb4:	e8 07 12 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8432fb9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8432fc0:	00 
 8432fc1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8432fc4:	89 04 24             	mov    %eax,(%esp)
 8432fc7:	e8 5a 13 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 8432fcc:	83 f0 01             	xor    $0x1,%eax
 8432fcf:	84 c0                	test   %al,%al
 8432fd1:	74 07                	je     8432fda <_ZN20DB_SaveCleanpadPoint8dispatchEiiP6Stream+0x9c>
 8432fd3:	b8 00 00 00 00       	mov    $0x0,%eax
 8432fd8:	eb 05                	jmp    8432fdf <_ZN20DB_SaveCleanpadPoint8dispatchEiiP6Stream+0xa1>
 8432fda:	b8 01 00 00 00       	mov    $0x1,%eax
 8432fdf:	c9                   	leave
 8432fe0:	c3                   	ret
 8432fe1:	90                   	nop

```

```c
// DB_SaveCleanpadPoint::dispatch @ 0x8432f3e

/* DB_SaveCleanpadPoint::dispatch(int, int, Stream*) */

bool DB_SaveCleanpadPoint::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  Stream *in_stack_00000010;
  uint local_18;
  uint local_14;
  MySQL *local_10;
  
  Stream::operator>>(in_stack_00000010,&local_14);
  Stream::operator>>(in_stack_00000010,&local_18);
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  uVar2 = NumberToString(local_18,0);
  MySQL::set_query(local_10,"upDate member_login set cleanpad_point=%d where m_id=%s",local_14,uVar2
                  );
  cVar1 = MySQL::exec(local_10,true);
  return cVar1 == '\x01';
}

```

---

## makeRequest

```asm
// === 08432fe2 DB_SaveCleanpadPoint::makeRequest  [0x08432fe2-0x84330d3] ===
 8432fe2:	55                   	push   %ebp
 8432fe3:	89 e5                	mov    %esp,%ebp
 8432fe5:	56                   	push   %esi
 8432fe6:	53                   	push   %ebx
 8432fe7:	83 ec 20             	sub    $0x20,%esp
 8432fea:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8432fef:	c7 44 24 08 aa 7a 00 	movl   $0x7aaa,0x8(%esp)
 8432ff6:	00 
 8432ff7:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8432ffe:	08 
 8432fff:	89 04 24             	mov    %eax,(%esp)
 8433002:	e8 7f ca e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8433007:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 843300e:	00 
 843300f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8433013:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8433016:	89 04 24             	mov    %eax,(%esp)
 8433019:	e8 08 5c c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 843301e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8433021:	89 04 24             	mov    %eax,(%esp)
 8433024:	e8 1d 5c c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8433029:	c7 44 24 04 54 01 00 	movl   $0x154,0x4(%esp)
 8433030:	00 
 8433031:	89 04 24             	mov    %eax,(%esp)
 8433034:	e8 1d 5c c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8433039:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843303c:	89 04 24             	mov    %eax,(%esp)
 843303f:	e8 02 5c c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8433044:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 843304b:	ff 
 843304c:	89 04 24             	mov    %eax,(%esp)
 843304f:	e8 02 5c c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8433054:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8433057:	89 04 24             	mov    %eax,(%esp)
 843305a:	e8 e7 5b c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843305f:	8b 55 08             	mov    0x8(%ebp),%edx
 8433062:	89 54 24 04          	mov    %edx,0x4(%esp)
 8433066:	89 04 24             	mov    %eax,(%esp)
 8433069:	e8 24 f2 ca ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 843306e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8433071:	89 04 24             	mov    %eax,(%esp)
 8433074:	e8 cd 5b c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8433079:	8b 55 0c             	mov    0xc(%ebp),%edx
 843307c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8433080:	89 04 24             	mov    %eax,(%esp)
 8433083:	e8 ce 5b c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8433088:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 843308d:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8433090:	89 54 24 08          	mov    %edx,0x8(%esp)
 8433094:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843309b:	00 
 843309c:	89 04 24             	mov    %eax,(%esp)
 843309f:	e8 3a df 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84330a4:	eb 1b                	jmp    84330c1 <_ZN20DB_SaveCleanpadPoint11makeRequestEji+0xdf>
 84330a6:	89 d3                	mov    %edx,%ebx
 84330a8:	89 c6                	mov    %eax,%esi
 84330aa:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84330ad:	89 04 24             	mov    %eax,(%esp)
 84330b0:	e8 1d 98 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84330b5:	89 f0                	mov    %esi,%eax
 84330b7:	89 da                	mov    %ebx,%edx
 84330b9:	89 04 24             	mov    %eax,(%esp)
 84330bc:	e8 8f 06 6b 00       	call   8ae3750 <_Unwind_Resume>
 84330c1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84330c4:	89 04 24             	mov    %eax,(%esp)
 84330c7:	e8 06 98 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84330cc:	83 c4 20             	add    $0x20,%esp
 84330cf:	5b                   	pop    %ebx
 84330d0:	5e                   	pop    %esi
 84330d1:	5d                   	pop    %ebp
 84330d2:	c3                   	ret
 84330d3:	90                   	nop

```

```c
// DB_SaveCleanpadPoint::makeRequest @ 0x8432fe2

/* DB_SaveCleanpadPoint::makeRequest(unsigned int, int) */

void DB_SaveCleanpadPoint::makeRequest(uint param_1,int param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x7aaa);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08433034 to 084330a3 has its CatchHandler @ 084330a6 */
  CStreamGuard::operator<<(pCVar2,0x154);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

