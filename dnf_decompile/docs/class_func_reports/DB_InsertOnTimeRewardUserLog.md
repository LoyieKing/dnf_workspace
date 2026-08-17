# DB_InsertOnTimeRewardUserLog

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 08442a56 DB_InsertOnTimeRewardUserLog::dispatch  [0x08442a56-0x8442b79] ===
 8442a56:	55                   	push   %ebp
 8442a57:	89 e5                	mov    %esp,%ebp
 8442a59:	56                   	push   %esi
 8442a5a:	53                   	push   %ebx
 8442a5b:	83 ec 40             	sub    $0x40,%esp
 8442a5e:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8442a63:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8442a6a:	00 
 8442a6b:	c7 44 24 04 0d 00 00 	movl   $0xd,0x4(%esp)
 8442a72:	00 
 8442a73:	89 04 24             	mov    %eax,(%esp)
 8442a76:	e8 c3 27 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8442a7b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8442a7e:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8442a85:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8442a8c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8442a8f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8442a93:	8b 45 14             	mov    0x14(%ebp),%eax
 8442a96:	89 04 24             	mov    %eax,(%esp)
 8442a99:	e8 f8 9c 1d 00       	call   861c796 <_ZN6StreamrsERj>
 8442a9e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8442aa1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8442aa5:	8b 45 14             	mov    0x14(%ebp),%eax
 8442aa8:	89 04 24             	mov    %eax,(%esp)
 8442aab:	e8 14 9b 1d 00       	call   861c5c4 <_ZN6StreamrsERi>
 8442ab0:	c7 45 f4 43 6b c5 08 	movl   $0x8c56b43,-0xc(%ebp)
 8442ab7:	8b 5d d8             	mov    -0x28(%ebp),%ebx
 8442aba:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8442abd:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8442ac4:	00 
 8442ac5:	89 04 24             	mov    %eax,(%esp)
 8442ac8:	e8 7e 65 cc ff       	call   810904b <_Z14NumberToStringji>
 8442acd:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8442ad1:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8442ad5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8442ad8:	89 44 24 08          	mov    %eax,0x8(%esp)
 8442adc:	c7 44 24 04 48 6b c5 	movl   $0x8c56b48,0x4(%esp)
 8442ae3:	08 
 8442ae4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8442ae7:	89 04 24             	mov    %eax,(%esp)
 8442aea:	e8 d1 16 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8442aef:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8442af6:	00 
 8442af7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8442afa:	89 04 24             	mov    %eax,(%esp)
 8442afd:	e8 24 18 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8442b02:	83 f0 01             	xor    $0x1,%eax
 8442b05:	84 c0                	test   %al,%al
 8442b07:	74 64                	je     8442b6d <_ZN28DB_InsertOnTimeRewardUserLog8dispatchEiiP6Stream+0x117>
 8442b09:	8b 75 d8             	mov    -0x28(%ebp),%esi
 8442b0c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8442b0f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8442b16:	00 
 8442b17:	89 04 24             	mov    %eax,(%esp)
 8442b1a:	e8 2c 65 cc ff       	call   810904b <_Z14NumberToStringji>
 8442b1f:	89 c3                	mov    %eax,%ebx
 8442b21:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8442b28:	00 
 8442b29:	c7 44 24 08 39 a4 00 	movl   $0xa439,0x8(%esp)
 8442b30:	00 
 8442b31:	c7 44 24 04 60 b6 c5 	movl   $0x8c5b660,0x4(%esp)
 8442b38:	08 
 8442b39:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8442b3c:	89 04 24             	mov    %eax,(%esp)
 8442b3f:	e8 d4 cb 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8442b44:	89 74 24 10          	mov    %esi,0x10(%esp)
 8442b48:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8442b4c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8442b4f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8442b53:	c7 44 24 04 8c 6b c5 	movl   $0x8c56b8c,0x4(%esp)
 8442b5a:	08 
 8442b5b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8442b5e:	89 04 24             	mov    %eax,(%esp)
 8442b61:	e8 22 cc 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8442b66:	b8 00 00 00 00       	mov    $0x0,%eax
 8442b6b:	eb 05                	jmp    8442b72 <_ZN28DB_InsertOnTimeRewardUserLog8dispatchEiiP6Stream+0x11c>
 8442b6d:	b8 01 00 00 00       	mov    $0x1,%eax
 8442b72:	83 c4 40             	add    $0x40,%esp
 8442b75:	5b                   	pop    %ebx
 8442b76:	5e                   	pop    %esi
 8442b77:	5d                   	pop    %ebp
 8442b78:	c3                   	ret
 8442b79:	90                   	nop

```

```c
// DB_InsertOnTimeRewardUserLog::dispatch @ 0x8442a56

/* DB_InsertOnTimeRewardUserLog::dispatch(int, int, Stream*) */

bool DB_InsertOnTimeRewardUserLog::dispatch(int param_1,int param_2,Stream *param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  Stream *in_stack_00000010;
  int local_2c;
  uint local_28;
  cMyTrace local_24 [16];
  MySQL *local_14;
  undefined *local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,0xd,0);
  local_28 = 0;
  local_2c = 0;
  Stream::operator>>(in_stack_00000010,&local_28);
  Stream::operator>>(in_stack_00000010,&local_2c);
  iVar1 = local_2c;
  local_10 = &DAT_08c56b43;
  uVar3 = NumberToString(local_28,0);
  MySQL::set_query(local_14,"inSert into event_%s_ontime_reward_user(m_id,recv_no) values(%s,%u)",
                   local_10,uVar3,iVar1);
  cVar2 = MySQL::exec(local_14,true);
  iVar1 = local_2c;
  if (cVar2 != '\x01') {
    uVar3 = NumberToString(local_28,0);
    cMyTrace::cMyTrace(local_24,
                       "virtual bool DB_InsertOnTimeRewardUserLog::dispatch(int, int, Stream*)",
                       0xa439,5);
    cMyTrace::operator()
              (local_24,
               "inSert into event_%s_ontime_reward_user(m_id,recv_no) failed at m_id(%s,%u) ",
               local_10,uVar3,iVar1);
  }
  return cVar2 == '\x01';
}

```

---

## makeRequest

```asm
// === 08442b7a DB_InsertOnTimeRewardUserLog::makeRequest  [0x08442b7a-0x8442c69] ===
 8442b7a:	55                   	push   %ebp
 8442b7b:	89 e5                	mov    %esp,%ebp
 8442b7d:	56                   	push   %esi
 8442b7e:	53                   	push   %ebx
 8442b7f:	83 ec 20             	sub    $0x20,%esp
 8442b82:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8442b87:	c7 44 24 08 45 a4 00 	movl   $0xa445,0x8(%esp)
 8442b8e:	00 
 8442b8f:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8442b96:	08 
 8442b97:	89 04 24             	mov    %eax,(%esp)
 8442b9a:	e8 e7 ce e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8442b9f:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8442ba6:	00 
 8442ba7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8442bab:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8442bae:	89 04 24             	mov    %eax,(%esp)
 8442bb1:	e8 70 60 c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8442bb6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8442bb9:	89 04 24             	mov    %eax,(%esp)
 8442bbc:	e8 85 60 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8442bc1:	c7 44 24 04 98 02 00 	movl   $0x298,0x4(%esp)
 8442bc8:	00 
 8442bc9:	89 04 24             	mov    %eax,(%esp)
 8442bcc:	e8 85 60 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8442bd1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8442bd4:	89 04 24             	mov    %eax,(%esp)
 8442bd7:	e8 6a 60 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8442bdc:	8b 55 08             	mov    0x8(%ebp),%edx
 8442bdf:	89 54 24 04          	mov    %edx,0x4(%esp)
 8442be3:	89 04 24             	mov    %eax,(%esp)
 8442be6:	e8 6b 60 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8442beb:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8442bee:	89 04 24             	mov    %eax,(%esp)
 8442bf1:	e8 50 60 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8442bf6:	8b 55 0c             	mov    0xc(%ebp),%edx
 8442bf9:	89 54 24 04          	mov    %edx,0x4(%esp)
 8442bfd:	89 04 24             	mov    %eax,(%esp)
 8442c00:	e8 8d f6 c9 ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 8442c05:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8442c08:	89 04 24             	mov    %eax,(%esp)
 8442c0b:	e8 36 60 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8442c10:	8b 55 10             	mov    0x10(%ebp),%edx
 8442c13:	89 54 24 04          	mov    %edx,0x4(%esp)
 8442c17:	89 04 24             	mov    %eax,(%esp)
 8442c1a:	e8 37 60 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8442c1f:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8442c24:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8442c27:	89 54 24 08          	mov    %edx,0x8(%esp)
 8442c2b:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8442c32:	00 
 8442c33:	89 04 24             	mov    %eax,(%esp)
 8442c36:	e8 a3 e3 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8442c3b:	eb 1b                	jmp    8442c58 <_ZN28DB_InsertOnTimeRewardUserLog11makeRequestEiji+0xde>
 8442c3d:	89 d3                	mov    %edx,%ebx
 8442c3f:	89 c6                	mov    %eax,%esi
 8442c41:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8442c44:	89 04 24             	mov    %eax,(%esp)
 8442c47:	e8 86 9c 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8442c4c:	89 f0                	mov    %esi,%eax
 8442c4e:	89 da                	mov    %ebx,%edx
 8442c50:	89 04 24             	mov    %eax,(%esp)
 8442c53:	e8 f8 0a 6a 00       	call   8ae3750 <_Unwind_Resume>
 8442c58:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8442c5b:	89 04 24             	mov    %eax,(%esp)
 8442c5e:	e8 6f 9c 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8442c63:	83 c4 20             	add    $0x20,%esp
 8442c66:	5b                   	pop    %ebx
 8442c67:	5e                   	pop    %esi
 8442c68:	5d                   	pop    %ebp
 8442c69:	c3                   	ret

```

```c
// DB_InsertOnTimeRewardUserLog::makeRequest @ 0x8442b7a

/* DB_InsertOnTimeRewardUserLog::makeRequest(int, unsigned int, int) */

void DB_InsertOnTimeRewardUserLog::makeRequest(int param_1,uint param_2,int param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xa445);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08442bcc to 08442c3a has its CatchHandler @ 08442c3d */
  CStreamGuard::operator<<(pCVar2,0x298);
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

