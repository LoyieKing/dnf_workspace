# DB_LoadPuUserCheck

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0844bd5c DB_LoadPuUserCheck::dispatch  [0x0844bd5c-0x844bee1] ===
 844bd5c:	55                   	push   %ebp
 844bd5d:	89 e5                	mov    %esp,%ebp
 844bd5f:	56                   	push   %esi
 844bd60:	53                   	push   %ebx
 844bd61:	83 ec 30             	sub    $0x30,%esp
 844bd64:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 844bd69:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 844bd70:	00 
 844bd71:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844bd78:	00 
 844bd79:	89 04 24             	mov    %eax,(%esp)
 844bd7c:	e8 bd 94 fa ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 844bd81:	89 45 ec             	mov    %eax,-0x14(%ebp)
 844bd84:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 844bd88:	75 0a                	jne    844bd94 <_ZN18DB_LoadPuUserCheck8dispatchEiiP6Stream+0x38>
 844bd8a:	bb 00 00 00 00       	mov    $0x0,%ebx
 844bd8f:	e9 44 01 00 00       	jmp    844bed8 <_ZN18DB_LoadPuUserCheck8dispatchEiiP6Stream+0x17c>
 844bd94:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 844bd9b:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 844bd9f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 844bda2:	89 44 24 04          	mov    %eax,0x4(%esp)
 844bda6:	8b 45 14             	mov    0x14(%ebp),%eax
 844bda9:	89 04 24             	mov    %eax,(%esp)
 844bdac:	e8 e5 09 1d 00       	call   861c796 <_ZN6StreamrsERj>
 844bdb1:	8b 45 e8             	mov    -0x18(%ebp),%eax
 844bdb4:	89 44 24 08          	mov    %eax,0x8(%esp)
 844bdb8:	c7 44 24 04 18 98 c5 	movl   $0x8c59818,0x4(%esp)
 844bdbf:	08 
 844bdc0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 844bdc3:	89 04 24             	mov    %eax,(%esp)
 844bdc6:	e8 f5 83 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 844bdcb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844bdd2:	00 
 844bdd3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 844bdd6:	89 04 24             	mov    %eax,(%esp)
 844bdd9:	e8 48 85 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 844bdde:	83 f0 01             	xor    $0x1,%eax
 844bde1:	84 c0                	test   %al,%al
 844bde3:	74 0a                	je     844bdef <_ZN18DB_LoadPuUserCheck8dispatchEiiP6Stream+0x93>
 844bde5:	bb 00 00 00 00       	mov    $0x0,%ebx
 844bdea:	e9 e9 00 00 00       	jmp    844bed8 <_ZN18DB_LoadPuUserCheck8dispatchEiiP6Stream+0x17c>
 844bdef:	8b 45 ec             	mov    -0x14(%ebp),%eax
 844bdf2:	89 04 24             	mov    %eax,(%esp)
 844bdf5:	e8 72 65 c9 ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 844bdfa:	85 c0                	test   %eax,%eax
 844bdfc:	0f 95 c0             	setne  %al
 844bdff:	84 c0                	test   %al,%al
 844be01:	74 04                	je     844be07 <_ZN18DB_LoadPuUserCheck8dispatchEiiP6Stream+0xab>
 844be03:	c6 45 f3 01          	movb   $0x1,-0xd(%ebp)
 844be07:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 844be0c:	c7 44 24 08 ad bc 00 	movl   $0xbcad,0x8(%esp)
 844be13:	00 
 844be14:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 844be1b:	08 
 844be1c:	89 04 24             	mov    %eax,(%esp)
 844be1f:	e8 62 3c e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 844be24:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 844be2b:	00 
 844be2c:	89 44 24 04          	mov    %eax,0x4(%esp)
 844be30:	8d 45 e0             	lea    -0x20(%ebp),%eax
 844be33:	89 04 24             	mov    %eax,(%esp)
 844be36:	e8 eb cd c7 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 844be3b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 844be3e:	89 04 24             	mov    %eax,(%esp)
 844be41:	e8 00 ce c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844be46:	c7 44 24 04 e1 02 00 	movl   $0x2e1,0x4(%esp)
 844be4d:	00 
 844be4e:	89 04 24             	mov    %eax,(%esp)
 844be51:	e8 00 ce c7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 844be56:	8d 45 e0             	lea    -0x20(%ebp),%eax
 844be59:	89 04 24             	mov    %eax,(%esp)
 844be5c:	e8 e5 cd c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844be61:	8b 55 10             	mov    0x10(%ebp),%edx
 844be64:	89 54 24 04          	mov    %edx,0x4(%esp)
 844be68:	89 04 24             	mov    %eax,(%esp)
 844be6b:	e8 e6 cd c7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 844be70:	8d 45 e0             	lea    -0x20(%ebp),%eax
 844be73:	89 04 24             	mov    %eax,(%esp)
 844be76:	e8 d3 cd c7 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 844be7b:	89 04 24             	mov    %eax,(%esp)
 844be7e:	e8 dd 89 00 00       	call   8454860 <_ZN12CStreamGuard11GetInBufferI21SIG_LOAD_PU_USER_INFOEEPT_v>
 844be83:	89 45 f4             	mov    %eax,-0xc(%ebp)
 844be86:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844be89:	0f b6 55 f3          	movzbl -0xd(%ebp),%edx
 844be8d:	88 10                	mov    %dl,(%eax)
 844be8f:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 844be94:	8d 55 e0             	lea    -0x20(%ebp),%edx
 844be97:	89 54 24 08          	mov    %edx,0x8(%esp)
 844be9b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844bea2:	00 
 844bea3:	89 04 24             	mov    %eax,(%esp)
 844bea6:	e8 33 51 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 844beab:	bb 01 00 00 00       	mov    $0x1,%ebx
 844beb0:	8d 45 e0             	lea    -0x20(%ebp),%eax
 844beb3:	89 04 24             	mov    %eax,(%esp)
 844beb6:	e8 17 0a 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 844bebb:	eb 1b                	jmp    844bed8 <_ZN18DB_LoadPuUserCheck8dispatchEiiP6Stream+0x17c>
 844bebd:	89 d3                	mov    %edx,%ebx
 844bebf:	89 c6                	mov    %eax,%esi
 844bec1:	8d 45 e0             	lea    -0x20(%ebp),%eax
 844bec4:	89 04 24             	mov    %eax,(%esp)
 844bec7:	e8 06 0a 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 844becc:	89 f0                	mov    %esi,%eax
 844bece:	89 da                	mov    %ebx,%edx
 844bed0:	89 04 24             	mov    %eax,(%esp)
 844bed3:	e8 78 78 69 00       	call   8ae3750 <_Unwind_Resume>
 844bed8:	89 d8                	mov    %ebx,%eax
 844beda:	83 c4 30             	add    $0x30,%esp
 844bedd:	5b                   	pop    %ebx
 844bede:	5e                   	pop    %esi
 844bedf:	5d                   	pop    %ebp
 844bee0:	c3                   	ret
 844bee1:	90                   	nop

```

```c
// DB_LoadPuUserCheck::dispatch @ 0x844bd5c

/* DB_LoadPuUserCheck::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_LoadPuUserCheck::dispatch(DB_LoadPuUserCheck *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  int iVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  undefined4 uVar5;
  CStreamGuard local_24 [8];
  uint local_1c;
  MySQL *local_18;
  SIG_LOAD_PU_USER_INFO local_11;
  SIG_LOAD_PU_USER_INFO *local_10;
  
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  if (local_18 == (MySQL *)0x0) {
    uVar5 = 0;
  }
  else {
    local_1c = 0;
    local_11 = (SIG_LOAD_PU_USER_INFO)0x0;
    Stream::operator>>(param_3,&local_1c);
    MySQL::set_query(local_18,"seLect m_id from pu_user_list where m_id = %u",local_1c);
    cVar1 = MySQL::exec(local_18,true);
    if (cVar1 == '\x01') {
      iVar2 = MySQL::get_n_rows(local_18);
      if (iVar2 != 0) {
        local_11 = (SIG_LOAD_PU_USER_INFO)0x1;
      }
      pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xbcad);
      CStreamGuard::CStreamGuard(local_24,pSVar3,true);
      pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_24);
                    /* try { // try from 0844be51 to 0844beaa has its CatchHandler @ 0844bebd */
      CStreamGuard::operator<<(pCVar4,0x2e1);
      pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_24);
      CStreamGuard::operator<<(pCVar4,param_2);
      pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_24);
      local_10 = CStreamGuard::GetInBuffer<SIG_LOAD_PU_USER_INFO>(pCVar4);
      *local_10 = local_11;
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_24);
      uVar5 = 1;
      CStreamGuard::~CStreamGuard(local_24);
    }
    else {
      uVar5 = 0;
    }
  }
  return uVar5;
}

```

---

## makeRequest

```asm
// === 0844bee2 DB_LoadPuUserCheck::makeRequest  [0x0844bee2-0x844bfb7] ===
 844bee2:	55                   	push   %ebp
 844bee3:	89 e5                	mov    %esp,%ebp
 844bee5:	56                   	push   %esi
 844bee6:	53                   	push   %ebx
 844bee7:	83 ec 20             	sub    $0x20,%esp
 844beea:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 844beef:	c7 44 24 08 c2 bc 00 	movl   $0xbcc2,0x8(%esp)
 844bef6:	00 
 844bef7:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 844befe:	08 
 844beff:	89 04 24             	mov    %eax,(%esp)
 844bf02:	e8 7f 3b e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 844bf07:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 844bf0e:	00 
 844bf0f:	89 44 24 04          	mov    %eax,0x4(%esp)
 844bf13:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844bf16:	89 04 24             	mov    %eax,(%esp)
 844bf19:	e8 08 cd c7 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 844bf1e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844bf21:	89 04 24             	mov    %eax,(%esp)
 844bf24:	e8 1d cd c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844bf29:	c7 44 24 04 e1 02 00 	movl   $0x2e1,0x4(%esp)
 844bf30:	00 
 844bf31:	89 04 24             	mov    %eax,(%esp)
 844bf34:	e8 1d cd c7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 844bf39:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844bf3c:	89 04 24             	mov    %eax,(%esp)
 844bf3f:	e8 02 cd c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844bf44:	8b 55 0c             	mov    0xc(%ebp),%edx
 844bf47:	89 54 24 04          	mov    %edx,0x4(%esp)
 844bf4b:	89 04 24             	mov    %eax,(%esp)
 844bf4e:	e8 03 cd c7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 844bf53:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844bf56:	89 04 24             	mov    %eax,(%esp)
 844bf59:	e8 e8 cc c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844bf5e:	8b 55 08             	mov    0x8(%ebp),%edx
 844bf61:	89 54 24 04          	mov    %edx,0x4(%esp)
 844bf65:	89 04 24             	mov    %eax,(%esp)
 844bf68:	e8 25 63 c9 ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 844bf6d:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 844bf72:	8d 55 f0             	lea    -0x10(%ebp),%edx
 844bf75:	89 54 24 08          	mov    %edx,0x8(%esp)
 844bf79:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 844bf80:	00 
 844bf81:	89 04 24             	mov    %eax,(%esp)
 844bf84:	e8 55 50 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 844bf89:	eb 1b                	jmp    844bfa6 <_ZN18DB_LoadPuUserCheck11makeRequestEji+0xc4>
 844bf8b:	89 d3                	mov    %edx,%ebx
 844bf8d:	89 c6                	mov    %eax,%esi
 844bf8f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844bf92:	89 04 24             	mov    %eax,(%esp)
 844bf95:	e8 38 09 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 844bf9a:	89 f0                	mov    %esi,%eax
 844bf9c:	89 da                	mov    %ebx,%edx
 844bf9e:	89 04 24             	mov    %eax,(%esp)
 844bfa1:	e8 aa 77 69 00       	call   8ae3750 <_Unwind_Resume>
 844bfa6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844bfa9:	89 04 24             	mov    %eax,(%esp)
 844bfac:	e8 21 09 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 844bfb1:	83 c4 20             	add    $0x20,%esp
 844bfb4:	5b                   	pop    %ebx
 844bfb5:	5e                   	pop    %esi
 844bfb6:	5d                   	pop    %ebp
 844bfb7:	c3                   	ret

```

```c
// DB_LoadPuUserCheck::makeRequest @ 0x844bee2

/* DB_LoadPuUserCheck::makeRequest(unsigned int, int) */

void DB_LoadPuUserCheck::makeRequest(uint param_1,int param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xbcc2);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0844bf34 to 0844bf88 has its CatchHandler @ 0844bf8b */
  CStreamGuard::operator<<(pCVar2,0x2e1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

