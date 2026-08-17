# DB_UpdateAuraAvatarOption

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 08444e1e DB_UpdateAuraAvatarOption::dispatch  [0x08444e1e-0x8444f25] ===
 8444e1e:	55                   	push   %ebp
 8444e1f:	89 e5                	mov    %esp,%ebp
 8444e21:	83 ec 38             	sub    $0x38,%esp
 8444e24:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8444e29:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8444e30:	00 
 8444e31:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8444e38:	00 
 8444e39:	89 04 24             	mov    %eax,(%esp)
 8444e3c:	e8 fd 03 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8444e41:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8444e44:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8444e4b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8444e4e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8444e52:	8b 45 14             	mov    0x14(%ebp),%eax
 8444e55:	89 04 24             	mov    %eax,(%esp)
 8444e58:	e8 39 79 1d 00       	call   861c796 <_ZN6StreamrsERj>
 8444e5d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8444e60:	89 44 24 04          	mov    %eax,0x4(%esp)
 8444e64:	8b 45 14             	mov    0x14(%ebp),%eax
 8444e67:	89 04 24             	mov    %eax,(%esp)
 8444e6a:	e8 55 77 1d 00       	call   861c5c4 <_ZN6StreamrsERi>
 8444e6f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8444e72:	89 44 24 04          	mov    %eax,0x4(%esp)
 8444e76:	8b 45 14             	mov    0x14(%ebp),%eax
 8444e79:	89 04 24             	mov    %eax,(%esp)
 8444e7c:	e8 43 77 1d 00       	call   861c5c4 <_ZN6StreamrsERi>
 8444e81:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 8444e84:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8444e87:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8444e8a:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8444e8e:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8444e92:	89 44 24 08          	mov    %eax,0x8(%esp)
 8444e96:	c7 44 24 04 dc 72 c5 	movl   $0x8c572dc,0x4(%esp)
 8444e9d:	08 
 8444e9e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8444ea1:	89 04 24             	mov    %eax,(%esp)
 8444ea4:	e8 17 f3 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8444ea9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8444eb0:	00 
 8444eb1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8444eb4:	89 04 24             	mov    %eax,(%esp)
 8444eb7:	e8 6a f4 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 8444ebc:	83 f0 01             	xor    $0x1,%eax
 8444ebf:	84 c0                	test   %al,%al
 8444ec1:	75 11                	jne    8444ed4 <_ZN25DB_UpdateAuraAvatarOption8dispatchEiiP6Stream+0xb6>
 8444ec3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8444ec6:	89 04 24             	mov    %eax,(%esp)
 8444ec9:	e8 42 f4 fa ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8444ece:	09 d0                	or     %edx,%eax
 8444ed0:	85 c0                	test   %eax,%eax
 8444ed2:	75 07                	jne    8444edb <_ZN25DB_UpdateAuraAvatarOption8dispatchEiiP6Stream+0xbd>
 8444ed4:	b8 01 00 00 00       	mov    $0x1,%eax
 8444ed9:	eb 05                	jmp    8444ee0 <_ZN25DB_UpdateAuraAvatarOption8dispatchEiiP6Stream+0xc2>
 8444edb:	b8 00 00 00 00       	mov    $0x0,%eax
 8444ee0:	84 c0                	test   %al,%al
 8444ee2:	74 3b                	je     8444f1f <_ZN25DB_UpdateAuraAvatarOption8dispatchEiiP6Stream+0x101>
 8444ee4:	8b 4d e8             	mov    -0x18(%ebp),%ecx
 8444ee7:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8444eea:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8444eed:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8444ef1:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8444ef5:	89 44 24 08          	mov    %eax,0x8(%esp)
 8444ef9:	c7 44 24 04 30 73 c5 	movl   $0x8c57330,0x4(%esp)
 8444f00:	08 
 8444f01:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8444f04:	89 04 24             	mov    %eax,(%esp)
 8444f07:	e8 b4 f2 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8444f0c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8444f13:	00 
 8444f14:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8444f17:	89 04 24             	mov    %eax,(%esp)
 8444f1a:	e8 07 f4 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 8444f1f:	b8 01 00 00 00       	mov    $0x1,%eax
 8444f24:	c9                   	leave
 8444f25:	c3                   	ret

```

```c
// DB_UpdateAuraAvatarOption::dispatch @ 0x8444e1e

/* DB_UpdateAuraAvatarOption::dispatch(int, int, Stream*) */

undefined4 DB_UpdateAuraAvatarOption::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  Stream *in_stack_00000010;
  int local_1c;
  int local_18;
  uint local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  local_14 = 0;
  Stream::operator>>(in_stack_00000010,&local_14);
  Stream::operator>>(in_stack_00000010,&local_18);
  Stream::operator>>(in_stack_00000010,&local_1c);
  MySQL::set_query(local_10,
                   "upDate aura_avatar_option set value_1=%d where charac_no=%u and option_type = %d"
                   ,local_1c,local_14,local_18);
  cVar2 = MySQL::exec(local_10,true);
  if (cVar2 == '\x01') {
    lVar3 = MySQL::getAffectedRowCount(local_10);
    if (lVar3 != 0) {
      bVar1 = false;
      goto LAB_08444ee0;
    }
  }
  bVar1 = true;
LAB_08444ee0:
  if (bVar1) {
    MySQL::set_query(local_10,
                     "inSert into aura_avatar_option(charac_no,option_type,value_1) values(%u,%d,%d)"
                     ,local_14,local_18,local_1c);
    MySQL::exec(local_10,true);
  }
  return 1;
}

```

---

## makeRequest

```asm
// === 08444f26 DB_UpdateAuraAvatarOption::makeRequest  [0x08444f26-0x8445031] ===
 8444f26:	55                   	push   %ebp
 8444f27:	89 e5                	mov    %esp,%ebp
 8444f29:	56                   	push   %esi
 8444f2a:	53                   	push   %ebx
 8444f2b:	83 ec 20             	sub    $0x20,%esp
 8444f2e:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8444f33:	c7 44 24 08 f6 ab 00 	movl   $0xabf6,0x8(%esp)
 8444f3a:	00 
 8444f3b:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8444f42:	08 
 8444f43:	89 04 24             	mov    %eax,(%esp)
 8444f46:	e8 3b ab e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8444f4b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8444f52:	00 
 8444f53:	89 44 24 04          	mov    %eax,0x4(%esp)
 8444f57:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8444f5a:	89 04 24             	mov    %eax,(%esp)
 8444f5d:	e8 c4 3c c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8444f62:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8444f65:	89 04 24             	mov    %eax,(%esp)
 8444f68:	e8 d9 3c c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8444f6d:	c7 44 24 04 af 02 00 	movl   $0x2af,0x4(%esp)
 8444f74:	00 
 8444f75:	89 04 24             	mov    %eax,(%esp)
 8444f78:	e8 d9 3c c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8444f7d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8444f80:	89 04 24             	mov    %eax,(%esp)
 8444f83:	e8 be 3c c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8444f88:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8444f8f:	ff 
 8444f90:	89 04 24             	mov    %eax,(%esp)
 8444f93:	e8 be 3c c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8444f98:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8444f9b:	89 04 24             	mov    %eax,(%esp)
 8444f9e:	e8 a3 3c c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8444fa3:	8b 55 0c             	mov    0xc(%ebp),%edx
 8444fa6:	89 54 24 04          	mov    %edx,0x4(%esp)
 8444faa:	89 04 24             	mov    %eax,(%esp)
 8444fad:	e8 e0 d2 c9 ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 8444fb2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8444fb5:	89 04 24             	mov    %eax,(%esp)
 8444fb8:	e8 89 3c c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8444fbd:	8b 55 10             	mov    0x10(%ebp),%edx
 8444fc0:	89 54 24 04          	mov    %edx,0x4(%esp)
 8444fc4:	89 04 24             	mov    %eax,(%esp)
 8444fc7:	e8 8a 3c c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8444fcc:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8444fcf:	89 04 24             	mov    %eax,(%esp)
 8444fd2:	e8 6f 3c c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8444fd7:	8b 55 14             	mov    0x14(%ebp),%edx
 8444fda:	89 54 24 04          	mov    %edx,0x4(%esp)
 8444fde:	89 04 24             	mov    %eax,(%esp)
 8444fe1:	e8 70 3c c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8444fe6:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8444feb:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8444fee:	89 54 24 08          	mov    %edx,0x8(%esp)
 8444ff2:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8444ff9:	00 
 8444ffa:	89 04 24             	mov    %eax,(%esp)
 8444ffd:	e8 dc bf 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8445002:	eb 1b                	jmp    844501f <_ZN25DB_UpdateAuraAvatarOption11makeRequestEijii+0xf9>
 8445004:	89 d3                	mov    %edx,%ebx
 8445006:	89 c6                	mov    %eax,%esi
 8445008:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844500b:	89 04 24             	mov    %eax,(%esp)
 844500e:	e8 bf 78 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8445013:	89 f0                	mov    %esi,%eax
 8445015:	89 da                	mov    %ebx,%edx
 8445017:	89 04 24             	mov    %eax,(%esp)
 844501a:	e8 31 e7 69 00       	call   8ae3750 <_Unwind_Resume>
 844501f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8445022:	89 04 24             	mov    %eax,(%esp)
 8445025:	e8 a8 78 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 844502a:	83 c4 20             	add    $0x20,%esp
 844502d:	5b                   	pop    %ebx
 844502e:	5e                   	pop    %esi
 844502f:	5d                   	pop    %ebp
 8445030:	c3                   	ret
 8445031:	90                   	nop

```

```c
// DB_UpdateAuraAvatarOption::makeRequest @ 0x8444f26

/* DB_UpdateAuraAvatarOption::makeRequest(int, unsigned int, int, int) */

void DB_UpdateAuraAvatarOption::makeRequest(int param_1,uint param_2,int param_3,int param_4)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xabf6);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08444f78 to 08445001 has its CatchHandler @ 08445004 */
  CStreamGuard::operator<<(pCVar2,0x2af);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
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

