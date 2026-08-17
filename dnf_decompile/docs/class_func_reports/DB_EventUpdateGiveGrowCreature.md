# DB_EventUpdateGiveGrowCreature

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 08449c54 DB_EventUpdateGiveGrowCreature::dispatch  [0x08449c54-0x8449d1b] ===
 8449c54:	55                   	push   %ebp
 8449c55:	89 e5                	mov    %esp,%ebp
 8449c57:	56                   	push   %esi
 8449c58:	53                   	push   %ebx
 8449c59:	83 ec 30             	sub    $0x30,%esp
 8449c5c:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8449c61:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8449c68:	00 
 8449c69:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 8449c70:	00 
 8449c71:	89 04 24             	mov    %eax,(%esp)
 8449c74:	e8 c5 b5 fa ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8449c79:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8449c7c:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8449c83:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8449c86:	89 44 24 04          	mov    %eax,0x4(%esp)
 8449c8a:	8b 45 14             	mov    0x14(%ebp),%eax
 8449c8d:	89 04 24             	mov    %eax,(%esp)
 8449c90:	e8 01 2b 1d 00       	call   861c796 <_ZN6StreamrsERj>
 8449c95:	8b 45 14             	mov    0x14(%ebp),%eax
 8449c98:	89 04 24             	mov    %eax,(%esp)
 8449c9b:	e8 44 aa 00 00       	call   84546e4 <_ZN6Stream12GetOutBufferIN30SIG_GIVE_GROWTH_CREATURE_EVENT15eventCharacInfoEEEPT_v>
 8449ca0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8449ca3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8449ca6:	8b 70 04             	mov    0x4(%eax),%esi
 8449ca9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8449cac:	0f b7 00             	movzwl (%eax),%eax
 8449caf:	0f bf d8             	movswl %ax,%ebx
 8449cb2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8449cb5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8449cbc:	00 
 8449cbd:	89 04 24             	mov    %eax,(%esp)
 8449cc0:	e8 86 f3 cb ff       	call   810904b <_Z14NumberToStringji>
 8449cc5:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8449cc8:	83 c2 0c             	add    $0xc,%edx
 8449ccb:	89 74 24 14          	mov    %esi,0x14(%esp)
 8449ccf:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8449cd3:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8449cd7:	89 54 24 08          	mov    %edx,0x8(%esp)
 8449cdb:	c7 44 24 04 10 8e c5 	movl   $0x8c58e10,0x4(%esp)
 8449ce2:	08 
 8449ce3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8449ce6:	89 04 24             	mov    %eax,(%esp)
 8449ce9:	e8 d2 a4 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8449cee:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8449cf5:	00 
 8449cf6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8449cf9:	89 04 24             	mov    %eax,(%esp)
 8449cfc:	e8 25 a6 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 8449d01:	83 f0 01             	xor    $0x1,%eax
 8449d04:	84 c0                	test   %al,%al
 8449d06:	74 07                	je     8449d0f <_ZN30DB_EventUpdateGiveGrowCreature8dispatchEiiP6Stream+0xbb>
 8449d08:	b8 00 00 00 00       	mov    $0x0,%eax
 8449d0d:	eb 05                	jmp    8449d14 <_ZN30DB_EventUpdateGiveGrowCreature8dispatchEiiP6Stream+0xc0>
 8449d0f:	b8 01 00 00 00       	mov    $0x1,%eax
 8449d14:	83 c4 30             	add    $0x30,%esp
 8449d17:	5b                   	pop    %ebx
 8449d18:	5e                   	pop    %esi
 8449d19:	5d                   	pop    %ebp
 8449d1a:	c3                   	ret
 8449d1b:	90                   	nop

```

```c
// DB_EventUpdateGiveGrowCreature::dispatch @ 0x8449c54

/* DB_EventUpdateGiveGrowCreature::dispatch(int, int, Stream*) */

bool DB_EventUpdateGiveGrowCreature::dispatch(int param_1,int param_2,Stream *param_3)

{
  short sVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 uVar4;
  Stream *in_stack_00000010;
  uint local_18;
  MySQL *local_14;
  eventCharacInfo *local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  local_18 = 0;
  Stream::operator>>(in_stack_00000010,&local_18);
  local_10 = Stream::GetOutBuffer<SIG_GIVE_GROWTH_CREATURE_EVENT::eventCharacInfo>
                       (in_stack_00000010);
  uVar2 = *(undefined4 *)(local_10 + 4);
  sVar1 = *(short *)local_10;
  uVar4 = NumberToString(local_18,0);
  MySQL::set_query(local_14,
                   "upDate event_1208_growthcreature set charac_name = %s) where m_id = %s and server_id =%d and charac_no = %d"
                   ,local_10 + 0xc,uVar4,(int)sVar1,uVar2);
  cVar3 = MySQL::exec(local_14,true);
  return cVar3 == '\x01';
}

```

---

## makeRequest

```asm
// === 08449d1c DB_EventUpdateGiveGrowCreature::makeRequest  [0x08449d1c-0x8449e3d] ===
 8449d1c:	55                   	push   %ebp
 8449d1d:	89 e5                	mov    %esp,%ebp
 8449d1f:	56                   	push   %esi
 8449d20:	53                   	push   %ebx
 8449d21:	83 ec 20             	sub    $0x20,%esp
 8449d24:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8449d29:	c7 44 24 08 aa b9 00 	movl   $0xb9aa,0x8(%esp)
 8449d30:	00 
 8449d31:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8449d38:	08 
 8449d39:	89 04 24             	mov    %eax,(%esp)
 8449d3c:	e8 45 5d e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8449d41:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8449d48:	00 
 8449d49:	89 44 24 04          	mov    %eax,0x4(%esp)
 8449d4d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8449d50:	89 04 24             	mov    %eax,(%esp)
 8449d53:	e8 ce ee c7 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8449d58:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8449d5b:	89 04 24             	mov    %eax,(%esp)
 8449d5e:	e8 e3 ee c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8449d63:	c7 44 24 04 17 03 00 	movl   $0x317,0x4(%esp)
 8449d6a:	00 
 8449d6b:	89 04 24             	mov    %eax,(%esp)
 8449d6e:	e8 e3 ee c7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8449d73:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8449d76:	89 04 24             	mov    %eax,(%esp)
 8449d79:	e8 c8 ee c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8449d7e:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8449d85:	ff 
 8449d86:	89 04 24             	mov    %eax,(%esp)
 8449d89:	e8 c8 ee c7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8449d8e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8449d91:	89 04 24             	mov    %eax,(%esp)
 8449d94:	e8 ad ee c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8449d99:	8b 55 08             	mov    0x8(%ebp),%edx
 8449d9c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8449da0:	89 04 24             	mov    %eax,(%esp)
 8449da3:	e8 ea 84 c9 ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 8449da8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8449dab:	89 04 24             	mov    %eax,(%esp)
 8449dae:	e8 9b ee c7 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8449db3:	89 04 24             	mov    %eax,(%esp)
 8449db6:	e8 7d a9 00 00       	call   8454738 <_ZN12CStreamGuard11GetInBufferIN30SIG_GIVE_GROWTH_CREATURE_EVENT15eventCharacInfoEEEPT_v>
 8449dbb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8449dbe:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 8449dc5:	00 
 8449dc6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8449dcd:	00 
 8449dce:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8449dd1:	89 04 24             	mov    %eax,(%esp)
 8449dd4:	e8 e7 3e c3 ff       	call   807dcc0 <memset@plt>
 8449dd9:	c7 44 24 08 2c 00 00 	movl   $0x2c,0x8(%esp)
 8449de0:	00 
 8449de1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8449de4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8449de8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8449deb:	89 04 24             	mov    %eax,(%esp)
 8449dee:	e8 ad 3a c3 ff       	call   807d8a0 <memcpy@plt>
 8449df3:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8449df8:	8d 55 ec             	lea    -0x14(%ebp),%edx
 8449dfb:	89 54 24 08          	mov    %edx,0x8(%esp)
 8449dff:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8449e06:	00 
 8449e07:	89 04 24             	mov    %eax,(%esp)
 8449e0a:	e8 cf 71 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8449e0f:	eb 1b                	jmp    8449e2c <_ZN30DB_EventUpdateGiveGrowCreature11makeRequestEjRN30SIG_GIVE_GROWTH_CREATURE_EVENT15eventCharacInfoE+0x110>
 8449e11:	89 d3                	mov    %edx,%ebx
 8449e13:	89 c6                	mov    %eax,%esi
 8449e15:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8449e18:	89 04 24             	mov    %eax,(%esp)
 8449e1b:	e8 b2 2a 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8449e20:	89 f0                	mov    %esi,%eax
 8449e22:	89 da                	mov    %ebx,%edx
 8449e24:	89 04 24             	mov    %eax,(%esp)
 8449e27:	e8 24 99 69 00       	call   8ae3750 <_Unwind_Resume>
 8449e2c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8449e2f:	89 04 24             	mov    %eax,(%esp)
 8449e32:	e8 9b 2a 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8449e37:	83 c4 20             	add    $0x20,%esp
 8449e3a:	5b                   	pop    %ebx
 8449e3b:	5e                   	pop    %esi
 8449e3c:	5d                   	pop    %ebp
 8449e3d:	c3                   	ret

```

```c
// DB_EventUpdateGiveGrowCreature::makeRequest @ 0x8449d1c

/* DB_EventUpdateGiveGrowCreature::makeRequest(unsigned int,
   SIG_GIVE_GROWTH_CREATURE_EVENT::eventCharacInfo&) */

void DB_EventUpdateGiveGrowCreature::makeRequest(uint param_1,eventCharacInfo *param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  eventCharacInfo *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xb9aa);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08449d6e to 08449e0e has its CatchHandler @ 08449e11 */
  CStreamGuard::operator<<(pCVar2,0x317);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_GIVE_GROWTH_CREATURE_EVENT::eventCharacInfo>(pCVar2);
  memset(local_10,0,4);
  memcpy(local_10,param_2,0x2c);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

