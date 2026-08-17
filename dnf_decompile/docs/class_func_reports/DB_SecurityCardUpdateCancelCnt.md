# DB_SecurityCardUpdateCancelCnt

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0842c08e DB_SecurityCardUpdateCancelCnt::dispatch  [0x0842c08e-0x842c111] ===
 842c08e:	55                   	push   %ebp
 842c08f:	89 e5                	mov    %esp,%ebp
 842c091:	83 ec 28             	sub    $0x28,%esp
 842c094:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 842c099:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842c0a0:	00 
 842c0a1:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 842c0a8:	00 
 842c0a9:	89 04 24             	mov    %eax,(%esp)
 842c0ac:	e8 8d 91 fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 842c0b1:	89 45 f0             	mov    %eax,-0x10(%ebp)
 842c0b4:	8b 45 14             	mov    0x14(%ebp),%eax
 842c0b7:	89 04 24             	mov    %eax,(%esp)
 842c0ba:	e8 07 5d 02 00       	call   8451dc6 <_ZN6Stream12GetOutBufferI33SIG_SECURITY_CARD_UPDATE_FAIL_CNTEEPT_v>
 842c0bf:	89 45 f4             	mov    %eax,-0xc(%ebp)
 842c0c2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842c0c5:	8b 00                	mov    (%eax),%eax
 842c0c7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842c0ce:	00 
 842c0cf:	89 04 24             	mov    %eax,(%esp)
 842c0d2:	e8 74 cf cd ff       	call   810904b <_Z14NumberToStringji>
 842c0d7:	8b 55 f4             	mov    -0xc(%ebp),%edx
 842c0da:	8b 52 04             	mov    0x4(%edx),%edx
 842c0dd:	89 44 24 0c          	mov    %eax,0xc(%esp)
 842c0e1:	89 54 24 08          	mov    %edx,0x8(%esp)
 842c0e5:	c7 44 24 04 30 02 c5 	movl   $0x8c50230,0x4(%esp)
 842c0ec:	08 
 842c0ed:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842c0f0:	89 04 24             	mov    %eax,(%esp)
 842c0f3:	e8 c8 80 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842c0f8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842c0ff:	00 
 842c100:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842c103:	89 04 24             	mov    %eax,(%esp)
 842c106:	e8 1b 82 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842c10b:	b8 01 00 00 00       	mov    $0x1,%eax
 842c110:	c9                   	leave
 842c111:	c3                   	ret

```

```c
// DB_SecurityCardUpdateCancelCnt::dispatch @ 0x842c08e

/* DB_SecurityCardUpdateCancelCnt::dispatch(int, int, Stream*) */

undefined4 DB_SecurityCardUpdateCancelCnt::dispatch(int param_1,int param_2,Stream *param_3)

{
  MySQL *this;
  SIG_SECURITY_CARD_UPDATE_FAIL_CNT *pSVar1;
  undefined4 uVar2;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  pSVar1 = Stream::GetOutBuffer<SIG_SECURITY_CARD_UPDATE_FAIL_CNT>(in_stack_00000010);
  uVar2 = NumberToString(*(uint *)pSVar1,0);
  MySQL::set_query(this,
                   "upDate member_security_card set cancel_cnt=%d where m_id=%s and apply_flag=1",
                   *(undefined4 *)(pSVar1 + 4),uVar2);
  MySQL::exec(this,true);
  return 1;
}

```

---

## makeRequest

```asm
// === 0842c112 DB_SecurityCardUpdateCancelCnt::makeRequest  [0x0842c112-0x842c1f5] ===
 842c112:	55                   	push   %ebp
 842c113:	89 e5                	mov    %esp,%ebp
 842c115:	56                   	push   %esi
 842c116:	53                   	push   %ebx
 842c117:	83 ec 20             	sub    $0x20,%esp
 842c11a:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 842c11f:	c7 44 24 08 25 6f 00 	movl   $0x6f25,0x8(%esp)
 842c126:	00 
 842c127:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 842c12e:	08 
 842c12f:	89 04 24             	mov    %eax,(%esp)
 842c132:	e8 4f 39 e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 842c137:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 842c13e:	00 
 842c13f:	89 44 24 04          	mov    %eax,0x4(%esp)
 842c143:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842c146:	89 04 24             	mov    %eax,(%esp)
 842c149:	e8 d8 ca c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 842c14e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842c151:	89 04 24             	mov    %eax,(%esp)
 842c154:	e8 ed ca c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842c159:	c7 44 24 04 02 01 00 	movl   $0x102,0x4(%esp)
 842c160:	00 
 842c161:	89 04 24             	mov    %eax,(%esp)
 842c164:	e8 ed ca c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842c169:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842c16c:	89 04 24             	mov    %eax,(%esp)
 842c16f:	e8 d2 ca c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842c174:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 842c17b:	ff 
 842c17c:	89 04 24             	mov    %eax,(%esp)
 842c17f:	e8 d2 ca c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842c184:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842c187:	89 04 24             	mov    %eax,(%esp)
 842c18a:	e8 bf ca c9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 842c18f:	89 04 24             	mov    %eax,(%esp)
 842c192:	e8 83 5c 02 00       	call   8451e1a <_ZN12CStreamGuard11GetInBufferI33SIG_SECURITY_CARD_UPDATE_FAIL_CNTEEPT_v>
 842c197:	89 45 f4             	mov    %eax,-0xc(%ebp)
 842c19a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842c19d:	8b 55 08             	mov    0x8(%ebp),%edx
 842c1a0:	89 10                	mov    %edx,(%eax)
 842c1a2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842c1a5:	8b 55 0c             	mov    0xc(%ebp),%edx
 842c1a8:	89 50 04             	mov    %edx,0x4(%eax)
 842c1ab:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 842c1b0:	8d 55 ec             	lea    -0x14(%ebp),%edx
 842c1b3:	89 54 24 08          	mov    %edx,0x8(%esp)
 842c1b7:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 842c1be:	00 
 842c1bf:	89 04 24             	mov    %eax,(%esp)
 842c1c2:	e8 17 4e 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 842c1c7:	eb 1b                	jmp    842c1e4 <_ZN30DB_SecurityCardUpdateCancelCnt11makeRequestEjj+0xd2>
 842c1c9:	89 d3                	mov    %edx,%ebx
 842c1cb:	89 c6                	mov    %eax,%esi
 842c1cd:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842c1d0:	89 04 24             	mov    %eax,(%esp)
 842c1d3:	e8 fa 06 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842c1d8:	89 f0                	mov    %esi,%eax
 842c1da:	89 da                	mov    %ebx,%edx
 842c1dc:	89 04 24             	mov    %eax,(%esp)
 842c1df:	e8 6c 75 6b 00       	call   8ae3750 <_Unwind_Resume>
 842c1e4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842c1e7:	89 04 24             	mov    %eax,(%esp)
 842c1ea:	e8 e3 06 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842c1ef:	83 c4 20             	add    $0x20,%esp
 842c1f2:	5b                   	pop    %ebx
 842c1f3:	5e                   	pop    %esi
 842c1f4:	5d                   	pop    %ebp
 842c1f5:	c3                   	ret

```

```c
// DB_SecurityCardUpdateCancelCnt::makeRequest @ 0x842c112

/* DB_SecurityCardUpdateCancelCnt::makeRequest(unsigned int, unsigned int) */

void DB_SecurityCardUpdateCancelCnt::makeRequest(uint param_1,uint param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_SECURITY_CARD_UPDATE_FAIL_CNT *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x6f25);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0842c164 to 0842c1c6 has its CatchHandler @ 0842c1c9 */
  CStreamGuard::operator<<(pCVar2,0x102);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_SECURITY_CARD_UPDATE_FAIL_CNT>(pCVar2);
  *(uint *)local_10 = param_1;
  *(uint *)(local_10 + 4) = param_2;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

