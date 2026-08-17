# DB_InsertEventStageLog

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 08449144 DB_InsertEventStageLog::dispatch  [0x08449144-0x844920d] ===
 8449144:	55                   	push   %ebp
 8449145:	89 e5                	mov    %esp,%ebp
 8449147:	57                   	push   %edi
 8449148:	56                   	push   %esi
 8449149:	53                   	push   %ebx
 844914a:	83 ec 4c             	sub    $0x4c,%esp
 844914d:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8449152:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8449159:	00 
 844915a:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 8449161:	00 
 8449162:	89 04 24             	mov    %eax,(%esp)
 8449165:	e8 d4 c0 fa ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 844916a:	89 45 e0             	mov    %eax,-0x20(%ebp)
 844916d:	8b 45 14             	mov    0x14(%ebp),%eax
 8449170:	89 04 24             	mov    %eax,(%esp)
 8449173:	e8 02 b5 00 00       	call   845467a <_ZN6Stream12GetOutBufferI19SIG_EVENT_STAGE_LOGEEPT_v>
 8449178:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 844917b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 844917e:	83 c0 14             	add    $0x14,%eax
 8449181:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8449184:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8449187:	8b 78 10             	mov    0x10(%eax),%edi
 844918a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 844918d:	8b 70 0c             	mov    0xc(%eax),%esi
 8449190:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8449193:	8b 58 08             	mov    0x8(%eax),%ebx
 8449196:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8449199:	8b 40 04             	mov    0x4(%eax),%eax
 844919c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84491a3:	00 
 84491a4:	89 04 24             	mov    %eax,(%esp)
 84491a7:	e8 9f fe cb ff       	call   810904b <_Z14NumberToStringji>
 84491ac:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84491af:	8b 12                	mov    (%edx),%edx
 84491b1:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 84491b4:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 84491b8:	89 7c 24 18          	mov    %edi,0x18(%esp)
 84491bc:	89 74 24 14          	mov    %esi,0x14(%esp)
 84491c0:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 84491c4:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84491c8:	89 54 24 08          	mov    %edx,0x8(%esp)
 84491cc:	c7 44 24 04 f4 8a c5 	movl   $0x8c58af4,0x4(%esp)
 84491d3:	08 
 84491d4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84491d7:	89 04 24             	mov    %eax,(%esp)
 84491da:	e8 e1 af fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84491df:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84491e6:	00 
 84491e7:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84491ea:	89 04 24             	mov    %eax,(%esp)
 84491ed:	e8 34 b1 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 84491f2:	83 f0 01             	xor    $0x1,%eax
 84491f5:	84 c0                	test   %al,%al
 84491f7:	74 07                	je     8449200 <_ZN22DB_InsertEventStageLog8dispatchEiiP6Stream+0xbc>
 84491f9:	b8 00 00 00 00       	mov    $0x0,%eax
 84491fe:	eb 05                	jmp    8449205 <_ZN22DB_InsertEventStageLog8dispatchEiiP6Stream+0xc1>
 8449200:	b8 01 00 00 00       	mov    $0x1,%eax
 8449205:	83 c4 4c             	add    $0x4c,%esp
 8449208:	5b                   	pop    %ebx
 8449209:	5e                   	pop    %esi
 844920a:	5f                   	pop    %edi
 844920b:	5d                   	pop    %ebp
 844920c:	c3                   	ret
 844920d:	90                   	nop

```

```c
// DB_InsertEventStageLog::dispatch @ 0x8449144

/* DB_InsertEventStageLog::dispatch(int, int, Stream*) */

bool DB_InsertEventStageLog::dispatch(int param_1,int param_2,Stream *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  MySQL *this;
  SIG_EVENT_STAGE_LOG *pSVar5;
  undefined4 uVar6;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  pSVar5 = Stream::GetOutBuffer<SIG_EVENT_STAGE_LOG>(in_stack_00000010);
  uVar1 = *(undefined4 *)(pSVar5 + 0x10);
  uVar2 = *(undefined4 *)(pSVar5 + 0xc);
  uVar3 = *(undefined4 *)(pSVar5 + 8);
  uVar6 = NumberToString(*(uint *)(pSVar5 + 4),0);
  MySQL::set_query(this,
                   "inSert into dnf_event_accept_list(event_id,m_id,charac_no,server_info,occ_date,stage,stage_result) values(%d,%s,%d,%d,now(),%d,\'%s\')"
                   ,*(undefined4 *)pSVar5,uVar6,uVar3,uVar2,uVar1,pSVar5 + 0x14);
  cVar4 = MySQL::exec(this,true);
  return cVar4 == '\x01';
}

```

---

## makeRequest

```asm
// === 0844920e DB_InsertEventStageLog::makeRequest  [0x0844920e-0x84492fb] ===
 844920e:	55                   	push   %ebp
 844920f:	89 e5                	mov    %esp,%ebp
 8449211:	56                   	push   %esi
 8449212:	53                   	push   %ebx
 8449213:	83 ec 20             	sub    $0x20,%esp
 8449216:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 844921b:	c7 44 24 08 df b7 00 	movl   $0xb7df,0x8(%esp)
 8449222:	00 
 8449223:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 844922a:	08 
 844922b:	89 04 24             	mov    %eax,(%esp)
 844922e:	e8 53 68 e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8449233:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 844923a:	00 
 844923b:	89 44 24 04          	mov    %eax,0x4(%esp)
 844923f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8449242:	89 04 24             	mov    %eax,(%esp)
 8449245:	e8 dc f9 c7 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 844924a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 844924d:	89 04 24             	mov    %eax,(%esp)
 8449250:	e8 f1 f9 c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8449255:	c7 44 24 04 33 03 00 	movl   $0x333,0x4(%esp)
 844925c:	00 
 844925d:	89 04 24             	mov    %eax,(%esp)
 8449260:	e8 f1 f9 c7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8449265:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8449268:	89 04 24             	mov    %eax,(%esp)
 844926b:	e8 d6 f9 c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8449270:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8449277:	ff 
 8449278:	89 04 24             	mov    %eax,(%esp)
 844927b:	e8 d6 f9 c7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8449280:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8449283:	89 04 24             	mov    %eax,(%esp)
 8449286:	e8 c3 f9 c7 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 844928b:	89 04 24             	mov    %eax,(%esp)
 844928e:	e8 3b b4 00 00       	call   84546ce <_ZN12CStreamGuard11GetInBufferI19SIG_EVENT_STAGE_LOGEEPT_v>
 8449293:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8449296:	c7 44 24 08 78 00 00 	movl   $0x78,0x8(%esp)
 844929d:	00 
 844929e:	8b 45 08             	mov    0x8(%ebp),%eax
 84492a1:	89 44 24 04          	mov    %eax,0x4(%esp)
 84492a5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84492a8:	89 04 24             	mov    %eax,(%esp)
 84492ab:	e8 f0 45 c3 ff       	call   807d8a0 <memcpy@plt>
 84492b0:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84492b5:	8d 55 ec             	lea    -0x14(%ebp),%edx
 84492b8:	89 54 24 08          	mov    %edx,0x8(%esp)
 84492bc:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84492c3:	00 
 84492c4:	89 04 24             	mov    %eax,(%esp)
 84492c7:	e8 12 7d 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84492cc:	eb 1b                	jmp    84492e9 <_ZN22DB_InsertEventStageLog11makeRequestER19SIG_EVENT_STAGE_LOG+0xdb>
 84492ce:	89 d3                	mov    %edx,%ebx
 84492d0:	89 c6                	mov    %eax,%esi
 84492d2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84492d5:	89 04 24             	mov    %eax,(%esp)
 84492d8:	e8 f5 35 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84492dd:	89 f0                	mov    %esi,%eax
 84492df:	89 da                	mov    %ebx,%edx
 84492e1:	89 04 24             	mov    %eax,(%esp)
 84492e4:	e8 67 a4 69 00       	call   8ae3750 <_Unwind_Resume>
 84492e9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84492ec:	89 04 24             	mov    %eax,(%esp)
 84492ef:	e8 de 35 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84492f4:	83 c4 20             	add    $0x20,%esp
 84492f7:	5b                   	pop    %ebx
 84492f8:	5e                   	pop    %esi
 84492f9:	5d                   	pop    %ebp
 84492fa:	c3                   	ret
 84492fb:	90                   	nop

```

```c
// DB_InsertEventStageLog::makeRequest @ 0x844920e

/* DB_InsertEventStageLog::makeRequest(SIG_EVENT_STAGE_LOG&) */

void DB_InsertEventStageLog::makeRequest(SIG_EVENT_STAGE_LOG *param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_EVENT_STAGE_LOG *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xb7df);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08449260 to 084492cb has its CatchHandler @ 084492ce */
  CStreamGuard::operator<<(pCVar2,0x333);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_EVENT_STAGE_LOG>(pCVar2);
  memcpy(local_10,param_1,0x78);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

