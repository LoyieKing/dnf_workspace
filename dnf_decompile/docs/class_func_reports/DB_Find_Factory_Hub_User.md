# DB_Find_Factory_Hub_User

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 08437a32 DB_Find_Factory_Hub_User::dispatch  [0x08437a32-0x8437c4f] ===
 8437a32:	55                   	push   %ebp
 8437a33:	89 e5                	mov    %esp,%ebp
 8437a35:	56                   	push   %esi
 8437a36:	53                   	push   %ebx
 8437a37:	83 ec 40             	sub    $0x40,%esp
 8437a3a:	8b 45 14             	mov    0x14(%ebp),%eax
 8437a3d:	89 04 24             	mov    %eax,(%esp)
 8437a40:	e8 f7 bb 01 00       	call   845363c <_ZN6Stream12GetOutBufferI25SIG_FIND_FACTORY_HUB_USEREEPT_v>
 8437a45:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8437a48:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8437a4f:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8437a56:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8437a5d:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 8437a64:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8437a69:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8437a70:	00 
 8437a71:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8437a78:	00 
 8437a79:	89 04 24             	mov    %eax,(%esp)
 8437a7c:	e8 bd d7 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8437a81:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8437a84:	c7 45 ec b0 3f c5 08 	movl   $0x8c53fb0,-0x14(%ebp)
 8437a8b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8437a8e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8437a92:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8437a95:	89 44 24 04          	mov    %eax,0x4(%esp)
 8437a99:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8437a9c:	89 04 24             	mov    %eax,(%esp)
 8437a9f:	e8 1c c7 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8437aa4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8437aab:	00 
 8437aac:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8437aaf:	89 04 24             	mov    %eax,(%esp)
 8437ab2:	e8 6f c8 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8437ab7:	83 f0 01             	xor    $0x1,%eax
 8437aba:	84 c0                	test   %al,%al
 8437abc:	74 0a                	je     8437ac8 <_ZN24DB_Find_Factory_Hub_User8dispatchEiiP6Stream+0x96>
 8437abe:	bb 00 00 00 00       	mov    $0x0,%ebx
 8437ac3:	e9 7f 01 00 00       	jmp    8437c47 <_ZN24DB_Find_Factory_Hub_User8dispatchEiiP6Stream+0x215>
 8437ac8:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8437acf:	eb 76                	jmp    8437b47 <_ZN24DB_Find_Factory_Hub_User8dispatchEiiP6Stream+0x115>
 8437ad1:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8437ad4:	89 04 24             	mov    %eax,(%esp)
 8437ad7:	e8 e0 c9 fb ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8437adc:	83 f0 01             	xor    $0x1,%eax
 8437adf:	84 c0                	test   %al,%al
 8437ae1:	74 0a                	je     8437aed <_ZN24DB_Find_Factory_Hub_User8dispatchEiiP6Stream+0xbb>
 8437ae3:	bb 00 00 00 00       	mov    $0x0,%ebx
 8437ae8:	e9 5a 01 00 00       	jmp    8437c47 <_ZN24DB_Find_Factory_Hub_User8dispatchEiiP6Stream+0x215>
 8437aed:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8437af0:	89 44 24 08          	mov    %eax,0x8(%esp)
 8437af4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8437afb:	00 
 8437afc:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8437aff:	89 04 24             	mov    %eax,(%esp)
 8437b02:	e8 25 ee cd ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8437b07:	83 f0 01             	xor    $0x1,%eax
 8437b0a:	84 c0                	test   %al,%al
 8437b0c:	74 0a                	je     8437b18 <_ZN24DB_Find_Factory_Hub_User8dispatchEiiP6Stream+0xe6>
 8437b0e:	bb 00 00 00 00       	mov    $0x0,%ebx
 8437b13:	e9 2f 01 00 00       	jmp    8437c47 <_ZN24DB_Find_Factory_Hub_User8dispatchEiiP6Stream+0x215>
 8437b18:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8437b1b:	89 44 24 08          	mov    %eax,0x8(%esp)
 8437b1f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8437b26:	00 
 8437b27:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8437b2a:	89 04 24             	mov    %eax,(%esp)
 8437b2d:	e8 c0 a7 ca ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8437b32:	83 f0 01             	xor    $0x1,%eax
 8437b35:	84 c0                	test   %al,%al
 8437b37:	74 0a                	je     8437b43 <_ZN24DB_Find_Factory_Hub_User8dispatchEiiP6Stream+0x111>
 8437b39:	bb 00 00 00 00       	mov    $0x0,%ebx
 8437b3e:	e9 04 01 00 00       	jmp    8437c47 <_ZN24DB_Find_Factory_Hub_User8dispatchEiiP6Stream+0x215>
 8437b43:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8437b47:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8437b4a:	89 04 24             	mov    %eax,(%esp)
 8437b4d:	e8 1a a8 ca ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8437b52:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8437b55:	0f 97 c0             	seta   %al
 8437b58:	84 c0                	test   %al,%al
 8437b5a:	0f 85 71 ff ff ff    	jne    8437ad1 <_ZN24DB_Find_Factory_Hub_User8dispatchEiiP6Stream+0x9f>
 8437b60:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8437b65:	c7 44 24 08 0f 85 00 	movl   $0x850f,0x8(%esp)
 8437b6c:	00 
 8437b6d:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8437b74:	08 
 8437b75:	89 04 24             	mov    %eax,(%esp)
 8437b78:	e8 09 7f e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8437b7d:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8437b84:	00 
 8437b85:	89 44 24 04          	mov    %eax,0x4(%esp)
 8437b89:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8437b8c:	89 04 24             	mov    %eax,(%esp)
 8437b8f:	e8 92 10 c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8437b94:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8437b97:	89 04 24             	mov    %eax,(%esp)
 8437b9a:	e8 a7 10 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8437b9f:	c7 44 24 04 a1 01 00 	movl   $0x1a1,0x4(%esp)
 8437ba6:	00 
 8437ba7:	89 04 24             	mov    %eax,(%esp)
 8437baa:	e8 a7 10 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8437baf:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8437bb2:	89 04 24             	mov    %eax,(%esp)
 8437bb5:	e8 8c 10 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8437bba:	8b 55 10             	mov    0x10(%ebp),%edx
 8437bbd:	89 54 24 04          	mov    %edx,0x4(%esp)
 8437bc1:	89 04 24             	mov    %eax,(%esp)
 8437bc4:	e8 8d 10 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8437bc9:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8437bcc:	89 04 24             	mov    %eax,(%esp)
 8437bcf:	e8 7a 10 c9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8437bd4:	89 04 24             	mov    %eax,(%esp)
 8437bd7:	e8 b4 ba 01 00       	call   8453690 <_ZN12CStreamGuard11GetInBufferI33SIG_FIND_FACTORY_HUB_USER_NO_CONNEEPT_v>
 8437bdc:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8437bdf:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8437be2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8437be5:	89 10                	mov    %edx,(%eax)
 8437be7:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8437bea:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8437bed:	89 50 04             	mov    %edx,0x4(%eax)
 8437bf0:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8437bf3:	0f b7 50 1e          	movzwl 0x1e(%eax),%edx
 8437bf7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8437bfa:	66 89 50 08          	mov    %dx,0x8(%eax)
 8437bfe:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8437c03:	8d 55 cc             	lea    -0x34(%ebp),%edx
 8437c06:	89 54 24 08          	mov    %edx,0x8(%esp)
 8437c0a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8437c11:	00 
 8437c12:	89 04 24             	mov    %eax,(%esp)
 8437c15:	e8 c4 93 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8437c1a:	bb 01 00 00 00       	mov    $0x1,%ebx
 8437c1f:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8437c22:	89 04 24             	mov    %eax,(%esp)
 8437c25:	e8 a8 4c 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8437c2a:	eb 1b                	jmp    8437c47 <_ZN24DB_Find_Factory_Hub_User8dispatchEiiP6Stream+0x215>
 8437c2c:	89 d3                	mov    %edx,%ebx
 8437c2e:	89 c6                	mov    %eax,%esi
 8437c30:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8437c33:	89 04 24             	mov    %eax,(%esp)
 8437c36:	e8 97 4c 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8437c3b:	89 f0                	mov    %esi,%eax
 8437c3d:	89 da                	mov    %ebx,%edx
 8437c3f:	89 04 24             	mov    %eax,(%esp)
 8437c42:	e8 09 bb 6a 00       	call   8ae3750 <_Unwind_Resume>
 8437c47:	89 d8                	mov    %ebx,%eax
 8437c49:	83 c4 40             	add    $0x40,%esp
 8437c4c:	5b                   	pop    %ebx
 8437c4d:	5e                   	pop    %esi
 8437c4e:	5d                   	pop    %ebp
 8437c4f:	c3                   	ret

```

```c
// DB_Find_Factory_Hub_User::dispatch @ 0x8437a32

/* DB_Find_Factory_Hub_User::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_Find_Factory_Hub_User::dispatch
          (DB_Find_Factory_Hub_User *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  uint uVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  undefined4 uVar5;
  CStreamGuard local_38 [8];
  uint local_30;
  int local_2c;
  SIG_FIND_FACTORY_HUB_USER *local_28;
  undefined4 local_24;
  undefined4 local_20;
  MySQL *local_1c;
  char *local_18;
  SIG_FIND_FACTORY_HUB_USER_NO_CONN *local_14;
  uint local_10;
  
  local_28 = Stream::GetOutBuffer<SIG_FIND_FACTORY_HUB_USER>(param_3);
  local_2c = 0;
  local_24 = 0;
  local_20 = 0;
  local_30 = 0;
  local_1c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  local_18 = "seLect charac_no,m_id from charac_info where charac_name=\'%s\'";
  MySQL::set_query(local_1c,"seLect charac_no,m_id from charac_info where charac_name=\'%s\'",
                   local_28);
  cVar1 = MySQL::exec(local_1c,true);
  if (cVar1 == '\x01') {
    local_10 = 0;
    while (uVar2 = MySQL::get_n_rows(local_1c), local_10 < uVar2) {
      cVar1 = MySQL::fetch(local_1c);
      if (cVar1 != '\x01') {
        return 0;
      }
      cVar1 = MySQL::get_int(local_1c,0,&local_2c);
      if (cVar1 != '\x01') {
        return 0;
      }
      cVar1 = MySQL::get_uint(local_1c,1,&local_30);
      if (cVar1 != '\x01') {
        return 0;
      }
      local_10 = local_10 + 1;
    }
    pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x850f);
    CStreamGuard::CStreamGuard(local_38,pSVar3,true);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_38);
                    /* try { // try from 08437baa to 08437c19 has its CatchHandler @ 08437c2c */
    CStreamGuard::operator<<(pCVar4,0x1a1);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_38);
    CStreamGuard::operator<<(pCVar4,param_2);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_38);
    local_14 = CStreamGuard::GetInBuffer<SIG_FIND_FACTORY_HUB_USER_NO_CONN>(pCVar4);
    *(uint *)local_14 = local_30;
    *(int *)(local_14 + 4) = local_2c;
    *(undefined2 *)(local_14 + 8) = *(undefined2 *)(local_28 + 0x1e);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_38);
    uVar5 = 1;
    CStreamGuard::~CStreamGuard(local_38);
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

```

---

## makeRequest

```asm
// === 08437c50 DB_Find_Factory_Hub_User::makeRequest  [0x08437c50-0x8437d4d] ===
 8437c50:	55                   	push   %ebp
 8437c51:	89 e5                	mov    %esp,%ebp
 8437c53:	56                   	push   %esi
 8437c54:	53                   	push   %ebx
 8437c55:	83 ec 30             	sub    $0x30,%esp
 8437c58:	8b 45 10             	mov    0x10(%ebp),%eax
 8437c5b:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 8437c5f:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8437c64:	c7 44 24 08 1e 85 00 	movl   $0x851e,0x8(%esp)
 8437c6b:	00 
 8437c6c:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8437c73:	08 
 8437c74:	89 04 24             	mov    %eax,(%esp)
 8437c77:	e8 0a 7e e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8437c7c:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8437c83:	00 
 8437c84:	89 44 24 04          	mov    %eax,0x4(%esp)
 8437c88:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8437c8b:	89 04 24             	mov    %eax,(%esp)
 8437c8e:	e8 93 0f c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8437c93:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8437c96:	89 04 24             	mov    %eax,(%esp)
 8437c99:	e8 a8 0f c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8437c9e:	c7 44 24 04 a0 01 00 	movl   $0x1a0,0x4(%esp)
 8437ca5:	00 
 8437ca6:	89 04 24             	mov    %eax,(%esp)
 8437ca9:	e8 a8 0f c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8437cae:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8437cb1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8437cb4:	89 04 24             	mov    %eax,(%esp)
 8437cb7:	e8 8a 0f c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8437cbc:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8437cc0:	89 04 24             	mov    %eax,(%esp)
 8437cc3:	e8 8e 0f c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8437cc8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8437ccb:	89 04 24             	mov    %eax,(%esp)
 8437cce:	e8 7b 0f c9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8437cd3:	89 04 24             	mov    %eax,(%esp)
 8437cd6:	e8 cb b9 01 00       	call   84536a6 <_ZN12CStreamGuard11GetInBufferI25SIG_FIND_FACTORY_HUB_USEREEPT_v>
 8437cdb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8437cde:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8437ce1:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 8437ce8:	00 
 8437ce9:	8b 55 0c             	mov    0xc(%ebp),%edx
 8437cec:	89 54 24 04          	mov    %edx,0x4(%esp)
 8437cf0:	89 04 24             	mov    %eax,(%esp)
 8437cf3:	e8 d8 5b c4 ff       	call   807d8d0 <strncpy@plt>
 8437cf8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8437cfb:	0f b7 55 e4          	movzwl -0x1c(%ebp),%edx
 8437cff:	66 89 50 1e          	mov    %dx,0x1e(%eax)
 8437d03:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8437d08:	8d 55 ec             	lea    -0x14(%ebp),%edx
 8437d0b:	89 54 24 08          	mov    %edx,0x8(%esp)
 8437d0f:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8437d16:	00 
 8437d17:	89 04 24             	mov    %eax,(%esp)
 8437d1a:	e8 bf 92 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8437d1f:	eb 1b                	jmp    8437d3c <_ZN24DB_Find_Factory_Hub_User11makeRequestEjPct+0xec>
 8437d21:	89 d3                	mov    %edx,%ebx
 8437d23:	89 c6                	mov    %eax,%esi
 8437d25:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8437d28:	89 04 24             	mov    %eax,(%esp)
 8437d2b:	e8 a2 4b 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8437d30:	89 f0                	mov    %esi,%eax
 8437d32:	89 da                	mov    %ebx,%edx
 8437d34:	89 04 24             	mov    %eax,(%esp)
 8437d37:	e8 14 ba 6a 00       	call   8ae3750 <_Unwind_Resume>
 8437d3c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8437d3f:	89 04 24             	mov    %eax,(%esp)
 8437d42:	e8 8b 4b 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8437d47:	83 c4 30             	add    $0x30,%esp
 8437d4a:	5b                   	pop    %ebx
 8437d4b:	5e                   	pop    %esi
 8437d4c:	5d                   	pop    %ebp
 8437d4d:	c3                   	ret

```

```c
// DB_Find_Factory_Hub_User::makeRequest @ 0x8437c50

/* DB_Find_Factory_Hub_User::makeRequest(unsigned int, char*, unsigned short) */

void DB_Find_Factory_Hub_User::makeRequest(uint param_1,char *param_2,ushort param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_FIND_FACTORY_HUB_USER *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x851e);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08437ca9 to 08437d1e has its CatchHandler @ 08437d21 */
  CStreamGuard::operator<<(pCVar2,0x1a0);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_FIND_FACTORY_HUB_USER>(pCVar2);
  strncpy((char *)local_10,param_2,0x1d);
  *(ushort *)(local_10 + 0x1e) = param_3;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

