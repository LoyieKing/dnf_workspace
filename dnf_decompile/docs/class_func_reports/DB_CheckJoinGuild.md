# DB_CheckJoinGuild

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0843c98e DB_CheckJoinGuild::dispatch  [0x0843c98e-0x843cc05] ===
 843c98e:	55                   	push   %ebp
 843c98f:	89 e5                	mov    %esp,%ebp
 843c991:	56                   	push   %esi
 843c992:	53                   	push   %ebx
 843c993:	83 ec 60             	sub    $0x60,%esp
 843c996:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 843c99b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 843c9a2:	00 
 843c9a3:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 843c9aa:	00 
 843c9ab:	89 04 24             	mov    %eax,(%esp)
 843c9ae:	e8 8b 88 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 843c9b3:	89 45 e8             	mov    %eax,-0x18(%ebp)
 843c9b6:	8b 45 14             	mov    0x14(%ebp),%eax
 843c9b9:	89 04 24             	mov    %eax,(%esp)
 843c9bc:	e8 b9 70 01 00       	call   8453a7a <_ZN6Stream12GetOutBufferI20SIG_CHECK_JOIN_GUILDEEPT_v>
 843c9c1:	89 45 ec             	mov    %eax,-0x14(%ebp)
 843c9c4:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 843c9cb:	8b 45 ec             	mov    -0x14(%ebp),%eax
 843c9ce:	89 44 24 08          	mov    %eax,0x8(%esp)
 843c9d2:	8d 45 b1             	lea    -0x4f(%ebp),%eax
 843c9d5:	89 44 24 04          	mov    %eax,0x4(%esp)
 843c9d9:	8b 45 e8             	mov    -0x18(%ebp),%eax
 843c9dc:	89 04 24             	mov    %eax,(%esp)
 843c9df:	e8 c6 7e fb ff       	call   83f48aa <_ZN5MySQL13escape_stringEPcPKc>
 843c9e4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 843c9e7:	8b 40 18             	mov    0x18(%eax),%eax
 843c9ea:	8d 55 b1             	lea    -0x4f(%ebp),%edx
 843c9ed:	89 54 24 0c          	mov    %edx,0xc(%esp)
 843c9f1:	89 44 24 08          	mov    %eax,0x8(%esp)
 843c9f5:	c7 44 24 04 c0 51 c5 	movl   $0x8c551c0,0x4(%esp)
 843c9fc:	08 
 843c9fd:	8b 45 e8             	mov    -0x18(%ebp),%eax
 843ca00:	89 04 24             	mov    %eax,(%esp)
 843ca03:	e8 b8 77 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843ca08:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843ca0f:	00 
 843ca10:	8b 45 e8             	mov    -0x18(%ebp),%eax
 843ca13:	89 04 24             	mov    %eax,(%esp)
 843ca16:	e8 0b 79 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843ca1b:	83 f0 01             	xor    $0x1,%eax
 843ca1e:	84 c0                	test   %al,%al
 843ca20:	74 0a                	je     843ca2c <_ZN17DB_CheckJoinGuild8dispatchEiiP6Stream+0x9e>
 843ca22:	bb 00 00 00 00       	mov    $0x0,%ebx
 843ca27:	e9 d1 01 00 00       	jmp    843cbfd <_ZN17DB_CheckJoinGuild8dispatchEiiP6Stream+0x26f>
 843ca2c:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 843ca31:	c7 44 24 08 e6 90 00 	movl   $0x90e6,0x8(%esp)
 843ca38:	00 
 843ca39:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 843ca40:	08 
 843ca41:	89 04 24             	mov    %eax,(%esp)
 843ca44:	e8 3d 30 e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 843ca49:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 843ca50:	00 
 843ca51:	89 44 24 04          	mov    %eax,0x4(%esp)
 843ca55:	8d 45 e0             	lea    -0x20(%ebp),%eax
 843ca58:	89 04 24             	mov    %eax,(%esp)
 843ca5b:	e8 c6 c1 c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 843ca60:	8d 45 e0             	lea    -0x20(%ebp),%eax
 843ca63:	89 04 24             	mov    %eax,(%esp)
 843ca66:	e8 db c1 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843ca6b:	c7 44 24 04 16 02 00 	movl   $0x216,0x4(%esp)
 843ca72:	00 
 843ca73:	89 04 24             	mov    %eax,(%esp)
 843ca76:	e8 db c1 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843ca7b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 843ca7e:	89 04 24             	mov    %eax,(%esp)
 843ca81:	e8 c0 c1 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843ca86:	8b 55 10             	mov    0x10(%ebp),%edx
 843ca89:	89 54 24 04          	mov    %edx,0x4(%esp)
 843ca8d:	89 04 24             	mov    %eax,(%esp)
 843ca90:	e8 c1 c1 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843ca95:	8d 45 e0             	lea    -0x20(%ebp),%eax
 843ca98:	89 04 24             	mov    %eax,(%esp)
 843ca9b:	e8 ae c1 c8 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 843caa0:	89 04 24             	mov    %eax,(%esp)
 843caa3:	e8 26 70 01 00       	call   8453ace <_ZN12CStreamGuard11GetInBufferI29SIG_CHECK_JOIN_GUILD_DB_REPLYEEPT_v>
 843caa8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 843caab:	8b 45 e8             	mov    -0x18(%ebp),%eax
 843caae:	89 04 24             	mov    %eax,(%esp)
 843cab1:	e8 b6 58 ca ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 843cab6:	85 c0                	test   %eax,%eax
 843cab8:	0f 94 c0             	sete   %al
 843cabb:	84 c0                	test   %al,%al
 843cabd:	74 0e                	je     843cacd <_ZN17DB_CheckJoinGuild8dispatchEiiP6Stream+0x13f>
 843cabf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843cac2:	c7 00 15 00 00 00    	movl   $0x15,(%eax)
 843cac8:	e9 e7 00 00 00       	jmp    843cbb4 <_ZN17DB_CheckJoinGuild8dispatchEiiP6Stream+0x226>
 843cacd:	8b 45 e8             	mov    -0x18(%ebp),%eax
 843cad0:	89 04 24             	mov    %eax,(%esp)
 843cad3:	e8 e4 79 fb ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 843cad8:	83 f0 01             	xor    $0x1,%eax
 843cadb:	84 c0                	test   %al,%al
 843cadd:	74 0a                	je     843cae9 <_ZN17DB_CheckJoinGuild8dispatchEiiP6Stream+0x15b>
 843cadf:	bb 00 00 00 00       	mov    $0x0,%ebx
 843cae4:	e9 09 01 00 00       	jmp    843cbf2 <_ZN17DB_CheckJoinGuild8dispatchEiiP6Stream+0x264>
 843cae9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843caec:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 843caf2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843caf5:	83 c0 22             	add    $0x22,%eax
 843caf8:	c7 44 24 0c 17 00 00 	movl   $0x17,0xc(%esp)
 843caff:	00 
 843cb00:	89 44 24 08          	mov    %eax,0x8(%esp)
 843cb04:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843cb0b:	00 
 843cb0c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 843cb0f:	89 04 24             	mov    %eax,(%esp)
 843cb12:	e8 d3 02 cb ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 843cb17:	83 f0 01             	xor    $0x1,%eax
 843cb1a:	84 c0                	test   %al,%al
 843cb1c:	74 0a                	je     843cb28 <_ZN17DB_CheckJoinGuild8dispatchEiiP6Stream+0x19a>
 843cb1e:	bb 00 00 00 00       	mov    $0x0,%ebx
 843cb23:	e9 ca 00 00 00       	jmp    843cbf2 <_ZN17DB_CheckJoinGuild8dispatchEiiP6Stream+0x264>
 843cb28:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843cb2b:	83 c0 04             	add    $0x4,%eax
 843cb2e:	c7 44 24 0c 1e 00 00 	movl   $0x1e,0xc(%esp)
 843cb35:	00 
 843cb36:	89 44 24 08          	mov    %eax,0x8(%esp)
 843cb3a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843cb41:	00 
 843cb42:	8b 45 e8             	mov    -0x18(%ebp),%eax
 843cb45:	89 04 24             	mov    %eax,(%esp)
 843cb48:	e8 9d 02 cb ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 843cb4d:	83 f0 01             	xor    $0x1,%eax
 843cb50:	84 c0                	test   %al,%al
 843cb52:	74 0a                	je     843cb5e <_ZN17DB_CheckJoinGuild8dispatchEiiP6Stream+0x1d0>
 843cb54:	bb 00 00 00 00       	mov    $0x0,%ebx
 843cb59:	e9 94 00 00 00       	jmp    843cbf2 <_ZN17DB_CheckJoinGuild8dispatchEiiP6Stream+0x264>
 843cb5e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843cb61:	83 c0 3c             	add    $0x3c,%eax
 843cb64:	89 44 24 08          	mov    %eax,0x8(%esp)
 843cb68:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843cb6f:	00 
 843cb70:	8b 45 e8             	mov    -0x18(%ebp),%eax
 843cb73:	89 04 24             	mov    %eax,(%esp)
 843cb76:	e8 b1 9d cd ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 843cb7b:	83 f0 01             	xor    $0x1,%eax
 843cb7e:	84 c0                	test   %al,%al
 843cb80:	74 07                	je     843cb89 <_ZN17DB_CheckJoinGuild8dispatchEiiP6Stream+0x1fb>
 843cb82:	bb 00 00 00 00       	mov    $0x0,%ebx
 843cb87:	eb 69                	jmp    843cbf2 <_ZN17DB_CheckJoinGuild8dispatchEiiP6Stream+0x264>
 843cb89:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843cb8c:	83 c0 40             	add    $0x40,%eax
 843cb8f:	89 44 24 08          	mov    %eax,0x8(%esp)
 843cb93:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 843cb9a:	00 
 843cb9b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 843cb9e:	89 04 24             	mov    %eax,(%esp)
 843cba1:	e8 86 9d cd ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 843cba6:	83 f0 01             	xor    $0x1,%eax
 843cba9:	84 c0                	test   %al,%al
 843cbab:	74 07                	je     843cbb4 <_ZN17DB_CheckJoinGuild8dispatchEiiP6Stream+0x226>
 843cbad:	bb 00 00 00 00       	mov    $0x0,%ebx
 843cbb2:	eb 3e                	jmp    843cbf2 <_ZN17DB_CheckJoinGuild8dispatchEiiP6Stream+0x264>
 843cbb4:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 843cbb9:	8d 55 e0             	lea    -0x20(%ebp),%edx
 843cbbc:	89 54 24 08          	mov    %edx,0x8(%esp)
 843cbc0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843cbc7:	00 
 843cbc8:	89 04 24             	mov    %eax,(%esp)
 843cbcb:	e8 0e 44 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 843cbd0:	bb 01 00 00 00       	mov    $0x1,%ebx
 843cbd5:	eb 1b                	jmp    843cbf2 <_ZN17DB_CheckJoinGuild8dispatchEiiP6Stream+0x264>
 843cbd7:	89 d3                	mov    %edx,%ebx
 843cbd9:	89 c6                	mov    %eax,%esi
 843cbdb:	8d 45 e0             	lea    -0x20(%ebp),%eax
 843cbde:	89 04 24             	mov    %eax,(%esp)
 843cbe1:	e8 ec fc 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843cbe6:	89 f0                	mov    %esi,%eax
 843cbe8:	89 da                	mov    %ebx,%edx
 843cbea:	89 04 24             	mov    %eax,(%esp)
 843cbed:	e8 5e 6b 6a 00       	call   8ae3750 <_Unwind_Resume>
 843cbf2:	8d 45 e0             	lea    -0x20(%ebp),%eax
 843cbf5:	89 04 24             	mov    %eax,(%esp)
 843cbf8:	e8 d5 fc 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843cbfd:	89 d8                	mov    %ebx,%eax
 843cbff:	83 c4 60             	add    $0x60,%esp
 843cc02:	5b                   	pop    %ebx
 843cc03:	5e                   	pop    %esi
 843cc04:	5d                   	pop    %ebp
 843cc05:	c3                   	ret

```

```c
// DB_CheckJoinGuild::dispatch @ 0x843c98e

/* DB_CheckJoinGuild::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_CheckJoinGuild::dispatch(DB_CheckJoinGuild *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  undefined4 uVar5;
  char local_53 [47];
  CStreamGuard local_24 [8];
  MySQL *local_1c;
  SIG_CHECK_JOIN_GUILD *local_18;
  undefined4 local_14;
  SIG_CHECK_JOIN_GUILD_DB_REPLY *local_10;
  
  local_1c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,8,0);
  local_18 = Stream::GetOutBuffer<SIG_CHECK_JOIN_GUILD>(param_3);
  local_14 = 0;
  MySQL::escape_string(local_1c,local_53,(char *)local_18);
  MySQL::set_query(local_1c,
                   "seLect guild_name,master_name,lev,member_count from guild_info where server_id=%d and expire_flag=0 and guild_name=\'%s\'"
                   ,*(undefined4 *)(local_18 + 0x18),local_53);
  cVar1 = MySQL::exec(local_1c,true);
  if (cVar1 != '\x01') {
    return 0;
  }
  pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x90e6);
  CStreamGuard::CStreamGuard(local_24,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_24);
                    /* try { // try from 0843ca76 to 0843cbcf has its CatchHandler @ 0843cbd7 */
  CStreamGuard::operator<<(pCVar3,0x216);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_24);
  CStreamGuard::operator<<(pCVar3,param_2);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_24);
  local_10 = CStreamGuard::GetInBuffer<SIG_CHECK_JOIN_GUILD_DB_REPLY>(pCVar3);
  iVar4 = MySQL::get_n_rows(local_1c);
  if (iVar4 == 0) {
    *(undefined4 *)local_10 = 0x15;
  }
  else {
    cVar1 = MySQL::fetch(local_1c);
    if (cVar1 != '\x01') {
      uVar5 = 0;
      goto LAB_0843cbf2;
    }
    *(undefined4 *)local_10 = 0;
    cVar1 = MySQL::get_str(local_1c,0,(char *)(local_10 + 0x22),0x17);
    if (cVar1 != '\x01') {
      uVar5 = 0;
      goto LAB_0843cbf2;
    }
    cVar1 = MySQL::get_str(local_1c,1,(char *)(local_10 + 4),0x1e);
    if (cVar1 != '\x01') {
      uVar5 = 0;
      goto LAB_0843cbf2;
    }
    cVar1 = MySQL::get_int(local_1c,2,(int *)(local_10 + 0x3c));
    if (cVar1 != '\x01') {
      uVar5 = 0;
      goto LAB_0843cbf2;
    }
    cVar1 = MySQL::get_int(local_1c,3,(int *)(local_10 + 0x40));
    if (cVar1 != '\x01') {
      uVar5 = 0;
      goto LAB_0843cbf2;
    }
  }
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_24);
  uVar5 = 1;
LAB_0843cbf2:
  CStreamGuard::~CStreamGuard(local_24);
  return uVar5;
}

```

---

## makeRequest

```asm
// === 0843cc06 DB_CheckJoinGuild::makeRequest  [0x0843cc06-0x843ccf1] ===
 843cc06:	55                   	push   %ebp
 843cc07:	89 e5                	mov    %esp,%ebp
 843cc09:	56                   	push   %esi
 843cc0a:	53                   	push   %ebx
 843cc0b:	83 ec 20             	sub    $0x20,%esp
 843cc0e:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 843cc13:	c7 44 24 08 1a 91 00 	movl   $0x911a,0x8(%esp)
 843cc1a:	00 
 843cc1b:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 843cc22:	08 
 843cc23:	89 04 24             	mov    %eax,(%esp)
 843cc26:	e8 5b 2e e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 843cc2b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 843cc32:	00 
 843cc33:	89 44 24 04          	mov    %eax,0x4(%esp)
 843cc37:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843cc3a:	89 04 24             	mov    %eax,(%esp)
 843cc3d:	e8 e4 bf c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 843cc42:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843cc45:	89 04 24             	mov    %eax,(%esp)
 843cc48:	e8 f9 bf c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843cc4d:	c7 44 24 04 16 02 00 	movl   $0x216,0x4(%esp)
 843cc54:	00 
 843cc55:	89 04 24             	mov    %eax,(%esp)
 843cc58:	e8 f9 bf c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843cc5d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843cc60:	89 04 24             	mov    %eax,(%esp)
 843cc63:	e8 de bf c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843cc68:	8b 55 08             	mov    0x8(%ebp),%edx
 843cc6b:	89 54 24 04          	mov    %edx,0x4(%esp)
 843cc6f:	89 04 24             	mov    %eax,(%esp)
 843cc72:	e8 df bf c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843cc77:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843cc7a:	89 04 24             	mov    %eax,(%esp)
 843cc7d:	e8 cc bf c8 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 843cc82:	89 04 24             	mov    %eax,(%esp)
 843cc85:	e8 5a 6e 01 00       	call   8453ae4 <_ZN12CStreamGuard11GetInBufferI20SIG_CHECK_JOIN_GUILDEEPT_v>
 843cc8a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 843cc8d:	c7 44 24 08 1c 00 00 	movl   $0x1c,0x8(%esp)
 843cc94:	00 
 843cc95:	8b 45 0c             	mov    0xc(%ebp),%eax
 843cc98:	89 44 24 04          	mov    %eax,0x4(%esp)
 843cc9c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843cc9f:	89 04 24             	mov    %eax,(%esp)
 843cca2:	e8 f9 0b c4 ff       	call   807d8a0 <memcpy@plt>
 843cca7:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 843ccac:	8d 55 ec             	lea    -0x14(%ebp),%edx
 843ccaf:	89 54 24 08          	mov    %edx,0x8(%esp)
 843ccb3:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843ccba:	00 
 843ccbb:	89 04 24             	mov    %eax,(%esp)
 843ccbe:	e8 1b 43 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 843ccc3:	eb 1b                	jmp    843cce0 <_ZN17DB_CheckJoinGuild11makeRequestEiP20SIG_CHECK_JOIN_GUILD+0xda>
 843ccc5:	89 d3                	mov    %edx,%ebx
 843ccc7:	89 c6                	mov    %eax,%esi
 843ccc9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843cccc:	89 04 24             	mov    %eax,(%esp)
 843cccf:	e8 fe fb 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843ccd4:	89 f0                	mov    %esi,%eax
 843ccd6:	89 da                	mov    %ebx,%edx
 843ccd8:	89 04 24             	mov    %eax,(%esp)
 843ccdb:	e8 70 6a 6a 00       	call   8ae3750 <_Unwind_Resume>
 843cce0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843cce3:	89 04 24             	mov    %eax,(%esp)
 843cce6:	e8 e7 fb 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843cceb:	83 c4 20             	add    $0x20,%esp
 843ccee:	5b                   	pop    %ebx
 843ccef:	5e                   	pop    %esi
 843ccf0:	5d                   	pop    %ebp
 843ccf1:	c3                   	ret

```

```c
// DB_CheckJoinGuild::makeRequest @ 0x843cc06

/* DB_CheckJoinGuild::makeRequest(int, SIG_CHECK_JOIN_GUILD*) */

void DB_CheckJoinGuild::makeRequest(int param_1,SIG_CHECK_JOIN_GUILD *param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_CHECK_JOIN_GUILD *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x911a);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0843cc58 to 0843ccc2 has its CatchHandler @ 0843ccc5 */
  CStreamGuard::operator<<(pCVar2,0x216);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_CHECK_JOIN_GUILD>(pCVar2);
  memcpy(local_10,param_2,0x1c);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

