# DB_UpdateCompoundEmblemStatics

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 08439c6c DB_UpdateCompoundEmblemStatics::dispatch  [0x08439c6c-0x8439deb] ===
 8439c6c:	55                   	push   %ebp
 8439c6d:	89 e5                	mov    %esp,%ebp
 8439c6f:	57                   	push   %edi
 8439c70:	56                   	push   %esi
 8439c71:	53                   	push   %ebx
 8439c72:	83 ec 5c             	sub    $0x5c,%esp
 8439c75:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8439c7a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8439c81:	00 
 8439c82:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8439c89:	00 
 8439c8a:	89 04 24             	mov    %eax,(%esp)
 8439c8d:	e8 ac b5 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8439c92:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8439c95:	8b 45 14             	mov    0x14(%ebp),%eax
 8439c98:	89 04 24             	mov    %eax,(%esp)
 8439c9b:	e8 1c 9b 01 00       	call   84537bc <_ZN6Stream12GetOutBufferI36SIG_UPDATE_COMPOUND_EMBLEM_STATISTICEEPT_v>
 8439ca0:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8439ca3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8439ca6:	8b 48 1c             	mov    0x1c(%eax),%ecx
 8439ca9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8439cac:	8b 40 18             	mov    0x18(%eax),%eax
 8439caf:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8439cb2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8439cb5:	8b 40 14             	mov    0x14(%eax),%eax
 8439cb8:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8439cbb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8439cbe:	8b 78 10             	mov    0x10(%eax),%edi
 8439cc1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8439cc4:	8b 70 0c             	mov    0xc(%eax),%esi
 8439cc7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8439cca:	8b 58 08             	mov    0x8(%eax),%ebx
 8439ccd:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8439cd0:	8b 50 04             	mov    0x4(%eax),%edx
 8439cd3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8439cd6:	8b 00                	mov    (%eax),%eax
 8439cd8:	89 4c 24 24          	mov    %ecx,0x24(%esp)
 8439cdc:	8b 4d c8             	mov    -0x38(%ebp),%ecx
 8439cdf:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 8439ce3:	8b 4d cc             	mov    -0x34(%ebp),%ecx
 8439ce6:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 8439cea:	89 7c 24 18          	mov    %edi,0x18(%esp)
 8439cee:	89 74 24 14          	mov    %esi,0x14(%esp)
 8439cf2:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8439cf6:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8439cfa:	89 44 24 08          	mov    %eax,0x8(%esp)
 8439cfe:	c7 44 24 04 94 49 c5 	movl   $0x8c54994,0x4(%esp)
 8439d05:	08 
 8439d06:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8439d09:	89 04 24             	mov    %eax,(%esp)
 8439d0c:	e8 af a4 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8439d11:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8439d18:	00 
 8439d19:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8439d1c:	89 04 24             	mov    %eax,(%esp)
 8439d1f:	e8 02 a6 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8439d24:	83 f0 01             	xor    $0x1,%eax
 8439d27:	84 c0                	test   %al,%al
 8439d29:	75 11                	jne    8439d3c <_ZN30DB_UpdateCompoundEmblemStatics8dispatchEiiP6Stream+0xd0>
 8439d2b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8439d2e:	89 04 24             	mov    %eax,(%esp)
 8439d31:	e8 da a5 fb ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8439d36:	09 d0                	or     %edx,%eax
 8439d38:	85 c0                	test   %eax,%eax
 8439d3a:	75 07                	jne    8439d43 <_ZN30DB_UpdateCompoundEmblemStatics8dispatchEiiP6Stream+0xd7>
 8439d3c:	b8 01 00 00 00       	mov    $0x1,%eax
 8439d41:	eb 05                	jmp    8439d48 <_ZN30DB_UpdateCompoundEmblemStatics8dispatchEiiP6Stream+0xdc>
 8439d43:	b8 00 00 00 00       	mov    $0x0,%eax
 8439d48:	84 c0                	test   %al,%al
 8439d4a:	0f 84 8f 00 00 00    	je     8439ddf <_ZN30DB_UpdateCompoundEmblemStatics8dispatchEiiP6Stream+0x173>
 8439d50:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8439d53:	8b 08                	mov    (%eax),%ecx
 8439d55:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8439d58:	8b 40 1c             	mov    0x1c(%eax),%eax
 8439d5b:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8439d5e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8439d61:	8b 40 18             	mov    0x18(%eax),%eax
 8439d64:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8439d67:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8439d6a:	8b 78 14             	mov    0x14(%eax),%edi
 8439d6d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8439d70:	8b 70 10             	mov    0x10(%eax),%esi
 8439d73:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8439d76:	8b 58 0c             	mov    0xc(%eax),%ebx
 8439d79:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8439d7c:	8b 50 08             	mov    0x8(%eax),%edx
 8439d7f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8439d82:	8b 40 04             	mov    0x4(%eax),%eax
 8439d85:	89 4c 24 24          	mov    %ecx,0x24(%esp)
 8439d89:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 8439d8c:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 8439d90:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 8439d93:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 8439d97:	89 7c 24 18          	mov    %edi,0x18(%esp)
 8439d9b:	89 74 24 14          	mov    %esi,0x14(%esp)
 8439d9f:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8439da3:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8439da7:	89 44 24 08          	mov    %eax,0x8(%esp)
 8439dab:	c7 44 24 04 50 4a c5 	movl   $0x8c54a50,0x4(%esp)
 8439db2:	08 
 8439db3:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8439db6:	89 04 24             	mov    %eax,(%esp)
 8439db9:	e8 02 a4 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8439dbe:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8439dc5:	00 
 8439dc6:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8439dc9:	89 04 24             	mov    %eax,(%esp)
 8439dcc:	e8 55 a5 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8439dd1:	83 f0 01             	xor    $0x1,%eax
 8439dd4:	84 c0                	test   %al,%al
 8439dd6:	74 07                	je     8439ddf <_ZN30DB_UpdateCompoundEmblemStatics8dispatchEiiP6Stream+0x173>
 8439dd8:	b8 00 00 00 00       	mov    $0x0,%eax
 8439ddd:	eb 05                	jmp    8439de4 <_ZN30DB_UpdateCompoundEmblemStatics8dispatchEiiP6Stream+0x178>
 8439ddf:	b8 01 00 00 00       	mov    $0x1,%eax
 8439de4:	83 c4 5c             	add    $0x5c,%esp
 8439de7:	5b                   	pop    %ebx
 8439de8:	5e                   	pop    %esi
 8439de9:	5f                   	pop    %edi
 8439dea:	5d                   	pop    %ebp
 8439deb:	c3                   	ret

```

```c
// DB_UpdateCompoundEmblemStatics::dispatch @ 0x8439c6c

/* DB_UpdateCompoundEmblemStatics::dispatch(int, int, Stream*) */

undefined4 DB_UpdateCompoundEmblemStatics::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  MySQL *this;
  SIG_UPDATE_COMPOUND_EMBLEM_STATISTIC *pSVar3;
  longlong lVar4;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  pSVar3 = Stream::GetOutBuffer<SIG_UPDATE_COMPOUND_EMBLEM_STATISTIC>(in_stack_00000010);
  MySQL::set_query(this,
                   "inSert into log_emblem_compound(occ_date, channel_no, grade0, grade1, grade2, grade3, grade4, grade5, grade6) values(DATE_SUB(CURDATE(), INTERVAL 1 DAY), %d, %d, %d, %d, %d, %d, %d, %d)"
                   ,*(undefined4 *)pSVar3,*(undefined4 *)(pSVar3 + 4),*(undefined4 *)(pSVar3 + 8),
                   *(undefined4 *)(pSVar3 + 0xc),*(undefined4 *)(pSVar3 + 0x10),
                   *(undefined4 *)(pSVar3 + 0x14),*(undefined4 *)(pSVar3 + 0x18),
                   *(undefined4 *)(pSVar3 + 0x1c));
  cVar2 = MySQL::exec(this,true);
  if ((cVar2 == '\x01') && (lVar4 = MySQL::getAffectedRowCount(this), lVar4 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    MySQL::set_query(this,
                     "upDate log_emblem_compound set grade0 = grade0+%d, grade1=grade1+%d, grade2=grade2+%d, grade3=grade3+%d, grade4=grade4+%d, grade5=grade5+%d, grade6=grade6+%d where occ_date=DATE_SUB(CURDATE(), INTERVAL 1 DAY) and channel_no=%d"
                     ,*(undefined4 *)(pSVar3 + 4),*(undefined4 *)(pSVar3 + 8),
                     *(undefined4 *)(pSVar3 + 0xc),*(undefined4 *)(pSVar3 + 0x10),
                     *(undefined4 *)(pSVar3 + 0x14),*(undefined4 *)(pSVar3 + 0x18),
                     *(undefined4 *)(pSVar3 + 0x1c),*(undefined4 *)pSVar3);
    cVar2 = MySQL::exec(this,true);
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  return 1;
}

```

---

## makeRequest

```asm
// === 08439dec DB_UpdateCompoundEmblemStatics::makeRequest  [0x08439dec-0x8439f05] ===
 8439dec:	55                   	push   %ebp
 8439ded:	89 e5                	mov    %esp,%ebp
 8439def:	56                   	push   %esi
 8439df0:	53                   	push   %ebx
 8439df1:	83 ec 20             	sub    $0x20,%esp
 8439df4:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8439df9:	c7 44 24 08 fc 87 00 	movl   $0x87fc,0x8(%esp)
 8439e00:	00 
 8439e01:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8439e08:	08 
 8439e09:	89 04 24             	mov    %eax,(%esp)
 8439e0c:	e8 75 5c e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8439e11:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8439e18:	00 
 8439e19:	89 44 24 04          	mov    %eax,0x4(%esp)
 8439e1d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8439e20:	89 04 24             	mov    %eax,(%esp)
 8439e23:	e8 fe ed c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8439e28:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8439e2b:	89 04 24             	mov    %eax,(%esp)
 8439e2e:	e8 13 ee c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8439e33:	c7 44 24 04 c4 01 00 	movl   $0x1c4,0x4(%esp)
 8439e3a:	00 
 8439e3b:	89 04 24             	mov    %eax,(%esp)
 8439e3e:	e8 13 ee c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8439e43:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8439e46:	89 04 24             	mov    %eax,(%esp)
 8439e49:	e8 f8 ed c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8439e4e:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8439e55:	ff 
 8439e56:	89 04 24             	mov    %eax,(%esp)
 8439e59:	e8 f8 ed c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8439e5e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8439e61:	89 04 24             	mov    %eax,(%esp)
 8439e64:	e8 e5 ed c8 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8439e69:	89 04 24             	mov    %eax,(%esp)
 8439e6c:	e8 9f 99 01 00       	call   8453810 <_ZN12CStreamGuard11GetInBufferI36SIG_UPDATE_COMPOUND_EMBLEM_STATISTICEEPT_v>
 8439e71:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8439e74:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8439e77:	8b 55 08             	mov    0x8(%ebp),%edx
 8439e7a:	89 10                	mov    %edx,(%eax)
 8439e7c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8439e7f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8439e82:	89 50 04             	mov    %edx,0x4(%eax)
 8439e85:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8439e88:	8b 55 10             	mov    0x10(%ebp),%edx
 8439e8b:	89 50 08             	mov    %edx,0x8(%eax)
 8439e8e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8439e91:	8b 55 14             	mov    0x14(%ebp),%edx
 8439e94:	89 50 0c             	mov    %edx,0xc(%eax)
 8439e97:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8439e9a:	8b 55 18             	mov    0x18(%ebp),%edx
 8439e9d:	89 50 10             	mov    %edx,0x10(%eax)
 8439ea0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8439ea3:	8b 55 1c             	mov    0x1c(%ebp),%edx
 8439ea6:	89 50 14             	mov    %edx,0x14(%eax)
 8439ea9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8439eac:	8b 55 20             	mov    0x20(%ebp),%edx
 8439eaf:	89 50 18             	mov    %edx,0x18(%eax)
 8439eb2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8439eb5:	8b 55 24             	mov    0x24(%ebp),%edx
 8439eb8:	89 50 1c             	mov    %edx,0x1c(%eax)
 8439ebb:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8439ec0:	8d 55 ec             	lea    -0x14(%ebp),%edx
 8439ec3:	89 54 24 08          	mov    %edx,0x8(%esp)
 8439ec7:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8439ece:	00 
 8439ecf:	89 04 24             	mov    %eax,(%esp)
 8439ed2:	e8 07 71 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8439ed7:	eb 1b                	jmp    8439ef4 <_ZN30DB_UpdateCompoundEmblemStatics11makeRequestEijjjjjjj+0x108>
 8439ed9:	89 d3                	mov    %edx,%ebx
 8439edb:	89 c6                	mov    %eax,%esi
 8439edd:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8439ee0:	89 04 24             	mov    %eax,(%esp)
 8439ee3:	e8 ea 29 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8439ee8:	89 f0                	mov    %esi,%eax
 8439eea:	89 da                	mov    %ebx,%edx
 8439eec:	89 04 24             	mov    %eax,(%esp)
 8439eef:	e8 5c 98 6a 00       	call   8ae3750 <_Unwind_Resume>
 8439ef4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8439ef7:	89 04 24             	mov    %eax,(%esp)
 8439efa:	e8 d3 29 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8439eff:	83 c4 20             	add    $0x20,%esp
 8439f02:	5b                   	pop    %ebx
 8439f03:	5e                   	pop    %esi
 8439f04:	5d                   	pop    %ebp
 8439f05:	c3                   	ret

```

```c
// DB_UpdateCompoundEmblemStatics::makeRequest @ 0x8439dec

/* DB_UpdateCompoundEmblemStatics::makeRequest(int, unsigned int, unsigned int, unsigned int,
   unsigned int, unsigned int, unsigned int, unsigned int) */

void DB_UpdateCompoundEmblemStatics::makeRequest
               (int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
               uint param_7,uint param_8)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_UPDATE_COMPOUND_EMBLEM_STATISTIC *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x87fc);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08439e3e to 08439ed6 has its CatchHandler @ 08439ed9 */
  CStreamGuard::operator<<(pCVar2,0x1c4);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_UPDATE_COMPOUND_EMBLEM_STATISTIC>(pCVar2);
  *(int *)local_10 = param_1;
  *(uint *)(local_10 + 4) = param_2;
  *(uint *)(local_10 + 8) = param_3;
  *(uint *)(local_10 + 0xc) = param_4;
  *(uint *)(local_10 + 0x10) = param_5;
  *(uint *)(local_10 + 0x14) = param_6;
  *(uint *)(local_10 + 0x18) = param_7;
  *(uint *)(local_10 + 0x1c) = param_8;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

