# DB_DenyJoinGuild

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0843de6c DB_DenyJoinGuild::dispatch  [0x0843de6c-0x843df0d] ===
 843de6c:	55                   	push   %ebp
 843de6d:	89 e5                	mov    %esp,%ebp
 843de6f:	83 ec 28             	sub    $0x28,%esp
 843de72:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 843de77:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 843de7e:	00 
 843de7f:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 843de86:	00 
 843de87:	89 04 24             	mov    %eax,(%esp)
 843de8a:	e8 af 73 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 843de8f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 843de92:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 843de99:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 843dea0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843dea3:	89 44 24 04          	mov    %eax,0x4(%esp)
 843dea7:	8b 45 14             	mov    0x14(%ebp),%eax
 843deaa:	89 04 24             	mov    %eax,(%esp)
 843dead:	e8 e4 e8 1d 00       	call   861c796 <_ZN6StreamrsERj>
 843deb2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843deb5:	89 44 24 04          	mov    %eax,0x4(%esp)
 843deb9:	8b 45 14             	mov    0x14(%ebp),%eax
 843debc:	89 04 24             	mov    %eax,(%esp)
 843debf:	e8 d2 e8 1d 00       	call   861c796 <_ZN6StreamrsERj>
 843dec4:	8b 55 ec             	mov    -0x14(%ebp),%edx
 843dec7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843deca:	89 54 24 0c          	mov    %edx,0xc(%esp)
 843dece:	89 44 24 08          	mov    %eax,0x8(%esp)
 843ded2:	c7 44 24 04 6c 54 c5 	movl   $0x8c5546c,0x4(%esp)
 843ded9:	08 
 843deda:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843dedd:	89 04 24             	mov    %eax,(%esp)
 843dee0:	e8 db 62 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843dee5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843deec:	00 
 843deed:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843def0:	89 04 24             	mov    %eax,(%esp)
 843def3:	e8 2e 64 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843def8:	83 f0 01             	xor    $0x1,%eax
 843defb:	84 c0                	test   %al,%al
 843defd:	74 07                	je     843df06 <_ZN16DB_DenyJoinGuild8dispatchEiiP6Stream+0x9a>
 843deff:	b8 00 00 00 00       	mov    $0x0,%eax
 843df04:	eb 05                	jmp    843df0b <_ZN16DB_DenyJoinGuild8dispatchEiiP6Stream+0x9f>
 843df06:	b8 01 00 00 00       	mov    $0x1,%eax
 843df0b:	c9                   	leave
 843df0c:	c3                   	ret
 843df0d:	90                   	nop

```

```c
// DB_DenyJoinGuild::dispatch @ 0x843de6c

/* DB_DenyJoinGuild::dispatch(int, int, Stream*) */

bool DB_DenyJoinGuild::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *in_stack_00000010;
  uint local_18;
  uint local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,8,0);
  local_14 = 0;
  local_18 = 0;
  Stream::operator>>(in_stack_00000010,&local_14);
  Stream::operator>>(in_stack_00000010,&local_18);
  MySQL::set_query(local_10,"deLete from guild_join_list where guild_id=%d and charac_no=%d",
                   local_14,local_18);
  cVar1 = MySQL::exec(local_10,true);
  return cVar1 == '\x01';
}

```

---

## makeRequest

```asm
// === 0843df0e DB_DenyJoinGuild::makeRequest  [0x0843df0e-0x843dffd] ===
 843df0e:	55                   	push   %ebp
 843df0f:	89 e5                	mov    %esp,%ebp
 843df11:	56                   	push   %esi
 843df12:	53                   	push   %ebx
 843df13:	83 ec 20             	sub    $0x20,%esp
 843df16:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 843df1b:	c7 44 24 08 b4 92 00 	movl   $0x92b4,0x8(%esp)
 843df22:	00 
 843df23:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 843df2a:	08 
 843df2b:	89 04 24             	mov    %eax,(%esp)
 843df2e:	e8 53 1b e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 843df33:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 843df3a:	00 
 843df3b:	89 44 24 04          	mov    %eax,0x4(%esp)
 843df3f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843df42:	89 04 24             	mov    %eax,(%esp)
 843df45:	e8 dc ac c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 843df4a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843df4d:	89 04 24             	mov    %eax,(%esp)
 843df50:	e8 f1 ac c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843df55:	c7 44 24 04 1c 02 00 	movl   $0x21c,0x4(%esp)
 843df5c:	00 
 843df5d:	89 04 24             	mov    %eax,(%esp)
 843df60:	e8 f1 ac c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843df65:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843df68:	89 04 24             	mov    %eax,(%esp)
 843df6b:	e8 d6 ac c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843df70:	8b 55 08             	mov    0x8(%ebp),%edx
 843df73:	89 54 24 04          	mov    %edx,0x4(%esp)
 843df77:	89 04 24             	mov    %eax,(%esp)
 843df7a:	e8 d7 ac c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843df7f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843df82:	89 04 24             	mov    %eax,(%esp)
 843df85:	e8 bc ac c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843df8a:	8b 55 0c             	mov    0xc(%ebp),%edx
 843df8d:	89 54 24 04          	mov    %edx,0x4(%esp)
 843df91:	89 04 24             	mov    %eax,(%esp)
 843df94:	e8 f9 42 ca ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 843df99:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843df9c:	89 04 24             	mov    %eax,(%esp)
 843df9f:	e8 a2 ac c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843dfa4:	8b 55 10             	mov    0x10(%ebp),%edx
 843dfa7:	89 54 24 04          	mov    %edx,0x4(%esp)
 843dfab:	89 04 24             	mov    %eax,(%esp)
 843dfae:	e8 df 42 ca ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 843dfb3:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 843dfb8:	8d 55 f0             	lea    -0x10(%ebp),%edx
 843dfbb:	89 54 24 08          	mov    %edx,0x8(%esp)
 843dfbf:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843dfc6:	00 
 843dfc7:	89 04 24             	mov    %eax,(%esp)
 843dfca:	e8 0f 30 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 843dfcf:	eb 1b                	jmp    843dfec <_ZN16DB_DenyJoinGuild11makeRequestEijj+0xde>
 843dfd1:	89 d3                	mov    %edx,%ebx
 843dfd3:	89 c6                	mov    %eax,%esi
 843dfd5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843dfd8:	89 04 24             	mov    %eax,(%esp)
 843dfdb:	e8 f2 e8 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843dfe0:	89 f0                	mov    %esi,%eax
 843dfe2:	89 da                	mov    %ebx,%edx
 843dfe4:	89 04 24             	mov    %eax,(%esp)
 843dfe7:	e8 64 57 6a 00       	call   8ae3750 <_Unwind_Resume>
 843dfec:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843dfef:	89 04 24             	mov    %eax,(%esp)
 843dff2:	e8 db e8 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843dff7:	83 c4 20             	add    $0x20,%esp
 843dffa:	5b                   	pop    %ebx
 843dffb:	5e                   	pop    %esi
 843dffc:	5d                   	pop    %ebp
 843dffd:	c3                   	ret

```

```c
// DB_DenyJoinGuild::makeRequest @ 0x843df0e

/* DB_DenyJoinGuild::makeRequest(int, unsigned int, unsigned int) */

void DB_DenyJoinGuild::makeRequest(int param_1,uint param_2,uint param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x92b4);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0843df60 to 0843dfce has its CatchHandler @ 0843dfd1 */
  CStreamGuard::operator<<(pCVar2,0x21c);
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

