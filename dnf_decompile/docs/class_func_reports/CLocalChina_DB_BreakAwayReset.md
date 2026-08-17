# CLocalChina_DB_BreakAwayReset

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 08127e84 CLocalChina_DB_BreakAwayReset::dispatch  [0x08127e84-0x8127f41] ===
 8127e84:	55                   	push   %ebp
 8127e85:	89 e5                	mov    %esp,%ebp
 8127e87:	83 ec 38             	sub    $0x38,%esp
 8127e8a:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8127e8f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8127e96:	00 
 8127e97:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 8127e9e:	00 
 8127e9f:	89 04 24             	mov    %eax,(%esp)
 8127ea2:	e8 97 d3 2c 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8127ea7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8127eaa:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8127eb1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8127eb4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8127eb8:	8b 45 14             	mov    0x14(%ebp),%eax
 8127ebb:	89 04 24             	mov    %eax,(%esp)
 8127ebe:	e8 d3 48 4f 00       	call   861c796 <_ZN6StreamrsERj>
 8127ec3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8127ec6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8127ecd:	00 
 8127ece:	89 04 24             	mov    %eax,(%esp)
 8127ed1:	e8 75 11 fe ff       	call   810904b <_Z14NumberToStringji>
 8127ed6:	89 44 24 08          	mov    %eax,0x8(%esp)
 8127eda:	c7 44 24 04 04 28 b6 	movl   $0x8b62804,0x4(%esp)
 8127ee1:	08 
 8127ee2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8127ee5:	89 04 24             	mov    %eax,(%esp)
 8127ee8:	e8 d3 c2 2c 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8127eed:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8127ef4:	00 
 8127ef5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8127ef8:	89 04 24             	mov    %eax,(%esp)
 8127efb:	e8 26 c4 2c 00       	call   83f4326 <_ZN5MySQL4execEb>
 8127f00:	83 f0 01             	xor    $0x1,%eax
 8127f03:	84 c0                	test   %al,%al
 8127f05:	74 33                	je     8127f3a <_ZN29CLocalChina_DB_BreakAwayReset8dispatchEiiP6Stream+0xb6>
 8127f07:	c7 44 24 10 e0 28 b6 	movl   $0x8b628e0,0x10(%esp)
 8127f0e:	08 
 8127f0f:	c7 44 24 0c ff 03 00 	movl   $0x3ff,0xc(%esp)
 8127f16:	00 
 8127f17:	c7 44 24 08 80 3b b6 	movl   $0x8b63b80,0x8(%esp)
 8127f1e:	08 
 8127f1f:	c7 44 24 04 0c 29 b6 	movl   $0x8b6290c,0x4(%esp)
 8127f26:	08 
 8127f27:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8127f2e:	e8 d7 bc 9a 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8127f33:	b8 00 00 00 00       	mov    $0x0,%eax
 8127f38:	eb 05                	jmp    8127f3f <_ZN29CLocalChina_DB_BreakAwayReset8dispatchEiiP6Stream+0xbb>
 8127f3a:	b8 01 00 00 00       	mov    $0x1,%eax
 8127f3f:	c9                   	leave
 8127f40:	c3                   	ret
 8127f41:	90                   	nop

```

```c
// CLocalChina_DB_BreakAwayReset::dispatch @ 0x8127e84

/* CLocalChina_DB_BreakAwayReset::dispatch(int, int, Stream*) */

bool CLocalChina_DB_BreakAwayReset::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  Stream *in_stack_00000010;
  uint local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_14 = 0;
  Stream::operator>>(in_stack_00000010,&local_14);
  uVar2 = NumberToString(local_14,0);
  MySQL::set_query(local_10,
                   "UPDATE churn_member_info \t\t\t\t   SET accrue_cera = 0, first_reward_time = 0, last_reward_time = 0, \t\t\t\t\t   add_info = 0, luck_point = 0, last_update_time = 0, second_reward_time = 0, quest_time = 0 \t\t\t\t   WHERE m_id=%s"
                   ,uVar2);
  cVar1 = MySQL::exec(local_10,true);
  if (cVar1 != '\x01') {
    LogManager::logFormat
              (1,"localchina/localchina_DBThread.cpp",
               "virtual bool CLocalChina_DB_BreakAwayReset::dispatch(int, int, Stream*)",0x3ff,
               "[GM]CLocalChina_DB_BreakAwayReset Fail!!");
  }
  return cVar1 == '\x01';
}

```

---

## makeRequest

```asm
// === 08127f42 CLocalChina_DB_BreakAwayReset::makeRequest  [0x08127f42-0x8128019] ===
 8127f42:	55                   	push   %ebp
 8127f43:	89 e5                	mov    %esp,%ebp
 8127f45:	56                   	push   %esi
 8127f46:	53                   	push   %ebx
 8127f47:	83 ec 20             	sub    $0x20,%esp
 8127f4a:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8127f4f:	c7 44 24 08 08 04 00 	movl   $0x408,0x8(%esp)
 8127f56:	00 
 8127f57:	c7 44 24 04 0c 29 b6 	movl   $0x8b6290c,0x4(%esp)
 8127f5e:	08 
 8127f5f:	89 04 24             	mov    %eax,(%esp)
 8127f62:	e8 1f 7b 16 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8127f67:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8127f6e:	00 
 8127f6f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8127f73:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8127f76:	89 04 24             	mov    %eax,(%esp)
 8127f79:	e8 a8 0c fa ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8127f7e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8127f81:	89 04 24             	mov    %eax,(%esp)
 8127f84:	e8 bd 0c fa ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8127f89:	c7 44 24 04 dd 02 00 	movl   $0x2dd,0x4(%esp)
 8127f90:	00 
 8127f91:	89 04 24             	mov    %eax,(%esp)
 8127f94:	e8 bd 0c fa ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8127f99:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8127f9c:	89 04 24             	mov    %eax,(%esp)
 8127f9f:	e8 a2 0c fa ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8127fa4:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8127fab:	ff 
 8127fac:	89 04 24             	mov    %eax,(%esp)
 8127faf:	e8 a2 0c fa ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8127fb4:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8127fb7:	89 04 24             	mov    %eax,(%esp)
 8127fba:	e8 87 0c fa ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8127fbf:	8b 55 08             	mov    0x8(%ebp),%edx
 8127fc2:	89 54 24 04          	mov    %edx,0x4(%esp)
 8127fc6:	89 04 24             	mov    %eax,(%esp)
 8127fc9:	e8 c4 a2 fb ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 8127fce:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8127fd3:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8127fd6:	89 54 24 08          	mov    %edx,0x8(%esp)
 8127fda:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8127fe1:	00 
 8127fe2:	89 04 24             	mov    %eax,(%esp)
 8127fe5:	e8 f4 8f 44 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8127fea:	eb 1b                	jmp    8128007 <_ZN29CLocalChina_DB_BreakAwayReset11makeRequestEj+0xc5>
 8127fec:	89 d3                	mov    %edx,%ebx
 8127fee:	89 c6                	mov    %eax,%esi
 8127ff0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8127ff3:	89 04 24             	mov    %eax,(%esp)
 8127ff6:	e8 d7 48 4f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8127ffb:	89 f0                	mov    %esi,%eax
 8127ffd:	89 da                	mov    %ebx,%edx
 8127fff:	89 04 24             	mov    %eax,(%esp)
 8128002:	e8 49 b7 9b 00       	call   8ae3750 <_Unwind_Resume>
 8128007:	8d 45 f0             	lea    -0x10(%ebp),%eax
 812800a:	89 04 24             	mov    %eax,(%esp)
 812800d:	e8 c0 48 4f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8128012:	83 c4 20             	add    $0x20,%esp
 8128015:	5b                   	pop    %ebx
 8128016:	5e                   	pop    %esi
 8128017:	5d                   	pop    %ebp
 8128018:	c3                   	ret
 8128019:	90                   	nop

```

```c
// CLocalChina_DB_BreakAwayReset::makeRequest @ 0x8127f42

/* CLocalChina_DB_BreakAwayReset::makeRequest(unsigned int) */

void CLocalChina_DB_BreakAwayReset::makeRequest(uint param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,"localchina/localchina_DBThread.cpp",0x408)
  ;
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08127f94 to 08127fe9 has its CatchHandler @ 08127fec */
  CStreamGuard::operator<<(pCVar2,0x2dd);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

