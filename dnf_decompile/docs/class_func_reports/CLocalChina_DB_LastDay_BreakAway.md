# CLocalChina_DB_LastDay_BreakAway

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0812801a CLocalChina_DB_LastDay_BreakAway::dispatch  [0x0812801a-0x8128151] ===
 812801a:	55                   	push   %ebp
 812801b:	89 e5                	mov    %esp,%ebp
 812801d:	83 ec 38             	sub    $0x38,%esp
 8128020:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8128025:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 812802c:	00 
 812802d:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 8128034:	00 
 8128035:	89 04 24             	mov    %eax,(%esp)
 8128038:	e8 01 d2 2c 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 812803d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8128040:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8128047:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 812804e:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8128055:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8128058:	89 44 24 04          	mov    %eax,0x4(%esp)
 812805c:	8b 45 14             	mov    0x14(%ebp),%eax
 812805f:	89 04 24             	mov    %eax,(%esp)
 8128062:	e8 2f 47 4f 00       	call   861c796 <_ZN6StreamrsERj>
 8128067:	8d 45 e8             	lea    -0x18(%ebp),%eax
 812806a:	89 44 24 04          	mov    %eax,0x4(%esp)
 812806e:	8b 45 14             	mov    0x14(%ebp),%eax
 8128071:	89 04 24             	mov    %eax,(%esp)
 8128074:	e8 4b 45 4f 00       	call   861c5c4 <_ZN6StreamrsERi>
 8128079:	8d 45 ec             	lea    -0x14(%ebp),%eax
 812807c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8128080:	8b 45 14             	mov    0x14(%ebp),%eax
 8128083:	89 04 24             	mov    %eax,(%esp)
 8128086:	e8 39 45 4f 00       	call   861c5c4 <_ZN6StreamrsERi>
 812808b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 812808e:	85 c0                	test   %eax,%eax
 8128090:	74 07                	je     8128099 <_ZN32CLocalChina_DB_LastDay_BreakAway8dispatchEiiP6Stream+0x7f>
 8128092:	83 f8 01             	cmp    $0x1,%eax
 8128095:	74 35                	je     81280cc <_ZN32CLocalChina_DB_LastDay_BreakAway8dispatchEiiP6Stream+0xb2>
 8128097:	eb 64                	jmp    81280fd <_ZN32CLocalChina_DB_LastDay_BreakAway8dispatchEiiP6Stream+0xe3>
 8128099:	8b 45 f0             	mov    -0x10(%ebp),%eax
 812809c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81280a3:	00 
 81280a4:	89 04 24             	mov    %eax,(%esp)
 81280a7:	e8 9f 0f fe ff       	call   810904b <_Z14NumberToStringji>
 81280ac:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81280af:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81280b3:	89 54 24 08          	mov    %edx,0x8(%esp)
 81280b7:	c7 44 24 04 30 29 b6 	movl   $0x8b62930,0x4(%esp)
 81280be:	08 
 81280bf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81280c2:	89 04 24             	mov    %eax,(%esp)
 81280c5:	e8 f6 c0 2c 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 81280ca:	eb 31                	jmp    81280fd <_ZN32CLocalChina_DB_LastDay_BreakAway8dispatchEiiP6Stream+0xe3>
 81280cc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81280cf:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81280d6:	00 
 81280d7:	89 04 24             	mov    %eax,(%esp)
 81280da:	e8 6c 0f fe ff       	call   810904b <_Z14NumberToStringji>
 81280df:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81280e2:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81280e6:	89 54 24 08          	mov    %edx,0x8(%esp)
 81280ea:	c7 44 24 04 bc 29 b6 	movl   $0x8b629bc,0x4(%esp)
 81280f1:	08 
 81280f2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81280f5:	89 04 24             	mov    %eax,(%esp)
 81280f8:	e8 c3 c0 2c 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 81280fd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8128104:	00 
 8128105:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8128108:	89 04 24             	mov    %eax,(%esp)
 812810b:	e8 16 c2 2c 00       	call   83f4326 <_ZN5MySQL4execEb>
 8128110:	83 f0 01             	xor    $0x1,%eax
 8128113:	84 c0                	test   %al,%al
 8128115:	74 33                	je     812814a <_ZN32CLocalChina_DB_LastDay_BreakAway8dispatchEiiP6Stream+0x130>
 8128117:	c7 44 24 10 54 2a b6 	movl   $0x8b62a54,0x10(%esp)
 812811e:	08 
 812811f:	c7 44 24 0c 2f 04 00 	movl   $0x42f,0xc(%esp)
 8128126:	00 
 8128127:	c7 44 24 08 20 3b b6 	movl   $0x8b63b20,0x8(%esp)
 812812e:	08 
 812812f:	c7 44 24 04 0c 29 b6 	movl   $0x8b6290c,0x4(%esp)
 8128136:	08 
 8128137:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 812813e:	e8 c7 ba 9a 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8128143:	b8 00 00 00 00       	mov    $0x0,%eax
 8128148:	eb 05                	jmp    812814f <_ZN32CLocalChina_DB_LastDay_BreakAway8dispatchEiiP6Stream+0x135>
 812814a:	b8 01 00 00 00       	mov    $0x1,%eax
 812814f:	c9                   	leave
 8128150:	c3                   	ret
 8128151:	90                   	nop

```

```c
// CLocalChina_DB_LastDay_BreakAway::dispatch @ 0x812801a

/* CLocalChina_DB_LastDay_BreakAway::dispatch(int, int, Stream*) */

bool CLocalChina_DB_LastDay_BreakAway::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  Stream *in_stack_00000010;
  int local_1c;
  int local_18;
  uint local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  Stream::operator>>(in_stack_00000010,&local_14);
  Stream::operator>>(in_stack_00000010,&local_1c);
  Stream::operator>>(in_stack_00000010,&local_18);
  if (local_1c == 0) {
    uVar2 = NumberToString(local_14,0);
    MySQL::set_query(local_10,
                     "UPDATE churn_member_info \t\t\t\t  SET quest_time = UNIX_TIMESTAMP(SUBDATE(FROM_UNIXTIME(quest_time), INTERVAL %d DAY)) \t\t\t\t   WHERE m_id=%s"
                     ,local_18,uVar2);
  }
  else if (local_1c == 1) {
    uVar2 = NumberToString(local_14,0);
    MySQL::set_query(local_10,
                     "UPDATE churn_member_info \t\t\t\t  SET last_reward_time = UNIX_TIMESTAMP(SUBDATE(FROM_UNIXTIME(last_reward_time), INTERVAL %d DAY)) \t\t\t\t   WHERE m_id=%s"
                     ,local_18,uVar2);
  }
  cVar1 = MySQL::exec(local_10,true);
  if (cVar1 != '\x01') {
    LogManager::logFormat
              (1,"localchina/localchina_DBThread.cpp",
               "virtual bool CLocalChina_DB_LastDay_BreakAway::dispatch(int, int, Stream*)",0x42f,
               "[GM]CLocalChina_DB_LastDay_BreakAway Fail!!");
  }
  return cVar1 == '\x01';
}

```

---

## makeRequest

```asm
// === 08128152 CLocalChina_DB_LastDay_BreakAway::makeRequest  [0x08128152-0x812825d] ===
 8128152:	55                   	push   %ebp
 8128153:	89 e5                	mov    %esp,%ebp
 8128155:	56                   	push   %esi
 8128156:	53                   	push   %ebx
 8128157:	83 ec 20             	sub    $0x20,%esp
 812815a:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 812815f:	c7 44 24 08 38 04 00 	movl   $0x438,0x8(%esp)
 8128166:	00 
 8128167:	c7 44 24 04 0c 29 b6 	movl   $0x8b6290c,0x4(%esp)
 812816e:	08 
 812816f:	89 04 24             	mov    %eax,(%esp)
 8128172:	e8 0f 79 16 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8128177:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 812817e:	00 
 812817f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8128183:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8128186:	89 04 24             	mov    %eax,(%esp)
 8128189:	e8 98 0a fa ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 812818e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8128191:	89 04 24             	mov    %eax,(%esp)
 8128194:	e8 ad 0a fa ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8128199:	c7 44 24 04 de 02 00 	movl   $0x2de,0x4(%esp)
 81281a0:	00 
 81281a1:	89 04 24             	mov    %eax,(%esp)
 81281a4:	e8 ad 0a fa ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81281a9:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81281ac:	89 04 24             	mov    %eax,(%esp)
 81281af:	e8 92 0a fa ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81281b4:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 81281bb:	ff 
 81281bc:	89 04 24             	mov    %eax,(%esp)
 81281bf:	e8 92 0a fa ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81281c4:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81281c7:	89 04 24             	mov    %eax,(%esp)
 81281ca:	e8 77 0a fa ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81281cf:	8b 55 08             	mov    0x8(%ebp),%edx
 81281d2:	89 54 24 04          	mov    %edx,0x4(%esp)
 81281d6:	89 04 24             	mov    %eax,(%esp)
 81281d9:	e8 b4 a0 fb ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 81281de:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81281e1:	89 04 24             	mov    %eax,(%esp)
 81281e4:	e8 5d 0a fa ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81281e9:	8b 55 10             	mov    0x10(%ebp),%edx
 81281ec:	89 54 24 04          	mov    %edx,0x4(%esp)
 81281f0:	89 04 24             	mov    %eax,(%esp)
 81281f3:	e8 5e 0a fa ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81281f8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81281fb:	89 04 24             	mov    %eax,(%esp)
 81281fe:	e8 43 0a fa ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8128203:	8b 55 0c             	mov    0xc(%ebp),%edx
 8128206:	89 54 24 04          	mov    %edx,0x4(%esp)
 812820a:	89 04 24             	mov    %eax,(%esp)
 812820d:	e8 44 0a fa ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8128212:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8128217:	8d 55 f0             	lea    -0x10(%ebp),%edx
 812821a:	89 54 24 08          	mov    %edx,0x8(%esp)
 812821e:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8128225:	00 
 8128226:	89 04 24             	mov    %eax,(%esp)
 8128229:	e8 b0 8d 44 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 812822e:	eb 1b                	jmp    812824b <_ZN32CLocalChina_DB_LastDay_BreakAway11makeRequestEjii+0xf9>
 8128230:	89 d3                	mov    %edx,%ebx
 8128232:	89 c6                	mov    %eax,%esi
 8128234:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8128237:	89 04 24             	mov    %eax,(%esp)
 812823a:	e8 93 46 4f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 812823f:	89 f0                	mov    %esi,%eax
 8128241:	89 da                	mov    %ebx,%edx
 8128243:	89 04 24             	mov    %eax,(%esp)
 8128246:	e8 05 b5 9b 00       	call   8ae3750 <_Unwind_Resume>
 812824b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 812824e:	89 04 24             	mov    %eax,(%esp)
 8128251:	e8 7c 46 4f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8128256:	83 c4 20             	add    $0x20,%esp
 8128259:	5b                   	pop    %ebx
 812825a:	5e                   	pop    %esi
 812825b:	5d                   	pop    %ebp
 812825c:	c3                   	ret
 812825d:	90                   	nop

```

```c
// CLocalChina_DB_LastDay_BreakAway::makeRequest @ 0x8128152

/* CLocalChina_DB_LastDay_BreakAway::makeRequest(unsigned int, int, int) */

void CLocalChina_DB_LastDay_BreakAway::makeRequest(uint param_1,int param_2,int param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,"localchina/localchina_DBThread.cpp",0x438)
  ;
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 081281a4 to 0812822d has its CatchHandler @ 08128230 */
  CStreamGuard::operator<<(pCVar2,0x2de);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

