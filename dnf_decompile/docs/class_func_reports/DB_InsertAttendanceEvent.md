# DB_InsertAttendanceEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 08448a48 DB_InsertAttendanceEvent::dispatch  [0x08448a48-0x8448afd] ===
 8448a48:	55                   	push   %ebp
 8448a49:	89 e5                	mov    %esp,%ebp
 8448a4b:	53                   	push   %ebx
 8448a4c:	83 ec 24             	sub    $0x24,%esp
 8448a4f:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8448a54:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8448a5b:	00 
 8448a5c:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 8448a63:	00 
 8448a64:	89 04 24             	mov    %eax,(%esp)
 8448a67:	e8 d2 c7 fa ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8448a6c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8448a6f:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8448a76:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8448a7d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8448a80:	89 44 24 04          	mov    %eax,0x4(%esp)
 8448a84:	8b 45 14             	mov    0x14(%ebp),%eax
 8448a87:	89 04 24             	mov    %eax,(%esp)
 8448a8a:	e8 07 3d 1d 00       	call   861c796 <_ZN6StreamrsERj>
 8448a8f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8448a92:	89 44 24 04          	mov    %eax,0x4(%esp)
 8448a96:	8b 45 14             	mov    0x14(%ebp),%eax
 8448a99:	89 04 24             	mov    %eax,(%esp)
 8448a9c:	e8 f5 3c 1d 00       	call   861c796 <_ZN6StreamrsERj>
 8448aa1:	8b 5d ec             	mov    -0x14(%ebp),%ebx
 8448aa4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8448aa7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8448aae:	00 
 8448aaf:	89 04 24             	mov    %eax,(%esp)
 8448ab2:	e8 94 05 cc ff       	call   810904b <_Z14NumberToStringji>
 8448ab7:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8448abb:	89 44 24 08          	mov    %eax,0x8(%esp)
 8448abf:	c7 44 24 04 28 89 c5 	movl   $0x8c58928,0x4(%esp)
 8448ac6:	08 
 8448ac7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8448aca:	89 04 24             	mov    %eax,(%esp)
 8448acd:	e8 ee b6 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8448ad2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8448ad9:	00 
 8448ada:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8448add:	89 04 24             	mov    %eax,(%esp)
 8448ae0:	e8 41 b8 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 8448ae5:	83 f0 01             	xor    $0x1,%eax
 8448ae8:	84 c0                	test   %al,%al
 8448aea:	74 07                	je     8448af3 <_ZN24DB_InsertAttendanceEvent8dispatchEiiP6Stream+0xab>
 8448aec:	b8 00 00 00 00       	mov    $0x0,%eax
 8448af1:	eb 05                	jmp    8448af8 <_ZN24DB_InsertAttendanceEvent8dispatchEiiP6Stream+0xb0>
 8448af3:	b8 01 00 00 00       	mov    $0x1,%eax
 8448af8:	83 c4 24             	add    $0x24,%esp
 8448afb:	5b                   	pop    %ebx
 8448afc:	5d                   	pop    %ebp
 8448afd:	c3                   	ret

```

```c
// DB_InsertAttendanceEvent::dispatch @ 0x8448a48

/* DB_InsertAttendanceEvent::dispatch(int, int, Stream*) */

bool DB_InsertAttendanceEvent::dispatch(int param_1,int param_2,Stream *param_3)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  Stream *in_stack_00000010;
  uint local_18;
  uint local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  local_14 = 0;
  local_18 = 0;
  Stream::operator>>(in_stack_00000010,&local_14);
  Stream::operator>>(in_stack_00000010,&local_18);
  uVar1 = local_18;
  uVar3 = NumberToString(local_14,0);
  MySQL::set_query(local_10,
                   "inSert into event_1207_attendance(m_id, charac_no, occ_date) \t\t\t\t  values(%s, %u, now())"
                   ,uVar3,uVar1);
  cVar2 = MySQL::exec(local_10,true);
  return cVar2 == '\x01';
}

```

---

## makeRequest

```asm
// === 08448afe DB_InsertAttendanceEvent::makeRequest  [0x08448afe-0x8448bed] ===
 8448afe:	55                   	push   %ebp
 8448aff:	89 e5                	mov    %esp,%ebp
 8448b01:	56                   	push   %esi
 8448b02:	53                   	push   %ebx
 8448b03:	83 ec 20             	sub    $0x20,%esp
 8448b06:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8448b0b:	c7 44 24 08 51 b6 00 	movl   $0xb651,0x8(%esp)
 8448b12:	00 
 8448b13:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8448b1a:	08 
 8448b1b:	89 04 24             	mov    %eax,(%esp)
 8448b1e:	e8 63 6f e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8448b23:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8448b2a:	00 
 8448b2b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8448b2f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8448b32:	89 04 24             	mov    %eax,(%esp)
 8448b35:	e8 ec 00 c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8448b3a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8448b3d:	89 04 24             	mov    %eax,(%esp)
 8448b40:	e8 01 01 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8448b45:	c7 44 24 04 0e 03 00 	movl   $0x30e,0x4(%esp)
 8448b4c:	00 
 8448b4d:	89 04 24             	mov    %eax,(%esp)
 8448b50:	e8 01 01 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8448b55:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8448b58:	89 04 24             	mov    %eax,(%esp)
 8448b5b:	e8 e6 00 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8448b60:	8b 55 08             	mov    0x8(%ebp),%edx
 8448b63:	89 54 24 04          	mov    %edx,0x4(%esp)
 8448b67:	89 04 24             	mov    %eax,(%esp)
 8448b6a:	e8 e7 00 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8448b6f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8448b72:	89 04 24             	mov    %eax,(%esp)
 8448b75:	e8 cc 00 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8448b7a:	8b 55 0c             	mov    0xc(%ebp),%edx
 8448b7d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8448b81:	89 04 24             	mov    %eax,(%esp)
 8448b84:	e8 09 97 c9 ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 8448b89:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8448b8c:	89 04 24             	mov    %eax,(%esp)
 8448b8f:	e8 b2 00 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8448b94:	8b 55 10             	mov    0x10(%ebp),%edx
 8448b97:	89 54 24 04          	mov    %edx,0x4(%esp)
 8448b9b:	89 04 24             	mov    %eax,(%esp)
 8448b9e:	e8 ef 96 c9 ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 8448ba3:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8448ba8:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8448bab:	89 54 24 08          	mov    %edx,0x8(%esp)
 8448baf:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8448bb6:	00 
 8448bb7:	89 04 24             	mov    %eax,(%esp)
 8448bba:	e8 1f 84 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8448bbf:	eb 1b                	jmp    8448bdc <_ZN24DB_InsertAttendanceEvent11makeRequestEijj+0xde>
 8448bc1:	89 d3                	mov    %edx,%ebx
 8448bc3:	89 c6                	mov    %eax,%esi
 8448bc5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8448bc8:	89 04 24             	mov    %eax,(%esp)
 8448bcb:	e8 02 3d 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8448bd0:	89 f0                	mov    %esi,%eax
 8448bd2:	89 da                	mov    %ebx,%edx
 8448bd4:	89 04 24             	mov    %eax,(%esp)
 8448bd7:	e8 74 ab 69 00       	call   8ae3750 <_Unwind_Resume>
 8448bdc:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8448bdf:	89 04 24             	mov    %eax,(%esp)
 8448be2:	e8 eb 3c 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8448be7:	83 c4 20             	add    $0x20,%esp
 8448bea:	5b                   	pop    %ebx
 8448beb:	5e                   	pop    %esi
 8448bec:	5d                   	pop    %ebp
 8448bed:	c3                   	ret

```

```c
// DB_InsertAttendanceEvent::makeRequest @ 0x8448afe

/* DB_InsertAttendanceEvent::makeRequest(int, unsigned int, unsigned int) */

void DB_InsertAttendanceEvent::makeRequest(int param_1,uint param_2,uint param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xb651);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08448b50 to 08448bbe has its CatchHandler @ 08448bc1 */
  CStreamGuard::operator<<(pCVar2,0x30e);
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

