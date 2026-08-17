# DB_InsertQueryCounterDb

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 08425b0c DB_InsertQueryCounterDb::dispatch  [0x08425b0c-0x8425cdd] ===
 8425b0c:	55                   	push   %ebp
 8425b0d:	89 e5                	mov    %esp,%ebp
 8425b0f:	56                   	push   %esi
 8425b10:	53                   	push   %ebx
 8425b11:	81 ec 30 60 00 00    	sub    $0x6030,%esp
 8425b17:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8425b1e:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8425b25:	8d 85 e3 9f ff ff    	lea    -0x601d(%ebp),%eax
 8425b2b:	ba 01 60 00 00       	mov    $0x6001,%edx
 8425b30:	89 54 24 08          	mov    %edx,0x8(%esp)
 8425b34:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8425b3b:	00 
 8425b3c:	89 04 24             	mov    %eax,(%esp)
 8425b3f:	e8 7c 81 c5 ff       	call   807dcc0 <memset@plt>
 8425b44:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8425b47:	89 44 24 04          	mov    %eax,0x4(%esp)
 8425b4b:	8b 45 14             	mov    0x14(%ebp),%eax
 8425b4e:	89 04 24             	mov    %eax,(%esp)
 8425b51:	e8 6e 6a 1f 00       	call   861c5c4 <_ZN6StreamrsERi>
 8425b56:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8425b59:	89 44 24 08          	mov    %eax,0x8(%esp)
 8425b5d:	8d 85 e3 9f ff ff    	lea    -0x601d(%ebp),%eax
 8425b63:	89 44 24 04          	mov    %eax,0x4(%esp)
 8425b67:	8b 45 14             	mov    0x14(%ebp),%eax
 8425b6a:	89 04 24             	mov    %eax,(%esp)
 8425b6d:	e8 88 6c 1f 00       	call   861c7fa <_ZN6Stream10get_binaryEPvi>
 8425b72:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8425b77:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8425b7e:	00 
 8425b7f:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8425b86:	00 
 8425b87:	89 04 24             	mov    %eax,(%esp)
 8425b8a:	e8 af f6 fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8425b8f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8425b92:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8425b95:	89 04 24             	mov    %eax,(%esp)
 8425b98:	e8 65 e6 e7 ff       	call   82a4202 <_ZN5MySQL15GetQueryCounterEv>
 8425b9d:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8425ba0:	89 54 24 08          	mov    %edx,0x8(%esp)
 8425ba4:	8d 95 e3 9f ff ff    	lea    -0x601d(%ebp),%edx
 8425baa:	89 54 24 04          	mov    %edx,0x4(%esp)
 8425bae:	89 04 24             	mov    %eax,(%esp)
 8425bb1:	e8 ec 77 1c 00       	call   85ed3a2 <_ZN13CQueryCounter9SaveQueryEPKcRi>
 8425bb6:	83 f0 01             	xor    $0x1,%eax
 8425bb9:	84 c0                	test   %al,%al
 8425bbb:	74 0a                	je     8425bc7 <_ZN23DB_InsertQueryCounterDb8dispatchEiiP6Stream+0xbb>
 8425bbd:	bb 00 00 00 00       	mov    $0x0,%ebx
 8425bc2:	e9 0b 01 00 00       	jmp    8425cd2 <_ZN23DB_InsertQueryCounterDb8dispatchEiiP6Stream+0x1c6>
 8425bc7:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8425bcc:	c7 44 24 08 c1 63 00 	movl   $0x63c1,0x8(%esp)
 8425bd3:	00 
 8425bd4:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8425bdb:	08 
 8425bdc:	89 04 24             	mov    %eax,(%esp)
 8425bdf:	e8 a2 9e e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8425be4:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8425beb:	00 
 8425bec:	89 44 24 04          	mov    %eax,0x4(%esp)
 8425bf0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8425bf3:	89 04 24             	mov    %eax,(%esp)
 8425bf6:	e8 2b 30 ca ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8425bfb:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8425bfe:	89 04 24             	mov    %eax,(%esp)
 8425c01:	e8 40 30 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8425c06:	c7 44 24 04 bf 00 00 	movl   $0xbf,0x4(%esp)
 8425c0d:	00 
 8425c0e:	89 04 24             	mov    %eax,(%esp)
 8425c11:	e8 40 30 ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8425c16:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8425c19:	89 04 24             	mov    %eax,(%esp)
 8425c1c:	e8 25 30 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8425c21:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8425c28:	ff 
 8425c29:	89 04 24             	mov    %eax,(%esp)
 8425c2c:	e8 25 30 ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8425c31:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 8425c34:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8425c37:	89 04 24             	mov    %eax,(%esp)
 8425c3a:	e8 07 30 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8425c3f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8425c43:	89 04 24             	mov    %eax,(%esp)
 8425c46:	e8 0b 30 ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8425c4b:	8b 5d ec             	mov    -0x14(%ebp),%ebx
 8425c4e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8425c51:	89 04 24             	mov    %eax,(%esp)
 8425c54:	e8 ed 2f ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8425c59:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8425c5d:	89 04 24             	mov    %eax,(%esp)
 8425c60:	e8 f1 2f ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8425c65:	8b 5d ec             	mov    -0x14(%ebp),%ebx
 8425c68:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8425c6b:	89 04 24             	mov    %eax,(%esp)
 8425c6e:	e8 db 2f ca ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8425c73:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8425c77:	8d 95 e3 9f ff ff    	lea    -0x601d(%ebp),%edx
 8425c7d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8425c81:	89 04 24             	mov    %eax,(%esp)
 8425c84:	e8 c9 89 cb ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8425c89:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8425c8e:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 8425c91:	89 54 24 08          	mov    %edx,0x8(%esp)
 8425c95:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8425c9c:	00 
 8425c9d:	89 04 24             	mov    %eax,(%esp)
 8425ca0:	e8 39 b3 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8425ca5:	bb 01 00 00 00       	mov    $0x1,%ebx
 8425caa:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8425cad:	89 04 24             	mov    %eax,(%esp)
 8425cb0:	e8 1d 6c 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8425cb5:	eb 1b                	jmp    8425cd2 <_ZN23DB_InsertQueryCounterDb8dispatchEiiP6Stream+0x1c6>
 8425cb7:	89 d3                	mov    %edx,%ebx
 8425cb9:	89 c6                	mov    %eax,%esi
 8425cbb:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8425cbe:	89 04 24             	mov    %eax,(%esp)
 8425cc1:	e8 0c 6c 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8425cc6:	89 f0                	mov    %esi,%eax
 8425cc8:	89 da                	mov    %ebx,%edx
 8425cca:	89 04 24             	mov    %eax,(%esp)
 8425ccd:	e8 7e da 6b 00       	call   8ae3750 <_Unwind_Resume>
 8425cd2:	89 d8                	mov    %ebx,%eax
 8425cd4:	81 c4 30 60 00 00    	add    $0x6030,%esp
 8425cda:	5b                   	pop    %ebx
 8425cdb:	5e                   	pop    %esi
 8425cdc:	5d                   	pop    %ebp
 8425cdd:	c3                   	ret

```

```c
// DB_InsertQueryCounterDb::dispatch @ 0x8425b0c

/* DB_InsertQueryCounterDb::dispatch(int, int, Stream*) */

bool DB_InsertQueryCounterDb::dispatch(int param_1,int param_2,Stream *param_3)

{
  int iVar1;
  char cVar2;
  CQueryCounter *this;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  Stream *in_stack_00000010;
  char local_6021 [24577];
  CStreamGuard local_20 [8];
  int local_18;
  int local_14;
  MySQL *local_10;
  
  local_14 = 0;
  local_18 = 0;
  memset(local_6021,0,0x6001);
  Stream::operator>>(in_stack_00000010,&local_18);
  Stream::get_binary(in_stack_00000010,local_6021,local_18);
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  this = (CQueryCounter *)MySQL::GetQueryCounter(local_10);
  cVar2 = CQueryCounter::SaveQuery(this,local_6021,&local_14);
  if (cVar2 == '\x01') {
    pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x63c1);
    CStreamGuard::CStreamGuard(local_20,pSVar3,true);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_20);
                    /* try { // try from 08425c11 to 08425ca4 has its CatchHandler @ 08425cb7 */
    CStreamGuard::operator<<(pCVar4,0xbf);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_20);
    CStreamGuard::operator<<(pCVar4,-1);
    iVar1 = local_14;
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_20);
    CStreamGuard::operator<<(pCVar4,iVar1);
    iVar1 = local_18;
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_20);
    CStreamGuard::operator<<(pCVar4,iVar1);
    iVar1 = local_18;
    pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_20);
    CStreamGuard::put_binary(pCVar4,local_6021,iVar1);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_20);
    CStreamGuard::~CStreamGuard(local_20);
  }
  return cVar2 == '\x01';
}

```

