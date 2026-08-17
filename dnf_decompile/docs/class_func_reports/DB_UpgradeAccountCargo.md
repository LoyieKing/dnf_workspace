# DB_UpgradeAccountCargo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0843af76 DB_UpgradeAccountCargo::dispatch  [0x0843af76-0x843b15d] ===
 843af76:	55                   	push   %ebp
 843af77:	89 e5                	mov    %esp,%ebp
 843af79:	56                   	push   %esi
 843af7a:	53                   	push   %ebx
 843af7b:	83 ec 30             	sub    $0x30,%esp
 843af7e:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 843af83:	c7 44 24 08 fb 8b 00 	movl   $0x8bfb,0x8(%esp)
 843af8a:	00 
 843af8b:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 843af92:	08 
 843af93:	89 04 24             	mov    %eax,(%esp)
 843af96:	e8 eb 4a e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 843af9b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 843afa2:	00 
 843afa3:	89 44 24 04          	mov    %eax,0x4(%esp)
 843afa7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 843afaa:	89 04 24             	mov    %eax,(%esp)
 843afad:	e8 74 dc c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 843afb2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 843afb5:	89 04 24             	mov    %eax,(%esp)
 843afb8:	e8 89 dc c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843afbd:	8b 55 0c             	mov    0xc(%ebp),%edx
 843afc0:	89 54 24 04          	mov    %edx,0x4(%esp)
 843afc4:	89 04 24             	mov    %eax,(%esp)
 843afc7:	e8 8a dc c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843afcc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 843afcf:	89 04 24             	mov    %eax,(%esp)
 843afd2:	e8 6f dc c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843afd7:	8b 55 10             	mov    0x10(%ebp),%edx
 843afda:	89 54 24 04          	mov    %edx,0x4(%esp)
 843afde:	89 04 24             	mov    %eax,(%esp)
 843afe1:	e8 70 dc c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843afe6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 843afe9:	89 04 24             	mov    %eax,(%esp)
 843afec:	e8 5d dc c8 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 843aff1:	89 04 24             	mov    %eax,(%esp)
 843aff4:	e8 01 8a 01 00       	call   84539fa <_ZN12CStreamGuard11GetInBufferI32SIG_UPGRADE_ACCOUNT_CARGO_RESULTEEPT_v>
 843aff9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 843affc:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 843b003:	00 
 843b004:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843b00b:	00 
 843b00c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843b00f:	89 04 24             	mov    %eax,(%esp)
 843b012:	e8 a9 2c c4 ff       	call   807dcc0 <memset@plt>
 843b017:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 843b01e:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 843b025:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 843b028:	89 44 24 04          	mov    %eax,0x4(%esp)
 843b02c:	8b 45 14             	mov    0x14(%ebp),%eax
 843b02f:	89 04 24             	mov    %eax,(%esp)
 843b032:	e8 5f 17 1e 00       	call   861c796 <_ZN6StreamrsERj>
 843b037:	8d 45 e0             	lea    -0x20(%ebp),%eax
 843b03a:	89 44 24 04          	mov    %eax,0x4(%esp)
 843b03e:	8b 45 14             	mov    0x14(%ebp),%eax
 843b041:	89 04 24             	mov    %eax,(%esp)
 843b044:	e8 4d 17 1e 00       	call   861c796 <_ZN6StreamrsERj>
 843b049:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 843b04e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 843b055:	00 
 843b056:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843b05d:	00 
 843b05e:	89 04 24             	mov    %eax,(%esp)
 843b061:	e8 d8 a1 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 843b066:	89 45 f4             	mov    %eax,-0xc(%ebp)
 843b069:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 843b06c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843b073:	00 
 843b074:	89 04 24             	mov    %eax,(%esp)
 843b077:	e8 cf df cc ff       	call   810904b <_Z14NumberToStringji>
 843b07c:	8b 55 e0             	mov    -0x20(%ebp),%edx
 843b07f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 843b083:	89 54 24 08          	mov    %edx,0x8(%esp)
 843b087:	c7 44 24 04 60 4f c5 	movl   $0x8c54f60,0x4(%esp)
 843b08e:	08 
 843b08f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843b092:	89 04 24             	mov    %eax,(%esp)
 843b095:	e8 26 91 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843b09a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843b0a1:	00 
 843b0a2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843b0a5:	89 04 24             	mov    %eax,(%esp)
 843b0a8:	e8 79 92 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843b0ad:	83 f0 01             	xor    $0x1,%eax
 843b0b0:	84 c0                	test   %al,%al
 843b0b2:	74 0a                	je     843b0be <_ZN22DB_UpgradeAccountCargo8dispatchEiiP6Stream+0x148>
 843b0b4:	bb 00 00 00 00       	mov    $0x0,%ebx
 843b0b9:	e9 8c 00 00 00       	jmp    843b14a <_ZN22DB_UpgradeAccountCargo8dispatchEiiP6Stream+0x1d4>
 843b0be:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843b0c1:	89 04 24             	mov    %eax,(%esp)
 843b0c4:	e8 47 92 fb ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 843b0c9:	09 d0                	or     %edx,%eax
 843b0cb:	85 c0                	test   %eax,%eax
 843b0cd:	0f 94 c0             	sete   %al
 843b0d0:	84 c0                	test   %al,%al
 843b0d2:	74 29                	je     843b0fd <_ZN22DB_UpgradeAccountCargo8dispatchEiiP6Stream+0x187>
 843b0d4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843b0d7:	c6 00 15             	movb   $0x15,(%eax)
 843b0da:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 843b0df:	8d 55 e8             	lea    -0x18(%ebp),%edx
 843b0e2:	89 54 24 08          	mov    %edx,0x8(%esp)
 843b0e6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843b0ed:	00 
 843b0ee:	89 04 24             	mov    %eax,(%esp)
 843b0f1:	e8 e8 5e 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 843b0f6:	bb 01 00 00 00       	mov    $0x1,%ebx
 843b0fb:	eb 4d                	jmp    843b14a <_ZN22DB_UpgradeAccountCargo8dispatchEiiP6Stream+0x1d4>
 843b0fd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843b100:	c6 00 00             	movb   $0x0,(%eax)
 843b103:	8b 55 e0             	mov    -0x20(%ebp),%edx
 843b106:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843b109:	89 50 04             	mov    %edx,0x4(%eax)
 843b10c:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 843b111:	8d 55 e8             	lea    -0x18(%ebp),%edx
 843b114:	89 54 24 08          	mov    %edx,0x8(%esp)
 843b118:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843b11f:	00 
 843b120:	89 04 24             	mov    %eax,(%esp)
 843b123:	e8 b6 5e 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 843b128:	bb 01 00 00 00       	mov    $0x1,%ebx
 843b12d:	eb 1b                	jmp    843b14a <_ZN22DB_UpgradeAccountCargo8dispatchEiiP6Stream+0x1d4>
 843b12f:	89 d3                	mov    %edx,%ebx
 843b131:	89 c6                	mov    %eax,%esi
 843b133:	8d 45 e8             	lea    -0x18(%ebp),%eax
 843b136:	89 04 24             	mov    %eax,(%esp)
 843b139:	e8 94 17 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843b13e:	89 f0                	mov    %esi,%eax
 843b140:	89 da                	mov    %ebx,%edx
 843b142:	89 04 24             	mov    %eax,(%esp)
 843b145:	e8 06 86 6a 00       	call   8ae3750 <_Unwind_Resume>
 843b14a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 843b14d:	89 04 24             	mov    %eax,(%esp)
 843b150:	e8 7d 17 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843b155:	89 d8                	mov    %ebx,%eax
 843b157:	83 c4 30             	add    $0x30,%esp
 843b15a:	5b                   	pop    %ebx
 843b15b:	5e                   	pop    %esi
 843b15c:	5d                   	pop    %ebp
 843b15d:	c3                   	ret

```

```c
// DB_UpgradeAccountCargo::dispatch @ 0x843af76

/* DB_UpgradeAccountCargo::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_UpgradeAccountCargo::dispatch
          (DB_UpgradeAccountCargo *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint local_24;
  uint local_20;
  CStreamGuard local_1c [8];
  SIG_UPGRADE_ACCOUNT_CARGO_RESULT *local_14;
  MySQL *local_10;
  
  pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x8bfb);
  CStreamGuard::CStreamGuard(local_1c,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 0843afc7 to 0843b127 has its CatchHandler @ 0843b12f */
  CStreamGuard::operator<<(pCVar3,param_1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
  CStreamGuard::operator<<(pCVar3,param_2);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_1c);
  local_14 = CStreamGuard::GetInBuffer<SIG_UPGRADE_ACCOUNT_CARGO_RESULT>(pCVar3);
  memset(local_14,0,8);
  local_20 = 0;
  local_24 = 0;
  Stream::operator>>(param_3,&local_20);
  Stream::operator>>(param_3,&local_24);
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  uVar4 = NumberToString(local_20,0);
  MySQL::set_query(local_10,"upDate account_cargo set capacity = %d where m_id = %s",local_24,uVar4)
  ;
  cVar1 = MySQL::exec(local_10,true);
  if (cVar1 == '\x01') {
    lVar5 = MySQL::getAffectedRowCount(local_10);
    if (lVar5 == 0) {
      *local_14 = (SIG_UPGRADE_ACCOUNT_CARGO_RESULT)0x15;
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_1c);
      uVar4 = 1;
    }
    else {
      *local_14 = (SIG_UPGRADE_ACCOUNT_CARGO_RESULT)0x0;
      *(uint *)(local_14 + 4) = local_24;
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_1c);
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 0;
  }
  CStreamGuard::~CStreamGuard(local_1c);
  return uVar4;
}

```

---

## makeRequest

```asm
// === 0843b15e DB_UpgradeAccountCargo::makeRequest  [0x0843b15e-0x843b24d] ===
 843b15e:	55                   	push   %ebp
 843b15f:	89 e5                	mov    %esp,%ebp
 843b161:	56                   	push   %esi
 843b162:	53                   	push   %ebx
 843b163:	83 ec 20             	sub    $0x20,%esp
 843b166:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 843b16b:	c7 44 24 08 1d 8c 00 	movl   $0x8c1d,0x8(%esp)
 843b172:	00 
 843b173:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 843b17a:	08 
 843b17b:	89 04 24             	mov    %eax,(%esp)
 843b17e:	e8 03 49 e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 843b183:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 843b18a:	00 
 843b18b:	89 44 24 04          	mov    %eax,0x4(%esp)
 843b18f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843b192:	89 04 24             	mov    %eax,(%esp)
 843b195:	e8 8c da c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 843b19a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843b19d:	89 04 24             	mov    %eax,(%esp)
 843b1a0:	e8 a1 da c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843b1a5:	c7 44 24 04 ef 01 00 	movl   $0x1ef,0x4(%esp)
 843b1ac:	00 
 843b1ad:	89 04 24             	mov    %eax,(%esp)
 843b1b0:	e8 a1 da c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843b1b5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843b1b8:	89 04 24             	mov    %eax,(%esp)
 843b1bb:	e8 86 da c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843b1c0:	8b 55 08             	mov    0x8(%ebp),%edx
 843b1c3:	89 54 24 04          	mov    %edx,0x4(%esp)
 843b1c7:	89 04 24             	mov    %eax,(%esp)
 843b1ca:	e8 87 da c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843b1cf:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843b1d2:	89 04 24             	mov    %eax,(%esp)
 843b1d5:	e8 6c da c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843b1da:	8b 55 0c             	mov    0xc(%ebp),%edx
 843b1dd:	89 54 24 04          	mov    %edx,0x4(%esp)
 843b1e1:	89 04 24             	mov    %eax,(%esp)
 843b1e4:	e8 a9 70 ca ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 843b1e9:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843b1ec:	89 04 24             	mov    %eax,(%esp)
 843b1ef:	e8 52 da c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843b1f4:	8b 55 10             	mov    0x10(%ebp),%edx
 843b1f7:	89 54 24 04          	mov    %edx,0x4(%esp)
 843b1fb:	89 04 24             	mov    %eax,(%esp)
 843b1fe:	e8 8f 70 ca ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 843b203:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 843b208:	8d 55 f0             	lea    -0x10(%ebp),%edx
 843b20b:	89 54 24 08          	mov    %edx,0x8(%esp)
 843b20f:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843b216:	00 
 843b217:	89 04 24             	mov    %eax,(%esp)
 843b21a:	e8 bf 5d 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 843b21f:	eb 1b                	jmp    843b23c <_ZN22DB_UpgradeAccountCargo11makeRequestEijj+0xde>
 843b221:	89 d3                	mov    %edx,%ebx
 843b223:	89 c6                	mov    %eax,%esi
 843b225:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843b228:	89 04 24             	mov    %eax,(%esp)
 843b22b:	e8 a2 16 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843b230:	89 f0                	mov    %esi,%eax
 843b232:	89 da                	mov    %ebx,%edx
 843b234:	89 04 24             	mov    %eax,(%esp)
 843b237:	e8 14 85 6a 00       	call   8ae3750 <_Unwind_Resume>
 843b23c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843b23f:	89 04 24             	mov    %eax,(%esp)
 843b242:	e8 8b 16 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843b247:	83 c4 20             	add    $0x20,%esp
 843b24a:	5b                   	pop    %ebx
 843b24b:	5e                   	pop    %esi
 843b24c:	5d                   	pop    %ebp
 843b24d:	c3                   	ret

```

```c
// DB_UpgradeAccountCargo::makeRequest @ 0x843b15e

/* DB_UpgradeAccountCargo::makeRequest(int, unsigned int, unsigned int) */

void DB_UpgradeAccountCargo::makeRequest(int param_1,uint param_2,uint param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x8c1d);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0843b1b0 to 0843b21e has its CatchHandler @ 0843b221 */
  CStreamGuard::operator<<(pCVar2,0x1ef);
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

