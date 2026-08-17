# DB_EventSaveGiveGrowCreature

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 08449a58 DB_EventSaveGiveGrowCreature::dispatch  [0x08449a58-0x8449b31] ===
 8449a58:	55                   	push   %ebp
 8449a59:	89 e5                	mov    %esp,%ebp
 8449a5b:	57                   	push   %edi
 8449a5c:	56                   	push   %esi
 8449a5d:	53                   	push   %ebx
 8449a5e:	83 ec 4c             	sub    $0x4c,%esp
 8449a61:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8449a66:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8449a6d:	00 
 8449a6e:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 8449a75:	00 
 8449a76:	89 04 24             	mov    %eax,(%esp)
 8449a79:	e8 c0 b7 fa ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8449a7e:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8449a81:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8449a88:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8449a8b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8449a8f:	8b 45 14             	mov    0x14(%ebp),%eax
 8449a92:	89 04 24             	mov    %eax,(%esp)
 8449a95:	e8 fc 2c 1d 00       	call   861c796 <_ZN6StreamrsERj>
 8449a9a:	8b 45 14             	mov    0x14(%ebp),%eax
 8449a9d:	89 04 24             	mov    %eax,(%esp)
 8449aa0:	e8 3f ac 00 00       	call   84546e4 <_ZN6Stream12GetOutBufferIN30SIG_GIVE_GROWTH_CREATURE_EVENT15eventCharacInfoEEEPT_v>
 8449aa5:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8449aa8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8449aab:	83 c0 0c             	add    $0xc,%eax
 8449aae:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8449ab1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8449ab4:	8b 78 08             	mov    0x8(%eax),%edi
 8449ab7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8449aba:	8b 70 04             	mov    0x4(%eax),%esi
 8449abd:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8449ac0:	0f b7 00             	movzwl (%eax),%eax
 8449ac3:	0f bf d8             	movswl %ax,%ebx
 8449ac6:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8449ac9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8449ad0:	00 
 8449ad1:	89 04 24             	mov    %eax,(%esp)
 8449ad4:	e8 72 f5 cb ff       	call   810904b <_Z14NumberToStringji>
 8449ad9:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8449adc:	89 54 24 18          	mov    %edx,0x18(%esp)
 8449ae0:	89 7c 24 14          	mov    %edi,0x14(%esp)
 8449ae4:	89 74 24 10          	mov    %esi,0x10(%esp)
 8449ae8:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8449aec:	89 44 24 08          	mov    %eax,0x8(%esp)
 8449af0:	c7 44 24 04 88 8d c5 	movl   $0x8c58d88,0x4(%esp)
 8449af7:	08 
 8449af8:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8449afb:	89 04 24             	mov    %eax,(%esp)
 8449afe:	e8 bd a6 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8449b03:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8449b0a:	00 
 8449b0b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8449b0e:	89 04 24             	mov    %eax,(%esp)
 8449b11:	e8 10 a8 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 8449b16:	83 f0 01             	xor    $0x1,%eax
 8449b19:	84 c0                	test   %al,%al
 8449b1b:	74 07                	je     8449b24 <_ZN28DB_EventSaveGiveGrowCreature8dispatchEiiP6Stream+0xcc>
 8449b1d:	b8 00 00 00 00       	mov    $0x0,%eax
 8449b22:	eb 05                	jmp    8449b29 <_ZN28DB_EventSaveGiveGrowCreature8dispatchEiiP6Stream+0xd1>
 8449b24:	b8 01 00 00 00       	mov    $0x1,%eax
 8449b29:	83 c4 4c             	add    $0x4c,%esp
 8449b2c:	5b                   	pop    %ebx
 8449b2d:	5e                   	pop    %esi
 8449b2e:	5f                   	pop    %edi
 8449b2f:	5d                   	pop    %ebp
 8449b30:	c3                   	ret
 8449b31:	90                   	nop

```

```c
// DB_EventSaveGiveGrowCreature::dispatch @ 0x8449a58

/* DB_EventSaveGiveGrowCreature::dispatch(int, int, Stream*) */

bool DB_EventSaveGiveGrowCreature::dispatch(int param_1,int param_2,Stream *param_3)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  eventCharacInfo *peVar5;
  undefined4 uVar6;
  Stream *in_stack_00000010;
  uint local_28;
  MySQL *local_24;
  eventCharacInfo *local_20;
  
  local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  local_28 = 0;
  Stream::operator>>(in_stack_00000010,&local_28);
  local_20 = Stream::GetOutBuffer<SIG_GIVE_GROWTH_CREATURE_EVENT::eventCharacInfo>
                       (in_stack_00000010);
  peVar5 = local_20 + 0xc;
  uVar2 = *(undefined4 *)(local_20 + 8);
  uVar3 = *(undefined4 *)(local_20 + 4);
  sVar1 = *(short *)local_20;
  uVar6 = NumberToString(local_28,0);
  MySQL::set_query(local_24,
                   "inSert into event_1208_growthcreature(m_id ,server_id, charac_no, job_type, charac_name, occ_date) values(%s, %d, %d, %d, \'%s\', now())"
                   ,uVar6,(int)sVar1,uVar3,uVar2,peVar5);
  cVar4 = MySQL::exec(local_24,true);
  return cVar4 == '\x01';
}

```

---

## makeRequest

```asm
// === 08449b32 DB_EventSaveGiveGrowCreature::makeRequest  [0x08449b32-0x8449c53] ===
 8449b32:	55                   	push   %ebp
 8449b33:	89 e5                	mov    %esp,%ebp
 8449b35:	56                   	push   %esi
 8449b36:	53                   	push   %ebx
 8449b37:	83 ec 20             	sub    $0x20,%esp
 8449b3a:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8449b3f:	c7 44 24 08 83 b9 00 	movl   $0xb983,0x8(%esp)
 8449b46:	00 
 8449b47:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8449b4e:	08 
 8449b4f:	89 04 24             	mov    %eax,(%esp)
 8449b52:	e8 2f 5f e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8449b57:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8449b5e:	00 
 8449b5f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8449b63:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8449b66:	89 04 24             	mov    %eax,(%esp)
 8449b69:	e8 b8 f0 c7 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8449b6e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8449b71:	89 04 24             	mov    %eax,(%esp)
 8449b74:	e8 cd f0 c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8449b79:	c7 44 24 04 17 03 00 	movl   $0x317,0x4(%esp)
 8449b80:	00 
 8449b81:	89 04 24             	mov    %eax,(%esp)
 8449b84:	e8 cd f0 c7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8449b89:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8449b8c:	89 04 24             	mov    %eax,(%esp)
 8449b8f:	e8 b2 f0 c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8449b94:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8449b9b:	ff 
 8449b9c:	89 04 24             	mov    %eax,(%esp)
 8449b9f:	e8 b2 f0 c7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8449ba4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8449ba7:	89 04 24             	mov    %eax,(%esp)
 8449baa:	e8 97 f0 c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8449baf:	8b 55 08             	mov    0x8(%ebp),%edx
 8449bb2:	89 54 24 04          	mov    %edx,0x4(%esp)
 8449bb6:	89 04 24             	mov    %eax,(%esp)
 8449bb9:	e8 d4 86 c9 ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 8449bbe:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8449bc1:	89 04 24             	mov    %eax,(%esp)
 8449bc4:	e8 85 f0 c7 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8449bc9:	89 04 24             	mov    %eax,(%esp)
 8449bcc:	e8 67 ab 00 00       	call   8454738 <_ZN12CStreamGuard11GetInBufferIN30SIG_GIVE_GROWTH_CREATURE_EVENT15eventCharacInfoEEEPT_v>
 8449bd1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8449bd4:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 8449bdb:	00 
 8449bdc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8449be3:	00 
 8449be4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8449be7:	89 04 24             	mov    %eax,(%esp)
 8449bea:	e8 d1 40 c3 ff       	call   807dcc0 <memset@plt>
 8449bef:	c7 44 24 08 2c 00 00 	movl   $0x2c,0x8(%esp)
 8449bf6:	00 
 8449bf7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8449bfa:	89 44 24 04          	mov    %eax,0x4(%esp)
 8449bfe:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8449c01:	89 04 24             	mov    %eax,(%esp)
 8449c04:	e8 97 3c c3 ff       	call   807d8a0 <memcpy@plt>
 8449c09:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8449c0e:	8d 55 ec             	lea    -0x14(%ebp),%edx
 8449c11:	89 54 24 08          	mov    %edx,0x8(%esp)
 8449c15:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8449c1c:	00 
 8449c1d:	89 04 24             	mov    %eax,(%esp)
 8449c20:	e8 b9 73 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8449c25:	eb 1b                	jmp    8449c42 <_ZN28DB_EventSaveGiveGrowCreature11makeRequestEjRN30SIG_GIVE_GROWTH_CREATURE_EVENT15eventCharacInfoE+0x110>
 8449c27:	89 d3                	mov    %edx,%ebx
 8449c29:	89 c6                	mov    %eax,%esi
 8449c2b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8449c2e:	89 04 24             	mov    %eax,(%esp)
 8449c31:	e8 9c 2c 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8449c36:	89 f0                	mov    %esi,%eax
 8449c38:	89 da                	mov    %ebx,%edx
 8449c3a:	89 04 24             	mov    %eax,(%esp)
 8449c3d:	e8 0e 9b 69 00       	call   8ae3750 <_Unwind_Resume>
 8449c42:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8449c45:	89 04 24             	mov    %eax,(%esp)
 8449c48:	e8 85 2c 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8449c4d:	83 c4 20             	add    $0x20,%esp
 8449c50:	5b                   	pop    %ebx
 8449c51:	5e                   	pop    %esi
 8449c52:	5d                   	pop    %ebp
 8449c53:	c3                   	ret

```

```c
// DB_EventSaveGiveGrowCreature::makeRequest @ 0x8449b32

/* DB_EventSaveGiveGrowCreature::makeRequest(unsigned int,
   SIG_GIVE_GROWTH_CREATURE_EVENT::eventCharacInfo&) */

void DB_EventSaveGiveGrowCreature::makeRequest(uint param_1,eventCharacInfo *param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  eventCharacInfo *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xb983);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08449b84 to 08449c24 has its CatchHandler @ 08449c27 */
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

