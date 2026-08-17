# DB_UpdateInGameEventHistory

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 08444972 DB_UpdateInGameEventHistory::dispatch  [0x08444972-0x8444ac3] ===
 8444972:	55                   	push   %ebp
 8444973:	89 e5                	mov    %esp,%ebp
 8444975:	57                   	push   %edi
 8444976:	56                   	push   %esi
 8444977:	53                   	push   %ebx
 8444978:	83 ec 4c             	sub    $0x4c,%esp
 844497b:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8444980:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8444987:	00 
 8444988:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 844498f:	00 
 8444990:	89 04 24             	mov    %eax,(%esp)
 8444993:	e8 a6 08 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8444998:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 844499b:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 84449a2:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84449a5:	89 44 24 04          	mov    %eax,0x4(%esp)
 84449a9:	8b 45 14             	mov    0x14(%ebp),%eax
 84449ac:	89 04 24             	mov    %eax,(%esp)
 84449af:	e8 e2 7d 1d 00       	call   861c796 <_ZN6StreamrsERj>
 84449b4:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84449b7:	89 44 24 04          	mov    %eax,0x4(%esp)
 84449bb:	8b 45 14             	mov    0x14(%ebp),%eax
 84449be:	89 04 24             	mov    %eax,(%esp)
 84449c1:	e8 fe 7b 1d 00       	call   861c5c4 <_ZN6StreamrsERi>
 84449c6:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84449c9:	89 44 24 04          	mov    %eax,0x4(%esp)
 84449cd:	8b 45 14             	mov    0x14(%ebp),%eax
 84449d0:	89 04 24             	mov    %eax,(%esp)
 84449d3:	e8 be 7d 1d 00       	call   861c796 <_ZN6StreamrsERj>
 84449d8:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84449db:	89 44 24 04          	mov    %eax,0x4(%esp)
 84449df:	8b 45 14             	mov    0x14(%ebp),%eax
 84449e2:	89 04 24             	mov    %eax,(%esp)
 84449e5:	e8 ac 7d 1d 00       	call   861c796 <_ZN6StreamrsERj>
 84449ea:	8b 5d dc             	mov    -0x24(%ebp),%ebx
 84449ed:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84449f0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84449f7:	00 
 84449f8:	89 04 24             	mov    %eax,(%esp)
 84449fb:	e8 4b 46 cc ff       	call   810904b <_Z14NumberToStringji>
 8444a00:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 8444a03:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8444a06:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8444a0a:	89 44 24 10          	mov    %eax,0x10(%esp)
 8444a0e:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8444a12:	89 54 24 08          	mov    %edx,0x8(%esp)
 8444a16:	c7 44 24 04 ec 71 c5 	movl   $0x8c571ec,0x4(%esp)
 8444a1d:	08 
 8444a1e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8444a21:	89 04 24             	mov    %eax,(%esp)
 8444a24:	e8 97 f7 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8444a29:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8444a30:	00 
 8444a31:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8444a34:	89 04 24             	mov    %eax,(%esp)
 8444a37:	e8 ea f8 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 8444a3c:	83 f0 01             	xor    $0x1,%eax
 8444a3f:	84 c0                	test   %al,%al
 8444a41:	75 11                	jne    8444a54 <_ZN27DB_UpdateInGameEventHistory8dispatchEiiP6Stream+0xe2>
 8444a43:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8444a46:	89 04 24             	mov    %eax,(%esp)
 8444a49:	e8 c2 f8 fa ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8444a4e:	09 d0                	or     %edx,%eax
 8444a50:	85 c0                	test   %eax,%eax
 8444a52:	75 07                	jne    8444a5b <_ZN27DB_UpdateInGameEventHistory8dispatchEiiP6Stream+0xe9>
 8444a54:	b8 01 00 00 00       	mov    $0x1,%eax
 8444a59:	eb 05                	jmp    8444a60 <_ZN27DB_UpdateInGameEventHistory8dispatchEiiP6Stream+0xee>
 8444a5b:	b8 00 00 00 00       	mov    $0x0,%eax
 8444a60:	84 c0                	test   %al,%al
 8444a62:	74 52                	je     8444ab6 <_ZN27DB_UpdateInGameEventHistory8dispatchEiiP6Stream+0x144>
 8444a64:	8b 7d d4             	mov    -0x2c(%ebp),%edi
 8444a67:	8b 75 d8             	mov    -0x28(%ebp),%esi
 8444a6a:	8b 5d dc             	mov    -0x24(%ebp),%ebx
 8444a6d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8444a70:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8444a77:	00 
 8444a78:	89 04 24             	mov    %eax,(%esp)
 8444a7b:	e8 cb 45 cc ff       	call   810904b <_Z14NumberToStringji>
 8444a80:	89 7c 24 14          	mov    %edi,0x14(%esp)
 8444a84:	89 74 24 10          	mov    %esi,0x10(%esp)
 8444a88:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8444a8c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8444a90:	c7 44 24 04 48 72 c5 	movl   $0x8c57248,0x4(%esp)
 8444a97:	08 
 8444a98:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8444a9b:	89 04 24             	mov    %eax,(%esp)
 8444a9e:	e8 1d f7 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8444aa3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8444aaa:	00 
 8444aab:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8444aae:	89 04 24             	mov    %eax,(%esp)
 8444ab1:	e8 70 f8 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 8444ab6:	b8 01 00 00 00       	mov    $0x1,%eax
 8444abb:	83 c4 4c             	add    $0x4c,%esp
 8444abe:	5b                   	pop    %ebx
 8444abf:	5e                   	pop    %esi
 8444ac0:	5f                   	pop    %edi
 8444ac1:	5d                   	pop    %ebp
 8444ac2:	c3                   	ret
 8444ac3:	90                   	nop

```

```c
// DB_UpdateInGameEventHistory::dispatch @ 0x8444972

/* DB_UpdateInGameEventHistory::dispatch(int, int, Stream*) */

undefined4 DB_UpdateInGameEventHistory::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  Stream *in_stack_00000010;
  uint local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  MySQL *local_20;
  
  local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  local_24 = 0;
  Stream::operator>>(in_stack_00000010,&local_24);
  Stream::operator>>(in_stack_00000010,&local_28);
  Stream::operator>>(in_stack_00000010,&local_2c);
  Stream::operator>>(in_stack_00000010,&local_30);
  iVar2 = local_28;
  uVar4 = NumberToString(local_24,0);
  MySQL::set_query(local_20,
                   "upDate event_ingame_history set history_1 = %u,history_2 = %u where m_id=%s and type = %d"
                   ,local_2c,local_30,uVar4,iVar2);
  cVar3 = MySQL::exec(local_20,true);
  if (cVar3 == '\x01') {
    lVar5 = MySQL::getAffectedRowCount(local_20);
    if (lVar5 != 0) {
      bVar1 = false;
      goto LAB_08444a60;
    }
  }
  bVar1 = true;
LAB_08444a60:
  if (bVar1) {
    uVar4 = NumberToString(local_24,0);
    MySQL::set_query(local_20,
                     "inSert into event_ingame_history(m_id,type,history_1,history_2) values(%s,%d,%d,%d)"
                     ,uVar4,local_28,local_2c,local_30);
    MySQL::exec(local_20,true);
  }
  return 1;
}

```

---

## makeRequest

```asm
// === 08444ac4 DB_UpdateInGameEventHistory::makeRequest  [0x08444ac4-0x8444be9] ===
 8444ac4:	55                   	push   %ebp
 8444ac5:	89 e5                	mov    %esp,%ebp
 8444ac7:	56                   	push   %esi
 8444ac8:	53                   	push   %ebx
 8444ac9:	83 ec 20             	sub    $0x20,%esp
 8444acc:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8444ad1:	c7 44 24 08 a8 ab 00 	movl   $0xaba8,0x8(%esp)
 8444ad8:	00 
 8444ad9:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8444ae0:	08 
 8444ae1:	89 04 24             	mov    %eax,(%esp)
 8444ae4:	e8 9d af e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8444ae9:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8444af0:	00 
 8444af1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8444af5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8444af8:	89 04 24             	mov    %eax,(%esp)
 8444afb:	e8 26 41 c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8444b00:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8444b03:	89 04 24             	mov    %eax,(%esp)
 8444b06:	e8 3b 41 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8444b0b:	c7 44 24 04 ad 02 00 	movl   $0x2ad,0x4(%esp)
 8444b12:	00 
 8444b13:	89 04 24             	mov    %eax,(%esp)
 8444b16:	e8 3b 41 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8444b1b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8444b1e:	89 04 24             	mov    %eax,(%esp)
 8444b21:	e8 20 41 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8444b26:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8444b2d:	ff 
 8444b2e:	89 04 24             	mov    %eax,(%esp)
 8444b31:	e8 20 41 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8444b36:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8444b39:	89 04 24             	mov    %eax,(%esp)
 8444b3c:	e8 05 41 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8444b41:	8b 55 08             	mov    0x8(%ebp),%edx
 8444b44:	89 54 24 04          	mov    %edx,0x4(%esp)
 8444b48:	89 04 24             	mov    %eax,(%esp)
 8444b4b:	e8 42 d7 c9 ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 8444b50:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8444b53:	89 04 24             	mov    %eax,(%esp)
 8444b56:	e8 eb 40 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8444b5b:	8b 55 0c             	mov    0xc(%ebp),%edx
 8444b5e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8444b62:	89 04 24             	mov    %eax,(%esp)
 8444b65:	e8 ec 40 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8444b6a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8444b6d:	89 04 24             	mov    %eax,(%esp)
 8444b70:	e8 d1 40 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8444b75:	8b 55 10             	mov    0x10(%ebp),%edx
 8444b78:	89 54 24 04          	mov    %edx,0x4(%esp)
 8444b7c:	89 04 24             	mov    %eax,(%esp)
 8444b7f:	e8 d2 40 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8444b84:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8444b87:	89 04 24             	mov    %eax,(%esp)
 8444b8a:	e8 b7 40 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8444b8f:	8b 55 14             	mov    0x14(%ebp),%edx
 8444b92:	89 54 24 04          	mov    %edx,0x4(%esp)
 8444b96:	89 04 24             	mov    %eax,(%esp)
 8444b99:	e8 b8 40 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8444b9e:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8444ba3:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8444ba6:	89 54 24 08          	mov    %edx,0x8(%esp)
 8444baa:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8444bb1:	00 
 8444bb2:	89 04 24             	mov    %eax,(%esp)
 8444bb5:	e8 24 c4 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8444bba:	eb 1b                	jmp    8444bd7 <_ZN27DB_UpdateInGameEventHistory11makeRequestEjiii+0x113>
 8444bbc:	89 d3                	mov    %edx,%ebx
 8444bbe:	89 c6                	mov    %eax,%esi
 8444bc0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8444bc3:	89 04 24             	mov    %eax,(%esp)
 8444bc6:	e8 07 7d 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8444bcb:	89 f0                	mov    %esi,%eax
 8444bcd:	89 da                	mov    %ebx,%edx
 8444bcf:	89 04 24             	mov    %eax,(%esp)
 8444bd2:	e8 79 eb 69 00       	call   8ae3750 <_Unwind_Resume>
 8444bd7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8444bda:	89 04 24             	mov    %eax,(%esp)
 8444bdd:	e8 f0 7c 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8444be2:	83 c4 20             	add    $0x20,%esp
 8444be5:	5b                   	pop    %ebx
 8444be6:	5e                   	pop    %esi
 8444be7:	5d                   	pop    %ebp
 8444be8:	c3                   	ret
 8444be9:	90                   	nop

```

```c
// DB_UpdateInGameEventHistory::makeRequest @ 0x8444ac4

/* DB_UpdateInGameEventHistory::makeRequest(unsigned int, int, int, int) */

void DB_UpdateInGameEventHistory::makeRequest(uint param_1,int param_2,int param_3,int param_4)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xaba8);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08444b16 to 08444bb9 has its CatchHandler @ 08444bbc */
  CStreamGuard::operator<<(pCVar2,0x2ad);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_4);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

