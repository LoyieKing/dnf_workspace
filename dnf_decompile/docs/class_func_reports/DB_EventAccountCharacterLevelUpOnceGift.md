# DB_EventAccountCharacterLevelUpOnceGift

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 08449e3e DB_EventAccountCharacterLevelUpOnceGift::dispatch  [0x08449e3e-0x8449f65] ===
 8449e3e:	55                   	push   %ebp
 8449e3f:	89 e5                	mov    %esp,%ebp
 8449e41:	57                   	push   %edi
 8449e42:	56                   	push   %esi
 8449e43:	53                   	push   %ebx
 8449e44:	83 ec 5c             	sub    $0x5c,%esp
 8449e47:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8449e4c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8449e53:	00 
 8449e54:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 8449e5b:	00 
 8449e5c:	89 04 24             	mov    %eax,(%esp)
 8449e5f:	e8 da b3 fa ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8449e64:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8449e67:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8449e6e:	66 c7 45 de 00 00    	movw   $0x0,-0x22(%ebp)
 8449e74:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8449e7b:	66 c7 45 d6 00 00    	movw   $0x0,-0x2a(%ebp)
 8449e81:	66 c7 45 d4 00 00    	movw   $0x0,-0x2c(%ebp)
 8449e87:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8449e8a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8449e8e:	8b 45 14             	mov    0x14(%ebp),%eax
 8449e91:	89 04 24             	mov    %eax,(%esp)
 8449e94:	e8 fd 28 1d 00       	call   861c796 <_ZN6StreamrsERj>
 8449e99:	8d 45 de             	lea    -0x22(%ebp),%eax
 8449e9c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8449ea0:	8b 45 14             	mov    0x14(%ebp),%eax
 8449ea3:	89 04 24             	mov    %eax,(%esp)
 8449ea6:	e8 a7 26 1d 00       	call   861c552 <_ZN6StreamrsERs>
 8449eab:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8449eae:	89 44 24 04          	mov    %eax,0x4(%esp)
 8449eb2:	8b 45 14             	mov    0x14(%ebp),%eax
 8449eb5:	89 04 24             	mov    %eax,(%esp)
 8449eb8:	e8 07 27 1d 00       	call   861c5c4 <_ZN6StreamrsERi>
 8449ebd:	8d 45 d6             	lea    -0x2a(%ebp),%eax
 8449ec0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8449ec4:	8b 45 14             	mov    0x14(%ebp),%eax
 8449ec7:	89 04 24             	mov    %eax,(%esp)
 8449eca:	e8 83 26 1d 00       	call   861c552 <_ZN6StreamrsERs>
 8449ecf:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8449ed2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8449ed6:	8b 45 14             	mov    0x14(%ebp),%eax
 8449ed9:	89 04 24             	mov    %eax,(%esp)
 8449edc:	e8 71 26 1d 00       	call   861c552 <_ZN6StreamrsERs>
 8449ee1:	0f b7 45 d4          	movzwl -0x2c(%ebp),%eax
 8449ee5:	98                   	cwtl
 8449ee6:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8449ee9:	0f b7 45 d6          	movzwl -0x2a(%ebp),%eax
 8449eed:	0f bf f8             	movswl %ax,%edi
 8449ef0:	8b 75 d8             	mov    -0x28(%ebp),%esi
 8449ef3:	0f b7 45 de          	movzwl -0x22(%ebp),%eax
 8449ef7:	0f bf d8             	movswl %ax,%ebx
 8449efa:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8449efd:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8449f04:	00 
 8449f05:	89 04 24             	mov    %eax,(%esp)
 8449f08:	e8 3e f1 cb ff       	call   810904b <_Z14NumberToStringji>
 8449f0d:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 8449f10:	89 54 24 18          	mov    %edx,0x18(%esp)
 8449f14:	89 7c 24 14          	mov    %edi,0x14(%esp)
 8449f18:	89 74 24 10          	mov    %esi,0x10(%esp)
 8449f1c:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8449f20:	89 44 24 08          	mov    %eax,0x8(%esp)
 8449f24:	c7 44 24 04 7c 8e c5 	movl   $0x8c58e7c,0x4(%esp)
 8449f2b:	08 
 8449f2c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8449f2f:	89 04 24             	mov    %eax,(%esp)
 8449f32:	e8 89 a2 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8449f37:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8449f3e:	00 
 8449f3f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8449f42:	89 04 24             	mov    %eax,(%esp)
 8449f45:	e8 dc a3 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 8449f4a:	83 f0 01             	xor    $0x1,%eax
 8449f4d:	84 c0                	test   %al,%al
 8449f4f:	74 07                	je     8449f58 <_ZN39DB_EventAccountCharacterLevelUpOnceGift8dispatchEiiP6Stream+0x11a>
 8449f51:	b8 00 00 00 00       	mov    $0x0,%eax
 8449f56:	eb 05                	jmp    8449f5d <_ZN39DB_EventAccountCharacterLevelUpOnceGift8dispatchEiiP6Stream+0x11f>
 8449f58:	b8 01 00 00 00       	mov    $0x1,%eax
 8449f5d:	83 c4 5c             	add    $0x5c,%esp
 8449f60:	5b                   	pop    %ebx
 8449f61:	5e                   	pop    %esi
 8449f62:	5f                   	pop    %edi
 8449f63:	5d                   	pop    %ebp
 8449f64:	c3                   	ret
 8449f65:	90                   	nop

```

```c
// DB_EventAccountCharacterLevelUpOnceGift::dispatch @ 0x8449e3e

/* DB_EventAccountCharacterLevelUpOnceGift::dispatch(int, int, Stream*) */

bool DB_EventAccountCharacterLevelUpOnceGift::dispatch(int param_1,int param_2,Stream *param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  Stream *in_stack_00000010;
  short local_30;
  short local_2e;
  int local_2c;
  short local_26;
  uint local_24;
  MySQL *local_20;
  
  local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  local_24 = 0;
  local_26 = 0;
  local_2c = 0;
  local_2e = 0;
  local_30 = 0;
  Stream::operator>>(in_stack_00000010,&local_24);
  Stream::operator>>(in_stack_00000010,&local_26);
  Stream::operator>>(in_stack_00000010,&local_2c);
  Stream::operator>>(in_stack_00000010,&local_2e);
  Stream::operator>>(in_stack_00000010,&local_30);
  iVar1 = local_2c;
  iVar3 = (int)local_30;
  iVar6 = (int)local_2e;
  iVar5 = (int)local_26;
  uVar4 = NumberToString(local_24,0);
  MySQL::set_query(local_20,
                   "inSert into event_1208_level_achieve(m_id ,server_id, charac_no, job_type, level, occ_date) values(%s, %d, %d, %d, %d, now())"
                   ,uVar4,iVar5,iVar1,iVar6,iVar3);
  cVar2 = MySQL::exec(local_20,true);
  return cVar2 == '\x01';
}

```

---

## makeRequest

```asm
// === 08449f66 DB_EventAccountCharacterLevelUpOnceGift::makeRequest  [0x08449f66-0x844a0bd] ===
 8449f66:	55                   	push   %ebp
 8449f67:	89 e5                	mov    %esp,%ebp
 8449f69:	56                   	push   %esi
 8449f6a:	53                   	push   %ebx
 8449f6b:	83 ec 30             	sub    $0x30,%esp
 8449f6e:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8449f71:	8b 55 14             	mov    0x14(%ebp),%edx
 8449f74:	8b 45 18             	mov    0x18(%ebp),%eax
 8449f77:	66 89 4d e4          	mov    %cx,-0x1c(%ebp)
 8449f7b:	66 89 55 e0          	mov    %dx,-0x20(%ebp)
 8449f7f:	66 89 45 dc          	mov    %ax,-0x24(%ebp)
 8449f83:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8449f88:	c7 44 24 08 d9 b9 00 	movl   $0xb9d9,0x8(%esp)
 8449f8f:	00 
 8449f90:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8449f97:	08 
 8449f98:	89 04 24             	mov    %eax,(%esp)
 8449f9b:	e8 e6 5a e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8449fa0:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8449fa7:	00 
 8449fa8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8449fac:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8449faf:	89 04 24             	mov    %eax,(%esp)
 8449fb2:	e8 6f ec c7 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8449fb7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8449fba:	89 04 24             	mov    %eax,(%esp)
 8449fbd:	e8 84 ec c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8449fc2:	c7 44 24 04 19 03 00 	movl   $0x319,0x4(%esp)
 8449fc9:	00 
 8449fca:	89 04 24             	mov    %eax,(%esp)
 8449fcd:	e8 84 ec c7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8449fd2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8449fd5:	89 04 24             	mov    %eax,(%esp)
 8449fd8:	e8 69 ec c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8449fdd:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8449fe4:	ff 
 8449fe5:	89 04 24             	mov    %eax,(%esp)
 8449fe8:	e8 69 ec c7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8449fed:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8449ff0:	89 04 24             	mov    %eax,(%esp)
 8449ff3:	e8 4e ec c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8449ff8:	8b 55 08             	mov    0x8(%ebp),%edx
 8449ffb:	89 54 24 04          	mov    %edx,0x4(%esp)
 8449fff:	89 04 24             	mov    %eax,(%esp)
 844a002:	e8 8b 82 c9 ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 844a007:	0f bf 5d e4          	movswl -0x1c(%ebp),%ebx
 844a00b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844a00e:	89 04 24             	mov    %eax,(%esp)
 844a011:	e8 30 ec c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844a016:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 844a01a:	89 04 24             	mov    %eax,(%esp)
 844a01d:	e8 44 0d de ff       	call   822ad66 <_ZN12CStreamGuardlsEs>
 844a022:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844a025:	89 04 24             	mov    %eax,(%esp)
 844a028:	e8 19 ec c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844a02d:	8b 55 10             	mov    0x10(%ebp),%edx
 844a030:	89 54 24 04          	mov    %edx,0x4(%esp)
 844a034:	89 04 24             	mov    %eax,(%esp)
 844a037:	e8 1a ec c7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 844a03c:	0f bf 5d e0          	movswl -0x20(%ebp),%ebx
 844a040:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844a043:	89 04 24             	mov    %eax,(%esp)
 844a046:	e8 fb eb c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844a04b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 844a04f:	89 04 24             	mov    %eax,(%esp)
 844a052:	e8 0f 0d de ff       	call   822ad66 <_ZN12CStreamGuardlsEs>
 844a057:	0f bf 5d dc          	movswl -0x24(%ebp),%ebx
 844a05b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844a05e:	89 04 24             	mov    %eax,(%esp)
 844a061:	e8 e0 eb c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844a066:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 844a06a:	89 04 24             	mov    %eax,(%esp)
 844a06d:	e8 f4 0c de ff       	call   822ad66 <_ZN12CStreamGuardlsEs>
 844a072:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 844a077:	8d 55 f0             	lea    -0x10(%ebp),%edx
 844a07a:	89 54 24 08          	mov    %edx,0x8(%esp)
 844a07e:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 844a085:	00 
 844a086:	89 04 24             	mov    %eax,(%esp)
 844a089:	e8 50 6f 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 844a08e:	eb 1b                	jmp    844a0ab <_ZN39DB_EventAccountCharacterLevelUpOnceGift11makeRequestEjsiss+0x145>
 844a090:	89 d3                	mov    %edx,%ebx
 844a092:	89 c6                	mov    %eax,%esi
 844a094:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844a097:	89 04 24             	mov    %eax,(%esp)
 844a09a:	e8 33 28 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 844a09f:	89 f0                	mov    %esi,%eax
 844a0a1:	89 da                	mov    %ebx,%edx
 844a0a3:	89 04 24             	mov    %eax,(%esp)
 844a0a6:	e8 a5 96 69 00       	call   8ae3750 <_Unwind_Resume>
 844a0ab:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844a0ae:	89 04 24             	mov    %eax,(%esp)
 844a0b1:	e8 1c 28 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 844a0b6:	83 c4 30             	add    $0x30,%esp
 844a0b9:	5b                   	pop    %ebx
 844a0ba:	5e                   	pop    %esi
 844a0bb:	5d                   	pop    %ebp
 844a0bc:	c3                   	ret
 844a0bd:	90                   	nop

```

```c
// DB_EventAccountCharacterLevelUpOnceGift::makeRequest @ 0x8449f66

/* DB_EventAccountCharacterLevelUpOnceGift::makeRequest(unsigned int, short, int, short, short) */

void DB_EventAccountCharacterLevelUpOnceGift::makeRequest
               (uint param_1,short param_2,int param_3,short param_4,short param_5)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xb9d9);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08449fcd to 0844a08d has its CatchHandler @ 0844a090 */
  CStreamGuard::operator<<(pCVar2,0x319);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_4);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_5);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

